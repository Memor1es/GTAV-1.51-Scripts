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
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = false;
	bool bLocal_60 = false;
	bool bLocal_61 = false;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = false;
	bool bLocal_66 = false;
	bool bLocal_67 = false;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	bool bLocal_74 = false;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	bool bLocal_80 = false;
	bool bLocal_81 = false;
	bool bLocal_82 = false;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
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
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_53 = 2;
	UNK_0xB57F88F0123F4C38();
	if (UNK_0x2EBF608FFE6CA406(32))
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		func_104();
		switch (iLocal_54)
		{
			case 0:
				func_99();
				break;
			case 1:
				func_90();
				func_2();
				Global_96028 = 0;
				break;
			case 2:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	iLocal_54 = 0;
}

void func_2()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;

	if (bLocal_60)
	{
		bLocal_60 = false;
	}
	else
	{
		iLocal_55++;
	}
	bLocal_59 = false;
	if (UNK_0x8CD06866876216F2())
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = func_85();
	}
	if (iVar0 != iLocal_58)
	{
		iLocal_58 = iVar0;
		bLocal_59 = true;
		bLocal_66 = false;
		bLocal_67 = false;
		bLocal_74 = false;
		bLocal_80 = false;
	}
	if (iLocal_58 == 145)
	{
		return;
	}
	bVar1 = false;
	if ((iLocal_55 == 6 && func_84(64)) || (iLocal_55 == 5 && UNK_0x8A22C4C08282BF26(joaat("PILOT_SCHOOL")) > 0))
	{
		bVar1 = true;
		bLocal_60 = true;
	}
	func_78();
	if (Global_96026 || (Global_96027 && !func_75(0)))
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				func_74(iLocal_58, iVar2);
				iVar2++;
			}
			Global_96026 = 0;
		}
	}
	if (!bVar1)
	{
		if (((((((((UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) || (!UNK_0x8CD06866876216F2() && !func_73(iLocal_58))) || UNK_0x991B1F0980C62628()) || func_72()) || UNK_0x22A8E52414415B76()) || UNK_0x757EF87A33649210()) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || Global_76620) || Global_96028) || bLocal_61)
		{
			bLocal_82 = true;
			iLocal_83 = UNK_0x1C0640BA9A7327B3();
			if (UNK_0x8CD06866876216F2())
			{
				iLocal_84 = UNK_0x2B6E0A53779D29EA();
			}
			return;
		}
		if (bLocal_82)
		{
			if ((!UNK_0x8CD06866876216F2() && (UNK_0x1C0640BA9A7327B3() - iLocal_83) > 3000) || (UNK_0x8CD06866876216F2() && UNK_0xE7E95E58E001D801(UNK_0x2B6E0A53779D29EA(), UNK_0x04787588C7E736F8(iLocal_84, 3000))))
			{
				bLocal_82 = false;
			}
			else
			{
				return;
			}
		}
	}
	if (((!UNK_0x8CD06866876216F2() && (UNK_0x1C0640BA9A7327B3() - iLocal_56) > 2000) || (UNK_0x8CD06866876216F2() && UNK_0xE7E95E58E001D801(UNK_0x2B6E0A53779D29EA(), UNK_0x04787588C7E736F8(iLocal_57, 2000)))) || bLocal_59)
	{
		if (iLocal_55 >= 8)
		{
			iLocal_55 = 0;
			iLocal_56 = UNK_0x1C0640BA9A7327B3();
			if (UNK_0x8CD06866876216F2())
			{
				iLocal_57 = UNK_0x2B6E0A53779D29EA();
			}
		}
		iVar11 = 1;
		if (bLocal_59)
		{
			iVar11 = 8;
		}
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = true;
			if (bLocal_59)
			{
				iVar8 = iVar12;
			}
			else
			{
				iVar8 = iLocal_55;
			}
			func_71(iLocal_58, iVar8, &iVar6, &iVar7);
			if (UNK_0x8CD06866876216F2())
			{
				iVar3 = func_70(iVar7, -1, 0);
			}
			else if (iVar8 == 0)
			{
				iVar3 = Global_111638.f_2358.f_539.f_2387[iLocal_58];
			}
			else
			{
				UNK_0x6FB46C25CCB7E6D5(iVar6, &iVar3, -1);
			}
			iVar5 = iVar3;
			iVar3 = func_69(iVar3, 0, 100);
			if (func_56(iLocal_58, iVar8, iVar3, &bVar4))
			{
				if (UNK_0x8CD06866876216F2())
				{
					func_55(iVar7, bVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					if (Global_111638.f_2358.f_539.f_2387[iLocal_58] == 0)
					{
						bVar13 = false;
					}
					Global_111638.f_2358.f_539.f_2387[iLocal_58] = bVar4;
				}
				else
				{
					UNK_0xCDC520E5E48E63D9(iVar6, bVar4, 1);
				}
				if (bVar4 > func_53(iLocal_58, iVar8, -1))
				{
					if (UNK_0x8CD06866876216F2())
					{
					}
					else if ((!Global_111638.f_9080 && !func_52(0)) || !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_2[27 /*3*/], 2))
					{
						bVar13 = false;
					}
					bVar14 = bVar4;
					iVar15 = (bVar14 - (bVar14 % func_51(iLocal_58, iVar8)));
					if ((bVar14 % func_51(iLocal_58, iVar8)) >= 0)
					{
						iVar15 = (iVar15 + func_51(iLocal_58, iVar8));
					}
					if (bVar14 >= iVar15)
					{
						bVar14 = iVar15;
					}
					else
					{
						bVar14 = (iVar15 - func_51(iLocal_58, iVar8));
					}
					if (bVar4 > bVar14)
					{
						bVar13 = false;
					}
					if (func_46())
					{
						bVar13 = false;
					}
					if (bVar13)
					{
						if (!bLocal_59)
						{
							if (UNK_0x8CD06866876216F2())
							{
								if (func_45(117, -1) == 0)
								{
									if (!UNK_0xFEBC1E4EC9E001F0() && func_9())
									{
										func_8("STAT_HELP2", -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
							bLocal_61 = true;
							iLocal_64 = (bVar4 - iVar3);
							iLocal_64 = (iLocal_64 + (iVar3 % func_51(iLocal_58, iVar8)));
							bLocal_65 = bVar4;
							iLocal_62 = iLocal_58;
							iLocal_63 = iVar8;
						}
					}
					if (bVar4 >= 100)
					{
						if (func_3(iLocal_58, iVar8, &iVar9))
						{
							if (iLocal_58 == 0)
							{
								UNK_0x6FB46C25CCB7E6D5(joaat("SP0_TOTAL_PLAYING_TIME"), &bVar10, -1);
								UNK_0xCDC520E5E48E63D9(iVar9, bVar10, 1);
							}
							else if (iLocal_58 == 1)
							{
								UNK_0x6FB46C25CCB7E6D5(joaat("SP1_TOTAL_PLAYING_TIME"), &bVar10, -1);
								UNK_0xCDC520E5E48E63D9(iVar9, bVar10, 1);
							}
							else if (iLocal_58 == 2)
							{
								UNK_0x6FB46C25CCB7E6D5(joaat("SP2_TOTAL_PLAYING_TIME"), &bVar10, -1);
								UNK_0xCDC520E5E48E63D9(iVar9, bVar10, 1);
							}
							else if (iLocal_58 == 3)
							{
							}
						}
					}
				}
				func_74(iLocal_58, iVar8);
			}
			else if (bVar4 < iVar5)
			{
				bVar16 = true;
				if (UNK_0x8CD06866876216F2())
				{
					func_55(iVar7, bVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					Global_111638.f_2358.f_539.f_2387[iLocal_58] = bVar4;
					bVar16 = false;
				}
				else
				{
					UNK_0xCDC520E5E48E63D9(iVar6, bVar4, 1);
				}
				if (bVar16)
				{
					func_74(iLocal_58, iVar8);
				}
			}
			iVar12++;
		}
	}
	else
	{
		bLocal_60 = true;
	}
}

bool func_3(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("LAST_PLAYING_TIME");
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*iParam2 = joaat("SP0_SPECIAL_ABILITY_MAXED");
					break;
				case 1:
					*iParam2 = joaat("SP0_STAMINA_MAXED");
					break;
				case 3:
					*iParam2 = joaat("SP0_LUNG_CAPACITY_MAXED");
					break;
				case 2:
					*iParam2 = joaat("SP0_STRENGTH_MAXED");
					break;
				case 4:
					*iParam2 = joaat("SP0_WHEELIE_ABILITY_MAXED");
					break;
				case 5:
					*iParam2 = joaat("SP0_FLYING_ABILITY_MAXED");
					break;
				case 6:
					*iParam2 = joaat("SP0_SHOOTING_ABILITY_MAXED");
					break;
				case 7:
					*iParam2 = joaat("SP0_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					*iParam2 = joaat("SP1_SPECIAL_ABILITY_MAXED");
					break;
				case 1:
					*iParam2 = joaat("SP1_STAMINA_MAXED");
					break;
				case 3:
					*iParam2 = joaat("SP1_LUNG_CAPACITY_MAXED");
					break;
				case 2:
					*iParam2 = joaat("SP1_STRENGTH_MAXED");
					break;
				case 4:
					*iParam2 = joaat("SP1_WHEELIE_ABILITY_MAXED");
					break;
				case 5:
					*iParam2 = joaat("SP1_FLYING_ABILITY_MAXED");
					break;
				case 6:
					*iParam2 = joaat("SP1_SHOOTING_ABILITY_MAXED");
					break;
				case 7:
					*iParam2 = joaat("SP1_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					*iParam2 = joaat("SP2_SPECIAL_ABILITY_MAXED");
					break;
				case 1:
					*iParam2 = joaat("SP2_STAMINA_MAXED");
					break;
				case 3:
					*iParam2 = joaat("SP2_LUNG_CAPACITY_MAXED");
					break;
				case 2:
					*iParam2 = joaat("SP2_STRENGTH_MAXED");
					break;
				case 4:
					*iParam2 = joaat("SP2_WHEELIE_ABILITY_MAXED");
					break;
				case 5:
					*iParam2 = joaat("SP2_FLYING_ABILITY_MAXED");
					break;
				case 6:
					*iParam2 = joaat("SP2_SHOOTING_ABILITY_MAXED");
					break;
				case 7:
					*iParam2 = joaat("SP2_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	}
	return *iParam2 != joaat("LAST_PLAYING_TIME");
}

void func_4(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (func_7())
	{
		iVar0 = Global_2583656[iParam0 /*3*/][func_5(bParam2)];
		if (iVar0 != 0)
		{
			UNK_0xD8B681091EBE4064(iVar0, bParam1, iParam3);
		}
	}
}

bool func_5(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = bParam0;
	if (bVar0 == -1)
	{
		iVar1 = func_6();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			bVar0 = iVar1;
		}
		else
		{
			bVar0 = false;
			Global_2548146 = 1;
		}
	}
	return bVar0;
}

int func_6()
{
	return Global_1312745;
}

bool func_7()
{
	return true;
	return false;
}

void func_8(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_9()
{
	if ((UNK_0x2BD7F414441CE892() && UNK_0x0178C60FEA5C5A75()) && !func_44(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (Global_1662154 == 1)
	{
		return false;
	}
	if (Global_1662006 == 1)
	{
		return false;
	}
	if (func_43(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (UNK_0xEA24327BC8283DFF())
	{
		return false;
	}
	if (Global_1574397 == 1)
	{
		return false;
	}
	if (UNK_0x1C53FD812DB1E31C())
	{
		return false;
	}
	if (Global_968398)
	{
		return false;
	}
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_750 == 1)
	{
		return false;
	}
	if (func_42())
	{
		return false;
	}
	if (func_41())
	{
		return false;
	}
	if (func_40())
	{
		if (!func_41())
		{
			if (!func_39(3, -1))
			{
				if (func_37(&Global_2463001, 300000, 0) == 1)
				{
					func_36(&Global_2462999);
					func_34(3, -1);
				}
				else if (func_37(&Global_2462999, 7000, 0) == 0)
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}
	if (func_33())
	{
		return false;
	}
	if (func_32())
	{
		return false;
	}
	if (func_30())
	{
		return false;
	}
	if (func_29())
	{
		return false;
	}
	if (func_28())
	{
		return false;
	}
	if (func_27())
	{
		return false;
	}
	if (UNK_0xF929B1A0A409FF93())
	{
		return false;
	}
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (UNK_0x18AF0C72ABD5543B())
	{
		if (func_26(UNK_0x16F2683693E537C9()) == joaat("WEAPON_SNIPERRIFLE") || func_26(UNK_0x16F2683693E537C9()) == joaat("WEAPON_HEAVYSNIPER"))
		{
			return false;
		}
	}
	if (UNK_0x757EF87A33649210())
	{
		return false;
	}
	if (func_25(8, -1))
	{
		return false;
	}
	if (func_24(12, -1))
	{
		return false;
	}
	if (UNK_0x2F1FB0453B36C270(19))
	{
		return false;
	}
	if (func_23())
	{
		return false;
	}
	if (func_22())
	{
		return false;
	}
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_35)
	{
		return false;
	}
	if (Global_1574191)
	{
		return false;
	}
	if (Global_1574195)
	{
		return false;
	}
	if (Global_1574197)
	{
		return false;
	}
	if (Global_2439138.f_3899.f_39)
	{
		return false;
	}
	if (func_21(0))
	{
		return false;
	}
	if (func_20())
	{
		return false;
	}
	if (Global_2537071.f_3967)
	{
		return false;
	}
	if (Global_2439138.f_3765)
	{
		return false;
	}
	if (!func_19(UNK_0xD803B885F5E47A62(), 1, 0))
	{
		return false;
	}
	if (func_18(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (Global_2439138.f_3899.f_39 == 1)
	{
		return false;
	}
	if (Global_2451426.f_2846.f_25 == 1)
	{
		return false;
	}
	if (func_17(1))
	{
		return false;
	}
	if (func_15())
	{
		return false;
	}
	if (UNK_0x2F1FB0453B36C270(16))
	{
		return false;
	}
	if (func_14())
	{
		return false;
	}
	if (func_13())
	{
		return false;
	}
	if (UNK_0x8FA469D9C5F1A01F())
	{
		if (func_12("FHU_HELP3"))
		{
			return false;
		}
	}
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_732)
	{
		return false;
	}
	if (func_10(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_10(int iParam0)
{
	if (iParam0 != func_11())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_334, 26);
	}
	return false;
}

int func_11()
{
	return -1;
}

bool func_12(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

bool func_13()
{
	return Global_2439138.f_1894.f_701 != 0;
}

bool func_14()
{
	return Global_2439138.f_3047.f_578;
}

bool func_15()
{
	return func_16();
}

bool func_16()
{
	return Global_1370527.f_40 == 3;
}

bool func_17(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_18(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1627020[iParam0 /*38*/].f_14, false);
}

bool func_19(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (UNK_0x40B8C182D63932FC(bParam0))
		{
			if (bParam1)
			{
				if (!UNK_0xE1DBBD6CE209517C(bParam0))
				{
					return false;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[bVar0])
				{
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

bool func_20()
{
	if (UNK_0x8A22C4C08282BF26(joaat("APPCAMERA")) > 0)
	{
		return true;
	}
	return false;
}

bool func_21(int iParam0)
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

bool func_22()
{
	return Global_1377170.f_112;
}

bool func_23()
{
	return Global_2439138.f_2723[0 /*80*/].f_1 != 0;
}

bool func_24(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1377170.f_137[iParam1])
				{
					return true;
				}
				if (Global_1377170.f_170[iParam1])
				{
					return true;
				}
			}
			break;
		default:
			if (UNK_0xEAE0D21A50E6C7F4(Global_1377170.f_1046, bParam0))
			{
				return true;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1377170.f_1047, bParam0))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_25(bool bParam0, int iParam1)
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

int func_26(bool bParam0)
{
	var uVar0;

	UNK_0xCAE036C45E7FC720(bParam0, &uVar0, 1);
	return uVar0;
}

bool func_27()
{
	return Global_2450632.f_592;
}

bool func_28()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_959568.f_8, 13);
}

bool func_29()
{
	return Global_2450632.f_591;
}

bool func_30()
{
	if (func_31() == 1 || func_31() == 4)
	{
		return true;
	}
	return false;
}

int func_31()
{
	return Global_1312467.f_18;
}

bool func_32()
{
	if (func_31() == 3 || func_31() == 2)
	{
		return true;
	}
	return false;
}

bool func_33()
{
	if (UNK_0x8A22C4C08282BF26(joaat("MAINTRANSITION")) > 0)
	{
		return true;
	}
	return false;
}

void func_34(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_6();
	}
	Global_1387909 = 0;
	if (UNK_0xE0DC536BD2AC0301() == 0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0:
			UNK_0xD5F10CECBB7D51B6(false, bParam1);
			iVar1 = func_35(bParam1);
			bVar0 = UNK_0x0A4C9A3D51EAE31F(iVar1);
			break;
		default:
			iVar1 = func_35(bParam1);
			bVar0 = UNK_0x0A4C9A3D51EAE31F(iVar1);
			if (!UNK_0xEAE0D21A50E6C7F4(bVar0, bParam0))
			{
				UNK_0x5D96D8530B3D0904(&bVar0, bParam0);
				UNK_0xD5F10CECBB7D51B6(bVar0, bParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_4(120, 0, bParam1, 1);
			func_4(124, 0, bParam1, 1);
			func_4(115, 0, bParam1, 1);
			func_4(119, 0, bParam1, 1);
			func_4(121, 0, bParam1, 1);
			func_4(122, 0, bParam1, 1);
			func_4(125, 0, bParam1, 1);
			func_55(1303, 0, bParam1, 1, 0);
			func_55(7233, 0, bParam1, 1, 0);
			break;
	}
}

int func_35(bool bParam0)
{
	int iVar0;

	if (bParam0 == -1)
	{
		bParam0 = func_6();
	}
	switch (bParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		case 1:
			iVar0 = 915;
			break;
		case 2:
			iVar0 = 916;
			break;
		case 3:
			iVar0 = 917;
			break;
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_36(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_37(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_38(uParam0, bParam2, 0);
	if (UNK_0x8CD06866876216F2() && !bParam2)
	{
		if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			func_36(uParam0);
			return 1;
		}
	}
	else if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		func_36(uParam0);
		return 1;
	}
	return 0;
}

void func_38(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (UNK_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = UNK_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = UNK_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = UNK_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 1;
	}
}

bool func_39(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar0 = func_35(iParam1);
	bVar1 = UNK_0x0A4C9A3D51EAE31F(iVar0);
	return UNK_0xEAE0D21A50E6C7F4(bVar1, bParam0);
}

bool func_40()
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

bool func_41()
{
	return Global_1312877;
}

bool func_42()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_196 != 0;
}

bool func_43(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (!UNK_0x8CD06866876216F2())
	{
		return false;
	}
	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		return Global_2513889;
	}
	else
	{
		bVar0 = UNK_0x9539D44F3E4492F6(bParam0);
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			iVar1 = UNK_0x134B62B726CEC8E6(bVar0);
			if (iVar1 == joaat("MP_M_FREEMODE_01") || iVar1 == joaat("MP_F_FREEMODE_01"))
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_44(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310.f_3, 13);
}

int func_45(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_5(bParam1)];
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_46()
{
	if (!func_49(1))
	{
		return false;
	}
	if (func_47())
	{
		return false;
	}
	return Global_1674343;
}

bool func_47()
{
	return func_48(UNK_0xD803B885F5E47A62());
}

bool func_48(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_11())
		{
			return Global_1628237[iParam0 /*615*/].f_11 == iParam0;
		}
	}
	return false;
}

bool func_49(bool bParam0)
{
	return func_50(UNK_0xD803B885F5E47A62(), bParam0);
}

bool func_50(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_48(iParam0))
		{
			return false;
		}
	}
	return Global_1628237[iParam0 /*615*/].f_11 != func_11();
}

int func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20;
				case 1:
					return 20;
				case 3:
					return 20;
				case 2:
					return 20;
				case 4:
					return 20;
				case 5:
					return 20;
				case 6:
					return 20;
				case 7:
					return 20;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 20;
				case 1:
					return 20;
				case 3:
					return 20;
				case 2:
					return 20;
				case 4:
					return 20;
				case 5:
					return 20;
				case 6:
					return 20;
				case 7:
					return 20;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 20;
				case 1:
					return 20;
				case 3:
					return 20;
				case 2:
					return 20;
				case 4:
					return 20;
				case 5:
					return 20;
				case 6:
					return 20;
				case 7:
					return 20;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 20;
				case 1:
					return 20;
				case 3:
					return 20;
				case 2:
					return 20;
				case 4:
					return 20;
				case 5:
					return 20;
				case 6:
					return 20;
				case 7:
					return 20;
			}
			break;
	}
	return 1;
}

bool func_52(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

bool func_53(int iParam0, int iParam1, int iParam2)
{
	if (!UNK_0x8CD06866876216F2())
	{
		if (func_54(14))
		{
			return 100;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return false;
				case 1:
					return 47;
				case 3:
					return 22;
				case 2:
					return 21;
				case 4:
					return 54;
				case 5:
					return 31;
				case 6:
					return 79;
				case 7:
					return 81;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return false;
				case 1:
					return 51;
				case 3:
					return 46;
				case 2:
					return 49;
				case 4:
					return 71;
				case 5:
					return 19;
				case 6:
					return 24;
				case 7:
					return 21;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return false;
				case 1:
					return 23;
				case 3:
					return 28;
				case 2:
					return 79;
				case 4:
					return 31;
				case 5:
					return 82;
				case 6:
					return 69;
				case 7:
					return 49;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_70(1224, iParam2, 0);
				case 3:
					return func_70(1230, iParam2, 0);
				case 2:
					return func_70(1226, iParam2, 0);
				case 4:
					return func_70(1229, iParam2, 0);
				case 5:
					return func_70(1228, iParam2, 0);
				case 6:
					return func_70(1225, iParam2, 0);
				case 7:
					return func_70(1227, iParam2, 0);
			}
			break;
	}
	return false;
}

bool func_54(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_55(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_5(bParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

bool func_56(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	*bParam3 = func_57(iParam0, iParam1, 0, -1);
	if (*bParam3 > iParam2)
	{
		return true;
	}
	return false;
}

int func_57(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	float fVar12;

	iVar2 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_SPECIAL_ABILITY_UNLOCKED"), &iVar3, -1);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 1)
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_SPECIAL_ABILITY_UNLOCKED"), &iVar3, -1);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 2)
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_SPECIAL_ABILITY_UNLOCKED"), &iVar3, -1);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 = SYSTEM::TO_FLOAT(func_70(64, iParam3, 0));
			}
			break;
		case 1:
			if (iParam0 == 0)
			{
				UNK_0x893A626C476B583D(joaat("SP0_DIST_RUNNING"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_111638.f_2358.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				UNK_0x893A626C476B583D(joaat("SP1_DIST_RUNNING"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_111638.f_2358.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				UNK_0x893A626C476B583D(joaat("SP2_DIST_RUNNING"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_111638.f_2358.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_68(20, iParam3) / 175f);
				func_65(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_SWIMMING"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_SWIMMING"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_SWIMMING"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_64(func_63(50, iParam3))));
				func_65(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_DRIVING_BICYCLE"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_DRIVING_BICYCLE"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_DRIVING_BICYCLE"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_64(func_63(47, iParam3))));
				func_65(&fVar0);
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 + ((4f * Global_262145.f_23825) * IntToFloat(func_70(7234, -1, 0))));
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 * 0.25f);
			}
			break;
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_62(joaat("SP0_TIME_UNDERWATER"))) / 30f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_62(joaat("SP1_TIME_UNDERWATER"))) / 30f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_62(joaat("SP2_TIME_UNDERWATER"))) / 30f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_62(func_63(52, iParam3))) / 30f);
				func_65(&fVar0);
			}
			break;
		case 2:
			if (iParam0 == 0)
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_UNARMED_HITS"), &iVar3, -1);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_111638.f_2358.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_UNARMED_HITS"), &iVar3, -1);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_111638.f_2358.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_UNARMED_HITS"), &iVar3, -1);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_111638.f_2358.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_70(1499, iParam3, 0)) / 20f);
				func_65(&fVar0);
			}
			break;
		case 4:
			if (iParam0 == 0)
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_NUMBER_NEAR_MISS"), &iVar3, -1);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_111638.f_2358.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_NUMBER_NEAR_MISS"), &iVar3, -1);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_111638.f_2358.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_NUMBER_NEAR_MISS"), &iVar3, -1);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_111638.f_2358.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat((func_70(112, iParam3, 0) / 50)));
				func_65(&fVar0);
			}
			break;
		case 5:
			if (iParam0 == 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_DRIVING_PLANE"))) / 10f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_DRIVING_PLANE"))) / 10f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_DRIVING_PLANE"))) / 10f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_64(func_63(43, iParam3))) / 10f);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_DRIVING_HELI"))) / 10f));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_DRIVING_HELI"))) / 10f));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_DRIVING_HELI"))) / 10f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_64(func_63(45, iParam3))) / 10f));
			}
			if (iParam0 == 0)
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_PLANE_LANDINGS"), &iVar3, -1);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 1)
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_PLANE_LANDINGS"), &iVar3, -1);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 2)
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_PLANE_LANDINGS"), &iVar3, -1);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_70(61, iParam3, 0)));
				func_65(&fVar0);
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar4 = func_61(iParam0, 0);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 1);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 2);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 3);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 6);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 4);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 5f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 3f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 2f);
				}
				iVar4 = func_61(iParam0, 5);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 7);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 8);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 11);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
			}
			break;
		case 7:
			if (iParam0 == 0)
			{
				UNK_0x893A626C476B583D(joaat("SP0_DIST_WALK_ST"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_111638.f_2358.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				UNK_0x893A626C476B583D(joaat("SP1_DIST_WALK_ST"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_111638.f_2358.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				UNK_0x893A626C476B583D(joaat("SP2_DIST_WALK_ST"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_111638.f_2358.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_68(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_KILLS_STEALTH"), &iVar3, -1);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_111638.f_2358.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 1)
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_KILLS_STEALTH"), &iVar3, -1);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_111638.f_2358.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 2)
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_KILLS_STEALTH"), &iVar3, -1);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_111638.f_2358.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 3)
			{
				iVar3 = func_70(34, iParam3, 0);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT(iVar3) / 2f) * 1.5f));
				func_65(&fVar0);
			}
			break;
		case 6:
			if (iParam0 == 0)
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_HITS_MISSION"), &iVar5, -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_HITS_PEDS_VEHICLES"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_111638.f_2358.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_111638.f_2358.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_HITS_MISSION"), &iVar5, -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_HITS_PEDS_VEHICLES"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_111638.f_2358.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_111638.f_2358.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_HITS_MISSION"), &iVar5, -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_HITS_PEDS_VEHICLES"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_111638.f_2358.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_111638.f_2358.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				iVar6 = func_70(171, iParam3, 0);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(iVar6) / 80f));
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar7 = 0;
				while (iVar7 < 22)
				{
					switch (func_60(iVar7, iParam0))
					{
						case 3:
							iVar8++;
							break;
						case 2:
							iVar9++;
							break;
						case 1:
							iVar10++;
							break;
					}
					iVar7++;
				}
				fVar0 = (fVar0 + IntToFloat(iVar8 * 3));
				fVar0 = (fVar0 + IntToFloat(iVar9 * 2));
				fVar0 = (fVar0 + IntToFloat(iVar10 * 1));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_59(joaat("MPPLY_SHOOTINGRANGE_WINS")) * 1));
				func_65(&fVar0);
			}
			break;
	}
	if (iParam1 != 0)
	{
		bVar11 = func_53(iParam0, iParam1, iParam3);
		fVar0 = (fVar0 + IntToFloat(bVar11));
		fVar0 = (fVar0 + IntToFloat(func_58(iParam0, iParam1, iParam3)));
	}
	if (bParam2)
	{
		fVar12 = (fVar0 - (fVar0 % IntToFloat(func_51(iParam0, iParam1))));
		if ((fVar0 % IntToFloat(func_51(iParam0, iParam1))) >= 0f)
		{
			fVar12 = (fVar12 + IntToFloat(func_51(iParam0, iParam1)));
		}
		if (fVar0 >= fVar12)
		{
			fVar0 = fVar12;
		}
		else
		{
			fVar0 = (fVar12 - IntToFloat(func_51(iParam0, iParam1)));
		}
	}
	iVar2 = SYSTEM::FLOOR(fVar0);
	iVar2 = func_69(iVar2, 0, 100);
	return iVar2;
}

int func_58(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_111638.f_2358.f_539.f_2247[iParam1 /*4*/][iParam0];
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_70(72, iParam2, 0);
				case 3:
					return func_70(74, iParam2, 0);
				case 2:
					return func_70(73, iParam2, 0);
				case 4:
					return func_70(75, iParam2, 0);
				case 5:
					return func_70(76, iParam2, 0);
				case 6:
					return func_70(77, iParam2, 0);
				case 7:
					return func_70(78, iParam2, 0);
			}
			break;
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	return Global_111638.f_19142[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_61(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return 0;
	}
	return Global_111638.f_1983[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_62(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = (iVar0 + (UNK_0x959C6922055154B5(iParam0) * 86400));
	iVar0 = (iVar0 + UNK_0xBD23F6A10B02FA04(iParam0) * 3600);
	iVar0 = (iVar0 + UNK_0xE9B04C7C30AF0165(iParam0) * 60);
	iVar0 = (iVar0 + UNK_0x7727F332D8C1AF5D(iParam0));
	return iVar0;
}

int func_63(int iParam0, bool bParam1)
{
	return Global_2548434[iParam0 /*3*/][func_5(bParam1)];
}

int func_64(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = (iVar0 + UNK_0x959C6922055154B5(iParam0) * 1440);
	iVar0 = (iVar0 + UNK_0xBD23F6A10B02FA04(iParam0) * 60);
	iVar0 = (iVar0 + UNK_0xE9B04C7C30AF0165(iParam0));
	return iVar0;
}

var func_65(float fParam0)
{
	if (func_46())
	{
		if (func_66() < Global_262145.f_12695)
		{
			if (*fParam0 + (IntToFloat(func_66()) * Global_262145.f_12694)) <= IntToFloat(Global_262145.f_12704)
			{
				*fParam0 = (*fParam0 + (IntToFloat(func_66()) * Global_262145.f_12694));
			}
		}
		return *fParam0;
	}
	return *fParam0;
}

int func_66()
{
	if (func_49(1))
	{
		return Global_1590535[func_67() /*876*/].f_211.f_6;
	}
	return 0;
}

int func_67()
{
	return Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11;
}

float func_68(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2582968[iParam0 /*3*/][func_5(bParam1)];
	if (UNK_0x893A626C476B583D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_70(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_5(bParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*iParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
				case 1:
					*iParam2 = joaat("SP0_STAMINA");
					break;
				case 3:
					*iParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
				case 2:
					*iParam2 = joaat("SP0_STRENGTH");
					break;
				case 4:
					*iParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
				case 5:
					*iParam2 = joaat("SP0_FLYING_ABILITY");
					break;
				case 6:
					*iParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
				case 7:
					*iParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					*iParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
				case 1:
					*iParam2 = joaat("SP1_STAMINA");
					break;
				case 3:
					*iParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
				case 2:
					*iParam2 = joaat("SP1_STRENGTH");
					break;
				case 4:
					*iParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
				case 5:
					*iParam2 = joaat("SP1_FLYING_ABILITY");
					break;
				case 6:
					*iParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
				case 7:
					*iParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					*iParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
				case 1:
					*iParam2 = joaat("SP2_STAMINA");
					break;
				case 3:
					*iParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
				case 2:
					*iParam2 = joaat("SP2_STRENGTH");
					break;
				case 4:
					*iParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
				case 5:
					*iParam2 = joaat("SP2_FLYING_ABILITY");
					break;
				case 6:
					*iParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
				case 7:
					*iParam2 = joaat("SP2_STEALTH_ABILITY");
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					*iParam3 = 64;
					break;
				case 1:
					*iParam3 = 65;
					break;
				case 3:
					*iParam3 = 67;
					break;
				case 2:
					*iParam3 = 66;
					break;
				case 4:
					*iParam3 = 68;
					break;
				case 5:
					*iParam3 = 69;
					break;
				case 6:
					*iParam3 = 70;
					break;
				case 7:
					*iParam3 = 71;
					break;
			}
			break;
	}
}

bool func_72()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_73(int iParam0)
{
	return iParam0 < 3;
}

void func_74(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_71(iParam0, iParam1, &iVar2, &iVar3);
	if (UNK_0x8CD06866876216F2())
	{
		iVar0 = func_70(iVar3, -1, 0);
	}
	else
	{
		UNK_0x6FB46C25CCB7E6D5(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (SYSTEM::TO_FLOAT(iVar0) / 100f)));
			UNK_0xF7599E37AEBF26E7(UNK_0xD803B885F5E47A62(), fVar1, 1);
			break;
		case 7:
			if (UNK_0x8A22C4C08282BF26(joaat("ARMENIAN3")) != 0 || UNK_0x8A22C4C08282BF26(joaat("TREVOR3")) != 0)
			{
				Global_96027 = 1;
			}
			else
			{
				fVar1 = (1f - (SYSTEM::TO_FLOAT(iVar0) / 100f));
				UNK_0x0FFE8B6DB75A4C39(UNK_0xD803B885F5E47A62(), fVar1);
				UNK_0xE78BAF6C6D97879A(UNK_0xD803B885F5E47A62(), fVar1);
				UNK_0xEE195B25E889FD63(UNK_0xD803B885F5E47A62(), fVar1);
			}
			break;
	}
}

bool func_75(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_76(iParam0))
	{
		return false;
	}
	return true;
}

int func_76(int iParam0)
{
	return func_77(iParam0, Global_41431);
}

int func_77(int iParam0, int iParam1)
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

void func_78()
{
	func_83();
	func_82();
	func_79();
}

void func_79()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!bLocal_80)
	{
		if (iLocal_58 == 3)
		{
			if (Global_2097152[func_81() /*10930*/].f_6174.f_7)
			{
				iLocal_77 = func_62(func_63(147, -1));
				Global_2097152[func_81() /*10930*/].f_6174.f_7 = 0;
			}
			else
			{
				iLocal_77 = Global_2097152[func_81() /*10930*/].f_6174.f_6;
			}
			if (Global_2097152[func_81() /*10930*/].f_6174.f_4 == 0)
			{
				Global_2097152[func_81() /*10930*/].f_6174.f_4 = UNK_0xDD0E7998AE8AD485();
			}
			iLocal_79 = Global_2097152[func_81() /*10930*/].f_6174.f_4;
			iLocal_78 = Global_2097152[func_81() /*10930*/].f_6174.f_5;
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_2292[iLocal_58])
			{
				switch (iLocal_58)
				{
					case 0:
						iLocal_77 = func_62(joaat("SP0_TOTAL_WHEELIE_TIME"));
						break;
					case 1:
						iLocal_77 = func_62(joaat("SP1_TOTAL_WHEELIE_TIME"));
						break;
					case 2:
						iLocal_77 = func_62(joaat("SP2_TOTAL_WHEELIE_TIME"));
						break;
				}
				Global_111638.f_2358.f_539.f_2292[iLocal_58] = 0;
			}
			else
			{
				iLocal_77 = Global_111638.f_2358.f_539.f_2288[iLocal_58];
			}
			if (Global_111638.f_2358.f_539.f_2280[iLocal_58] == 0)
			{
				Global_111638.f_2358.f_539.f_2280[iLocal_58] = UNK_0xDD0E7998AE8AD485();
			}
			iLocal_79 = Global_111638.f_2358.f_539.f_2280[iLocal_58];
			iLocal_78 = Global_111638.f_2358.f_539.f_2284[iLocal_58];
		}
		bLocal_80 = true;
		bLocal_81 = true;
	}
	else if ((UNK_0xDD0E7998AE8AD485() - iLocal_79) > 86400)
	{
		bLocal_80 = false;
		bLocal_81 = false;
		iLocal_79 = UNK_0xDD0E7998AE8AD485();
		iLocal_78 = 0;
		if (iLocal_58 == 3)
		{
			Global_2097152[func_81() /*10930*/].f_6174.f_7 = 1;
		}
		else
		{
			Global_111638.f_2358.f_539.f_2292[iLocal_58] = 1;
		}
	}
	if (bLocal_81)
	{
		switch (iLocal_58)
		{
			case 0:
				iVar0 = func_62(joaat("SP0_TOTAL_WHEELIE_TIME"));
				break;
			case 1:
				iVar0 = func_62(joaat("SP1_TOTAL_WHEELIE_TIME"));
				break;
			case 2:
				iVar0 = func_62(joaat("SP2_TOTAL_WHEELIE_TIME"));
				break;
			case 3:
				iVar0 = func_62(func_63(147, -1));
				break;
		}
		iVar1 = (iVar0 - iLocal_77);
		iVar2 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) / 15f)) - iLocal_78);
		if (iVar2 > 0)
		{
			func_80(iLocal_58, 4, iVar2);
			iLocal_78 = (iLocal_78 + iVar2);
		}
		if (iVar0 > (iLocal_77 + (UNK_0xFBFCAFA958ABA1CE() / 1000) * 60))
		{
			bLocal_81 = false;
		}
	}
	if (iLocal_58 == 3)
	{
		Global_2097152[func_81() /*10930*/].f_6174.f_4 = iLocal_79;
		Global_2097152[func_81() /*10930*/].f_6174.f_5 = iLocal_78;
	}
	else
	{
		Global_111638.f_2358.f_539.f_2280[iLocal_58] = iLocal_79;
		Global_111638.f_2358.f_539.f_2284[iLocal_58] = iLocal_78;
	}
}

void func_80(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_111638.f_2358.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_111638.f_2358.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		case 3:
			iVar1 = 11511;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				case 3:
					iVar1 = 74;
					break;
				case 2:
					iVar1 = 73;
					break;
				case 4:
					iVar1 = 75;
					break;
				case 5:
					iVar1 = 76;
					break;
				case 6:
					iVar1 = 77;
					break;
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 11511)
			{
				bVar0 = func_70(iVar1, -1, 0);
				bVar0 = (bVar0 + iParam2);
				if (bVar0 > 100)
				{
					bVar0 = 100;
				}
				func_55(iVar1, bVar0, -1, 1, 0);
			}
			break;
	}
}

int func_81()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_82()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (bLocal_74)
	{
		bVar0 = true;
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar1 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
			if ((((UNK_0xC844350D5D58C99A(bVar1) && UNK_0xDF1306B443CD3D15(bVar1, 0)) && !UNK_0xE934758D273C899A(bVar1)) && UNK_0xA30B8362589C124A(bVar1, -1, 0) == UNK_0x16F2683693E537C9()) && (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(bVar1)) || UNK_0x8E39AC3C76C8AA58(UNK_0x134B62B726CEC8E6(bVar1))))
			{
				bVar0 = false;
				if (UNK_0x9C66D99E63E8E24C(bVar1) >= 53f)
				{
					func_80(iLocal_58, 4, 2);
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			bLocal_74 = false;
			iLocal_75 = UNK_0x1C0640BA9A7327B3();
			if (UNK_0x8CD06866876216F2())
			{
				iLocal_76 = UNK_0x2B6E0A53779D29EA();
			}
		}
	}
	else if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar2 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
		if (((UNK_0xC844350D5D58C99A(bVar2) && UNK_0xDF1306B443CD3D15(bVar2, 0)) && UNK_0x9C66D99E63E8E24C(bVar2) < 20f) && !UNK_0xE934758D273C899A(bVar2))
		{
			if ((!UNK_0x8CD06866876216F2() && (UNK_0x1C0640BA9A7327B3() - iLocal_75) > 10000) || (UNK_0x8CD06866876216F2() && UNK_0xE7E95E58E001D801(UNK_0x2B6E0A53779D29EA(), UNK_0x04787588C7E736F8(iLocal_76, 10000))))
			{
				bLocal_74 = true;
			}
		}
	}
}

void func_83()
{
	bool bVar0;
	bool bVar1;
	char cVar2[64];

	bVar0 = false;
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar1 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (((UNK_0xC844350D5D58C99A(bVar1) && UNK_0xDF1306B443CD3D15(bVar1, 0)) && UNK_0xA30B8362589C124A(bVar1, -1, 0) == UNK_0x16F2683693E537C9()) && (((UNK_0x8E39AC3C76C8AA58(UNK_0x134B62B726CEC8E6(bVar1)) || UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(bVar1))) || UNK_0xAD09C9A4B56FA133(UNK_0x134B62B726CEC8E6(bVar1))) || UNK_0xD1CC995EE5EB1EC1(UNK_0x134B62B726CEC8E6(bVar1))))
		{
			if (bLocal_66)
			{
				if (!UNK_0xE934758D273C899A(bVar1))
				{
					if ((!UNK_0x8CD06866876216F2() && (UNK_0x1C0640BA9A7327B3() - iLocal_68) > 1500) || (UNK_0x8CD06866876216F2() && UNK_0xE7E95E58E001D801(UNK_0x2B6E0A53779D29EA(), UNK_0x04787588C7E736F8(iLocal_69, 1500))))
					{
						iLocal_70 = UNK_0x1C0640BA9A7327B3();
						if (UNK_0x8CD06866876216F2())
						{
							iLocal_71 = UNK_0x2B6E0A53779D29EA();
						}
						bLocal_67 = true;
					}
					bLocal_66 = false;
				}
			}
			if (bLocal_67)
			{
				if (!UNK_0xE934758D273C899A(bVar1))
				{
					if (UNK_0xF79A7BCA9E38BBBC(bVar1))
					{
						if ((((!UNK_0x8CD06866876216F2() && (UNK_0x1C0640BA9A7327B3() - iLocal_70) > 20) || (!UNK_0x8CD06866876216F2() && (UNK_0x1C0640BA9A7327B3() - iLocal_70) == 0)) || (UNK_0x8CD06866876216F2() && UNK_0xE7E95E58E001D801(UNK_0x2B6E0A53779D29EA(), UNK_0x04787588C7E736F8(iLocal_71, 20)))) || (UNK_0x8CD06866876216F2() && UNK_0x4F34DBDF4FE51E6C(UNK_0x2B6E0A53779D29EA(), iLocal_71)))
						{
						}
						else
						{
							func_80(iLocal_58, 4, 1);
						}
						StringCopy(&cVar2, "Player landed on all wheels in ", 64);
						StringIntConCat(&cVar2, (UNK_0x1C0640BA9A7327B3() - iLocal_70), 64);
						StringConCat(&cVar2, "ms", 64);
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			if (!bLocal_66 && !bLocal_67)
			{
				if ((!UNK_0x8CD06866876216F2() && (UNK_0x1C0640BA9A7327B3() - iLocal_72) > 1000) || (UNK_0x8CD06866876216F2() && UNK_0xE7E95E58E001D801(UNK_0x2B6E0A53779D29EA(), UNK_0x04787588C7E736F8(iLocal_73, 1000))))
				{
					if (UNK_0xE934758D273C899A(bVar1))
					{
						if (!bLocal_66)
						{
							iLocal_68 = UNK_0x1C0640BA9A7327B3();
							if (UNK_0x8CD06866876216F2())
							{
								iLocal_69 = UNK_0x2B6E0A53779D29EA();
							}
							bLocal_66 = true;
						}
					}
				}
			}
		}
		else if (bLocal_66 || bLocal_67)
		{
			bVar0 = true;
		}
	}
	else if (bLocal_66 || bLocal_67)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iLocal_72 = UNK_0x1C0640BA9A7327B3();
		if (UNK_0x8CD06866876216F2())
		{
			iLocal_73 = UNK_0x2B6E0A53779D29EA();
		}
		bLocal_66 = false;
		bLocal_67 = false;
	}
}

bool func_84(int iParam0)
{
	return (Global_110723 && iParam0) != 0;
}

int func_85()
{
	func_86();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_86()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_88(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_87(UNK_0x16F2683693E537C9());
			if (func_73(iVar0) && (!func_54(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_73(Global_111638.f_2358.f_539.f_4321))
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

int func_87(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_88(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_88(int iParam0)
{
	if (func_73(iParam0))
	{
		return func_89(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_89(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_90()
{
	char* sVar0;
	int iVar1;

	if (bLocal_61)
	{
		if (iLocal_62 != iLocal_58)
		{
			bLocal_61 = false;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_62)
		{
			case 0:
				sVar0 = "CHAR_MICHAEL";
				break;
			case 1:
				sVar0 = "CHAR_FRANKLIN";
				break;
			case 2:
				sVar0 = "CHAR_TREVOR";
				break;
			case 3:
				iVar1 = func_93(UNK_0xD803B885F5E47A62());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = UNK_0x5283D58F79627134(iVar1);
				}
				break;
		}
		UNK_0x1E64CE678ED5F61E("PS_UPDATE");
		UNK_0x6D99DF8263D35CE5(bLocal_65);
		UNK_0x0B310D25EAD771D7(func_92(iLocal_63), func_91(iLocal_63), iLocal_64, (bLocal_65 - iLocal_64), 0, sVar0, sVar0);
		bLocal_82 = true;
		iLocal_83 = UNK_0x1C0640BA9A7327B3() + 5000;
		if (UNK_0x8CD06866876216F2())
		{
			iLocal_84 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), 5000);
		}
		bLocal_61 = false;
	}
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 23;
		case 1:
			return 2;
		case 3:
			return 24;
		case 2:
			return 25;
		case 4:
			return 14;
		case 5:
			return 27;
		case 6:
			return 17;
		case 7:
			return 28;
	}
	return -1;
}

char* func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB";
		case 1:
			return "PSF_STAMINA";
		case 3:
			return "PSF_LUNG";
		case 2:
			return "PSF_STRENGTH";
		case 4:
			return "PSF_DRIVING";
		case 5:
			return "PSF_FLYING";
		case 6:
			return "PSF_SHOOTING";
		case 7:
			return "PSF_STEALTH";
	}
	return "ERROR";
}

int func_93(bool bParam0)
{
	int iVar0;

	iVar0 = func_96(bParam0);
	if (iVar0 == -1)
	{
		func_94(bParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_94(bool bParam0, bool bParam1)
{
	if (!func_19(bParam0, 0, 1))
	{
		return;
	}
	if (func_96(bParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (bParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_95(bParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = bParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

bool func_95(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == bParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_96(bool bParam0)
{
	int iVar0;

	if (!func_19(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0 /*5*/].f_1 == bParam0)
		{
			if (UNK_0x0E66AEE1894BB411(Global_1389078[iVar0 /*5*/].f_2) && UNK_0x0A53A8B5FA0B3F4D(Global_1389078[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_97(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_97(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;

	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (UNK_0x0E66AEE1894BB411(Global_1389078[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, UNK_0x5283D58F79627134(Global_1389078[iParam0 /*5*/].f_2), 64);
			UNK_0x0DA3CF6693AF3C9C(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		UNK_0xC48867F0C23C5A64(Global_1389078[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32 /*5*/] = { Global_1389078[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_98(&(Global_1389078[iVar32 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_98(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_11();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (UNK_0x8CD06866876216F2())
	{
		uParam0->f_3 = UNK_0x2B6E0A53779D29EA();
	}
}

void func_99()
{
	float fVar0;
	int iVar1;

	if (UNK_0x89DE52DB50601487() != 1)
	{
		return;
	}
	if (UNK_0x8CD06866876216F2())
	{
		if (!func_103(UNK_0xD803B885F5E47A62()))
		{
			return;
		}
		if (func_102() != 0)
		{
			return;
		}
	}
	if (UNK_0x8CD06866876216F2())
	{
		if (func_102() == 0)
		{
			iLocal_53 = 1;
		}
	}
	else
	{
		iLocal_53 = 0;
	}
	if (!func_101())
	{
		func_100();
	}
	iLocal_55 = 0;
	iLocal_56 = 0;
	if (UNK_0x8CD06866876216F2())
	{
		iLocal_57 = UNK_0x2B6E0A53779D29EA();
	}
	iLocal_72 = UNK_0x1C0640BA9A7327B3();
	if (UNK_0x8CD06866876216F2())
	{
		iLocal_73 = UNK_0x2B6E0A53779D29EA();
	}
	if (UNK_0x8CD06866876216F2())
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_81() /*10930*/].f_6174.f_1273, 2))
		{
			fVar0 = (SYSTEM::TO_FLOAT(func_70(192, -1, 0)) / 20f);
			iVar1 = SYSTEM::FLOOR(fVar0);
			iVar1 = func_69(iVar1, 0, 100);
			func_80(3, 2, iVar1);
			UNK_0x5D96D8530B3D0904(&(Global_2097152[func_81() /*10930*/].f_6174.f_1273), 2);
		}
	}
	bLocal_59 = true;
	iLocal_54 = 1;
}

void func_100()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (UNK_0x8CD06866876216F2())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != 0)
			{
				func_71(3, iVar0, &uVar1, &iVar2);
				func_55(iVar2, func_53(3, iVar0, -1), -1, 1, 0);
			}
			iVar0++;
		}
		func_4(0, 1, -1, 1);
		Global_96026 = 1;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar4 = 0;
			while (iVar4 < 8)
			{
				if (iVar4 != 0)
				{
					func_71(iVar3, iVar4, &iVar5, &uVar6);
					UNK_0xCDC520E5E48E63D9(iVar5, func_53(iVar3, iVar4, -1), 1);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_111638.f_2358.f_539.f_2387[0] = func_53(0, 0, -1);
		Global_111638.f_2358.f_539.f_2387[1] = func_53(1, 0, -1);
		Global_111638.f_2358.f_539.f_2387[2] = func_53(2, 0, -1);
		Global_111638.f_2358.f_539.f_2354 = 1;
		Global_96026 = 1;
	}
}

bool func_101()
{
	if (UNK_0x8CD06866876216F2())
	{
		return true;
	}
	return Global_111638.f_2358.f_539.f_2354;
}

int func_102()
{
	return Global_30768;
}

bool func_103(bool bParam0)
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

void func_104()
{
	if (iLocal_54 != 0 && iLocal_53 != 2)
	{
		if (iLocal_53 == 0)
		{
			if (UNK_0x8CD06866876216F2())
			{
				iLocal_53 = 2;
			}
			if (!func_101())
			{
				iLocal_53 = 2;
			}
		}
		else if (iLocal_53 == 1)
		{
			if ((!UNK_0x8CD06866876216F2() || !func_103(UNK_0xD803B885F5E47A62())) || func_102() != 0)
			{
				iLocal_53 = 2;
			}
		}
		if (iLocal_53 == 2)
		{
			iLocal_54 = 2;
		}
	}
}

