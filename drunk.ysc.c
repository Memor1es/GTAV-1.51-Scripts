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
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = false;
	bool bLocal_51 = false;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	char* sLocal_54 = NULL;
	struct<5> Local_55 = { 0, 0, 0, 0, 0 } ;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_48 = -1;
	iLocal_49 = -1;
	fLocal_52 = 1.7f;
	fLocal_53 = 0f;
	sLocal_54 = "";
	iLocal_63 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_174();
	}
	Local_43 = { ScriptParam_0 };
	func_173();
	func_172();
	func_167(iLocal_48, 0, 0);
	SYSTEM::SETTIMERA(0);
	func_166();
	func_162();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_161(iLocal_48);
		func_160();
		func_158();
		func_151();
		func_167(iLocal_48, 0, 0);
		func_173();
		func_9();
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_8())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}
}

void func_2()
{
	if ((!func_4() && !func_3()) && Global_2451425)
	{
		Global_4456448.f_194990 = 0;
	}
}

bool func_3()
{
	return Global_2450632.f_591;
}

bool func_4()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_196 != 0;
}

void func_5()
{
	Global_2450632.f_656 = 1;
}

bool func_6()
{
	return Global_2450632.f_635;
}

bool func_7()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 11);
}

bool func_8()
{
	return MISC::IS_BIT_SET(Global_2451426.f_1.f_2810, 3);
}

void func_9()
{
	bool bVar0;

	if (ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
	{
		func_174();
	}
	if (bLocal_50)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_174();
		}
	}
	func_150();
	bVar0 = true;
	switch (vLocal_60.x)
	{
		case 4:
			func_149();
			return;
		case 5:
			func_146();
			return;
		case 6:
			func_144();
			return;
		case 7:
			func_143();
			return;
		case 8:
			func_142();
			return;
		case 9:
			func_140();
			return;
		case 10:
			func_139();
			func_136();
			func_135();
			return;
		case 11:
			func_134();
			return;
		case 12:
			break;
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!vLocal_60.x == 12)
	{
		return;
	}
	switch (vLocal_60.y)
	{
		case 1:
			if (!func_133())
			{
				func_121();
				func_136();
			}
			break;
		case 2:
			func_119();
			break;
		case 12:
			func_106();
			break;
		case 3:
			func_10();
			break;
		default:
			break;
	}
}

void func_10()
{
	var uVar0;
	char* sVar2;
	struct<53> Var3;
	int iVar61;

	if (!MISC::IS_BIT_SET(Global_1676377.f_3, 27))
	{
		PED::SET_PED_TO_RAGDOLL(Local_43.f_1, 3000, 3500, 0, true, true, false);
	}
	Global_1671188 = 1;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(2500);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_105(&uVar0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			NETWORK::FADE_OUT_LOCAL_PLAYER(PLAYER::PLAYER_PED_ID(), 0, 1);
		}
		while ((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && NETWORK::NETWORK_IS_PLAYER_FADING(PLAYER::PLAYER_PED_ID()))
		{
			SYSTEM::WAIT(0);
		}
		MISC::CLEAR_BIT(&(Global_1676377.f_3), 27);
		func_91(PLAYER::PLAYER_ID(), 0, 57344, 0);
		Global_2405072.f_2672 = 1;
		if (MISC::IS_BIT_SET(Global_1676377, 15))
		{
			MISC::CLEAR_BIT(&Global_1676377, 15);
		}
		if (MISC::IS_BIT_SET(Global_1676377.f_2, 6))
		{
			MISC::CLEAR_BIT(&(Global_1676377.f_2), 6);
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			Global_2405072.f_2673 = 1;
		}
		else
		{
			Global_2405072.f_2673 = 0;
		}
		if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		{
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);
		}
		if (func_87(1))
		{
			func_75(0);
		}
		func_73(1);
		func_174();
	}
	sVar2 = "";
	Var3.f_3 = 1064514355;
	Var3.f_30 = 1148829696;
	Var3.f_31 = 1148829696;
	Var3.f_52 = 1148829696;
	iVar61 = 7;
	switch (func_67())
	{
		case 0:
			if (func_65() != 2)
			{
				iVar61 = 0;
			}
			else
			{
				iVar61 = 1;
			}
			break;
		case 1:
			if (!func_64(126))
			{
				iVar61 = 2;
			}
			else
			{
				iVar61 = 3;
			}
			break;
		case 2:
			if (!func_63(4))
			{
				if (func_64(58))
				{
					iVar61 = 4;
				}
				if (func_64(59))
				{
					iVar61 = 5;
				}
				if (iVar61 == 7)
				{
					if (!func_62())
					{
						iVar61 = 4;
					}
					else
					{
						iVar61 = 5;
					}
				}
			}
			else
			{
				iVar61 = 6;
			}
			break;
	}
	switch (iVar61)
	{
		case 0:
			sVar2 = "DWC_MICHAEL_mansion";
			Var3 = "SAVEM_Default@";
			Var3.f_1 = "M_GetOut_R";
			Var3.f_2 = "M_GetOut_R_CAM";
			Var3.f_5 = { -814.181f, 181.1f, 75.74f };
			Var3.f_8 = { 0f, 0f, 21.1994f };
			Var3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
		case 1:
			sVar2 = "DWC_MICHAEL_trailer";
			Var3 = "SAVECountryside@";
			Var3.f_1 = "M_GetOut_countryside";
			Var3.f_2 = "M_GetOut_countryside_CAM";
			Var3.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
		case 2:
			sVar2 = "DWC_FRANKLIN_city";
			Var3 = "SWITCH@FRANKLIN@BED";
			Var3.f_1 = "Sleep_GetUp_RubEyes";
			Var3.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var3.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var3.f_8 = { 0f, 0f, -179.653f };
			Var3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
		case 3:
			sVar2 = "DWC_FRANKLIN_hills";
			Var3 = "SAVEBighouse@";
			Var3.f_1 = "F_GetOut_r_bighouse";
			Var3.f_2 = "F_GetOut_r_bighouse_CAM";
			Var3.f_5 = { -1.049f, 524.283f, 170.064f };
			Var3.f_8 = { 0f, 0f, 24f };
			Var3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
		case 4:
			sVar2 = "DWC_TREVOR_trailer";
			Var3 = "SAVECountryside@";
			Var3.f_1 = "T_GetOut_countryside";
			Var3.f_2 = "T_GetOut_countryside_CAM";
			Var3.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
		case 5:
			sVar2 = "DWC_TREVOR_beach";
			Var3 = "SAVEVeniceB@";
			Var3.f_1 = "T_GetOut_r_veniceB";
			Var3.f_2 = "T_GetOut_r_veniceB_CAM";
			Var3.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var3.f_8 = { 0f, 0f, 36.25f };
			Var3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
		case 6:
			sVar2 = "DWC_TREVOR_stripclub";
			Var3 = "SAVECouch@";
			Var3.f_1 = "T_GetOut_couch";
			Var3.f_2 = "T_GetOut_couch_CAM";
			Var3.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
	{
		ENTITY::SET_ENTITY_COORDS(Local_43.f_1, Var3.f_5, true, false, false, true);
	}
	SYSTEM::WAIT(500);
	StringCopy(&(Var3.f_11), "", 16);
	Var3.f_15 = -1f;
	func_12(sVar2, &Var3, "");
	func_11(126, 1);
	func_174();
}

void func_11(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_57254[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_57254[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_12(char* sParam0, var uParam1, char* sParam2)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	void fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar174;
	int iVar175;
	char* sVar176;
	char* sVar177;
	char* sVar178;
	int iVar179;
	float fVar180;
	float fVar181;
	bool bVar182;
	int iVar183;
	int iVar184;
	float fVar185;
	vector3 vVar186;
	vector3 vVar189;
	float fVar192;
	bool bVar193;
	float fVar194;
	vector3 vVar195;
	float fVar198;
	float fVar199;
	float fVar200;
	vector3 vVar201;
	vector3 vVar204;
	float fVar207;
	int iVar208;
	float fVar209;
	float fVar210;
	vector3 vVar211;
	float fVar214;
	float fVar215;
	float fVar216;
	vector3 vVar217;
	vector3 vVar220;
	float fVar223;
	int iVar224;
	bool bVar225;
	bool bVar226;
	int iVar227;

	fVar0 = 0f;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
	}
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_5, 4500f);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_5, 4500f);
	MISC::CLEAR_AREA(uParam1->f_5, 5f, true, false, false, false);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_5, true, false, false, true);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
	SYSTEM::WAIT(0);
	MISC::SET_GAME_PAUSED(true);
	STREAMING::REQUEST_ANIM_DICT(*uParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_57(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	iVar1 = MISC::GET_GAME_TIMER() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > MISC::GET_GAME_TIMER())
	{
		bVar2 = true;
		STREAMING::REQUEST_ANIM_DICT(*uParam1);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
		{
			bVar2 = false;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
		{
			STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		SYSTEM::WAIT(0);
	}
	func_54();
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		PATHFIND::SET_ROADS_IN_AREA(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, false, true);
		MISC::CLEAR_AREA_OF_VEHICLES(uParam1->f_5 + uParam1->f_19, (SYSTEM::VMAG(uParam1->f_22) + 25f), false, false, false, false, false, false);
		MISC::CLEAR_AREA(uParam1->f_5 + uParam1->f_19, (SYSTEM::VMAG(uParam1->f_22) + 25f), true, false, false, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	}
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	MISC::SET_GAME_PAUSED(false);
	MISC::CLEAR_AREA(uParam1->f_5, 15f, true, false, false, false);
	PED::_0x4759CC730F947C81();
	VEHICLE::_0x48ADC8A773564670();
	func_51();
	while (func_50())
	{
		SYSTEM::WAIT(0);
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		fVar4 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_5, uParam1->f_8, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(fVar4, false);
		PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(fVar4, false);
		iVar5 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MOTIONSTATE_IDLE"))
		{
			iVar6 |= 2;
		}
		func_48(PLAYER::PLAYER_PED_ID(), uParam1->f_18);
		TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), fVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1000f, 0);
		PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), true);
		bVar3 = PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, true);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iVar5, fVar4, uParam1->f_2, *uParam1);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
		{
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0f, false, false, false);
		}
	}
	else
	{
		fVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_47(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
	{
		iVar174 = func_67();
		iVar175 = -1;
		sVar176 = "";
		switch (iVar174)
		{
			case 0:
				iVar175 = 0;
				sVar176 = "MICHAEL";
				break;
			case 1:
				iVar175 = 1;
				sVar176 = "FRANKLIN";
				break;
			case 2:
				iVar175 = 2;
				sVar176 = "TREVOR";
				break;
			default:
				break;
		}
		func_46(&uVar9, iVar175, PLAYER::PLAYER_PED_ID(), sVar176, 0, 1);
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(fVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (PED::IS_SYNCHRONIZED_SCENE_RUNNING(fVar4) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!bVar8)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_26))
					{
						GRAPHICS::ANIMPOSTFX_PLAY(uParam1->f_26, 0, false);
						bVar8 = true;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_27))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_28))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_28, uParam1->f_27, false);
							bVar8 = true;
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_29))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_29, uParam1->f_27, false);
							bVar8 = true;
						}
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			func_40(0);
			iVar179 = MISC::GET_GAME_TIMER();
			if (iVar179 >= (Global_41982 - 500))
			{
				func_39(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(fVar4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (func_22(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			bVar182 = false;
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar177)))
			{
				iVar183 = (PAD::GET_CONTROL_VALUE(2, 195) - 128);
				iVar184 = (PAD::GET_CONTROL_VALUE(2, 196) - 128);
				if (((iVar183 < 64 && iVar183 > -64) && iVar184 < 64) && iVar184 > -64)
				{
				}
				else
				{
					bVar182 = true;
				}
			}
			else
			{
				fVar180 = -1f;
				fVar181 = -1f;
				bVar182 = false;
				uParam1->f_3 = uParam1->f_3;
				fVar180 = fVar180;
				fVar181 = fVar181;
			}
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						vVar186 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						vVar189 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
						fVar192 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar186, vVar189, true);
						fVar185 = func_21(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_20(&(uParam1->f_34), PLAYER::PLAYER_PED_ID(), func_67(), 1E-06f, 300, 300, 0, 0, 1045220557 /* Float: 0.2f */);
						func_19(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = MISC::GET_GAME_TIMER();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							vVar195 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
							fVar198 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
							fVar199 = vVar195.z;
							fVar200 = fVar198;
							uParam1->f_57 = (fVar199 - fVar200);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						bVar193 = uParam1->f_56;
						fVar194 = uParam1->f_57;
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(bVar193, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar194);
						CAM::_0x469F2ECDEC046337(bVar193);
						CAM::_SET_GAMEPLAY_CAM_RAW_PITCH(fVar194);
						vVar201 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						vVar204 = { CAM::GET_GAMEPLAY_CAM_COORD() };
						fVar207 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar201, vVar204, true);
						iVar208 = SYSTEM::ROUND((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						CAM::_0x59424BD75174C9B1();
						if (func_16(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar178)) || bVar182)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					switch (uParam1->f_4)
					{
						case joaat("MOTIONSTATE_IDLE"):
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MOTIONSTATE_IDLE"), true, 0, false);
							CAM::_RENDER_FIRST_PERSON_CAM(false, 0f, 3, 0);
							break;
						case joaat("MOTIONSTATE_WALK"):
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MOTIONSTATE_WALK"), true, 0, false);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0f, true, false);
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									vVar211 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
									fVar214 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
									fVar215 = vVar211.z;
									fVar216 = fVar214;
									uParam1->f_31 = (fVar215 - fVar216);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar209 = uParam1->f_30;
								fVar210 = uParam1->f_31;
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar209, 1f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar210);
								vVar217 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
								vVar220 = { CAM::GET_GAMEPLAY_CAM_COORD() };
								fVar223 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar217, vVar220, true);
								iVar224 = SYSTEM::ROUND((fVar223 * 1000f));
								CAM::RENDER_SCRIPT_CAMS(false, true, iVar224, false, false, 0);
							}
							break;
						default:
							break;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(fVar4))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(fVar4);
						fVar4 = -1;
					}
				}
			}
			SYSTEM::WAIT(0);
		}
	}
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	bVar225 = CAM::_0x3044240D2E0FA842();
	bVar226 = false;
	if (uParam1->f_32)
	{
		CAM::_0x59424BD75174C9B1();
		if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (bVar225)
			{
			}
			if (bVar226)
			{
			}
			iVar227 = 2;
			func_15(1, 26, &iVar227);
			func_15(1, 79, &iVar227);
			func_15(1, 1, &iVar227);
			func_15(1, 2, &iVar227);
			func_15(0, 22, &iVar227);
			func_15(0, 36, &iVar227);
			func_15(0, 142, &iVar227);
			func_15(0, 141, &iVar227);
			func_15(0, 140, &iVar227);
			func_15(0, 263, &iVar227);
			func_15(0, 264, &iVar227);
			SYSTEM::WAIT(0);
			bVar225 = CAM::_0x3044240D2E0FA842();
			bVar226 = false;
			if (uParam1->f_32)
			{
				CAM::_0x59424BD75174C9B1();
				if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam1->f_16);
	}
	STREAMING::REMOVE_ANIM_DICT(*uParam1);
	CAM::DESTROY_CAM(iVar5, false);
	func_13(&(uParam1->f_34));
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, bVar3);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	}
	sParam0 = sParam0;
}

void func_13(var uParam0)
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_2))
	{
		CAM::DESTROY_CAM(uParam0->f_2, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_3))
	{
		CAM::DESTROY_CAM(uParam0->f_3, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_4))
	{
		CAM::DESTROY_CAM(uParam0->f_4, false);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	PAD::DISABLE_CONTROL_ACTION(iParam0, iParam1, true);
	*iParam2++;
}

bool func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	float fVar21;

	switch (*uParam0)
	{
		case 0:
			func_17();
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, false))
			{
				func_14(uParam0);
				vVar0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				if (bParam1)
				{
					vVar0 = { vVar0 + ENTITY::GET_ENTITY_VELOCITY(uParam0->f_5) * FtoV(MISC::GET_FRAME_TIME()) };
				}
				vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_5, vVar0) };
				vVar6 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				vVar9 = { vVar6 + uParam0->f_9 };
				vVar12 = { vVar9 - ENTITY::GET_ENTITY_ROTATION(uParam0->f_5, 2) };
				vVar15 = { (-SYSTEM::SIN(vVar9.z) * SYSTEM::COS(vVar9.x)), (SYSTEM::COS(vVar9.z) * SYSTEM::COS(vVar9.x)), SYSTEM::SIN(vVar9.x) };
				vVar18 = { (-SYSTEM::SIN(vVar12.z) * SYSTEM::COS(vVar12.x)), (SYSTEM::COS(vVar12.z) * SYSTEM::COS(vVar12.x)), SYSTEM::SIN(vVar12.x) };
				fVar21 = CAM::GET_FINAL_RENDERED_CAM_FOV();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = CAM::CREATE_CAMERA(1775630800, false);
				}
				uParam0->f_1 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				if (bParam1)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1, uParam0->f_5, vVar3, true);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_1, vVar0);
				}
				CAM::SET_CAM_ROT(uParam0->f_1, vVar6, 2);
				CAM::SET_CAM_FOV(uParam0->f_1, fVar21);
				uParam0->f_2 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				if (bParam1 && !bParam4)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_2, uParam0->f_5, vVar3 + vVar18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), true);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_2, vVar0 + vVar15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				CAM::SET_CAM_ROT(uParam0->f_2, vVar6, 2);
				CAM::SET_CAM_FOV(uParam0->f_2, fVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					if (bParam1 && !bParam4)
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_4, uParam0->f_5, vVar3 + vVar18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), true);
					}
					else
					{
						CAM::SET_CAM_COORD(uParam0->f_4, vVar0 + vVar15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					CAM::SET_CAM_ROT(uParam0->f_4, vVar6, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, fVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_3, iParam6);
					CAM::SET_CAM_ACTIVE(uParam0->f_3, true);
				}
				else
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				uParam0->f_7 = MISC::GET_GAME_TIMER();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return true;
			}
			break;
		case 1:
			func_17();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInFranklin", 0, false);
									break;
								case 0:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInMichael", 0, false);
									break;
								case 2:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInTrevor", 0, false);
									break;
							}
						}
						else
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						uParam0->f_8 = 1;
					}
				}
			}
			if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_14(uParam0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
				return true;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_17()
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_18();
}

void func_18()
{
	Global_22211.f_134 = 1;
}

void func_19(var uParam0, vector3 vParam1)
{
	uParam0->f_9 = { vParam1 };
}

void func_20(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

float func_21(float fParam0, float fParam1, float fParam2)
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

int func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_37();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_35();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			MISC::CLEAR_BIT(&Global_7356, 20);
			MISC::CLEAR_BIT(&Global_7357, 17);
			MISC::CLEAR_BIT(&Global_7358, 0);
			if (bParam2)
			{
				func_33();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_32())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_31())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
					case 8:
						return 0;
					case 9:
						break;
					case 10:
						break;
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_7356, 9))
				{
					return 0;
				}
			}
			func_30();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_29();
		func_24();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_37();
	}
	return 0;
}

void func_24()
{
	if (!func_25())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

bool func_25()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (PLAYER::PLAYER_ID() == func_28())
	{
		return false;
	}
	if (func_26(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return false;
	}
	return true;
}

bool func_26(int iParam0)
{
	return func_27(iParam0, 20);
}

bool func_27(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_28()
{
	return -1;
}

void func_29()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_20805 = 1;
}

void func_30()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	MISC::CLEAR_BIT(&Global_7357, 16);
}

bool func_31()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_32()
{
	int iVar0;
	int iVar1;

	if (Global_76622)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_33()
{
	if (func_34(14))
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
		Global_19486 = func_67();
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

bool func_34(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_35()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_36(int iParam0, int iParam1)
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

void func_37()
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

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

void func_39(int iParam0)
{
	Global_41982 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_40(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_44(0))
		{
			func_41(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_41(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_43())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_31())
	{
		Global_19486.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19423);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
}

bool func_43()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_44(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7356, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return true;
	}
	if (Global_19486.f_1 > 3)
	{
		return true;
	}
	return false;
}

bool func_45()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_46(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

void func_47(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_48(int iParam0, var uParam1)
{
	if (func_49(uParam1, 1))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_49(uParam1, 2))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_49(uParam1, 4))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_49(uParam1, 8))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_49(uParam1, 16))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_49(uParam1, 32))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_49(uParam1, 64))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_49(uParam1, 128))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_49(uParam1, 256))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_49(uParam1, 512))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_49(uParam1, 0))
	{
	}
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_50()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return false;
	}
	return true;
}

void func_51()
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
					func_52(Global_95677[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_52(int iParam0, bool bParam1)
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

bool func_53(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_54()
{
	func_55();
	func_73(1);
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_42383[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_167(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_42357[iVar2 /*5*/] == 0)
		{
			func_56(iVar2);
		}
		iVar2++;
	}
}

void func_56(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42357[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42357[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
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

int func_57(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_61(0);
		MISC::CLEAR_AREA(vParam0, 5f, true, false, false, false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam0, 4500f, 0);
		SYSTEM::WAIT(0);
		MISC::CLEAR_AREA(vParam0, 5000f, true, false, false, false);
		MISC::CLEAR_AREA_OF_OBJECTS(vParam0, 5000f, 0);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vParam0, 5000f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(vParam0, 5000f);
		func_60();
		func_59();
		SYSTEM::SETTIMERA(0);
		func_61(1);
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
				if (SYSTEM::TIMERA() > 2000)
				{
					MISC::SET_GAME_PAUSED(false);
					return 0;
				}
			}
		}
		SYSTEM::SETTIMERA(0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				MISC::SET_GAME_PAUSED(false);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				return 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				MISC::SET_GAME_PAUSED(false);
				SYSTEM::SETTIMERA(0);
				PED::_0x4759CC730F947C81();
				if (iParam5 == 1)
				{
					VEHICLE::_0x48ADC8A773564670();
				}
				else
				{
					SYSTEM::SETTIMERA(5000);
				}
				MISC::POPULATE_NOW();
			}
		}
		while ((!VEHICLE::_0x91D6DD290888CBAB() && !func_58()) && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
		if (SYSTEM::TIMERA() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
		if (iParam4 == 1)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0, &(vParam0.f_2), false, false);
			MISC::CLEAR_AREA(vParam0, 5f, true, false, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
			}
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		func_61(0);
		return 1;
	}
	func_61(0);
	return 0;
}

bool func_58()
{
	return !Global_75441.f_553;
}

void func_59()
{
	Global_75441.f_553 = 1;
	Global_75441.f_554 = 0;
}

void func_60()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_75441[iVar0] = 0;
		iVar0++;
	}
}

void func_61(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!MISC::IS_BIT_SET(Global_98744.f_20, 2))
			{
				MISC::SET_GAME_PAUSED(true);
				MISC::SET_BIT(&(Global_98744.f_20), 2);
			}
		}
		else if (MISC::IS_BIT_SET(Global_98744.f_20, 2))
		{
			MISC::SET_GAME_PAUSED(false);
			MISC::CLEAR_BIT(&(Global_98744.f_20), 2);
		}
	}
}

bool func_62()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return true;
	}
	return false;
}

bool func_63(int iParam0)
{
	return MISC::IS_BIT_SET(Global_111638.f_7224[iParam0], 0);
}

bool func_64(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

int func_65()
{
	if (Global_38796[11] == 1)
	{
		return 4;
	}
	if (!func_66(21))
	{
		return 0;
	}
	if (!func_64(130))
	{
		return 1;
	}
	if (!func_64(131))
	{
		return 2;
	}
	if (!func_66(22))
	{
		return 1;
	}
	if (!func_66(49))
	{
		return 3;
	}
	if (!func_66(28))
	{
		return 1;
	}
	return 3;
}

bool func_66(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

int func_67()
{
	func_68();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_68()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_71(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_70(PLAYER::PLAYER_PED_ID());
			if (func_69(iVar0) && (!func_34(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_69(Global_111638.f_2358.f_539.f_4321))
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

bool func_69(int iParam0)
{
	return iParam0 < 3;
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_71(int iParam0)
{
	if (func_69(iParam0))
	{
		return func_72(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_72(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_73(bool bParam0)
{
	CAM::_0x487A82C650EB7799(0f);
	CAM::_0x0225778816FDC28C(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(true);
	AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_42574))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_42574))
		{
			AUDIO::STOP_AUDIO_SCENE(&Global_42574);
		}
	}
	if (CAM::DOES_CAM_EXIST(Global_42563))
	{
		if (CAM::IS_CAM_SHAKING(Global_42563))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_42563, 0f);
			CAM::STOP_CAM_SHAKING(Global_42563, true);
		}
	}
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);
	}
	if (bParam0)
	{
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
	Global_42569 = 0f;
	StringCopy(&Global_42570, "", 16);
	StringCopy(&Global_42574, "", 64);
	StringCopy(&Global_42590, "", 16);
	func_74();
}

void func_74()
{
	Global_42562 = 0;
	Global_42563 = 0;
	Global_42564 = 0;
	Global_42565 = 30000;
	Global_42566 = 0f;
	Global_42568 = 0f;
	Global_42567 = 0f;
	Global_42569 = 0f;
	StringCopy(&Global_42570, "", 16);
}

void func_75(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17692;
			break;
		case 1:
			iVar0 = Global_262145.f_17682;
			break;
		case 2:
			iVar0 = Global_262145.f_17693;
			break;
		case 3:
			iVar0 = Global_262145.f_17685;
			break;
		case 4:
			iVar0 = Global_262145.f_17681;
			break;
		case 6:
			iVar0 = 3;
			break;
		case 7:
			iVar0 = Global_262145.f_17696;
			break;
		case 8:
			iVar0 = Global_262145.f_17697;
			break;
		case 9:
			iVar0 = Global_262145.f_17700;
			break;
		case 22:
			iVar0 = Global_262145.f_17701;
			break;
		case 23:
			iVar0 = Global_262145.f_17694;
			break;
		case 25:
			iVar0 = Global_262145.f_18583;
			break;
		case 26:
			iVar0 = Global_262145.f_18582;
			break;
	}
	if (iVar0 != 0)
	{
		STATS::_PLAYSTATS_EARNED_MC_POINTS(func_85(func_86()), func_84(func_86()), func_83(), func_82(), iParam0, iVar0);
	}
	func_81(iVar0);
	func_76(iVar0);
}

void func_76(int iParam0)
{
	int iVar0;

	iVar0 = func_80(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_490 = iVar0;
	func_77(3968, iVar0, -1, 1, 0);
}

void func_77(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
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

int func_79()
{
	return Global_1312745;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_78(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_81(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1628237[iVar0 /*615*/].f_11.f_489 = (Global_1628237[iVar0 /*615*/].f_11.f_489 + iParam0);
	if (Global_1628237[iVar0 /*615*/].f_11.f_489 < -9999)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_489 = 9999;
	}
	else if (Global_1628237[iVar0 /*615*/].f_11.f_489 > 9999)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_489 = 9999;
	}
}

int func_82()
{
	if (Global_1674356.f_3 != 0)
	{
		return Global_1674356.f_3;
	}
	return -1;
}

int func_83()
{
	if (Global_1674356.f_2 != 0)
	{
		return Global_1674356.f_2;
	}
	return -1;
}

int func_84(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1628237[iParam0 /*615*/].f_11.f_8[1];
}

int func_85(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1628237[iParam0 /*615*/].f_11.f_8[0];
}

int func_86()
{
	return Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11;
}

bool func_87(bool bParam0)
{
	return func_88(PLAYER::PLAYER_ID(), bParam0);
}

int func_88(int iParam0, bool bParam1)
{
	return func_89(iParam0, bParam1, 1);
}

int func_89(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam0 == func_28())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_90(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0 /*615*/].f_11;
	if (iVar0 != func_28() && Global_1628237[iVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_90(int iParam0, int iParam1)
{
	if (iParam0 != func_28())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_28())
		{
			if (Global_1628237[iParam0 /*615*/].f_11 == iParam0 && Global_1628237[iParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

void func_91(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
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
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;

	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_104())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			bParam3 = true;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_102())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || bParam3 == 1))
		{
			if (bParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::SET_PLAYER_VISIBLE_LOCALLY(1);
				}
				else if (bVar14 || (!func_100(PLAYER::PLAYER_ID(), 0) && !func_99()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::SET_PLAYER_VISIBLE_LOCALLY(0);
					}
					Global_2425662[iParam0 /*421*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_96(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_95(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_SOMETHING(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(iVar27))
				{
					PED::_0x4668D80430D6C299(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_94();
					func_93();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2425662[iParam0 /*421*/].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_95(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_SOMETHING(iVar27, true);
						}
					}
					if (func_92(Global_4456448.f_232883))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_92(int iParam0)
{
	return iParam0 == 17;
}

void func_93()
{
	vector3 vVar0;

	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_94()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

bool func_95(int iParam0)
{
	int iVar0;

	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return true;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

void func_96(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_98();
			}
			else if (!MISC::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (MISC::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_100(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1, 1);
		}
		else
		{
			NETWORK::_GET_DATE_AND_TIME_FROM_UNIX_EPOCH(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_97(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_97(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_98()
{
	int iVar0;

	if (!NETWORK::_0x5C707A667DF8B9FA())
	{
		if (!MISC::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2359302.f_67), 2);
			MISC::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_99()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_100(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_101(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0 /*876*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_101(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

bool func_102()
{
	if (func_103() == 0)
	{
		return true;
	}
	return false;
}

int func_103()
{
	return Global_1312467.f_18;
}

bool func_104()
{
	if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return true;
	}
	return false;
}

void func_105(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::_0xBA7F0B77D80A4EB7();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_106()
{
	int iVar0;

	if (bLocal_50)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_107(Global_42383[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(500, 3000);
	vLocal_60.x = 5;
	Local_55.f_2 = (SYSTEM::TIMERA() + iVar0);
}

bool func_107(int iParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;

	iVar0 = func_118();
	if (iVar0 == -2)
	{
		return false;
	}
	if (PED::IS_PED_INJURED(Local_43.f_1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false) || PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_43.f_1))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Local_43.f_1))
		{
			return false;
		}
		if (func_114(Local_43.f_1))
		{
			return false;
		}
	}
	if ((Global_42383[iLocal_64 /*5*/].f_3 < 3 && Global_42383[iLocal_64 /*5*/].f_3 != 0) && Global_42383[iLocal_64 /*5*/].f_3 > Global_42383[iLocal_64 /*5*/].f_4)
	{
		return false;
	}
	if ((Global_42383[iLocal_64 /*5*/].f_4 < 9 && Global_42383[iLocal_64 /*5*/].f_4 != 0) && Global_42383[iLocal_64 /*5*/].f_4 > Global_42383[iLocal_64 /*5*/].f_3)
	{
		return false;
	}
	sVar1 = func_113(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return false;
	}
	if (func_114(Local_43.f_1))
	{
		return false;
	}
	STREAMING::REQUEST_CLIP_SET(sVar1);
	if (func_110(Local_43.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			default:
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar2);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(Local_43.f_1))
			{
				TASK::TASK_PLAY_ANIM(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0f, false, false, false);
				sLocal_54 = sVar3;
			}
		}
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(sVar1))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(Local_43.f_1))
	{
		return false;
	}
	PED::SET_PED_MOVEMENT_CLIPSET(Local_43.f_1, sVar1, 0.75f);
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		PED::SET_PED_STRAFE_CLIPSET(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_43.f_1, 0, sVar1, "idle", 2f, true);
	vLocal_60.f_2 = sVar1;
	bLocal_51 = true;
	iVar4 = 0;
	switch (func_70(Local_43.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		default:
			if (PED::IS_PED_A_PLAYER(Local_43.f_1))
			{
				if (!func_108())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (PED::IS_PED_MALE(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Local_43.f_1, "mood_drunk_1", iVar4);
	PED::SET_PED_RESET_FLAG(Local_43.f_1, 200, true);
	PED::SET_PED_RESET_FLAG(Local_43.f_1, 46, true);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_43.f_1, false);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_43.f_1, 262144, true);
	AUDIO::SET_PED_IS_DRUNK(Local_43.f_1, true);
	return true;
}

int func_108()
{
	return func_109(PLAYER::PLAYER_ID());
}

int func_109(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

bool func_110(int iParam0)
{
	vector3 vVar0;

	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true) || PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0))
	{
		return false;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -2017877118) != 7)
	{
		return false;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1785177548) != 7)
	{
		return false;
	}
	if (PED::IS_PED_SHOOTING(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_IN_AIR(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_RAGDOLL(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_CLIMBING(iParam0))
	{
		return false;
	}
	if (Global_73825)
	{
		return false;
	}
	if (func_112())
	{
		return false;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		if (!PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (func_111())
		{
			return false;
		}
	}
	vVar0 = { ENTITY::GET_ENTITY_VELOCITY(iParam0) };
	if (SYSTEM::VMAG2(vVar0) >= (1f * 1f))
	{
		return false;
	}
	return true;
}

bool func_111()
{
	return Global_98796.f_346 > 0;
}

bool func_112()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
		case 1:
			return "move_m@drunk@slightlydrunk";
		case 2:
			return "move_m@drunk@moderatedrunk";
	}
	return "";
}

bool func_114(int iParam0)
{
	int iVar0;
	char* sVar1;

	iVar0 = func_115(iParam0);
	sVar1 = func_113(iVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(vLocal_60.z))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(vLocal_60.z, sVar1);
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = func_117(iParam0);
	iVar1 = func_116(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1 /*5*/].f_2;
}

int func_116(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42383[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_117(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42383[iVar0 /*5*/].f_1)
		{
			return Global_42383[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_118()
{
	int iVar0;

	if (Local_55 == -2)
	{
		return -2;
	}
	if (Local_55 == -1)
	{
		return -1;
	}
	iVar0 = (Local_55 - SYSTEM::TIMERA());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_119()
{
	if (bLocal_50)
	{
		return;
	}
	if (!func_120())
	{
		vLocal_60.x = 5;
		Local_55.f_2 = SYSTEM::TIMERA() + 5000;
		return;
	}
	vLocal_60.x = 6;
}

bool func_120()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (Local_43.f_4 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_43.f_4, false))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_1, true) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_4, true) };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, true);
	return fVar6 < 7f;
}

void func_121()
{
	int iVar0;
	char* sVar1;

	if (Local_43.f_1 == PLAYER::PLAYER_PED_ID())
	{
		PAD::DISABLE_CONTROL_ACTION(0, 36, true);
		if (PED::GET_PED_STEALTH_MOVEMENT(Local_43.f_1))
		{
			if (Global_42383[iLocal_64 /*5*/].f_2 == 0 || Global_42383[iLocal_64 /*5*/].f_2 == 2)
			{
				PED::SET_PED_STEALTH_MOVEMENT(Local_43.f_1, false, 0);
			}
		}
		if (PED::IS_PED_DUCKING(Local_43.f_1))
		{
			PED::SET_PED_DUCKING(Local_43.f_1, false);
		}
	}
	if (Local_55 != -2)
	{
		if (Local_55 == -1)
		{
			if (Global_42383[iLocal_64 /*5*/].f_2 != 0)
			{
				Global_42383[iLocal_64 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_55 - SYSTEM::TIMERA());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_42383[iLocal_64 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_42383[iLocal_64 /*5*/].f_2 = 2;
					if (!func_107(2))
					{
						Global_42383[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_42383[iLocal_64 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_42383[iLocal_64 /*5*/].f_2 = 1;
					if (!func_107(2))
					{
						Global_42383[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_42383[iLocal_64 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_54))
	{
		if (!func_110(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_43.f_1, sVar1, sLocal_54, 3))
			{
				TASK::STOP_ANIM_TASK(Local_43.f_1, sVar1, sLocal_54, -4f);
			}
			sLocal_54 = "";
			return;
		}
	}
	if ((Global_42383[iLocal_64 /*5*/].f_3 >= 10 || Global_42383[iLocal_64 /*5*/].f_4 >= 15) || MISC::IS_BIT_SET(Global_42599, 9))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_43.f_1, 1785177548) == 1 && !MISC::IS_BIT_SET(Global_1676377.f_3, 27))
		{
			return;
		}
		if (AUDIO::IS_ANY_SPEECH_PLAYING(Local_43.f_1))
		{
			return;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, true))
		{
			if (Global_42383[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42383[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42383[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42383[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && func_132(PLAYER::PLAYER_ID())) && Global_262145.f_23843)
		{
			if (Global_42383[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42383[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42383[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42383[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && func_131())
		{
			if (Global_42383[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42383[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42383[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42383[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && func_130())
		{
			if (Global_42383[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42383[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42383[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42383[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && func_129(PLAYER::PLAYER_ID())) && Global_262145.f_26243)
		{
			if (Global_42383[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42383[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42383[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42383[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && func_126(PLAYER::PLAYER_ID())) && Global_262145.f_26276)
		{
			if (Global_42383[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42383[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42383[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42383[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && func_122(PLAYER::PLAYER_ID()) == 15)
		{
			if (Global_42383[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42383[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42383[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42383[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && Global_73825) && !Global_42356)
		{
			if (Global_42383[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42383[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42383[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42383[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		vLocal_60.f_1 = 3;
		return;
	}
	if (!bLocal_51)
	{
		return;
	}
	if (!func_114(Local_43.f_1))
	{
		return;
	}
}

int func_122(int iParam0)
{
	if (func_125(iParam0) == 243)
	{
		return func_123(iParam0);
	}
	return -1;
}

int func_123(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

bool func_124(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_125(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_126(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_127(Global_2425662[iParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return false;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
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
			return 1;
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
		case 81:
			return 5;
		case 82:
			return 6;
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
		case 88:
			return 8;
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
		case 101:
			return 10;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
		case 117:
			return 12;
		case 122:
			return 13;
		case 123:
			return 14;
		case 124:
			return 15;
		case 125:
			return 16;
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
		case 145:
			return 18;
	}
	return -1;
}

bool func_128(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return false;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[iVar0])
				{
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

bool func_129(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_127(Global_2425662[iParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return false;
}

bool func_130()
{
	return Global_2450632.f_19;
}

bool func_131()
{
	return Global_2513609;
}

bool func_132(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_127(Global_2425662[iParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_133()
{
	int iVar0;

	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		return false;
	}
	iVar0 = 0;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return false;
	}
	if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == Local_43.f_1)
	{
		return false;
	}
	Local_43.f_4 = iVar0;
	vLocal_60.x = 7;
	return true;
}

void func_134()
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
	{
		vLocal_60.x = 4;
		return;
	}
}

void func_135()
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!bLocal_50)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	vVar5 = { vVar2 - Vector(3f, 30f, 30f) };
	vVar8 = { vVar2 + Vector(3f, 30f, 30f) };
	if (!VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(vVar5, vVar8) && !PED::IS_COP_PED_IN_AREA_3D(vVar5, vVar8))
	{
		return;
	}
	PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	func_11(73, 1);
}

void func_136()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;

	iVar0 = Local_43.f_1;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!PLAYER::PLAYER_PED_ID() == Local_43.f_1)
	{
		return;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		fLocal_53 = 0f;
		func_138(iVar0, 0f);
		return;
	}
	if (SYSTEM::TIMERA() < Local_55.f_4)
	{
		func_138(iVar0, fLocal_53);
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		Local_55.f_4 = SYSTEM::TIMERA() + 2000;
	}
	else
	{
		Local_55.f_4 = SYSTEM::TIMERA() + 1000;
	}
	fVar3 = ENTITY::GET_ENTITY_SPEED(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_53 = 0f;
		func_138(iVar0, 0f);
		return;
	}
	if (Local_55.f_1 == -1)
	{
		fLocal_53 = func_137(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_55.f_1 - SYSTEM::TIMERA());
		if (iVar4 < 5000)
		{
			fLocal_53 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_53 = func_137(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_53 = func_137(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_53 = func_137(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_53 = func_137(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_53 = func_137(iVar0, 0.13f, 0.06f);
		}
	}
	func_138(iVar0, fLocal_53);
}

float func_137(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1);
	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		if (TASK::IS_PED_SPRINTING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_21(fVar0, -1f, 1f);
	return fVar0;
}

void func_138(int iParam0, float fParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		PED::_0x288DF530C92DAD6F(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), fParam1);
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		VEHICLE::SET_VEHICLE_STEER_BIAS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), fParam1);
	}
}

void func_139()
{
	int iVar0;

	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
	{
		vLocal_60.x = 4;
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_42383[iLocal_64 /*5*/].f_3 >= 10 || Global_42383[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_42383[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42383[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42383[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42383[iLocal_64 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_50)
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(Local_43.f_1, 0, 0);
		vLocal_60.x = 11;
		return;
	}
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (SYSTEM::TIMERA() <= Local_55.f_3)
	{
		return;
	}
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 355471868);
	if (!iVar0 == 7)
	{
		Local_55.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
	{
		vLocal_60.x = 4;
		Local_55.f_3 = -2;
		return;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
	iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
	if (iVar2 == Local_43.f_1)
	{
		func_141();
		Local_55.f_3 = -2;
		return;
	}
	TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_43.f_1, iVar1, 0);
	vLocal_60.x = 9;
	Local_55.f_3 = SYSTEM::TIMERA() + 1000;
}

void func_141()
{
	if (vLocal_60.x == 10)
	{
		return;
	}
	vLocal_60.x = 10;
	if (iLocal_48 == -1)
	{
		return;
	}
	func_167(iLocal_48, 2, 5);
	Local_55.f_4 = SYSTEM::TIMERA();
	fLocal_53 = 0f;
}

void func_142()
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		vLocal_60.x = 10;
		return;
	}
	if (SYSTEM::TIMERA() < Local_55.f_3)
	{
		return;
	}
	vLocal_60.x = 4;
	Local_55.f_3 = -2;
}

void func_143()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!bLocal_50)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		if (!bLocal_50)
		{
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
		if (!iVar0 == Local_43.f_4)
		{
			if (!bLocal_50)
			{
			}
			if (!bLocal_50)
			{
				if (!bLocal_50)
				{
				}
				TASK::TASK_LEAVE_ANY_VEHICLE(Local_43.f_1, 0, 0);
				vLocal_60.x = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_50)
			{
			}
			func_141();
			return;
		}
		if (!bLocal_50)
		{
			if (!bLocal_50)
			{
			}
			func_141();
			return;
		}
		if (!bLocal_50)
		{
		}
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_43.f_4, -1, false);
		if (iVar2 == Local_43.f_1)
		{
			func_141();
			return;
		}
		TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_43.f_1, iVar0, 0);
		vLocal_60.x = 9;
		Local_55.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!func_120())
	{
		TASK::CLEAR_PED_TASKS(Local_43.f_1);
		vLocal_60.x = 4;
		return;
	}
	if (!bLocal_50)
	{
		iVar3 = TASK::GET_SCRIPT_TASK_STATUS(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
			{
				TASK::CLEAR_PED_TASKS(Local_43.f_1);
				vLocal_60.x = 4;
				return;
			}
		}
	}
}

void func_144()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;

	if (bLocal_50)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		vLocal_60.x = 4;
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_43.f_4, false))
	{
		Local_43.f_4 = 0;
		vLocal_60.x = 4;
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_1, true) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_4, true) };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, true);
	if (fVar6 > 3f)
	{
		if (!func_107(Global_42383[iLocal_64 /*5*/].f_2))
		{
			vLocal_60.x = 12;
			return;
		}
		vLocal_60.x = 5;
		Local_55.f_2 = SYSTEM::TIMERA() + 2000;
		return;
	}
	iVar7 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_43.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_43.f_4, iVar8, false))
			{
				bVar9 = false;
			}
			else
			{
				iVar8++;
			}
		}
		else
		{
			bVar9 = false;
			iVar8 = -1;
		}
	}
	if (iVar8 == -1)
	{
		if (iVar8 == -1)
		{
			vLocal_60.x = 4;
			return;
		}
	}
	func_145();
	TASK::TASK_ENTER_VEHICLE(Local_43.f_1, Local_43.f_4, -1, iVar8, 2f, 1, 0);
	vLocal_60.x = 7;
}

void func_145()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_43.f_1))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(Local_43.f_1))
	{
		PED::RESET_PED_MOVEMENT_CLIPSET(Local_43.f_1, 0.25f);
		PED::RESET_PED_STRAFE_CLIPSET(Local_43.f_1);
		PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Local_43.f_1, 0, -8f);
		vLocal_60.f_2 = "";
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Local_43.f_1);
		PED::SET_PED_RESET_FLAG(Local_43.f_1, 200, false);
		PED::SET_PED_RESET_FLAG(Local_43.f_1, 46, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_43.f_1, true);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_43.f_1, 262144, false);
		AUDIO::SET_PED_IS_DRUNK(Local_43.f_1, false);
	}
	if (!bLocal_51)
	{
		return;
	}
	bLocal_51 = false;
}

void func_146()
{
	if (SYSTEM::TIMERA() < Local_55.f_2)
	{
		func_121();
		return;
	}
	func_147();
	Local_55.f_2 = -2;
	vLocal_60.x = 12;
}

int func_147()
{
	if (!func_114(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_51)
	{
		return 0;
	}
	func_148(Local_43.f_1);
	vLocal_60.f_2 = "";
	Global_2537071.f_4540 = 1;
	return 1;
}

void func_148(int iParam0)
{
	PED::RESET_PED_MOVEMENT_CLIPSET(iParam0, 0.25f);
	PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iParam0, 0, -8f);
	PED::SET_PED_RESET_FLAG(iParam0, 200, false);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 262144, false);
	AUDIO::SET_PED_IS_DRUNK(iParam0, false);
}

void func_149()
{
	int iVar0;

	if (Local_55 == -1)
	{
		Global_42383[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_42383[iLocal_64 /*5*/].f_3 < 3 && Global_42383[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_42383[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_42383[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_42383[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_42383[iLocal_64 /*5*/].f_2 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
	{
		vLocal_60.x = 10;
		return;
	}
	if (func_114(Local_43.f_1))
	{
		vLocal_60.x = 12;
		return;
	}
	if (Local_55 == -2)
	{
		return;
	}
	if (!func_107(Global_42383[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	vLocal_60.x = 12;
}

void func_150()
{
}

void func_151()
{
	int iVar0;
	int iVar1;

	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_42464[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_42464[iVar1 /*6*/].f_1 == iLocal_48)
			{
				func_153(iVar1);
				func_152(iVar1);
			}
			else if (Global_42464[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
				{
					if (iLocal_49 == Global_42464[iVar1 /*6*/])
					{
						func_153(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_152(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_42464[iParam0 /*6*/] = -1;
	Global_42464[iParam0 /*6*/].f_1 = -1;
	Global_42464[iParam0 /*6*/].f_2 = 6;
	Global_42464[iParam0 /*6*/].f_3 = 0;
	Global_42464[iParam0 /*6*/].f_4 = 0;
}

void func_153(int iParam0)
{
	int iVar0;

	iVar0 = Global_42464[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_174();
			break;
		case 2:
			func_157(Global_42464[iParam0 /*6*/].f_4);
			break;
		case 3:
			func_156(Global_42464[iParam0 /*6*/].f_5);
			break;
		case 4:
			func_155();
			break;
		case 5:
			func_154();
			break;
		case 0:
			break;
		case 6:
			break;
		default:
			break;
	}
}

void func_154()
{
	vLocal_60.f_1 = 2;
}

void func_155()
{
	int iVar0;

	Global_42383[iLocal_64 /*5*/].f_4++;
	if (Local_55 == -1)
	{
		Global_42383[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_42383[iLocal_64 /*5*/].f_4 < 9 && Global_42383[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_42383[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_42383[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_42383[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_42383[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_42383[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_156(int iParam0)
{
	int iVar0;

	Global_42383[iLocal_64 /*5*/].f_3 = (Global_42383[iLocal_64 /*5*/].f_3 + iParam0);
	if (Local_55 == -1)
	{
		Global_42383[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_42383[iLocal_64 /*5*/].f_3 < 3 && Global_42383[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_42383[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_42383[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_42383[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_42383[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_42383[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_157(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_55.f_1 = (Local_55.f_1 + iParam0);
	Local_55 = (Local_55 + iParam0);
}

void func_158()
{
	int iVar0;

	if (!bLocal_50)
	{
		iLocal_63 = -1;
		return;
	}
	if (iLocal_63 < 0)
	{
		iLocal_63 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	if (iVar0 != iLocal_63)
	{
		if (iVar0 > iLocal_63)
		{
			func_159();
		}
		iLocal_63 = iVar0;
		return;
	}
}

void func_159()
{
}

void func_160()
{
	if (!Local_55 == -1)
	{
		if (!Local_55 == -2)
		{
			if (SYSTEM::TIMERA() >= Local_55)
			{
				func_145();
				Local_55 = -2;
				vLocal_60.x = 12;
			}
		}
		if (SYSTEM::TIMERA() > Local_55.f_1)
		{
			func_174();
		}
	}
}

void func_161(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42464[iVar0 /*6*/])
		{
			func_152(iVar0);
		}
		iVar0++;
	}
}

void func_162()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	vLocal_60.x = 4;
	if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
		{
			vLocal_60.x = 10;
		}
	}
	if (bLocal_50)
	{
		func_165();
		func_11(71, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = func_80(2057, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_163(iVar1);
			}
			func_77(2057, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			STATS::STAT_GET_INT(joaat("SP0_SP_NUM_TIMES_DRUNK"), &iVar2, -1);
			STATS::STAT_GET_INT(joaat("SP1_SP_NUM_TIMES_DRUNK"), &iVar3, -1);
			STATS::STAT_GET_INT(joaat("SP2_SP_NUM_TIMES_DRUNK"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_163(iVar6);
			}
			switch (func_67())
			{
				case 0:
					STATS::STAT_SET_INT(joaat("SP0_SP_NUM_TIMES_DRUNK"), iVar2 + 1, true);
					break;
				case 1:
					STATS::STAT_SET_INT(joaat("SP1_SP_NUM_TIMES_DRUNK"), iVar3 + 1, true);
					break;
				case 2:
					STATS::STAT_SET_INT(joaat("SP2_SP_NUM_TIMES_DRUNK"), iVar4 + 1, true);
					break;
			}
		}
		vLocal_60.f_1 = 1;
		return;
	}
	vLocal_60.f_1 = 12;
	if (Local_55 == -1)
	{
		Global_42383[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_42383[iLocal_64 /*5*/].f_3 < 3 && Global_42383[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_42383[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_55 - SYSTEM::TIMERA());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_42383[iLocal_64 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_42383[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_42383[iLocal_64 /*5*/].f_2 = 1;
		}
	}
}

void func_163(int iParam0)
{
	int iVar0;

	iVar0 = func_164(81);
	Global_2414418[iVar0 /*83*/] = 81;
	Global_2414418[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2414418[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_164(int iParam0)
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

void func_165()
{
}

void func_166()
{
	Local_55 = Local_43.f_2;
	Local_55.f_1 = Local_43.f_3;
	Local_55.f_2 = -2;
	Local_55.f_3 = -2;
}

void func_167(int iParam0, int iParam1, int iParam2)
{
	func_168(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_168(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_170(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_169();
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

int func_169()
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

bool func_170(int iParam0, int iParam1, int iParam2)
{
	if (func_171(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_171(int iParam0, int iParam1, int iParam2)
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

void func_172()
{
	int iVar0;

	bLocal_50 = false;
	if (Local_43.f_1 == PLAYER::PLAYER_PED_ID())
	{
		bLocal_50 = true;
		Global_42595 = 1;
		Global_42597++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
	{
		iVar0 = func_70(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "AMANDA_DRUNK");
				break;
			case 19:
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "LAMAR_DRUNK");
				break;
		}
	}
}

void func_173()
{
	if (!iLocal_48 == -1)
	{
		return;
	}
	iLocal_48 = func_117(Local_43.f_1);
	if (iLocal_48 == -1)
	{
		return;
	}
	iLocal_64 = func_116(iLocal_48);
}

void func_174()
{
	int iVar0;

	if (!func_34(0) && !func_34(3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
		{
			iVar0 = func_70(Local_43.f_1);
			if (Global_42383[iLocal_64 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_176(Local_43.f_1, "POST_STONED", 24);
						break;
					case 1:
						func_176(Local_43.f_1, "POST_STONED", 24);
						break;
					case 2:
						func_176(Local_43.f_1, "POST_STONED", 24);
						break;
				}
			}
			switch (iVar0)
			{
				case 17:
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "AMANDA_NORMAL");
					break;
				case 19:
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "LAMAR_NORMAL");
					break;
			}
		}
	}
	func_145();
	if (bLocal_50)
	{
		Global_42595 = 0;
	}
	func_175();
	STREAMING::REMOVE_ANIM_DICT(func_113(0));
	STREAMING::REMOVE_ANIM_DICT(func_113(2));
	STREAMING::REMOVE_ANIM_DICT(func_113(1));
	Global_1671188 = 0;
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("APPEMAIL")) > 0)
	{
		func_41(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_175()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
	{
		return;
	}
	iVar0 = Local_43.f_1;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 || !PLAYER::PLAYER_PED_ID() == Local_43.f_1)
	{
		return;
	}
	fLocal_53 = 0f;
	func_138(iVar0, 0f);
}

void func_176(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_177(iParam2), true);
}

int func_177(int iParam0)
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

