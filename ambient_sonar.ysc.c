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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	struct<8> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	struct<11> Local_55[30];
	bool bLocal_386 = false;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	bool bLocal_389 = false;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	var uLocal_394 = 0;
	int iLocal_395[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_391 = -1;
	iLocal_392 = 5;
	if (UNK_0x2EBF608FFE6CA406(210))
	{
		func_127();
	}
	if (UNK_0x8A22C4C08282BF26(joaat("AMBIENT_SONAR")) > 1)
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	func_126(13);
	func_125(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_124(UNK_0x16F2683693E537C9());
		switch (iLocal_388)
		{
			case 0:
				func_118();
				break;
			case 1:
				func_110();
				break;
			case 2:
				func_1();
				break;
			case 3:
				func_127();
				break;
		}
	}
}

void func_1()
{
	bLocal_389 = false;
	if (func_109(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if (func_76(&Local_42, &Local_55))
			{
				func_30();
			}
			else if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
			{
				bLocal_386 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
				func_125(1);
				func_13(0);
				if (func_109(UNK_0x16F2683693E537C9()))
				{
					if (func_11(&Local_42, &Local_55, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), &iLocal_391))
					{
						func_8();
					}
				}
				UNK_0x34D79252800B23FF(0);
				func_7();
				func_6(1);
			}
			else if (func_109(bLocal_386))
			{
				if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_386, true)) > 62500f)
				{
					func_5();
				}
				else if (!UNK_0xE4EDC4B0E92C078B(iLocal_387))
				{
					iLocal_387 = func_2(bLocal_386, 0, 0);
					UNK_0xBC8E0A7390523199(iLocal_387, 308);
				}
			}
			else
			{
				func_7();
			}
		}
	}
}

int func_2(bool bParam0, bool bParam1, bool bParam2)
{
	return func_3(bParam0, !bParam1, bParam2);
}

int func_3(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_4(UNK_0x8CD06866876216F2(), 1f, 1f));
		if (!bParam2)
		{
			UNK_0x321E019A46034F39(iVar0, bParam1);
		}
		else
		{
			UNK_0x61755AC17D8F538E(iVar0, 2);
		}
	}
	else if (UNK_0xEC560E589DF8370E(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_4(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_4(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_4(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_5()
{
	func_7();
	if (UNK_0xC844350D5D58C99A(bLocal_386))
	{
		UNK_0x046C362CF15F1935(&bLocal_386);
	}
}

void func_6(int iParam0)
{
	iLocal_388 = iParam0;
}

void func_7()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_387))
	{
		UNK_0x142CC44DB769B57E(&iLocal_387);
	}
}

void func_8()
{
	func_9(func_10(iLocal_391), 1, 1);
	iLocal_390 = 1;
}

void func_9(vector3 vParam0, bool bParam3, bool bParam4)
{
	Global_21911 = { vParam0 };
	UNK_0x0674E58A79778E99(&Global_7357, 30);
	if (bParam3)
	{
		UNK_0x5D96D8530B3D0904(&Global_7357, 29);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7357, 29);
	}
	if (bParam4)
	{
		UNK_0x5D96D8530B3D0904(&Global_7358, true);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7358, true);
	}
}

Vector3 func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1435.61f, 5781.12f, -29.87f;
		case 1:
			return -1956.54f, -1125.07f, -37.21f;
		case 2:
			return 2752.88f, -1212.78f, -22.41f;
		case 3:
			return 3188.04f, -1668.19f, -146.88f;
		case 4:
			return 2555.04f, -2372.47f, -112.01f;
		case 5:
			return 2945.9f, 6537.41f, -27.36f;
		case 6:
			return -1266.69f, 6261.75f, -34.17f;
		case 7:
			return 3034.72f, 6550.42f, -35.2f;
		case 8:
			return 1694.53f, 6991.69f, -137.62f;
		case 9:
			return 1233.43f, 7081.15f, -141.72f;
		case 10:
			return -3413.73f, 830.23f, -12.95f;
		case 11:
			return 1422.5f, 6854.67f, -38.2f;
		case 12:
			return -3345.1f, 3547.8f, -59.1f;
		case 13:
			return -3437.93f, 3069.57f, -54.85f;
		case 14:
			return -2909.28f, 4204.32f, -111.62f;
		case 15:
			return -3179.12f, 2151.28f, -31.86f;
		case 16:
			return 4146.09f, 3825.86f, -40.96f;
		case 17:
			return 2716.61f, 6956.91f, -157.17f;
		case 18:
			return 2487.5f, 7001.69f, -143.56f;
		case 19:
			return -3043.23f, -212.16f, -23.48f;
		case 20:
			return -2871.1f, 4268.19f, -152.47f;
		case 21:
			return -777.21f, 6726.71f, -30.89f;
		case 22:
			return -3008.33f, 2877.73f, -27.76f;
		case 23:
			return -1843.12f, -1260.67f, -22.17f;
		case 24:
			return -2591.62f, -470.34f, -30.4f;
		case 25:
			return 3824.99f, 3729.17f, -16.17f;
		case 26:
			return 3885.44f, 3797.19f, -24.26f;
		case 27:
			return 2153.9f, -2826.37f, -50.76f;
		case 28:
			return 1873.5f, -3012.6f, -47f;
		case 29:
			return -2325.06f, -1046.7f, -70.67f;
	}
	return 0f, 0f, 0f;
}

bool func_11(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	bool bVar0;
	float fVar1;
	float fVar2;

	bVar0 = false;
	fVar1 = 0f;
	fVar2 = -1f;
	bVar0 = false;
	while (bVar0 < *iParam1)
	{
		if (!func_12(&(uParam0->f_1), bVar0))
		{
			fVar1 = SYSTEM::VDIST2(vParam2, (iParam1[bVar0 /*11*/])->f_3);
			if (fVar2 == -1f || fVar1 < fVar2)
			{
				*iParam5 = bVar0;
				fVar2 = fVar1;
			}
		}
		bVar0++;
	}
	return *iParam5 != -1;
}

bool func_12(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 64)
	{
		return false;
	}
	if (bParam1 <= 31)
	{
		return UNK_0xEAE0D21A50E6C7F4(*uParam0, bParam1);
	}
	return UNK_0xEAE0D21A50E6C7F4(uParam0->f_1, (bParam1 - 32));
}

int func_13(int iParam0)
{
	if (func_14(17, 0, 1, 0))
	{
		if (iParam0 == 1)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 22);
		}
		else
		{
			UNK_0x0674E58A79778E99(&Global_7357, 22);
		}
		return 1;
	}
	return 0;
}

bool func_14(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_76622)
	{
		if ((iParam0 != 17 && iParam0 != 3) && iParam0 != 23)
		{
			return false;
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 14))
		{
			if (iParam0 == 17)
			{
				UNK_0x5D96D8530B3D0904(&Global_4269765, 14);
				UNK_0x5D96D8530B3D0904(&Global_4269765, 16);
			}
			if (iParam0 == 3)
			{
				UNK_0x5D96D8530B3D0904(&Global_4269765, 14);
				UNK_0x5D96D8530B3D0904(&Global_4269765, 15);
			}
			if (iParam0 == 23)
			{
				UNK_0x5D96D8530B3D0904(&Global_4269765, 14);
				UNK_0x5D96D8530B3D0904(&Global_4269765, 27);
			}
		}
		if (Global_7363[iParam0 /*15*/].f_9 == 0)
		{
			func_27();
		}
		if (UNK_0x8A22C4C08282BF26(Global_7363[iParam0 /*15*/].f_9) > 0)
		{
			UNK_0x0674E58A79778E99(&Global_4269765, 14);
			UNK_0x0674E58A79778E99(&Global_4269765, 16);
			UNK_0x0674E58A79778E99(&Global_4269765, 15);
			UNK_0x0674E58A79778E99(&Global_4269765, 27);
			return true;
		}
		else
		{
			return false;
		}
	}
	func_20();
	if (Global_19486.f_1 == 9)
	{
		return false;
	}
	if (iParam2 == 0)
	{
		if (func_19(0) == 1)
		{
			return false;
		}
	}
	if (Global_19452 == 1)
	{
		return false;
	}
	if (Global_19486.f_1 == 7)
	{
		return false;
	}
	if (iParam1 == 1)
	{
	}
	if (!UNK_0x1727A44C562FBED2(Global_19483))
	{
		if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) == 0)
		{
			if (Global_19486.f_1 < 4)
			{
				func_18("cellphone_flashhand");
				if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) == 0)
				{
					Global_19483 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				UNK_0x5E8C29AE121DF1C7("cellphone_flashhand");
			}
		}
	}
	while (!Global_19468)
	{
		SYSTEM::WAIT(0);
	}
	func_27();
	func_15();
	if (UNK_0x8A22C4C08282BF26(Global_7363[iParam0 /*15*/].f_9) == 0)
	{
		Global_7962 = 0;
		Global_19486.f_1 = 7;
		func_18(&(Global_7363[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (UNK_0x8A22C4C08282BF26(Global_7363[iParam0 /*15*/].f_9) == 0)
			{
				Global_19484 = SYSTEM::START_NEW_SCRIPT(&(Global_7363[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (UNK_0x8A22C4C08282BF26(Global_7363[iParam0 /*15*/].f_9) == 0)
		{
			Global_19484 = SYSTEM::START_NEW_SCRIPT(&(Global_7363[iParam0 /*15*/].f_5), 2552);
		}
		UNK_0x5E8C29AE121DF1C7(&(Global_7363[iParam0 /*15*/].f_5));
		return true;
	}
	return true;
}

void func_15()
{
	if (Global_76622 == 0)
	{
		Global_7363[14 /*15*/].f_4 = -99;
		Global_7363[4 /*15*/].f_4 = -99;
		if (Global_2460675)
		{
			if (func_17(14))
			{
				func_16(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_16(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_16(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_16(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_7363[iParam0 /*15*/]), sParam1, 16);
	Global_7363[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_7363[iParam0 /*15*/].f_5), bParam3, 16);
	Global_7363[iParam0 /*15*/].f_9 = UNK_0x12AB0310C2281427(bParam3);
	Global_7363[iParam0 /*15*/].f_10 = iParam4;
	Global_7363[iParam0 /*15*/].f_11 = iParam5;
	Global_7363[iParam0 /*15*/].f_12 = iParam6;
	Global_7363[iParam0 /*15*/].f_13 = iParam7;
	Global_7363[iParam0 /*15*/].f_14 = iParam8;
	if (Global_7363[iParam0 /*15*/].f_12 == 0)
	{
		Global_7363[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_7363[iParam0 /*15*/].f_13 == 0)
	{
		Global_7363[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_7363[iParam0 /*15*/].f_14 == 0)
	{
		Global_7363[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_17(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_18(bool bParam0)
{
	UNK_0x92DCE5C81176D2B4(bParam0);
	while (!UNK_0x1FBF08B001C4788A(bParam0))
	{
		SYSTEM::WAIT(0);
	}
}

bool func_19(int iParam0)
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

void func_20()
{
	if (func_17(14))
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
		Global_19486 = func_21();
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

var func_21()
{
	func_22();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_22()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_25(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_24(UNK_0x16F2683693E537C9());
			if (func_23(iVar0) && (!func_17(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_23(Global_111638.f_2358.f_539.f_4321))
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

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return func_26(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_26(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_27()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_7363[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_76622 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_29(iVar2, Global_19486) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_16(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_41431 == 15 && func_28(0) == 0) && Global_7361 == 0)
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19667 = 0;
			Global_7362 = 255;
		}
		else
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19667 = 1;
			Global_7362 = 42;
		}
		if (iVar1 == 1)
		{
			func_16(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_16(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_111638.f_14046.f_89 == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_111638.f_14046.f_88 == 1)
		{
			func_16(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_16(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_16(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_16(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_16(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (UNK_0xEAE0D21A50E6C7F4(Global_4269765, 4) == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_16(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_16(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!UNK_0xEAE0D21A50E6C7F4(Global_4269765, 4) == 1)
		{
			if (Global_1573926)
			{
				func_16(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4269765, 20) == 1)
			{
				func_16(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4269765, 22) == 1)
			{
				func_16(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4269765, 26) == 1)
			{
				func_16(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((UNK_0xEAE0D21A50E6C7F4(Global_4269765, 4) == 0 && Global_1573926 == 0) && UNK_0xEAE0D21A50E6C7F4(Global_4269765, 20) == 0) && UNK_0xEAE0D21A50E6C7F4(Global_4269765, 22) == 0) && UNK_0xEAE0D21A50E6C7F4(Global_4269765, 26) == 0)
		{
			func_16(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

bool func_28(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

int func_29(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_19[iParam1];
}

void func_30()
{
	func_53(3, 250000);
	func_46(299, 0, 0);
	func_33(20, 1);
	func_31();
	func_6(3);
}

void func_31()
{
	int iVar0;

	iVar0 = func_32(65);
	Global_2414418[iVar0 /*83*/] = 65;
	StringCopy(&(Global_2414418[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_32(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414418[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414418[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_33(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_34(iParam0, iParam1);
}

int func_34(int iParam0, int iParam1)
{
	if (func_17(14) && !func_45(iParam0))
	{
		return 0;
	}
	if (UNK_0x5E109EC687D2605A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_44(&Global_4270065))
	{
		if (func_42(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_35(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!UNK_0x5A66449FC9BDF808(iParam0))
		{
			return 0;
		}
		if (UNK_0x5E109EC687D2605A(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

bool func_35(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_17(14) && !func_45(iParam1))
	{
		return false;
	}
	if (func_42(uParam0, iParam1))
	{
		return false;
	}
	if (func_41(uParam0) < 0f)
	{
		func_40(uParam0, 0);
	}
	func_38(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_36(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_45(iParam1))
	{
		return 0;
	}
	if (func_42(uParam0, iParam1))
	{
		return 0;
	}
	if (func_41(uParam0) < 0f)
	{
		func_40(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_37(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_37(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_38(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_39(uParam0, iVar0);
		iVar0++;
	}
	func_40(uParam0, (Global_4270064 - 0.5f));
}

void func_39(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_40(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_41(var uParam0)
{
	return uParam0->f_80;
}

bool func_42(var uParam0, int iParam1)
{
	return func_43(uParam0, iParam1) != -1;
}

int func_43(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_44(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_45(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return true;
		default:
			break;
	}
	return false;
}

void func_46(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_51((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111638.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111638.f_10189[iParam0 /*12*/].f_6 == 11 || Global_111638.f_10189[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111638.f_10189[iParam0 /*12*/].f_5 = 1;
		Global_111638.f_10189[iParam0 /*12*/].f_10 = iParam1;
		Global_111638.f_10189[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			UNK_0xE7B2B6A56C007908(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			UNK_0xE7B2B6A56C007908(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			UNK_0xE7B2B6A56C007908(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_47();
	}
}

void func_47()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	bool bVar9;

	iVar0 = 0;
	Global_111374 = 0;
	Global_111375 = 0;
	Global_111376 = 0;
	Global_111377 = 0;
	Global_111378 = 0;
	Global_111379 = 0;
	Global_111380 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111638.f_10189.f_3853;
	Global_111638.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111638.f_10189[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111638.f_10189[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111374++;
					fVar1 = (fVar1 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 3:
					Global_111375++;
					fVar2 = (fVar2 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 5:
					Global_111376++;
					fVar3 = (fVar3 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 7:
					Global_111377++;
					fVar4 = (fVar4 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 9:
					Global_111378++;
					fVar5 = (fVar5 + (Global_111638.f_10189[iVar0 /*12*/].f_4 * 4f));
					break;
				case 11:
					Global_111379++;
					fVar6 = (fVar6 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				case 13:
					Global_111380++;
					fVar7 = (fVar7 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
	if (Global_111357 > 0)
	{
		if (Global_111374 == Global_111357)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111358 > 0)
	{
		if (Global_111375 == Global_111358)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111359 > 0)
	{
		if (Global_111376 == Global_111359)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111360 > 0)
	{
		if (Global_111377 == Global_111360)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111361 > 0)
	{
		if (((Global_111378 == Global_111361 || (Global_111361 * 10 / Global_111378) < 41) || Global_111378 > Global_111364) || Global_111378 == Global_111364)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					UNK_0xE7B2B6A56C007908(joaat("NUM_RNDEVENTS_COMPLETED"), Global_111361, 0);
					UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111362 > 0)
	{
		if (Global_111379 == Global_111362)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111363 > 0)
	{
		if (Global_111380 == Global_111363)
		{
			fVar7 = 5f;
		}
	}
	Global_111638.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111378 > Global_111364 || Global_111378 == Global_111364)
	{
		bVar9 = Global_111364;
	}
	else
	{
		bVar9 = Global_111378;
	}
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISSIONS_COMPLETED"), Global_111374, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISSIONS_AVAILABLE"), Global_111357, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MINIGAMES_COMPLETED"), Global_111375, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MINIGAMES_AVAILABLE"), Global_111358, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_ODDJOBS_COMPLETED"), Global_111376, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_ODDJOBS_AVAILABLE"), Global_111359, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_111377, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_111360, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDEVENTS_COMPLETED"), bVar9, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_111364, 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISC_COMPLETED"), (Global_111380 + Global_111379), 1);
	UNK_0xCDC520E5E48E63D9(joaat("NUM_MISC_AVAILABLE"), (Global_111363 + Global_111362), 1);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + bVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	UNK_0x11F69E56D7B5F3C7(joaat("TOTAL_PROGRESS_MADE"), Global_111638.f_10189.f_3853, 1);
	UNK_0xCDC520E5E48E63D9(joaat("PERCENT_STORY_MISSIONS"), Global_111381, 1);
	UNK_0xCDC520E5E48E63D9(joaat("PERCENT_AMBIENT_MISSIONS"), Global_111382, 1);
	UNK_0xCDC520E5E48E63D9(joaat("PERCENT_ODDJOBS"), Global_111383, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111638.f_10189.f_3853))
	{
		func_50(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_49() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_48();
				}
			}
		}
	}
}

int func_48()
{
	if (func_28(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

int func_49()
{
	return Global_30768;
}

int func_50(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (bParam1 <= 0 || bParam1 > 100)
	{
		return 0;
	}
	iVar0 = UNK_0xBD47F720AB99D749(iParam0);
	if (bParam1 > iVar0)
	{
		return UNK_0x12ABC45272B87562(iParam0, bParam1);
	}
	return 0;
}

int func_51(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	if (bParam2 == -1)
	{
		bParam2 = func_52();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, bParam2);
		iVar1 = ((iParam0 - 0) - UNK_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, bParam2);
		iVar1 = ((iParam0 - 192) - UNK_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, false);
		iVar1 = ((iParam0 - 513) - UNK_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, false);
		iVar1 = ((iParam0 - 705) - UNK_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = UNK_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, bParam2);
		iVar1 = ((iParam0 - 3111) - UNK_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = UNK_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, false);
		iVar1 = ((iParam0 - 2919) - UNK_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = UNK_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, bParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - UNK_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = UNK_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, false, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - UNK_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = UNK_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, bParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - UNK_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = UNK_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, bParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - UNK_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = UNK_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, false, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - UNK_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = UNK_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, bParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - UNK_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = UNK_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, bParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - UNK_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = UNK_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, bParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - UNK_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = UNK_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, bParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - UNK_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = UNK_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, bParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - UNK_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = UNK_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, bParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - UNK_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = UNK_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, bParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - UNK_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = UNK_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, bParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - UNK_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = UNK_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, bParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - UNK_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = UNK_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, bParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - UNK_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = UNK_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, bParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - UNK_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = UNK_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, bParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - UNK_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = UNK_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_52()
{
	return Global_1312745;
}

void func_53(int iParam0, int iParam1)
{
	bool bVar0;

	func_55(Global_111638.f_24899[iParam0 /*4*/], func_75(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_111638.f_24899.f_69 = (Global_111638.f_24899.f_69 + iParam1);
			break;
		case 2:
			Global_111638.f_24899.f_70 = (Global_111638.f_24899.f_70 + iParam1);
			break;
		case 0:
			Global_111638.f_24899.f_71 = (Global_111638.f_24899.f_71 + iParam1);
			break;
	}
	UNK_0x6FB46C25CCB7E6D5(func_54(iParam0, 1), &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(func_54(iParam0, 1), bVar0, 1);
}

int func_54(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_TOWI");
				case 1:
					return joaat("PROP_EARNED_TOWI");
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_TAXI");
				case 1:
					return joaat("PROP_EARNED_TAXI");
				case 2:
					return joaat("PROP_MISSIONS_TAXI");
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_TRAF");
				case 1:
					return joaat("PROP_EARNED_TRAF");
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_SOCO");
				case 1:
					return joaat("PROP_EARNED_SOCO");
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CMSH");
				case 1:
					return joaat("PROP_EARNED_CMSH");
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CINV");
				case 1:
					return joaat("PROP_EARNED_CINV");
				case 2:
					return joaat("PROP_MISSIONS_CINV");
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CIND");
				case 1:
					return joaat("PROP_EARNED_CIND");
				case 2:
					return joaat("PROP_MISSIONS_CIND");
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CINM");
				case 1:
					return joaat("PROP_EARNED_CINM");
				case 2:
					return joaat("PROP_MISSIONS_CINM");
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_GOLF");
				case 1:
					return joaat("PROP_EARNED_GOLF");
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CSCR");
				case 1:
					return joaat("PROP_EARNED_CSCR");
				case 2:
					return joaat("PROP_MISSIONS_CSCR");
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_WEED");
				case 1:
					return joaat("PROP_EARNED_WEED");
				case 2:
					return joaat("PROP_MISSIONS_WEED");
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARTE");
				case 1:
					return joaat("PROP_EARNED_BARTE");
				case 2:
					return joaat("PROP_MISSIONS_BARTE");
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARPI");
				case 1:
					return joaat("PROP_EARNED_BARPI");
				case 2:
					return joaat("PROP_MISSIONS_BARPI");
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARHE");
				case 1:
					return joaat("PROP_EARNED_BARHE");
				case 2:
					return joaat("PROP_MISSIONS_BARHE");
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARHO");
				case 1:
					return joaat("PROP_EARNED_BARHO");
				case 2:
					return joaat("PROP_MISSIONS_BARHO");
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_STRIP");
				case 1:
					return joaat("PROP_EARNED_STRIP");
			}
			break;
	}
	return joaat("PROP_BOUGHT_TOWI");
}

void func_55(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (func_74(iParam0) == 3)
	{
		return;
	}
	if (func_74(iParam0) == 4)
	{
		return;
	}
	func_56(func_74(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		bVar0 = false;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				default:
					return;
			}
		}
		UNK_0x6FB46C25CCB7E6D5(iVar1, &bVar0, -1);
		bVar0 = (bVar0 + iParam2);
		UNK_0xCDC520E5E48E63D9(iVar1, bVar0, 1);
	}
}

int func_56(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_73();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_72(99, 1);
					func_71(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_71(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_71(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_70(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_65(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_71(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_71(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_71(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_65(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_71(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_71(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_71(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_71(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_71(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_71(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_71(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_71(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_71(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				default:
					switch (UNK_0x7CF4675EC2B8ED0B())
					{
						case joaat("CLOTHES_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_71(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_71(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_71(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_71(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_71(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_71(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_65(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_71(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_71(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_71(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_71(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_71(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_71(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_64(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_72(95, iParam3);
					break;
				case 1:
					func_72(97, iParam3);
					break;
				case 2:
					func_72(96, iParam3);
					break;
			}
			func_72(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_59(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_59(bVar1);
	}
	iVar5 = (Global_58686[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58686[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58686[iVar2] = 2147483647;
				}
				else
				{
					Global_58686[iVar2] = (Global_58686[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_71(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_71(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_71(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		case 0:
			if (!bParam4)
			{
				if ((Global_58686[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58686[iVar2];
			Global_58686[iVar2] = (Global_58686[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111638.f_20559.f_233[iVar2 /*69*/]++;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_58(iParam0);
	if (Global_41431 == 15)
	{
		func_57(0);
	}
	return 1;
}

void func_57(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0 /*3*/][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0 /*3*/][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0 /*3*/][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0 /*3*/][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0 /*3*/][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0 /*3*/][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0 /*3*/][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0 /*3*/][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0 /*3*/][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0 /*3*/][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0 /*3*/][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0 /*3*/][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0 /*3*/][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0 /*3*/][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0 /*3*/][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0 /*3*/][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0 /*3*/][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0 /*3*/][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_58(int iParam0)
{
	bool bVar0;

	bVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			UNK_0xCDC520E5E48E63D9(joaat("SP0_TOTAL_CASH"), bVar0, 1);
			break;
		case 1:
			UNK_0xCDC520E5E48E63D9(joaat("SP1_TOTAL_CASH"), bVar0, 1);
			break;
		case 2:
			UNK_0xCDC520E5E48E63D9(joaat("SP2_TOTAL_CASH"), bVar0, 1);
			break;
	}
}

void func_59(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_51(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_51(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_51(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_51(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_62(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_62(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_62(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_62(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_62(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_62(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!UNK_0x8CD06866876216F2())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0))
		{
			bVar0 = true;
			UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_61() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_61() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_60(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_60(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		case 1:
			return "COUP_TATTOO";
		case 2:
			return "COUP_WARSTOCK";
		case 3:
			return "COUP_MOSPORT";
		case 4:
			return "COUP_ELITAS";
		case 5:
			return "COUP_MEDSPENS";
		case 6:
			return "COUP_SPRUNK";
		case 7:
			return "COUP_RESPRAY";
		case 8:
			return "COUP_XMAS2017";
		case 9:
			return "COUP_CAR_XMAS2018";
		case 10:
			return "COUP_HELI_XMAS2018";
		case 11:
			return "COUP_CAR2_XMAS2018";
		case 12:
			return "COUP_CAS_ELITAS";
		case 13:
			return "COUP_CAS_DOCKTEASE";
		case 14:
			return "COUP_CAS_MOSPORT";
		case 15:
			return "COUP_CAS_SSASA";
		case 16:
			return "COUP_CAS_WARSTOCK";
		case 17:
			return "COUP_CAS_PANDM";
		default:
			break;
	}
	return "";
}

int func_61()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_62(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_63(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_63(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

void func_64(int iParam0)
{
	func_72(93, iParam0);
	func_72(29, iParam0);
	func_72(30, iParam0);
}

bool func_65(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (bParam0 == 8)
	{
		return func_67(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_67(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_67(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_67(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_66(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_66(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_66(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_66(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_66(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_66(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return false;
		}
		return true;
	}
	if (!UNK_0x8CD06866876216F2())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0);
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_61() /*10930*/].f_6174.f_10, bParam0);
}

int func_66(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_63(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_67(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_52();
	}
	iVar1 = func_69(iParam0, bParam1);
	iVar2 = func_68(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_68(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - UNK_0x04D746E8DA20611E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - UNK_0x04D746E8DA20611E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - UNK_0x04D746E8DA20611E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - UNK_0x04D746E8DA20611E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - UNK_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - UNK_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - UNK_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - UNK_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - UNK_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - UNK_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - UNK_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - UNK_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - UNK_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - UNK_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - UNK_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - UNK_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - UNK_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - UNK_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - UNK_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - UNK_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - UNK_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - UNK_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - UNK_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_69(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_52();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, bParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, bParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, false);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = UNK_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, false);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = UNK_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, false);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = UNK_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, bParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, false, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, bParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, bParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, false, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, bParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, bParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, bParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, bParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, bParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, bParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, bParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, bParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, bParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, bParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, bParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, bParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = UNK_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, bParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_70(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	if (UNK_0x5E109EC687D2605A(27))
	{
		return 0;
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	UNK_0x6FB46C25CCB7E6D5(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (bVar1 > 0 && (iVar2 / 2000000) != (bVar1 / 2000000))
	{
		UNK_0xCDC520E5E48E63D9(joaat("NUM_CASH_SPENT"), bVar1, 1);
		func_50(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_33(27, 1);
	return 1;
}

void func_71(int iParam0, int iParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

void func_72(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (UNK_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/])
	{
		UNK_0x6FB46C25CCB7E6D5(Global_57254[iParam0 /*7*/].f_1, &bVar0, -1);
		bVar0 = (bVar0 + iParam1);
		UNK_0xCDC520E5E48E63D9(Global_57254[iParam0 /*7*/].f_1, bVar0, 1);
	}
}

void func_73()
{
	int iVar0;

	if (UNK_0x61D9362D70D2DD56())
	{
		UNK_0x6FB46C25CCB7E6D5(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		UNK_0x6FB46C25CCB7E6D5(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		UNK_0x6FB46C25CCB7E6D5(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_74(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 99;
		case 1:
			return 100;
		case 2:
			return 101;
		case 3:
			return 102;
		case 4:
			return 103;
		case 5:
			return 104;
		case 6:
			return 105;
		case 7:
			return 106;
		case 8:
			return 107;
		case 9:
			return 108;
		case 10:
			return 109;
		case 11:
			return 110;
		case 12:
			return 111;
		case 13:
			return 112;
		case 14:
			return 113;
		case 15:
			return 25;
	}
	return 0;
}

bool func_76(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;

	UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9());
	vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	iVar0 = 0;
	while (iVar0 < iLocal_392)
	{
		bVar4 = func_12(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar4)
			{
				if (!func_108((iParam1[uParam0->f_10 /*11*/])->f_6, 0f, 0f, 0f, 0))
				{
					func_106(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("PICKUP_CUSTOM_SCRIPT"), 0, 1, 0);
				}
				else
				{
					func_106(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("PICKUP_CUSTOM_SCRIPT"), 0, 0, 2);
				}
			}
		}
		else if (!bVar4)
		{
			if (func_93(uParam0, iParam1, vVar1))
			{
				if (func_11(uParam0, iParam1, vVar1, &iLocal_391))
				{
					func_53(3, 23000);
					func_8();
				}
			}
		}
		func_90(uParam0->f_10, bVar4);
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (!Global_76882)
	{
		func_83(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 3, &iLocal_393, &uLocal_394, "SUBM_TITLE", "SUBM_COLLECT");
	}
	if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
	{
		func_82();
		func_125(0);
		func_77(0);
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return false;
}

void func_77(int iParam0)
{
	if (func_81())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_80())
		{
			func_79(1, 1);
		}
		else
		{
			func_79(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		UNK_0x5D96D8530B3D0904(&Global_7357, 16);
	}
	if (UNK_0x1EE04CEA36EF313B())
	{
		UNK_0x5CEB4DB888A62073(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7356, 30);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7356, 30);
	}
	if (!func_78())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_78()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_79(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_19(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				UNK_0x1CFAC524932A967E(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			UNK_0x39F06A2B18483C68(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			UNK_0x39F06A2B18483C68(Global_19423);
		}
		else
		{
			UNK_0x39F06A2B18483C68(Global_19414);
		}
	}
}

bool func_80()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_81()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_82()
{
	UNK_0x5D96D8530B3D0904(&Global_7357, 30);
}

void func_83(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	func_89(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*iParam5 = UNK_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
				if (UNK_0x83D8570832F172A7(*iParam5))
				{
					iVar0 = UNK_0xD68EA767274B7444();
					if (iParam3 == 6)
					{
						UNK_0x4D7F4CC43D4D0DE3(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						UNK_0x4D7F4CC43D4D0DE3(iVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*iParam4++;
				}
				break;
			case 1:
				UNK_0x7E60C62A7CE58FC8(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				UNK_0x7ACC3006A87F8B39(bParam6);
				UNK_0x779B34565F4D71B1();
				UNK_0x7ACC3006A87F8B39(bParam7);
				UNK_0x6D99DF8263D35CE5(func_85(iParam3));
				UNK_0x779B34565F4D71B1();
				UNK_0x7E60D21B163E9D56();
				*uParam2 = UNK_0x1C0640BA9A7327B3();
				*iParam4++;
				break;
			case 2:
				if ((UNK_0x1C0640BA9A7327B3() - *uParam2) > 7000)
				{
					UNK_0x7E60C62A7CE58FC8(*iParam5, "SHARD_ANIM_OUT");
					UNK_0x3CAEA85DA607305E(true);
					UNK_0x7C19E5E4784BD7CF(0.33f);
					UNK_0x7E60D21B163E9D56();
					*iParam4++;
				}
				else if (!func_84())
				{
					if (UNK_0x83D8570832F172A7(*iParam5))
					{
						func_89(1);
						UNK_0x6567AE843FADBA94(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			case 3:
				if ((UNK_0x1C0640BA9A7327B3() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_84())
				{
					if (UNK_0x83D8570832F172A7(*iParam5))
					{
						func_89(1);
						UNK_0x6567AE843FADBA94(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			case 4:
				if (UNK_0x83D8570832F172A7(*iParam5))
				{
					UNK_0xE17FDF9E3068281B(iParam5);
				}
				func_89(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
		}
	}
}

bool func_84()
{
	if (Global_76882)
	{
		return true;
	}
	else if (Global_61506 && !Global_61512)
	{
		return true;
	}
	return false;
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_88(iParam0))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_108, func_87(func_88(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		UNK_0x6FB46C25CCB7E6D5(joaat("NUM_HIDDEN_PACKAGES_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		UNK_0x6FB46C25CCB7E6D5(joaat("NUM_HIDDEN_PACKAGES_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		UNK_0x6FB46C25CCB7E6D5(joaat("NUM_HIDDEN_PACKAGES_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_88(iParam0))
		{
			iVar2 = (func_86(iParam0) + iVar1);
			if (func_67(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_86(int iParam0)
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_87(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_88(int iParam0)
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_89(int iParam0)
{
	if (Global_76889 != iParam0)
	{
		Global_76889 = iParam0;
	}
}

void func_90(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_92(iParam0) == 0)
	{
		return;
	}
	if (iLocal_395[iParam0] == -1)
	{
		if (!bParam1 && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), Local_55[iParam0 /*11*/].f_3) < (100f * 100f))
			{
				if (func_91(&iVar0))
				{
					UNK_0x15FB4EE83E6F534A(iVar0, Local_55[iParam0 /*11*/].f_3, 8f);
					iLocal_395[iParam0] = iVar0;
				}
			}
		}
	}
	else if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), Local_55[iParam0 /*11*/].f_3) > (105f * 105f))
		{
			if (iLocal_395[iParam0] >= 0 && iLocal_395[iParam0] < 8)
			{
				UNK_0xF8E35187F96B020B(iLocal_395[iParam0]);
				iLocal_395[iParam0] = -1;
			}
		}
	}
}

bool func_91(int iParam0)
{
	*iParam0 = 0;
	*iParam0 = 0;
	while (*iParam0 < 8)
	{
		if (!UNK_0xBF241E938F480998(*iParam0))
		{
			return true;
		}
		*iParam0++;
	}
	*iParam0 = -1;
	return false;
}

int func_92(int iParam0)
{
	if (iParam0 == 23)
	{
		return 0;
	}
	return 1;
}

bool func_93(var uParam0, int iParam1, vector3 vParam2)
{
	bool bVar0;

	bVar0 = uParam0->f_10;
	if ((iParam1[bVar0 /*11*/])->f_10)
	{
		if ((iParam1[bVar0 /*11*/])->f_1 != 0)
		{
			if (UNK_0xEB751B41BC4080D4((iParam1[bVar0 /*11*/])->f_1) || func_105((iParam1[bVar0 /*11*/])->f_1))
			{
				func_95(uParam0, iParam1, bVar0);
				return true;
			}
		}
	}
	if (UNK_0x762119754C50557A((iParam1[bVar0 /*11*/])->f_1))
	{
		if ((SYSTEM::VDIST2(vParam2, UNK_0xE925E52ACABA4CE7((iParam1[bVar0 /*11*/])->f_1)) > (60f * 60f) || func_17(13)) || func_17(14))
		{
			func_94(&((iParam1[bVar0 /*11*/])->f_1));
			(iParam1[bVar0 /*11*/])->f_1 = 0;
			(iParam1[bVar0 /*11*/])->f_10 = 0;
		}
	}
	return false;
}

void func_94(var uParam0)
{
	if (UNK_0x762119754C50557A(*uParam0))
	{
		UNK_0x40B7230FD4C59AA2(*uParam0);
	}
}

void func_95(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = (func_86(*uParam0) + bParam2);
	func_94(&((iParam1[bParam2 /*11*/])->f_1));
	func_104(&((iParam1[bParam2 /*11*/])->f_2));
	(iParam1[bParam2 /*11*/])->f_1 = 0;
	(iParam1[bParam2 /*11*/])->f_10 = 0;
	func_103(&(uParam0->f_1), bParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_102(*uParam0, bParam2, 1);
	}
	UNK_0x5E858A00EAFA5B24(0, 200, 250);
	UNK_0x9505C13496579D28(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_101(&(uParam0->f_1), bParam2);
	}
	else
	{
		func_99(&(uParam0->f_1));
	}
	func_97();
	UNK_0x9EA96DA1925F0CA2(iVar0);
	func_96(1, 0);
	func_48();
	uParam0->f_11 = 1;
}

void func_96(int iParam0, int iParam1)
{
	Global_98783.f_7 = iParam0;
	Global_98783.f_8 = iParam1;
}

void func_97()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	bVar3 = false;
	UNK_0x6FB46C25CCB7E6D5(func_98(0), &bVar0, -1);
	iVar1 = (iVar1 + bVar0);
	if (bVar0 > 0)
	{
		func_50(18, bVar0);
	}
	UNK_0x6FB46C25CCB7E6D5(func_98(1), &bVar0, -1);
	iVar1 = (iVar1 + bVar0);
	if (bVar0 > 0)
	{
		func_50(19, bVar0);
	}
	UNK_0x6FB46C25CCB7E6D5(func_98(3), &bVar0, -1);
	iVar1 = (iVar1 + bVar0);
	if (bVar0 > 0)
	{
		func_50(20, bVar0);
	}
	iVar2 = ((func_88(0) + func_88(1)) + func_88(3));
	if (iVar2 > 0)
	{
		bVar3 = (iVar1 * 100 / iVar2);
	}
	UNK_0xCDC520E5E48E63D9(joaat("PERCENT_HIDDEN_PACKAGES"), bVar3, 1);
}

int func_98(int iParam0)
{
	if (iParam0 == 3)
	{
		return joaat("NUM_HIDDEN_PACKAGES_3");
	}
	if (iParam0 == 1)
	{
		return joaat("NUM_HIDDEN_PACKAGES_0");
	}
	if (iParam0 == 0)
	{
		return joaat("NUM_HIDDEN_PACKAGES_1");
	}
	if (iParam0 == 5)
	{
		return joaat("NUM_HIDDEN_PACKAGES_4");
	}
	return joaat("NUM_HIDDEN_PACKAGES_2");
}

void func_99(var uParam0)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	bVar0 = false;
	while (bVar0 < uParam0->f_3)
	{
		if (func_12(uParam0, bVar0))
		{
			iVar1++;
			func_51((uParam0->f_2 + bVar0), 1, -1, 1);
			if (bLocal_40)
			{
			}
		}
		bVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_100(168, 0);
	}
}

void func_100(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_111638.f_8608[iParam0] = 1;
	Global_111638.f_8608.f_236[iParam0] = (UNK_0x1C0640BA9A7327B3() + iParam1);
}

void func_101(var uParam0, bool bParam1)
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	if (bParam1 >= uParam0->f_3)
	{
	}
	if (func_12(uParam0, bParam1))
	{
		uParam0->f_4++;
		func_51((uParam0->f_2 + bParam1), 1, -1, 1);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_100(168, 0);
	}
}

void func_102(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 < 0 || bParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (bParam1 <= 31)
		{
			if (bParam2)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_122), bParam1);
			}
			else
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_10044.f_122), bParam1);
			}
			return;
		}
		if (bParam2)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_122.f_1), (bParam1 - 32));
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_10044.f_122.f_1), (bParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (bParam1 <= 31)
		{
			if (bParam2)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_125), bParam1);
			}
			else
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_10044.f_125), bParam1);
			}
			return;
		}
		if (bParam2)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_10044.f_125.f_1), (bParam1 - 32));
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_10044.f_125.f_1), (bParam1 - 32));
		}
	}
}

void func_103(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1 < 0 || bParam1 >= 64)
	{
		return;
	}
	if (bParam1 <= 31)
	{
		if (bParam2)
		{
			UNK_0x5D96D8530B3D0904(bParam0, bParam1);
		}
		else
		{
			UNK_0x0674E58A79778E99(bParam0, bParam1);
		}
		return;
	}
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(bParam0->f_1), (bParam1 - 32));
	}
	else
	{
		UNK_0x0674E58A79778E99(&(bParam0->f_1), (bParam1 - 32));
	}
}

void func_104(bool bParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x661342B9651D16E2(*bParam0, false);
		UNK_0x142CC44DB769B57E(bParam0);
	}
}

bool func_105(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (!UNK_0x762119754C50557A(iParam0))
	{
		return false;
	}
	if (func_109(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			iVar1 = UNK_0x134B62B726CEC8E6(bVar0);
			if (iVar1 == joaat("SUBMERSIBLE") || iVar1 == joaat("SUBMERSIBLE2"))
			{
				if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0xE925E52ACABA4CE7(iParam0)) < (5f * 5f) || UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), UNK_0x41486C7390D3EBBF(iParam0)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_106(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	bool bVar0;

	if (!uParam0->f_10)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (!func_17(13) && !func_17(14))
			{
				if (!UNK_0x762119754C50557A(uParam0->f_1))
				{
					if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), uParam0->f_3) <= (50f * 50f))
					{
						UNK_0x523BCC9DC80CD82F(bParam1);
						while (!UNK_0xB87F6CF6E5628C67(bParam1))
						{
							UNK_0x523BCC9DC80CD82F(bParam1);
							SYSTEM::WAIT(0);
						}
						if (bParam3)
						{
							func_107(uParam0->f_3);
						}
						UNK_0x536F1BE96C726C4B(uParam0->f_3, 2.5f, 0, 0, 0, false);
						if (bParam4)
						{
							UNK_0x5D96D8530B3D0904(&bVar0, true);
							uParam0->f_1 = UNK_0x2D7B5CDDF12654D2(joaat("PICKUP_CUSTOM_SCRIPT"), uParam0->f_3, uParam0->f_6, bVar0, -1, iParam5, 1, bParam1);
						}
						else
						{
							UNK_0x5D96D8530B3D0904(&bVar0, 3);
							UNK_0x5D96D8530B3D0904(&bVar0, 4);
							UNK_0x5D96D8530B3D0904(&bVar0, 8);
							UNK_0x5D96D8530B3D0904(&bVar0, true);
							uParam0->f_1 = UNK_0xA6FF0828D17CF374(iParam2, uParam0->f_3, bVar0, -1, 1, bParam1);
						}
						UNK_0x71199B01895C6202(bParam1);
					}
				}
			}
			if (UNK_0x762119754C50557A(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_107(vector3 vParam0)
{
	int iVar0;

	iVar0 = UNK_0xFBD08BECC9B87937(vParam0);
	if (UNK_0x31609A585163CBAC(iVar0))
	{
		UNK_0x0007C2367F4F23F3(iVar0);
		while (!UNK_0xBD307E66C0669BFC(iVar0))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::WAIT(0);
		UNK_0x25BB71BA267FE042(iVar0);
	}
}

bool func_108(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_109(bool bParam0)
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

void func_110()
{
	if (func_109(UNK_0x16F2683693E537C9()))
	{
		if (!UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
		{
			func_125(0);
			func_77(0);
			UNK_0x34D79252800B23FF(5);
			func_6(2);
		}
		else
		{
			if (!func_117(15))
			{
				func_114("SUBM_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
				func_113(15);
			}
			if (!func_112())
			{
				func_125(1);
				if (!bLocal_389 && !Local_42.f_1.f_4 >= Local_42.f_1.f_3)
				{
					func_114("SUBM_TRKHELP", 1, 0, -1, 10000, 7, 0, 0, 0);
					bLocal_389 = true;
				}
			}
			func_111();
			if (func_76(&Local_42, &Local_55))
			{
				func_30();
			}
		}
	}
}

void func_111()
{
	iLocal_390++;
	if ((iLocal_390 % 30) == 0 || iLocal_391 == -1)
	{
		if (func_11(&Local_42, &Local_55, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), &iLocal_391))
		{
			func_8();
		}
	}
}

bool func_112()
{
	if (UNK_0x8A22C4C08282BF26(joaat("APPTRACKIFY")) > 0)
	{
		return true;
	}
	return false;
}

void func_113(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_20405.f_150[iVar1]), bVar0);
	}
}

void func_114(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_115(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_115(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;

	if (UNK_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (UNK_0x7F8A39872A07D2CE(&(Global_111638.f_20405[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_8 = (UNK_0x1C0640BA9A7327B3() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_12 = iParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_15 = iParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_10 = ((UNK_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_116();
	}
}

void func_116()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, false))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, true))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

bool func_117(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405.f_150[iVar1], bVar0);
	}
	return false;
}

void func_118()
{
	iLocal_393 = 0;
	func_122();
	func_121(&Local_42, 3, joaat("PROP_RAD_WASTE_BARREL_01"), "SUBM_COLLECT");
	func_119(&Local_42, joaat("NUM_HIDDEN_PACKAGES_3"), 815, 30);
	if (func_109(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
		{
			UNK_0x34D79252800B23FF(0);
			func_6(1);
		}
		else
		{
			UNK_0x34D79252800B23FF(5);
			func_6(2);
		}
	}
}

void func_119(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_120(&(uParam0->f_1), iParam2, iParam3);
}

void func_120(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	*bParam0 = 0;
	bParam0->f_1 = 0;
	bParam0->f_2 = iParam1;
	bParam0->f_3 = iParam2;
	if (bLocal_40)
	{
	}
	bVar0 = false;
	while (bVar0 < bParam0->f_3)
	{
		if (func_67((bParam0->f_2 + bVar0), -1, -1))
		{
			iVar1++;
			func_103(bParam0, bVar0, 1);
			if (bLocal_40)
			{
			}
		}
		bVar0++;
	}
	bParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
}

void func_121(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_122()
{
	int iVar0;

	Local_55[0 /*11*/].f_3 = { func_10(0) };
	Local_55[0 /*11*/].f_9 = 179.47f;
	Local_55[1 /*11*/].f_3 = { func_10(1) };
	Local_55[1 /*11*/].f_9 = 104f;
	Local_55[2 /*11*/].f_3 = { func_10(2) };
	Local_55[2 /*11*/].f_9 = 321.5f;
	Local_55[3 /*11*/].f_3 = { func_10(3) };
	Local_55[3 /*11*/].f_9 = -29.79f;
	Local_55[4 /*11*/].f_3 = { func_10(4) };
	Local_55[4 /*11*/].f_9 = -165.6f;
	Local_55[5 /*11*/].f_3 = { func_10(5) };
	Local_55[5 /*11*/].f_9 = 116f;
	Local_55[6 /*11*/].f_3 = { func_10(6) };
	Local_55[6 /*11*/].f_9 = -68.65f;
	Local_55[7 /*11*/].f_3 = { func_10(7) };
	Local_55[7 /*11*/].f_9 = 40f;
	Local_55[8 /*11*/].f_3 = { func_10(8) };
	Local_55[8 /*11*/].f_9 = 40f;
	Local_55[9 /*11*/].f_3 = { func_10(9) };
	Local_55[9 /*11*/].f_9 = 40f;
	Local_55[10 /*11*/].f_3 = { func_10(10) };
	Local_55[10 /*11*/].f_9 = 40f;
	Local_55[11 /*11*/].f_3 = { func_10(11) };
	Local_55[11 /*11*/].f_9 = 27.04f;
	Local_55[12 /*11*/].f_3 = { func_10(12) };
	Local_55[12 /*11*/].f_9 = 40f;
	Local_55[13 /*11*/].f_3 = { func_10(13) };
	Local_55[13 /*11*/].f_9 = 40f;
	Local_55[14 /*11*/].f_3 = { func_10(14) };
	Local_55[14 /*11*/].f_9 = 40f;
	Local_55[15 /*11*/].f_3 = { func_10(15) };
	Local_55[15 /*11*/].f_9 = 40f;
	Local_55[16 /*11*/].f_3 = { func_10(16) };
	Local_55[16 /*11*/].f_6 = { 89.94f, 61.93f, 90.94f };
	Local_55[17 /*11*/].f_3 = { func_10(17) };
	Local_55[17 /*11*/].f_9 = 40f;
	Local_55[18 /*11*/].f_3 = { func_10(18) };
	Local_55[18 /*11*/].f_9 = 40f;
	Local_55[19 /*11*/].f_3 = { func_10(19) };
	Local_55[19 /*11*/].f_9 = 40f;
	Local_55[20 /*11*/].f_3 = { func_10(20) };
	Local_55[20 /*11*/].f_9 = 40f;
	Local_55[21 /*11*/].f_3 = { func_10(21) };
	Local_55[21 /*11*/].f_9 = 40f;
	Local_55[22 /*11*/].f_3 = { func_10(22) };
	Local_55[22 /*11*/].f_9 = 40f;
	Local_55[23 /*11*/].f_3 = { func_10(23) };
	Local_55[23 /*11*/].f_9 = 40f;
	Local_55[24 /*11*/].f_3 = { func_10(24) };
	Local_55[24 /*11*/].f_9 = 40f;
	Local_55[25 /*11*/].f_3 = { func_10(25) };
	Local_55[25 /*11*/].f_9 = 198f;
	Local_55[26 /*11*/].f_3 = { func_10(26) };
	Local_55[26 /*11*/].f_9 = 198f;
	Local_55[27 /*11*/].f_3 = { func_10(27) };
	Local_55[27 /*11*/].f_9 = 198f;
	Local_55[28 /*11*/].f_3 = { func_10(28) };
	Local_55[28 /*11*/].f_9 = 198f;
	Local_55[29 /*11*/].f_3 = { func_10(29) };
	Local_55[29 /*11*/].f_9 = -109.43f;
	func_123(&Local_55);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iLocal_395[iVar0] = -1;
		iVar0++;
	}
}

void func_123(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		(iParam0[iVar0 /*11*/])->f_10 = 0;
		iVar0++;
	}
}

bool func_124(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return false;
	}
	return !UNK_0x437347B10A200C4B(bParam0, 0);
}

void func_125(bool bParam0)
{
	if (bParam0)
	{
		Global_111638.f_14046.f_89 = 1;
	}
	else
	{
		Global_111638.f_14046.f_89 = 0;
	}
}

int func_126(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_9080.f_99.f_219[iVar0]), bVar1);
	return 1;
}

void func_127()
{
	int iVar0;

	UNK_0x34D79252800B23FF(5);
	func_5();
	iVar0 = 0;
	while (iVar0 < Local_55)
	{
		func_104(&(Local_55[iVar0 /*11*/].f_2));
		func_94(&(Local_55[iVar0 /*11*/].f_1));
		if (iLocal_395[iVar0] >= 0 && iLocal_395[iVar0] < 8)
		{
			UNK_0xF8E35187F96B020B(iLocal_395[iVar0]);
		}
		iVar0++;
	}
	if (func_129(&(Local_42.f_1)))
	{
		func_128(13);
	}
	func_82();
	func_125(0);
	func_77(0);
	UNK_0x71199B01895C6202(Local_42.f_7);
	UNK_0x10FAF14A60A0DBE1();
}

int func_128(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iVar0], bVar1))
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_9080.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

bool func_129(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

