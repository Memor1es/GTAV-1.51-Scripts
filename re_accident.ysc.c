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
	bool bLocal_46 = false;
	var uLocal_47 = 0;
	bool bLocal_48 = false;
	bool bLocal_49 = false;
	bool bLocal_50 = false;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	vector3 vLocal_59 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	int iLocal_65 = 0;
	struct<5> Local_66[31];
	bool bLocal_222 = false;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	struct<5> Local_229[14];
	float fLocal_300 = 0f;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	vector3 vLocal_305 = { 0f, 0f, 0f };
	vector3 vLocal_308 = { 0f, 0f, 0f };
	vector3 vLocal_311 = { 0f, 0f, 0f };
	vector3 vLocal_314 = { 0f, 0f, 0f };
	bool bLocal_317 = false;
	bool bLocal_318 = false;
	bool bLocal_319 = false;
	bool bLocal_320 = false;
	bool bLocal_321 = false;
	bool bLocal_322 = false;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_339 = false;
	bool bLocal_340 = false;
	bool bLocal_341 = false;
	bool bLocal_342 = false;
	bool bLocal_343 = false;
	bool bLocal_344 = false;
	bool bLocal_345 = false;
	bool bLocal_346 = false;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	var uLocal_358 = 16;
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
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	vector3 vLocal_523 = { 0f, 0f, 0f };
	vector3 vLocal_526 = { 0f, 0f, 0f };
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	var uLocal_532 = 0;
	int iLocal_533 = 0;
	bool bLocal_534 = false;
	bool bLocal_535 = false;
	bool bLocal_536 = false;
	struct<33> Local_537 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_570 = 1;
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
	iLocal_18 = 3;
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
	iLocal_51 = -1;
	iLocal_54 = -1;
	fLocal_57 = 0.5f;
	fLocal_58 = 0f;
	iLocal_223 = 1;
	fLocal_300 = 160f;
	iLocal_304 = 55000;
	vLocal_311 = { 30f, 30f, 5f };
	iLocal_352 = -1;
	vLocal_523 = { -458.4085f, -984.6459f, 22.5892f };
	vLocal_526 = { -458.1934f, -995.4897f, 22.7427f };
	vLocal_305 = { ScriptParam_0.f_1[0 /*3*/] };
	if (UNK_0x2EBF608FFE6CA406(11))
	{
		func_180();
	}
	if (UNK_0xD8A54335F18763BA() > 18 || UNK_0xD8A54335F18763BA() < 5)
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	if (func_138(vLocal_305, -1, 0, 0, 0))
	{
		func_135(-1);
	}
	else
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (UNK_0x338D6FF72D84D90F())
		{
			if (!func_134())
			{
				if (func_133())
				{
					func_180();
				}
			}
			UNK_0x1A6DFFFEEC27BF4F("RE_CA", 0);
			switch (iLocal_301)
			{
				case 0:
					if (func_121())
					{
						func_180();
					}
					func_115();
					func_112(&Local_537);
					break;
				case 1:
					func_22();
					func_112(&Local_537);
					func_13();
					break;
				case 2:
					if (((UNK_0xC844350D5D58C99A(bLocal_317) && UNK_0x28072FDD60CE3A6E(bLocal_317, 1)) && iLocal_348 < 5) && !bLocal_345)
					{
						func_12();
					}
					func_1();
					break;
			}
		}
		else
		{
			func_180();
		}
	}
}

void func_1()
{
	if (bLocal_534 && !bLocal_535)
	{
		UNK_0xC92DB9682A650680("RE14A_FAIL");
		iLocal_347 = 0;
		while (iLocal_347 < 11)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_327[iLocal_347]))
			{
				UNK_0x1E9649458B15960F(iLocal_327[iLocal_347], false);
			}
			iLocal_347++;
		}
		if (!UNK_0x437347B10A200C4B(bLocal_319, 0))
		{
			UNK_0x5DAB50E08C3C504A(bLocal_319, 0f);
			UNK_0x1E9649458B15960F(bLocal_319, false);
		}
		if (UNK_0xC844350D5D58C99A(bLocal_339))
		{
			UNK_0x1E9649458B15960F(bLocal_339, false);
		}
		UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
		UNK_0xBFE31971E49FA500(1);
		UNK_0x8BCB70EB440DED83(1);
		func_2(0, 1, 1, 0, 0, 0);
		bLocal_342 = true;
		UNK_0x9A82EEAF6CA12AEE(1f);
		UNK_0x8D17794CE3273D70("re@construction");
		if (UNK_0x9F4FE516EAACCFC5(iLocal_529))
		{
			UNK_0x9A8DDC7C522F5BF5(iLocal_529, 0);
			UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			UNK_0x2FB9A57162E54BAB(0f);
			UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_323))
		{
			UNK_0x142CC44DB769B57E(&iLocal_323);
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_324))
		{
			UNK_0x142CC44DB769B57E(&iLocal_324);
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_325))
		{
			UNK_0x142CC44DB769B57E(&iLocal_325);
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_326))
		{
			UNK_0x142CC44DB769B57E(&iLocal_326);
		}
		bLocal_535 = true;
	}
	if (UNK_0xC844350D5D58C99A(iLocal_327[0]) || UNK_0xC844350D5D58C99A(iLocal_327[1]))
	{
		if (!UNK_0x8E28E832BEAC3DCE(vLocal_308 + Vector(20f, 0f, 0f), 30f) && !UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_308, 80f, 80f, 80f, false, true, 0))
		{
			func_180();
		}
	}
}

void func_2(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_11(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_10())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_9(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_11(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_9(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_7(UNK_0xD803B885F5E47A62())) && !func_4(UNK_0xD803B885F5E47A62(), 0)) && !func_3()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_7(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_3()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_4(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_5(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[bParam0 /*876*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (UNK_0x40B8C182D63932FC(bParam0))
		{
			bVar0 = UNK_0x08067D4957B73C02(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_5(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_6();
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

int func_6()
{
	return Global_1312745;
}

bool func_7(bool bParam0)
{
	if (func_4(bParam0, 0))
	{
		return true;
	}
	if (func_8())
	{
		if (bParam0 == UNK_0xD803B885F5E47A62())
		{
			return true;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_195, 2))
	{
		return true;
	}
	return false;
}

bool func_8()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_9(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (UNK_0xFA2492ED90D43443() != bParam0 && bParam2)
		{
			UNK_0xF3B6BD1C0DC44D29(bParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_10()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_11(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7356, 13);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7356, 13);
	}
}

void func_12()
{
	if (iLocal_352 == -1)
	{
		iLocal_352 = UNK_0x1C0640BA9A7327B3() + 5000;
	}
	if (UNK_0x1C0640BA9A7327B3() > iLocal_352)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_319))
		{
			UNK_0x1E9649458B15960F(bLocal_319, false);
			UNK_0xDFC6BA855748EB10(bLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			if (!UNK_0x437347B10A200C4B(bLocal_319, 0))
			{
				UNK_0x0DC87D17DC2658DC(bLocal_319, 1, 0);
			}
		}
	}
}

void func_13()
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		func_21();
		func_20();
		func_17();
		func_14();
	}
}

void func_14()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	vVar1 = { 0f, 0f, 0f };
	if (bLocal_222 == 0)
	{
		if (UNK_0x49DBEF6684F02E67(&vVar1, Local_229[0 /*5*/]))
		{
			fVar4 = 0f;
			fVar7 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_229)
			{
				if (iVar0 > 0)
				{
					fVar4 = (fVar4 + UNK_0x0EB28750412C3A5A(Local_229[(iVar0 - 1) /*5*/], Local_229[iVar0 /*5*/], 1));
				}
				if (Local_229[iVar0 /*5*/].f_4)
				{
					if (UNK_0x49DBEF6684F02E67(&vVar1, Local_229[iVar0 /*5*/]))
					{
						fVar6 = UNK_0x0EB28750412C3A5A(Local_229[iVar0 /*5*/], vVar1, 1);
						if (fVar6 < fVar7)
						{
							fVar7 = fVar6;
							fVar8 = fVar4;
							iVar5 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar7 < fLocal_57)
			{
				iVar5 = iVar5;
				bLocal_222 = true;
				iLocal_224 = UNK_0x1C0640BA9A7327B3();
				fVar8 = fVar8;
				vLocal_62 = { Local_229[iVar5 /*5*/] };
				iLocal_65 = iVar5;
				iLocal_225 = iVar5 * 2;
				iLocal_227 = iLocal_225;
				iLocal_228 = iLocal_225;
				if (iLocal_228 < 0)
				{
					iLocal_228 = 0;
				}
				if (iLocal_227 >= Local_229 * 2)
				{
					iLocal_227 = (Local_229 * 2 - 1);
				}
			}
		}
	}
	if (bLocal_222 == 1)
	{
		UNK_0xE2E72C10BBB7677E();
		fVar9 = (SYSTEM::TO_FLOAT((UNK_0x1C0640BA9A7327B3() - iLocal_224)) / fLocal_300);
		iVar10 = (SYSTEM::FLOOR((fVar9 / (1f / 2f))) - 1);
		iVar11 = (iLocal_225 + iVar10);
		iVar12 = (iLocal_225 - iVar10);
		if (iVar11 >= 28)
		{
			iVar11 = 27;
		}
		if (iVar12 < 0)
		{
			iVar12 = 0;
		}
		if (iVar11 > iLocal_227)
		{
			iVar0 = iLocal_227 + 1;
			while (iVar0 <= iVar11)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_229)
				{
					if (Local_229[iVar13 /*5*/].f_4)
					{
						func_15(iVar0, 1);
					}
					else
					{
						iVar11 = (iVar0 - 1);
						iVar0 = iVar11 + 1;
					}
				}
				iVar0++;
			}
			iLocal_227 = iVar11;
		}
		if (iVar12 < iLocal_228)
		{
			iVar0 = (iLocal_228 - 1);
			while (iVar0 >= iVar12)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_229)
				{
					if (Local_229[iVar13 /*5*/].f_4)
					{
						func_15(iVar0, 1);
					}
					else
					{
						iVar12 = iVar0 + 1;
						iVar0 = (iVar12 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_228 = iVar12;
		}
		iVar0 = 0;
		while (iVar0 < Local_66)
		{
			if ((UNK_0x1C0640BA9A7327B3() - Local_66[iVar0 /*5*/].f_4) > 1000)
			{
				UNK_0xBB6D217402E588F9(Local_66[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((UNK_0x1C0640BA9A7327B3() - Local_66[iVar0 /*5*/].f_4) > 6000)
			{
				UNK_0x060876FE4313F6DC(Local_66[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_15(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 14)
			{
				func_16(Local_229[(iParam0 / 2) /*5*/] + Local_229[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_58, fLocal_58, fLocal_58), iParam1);
			}
		}
		else if ((iParam0 / 2) < 14)
		{
			func_16(Local_229[(iParam0 / 2) /*5*/] + Vector(fLocal_58, fLocal_58, fLocal_58), iParam1);
		}
	}
}

void func_16(vector3 vParam0, int iParam3)
{
	if (iLocal_223 == 0)
	{
		iParam3 = 0;
	}
	UNK_0x060876FE4313F6DC(Local_66[iLocal_226 /*5*/]);
	if (Local_66[iLocal_226 /*5*/].f_4 != 0)
	{
		UNK_0xBB6D217402E588F9(Local_66[iLocal_226 /*5*/].f_1, 0.4f, 1f);
	}
	Local_66[iLocal_226 /*5*/].f_4 = UNK_0x1C0640BA9A7327B3();
	Local_66[iLocal_226 /*5*/].f_1 = { vParam0 };
	Local_66[iLocal_226 /*5*/] = UNK_0xDF107B1FEA1F95CB(vParam0, iLocal_55, iParam3);
	iLocal_226++;
	if (iLocal_226 >= 31)
	{
		iLocal_226 = 0;
	}
}

void func_17()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;

	if (bLocal_50)
	{
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar1, 1);
		if (iVar1 == joaat("WEAPON_PETROLCAN"))
		{
			if (UNK_0x06F8112AA79C53D9(0, 24) && UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
			{
				if (iLocal_56 == 0)
				{
					UNK_0x8B4C4CA774181102(2f, 8f, 4);
					iLocal_56 = UNK_0x1C0640BA9A7327B3() + 250;
				}
				if (UNK_0x1C0640BA9A7327B3() > iLocal_56)
				{
					if (!bLocal_46)
					{
						fVar4 = 9999.9f;
						vLocal_59 = { func_19() };
						iVar0 = 0;
						while (iVar0 < Local_229)
						{
							if (UNK_0xE4EDC4B0E92C078B(Local_229[iVar0 /*5*/].f_3))
							{
								fVar2 = UNK_0x0EB28750412C3A5A(vLocal_59, UNK_0xAC14F6E4B17D7835(Local_229[iVar0 /*5*/].f_3), 1);
								fVar3 = UNK_0x0EB28750412C3A5A(Local_229[iVar0 /*5*/], UNK_0xAC14F6E4B17D7835(Local_229[iVar0 /*5*/].f_3), 1);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_229[iVar0 /*5*/] = { vLocal_59 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_52 != -1)
							{
								if (UNK_0x51D1D19912234EA0((iLocal_53 - iVar5)) > 1)
								{
									iLocal_53 = -1;
								}
								if (iLocal_53 == -1)
								{
									iLocal_53 = iLocal_52;
								}
								if (UNK_0x51D1D19912234EA0((iLocal_53 - iVar5)) < 3 && UNK_0x51D1D19912234EA0((iLocal_53 - iVar5)) > 0)
								{
									if (iLocal_53 < iVar5)
									{
										iVar6 = iLocal_53;
										while (iVar6 <= (iVar5 - 1))
										{
											if (UNK_0xE4EDC4B0E92C078B(Local_229[iVar6 /*5*/].f_3))
											{
												if (UNK_0x4FA921CB56EDB0F8(Local_229[iVar6 /*5*/].f_3) > 0)
												{
													UNK_0x7F010F50CE03A8AF(Local_229[iVar6 /*5*/].f_3, false);
													Local_229[iVar6 /*5*/].f_4 = 1;
													iLocal_54 = (iLocal_54 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_53)
										{
											if (UNK_0xE4EDC4B0E92C078B(Local_229[iVar6 /*5*/].f_3))
											{
												if (UNK_0x4FA921CB56EDB0F8(Local_229[iVar6 /*5*/].f_3) > 0)
												{
													UNK_0x7F010F50CE03A8AF(Local_229[iVar6 /*5*/].f_3, false);
													Local_229[iVar6 /*5*/].f_4 = 1;
													iLocal_54 = (iLocal_54 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_53 = iLocal_52;
								}
								if (iVar5 == 0)
								{
									if (UNK_0xE4EDC4B0E92C078B(Local_229[iVar5 /*5*/].f_3))
									{
										if (UNK_0x4FA921CB56EDB0F8(Local_229[iVar5 /*5*/].f_3) > 0)
										{
											UNK_0x7F010F50CE03A8AF(Local_229[iVar5 /*5*/].f_3, false);
											Local_229[iVar5 /*5*/].f_4 = 1;
											iLocal_54 = (iLocal_54 - 1);
										}
									}
								}
								if (iVar5 == 13)
								{
									if (UNK_0xE4EDC4B0E92C078B(Local_229[iVar5 /*5*/].f_3))
									{
										if (UNK_0x4FA921CB56EDB0F8(Local_229[iVar5 /*5*/].f_3) > 0)
										{
											UNK_0x7F010F50CE03A8AF(Local_229[iVar5 /*5*/].f_3, false);
											Local_229[iVar5 /*5*/].f_4 = 1;
											iLocal_54 = (iLocal_54 - 1);
										}
									}
								}
								if (iVar5 < 13)
								{
									if (func_18(Local_229[iVar5 + 1 /*5*/]))
									{
										if (UNK_0xE4EDC4B0E92C078B(Local_229[iVar5 /*5*/].f_3))
										{
											if (UNK_0x4FA921CB56EDB0F8(Local_229[iVar5 /*5*/].f_3) > 0)
											{
												UNK_0x7F010F50CE03A8AF(Local_229[iVar5 /*5*/].f_3, false);
												Local_229[iVar5 /*5*/].f_4 = 1;
												iLocal_54 = (iLocal_54 - 1);
											}
										}
									}
								}
							}
							iLocal_52 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_52 = -1;
				iLocal_53 = -1;
				iLocal_56 = 0;
			}
		}
	}
}

bool func_18(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_19()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	var uVar8;

	bVar0 = UNK_0x77E7AA9D423491DC(UNK_0x16F2683693E537C9(), 1);
	if (UNK_0xC844350D5D58C99A(bVar0))
	{
		bVar1 = UNK_0xF653B9B22DA806A9(bVar0, "Gun_Nuzzle");
		bVar1 = true;
		vVar2 = { UNK_0xBF584557291FDD31(bVar0, bVar1) };
		vVar2 = { UNK_0x8A5E176FF719A014(vVar2, UNK_0xD9522BA9E27E1349(bVar0), 0.35f, 0f, -0.15f) };
		UNK_0xE82754C349C7B581(vVar2, &uVar8, 0, 0);
		vVar5 = { vVar2.x, vVar2.y, uVar8 };
	}
	return vVar5;
}

void func_20()
{
	int iVar0;

	if (bLocal_48)
	{
		if (bLocal_222)
		{
			iVar0 = 0;
			while (iVar0 < Local_66)
			{
				UNK_0x060876FE4313F6DC(Local_66[iVar0 /*5*/]);
				iVar0++;
			}
		}
		bLocal_48 = false;
		bLocal_222 = true;
		iLocal_224 = UNK_0x1C0640BA9A7327B3();
		iVar0 = 0;
		while (iVar0 < Local_229)
		{
			Local_229[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_51 != -1)
		{
			iLocal_228 = iLocal_51;
			iLocal_227 = iLocal_51;
			iLocal_225 = iLocal_51;
		}
		else
		{
			iLocal_228 = -1;
			iLocal_227 = -1;
			iLocal_225 = iLocal_51;
		}
		iLocal_226 = 1;
	}
}

void func_21()
{
	if (!bLocal_49)
	{
		bLocal_49 = true;
	}
}

void func_22()
{
	switch (iLocal_302)
	{
		case 0:
			UNK_0xAE317D00A5A55DF6("CONSTRUCTION_ACCIDENT_1", 0, -1);
			UNK_0x3F423BF5B8125A50("re@construction");
			if (Local_537.f_32 <= 0)
			{
				Local_537.f_32 = UNK_0xF4CCC8CB6DE7F1AE();
			}
			func_111(&Local_537, joaat("S_M_M_DOCKWORK_01"));
			func_111(&Local_537, joaat("PROP_GENERATOR_01A"));
			func_111(&Local_537, joaat("P_AMB_PHONE_01"));
			func_108(&Local_537);
			if ((UNK_0xAE317D00A5A55DF6("CONSTRUCTION_ACCIDENT_1", 0, -1) && UNK_0xB4AE0788C1587752("re@construction")) && func_104(&Local_537))
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_319, 0))
				{
					bLocal_317 = UNK_0x852A19533F896693(bLocal_319, 26, joaat("S_M_M_DOCKWORK_01"), -1, 1, true);
					UNK_0x64F9F278AB9DCA2C(bLocal_317, false, true, false, 0);
					UNK_0x64F9F278AB9DCA2C(bLocal_317, 3, true, true, 0);
					UNK_0x64F9F278AB9DCA2C(bLocal_317, 4, false, true, 0);
					UNK_0x64F9F278AB9DCA2C(bLocal_317, 8, false, false, 0);
					UNK_0xC6EB89C59F2AF6B8(bLocal_317, "re@construction", "idle_c", 1000f, -1000f, -1, 49, 0.4f, 0, 0, 0);
					bLocal_340 = UNK_0x7707E48765093646(joaat("P_AMB_PHONE_01"), -455.6561f, -985.8071f, 22.4868f, true, true, false);
					UNK_0x71199B01895C6202(joaat("P_AMB_PHONE_01"));
					UNK_0x9F528B1B53FBC5D9(bLocal_340, bLocal_317, UNK_0x4A089F2B762B8D33(bLocal_317, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					UNK_0xAFF39FB306F8E232(bLocal_317, 17, true);
					UNK_0xCDFD15389C4C424B(bLocal_317, 1);
					UNK_0x11AD11297DC58CC7(bLocal_317, true);
					UNK_0x25C5402CC10F76CD(bLocal_317, false);
					func_103(&uLocal_358, 3, bLocal_317, "RECONACWorker", 0, 1);
					UNK_0x4F39CC3882DD074E(bLocal_317, "S_M_Y_GENERICWORKER_01_WHITE_01");
					bLocal_318 = UNK_0x36F2404464202779(26, joaat("S_M_M_DOCKWORK_01"), -462.2982f, -978.3272f, 65f, 221.4041f, 1, true);
					UNK_0x11AD11297DC58CC7(bLocal_318, true);
					UNK_0xE8832A9E16A57A1F(bLocal_318, true, 1);
					UNK_0x1E9649458B15960F(bLocal_318, true);
					UNK_0xC53F47E66DDFA561(bLocal_317, joaat("EMPTY"));
					UNK_0xCCB0CD7EE75D47D7(joaat("EMPTY"), 24);
					UNK_0xCCB0CD7EE75D47D7(joaat("EMPTY"), 47);
					UNK_0xCCB0CD7EE75D47D7(joaat("EMPTY"), 62);
					UNK_0xCCB0CD7EE75D47D7(joaat("EMPTY"), 138);
					UNK_0xCCB0CD7EE75D47D7(joaat("EMPTY"), 56);
					bLocal_339 = UNK_0x7707E48765093646(joaat("PROP_GENERATOR_01A"), vLocal_526.x, (vLocal_526.y + 0.5f), (vLocal_526.z - 0.25f), true, true, false);
					UNK_0xD8F6A53F4799FAFE(bLocal_339, 75f);
					UNK_0xAA6B3A4292417750(bLocal_339, false, true, true, false, false, false, 0, false);
					iLocal_533 = UNK_0xC1879030EB463216("scr_sparking_generator", bLocal_339, 0f, 0f, 0.2f, 0f, 0f, 0f, 1f, 0, 0, 0);
					UNK_0x1E9649458B15960F(bLocal_339, true);
					func_102(&uLocal_358, "CONACAU", "CONAC_CHAT", 4, 0, 0, 0, 0);
					iLocal_351 = UNK_0x1C0640BA9A7327B3();
					iLocal_302 = 1;
				}
			}
			break;
		case 1:
			if (bLocal_341)
			{
				func_97();
			}
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (!bLocal_342)
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
					{
						if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -532.2208f, -849.2668f, 19.7038f, -531.6973f, -1065.341f, 60.7893f, 190.8125f, 0, true, 0))
						{
							if (!UNK_0x437347B10A200C4B(bLocal_319, 0))
							{
								if (!UNK_0xE4EDC4B0E92C078B(iLocal_324))
								{
									iLocal_324 = func_96(bLocal_319, 0, 0);
								}
							}
						}
						if (UNK_0xB87D13D0C064E9D1(bLocal_317, UNK_0x16F2683693E537C9(), 1) || UNK_0xB87D13D0C064E9D1(bLocal_319, UNK_0x16F2683693E537C9(), 1))
						{
							UNK_0x1E9649458B15960F(bLocal_319, false);
							UNK_0xA3BF0AA5A2608191(bLocal_317);
							UNK_0xDD353D0E9C789D0E(&iLocal_357);
							UNK_0x75CDA8644CD3B5F5(false, 0, 0);
							UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
							UNK_0x75ABDC5F81978924(iLocal_357);
							UNK_0x78ADC381772E3D54(bLocal_317, iLocal_357);
							UNK_0xF82EA857DA10E0CD(&iLocal_357);
							func_95();
						}
						UNK_0x523BCC9DC80CD82F(joaat("PROP_LD_PIPE_SINGLE_01"));
						if ((((UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), -473.1686f, -984.6405f, 22.487f, 40f, 40f, 5f, false, true, 0) && !UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9())) && !UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9())) && func_94(1, 0, 1)) && UNK_0xB87F6CF6E5628C67(joaat("PROP_LD_PIPE_SINGLE_01")))
						{
							if (!func_134())
							{
								if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
								{
									bLocal_322 = UNK_0x728870EB733D12A1();
								}
								func_84(1);
							}
							bLocal_341 = true;
						}
					}
					else
					{
						func_95();
					}
				}
				else
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
					{
						if (UNK_0x405E212DDE472467(bLocal_317, 0))
						{
							if (!UNK_0x437347B10A200C4B(bLocal_319, 0) && !UNK_0xE4EDC4B0E92C078B(iLocal_324))
							{
								iLocal_324 = func_96(bLocal_319, 0, 0);
							}
						}
						else if (!UNK_0xE4EDC4B0E92C078B(iLocal_323))
						{
							if (UNK_0xE4EDC4B0E92C078B(iLocal_324))
							{
								UNK_0x142CC44DB769B57E(&iLocal_324);
							}
							iLocal_323 = func_81(bLocal_317, 0, 145);
						}
					}
					func_52();
					func_49();
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
					{
						if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_317, vLocal_311, 0, 1, 0))
						{
							if (!bLocal_343)
							{
								func_48();
							}
						}
					}
					else
					{
						if (UNK_0xE4EDC4B0E92C078B(iLocal_323))
						{
							UNK_0x142CC44DB769B57E(&iLocal_323);
						}
						if (UNK_0xE4EDC4B0E92C078B(iLocal_324))
						{
							UNK_0x142CC44DB769B57E(&iLocal_324);
						}
						if (UNK_0xE4EDC4B0E92C078B(iLocal_325))
						{
							UNK_0x142CC44DB769B57E(&iLocal_325);
						}
						if (UNK_0xEB6A8945D1AC98A1(bLocal_317) || UNK_0x437347B10A200C4B(bLocal_319, 0))
						{
							func_95();
						}
					}
					if (!UNK_0xDF1306B443CD3D15(bLocal_320, 0))
					{
						if (UNK_0xE4EDC4B0E92C078B(iLocal_325))
						{
							UNK_0x142CC44DB769B57E(&iLocal_325);
							if (!UNK_0x437347B10A200C4B(bLocal_319, 0) && !UNK_0xE4EDC4B0E92C078B(iLocal_324))
							{
								iLocal_324 = func_96(bLocal_319, 0, 0);
							}
						}
					}
				}
				if (UNK_0xDF1306B443CD3D15(bLocal_320, 0))
				{
					if (iLocal_353 >= 3)
					{
						if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("BULLDOZER")))
						{
							if (UNK_0xE4EDC4B0E92C078B(iLocal_325))
							{
								UNK_0x142CC44DB769B57E(&iLocal_325);
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_317) && !UNK_0x437347B10A200C4B(bLocal_319, 0))
								{
									if (UNK_0x405E212DDE472467(bLocal_317, 0) && !UNK_0xE4EDC4B0E92C078B(iLocal_324))
									{
										iLocal_324 = func_96(bLocal_319, 0, 0);
									}
								}
							}
						}
						else if (!UNK_0xEB6A8945D1AC98A1(bLocal_317) && !UNK_0x437347B10A200C4B(bLocal_319, 0))
						{
							if (UNK_0x405E212DDE472467(bLocal_317, 0) && UNK_0xE4EDC4B0E92C078B(iLocal_324))
							{
								UNK_0x142CC44DB769B57E(&iLocal_324);
								if (!UNK_0xE4EDC4B0E92C078B(iLocal_325))
								{
									iLocal_325 = func_96(bLocal_320, 0, 0);
								}
							}
						}
					}
				}
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if (UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("BULLDOZER")))
						{
							iLocal_347 = 0;
							while (iLocal_347 < 11)
							{
								if (UNK_0xC844350D5D58C99A(iLocal_327[iLocal_347]))
								{
									UNK_0x1E9649458B15960F(iLocal_327[iLocal_347], false);
								}
								iLocal_347++;
							}
						}
					}
				}
				if (!UNK_0x437347B10A200C4B(bLocal_319, 0))
				{
					if (UNK_0x4E861BC5B1EDA7BD(bLocal_319))
					{
						iLocal_347 = 0;
						while (iLocal_347 < 11)
						{
							if (UNK_0xC844350D5D58C99A(iLocal_327[iLocal_347]))
							{
								UNK_0x1E9649458B15960F(iLocal_327[iLocal_347], false);
							}
							iLocal_347++;
						}
						UNK_0x1E9649458B15960F(bLocal_319, false);
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
						{
							if (UNK_0x405E212DDE472467(bLocal_317, 0))
							{
								UNK_0x11AD11297DC58CC7(bLocal_317, true);
								UNK_0x4E885A246A9D983A(bLocal_317, 116, false);
								UNK_0x4E885A246A9D983A(bLocal_317, 29, false);
								if (!bLocal_345)
								{
									func_46();
									SYSTEM::WAIT(0);
									func_24(&uLocal_358, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
									while (func_23())
									{
										SYSTEM::WAIT(0);
									}
									bLocal_345 = true;
								}
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
								{
									UNK_0xD458AC1C1D29C3B4(bLocal_317, 99, false);
								}
								if (!UNK_0x437347B10A200C4B(bLocal_319, 0))
								{
									UNK_0x1E9649458B15960F(bLocal_319, false);
									UNK_0xDFC6BA855748EB10(bLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
									UNK_0x0DC87D17DC2658DC(bLocal_319, 1, 0);
								}
								func_95();
							}
						}
					}
				}
			}
			break;
	}
}

bool func_23()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

int func_24(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_25(sParam2, iParam3, 0);
}

int func_25(char* sParam0, int iParam1, bool bParam2)
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
					func_44();
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
		if (func_43(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_42();
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
				func_34();
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
				if (func_33())
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
			if (func_10())
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
			func_32();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_31();
		func_26();
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
		func_44();
	}
	return 0;
}

void func_26()
{
	if (!func_27())
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

bool func_27()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_30())
	{
		return false;
	}
	if (func_28(UNK_0xD803B885F5E47A62()))
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

bool func_28(int iParam0)
{
	return func_29(iParam0, 20);
}

bool func_29(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_30()
{
	return -1;
}

void func_31()
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

void func_32()
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

bool func_33()
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

void func_34()
{
	if (func_41(14))
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

int func_35()
{
	func_36();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_36()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_39(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_38(UNK_0x16F2683693E537C9());
			if (func_37(iVar0) && (!func_41(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_37(Global_111638.f_2358.f_539.f_4321))
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
	return iParam0 < 3;
}

int func_38(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return func_40(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_40(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_41(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_42()
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

bool func_43(bool bParam0, int iParam1)
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

void func_44()
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

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_46()
{
	Global_19671 = 0;
	func_47();
}

void func_47()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_48()
{
	switch (iLocal_353)
	{
		case 0:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
			{
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_351) > 3000)
				{
					func_24(&uLocal_358, "CONACAU", "CONAC_HELP", 4, 0, 0, 0);
					iLocal_355 = UNK_0x1C0640BA9A7327B3();
					iLocal_351 = UNK_0x1C0640BA9A7327B3();
					iLocal_353 = 2;
				}
			}
			break;
		case 1:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
			{
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_351) > 3000)
				{
					iLocal_351 = UNK_0x1C0640BA9A7327B3();
					iLocal_353++;
				}
			}
			break;
		case 2:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
			{
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_351) > 5000 && !func_23())
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						iLocal_356 = UNK_0x134B62B726CEC8E6(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0));
					}
					if (UNK_0x405E212DDE472467(bLocal_317, 0))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_320, 0))
						{
							if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
							{
								if (!UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("BULLDOZER")))
								{
									if (!UNK_0xE4EDC4B0E92C078B(iLocal_325))
									{
										iLocal_325 = func_96(bLocal_320, 0, 0);
										if (UNK_0xE4EDC4B0E92C078B(iLocal_324))
										{
											UNK_0x142CC44DB769B57E(&iLocal_324);
										}
									}
								}
							}
							else if (!UNK_0xE4EDC4B0E92C078B(iLocal_325))
							{
								iLocal_325 = func_96(bLocal_320, 0, 0);
								if (UNK_0xE4EDC4B0E92C078B(iLocal_324))
								{
									UNK_0x142CC44DB769B57E(&iLocal_324);
								}
							}
						}
					}
					if (iLocal_356 == joaat("BULLDOZER"))
					{
						func_24(&uLocal_358, "CONACAU", "CONAC_HELP2", 4, 0, 0, 0);
					}
					else
					{
						func_24(&uLocal_358, "CONACAU", "CONAC_HELP3", 4, 0, 0, 0);
					}
					iLocal_351 = UNK_0x1C0640BA9A7327B3();
					iLocal_353++;
				}
			}
			break;
		case 3:
			if (UNK_0x1C0640BA9A7327B3() - iLocal_351) > UNK_0x09AC81E49EA267F7(5000, 8000)
			{
				if (!func_23())
				{
					func_24(&uLocal_358, "CONACAU", "CONAC_HURRY", 4, 0, 0, 0);
					iLocal_351 = UNK_0x1C0640BA9A7327B3();
				}
			}
			break;
	}
}

void func_49()
{
	switch (iLocal_349)
	{
		case 0:
			UNK_0x76710B4A168654A3(vLocal_526 + Vector(0f, 1f, 0f), 1f, 1f, 1f);
			SYSTEM::WAIT(0);
			UNK_0x55D86AAC00607BDD(1f);
			UNK_0xC940C10E2534CB72(vLocal_523, 1f);
			SYSTEM::WAIT(0);
			UNK_0xC940C10E2534CB72(vLocal_523 - Vector(0f, 4f, 0f), 1f);
			SYSTEM::WAIT(0);
			UNK_0xC940C10E2534CB72(vLocal_523 - Vector(0f, 8f, 0f), 1f);
			SYSTEM::WAIT(0);
			UNK_0xC940C10E2534CB72(vLocal_526, 1f);
			UNK_0xAD69976140271CE8();
			iLocal_355 = UNK_0x1C0640BA9A7327B3();
			iLocal_349 = 2;
			break;
		case 2:
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_355) > iLocal_304 || func_51())
			{
				if (UNK_0x83A8177D302E1A7E(iLocal_533))
				{
					UNK_0xF7E25143642732EA(iLocal_533, 0);
				}
				func_50();
				if (!bLocal_345)
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_317) && !UNK_0x437347B10A200C4B(bLocal_319, 0))
					{
						if (!UNK_0x3CAA763EEC01ADF7(bLocal_317, bLocal_319, -1, 0, false) && !UNK_0x3CAA763EEC01ADF7(bLocal_317, bLocal_319, 0, 0, false))
						{
							func_46();
							SYSTEM::WAIT(0);
							func_24(&uLocal_358, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
							bLocal_345 = true;
						}
					}
				}
				UNK_0x15EA7F4313456B1D(3, true);
				UNK_0x73804C1E1999954F(80f);
				UNK_0xB5376EA942202450(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, true, 1);
				UNK_0x58C79C59A23B279F(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_532, 0, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_349 = 3;
			}
			break;
		case 3:
			if (UNK_0xC844350D5D58C99A(bLocal_319))
			{
				if (!UNK_0x4E861BC5B1EDA7BD(bLocal_319))
				{
				}
			}
			if (iLocal_348 < 2)
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					if (!UNK_0x437347B10A200C4B(bLocal_319, 0))
					{
						UNK_0x1E9649458B15960F(bLocal_319, false);
						UNK_0xDFC6BA855748EB10(bLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						UNK_0x0DC87D17DC2658DC(bLocal_319, 1, 0);
					}
				}
			}
			break;
	}
}

void func_50()
{
	bLocal_48 = true;
}

bool func_51()
{
	if (bLocal_222 == 1)
	{
		return true;
	}
	return false;
}

void func_52()
{
	vector3 vVar0;

	switch (iLocal_348)
	{
		case 0:
			if (iLocal_353 >= 2)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_317) && !UNK_0x437347B10A200C4B(bLocal_319, 0))
				{
					if (!UNK_0x405E212DDE472467(bLocal_317, 0))
					{
						iLocal_348++;
					}
					UNK_0xF690C84DADBB3551(&bLocal_340);
					if (UNK_0x3CAA763EEC01ADF7(bLocal_317, bLocal_319, -1, 0, false) || UNK_0x3CAA763EEC01ADF7(bLocal_317, bLocal_319, 0, 0, false))
					{
						if (UNK_0x3CAA763EEC01ADF7(bLocal_317, bLocal_319, -1, 0, false))
						{
							bLocal_344 = true;
							vLocal_314 = { UNK_0x68F4C0EC296D3901(bLocal_319, false) + Vector(0f, -1f, -3f) };
						}
						else
						{
							vLocal_314 = { UNK_0x68F4C0EC296D3901(bLocal_319, false) + Vector(0f, 1.5f, -3f) };
						}
						if (UNK_0x5A91F08DF773C39D(UNK_0x728870EB733D12A1(), vLocal_314, 4.2f, 4f, 5f, false, true, 0))
						{
							if (!bLocal_343)
							{
								func_46();
								SYSTEM::WAIT(0);
								func_24(&uLocal_358, "CONACAU", "CONAC_FREE", 4, 0, 0, 0);
								bLocal_343 = true;
							}
						}
						else
						{
							bLocal_343 = true;
							iLocal_348++;
						}
					}
				}
			}
			break;
		case 1:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_317) && !UNK_0x437347B10A200C4B(bLocal_319, 0))
			{
				if (!UNK_0x437347B10A200C4B(bLocal_320, 0))
				{
					UNK_0xAA6B3A4292417750(bLocal_320, false, true, true, false, false, false, 0, false);
				}
				UNK_0xAA6B3A4292417750(bLocal_317, false, true, false, false, false, false, 0, false);
				UNK_0x1E9649458B15960F(bLocal_319, false);
				UNK_0xDD353D0E9C789D0E(&iLocal_357);
				if (bLocal_344)
				{
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 3000, 0, 2);
					UNK_0x75CDA8644CD3B5F5(false, 0, 0);
					UNK_0x96167B03C5A77156(false, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
				}
				else
				{
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 3000, 0, 2);
					UNK_0x75CDA8644CD3B5F5(false, 0, 0);
					UNK_0x96167B03C5A77156(false, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
				}
				UNK_0x75ABDC5F81978924(iLocal_357);
				UNK_0x78ADC381772E3D54(bLocal_317, iLocal_357);
				UNK_0xF82EA857DA10E0CD(&iLocal_357);
				UNK_0xFADC0A217229F6B5(bLocal_317, true);
				iLocal_351 = UNK_0x1C0640BA9A7327B3();
				iLocal_348++;
			}
			break;
		case 2:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
			{
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_351) > 500 && !UNK_0x405E212DDE472467(bLocal_317, 0))
				{
					iLocal_304 = 0;
					if (UNK_0xDF1306B443CD3D15(bLocal_319, 0))
					{
					}
					func_46();
					SYSTEM::WAIT(0);
					func_24(&uLocal_358, "CONACAU", "CONAC_BOOM", 4, 0, 0, 0);
					iLocal_351 = UNK_0x1C0640BA9A7327B3();
					iLocal_348++;
				}
			}
			break;
		case 3:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
			{
				if (UNK_0x5A91F08DF773C39D(bLocal_317, -464.7217f, -989.7214f, 22.4867f, 3f, 10f, 3f, false, true, 0) || (UNK_0x1C0640BA9A7327B3() - iLocal_351) > 10000)
				{
					func_24(&uLocal_358, "CONACAU", "CONAC_AAAH", 4, 0, 0, 0);
					iLocal_348++;
				}
			}
			break;
		case 4:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
			{
				if (UNK_0x5A91F08DF773C39D(bLocal_317, -472.7056f, -991.105f, 22.4867f, 3f, 30f, 3f, false, true, 0) || (UNK_0x1C0640BA9A7327B3() - iLocal_351) > 10000)
				{
					if (!UNK_0x437347B10A200C4B(bLocal_319, 0))
					{
						UNK_0x1E9649458B15960F(bLocal_319, false);
						UNK_0xDFC6BA855748EB10(bLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						UNK_0x0DC87D17DC2658DC(bLocal_319, 1, 0);
					}
					iLocal_348++;
				}
			}
			break;
		case 5:
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_351) > 3000)
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_319, 0))
				{
					UNK_0x1E9649458B15960F(bLocal_319, false);
					UNK_0xDFC6BA855748EB10(bLocal_319, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					UNK_0x0DC87D17DC2658DC(bLocal_319, 1, 0);
				}
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
				{
					UNK_0xC92DB9682A650680("RE14A_SAFE");
					if (!UNK_0x437347B10A200C4B(bLocal_320, 0))
					{
						UNK_0xAA6B3A4292417750(bLocal_320, false, false, false, false, false, false, 0, false);
					}
					UNK_0xAA6B3A4292417750(bLocal_317, false, false, false, false, false, false, 0, false);
					UNK_0x46CB381A452EF99D(bLocal_317, 1);
					UNK_0x25C5402CC10F76CD(bLocal_317, true);
					UNK_0xCDFD15389C4C424B(bLocal_317, 0);
					UNK_0x11AD11297DC58CC7(bLocal_317, false);
					UNK_0xC53F47E66DDFA561(bLocal_317, joaat("DEFAULT"));
					UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
					UNK_0xDD353D0E9C789D0E(&iLocal_357);
					UNK_0xC6EB89C59F2AF6B8(false, "re@construction", "Out_Of_Breath", 2f, -2f, -1, 0, false, 0, 0, 0);
					UNK_0x25644C31B4B6E9F3(iLocal_357, 1);
					UNK_0x75ABDC5F81978924(iLocal_357);
					UNK_0x78ADC381772E3D54(bLocal_317, iLocal_357);
					UNK_0xF82EA857DA10E0CD(&iLocal_357);
				}
				UNK_0xB5376EA942202450(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, true, 1);
				UNK_0x58C79C59A23B279F(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_532, 0, 0);
				iLocal_351 = UNK_0x1C0640BA9A7327B3();
				iLocal_348++;
			}
			break;
		case 6:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
			{
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_351) > 6400)
				{
					vVar0 = { -477.2774f, -990.0638f, 23.5497f };
					if (UNK_0xC844350D5D58C99A(UNK_0x728870EB733D12A1()))
					{
						if (UNK_0x5A91F08DF773C39D(UNK_0x728870EB733D12A1(), -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, false, true, 0))
						{
							vVar0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (UNK_0xC844350D5D58C99A(bLocal_322))
					{
						if (UNK_0x5A91F08DF773C39D(bLocal_322, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, false, true, 0))
						{
							vVar0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (UNK_0xC844350D5D58C99A(bLocal_320))
					{
						if (UNK_0x5A91F08DF773C39D(bLocal_320, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, false, true, 0))
						{
							vVar0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					UNK_0xDD353D0E9C789D0E(&iLocal_357);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 3000, 2052, 2);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
					UNK_0x0B7C52F2BC1DC8EB(false, "WORLD_HUMAN_PICNIC", vVar0, 304.8172f, 0, 1, 0);
					UNK_0x75ABDC5F81978924(iLocal_357);
					UNK_0x78ADC381772E3D54(bLocal_317, iLocal_357);
					UNK_0xF82EA857DA10E0CD(&iLocal_357);
					func_24(&uLocal_358, "CONACAU", "CONAC_THANK", 4, 0, 0, 0);
					func_53();
				}
			}
			else
			{
				func_95();
			}
			break;
	}
}

void func_53()
{
	while (!func_80())
	{
		SYSTEM::WAIT(0);
	}
	func_76(func_35(), 4, 2);
	func_57(-1, 0);
	func_54();
	iLocal_301 = 2;
}

void func_54()
{
	func_55();
}

int func_55()
{
	if (func_56(0))
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

bool func_56(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_57(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_74();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_73(iParam0))
	{
		func_72(iParam0, bParam1);
		if (!func_71(51))
		{
			func_67("RE_REWARD", 1, 0, 4000, 10000, func_70(), 0, 138, 0);
			func_66(51);
		}
		if (func_65(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_64(iParam0, bParam1) != 322)
		{
			func_59(func_64(iParam0, bParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_111626 = bParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_58(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_58(7);
			}
			else
			{
				func_58(1);
			}
		}
	}
}

void func_58(int iParam0)
{
	Global_111624 = iParam0;
}

void func_59(int iParam0, var uParam1, var uParam2)
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
		func_63((891 + iParam0), 1, -1, 1);
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
		func_60();
	}
}

void func_60()
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
		func_62(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_61() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_55();
				}
			}
		}
	}
}

int func_61()
{
	return Global_30768;
}

int func_62(int iParam0, bool bParam1)
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

int func_63(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_6();
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

int func_64(int iParam0, bool bParam1)
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
			if (bParam1 == 1)
			{
				return 281;
			}
			if (bParam1 == 2)
			{
				return 282;
			}
			break;
		case 6:
			return 265;
		case 7:
			return 218;
		case 9:
			if (bParam1 == 1)
			{
				return 271;
			}
			if (bParam1 == 2)
			{
				return 272;
			}
			if (bParam1 == 3)
			{
				return 273;
			}
			if (bParam1 == 4)
			{
				return 274;
			}
			if (bParam1 == 5)
			{
				return 275;
			}
			if (bParam1 == 6)
			{
				return 276;
			}
			if (bParam1 == 7)
			{
				return 277;
			}
			if (bParam1 == 8)
			{
				return 278;
			}
			if (bParam1 == 9)
			{
				return 279;
			}
			if (bParam1 == 10)
			{
				return 280;
			}
			break;
		case 10:
			return 219;
		case 11:
			if (bParam1 == 1)
			{
				return 246;
			}
			if (bParam1 == 2)
			{
				return 247;
			}
			if (bParam1 == 3)
			{
				return 248;
			}
			if (bParam1 == 4)
			{
				return 249;
			}
			break;
		case 12:
			return 254;
		case 13:
			if (bParam1 == 1)
			{
				return 260;
			}
			if (bParam1 == 2)
			{
				return 261;
			}
			if (bParam1 == 3)
			{
				return 262;
			}
			if (bParam1 == 4)
			{
				return 264;
			}
			break;
		case 14:
			return 283;
		case 15:
			if (bParam1 == 1)
			{
				return 224;
			}
			if (bParam1 == 2)
			{
				return 225;
			}
			break;
		case 16:
			return 252;
		case 17:
			if (bParam1 == 1)
			{
				return 244;
			}
			if (bParam1 == 2)
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
			if (bParam1 == 1)
			{
				return 221;
			}
			if (bParam1 == 2)
			{
				return 222;
			}
			break;
		case 23:
			if (bParam1 == 1)
			{
				return 213;
			}
			if (bParam1 == 2)
			{
				return 214;
			}
			break;
		case 24:
			return 242;
		case 25:
			if (bParam1 == 1)
			{
				return 267;
			}
			if (bParam1 == 2)
			{
				return 268;
			}
			if (bParam1 == 3)
			{
				return 269;
			}
			break;
		case 8:
			return 255;
		case 26:
			if (bParam1 == 1)
			{
				return 227;
			}
			if (bParam1 == 2)
			{
				return 228;
			}
			break;
		case 27:
			if (bParam1 == 1)
			{
				return 257;
			}
			if (bParam1 == 2)
			{
				return 258;
			}
			break;
		case 28:
			return 217;
		case 29:
			if (bParam1 == 1)
			{
				return 229;
			}
			if (bParam1 == 2)
			{
				return 230;
			}
			if (bParam1 == 3)
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

bool func_65(int iParam0)
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

void func_66(int iParam0)
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

void func_67(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_68(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_68(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_69();
	}
}

void func_69()
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

int func_70()
{
	func_36();
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

bool func_71(int iParam0)
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

void func_72(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), bParam1);
}

int func_73(int iParam0)
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

int func_74()
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, UNK_0xBB0808A181D4745C(), 64);
	iVar16 = func_75(Var0);
	return iVar16;
}

int func_75(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (UNK_0x12AB0310C2281427(&cParam0))
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

void func_76(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_111638.f_2358.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_111638.f_2358.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		case 3:
			iVar1 = 11511;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				case 3:
					iVar1 = 74;
					break;
				case 2:
					iVar1 = 73;
					break;
				case 4:
					iVar1 = 75;
					break;
				case 5:
					iVar1 = 76;
					break;
				case 6:
					iVar1 = 77;
					break;
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 11511)
			{
				bVar0 = func_79(iVar1, -1, 0);
				bVar0 = (bVar0 + iParam2);
				if (bVar0 > 100)
				{
					bVar0 = 100;
				}
				func_77(iVar1, bVar0, -1, 1, 0);
			}
			break;
	}
}

void func_77(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

int func_79(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_78(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_80()
{
	return true;
}

int func_81(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_82(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_82(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_83(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_83(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_83(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_83(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_84(bool bParam0)
{
	if (func_88())
	{
		Global_111628 = 1;
		Global_111625 = UNK_0x1C0640BA9A7327B3();
		if (func_65(Global_111627))
		{
			func_85(0);
		}
		UNK_0x974531784BE14213(1, "RE_TITLE");
		if (bParam0 && func_65(Global_111627))
		{
			UNK_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_86(func_87(iParam0), -1);
					Global_111638.f_24990.f_2++;
					UNK_0x5D96D8530B3D0904(&Global_111634, false);
				}
			}
			break;
		case 1:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111634, true))
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_86(func_87(iParam0), -1);
					Global_111638.f_24990.f_3++;
					UNK_0x5D96D8530B3D0904(&Global_111634, true);
				}
			}
			break;
		case 2:
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111634, 2))
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_86(func_87(iParam0), -1);
					Global_111638.f_24990.f_4++;
					UNK_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_86(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_87(int iParam0)
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

bool func_88()
{
	switch (func_89(&Global_30827, 0, 5, 0, UNK_0x0D0A574C76D769AC()))
	{
		case 1:
			return true;
		case 0:
			return true;
	}
	return false;
}

int func_89(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_93(0))
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		UNK_0x62DE699599F0417E(UNK_0xA30EC016B12C03E4(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			UNK_0x4C7B0415764B64BA(8);
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
		if (!func_91(iParam2))
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
			func_90(uParam0, iParam4);
		}
	}
	return 2;
}

void func_90(var uParam0, int iParam1)
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

bool func_91(int iParam0)
{
	return func_92(iParam0, Global_41431);
}

int func_92(int iParam0, int iParam1)
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

bool func_93(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_91(iParam0))
	{
		return false;
	}
	return true;
}

bool func_94(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (UNK_0xC8BC75555A67090D())
	{
		return false;
	}
	if (bParam0)
	{
		if (UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			return false;
		}
	}
	bVar0 = false;
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
		{
			return false;
		}
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (bParam0)
		{
			if (UNK_0x437347B10A200C4B(bVar0, 0))
			{
				return false;
			}
		}
		if (bParam2)
		{
			if (!UNK_0x437347B10A200C4B(bVar0, 0))
			{
				if (UNK_0xA30B8362589C124A(bVar0, -1, 0) != UNK_0x16F2683693E537C9())
				{
					return false;
				}
			}
		}
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0x30C0A7C378403357(bVar0) < 0.95f || UNK_0x30C0A7C378403357(bVar0) > 1.011f)
			{
				return false;
			}
		}
	}
	else if (bParam1)
	{
		return false;
	}
	if (!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (!UNK_0xD79EDC28CA84B527(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

void func_95()
{
	UNK_0xC92DB9682A650680("RE14A_FAIL");
	iLocal_301 = 2;
}

int func_96(bool bParam0, bool bParam1, bool bParam2)
{
	return func_82(bParam0, !bParam1, bParam2);
}

void func_97()
{
	if (func_100(1000))
	{
		func_46();
		UNK_0x53491B90E4FD0E56(800);
		while (UNK_0xD0BB2359EC70FC37())
		{
			SYSTEM::WAIT(0);
		}
		if (!UNK_0x437347B10A200C4B(bLocal_319, 0))
		{
			UNK_0x26E12C087E2B91F8(bLocal_319, 0f, 1f, 1f, 200f, 800f, 1);
		}
		bLocal_536 = true;
		iLocal_303 = 8;
	}
	switch (iLocal_303)
	{
		case 0:
			func_2(1, 1, 1, 0, 0, 0);
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
			UNK_0xC6436D1B1063CD1D();
			UNK_0xBFE31971E49FA500(0);
			UNK_0x8BCB70EB440DED83(0);
			UNK_0xC0FB48F966BB7D11(0);
			if (UNK_0xC844350D5D58C99A(UNK_0x728870EB733D12A1()))
			{
				UNK_0x73270B3C9CC833FD(UNK_0x728870EB733D12A1(), true, 0);
			}
			UNK_0x745CE398A4B0A3C6(vLocal_308, 50f, 0);
			UNK_0x28F5E4DA506AC0CA(vLocal_308, 30f, 0, 0, 0, 0, false, 0);
			UNK_0x679C321F8CAA2CFA(vLocal_308, 100f, 0);
			if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
			{
				if (UNK_0x5A91F08DF773C39D(UNK_0x728870EB733D12A1(), vLocal_308, 8f, 8f, 8f, false, true, 0))
				{
					bLocal_321 = UNK_0x728870EB733D12A1();
					UNK_0x73270B3C9CC833FD(bLocal_321, true, 0);
					UNK_0xA954465BA6FDEFE2(&bLocal_321);
				}
			}
			if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), -473.1686f, -984.6405f, 22.487f, 15f, 15f, 5f, false, true, 0))
			{
				UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -477.3538f, -972.67f, 22.5494f, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 237.4839f);
			}
			iLocal_530 = UNK_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, -0.1371f, -0.0346f, -29.6605f, 28f, 1, 2);
			iLocal_531 = UNK_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, 69.4831f, -0.0346f, -40.8884f, 28f, 1, 2);
			UNK_0x91F5B0244AAE6222(iLocal_530, "HAND_SHAKE", 0.3f);
			UNK_0x91F5B0244AAE6222(iLocal_531, "HAND_SHAKE", 0.3f);
			func_99();
			UNK_0xE3BB8E05FCEB3FBE(iLocal_530, true);
			UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			SYSTEM::WAIT(500);
			UNK_0xF1E4C781086FABC1(iLocal_531, iLocal_530, 3500, 1, 1);
			UNK_0xC92DB9682A650680("RE14A_START");
			iLocal_354 = UNK_0x1C0640BA9A7327B3();
			iLocal_303 = 1;
			break;
		case 1:
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_354) > 3500)
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "WEAKEN", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				UNK_0x4D7F4CC43D4D0DE3(iLocal_350, "WIND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				UNK_0x272295383B6513AB(iLocal_327[0], 1);
				func_98(iLocal_530);
				func_98(iLocal_531);
				iLocal_530 = UNK_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", -455.4617f, -990.631f, 61.6885f, -89.0761f, -0.0146f, -49.881f, 80.5355f, 1, 2);
				iLocal_531 = UNK_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", -455.4543f, -990.6208f, 61.012f, -89.0759f, -0.0146f, -47.8226f, 80.5355f, 1, 2);
				UNK_0x91F5B0244AAE6222(iLocal_530, "HAND_SHAKE", 0.3f);
				UNK_0x91F5B0244AAE6222(iLocal_531, "HAND_SHAKE", 0.3f);
				UNK_0xF1E4C781086FABC1(iLocal_531, iLocal_530, 4000, 1, 0);
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
				{
					UNK_0xA3BF0AA5A2608191(bLocal_317);
					UNK_0xDBE4EC9C88839074(bLocal_317, -461.4785f, -984.8583f, 28.0809f, 30000, 2080, 2);
				}
				if (UNK_0xC844350D5D58C99A(bLocal_340))
				{
					UNK_0x15AFB6CBDE990FB6(bLocal_340, 1, true);
					UNK_0xF690C84DADBB3551(&bLocal_340);
				}
				iLocal_354 = UNK_0x1C0640BA9A7327B3();
				iLocal_303 = 2;
			}
			break;
		case 2:
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_354) > 1500)
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "CABLE_SNAPS", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				iLocal_354 = UNK_0x1C0640BA9A7327B3();
				iLocal_303 = 3;
			}
			break;
		case 3:
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_354) > 500)
			{
				if (UNK_0xC844350D5D58C99A(iLocal_327[0]))
				{
					UNK_0x1E9649458B15960F(iLocal_327[0], false);
					UNK_0xDFC6BA855748EB10(iLocal_327[0], 0, 0f, 0f, 5f, 0f, -2f, 2f, 0, 1, 1, 1, 0, 1);
					UNK_0xCAE0593CC7FB3D42(iLocal_327[0], 11, 0);
					UNK_0xCAE0593CC7FB3D42(iLocal_327[0], 18, 0);
					UNK_0xCAE0593CC7FB3D42(iLocal_327[0], 19, 0);
					UNK_0xCAE0593CC7FB3D42(iLocal_327[0], 23, 0);
					UNK_0xCAE0593CC7FB3D42(iLocal_327[0], 9, 0);
					UNK_0xCAE0593CC7FB3D42(iLocal_327[0], 12, 0);
					UNK_0xCAE0593CC7FB3D42(iLocal_327[0], 17, 0);
					UNK_0xE81656B429E5C4B5("scr_reconstruct_pipefall_debris", iLocal_327[0], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216 /* Float: 1f */, 0, 0, 0);
				}
				iLocal_354 = UNK_0x1C0640BA9A7327B3();
				iLocal_303 = 4;
			}
			break;
		case 4:
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_354) > 2000)
			{
				func_98(iLocal_530);
				func_98(iLocal_531);
				iLocal_530 = UNK_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 25.437f, -0.0087f, -118.3831f, 34f, 1, 2);
				iLocal_531 = UNK_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 2.0695f, -0.0087f, -120.2811f, 34f, 1, 2);
				UNK_0x91F5B0244AAE6222(iLocal_530, "HAND_SHAKE", 0.3f);
				UNK_0x91F5B0244AAE6222(iLocal_531, "HAND_SHAKE", 0.3f);
				UNK_0xF1E4C781086FABC1(iLocal_531, iLocal_530, 1000, 3, 3);
				UNK_0x55D0A2DB35045A35(iLocal_350);
				iLocal_354 = UNK_0x1C0640BA9A7327B3();
				iLocal_303 = 5;
			}
			break;
		case 5:
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_354) > 500)
			{
				if (!UNK_0x437347B10A200C4B(bLocal_319, 0))
				{
					UNK_0x1E9649458B15960F(bLocal_319, false);
					UNK_0x4D7F4CC43D4D0DE3(-1, "PIPES_LAND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
					UNK_0x26E12C087E2B91F8(bLocal_319, 0f, 1f, 1f, 200f, 800f, 1);
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
					{
						UNK_0xBC43ED9FE28DB191(bLocal_317);
					}
					UNK_0xC6EB89C59F2AF6B8(bLocal_317, "re@construction", "idle_panic", 8f, -8f, -1, 16, false, 0, 0, 0);
					UNK_0xE81656B429E5C4B5("scr_reconstruct_pipe_impact", bLocal_319, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216 /* Float: 1f */, 0, 0, 0);
					func_24(&uLocal_358, "CONACAU", "CONAC_SCREAM", 4, 0, 0, 0);
					if (UNK_0x9F4FE516EAACCFC5(iLocal_530) && UNK_0x9F4FE516EAACCFC5(iLocal_531))
					{
						UNK_0x91F5B0244AAE6222(iLocal_530, "HAND_SHAKE", 1.5f);
						UNK_0x91F5B0244AAE6222(iLocal_531, "HAND_SHAKE", 1.5f);
					}
					iLocal_354 = UNK_0x1C0640BA9A7327B3();
					iLocal_303 = 6;
				}
			}
			break;
		case 6:
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_354) > 500)
			{
				func_98(iLocal_530);
				func_98(iLocal_531);
				iLocal_530 = UNK_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", -459.2609f, -987.5602f, 24.2611f, 0.583f, 0.2617f, -32.7532f, 49.9914f, 1, 2);
				iLocal_531 = UNK_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", -459.0622f, -987.2584f, 24.2661f, 5.0301f, 0.2617f, -36.7308f, 49.9914f, 1, 2);
				UNK_0x91F5B0244AAE6222(iLocal_530, "HAND_SHAKE", 0.5f);
				UNK_0x91F5B0244AAE6222(iLocal_531, "HAND_SHAKE", 0.5f);
				UNK_0xF1E4C781086FABC1(iLocal_531, iLocal_530, 2500, 3, 3);
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
				{
					UNK_0xDBE4EC9C88839074(bLocal_317, UNK_0x68F4C0EC296D3901(bLocal_317, true) - Vector(10f, 0f, 2f), 30000, 2080, 2);
				}
				iLocal_354 = UNK_0x1C0640BA9A7327B3();
				iLocal_303 = 7;
			}
			break;
		case 7:
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_354) > 2200 && !bLocal_346)
			{
				if ((UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()) && UNK_0x6C3F127AAF415E69() == 4) || (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0xF3545351E9CBB11F() == 4))
				{
					UNK_0x82A772610883F395("CamPushInNeutral", 0, 0);
					UNK_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					bLocal_346 = true;
				}
			}
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_354) > 2500)
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_319, 0))
				{
					UNK_0x1E9649458B15960F(bLocal_319, true);
				}
				iLocal_303 = 8;
			}
			break;
		case 8:
			UNK_0xC92DB9682A650680("RE14A_PIPES");
			if (UNK_0xC844350D5D58C99A(iLocal_327[0]))
			{
				UNK_0xF690C84DADBB3551(&(iLocal_327[0]));
			}
			if (UNK_0xDF1306B443CD3D15(bLocal_319, 0))
			{
				UNK_0x5DAB50E08C3C504A(bLocal_319, 250f);
				UNK_0xA47B46945FF6DE74(bLocal_319, vLocal_308, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(bLocal_319, 80f);
				UNK_0x75CFD6AD66ADFDD1(vLocal_308, 50f, 0);
			}
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
			{
				UNK_0xA3BF0AA5A2608191(bLocal_317);
				UNK_0xBC43ED9FE28DB191(bLocal_317);
				UNK_0xC6EB89C59F2AF6B8(bLocal_317, "re@construction", "idle_panic", 8f, -8f, -1, 1, false, 0, 0, 0);
			}
			UNK_0xE3BB8E05FCEB3FBE(iLocal_530, false);
			UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			UNK_0x9A8DDC7C522F5BF5(iLocal_530, 0);
			UNK_0x9A8DDC7C522F5BF5(iLocal_531, 0);
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			UNK_0x2FB9A57162E54BAB(0f);
			UNK_0xBFE31971E49FA500(1);
			UNK_0x8BCB70EB440DED83(1);
			UNK_0xC0FB48F966BB7D11(1);
			func_2(0, 1, 1, 0, 0, 0);
			iLocal_351 = UNK_0x1C0640BA9A7327B3();
			UNK_0x71199B01895C6202(joaat("PROP_PIPE_STACK_01"));
			iLocal_327[1] = UNK_0xB0BE3DFBBB59A620(joaat("PROP_LD_PIPE_SINGLE_01"), -457.8815f, -988.9059f, 22.9554f, true, true, false);
			UNK_0xC023D1C4BF532815(iLocal_327[1], -0.1939f, 105.0058f, 77.3964f, 2, 1);
			iLocal_327[2] = UNK_0xB0BE3DFBBB59A620(joaat("PROP_LD_PIPE_SINGLE_01"), -451.5131f, -986.8079f, 24.6947f, true, true, false);
			UNK_0xC023D1C4BF532815(iLocal_327[2], 24.3941f, 32.5423f, 80.6862f, 2, 1);
			iLocal_327[3] = UNK_0xB0BE3DFBBB59A620(joaat("PROP_LD_PIPE_SINGLE_01"), -450.8099f, -985.9972f, 24.7104f, true, true, false);
			UNK_0xC023D1C4BF532815(iLocal_327[3], 24.1841f, 110.287f, 78.4357f, 2, 1);
			iLocal_327[4] = UNK_0xB0BE3DFBBB59A620(joaat("PROP_LD_PIPE_SINGLE_01"), -456.6558f, -987.3979f, 22.9537f, true, true, false);
			UNK_0xC023D1C4BF532815(iLocal_327[4], -0.0264f, 29.5754f, 79.1811f, 2, 1);
			iLocal_327[5] = UNK_0xB0BE3DFBBB59A620(joaat("PROP_LD_PIPE_SINGLE_01"), -456.1279f, -988.4162f, 22.9889f, true, true, false);
			UNK_0xC023D1C4BF532815(iLocal_327[5], -0.6337f, 108.4339f, 77.9539f, 2, 1);
			iLocal_327[6] = UNK_0xB0BE3DFBBB59A620(joaat("PROP_LD_PIPE_SINGLE_01"), -457.0807f, -987.3059f, 23.7564f, true, true, false);
			UNK_0xC023D1C4BF532815(iLocal_327[6], 0.0929f, 74.2657f, 79.3839f, 2, 1);
			iLocal_327[7] = UNK_0xB0BE3DFBBB59A620(joaat("PROP_LD_PIPE_SINGLE_01"), -456.6558f, -983.7804f, 22.9712f, true, true, false);
			UNK_0xC023D1C4BF532815(iLocal_327[7], -0.0264f, 29.5754f, 80.9061f, 2, 1);
			iLocal_327[8] = UNK_0xB0BE3DFBBB59A620(joaat("PROP_LD_PIPE_SINGLE_01"), -455.3279f, -983.1712f, 22.9564f, true, true, false);
			UNK_0xC023D1C4BF532815(iLocal_327[8], -0.1087f, 109.7339f, 80.9789f, 2, 1);
			iLocal_327[9] = UNK_0xB0BE3DFBBB59A620(joaat("PROP_LD_PIPE_SINGLE_01"), -456.1632f, -983.9359f, 23.7964f, true, true, false);
			UNK_0xC023D1C4BF532815(iLocal_327[9], -0.3321f, 74.1907f, 81.6089f, 2, 1);
			iLocal_327[10] = UNK_0xB0BE3DFBBB59A620(joaat("PROP_LD_PIPE_SINGLE_01"), -454.644f, -994.1709f, 23.3329f, true, true, false);
			UNK_0xC023D1C4BF532815(iLocal_327[10], 5.7811f, 104.6058f, 104.6964f, 2, 1);
			iLocal_347 = 0;
			while (iLocal_347 < 11)
			{
				if (UNK_0xC844350D5D58C99A(iLocal_327[iLocal_347]))
				{
					UNK_0xEF190091B5B9F5EB(iLocal_327[iLocal_347], 1);
					UNK_0x1E9649458B15960F(iLocal_327[iLocal_347], true);
				}
				iLocal_347++;
			}
			if (bLocal_536)
			{
				UNK_0x82E51BCA72537B6C(800);
				while (UNK_0x7BCE0E6DD4A1F749())
				{
					SYSTEM::WAIT(0);
				}
			}
			bLocal_342 = true;
			bLocal_341 = false;
			break;
	}
}

void func_98(int iParam0)
{
	if (UNK_0x9F4FE516EAACCFC5(iParam0))
	{
		UNK_0x9A8DDC7C522F5BF5(iParam0, 0);
	}
}

void func_99()
{
	UNK_0x871665896C890C7F();
	Global_21797 = 0;
}

bool func_100(int iParam0)
{
	if (UNK_0x0F1CCD77290EE12F())
	{
		if ((UNK_0x1C0640BA9A7327B3() - Global_28) > iParam0)
		{
			Global_27 = UNK_0x1C0640BA9A7327B3();
		}
		Global_28 = UNK_0x1C0640BA9A7327B3();
		if ((UNK_0x1C0640BA9A7327B3() - Global_27) > iParam0)
		{
			if (func_101())
			{
				Global_27 = UNK_0x1C0640BA9A7327B3();
				return true;
			}
		}
	}
	return false;
}

bool func_101()
{
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (UNK_0xBFC0798A6E3417F9(0, 18) || UNK_0xBFC0798A6E3417F9(2, 18))
	{
		return true;
	}
	return false;
}

int func_102(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_21798 = 1;
	Global_21802 = 0;
	Global_21800 = iParam7;
	Global_2621441 = 0;
	return func_25(sParam2, iParam3, 0);
}

void func_103(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_104(var uParam0)
{
	int iVar0;

	if (!uParam0->f_31)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 29))
			{
				return false;
			}
			if (!func_105(uParam0[iVar0 /*2*/]))
			{
				return false;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return true;
}

bool func_105(var uParam0)
{
	return func_106(*uParam0, "NULL", uParam0->f_1);
}

bool func_106(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEAE0D21A50E6C7F4(bParam0, 30))
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam0, 29))
		{
			switch (func_107(bParam0))
			{
				case 0:
					return UNK_0xB87F6CF6E5628C67(bParam2);
				case 1:
					return UNK_0xB4AE0788C1587752(bParam1);
				case 2:
					return UNK_0x59F02DA2266A744C(bParam1);
				case 3:
					return UNK_0x27117E2CDD4D67C3(bParam1);
				case 4:
					return UNK_0x3DDA6C6A285628E4(bParam2, bParam1);
				case 5:
					return UNK_0x1C2E18E9C63BEB77(bParam1);
				case 6:
					return UNK_0xAE317D00A5A55DF6(bParam1, UNK_0xEAE0D21A50E6C7F4(bParam0, 27), -1);
				case 7:
					return UNK_0x64EF15C5E09BAD76(bParam2);
				case 8:
					return UNK_0x67C1D9E5B91B2E37(bParam2);
				case 9:
					return UNK_0x25F7A4D42AF2AB93();
				default:
					break;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_107(bool bParam0)
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 < 10)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_108(var uParam0)
{
	func_109(uParam0, 9, -1, 0);
}

void func_109(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_110(bParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 30))
		{
			if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			UNK_0x5D96D8530B3D0904(uParam0[iVar0 /*2*/], bParam1);
			UNK_0x5D96D8530B3D0904(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

bool func_110(bool bParam0)
{
	switch (bParam0)
	{
		case -1:
			return false;
		case 0:
			return true;
		case 1:
			return false;
		case 2:
			return false;
		case 3:
			return false;
		case 4:
			return false;
		case 5:
			return false;
		case 6:
			return false;
		case 7:
			return true;
		case 8:
			return false;
		case 9:
			return true;
	}
	return false;
}

void func_111(var uParam0, int iParam1)
{
	func_109(uParam0, 0, iParam1, 0);
}

void func_112(var uParam0)
{
	int iVar0;

	if (uParam0->f_31)
	{
		if ((UNK_0xF4CCC8CB6DE7F1AE() >= (uParam0->f_32 + uParam0->f_33) || UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 2)) || UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 29))
					{
						func_113(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = UNK_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_113(bool bParam0)
{
	func_114(bParam0, "NULL", bParam0->f_1);
}

void func_114(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 30))
	{
		switch (func_107(*bParam0))
		{
			case 0:
				UNK_0x523BCC9DC80CD82F(bParam2);
				break;
			case 1:
				UNK_0x3F423BF5B8125A50(bParam1);
				break;
			case 2:
				UNK_0x4E09E67A27F104A7(bParam1);
				break;
			case 3:
				UNK_0x0D3BE1DE0262A012(bParam1, UNK_0xEAE0D21A50E6C7F4(*bParam0, 28));
				break;
			case 4:
				UNK_0x36187931D29E5BBE(bParam2, bParam1);
				break;
			case 5:
				UNK_0x29398344B9E5B8A7(bParam1);
				break;
			case 6:
				UNK_0xAE317D00A5A55DF6(bParam1, UNK_0xEAE0D21A50E6C7F4(*bParam0, 27), -1);
				break;
			case 7:
				UNK_0x8CFFBE74CB5C864A(bParam2);
				break;
			case 8:
				UNK_0xD7992BEF7A9D109E(bParam1, bParam2);
				break;
			case 9:
				UNK_0x9E5E60D8C63FD9D1();
				break;
			default:
				break;
		}
		UNK_0x5D96D8530B3D0904(bParam0, 29);
	}
}

void func_115()
{
	int iVar0;

	func_111(&Local_537, joaat("BULLDOZER"));
	func_111(&Local_537, joaat("UTILLITRUCK2"));
	func_111(&Local_537, joaat("PROP_PIPE_STACK_01"));
	if (func_104(&Local_537))
	{
		UNK_0xAB8E2DDC7AF955E0(joaat("UTILLITRUCK2"), true);
		UNK_0x51B096AAC60548C1(0.1f);
		UNK_0x15EA7F4313456B1D(3, false);
		UNK_0x7D6CA5F52B3748BF(vLocal_305 + Vector(50f, 50f, 50f), vLocal_305 - Vector(50f, 50f, 50f), 0, 1, 1, 1);
		vLocal_308 = { -455.6561f, -985.8071f, 22.4868f };
		bLocal_319 = UNK_0x122AAB0B1D6F55AD(joaat("UTILLITRUCK2"), vLocal_308, 80f, true, true, false);
		UNK_0x56FDC9ADE35F7DB0(bLocal_319, false, true, 0);
		UNK_0x71EDC33E5A423750(bLocal_319, 3);
		UNK_0xD3421E391490133B(bLocal_319, true, true);
		UNK_0xD3421E391490133B(bLocal_319, 2, true);
		UNK_0xD3421E391490133B(bLocal_319, 3, false);
		UNK_0xD3421E391490133B(bLocal_319, 4, true);
		UNK_0xD3421E391490133B(bLocal_319, 5, true);
		UNK_0xD3421E391490133B(bLocal_319, 6, false);
		UNK_0xD3421E391490133B(bLocal_319, 7, true);
		UNK_0x1E9649458B15960F(bLocal_319, true);
		UNK_0xAA6B3A4292417750(bLocal_319, false, false, false, true, false, false, 0, false);
		UNK_0x25BD67336EA4AECE(bLocal_319, 10000);
		UNK_0xF8CF67C6E39C23A9(bLocal_319, 5f);
		bLocal_320 = UNK_0x122AAB0B1D6F55AD(joaat("BULLDOZER"), -472.9444f, -966.671f, 22.5534f, 181.8365f, true, true, false);
		UNK_0x536F1BE96C726C4B(vLocal_308, 10f, 1, 0, 0, false);
		iLocal_327[0] = UNK_0xB0BE3DFBBB59A620(joaat("PROP_PIPE_STACK_01"), -453.2f, -986.1f, 59.45f, true, true, false);
		UNK_0xD8F6A53F4799FAFE(iLocal_327[0], 90f);
		UNK_0x1E9649458B15960F(iLocal_327[0], true);
		UNK_0xAA6B3A4292417750(iLocal_327[0], true, true, true, true, false, false, 0, false);
		UNK_0x25BD67336EA4AECE(iLocal_327[0], 10000000);
		Local_229[0 /*5*/] = { vLocal_526 };
		Local_229[1 /*5*/] = { vLocal_526 + Vector(0f, 0.5f, 0f) };
		Local_229[2 /*5*/] = { vLocal_526 + Vector(0f, 1f, 0f) };
		Local_229[3 /*5*/] = { vLocal_526 + Vector(0f, 2.5f, 0f) };
		Local_229[4 /*5*/] = { vLocal_526 + Vector(0f, 3f, 0f) };
		Local_229[5 /*5*/] = { vLocal_526 + Vector(0f, 3.5f, 0f) };
		Local_229[6 /*5*/] = { vLocal_526 + Vector(0f, 4f, 0f) };
		Local_229[7 /*5*/] = { vLocal_526 + Vector(0f, 4.5f, 0f) };
		Local_229[8 /*5*/] = { vLocal_526 + Vector(0f, 5f, 0f) };
		Local_229[9 /*5*/] = { vLocal_526 + Vector(0f, 5.5f, 0f) };
		Local_229[10 /*5*/] = { vLocal_526 + Vector(0f, 6f, 0f) };
		Local_229[11 /*5*/] = { vLocal_526 + Vector(0f, 6.5f, 0f) };
		Local_229[12 /*5*/] = { vLocal_526 + Vector(0f, 7f, 0f) };
		Local_229[13 /*5*/] = { vLocal_523 };
		iVar0 = 0;
		while (iVar0 < Local_229)
		{
			Local_229[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_326))
		{
		}
		func_116(&Local_537, 0);
		bLocal_534 = true;
		iLocal_301 = 1;
	}
}

void func_116(var uParam0, bool bParam1)
{
	int iVar0;

	if (!bParam1)
	{
		func_118(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_117(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_117(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_118(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 30))
		{
			func_119(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_119(var uParam0)
{
	func_120(*uParam0, "NULL", uParam0->f_1);
}

void func_120(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEAE0D21A50E6C7F4(bParam0, 30))
	{
		switch (func_107(bParam0))
		{
			case 0:
				UNK_0x71199B01895C6202(bParam2);
				break;
			case 1:
				UNK_0x8D17794CE3273D70(bParam1);
				break;
			case 2:
				UNK_0x413168EF79E35C7B(bParam1);
				break;
			case 3:
				UNK_0xF5A41F3D3B38EFE3(bParam1);
				break;
			case 4:
				UNK_0xDB8844D4B7C60440(bParam2, bParam1);
				break;
			case 5:
				UNK_0x2F3540C2227116A3(bParam1);
				break;
			case 6:
				UNK_0x8C26F31DFF77D124();
				break;
			case 7:
				UNK_0xB60B60856BF98DCE(bParam2);
				break;
			case 8:
				UNK_0x11CCD0ACA866C6C5(bParam2, UNK_0xEAE0D21A50E6C7F4(bParam0, 26));
				break;
			case 9:
				UNK_0x29D7581AEF4440C2();
				break;
			default:
				break;
		}
	}
}

bool func_121()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_43) < (75f * 75f))
		{
			return true;
		}
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_132())
		{
			return false;
		}
	}
	if (func_128())
	{
		return true;
	}
	if (func_122(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_122(float fParam0, bool bParam1)
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
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (func_37(func_35()))
		{
			iVar36 = func_70();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 2) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 3))
				{
					func_123(iVar32, &Var0);
					fVar35 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), Var0.f_6, 1);
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

void func_123(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_124(uParam1, "Abigail1", func_126(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_125(iParam0), 1, 0);
			break;
		case 1:
			func_124(uParam1, "Abigail2", func_126(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_125(iParam0), 1, 0);
			break;
		case 2:
			func_124(uParam1, "Barry1", func_126(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_125(iParam0), 1, 0);
			break;
		case 3:
			func_124(uParam1, "Barry2", func_126(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_125(iParam0), 1, 1);
			break;
		case 4:
			func_124(uParam1, "Barry3", func_126(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		case 5:
			func_124(uParam1, "Barry3A", func_126(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 6:
			func_124(uParam1, "Barry3C", func_126(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 7:
			func_124(uParam1, "Barry4", func_126(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_125(iParam0), 0, 0);
			break;
		case 8:
			func_124(uParam1, "Dreyfuss1", func_126(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		case 9:
			func_124(uParam1, "Epsilon1", func_126(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_125(iParam0), 0, 0);
			break;
		case 10:
			func_124(uParam1, "Epsilon2", func_126(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_125(iParam0), 1, 0);
			break;
		case 11:
			func_124(uParam1, "Epsilon3", func_126(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_125(iParam0), 0, 0);
			break;
		case 12:
			func_124(uParam1, "Epsilon4", func_126(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_125(iParam0), 0, 0);
			break;
		case 13:
			func_124(uParam1, "Epsilon5", func_126(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_125(iParam0), 1, 0);
			break;
		case 14:
			func_124(uParam1, "Epsilon6", func_126(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 15:
			func_124(uParam1, "Epsilon7", func_126(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_125(iParam0), 0, 0);
			break;
		case 16:
			func_124(uParam1, "Epsilon8", func_126(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_125(iParam0), 1, 0);
			break;
		case 17:
			func_124(uParam1, "Extreme1", func_126(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 18:
			func_124(uParam1, "Extreme2", func_126(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 19:
			func_124(uParam1, "Extreme3", func_126(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 20:
			func_124(uParam1, "Extreme4", func_126(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		case 21:
			func_124(uParam1, "Fanatic1", func_126(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_125(iParam0), 1, 0);
			break;
		case 22:
			func_124(uParam1, "Fanatic2", func_126(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_125(iParam0), 1, 0);
			break;
		case 23:
			func_124(uParam1, "Fanatic3", func_126(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_125(iParam0), 0, 1);
			break;
		case 24:
			func_124(uParam1, "Hao1", func_126(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_125(iParam0), 0, 1);
			break;
		case 25:
			func_124(uParam1, "Hunting1", func_126(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 26:
			func_124(uParam1, "Hunting2", func_126(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 27:
			func_124(uParam1, "Josh1", func_126(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_125(iParam0), 1, 0);
			break;
		case 28:
			func_124(uParam1, "Josh2", func_126(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_125(iParam0), 1, 1);
			break;
		case 29:
			func_124(uParam1, "Josh3", func_126(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_125(iParam0), 1, 1);
			break;
		case 30:
			func_124(uParam1, "Josh4", func_126(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_125(iParam0), 1, 0);
			break;
		case 31:
			func_124(uParam1, "Maude1", func_126(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 32:
			func_124(uParam1, "Minute1", func_126(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 33:
			func_124(uParam1, "Minute2", func_126(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 34:
			func_124(uParam1, "Minute3", func_126(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 35:
			func_124(uParam1, "MrsPhilips1", func_126(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_125(iParam0), 0, 0);
			break;
		case 36:
			func_124(uParam1, "MrsPhilips2", func_126(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_125(iParam0), 0, 0);
			break;
		case 37:
			func_124(uParam1, "Nigel1", func_126(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_125(iParam0), 1, 0);
			break;
		case 38:
			func_124(uParam1, "Nigel1A", func_126(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_125(iParam0), 1, 1);
			break;
		case 39:
			func_124(uParam1, "Nigel1B", func_126(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_125(iParam0), 1, 1);
			break;
		case 40:
			func_124(uParam1, "Nigel1C", func_126(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_125(iParam0), 1, 1);
			break;
		case 41:
			func_124(uParam1, "Nigel1D", func_126(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_125(iParam0), 1, 1);
			break;
		case 42:
			func_124(uParam1, "Nigel2", func_126(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_125(iParam0), 1, 1);
			break;
		case 43:
			func_124(uParam1, "Nigel3", func_126(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_125(iParam0), 1, 1);
			break;
		case 44:
			func_124(uParam1, "Omega1", func_126(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		case 45:
			func_124(uParam1, "Omega2", func_126(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		case 46:
			func_124(uParam1, "Paparazzo1", func_126(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 47:
			func_124(uParam1, "Paparazzo2", func_126(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 48:
			func_124(uParam1, "Paparazzo3", func_126(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		case 49:
			func_124(uParam1, "Paparazzo3A", func_126(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 50:
			func_124(uParam1, "Paparazzo3B", func_126(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 51:
			func_124(uParam1, "Paparazzo4", func_126(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		case 52:
			func_124(uParam1, "Rampage1", func_126(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_125(iParam0), 0, 0);
			break;
		case 54:
			func_124(uParam1, "Rampage3", func_126(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_125(iParam0), 1, 0);
			break;
		case 55:
			func_124(uParam1, "Rampage4", func_126(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_125(iParam0), 1, 0);
			break;
		case 56:
			func_124(uParam1, "Rampage5", func_126(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_125(iParam0), 0, 0);
			break;
		case 53:
			func_124(uParam1, "Rampage2", func_126(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_125(iParam0), 1, 0);
			break;
		case 57:
			func_124(uParam1, "TheLastOne", func_126(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 58:
			func_124(uParam1, "Tonya1", func_126(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 59:
			func_124(uParam1, "Tonya2", func_126(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 60:
			func_124(uParam1, "Tonya3", func_126(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 61:
			func_124(uParam1, "Tonya4", func_126(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		case 62:
			func_124(uParam1, "Tonya5", func_126(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_124(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
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

int func_125(int iParam0)
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

struct<2> func_126(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_127(iParam0) };
	if (UNK_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_127(int iParam0)
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

bool func_128()
{
	if (func_131() && !func_132())
	{
		return true;
	}
	if (func_130() && func_129())
	{
		return true;
	}
	return false;
}

bool func_129()
{
	return Global_111356 > 0;
}

bool func_130()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_131()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_132()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (UNK_0xBA19B87E031E2390() == 1f)
		{
			return true;
		}
	}
	return false;
}

bool func_133()
{
	if (!func_91(5))
	{
		return true;
	}
	if (func_128())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_132())
		{
			return false;
		}
	}
	if (func_122(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_134()
{
	if ((Global_111627 == func_74() && UNK_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return true;
	}
	return false;
}

void func_135(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_74();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_137(iParam0);
	UNK_0x24D1A8A556F3252A(0);
	UNK_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_136();
}

void func_136()
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			UNK_0xAB8E2DDC7AF955E0(UNK_0x134B62B726CEC8E6(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)), true);
		}
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, false);
	}
}

void func_137(int iParam0)
{
	Global_111627 = iParam0;
}

bool func_138(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	bool bVar8;

	if (!Global_150217)
	{
		return false;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_74();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_179())
		{
			return false;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_132())
			{
				return false;
			}
		}
		if (!Global_111638.f_9080)
		{
			return false;
		}
		if (func_56(0))
		{
			return false;
		}
		if (func_128())
		{
			return false;
		}
		if (func_178())
		{
			return false;
		}
		if (Global_111627 != -1)
		{
			return false;
		}
		if (func_37(func_35()))
		{
			if (func_122(100f, 1) != -1)
			{
				return false;
			}
		}
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !bParam6)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return false;
			}
		}
		if (!func_177(iParam3))
		{
			return false;
		}
		if (func_37(func_35()))
		{
			if (func_176(func_35()) == 4 || func_176(func_35()) == 5)
			{
				return false;
			}
		}
		if (func_37(func_35()))
		{
			if (!func_175(iParam3, bParam4, 145))
			{
				return false;
			}
		}
		if (!func_174(Global_111638.f_24990.f_43[iParam3]))
		{
			return false;
		}
		if ((UNK_0x1C0640BA9A7327B3() - Global_111629) < 150000)
		{
			if (iParam3 != 30)
			{
				return false;
			}
		}
		if (func_173())
		{
			return false;
		}
		if (UNK_0x2C1AA3A291786CDC())
		{
			return false;
		}
		if (UNK_0xD4A2BF1975E2C50F())
		{
			return false;
		}
		if (!func_164(4))
		{
			return false;
		}
		if (!func_91(5))
		{
			return false;
		}
		if (func_163(iParam3, bParam4) && !bParam5)
		{
			return false;
		}
		if (Global_3 && iParam3 != 10)
		{
			return false;
		}
		if (UNK_0x31609A585163CBAC(UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9())))
		{
			if ((UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == UNK_0xFBD08BECC9B87937(377.153f, -717.567f, 10.0536f) || UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == UNK_0xFBD08BECC9B87937(320.9934f, 265.2515f, 82.1221f)) || UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == UNK_0xFBD08BECC9B87937(-1425.564f, -244.3f, 15.8053f))
			{
				return false;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_163(0, 0))
		{
			return false;
		}
		if (Global_30914)
		{
			return false;
		}
		if (func_177(30) && !func_163(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_37(func_35()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4 /*3*/] };
				bVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_162(bVar8))
				{
					if (func_140(iVar4))
					{
						if (!func_139(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_35() != iVar4)
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

bool func_139(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_140(int iParam0)
{
	bool bVar0;

	bVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_141(bVar0);
}

int func_141(bool bParam0)
{
	return func_142(bParam0, 1);
}

int func_142(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_162(bParam0))
	{
		return 0;
	}
	func_143(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_143(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_144(func_155(), bParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_144(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_154(bParam0, bParam1))
	{
		iVar0 = func_153(bParam1);
		iVar1 = func_151(bParam0);
		iVar2 = (func_151(bParam0) - func_151(bParam1));
		iVar3 = (func_153(bParam0) - func_153(bParam1));
		iVar4 = (func_150(bParam0) - func_150(bParam1));
		iVar5 = (func_149(bParam0) - func_149(bParam1));
		iVar6 = (func_148(bParam0) - func_148(bParam1));
		iVar7 = (func_147(bParam0) - func_147(bParam1));
	}
	else
	{
		iVar0 = func_153(bParam0);
		iVar1 = func_151(bParam1);
		iVar2 = (func_151(bParam1) - func_151(bParam0));
		iVar3 = (func_153(bParam1) - func_153(bParam0));
		iVar4 = (func_150(bParam1) - func_150(bParam0));
		iVar5 = (func_149(bParam1) - func_149(bParam0));
		iVar6 = (func_148(bParam1) - func_148(bParam0));
		iVar7 = (func_147(bParam1) - func_147(bParam0));
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
		iVar4 = (iVar4 + func_146(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_145(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_145(float fParam0, float fParam1, float fParam2)
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

int func_146(bool bParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (bParam0)
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

int func_147(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_148(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_149(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_150(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

int func_151(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_152(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_152(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_153(bool bParam0)
{
	return (bParam0 && 15);
}

bool func_154(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_162(bParam1) || !func_162(bParam0))
	{
		return true;
	}
	bVar0 = func_151(bParam0);
	bVar1 = func_151(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_153(bParam0);
	bVar1 = func_153(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_150(bParam0);
	bVar1 = func_150(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_149(bParam0);
	bVar1 = func_149(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_148(bParam0);
	bVar1 = func_148(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_147(bParam0);
	bVar1 = func_147(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

bool func_155()
{
	var uVar0;

	func_161(&uVar0, UNK_0x4460E481B9E33ADA());
	func_160(&uVar0, UNK_0x8D199E381D262EEF());
	func_159(&uVar0, UNK_0xD8A54335F18763BA());
	func_158(&uVar0, UNK_0x972A296334C9D57B());
	func_157(&uVar0, UNK_0x118229AD063C3C1D());
	func_156(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_156(bool bParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*bParam0 |= -2147483648;
	}
	else
	{
		*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*bParam0 = (*bParam0 - *bParam0 & -2147483648);
	}
}

void func_157(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_158(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_153(*bParam0);
	iVar1 = func_151(*bParam0);
	if (iParam1 < 1 || iParam1 > func_146(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_159(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_160(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_161(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_162(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	if (bParam0 == -15)
	{
		return false;
	}
	iVar0 = func_147(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_148(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_149(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_151(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_153(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_150(bParam0);
	if (iVar5 < 1 || iVar5 > func_146(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_163(int iParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], bParam1))
	{
		return true;
	}
	return false;
}

bool func_164(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_35();
				if (!func_37(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_172()) || Global_110685) || Global_30770) || func_171()) || func_43(8, -1)) || func_170()) || func_169()) || func_168()) || func_167()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_172()) || Global_30770) || func_171()) || func_43(8, -1)) || func_168()) || func_170()) || func_169()) || func_167()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_172()) || Global_110685) || Global_30770) || func_171()) || func_43(8, -1)) || func_168()) || func_170()) || func_169()) || func_167()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_172()) || Global_110685) || Global_30770) || func_171()) || func_43(8, -1)) || func_170()) || func_169()) || func_167()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_172() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_43(8, -1)) || func_167()) || func_166()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_43(8, -1) || func_170()) || func_169()) || func_166()) || func_165())
						{
							return false;
						}
						if ((UNK_0x991B1F0980C62628() && UNK_0x19EC8D83154D7CC1() != 3) && UNK_0x00A15D69BCAA5267() < 8)
						{
							return false;
						}
						break;
					case 6:
						if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
						{
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_172()) || Global_30770) || func_171()) || func_43(8, -1)) || func_169()) || func_168()) || func_167()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_172()) || func_169()) || Global_110685) || Global_30770) || func_171()) || Global_42596) || func_43(8, -1)) || func_168()) || func_166()) || func_167()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_172()) || Global_110685) || Global_30770) || func_171()) || func_43(8, -1)) || func_168()) || func_166()) || func_170()) || func_169()) || func_167())
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

bool func_165()
{
	return Global_98783.f_1;
}

bool func_166()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_167()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_168()
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

bool func_169()
{
	return Global_98796.f_346 > 0;
}

bool func_170()
{
	return Global_98796.f_345 > 0;
}

bool func_171()
{
	return Global_1312877;
}

bool func_172()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_173()
{
	func_34();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

bool func_174(bool bParam0)
{
	return func_154(func_155(), bParam0);
}

bool func_175(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_35();
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
				if (bParam1 == 2)
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
			if (bParam1 == 2 || iVar1 != 2)
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

int func_176(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_177(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_179())
		{
			return false;
		}
	}
	bVar0 = iParam0;
	if (bVar0 < 31)
	{
		bVar1 = UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990, bVar0);
	}
	else
	{
		bVar0 = (bVar0 - 31);
		bVar1 = UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_1, bVar0);
	}
	return bVar1;
}

bool func_178()
{
	bool bVar0;

	if (Global_30918)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0xA30B8362589C124A(bVar0, false, 0)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_179()
{
	bool bVar0;

	if (UNK_0x61D9362D70D2DD56())
	{
		if (UNK_0x999A3BFD3E9B5D2C())
		{
			if (UNK_0x5CD8D2FE4603C900())
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &bVar0, -1);
				UNK_0x5D96D8530B3D0904(&bVar0, 2);
				UNK_0x5D96D8530B3D0904(&bVar0, 4);
				UNK_0x5D96D8530B3D0904(&bVar0, 6);
				UNK_0x5D96D8530B3D0904(&Global_25, 2);
				UNK_0x5D96D8530B3D0904(&Global_25, 4);
				UNK_0x5D96D8530B3D0904(&Global_25, 6);
				UNK_0xCDC520E5E48E63D9(joaat("SP_UNLOCK_EXCLUS_CONTENT"), bVar0, 1);
				if (UNK_0xE0DC536BD2AC0301())
				{
					bVar0 = UNK_0x0A4C9A3D51EAE31F(866);
					UNK_0x5D96D8530B3D0904(&bVar0, false);
					UNK_0x9F2BE984EBF8A0F4(bVar0);
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
	if (UNK_0xE0DC536BD2AC0301())
	{
		if (UNK_0xEAE0D21A50E6C7F4(UNK_0x0A4C9A3D51EAE31F(866), false))
		{
			return true;
		}
	}
	return false;
}

void func_180()
{
	if (bLocal_534)
	{
		if (!bLocal_535)
		{
			UNK_0xC92DB9682A650680("RE14A_FAIL");
			func_216();
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_317))
			{
				UNK_0x4E885A246A9D983A(bLocal_317, 317, true);
			}
			if (!UNK_0x437347B10A200C4B(bLocal_322, 0))
			{
				if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_322, 0) && !UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_322, 50f, 50f, 50f, 0, 1, 0))
				{
					func_192(bLocal_322, 0, 145);
				}
			}
			iLocal_347 = 0;
			while (iLocal_347 < 11)
			{
				if (UNK_0xC844350D5D58C99A(iLocal_327[iLocal_347]))
				{
					UNK_0x1E9649458B15960F(iLocal_327[iLocal_347], false);
				}
				iLocal_347++;
			}
			if (!UNK_0x437347B10A200C4B(bLocal_319, 0))
			{
				UNK_0x5DAB50E08C3C504A(bLocal_319, 0f);
				UNK_0x1E9649458B15960F(bLocal_319, false);
			}
			if (UNK_0xC844350D5D58C99A(bLocal_339))
			{
				UNK_0x1E9649458B15960F(bLocal_339, false);
			}
			UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			UNK_0xBFE31971E49FA500(1);
			UNK_0x8BCB70EB440DED83(1);
			func_2(0, 1, 1, 0, 0, 0);
			bLocal_342 = true;
			UNK_0x9A82EEAF6CA12AEE(1f);
			UNK_0x8D17794CE3273D70("re@construction");
			if (UNK_0x9F4FE516EAACCFC5(iLocal_529))
			{
				UNK_0x9A8DDC7C522F5BF5(iLocal_529, 0);
				UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				UNK_0x2FB9A57162E54BAB(0f);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
				UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
			}
			if (UNK_0xE4EDC4B0E92C078B(iLocal_323))
			{
				UNK_0x142CC44DB769B57E(&iLocal_323);
			}
			if (UNK_0xE4EDC4B0E92C078B(iLocal_324))
			{
				UNK_0x142CC44DB769B57E(&iLocal_324);
			}
			if (UNK_0xE4EDC4B0E92C078B(iLocal_325))
			{
				UNK_0x142CC44DB769B57E(&iLocal_325);
			}
			if (UNK_0xE4EDC4B0E92C078B(iLocal_326))
			{
				UNK_0x142CC44DB769B57E(&iLocal_326);
			}
		}
		UNK_0x842F1AEB2FCC00B7(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 1);
		UNK_0x51B096AAC60548C1(1f);
		UNK_0x15EA7F4313456B1D(3, true);
		UNK_0x905518B0A8B0C6B1();
		UNK_0xB547E3FFEB27073E();
	}
	func_116(&Local_537, 0);
	func_181(-1);
	UNK_0x10FAF14A60A0DBE1();
}

void func_181(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = func_74();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_134())
	{
		func_185(iParam0);
		UNK_0x974531784BE14213(0, 0);
		Global_111629 = UNK_0x1C0640BA9A7327B3();
		func_184(30000);
		StringCopy(&cVar0, func_183(Global_111627, 1), 64);
		if (func_73(Global_111627) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111626, 64);
		}
		UNK_0xCDD9EADCF57830A9(&cVar0, Global_111624, (UNK_0x1C0640BA9A7327B3() - Global_111625), 0);
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111634, false) && Global_111638.f_24990.f_2 < 3)
	{
		UNK_0x0674E58A79778E99(&Global_111634, false);
	}
	func_182(&Global_30827);
	Global_111628 = 0;
	func_137(-1);
}

void func_182(var uParam0)
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

char* func_183(int iParam0, bool bParam1)
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

void func_184(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_185(int iParam0)
{
	func_186(iParam0, 0, func_191(iParam0));
}

void func_186(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<16> Var1;

	bVar0 = func_155();
	func_189(&bVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_188(iParam0, &bVar0);
	Var1 = { func_187(&bVar0) };
}

struct<16> func_187(bool bParam0)
{
	struct<16> Var0;
	bool bVar16;

	StringCopy(&Var0, "", 64);
	bVar16 = func_149(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_148(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_147(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "  ", 64);
	bVar16 = func_150(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "/", 64);
	bVar16 = func_153(*bParam0);
	if (bVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_151(*bParam0), 64);
	return Var0;
}

void func_188(int iParam0, bool bParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *bParam1;
}

void func_189(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_151(*bParam0);
	bVar1 = func_153(*bParam0);
	iVar2 = func_150(*bParam0);
	iVar3 = func_149(*bParam0);
	iVar4 = func_148(*bParam0);
	iVar5 = func_147(*bParam0);
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
	iVar6 = func_146(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_146(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_190(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_190(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_161(bParam0, iParam1);
	func_160(bParam0, iParam2);
	func_159(bParam0, iParam3);
	func_157(bParam0, bParam5);
	func_158(bParam0, iParam4);
	func_156(bParam0, iParam6);
}

int func_191(int iParam0)
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

int func_192(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;
	bool bVar1;

	if (iParam1 == 0)
	{
		bVar1 = UNK_0xA712FAE854841798(bParam0, &uVar0);
		if (!UNK_0xEA6BC48857E0AC4C(bVar1))
		{
			if (UNK_0x12AB0310C2281427(bVar1) == UNK_0x12AB0310C2281427("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_193(bParam0, iParam2);
	return 1;
}

void func_193(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_199(bParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		bVar0 = UNK_0xA30B8362589C124A(bParam0, -1, 0);
		if (!UNK_0xC844350D5D58C99A(bVar0))
		{
			bVar0 = UNK_0xB0326EA5AFB4EFA7(bParam0, -1);
		}
		if (UNK_0xC844350D5D58C99A(bVar0) && !UNK_0xEB6A8945D1AC98A1(bVar0))
		{
			if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_ZERO"))
			{
				iParam1 = 0;
			}
			else if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_ONE"))
			{
				iParam1 = 1;
			}
			else if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_TWO"))
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
			if (UNK_0x134B62B726CEC8E6(bParam0) == Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!UNK_0xEA6BC48857E0AC4C(&(Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (UNK_0x7F8A39872A07D2CE(UNK_0x7888A5D2621AAF2D(bParam0), &(Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
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
		if (UNK_0x134B62B726CEC8E6(bParam0) == Global_111638.f_32744.f_5600[iVar1 /*78*/].f_66)
		{
			if (!UNK_0xEA6BC48857E0AC4C(&(Global_111638.f_32744.f_5600[iVar1 /*78*/].f_1)))
			{
				if (UNK_0x7F8A39872A07D2CE(UNK_0x7888A5D2621AAF2D(bParam0), &(Global_111638.f_32744.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111638.f_32744.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111638.f_32744.f_5590 = iParam1;
	Global_76346 = bParam0;
	Global_111638.f_32744.f_5588 = 1;
	func_194(bParam0, &(Global_111638.f_32744.f_5510));
}

void func_194(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_198(uParam1);
		uParam1->f_66 = UNK_0x134B62B726CEC8E6(bParam0);
		StringCopy(&(uParam1->f_1), UNK_0x7888A5D2621AAF2D(bParam0), 16);
		*uParam1 = UNK_0x4EB64970EC291A00(bParam0);
		UNK_0x9412F17E127D9759(bParam0, &(uParam1->f_5), &(uParam1->f_6));
		UNK_0xD00EA977553939A7(bParam0, &(uParam1->f_7), &(uParam1->f_8));
		UNK_0x4D842A28A29F18F6(bParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = UNK_0x214BEAD64D777E8F(bParam0);
		uParam1->f_67 = UNK_0xF22DC2D0CA24A151(bParam0);
		uParam1->f_69 = UNK_0x8EF9B42D5496EC5A(bParam0);
		uParam1->f_70 = UNK_0x9C7B8DC16535B879(bParam0);
		UNK_0xCCBAB59EE36FFC71(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		UNK_0xE04A80C505823410(bParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (UNK_0x812A93B166D97C60(bParam0, 2))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 28);
		}
		if (UNK_0x812A93B166D97C60(bParam0, 3))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 29);
		}
		if (UNK_0x812A93B166D97C60(bParam0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 30);
		}
		if (UNK_0x812A93B166D97C60(bParam0, 1))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_197(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (UNK_0x587993B327460A82(bParam0, 0))
		{
			uParam1->f_68 = UNK_0x74A7D92E3874B5C7(bParam0);
		}
		if (UNK_0xC41A9202669A24C4(uParam1->f_66))
		{
			if (UNK_0x20D5F312838C1136(bParam0))
			{
				switch (UNK_0x38E830634323E0D5(bParam0))
				{
					case 3:
					case 0:
						UNK_0x0674E58A79778E99(&(uParam1->f_77), 23);
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 22);
						break;
					case 4:
					case 1:
						UNK_0x0674E58A79778E99(&(uParam1->f_77), 23);
						UNK_0x0674E58A79778E99(&(uParam1->f_77), 22);
						break;
					case 5:
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 23);
			}
		}
		if (!UNK_0x616632A7E7824A9A(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 9);
		}
		if (UNK_0xF566283DA9533594(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 10);
		}
		if (UNK_0xC97B0E5C744424FD(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 13);
			UNK_0x3139754D4D5C3AC3(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (UNK_0xE23BB5249C074C85(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 12);
		}
		func_196(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_195(iVar0 + 1));
			}
			iVar0++;
		}
		if (UNK_0x92C2290AA46758D3(bParam0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 11);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(uParam1->f_77), 11);
		}
		if (UNK_0x30F813723591D02E(bParam0, "IgnoredByQuickSave") && UNK_0xB2C7CF65CF9B897C(bParam0, "IgnoredByQuickSave"))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 27);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(uParam1->f_77), 27);
		}
	}
}

int func_195(int iParam0)
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

int func_196(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (!UNK_0xDF1306B443CD3D15(*bParam0, 0))
	{
		return 0;
	}
	if (UNK_0x40B3F576B41FA183(*bParam0) == 0)
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
			if (UNK_0xB97ED2A4B56844DE(*bParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (UNK_0xB97ED2A4B56844DE(*bParam0, iVar1))
			{
				switch (UNK_0x3C076D736FE6B7A6(*bParam0))
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
			(*uParam1)[iVar0] = UNK_0x0ECB5CA5140957AD(*bParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = UNK_0x3A5601978F787E51(*bParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = UNK_0x3A5601978F787E51(*bParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_197(int iParam0)
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

void func_198(var uParam0)
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

bool func_199(bool bParam0)
{
	if ((((((((((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || func_214(bParam0, 0, 0)) || func_214(bParam0, 1, 0)) || func_214(bParam0, 2, 0)) || func_213(bParam0) != 145) || func_212(bParam0)) || func_211(bParam0)) || func_210(bParam0)) || func_209(bParam0)) || !func_200(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		if (func_211(bParam0))
		{
		}
		if (func_211(bParam0))
		{
		}
		if (func_214(bParam0, 0, 0))
		{
		}
		if (func_214(bParam0, 1, 0))
		{
		}
		if (func_214(bParam0, 2, 0))
		{
		}
		if (func_213(bParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_200(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!func_201(bParam0, 0))
	{
		return false;
	}
	if (((UNK_0xA7082C42B8809BF2(bParam0) || UNK_0xC41A9202669A24C4(bParam0)) || UNK_0xAFB8495D36825275(bParam0)) || UNK_0xA7D7011F9888A365(bParam0))
	{
		return false;
	}
	switch (bParam0)
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

bool func_201(bool bParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;

	if (bParam0 == 0)
	{
		return false;
	}
	if (!UNK_0x4DAC2AD66FE0E696(bParam0))
	{
		return false;
	}
	if (((((bParam0 == joaat("DOMINATOR2") && !UNK_0x8CD06866876216F2()) || (bParam0 == joaat("BUFFALO3") && !UNK_0x8CD06866876216F2())) || (bParam0 == joaat("GAUNTLET2") && !UNK_0x8CD06866876216F2())) || bParam0 == joaat("BLIMP2")) || (bParam0 == joaat("STALION2") && !UNK_0x8CD06866876216F2()))
	{
		if (!func_179())
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < UNK_0x6C7B93D0F54679BE())
		{
			if (UNK_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (bParam0 == Var1.f_1)
				{
					if (UNK_0x232048AB4B0E0259(Var1))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam0 == joaat("BLIMP"))
	{
		if ((((!func_208() && !func_207()) && !func_206()) && !func_205()) && !func_179())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_206())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_204(bParam0))
		{
			return false;
		}
	}
	if (!func_202(bParam0))
	{
		return false;
	}
	return true;
}

bool func_202(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_203())
	{
		return true;
	}
	UNK_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return true;
	}
	switch (bParam0)
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
	if (!UNK_0x437ABF4F514F6471(&cVar2))
	{
		return false;
	}
	return true;
}

bool func_203()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_204(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (Global_2513258)
	{
		return true;
	}
	iVar0 = 1;
	iVar1 = UNK_0xDD0E7998AE8AD485();
	if (bParam0 == joaat("BTYPE3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("FACTION3"))
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VIRGO3") || bParam0 == joaat("VIRGO2"))
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SABREGT2"))
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORNADO5"))
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MINIVAN2"))
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SLAMVAN3"))
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("PROTOTIPO"))
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEVEN70"))
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PFISTER811"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("BF400"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BRIOSO"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLIFFHANGER"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CONTENDER"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LE7B"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OMNIS"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPHYTRUCK"))
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPHYTRUCK2"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPOS"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GARGOYLE"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RALLYTRUCK"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TAMPA2"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TYRUS"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SHEAVA"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LYNX"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STALION2"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GAUNTLET2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DOMINATOR2"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BUFFALO3"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("DEFILER"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NIGHTBLADE"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ZOMBIEA"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ESSKEY"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AVARUS"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ZOMBIEB"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HAKUCHOU2"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VORTEX"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SHOTARO"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHIMERA"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAPTOR"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DAEMON2"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER4"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORNADO6"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("YOUGA2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("WOLFSBANE"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGGIO3"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGGIO"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BAGGER"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SANCTUS"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MANCHEZ"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RATBIKE"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("VOLTIC2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RUINER2"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DUNE4"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DUNE5"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PHANTOM2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TECHNICAL2"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOXVILLE5"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("WASTELANDER"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER5"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET3"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DIABLOUS"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DIABLOUS2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELEGY"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELEGY2"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FCR"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FCR2"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTB"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTB2"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NERO"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NERO2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PENETRATOR"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SPECTER"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SPECTER2"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TEMPESTA"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("GP1"))
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("INFERNUS2"))
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RUSTON"))
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TURISMO2"))
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("XA21"))
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHEETAH2"))
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORERO"))
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VAGNER"))
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ARDENT"))
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NIGHTSHARK"))
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("MICROLIGHT"))
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MOGUL"))
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ROGUE"))
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STARLING"))
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEABREEZE"))
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TULA"))
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PYRO"))
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MOLOTOK"))
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NOKOTA"))
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOMBUSHKA"))
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HUNTER"))
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HAVOK"))
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HOWARD"))
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ALPHAZ1"))
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CYCLONE"))
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VISIONE"))
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VIGILANTE"))
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RETINUE"))
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAPIDGT3"))
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("DELUXO"))
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STROMBERG"))
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RIOT2"))
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHERNOBOG"))
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("KHANJALI"))
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AKULA"))
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("THRUSTER"))
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BARRAGE"))
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VOLATOL"))
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET4"))
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NEON"))
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STREITER"))
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SENTINEL3"))
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("YOSEMITE"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SC1"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AUTARCH"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GT500"))
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HUSTLER"))
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("REVOLTER"))
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PARIAH"))
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAIDEN"))
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SAVESTRA"))
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RIATA"))
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HERMES"))
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET5"))
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("Z190"))
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VISERIS"))
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("KAMACHO"))
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("GB200"))
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGALOA"))
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELLIE"))
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ISSI3"))
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MICHELLI"))
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FLASHGT"))
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HOTRING"))
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TEZERACT"))
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TYRANT"))
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DOMINATOR3"))
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TAIPAN"))
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ENTITY2"))
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("JESTER3"))
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHEBUREK"))
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CARACARA"))
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEASPARROW"))
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("TERBYTE"))
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PBUS2"))
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MULE4"))
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("POUNDER2"))
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SWINGER"))
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MENACER"))
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SCRAMJET"))
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STRIKEFORCE"))
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OPPRESSOR2"))
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PATRIOT2"))
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STAFFORD"))
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FREECRAWLER"))
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLIMP3"))
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("MONSTER3"))
	{
	}
	else if (bParam0 == joaat("CERBERUS"))
	{
	}
	else if (bParam0 == joaat("CERBERUS2"))
	{
	}
	else if (bParam0 == joaat("CERBERUS3"))
	{
	}
	else if (bParam0 == joaat("BRUTUS"))
	{
	}
	else if (bParam0 == joaat("BRUTUS2"))
	{
	}
	else if (bParam0 == joaat("BRUTUS3"))
	{
	}
	else if (bParam0 == joaat("SCARAB"))
	{
	}
	else if (bParam0 == joaat("SCARAB2"))
	{
	}
	else if (bParam0 == joaat("SCARAB3"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR2"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR3"))
	{
	}
	else if (bParam0 == joaat("ZR380"))
	{
	}
	else if (bParam0 == joaat("ZR3802"))
	{
	}
	else if (bParam0 == joaat("ZR3803"))
	{
	}
	else if (bParam0 == joaat("IMPALER"))
	{
	}
	else if (bParam0 == joaat("DEVESTE"))
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TOROS"))
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLIQUE"))
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTO"))
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DEVIANT"))
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VAMOS"))
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TULIP"))
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SCHLAGEN"))
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RCBANDITO"))
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LOCUST"))
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OUTLAW"))
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FIRETRUK"))
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BURRITO2"))
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOXVILLE"))
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STOCKADE"))
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LGUARD"))
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER2"))
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLUB"))
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_205()
{
	return false;
}

bool func_206()
{
	return true;
}

bool func_207()
{
	return true;
}

bool func_208()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_209(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	bVar1 = UNK_0x7888A5D2621AAF2D(bParam0);
	if (bVar0 == joaat("SPEEDO") && UNK_0x7F8A39872A07D2CE(bVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_201(bVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_210(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UNK_0xC844350D5D58C99A(Global_96105[iVar0]))
		{
			if (Global_96105[iVar0] == bParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_211(bool bParam0)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]) && UNK_0xDF1306B443CD3D15(Global_96075[iVar0], 0))
			{
				if (Global_96075[iVar0] == bParam0 && UNK_0x134B62B726CEC8E6(Global_96075[iVar0]) == UNK_0x134B62B726CEC8E6(bParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_212(bool bParam0)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(Global_75441.f_484[24]))
	{
		if (bParam0 == Global_75441.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (bParam0 == Global_75441.f_484[iVar0])
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_213(bool bParam0)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 145;
	}
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == bParam0)
			{
				return Global_96085[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_214(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_215(iParam1, iVar0, &uVar1, &iVar9))
	{
		if (!bParam2 || UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iVar9], false))
		{
			if (UNK_0x5B6BEDD9A86023B7(&uVar1, bParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_215(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*iParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 1;
				return true;
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*iParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*iParam3 = 6;
				return true;
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*iParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*iParam3 = 4;
				return true;
			}
			break;
	}
	return false;
}

void func_216()
{
	Global_19671 = 0;
	func_217();
}

void func_217()
{
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x8BD0DC8EEFDC56D8();
		Global_21816 = 0;
		UNK_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

