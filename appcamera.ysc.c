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
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_33[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_47 = 0;
	char* sLocal_48[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	bool bLocal_62 = false;
	bool bLocal_63 = false;
	bool bLocal_64 = false;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_70 = { 0f, 0f, 0f };
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	vector3 vLocal_78 = { 0f, 0f, 0f };
	vector3 vLocal_81 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	vector3 vLocal_87 = { 0f, 0f, 0f };
	vector3 vLocal_90 = { 0f, 0f, 0f };
	vector3 vLocal_93 = { 0f, 0f, 0f };
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	bool bLocal_105 = false;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	float fLocal_114 = 0f;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	bool bLocal_118 = false;
	bool bLocal_119 = false;
	bool bLocal_120 = false;
	bool bLocal_121 = false;
	bool bLocal_122 = false;
	bool bLocal_123 = false;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	bool bLocal_126 = false;
	bool bLocal_127 = false;
	bool bLocal_128 = false;
	bool bLocal_129 = false;
	int iLocal_130 = 0;
	bool bLocal_131 = false;
	bool bLocal_132 = false;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	bool bLocal_142 = false;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	char cLocal_145[16] = "";
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	bool bLocal_150 = false;
	bool bLocal_151 = false;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
	float fLocal_163 = 0f;
	float fLocal_164 = 0f;
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
	iLocal_59 = 1;
	bLocal_62 = true;
	bLocal_63 = true;
	fLocal_73 = 0f;
	fLocal_74 = 172f;
	fLocal_77 = 0.7f;
	iLocal_137 = 1200;
	iLocal_138 = 1200;
	iLocal_139 = 166;
	fLocal_157 = 0.5f;
	fLocal_158 = 0.85f;
	fLocal_159 = 0.5f;
	fLocal_160 = -0.25f;
	fLocal_161 = 0.25f;
	fLocal_162 = 0.3f;
	fLocal_163 = 0.3f;
	fLocal_164 = 0.075f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
	{
		fLocal_77 = 1f;
	}
	else
	{
		fLocal_77 = 0.7f;
	}
	if (!func_161())
	{
		Global_4268489 = 99;
		Global_4268490 = 99;
		iLocal_57 = 99;
	}
	else
	{
		Global_4268489 = 0;
		Global_4268490 = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_33[0] = "No_Border";
	sLocal_33[1] = "frame1";
	sLocal_33[2] = "frame2";
	sLocal_33[3] = "frame3";
	sLocal_33[4] = "frame4";
	sLocal_33[5] = "frame5";
	sLocal_33[6] = "frame6";
	sLocal_33[7] = "frame7";
	sLocal_33[8] = "frame8";
	sLocal_33[9] = "frame9";
	sLocal_33[10] = "frame10";
	sLocal_33[11] = "frame11";
	sLocal_33[12] = "frame12";
	sLocal_48[0] = "No_Expression";
	sLocal_48[1] = "mood_Aiming_1";
	sLocal_48[2] = "mood_Happy_1";
	sLocal_48[3] = "mood_smug_1";
	sLocal_48[4] = "mood_Injured_1";
	sLocal_48[5] = "mood_sulk_1";
	sLocal_48[6] = "mood_Angry_1";
	func_160();
	if (func_159(1, 1, !bLocal_64, 1))
	{
		bLocal_64 = true;
	}
	func_158();
	iLocal_112 = AUDIO::GET_SOUND_ID();
	if (Global_19431 == 0)
	{
		fLocal_96 = 0.207f;
		fLocal_97 = 0.158f;
		fLocal_98 = 0.207f;
		fLocal_99 = 0.335f;
	}
	else
	{
		fLocal_96 = 0.24f;
		fLocal_97 = 0.258f;
		fLocal_98 = 0.24f;
		fLocal_99 = 0.435f;
	}
	Global_21838 = 0;
	Global_21839 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			Global_21838 = 1;
		}
		if (GRAPHICS::GET_USINGNIGHTVISION())
		{
			Global_21838 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
		{
			Global_21838 = 1;
		}
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			Global_21838 = 1;
		}
		if (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
		{
			Global_21838 = 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (bLocal_131 == 1)
			{
				Global_21838 = 1;
			}
			iLocal_149 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if ((((ENTITY::GET_ENTITY_MODEL(iLocal_149) == joaat("RHINO") || ENTITY::GET_ENTITY_MODEL(iLocal_149) == joaat("CUTTER")) || ENTITY::GET_ENTITY_MODEL(iLocal_149) == joaat("SUBMERSIBLE")) || ENTITY::GET_ENTITY_MODEL(iLocal_149) == joaat("KHANJALI")) || (ENTITY::GET_ENTITY_MODEL(iLocal_149) == joaat("BARRAGE") && VEHICLE::IS_TURRET_SEAT(iLocal_149, func_157(PLAYER::PLAYER_PED_ID(), 1))))
			{
				Global_21838 = 1;
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_149, -1, false) == PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_149) > 0f)
				{
					if (!Global_76622)
					{
						if (!func_156())
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), iLocal_149, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_76622)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
		}
	}
	MISC::CLEAR_BIT(&Global_7356, 21);
	func_155(0);
	MISC::SET_BIT(&Global_7356, 17);
	if (Global_19428 == 0)
	{
		func_154();
	}
	else
	{
		iLocal_140 = UNK_0xB01F55A0FD1CFD49("camera_gallery");
		iLocal_141 = UNK_0xB01F55A0FD1CFD49("instructional_buttons");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_140) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_141))
		{
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0, 25, true);
		}
		if (Global_76622)
		{
			iLocal_144 = 2;
		}
		else
		{
			switch (func_153())
			{
				case 0:
					iLocal_144 = 2;
					break;
				case 2:
					iLocal_144 = 2;
					break;
				case 3:
					iLocal_144 = 2;
					break;
			}
		}
		func_152(iLocal_140, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_144), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		func_151(iLocal_140, "CLOSE_SHUTTER");
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "DISPLAY_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	vLocal_78 = { Global_19446 };
	vLocal_81 = { Global_19439[Global_19431 /*3*/] };
	Global_21839 = 1;
	bLocal_118 = true;
	bLocal_119 = true;
	bLocal_120 = true;
	bLocal_121 = true;
	bLocal_122 = true;
	bLocal_123 = true;
	iLocal_124 = 0;
	iLocal_125 = 0;
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 8;
	}
	if (bLocal_131 == 0)
	{
		MISC::CLEAR_BIT(&Global_7358, 3);
	}
	func_149();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	if (NETWORK::_0x76BF03FADBF154F5())
	{
	}
	if (Global_4456448.f_227352)
	{
	}
	if (Global_4456448.f_227354 == 1)
	{
		iLocal_156 = 1;
	}
	if (iLocal_156 == 1)
	{
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		PAD::SET_INPUT_EXCLUSIVE(0, Global_19455);
		PAD::SET_INPUT_EXCLUSIVE(0, 186);
		RECORDING::_STOP_RECORDING_THIS_FRAME();
		PAD::DISABLE_CONTROL_ACTION(0, 25, true);
		PAD::DISABLE_CONTROL_ACTION(0, 0, true);
		if (func_148())
		{
			if (!MISC::IS_BIT_SET(Global_4269765, 2))
			{
				MISC::SET_BIT(&Global_4269765, 2);
				func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
		}
		if (!Global_111638.f_14046.f_81)
		{
			if (!MISC::IS_BIT_SET(Global_4269765, 13))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!MISC::IS_BIT_SET(Global_7357, 28))
					{
						if ((bLocal_128 && bLocal_131 == 0) && !func_148())
						{
							MISC::SET_BIT(&Global_4269765, 13);
							Global_111638.f_14046.f_81 = 1;
							func_147("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_4456448.f_227351 == 0 && Global_4456448.f_227352 == 0)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			func_146();
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 44, true);
			PAD::DISABLE_CONTROL_ACTION(0, 47, true);
			PAD::DISABLE_CONTROL_ACTION(0, 91, true);
			PAD::DISABLE_CONTROL_ACTION(0, 92, true);
			PAD::DISABLE_CONTROL_ACTION(0, 68, true);
			if (bLocal_150 == 0)
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_19459);
			}
			PAD::SET_INPUT_EXCLUSIVE(0, Global_19456);
			if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !func_148())
			{
				iLocal_130 = 1;
				Global_19486.f_1 = 3;
				MISC::SET_GAME_PAUSED(false);
			}
			if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
			{
				Global_19486.f_1 = 3;
				MISC::SET_GAME_PAUSED(false);
			}
			if (MISC::IS_BIT_SET(Global_7357, 3))
			{
				Global_19486.f_1 = 3;
				MISC::SET_GAME_PAUSED(false);
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_135())
				{
					Global_19486.f_1 = 3;
					MISC::SET_GAME_PAUSED(false);
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
				{
					Global_19486.f_1 = 3;
					MISC::SET_GAME_PAUSED(false);
				}
				if ((PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					if (func_134())
					{
					}
					else
					{
						Global_19486.f_1 = 3;
						MISC::SET_GAME_PAUSED(false);
					}
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_76622 == 1)
					{
						Global_19486.f_1 = 3;
					}
				}
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						Global_19486.f_1 = 3;
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_133();
					iLocal_149 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_149) < 0f)
					{
						func_130(0);
					}
					if (iLocal_115 == 1)
					{
						if (iLocal_116 == 1)
						{
							if (!CAM::_0x1F2300CB7FA7B7F6())
							{
								func_130(0);
							}
						}
						else if (!CAM::_0x1F2300CB7FA7B7F6())
						{
							iLocal_116 = 1;
							SYSTEM::WAIT(0);
							RECORDING::_STOP_RECORDING_THIS_FRAME();
						}
					}
				}
				else if (Global_76622 == 0)
				{
					if (MISC::IS_BIT_SET(Global_7356, 18))
					{
						func_129();
						if ((Global_19486 == 0 || Global_19486 == 1) || Global_19486 == 2)
						{
							if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
								{
								}
								else
								{
									Global_19486.f_1 = 3;
									MISC::SET_GAME_PAUSED(false);
								}
							}
						}
					}
				}
			}
			if (bLocal_142)
			{
				func_128();
			}
			if (Global_19486.f_1 < 4)
			{
			}
			if (iLocal_153 == 0)
			{
				if (iLocal_103 == 0)
				{
					if (iLocal_104 == 0)
					{
						if (iLocal_111 == 0)
						{
							if (Global_19486.f_1 > 3)
							{
								if (bLocal_150)
								{
									func_126();
									if (Global_21843 == 0 && Global_21840 == 6)
									{
										HUD::CLEAR_FLOATING_HELP(0, true);
										HUD::BUSYSPINNER_OFF();
										bLocal_150 = false;
										func_125();
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
										{
											vLocal_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
										}
										func_124();
										iLocal_109++;
										if (func_161())
										{
											func_152(iLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
										}
										else
										{
											func_152(iLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
										}
										bLocal_132 = false;
										iLocal_133 = 0;
										iLocal_134 = 0;
										bLocal_127 = false;
										func_118();
									}
									if (Global_21840 == 0)
									{
										bLocal_150 = false;
										HUD::BUSYSPINNER_OFF();
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
										{
											vLocal_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
										}
										func_117();
										bLocal_132 = false;
										iLocal_133 = 0;
										iLocal_134 = 0;
										bLocal_127 = false;
										func_118();
										if (func_161())
										{
											if (Global_4268490 == 0)
											{
												if (!MISC::IS_BIT_SET(Global_4269765, 2))
												{
													func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
												}
											}
										}
										else if (!MISC::IS_BIT_SET(Global_4269765, 2))
										{
											func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
										}
										func_116();
										func_115(1);
									}
								}
								else if (Global_19486.f_1 != 9)
								{
									if (Global_21839 == 1)
									{
										if (Global_21838 == 0)
										{
											func_114();
										}
									}
									else if ((Global_7964 - Global_7963) > Global_7965)
									{
										if (CAM::IS_SCREEN_FADED_OUT() && func_113())
										{
											if (func_112() && bLocal_127)
											{
											}
											else if (bLocal_127 == 0)
											{
												MISC::SET_GAME_PAUSED(false);
												AUDIO::STOP_SOUND(iLocal_112);
												iLocal_143 = 0;
												if (Global_21838 == 0)
												{
													func_124();
													Global_21838 = 1;
													HUD::CLEAR_FLOATING_HELP(0, true);
													bLocal_128 = false;
													bLocal_118 = true;
													bLocal_119 = true;
													bLocal_120 = true;
													bLocal_121 = true;
													bLocal_122 = true;
													bLocal_123 = true;
													func_111(0, 0);
													func_115(0);
													iLocal_115 = 0;
													func_106(1);
													bLocal_142 = false;
													func_104(0, 1);
													func_152(Global_19467, "DISPLAY_VIEW", 16f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
													func_102(1);
												}
											}
										}
										if (func_101(2, Global_19454, 0))
										{
											if (func_148())
											{
												if (((Global_1662006 || Global_1312791) || Global_21841) || MISC::IS_BIT_SET(Global_7356, 21))
												{
												}
												else if (func_112() && bLocal_127)
												{
												}
												else if (!func_113())
												{
													if (bLocal_127 == 0)
													{
														CAM::DO_SCREEN_FADE_OUT(500);
														iLocal_143 = 0;
														func_104(1, 1);
														func_100(1);
													}
												}
											}
											else if (func_112() && bLocal_127)
											{
											}
											else if (bLocal_127 == 0)
											{
												MISC::SET_GAME_PAUSED(false);
												AUDIO::STOP_SOUND(iLocal_112);
												iLocal_143 = 0;
												if (Global_21838 == 0)
												{
													func_124();
													Global_21838 = 1;
													HUD::CLEAR_FLOATING_HELP(0, true);
													bLocal_128 = false;
													bLocal_118 = true;
													bLocal_119 = true;
													bLocal_120 = true;
													bLocal_121 = true;
													bLocal_122 = true;
													bLocal_123 = true;
													func_111(0, 0);
													func_115(0);
													iLocal_115 = 0;
													func_106(1);
													bLocal_142 = false;
													func_104(0, 1);
													func_152(Global_19467, "DISPLAY_VIEW", 16f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
												}
											}
										}
									}
									if (iLocal_101 == 0)
									{
										if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_99();
											iLocal_101 = 1;
										}
									}
									else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_99();
										iLocal_101 = 0;
									}
									if (iLocal_102 == 0)
									{
										if (MISC::IS_BIT_SET(Global_7356, 28))
										{
											func_99();
											iLocal_102 = 1;
										}
									}
									else if (!MISC::IS_BIT_SET(Global_7356, 28))
									{
										func_99();
										iLocal_102 = 0;
									}
									if (Global_21838 == 1)
									{
										func_88();
									}
									else if (Global_19486.f_1 > 4)
									{
										if (iLocal_124 == 1 && iLocal_125 == 0)
										{
											func_84();
										}
										if (iLocal_124 == 0 && iLocal_125 == 1)
										{
											func_117();
											if (iLocal_136 == 1 || iLocal_136 == 0)
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
													{
														func_151(iLocal_140, "CLOSE_SHUTTER");
														iLocal_135 = MISC::GET_GAME_TIMER();
														while (MISC::GET_GAME_TIMER() < (iLocal_135 + iLocal_137) && Global_19486.f_1 > 3)
														{
															func_146();
															func_128();
															func_83();
															RECORDING::_STOP_RECORDING_THIS_FRAME();
															SYSTEM::WAIT(0);
														}
													}
												}
												if (func_161())
												{
													if (Global_4268490 == 0)
													{
														if (!MISC::IS_BIT_SET(Global_4269765, 2))
														{
															func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
														}
													}
												}
												else if (!MISC::IS_BIT_SET(Global_4269765, 2))
												{
													func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
												}
												func_128();
												func_146();
												bLocal_132 = false;
												iLocal_133 = 0;
												iLocal_134 = 0;
												bLocal_127 = false;
												func_118();
												iLocal_136 = 0;
												func_151(iLocal_140, "OPEN_SHUTTER");
											}
											func_116();
											func_115(1);
											func_82();
										}
									}
									if (iLocal_143 == 1)
									{
										func_79();
									}
									if (bLocal_129)
									{
										if (SYSTEM::TIMERB() > 500)
										{
											bLocal_128 = true;
											bLocal_129 = false;
											MISC::SET_BIT(&Global_7356, 18);
											if (Global_21838 == 0)
											{
												func_104(1, 1);
											}
										}
									}
									if (bLocal_127 == 0)
									{
										if (bLocal_128 && Global_21838 == 0)
										{
											if ((iLocal_130 == 0 && iLocal_125 == 0) && Global_21841 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_83();
										}
									}
									else if (iLocal_124 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_19486.f_1 > 3)
					{
						if (Global_21839 == 1)
						{
							if (Global_21838 == 0)
							{
								func_114();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_155 == 1)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_152, "CELL_CAM_FW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 2)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 6)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 3)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 7)
				{
					if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_152, "", false, -1, "", "", true, 0);
					}
					if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_152, "", false, -1, "", "", true, 0);
					}
					if (MISC::IS_PC_VERSION())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_152, "", false, -1, "", "", true, 0);
					}
				}
				if (iLocal_155 == 4)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_152, "CELL_CAM_CCW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 5)
				{
					iVar0 = NETWORK::NETWORK_GET_AGE_GROUP();
					switch (iVar0)
					{
						case -1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						case 0:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						case 1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						case 2:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						default:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", false, -1, "", "", true, 0);
							break;
					}
				}
				if (iLocal_155 == 0)
				{
				}
				if (iLocal_155 == 2 || iLocal_155 == 3)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_104(0, 1);
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
					{
						iLocal_154 = 1;
					}
					if (iLocal_154 == 1)
					{
						if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_104(0, 1);
							iLocal_154 = 0;
							HUD::SET_SOCIAL_CLUB_TOUR("Gallery");
							HUD::OPEN_SOCIAL_CLUB_MENU();
						}
					}
				}
				else if (iLocal_155 == 7)
				{
					if (MISC::IS_ORBIS_VERSION())
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_104(0, 1);
							iLocal_111 = 0;
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_104(0, 1);
						iLocal_111 = 0;
					}
					if (!MISC::IS_ORBIS_VERSION())
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, Global_19458))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_104(0, 1);
							if (MISC::IS_BIT_SET(Global_7357, 28))
							{
								iLocal_111 = 0;
							}
							else
							{
								iLocal_111 = 2;
							}
							iLocal_107 = MISC::GET_GAME_TIMER();
							PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(true);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
				{
					iLocal_153 = 0;
					iLocal_155 = 0;
					func_104(0, 1);
				}
			}
		}
		iLocal_108 = MISC::GET_GAME_TIMER();
		if (func_148())
		{
			if (!MISC::IS_BIT_SET(Global_4269765, 2))
			{
				MISC::SET_BIT(&Global_4269765, 2);
				func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
		}
		if (func_3() || iLocal_130)
		{
			func_1(0);
			func_111(0, 0);
			func_115(0);
			iLocal_115 = 0;
			func_106(1);
			Global_21838 = 0;
			Global_21839 = 0;
			Global_21841 = 0;
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_140);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_141);
			MISC::SET_GAME_PAUSED(false);
			if (Global_19666 == 1)
			{
				MISC::SET_BIT(&Global_7356, 17);
			}
			else
			{
				MISC::CLEAR_BIT(&Global_7356, 17);
			}
			HUD::CLEAR_FLOATING_HELP(0, true);
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
			MISC::CLEAR_BIT(&Global_7358, 3);
			MISC::CLEAR_BIT(&Global_4269765, 3);
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_21842 = 1;
			AUDIO::STOP_SOUND(iLocal_112);
			AUDIO::RELEASE_SOUND_ID(iLocal_112);
			HUD::BUSYSPINNER_OFF();
			func_106(1);
			MOBILE::_0xA2CCBE62CD4C91A4(0);
			MOBILE::_SET_MOBILE_PHONE_UNK(false);
			MOBILE::_0x1B0B4AEED5B9B41C(1f);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
			}
			if (Global_4268490 > 0 && Global_4268490 < 13)
			{
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_33[Global_4268490]);
			}
			MISC::CLEAR_BIT(&Global_7356, 18);
			if (func_148())
			{
				func_104(1, 1);
			}
			else
			{
				func_104(0, 1);
			}
			if (func_159(0, 1, bLocal_64, 1))
			{
				bLocal_64 = false;
			}
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			MOBILE::_CELL_CAM_SET_LEAN(true);
		}
		else if (Global_19486.f_1 > 3)
		{
			MOBILE::_CELL_CAM_SET_LEAN(false);
		}
	}
}

bool func_2()
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

int func_3()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_106 = GRAPHICS::_0xF5BED327CEA362B1(0);
	switch (iLocal_106)
	{
		case 0:
			iLocal_103 = 0;
			iLocal_109 = GRAPHICS::_GET_CURRENT_NUMBER_OF_PHOTOS();
			iLocal_110 = GRAPHICS::GET_MAXIMUM_NUMBER_OF_CLOUD_PHOTOS();
			if (iLocal_104 == 1)
			{
				if (bLocal_127 == 0)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_140))
					{
						if (func_161())
						{
							if (Global_4268490 == 0)
							{
								if (!MISC::IS_BIT_SET(Global_4269765, 2))
								{
									func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
								}
							}
							func_152(iLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						}
						else
						{
							if (!MISC::IS_BIT_SET(Global_4269765, 2))
							{
								func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							}
							func_152(iLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						}
					}
				}
				else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_140))
				{
					func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					func_152(iLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				}
				iLocal_104 = 0;
			}
			HUD::BUSYSPINNER_OFF();
			break;
		case 1:
			if (!HUD::BUSYSPINNER_IS_ON())
			{
				HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_SPINNER2");
				HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
			}
			break;
		case 2:
			if (MISC::IS_BIT_SET(Global_7357, 28))
			{
				iLocal_103 = 0;
				iLocal_109 = 0;
				iLocal_110 = 0;
			}
			else
			{
				Global_19486.f_1 = 3;
				Global_21842 = 1;
			}
			HUD::BUSYSPINNER_OFF();
			break;
	}
}

void func_5()
{
	if (func_101(2, Global_19455, 0))
	{
		func_1(0);
		if (MISC::IS_BIT_SET(Global_7357, 28))
		{
			MISC::SET_GAME_PAUSED(false);
			SYSTEM::SETTIMERB(0);
			func_125();
			bLocal_127 = false;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				vLocal_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			func_124();
			iLocal_136 = 1;
		}
		else if (func_9())
		{
			if (MISC::IS_BIT_SET(Global_7357, 14))
			{
				func_147("CELL_299", -1);
			}
			else
			{
				func_124();
				func_8();
			}
		}
		else
		{
			iLocal_153 = 1;
			func_104(1, 1);
		}
	}
	if (MISC::IS_BIT_SET(Global_7356, 22))
	{
		func_1(0);
		while (SYSTEM::TIMERA() < 2000)
		{
			SYSTEM::WAIT(0);
			func_146();
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			func_83();
			func_133();
			func_128();
		}
		MISC::SET_GAME_PAUSED(false);
		func_125();
		SYSTEM::SETTIMERB(0);
		bLocal_127 = false;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			vLocal_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_118();
		func_124();
	}
	if (func_101(2, Global_19459, 0))
	{
		func_1(0);
		if (func_112() || MISC::IS_BIT_SET(Global_7357, 28))
		{
		}
		else
		{
			MISC::SET_GAME_PAUSED(false);
			SYSTEM::SETTIMERB(0);
			iLocal_136 = 1;
			func_125();
			bLocal_127 = false;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				vLocal_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			func_124();
		}
	}
	if (MISC::IS_BIT_SET(Global_7356, 28))
	{
		if (func_101(2, Global_19458, 0))
		{
			func_1(0);
			MISC::SET_GAME_PAUSED(false);
			GRAPHICS::_0x1072F115DAB0717E(false, false);
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			func_146();
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			func_146();
			GRAPHICS::_0xD801CC02177FA3F1();
			GRAPHICS::_0x6A12D88881435DCA();
			Global_21842 = 1;
			iLocal_143 = 0;
			bLocal_126 = false;
			func_104(0, 1);
			Global_21838 = 1;
			HUD::CLEAR_FLOATING_HELP(0, true);
			bLocal_128 = false;
			bLocal_118 = true;
			bLocal_119 = true;
			bLocal_120 = true;
			bLocal_121 = true;
			bLocal_122 = true;
			bLocal_123 = true;
			func_6();
			bLocal_127 = false;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				vLocal_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			func_111(0, 0);
			func_115(0);
			iLocal_115 = 0;
			func_106(1);
			if (!Global_2537071.f_6522)
			{
				MISC::SET_BIT(&Global_7356, 9);
			}
			bLocal_142 = false;
			func_152(Global_19467, "DISPLAY_VIEW", 16f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
}

void func_6()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_19475, true);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

void func_8()
{
	bLocal_150 = true;
	Global_21843 = 1;
	HUD::CLEAR_FLOATING_HELP(0, true);
}

bool func_9()
{
	if (iLocal_107 == iLocal_108)
	{
		if (bLocal_105)
		{
			bLocal_105 = true;
		}
	}
	if (Global_19486.f_1 < 4)
	{
		return false;
	}
	if (iLocal_109 == iLocal_110 || iLocal_109 > iLocal_110)
	{
		iLocal_155 = 1;
		iLocal_152 = 2;
		return false;
	}
	return true;
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (PAD::_IS_INPUT_DISABLED(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (bLocal_131)
	{
		func_74();
		func_70();
		func_69();
		fLocal_73 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_74 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		if (iLocal_133 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, iVar0) && !PAD::IS_CONTROL_PRESSED(2, iVar1))
			{
				iLocal_133 = 1;
				func_152(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_152(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				if (MISC::IS_BIT_SET(Global_7356, 28))
				{
					func_67(iLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
					func_67(iLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_65());
					func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_67(iLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
					func_67(iLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
					func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				func_64();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_141, "SET_MAX_WIDTH");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_152(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2, iVar0) || PAD::IS_CONTROL_PRESSED(2, iVar1))
		{
			iLocal_133 = 0;
			func_118();
		}
		if (iLocal_134 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, iVar1) && !PAD::IS_CONTROL_PRESSED(2, iVar0))
			{
				iLocal_134 = 1;
				func_152(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_152(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				if (MISC::IS_BIT_SET(Global_7356, 28))
				{
					func_67(iLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
					func_67(iLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_65());
				}
				else if (!func_148())
				{
					func_67(iLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
					func_67(iLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
				}
				else
				{
					func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
					func_67(iLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
				}
				func_63();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_141, "SET_MAX_WIDTH");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_152(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2, iVar1) || PAD::IS_CONTROL_PRESSED(2, iVar0))
		{
			iLocal_134 = 0;
			func_118();
		}
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0, 2, true);
		PAD::ENABLE_CONTROL_ACTION(0, 1, true);
	}
	if (PAD::_0x6CD79468A1E595C6(2))
	{
		func_118();
	}
	func_133();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
	}
	if (func_148())
	{
		if (!MISC::IS_BIT_SET(Global_4269765, 2))
		{
			MISC::SET_BIT(&Global_4269765, 2);
			func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2, 183) && iLocal_156 == 0) && !func_148())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (MISC::IS_BIT_SET(Global_4269765, 2))
				{
					MISC::CLEAR_BIT(&Global_4269765, 2);
					if (!MISC::IS_BIT_SET(Global_4269765, 2))
					{
						func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					}
				}
				else
				{
					MISC::SET_BIT(&Global_4269765, 2);
					func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				}
			}
		}
	}
	if (bLocal_131)
	{
		if (bLocal_132 == 1)
		{
			bLocal_132 = false;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_140, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			func_62("CELL_FOCUS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (!func_61(14))
		{
			if (MISC::IS_BIT_SET(Global_4269765, 10))
			{
				if ((Global_76622 == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("PI_MENU")) > 0) && func_60())
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_140, "SET_FOCUS_LOCK");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::_GET_LABEL_TEXT(&Global_4270750));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					MISC::CLEAR_BIT(&Global_4269765, 10);
				}
			}
		}
		else if (MISC::IS_BIT_SET(Global_4269765, 10))
		{
			MISC::CLEAR_BIT(&Global_4269765, 10);
		}
		iLocal_66 = MISC::GET_GAME_TIMER();
		if ((iLocal_66 - iLocal_65) > 1500)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				vLocal_70 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_70, vLocal_67, true) > 5f)
				{
					Global_19486.f_1 = 3;
					MISC::SET_GAME_PAUSED(false);
				}
				iLocal_65 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else if (bLocal_132)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, 182) && !func_148())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
			bLocal_132 = false;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_140, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			func_62("CELL_FOCUS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(0, 182) && !func_148())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
		bLocal_132 = true;
		if (!func_61(14))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_140, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			func_62("CELL_FOCUS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	if (func_161())
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, 186) && iLocal_156 == 0) && !func_148())
		{
			if (bLocal_131)
			{
				iLocal_57++;
				if (iLocal_57 > 0 && iLocal_57 < 7)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						if (Global_19486 == 0)
						{
							iVar4 = 0;
							iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_57 == 2 || iLocal_57 == 3) || iLocal_57 == 4) || iLocal_57 == 8) || iLocal_57 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_57 == 3)
										{
											PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_48[iLocal_57], 0);
										}
									}
								}
								else
								{
									PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_48[iLocal_57], 0);
								}
							}
							else
							{
								PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_48[iLocal_57], 0);
							}
						}
						else
						{
							PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_48[iLocal_57], 0);
						}
					}
				}
				if (iLocal_57 == 7 || iLocal_57 > 7)
				{
					iLocal_57 = 0;
				}
				if (iLocal_57 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
					}
				}
			}
		}
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, 185) && iLocal_156 == 0) && !func_148())
		{
			if (bLocal_131)
			{
				if (bLocal_62 == 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
					if (iLocal_61 == 0)
					{
						iLocal_61 = 1;
						iLocal_60 = 1;
						if (MISC::ARE_STRINGS_EQUAL(sLocal_19[Global_4268489], "phone_cam12DUMMY"))
						{
						}
						else
						{
							MOBILE::_0xA2CCBE62CD4C91A4(1);
							MOBILE::_SET_MOBILE_PHONE_UNK(true);
						}
					}
					else
					{
						iLocal_61 = 0;
						iLocal_60 = 0;
						MOBILE::_0xA2CCBE62CD4C91A4(0);
						MOBILE::_SET_MOBILE_PHONE_UNK(false);
					}
				}
			}
			else if (bLocal_63 == 1)
			{
				if (iLocal_60 == 0)
				{
					iLocal_60 = 1;
					iLocal_61 = 1;
					MOBILE::_0xA2CCBE62CD4C91A4(1);
					MOBILE::_SET_MOBILE_PHONE_UNK(true);
				}
				else
				{
					iLocal_60 = 0;
					iLocal_61 = 0;
					MOBILE::_0xA2CCBE62CD4C91A4(0);
					MOBILE::_SET_MOBILE_PHONE_UNK(false);
				}
			}
		}
	}
	if (iLocal_59 == 1 && !func_148())
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, 172) && iLocal_156 == 0)
		{
			if (func_161())
			{
				Global_4268490++;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
			}
			if (Global_4268490 == 13)
			{
				func_115(0);
				MOBILE::_0x1B0B4AEED5B9B41C(1f);
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_33[(Global_4268490 - 1)]);
				Global_4268490 = 0;
				func_59();
				if (iLocal_47 == 1)
				{
					MISC::CLEAR_BIT(&Global_4269765, 2);
					iLocal_47 = 0;
					func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				}
			}
			if (Global_4268490 > 0 && Global_4268490 < 13)
			{
				iLocal_59 = 0;
				iLocal_58 = 0;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sLocal_33[Global_4268490], false);
			}
		}
	}
	if (Global_4268490 > 0)
	{
		if (iLocal_59 == 0)
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sLocal_33[Global_4268490]))
			{
				iLocal_58 = 1;
				iLocal_59 = 1;
				if (!GRAPHICS::_0xBCEDB009461DA156())
				{
					func_115(1);
				}
				if (iLocal_47 == 0)
				{
					if (!MISC::IS_BIT_SET(Global_4269765, 2))
					{
						iLocal_47 = 1;
					}
				}
				MISC::SET_BIT(&Global_4269765, 2);
				func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				MOBILE::_0x1B0B4AEED5B9B41C(0.25f);
				GRAPHICS::_0x27FEB5254759CDE3(sLocal_33[Global_4268490], false);
			}
		}
		if (iLocal_58 == 1)
		{
			if (Global_4268490 == 1 || Global_4268490 == 3)
			{
			}
			if (Global_4268490 == 2 || Global_4268490 == 4)
			{
			}
		}
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(0, 173) && iLocal_156 == 0) && !func_148())
	{
		if (func_161())
		{
			func_106(0);
			Global_4268489++;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
		}
		if (Global_4268489 == 13)
		{
			Global_4268489 = 0;
		}
		if (Global_4268489 == 0)
		{
			if (func_161())
			{
				func_106(0);
			}
		}
		else
		{
			func_116();
		}
		func_58();
	}
	if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 184) && iLocal_156 == 0) && !func_148())
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				vLocal_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
				func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_151(iLocal_140, "CLOSE_SHUTTER");
				iLocal_135 = MISC::GET_GAME_TIMER();
				while (MISC::GET_GAME_TIMER() < (iLocal_135 + iLocal_139) && Global_19486.f_1 > 3)
				{
					func_146();
					func_128();
					func_83();
					RECORDING::_STOP_RECORDING_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
				if (bLocal_131 == 0)
				{
					AUDIO::STOP_SOUND(iLocal_112);
					bLocal_131 = true;
					func_57(1);
					func_56();
					MISC::SET_BIT(&Global_7358, 3);
					iLocal_65 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_133 = 0;
					iLocal_134 = 0;
					func_57(0);
					bLocal_131 = false;
					MISC::CLEAR_BIT(&Global_7358, 3);
				}
				iLocal_135 = MISC::GET_GAME_TIMER();
				while (MISC::GET_GAME_TIMER() < (iLocal_135 + iLocal_137) && Global_19486.f_1 > 3)
				{
					func_146();
					func_128();
					func_83();
					RECORDING::_STOP_RECORDING_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
				func_151(iLocal_140, "OPEN_SHUTTER");
				if (func_161())
				{
					if (Global_4268490 == 0)
					{
						if (!MISC::IS_BIT_SET(Global_4269765, 2))
						{
							func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						}
					}
				}
				else if (!MISC::IS_BIT_SET(Global_4269765, 2))
				{
					func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				}
				func_128();
				func_146();
				if (MISC::IS_BIT_SET(Global_7356, 28))
				{
					StringCopy(&cLocal_145, "CELL_296", 16);
					func_54();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_295", 16);
					func_28();
				}
			}
		}
	}
	if (bLocal_131 == 0)
	{
		if (iLocal_113 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 40) || PAD::IS_CONTROL_JUST_PRESSED(0, 41))
			{
				fLocal_114 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
				if (fLocal_114 > 1f && fLocal_114 < 4.5f)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_112))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_112, "Camera_Zoom", &Global_19475, true);
					}
				}
				else
				{
					AUDIO::STOP_SOUND(iLocal_112);
				}
				iLocal_113 = 1;
			}
		}
		else if (PAD::IS_CONTROL_PRESSED(0, 40) || PAD::IS_CONTROL_PRESSED(0, 41))
		{
			fLocal_114 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
			if (fLocal_114 > 1f && fLocal_114 < 4.5f)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_112))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_112, "Camera_Zoom", &Global_19475, true);
				}
			}
			else
			{
				AUDIO::STOP_SOUND(iLocal_112);
			}
		}
		else
		{
			AUDIO::STOP_SOUND(iLocal_112);
		}
	}
	if ((func_101(2, Global_19455, 0) && !func_113()) && !func_101(2, Global_19454, 0))
	{
		fLocal_75 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_76 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		GRAPHICS::_0x1072F115DAB0717E(false, false);
		MISC::SET_BIT(&Global_7356, 21);
		AUDIO::STOP_SOUND(iLocal_112);
		bLocal_127 = true;
		func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		func_152(iLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Camera_Shoot", &Global_19475, true);
		func_151(iLocal_140, "CLOSE_SHUTTER");
		vLocal_84 = { -90.3f, 0f, 90f };
		MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_84, 0);
		if (!func_161())
		{
			func_106(1);
		}
		Global_21841 = 1;
		HUD::CLEAR_FLOATING_HELP(0, true);
		while (Global_21840 < 6 && Global_19486.f_1 > 3)
		{
			func_146();
			func_128();
			func_83();
			func_133();
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		MOBILE::CELL_CAM_ACTIVATE(false, false);
		if (Global_19428)
		{
			func_1(1);
		}
		iLocal_135 = MISC::GET_GAME_TIMER();
		while (MISC::GET_GAME_TIMER() < (iLocal_135 + iLocal_138) && Global_19486.f_1 > 3)
		{
			func_146();
			func_128();
			func_83();
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		SYSTEM::SETTIMERA(0);
		func_151(iLocal_140, "OPEN_SHUTTER");
		MISC::CLEAR_BIT(&Global_7356, 21);
		func_118();
		if (Global_19486.f_1 > 3)
		{
			if (Global_76622)
			{
				func_21(1086, 1, -1);
				func_20();
				func_17(-1492367786, 23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						STATS::STAT_INCREMENT(joaat("SP0_NO_PHOTOS_TAKEN"), 1f);
						break;
					case 1:
						STATS::STAT_INCREMENT(joaat("SP1_NO_PHOTOS_TAKEN"), 1f);
						break;
					case 2:
						STATS::STAT_INCREMENT(joaat("SP2_NO_PHOTOS_TAKEN"), 1f);
						break;
				}
				func_20();
			}
			func_115(0);
		}
		func_128();
	}
	if (MISC::IS_BIT_SET(Global_7356, 28))
	{
		if (func_101(2, Global_19458, 0))
		{
			GRAPHICS::_0x1072F115DAB0717E(false, false);
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			func_146();
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			func_146();
			GRAPHICS::_0xD801CC02177FA3F1();
			GRAPHICS::_0x6A12D88881435DCA();
			Global_21842 = 1;
			iLocal_143 = 0;
			bLocal_126 = true;
			Global_21838 = 1;
			HUD::CLEAR_FLOATING_HELP(0, true);
			bLocal_128 = false;
			bLocal_118 = true;
			bLocal_119 = true;
			bLocal_120 = true;
			bLocal_121 = true;
			bLocal_122 = true;
			bLocal_123 = true;
			func_6();
			bLocal_127 = false;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				vLocal_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			func_111(0, 0);
			func_115(0);
			iLocal_115 = 0;
			func_106(1);
			if (!Global_2537071.f_6522)
			{
				MISC::SET_BIT(&Global_7356, 9);
			}
			MISC::SET_GAME_PAUSED(false);
			bLocal_142 = false;
			func_152(Global_19467, "DISPLAY_VIEW", 16f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
}

int func_11()
{
	func_12();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_12()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_15(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_14(PLAYER::PLAYER_PED_ID());
			if (func_13(iVar0) && (!func_61(14) || Global_110589))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_17(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_19(iParam1, bParam2))
	{
		iVar0 = func_18();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_18()
{
	int iVar0;
	int iVar1;

	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_19(int iParam0, bool bParam1)
{
	if (Global_1312865)
	{
		return false;
	}
	if (iParam0 == 22)
	{
		return true;
	}
	if ((((((((bParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

void func_20()
{
	bLocal_121 = true;
	bLocal_122 = true;
	bLocal_123 = true;
	iLocal_124 = 1;
	iLocal_125 = 0;
	Global_19423 = { Global_19439[Global_19431 /*3*/] };
	func_104(0, 1);
	func_111(0, 0);
	func_115(0);
	iLocal_115 = 0;
	func_106(1);
	if (!MISC::IS_BIT_SET(Global_7357, 28))
	{
		if (NETWORK::_0x76BF03FADBF154F5() == 0)
		{
			if (MISC::IS_XBOX360_VERSION())
			{
				if (iLocal_117 == 0)
				{
					iLocal_117 = 1;
				}
			}
		}
	}
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_25(iParam0, func_26(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_24(iParam0))
	{
		func_23(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_22(iParam0, iVar0, iParam2, 1);
	}
}

void func_22(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = Global_2548434[iParam0 /*3*/][func_26(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_26(iParam2)] = iParam1;
			break;
		case 788:
			Global_1387994[func_26(iParam2)] = iParam1;
			break;
		case 789:
			Global_1388000[func_26(iParam2)] = iParam1;
			break;
		case 790:
			Global_1388006[func_26(iParam2)] = iParam1;
			break;
		case 8726:
			Global_1388012[func_26(iParam2)] = iParam1;
			break;
		case 777:
			Global_1387958[func_26(iParam2)] = iParam1;
			break;
		case 778:
			Global_1387964[func_26(iParam2)] = iParam1;
			break;
		case 779:
			Global_1387970[func_26(iParam2)] = iParam1;
			break;
		case 780:
			Global_1387976[func_26(iParam2)] = iParam1;
			break;
		case 8728:
			Global_1387982[func_26(iParam2)] = iParam1;
			break;
		case 767:
			Global_1387928[func_26(iParam2)] = iParam1;
			break;
		case 768:
			Global_1387934[func_26(iParam2)] = iParam1;
			break;
		case 769:
			Global_1387940[func_26(iParam2)] = iParam1;
			break;
		case 770:
			Global_1387946[func_26(iParam2)] = iParam1;
			break;
		case 8730:
			Global_1387952[func_26(iParam2)] = iParam1;
			break;
		case 757:
			Global_1388018[func_26(iParam2)] = iParam1;
			break;
		case 758:
			Global_1388024[func_26(iParam2)] = iParam1;
			break;
		case 759:
			Global_1388030[func_26(iParam2)] = iParam1;
			break;
		case 760:
			Global_1388036[func_26(iParam2)] = iParam1;
			break;
		case 8732:
			Global_1388042[func_26(iParam2)] = iParam1;
			break;
		case 1303:
			Global_1388048[func_26(iParam2)] = iParam1;
			break;
		case 7233:
			Global_1388054[func_26(iParam2)] = iParam1;
			break;
		case 639:
			Global_1388060[func_26(iParam2)] = iParam1;
			break;
		case 1278:
			Global_1388066[func_26(iParam2)] = iParam1;
			break;
		case 1876:
			Global_2586065[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 2267:
			Global_2586065[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 2929:
			Global_2586065[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3058:
			Global_2586065[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 10016:
			Global_2586214[func_26(iParam2)] = iParam1;
			break;
		case 764:
			Global_1388072[func_26(iParam2)] = iParam1;
			break;
		case 765:
			Global_1388078[func_26(iParam2)] = iParam1;
			break;
		case 766:
			Global_1388084[func_26(iParam2)] = iParam1;
			break;
		case 8731:
			Global_1388090[func_26(iParam2)] = iParam1;
			break;
		case 1236:
			Global_1388096[func_26(iParam2)] = iParam1;
			break;
		case 3053:
			Global_2586138[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3054:
			Global_2586138[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3055:
			Global_2586138[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3056:
			Global_2586138[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3057:
			Global_2586138[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3636:
			Global_2586217[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3637:
			Global_2586217[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3638:
			Global_2586217[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3639:
			Global_2586217[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3640:
			Global_2586217[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3641:
			Global_2586233[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3642:
			Global_2586233[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3643:
			Global_2586233[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3644:
			Global_2586233[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3645:
			Global_2586233[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3221:
			Global_2586138[5 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3227:
			Global_2586065[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3663:
			Global_2586249[func_26(iParam2)] = iParam1;
			break;
		case 3664:
			Global_2586258[func_26(iParam2)] = iParam1;
			break;
		case 3665:
			Global_2586252[func_26(iParam2)] = iParam1;
			break;
		case 3666:
			Global_2586261[func_26(iParam2)] = iParam1;
			break;
		case 3667:
			Global_2586255[func_26(iParam2)] = iParam1;
			break;
		case 3668:
			Global_2586264[func_26(iParam2)] = iParam1;
			break;
		case 3689:
			Global_2586267[func_26(iParam2)] = iParam1;
			break;
		case 3229:
			Global_2586138[6 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3230:
			Global_2586065[5 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3234:
			Global_2586138[7 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 3232:
			Global_2586065[6 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 4019:
			Global_2586138[8 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 4020:
			Global_2586065[7 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 4022:
			Global_2586138[9 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 4023:
			Global_2586065[8 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 4025:
			Global_2586138[10 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 4026:
			Global_2586065[9 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 4028:
			Global_2586138[11 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 4029:
			Global_2586065[10 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 6109:
			Global_2586138[12 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 6110:
			Global_2586065[11 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 6167:
			Global_2586138[13 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 6168:
			Global_2586065[12 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 6545:
			Global_2586138[14 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 6546:
			Global_2586065[13 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 6558:
			Global_2586138[15 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 6559:
			Global_2586065[14 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 6561:
			Global_2586138[16 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 6562:
			Global_2586065[15 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 6564:
			Global_2586138[17 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 6565:
			Global_2586065[16 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 7283:
			Global_2586065[17 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 7285:
			Global_2586065[18 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 7287:
			Global_2586065[19 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 8010:
			Global_2586065[20 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 8282:
			Global_2586270[func_26(iParam2)] = iParam1;
			break;
		case 8283:
			Global_2586273[func_26(iParam2)] = iParam1;
			break;
		case 8284:
			Global_2586276[func_26(iParam2)] = iParam1;
			break;
		case 8285:
			Global_2586279[func_26(iParam2)] = iParam1;
			break;
		case 8286:
			Global_2586282[func_26(iParam2)] = iParam1;
			break;
		case 8287:
			Global_2586285[func_26(iParam2)] = iParam1;
			break;
		case 8288:
			Global_2586288[func_26(iParam2)] = iParam1;
			break;
		case 8289:
			Global_2586291[func_26(iParam2)] = iParam1;
			break;
		case 8290:
			Global_2586294[func_26(iParam2)] = iParam1;
			break;
		case 8291:
			Global_2586297[func_26(iParam2)] = iParam1;
			break;
		case 8292:
			Global_2586300[func_26(iParam2)] = iParam1;
			break;
		case 8293:
			Global_2586303[func_26(iParam2)] = iParam1;
			break;
		case 8294:
			Global_2586306[func_26(iParam2)] = iParam1;
			break;
		case 8900:
			Global_2586309[func_26(iParam2)] = iParam1;
			break;
		case 8534:
			Global_2586065[21 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 8977:
			Global_2586138[23 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 8975:
			Global_2586065[22 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 8980:
			Global_2586138[24 /*3*/][func_26(iParam2)] = iParam1;
			break;
		case 8978:
			Global_2586065[23 /*3*/][func_26(iParam2)] = iParam1;
			break;
		default:
			break;
	}
}

void func_23(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_26(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

bool func_24(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return true;
		}
	}
	return false;
}

int func_25(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_26(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1312745;
}

void func_28()
{
	if (iLocal_156 == 1)
	{
		func_53();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_152(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		func_152(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		if (!func_148())
		{
			func_67(iLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
			func_67(iLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
		}
		else
		{
			func_67(iLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
			func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
		}
		if (bLocal_131)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_76622 == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("PI_MENU")) > 0) && func_60())
				{
					func_51();
				}
				else
				{
					if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_67(iLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
					func_67(iLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_285");
					if (func_161())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(1))
						{
							func_29(7f);
							if (bLocal_62)
							{
								func_67(iLocal_141, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_67(iLocal_141, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (!func_148())
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_285");
						func_67(iLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
						func_67(iLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
					}
					else
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_285");
						if (!PAD::_IS_INPUT_DISABLED(0))
						{
							func_67(iLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 210, true), "CELL_284");
						}
						else
						{
							func_67(iLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 29, true), "CELL_284");
						}
					}
					if (!func_148())
					{
						if (func_161())
						{
							func_50(6f);
							func_49(7f);
							if (bLocal_63)
							{
								func_67(iLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, true), "CELL_FOCUS");
							}
							func_67(iLocal_141, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_285");
					if (func_161())
					{
						func_50(3f);
						func_49(4f);
						func_67(iLocal_141, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_148())
				{
					if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
					}
				}
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (!func_148())
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
						func_67(iLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_285");
					}
					else
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_285");
						if (!PAD::_IS_INPUT_DISABLED(0))
						{
							func_67(iLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 210, true), "CELL_284");
						}
						else
						{
							func_67(iLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 29, true), "CELL_284");
						}
					}
					if (!func_148())
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
					}
					if (!func_148())
					{
						if (func_161())
						{
							func_50(7f);
							func_49(8f);
							if (bLocal_63)
							{
								func_67(iLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, true), "CELL_FOCUS");
							}
							func_67(iLocal_141, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_285");
					if (func_161())
					{
						func_50(3f);
						func_49(4f);
						func_67(iLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_141, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_152(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	}
}

void func_29(float fParam0)
{
	func_67(iLocal_141, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 174, true), "CELL_ACTION");
}

bool func_30(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_48(Global_4194378, Global_4194379))
		{
			if (iParam0 == 0 || !func_31(Global_4194378, Global_4194379, 0, 1, 0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_31(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_32(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_32(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar6;
	var uVar12;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (func_47())
	{
		return 0;
	}
	uVar0 = 5;
	uVar6 = 5;
	uVar12 = 6;
	if (iParam1 == 0)
	{
		iVar22 = 3;
	}
	else if (bParam3)
	{
		iVar22 = 1;
	}
	else if (bParam4)
	{
		iVar22 = 2;
	}
	else
	{
		iVar22 = 0;
	}
	func_40(iParam1, iParam2, &uVar0, &uVar6, &uVar12, iVar22, bParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_FREEMODE_01"))
		{
			iVar19 = func_39(iParam0);
			if (!iVar19 == -1)
			{
				if (func_38(&uVar0, iVar19))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar20 = func_37(iParam0);
			if (!iVar20 == -1)
			{
				if (func_35(&uVar6, iVar20))
				{
					return 1;
				}
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar21 = func_34(iParam0);
			if (!iVar21 == 0)
			{
				if (func_33(&uVar12, iVar21))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_33(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return false;
	}
	if (MISC::IS_BIT_SET((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return true;
	}
	return false;
}

int func_34(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	return iVar0;
}

int func_35(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, 0);
	return iVar0;
}

int func_38(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

int func_39(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, 0);
	return iVar0;
}

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_46(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_45(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						case 1:
							func_44(uParam3, 4, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						case 2:
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 38, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 62, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_46(uParam4, 136, 1);
							func_46(uParam4, 138, 1);
							func_46(uParam4, 139, 1);
							func_46(uParam4, 143, 1);
							func_46(uParam4, 144, 1);
							func_46(uParam4, 145, 1);
							func_46(uParam4, 147, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						case 1:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						case 2:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_46(uParam4, 136, 1);
							func_46(uParam4, 138, 1);
							func_46(uParam4, 139, 1);
							func_46(uParam4, 143, 1);
							func_46(uParam4, 144, 1);
							func_46(uParam4, 145, 1);
							func_46(uParam4, 147, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				case 52:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 66, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				case 53:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				case 54:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				case 55:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				case 56:
				case 57:
				case 58:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						case 1:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						case 2:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				case 10:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 6, 1);
							func_44(uParam3, 10, 1);
							func_44(uParam3, 54, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 56, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						case 1:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 6, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 19, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						case 2:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				case 13:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_41(uParam2, uParam3, uParam4);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						case 2:
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_41(uParam2, uParam3, uParam4);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				case 16:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 4, 1);
							break;
						case 1:
							func_46(uParam4, 43, 1);
							break;
						case 2:
							break;
					}
					break;
				case 23:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						case 1:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							Jump @17485; //curOff = 17055
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							Jump @24960; //curOff = 17485
							switch (iParam5)
							{
								case 0:
									func_44(uParam3, 16, 1);
									func_44(uParam3, 48, 1);
									func_44(uParam3, 49, 1);
									func_44(uParam3, 18, 1);
									func_44(uParam3, 50, 1);
									func_44(uParam3, 51, 1);
									func_44(uParam3, 52, 1);
									func_44(uParam3, 53, 1);
									func_44(uParam3, 62, 1);
									func_44(uParam3, 38, 1);
									func_44(uParam3, 111, 1);
									func_42(uParam2, 16, 1);
									func_42(uParam2, 47, 1);
									func_42(uParam2, 48, 1);
									func_42(uParam2, 18, 1);
									func_42(uParam2, 49, 1);
									func_42(uParam2, 50, 1);
									func_42(uParam2, 51, 1);
									func_42(uParam2, 52, 1);
									func_42(uParam2, 62, 1);
									func_42(uParam2, 37, 1);
									func_42(uParam2, 46, 1);
									func_42(uParam2, 110, 1);
									func_46(uParam4, 1, 1);
									func_46(uParam4, 2, 1);
									func_46(uParam4, 3, 1);
									func_46(uParam4, 5, 1);
									func_46(uParam4, 6, 1);
									func_46(uParam4, 7, 1);
									func_46(uParam4, 8, 1);
									func_46(uParam4, 9, 1);
									func_46(uParam4, 10, 1);
									func_46(uParam4, 13, 1);
									func_46(uParam4, 18, 1);
									func_46(uParam4, 19, 1);
									func_46(uParam4, 20, 1);
									func_46(uParam4, 59, 1);
									func_46(uParam4, 60, 1);
									func_46(uParam4, 61, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 63, 1);
									func_46(uParam4, 64, 1);
									func_46(uParam4, 65, 1);
									func_46(uParam4, 66, 1);
									func_46(uParam4, 67, 1);
									func_46(uParam4, 68, 1);
									func_46(uParam4, 69, 1);
									func_46(uParam4, 70, 1);
									func_46(uParam4, 71, 1);
									func_46(uParam4, 72, 1);
									func_46(uParam4, 21, 1);
									func_46(uParam4, 22, 1);
									func_46(uParam4, 23, 1);
									func_46(uParam4, 24, 1);
									func_46(uParam4, 25, 1);
									func_46(uParam4, 26, 1);
									func_46(uParam4, 36, 1);
									func_46(uParam4, 46, 1);
									func_46(uParam4, 38, 1);
									func_46(uParam4, 29, 1);
									func_46(uParam4, 28, 1);
									func_46(uParam4, 92, 1);
									func_46(uParam4, 93, 1);
									func_46(uParam4, 94, 1);
									func_46(uParam4, 96, 1);
									func_46(uParam4, 97, 1);
									func_46(uParam4, 98, 1);
									func_46(uParam4, 100, 1);
									func_46(uParam4, 103, 1);
									func_46(uParam4, 104, 1);
									func_46(uParam4, 105, 1);
									func_46(uParam4, 106, 1);
									func_46(uParam4, 107, 1);
									func_46(uParam4, 108, 1);
									func_44(uParam3, 67, 1);
									func_44(uParam3, 68, 1);
									func_44(uParam3, 69, 1);
									func_44(uParam3, 70, 1);
									func_44(uParam3, 71, 1);
									func_44(uParam3, 72, 1);
									func_44(uParam3, 73, 1);
									func_44(uParam3, 74, 1);
									func_44(uParam3, 78, 1);
									func_44(uParam3, 79, 1);
									func_44(uParam3, 80, 1);
									func_44(uParam3, 81, 1);
									func_44(uParam3, 82, 1);
									func_44(uParam3, 91, 1);
									func_44(uParam3, 92, 1);
									func_42(uParam2, 66, 1);
									func_42(uParam2, 67, 1);
									func_42(uParam2, 68, 1);
									func_42(uParam2, 69, 1);
									func_42(uParam2, 70, 1);
									func_42(uParam2, 71, 1);
									func_42(uParam2, 72, 1);
									func_42(uParam2, 73, 1);
									func_42(uParam2, 77, 1);
									func_42(uParam2, 78, 1);
									func_42(uParam2, 79, 1);
									func_42(uParam2, 80, 1);
									func_42(uParam2, 81, 1);
									func_42(uParam2, 90, 1);
									func_42(uParam2, 91, 1);
									break;
								case 1:
									func_44(uParam3, 16, 1);
									func_44(uParam3, 48, 1);
									func_44(uParam3, 49, 1);
									func_44(uParam3, 18, 1);
									func_44(uParam3, 50, 1);
									func_44(uParam3, 51, 1);
									func_44(uParam3, 52, 1);
									func_44(uParam3, 53, 1);
									func_44(uParam3, 62, 1);
									func_44(uParam3, 38, 1);
									func_44(uParam3, 47, 1);
									func_44(uParam3, 111, 1);
									func_42(uParam2, 16, 1);
									func_42(uParam2, 47, 1);
									func_42(uParam2, 48, 1);
									func_42(uParam2, 18, 1);
									func_42(uParam2, 49, 1);
									func_42(uParam2, 50, 1);
									func_42(uParam2, 51, 1);
									func_42(uParam2, 52, 1);
									func_42(uParam2, 62, 1);
									func_42(uParam2, 37, 1);
									func_42(uParam2, 46, 1);
									func_42(uParam2, 110, 1);
									func_46(uParam4, 1, 1);
									func_46(uParam4, 2, 1);
									func_46(uParam4, 3, 1);
									func_46(uParam4, 5, 1);
									func_46(uParam4, 6, 1);
									func_46(uParam4, 7, 1);
									func_46(uParam4, 8, 1);
									func_46(uParam4, 9, 1);
									func_46(uParam4, 10, 1);
									func_46(uParam4, 13, 1);
									func_46(uParam4, 18, 1);
									func_46(uParam4, 19, 1);
									func_46(uParam4, 20, 1);
									func_46(uParam4, 59, 1);
									func_46(uParam4, 60, 1);
									func_46(uParam4, 61, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 63, 1);
									func_46(uParam4, 64, 1);
									func_46(uParam4, 65, 1);
									func_46(uParam4, 66, 1);
									func_46(uParam4, 67, 1);
									func_46(uParam4, 68, 1);
									func_46(uParam4, 69, 1);
									func_46(uParam4, 70, 1);
									func_46(uParam4, 71, 1);
									func_46(uParam4, 72, 1);
									func_46(uParam4, 21, 1);
									func_46(uParam4, 22, 1);
									func_46(uParam4, 23, 1);
									func_46(uParam4, 24, 1);
									func_46(uParam4, 25, 1);
									func_46(uParam4, 26, 1);
									func_46(uParam4, 36, 1);
									func_46(uParam4, 46, 1);
									func_46(uParam4, 38, 1);
									func_46(uParam4, 29, 1);
									func_46(uParam4, 28, 1);
									func_46(uParam4, 43, 1);
									func_46(uParam4, 92, 1);
									func_46(uParam4, 93, 1);
									func_46(uParam4, 94, 1);
									func_46(uParam4, 96, 1);
									func_46(uParam4, 97, 1);
									func_46(uParam4, 98, 1);
									func_46(uParam4, 100, 1);
									func_46(uParam4, 103, 1);
									func_46(uParam4, 104, 1);
									func_46(uParam4, 105, 1);
									func_46(uParam4, 106, 1);
									func_46(uParam4, 107, 1);
									func_46(uParam4, 108, 1);
									func_44(uParam3, 67, 1);
									func_44(uParam3, 68, 1);
									func_44(uParam3, 69, 1);
									func_44(uParam3, 70, 1);
									func_44(uParam3, 71, 1);
									func_44(uParam3, 72, 1);
									func_44(uParam3, 73, 1);
									func_44(uParam3, 74, 1);
									func_44(uParam3, 78, 1);
									func_44(uParam3, 79, 1);
									func_44(uParam3, 80, 1);
									func_44(uParam3, 81, 1);
									func_44(uParam3, 82, 1);
									func_44(uParam3, 91, 1);
									func_44(uParam3, 92, 1);
									func_42(uParam2, 66, 1);
									func_42(uParam2, 67, 1);
									func_42(uParam2, 68, 1);
									func_42(uParam2, 69, 1);
									func_42(uParam2, 70, 1);
									func_42(uParam2, 71, 1);
									func_42(uParam2, 72, 1);
									func_42(uParam2, 73, 1);
									func_42(uParam2, 77, 1);
									func_42(uParam2, 78, 1);
									func_42(uParam2, 79, 1);
									func_42(uParam2, 80, 1);
									func_42(uParam2, 81, 1);
									func_42(uParam2, 90, 1);
									func_42(uParam2, 91, 1);
									break;
								case 2:
									func_44(uParam3, 16, 1);
									func_44(uParam3, 48, 1);
									func_44(uParam3, 49, 1);
									func_44(uParam3, 18, 1);
									func_44(uParam3, 50, 1);
									func_44(uParam3, 51, 1);
									func_44(uParam3, 52, 1);
									func_44(uParam3, 53, 1);
									func_44(uParam3, 62, 1);
									func_44(uParam3, 38, 1);
									func_44(uParam3, 47, 1);
									func_44(uParam3, 111, 1);
									func_42(uParam2, 16, 1);
									func_42(uParam2, 47, 1);
									func_42(uParam2, 48, 1);
									func_42(uParam2, 18, 1);
									func_42(uParam2, 49, 1);
									func_42(uParam2, 50, 1);
									func_42(uParam2, 51, 1);
									func_42(uParam2, 52, 1);
									func_42(uParam2, 62, 1);
									func_42(uParam2, 37, 1);
									func_42(uParam2, 46, 1);
									func_42(uParam2, 110, 1);
									func_46(uParam4, 1, 1);
									func_46(uParam4, 2, 1);
									func_46(uParam4, 3, 1);
									func_46(uParam4, 5, 1);
									func_46(uParam4, 6, 1);
									func_46(uParam4, 7, 1);
									func_46(uParam4, 8, 1);
									func_46(uParam4, 9, 1);
									func_46(uParam4, 10, 1);
									func_46(uParam4, 13, 1);
									func_46(uParam4, 18, 1);
									func_46(uParam4, 19, 1);
									func_46(uParam4, 20, 1);
									func_46(uParam4, 59, 1);
									func_46(uParam4, 60, 1);
									func_46(uParam4, 61, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 63, 1);
									func_46(uParam4, 64, 1);
									func_46(uParam4, 65, 1);
									func_46(uParam4, 66, 1);
									func_46(uParam4, 67, 1);
									func_46(uParam4, 68, 1);
									func_46(uParam4, 69, 1);
									func_46(uParam4, 70, 1);
									func_46(uParam4, 71, 1);
									func_46(uParam4, 72, 1);
									func_46(uParam4, 21, 1);
									func_46(uParam4, 22, 1);
									func_46(uParam4, 23, 1);
									func_46(uParam4, 24, 1);
									func_46(uParam4, 25, 1);
									func_46(uParam4, 26, 1);
									func_46(uParam4, 36, 1);
									func_46(uParam4, 46, 1);
									func_46(uParam4, 38, 1);
									func_46(uParam4, 29, 1);
									func_46(uParam4, 28, 1);
									func_46(uParam4, 92, 1);
									func_46(uParam4, 93, 1);
									func_46(uParam4, 94, 1);
									func_46(uParam4, 96, 1);
									func_46(uParam4, 97, 1);
									func_46(uParam4, 98, 1);
									func_46(uParam4, 100, 1);
									func_46(uParam4, 103, 1);
									func_46(uParam4, 104, 1);
									func_46(uParam4, 105, 1);
									func_46(uParam4, 106, 1);
									func_46(uParam4, 107, 1);
									func_46(uParam4, 108, 1);
									func_44(uParam3, 67, 1);
									func_44(uParam3, 68, 1);
									func_44(uParam3, 69, 1);
									func_44(uParam3, 70, 1);
									func_44(uParam3, 71, 1);
									func_44(uParam3, 72, 1);
									func_44(uParam3, 73, 1);
									func_44(uParam3, 74, 1);
									func_44(uParam3, 78, 1);
									func_44(uParam3, 79, 1);
									func_44(uParam3, 80, 1);
									func_44(uParam3, 81, 1);
									func_44(uParam3, 82, 1);
									func_44(uParam3, 91, 1);
									func_44(uParam3, 92, 1);
									func_42(uParam2, 66, 1);
									func_42(uParam2, 67, 1);
									func_42(uParam2, 68, 1);
									func_42(uParam2, 69, 1);
									func_42(uParam2, 70, 1);
									func_42(uParam2, 71, 1);
									func_42(uParam2, 72, 1);
									func_42(uParam2, 73, 1);
									func_42(uParam2, 77, 1);
									func_42(uParam2, 78, 1);
									func_42(uParam2, 79, 1);
									func_42(uParam2, 80, 1);
									func_42(uParam2, 81, 1);
									func_42(uParam2, 90, 1);
									func_42(uParam2, 91, 1);
									break;
							}
							Jump @24960; //curOff = 20366
							switch (iParam5)
							{
								case 0:
									func_44(uParam3, 3, 1);
									func_44(uParam3, 7, 1);
									func_44(uParam3, 0, 1);
									func_44(uParam3, 12, 1);
									func_44(uParam3, 13, 1);
									func_44(uParam3, 15, 1);
									func_44(uParam3, 16, 1);
									func_44(uParam3, 48, 1);
									func_44(uParam3, 49, 1);
									func_44(uParam3, 17, 1);
									func_44(uParam3, 18, 1);
									func_44(uParam3, 50, 1);
									func_44(uParam3, 51, 1);
									func_44(uParam3, 52, 1);
									func_44(uParam3, 53, 1);
									func_44(uParam3, 62, 1);
									func_44(uParam3, 38, 1);
									func_44(uParam3, 47, 1);
									func_44(uParam3, 111, 1);
									func_44(uParam3, 20, 1);
									func_44(uParam3, 21, 1);
									func_44(uParam3, 25, 1);
									func_44(uParam3, 26, 1);
									func_44(uParam3, 27, 1);
									func_44(uParam3, 30, 1);
									func_44(uParam3, 31, 1);
									func_44(uParam3, 32, 1);
									func_44(uParam3, 33, 1);
									func_44(uParam3, 39, 1);
									func_44(uParam3, 37, 1);
									func_42(uParam2, 0, 1);
									func_42(uParam2, 2, 1);
									func_42(uParam2, 3, 1);
									func_42(uParam2, 4, 1);
									func_42(uParam2, 6, 1);
									func_42(uParam2, 7, 1);
									func_42(uParam2, 8, 1);
									func_42(uParam2, 11, 1);
									func_42(uParam2, 13, 1);
									func_42(uParam2, 15, 1);
									func_42(uParam2, 16, 1);
									func_42(uParam2, 47, 1);
									func_42(uParam2, 48, 1);
									func_42(uParam2, 17, 1);
									func_42(uParam2, 18, 1);
									func_42(uParam2, 49, 1);
									func_42(uParam2, 50, 1);
									func_42(uParam2, 51, 1);
									func_42(uParam2, 52, 1);
									func_42(uParam2, 62, 1);
									func_42(uParam2, 37, 1);
									func_42(uParam2, 46, 1);
									func_42(uParam2, 110, 1);
									func_42(uParam2, 19, 1);
									func_42(uParam2, 20, 1);
									func_42(uParam2, 21, 1);
									func_42(uParam2, 22, 1);
									func_42(uParam2, 54, 1);
									func_42(uParam2, 24, 1);
									func_42(uParam2, 26, 1);
									func_42(uParam2, 27, 1);
									func_42(uParam2, 28, 1);
									func_42(uParam2, 30, 1);
									func_42(uParam2, 31, 1);
									func_42(uParam2, 32, 1);
									func_42(uParam2, 38, 1);
									func_42(uParam2, 36, 1);
									func_46(uParam4, 1, 1);
									func_46(uParam4, 2, 1);
									func_46(uParam4, 3, 1);
									func_46(uParam4, 4, 1);
									func_46(uParam4, 14, 1);
									func_46(uParam4, 15, 1);
									func_46(uParam4, 16, 1);
									func_46(uParam4, 8, 1);
									func_46(uParam4, 9, 1);
									func_46(uParam4, 10, 1);
									func_46(uParam4, 13, 1);
									func_46(uParam4, 17, 1);
									func_46(uParam4, 18, 1);
									func_46(uParam4, 19, 1);
									func_46(uParam4, 20, 1);
									func_46(uParam4, 59, 1);
									func_46(uParam4, 60, 1);
									func_46(uParam4, 61, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 63, 1);
									func_46(uParam4, 64, 1);
									func_46(uParam4, 65, 1);
									func_46(uParam4, 66, 1);
									func_46(uParam4, 67, 1);
									func_46(uParam4, 68, 1);
									func_46(uParam4, 69, 1);
									func_46(uParam4, 70, 1);
									func_46(uParam4, 71, 1);
									func_46(uParam4, 72, 1);
									func_46(uParam4, 21, 1);
									func_46(uParam4, 22, 1);
									func_46(uParam4, 23, 1);
									func_46(uParam4, 24, 1);
									func_46(uParam4, 25, 1);
									func_46(uParam4, 26, 1);
									func_46(uParam4, 36, 1);
									func_46(uParam4, 46, 1);
									func_46(uParam4, 38, 1);
									func_46(uParam4, 29, 1);
									func_46(uParam4, 28, 1);
									func_46(uParam4, 31, 1);
									func_46(uParam4, 33, 1);
									func_46(uParam4, 34, 1);
									func_46(uParam4, 43, 1);
									func_46(uParam4, 92, 1);
									func_46(uParam4, 93, 1);
									func_46(uParam4, 94, 1);
									func_46(uParam4, 96, 1);
									func_46(uParam4, 97, 1);
									func_46(uParam4, 98, 1);
									func_46(uParam4, 100, 1);
									func_46(uParam4, 103, 1);
									func_46(uParam4, 104, 1);
									func_46(uParam4, 105, 1);
									func_46(uParam4, 106, 1);
									func_46(uParam4, 107, 1);
									func_46(uParam4, 108, 1);
									func_44(uParam3, 65, 1);
									func_44(uParam3, 67, 1);
									func_44(uParam3, 68, 1);
									func_44(uParam3, 69, 1);
									func_44(uParam3, 70, 1);
									func_44(uParam3, 71, 1);
									func_44(uParam3, 72, 1);
									func_44(uParam3, 73, 1);
									func_44(uParam3, 74, 1);
									func_44(uParam3, 75, 1);
									func_44(uParam3, 76, 1);
									func_44(uParam3, 77, 1);
									func_44(uParam3, 78, 1);
									func_44(uParam3, 79, 1);
									func_44(uParam3, 80, 1);
									func_44(uParam3, 81, 1);
									func_44(uParam3, 82, 1);
									func_44(uParam3, 91, 1);
									func_44(uParam3, 92, 1);
									func_42(uParam2, 64, 1);
									func_42(uParam2, 65, 1);
									func_42(uParam2, 66, 1);
									func_42(uParam2, 67, 1);
									func_42(uParam2, 68, 1);
									func_42(uParam2, 69, 1);
									func_42(uParam2, 70, 1);
									func_42(uParam2, 71, 1);
									func_42(uParam2, 72, 1);
									func_42(uParam2, 73, 1);
									func_42(uParam2, 74, 1);
									func_42(uParam2, 75, 1);
									func_42(uParam2, 77, 1);
									func_42(uParam2, 78, 1);
									func_42(uParam2, 79, 1);
									func_42(uParam2, 80, 1);
									func_42(uParam2, 81, 1);
									func_42(uParam2, 90, 1);
									func_42(uParam2, 91, 1);
									break;
								case 1:
									func_44(uParam3, 3, 1);
									func_44(uParam3, 7, 1);
									func_44(uParam3, 0, 1);
									func_44(uParam3, 12, 1);
									func_44(uParam3, 13, 1);
									func_44(uParam3, 15, 1);
									func_44(uParam3, 16, 1);
									func_44(uParam3, 48, 1);
									func_44(uParam3, 49, 1);
									func_44(uParam3, 17, 1);
									func_44(uParam3, 18, 1);
									func_44(uParam3, 50, 1);
									func_44(uParam3, 51, 1);
									func_44(uParam3, 52, 1);
									func_44(uParam3, 53, 1);
									func_44(uParam3, 62, 1);
									func_44(uParam3, 38, 1);
									func_44(uParam3, 47, 1);
									func_44(uParam3, 111, 1);
									func_44(uParam3, 20, 1);
									func_44(uParam3, 21, 1);
									func_44(uParam3, 25, 1);
									func_44(uParam3, 26, 1);
									func_44(uParam3, 27, 1);
									func_44(uParam3, 30, 1);
									func_44(uParam3, 31, 1);
									func_44(uParam3, 32, 1);
									func_44(uParam3, 33, 1);
									func_44(uParam3, 39, 1);
									func_42(uParam2, 0, 1);
									func_42(uParam2, 2, 1);
									func_42(uParam2, 3, 1);
									func_42(uParam2, 4, 1);
									func_42(uParam2, 6, 1);
									func_42(uParam2, 7, 1);
									func_42(uParam2, 11, 1);
									func_42(uParam2, 13, 1);
									func_42(uParam2, 15, 1);
									func_42(uParam2, 16, 1);
									func_42(uParam2, 47, 1);
									func_42(uParam2, 48, 1);
									func_42(uParam2, 17, 1);
									func_42(uParam2, 18, 1);
									func_42(uParam2, 49, 1);
									func_42(uParam2, 50, 1);
									func_42(uParam2, 51, 1);
									func_42(uParam2, 52, 1);
									func_42(uParam2, 62, 1);
									func_42(uParam2, 37, 1);
									func_42(uParam2, 46, 1);
									func_42(uParam2, 110, 1);
									func_42(uParam2, 19, 1);
									func_42(uParam2, 20, 1);
									func_42(uParam2, 21, 1);
									func_42(uParam2, 22, 1);
									func_42(uParam2, 54, 1);
									func_42(uParam2, 24, 1);
									func_42(uParam2, 38, 1);
									func_46(uParam4, 1, 1);
									func_46(uParam4, 2, 1);
									func_46(uParam4, 3, 1);
									func_46(uParam4, 4, 1);
									func_46(uParam4, 14, 1);
									func_46(uParam4, 15, 1);
									func_46(uParam4, 16, 1);
									func_46(uParam4, 6, 1);
									func_46(uParam4, 7, 1);
									func_46(uParam4, 8, 1);
									func_46(uParam4, 9, 1);
									func_46(uParam4, 10, 1);
									func_46(uParam4, 13, 1);
									func_46(uParam4, 17, 1);
									func_46(uParam4, 18, 1);
									func_46(uParam4, 19, 1);
									func_46(uParam4, 20, 1);
									func_46(uParam4, 59, 1);
									func_46(uParam4, 60, 1);
									func_46(uParam4, 61, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 63, 1);
									func_46(uParam4, 64, 1);
									func_46(uParam4, 65, 1);
									func_46(uParam4, 66, 1);
									func_46(uParam4, 67, 1);
									func_46(uParam4, 68, 1);
									func_46(uParam4, 69, 1);
									func_46(uParam4, 70, 1);
									func_46(uParam4, 71, 1);
									func_46(uParam4, 72, 1);
									func_46(uParam4, 21, 1);
									func_46(uParam4, 22, 1);
									func_46(uParam4, 23, 1);
									func_46(uParam4, 24, 1);
									func_46(uParam4, 25, 1);
									func_46(uParam4, 26, 1);
									func_46(uParam4, 36, 1);
									func_46(uParam4, 46, 1);
									func_46(uParam4, 38, 1);
									func_46(uParam4, 29, 1);
									func_46(uParam4, 28, 1);
									func_46(uParam4, 31, 1);
									func_46(uParam4, 33, 1);
									func_46(uParam4, 34, 1);
									func_46(uParam4, 43, 1);
									func_46(uParam4, 92, 1);
									func_46(uParam4, 93, 1);
									func_46(uParam4, 94, 1);
									func_46(uParam4, 96, 1);
									func_46(uParam4, 97, 1);
									func_46(uParam4, 98, 1);
									func_46(uParam4, 100, 1);
									func_46(uParam4, 103, 1);
									func_46(uParam4, 104, 1);
									func_46(uParam4, 105, 1);
									func_46(uParam4, 106, 1);
									func_46(uParam4, 107, 1);
									func_46(uParam4, 108, 1);
									func_44(uParam3, 65, 1);
									func_44(uParam3, 67, 1);
									func_44(uParam3, 68, 1);
									func_44(uParam3, 69, 1);
									func_44(uParam3, 70, 1);
									func_44(uParam3, 71, 1);
									func_44(uParam3, 72, 1);
									func_44(uParam3, 73, 1);
									func_44(uParam3, 74, 1);
									func_44(uParam3, 75, 1);
									func_44(uParam3, 76, 1);
									func_44(uParam3, 77, 1);
									func_44(uParam3, 78, 1);
									func_44(uParam3, 79, 1);
									func_44(uParam3, 80, 1);
									func_44(uParam3, 81, 1);
									func_44(uParam3, 82, 1);
									func_44(uParam3, 91, 1);
									func_44(uParam3, 92, 1);
									func_42(uParam2, 64, 1);
									func_42(uParam2, 65, 1);
									func_42(uParam2, 66, 1);
									func_42(uParam2, 67, 1);
									func_42(uParam2, 68, 1);
									func_42(uParam2, 69, 1);
									func_42(uParam2, 70, 1);
									func_42(uParam2, 71, 1);
									func_42(uParam2, 72, 1);
									func_42(uParam2, 73, 1);
									func_42(uParam2, 74, 1);
									func_42(uParam2, 75, 1);
									func_42(uParam2, 77, 1);
									func_42(uParam2, 78, 1);
									func_42(uParam2, 79, 1);
									func_42(uParam2, 80, 1);
									func_42(uParam2, 81, 1);
									func_42(uParam2, 90, 1);
									func_42(uParam2, 91, 1);
									break;
								case 2:
									func_44(uParam3, 1, 1);
									func_44(uParam3, 3, 1);
									func_44(uParam3, 4, 1);
									func_44(uParam3, 5, 1);
									func_44(uParam3, 7, 1);
									func_44(uParam3, 10, 1);
									func_44(uParam3, 54, 1);
									func_44(uParam3, 55, 1);
									func_44(uParam3, 56, 1);
									func_44(uParam3, 0, 1);
									func_44(uParam3, 12, 1);
									func_44(uParam3, 13, 1);
									func_44(uParam3, 15, 1);
									func_44(uParam3, 16, 1);
									func_44(uParam3, 48, 1);
									func_44(uParam3, 49, 1);
									func_44(uParam3, 17, 1);
									func_44(uParam3, 18, 1);
									func_44(uParam3, 50, 1);
									func_44(uParam3, 51, 1);
									func_44(uParam3, 52, 1);
									func_44(uParam3, 53, 1);
									func_44(uParam3, 62, 1);
									func_44(uParam3, 38, 1);
									func_44(uParam3, 47, 1);
									func_44(uParam3, 111, 1);
									func_44(uParam3, 20, 1);
									func_44(uParam3, 21, 1);
									func_44(uParam3, 25, 1);
									func_44(uParam3, 26, 1);
									func_44(uParam3, 27, 1);
									func_44(uParam3, 30, 1);
									func_44(uParam3, 31, 1);
									func_44(uParam3, 32, 1);
									func_44(uParam3, 33, 1);
									func_44(uParam3, 37, 1);
									func_44(uParam3, 39, 1);
									func_42(uParam2, 0, 1);
									func_42(uParam2, 1, 1);
									func_42(uParam2, 2, 1);
									func_42(uParam2, 3, 1);
									func_42(uParam2, 4, 1);
									func_42(uParam2, 5, 1);
									func_42(uParam2, 6, 1);
									func_42(uParam2, 7, 1);
									func_42(uParam2, 8, 1);
									func_42(uParam2, 9, 1);
									func_42(uParam2, 10, 1);
									func_42(uParam2, 53, 1);
									func_42(uParam2, 56, 1);
									func_42(uParam2, 55, 1);
									func_42(uParam2, 11, 1);
									func_42(uParam2, 12, 1);
									func_42(uParam2, 13, 1);
									func_42(uParam2, 14, 1);
									func_42(uParam2, 15, 1);
									func_42(uParam2, 16, 1);
									func_42(uParam2, 47, 1);
									func_42(uParam2, 48, 1);
									func_42(uParam2, 17, 1);
									func_42(uParam2, 18, 1);
									func_42(uParam2, 49, 1);
									func_42(uParam2, 50, 1);
									func_42(uParam2, 51, 1);
									func_42(uParam2, 52, 1);
									func_42(uParam2, 62, 1);
									func_42(uParam2, 37, 1);
									func_42(uParam2, 46, 1);
									func_42(uParam2, 110, 1);
									func_42(uParam2, 19, 1);
									func_42(uParam2, 20, 1);
									func_42(uParam2, 21, 1);
									func_42(uParam2, 22, 1);
									func_42(uParam2, 54, 1);
									func_42(uParam2, 23, 1);
									func_42(uParam2, 24, 1);
									func_42(uParam2, 26, 1);
									func_42(uParam2, 27, 1);
									func_42(uParam2, 28, 1);
									func_42(uParam2, 29, 1);
									func_42(uParam2, 30, 1);
									func_42(uParam2, 31, 1);
									func_42(uParam2, 32, 1);
									func_42(uParam2, 33, 1);
									func_42(uParam2, 36, 1);
									func_42(uParam2, 38, 1);
									func_42(uParam2, 55, 1);
									func_46(uParam4, 1, 1);
									func_46(uParam4, 2, 1);
									func_46(uParam4, 3, 1);
									func_46(uParam4, 3, 1);
									func_46(uParam4, 4, 1);
									func_46(uParam4, 14, 1);
									func_46(uParam4, 15, 1);
									func_46(uParam4, 16, 1);
									func_46(uParam4, 6, 1);
									func_46(uParam4, 8, 1);
									func_46(uParam4, 9, 1);
									func_46(uParam4, 10, 1);
									func_46(uParam4, 12, 1);
									func_46(uParam4, 13, 1);
									func_46(uParam4, 17, 1);
									func_46(uParam4, 18, 1);
									func_46(uParam4, 19, 1);
									func_46(uParam4, 20, 1);
									func_46(uParam4, 59, 1);
									func_46(uParam4, 60, 1);
									func_46(uParam4, 61, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 62, 1);
									func_46(uParam4, 63, 1);
									func_46(uParam4, 64, 1);
									func_46(uParam4, 65, 1);
									func_46(uParam4, 66, 1);
									func_46(uParam4, 67, 1);
									func_46(uParam4, 68, 1);
									func_46(uParam4, 69, 1);
									func_46(uParam4, 70, 1);
									func_46(uParam4, 71, 1);
									func_46(uParam4, 72, 1);
									func_46(uParam4, 21, 1);
									func_46(uParam4, 22, 1);
									func_46(uParam4, 23, 1);
									func_46(uParam4, 24, 1);
									func_46(uParam4, 25, 1);
									func_46(uParam4, 26, 1);
									func_46(uParam4, 36, 1);
									func_46(uParam4, 46, 1);
									func_46(uParam4, 38, 1);
									func_46(uParam4, 29, 1);
									func_46(uParam4, 28, 1);
									func_46(uParam4, 31, 1);
									func_46(uParam4, 33, 1);
									func_46(uParam4, 34, 1);
									func_46(uParam4, 32, 1);
									func_46(uParam4, 92, 1);
									func_46(uParam4, 93, 1);
									func_46(uParam4, 94, 1);
									func_46(uParam4, 96, 1);
									func_46(uParam4, 97, 1);
									func_46(uParam4, 98, 1);
									func_46(uParam4, 100, 1);
									func_46(uParam4, 103, 1);
									func_46(uParam4, 104, 1);
									func_46(uParam4, 105, 1);
									func_46(uParam4, 106, 1);
									func_46(uParam4, 107, 1);
									func_46(uParam4, 108, 1);
									func_44(uParam3, 65, 1);
									func_44(uParam3, 67, 1);
									func_44(uParam3, 68, 1);
									func_44(uParam3, 69, 1);
									func_44(uParam3, 70, 1);
									func_44(uParam3, 71, 1);
									func_44(uParam3, 72, 1);
									func_44(uParam3, 73, 1);
									func_44(uParam3, 74, 1);
									func_44(uParam3, 75, 1);
									func_44(uParam3, 76, 1);
									func_44(uParam3, 77, 1);
									func_44(uParam3, 78, 1);
									func_44(uParam3, 79, 1);
									func_44(uParam3, 80, 1);
									func_44(uParam3, 81, 1);
									func_44(uParam3, 82, 1);
									func_44(uParam3, 91, 1);
									func_44(uParam3, 92, 1);
									func_42(uParam2, 64, 1);
									func_42(uParam2, 65, 1);
									func_42(uParam2, 66, 1);
									func_42(uParam2, 67, 1);
									func_42(uParam2, 68, 1);
									func_42(uParam2, 69, 1);
									func_42(uParam2, 70, 1);
									func_42(uParam2, 71, 1);
									func_42(uParam2, 72, 1);
									func_42(uParam2, 73, 1);
									func_42(uParam2, 74, 1);
									func_42(uParam2, 75, 1);
									func_42(uParam2, 77, 1);
									func_42(uParam2, 78, 1);
									func_42(uParam2, 79, 1);
									func_42(uParam2, 80, 1);
									func_42(uParam2, 81, 1);
									func_42(uParam2, 90, 1);
									func_42(uParam2, 91, 1);
									break;
							}
							Jump @24960; //curOff = 24900
							switch (iParam5)
							{
								case 0:
									break;
								case 1:
									func_42(uParam2, 2, 1);
									func_42(uParam2, 20, 1);
									break;
								case 2:
									break;
							}
							Jump @25111; //curOff = 24960
							switch (iParam1)
							{
								case 0:
									break;
								case 9:
								case 11:
								case 13:
								case 15:
								case 19:
								case 23:
								case 26:
								case 30:
								case 34:
								case 20:
								case 22:
									func_40(2, 52, uParam2, uParam3, uParam4, 0, 0);
									break;
								case 32:
									func_40(2, 53, uParam2, uParam3, uParam4, 0, 0);
									break;
								case 17:
								case 27:
								case 31:
									break;
							}
						}

void func_41(var uParam0, var uParam1, var uParam2)
{
	if ((*uParam0)[0] == 0 || (*uParam1)[0] == 0)
	{
	}
	func_46(uParam2, 124, 1);
	func_46(uParam2, 125, 1);
	func_46(uParam2, 126, 1);
	func_46(uParam2, 127, 1);
	func_46(uParam2, 128, 1);
	func_46(uParam2, 129, 1);
	func_46(uParam2, 130, 1);
	func_46(uParam2, 131, 1);
	func_46(uParam2, 132, 1);
	func_46(uParam2, 133, 1);
	func_46(uParam2, 136, 1);
	func_46(uParam2, 138, 1);
	func_46(uParam2, 139, 1);
	func_46(uParam2, 143, 1);
	func_46(uParam2, 144, 1);
	func_46(uParam2, 145, 1);
	func_46(uParam2, 147, 1);
}

void func_42(var uParam0, int iParam1, bool bParam2)
{
	func_43(uParam0, iParam1, bParam2);
}

void func_43(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_44(var uParam0, int iParam1, bool bParam2)
{
	func_43(uParam0, iParam1, bParam2);
}

void func_45(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_46(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
						case 1:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
						case 2:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 5, 1);
					func_46(uParam4, 6, 1);
					func_46(uParam4, 7, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					func_46(uParam4, 115, 1);
					func_46(uParam4, 116, 1);
					break;
				case 1:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 9, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
				case 10:
					func_46(uParam4, 28, 1);
					break;
				case 12:
					if (bParam6)
					{
						func_44(uParam3, 3, 1);
						func_44(uParam3, 4, 1);
						func_44(uParam3, 6, 1);
						func_44(uParam3, 10, 1);
						func_44(uParam3, 54, 1);
						func_44(uParam3, 55, 1);
						func_44(uParam3, 56, 1);
						func_44(uParam3, 13, 1);
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_44(uParam3, 20, 1);
						func_44(uParam3, 26, 1);
						func_44(uParam3, 27, 1);
						func_44(uParam3, 32, 1);
						func_44(uParam3, 33, 1);
						func_44(uParam3, 37, 1);
						func_44(uParam3, 39, 1);
						func_44(uParam3, 106, 1);
						func_44(uParam3, 114, 1);
						func_44(uParam3, 116, 1);
						func_44(uParam3, 117, 1);
						func_44(uParam3, 118, 1);
						func_44(uParam3, 119, 1);
						func_42(uParam2, 3, 1);
						func_42(uParam2, 4, 1);
						func_42(uParam2, 6, 1);
						func_42(uParam2, 8, 1);
						func_42(uParam2, 9, 1);
						func_42(uParam2, 10, 1);
						func_42(uParam2, 53, 1);
						func_42(uParam2, 56, 1);
						func_42(uParam2, 55, 1);
						func_42(uParam2, 13, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 21, 1);
						func_42(uParam2, 26, 1);
						func_42(uParam2, 27, 1);
						func_42(uParam2, 28, 1);
						func_42(uParam2, 32, 1);
						func_42(uParam2, 36, 1);
						func_42(uParam2, 38, 1);
						func_42(uParam2, 55, 1);
						func_42(uParam2, 14, 1);
						func_42(uParam2, 105, 1);
						func_42(uParam2, 113, 1);
						func_42(uParam2, 114, 1);
						func_42(uParam2, 115, 1);
						func_42(uParam2, 116, 1);
						func_42(uParam2, 117, 1);
					}
					func_46(uParam4, 2, 1);
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 32, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					break;
				case 15:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 19, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 6, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 32, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					func_46(uParam4, 115, 1);
					func_46(uParam4, 116, 1);
					break;
				case 18:
					if (bParam6)
					{
						func_44(uParam3, 4, 1);
					}
					break;
				case 17:
					func_46(uParam4, 9, 1);
					break;
				case 19:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
				case 21:
					if (bParam6)
					{
						func_44(uParam3, 3, 1);
						func_44(uParam3, 7, 1);
						func_44(uParam3, 0, 1);
						func_44(uParam3, 12, 1);
						func_44(uParam3, 13, 1);
						func_44(uParam3, 15, 1);
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 17, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_44(uParam3, 20, 1);
						func_44(uParam3, 21, 1);
						func_44(uParam3, 25, 1);
						func_44(uParam3, 26, 1);
						func_44(uParam3, 27, 1);
						func_44(uParam3, 30, 1);
						func_44(uParam3, 31, 1);
						func_44(uParam3, 32, 1);
						func_44(uParam3, 33, 1);
						func_44(uParam3, 39, 1);
						func_44(uParam3, 37, 1);
						func_44(uParam3, 55, 1);
						func_42(uParam2, 0, 1);
						func_42(uParam2, 2, 1);
						func_42(uParam2, 3, 1);
						func_42(uParam2, 4, 1);
						func_42(uParam2, 6, 1);
						func_42(uParam2, 7, 1);
						func_42(uParam2, 8, 1);
						func_42(uParam2, 11, 1);
						func_42(uParam2, 13, 1);
						func_42(uParam2, 15, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 17, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 19, 1);
						func_42(uParam2, 20, 1);
						func_42(uParam2, 21, 1);
						func_42(uParam2, 22, 1);
						func_42(uParam2, 54, 1);
						func_42(uParam2, 24, 1);
						func_42(uParam2, 26, 1);
						func_42(uParam2, 27, 1);
						func_42(uParam2, 28, 1);
						func_42(uParam2, 30, 1);
						func_42(uParam2, 31, 1);
						func_42(uParam2, 32, 1);
						func_42(uParam2, 38, 1);
						func_42(uParam2, 36, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_46(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

bool func_47()
{
	if (Global_4254512.f_943 > -1)
	{
		return true;
	}
	return false;
}

bool func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return true;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 45:
				case 46:
				case 47:
				case 48:
				case 49:
				case 50:
				case 51:
					return true;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return true;
			}
			break;
	}
	return false;
}

void func_49(float fParam0)
{
	func_67(iLocal_141, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 172, true), "CELL_BORDER");
}

void func_50(float fParam0)
{
	if (Global_1672021)
	{
		fParam0 = -1f;
	}
	func_67(iLocal_141, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 173, true), "CELL_FILTER");
}

void func_51()
{
	if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_67(iLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 183, true), "CELL_GRID");
	func_67(iLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_285");
	func_50(5f);
	func_49(6f);
	func_52(7f);
	func_29(8f);
	if (bLocal_62)
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
	}
	if (!func_61(14))
	{
		if ((Global_76622 == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("PI_MENU")) > 0) && func_60())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_140, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::_GET_LABEL_TEXT(&Global_4270750));
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_52(float fParam0)
{
	func_67(iLocal_141, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 175, true), "CELL_ACCYC");
}

void func_53()
{
	func_152(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_152(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_67(iLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
	func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_285");
	func_67(iLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
	func_67(iLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_141, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_152(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
}

void func_54()
{
	if (iLocal_156 == 1)
	{
		func_55();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_152(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		func_152(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		func_67(iLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
		func_67(iLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_65());
		if (bLocal_131)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					if (func_161())
					{
						func_50(3f);
						func_49(4f);
					}
				}
				else if ((Global_76622 == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("PI_MENU")) > 0) && func_60())
				{
					func_51();
				}
				else
				{
					if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_67(iLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
					func_67(iLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_285");
					if (func_161())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(1))
						{
							func_29(7f);
							if (bLocal_62)
							{
								func_67(iLocal_141, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_67(iLocal_141, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					func_67(iLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
					func_67(iLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_285");
					func_67(iLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
					if (func_161())
					{
						func_50(6f);
						func_49(7f);
						func_67(iLocal_141, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_285");
					if (func_161())
					{
						func_50(3f);
						func_49(4f);
						func_67(iLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!func_148())
				{
					if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
					}
				}
				func_67(iLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
				func_67(iLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_285");
				func_67(iLocal_141, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
				if (func_161())
				{
					if (!func_148())
					{
						func_50(7f);
						func_49(8f);
						if (bLocal_63)
						{
							func_67(iLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, true), "CELL_FOCUS");
						}
						func_67(iLocal_141, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_148())
					{
						if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
						{
							func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
						}
						else
						{
							func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
						}
					}
					func_67(iLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_285");
					if (func_161())
					{
						if (!func_148())
						{
							func_50(4f);
							func_49(5f);
							func_67(iLocal_141, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_141, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_152(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	}
}

void func_55()
{
	func_152(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_152(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_67(iLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
	func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_285");
	func_67(iLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_65());
	func_67(iLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_141, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_152(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
}

void func_56()
{
	if (bLocal_131)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_73, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_74);
	}
}

void func_57(bool bParam0)
{
	if (iLocal_156 == 1)
	{
		return;
	}
	if (Global_4456448.f_227351 == 1)
	{
	}
	else if (Global_4456448.f_227352 == 1)
	{
	}
	else
	{
		MOBILE::_CELL_CAM_DISABLE_THIS_FRAME(bParam0);
	}
}

void func_58()
{
	if (iLocal_61 == 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sLocal_19[Global_4268489], "phone_cam12DUMMY"))
		{
			MOBILE::_0xA2CCBE62CD4C91A4(0);
			MOBILE::_SET_MOBILE_PHONE_UNK(false);
		}
		else
		{
			MOBILE::_0xA2CCBE62CD4C91A4(1);
			MOBILE::_SET_MOBILE_PHONE_UNK(true);
		}
	}
}

void func_59()
{
	func_152(iLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	if (!func_161())
	{
		if (!Global_1672021)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER("phone_cam");
		}
	}
}

bool func_60()
{
	if (func_61(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[2 /*29*/])
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
	return true;
}

bool func_61(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_62(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_63()
{
	if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 30, true), "CELL_RT_RSTICK");
		func_67(iLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 1, true), "CELL_RT_LSTICK");
	}
	else
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_RT_RSTICK");
		func_67(iLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 0, true), "CELL_RT_LSTICK");
	}
}

void func_64()
{
	if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_67(iLocal_141, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_LT_RSTICK");
	if (func_61(14))
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 30, true), "CELL_LT_LSTICK");
	}
	else
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_LT_LSTICKZ");
		func_67(iLocal_141, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 30, true), "CELL_LT_LSTICK");
	}
}

char* func_65()
{
	if (func_66())
	{
		return "FHHUD_SENDLES";
	}
	return "CELL_287";
}

bool func_66()
{
	switch (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33)
	{
		case 233:
			switch (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_181)
			{
				case 9:
					return true;
				default:
					break;
			}
			break;
		case 158:
			switch (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_181)
			{
				case 3:
				case 1:
				case 41:
					return true;
				default:
					break;
			}
			break;
	}
	if (Global_1702974)
	{
		return true;
	}
	return false;
}

void func_67(int iParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_68(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_62(sParam4);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_68(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_69()
{
	if (Global_76622)
	{
		switch (Global_21922)
		{
			case 0:
				if (PAD::_IS_INPUT_DISABLED(2))
				{
					func_147("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_147("CELL_CAM_SELFIE_0", -1);
				}
				Global_21922++;
				break;
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (PAD::_IS_INPUT_DISABLED(2))
					{
						func_147("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_147("CELL_CAM_SELFIE_1", -1);
					}
					Global_21922++;
				}
				break;
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_21921)
		{
			case 0:
				if (PAD::_IS_INPUT_DISABLED(2))
				{
					func_147("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_147("CELL_CAM_SELFIE_0", -1);
				}
				Global_21921++;
				break;
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (PAD::_IS_INPUT_DISABLED(2))
					{
						func_147("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_147("CELL_CAM_SELFIE_1", -1);
					}
					Global_21921++;
				}
				break;
			case 2:
				break;
		}
	}
}

void func_70()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;

	if (PAD::_IS_INPUT_DISABLED(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (PAD::IS_CONTROL_PRESSED(2, iVar10) && !PAD::IS_CONTROL_PRESSED(2, iVar9))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 2, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1, true);
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 2)) * 127;
		if (PAD::_IS_INPUT_DISABLED(2))
		{
			if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			}
		}
		else if (MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
		}
		if (PAD::_IS_INPUT_DISABLED(2))
		{
			fVar7 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290);
			fVar8 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291);
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_164);
		}
		func_73(fVar5);
		func_72(fVar6);
		func_71(fVar4);
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, iVar9))
	{
		PAD::ENABLE_CONTROL_ACTION(0, 2, true);
		PAD::ENABLE_CONTROL_ACTION(0, 1, true);
	}
}

void func_71(float fParam0)
{
	fLocal_161 = (fLocal_161 + fParam0);
	if (fLocal_161 > 1f)
	{
		fLocal_161 = 1f;
	}
	else if (fLocal_161 < -1f)
	{
		fLocal_161 = -1f;
	}
	MOBILE::_0xD6ADE981781FCA09(fLocal_161);
}

void func_72(float fParam0)
{
	fLocal_162 = (fLocal_162 + fParam0);
	if (fLocal_162 > 1f)
	{
		fLocal_162 = 1f;
	}
	else if (fLocal_162 < -1f)
	{
		fLocal_162 = -1f;
	}
	MOBILE::_0xF1E22DC13F5EEBAD(fLocal_162);
}

void func_73(float fParam0)
{
	fLocal_163 = (fLocal_163 + fParam0);
	if (fLocal_163 > 1f)
	{
		fLocal_163 = 1f;
	}
	else if (fLocal_163 < -1f)
	{
		fLocal_163 = -1f;
	}
	MOBILE::_0x466DA42C89865553(fLocal_163);
}

void func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;

	if (PAD::_IS_INPUT_DISABLED(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (PAD::IS_CONTROL_PRESSED(2, iVar10))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 178) && !func_148())
			{
				MOBILE::_0x53F4892D18EC90A4(0.5f);
				MOBILE::_0x3117D84EFA60F77B(0.85f);
				MOBILE::_0xAC2890471901861C(0.5f);
				MOBILE::_0x15E69E2802C24B8D(-0.25f);
				fLocal_157 = 0.5f;
				fLocal_158 = 0.85f;
				fLocal_159 = 0.5f;
				fLocal_160 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (PAD::IS_CONTROL_PRESSED(2, iVar10) && !PAD::IS_CONTROL_PRESSED(2, iVar11))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 178) && !func_148())
		{
			MOBILE::_0x53F4892D18EC90A4(0.5f);
			MOBILE::_0x3117D84EFA60F77B(0.85f);
			MOBILE::_0xAC2890471901861C(0.5f);
			MOBILE::_0x15E69E2802C24B8D(-0.25f);
			fLocal_157 = 0.5f;
			fLocal_158 = 0.85f;
			fLocal_159 = 0.5f;
			fLocal_160 = -0.25f;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 2, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1, true);
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 2)) * 127;
		if (PAD::_IS_INPUT_DISABLED(2))
		{
			iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 39)) * 127;
			fVar8 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290);
			fVar9 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291);
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (MISC::ABSI(iVar2) > 15 || MISC::ABSI(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		func_78(fVar6);
		func_77(fVar7);
		func_76(fVar4);
		if (!func_61(14))
		{
			func_75(fVar5);
		}
	}
	else if (!PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar11))
	{
		PAD::ENABLE_CONTROL_ACTION(0, 2, true);
		PAD::ENABLE_CONTROL_ACTION(0, 1, true);
	}
	if (!PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar10) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar11))
	{
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 294)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 295)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 292)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 293)) * 127;
		if (MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		if (!func_61(14))
		{
			func_75(fVar5);
		}
	}
}

void func_75(float fParam0)
{
	fLocal_159 = (fLocal_159 + fParam0);
	if (fLocal_159 > 1f)
	{
		fLocal_159 = 1f;
	}
	else if (fLocal_159 < 0f)
	{
		fLocal_159 = 0f;
	}
	MOBILE::_0xAC2890471901861C(fLocal_159);
}

void func_76(float fParam0)
{
	fLocal_160 = (fLocal_160 + fParam0);
	if (fLocal_160 > 1f)
	{
		fLocal_160 = 1f;
	}
	else if (fLocal_160 < -1f)
	{
		fLocal_160 = -1f;
	}
	MOBILE::_0x15E69E2802C24B8D(fLocal_160);
}

void func_77(float fParam0)
{
	fLocal_158 = (fLocal_158 + fParam0);
	if (fLocal_158 > 1.5f)
	{
		fLocal_158 = 1.5f;
	}
	else if (fLocal_158 < 0.5f)
	{
		fLocal_158 = 0.5f;
	}
	MOBILE::_0x3117D84EFA60F77B(fLocal_158);
}

void func_78(float fParam0)
{
	fLocal_157 = (fLocal_157 + fParam0);
	if (fLocal_157 > 2f)
	{
		fLocal_157 = 2f;
	}
	else if (fLocal_157 < -1.7f)
	{
		fLocal_157 = -1.7f;
	}
	MOBILE::_0x53F4892D18EC90A4(fLocal_157);
}

void func_79()
{
	if (Global_76882 || Global_76883)
	{
		return;
	}
	if (iLocal_124 == 0)
	{
		if (!bLocal_150)
		{
			if (Global_4456448.f_227351 == 0 && Global_4456448.f_227352 == 0)
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_141, 255, 255, 255, 0, 0);
			}
		}
	}
	if (bLocal_127 == 0)
	{
		if (Global_19428)
		{
			if (Global_19664)
			{
				if (bLocal_150 == 0)
				{
					if (Global_19486.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_81(255, 255, 255, 255);
			func_80(0.059f, 0.644f, "CELL_284", 0);
			func_81(255, 255, 255, 255);
			func_80(0.165f, 0.644f, "CELL_285", 0);
			func_81(255, 255, 255, 255);
			func_80(0.275f, 0.75f, "CELL_280", 0);
			func_81(255, 255, 255, 255);
			func_80(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_19428)
	{
	}
	else
	{
		func_81(255, 255, 255, 255);
		func_80(0.275f, 0.75f, func_65(), 0);
		func_81(255, 255, 255, 255);
		func_80(0.275f, 0.79f, "CELL_286", 0);
		func_81(255, 255, 255, 255);
		func_80(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_80(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_81(int iParam0, int iParam1, int iParam2, int iParam3)
{
	HUD::SET_TEXT_SCALE(0.4f, 0.4f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(true);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

void func_82()
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_75, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_76);
}

void func_83()
{
	PAD::DISABLE_CONTROL_ACTION(0, 25, true);
	PAD::DISABLE_CONTROL_ACTION(0, 44, true);
	PAD::DISABLE_CONTROL_ACTION(0, 3, true);
	PAD::DISABLE_CONTROL_ACTION(0, 4, true);
	PAD::DISABLE_CONTROL_ACTION(0, 5, true);
	PAD::DISABLE_CONTROL_ACTION(0, 6, true);
	PAD::DISABLE_CONTROL_ACTION(0, 1, true);
	PAD::DISABLE_CONTROL_ACTION(0, 2, true);
	PAD::DISABLE_CONTROL_ACTION(0, 39, true);
	PAD::DISABLE_CONTROL_ACTION(0, 47, true);
	PAD::DISABLE_CONTROL_ACTION(0, 56, true);
}

void func_84()
{
	vLocal_87 = { Global_19439[Global_19431 /*3*/] };
	if (Global_19428)
	{
		if (func_87())
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&vLocal_93);
			vLocal_87 = { vLocal_93 };
			bLocal_121 = false;
			bLocal_122 = false;
			bLocal_123 = false;
		}
		func_1(1);
		if (bLocal_121)
		{
			vLocal_81.x = (vLocal_81.x + 12f);
		}
		if (vLocal_81.x > vLocal_87.x || vLocal_81.x == vLocal_87.x)
		{
			vLocal_81.x = vLocal_87.x;
			bLocal_121 = false;
		}
		if (bLocal_122)
		{
			vLocal_81.f_1 = (vLocal_81.y - 6f);
		}
		if (MISC::IS_BIT_SET(Global_7358, 4))
		{
			if (vLocal_81.y < (vLocal_87.y + 15f) || vLocal_81.y == (vLocal_87.y + 15f))
			{
				vLocal_81.f_1 = (vLocal_87.y + 15f);
				bLocal_122 = false;
			}
		}
		else if (vLocal_81.y < (vLocal_87.y + 10f) || vLocal_81.y == (vLocal_87.y + 10f))
		{
			vLocal_81.f_1 = (vLocal_87.y + 10f);
			bLocal_122 = false;
		}
		if (bLocal_123)
		{
			vLocal_81.f_2 = (vLocal_81.z - 10f);
		}
		if (vLocal_81.z < vLocal_87.z || vLocal_81.z == vLocal_87.z)
		{
			vLocal_81.f_2 = vLocal_87.z;
			bLocal_123 = false;
		}
		if (func_87() == 0)
		{
			if (MISC::IS_BIT_SET(Global_7358, 4))
			{
				vLocal_87.f_1 = (vLocal_87.y + 15f);
			}
			else
			{
				vLocal_87.f_1 = (vLocal_87.y + 10f);
			}
			vLocal_87.x = (vLocal_87.x - 14f);
		}
		else
		{
			vLocal_87 = { Global_19432[Global_19431 /*3*/] };
		}
		vLocal_81 = { vLocal_87 };
		bLocal_123 = false;
		bLocal_122 = false;
		bLocal_121 = false;
		MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_81);
		if ((bLocal_121 == 0 && bLocal_122 == 0) && bLocal_123 == 0)
		{
			iLocal_124 = 0;
			vLocal_84 = { -90.3f, 0f, 90f };
			MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_84, 0);
			if (!MISC::IS_BIT_SET(Global_7356, 22))
			{
				if (MISC::IS_BIT_SET(Global_7356, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_86();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_85();
				}
				iLocal_100 = 2;
			}
		}
	}
}

void func_85()
{
	func_152(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_152(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	if (MISC::IS_BIT_SET(Global_7357, 28))
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_286");
	}
	else
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, true), "CELL_277");
		func_67(iLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_GALSAVE");
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_141, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_152(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
}

void func_86()
{
	func_152(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_152(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	if (MISC::IS_BIT_SET(Global_7357, 28))
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_65());
		func_67(iLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_286");
	}
	else
	{
		func_67(iLocal_141, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_65());
		func_67(iLocal_141, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, true), "CELL_277");
		func_67(iLocal_141, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_GALSAVE");
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_141, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_77);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_152(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
}

bool func_87()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			if (Global_19429 == 0)
			{
				if (Global_6671 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_20805 != 2)
						{
						}
					}
				}
			}
		}
		if (func_61(14))
		{
			return false;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			return false;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					return false;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return false;
		}
		if (Global_110686)
		{
			return false;
		}
	}
	if (Global_76622)
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_IS_IN_VEHICLE_CAM_DISABLED()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("SEASHARK")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("SEASHARK2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("RHINO")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("SUBMERSIBLE")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("SUBMERSIBLE2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("TORO"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4270043 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("APPTRACKIFY")) > 0 || Global_111638.f_14046.f_89)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("MICHAEL2")) > 0)
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
			return true;
		}
	}
	return false;
}

void func_88()
{
	PAD::DISABLE_CONTROL_ACTION(0, 47, true);
	PAD::SET_INPUT_EXCLUSIVE(0, Global_19456);
	vLocal_84 = { Global_19446 };
	vLocal_87 = { Global_19439[Global_19431 /*3*/] };
	if (func_87())
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&vLocal_90, 0);
		vLocal_84 = { vLocal_90 };
		MOBILE::GET_MOBILE_PHONE_POSITION(&vLocal_93);
		vLocal_87 = { vLocal_93 };
		bLocal_118 = false;
		bLocal_119 = false;
		bLocal_120 = false;
		bLocal_121 = false;
		bLocal_122 = false;
		bLocal_123 = false;
	}
	if (Global_19428)
	{
		func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		func_57(0);
		bLocal_131 = false;
		if (MISC::IS_BIT_SET(Global_7356, 30))
		{
			bLocal_118 = false;
			bLocal_119 = false;
			bLocal_120 = false;
			func_89();
		}
		if (bLocal_121)
		{
			if (MISC::IS_BIT_SET(Global_7356, 9))
			{
				vLocal_81.x = (vLocal_81.x + 2f);
			}
			else
			{
				vLocal_81.x = (vLocal_81.x + 12f);
			}
		}
		if (vLocal_81.x > vLocal_87.x || vLocal_81.x == vLocal_87.x)
		{
			vLocal_81.x = vLocal_87.x;
			bLocal_121 = false;
		}
		if (bLocal_122)
		{
			vLocal_81.f_1 = (vLocal_81.y - 6f);
		}
		if (vLocal_81.y < vLocal_87.y || vLocal_81.y == vLocal_87.y)
		{
			vLocal_81.f_1 = vLocal_87.y;
			bLocal_122 = false;
		}
		if (bLocal_123)
		{
			vLocal_81.f_2 = (vLocal_81.z - 10f);
		}
		if (vLocal_81.z < vLocal_87.z || vLocal_81.z == vLocal_87.z)
		{
			vLocal_81.f_2 = vLocal_87.z;
			bLocal_123 = false;
		}
		if (bLocal_123 == 0)
		{
			if (bLocal_118)
			{
				vLocal_78.x = (vLocal_78.x + 1f);
			}
			if (vLocal_78.x > vLocal_84.x || vLocal_78.x == vLocal_84.x)
			{
				vLocal_78.x = vLocal_84.x;
				bLocal_118 = false;
			}
			if (bLocal_119)
			{
				vLocal_78.f_1 = (vLocal_78.y - 2f);
			}
			if (vLocal_78.y < vLocal_84.y || vLocal_78.y == vLocal_84.y)
			{
				vLocal_78.f_1 = vLocal_84.y;
				bLocal_119 = false;
			}
			if (bLocal_120)
			{
				vLocal_78.f_2 = (vLocal_78.z - 14f);
			}
			if (vLocal_78.z < vLocal_84.z || vLocal_78.z == vLocal_84.z)
			{
				vLocal_78.f_2 = vLocal_84.z;
				bLocal_120 = false;
			}
		}
		if (bLocal_126)
		{
			vLocal_78 = { vLocal_84 };
			vLocal_81 = { vLocal_87 };
			bLocal_118 = false;
			bLocal_119 = false;
			bLocal_120 = false;
			if (func_87() == 0)
			{
				MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_78, 0);
				MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_81);
			}
			func_104(0, 1);
		}
		else if (func_87() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_78, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_81);
		}
		if ((bLocal_118 == 0 && bLocal_119 == 0) && bLocal_120 == 0)
		{
			func_89();
		}
	}
	else
	{
		if (bLocal_118)
		{
			vLocal_78.x = (vLocal_78.x + 1f);
		}
		if (vLocal_78.x > vLocal_84.x || vLocal_78.x == vLocal_84.x)
		{
			bLocal_118 = false;
		}
		if (bLocal_119)
		{
			vLocal_78.f_1 = (vLocal_78.y - 2f);
		}
		if (vLocal_78.y < vLocal_84.y || vLocal_78.y == vLocal_84.y)
		{
			bLocal_119 = false;
		}
		if (bLocal_120)
		{
			vLocal_78.f_2 = (vLocal_78.z - 7f);
		}
		if (vLocal_78.z < vLocal_84.z || vLocal_78.z == vLocal_84.z)
		{
			bLocal_120 = false;
		}
		if ((bLocal_118 == 0 && bLocal_119 == 0) && bLocal_120 == 0)
		{
			func_89();
		}
	}
	MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_78, 0);
}

void func_89()
{
	func_1(0);
	if (func_87() == 0)
	{
		if (MISC::IS_BIT_SET(Global_7356, 30))
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19432[Global_19431 /*3*/]);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19439[Global_19431 /*3*/]);
		}
		vLocal_78 = { vLocal_84 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_78, 0);
	}
	Global_21838 = 0;
	func_111(0, 0);
	func_115(0);
	iLocal_115 = 0;
	func_106(1);
	Global_19473 = 1;
	Global_21841 = 0;
	if (Global_19486.f_1 > 4)
	{
		Global_19486.f_1 = 6;
		Global_19464 = 1;
		func_90();
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_140))
	{
		func_151(iLocal_140, "SHUTDOWN_MOVIE");
	}
	SYSTEM::WAIT(0);
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_141);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_140);
	if (Global_19666 == 1)
	{
		MISC::SET_BIT(&Global_7356, 17);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 17);
	}
	MISC::CLEAR_BIT(&Global_7356, 18);
	MISC::CLEAR_BIT(&Global_7356, 21);
	HUD::CLEAR_FLOATING_HELP(0, true);
	MISC::CLEAR_BIT(&Global_7358, 3);
	MISC::CLEAR_BIT(&Global_4269765, 3);
	MISC::SET_GAME_PAUSED(false);
	PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
	HUD::RESET_HUD_COMPONENT_VALUES(15);
	Global_21842 = 1;
	AUDIO::STOP_SOUND(iLocal_112);
	AUDIO::RELEASE_SOUND_ID(iLocal_112);
	HUD::BUSYSPINNER_OFF();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
	}
	func_106(1);
	MOBILE::_0xA2CCBE62CD4C91A4(0);
	MOBILE::_SET_MOBILE_PHONE_UNK(false);
	MOBILE::_0x1B0B4AEED5B9B41C(1f);
	if (Global_4268490 > 0 && Global_4268490 < 13)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_33[Global_4268490]);
	}
	func_104(0, 1);
	if (func_159(0, 1, bLocal_64, 1))
	{
		bLocal_64 = false;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_90()
{
	vector3 vVar0[24];

	if (Global_19469 == 1)
	{
		return;
	}
	if (Global_19486.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		if (Global_76622)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_19486.f_1)
	{
		case 6:
			func_152(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_98(Global_7961);
			if (Global_7961 == 1)
			{
				func_152(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				Global_19466 = Global_19490;
			}
			else
			{
				func_152(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19491), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_7356, 17);
			}
			else if (Global_76622)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_97(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_97(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_97(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_97(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_7356, 17);
			}
			if (Global_76622)
			{
				func_95();
				MISC::CLEAR_BIT(&Global_7358, 9);
				func_152(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			break;
		case 7:
			break;
		case 10:
			func_152(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_97(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_97(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7356, 17);
			if (MISC::IS_BIT_SET(Global_7356, 20))
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		case 9:
			if (Global_19485 == 1)
			{
				func_94();
				func_152(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486 /*20*/].f_6), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				if (Global_20818)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_62("CELL_300");
					func_62("CELL_217");
					func_62("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_93(Global_6671, Global_19486) == 0)
				{
					func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_217", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_152(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_152(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486 /*20*/].f_6), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_94();
				if (Global_20818)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_62("CELL_300");
					func_62("CELL_219");
					func_62("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_21063)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_93(Global_6671, Global_19486) == 0)
					{
						func_152(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_152(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), &cVar0, &(Global_1798[Global_6671 /*29*/].f_3), 0);
					}
				}
				func_152(Global_19467, "DISPLAY_VIEW", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			func_91();
			break;
		default:
			break;
	}
}

void func_91()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		func_92();
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_7356, 20))
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_97(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7356, 17);
		}
		else
		{
			func_97(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_97(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7356, 17);
			if (MISC::IS_BIT_SET(Global_7356, 20))
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_92()
{
	if (Global_76622)
	{
		func_97(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_7356, 17);
	}
}

int func_93(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_94()
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

void func_95()
{
	if (Global_76622)
	{
		if (func_96() == 0)
		{
			return;
		}
		func_97(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::SET_BIT(&Global_7356, 17);
	}
}

int func_96()
{
	return 0;
}

void func_97(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_62(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_62(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_62(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_62(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_62(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_98(int iParam0)
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

	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_61(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_62(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111638.f_14136[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111638.f_14136[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111638.f_14136[iVar3 /*104*/].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76622)
								{
									iVar4 = 0;
									iVar4 = Global_4268499;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268500[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268500[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268500[iVar5 /*104*/].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42607;
											break;
										case 1:
											iVar6 = Global_42608;
											break;
										case 2:
											iVar6 = Global_42609;
											break;
										default:
											break;
									}
									func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_62(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7362);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_62(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_62(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_62(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_7363[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_7357, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_62(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_97(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_99()
{
	switch (iLocal_100)
	{
		case 1:
			HUD::CLEAR_FLOATING_HELP(0, true);
			if (MISC::IS_BIT_SET(Global_7356, 28))
			{
				StringCopy(&cLocal_145, "CELL_296", 16);
				func_54();
			}
			else
			{
				StringCopy(&cLocal_145, "CELL_295", 16);
				func_28();
			}
			break;
		case 2:
			if (!MISC::IS_BIT_SET(Global_7356, 22))
			{
				HUD::CLEAR_FLOATING_HELP(0, true);
				if (MISC::IS_BIT_SET(Global_7356, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_86();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_85();
				}
				iLocal_100 = 2;
			}
			break;
		default:
			break;
	}
}

void func_100(bool bParam0)
{
	if (bParam0)
	{
		if (!func_113())
		{
			MISC::SET_BIT(&Global_1687687, 17);
		}
	}
	else if (func_113())
	{
		MISC::CLEAR_BIT(&Global_1687687, 17);
	}
}

bool func_101(int iParam0, int iParam1, int iParam2)
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

void func_102(bool bParam0)
{
	if (bParam0)
	{
		if (!func_103())
		{
			MISC::SET_BIT(&Global_1687687, 18);
		}
	}
	else if (func_103())
	{
		MISC::CLEAR_BIT(&Global_1687687, 18);
	}
}

bool func_103()
{
	return MISC::IS_BIT_SET(Global_1687687, 18);
}

void func_104(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_105(0))
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

bool func_105(int iParam0)
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

void func_106(bool bParam0)
{
	if ((Global_4456448.f_227351 == 0 && Global_4456448.f_227352 == 0) && !Global_1672021)
	{
		if (func_107(PLAYER::PLAYER_ID()) && bParam0)
		{
			Global_1703107 = 1;
		}
		else
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

bool func_107(int iParam0)
{
	if (iParam0 != func_110())
	{
		if (func_109(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_108(Global_2425662[iParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return false;
}

int func_108(int iParam0)
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

bool func_109(int iParam0, bool bParam1, bool bParam2)
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

int func_110()
{
	return -1;
}

void func_111(bool bParam0, bool bParam1)
{
	if (Global_4456448.f_227351 == 1)
	{
	}
	else if (Global_4456448.f_227352 == 1)
	{
	}
	else
	{
		MOBILE::CELL_CAM_ACTIVATE(bParam0, bParam1);
	}
}

bool func_112()
{
	if (MISC::IS_BIT_SET(Global_7356, 15))
	{
		return true;
	}
	return false;
}

bool func_113()
{
	return MISC::IS_BIT_SET(Global_1687687, 17);
}

void func_114()
{
	if (Global_19428)
	{
		vLocal_84 = { -90.3f, 0f, 90f };
		vLocal_87 = { 1.5f, 0f, -17f };
		if (func_87())
		{
			MOBILE::GET_MOBILE_PHONE_ROTATION(&vLocal_90, 0);
			vLocal_84 = { vLocal_90 };
			MOBILE::GET_MOBILE_PHONE_POSITION(&vLocal_93);
			vLocal_87 = { vLocal_93 };
			bLocal_118 = false;
			bLocal_119 = false;
			bLocal_120 = false;
			bLocal_121 = false;
			bLocal_122 = false;
			bLocal_123 = false;
		}
		if (bLocal_120 == 0)
		{
			if (bLocal_121)
			{
				vLocal_81.x = (vLocal_81.x - 14f);
			}
			if (vLocal_81.x < vLocal_87.x || vLocal_81.x == vLocal_87.x)
			{
				bLocal_121 = false;
			}
			if (bLocal_122)
			{
				vLocal_81.f_1 = (vLocal_81.y + 7f);
			}
			if (vLocal_81.y > vLocal_87.y || vLocal_81.y == vLocal_87.y)
			{
				bLocal_122 = false;
			}
			if (bLocal_123)
			{
				vLocal_81.f_2 = (vLocal_81.z + 12f);
			}
			if (vLocal_81.z > vLocal_87.z || vLocal_81.z == vLocal_87.z)
			{
				bLocal_123 = false;
			}
		}
		if (bLocal_118)
		{
			vLocal_78.x = (vLocal_78.x - 1f);
		}
		if (vLocal_78.x < vLocal_84.x || vLocal_78.x == vLocal_84.x)
		{
			vLocal_78.x = vLocal_84.x;
			bLocal_118 = false;
		}
		if (bLocal_119)
		{
			vLocal_78.f_1 = (vLocal_78.y - 0.5f);
		}
		if (vLocal_78.y < vLocal_84.y || vLocal_78.y == vLocal_84.y)
		{
			vLocal_78.f_1 = vLocal_84.y;
			bLocal_119 = false;
		}
		if (bLocal_120)
		{
			vLocal_78.f_2 = (vLocal_78.z + 11f);
		}
		if (vLocal_78.z > vLocal_84.z || vLocal_78.z == vLocal_84.z)
		{
			vLocal_78.f_2 = vLocal_84.z;
			bLocal_120 = false;
		}
		if (func_87() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_78, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_81);
		}
	}
	else
	{
		vLocal_84 = { -93.9f, 4.9f, 90.7f };
		if (bLocal_118)
		{
			vLocal_78.x = (vLocal_78.x - 1f);
		}
		if (vLocal_78.x < vLocal_84.x || vLocal_78.x == vLocal_84.x)
		{
			bLocal_118 = false;
		}
		if (bLocal_119)
		{
			vLocal_78.f_1 = (vLocal_78.y + 2f);
		}
		if (vLocal_78.y > vLocal_84.y || vLocal_78.y == vLocal_84.y)
		{
			bLocal_119 = false;
		}
		if (bLocal_120)
		{
			vLocal_78.f_2 = (vLocal_78.z + 7f);
		}
		if (vLocal_78.z > vLocal_84.z || vLocal_78.z == vLocal_84.z)
		{
			bLocal_120 = false;
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_78, 0);
	}
	if (Global_19428)
	{
		if (((((bLocal_118 == 0 && bLocal_119 == 0) && bLocal_120 == 0) && bLocal_121 == 0) && bLocal_122 == 0) && bLocal_123 == 0)
		{
			if (func_87())
			{
			}
			else
			{
				vLocal_78 = { vLocal_84 };
				MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_78, 0);
				vLocal_81 = { vLocal_87 };
				MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_81);
			}
			if (iLocal_103 == 0)
			{
				Global_21839 = 0;
				func_111(1, 1);
				iLocal_115 = 1;
				func_115(1);
				func_59();
				func_116();
				func_57(0);
				SYSTEM::SETTIMERA(0);
				bLocal_142 = true;
				iLocal_143 = 1;
				func_128();
				func_152(iLocal_140, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_144), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				if (!MISC::IS_BIT_SET(Global_4269765, 2))
				{
					func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				}
				func_152(iLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_154();
			}
		}
	}
	else if ((bLocal_118 == 0 && bLocal_119 == 0) && bLocal_120 == 0)
	{
		vLocal_78 = { vLocal_84 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_78, 0);
		Global_21839 = 0;
	}
}

void func_115(bool bParam0)
{
	if (func_161())
	{
		if (bParam0)
		{
			if (!GRAPHICS::_0xBCEDB009461DA156())
			{
				GRAPHICS::_0x7AC24EAB6D74118D(true);
				if (Global_4268490 > 0 && Global_4268490 < 99)
				{
					GRAPHICS::_0x27FEB5254759CDE3(sLocal_33[Global_4268490], false);
					MOBILE::_0x1B0B4AEED5B9B41C(0.25f);
				}
			}
		}
		else if (GRAPHICS::_0xBCEDB009461DA156())
		{
			GRAPHICS::_0x7AC24EAB6D74118D(false);
		}
	}
}

void func_116()
{
	if (Global_4268489 > 0 && Global_4268489 < 99)
	{
		if (!Global_1672021)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER(sLocal_19[Global_4268489]);
		}
	}
}

void func_117()
{
	if (Global_19428)
	{
		iLocal_125 = 0;
		func_59();
		func_104(1, 1);
		func_111(1, 1);
		iLocal_115 = 1;
		Global_21842 = 1;
	}
}

void func_118()
{
	if (Global_4456448.f_227351 == 1 && func_119())
	{
		return;
	}
	if (bLocal_127 == 0)
	{
		if (MISC::IS_BIT_SET(Global_7356, 28))
		{
			StringCopy(&cLocal_145, "CELL_296", 16);
			func_54();
		}
		else
		{
			StringCopy(&cLocal_145, "CELL_295", 16);
			func_28();
		}
		if (MISC::ARE_STRINGS_EQUAL(&cLocal_145, "DUMMYCOMPARISON"))
		{
			fLocal_98 = fLocal_99;
			fLocal_96 = fLocal_97;
			fLocal_99 = fLocal_98;
			fLocal_97 = fLocal_96;
		}
		iLocal_100 = 1;
	}
}

bool func_119()
{
	if (((func_123() || func_122()) || func_121()) || func_120())
	{
		return true;
	}
	return false;
}

var func_120()
{
	return Global_2450632.f_19;
}

var func_121()
{
	return Global_2450632.f_17;
}

var func_122()
{
	return Global_2450632.f_16;
}

var func_123()
{
	return Global_2450632.f_15;
}

void func_124()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_19475, true);
	}
}

void func_125()
{
	GRAPHICS::_0x1072F115DAB0717E(false, false);
	bLocal_121 = true;
	bLocal_122 = true;
	bLocal_123 = true;
	iLocal_124 = 0;
	iLocal_125 = 1;
}

void func_126()
{
	func_127();
}

void func_127()
{
	if (bLocal_151)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			bLocal_151 = false;
		}
	}
	if (bLocal_151 == 0)
	{
	}
}

void func_128()
{
	if (Global_19486.f_1 > 3)
	{
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_129()
{
	if (func_61(14))
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
		Global_19486 = func_11();
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

void func_130(int iParam0)
{
	if (func_132())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_148())
		{
			func_104(1, 1);
		}
		else
		{
			func_104(0, 0);
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
	if (!func_131())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_131()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_132()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_133()
{
	PAD::DISABLE_CONTROL_ACTION(0, 0, true);
	PAD::DISABLE_CONTROL_ACTION(0, 56, true);
	if (bLocal_150 == 0)
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_19459);
		PAD::SET_INPUT_EXCLUSIVE(0, Global_19456);
		PAD::DISABLE_CONTROL_ACTION(0, 278, true);
		PAD::DISABLE_CONTROL_ACTION(0, 279, true);
		PAD::DISABLE_CONTROL_ACTION(0, 280, true);
		PAD::DISABLE_CONTROL_ACTION(0, 281, true);
		PAD::DISABLE_CONTROL_ACTION(0, 282, true);
		PAD::DISABLE_CONTROL_ACTION(0, 282, true);
		PAD::DISABLE_CONTROL_ACTION(0, 284, true);
		PAD::DISABLE_CONTROL_ACTION(0, 285, true);
		PAD::DISABLE_CONTROL_ACTION(0, 69, true);
		PAD::DISABLE_CONTROL_ACTION(0, 70, true);
		PAD::DISABLE_CONTROL_ACTION(0, 114, true);
		PAD::DISABLE_CONTROL_ACTION(0, 71, true);
		PAD::DISABLE_CONTROL_ACTION(0, 72, true);
		PAD::DISABLE_CONTROL_ACTION(0, 74, true);
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
		PAD::DISABLE_CONTROL_ACTION(0, 76, true);
		PAD::DISABLE_CONTROL_ACTION(0, 73, true);
		PAD::DISABLE_CONTROL_ACTION(0, 77, true);
		PAD::DISABLE_CONTROL_ACTION(0, 78, true);
		PAD::DISABLE_CONTROL_ACTION(0, 286, true);
		PAD::DISABLE_CONTROL_ACTION(0, 287, true);
		PAD::DISABLE_CONTROL_ACTION(0, 79, true);
		PAD::DISABLE_CONTROL_ACTION(0, 80, true);
		PAD::DISABLE_CONTROL_ACTION(0, 81, true);
		PAD::DISABLE_CONTROL_ACTION(0, 82, true);
		PAD::DISABLE_CONTROL_ACTION(0, 86, true);
		PAD::DISABLE_CONTROL_ACTION(0, 59, true);
		PAD::DISABLE_CONTROL_ACTION(0, 60, true);
		PAD::DISABLE_CONTROL_ACTION(0, 61, true);
		PAD::DISABLE_CONTROL_ACTION(0, 62, true);
		PAD::DISABLE_CONTROL_ACTION(0, 63, true);
		PAD::DISABLE_CONTROL_ACTION(0, 64, true);
		PAD::DISABLE_CONTROL_ACTION(0, 87, true);
		PAD::DISABLE_CONTROL_ACTION(0, 88, true);
		PAD::DISABLE_CONTROL_ACTION(0, 89, true);
		PAD::DISABLE_CONTROL_ACTION(0, 90, true);
		PAD::DISABLE_CONTROL_ACTION(0, 107, true);
		PAD::DISABLE_CONTROL_ACTION(0, 108, true);
		PAD::DISABLE_CONTROL_ACTION(0, 109, true);
		PAD::DISABLE_CONTROL_ACTION(0, 110, true);
		PAD::DISABLE_CONTROL_ACTION(0, 111, true);
		PAD::DISABLE_CONTROL_ACTION(0, 112, true);
		PAD::DISABLE_CONTROL_ACTION(0, 113, true);
		PAD::DISABLE_CONTROL_ACTION(0, 114, true);
		PAD::DISABLE_CONTROL_ACTION(0, 91, true);
		PAD::DISABLE_CONTROL_ACTION(0, 92, true);
		PAD::DISABLE_CONTROL_ACTION(0, 68, true);
		PAD::DISABLE_CONTROL_ACTION(0, 102, true);
		PAD::DISABLE_CONTROL_ACTION(0, 136, true);
		PAD::DISABLE_CONTROL_ACTION(0, 137, true);
		PAD::DISABLE_CONTROL_ACTION(0, 138, true);
		PAD::DISABLE_CONTROL_ACTION(0, 139, true);
		PAD::DISABLE_CONTROL_ACTION(0, 102, true);
	}
}

bool func_134()
{
	int iVar0;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, false))
			{
				return true;
			}
			else if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
			{
				return true;
			}
		}
	}
	return false;
}

bool func_135()
{
	var uVar0;

	func_143(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return true;
		}
	}
	if (func_142())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_141())
	{
		return true;
	}
	if (func_140(159))
	{
		if (!func_139())
		{
			return true;
		}
	}
	if (func_140(157))
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	if (func_136() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_136()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_136()
{
	switch (func_138())
	{
		case 0:
			return func_137();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_137()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("FREEMODE");
		default:
			break;
	}
	return joaat("FREEMODE");
}

int func_138()
{
	return Global_30768;
}

bool func_139()
{
	return Global_2450632.f_598;
}

bool func_140(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_141()
{
	return Global_2460680;
}

bool func_142()
{
	return Global_2450632.f_593;
}

void func_143(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_144(iVar0);
					break;
				case 589125870:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar4, 4);
					if (vVar4.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_144(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_109(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_145(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, vVar0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}

bool func_145(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*bParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_146()
{
	if (iLocal_156 == 1)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	}
	else
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
}

void func_147(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_148()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

void func_149()
{
	if (func_150())
	{
		GRAPHICS::_0x4AF92ACD3141D96C();
		if (GRAPHICS::_0x2A893980E96B659A(0))
		{
			iLocal_103 = 1;
			iLocal_111 = 0;
		}
		else
		{
			Global_21842 = 1;
			Global_19486.f_1 = 3;
			HUD::BUSYSPINNER_OFF();
		}
	}
	else
	{
		iLocal_109 = 0;
		iLocal_110 = 0;
		if (iLocal_104 == 1)
		{
			if (bLocal_127 == 0)
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_140))
				{
					if (func_161())
					{
						if (Global_4268490 == 0)
						{
							if (!MISC::IS_BIT_SET(Global_4269765, 2))
							{
								func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
							}
						}
						func_152(iLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					}
					else
					{
						if (!MISC::IS_BIT_SET(Global_4269765, 2))
						{
							func_152(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
						}
						func_152(iLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					}
				}
			}
			else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_140))
			{
				func_152(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				func_152(iLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			iLocal_104 = 0;
		}
		iLocal_111 = 0;
		HUD::BUSYSPINNER_OFF();
	}
}

bool func_150()
{
	if (Global_4456448.f_227351 == 1)
	{
		if (Global_76622)
		{
			return false;
		}
	}
	if (Global_4456448.f_227352 == 1)
	{
		if (Global_76622)
		{
			return false;
		}
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION())
	{
		if (MISC::IS_BIT_SET(Global_7357, 28))
		{
			return false;
		}
	}
	return true;
}

void func_151(int iParam0, char* sParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_152(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_153()
{
	if (Global_76622)
	{
		Global_19486 = 3;
	}
	else
	{
		Global_19486 = func_11();
	}
	if (Global_19486 > 3)
	{
		Global_19486 = 3;
	}
	return Global_111638.f_14046[Global_19486 /*20*/].f_7;
}

void func_154()
{
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 8;
	}
	Global_21841 = 0;
	bLocal_127 = false;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		vLocal_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (Global_19428)
	{
		while (SYSTEM::TIMERA() < iLocal_137)
		{
			SYSTEM::WAIT(0);
			func_128();
			func_83();
			RECORDING::_STOP_RECORDING_THIS_FRAME();
		}
		func_151(iLocal_140, "OPEN_SHUTTER");
		func_146();
		func_118();
		bLocal_129 = true;
		SYSTEM::SETTIMERB(0);
	}
	else
	{
		func_111(1, 1);
		func_115(1);
		func_59();
		func_116();
		func_57(0);
		iLocal_115 = 1;
	}
}

void func_155(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 15);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 15);
	}
}

bool func_156()
{
	return Global_1312854;
}

int func_157(int iParam0, bool bParam1)
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

void func_158()
{
}

bool func_159(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && bParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_160()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
			MOBILE::_0x53F4892D18EC90A4(fLocal_157);
			MOBILE::_0x3117D84EFA60F77B(fLocal_158);
			MOBILE::_0xAC2890471901861C(fLocal_159);
		}
		else
		{
			MOBILE::_0x53F4892D18EC90A4(fLocal_157);
			MOBILE::_0x3117D84EFA60F77B(fLocal_158);
			MOBILE::_0xAC2890471901861C(fLocal_159);
		}
	}
	MOBILE::_0x15E69E2802C24B8D(fLocal_160);
	MOBILE::_0xD6ADE981781FCA09(fLocal_161);
	MOBILE::_0xF1E22DC13F5EEBAD(fLocal_162);
	MOBILE::_0x466DA42C89865553(fLocal_163);
	func_56();
}

bool func_161()
{
	if (iLocal_56 == 0)
	{
		iLocal_56 = 1;
	}
	return true;
}

