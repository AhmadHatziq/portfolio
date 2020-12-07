// logic.c
// AutoMod 14.0 Generated File
// Build: 14.0.0.14
// Model name:	basecase
// Model path:	C:\Users\E0031550\Downloads\IE 3110 Group 07 Submission\Simulation Model\Base Model Final\Base Model Final\basecase.dir\
// Generated:	Tue Nov 13 00:10:23 2018
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


#include "cdecls.h"


static int32
P_checkUpLoad_distribution_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			clone(this, 3, am2_P_registration, am2_L_checkUp);
		}
		{
			while (1 == 1) {
				{
					if (ASIclock < ToModelTime(12600, UNITSECONDS)) {
						{
							clone(this, 1, am2_P_registration, am2_L_checkUp);
						}
						{
							if (waitfor(ToModelTime(exponential(am2_stream0, 329.69999999999999), UNITSECONDS), this, P_checkUpLoad_distribution_arriving, Step 2, am_localargs) == Delayed)
								return Delayed;
Label2: ; // Step 2
						}
					}
					else {
						{
							this->nextproc = am2_die; /* send to ... */
							EntityChanged(W_LOAD);
							retval = Continue;
							goto LabelRet;
						}
					}
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_checkUpLoad_distribution_arriving */

static int32
P_outPatientLoad_distribution_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			clone(this, 8, am2_P_registration, am2_L_outPatient);
		}
		{
			while (1 == 1) {
				{
					if (ASIclock < ToModelTime(7200, UNITSECONDS)) {
						{
							clone(this, 1, am2_P_registration, am2_L_outPatient);
						}
						{
							if (waitfor(ToModelTime(exponential(am2_stream0, 185.80000000000001), UNITSECONDS), this, P_outPatientLoad_distribution_arriving, Step 2, am_localargs) == Delayed)
								return Delayed;
Label2: ; // Step 2
						}
					}
					else {
						if (ASIclock < ToModelTime(12600, UNITSECONDS)) {
							{
								clone(this, 1, am2_P_registration, am2_L_outPatient);
							}
							{
								if (waitfor(ToModelTime(lognormal(am2_stream0, 4.8700000000000001, 1.3999999999999999), UNITSECONDS), this, P_outPatientLoad_distribution_arriving, Step 3, am_localargs) == Delayed)
									return Delayed;
Label3: ; // Step 3
							}
						}
						else {
							{
								this->nextproc = am2_die; /* send to ... */
								EntityChanged(W_LOAD);
								retval = Continue;
								goto LabelRet;
							}
						}
					}
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_outPatientLoad_distribution_arriving */

static int32
P_registration_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			this->attribute->am2_A_startTimeRegister = ASIclock;
			EntityChanged(0x00000040);
		}
		{
			pushppa(this, P_registration_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_registrationWait);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			if (ASIclock < ToModelTime(7200, UNITSECONDS)) {
				{
					queue* am_locVar;
					AMQueueList* am_locList = NULL;

					ListAppendItem(QueueList, am_locList, &(am2_Q_registration[1]));
					ListAppendItem(QueueList, am_locList, &(am2_Q_registration[2]));
					ListAppendItem(QueueList, am_locList, &(am2_Q_registration[3]));
					ListAppendItem(QueueList, am_locList, &(am2_Q_registration[4]));
					if (Size(List, _List, am_locList)) {
						int32 am_locVal;
						AMQueueListItem* locIter;
						int i = 0;
						int first = getirand(am2_stream0) % am_locList->numItems;

						for (locIter = am_locList->first; i < first; ++i, locIter = locIter->next) {
						}
						am_locVar = locIter->item;
						am_locVal = QueGetCurConts(ValidPtr(am_locVar, 50, queue*));
						this->attribute->am2_A_qPointer = am_locVar;
						EntityChanged(0x00000040);
						for (locIter = locIter->next; locIter; locIter = locIter->next) {
							am_locVar = locIter->item;
							if (QueGetCurConts(ValidPtr(am_locVar, 50, queue*)) < am_locVal) {
								this->attribute->am2_A_qPointer = am_locVar;
								EntityChanged(0x00000040);
								am_locVal = QueGetCurConts(ValidPtr(am_locVar, 50, queue*));
							}
						}
						for (i = 0, locIter = am_locList->first; i < first; ++i, locIter = locIter->next) {
							am_locVar = locIter->item;
							if (QueGetCurConts(ValidPtr(am_locVar, 50, queue*)) < am_locVal) {
								this->attribute->am2_A_qPointer = am_locVar;
								EntityChanged(0x00000040);
								am_locVal = QueGetCurConts(ValidPtr(am_locVar, 50, queue*));
							}
						}
						ListRemoveAllAndFree(QueueList, am_locList);
					} else
						this->attribute->am2_A_qPointer = NULL;
						EntityChanged(0x00000040);
				}
				{
					this->attribute->am2_A_index = QueGetIndex(ValidPtr(this->attribute->am2_A_qPointer, 50, queue*));
					EntityChanged(0x00000040);
				}
			}
			else {
				{
					queue* am_locVar;
					AMQueueList* am_locList = NULL;

					ListAppendItem(QueueList, am_locList, &(am2_Q_registration[1]));
					ListAppendItem(QueueList, am_locList, &(am2_Q_registration[2]));
					ListAppendItem(QueueList, am_locList, &(am2_Q_registration[3]));
					if (Size(List, _List, am_locList)) {
						int32 am_locVal;
						AMQueueListItem* locIter;
						int i = 0;
						int first = getirand(am2_stream0) % am_locList->numItems;

						for (locIter = am_locList->first; i < first; ++i, locIter = locIter->next) {
						}
						am_locVar = locIter->item;
						am_locVal = QueGetCurConts(ValidPtr(am_locVar, 50, queue*));
						this->attribute->am2_A_qPointer = am_locVar;
						EntityChanged(0x00000040);
						for (locIter = locIter->next; locIter; locIter = locIter->next) {
							am_locVar = locIter->item;
							if (QueGetCurConts(ValidPtr(am_locVar, 50, queue*)) < am_locVal) {
								this->attribute->am2_A_qPointer = am_locVar;
								EntityChanged(0x00000040);
								am_locVal = QueGetCurConts(ValidPtr(am_locVar, 50, queue*));
							}
						}
						for (i = 0, locIter = am_locList->first; i < first; ++i, locIter = locIter->next) {
							am_locVar = locIter->item;
							if (QueGetCurConts(ValidPtr(am_locVar, 50, queue*)) < am_locVal) {
								this->attribute->am2_A_qPointer = am_locVar;
								EntityChanged(0x00000040);
								am_locVal = QueGetCurConts(ValidPtr(am_locVar, 50, queue*));
							}
						}
						ListRemoveAllAndFree(QueueList, am_locList);
					} else
						this->attribute->am2_A_qPointer = NULL;
						EntityChanged(0x00000040);
				}
				{
					this->attribute->am2_A_index = QueGetIndex(ValidPtr(this->attribute->am2_A_qPointer, 50, queue*));
					EntityChanged(0x00000040);
				}
			}
		}
		{
			pushppa(this, P_registration_arriving, Step 3, am_localargs);
			pushppa(this, inqueue, Step 1, &(am2_Q_registration[ValidIndex("am_model.am_Q_registration", this->attribute->am2_A_index, 4)]));
			return Continue; // go move into territory
Label3: ; // Step 3
		}
		{
			this->attribute->am2_A_endTimeRegister = ASIclock;
			EntityChanged(0x00000040);
		}
		{
			this->attribute->am2_A_registrationWaitingTime = this->attribute->am2_A_endTimeRegister - this->attribute->am2_A_startTimeRegister;
			EntityChanged(0x00000040);
		}
		{
			return usefor(&(am2_R_registration[ValidIndex("am_model.am_R_registration", this->attribute->am2_A_index, 4)]), 1, this, P_registration_arriving, Step 4, am_localargs, ToModelTime(lognormal(am2_stream0, 4.7800000000000002, 0.85299999999999998), UNITSECONDS));
Label4: ; // Step 4
		}
		{
			if (LdGetType(this) == am2_L_checkUp) {
				{
					{
						char* pArg1 = rel_actorname(this, am_model.$sys);
						char* pArg2 = " left SERVER ";
						int32 pArg3 = this->attribute->am2_A_index;
						char* pArg4 = " to enter Check Up ";

						message("%s%s%d%s", pArg1, pArg2, pArg3, pArg4);
					}
				}
				{
					this->nextproc = am2_P_preCheckUp; /* send to ... */
					EntityChanged(W_LOAD);
					retval = Continue;
					goto LabelRet;
				}
			}
			else {
				if (LdGetType(this) == am2_L_outPatient) {
					{
						{
							char* pArg1 = rel_actorname(this, am_model.$sys);
							char* pArg2 = " left SERVER ";
							int32 pArg3 = this->attribute->am2_A_index;
							char* pArg4 = " to enter Consultation ";

							message("%s%s%d%s", pArg1, pArg2, pArg3, pArg4);
						}
					}
					{
						this->nextproc = am2_P_consultation; /* send to ... */
						EntityChanged(W_LOAD);
						retval = Continue;
						goto LabelRet;
					}
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_registration_arriving */


typedef struct {
	double freq;
	process** value;
} Oneof0;

static Oneof0 List0[] = {
	{ 85, &am2_P_treatment},
	{ 100, &am2_P_checkUp}
};

static process*
oneofFunc0(load* this)
{
	int ind = 0;
	Oneof0* list = List0;
	double sample = getdrand(am2_stream0) * 100;

	tprintf(tfp, "In oneof\n");
	while (list->freq < sample) {
		ind++;
		list++;
	}
	return *List0[ind].value;
}

static int32
P_preCheckUp_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	{
		{
			this->nextproc = oneofFunc0(this); /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_preCheckUp_arriving */

static int32
P_checkUp_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			pushppa(this, P_checkUp_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_checkUp);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			if (waitfor(ToModelTime(lognormal(am2_stream0, 7.1040000000000001, 0.44094000000000000), UNITSECONDS), this, P_checkUp_arriving, Step 3, am_localargs) == Delayed)
				return Delayed;
Label3: ; // Step 3
		}
		{
			this->nextproc = am2_P_consultation; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_checkUp_arriving */

static int32
P_treatment_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	{
		{
			this->nextproc = am2_die; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_treatment_arriving */


static queue*
Func0(load* this)
{
	return this->attribute->am2_A_qPointer1;
}


static queue*
Func1(load* this)
{
	return this->attribute->am2_A_qPointer2;
}


typedef struct {
	double freq;
	queue* (*value)(load*);
} Oneof1;

static Oneof1 List1[] = {
	{ 50, Func0},
	{ 100, Func1}
};

static queue*
oneofFunc1(load* this)
{
	int ind = 0;
	Oneof1* list = List1;
	double sample = getdrand(am2_stream0) * 100;

	tprintf(tfp, "In oneof\n");
	while (list->freq < sample) {
		ind++;
		list++;
	}
	return List1[ind].value(this);
}


static queue*
Func2(load* this)
{
	return this->attribute->am2_A_qPointer1;
}


static queue*
Func3(load* this)
{
	return this->attribute->am2_A_qPointer2;
}


static queue*
Func4(load* this)
{
	return this->attribute->am2_A_qPointer3;
}


typedef struct {
	double freq;
	queue* (*value)(load*);
} Oneof2;

static Oneof2 List2[] = {
	{ 33.33, Func2},
	{ 66.66, Func3},
	{ 99.99, Func4}
};

static queue*
oneofFunc2(load* this)
{
	int ind = 0;
	Oneof2* list = List2;
	double sample = getdrand(am2_stream0) * 99.99;

	tprintf(tfp, "In oneof\n");
	while (list->freq < sample) {
		ind++;
		list++;
	}
	return List2[ind].value(this);
}


static queue*
Func5(load* this)
{
	return this->attribute->am2_A_qPointer1;
}


static queue*
Func6(load* this)
{
	return this->attribute->am2_A_qPointer2;
}


static queue*
Func7(load* this)
{
	return this->attribute->am2_A_qPointer3;
}


static queue*
Func8(load* this)
{
	return this->attribute->am2_A_qPointer4;
}


typedef struct {
	double freq;
	queue* (*value)(load*);
} Oneof3;

static Oneof3 List3[] = {
	{ 25, Func5},
	{ 50, Func6},
	{ 75, Func7},
	{ 100, Func8}
};

static queue*
oneofFunc3(load* this)
{
	int ind = 0;
	Oneof3* list = List3;
	double sample = getdrand(am2_stream0) * 100;

	tprintf(tfp, "In oneof\n");
	while (list->freq < sample) {
		ind++;
		list++;
	}
	return List3[ind].value(this);
}


static queue*
Func9(load* this)
{
	return this->attribute->am2_A_qPointer1;
}


static queue*
Func10(load* this)
{
	return this->attribute->am2_A_qPointer2;
}


static queue*
Func11(load* this)
{
	return this->attribute->am2_A_qPointer3;
}


static queue*
Func12(load* this)
{
	return this->attribute->am2_A_qPointer4;
}


static queue*
Func13(load* this)
{
	return this->attribute->am2_A_qPointer5;
}


typedef struct {
	double freq;
	queue* (*value)(load*);
} Oneof4;

static Oneof4 List4[] = {
	{ 20, Func9},
	{ 40, Func10},
	{ 60, Func11},
	{ 80, Func12},
	{ 100, Func13}
};

static queue*
oneofFunc4(load* this)
{
	int ind = 0;
	Oneof4* list = List4;
	double sample = getdrand(am2_stream0) * 100;

	tprintf(tfp, "In oneof\n");
	while (list->freq < sample) {
		ind++;
		list++;
	}
	return List4[ind].value(this);
}


static queue*
Func14(load* this)
{
	return this->attribute->am2_A_qPointer1;
}


static queue*
Func15(load* this)
{
	return this->attribute->am2_A_qPointer2;
}


static queue*
Func16(load* this)
{
	return this->attribute->am2_A_qPointer3;
}


static queue*
Func17(load* this)
{
	return this->attribute->am2_A_qPointer4;
}


static queue*
Func18(load* this)
{
	return this->attribute->am2_A_qPointer5;
}


static queue*
Func19(load* this)
{
	return this->attribute->am2_A_qPointer6;
}


typedef struct {
	double freq;
	queue* (*value)(load*);
} Oneof5;

static Oneof5 List5[] = {
	{ 16.667, Func14},
	{ 33.334, Func15},
	{ 50.001, Func16},
	{ 66.668, Func17},
	{ 83.335, Func18},
	{ 100.002, Func19}
};

static queue*
oneofFunc5(load* this)
{
	int ind = 0;
	Oneof5* list = List5;
	double sample = getdrand(am2_stream0) * 100.002;

	tprintf(tfp, "In oneof\n");
	while (list->freq < sample) {
		ind++;
		list++;
	}
	return List5[ind].value(this);
}

static int32
P_consultation_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	case Step 5: goto Label5;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			this->attribute->am2_A_set = 1;
			EntityChanged(0x00000040);
		}
		{
			this->attribute->am2_A_min = (QueGetCurConts(ValidPtr(&(am2_Q_doctor[1]), 50, queue*)) + QueGetCurConts(ValidPtr(&(am2_Q_doctor_wait[1]), 50, queue*)));
			EntityChanged(0x00000040);
		}
		{
			this->attribute->am2_A_qPointer = &(am2_Q_doctor_wait[1]);
			EntityChanged(0x00000040);
		}
		{
			while (this->attribute->am2_A_set < 7) {
				{
					this->attribute->am2_A_numberOfCustomersInQueueAndDoc = (QueGetCurConts(ValidPtr(&(am2_Q_doctor[ValidIndex("am_model.am_Q_doctor", this->attribute->am2_A_set, 6)]), 50, queue*)) + QueGetCurConts(ValidPtr(&(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]), 50, queue*)));
					EntityChanged(0x00000040);
				}
				{
					if (this->attribute->am2_A_numberOfCustomersInQueueAndDoc < this->attribute->am2_A_min) {
						{
							this->attribute->am2_A_min = this->attribute->am2_A_numberOfCustomersInQueueAndDoc;
							EntityChanged(0x00000040);
						}
						{
							this->attribute->am2_A_qPointer = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
							EntityChanged(0x00000040);
						}
					}
				}
				{
					this->attribute->am2_A_set = (this->attribute->am2_A_set + 1);
					EntityChanged(0x00000040);
				}
			}
		}
		{
			this->attribute->am2_A_count = 0;
			EntityChanged(0x00000040);
		}
		{
			this->attribute->am2_A_set = 1;
			EntityChanged(0x00000040);
		}
		{
			while (this->attribute->am2_A_set < 7) {
				{
					this->attribute->am2_A_numberOfCustomersInQueueAndDoc = (QueGetCurConts(ValidPtr(&(am2_Q_doctor[ValidIndex("am_model.am_Q_doctor", this->attribute->am2_A_set, 6)]), 50, queue*)) + QueGetCurConts(ValidPtr(&(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]), 50, queue*)));
					EntityChanged(0x00000040);
				}
				{
					if (this->attribute->am2_A_numberOfCustomersInQueueAndDoc == this->attribute->am2_A_min) {
						{
							this->attribute->am2_A_count = (this->attribute->am2_A_count + 1);
							EntityChanged(0x00000040);
						}
					}
				}
				{
					this->attribute->am2_A_set = (this->attribute->am2_A_set + 1);
					EntityChanged(0x00000040);
				}
			}
		}
		{
			this->attribute->am2_A_qPointer1 = &(am2_Q_doctor_wait[1]);
			EntityChanged(0x00000040);
		}
		{
			this->attribute->am2_A_qPointer2 = &(am2_Q_doctor_wait[1]);
			EntityChanged(0x00000040);
		}
		{
			this->attribute->am2_A_qPointer3 = &(am2_Q_doctor_wait[1]);
			EntityChanged(0x00000040);
		}
		{
			this->attribute->am2_A_qPointer4 = &(am2_Q_doctor_wait[1]);
			EntityChanged(0x00000040);
		}
		{
			this->attribute->am2_A_qPointer5 = &(am2_Q_doctor_wait[1]);
			EntityChanged(0x00000040);
		}
		{
			this->attribute->am2_A_qPointer6 = &(am2_Q_doctor_wait[1]);
			EntityChanged(0x00000040);
		}
		{
			this->attribute->am2_A_qPointerFinal = &(am2_Q_doctor_wait[1]);
			EntityChanged(0x00000040);
		}
		{
			this->attribute->am2_A_set = 1;
			EntityChanged(0x00000040);
		}
		{
			this->attribute->am2_A_innerCount = 1;
			EntityChanged(0x00000040);
		}
		{
			if (this->attribute->am2_A_count == 1) {
				{
					while (this->attribute->am2_A_set < 7) {
						{
							this->attribute->am2_A_numberOfCustomersInQueueAndDoc = (QueGetCurConts(ValidPtr(&(am2_Q_doctor[ValidIndex("am_model.am_Q_doctor", this->attribute->am2_A_set, 6)]), 50, queue*)) + QueGetCurConts(ValidPtr(&(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]), 50, queue*)));
							EntityChanged(0x00000040);
						}
						{
							if (this->attribute->am2_A_numberOfCustomersInQueueAndDoc == this->attribute->am2_A_min) {
								{
									this->attribute->am2_A_qPointer1 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
									EntityChanged(0x00000040);
								}
							}
						}
						{
							this->attribute->am2_A_set = (this->attribute->am2_A_set + 1);
							EntityChanged(0x00000040);
						}
					}
				}
				{
					this->attribute->am2_A_qPointerFinal = this->attribute->am2_A_qPointer1;
					EntityChanged(0x00000040);
				}
			}
			else {
				if (this->attribute->am2_A_count == 2) {
					{
						while (this->attribute->am2_A_set < 7) {
							{
								this->attribute->am2_A_numberOfCustomersInQueueAndDoc = (QueGetCurConts(ValidPtr(&(am2_Q_doctor[ValidIndex("am_model.am_Q_doctor", this->attribute->am2_A_set, 6)]), 50, queue*)) + QueGetCurConts(ValidPtr(&(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]), 50, queue*)));
								EntityChanged(0x00000040);
							}
							{
								if (this->attribute->am2_A_numberOfCustomersInQueueAndDoc == this->attribute->am2_A_min) {
									{
										if (this->attribute->am2_A_innerCount == 1) {
											{
												this->attribute->am2_A_innerCount = (this->attribute->am2_A_innerCount + 1);
												EntityChanged(0x00000040);
											}
											{
												this->attribute->am2_A_qPointer1 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
												EntityChanged(0x00000040);
											}
										}
										else {
											if (this->attribute->am2_A_innerCount == 2) {
												{
													this->attribute->am2_A_qPointer2 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
													EntityChanged(0x00000040);
												}
											}
										}
									}
								}
							}
							{
								this->attribute->am2_A_set = (this->attribute->am2_A_set + 1);
								EntityChanged(0x00000040);
							}
						}
					}
					{
						this->attribute->am2_A_qPointerFinal = oneofFunc1(this);
						EntityChanged(0x00000040);
					}
				}
				else {
					if (this->attribute->am2_A_count == 3) {
						{
							while (this->attribute->am2_A_set < 7) {
								{
									this->attribute->am2_A_numberOfCustomersInQueueAndDoc = (QueGetCurConts(ValidPtr(&(am2_Q_doctor[ValidIndex("am_model.am_Q_doctor", this->attribute->am2_A_set, 6)]), 50, queue*)) + QueGetCurConts(ValidPtr(&(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]), 50, queue*)));
									EntityChanged(0x00000040);
								}
								{
									if (this->attribute->am2_A_numberOfCustomersInQueueAndDoc == this->attribute->am2_A_min) {
										{
											if (this->attribute->am2_A_innerCount == 1) {
												{
													this->attribute->am2_A_innerCount = (this->attribute->am2_A_innerCount + 1);
													EntityChanged(0x00000040);
												}
												{
													this->attribute->am2_A_qPointer1 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
													EntityChanged(0x00000040);
												}
											}
											else {
												if (this->attribute->am2_A_innerCount == 2) {
													{
														this->attribute->am2_A_qPointer2 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
														EntityChanged(0x00000040);
													}
													{
														this->attribute->am2_A_innerCount = (this->attribute->am2_A_innerCount + 1);
														EntityChanged(0x00000040);
													}
												}
												else {
													if (this->attribute->am2_A_innerCount == 3) {
														{
															this->attribute->am2_A_qPointer3 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
															EntityChanged(0x00000040);
														}
													}
												}
											}
										}
									}
								}
								{
									this->attribute->am2_A_set = (this->attribute->am2_A_set + 1);
									EntityChanged(0x00000040);
								}
							}
						}
						{
							this->attribute->am2_A_qPointerFinal = oneofFunc2(this);
							EntityChanged(0x00000040);
						}
					}
					else {
						if (this->attribute->am2_A_count == 4) {
							{
								while (this->attribute->am2_A_set < 7) {
									{
										this->attribute->am2_A_numberOfCustomersInQueueAndDoc = (QueGetCurConts(ValidPtr(&(am2_Q_doctor[ValidIndex("am_model.am_Q_doctor", this->attribute->am2_A_set, 6)]), 50, queue*)) + QueGetCurConts(ValidPtr(&(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]), 50, queue*)));
										EntityChanged(0x00000040);
									}
									{
										if (this->attribute->am2_A_numberOfCustomersInQueueAndDoc == this->attribute->am2_A_min) {
											{
												if (this->attribute->am2_A_innerCount == 1) {
													{
														this->attribute->am2_A_innerCount = (this->attribute->am2_A_innerCount + 1);
														EntityChanged(0x00000040);
													}
													{
														this->attribute->am2_A_qPointer1 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
														EntityChanged(0x00000040);
													}
												}
												else {
													if (this->attribute->am2_A_innerCount == 2) {
														{
															this->attribute->am2_A_qPointer2 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
															EntityChanged(0x00000040);
														}
														{
															this->attribute->am2_A_innerCount = (this->attribute->am2_A_innerCount + 1);
															EntityChanged(0x00000040);
														}
													}
													else {
														if (this->attribute->am2_A_innerCount == 3) {
															{
																this->attribute->am2_A_qPointer3 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
																EntityChanged(0x00000040);
															}
															{
																this->attribute->am2_A_innerCount = (this->attribute->am2_A_innerCount + 1);
																EntityChanged(0x00000040);
															}
														}
														else {
															if (this->attribute->am2_A_innerCount == 4) {
																{
																	this->attribute->am2_A_qPointer4 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
																	EntityChanged(0x00000040);
																}
																{
																	this->attribute->am2_A_innerCount = (this->attribute->am2_A_innerCount + 1);
																	EntityChanged(0x00000040);
																}
															}
														}
													}
												}
											}
										}
									}
									{
										this->attribute->am2_A_set = (this->attribute->am2_A_set + 1);
										EntityChanged(0x00000040);
									}
								}
							}
							{
								this->attribute->am2_A_qPointerFinal = oneofFunc3(this);
								EntityChanged(0x00000040);
							}
						}
						else {
							if (this->attribute->am2_A_count == 5) {
								{
									while (this->attribute->am2_A_set < 7) {
										{
											this->attribute->am2_A_numberOfCustomersInQueueAndDoc = (QueGetCurConts(ValidPtr(&(am2_Q_doctor[ValidIndex("am_model.am_Q_doctor", this->attribute->am2_A_set, 6)]), 50, queue*)) + QueGetCurConts(ValidPtr(&(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]), 50, queue*)));
											EntityChanged(0x00000040);
										}
										{
											if (this->attribute->am2_A_numberOfCustomersInQueueAndDoc == this->attribute->am2_A_min) {
												{
													if (this->attribute->am2_A_innerCount == 1) {
														{
															this->attribute->am2_A_innerCount = (this->attribute->am2_A_innerCount + 1);
															EntityChanged(0x00000040);
														}
														{
															this->attribute->am2_A_qPointer1 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
															EntityChanged(0x00000040);
														}
													}
													else {
														if (this->attribute->am2_A_innerCount == 2) {
															{
																this->attribute->am2_A_qPointer2 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
																EntityChanged(0x00000040);
															}
															{
																this->attribute->am2_A_innerCount = (this->attribute->am2_A_innerCount + 1);
																EntityChanged(0x00000040);
															}
														}
														else {
															if (this->attribute->am2_A_innerCount == 3) {
																{
																	this->attribute->am2_A_qPointer3 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
																	EntityChanged(0x00000040);
																}
																{
																	this->attribute->am2_A_innerCount = (this->attribute->am2_A_innerCount + 1);
																	EntityChanged(0x00000040);
																}
															}
															else {
																if (this->attribute->am2_A_innerCount == 4) {
																	{
																		this->attribute->am2_A_qPointer4 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
																		EntityChanged(0x00000040);
																	}
																	{
																		this->attribute->am2_A_innerCount = (this->attribute->am2_A_innerCount + 1);
																		EntityChanged(0x00000040);
																	}
																}
																else {
																	if (this->attribute->am2_A_innerCount == 5) {
																		{
																			this->attribute->am2_A_qPointer5 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
																			EntityChanged(0x00000040);
																		}
																		{
																			this->attribute->am2_A_innerCount = (this->attribute->am2_A_innerCount + 1);
																			EntityChanged(0x00000040);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										{
											this->attribute->am2_A_set = (this->attribute->am2_A_set + 1);
											EntityChanged(0x00000040);
										}
									}
								}
								{
									this->attribute->am2_A_qPointerFinal = oneofFunc4(this);
									EntityChanged(0x00000040);
								}
							}
							else {
								if (this->attribute->am2_A_count == 6) {
									{
										while (this->attribute->am2_A_set < 7) {
											{
												this->attribute->am2_A_numberOfCustomersInQueueAndDoc = (QueGetCurConts(ValidPtr(&(am2_Q_doctor[ValidIndex("am_model.am_Q_doctor", this->attribute->am2_A_set, 6)]), 50, queue*)) + QueGetCurConts(ValidPtr(&(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]), 50, queue*)));
												EntityChanged(0x00000040);
											}
											{
												if (this->attribute->am2_A_numberOfCustomersInQueueAndDoc == this->attribute->am2_A_min) {
													{
														if (this->attribute->am2_A_innerCount == 1) {
															{
																this->attribute->am2_A_innerCount = (this->attribute->am2_A_innerCount + 1);
																EntityChanged(0x00000040);
															}
															{
																this->attribute->am2_A_qPointer1 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
																EntityChanged(0x00000040);
															}
														}
														else {
															if (this->attribute->am2_A_innerCount == 2) {
																{
																	this->attribute->am2_A_qPointer2 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
																	EntityChanged(0x00000040);
																}
																{
																	this->attribute->am2_A_innerCount = (this->attribute->am2_A_innerCount + 1);
																	EntityChanged(0x00000040);
																}
															}
															else {
																if (this->attribute->am2_A_innerCount == 3) {
																	{
																		this->attribute->am2_A_qPointer3 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
																		EntityChanged(0x00000040);
																	}
																	{
																		this->attribute->am2_A_innerCount = (this->attribute->am2_A_innerCount + 1);
																		EntityChanged(0x00000040);
																	}
																}
																else {
																	if (this->attribute->am2_A_innerCount == 4) {
																		{
																			this->attribute->am2_A_qPointer4 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
																			EntityChanged(0x00000040);
																		}
																		{
																			this->attribute->am2_A_innerCount = (this->attribute->am2_A_innerCount + 1);
																			EntityChanged(0x00000040);
																		}
																	}
																	else {
																		if (this->attribute->am2_A_innerCount == 5) {
																			{
																				this->attribute->am2_A_qPointer5 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
																				EntityChanged(0x00000040);
																			}
																			{
																				this->attribute->am2_A_innerCount = (this->attribute->am2_A_innerCount + 1);
																				EntityChanged(0x00000040);
																			}
																		}
																		else {
																			if (this->attribute->am2_A_innerCount == 6) {
																				{
																					this->attribute->am2_A_qPointer6 = &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_set, 6)]);
																					EntityChanged(0x00000040);
																				}
																				{
																					this->attribute->am2_A_innerCount = (this->attribute->am2_A_innerCount + 1);
																					EntityChanged(0x00000040);
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
											{
												this->attribute->am2_A_set = (this->attribute->am2_A_set + 1);
												EntityChanged(0x00000040);
											}
										}
									}
									{
										this->attribute->am2_A_qPointerFinal = oneofFunc5(this);
										EntityChanged(0x00000040);
									}
								}
							}
						}
					}
				}
			}
		}
		{
			this->attribute->am2_A_index = QueGetIndex(ValidPtr(this->attribute->am2_A_qPointerFinal, 50, queue*));
			EntityChanged(0x00000040);
		}
		{
			this->attribute->am2_A_startTimeDoctor = ASIclock;
			EntityChanged(0x00000040);
		}
		{
			pushppa(this, P_consultation_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, &(am2_Q_doctor_wait[ValidIndex("am_model.am_Q_doctor_wait", this->attribute->am2_A_index, 6)]));
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			pushppa(this, P_consultation_arriving, Step 3, am_localargs);
			pushppa(this, inqueue, Step 1, &(am2_Q_doctor[ValidIndex("am_model.am_Q_doctor", this->attribute->am2_A_index, 6)]));
			return Continue; // go move into territory
Label3: ; // Step 3
		}
		{
			this->attribute->am2_A_endTimeDoctor = ASIclock;
			EntityChanged(0x00000040);
		}
		{
			this->attribute->am2_A_doctorWaitingTime = (this->attribute->am2_A_endTimeDoctor - this->attribute->am2_A_startTimeDoctor);
			EntityChanged(0x00000040);
		}
		{
			return usefor(&(am2_R_doctor[ValidIndex("am_model.am_R_doctor", this->attribute->am2_A_index, 6)]), 1, this, P_consultation_arriving, Step 4, am_localargs, ToModelTime(lognormal(am2_stream0, 5.8700000000000001, 0.57899999999999996), UNITSECONDS));
Label4: ; // Step 4
		}
		{
			if (LdGetType(this) == am2_L_checkUp) {
				clone(this, 1, am2_P_pharmacy, am2_L_checkUp);
			}
			else {
				if (LdGetType(this) == am2_L_outPatient) {
					clone(this, 1, am2_P_pharmacy, am2_L_outPatient);
				}
			}
		}
		{
			downrsrc(&(am2_R_doctor[ValidIndex("am_model.am_R_doctor", this->attribute->am2_A_index, 6)]));
		}
		{
			if (waitfor(ToModelTime(exponential(am2_stream0, 702.41859999999997), UNITSECONDS), this, P_consultation_arriving, Step 5, am_localargs) == Delayed)
				return Delayed;
Label5: ; // Step 5
		}
		{
			uprsrc(&(am2_R_doctor[ValidIndex("am_model.am_R_doctor", this->attribute->am2_A_index, 6)]));
		}
		{
			this->nextproc = am2_die; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_consultation_arriving */


typedef struct {
	double freq;
	process** value;
} Oneof6;

static Oneof6 List6[] = {
	{ 58, &am2_P_cashier},
	{ 100, &am2_P_leaving}
};

static process*
oneofFunc6(load* this)
{
	int ind = 0;
	Oneof6* list = List6;
	double sample = getdrand(am2_stream0) * 100;

	tprintf(tfp, "In oneof\n");
	while (list->freq < sample) {
		ind++;
		list++;
	}
	return *List6[ind].value;
}

static int32
P_pharmacy_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			this->attribute->am2_A_startTimePharmacy = ASIclock;
			EntityChanged(0x00000040);
		}
		{
			pushppa(this, P_pharmacy_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_pharmacy_wait);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			queue* am_locVar;
			AMQueueList* am_locList = NULL;

			ListAppendItem(QueueList, am_locList, &(am2_Q_pharmacy[1]));
			ListAppendItem(QueueList, am_locList, &(am2_Q_pharmacy[2]));
			if (Size(List, _List, am_locList)) {
				int32 am_locVal;
				AMQueueListItem* locIter;
				int i = 0;
				int first = getirand(am2_stream0) % am_locList->numItems;

				for (locIter = am_locList->first; i < first; ++i, locIter = locIter->next) {
				}
				am_locVar = locIter->item;
				am_locVal = QueGetCurConts(ValidPtr(am_locVar, 50, queue*));
				this->attribute->am2_A_qPointer = am_locVar;
				EntityChanged(0x00000040);
				for (locIter = locIter->next; locIter; locIter = locIter->next) {
					am_locVar = locIter->item;
					if (QueGetCurConts(ValidPtr(am_locVar, 50, queue*)) < am_locVal) {
						this->attribute->am2_A_qPointer = am_locVar;
						EntityChanged(0x00000040);
						am_locVal = QueGetCurConts(ValidPtr(am_locVar, 50, queue*));
					}
				}
				for (i = 0, locIter = am_locList->first; i < first; ++i, locIter = locIter->next) {
					am_locVar = locIter->item;
					if (QueGetCurConts(ValidPtr(am_locVar, 50, queue*)) < am_locVal) {
						this->attribute->am2_A_qPointer = am_locVar;
						EntityChanged(0x00000040);
						am_locVal = QueGetCurConts(ValidPtr(am_locVar, 50, queue*));
					}
				}
				ListRemoveAllAndFree(QueueList, am_locList);
			} else
				this->attribute->am2_A_qPointer = NULL;
				EntityChanged(0x00000040);
		}
		{
			this->attribute->am2_A_index = QueGetIndex(ValidPtr(this->attribute->am2_A_qPointer, 50, queue*));
			EntityChanged(0x00000040);
		}
		{
			pushppa(this, P_pharmacy_arriving, Step 3, am_localargs);
			pushppa(this, inqueue, Step 1, &(am2_Q_pharmacy[ValidIndex("am_model.am_Q_pharmacy", this->attribute->am2_A_index, 2)]));
			return Continue; // go move into territory
Label3: ; // Step 3
		}
		{
			this->attribute->am2_A_endTimePharmacy = ASIclock;
			EntityChanged(0x00000040);
		}
		{
			this->attribute->am2_A_pharmacyWaitingTime = (this->attribute->am2_A_endTimePharmacy - this->attribute->am2_A_startTimePharmacy);
			EntityChanged(0x00000040);
		}
		{
			return usefor(&(am2_R_pharmacy[ValidIndex("am_model.am_R_pharmacy", this->attribute->am2_A_index, 2)]), 1, this, P_pharmacy_arriving, Step 4, am_localargs, ToModelTime(lognormal(am2_stream0, 5.2296699999999996, 0.83440000000000003), UNITSECONDS));
Label4: ; // Step 4
		}
		{
			this->nextproc = oneofFunc6(this); /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_pharmacy_arriving */

static int32
P_cashier_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			pushppa(this, P_cashier_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_cashier_wait);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			pushppa(this, P_cashier_arriving, Step 3, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_cashier);
			return Continue; // go move into territory
Label3: ; // Step 3
		}
		{
			return usefor(am2_R_cashier, 1, this, P_cashier_arriving, Step 4, am_localargs, ToModelTime(lognormal(am2_stream0, 3.7999999999999998, 0.60399999999999998), UNITSECONDS));
Label4: ; // Step 4
		}
		{
			this->nextproc = am2_P_leaving; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_cashier_arriving */

static int32
P_leaving_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	{
		{
			if ((this->attribute->am2_A_registrationWaitingTime > am2_V_maxRegistrationWT)) {
				{
					am2_V_maxRegistrationWT = this->attribute->am2_A_registrationWaitingTime;
					EntityChanged(0x01000000);
				}
			}
		}
		{
			if ((this->attribute->am2_A_doctorWaitingTime > am2_V_maxdoctorWT)) {
				{
					am2_V_maxdoctorWT = this->attribute->am2_A_doctorWaitingTime;
					EntityChanged(0x01000000);
				}
			}
		}
		{
			if ((this->attribute->am2_A_pharmacyWaitingTime > am2_V_maxPharmacyWT)) {
				{
					am2_V_maxPharmacyWT = this->attribute->am2_A_pharmacyWaitingTime;
					EntityChanged(0x01000000);
				}
			}
		}
		{
			this->nextproc = am2_die; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_leaving_arriving */



/* init function for logic.m */
void
model_logic_init(struct model_struct* data)
{
	data->am_P_checkUpLoad_distribution->aprc = P_checkUpLoad_distribution_arriving;
	data->am_P_outPatientLoad_distribution->aprc = P_outPatientLoad_distribution_arriving;
	data->am_P_registration->aprc = P_registration_arriving;
	data->am_P_preCheckUp->aprc = P_preCheckUp_arriving;
	data->am_P_checkUp->aprc = P_checkUp_arriving;
	data->am_P_treatment->aprc = P_treatment_arriving;
	data->am_P_consultation->aprc = P_consultation_arriving;
	data->am_P_pharmacy->aprc = P_pharmacy_arriving;
	data->am_P_cashier->aprc = P_cashier_arriving;
	data->am_P_leaving->aprc = P_leaving_arriving;
}

