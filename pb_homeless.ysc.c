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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	vector3 vLocal_47 = { 0f, 0f, 0f };
	vector3 vLocal_50 = { 0f, 0f, 0f };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
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
	vLocal_47 = { ScriptParam_0.f_1[0 /*3*/] };
	iLocal_44 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	func_28();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_28();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (func_8(3))
			{
				switch (iLocal_43)
				{
					case 0:
						if (iLocal_45 == 1)
						{
							iLocal_43 = 1;
						}
						else
						{
							func_7();
						}
						break;
					case 1:
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
						{
							if (iLocal_46 == 0)
							{
								if (func_2(iLocal_54, 0, 1056964608 /* Float: 0.5f */, 0, 0, 0))
								{
									iLocal_46 = 1;
								}
							}
						}
						if (iLocal_56 == 0)
						{
							func_1();
						}
						break;
				}
			}
			else
			{
				func_28();
			}
		}
		else
		{
			func_28();
		}
	}
}

void func_1()
{
	if (SYSTEM::TIMERB() > 10000)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_47, 10f, 10f, 10f, false, true, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			SYSTEM::SETTIMERB(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
			{
				if (iLocal_44 == 0)
				{
					if (iLocal_46 == 0)
					{
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_57);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "amb@drug_dealer", "beckon_03", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_57);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_57);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_57);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_54, iLocal_55, 0);
					if (iLocal_46 == 0)
					{
					}
					TASK::TASK_WANDER_STANDARD(iLocal_55, 40000f, 0);
					iLocal_44 = 0;
				}
			}
		}
	}
}

bool func_2(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, float fParam5)
{
	float fVar0;

	if (iParam4 == 2)
	{
		fVar0 = 150f;
	}
	else if (iParam4 == 1)
	{
		fVar0 = 100f;
	}
	else if (iParam4 == 0)
	{
		fVar0 = 40f;
	}
	switch (iParam3)
	{
		case 2:
			if (func_3(iParam0, func_6(iParam1, 2, fParam2), fVar0, fParam2, fParam5))
			{
				return true;
			}
			if (func_3(iParam0, func_6(iParam1, 3, fParam2), fVar0, fParam2, fParam5))
			{
				return true;
			}
			if (func_3(iParam0, func_6(iParam1, 5, fParam2), fVar0, fParam2, fParam5))
			{
				return true;
			}
			if (func_3(iParam0, func_6(iParam1, 6, fParam2), fVar0, fParam2, fParam5))
			{
				return true;
			}
			if (func_3(iParam0, func_6(iParam1, 7, fParam2), fVar0, fParam2, fParam5))
			{
				return true;
			}
			if (func_3(iParam0, func_6(iParam1, 8, fParam2), fVar0, fParam2, fParam5))
			{
				return true;
			}
		case 1:
			if (func_3(iParam0, func_6(iParam1, 1, fParam2), fVar0, fParam2, fParam5))
			{
				return true;
			}
		case 0:
			if (func_3(iParam0, func_6(iParam1, 0, fParam2), fVar0, fParam2, fParam5))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_3(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6)
{
	float fVar0;
	vector3 vVar1;

	if (fParam5 < 1f)
	{
		fVar0 = (1f + 0.5f);
	}
	else
	{
		fVar0 = (fParam5 + 0.5f);
	}
	vVar1 = { (fParam5 + 0.2f), (fParam5 + 0.2f), fVar0 };
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if ((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vParam1), vVar1, false, true, 0) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iParam0, true), fParam4)) && func_5(bParam6)) && !PED::IS_PED_RAGDOLL(iParam0)) && !TASK::IS_PED_GETTING_UP(iParam0))
		{
			func_4(iParam0, 1);
			return true;
		}
		else
		{
			func_4(iParam0, 0);
		}
	}
	return false;
}

void func_4(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
	}
}

bool func_5(bool bParam0)
{
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if (bParam0)
		{
			if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) == 1f || TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) == 0f)
			{
				return true;
			}
		}
		else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) == 1f)
		{
			return true;
		}
	}
	return false;
}

Vector3 func_6(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		case 1:
			if (iParam0 == 3)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		case 2:
			if (iParam0 == 2)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		case 3:
			if (iParam0 == 1)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		case 5:
			if (iParam0 == 1)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
		case 6:
			if (iParam0 == 0)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
		case 7:
			if (iParam0 == 3)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
		case 8:
			if (iParam0 == 2)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
	}
	if (fParam2 < 0f)
	{
		fParam2 = (fParam2 * -1f);
	}
	return vVar0;
}

void func_7()
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_47, 50f, 50f, 50f, false, true, 0))
	{
		STREAMING::REQUEST_MODEL(joaat("A_M_O_TRAMP_01"));
		STREAMING::REQUEST_MODEL(joaat("G_M_Y_STRPUNK_01"));
		STREAMING::REQUEST_ANIM_DICT("amb@drug_dealer");
		while ((!STREAMING::HAS_MODEL_LOADED(joaat("A_M_O_TRAMP_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_STRPUNK_01"))) || !STREAMING::HAS_ANIM_DICT_LOADED("amb@drug_dealer"))
		{
			SYSTEM::WAIT(0);
		}
		PED::ADD_RELATIONSHIP_GROUP("homeless", &iLocal_53);
		vLocal_50.f_2 = (vLocal_47.z - 1f);
		iLocal_54 = PED::CREATE_PED(19, joaat("A_M_O_TRAMP_01"), vLocal_47.x, vLocal_47.y, vLocal_50.z, 0f, true, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_54, iLocal_53);
		if (iLocal_44 == 1)
		{
			vLocal_50 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_54, 0.8f, 0.8f, -1f) };
			iLocal_55 = PED::CREATE_PED(5, joaat("G_M_Y_STRPUNK_01"), vLocal_50, 0f, true, true);
			PED::ADD_RELATIONSHIP_GROUP("homeless", &iLocal_53);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_55, iLocal_53);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_57);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, vLocal_50, 0);
				TASK::TASK_PLAY_ANIM(0, "amb@drug_dealer", "beckon_01", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_57);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_57);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_57);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_57);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, vLocal_47, 0);
				TASK::TASK_PLAY_ANIM(0, "amb@drug_dealer", "beckon_02", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_57);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_55, iLocal_57);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_57);
			}
		}
		iLocal_45 = 1;
	}
}

bool func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			if (func_27(6) || func_27(7))
			{
				return true;
			}
			else
			{
				return func_8(3);
			}
			break;
		case 2:
			return true;
		case 3:
			if (func_25(5))
			{
				if (func_9(4))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_9(int iParam0)
{
	int iVar0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_20();
				if (!func_19(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_18()) || Global_110685) || Global_30770) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_13()) || func_12()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_18()) || Global_30770) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_18()) || Global_110685) || Global_30770) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_18()) || Global_110685) || Global_30770) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_12()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_18() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_16(8, -1)) || func_12()) || func_11()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_16(8, -1) || func_15()) || func_14()) || func_11()) || func_10())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_18()) || Global_30770) || func_17()) || func_16(8, -1)) || func_14()) || func_13()) || func_12()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_18()) || func_14()) || Global_110685) || Global_30770) || func_17()) || Global_42596) || func_16(8, -1)) || func_13()) || func_11()) || func_12()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_18()) || Global_110685) || Global_30770) || func_17()) || func_16(8, -1)) || func_13()) || func_11()) || func_15()) || func_14()) || func_12())
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

bool func_10()
{
	return Global_98783.f_1;
}

bool func_11()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_12()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_13()
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

bool func_14()
{
	return Global_98796.f_346 > 0;
}

bool func_15()
{
	return Global_98796.f_345 > 0;
}

bool func_16(int iParam0, int iParam1)
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

bool func_17()
{
	return Global_1312877;
}

bool func_18()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20()
{
	func_21();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_21()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_23(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_22(PLAYER::PLAYER_PED_ID());
			if (func_19(iVar0) && (!func_27(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_19(Global_111638.f_2358.f_539.f_4321))
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

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_19(iParam0))
	{
		return func_24(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_24(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_25(int iParam0)
{
	return func_26(iParam0, Global_41431);
}

int func_26(int iParam0, int iParam1)
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

bool func_27(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_28()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

