// basecase~init1.c
// AutoMod 14.0 Generated File
// Build: 14.0.0.14
// Model name:	basecase
// Model path:	C:\Users\e0072460\Downloads\Base Case V3 with print removed\basecase.dir\
// Generated:	Mon Nov 12 16:53:09 2018
// Applied/AutoMod Licensee Confidential
// NO DISTRIBUTION OR REPRODUCTION RIGHTS GRANTED!
// Copyright (c) 1988-2017 Applied Materials All rights reserved.
//
// All Rights Reserved.  Reproduction or transmission in whole or
// in part, in any form or by any means, electronic, mechanical or
// otherwise, is prohibited without the prior written consent of
// copyright owner.
//
// Licensed Material - Property of Applied Materials, Inc.
//
// Applied Materials, Inc.
// 3050 Bowers Drive
// P.O. Box 58039
// Santa Clara, CA 95054-3299
// U.S.A.
//


#include "decls.h"

void
initglobs0()
{
	am_model.$sys = model;
	am_model.am_Q_cashier_wait = symGetSystemDataByName(am_model.$sys, "Q_cashier_wait");
	am_model.am_stream_R_pharmacy_1 = symGetSystemDataByName(am_model.$sys, "stream_R_pharmacy_1");
	am_model.am_die = symGetSystemDataByName(am_model.$sys, "die");
	am_model.am_P_consultation = symGetSystemDataByName(am_model.$sys, "P_consultation");
	am_model.am_A_qPointerFinal$att = symGetSystemDataByName(am_model.$sys, "A_qPointerFinal");
	am_model.am_stream_R_doctor_1 = symGetSystemDataByName(am_model.$sys, "stream_R_doctor_1");
	am_model.am_Q_doctor_wait = symGetSystemDataByName(am_model.$sys, "Q_doctor_wait");
	am_model.am_Q_registration = symGetSystemDataByName(am_model.$sys, "Q_registration");
	am_model.am_R_registration = symGetSystemDataByName(am_model.$sys, "R_registration");
	am_model.am_P_registration = symGetSystemDataByName(am_model.$sys, "P_registration");
	am_model.am_Q_pharmacy_wait = symGetSystemDataByName(am_model.$sys, "Q_pharmacy_wait");
	am_model.am_A_startTimeRegister$att = symGetSystemDataByName(am_model.$sys, "A_startTimeRegister");
	am_model.am_Q_cashier = symGetSystemDataByName(am_model.$sys, "Q_cashier");
	am_model.am_R_cashier = symGetSystemDataByName(am_model.$sys, "R_cashier");
	am_model.am_P_cashier = symGetSystemDataByName(am_model.$sys, "P_cashier");
	am_model.am_A_numberOfCustomersInQueueAndDoc$att = symGetSystemDataByName(am_model.$sys, "A_numberOfCustomersInQueueAndDoc");
	am_model.am_P_outPatientLoad_distribution = symGetSystemDataByName(am_model.$sys, "P_outPatientLoad_distribution");
	am_model.am_OPCTimestamp$var = symGetSystemDataByName(am_model.$sys, "OPCTimestamp");
	am_model.am_OPCTimestamp$var->data = (void*)&am_model.am_OPCTimestamp;
	am_model.am_L_checkUp = symGetSystemDataByName(am_model.$sys, "L_checkUp");
	am_model.am_P_leaving = symGetSystemDataByName(am_model.$sys, "P_leaving");
	am_model.am_P_checkUp = symGetSystemDataByName(am_model.$sys, "P_checkUp");
	am_model.am_Q_checkUp = symGetSystemDataByName(am_model.$sys, "Q_checkUp");
	am_model.am_A_endTimePharmacy$att = symGetSystemDataByName(am_model.$sys, "A_endTimePharmacy");
	am_model.am_A_pharmacyWaitingTime$att = symGetSystemDataByName(am_model.$sys, "A_pharmacyWaitingTime");
	am_model.am_P_checkUpLoad_distribution = symGetSystemDataByName(am_model.$sys, "P_checkUpLoad_distribution");
	am_model.am_P_pharmacy = symGetSystemDataByName(am_model.$sys, "P_pharmacy");
	am_model.am_Q_pharmacy = symGetSystemDataByName(am_model.$sys, "Q_pharmacy");
	am_model.am_R_pharmacy = symGetSystemDataByName(am_model.$sys, "R_pharmacy");
	am_model.am_A_registrationWaitingTime$att = symGetSystemDataByName(am_model.$sys, "A_registrationWaitingTime");
	am_model.am_modelsys = symGetSystemDataByName(am_model.$sys, "modelsys");
	am_model.am_Q_registrationWait = symGetSystemDataByName(am_model.$sys, "Q_registrationWait");
	am_model.am_Space = symGetSystemDataByName(am_model.$sys, "Space");
	am_model.am_V_maxRegistrationWT$var = symGetSystemDataByName(am_model.$sys, "V_maxRegistrationWT");
	am_model.am_V_maxRegistrationWT$var->data = (void*)&am_model.am_V_maxRegistrationWT;
	am_model.am_stream_L_dummy_checkUp_1 = symGetSystemDataByName(am_model.$sys, "stream_L_dummy_checkUp_1");
	am_model.am_A_endTimeRegister$att = symGetSystemDataByName(am_model.$sys, "A_endTimeRegister");
	am_model.am_A_doctorWaitingTime$att = symGetSystemDataByName(am_model.$sys, "A_doctorWaitingTime");
	am_model.am_A_set$att = symGetSystemDataByName(am_model.$sys, "A_set");
	am_model.am_V_maxPharmacyWT$var = symGetSystemDataByName(am_model.$sys, "V_maxPharmacyWT");
	am_model.am_V_maxPharmacyWT$var->data = (void*)&am_model.am_V_maxPharmacyWT;
	am_model.am_A_qPointer5$att = symGetSystemDataByName(am_model.$sys, "A_qPointer5");
	am_model.am_V_maxdoctorWT$var = symGetSystemDataByName(am_model.$sys, "V_maxdoctorWT");
	am_model.am_V_maxdoctorWT$var->data = (void*)&am_model.am_V_maxdoctorWT;
	am_model.am_stream0 = symGetSystemDataByName(am_model.$sys, "stream0");
	am_model.am_stream_L_dummy_outPatient_1 = symGetSystemDataByName(am_model.$sys, "stream_L_dummy_outPatient_1");
	am_model.am_A_endTimeDoctor$att = symGetSystemDataByName(am_model.$sys, "A_endTimeDoctor");
	am_model.am_V_maxDoctorWT$var = symGetSystemDataByName(am_model.$sys, "V_maxDoctorWT");
	am_model.am_V_maxDoctorWT$var->data = (void*)&am_model.am_V_maxDoctorWT;
	am_model.am_A_qPointer6$att = symGetSystemDataByName(am_model.$sys, "A_qPointer6");
	am_model.am_P_preCheckUp = symGetSystemDataByName(am_model.$sys, "P_preCheckUp");
	am_model.am_stream_R_cashier_1 = symGetSystemDataByName(am_model.$sys, "stream_R_cashier_1");
	am_model.am_A_qPointer3$att = symGetSystemDataByName(am_model.$sys, "A_qPointer3");
	am_model.am_stream_R_registration_1 = symGetSystemDataByName(am_model.$sys, "stream_R_registration_1");
	am_model.am_A_min$att = symGetSystemDataByName(am_model.$sys, "A_min");
	am_model.am_Q_doctor = symGetSystemDataByName(am_model.$sys, "Q_doctor");
	am_model.am_R_doctor = symGetSystemDataByName(am_model.$sys, "R_doctor");
	am_model.am_A_startTimePharmacy$att = symGetSystemDataByName(am_model.$sys, "A_startTimePharmacy");
	am_model.am_A_qPointer4$att = symGetSystemDataByName(am_model.$sys, "A_qPointer4");
	am_model.am_L_outPatient = symGetSystemDataByName(am_model.$sys, "L_outPatient");
	am_model.am_A_startTimeDoctor$att = symGetSystemDataByName(am_model.$sys, "A_startTimeDoctor");
	am_model.am_A_count$att = symGetSystemDataByName(am_model.$sys, "A_count");
	am_model.am_A_qPointer$att = symGetSystemDataByName(am_model.$sys, "A_qPointer");
	am_model.am_A_qPointer1$att = symGetSystemDataByName(am_model.$sys, "A_qPointer1");
	am_model.am_stream_L_dummy_Doctor_down_1 = symGetSystemDataByName(am_model.$sys, "stream_L_dummy_Doctor_down_1");
	am_model.am_A_index$att = symGetSystemDataByName(am_model.$sys, "A_index");
	am_model.am_A_innerCount$att = symGetSystemDataByName(am_model.$sys, "A_innerCount");
	am_model.am_OPCQuality$var = symGetSystemDataByName(am_model.$sys, "OPCQuality");
	am_model.am_OPCQuality$var->data = (void*)&am_model.am_OPCQuality;
	am_model.am_P_doctor_breakdown = symGetSystemDataByName(am_model.$sys, "P_doctor_breakdown");
	am_model.am_A_qPointer2$att = symGetSystemDataByName(am_model.$sys, "A_qPointer2");
	am_model.am_P_treatment = symGetSystemDataByName(am_model.$sys, "P_treatment");
	model_logic_init(&am_model);
	{
		Iter(List, FileList) it = Begin(List, FileList, &((ProcSystem*)am_model.$sys)->files);

	}
	{
		Iter(List, AMTypeList) it = Begin(List, AMTypeList, &((ProcSystem*)am_model.$sys)->types);

		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Acceleration);
		IterValue(List, AMTypeList, it)->valstrfunc = Acceleration_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(block*);
		IterValue(List, AMTypeList, it)->valstrfunc = BlockPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))BlockPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMBlockList*);
		IterValue(List, AMTypeList, it)->valstrfunc = BlockList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ASI_Color);
		IterValue(List, AMTypeList, it)->valstrfunc = Color_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))Color_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Container*);
		IterValue(List, AMTypeList, it)->valstrfunc = ContainerPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))ContainerPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMContainerList*);
		IterValue(List, AMTypeList, it)->valstrfunc = ContainerList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(counter*);
		IterValue(List, AMTypeList, it)->valstrfunc = CounterPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))CounterPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Distance);
		IterValue(List, AMTypeList, it)->valstrfunc = Distance_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(iofile*);
		IterValue(List, AMTypeList, it)->valstrfunc = FilePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))FilePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(bgraph*);
		IterValue(List, AMTypeList, it)->valstrfunc = GraphPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))GraphPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(int32);
		IterValue(List, AMTypeList, it)->valstrfunc = Integer_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(label*);
		IterValue(List, AMTypeList, it)->valstrfunc = LabelPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LabelPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(load*);
		IterValue(List, AMTypeList, it)->valstrfunc = LoadPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LoadPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMLoadList*);
		IterValue(List, AMTypeList, it)->valstrfunc = LoadList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(loadtype*);
		IterValue(List, AMTypeList, it)->valstrfunc = LoadTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LoadTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(simloc*);
		IterValue(List, AMTypeList, it)->valstrfunc = Location_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))Location_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMLocationList*);
		IterValue(List, AMTypeList, it)->valstrfunc = LocationList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(LocationType*);
		IterValue(List, AMTypeList, it)->valstrfunc = LocationTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LocationTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMLocationTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = LocationTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(State_machine*);
		IterValue(List, AMTypeList, it)->valstrfunc = MonitorPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))MonitorPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvMotor*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))MotorPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMConvMotorList*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(MotorType*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))MotorTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMMotorTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ordlist*);
		IterValue(List, AMTypeList, it)->valstrfunc = OrderListPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))OrderListPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Path*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PathPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMPathList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AgvPathType*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PathTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMAgvPathTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Photoeye*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PhotoeyePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMPhotoList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(PhotoeyeType*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyeTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PhotoeyeTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMPhotoeyeTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyeTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(process*);
		IterValue(List, AMTypeList, it)->valstrfunc = ProcessPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))ProcessPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(queue*);
		IterValue(List, AMTypeList, it)->valstrfunc = QueuePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))QueuePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMQueueList*);
		IterValue(List, AMTypeList, it)->valstrfunc = QueueList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Rate);
		IterValue(List, AMTypeList, it)->valstrfunc = Rate_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(double);
		IterValue(List, AMTypeList, it)->valstrfunc = Real_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(resource*);
		IterValue(List, AMTypeList, it)->valstrfunc = ResourcePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))ResourcePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMResourceList*);
		IterValue(List, AMTypeList, it)->valstrfunc = ResourceList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(SchedJob*);
		IterValue(List, AMTypeList, it)->valstrfunc = SchedJobPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SchedJobPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMSchedJobList*);
		IterValue(List, AMTypeList, it)->valstrfunc = SchedJobList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvSection*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SectionPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMConvSectionList*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvSectionType*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SectionTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMConvSectionTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(amSocket*);
		IterValue(List, AMTypeList, it)->valstrfunc = SocketPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SocketPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(States*);
		IterValue(List, AMTypeList, it)->valstrfunc = StatePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))StatePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(rnstream*);
		IterValue(List, AMTypeList, it)->valstrfunc = StreamPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))StreamPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(char*);
		IterValue(List, AMTypeList, it)->valstrfunc = String_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMStringList*);
		IterValue(List, AMTypeList, it)->valstrfunc = StringList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(System*);
		IterValue(List, AMTypeList, it)->valstrfunc = SystemPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SystemPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(table*);
		IterValue(List, AMTypeList, it)->valstrfunc = TablePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))TablePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ASITime);
		IterValue(List, AMTypeList, it)->valstrfunc = Time_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvTransfer*);
		IterValue(List, AMTypeList, it)->valstrfunc = TransferPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))TransferPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(TransferType*);
		IterValue(List, AMTypeList, it)->valstrfunc = TransferTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))TransferTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(vehicle*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehiclePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))VehiclePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMVehicleList*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehicleList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(VehSeg*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehSegPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))VehSegPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMVehSegList*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehSegList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Velocity);
		IterValue(List, AMTypeList, it)->valstrfunc = Velocity_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
	}

}

