VERSION 14.0.0.14
SYSTYPE Process
UNITS Feet Seconds
SYSDEF UtilByAvail off RefCheck on debugger off warningMessages on report standard
FLAGS
	System Inherit
	Text Inherit
	Resources Inherit
	Resource Names Inherit
	Queues Inherit
	Queue Names Inherit
	Queue Amounts Inherit
	Blocks Inherit
	Block Names Inherit
	Labels Inherit
PROCDEF
PROC name P_registration 0 traf Infinite
PROC name P_checkUp_initialise 0 traf Infinite
PROC name P_outPatient_initalise 0 traf Infinite
PROC name P_consultation 0 traf Infinite
PROC name P_checkUp 0 traf Infinite
PROC name P_preCheckUp 0 traf Infinite
PROC name P_treatment 0 traf Infinite
PROC name P_pharmacy 0 traf Infinite
PROC name P_cashier 0 traf Infinite
PROC name P_checkUpLoad_distribution 0 traf Infinite
PROC name P_outPatientLoad_distribution 0 traf Infinite
PROC name P_doctor_breakdown 0 traf Infinite
PROC name P_leaving 0 traf Infinite
LDTYPE name L_outPatient 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 1 none
1 1 1 1 1 0 0
end
LDTYPE name L_checkUp 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 1 none
1 1 1 1 1 0 0
end
LDTYPE name L_dummy_outPatient 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 1 none
1 1 1 1 1 0 0
end
		create con 0 Seconds stream stream_L_dummy_outPatient_1 First P_outPatientLoad_distribution 0 Limit 1
LDTYPE name L_dummy_checkUp 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 1 none
1 1 1 1 1 0 0
end
		create con 0 Seconds stream stream_L_dummy_checkUp_1 First P_checkUpLoad_distribution 0 Limit 1
LDTYPE name L_dummy_Doctor_down 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 1 none
1 1 1 1 1 0 0
end
		create con 0 Seconds stream stream_L_dummy_Doctor_down_1 First P_doctor_breakdown 0 Limit 6
RSRC name R_registration 4 cap 1 prtime con 5 Seconds stream stream_R_registration_1

	UserDef	template Feet
700 17
-1 -1 0 1 1 none
1
310 17
-1 -1 0 1 1 none
4 4 4 4 4 0 0
end
		
RSRC name R_doctor 6 cap 1 prtime con 5 Seconds stream stream_R_doctor_1

	UserDef	template Feet
700 17
-1 -1 0 1 1 none
1
310 17
-1 -1 0 1 1 none
4 4 4 4 4 0 0
end
		
RSRC name R_pharmacy 2 cap 1 prtime con 5 Seconds stream stream_R_pharmacy_1

	UserDef	template Feet
700 17
-1 -1 0 1 1 none
1
310 17
-1 -1 0 1 1 none
4 4 4 4 4 0 0
end
		
RSRC name R_cashier 0 cap 1 prtime con 5 Seconds stream stream_R_cashier_1

	UserDef
		
QUEUE name Q_registrationWait 0 cap 2147483647

	UserDef

QUEUE name Q_doctor_wait 6 cap 2147483647

	UserDef	template Feet
700 17
-1 -1 0 1 1 none
1
310 17
-1 -1 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_doctor 6 cap 1

	UserDef	template Feet
700 17
-1 -1 0 1 1 none
1
310 17
-1 -1 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_pharmacy_wait 0 cap 2147483647

	UserDef

QUEUE name Q_cashier_wait 0 cap 2147483647

	UserDef

QUEUE name Q_cashier 0 cap 1

	UserDef

QUEUE name Q_pharmacy 2 cap 1

	UserDef	template Feet
700 17
-1 -1 0 1 1 none
1
310 17
-1 -1 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_registration 4 cap 1

	UserDef	template Feet
700 17
-1 -1 0 1 1 none
1
310 17
-1 -1 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_checkUp 0 cap 2147483647

	UserDef

ATT name A_index 0 type Integer
ATT name A_qPointer 0 type QueuePtr
ATT name A_registrationWaitingTime 0 type Time
ATT name A_endTimeRegister 0 type Time
ATT name A_set 0 type Integer
ATT name A_min 0 type Integer
ATT name A_count 0 type Integer
ATT name A_qPointer1 0 type QueuePtr
ATT name A_qPointer2 0 type QueuePtr
ATT name A_qPointer3 0 type QueuePtr
ATT name A_qPointer4 0 type QueuePtr
ATT name A_qPointer5 0 type QueuePtr
ATT name A_qPointer6 0 type QueuePtr
ATT name A_qPointerFinal 0 type QueuePtr
ATT name A_innerCount 0 type Integer
ATT name A_startTimeDoctor 0 type Time
ATT name A_endTimeDoctor 0 type Time
ATT name A_doctorWaitingTime 0 type Time
ATT name A_startTimePharmacy 0 type Time
ATT name A_endTimePharmacy 0 type Time
ATT name A_pharmacyWaitingTime 0 type Time
ATT name A_startTimeRegister 0 type Time
ATT name A_numberOfCustomersInQueueAndDoc 0 type Integer
VAR name V_maxRegistrationWT 0 type Time
VAR name V_maxDoctorWT 0 type Time
VAR name V_maxPharmacyWT 0 type Time
VAR name V_maxdoctorWT 0 type Time
RNSTREAM stream0 0 type CMRG flags 1
	cmrgseed 1 12345 12345 12345 12345 12345 12345
RNSTREAM stream_R_registration_1 4 type CMRG flags 1
	title "Generated automatically for R_registration"
	cmrgseed 1 2338701263 1119171942 2570676563 317077452 3194180850 618832124
	cmrgseed 2 1597262096 3906379055 3312112953 1016013135 4099474108 275305423
	cmrgseed 3 97147054 3131372450 829345164 3691032523 3006063034 4259826321
	cmrgseed 4 796079799 2105258207 955365076 2923159030 4116632677 3067683584
RNSTREAM stream_R_doctor_1 6 type CMRG flags 1
	title "Generated automatically for R_doctor"
	cmrgseed 1 3281794178 2616230133 1457051261 2762791137 2480527362 2282316169
	cmrgseed 2 3777646647 1837464056 4204654757 664239048 4190510072 2959195122
	cmrgseed 3 4215590817 3862461878 1087200967 1544910132 936383720 1611370123
	cmrgseed 4 1683636369 362165168 814316280 869382050 980203903 2062101717
	cmrgseed 5 272317999 166758548 310112982 201045826 1680231254 118290799
	cmrgseed 6 2245755202 1652682525 2865544364 721509566 209733568 592362218
RNSTREAM stream_R_pharmacy_1 2 type CMRG flags 1
	title "Generated automatically for R_pharmacy"
	cmrgseed 1 3003961408 3529909391 14538032 3603919910 566682685 1235016484
	cmrgseed 2 596094074 2279636413 3050913596 1739649456 2368706608 3058697049
RNSTREAM stream_R_cashier_1 0 type CMRG flags 1
	title "Generated automatically for R_cashier"
	cmrgseed 1 1437096527 2547142266 2541498983 2640839690 2160978219 2618657830
RNSTREAM stream_L_dummy_outPatient_1 0 type CMRG flags 1
	title "Generated automatically for L_dummy_outPatient"
	cmrgseed 1 3224044943 1227141655 2220611050 1504589054 2829780440 108189859
RNSTREAM stream_L_dummy_checkUp_1 0 type CMRG flags 1
	title "Generated automatically for L_dummy_checkUp"
	cmrgseed 1 927434978 1593504038 2143021818 1749489845 1330187821 2371554242
RNSTREAM stream_L_dummy_Doctor_down_1 0 type CMRG flags 1
	title "Generated automatically for L_dummy_Doctor_down"
	cmrgseed 1 3446225690 835741554 2195834023 1297741021 3357053382 383824268
RNSTATE 3984477137 1267973573 3770063761 216527865 1568537936 1200352663
SFileBegin	name logic.m
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

#@!
