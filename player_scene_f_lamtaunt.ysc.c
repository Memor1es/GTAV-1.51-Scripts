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
	var uLocal_45 = 0;
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
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 16;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
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
	var uLocal_237 = 5;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	bool bLocal_261 = false;
	int iLocal_262[3] = { 0, 0, 0 };
	int iLocal_266[3] = { 0, 0, 0 };
	int iLocal_270[4] = { 0, 0, 0, 0 };
	bool bLocal_275 = false;
	int iLocal_276 = 0;
	vector3 vLocal_277 = { 0f, 0f, 0f };
	float fLocal_280 = 0f;
	vector3 vLocal_281[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_291[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_304[3] = { 0f, 0f, 0f };
	float fLocal_308[4] = { 0f, 0f, 0f, 0f };
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	char[] cLocal_329[8] = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	char[] cLocal_345[8] = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	char cLocal_361[64] = "";
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	struct<16> Local_377[4];
	struct<16> Local_442[4];
	char cLocal_507[16] = "";
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	float fLocal_511 = 0f;
	bool bLocal_512 = false;
	bool bLocal_513 = false;
	float fLocal_514 = 0f;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	bool bLocal_517 = false;
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
	vLocal_61 = { 0f, 0f, 0f };
	vLocal_64 = { 0f, 0f, 0f };
	iLocal_67 = -1;
	iLocal_71 = 318;
	bLocal_261 = true;
	iLocal_276 = -1;
	StringCopy(&cLocal_507, "", 16);
	fLocal_511 = 0f;
	bLocal_513 = "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
	fLocal_514 = 0.94f;
	iLocal_515 = -1;
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		func_159();
	}
	SYSTEM::WAIT(0);
	func_148();
	func_146();
	func_142();
	while (bLocal_261 && func_138(2, 0))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_70)
		{
			case 0:
				if (func_137())
				{
					iLocal_70 = 1;
				}
				break;
			case 1:
				if (func_136())
				{
					iLocal_70 = 2;
				}
				break;
			case 2:
				if (func_134())
				{
					func_133(&uLocal_72, 0, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
					func_133(&uLocal_72, 2, Global_98465, "LAMAR", 0, 1);
					iLocal_70 = 3;
				}
				break;
			case 3:
				if (func_2())
				{
					iLocal_70 = 4;
				}
				break;
			case 4:
				func_1();
				break;
		}
	}
	func_159();
}

void func_1()
{
	bLocal_261 = false;
}

bool func_2()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_262)
	{
		func_126(&(iLocal_262[iVar0]), iVar0);
		iVar0++;
	}
	func_126(&Global_98465, iLocal_262);
	func_3(Global_98465);
	return false;
}

void func_3(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return;
	}
	if (UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (!bLocal_517 && UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
		{
			bVar0 = func_125(bParam0);
			iVar1 = func_122(bVar0);
			iVar2 = func_121(iVar1);
			if (iVar2 != -1)
			{
				iVar3 = func_119(bParam0);
				if (iVar3 != 0)
				{
					if (!func_118(iVar2) || func_110(iVar2) == 6)
					{
						func_109(75, UNK_0x68F4C0EC296D3901(bParam0, false), 250f, -1);
						if (func_41(Global_94478, bVar0, 2, 0, iVar3, iVar2, 75))
						{
							bLocal_517 = true;
						}
					}
				}
			}
		}
		return;
	}
	func_6(bParam0, 138, &uLocal_72, "FMFAUD", &uLocal_237, &uLocal_258, 3);
	fVar4 = SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bParam0, true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true));
	if (fVar4 > (8f * 8f))
	{
		iLocal_515 = -1;
	}
	else if (UNK_0x7DECE00E09F41C95(bParam0))
	{
		iLocal_515 = -1;
	}
	else
	{
		if (iLocal_515 <= 0)
		{
			iLocal_515 = UNK_0x1C0640BA9A7327B3();
		}
		if (iLocal_515 > 0)
		{
			if (iLocal_516 == 0)
			{
				if (iLocal_515 + 15000 < UNK_0x1C0640BA9A7327B3())
				{
					func_4(bParam0, "FRIEND_FOLLOWED_BY_PLAYER", 24);
					iLocal_515 = -1;
					iLocal_516++;
				}
			}
			else if (iLocal_515 + 10000 < UNK_0x1C0640BA9A7327B3())
			{
				func_4(bParam0, "HIT_BY_PLAYER", 24);
				iLocal_515 = -1;
				iLocal_516++;
			}
		}
	}
}

void func_4(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_5(iParam2), 1);
}

int func_5(int iParam0)
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

int func_6(bool bParam0, int iParam1, var uParam2, bool bParam3, var uParam4, bool bParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	bool bVar12;
	int iVar13;
	char cVar14[16];
	int iVar18;

	vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	vVar3 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	iVar6 = func_38();
	iVar7 = func_33(bParam0);
	StringCopy(&Var8, "", 16);
	switch (iVar7)
	{
		case 0:
			if (Global_93750[0] == 18)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_0", 16);
			break;
		case 1:
			if (Global_93750[1] == 42)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_1", 16);
			break;
		case 2:
			if (Global_93750[2] == 65 || Global_93750[2] == 66)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_2", 16);
			break;
		case 3:
			if (iVar6 == 1 || iVar6 == 2)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_3", 16);
			break;
		case 4:
			if (iVar6 == 1 || iVar6 == 2)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_4", 16);
			break;
		case 5:
			if (iVar6 == 0 || iVar6 == 2)
			{
				return 0;
			}
			StringCopy(&Var8, "FMF_0", 16);
			break;
		case 6:
			if (iVar6 == 0)
			{
				return 0;
			}
			StringCopy(&Var8, "FMF_1", 16);
			break;
		case 10:
			if (iVar6 == 1)
			{
				return 0;
			}
			StringCopy(&Var8, "FMT_0", 16);
			break;
		case 11:
			if (iVar6 == 1 || iVar6 == 0)
			{
				return 0;
			}
			StringCopy(&Var8, "FMT_3", 16);
			break;
		default:
			return 0;
	}
	switch (iVar6)
	{
		case 0:
			if (((iVar7 == 0 || iVar7 == 1) || iVar7 == 3) || iVar7 == 4)
			{
				StringConCat(&Var8, "_M0", 16);
			}
			else if (!func_32(131))
			{
				StringConCat(&Var8, "_M0", 16);
			}
			else
			{
				StringConCat(&Var8, "_M1", 16);
			}
			break;
		case 1:
			StringConCat(&Var8, "_F", 16);
			break;
		case 2:
			if (iVar7 == 11)
			{
				StringConCat(&Var8, "_T0", 16);
			}
			else if (!func_32(130))
			{
				StringConCat(&Var8, "_T0", 16);
			}
			else
			{
				StringConCat(&Var8, "_T1", 16);
			}
			break;
	}
	if (SYSTEM::VDIST2(vVar0, vVar3) > 100f)
	{
		return 0;
	}
	if (iParam1 == 6 || iParam1 == 31)
	{
		if (UNK_0x755FF954DAE327E1((vVar3.z - vVar0.z)) > 2f)
		{
			return 0;
		}
	}
	else if (!UNK_0x0A059E0DB9253280(bParam0) || !UNK_0x4FC40AB0ECCE6E18(bParam0))
	{
		return 0;
	}
	bVar12 = false;
	switch (iParam1)
	{
		case 10:
		case 8:
		case 1:
		case 39:
		case 40:
		case 30:
		case 136:
			bVar12 = true;
			break;
	}
	if (!UNK_0xBFC0798A6E3417F9(0, 46) && !UNK_0xD245978525608929(0, 46))
	{
		return 0;
	}
	if (!bVar12)
	{
		iVar13 = UNK_0xB0A50BC6EDB99CA9(bParam0);
		if (Global_98796.f_344 != iVar13)
		{
			return 0;
		}
	}
	cVar14 = { Var8 };
	StringConCat(&cVar14, "_01", 16);
	if (UNK_0xEF07223F00EBE9C9(&cVar14))
	{
		iVar18 = 1;
	}
	else
	{
		iVar18 = 0;
	}
	if (iVar18 || func_31(bParam3, &Var8, uParam4))
	{
		if (iVar7 == 5)
		{
			if (iVar6 == 0)
			{
				func_133(uParam2, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
			}
			else if (iVar6 == 1)
			{
				func_133(uParam2, 0, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
			}
			else if (iVar6 == 2)
			{
				func_133(uParam2, 0, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
			}
		}
		if (func_10(bParam3, &Var8, uParam2, iParam6, uParam4, 0))
		{
			func_7(bParam5);
			return 1;
		}
	}
	iParam1 = iParam1;
	return 0;
}

void func_7(bool bParam0)
{
	func_8(bParam0, 0f);
}

void func_8(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_9(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

float func_9(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (UNK_0x8CD06866876216F2())
	{
		iVar2 = UNK_0x2B6E0A53779D29EA();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3()) / 1000f);
}

bool func_10(bool bParam0, char* sParam1, var uParam2, int iParam3, var uParam4, bool bParam5)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	if (UNK_0xEA6BC48857E0AC4C(sParam1))
	{
		return false;
	}
	if (func_29(bParam0, 7))
	{
		sVar0 = "";
		switch (func_38())
		{
			case 0:
				sVar0 = "MICHAEL";
				break;
			case 1:
				sVar0 = "FRANKLIN";
				break;
			case 2:
				sVar0 = "TREVOR";
				break;
		}
		if (UNK_0xEA6BC48857E0AC4C(bParam5))
		{
			func_133(uParam2, 0, UNK_0x16F2683693E537C9(), sVar0, 0, 1);
			if (func_12(uParam2, bParam0, sParam1, iParam3, 0, 0, 0))
			{
				iVar1 = (*uParam4 - 1);
				while (iVar1 > 0)
				{
					*(uParam4[iVar1 /*4*/]) = { *(uParam4[(iVar1 - 1) /*4*/]) };
					iVar1 = (iVar1 - 1);
				}
				StringCopy(uParam4[0 /*4*/], sParam1, 16);
				return true;
			}
		}
		else
		{
			func_133(uParam2, 0, UNK_0x16F2683693E537C9(), sVar0, 0, 1);
			if (func_12(uParam2, bParam0, sParam1, iParam3, 0, 0, 0))
			{
				func_11(1);
				iVar2 = (*uParam4 - 1);
				while (iVar2 > 0)
				{
					*(uParam4[iVar2 /*4*/]) = { *(uParam4[(iVar2 - 1) /*4*/]) };
					iVar2 = (iVar2 - 1);
				}
				StringCopy(uParam4[0 /*4*/], sParam1, 16);
				return true;
			}
		}
	}
	return false;
}

void func_11(int iParam0)
{
	Global_21816 = iParam0;
}

int func_12(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_28(uParam0, 145, bParam1, iParam4, iParam5, iParam6);
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
	return func_13(bParam2, iParam3, 0);
}

int func_13(char* sParam0, int iParam1, bool bParam2)
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
					UNK_0x5CEB4DB888A62073(false);
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
					func_27();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (UNK_0x25037C66EB32B076())
		{
			return 0;
		}
		if (func_26(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_25();
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
			UNK_0x0674E58A79778E99(&Global_7356, 20);
			UNK_0x0674E58A79778E99(&Global_7357, 17);
			UNK_0x0674E58A79778E99(&Global_7358, false);
			if (bParam2)
			{
				func_23();
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
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (func_22())
				{
					return 0;
				}
				if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x6438374572DE9B51(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x989FD1982F631EA3(UNK_0x16F2683693E537C9(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (UNK_0x70EED0761B82965E(UNK_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62()))
					{
						return 0;
					}
					if (UNK_0xFB275CE013F3A38C(UNK_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (UNK_0x3114787DB5A129EF(UNK_0xD803B885F5E47A62(), 0))
					{
						return 0;
					}
				}
			}
			if (func_21())
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
				if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 9))
				{
					return 0;
				}
			}
			func_20();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_19();
		func_14();
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
		func_27();
	}
	return 0;
}

void func_14()
{
	if (!func_15())
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

bool func_15()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_18())
	{
		return false;
	}
	if (func_16(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 7))
	{
		return false;
	}
	if (UNK_0xA14BB9332558B949())
	{
		return false;
	}
	return true;
}

bool func_16(int iParam0)
{
	return func_17(iParam0, 20);
}

bool func_17(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_18()
{
	return -1;
}

void func_19()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	UNK_0x5CEB4DB888A62073(false);
	Global_20805 = 1;
}

void func_20()
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
	UNK_0x0674E58A79778E99(&Global_7357, 16);
}

bool func_21()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_22()
{
	int iVar0;
	int iVar1;

	if (Global_76622)
	{
		iVar0 = 0;
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar1, 1);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (UNK_0x5ED715849883FAFF() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0x24129324CD7C13D0(UNK_0x16F2683693E537C9(), 78, 1))
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

void func_23()
{
	if (func_24(14))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[2 /*29*/])
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
		Global_19486 = func_38();
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

bool func_24(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_25()
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

bool func_26(bool bParam0, int iParam1)
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

void func_27()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if ((UNK_0x1EE04CEA36EF313B() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

void func_28(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_29(bool bParam0, bool bParam1)
{
	if (UNK_0x01C309A4BDFCAD82(bParam0, bParam1))
	{
		return true;
	}
	else if (!func_30() && !UNK_0x1EE04CEA36EF313B())
	{
		if (!UNK_0xF20C10E87A52F9A6(bParam1))
		{
			UNK_0xD7992BEF7A9D109E(bParam0, bParam1);
		}
	}
	return false;
}

bool func_30()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

int func_31(bool bParam0, bool bParam1, var uParam2)
{
	char cVar0[16];
	char cVar4[16];
	int iVar8;
	struct<4> Var9[15];
	bool bVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;

	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return 0;
	}
	if (func_29(bParam0, 7))
	{
		cVar0 = { *bParam1 };
		StringCopy(&cVar4, "", 16);
		iVar8 = -1;
		cVar0 = { *bParam1 };
		StringConCat(&cVar0, "a", 16);
		StringConCat(&cVar0, "_", 16);
		StringConCat(&cVar0, &cVar4, 16);
		StringConCat(&cVar0, "1", 16);
		if (UNK_0xEF07223F00EBE9C9(&cVar0))
		{
			StringCopy(&cVar4, "", 16);
		}
		else
		{
			StringCopy(&cVar4, "0", 16);
			cVar0 = { *bParam1 };
			StringConCat(&cVar0, "a", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (UNK_0xEF07223F00EBE9C9(&cVar0))
			{
			}
			else
			{
				return 0;
			}
		}
		bVar70 = true;
		cVar0 = { *bParam1 };
		StringConCat(&cVar0, "a", 16);
		StringConCat(&cVar0, "_", 16);
		StringConCat(&cVar0, &cVar4, 16);
		StringConCat(&cVar0, "1", 16);
		if (UNK_0xEF07223F00EBE9C9(&cVar0))
		{
			iVar8++;
			Var9[iVar8 /*4*/] = { *bParam1 };
			StringConCat(&(Var9[iVar8 /*4*/]), "a", 16);
			bVar70 = false;
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *bParam1 };
			StringConCat(&cVar0, "b", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (UNK_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *bParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "b", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *bParam1 };
			StringConCat(&cVar0, "c", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (UNK_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *bParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "c", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *bParam1 };
			StringConCat(&cVar0, "d", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (UNK_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *bParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "d", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *bParam1 };
			StringConCat(&cVar0, "e", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (UNK_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *bParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "e", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *bParam1 };
			StringConCat(&cVar0, "f", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (UNK_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *bParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "f", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *bParam1 };
			StringConCat(&cVar0, "g", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (UNK_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *bParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "g", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *bParam1 };
			StringConCat(&cVar0, "h", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (UNK_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *bParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "h", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *bParam1 };
			StringConCat(&cVar0, "i", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (UNK_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *bParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "i", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *bParam1 };
			StringConCat(&cVar0, "j", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (UNK_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *bParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "j", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *bParam1 };
			StringConCat(&cVar0, "k", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (UNK_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *bParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "k", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *bParam1 };
			StringConCat(&cVar0, "JJJ", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (UNK_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *bParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "JJJ", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *bParam1 };
			StringConCat(&cVar0, "m", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (UNK_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *bParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "m", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *bParam1 };
			StringConCat(&cVar0, "n", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (UNK_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *bParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "n", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *bParam1 };
			StringConCat(&cVar0, "o", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (UNK_0xEF07223F00EBE9C9(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *bParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "o", 16);
				bVar70 = false;
			}
		}
		iVar71 = iVar8;
		iVar72 = 0;
		while (iVar72 < *uParam2)
		{
			if (!UNK_0xEA6BC48857E0AC4C(uParam2[iVar72 /*4*/]))
			{
				iVar73 = 0;
				while (iVar73 < Var9)
				{
					if (!UNK_0xEA6BC48857E0AC4C(&(Var9[iVar73 /*4*/])))
					{
						if (UNK_0x7F8A39872A07D2CE(uParam2[iVar72 /*4*/], &(Var9[iVar73 /*4*/])))
						{
							iVar74 = iVar73;
							while (iVar74 <= (Var9 - 1))
							{
								if (iVar74 + 1 < Var9)
								{
									Var9[iVar74 /*4*/] = { Var9[iVar74 + 1 /*4*/] };
								}
								else
								{
									StringCopy(&(Var9[iVar74 /*4*/]), "", 16);
								}
								iVar74++;
							}
							iVar71 = (iVar71 - 1);
						}
					}
					iVar73++;
				}
			}
			iVar72++;
		}
		iVar75 = UNK_0x09AC81E49EA267F7(false, iVar71 + 1);
		*bParam1 = { Var9[iVar75 /*4*/] };
		if (UNK_0xEA6BC48857E0AC4C(bParam1))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_32(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

int func_33(bool bParam0)
{
	int iVar0;

	iVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	if (iVar0 == func_37(14))
	{
		return 0;
	}
	if (iVar0 == func_37(15))
	{
		return 1;
	}
	if (iVar0 == func_37(17))
	{
		return 2;
	}
	if (iVar0 == joaat("S_F_M_MAID_01"))
	{
		return 3;
	}
	if (iVar0 == joaat("S_M_M_GARDENER_01"))
	{
		return 4;
	}
	if (iVar0 == joaat("IG_DENISE"))
	{
		return 5;
	}
	if (iVar0 == func_37(19))
	{
		return 6;
	}
	if (iVar0 == func_37(37))
	{
		return 7;
	}
	if (iVar0 == func_34(0))
	{
		return 8;
	}
	if (iVar0 == func_34(2))
	{
		return 9;
	}
	if (iVar0 == func_37(20))
	{
		return 10;
	}
	if (iVar0 == func_37(40))
	{
		return 11;
	}
	if (iVar0 == joaat("S_F_M_MAID_01"))
	{
		return 12;
	}
	if (iVar0 == func_37(32))
	{
		return 13;
	}
	if (iVar0 == func_37(24))
	{
		return 14;
	}
	return 16;
}

int func_34(int iParam0)
{
	if (func_36(iParam0))
	{
		return func_35(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_35(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_36(bool bParam0)
{
	return bParam0 < 3;
}

int func_37(int iParam0)
{
	if (!func_36(iParam0))
	{
		return func_35(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_38()
{
	func_39();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_39()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_34(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_40(UNK_0x16F2683693E537C9());
			if (func_36(iVar0) && (!func_24(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_36(Global_111638.f_2358.f_539.f_4321))
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

int func_40(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

bool func_41(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;

	iVar0 = 3;
	iVar1 = func_122(bParam1);
	bVar2 = func_108(iParam0);
	iVar3 = 10000;
	if (iParam3 == 0)
	{
		if (func_106(iVar1, iParam2, -1, &iVar4, &iVar5))
		{
			if (iParam5 == -1)
			{
				return false;
			}
			iVar6 = 0;
			if (((((iParam5 == 2091854273 || iParam5 == 328868333) || iParam5 == -1813399915) || iParam5 == 465306446) || iParam5 == -816460512) || iParam5 == -702667427)
			{
				iVar6 = 262144;
			}
			iVar7 = -1;
			if (iParam5 == 2091854273)
			{
				iVar7 = 24;
			}
			else if (iParam5 == 328868333)
			{
				iVar7 = 25;
			}
			else if (iParam5 == -1813399915)
			{
				iVar7 = 26;
			}
			else if (iParam5 == 465306446)
			{
				iVar7 = 27;
			}
			else if (iParam5 == -816460512)
			{
				iVar7 = 28;
			}
			else if (iParam5 == -702667427)
			{
				iVar7 = 29;
			}
			if (func_102(iParam5, iVar4, iVar5, iVar0, bVar2, bParam1, iVar3, 10000, iParam6, iParam4, iVar7, iVar6, 1))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	else if (func_98(iVar1, iParam2, -1, &uVar8))
	{
		if (func_84(bParam1, &uVar8, 1, 0, 0, 0, 0, 1, 0, 1))
		{
			if (iParam4 != 0)
			{
				switch (iParam4)
				{
					case 202:
						func_83();
						break;
					case 203:
						func_82();
						break;
					case 204:
						func_81();
						break;
					case 205:
						func_80();
						break;
					case 206:
						func_42();
						break;
				}
			}
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_42()
{
	int iVar0;
	int iVar1;

	iVar0 = func_38();
	iVar1 = func_79(iVar0);
	if (iVar1 > 10000)
	{
		func_43(iVar0, 129, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_43(iVar0, 129, (iVar1 / 10));
	}
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	if (func_78(iParam0) == 3)
	{
		return 0;
	}
	if (func_78(iParam0) == 4)
	{
		return 0;
	}
	return func_44(func_78(iParam0), 0, iParam1, iParam2, 0);
}

int func_44(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_77();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_76(99, 1);
					func_75(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_75(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_75(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_60(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_55(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_75(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_75(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_75(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_55(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_75(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_75(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_75(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_75(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_75(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_75(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_75(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_75(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_75(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				default:
					switch (UNK_0x7CF4675EC2B8ED0B())
					{
						case joaat("CLOTHES_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_75(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_75(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_75(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_75(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_75(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_75(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_55(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_75(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_75(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_75(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_75(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_75(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_75(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_54(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_76(95, iParam3);
					break;
				case 1:
					func_76(97, iParam3);
					break;
				case 2:
					func_76(96, iParam3);
					break;
			}
			func_76(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_47(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_47(bVar1);
	}
	iVar5 = (Global_58686[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58686[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58686[iVar2] = 2147483647;
				}
				else
				{
					Global_58686[iVar2] = (Global_58686[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_75(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_75(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_75(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		case 0:
			if (!bParam4)
			{
				if ((Global_58686[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58686[iVar2];
			Global_58686[iVar2] = (Global_58686[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111638.f_20559.f_233[iVar2 /*69*/]++;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_46(iParam0);
	if (Global_41431 == 15)
	{
		func_45(0);
	}
	return 1;
}

void func_45(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0 /*3*/][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0 /*3*/][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0 /*3*/][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0 /*3*/][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0 /*3*/][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0 /*3*/][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0 /*3*/][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0 /*3*/][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0 /*3*/][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0 /*3*/][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0 /*3*/][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0 /*3*/][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0 /*3*/][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0 /*3*/][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0 /*3*/][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0 /*3*/][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0 /*3*/][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0 /*3*/][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_46(int iParam0)
{
	bool bVar0;

	bVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			UNK_0xCDC520E5E48E63D9(joaat("SP0_TOTAL_CASH"), bVar0, 1);
			break;
		case 1:
			UNK_0xCDC520E5E48E63D9(joaat("SP1_TOTAL_CASH"), bVar0, 1);
			break;
		case 2:
			UNK_0xCDC520E5E48E63D9(joaat("SP2_TOTAL_CASH"), bVar0, 1);
			break;
	}
}

void func_47(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_53(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_53(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_53(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_53(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_50(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_50(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_50(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_50(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_50(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_50(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!UNK_0x8CD06866876216F2())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0))
		{
			bVar0 = true;
			UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_49() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_49() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_48(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_48(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		case 1:
			return "COUP_TATTOO";
		case 2:
			return "COUP_WARSTOCK";
		case 3:
			return "COUP_MOSPORT";
		case 4:
			return "COUP_ELITAS";
		case 5:
			return "COUP_MEDSPENS";
		case 6:
			return "COUP_SPRUNK";
		case 7:
			return "COUP_RESPRAY";
		case 8:
			return "COUP_XMAS2017";
		case 9:
			return "COUP_CAR_XMAS2018";
		case 10:
			return "COUP_HELI_XMAS2018";
		case 11:
			return "COUP_CAR2_XMAS2018";
		case 12:
			return "COUP_CAS_ELITAS";
		case 13:
			return "COUP_CAS_DOCKTEASE";
		case 14:
			return "COUP_CAS_MOSPORT";
		case 15:
			return "COUP_CAS_SSASA";
		case 16:
			return "COUP_CAS_WARSTOCK";
		case 17:
			return "COUP_CAS_PANDM";
		default:
			break;
	}
	return "";
}

int func_49()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_50(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_51(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
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

int func_52()
{
	return Global_1312745;
}

int func_53(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_52();
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

void func_54(int iParam0)
{
	func_76(93, iParam0);
	func_76(29, iParam0);
	func_76(30, iParam0);
}

bool func_55(bool bParam0)
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

	if (bParam0 == 8)
	{
		return func_57(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_57(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_57(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_57(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_56(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_56(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_56(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_56(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_56(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_56(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return false;
		}
		return true;
	}
	if (!UNK_0x8CD06866876216F2())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0);
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_49() /*10930*/].f_6174.f_10, bParam0);
}

int func_56(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_51(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_57(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_52();
	}
	iVar1 = func_59(iParam0, bParam1);
	iVar2 = func_58(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_58(int iParam0)
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

int func_59(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_52();
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

int func_60(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	if (UNK_0x5E109EC687D2605A(27))
	{
		return 0;
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (UNK_0x6FB46C25CCB7E6D5(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		bVar1 = (bVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	UNK_0x6FB46C25CCB7E6D5(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (bVar1 > 0 && (iVar2 / 2000000) != (bVar1 / 2000000))
	{
		UNK_0xCDC520E5E48E63D9(joaat("NUM_CASH_SPENT"), bVar1, 1);
		func_74(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_61(27, 1);
	return 1;
}

int func_61(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_62(iParam0, iParam1);
}

int func_62(int iParam0, int iParam1)
{
	if (func_24(14) && !func_73(iParam0))
	{
		return 0;
	}
	if (UNK_0x5E109EC687D2605A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_72(&Global_4270065))
	{
		if (func_70(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_63(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!UNK_0x5A66449FC9BDF808(iParam0))
		{
			return 0;
		}
		if (UNK_0x5E109EC687D2605A(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

bool func_63(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_24(14) && !func_73(iParam1))
	{
		return false;
	}
	if (func_70(uParam0, iParam1))
	{
		return false;
	}
	if (func_69(uParam0) < 0f)
	{
		func_68(uParam0, 0);
	}
	func_66(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_64(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_64(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_24(14) && !func_73(iParam1))
	{
		return 0;
	}
	if (func_70(uParam0, iParam1))
	{
		return 0;
	}
	if (func_69(uParam0) < 0f)
	{
		func_68(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_65(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_65(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_66(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_67(uParam0, iVar0);
		iVar0++;
	}
	func_68(uParam0, (Global_4270064 - 0.5f));
}

void func_67(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_68(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_69(var uParam0)
{
	return uParam0->f_80;
}

bool func_70(var uParam0, int iParam1)
{
	return func_71(uParam0, iParam1) != -1;
}

int func_71(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_72(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_73(int iParam0)
{
	switch (iParam0)
	{
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
			return true;
		default:
			break;
	}
	return false;
}

int func_74(int iParam0, bool bParam1)
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

void func_75(int iParam0, int iParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

void func_76(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (UNK_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/])
	{
		UNK_0x6FB46C25CCB7E6D5(Global_57254[iParam0 /*7*/].f_1, &bVar0, -1);
		bVar0 = (bVar0 + iParam1);
		UNK_0xCDC520E5E48E63D9(Global_57254[iParam0 /*7*/].f_1, bVar0, 1);
	}
}

void func_77()
{
	int iVar0;

	if (UNK_0x61D9362D70D2DD56())
	{
		UNK_0x6FB46C25CCB7E6D5(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		UNK_0x6FB46C25CCB7E6D5(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		UNK_0x6FB46C25CCB7E6D5(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_78(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_79(int iParam0)
{
	var uVar0;

	switch (iParam0)
	{
		case 0:
			UNK_0x6FB46C25CCB7E6D5(joaat("SP0_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		case 1:
			UNK_0x6FB46C25CCB7E6D5(joaat("SP1_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		case 2:
			UNK_0x6FB46C25CCB7E6D5(joaat("SP2_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		default:
			break;
	}
	return 0;
}

void func_80()
{
	int iVar0;
	int iVar1;

	iVar0 = func_38();
	iVar1 = func_79(iVar0);
	if (iVar1 > 10000)
	{
		func_43(iVar0, 128, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_43(iVar0, 128, (iVar1 / 10));
	}
}

void func_81()
{
	int iVar0;
	int iVar1;

	iVar0 = func_38();
	iVar1 = func_79(iVar0);
	if (iVar1 > 10000)
	{
		func_43(iVar0, 127, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_43(iVar0, 127, (iVar1 / 10));
	}
}

void func_82()
{
	int iVar0;
	int iVar1;

	iVar0 = func_38();
	iVar1 = func_79(iVar0);
	if (iVar1 > 10000)
	{
		func_43(iVar0, 126, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_43(iVar0, 126, (iVar1 / 10));
	}
}

void func_83()
{
	int iVar0;
	int iVar1;

	iVar0 = func_38();
	iVar1 = func_79(iVar0);
	if (iVar1 > 10000)
	{
		func_43(iVar0, 125, 5000);
	}
	else if (iVar1 >= 10)
	{
		func_43(iVar0, 125, (iVar1 / 10));
	}
}

bool func_84(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;

	UNK_0x0674E58A79778E99(&Global_7356, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_86(bParam0, bParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_85(bParam0) };
			Global_8043 = bParam0;
			UNK_0x5D96D8530B3D0904(&Global_7356, true);
			UNK_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return true;
	}
	return false;
}

struct<4> func_85(bool bParam0)
{
	return Global_1798[bParam0 /*29*/].f_3;
}

int func_86(bool bParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (UNK_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_23();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if (UNK_0xBADF5264209B7544(UNK_0x16F2683693E537C9()))
			{
				return 0;
			}
		}
		if (Global_111638.f_14046[Global_19486 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (UNK_0x8A22C4C08282BF26(joaat("APPTEXTMESSAGE")) > 0)
		{
			return 0;
		}
		if (UNK_0x8A22C4C08282BF26(joaat("APPTEXTMESSAGE")) > 0)
		{
			return 0;
		}
	}
	if (func_97() == 0)
	{
		func_95();
		return 0;
	}
	func_94(Global_21872);
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/]), bParam1, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_17 = bParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111638.f_14136[Global_21872 /*104*/].f_24 = iParam2;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_25 = iParam7;
	Global_111638.f_14136[Global_21872 /*104*/].f_26 = iParam8;
	Global_111638.f_14136[Global_21872 /*104*/].f_29 = iParam9;
	Global_111638.f_14136[Global_21872 /*104*/].f_30 = iParam12;
	Global_111638.f_14136[Global_21872 /*104*/].f_31 = iParam11;
	Global_111638.f_14136[Global_21872 /*104*/].f_28 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_33), sParam4, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_50), sParam5, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_83), sParam15, 64);
	if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 10))
	{
		Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 1;
		Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 1;
		Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 1;
		Global_8062 = 4;
		func_93(0);
		func_93(2);
		func_93(1);
	}
	else
	{
		func_23();
		switch (iParam16)
		{
			case 3:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[Global_19486] = 1;
				break;
			case 0:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 1;
				break;
			case 2:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 1;
				break;
			case 1:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19486)
			{
				case 0:
					func_93(0);
					Global_8062 = 0;
					break;
				case 1:
					func_93(1);
					Global_8062 = 1;
					break;
				case 2:
					func_93(2);
					Global_8062 = 2;
					break;
				case 3:
					func_93(3);
					Global_8062 = 3;
					break;
				default:
					Global_8062 = 4;
					break;
			}
		}
	}
	if (iParam7 == 1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 10))
		{
			Global_111638.f_14046[0 /*20*/].f_17 = 1;
			Global_111638.f_14046[1 /*20*/].f_17 = 1;
			Global_111638.f_14046[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111638.f_14046[Global_19486 /*20*/].f_17 = 1;
					break;
				case 0:
					Global_111638.f_14046[0 /*20*/].f_17 = 1;
					break;
				case 2:
					Global_111638.f_14046[2 /*20*/].f_17 = 1;
					break;
				case 1:
					Global_111638.f_14046[1 /*20*/].f_17 = 1;
					break;
			}
		}
	}
	Global_21874[Global_21872] = 0;
	if (bParam10)
	{
		func_23();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
			}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_92())
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_91(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_88(1);
			func_91(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_87(bParam0, bParam1);
	return 1;
}

void func_87(bool bParam0, bool bParam1)
{
	if (!func_15())
	{
		return;
	}
	UNK_0x6DFDEDC7A51E8DAE(bParam0, 1654525105, UNK_0x12AB0310C2281427(bParam1), 0);
}

void func_88(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;

	Global_21873 = 0;
	Global_7961 = iParam0;
	bVar0 = false;
	while (bVar0 < 9)
	{
		Global_7925[bVar0] = 0;
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 9)
	{
		iVar1 = 0;
		if (func_24(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (bVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[bVar0] == 0)
						{
							Global_7889[bVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 3))
								{
									bVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									bVar2 = 255;
									Global_19668 = 0;
								}
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_90(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar2);
								UNK_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_89(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_7925[bVar0] = 1;
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
					if (bVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[bVar0] == 0)
						{
							Global_7889[bVar0] = iVar1;
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
								func_89(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_89(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_89(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_89(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_90(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(Global_7362);
								UNK_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 2)
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 6))
								{
									bVar7 = 42;
								}
								else
								{
									bVar7 = 255;
								}
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_90(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar7);
								UNK_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 3)
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_7357, 3))
								{
									bVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									bVar8 = 255;
									Global_19668 = 0;
								}
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_90(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar8);
								UNK_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 8)
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_90(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(42);
								UNK_0x7E60D21B163E9D56();
							}
							else if ((iVar1 == 23 && UNK_0x7F8A39872A07D2CE(&(Global_7363[iVar1 /*15*/]), "CELL_BENWEB")) && UNK_0xEAE0D21A50E6C7F4(Global_7357, 6))
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_90(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(42);
								UNK_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_89(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_89(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_7925[bVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		bVar0++;
	}
}

void func_89(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, sParam1);
	UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam7))
	{
		func_90(bParam7);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		func_90(bParam8);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam9))
	{
		func_90(bParam9);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam10))
	{
		func_90(bParam10);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam11))
	{
		func_90(bParam11);
	}
	UNK_0x7E60D21B163E9D56();
}

void func_90(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_91(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, sParam1);
	UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		UNK_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	UNK_0x7E60D21B163E9D56();
}

bool func_92()
{
	return Global_1312877;
}

void func_93(int iParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = Global_111638.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;

	iVar0 = UNK_0x4460E481B9E33ADA();
	iVar1 = UNK_0x8D199E381D262EEF();
	iVar2 = UNK_0xD8A54335F18763BA();
	iVar3 = UNK_0x972A296334C9D57B();
	uVar4 = UNK_0x118229AD063C3C1D() + 1;
	iVar5 = UNK_0x1A61A218F5C5EB02();
	Global_111638.f_14136[iParam0 /*104*/].f_18 = iVar0;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_96(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_24 = 1;
}

bool func_96(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;

	if (Param0.f_5 < Param6.f_5)
	{
		return false;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return true;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return false;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return true;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
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

int func_97()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 0)
		{
			Global_21872 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 0 || Global_111638.f_14136[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_96(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
			{
				Global_21872 = iVar2;
			}
		}
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_21872 == 34)
	{
		return 0;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 0;
	return 1;
}

bool func_98(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<4> Var0;
	struct<4> Var4[2];
	int iVar13;

	if (iParam1 >= 5)
	{
	}
	else
	{
		if (iParam2 >= 2 || iParam2 < -1)
		{
			iParam2 = -1;
		}
		StringCopy(&Var0, "FTX_", 16);
		StringConCat(&Var0, func_101(iParam0), 16);
		StringConCat(&Var0, "_", 16);
		switch (iParam1)
		{
			case 0:
				StringConCat(&Var0, "LOST", 16);
				break;
			case 1:
				StringConCat(&Var0, "LATE", 16);
				break;
			case 2:
				StringConCat(&Var0, "HOSP", 16);
				break;
			case 3:
				StringConCat(&Var0, "PDIED", 16);
				break;
			case 4:
				StringConCat(&Var0, "PBUST", 16);
				break;
			default:
				StringConCat(&Var0, "X", 16);
				StringIntConCat(&Var0, iParam1, 16);
				*uParam3 = { Var0 };
				return false;
		}
		Var4[0 /*4*/] = { Var0 };
		StringConCat(&(Var4[0 /*4*/]), "a", 16);
		Var4[1 /*4*/] = { Var0 };
		StringConCat(&(Var4[1 /*4*/]), "b", 16);
		if (iParam2 == -1)
		{
			iVar13 = func_100(iParam0);
			if (func_99(&(Var4[0 /*4*/]), iVar13))
			{
				iParam2 = 1;
			}
			else if (func_99(&(Var4[1 /*4*/]), iVar13))
			{
				iParam2 = 0;
			}
			else
			{
				iParam2 = UNK_0x09AC81E49EA267F7(false, 2);
			}
		}
		*uParam3 = { Var4[iParam2 /*4*/] };
		return true;
	}
	return false;
}

bool func_99(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	if (iParam1 > 3)
	{
		return false;
	}
	while (iVar0 < 35)
	{
		if (!UNK_0x2EBF5002C6B6A06C(&(Global_111638.f_14136[iVar0 /*104*/])))
		{
			if (UNK_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar0 /*104*/]), bParam0))
			{
				if (Global_111638.f_14136[iVar0 /*104*/].f_99[iParam1])
				{
					iVar1 = 1;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		return true;
	}
	return false;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 19;
		case 4:
			return 14;
		case 5:
			return 17;
	}
	return 145;
}

char* func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "M";
		case 1:
			return "F";
		case 2:
			return "T";
		case 3:
			return "L";
		case 4:
			return "J";
		case 5:
			return "A";
	}
	return "X";
}

bool func_102(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;

	if (func_105(0))
	{
		return false;
	}
	if (iParam6 < 0)
	{
		return false;
	}
	if (iParam7 < 0)
	{
		return false;
	}
	if (iParam8 == 76)
	{
		return false;
	}
	if (iParam9 == 235)
	{
		return false;
	}
	if (bParam5 < 3)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, bParam5))
		{
			return false;
		}
	}
	if (bParam4 < 1 || bParam4 > 7)
	{
		return false;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return false;
	}
	if (Global_111638.f_7683.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_104(iParam3);
		Var0.f_4 = (UNK_0x1C0640BA9A7327B3() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = bParam4;
		Var0.f_6 = bParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		UNK_0x0674E58A79778E99(&(Var0.f_1), false);
		Global_111638.f_7683.f_651[Global_111638.f_7683.f_764 /*14*/] = { Var0 };
		Global_111638.f_7683.f_764++;
		func_103(0);
		func_103(1);
		func_103(2);
		return true;
	}
	return false;
}

void func_103(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_36(bParam0))
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

int func_104(int iParam0)
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

bool func_105(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

bool func_106(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	struct<4> Var0[2];
	int iVar9;

	if (iParam1 >= 5)
	{
	}
	else
	{
		if (iParam2 >= 2 || iParam2 < -1)
		{
			iParam2 = -1;
		}
		switch (iParam0)
		{
			case 0:
				*uParam3 = 61;
				break;
			case 1:
				*uParam3 = 62;
				break;
			case 2:
				*uParam3 = 63;
				break;
			case 3:
				*uParam3 = 64;
				break;
			case 4:
				*uParam3 = 65;
				break;
			case 5:
				*uParam3 = 66;
				break;
		}
		if (iParam2 == -1)
		{
			if (func_98(iParam0, iParam1, 0, &(Var0[0 /*4*/])) && func_98(iParam0, iParam1, 1, &(Var0[1 /*4*/])))
			{
				iVar9 = func_100(iParam0);
				if (func_99(&(Var0[0 /*4*/]), iVar9))
				{
					iParam2 = 1;
				}
				else if (func_99(&(Var0[1 /*4*/]), iVar9))
				{
					iParam2 = 0;
				}
				else
				{
					iParam2 = UNK_0x09AC81E49EA267F7(false, 2);
				}
			}
			else
			{
				iParam2 = UNK_0x09AC81E49EA267F7(false, 2);
			}
		}
		*uParam4 = func_107(iParam1, iParam2);
		return true;
	}
	return false;
}

int func_107(int iParam0, int iParam1)
{
	if (iParam1 == 0 || iParam1 == 1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam1 == 0)
				{
					return 67;
				}
				else
				{
					return 68;
				}
				break;
			case 1:
				if (iParam1 == 0)
				{
					return 69;
				}
				else
				{
					return 70;
				}
				break;
			case 2:
				if (iParam1 == 0)
				{
					return 71;
				}
				else
				{
					return 72;
				}
				break;
			case 3:
				if (iParam1 == 0)
				{
					return 73;
				}
				else
				{
					return 74;
				}
				break;
			case 4:
				if (iParam1 == 0)
				{
					return 75;
				}
				else
				{
					return 76;
				}
				break;
		}
	}
	return 75;
}

int func_108(int iParam0)
{
	switch (iParam0)
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

void func_109(int iParam0, vector3 vParam1, var uParam4, int iParam5)
{
	if (iParam0 == iParam5)
	{
		return;
	}
	if (iParam0 == 76)
	{
		return;
	}
	if (iParam5 == 76)
	{
		return;
	}
	Global_41432[iParam0 /*5*/] = { vParam1 };
	Global_41432[iParam0 /*5*/].f_3 = uParam4;
	Global_41432[iParam0 /*5*/].f_4 = iParam5;
}

int func_110(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = UNK_0x1C0640BA9A7327B3();
	iVar1 = 0;
	while (iVar1 < Global_111638.f_7683.f_136)
	{
		if (Global_111638.f_7683[iVar1 /*15*/] == iParam0)
		{
			return func_116(iParam0, iVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_111638.f_7683.f_764)
	{
		if (Global_111638.f_7683.f_651[iVar1 /*14*/] == iParam0)
		{
			return func_114(iParam0, iVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_111638.f_7683.f_866)
	{
		if (Global_111638.f_7683.f_765[iVar1 /*10*/] == iParam0)
		{
			return func_111(iParam0, iVar0);
		}
		iVar1++;
	}
	return 6;
}

int func_111(int iParam0, int iParam1)
{
	struct<10> Var0;
	bool bVar10;

	Var0 = { func_113(iParam0) };
	if (Var0 != iParam0)
	{
		return 6;
	}
	if (!func_36(func_38()))
	{
		return 6;
	}
	bVar10 = false;
	if (UNK_0xEAE0D21A50E6C7F4(Var0.f_2, func_112()))
	{
		bVar10 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar10)
	{
		if (Var0.f_3 < Global_111638.f_7683.f_919[func_112()])
		{
			return 5;
		}
	}
	if (Var0.f_6 != 144)
	{
		if (Global_41983[Var0.f_6] > iParam1)
		{
			return 3;
		}
	}
	if (Global_41982 > iParam1)
	{
		return 2;
	}
	return 1;
}

int func_112()
{
	func_39();
	return Global_111638.f_2358.f_539.f_4321;
}

struct<10> func_113(int iParam0)
{
	int iVar0;
	struct<10> Var1;

	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_866)
	{
		if (Global_111638.f_7683.f_765[iVar0 /*10*/] == iParam0)
		{
			return Global_111638.f_7683.f_765[iVar0 /*10*/];
		}
		iVar0++;
	}
	return Var1;
}

int func_114(int iParam0, int iParam1)
{
	struct<14> Var0;
	bool bVar14;

	Var0 = { func_115(iParam0) };
	if (Var0 != iParam0)
	{
		return 6;
	}
	if (!func_36(func_38()))
	{
		return 6;
	}
	bVar14 = false;
	if (UNK_0xEAE0D21A50E6C7F4(Var0.f_2, func_112()))
	{
		bVar14 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar14)
	{
		if (Var0.f_3 < Global_111638.f_7683.f_919[func_112()])
		{
			return 5;
		}
	}
	if (Global_41983[Var0.f_6] > iParam1)
	{
		return 3;
	}
	if (Global_41982 > iParam1)
	{
		return 2;
	}
	return 1;
}

struct<14> func_115(int iParam0)
{
	int iVar0;
	struct<14> Var1;

	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_764)
	{
		if (Global_111638.f_7683.f_651[iVar0 /*14*/] == iParam0)
		{
			return Global_111638.f_7683.f_651[iVar0 /*14*/];
		}
		iVar0++;
	}
	return Var1;
}

int func_116(int iParam0, int iParam1)
{
	struct<15> Var0;
	bool bVar15;

	Var0 = { func_117(iParam0) };
	if (Var0 != iParam0)
	{
		return 6;
	}
	if (!func_36(func_38()))
	{
		return 1;
	}
	if (Global_41978 != -1)
	{
		if (Global_111638.f_7683[Global_41978 /*15*/] == iParam0)
		{
			return 0;
		}
	}
	bVar15 = false;
	if (UNK_0xEAE0D21A50E6C7F4(Var0.f_2, func_112()))
	{
		bVar15 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar15)
	{
		if (Var0.f_3 < Global_111638.f_7683.f_919[func_112()])
		{
			return 5;
		}
	}
	if (Global_41983[Var0.f_6] > iParam1)
	{
		return 3;
	}
	if (Global_41982 > iParam1)
	{
		return 2;
	}
	return 1;
}

struct<15> func_117(int iParam0)
{
	int iVar0;
	struct<15> Var1;

	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (Global_111638.f_7683[iVar0 /*15*/] == iParam0)
		{
			return Global_111638.f_7683[iVar0 /*15*/];
		}
		iVar0++;
	}
	return Var1;
}

bool func_118(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (Global_111638.f_7683[iVar0 /*15*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar0 /*15*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar0 /*15*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_764)
	{
		if (Global_111638.f_7683.f_651[iVar0 /*14*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_866)
	{
		if (Global_111638.f_7683.f_765[iVar0 /*10*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_119(bool bParam0)
{
	vector3 vVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
		if (!UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()) || UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
		{
			switch (func_120(vVar0, 1))
			{
				case 0:
					return 202;
				case 1:
					return 203;
				case 2:
					return 204;
				case 3:
					return 205;
				case 4:
					return 206;
			}
			return 202;
		}
	}
	return 0;
}

int func_120(vector3 vParam0, bool bParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1E+07f;
	iVar3 = 5;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (Global_93947[iVar0 /*9*/].f_7 != 263)
		{
			if (!bParam3 || UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224.f_11[iVar0], false))
			{
				fVar1 = UNK_0x0EB28750412C3A5A(vParam0, Global_93947[iVar0 /*9*/].f_3, 1);
				if (fVar1 < fVar2)
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

int func_121(int iParam0)
{
	if (iParam0 == 0)
	{
		return 2091854273;
	}
	else if (iParam0 == 1)
	{
		return 328868333;
	}
	else if (iParam0 == 2)
	{
		return -1813399915;
	}
	else if (iParam0 == 3)
	{
		return 465306446;
	}
	else if (iParam0 == 4)
	{
		return -816460512;
	}
	else if (iParam0 == 5)
	{
		return -702667427;
	}
	return -1;
}

int func_122(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_124())
	{
		return func_123(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_124())
	{
		return 6;
	}
	if (iParam0 == 168)
	{
		return 6;
	}
	return 6;
}

var func_123(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_11;
}

int func_124()
{
	if (Global_30768 == 0 || Global_30768 == 2)
	{
		return 167;
	}
	return 161;
}

int func_125(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar2 = (func_124() - 1);
		iVar0 = 3;
		while (iVar0 <= iVar2)
		{
			if (func_37(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_126(bool bParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	int iVar14;

	iVar0 = 0;
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!func_138(2, *bParam0))
		{
			UNK_0x73270B3C9CC833FD(*bParam0, true, 1);
			UNK_0xEBA53F35D0085654(bParam0);
			iLocal_270[iParam1] = -1;
			return 0;
		}
		if (UNK_0xEB6A8945D1AC98A1(*bParam0))
		{
			iLocal_270[iParam1] = -1;
			return 0;
		}
		switch (iLocal_270[iParam1])
		{
			case 0:
				if (UNK_0xB4ECF989E2C1DAC8(*bParam0, &cLocal_361, &(Local_442[iParam1 /*16*/]), 2))
				{
					fVar1 = fLocal_514;
					fVar2 = -1f;
					fVar3 = -1f;
					if (UNK_0xDC2A248C2CB7B3DB(&cLocal_361, &(Local_442[iParam1 /*16*/]), "WalkInterruptible", &fVar2, &fVar3))
					{
						fVar1 = fVar2;
					}
					else
					{
						fVar1 = fLocal_514;
					}
					if (UNK_0xA45992A6CE82FB43(Global_96074) > fVar1)
					{
						if (func_132(vLocal_291[iParam1 /*3*/], 0f, 0f, 0f, 0))
						{
							vVar4 = { UNK_0x68F4C0EC296D3901(*bParam0, true) };
							vLocal_291[iParam1 /*3*/] = { vVar4 - vLocal_277 * Vector(4f, 4f, 4f) };
							vLocal_291[iParam1 /*3*/].f_2 = 0f;
						}
						SYSTEM::WAIT(0);
						if (UNK_0xEB6A8945D1AC98A1(*bParam0))
						{
							UNK_0xA3BF0AA5A2608191(*bParam0);
							UNK_0x80AA372E04ED318D(*bParam0, vLocal_277 + vLocal_291[iParam1 /*3*/] * Vector(0.1f, 0.1f, 0.1f), 1f, -1, 1193033728, 1056964608 /* Float: 0.5f */);
							UNK_0xBD453909DC26A85D(*bParam0, joaat("MOTIONSTATE_WALK"), false, 1, 0);
							UNK_0xF895E10BF4C72645(*bParam0, 0, 0);
							UNK_0xE972B33144E77B35(*bParam0, 2);
						}
						SYSTEM::WAIT(0);
						iLocal_270[iParam1] = 1;
						return 1;
					}
				}
				if (!UNK_0x69DF961355195C3C(Global_96073) && !UNK_0x69DF961355195C3C(Global_96074))
				{
					SYSTEM::WAIT(0);
					if (UNK_0xEB6A8945D1AC98A1(*bParam0))
					{
						UNK_0xA3BF0AA5A2608191(*bParam0);
						UNK_0x80AA372E04ED318D(*bParam0, vLocal_277 + vLocal_291[iParam1 /*3*/] * Vector(0.1f, 0.1f, 0.1f), 1f, -1, 1193033728, 1056964608 /* Float: 0.5f */);
						UNK_0xBD453909DC26A85D(*bParam0, joaat("MOTIONSTATE_WALK"), false, 1, 0);
						UNK_0xF895E10BF4C72645(*bParam0, 0, 0);
						UNK_0xE972B33144E77B35(*bParam0, 2);
					}
					SYSTEM::WAIT(0);
					iLocal_270[iParam1] = 1;
					return 1;
				}
				break;
			case 1:
				if (UNK_0xD1960163A3042274(*bParam0, 2106541073) != 1)
				{
					UNK_0x96167B03C5A77156(*bParam0, vLocal_277 + vLocal_291[iParam1 /*3*/], 1f, -1, 0.25f, iVar0, 1193033728);
					iLocal_270[iParam1] = 2;
					return 1;
				}
				fVar7 = SYSTEM::VMAG(vLocal_291[iParam1 /*3*/] * Vector(0.05f, 0.05f, 0.05f));
				if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(*bParam0, true), vLocal_277) >= fVar7)
				{
					if (!func_131() && !UNK_0x0A059E0DB9253280(*bParam0))
					{
						UNK_0x96167B03C5A77156(*bParam0, vLocal_277 + vLocal_291[iParam1 /*3*/], 1f, -1, 0.25f, iVar0, 1193033728);
						iLocal_270[iParam1] = 2;
						return 1;
					}
				}
				if (UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), *bParam0) || UNK_0x4734A6196B611C3B(*bParam0, false))
				{
					iLocal_270[iParam1] = 10;
					return 1;
				}
				break;
			case 2:
				if (UNK_0x869EFD0BC0868856(*bParam0) || UNK_0xA48EBBEA418ADC94(*bParam0))
				{
					return 0;
				}
				if (UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), *bParam0) || UNK_0x4734A6196B611C3B(*bParam0, false))
				{
					iLocal_270[iParam1] = 10;
					return 1;
				}
				if (UNK_0xD1960163A3042274(*bParam0, 713668775) != 1)
				{
					if (fLocal_308[iParam1] == 0f)
					{
						fLocal_308[iParam1] = (SYSTEM::VMAG(vLocal_291[iParam1 /*3*/]) * 0.75f);
					}
					UNK_0xA371FDC12D462090(*bParam0, vLocal_277 + vLocal_291[iParam1 /*3*/], fLocal_308[iParam1], 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */);
					iLocal_270[iParam1] = 3;
					return 1;
				}
				if (UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), *bParam0) || UNK_0x4734A6196B611C3B(*bParam0, false))
				{
					iLocal_270[iParam1] = 10;
					return 1;
				}
				break;
			case 3:
				if (UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), *bParam0) || UNK_0x4734A6196B611C3B(*bParam0, false))
				{
					iLocal_270[iParam1] = 10;
					return 1;
				}
				if (UNK_0x869EFD0BC0868856(*bParam0) || UNK_0xA48EBBEA418ADC94(*bParam0))
				{
					return 0;
				}
				if (UNK_0x035491B0E495A4C1(bLocal_513))
				{
					UNK_0xCD7D80FD792F9954(bLocal_513, false);
				}
				if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(*bParam0, true), vLocal_277 + vLocal_291[iParam1 /*3*/]) < (fLocal_308[iParam1] * fLocal_308[iParam1]))
				{
					if (UNK_0x4742C50E93110B10(vLocal_277 + vLocal_291[iParam1 /*3*/], fLocal_308[iParam1], 1))
					{
						UNK_0x4A35AD9FC803369E(*bParam0, vLocal_277 + vLocal_291[iParam1 /*3*/], fLocal_308[iParam1], 0);
						iLocal_270[iParam1] = 4;
						return 1;
					}
				}
				break;
			case 4:
				if (UNK_0xC7441A1068F3F171(*bParam0))
				{
				}
				else
				{
					if (UNK_0x869EFD0BC0868856(*bParam0) || UNK_0xA48EBBEA418ADC94(*bParam0))
					{
						return 0;
					}
					vVar8 = { func_127(vLocal_277 + vLocal_291[iParam1 /*3*/], func_130((fLocal_308[iParam1] * 0.9f), 10f, 100f), 0f) };
					if (UNK_0xD1960163A3042274(*bParam0, 1647992574) == 1)
					{
					}
					else if (UNK_0xB885EF0389689E54(vVar8, 0, &vVar11, 14))
					{
						if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(*bParam0, true), vVar11) > 100f)
						{
							UNK_0x96167B03C5A77156(*bParam0, vVar11, 1f, -1, 0.25f, iVar0, 1193033728);
							iLocal_270[iParam1] = 1;
							return 1;
						}
					}
				}
				break;
			case 10:
				iVar14 = 0;
				while (iVar14 < 3)
				{
					if (iVar14 != iParam1)
					{
						if (iLocal_270[iVar14] == 2 || iLocal_270[iVar14] == 3)
						{
							iLocal_270[iVar14] = 10;
						}
					}
					iVar14++;
				}
				UNK_0x0E2400AB9174FA81(5, bLocal_275, joaat("PLAYER"));
				UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), bLocal_275);
				UNK_0x0E2400AB9174FA81(5, bLocal_275, Global_93748);
				UNK_0x0E2400AB9174FA81(5, Global_93748, bLocal_275);
				UNK_0x7C8478BF70C1E072(*bParam0, 15f, 0);
				iLocal_270[iParam1] = 11;
				return 1;
			case 11:
				break;
			default:
				return 0;
		}
		return 1;
	}
	return 0;
}

Vector3 func_127(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;

	fVar3 = (fParam3 * fParam3);
	iVar5 = 0;
	while (iVar5 < 10)
	{
		vVar0 = { UNK_0x79833B02DBD2A244(-fParam3, fParam3), UNK_0x79833B02DBD2A244(-fParam3, fParam3), 0f };
		if (((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= fVar3)
		{
			fVar4 = (fParam4 / 2f);
			vVar0.f_2 = UNK_0x79833B02DBD2A244(-fVar4, fVar4);
			return vParam0 + vVar0;
		}
		iVar5++;
	}
	return func_128(vParam0, fParam3, fParam4);
}

Vector3 func_128(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { UNK_0x79833B02DBD2A244(-1f, 1f), UNK_0x79833B02DBD2A244(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_129(vVar0, UNK_0x79833B02DBD2A244(0f, fParam3)) };
	vVar0.f_2 = UNK_0x79833B02DBD2A244(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_129(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

float func_130(float fParam0, float fParam1, float fParam2)
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

bool func_131()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_132(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_133(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = bParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				UNK_0xA245D14CC59CDD36(bParam2, 0);
			}
			else
			{
				UNK_0xA245D14CC59CDD36(bParam2, 1);
			}
		}
		if (!UNK_0xEB6A8945D1AC98A1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				UNK_0x971EF1DE410C56CF(bParam2, 0);
			}
			else
			{
				UNK_0x971EF1DE410C56CF(bParam2, 1);
			}
		}
	}
}

bool func_134()
{
	float fVar0;
	int iVar1;

	if (!func_135())
	{
		if (UNK_0x69DF961355195C3C(Global_96074))
		{
			fVar0 = UNK_0xA45992A6CE82FB43(Global_96074);
			if (!bLocal_512)
			{
				if (fVar0 < fLocal_511)
				{
				}
				else if (func_12(&uLocal_72, "PRSAUD", &cLocal_507, 3, 0, 0, 0))
				{
					bLocal_512 = true;
				}
			}
		}
		else
		{
			return true;
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_262)
	{
		func_126(&(iLocal_262[iVar1]), iVar1);
		iVar1++;
	}
	func_126(&Global_98465, iLocal_262);
	return false;
}

bool func_135()
{
	if (!UNK_0x991B1F0980C62628() || UNK_0x19EC8D83154D7CC1() == 3)
	{
		return false;
	}
	if (UNK_0x00A15D69BCAA5267() > 8)
	{
		if (UNK_0x00A15D69BCAA5267() != 11)
		{
			return false;
		}
		if (UNK_0x00A15D69BCAA5267() == 11)
		{
			if (UNK_0x94EFC97F8A693855() > 0)
			{
				if (UNK_0x192DE42720995A6E() > 100)
				{
					return false;
				}
			}
		}
	}
	return true;
}

bool func_136()
{
	int iVar0;

	if (!func_135())
	{
		if (UNK_0x69DF961355195C3C(Global_96074))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_262)
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_262[iVar0]))
				{
					UNK_0x915804B434753CBD(iLocal_262[iVar0], Global_96074, &cLocal_361, &(Local_442[iVar0 /*16*/]), 8f, -4f, 3, 0, 1148846080, 0);
					iLocal_270[iVar0] = 0;
				}
				else
				{
					iLocal_270[iVar0] = -1;
				}
				iVar0++;
			}
			UNK_0x11BEEB2AE29A6102(Global_96074);
			return true;
		}
	}
	return false;
}

bool func_137()
{
	int iVar0;

	if (UNK_0x69DF961355195C3C(Global_96073))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_262)
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_262[iVar0]))
			{
				UNK_0x915804B434753CBD(iLocal_262[iVar0], Global_96073, &cLocal_361, &(Local_377[iVar0 /*16*/]), 8f, -1000f, 0, 0, 1148846080, 0);
			}
			iVar0++;
		}
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			func_133(&uLocal_72, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
		}
		if (!UNK_0xEB6A8945D1AC98A1(Global_98465))
		{
			func_133(&uLocal_72, 4, Global_98465, "LAMAR", 0, 1);
		}
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_262[0]))
		{
			func_133(&uLocal_72, 5, iLocal_262[0], "GangMember1", 0, 1);
		}
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_262[1]))
		{
			func_133(&uLocal_72, 6, iLocal_262[1], "GangMember2", 0, 1);
		}
		return true;
	}
	return false;
}

bool func_138(int iParam0, bool bParam1)
{
	vector3 vVar0;
	float fVar3;

	if (UNK_0x991B1F0980C62628())
	{
		if (UNK_0x19EC8D83154D7CC1() != 3)
		{
			if (UNK_0x00A15D69BCAA5267() <= 2 && UNK_0x00A15D69BCAA5267() != 1)
			{
				return true;
			}
		}
	}
	if (!UNK_0x991B1F0980C62628())
	{
		if (func_24(14))
		{
			return false;
		}
		if (UNK_0x8F7DE34FFB67592B())
		{
			return false;
		}
		if (!func_140(iParam0, func_141()))
		{
			return false;
		}
		if (UNK_0xC844350D5D58C99A(bParam1))
		{
			vVar0 = { UNK_0x68F4C0EC296D3901(bParam1, false) };
			fVar3 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar0);
			if (fVar3 > 250f)
			{
				if (!UNK_0x437347B10A200C4B(bParam1, 0))
				{
					if (!UNK_0x0A059E0DB9253280(bParam1))
					{
						return false;
					}
				}
				else if (!UNK_0x8E28E832BEAC3DCE(vVar0, 1.5f))
				{
					return false;
				}
			}
		}
		else if (bParam1 == func_139(Global_98465) && bParam1 != 0)
		{
			Global_98465 = 0;
		}
	}
	return true;
}

bool func_139(var uParam0)
{
	return uParam0;
}

bool func_140(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_141()
{
	func_39();
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

void func_142()
{
	if (!UNK_0x991B1F0980C62628())
	{
		if (UNK_0x757EF87A33649210())
		{
			func_145();
		}
		return;
	}
	if (UNK_0x19EC8D83154D7CC1() == 3)
	{
		func_145();
		return;
	}
	func_143();
	if (Global_98467 > 0)
	{
		return;
	}
	UNK_0x36B03FE02FE012AB();
}

void func_143()
{
	func_144((Global_98467 - 1));
}

void func_144(int iParam0)
{
	Global_98467 = iParam0;
}

void func_145()
{
	func_144(0);
}

void func_146()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 400)
	{
		bVar2 = true;
		if (!UNK_0xC844350D5D58C99A(Global_98465))
		{
			bVar2 = false;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_262)
		{
			if (iLocal_266[iVar0] != 0)
			{
				UNK_0x523BCC9DC80CD82F(iLocal_266[iVar0]);
				if (!UNK_0xB87F6CF6E5628C67(iLocal_266[iVar0]))
				{
					bVar2 = false;
					UNK_0x523BCC9DC80CD82F(iLocal_266[iVar0]);
				}
			}
			iVar0++;
		}
		if (!UNK_0xEA6BC48857E0AC4C(&cLocal_361))
		{
			UNK_0x3F423BF5B8125A50(&cLocal_361);
			if (!UNK_0xB4AE0788C1587752(&cLocal_361))
			{
				bVar2 = false;
				UNK_0x3F423BF5B8125A50(&cLocal_361);
			}
		}
		if (!bVar2)
		{
			iVar1++;
		}
		SYSTEM::WAIT(0);
	}
	if (UNK_0xC844350D5D58C99A(Global_98465))
	{
		if (func_37(19) == UNK_0x134B62B726CEC8E6(Global_98465))
		{
			UNK_0x73270B3C9CC833FD(Global_98465, true, 1);
		}
		func_147(&Global_98465, Global_93748);
		UNK_0x4E885A246A9D983A(Global_98465, 132, true);
		UNK_0x4E885A246A9D983A(Global_98465, 317, true);
		func_147(&Global_98465, Global_93748);
	}
	UNK_0xF63400DBE3303D26("TAUNTERS", &bLocal_275);
	iVar0 = 0;
	while (iVar0 < iLocal_262)
	{
		if (iLocal_266[iVar0] != 0)
		{
			iLocal_262[iVar0] = UNK_0x36F2404464202779(iLocal_276, iLocal_266[iVar0], vLocal_277 + vLocal_281[iVar0 /*3*/], false, 1, true);
			UNK_0xD8F6A53F4799FAFE(iLocal_262[iVar0], (fLocal_280 + fLocal_304[iVar0]));
			UNK_0xC743BD39A24D0583(iLocal_262[iVar0], 0);
			UNK_0x6DF7BF67E86AAE86(iLocal_262[iVar0], bLocal_275);
			UNK_0xC6EB89C59F2AF6B8(iLocal_262[iVar0], &cLocal_361, &(Local_377[iVar0 /*16*/]), 8f, -8f, -1, 9, false, 0, 0, 0);
			UNK_0x4E885A246A9D983A(iLocal_262[iVar0], 317, true);
			if (iLocal_276 == 6)
			{
				UNK_0x262EF6C6306BEA6C(iLocal_262[iVar0], joaat("WEAPON_STUNGUN"), 1000, false, true);
			}
		}
		iVar0++;
	}
}

void func_147(var uParam0, bool bParam1)
{
	UNK_0x25C5402CC10F76CD(*uParam0, false);
	UNK_0x4E885A246A9D983A(*uParam0, 20, true);
	UNK_0x5E678B691C852774(*uParam0, 16);
	if (bParam1 != joaat("NO_RELATIONSHIP"))
	{
		UNK_0x6DF7BF67E86AAE86(*uParam0, bParam1);
	}
}

void func_148()
{
	char[] cVar0[8];
	var uVar8;
	var uVar9;

	iLocal_71 = Global_98147;
	func_152(iLocal_71, &vLocal_277, &fLocal_280, &cVar0);
	func_150(iLocal_71, &uLocal_313, &cLocal_329, &cLocal_345, &uVar8, &uVar9);
	switch (iLocal_71)
	{
		case 218:
			vLocal_281[0 /*3*/] = { UNK_0x79833B02DBD2A244(-10f, 10f), UNK_0x79833B02DBD2A244(-10f, 10f), 0f };
			vLocal_281[1 /*3*/] = { UNK_0x79833B02DBD2A244(-10f, 10f), UNK_0x79833B02DBD2A244(-10f, 10f), 0f };
			vLocal_291[0 /*3*/] = { -77.3f, -4.1f, 1f };
			vLocal_291[1 /*3*/] = { vLocal_291[0 /*3*/] };
			vLocal_291[iLocal_262 /*3*/] = { 66.7f, -7.299f, 1f };
			fLocal_304[0] = UNK_0x79833B02DBD2A244(-180f, 180f);
			fLocal_304[1] = UNK_0x79833B02DBD2A244(-180f, 180f);
			fLocal_308[0] = 30f;
			fLocal_308[1] = fLocal_308[0];
			fLocal_308[iLocal_262] = 20f;
			fLocal_514 = 0.94f;
			iLocal_266[0] = joaat("G_M_Y_STRPUNK_01");
			iLocal_266[1] = joaat("G_M_Y_STRPUNK_02");
			iLocal_276 = 7;
			StringCopy(&cLocal_361, "SWITCH@FRANKLIN@GANG_TAUNT_P1", 64);
			StringCopy(&(Local_377[0 /*16*/]), "gang_taunt_loop_thug_01", 64);
			StringCopy(&(Local_377[1 /*16*/]), "gang_taunt_loop_thug_02", 64);
			StringCopy(&(Local_442[0 /*16*/]), "gang_taunt_exit_thug_01", 64);
			StringCopy(&(Local_442[1 /*16*/]), "gang_taunt_exit_thug_02", 64);
			StringCopy(&cLocal_507, "FRAS_IG_6_P1", 16);
			fLocal_511 = 0f;
			break;
		case 219:
			vLocal_281[0 /*3*/] = { -0.2331f, 0.0497f, 0.0041f };
			vLocal_281[1 /*3*/] = { 0.6908f, -0.4534f, 0.0042f };
			vLocal_291[0 /*3*/] = { -0.6f, -144.3f, 0f };
			vLocal_291[1 /*3*/] = { vLocal_291[0 /*3*/] };
			vLocal_291[iLocal_262 /*3*/] = { 112.2308f, 43.129f, 3.188f };
			fLocal_304[0] = 180f;
			fLocal_304[1] = 180f;
			fLocal_308[0] = 40f;
			fLocal_308[1] = fLocal_308[0];
			fLocal_308[iLocal_262] = 40f;
			fLocal_514 = 0.94f;
			iLocal_266[0] = joaat("G_M_Y_STRPUNK_01");
			iLocal_266[1] = joaat("G_M_Y_STRPUNK_02");
			iLocal_276 = 7;
			StringCopy(&cLocal_361, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(&(Local_377[0 /*16*/]), "gang_taunt_with_lamar_loop_g1", 64);
			StringCopy(&(Local_377[1 /*16*/]), "gang_taunt_with_lamar_loop_g2", 64);
			StringCopy(&(Local_442[0 /*16*/]), "gang_taunt_with_lamar_exit_g1", 64);
			StringCopy(&(Local_442[1 /*16*/]), "gang_taunt_with_lamar_exit_g2", 64);
			StringCopy(&cLocal_507, "FRAS_IG_6_P3", 16);
			fLocal_511 = 0f;
			break;
		case 220:
			vLocal_281[0 /*3*/] = { 1.7097f, -1.8585f, -0.052f };
			vLocal_281[1 /*3*/] = { 2.7011f, -1.5f, -0.052f };
			vLocal_291[0 /*3*/] = { Vector(21.5656f, -1890.595f, 59.4395f) - vLocal_277 };
			vLocal_291[1 /*3*/] = { vLocal_291[0 /*3*/] };
			vLocal_291[iLocal_262 /*3*/] = { Vector(-4.6336f, -54.7307f, 67.5391f) * Vector(-1f, -1f, -1f) };
			fLocal_304[0] = -0.7167f;
			fLocal_304[1] = -0.7167f;
			fLocal_308[0] = 40f;
			fLocal_308[1] = fLocal_308[0];
			fLocal_308[iLocal_262] = 40f;
			fLocal_514 = 0.99f;
			iLocal_266[0] = joaat("S_M_Y_COP_01");
			iLocal_266[1] = joaat("S_M_Y_COP_01");
			iLocal_276 = 6;
			StringCopy(&cLocal_361, "SWITCH@FRANKLIN@GANG_TAUNT_P5", 64);
			StringCopy(&(Local_377[0 /*16*/]), "fras_ig_6_p5_loop_g1", 64);
			StringCopy(&(Local_377[1 /*16*/]), "fras_ig_6_p5_loop_g2", 64);
			StringCopy(&(Local_442[0 /*16*/]), "fras_ig_6_p5_exit_g1", 64);
			StringCopy(&(Local_442[1 /*16*/]), "fras_ig_6_p5_exit_g2", 64);
			StringCopy(&cLocal_507, "FRAS_IG_6_P4", 16);
			fLocal_511 = 0.625f;
			break;
		case 225:
			vLocal_281[0 /*3*/] = { 3.8209f, 1.0394f, 0f };
			vLocal_281[1 /*3*/] = { 4.0994f, -0.0922f, 0f };
			vLocal_291[0 /*3*/] = { Vector(27.9565f, -1650.517f, 278.2831f) - vLocal_277 };
			vLocal_291[1 /*3*/] = { vLocal_291[0 /*3*/] };
			vLocal_291[iLocal_262 /*3*/] = { -Vector(0f, 62.7f, 54.673f) };
			fLocal_304[0] = -23.9383f;
			fLocal_304[1] = 5.0908f;
			fLocal_308[0] = 40f;
			fLocal_308[1] = fLocal_308[0];
			fLocal_308[iLocal_262] = 40f;
			fLocal_514 = 0.94f;
			iLocal_266[0] = joaat("G_M_Y_STRPUNK_01");
			iLocal_266[1] = joaat("G_M_Y_STRPUNK_02");
			iLocal_276 = 7;
			StringCopy(&cLocal_361, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(&(Local_377[0 /*16*/]), "fras_ig_10_p3_loop_g1", 64);
			StringCopy(&(Local_377[1 /*16*/]), "fras_ig_10_p3_loop_g2", 64);
			StringCopy(&(Local_442[0 /*16*/]), "fras_ig_10_p3_exit_g1", 64);
			StringCopy(&(Local_442[1 /*16*/]), "fras_ig_10_p3_exit_g2", 64);
			cLocal_507 = { func_149("FRAS_IG_10", 3) };
			fLocal_511 = 0f;
			break;
		default:
			vLocal_281[0 /*3*/] = { UNK_0x79833B02DBD2A244(-10f, 10f), UNK_0x79833B02DBD2A244(-10f, 10f), 0f };
			vLocal_281[1 /*3*/] = { UNK_0x79833B02DBD2A244(-10f, 10f), UNK_0x79833B02DBD2A244(-10f, 10f), 0f };
			vLocal_291[0 /*3*/] = { 0f, 0f, 0f };
			vLocal_291[1 /*3*/] = { 0f, 0f, 0f };
			vLocal_291[iLocal_262 /*3*/] = { 0f, 0f, 0f };
			fLocal_304[0] = UNK_0x79833B02DBD2A244(-180f, 180f);
			fLocal_304[1] = UNK_0x79833B02DBD2A244(-180f, 180f);
			fLocal_308[0] = 0f;
			fLocal_308[1] = 0f;
			fLocal_308[iLocal_262] = 0f;
			fLocal_514 = -1f;
			iLocal_266[0] = joaat("G_M_Y_STRPUNK_01");
			iLocal_266[1] = joaat("G_M_Y_STRPUNK_02");
			iLocal_276 = -1;
			StringCopy(&cLocal_507, "", 16);
			fLocal_511 = 0f;
			break;
	}
	StringCopy(&(Local_377[iLocal_262 /*16*/]), "", 64);
	StringCopy(&(Local_377[iLocal_262 /*16*/]), "", 64);
}

struct<4> func_149(char* sParam0, bool bParam1)
{
	struct<4> Var0;

	StringCopy(&Var0, sParam0, 16);
	switch (UNK_0x09AC81E49EA267F7(false, bParam1))
	{
		case 0:
			StringConCat(&Var0, "a", 16);
			break;
		case 1:
			StringConCat(&Var0, "b", 16);
			break;
		case 2:
			StringConCat(&Var0, "c", 16);
			break;
		default:
			StringConCat(&Var0, "X", 16);
			break;
	}
	return Var0;
}

int func_150(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, var uParam5)
{
	*uParam4 = 9;
	*uParam5 = 0;
	switch (iParam0)
	{
		case 11:
			StringCopy(sParam1, "SWITCH@FRANKLIN@STRIPCLUB", 64);
			StringCopy(sParam2, "002113_02_FRAS_15_STRIPCLUB_IDLE", 64);
			StringCopy(sParam3, "002113_02_FRAS_15_STRIPCLUB_EXIT", 64);
			return 1;
		case 124:
			StringCopy(sParam1, "SWITCH@MICHAEL@WASH_FACE", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
		case 234:
			StringCopy(sParam1, "SWITCH@TREVOR@ON_TOILET", 64);
			StringCopy(sParam2, "trev_on_toilet_loop", 64);
			StringCopy(sParam3, "trev_on_toilet_exit", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return 1;
		case 316:
			StringCopy(sParam1, "SWITCH@TREVOR@JERKING_OFF", 64);
			StringCopy(sParam2, "trev_jerking_off_loop", 64);
			StringCopy(sParam3, "trev_jerking_off_exit", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return 1;
		case 77:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			StringCopy(sParam2, "BED_LOOP_Michael", 64);
			StringCopy(sParam3, "BED_EXIT_Michael", 64);
			return 1;
		case 78:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM2", 64);
			StringCopy(sParam2, "BED_LOOP_Michael", 64);
			StringCopy(sParam3, "BED_EXIT_Michael", 64);
			return 1;
		case 79:
			StringCopy(sParam1, "SAFE@MICHAEL@IG_3", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_MICHAEL", 64);
			return 1;
		case 80:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING", 64);
			StringCopy(sParam2, "IDLE", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			return 1;
		case 82:
			StringCopy(sParam1, "SWITCH@MICHAEL@WAKES_UP_SCREAMING", 64);
			StringCopy(sParam2, "001671_02_MICS2_1_WAKES_UP_SCREAMING_IDLE", 64);
			StringCopy(sParam3, "001671_02_MICS2_1_WAKES_UP_SCREAMING_EXIT", 64);
			return 1;
		case 84:
			StringCopy(sParam1, "SAVECountryside@", 64);
			StringCopy(sParam2, "M_Sleep_Loop_countryside", 64);
			StringCopy(sParam3, "M_GetOut_countryside", 64);
			return 1;
		case 83:
			StringCopy(sParam1, "SWITCH@MICHAEL@WAKES_UP_SCARED", 64);
			StringCopy(sParam2, "001672_02_MICS2_1_WAKES_UP_SCARED_IDLE", 64);
			StringCopy(sParam3, "001672_02_MICS2_1_WAKES_UP_SCARED_EXIT", 64);
			return 1;
		case 85:
			StringCopy(sParam1, "SWITCH@MICHAEL@WATCHING_TV", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
		case 291:
			StringCopy(sParam1, "SWITCH@TREVOR@WATCHING_TV", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			return 1;
		case 128:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING", 64);
			StringCopy(sParam2, "IDLE", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			return 1;
		case 86:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			StringCopy(sParam2, "BASE_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
		case 87:
		case 88:
		case 184:
		case 185:
			StringCopy(sParam1, "SWITCH@MICHAEL@SUNLOUNGER", 64);
			StringCopy(sParam2, "SunLounger_Idle", 64);
			StringCopy(sParam3, "SunLounger_GetUp", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return 1;
		case 89:
		case 90:
			StringCopy(sParam1, "SWITCH@MICHAEL@SLEEP_IN_CAR", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "SLEEP_IN_CAR_MICHAEL", 64);
			return 1;
		case 127:
			StringCopy(sParam1, "SWITCH@MICHAEL@SLEEP_IN_CAR", 64);
			StringCopy(sParam2, "BASE_PREMIER_MICHAEL", 64);
			StringCopy(sParam3, "SLEEP_IN_CAR_PREMIER_MICHAEL", 64);
			return 1;
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
		case 126:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING2", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return 1;
		case 94:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
		case 95:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXIT_RESTAURANT", 64);
			StringCopy(sParam2, "mic_exit_restaurant_loop", 64);
			StringCopy(sParam3, "mic_exit_restaurant_exit", 64);
			return 1;
		case 134:
			StringCopy(sParam1, "SWITCH@MICHAEL@DRUNK_BAR", 64);
			StringCopy(sParam2, "Drunk_Idle_PED", 64);
			StringCopy(sParam3, "Drunk_Exit_PED", 64);
			return 1;
		case 108:
		case 109:
			StringCopy(sParam1, "SWITCH@MICHAEL@PARKBENCH_SMOKE_RANGER", 64);
			StringCopy(sParam2, "parkbench_smoke_ranger_loop", 64);
			StringCopy(sParam3, "parkbench_smoke_ranger_exit", 64);
			return 1;
		case 112:
		case 113:
		case 123:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING_ON_CAR_BONNET", 64);
			StringCopy(sParam2, "sitting_on_car_bonnet_loop", 64);
			StringCopy(sParam3, "sitting_on_car_bonnet_exit", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return 1;
		case 41:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING_ON_CAR_PREMIERE", 64);
			StringCopy(sParam2, "SITTING_ON_CAR_PREMIERE_LOOP_PLAYER", 64);
			StringCopy(sParam3, "SITTING_ON_CAR_PREMIERE_EXIT_PLAYER", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return 1;
		case 114:
			StringCopy(sParam1, "SWITCH@MICHAEL@PHARMACY", 64);
			StringCopy(sParam2, "mics1_ig_11_loop", 64);
			StringCopy(sParam3, "mics1_ig_11_exit", 64);
			return 1;
		case 105:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_Aggitated", 64);
			*uParam5 |= 32;
			return 1;
		case 106:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_HitWheel", 64);
			*uParam5 |= 32;
			return 1;
		case 107:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_HitHorn", 64);
			*uParam5 |= 32;
			return 1;
		case 98:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMANDA_EXITS_CAR", 64);
			StringCopy(sParam2, "000606_02_MICS1_5_AMANDA_EXITS_CAR_IDLE_MIC", 64);
			StringCopy(sParam3, "000606_02_MICS1_5_AMANDA_EXITS_CAR_EXIT_MIC", 64);
			return 1;
		case 170:
			StringCopy(sParam1, "SWITCH@MICHAEL@OPENS_DOOR_FOR_AMA", 64);
			StringCopy(sParam2, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_IDLE_MIC", 64);
			StringCopy(sParam3, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_EXIT_MIC", 64);
			return 1;
		case 171:
			StringCopy(sParam1, "SWITCH@MICHAEL@DROPPING_OFF_JMY", 64);
			StringCopy(sParam2, "001839_02_MICS3_20_DROPPING_OFF_JMY_IDLE_MIC", 64);
			StringCopy(sParam3, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_MIC", 64);
			return 1;
		case 172:
			StringCopy(sParam1, "SWITCH@MICHAEL@TRACY_EXITS_CAR", 64);
			StringCopy(sParam2, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_IDLE_MIC", 64);
			StringCopy(sParam3, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_MIC", 64);
			return 1;
		case 103:
			StringCopy(sParam1, "SWITCH@MICHAEL@PIER", 64);
			StringCopy(sParam2, "pier_lean_smoke_idle", 64);
			StringCopy(sParam3, "pier_lean_smoke_outro", 64);
			*uParam5 |= 68;
			return 1;
		case 121:
			StringCopy(sParam1, "SWITCH@MICHAEL@MARINA", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 1;
		case 122:
			StringCopy(sParam1, "SWITCH@MICHAEL@ARGUE_WITH_AMANDA", 64);
			StringCopy(sParam2, "argue_with_amanda_loop_michael", 64);
			StringCopy(sParam3, "argue_with_amanda_exit_michael", 64);
			return 1;
		case 125:
			StringCopy(sParam1, "SWITCH@MICHAEL@WALK_AND_TALK", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "Im_A_Married_Man_Michael", 64);
			return 1;
		case 115:
		case 116:
		case 117:
		case 97:
		case 162:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "Cafe_Idle_PED", 64);
			StringCopy(sParam3, "Cafe_Exit_PED", 64);
			return 1;
		case 110:
		case 111:
		case 131:
		case 132:
			StringCopy(sParam1, "SWITCH@MICHAEL@BENCH", 64);
			StringCopy(sParam2, "bench_on_phone_idle", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1026;
			return 1;
		case 129:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_CLUBCHAIR", 64);
			StringCopy(sParam2, "Switch_ON_CLUBCHAIR_BASE", 64);
			StringCopy(sParam3, "Switch_ON_CLUBCHAIR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
		case 130:
			StringCopy(sParam1, "SAFE@MICHAEL@IG_5", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_1_MICHAEL", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
		case 150:
			StringCopy(sParam1, "SWITCH@MICHAEL@RONEX_IG_5_P2", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "RONEX_IG5_P2_MICHAEL", 64);
			return 1;
		case 151:
			StringCopy(sParam1, "SWITCH@MICHAEL@RESTAURANT", 64);
			StringCopy(sParam2, "001510_02_GC_MICS3_IG_1_BASE_MICHAEL", 64);
			StringCopy(sParam3, "001510_02_GC_MICS3_IG_1_EXIT_MICHAEL", 64);
			return 1;
		case 152:
			StringCopy(sParam1, "SWITCH@MICHAEL@LOUNGE_CHAIRS", 64);
			StringCopy(sParam2, "001523_01_MICS3_9_LOUNGE_CHAIRS_IDLE_MIC", 64);
			StringCopy(sParam3, "001523_01_MICS3_9_LOUNGE_CHAIRS_EXIT_MIC", 64);
			return 1;
		case 153:
			StringCopy(sParam1, "SWITCH@MICHAEL@GOODBYE_TO_SOLOMAN", 64);
			StringCopy(sParam2, "001400_01_MICS3_5_BYE_TO_SOLOMAN_IDLE", 64);
			StringCopy(sParam3, "001400_01_MICS3_5_BYE_TO_SOLOMAN_EXIT", 64);
			return 1;
		case 154:
			StringCopy(sParam1, "SWITCH@MICHAEL@GOODBYE_TO_SOLOMAN", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
		case 155:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMA_TENNIS", 64);
			StringCopy(sParam2, "001833_01_MICS3_18_AMA_TENNIS_IDLE_MIC", 64);
			StringCopy(sParam3, "001833_01_MICS3_18_AMA_TENNIS_EXIT_MIC", 64);
			return 1;
		case 156:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			StringCopy(sParam2, "AROUND_THE_TABLE_SELFISH_BASE_Michael", 64);
			StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_Michael", 64);
			return 1;
		case 157:
			StringCopy(sParam1, "SWITCH@MICHAEL@REJECTED_ENTRY", 64);
			StringCopy(sParam2, "001396_01_MICS3_6_REJECTED_ENTRY_IDLE_MIC", 64);
			StringCopy(sParam3, "001396_01_MICS3_6_REJECTED_ENTRY_EXIT_MIC", 64);
			return 1;
		case 159:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXITS_BARBER", 64);
			StringCopy(sParam2, "001406_01_MICS3_7_EXITS_BARBER_IDLE", 64);
			StringCopy(sParam3, "001406_01_MICS3_7_EXITS_BARBER_EXIT", 64);
			return 1;
		case 160:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXITS_FANCYSHOP", 64);
			StringCopy(sParam2, "001405_01_MICS3_8_EXITS_FANCYSHOP_IDLE", 64);
			StringCopy(sParam3, "001405_01_MICS3_8_EXITS_FANCYSHOP_EXIT", 64);
			return 1;
		case 161:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
		case 163:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_GETS_READY_IDLE_MIC", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_EXIT_MIC", 64);
			return 1;
		case 164:
			StringCopy(sParam1, "SWITCH@MICHAEL@READS_SCRIPT", 64);
			StringCopy(sParam2, "001404_01_MICS3_16_READS_SCRIPT_IDLE", 64);
			StringCopy(sParam3, "001404_01_MICS3_16_READS_SCRIPT_EXIT", 64);
			return 1;
		case 165:
			StringCopy(sParam1, "SWITCH@MICHAEL@BAR_EMPLOYEE_CONVO", 64);
			StringCopy(sParam2, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_IDLE_MIC", 64);
			StringCopy(sParam3, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_EXIT_MIC", 64);
			return 1;
		case 158:
			StringCopy(sParam1, "SWITCH@MICHAEL@PROSTITUTE", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_MICHAEL", 64);
			return 1;
		case 166:
			StringCopy(sParam1, "SWITCH@MICHAEL@TALKS_TO_GUARD", 64);
			StringCopy(sParam2, "001393_02_MICS3_3_TALKS_TO_GUARD_IDLE_MIC", 64);
			StringCopy(sParam3, "001393_02_MICS3_3_TALKS_TO_GUARD_EXIT_MIC", 64);
			return 1;
		case 167:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SET_W_JMY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "001513_03_GC_MICS3_IG_4_ON_SET_W_JMY_EXIT_MIC", 64);
			return 1;
		case 168:
			StringCopy(sParam1, "SWITCH@MICHAEL@TV_W_KIDS", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_TV_W_KIDS_IDLE_MIC", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_TV_W_KIDS_EXIT_MIC", 64);
			return 1;
		case 173:
			StringCopy(sParam1, "SWITCH@MICHAEL@BIKING_WITH_JIMMY", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
		case 169:
			StringCopy(sParam1, "SWITCH@MICHAEL@GAMING_W_JMY", 64);
			StringCopy(sParam2, "001518_02_MICS3_11_GAMING_W_JMY_IDLE_MIC", 64);
			StringCopy(sParam3, "001518_02_MICS3_11_GAMING_W_JMY_EXIT_MIC", 64);
			return 1;
	}
	switch (iParam0)
	{
		case 186:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CLEANING_APT", 64);
			StringCopy(sParam2, "001918_01_FRAS_V2_1_CLEANING_APT_IDLE", 64);
			StringCopy(sParam3, "001918_01_FRAS_V2_1_CLEANING_APT_EXIT", 64);
			return 1;
		case 187:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ON_CELL", 64);
			StringCopy(sParam2, "001914_01_FRAS_V2_2_ON_CELL_IDLE", 64);
			StringCopy(sParam3, "001914_01_FRAS_V2_2_ON_CELL_EXIT", 64);
			return 1;
		case 188:
			StringCopy(sParam1, "SWITCH@FRANKLIN@SNACKING", 64);
			StringCopy(sParam2, "001922_01_FRAS_V2_3_SNACKING_IDLE", 64);
			StringCopy(sParam3, "001922_01_FRAS_V2_3_SNACKING_EXIT", 64);
			return 1;
		case 189:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ON_LAPTOP", 64);
			StringCopy(sParam2, "001927_01_FRAS_V2_4_ON_LAPTOP_IDLE", 64);
			StringCopy(sParam3, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT", 64);
			return 1;
		case 190:
			StringCopy(sParam1, "SWITCH@FRANKLIN@IRONING", 64);
			StringCopy(sParam2, "001947_01_GC_FRAS_V2_IG_6_BASE", 64);
			StringCopy(sParam3, "001947_01_GC_FRAS_V2_IG_6_EXIT", 64);
			return 1;
		case 191:
			StringCopy(sParam1, "SWITCH@FRANKLIN@WATCHING_TV", 64);
			StringCopy(sParam2, "001915_01_FRAS_V2_8_WATCHING_TV_IDLE", 64);
			StringCopy(sParam3, "001915_01_FRAS_V2_8_WATCHING_TV_EXIT", 64);
			return 1;
		case 175:
		case 176:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BED", 64);
			StringCopy(sParam2, "Sleep_LOOP", 64);
			StringCopy(sParam3, "Sleep_GetUp_RubEyes", 64);
			return 1;
		case 177:
			StringCopy(sParam1, "SWITCH@FRANKLIN@NAPPING", 64);
			StringCopy(sParam2, "002333_01_FRAS_V2_10_NAPPING_IDLE", 64);
			StringCopy(sParam3, "002333_01_FRAS_V2_10_NAPPING_EXIT", 64);
			return 1;
		case 178:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GETTING_READY", 64);
			StringCopy(sParam2, "002334_02_FRAS_V2_11_GETTING_DRESSED_IDLE", 64);
			StringCopy(sParam3, "002334_02_FRAS_V2_11_GETTING_DRESSED_EXIT", 64);
			return 1;
		case 179:
		case 180:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BED", 64);
			StringCopy(sParam2, "Bed_Reading_LOOP", 64);
			StringCopy(sParam3, "Bed_Reading_GetUp", 64);
			return 1;
		case 181:
		case 182:
		case 183:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PRESS_UPS", 64);
			StringCopy(sParam2, "PressUps_LOOP", 64);
			StringCopy(sParam3, "PressUps_OUT", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
		case 192:
			StringCopy(sParam1, "SWITCH@FRANKLIN@002110_04_MAGD_3_WEED_EXCHANGE", 64);
			StringCopy(sParam2, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			StringCopy(sParam3, "002110_04_MAGD_3_WEED_EXCHANGE_FRANKLIN", 64);
			return 1;
		case 193:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro_ped", 64);
			return 1;
		case 194:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro", 64);
			return 1;
		case 195:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro", 64);
			return 1;
		case 198:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GARBAGE", 64);
			StringCopy(sParam2, "Garbage_Idle_PLYR", 64);
			StringCopy(sParam3, "Garbage_Toss_PLYR", 64);
			return 1;
		case 199:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GARBAGE_B", 64);
			StringCopy(sParam2, "Garbage_Idle_PLYR", 64);
			StringCopy(sParam3, "Garbage_Toss_PLYR", 64);
			return 1;
		case 200:
			StringCopy(sParam1, "SWITCH@FRANKLIN@THROW_CUP", 64);
			StringCopy(sParam2, "throw_cup_loop", 64);
			StringCopy(sParam3, "throw_cup_exit", 64);
			return 1;
		case 201:
			StringCopy(sParam1, "SWITCH@FRANKLIN@HIT_CUP_HAND", 64);
			StringCopy(sParam2, "hit_cup_hand_loop", 64);
			StringCopy(sParam3, "hit_cup_hand_exit", 64);
			return 1;
		case 202:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GYM", 64);
			StringCopy(sParam2, "001942_02_GC_FRAS_IG_5_BASE", 64);
			StringCopy(sParam3, "001942_02_GC_FRAS_IG_5_EXIT", 64);
			return 1;
		case 203:
		case 206:
		case 207:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT", 64);
			return 1;
		case 204:
		case 205:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT", 64);
			return 1;
		case 211:
		case 213:
		case 216:
		case 217:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ADMIRE_MOTORCYCLE", 64);
			StringCopy(sParam2, "BASE_FRANKLIN", 64);
			StringCopy(sParam3, "EXIT_FRANKLIN", 64);
			return 1;
		case 212:
		case 214:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CLEANING_CAR", 64);
			StringCopy(sParam2, "001946_01_GC_FRAS_V2_IG_5_BASE", 64);
			StringCopy(sParam3, "001946_01_GC_FRAS_V2_IG_5_EXIT", 64);
			return 1;
		case 196:
			StringCopy(sParam1, "SWITCH@FRANKLIN@TANISHA_ARGUE", 64);
			StringCopy(sParam2, "BASE_Franklin", 64);
			StringCopy(sParam3, "Tanisha_Argue_Franklin", 64);
			return 1;
		case 197:
			StringCopy(sParam1, "SWITCH@FRANKLIN@WALK_AROUND_HOUSE", 64);
			StringCopy(sParam2, "IDLE_FRANKLIN", 64);
			StringCopy(sParam3, "EXIT_FRANKLIN", 64);
			return 1;
		case 215:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BYE_TAXI", 64);
			StringCopy(sParam2, "001938_01_FRAS_V2_7_BYE_TAXI_IDLE_FRA", 64);
			StringCopy(sParam3, "001938_01_FRAS_V2_7_BYE_TAXI_EXIT_FRA", 64);
			return 1;
		case 221:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PICKUP_LINE", 64);
			StringCopy(sParam2, "base_Franklin", 64);
			StringCopy(sParam3, "switch_P1_Franklin", 64);
			return 1;
		case 222:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "CheckShoe", 64);
			return 1;
		case 223:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "WipeHands", 64);
			return 1;
		case 224:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "WipeRight", 64);
			return 1;
		case 226:
		case 227:
		case 230:
			StringCopy(sParam1, "SWITCH@FRANKLIN@EXIT_BUILDING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "switch_01", 64);
			return 1;
		case 228:
		case 229:
			StringCopy(sParam1, "SWITCH@FRANKLIN@EXIT_BUILDING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "switch_02", 64);
			return 1;
		case 218:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P1", 64);
			StringCopy(sParam2, "gang_taunt_loop_franklin", 64);
			StringCopy(sParam3, "gang_taunt_exit_franklin", 64);
			return 1;
		case 219:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "gang_taunt_with_lamar_loop_frank", 64);
			StringCopy(sParam3, "gang_taunt_with_lamar_exit_frank", 64);
			return 1;
		case 220:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P5", 64);
			StringCopy(sParam2, "fras_ig_6_p5_loop_frank", 64);
			StringCopy(sParam3, "fras_ig_6_p5_exit_frank", 64);
			return 1;
		case 225:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "fras_ig_10_p3_loop_frank", 64);
			StringCopy(sParam3, "fras_ig_10_p3_exit_frank", 64);
			return 1;
		case 232:
		case 233:
			StringCopy(sParam1, "missheist_agency2aig_9", 64);
			StringCopy(sParam2, "Franklin_call_Michael_IDLE_PLAYER", 64);
			StringCopy(sParam3, "Franklin_call_Michael_EXIT_PLAYER", 64);
			return 1;
		case 235:
			StringCopy(sParam1, "SWITCH@TREVOR@MOCKS_LAPDANCE", 64);
			StringCopy(sParam2, "001443_01_TRVS_28_IDLE_TRV", 64);
			StringCopy(sParam3, "001443_01_TRVS_28_EXIT_TRV", 64);
			return 1;
		case 236:
			StringCopy(sParam1, "SWITCH@TREVOR@BAR", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
		case 237:
			StringCopy(sParam1, "SWITCH@TREVOR@CHASE_STRIPPERS", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
		case 238:
			StringCopy(sParam1, "SWITCH@TREVOR@STRIPCLUB", 64);
			StringCopy(sParam2, "trev_leave_stripclub_idle", 64);
			StringCopy(sParam3, "trev_leave_stripclub_outro", 64);
			return 1;
		case 239:
			StringCopy(sParam1, "SWITCH@TREVOR@ESCORTED_OUT", 64);
			StringCopy(sParam2, "001215_02_TRVS_12_ESCORTED_OUT_IDLE_TRV", 64);
			StringCopy(sParam3, "001215_02_TRVS_12_ESCORTED_OUT_EXIT_TRV", 64);
			return 1;
		case 273:
		case 274:
			StringCopy(sParam1, "SWITCH@TREVOR@PUKING_INTO_FOUNTAIN", 64);
			StringCopy(sParam2, "trev_fountain_puke_loop", 64);
			StringCopy(sParam3, "trev_fountain_puke_exit", 64);
			return 1;
		case 245:
		case 40:
			StringCopy(sParam1, "SWITCH@TREVOR@TREV_SMOKING_METH", 64);
			StringCopy(sParam2, "TREV_SMOKING_METH_LOOP", 64);
			StringCopy(sParam3, "TREV_SMOKING_METH_EXIT", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return 1;
		case 315:
			StringCopy(sParam1, "SWITCH@TREVOR@HEAD_IN_SINK", 64);
			StringCopy(sParam2, "trev_sink_idle", 64);
			StringCopy(sParam3, "trev_sink_exit", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return 1;
		case 250:
		case 251:
		case 252:
		case 253:
			StringCopy(sParam1, "SWITCH@TREVOR@AT_THE_DOCKS", 64);
			StringCopy(sParam2, "001209_01_TRVS_3_AT_THE_DOCKS_IDLE", 64);
			StringCopy(sParam3, "001209_01_TRVS_3_AT_THE_DOCKS_EXIT", 64);
			return 1;
		case 262:
			StringCopy(sParam1, "SWITCH@TREVOR@KO_NEIGHBOUR", 64);
			StringCopy(sParam2, "001500_03_TRVS_19_KO_NEIGHBOUR_LOOP_TRV", 64);
			StringCopy(sParam3, "001500_03_TRVS_19_KO_NEIGHBOUR_EXIT_TRV", 64);
			return 1;
		case 243:
			StringCopy(sParam1, "SWITCH@TREVOR@GARBAGE_FOOD", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
		case 244:
			StringCopy(sParam1, "SWITCH@TREVOR@THROW_FOOD", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
		case 271:
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 279:
		case 240:
		case 241:
		case 242:
			StringCopy(sParam1, "SWITCH@TREVOR@SLOUCHED_GET_UP", 64);
			StringCopy(sParam2, "TREV_SLOUCHED_GET_UP_IDLE", 64);
			StringCopy(sParam3, "TREV_SLOUCHED_GET_UP_EXIT", 64);
			return 1;
		case 280:
			StringCopy(sParam1, "SWITCH@TREVOR@NAKED_ISLAND", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 1;
		case 246:
			StringCopy(sParam1, "SWITCH@TREVOR@PUSHES_BODYBUILDER", 64);
			StringCopy(sParam2, "001426_03_TRVS_5_PUSHES_BODYBUILDER_IDLE_TRV", 64);
			StringCopy(sParam3, "001426_03_TRVS_5_PUSHES_BODYBUILDER_EXIT_TRV", 64);
			return 1;
		case 286:
			StringCopy(sParam1, "SWITCH@TREVOR@RUDE_AT_CAFE", 64);
			StringCopy(sParam2, "001218_03_TRVS_23_RUDE_AT_CAFE_IDLE_TRV", 64);
			StringCopy(sParam3, "001218_03_TRVS_23_RUDE_AT_CAFE_EXIT_TRV", 64);
			return 1;
		case 247:
			StringCopy(sParam1, "SWITCH@TREVOR@ANNOYS_SUNBATHERS", 64);
			StringCopy(sParam2, "trev_annoys_sunbathers_loop_trevor", 64);
			StringCopy(sParam3, "trev_annoys_sunbathers_exit_trevor", 64);
			return 1;
		case 263:
			StringCopy(sParam1, "SWITCH@TREVOR@SCARES_TRAMP", 64);
			StringCopy(sParam2, "TREV_SCARES_TRAMP_IDLE_TREVOR", 64);
			StringCopy(sParam3, "TREV_SCARES_TRAMP_EXIT_TREVOR", 64);
			return 1;
		case 278:
			StringCopy(sParam1, "SWITCH@TREVOR@NAKED_ON_BRIDGE", 64);
			StringCopy(sParam2, "002055_01_TRVS_17_NAKED_ON_BRIDGE_IDLE", 64);
			StringCopy(sParam3, "002055_01_TRVS_17_NAKED_ON_BRIDGE_EXIT", 64);
			return 1;
		case 264:
			StringCopy(sParam1, "SWITCH@TREVOR@DUMPSTER", 64);
			StringCopy(sParam2, "002002_01_TRVS_14_DUMPSTER_IDLE", 64);
			StringCopy(sParam3, "002002_01_TRVS_14_DUMPSTER_EXIT", 64);
			return 1;
		case 255:
			StringCopy(sParam1, "SWITCH@TREVOR@FUNERAL_HOME", 64);
			StringCopy(sParam2, "trvs_ig_11_loop", 64);
			StringCopy(sParam3, "trvs_ig_11_exit", 64);
			return 1;
		case 285:
			StringCopy(sParam1, "SWITCH@TREVOR@BRIDGE", 64);
			StringCopy(sParam2, "HOLD_LOOP_trevor", 64);
			StringCopy(sParam3, "THROW_EXIT_trevor", 64);
			return 1;
		case 259:
			StringCopy(sParam1, "SWITCH@TREVOR@YELLS_AT_DOORMAN", 64);
			StringCopy(sParam2, "001430_01_TRVS_21_YELLS_AT_DOORMAN_IDLE_TRV", 64);
			StringCopy(sParam3, "001430_01_TRVS_21_YELLS_AT_DOORMAN_EXIT_TRV", 64);
			return 1;
		case 248:
			StringCopy(sParam1, "SWITCH@TREVOR@BLOCK_CAMERA", 64);
			StringCopy(sParam2, "001220_03_GC_TRVS_IG_7_BASE_TREVOR", 64);
			StringCopy(sParam3, "001220_03_GC_TRVS_IG_7_EXIT_TREVOR", 64);
			return 1;
		case 249:
			StringCopy(sParam1, "SWITCH@TREVOR@GUITAR_BEATDOWN", 64);
			StringCopy(sParam2, "001370_02_TRVS_8_GUITAR_BEATDOWN_IDLE_TRV", 64);
			StringCopy(sParam3, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_TRV", 64);
			return 1;
		case 254:
			StringCopy(sParam1, "SWITCH@TREVOR@LINGERIE_SHOP", 64);
			StringCopy(sParam2, "trev_exit_lingerie_shop_idle", 64);
			StringCopy(sParam3, "trev_exit_lingerie_shop_outro", 64);
			return 1;
		case 287:
			StringCopy(sParam1, "SWITCH@TREVOR@RAND_TEMPLE", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "TAI_CHI_Trevor", 64);
			return 1;
		case 288:
			StringCopy(sParam1, "SWITCH@TREVOR@UNDER_PIER", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
		case 289:
			StringCopy(sParam1, "SWITCH@TREVOR@DRUNK_HOWLING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 1;
		case 290:
			StringCopy(sParam1, "SWITCH@TREVOR@DRUNK_HOWLING_SC", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 1;
		case 292:
		case 295:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_TREVOR", 64);
			StringCopy(sParam3, "Bed_GetUp_1_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
		case 293:
		case 294:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_TREVOR", 64);
			StringCopy(sParam3, "Bed_GetUp_2_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
		case 299:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Console_Wasnt_Fun_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
		case 300:
		case 301:
		case 302:
		case 303:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Console_Get_Along_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
		case 296:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_IN_FLOYDS_FACE", 64);
			StringCopy(sParam2, "bear_in_floyds_face_loop_trev", 64);
			StringCopy(sParam3, "bear_in_floyds_face_exit_trev", 64);
			return 1;
		case 297:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_FLOYDS_FACE_SMELL", 64);
			StringCopy(sParam2, "bear_floyds_face_smell_loop_trev", 64);
			StringCopy(sParam3, "bear_floyds_face_smell_exit_trev", 64);
			return 1;
		case 298:
			StringCopy(sParam1, "SWITCH@TREVOR@PINEAPPLE", 64);
			StringCopy(sParam2, "Pineapple_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Pineapple_EXIT_TREVOR", 64);
			return 1;
		case 304:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING2", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return 1;
		case 305:
			func_151(iParam0, sParam1, sParam2, sParam3);
			return 1;
		case 310:
			StringCopy(sParam1, "SWITCH@TREVOR@DIGGING", 64);
			StringCopy(sParam2, "001433_01_TRVS_26_DIGGING_IDLE", 64);
			StringCopy(sParam3, "001433_01_TRVS_26_DIGGING_EXIT", 64);
			*uParam5 |= 32768;
			return 1;
		case 311:
			StringCopy(sParam1, "SWITCH@TREVOR@FLUSHES_FOOT", 64);
			StringCopy(sParam2, "002057_03_TRVS_27_FLUSHES_FOOT_IDLE", 64);
			StringCopy(sParam3, "002057_03_TRVS_27_FLUSHES_FOOT_EXIT", 64);
			*uParam5 |= 32768;
			return 1;
		default:
			StringCopy(sParam1, "NULL", 64);
			StringCopy(sParam2, "NULL", 64);
			StringCopy(sParam3, "NULL", 64);
			return 0;
	}
	StringCopy(sParam1, "NULL", 64);
	StringCopy(sParam2, "NULL", 64);
	StringCopy(sParam3, "NULL", 64);
	return 0;
}

void func_151(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	StringCopy(sParam1, "AMB@WORLD_HUMAN_SMOKING@MALE@MALE_A@IDLE_A", 64);
	StringCopy(sParam2, "IDLE_A", 64);
	StringCopy(sParam3, "IDLE_A", 64);
}

int func_152(int iParam0, var uParam1, var uParam2, char* sParam3)
{
	int iVar0;

	if (func_154(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				func_153(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = { Global_93947[iVar0 /*9*/].f_3 };
					*uParam2 = Global_93947[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_93947[0 /*9*/].f_3 };
					*uParam2 = Global_93947[0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				break;
			case 2:
				*uParam1 = { Global_96855[0 /*109*/].f_4 };
				*uParam2 = Global_96855[0 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
			case 3:
				*uParam1 = { Global_96855[1 /*109*/].f_4 };
				*uParam2 = Global_96855[1 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
			case 4:
				*uParam1 = { Global_96855[2 /*109*/].f_4 };
				*uParam2 = Global_96855[2 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
			case 5:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[0 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_111638.f_2358.f_539.f_2310[0];
				StringCopy(sParam3, "", 32);
				return 1;
			case 6:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[1 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_111638.f_2358.f_539.f_2310[1];
				StringCopy(sParam3, "", 32);
				return 1;
			case 7:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[2 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_111638.f_2358.f_539.f_2310[2];
				StringCopy(sParam3, "", 32);
				return 1;
		}
		*uParam1 = { Global_97183[iParam0 /*3*/] };
		return 1;
	}
	return 0;
}

bool func_153(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	vector3 vVar6;
	float fVar9;

	iVar0 = Global_111638.f_2358.f_539.f_4323;
	vVar1 = { Global_111638.f_2358.f_539.f_2300[iVar0 /*3*/] };
	if (func_132(vVar1, 0f, 0f, 0f, 0))
	{
		vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false) };
	}
	*uParam0 = 5;
	fVar4 = 9999999f;
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224.f_11[iVar5], false))
		{
			vVar6 = { Global_93947[iVar5 /*9*/].f_3 };
			fVar9 = SYSTEM::VDIST(vVar1, vVar6);
			if (fVar9 > 150f)
			{
				if (fVar9 < fVar4)
				{
					*uParam0 = iVar5;
					fVar4 = fVar9;
				}
			}
		}
		iVar5++;
	}
	return *uParam0 != 5;
}

bool func_154(int iParam0, var uParam1, char* sParam2)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;

	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			func_153(&iVar3);
			if (iVar3 < 5)
			{
				*uParam1 = Global_93947[iVar3 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return true;
			}
			else
			{
				*uParam1 = Global_93947[0 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 2:
			*uParam1 = Global_96855[0 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return true;
		case 3:
			*uParam1 = Global_96855[1 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return true;
		case 4:
			*uParam1 = Global_96855[2 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return true;
		case 5:
			*uParam1 = Global_111638.f_2358.f_539.f_2310[0];
			StringCopy(sParam2, func_158(Global_111638.f_2358.f_539.f_2314[0]), 32);
			return true;
		case 6:
			*uParam1 = Global_111638.f_2358.f_539.f_2310[1];
			StringCopy(sParam2, func_158(Global_111638.f_2358.f_539.f_2314[1]), 32);
			return true;
		case 7:
			*uParam1 = Global_111638.f_2358.f_539.f_2310[2];
			StringCopy(sParam2, func_158(Global_111638.f_2358.f_539.f_2314[2]), 32);
			return true;
		case 11:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return true;
			}
			break;
		case 8:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 9:
			return func_154(8, uParam1, sParam2);
		case 10:
			return func_154(8, uParam1, sParam2);
		case 13:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 14:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 15:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 12:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 16:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 17:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 18:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 19:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 20:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 21:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 22:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 74:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 23:
			return func_154(208, uParam1, sParam2);
		case 24:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 67:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 25:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 26:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 27:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 28:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 29:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 30:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 31:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 32:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 33:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 34:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 35:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 36:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 37:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 58:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 59:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 60:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 38:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 39:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 40:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return true;
			}
			break;
		case 41:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 42:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 43:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 44:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 45:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 46:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 47:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 49:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 48:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 124:
			vVar0 = { -803.734f, 168.148f, 76.3542f };
			*uParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 50:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 51:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 52:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 66:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 53:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 54:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 55:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 56:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 57:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 61:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 62:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 63:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 68:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 69:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 64:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 65:
			if (func_157(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 70:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 71:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 72:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 73:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 234:
			*uParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 316:
			*uParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 315:
			*uParam1 = (41.654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 75:
			*uParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return true;
		case 76:
			*uParam1 = (181.8927f - 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 77:
			*uParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 78:
			*uParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 79:
			*uParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 80:
			*uParam1 = (-48.53f + 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 81:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return true;
		case 82:
			*uParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 83:
			*uParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 84:
			*uParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 85:
			*uParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 86:
			*uParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 87:
			*uParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return true;
		case 88:
			*uParam1 = 21f;
			*uParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return true;
		case 89:
			*uParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return true;
		case 90:
			*uParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return true;
		case 91:
			*uParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return true;
		case 92:
			*uParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return true;
		case 93:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return true;
		case 94:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return true;
		case 95:
			*uParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return true;
		case 96:
			*uParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return true;
		case 97:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return true;
		case 98:
			*uParam1 = (-150.6148f + 0.0095f);
			*uParam1 = (*uParam1 + 0.0004f);
			*uParam1 = (*uParam1 + 0.0015f);
			*uParam1 = (*uParam1 + 0.0002f);
			*uParam1 = (*uParam1 + -0.0009f);
			StringCopy(sParam2, "", 32);
			return true;
		case 99:
			*uParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return true;
		case 100:
			*uParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return true;
		case 101:
			*uParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return true;
		case 102:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return true;
		case 103:
			*uParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return true;
		case 104:
			*uParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return true;
		case 105:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return true;
		case 106:
			*uParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return true;
		case 107:
			*uParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return true;
		case 108:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return true;
		case 109:
			*uParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return true;
		case 110:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return true;
		case 111:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return true;
		case 112:
			*uParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return true;
		case 113:
			*uParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return true;
		case 135:
			*uParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return true;
		case 136:
			*uParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return true;
		case 137:
			*uParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return true;
		case 138:
			*uParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return true;
		case 139:
			*uParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return true;
		case 140:
			*uParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return true;
		case 141:
			*uParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return true;
		case 142:
			*uParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return true;
		case 143:
			*uParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return true;
		case 144:
			*uParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return true;
		case 145:
			*uParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return true;
		case 146:
			*uParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return true;
		case 147:
			*uParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return true;
		case 148:
			*uParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return true;
		case 149:
			*uParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return true;
		case 150:
			*uParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 114:
			*uParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return true;
		case 115:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return true;
		case 116:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return true;
		case 117:
			*uParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return true;
		case 118:
			*uParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return true;
		case 119:
			*uParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return true;
		case 120:
			*uParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return true;
		case 121:
			*uParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return true;
		case 122:
			*uParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 123:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return true;
		case 125:
			*uParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return true;
		case 126:
			*uParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return true;
		case 127:
			*uParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return true;
		case 128:
			*uParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 129:
			*uParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return true;
		case 130:
			*uParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 131:
			*uParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return true;
		case 132:
			*uParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 133:
			*uParam1 = (226.5579f - 270f);
			StringCopy(sParam2, "", 32);
			return true;
		case 134:
			*uParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return true;
		case 151:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return true;
		case 152:
			*uParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return true;
		case 153:
			*uParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return true;
		case 154:
			*uParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return true;
		case 155:
			*uParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return true;
		case 156:
			*uParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 157:
			*uParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return true;
		case 158:
			*uParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return true;
		case 159:
			*uParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return true;
		case 160:
			*uParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return true;
		case 161:
			*uParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return true;
		case 162:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return true;
		case 163:
			*uParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 164:
			*uParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return true;
		case 165:
			*uParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return true;
		case 166:
			*uParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return true;
		case 167:
			*uParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return true;
		case 168:
			if (func_155(0, 25, &uVar4, &fVar7))
			{
				*uParam1 = (fVar7 + 222.8314f);
				StringCopy(sParam2, "v_michael", 32);
				return true;
			}
			break;
		case 169:
			*uParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 170:
			*uParam1 = (-103.8158f + 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 171:
			*uParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return true;
		case 173:
			*uParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return true;
		case 172:
			*uParam1 = -30.185f;
			*uParam1 = (*uParam1 + 0.003f);
			StringCopy(sParam2, "", 32);
			return true;
		case 174:
			*uParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 176:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 177:
			*uParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 178:
			*uParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 179:
			*uParam1 = (-16.0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 180:
			*uParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 181:
			*uParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 182:
			*uParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return true;
		case 183:
			*uParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return true;
		case 184:
			*uParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return true;
		case 185:
			*uParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return true;
		case 186:
			*uParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 187:
			*uParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 188:
			*uParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 189:
			*uParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 190:
			*uParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 191:
			*uParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 196:
			*uParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 197:
			*uParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 192:
			*uParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return true;
		case 193:
			*uParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return true;
		case 194:
			*uParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return true;
		case 195:
			*uParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return true;
		case 198:
			*uParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return true;
		case 199:
			*uParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return true;
		case 200:
			*uParam1 = (310.879f - 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 201:
			*uParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return true;
		case 202:
			*uParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return true;
		case 203:
			*uParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return true;
		case 204:
			*uParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return true;
		case 205:
			*uParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return true;
		case 206:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return true;
		case 207:
			*uParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return true;
		case 208:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return true;
		case 209:
			*uParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return true;
		case 210:
			*uParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return true;
		case 211:
			*uParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return true;
		case 212:
			*uParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return true;
		case 213:
			*uParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return true;
		case 214:
			*uParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return true;
		case 215:
			*uParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return true;
		case 216:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return true;
		case 217:
			*uParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return true;
		case 221:
			*uParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return true;
		case 222:
			*uParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return true;
		case 223:
			*uParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return true;
		case 224:
			return func_154(222, uParam1, sParam2);
		case 226:
			*uParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return true;
		case 227:
			*uParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return true;
		case 228:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return true;
		case 229:
			*uParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return true;
		case 230:
			*uParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return true;
		case 218:
			*uParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return true;
		case 219:
			*uParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return true;
		case 220:
			*uParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return true;
		case 225:
			*uParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return true;
		case 231:
			*uParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return true;
		case 232:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return true;
		case 233:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return true;
		case 235:
			*uParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		case 236:
			*uParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		case 237:
			*uParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return true;
		case 238:
			*uParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return true;
		case 239:
			*uParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return true;
		case 240:
			*uParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return true;
		case 241:
			*uParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return true;
		case 242:
			*uParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return true;
		case 245:
			*uParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 243:
			*uParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return true;
		case 244:
			*uParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return true;
		case 246:
			*uParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return true;
		case 247:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return true;
		case 248:
			*uParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return true;
		case 249:
			*uParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 250:
			*uParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return true;
		case 251:
			*uParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return true;
		case 252:
			*uParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return true;
		case 253:
			*uParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return true;
		case 254:
			*uParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return true;
		case 255:
			*uParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return true;
		case 264:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return true;
		case 265:
			*uParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return true;
		case 266:
			*uParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return true;
		case 267:
			*uParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return true;
		case 268:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return true;
		case 269:
			*uParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return true;
		case 270:
			*uParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return true;
		case 271:
			*uParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return true;
		case 272:
			*uParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return true;
		case 273:
			*uParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return true;
		case 274:
			*uParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return true;
		case 275:
			*uParam1 = (277.613f - 360f);
			StringCopy(sParam2, "", 32);
			return true;
		case 276:
			*uParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return true;
		case 277:
			*uParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return true;
		case 278:
			*uParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return true;
		case 279:
			*uParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return true;
		case 280:
			*uParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return true;
		case 281:
			*uParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return true;
		case 282:
			*uParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return true;
		case 283:
			*uParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return true;
		case 284:
			*uParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return true;
		case 285:
			*uParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return true;
		case 256:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return true;
		case 257:
			*uParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return true;
		case 258:
			*uParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return true;
		case 259:
			*uParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return true;
		case 260:
			*uParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return true;
		case 261:
			*uParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return true;
		case 286:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return true;
		case 287:
			*uParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return true;
		case 288:
			*uParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return true;
		case 262:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return true;
		case 263:
			*uParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return true;
		case 289:
			*uParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return true;
		case 290:
			*uParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		case 291:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 292:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 293:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 294:
			return func_154(293, uParam1, sParam2);
		case 295:
			return func_154(292, uParam1, sParam2);
		case 299:
			*uParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 300:
			return func_154(303, uParam1, sParam2);
		case 301:
			return func_154(303, uParam1, sParam2);
		case 302:
			return func_154(303, uParam1, sParam2);
		case 303:
			*uParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 296:
			*uParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 297:
			*uParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 298:
			*uParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 304:
			*uParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return true;
		case 305:
			*uParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return true;
		case 306:
			vVar8 = { -7.4998f, 7.4995f, -0.5258f };
			*uParam1 = UNK_0xE7D606C557C86100(-vVar8.x, -vVar8.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 307:
			vVar11 = { 10.6345f, 0.7246f, 1.2508f };
			*uParam1 = UNK_0xE7D606C557C86100(-vVar11.x, -vVar11.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 308:
			vVar14 = { -3.4271f, -13.6787f, -1.4107f };
			*uParam1 = UNK_0xE7D606C557C86100(-vVar14.x, -vVar14.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 309:
			vVar17 = { -19.6582f, 7.896f, 0.1334f };
			*uParam1 = UNK_0xE7D606C557C86100(-vVar17.x, -vVar17.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 310:
			*uParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return true;
		case 311:
			*uParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 312:
			*uParam1 = ((103.2841f + 88.7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return true;
		case 313:
			*uParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 314:
			*uParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return true;
	}
	*uParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return false;
}

bool func_155(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*uParam3 = -144f;
					return true;
				case 1:
					if (func_155(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*uParam3 = (*uParam3 + (456.7661f - 360f));
						return true;
					}
					break;
				case 2:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((16f - 222.8314f) + 360f);
					return true;
			}
			return false;
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*uParam3 = 163.0716f;
					return true;
				case 1:
					if (func_155(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*uParam3 = (*uParam3 + 0f);
						return true;
					}
					break;
				case 2:
					if (func_155(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*uParam3 = (*uParam3 + 0f);
						return true;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = (((16f + 90f) - 222.8314f) + 360f);
					return true;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6.8878f, -5.5247f, 1.5228f };
					*uParam3 = 160f;
					return true;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*uParam3 = 255f;
					return true;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*uParam3 = 252f;
					return true;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*uParam3 = 273f;
					return true;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_155(0, 5, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return true;
					}
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12.552f, 4.373f, (4.6f + 1f) };
					*uParam3 = 318f;
					return true;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*uParam3 = 306f;
					return true;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*uParam3 = 0f;
					return true;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*uParam3 = 330f;
					return true;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*uParam3 = 272.857f;
					return true;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*uParam3 = 158f;
					return true;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*uParam3 = 339f;
					return true;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*uParam3 = 147f;
					return true;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*uParam3 = 159.3182f;
					return true;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*uParam3 = 333f;
					return true;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, UNK_0x79833B02DBD2A244(-0.5f, 0.5f), UNK_0x79833B02DBD2A244(-0.5f, 0.5f)) };
					*uParam3 = (306f + UNK_0x79833B02DBD2A244(10f, 10f));
					return true;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0.95f, 0.95f, 0.95f) };
					*uParam3 = UNK_0xE7D606C557C86100(*uParam2, uParam2->f_1);
					return true;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((26.087f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((13f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-28.7112f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*uParam3 = 319f;
					return true;
			}
			break;
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*uParam3 = 78f;
					return true;
			}
			break;
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*uParam3 = 304.1026f;
					return true;
			}
			break;
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*uParam3 = 180f;
					return true;
			}
			break;
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_155(1, 32, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return true;
					}
					break;
			}
			break;
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.505f, -10.9717f, 4.6019f };
					*uParam3 = 228f;
					return true;
			}
			break;
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
					*uParam3 = 310.6696f;
					return true;
			}
			break;
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*uParam3 = 102.156f;
					return true;
			}
			break;
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*uParam3 = 264f;
					return true;
					Jump @7966; //curOff = 3132
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 9.352f, -3.356f, 5.7338f };
							*uParam3 = 338f;
							return true;
					}
					Jump @7966; //curOff = 3182
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
							*uParam3 = 262.789f;
							return true;
					}
					Jump @7966; //curOff = 3232
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 10.76f, -5.95f, 4.59f };
							*uParam3 = 177.6766f;
							return true;
					}
					Jump @7966; //curOff = 3282
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
							*uParam3 = 159.156f;
							return true;
					}
					Jump @7966; //curOff = 3332
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 1.228f, 4.044f, 0.7665f };
							*uParam3 = 165f;
							return true;
					}
					Jump @7966; //curOff = 3382
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
							*uParam3 = 157.0716f;
							return true;
					}
					Jump @7966; //curOff = 3432
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 8.161f, -7.562f, 2.17f };
							*uParam3 = 78f;
							return true;
					}
					Jump @7966; //curOff = 3482
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
							*uParam3 = 144.6939f;
							return true;
					}
					Jump @7966; //curOff = 3532
					switch (iParam0)
					{
						case 1:
							*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
							*uParam3 = 257.4583f;
							return true;
					}
					Jump @7966; //curOff = 3582
					return func_155(iParam0, 26, uParam2, uParam3);
					Jump @7966; //curOff = 3600
					switch (iParam0)
					{
						case 2:
						case 3:
							*uParam2 = { 8.4451f, 3.1568f, 1.47f };
							*uParam3 = 159f;
							return true;
					}
					Jump @7966; //curOff = 3656
					switch (iParam0)
					{
						case 2:
							*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
							*uParam3 = 88.5686f;
							return true;
					}
					Jump @7966; //curOff = 3706
					switch (iParam0)
					{
						case 2:
							*uParam2 = { 0f, 0f, 0f };
							*uParam3 = 0f;
							return false;
					}
					Jump @7966; //curOff = 3740
					switch (iParam0)
					{
						case 2:
							*uParam2 = { 21.7f, 9f, 1.7029f };
							*uParam3 = 0f;
							return true;
					}
					Jump @7966; //curOff = 3786
					switch (iParam0)
					{
						case 2:
							*uParam2 = { 1.3278f, 1.534f, 0f };
							*uParam3 = 159.72f;
							return true;
					}
					Jump @7966; //curOff = 3832
					switch (iParam0)
					{
						case 2:
							*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
							*uParam3 = 338.5f;
							return true;
					}
					Jump @7966; //curOff = 3882
					switch (iParam0)
					{
						case 2:
							*uParam2 = { 15.2374f, 8.723f, 1.4495f };
							*uParam3 = 205.677f;
							return true;
					}
					Jump @7966; //curOff = 3932
					switch (iParam0)
					{
						case 2:
							*uParam2 = { 28.7f, 8.8241f, 0.6f };
							*uParam3 = 39f;
							return true;
					}
					Jump @7966; //curOff = 3982
					switch (iParam0)
					{
						case 2:
							*uParam2 = { Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) };
							*uParam3 = 94.2086f;
							return true;
					}
					Jump @7966; //curOff = 4046
					switch (iParam0)
					{
						case 2:
							*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
							*uParam3 = 336f;
							return true;
					}
					Jump @7966; //curOff = 4110
					switch (iParam0)
					{
						case 2:
						case 0:
							*uParam2 = { 5.5782f, 5.7755f, 3.84f };
							*uParam3 = 311.4f;
							return true;
					}
					Jump @7966; //curOff = 4166
					switch (iParam0)
					{
						case 2:
						case 0:
							*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
							*uParam3 = 306.6f;
							return true;
					}
					Jump @7966; //curOff = 4222
					switch (iParam0)
					{
						case 2:
						case 1:
							*uParam2 = { 5.8092f, 5.7965f, 3.85f };
							*uParam3 = 337.4f;
							return true;
					}
					Jump @7966; //curOff = 4278
					switch (iParam0)
					{
						case 2:
							*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
							*uParam3 = 277.317f;
							return true;
					}
					Jump @7966; //curOff = 4328
					if (func_155(iParam0, 59, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, UNK_0x79833B02DBD2A244(-1f, 1f), UNK_0x79833B02DBD2A244(-1f, 1f)) };
						*uParam3 = (*uParam3 + UNK_0x79833B02DBD2A244(-10f, 10f));
						return true;
					}
					Jump @7966; //curOff = 4393
					switch (iParam0)
					{
						case 2:
							*uParam2 = { -2.235f, 1.725f, 4.5877f };
							*uParam3 = 172.714f;
							return true;
					}
					Jump @7966; //curOff = 4443
					switch (iParam0)
					{
						case 2:
							*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
							*uParam3 = ((-158f - 222.8314f) + 360f);
							return true;
					}
					Jump @7966; //curOff = 4521
					switch (iParam0)
					{
						case 2:
							*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
							*uParam3 = ((-164f - 222.8314f) + 360f);
							return true;
					}
					Jump @7966; //curOff = 4599
					switch (iParam0)
					{
						case 2:
							*uParam2 = { 7.394f, 5.368f, 1.451f };
							*uParam3 = 235.0656f;
							return true;
					}
					Jump @7966; //curOff = 4649
					switch (iParam0)
					{
						case 2:
						case 1:
							*uParam2 = { 1.0704f, -1.4624f, 0.999f };
							*uParam3 = 157.44f;
							return true;
					}
					Jump @7966; //curOff = 4705
					switch (iParam0)
					{
						case 3:
							*uParam2 = { 14.8186f, 6.8253f, 0.5f };
							*uParam3 = 87.3368f;
							return true;
					}
					Jump @7966; //curOff = 4755
					switch (iParam0)
					{
						case 3:
							*uParam2 = { 13.6486f, 6.2253f, 0.45f };
							*uParam3 = 262.32f;
							return true;
					}
					Jump @7966; //curOff = 4805
					if (func_155(iParam0, 47, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return true;
					}
					Jump @7966; //curOff = 4847
					switch (iParam0)
					{
						case 3:
							*uParam2 = { 16.319f, -1.375f, 0.6817f };
							*uParam3 = 334.126f;
							return true;
					}
					Jump @7966; //curOff = 4897
					switch (iParam0)
					{
						case 3:
							*uParam2 = { -0.39f, 3.27f, 0f };
							*uParam3 = 154.126f;
							return true;
					}
					Jump @7966; //curOff = 4943
					switch (iParam0)
					{
						case 3:
							*uParam2 = { 15.0213f, 6.9622f, 1.39f };
							*uParam3 = 142.889f;
							return true;
					}
					Jump @7966; //curOff = 4993
					switch (iParam0)
					{
						case 3:
							*uParam2 = { 15.128f, 6.842f, 0.4524f };
							*uParam3 = 54f;
							return true;
					}
					Jump @7966; //curOff = 5043
					switch (iParam0)
					{
						case 4:
							*uParam2 = { -10.9019f, -23.8349f, -2.1f };
							*uParam3 = 339f;
							return true;
					}
					Jump @7966; //curOff = 5093
					switch (iParam0)
					{
						case 4:
							*uParam2 = { -10.9937f, -24.9005f, -2.18f };
							*uParam3 = 314.2132f;
							return true;
					}
					Jump @7966; //curOff = 5143
					switch (iParam0)
					{
						case 4:
							*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
							*uParam3 = 147f;
							return true;
					}
					Jump @7966; //curOff = 5193
					switch (iParam0)
					{
						case 4:
							*uParam2 = { -27.1728f, -3.75f, -1.626f };
							*uParam3 = (147f + 90f);
							return true;
					}
					Jump @7966; //curOff = 5249
					switch (iParam0)
					{
						case 4:
							*uParam2 = { 14.7722f, -10.9336f, -0.537f };
							*uParam3 = 110.8505f;
							return true;
					}
					Jump @7966; //curOff = 5299
					switch (iParam0)
					{
						case 4:
							*uParam2 = { -17.2536f, 2.451f, -0.6f };
							*uParam3 = 0f;
							return true;
					}
					Jump @7966; //curOff = 5345
					switch (iParam0)
					{
						case 4:
							*uParam2 = { 23.9716f, -20.3533f, -3.18f };
							*uParam3 = 324f;
							return true;
					}
					Jump @7966; //curOff = 5395
					switch (iParam0)
					{
						case 5:
							*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
							*uParam3 = 33f;
							return true;
					}
					Jump @7966; //curOff = 5445
					switch (iParam0)
					{
						case 5:
							*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
							*uParam3 = 69f;
							return true;
					}
					Jump @7966; //curOff = 5495
					switch (iParam0)
					{
						case 5:
							*uParam2 = { 2.983f, -4.094f, 0.4629f };
							*uParam3 = 33f;
							return true;
					}
					Jump @7966; //curOff = 5545
					switch (iParam0)
					{
						case 5:
							*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
							*uParam3 = 71f;
							return true;
					}
					Jump @7966; //curOff = 5595
					switch (iParam0)
					{
						case 6:
							*uParam2 = { Vector(30.7131f, -1454.676f, -42.2059f) - Vector(30.116f, -1435.997f, -14.3064f) };
							*uParam3 = (84.7009f - 188.5817f);
							return true;
						case 7:
							*uParam2 = { Vector(30.6803f, -1455.848f, -40.7478f) - Vector(30.116f, -1435.997f, -14.3064f) };
							*uParam3 = (90.6417f - 188.5817f);
							return true;
					}
					Jump @7966; //curOff = 5729
					switch (iParam0)
					{
						case 10:
							*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
							*uParam3 = 354f;
							return true;
					}
					Jump @7966; //curOff = 5779
					switch (iParam0)
					{
						case 10:
							*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
							*uParam3 = 61.7525f;
							return true;
					}
					Jump @7966; //curOff = 5829
					switch (iParam0)
					{
						case 10:
							*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
							*uParam3 = 119.008f;
							return true;
					}
					Jump @7966; //curOff = 5879
					switch (iParam0)
					{
						case 10:
							*uParam2 = { -3.467f, 0.074f, 0f };
							*uParam3 = 30f;
							return true;
					}
					Jump @7966; //curOff = 5925
					switch (iParam0)
					{
						case 10:
							*uParam2 = { -2.1014f, -5.4089f, -0.013f };
							*uParam3 = 123.753f;
							return true;
					}
					Jump @7966; //curOff = 5975
					switch (iParam0)
					{
						case 10:
							*uParam2 = { -2.802f, -6.3295f, -0.01f };
							*uParam3 = 42.757f;
							return true;
					}
					Jump @7966; //curOff = 6025
					switch (iParam0)
					{
						case 8:
							*uParam2 = { -2.156f, -4.9564f, 1.4886f };
							*uParam3 = 136.309f;
							return true;
					}
					Jump @7966; //curOff = 6075
					switch (iParam0)
					{
						case 8:
							*uParam2 = { 7.2656f, 3.022f, -0.9061f };
							*uParam3 = 92.8891f;
							return true;
					}
					Jump @7966; //curOff = 6125
					switch (iParam0)
					{
						case 8:
							*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
							*uParam3 = 115.77f;
							return true;
					}
					Jump @7966; //curOff = 6175
					switch (iParam0)
					{
						case 8:
							*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
							*uParam3 = 114.3391f;
							return true;
					}
					Jump @7966; //curOff = 6225
					switch (iParam0)
					{
						case 9:
						case 11:
							*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
							*uParam3 = 252.2687f;
							return true;
					}
					Jump @7966; //curOff = 6281
					switch (iParam0)
					{
						case 9:
						case 11:
							*uParam2 = { 2.334f, 1.6889f, 0.586f };
							*uParam3 = 109f;
							return true;
					}
					Jump @7966; //curOff = 6337
					switch (iParam0)
					{
						case 9:
							*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
							*uParam3 = 137.1861f;
							return true;
					}
					Jump @7966; //curOff = 6387
					switch (iParam0)
					{
						case 9:
							*uParam2 = { -3.887f, -0.166f, 0f };
							*uParam3 = 30f;
							return true;
					}
					Jump @7966; //curOff = 6433
					switch (iParam0)
					{
						case 9:
							*uParam2 = { 3.5179f, 9.1355f, -1f };
							*uParam3 = 141.79f;
							return true;
					}
					Jump @7966; //curOff = 6479
					switch (iParam0)
					{
						case 9:
							*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
							*uParam3 = 121.6591f;
							return true;
					}
					Jump @7966; //curOff = 6533
					switch (iParam0)
					{
						case 10:
							*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
							*uParam3 = (170.2796f - 180f);
							return true;
					}
					Jump @7966; //curOff = 6589
					switch (iParam0)
					{
						case 10:
							*uParam2 = { 1.077f, -5.1446f, 0.9904f };
							*uParam3 = 107.1399f;
							return true;
					}
					Jump @7966; //curOff = 6639
					switch (iParam0)
					{
						case 10:
							*uParam2 = { -12.903f, -6.623f, -0.0406f };
							*uParam3 = 63.48f;
							return true;
					}
					Jump @7966; //curOff = 6689
					switch (iParam0)
					{
						case 10:
							*uParam2 = { 10.5514f, 5.393f, -0.0998f };
							*uParam3 = 327.483f;
							return true;
					}
					Jump @7966; //curOff = 6739
					switch (iParam0)
					{
						case 11:
							*uParam2 = { 0.9794f, -0.3043f, 0f };
							*uParam3 = 179.7612f;
							return true;
					}
					Jump @7966; //curOff = 6785
					switch (iParam0)
					{
						case 11:
							*uParam2 = { 11.9759f, 1f, -1.0728f };
							*uParam3 = 238.9422f;
							return true;
					}
					Jump @7966; //curOff = 6831
					switch (iParam0)
					{
						case 11:
						case 8:
							*uParam2 = { -0.576f, 1.671f, 0.601f };
							*uParam3 = 296f;
							return true;
					}
					Jump @7966; //curOff = 6887
					switch (iParam0)
					{
						case 12:
							*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
							*uParam3 = 121.0556f;
							return true;
					}
					Jump @7966; //curOff = 6937
					switch (iParam0)
					{
						case 13:
							*uParam2 = { -0.18f, -4.173f, 0.9981f };
							*uParam3 = 216.61f;
							return true;
					}
					Jump @7966; //curOff = 6987
					switch (iParam0)
					{
						case 13:
							*uParam2 = { 6.5937f, 0.3521f, 1f };
							*uParam3 = 119.4f;
							return true;
					}
					Jump @7966; //curOff = 7033
					switch (iParam0)
					{
						case 13:
							if (Global_111638.f_18528[2] == 299)
							{
								*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
								*uParam3 = (34.661f - 90.6729f);
								return true;
							}
							else if (((Global_111638.f_18528[2] == 300 || Global_111638.f_18528[2] == 301) || Global_111638.f_18528[2] == 302) || Global_111638.f_18528[2] == 303)
							{
								*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
								*uParam3 = (32f - 90.6729f);
								return true;
							}
							if (func_156())
							{
								*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
								*uParam3 = (34.661f - 90.6729f);
								return true;
							}
							else
							{
								*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
								*uParam3 = (32f - 90.6729f);
								return true;
							}
							break;
					}
					Jump @7966; //curOff = 7370
					switch (iParam0)
					{
						case 13:
							*uParam2 = { Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.571f) };
							*uParam3 = (102f - 90.6729f);
							return true;
					}
					Jump @7966; //curOff = 7442
					switch (iParam0)
					{
						case 13:
							*uParam2 = { -2.8352f, 0.0552f, 0f };
							*uParam3 = 334.44f;
							return true;
					}
					Jump @7966; //curOff = 7488
					switch (iParam0)
					{
						case 13:
							if (func_155(iParam0, 130, uParam2, uParam3))
							{
								*uParam2 = { *uParam2 + Vector(0f, UNK_0x79833B02DBD2A244(-1f, 1f), UNK_0x79833B02DBD2A244(-1f, 1f)) };
								*uParam3 = (*uParam3 + UNK_0x79833B02DBD2A244(-10f, 10f));
								return true;
							}
							break;
					}
					Jump @7966; //curOff = 7569
					switch (iParam0)
					{
						case 13:
							*uParam2 = { -7.213f, -1.4536f, 0.9981f };
							*uParam3 = 42.6f;
							return true;
					}
					Jump @7966; //curOff = 7619
					switch (iParam0)
					{
						case 13:
							*uParam2 = { Vector((9.6327f + 1f), -1518.736f, -1148.466f) - Vector(9.6346f, -1517.601f, -1152.571f) };
							*uParam3 = UNK_0x79833B02DBD2A244(0f, 360f);
							return true;
					}
					Jump @7966; //curOff = 7692
					switch (iParam0)
					{
						case 13:
							*uParam2 = { 5.24f, 6.217f, 0.998f };
							*uParam3 = 315.72f;
							return true;
					}
					Jump @7966; //curOff = 7742
					switch (iParam0)
					{
						case 13:
							*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
							*uParam3 = 296.683f;
							return true;
					}
					Jump @7966; //curOff = 7792
					switch (iParam0)
					{
						case 13:
							*uParam2 = { 3.968f, -1.04f, 0f };
							*uParam3 = 214.92f;
							return true;
						case 14:
							*uParam2 = { 4.617f, -1.1314f, 0f };
							*uParam3 = 39.4085f;
							return true;
					}
					Jump @7966; //curOff = 7874
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					return false;
					Jump @7966; //curOff = 7892
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					return false;
					Jump @7966; //curOff = 7910
					*uParam2 = { UNK_0x79833B02DBD2A244(-10f, 10f), UNK_0x79833B02DBD2A244(-10f, 10f), 0f };
					*uParam3 = UNK_0x79833B02DBD2A244(0f, 360f);
					return false;
					*uParam2 = { UNK_0x79833B02DBD2A244(-10f, 10f), UNK_0x79833B02DBD2A244(-10f, 10f), 0f };
					*uParam3 = UNK_0x79833B02DBD2A244(0f, 360f);
					return false;
				}

bool func_156()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_157(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*uParam2 = 111f;
			return true;
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*uParam2 = 194.1887f;
			return true;
		case 9:
			return func_157(8, uParam1, uParam2);
		case 10:
			return func_157(8, uParam1, uParam2);
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*uParam2 = 201.6328f;
			return true;
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*uParam2 = 350.0509f;
			return true;
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*uParam2 = 0.7896f;
			return true;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*uParam2 = 42f;
			return true;
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*uParam2 = -129f;
			return true;
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*uParam2 = 267.1409f;
			return true;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*uParam2 = 340.0526f;
			return true;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*uParam2 = 22.9566f;
			return true;
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*uParam2 = 152.8118f;
			return true;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*uParam2 = (250.4535f - 360f);
			return true;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*uParam2 = 119.603f;
			return true;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*uParam2 = 168f;
			return true;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*uParam2 = 51.7279f;
			return true;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*uParam2 = 151.2504f;
			return true;
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*uParam2 = 156.8827f;
			return true;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*uParam2 = 7.2736f;
			return true;
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*uParam2 = 97.2736f;
			return true;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*uParam2 = 4f;
			return true;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*uParam2 = 162.693f;
			return true;
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*uParam2 = 128.9946f;
			return true;
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*uParam2 = 32.2721f;
			return true;
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*uParam2 = 192.8091f;
			return true;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return true;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return true;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*uParam2 = -3.7534f;
			return true;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*uParam2 = 90f;
			return true;
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*uParam2 = 355.326f;
			return true;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*uParam2 = 334.1068f;
			return true;
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*uParam2 = 46.8853f;
			return true;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*uParam2 = 165.9421f;
			return true;
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*uParam2 = 221.228f;
			return true;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*uParam2 = (42f + 180f);
			return true;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*uParam2 = 98.9764f;
			return true;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*uParam2 = 220.9554f;
			return true;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*uParam2 = 83.9922f;
			return true;
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*uParam2 = -64.1366f;
			return true;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*uParam2 = 127.7547f;
			return true;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*uParam2 = -63f;
			return true;
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*uParam2 = 90.0339f;
			return true;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*uParam2 = 84.6231f;
			return true;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*uParam2 = 99.6049f;
			return true;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*uParam2 = 120f;
			return true;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*uParam2 = 211.8223f;
			return true;
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*uParam2 = 136.0867f;
			return true;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*uParam2 = 27.0648f;
			return true;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*uParam2 = 27.0648f;
			return true;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
		default:
			break;
	}
	return false;
}

char* func_158(int iParam0)
{
	switch (iParam0)
	{
		case joaat("V_CHOPSHOP"):
			return "v_chopshop";
		case joaat("V_FRANKLINS"):
			return "v_franklins";
		case joaat("V_FRANKLINSHOUSE"):
			return "v_franklinshouse";
		case joaat("V_METHLAB"):
			return "v_methlab";
		case joaat("V_MICHAEL"):
			return "v_michael";
		case joaat("V_STRIP3"):
			return "v_strip3";
		case joaat("V_TRAILER"):
			return "v_trailer";
		case joaat("V_TREVORS"):
			return "v_Trevors";
	}
	return "";
}

void func_159()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_266)
	{
		if (iLocal_266[iVar0] != 0)
		{
			UNK_0x6DAD7906B73F064D(&(iLocal_262[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_266)
	{
		if (iLocal_266[iVar0] != 0)
		{
			UNK_0x71199B01895C6202(iLocal_266[iVar0]);
		}
		iVar0++;
	}
	UNK_0x51732B934211201A(bLocal_275);
	if (!UNK_0x035491B0E495A4C1(bLocal_513))
	{
		UNK_0xCD7D80FD792F9954(bLocal_513, true);
	}
	UNK_0x21387C9EECC2B220(false);
	UNK_0x10FAF14A60A0DBE1();
}

