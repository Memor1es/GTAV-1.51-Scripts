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
	int iLocal_45 = 0;
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
	bool bLocal_59 = false;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	bool bLocal_69 = false;
	var uLocal_70 = 0;
	bool bLocal_71 = false;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76[1] = { 0 };
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 16;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	int iLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	int iLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	int iLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	int iLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int iLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	int iLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 1097859072;
	var uLocal_270 = 1500;
	var uLocal_271 = 45;
	var uLocal_272 = 1103626240;
	var uLocal_273 = 5;
	int iLocal_274[1] = { 0 };
	char* sLocal_276 = NULL;
	char* sLocal_277 = NULL;
	var uLocal_278 = 1;
	var uLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282[1] = { 0 };
	int iLocal_284[4] = { 0, 0, 0, 0 };
	struct<9> Local_289 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	vector3 vLocal_302 = { 0f, 0f, 0f };
	vector3 vLocal_305 = { 0f, 0f, 0f };
	vector3 vLocal_308 = { 0f, 0f, 0f };
	vector3 vLocal_311 = { 0f, 0f, 0f };
	vector3 vLocal_314 = { 0f, 0f, 0f };
	vector3 vLocal_317 = { 0f, 0f, 0f };
	vector3 vLocal_320 = { 0f, 0f, 0f };
	vector3 vLocal_323 = { 0f, 0f, 0f };
	float fLocal_326 = 0f;
	float fLocal_327 = 0f;
	float fLocal_328 = 0f;
	float fLocal_329 = 0f;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	int iLocal_332 = 0;
	var uLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	bool bLocal_336 = false;
	bool bLocal_337 = false;
	bool bLocal_338 = false;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	struct<5> ScriptParam_0 = { 1, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_63 = { 500f, 500f, 500f };
	fLocal_329 = -1f;
	iLocal_332 = -1;
	bLocal_336 = true;
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("stripperhome");
	MISC::SET_MISSION_FLAG(true);
	PLAYER::_0xDE45D1A1EF45EE61(PLAYER::PLAYER_ID(), true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(75))
	{
		func_303();
	}
	bLocal_337 = ScriptParam_0.f_5;
	if (bLocal_337)
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
		func_298(0, -1, 0);
		NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	uLocal_76[0] = ScriptParam_0[0];
	Global_110663.f_1 = uLocal_76[0];
	bVar0 = false;
	bVar1 = true;
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	if (func_297() && ScriptParam_0.f_4)
	{
		bVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_268(&ScriptParam_0, bVar0) && iLocal_74 != 6) && iLocal_74 != 5) && (iLocal_74 != -1 || !func_267(uLocal_333, 1024)))
	{
		func_259(0);
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_258(0, 0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_258(1, 0));
	if (!bVar1)
	{
		iLocal_74 = 2;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_335 > 0)
		{
			func_256();
			iLocal_335 = (iLocal_335 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		}
		switch (iLocal_74)
		{
			case -1:
				func_255();
				break;
			case 0:
				func_215(1);
				break;
			case 1:
				func_108();
				break;
			case 2:
				func_215(0);
				break;
			case 3:
				func_90();
				break;
			case 4:
				func_38(bLocal_336);
				break;
			case 5:
				func_11();
				break;
			case 6:
				if (!func_10(&iLocal_261))
				{
					func_7(&iLocal_261);
				}
				else if (func_1(&iLocal_261, 7.5f))
				{
					func_303();
				}
				break;
		}
	}
}

bool func_1(int* iParam0, float fParam1)
{
	if (func_3(iParam0, fParam1))
	{
		func_2(iParam0);
		return true;
	}
	return false;
}

void func_2(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

bool func_3(int* iParam0, float fParam1)
{
	if (func_10(iParam0))
	{
		if (func_4(iParam0) > fParam1)
		{
			return true;
		}
	}
	return false;
}

float func_4(int* iParam0)
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_5(bool bParam0)
{
	float fVar0;
	float fVar1;
	void fVar2;
	float fVar3;
	float fVar4;

	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar2 = NETWORK::_0xBA7F0B77D80A4EB7();
		fVar3 = SYSTEM::TO_FLOAT(fVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_6(int* iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 2);
}

void func_7(int* iParam0)
{
	if (!func_10(iParam0))
	{
		func_8(iParam0);
	}
}

void func_8(int* iParam0)
{
	func_9(iParam0, 0f);
}

void func_9(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_5(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_10(int iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 1);
}

void func_11()
{
	if (!func_267(uLocal_333, 8192))
	{
		if (func_37())
		{
			func_26();
		}
		else
		{
			iLocal_74 = 6;
		}
	}
	if (func_267(uLocal_333, 16384))
	{
		if (func_12())
		{
			iLocal_74 = 6;
		}
	}
}

bool func_12()
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_274[0], false))
	{
		return true;
	}
	if (func_267(uLocal_333, 8192))
	{
		PED::SET_PED_RESET_FLAG(iLocal_274[0], 60, true);
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_274[0], 96.8033f, -1287.597f, 28.2688f, 5f, 5f, 2f, false, true, 1) || func_25(PLAYER::PLAYER_PED_ID(), 96.8033f, -1287.597f, 28.2688f, 1) > 100f)
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(96.12f, -1284.91f, 29.43f, 5f, joaat("PROP_MAGENTA_DOOR"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("PROP_MAGENTA_DOOR"), 96.12f, -1284.91f, 29.43f, true, 0f, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_284[0]))
			{
				if (CAM::IS_CAM_RENDERING(iLocal_284[0]))
				{
					func_13(1, 1, 0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::DESTROY_CAM(iLocal_284[0], true);
				}
			}
			PED::DELETE_PED(&(iLocal_274[0]));
			return true;
		}
	}
	return false;
}

void func_13(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(true);
	func_15(0, 1, bParam2, 0, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	func_14(23, 0);
}

void func_14(int iParam0, bool bParam1)
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

void func_15(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_24(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_23())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_22(1, bParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_24(0);
		HUD::THEFEED_RESUME();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_22(0, bParam3, bParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_20(PLAYER::PLAYER_ID())) && !func_17(PLAYER::PLAYER_ID(), 0)) && !func_16()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_20(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_76620 = 0;
	}
}

bool func_16()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_18, 14);
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312745;
}

bool func_20(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return true;
	}
	if (func_21())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return true;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 2))
	{
		return true;
	}
	return false;
}

bool func_21()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_22(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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

bool func_23()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_24(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 13);
	}
}

float func_25(int iParam0, vector3 vParam1, bool bParam4)
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

void func_26()
{
	int iVar0;

	func_29();
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(96.12f, -1284.91f, 29.43f, 5f, joaat("PROP_MAGENTA_DOOR"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("PROP_MAGENTA_DOOR"), 96.12f, -1284.91f, 29.43f, false, 0f, false);
	}
	func_27(&uLocal_333, 16384);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_274[0], false);
	PED::SET_PED_CONFIG_FLAG(iLocal_274[0], 104, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 98.2041f, -1291.252f, 28.2688f, 1f, -1, 0.25f, true, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 107.6303f, -1304.742f, 27.7688f, 1f, -1, 0.25f, false, 40000f);
	TASK::TASK_PLAY_ANIM(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0f, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_274[0], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	func_27(&uLocal_333, 8192);
}

void func_27(var uParam0, int iParam1)
{
	func_28(uParam0, iParam1);
}

void func_28(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_29()
{
	if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_274[0]) && func_36(1, 0, 1))
	{
		func_30(0, 0, 0);
		iLocal_284[0] = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.573f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, true, 2);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

void func_30(int iParam0, bool bParam1, bool bParam2)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(bParam1);
	func_31(0);
	func_15(1, 1, bParam2, 0, 0, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_14(23, 1);
}

void func_31(int iParam0)
{
	if (func_35())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_34())
		{
			func_32(1, 1);
		}
		else
		{
			func_32(0, 0);
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
	if (!func_23())
	{
		Global_19486.f_1 = 3;
	}
}

void func_32(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_33(0))
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

bool func_33(int iParam0)
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

bool func_34()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_35()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

bool func_36(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return false;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			return false;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return false;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				return false;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					return false;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return false;
			}
		}
	}
	else if (bParam1)
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

bool func_37()
{
	if ((uLocal_76[0] == 8 || uLocal_76[0] == 9) || func_25(iLocal_274[0], 96.12f, -1284.91f, 29.43f, 1) > 10f)
	{
		return false;
	}
	return true;
}

void func_38(bool bParam0)
{
	vector3 vVar0;
	var uVar3;
	int iVar4;

	func_65();
	if (bParam0)
	{
		vVar0 = { vLocal_308 };
	}
	else
	{
		func_64(&vVar0, &uVar3, 0);
	}
	func_61(vVar0);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_274[0], false))
		{
			iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar4, false))
			{
				if (bLocal_338)
				{
					if (func_59(iVar4, 4f, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
					{
						func_58();
						TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_274[0], 0, 16777216);
						func_39();
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vVar0, 4f, 4f, 2f, true, true, 2))
				{
					bLocal_338 = true;
				}
			}
		}
	}
}

void func_39()
{
	func_57();
	func_50(295, 0, 0);
	func_40(0);
	func_303();
}

void func_40(bool bParam0)
{
	struct<8> Var0[3];
	struct<6> Var25[3];

	if (!func_47())
	{
		return;
	}
	if (!bLocal_69)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Location", 32);
	StringCopy(&(Var0[2 /*8*/]), "Type", 32);
	if (bParam0)
	{
		StringCopy(&(Var25[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var25[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var25[1 /*6*/]), "City", 24);
	StringCopy(&(Var25[2 /*6*/]), "????", 24);
	if (func_45(200, &Var25, &Var0, 3, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, func_44(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(108, func_43(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(102, func_42(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(8, func_41(), 0f);
	}
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	bLocal_69 = false;
}

int func_41()
{
	return iLocal_67;
}

int func_42()
{
	return iLocal_68;
}

int func_43()
{
	return iLocal_66;
}

int func_44()
{
	return 0;
}

bool func_45(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) && NETWORK::_NETWORK_GET_ROS_PRIVILEGE_4())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				Var69 = { func_46(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var69))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2458936.f_3)
			{
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_1662155.f_10));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return true;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
	{
	}
	if (!NETWORK::_NETWORK_GET_ROS_PRIVILEGE_4())
	{
	}
	return false;
}

struct<13> func_46(int iParam0)
{
	struct<13> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

bool func_47()
{
	if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && func_48())
	{
		return true;
	}
	return false;
}

bool func_48()
{
	if (func_49())
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return false;
	}
	return true;
}

bool func_49()
{
	return Global_2461181;
}

void func_50(int iParam0, int iParam1, int iParam2)
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
		func_56((891 + iParam0), 1, -1, 1);
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
		func_51();
	}
}

void func_51()
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
		func_55(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76622)
		{
			if (func_54() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_52();
				}
			}
		}
	}
}

int func_52()
{
	if (func_53(0))
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

bool func_53(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

int func_54()
{
	return Global_30768;
}

bool func_55(int iParam0, int iParam1)
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

bool func_56(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
		iParam2 = func_19();
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

void func_57()
{
	iLocal_68++;
	bLocal_69 = true;
}

void func_58()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_274[0], false))
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_274[0], true);
		if (PED::IS_PED_IN_GROUP(iLocal_274[0]))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_274[0]);
		}
	}
}

bool func_59(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, true);
	PAD::DISABLE_CONTROL_ACTION(0, 72, true);
	PAD::DISABLE_CONTROL_ACTION(0, 76, true);
	PAD::DISABLE_CONTROL_ACTION(0, 73, true);
	PAD::DISABLE_CONTROL_ACTION(0, 59, true);
	PAD::DISABLE_CONTROL_ACTION(0, 60, true);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, true);
		PAD::DISABLE_CONTROL_ACTION(0, 70, true);
		PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 86, true);
	PAD::DISABLE_CONTROL_ACTION(0, 81, true);
	PAD::DISABLE_CONTROL_ACTION(0, 82, true);
	PAD::DISABLE_CONTROL_ACTION(0, 138, true);
	PAD::DISABLE_CONTROL_ACTION(0, 136, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 107, true);
	PAD::DISABLE_CONTROL_ACTION(0, 110, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 87, true);
	PAD::DISABLE_CONTROL_ACTION(0, 88, true);
	PAD::DISABLE_CONTROL_ACTION(0, 113, true);
	PAD::DISABLE_CONTROL_ACTION(0, 115, true);
	PAD::DISABLE_CONTROL_ACTION(0, 116, true);
	PAD::DISABLE_CONTROL_ACTION(0, 117, true);
	PAD::DISABLE_CONTROL_ACTION(0, 118, true);
	PAD::DISABLE_CONTROL_ACTION(0, 119, true);
	PAD::DISABLE_CONTROL_ACTION(0, 352, true);
	PAD::DISABLE_CONTROL_ACTION(0, 131, true);
	PAD::DISABLE_CONTROL_ACTION(0, 132, true);
	PAD::DISABLE_CONTROL_ACTION(0, 123, true);
	PAD::DISABLE_CONTROL_ACTION(0, 126, true);
	PAD::DISABLE_CONTROL_ACTION(0, 129, true);
	PAD::DISABLE_CONTROL_ACTION(0, 130, true);
	PAD::DISABLE_CONTROL_ACTION(0, 133, true);
	PAD::DISABLE_CONTROL_ACTION(0, 134, true);
	CAM::_0x17FCA7199A530203();
	func_60(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

void func_60(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::_GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

void func_61(vector3 vParam0)
{
	int iVar0;

	if (HUD::DOES_BLIP_EXIST(iLocal_281))
	{
		HUD::REMOVE_BLIP(&iLocal_281);
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_274[0], false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_274[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_280))
				{
					iLocal_280 = func_62(vParam0, 1);
				}
			}
		}
	}
}

int func_62(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_63(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_63(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_64(var uParam0, float fParam1, bool bParam2)
{
	vLocal_317 = { vLocal_317 };
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92.8829f, -1281.123f, 28.1845f };
				*fParam1 = 15f;
			}
			else
			{
				*uParam0 = { vLocal_314 };
				*fParam1 = fLocal_326;
			}
			vLocal_317 = { *uParam0 };
			break;
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.991f, 187.4827f, 59.1337f };
				*fParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { vLocal_314 };
				*fParam1 = fLocal_326;
			}
			vLocal_317 = { *uParam0 };
			break;
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.432f, 3776.85f, 33.5178f };
				*fParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { vLocal_314 };
				*fParam1 = fLocal_326;
			}
			vLocal_317 = { *uParam0 };
			break;
	}
}

void func_65()
{
	if (PED::IS_PED_INJURED(iLocal_274[0]))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]))
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD(iLocal_274[0], false))
		{
		}
		func_66(0);
	}
}

void func_66(int iParam0)
{
	if ((uLocal_76[0] > -1 && uLocal_76[0] < 10) && iParam0 != 2)
	{
		func_88(uLocal_76[0], (func_89(uLocal_76[0]) / 2));
	}
	func_86();
	switch (iParam0)
	{
		case 0:
			func_84("SCLUB_HOME_D", uLocal_76[0]);
			func_88(uLocal_76[0], 0);
			func_72(uLocal_76[0], 1);
			iLocal_74 = 6;
			break;
		case 1:
			HUD::CLEAR_PRINTS();
			func_67("SCLUB_HOME_A", uLocal_76[0], 0);
			iLocal_74 = 5;
			break;
		case 2:
			iLocal_74 = 5;
			break;
		case 4:
			func_84("SCLUB_HOME_D3", uLocal_76[0]);
			iLocal_74 = 6;
			break;
		case 3:
			if (func_25(iLocal_274[0], 92.5861f, -1282.86f, 28.2548f, 1) < 10f)
			{
				iLocal_74 = 5;
			}
			else
			{
				iLocal_74 = 6;
			}
			break;
	}
}

void func_67(char* sParam0, int iParam1, bool bParam2)
{
	var uVar0;

	MemCopy(&uVar0, {func_71(iParam1)}, 6);
	if (!func_70(sParam0, &uVar0))
	{
		if (!bParam2)
		{
			func_69(sParam0, &uVar0, -1);
		}
		else
		{
			func_68(sParam0, &uVar0);
		}
	}
}

void func_68(char* sParam0, char* sParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

void func_69(char* sParam0, char* sParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

bool func_70(char* sParam0, char* sParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

struct<4> func_71(int iParam0)
{
	struct<4> Var0;

	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_72(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_27(&(Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_73(&(Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
}

void func_73(var uParam0, int iParam1)
{
	func_74(uParam0, iParam1);
}

void func_74(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_75()
{
	int iVar0;

	iVar0 = func_77();
	switch (iVar0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		default:
			switch (func_76(-1))
			{
				case 0:
					return 3;
				case 1:
					return 4;
				case 2:
					return 5;
				case 3:
					return 6;
				case 4:
					return 7;
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_77()
{
	func_78();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_78()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_82(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_81(PLAYER::PLAYER_PED_ID());
			if (func_80(iVar0) && (!func_79(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_80(Global_111638.f_2358.f_539.f_4321))
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

bool func_79(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_80(int iParam0)
{
	return iParam0 < 3;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_82(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_82(int iParam0)
{
	if (func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_83(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_84(char* sParam0, int iParam1)
{
	var uVar0;

	MemCopy(&uVar0, {func_71(iParam1)}, 6);
	func_85(sParam0, &uVar0, 7500, 1);
}

void func_85(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
}

void func_86()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_281))
	{
		HUD::REMOVE_BLIP(&iLocal_281);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_280))
	{
		HUD::REMOVE_BLIP(&iLocal_280);
	}
	func_87();
}

void func_87()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_282[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_282[iVar0]));
		}
		iVar0++;
	}
}

void func_88(int iParam0, int iParam1)
{
	Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_89(int iParam0)
{
	return Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/];
}

void func_90()
{
	func_65();
	func_86();
	switch (iLocal_80)
	{
		case 0:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_274[0], false))
				{
					if (!func_107("SCLUB_SECLUDED"))
					{
						func_106("SCLUB_SECLUDED");
					}
					if (func_105() && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) == 0f)
					{
						HUD::CLEAR_HELP(true);
						STREAMING::REQUEST_ANIM_DICT(func_100(iLocal_274[0], 0, 0));
						iLocal_80 = 1;
					}
				}
			}
			break;
		case 1:
			if (func_93())
			{
				iLocal_80 = 2;
			}
			break;
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) != 1)
			{
				func_256();
				if (CLOCK::GET_CLOCK_HOURS() > 20 || CLOCK::GET_CLOCK_HOURS() < 4)
				{
					bLocal_336 = false;
				}
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_45);
				func_91(bLocal_336);
				iLocal_74 = 4;
			}
			break;
	}
}

void func_91(bool bParam0)
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_84("SCLUB_HOME_GO", uLocal_76[0]);
			}
			else
			{
				func_92("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		case 8:
		case 9:
			func_92("SCLUB_HOME_GO3", 7500, 1);
			break;
	}
}

void func_92(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

bool func_93()
{
	if (STREAMING::HAS_ANIM_DICT_LOADED(func_100(iLocal_274[0], 0, 0)))
	{
		func_94(iLocal_274[0], 0, 1, -1, 1);
		func_94(PLAYER::PLAYER_PED_ID(), 0, 0, -1, 1);
		return true;
	}
	return false;
}

void func_94(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;

	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return;
	}
	iLocal_45 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && func_99(0, 1))
	{
		if (iLocal_45 != 4)
		{
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(4);
		}
	}
	bVar1 = func_98(iVar0);
	sVar2 = func_100(iParam0, 0, 0);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar2);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_95(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_95(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_95(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_95(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_95(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0f, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iVar3);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar3);
		if (bParam4)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
		}
	}
}

char* func_95(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(18);
					}
					else
					{
						sVar0 = func_97(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(8);
				}
				else
				{
					sVar0 = func_97(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(18);
				}
				else
				{
					sVar0 = func_96(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(8);
			}
			else
			{
				sVar0 = func_96(13);
			}
			break;
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(19);
					}
					else
					{
						sVar0 = func_97(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(9);
				}
				else
				{
					sVar0 = func_97(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(19);
				}
				else
				{
					sVar0 = func_96(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(9);
			}
			else
			{
				sVar0 = func_96(14);
			}
			break;
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(20);
					}
					else
					{
						sVar0 = func_97(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(10);
				}
				else
				{
					sVar0 = func_97(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(20);
				}
				else
				{
					sVar0 = func_96(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(10);
			}
			else
			{
				sVar0 = func_96(15);
			}
			break;
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(21);
					}
					else
					{
						sVar0 = func_97(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(11);
				}
				else
				{
					sVar0 = func_97(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(21);
				}
				else
				{
					sVar0 = func_96(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(11);
			}
			else
			{
				sVar0 = func_96(16);
			}
			break;
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(22);
					}
					else
					{
						sVar0 = func_97(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(12);
				}
				else
				{
					sVar0 = func_97(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(22);
				}
				else
				{
					sVar0 = func_96(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(12);
			}
			else
			{
				sVar0 = func_96(17);
			}
			break;
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_97(3);
				}
				else
				{
					sVar0 = func_97(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(3);
			}
			else
			{
				sVar0 = func_96(2);
			}
			break;
		case 6:
			break;
	}
	return sVar0;
}

char* func_96(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		case 15:
			sVar0 = "sex_loop_male";
			break;
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_97(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

bool func_98(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_ENTITYXF"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
			case joaat("LAYOUT_LOW_LE7B"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_INFERNUS2"):
			case joaat("LAYOUT_LOW_SC1"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_DOMINATOR3"):
			case joaat("LAYOUT_LOW_TAIPAN"):
			case joaat("LAYOUT_LOW_ITALIGTO"):
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
			case 1240573865:
			case -627376728:
			case 986556497:
			case 1751095603:
				return true;
		}
	}
	return false;
}

bool func_99(bool bParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (bParam0)
	{
		bVar0 = CAM::_0xEE778F8C7E1142E2(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = CAM::_0xEE778F8C7E1142E2(1) == 4;
		}
	}
	return bVar0;
}

char* func_100(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (func_98(iVar0))
			{
				if ((!func_99(0, 1) || bParam2) && !bParam1)
				{
					return func_104();
				}
				else
				{
					return func_103();
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == 1456336509)
			{
				return "anim@mini@prostitutes@sex@veh_vstr@";
			}
		}
	}
	if ((!func_99(0, 1) || bParam2) && !bParam1)
	{
		return func_102();
	}
	return func_101();
}

char* func_101()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_102()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_103()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_104()
{
	return "mini@prostitutes@sexlow_veh";
}

bool func_105()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	var uVar10;
	vector3 vVar11;
	float fVar14;
	int iVar15;

	fVar6 = 25f;
	func_64(&vVar7, &uVar10, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(vVar3, &vVar11, 3f, 0))
		{
			fVar14 = SYSTEM::VDIST(vVar3, vVar11);
			if (fVar14 <= 10f)
			{
				return false;
			}
		}
		if (SYSTEM::VDIST(vVar3, vLocal_308) < 20f || SYSTEM::VDIST(vVar3, vVar7) < 20f)
		{
			return false;
		}
		if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(vVar3 - Vector(20f, 20f, 20f), vVar3 + Vector(20f, 20f, 20f)))
		{
			return false;
		}
		PED::GET_CLOSEST_PED(vVar3, fVar6, true, true, &iVar0, false, false, -1);
		if (!iVar0 == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), 17))
				{
					return false;
				}
			}
		}
		else
		{
			iVar1 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(vVar3, fVar6, 0, -1);
			if (!iVar1 == 0)
			{
				if (!iVar1 == iVar2)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
					{
						iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
						if (!iVar0 == 0)
						{
							return false;
						}
					}
				}
			}
		}
		iVar15 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (!iVar15 == 0)
		{
			return false;
		}
	}
	return true;
}

void func_106(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_107(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_108()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iLocal_75 < 12 && iLocal_75 >= 2)
	{
		if (func_213(3000))
		{
			CAM::DO_SCREEN_FADE_OUT(1000);
			iLocal_75 = 12;
		}
	}
	if (!bLocal_71 && iLocal_75 >= 5)
	{
		iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("BLIMP2"))
			{
				bLocal_71 = false;
			}
			else if (VEHICLE::IS_BIG_VEHICLE(VEHICLE::GET_LAST_DRIVEN_VEHICLE()) && uLocal_76[0] == 5)
			{
				bLocal_71 = func_210(&uLocal_70, -865f, 516.3f, 90f, 1, 15f);
			}
			else if (func_209(VEHICLE::GET_LAST_DRIVEN_VEHICLE()))
			{
				bLocal_71 = func_210(&uLocal_70, vLocal_323, 1, fLocal_327);
			}
			else
			{
				bLocal_71 = func_210(&uLocal_70, vLocal_308, 1, fLocal_327);
			}
		}
	}
	if (iLocal_75 > 0 && iLocal_75 < 13)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	switch (iLocal_75)
	{
		case 0:
			HUD::CLEAR_HELP(true);
			HUD::CLEAR_PRINTS();
			func_86();
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", false, -1);
			func_30(56, 1, 0);
			if (!func_267(uLocal_333, 131072))
			{
				func_27(&uLocal_333, 131072);
			}
			if (!func_267(uLocal_333, 256))
			{
				func_208();
				func_27(&uLocal_333, 256);
			}
			if (!func_267(uLocal_333, 32768))
			{
				STREAMING::REQUEST_ANIM_DICT(func_207());
				func_27(&uLocal_333, 32768);
			}
			if (!func_267(uLocal_333, 256))
			{
				STREAMING::REQUEST_ANIM_DICT(func_206());
				func_27(&uLocal_333, 256);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_340 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				func_205(PLAYER::PLAYER_PED_ID(), iLocal_340);
				iLocal_75 = 1;
			}
			else
			{
				func_58();
				func_203(PLAYER::PLAYER_PED_ID(), vLocal_302);
				func_203(iLocal_274[0], vLocal_305);
				iLocal_75 = 2;
			}
			func_201();
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_340, false))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_340, true), vLocal_308) < 2f)
				{
					func_58();
					func_203(PLAYER::PLAYER_PED_ID(), vLocal_302);
					func_203(iLocal_274[0], vLocal_305);
					STREAMING::NEW_LOAD_SCENE_STOP();
					iLocal_75 = 2;
				}
				else if (MISC::GET_GAME_TIMER() >= 10000)
				{
					iLocal_75 = 13;
				}
			}
			break;
		case 2:
			if (!CAM::IS_CAM_RENDERING(iLocal_284[0]))
			{
				CAM::SET_CAM_ACTIVE(iLocal_284[0], true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_340, false))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_340) == joaat("BLIMP2"))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_340, false, false);
					}
				}
				func_8(&iLocal_255);
				iLocal_75 = 3;
			}
			break;
		case 3:
			if (func_200(&iLocal_255) > 1f)
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_284[1], iLocal_284[0], 6000, 1, 1);
				func_199(&Local_289, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = CLOCK::GET_CLOCK_HOURS();
				iLocal_330 = iVar1 + 8;
				if (iLocal_330 > 23)
				{
					iLocal_330 = (iLocal_330 - 24);
				}
				Local_289.f_7 = iVar1;
				Local_289.f_8 = iLocal_330;
				func_2(&iLocal_255);
				iLocal_75 = 4;
			}
			break;
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_284[1]) && CAM::IS_CAM_RENDERING(iLocal_284[1]))
			{
				if (!func_267(uLocal_331, 512))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_340) && !ENTITY::IS_ENTITY_DEAD(iLocal_340, false))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_340, true);
					}
					func_196(PLAYER::PLAYER_PED_ID(), func_198());
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_195());
					func_172();
					func_27(&uLocal_331, 512);
				}
				else if (!func_267(uLocal_331, 2048))
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_274[0], false))
					{
					}
					if (!func_171() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_274[0]))
					{
						func_172();
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
							AUDIO::_PLAY_AMBIENT_SPEECH1(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", true);
						}
						func_27(&uLocal_331, 2048);
						func_8(&iLocal_255);
						sLocal_277 = func_170();
						iLocal_75 = 5;
					}
				}
			}
			break;
		case 5:
			if (func_200(&iLocal_255) > 1f)
			{
				if (func_145(iLocal_330, 0, sLocal_277, "", &Local_289, (func_200(&iLocal_255) * 0.2f), 0))
				{
					if (!func_171())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_340))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_340) != joaat("BLIMP2"))
							{
								MISC::CLEAR_AREA(vLocal_305, 20f, true, false, false, false);
							}
						}
						else
						{
							MISC::CLEAR_AREA(vLocal_305, 20f, true, false, false, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_274[0], false, false);
						}
						TASK::SET_PED_PATH_AVOID_FIRE(PLAYER::PLAYER_PED_ID(), false);
						func_8(&iLocal_255);
						iLocal_75 = 6;
					}
				}
			}
			break;
		case 6:
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			if (func_200(&iLocal_255) > 1.5f)
			{
				if (bLocal_71)
				{
					func_143(&uLocal_70);
				}
				func_8(&iLocal_255);
				iLocal_75 = 7;
			}
			break;
		case 7:
			if (!CAM::IS_CAM_RENDERING(iLocal_284[2]))
			{
				GRAPHICS::_0x03FC694AE06C5A20();
				GRAPHICS::_0x0AE73D8DF3A762B2(true);
				GRAPHICS::_SET_FAR_SHADOWS_SUPPRESSED(true);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_284[2], iLocal_284[1], 6000, 1, 1);
				func_8(&iLocal_255);
				iLocal_75 = 8;
			}
			break;
		case 8:
			if (!func_267(uLocal_333, 262144))
			{
				if (func_200(&iLocal_255) >= 1.25f)
				{
					func_142();
				}
			}
			if (func_200(&iLocal_255) > 6f)
			{
				CAM::SET_CAM_ACTIVE(iLocal_284[3], true);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_340, false))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_340) == joaat("BLIMP2"))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_340, true, false);
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_340, true, true);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_340, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_340, 1000f);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_340);
				}
				func_8(&iLocal_255);
				iLocal_75 = 10;
			}
			break;
		case 10:
			if (func_200(&iLocal_255) > 2f)
			{
				CAM::_RENDER_FIRST_PERSON_CAM(false, 0f, 3, 0);
				iLocal_75 = 13;
			}
			break;
		case 12:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				if (!func_267(uLocal_333, 262144))
				{
					PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vLocal_314, fLocal_326, false, true, true);
					func_142();
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_340, false))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_340) == joaat("BLIMP2"))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_340, true, false);
					}
				}
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_340, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_340, true, true);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_340, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_340, 1000f);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_340);
				}
				func_8(&iLocal_255);
				iLocal_75 = 13;
			}
			break;
		case 13:
			if (!CAM::IS_SCREEN_FADING_OUT() && func_200(&iLocal_255) >= 1f)
			{
				func_13(1, 1, 0);
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
				PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 30, 1, 0);
				if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), func_82(0)))
				{
					func_141();
				}
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), 15f, 1);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_340, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_340, true, true);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_340) != joaat("BLIMP2"))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_340, vLocal_308, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_340, fLocal_327);
						if (VEHICLE::IS_BIG_VEHICLE(iLocal_340) && uLocal_76[0] == 5)
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_340, -865f, 516.3f, 90f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_340, 15f);
						}
						else if (func_209(iLocal_340))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_340, vLocal_323, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_340, fLocal_328);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_340, 5f);
					}
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					func_199(&Local_289, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					CLOCK::ADD_TO_CLOCK_TIME(8, 0, 0);
					func_139(SYSTEM::TO_FLOAT(8));
					CAM::DO_SCREEN_FADE_IN(2000);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					func_199(&Local_289, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]))
				{
					PED::DELETE_PED(&(iLocal_274[0]));
				}
				if (!func_138(uLocal_76[0], -1))
				{
					if (uLocal_76[0] == 5)
					{
						func_67("SCLUB_PHON_HELP_ALT", uLocal_76[0], 0);
					}
					else
					{
						func_67("SCLUB_PHON_HELP", uLocal_76[0], 0);
					}
					func_119(uLocal_76[0], 1, -1);
					SYSTEM::WAIT(4000);
				}
				func_117(uLocal_76[0]);
				iVar2 = func_116(uLocal_76[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_115(uLocal_76[0]);
					iVar4 = func_114(iVar2);
					func_109(-384575792, iVar3, iVar4, 3, func_113(), func_112(uLocal_76[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
				func_39();
			}
			break;
	}
}

int func_109(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;

	if (func_53(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
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
	if (iParam5 < 3)
	{
		if (MISC::IS_BIT_SET(iParam4, iParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_111638.f_7683.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_111(iParam3);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		Global_111638.f_7683.f_651[Global_111638.f_7683.f_764 /*14*/] = { Var0 };
		Global_111638.f_7683.f_764++;
		func_110(0);
		func_110(1);
		func_110(2);
		return 1;
	}
	return 0;
}

void func_110(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_80(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (MISC::IS_BIT_SET(Global_111638.f_7683[iVar0 /*15*/].f_2, iParam0))
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
		if (MISC::IS_BIT_SET(Global_111638.f_7683.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_111638.f_7683.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_111638.f_7683.f_919[iParam0] = iVar1;
}

int func_111(int iParam0)
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

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 104;
		case 1:
			return 105;
		case 2:
			return 106;
		case 3:
			return 107;
		case 4:
			return 108;
		case 5:
			return 109;
		case 6:
			return 110;
		case 7:
			return 111;
		case 8:
			return 112;
		case 9:
			return 93;
	}
	return 145;
}

int func_113()
{
	func_78();
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

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 8;
		case 2:
			return 9;
	}
	return -1;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 4:
			return 2;
		case 5:
			return 3;
		case 8:
			return 4;
		case 9:
			return 5;
	}
	return -1;
}

int func_116(int iParam0)
{
	return Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_117(int iParam0)
{
	if (func_116(iParam0) < 0)
	{
		func_118(iParam0, 0);
	}
	Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_118(int iParam0, int iParam1)
{
	Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
}

void func_119(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	if (iParam2 < 0)
	{
		iParam2 = func_75();
	}
	if (func_137(iParam2) == 4)
	{
	}
	bVar0 = Global_111638.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!func_136(func_112(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_136(func_112(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_111638.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_135(iParam0, 0);
			func_129(func_112(iParam0), func_137(iParam2), 1);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					MISC::SET_BIT(&(Global_2097152[func_128() /*10930*/].f_6174.f_1272), iParam0);
					func_125(-60084924, 15, 0);
					break;
			}
			func_124(iVar1);
			func_123(iParam0, iVar1);
			Global_110632.f_15[iParam0] = MISC::GET_GAME_TIMER();
		}
	}
	else if (bVar0)
	{
		func_120(func_112(iParam0), func_137(iParam2));
	}
}

void func_120(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_122(iParam0, iVar0, 0);
			func_121(iParam0, iVar0, 0);
		}
	}
}

void func_121(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_122(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_123(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_110632.f_4[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
	}
	else
	{
		Global_110632.f_4[iParam0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1200000, 2100000));
	}
}

void func_124(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_110632.f_3 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		Global_110632.f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(21600000, 25200000));
	}
}

void func_125(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_127(iParam1, bParam2))
	{
		iVar0 = func_126();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_126()
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

bool func_127(int iParam0, bool bParam1)
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

int func_128()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_129(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	Global_8042 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		func_134();
		if (iParam1 == 4)
		{
			func_122(iParam0, 0, 1);
			func_122(iParam0, 1, 1);
			func_122(iParam0, 2, 1);
			func_121(iParam0, 0, 1);
			func_121(iParam0, 1, 1);
			func_121(iParam0, 2, 1);
		}
		else
		{
			if (func_133(iParam0, iParam1) == 1 && func_132(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_122(iParam0, iVar0, 1);
			func_121(iParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76622)
			{
				if (iParam1 != 4)
				{
					if (Global_19486 != iParam1)
					{
						Global_8015[iParam1 /*4*/] = { func_131(iParam0) };
						Global_8032[iParam1] = 1;
						Global_8037[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19486)
					{
					}
					else
					{
						Global_7966[1 /*6*/] = { func_131(iParam0) };
						Global_7966[1 /*6*/].f_5 = iParam1;
						func_130();
					}
				}
				else
				{
					Global_7966[1 /*6*/] = { func_131(iParam0) };
					Global_7966[1 /*6*/].f_5 = iParam1;
					func_130();
				}
			}
			else
			{
				Global_7966[1 /*6*/] = { func_131(iParam0) };
				Global_7966[1 /*6*/].f_5 = iParam1;
				func_130();
			}
		}
	}
}

void func_130()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;

	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_1798[Global_8042 /*29*/].f_7)), 64);
	if (Global_8061 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::_GET_LABEL_TEXT(&(Global_7966[1 /*6*/])), 64);
		sVar32 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_7966[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_7356, 0);
}

struct<4> func_131(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_132(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

int func_133(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

void func_134()
{
	if (func_79(14))
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
		Global_19486 = func_77();
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

void func_135(int iParam0, int iParam1)
{
	Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

bool func_136(int iParam0, int iParam1)
{
	if (func_133(iParam0, iParam1) == 1)
	{
		return true;
	}
	return false;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 2:
			return 2;
		case 1:
			return 1;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
	}
	return 4;
}

bool func_138(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_75();
	}
	return Global_111638.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_139(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_111638.f_18098.f_175[iVar0 /*19*/].f_5)))
		{
			func_140(&(Global_111638.f_18098.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_111638.f_18098.f_362[iVar1 /*3*/])))
		{
			func_140(&(Global_111638.f_18098.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	AUDIO::SKIP_RADIO_FORWARD();
}

void func_140(int* iParam0, float fParam1)
{
	if (func_10(iParam0))
	{
		func_9(iParam0, (func_4(iParam0) + fParam1));
	}
}

void func_141()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_95206[iVar0] = Global_95206[iVar0 + 1];
		}
		else
		{
			Global_95206[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

void func_142()
{
	int iVar0;
	int iVar1;

	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_276))
	{
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 50000);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_314, 1f, -1, 0.25f, false, fLocal_326);
		if (iVar0 < 15000)
		{
			TASK::TASK_PLAY_ANIM(0, sLocal_276, "fidget_rub_hands", 1.5f, -1f, -1, 8320, 0f, false, false, false);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			TASK::TASK_PLAY_ANIM(0, sLocal_276, "fidget_rub_chin", 1.5f, -1f, -1, 8320, 0f, false, false, false);
		}
		else
		{
			TASK::TASK_PLAY_ANIM(0, sLocal_276, "fidget_arm_swing", 1.5f, -1f, -1, 8320, 0f, false, false, false);
		}
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		func_27(&uLocal_333, 262144);
	}
}

void func_143(var uParam0)
{
	int iVar0;

	iVar0 = *uParam0;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_144(iVar0))
		{
			ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
		}
	}
}

bool func_144(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return true;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_145(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;

	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_169();
			iVar4 = func_169();
			func_168(&iVar4, iParam0);
			func_167(&iVar4, iParam1);
			func_166(&iVar4, 0);
			if (func_164(*uParam4, iVar4))
			{
				func_159(&iVar4, 0, 0, 0, 1, 0, 0);
			}
			func_156(*uParam4, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_11 = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			func_139((SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f));
			GRAPHICS::_0x5F0F3F56635809EF(0.6f);
			GRAPHICS::_SET_FAR_SHADOWS_SUPPRESSED(false);
			GRAPHICS::_0x0AE73D8DF3A762B2(false);
			func_155();
			uParam4->f_10 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam4->f_10, "TIME_LAPSE_MASTER", 0, true);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			func_154();
			uParam4->f_3++;
			break;
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (MISC::GET_HASH_KEY(sParam2) != 0)
					{
						MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST(sParam2, 1f);
					}
					if (MISC::GET_HASH_KEY(sParam3) != 0)
					{
						MISC::_CLEAR_CLOUD_HAT();
						MISC::LOAD_CLOUD_HAT(sParam3, 0f);
					}
					uParam4->f_3 = 2;
				}
			}
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				iVar4 = *uParam4;
				func_159(&iVar4, uParam4->f_11, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(func_153(iVar4), func_152(iVar4), func_151(iVar4));
				AUDIO::STOP_SOUND(uParam4->f_10);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				return true;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = func_150(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = SYSTEM::ROUND((IntToFloat(uParam4->f_11) * fVar11));
			iVar4 = *uParam4;
			func_159(&iVar4, iVar3, 0, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(func_153(iVar4), func_152(iVar4), func_151(iVar4));
			if (func_149(iVar4) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
			{
				CLOCK::SET_CLOCK_DATE(func_149(iVar4), func_148(iVar4), func_146(iVar4));
			}
			func_256();
			GRAPHICS::_0xE3E2C1B4C59DBC77(6);
			break;
	}
	return false;
}

int func_146(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_147(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_147(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_148(int iParam0)
{
	return iParam0 & 15;
}

int func_149(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

float func_150(float fParam0, float fParam1, float fParam2)
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

int func_151(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_152(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_153(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_154()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		HUD::THEFEED_REMOVE_ITEM(Global_111638.f_14136[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_155()
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 0;
	}
	AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
	return 1;
}

void func_156(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_164(iParam0, iParam1))
	{
		iVar0 = func_148(iParam1);
		iVar1 = func_146(iParam0);
		iVar2 = (func_146(iParam0) - func_146(iParam1));
		iVar3 = (func_148(iParam0) - func_148(iParam1));
		iVar4 = (func_149(iParam0) - func_149(iParam1));
		iVar5 = (func_153(iParam0) - func_153(iParam1));
		iVar6 = (func_152(iParam0) - func_152(iParam1));
		iVar7 = (func_151(iParam0) - func_151(iParam1));
	}
	else
	{
		iVar0 = func_148(iParam0);
		iVar1 = func_146(iParam1);
		iVar2 = (func_146(iParam1) - func_146(iParam0));
		iVar3 = (func_148(iParam1) - func_148(iParam0));
		iVar4 = (func_149(iParam1) - func_149(iParam0));
		iVar5 = (func_153(iParam1) - func_153(iParam0));
		iVar6 = (func_152(iParam1) - func_152(iParam0));
		iVar7 = (func_151(iParam1) - func_151(iParam0));
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
		iVar4 = (iVar4 + func_158(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_157(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_157(float fParam0, float fParam1, float fParam2)
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

int func_158(int iParam0, int iParam1)
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

void func_159(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_146(*iParam0);
	iVar1 = func_148(*iParam0);
	iVar2 = func_149(*iParam0);
	iVar3 = func_153(*iParam0);
	iVar4 = func_152(*iParam0);
	iVar5 = func_151(*iParam0);
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
	iVar6 = func_158(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_158(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_160(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_166(iParam0, iParam1);
	func_167(iParam0, iParam2);
	func_168(iParam0, iParam3);
	func_163(iParam0, iParam5);
	func_162(iParam0, iParam4);
	func_161(iParam0, iParam6);
}

void func_161(int iParam0, int iParam1)
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

void func_162(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_148(*iParam0);
	iVar1 = func_146(*iParam0);
	if (iParam1 < 1 || iParam1 > func_158(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 496);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_163(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15);
	*iParam0 = (*iParam0 || iParam1);
}

bool func_164(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_165(iParam1) || !func_165(iParam0))
	{
		return true;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_148(iParam0);
	iVar1 = func_148(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_153(iParam0);
	iVar1 = func_153(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_152(iParam0);
	iVar1 = func_152(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_151(iParam0);
	iVar1 = func_151(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

bool func_165(int iParam0)
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
	iVar0 = func_151(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_152(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_153(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_146(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_148(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_149(iParam0);
	if (iVar5 < 1 || iVar5 > func_158(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_166(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_167(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_168(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

int func_169()
{
	var uVar0;

	func_166(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_167(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_168(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_162(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_163(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_161(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

char* func_170()
{
	char* sVar0;

	switch (uLocal_76[0])
	{
		case 0:
			sVar0 = "CLEARING";
			break;
		case 1:
			sVar0 = "OVERCAST";
			break;
		case 4:
			sVar0 = "CLOUDS";
			break;
		case 5:
			sVar0 = "CLEAR";
			break;
		case 8:
			sVar0 = "EXTRASUNNY";
			break;
		case 9:
			sVar0 = "RAIN";
			break;
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
}

bool func_171()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return true;
	}
	return false;
}

void func_172()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_274[0], false))
	{
		if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
		{
			func_193(&uLocal_81, 1, 0, func_194(uLocal_76[0]), 0, 1);
			func_175("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_173(iLocal_274[0], "SEX_ORAL", 10);
		}
	}
}

void func_173(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_174(iParam2), true);
}

int func_174(int iParam0)
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

bool func_175(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<6> Var0;
	char[] cVar6[8];

	if (func_192())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_191(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_190(Var0) };
		}
		if (bParam3)
		{
			cVar6 = "SCAUD";
		}
		else
		{
			cVar6 = "SHAUD";
		}
		if (func_176(&uLocal_81, cVar6, &Var0, 7, 0, 0, 0))
		{
			return true;
		}
	}
	return false;
}

int func_176(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_189(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_177(sParam2, iParam3, 0);
}

int func_177(char* sParam0, int iParam1, bool bParam2)
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
					func_188();
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
		if (func_187(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_186();
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
				func_134();
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
				if (func_185())
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
			if (func_23())
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
			func_184();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_183();
		func_178();
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
		func_188();
	}
	return 0;
}

void func_178()
{
	if (!func_179())
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

bool func_179()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (PLAYER::PLAYER_ID() == func_182())
	{
		return false;
	}
	if (func_180(PLAYER::PLAYER_ID()))
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

bool func_180(int iParam0)
{
	return func_181(iParam0, 20);
}

bool func_181(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_182()
{
	return -1;
}

void func_183()
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

void func_184()
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

bool func_185()
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

void func_186()
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

bool func_187(int iParam0, int iParam1)
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

void func_188()
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

void func_189(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

struct<6> func_190(struct<6> Param0)
{
	int iVar0;

	StringConCat(&Param0, "_", 24);
	iVar0 = uLocal_76[0];
	StringIntConCat(&Param0, iVar0, 24);
	return Param0;
}

void func_191(char* sParam0, bool bParam1)
{
	StringConCat(sParam0, "_", 24);
	if (func_77() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_77() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_77() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_190(*sParam0) };
	}
}

bool func_192()
{
	if ((HUD::IS_MESSAGE_BEING_DISPLAYED() || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) || Global_20805 != 0)
	{
		return false;
	}
	return true;
}

void func_193(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

char* func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
		case 1:
			return "Nikki";
		case 2:
			return "Chastity";
		case 3:
			return "Cheetah";
		case 4:
			return "Sapphire";
		case 5:
			return "Infernus";
		case 6:
			return "Fufu";
		case 7:
			return "Peach";
		case 8:
			return "TaxiLiz";
		case 9:
			return "REHH2Hiker";
	}
	return "Invalid name";
}

float func_195()
{
	switch (uLocal_76[0])
	{
		case 1:
			return 325.6f;
		case 0:
			return 52.89f;
		case 4:
			return 14.5f;
		case 5:
			return 43.85f;
		case 8:
			return 193.5f;
		case 9:
			return 233.2f;
	}
	return 0f;
}

Vector3 func_196(int iParam0, vector3 vParam1)
{
	var uVar0;

	vParam1.f_2 = (vParam1.z + 0.15f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam1, &uVar0, false, false))
	{
		vParam1.f_2 = uVar0;
	}
	if (func_197(iParam0))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, false, true);
	}
	return vParam1;
}

bool func_197(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

Vector3 func_198()
{
	switch (uLocal_76[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
		case 0:
			return -162.4315f, -1635.107f, 32.6529f;
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
		case 8:
			return -28.5266f, -1565.793f, 28.918f;
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
	}
	return 0f, 0f, 0f;
}

void func_199(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	if (iParam4 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 64);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
		}
	}
	if (!bParam1 && bParam6)
	{
		CAM::_RENDER_FIRST_PERSON_CAM(false, 0f, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, bParam2, iParam3, true, false, 0);
	}
	if (bParam1)
	{
		HUD::CLEAR_HELP(true);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_4, false);
			}
			CAM::DESTROY_CAM(uParam0->f_4, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	func_15(bParam1, 1, 0, 0, 0, 0);
	func_154();
	if (!bParam1 && bParam5)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (!bParam1)
	{
		if (Global_111638.f_32744.f_4801 != -15)
		{
			Global_111638.f_32744.f_4801 = func_169();
		}
	}
}

float func_200(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_201()
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar14[4];
	var uVar27[4];

	func_202(&vVar1, &vVar14, &uVar27);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!CAM::DOES_CAM_EXIST(iLocal_284[iVar0]))
		{
			iLocal_284[iVar0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar1[iVar0 /*3*/], vVar14[iVar0 /*3*/], uVar27[iVar0], false, 2);
			CAM::SHAKE_CAM(iLocal_284[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_289.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
	CAM::ADD_CAM_SPLINE_NODE(Local_289.f_4, vVar1[0 /*3*/], vVar14[0 /*3*/], 6000, 3, 2);
	CAM::ADD_CAM_SPLINE_NODE(Local_289.f_4, vVar1[1 /*3*/], vVar14[1 /*3*/], 6000, 3, 2);
	CAM::SET_CAM_FOV(Local_289.f_4, uVar27[0]);
}

void func_202(var uParam0, var uParam1, var uParam2)
{
	switch (uLocal_76[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = { 140.9085f, -1885.527f, 25.6959f };
			*(uParam1[0 /*3*/]) = { -9.0308f, 0f, 126.3829f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 141.712f, -1884.935f, 30.7241f };
			*(uParam1[1 /*3*/]) = { 4.7025f, 0f, 129.5531f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 139.1899f, -1885.865f, 24.96737f };
			*(uParam1[2 /*3*/]) = { -3.535496f, 0.081819f, 135.1308f };
			(*uParam2)[2] = 50f;
			*(uParam0[3 /*3*/]) = { 133.9669f, -1893.292f, 23.9573f };
			*(uParam1[3 /*3*/]) = { -1.8669f, -0.0329f, -5.5828f };
			(*uParam2)[3] = 50f;
			break;
		case 0:
			*(uParam0[0 /*3*/]) = { -186.5408f, -1629.328f, 35.8275f };
			*(uParam1[0 /*3*/]) = { -1.5588f, 0f, -118.8025f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -186.1923f, -1629.505f, 48.7132f };
			*(uParam1[1 /*3*/]) = { -1.2745f, 0f, -116.9616f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -184.9595f, -1632.193f, 36.32303f };
			*(uParam1[2 /*3*/]) = { -3.262451f, 0.073971f, -100.6756f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -164.7078f, -1632.25f, 34.0944f };
			*(uParam1[3 /*3*/]) = { -3.7303f, 0.0222f, 108.1824f };
			(*uParam2)[3] = 40f;
			break;
		case 4:
			*(uParam0[0 /*3*/]) = { -208.6886f, 112.8581f, 73.0855f };
			*(uParam1[0 /*3*/]) = { -0.1055f, 0f, -156.0082f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -208.9068f, 113.3747f, 85.2889f };
			*(uParam1[1 /*3*/]) = { 3.8438f, 0f, -157.0767f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -206.2357f, 106.941f, 72.07555f };
			*(uParam1[2 /*3*/]) = { -11.58381f, 0.084975f, -158.9702f };
			(*uParam2)[2] = 45f;
			*(uParam0[3 /*3*/]) = { -197.6886f, 94.7063f, 69.814f };
			*(uParam1[3 /*3*/]) = { 0.5155f, -0.0266f, 48.8652f };
			(*uParam2)[3] = 45f;
			break;
		case 5:
			*(uParam0[0 /*3*/]) = { -871.6285f, 520.8466f, 93.1945f };
			*(uParam1[0 /*3*/]) = { -0.1377f, -1.3933f, -105.9309f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -871.5255f, 521.1066f, 104.6356f };
			*(uParam1[1 /*3*/]) = { 3.1118f, -1.3933f, -105.9309f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -866.6436f, 514.6121f, 92.90275f };
			*(uParam1[2 /*3*/]) = { -5.957637f, -1.324997f, -101.9062f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -849.5522f, 514.2322f, 91.0095f };
			*(uParam1[3 /*3*/]) = { -1.626f, -1.3198f, 92.3739f };
			(*uParam2)[3] = 40f;
			break;
		case 8:
			*(uParam0[0 /*3*/]) = { -27.698f, -1584.646f, 31.1034f };
			*(uParam1[0 /*3*/]) = { 0.0044f, 0f, -1.9117f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -27.698f, -1584.646f, 40.4849f };
			*(uParam1[1 /*3*/]) = { 7.981f, 0f, -1.9117f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -28.63904f, -1579.74f, 30.82423f };
			*(uParam1[2 /*3*/]) = { -7.527712f, 0.030218f, -14.33051f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -28.6719f, -1568.09f, 29.7492f };
			*(uParam1[3 /*3*/]) = { -1.5414f, 0f, -168.6005f };
			(*uParam2)[3] = 40f;
			break;
		case 9:
			*(uParam0[0 /*3*/]) = { 3323.631f, 5148.861f, 20.9592f };
			*(uParam1[0 /*3*/]) = { 1.1547f, 1.0064f, 21.8733f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 3323.844f, 5148.672f, 28.2303f };
			*(uParam1[1 /*3*/]) = { 11.4168f, 1.0064f, 22.8025f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 3328.904f, 5157.818f, 20.5799f };
			*(uParam1[2 /*3*/]) = { -3.634001f, 1.039937f, 30.44809f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { 3315.368f, 5171.771f, 18.9066f };
			*(uParam1[3 /*3*/]) = { -2.8773f, 1.0064f, -103.0585f };
			(*uParam2)[3] = 40f;
			break;
	}
}

void func_203(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;

	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::SET_PED_PATH_AVOID_FIRE(iParam0, true);
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_339);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_339);
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 16777216);
			}
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), vLocal_302);
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), vLocal_305);
				if (fVar1 < fVar0)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_274[0], 0);
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(func_204()))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(false, func_204(), 0, 552, -1);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_302, 1f, -1, 0.25f, 64, 40000f);
				}
			}
			if (iParam0 != PLAYER::PLAYER_PED_ID())
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_204()))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(false, func_204(), 0, 546, -1);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam1, 1f, -1, 0.25f, true, 40000f);
				}
				if (func_25(iParam0, vParam1, 1) > 5f)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, 0f, false, false, false);
				}
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_339);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_339);
		}
	}
}

char* func_204()
{
	char* sVar0;

	if (uLocal_76[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_205(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		TASK::TASK_VEHICLE_PARK(iParam0, iParam1, vLocal_308, fLocal_327, 3, 10f, false);
	}
}

char* func_206()
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_207()
{
	if (func_77() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_77() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_77() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_208()
{
	sLocal_276 = "move_p_m_one_idles@generic";
	STREAMING::REQUEST_ANIM_DICT(sLocal_276);
}

bool func_209(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("BLIMP")))
	{
		return true;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("CARGOBOB")))
	{
		return true;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("CARGOBOB2")))
	{
		return true;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("CARGOBOB3")))
	{
		return true;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("BUZZARD")))
	{
		return true;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("BUZZARD2")))
	{
		return true;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("MAVERICK")))
	{
		return true;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("POLMAV")))
	{
		return true;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("ANNIHILATOR")))
	{
		return true;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("FROGGER")))
	{
		return true;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("FROGGER2")))
	{
		return true;
	}
	return false;
}

int func_210(var uParam0, vector3 vParam1, bool bParam4, float fParam5)
{
	if (func_212(uParam0))
	{
		VEHICLE::SET_LAST_DRIVEN_VEHICLE(*uParam0);
		if (!func_211(vParam1))
		{
			ENTITY::SET_ENTITY_COORDS(*uParam0, vParam1, true, false, false, true);
			if (bParam4)
			{
				ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
			}
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
		}
		return 1;
	}
	return 0;
}

bool func_211(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_212(var uParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_144(iVar0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), vLocal_63, false, true, 0))
			{
				VEHICLE::SET_LAST_DRIVEN_VEHICLE(iVar0);
				ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
				*uParam0 = iVar0;
				return true;
			}
		}
	}
	return false;
}

bool func_213(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = MISC::GET_GAME_TIMER();
		}
		Global_28 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (func_214())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return true;
			}
		}
	}
	return false;
}

bool func_214()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return false;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return true;
	}
	return false;
}

void func_215(bool bParam0)
{
	struct<4> Var0;
	float fVar4;

	func_65();
	if (ENTITY::IS_ENTITY_DEAD(iLocal_274[0], false))
	{
		return;
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_308 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), vLocal_308 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), false, true);
	fVar4 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_274[0], true));
	if (iLocal_78 != 9)
	{
		if (((fVar4 >= (200f / 2f) && func_192()) && !func_267(uLocal_333, 2)) || func_254(iLocal_274[0], 0))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_281))
			{
				HUD::REMOVE_BLIP(&iLocal_281);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_280))
			{
				HUD::REMOVE_BLIP(&iLocal_280);
			}
			func_251(0);
			func_84("SCLUB_HOME_R", uLocal_76[0]);
			iLocal_78 = 9;
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (iLocal_78 != 8)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_281))
			{
				HUD::REMOVE_BLIP(&iLocal_281);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_280))
			{
				HUD::REMOVE_BLIP(&iLocal_280);
			}
			iLocal_78 = 8;
		}
	}
	if (func_240(iLocal_274[0], &uLocal_267, &iLocal_264))
	{
		func_66(4);
	}
	if (iLocal_78 <= 1)
	{
		func_259(1);
	}
	switch (iLocal_78)
	{
		case 0:
			iLocal_79 = 0;
			if (func_192())
			{
				if (!func_267(uLocal_333, 1))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_274[0], true);
					func_84("SCLUB_HOME_MEET", uLocal_76[0]);
					func_251(0);
					func_27(&uLocal_333, 1);
				}
				iLocal_78 = 1;
			}
			break;
		case 1:
			iLocal_79 = 1;
			Var0 = { func_71(uLocal_76[0]) };
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_340 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				iLocal_334 = ENTITY::GET_ENTITY_HEALTH(iLocal_340);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_274[0], true), 3f, 3f, 3f, false, true, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_340, false) && func_239(iLocal_340, iLocal_274[0], 1) <= 10f))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_274[0], false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_340) && (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_340) < 1 || (!bParam0 && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_340)))))
				{
					if (!func_70("SCLUB_SMALL_CAR", &Var0))
					{
						func_67("SCLUB_SMALL_CAR", uLocal_76[0], 0);
						func_173(iLocal_274[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					HUD::CLEAR_HELP(true);
					TASK::CLEAR_PED_TASKS(iLocal_274[0]);
					func_237();
					if (!func_267(uLocal_333, 2))
					{
						func_27(&uLocal_333, 2);
					}
					func_236();
					func_86();
					func_229(39, 1);
					func_229(40, 1);
					func_229(41, 1);
					func_229(42, 1);
					func_229(43, 1);
					func_229(44, 1);
					iLocal_78 = 2;
				}
			}
			else if (func_70("SCLUB_SMALL_CAR", &Var0))
			{
				HUD::CLEAR_HELP(true);
			}
			break;
		case 2:
			iLocal_79 = 2;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_274[0], false))
				{
					iLocal_78 = 3;
				}
			}
			else
			{
				func_173(iLocal_274[0], "NEED_A_VEHICLE", 10);
				iLocal_78 = 3;
			}
			break;
		case 3:
			iLocal_79 = 3;
			func_226();
			if (!func_171())
			{
				if (func_192())
				{
					PATHFIND::SET_ROADS_IN_AREA(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), false, true);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), false, true);
					MISC::CLEAR_AREA_OF_VEHICLES(vLocal_308, 10f, false, false, false, false, false, false);
					MISC::CLEAR_AREA_OF_PEDS(vLocal_308, 10f, 0);
					iLocal_301 = PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_308 - Vector(35f, 35f, 35f), vLocal_308 + Vector(35f, 35f, 35f), false, true, true, true);
					func_8(&iLocal_246);
					if (bParam0)
					{
						func_91(1);
						func_225();
					}
					else
					{
						iLocal_74 = 3;
					}
				}
			}
			break;
		case 4:
			iLocal_79 = 4;
			func_222(fVar4, vLocal_311);
			func_216();
			if ((func_4(&iLocal_258) > 45f || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_320) > (100f * 100f)) && func_25(PLAYER::PLAYER_PED_ID(), vLocal_311, 1) > 100f)
			{
				if (uLocal_76[0] == 8)
				{
					func_175("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_173(iLocal_274[0], "GENERIC_FUCK_YOU", 10);
				}
				func_66(3);
			}
			else if (func_254(iLocal_274[0], 1))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_281))
				{
					HUD::REMOVE_BLIP(&iLocal_281);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_280))
				{
					HUD::REMOVE_BLIP(&iLocal_280);
				}
				func_251(0);
				func_84("SCLUB_HOME_R", uLocal_76[0]);
				iLocal_78 = 9;
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_308, 3f, 3f, 2f, true, true, 2) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_305, 5f, 5f, 2f, true, true, 1))
			{
				if (func_36(1, 0, 1))
				{
					iLocal_74 = 1;
				}
			}
			else if (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				func_225();
			}
			break;
		case 5:
			iLocal_79 = 5;
			func_222(fVar4, vLocal_308);
			func_216();
			func_237();
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_308, 1f, 1f, 2f, true, true, 2))
			{
				iLocal_78 = 6;
			}
			else
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					func_225();
				}
				else
				{
					func_61(vLocal_308);
				}
				if (func_107("SCLUB_HOME_WALK"))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			break;
		case 6:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					if (func_59(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 3f, 2, 0.5f, 0, 1, 0))
					{
						func_58();
						func_203(iLocal_274[0], vLocal_305);
						if (uLocal_76[0] == 9 || uLocal_76[0] == 8)
						{
							func_175("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_175("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_78 = 7;
					}
				}
			}
			else if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_274[0]);
				func_225();
				HUD::CLEAR_HELP(true);
			}
			break;
		case 7:
			iLocal_79 = 7;
			if ((!func_171() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !func_267(uLocal_333, 2048))
			{
				Var0 = { func_71(uLocal_76[0]) };
				func_85("SCLUB_FOLLOW_H", &Var0, 7500, 1);
				func_86();
				func_251(0);
				func_27(&uLocal_333, 2048);
			}
			if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_311, 5f, 5f, 2f, false, true, 1) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_305, 5f, 5f, 2f, false, true, 1)) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (func_36(1, 0, 1))
				{
					iLocal_74 = 1;
				}
			}
			break;
		case 8:
			if ((!func_267(uLocal_331, 4096) && !func_171()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_274[0]))
			{
				if (iLocal_79 > 1 || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_274[0], true)) < (3f * 3f))
				{
					func_173(iLocal_274[0], "GENERIC_FRIGHTENED_MED", 10);
					func_27(&uLocal_331, 4096);
				}
			}
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_78 = iLocal_79;
			}
			break;
		case 9:
			if (fVar4 > 200f)
			{
				func_66(1);
			}
			else if (fVar4 <= (200f / 2f) && !func_254(iLocal_274[0], 1))
			{
				HUD::CLEAR_PRINTS();
				iLocal_78 = iLocal_79;
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					func_225();
				}
			}
			break;
	}
}

void func_216()
{
	char* sVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (!func_267(uLocal_333, 16))
	{
		if (func_217())
		{
			func_27(&uLocal_333, 16);
		}
		else
		{
			return;
		}
	}
	sVar0 = func_100(iLocal_274[0], 0, 0);
	if (!func_267(uLocal_333, 8))
	{
		if (!func_267(uLocal_333, 4))
		{
			if (!func_267(uLocal_331, 256))
			{
				if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
				{
					func_175("SC_BJ", 0, 0, 0);
				}
				func_27(&uLocal_331, 256);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT(sVar0);
				func_27(&uLocal_333, 4);
			}
		}
		else if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			func_94(iLocal_274[0], 1, 1, -1, 1);
			PED::SET_PED_KEEP_TASK(iLocal_274[0], true);
			func_7(&iLocal_255);
			func_27(&uLocal_333, 8);
		}
	}
	else if (func_267(uLocal_333, 4))
	{
		bVar1 = false;
		bVar2 = ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_274[0], sVar0, func_95(4, 1, 1, func_98(iLocal_340)), 3);
		bVar3 = PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID());
		bVar4 = TASK::GET_SCRIPT_TASK_STATUS(iLocal_274[0], 242628503) == 7;
		bVar5 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
		bVar6 = false;
		if (bVar5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				bVar6 = (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 5f);
			}
		}
		if ((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_4(&iLocal_255) > 35f) || SYSTEM::VDIST(vLocal_308, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				TASK::TASK_PLAY_ANIM(iLocal_274[0], sVar0, func_95(4, 1, 1, func_98(iLocal_340)), 8f, -8f, -1, 0, 0f, false, false, false);
			}
			if (bVar3)
			{
				iLocal_335 = 2000;
			}
			bVar1 = true;
		}
		else if (bVar4)
		{
			bVar1 = true;
		}
		if (bVar2)
		{
			func_256();
		}
		if ((bVar1 && bVar4) && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) - SYSTEM::CEIL((IntToFloat(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) * 0.1f))), 0);
					func_173(PLAYER::PLAYER_PED_ID(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_173(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", 10);
				}
				func_27(&uLocal_331, 128);
			}
			STREAMING::REMOVE_ANIM_DICT(sVar0);
			func_73(&uLocal_333, 4);
		}
		if (!func_267(uLocal_331, 64))
		{
			if (func_4(&iLocal_255) > 10f)
			{
				func_173(PLAYER::PLAYER_PED_ID(), "SEX_GENERIC", 10);
				func_173(iLocal_274[0], "SEX_ORAL", 10);
				func_27(&uLocal_331, 64);
			}
		}
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		func_256();
	}
}

bool func_217()
{
	vector3 vVar0;
	var uVar3;

	if (!func_192())
	{
		return false;
	}
	func_64(&vVar0, &uVar3, 0);
	if (((SYSTEM::VDIST(vLocal_308, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (75f * 2f) && SYSTEM::VDIST(vVar0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (75f / 2f)) && func_116(uLocal_76[0]) > 1) && func_218())
	{
		return true;
	}
	return false;
}

bool func_218()
{
	int iVar0;
	int iVar1;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return false;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_220(iVar1, 0) && func_219(iVar0))
		{
			return true;
		}
	}
	return false;
}

int func_219(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
						iVar2 = MISC::GET_HASH_KEY(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case -1804415708:
				if ((!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 4))
				{
					return 0;
				}
				break;
			case 1107404867:
				if (((!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 4)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
				{
					return 0;
				}
				break;
			case -1728685474:
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
				{
					return 0;
				}
				break;
			case -682108547:
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == -1)
				{
					return 0;
				}
				break;
			case 1717532765:
				if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
				{
					return 0;
				}
				break;
		}
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_STANDARD"):
			case joaat("LAYOUT_STD_EXITFIXUP"):
			case joaat("LAYOUT_STD_HABANERO"):
			case joaat("LAYOUT_STD_STRETCH"):
			case joaat("LAYOUT_STD_HIGHWINDOW"):
			case joaat("LAYOUT_RANGER"):
			case joaat("LAYOUT_RANGER_SWAT"):
			case joaat("LAYOUT_4X4"):
			case joaat("LAYOUT_BISON"):
			case joaat("LAYOUT_VAN_BODHI"):
			case joaat("LAYOUT_STD_LOWROOF"):
			case joaat("LAYOUT_STD_STRATUM"):
			case joaat("LAYOUT_VAN_ROOSEVELT"):
			case joaat("LAYOUT_STD_HUNTLEY"):
			case joaat("LAYOUT_STD_WARRENER"):
			case joaat("LAYOUT_LOW_BLADE"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_STD_KURUMA"):
			case joaat("LAYOUT_STD_BLISTA2"):
			case joaat("LAYOUT_STD_CHINO"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
			case joaat("LAYOUT_STD_LOWRIDER"):
			case joaat("LAYOUT_STD_LOWRIDER_CHINO"):
			case joaat("LAYOUT_STD_LOWRIDER_SIDEDOOR"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_STD_BALLER4"):
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
			case joaat("LAYOUT_STD_LOWRIDER2"):
			case joaat("LAYOUT_STD_LOWRIDER2_SIDEDOOR"):
			case joaat("LAYOUT_STD_LOWRIDER2_SLAMVAN"):
			case joaat("LAYOUT_STD_WINDSOR2"):
			case joaat("LAYOUT_STD_XLS"):
			case joaat("LAYOUT_LOW_LE7B"):
			case joaat("LAYOUT_STD_OMNIS"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_INFERNUS2"):
			case joaat("LAYOUT_LOW_TORERO"):
			case joaat("LAYOUT_LOW_SC1"):
			case joaat("LAYOUT_STD_NEON"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_DOMINATOR3"):
			case joaat("LAYOUT_LOW_TAIPAN"):
			case joaat("LAYOUT_LOW_ITALIGTO"):
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
			case joaat("LAYOUT_RANGER_TOROS"):
			case joaat("LAYOUT_STD_DEVIANT"):
			case -2123959937:
			case 1074598648:
			case 1818992907:
			case -370341013:
			case 1240573865:
			case -627376728:
			case 986556497:
			case -1852541008:
			case -605059493:
			case 1751095603:
			case -991881300:
				return 1;
		}
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == joaat("LAYOUT_STD_RIPLEY") && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("SLAMVAN"))
		{
			return 1;
		}
	}
	return 0;
}

int func_220(int iParam0, bool bParam1)
{
	if ((((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 0;
	}
	if (func_221(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("POLICE") || iParam0 == joaat("POLICE2")) || iParam0 == joaat("POLICE3")) || iParam0 == joaat("POLICE4")) || iParam0 == joaat("FBI")) || iParam0 == joaat("FBI2")) || iParam0 == joaat("CADDY")) || iParam0 == joaat("CADDY2"))
		{
			return 0;
		}
	}
	if (((((((((((((((iParam0 == joaat("ISSI2") || iParam0 == joaat("HOTKNIFE")) || iParam0 == joaat("JB700")) || iParam0 == joaat("JESTER")) || iParam0 == joaat("JESTER2")) || iParam0 == joaat("STROMBERG")) || iParam0 == joaat("BARRAGE")) || iParam0 == joaat("KAMACHO")) || iParam0 == joaat("GB200")) || iParam0 == joaat("FAGALOA")) || iParam0 == joaat("TEZERACT")) || iParam0 == joaat("SWINGER")) || iParam0 == joaat("IMPERATOR")) || iParam0 == joaat("LOCUST")) || iParam0 == joaat("SCHLAGEN")) || iParam0 == joaat("OUTLAW"))
	{
		return 0;
	}
	return 1;
}

bool func_221(int iParam0)
{
	switch (iParam0)
	{
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLMAV"):
		case joaat("POLICEB"):
		case joaat("POLICET"):
		case joaat("POLICEOLD2"):
		case joaat("POLICEOLD1"):
		case joaat("SHERIFF"):
		case joaat("SHERIFF2"):
			return true;
	}
	return false;
}

void func_222(float fParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;

	if (!func_267(uLocal_331, 262144))
	{
		if (func_224(iLocal_274[0]))
		{
			if (uLocal_76[0] == 8)
			{
				func_175("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_173(iLocal_274[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&iLocal_249);
			func_27(&uLocal_331, 262144);
		}
	}
	else if (func_4(&iLocal_249) > 10f)
	{
		func_73(&uLocal_331, 262144);
		func_8(&iLocal_249);
	}
	if ((fParam0 > 5f || !func_192()) || func_267(uLocal_333, 4))
	{
		return;
	}
	if (!func_267(uLocal_331, 1) && !func_267(uLocal_331, 128))
	{
		if (SYSTEM::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 75f)
		{
			if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
			{
				if (func_175("SC_NEAR", 0, 0, 0))
				{
					func_27(&uLocal_331, 1);
				}
			}
			else
			{
				func_27(&uLocal_331, 1);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(vLocal_308, 5f, false, false, false, false, false, false);
		}
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (!func_267(uLocal_331, 16))
		{
			func_173(iLocal_274[0], "NEED_A_VEHICLE", 10);
			func_27(&uLocal_331, 16);
			func_8(&iLocal_246);
		}
		if (!func_267(uLocal_331, 4))
		{
			func_73(&uLocal_331, 4);
		}
		if (!func_267(uLocal_331, 8))
		{
			func_73(&uLocal_331, 8);
		}
	}
	else
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
		fVar2 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iVar0);
		if (fVar1 < (fVar2 * 0.9f) || fVar1 > (fVar2 * 0.1f))
		{
			func_8(&iLocal_252);
		}
		if (!func_267(uLocal_331, 4))
		{
			if (func_4(&iLocal_246) > 15f && func_4(&iLocal_252) > 5f)
			{
				func_173(iLocal_274[0], "DRIVEN_FAST", 10);
				func_27(&uLocal_331, 4);
				func_8(&iLocal_246);
			}
		}
		else if (func_4(&iLocal_246) < 5f)
		{
			func_73(&uLocal_331, 4);
			func_8(&iLocal_246);
		}
		if (!func_267(uLocal_331, 8))
		{
			if (func_4(&iLocal_246) > 15f && func_4(&iLocal_252) > 5f)
			{
				func_173(iLocal_274[0], "DRIVEN_SLOW", 10);
				func_27(&uLocal_331, 4);
				func_8(&iLocal_246);
			}
		}
		else if (func_4(&iLocal_246) < 5f)
		{
			func_73(&uLocal_331, 8);
			func_8(&iLocal_246);
		}
		if (!func_267(uLocal_331, 131072))
		{
			if (func_223(iLocal_274[0], &iLocal_334))
			{
				if (func_4(&iLocal_249) > 5f)
				{
					func_173(iLocal_274[0], "CRASH_GENERIC_DRIVEN", 10);
					func_27(&uLocal_331, 131072);
					func_8(&iLocal_246);
				}
			}
		}
		else if (func_4(&iLocal_249) > 5f)
		{
			func_73(&uLocal_331, 131072);
			func_8(&iLocal_249);
		}
		if (!func_267(uLocal_331, 65536))
		{
			if (func_4(&iLocal_246) > 30f || (func_4(&iLocal_246) > 10f && !func_267(uLocal_331, 32)))
			{
				func_173(iLocal_274[0], "BOOTY_FLIRT", 10);
				func_27(&uLocal_331, 32);
				func_27(&uLocal_331, 524288);
				func_8(&iLocal_246);
			}
			else if (func_267(uLocal_331, 524288))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_274[0]) && func_4(&iLocal_246) > 4f)
				{
					func_173(PLAYER::PLAYER_PED_ID(), "BOOTY_FLIRT_RESP", 10);
					func_73(&uLocal_331, 524288);
				}
			}
		}
	}
}

bool func_223(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iVar0))
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0))
			{
				iVar1 = ENTITY::GET_ENTITY_HEALTH(iVar0);
				iVar2 = (*iParam1 - iVar1);
				*iParam1 = iVar1;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar0);
				if (iVar2 > 10)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_224(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(110, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, PLAYER::PLAYER_PED_ID()))
		{
			return true;
		}
	}
	return false;
}

void func_225()
{
	func_87();
	func_8(&iLocal_246);
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_280))
		{
			HUD::REMOVE_BLIP(&iLocal_280);
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_281))
		{
			iLocal_281 = func_62(vLocal_311, 0);
		}
		func_8(&iLocal_258);
		vLocal_320 = { ENTITY::GET_ENTITY_COORDS(iLocal_274[0], true) };
		iLocal_78 = 4;
	}
	else
	{
		func_8(&iLocal_249);
		func_61(vLocal_308);
		iLocal_78 = 5;
	}
}

void func_226()
{
	if (!func_267(uLocal_331, 1024))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_227(uLocal_76[0]))
			{
				if (!func_171())
				{
					func_173(iLocal_274[0], "NICE_CAR", 10);
					func_27(&uLocal_331, 1024);
				}
			}
		}
	}
}

bool func_227(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_228(iParam0, iVar1))
		{
			return true;
		}
	}
	return false;
}

bool func_228(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("MANANA"):
		case joaat("TORNADO"):
		case joaat("TORNADO3"):
		case joaat("TORNADO4"):
		case joaat("ZTYPE"):
		case joaat("REGINA"):
			if (iParam0 == 0)
			{
				return true;
			}
			break;
		case joaat("BLISTA"):
		case joaat("SURGE"):
		case joaat("DILETTANTE"):
		case joaat("PENUMBRA"):
		case joaat("ASTEROPE"):
			if (iParam0 == 1)
			{
				return true;
			}
			break;
		case joaat("DOMINATOR"):
		case joaat("GAUNTLET"):
		case joaat("PHOENIX"):
		case joaat("SABREGT"):
		case joaat("BULLET"):
		case joaat("BANSHEE"):
		case joaat("PEYOTE"):
		case joaat("BUFFALO"):
		case joaat("BUFFALO2"):
			if (iParam0 == 2)
			{
				return true;
			}
			break;
		case joaat("CHEETAH"):
		case joaat("COGCABRIO"):
		case joaat("JB700"):
		case joaat("STINGERGT"):
		case joaat("MONROE"):
		case joaat("COMET2"):
		case joaat("ORACLE"):
		case joaat("ORACLE2"):
		case joaat("INTRUDER"):
		case joaat("JACKAL"):
		case joaat("EXEMPLAR"):
		case joaat("FELON"):
		case joaat("SUPERD"):
		case joaat("INFERNUS"):
		case joaat("ENTITYXF"):
		case joaat("ADDER"):
		case joaat("VACCA"):
			if (iParam0 == 3 || iParam0 == 5)
			{
				return true;
			}
			break;
		case joaat("BALLER"):
		case joaat("BISON"):
		case joaat("DUBSTA"):
		case joaat("GRANGER"):
		case joaat("PATRIOT"):
		case joaat("BALLER2"):
		case joaat("BJXL"):
		case joaat("CAVALCADE"):
		case joaat("CAVALCADE2"):
		case joaat("GRESLEY"):
		case joaat("LANDSTALKER"):
		case joaat("MESA"):
		case joaat("RANCHERXL"):
		case joaat("SANDKING"):
		case joaat("REBEL"):
		case joaat("STRETCH"):
		case joaat("ROMERO"):
		case joaat("COACH"):
		case joaat("BUS"):
			if (iParam0 == 4 || iParam0 == 7)
			{
				return true;
			}
			break;
		case joaat("SURANO"):
		case joaat("RAPIDGT2"):
		case joaat("NINEF2"):
		case joaat("ZION2"):
		case joaat("TORNADO2"):
		case joaat("SENTINEL2"):
		case joaat("ISSI2"):
		case joaat("FELON2"):
			if (iParam0 == 6 || iParam0 == 1)
			{
				return true;
			}
			break;
		case joaat("VADER"):
		case joaat("AKUMA"):
		case joaat("BAGGER"):
		case joaat("BATI"):
		case joaat("BATI2"):
		case joaat("DOUBLE"):
		case joaat("HEXER"):
		case joaat("NEMESIS"):
		case joaat("RUFFIAN"):
			if (iParam0 == 8)
			{
				return true;
			}
			break;
		case joaat("FBI"):
		case joaat("TAXI"):
		case joaat("PRANGER"):
		case joaat("AMBULANCE"):
		case joaat("POLICE3"):
			if (iParam0 == 9)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_229(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_235(iParam0, 2, 1))
		{
			func_234(iParam0, 2, 1);
		}
	}
	else if (func_235(iParam0, 2, 1))
	{
		func_230(iParam0, 2, 1);
	}
}

void func_230(int iParam0, int iParam1, bool bParam2)
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
		if (func_54() == 0)
		{
			iVar0 = func_232(func_233(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_231(func_233(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_231(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_232(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_76(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_233(int iParam0)
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

void func_234(int iParam0, int iParam1, bool bParam2)
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
		if (func_54() == 0)
		{
			iVar0 = func_232(func_233(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_231(func_233(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

bool func_235(int iParam0, int iParam1, bool bParam2)
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
		if (func_54() == 0)
		{
			return MISC::IS_BIT_SET(func_232(func_233(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_111638.f_668[iParam0], iParam1);
	}
	return false;
}

void func_236()
{
	if (uLocal_76[0] == 8)
	{
		func_175("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_173(iLocal_274[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_237()
{
	if (!PED::IS_PED_IN_GROUP(iLocal_274[0]) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_274[0], true)) < 10f)
	{
		PED::SET_PED_AS_GROUP_MEMBER(iLocal_274[0], func_238());
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_274[0], 0);
	}
}

int func_238()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

float func_239(int iParam0, int iParam1, bool bParam2)
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

bool func_240(int iParam0, var uParam1, int* iParam2)
{
	var uVar0;
	int iVar1;

	if (!func_10(iParam2))
	{
		func_7(iParam2);
	}
	if (func_4(iParam2) > 3f)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		if (func_243(iParam0, iVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_241(&uVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
				{
					if (!PED::_DOES_RELATIONSHIP_GROUP_EXIST(iLocal_72))
					{
						PED::ADD_RELATIONSHIP_GROUP("BootyCall", &iLocal_72);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_72, joaat("PLAYER"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_72);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_72);
					TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				}
			}
			func_8(iParam2);
			return true;
		}
	}
	return false;
}

void func_241(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_242(1);
			break;
		case 2:
			break;
	}
}

void func_242(bool bParam0)
{
	Global_110632 = 0;
	Global_110632.f_1 = -1;
	Global_110632.f_2 = -1;
	if (bParam0)
	{
		func_124(-1);
	}
}

bool func_243(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!func_267(*uParam2, 1))
		{
			if (func_250(iParam0, uParam2))
			{
				*uParam3 = 1;
				return true;
			}
		}
		if (!func_267(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return true;
			}
		}
		if (!func_267(*uParam2, 4))
		{
			if (func_248(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return true;
			}
		}
		if (!func_267(*uParam2, 8))
		{
			if (func_247(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return true;
			}
		}
		bVar1 = !func_267(*uParam2, 128);
		if (bParam4)
		{
			if (func_244(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return true;
			}
		}
		else if (!func_267(*uParam2, 16))
		{
			if (func_244(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return true;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
		{
			*uParam3 = 16;
			return true;
		}
	}
	return false;
}

bool func_244(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		if (!bLocal_59)
		{
			iLocal_60 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_59 = true;
		}
		iLocal_61 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_62 = (iLocal_60 - iLocal_61);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return true;
				}
			}
		}
		if (bLocal_59)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return true;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		return true;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true))
			{
				return true;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return true;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return true;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return true;
		}
	}
	if (func_246(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return true;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_245(iParam0, 1) < 1.5f)
		{
			return true;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, false)))
			{
				return true;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return true;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
			{
				return true;
			}
		}
	}
	return false;
}

float func_245(int iParam0, bool bParam1)
{
	return func_239(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

bool func_246(int iParam0, int iParam1)
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
	if (iVar0 == joaat("WEAPON_PETROLCAN"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_247(int iParam0, int iParam1, var uParam2)
{
	if (WEAPON::IS_PED_ARMED(iParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(iParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_248(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;

	iVar3 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	if (MISC::IS_BULLET_IN_AREA(vVar0, 4f, true))
	{
		return true;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), true, true))
	{
		return true;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return true;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_249(iVar3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return true;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), false))
		{
			return true;
		}
	}
	return false;
}

bool func_249(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
				{
					if (iVar0 == joaat("WEAPON_STICKYBOMB"))
					{
						if (func_239(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PAD::IS_CONTROL_PRESSED(0, 69)))
									{
										return true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_250(int iParam0, var uParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_245(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

void func_251(int iParam0)
{
	struct<4> Var0;

	if (HUD::DOES_BLIP_EXIST(iLocal_282[iParam0]))
	{
		HUD::REMOVE_BLIP(&(iLocal_282[iParam0]));
	}
	iLocal_282[iParam0] = func_252(iLocal_274[iParam0], 0, 145);
	Var0 = { func_71(uLocal_76[iParam0]) };
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_282[iParam0], &Var0);
}

int func_252(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_253(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_253(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_63(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_63(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_63(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

bool func_254(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	float fVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (PED::GET_PED_GROUP_INDEX(iParam0) == func_238())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(iParam0, iVar6, false) && SYSTEM::VDIST(vVar0, vVar3) > 10f)
				{
					return true;
				}
			}
		}
	}
	if (bParam1 && func_267(uLocal_333, 2))
	{
		fVar7 = MISC::ABSF((vVar0.z - vVar3.z));
		if (fVar7 > 8f)
		{
			return true;
		}
	}
	return false;
}

void func_255()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_274[0], false))
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			func_196(iLocal_274[0], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0f, 2f, 0f));
			iLocal_74 = 1;
			iLocal_75 = 0;
		}
	}
}

void func_256()
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_257();
}

void func_257()
{
	Global_22211.f_134 = 1;
}

int func_258(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("CSB_STRIPPER_01");
		}
		else
		{
			return joaat("S_F_Y_STRIPPER_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("CSB_STRIPPER_02");
		}
		else
		{
			return joaat("S_F_Y_STRIPPER_02");
		}
	}
	return 0;
}

void func_259(bool bParam0)
{
	char cVar0[64];

	if (!func_165(iLocal_73))
	{
		iLocal_73 = func_169();
		func_159(&iLocal_73, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_267(uLocal_333, 512))
		{
			if (func_266(iLocal_73) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_274[0]))
			{
				if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
				{
					StringCopy(&cVar0, "SC_CANCEL_", 64);
					StringIntConCat(&cVar0, uLocal_76[0], 64);
					func_193(&uLocal_81, 1, 0, func_194(uLocal_76[0]), 0, 1);
					func_265(&uLocal_81, func_112(uLocal_76[0]), "SHAUD", &cVar0, 7, 0, 0, 1);
				}
				else
				{
					func_263();
				}
				func_262(iLocal_274[0]);
				func_27(&uLocal_333, 512);
			}
		}
		else if (func_261())
		{
			func_73(&uLocal_333, 512);
		}
		else if ((!func_171() && func_260()) && !func_261())
		{
			func_242(1);
			func_66(2);
		}
	}
}

bool func_260()
{
	if (Global_20805 == 0)
	{
		return true;
	}
	return false;
}

bool func_261()
{
	if (Global_20854 == 1 || Global_21821 == 1)
	{
		return true;
	}
	return false;
}

void func_262(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::SET_PED_PATH_AVOID_FIRE(iParam0, true);
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_339);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_339);
			TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 8000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_305, 1.5f, -1, 0.25f, false, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_339);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_339);
		}
	}
}

void func_263()
{
	int iVar0;

	if (func_264())
	{
		return;
	}
	iVar0 = func_115(uLocal_76[0]);
	func_109(-384575792, iVar0, 6, 3, func_113(), func_112(uLocal_76[0]), 0, 10000, -1, 0, -1, 0, 1);
}

bool func_264()
{
	if (func_54() == 0)
	{
		return true;
	}
	return false;
}

int func_265(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_189(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 1;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_177(sParam3, iParam4, bParam7);
}

bool func_266(int iParam0)
{
	return func_164(func_169(), iParam0);
}

bool func_267(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_268(var uParam0, bool bParam1)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	char cVar5[64];
	struct<16> Var21;
	char cVar37[64];

	func_296();
	func_64(&vVar0, &fVar3, bParam1);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (fLocal_329 == -1f)
		{
			fLocal_329 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vVar0);
		}
		if (iLocal_332 == -1)
		{
			iLocal_332 = uParam0->f_3;
		}
		if (!func_267(uLocal_333, 32))
		{
			func_292(&uLocal_278, func_294((*uParam0)[0], 0));
			func_291(&uLocal_278);
			func_27(&uLocal_333, 32);
			STREAMING::REQUEST_ANIM_DICT("mini@strip_club@idles@stripper");
			STREAMING::REQUEST_ANIM_DICT("gestures@f@standing@casual");
			func_290();
			return false;
		}
		else if ((!func_289(&uLocal_278) || !STREAMING::HAS_ANIM_DICT_LOADED("mini@strip_club@idles@stripper")) || !func_288())
		{
			return false;
		}
		if (bLocal_337)
		{
			if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				return false;
			}
		}
		if (!func_267(uLocal_333, 1024))
		{
			uLocal_76[0] = (*uParam0)[0];
			iLocal_274[0] = PED::CREATE_PED(26, func_294((*uParam0)[0], 0), vVar0, fVar3, true, true);
			func_282(iLocal_274[0], uLocal_76[0], 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_274[iVar4], true);
			PED::SET_PED_KEEP_TASK(iLocal_274[0], true);
			PED::SET_PED_DIES_WHEN_INJURED(iLocal_274[0], true);
			func_278(iLocal_274[0]);
			TASK::TASK_PLAY_ANIM(iLocal_274[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, 0f, false, false, false);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_274[iVar4], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_274[0], 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_274[0], func_194((*uParam0)[0]));
			func_193(&uLocal_81, 1, iLocal_274[0], func_194((*uParam0)[0]), 0, 1);
			func_27(&uLocal_333, 1024);
		}
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vVar0) > 100f)
		{
			if (func_192())
			{
				if (!func_267(uLocal_333, 1))
				{
					func_277(bParam1);
					func_251(0);
					func_27(&uLocal_333, 1);
				}
			}
			if (!func_267(uLocal_333, 64) && !func_267(uLocal_333, 512))
			{
				if (func_276(func_112((*uParam0)[0])))
				{
					StringCopy(&cVar5, "BC_PLYRC_", 64);
					if (func_77() == 2)
					{
						func_193(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						StringConCat(&cVar5, "T", 64);
					}
					else if (func_77() == 0)
					{
						func_193(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
						StringConCat(&cVar5, "M", 64);
					}
					else if (func_77() == 1)
					{
						func_193(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						StringConCat(&cVar5, "F", 64);
					}
					func_193(&uLocal_81, 3, 0, func_194((*uParam0)[0]), 0, 1);
					Var21 = { func_275() };
					func_270(&uLocal_81, func_112((*uParam0)[0]), "BCAUD", &cVar5, &cVar5, &Var21, &Var21, 12, 1, 0, 0, 0);
					func_27(&uLocal_333, 64);
				}
				if (func_165(iLocal_73))
				{
					if (func_266(iLocal_73))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&cVar37, "SC_CANCEL_", 64);
							StringIntConCat(&cVar37, (*uParam0)[0], 64);
							func_193(&uLocal_81, 1, 0, func_194((*uParam0)[0]), 0, 1);
							func_265(&uLocal_81, func_112((*uParam0)[0]), "SHAUD", &cVar37, 12, 0, 0, 1);
						}
						else
						{
							func_263();
						}
						func_27(&uLocal_333, 512);
					}
				}
			}
			else if (func_261())
			{
				func_73(&uLocal_333, 64);
				func_73(&uLocal_333, 512);
			}
			else if ((!func_171() && func_260()) && !func_261())
			{
				func_269((*uParam0)[0]);
				func_242(1);
				func_66(2);
			}
			if (!func_267(uLocal_333, 128))
			{
				if (!func_33(0))
				{
					func_67("SCLUB_HOME_C_H", uLocal_76[0], 0);
					func_27(&uLocal_333, 128);
				}
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vVar0) > (fLocal_329 + (200f * 3f)))
			{
				func_66(1);
			}
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vVar0) < fLocal_329)
			{
				fLocal_329 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vVar0);
			}
			return false;
		}
	}
	else
	{
		return false;
	}
	if (func_77() == 2)
	{
		func_193(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (func_77() == 0)
	{
		func_193(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_77() == 1)
	{
		func_193(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	return true;
}

void func_269(int iParam0)
{
	if (Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_111638.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_270(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar11;

	func_189(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_274();
	if (iParam8 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_272(2, &uVar0, &uVar11, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_271(&uVar0, &uVar11, iParam7, bParam11);
}

int func_271(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam2 > Global_20807)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
				}
				else
				{
					func_188();
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
		if (func_187(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_186();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21801 = Global_21802;
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20424.f_370 = Global_21794;
		Global_20801 = Global_20802;
		Global_20803 = Global_20804;
		if (Global_21063 == 0)
		{
			Global_20959[0 /*6*/] = { Global_20985[0 /*6*/] };
			Global_20959[1 /*6*/] = { Global_20985[1 /*6*/] };
			Global_21011[0 /*6*/] = { Global_21037[0 /*6*/] };
			Global_21011[1 /*6*/] = { Global_21037[1 /*6*/] };
			Global_20972[0 /*6*/] = { Global_20998[0 /*6*/] };
			Global_20972[1 /*6*/] = { Global_20998[1 /*6*/] };
			Global_21024[0 /*6*/] = { Global_21050[0 /*6*/] };
			Global_21024[1 /*6*/] = { Global_21050[1 /*6*/] };
		}
		if (Global_20811)
		{
			MISC::CLEAR_BIT(&Global_7356, 20);
			MISC::CLEAR_BIT(&Global_7357, 17);
			MISC::CLEAR_BIT(&Global_7358, 0);
			if (bParam3)
			{
				func_134();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_185())
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
					if (Global_21063 == 0)
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
			}
			if (func_23())
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
			}
			func_184();
			Global_20815 = bParam3;
		}
		Global_20807 = iParam2;
		if (Global_20801 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_20801)
			{
				StringCopy(&(Global_20424.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_20424.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_19671 = 0;
		func_183();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_20807 || iParam2 == Global_20807)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_188();
	}
	return 0;
}

void func_272(int iParam0, var uParam1, var uParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_273(iParam0);
	(*uParam1)[0] = cParam3;
	(*uParam2)[0] = cParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_273(int iParam0)
{
	Global_20802 = iParam0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
}

void func_274()
{
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_20819 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
}

struct<16> func_275()
{
	struct<16> Var0;

	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_76[0], 64);
	return Var0;
}

bool func_276(int iParam0)
{
	if ((Global_21919 || Global_21918) || Global_21920)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return false;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (Global_19486.f_1 == 10)
		{
			if (Global_6671 == iParam0)
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
	return false;
}

void func_277(bool bParam0)
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_84("SCLUB_HOME_MEE4", uLocal_76[0]);
			}
			else
			{
				func_84("SCLUB_HOME_MEET", uLocal_76[0]);
			}
			break;
		case 8:
			func_84("SCLUB_HOME_LIZ", uLocal_76[0]);
			break;
		case 9:
			func_84("SCLUB_HOME_HITCH", uLocal_76[0]);
			break;
	}
}

void func_278(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("S_F_Y_STRIPPER_02"))
	{
		func_281(iParam0, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
		func_280(iParam0, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
		func_279(iParam0, 0, 0);
	}
}

void func_279(int iParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 6, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, iParam1, iParam2, 0);
	}
}

void func_280(int iParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 3, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, iParam1, iParam2, 0);
	}
}

void func_281(int iParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 8, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iParam1, iParam2, 0);
	}
}

void func_282(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
		bVar0 = false;
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_STRIPPERLITE"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 0);
					func_284(iParam0, 1, -1, -1);
				}
				else
				{
					func_287(iParam0, 1, 1);
					func_286(iParam0, 2, 0);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_281(iParam0, 1, 0);
					func_283(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				break;
			case 1:
				if (bVar0)
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 0);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 0);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_279(iParam0, 4, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, 0, 4);
				}
				break;
			case 2:
				if (bVar0)
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 1, 1);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 0);
					func_284(iParam0, 1, -1, -1);
				}
				else
				{
					func_287(iParam0, 0, 1);
					func_286(iParam0, 1, 1);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 1);
					func_281(iParam0, 1, 0);
					func_283(iParam0, 1, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				break;
			case 3:
				if (bVar0)
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 1);
					func_280(iParam0, 0, 1);
					func_285(iParam0, 0, 1);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 2, 0);
					func_280(iParam0, 0, 2);
					func_285(iParam0, 1, 1);
					func_279(iParam0, 0, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, 2, 0);
				}
				break;
			case 4:
				if (bVar0)
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 0);
					func_284(iParam0, 1, -1, -1);
				}
				else
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 2, 1);
					func_280(iParam0, 1, 2);
					func_285(iParam0, 0, 2);
					func_281(iParam0, 1, 0);
					func_283(iParam0, 1, 2);
					func_284(iParam0, bParam2, -1, -1);
				}
				break;
			case 5:
				if (bVar0)
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 0);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(iParam0, 1, 1);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 0, 1);
					func_285(iParam0, 0, 2);
					func_279(iParam0, 2, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, 1, 2);
				}
				break;
			case 6:
				if (bVar0)
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 0);
					func_284(iParam0, 1, -1, -1);
				}
				else
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 0, 1);
					func_285(iParam0, 0, 1);
					func_281(iParam0, 1, 0);
					func_283(iParam0, 0, 1);
					func_284(iParam0, bParam2, 0, 1);
				}
				break;
			case 7:
				if (bVar0)
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 1);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 0, 2);
					func_280(iParam0, 1, 1);
					func_285(iParam0, 0, 1);
					func_279(iParam0, 0, 0);
					func_281(iParam0, 1, 0);
					func_284(iParam0, bParam2, 0, 0);
				}
				break;
			case 8:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
				break;
			case 9:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
				break;
		}
	}
}

void func_283(int iParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 11, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, iParam1, iParam2, 0);
	}
}

void func_284(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == func_258(0, 0) || iVar0 == func_258(0, 1))
	{
		if (bParam1)
		{
			func_280(iParam0, 2, 0);
			func_281(iParam0, 1, 0);
		}
	}
	else if (iVar0 == func_258(1, 0) || iVar0 == func_258(1, 1))
	{
		if (bParam1)
		{
			func_280(iParam0, 0, iParam2);
			func_279(iParam0, iParam3, 0);
			func_281(iParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("MP_F_STRIPPERLITE"))
	{
		if (bParam1)
		{
			func_281(iParam0, 1, 0);
		}
	}
}

void func_285(int iParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 4, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, iParam1, iParam2, 0);
	}
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 2, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, iParam1, iParam2, 0);
	}
}

void func_287(int iParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 0, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, iParam1, iParam2, 0);
	}
}

bool func_288()
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_204()))
	{
		return true;
	}
	else if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_204()))
	{
		return true;
	}
	return false;
}

bool func_289(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
				{
				}
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_290()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_204()))
	{
		TASK::REQUEST_WAYPOINT_RECORDING(func_204());
	}
}

void func_291(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_292(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_293(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_293(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_294(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return joaat("MP_F_STRIPPERLITE");
	}
	iVar0 = func_112(iParam0);
	if (iVar0 != 145)
	{
		return func_295(iVar0);
	}
	return func_258(0, 0);
}

int func_295(int iParam0)
{
	if (!func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_296()
{
	switch (uLocal_76[0])
	{
		case 1:
			vLocal_302 = { 128.1002f, -1895.001f, 22.4811f };
			vLocal_305 = { 128.1059f, -1896.819f, 22.6792f };
			vLocal_308 = { 133.9411f, -1881.89f, 22.5257f };
			vLocal_311 = { 130.1663f, -1893.057f, 22.3748f };
			vLocal_314 = { 133.4958f, -1891.641f, 22.4252f };
			fLocal_326 = 330.5705f;
			fLocal_327 = 244f;
			vLocal_323 = { 146.293f, -1888.049f, 22.2193f };
			fLocal_328 = fLocal_327;
			break;
		case 0:
			vLocal_302 = { -161.9628f, -1636.501f, 33.0339f };
			vLocal_305 = { -159.9415f, -1637.307f, 33.0339f };
			vLocal_308 = { -178.6316f, -1629.522f, 32.1789f };
			vLocal_311 = { -166.1453f, -1633.102f, 32.6574f };
			vLocal_314 = { -166.6636f, -1633.229f, 32.6567f };
			fLocal_326 = 108.072f;
			fLocal_327 = 180.9811f;
			vLocal_323 = { vLocal_308 };
			fLocal_328 = fLocal_327;
			break;
		case 4:
			vLocal_302 = { -198.3824f, 87.8785f, 68.7436f };
			vLocal_305 = { -197.2292f, 86.3497f, 68.7561f };
			vLocal_308 = { -200.9078f, 113.537f, 68.5518f };
			vLocal_311 = { -200.1384f, 96.9809f, 68.5203f };
			vLocal_314 = { -199.5068f, 95.7042f, 68.5193f };
			fLocal_326 = 48.99f;
			fLocal_327 = 64.3f;
			vLocal_323 = { vLocal_308 };
			fLocal_328 = fLocal_327;
			break;
		case 5:
			vLocal_302 = { -849.0348f, 510.6906f, 89.8218f };
			vLocal_305 = { -849.0408f, 508.5767f, 89.8218f };
			vLocal_308 = { -846.1005f, 520.2202f, 89.6217f };
			vLocal_311 = { -851.8972f, 512.73f, 89.6217f };
			vLocal_314 = { -851.8746f, 513.6746f, 89.6217f };
			fLocal_326 = 92.365f;
			fLocal_327 = 293f;
			vLocal_323 = { -860.4819f, 514.2496f, 88.1473f };
			fLocal_328 = fLocal_327;
			break;
		case 8:
			vLocal_302 = { -28.2427f, -1555.892f, 29.6918f };
			vLocal_305 = { -24.8589f, -1556.846f, 29.6819f };
			vLocal_308 = { -41.8174f, -1575.609f, 28.2831f };
			vLocal_311 = { -25.3404f, -1556.341f, 29.6919f };
			vLocal_314 = { -27.7382f, -1570.572f, 29.3f };
			fLocal_326 = 181.352f;
			fLocal_327 = 47.9206f;
			vLocal_323 = { vLocal_308 };
			fLocal_328 = fLocal_327;
			break;
		case 9:
			vLocal_302 = { 3313.487f, 5175.831f, 18.619f };
			vLocal_305 = { 3310.816f, 5176.331f, 18.619f };
			vLocal_308 = { 3334.321f, 5161.122f, 17.2996f };
			vLocal_311 = { 3317.788f, 5171.707f, 17.4471f };
			vLocal_314 = { 3318.076f, 5171.805f, 17.4385f };
			fLocal_326 = 236.4579f;
			vLocal_323 = { 3322.927f, 5148.607f, 17.3141f };
			fLocal_328 = 310.8648f;
			break;
	}
}

int func_297()
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_337)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		default:
			return 0;
	}
	return 0;
}

int func_298(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_302();
			}
			else
			{
				return 0;
			}
		}
		if (!func_301())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_302();
					}
					else
					{
						return 0;
					}
				}
				if (func_300())
				{
					if (!bParam2)
					{
						func_302();
					}
					else
					{
						return 0;
					}
				}
				if (func_299(157))
				{
					if (!bParam2)
					{
						func_302();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_302();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_302();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_302();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_299(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_300()
{
	return Global_2450632.f_593;
}

bool func_301()
{
	return Global_1312854;
}

void func_302()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_303()
{
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	func_86();
	HUD::CLEAR_PRINTS();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_301, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), true, true);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(vLocal_308 - Vector(3f, 3f, 3f), vLocal_308 + Vector(3f, 3f, 3f), 15f, 1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_274[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_274[0], false))
		{
			if (!func_267(uLocal_333, 8192))
			{
				TASK::TASK_WANDER_STANDARD(iLocal_274[0], 40000f, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_274[0], true);
			if (!PED::_DOES_RELATIONSHIP_GROUP_EXIST(iLocal_72))
			{
				PED::ADD_RELATIONSHIP_GROUP("BootyCall", &iLocal_72);
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_72, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_72);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_274[0], iLocal_72);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_274[0]));
	}
	if (iLocal_332 != -1)
	{
		func_305(&iLocal_332);
	}
	if (bLocal_71)
	{
		func_143(&uLocal_70);
	}
	PLAYER::_0xDE45D1A1EF45EE61(PLAYER::PLAYER_ID(), false);
	func_123(uLocal_76[0], -1);
	Global_110632 = 0;
	func_304(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_304(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_229(iVar0, bParam0);
		iVar0++;
	}
}

void func_305(int iParam0)
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

