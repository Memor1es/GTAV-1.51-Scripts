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
	int iLocal_18[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = false;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	bool bLocal_44 = false;
#endregion

void __EntryFunction__()
{
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
	fLocal_40 = 0.82f;
	fLocal_41 = 0.42f;
	fLocal_42 = 0f;
	fLocal_43 = 0f;
	UNK_0xB57F88F0123F4C38();
	func_28();
	bLocal_39 = true;
	func_27();
	func_26();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_19486.f_1 != 9)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					func_21();
					if (bLocal_39)
					{
						func_18();
					}
					else
					{
						func_12();
					}
					break;
				case 8:
					func_21();
					func_12();
					if (func_11(2, Global_19454, 0))
					{
						func_10();
						Global_19464 = 1;
						func_9(Global_19467, "DISPLAY_VIEW", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						func_26();
						if (Global_19486.f_1 > 3)
						{
							Global_19486.f_1 = 7;
						}
					}
					break;
				default:
					break;
			}
			if (func_8())
			{
				func_2();
			}
		}
		else
		{
			Global_19488 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

bool func_1()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return true;
	}
	return false;
}

void func_2()
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	UNK_0x10FAF14A60A0DBE1();
}

void func_3()
{
	if (Global_8161[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	UNK_0x0674E58A79778E99(&Global_7356, 25);
	UNK_0x5D96D8530B3D0904(&Global_7357, 11);
}

bool func_4(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_5(iParam0))
	{
		return false;
	}
	return true;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, Global_41431);
}

int func_6(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
			return 1;
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		case 5:
			break;
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}
	return 0;
}

void func_7()
{
	func_28();
	Global_8161[Global_19486 /*2811*/][0 /*281*/].f_124[2] = 1;
}

bool func_8()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return true;
	}
	return false;
}

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, sParam1);
	UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	UNK_0x7E60D21B163E9D56();
}

void func_10()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Back", &Global_19475, 1);
	}
}

bool func_11(int iParam0, int iParam1, int iParam2)
{
	if (UNK_0xBFC0798A6E3417F9(iParam0, iParam1) || (iParam2 == 1 && UNK_0xD245978525608929(iParam0, iParam1)))
	{
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			if (UNK_0xDAC65F45B0B2D176() == 0 || (UNK_0x4FD68D5821EE3E19() && UNK_0x91E3F625EF57450D(2)))
			{
				return false;
			}
		}
		if (UNK_0x798A3F1296751F46() || UNK_0xE57E602827E07C9D())
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_12()
{
	if (Global_19464 == 0)
	{
		if (func_11(2, Global_19455, 0))
		{
			func_15();
			Global_19464 = 1;
			func_28();
			UNK_0x7E60C62A7CE58FC8(Global_19467, "GET_CURRENT_SELECTION");
			iLocal_36 = UNK_0x7A8BB56B212464AC();
			while (!UNK_0xC95D7AEEDEF4946B(iLocal_36))
			{
				SYSTEM::WAIT(0);
			}
			Global_8161[Global_19486 /*2811*/][iLocal_38 /*281*/].f_259 = iLocal_18[UNK_0xA52833FE33F41C53(iLocal_36)];
			func_13(Global_19467, "SET_HEADER", &(Global_8161[Global_19486 /*2811*/][iLocal_38 /*281*/].f_7[Global_8161[Global_19486 /*2811*/][iLocal_38 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
			{
				func_9(Global_19467, "SET_SLEEP_MODE", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			else
			{
				func_9(Global_19467, "SET_SLEEP_MODE", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_14(bParam2);
	if (!UNK_0xEA6BC48857E0AC4C(bParam3))
	{
		func_14(bParam3);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam4))
	{
		func_14(bParam4);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam5))
	{
		func_14(bParam5);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam6))
	{
		func_14(bParam6);
	}
	UNK_0x7E60D21B163E9D56();
}

void func_14(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_15()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Accept", &Global_19475, 1);
		func_16();
	}
}

void func_16()
{
	if (func_17())
	{
		UNK_0x5A963FB0365294C8(5);
	}
}

bool func_17()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_76622)
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = UNK_0x5A0033B025D45F1B();
	iVar1 = UNK_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4270043 || iVar2)
	{
		return true;
	}
	return true;
}

void func_18()
{
	Global_19464 = 1;
	iLocal_38 = 0;
	bLocal_39 = false;
	func_19();
}

void func_19()
{
	int iVar0[15];
	int iVar16;
	int iVar17;
	int iVar18;

	func_9(Global_19467, "DISPLAY_VIEW", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_28();
	iLocal_34 = 0;
	iVar16 = 0;
	while (iVar16 < 9)
	{
		iVar17 = 0;
		iVar18 = 9;
		Global_8161[Global_19486 /*2811*/][iLocal_38 /*281*/].f_84[iVar18] = 5000;
		while (iVar17 < 9)
		{
			if (Global_8161[Global_19486 /*2811*/][iLocal_38 /*281*/].f_124[iVar17] == 1)
			{
				if (iVar0[iVar17] == 0)
				{
					if (Global_8161[Global_19486 /*2811*/][iLocal_38 /*281*/].f_84[iVar17] < Global_8161[Global_19486 /*2811*/][iLocal_38 /*281*/].f_84[iVar18])
					{
						iVar18 = iVar17;
						func_20(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar16), SYSTEM::TO_FLOAT(Global_8161[Global_19486 /*2811*/][iLocal_38 /*281*/].f_104[iVar18]), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_38 /*281*/].f_7[iVar18 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar17++;
		}
		iLocal_18[iVar16] = iVar18;
		iVar0[iVar18] = 1;
		if (Global_8161[Global_19486 /*2811*/][iLocal_38 /*281*/].f_124[iVar16] == 1)
		{
			iLocal_34++;
		}
		iVar16++;
	}
	func_9(Global_19467, "DISPLAY_VIEW", 13f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_13(Global_19467, "SET_HEADER", &(Global_8161[Global_19486 /*2811*/][iLocal_38 /*281*/].f_7[Global_8161[Global_19486 /*2811*/][iLocal_38 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_19474)
	{
		func_20(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	UNK_0x0674E58A79778E99(&Global_7356, 17);
}

void func_20(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, sParam1);
	UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam7))
	{
		func_14(bParam7);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		func_14(bParam8);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam9))
	{
		func_14(bParam9);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam10))
	{
		func_14(bParam10);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam11))
	{
		func_14(bParam11);
	}
	UNK_0x7E60D21B163E9D56();
}

void func_21()
{
	if (bLocal_44)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			bLocal_44 = false;
		}
	}
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (func_11(2, 181, 0))
		{
			if (iLocal_35 > 0)
			{
				iLocal_35 = (iLocal_35 - 1);
			}
			func_24();
		}
		if (func_11(2, 180, 0))
		{
			iLocal_35++;
			if (iLocal_35 == iLocal_34)
			{
				iLocal_35 = 0;
			}
			func_22();
		}
	}
	if (bLocal_44 == 0)
	{
		if (func_11(2, Global_19462, 0))
		{
			if (iLocal_35 > 0)
			{
				iLocal_35 = (iLocal_35 - 1);
			}
			func_24();
			bLocal_44 = true;
			SYSTEM::SETTIMERA(0);
		}
		if (func_11(2, Global_19463, 0))
		{
			iLocal_35++;
			if (iLocal_35 == iLocal_34)
			{
				iLocal_35 = 0;
			}
			func_22();
			bLocal_44 = true;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_22()
{
	func_9(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_23();
}

void func_23()
{
	if (func_17())
	{
		if (Global_19669 == 0)
		{
			UNK_0x5A963FB0365294C8(2);
		}
		else
		{
			UNK_0x5A963FB0365294C8(1);
		}
	}
}

void func_24()
{
	func_9(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	UNK_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
	func_25();
}

void func_25()
{
	if (func_17())
	{
		if (Global_19669 == 0)
		{
			UNK_0x5A963FB0365294C8(1);
		}
		else
		{
			UNK_0x5A963FB0365294C8(2);
		}
	}
}

void func_26()
{
	int iVar0[15];
	int iVar16;
	int iVar17;
	int iVar18;

	iLocal_34 = 0;
	iVar16 = 0;
	func_28();
	while (iVar16 < 9)
	{
		iVar17 = 0;
		iVar18 = 9;
		Global_8161[Global_19486 /*2811*/][iVar18 /*281*/] = 5000;
		while (iVar17 < 9)
		{
			if (Global_8161[Global_19486 /*2811*/][iVar17 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar17] == 0)
				{
					if (iVar17 == 0)
					{
						if (Global_8161[Global_19486 /*2811*/][iVar17 /*281*/] < Global_8161[Global_19486 /*2811*/][iVar18 /*281*/])
						{
							iVar18 = iVar17;
							func_20(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar16), -1f, -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iVar18 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar17++;
		}
		iLocal_18[iVar16] = iVar18;
		iVar0[iVar18] = 1;
		if (Global_8161[Global_19486 /*2811*/][iVar16 /*281*/].f_280 == 1)
		{
			iLocal_34++;
		}
		iVar16++;
	}
	func_9(Global_19467, "DISPLAY_VIEW", 13f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_13(Global_19467, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_19474)
	{
		func_20(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	UNK_0x0674E58A79778E99(&Global_7356, 17);
}

void func_27()
{
	if (Global_41431 != 15)
	{
		func_28();
		Global_8161[Global_19486 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

void func_28()
{
	if (func_35(14))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_29();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

var func_29()
{
	func_30();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_30()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_33(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_32(UNK_0x16F2683693E537C9());
			if (func_31(iVar0) && (!func_35(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_31(Global_111638.f_2358.f_539.f_4321))
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

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return func_34(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_34(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_35(int iParam0)
{
	return Global_41431 == iParam0;
}

