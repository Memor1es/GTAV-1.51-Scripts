#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	vector3 vLocal_43 = { 0f, 0f, 0f };
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<5> Local_49[8];
	struct<4> Local_90[8];
	vector3 vLocal_123 = { 0f, 0f, 0f };
	vector3 vLocal_126 = { 0f, 0f, 0f };
	vector3 vLocal_129 = { 0f, 0f, 0f };
	vector3 vLocal_132 = { 0f, 0f, 0f };
	vector3 vLocal_135 = { 0f, 0f, 0f };
	vector3 vLocal_138 = { 0f, 0f, 0f };
	vector3 vLocal_141 = { 0f, 0f, 0f };
	float fLocal_144 = 0f;
	vector3 vLocal_145 = { 0f, 0f, 0f };
	float fLocal_148 = 0f;
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
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
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_123 = { 0f, 0f, 0f };
	vLocal_129 = { 1064.871f, 2670.857f, 38.5511f };
	vLocal_132 = { 926.3422f, 2708.926f, 39.5394f };
	vLocal_135 = { 1140.03f, 2698.027f, 37.1568f };
	vLocal_138 = { vLocal_123 };
	fLocal_164 = 0f;
	iLocal_165 = joaat("DUKES2");
	iLocal_166 = joaat("PHANTOM");
	iLocal_167 = joaat("TRAILERS2");
	iLocal_168 = joaat("RANCHERXL");
	iLocal_169 = joaat("A_M_M_HILLBILLY_01");
	iLocal_170 = joaat("A_M_M_HILLBILLY_02");
	iLocal_173 = 3;
	vLocal_126 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (func_225(Local_90[0 /*4*/]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_90[0 /*4*/], 2);
		}
		func_198(1, 0);
	}
	if (func_156(vLocal_126, 31, 0, 0, 0))
	{
		func_153(31);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || func_152(1)) || iLocal_155 > 2)
		{
			if (func_152(13))
			{
				func_121();
			}
			switch (iLocal_47)
			{
				case 0:
					func_59();
					break;
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			if (func_225(Local_90[0 /*4*/]))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_90[0 /*4*/], 2);
			}
			func_198(1, 0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	switch (iLocal_48)
	{
		case 0:
			iLocal_48 = 1;
			break;
		case 1:
			switch (iLocal_155)
			{
				case 0:
					iLocal_48 = 2;
					break;
			}
			break;
		case 2:
			func_2();
			break;
	}
}

void func_2()
{
	func_56(64, 1);
	func_56(65, 1);
	func_32(Local_90[0 /*4*/], 145);
	func_6(-1, 0);
	func_3();
	func_198(1, 0);
}

void func_3()
{
	func_4();
}

int func_4()
{
	if (func_5(0))
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

bool func_5(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

void func_6(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_29(iParam0))
	{
		func_28(iParam0, iParam1);
		if (!func_27(51))
		{
			func_17("RE_REWARD", 1, 0, 4000, 10000, func_20(), 0, 138, 0);
			func_16(51);
		}
		if (func_15(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_14(iParam0, iParam1) != 322)
		{
			func_8(func_14(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_111626 = iParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_7(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_7(int iParam0)
{
	Global_111624 = iParam0;
}

void func_8(int iParam0, var uParam1, var uParam2)
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
		func_12((891 + iParam0), 1, -1, 1);
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
		Global_111638.f_10189[iParam0 /*12*/].f_10 = uParam1;
		Global_111638.f_10189[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
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
	int iVar9;

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
			if (!MISC::IS_BIT_SET(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					STATS::_UPDATE_STAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_111361, 0);
					MISC::SET_BIT(&(Global_111638.f_10189.f_3856), 14);
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
		iVar9 = Global_111364;
	}
	else
	{
		iVar9 = Global_111378;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_111374, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_111357, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_111375, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_111358, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_111376, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_111359, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_111377, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_111360, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_111364, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_111380 + Global_111379), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_111363 + Global_111362), true);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + iVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_111638.f_10189.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_111381, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_111382, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_111383, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111638.f_10189.f_3853))
	{
		func_11(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76622)
		{
			if (func_10() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_4();
				}
			}
		}
	}
}

int func_10()
{
	return Global_30768;
}

bool func_11(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 78)
	{
		return false;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return false;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return false;
}

bool func_12(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
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

	if (iParam2 == -1)
	{
		iParam2 = func_13();
	}
	bVar0 = false;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar23, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar24, bParam1, iVar1, bParam3);
	}
	return bVar0;
}

int func_13()
{
	return Global_1312745;
}

int func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
		case 1:
			return 226;
		case 2:
			return 243;
		case 3:
			return 256;
		case 4:
			return 259;
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		case 6:
			return 265;
		case 7:
			return 218;
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		case 10:
			return 219;
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		case 12:
			return 254;
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		case 14:
			return 283;
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		case 16:
			return 252;
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		case 18:
			return 253;
		case 19:
			return 215;
		case 20:
			return 216;
		case 21:
			return 251;
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		case 24:
			return 242;
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		case 8:
			return 255;
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		case 28:
			return 217;
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		case 30:
			return 285;
		case 31:
			return 318;
		case 32:
			return 319;
		case 33:
			return 320;
	}
	return 322;
}

bool func_15(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
	}
	return true;
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_111638.f_20405.f_150[iVar1]), iVar0);
	}
}

void func_17(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_18(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_18(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
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
		if (MISC::ARE_STRINGS_EQUAL(&(Global_111638.f_20405[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_12 = iParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_15 = iParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_19();
	}
}

void func_19()
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
		if (MISC::IS_BIT_SET(Global_111638.f_20405[iVar0 /*16*/].f_11, 0))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_111638.f_20405[iVar0 /*16*/].f_11, 1))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_111638.f_20405[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_20()
{
	func_21();
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

void func_21()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_25(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_24(PLAYER::PLAYER_PED_ID());
			if (func_23(iVar0) && (!func_22(14) || Global_110589))
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

bool func_22(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
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

bool func_27(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return MISC::IS_BIT_SET(Global_111638.f_20405.f_150[iVar1], iVar0);
	}
	return false;
}

void func_28(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_111638.f_24990.f_8[iParam0]), iParam1);
}

int func_29(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		case 5:
			iVar0 = 2;
			break;
		case 9:
			iVar0 = 10;
			break;
		case 11:
			iVar0 = 4;
			break;
		case 13:
			iVar0 = 4;
			break;
		case 15:
			iVar0 = 2;
			break;
		case 17:
			iVar0 = 2;
			break;
		case 22:
			iVar0 = 2;
			break;
		case 23:
			iVar0 = 2;
			break;
		case 25:
			iVar0 = 3;
			break;
		case 26:
			iVar0 = 2;
			break;
		case 27:
			iVar0 = 2;
			break;
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_30()
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	iVar16 = func_31(Var0);
	return iVar16;
}

int func_31(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("RE_ABANDONEDCAR"):
			return 23;
		case joaat("RE_ACCIDENT"):
			return 0;
		case joaat("RE_ARRESTS"):
			return 15;
		case joaat("RE_ATMROBBERY"):
			return 1;
		case joaat("RE_BIKETHIEF"):
			return 26;
		case joaat("RE_BORDER"):
			return 29;
		case joaat("RE_BURIALS"):
			return 24;
		case joaat("RE_BUS_TOURS"):
			return 2;
		case joaat("RE_CARTHEFT"):
			return 17;
		case joaat("RE_CHASETHIEVES"):
			return 11;
		case joaat("RE_CRASHRESCUE"):
			return 16;
		case joaat("RE_CULTSHOOTOUT"):
			return 18;
		case joaat("RE_DEALGONEWRONG"):
			return 12;
		case joaat("RE_DOMESTIC"):
			return 3;
		case joaat("RE_DRUNKDRIVER"):
			return 27;
		case joaat("RE_GANG_INTIMIDATION"):
			return 20;
		case joaat("RE_GANGFIGHT"):
			return 19;
		case joaat("RE_GETAWAY_DRIVER"):
			return 4;
		case joaat("RE_HITCH_LIFT"):
			return 13;
		case joaat("RE_HOMELAND_SECURITY"):
			return 28;
		case joaat("RE_LURED"):
			return 7;
		case joaat("RE_MUGGINGS"):
			return 25;
		case joaat("RE_PAPARAZZI"):
			return 10;
		case joaat("RE_PRISONERLIFT"):
			return 22;
		case joaat("RE_PRISONVANBREAK"):
			return 21;
		case joaat("RE_SECURITYVAN"):
			return 9;
		case joaat("RE_SHOPROBBERY"):
			return 5;
		case joaat("RE_SNATCHED"):
			return 6;
		case joaat("RE_STAG_DO"):
			return 14;
		case joaat("RE_YETARIAN"):
			return 30;
		case joaat("RE_DUEL"):
			return 31;
		case joaat("RE_SEAPLANE"):
			return 32;
		case joaat("RE_MONKEY"):
			return 33;
	}
	return -1;
}

void func_32(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_38(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("PLAYER_ZERO"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("PLAYER_ONE"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("PLAYER_TWO"))
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
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
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
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_111638.f_32744.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_111638.f_32744.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_111638.f_32744.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111638.f_32744.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111638.f_32744.f_5590 = iParam1;
	Global_76346 = iParam0;
	Global_111638.f_32744.f_5588 = 1;
	func_33(iParam0, &(Global_111638.f_32744.f_5510));
}

void func_33(int iParam0, var uParam1)
{
	int iVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_37(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_36(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_35(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_34(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_34(int iParam0)
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

int func_35(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
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
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0))
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
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_36(int iParam0)
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

void func_37(var uParam0)
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

bool func_38(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_54(iParam0, 0, 0)) || func_54(iParam0, 1, 0)) || func_54(iParam0, 2, 0)) || func_53(iParam0) != 145) || func_52(iParam0)) || func_51(iParam0)) || func_50(iParam0)) || func_49(iParam0)) || !func_39(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_51(iParam0))
		{
		}
		if (func_51(iParam0))
		{
		}
		if (func_54(iParam0, 0, 0))
		{
		}
		if (func_54(iParam0, 1, 0))
		{
		}
		if (func_54(iParam0, 2, 0))
		{
		}
		if (func_53(iParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_39(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!func_40(iParam0, 0))
	{
		return false;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return false;
	}
	switch (iParam0)
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

bool func_40(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;

	if (iParam0 == 0)
	{
		return false;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return false;
	}
	if (((((iParam0 == joaat("DOMINATOR2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("BUFFALO3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("GAUNTLET2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("BLIMP2")) || (iParam0 == joaat("STALION2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_48())
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("BLIMP"))
	{
		if ((((!func_47() && !func_46()) && !func_45()) && !func_44()) && !func_48())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("CARBONRS")) || iParam0 == joaat("KHAMELION"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_45())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_43(iParam0))
		{
			return false;
		}
	}
	if (!func_41(iParam0))
	{
		return false;
	}
	return true;
}

bool func_41(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_42())
	{
		return true;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return true;
	}
	switch (iParam0)
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
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return false;
	}
	return true;
}

bool func_42()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return false;
}

bool func_43(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_2513258)
	{
		return true;
	}
	iVar0 = 1;
	iVar1 = NETWORK::_0xF12E6CD06C73D69E();
	if (iParam0 == joaat("BTYPE3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("FACTION3"))
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIRGO3") || iParam0 == joaat("VIRGO2"))
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SABREGT2"))
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO5"))
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MINIVAN2"))
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SLAMVAN3"))
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("PROTOTIPO"))
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEVEN70"))
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PFISTER811"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("BF400"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BRIOSO"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIFFHANGER"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CONTENDER"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LE7B"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OMNIS"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPHYTRUCK"))
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPHYTRUCK2"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPOS"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GARGOYLE"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RALLYTRUCK"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAMPA2"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRUS"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHEAVA"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LYNX"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STALION2"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GAUNTLET2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR2"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BUFFALO3"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DEFILER"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTBLADE"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEA"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ESSKEY"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AVARUS"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEB"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAKUCHOU2"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VORTEX"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHOTARO"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHIMERA"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPTOR"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DAEMON2"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER4"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO6"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOUGA2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WOLFSBANE"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO3"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BAGGER"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SANCTUS"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MANCHEZ"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RATBIKE"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("VOLTIC2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUINER2"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE4"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE5"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PHANTOM2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TECHNICAL2"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOXVILLE5"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WASTELANDER"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER5"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET3"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY2"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR2"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB2"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PENETRATOR"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER2"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEMPESTA"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GP1"))
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("INFERNUS2"))
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUSTON"))
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TURISMO2"))
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("XA21"))
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEETAH2"))
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORERO"))
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAGNER"))
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ARDENT"))
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTSHARK"))
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MICROLIGHT"))
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOGUL"))
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ROGUE"))
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STARLING"))
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEABREEZE"))
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULA"))
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PYRO"))
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOLOTOK"))
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NOKOTA"))
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOMBUSHKA"))
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUNTER"))
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAVOK"))
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOWARD"))
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ALPHAZ1"))
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CYCLONE"))
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISIONE"))
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIGILANTE"))
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RETINUE"))
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPIDGT3"))
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DELUXO"))
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STROMBERG"))
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RIOT2"))
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHERNOBOG"))
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KHANJALI"))
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AKULA"))
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("THRUSTER"))
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BARRAGE"))
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VOLATOL"))
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET4"))
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NEON"))
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STREITER"))
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SENTINEL3"))
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOSEMITE"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SC1"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AUTARCH"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GT500"))
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUSTLER"))
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("REVOLTER"))
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PARIAH"))
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAIDEN"))
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SAVESTRA"))
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RIATA"))
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HERMES"))
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET5"))
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("Z190"))
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISERIS"))
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KAMACHO"))
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GB200"))
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGALOA"))
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELLIE"))
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ISSI3"))
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MICHELLI"))
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FLASHGT"))
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOTRING"))
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEZERACT"))
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRANT"))
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR3"))
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAIPAN"))
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ENTITY2"))
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("JESTER3"))
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEBUREK"))
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CARACARA"))
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEASPARROW"))
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("TERBYTE"))
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PBUS2"))
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MULE4"))
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("POUNDER2"))
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SWINGER"))
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MENACER"))
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SCRAMJET"))
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STRIKEFORCE"))
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OPPRESSOR2"))
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PATRIOT2"))
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STAFFORD"))
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FREECRAWLER"))
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLIMP3"))
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MONSTER3"))
	{
	}
	else if (iParam0 == joaat("CERBERUS"))
	{
	}
	else if (iParam0 == joaat("CERBERUS2"))
	{
	}
	else if (iParam0 == joaat("CERBERUS3"))
	{
	}
	else if (iParam0 == joaat("BRUTUS"))
	{
	}
	else if (iParam0 == joaat("BRUTUS2"))
	{
	}
	else if (iParam0 == joaat("BRUTUS3"))
	{
	}
	else if (iParam0 == joaat("SCARAB"))
	{
	}
	else if (iParam0 == joaat("SCARAB2"))
	{
	}
	else if (iParam0 == joaat("SCARAB3"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR2"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR3"))
	{
	}
	else if (iParam0 == joaat("ZR380"))
	{
	}
	else if (iParam0 == joaat("ZR3802"))
	{
	}
	else if (iParam0 == joaat("ZR3803"))
	{
	}
	else if (iParam0 == joaat("IMPALER"))
	{
	}
	else if (iParam0 == joaat("DEVESTE"))
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TOROS"))
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIQUE"))
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTO"))
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DEVIANT"))
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAMOS"))
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULIP"))
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SCHLAGEN"))
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RCBANDITO"))
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LOCUST"))
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OUTLAW"))
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FIRETRUK"))
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BURRITO2"))
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOXVILLE"))
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STOCKADE"))
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LGUARD"))
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER2"))
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLUB"))
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_44()
{
	return false;
}

bool func_45()
{
	return true;
}

bool func_46()
{
	return true;
}

bool func_47()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_48()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAVE_JUST_UPLOAD_LATER())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
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
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return true;
		}
	}
	return false;
}

bool func_49(int iParam0)
{
	int iVar0;
	char* sVar1;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("SPEEDO") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_40(iVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_50(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96105[iVar0]))
		{
			if (Global_96105[iVar0] == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_51(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96075[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96075[iVar0], false))
			{
				if (Global_96075[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_96075[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_52(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_484[24]))
	{
		if (iParam0 == Global_75441.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75441.f_484[iVar0])
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_53(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == iParam0)
			{
				return Global_96085[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_54(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return false;
	}
	iVar0 = 0;
	while (func_55(iParam1, iVar0, &uVar1, &iVar9))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_111638.f_7224[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&uVar1, iParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_55(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}
	return false;
}

void func_56(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_58(iParam0, 0))
		{
			func_57(iParam0, 1, 0);
			func_57(iParam0, 2, 0);
			func_57(iParam0, 3, 0);
			func_57(iParam0, 4, 0);
			func_57(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_57(iParam0, 0, 0);
	}
}

void func_57(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_111638.f_32744[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_111638.f_32744[iParam0]), iParam1);
	}
}

bool func_58(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_111638.f_32744[iParam0], iParam1);
}

void func_59()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	int iVar15;
	float fVar16;
	var uVar17;
	int iVar18;
	int iVar19;

	switch (iLocal_48)
	{
		case 0:
			func_110();
			func_109(13);
			STREAMING::REQUEST_MODEL(iLocal_165);
			iLocal_48 = 1;
			break;
		case 1:
			switch (iLocal_155)
			{
				case 0:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_165))
					{
						func_105(0, vLocal_123, -1f, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_165);
						STREAMING::REQUEST_MODEL(iLocal_166);
						STREAMING::REQUEST_MODEL(iLocal_169);
						STREAMING::REQUEST_MODEL(iLocal_167);
						func_95(1);
						iLocal_155++;
					}
					break;
				case 1:
					if ((STREAMING::HAS_MODEL_LOADED(iLocal_166) && STREAMING::HAS_MODEL_LOADED(iLocal_169)) && STREAMING::HAS_MODEL_LOADED(iLocal_167))
					{
						func_109(9);
						iLocal_155++;
					}
					break;
				case 2:
					if ((func_225(Local_90[3 /*4*/]) && func_225(Local_49[0 /*5*/])) && func_94())
					{
						vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_90[3 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
						if (vVar0.x <= 0f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 953.5052f, 2665.587f, 38.61237f, 955.0941f, 2716.872f, 50.67046f, 71f, false, true, 0))
						{
							if ((((func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[3 /*4*/], 0f, 10f, 0f), 1.25f) || func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[3 /*4*/], 0f, 12.5f, 0f), 1.5f)) || func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[3 /*4*/], 0f, 15f, 0f), 1.75f)) || func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[3 /*4*/], 0f, 17.5f, 0f), 2f)) || func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[3 /*4*/], 0f, 20f, 0f), 2.25f))
							{
								func_88(3, 0, 4, 1);
								iLocal_155 = 4;
							}
						}
					}
					if (((!func_152(8) && func_225(Local_90[4 /*4*/])) && func_225(Local_49[1 /*5*/])) && func_94())
					{
						vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_90[4 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
						if (vVar0.x >= 0f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1110.712f, 2695.67f, 36.77993f, 1109.166f, 2665.531f, 48.50355f, 71f, false, true, 0))
						{
							if ((((func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[4 /*4*/], 0f, 10f, 0f), 1.5f) || func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[4 /*4*/], 0f, 12.5f, 0f), 1.75f)) || func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[4 /*4*/], 0f, 15f, 0f), 2f)) || func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[4 /*4*/], 0f, 17.5f, 0f), 2.25f)) || func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[4 /*4*/], 0f, 20f, 0f), 2.5f))
							{
								func_88(4, 1, 3, 0);
								iLocal_155 = 4;
							}
						}
					}
					if (!func_152(8) && func_86())
					{
						func_109(6);
						if (func_225(Local_49[0 /*5*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_49[0 /*5*/], false);
							TASK::TASK_COMBAT_PED(Local_49[0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_49[0 /*5*/].f_3 = 3;
						}
						if (func_225(Local_49[1 /*5*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_49[1 /*5*/], false);
							TASK::TASK_COMBAT_PED(Local_49[1 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_49[1 /*5*/].f_3 = 3;
						}
						if (func_225(Local_90[3 /*4*/]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_90[3 /*4*/], 1);
						}
						if (func_225(Local_90[4 /*4*/]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_90[4 /*4*/], 1);
						}
						iLocal_155++;
					}
					break;
				case 3:
					if ((!func_225(Local_49[0 /*5*/]) || HUD::DOES_BLIP_EXIST(Local_49[0 /*5*/].f_1)) && (!func_225(Local_49[1 /*5*/]) || HUD::DOES_BLIP_EXIST(Local_49[1 /*5*/].f_1)))
					{
						iLocal_155++;
					}
					break;
				case 4:
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_171);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_171, joaat("PLAYER"));
					if (func_225(Local_90[3 /*4*/]))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_90[3 /*4*/], 1);
					}
					if (func_225(Local_90[4 /*4*/]))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_90[4 /*4*/], 1);
					}
					STREAMING::REQUEST_MODEL(iLocal_168);
					SYSTEM::SETTIMERA(0);
					iLocal_155++;
					break;
				case 5:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_168))
					{
						STREAMING::REQUEST_MODEL(iLocal_169);
						iLocal_155++;
					}
					break;
				case 6:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_169))
					{
						STREAMING::REQUEST_MODEL(iLocal_170);
						iLocal_155++;
					}
					break;
				case 7:
					if ((STREAMING::HAS_MODEL_LOADED(iLocal_168) && STREAMING::HAS_MODEL_LOADED(iLocal_169)) && STREAMING::HAS_MODEL_LOADED(iLocal_170))
					{
						func_105(5, vLocal_123, -1082130432 /* Float: -1f */, 0);
						func_105(6, vLocal_123, -1082130432 /* Float: -1f */, 0);
						func_105(7, vLocal_123, -1082130432 /* Float: -1f */, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_168);
						func_81(2, 0, vLocal_123, -1082130432 /* Float: -1f */);
						func_81(3, 0, vLocal_123, -1082130432 /* Float: -1f */);
						func_81(4, 0, vLocal_123, -1082130432 /* Float: -1f */);
						func_81(5, 0, vLocal_123, -1082130432 /* Float: -1f */);
						func_81(6, 0, vLocal_123, -1082130432 /* Float: -1f */);
						func_81(7, 0, vLocal_123, -1082130432 /* Float: -1f */);
						if (func_152(10) && func_152(11))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_169);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_170);
						iLocal_155++;
					}
					break;
				case 8:
					if (!func_225(Local_49[0 /*5*/]) && !func_225(Local_49[1 /*5*/]))
					{
						if (SYSTEM::TIMERA() < 16000)
						{
							SYSTEM::SETTIMERA(16000);
						}
					}
					if (SYSTEM::TIMERA() > 20000 && func_80(PLAYER::PLAYER_PED_ID(), vLocal_129, 1) >= 150f)
					{
						iLocal_155++;
					}
					break;
				case 9:
					if (func_94() || (func_225(Local_90[0 /*4*/]) && func_79(PLAYER::PLAYER_PED_ID(), Local_90[0 /*4*/], 1) <= 35f))
					{
						vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(6, 10);
						if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vVar3, iVar15, &vVar6, 1, 5f, 0f))
						{
							PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar6, &uVar17, &iVar18);
							if (((iVar18 & 4 == 0 && (!func_78() || iVar18 & 8 == 0)) && (func_77() || iVar18 & 1 == 0)) && !func_76(vVar6, 1084227584 /* Float: 5f */))
							{
								fVar16 = func_75(vVar6, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
								vVar9 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar6, fVar16, 6f, -6f, 0f) };
								vVar12 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar6, fVar16, -6f, -6f, 0f) };
								if ((((!CAM::IS_SPHERE_VISIBLE(vVar6, 7f) && !CAM::IS_SPHERE_VISIBLE(vVar9, 7f)) && !CAM::IS_SPHERE_VISIBLE(vVar12, 7f)) && !func_76(vVar9, 1084227584 /* Float: 5f */)) && !func_76(vVar12, 1084227584 /* Float: 5f */))
								{
									func_74(Local_90[5 /*4*/], vVar6);
									func_74(Local_90[6 /*4*/], vVar9);
									func_74(Local_90[7 /*4*/], vVar12);
									iLocal_149 = MISC::GET_GAME_TIMER();
									iVar19 = 2;
									while (iVar19 <= 7)
									{
										if (func_225(Local_49[iVar19 /*5*/]))
										{
											Local_49[iVar19 /*5*/].f_1 = func_71(Local_49[iVar19 /*5*/], 1, 145);
											if (PED::IS_PED_IN_ANY_VEHICLE(Local_49[iVar19 /*5*/], false))
											{
												if (func_70(Local_49[iVar19 /*5*/], 0) == -1)
												{
													HUD::SET_BLIP_SCALE(Local_49[iVar19 /*5*/].f_1, 1f);
												}
												else
												{
													HUD::SET_BLIP_ALPHA(Local_49[iVar19 /*5*/].f_1, 0);
													HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_49[iVar19 /*5*/].f_1, true);
												}
											}
										}
										iVar19++;
									}
									func_109(2);
									func_109(7);
									iLocal_159 = (MISC::GET_GAME_TIMER() + 60000);
									func_69(6);
									iLocal_155++;
								}
							}
						}
					}
					break;
				case 10:
					if (((((func_225(Local_49[2 /*5*/]) || func_225(Local_49[3 /*5*/])) || func_225(Local_49[4 /*5*/])) || func_225(Local_49[5 /*5*/])) || func_225(Local_49[6 /*5*/])) || func_225(Local_49[7 /*5*/]))
					{
						if (func_152(7))
						{
							if (func_225(Local_90[5 /*4*/]))
							{
								func_62(5, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_150);
							}
							if (func_225(Local_90[6 /*4*/]))
							{
								func_62(6, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_151);
							}
							if (func_225(Local_90[7 /*4*/]))
							{
								func_62(7, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_152);
							}
						}
					}
					else if (!func_225(Local_49[0 /*5*/]) && !func_225(Local_49[1 /*5*/]))
					{
						if (func_225(Local_90[0 /*4*/]))
						{
							iLocal_48 = 2;
						}
						else
						{
							func_61();
						}
					}
					break;
			}
			break;
		case 2:
			func_60(1);
			break;
	}
}

void func_60(int iParam0)
{
	iLocal_155 = 0;
	iLocal_48 = 0;
	iLocal_47 = iParam0;
}

void func_61()
{
	if (func_225(Local_90[0 /*4*/]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_90[0 /*4*/], 2);
	}
	func_198(1, 0);
}

void func_62(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_90[iParam0 /*4*/], false))
	{
		if ((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && Local_90[iParam0 /*4*/] != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && func_68(Local_90[iParam0 /*4*/]))
		{
			if (iParam0 == 3 || iParam0 == 4)
			{
				fVar0 = 50f;
				fVar1 = 35f;
				iVar2 = 1500;
			}
			else
			{
				fVar0 = 75f;
				fVar1 = 50f;
				iVar2 = 3000;
			}
			if (func_80(iParam1, vLocal_141, 1) >= fVar0 && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1))
			{
				vLocal_145 = { vLocal_141 };
				fLocal_148 = fLocal_144;
				vLocal_141 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
				fLocal_144 = ENTITY::GET_ENTITY_HEADING(iParam1);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(Local_90[iParam0 /*4*/]))
			{
				*uParam2 = MISC::GET_GAME_TIMER();
			}
			else if (((((((((((MISC::GET_GAME_TIMER() - *uParam2) > iVar2 && (MISC::GET_GAME_TIMER() - iLocal_149) > 1500) && func_79(Local_90[iParam0 /*4*/], iParam1, 1) > func_80(iParam1, vLocal_145, 1)) && func_67(iParam0)) && func_80(iParam1, vLocal_145, 1) >= fVar0) && func_79(Local_90[iParam0 /*4*/], iParam1, 1) >= fVar1) && func_66(Local_90[iParam0 /*4*/], vLocal_145, 1153138688 /* Float: 1500f */)) && func_65(Local_90[iParam0 /*4*/], iParam1, vLocal_145)) && !func_64(vLocal_145)) && !CAM::IS_SPHERE_VISIBLE(vLocal_145, 4f)) && !func_76(vLocal_145, 1084227584 /* Float: 5f */))
			{
				MISC::CLEAR_AREA_OF_PEDS(vLocal_145, 1.5f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(vLocal_145, 5f, false, false, false, false, false, false);
				if (iParam0 == 3 || iParam0 == 4)
				{
					VEHICLE::DETACH_VEHICLE_FROM_TRAILER(Local_90[iParam0 /*4*/]);
					if (iParam0 == 3)
					{
						func_63(0, 3);
					}
					else
					{
						func_63(1, 3);
					}
				}
				ENTITY::SET_ENTITY_COORDS(Local_90[iParam0 /*4*/], vLocal_145, true, false, false, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_90[iParam0 /*4*/], 5f);
				ENTITY::SET_ENTITY_HEADING(Local_90[iParam0 /*4*/], fLocal_148);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_90[iParam0 /*4*/], true, true, false);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_90[iParam0 /*4*/], (ENTITY::GET_ENTITY_SPEED(iParam1) * 1.2f));
				*uParam2 = MISC::GET_GAME_TIMER();
				Local_90[iParam0 /*4*/].f_2 = MISC::GET_GAME_TIMER();
				iLocal_149 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			*uParam2 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_63(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Local_49[iParam0 /*5*/].f_2), iParam1);
}

bool func_64(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_65(int iParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, vParam2) };
	if ((vVar0.y > 0f && vVar3.y > 0f) || (vVar0.y < 0f && vVar3.y < 0f))
	{
		return true;
	}
	if (iParam0 == Local_90[3 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_49[0 /*5*/].f_1))
	{
		return true;
	}
	if (iParam0 == Local_90[4 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_49[1 /*5*/].f_1))
	{
		return true;
	}
	return false;
}

bool func_66(int iParam0, vector3 vParam1, float fParam4)
{
	if (func_80(iParam0, vParam1, 1) <= fParam4)
	{
		return true;
	}
	if (iParam0 == Local_90[3 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_49[0 /*5*/].f_1))
	{
		return true;
	}
	if (iParam0 == Local_90[4 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_49[1 /*5*/].f_1))
	{
		return true;
	}
	return false;
}

bool func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;

	if (func_152(6))
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 5;
	}
	if (func_152(7))
	{
		iVar1 = 7;
	}
	else if (func_152(6))
	{
		iVar1 = 4;
	}
	else
	{
		iVar1 = 5;
	}
	iVar3 = -1;
	fVar5 = -1f;
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (func_225(Local_90[iVar2 /*4*/]))
		{
			if (IntToFloat(iVar3) == -1f || (MISC::GET_GAME_TIMER() - Local_90[iVar2 /*4*/].f_2) > iVar3)
			{
				iVar3 = (MISC::GET_GAME_TIMER() - Local_90[iVar2 /*4*/].f_2);
				iVar4 = iVar2;
			}
			if (fVar5 == -1f || func_79(Local_90[iVar2 /*4*/], PLAYER::PLAYER_PED_ID(), 1) > fVar5)
			{
				fVar5 = func_79(Local_90[iVar2 /*4*/], PLAYER::PLAYER_PED_ID(), 1);
				iVar6 = iVar2;
			}
		}
		iVar2++;
	}
	if (iParam0 == iVar4 || iParam0 == iVar6)
	{
		return true;
	}
	return false;
}

bool func_68(int iParam0)
{
	int iVar0;

	if (func_225(iParam0) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (func_225(iVar0))
		{
			return true;
		}
	}
	return false;
}

void func_69(int iParam0)
{
	MISC::CLEAR_BIT(&iLocal_156, iParam0);
}

int func_70(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_71(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_72(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_72(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_73(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_73(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_73(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_73(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_74(int iParam0, vector3 vParam1)
{
	if (func_225(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		MISC::CLEAR_AREA_OF_PEDS(vParam1, 1.5f, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(vParam1, 3f, false, false, false, false, false, false);
		ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, false, true);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
		ENTITY::SET_ENTITY_HEADING(iParam0, func_75(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
		if (func_225(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false)))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::TASK_VEHICLE_CHASE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false), PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false), iParam0, PLAYER::PLAYER_PED_ID(), 2, 100f, 786469, -1f, -1f, true);
			}
		}
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) * 1.2f));
	}
}

float func_75(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

bool func_76(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_90[iVar1 /*4*/]) && ENTITY::IS_ENTITY_AT_COORD(Local_90[iVar1 /*4*/], vParam0, fParam3, fParam3, fParam3, false, true, 0))
		{
			iVar0 = 1;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_77()
{
	vector3 vVar0;
	int iVar3;
	var uVar4;

	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &vVar0, 1, 3f, 0f))
	{
		if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar0, &uVar4, &iVar3))
		{
			return iVar3 & 1 == 1;
		}
	}
	return false;
}

bool func_78()
{
	vector3 vVar0;
	int iVar3;
	var uVar4;

	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &vVar0, 1, 3f, 0f))
	{
		if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar0, &uVar4, &iVar3))
		{
			return iVar3 & 8 == 0;
		}
	}
	return false;
}

float func_79(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, bParam2);
}

float func_80(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, bParam4);
}

int func_81(int iParam0, bool bParam1, vector3 vParam2, float fParam5)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	vector3 vVar12;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	int iVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	bool bVar56;
	bool bVar57;
	bool bVar58;
	bool bVar59;
	bool bVar60;
	bool bVar61;
	bool bVar62;
	bool bVar63;
	bool bVar64;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	char* sVar71;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_49[iParam0 /*5*/]))
	{
		iVar5 = joaat("WEAPON_UNARMED");
		iVar6 = 0;
		iVar7 = -1;
		vVar9 = { vLocal_123 };
		vVar12 = { vLocal_123 };
		iVar15 = 0;
		iVar16 = 1;
		iVar17 = 0;
		iVar18 = 0;
		iVar19 = 10;
		fVar20 = 0f;
		fVar21 = 0f;
		fVar22 = 60f;
		fVar23 = 5f;
		fVar24 = 120f;
		fVar25 = -90f;
		fVar26 = 90f;
		iVar27 = iLocal_171;
		bVar28 = true;
		bVar29 = true;
		bVar30 = false;
		bVar31 = true;
		bVar32 = true;
		bVar33 = true;
		bVar34 = false;
		bVar35 = true;
		bVar36 = false;
		bVar37 = true;
		bVar38 = true;
		bVar39 = false;
		bVar40 = false;
		bVar41 = true;
		bVar42 = false;
		bVar43 = true;
		bVar44 = true;
		bVar45 = false;
		bVar46 = true;
		bVar47 = true;
		bVar48 = true;
		bVar49 = false;
		bVar50 = false;
		bVar51 = false;
		bVar52 = false;
		bVar53 = false;
		bVar54 = false;
		bVar55 = true;
		bVar56 = false;
		bVar57 = false;
		bVar58 = false;
		bVar59 = true;
		bVar60 = true;
		bVar61 = false;
		bVar62 = false;
		bVar63 = false;
		bVar64 = false;
		bVar65 = false;
		bVar66 = false;
		bVar67 = false;
		bVar68 = true;
		bVar69 = true;
		bVar70 = false;
		switch (iParam0)
		{
			case 0:
				iVar4 = iLocal_169;
				iVar6 = Local_90[3 /*4*/];
				iVar5 = joaat("WEAPON_PISTOL");
				bVar36 = true;
				bVar33 = false;
				bVar34 = true;
				bVar70 = true;
				break;
			case 1:
				iVar4 = iLocal_169;
				iVar6 = Local_90[4 /*4*/];
				iVar5 = joaat("WEAPON_PISTOL");
				bVar36 = true;
				bVar33 = false;
				bVar34 = true;
				bVar70 = true;
				break;
			case 2:
				iVar4 = iLocal_170;
				iVar6 = Local_90[5 /*4*/];
				iVar5 = joaat("WEAPON_PISTOL");
				bVar36 = true;
				bVar33 = false;
				break;
			case 3:
				iVar4 = iLocal_169;
				iVar6 = Local_90[5 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("WEAPON_PISTOL");
				bVar36 = true;
				bVar33 = false;
				break;
			case 4:
				iVar4 = iLocal_169;
				iVar6 = Local_90[6 /*4*/];
				iVar5 = joaat("WEAPON_PISTOL");
				bVar36 = true;
				bVar33 = false;
				break;
			case 5:
				iVar4 = iLocal_170;
				iVar6 = Local_90[6 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("WEAPON_PISTOL");
				bVar36 = true;
				bVar33 = false;
				break;
			case 6:
				iVar4 = iLocal_170;
				iVar6 = Local_90[7 /*4*/];
				iVar5 = joaat("WEAPON_PISTOL");
				bVar36 = true;
				bVar33 = false;
				break;
			case 7:
				iVar4 = iLocal_170;
				iVar6 = Local_90[7 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("WEAPON_PISTOL");
				bVar36 = true;
				bVar33 = false;
				break;
			default:
				break;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar4))
		{
			return 0;
		}
		if (!func_85(vParam2, vLocal_123, 0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
			{
				vVar0 = { vParam2 };
			}
			else
			{
				vVar9 = { vParam2 };
			}
		}
		if (fParam5 != -1f)
		{
			fVar3 = fParam5;
		}
		if (func_225(iVar6))
		{
			Local_49[iParam0 /*5*/] = PED::CREATE_PED_INSIDE_VEHICLE(iVar6, 26, iVar4, iVar7, true, true);
		}
		else
		{
			Local_49[iParam0 /*5*/] = PED::CREATE_PED(26, iVar4, vVar0, fVar3, true, true);
			ENTITY::SET_ENTITY_COLLISION(Local_49[iParam0 /*5*/], bVar41, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_49[iParam0 /*5*/], !bVar65, false);
		}
		if (bVar40)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_49[iParam0 /*5*/], vVar0, false, false, true);
		}
		if (bParam1)
		{
			if (iVar27 == iLocal_171)
			{
				Local_49[iParam0 /*5*/].f_1 = func_71(Local_49[iParam0 /*5*/], 1, 145);
			}
			else
			{
				Local_49[iParam0 /*5*/].f_1 = func_71(Local_49[iParam0 /*5*/], 0, 145);
			}
		}
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_49[iParam0 /*5*/], bVar59);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 213, bVar28);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 212, bVar29);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_49[iParam0 /*5*/], bVar30);
		PED::SET_PED_KEEP_TASK(Local_49[iParam0 /*5*/], bVar31);
		PED::SET_PED_DIES_WHEN_INJURED(Local_49[iParam0 /*5*/], bVar32);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 188, bVar55);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 42, !bVar33);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 9, bVar35);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 3, bVar37);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 342, bVar57);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_49[iParam0 /*5*/], bVar36, 1);
		PED::SET_PED_ARMOUR(Local_49[iParam0 /*5*/], iVar18);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 8, bVar39);
		ENTITY::SET_ENTITY_VISIBLE(Local_49[iParam0 /*5*/], bVar38, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_49[iParam0 /*5*/], bVar42);
		WEAPON::GIVE_WEAPON_TO_PED(Local_49[iParam0 /*5*/], iVar5, -1, bVar34, bVar34);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 2, bVar43);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 1, bVar44);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 52, bVar45);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 13, bVar68);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_49[iParam0 /*5*/], bVar46);
		PED::SET_PED_CAN_BE_TARGETTED(Local_49[iParam0 /*5*/], bVar47);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 118, bVar48);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 115, bVar49);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 12, bVar50);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 36, bVar51);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 35, bVar52);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 29, bVar53);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 185, bVar54);
		PED::SET_PED_TO_LOAD_COVER(Local_49[iParam0 /*5*/], bVar56);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 17, bVar62);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_49[iParam0 /*5*/], bVar63);
		AUDIO::STOP_PED_SPEAKING(Local_49[iParam0 /*5*/], bVar58);
		func_84(Local_49[iParam0 /*5*/], fVar22, fVar23, fVar24, fVar25, fVar26);
		ENTITY::FREEZE_ENTITY_POSITION(Local_49[iParam0 /*5*/], bVar66);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 203, bVar67);
		PED::_0xA9B61A329BFDCBEA(Local_49[iParam0 /*5*/], !bVar67);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 366, bVar69);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 134, bVar70);
		if (!bVar60)
		{
			func_63(iParam0, 2);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar71))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(Local_49[iParam0 /*5*/], sVar71, -1, false);
		}
		if (iVar17 > 0)
		{
			if (iVar17 > ENTITY::GET_ENTITY_MAX_HEALTH(Local_49[iParam0 /*5*/]) || bVar61)
			{
				ENTITY::SET_ENTITY_MAX_HEALTH(Local_49[iParam0 /*5*/], iVar17);
			}
			ENTITY::SET_ENTITY_HEALTH(Local_49[iParam0 /*5*/], iVar17, 0);
		}
		if (iVar19 > 0)
		{
			PED::SET_PED_ACCURACY(Local_49[iParam0 /*5*/], iVar19);
		}
		if (fVar20 > 0f || fVar21 > 0f)
		{
			WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_49[iParam0 /*5*/], fVar20, fVar21);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_49[iParam0 /*5*/], iVar27);
		if (ENTITY::DOES_ENTITY_EXIST(iVar8))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_49[iParam0 /*5*/], iVar8, -1, vVar9, vVar12, true, true, true, false, 2, true);
			PED::SET_PED_CAN_RAGDOLL(Local_49[iParam0 /*5*/], false);
			func_63(iParam0, 1);
		}
		func_83(iParam0);
		func_82(iParam0);
		if (iVar15 != 0)
		{
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_49[iParam0 /*5*/], iVar5, iVar15);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_49[iParam0 /*5*/], iVar5, true);
		}
		PED::SET_PED_COMBAT_ABILITY(Local_49[iParam0 /*5*/], iVar16);
		if (bVar64)
		{
			PED::SET_PED_STEALTH_MOVEMENT(Local_49[iParam0 /*5*/], true, "DEFAULT_ACTION");
		}
		return 1;
	}
	return 0;
}

void func_82(int iParam0)
{
	if (func_225(Local_49[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 2:
				break;
		}
	}
}

void func_83(int iParam0)
{
	if (func_225(Local_49[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 0:
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 4, 0, 0, 0);
				break;
			case 1:
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 2, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 4, 1, 1, 0);
				break;
			case 2:
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 4, 0, 0, 0);
				break;
			case 3:
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 2, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 4, 0, 2, 0);
				break;
			case 4:
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 2, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 4, 0, 2, 0);
				break;
			case 5:
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 0, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 4, 0, 1, 0);
				break;
			case 6:
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 0, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 3, 2, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 4, 0, 1, 0);
				break;
			case 7:
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 3, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 4, 0, 0, 0);
				break;
		}
	}
}

void func_84(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
	}
}

bool func_85(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_86()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((func_225(Local_49[0 /*5*/]) && func_79(PLAYER::PLAYER_PED_ID(), Local_49[0 /*5*/], 1) >= 200f) && (func_225(Local_49[1 /*5*/]) && func_79(PLAYER::PLAYER_PED_ID(), Local_49[1 /*5*/], 1) >= 200f))
	{
		return true;
	}
	if ((func_152(10) && !func_225(Local_49[0 /*5*/])) || (func_152(11) && !func_225(Local_49[1 /*5*/])))
	{
		return true;
	}
	if ((func_225(Local_49[0 /*5*/]) && (PED::IS_PED_IN_COMBAT(Local_49[0 /*5*/], PLAYER::PLAYER_PED_ID()) || !PED::IS_PED_IN_ANY_VEHICLE(Local_49[0 /*5*/], false))) || (func_225(Local_49[1 /*5*/]) && (PED::IS_PED_IN_COMBAT(Local_49[1 /*5*/], PLAYER::PLAYER_PED_ID()) || !PED::IS_PED_IN_ANY_VEHICLE(Local_49[1 /*5*/], false))))
	{
		return true;
	}
	if ((func_225(Local_90[1 /*4*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_90[1 /*4*/], PLAYER::PLAYER_PED_ID(), true)) || (func_225(Local_90[2 /*4*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_90[2 /*4*/], PLAYER::PLAYER_PED_ID(), true)))
	{
		return true;
	}
	if (func_87(Local_90[3 /*4*/]) || func_87(Local_90[4 /*4*/]))
	{
		return true;
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (func_225(iVar0))
	{
		fLocal_164 = ENTITY::GET_ENTITY_SPEED(iVar0);
	}
	else
	{
		fLocal_164 = 0f;
	}
	if (PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(PLAYER::PLAYER_PED_ID());
		iVar1 = iVar2;
		if ((iVar1 == Local_90[3 /*4*/] && func_225(Local_49[0 /*5*/])) || (iVar1 == Local_90[4 /*4*/] && func_225(Local_49[1 /*5*/])))
		{
			return true;
		}
	}
	return false;
}

int func_87(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (((func_225(iParam0) && func_225(iVar0)) && fLocal_164 != 0f) && fLocal_164 >= 9f)
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iVar0) && fVar1 <= (fLocal_164 * 0.5f))
		{
			return 1;
		}
	}
	return 0;
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_109(8);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_90[iParam0 /*4*/], 5f);
	Local_49[iParam1 /*5*/].f_1 = func_71(Local_49[iParam1 /*5*/], 1, 145);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_49[iParam1 /*5*/], true);
	func_92();
	TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_90[iParam0 /*4*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[iParam0 /*4*/], 0f, 20f, 0f), 30f, 0, 0, 262144, 4f, -1f);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
	TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
	func_91(Local_49[iParam1 /*5*/]);
	func_89(Local_49[iParam1 /*5*/], "GENERIC_INSULT_HIGH", 13);
	Local_49[iParam1 /*5*/].f_3 = 3;
	if (func_225(Local_90[iParam2 /*4*/]))
	{
		if (iParam0 == 3)
		{
			vLocal_138 = { 1031.986f, 2693.441f, 38.6861f };
		}
		else
		{
			vLocal_138 = { 1027.001f, 2686.89f, 37.8987f };
		}
		iLocal_161 = MISC::GET_GAME_TIMER() + 1000;
		if (func_225(Local_49[iParam3 /*5*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_49[iParam3 /*5*/], true);
			TASK::TASK_VEHICLE_MISSION(Local_49[iParam3 /*5*/], Local_90[iParam2 /*4*/], Local_90[0 /*4*/], 2, 30f, 262144, -1f, -1f, true);
		}
		Local_49[iParam3 /*5*/].f_3++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_171);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_171, joaat("PLAYER"));
}

void func_89(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_90(iParam2), true);
}

int func_90(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		case 2:
			return "SPEECH_PARAMS_BEAT";
		case 3:
			return "SPEECH_PARAMS_FORCE";
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		case 14:
			return "SPEECH_PARAMS_HELI";
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		default:
			break;
	}
	iVar0 = 0;
	return iVar0;
}

void func_91(int iParam0)
{
	if (func_152(0))
	{
		TASK::CLOSE_SEQUENCE_TASK(iLocal_172);
		func_69(0);
	}
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_172);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_172);
}

void func_92()
{
	if (!func_152(0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_172);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_172);
		func_109(0);
	}
}

int func_93(vector3 vParam0, float fParam3)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;

	fVar0 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	fVar1 = func_80(PLAYER::PLAYER_PED_ID(), vParam0, 1);
	vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	vVar5 = { vVar2 + ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID()) };
	if ((fVar1 / fVar0) <= fParam3 && MISC::GET_DISTANCE_BETWEEN_COORDS(vVar5, vParam0, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(vVar2, vParam0, true))
	{
		return 1;
	}
	return 0;
}

bool func_94()
{
	return (func_225(Local_90[0 /*4*/]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_90[0 /*4*/], false));
}

int func_95(bool bParam0)
{
	if (func_99())
	{
		Global_111628 = 1;
		Global_111625 = MISC::GET_GAME_TIMER();
		if (func_15(Global_111627))
		{
			func_96(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (bParam0 && func_15(Global_111627))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_97(func_98(iParam0), -1);
					Global_111638.f_24990.f_2++;
					MISC::SET_BIT(&Global_111634, 0);
				}
			}
			break;
		case 1:
			if (!MISC::IS_BIT_SET(Global_111634, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_97(func_98(iParam0), -1);
					Global_111638.f_24990.f_3++;
					MISC::SET_BIT(&Global_111634, 1);
				}
			}
			break;
		case 2:
			if (!MISC::IS_BIT_SET(Global_111634, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_97(func_98(iParam0), -1);
					Global_111638.f_24990.f_4++;
					MISC::SET_BIT(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_97(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

char* func_98(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

bool func_99()
{
	switch (func_100(&Global_30827, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
		case 0:
			return true;
	}
	return false;
}

int func_100(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_104(0))
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *uParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_102(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		Global_41398[Global_41392 /*4*/] = Global_41395;
		Global_41398[Global_41392 /*4*/].f_1 = iParam1;
		Global_41398[Global_41392 /*4*/].f_2 = iParam2;
		Global_41398[Global_41392 /*4*/].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_101(uParam0, iParam4);
		}
	}
	return 2;
}

void func_101(var uParam0, int iParam1)
{
	int iVar0;

	if (Global_41392 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0 /*4*/] == *uParam0)
		{
			Global_41398[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_102(int iParam0)
{
	return func_103(iParam0, Global_41431);
}

int func_103(int iParam0, int iParam1)
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

bool func_104(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_102(iParam0))
	{
		return false;
	}
	return true;
}

int func_105(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	vector3 vVar27;
	vector3 vVar30;
	char* sVar33;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_90[iParam0 /*4*/]))
	{
		iVar5 = 0;
		bVar6 = true;
		bVar7 = true;
		bVar8 = false;
		bVar9 = false;
		bVar10 = false;
		bVar11 = false;
		bVar12 = true;
		bVar13 = false;
		bVar14 = false;
		bVar15 = false;
		bVar16 = false;
		bVar17 = false;
		bVar18 = true;
		bVar19 = false;
		bVar20 = true;
		bVar21 = false;
		bVar22 = false;
		fVar24 = -1f;
		fVar25 = -1f;
		switch (iParam0)
		{
			case 0:
				vVar0 = { vLocal_129 };
				fVar3 = 89.7263f;
				iVar4 = iLocal_165;
				bVar12 = false;
				bVar17 = true;
				bVar18 = false;
				bVar21 = true;
				bVar8 = true;
				bVar20 = false;
				iVar5 = 7;
				break;
			case 3:
				vVar0 = { vLocal_132 };
				fVar3 = 175.3714f;
				iVar4 = iLocal_166;
				bVar10 = true;
				bVar17 = true;
				bVar18 = false;
				sVar33 = "96NWO218";
				iVar5 = 2;
				break;
			case 4:
				vVar0 = { vLocal_135 };
				fVar3 = 171f;
				iVar4 = iLocal_166;
				bVar10 = true;
				bVar17 = true;
				bVar18 = false;
				sVar33 = "01DTS039";
				iVar5 = 2;
				break;
			case 1:
				vVar0 = { 930.46f, 2719.65f, 42.41f };
				fVar3 = 180.53f;
				iVar4 = iLocal_167;
				break;
			case 2:
				vVar0 = { 1141.17f, 2711.97f, 40.04f };
				fVar3 = 176.67f;
				iVar4 = iLocal_167;
				break;
			case 5:
				vVar0 = { 514.5844f, -649.9937f, 23.7512f };
				fVar3 = 182.0097f;
				iVar4 = iLocal_168;
				bVar9 = true;
				bVar10 = true;
				bVar20 = false;
				sVar33 = "18NJM316";
				break;
			case 6:
				vVar0 = { 507.3959f, -653.6174f, 23.7512f };
				fVar3 = 177.8055f;
				iVar4 = iLocal_168;
				bVar9 = true;
				bVar10 = true;
				bVar20 = false;
				sVar33 = "28HDT291";
				break;
			case 7:
				vVar0 = { 1200.547f, -1553.607f, 38.4019f };
				fVar3 = 0.0001f;
				iVar4 = iLocal_168;
				bVar9 = true;
				bVar10 = true;
				bVar20 = false;
				sVar33 = "23DJT162";
				break;
			default:
				break;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar4))
		{
			return 0;
		}
		if (!func_85(vParam1, vLocal_123, 0))
		{
			vVar0 = { vParam1 };
		}
		if (fParam4 != -1f)
		{
			fVar3 = fParam4;
		}
		Local_90[iParam0 /*4*/] = VEHICLE::CREATE_VEHICLE(iVar4, vVar0, fVar3, true, true, false);
		func_108(iParam0);
		func_107(iParam0);
		ENTITY::SET_ENTITY_VISIBLE(Local_90[iParam0 /*4*/], bVar7, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar26))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_90[iParam0 /*4*/], iVar26, -1, vVar27, vVar30, false, false, false, false, 2, true);
		}
		else
		{
			ENTITY::SET_ENTITY_COLLISION(Local_90[iParam0 /*4*/], bVar6, false);
		}
		VEHICLE::SET_VEHICLE_STRONG(Local_90[iParam0 /*4*/], bVar8);
		ENTITY::FREEZE_ENTITY_POSITION(Local_90[iParam0 /*4*/], bVar9);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_90[iParam0 /*4*/], bVar10, true, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_90[iParam0 /*4*/], bVar13);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_90[iParam0 /*4*/], bVar14, 1);
		VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Local_90[iParam0 /*4*/], bVar15);
		VEHICLE::_0x4D9D109F63FEE1D4(Local_90[iParam0 /*4*/], bVar16);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_90[iParam0 /*4*/], bVar18, 0);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_90[iParam0 /*4*/], bVar17);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_90[iParam0 /*4*/], bVar19);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_90[iParam0 /*4*/], bVar20);
		VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Local_90[iParam0 /*4*/], bVar21);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_90[iParam0 /*4*/], !bVar22, false);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar33))
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_90[iParam0 /*4*/], sVar33);
		}
		if (fVar23 > 0f)
		{
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_90[iParam0 /*4*/], fVar23);
		}
		if (bVar11)
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_90[iParam0 /*4*/]);
		}
		if (fVar24 >= 0f)
		{
			VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(Local_90[iParam0 /*4*/], fVar24);
		}
		if (fVar25 >= 0f)
		{
			VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_90[iParam0 /*4*/], fVar25);
		}
		if (iVar5 != 0)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_90[iParam0 /*4*/], iVar5);
		}
		if (bParam5)
		{
			Local_90[iParam0 /*4*/].f_1 = func_106(Local_90[iParam0 /*4*/], bVar12, 0);
		}
	}
	return 1;
}

int func_106(int iParam0, bool bParam1, bool bParam2)
{
	return func_72(iParam0, !bParam1, bParam2);
}

void func_107(int iParam0)
{
	if (func_225(Local_90[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
			case 6:
			case 7:
			case 3:
			case 4:
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_90[iParam0 /*4*/], 15f);
				break;
		}
	}
}

void func_108(int iParam0)
{
	if (func_225(Local_90[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
				VEHICLE::SET_VEHICLE_COLOURS(Local_90[iParam0 /*4*/], 48, 48);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_90[iParam0 /*4*/], 8, 156);
				break;
			case 6:
				VEHICLE::SET_VEHICLE_COLOURS(Local_90[iParam0 /*4*/], 58, 58);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_90[iParam0 /*4*/], 8, 156);
				break;
			case 7:
				VEHICLE::SET_VEHICLE_COLOURS(Local_90[iParam0 /*4*/], 94, 94);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_90[iParam0 /*4*/], 8, 156);
				break;
			case 3:
			case 4:
				VEHICLE::SET_VEHICLE_COLOURS(Local_90[iParam0 /*4*/], 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_90[iParam0 /*4*/], 61, 156);
				break;
		}
	}
}

void func_109(int iParam0)
{
	MISC::SET_BIT(&iLocal_156, iParam0);
}

void func_110()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	func_120(1);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_171);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("PLAYER"), iLocal_171);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_171, iLocal_171);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_171, joaat("PLAYER"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
	func_111(1);
}

void func_111(bool bParam0)
{
	func_112(39, bParam0);
	func_112(40, bParam0);
	func_112(41, bParam0);
	func_112(42, bParam0);
	func_112(43, bParam0);
	func_112(44, bParam0);
}

void func_112(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_119(iParam0, 2, 1))
		{
			func_118(iParam0, 2, 1);
		}
	}
	else if (func_119(iParam0, 2, 1))
	{
		func_113(iParam0, 2, 1);
	}
}

void func_113(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			iVar0 = func_116(func_117(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_114(func_117(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_114(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_115(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
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

int func_116(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_115(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_117(int iParam0)
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

void func_118(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			iVar0 = func_116(func_117(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_114(func_117(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

bool func_119(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_98796.f_1357[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			return MISC::IS_BIT_SET(func_116(func_117(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_111638.f_668[iParam0], iParam1);
	}
	return false;
}

void func_120(bool bParam0)
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_168, bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_166, bParam0);
}

void func_121()
{
	if (!func_151())
	{
		if (func_138())
		{
			func_198(1, 0);
		}
	}
	RECORDING::_0x208784099002BC30("RE_DUEL", 0);
	func_136();
	func_131();
	func_127();
	func_122();
	if ((func_152(5) && func_225(Local_90[iLocal_173 /*4*/])) && MISC::GET_GAME_TIMER() < iLocal_157)
	{
		AUDIO::_SOUND_VEHICLE_HORN_THIS_FRAME(Local_90[iLocal_173 /*4*/]);
	}
	if (func_152(6))
	{
		if (iLocal_158 == 0)
		{
			if (func_80(PLAYER::PLAYER_PED_ID(), vLocal_129, 1) >= 150f)
			{
				iLocal_158 = MISC::GET_GAME_TIMER() + 30000;
			}
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_158)
		{
			func_69(6);
		}
	}
	if (func_152(7))
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_159)
		{
			func_69(7);
		}
	}
	if ((func_152(9) && func_225(Local_90[0 /*4*/])) && func_79(PLAYER::PLAYER_PED_ID(), Local_90[0 /*4*/], 1) <= 35f)
	{
		if (!func_152(10))
		{
			if (!CAM::IS_SPHERE_VISIBLE(vLocal_132, 7f))
			{
				if (((MISC::GET_GAME_TIMER() - iLocal_162) >= 1000 && !func_76(vLocal_132, 7f)) && func_80(PLAYER::PLAYER_PED_ID(), vLocal_132, 1) >= 50f)
				{
					MISC::CLEAR_AREA(vLocal_132, 7f, true, false, false, false);
					func_105(3, vLocal_123, -1082130432 /* Float: -1f */, 0);
					func_105(1, vLocal_123, -1082130432 /* Float: -1f */, 0);
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_90[3 /*4*/], Local_90[1 /*4*/], 1f);
					func_81(0, 0, vLocal_123, -1082130432 /* Float: -1f */);
					func_109(10);
					if (iLocal_155 > 2)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_49[0 /*5*/], false);
						TASK::TASK_COMBAT_PED(Local_49[0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_49[0 /*5*/].f_3 = 3;
					}
				}
			}
			else
			{
				iLocal_162 = MISC::GET_GAME_TIMER();
			}
		}
		if (!func_152(11))
		{
			if (!CAM::IS_SPHERE_VISIBLE(vLocal_135, 7f))
			{
				if (((MISC::GET_GAME_TIMER() - iLocal_163) >= 1000 && !func_76(vLocal_135, 7f)) && func_80(PLAYER::PLAYER_PED_ID(), vLocal_135, 1) >= 50f)
				{
					MISC::CLEAR_AREA(vLocal_135, 7f, true, false, false, false);
					func_105(4, vLocal_123, -1082130432 /* Float: -1f */, 0);
					func_105(2, vLocal_123, -1082130432 /* Float: -1f */, 0);
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_90[4 /*4*/], Local_90[2 /*4*/], 1f);
					func_81(1, 0, vLocal_123, -1082130432 /* Float: -1f */);
					func_109(11);
					if (iLocal_155 > 2)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_49[1 /*5*/], false);
						TASK::TASK_COMBAT_PED(Local_49[1 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_49[1 /*5*/].f_3 = 3;
					}
				}
			}
			else
			{
				iLocal_163 = MISC::GET_GAME_TIMER();
			}
		}
		if (func_152(10) && func_152(11))
		{
			func_69(9);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_167);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_169);
		}
	}
	if (func_152(8))
	{
		if (iLocal_160 == 0)
		{
			iLocal_160 = MISC::GET_GAME_TIMER() + 3500;
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_160)
		{
			func_69(8);
			func_109(6);
		}
	}
}

void func_122()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_49[iVar0 /*5*/]) && HUD::DOES_BLIP_EXIST(Local_49[iVar0 /*5*/].f_1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_49[iVar0 /*5*/], false))
			{
				if (!func_126(iVar0, 0))
				{
					HUD::SET_BLIP_SCALE(Local_49[iVar0 /*5*/].f_1, 1f);
					func_63(iVar0, 0);
				}
				if (func_70(Local_49[iVar0 /*5*/], 0) != -1)
				{
					if (func_125(iVar0))
					{
						if (HUD::GET_BLIP_ALPHA(Local_49[iVar0 /*5*/].f_1) > 0)
						{
							HUD::SET_BLIP_ALPHA(Local_49[iVar0 /*5*/].f_1, 0);
							HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_49[iVar0 /*5*/].f_1, true);
						}
					}
					else if (HUD::GET_BLIP_ALPHA(Local_49[iVar0 /*5*/].f_1) == 0)
					{
						HUD::SET_BLIP_ALPHA(Local_49[iVar0 /*5*/].f_1, 255);
						HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_49[iVar0 /*5*/].f_1, false);
					}
				}
			}
			else if (func_126(iVar0, 0))
			{
				HUD::SET_BLIP_SCALE(Local_49[iVar0 /*5*/].f_1, 0.7f);
				func_124(iVar0, 0);
				if (HUD::GET_BLIP_ALPHA(Local_49[iVar0 /*5*/].f_1) == 0)
				{
					HUD::SET_BLIP_ALPHA(Local_49[iVar0 /*5*/].f_1, 255);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_49[iVar0 /*5*/].f_1, false);
				}
			}
			if (PED::IS_PED_INJURED(Local_49[iVar0 /*5*/]))
			{
				func_123(&(Local_49[iVar0 /*5*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_90[iVar0 /*4*/]) && HUD::DOES_BLIP_EXIST(Local_90[iVar0 /*4*/].f_1))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_90[iVar0 /*4*/], false))
			{
				func_123(&(Local_90[iVar0 /*4*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_123(int* iParam0)
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_124(int iParam0, int iParam1)
{
	MISC::CLEAR_BIT(&(Local_49[iParam0 /*5*/].f_2), iParam1);
}

bool func_125(int iParam0)
{
	if (iParam0 == 3)
	{
		if (!func_225(Local_49[2 /*5*/]))
		{
			return false;
		}
	}
	if (iParam0 == 5)
	{
		if (!func_225(Local_49[4 /*5*/]))
		{
			return false;
		}
	}
	if (iParam0 == 7)
	{
		if (!func_225(Local_49[6 /*5*/]))
		{
			return false;
		}
	}
	return true;
}

bool func_126(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_49[iParam0 /*5*/].f_2, iParam1);
}

void func_127()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_90[iVar0 /*4*/]))
		{
			func_128(iVar0);
		}
		iVar0++;
	}
}

void func_128(int iParam0)
{
	if (func_225(Local_90[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
				if ((!func_225(Local_49[2 /*5*/]) && !func_225(Local_49[3 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_90[iParam0 /*4*/], false))
				{
					func_129(iParam0, 0);
				}
				break;
			case 6:
				if ((!func_225(Local_49[4 /*5*/]) && !func_225(Local_49[5 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_90[iParam0 /*4*/], false))
				{
					func_129(iParam0, 0);
				}
				break;
			case 7:
				if ((!func_225(Local_49[6 /*5*/]) && !func_225(Local_49[7 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_90[iParam0 /*4*/], false))
				{
					func_129(iParam0, 0);
				}
				break;
			case 3:
				if (!func_225(Local_49[0 /*5*/]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_90[iParam0 /*4*/], false))
				{
					if (func_79(PLAYER::PLAYER_PED_ID(), Local_90[iParam0 /*4*/], 1) >= 50f)
					{
						func_129(iParam0, 0);
					}
				}
				if (func_152(6))
				{
					func_62(iParam0, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_153);
				}
				break;
			case 4:
				if (!func_225(Local_49[1 /*5*/]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_90[iParam0 /*4*/], false))
				{
					if (func_79(PLAYER::PLAYER_PED_ID(), Local_90[iParam0 /*4*/], 1) >= 50f)
					{
						func_129(iParam0, 0);
					}
				}
				if (func_152(6))
				{
					func_62(iParam0, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_154);
				}
				break;
			case 1:
				if (!func_225(Local_90[3 /*4*/]) || func_79(Local_90[3 /*4*/], Local_90[iParam0 /*4*/], 1) >= 150f)
				{
					func_129(iParam0, 0);
				}
				break;
			case 2:
				if (!func_225(Local_90[4 /*4*/]) || func_79(Local_90[4 /*4*/], Local_90[iParam0 /*4*/], 1) >= 150f)
				{
					func_129(iParam0, 0);
				}
				break;
			case 0:
				switch (Local_90[iParam0 /*4*/].f_3)
				{
					case 0:
						if (func_94())
						{
							func_109(1);
							func_123(&(Local_90[iParam0 /*4*/].f_1));
							Local_90[iParam0 /*4*/].f_3++;
						}
						break;
				}
				break;
		}
	}
	else if (ENTITY::IS_ENTITY_VISIBLE(Local_90[iParam0 /*4*/]))
	{
		func_129(iParam0, 0);
	}
	else
	{
		func_129(iParam0, 1);
	}
}

void func_129(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_90[iParam0 /*4*/]))
	{
		func_123(&(Local_90[iParam0 /*4*/].f_1));
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_90[iParam0 /*4*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_90[iParam0 /*4*/]);
		}
		if (func_130(&(Local_90[iParam0 /*4*/])))
		{
			if (bParam1)
			{
				VEHICLE::DELETE_VEHICLE(&(Local_90[iParam0 /*4*/]));
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_90[iParam0 /*4*/]));
			}
		}
		Local_90[iParam0 /*4*/] = 0;
		Local_90[iParam0 /*4*/].f_2 = 0;
		Local_90[iParam0 /*4*/].f_3 = 0;
	}
}

bool func_130(var uParam0)
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, false))
	{
		return false;
	}
	return true;
}

void func_131()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_49[iVar0 /*5*/]))
		{
			func_132(iVar0);
		}
		iVar0++;
	}
}

void func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;

	if (func_225(Local_49[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 0:
			case 1:
				if (iParam0 == 0)
				{
					iVar0 = 3;
					iVar1 = 4;
				}
				else
				{
					iVar0 = 4;
					iVar1 = 3;
				}
				switch (Local_49[iParam0 /*5*/].f_3)
				{
					case 0:
						Local_49[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER();
						if (func_79(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <= 15f)
						{
							PED::SET_IK_TARGET(Local_49[iParam0 /*5*/], 1, PLAYER::PLAYER_PED_ID(), 31086, vLocal_123, 0, -1, -1);
						}
						break;
					case 1:
						if (func_225(Local_90[iVar0 /*4*/]))
						{
							VEHICLE::_0x88BC673CA9E0AE99(Local_90[iVar0 /*4*/], true);
							if (func_225(Local_90[0 /*4*/]) && !ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_90[iVar0 /*4*/], Local_90[0 /*4*/]))
							{
								if ((((((MISC::GET_GAME_TIMER() >= iLocal_161 && !func_152(12)) && !ENTITY::IS_ENTITY_AT_COORD(Local_90[iVar0 /*4*/], vLocal_138, 7f, 7f, 7f, false, true, 0)) && func_80(PLAYER::PLAYER_PED_ID(), vLocal_138, 1) < func_79(Local_90[iVar0 /*4*/], PLAYER::PLAYER_PED_ID(), 1)) && !CAM::IS_SPHERE_VISIBLE(vLocal_138, 7f)) && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_90[iVar0 /*4*/], true), 7f)) && !func_76(vLocal_138, 8f))
								{
									fVar5 = func_75(vLocal_138, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
									MISC::CLEAR_AREA_OF_VEHICLES(vLocal_138, 8f, false, false, false, false, false, false);
									MISC::CLEAR_AREA_OF_VEHICLES(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_138, fVar5, 0f, -8f, 0f), 8f, false, false, false, false, false, false);
									ENTITY::SET_ENTITY_COORDS(Local_90[iVar0 /*4*/], vLocal_138, true, false, false, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_90[iVar0 /*4*/], 5f);
									ENTITY::SET_ENTITY_HEADING(Local_90[iVar0 /*4*/], fVar5);
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_90[iVar0 /*4*/], true, true, false);
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_90[iVar0 /*4*/], 30f);
									func_109(5);
									iLocal_173 = iVar0;
									iLocal_157 = MISC::GET_GAME_TIMER() + 5000;
								}
								if (!func_152(12) && ENTITY::IS_ENTITY_AT_COORD(Local_90[iVar0 /*4*/], vLocal_138, 7f, 7f, 7f, false, true, 0))
								{
									func_109(12);
								}
								if (((MISC::GET_GAME_TIMER() >= iLocal_161 && ENTITY::IS_ENTITY_OCCLUDED(Local_90[iVar0 /*4*/])) && func_225(Local_90[iVar1 /*4*/])) && func_79(Local_90[iVar0 /*4*/], Local_90[iVar1 /*4*/], 1) >= 20f)
								{
									vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_90[iVar0 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
									if (vVar2.x < -3.5f || vVar2.x > 3.5f)
									{
										fVar6 = ENTITY::GET_ENTITY_SPEED(Local_90[iVar0 /*4*/]);
										fVar6 = func_135(fVar6, 20f, 50f);
										ENTITY::SET_ENTITY_HEADING(Local_90[iVar0 /*4*/], func_75(ENTITY::GET_ENTITY_COORDS(Local_90[iVar0 /*4*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_90[iVar0 /*4*/], fVar6);
									}
								}
								if ((func_126(iParam0, 3) || func_79(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <= 15f) || (func_225(Local_90[iVar1 /*4*/]) && func_79(Local_90[iVar0 /*4*/], Local_90[iVar1 /*4*/], 1) <= 15f))
								{
									if (func_79(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <= 15f)
									{
										if (!HUD::DOES_BLIP_EXIST(Local_49[iParam0 /*5*/].f_1))
										{
											Local_49[iParam0 /*5*/].f_1 = func_71(Local_49[iParam0 /*5*/], 1, 145);
											func_89(Local_49[iParam0 /*5*/], "GENERIC_INSULT_HIGH", 13);
										}
									}
									Local_49[iParam0 /*5*/].f_3++;
								}
							}
							else
							{
								if (!HUD::DOES_BLIP_EXIST(Local_49[iParam0 /*5*/].f_1))
								{
									Local_49[iParam0 /*5*/].f_1 = func_71(Local_49[iParam0 /*5*/], 1, 145);
									func_89(Local_49[iParam0 /*5*/], "GENERIC_INSULT_HIGH", 13);
								}
								Local_49[iParam0 /*5*/].f_3++;
							}
						}
						break;
					case 2:
						if (func_225(Local_90[iVar0 /*4*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_49[iParam0 /*5*/], false);
							TASK::TASK_COMBAT_PED(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_49[iParam0 /*5*/].f_3++;
						}
						break;
					case 3:
						if (!HUD::DOES_BLIP_EXIST(Local_49[iParam0 /*5*/].f_1))
						{
							if (func_79(PLAYER::PLAYER_PED_ID(), Local_49[iParam0 /*5*/], 1) <= 85f)
							{
								Local_49[iParam0 /*5*/].f_1 = func_71(Local_49[iParam0 /*5*/], 1, 145);
							}
						}
						if (func_152(6) || func_152(8))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_49[iParam0 /*5*/], false) && func_79(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
							{
								func_134(iParam0, 0);
							}
						}
						else if (func_79(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
						{
							func_134(iParam0, 0);
						}
						break;
				}
				break;
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				if (func_152(7))
				{
					if (!PED::IS_PED_IN_COMBAT(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID()) && !func_133(Local_49[iParam0 /*5*/], 579380604, 1))
					{
						TASK::TASK_COMBAT_PED(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
				if (func_152(7))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_49[iParam0 /*5*/], false) && func_79(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
					{
						func_134(iParam0, 0);
					}
				}
				else if (func_152(2) && func_79(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
				{
					func_134(iParam0, 0);
				}
				break;
		}
	}
	else
	{
		if (func_126(iParam0, 1))
		{
			PED::SET_PED_CAN_RAGDOLL(Local_49[iParam0 /*5*/], true);
			ENTITY::DETACH_ENTITY(Local_49[iParam0 /*5*/], true, false);
			func_124(iParam0, 1);
		}
		if (!func_126(iParam0, 2))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_49[iParam0 /*5*/]))
			{
				func_134(iParam0, 0);
			}
			else
			{
				func_134(iParam0, 1);
			}
		}
	}
}

bool func_133(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return true;
		}
	}
	return false;
}

void func_134(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_49[iParam0 /*5*/]))
	{
		func_123(&(Local_49[iParam0 /*5*/].f_1));
		if ((((func_225(Local_49[iParam0 /*5*/]) && ENTITY::IS_ENTITY_ATTACHED(Local_49[iParam0 /*5*/])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_49[iParam0 /*5*/], true)) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_49[iParam0 /*5*/])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_49[iParam0 /*5*/]))
		{
			ENTITY::DETACH_ENTITY(Local_49[iParam0 /*5*/], true, true);
		}
		if (bParam1)
		{
			PED::DELETE_PED(&(Local_49[iParam0 /*5*/]));
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_49[iParam0 /*5*/]));
		}
		Local_49[iParam0 /*5*/].f_2 = 0;
	}
}

float func_135(float fParam0, float fParam1, float fParam2)
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

void func_136()
{
	if ((func_152(1) || iLocal_155 > 2) && func_137())
	{
		if (func_225(Local_90[0 /*4*/]) && func_79(PLAYER::PLAYER_PED_ID(), Local_90[0 /*4*/], 1) >= 250f)
		{
			func_61();
		}
	}
	if (func_137())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_90[0 /*4*/]) && !func_225(Local_90[0 /*4*/]))
		{
			func_61();
		}
	}
}

bool func_137()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_225(Local_49[iVar1 /*5*/]) && HUD::DOES_BLIP_EXIST(Local_49[iVar1 /*5*/].f_1))
		{
			iVar0 = 0;
			iVar1 = 8;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_138()
{
	if (!func_102(5))
	{
		return true;
	}
	if (func_147())
	{
		return true;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_146())
		{
			return false;
		}
	}
	if (func_139(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_139(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;

	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_23(func_145()))
		{
			iVar36 = func_20();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_111638.f_18569[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_111638.f_18569[iVar32 /*6*/], 3))
				{
					func_140(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_140(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_141(uParam1, "Abigail1", func_143(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_142(iParam0), 1, 0);
			break;
		case 1:
			func_141(uParam1, "Abigail2", func_143(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_142(iParam0), 1, 0);
			break;
		case 2:
			func_141(uParam1, "Barry1", func_143(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_142(iParam0), 1, 0);
			break;
		case 3:
			func_141(uParam1, "Barry2", func_143(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_142(iParam0), 1, 1);
			break;
		case 4:
			func_141(uParam1, "Barry3", func_143(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		case 5:
			func_141(uParam1, "Barry3A", func_143(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 6:
			func_141(uParam1, "Barry3C", func_143(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 7:
			func_141(uParam1, "Barry4", func_143(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_142(iParam0), 0, 0);
			break;
		case 8:
			func_141(uParam1, "Dreyfuss1", func_143(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		case 9:
			func_141(uParam1, "Epsilon1", func_143(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_142(iParam0), 0, 0);
			break;
		case 10:
			func_141(uParam1, "Epsilon2", func_143(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_142(iParam0), 1, 0);
			break;
		case 11:
			func_141(uParam1, "Epsilon3", func_143(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_142(iParam0), 0, 0);
			break;
		case 12:
			func_141(uParam1, "Epsilon4", func_143(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_142(iParam0), 0, 0);
			break;
		case 13:
			func_141(uParam1, "Epsilon5", func_143(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_142(iParam0), 1, 0);
			break;
		case 14:
			func_141(uParam1, "Epsilon6", func_143(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 15:
			func_141(uParam1, "Epsilon7", func_143(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_142(iParam0), 0, 0);
			break;
		case 16:
			func_141(uParam1, "Epsilon8", func_143(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_142(iParam0), 1, 0);
			break;
		case 17:
			func_141(uParam1, "Extreme1", func_143(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 18:
			func_141(uParam1, "Extreme2", func_143(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 19:
			func_141(uParam1, "Extreme3", func_143(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 20:
			func_141(uParam1, "Extreme4", func_143(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		case 21:
			func_141(uParam1, "Fanatic1", func_143(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_142(iParam0), 1, 0);
			break;
		case 22:
			func_141(uParam1, "Fanatic2", func_143(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_142(iParam0), 1, 0);
			break;
		case 23:
			func_141(uParam1, "Fanatic3", func_143(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_142(iParam0), 0, 1);
			break;
		case 24:
			func_141(uParam1, "Hao1", func_143(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_142(iParam0), 0, 1);
			break;
		case 25:
			func_141(uParam1, "Hunting1", func_143(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 26:
			func_141(uParam1, "Hunting2", func_143(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 27:
			func_141(uParam1, "Josh1", func_143(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_142(iParam0), 1, 0);
			break;
		case 28:
			func_141(uParam1, "Josh2", func_143(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_142(iParam0), 1, 1);
			break;
		case 29:
			func_141(uParam1, "Josh3", func_143(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_142(iParam0), 1, 1);
			break;
		case 30:
			func_141(uParam1, "Josh4", func_143(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_142(iParam0), 1, 0);
			break;
		case 31:
			func_141(uParam1, "Maude1", func_143(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 32:
			func_141(uParam1, "Minute1", func_143(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 33:
			func_141(uParam1, "Minute2", func_143(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 34:
			func_141(uParam1, "Minute3", func_143(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 35:
			func_141(uParam1, "MrsPhilips1", func_143(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_142(iParam0), 0, 0);
			break;
		case 36:
			func_141(uParam1, "MrsPhilips2", func_143(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_142(iParam0), 0, 0);
			break;
		case 37:
			func_141(uParam1, "Nigel1", func_143(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_142(iParam0), 1, 0);
			break;
		case 38:
			func_141(uParam1, "Nigel1A", func_143(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_142(iParam0), 1, 1);
			break;
		case 39:
			func_141(uParam1, "Nigel1B", func_143(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_142(iParam0), 1, 1);
			break;
		case 40:
			func_141(uParam1, "Nigel1C", func_143(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_142(iParam0), 1, 1);
			break;
		case 41:
			func_141(uParam1, "Nigel1D", func_143(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_142(iParam0), 1, 1);
			break;
		case 42:
			func_141(uParam1, "Nigel2", func_143(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_142(iParam0), 1, 1);
			break;
		case 43:
			func_141(uParam1, "Nigel3", func_143(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_142(iParam0), 1, 1);
			break;
		case 44:
			func_141(uParam1, "Omega1", func_143(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		case 45:
			func_141(uParam1, "Omega2", func_143(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		case 46:
			func_141(uParam1, "Paparazzo1", func_143(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 47:
			func_141(uParam1, "Paparazzo2", func_143(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 48:
			func_141(uParam1, "Paparazzo3", func_143(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		case 49:
			func_141(uParam1, "Paparazzo3A", func_143(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 50:
			func_141(uParam1, "Paparazzo3B", func_143(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 51:
			func_141(uParam1, "Paparazzo4", func_143(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		case 52:
			func_141(uParam1, "Rampage1", func_143(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_142(iParam0), 0, 0);
			break;
		case 54:
			func_141(uParam1, "Rampage3", func_143(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_142(iParam0), 1, 0);
			break;
		case 55:
			func_141(uParam1, "Rampage4", func_143(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_142(iParam0), 1, 0);
			break;
		case 56:
			func_141(uParam1, "Rampage5", func_143(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_142(iParam0), 0, 0);
			break;
		case 53:
			func_141(uParam1, "Rampage2", func_143(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_142(iParam0), 1, 0);
			break;
		case 57:
			func_141(uParam1, "TheLastOne", func_143(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 58:
			func_141(uParam1, "Tonya1", func_143(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 59:
			func_141(uParam1, "Tonya2", func_143(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 60:
			func_141(uParam1, "Tonya3", func_143(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 61:
			func_141(uParam1, "Tonya4", func_143(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		case 62:
			func_141(uParam1, "Tonya5", func_143(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_141(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { vParam7 };
	uParam0->f_9 = sParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = sParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = uParam24;
}

int func_142(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 0;
		case 5:
			return 1;
		case 6:
			return 1;
		case 7:
			return 0;
		case 8:
			return 1;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		case 12:
			return 1;
		case 13:
			return 0;
		case 14:
			return 1;
		case 15:
			return 0;
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
			return 1;
		case 23:
			return 1;
		case 24:
			return 1;
		case 25:
			return 1;
		case 26:
			return 1;
		case 27:
			return 0;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 1;
		case 31:
			return 0;
		case 32:
			return 1;
		case 33:
			return 1;
		case 34:
			return 1;
		case 35:
			return 0;
		case 36:
			return 0;
		case 37:
			return 0;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 1;
		case 41:
			return 1;
		case 42:
			return 1;
		case 43:
			return 1;
		case 44:
			return 0;
		case 45:
			return 0;
		case 46:
			return 1;
		case 47:
			return 1;
		case 48:
			return 0;
		case 49:
			return 1;
		case 50:
			return 1;
		case 51:
			return 1;
		case 52:
			return 1;
		case 54:
			return 1;
		case 55:
			return 1;
		case 56:
			return 1;
		case 53:
			return 1;
		case 57:
			return 1;
		case 58:
			return 1;
		case 59:
			return 1;
		case 60:
			return 1;
		case 61:
			return 1;
		case 62:
			return 1;
		default:
			break;
	}
	return 0;
}

struct<2> func_143(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_144(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_144(int iParam0)
{
	struct<2> Var0;

	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		default:
			break;
	}
	return Var0;
}

int func_145()
{
	func_21();
	return Global_111638.f_2358.f_539.f_4321;
}

bool func_146()
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return true;
		}
	}
	return false;
}

bool func_147()
{
	if (func_150() && !func_146())
	{
		return true;
	}
	if (func_149() && func_148())
	{
		return true;
	}
	return false;
}

bool func_148()
{
	return Global_111356 > 0;
}

bool func_149()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_150()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_151()
{
	if ((Global_111627 == func_30() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_111628)
	{
		return true;
	}
	return false;
}

bool func_152(int iParam0)
{
	return MISC::IS_BIT_SET(iLocal_156, iParam0);
}

void func_153(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_155(iParam0);
	MISC::_0x65D2EBB47E1CEC21(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_111624 = 0;
	func_154();
}

void func_154()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_155(int iParam0)
{
	Global_111627 = iParam0;
}

bool func_156(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;

	if (!Global_150217)
	{
		return false;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_30();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_48())
		{
			return false;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_146())
			{
				return false;
			}
		}
		if (!Global_111638.f_9080)
		{
			return false;
		}
		if (func_5(0))
		{
			return false;
		}
		if (func_147())
		{
			return false;
		}
		if (func_197())
		{
			return false;
		}
		if (Global_111627 != -1)
		{
			return false;
		}
		if (func_23(func_145()))
		{
			if (func_139(100f, 1) != -1)
			{
				return false;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return false;
			}
		}
		if (!func_196(iParam3))
		{
			return false;
		}
		if (func_23(func_145()))
		{
			if (func_195(func_145()) == 4 || func_195(func_145()) == 5)
			{
				return false;
			}
		}
		if (func_23(func_145()))
		{
			if (!func_194(iParam3, iParam4, 145))
			{
				return false;
			}
		}
		if (!func_193(Global_111638.f_24990.f_43[iParam3]))
		{
			return false;
		}
		if ((MISC::GET_GAME_TIMER() - Global_111629) < 150000)
		{
			if (iParam3 != 30)
			{
				return false;
			}
		}
		if (func_191())
		{
			return false;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return false;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return false;
		}
		if (!func_181(4))
		{
			return false;
		}
		if (!func_102(5))
		{
			return false;
		}
		if (func_180(iParam3, iParam4) && !bParam5)
		{
			return false;
		}
		if (Global_3 && iParam3 != 10)
		{
			return false;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return false;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_180(0, 0))
		{
			return false;
		}
		if (Global_30914)
		{
			return false;
		}
		if (func_196(30) && !func_180(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_23(func_145()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_179(iVar8))
				{
					if (func_157(iVar4))
					{
						if (!func_85(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vVar5) < (210f * 210f))
							{
								if (func_145() != iVar4)
								{
									return false;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return true;
}

int func_157(int iParam0)
{
	int iVar0;

	iVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_158(iVar0);
}

int func_158(int iParam0)
{
	return func_159(iParam0, 1);
}

int func_159(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_179(iParam0))
	{
		return 0;
	}
	func_160(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_160(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_161(func_172(), iParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_161(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_171(iParam0, iParam1))
	{
		iVar0 = func_170(iParam1);
		iVar1 = func_168(iParam0);
		iVar2 = (func_168(iParam0) - func_168(iParam1));
		iVar3 = (func_170(iParam0) - func_170(iParam1));
		iVar4 = (func_167(iParam0) - func_167(iParam1));
		iVar5 = (func_166(iParam0) - func_166(iParam1));
		iVar6 = (func_165(iParam0) - func_165(iParam1));
		iVar7 = (func_164(iParam0) - func_164(iParam1));
	}
	else
	{
		iVar0 = func_170(iParam0);
		iVar1 = func_168(iParam1);
		iVar2 = (func_168(iParam1) - func_168(iParam0));
		iVar3 = (func_170(iParam1) - func_170(iParam0));
		iVar4 = (func_167(iParam1) - func_167(iParam0));
		iVar5 = (func_166(iParam1) - func_166(iParam0));
		iVar6 = (func_165(iParam1) - func_165(iParam0));
		iVar7 = (func_164(iParam1) - func_164(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_163(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_162(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

float func_162(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_163(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
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

int func_164(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_165(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_166(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_167(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_168(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_169(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_169(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_170(int iParam0)
{
	return iParam0 & 15;
}

bool func_171(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_179(iParam1) || !func_179(iParam0))
	{
		return true;
	}
	iVar0 = func_168(iParam0);
	iVar1 = func_168(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_170(iParam0);
	iVar1 = func_170(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_167(iParam0);
	iVar1 = func_167(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_166(iParam0);
	iVar1 = func_166(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_165(iParam0);
	iVar1 = func_165(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_164(iParam0);
	iVar1 = func_164(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

int func_172()
{
	var uVar0;

	func_178(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_177(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_176(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_175(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_174(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_173(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_173(int iParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_174(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15);
	*iParam0 = (*iParam0 || iParam1);
}

void func_175(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_170(*iParam0);
	iVar1 = func_168(*iParam0);
	if (iParam1 < 1 || iParam1 > func_163(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 496);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_176(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_177(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_178(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_179(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_164(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_165(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_166(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_168(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_170(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_167(iParam0);
	if (iVar5 < 1 || iVar5 > func_163(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_180(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Global_111638.f_24990.f_8[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

bool func_181(int iParam0)
{
	int iVar0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_145();
				if (!func_23(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_190()) || Global_110685) || Global_30770) || func_189()) || func_188(8, -1)) || func_187()) || func_186()) || func_185()) || func_184()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_190()) || Global_30770) || func_189()) || func_188(8, -1)) || func_185()) || func_187()) || func_186()) || func_184()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_190()) || Global_110685) || Global_30770) || func_189()) || func_188(8, -1)) || func_185()) || func_187()) || func_186()) || func_184()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_190()) || Global_110685) || Global_30770) || func_189()) || func_188(8, -1)) || func_187()) || func_186()) || func_184()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_190() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_188(8, -1)) || func_184()) || func_183()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_188(8, -1) || func_187()) || func_186()) || func_183()) || func_182())
						{
							return false;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return false;
						}
						break;
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_190()) || Global_30770) || func_189()) || func_188(8, -1)) || func_186()) || func_185()) || func_184()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_190()) || func_186()) || Global_110685) || Global_30770) || func_189()) || Global_42596) || func_188(8, -1)) || func_185()) || func_183()) || func_184()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_190()) || Global_110685) || Global_30770) || func_189()) || func_188(8, -1)) || func_185()) || func_183()) || func_187()) || func_186()) || func_184())
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

bool func_182()
{
	return Global_98783.f_1;
}

bool func_183()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_184()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_185()
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

bool func_186()
{
	return Global_98796.f_346 > 0;
}

bool func_187()
{
	return Global_98796.f_345 > 0;
}

bool func_188(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

bool func_189()
{
	return Global_1312877;
}

bool func_190()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_191()
{
	func_192();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

void func_192()
{
	if (func_22(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[2 /*29*/])
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
		Global_19486 = func_145();
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

bool func_193(int iParam0)
{
	return func_171(func_172(), iParam0);
}

bool func_194(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_145();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_195(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_196(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_48())
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = MISC::IS_BIT_SET(Global_111638.f_24990, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = MISC::IS_BIT_SET(Global_111638.f_24990.f_1, iVar0);
	}
	return bVar1;
}

bool func_197()
{
	int iVar0;

	if (Global_30918)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_198(bool bParam0, bool bParam1)
{
	func_224();
	func_223();
	func_120(0);
	func_221(1, 1, 1, 0);
	func_219(0);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	HUD::DISPLAY_RADAR(true);
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
	func_218();
	func_217();
	func_216();
	if (func_225(Local_90[0 /*4*/]))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_90[0 /*4*/], true);
	}
	func_215(bParam1);
	func_214(bParam1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_171);
	func_212();
	func_210();
	func_111(0);
	CAM::DESTROY_ALL_CAMS(false);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	VEHICLE::SET_RANDOM_TRAINS(true);
	if (bParam0)
	{
		func_199(-1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_199(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_151())
	{
		func_203(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_111629 = MISC::GET_GAME_TIMER();
		func_202(30000);
		StringCopy(&cVar0, func_201(Global_111627, 1), 64);
		if (func_29(Global_111627) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111626, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_111624, (MISC::GET_GAME_TIMER() - Global_111625), 0);
	}
	else if (MISC::IS_BIT_SET(Global_111634, 0) && Global_111638.f_24990.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_111634, 0);
	}
	func_200(&Global_30827);
	Global_111628 = 0;
	func_155(-1);
}

void func_200(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41393)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

char* func_201(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
		case 1:
			return "RE_ATMROBBERY";
		case 2:
			return "RE_BUSTOUR";
		case 3:
			return "RE_DOMESTIC";
		case 4:
			return "RE_GETAWAYDRIVER";
		case 5:
			return "RE_SHOPROBBERY";
		case 6:
			return "RE_SNATCHED";
		case 7:
			return "RE_LURED";
		case 8:
			return "RE_BIKETHIEFSTAMP";
		case 9:
			return "RE_SECURITYVAN";
		case 10:
			return "RE_PAPARAZZI";
		case 11:
			return "RE_CHASETHIEVES";
		case 12:
			return "RE_DEALGONEWRONG";
		case 13:
			return "RE_HITCHLIFT";
		case 14:
			return "RE_STAG";
		case 15:
			return "RE_ARREST";
		case 16:
			return "RE_CRASHRESCUE";
		case 17:
			return "RE_CARTHEFT";
		case 18:
			return "RE_CULTSHOOTOUT";
		case 19:
			return "RE_GANGFIGHT";
		case 20:
			return "RE_GANGINTIMIDATION";
		case 21:
			return "RE_PRISONVANBREAK";
		case 22:
			return "RE_PRISONERLIFT";
		case 23:
			return "RE_ABANDONEDCAR";
		case 24:
			return "RE_BURIAL";
		case 25:
			return "RE_MUGGING";
		case 26:
			return "RE_BIKETHIEF";
		case 27:
			return "RE_DRUNKDRIVER";
		case 28:
			return "RE_HOMELANDSECURITY";
		case 29:
			return "RE_BORDERPATROL";
		case 30:
			return "RE_SIMEONYETARIAN";
		case 31:
			return "RE_DUEL";
		case 32:
			return "RE_SEAPLANE";
		case 33:
			return "RE_MONKEYPHOTO";
		case -1:
			return "RE_NONE";
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_202(int iParam0)
{
	Global_41982 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_203(int iParam0)
{
	func_204(iParam0, 0, func_209(iParam0));
}

void func_204(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<16> Var1;

	iVar0 = func_172();
	func_207(&iVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_206(iParam0, &iVar0);
	Var1 = { func_205(&iVar0) };
}

struct<16> func_205(int iParam0)
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, "", 64);
	iVar16 = func_166(*iParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_165(*iParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_164(*iParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_167(*iParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_170(*iParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_168(*iParam0), 64);
	return Var0;
}

void func_206(int iParam0, int iParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *iParam1;
}

void func_207(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_168(*iParam0);
	iVar1 = func_170(*iParam0);
	iVar2 = func_167(*iParam0);
	iVar3 = func_166(*iParam0);
	iVar4 = func_165(*iParam0);
	iVar5 = func_164(*iParam0);
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
	iVar6 = func_163(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_163(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_208(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_178(iParam0, iParam1);
	func_177(iParam0, iParam2);
	func_176(iParam0, iParam3);
	func_174(iParam0, iParam5);
	func_175(iParam0, iParam4);
	func_173(iParam0, iParam6);
}

int func_209(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		case 0:
			iVar0 = 30;
			break;
		case 15:
			iVar0 = 30;
			break;
		case 1:
			iVar0 = 200;
			break;
		case 26:
			iVar0 = 30;
			break;
		case 8:
			iVar0 = 30;
			break;
		case 29:
			iVar0 = 30;
			break;
		case 24:
			iVar0 = 30;
			break;
		case 2:
			iVar0 = 0;
			break;
		case 17:
			iVar0 = 30;
			break;
		case 11:
			iVar0 = 30;
			break;
		case 16:
			iVar0 = 30;
			break;
		case 18:
			iVar0 = 30;
			break;
		case 12:
			iVar0 = 120;
			break;
		case 3:
			iVar0 = 60;
			break;
		case 27:
			iVar0 = 60;
			break;
		case 19:
			iVar0 = 30;
			break;
		case 20:
			iVar0 = 30;
			break;
		case 4:
			iVar0 = 60;
			break;
		case 28:
			iVar0 = 30;
			break;
		case 13:
			iVar0 = 35;
			break;
		case 7:
			iVar0 = 30;
			break;
		case 25:
			iVar0 = 40;
			break;
		case 10:
			iVar0 = 30;
			break;
		case 22:
			iVar0 = 30;
			break;
		case 21:
			iVar0 = 30;
			break;
		case 5:
			iVar0 = 30;
			break;
		case 30:
			iVar0 = 60;
			break;
		case 9:
			iVar0 = 60;
			break;
		case 6:
			iVar0 = 40;
			break;
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_210()
{
	Global_19671 = 0;
	func_211();
}

void func_211()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_20805 = 6;
		return;
	}
}

void func_212()
{
	Global_19671 = 0;
	func_213();
}

void func_213()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
	}
}

void func_214(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_129(iVar0, bParam0);
		iVar0++;
	}
}

void func_215(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_134(iVar0, bParam0);
		iVar0++;
	}
}

void func_216()
{
}

void func_217()
{
}

void func_218()
{
}

void func_219(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_CREATE_RANDOM_COPS(false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(1, false);
		MISC::ENABLE_DISPATCH_SERVICE(8, false);
		MISC::ENABLE_DISPATCH_SERVICE(2, false);
		MISC::ENABLE_DISPATCH_SERVICE(6, false);
		MISC::ENABLE_DISPATCH_SERVICE(4, false);
		MISC::ENABLE_DISPATCH_SERVICE(12, false);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		func_220(9, 1);
		func_220(8, 1);
	}
	else
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
		PED::SET_CREATE_RANDOM_COPS(true);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(1, true);
		MISC::ENABLE_DISPATCH_SERVICE(8, true);
		MISC::ENABLE_DISPATCH_SERVICE(2, true);
		MISC::ENABLE_DISPATCH_SERVICE(6, true);
		MISC::ENABLE_DISPATCH_SERVICE(4, true);
		MISC::ENABLE_DISPATCH_SERVICE(12, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		func_220(9, 0);
		func_220(8, 0);
	}
}

void func_220(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_31015, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_31015, iParam0);
	}
}

void func_221(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam0)
	{
		func_210();
	}
	if (bParam1)
	{
		if (!func_222() || (bParam0 && !bParam3))
		{
			HUD::CLEAR_PRINTS();
		}
		HUD::CLEAR_REMINDER_MESSAGE();
	}
	if (bParam2)
	{
		HUD::CLEAR_HELP(true);
	}
}

bool func_222()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return true;
	}
	return false;
}

void func_223()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_123(&(Local_49[iVar0 /*5*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_123(&(Local_90[iVar0 /*4*/].f_1));
		iVar0++;
	}
}

void func_224()
{
	iLocal_47 = 0;
	iLocal_48 = 0;
	iLocal_155 = 0;
	iLocal_156 = 0;
}

bool func_225(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return true;
		}
	}
	return false;
}

