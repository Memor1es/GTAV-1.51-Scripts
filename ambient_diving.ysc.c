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
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	struct<8> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	struct<11> Local_55[30];
	int iLocal_386 = 0;
	var uLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393[4] = { 0, 0, 0, 0 };
	float fLocal_398[4] = { 0f, 0f, 0f, 0f };
	bool bLocal_403 = false;
	bool bLocal_404 = false;
	float fLocal_405 = 0f;
	bool bLocal_406 = false;
	bool bLocal_407 = false;
	int iLocal_408 = 0;
	bool bLocal_409 = false;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	bool bLocal_412 = false;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_388 = -1;
	bLocal_406 = true;
	iLocal_408 = UNK_0xD68EA767274B7444();
	if (UNK_0x2EBF608FFE6CA406(210))
	{
		func_77(1);
	}
	if (UNK_0x8A22C4C08282BF26(joaat("AMBIENT_DIVING")) > 1)
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	func_76(27);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_73(0))
		{
			if (!bLocal_412)
			{
				func_77(0);
				bLocal_412 = true;
			}
		}
		else
		{
			bLocal_412 = false;
			func_72(UNK_0x16F2683693E537C9());
			switch (iLocal_386)
			{
				case 0:
					func_67();
					break;
				case 1:
					func_64();
					func_55();
					func_1();
					break;
				case 2:
					func_55();
					break;
				case 3:
					func_77(1);
					break;
			}
		}
	}
}

void func_1()
{
	if (func_18(&Local_42, &Local_55) || func_17(110) == 1)
	{
		if (func_16())
		{
			func_15(0);
		}
		func_8(298, 0, 0);
		if (!func_17(110))
		{
			if (!bLocal_407)
			{
				bLocal_407 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
			}
		}
		func_2(2);
	}
}

void func_2(int iParam0)
{
	iLocal_386 = iParam0;
}

int func_3(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	bool bVar15;

	if (func_7(0))
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
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (bParam3 < 3)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam2, bParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != bParam3)
		{
			return 0;
		}
	}
	if (bParam2 < 1 || bParam2 > 7)
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
		Var0.f_3 = func_6(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = bParam2;
		Var0.f_4 = (UNK_0x1C0640BA9A7327B3() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = bParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		UNK_0x0674E58A79778E99(&(Var0.f_1), true);
		UNK_0x0674E58A79778E99(&(Var0.f_1), false);
		if (iParam7 != -1)
		{
			UNK_0x5D96D8530B3D0904(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			UNK_0x5D96D8530B3D0904(&(Var0.f_1), 10);
		}
		Global_111638.f_7683[Global_111638.f_7683.f_136 /*15*/] = { Var0 };
		Global_111638.f_7683.f_136++;
		bVar15 = false;
		while (bVar15 < 3)
		{
			if (UNK_0xEAE0D21A50E6C7F4(bParam2, bVar15))
			{
				func_4(bVar15);
			}
			bVar15++;
		}
		return 1;
	}
	return 0;
}

void func_4(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_5(bParam0))
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

bool func_5(bool bParam0)
{
	return bParam0 < 3;
}

int func_6(int iParam0)
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

bool func_7(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_8(int iParam0, int iParam1, int iParam2)
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
		func_13((891 + iParam0), 1, -1, 1);
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
		func_9();
	}
}

void func_9()
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
		func_12(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_11() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_10();
				}
			}
		}
	}
}

int func_10()
{
	if (func_7(0))
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

int func_11()
{
	return Global_30768;
}

int func_12(int iParam0, bool bParam1)
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

int func_13(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_14();
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

int func_14()
{
	return Global_1312745;
}

void func_15(bool bParam0)
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

bool func_16()
{
	if (UNK_0x8A22C4C08282BF26(joaat("APPTRACKIFY")) > 0)
	{
		return true;
	}
	return false;
}

bool func_17(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

bool func_18(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;

	UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9());
	vVar2 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar1 = func_54(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar1)
			{
				if (!func_53((iParam1[uParam0->f_10 /*11*/])->f_6, 0f, 0f, 0f, 0))
				{
					func_51(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("PICKUP_CUSTOM_SCRIPT"), 0, 1, 0);
				}
				else
				{
					func_51(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("PICKUP_CUSTOM_SCRIPT"), 0, 0, 2);
				}
			}
		}
		else if (!bVar1)
		{
			func_36(uParam0, iParam1, vVar2);
		}
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (uParam0->f_11)
	{
		if (!Global_76882)
		{
			func_26(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 5, &iLocal_389, &uLocal_387, "DIVING_TITLE", "DIVING_COLLECT");
		}
		if (!func_25(44))
		{
			vVar5 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			if (func_24(&Local_42, &Local_55, vVar5, &iVar8))
			{
				if (UNK_0x0EB28750412C3A5A(func_23(iVar8), vVar5, 0) > 200f)
				{
					func_20("DIVING_HELP4", 1, 7500, -1, 10000, 7, 0, 0, 0);
					func_19(44);
				}
			}
		}
	}
	if (!bLocal_407)
	{
		if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
		{
			bLocal_407 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
		}
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return false;
}

void func_19(int iParam0)
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

void func_20(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_21(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_21(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_22();
	}
}

void func_22()
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

Vector3 func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1036.73f, 6735.72f, -100.52f;
		case 1:
			return -908.86f, 6655.98f, -34.35f;
		case 2:
			return -985.14f, 6697.71f, -41.57f;
		case 3:
			return 1825.73f, -2920.67f, -36.82f;
		case 4:
			return 1772.11f, -2967.72f, -46.81f;
		case 5:
			return 3198.59f, -385.05f, -31.49f;
		case 6:
			return 3170.43f, -302.21f, -25.99f;
		case 7:
			return 3157.44f, -268.54f, -28.07f;
		case 8:
			return -3180.2f, 3010.9f, -37.6f;
		case 9:
			return -3178.3f, 3044.86f, -39.96f;
		case 10:
			return 910.48f, -3471.21f, -17.57f;
		case 11:
			return 1338.76f, -3041.59f, -19.23f;
		case 12:
			return 1153.38f, -2864.51f, -18.96f;
		case 13:
			return 958.56f, -2847.78f, -22.05f;
		case 14:
			return 782.28f, -2872.81f, -9.577f;
		case 15:
			return 581.28f, -2471.5f, -9.44f;
		case 16:
			return 636.56f, -2214.49f, -7.87f;
		case 17:
			return 371.06f, -3226.67f, -19.6f;
		case 18:
			return 689.69f, -3451.07f, -27.85f;
		case 19:
			return 180.17f, -2255.91f, -2.54f;
		case 20:
			return -691.64f, -2836.86f, -15.67f;
		case 21:
			return -3397.5f, 3717.52f, -86.14f;
		case 22:
			return -3357.11f, 3710.79f, -96.14f;
		case 23:
			return -3282.21f, 3682.6f, -82.87f;
		case 24:
			return -3256.66f, 3672.29f, -35.06f;
		case 25:
			return -3142.19f, 3625.95f, -26.31f;
		case 26:
			return 3271.34f, 6420.78f, -50.78f;
		case 27:
			return 3237.83f, 6487.44f, -43.9f;
		case 28:
			return 1772.1f, -2997.12f, -50.44f;
		case 29:
			return 3207f, -415.17f, -32.01f;
	}
	return 0f, 0f, 0f;
}

bool func_24(var uParam0, int iParam1, vector3 vParam2, int iParam5)
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
		if (!func_54(&(uParam0->f_1), bVar0))
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

bool func_25(int iParam0)
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

void func_26(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	func_35(0);
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
				UNK_0x6D99DF8263D35CE5(func_28(iParam3));
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
				else if (!func_27())
				{
					if (UNK_0x83D8570832F172A7(*iParam5))
					{
						func_35(1);
						UNK_0x6567AE843FADBA94(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			case 3:
				if ((UNK_0x1C0640BA9A7327B3() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_27())
				{
					if (UNK_0x83D8570832F172A7(*iParam5))
					{
						func_35(1);
						UNK_0x6567AE843FADBA94(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			case 4:
				if (UNK_0x83D8570832F172A7(*iParam5))
				{
					UNK_0xE17FDF9E3068281B(iParam5);
				}
				func_35(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
		}
	}
}

bool func_27()
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

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_34(iParam0))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10044.f_108, func_33(func_34(iParam0), iVar1)))
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
		while (iVar1 < func_34(iParam0))
		{
			iVar2 = (func_32(iParam0) + iVar1);
			if (func_29(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_29(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_14();
	}
	iVar1 = func_31(iParam0, bParam1);
	iVar2 = func_30(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_30(int iParam0)
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

int func_31(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_14();
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

int func_32(int iParam0)
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

int func_33(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_34(int iParam0)
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

void func_35(int iParam0)
{
	if (Global_76889 != iParam0)
	{
		Global_76889 = iParam0;
	}
}

int func_36(var uParam0, int iParam1, vector3 vParam2)
{
	bool bVar0;

	bVar0 = uParam0->f_10;
	if ((iParam1[bVar0 /*11*/])->f_10)
	{
		if ((iParam1[bVar0 /*11*/])->f_1 != 0)
		{
			if (UNK_0xEB751B41BC4080D4((iParam1[bVar0 /*11*/])->f_1) || func_49((iParam1[bVar0 /*11*/])->f_1))
			{
				func_39(uParam0, iParam1, bVar0);
				return 1;
			}
		}
	}
	if (UNK_0x762119754C50557A((iParam1[bVar0 /*11*/])->f_1))
	{
		if ((SYSTEM::VDIST2(vParam2, UNK_0xE925E52ACABA4CE7((iParam1[bVar0 /*11*/])->f_1)) > (60f * 60f) || func_38(13)) || func_38(14))
		{
			func_37(&((iParam1[bVar0 /*11*/])->f_1));
			(iParam1[bVar0 /*11*/])->f_1 = 0;
			(iParam1[bVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

void func_37(var uParam0)
{
	if (UNK_0x762119754C50557A(*uParam0))
	{
		UNK_0x40B7230FD4C59AA2(*uParam0);
	}
}

bool func_38(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_39(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = (func_32(*uParam0) + bParam2);
	func_37(&((iParam1[bParam2 /*11*/])->f_1));
	func_48(&((iParam1[bParam2 /*11*/])->f_2));
	(iParam1[bParam2 /*11*/])->f_1 = 0;
	(iParam1[bParam2 /*11*/])->f_10 = 0;
	func_47(&(uParam0->f_1), bParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_46(*uParam0, bParam2, 1);
	}
	UNK_0x5E858A00EAFA5B24(0, 200, 250);
	UNK_0x9505C13496579D28(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_45(&(uParam0->f_1), bParam2);
	}
	else
	{
		func_43(&(uParam0->f_1));
	}
	func_41();
	UNK_0x9EA96DA1925F0CA2(iVar0);
	func_40(1, 0);
	func_10();
	uParam0->f_11 = 1;
}

void func_40(int iParam0, int iParam1)
{
	Global_98783.f_7 = iParam0;
	Global_98783.f_8 = iParam1;
}

void func_41()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	bVar3 = false;
	UNK_0x6FB46C25CCB7E6D5(func_42(0), &bVar0, -1);
	iVar1 = (iVar1 + bVar0);
	if (bVar0 > 0)
	{
		func_12(18, bVar0);
	}
	UNK_0x6FB46C25CCB7E6D5(func_42(1), &bVar0, -1);
	iVar1 = (iVar1 + bVar0);
	if (bVar0 > 0)
	{
		func_12(19, bVar0);
	}
	UNK_0x6FB46C25CCB7E6D5(func_42(3), &bVar0, -1);
	iVar1 = (iVar1 + bVar0);
	if (bVar0 > 0)
	{
		func_12(20, bVar0);
	}
	iVar2 = ((func_34(0) + func_34(1)) + func_34(3));
	if (iVar2 > 0)
	{
		bVar3 = (iVar1 * 100 / iVar2);
	}
	UNK_0xCDC520E5E48E63D9(joaat("PERCENT_HIDDEN_PACKAGES"), bVar3, 1);
}

int func_42(int iParam0)
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

void func_43(var uParam0)
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
		if (func_54(uParam0, bVar0))
		{
			iVar1++;
			func_13((uParam0->f_2 + bVar0), 1, -1, 1);
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
		func_44(168, 0);
	}
}

void func_44(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_111638.f_8608[iParam0] = 1;
	Global_111638.f_8608.f_236[iParam0] = (UNK_0x1C0640BA9A7327B3() + iParam1);
}

void func_45(var uParam0, bool bParam1)
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
	if (func_54(uParam0, bParam1))
	{
		uParam0->f_4++;
		func_13((uParam0->f_2 + bParam1), 1, -1, 1);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_44(168, 0);
	}
}

void func_46(int iParam0, bool bParam1, bool bParam2)
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

void func_47(bool bParam0, bool bParam1, bool bParam2)
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

void func_48(bool bParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x661342B9651D16E2(*bParam0, false);
		UNK_0x142CC44DB769B57E(bParam0);
	}
}

bool func_49(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (!UNK_0x762119754C50557A(iParam0))
	{
		return false;
	}
	if (func_50(UNK_0x16F2683693E537C9()))
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

bool func_50(bool bParam0)
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

void func_51(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	bool bVar0;

	if (!uParam0->f_10)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (!func_38(13) && !func_38(14))
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
							func_52(uParam0->f_3);
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

void func_52(vector3 vParam0)
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

bool func_53(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_54(var uParam0, bool bParam1)
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

void func_55()
{
	float fVar0;

	switch (iLocal_411)
	{
		case 0:
			if (func_62())
			{
				if (func_50(bLocal_409))
				{
					func_61();
					UNK_0xB078AFA7242F1F7B(bLocal_409, false);
					iLocal_411 = 1;
					if (iLocal_386 == 2)
					{
						func_2(3);
					}
				}
			}
			else if (func_50(bLocal_409) && func_50(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x70EED0761B82965E(UNK_0x16F2683693E537C9()))
				{
					fVar0 = 500f;
				}
				else
				{
					fVar0 = 250f;
				}
				if (func_60(UNK_0x16F2683693E537C9(), bLocal_409, 0) > fVar0)
				{
					func_59();
					if (iLocal_386 == 2)
					{
						func_2(3);
					}
				}
			}
			else
			{
				func_61();
				if (iLocal_386 == 2)
				{
					func_2(3);
				}
			}
			break;
		case 1:
			if (iLocal_386 == 2)
			{
				func_2(3);
			}
			if (!func_62())
			{
				if (func_50(bLocal_409))
				{
					if (!UNK_0xE4EDC4B0E92C078B(iLocal_410))
					{
						iLocal_410 = func_56(bLocal_409, 0, 0);
					}
					UNK_0x56FDC9ADE35F7DB0(bLocal_409, false, true, 0);
					if (UNK_0xA7082C42B8809BF2(UNK_0x134B62B726CEC8E6(bLocal_409)))
					{
						if (!UNK_0xE608C809F9416F00(bLocal_409))
						{
							UNK_0xB078AFA7242F1F7B(bLocal_409, true);
						}
					}
					iLocal_411 = 0;
				}
			}
			break;
	}
}

int func_56(bool bParam0, bool bParam1, bool bParam2)
{
	return func_57(bParam0, !bParam1, bParam2);
}

int func_57(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_58(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_58(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_58(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_59()
{
	func_61();
	if (func_50(bLocal_409))
	{
		if (UNK_0xA7082C42B8809BF2(UNK_0x134B62B726CEC8E6(bLocal_409)))
		{
			UNK_0xB078AFA7242F1F7B(bLocal_409, false);
		}
		UNK_0xD0C5FAC38659B26F(bLocal_409, 0);
		if (UNK_0xAF6690C489CC6203(bLocal_409))
		{
			UNK_0x046C362CF15F1935(&bLocal_409);
		}
	}
}

float func_60(bool bParam0, bool bParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
	}
	else
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, false) };
	}
	return UNK_0x0EB28750412C3A5A(vVar0, vVar3, iParam2);
}

void func_61()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_410))
	{
		UNK_0x142CC44DB769B57E(&iLocal_410);
	}
}

bool func_62()
{
	if (func_50(UNK_0x16F2683693E537C9()))
	{
		if (func_50(bLocal_409))
		{
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_409, 0))
			{
				return true;
			}
		}
		else if (func_63())
		{
			bLocal_409 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0xC844350D5D58C99A(bLocal_409))
			{
				UNK_0x73270B3C9CC833FD(bLocal_409, true, 1);
				UNK_0xD0C5FAC38659B26F(bLocal_409, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_63()
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("DINGHY") || UNK_0x134B62B726CEC8E6(bVar0) == joaat("DINGHY2"))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

void func_64()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	int iVar7;

	vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	if (func_24(&Local_42, &Local_55, vVar0, &iLocal_388))
	{
		vVar3 = { func_23(iLocal_388) };
		fVar6 = UNK_0x0EB28750412C3A5A(vVar3, vVar0, 0);
		if (fVar6 > 200f)
		{
			func_66();
			if (!bLocal_406)
			{
				bLocal_406 = true;
			}
			if (func_63())
			{
				if (!func_25(41))
				{
					func_20("DIVING_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(41);
				}
				if (iLocal_388 != iLocal_391)
				{
					if (UNK_0xE4EDC4B0E92C078B(iLocal_390))
					{
						UNK_0x142CC44DB769B57E(&iLocal_390);
					}
				}
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_390))
				{
					iLocal_390 = UNK_0x3F3860E60C44719E(vVar3, 200f);
					UNK_0x7F010F50CE03A8AF(iLocal_390, 128);
					UNK_0x61755AC17D8F538E(iLocal_390, 2);
					UNK_0x54B31D18C3F36EB7(iLocal_390, 0);
					UNK_0xDC5B2F9D0CCE3A10(iLocal_390, "B_WRE");
					UNK_0xF2D30B8ACAF12A39(iLocal_390, false);
					iLocal_391 = iLocal_388;
				}
			}
			else if (UNK_0xE4EDC4B0E92C078B(iLocal_390))
			{
				UNK_0x142CC44DB769B57E(&iLocal_390);
			}
		}
		else
		{
			if (func_63())
			{
				if (!func_25(42))
				{
					func_20("DIVING_HELP2", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(42);
				}
			}
			if (func_25(42))
			{
				if (!func_25(43))
				{
					if (UNK_0x70EED0761B82965E(UNK_0x16F2683693E537C9()) && !UNK_0xBADF5264209B7544(UNK_0x16F2683693E537C9()))
					{
						func_20("DIVING_HELP3", 1, 2000, -1, 10000, 7, 0, 0, 0);
						func_19(43);
					}
				}
			}
			if (UNK_0xE4EDC4B0E92C078B(iLocal_390))
			{
				UNK_0x142CC44DB769B57E(&iLocal_390);
			}
			if (iLocal_388 != iLocal_391)
			{
				func_66();
				iLocal_391 = iLocal_388;
				bLocal_406 = true;
			}
			if (Local_42.f_1.f_4 < Local_42.f_1.f_3)
			{
				if (bLocal_406)
				{
					bLocal_403 = 0f;
					bLocal_404 = fVar6;
					if (func_63())
					{
						bLocal_404 = func_65(bLocal_404, 20f, 200f);
					}
					else
					{
						bLocal_404 = func_65(bLocal_404, 10f, 200f);
					}
					fLocal_405 = (bLocal_404 * 0.025f);
					bLocal_406 = false;
					if (func_63())
					{
						UNK_0xEB819BD1E585E9CB(iLocal_408, "SINGLE_BLIP_FROM_BOAT", vVar3, "ABIGAIL_SONAR_SOUNDSET", false, 0, 0);
					}
					else
					{
						UNK_0xEB819BD1E585E9CB(iLocal_408, "SCRIPT_TRIGGERED_FROM_PROP", vVar0, "ABIGAIL_SONAR_SOUNDSET", false, 0, 0);
					}
				}
				else
				{
					bLocal_403 = (bLocal_403 + fLocal_405);
					bLocal_403 = func_65(bLocal_403, 0f, bLocal_404);
					if (!UNK_0xE4EDC4B0E92C078B(iLocal_392))
					{
						iLocal_392 = UNK_0x3F3860E60C44719E(vVar3, bLocal_403);
						UNK_0x7F010F50CE03A8AF(iLocal_392, 255);
						UNK_0x61755AC17D8F538E(iLocal_392, 4);
						UNK_0x6ABCCE651368DB93(iLocal_392, true);
						UNK_0xBF72CE7FA6B07FFC(iLocal_392, 1);
						UNK_0xF2D30B8ACAF12A39(iLocal_392, false);
					}
					else
					{
						UNK_0x516E63E474722206(iLocal_392, bLocal_403);
					}
					iVar7 = 0;
					if (func_63())
					{
						iVar7 = 0;
						while (iVar7 <= 3)
						{
							if (!UNK_0xE4EDC4B0E92C078B(iLocal_393[iVar7]))
							{
								iLocal_393[iVar7] = UNK_0x3F3860E60C44719E(vVar3, (bLocal_403 + fLocal_398[iVar7]));
								UNK_0x7F010F50CE03A8AF(iLocal_393[iVar7], 255);
								UNK_0x61755AC17D8F538E(iLocal_393[iVar7], 4);
								UNK_0x6ABCCE651368DB93(iLocal_393[iVar7], true);
								UNK_0xBF72CE7FA6B07FFC(iLocal_393[iVar7], 1);
								UNK_0xF2D30B8ACAF12A39(iLocal_393[iVar7], false);
							}
							else
							{
								UNK_0x516E63E474722206(iLocal_393[iVar7], (bLocal_403 + fLocal_398[iVar7]));
							}
							iVar7++;
						}
					}
					else
					{
						iVar7 = 0;
						while (iVar7 <= 3)
						{
							if (UNK_0xE4EDC4B0E92C078B(iLocal_393[iVar7]))
							{
								UNK_0x516E63E474722206(iLocal_393[iVar7], bLocal_403);
							}
							iVar7++;
						}
					}
					if (bLocal_403 >= bLocal_404)
					{
						bLocal_406 = true;
					}
				}
			}
			else
			{
				func_66();
			}
		}
	}
}

bool func_65(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 > bParam2)
	{
		return bParam2;
	}
	else if (bParam0 < bParam1)
	{
		return bParam1;
	}
	return bParam0;
}

void func_66()
{
	int iVar0;

	if (UNK_0xE4EDC4B0E92C078B(iLocal_392))
	{
		UNK_0x142CC44DB769B57E(&iLocal_392);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_393[iVar0]))
		{
			UNK_0x142CC44DB769B57E(&(iLocal_393[iVar0]));
		}
		iVar0++;
	}
}

void func_67()
{
	iLocal_389 = 0;
	if (func_62())
	{
		iLocal_411 = 1;
	}
	else
	{
		iLocal_411 = 0;
	}
	func_71();
	func_70(&Local_42, 5, joaat("PROP_SUB_CHUNK_01"), "DIVING_COLLECT");
	func_68(&Local_42, joaat("NUM_HIDDEN_PACKAGES_4"), 845, 30);
	func_2(1);
	fLocal_398[0] = 0.25f;
	fLocal_398[1] = 0.5f;
	fLocal_398[2] = 0.75f;
	fLocal_398[3] = 1f;
}

void func_68(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_69(&(uParam0->f_1), iParam2, iParam3);
}

void func_69(bool bParam0, int iParam1, int iParam2)
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
		if (func_29((bParam0->f_2 + bVar0), -1, -1))
		{
			iVar1++;
			func_47(bParam0, bVar0, 1);
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

void func_70(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_71()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		Local_55[iVar0 /*11*/].f_3 = { func_23(iVar0) };
		Local_55[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	Local_55[0 /*11*/].f_6 = { -16.4f, 78.53f, -146.67f };
	Local_55[1 /*11*/].f_6 = { 0f, 45f, 10f };
	Local_55[2 /*11*/].f_6 = { 0.72f, 65.2f, -50.26f };
	Local_55[3 /*11*/].f_6 = { 0f, 15f, -132.16f };
	Local_55[4 /*11*/].f_6 = { 166.37f, -40f, 168.81f };
	Local_55[5 /*11*/].f_6 = { 90f, 56.2f, 90f };
	Local_55[6 /*11*/].f_6 = { -20f, 0f, 89.95f };
	Local_55[7 /*11*/].f_6 = { 4.08f, 54.9f, -65.35f };
	Local_55[8 /*11*/].f_6 = { 174.15f, -58.2f, -144.66f };
	Local_55[9 /*11*/].f_6 = { -28.22f, 36.11f, -90.22f };
	Local_55[10 /*11*/].f_6 = { -5f, 44f, 65f };
	Local_55[11 /*11*/].f_6 = { 0f, -108f, 45.36f };
	Local_55[12 /*11*/].f_6 = { -10.9f, 43.12f, 131.52f };
	Local_55[13 /*11*/].f_6 = { 12.37f, 49.66f, 126.88f };
	Local_55[14 /*11*/].f_6 = { 4.35f, 10.22f, 27.51f };
	Local_55[15 /*11*/].f_6 = { 0f, 10f, 60.73f };
	Local_55[16 /*11*/].f_6 = { 150.56f, -78.67f, -174.35f };
	Local_55[17 /*11*/].f_6 = { 0f, 50f, 46.41f };
	Local_55[18 /*11*/].f_6 = { 6.26f, 44.65f, 8.88f };
	Local_55[19 /*11*/].f_6 = { 90f, 78.5f, 16.04f };
	Local_55[20 /*11*/].f_6 = { -1.36f, 6.53f, -70.94f };
	Local_55[21 /*11*/].f_6 = { -61.86f, 78.61f, 126.5f };
	Local_55[22 /*11*/].f_6 = { -10f, -80.71f, 69.7f };
	Local_55[23 /*11*/].f_6 = { -76.43f, -70.02f, 29.74f };
	Local_55[24 /*11*/].f_6 = { -28f, -70f, 107.53f };
	Local_55[25 /*11*/].f_6 = { 4.19f, 6.46f, 110.43f };
	Local_55[26 /*11*/].f_6 = { -3.19f, 60.6f, 25f };
	Local_55[27 /*11*/].f_6 = { 0f, -81.68f, -20.16f };
	Local_55[28 /*11*/].f_6 = { 7.39f, 44.52f, 19.65f };
	Local_55[29 /*11*/].f_6 = { 89.74f, 80.95f, 151.74f };
}

bool func_72(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return false;
	}
	return !UNK_0x437347B10A200C4B(bParam0, 0);
}

bool func_73(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_74(iParam0))
	{
		return false;
	}
	return true;
}

int func_74(int iParam0)
{
	return func_75(iParam0, Global_41431);
}

int func_75(int iParam0, int iParam1)
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

int func_76(int iParam0)
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

void func_77(bool bParam0)
{
	int iVar0;

	if (UNK_0xE4EDC4B0E92C078B(iLocal_390))
	{
		UNK_0x142CC44DB769B57E(&iLocal_390);
	}
	func_66();
	if (!UNK_0x8AA6DC470ABA63A2(iLocal_408))
	{
		UNK_0x55D0A2DB35045A35(iLocal_408);
	}
	func_59();
	iVar0 = 0;
	while (iVar0 < Local_55)
	{
		func_48(&(Local_55[iVar0 /*11*/].f_2));
		func_37(&(Local_55[iVar0 /*11*/].f_1));
		Local_55[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		if (func_79(&(Local_42.f_1)) || func_17(110) == 1)
		{
			func_78(27);
		}
		UNK_0x71199B01895C6202(Local_42.f_7);
		UNK_0x10FAF14A60A0DBE1();
	}
	else
	{
		iLocal_386 = 0;
	}
}

int func_78(int iParam0)
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

bool func_79(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

