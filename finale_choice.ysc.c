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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	bool bLocal_28 = false;
#endregion

void __EntryFunction__()
{
	bool bVar0;

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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	bLocal_28 = true;
	if (UNK_0x2EBF608FFE6CA406(18))
	{
		func_42();
	}
	func_41(20);
	func_40();
	func_39(1);
	func_39(0);
	func_39(2);
	func_39(13);
	func_39(12);
	Global_7361 = 1;
	func_38();
	if (!func_37(-1615086084))
	{
		func_36(-1615086084, 2, 2, 2, 1, -1, 5);
	}
	if (!func_37(-1970925435))
	{
		func_36(-1970925435, 2, 0, 0, 1, -1, 5);
	}
	if (!func_37(-1817481777))
	{
		func_36(-1817481777, 2, 12, 3, 1, -1, 5);
	}
	bVar0 = false;
	while (func_35(23) && !func_34(134))
	{
		if (func_29() == 1)
		{
			if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					if ((!UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9()) && !UNK_0x70EED0761B82965E(UNK_0x16F2683693E537C9())) && !UNK_0x4E861BC5B1EDA7BD(UNK_0x16F2683693E537C9()))
					{
						if (!bVar0)
						{
							if (!((func_28() || UNK_0x991B1F0980C62628()) || func_27()))
							{
								if (func_13())
								{
									bVar0 = true;
								}
							}
						}
						else
						{
							if (bLocal_28)
							{
								UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 384);
								UNK_0xCAF7AE54F764D5AA(UNK_0x16F2683693E537C9(), 0f);
								UNK_0xEAB026E686C0D991(0, 173, 1);
								UNK_0xEAB026E686C0D991(0, 172, 1);
								UNK_0xEAB026E686C0D991(0, 174, 1);
								UNK_0xEAB026E686C0D991(0, 175, 1);
								UNK_0xEAB026E686C0D991(0, 176, 1);
								UNK_0xEAB026E686C0D991(0, 177, 1);
								UNK_0xEAB026E686C0D991(0, 178, 1);
								UNK_0xEAB026E686C0D991(0, 179, 1);
								UNK_0xEAB026E686C0D991(0, 180, 1);
								UNK_0xEAB026E686C0D991(0, 181, 1);
							}
							else
							{
								UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
							}
							switch (func_12())
							{
								case -1615086084:
									if (!func_37(-1989308064))
									{
										func_8(-1989308064, 0, 1, 0, 1, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								case -1989308064:
									func_7(12, 0);
									func_6(134, 1);
									UNK_0xCDC520E5E48E63D9(joaat("SP_FINAL_DECISION"), 2, 1);
									break;
								case -1970925435:
									if (!func_37(-1060930305))
									{
										func_8(-1060930305, 0, 1, 2, 2, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								case -1060930305:
									func_7(12, 1);
									func_6(134, 1);
									UNK_0xCDC520E5E48E63D9(joaat("SP_FINAL_DECISION"), true, 1);
									break;
								case -1817481777:
									func_7(12, 2);
									func_6(134, 1);
									UNK_0xCDC520E5E48E63D9(joaat("SP_FINAL_DECISION"), 3, 1);
									break;
								default:
									if (!func_5(0))
									{
										bVar0 = false;
									}
									else if (bLocal_28)
									{
										if (func_4())
										{
											bLocal_28 = false;
										}
									}
									break;
							}
						}
					}
				}
			}
		}
		SYSTEM::WAIT(0);
	}
	func_3(20);
	Global_98783 = 0;
	func_1();
	func_42();
}

int func_1()
{
	if (func_2(0))
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

bool func_2(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

int func_3(int iParam0)
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

bool func_4()
{
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		return true;
	}
	return false;
}

bool func_5(int iParam0)
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

void func_6(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_111638.f_9080.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_111638.f_9080.f_99.f_58[iParam0] = iParam1;
}

void func_7(int iParam0, int iParam1)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_111638.f_9080.f_99.f_205[iParam0] == iParam1)
	{
		return;
	}
	Global_111638.f_9080.f_99.f_205[iParam0] = iParam1;
}

int func_8(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar15;

	if (func_2(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == bParam2)
	{
		return 0;
	}
	if (((bParam2 != 144 && bParam2 != 0) && bParam2 != 1) && bParam2 != 2)
	{
		return 0;
	}
	if (Global_111638.f_7683.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_111638.f_7683.f_911 == Var0)
		{
			Global_111638.f_7683.f_911 = -1;
		}
		Var0.f_3 = func_11(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (UNK_0x1C0640BA9A7327B3() + iParam5);
		Var0.f_1 = iParam10;
		iVar15 = 0;
		UNK_0x5D96D8530B3D0904(&iVar15, bParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		UNK_0x5D96D8530B3D0904(&(Var0.f_1), false);
		UNK_0x0674E58A79778E99(&(Var0.f_1), true);
		if (iParam1 == 0)
		{
			UNK_0x5D96D8530B3D0904(&(Var0.f_1), 10);
		}
		Global_111638.f_7683[Global_111638.f_7683.f_136 /*15*/] = { Var0 };
		Global_111638.f_7683.f_136++;
		func_9(bParam2);
		return 1;
	}
	return 0;
}

void func_9(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_10(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7683[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_111638.f_7683[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_111638.f_7683[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_111638.f_7683.f_764)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7683.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_111638.f_7683.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_111638.f_7683.f_919[bParam0] = iVar1;
}

bool func_10(bool bParam0)
{
	return bParam0 < 3;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
		case 7:
			return 4;
		case 2:
			return 3;
		case 1:
			return 2;
		case 3:
			return 1;
		case 5:
		case 6:
			return 0;
	}
	return 7;
}

int func_12()
{
	return Global_111638.f_7683.f_911;
}

bool func_13()
{
	if (Global_19486.f_1 > 3)
	{
		UNK_0x0674E58A79778E99(&Global_7357, false);
		func_22(0);
		return false;
	}
	UNK_0x5D96D8530B3D0904(&Global_7357, false);
	if (func_14(0, 0, 1, 1))
	{
		return true;
	}
	UNK_0x0674E58A79778E99(&Global_7357, false);
	return false;
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
			func_20();
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
	func_19();
	if (Global_19486.f_1 == 9)
	{
		return false;
	}
	if (iParam2 == 0)
	{
		if (func_5(0) == 1)
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
	func_20();
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

void func_19()
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

void func_20()
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
			if (func_21(iVar2, Global_19486) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_16(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_41431 == 15 && func_2(0) == 0) && Global_7361 == 0)
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

int func_21(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_19[iParam1];
}

void func_22(int iParam0)
{
	if (func_26())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_25())
		{
			func_24(1, 1);
		}
		else
		{
			func_24(0, 0);
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
	if (!func_23())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_23()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_24(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_5(0))
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

bool func_25()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_26()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_27()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_28()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

int func_29()
{
	func_30();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_30()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_32(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_31(UNK_0x16F2683693E537C9());
			if (func_10(iVar0) && (!func_17(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_10(Global_111638.f_2358.f_539.f_4321))
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

int func_31(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_32(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_32(int iParam0)
{
	if (func_10(iParam0))
	{
		return func_33(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_33(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_34(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

bool func_35(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

int func_36(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<15> Var0;

	if (func_2(0))
	{
		return 0;
	}
	if (bParam2 < 3)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam1, bParam2))
		{
			return 0;
		}
	}
	if (bParam1 < 1 || bParam1 > 7)
	{
		return 0;
	}
	if (iParam4 <= 0)
	{
		return 0;
	}
	if (Global_111638.f_7683.f_650 < 30)
	{
		Var0 = iParam0;
		if (Global_111638.f_7683.f_911 == Var0)
		{
			Global_111638.f_7683.f_911 = -1;
		}
		Var0.f_1 = 0;
		Var0.f_6 = bParam2;
		Var0.f_2 = bParam1;
		Var0.f_14 = iParam3;
		Var0.f_3 = iParam6;
		Var0.f_7 = -1;
		Var0.f_8 = 0;
		Var0.f_9 = -1;
		Var0.f_4 = (UNK_0x1C0640BA9A7327B3() + iParam4);
		Var0.f_9 = iParam5;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		UNK_0x5D96D8530B3D0904(&(Var0.f_1), false);
		UNK_0x5D96D8530B3D0904(&(Var0.f_1), 6);
		Global_111638.f_7683.f_199[Global_111638.f_7683.f_650 /*15*/] = { Var0 };
		Global_111638.f_7683.f_650++;
		return 1;
	}
	return 0;
}

bool func_37(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (Global_111638.f_7683[iVar0 /*15*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar0 /*15*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar0 /*15*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_764)
	{
		if (Global_111638.f_7683.f_651[iVar0 /*14*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_866)
	{
		if (Global_111638.f_7683.f_765[iVar0 /*10*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_38()
{
	Global_98783 = 1;
}

void func_39(int iParam0)
{
	if (((((iParam0 == 144 || iParam0 == 145) || iParam0 == 161) || iParam0 == 168) || iParam0 == 167) || iParam0 == 162)
	{
		return;
	}
	Global_41983[iParam0] = UNK_0x1C0640BA9A7327B3();
}

void func_40()
{
	Global_41982 = UNK_0x1C0640BA9A7327B3();
}

int func_41(int iParam0)
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

void func_42()
{
	func_43(-1615086084);
	func_43(-1989308064);
	func_43(-1970925435);
	func_43(-1060930305);
	func_43(-1817481777);
	Global_7361 = 0;
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	UNK_0x10FAF14A60A0DBE1();
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (Global_111638.f_7683[iVar0 /*15*/] == iParam0)
		{
			if (Global_41978 != iVar0)
			{
				func_54(iVar0);
				func_47(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar0 /*15*/] == iParam0)
		{
			func_47(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar0 /*15*/] == iParam0)
		{
			func_46(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_764)
	{
		if (Global_111638.f_7683.f_651[iVar0 /*14*/] == iParam0)
		{
			func_45(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_866)
	{
		if (Global_111638.f_7683.f_765[iVar0 /*10*/] == iParam0)
		{
			func_44(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_44(int iParam0)
{
	int iVar0;
	struct<10> Var1;

	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_866)
	{
		return;
	}
	if (Global_111638.f_7683.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_111638.f_7683.f_866 - 2))
		{
			Global_111638.f_7683.f_765[iVar0 /*10*/] = { Global_111638.f_7683.f_765[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_111638.f_7683.f_866 > 0)
	{
		Global_111638.f_7683.f_765[(Global_111638.f_7683.f_866 - 1) /*10*/] = { Var1 };
		Global_111638.f_7683.f_866 = (Global_111638.f_7683.f_866 - 1);
	}
}

void func_45(int iParam0)
{
	int iVar0;
	struct<14> Var1;

	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_764)
	{
		return;
	}
	if (Global_111638.f_7683.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_111638.f_7683.f_764 - 2))
		{
			Global_111638.f_7683.f_651[iVar0 /*14*/] = { Global_111638.f_7683.f_651[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_111638.f_7683.f_764 > 0)
	{
		Global_111638.f_7683.f_651[(Global_111638.f_7683.f_764 - 1) /*14*/] = { Var1 };
		Global_111638.f_7683.f_764 = (Global_111638.f_7683.f_764 - 1);
	}
	func_9(0);
	func_9(1);
	func_9(2);
}

void func_46(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;

	iVar15 = 0;
	while (iVar15 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar15 /*15*/] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= (Global_111638.f_7683.f_650 - 2))
			{
				Global_111638.f_7683.f_199[iVar16 /*15*/] = { Global_111638.f_7683.f_199[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_111638.f_7683.f_199[(Global_111638.f_7683.f_650 - 1) /*15*/] = { Var0 };
			Global_111638.f_7683.f_650 = (Global_111638.f_7683.f_650 - 1);
			return;
		}
		iVar15++;
	}
}

void func_47(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;

	iVar15 = 0;
	while (iVar15 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar15 /*15*/] == iParam0)
		{
			func_48(Global_111638.f_7683.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= (Global_111638.f_7683.f_198 - 2))
			{
				Global_111638.f_7683.f_137[iVar16 /*15*/] = { Global_111638.f_7683.f_137[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_111638.f_7683.f_137[(Global_111638.f_7683.f_198 - 1) /*15*/] = { Var0 };
			Global_111638.f_7683.f_198 = (Global_111638.f_7683.f_198 - 1);
			return;
		}
		iVar15++;
	}
}

int func_48(int iParam0)
{
	int iVar0;

	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (func_21(iParam0, Global_19486) == 1)
		{
			func_53(iParam0, Global_19486, 0);
			if (func_52(iParam0, Global_19486) == 0)
			{
				iVar0 = Global_19486;
				func_49(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_49(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_51(iParam0, iVar0, 0);
			func_50(iParam0, iVar0, 0);
		}
	}
}

void func_50(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_52(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_53(int iParam0, int iParam1, int iParam2)
{
	Global_1798[iParam0 /*29*/].f_19[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_19[iParam1] = iParam2;
	}
}

void func_54(int iParam0)
{
	bool bVar0;
	bool bVar1;
	struct<15> Var2;

	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_136)
	{
		return;
	}
	bVar1 = Global_111638.f_7683[iParam0 /*15*/].f_2;
	if (Global_111638.f_7683.f_136 > 1)
	{
		bVar0 = iParam0;
		while (bVar0 <= (Global_111638.f_7683.f_136 - 2))
		{
			Global_111638.f_7683[bVar0 /*15*/] = { Global_111638.f_7683[bVar0 + 1 /*15*/] };
			bVar0++;
		}
	}
	if (Global_111638.f_7683.f_136 > 0)
	{
		Global_111638.f_7683[(Global_111638.f_7683.f_136 - 1) /*15*/] = { Var2 };
		Global_111638.f_7683.f_136 = (Global_111638.f_7683.f_136 - 1);
	}
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bVar1, bVar0))
		{
			func_9(bVar0);
		}
		bVar0++;
	}
}

