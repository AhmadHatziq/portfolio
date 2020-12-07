// decls.h
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


#ifndef __DECLS_H__
#define __DECLS_H__

#include "user.h"
char* Acceleration_valstrfunc(void*);
Acceleration Acceleration_strvalfunc(char*);
char* BlockPtr_valstrfunc(void*);
block* BlockPtr_strvalfunc(char*);
char* BlockList_valstrfunc(void*);
char* Color_valstrfunc(void*);
ASI_Color Color_strvalfunc(char*);
char* ContainerPtr_valstrfunc(void*);
Container* ContainerPtr_strvalfunc(char*);
char* ContainerList_valstrfunc(void*);
char* CounterPtr_valstrfunc(void*);
counter* CounterPtr_strvalfunc(char*);
char* Distance_valstrfunc(void*);
Distance Distance_strvalfunc(char*);
char* FilePtr_valstrfunc(void*);
iofile* FilePtr_strvalfunc(char*);
char* GraphPtr_valstrfunc(void*);
bgraph* GraphPtr_strvalfunc(char*);
char* Integer_valstrfunc(void*);
int32 Integer_strvalfunc(char*);
char* LabelPtr_valstrfunc(void*);
label* LabelPtr_strvalfunc(char*);
char* LoadPtr_valstrfunc(void*);
load* LoadPtr_strvalfunc(char*);
char* LoadList_valstrfunc(void*);
char* LoadTypePtr_valstrfunc(void*);
loadtype* LoadTypePtr_strvalfunc(char*);
char* Location_valstrfunc(void*);
simloc* Location_strvalfunc(char*);
char* LocationList_valstrfunc(void*);
char* LocationTypePtr_valstrfunc(void*);
LocationType* LocationTypePtr_strvalfunc(char*);
char* LocationTypeList_valstrfunc(void*);
char* MonitorPtr_valstrfunc(void*);
State_machine* MonitorPtr_strvalfunc(char*);
char* MotorPtr_valstrfunc(void*);
ConvMotor* MotorPtr_strvalfunc(char*);
char* MotorList_valstrfunc(void*);
char* MotorTypePtr_valstrfunc(void*);
MotorType* MotorTypePtr_strvalfunc(char*);
char* MotorTypeList_valstrfunc(void*);
char* OrderListPtr_valstrfunc(void*);
ordlist* OrderListPtr_strvalfunc(char*);
char* PathPtr_valstrfunc(void*);
Path* PathPtr_strvalfunc(char*);
char* PathList_valstrfunc(void*);
char* PathTypePtr_valstrfunc(void*);
AgvPathType* PathTypePtr_strvalfunc(char*);
char* PathTypeList_valstrfunc(void*);
char* PhotoeyePtr_valstrfunc(void*);
Photoeye* PhotoeyePtr_strvalfunc(char*);
char* PhotoeyeList_valstrfunc(void*);
char* PhotoeyeTypePtr_valstrfunc(void*);
PhotoeyeType* PhotoeyeTypePtr_strvalfunc(char*);
char* PhotoeyeTypeList_valstrfunc(void*);
char* ProcessPtr_valstrfunc(void*);
process* ProcessPtr_strvalfunc(char*);
char* QueuePtr_valstrfunc(void*);
queue* QueuePtr_strvalfunc(char*);
char* QueueList_valstrfunc(void*);
char* Rate_valstrfunc(void*);
Rate Rate_strvalfunc(char*);
char* Real_valstrfunc(void*);
double Real_strvalfunc(char*);
char* ResourcePtr_valstrfunc(void*);
resource* ResourcePtr_strvalfunc(char*);
char* ResourceList_valstrfunc(void*);
char* SchedJobPtr_valstrfunc(void*);
SchedJob* SchedJobPtr_strvalfunc(char*);
char* SchedJobList_valstrfunc(void*);
char* SectionPtr_valstrfunc(void*);
ConvSection* SectionPtr_strvalfunc(char*);
char* SectionList_valstrfunc(void*);
char* SectionTypePtr_valstrfunc(void*);
ConvSectionType* SectionTypePtr_strvalfunc(char*);
char* SectionTypeList_valstrfunc(void*);
char* SocketPtr_valstrfunc(void*);
amSocket* SocketPtr_strvalfunc(char*);
char* StatePtr_valstrfunc(void*);
States* StatePtr_strvalfunc(char*);
char* StreamPtr_valstrfunc(void*);
rnstream* StreamPtr_strvalfunc(char*);
char* String_valstrfunc(void*);
char* String_strvalfunc(char*);
char* StringList_valstrfunc(void*);
char* SystemPtr_valstrfunc(void*);
System* SystemPtr_strvalfunc(char*);
char* TablePtr_valstrfunc(void*);
table* TablePtr_strvalfunc(char*);
char* Time_valstrfunc(void*);
ASITime Time_strvalfunc(char*);
char* TransferPtr_valstrfunc(void*);
ConvTransfer* TransferPtr_strvalfunc(char*);
char* TransferTypePtr_valstrfunc(void*);
TransferType* TransferTypePtr_strvalfunc(char*);
char* VehiclePtr_valstrfunc(void*);
vehicle* VehiclePtr_strvalfunc(char*);
char* VehicleList_valstrfunc(void*);
char* VehSegPtr_valstrfunc(void*);
VehSeg* VehSegPtr_strvalfunc(char*);
char* VehSegList_valstrfunc(void*);
char* Velocity_valstrfunc(void*);
Velocity Velocity_strvalfunc(char*);
struct model_struct {
	System* $sys;
	queue* am_Q_cashier_wait;
	rnstream* am_stream_R_pharmacy_1;
	process* am_die;
	process* am_P_consultation;
	attribute* am_A_qPointerFinal$att;
	rnstream* am_stream_R_doctor_1;
	queue* am_Q_doctor_wait;
	queue* am_Q_registration;
	resource* am_R_registration;
	process* am_P_registration;
	queue* am_Q_pharmacy_wait;
	attribute* am_A_startTimeRegister$att;
	queue* am_Q_cashier;
	resource* am_R_cashier;
	process* am_P_cashier;
	attribute* am_A_numberOfCustomersInQueueAndDoc$att;
	process* am_P_outPatientLoad_distribution;
	variable* am_OPCTimestamp$var;
	char* am_OPCTimestamp;
	loadtype* am_L_checkUp;
	process* am_P_leaving;
	process* am_P_checkUp;
	queue* am_Q_checkUp;
	attribute* am_A_endTimePharmacy$att;
	attribute* am_A_pharmacyWaitingTime$att;
	process* am_P_checkUpLoad_distribution;
	process* am_P_pharmacy;
	queue* am_Q_pharmacy;
	resource* am_R_pharmacy;
	attribute* am_A_registrationWaitingTime$att;
	System* am_modelsys;
	queue* am_Q_registrationWait;
	queue* am_Space;
	variable* am_V_maxRegistrationWT$var;
	ASITime am_V_maxRegistrationWT;
	rnstream* am_stream_L_dummy_checkUp_1;
	attribute* am_A_endTimeRegister$att;
	attribute* am_A_doctorWaitingTime$att;
	attribute* am_A_set$att;
	variable* am_V_maxPharmacyWT$var;
	ASITime am_V_maxPharmacyWT;
	attribute* am_A_qPointer5$att;
	variable* am_V_maxdoctorWT$var;
	ASITime am_V_maxdoctorWT;
	rnstream* am_stream0;
	rnstream* am_stream_L_dummy_outPatient_1;
	attribute* am_A_endTimeDoctor$att;
	variable* am_V_maxDoctorWT$var;
	ASITime am_V_maxDoctorWT;
	attribute* am_A_qPointer6$att;
	process* am_P_preCheckUp;
	rnstream* am_stream_R_cashier_1;
	attribute* am_A_qPointer3$att;
	rnstream* am_stream_R_registration_1;
	attribute* am_A_min$att;
	queue* am_Q_doctor;
	resource* am_R_doctor;
	attribute* am_A_startTimePharmacy$att;
	attribute* am_A_qPointer4$att;
	loadtype* am_L_outPatient;
	attribute* am_A_startTimeDoctor$att;
	attribute* am_A_count$att;
	attribute* am_A_qPointer$att;
	attribute* am_A_qPointer1$att;
	rnstream* am_stream_L_dummy_Doctor_down_1;
	attribute* am_A_index$att;
	attribute* am_A_innerCount$att;
	variable* am_OPCQuality$var;
	int32 am_OPCQuality;
	process* am_P_doctor_breakdown;
	attribute* am_A_qPointer2$att;
	process* am_P_treatment;
};
extern struct model_struct am_model;
void initglobs0();
#endif // __DECLS_H__
