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
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = false;
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
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 1;
	var uLocal_104 = 0;
	var uLocal_105 = 1;
	var uLocal_106 = 0;
	var uLocal_107 = 1;
	var uLocal_108 = 0;
	var uLocal_109 = 1;
	var uLocal_110 = 0;
	var uLocal_111 = 1;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 1;
	var uLocal_118 = 0;
	var uLocal_119 = 1;
	var uLocal_120 = 0;
	var uLocal_121 = 1;
	var uLocal_122 = 0;
	var uLocal_123 = 1;
	var uLocal_124 = 0;
	var uLocal_125 = 1;
	var uLocal_126 = 0;
	var uLocal_127 = 1;
	var uLocal_128 = 0;
	var uLocal_129 = 1;
	var uLocal_130 = 0;
	var uLocal_131 = 1;
	var uLocal_132 = 0;
	var uLocal_133 = 1;
	var uLocal_134 = 0;
	var uLocal_135 = 1;
	var uLocal_136 = 0;
	float fLocal_137 = 0f;
	float fLocal_138 = 0f;
	var uLocal_139 = 0;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	float fLocal_143 = 0f;
	var uLocal_144 = 0;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	float fLocal_150 = 0f;
	float fLocal_151 = 0f;
	float fLocal_152 = 0f;
	float fLocal_153 = 0f;
	float fLocal_154 = 0f;
	float fLocal_155 = 0f;
	float fLocal_156 = 0f;
	float fLocal_157 = 0f;
	var uLocal_158 = 1;
	var uLocal_159 = 0;
	var uLocal_160 = 1;
	var uLocal_161 = 0;
	var uLocal_162 = 1;
	var uLocal_163 = 0;
	var uLocal_164 = 1;
	var uLocal_165 = 0;
	var uLocal_166 = 1;
	var uLocal_167 = 0;
	var uLocal_168 = 1;
	var uLocal_169 = 0;
	var uLocal_170 = 1;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	int iLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 1;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 1;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 1;
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
	var uLocal_245 = 1;
	var uLocal_246 = 0;
	var uLocal_247 = 1;
	var uLocal_248 = 0;
	var uLocal_249 = 1;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 1;
	var uLocal_255 = 0;
	var uLocal_256 = 1;
	var uLocal_257 = 0;
	var uLocal_258 = 1;
	var uLocal_259 = 0;
	var uLocal_260 = 1;
	var uLocal_261 = 0;
	var uLocal_262 = 1;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 1;
	var uLocal_268 = 0;
	float fLocal_269 = 0f;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	var uLocal_273 = 16;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
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
	var uLocal_329 = 0;
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
	var uLocal_345 = 0;
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
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = -1;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 1000;
	var uLocal_448 = 1000;
	var uLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451[4] = { 0, 0, 0, 0 };
	int iLocal_456[4] = { 0, 0, 0, 0 };
	int iLocal_461 = 0;
	int iLocal_462[4] = { 0, 0, 0, 0 };
	int iLocal_467[4] = { 0, 0, 0, 0 };
	vector3 vLocal_472[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_485[4] = { 0f, 0f, 0f, 0f };
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	vector3 vLocal_492 = { 0f, 0f, 0f };
	float fLocal_495 = 0f;
	char cLocal_496[16] = "";
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	int iLocal_500[4] = { 0, 0, 0, 0 };
	float fLocal_505 = 0f;
	float fLocal_506 = 0f;
	char cLocal_507[16] = "";
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	char cLocal_511[16] = "";
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	char cLocal_518[16] = "";
	char cLocal_522[16] = "";
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	int iLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	int iLocal_529[4] = { 0, 0, 0, 0 };
	float fLocal_534[4] = { 0f, 0f, 0f, 0f };
	float fLocal_539 = 0f;
	int iLocal_540 = 0;
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
	iLocal_72 = 1;
	iLocal_79 = 1;
	iLocal_101 = 1;
	fLocal_137 = 120f;
	fLocal_138 = 0f;
	fLocal_140 = 1f;
	fLocal_141 = 0f;
	fLocal_142 = 1f;
	fLocal_143 = 30f;
	fLocal_145 = 1f;
	fLocal_146 = 5f;
	fLocal_147 = 1f;
	fLocal_148 = 1f;
	fLocal_149 = 100f;
	fLocal_150 = 100f;
	fLocal_151 = 0f;
	fLocal_152 = 7000f;
	fLocal_153 = 0f;
	fLocal_154 = 0f;
	fLocal_155 = 0.3f;
	fLocal_156 = 0.5f;
	fLocal_157 = 50f;
	iLocal_175 = -1;
	iLocal_183 = -1;
	iLocal_184 = -1;
	fLocal_269 = 15f;
	iLocal_270 = 786599;
	iLocal_272 = 318;
	iLocal_450 = 1;
	iLocal_461 = 4;
	StringCopy(&cLocal_496, "null", 16);
	StringCopy(&cLocal_507, "null", 16);
	StringCopy(&cLocal_511, "null", 16);
	iLocal_515 = -1;
	iLocal_516 = 5;
	StringCopy(&cLocal_518, "null", 16);
	StringCopy(&cLocal_522, "null", 16);
	fLocal_539 = -1f;
	iLocal_540 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_99();
	}
	SYSTEM::WAIT(0);
	func_90();
	func_89();
	func_85();
	while (iLocal_450 && func_81(4, 0))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_271)
		{
			case 0:
				if (func_80())
				{
					iLocal_271 = 1;
				}
				break;
			case 1:
				if (func_79())
				{
					iLocal_271 = 2;
				}
				break;
			case 2:
				if (func_2())
				{
					iLocal_271 = 3;
				}
				break;
			case 3:
				func_1();
				break;
		}
	}
	func_99();
}

void func_1()
{
	iLocal_450 = 0;
}

bool func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_69(iVar0, &iVar1);
		iVar0++;
	}
	if (iVar1 < 0)
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_451[iVar2]))
				{
					if (!PED::IS_PED_INJURED(iLocal_451[iVar2]))
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							func_68(&uLocal_438, 0, 0);
							iLocal_540 = iVar1;
						}
						return false;
					}
				}
				iVar2++;
			}
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				func_68(&uLocal_438, 0, 0);
				iLocal_540 = iVar1;
			}
			return true;
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			func_68(&uLocal_438, 0, 0);
			iLocal_540 = iVar1;
		}
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_507))
	{
		if (iLocal_540 != iVar1 || iVar1 < -1)
		{
			func_68(&uLocal_438, 0, 0);
			iLocal_540 = iVar1;
			return false;
		}
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_451[iVar1], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false));
		if (fVar3 < (150f * 150f) || CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			func_37(&uLocal_438, iLocal_451[iVar1], &cLocal_507, 0, 1, 1, 1);
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				iLocal_540 = iVar1;
			}
		}
	}
	func_3(&cLocal_511, &iLocal_526, &iVar1);
	return false;
}

int func_3(char* sParam0, int* iParam1, int iParam2)
{
	char cVar0[16];
	float fVar4;
	float fVar5;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	cVar0 = { *sParam0 };
	if (func_36())
	{
		return 0;
	}
	if (!func_35(iParam1))
	{
		func_34(iParam1);
		return 0;
	}
	if (iLocal_517 >= iLocal_516)
	{
		return 0;
	}
	fVar4 = (10f + ((SYSTEM::TO_FLOAT(iLocal_517) / SYSTEM::TO_FLOAT(iLocal_516)) * 10f));
	if (!func_31(iParam1, fVar4))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_451[*iParam2]))
	{
		*iParam2 = -1;
		return 0;
	}
	fVar5 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_451[*iParam2], false));
	if (fVar5 > (30f * 30f))
	{
		if (fVar5 > (150f * 150f))
		{
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				func_68(&uLocal_438, 0, 0);
			}
			*iParam2 = -1;
		}
		return 0;
	}
	if (iLocal_515 > 0)
	{
		StringIntConCat(&cVar0, iLocal_515, 16);
	}
	func_30(&uLocal_273, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	if (func_7(&uLocal_273, "PRSAUD", &cVar0, 3, 0, 0, 0))
	{
		if (iLocal_515 > 0)
		{
			iLocal_515++;
		}
		func_4(iParam1);
		iLocal_517++;
		return 1;
	}
	return 0;
}

void func_4(int* iParam0)
{
	func_5(iParam0, 0f);
}

void func_5(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_6(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_6(bool bParam0)
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

bool func_7(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_29(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_8(sParam2, iParam3, 0);
}

int func_8(char* sParam0, int iParam1, bool bParam2)
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
					func_28();
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
		if (func_27(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_26();
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
				func_18();
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
				if (func_17())
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
			if (func_16())
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
			func_15();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_14();
		func_9();
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
		func_28();
	}
	return 0;
}

void func_9()
{
	if (!func_10())
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

bool func_10()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (PLAYER::PLAYER_ID() == func_13())
	{
		return false;
	}
	if (func_11(PLAYER::PLAYER_ID()))
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

bool func_11(int iParam0)
{
	return func_12(iParam0, 20);
}

bool func_12(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_13()
{
	return -1;
}

void func_14()
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

void func_15()
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

bool func_16()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_17()
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

void func_18()
{
	if (func_25(14))
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
		Global_19486 = func_19();
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

var func_19()
{
	func_20();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_20()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_23(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_22(PLAYER::PLAYER_PED_ID());
			if (func_21(iVar0) && (!func_25(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_21(Global_111638.f_2358.f_539.f_4321))
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

bool func_21(int iParam0)
{
	return iParam0 < 3;
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
	if (func_21(iParam0))
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

bool func_25(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_26()
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

bool func_27(int iParam0, int iParam1)
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

void func_28()
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

void func_29(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_30(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_31(int* iParam0, float fParam1)
{
	if (func_35(iParam0))
	{
		if (func_32(iParam0) > fParam1)
		{
			return true;
		}
	}
	return false;
}

float func_32(int* iParam0)
{
	if (func_35(iParam0))
	{
		if (func_33(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_6(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

bool func_33(int* iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 2);
}

void func_34(int* iParam0)
{
	if (!func_35(iParam0))
	{
		func_4(iParam0);
	}
}

bool func_35(int* iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 1);
}

bool func_36()
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		return false;
	}
	if (STREAMING::GET_PLAYER_SWITCH_STATE() > 8)
	{
		if (STREAMING::GET_PLAYER_SWITCH_STATE() != 11)
		{
			return false;
		}
		if (STREAMING::GET_PLAYER_SWITCH_STATE() == 11)
		{
			if (STREAMING::GET_PLAYER_SWITCH_INTERP_OUT_DURATION() > 0)
			{
				if (STREAMING::_0x5B48A06DD0E792A5() > 100)
				{
					return false;
				}
			}
		}
	}
	return true;
}

void func_37(var uParam0, int iParam1, char[4] cParam2, int iParam3, char* sParam4, int iParam5, bool bParam6)
{
	func_38(uParam0, iParam1, cParam2, iParam3, sParam4, iParam5, bParam6);
}

void func_38(var uParam0, int iParam1, char[4] cParam2, int iParam3, char* sParam4, int iParam5, bool bParam6)
{
	func_39(uParam0, iParam1, 0f, 0f, 0f, cParam2, iParam3, sParam4, iParam5, bParam6);
}

void func_39(var uParam0, int iParam1, vector3 vParam2, char[4] cParam5, int iParam6, char* sParam7, int iParam8, bool bParam9)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		func_68(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_40(uParam0, iParam1, vParam2, cParam5, iParam6, sParam7, iParam8, bParam9);
}

void func_40(var uParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	char* sVar0;
	bool bVar1;

	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	sVar0 = sParam5;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_67(sVar0))
	{
		func_66();
	}
	if (func_65(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		bVar1 = false;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), true);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				bVar1 = true;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				bVar1 = true;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				bVar1 = true;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_60(uParam0, bParam7, bParam9, 0))
			{
				func_56(uParam0, iParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_45(sVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(sVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((bVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && bParam8)
						{
							if (!func_67(sVar0))
							{
								func_44(sVar0, -1);
								uParam0->f_3 = sVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", sVar0))
								{
									func_43(1);
								}
							}
						}
					}
				}
			}
			else if (func_45(sVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(sVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && bVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && bParam8)
					{
						if (!func_67(sVar0))
						{
							func_44(sVar0, -1);
							uParam0->f_3 = sVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", sVar0))
							{
								func_43(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
			{
				if (func_67(sParam5))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
					{
						func_68(uParam0, sVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
					{
						func_68(uParam0, sVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
					{
						func_68(uParam0, sVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
					{
						func_68(uParam0, sVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
					{
						func_68(uParam0, sVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_68(uParam0, sVar0, 1);
				}
			}
			if (!func_60(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_42(uParam0))
				{
					func_41(uParam0);
				}
			}
		}
	}
	else
	{
		func_68(uParam0, sVar0, 0);
	}
}

void func_41(var uParam0)
{
	if (func_65(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

bool func_42(var uParam0)
{
	int iVar0;

	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return true;
		}
	}
	return false;
}

int func_43(bool bParam0)
{
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111638.f_10044.f_100++;
			}
			return Global_111638.f_10044.f_100;
		case 4:
			if (bParam0)
			{
				Global_111638.f_10044.f_101++;
			}
			return Global_111638.f_10044.f_101;
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111638.f_10044.f_102++;
			}
			return Global_111638.f_10044.f_102;
		default:
			break;
	}
	return 3;
}

void func_44(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_45(char* sParam0)
{
	if (!func_46(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_67(sParam0)) || func_67("CMN_HINT"))
		{
			HUD::CLEAR_HELP(true);
		}
		return false;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_43(0) < 3)
			{
				return true;
			}
			break;
		case 4:
			if (func_43(0) < 1)
			{
				return true;
			}
			break;
		case 5:
		case 15:
			if (func_43(0) < 1)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_46(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	if (bParam2)
	{
		return true;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return false;
	}
	if (func_55(0))
	{
		return false;
	}
	if (func_54())
	{
		return false;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return false;
	}
	if (Global_73825)
	{
		return false;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("APPINTERNET")) > 0)
	{
		return false;
	}
	if (Global_58693)
	{
		return false;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
				{
					return false;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
				{
					return false;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
				{
					return false;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
				{
					return false;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
				{
					return false;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return false;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return false;
			}
		}
	}
	if ((func_53() || func_52(Global_4456448.f_232883)) || func_51())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = func_50(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("APC") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("AKULA") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("RIOT2") && iVar1 == 0) && func_49(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return false;
			}
		}
	}
	if (Global_1686722)
	{
		return false;
	}
	if (func_47(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

bool func_47(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (func_48(iParam0, 1, 1))
		{
			return Global_2425662[iParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == PLAYER::PLAYER_ID()) && func_48(iParam0, 1, 0))
		{
			return Global_2425662[iParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

bool func_48(int iParam0, bool bParam1, bool bParam2)
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

bool func_49(int iParam0, int iParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return true;
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return true;
					}
					break;
			}
		}
	}
	return false;
}

int func_50(int iParam0, bool bParam1)
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

bool func_51()
{
	return Global_2450632.f_17;
}

bool func_52(int iParam0)
{
	return iParam0 == 51;
}

bool func_53()
{
	return Global_2450632.f_16;
}

bool func_54()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

bool func_55(int iParam0)
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

void func_56(var uParam0, int iParam1, vector3 vParam2, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (Global_1319117 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_68(uParam0, 0, 0);
	}
	if (func_59(vParam2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_57())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (bParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, vParam2, true, -1, iVar1, iVar2, bParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_57()
{
	return func_58(PLAYER::PLAYER_ID());
}

int func_58(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

bool func_59(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_60(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (func_64(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_63(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_63(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_64(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_42(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_64(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_63(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_63(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_64(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (!func_64(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_63(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_63(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_64(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (func_62(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_61(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_61(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_62(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		case 4:
			if (!func_42(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_46(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_66();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_61(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_62(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return true;
			}
		}
	}
	return false;
}

bool func_63(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_64(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return true;
			}
		}
	}
	return false;
}

bool func_65(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false))
			{
				return true;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return true;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_66()
{
	MISC::SET_BIT(&Global_7357, 4);
}

bool func_67(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_68(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_2537071.f_4591, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(bParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_67(uParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_67(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	switch (iLocal_529[iParam0])
	{
		case 0:
			if (!func_78(iLocal_451[iParam0], iLocal_462[iParam0], &(iLocal_529[iParam0]), -1, -2))
			{
				return 0;
			}
			func_77(iParam0, iParam1);
			if (fLocal_506 >= 0f)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_462[iParam0], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_462[iParam0]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_462[iParam0], iLocal_500[iParam0], &cLocal_496, true);
					}
					else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8 && STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
						{
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_462[iParam0], (fLocal_506 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_462[iParam0])));
							iLocal_529[iParam0] = 1;
						}
					}
					else
					{
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_462[iParam0], (fLocal_506 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_462[iParam0])));
						iLocal_529[iParam0] = 1;
					}
				}
			}
			break;
		case 1:
			if (!func_78(iLocal_451[iParam0], iLocal_462[iParam0], &(iLocal_529[iParam0]), -1, -2))
			{
				return 0;
			}
			if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_451[iParam0], iLocal_462[iParam0]))
			{
				iLocal_529[iParam0] = 4;
				return 0;
			}
			func_77(iParam0, iParam1);
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_462[iParam0]))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar0))
				{
					fLocal_534[iParam0] = 1f;
				}
				else
				{
					bVar1 = false;
					if (!PED::GET_PED_TYPE(iLocal_451[iParam0]) == 6)
					{
						func_70(iLocal_462[iParam0], PLAYER::PLAYER_PED_ID(), &(fLocal_534[iParam0]), 17.5f, 7.5f, 30f, 0.7f, 1.2f, 1f, bVar1);
					}
					else
					{
						fLocal_534[iParam0] = 1f;
						fVar2 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
						fVar3 = ENTITY::GET_ENTITY_SPEED(iLocal_462[iParam0]);
						fLocal_534[iParam0] = 1f;
						if (fVar3 > fVar2)
						{
							fLocal_534[iParam0] = (fVar2 / fVar3);
						}
					}
				}
				if (fLocal_534[iParam0] <= 0.05f)
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_462[iParam0]);
					return 0;
				}
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_462[iParam0], fLocal_534[iParam0]);
				fVar4 = (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_462[iParam0]) / VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_500[iParam0], &cLocal_496));
				if (!VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_462[iParam0]))
				{
					if (!PED::GET_PED_TYPE(iLocal_451[iParam0]) == 6)
					{
						if (MISC::IS_AREA_OCCUPIED(ENTITY::GET_ENTITY_COORDS(iLocal_462[iParam0], true) - Vector(1f, 1f, 1f), ENTITY::GET_ENTITY_COORDS(iLocal_462[iParam0], true) + Vector(1f, 1f, 1f), false, true, false, false, false, false, false))
						{
							VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_462[iParam0], iLocal_270);
						}
					}
					else
					{
						PLAYER::_0xDC64D2C53493ED12(PLAYER::PLAYER_ID());
						PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
					}
				}
				if (fVar4 >= fLocal_539)
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_462[iParam0]);
					return 0;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_451[iParam0], PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_462[iParam0], PLAYER::PLAYER_PED_ID(), true))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_462[iParam0]);
					return 0;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_462[iParam0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_462[iParam0]);
					return 0;
				}
				if (PED::GET_PED_TYPE(iLocal_451[iParam0]) == 6)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_462[iParam0]);
							return 0;
						}
					}
				}
			}
			else
			{
				TASK::CLEAR_PED_TASKS(iLocal_451[iParam0]);
				if (!PED::GET_PED_TYPE(iLocal_451[iParam0]) == 6)
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_451[iParam0], iLocal_462[iParam0], fLocal_269, iLocal_270);
					PED::SET_PED_KEEP_TASK(iLocal_451[iParam0], true);
					if (iLocal_272 == 281)
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_462[iParam0], 0f);
					}
					iLocal_529[iParam0] = 2;
				}
				else
				{
					TASK::TASK_COMBAT_PED(iLocal_451[iParam0], PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_451[iParam0], 1, true);
					PED::SET_PED_KEEP_TASK(iLocal_451[iParam0], true);
					PLAYER::_0xDC64D2C53493ED12(PLAYER::PLAYER_ID());
					PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
					iLocal_529[iParam0] = 3;
				}
				return 0;
			}
			break;
		case 2:
			if (!func_78(iLocal_451[iParam0], iLocal_462[iParam0], &(iLocal_529[iParam0]), -1, -2))
			{
				return 0;
			}
			func_77(iParam0, iParam1);
			if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_451[iParam0], iLocal_462[iParam0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_451[iParam0], -258271821) != 1)
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_451[iParam0], iLocal_462[iParam0], fLocal_269, iLocal_270);
				}
				else
				{
					TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_451[iParam0], fLocal_269);
				}
			}
			else
			{
				iLocal_529[iParam0] = 4;
				return 0;
			}
			break;
		case 3:
			if (!func_78(iLocal_451[iParam0], iLocal_462[iParam0], &(iLocal_529[iParam0]), -1, -2))
			{
				return 0;
			}
			func_77(iParam0, iParam1);
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
				{
					TASK::CLEAR_PED_TASKS(iLocal_451[iParam0]);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_451[iParam0]));
					return 0;
				}
			}
			break;
		case 4:
			if (PED::IS_PED_INJURED(iLocal_451[iParam0]))
			{
				iLocal_529[iParam0] = -1;
				return 0;
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_462[iParam0], false))
			{
				iLocal_529[iParam0] = -2;
				return 0;
			}
			if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_451[iParam0], iLocal_462[iParam0]))
			{
				if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_451[iParam0]))
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_451[iParam0], iLocal_462[iParam0], 20000, -1, 2f, 1, 0);
				}
			}
			else
			{
				iLocal_529[iParam0] = 1;
				return 0;
			}
			break;
		case -1:
			break;
		case -2:
			if (!PED::IS_PED_INJURED(iLocal_451[iParam0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_451[iParam0], 1805844857) != 1)
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_451[iParam0], 29, true);
					TASK::TASK_SMART_FLEE_PED(iLocal_451[iParam0], PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
				}
			}
			else
			{
				iLocal_529[iParam0] = -1;
				return 0;
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_70(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, bool bParam9)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (!fParam4 < fParam3)
	{
		fParam4 = (fParam3 - 0.1f);
	}
	if (fParam6 > fParam8)
	{
		fParam8 = fParam6;
	}
	fVar0 = (fParam7 / fParam8);
	fVar1 = (fParam6 / fParam8);
	fVar2 = (((fParam5 - fParam3) * (1f / 0.4f)) + fParam3);
	func_71(iParam0, iParam1, uParam2, fParam8, fParam4, fParam3, fVar2, fVar0, 1f, fVar1, bParam9);
}

void func_71(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;

	if (iLocal_85 == 0)
	{
		if (*uParam2 < fParam3)
		{
			*uParam2 = fParam3;
			iLocal_85 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_148;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = func_76(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (func_74(iParam1, iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (func_73(iParam0, iParam1) < fParam5)
			{
				fVar1 = func_72(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			bLocal_86 = true;
		}
		else if (bLocal_86)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				bLocal_86 = false;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *uParam2);
	if (fVar1 > 0f)
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_155 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	else
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_156 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				iVar9 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
				if (!ENTITY::IS_ENTITY_DEAD(iVar9, false))
				{
					iVar10 = ENTITY::GET_ENTITY_MODEL(iVar9);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar10) || VEHICLE::IS_THIS_MODEL_A_BIKE(iVar10))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, false))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_146 - fLocal_147));
							fVar1 = (fVar1 + fLocal_147);
							fLocal_145 = fVar1;
							if (fLocal_145 < fLocal_147)
							{
								fLocal_145 = fLocal_147;
							}
							if (fLocal_145 > fLocal_146)
							{
								fLocal_145 = fLocal_146;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_145);
						}
					}
				}
			}
		}
	}
}

float func_72(int iParam0, int iParam1)
{
	struct<2> Var0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	int iVar13;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = ENTITY::GET_ENTITY_FORWARD_X(iParam0);
		Var0.f_1 = ENTITY::GET_ENTITY_FORWARD_Y(iParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
		{
			iVar13 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
			vVar9.x = ENTITY::GET_ENTITY_FORWARD_X(iVar13);
			vVar9.f_1 = ENTITY::GET_ENTITY_FORWARD_Y(iVar13);
		}
		else
		{
			vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 5f, 0f) };
			vVar9 = { vVar6 - vVar3 };
		}
	}
	fVar12 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0, Var0.f_1, vVar9.x, vVar9.y);
	return fVar12;
}

float func_73(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	vVar6 = { vVar3 - vVar0 };
	vVar6.f_2 = 0f;
	fVar9 = SYSTEM::VMAG(vVar6);
	return fVar9;
}

bool func_74(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;

	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
			{
				return false;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 5f, 0f) };
		vVar12 = { vVar6 - vVar3 };
	}
	vVar9 = { vVar3 - vVar0 };
	vVar9.f_2 = 0f;
	vVar12.f_2 = 0f;
	fVar15 = func_75(vVar9, vVar12);
	if (fVar15 < 0f)
	{
		return true;
	}
	return false;
}

float func_75(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

float func_76(int iParam0, int iParam1)
{
	struct<2> Var0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		Var0 = ENTITY::GET_ENTITY_FORWARD_X(iParam0);
		Var0.f_1 = ENTITY::GET_ENTITY_FORWARD_Y(iParam0);
		vVar6 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	vVar3 = { vVar9 - vVar6 };
	fVar12 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, Var0, Var0.f_1);
	fVar12 = (fVar12 + -90f);
	if (fVar12 < 0f)
	{
		fVar12 = (fVar12 * -1f);
	}
	vVar3.f_2 = 0f;
	return (SYSTEM::VMAG(vVar3) * SYSTEM::SIN(fVar12));
}

int func_77(int iParam0, int iParam1)
{
	if (*iParam1 < 0)
	{
		*iParam1 = iParam0;
		return 1;
	}
	return 0;
}

bool func_78(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		*uParam2 = iParam3;
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		if (!func_7(&uLocal_273, "PRSAUD", &cLocal_522, 3, 0, 0, 0))
		{
			return false;
		}
		else
		{
			*uParam2 = iParam3;
			func_4(&iLocal_526);
			return false;
		}
		cLocal_518 = { cLocal_518 };
		*uParam2 = iParam3;
		return false;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		TASK::CLEAR_PED_TASKS(iParam0);
		*uParam2 = iParam4;
		return false;
	}
	return true;
}

bool func_79()
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_69(iVar0, &iVar1);
		iVar0++;
	}
	if (!func_36())
	{
		return true;
	}
	return false;
}

bool func_80()
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar0))
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_462[iVar1], false) && !PED::IS_PED_INJURED(iLocal_451[iVar1]))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_496) && iLocal_500[iVar1] > 0)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_462[iVar1], iLocal_500[iVar1], &cLocal_496, true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_462[iVar1], fLocal_505);
						TASK::TASK_VEHICLE_MISSION(iLocal_451[iVar1], iLocal_462[iVar1], 0, 15, 20f, iLocal_270, 0.5f, 2f, true);
						if (PED::GET_PED_TYPE(iLocal_451[iVar1]) == 6)
						{
							VEHICLE::SET_VEHICLE_SIREN(iLocal_462[iVar1], true);
						}
					}
				}
				iVar1++;
			}
			return true;
		}
	}
	return false;
}

int func_81(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() <= 2 && STREAMING::GET_PLAYER_SWITCH_STATE() != 1)
			{
				return 1;
			}
		}
	}
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (func_25(14))
		{
			return 0;
		}
		if (MISC::GET_IS_PLAYER_IN_ANIMAL_FORM())
		{
			return 0;
		}
		if (!func_83(iParam0, func_84()))
		{
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
			fVar3 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vVar0);
			if (fVar3 > 250f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam1))
					{
						return 0;
					}
				}
				else if (!CAM::IS_SPHERE_VISIBLE(vVar0, 1.5f))
				{
					return 0;
				}
			}
		}
		else if (iParam1 == func_82(Global_98465) && iParam1 != 0)
		{
			Global_98465 = 0;
		}
	}
	return 1;
}

int func_82(var uParam0)
{
	return uParam0;
}

bool func_83(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_84()
{
	func_20();
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

void func_85()
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_88();
		}
		return;
	}
	if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		func_88();
		return;
	}
	func_86();
	if (Global_98467 > 0)
	{
		return;
	}
	STREAMING::_0x74DE2E8739086740();
}

void func_86()
{
	func_87((Global_98467 - 1));
}

void func_87(int iParam0)
{
	Global_98467 = iParam0;
}

void func_88()
{
	func_87(0);
}

void func_89()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 400)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iLocal_456[iVar0] != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_456[iVar0]);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_456[iVar0]))
				{
					STREAMING::REQUEST_MODEL(iLocal_456[iVar0]);
					bVar2 = false;
				}
			}
			if (iLocal_467[iVar0] != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_467[iVar0]);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_467[iVar0]))
				{
					STREAMING::REQUEST_MODEL(iLocal_467[iVar0]);
					bVar2 = false;
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_496) && iLocal_500[iVar0] > 0)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_500[iVar0], &cLocal_496);
				if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_500[iVar0], &cLocal_496))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_500[iVar0], &cLocal_496);
					bVar2 = false;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iVar1++;
		}
		SYSTEM::WAIT(0);
	}
	PED::ADD_RELATIONSHIP_GROUP("chasecar", &iLocal_491);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_491, joaat("PLAYER"));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iLocal_467[iVar0] != 0)
		{
			MISC::CLEAR_AREA(vLocal_492 + vLocal_472[iVar0 /*3*/], 20f, true, false, false, false);
			iLocal_462[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_467[iVar0], vLocal_492 + vLocal_472[iVar0 /*3*/], (fLocal_495 + fLocal_485[iVar0]), true, true, false);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_462[iVar0], iLocal_490);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_467[iVar0]);
			ENTITY::_SET_ENTITY_SOMETHING(iLocal_462[iVar0], true);
		}
		if (iLocal_456[iVar0] != 0)
		{
			iLocal_451[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_462[iVar0], iLocal_461, iLocal_456[iVar0], -1, true, true);
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_451[iVar0], 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_456[iVar0]);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_451[iVar0], iLocal_491);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_451[iVar0], true);
			if (iLocal_456[iVar0] == joaat("A_M_Y_ROADCYC_01"))
			{
				PED::SET_PED_HELMET(iLocal_451[iVar0], true);
			}
			if (iLocal_461 != 6)
			{
				PED::SET_PED_COMBAT_MOVEMENT(iLocal_451[iVar0], 3);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_451[iVar0], 17, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_451[iVar0], 1, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_451[iVar0], 2, true);
			}
		}
		iVar0++;
	}
}

void func_90()
{
	char[] cVar0[8];
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	float fVar12;

	iLocal_272 = Global_98147;
	func_92(iLocal_272, &vLocal_492, &fLocal_495, &cVar0);
	func_91(iLocal_272, &cLocal_496, &uVar8, &fLocal_505, &fLocal_506, &uVar9, &uVar10, &uVar11);
	switch (iLocal_272)
	{
		case 281:
			vLocal_472[0 /*3*/] = { 5.5437f, 30.4559f, 0f };
			fLocal_485[0] = -4.6273f;
			iLocal_490 = 7;
			iLocal_456[0] = joaat("A_M_Y_GENSTREET_01");
			iLocal_456[1] = 0;
			iLocal_456[2] = 0;
			iLocal_456[3] = 0;
			iLocal_461 = 4;
			iLocal_467[0] = joaat("PENUMBRA");
			iLocal_467[1] = 0;
			iLocal_467[2] = 0;
			iLocal_467[3] = 0;
			iLocal_270 = 794660;
			iLocal_500[0] = 2;
			iLocal_500[1] = -1;
			iLocal_500[2] = -1;
			iLocal_500[3] = -1;
			StringCopy(&cLocal_507, "CMN_HINT", 16);
			StringCopy(&cLocal_511, "PST_CHSCRaR", 16);
			StringCopy(&cLocal_518, "PST_CHSCRaG", 16);
			StringCopy(&cLocal_522, "PST_CHSCRaK", 16);
			iLocal_516 = 4;
			iLocal_515 = 1;
			fLocal_539 = 1f;
			break;
		case 282:
			vLocal_472[0 /*3*/] = { -21.211f, 7.393f, 0f };
			fLocal_485[0] = 0.7266f;
			iLocal_490 = 0;
			iLocal_456[0] = joaat("A_M_Y_GENSTREET_01");
			iLocal_456[1] = 0;
			iLocal_456[2] = 0;
			iLocal_456[2] = 0;
			iLocal_461 = 4;
			iLocal_467[0] = joaat("PENUMBRA");
			iLocal_467[1] = 0;
			iLocal_467[2] = 0;
			iLocal_467[2] = 0;
			iLocal_270 = 786468;
			iLocal_500[0] = 2;
			iLocal_500[1] = -1;
			iLocal_500[2] = -1;
			iLocal_500[3] = -1;
			StringCopy(&cLocal_507, "CMN_HINT", 16);
			StringCopy(&cLocal_511, "PST_CHSCRbR", 16);
			StringCopy(&cLocal_518, "PST_CHSCRbG", 16);
			StringCopy(&cLocal_522, "PST_CHSCRbK", 16);
			iLocal_516 = 3;
			iLocal_515 = 1;
			fLocal_539 = 1f;
			break;
		case 283:
			vLocal_472[0 /*3*/] = { -7.9514f, -28.1131f, 1.094f };
			vLocal_472[1 /*3*/] = { -10.876f, -26.4702f, 1.1106f };
			vLocal_472[2 /*3*/] = { -13.8006f, -24.8273f, 1.1272f };
			fLocal_485[0] = 10.9603f;
			fLocal_485[1] = -0.8648f;
			fLocal_485[2] = -12.6899f;
			iLocal_490 = 0;
			iLocal_456[0] = joaat("A_M_Y_ROADCYC_01");
			iLocal_456[1] = joaat("A_M_Y_ROADCYC_01");
			iLocal_456[2] = joaat("A_M_Y_ROADCYC_01");
			iLocal_456[3] = 0;
			iLocal_461 = 4;
			iLocal_467[0] = joaat("TRIBIKE");
			iLocal_467[1] = joaat("TRIBIKE");
			iLocal_467[2] = joaat("TRIBIKE");
			iLocal_467[3] = 0;
			iLocal_500[0] = 2;
			iLocal_500[1] = 3;
			iLocal_500[2] = 4;
			iLocal_500[3] = -1;
			StringCopy(&cLocal_507, "CMN_HINT", 16);
			StringCopy(&cLocal_511, "PST_CHSCRcR", 16);
			StringCopy(&cLocal_518, "", 16);
			StringCopy(&cLocal_522, "PST_CHSCRcK", 16);
			iLocal_516 = 3;
			iLocal_515 = 1;
			fLocal_539 = 1f;
			break;
		case 284:
			vLocal_472[0 /*3*/] = { 12.7813f, 6.7387f, 0f };
			fLocal_485[0] = -2.6961f;
			iLocal_490 = 0;
			iLocal_456[0] = joaat("A_M_Y_GENSTREET_01");
			iLocal_456[1] = 0;
			iLocal_456[2] = 0;
			iLocal_456[3] = 0;
			iLocal_461 = 4;
			iLocal_467[0] = joaat("FAGGIO2");
			iLocal_467[1] = 0;
			iLocal_467[2] = 0;
			iLocal_467[3] = 0;
			iLocal_500[0] = 2;
			iLocal_500[1] = -1;
			iLocal_500[2] = -1;
			iLocal_500[3] = -1;
			StringCopy(&cLocal_507, "CMN_HINT", 16);
			StringCopy(&cLocal_511, "PST_CHSCRdR", 16);
			StringCopy(&cLocal_518, "PST_CHSCRdG", 16);
			StringCopy(&cLocal_522, "PST_CHSCRdK", 16);
			iLocal_516 = 8;
			iLocal_515 = -1;
			fLocal_539 = 0.95f;
			fLocal_269 = 10f;
			break;
		case 275:
			vLocal_472[0 /*3*/] = { -9.151f, -1.3167f, 0.9699f };
			vLocal_472[1 /*3*/] = { -10.4908f, 3.3092f, 0f };
			vLocal_472[2 /*3*/] = { -23.4117f, -0.3117f, 0f };
			vLocal_472[3 /*3*/] = { -20.2394f, -5.2394f, 0f };
			fLocal_485[0] = -0.3188f;
			fLocal_485[1] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			fLocal_485[2] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			fLocal_485[3] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			iLocal_456[0] = joaat("S_M_Y_COP_01");
			iLocal_456[1] = joaat("S_M_Y_COP_01");
			iLocal_456[2] = joaat("S_M_Y_COP_01");
			iLocal_456[3] = joaat("S_M_Y_COP_01");
			iLocal_461 = 6;
			iLocal_467[0] = joaat("POLICE3");
			iLocal_467[1] = joaat("POLICE3");
			iLocal_467[2] = joaat("POLICE3");
			iLocal_467[3] = joaat("POLICE3");
			iLocal_500[0] = 2;
			iLocal_500[1] = 3;
			iLocal_500[2] = 4;
			iLocal_500[3] = 5;
			StringCopy(&cLocal_507, "", 16);
			StringCopy(&cLocal_511, "PST_POLaR", 16);
			StringCopy(&cLocal_518, "", 16);
			StringCopy(&cLocal_522, "", 16);
			iLocal_516 = 3;
			iLocal_515 = 1;
			fLocal_539 = 1f;
			break;
		case 276:
			vLocal_472[0 /*3*/] = { 1.5168f, -20.0085f, 0.1667f };
			vLocal_472[1 /*3*/] = { -4.9822f, -20.365f, 0.1911f };
			vLocal_472[2 /*3*/] = { -7.8196f, -18.8446f, 0f };
			vLocal_472[3 /*3*/] = { -4.3313f, -28.5564f, 0f };
			fLocal_485[0] = -3.4484f;
			fLocal_485[1] = -12.2569f;
			fLocal_485[2] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			fLocal_485[3] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			iLocal_456[0] = joaat("S_M_Y_RANGER_01");
			iLocal_456[1] = joaat("S_M_Y_RANGER_01");
			iLocal_456[2] = joaat("S_M_Y_RANGER_01");
			iLocal_456[3] = joaat("S_M_Y_RANGER_01");
			iLocal_461 = 6;
			iLocal_467[0] = joaat("SHERIFF");
			iLocal_467[1] = joaat("SHERIFF");
			iLocal_467[2] = joaat("PRANGER");
			iLocal_467[3] = joaat("PRANGER");
			iLocal_500[0] = 2;
			iLocal_500[1] = 3;
			iLocal_500[2] = 4;
			iLocal_500[3] = 5;
			StringCopy(&cLocal_507, "", 16);
			StringCopy(&cLocal_511, "PST_POLbR", 16);
			StringCopy(&cLocal_518, "", 16);
			StringCopy(&cLocal_522, "", 16);
			iLocal_516 = 5;
			iLocal_515 = 1;
			fLocal_539 = 1f;
			break;
		case 277:
			vLocal_472[0 /*3*/] = { -14.3569f, 0.1057f, 0f };
			vLocal_472[1 /*3*/] = { -14.8079f, 6.2547f, 0f };
			vLocal_472[2 /*3*/] = { -25.6028f, 6.8598f, 0f };
			vLocal_472[3 /*3*/] = { -27.9848f, 0.2778f, 0f };
			fLocal_485[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			fLocal_485[1] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			fLocal_485[2] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			fLocal_485[3] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			iLocal_456[0] = joaat("S_M_Y_RANGER_01");
			iLocal_456[1] = joaat("S_M_Y_RANGER_01");
			iLocal_456[2] = joaat("S_M_Y_RANGER_01");
			iLocal_456[3] = joaat("S_M_Y_RANGER_01");
			iLocal_461 = 6;
			iLocal_467[0] = joaat("SHERIFF");
			iLocal_467[1] = joaat("SHERIFF");
			iLocal_467[2] = joaat("PRANGER");
			iLocal_467[3] = joaat("PRANGER");
			iLocal_500[0] = 2;
			iLocal_500[1] = 3;
			iLocal_500[2] = 4;
			iLocal_500[3] = 5;
			StringCopy(&cLocal_507, "", 16);
			StringCopy(&cLocal_511, "PST_POLcR", 16);
			StringCopy(&cLocal_518, "", 16);
			StringCopy(&cLocal_522, "", 16);
			iLocal_516 = 5;
			iLocal_515 = 1;
			fLocal_539 = 1f;
			break;
		default:
			fVar12 = ((fLocal_495 + 90f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			vLocal_472[0 /*3*/] = { Vector(0f, SYSTEM::COS(fVar12), SYSTEM::SIN(fVar12)) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f)) };
			fLocal_485[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
			iLocal_490 = 0;
			iLocal_456[0] = joaat("A_M_Y_GENSTREET_01");
			iLocal_456[1] = 0;
			iLocal_456[2] = 0;
			iLocal_456[3] = 0;
			iLocal_467[0] = joaat("PENUMBRA");
			iLocal_467[1] = 0;
			iLocal_467[2] = 0;
			iLocal_467[3] = 0;
			iLocal_461 = 4;
			StringCopy(&cLocal_496, "null", 16);
			iLocal_500[0] = -1;
			iLocal_500[1] = -1;
			iLocal_500[2] = -1;
			iLocal_500[3] = -1;
			StringCopy(&cLocal_507, "null", 16);
			StringCopy(&cLocal_511, "null", 16);
			StringCopy(&cLocal_518, "null", 16);
			StringCopy(&cLocal_522, "null", 16);
			iLocal_516 = -1;
			iLocal_515 = -1;
			fLocal_539 = -1f;
			break;
	}
}

int func_91(int iParam0, char* sParam1, var uParam2, float fParam3, float fParam4, var uParam5, var uParam6, var uParam7)
{
	switch (iParam0)
	{
		case 231:
			StringCopy(sParam1, "lkexcile2_chase", 16);
			*uParam2 = 100;
			*fParam3 = 6500f;
			*fParam4 = 12700f;
			*uParam5 = (5000f + 12700f);
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 1;
		case 75:
			StringCopy(sParam1, "scene_m_fbi2_", 16);
			*uParam2 = 1;
			*fParam3 = 1000f;
			*fParam4 = 6200f;
			*uParam5 = (5000f + 6200f);
			*uParam6 = 0.4f;
			*uParam7 = 0.8f;
			return 1;
		case 76:
			StringCopy(sParam1, "scene_f_fra2_", 16);
			*uParam2 = 1;
			*fParam3 = 1000f;
			*uParam5 = 8500f;
			*fParam4 = 4750f;
			*uParam6 = 0.4f;
			*uParam7 = 0.7f;
			return 1;
		case 173:
			StringCopy(sParam1, "scene_m_biking", 16);
			*uParam2 = 1;
			*fParam3 = 1000f;
			*fParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 1;
		case 281:
			StringCopy(sParam1, "scene_t_chaseA", 16);
			*uParam2 = 1;
			*fParam3 = 1000f;
			*fParam4 = 2000f;
			*uParam5 = 7500f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 1;
		case 282:
			StringCopy(sParam1, "scene_t_chaseB", 16);
			*uParam2 = 1;
			*fParam3 = 1000f;
			*fParam4 = 1500f;
			*uParam5 = 10000f;
			*uParam6 = 0.5f;
			*uParam7 = 0.75f;
			return 1;
		case 283:
			StringCopy(sParam1, "scene_t_chaseC", 16);
			*uParam2 = 1;
			*fParam3 = 1000f;
			*fParam4 = 1500f;
			*uParam5 = 10000f;
			*uParam6 = 0.9f;
			*uParam7 = 1.1f;
			return 1;
		case 284:
			StringCopy(sParam1, "scene_t_chaseD", 16);
			*uParam2 = 1;
			*fParam3 = 1000f;
			*fParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 1;
		case 275:
			StringCopy(sParam1, "scene_t_policeA", 16);
			*uParam2 = 1;
			*fParam3 = 1000f;
			*fParam4 = 2000f;
			*uParam5 = 10000f;
			*uParam6 = 0.5f;
			*uParam7 = 0.75f;
			return 1;
		case 276:
			StringCopy(sParam1, "scene_t_policeB", 16);
			*uParam2 = 1;
			*fParam3 = 1000f;
			*fParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 1;
		case 277:
			StringCopy(sParam1, "scene_t_policeC", 16);
			*uParam2 = 1;
			*fParam3 = 1000f;
			*fParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 1;
	}
	StringCopy(sParam1, "", 16);
	*uParam2 = -1;
	*fParam3 = -1f;
	*fParam4 = -1f;
	*uParam5 = -1f;
	*uParam6 = 0f;
	*uParam7 = 0f;
	return 0;
}

int func_92(int iParam0, var uParam1, float fParam2, char* sParam3)
{
	int iVar0;

	if (func_94(iParam0, fParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				func_93(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = { Global_93947[iVar0 /*9*/].f_3 };
					*fParam2 = Global_93947[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_93947[0 /*9*/].f_3 };
					*fParam2 = Global_93947[0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				break;
			case 2:
				*uParam1 = { Global_96855[0 /*109*/].f_4 };
				*fParam2 = Global_96855[0 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
			case 3:
				*uParam1 = { Global_96855[1 /*109*/].f_4 };
				*fParam2 = Global_96855[1 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
			case 4:
				*uParam1 = { Global_96855[2 /*109*/].f_4 };
				*fParam2 = Global_96855[2 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
			case 5:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[0 /*3*/] + Vector(-1f, 0f, 0f) };
				*fParam2 = Global_111638.f_2358.f_539.f_2310[0];
				StringCopy(sParam3, "", 32);
				return 1;
			case 6:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[1 /*3*/] + Vector(-1f, 0f, 0f) };
				*fParam2 = Global_111638.f_2358.f_539.f_2310[1];
				StringCopy(sParam3, "", 32);
				return 1;
			case 7:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[2 /*3*/] + Vector(-1f, 0f, 0f) };
				*fParam2 = Global_111638.f_2358.f_539.f_2310[2];
				StringCopy(sParam3, "", 32);
				return 1;
		}
		*uParam1 = { Global_97183[iParam0 /*3*/] };
		return 1;
	}
	return 0;
}

bool func_93(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	vector3 vVar6;
	float fVar9;

	iVar0 = Global_111638.f_2358.f_539.f_4323;
	vVar1 = { Global_111638.f_2358.f_539.f_2300[iVar0 /*3*/] };
	if (func_59(vVar1, 0f, 0f, 0f, 0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	}
	*iParam0 = 5;
	fVar4 = 9999999f;
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (MISC::IS_BIT_SET(Global_111638.f_7224.f_11[iVar5], 0))
		{
			vVar6 = { Global_93947[iVar5 /*9*/].f_3 };
			fVar9 = SYSTEM::VDIST(vVar1, vVar6);
			if (fVar9 > 150f)
			{
				if (fVar9 < fVar4)
				{
					*iParam0 = iVar5;
					fVar4 = fVar9;
				}
			}
		}
		iVar5++;
	}
	return *iParam0 != 5;
}

bool func_94(int iParam0, float fParam1, char* sParam2)
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
			func_93(&iVar3);
			if (iVar3 < 5)
			{
				*fParam1 = Global_93947[iVar3 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return true;
			}
			else
			{
				*fParam1 = Global_93947[0 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 2:
			*fParam1 = Global_96855[0 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return true;
		case 3:
			*fParam1 = Global_96855[1 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return true;
		case 4:
			*fParam1 = Global_96855[2 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return true;
		case 5:
			*fParam1 = Global_111638.f_2358.f_539.f_2310[0];
			StringCopy(sParam2, func_98(Global_111638.f_2358.f_539.f_2314[0]), 32);
			return true;
		case 6:
			*fParam1 = Global_111638.f_2358.f_539.f_2310[1];
			StringCopy(sParam2, func_98(Global_111638.f_2358.f_539.f_2314[1]), 32);
			return true;
		case 7:
			*fParam1 = Global_111638.f_2358.f_539.f_2310[2];
			StringCopy(sParam2, func_98(Global_111638.f_2358.f_539.f_2314[2]), 32);
			return true;
		case 11:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return true;
			}
			break;
		case 8:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 9:
			return func_94(8, fParam1, sParam2);
		case 10:
			return func_94(8, fParam1, sParam2);
		case 13:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 14:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 15:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 12:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 16:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 17:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 18:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 19:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 20:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 21:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 22:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 74:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 23:
			return func_94(208, fParam1, sParam2);
		case 24:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 67:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 25:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 26:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 27:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 28:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 29:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 30:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 31:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 32:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 33:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 34:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 35:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 36:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 37:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 58:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 59:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 60:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 38:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 39:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 40:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return true;
			}
			break;
		case 41:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 42:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 43:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 44:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 45:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 46:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 47:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 49:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 48:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 124:
			vVar0 = { -803.734f, 168.148f, 76.3542f };
			*fParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 50:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 51:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 52:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 66:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 53:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 54:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 55:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 56:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 57:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 61:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 62:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 63:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 68:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 69:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 64:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 65:
			if (func_97(iParam0, &vVar0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return true;
			}
			break;
		case 70:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 71:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 72:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 73:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return false;
		case 234:
			*fParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 316:
			*fParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 315:
			*fParam1 = (41.654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 75:
			*fParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return true;
		case 76:
			*fParam1 = (181.8927f - 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 77:
			*fParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 78:
			*fParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 79:
			*fParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 80:
			*fParam1 = (-48.53f + 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 81:
			*fParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return true;
		case 82:
			*fParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 83:
			*fParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 84:
			*fParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 85:
			*fParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 86:
			*fParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 87:
			*fParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return true;
		case 88:
			*fParam1 = 21f;
			*fParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return true;
		case 89:
			*fParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return true;
		case 90:
			*fParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return true;
		case 91:
			*fParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return true;
		case 92:
			*fParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return true;
		case 93:
			*fParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return true;
		case 94:
			*fParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return true;
		case 95:
			*fParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return true;
		case 96:
			*fParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return true;
		case 97:
			*fParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return true;
		case 98:
			*fParam1 = (-150.6148f + 0.0095f);
			*fParam1 = (*fParam1 + 0.0004f);
			*fParam1 = (*fParam1 + 0.0015f);
			*fParam1 = (*fParam1 + 0.0002f);
			*fParam1 = (*fParam1 + -0.0009f);
			StringCopy(sParam2, "", 32);
			return true;
		case 99:
			*fParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return true;
		case 100:
			*fParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return true;
		case 101:
			*fParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return true;
		case 102:
			*fParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return true;
		case 103:
			*fParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return true;
		case 104:
			*fParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return true;
		case 105:
			*fParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return true;
		case 106:
			*fParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return true;
		case 107:
			*fParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return true;
		case 108:
			*fParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return true;
		case 109:
			*fParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return true;
		case 110:
			*fParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return true;
		case 111:
			*fParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return true;
		case 112:
			*fParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return true;
		case 113:
			*fParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return true;
		case 135:
			*fParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return true;
		case 136:
			*fParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return true;
		case 137:
			*fParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return true;
		case 138:
			*fParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return true;
		case 139:
			*fParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return true;
		case 140:
			*fParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return true;
		case 141:
			*fParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return true;
		case 142:
			*fParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return true;
		case 143:
			*fParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return true;
		case 144:
			*fParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return true;
		case 145:
			*fParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return true;
		case 146:
			*fParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return true;
		case 147:
			*fParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return true;
		case 148:
			*fParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return true;
		case 149:
			*fParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return true;
		case 150:
			*fParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 114:
			*fParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return true;
		case 115:
			*fParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return true;
		case 116:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return true;
		case 117:
			*fParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return true;
		case 118:
			*fParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return true;
		case 119:
			*fParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return true;
		case 120:
			*fParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return true;
		case 121:
			*fParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return true;
		case 122:
			*fParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 123:
			*fParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return true;
		case 125:
			*fParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return true;
		case 126:
			*fParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return true;
		case 127:
			*fParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return true;
		case 128:
			*fParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 129:
			*fParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return true;
		case 130:
			*fParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 131:
			*fParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return true;
		case 132:
			*fParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 133:
			*fParam1 = (226.5579f - 270f);
			StringCopy(sParam2, "", 32);
			return true;
		case 134:
			*fParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return true;
		case 151:
			*fParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return true;
		case 152:
			*fParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return true;
		case 153:
			*fParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return true;
		case 154:
			*fParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return true;
		case 155:
			*fParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return true;
		case 156:
			*fParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 157:
			*fParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return true;
		case 158:
			*fParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return true;
		case 159:
			*fParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return true;
		case 160:
			*fParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return true;
		case 161:
			*fParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return true;
		case 162:
			*fParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return true;
		case 163:
			*fParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 164:
			*fParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return true;
		case 165:
			*fParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return true;
		case 166:
			*fParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return true;
		case 167:
			*fParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return true;
		case 168:
			if (func_95(0, 25, &uVar4, &fVar7))
			{
				*fParam1 = (fVar7 + 222.8314f);
				StringCopy(sParam2, "v_michael", 32);
				return true;
			}
			break;
		case 169:
			*fParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		case 170:
			*fParam1 = (-103.8158f + 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 171:
			*fParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return true;
		case 173:
			*fParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return true;
		case 172:
			*fParam1 = -30.185f;
			*fParam1 = (*fParam1 + 0.003f);
			StringCopy(sParam2, "", 32);
			return true;
		case 174:
			*fParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
	}
	switch (iParam0)
	{
		case 175:
			*fParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 176:
			*fParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 177:
			*fParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 178:
			*fParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 179:
			*fParam1 = (-16.0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 180:
			*fParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 181:
			*fParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 182:
			*fParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return true;
		case 183:
			*fParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return true;
		case 184:
			*fParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return true;
		case 185:
			*fParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return true;
		case 186:
			*fParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 187:
			*fParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 188:
			*fParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 189:
			*fParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 190:
			*fParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 191:
			*fParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 196:
			*fParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return true;
		case 197:
			*fParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return true;
		case 192:
			*fParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return true;
		case 193:
			*fParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return true;
		case 194:
			*fParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return true;
		case 195:
			*fParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return true;
		case 198:
			*fParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return true;
		case 199:
			*fParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return true;
		case 200:
			*fParam1 = (310.879f - 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 201:
			*fParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return true;
		case 202:
			*fParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return true;
		case 203:
			*fParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return true;
		case 204:
			*fParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return true;
		case 205:
			*fParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return true;
		case 206:
			*fParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return true;
		case 207:
			*fParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return true;
		case 208:
			*fParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return true;
		case 209:
			*fParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return true;
		case 210:
			*fParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return true;
		case 211:
			*fParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return true;
		case 212:
			*fParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return true;
		case 213:
			*fParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return true;
		case 214:
			*fParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return true;
		case 215:
			*fParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return true;
		case 216:
			*fParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return true;
		case 217:
			*fParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return true;
		case 221:
			*fParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return true;
		case 222:
			*fParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return true;
		case 223:
			*fParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return true;
		case 224:
			return func_94(222, fParam1, sParam2);
		case 226:
			*fParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return true;
		case 227:
			*fParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return true;
		case 228:
			*fParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return true;
		case 229:
			*fParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return true;
		case 230:
			*fParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return true;
		case 218:
			*fParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return true;
		case 219:
			*fParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return true;
		case 220:
			*fParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return true;
		case 225:
			*fParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return true;
		case 231:
			*fParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return true;
		case 232:
			*fParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return true;
		case 233:
			*fParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return true;
		case 235:
			*fParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		case 236:
			*fParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		case 237:
			*fParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return true;
		case 238:
			*fParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return true;
		case 239:
			*fParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return true;
		case 240:
			*fParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return true;
		case 241:
			*fParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return true;
		case 242:
			*fParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return true;
		case 245:
			*fParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 243:
			*fParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return true;
		case 244:
			*fParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return true;
		case 246:
			*fParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return true;
		case 247:
			*fParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return true;
		case 248:
			*fParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return true;
		case 249:
			*fParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 250:
			*fParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return true;
		case 251:
			*fParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return true;
		case 252:
			*fParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return true;
		case 253:
			*fParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return true;
		case 254:
			*fParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return true;
		case 255:
			*fParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return true;
		case 264:
			*fParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return true;
		case 265:
			*fParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return true;
		case 266:
			*fParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return true;
		case 267:
			*fParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return true;
		case 268:
			*fParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return true;
		case 269:
			*fParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return true;
		case 270:
			*fParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return true;
		case 271:
			*fParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return true;
		case 272:
			*fParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return true;
		case 273:
			*fParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return true;
		case 274:
			*fParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return true;
		case 275:
			*fParam1 = (277.613f - 360f);
			StringCopy(sParam2, "", 32);
			return true;
		case 276:
			*fParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return true;
		case 277:
			*fParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return true;
		case 278:
			*fParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return true;
		case 279:
			*fParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return true;
		case 280:
			*fParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return true;
		case 281:
			*fParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return true;
		case 282:
			*fParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return true;
		case 283:
			*fParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return true;
		case 284:
			*fParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return true;
		case 285:
			*fParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return true;
		case 256:
			*fParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return true;
		case 257:
			*fParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return true;
		case 258:
			*fParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return true;
		case 259:
			*fParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return true;
		case 260:
			*fParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return true;
		case 261:
			*fParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return true;
		case 286:
			*fParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return true;
		case 287:
			*fParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return true;
		case 288:
			*fParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return true;
		case 262:
			*fParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return true;
		case 263:
			*fParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return true;
		case 289:
			*fParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return true;
		case 290:
			*fParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		case 291:
			*fParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 292:
			*fParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 293:
			*fParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 294:
			return func_94(293, fParam1, sParam2);
		case 295:
			return func_94(292, fParam1, sParam2);
		case 299:
			*fParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 300:
			return func_94(303, fParam1, sParam2);
		case 301:
			return func_94(303, fParam1, sParam2);
		case 302:
			return func_94(303, fParam1, sParam2);
		case 303:
			*fParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 296:
			*fParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 297:
			*fParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 298:
			*fParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return true;
		case 304:
			*fParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return true;
		case 305:
			*fParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return true;
		case 306:
			vVar8 = { -7.4998f, 7.4995f, -0.5258f };
			*fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-vVar8.x, -vVar8.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 307:
			vVar11 = { 10.6345f, 0.7246f, 1.2508f };
			*fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-vVar11.x, -vVar11.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 308:
			vVar14 = { -3.4271f, -13.6787f, -1.4107f };
			*fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-vVar14.x, -vVar14.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 309:
			vVar17 = { -19.6582f, 7.896f, 0.1334f };
			*fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-vVar17.x, -vVar17.y);
			StringCopy(sParam2, "", 32);
			return true;
		case 310:
			*fParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return true;
		case 311:
			*fParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		case 312:
			*fParam1 = ((103.2841f + 88.7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return true;
		case 313:
			*fParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return true;
		case 314:
			*fParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return true;
	}
	*fParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return false;
}

bool func_95(int iParam0, int iParam1, var uParam2, float fParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*fParam3 = -144f;
					return true;
				case 1:
					if (func_95(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*fParam3 = (*fParam3 + (456.7661f - 360f));
						return true;
					}
					break;
				case 2:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((16f - 222.8314f) + 360f);
					return true;
			}
			return false;
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*fParam3 = 163.0716f;
					return true;
				case 1:
					if (func_95(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*fParam3 = (*fParam3 + 0f);
						return true;
					}
					break;
				case 2:
					if (func_95(0, iParam1, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*fParam3 = (*fParam3 + 0f);
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
					*fParam3 = (((16f + 90f) - 222.8314f) + 360f);
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
					*fParam3 = 160f;
					return true;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*fParam3 = 255f;
					return true;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*fParam3 = 252f;
					return true;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*fParam3 = 273f;
					return true;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_95(0, 5, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*fParam3 = (*fParam3 + 0f);
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
					*fParam3 = 318f;
					return true;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*fParam3 = 306f;
					return true;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*fParam3 = 0f;
					return true;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*fParam3 = 330f;
					return true;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*fParam3 = 272.857f;
					return true;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*fParam3 = 158f;
					return true;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*fParam3 = 339f;
					return true;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-159.23f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-159.23f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*fParam3 = 147f;
					return true;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*fParam3 = 159.3182f;
					return true;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*fParam3 = 333f;
					return true;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f)) };
					*fParam3 = (306f + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 10f));
					return true;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0.95f, 0.95f, 0.95f) };
					*fParam3 = MISC::GET_HEADING_FROM_VECTOR_2D(*uParam2, uParam2->f_1);
					return true;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((26.087f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((13f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-28.7112f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*fParam3 = 319f;
					return true;
			}
			break;
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*fParam3 = 78f;
					return true;
			}
			break;
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*fParam3 = 304.1026f;
					return true;
			}
			break;
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*fParam3 = 180f;
					return true;
			}
			break;
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_95(1, 32, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*fParam3 = (*fParam3 + 0f);
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
					*fParam3 = 228f;
					return true;
			}
			break;
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
					*fParam3 = 310.6696f;
					return true;
			}
			break;
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*fParam3 = 102.156f;
					return true;
			}
			break;
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*fParam3 = 264f;
					return true;
			}
			break;
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.352f, -3.356f, 5.7338f };
					*fParam3 = 338f;
					return true;
			}
			break;
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
					*fParam3 = 262.789f;
					return true;
			}
			break;
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.76f, -5.95f, 4.59f };
					*fParam3 = 177.6766f;
					return true;
			}
			break;
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
					*fParam3 = 159.156f;
					return true;
			}
			break;
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1.228f, 4.044f, 0.7665f };
					*fParam3 = 165f;
					return true;
			}
			break;
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
					*fParam3 = 157.0716f;
					return true;
			}
			break;
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.161f, -7.562f, 2.17f };
					*fParam3 = 78f;
					return true;
			}
			break;
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
					*fParam3 = 144.6939f;
					return true;
			}
			break;
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
					*fParam3 = 257.4583f;
					return true;
			}
			break;
		case 46:
			return func_95(iParam0, 26, uParam2, fParam3);
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8.4451f, 3.1568f, 1.47f };
					*fParam3 = 159f;
					return true;
			}
			break;
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
					*fParam3 = 88.5686f;
					return true;
			}
			break;
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					return false;
			}
			break;
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 21.7f, 9f, 1.7029f };
					*fParam3 = 0f;
					return true;
			}
			break;
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1.3278f, 1.534f, 0f };
					*fParam3 = 159.72f;
					return true;
			}
			break;
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
					*fParam3 = 338.5f;
					return true;
			}
			break;
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15.2374f, 8.723f, 1.4495f };
					*fParam3 = 205.677f;
					return true;
			}
			break;
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 28.7f, 8.8241f, 0.6f };
					*fParam3 = 39f;
					return true;
			}
			break;
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) };
					*fParam3 = 94.2086f;
					return true;
			}
			break;
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
					*fParam3 = 336f;
					return true;
			}
			break;
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.84f };
					*fParam3 = 311.4f;
					return true;
			}
			break;
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
					*fParam3 = 306.6f;
					return true;
			}
			break;
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 5.8092f, 5.7965f, 3.85f };
					*fParam3 = 337.4f;
					return true;
			}
			break;
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
					*fParam3 = 277.317f;
					return true;
			}
			break;
		case 60:
			if (func_95(iParam0, 59, uParam2, fParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
				*fParam3 = (*fParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
				return true;
			}
			break;
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -2.235f, 1.725f, 4.5877f };
					*fParam3 = 172.714f;
					return true;
			}
			break;
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-158f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*fParam3 = ((-164f - 222.8314f) + 360f);
					return true;
			}
			break;
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7.394f, 5.368f, 1.451f };
					*fParam3 = 235.0656f;
					return true;
			}
			break;
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 1.0704f, -1.4624f, 0.999f };
					*fParam3 = 157.44f;
					return true;
			}
			break;
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 14.8186f, 6.8253f, 0.5f };
					*fParam3 = 87.3368f;
					return true;
			}
			break;
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 13.6486f, 6.2253f, 0.45f };
					*fParam3 = 262.32f;
					return true;
			}
			break;
		case 77:
			if (func_95(iParam0, 47, uParam2, fParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*fParam3 = (*fParam3 + 0f);
				return true;
			}
			break;
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16.319f, -1.375f, 0.6817f };
					*fParam3 = 334.126f;
					return true;
			}
			break;
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0.39f, 3.27f, 0f };
					*fParam3 = 154.126f;
					return true;
			}
			break;
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.0213f, 6.9622f, 1.39f };
					*fParam3 = 142.889f;
					return true;
			}
			break;
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.128f, 6.842f, 0.4524f };
					*fParam3 = 54f;
					return true;
			}
			break;
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9019f, -23.8349f, -2.1f };
					*fParam3 = 339f;
					return true;
			}
			break;
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9937f, -24.9005f, -2.18f };
					*fParam3 = 314.2132f;
					return true;
			}
			break;
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
					*fParam3 = 147f;
					return true;
			}
			break;
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27.1728f, -3.75f, -1.626f };
					*fParam3 = (147f + 90f);
					return true;
			}
			break;
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14.7722f, -10.9336f, -0.537f };
					*fParam3 = 110.8505f;
					return true;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17.2536f, 2.451f, -0.6f };
					*fParam3 = 0f;
					return true;
			}
			break;
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23.9716f, -20.3533f, -3.18f };
					*fParam3 = 324f;
					return true;
			}
			break;
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
					*fParam3 = 33f;
					return true;
			}
			break;
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
					*fParam3 = 69f;
					return true;
			}
			break;
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 2.983f, -4.094f, 0.4629f };
					*fParam3 = 33f;
					return true;
			}
			break;
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
					*fParam3 = 71f;
					return true;
			}
			break;
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30.7131f, -1454.676f, -42.2059f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*fParam3 = (84.7009f - 188.5817f);
					return true;
				case 7:
					*uParam2 = { Vector(30.6803f, -1455.848f, -40.7478f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*fParam3 = (90.6417f - 188.5817f);
					return true;
			}
			break;
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
					*fParam3 = 354f;
					return true;
			}
			break;
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
					*fParam3 = 61.7525f;
					return true;
			}
			break;
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
					*fParam3 = 119.008f;
					return true;
			}
			break;
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3.467f, 0.074f, 0f };
					*fParam3 = 30f;
					return true;
			}
			break;
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.1014f, -5.4089f, -0.013f };
					*fParam3 = 123.753f;
					return true;
			}
			break;
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.802f, -6.3295f, -0.01f };
					*fParam3 = 42.757f;
					return true;
			}
			break;
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2.156f, -4.9564f, 1.4886f };
					*fParam3 = 136.309f;
					return true;
			}
			break;
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7.2656f, 3.022f, -0.9061f };
					*fParam3 = 92.8891f;
					return true;
			}
			break;
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
					*fParam3 = 115.77f;
					return true;
			}
			break;
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
					*fParam3 = 114.3391f;
					return true;
			}
			break;
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
					*fParam3 = 252.2687f;
					return true;
			}
			break;
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 2.334f, 1.6889f, 0.586f };
					*fParam3 = 109f;
					return true;
			}
			break;
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
					*fParam3 = 137.1861f;
					return true;
			}
			break;
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3.887f, -0.166f, 0f };
					*fParam3 = 30f;
					return true;
			}
			break;
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3.5179f, 9.1355f, -1f };
					*fParam3 = 141.79f;
					return true;
			}
			break;
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
					*fParam3 = 121.6591f;
					return true;
			}
			break;
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
					*fParam3 = (170.2796f - 180f);
					return true;
			}
			break;
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.077f, -5.1446f, 0.9904f };
					*fParam3 = 107.1399f;
					return true;
			}
			break;
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12.903f, -6.623f, -0.0406f };
					*fParam3 = 63.48f;
					return true;
			}
			break;
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.5514f, 5.393f, -0.0998f };
					*fParam3 = 327.483f;
					return true;
			}
			break;
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0.9794f, -0.3043f, 0f };
					*fParam3 = 179.7612f;
					return true;
			}
			break;
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11.9759f, 1f, -1.0728f };
					*fParam3 = 238.9422f;
					return true;
			}
			break;
		case 124:
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = { -0.576f, 1.671f, 0.601f };
					*fParam3 = 296f;
					return true;
			}
			break;
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
					*fParam3 = 121.0556f;
					return true;
			}
			break;
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0.18f, -4.173f, 0.9981f };
					*fParam3 = 216.61f;
					return true;
			}
			break;
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.5937f, 0.3521f, 1f };
					*fParam3 = 119.4f;
					return true;
			}
			break;
		case 128:
			switch (iParam0)
			{
				case 13:
					if (Global_111638.f_18528[2] == 299)
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*fParam3 = (34.661f - 90.6729f);
						return true;
					}
					else if (((Global_111638.f_18528[2] == 300 || Global_111638.f_18528[2] == 301) || Global_111638.f_18528[2] == 302) || Global_111638.f_18528[2] == 303)
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*fParam3 = (32f - 90.6729f);
						return true;
					}
					if (func_96())
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*fParam3 = (34.661f - 90.6729f);
						return true;
					}
					else
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*fParam3 = (32f - 90.6729f);
						return true;
					}
					break;
			}
			break;
		case 129:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.571f) };
					*fParam3 = (102f - 90.6729f);
					return true;
			}
			break;
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2.8352f, 0.0552f, 0f };
					*fParam3 = 334.44f;
					return true;
			}
			break;
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_95(iParam0, 130, uParam2, fParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
						*fParam3 = (*fParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
						return true;
					}
					break;
			}
			break;
		case 132:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -7.213f, -1.4536f, 0.9981f };
					*fParam3 = 42.6f;
					return true;
			}
			break;
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector((9.6327f + 1f), -1518.736f, -1148.466f) - Vector(9.6346f, -1517.601f, -1152.571f) };
					*fParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					return true;
			}
			break;
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5.24f, 6.217f, 0.998f };
					*fParam3 = 315.72f;
					return true;
			}
			break;
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
					*fParam3 = 296.683f;
					return true;
			}
			break;
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3.968f, -1.04f, 0f };
					*fParam3 = 214.92f;
					return true;
				case 14:
					*uParam2 = { 4.617f, -1.1314f, 0f };
					*fParam3 = 39.4085f;
					return true;
			}
			break;
		case 137:
		case 138:
			*uParam2 = { 0f, 0f, 0f };
			*fParam3 = 0f;
			return false;
		case 140:
		case 141:
			*uParam2 = { 0f, 0f, 0f };
			*fParam3 = 0f;
			return false;
		default:
			*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			*fParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
			return false;
	}
	*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
	*fParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	return false;
}

bool func_96()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return true;
	}
	return false;
}

bool func_97(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return true;
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return true;
		case 9:
			return func_97(8, uParam1, fParam2);
		case 10:
			return func_97(8, uParam1, fParam2);
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return true;
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return true;
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return true;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return true;
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return true;
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return true;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return true;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return true;
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return true;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return true;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return true;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return true;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return true;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return true;
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return true;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return true;
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return true;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return true;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return true;
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return true;
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return true;
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return true;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return true;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return true;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return true;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return true;
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return true;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return true;
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return true;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return true;
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return true;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return true;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return true;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return true;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return true;
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return true;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return true;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return true;
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return true;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return true;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return true;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return true;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return true;
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return true;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return true;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return true;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		default:
			break;
	}
	return false;
}

char* func_98(int iParam0)
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

void func_99()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_451[iVar0]));
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_462[iVar0]));
		if (iLocal_456[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_456[iVar0]);
		}
		if (iLocal_467[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_467[iVar0]);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_496) && iLocal_500[iVar0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_500[iVar0], &cLocal_496);
		}
		iVar0++;
	}
	func_68(&uLocal_438, 0, 0);
	MISC::SET_GAME_PAUSED(false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

