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
	bool bLocal_29 = false;
	int iLocal_30 = 0;
	float fLocal_31 = 0f;
	vector3 vLocal_32 = { 0f, 0f, 0f };
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	bool bLocal_37 = false;
	int iLocal_38[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_45 = false;
	bool bLocal_46 = false;
	int iLocal_47 = 0;
	bool bLocal_48 = false;
	bool bLocal_49 = false;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	int iLocal_53 = 0;
	bool bLocal_54 = false;
	vector3 vLocal_55 = { 0f, 0f, 0f };
	bool bLocal_58 = false;
	bool bLocal_59 = false;
	var uLocal_60 = 0;
	var uLocal_61[5] = { 0, 0, 0, 0, 0 };
	var uLocal_67[5] = { 0, 0, 0, 0, 0 };
	var uLocal_73 = 5;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	bool bLocal_80 = false;
	int iLocal_81 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;

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
	fLocal_31 = 1E+07f;
	vLocal_32 = { 2134.06f, 4780.69f, 41.664f };
	iLocal_35 = -1;
	vLocal_50 = { 2136.133f, 4780.563f, 39.9702f };
	vLocal_55 = { 2149.737f, 4798.472f, 40.1071f };
	bLocal_58 = 55.4847f;
	if (UNK_0x2EBF608FFE6CA406(82))
	{
		func_189();
	}
	func_188(17);
	func_187();
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (true)
	{
		if (func_186() == 309)
		{
			bLocal_37 = true;
		}
		else
		{
			bLocal_37 = false;
		}
		if (func_173())
		{
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				fLocal_31 = SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_32);
			}
			func_171(&iVar1);
			func_31(&iVar2);
			if (iLocal_47 > 3)
			{
				if (fLocal_31 < 600f)
				{
					if (func_28(0) == 0 && (UNK_0x1C0640BA9A7327B3() - iLocal_81) > 2000)
					{
						iLocal_81 = UNK_0x1C0640BA9A7327B3();
						func_3();
					}
				}
			}
			iVar0 = 0;
		}
		else
		{
			if (!bLocal_46)
			{
				if (func_2(105))
				{
					func_1(105, 0, 0);
					Global_111638.f_19978.f_14 = 0;
				}
			}
			else
			{
				Global_111638.f_19978.f_14 = 0;
			}
			if (!bLocal_46)
			{
				if (func_2(106))
				{
					func_1(106, 0, 0);
					Global_111638.f_19978.f_13 = 0;
				}
			}
			else
			{
				Global_111638.f_19978.f_13 = 0;
			}
			iVar0 = 1000;
		}
		SYSTEM::WAIT(iVar0);
	}
}

void func_1(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, false))
	{
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 18);
		if (Global_31143 == 1)
		{
			Global_31144 = 1;
		}
		Global_31143 = 1;
	}
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), false);
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 15);
		UNK_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), false);
		UNK_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), 15);
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, false))
	{
		if (UNK_0xE4EDC4B0E92C078B(Global_31146[iVar0 /*23*/].f_19))
		{
			UNK_0xCD816869CA451988(1);
			UNK_0x142CC44DB769B57E(&(Global_31146[iVar0 /*23*/].f_19));
			UNK_0xCD816869CA451988(0);
		}
	}
}

bool func_2(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	return UNK_0xE4EDC4B0E92C078B(Global_31146[iVar0 /*23*/].f_19);
}

void func_3()
{
	func_4(&(Global_102203.f_2890), &Global_102203, 0, 1, 1, 0);
}

void func_4(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;

	if (bParam2 == 0)
	{
		bParam2 = UNK_0x16F2683693E537C9();
	}
	if (UNK_0xC844350D5D58C99A(bParam2))
	{
		uParam1->f_5 = func_27(bParam2);
	}
	if (func_19(bParam2, &bVar0, iParam3, iParam5))
	{
		func_5(uParam0, uParam1, bVar0, iParam4);
	}
	else if (UNK_0xC844350D5D58C99A(bVar0))
	{
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0x4906F8A34E9F4814(bVar0, joaat("SKYLIFT")) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bVar0, 0))
			{
				func_5(uParam0, uParam1, bVar0, iParam4);
			}
		}
	}
}

int func_5(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (UNK_0xDF1306B443CD3D15(bParam2, 0))
	{
		func_7(uParam0, bParam2, iParam3);
		uParam1->f_4 = bParam2;
		if (func_6(bParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

bool func_6(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_98744.f_22[iVar0] == bParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_7(var uParam0, bool bParam1, int iParam2)
{
	func_14(bParam1, &(uParam0->f_12));
	uParam0->f_7 = func_10(bParam1, 145, 0);
	uParam0->f_11 = func_9(bParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_8(bParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
		uParam0->f_6 = UNK_0xD9522BA9E27E1349(bParam1);
		uParam0->f_3 = { UNK_0x56E9E0FD5ACCD35D(bParam1) };
		if (UNK_0x3D1053F9EB43B7AD(bParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_76346 == bParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_8(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_484[iVar0]))
		{
			if (bParam0 == Global_75441.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_9(bool bParam0)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 145;
	}
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == bParam0)
			{
				return Global_96085[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_10(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == bParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_96085[iVar0])
				{
					if (iParam2 == 0 || UNK_0x134B62B726CEC8E6(bParam0) == func_11(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_11(int iParam0, int iParam1)
{
	struct<82> Var0;

	if (func_13(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_12(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_12(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("TAILGATER");
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = joaat("PREMIER");
			}
			switch (iVar0)
			{
				case joaat("TAILGATER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				case joaat("PREMIER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		case 2:
			iVar0 = joaat("BODHI2");
			switch (iVar0)
			{
				case joaat("BODHI2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("BUFFALO2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("BAGGER");
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = joaat("BAGGER");
			}
			else
			{
				iVar0 = joaat("BUFFALO2");
			}
			switch (iVar0)
			{
				case joaat("BAGGER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				case joaat("BUFFALO2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		default:
			break;
	}
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

void func_14(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_18(uParam1);
		uParam1->f_66 = UNK_0x134B62B726CEC8E6(bParam0);
		StringCopy(&(uParam1->f_1), UNK_0x7888A5D2621AAF2D(bParam0), 16);
		*uParam1 = UNK_0x4EB64970EC291A00(bParam0);
		UNK_0x9412F17E127D9759(bParam0, &(uParam1->f_5), &(uParam1->f_6));
		UNK_0xD00EA977553939A7(bParam0, &(uParam1->f_7), &(uParam1->f_8));
		UNK_0x4D842A28A29F18F6(bParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = UNK_0x214BEAD64D777E8F(bParam0);
		uParam1->f_67 = UNK_0xF22DC2D0CA24A151(bParam0);
		uParam1->f_69 = UNK_0x8EF9B42D5496EC5A(bParam0);
		uParam1->f_70 = UNK_0x9C7B8DC16535B879(bParam0);
		UNK_0xCCBAB59EE36FFC71(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		UNK_0xE04A80C505823410(bParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (UNK_0x812A93B166D97C60(bParam0, 2))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 28);
		}
		if (UNK_0x812A93B166D97C60(bParam0, 3))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 29);
		}
		if (UNK_0x812A93B166D97C60(bParam0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 30);
		}
		if (UNK_0x812A93B166D97C60(bParam0, 1))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_17(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (UNK_0x587993B327460A82(bParam0, 0))
		{
			uParam1->f_68 = UNK_0x74A7D92E3874B5C7(bParam0);
		}
		if (UNK_0xC41A9202669A24C4(uParam1->f_66))
		{
			if (UNK_0x20D5F312838C1136(bParam0))
			{
				switch (UNK_0x38E830634323E0D5(bParam0))
				{
					case 3:
					case 0:
						UNK_0x0674E58A79778E99(&(uParam1->f_77), 23);
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 22);
						break;
					case 4:
					case 1:
						UNK_0x0674E58A79778E99(&(uParam1->f_77), 23);
						UNK_0x0674E58A79778E99(&(uParam1->f_77), 22);
						break;
					case 5:
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 23);
			}
		}
		if (!UNK_0x616632A7E7824A9A(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 9);
		}
		if (UNK_0xF566283DA9533594(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 10);
		}
		if (UNK_0xC97B0E5C744424FD(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 13);
			UNK_0x3139754D4D5C3AC3(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (UNK_0xE23BB5249C074C85(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 12);
		}
		func_16(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_15(iVar0 + 1));
			}
			iVar0++;
		}
		if (UNK_0x92C2290AA46758D3(bParam0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 11);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(uParam1->f_77), 11);
		}
		if (UNK_0x30F813723591D02E(bParam0, "IgnoredByQuickSave") && UNK_0xB2C7CF65CF9B897C(bParam0, "IgnoredByQuickSave"))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 27);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(uParam1->f_77), 27);
		}
	}
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 24;
		case 11:
			return 25;
		case 12:
			return 26;
	}
	return 0;
}

int func_16(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (!UNK_0xDF1306B443CD3D15(*bParam0, 0))
	{
		return 0;
	}
	if (UNK_0x40B3F576B41FA183(*bParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (UNK_0xB97ED2A4B56844DE(*bParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (UNK_0xB97ED2A4B56844DE(*bParam0, iVar1))
			{
				switch (UNK_0x3C076D736FE6B7A6(*bParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = UNK_0x0ECB5CA5140957AD(*bParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = UNK_0x3A5601978F787E51(*bParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = UNK_0x3A5601978F787E51(*bParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_17(int iParam0)
{
	switch (iParam0)
	{
		case joaat("GRANGER"):
		case joaat("VISIONE"):
			return true;
		default:
			break;
	}
	return false;
}

void func_18(var uParam0)
{
	int iVar0;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

bool func_19(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			if (bParam0 == UNK_0x16F2683693E537C9())
			{
				*bParam1 = UNK_0x728870EB733D12A1();
			}
			else
			{
				*bParam1 = UNK_0x6937EA2286828455(bParam0, 1);
			}
			if (UNK_0xC844350D5D58C99A(*bParam1))
			{
				if (UNK_0xDF1306B443CD3D15(*bParam1, 0))
				{
					if (iParam2 == 0 || UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(*bParam1, true), UNK_0x68F4C0EC296D3901(bParam0, true), 1) < 100f)
					{
						if (UNK_0x4906F8A34E9F4814(*bParam1, joaat("TAXI")))
						{
							if (UNK_0xA30B8362589C124A(*bParam1, -1, 0) != bParam0 && UNK_0xA30B8362589C124A(*bParam1, -1, 0) != 0)
							{
								return false;
							}
						}
						if (func_20(*bParam1, func_22(), 1))
						{
							bVar0 = UNK_0xBB0808A181D4745C();
							if (!UNK_0x7F8A39872A07D2CE(bVar0, "save_anywhere"))
							{
								return false;
							}
							else if (!UNK_0x405E212DDE472467(bParam0, 1))
							{
								return false;
							}
						}
						if (iParam3 == 1)
						{
							if (UNK_0x30F813723591D02E(*bParam1, "IgnoredByQuickSave"))
							{
								if (UNK_0xB2C7CF65CF9B897C(*bParam1, "IgnoredByQuickSave"))
								{
									return false;
								}
							}
						}
						else if (UNK_0x4906F8A34E9F4814(*bParam1, joaat("BLIMP")))
						{
							return false;
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_20(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_21(iParam1, iVar0, &uVar1, &iVar9))
	{
		if (!bParam2 || UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iVar9], false))
		{
			if (UNK_0x5B6BEDD9A86023B7(&uVar1, bParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_21(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*iParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 1;
				return true;
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*iParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*iParam3 = 6;
				return true;
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*iParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*iParam3 = 4;
				return true;
			}
			break;
	}
	return false;
}

int func_22()
{
	func_23();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_23()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_25(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_27(UNK_0x16F2683693E537C9());
			if (func_13(iVar0) && (!func_24(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_13(Global_111638.f_2358.f_539.f_4321))
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

bool func_24(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_25(int iParam0)
{
	if (func_13(iParam0))
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

int func_27(bool bParam0)
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

bool func_28(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_29(iParam0))
	{
		return false;
	}
	return true;
}

bool func_29(int iParam0)
{
	return func_30(iParam0, Global_41431);
}

int func_30(int iParam0, int iParam1)
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

void func_31(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<91> Var4;
	bool bVar101;

	bVar0 = false;
	if (iLocal_53 != 9)
	{
		if (!Global_111638.f_19978.f_13)
		{
			if (Global_111638.f_19978.f_1 == 0 && Global_111638.f_19978.f_2 == 0)
			{
				if (!func_170(Global_111638.f_19978, 32))
				{
					func_167("MG_TRAF_AVAIL", 0, 0, -1, 10000, 7, 0, 0, 0);
					func_165(&(Global_111638.f_19978), 32);
				}
			}
			func_1(106, 1, 0);
			Global_111638.f_19978.f_13 = 1;
			bVar0 = true;
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		func_1(106, 0, 0);
		Global_111638.f_19978.f_13 = 0;
	}
	if (iLocal_53 != 1 && iLocal_53 != 8)
	{
		if (func_164() && !*iParam0)
		{
			func_163(0);
			iLocal_53 = 1;
		}
	}
	switch (iLocal_53)
	{
		case 0:
			iLocal_53 = 1;
			break;
		case 1:
			if (!func_164())
			{
				if (fLocal_31 < 50625f)
				{
					iLocal_53 = 2;
				}
				else if (bLocal_37)
				{
					iLocal_53 = 2;
				}
			}
			break;
		case 2:
			UNK_0x523BCC9DC80CD82F(joaat("DUNE"));
			iLocal_53 = 3;
			break;
		case 3:
			if (UNK_0xB87F6CF6E5628C67(joaat("DUNE")))
			{
				UNK_0x28F5E4DA506AC0CA(vLocal_55, 4f, 0, 0, 0, 0, false, 0);
				if (UNK_0xC844350D5D58C99A(bLocal_54))
				{
					UNK_0xA954465BA6FDEFE2(&bLocal_54);
				}
				bLocal_54 = UNK_0x122AAB0B1D6F55AD(func_162(), vLocal_55, bLocal_58, true, true, false);
				UNK_0x3E5CE368CD085FFA(bLocal_54, 0);
				UNK_0x71199B01895C6202(func_162());
				if (UNK_0xC844350D5D58C99A(bLocal_54))
				{
					if (UNK_0x1923A0BC6E2B14D7(bLocal_54, true))
					{
						UNK_0xD3421E391490133B(bLocal_54, true, true);
					}
					if (UNK_0x1923A0BC6E2B14D7(bLocal_54, 2))
					{
						UNK_0xD3421E391490133B(bLocal_54, 2, false);
					}
					if (UNK_0x1923A0BC6E2B14D7(bLocal_54, 3))
					{
						UNK_0xD3421E391490133B(bLocal_54, 3, false);
					}
					UNK_0xC002508A277213DE(bLocal_54, false, false);
				}
				iLocal_53 = 4;
			}
			break;
		case 5:
			if (fLocal_31 >= 50625f && !*iParam0)
			{
				func_163(0);
				iLocal_53 = 1;
				return;
			}
			break;
		case 4:
			func_161();
			if (!bLocal_37)
			{
				if (fLocal_31 >= 50625f && !*iParam0)
				{
					func_163(0);
					iLocal_53 = 1;
					return;
				}
			}
			if (!bVar0 && !*iParam0)
			{
				if (!bVar0)
				{
				}
				if (!*iParam0)
				{
				}
				if (!bLocal_59)
				{
					if (UNK_0x405E212DDE472467(bLocal_28, 0))
					{
						iVar1 = UNK_0x3C66DF04E6EA3587(bLocal_28);
						if (iVar1 == bLocal_54)
						{
							bLocal_59 = true;
							UNK_0x046C362CF15F1935(&bLocal_54);
							iLocal_53 = 9;
						}
					}
				}
				return;
			}
			if (*iParam0)
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0x437347B10A200C4B(bLocal_54, 0))
				{
					UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), bLocal_54, -1);
				}
			}
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0x437347B10A200C4B(bLocal_54, 0))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_54, 1))
				{
					func_160();
				}
			}
			if (!UNK_0x437347B10A200C4B(bLocal_54, 0) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					iVar2 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
					if (iVar2 == bLocal_54)
					{
						if (SYSTEM::VDIST2(vLocal_55, UNK_0x68F4C0EC296D3901(bLocal_28, true)) < 100f)
						{
							UNK_0x92DCE5C81176D2B4("Traffick_Ground");
							if (UNK_0xC844350D5D58C99A(bLocal_29) && !UNK_0x437347B10A200C4B(bLocal_29, 0))
							{
								if (UNK_0x134B62B726CEC8E6(bLocal_29) != joaat("DUNE") && UNK_0x134B62B726CEC8E6(bLocal_29) != joaat("CUBAN800"))
								{
									func_133(bLocal_29, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 24, 0);
								}
								else if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
								{
									UNK_0x7EA00EB725DAA91D(bLocal_29);
								}
							}
							iLocal_53 = 6;
						}
					}
				}
			}
			break;
		case 6:
			if (UNK_0x1FBF08B001C4788A("Traffick_Ground"))
			{
				iVar3 = 0;
				if (*iParam0)
				{
					iVar3 = 1;
				}
				else
				{
					iVar3 = func_131(&iLocal_35, 6, 9, 0, 0);
					bLocal_45 = true;
				}
				if (iVar3 == 1)
				{
					if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
					{
						UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
					}
					if (!*iParam0)
					{
						func_82("Traffick_Ground", 0);
					}
					Var4 = -1;
					Var4.f_8 = 4;
					Var4.f_13 = 2;
					Var4.f_16 = 4;
					Var4.f_29 = 4;
					Var4.f_61 = 9;
					Var4.f_71 = 4;
					Var4.f_76 = 8;
					Var4.f_85 = 4;
					Var4.f_90 = 6;
					iLocal_30 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS("Traffick_Ground", &Var4, 97, 35000);
					func_81(16);
					UNK_0x5E8C29AE121DF1C7("Traffick_Ground");
					UNK_0x73270B3C9CC833FD(bLocal_54, true, 0);
					UNK_0x046C362CF15F1935(&bLocal_54);
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						if (Global_42596 == 1)
						{
							func_72(UNK_0x16F2683693E537C9());
						}
					}
					bLocal_59 = false;
					iLocal_53 = 7;
				}
				else if (iVar3 == 0)
				{
					bLocal_45 = false;
					func_163(0);
					iLocal_53 = 9;
				}
			}
			break;
		case 7:
			if (!UNK_0x1727A44C562FBED2(iLocal_30))
			{
				iLocal_53 = 9;
				if (func_170(Global_110289, 2))
				{
					iLocal_53 = 8;
				}
				else
				{
					func_71(&iLocal_35);
					func_54();
					iLocal_36 = 1;
					bVar101 = func_53();
					func_45(&bVar101, 0, 0, 3, 0, 0, 0);
					Global_111638.f_19978.f_12 = bVar101;
					func_1(106, 0, 0);
					Global_111638.f_19978.f_13 = 0;
				}
				*iParam0 = 0;
				func_43(&Global_110289, 2);
			}
			break;
		case 8:
			if (Global_98744 == 10)
			{
				if (Global_98778)
				{
					*iParam0 = 1;
					UNK_0x92DCE5C81176D2B4("Traffick_Ground");
					iLocal_53 = 2;
				}
				else
				{
					*iParam0 = 0;
					iLocal_53 = 2;
				}
			}
			else if (Global_98744 == 13)
			{
				func_71(&iLocal_35);
				func_54();
				*iParam0 = 0;
				iLocal_53 = 2;
			}
			break;
		case 9:
			if (fLocal_31 >= 50625f && func_32(Global_111638.f_19978.f_12))
			{
				func_163(0);
				iLocal_53 = 1;
			}
			break;
		default:
			break;
	}
}

bool func_32(bool bParam0)
{
	return func_33(func_53(), bParam0);
}

int func_33(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_41(bParam1) || !func_41(bParam0))
	{
		return 1;
	}
	iVar0 = func_39(bParam0);
	iVar1 = func_39(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_38(bParam0);
	iVar1 = func_38(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_37(bParam0);
	iVar1 = func_37(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_36(bParam0);
	iVar1 = func_36(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_35(bParam0);
	iVar1 = func_35(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_34(bParam0);
	iVar1 = func_34(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_34(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_35(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_36(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_37(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

bool func_38(bool bParam0)
{
	return (bParam0 && 15);
}

int func_39(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_40(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_40(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_41(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	if (bParam0 == -15)
	{
		return false;
	}
	iVar0 = func_34(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_35(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_36(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_39(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_38(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_37(bParam0);
	if (iVar5 < 1 || iVar5 > func_42(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_42(bool bParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (bParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
	}
	return 30;
}

void func_43(var uParam0, int iParam1)
{
	func_44(uParam0, iParam1);
}

void func_44(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_45(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_39(*bParam0);
	bVar1 = func_38(*bParam0);
	iVar2 = func_37(*bParam0);
	iVar3 = func_36(*bParam0);
	iVar4 = func_35(*bParam0);
	iVar5 = func_34(*bParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_42(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_42(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_46(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_46(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_52(bParam0, iParam1);
	func_51(bParam0, iParam2);
	func_50(bParam0, iParam3);
	func_49(bParam0, bParam5);
	func_48(bParam0, iParam4);
	func_47(bParam0, iParam6);
}

void func_47(bool bParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*bParam0 |= -2147483648;
	}
	else
	{
		*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*bParam0 = (*bParam0 - *bParam0 & -2147483648);
	}
}

void func_48(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_38(*bParam0);
	iVar1 = func_39(*bParam0);
	if (iParam1 < 1 || iParam1 > func_42(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_49(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_50(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_51(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_52(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_53()
{
	var uVar0;

	func_52(&uVar0, UNK_0x4460E481B9E33ADA());
	func_51(&uVar0, UNK_0x8D199E381D262EEF());
	func_50(&uVar0, UNK_0xD8A54335F18763BA());
	func_48(&uVar0, UNK_0x972A296334C9D57B());
	func_49(&uVar0, UNK_0x118229AD063C3C1D());
	func_47(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_54()
{
	func_70();
	func_63();
	func_59();
	func_58();
	func_57();
	func_56();
	Global_98781 = 0;
	Global_92919 = -1;
	UNK_0x0674E58A79778E99(&(Global_98744.f_20), 17);
	Global_98779 = 0;
	UNK_0x65C5EBCA17A891FC(0);
	UNK_0x4DB69487E1A9EE2A(0);
	UNK_0x67E5ECB8FD7F5018(1);
	UNK_0xD99B71B9E48EB0E6(1);
	UNK_0x2C84016B4A95F6BA(1);
	func_55(0);
}

void func_55(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 13);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_98744.f_20), 13);
	}
}

void func_56()
{
	Global_76862 = { 0f, 0f, 0f };
	Global_76865 = 0f;
	Global_98744.f_21 = 145;
}

void func_57()
{
	StringCopy(&Global_76854, "", 16);
	StringCopy(&Global_76858, "", 16);
}

void func_58()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_98744.f_22[iVar0] = 0;
		iVar0++;
	}
}

void func_59()
{
	Global_98744 = 13;
	Global_98744.f_1 = -1;
	Global_98744.f_2 = 0;
	Global_98744.f_30 = 0f;
	UNK_0x0674E58A79778E99(&(Global_98744.f_20), 25);
	Global_98778 = 0;
	func_62(0);
	func_61();
	func_60();
	Global_98744.f_18 = -1;
	Global_98744.f_19 = -1;
}

void func_60()
{
	UNK_0x0674E58A79778E99(&(Global_98744.f_20), 22);
	UNK_0x0674E58A79778E99(&(Global_98744.f_20), 8);
}

void func_61()
{
	if (Global_98744.f_16 != 0)
	{
		UNK_0xE17FDF9E3068281B(&(Global_98744.f_16));
		Global_98744.f_16 = 0;
	}
	if (Global_98744.f_17 != 0)
	{
		UNK_0xE17FDF9E3068281B(&(Global_98744.f_17));
		Global_98744.f_17 = 0;
	}
}

void func_62(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_41980 = 1;
	}
	else
	{
		Global_41980 = 0;
	}
}

void func_63()
{
	func_64(&Global_105187);
}

void func_64(var uParam0)
{
	int iVar0;
	int iVar1;

	*uParam0 = 145;
	func_69(&(uParam0->f_1));
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 145;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_9[iVar1] = -1;
		uParam0->f_13[iVar1] = 0;
		uParam0->f_17[iVar1] = 0;
		uParam0->f_21[iVar1] = 0;
		func_68(&(uParam0->f_25[0 /*295*/][iVar1 /*98*/]));
		func_68(&(uParam0->f_25[1 /*295*/][iVar1 /*98*/]));
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uParam0->f_616[iVar1 /*65*/][iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_26[iVar0] = -1;
			iVar0++;
		}
		uParam0->f_616[iVar1 /*65*/].f_59 = 0;
		uParam0->f_616[iVar1 /*65*/].f_60 = -99;
		uParam0->f_616[iVar1 /*65*/].f_61 = 2;
		uParam0->f_616[iVar1 /*65*/].f_62 = 0;
		uParam0->f_616[iVar1 /*65*/].f_63 = -99;
		uParam0->f_616[iVar1 /*65*/].f_64 = 1;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_1 = 0;
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_2 = 0;
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_3 = 0;
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_4 = 0;
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_1 = 0;
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_2 = 0;
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_3 = 0;
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_4 = 0;
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			uParam0->f_2244[iVar1 /*32*/][iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			uParam0->f_2244[iVar1 /*32*/].f_5[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_2244[iVar1 /*32*/].f_16[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_2341[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = 0;
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = 0;
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_67(&(uParam0->f_2884));
	func_66(&(uParam0->f_2890));
	func_65(&(uParam0->f_2980));
}

void func_65(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_66(var uParam0)
{
	func_18(&(uParam0->f_12));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

void func_67(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

void func_68(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		uParam0->f_11[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_27), "", 16);
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		uParam0->f_31[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_81[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_84 = 0;
	uParam0->f_85 = 0;
	uParam0->f_86 = 0;
	uParam0->f_87 = 0;
	uParam0->f_88 = 0;
	uParam0->f_89 = 0;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	uParam0->f_95 = 0;
	uParam0->f_92 = 0;
}

void func_69(var uParam0)
{
	*uParam0 = -15;
}

void func_70()
{
	StringCopy(&Global_102195, "", 32);
	func_64(&Global_102203);
}

void func_71(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_41393)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

void func_72(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam0 == 0)
	{
		return;
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return;
	}
	iVar0 = func_80(bParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0 /*5*/];
		func_75(1, iVar1, 1);
		return;
	}
	iVar2 = func_74(bParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_73(iVar2);
}

void func_73(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42357[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42357[iParam0 /*5*/].f_1 == UNK_0x16F2683693E537C9())
		{
			Global_42594 = 0;
		}
	}
	Global_42357[iParam0 /*5*/] = 13;
	Global_42357[iParam0 /*5*/].f_1 = 0;
	Global_42357[iParam0 /*5*/].f_2 = 0;
	Global_42357[iParam0 /*5*/].f_3 = 0;
	Global_42357[iParam0 /*5*/].f_4 = 0;
	Global_42355 = (Global_42355 - 1);
	if (Global_42355 < 0)
	{
		Global_42355 = 0;
	}
}

int func_74(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0 /*5*/].f_1 == bParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_75(int iParam0, int iParam1, int iParam2)
{
	func_76(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_78(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_77();
	if (iVar0 == -1)
	{
		return;
	}
	Global_42464[iVar0 /*6*/] = iParam0;
	Global_42464[iVar0 /*6*/].f_1 = iParam1;
	Global_42464[iVar0 /*6*/].f_2 = iParam2;
	Global_42464[iVar0 /*6*/].f_3 = iParam3;
	Global_42464[iVar0 /*6*/].f_4 = iParam4;
	Global_42464[iVar0 /*6*/].f_5 = iParam5;
}

int func_77()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42464[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_78(int iParam0, int iParam1, int iParam2)
{
	if (func_79(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_79(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_42464[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_42464[iVar0 /*6*/])
			{
				if (iParam1 == Global_42464[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_80(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42383[iVar0 /*5*/] == -1)
		{
			if (bParam0 == Global_42383[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_81(int iParam0)
{
	int iVar0;
	vector3 vVar1[24];

	if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
	{
		iVar0 = iParam0;
		UNK_0x3CFFF3C8EACD8DC1(8, &iVar0, 1, 1);
	}
	else if (UNK_0xBA301E03A078FA59() || UNK_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		UNK_0x8DECFDD6715449E4(8, &cVar1);
	}
}

void func_82(char[4] cParam0, int iParam1)
{
	UNK_0x0674E58A79778E99(&(Global_98744.f_20), 17);
	func_83(cParam0, iParam1, 0);
}

void func_83(char[4] cParam0, int iParam1, bool bParam2)
{
	if (Global_98744 != 10 && Global_98744 != 9)
	{
		StringCopy(&Global_102195, cParam0, 32);
		func_85(&Global_102203, cParam0, 0, "Start", iParam1, bParam2);
		func_84();
		Global_92922 = 0;
	}
}

void func_84()
{
	int iVar0;
	int iVar1;

	Global_105187 = Global_102203;
	Global_105187.f_1 = Global_102203.f_1;
	Global_105187.f_6 = Global_102203.f_6;
	Global_105187.f_7 = Global_102203.f_7;
	Global_105187.f_8 = Global_102203.f_8;
	Global_105187.f_2 = Global_102203.f_2;
	Global_105187.f_3 = Global_102203.f_3;
	Global_105187.f_4 = Global_102203.f_4;
	Global_105187.f_5 = Global_102203.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_105187.f_9[iVar1] = Global_102203.f_9[iVar1];
		Global_105187.f_13[iVar1] = Global_102203.f_13[iVar1];
		Global_105187.f_17[iVar1] = Global_102203.f_17[iVar1];
		Global_105187.f_21[iVar1] = Global_102203.f_21[iVar1];
		Global_105187.f_25[0 /*295*/][iVar1 /*98*/] = { Global_102203.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_105187.f_25[1 /*295*/][iVar1 /*98*/] = { Global_102203.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_105187.f_616[iVar1 /*65*/][iVar0] = Global_102203.f_616[iVar1 /*65*/][iVar0];
			Global_105187.f_616[iVar1 /*65*/].f_13[iVar0] = Global_102203.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_105187.f_616[iVar1 /*65*/].f_26[iVar0] = Global_102203.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_105187.f_616[iVar1 /*65*/].f_59 = Global_102203.f_616[iVar1 /*65*/].f_59;
		Global_105187.f_616[iVar1 /*65*/].f_60 = Global_102203.f_616[iVar1 /*65*/].f_60;
		Global_105187.f_616[iVar1 /*65*/].f_61 = Global_102203.f_616[iVar1 /*65*/].f_61;
		Global_105187.f_616[iVar1 /*65*/].f_62 = Global_102203.f_616[iVar1 /*65*/].f_62;
		Global_105187.f_616[iVar1 /*65*/].f_63 = Global_102203.f_616[iVar1 /*65*/].f_63;
		Global_105187.f_616[iVar1 /*65*/].f_64 = Global_102203.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_105187.f_616[iVar1 /*65*/].f_39[iVar0] = Global_102203.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_105187.f_616[iVar1 /*65*/].f_49[iVar0] = Global_102203.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_105187.f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_102203.f_812[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			Global_105187.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_102203.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_105187.f_2244[iVar1 /*32*/][iVar0] = Global_102203.f_2244[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_105187.f_2244[iVar1 /*32*/].f_5[iVar0] = Global_102203.f_2244[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_105187.f_2244[iVar1 /*32*/].f_16[iVar0] = Global_102203.f_2244[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_105187.f_2341[iVar1] = Global_102203.f_2341[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_105187.f_2838[iVar1 /*15*/][iVar0] = Global_102203.f_2838[iVar1 /*15*/][iVar0];
			Global_105187.f_2838[iVar1 /*15*/].f_5[iVar0] = Global_102203.f_2838[iVar1 /*15*/].f_5[iVar0];
			Global_105187.f_2838[iVar1 /*15*/].f_10[iVar0] = Global_102203.f_2838[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_105187.f_2345[iVar1 /*164*/][iVar0] = Global_102203.f_2345[iVar1 /*164*/][iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_4[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_4[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_8[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_8[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_12[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_12[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_16[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_16[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_20[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_20[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_24[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_24[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_28[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_28[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_32[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_32[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_36[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_36[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_40[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_40[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_44[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_44[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_48[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_48[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_52[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_52[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_56[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_56[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_60[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_60[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_64[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_64[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_68[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_68[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_72[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_72[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_76[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_76[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_80[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_80[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_84[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_84[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_88[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_88[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_92[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_92[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_96[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_96[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_100[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_100[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_104[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_104[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_108[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_108[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_112[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_112[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_116[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_116[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_120[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_120[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_124[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_124[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_128[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_128[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_132[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_132[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_136[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_136[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_140[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_140[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_144[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_144[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_148[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_148[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_152[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_152[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_156[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_156[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_160[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_105187.f_2884 = { Global_102203.f_2884 };
	Global_105187.f_2884.f_3 = Global_102203.f_2884.f_3;
	Global_105187.f_2890 = { Global_102203.f_2890 };
	Global_105187.f_2890.f_3 = { Global_102203.f_2890.f_3 };
	Global_105187.f_2890.f_6 = Global_102203.f_2890.f_6;
	Global_105187.f_2890.f_8 = Global_105187.f_2890.f_8;
	Global_105187.f_2890.f_7 = Global_102203.f_2890.f_7;
	Global_105187.f_2890.f_9 = Global_102203.f_2890.f_9;
	Global_105187.f_2890.f_11 = Global_102203.f_2890.f_11;
	Global_105187.f_2890.f_10 = Global_102203.f_2890.f_10;
	Global_105187.f_2890.f_12 = Global_102203.f_2890.f_12;
	Global_105187.f_2890.f_12.f_1 = { Global_102203.f_2890.f_12.f_1 };
	Global_105187.f_2890.f_12.f_5 = Global_102203.f_2890.f_12.f_5;
	Global_105187.f_2890.f_12.f_6 = Global_102203.f_2890.f_12.f_6;
	Global_105187.f_2890.f_12.f_7 = Global_102203.f_2890.f_12.f_7;
	Global_105187.f_2890.f_12.f_8 = Global_102203.f_2890.f_12.f_8;
	Global_105187.f_2890.f_12.f_9 = { Global_102203.f_2890.f_12.f_9 };
	Global_105187.f_2890.f_12.f_59 = { Global_102203.f_2890.f_12.f_59 };
	Global_105187.f_2890.f_12.f_62 = Global_102203.f_2890.f_12.f_62;
	Global_105187.f_2890.f_12.f_63 = Global_102203.f_2890.f_12.f_63;
	Global_105187.f_2890.f_12.f_64 = Global_102203.f_2890.f_12.f_64;
	Global_105187.f_2890.f_12.f_65 = Global_102203.f_2890.f_12.f_65;
	Global_105187.f_2890.f_12.f_77 = Global_102203.f_2890.f_12.f_77;
	Global_105187.f_2890.f_12.f_66 = Global_102203.f_2890.f_12.f_66;
	Global_105187.f_2890.f_12.f_67 = Global_102203.f_2890.f_12.f_67;
	Global_105187.f_2890.f_12.f_68 = Global_102203.f_2890.f_12.f_68;
	Global_105187.f_2890.f_12.f_69 = Global_102203.f_2890.f_12.f_69;
	Global_105187.f_2890.f_12.f_71 = Global_102203.f_2890.f_12.f_71;
	Global_105187.f_2890.f_12.f_72 = Global_102203.f_2890.f_12.f_72;
	Global_105187.f_2890.f_12.f_73 = Global_102203.f_2890.f_12.f_73;
	Global_105187.f_2890.f_12.f_74 = Global_102203.f_2890.f_12.f_74;
	Global_105187.f_2890.f_12.f_75 = Global_102203.f_2890.f_12.f_75;
	Global_105187.f_2890.f_12.f_76 = Global_102203.f_2890.f_12.f_76;
	Global_105187.f_2980 = Global_102203.f_2980;
	Global_105187.f_2980.f_1 = Global_102203.f_2980.f_1;
	Global_105187.f_2980.f_2 = Global_102203.f_2980.f_2;
	Global_105187.f_2980.f_3 = Global_102203.f_2980.f_3;
}

void func_85(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	*uParam0 = func_22();
	uParam0->f_1 = func_53();
	UNK_0x1BC83DD08AA82285(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		func_103(&(uParam0->f_2884), 0);
		func_102(UNK_0x16F2683693E537C9());
		func_95(UNK_0x16F2683693E537C9(), 0);
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_111638.f_2358.f_539.f_294[iVar1];
		if (iVar1 == func_94())
		{
			func_87(UNK_0x16F2683693E537C9(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_98469[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_98469[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_98469[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_98469[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_98469[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_98469[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_98469[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_98469[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_98469[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_98469[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_111638.f_2358.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_111638.f_2358.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 1:
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				Jump @2050; //curOff = 1569
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				uParam0->f_9[iVar1] = Global_111638.f_20559.f_233[iVar1 /*69*/].f_1;
				uParam0->f_13[iVar1] = Global_58686[iVar1];
				uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_111638.f_2358.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
				uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_111638.f_2358.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/][iVar0];
					uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/].f_5[iVar0];
					uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/].f_10[iVar0];
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= 2)
				{
					uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_111638.f_2358[iVar1 /*164*/][iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_4[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_8[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_12[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_16[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_20[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_24[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_28[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_32[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_36[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_40[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_44[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_48[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_52[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_56[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_60[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_64[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_68[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_72[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_76[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_80[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_84[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_88[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_92[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_96[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_100[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_104[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_108[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_112[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_116[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_120[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_124[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_128[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_132[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_136[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_140[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_144[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_148[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_152[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_156[iVar0];
					uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_160[iVar0];
					iVar0++;
				}
				iVar1++;
			}
			UNK_0x6FB46C25CCB7E6D5(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
			UNK_0x6FB46C25CCB7E6D5(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
			UNK_0x6FB46C25CCB7E6D5(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
			uParam0->f_5 = 145;
			if (iParam4 == 1)
			{
				func_4(&(uParam0->f_2890), uParam0, bParam5, 1, 1, 0);
			}
			func_86(&(uParam0->f_2980));
			sParam3 = sParam3;
			iParam2 = iParam2;
		}

int func_86(var uParam0)
{
	*uParam0 = Global_94593;
	uParam0->f_1 = Global_94594;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_87(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		iVar0 = func_27(bParam0);
		bVar1 = false;
		while (bVar1 < 12)
		{
			func_93(bParam0, bVar1, &(uParam1->f_13[bVar1]), uParam1[bVar1], &(uParam1->f_26[bVar1]), iParam2, 145);
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 9)
		{
			func_92(bParam0, bVar1, &(uParam1->f_39[bVar1]), &(uParam1->f_49[bVar1]), iParam2, 145);
			bVar1++;
		}
		if (func_13(iVar0))
		{
			uParam1->f_59 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_64;
		}
		else if (UNK_0x8CD06866876216F2() && UNK_0x134B62B726CEC8E6(bParam0) == UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			if (func_91(161, iParam3))
			{
				uParam1->f_59 = func_88(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_88(752, iParam3, 0);
			}
			uParam1->f_60 = func_88(753, iParam3, 0);
			uParam1->f_61 = func_88(754, iParam3, 0);
		}
		if (UNK_0x8CD06866876216F2() && bParam0 == UNK_0x16F2683693E537C9())
		{
			if (func_91(161, iParam3))
			{
				uParam1->f_59 = func_88(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_88(752, iParam3, 0);
			}
		}
	}
}

int func_88(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_89(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_90();
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

int func_90()
{
	return Global_1312745;
}

bool func_91(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_89(iParam1)];
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

void func_92(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;

	iVar0 = func_27(bParam0);
	if (bParam0 != 0)
	{
		*uParam2 = UNK_0x98F1B512A2CC07C5(bParam0, bParam1);
		*uParam3 = UNK_0x22286A85EDEAEC56(bParam0, bParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (bParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (bParam0 != 0)
			{
				if (UNK_0xDCCE25EA1C1D1F76(bParam0) && UNK_0x6BE6D34EA3F561AC(bParam0) != -1)
				{
					*uParam2 = UNK_0x6BE6D34EA3F561AC(bParam0);
					*uParam3 = UNK_0x7E1F0AD2CE37D34C(bParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (bParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (bParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		case 1:
			if (bParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		case 2:
			if (bParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_93(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;

	iVar0 = func_27(bParam0);
	if (bParam0 != 0)
	{
		*uParam2 = UNK_0x36C584991B4C183F(bParam0, bParam1);
		*uParam3 = UNK_0xDADA8E1DD0D0D9D9(bParam0, bParam1);
		*uParam4 = UNK_0xAA973E78065E07A0(bParam0, bParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		case 1:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		case 2:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_94()
{
	func_23();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_95(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = func_27(bParam0);
	if (func_13(iVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (bParam0 == UNK_0x16F2683693E537C9())
		{
			func_96(bParam0, &(Global_111638.f_2358.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111638.f_2358.f_539.f_1730[iVar2 /*4*/][iVar0] = UNK_0x923C832C9AB56966(iVar2);
				if (bParam1)
				{
					iVar1 = UNK_0xFA91242148B28E7D();
					if (Global_111638.f_2358.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_111638.f_2358.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			UNK_0x812D6591566D640E(UNK_0xD803B885F5E47A62(), &bVar3);
			if (iVar0 == 0)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP0_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
			else if (iVar0 == 1)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP1_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
			else if (iVar0 == 2)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP2_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
		}
	}
}

void func_96(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	bool bVar73;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_101(iVar0);
			if (iVar3 != 0)
			{
				Var4 = UNK_0x3F0B5EEC37A0EDD3(bParam0, func_101(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("WEAPON_UNARMED"))
				{
					Var4.f_1 = UNK_0xD2AEDBB0268DF71A(bParam0, Var4);
					if (Var4 == joaat("GADGET_PARACHUTE"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = UNK_0x7DD9FDEA5DFB355E(bParam0, Var4);
					Var4.f_4 = UNK_0x7F1C58A86289ED1A(bParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!UNK_0x9AEFFB8166364079(bParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					bVar1 = false;
					iVar2 = func_99(Var4, bVar1);
					while (iVar2 != 0)
					{
						if (UNK_0xAFB8387ED2D7213E(bParam0, Var4, iVar2))
						{
							UNK_0x5D96D8530B3D0904(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_99(Var4, bVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = UNK_0x4160B65AE085B5A9();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((UNK_0x310836EE7129BA33(iVar9, &Var11) && !func_98(Var11.f_1)) && iVar72 < 51)
			{
				if (!UNK_0x232048AB4B0E0259(Var11))
				{
					Var4 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = UNK_0xD2AEDBB0268DF71A(bParam0, Var4);
					if (UNK_0x440C646F2F11A2A1(bParam0, Var4, 0))
					{
						Var4.f_3 = UNK_0x7DD9FDEA5DFB355E(bParam0, Var4);
						Var4.f_4 = UNK_0x7F1C58A86289ED1A(bParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!UNK_0x9AEFFB8166364079(bParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					bVar73 = false;
					bVar1 = false;
					while (bVar1 < UNK_0xAD2A7A6DFF55841B(iVar9))
					{
						if (UNK_0x31D5E073B6F93CDC(iVar9, bVar1, &Var50))
						{
							if (!func_97(Var50.f_3))
							{
								if (UNK_0xAFB8387ED2D7213E(bParam0, Var4, Var50.f_3))
								{
									UNK_0x5D96D8530B3D0904(&(Var4.f_2), bVar73);
								}
								bVar73++;
							}
						}
						bVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!UNK_0x440C646F2F11A2A1(bParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

bool func_97(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return true;
	}
	return false;
}

bool func_98(int iParam0)
{
	if (UNK_0x8CD06866876216F2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return false;
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return false;
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return false;
			case joaat("WEAPON_BULLPUPRIFLE"):
				return false;
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return false;
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return false;
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return false;
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return false;
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return false;
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case -1523701417:
			case -2112826155:
			case -664359727:
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
				return true;
		}
	}
	return false;
}

int func_99(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_SMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_SMG_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 9:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_SR_SUPP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_KNUCKLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
		case joaat("WEAPON_MINISMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_100(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					bVar2 = false;
					while (bVar2 < UNK_0xA942498EEAA3EEAD(iVar1))
					{
						if (UNK_0x8B27EE8DAA2A39B3(iVar1, bVar2, &Var43))
						{
							if (!func_97(Var43.f_3))
							{
								if (iVar3 == bParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						bVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_100(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = UNK_0x037F36BEA9A47381();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (UNK_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_101(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("SLOT_UNARMED");
			break;
		case 1:
			iVar0 = joaat("SLOT_KNIFE");
			break;
		case 2:
			iVar0 = joaat("SLOT_NIGHTSTICK");
			break;
		case 3:
			iVar0 = joaat("SLOT_HAMMER");
			break;
		case 4:
			iVar0 = joaat("SLOT_BAT");
			break;
		case 5:
			iVar0 = joaat("SLOT_CROWBAR");
			break;
		case 6:
			iVar0 = joaat("SLOT_GOLFCLUB");
			break;
		case 7:
			iVar0 = joaat("SLOT_STUNGUN");
			break;
		case 8:
			iVar0 = joaat("SLOT_PISTOL");
			break;
		case 9:
			iVar0 = joaat("SLOT_COMBATPISTOL");
			break;
		case 10:
			iVar0 = joaat("SLOT_APPISTOL");
			break;
		case 11:
			iVar0 = joaat("SLOT_MICROSMG");
			break;
		case 12:
			iVar0 = joaat("SLOT_SMG");
			break;
		case 13:
			iVar0 = joaat("SLOT_ASSAULTRIFLE");
			break;
		case 14:
			iVar0 = joaat("SLOT_CARBINERIFLE");
			break;
		case 15:
			iVar0 = joaat("SLOT_ADVANCEDRIFLE");
			break;
		case 16:
			iVar0 = joaat("SLOT_MG");
			break;
		case 17:
			iVar0 = joaat("SLOT_COMBATMG");
			break;
		case 18:
			iVar0 = joaat("SLOT_PUMPSHOTGUN");
			break;
		case 19:
			iVar0 = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
		case 20:
			iVar0 = joaat("SLOT_ASSAULTSHOTGUN");
			break;
		case 21:
			iVar0 = joaat("SLOT_SNIPERRIFLE");
			break;
		case 22:
			iVar0 = joaat("SLOT_HEAVYSNIPER");
			break;
		case 23:
			iVar0 = joaat("SLOT_GRENADELAUNCHER");
			break;
		case 24:
			iVar0 = joaat("SLOT_RPG");
			break;
		case 25:
			iVar0 = joaat("SLOT_MINIGUN");
			break;
		case 26:
			iVar0 = joaat("SLOT_GRENADE");
			break;
		case 27:
			iVar0 = joaat("SLOT_STICKYBOMB");
			break;
		case 28:
			iVar0 = joaat("SLOT_SMOKEGRENADE");
			break;
		case 29:
			iVar0 = joaat("SLOT_MOLOTOV");
			break;
		case 30:
			iVar0 = joaat("SLOT_FIREEXTINGUISHER");
			break;
		case 31:
			iVar0 = joaat("SLOT_PETROLCAN");
			break;
		case 33:
			iVar0 = joaat("SLOT_PARACHUTE");
			break;
		case 34:
			iVar0 = joaat("SLOT_DIGISCANNER");
			break;
		case 35:
			iVar0 = joaat("SLOT_OBJECT");
			break;
		case 36:
			iVar0 = joaat("SLOT_ASSAULTSMG");
			break;
		case 37:
			iVar0 = joaat("SLOT_BULLPUPSHOTGUN");
			break;
		case 38:
			iVar0 = joaat("SLOT_PISTOL50");
			break;
	}
	return iVar0;
}

void func_102(bool bParam0)
{
	int iVar0;

	iVar0 = func_27(bParam0);
	if (func_13(iVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		Global_111638.f_2358.f_539.f_294[iVar0] = UNK_0x34460709B9A5160B(bParam0);
	}
}

void func_103(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;

	*uParam0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	uParam0->f_3 = UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9());
	uParam0->f_5 = UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9());
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		uParam0->f_4 = UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (UNK_0x8A22C4C08282BF26(joaat("FINALE_CHOICE")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == UNK_0x0D1736C2E221BCEA(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_107(&iVar0))
		{
			if (func_105(iVar0, &vVar1, &uVar4))
			{
				vVar1.f_2 = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar5 = func_22();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_104(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

bool func_104(vector3 vParam0, bool bParam3, vector3 vParam4)
{
	int iVar0;
	int iVar1;

	if (!UNK_0xD1BF3090E1F8300E(vParam0))
	{
		iVar0 = UNK_0x0D1736C2E221BCEA(vParam4, bParam3);
		if (!UNK_0x31609A585163CBAC(iVar0))
		{
			return false;
		}
		iVar1 = UNK_0x16804749AA17EEA8(vParam0);
		if (iVar1 == iVar0)
		{
			return true;
		}
	}
	return false;
}

bool func_105(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_106(*uParam1, 0f, 0f, 0f, 0);
}

bool func_106(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_107(int iParam0)
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (func_130())
		{
			*iParam0 = func_113(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), 6, -1, 0, 1, -1);
			if (func_112(*iParam0) && !func_108(*iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_108(int iParam0)
{
	return func_109(iParam0, 0, 1);
}

bool func_109(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (bParam2)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_98796.f_1357[iParam0], bParam1);
	}
	else if (UNK_0x8CD06866876216F2())
	{
		if (func_111() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_88(func_110(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
		case 1:
			return 828;
		case 2:
			return 829;
		case 3:
			return 830;
		case 4:
			return 831;
		case 5:
			return 832;
		case 6:
			return 833;
		case 7:
			return 834;
		case 8:
			return 835;
		case 9:
			return 836;
		case 10:
			return 837;
		case 11:
			return 838;
		case 12:
			return 839;
		case 13:
			return 840;
		case 14:
			return 841;
		case 15:
			return 843;
		case 16:
			return 844;
		case 17:
			return 845;
		case 18:
			return 846;
		case 19:
			return 847;
		case 20:
			return 848;
		case 21:
			return 849;
		case 22:
			return 850;
		case 23:
			return 851;
		case 24:
			return 852;
		case 25:
			return 853;
		case 26:
			return 854;
		case 27:
			return 855;
		case 28:
			return 856;
		case 29:
			return 857;
		case 30:
			return 858;
		case 31:
			return 859;
		case 32:
			return 860;
		case 33:
			return 861;
		case 34:
			return 862;
		case 35:
			return 863;
		case 36:
			return 864;
		case 37:
			return 865;
		case 38:
			return 866;
		case 39:
			return 867;
		case 40:
			return 871;
		case 41:
			return 872;
		case 42:
			return 873;
		case 43:
			return 874;
		case 44:
			return 9977;
		case 45:
			return 3808;
		case 46:
			return 5383;
		case 47:
			return 6155;
		case 48:
			return 7232;
		case 49:
			return 7878;
		case 52:
			return 8912;
		case 50:
			return 8265;
		case 51:
			return 8267;
		default:
			break;
	}
	return 11511;
}

int func_111()
{
	return Global_30768;
}

bool func_112(int iParam0)
{
	return func_109(iParam0, 5, 1);
}

int func_113(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam3 == 6 || iParam3 == func_129(iVar0))
		{
			if (!bParam5 || func_128(iVar0))
			{
				fVar1 = UNK_0x0EB28750412C3A5A(vParam0, func_114(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (bParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_114(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
		case 4:
			return 1208.333f, -470.917f, 65.208f;
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		case 45:
			return func_125(Global_100839);
		case 46:
			if (Global_1590374 != func_124())
			{
				if (func_123(Global_1590374))
				{
					return func_116(2, 2);
				}
				else if (func_115(Global_1590374))
				{
					return func_116(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		case 47:
			return 510.1f, 4749.5f, -69f;
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
		case 50:
			return Global_1696048;
		case 51:
			return 1100f, 220f, -50f;
	}
	return 1000000f, 1000000f, 1000000f;
}

bool func_115(int iParam0)
{
	if (iParam0 != func_124())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, true)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 2))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_116(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar6;

	vVar6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_124())
	{
		if (iParam1 == 3)
		{
			if (func_117(iParam0, 1, &vVar0, 0, 0))
			{
				vVar6 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 4))
			{
				if (func_117(iParam0, 1, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 5))
			{
				if (func_117(iParam0, 2, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
		}
	}
	return vVar6;
}

bool func_117(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar6;
	struct<4> Var12;
	vector3 vVar18;

	if (!func_122(iParam3, &Var0))
	{
		return false;
	}
	if (!func_122(iParam1, &vVar6))
	{
		return false;
	}
	if (!bParam4)
	{
		Var12 = { func_120(iParam0) };
	}
	else
	{
		Var12 = { func_119(iParam0) };
	}
	vVar18 = { Var12 - Var0 };
	vVar18 = { func_118(vVar18, -Var0.f_3.f_2) };
	vVar18 = { func_118(vVar18, vVar6.f_3.f_2) };
	*uParam2 = { UNK_0x8A5E176FF719A014(vVar6, 0f, vVar18) };
	uParam2->f_3 = { Var12.f_3 };
	return true;
}

Vector3 func_118(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

struct<6> func_119(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_120(int iParam0)
{
	return func_121(iParam0);
}

struct<6> func_121(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

bool func_122(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		default:
			break;
	}
	return false;
}

bool func_123(int iParam0)
{
	if (iParam0 != func_124())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 3) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 4)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 5))
		{
			return true;
		}
	}
	return false;
}

int func_124()
{
	return -1;
}

Vector3 func_125(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
		case 2:
			return 1060f, -2990f, -35f;
		case 3:
			return 974.9542f, -3000.091f, -35f;
		case 6:
			return -1586.36f, -566.6f, 106.17f;
		case 7:
			return -1389.87f, -465.17f, 82.68f;
		case 8:
			return -145.81f, -590.2f, 171.13f;
		case 9:
			return -62.49f, -823.55f, 288.74f;
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
		case 10:
			return 1103.562f, -3000f, -40f;
		case 11:
			return 938.3077f, -3196.112f, -100f;
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
		case 13:
			return 520.0001f, 4750f, -70f;
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
		case 16:
			return -1421.015f, -3012.587f, -80f;
		case 17:
			if (func_126() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		default:
			return 0f, 0f, -200f;
	}
	return 0f, 0f, -200f;
}

int func_126()
{
	return func_127(UNK_0xD803B885F5E47A62());
}

int func_127(int iParam0)
{
	return UNK_0xDC4DD3980107166C(Global_2425662[iParam0 /*421*/].f_310.f_3, 28, 31);
}

bool func_128(int iParam0)
{
	return func_109(iParam0, 0, 0);
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 50:
			return 0;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
		case 16:
			return 1;
		case 17:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 2;
		case 23:
			return 2;
		case 24:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 27:
			return 2;
		case 28:
			return 3;
		case 29:
			return 3;
		case 30:
			return 3;
		case 31:
			return 3;
		case 32:
			return 3;
		case 33:
			return 3;
		case 34:
			return 3;
		case 35:
			return 3;
		case 36:
			return 3;
		case 37:
			return 3;
		case 38:
			return 3;
		case 39:
			return 4;
		case 40:
			return 4;
		case 41:
			return 4;
		case 42:
			return 4;
		case 43:
			return 4;
		case 44:
			return 4;
		case 45:
			return 5;
		case 46:
			return 3;
		case 47:
			return 3;
		case 48:
			return 3;
		case 49:
			return 3;
		case 52:
			return 3;
		case 51:
			return 1;
	}
	return 6;
}

bool func_130()
{
	return Global_98796.f_345 > 0;
}

int func_131(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96222.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_28(0))
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		UNK_0x62DE699599F0417E(UNK_0xA30EC016B12C03E4(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			UNK_0x4C7B0415764B64BA(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *iParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_29(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		Global_41398[Global_41392 /*4*/] = Global_41395;
		Global_41398[Global_41392 /*4*/].f_1 = iParam1;
		Global_41398[Global_41392 /*4*/].f_2 = iParam2;
		Global_41398[Global_41392 /*4*/].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_132(iParam0, iParam4);
		}
	}
	return 2;
}

void func_132(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_41392 == 0)
	{
		return;
	}
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0 /*4*/] == *iParam0)
		{
			Global_41398[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*iParam0 = -1;
}

void func_133(bool bParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;

	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (UNK_0xC844350D5D58C99A(Global_75441.f_484[25]) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[25], 0))
			{
				if (Global_75441.f_484[25] == bParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((UNK_0x56E1CD81AE700E98(bParam0) || UNK_0x134B62B726CEC8E6(bParam0) == joaat("BUS")) || UNK_0x134B62B726CEC8E6(bParam0) == joaat("TOURBUS"))
			{
				return;
			}
		}
		func_159(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_14(bParam0, &Var0);
		if (func_106(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
			iParam4 = UNK_0xD9522BA9E27E1349(bParam0);
		}
		if (iParam5 == 24)
		{
			if (UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) != joaat("VEHICLE_GEN_CONTROLLER"))
			{
				Global_76429 = UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C());
			}
		}
		func_153(iParam5, &Var0, vParam1, iParam4, func_9(bParam0));
		func_134(iParam5, bParam0, 0);
	}
}

void func_134(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_152(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 12) && !UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_75441.f_555[0 /*21*/].f_4 != UNK_0x134B62B726CEC8E6(bParam1))
		{
			return;
		}
	}
	if (Global_76348 != -1 && Global_76348 != iParam0)
	{
		return;
	}
	if (UNK_0xC844350D5D58C99A(bParam1))
	{
		if (UNK_0xDF1306B443CD3D15(bParam1, 0))
		{
			if (!UNK_0xAF6690C489CC6203(bParam1))
			{
				UNK_0x73270B3C9CC833FD(bParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_111638.f_32744.f_4801 = func_53();
			}
			if (bParam1 != Global_75441.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					bVar0 = func_151(iParam0);
					if ((UNK_0xC844350D5D58C99A(bVar0) && UNK_0xDF1306B443CD3D15(bVar0, 0)) && bParam1 != bVar0)
					{
						func_135(bVar0, 145);
					}
				}
				Global_76347 = bParam1;
				Global_76348 = iParam0;
				Global_76349 = iParam2;
			}
		}
	}
}

void func_135(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_136(bParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		bVar0 = UNK_0xA30B8362589C124A(bParam0, -1, 0);
		if (!UNK_0xC844350D5D58C99A(bVar0))
		{
			bVar0 = UNK_0xB0326EA5AFB4EFA7(bParam0, -1);
		}
		if (UNK_0xC844350D5D58C99A(bVar0) && !UNK_0xEB6A8945D1AC98A1(bVar0))
		{
			if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_ZERO"))
			{
				iParam1 = 0;
			}
			else if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_ONE"))
			{
				iParam1 = 1;
			}
			else if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_TWO"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111638.f_2358.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (UNK_0x134B62B726CEC8E6(bParam0) == Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!UNK_0xEA6BC48857E0AC4C(&(Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (UNK_0x7F8A39872A07D2CE(UNK_0x7888A5D2621AAF2D(bParam0), &(Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_111638.f_32744.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (UNK_0x134B62B726CEC8E6(bParam0) == Global_111638.f_32744.f_5600[iVar1 /*78*/].f_66)
		{
			if (!UNK_0xEA6BC48857E0AC4C(&(Global_111638.f_32744.f_5600[iVar1 /*78*/].f_1)))
			{
				if (UNK_0x7F8A39872A07D2CE(UNK_0x7888A5D2621AAF2D(bParam0), &(Global_111638.f_32744.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111638.f_32744.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111638.f_32744.f_5590 = iParam1;
	Global_76346 = bParam0;
	Global_111638.f_32744.f_5588 = 1;
	func_14(bParam0, &(Global_111638.f_32744.f_5510));
}

bool func_136(bool bParam0)
{
	if ((((((((((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || func_20(bParam0, 0, 0)) || func_20(bParam0, 1, 0)) || func_20(bParam0, 2, 0)) || func_9(bParam0) != 145) || func_150(bParam0)) || func_149(bParam0)) || func_148(bParam0)) || func_147(bParam0)) || !func_137(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		if (func_149(bParam0))
		{
		}
		if (func_149(bParam0))
		{
		}
		if (func_20(bParam0, 0, 0))
		{
		}
		if (func_20(bParam0, 1, 0))
		{
		}
		if (func_20(bParam0, 2, 0))
		{
		}
		if (func_9(bParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_137(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!func_138(bParam0, 0))
	{
		return false;
	}
	if (((UNK_0xA7082C42B8809BF2(bParam0) || UNK_0xC41A9202669A24C4(bParam0)) || UNK_0xAFB8495D36825275(bParam0)) || UNK_0xA7D7011F9888A365(bParam0))
	{
		return false;
	}
	switch (bParam0)
	{
		case joaat("BUS"):
		case joaat("STRETCH"):
		case joaat("BARRACKS"):
		case joaat("ARMYTANKER"):
		case joaat("RHINO"):
		case joaat("ARMYTRAILER"):
		case joaat("BARRACKS2"):
		case joaat("FLATBED"):
		case joaat("RIPLEY"):
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("AIRBUS"):
		case joaat("COACH"):
		case joaat("RENTALBUS"):
		case joaat("TOURBUS"):
		case joaat("FIRETRUK"):
		case joaat("PBUS"):
		case joaat("TRASH"):
		case joaat("BENSON"):
		case joaat("BOATTRAILER"):
		case joaat("BIFF"):
		case joaat("HAULER"):
		case joaat("DOCKTRAILER"):
		case joaat("PHANTOM"):
		case joaat("POUNDER"):
		case joaat("TRACTOR2"):
		case joaat("BULLDOZER"):
		case joaat("HANDLER"):
		case joaat("TIPTRUCK"):
		case joaat("CUTTER"):
		case joaat("DUMP"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("RUBBLE"):
		case joaat("SCRAP"):
		case joaat("TIPTRUCK2"):
		case joaat("CAMPER"):
		case joaat("TACO"):
		case joaat("BOXVILLE"):
		case joaat("BOXVILLE2"):
		case joaat("BOXVILLE3"):
		case joaat("JOURNEY"):
		case joaat("MULE"):
		case joaat("MULE2"):
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLICEB"):
		case joaat("POLICEOLD1"):
		case joaat("POLICEOLD2"):
		case joaat("POLICET"):
		case joaat("TAXI"):
		case joaat("SUBMERSIBLE"):
		case joaat("SUBMERSIBLE2"):
		case joaat("MONSTER"):
			return false;
	}
	return true;
}

bool func_138(bool bParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;

	if (bParam0 == 0)
	{
		return false;
	}
	if (!UNK_0x4DAC2AD66FE0E696(bParam0))
	{
		return false;
	}
	if (((((bParam0 == joaat("DOMINATOR2") && !UNK_0x8CD06866876216F2()) || (bParam0 == joaat("BUFFALO3") && !UNK_0x8CD06866876216F2())) || (bParam0 == joaat("GAUNTLET2") && !UNK_0x8CD06866876216F2())) || bParam0 == joaat("BLIMP2")) || (bParam0 == joaat("STALION2") && !UNK_0x8CD06866876216F2()))
	{
		if (!func_146())
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < UNK_0x6C7B93D0F54679BE())
		{
			if (UNK_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (bParam0 == Var1.f_1)
				{
					if (UNK_0x232048AB4B0E0259(Var1))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam0 == joaat("BLIMP"))
	{
		if ((((!func_145() && !func_144()) && !func_143()) && !func_142()) && !func_146())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_143())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_141(bParam0))
		{
			return false;
		}
	}
	if (!func_139(bParam0))
	{
		return false;
	}
	return true;
}

bool func_139(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_140())
	{
		return true;
	}
	UNK_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return true;
	}
	switch (bParam0)
	{
		case joaat("DUNE4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		case joaat("VOLTIC2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		case joaat("RUINER2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		case joaat("PHANTOM2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		case joaat("TECHNICAL2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		case joaat("BOXVILLE5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		case joaat("WASTELANDER"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		case joaat("BLAZER5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		default:
			return true;
	}
	if (!UNK_0x437ABF4F514F6471(&cVar2))
	{
		return false;
	}
	return true;
}

bool func_140()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_141(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (Global_2513258)
	{
		return true;
	}
	iVar0 = 1;
	iVar1 = UNK_0xDD0E7998AE8AD485();
	if (bParam0 == joaat("BTYPE3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("FACTION3"))
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VIRGO3") || bParam0 == joaat("VIRGO2"))
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SABREGT2"))
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORNADO5"))
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MINIVAN2"))
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SLAMVAN3"))
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("PROTOTIPO"))
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEVEN70"))
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PFISTER811"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("BF400"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BRIOSO"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLIFFHANGER"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CONTENDER"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LE7B"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OMNIS"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPHYTRUCK"))
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPHYTRUCK2"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPOS"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GARGOYLE"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RALLYTRUCK"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TAMPA2"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TYRUS"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SHEAVA"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LYNX"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STALION2"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GAUNTLET2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DOMINATOR2"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BUFFALO3"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("DEFILER"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NIGHTBLADE"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ZOMBIEA"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ESSKEY"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AVARUS"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ZOMBIEB"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HAKUCHOU2"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VORTEX"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SHOTARO"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHIMERA"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAPTOR"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DAEMON2"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER4"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORNADO6"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("YOUGA2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("WOLFSBANE"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGGIO3"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGGIO"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BAGGER"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SANCTUS"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MANCHEZ"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RATBIKE"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("VOLTIC2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RUINER2"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DUNE4"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DUNE5"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PHANTOM2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TECHNICAL2"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOXVILLE5"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("WASTELANDER"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER5"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET3"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DIABLOUS"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DIABLOUS2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELEGY"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELEGY2"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FCR"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FCR2"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTB"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTB2"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NERO"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NERO2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PENETRATOR"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SPECTER"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SPECTER2"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TEMPESTA"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("GP1"))
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("INFERNUS2"))
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RUSTON"))
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TURISMO2"))
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("XA21"))
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHEETAH2"))
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORERO"))
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VAGNER"))
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ARDENT"))
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NIGHTSHARK"))
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("MICROLIGHT"))
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MOGUL"))
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ROGUE"))
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STARLING"))
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEABREEZE"))
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TULA"))
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PYRO"))
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MOLOTOK"))
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NOKOTA"))
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOMBUSHKA"))
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HUNTER"))
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HAVOK"))
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HOWARD"))
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ALPHAZ1"))
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CYCLONE"))
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VISIONE"))
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VIGILANTE"))
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RETINUE"))
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAPIDGT3"))
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("DELUXO"))
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STROMBERG"))
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RIOT2"))
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHERNOBOG"))
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("KHANJALI"))
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AKULA"))
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("THRUSTER"))
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BARRAGE"))
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VOLATOL"))
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET4"))
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NEON"))
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STREITER"))
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SENTINEL3"))
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("YOSEMITE"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SC1"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AUTARCH"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GT500"))
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HUSTLER"))
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("REVOLTER"))
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PARIAH"))
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAIDEN"))
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SAVESTRA"))
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RIATA"))
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HERMES"))
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET5"))
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("Z190"))
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VISERIS"))
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("KAMACHO"))
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("GB200"))
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGALOA"))
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELLIE"))
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ISSI3"))
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MICHELLI"))
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FLASHGT"))
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HOTRING"))
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TEZERACT"))
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TYRANT"))
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DOMINATOR3"))
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TAIPAN"))
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ENTITY2"))
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("JESTER3"))
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHEBUREK"))
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CARACARA"))
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEASPARROW"))
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("TERBYTE"))
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PBUS2"))
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MULE4"))
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("POUNDER2"))
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SWINGER"))
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MENACER"))
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SCRAMJET"))
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STRIKEFORCE"))
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OPPRESSOR2"))
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PATRIOT2"))
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STAFFORD"))
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FREECRAWLER"))
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLIMP3"))
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("MONSTER3"))
	{
	}
	else if (bParam0 == joaat("CERBERUS"))
	{
	}
	else if (bParam0 == joaat("CERBERUS2"))
	{
	}
	else if (bParam0 == joaat("CERBERUS3"))
	{
	}
	else if (bParam0 == joaat("BRUTUS"))
	{
	}
	else if (bParam0 == joaat("BRUTUS2"))
	{
	}
	else if (bParam0 == joaat("BRUTUS3"))
	{
	}
	else if (bParam0 == joaat("SCARAB"))
	{
	}
	else if (bParam0 == joaat("SCARAB2"))
	{
	}
	else if (bParam0 == joaat("SCARAB3"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR2"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR3"))
	{
	}
	else if (bParam0 == joaat("ZR380"))
	{
	}
	else if (bParam0 == joaat("ZR3802"))
	{
	}
	else if (bParam0 == joaat("ZR3803"))
	{
	}
	else if (bParam0 == joaat("IMPALER"))
	{
	}
	else if (bParam0 == joaat("DEVESTE"))
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TOROS"))
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLIQUE"))
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTO"))
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DEVIANT"))
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VAMOS"))
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TULIP"))
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SCHLAGEN"))
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RCBANDITO"))
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LOCUST"))
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OUTLAW"))
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FIRETRUK"))
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BURRITO2"))
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOXVILLE"))
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STOCKADE"))
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LGUARD"))
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER2"))
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLUB"))
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_142()
{
	return false;
}

bool func_143()
{
	return true;
}

bool func_144()
{
	return true;
}

bool func_145()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_146()
{
	bool bVar0;

	if (UNK_0x61D9362D70D2DD56())
	{
		if (UNK_0x999A3BFD3E9B5D2C())
		{
			if (UNK_0x5CD8D2FE4603C900())
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &bVar0, -1);
				UNK_0x5D96D8530B3D0904(&bVar0, 2);
				UNK_0x5D96D8530B3D0904(&bVar0, 4);
				UNK_0x5D96D8530B3D0904(&bVar0, 6);
				UNK_0x5D96D8530B3D0904(&Global_25, 2);
				UNK_0x5D96D8530B3D0904(&Global_25, 4);
				UNK_0x5D96D8530B3D0904(&Global_25, 6);
				UNK_0xCDC520E5E48E63D9(joaat("SP_UNLOCK_EXCLUS_CONTENT"), bVar0, 1);
				if (UNK_0xE0DC536BD2AC0301())
				{
					bVar0 = UNK_0x0A4C9A3D51EAE31F(866);
					UNK_0x5D96D8530B3D0904(&bVar0, false);
					UNK_0x9F2BE984EBF8A0F4(bVar0);
				}
				return true;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return true;
	}
	else if (Global_150472 == 3)
	{
		return false;
	}
	if (UNK_0xE0DC536BD2AC0301())
	{
		if (UNK_0xEAE0D21A50E6C7F4(UNK_0x0A4C9A3D51EAE31F(866), false))
		{
			return true;
		}
	}
	return false;
}

bool func_147(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	bVar1 = UNK_0x7888A5D2621AAF2D(bParam0);
	if (bVar0 == joaat("SPEEDO") && UNK_0x7F8A39872A07D2CE(bVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_138(bVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_148(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UNK_0xC844350D5D58C99A(Global_96105[iVar0]))
		{
			if (Global_96105[iVar0] == bParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_149(bool bParam0)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]) && UNK_0xDF1306B443CD3D15(Global_96075[iVar0], 0))
			{
				if (Global_96075[iVar0] == bParam0 && UNK_0x134B62B726CEC8E6(Global_96075[iVar0]) == UNK_0x134B62B726CEC8E6(bParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_150(bool bParam0)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(Global_75441.f_484[24]))
	{
		if (bParam0 == Global_75441.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (bParam0 == Global_75441.f_484[iVar0])
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_151(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75441.f_139[iParam0];
}

bool func_152(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_11(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_11(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_11(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_11(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_11(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_11(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_11(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_11(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_11(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("SCORCHER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("SEASHARK");
			iVar0 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("DUSTER");
			iVar0 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("TAILGATER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("PROPTRAILER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("BJXL");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("VELUM");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("CARGOBOB3");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TOWTRUCK");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TRASH");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("BARRACKS");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("FIRETRUK");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("VACCA");
			iVar0 = 1;
			break;
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("SURANO");
			iVar0 = 1;
			break;
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("TORNADO2");
			iVar0 = 1;
			break;
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("SUPERD");
			iVar0 = 1;
			break;
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			uParam0->f_13 = 308;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("DINGHY");
			uParam0->f_13 = 404;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("BFINJECTION");
			iVar0 = 1;
			break;
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_146())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_13 = 401;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_146())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_13 = 401;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("BLAZER3");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("SUBMERSIBLE2");
			uParam0->f_13 = 308;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("DUKES2");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("DUKES2");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("DODO");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("DODO");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111638.f_32744.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("MILJET") || uParam0->f_4 == joaat("BESRA")) || uParam0->f_4 == joaat("LUXOR")) || uParam0->f_4 == joaat("SHAMAL")) || uParam0->f_4 == joaat("TITAN")) || uParam0->f_4 == joaat("LUXOR2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_106(Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_111638.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111638.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 19))
	{
		if (!func_106(Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_106(Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

void func_153(int iParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (func_152(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 10))
		{
			func_158(iParam0);
			func_157(uParam1, &(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]));
			if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 11))
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0 /*21*/].f_14 /*3*/] = { vParam2 };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0 /*21*/].f_14] = iParam5;
			}
			else
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_154(iParam0, 1);
		}
	}
}

void func_154(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_156(iParam0, 0))
		{
			func_155(iParam0, 1, 0);
			func_155(iParam0, 2, 0);
			func_155(iParam0, 3, 0);
			func_155(iParam0, 4, 0);
			func_155(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_155(iParam0, 0, 0);
	}
}

void func_155(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_32744[iParam0]), bParam1);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_32744[iParam0]), bParam1);
	}
}

bool func_156(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], bParam1);
}

void func_157(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_158(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_152(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			UNK_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
			UNK_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
			Global_75441.f_139[iParam0] = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 13))
		{
			func_154(iParam0, 0);
		}
	}
}

void func_159(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_158(iParam0);
	func_154(iParam0, 0);
}

void func_160()
{
	Global_22211.f_6 = 1;
}

void func_161()
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bLocal_29))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_32) < 2500f)
			{
				bLocal_29 = UNK_0x728870EB733D12A1();
				if (UNK_0xC844350D5D58C99A(bLocal_29))
				{
					iVar0 = UNK_0x134B62B726CEC8E6(bLocal_29);
					if (iVar0 == joaat("DUNE"))
					{
					}
				}
			}
		}
	}
}

int func_162()
{
	return joaat("DUNE");
}

void func_163(bool bParam0)
{
	UNK_0x71199B01895C6202(joaat("DUNE"));
	if (UNK_0xC844350D5D58C99A(bLocal_54))
	{
		if (bParam0)
		{
			UNK_0xA954465BA6FDEFE2(&bLocal_54);
		}
		else
		{
			UNK_0x046C362CF15F1935(&bLocal_54);
		}
	}
}

bool func_164()
{
	if (func_28(9))
	{
		if (UNK_0x8A22C4C08282BF26(joaat("TREVOR2")) == 1)
		{
			if (!iLocal_38[0])
			{
				iLocal_38[0] = 1;
			}
			return false;
		}
		if (UNK_0x8A22C4C08282BF26(joaat("FINALE_HEIST2B")) == 1)
		{
			if (!iLocal_38[1])
			{
				iLocal_38[1] = 1;
			}
			return false;
		}
		if (UNK_0x8A22C4C08282BF26(joaat("TRAFFICK_AIR")) == 1)
		{
			if (!iLocal_38[2])
			{
				iLocal_38[2] = 1;
			}
			return false;
		}
		if (UNK_0x8A22C4C08282BF26(joaat("TRAFFICK_GROUND")) == 1)
		{
			if (!iLocal_38[3])
			{
				iLocal_38[3] = 1;
			}
			return false;
		}
		if (Global_98778)
		{
			return false;
		}
		if (iLocal_35 != -1)
		{
			return false;
		}
		if (func_186() == 309)
		{
			return false;
		}
		return true;
	}
	return false;
}

void func_165(var uParam0, int iParam1)
{
	func_166(uParam0, iParam1);
}

void func_166(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_167(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_168(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_168(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_169();
	}
}

void func_169()
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

bool func_170(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_171(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar0 = false;
	if (iLocal_47 != 9)
	{
		if (!Global_111638.f_19978.f_14)
		{
			func_1(105, 1, 0);
			Global_111638.f_19978.f_14 = 1;
			bVar0 = true;
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		func_1(105, 0, 0);
		Global_111638.f_19978.f_14 = 0;
	}
	if (iLocal_47 != 1 && iLocal_47 != 8)
	{
		if (func_164() && !*iParam0)
		{
			func_172(0);
			iLocal_47 = 1;
		}
	}
	switch (iLocal_47)
	{
		case 0:
			iLocal_47 = 1;
			break;
		case 1:
			if (!func_164())
			{
				if (fLocal_31 < 50625f)
				{
					iLocal_47 = 2;
				}
				else if (bLocal_37)
				{
					iLocal_47 = 2;
				}
			}
			break;
		case 2:
			UNK_0x523BCC9DC80CD82F(joaat("CUBAN800"));
			iLocal_47 = 3;
			break;
		case 3:
			UNK_0x523BCC9DC80CD82F(joaat("CUBAN800"));
			if (UNK_0xB87F6CF6E5628C67(joaat("CUBAN800")))
			{
				if (!UNK_0xC844350D5D58C99A(bLocal_48))
				{
					UNK_0x28F5E4DA506AC0CA(vLocal_50, 8f, 0, 0, 0, 0, false, 0);
					bLocal_48 = UNK_0x122AAB0B1D6F55AD(joaat("CUBAN800"), vLocal_50, 25.29f, true, true, false);
					UNK_0x71199B01895C6202(joaat("CUBAN800"));
					UNK_0xC6A6B4DDD6DC073A(bLocal_48, 2);
					func_165(&(Global_111638.f_19978), 128);
					iLocal_47 = 4;
				}
				else
				{
					iLocal_47 = 4;
				}
			}
			break;
		case 4:
			if (UNK_0xC844350D5D58C99A(bLocal_48))
			{
				if (UNK_0x437347B10A200C4B(bLocal_48, 0) || UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
				{
					iLocal_47 = 9;
					return;
				}
			}
			if (func_28(9))
			{
				if (UNK_0x8A22C4C08282BF26(joaat("TRAFFICK_GROUND")) == 1)
				{
					if (!UNK_0x437347B10A200C4B(bLocal_48, 0))
					{
						UNK_0x71EDC33E5A423750(bLocal_48, 2);
						return;
					}
				}
			}
			else if (UNK_0x8A22C4C08282BF26(joaat("TRAFFICK_GROUND")) == 0)
			{
				if (!UNK_0x437347B10A200C4B(bLocal_48, 0))
				{
					UNK_0x71EDC33E5A423750(bLocal_48, 1);
				}
			}
			if (!bLocal_37)
			{
				if (fLocal_31 >= 50625f && !*iParam0)
				{
					func_172(0);
					iLocal_47 = 1;
					return;
				}
			}
			if (!bVar0 && !*iParam0)
			{
				if (!bLocal_49)
				{
					if (UNK_0x405E212DDE472467(bLocal_28, 0))
					{
						iVar1 = UNK_0x3C66DF04E6EA3587(bLocal_28);
						if (iVar1 == bLocal_48)
						{
							bLocal_49 = true;
							UNK_0x046C362CF15F1935(&bLocal_48);
							iLocal_47 = 9;
						}
					}
				}
			}
			if (*iParam0)
			{
				UNK_0xF821F915BC24D246(bLocal_28, bLocal_48, -1);
			}
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0x437347B10A200C4B(bLocal_48, 0))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_48, 1))
				{
					func_160();
				}
			}
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					iVar2 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
					if (iVar2 == bLocal_48)
					{
						UNK_0x92DCE5C81176D2B4("Traffick_Air");
						if (UNK_0xC844350D5D58C99A(bLocal_29) && !UNK_0x437347B10A200C4B(bLocal_29, 0))
						{
							if (UNK_0x134B62B726CEC8E6(bLocal_29) != joaat("DUNE") && UNK_0x134B62B726CEC8E6(bLocal_29) != joaat("CUBAN800"))
							{
								if (!UNK_0x3D1053F9EB43B7AD(bLocal_29, 2137.12f, 4799.97f, 39.67854f, 2116.64f, 4790.417f, 45.45295f, 25f, 0, true, 0))
								{
									func_133(bLocal_29, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 24, 0);
								}
							}
							else if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
							{
								UNK_0x7EA00EB725DAA91D(bLocal_29);
							}
						}
						iLocal_47 = 6;
					}
				}
			}
			break;
		case 6:
			if (UNK_0x1FBF08B001C4788A("Traffick_Air"))
			{
				iVar3 = 0;
				if (*iParam0)
				{
					iVar3 = 1;
				}
				else
				{
					iVar3 = func_131(&iLocal_35, 6, 9, 0, 0);
					bLocal_45 = true;
				}
				if (iVar3 == 1)
				{
					if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
					{
						UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
					}
					if (!*iParam0)
					{
						func_82(UNK_0xBB0808A181D4745C(), 0);
					}
					iLocal_30 = SYSTEM::START_NEW_SCRIPT("Traffick_Air", 35000);
					func_81(15);
					UNK_0x5E8C29AE121DF1C7("Traffick_Air");
					UNK_0x046C362CF15F1935(&bLocal_48);
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						if (Global_42596 == 1)
						{
							func_72(UNK_0x16F2683693E537C9());
						}
					}
					bLocal_49 = false;
					iLocal_47 = 7;
				}
				else if (iVar3 == 0)
				{
					bLocal_45 = false;
					func_172(0);
					iLocal_47 = 9;
				}
			}
			break;
		case 7:
			if (!UNK_0x1727A44C562FBED2(iLocal_30))
			{
				if (func_170(Global_110289, 1))
				{
					iLocal_47 = 8;
				}
				else
				{
					func_71(&iLocal_35);
					func_54();
					bVar4 = func_53();
					func_45(&bVar4, 0, 0, 3, 0, 0, 0);
					Global_111638.f_19978.f_11 = bVar4;
					func_1(105, 0, 0);
					Global_111638.f_19978.f_14 = 0;
					iLocal_47 = 9;
				}
				*iParam0 = 0;
				func_43(&Global_110289, 1);
			}
			break;
		case 8:
			if (Global_98744 == 10)
			{
				if (Global_98778)
				{
					*iParam0 = 1;
					if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
					{
						if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
						{
							UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), 2136.446f, 4791.483f, 39.9702f, 1, 0, 0, 1);
						}
					}
					UNK_0x523BCC9DC80CD82F(joaat("CUBAN800"));
					UNK_0x92DCE5C81176D2B4("Traffick_Air");
					if (UNK_0xB87F6CF6E5628C67(joaat("CUBAN800")))
					{
						UNK_0x28F5E4DA506AC0CA(vLocal_50, 8f, 0, 0, 0, 0, false, 0);
						bLocal_48 = UNK_0x122AAB0B1D6F55AD(joaat("CUBAN800"), vLocal_50, 25.29f, true, true, false);
						UNK_0x71199B01895C6202(joaat("CUBAN800"));
						iLocal_47 = 3;
					}
				}
				else
				{
					*iParam0 = 0;
					iLocal_47 = 1;
				}
			}
			else if (Global_98744 == 13)
			{
				func_71(&iLocal_35);
				func_54();
				*iParam0 = 0;
				iLocal_47 = 1;
			}
			break;
		case 9:
			if (fLocal_31 >= 50625f && func_32(Global_111638.f_19978.f_11))
			{
				func_172(0);
				iLocal_47 = 1;
			}
			break;
		default:
			break;
	}
}

void func_172(bool bParam0)
{
	UNK_0x71199B01895C6202(joaat("CUBAN800"));
	if (UNK_0xC844350D5D58C99A(bLocal_48))
	{
		if (bParam0)
		{
			UNK_0xA954465BA6FDEFE2(&bLocal_48);
		}
		else
		{
			UNK_0x046C362CF15F1935(&bLocal_48);
		}
	}
	if (func_170(Global_111638.f_19978, 128))
	{
		func_43(&(Global_111638.f_19978), 128);
	}
	bLocal_49 = false;
}

bool func_173()
{
	if (!func_184())
	{
		return false;
	}
	if (!bLocal_45)
	{
		if (func_186() == 309)
		{
			return true;
		}
		if (!func_29(9))
		{
			return false;
		}
	}
	if (UNK_0x8A22C4C08282BF26(joaat("TRAFFICK_GROUND")) == 1 || UNK_0x8A22C4C08282BF26(joaat("TRAFFICK_AIR")) == 1)
	{
		return true;
	}
	bLocal_28 = UNK_0x16F2683693E537C9();
	if (UNK_0x437347B10A200C4B(bLocal_28, 0))
	{
	}
	if (func_183())
	{
		return true;
	}
	if (func_22() != 2)
	{
		return false;
	}
	if (!func_177(6))
	{
		if (UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9()))
		{
			bLocal_46 = true;
		}
		if (!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()))
		{
			bLocal_46 = true;
		}
		if (UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false))
		{
		}
		if (!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()))
		{
		}
		if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
		{
		}
		if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
		{
		}
		if (UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9()))
		{
		}
		if (UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9()))
		{
		}
		if (UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
		{
		}
		if (UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1))
		{
		}
		if (UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62()))
		{
		}
		if (Global_110685)
		{
		}
		if (Global_30770)
		{
		}
		if (func_176())
		{
		}
		if (func_175(8, -1))
		{
		}
		if (func_174())
		{
			return true;
		}
		return false;
	}
	else
	{
		bLocal_46 = false;
	}
	return true;
}

bool func_174()
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

bool func_175(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1377170.f_1048, bParam0);
}

bool func_176()
{
	return Global_1312877;
}

bool func_177(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_22();
				if (!func_13(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_182()) || Global_110685) || Global_30770) || func_176()) || func_175(8, -1)) || func_130()) || func_181()) || func_174()) || func_180()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_182()) || Global_30770) || func_176()) || func_175(8, -1)) || func_174()) || func_130()) || func_181()) || func_180()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_182()) || Global_110685) || Global_30770) || func_176()) || func_175(8, -1)) || func_174()) || func_130()) || func_181()) || func_180()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_182()) || Global_110685) || Global_30770) || func_176()) || func_175(8, -1)) || func_130()) || func_181()) || func_180()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_182() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_175(8, -1)) || func_180()) || func_179()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_175(8, -1) || func_130()) || func_181()) || func_179()) || func_178())
						{
							return false;
						}
						if ((UNK_0x991B1F0980C62628() && UNK_0x19EC8D83154D7CC1() != 3) && UNK_0x00A15D69BCAA5267() < 8)
						{
							return false;
						}
						break;
					case 6:
						if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
						{
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_182()) || Global_30770) || func_176()) || func_175(8, -1)) || func_181()) || func_174()) || func_180()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_182()) || func_181()) || Global_110685) || Global_30770) || func_176()) || Global_42596) || func_175(8, -1)) || func_174()) || func_179()) || func_180()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_182()) || Global_110685) || Global_30770) || func_176()) || func_175(8, -1)) || func_174()) || func_179()) || func_130()) || func_181()) || func_180())
						{
							return false;
						}
						break;
				}
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
	else
	{
		return false;
	}
	return true;
}

bool func_178()
{
	return Global_98783.f_1;
}

bool func_179()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_180()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_181()
{
	return Global_98796.f_346 > 0;
}

bool func_182()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_183()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return false;
	}
	return true;
}

bool func_184()
{
	if (Global_111638.f_9080)
	{
		return (func_185(0, 15) && func_185(0, 16));
	}
	else
	{
		return true;
	}
	return false;
}

bool func_185(int iParam0, bool bParam1)
{
	bool bVar0;

	if (iParam0 == 11 || iParam0 == -1)
	{
		return false;
	}
	if (bParam1 < 0 || bParam1 >= 32)
	{
		return false;
	}
	bVar0 = UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iParam0], bParam1);
	return bVar0;
}

int func_186()
{
	if (UNK_0x991B1F0980C62628())
	{
		return Global_96854;
	}
	if (func_180())
	{
		return Global_96854;
	}
	return 318;
}

void func_187()
{
	if (!bLocal_80)
	{
		iLocal_79 = UNK_0x7D6CA5F52B3748BF(Vector(40.073f, 4788.559f, 2157.109f) - Vector(25f, 25f, 25f), Vector(40.073f, 4788.559f, 2157.109f) + Vector(25f, 25f, 25f), 0, 1, 1, 1);
		bLocal_80 = true;
	}
}

int func_188(int iParam0)
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

void func_189()
{
	if (iLocal_79 != 0)
	{
		UNK_0x2952D66A502EA873(iLocal_79, 0);
	}
	func_172(1);
	func_163(1);
	func_192();
	func_190();
	UNK_0x10FAF14A60A0DBE1();
}

void func_190()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_95677[iVar0 /*17*/] && !Global_95677[iVar0 /*17*/].f_1)
		{
			if (Global_95677[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_95677[iVar0 /*17*/].f_5 != 88 && Global_95677[iVar0 /*17*/].f_5 != 89) && Global_95677[iVar0 /*17*/].f_5 != 92)
				{
					func_191(Global_95677[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_191(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92729[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92729[iParam0 /*2*/] = 0;
	}
}

void func_192()
{
	int iVar0;

	iLocal_36 = 0;
	UNK_0x2914827AC2790D54(joaat("WEAPON_COMBATPISTOL"));
	UNK_0x2914827AC2790D54(joaat("WEAPON_SMG"));
	UNK_0x2914827AC2790D54(joaat("WEAPON_STICKYBOMB"));
	UNK_0x2914827AC2790D54(joaat("WEAPON_ASSAULTSHOTGUN"));
	UNK_0x2914827AC2790D54(joaat("WEAPON_RPG"));
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (UNK_0x762119754C50557A(uLocal_67[iVar0]))
		{
			UNK_0x40B7230FD4C59AA2(uLocal_67[iVar0]);
		}
		if (UNK_0xC844350D5D58C99A(uLocal_61[iVar0]))
		{
			UNK_0xF690C84DADBB3551(&(uLocal_61[iVar0]));
		}
		iVar0++;
	}
}

