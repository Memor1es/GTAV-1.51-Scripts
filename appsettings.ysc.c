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
	int iLocal_18[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = false;
	bool bLocal_51 = false;
	bool bLocal_52 = false;
	bool bLocal_53 = false;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = false;
	bool bLocal_57 = false;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	bool bLocal_62 = false;
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

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
	fLocal_58 = 0.82f;
	fLocal_59 = 0.42f;
	fLocal_60 = 0f;
	fLocal_61 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_46(Global_19467, "SET_DATA_SLOT_EMPTY", 13f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_45();
	if (Global_19431 == 0)
	{
		fLocal_63 = 0.75f;
		fLocal_64 = 0.8f;
	}
	else
	{
		fLocal_63 = 0.65f;
		fLocal_64 = 0.77f;
	}
	Global_8161[Global_19486 /*2811*/][2 /*281*/].f_259 = Global_111638.f_14046[Global_19486 /*20*/].f_6;
	Global_8161[Global_19486 /*2811*/][4 /*281*/].f_259 = Global_111638.f_14046[Global_19486 /*20*/].f_9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_76622)
		{
			Global_8161[Global_19486 /*2811*/][1 /*281*/].f_259 = func_44(1198, -1, 0);
			Global_8161[Global_19486 /*2811*/][2 /*281*/].f_259 = func_44(2028, -1, 0);
			Global_8161[Global_19486 /*2811*/][4 /*281*/].f_259 = func_44(2027, -1, 0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(&(Global_111638.f_14046[Global_19486 /*20*/].f_11), &(Global_8161[Global_19486 /*2811*/][1 /*281*/].f_144[iVar0 /*6*/])))
		{
			Global_8161[Global_19486 /*2811*/][1 /*281*/].f_259 = iVar0;
		}
		iVar0++;
	}
	if (Global_76622)
	{
		Global_111638.f_14046[3 /*20*/].f_10 = func_44(1197, -1, 0);
	}
	Global_8161[Global_19486 /*2811*/][3 /*281*/].f_259 = Global_111638.f_14046[Global_19486 /*20*/].f_10;
	func_43();
	if (Global_76622)
	{
		Global_8161[3 /*2811*/][0 /*281*/] = 190;
		Global_8161[3 /*2811*/][0 /*281*/].f_1 = 190;
		StringCopy(&(Global_8161[3 /*2811*/][0 /*281*/].f_2), "CELL_701", 16);
		Global_8161[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_8161[3 /*2811*/][0 /*281*/].f_280 = 1;
		StringCopy(&(Global_8161[3 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_704", 16);
		Global_8161[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_8161[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_8161[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		StringCopy(&(Global_8161[3 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_703", 16);
		Global_8161[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_8161[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_8161[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		StringCopy(&(Global_8161[3 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801", 16);
		Global_8161[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_8161[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_8161[3 /*2811*/][0 /*281*/].f_104[2] = 26;
		if (func_44(2090, -1, 0) == 0)
		{
			Global_8161[3 /*2811*/][0 /*281*/].f_259 = 0;
		}
		else
		{
			Global_8161[3 /*2811*/][0 /*281*/].f_259 = 1;
		}
	}
	func_33();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (bLocal_50)
		{
			if (SYSTEM::TIMERB() > 3500)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				}
				bLocal_50 = false;
			}
		}
		if (Global_19486.f_1 != 9)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					func_28();
					func_26();
					break;
				case 8:
					if (bLocal_56 || bLocal_57)
					{
						if (bLocal_56)
						{
							bLocal_56 = false;
							SYSTEM::SETTIMERB(0);
							Global_111638.f_14046.f_82 = 1;
							bLocal_57 = true;
						}
						else if (SYSTEM::TIMERB() > 7500)
						{
							bLocal_57 = false;
							HUD::CLEAR_HELP(true);
						}
					}
					else
					{
						func_28();
						func_12();
						if (bLocal_53)
						{
							func_11();
						}
						if (func_10(2, Global_19454, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							{
								AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
							}
							bLocal_53 = false;
							func_9();
							Global_19464 = 1;
							func_46(Global_19467, "SET_DATA_SLOT_EMPTY", 13f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							func_33();
							if (Global_19486.f_1 > 3)
							{
								Global_19486.f_1 = 7;
							}
						}
					}
					break;
				default:
					break;
			}
			if (func_8())
			{
				func_2();
			}
		}
		else
		{
			Global_19488 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

bool func_1()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return true;
	}
	return false;
}

void func_2()
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
	}
	if (bLocal_56)
	{
		HUD::CLEAR_HELP(true);
	}
	if (Global_111638.f_14046.f_83 == 0 || Global_111638.f_14046.f_82 == 0)
	{
		func_3();
	}
	MISC::SET_GAME_PAUSED(false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3()
{
	if (Global_8161[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_7356, 25);
	MISC::SET_BIT(&Global_7357, 11);
}

bool func_4(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_5(iParam0))
	{
		return false;
	}
	return true;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, Global_41431);
}

int func_6(int iParam0, int iParam1)
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

void func_7()
{
	func_45();
	Global_8161[Global_19486 /*2811*/][0 /*281*/].f_124[2] = 1;
}

bool func_8()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return true;
	}
	return false;
}

void func_9()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_19475, true);
	}
}

bool func_10(int iParam0, int iParam1, int iParam2)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && PAD::_IS_INPUT_DISABLED(2)))
			{
				return false;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_11()
{
	int iVar0;

	iLocal_54 = MISC::GET_GAME_TIMER();
	iVar0 = (iLocal_54 - iLocal_55);
	if ((iVar0 % 600) <= 300 && iVar0 < 3000)
	{
		PAD::SET_PAD_SHAKE(0, 100, 100);
	}
}

void func_12()
{
	int iVar0;
	var uVar1;
	struct<13> Var17;
	int iVar30;

	if (iLocal_43 == 1)
	{
		if (bLocal_52)
		{
			iLocal_54 = MISC::GET_GAME_TIMER();
			if ((iLocal_54 - iLocal_55) > 1000)
			{
				bLocal_51 = true;
				bLocal_52 = false;
			}
		}
		if (PAD::_IS_INPUT_DISABLED(2))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
			{
				iLocal_65 = 1;
				iLocal_66 = 0;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
			{
				iLocal_65 = 0;
				iLocal_66 = 1;
			}
		}
		if ((((func_10(2, Global_19462, 0) || func_10(2, Global_19463, 0)) || bLocal_51) || iLocal_65 == 1) || iLocal_66 == 1)
		{
			iLocal_65 = 0;
			iLocal_66 = 0;
			bLocal_51 = false;
			bLocal_52 = false;
			SYSTEM::SETTIMERB(0);
			bLocal_50 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "GET_CURRENT_SELECTION");
			iLocal_41 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_41))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_47 = iLocal_18[GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_41)];
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				SYSTEM::WAIT(100);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (MISC::ARE_STRINGS_EQUAL(&(Global_8161[Global_19486 /*2811*/][1 /*281*/].f_144[iLocal_47 /*6*/]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_8161[Global_19486 /*2811*/][1 /*281*/].f_144[iLocal_47 /*6*/]), PLAYER::PLAYER_PED_ID(), true);
						}
					}
				}
			}
		}
	}
	if (Global_19464 == 0)
	{
		if (func_10(2, Global_19455, 0))
		{
			func_23();
			Global_19464 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "GET_CURRENT_SELECTION");
			iLocal_41 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_41))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_46 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_41);
			if (iLocal_46 < 0)
			{
				iLocal_46 = 0;
			}
			Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
			if (iLocal_43 == 2)
			{
				iVar0 = Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_259;
				Global_111638.f_14046[Global_19486 /*20*/].f_6 = Global_8161[Global_19486 /*2811*/][2 /*281*/].f_260[iVar0];
				func_46(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486 /*20*/].f_6), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				if (Global_76622)
				{
					Global_4270041 = Global_8161[3 /*2811*/][2 /*281*/].f_259;
					func_20(2028, Global_8161[3 /*2811*/][2 /*281*/].f_259, -1, 1, 0);
					func_46(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_4270041), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				}
				else
				{
					func_46(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486 /*20*/].f_6), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				}
				func_19();
				func_18(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(23), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
				func_18(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_46), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_46(Global_19467, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_46), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			if (iLocal_43 == 4)
			{
				Global_111638.f_14046[Global_19486 /*20*/].f_9 = Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_259;
				if (Global_76622)
				{
					Global_4270042 = Global_8161[3 /*2811*/][4 /*281*/].f_259;
					func_20(2027, Global_8161[3 /*2811*/][4 /*281*/].f_259, -1, 1, 0);
					if (Global_4270042 == 0)
					{
						Var17 = { func_17(PLAYER::PLAYER_ID()) };
						iVar30 = 0;
						if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0)
						{
						}
						if ((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var17) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)) && Global_4270045 == 0)
						{
							SYSTEM::SETTIMERA(0);
							while (!NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var17, &uVar1) && SYSTEM::TIMERA() < 3000)
							{
								SYSTEM::WAIT(0);
								if (SYSTEM::TIMERA() > 2999)
								{
									iVar30 = 1;
								}
							}
							if (iVar30 == 0)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_BACKGROUND_CREW_IMAGE");
								GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar1);
								GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						}
						else
						{
							func_46(Global_19467, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						}
					}
					else
					{
						func_46(Global_19467, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4270042), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					}
				}
				else
				{
					func_46(Global_19467, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486 /*20*/].f_9), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				}
				func_18(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(23), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
				func_18(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_46), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_46(Global_19467, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_46), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			if (iLocal_43 == 1)
			{
				Global_111638.f_14046[Global_19486 /*20*/].f_11 = { Global_8161[Global_19486 /*2811*/][1 /*281*/].f_144[Global_8161[Global_19486 /*2811*/][1 /*281*/].f_259 /*6*/] };
				if (Global_76622)
				{
					func_20(1198, Global_8161[3 /*2811*/][1 /*281*/].f_259, -1, 1, 0);
				}
				func_18(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(18), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
				func_18(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_46), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_46(Global_19467, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_46), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			if (iLocal_43 == 3)
			{
				Global_111638.f_14046[Global_19486 /*20*/].f_10 = Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_259;
				if (Global_76622)
				{
					func_20(1197, Global_111638.f_14046[3 /*20*/].f_10, -1, 1, 0);
				}
				if (Global_111638.f_14046[Global_19486 /*20*/].f_10 == 1)
				{
					bLocal_53 = true;
					iLocal_55 = MISC::GET_GAME_TIMER();
				}
				else
				{
					bLocal_53 = false;
				}
			}
			if (iLocal_43 == 0)
			{
				if (Global_76622 == 1)
				{
					Global_8161[3 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					func_18(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(19), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
					func_18(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_46), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
					iLocal_45 = iLocal_46;
					func_46(Global_19467, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_46), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					func_20(2090, Global_8161[3 /*2811*/][iLocal_43 /*281*/].f_259, -1, 1, 0);
				}
				else
				{
					Global_8161[0 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					Global_8161[1 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					Global_8161[2 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_41431 == 15)
						{
							if (Global_111638.f_14046.f_82 == 0)
							{
								HUD::CLEAR_HELP(true);
								func_16("CELL_7050");
								if (fLocal_63 == fLocal_64)
								{
								}
								bLocal_56 = true;
							}
							else
							{
								func_46(Global_19467, "SET_SLEEP_MODE", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
								MISC::SET_BIT(&Global_7356, 25);
								MISC::SET_BIT(&Global_7357, 11);
								if (Global_111638.f_14046.f_83 == 0)
								{
									HUD::CLEAR_HELP(true);
									func_15("CELL_7051", -1);
									Global_111638.f_14046.f_83 = 1;
								}
							}
						}
					}
					else
					{
						func_46(Global_19467, "SET_SLEEP_MODE", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						MISC::CLEAR_BIT(&Global_7356, 25);
						MISC::SET_BIT(&Global_7357, 11);
					}
				}
			}
			func_13(Global_19467, "SET_HEADER", &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_14(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_14(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_14(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_14(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_14(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_14(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_15(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_16(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

struct<13> func_17(int iParam0)
{
	struct<13> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_18(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_14(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_14(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_14(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_14(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_14(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_19()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_19486 == 0)
		{
			switch (Global_111638.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				default:
					break;
			}
		}
		if (Global_19486 == 1)
		{
			switch (Global_111638.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				default:
					break;
			}
		}
		if (Global_19486 == 2)
		{
			switch (Global_111638.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				default:
					break;
			}
		}
		if (Global_19486 == 3)
		{
			switch (Global_4270041)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				default:
					break;
			}
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_21(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_22();
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

int func_22()
{
	return Global_1312745;
}

void func_23()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_19475, true);
		func_24();
	}
}

void func_24()
{
	if (func_25())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

bool func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_76622)
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4270043 || iVar2)
	{
		return true;
	}
	return true;
}

void func_26()
{
	if (Global_19464 == 0)
	{
		if (func_10(2, Global_19455, 0))
		{
			func_23();
			Global_19464 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "GET_CURRENT_SELECTION");
			iLocal_41 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_41))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_44 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_41);
			iLocal_43 = iLocal_18[iLocal_44];
			switch (iLocal_43)
			{
				case 0:
					if (Global_76622 == 0)
					{
						if (Global_41431 == 15)
						{
							if (Global_111638.f_14046.f_82 == 0)
							{
								HUD::CLEAR_HELP(true);
								func_16("CELL_7050");
								if (fLocal_63 == fLocal_64)
								{
								}
								bLocal_56 = true;
							}
						}
					}
					break;
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
			}
			if (Global_19486.f_1 > 3)
			{
				Global_19486.f_1 = 8;
			}
			func_27();
			bLocal_52 = true;
			iLocal_55 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_27()
{
	int iVar0[19];
	int iVar20;
	struct<13> Var21;
	int iVar34;
	int iVar35;

	func_46(Global_19467, "SET_DATA_SLOT_EMPTY", 22f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	iLocal_39 = 0;
	iVar20 = 0;
	if (Global_76622)
	{
		StringCopy(&(Global_8161[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB", 16);
		Var21 = { func_17(PLAYER::PLAYER_ID()) };
		if (!NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var21))
		{
			StringCopy(&(Global_8161[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840", 16);
		}
	}
	while (iVar20 < 19)
	{
		iVar34 = 0;
		iVar35 = 18;
		Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_84[iVar35] = 5000;
		while (iVar34 < 19)
		{
			if (Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_124[iVar34] == 1)
			{
				if (iVar0[iVar34] == 0)
				{
					if (Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_84[iVar34] < Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_84[iVar35])
					{
						iVar35 = iVar34;
						func_18(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar20), SYSTEM::TO_FLOAT(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_104[iVar35]), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar34++;
		}
		iLocal_18[iVar20] = iVar35;
		iVar0[iVar35] = 1;
		if (MISC::ARE_STRINGS_EQUAL(&(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/]), &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/])))
		{
			iLocal_48 = iVar20;
			if (iLocal_48 < 0)
			{
				iLocal_48 = 0;
			}
			if ((iLocal_43 == 1 || iLocal_43 == 4) || iLocal_43 == 2)
			{
				func_18(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar20), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iVar20;
			}
			if (iLocal_43 == 0 && Global_76622 == 1)
			{
				func_18(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar20), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iVar20;
			}
		}
		if (Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_124[iVar20] == 1)
		{
			iLocal_39++;
		}
		iVar20++;
	}
	func_46(Global_19467, "DISPLAY_VIEW", 22f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_13(Global_19467, "SET_HEADER", &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_19474)
	{
		func_18(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_7356, 17);
}

void func_28()
{
	if (bLocal_62)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			bLocal_62 = false;
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_40 > 0)
			{
				iLocal_40 = (iLocal_40 - 1);
			}
			func_31();
		}
		if (func_10(2, 180, 0))
		{
			iLocal_40++;
			if (iLocal_40 == iLocal_39)
			{
				iLocal_40 = 0;
			}
			func_29();
		}
	}
	if (bLocal_62 == 0)
	{
		if (func_10(2, Global_19462, 0))
		{
			if (iLocal_40 > 0)
			{
				iLocal_40 = (iLocal_40 - 1);
			}
			func_31();
			bLocal_62 = true;
			SYSTEM::SETTIMERA(0);
		}
		if (func_10(2, Global_19463, 0))
		{
			iLocal_40++;
			if (iLocal_40 == iLocal_39)
			{
				iLocal_40 = 0;
			}
			func_29();
			bLocal_62 = true;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_29()
{
	func_46(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
	func_30();
}

void func_30()
{
	if (func_25())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
	}
}

void func_31()
{
	func_46(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
	func_32();
}

void func_32()
{
	if (func_25())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
	}
}

void func_33()
{
	int iVar0[20];
	int iVar21;
	int iVar22;
	int iVar23;

	iLocal_39 = 0;
	iVar21 = 0;
	while (iVar21 < 9)
	{
		iVar22 = 0;
		iVar23 = 9;
		Global_8161[Global_19486 /*2811*/][iVar23 /*281*/] = 5000;
		if (MISC::GET_PROFILE_SETTING(2) == 0)
		{
			Global_8161[Global_19486 /*2811*/][3 /*281*/].f_280 = 0;
		}
		else
		{
			Global_8161[Global_19486 /*2811*/][3 /*281*/].f_280 = 1;
		}
		while (iVar22 < 9)
		{
			if (Global_8161[Global_19486 /*2811*/][iVar22 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar22] == 0)
				{
					if (Global_8161[Global_19486 /*2811*/][iVar22 /*281*/] < Global_8161[Global_19486 /*2811*/][iVar23 /*281*/])
					{
						if (Global_76622)
						{
							if (iVar22 == 0)
							{
								iVar23 = iVar22;
								func_42(iVar22, iVar23);
								func_18(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar21), SYSTEM::TO_FLOAT(iLocal_49), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar23 = iVar22;
								func_42(iVar22, iVar23);
								func_18(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar21), SYSTEM::TO_FLOAT(iLocal_49), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_34() == 2)
						{
							if (iVar22 == 4 || iVar22 == 5)
							{
							}
							else
							{
								iVar23 = iVar22;
								func_42(iVar22, iVar23);
								func_18(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar21), SYSTEM::TO_FLOAT(iLocal_49), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar22 == 5)
						{
						}
						else
						{
							iVar23 = iVar22;
							func_42(iVar22, iVar23);
							func_18(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar21), SYSTEM::TO_FLOAT(iLocal_49), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar22++;
		}
		iLocal_18[iVar21] = iVar23;
		iVar0[iVar23] = 1;
		if (Global_8161[Global_19486 /*2811*/][iVar21 /*281*/].f_280 == 1)
		{
			iLocal_39++;
		}
		iVar21++;
	}
	func_46(Global_19467, "DISPLAY_VIEW", 13f, SYSTEM::TO_FLOAT(iLocal_44), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_13(Global_19467, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_19474)
	{
		func_18(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_7356, 17);
}

int func_34()
{
	if (Global_76622)
	{
		Global_19486 = 3;
	}
	else
	{
		Global_19486 = func_35();
	}
	if (Global_19486 > 3)
	{
		Global_19486 = 3;
	}
	return Global_111638.f_14046[Global_19486 /*20*/].f_7;
}

var func_35()
{
	func_36();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_36()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_40(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_39(PLAYER::PLAYER_PED_ID());
			if (func_38(iVar0) && (!func_37(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_38(Global_111638.f_2358.f_539.f_4321))
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

bool func_37(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)
{
	if (func_38(iParam0))
	{
		return func_41(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_41(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_42(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (Global_76622)
			{
				iLocal_49 = 19;
			}
			else if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
			{
				iLocal_49 = 26;
			}
			else
			{
				iLocal_49 = 25;
			}
			break;
		case 3:
			if (Global_8161[Global_19486 /*2811*/][3 /*281*/].f_259 == 1)
			{
				iLocal_49 = 20;
			}
			else
			{
				iLocal_49 = 21;
			}
			break;
		default:
			iLocal_49 = Global_8161[Global_19486 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

void func_43()
{
	if (Global_41431 != 15)
	{
		func_45();
		Global_8161[Global_19486 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_21(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_45()
{
	if (func_37(14))
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
		Global_19486 = func_35();
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

void func_46(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

