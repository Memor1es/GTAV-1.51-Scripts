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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72[4] = { 0, 0, 0, 0 };
	int iLocal_77[4] = { 0, 0, 0, 0 };
	int iLocal_82[4] = { 0, 0, 0, 0 };
	struct<4> Local_87[4];
	vector3 vLocal_104 = { 0f, 0f, 0f };
	float fLocal_107 = 0f;
	vector3 vLocal_108[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_121[4] = { 0f, 0f, 0f, 0f };
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_61 = { 0f, 0f, 0f };
	vLocal_64 = { 0f, 0f, 0f };
	iLocal_67 = -1;
	iLocal_70 = 318;
	iLocal_71 = 1;
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		func_34();
	}
	SYSTEM::WAIT(0);
	func_22();
	func_21();
	func_17();
	while (iLocal_71 && func_7(1, iLocal_72[0]))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_69)
		{
			case 0:
				if (func_6())
				{
					iLocal_69 = 1;
				}
				break;
			case 1:
				if (func_2())
				{
					iLocal_69 = 2;
				}
				break;
			case 2:
				func_1();
				break;
		}
	}
	func_34();
}

void func_1()
{
	iLocal_71 = 0;
}

bool func_2()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_72)
	{
		func_3(iLocal_72[iVar0], iVar0);
		iVar0++;
	}
	if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_104) > 100f)
	{
		return true;
	}
	return false;
}

int func_3(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		switch (iLocal_82[iParam1])
		{
			case 0:
				if (func_5())
				{
					return 0;
				}
				if (UNK_0xEB6A8945D1AC98A1(bParam0))
				{
					iLocal_82[iParam1] = -1;
					return 0;
				}
				if (func_4(bParam0))
				{
					iLocal_82[iParam1] = 2;
					return 0;
				}
				if (UNK_0xD1960163A3042274(bParam0, -1146898486) != 1)
				{
					UNK_0x01E4BB5190DF7317(bParam0, 1193033728, 0);
					UNK_0xFADC0A217229F6B5(iLocal_72[iParam1], true);
				}
				break;
			case 1:
				if (UNK_0xEB6A8945D1AC98A1(bParam0))
				{
					iLocal_82[iParam1] = -1;
					return 0;
				}
				if (!UNK_0xEA6BC48857E0AC4C(&(Local_87[iParam1 /*4*/])))
				{
					SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(Local_87[iParam1 /*4*/]), &(iLocal_72[iParam1]), 1, 1424);
					iLocal_82[iParam1] = 4;
					return 0;
				}
				if (func_4(bParam0))
				{
					iLocal_82[iParam1] = 2;
					return 0;
				}
				bVar0 = "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
				if (!UNK_0xC7441A1068F3F171(bParam0))
				{
					UNK_0x509B8296EBA9B408(bParam0, bVar0, 0, 1);
					UNK_0xFADC0A217229F6B5(iLocal_72[iParam1], true);
				}
				break;
			case 2:
				iVar1 = 0;
				while (iVar1 < iLocal_82)
				{
					if (iParam1 != iVar1)
					{
						if (iLocal_82[iVar1] < 2 && iLocal_82[iParam1] >= 0)
						{
							iLocal_82[iVar1] = 2;
						}
					}
					iVar1++;
				}
				iLocal_82[iParam1] = 3;
				return 0;
			case 3:
				if (UNK_0xEB6A8945D1AC98A1(bParam0))
				{
					iLocal_82[iParam1] = -1;
					return 0;
				}
				if (UNK_0xD1960163A3042274(bParam0, 1805844857) != 1)
				{
					UNK_0xA3BF0AA5A2608191(bParam0);
					UNK_0xF3268524E9BE6D6E(bParam0, UNK_0x16F2683693E537C9(), 50f, 20000, 1, 0);
					return 1;
				}
				if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bParam0, true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) > (50f * 50f))
				{
					iLocal_82[iParam1] = 0;
					return 1;
				}
				break;
			case 4:
				return 0;
			case -1:
				return 0;
			default:
				return 0;
		}
		return 1;
	}
	return 0;
}

bool func_4(bool bParam0)
{
	int iVar0;

	if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
	{
		return true;
	}
	if (UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0))
	{
		return true;
	}
	if (UNK_0x4734A6196B611C3B(bParam0, UNK_0x16F2683693E537C9()))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_72)
	{
		if (bParam0 != iLocal_72[iVar0])
		{
			if (iLocal_82[iVar0] < 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_5()
{
	if (!UNK_0x991B1F0980C62628() || UNK_0x19EC8D83154D7CC1() == 3)
	{
		return false;
	}
	if (UNK_0x00A15D69BCAA5267() > 8)
	{
		if (UNK_0x00A15D69BCAA5267() != 11)
		{
			return false;
		}
		if (UNK_0x00A15D69BCAA5267() == 11)
		{
			if (UNK_0x94EFC97F8A693855() > 0)
			{
				if (UNK_0x192DE42720995A6E() > 100)
				{
					return false;
				}
			}
		}
	}
	return true;
}

bool func_6()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_72)
	{
		func_3(iLocal_72[iVar0], iVar0);
		iVar0++;
	}
	if (!func_5())
	{
		return true;
	}
	return false;
}

int func_7(int iParam0, bool bParam1)
{
	vector3 vVar0;
	float fVar3;

	if (UNK_0x991B1F0980C62628())
	{
		if (UNK_0x19EC8D83154D7CC1() != 3)
		{
			if (UNK_0x00A15D69BCAA5267() <= 2 && UNK_0x00A15D69BCAA5267() != 1)
			{
				return 1;
			}
		}
	}
	if (!UNK_0x991B1F0980C62628())
	{
		if (func_16(14))
		{
			return 0;
		}
		if (UNK_0x8F7DE34FFB67592B())
		{
			return 0;
		}
		if (!func_9(iParam0, func_10()))
		{
			return 0;
		}
		if (UNK_0xC844350D5D58C99A(bParam1))
		{
			vVar0 = { UNK_0x68F4C0EC296D3901(bParam1, false) };
			fVar3 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar0);
			if (fVar3 > 250f)
			{
				if (!UNK_0x437347B10A200C4B(bParam1, 0))
				{
					if (!UNK_0x0A059E0DB9253280(bParam1))
					{
						return 0;
					}
				}
				else if (!UNK_0x8E28E832BEAC3DCE(vVar0, 1.5f))
				{
					return 0;
				}
			}
		}
		else if (bParam1 == func_8(Global_98465) && bParam1 != 0)
		{
			Global_98465 = 0;
		}
	}
	return 1;
}

bool func_8(var uParam0)
{
	return uParam0;
}

bool func_9(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_10()
{
	func_11();
	switch (Global_111638.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
	}
	return 0;
}

void func_11()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_14(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_13(UNK_0x16F2683693E537C9());
			if (func_12(iVar0) && (!func_16(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_12(Global_111638.f_2358.f_539.f_4321))
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

bool func_12(int iParam0)
{
	return iParam0 < 3;
}

int func_13(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_14(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_14(int iParam0)
{
	if (func_12(iParam0))
	{
		return func_15(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_15(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_16(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_17()
{
	if (!UNK_0x991B1F0980C62628())
	{
		if (UNK_0x757EF87A33649210())
		{
			func_20();
		}
		return;
	}
	if (UNK_0x19EC8D83154D7CC1() == 3)
	{
		func_20();
		return;
	}
	func_18();
	if (Global_98467 > 0)
	{
		return;
	}
	UNK_0x36B03FE02FE012AB();
}

void func_18()
{
	func_19((Global_98467 - 1));
}

void func_19(int iParam0)
{
	Global_98467 = iParam0;
}

void func_20()
{
	func_19(0);
}

void func_21()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 400)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 < iLocal_77)
		{
			if (iLocal_77[iVar0] != 0)
			{
				UNK_0x523BCC9DC80CD82F(iLocal_77[iVar0]);
				if (!UNK_0xB87F6CF6E5628C67(iLocal_77[iVar0]))
				{
					UNK_0x523BCC9DC80CD82F(iLocal_77[iVar0]);
					bVar2 = false;
				}
			}
			if (!UNK_0xEA6BC48857E0AC4C(&(Local_87[iVar0 /*4*/])))
			{
				UNK_0x92DCE5C81176D2B4(&(Local_87[iVar0 /*4*/]));
				if (!UNK_0x1FBF08B001C4788A(&(Local_87[iVar0 /*4*/])))
				{
					bVar2 = false;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iVar1++;
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_72)
	{
		if (iLocal_77[iVar0] != 0)
		{
			iLocal_72[iVar0] = UNK_0x36F2404464202779(4, iLocal_77[iVar0], vLocal_104 + vLocal_108[iVar0 /*3*/], false, 1, true);
			UNK_0xD8F6A53F4799FAFE(iLocal_72[iVar0], (fLocal_107 + fLocal_121[iVar0]));
			UNK_0xC743BD39A24D0583(iLocal_72[iVar0], 0);
			UNK_0xAFF39FB306F8E232(iLocal_72[iVar0], 13, false);
			UNK_0xAFF39FB306F8E232(iLocal_72[iVar0], 17, true);
			UNK_0x11AD11297DC58CC7(iLocal_72[iVar0], true);
			UNK_0x46CB381A452EF99D(iLocal_72[iVar0], 0);
		}
		iVar0++;
	}
}

void func_22()
{
	char[] cVar0[8];
	struct<109> Var8;
	struct<97> Var117;

	iLocal_70 = Global_98147;
	func_26(iLocal_70, &vLocal_104, &fLocal_107, &cVar0);
	Var8.f_1 = -1;
	Var8.f_17 = 4;
	Var8.f_17.f_8 = 4;
	Var8.f_17.f_13 = 4;
	Var8.f_17.f_18 = 4;
	Var8.f_17.f_24 = 4;
	Var8.f_17.f_29 = 4;
	Var8.f_17.f_34 = 4;
	Var8.f_62 = 8;
	Var8.f_96.f_7 = 21;
	Var8.f_96.f_8 = 6;
	Var117.f_1 = -1;
	Var117.f_17 = 4;
	Var117.f_17.f_8 = 4;
	Var117.f_17.f_13 = 4;
	Var117.f_17.f_18 = 4;
	Var117.f_17.f_24 = 4;
	Var117.f_17.f_29 = 4;
	Var117.f_17.f_34 = 4;
	Var117.f_62 = 8;
	Var117.f_96.f_7 = 21;
	Var117.f_96.f_8 = 6;
	Var8 = 0;
	Var8.f_2 = iLocal_70;
	Var8.f_3 = Global_96222.f_45;
	func_23(Var8, &Var117);
	switch (iLocal_70)
	{
		case 97:
			vLocal_108[0 /*3*/] = { Vector(45.5004f, -205.8167f, -1416.54f) - vLocal_104 };
			vLocal_108[1 /*3*/] = { Vector(45.5004f, -207.5375f, -1423.898f) - vLocal_104 };
			vLocal_108[2 /*3*/] = { Vector(45.5004f, -210.4254f, -1428.501f) - vLocal_104 };
			vLocal_108[3 /*3*/] = { Vector(45.5004f, UNK_0x79833B02DBD2A244(-205.8167f, -210.4254f), UNK_0x79833B02DBD2A244(-1416.54f, -1428.501f)) - vLocal_104 };
			fLocal_121[0] = (5.8017f - fLocal_107);
			fLocal_121[1] = (2.582f - fLocal_107);
			fLocal_121[2] = (-47.7025f - fLocal_107);
			fLocal_121[3] = (65.2818f - fLocal_107);
			iLocal_77[0] = joaat("A_F_M_TOURIST_01");
			StringCopy(&(Local_87[0 /*4*/]), "", 16);
			iLocal_77[1] = joaat("A_M_Y_HIPSTER_01");
			StringCopy(&(Local_87[1 /*4*/]), "", 16);
			iLocal_77[2] = joaat("A_M_M_BEVHILLS_01");
			StringCopy(&(Local_87[2 /*4*/]), "", 16);
			iLocal_77[3] = joaat("A_M_M_GENFAT_01");
			StringCopy(&(Local_87[3 /*4*/]), "", 16);
			iLocal_82[0] = 0;
			iLocal_82[1] = 0;
			iLocal_82[2] = 0;
			iLocal_82[3] = 0;
			break;
		case 158:
			vLocal_108[0 /*3*/] = { 1.2712f, 6.071f, -0.75f };
			vLocal_108[1 /*3*/] = { 3.8061f, 5.7599f, -0.5f };
			vLocal_108[2 /*3*/] = { 4.541f, 7.8487f, -0.4f };
			vLocal_108[3 /*3*/] = { 3.1051f, 13.7474f, -0.3463f };
			fLocal_121[0] = 123.059f;
			fLocal_121[1] = 134.0498f;
			fLocal_121[2] = 58.663f;
			fLocal_121[3] = 89.5592f;
			iLocal_77[0] = joaat("S_F_Y_HOOKER_01");
			StringCopy(&(Local_87[0 /*4*/]), "pb_prostitute", 16);
			iLocal_77[1] = joaat("S_F_Y_HOOKER_01");
			StringCopy(&(Local_87[1 /*4*/]), "pb_prostitute", 16);
			iLocal_77[2] = joaat("S_F_Y_HOOKER_01");
			StringCopy(&(Local_87[2 /*4*/]), "pb_prostitute", 16);
			iLocal_77[3] = joaat("S_F_Y_HOOKER_01");
			StringCopy(&(Local_87[3 /*4*/]), "pb_prostitute", 16);
			iLocal_82[0] = 1;
			iLocal_82[1] = 1;
			iLocal_82[2] = 1;
			iLocal_82[3] = 1;
			break;
		default:
			vLocal_108[0 /*3*/] = { 0f, 0f, 0f };
			vLocal_108[1 /*3*/] = { 0f, 0f, 0f };
			vLocal_108[2 /*3*/] = { 0f, 0f, 0f };
			vLocal_108[3 /*3*/] = { 0f, 0f, 0f };
			fLocal_121[0] = 0f;
			fLocal_121[1] = 0f;
			fLocal_121[2] = 0f;
			fLocal_121[3] = 0f;
			iLocal_77[0] = 0;
			iLocal_77[1] = 0;
			iLocal_77[2] = 0;
			iLocal_77[3] = 0;
			break;
	}
}

int func_23(struct<109> Param0, var uParam109)
{
	uParam109->f_119 = 0;
	switch (Param0.f_2)
	{
		case 0:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1435919172;
			uParam109->f_110 = 1435919172;
			func_25(uParam109);
			uParam109->f_118 = 0;
			return 0;
		case 1:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = 0;
			return 1;
		case 2:
			*uParam109 = { Global_96855[0 /*109*/] };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = Global_98443[0];
			return 1;
		case 3:
			*uParam109 = { Global_96855[1 /*109*/] };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = Global_98443[1];
			return 1;
		case 4:
			*uParam109 = { Global_96855[2 /*109*/] };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = Global_98443[2];
			return 1;
		case 5:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = Global_98443[Param0.f_3];
			return 1;
		case 6:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = Global_98443[Param0.f_3];
			return 1;
		case 7:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = Global_98443[Param0.f_3];
			return 1;
		case 8:
		case 9:
		case 10:
			*uParam109 = { Param0 };
			uParam109->f_109 = 936589729;
			uParam109->f_110 = 936589729;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 11:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 14:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 13:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 15:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 54:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 55:
			*uParam109 = { Param0 };
			uParam109->f_109 = 936589729;
			uParam109->f_110 = 936589729;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 56:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 57:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 12:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = joaat("SCRIPT_TASK_LEAVE_VEHICLE");
			func_24(uParam109, 144, -982327190, -982327190, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 16:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 17:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 18:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 19:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 20:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 22:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 74:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 67:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 58:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 59:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 60:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 25:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 26:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 27:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 28:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 38:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 40:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 42:
		case 43:
		case 44:
		case 45:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1959848946;
			uParam109->f_110 = -1959848946;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 47:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 49:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 48:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -1794415470;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 50:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 51:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 52:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 66:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 61:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 62:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 63:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 69:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 64:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 65:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 234:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 316:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 315:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 75:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_24(uParam109, 30, -982327190, -982327190, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 76:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 77:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, 1785177548, 1785177548, -0.7035f, -0.0282f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 78:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, 1785177548, 1785177548, -3.03f, -0.72f, 0.08f, 168f);
			uParam109->f_118 = 1;
			return 1;
		case 79:
		case 80:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, -2017877118, -2017877118, Vector(2.6407f, 8.164f, -14.1564f) + Vector(-1f, 0.03f, -2.16f), (-66f + -56f));
			if (Param0.f_2 == 80)
			{
				func_25(uParam109);
			}
			uParam109->f_118 = 1;
			return 1;
		case 124:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 82:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 84:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 83:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 85:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 291:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 86:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 87:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 88:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 89:
		case 90:
		case 127:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			if (Param0.f_2 == 92)
			{
				uParam109->f_118 = 1;
			}
			if (Param0.f_2 == 104)
			{
				uParam109->f_118 = 0;
			}
			if (Param0.f_2 == 81)
			{
				func_25(uParam109);
				uParam109->f_118 = 1;
			}
			return 1;
		case 94:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			if (Param0.f_2 == 94)
			{
				func_24(uParam109, 17, 1785177548, 1785177548, -1.71f, 1.05f, 0f, -138f);
			}
			uParam109->f_118 = 1;
			return 1;
		case 95:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 96:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = 2106541073;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 134:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 108:
		case 109:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 41:
		case 112:
		case 113:
		case 123:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 150:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 20, 1785177548, 1785177548, 0.98f, 0.8017f, -0.42f, -180f);
			uParam109->f_118 = 1;
			return 1;
		case 118:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 119:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 120:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 114:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 105:
		case 106:
		case 107:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -2017877118;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 98:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 99:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_24(uParam109, 15, -982327190, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 100:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_24(uParam109, 15, -982327190, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 101:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_24(uParam109, 14, -982327190, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 102:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_24(uParam109, 14, -982327190, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 103:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 121:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 122:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, 1785177548, 1785177548, -2.04f, -0.15f, 0f, 14.4f);
			uParam109->f_118 = 1;
			return 1;
		case 125:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 115:
		case 116:
		case 117:
		case 97:
		case 162:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 110:
		case 111:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 131:
		case 132:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 126:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 128:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 129:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 130:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 133:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 151:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, 1785177548, 1785177548, -1.71f, 1.05f, 0f, -138f);
			uParam109->f_118 = 1;
			return 1;
		case 152:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, 1785177548, 1785177548, 1.1779f, 2.4276f, 0f, 162.1022f);
			uParam109->f_118 = 1;
			return 1;
		case 153:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 154:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 155:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, 1785177548, 1785177548, UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f, UNK_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 156:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 14, 1785177548, 1785177548, 0.3427f, 1.1592f, 1.0351f, 139.912f);
			uParam109->f_118 = 1;
			return 1;
		case 157:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 158:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f, UNK_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 159:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 160:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 161:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 163:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, 1785177548, 1785177548, -3.03f, -0.72f, 0.08f, 168f);
			uParam109->f_118 = 1;
			return 1;
		case 164:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 165:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 166:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 167:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 14, -982327190, 1785177548, -0.8472f, 0.155f, 0f, 152.556f);
			uParam109->f_118 = 1;
			return 1;
		case 168:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 169:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 14, 1785177548, 1785177548, -0.3577f, -0.8968f, -0.0003f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 170:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 17, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 171:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 14, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 172:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 15, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 2;
			return 1;
		case 173:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 174:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = 0;
			return 1;
	}
	switch (Param0.f_2)
	{
		case 175:
		case 176:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 177:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 178:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 179:
		case 180:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 181:
		case 182:
		case 183:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 192:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, 1f, 1f, 0f, 0f);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
		case 193:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, -982327190, 1785177548, 4.2943f, -6.7858f, 0f, -133.5332f);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
		case 194:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_25(uParam109);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
		case 195:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_25(uParam109);
			uParam109->f_118 = 1;
			if (Global_3)
			{
				uParam109->f_118 = 1;
			}
			return 1;
		case 198:
		case 199:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 200:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 201:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 202:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 184:
		case 185:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 186:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 187:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 188:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 189:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 190:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 191:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 196:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 43, 1785177548, 1785177548, UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f, UNK_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 197:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 203:
		case 206:
		case 207:
		case 204:
		case 205:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, 3.4381f, -0.8269f, 0f, -87.6612f);
			if (Param0.f_2 != 205)
			{
				uParam109->f_112 = { 3.4381f, -0.8269f, 0f };
				uParam109->f_115 = -87.6612f;
			}
			uParam109->f_118 = 1;
			return 1;
		case 23:
		case 208:
		case 209:
		case 210:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 24:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 211:
		case 213:
		case 216:
		case 217:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 212:
		case 214:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 215:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, 3.4381f, -0.8269f, 0f, -87.6612f);
			uParam109->f_118 = 1;
			return 1;
		case 221:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, -0.7949f, -0.508f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 222:
		case 223:
		case 224:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 218:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 19, 1785177548, 1785177548, 1.29f, 1.41f, 0f, 57.52f);
			uParam109->f_118 = 1;
			return 1;
		case 219:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 19, 1785177548, 1785177548, 1.29f, 1.41f, 0f, 57.52f);
			uParam109->f_118 = 1;
			return 1;
		case 220:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 19, 1785177548, 1785177548, 0.5504f, -0.2322f, 0f, -9.9741f);
			uParam109->f_118 = 1;
			return 1;
		case 225:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 19, 1785177548, 1785177548, 1.23f, 0.6f, -1f, 34.56f);
			uParam109->f_118 = 1;
			return 1;
		case 231:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = 0;
			return 1;
		case 232:
		case 233:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 235:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 236:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam109->f_118 = 1;
			return 1;
		case 237:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam109->f_118 = 1;
			return 1;
		case 238:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 239:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 240:
		case 241:
		case 242:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 273:
		case 274:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 245:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 250:
		case 251:
		case 252:
		case 253:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 243:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 244:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 271:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 280:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			uParam109->f_118 = 1;
			func_25(uParam109);
			return 1;
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			uParam109->f_118 = 1;
			func_25(uParam109);
			if (Param0.f_2 == 265)
			{
				uParam109->f_118 = 1;
			}
			if (Param0.f_2 == 268)
			{
				uParam109->f_118 = 0;
			}
			if (Param0.f_2 == 267)
			{
				func_24(uParam109, 144, -982327190, 2106541073, -2.4166f, -0.15f, 0f, -148.7555f);
			}
			if (Param0.f_2 == 266)
			{
				func_24(uParam109, 144, 2106541073, 2106541073, -5.7915f, -11.0439f, 0.67f, -72.589f);
			}
			return 1;
		case 246:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 247:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 263:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 278:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 279:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 264:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 255:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 248:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f, UNK_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 249:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f, UNK_0x79833B02DBD2A244(-180f, 180f));
			uParam109->f_118 = 1;
			return 1;
		case 281:
		case 282:
		case 283:
		case 284:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 275:
		case 276:
		case 277:
			*uParam109 = { Param0 };
			uParam109->f_109 = -235832601;
			uParam109->f_110 = -235832601;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
		case 254:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 285:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 256:
		case 257:
		case 258:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 259:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 260:
		case 261:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 286:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 287:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 288:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 262:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 289:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 144, -2017877118, -2017877118, -3.264f, -14.7895f, 14.1815f, -0.6311f);
			uParam109->f_118 = 1;
			return 1;
		case 290:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 292:
		case 295:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 32, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 293:
		case 294:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 32, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam109->f_118 = 1;
			return 1;
		case 299:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 32, 1785177548, 1785177548, 0.24f, 0.33f, -0.5f, -11.88f);
			uParam109->f_118 = 1;
			return 1;
		case 300:
		case 301:
		case 302:
		case 303:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 32, 1785177548, 1785177548, 0.24f, 0.33f, -0.5f, -11.88f);
			uParam109->f_118 = 1;
			return 1;
		case 296:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 32, 1785177548, 1785177548, 1.41f, 1.35f, 0f, 168f);
			uParam109->f_118 = 1;
			return 1;
		case 297:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 32, 1785177548, 1785177548, 1.7491f, 0.6423f, 0f, 166.479f);
			uParam109->f_118 = 1;
			return 1;
		case 298:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_24(uParam109, 32, 1785177548, 1785177548, 0.72f, -0.69f, 0f, 172.44f);
			uParam109->f_118 = 1;
			return 1;
		case 304:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 305:
			*uParam109 = { Param0 };
			uParam109->f_109 = -2017877118;
			uParam109->f_110 = -2017877118;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 306:
		case 307:
		case 308:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 309:
			*uParam109 = { Param0 };
			uParam109->f_109 = -982327190;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 310:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 311:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1785177548;
			uParam109->f_110 = 1785177548;
			func_25(uParam109);
			uParam109->f_118 = 1;
			return 1;
		case 312:
			*uParam109 = { Param0 };
			uParam109->f_109 = 1630799643;
			uParam109->f_110 = 1630799643;
			func_24(uParam109, 144, 474215631, -1519143300, -9.5443f, -3.191f, -0.3f, 180f);
			uParam109->f_118 = 1;
			return 1;
		case 313:
			*uParam109 = { Param0 };
			uParam109->f_109 = 2106541073;
			uParam109->f_110 = -982327190;
			func_25(uParam109);
			uParam109->f_118 = 0;
			return 1;
		case 314:
			*uParam109 = { Param0 };
			uParam109->f_109 = -1817882002;
			uParam109->f_110 = -1817882002;
			func_25(uParam109);
			uParam109->f_118 = 2;
			return 1;
	}
	*uParam109 = { Param0 };
	uParam109->f_109 = 1435919172;
	uParam109->f_110 = 1435919172;
	func_25(uParam109);
	uParam109->f_118 = 0;
	return 0;
}

void func_24(var uParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7)
{
	uParam0->f_111 = iParam1;
	uParam0->f_116 = iParam2;
	uParam0->f_117 = iParam3;
	uParam0->f_112 = { vParam4 };
	uParam0->f_115 = fParam7;
}

void func_25(var uParam0)
{
	func_24(uParam0, 145, 1435919172, 1435919172, 0f, 0f, 0f, 0f);
}

int func_26(int iParam0, var uParam1, var uParam2, char* sParam3)
{
	int iVar0;

	if (func_29(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				func_27(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = { Global_93947[iVar0 /*9*/].f_3 };
					*uParam2 = Global_93947[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_93947[0 /*9*/].f_3 };
					*uParam2 = Global_93947[0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				break;
			case 2:
				*uParam1 = { Global_96855[0 /*109*/].f_4 };
				*uParam2 = Global_96855[0 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
			case 3:
				*uParam1 = { Global_96855[1 /*109*/].f_4 };
				*uParam2 = Global_96855[1 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
			case 4:
				*uParam1 = { Global_96855[2 /*109*/].f_4 };
				*uParam2 = Global_96855[2 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
			case 5:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[0 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_111638.f_2358.f_539.f_2310[0];
				StringCopy(sParam3, "", 32);
				return 1;
			case 6:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[1 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_111638.f_2358.f_539.f_2310[1];
				StringCopy(sParam3, "", 32);
				return 1;
			case 7:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[2 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_111638.f_2358.f_539.f_2310[2];
				StringCopy(sParam3, "", 32);
				return 1;
		}
		*uParam1 = { Global_97183[iParam0 /*3*/] };
		return 1;
	}
	return 0;
}

bool func_27(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	vector3 vVar6;
	float fVar9;

	iVar0 = Global_111638.f_2358.f_539.f_4323;
	vVar1 = { Global_111638.f_2358.f_539.f_2300[iVar0 /*3*/] };
	if (func_28(vVar1, 0f, 0f, 0f, 0))
	{
		vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
	}
	*uParam0 = 5;
	fVar4 = 9999999f;
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224.f_11[iVar5], false))
		{
			vVar6 = { Global_93947[iVar5 /*9*/].f_3 };
			fVar9 = SYSTEM::VDIST(vVar1, vVar6);
			if (fVar9 > 150f)
			{
				if (fVar9 < fVar4)
				{
					*uParam0 = iVar5;
					fVar4 = fVar9;
				}
			}
		}
		iVar5++;
	}
	return *uParam0 != 5;
}

bool func_28(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_29(int iParam0, var uParam1, char* sParam2)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;

	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			func_27(&iVar3);
			if (iVar3 < 5)
			{
				*uParam1 = Global_93947[iVar3 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return true;
			}
			else
			{
				*uParam1 = Global_93947[0 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 2:
			*uParam1 = Global_96855[0 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return true;
		case 3:
			*uParam1 = Global_96855[1 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return true;
		case 4:
			*uParam1 = Global_96855[2 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return true;
		case 5:
			*uParam1 = Global_111638.f_2358.f_539.f_2310[0];
			StringCopy(sParam2, func_33(Global_111638.f_2358.f_539.f_2314[0]), 32);
			return true;
		case 6:
			*uParam1 = Global_111638.f_2358.f_539.f_2310[1];
			StringCopy(sParam2, func_33(Global_111638.f_2358.f_539.f_2314[1]), 32);
			return true;
		case 7:
			*uParam1 = Global_111638.f_2358.f_539.f_2310[2];
			StringCopy(sParam2, func_33(Global_111638.f_2358.f_539.f_2314[2]), 32);
			return true;
		case 11:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return true;
			}
			break;
		case 8:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 9:
			return func_29(8, uParam1, sParam2);
		case 10:
			return func_29(8, uParam1, sParam2);
		case 13:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 14:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 15:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 12:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 16:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 17:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 18:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 19:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 20:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 21:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 22:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 74:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 23:
			return func_29(208, uParam1, sParam2);
		case 24:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 67:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 25:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 26:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 27:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 28:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 29:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 30:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 31:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 32:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 33:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 34:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 35:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 36:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 37:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 58:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 59:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 60:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 38:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 39:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 40:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return true;
			}
			break;
		case 41:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 42:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 43:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 44:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 45:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 46:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 47:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 49:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 48:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 124:
			vVar0 = { -803.734f, 168.148f, 76.3542f };
			*uParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 50:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 51:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 52:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 66:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 53:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 54:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 55:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 56:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 57:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 61:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 62:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 63:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 68:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 69:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 64:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 65:
			if (func_32(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 70:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 71:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 72:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 73:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 234:
			*uParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 316:
			*uParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 315:
			*uParam1 = (41.654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 75:
			*uParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return true;
		case 76:
			*uParam1 = (181.8927f - 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 77:
			*uParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 78:
			*uParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 79:
			*uParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 80:
			*uParam1 = (-48.53f + 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 81:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return true;
		case 82:
			*uParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 83:
			*uParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 84:
			*uParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 85:
			*uParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 86:
			*uParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 87:
			*uParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return true;
		case 88:
			*uParam1 = 21f;
			*uParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return true;
		case 89:
			*uParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return true;
		case 90:
			*uParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return true;
		case 91:
			*uParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return true;
		case 92:
			*uParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return true;
		case 93:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return true;
		case 94:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return true;
		case 95:
			*uParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return true;
		case 96:
			*uParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return true;
		case 97:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return true;
		case 98:
			*uParam1 = (-150.6148f + 0.0095f);
			*uParam1 = (*uParam1 + 0.0004f);
			*uParam1 = (*uParam1 + 0.0015f);
			*uParam1 = (*uParam1 + 0.0002f);
			*uParam1 = (*uParam1 + -0.0009f);
			StringCopy(sParam2, "", 32);
			return true;
		case 99:
			*uParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return true;
		case 100:
			*uParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return true;
		case 101:
			*uParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return true;
		case 102:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return true;
		case 103:
			*uParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return true;
		case 104:
			*uParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return true;
		case 105:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return true;
		case 106:
			*uParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return true;
		case 107:
			*uParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return true;
		case 108:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return true;
		case 109:
			*uParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return true;
		case 110:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return true;
		case 111:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return true;
		case 112:
			*uParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return true;
		case 113:
			*uParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return true;
		case 135:
			*uParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return true;
		case 136:
			*uParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return true;
		case 137:
			*uParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return true;
		case 138:
			*uParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return true;
		case 139:
			*uParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return true;
		case 140:
			*uParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return true;
		case 141:
			*uParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return true;
		case 142:
			*uParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return true;
		case 143:
			*uParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return true;
		case 144:
			*uParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return true;
		case 145:
			*uParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return true;
		case 146:
			*uParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return true;
		case 147:
			*uParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return true;
		case 148:
			*uParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return true;
		case 149:
			*uParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return true;
		case 150:
			*uParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 114:
			*uParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return true;
		case 115:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return true;
		case 116:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return true;
		case 117:
			*uParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return true;
		case 118:
			*uParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return true;
		case 119:
			*uParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return true;
		case 120:
			*uParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return true;
		case 121:
			*uParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return true;
		case 122:
			*uParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 123:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return true;
		case 125:
			*uParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return true;
		case 126:
			*uParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return true;
		case 127:
			*uParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return true;
		case 128:
			*uParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 129:
			*uParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return true;
		case 130:
			*uParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 131:
			*uParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return true;
		case 132:
			*uParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 133:
			*uParam1 = (226.5579f - 270f);
			StringCopy(sParam2, "", 32);
			return true;
		case 134:
			*uParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return true;
		case 151:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return true;
		case 152:
			*uParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return true;
		case 153:
			*uParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return true;
		case 154:
			*uParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return true;
		case 155:
			*uParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return true;
		case 156:
			*uParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 157:
			*uParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return true;
		case 158:
			*uParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return true;
		case 159:
			*uParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return true;
		case 160:
			*uParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return true;
		case 161:
			*uParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return true;
		case 162:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return true;
		case 163:
			*uParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 164:
			*uParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return true;
		case 165:
			*uParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return true;
		case 166:
			*uParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return true;
		case 167:
			*uParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return true;
		case 168:
			if (func_30(0, 25, &uVar4, &fVar7))
			{
				*uParam1 = (fVar7 + 222.8314f);
				StringCopy(sParam2, "v_michael", 32);
				return true;
			}
			break;
		case 169:
			*uParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 170:
			*uParam1 = (-103.8158f + 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 171:
			*uParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return true;
		case 173:
			*uParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return true;
		case 172:
			*uParam1 = -30.185f;
			*uParam1 = (*uParam1 + 0.003f);
			StringCopy(sParam2, "", 32);
			return true;
		case 174:
			*uParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 176:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 177:
			*uParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 178:
			*uParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 179:
			*uParam1 = (-16.0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 180:
			*uParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 181:
			*uParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 182:
			*uParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return true;
		case 183:
			*uParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return true;
		case 184:
			*uParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return true;
		case 185:
			*uParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return true;
		case 186:
			*uParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 187:
			*uParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 188:
			*uParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 189:
			*uParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 190:
			*uParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 191:
			*uParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 196:
			*uParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 197:
			*uParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 192:
			*uParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return true;
		case 193:
			*uParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return true;
		case 194:
			*uParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return true;
		case 195:
			*uParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return true;
		case 198:
			*uParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return true;
		case 199:
			*uParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return true;
		case 200:
			*uParam1 = (310.879f - 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 201:
			*uParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return true;
		case 202:
			*uParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return true;
		case 203:
			*uParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return true;
		case 204:
			*uParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return true;
		case 205:
			*uParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return true;
		case 206:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return true;
		case 207:
			*uParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return true;
		case 208:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return true;
		case 209:
			*uParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return true;
		case 210:
			*uParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return true;
		case 211:
			*uParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return true;
		case 212:
			*uParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return true;
		case 213:
			*uParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return true;
		case 214:
			*uParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return true;
		case 215:
			*uParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return true;
		case 216:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return true;
		case 217:
			*uParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return true;
		case 221:
			*uParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return true;
		case 222:
			*uParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return true;
		case 223:
			*uParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return true;
		case 224:
			return func_29(222, uParam1, sParam2);
		case 226:
			*uParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return true;
		case 227:
			*uParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return true;
		case 228:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return true;
		case 229:
			*uParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return true;
		case 230:
			*uParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return true;
		case 218:
			*uParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return true;
		case 219:
			*uParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return true;
		case 220:
			*uParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return true;
		case 225:
			*uParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return true;
		case 231:
			*uParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return true;
		case 232:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return true;
		case 233:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return true;
		case 235:
			*uParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		case 236:
			*uParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		case 237:
			*uParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return true;
		case 238:
			*uParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return true;
		case 239:
			*uParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return true;
		case 240:
			*uParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return true;
		case 241:
			*uParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return true;
		case 242:
			*uParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return true;
		case 245:
			*uParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 243:
			*uParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return true;
		case 244:
			*uParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return true;
		case 246:
			*uParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return true;
		case 247:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return true;
		case 248:
			*uParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return true;
		case 249:
			*uParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 250:
			*uParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return true;
		case 251:
			*uParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return true;
		case 252:
			*uParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return true;
		case 253:
			*uParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return true;
		case 254:
			*uParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return true;
		case 255:
			*uParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return true;
		case 264:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return true;
		case 265:
			*uParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return true;
		case 266:
			*uParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return true;
		case 267:
			*uParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return true;
		case 268:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return true;
		case 269:
			*uParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return true;
		case 270:
			*uParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return true;
		case 271:
			*uParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return true;
		case 272:
			*uParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return true;
		case 273:
			*uParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return true;
		case 274:
			*uParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return true;
		case 275:
			*uParam1 = (277.613f - 360f);
			StringCopy(sParam2, "", 32);
			return true;
		case 276:
			*uParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return true;
		case 277:
			*uParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return true;
		case 278:
			*uParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return true;
		case 279:
			*uParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return true;
		case 280:
			*uParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return true;
		case 281:
			*uParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return true;
		case 282:
			*uParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return true;
		case 283:
			*uParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return true;
		case 284:
			*uParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return true;
		case 285:
			*uParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return true;
		case 256:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return true;
		case 257:
			*uParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return true;
		case 258:
			*uParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return true;
		case 259:
			*uParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return true;
		case 260:
			*uParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return true;
		case 261:
			*uParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return true;
		case 286:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return true;
		case 287:
			*uParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return true;
		case 288:
			*uParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return true;
		case 262:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return true;
		case 263:
			*uParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return true;
		case 289:
			*uParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return true;
		case 290:
			*uParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		case 291:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 292:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 293:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 294:
			return func_29(293, uParam1, sParam2);
		case 295:
			return func_29(292, uParam1, sParam2);
		case 299:
			*uParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 300:
			return func_29(303, uParam1, sParam2);
		case 301:
			return func_29(303, uParam1, sParam2);
		case 302:
			return func_29(303, uParam1, sParam2);
		case 303:
			*uParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 296:
			*uParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 297:
			*uParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 298:
			*uParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 304:
			*uParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return true;
		case 305:
			*uParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return true;
		case 306:
			vVar8 = { -7.4998f, 7.4995f, -0.5258f };
			*uParam1 = UNK_0xE7D606C557C86100(-vVar8.x, -vVar8.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 307:
			vVar11 = { 10.6345f, 0.7246f, 1.2508f };
			*uParam1 = UNK_0xE7D606C557C86100(-vVar11.x, -vVar11.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 308:
			vVar14 = { -3.4271f, -13.6787f, -1.4107f };
			*uParam1 = UNK_0xE7D606C557C86100(-vVar14.x, -vVar14.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 309:
			vVar17 = { -19.6582f, 7.896f, 0.1334f };
			*uParam1 = UNK_0xE7D606C557C86100(-vVar17.x, -vVar17.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 310:
			*uParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return true;
		case 311:
			*uParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 312:
			*uParam1 = ((103.2841f + 88.7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return true;
		case 313:
			*uParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 314:
			*uParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return true;
	}
	*uParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return false;
}

bool func_30(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*uParam3 = -144f;
					return true;
				case 1:
					if (func_30(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*uParam3 = (*uParam3 + (456.7661f - 360f));
						return true;
					}
					break;
				case 2:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((16f - 222.8314f) + 360f);
					return true;
			}
			return false;
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*uParam3 = 163.0716f;
					return true;
				case 1:
					if (func_30(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*uParam3 = (*uParam3 + 0f);
						return true;
					}
					break;
				case 2:
					if (func_30(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*uParam3 = (*uParam3 + 0f);
						return true;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = (((16f + 90f) - 222.8314f) + 360f);
					return true;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6.8878f, -5.5247f, 1.5228f };
					*uParam3 = 160f;
					return true;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*uParam3 = 255f;
					return true;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*uParam3 = 252f;
					return true;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*uParam3 = 273f;
					return true;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_30(0, 5, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return true;
					}
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12.552f, 4.373f, (4.6f + 1f) };
					*uParam3 = 318f;
					return true;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*uParam3 = 306f;
					return true;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*uParam3 = 0f;
					return true;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*uParam3 = 330f;
					return true;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*uParam3 = 272.857f;
					return true;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*uParam3 = 158f;
					return true;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*uParam3 = 339f;
					return true;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*uParam3 = 147f;
					return true;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*uParam3 = 159.3182f;
					return true;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*uParam3 = 333f;
					return true;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, UNK_0x79833B02DBD2A244(-0.5f, 0.5f), UNK_0x79833B02DBD2A244(-0.5f, 0.5f)) };
					*uParam3 = (306f + UNK_0x79833B02DBD2A244(10f, 10f));
					return true;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0.95f, 0.95f, 0.95f) };
					*uParam3 = UNK_0xE7D606C557C86100(*uParam2, uParam2->f_1);
					return true;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((26.087f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((13f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-28.7112f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*uParam3 = 319f;
					return true;
			}
			break;
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*uParam3 = 78f;
					return true;
			}
			break;
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*uParam3 = 304.1026f;
					return true;
			}
			break;
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*uParam3 = 180f;
					return true;
			}
			break;
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_30(1, 32, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return true;
					}
					break;
			}
			break;
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.505f, -10.9717f, 4.6019f };
					*uParam3 = 228f;
					return true;
			}
			break;
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
					*uParam3 = 310.6696f;
					return true;
			}
			break;
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*uParam3 = 102.156f;
					return true;
			}
			break;
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*uParam3 = 264f;
					return true;
			}
			break;
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.352f, -3.356f, 5.7338f };
					*uParam3 = 338f;
					return true;
			}
			break;
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
					*uParam3 = 262.789f;
					return true;
			}
			break;
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.76f, -5.95f, 4.59f };
					*uParam3 = 177.6766f;
					return true;
			}
			break;
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
					*uParam3 = 159.156f;
					return true;
			}
			break;
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1.228f, 4.044f, 0.7665f };
					*uParam3 = 165f;
					return true;
			}
			break;
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
					*uParam3 = 157.0716f;
					return true;
			}
			break;
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.161f, -7.562f, 2.17f };
					*uParam3 = 78f;
					return true;
			}
			break;
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
					*uParam3 = 144.6939f;
					return true;
			}
			break;
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
					*uParam3 = 257.4583f;
					return true;
			}
			break;
		case 46:
			return func_30(iParam0, 26, uParam2, uParam3);
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8.4451f, 3.1568f, 1.47f };
					*uParam3 = 159f;
					return true;
			}
			break;
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
					*uParam3 = 88.5686f;
					return true;
			}
			break;
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					return false;
			}
			break;
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 21.7f, 9f, 1.7029f };
					*uParam3 = 0f;
					return true;
			}
			break;
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1.3278f, 1.534f, 0f };
					*uParam3 = 159.72f;
					return true;
			}
			break;
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
					*uParam3 = 338.5f;
					return true;
			}
			break;
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15.2374f, 8.723f, 1.4495f };
					*uParam3 = 205.677f;
					return true;
			}
			break;
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 28.7f, 8.8241f, 0.6f };
					*uParam3 = 39f;
					return true;
			}
			break;
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) };
					*uParam3 = 94.2086f;
					return true;
			}
			break;
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
					*uParam3 = 336f;
					return true;
			}
			break;
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.84f };
					*uParam3 = 311.4f;
					return true;
			}
			break;
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
					*uParam3 = 306.6f;
					return true;
			}
			break;
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 5.8092f, 5.7965f, 3.85f };
					*uParam3 = 337.4f;
					return true;
			}
			break;
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
					*uParam3 = 277.317f;
					return true;
			}
			break;
		case 60:
			if (func_30(iParam0, 59, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, UNK_0x79833B02DBD2A244(-1f, 1f), UNK_0x79833B02DBD2A244(-1f, 1f)) };
				*uParam3 = (*uParam3 + UNK_0x79833B02DBD2A244(-10f, 10f));
				return true;
			}
			break;
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -2.235f, 1.725f, 4.5877f };
					*uParam3 = 172.714f;
					return true;
			}
			break;
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-158f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-164f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7.394f, 5.368f, 1.451f };
					*uParam3 = 235.0656f;
					return true;
			}
			break;
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 1.0704f, -1.4624f, 0.999f };
					*uParam3 = 157.44f;
					return true;
			}
			break;
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 14.8186f, 6.8253f, 0.5f };
					*uParam3 = 87.3368f;
					return true;
			}
			break;
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 13.6486f, 6.2253f, 0.45f };
					*uParam3 = 262.32f;
					return true;
			}
			break;
		case 77:
			if (func_30(iParam0, 47, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				return true;
			}
			break;
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16.319f, -1.375f, 0.6817f };
					*uParam3 = 334.126f;
					return true;
			}
			break;
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0.39f, 3.27f, 0f };
					*uParam3 = 154.126f;
					return true;
			}
			break;
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.0213f, 6.9622f, 1.39f };
					*uParam3 = 142.889f;
					return true;
			}
			break;
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.128f, 6.842f, 0.4524f };
					*uParam3 = 54f;
					return true;
			}
			break;
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9019f, -23.8349f, -2.1f };
					*uParam3 = 339f;
					return true;
			}
			break;
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9937f, -24.9005f, -2.18f };
					*uParam3 = 314.2132f;
					return true;
			}
			break;
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
					*uParam3 = 147f;
					return true;
			}
			break;
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27.1728f, -3.75f, -1.626f };
					*uParam3 = (147f + 90f);
					return true;
			}
			break;
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14.7722f, -10.9336f, -0.537f };
					*uParam3 = 110.8505f;
					return true;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17.2536f, 2.451f, -0.6f };
					*uParam3 = 0f;
					return true;
			}
			break;
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23.9716f, -20.3533f, -3.18f };
					*uParam3 = 324f;
					return true;
			}
			break;
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
					*uParam3 = 33f;
					return true;
			}
			break;
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
					*uParam3 = 69f;
					return true;
			}
			break;
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 2.983f, -4.094f, 0.4629f };
					*uParam3 = 33f;
					return true;
			}
			break;
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
					*uParam3 = 71f;
					return true;
			}
			break;
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30.7131f, -1454.676f, -42.2059f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*uParam3 = (84.7009f - 188.5817f);
					return true;
				case 7:
					*uParam2 = { Vector(30.6803f, -1455.848f, -40.7478f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*uParam3 = (90.6417f - 188.5817f);
					return true;
			}
			break;
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
					*uParam3 = 354f;
					return true;
			}
			break;
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
					*uParam3 = 61.7525f;
					return true;
			}
			break;
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
					*uParam3 = 119.008f;
					return true;
			}
			break;
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3.467f, 0.074f, 0f };
					*uParam3 = 30f;
					return true;
			}
			break;
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.1014f, -5.4089f, -0.013f };
					*uParam3 = 123.753f;
					return true;
			}
			break;
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.802f, -6.3295f, -0.01f };
					*uParam3 = 42.757f;
					return true;
			}
			break;
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2.156f, -4.9564f, 1.4886f };
					*uParam3 = 136.309f;
					return true;
			}
			break;
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7.2656f, 3.022f, -0.9061f };
					*uParam3 = 92.8891f;
					return true;
			}
			break;
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
					*uParam3 = 115.77f;
					return true;
			}
			break;
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
					*uParam3 = 114.3391f;
					return true;
			}
			break;
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
					*uParam3 = 252.2687f;
					return true;
			}
			break;
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 2.334f, 1.6889f, 0.586f };
					*uParam3 = 109f;
					return true;
			}
			Jump @7970; //curOff = 6341
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
					*uParam3 = 137.1861f;
					return true;
			}
			Jump @7970; //curOff = 6391
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3.887f, -0.166f, 0f };
					*uParam3 = 30f;
					return true;
			}
			Jump @7970; //curOff = 6437
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3.5179f, 9.1355f, -1f };
					*uParam3 = 141.79f;
					return true;
			}
			Jump @7970; //curOff = 6483
			switch (iParam0)
			{
				case 9:
					*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
					*uParam3 = 121.6591f;
					return true;
			}
			Jump @7970; //curOff = 6537
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
					*uParam3 = (170.2796f - 180f);
					return true;
			}
			Jump @7970; //curOff = 6593
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.077f, -5.1446f, 0.9904f };
					*uParam3 = 107.1399f;
					return true;
			}
			Jump @7970; //curOff = 6643
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12.903f, -6.623f, -0.0406f };
					*uParam3 = 63.48f;
					return true;
			}
			Jump @7970; //curOff = 6693
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.5514f, 5.393f, -0.0998f };
					*uParam3 = 327.483f;
					return true;
			}
			Jump @7970; //curOff = 6743
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0.9794f, -0.3043f, 0f };
					*uParam3 = 179.7612f;
					return true;
			}
			Jump @7970; //curOff = 6789
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11.9759f, 1f, -1.0728f };
					*uParam3 = 238.9422f;
					return true;
			}
			Jump @7970; //curOff = 6835
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = { -0.576f, 1.671f, 0.601f };
					*uParam3 = 296f;
					return true;
			}
			Jump @7970; //curOff = 6891
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
					*uParam3 = 121.0556f;
					return true;
			}
			Jump @7970; //curOff = 6941
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0.18f, -4.173f, 0.9981f };
					*uParam3 = 216.61f;
					return true;
			}
			Jump @7970; //curOff = 6991
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.5937f, 0.3521f, 1f };
					*uParam3 = 119.4f;
					return true;
			}
			Jump @7970; //curOff = 7037
			switch (iParam0)
			{
				case 13:
					if (Global_111638.f_18528[2] == 299)
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (34.661f - 90.6729f);
						return true;
					}
					else if (((Global_111638.f_18528[2] == 300 || Global_111638.f_18528[2] == 301) || Global_111638.f_18528[2] == 302) || Global_111638.f_18528[2] == 303)
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (32f - 90.6729f);
						return true;
					}
					if (func_31())
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (34.661f - 90.6729f);
						return true;
					}
					else
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (32f - 90.6729f);
						return true;
					}
					break;
			}
			Jump @7970; //curOff = 7374
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.571f) };
					*uParam3 = (102f - 90.6729f);
					return true;
			}
			Jump @7970; //curOff = 7446
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2.8352f, 0.0552f, 0f };
					*uParam3 = 334.44f;
					return true;
			}
			Jump @7970; //curOff = 7492
			switch (iParam0)
			{
				case 13:
					if (func_30(iParam0, 130, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, UNK_0x79833B02DBD2A244(-1f, 1f), UNK_0x79833B02DBD2A244(-1f, 1f)) };
						*uParam3 = (*uParam3 + UNK_0x79833B02DBD2A244(-10f, 10f));
						return true;
					}
					break;
			}
			Jump @7970; //curOff = 7573
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -7.213f, -1.4536f, 0.9981f };
					*uParam3 = 42.6f;
					return true;
			}
			Jump @7970; //curOff = 7623
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector((9.6327f + 1f), -1518.736f, -1148.466f) - Vector(9.6346f, -1517.601f, -1152.571f) };
					*uParam3 = UNK_0x79833B02DBD2A244(0f, 360f);
					return true;
			}
			Jump @7970; //curOff = 7696
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5.24f, 6.217f, 0.998f };
					*uParam3 = 315.72f;
					return true;
			}
			Jump @7970; //curOff = 7746
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
					*uParam3 = 296.683f;
					return true;
			}
			Jump @7970; //curOff = 7796
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3.968f, -1.04f, 0f };
					*uParam3 = 214.92f;
					return true;
				case 14:
					*uParam2 = { 4.617f, -1.1314f, 0f };
					*uParam3 = 39.4085f;
					return true;
			}
			Jump @7970; //curOff = 7878
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return false;
			Jump @7970; //curOff = 7896
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return false;
			Jump @7970; //curOff = 7914
			*uParam2 = { UNK_0x79833B02DBD2A244(-10f, 10f), UNK_0x79833B02DBD2A244(-10f, 10f), 0f };
			*uParam3 = UNK_0x79833B02DBD2A244(0f, 360f);
			return false;
			*uParam2 = { UNK_0x79833B02DBD2A244(-10f, 10f), UNK_0x79833B02DBD2A244(-10f, 10f), 0f };
			*uParam3 = UNK_0x79833B02DBD2A244(0f, 360f);
			return false;
		}

bool func_31()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_32(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*uParam2 = 111f;
			return true;
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*uParam2 = 194.1887f;
			return true;
		case 9:
			return func_32(8, uParam1, uParam2);
		case 10:
			return func_32(8, uParam1, uParam2);
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*uParam2 = 201.6328f;
			return true;
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*uParam2 = 350.0509f;
			return true;
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*uParam2 = 0.7896f;
			return true;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*uParam2 = 42f;
			return true;
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*uParam2 = -129f;
			return true;
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*uParam2 = 267.1409f;
			return true;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*uParam2 = 340.0526f;
			return true;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*uParam2 = 22.9566f;
			return true;
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*uParam2 = 152.8118f;
			return true;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*uParam2 = (250.4535f - 360f);
			return true;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*uParam2 = 119.603f;
			return true;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*uParam2 = 168f;
			return true;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*uParam2 = 51.7279f;
			return true;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*uParam2 = 151.2504f;
			return true;
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*uParam2 = 156.8827f;
			return true;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*uParam2 = 7.2736f;
			return true;
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*uParam2 = 97.2736f;
			return true;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*uParam2 = 4f;
			return true;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*uParam2 = 162.693f;
			return true;
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*uParam2 = 128.9946f;
			return true;
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*uParam2 = 32.2721f;
			return true;
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*uParam2 = 192.8091f;
			return true;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return true;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return true;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*uParam2 = -3.7534f;
			return true;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*uParam2 = 90f;
			return true;
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*uParam2 = 355.326f;
			return true;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*uParam2 = 334.1068f;
			return true;
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*uParam2 = 46.8853f;
			return true;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*uParam2 = 165.9421f;
			return true;
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*uParam2 = 221.228f;
			return true;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*uParam2 = (42f + 180f);
			return true;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*uParam2 = 98.9764f;
			return true;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*uParam2 = 220.9554f;
			return true;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*uParam2 = 83.9922f;
			return true;
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*uParam2 = -64.1366f;
			return true;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*uParam2 = 127.7547f;
			return true;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*uParam2 = -63f;
			return true;
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*uParam2 = 90.0339f;
			return true;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*uParam2 = 84.6231f;
			return true;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*uParam2 = 99.6049f;
			return true;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*uParam2 = 120f;
			return true;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*uParam2 = 211.8223f;
			return true;
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*uParam2 = 136.0867f;
			return true;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*uParam2 = 27.0648f;
			return true;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*uParam2 = 27.0648f;
			return true;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		default:
			break;
	}
	return false;
}

char* func_33(int iParam0)
{
	switch (iParam0)
	{
		case joaat("V_CHOPSHOP"):
			return "v_chopshop";
		case joaat("V_FRANKLINS"):
			return "v_franklins";
		case joaat("V_FRANKLINSHOUSE"):
			return "v_franklinshouse";
		case joaat("V_METHLAB"):
			return "v_methlab";
		case joaat("V_MICHAEL"):
			return "v_michael";
		case joaat("V_STRIP3"):
			return "v_strip3";
		case joaat("V_TRAILER"):
			return "v_trailer";
		case joaat("V_TREVORS"):
			return "v_Trevors";
	}
	return "";
}

void func_34()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_77)
	{
		if (iLocal_77[iVar0] != 0)
		{
			UNK_0x71199B01895C6202(iLocal_77[iVar0]);
		}
		iVar0++;
	}
	UNK_0x21387C9EECC2B220(false);
	UNK_0x10FAF14A60A0DBE1();
}

