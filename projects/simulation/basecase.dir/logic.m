// Models the Arrival process of customers who come after making an appointment.
// this needs a dummy load to trigger load generation
begin P_checkUpLoad_distribution arriving  

	
	//-----Trigger initial condition : 3 people are already queuing before UHC opens
	clone 3 load to P_registration nlt L_checkUp
	
	while 1=1 do
		begin
		if ac < 12600 then
			begin
				clone 1 load to P_registration nlt L_checkUp
				
				wait for exponential 329.7 sec
			end
		else // registration is closed after 4 hours of operation
			begin	
				send to die
			end
		end
end

// Models the Arrival process of customers who come as a patient
// this needs a dummy load to trigger load generation
begin P_outPatientLoad_distribution arriving
	
	//-----Trigger intial condition : 8 patients are already queuing before UHC opens
	clone 8 load to P_registration nlt L_outPatient
	
	while 1=1 do
		begin
		if ac < 7200 then //peak period
			begin
				clone 1 load to P_registration nlt L_outPatient
				
				wait for exponential 185.8	sec
			end
		else if ac < 12600 //non-peak period
			begin
				clone 1 load to P_registration nlt L_outPatient
				wait for lognormal 4.87, 1.4 sec	
			end
		else // registration is closed after 4 hours of operation
			begin
				send to die
			end
		end
end


// Models the regstration process
begin P_registration arriving 
	set A_startTimeRegister to ac
	move into Q_registrationWait //infinite capacity

	// Allocate the customers to join a server in the following manner:
	// If multiple servers are idle, they choose one of them randomly
	// If no server is idle, they choose the first server that becomes idle
	if ac < 7200 then // 4 counters are operational during peak period
		begin
			choose a queue from among Q_registration(1), Q_registration(2), Q_registration(3),  Q_registration(4)
			whose current loads is minimum
			save choice as A_qPointer
			set A_index = A_qPointer index //A_index is a load attribute. A_qPpointer is a load attribute queue ptr
		end
	else  // 3 counters are operational after peak period
		begin
			choose a queue from among Q_registration(1), Q_registration(2), Q_registration(3)
			whose current loads is minimum
			save choice as A_qPointer
			set A_index = A_qPointer index //A_index is a load attribute
		end
		
	move into Q_registration(A_index)
	
	set A_endTimeRegister to ac
	set A_registrationWaitingTime to A_endTimeRegister-A_startTimeRegister
	
	use R_registration(A_index) for lognormal 4.78, 0.853 sec
	if load type = L_checkUp then 
		begin
			print this load " left SERVER " A_index  " to enter Check Up " to message
			send to P_preCheckUp
		end
	else if load type = L_outPatient then 
		begin
			print this load " left SERVER " A_index  " to enter Consultation " to message
			send to P_consultation
		end
end

// seperate appointment patient into treatment or check up
begin P_preCheckUp arriving 
	send to oneof (85:P_treatment, 15:P_checkUp)  
end

// Customer who comes for check up proceed to go for doctor consultation
begin P_checkUp arriving
	move into Q_checkUp // infinite capacity
	wait for lognormal 7.104, 0.44094 sec
	send to P_consultation
end

// Customer who received treatment leaves the system
begin P_treatment arriving
	send to die
end

// Models the doctor consultation process
// This process involves 6 doctors (Q_doctor) with their own queues (Q_doctor _wait)
begin P_consultation arriving
	
	//------Find the minimum combined amount of customers in each doctor room and doctor queue (Q_doctor + Q_doctor_wait)----------------------------
	set A_set to 1
	set A_min to (Q_doctor(1) absolute current + Q_doctor_wait(1) absolute current) // initial value for min
	set A_qPointer to Q_doctor_wait(1)
	
	while A_set < 7 do
		begin
		set A_numberOfCustomersInQueueAndDoc to (Q_doctor(A_set) absolute current + Q_doctor_wait(A_set) absolute current)
		if A_numberOfCustomersInQueueAndDoc < A_min then
			
			begin 
				set A_min to A_numberOfCustomersInQueueAndDoc
				set A_qPointer to Q_doctor_wait(A_set)
			end	
		set A_set to (A_set + 1)
		end		
	//-------------------------------------------------------------------------------------------------------------
	
	//----------Count the amount of minimum 'A_numberOfCustomersInQueueAndDoc'------------------------------------------------
	//----------Save as A_count  ----------------------------------------------------------------------------------
	set A_count to 0
	set A_set to 1
	
	while A_set < 7 do
		begin
		set A_numberOfCustomersInQueueAndDoc to (Q_doctor(A_set) absolute current + Q_doctor_wait(A_set) absolute current)
		if A_numberOfCustomersInQueueAndDoc = A_min then 
			begin
				set A_count to (A_count + 1 )
			end	
		set A_set to (A_set + 1 )	
		end
	//------------------------------------------------------------------------------------------------------------
	
	//----------Find the shortest doctor queue------------------------------------------------------------------
	//----------If multiple queues are empty, choose the queue which leads to an idle doctor
	//----------If multiple doctors are idle, choose one idle doctor randomly
	set A_qPointer1 to Q_doctor_wait(1)
	set A_qPointer2 to Q_doctor_wait(1)
	set A_qPointer3 to Q_doctor_wait(1)
	set A_qPointer4 to Q_doctor_wait(1)
	set A_qPointer5 to Q_doctor_wait(1)
	set A_qPointer6 to Q_doctor_wait(1)
	set A_qPointerFinal to Q_doctor_wait(1)
	set A_set to 1
	set A_innerCount to 1
	
	if A_count = 1 then
		begin
			while A_set < 7 do
				begin
				set A_numberOfCustomersInQueueAndDoc to (Q_doctor(A_set) absolute current + Q_doctor_wait(A_set) absolute current)
				if A_numberOfCustomersInQueueAndDoc = A_min then 
					begin
						set A_qPointer1 to Q_doctor_wait(A_set)
					end
				set A_set to ( A_set + 1 )
				end
		set A_qPointerFinal to A_qPointer1
		end
	else if A_count = 2 then 
		begin
			while A_set < 7 do
				begin
				set A_numberOfCustomersInQueueAndDoc to (Q_doctor(A_set) absolute current + Q_doctor_wait(A_set) absolute current)
				if  A_numberOfCustomersInQueueAndDoc = A_min  then
					begin
						if A_innerCount = 1 then
							begin
								set A_innerCount to (A_innerCount + 1)
								set A_qPointer1 to Q_doctor_wait(A_set)
							end
						else if A_innerCount = 2 then
							begin
								set A_qPointer2 to Q_doctor_wait(A_set)
							end
					end
				set A_set to (A_set + 1 )
				end
		set A_qPointerFinal to oneof (50:A_qPointer1, 50:A_qPointer2)
		end
	else if A_count = 3 then
		begin
			while A_set < 7 do
				begin
				set A_numberOfCustomersInQueueAndDoc to (Q_doctor(A_set) absolute current + Q_doctor_wait(A_set) absolute current)
				if  A_numberOfCustomersInQueueAndDoc = A_min  then
					begin
						if A_innerCount = 1 then
							begin
								set A_innerCount to (A_innerCount + 1)
								set A_qPointer1 to Q_doctor_wait(A_set)
							end
						else if A_innerCount = 2 then
							begin
								set A_qPointer2 to Q_doctor_wait(A_set)
								set A_innerCount to (A_innerCount + 1)
							end
						else if A_innerCount = 3 then
							begin
								set A_qPointer3 to Q_doctor_wait(A_set)
							end 
					end
				set A_set to (A_set + 1 )
				end
		set A_qPointerFinal to oneof (33.33:A_qPointer1, 33.33:A_qPointer2, 33.33:A_qPointer3)
		end //end of A_count=3
	else if A_count = 4 then
		begin
			while A_set < 7 do
				begin
				set A_numberOfCustomersInQueueAndDoc to (Q_doctor(A_set) absolute current + Q_doctor_wait(A_set) absolute current)
				if  A_numberOfCustomersInQueueAndDoc = A_min  then
					begin
						if A_innerCount = 1 then
							begin
								set A_innerCount to (A_innerCount+1)
								set A_qPointer1 to Q_doctor_wait(A_set)
							end
						else if A_innerCount = 2 then
							begin
								set A_qPointer2 to Q_doctor_wait(A_set)
								set A_innerCount to (A_innerCount+1)
							end
						else if A_innerCount = 3 then
							begin
								set A_qPointer3 to Q_doctor_wait(A_set)
								set A_innerCount to (A_innerCount+1)
							end 
						else if A_innerCount = 4 then
							begin
								set A_qPointer4 to Q_doctor_wait(A_set)
								set A_innerCount to (A_innerCount+1)	
							end
					end //end of A_min block
				set A_set to (A_set + 1 )
				end //end of while loop
		set A_qPointerFinal to oneof (25:A_qPointer1, 25:A_qPointer2, 25:A_qPointer3, 25:A_qPointer4)
		end //end of A_count=4
	else if A_count = 5 then
		begin
			while A_set < 7 do
				begin
				set A_numberOfCustomersInQueueAndDoc to (Q_doctor(A_set) absolute current + Q_doctor_wait(A_set) absolute current)
				if  A_numberOfCustomersInQueueAndDoc = A_min  then
					begin
						if A_innerCount = 1 then
							begin
								set A_innerCount to (A_innerCount+1)
								set A_qPointer1 to Q_doctor_wait(A_set)
							end
						else if A_innerCount = 2 then
							begin
								set A_qPointer2 to Q_doctor_wait(A_set)
								set A_innerCount to (A_innerCount+1)
							end
						else if A_innerCount = 3 then
							begin
								set A_qPointer3 to Q_doctor_wait(A_set)
								set A_innerCount to (A_innerCount+1)
							end 
						else if A_innerCount = 4 then
							begin
								set A_qPointer4 to Q_doctor_wait(A_set)
								set A_innerCount to (A_innerCount+1)	
							end
						else if A_innerCount = 5 then
							begin
								set A_qPointer5 to Q_doctor_wait(A_set)
								set A_innerCount to (A_innerCount+1)
							end
					end //end of A_min block
				set A_set to (A_set + 1 )
				end //end of while loop
		set A_qPointerFinal to oneof (20:A_qPointer1, 20:A_qPointer2, 20:A_qPointer3, 20:A_qPointer4, 20:A_qPointer5)
		end //end of A_count=5
	else if A_count = 6 then
		begin
			while A_set < 7 do
				begin
				set A_numberOfCustomersInQueueAndDoc to (Q_doctor(A_set) absolute current + Q_doctor_wait(A_set) absolute current)
				if  A_numberOfCustomersInQueueAndDoc = A_min  then
					begin
						if A_innerCount = 1 then
							begin
								set A_innerCount to (A_innerCount+1)
								set A_qPointer1 to Q_doctor_wait(A_set)
							end
						else if A_innerCount = 2 then
							begin
								set A_qPointer2 to Q_doctor_wait(A_set)
								set A_innerCount to (A_innerCount+1)
							end
						else if A_innerCount = 3 then
							begin
								set A_qPointer3 to Q_doctor_wait(A_set)
								set A_innerCount to (A_innerCount+1)
							end 
						else if A_innerCount = 4 then
							begin
								set A_qPointer4 to Q_doctor_wait(A_set)
								set A_innerCount to (A_innerCount+1)	
							end
						else if A_innerCount = 5 then
							begin
								set A_qPointer5 to Q_doctor_wait(A_set)
								set A_innerCount to (A_innerCount+1)
							end
						else if A_innerCount = 6 then
							begin
								set A_qPointer6 to Q_doctor_wait(A_set)
								set A_innerCount to (A_innerCount+1)
							end
					end //end of A_min block
				set A_set to (A_set + 1 )
				end //end of while loop
		set A_qPointerFinal to oneof (16.667:A_qPointer1, 16.667:A_qPointer2, 16.667:A_qPointer3, 16.667:A_qPointer4, 16.667:A_qPointer5, 16.667:A_qPointer6)
		end //end of A_count=6

	//-----------A_qPointerFinal now holds the selected queue to go into---------------------------------------
	//------------------------------------------------------------------------------------------------------------

	
	set A_index to A_qPointerFinal index //change Vs to attributes
	
	set A_startTimeDoctor to ac
	
	move into Q_doctor_wait(A_index) //infinite capacity
	move into Q_doctor(A_index) //Capacity of 1
	
	set A_endTimeDoctor to ac
	set A_doctorWaitingTime to (A_endTimeDoctor - A_startTimeDoctor)
	
	use R_doctor(A_index) for lognormal 5.87, 0.579 sec
	
	if load type = L_checkUp then clone 1 load to P_pharmacy nlt L_checkUp
	else if load type = L_outPatient then clone 1 load to P_pharmacy nlt L_outPatient
	
	
	//--------Model the administrative work done by doctors after each consultation-----------
	
	take down R_doctor(A_index)
	wait for exponential 702.4186 sec
	bring up R_doctor(A_index)

	send to die
	//----------------------------------------------------------------------------
	
end

// Model the medicine collection process at pharmacy
begin P_pharmacy arriving
	set A_startTimePharmacy to ac
	move into Q_pharmacy_wait
	choose a queue from among Q_pharmacy(1), Q_pharmacy(2)
		whose current loads is minimum
	save choice as A_qPointer
	set A_index to A_qPointer index
	
	move into Q_pharmacy(A_index) //Single capacity
	
	set A_endTimePharmacy to ac
	set A_pharmacyWaitingTime to (A_endTimePharmacy-A_startTimePharmacy)
	
	use R_pharmacy(A_index) for lognormal 5.22967, 0.8344 sec
	
	send to oneof (58:P_cashier, 42:P_leaving)
	
end

// Model the payment process at cashier
begin P_cashier arriving
	move into Q_cashier_wait
	move into Q_cashier
	use R_cashier for lognormal 3.80, 0.604 sec
	send to P_leaving
end

// Find the maximum queueing time for each main processes
// The customer leaves the system
begin P_leaving arriving
	if (A_registrationWaitingTime > V_maxRegistrationWT) then
		begin
			set	V_maxRegistrationWT to A_registrationWaitingTime
		end
	if (A_doctorWaitingTime > V_maxdoctorWT) then
		begin
			set	V_maxdoctorWT to A_doctorWaitingTime
		end
	if (A_pharmacyWaitingTime > V_maxPharmacyWT) then
		begin
			set	V_maxPharmacyWT to A_pharmacyWaitingTime
		end
	send to die
end

