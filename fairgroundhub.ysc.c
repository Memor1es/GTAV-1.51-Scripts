#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	struct<17> Local_40 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	struct<10> Local_57 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = -1;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	struct<24> Local_74[1];
	struct<24> Local_99[1];
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	vector3 vVar1;
	int iVar4[4];

	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	vVar1 = { ScriptParam_0.f_1[0 /*3*/] };
	func_77(vVar1);
	if (UNK_0x2EBF608FFE6CA406(195))
	{
		func_75();
	}
	if (UNK_0x8A22C4C08282BF26(joaat("FAIRGROUNDHUB")) > 1)
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	if (Global_2621550)
	{
		if (UNK_0x8A22C4C08282BF26(-847690929) == 0)
		{
			UNK_0x8CFFBE74CB5C864A(-847690929);
			while (!UNK_0x64EF15C5E09BAD76(-847690929))
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(-847690929, &ScriptParam_0, 23, 1424);
		}
		UNK_0x10FAF14A60A0DBE1();
	}
	func_67();
	SYSTEM::WAIT(3000);
	if (!UNK_0xC844350D5D58C99A(iVar4[0]))
	{
		iVar4[0] = UNK_0x4B72871A3BE7B474(-1643.524f, -1124.681f, 17.4326f, 0.3f, joaat("PROP_ROLLER_CAR_01"), 1, 0, 1);
	}
	if (!UNK_0xC844350D5D58C99A(iVar4[1]))
	{
		iVar4[1] = UNK_0x4B72871A3BE7B474(-1645.146f, -1126.613f, 17.4326f, 0.3f, joaat("PROP_ROLLER_CAR_02"), 1, 0, 1);
	}
	if (!UNK_0xC844350D5D58C99A(iVar4[2]))
	{
		iVar4[2] = UNK_0x4B72871A3BE7B474(-1646.768f, -1128.545f, 17.4326f, 0.3f, joaat("PROP_ROLLER_CAR_02"), 1, 0, 1);
	}
	if (!UNK_0xC844350D5D58C99A(iVar4[3]))
	{
		iVar4[3] = UNK_0x4B72871A3BE7B474(-1648.39f, -1130.478f, 17.4326f, 0.3f, joaat("PROP_ROLLER_CAR_02"), 1, 0, 1);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		if (UNK_0xC844350D5D58C99A(iVar4[iVar0]))
		{
			UNK_0x1E9649458B15960F(iVar4[iVar0], true);
			UNK_0xE121AE1BBF90E186(iVar4[iVar0], true);
		}
		iVar0++;
	}
	while (true)
	{
		func_66(UNK_0x16F2683693E537C9());
		if (func_65(UNK_0x16F2683693E537C9(), vVar1, 0) > (100f + 20f))
		{
			func_75();
		}
		if (!func_64(14))
		{
			if (func_63())
			{
				func_75();
			}
			else if (Local_74[0 /*24*/].f_9 == 0)
			{
				Local_74[0 /*24*/].f_9 = 15;
				Local_99[0 /*24*/].f_9 = 8;
				Local_40.f_9 = 0;
				Local_57.f_9 = 0;
			}
		}
		if (func_62(64) != 0)
		{
			func_54(64, 0, 0, 1, 0);
		}
		if (func_1(&Local_74, &Local_40, 0, 0, 1, 2050))
		{
			func_75();
		}
		if (func_1(&Local_99, &Local_57, 0, 0, 1, 2050))
		{
			func_75();
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(var uParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (sParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			func_49(uParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (sParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (func_43(sParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *uParam0)
				{
					if (func_40(uParam0[iVar0 /*24*/]) && (*uParam0)[iVar0 /*24*/])
					{
						sParam1->f_12 = iVar0;
						if ((uParam0[iVar0 /*24*/])->f_7 || (UNK_0x2C1AA3A291786CDC() && sParam1->f_16 == 0))
						{
							func_39(sParam1, 6);
						}
						else if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
						{
							func_39(sParam1, 8);
						}
						else if (bParam2)
						{
							func_39(sParam1, 3);
						}
						else if ((uParam0[iVar0 /*24*/])->f_8)
						{
							func_39(sParam1, 2);
						}
						else if (func_28() < (uParam0[sParam1->f_12 /*24*/])->f_9)
						{
							func_39(sParam1, 1);
						}
						else if (func_23())
						{
							func_39(sParam1, 7);
						}
						else
						{
							func_39(sParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_22(sParam1);
			}
			break;
		case 2:
			if (!sParam1->f_9)
			{
				func_20(sParam1, sParam1->f_6);
			}
			if (func_16(uParam0[sParam1->f_12 /*24*/]) || (uParam0[iVar0 /*24*/])->f_8 == 0)
			{
				func_39(sParam1, 0);
				return false;
			}
			break;
		case 1:
			if (!sParam1->f_9)
			{
				func_11(sParam1, sParam1->f_2, (uParam0[sParam1->f_12 /*24*/])->f_9);
			}
			if (func_16(uParam0[sParam1->f_12 /*24*/]) || func_28() >= (uParam0[sParam1->f_12 /*24*/])->f_9)
			{
				func_39(sParam1, 0);
				return false;
			}
			break;
		case 6:
			if (!sParam1->f_9)
			{
				func_20(sParam1, sParam1->f_1);
			}
			if (func_16(uParam0[sParam1->f_12 /*24*/]) || !func_43(sParam1->f_16))
			{
				func_39(sParam1, 0);
				return false;
			}
			break;
		case 3:
			if (!sParam1->f_9)
			{
				func_20(sParam1, sParam1->f_3);
			}
			if ((func_16(uParam0[sParam1->f_12 /*24*/]) || bParam2 == 0) || !func_43(sParam1->f_16))
			{
				func_39(sParam1, 0);
				return false;
			}
			break;
		case 7:
			if (!sParam1->f_9)
			{
				func_20(sParam1, sParam1->f_5);
			}
			if (func_16(uParam0[sParam1->f_12 /*24*/]) || !func_43(sParam1->f_16))
			{
				func_39(sParam1, 0);
				return false;
			}
			break;
		case 8:
			if (!sParam1->f_9)
			{
				func_20(sParam1, sParam1->f_4);
			}
			if (func_16(uParam0[sParam1->f_12 /*24*/]) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
			{
				func_39(sParam1, 0);
				return false;
			}
			break;
		case 9:
			if (!sParam1->f_9)
			{
				if (func_10())
				{
					func_20(sParam1, sParam1->f_7);
				}
				else
				{
					func_20(sParam1, sParam1->f_8);
				}
			}
			if (func_16(uParam0[sParam1->f_12 /*24*/]) || func_8(uParam0[sParam1->f_12 /*24*/]))
			{
				func_39(sParam1, 0);
				return false;
			}
			break;
		case 4:
			UNK_0x558EC149EB2BC0A2(2, 51);
			UNK_0x38C3A68D7861DCFD(0, 101, 1);
			func_7();
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
			{
				func_39(sParam1, 8);
				return false;
			}
			if ((uParam0[sParam1->f_12 /*24*/])->f_8)
			{
				func_39(sParam1, 2);
				return false;
			}
			if (func_16(uParam0[sParam1->f_12 /*24*/]) || !func_43(sParam1->f_16))
			{
				func_39(sParam1, 0);
				return false;
			}
			if (Global_73825)
			{
				return false;
			}
			if (func_5(1))
			{
				return false;
			}
			if ((uParam0[sParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) || func_4(UNK_0x16F2683693E537C9(), 0) != -1)
				{
					func_39(sParam1, 0);
					return false;
				}
			}
			if ((uParam0[sParam1->f_12 /*24*/])->f_7 || (UNK_0x2C1AA3A291786CDC() && sParam1->f_16 == 0))
			{
				func_39(sParam1, 6);
				return false;
			}
			if (func_23())
			{
				func_39(sParam1, 7);
				return false;
			}
			if (func_28() < (uParam0[sParam1->f_12 /*24*/])->f_9)
			{
				func_39(sParam1, 1);
				return false;
			}
			if (!sParam1->f_9)
			{
				func_11(sParam1, *sParam1, (uParam0[sParam1->f_12 /*24*/])->f_9);
			}
			if ((uParam0[sParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
				{
					return false;
				}
			}
			if (UNK_0x798A3F1296751F46() || UNK_0x1A72D8C9F025E5E3())
			{
				return false;
			}
			if (UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
			{
				if ((UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9()) || UNK_0x9832A1748E6D3DBF(UNK_0x16F2683693E537C9())) || UNK_0x7F69A7C512ACACFD(UNK_0x16F2683693E537C9()))
				{
					return false;
				}
				if ((UNK_0x4580010DFDF4D53F(UNK_0x16F2683693E537C9()) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0xA48EBBEA418ADC94(UNK_0x16F2683693E537C9()))
				{
					return false;
				}
				if (UNK_0x39E5E51C6E21A69B(UNK_0x16F2683693E537C9()))
				{
					return false;
				}
				if (UNK_0x82F88FD400E98881(UNK_0x16F2683693E537C9()) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9()))
				{
					return false;
				}
				if (UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) > 0.05f)
				{
					return false;
				}
			}
			if (UNK_0xBFC0798A6E3417F9(2, 51) && sParam1->f_9 == 1)
			{
				if (!func_8(uParam0[sParam1->f_12 /*24*/]))
				{
					func_39(sParam1, 9);
				}
				else
				{
					func_39(sParam1, 5);
				}
			}
			break;
		case 5:
			func_22(sParam1);
			(uParam0[sParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				func_39(sParam1, 0);
				return true;
			}
			UNK_0xA37A90C62806D848(1);
			UNK_0x679C321F8CAA2CFA(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 20f, 0);
			if (!UNK_0xEA6BC48857E0AC4C((uParam0[sParam1->f_12 /*24*/])->f_5))
			{
				UNK_0x92DCE5C81176D2B4((uParam0[sParam1->f_12 /*24*/])->f_5);
				while (!UNK_0x1FBF08B001C4788A((uParam0[sParam1->f_12 /*24*/])->f_5))
				{
					func_7();
					if (func_66(UNK_0x16F2683693E537C9()))
					{
						if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !Global_76622)
						{
							func_2(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 2f, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0);
							UNK_0xACCB31D58716FE8F(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0);
						}
					}
					UNK_0x558EC149EB2BC0A2(2, 51);
					UNK_0x92DCE5C81176D2B4((uParam0[sParam1->f_12 /*24*/])->f_5);
					UNK_0x38C3A68D7861DCFD(0, 101, 1);
					UNK_0x38C3A68D7861DCFD(0, 75, 1);
					UNK_0x38C3A68D7861DCFD(0, 23, 1);
					SYSTEM::WAIT(0);
				}
				if (bParam3)
				{
					UNK_0x53491B90E4FD0E56(250);
				}
				if (UNK_0x1FBF08B001C4788A((uParam0[sParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!UNK_0x757EF87A33649210())
						{
							if (func_66(UNK_0x16F2683693E537C9()))
							{
								if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !Global_76622)
								{
									func_2(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 2f, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0);
									UNK_0xACCB31D58716FE8F(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0);
								}
							}
							UNK_0x558EC149EB2BC0A2(2, 51);
							UNK_0x38C3A68D7861DCFD(0, 101, 1);
							UNK_0x38C3A68D7861DCFD(0, 75, 1);
							UNK_0x38C3A68D7861DCFD(0, 23, 1);
							func_7();
							SYSTEM::WAIT(0);
						}
					}
					SYSTEM::START_NEW_SCRIPT((uParam0[sParam1->f_12 /*24*/])->f_5, iParam5);
					UNK_0x5E8C29AE121DF1C7((uParam0[sParam1->f_12 /*24*/])->f_5);
					return true;
				}
			}
			break;
	}
	return false;
}

int func_2(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	UNK_0x38C3A68D7861DCFD(0, 71, 1);
	UNK_0x38C3A68D7861DCFD(0, 72, 1);
	UNK_0x38C3A68D7861DCFD(0, 76, 1);
	UNK_0x38C3A68D7861DCFD(0, 73, 1);
	UNK_0x38C3A68D7861DCFD(0, 59, 1);
	UNK_0x38C3A68D7861DCFD(0, 60, 1);
	if (bParam5)
	{
		UNK_0x38C3A68D7861DCFD(0, 75, 1);
	}
	UNK_0x38C3A68D7861DCFD(0, 80, 1);
	if (!bParam6)
	{
		UNK_0x38C3A68D7861DCFD(0, 69, 1);
		UNK_0x38C3A68D7861DCFD(0, 70, 1);
		UNK_0x38C3A68D7861DCFD(0, 68, 1);
	}
	UNK_0x38C3A68D7861DCFD(0, 74, 1);
	UNK_0x38C3A68D7861DCFD(0, 86, 1);
	UNK_0x38C3A68D7861DCFD(0, 81, 1);
	UNK_0x38C3A68D7861DCFD(0, 82, 1);
	UNK_0x38C3A68D7861DCFD(0, 138, 1);
	UNK_0x38C3A68D7861DCFD(0, 136, 1);
	UNK_0x38C3A68D7861DCFD(0, 114, 1);
	UNK_0x38C3A68D7861DCFD(0, 107, 1);
	UNK_0x38C3A68D7861DCFD(0, 110, 1);
	UNK_0x38C3A68D7861DCFD(0, 89, 1);
	UNK_0x38C3A68D7861DCFD(0, 89, 1);
	UNK_0x38C3A68D7861DCFD(0, 87, 1);
	UNK_0x38C3A68D7861DCFD(0, 88, 1);
	UNK_0x38C3A68D7861DCFD(0, 113, 1);
	UNK_0x38C3A68D7861DCFD(0, 115, 1);
	UNK_0x38C3A68D7861DCFD(0, 116, 1);
	UNK_0x38C3A68D7861DCFD(0, 117, 1);
	UNK_0x38C3A68D7861DCFD(0, 118, 1);
	UNK_0x38C3A68D7861DCFD(0, 119, 1);
	UNK_0x38C3A68D7861DCFD(0, 352, 1);
	UNK_0x38C3A68D7861DCFD(0, 131, 1);
	UNK_0x38C3A68D7861DCFD(0, 132, 1);
	UNK_0x38C3A68D7861DCFD(0, 123, 1);
	UNK_0x38C3A68D7861DCFD(0, 126, 1);
	UNK_0x38C3A68D7861DCFD(0, 129, 1);
	UNK_0x38C3A68D7861DCFD(0, 130, 1);
	UNK_0x38C3A68D7861DCFD(0, 133, 1);
	UNK_0x38C3A68D7861DCFD(0, 134, 1);
	UNK_0xCFAE3195DD6AE715();
	func_3(bParam0);
	if ((UNK_0x1C0640BA9A7327B3() - Global_29) > 500)
	{
		UNK_0xE0C0351D5B931E37(bParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = UNK_0x1C0640BA9A7327B3();
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x755FF954DAE327E1(UNK_0x9C66D99E63E8E24C(bParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_3(bool bParam0)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x2668265160B1C0E5(bParam0))
		{
			if (UNK_0x08D499BC1F863857(bParam0))
			{
				UNK_0xF356D74F6AE75D16(bParam0, 0);
			}
		}
	}
}

bool func_4(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0x405E212DDE472467(bParam0, iParam1))
		{
			bVar0 = UNK_0x6937EA2286828455(bParam0, iParam1);
			if (UNK_0xC844350D5D58C99A(bVar0))
			{
				iVar1 = UNK_0x7087E053058E9F6C(UNK_0x134B62B726CEC8E6(bVar0));
				if (iVar1 == 1)
				{
					bVar3 = -1;
					return bVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					bVar3 = (iVar2 - 1);
					if (!UNK_0xBBA8A868118C90ED(bVar0, bVar3, 0))
					{
						if (UNK_0xA30B8362589C124A(bVar0, bVar3, 0) == bParam0)
						{
							return bVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return bVar3;
}

bool func_5(bool bParam0)
{
	if (bParam0)
	{
		if (func_6())
		{
			return true;
		}
	}
	if (func_64(14))
	{
		return true;
	}
	return false;
}

bool func_6()
{
	if (Global_110583)
	{
		return true;
	}
	if (!func_64(14) && UNK_0x8A22C4C08282BF26(joaat("DIRECTOR_MODE")) > 0)
	{
		return true;
	}
	return false;
}

void func_7()
{
	Global_22211.f_6 = 1;
}

bool func_8(var uParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;

	bVar4 = UNK_0x16F2683693E537C9();
	if (uParam0->f_15 == 360f)
	{
		return true;
	}
	if (func_77(uParam0->f_12))
	{
		return true;
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar3 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (func_66(bVar3))
		{
			vVar0 = { UNK_0x835730A2D89F6093(bVar3, 2) };
			if (vVar0.y > 45f || vVar0.y < -45f)
			{
				return false;
			}
			bVar4 = bVar3;
		}
	}
	vVar0 = { UNK_0x08D89CE2E20AE305(bVar4) };
	if (func_9(uParam0->f_12, vVar0) > SYSTEM::COS(uParam0->f_15))
	{
		return true;
	}
	return false;
}

float func_9(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0 * Param3) + (Param0.f_1 * Param3.f_1));
}

bool func_10()
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		return UNK_0x10BA239D3B8FDC7F(bVar0, 90f);
	}
	return UNK_0x10BA239D3B8FDC7F(UNK_0x16F2683693E537C9(), 90f);
}

int func_11(char* sParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return 0;
	}
	if (func_13(sParam0) || !UNK_0xFEBC1E4EC9E001F0())
	{
		UNK_0xA37A90C62806D848(1);
		func_12(bParam1, bParam2);
		sParam0->f_14 = bParam1;
		sParam0->f_15 = bParam2;
		sParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_12(bool bParam0, bool bParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_13(char* sParam0)
{
	if (UNK_0xEA6BC48857E0AC4C(sParam0->f_14))
	{
		return false;
	}
	if (!UNK_0xFEBC1E4EC9E001F0())
	{
		return false;
	}
	if (UNK_0x7F8A39872A07D2CE(*sParam0, sParam0->f_14) || UNK_0x7F8A39872A07D2CE(sParam0->f_2, sParam0->f_14))
	{
		return func_15(sParam0->f_14, sParam0->f_15);
	}
	return func_14(sParam0->f_14);
}

int func_14(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

int func_15(bool bParam0, bool bParam1)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	return UNK_0xE3789B9938DCEAE8(0);
}

bool func_16(var uParam0)
{
	struct<8> Var0;

	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			return true;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			return true;
		}
		if (func_4(UNK_0x16F2683693E537C9(), 0) != -1)
		{
			return true;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !func_19(UNK_0x16F2683693E537C9(), uParam0->f_1, (uParam0->f_10 + 2f));
	}
	Var0 = { func_17(uParam0->f_16, 2f) };
	return !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, true, 0);
}

struct<8> func_17(struct<8> Param0, float fParam8)
{
	struct<8> Var0;
	vector3 vVar8;

	Var0 = 2;
	vVar8 = { func_18(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam8, fParam8, fParam8) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - vVar8 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + vVar8 };
	Var0.f_7 = (Param0.f_7 + (fParam8 * 2f));
	return Var0;
}

Vector3 func_18(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_19(bool bParam0, vector3 vParam1, float fParam4)
{
	return SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bParam0, true), vParam1) <= (fParam4 * fParam4);
}

int func_20(char* sParam0, bool bParam1)
{
	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return 0;
	}
	if (func_13(sParam0) || !UNK_0xFEBC1E4EC9E001F0())
	{
		UNK_0xA37A90C62806D848(1);
		func_21(bParam1);
		sParam0->f_14 = bParam1;
		sParam0->f_15 = 0;
		sParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_21(bool bParam0)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

void func_22(char* sParam0)
{
	if (func_13(sParam0))
	{
		UNK_0xA37A90C62806D848(1);
	}
	sParam0->f_14 = 0;
	sParam0->f_15 = 0;
	if (sParam0->f_9 == 1)
	{
		sParam0->f_9 = 0;
	}
}

bool func_23()
{
	bool bVar0;

	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		return false;
	}
	bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
	if (UNK_0x4E861BC5B1EDA7BD(bVar0))
	{
		return true;
	}
	if (func_27(bVar0))
	{
		return true;
	}
	if (func_24(bVar0, 3))
	{
		return true;
	}
	return !UNK_0xDF1306B443CD3D15(bVar0, 0);
}

bool func_24(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_25(bParam0))
	{
		iVar0 = 0;
		if (UNK_0x464B3D84B739AE72(bParam0, false, 0) && UNK_0x464B3D84B739AE72(bParam0, true, 0))
		{
			return true;
		}
		if (UNK_0x464B3D84B739AE72(bParam0, 4, 0) && UNK_0x464B3D84B739AE72(bParam0, 5, 0))
		{
			return true;
		}
		if (UNK_0x464B3D84B739AE72(bParam0, false, 0))
		{
			iVar0++;
		}
		if (UNK_0x464B3D84B739AE72(bParam0, true, 0))
		{
			iVar0++;
		}
		if (UNK_0x464B3D84B739AE72(bParam0, 4, 0))
		{
			iVar0++;
		}
		if (UNK_0x464B3D84B739AE72(bParam0, 5, 0))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_25(bool bParam0)
{
	if (func_26(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (!UNK_0x4E861BC5B1EDA7BD(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_26(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_27(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0x437347B10A200C4B(bParam0, 0))
		{
			return true;
		}
		else if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (!UNK_0x4E861BC5B1EDA7BD(bParam0))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

int func_28()
{
	if (UNK_0x8CD06866876216F2())
	{
		return func_36(UNK_0xD803B885F5E47A62());
	}
	switch (func_30())
	{
		case 2:
			return func_29(2);
		case 0:
			return func_29(0);
		case 1:
			return func_29(1);
		default:
			break;
	}
	return 0;
}

var func_29(int iParam0)
{
	return Global_58686[iParam0];
}

int func_30()
{
	func_31();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_31()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_34(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_33(UNK_0x16F2683693E537C9());
			if (func_32(iVar0) && (!func_64(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_32(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

bool func_32(int iParam0)
{
	return iParam0 < 3;
}

int func_33(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_34(int iParam0)
{
	if (func_32(iParam0))
	{
		return func_35(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_35(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_36(bool bParam0)
{
	int iVar0;

	iVar0 = func_37(bParam0);
	return iVar0;
}

int func_37(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (bParam0 == UNK_0xD803B885F5E47A62())
		{
			return UNK_0x62F8C2EDB26F57B3(-1);
		}
		else if (func_38(bParam0))
		{
			return Global_1590535[bParam0 /*876*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_38(bool bParam0)
{
	if (bParam0 == -1)
	{
		return false;
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2439138.f_1, bParam0);
	}
	return true;
}

void func_39(char* sParam0, int iParam1)
{
	sParam0->f_13 = iParam1;
	func_22(sParam0);
}

bool func_40(var uParam0)
{
	func_66(UNK_0x16F2683693E537C9());
	if (*uParam0 == 0)
	{
		return false;
	}
	if (func_42(0))
	{
		return false;
	}
	if (func_41())
	{
		return false;
	}
	if (uParam0->f_6 == 0)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			return false;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			return false;
		}
		if (func_4(UNK_0x16F2683693E537C9(), 0) != -1)
		{
			return false;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, 0, true, 0);
	}
	return func_19(UNK_0x16F2683693E537C9(), uParam0->f_1, uParam0->f_10);
}

bool func_41()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

bool func_42(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_43(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_63())
		{
			return false;
		}
	}
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (UNK_0x1A72D8C9F025E5E3())
	{
		return false;
	}
	if (func_41())
	{
		return false;
	}
	if (Global_61506)
	{
		return false;
	}
	if (func_42(0))
	{
		return false;
	}
	if (func_48(0))
	{
		return false;
	}
	if (func_44(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_44(int iParam0)
{
	if (func_47(iParam0))
	{
		return true;
	}
	if (func_45(iParam0))
	{
		return true;
	}
	return false;
}

bool func_45(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_46(iParam0, 9);
	}
	return false;
}

bool func_46(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

bool func_47(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iVar0 /*615*/].f_1, false);
	}
	return false;
}

bool func_48(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 14))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return true;
	}
	if (Global_19486.f_1 > 3)
	{
		return true;
	}
	return false;
}

void func_49(var uParam0)
{
	if (uParam0->f_11 == 1)
	{
		func_51(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_50(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_50(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;

	fVar1 = (360f / SYSTEM::TO_FLOAT(iParam8));
	vVar2 = { vParam0 };
	vVar5 = { vParam0 };
	fVar8 = 0f;
	vVar2 = { vParam0 };
	vVar2.x = (vVar2.x + (SYSTEM::SIN((fVar8 - fVar1)) * fParam3));
	vVar2.f_1 = (vVar2.y + (SYSTEM::COS((fVar8 - fVar1)) * fParam3));
	iVar0 = 0;
	while (iVar0 <= iParam8)
	{
		vVar5 = { vParam0 };
		vVar5.x = (vVar5.x + (SYSTEM::SIN(fVar8) * fParam3));
		vVar5.f_1 = (vVar5.y + (SYSTEM::COS(fVar8) * fParam3));
		UNK_0x4ADCCF23C40DC113(vVar2, vVar5, bParam4, bParam5, bParam6, iParam7);
		vVar2 = { vVar5 };
		fVar8 = (fVar8 + fVar1);
		iVar0++;
	}
}

void func_51(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	func_52(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, fParam4);
}

void func_52(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13[8];
	int iVar38;

	if (fParam6 == 0f)
	{
		return;
	}
	vVar0 = { func_18(vParam3 - vParam0) };
	vVar3 = { func_53(vVar0, 0f, 0f, 1f) };
	fVar6 = (fParam6 / 2f);
	vVar7 = { vParam0 };
	vVar10 = { vParam3 };
	vVar10.f_2 = vParam0.z;
	vVar13[0 /*3*/] = { vVar7 - vVar3 * Vector(fVar6, fVar6, fVar6) };
	vVar13[1 /*3*/] = { vVar7 + vVar3 * Vector(fVar6, fVar6, fVar6) };
	vVar13[2 /*3*/] = { vVar10 + vVar3 * Vector(fVar6, fVar6, fVar6) };
	vVar13[3 /*3*/] = { vVar10 - vVar3 * Vector(fVar6, fVar6, fVar6) };
	UNK_0x4ADCCF23C40DC113(vVar13[0 /*3*/], vVar13[1 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[1 /*3*/], vVar13[2 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[2 /*3*/], vVar13[3 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[3 /*3*/], vVar13[0 /*3*/], bParam7, bParam8, bParam9, iParam10);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		vVar13[(4 + iVar38) /*3*/] = { vVar13[iVar38 /*3*/] };
		vVar13[(4 + iVar38) /*3*/].f_2 = vParam3.z;
		iVar38++;
	}
	UNK_0x4ADCCF23C40DC113(vVar13[4 /*3*/], vVar13[5 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[5 /*3*/], vVar13[6 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[6 /*3*/], vVar13[7 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[7 /*3*/], vVar13[4 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[0 /*3*/], vVar13[4 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[1 /*3*/], vVar13[5 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[2 /*3*/], vVar13[6 /*3*/], bParam7, bParam8, bParam9, iParam10);
	UNK_0x4ADCCF23C40DC113(vVar13[3 /*3*/], vVar13[7 /*3*/], bParam7, bParam8, bParam9, iParam10);
}

Vector3 func_53(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

void func_54(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_76622)
		{
			Global_2439138.f_75.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_111638.f_7256.f_227[iParam0] = iParam1;
		}
		Global_38398[iParam0] = iParam2;
		Global_38597[iParam0] = 1;
		func_57(iParam0, bParam3, iParam4, 0);
		func_55(iParam0, iParam1);
	}
}

void func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				UNK_0xE108118042391BB3("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				UNK_0xE108118042391BB3("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		case 71:
			if (iParam1 != 1)
			{
				UNK_0xECA6285B6CB268BA("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				UNK_0xECA6285B6CB268BA("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		case 65:
			if (iParam1 == 1)
			{
				func_56(0, 0);
			}
			else
			{
				func_56(0, 1);
			}
			break;
		case 6:
			if (iParam1 == 1)
			{
				UNK_0xE108118042391BB3("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				UNK_0xE108118042391BB3("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		case 174:
			if (iParam1 == 2)
			{
				UNK_0x250BB9A851121D75("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		case 37:
			if (iParam1 == 1)
			{
				UNK_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", false);
				UNK_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", false);
				UNK_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", false);
				UNK_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", false);
			}
			break;
	}
}

void func_56(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&Global_110276, bParam0);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_110276, bParam0);
	}
	Global_110275 = 1;
}

bool func_57(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar98;
	bool bVar99;
	int iVar100;

	Global_1652615 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_61(&Var3, iParam0);
	if (func_58())
	{
		iVar1 = Global_111638.f_7256.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2439138.f_75.f_227[iParam0];
	}
	iVar2 = Global_38796[iParam0];
	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !bParam3)
	{
		Global_1652615 = 1;
	}
	else
	{
		bVar99 = true;
		if (UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) != UNK_0x12AB0310C2281427("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_38398[iParam0] && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), Var3, 1) < 200f)
				{
					bVar99 = false;
					Global_1652615 = 1;
				}
				if (!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) || UNK_0x946BFA82EB988C81(UNK_0x16F2683693E537C9()))
				{
					if (!UNK_0x757EF87A33649210())
					{
						bVar99 = false;
						Global_1652615 = 1;
					}
				}
			}
		}
		if (UNK_0xEB880D98B5988D0C() && (!UNK_0x991B1F0980C62628() || UNK_0x00A15D69BCAA5267() != 5))
		{
			bVar99 = false;
			Global_1652615 = 1;
		}
		if (bVar99)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							UNK_0x77ADAEFF81EAE1E4(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							UNK_0x3124890FDA752DE4(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_39992[iParam0] = 1;
					}
					bVar0 = true;
					break;
				case 1:
					if (iVar1 == 0)
					{
						if (UNK_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != UNK_0x12AB0310C2281427("") && UNK_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != UNK_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (UNK_0xBCFF5481C5F58C19(&(Var3.f_8[1 /*8*/])))
							{
								UNK_0x81CF20E10AAD5FD5(&(Var3.f_8[1 /*8*/]));
								Global_1652615 = 1;
							}
						}
						if ((UNK_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != UNK_0x12AB0310C2281427("") && UNK_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != UNK_0x12AB0310C2281427("REMOVE_ALL_STATES")) && UNK_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != UNK_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (UNK_0xBCFF5481C5F58C19(&(Var3.f_8[2 /*8*/])))
							{
								UNK_0x81CF20E10AAD5FD5(&(Var3.f_8[2 /*8*/]));
								Global_1652615 = 1;
							}
						}
						if (UNK_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != UNK_0x12AB0310C2281427(""))
						{
							if (!UNK_0xBCFF5481C5F58C19(&(Var3.f_8[0 /*8*/])))
							{
								UNK_0x2404539258C5376B(&(Var3.f_8[0 /*8*/]));
								Global_1652615 = 1;
							}
						}
						if (UNK_0x12AB0310C2281427(&(Var3.f_34)) != UNK_0x12AB0310C2281427(""))
						{
							if (!UNK_0xBCFF5481C5F58C19(&(Var3.f_34)))
							{
								UNK_0x2404539258C5376B(&(Var3.f_34));
								Global_1652615 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (UNK_0x12AB0310C2281427(&(Var3.f_34)) != UNK_0x12AB0310C2281427(""))
						{
							if (UNK_0xBCFF5481C5F58C19(&(Var3.f_34)))
							{
								UNK_0x81CF20E10AAD5FD5(&(Var3.f_34));
							}
						}
						if (UNK_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != UNK_0x12AB0310C2281427("") && UNK_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != UNK_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (UNK_0xBCFF5481C5F58C19(&(Var3.f_8[0 /*8*/])))
							{
								UNK_0x81CF20E10AAD5FD5(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((UNK_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != UNK_0x12AB0310C2281427("") && UNK_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != UNK_0x12AB0310C2281427("REMOVE_ALL_STATES")) && UNK_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != UNK_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (UNK_0xBCFF5481C5F58C19(&(Var3.f_8[2 /*8*/])))
							{
								UNK_0x81CF20E10AAD5FD5(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (UNK_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != UNK_0x12AB0310C2281427(""))
						{
							if (!UNK_0xBCFF5481C5F58C19(&(Var3.f_8[1 /*8*/])))
							{
								UNK_0x2404539258C5376B(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (UNK_0x12AB0310C2281427(&(Var3.f_34)) != UNK_0x12AB0310C2281427(""))
						{
							if (UNK_0xBCFF5481C5F58C19(&(Var3.f_34)))
							{
								UNK_0x81CF20E10AAD5FD5(&(Var3.f_34));
							}
						}
						if (UNK_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != UNK_0x12AB0310C2281427("") && UNK_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != UNK_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (UNK_0xBCFF5481C5F58C19(&(Var3.f_8[0 /*8*/])))
							{
								UNK_0x81CF20E10AAD5FD5(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (UNK_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != UNK_0x12AB0310C2281427("") && UNK_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != UNK_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (UNK_0xBCFF5481C5F58C19(&(Var3.f_8[1 /*8*/])))
							{
								UNK_0x81CF20E10AAD5FD5(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (UNK_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != UNK_0x12AB0310C2281427("") && UNK_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != UNK_0x12AB0310C2281427("REMOVE_ALL_STATES"))
						{
							if (!UNK_0xBCFF5481C5F58C19(&(Var3.f_8[2 /*8*/])))
							{
								UNK_0x2404539258C5376B(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_39793[iParam0] = 1;
					Global_39992[iParam0] = 1;
					bVar0 = true;
					break;
				case 2:
					iVar100 = UNK_0x0D1736C2E221BCEA(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (UNK_0x12AB0310C2281427(&(Var3.f_50)) != UNK_0x12AB0310C2281427(""))
						{
							if (UNK_0xC30A04502B3FE8A8(iVar100, &(Var3.f_50)))
							{
								UNK_0xFE3926923F5430AD(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (UNK_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != UNK_0x12AB0310C2281427(""))
							{
								if (UNK_0xC30A04502B3FE8A8(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									UNK_0xFE3926923F5430AD(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((UNK_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != UNK_0x12AB0310C2281427("") && UNK_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != UNK_0x12AB0310C2281427("REMOVE_ALL_STATES")) && UNK_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != UNK_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (UNK_0xC30A04502B3FE8A8(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									UNK_0xFE3926923F5430AD(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (UNK_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != UNK_0x12AB0310C2281427(""))
							{
								if (!UNK_0xC30A04502B3FE8A8(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									UNK_0x8A12C90BAA1275CC(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (UNK_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != UNK_0x12AB0310C2281427(""))
							{
								if (UNK_0xC30A04502B3FE8A8(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									UNK_0xFE3926923F5430AD(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((UNK_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != UNK_0x12AB0310C2281427("") && UNK_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != UNK_0x12AB0310C2281427("REMOVE_ALL_STATES")) && UNK_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != UNK_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (UNK_0xC30A04502B3FE8A8(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									UNK_0xFE3926923F5430AD(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (UNK_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != UNK_0x12AB0310C2281427(""))
							{
								if (!UNK_0xC30A04502B3FE8A8(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									UNK_0x8A12C90BAA1275CC(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (UNK_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != UNK_0x12AB0310C2281427(""))
							{
								if (UNK_0xC30A04502B3FE8A8(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									UNK_0xFE3926923F5430AD(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (UNK_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != UNK_0x12AB0310C2281427(""))
							{
								if (UNK_0xC30A04502B3FE8A8(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									UNK_0xFE3926923F5430AD(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (UNK_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != UNK_0x12AB0310C2281427("") && UNK_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != UNK_0x12AB0310C2281427("REMOVE_ALL_STATES"))
							{
								if (!UNK_0xC30A04502B3FE8A8(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									UNK_0x8A12C90BAA1275CC(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							UNK_0xF1ABF0D4BF2D0A54(iVar100);
						}
					}
					Global_39992[iParam0] = 1;
					Global_39793[iParam0] = 1;
					bVar0 = true;
					break;
				case 3:
					if (UNK_0x0EB28750412C3A5A(Var3, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), 1) < 250f)
					{
						uVar98 = UNK_0x57651D42225429CC(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (UNK_0xB39672D8C1F6BB48(uVar98))
						{
							if (iVar1 == 0)
							{
								UNK_0xCADC8175C61F28E5(uVar98, 3);
								Global_39992[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((UNK_0xD92EF3526CDA283F(uVar98) != 6 && UNK_0xD92EF3526CDA283F(uVar98) != 7) && UNK_0xD92EF3526CDA283F(uVar98) != 8)
								{
									UNK_0xCADC8175C61F28E5(uVar98, 10);
									Global_39992[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				case 4:
					if (iVar1 == 0)
					{
						UNK_0x9E5FA221FDB148CD(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						UNK_0x0674E58A79778E99(&(Global_38144[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						UNK_0x2192A5725EC5808C(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						UNK_0x5D96D8530B3D0904(&(Global_38144[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_38597[iParam0] = 0;
				Global_38796[iParam0] = iVar1;
				if (!func_58())
				{
					if (!Global_39393[iParam0])
					{
						Global_39393[iParam0] = 1;
						Global_39592++;
					}
				}
			}
		}
	}
	return bVar0;
}

bool func_58()
{
	if ((func_60() == -1 || func_60() == 999) && !func_59() == 0)
	{
		return true;
	}
	return false;
}

int func_59()
{
	return Global_30769;
}

int func_60()
{
	return Global_30768;
}

int func_61(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("DT1_05_BUILD1_H");
			uParam0->f_4[1] = joaat("DT1_05_BUILD1_DAMAGE");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("DT1_05_BUILD1_LOD");
			uParam0->f_4[1] = joaat("DT1_05_BUILD1_DAMAGE_LOD");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("DT1_05_SLOD");
			uParam0->f_4[1] = joaat("DT1_05_DAMAGE_SLOD");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			Jump @13779; //curOff = 6933
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			Jump @13779; //curOff = 6986
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			Jump @13779; //curOff = 7039
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			Jump @13779; //curOff = 7092
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			Jump @13779; //curOff = 7145
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			Jump @13779; //curOff = 7282
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			Jump @13779; //curOff = 7335
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			Jump @13779; //curOff = 7388
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			Jump @13779; //curOff = 7441
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			Jump @13779; //curOff = 7494
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			Jump @13779; //curOff = 7547
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			Jump @13779; //curOff = 7610
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			Jump @13779; //curOff = 7673
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			Jump @13779; //curOff = 7736
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			Jump @13779; //curOff = 7799
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			Jump @13779; //curOff = 7862
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			Jump @13779; //curOff = 7925
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			Jump @13779; //curOff = 7988
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			Jump @13779; //curOff = 8051
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			Jump @13779; //curOff = 8114
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			Jump @13779; //curOff = 8177
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			Jump @13779; //curOff = 8240
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			Jump @13779; //curOff = 8303
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			Jump @13779; //curOff = 8366
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			Jump @13779; //curOff = 8429
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			Jump @13779; //curOff = 8492
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			Jump @13779; //curOff = 8555
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			Jump @13779; //curOff = 8618
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			Jump @13779; //curOff = 8681
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			Jump @13779; //curOff = 8744
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			Jump @13779; //curOff = 8807
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			Jump @13779; //curOff = 8870
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			Jump @13779; //curOff = 8933
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			Jump @13779; //curOff = 8996
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			Jump @13779; //curOff = 9059
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			Jump @13779; //curOff = 9122
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			Jump @13779; //curOff = 9185
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			Jump @13779; //curOff = 9248
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			Jump @13779; //curOff = 9370
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			Jump @13779; //curOff = 9461
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			Jump @13779; //curOff = 9600
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			Jump @13779; //curOff = 9735
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			Jump @13779; //curOff = 9874
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			Jump @13779; //curOff = 9945
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			Jump @13779; //curOff = 10003
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			Jump @13779; //curOff = 10066
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			Jump @13779; //curOff = 10147
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			Jump @13779; //curOff = 10210
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			Jump @13779; //curOff = 10286
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			Jump @13779; //curOff = 10362
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			Jump @13779; //curOff = 10438
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			Jump @13779; //curOff = 10501
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			Jump @13779; //curOff = 10564
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			Jump @13779; //curOff = 10627
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			Jump @13779; //curOff = 10690
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			Jump @13779; //curOff = 10753
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			Jump @13779; //curOff = 10816
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			Jump @13779; //curOff = 10892
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			Jump @13779; //curOff = 10955
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			Jump @13779; //curOff = 11013
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			Jump @13779; //curOff = 11071
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			Jump @13779; //curOff = 11129
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			Jump @13779; //curOff = 11187
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			Jump @13779; //curOff = 11245
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			Jump @13779; //curOff = 11303
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			Jump @13779; //curOff = 11366
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			Jump @13779; //curOff = 11429
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			Jump @13779; //curOff = 11492
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			Jump @13779; //curOff = 11555
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			Jump @13779; //curOff = 11798
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			Jump @13779; //curOff = 11943
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			Jump @13779; //curOff = 12088
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			Jump @13779; //curOff = 12201
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			Jump @13779; //curOff = 12314
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			Jump @13779; //curOff = 12427
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			Jump @13779; //curOff = 12540
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			Jump @13779; //curOff = 12611
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			Jump @13779; //curOff = 12682
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			Jump @13779; //curOff = 12735
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			Jump @13779; //curOff = 12806
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			Jump @13779; //curOff = 12859
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			Jump @13779; //curOff = 12912
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			Jump @13779; //curOff = 12970
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			Jump @13779; //curOff = 13028
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			Jump @13779; //curOff = 13123
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			Jump @13779; //curOff = 13218
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			Jump @13779; //curOff = 13313
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			Jump @13779; //curOff = 13379
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			Jump @13779; //curOff = 13432
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			Jump @13779; //curOff = 13485
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			Jump @13779; //curOff = 13551
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			Jump @13779; //curOff = 13604
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			Jump @13779; //curOff = 13657
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			Jump @13779; //curOff = 13723
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			switch (iParam1)
			{
				case 156:
					uParam0->f_3 = 2;
					StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
					StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
					StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
					*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
					break;
				case 157:
					uParam0->f_3 = 2;
					StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
					StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
					StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
					*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
					break;
				case 158:
					uParam0->f_3 = 2;
					StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
					StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
					StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
					*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
					break;
				case 163:
					uParam0->f_3 = 2;
					StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
					StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
					StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
					*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
					break;
				case 159:
					uParam0->f_3 = 2;
					StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
					StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
					StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
					*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
					break;
				case 161:
					uParam0->f_3 = 2;
					StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
					StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
					StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
					*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
					break;
				case 162:
					uParam0->f_3 = 2;
					StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
					StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
					StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
					*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
					break;
				case 160:
					uParam0->f_3 = 2;
					StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
					StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
					StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
					*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
					break;
				case 96:
					uParam0->f_3 = 1;
					StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
					StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
					*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
					break;
			}
			return 1;
		}

int func_62(int iParam0)
{
	if (iParam0 != 198)
	{
		if (Global_76622)
		{
			return Global_2439138.f_75.f_227[iParam0];
		}
		else
		{
			return Global_111638.f_7256.f_227[iParam0];
		}
	}
	return 0;
}

bool func_63()
{
	if (Global_41431 == 15)
	{
		return false;
	}
	return true;
}

bool func_64(int iParam0)
{
	return Global_41431 == iParam0;
}

float func_65(bool bParam0, vector3 vParam1, int iParam4)
{
	vector3 vVar0;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	return UNK_0x0EB28750412C3A5A(vVar0, vParam1, iParam4);
}

bool func_66(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return false;
	}
	return !UNK_0x437347B10A200C4B(bParam0, 0);
}

void func_67()
{
	if (func_64(14))
	{
		func_73(&(Local_99[0 /*24*/]), 0, "Bigwheel", func_74(158), 0, "", 0, 6.2f);
		func_68(&(Local_74[0 /*24*/]), 0, "Rollercoaster", -1651.641f, -1134.325f, 21.90398f, -1640.984f, -1121.59f, 16.50313f, 6.75f, 0, "", 0);
	}
	else
	{
		func_73(&(Local_99[0 /*24*/]), 0, "Bigwheel", func_74(158), 8, "", 0, 6.2f);
		func_68(&(Local_74[0 /*24*/]), 0, "Rollercoaster", -1651.641f, -1134.325f, 21.90398f, -1640.984f, -1121.59f, 16.50313f, 6.75f, 15, "", 0);
	}
	Local_40 = "LEV_RIDEHLP";
	Local_40.f_1 = "LEV_BROKEN";
	Local_40.f_2 = "LEV_NOMONEY";
	Local_40.f_4 = "LEV_WANTED";
	Local_40.f_3 = 0;
	Local_40.f_16 = 1;
	Local_57 = "BIGW_RIDEHLP";
	Local_57.f_1 = "BIGW_BROKEN";
	Local_57.f_2 = "BIGW_NOMONEY";
	Local_57.f_4 = "BIGW_WANTED";
	Local_57.f_3 = 0;
	Local_40.f_16 = 1;
}

void func_68(var uParam0, int iParam1, char* sParam2, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, char* sParam11, int iParam12)
{
	uParam0->f_5 = sParam2;
	uParam0->f_4 = sParam11;
	uParam0->f_9 = iParam10;
	uParam0->f_7 = iParam12;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 1;
	uParam0->f_10 = 0f;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	func_72(&(uParam0->f_16), vParam3, vParam6, fParam9);
	uParam0->f_1 = { func_69(uParam0->f_16) };
}

Vector3 func_69(vector3[] vParam0, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return func_70(vParam0[0 /*3*/], vParam0[1 /*3*/], 0.5f, 1);
}

Vector3 func_70(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		fParam6 = func_71(fParam6, 0f, 1f);
	}
	return vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3 - vParam0;
}

float func_71(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_72(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	*(uParam0[0 /*3*/]) = { vParam1 };
	*(uParam0[1 /*3*/]) = { vParam4 };
	uParam0->f_7 = fParam7;
}

void func_73(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, char* sParam7, int iParam8, float fParam9)
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { vParam3 };
	uParam0->f_4 = sParam7;
	uParam0->f_9 = iParam6;
	uParam0->f_7 = iParam8;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 0;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	if (iParam1 == 0)
	{
		uParam0->f_10 = 2.75f;
	}
	else
	{
		uParam0->f_10 = (2.75f * 2f);
	}
	if (fParam9 > 0f)
	{
		uParam0->f_10 = fParam9;
	}
}

Vector3 func_74(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return Global_31146[iVar0 /*23*/][0 /*3*/];
}

void func_75()
{
	func_76(&(Local_99[0 /*24*/]));
	func_76(&(Local_74[0 /*24*/]));
	func_22(&Local_40);
	func_22(&Local_57);
	UNK_0x10FAF14A60A0DBE1();
}

void func_76(var uParam0)
{
	*uParam0 = 0;
}

bool func_77(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

