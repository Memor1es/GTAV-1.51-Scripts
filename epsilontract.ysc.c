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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	bool bLocal_40 = false;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	bool bLocal_46 = false;
	bool bLocal_47 = false;
	var uLocal_48 = 0;
	struct<11> Local_49[10];
	char* sLocal_160[10] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_37 = 1;
	iLocal_38 = 1;
	bLocal_40 = joaat("PROP_TIME_CAPSULE_01");
	if (UNK_0x2EBF608FFE6CA406(210))
	{
		func_50();
	}
	if (UNK_0x8A22C4C08282BF26(joaat("EPSILONTRACT")) > 1)
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	func_49(9);
	while (true)
	{
		SYSTEM::WAIT(0);
		switch (iLocal_39)
		{
			case 0:
				func_48();
				break;
			case 1:
				func_1();
				break;
			case 2:
				func_50();
				break;
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;

	if ((func_47(UNK_0x16F2683693E537C9()) && !func_46(14)) && !UNK_0x757EF87A33649210())
	{
		if (iLocal_41 < 10)
		{
			if (iLocal_41 == 0)
			{
				if (!func_45(36) && (UNK_0x1C0640BA9A7327B3() - iLocal_42) > iLocal_43)
				{
					func_44(0, 60, sLocal_160[0], 1, 0, 0, 0, 0, 1);
					func_43(36);
					iLocal_42 = -1;
				}
			}
			else if (iLocal_41 < 10)
			{
				if (!iLocal_42 == -1)
				{
					if ((UNK_0x1C0640BA9A7327B3() - iLocal_42) > 15000)
					{
						func_44(0, 60, sLocal_160[iLocal_41], 1, 0, 0, 0, 0, 1);
						iLocal_42 = -1;
					}
				}
			}
			if (Local_49[iLocal_41 /*11*/].f_10)
			{
				if (UNK_0xEB751B41BC4080D4(Local_49[iLocal_41 /*11*/].f_1) || func_42(Local_49[iLocal_41 /*11*/].f_1))
				{
					if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
					{
						UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
					}
					func_41(&(Local_49[iLocal_41 /*11*/].f_1));
					Local_49[iLocal_41 /*11*/].f_10 = 0;
					UNK_0x5E858A00EAFA5B24(0, 200, 250);
					iVar0 = (805 + iLocal_41);
					func_40(iVar0, 1, -1, 1);
					UNK_0x9505C13496579D28(joaat("NUM_HIDDEN_PACKAGES_2"), 1f);
					bLocal_46 = true;
					if (iLocal_41 < 10)
					{
						iLocal_41++;
						iLocal_42 = UNK_0x1C0640BA9A7327B3();
						func_39(1, 0);
						func_37();
					}
				}
				else if (UNK_0x762119754C50557A(Local_49[iLocal_41 /*11*/].f_1))
				{
					func_35(Local_49[iLocal_41 /*11*/].f_3);
					func_34(&(Local_49[iLocal_41 /*11*/].f_1), &(Local_49[iLocal_41 /*11*/].f_10));
				}
			}
			else
			{
				while (func_33(4, iVar1) && iVar1 < 10)
				{
					iVar1++;
				}
				if (iVar1 == iLocal_41)
				{
					func_31(&(Local_49[iLocal_41 /*11*/]), bLocal_40, joaat("PICKUP_CUSTOM_SCRIPT"), 0, 0, 2);
				}
			}
		}
		else if (!bLocal_47 && !bLocal_46)
		{
			func_13();
		}
		func_2(&bLocal_46, &bLocal_47, &uLocal_48, 4, &uLocal_44, &uLocal_45, "TRACT_TITLE", "TRACT_COLLECT");
	}
}

void func_2(bool bParam0, bool bParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	func_12(0);
	if (*bParam0)
	{
		switch (*uParam4)
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
					*uParam4++;
				}
				break;
			case 1:
				UNK_0x7E60C62A7CE58FC8(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				UNK_0x7ACC3006A87F8B39(bParam6);
				UNK_0x779B34565F4D71B1();
				UNK_0x7ACC3006A87F8B39(bParam7);
				UNK_0x6D99DF8263D35CE5(func_4(iParam3));
				UNK_0x779B34565F4D71B1();
				UNK_0x7E60D21B163E9D56();
				*uParam2 = UNK_0x1C0640BA9A7327B3();
				*uParam4++;
				break;
			case 2:
				if ((UNK_0x1C0640BA9A7327B3() - *uParam2) > 7000)
				{
					UNK_0x7E60C62A7CE58FC8(*iParam5, "SHARD_ANIM_OUT");
					UNK_0x3CAEA85DA607305E(true);
					UNK_0x7C19E5E4784BD7CF(0.33f);
					UNK_0x7E60D21B163E9D56();
					*uParam4++;
				}
				else if (!func_3())
				{
					if (UNK_0x83D8570832F172A7(*iParam5))
					{
						func_12(1);
						UNK_0x6567AE843FADBA94(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			case 3:
				if ((UNK_0x1C0640BA9A7327B3() - *uParam2) > 7500)
				{
					*uParam4++;
				}
				else if (!func_3())
				{
					if (UNK_0x83D8570832F172A7(*iParam5))
					{
						func_12(1);
						UNK_0x6567AE843FADBA94(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			case 4:
				if (UNK_0x83D8570832F172A7(*iParam5))
				{
					UNK_0xE17FDF9E3068281B(iParam5);
				}
				func_12(0);
				*bParam1 = 0;
				*bParam0 = 0;
				*uParam4 = 0;
				break;
		}
	}
}

bool func_3()
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

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_11(iParam0))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_108, func_10(func_11(iParam0), iVar1)))
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
		while (iVar1 < func_11(iParam0))
		{
			iVar2 = (func_9(iParam0) + iVar1);
			if (func_5(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_5(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_8();
	}
	iVar1 = func_7(iParam0, bParam1);
	iVar2 = func_6(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_6(int iParam0)
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

int func_7(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_8();
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

int func_8()
{
	return Global_1312745;
}

int func_9(int iParam0)
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

int func_10(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_11(int iParam0)
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

void func_12(int iParam0)
{
	if (Global_76889 != iParam0)
	{
		Global_76889 = iParam0;
	}
}

void func_13()
{
	func_30(95, 1);
	func_15(27, 84, 0);
	func_14(9);
	iLocal_39 = 2;
}

int func_14(int iParam0)
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

int func_15(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_28(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_51915[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_51915[iVar0 /*203*/].f_2 = iParam0;
	Global_51915[iVar0 /*203*/].f_10[Global_51915[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_51915[iVar0 /*203*/].f_10[Global_51915[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_51915[iVar0 /*203*/].f_10[Global_51915[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_51915[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_51915[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_51915[iVar0 /*203*/].f_4[iVar1] == Global_42615[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_51915[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_51915[iVar0 /*203*/].f_4[Global_51915[iVar0 /*203*/].f_3] = Global_42615[iParam1 /*12*/].f_3;
			Global_51915[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_51915[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_51915[iVar0 /*203*/].f_4[iVar1] == Global_42615[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_51915[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_51915[iVar0 /*203*/].f_4[Global_51915[iVar0 /*203*/].f_3] = Global_42615[iParam1 /*12*/].f_2;
			Global_51915[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_51915[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_51915[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_16(Global_51915[iVar0 /*203*/].f_4[iVar1], Global_51915[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_16(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;

	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_45940[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_45940[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_27(Global_42615[iVar20 /*12*/].f_1) };
		if (Global_42615[iVar20 /*12*/].f_2 == iParam0 && !Global_42615[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_42615[iVar20 /*12*/].f_2;
		iVar0 = Global_51553[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_51553[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_42607 = (Global_42607 - 1);
						if (Global_42607 < 0)
						{
							Global_42607 = 0;
						}
						break;
					case 1:
						Global_42608 = (Global_42608 - 1);
						if (Global_42608 < 0)
						{
							Global_42608 = 0;
						}
						break;
					case 2:
						Global_42609 = (Global_42609 - 1);
						if (Global_42609 < 0)
						{
							Global_42609 = 0;
						}
						break;
				}
			}
		}
		Global_51553[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_51553[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_51553[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_51553[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_51553[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_51553[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_51553[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_51553[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_42607 = (Global_42607 - 1);
						if (Global_42607 < 0)
						{
							Global_42607 = 0;
						}
						break;
					case 1:
						Global_42608 = (Global_42608 - 1);
						if (Global_42608 < 0)
						{
							Global_42608 = 0;
						}
						break;
					case 2:
						Global_42609 = (Global_42609 - 1);
						if (Global_42609 < 0)
						{
							Global_42609 = 0;
						}
						break;
				}
			}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_51915[iVar24 /*203*/].f_1 == iParam1 && Global_51915[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_51553[iParam0 /*120*/].f_18[iVar0] = Global_51915[iVar23 /*203*/].f_1;
		Global_51553[iParam0 /*120*/].f_1[iVar0] = (Global_51915[iVar23 /*203*/].f_9 - 1);
		Global_51553[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_51553[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_51553[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_51553[iParam0 /*120*/]++;
		iVar25 = Global_51553[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_51915[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_42615[iVar26 /*12*/].f_2;
		if (Global_51915[iVar23 /*203*/].f_10[(Global_51915[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_51915[iVar23 /*203*/].f_10[(Global_51915[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_27(Global_42615[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_51553[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_17(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				case 1:
					if (iVar2 == 249)
					{
						func_17(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_17(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				case 2:
					func_17(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			}
		}
	}
}

void func_17(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];

	if (UNK_0x22A8E52414415B76())
	{
		return;
	}
	iVar0 = func_21();
	bVar1 = false;
	StringCopy(&cVar2, func_20(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				UNK_0x1E64CE678ED5F61E("PROPR_INCEMAIL1");
				break;
			case 73:
				UNK_0x1E64CE678ED5F61E("PROPR_INCEMAIL3");
				break;
			case 74:
				UNK_0x1E64CE678ED5F61E("PROPR_INCEMAIL2");
				break;
			default:
				UNK_0x1E64CE678ED5F61E(bParam3);
				if (!UNK_0xEA6BC48857E0AC4C(bParam4))
				{
					UNK_0x6B012227B3921E18(bParam4);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam5))
				{
					UNK_0x6B012227B3921E18(bParam5);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam6))
				{
					UNK_0x6B012227B3921E18(bParam6);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam7))
				{
					UNK_0x6B012227B3921E18(bParam7);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam8))
				{
					UNK_0x6B012227B3921E18(bParam8);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam9))
				{
					UNK_0x6B012227B3921E18(bParam9);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam10))
				{
					UNK_0x6B012227B3921E18(bParam10);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam11))
				{
					UNK_0x6B012227B3921E18(bParam11);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam12))
				{
					UNK_0x6B012227B3921E18(bParam12);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam13))
				{
					UNK_0x6B012227B3921E18(bParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_18(UNK_0x1AEA174B291A9906(&cVar2, &cVar2, 0, 2, UNK_0x19C9F30A7697B43C(func_19(iParam1)), 0));
		}
		else
		{
			func_18(UNK_0x1AEA174B291A9906("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, UNK_0x19C9F30A7697B43C(func_19(iParam1)), 0));
		}
		switch (Global_19486)
		{
			case 0:
				StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
				Global_42607++;
				if (Global_42607 > 16)
				{
					Global_42607 = 16;
				}
				break;
			case 2:
				StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
				Global_42609++;
				if (Global_42609 > 16)
				{
					Global_42609 = 16;
				}
				break;
			case 1:
				StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
				Global_42608++;
				if (Global_42608 > 16)
				{
					Global_42608 = 16;
				}
				break;
			default:
				StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
				break;
		}
		UNK_0x4D7F4CC43D4D0DE3(-1, "Notification", &Global_19475, 1);
	}
}

void func_18(int iParam0)
{
	Global_42610[Global_42614] = iParam0;
	Global_21863 = 1;
	Global_21862 = iParam0;
	Global_42614++;
	if (Global_42614 == 3)
	{
		Global_42614 = 0;
	}
}

char* func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		case 3:
			return "EMSTR_3";
		case 1:
			return "EMSTR_6";
		case 2:
			return "EMSTR_9";
		case 4:
			return "EMSTR_12";
		case 5:
			return "EMSTR_29";
		case 6:
			return "EMSTR_36";
		case 7:
			return "EMSTR_39";
		case 8:
			return "EMSTR_52";
		case 9:
			return "EMSTR_55";
		case 10:
			return "EMSTR_58";
		case 11:
			return "EMSTR_78";
		case 12:
			return "EMSTR_81";
		case 13:
			return "EMSTR_84";
		case 14:
			return "EMSTR_87";
		case 15:
			return "EMSTR_106";
		case 16:
			return "EMSTR_114";
		case 17:
			return "EMSTR_142";
		case 18:
			return "EMSTR_145";
		case 19:
			return "EMSTR_152";
		case 20:
			return "EMSTR_157";
		case 21:
			return "EMSTR_163";
		case 22:
			return "EMSTR_182";
		case 23:
			return "EMSTR_187";
		case 24:
			return "EMSTR_190";
		case 25:
			return "EMSTR_206";
		case 26:
			return "EMSTR_219";
		case 27:
			return "EMSTR_226";
		case 28:
			return "EMSTR_233";
		case 29:
			return "EMSTR_242";
		case 30:
			return "EMSTR_249";
		case 31:
			return "EMSTR_262";
		case 32:
			return "EMSTR_269";
		case 33:
			return "EMSTR_319";
		case 34:
			return "EMSTR_340";
		case 35:
			return "EMSTR_348";
		case 36:
			return "EMSTR_182";
		case 37:
			return "EMSTR_357";
		case 38:
			return "EMSTR_360";
		case 39:
			return "EMSTR_369";
		case 40:
			return "EMSTR_376";
		case 41:
			return "EMSTR_379";
		case 42:
			return "EMSTR_382";
		case 43:
			return "EMSTR_384";
		case 44:
			return "EMSTR_387";
		case 45:
			return "EMSTR_390";
		case 46:
			return "EMSTR_393";
		case 47:
			return "EMSTR_396";
		case 48:
			return "EMSTR_399";
		case 49:
			return "EMSTR_402";
		case 50:
			return "EMSTR_405";
		case 51:
			return "EMSTR_408";
		case 52:
			return "EMSTR_411";
		case 53:
			return "EMSTR_414";
		case 54:
			return "EMSTR_465";
		case 55:
			return "EMSTR_468";
		case 56:
			return "EMSTR_489";
		case 57:
			return "EMSTR_492";
		case 58:
			return "EMSTR_495";
		case 59:
			return "EMSTR_498";
		case 60:
			return "EMSTR_501";
		case 61:
			return "EMSTR_504";
		case 62:
			return "EMSTR_507";
		case 63:
			return "EMSTR_640";
		case 64:
			return "EMSTR_643";
		case 65:
			return "EMSTR_652";
		default:
			break;
	}
	return "NULL";
}

char* func_20(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[0 /*29*/].f_7));
		case 1:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[1 /*29*/].f_7));
		case 2:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[2 /*29*/].f_7));
		case 7:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[12 /*29*/].f_7));
		case 4:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[60 /*29*/].f_7));
		case 6:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[62 /*29*/].f_7));
		case 3:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[14 /*29*/].f_7));
		case 16:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[97 /*29*/].f_7));
		case 19:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[99 /*29*/].f_7));
		case 15:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[96 /*29*/].f_7));
		case 63:
			return "CHAR_CARSITE2";
		case 64:
			return "CHAR_BOATSITE";
		case 8:
			return "CHAR_BANK_MAZE";
		case 9:
			return "CHAR_BANK_FLEECA";
		case 10:
			return "CHAR_BANK_BOL";
		case 21:
			return "CHAR_MINOTAUR";
		case 25:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[15 /*29*/].f_7));
		case 26:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[30 /*29*/].f_7));
		case 27:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[17 /*29*/].f_7));
		case 29:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[20 /*29*/].f_7));
		case 30:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[43 /*29*/].f_7));
		case 31:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[44 /*29*/].f_7));
		case 32:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[19 /*29*/].f_7));
		case 34:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[40 /*29*/].f_7));
		case 36:
			return UNK_0x19C9F30A7697B43C("CELL_E_381");
		case 38:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[64 /*29*/].f_7));
		case 5:
			return "CHAR_EPSILON";
		case 13:
			return "CHAR_MILSITE";
		case 11:
			return "CHAR_CARSITE";
		case 14:
			return "CHAR_BOATSITE";
		case 12:
			return "CHAR_PLANESITE";
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		case 55:
			return "CHAR_CARSITE2";
		case 54:
			return "CHAR_BIKESITE";
		case 39:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[122 /*29*/].f_7));
		case 40:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[125 /*29*/].f_7));
		case 41:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[113 /*29*/].f_7));
		case 42:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[126 /*29*/].f_7));
		case 43:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[127 /*29*/].f_7));
		case 44:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[124 /*29*/].f_7));
		case 45:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[114 /*29*/].f_7));
		case 46:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[115 /*29*/].f_7));
		case 47:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[116 /*29*/].f_7));
		case 48:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[123 /*29*/].f_7));
		case 49:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[117 /*29*/].f_7));
		case 50:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[118 /*29*/].f_7));
		case 51:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[119 /*29*/].f_7));
		case 52:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[120 /*29*/].f_7));
		case 53:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[121 /*29*/].f_7));
		default:
			break;
	}
	*iParam1 = 0;
	return "ERROR!";
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
			if (func_23(iVar0) && (!func_46(14) || Global_110589))
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

struct<16> func_27(int iParam0)
{
	struct<16> Var0;
	struct<16> Var16;

	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_29(iParam0);
	if (iVar0 > -1)
	{
		if (Global_51915[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_51915[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_51915[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_51915[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_51915[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_51915[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_51915[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_51915[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_51553[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_51553[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_51553[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_51553[iVar6 /*120*/].f_18[iVar8] == Global_51915[iVar4 /*203*/].f_1)
							{
								if (Global_51553[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_42607 = (Global_42607 - 1);
											break;
										case 1:
											Global_42608 = (Global_42608 - 1);
											break;
										case 2:
											Global_42609 = (Global_42609 - 1);
											break;
									}
								}
							}
						}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_51915[iVar4 /*203*/].f_2 = iParam0;
	Global_51915[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_51915[iVar4 /*203*/] = 1;
	}
	Global_111638.f_21032.f_310++;
	if (Global_111638.f_21032.f_310 == 0)
	{
		Global_111638.f_21032.f_310 = 1;
	}
	Global_51915[iVar4 /*203*/].f_1 = Global_111638.f_21032.f_310;
	Global_51915[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_51915[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_51915[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_51915[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_30(int iParam0, int iParam1)
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

void func_31(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	bool bVar0;

	if (!uParam0->f_10)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (!func_46(13) && !func_46(14))
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
							func_32(uParam0->f_3);
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

void func_32(vector3 vParam0)
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

bool func_33(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0 == 1)
	{
		iVar1 = 705;
	}
	else if (iParam0 == 0)
	{
		iVar1 = 755;
	}
	else if (iParam0 == 3)
	{
		iVar1 = 815;
	}
	else if (iParam0 == 4)
	{
		iVar1 = 805;
	}
	else if (iParam0 == 5)
	{
		iVar1 = 845;
	}
	iVar0 = (iVar1 + iParam1);
	return func_5(iVar0, -1, -1);
}

void func_34(var uParam0, var uParam1)
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0xE925E52ACABA4CE7(*uParam0), 1) >= 60f)
		{
			func_41(uParam0);
			*uParam0 = 0;
			*uParam1 = 0;
		}
	}
}

void func_35(vector3 vParam0)
{
	if (func_36(UNK_0x16F2683693E537C9(), vParam0, 7f))
	{
		UNK_0xDBE4EC9C88839074(UNK_0x16F2683693E537C9(), vParam0, 100, 2048, 1);
	}
}

bool func_36(bool bParam0, vector3 vParam1, float fParam4)
{
	return SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bParam0, true), vParam1) <= (fParam4 * fParam4);
}

int func_37()
{
	if (func_38(0))
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

bool func_38(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_39(int iParam0, int iParam1)
{
	Global_98783.f_7 = iParam0;
	Global_98783.f_8 = iParam1;
}

int func_40(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_8();
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

void func_41(var uParam0)
{
	if (UNK_0x762119754C50557A(*uParam0))
	{
		UNK_0x40B7230FD4C59AA2(*uParam0);
	}
}

bool func_42(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (!UNK_0x762119754C50557A(iParam0))
	{
		return false;
	}
	if (func_47(UNK_0x16F2683693E537C9()))
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

void func_43(int iParam0)
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

int func_44(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 21;
			break;
		case 1:
			iVar0 = 22;
			break;
		case 2:
			iVar0 = 23;
			break;
		default:
			return 0;
	}
	StringCopy(&(Global_111638.f_14136[iVar0 /*104*/]), sParam2, 64);
	Global_111638.f_14136[iVar0 /*104*/].f_17 = iParam1;
	if (iParam3 == 0)
	{
		return 0;
	}
	else
	{
		Global_111638.f_14136[iVar0 /*104*/].f_24 = iParam3;
	}
	Global_111638.f_14136[iVar0 /*104*/].f_25 = iParam4;
	Global_111638.f_14136[iVar0 /*104*/].f_26 = iParam5;
	Global_111638.f_14136[iVar0 /*104*/].f_29 = iParam6;
	Global_111638.f_14136[iVar0 /*104*/].f_30 = iParam8;
	Global_111638.f_14136[iVar0 /*104*/].f_31 = iParam7;
	Global_111638.f_14136[iVar0 /*104*/].f_28 = 0;
	return 1;
}

bool func_45(int iParam0)
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

bool func_46(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_47(bool bParam0)
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

void func_48()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (Global_111638.f_18569.f_388)
	{
		sLocal_160[0] = "TRACT_HINT1B";
		iLocal_43 = 300000;
	}
	else
	{
		sLocal_160[0] = "TRACT_HINT1";
		iLocal_43 = 16000;
	}
	Local_49[0 /*11*/].f_3 = { 501.9415f, 5604.429f, 796.9146f };
	Local_49[1 /*11*/].f_3 = { 2658.18f, -1361.14f, -21.63f };
	sLocal_160[1] = "TRACT_HINT2";
	Local_49[2 /*11*/].f_3 = { 24.7139f, 7644.334f, 18.0792f };
	sLocal_160[2] = "TRACT_HINT3";
	Local_49[3 /*11*/].f_3 = { -263.55f, 4729.6f, 137.37f };
	sLocal_160[3] = "TRACT_HINT4";
	Local_49[4 /*11*/].f_3 = { -771.98f, -685.22f, 28.86f };
	sLocal_160[4] = "TRACT_HINT5";
	Local_49[5 /*11*/].f_3 = { -1605.03f, 5256.55f, 1.08f };
	sLocal_160[5] = "TRACT_HINT6";
	Local_49[6 /*11*/].f_3 = { -1804.546f, 403.9298f, 112.1966f };
	sLocal_160[6] = "TRACT_HINT7";
	Local_49[7 /*11*/].f_3 = { 484.2701f, 5617.175f, 787.4708f };
	sLocal_160[7] = "TRACT_HINT8";
	Local_49[8 /*11*/].f_3 = { -75.1004f, -819.0673f, 325.3656f };
	sLocal_160[8] = "TRACT_HINT9";
	Local_49[9 /*11*/].f_3 = { -1725.34f, -189.95f, 57.52f };
	sLocal_160[9] = "TRACT_HINT10";
	iLocal_42 = UNK_0x1C0640BA9A7327B3();
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = (805 + iVar0);
		if (func_5(iVar1, -1, -1))
		{
			iLocal_41++;
		}
		iVar0++;
	}
	iLocal_39 = 1;
}

int func_49(int iParam0)
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

void func_50()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_41(&(Local_49[iVar0 /*11*/].f_1));
		iVar0++;
	}
	UNK_0x10FAF14A60A0DBE1();
}

