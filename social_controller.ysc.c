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
	int iLocal_20 = 0;
	bool bLocal_21 = false;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = false;
	bool bLocal_78 = false;
	bool bLocal_79 = false;
	bool bLocal_80 = false;
	bool bLocal_81 = false;
	int iLocal_82 = 0;
	bool bLocal_83 = false;
	bool bLocal_84 = false;
	int iLocal_85 = 0;
	bool bLocal_86 = false;
	struct<6> Local_87 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_93 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_99 = false;
	bool bLocal_100 = false;
	bool bLocal_101 = false;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106[3] = { 0, 0, 0 };
	int iLocal_110[3] = { 0, 0, 0 };
	int iLocal_114[3] = { 0, 0, 0 };
	bool bLocal_118 = false;
	bool bLocal_119 = false;
	bool bLocal_120 = false;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	int iLocal_125 = 0;
	var uLocal_126 = 0;
	bool bLocal_127 = false;
	bool bLocal_128 = false;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	bool bLocal_132[3] = { false, false, false };
	int iLocal_136 = 0;
	int iLocal_137[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_144[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_151 = 0;
	bool bLocal_152 = false;
	var uLocal_153 = 0;
	var uLocal_154 = -1;
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
	var uLocal_242 = 1;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = -1;
	var uLocal_247 = -1;
	var uLocal_248 = 2;
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
	var uLocal_261 = 2;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
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
	bool bLocal_323 = false;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	bool bLocal_328 = false;
	int iLocal_329 = 0;
	int iLocal_330[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
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
	iLocal_20 = 3;
	bLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_68 = -1;
	iLocal_69 = -1;
	iLocal_70 = 21;
	iLocal_72 = 2;
	bLocal_80 = true;
	if (UNK_0x2EBF608FFE6CA406(32))
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	UNK_0xB57F88F0123F4C38();
	iLocal_105 = UNK_0x1C0640BA9A7327B3();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_543())
		{
		}
		else
		{
			func_539();
			func_498();
			func_497();
			switch (iLocal_71)
			{
				case 0:
					func_496();
					break;
				case 1:
					func_194();
					func_189();
					func_29(&uLocal_153);
					func_26();
					func_10();
					if (UNK_0x8CD06866876216F2())
					{
						func_2();
					}
					break;
				case 2:
					func_1();
					break;
			}
		}
	}
}

void func_1()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_2()
{
	if (!func_9(&uLocal_321))
	{
		func_8(&uLocal_321, 0, 0);
	}
	else if (func_7(&uLocal_321, 7200000, 0))
	{
		if (func_6(0))
		{
			if (func_5(UNK_0xD803B885F5E47A62()))
			{
				if (!func_4())
				{
					func_3(&uLocal_321);
					UNK_0x1E64CE678ED5F61E("SC_PLAY_REM");
					UNK_0x47AFB2993A42BD03(0, 1);
				}
			}
		}
	}
}

void func_3(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_4()
{
	return Global_1312877;
}

bool func_5(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_142, 6);
}

bool func_6(int iParam0)
{
	return Global_1662155.f_16[iParam0 /*44*/].f_4;
}

bool func_7(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_8(uParam0, bParam2, 0);
	if (UNK_0x8CD06866876216F2() && !bParam2)
	{
		if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_8(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (UNK_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = UNK_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = UNK_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = UNK_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 1;
	}
}

bool func_9(var uParam0)
{
	return uParam0->f_1;
}

void func_10()
{
	int iVar0;
	var uVar1;
	int iVar5;
	int iVar6;
	bool bVar7;
	char cVar8[64];
	int iVar24;
	int iVar25;
	int iVar26;
	bool bVar27;
	char cVar28[64];

	switch (iLocal_325)
	{
		case 0:
			if ((Global_108336 && !bLocal_323) && !Global_262145.f_10125)
			{
				iLocal_326 = -1;
				iVar0 = 0;
				while (iVar0 < Global_108324)
				{
					if (!UNK_0xEA6BC48857E0AC4C(&(Global_108324[iVar0 /*4*/])))
					{
						iLocal_326 = iVar0;
					}
					iVar0++;
				}
				if (iLocal_326 != -1)
				{
					iLocal_325++;
				}
				else
				{
					Global_108336 = 0;
				}
			}
			if (((!Global_108336 && UNK_0x8CD06866876216F2()) && func_23(3763, -1, -1)) && (!bLocal_328 || UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), iLocal_329)) > 25000))
			{
				iLocal_330[0] = func_20(1362, -1, -1);
				iLocal_330[1] = func_20(1363, -1, -1);
				iLocal_330[2] = func_20(1364, -1, -1);
				iLocal_330[3] = func_20(1365, -1, -1);
				iLocal_330[4] = func_20(1366, -1, -1);
				iLocal_330[5] = func_20(1367, -1, -1);
				iLocal_330[6] = func_20(1368, -1, -1);
				iLocal_330[7] = func_20(1369, -1, -1);
				func_19(&uVar1, &iLocal_330, -1);
				func_16(&uVar1);
				bLocal_328 = false;
			}
			break;
		case 1:
			if (iLocal_327 == 0)
			{
				UNK_0xF88B7DEAA25925F9(&(Global_108324[iLocal_326 /*4*/]), &iLocal_327);
			}
			else if (!UNK_0x5E9C3E8391CBB040(iLocal_327))
			{
				switch (UNK_0x9E0FEF6524BB813B(iLocal_327))
				{
					case 0:
						bVar7 = false;
						iVar5 = Global_108172;
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							if (!UNK_0xEA6BC48857E0AC4C(&(Global_108172[iVar6 /*4*/])))
							{
								if (UNK_0x12AB0310C2281427(&(Global_108172[iVar6 /*4*/])) == UNK_0x12AB0310C2281427(&(Global_108324[iLocal_326 /*4*/])))
								{
									bVar7 = true;
									iVar6 = iVar5 + 1;
								}
							}
							iVar6++;
						}
						if (bVar7)
						{
							iLocal_325 = 3;
						}
						else
						{
							iLocal_325 = 2;
						}
						break;
					default:
						StringCopy(&(Global_108324[iLocal_326 /*4*/]), "", 16);
						if (UNK_0x9E0FEF6524BB813B(iLocal_327) == 2)
						{
							if (UNK_0x8CD06866876216F2())
							{
								func_14(3763, 0, -1, 1);
							}
						}
						iLocal_325 = 0;
						break;
				}
				iLocal_327 = 0;
			}
			break;
		case 2:
			if (iLocal_327 == 0)
			{
				StringCopy(&cVar8, "", 64);
				if (Global_108333[iLocal_326])
				{
					func_13(&cVar8, "SPPlate", 0);
					func_13(&cVar8, "MPPlate", 1);
				}
				else
				{
					func_13(&cVar8, "SPPlate", 1);
				}
				UNK_0xA2F4EA237D340E44(&(Global_108324[iLocal_326 /*4*/]), &cVar8, &iLocal_327);
			}
			else if (!UNK_0xA0B3254ACBA24672(iLocal_327))
			{
				switch (UNK_0x7B25198C7B76DB3E(iLocal_327))
				{
					case 0:
						bLocal_323 = true;
						iLocal_325 = 0;
						StringCopy(&(Global_108324[iLocal_326 /*4*/]), "", 16);
						iLocal_327 = 0;
						if (UNK_0x8CD06866876216F2())
						{
							func_14(3763, 0, -1, 1);
						}
						break;
					default:
						iLocal_327 = 0;
						iLocal_325 = 0;
						StringCopy(&(Global_108324[iLocal_326 /*4*/]), "", 16);
						if (UNK_0x8CD06866876216F2())
						{
							bLocal_328 = true;
							iLocal_329 = UNK_0x2B6E0A53779D29EA();
						}
						break;
				}
				iLocal_327 = 0;
			}
			break;
		case 3:
			if (UNK_0x6E3A4FF8A0D32DC5(iLocal_327))
			{
				if (!UNK_0x40DE13D146D0C8D4(iLocal_327))
				{
					iVar24 = -1;
					iVar25 = UNK_0x4BD42FD8054FC13F(iLocal_327);
					iVar26 = 0;
					while (iVar26 < iVar25)
					{
						bVar27 = UNK_0xD37B407BEA6A24AA(iLocal_327, iVar26);
						if (!UNK_0xEA6BC48857E0AC4C(bVar27) && UNK_0x12AB0310C2281427(bVar27) == UNK_0x12AB0310C2281427(&(Global_108324[iLocal_326 /*4*/])))
						{
							iVar24 = iVar26;
							iVar26 = iVar25 + 1;
						}
						iVar26++;
					}
					if (iVar24 != -1)
					{
						StringCopy(&cVar28, UNK_0xF6FE097ED6A14DFA(iLocal_327, iVar24), 64);
						if (Global_108333[iLocal_326])
						{
							func_13(&cVar28, "SPPlate", 0);
							func_13(&cVar28, "MPPlate", 1);
						}
						else if (!func_11(&cVar28, "MPPlate"))
						{
							func_13(&cVar28, "SPPlate", 1);
						}
						UNK_0xDACEC60E0199D070(bVar27, bVar27, &cVar28);
						if (UNK_0x8CD06866876216F2())
						{
							func_14(3763, 0, -1, 1);
						}
					}
					else if (UNK_0x8CD06866876216F2())
					{
						bLocal_328 = true;
						iLocal_329 = UNK_0x2B6E0A53779D29EA();
					}
					bLocal_323 = true;
					iLocal_325 = 0;
					StringCopy(&(Global_108324[iLocal_326 /*4*/]), "", 16);
					iLocal_327 = 0;
				}
			}
			else
			{
				UNK_0x96BD910968496679("TEST", &iLocal_327);
			}
			break;
	}
}

bool func_11(bool bParam0, bool bParam1)
{
	struct<8> Var0[10];
	int iVar81;
	int iVar82;

	func_12(bParam0, &Var0);
	iVar82 = UNK_0x12AB0310C2281427(bParam1);
	iVar81 = 0;
	while (iVar81 < Var0)
	{
		if (!UNK_0xEA6BC48857E0AC4C(&(Var0[iVar81 /*8*/])))
		{
			if (UNK_0x12AB0310C2281427(&(Var0[iVar81 /*8*/])) == iVar82)
			{
				return true;
			}
		}
		iVar81++;
	}
	return false;
}

void func_12(bool bParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	char cVar2[32];
	bool bVar12;
	int iVar13;
	int iVar14;

	bVar0 = false;
	if (!UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		bVar0 = UNK_0x4880526EC51D1C27(bParam0);
	}
	StringCopy(&cVar4, "", 32);
	bVar12 = bVar0 != false;
	iVar14 = 0;
	while (iVar14 < *iParam1)
	{
		StringCopy(iParam1[iVar14 /*8*/], "", 32);
		iVar14++;
	}
	while (bVar12)
	{
		StringCopy(&cVar2, UNK_0xA739D71DFFCCC22C(bParam0, bVar1, bVar1 + 1), 8);
		bVar1++;
		if (UNK_0x12AB0310C2281427(&cVar2) == 625527429 || bVar1 >= bVar0)
		{
			if (UNK_0x12AB0310C2281427(&cVar2) != 625527429)
			{
				StringConCat(&cVar4, &cVar2, 32);
			}
			if (iVar13 < *iParam1)
			{
				*(iParam1[iVar13 /*8*/]) = { cVar4 };
				iVar13++;
			}
			StringCopy(&cVar4, "", 32);
		}
		else
		{
			StringConCat(&cVar4, &cVar2, 32);
		}
		if (bVar1 >= bVar0)
		{
			bVar12 = false;
		}
	}
}

void func_13(char* sParam0, char* sParam1, bool bParam2)
{
	struct<8> Var0[10];
	int iVar81;
	int iVar82;
	int iVar83;
	bool bVar84;

	if (bParam2)
	{
	}
	func_12(sParam0, &Var0);
	StringCopy(sParam0, "", 64);
	iVar82 = UNK_0x12AB0310C2281427(sParam1);
	iVar81 = 0;
	while (iVar81 < Var0)
	{
		if (!UNK_0xEA6BC48857E0AC4C(&(Var0[iVar81 /*8*/])))
		{
			iVar83 = UNK_0x12AB0310C2281427(&(Var0[iVar81 /*8*/]));
			if (iVar83 != iVar82)
			{
				if (bVar84)
				{
					StringConCat(sParam0, ",", 64);
					bVar84 = false;
				}
				StringConCat(sParam0, &(Var0[iVar81 /*8*/]), 64);
				bVar84 = true;
			}
		}
		iVar81++;
	}
	if (bParam2)
	{
		if (bVar84)
		{
			StringConCat(sParam0, ",", 64);
			bVar84 = false;
		}
		StringConCat(sParam0, sParam1, 64);
		bVar84 = true;
	}
}

int func_14(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_15();
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

int func_15()
{
	return Global_1312745;
}

int func_16(bool bParam0)
{
	int iVar0;
	int iVar1[8];
	bool bVar10;
	int iVar11;

	iVar11 = UNK_0x4880526EC51D1C27(bParam0);
	iVar0 = 0;
	while (iVar0 < Global_108324)
	{
		if (UNK_0xEA6BC48857E0AC4C(&(Global_108324[iVar0 /*4*/])))
		{
			StringCopy(&(Global_108324[iVar0 /*4*/]), bParam0, 16);
			Global_108333[iVar0] = UNK_0x8CD06866876216F2();
			Global_108336 = 1;
			Global_108337 = 1;
			if (UNK_0x8CD06866876216F2())
			{
				bVar10 = false;
				while (bVar10 < 8)
				{
					if (bVar10 < iVar11)
					{
						iVar1[bVar10] = func_18(UNK_0xA739D71DFFCCC22C(bParam0, bVar10, bVar10 + 1));
					}
					else
					{
						iVar1[bVar10] = func_18("");
					}
					bVar10++;
				}
				func_17(1362, iVar1[0], -1, 1);
				func_17(1363, iVar1[1], -1, 1);
				func_17(1364, iVar1[2], -1, 1);
				func_17(1365, iVar1[3], -1, 1);
				func_17(1366, iVar1[4], -1, 1);
				func_17(1367, iVar1[5], -1, 1);
				func_17(1368, iVar1[6], -1, 1);
				func_17(1369, iVar1[7], -1, 1);
				func_14(3763, 1, -1, 1);
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_108324)
	{
		iVar0++;
	}
	return 0;
}

var func_17(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (bParam2 == -1)
	{
		bParam2 = func_15();
	}
	if (bParam1 < 0)
	{
		bParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, bParam2);
		iVar1 = ((iParam0 - 384) - UNK_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, bParam2);
		iVar1 = ((iParam0 - 457) - UNK_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, false);
		iVar1 = ((iParam0 - 1281) - UNK_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, false);
		iVar1 = ((iParam0 - 1305) - UNK_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = UNK_0xF92652620E6134B6((iParam0 - 1393), 0, 1, bParam2);
		iVar1 = ((iParam0 - 1393) - UNK_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = UNK_0xF92652620E6134B6((iParam0 - 1361), 0, 0, false);
		iVar1 = ((iParam0 - 1361) - UNK_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, bParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - UNK_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, false, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - UNK_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, bParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - UNK_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, bParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - UNK_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, bParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - UNK_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, bParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - UNK_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, bParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - UNK_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, bParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - UNK_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, bParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - UNK_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, bParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - UNK_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, bParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - UNK_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, bParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - UNK_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, bParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - UNK_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, bParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - UNK_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, bParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - UNK_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, bParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - UNK_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, false, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - UNK_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = UNK_0xB8E1F940D68B4FA6(iVar0, bParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_18(bool bParam0)
{
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return 37;
	}
	if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("A"))
	{
		return 0;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("B"))
	{
		return 1;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("C"))
	{
		return 2;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("D"))
	{
		return 3;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("E"))
	{
		return 4;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("F"))
	{
		return 5;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("G"))
	{
		return 6;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("H"))
	{
		return 7;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("I"))
	{
		return 8;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("J"))
	{
		return 9;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("K"))
	{
		return 10;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("L"))
	{
		return 11;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("M"))
	{
		return 12;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("N"))
	{
		return 13;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("O"))
	{
		return 14;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("P"))
	{
		return 15;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("Q"))
	{
		return 16;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("R"))
	{
		return 17;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("S"))
	{
		return 18;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("T"))
	{
		return 19;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("U"))
	{
		return 20;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("V"))
	{
		return 21;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("W"))
	{
		return 22;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("X"))
	{
		return 23;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("Y"))
	{
		return 24;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("Z"))
	{
		return 25;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("0"))
	{
		return 26;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("1"))
	{
		return 27;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("2"))
	{
		return 28;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("3"))
	{
		return 29;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("4"))
	{
		return 30;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("5"))
	{
		return 31;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("6"))
	{
		return 32;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("7"))
	{
		return 33;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("8"))
	{
		return 34;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427("9"))
	{
		return 35;
	}
	else if (UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(" "))
	{
		return 36;
	}
	return 37;
}

void func_19(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;

	StringCopy(sParam0, "", 16);
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (iVar0 == iParam2 && SYSTEM::SIN(SYSTEM::TO_FLOAT(UNK_0x1C0640BA9A7327B3())) > 0f)
		{
			StringConCat(sParam0, " ", 16);
		}
		else
		{
			switch ((*iParam1)[iVar0])
			{
				case 0:
					StringConCat(sParam0, "A", 16);
					break;
				case 1:
					StringConCat(sParam0, "B", 16);
					break;
				case 2:
					StringConCat(sParam0, "C", 16);
					break;
				case 3:
					StringConCat(sParam0, "D", 16);
					break;
				case 4:
					StringConCat(sParam0, "E", 16);
					break;
				case 5:
					StringConCat(sParam0, "F", 16);
					break;
				case 6:
					StringConCat(sParam0, "G", 16);
					break;
				case 7:
					StringConCat(sParam0, "H", 16);
					break;
				case 8:
					StringConCat(sParam0, "I", 16);
					break;
				case 9:
					StringConCat(sParam0, "J", 16);
					break;
				case 10:
					StringConCat(sParam0, "K", 16);
					break;
				case 11:
					StringConCat(sParam0, "L", 16);
					break;
				case 12:
					StringConCat(sParam0, "M", 16);
					break;
				case 13:
					StringConCat(sParam0, "N", 16);
					break;
				case 14:
					StringConCat(sParam0, "O", 16);
					break;
				case 15:
					StringConCat(sParam0, "P", 16);
					break;
				case 16:
					StringConCat(sParam0, "Q", 16);
					break;
				case 17:
					StringConCat(sParam0, "R", 16);
					break;
				case 18:
					StringConCat(sParam0, "S", 16);
					break;
				case 19:
					StringConCat(sParam0, "T", 16);
					break;
				case 20:
					StringConCat(sParam0, "U", 16);
					break;
				case 21:
					StringConCat(sParam0, "V", 16);
					break;
				case 22:
					StringConCat(sParam0, "W", 16);
					break;
				case 23:
					StringConCat(sParam0, "X", 16);
					break;
				case 24:
					StringConCat(sParam0, "Y", 16);
					break;
				case 25:
					StringConCat(sParam0, "Z", 16);
					break;
				case 26:
					StringConCat(sParam0, "0", 16);
					break;
				case 27:
					StringConCat(sParam0, "1", 16);
					break;
				case 28:
					StringConCat(sParam0, "2", 16);
					break;
				case 29:
					StringConCat(sParam0, "3", 16);
					break;
				case 30:
					StringConCat(sParam0, "4", 16);
					break;
				case 31:
					StringConCat(sParam0, "5", 16);
					break;
				case 32:
					StringConCat(sParam0, "6", 16);
					break;
				case 33:
					StringConCat(sParam0, "7", 16);
					break;
				case 34:
					StringConCat(sParam0, "8", 16);
					break;
				case 35:
					StringConCat(sParam0, "9", 16);
					break;
				case 36:
					StringConCat(sParam0, " ", 16);
					break;
				default:
					StringConCat(sParam0, "", 16);
					break;
			}
		}
		iVar0++;
	}
}

int func_20(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam1 == -1)
	{
		bParam1 = func_15();
	}
	iVar0 = 0;
	iVar1 = func_22(iParam0, bParam1);
	iVar2 = func_21(iParam0);
	if (0 != iVar1)
	{
		if (!UNK_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_21(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - UNK_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - UNK_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - UNK_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - UNK_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - UNK_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - UNK_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - UNK_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - UNK_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - UNK_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - UNK_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - UNK_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - UNK_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - UNK_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - UNK_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - UNK_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - UNK_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - UNK_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - UNK_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - UNK_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - UNK_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - UNK_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - UNK_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - UNK_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_22(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_15();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, bParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, bParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, false);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = UNK_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, false);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = UNK_0xF92652620E6134B6((iParam0 - 1361), 0, 0, false);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = UNK_0xF92652620E6134B6((iParam0 - 1393), 0, 1, bParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, false, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, bParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, bParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, bParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, bParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, bParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, bParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, bParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, false, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, bParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, bParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, bParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, bParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, bParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, bParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, bParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = UNK_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, bParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

bool func_23(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_15();
	}
	iVar1 = func_25(iParam0, bParam1);
	iVar2 = func_24(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_24(int iParam0)
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

int func_25(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_15();
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

void func_26()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];

	if (Global_108337 && !bLocal_323)
	{
		bLocal_323 = true;
		Global_108337 = 0;
	}
	if ((((bLocal_323 && iLocal_325 == 0) && !bLocal_84) && !Global_262145.f_10124) && iLocal_71 != 0)
	{
		iVar0 = 0;
		UNK_0xEBD5716567F1D347("car");
		UNK_0xB5B7B792811308A7("appdata");
		iVar0 = (iVar0 + func_27("orderCount_sp0"));
		iVar0 = (iVar0 + func_27("orderCount_sp1"));
		iVar0 = (iVar0 + func_27("orderCount_sp2"));
		iVar0 = (iVar0 + func_27("orderCount_mp0"));
		iVar0 = (iVar0 + func_27("orderCount_mp1"));
		iVar0 = (iVar0 + func_27("orderCount_mp2"));
		iVar0 = (iVar0 + func_27("orderCount_mp3"));
		iVar0 = (iVar0 + func_27("orderCount_mp4"));
		UNK_0x98C61465A1232E0E();
		UNK_0xFE0C6A4F9007749F();
		iVar0 = iVar0;
		if (UNK_0x6E3A4FF8A0D32DC5(iLocal_327))
		{
			if (!UNK_0x40DE13D146D0C8D4(iLocal_327))
			{
				iVar2 = Global_108172;
				iVar1 = 0;
				while (iVar1 < iVar2)
				{
					StringCopy(&(Global_108172[iVar1 /*4*/]), "", 16);
					Global_108293[iVar1] = 0;
					iVar1++;
				}
				iVar2 = UNK_0x4BD42FD8054FC13F(iLocal_327);
				Global_108338 = iVar2 >= Global_108172;
				iVar1 = 0;
				while (iVar1 < iVar2)
				{
					if (iVar1 < Global_108172)
					{
						StringCopy(&(Global_108172[iVar1 /*4*/]), UNK_0xD37B407BEA6A24AA(iLocal_327, iVar1), 16);
						StringCopy(&cVar3, UNK_0xF6FE097ED6A14DFA(iLocal_327, iVar1), 64);
						if ((func_11(&cVar3, "MPPlate") || func_11(&cVar3, "NoDelete")) || iVar1 == 0)
						{
							Global_108293[iVar1] = 1;
						}
					}
					iVar1++;
				}
				iLocal_327 = 0;
				bLocal_323 = false;
				Global_108339 = 1;
			}
		}
		else
		{
			UNK_0x96BD910968496679("TEST", &iLocal_327);
		}
	}
}

int func_27(bool bParam0)
{
	return UNK_0x33C754EADD2C8282(func_28(bParam0));
}

bool func_28(bool bParam0)
{
	int iVar0;

	iVar0 = UNK_0x12AB0310C2281427(bParam0);
	if (UNK_0x12AB0310C2281427("uid") == iVar0)
	{
		return "0";
	}
	if (UNK_0x12AB0310C2281427("carModel") == iVar0)
	{
		return "1";
	}
	if (UNK_0x12AB0310C2281427("playerSlot") == iVar0)
	{
		return "2";
	}
	if (UNK_0x12AB0310C2281427("playerRank") == iVar0)
	{
		return "3";
	}
	if (UNK_0x12AB0310C2281427("playerGangR") == iVar0)
	{
		return "4";
	}
	if (UNK_0x12AB0310C2281427("playerGangG") == iVar0)
	{
		return "5";
	}
	if (UNK_0x12AB0310C2281427("playerGangB") == iVar0)
	{
		return "6";
	}
	if (UNK_0x12AB0310C2281427("carColour1") == iVar0)
	{
		return "7";
	}
	if (UNK_0x12AB0310C2281427("carColour2") == iVar0)
	{
		return "8";
	}
	if (UNK_0x12AB0310C2281427("carPlateBack") == iVar0)
	{
		return "9";
	}
	if (UNK_0x12AB0310C2281427("windowTint") == iVar0)
	{
		return "10";
	}
	if (UNK_0x12AB0310C2281427("bulletProofTyres") == iVar0)
	{
		return "11";
	}
	if (UNK_0x12AB0310C2281427("carEngine") == iVar0)
	{
		return "12";
	}
	if (UNK_0x12AB0310C2281427("carBrakes") == iVar0)
	{
		return "13";
	}
	if (UNK_0x12AB0310C2281427("carExhaust") == iVar0)
	{
		return "14";
	}
	if (UNK_0x12AB0310C2281427("carWheel") == iVar0)
	{
		return "15";
	}
	if (UNK_0x12AB0310C2281427("carHorn1") == iVar0)
	{
		return "16";
	}
	if (UNK_0x12AB0310C2281427("carHorn2") == iVar0)
	{
		return "17";
	}
	if (UNK_0x12AB0310C2281427("carHorn3") == iVar0)
	{
		return "18";
	}
	if (UNK_0x12AB0310C2281427("carHorn4") == iVar0)
	{
		return "19";
	}
	if (UNK_0x12AB0310C2281427("carHorn5") == iVar0)
	{
		return "20";
	}
	if (UNK_0x12AB0310C2281427("carHorn6") == iVar0)
	{
		return "21";
	}
	if (UNK_0x12AB0310C2281427("carHorn7") == iVar0)
	{
		return "22";
	}
	if (UNK_0x12AB0310C2281427("carHorn8") == iVar0)
	{
		return "23";
	}
	if (UNK_0x12AB0310C2281427("carHorn9") == iVar0)
	{
		return "24";
	}
	if (UNK_0x12AB0310C2281427("tyreSmoke") == iVar0)
	{
		return "25";
	}
	if (UNK_0x12AB0310C2281427("tyreSmokeColourRed") == iVar0)
	{
		return "26";
	}
	if (UNK_0x12AB0310C2281427("tyreSmokeColourGreen") == iVar0)
	{
		return "27";
	}
	if (UNK_0x12AB0310C2281427("tyreSmokeColourBlue") == iVar0)
	{
		return "28";
	}
	if (UNK_0x12AB0310C2281427("carHorn") == iVar0)
	{
		return "29";
	}
	if (UNK_0x12AB0310C2281427("carArmour") == iVar0)
	{
		return "30";
	}
	if (UNK_0x12AB0310C2281427("carTurbo") == iVar0)
	{
		return "31";
	}
	if (UNK_0x12AB0310C2281427("carSuspension") == iVar0)
	{
		return "32";
	}
	if (UNK_0x12AB0310C2281427("carXenonLights") == iVar0)
	{
		return "33";
	}
	if (UNK_0x12AB0310C2281427("carWheelType") == iVar0)
	{
		return "34";
	}
	if (UNK_0x12AB0310C2281427("carUnlocked") == iVar0)
	{
		return "35";
	}
	if (UNK_0x12AB0310C2281427("carColour1Unlocked") == iVar0)
	{
		return "36";
	}
	if (UNK_0x12AB0310C2281427("carColour2Unlocked") == iVar0)
	{
		return "37";
	}
	if (UNK_0x12AB0310C2281427("tyreSmokeColourEnabled") == iVar0)
	{
		return "38";
	}
	if (UNK_0x12AB0310C2281427("carEngineCount") == iVar0)
	{
		return "39";
	}
	if (UNK_0x12AB0310C2281427("carBrakesCount") == iVar0)
	{
		return "40";
	}
	if (UNK_0x12AB0310C2281427("carExhaustCount") == iVar0)
	{
		return "41";
	}
	if (UNK_0x12AB0310C2281427("carWheelCount") == iVar0)
	{
		return "42";
	}
	if (UNK_0x12AB0310C2281427("carHornCount") == iVar0)
	{
		return "43";
	}
	if (UNK_0x12AB0310C2281427("carArmourCount") == iVar0)
	{
		return "44";
	}
	if (UNK_0x12AB0310C2281427("carSuspensionCount") == iVar0)
	{
		return "45";
	}
	if (UNK_0x12AB0310C2281427("carColoursUnlocked0") == iVar0)
	{
		return "46";
	}
	if (UNK_0x12AB0310C2281427("carColoursUnlocked1") == iVar0)
	{
		return "47";
	}
	if (UNK_0x12AB0310C2281427("carColoursUnlocked2") == iVar0)
	{
		return "48";
	}
	if (UNK_0x12AB0310C2281427("carColoursUnlocked3") == iVar0)
	{
		return "49";
	}
	if (UNK_0x12AB0310C2281427("carColoursUnlocked4") == iVar0)
	{
		return "50";
	}
	if (UNK_0x12AB0310C2281427("carColoursUnlocked5") == iVar0)
	{
		return "51";
	}
	if (UNK_0x12AB0310C2281427("carPriceModifier") == iVar0)
	{
		return "52";
	}
	if (UNK_0x12AB0310C2281427("carType") == iVar0)
	{
		return "53";
	}
	if (UNK_0x12AB0310C2281427("playerGang") == iVar0)
	{
		return "54";
	}
	if (UNK_0x12AB0310C2281427("unlockBitset1") == iVar0)
	{
		return "55";
	}
	if (UNK_0x12AB0310C2281427("unlockBitset2") == iVar0)
	{
		return "56";
	}
	if (UNK_0x12AB0310C2281427("orderCount_sp0") == iVar0)
	{
		return "57";
	}
	if (UNK_0x12AB0310C2281427("orderCount_sp1") == iVar0)
	{
		return "58";
	}
	if (UNK_0x12AB0310C2281427("orderCount_sp2") == iVar0)
	{
		return "59";
	}
	if (UNK_0x12AB0310C2281427("orderCount_mp0") == iVar0)
	{
		return "60";
	}
	if (UNK_0x12AB0310C2281427("orderCount_mp1") == iVar0)
	{
		return "61";
	}
	if (UNK_0x12AB0310C2281427("orderCount_mp2") == iVar0)
	{
		return "62";
	}
	if (UNK_0x12AB0310C2281427("orderCount_mp3") == iVar0)
	{
		return "63";
	}
	if (UNK_0x12AB0310C2281427("orderCount_mp4") == iVar0)
	{
		return "64";
	}
	if (UNK_0x12AB0310C2281427("spDiscount") == iVar0)
	{
		return "65";
	}
	if (UNK_0x12AB0310C2281427("mpDiscount") == iVar0)
	{
		return "66";
	}
	if (UNK_0x12AB0310C2281427("carColour1Group") == iVar0)
	{
		return "67";
	}
	if (UNK_0x12AB0310C2281427("carColour2Group") == iVar0)
	{
		return "68";
	}
	if (UNK_0x12AB0310C2281427("unlockBitset3") == iVar0)
	{
		return "69";
	}
	if (UNK_0x12AB0310C2281427("playerName") == iVar0)
	{
		return "70";
	}
	if (UNK_0x12AB0310C2281427("newItemUnlocks") == iVar0)
	{
		return "72";
	}
	if (UNK_0x12AB0310C2281427("playerNameSP") == iVar0)
	{
		return "73";
	}
	if (UNK_0x12AB0310C2281427("playerNameMP") == iVar0)
	{
		return "74";
	}
	return bParam0;
}

void func_29(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_9(&(uParam0->f_10)))
	{
		func_8(&(uParam0->f_10), 0, 0);
	}
	else if (func_7(&(uParam0->f_10), func_188(), 0))
	{
		if (!uParam0->f_166)
		{
			bVar0 = true;
		}
	}
	func_54(uParam0, bVar0);
	if (func_53() && func_52())
	{
		func_30(uParam0);
	}
	if (bVar0)
	{
		if (uParam0->f_166)
		{
			func_3(&(uParam0->f_10));
			uParam0->f_166 = 0;
		}
	}
}

void func_30(var uParam0)
{
	if (!UNK_0x8CD06866876216F2())
	{
		*uParam0 = 0;
		return;
	}
	if (UNK_0x798A3F1296751F46())
	{
		return;
	}
	if (!UNK_0x0F1CCD77290EE12F())
	{
		return;
	}
	if (uParam0->f_1 != func_15())
	{
		*uParam0 = 0;
	}
	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_1 != func_15())
			{
				uParam0->f_2 = func_51(1079, -1, 0);
				uParam0->f_3 = func_51(149, -1, 0);
				uParam0->f_4 = func_51(150, -1, 0);
				uParam0->f_5 = func_51(112, -1, 0);
				uParam0->f_6 = func_50(11, -1);
				uParam0->f_7 = func_49(32, -1);
				uParam0->f_8 = func_49(0, -1);
				if (func_46(10))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
				}
				if (func_43(10))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), true);
				}
				if (func_40(10))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
				}
				if (func_37(10))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 3);
				}
				if (func_46(11))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 4);
				}
				if (func_43(11))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 5);
				}
				if (func_40(11))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
				}
				if (func_37(11))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
				}
				if (func_46(60))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
				}
				if (func_43(60))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
				}
				if (func_40(60))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
				}
				if (func_37(60))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
				}
				if (func_31(23))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 15);
				}
				if (func_46(61))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 16);
				}
				if (func_43(61))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 17);
				}
				if (func_40(61))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 18);
				}
				if (func_37(61))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
				}
				if (func_46(62))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
				}
				if (func_43(62))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
				}
				if (func_40(62))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
				}
				if (func_37(62))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
				}
				if (func_46(63))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
				}
				if (func_43(63))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 25);
				}
				if (func_40(63))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
				}
				if (func_37(63))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
				}
				uParam0->f_1 = func_15();
				*uParam0++;
			}
			break;
		case 1:
			if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, false))
			{
				if (func_46(10))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_50_VEHICLES_BLOWNUP"), func_50(10, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, true))
			{
				if (func_43(10))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_50_VEHICLES_BLOWNUP"), func_50(10, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), true);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 2))
			{
				if (func_40(10))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_50_VEHICLES_BLOWNUP"), func_50(10, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 3))
			{
				if (func_37(10))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_50_VEHICLES_BLOWNUP"), func_50(10, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 3);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 4))
			{
				if (func_46(11))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_VEHICLES_JACKEDR"), func_50(11, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 4);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 5))
			{
				if (func_43(11))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_VEHICLES_JACKEDR"), func_50(11, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 5);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 6))
			{
				if (func_40(11))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_VEHICLES_JACKEDR"), func_50(11, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 7))
			{
				if (func_37(11))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_VEHICLES_JACKEDR"), func_50(11, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 8))
			{
				if (func_46(60))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_FMTIME5STARWANTED"), func_50(60, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 9))
			{
				if (func_43(60))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_FMTIME5STARWANTED"), func_50(60, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 10))
			{
				if (func_40(60))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_FMTIME5STARWANTED"), func_50(60, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 11))
			{
				if (func_37(60))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_FMTIME5STARWANTED"), func_50(60, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 15))
			{
				if (func_31(23))
				{
					UNK_0x5EDE1DB7F3CAEEBD(joaat("MP0_AWD_FMFURTHESTWHEELIE"), func_49(32, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 15);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 16))
			{
				if (func_46(61))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"), func_50(61, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 16);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 17))
			{
				if (func_43(61))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"), func_50(61, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 17);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 18))
			{
				if (func_40(61))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"), func_50(61, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 18);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 19))
			{
				if (func_37(61))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"), func_50(61, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
			{
				if (func_46(62))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"), func_50(62, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 21))
			{
				if (func_43(62))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"), func_50(62, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 22))
			{
				if (func_40(62))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"), func_50(62, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 23))
			{
				if (func_37(62))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"), func_50(62, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 24))
			{
				if (func_46(63))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"), func_50(63, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 25))
			{
				if (func_43(63))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"), func_50(63, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 25);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 26))
			{
				if (func_40(63))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"), func_50(63, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 27))
			{
				if (func_37(63))
				{
					UNK_0xE7B2B6A56C007908(joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"), func_50(63, -1), 0);
					UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
				}
			}
			break;
	}
}

bool func_31(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_33(iParam0);
	iVar1 = iParam0;
	return UNK_0xEAE0D21A50E6C7F4(bVar0, func_32(iVar1));
}

int func_32(int iParam0)
{
	return (iParam0 % 32);
}

int func_33(int iParam0)
{
	switch (func_35(iParam0))
	{
		case 764:
			return Global_1388072[func_34(-1)];
		case 765:
			return Global_1388078[func_34(-1)];
		case 766:
			return Global_1388084[func_34(-1)];
		case 8731:
			return Global_1388090[func_34(-1)];
		default:
			break;
	}
	return 0;
}

bool func_34(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = bParam0;
	if (bVar0 == -1)
	{
		iVar1 = func_15();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			bVar0 = iVar1;
		}
		else
		{
			bVar0 = false;
			Global_2548146 = 1;
		}
	}
	return bVar0;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 764;
		case 1:
			return 765;
		case 2:
			return 766;
		case 3:
			return 8731;
	}
	return 11511;
}

int func_36(int iParam0)
{
	return (iParam0 / 32);
}

bool func_37(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_38(iParam0);
	iVar1 = iParam0;
	return UNK_0xEAE0D21A50E6C7F4(bVar0, func_32(iVar1));
}

int func_38(int iParam0)
{
	switch (func_39(iParam0))
	{
		case 757:
			return Global_1388018[func_34(-1)];
		case 758:
			return Global_1388024[func_34(-1)];
		case 759:
			return Global_1388030[func_34(-1)];
		case 760:
			return Global_1388036[func_34(-1)];
		case 8732:
			return Global_1388042[func_34(-1)];
		default:
			break;
	}
	return 0;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 757;
		case 1:
			return 758;
		case 2:
			return 759;
		case 3:
			return 760;
		case 4:
			return 8732;
	}
	return 11511;
}

bool func_40(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_41(iParam0);
	iVar1 = iParam0;
	return UNK_0xEAE0D21A50E6C7F4(bVar0, func_32(iVar1));
}

int func_41(int iParam0)
{
	switch (func_42(iParam0))
	{
		case 767:
			return Global_1387928[func_34(-1)];
		case 768:
			return Global_1387934[func_34(-1)];
		case 769:
			return Global_1387940[func_34(-1)];
		case 770:
			return Global_1387946[func_34(-1)];
		case 8730:
			return Global_1387952[func_34(-1)];
		default:
			break;
	}
	return 0;
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 767;
		case 1:
			return 768;
		case 2:
			return 769;
		case 3:
			return 770;
		case 4:
			return 8730;
	}
	return 11511;
}

bool func_43(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_44(iParam0);
	iVar1 = iParam0;
	return UNK_0xEAE0D21A50E6C7F4(bVar0, func_32(iVar1));
}

int func_44(int iParam0)
{
	switch (func_45(iParam0))
	{
		case 777:
			return Global_1387958[func_34(-1)];
		case 778:
			return Global_1387964[func_34(-1)];
		case 779:
			return Global_1387970[func_34(-1)];
		case 780:
			return Global_1387976[func_34(-1)];
		case 8728:
			return Global_1387982[func_34(-1)];
		default:
			break;
	}
	return 0;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 777;
		case 1:
			return 778;
		case 2:
			return 779;
		case 3:
			return 780;
		case 4:
			return 8728;
	}
	return 11511;
}

bool func_46(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_47(iParam0);
	iVar1 = iParam0;
	return UNK_0xEAE0D21A50E6C7F4(bVar0, func_32(iVar1));
}

int func_47(int iParam0)
{
	switch (func_48(iParam0))
	{
		case 787:
			return Global_1387988[func_34(-1)];
		case 788:
			return Global_1387994[func_34(-1)];
		case 789:
			return Global_1388000[func_34(-1)];
		case 790:
			return Global_1388006[func_34(-1)];
		case 8726:
			return Global_1388012[func_34(-1)];
		default:
			break;
	}
	return 0;
}

int func_48(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 787;
		case 1:
			return 788;
		case 2:
			return 789;
		case 3:
			return 790;
		case 4:
			return 8726;
	}
	return 11511;
}

float func_49(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2582968[iParam0 /*3*/][func_34(iParam1)];
	if (UNK_0x893A626C476B583D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2585280[iParam0 /*3*/][func_34(iParam1)];
	if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_34(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_52()
{
	if (UNK_0xEB6436A75F06F09F() == 0)
	{
		return false;
	}
	if (UNK_0xBA301E03A078FA59())
	{
		if (UNK_0xB5E18209CA3E7DE6(1, -1))
		{
			if (UNK_0x8BB6DE13A9F3105E())
			{
				return true;
			}
		}
	}
	if (UNK_0x33A494591F2C1975())
	{
		if (UNK_0x4DEB7B48DD0AABA4(1))
		{
			if (UNK_0x8BB6DE13A9F3105E())
			{
				return true;
			}
		}
	}
	if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
	{
		if (UNK_0x05449BDA851F5199(0, -3, 1))
		{
			return true;
		}
	}
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (UNK_0xB5E18209CA3E7DE6(0, -1))
		{
			if (UNK_0x8BB6DE13A9F3105E())
			{
				return true;
			}
		}
	}
	return false;
}

bool func_53()
{
	if (UNK_0xBA301E03A078FA59() && UNK_0x26F0988F7719D17A() == 3)
	{
		return true;
	}
	if (UNK_0xA3F916BCE430ED26() && UNK_0x26F0988F7719D17A() == 3)
	{
		return true;
	}
	if (UNK_0x33A494591F2C1975() && UNK_0x9AE561F9BC3F06D8() == 0)
	{
		return true;
	}
	if (UNK_0xDC30EF462887322E() && UNK_0x9AE561F9BC3F06D8() == 0)
	{
		return true;
	}
	if (UNK_0x0EFF6B4415DAF4A1() && UNK_0x8BB6DE13A9F3105E())
	{
		return true;
	}
	return false;
}

void func_54(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < UNK_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = UNK_0xB98DB26FBF676FA1(1, iVar0);
		switch (iVar1)
		{
			case 200:
				func_187(iVar0);
				func_181(iVar0, uParam0, bParam1);
				break;
			case 218:
				func_179(iVar0, uParam0, bParam1);
				break;
			case 202:
				break;
			case 189:
				break;
			case 190:
				func_178(iVar0, uParam0, bParam1);
				break;
			case 191:
				break;
			case 211:
				func_177(iVar0, uParam0, bParam1);
				break;
			case 221:
				func_176(uParam0, bParam1);
				break;
		}
		iVar0++;
	}
	if (!Global_76622)
	{
		if (Global_111581 > 0)
		{
			func_166();
		}
	}
	func_55(uParam0, bParam1);
}

void func_55(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar19;
	var uVar35;
	struct<18> Var51;
	struct<37> Var71;
	struct<68> Var165;
	int iVar253;

	if (UNK_0x798A3F1296751F46())
	{
		return;
	}
	if (!UNK_0x0F1CCD77290EE12F())
	{
		return;
	}
	if (func_4())
	{
		return;
	}
	iVar0 = UNK_0x71C2780D4D2892F4();
	iVar1 = 0;
	Var71.f_17 = 1;
	Var71.f_21 = -1;
	Var71.f_22 = -1;
	Var71.f_23 = 2;
	Var71.f_36 = 2;
	Var165.f_65 = -1;
	Var165.f_66 = -1;
	Var165.f_67 = 2;
	iVar253 = 0;
	switch (uParam0->f_167)
	{
		case 0:
			if (bParam1)
			{
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (!UNK_0xAFDAB3F3F13EECC3(iVar1))
					{
						if (func_53() && func_52())
						{
							iVar2 = UNK_0x4334A6151185A1A7(iVar1);
							if (func_165(iVar2))
							{
								switch (iVar2)
								{
									case joaat("CREW_MESSAGE"):
										if (UNK_0x0A4C9A3D51EAE31F(802) == 1)
										{
											UNK_0xF20CC8F4F484A5AE(iVar1);
											if (UNK_0x237CD45E2257186F(iVar1, "msg", &uVar3))
											{
											}
											UNK_0x122DAC3E694B106E(iVar1);
										}
										break;
									case joaat("GS_AWARD"):
										func_164(iVar1, 0);
										break;
								}
							}
						}
						else
						{
							UNK_0x122DAC3E694B106E(iVar1);
						}
					}
					iVar1++;
				}
			}
			uParam0->f_167++;
			break;
		case 1:
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				if (!UNK_0xAFDAB3F3F13EECC3(iVar1))
				{
					iVar2 = UNK_0x4334A6151185A1A7(iVar1);
					switch (iVar2)
					{
						case joaat("CREW_MESSAGE"):
							if (bParam1)
							{
								if (func_53() && func_52())
								{
									if (UNK_0x0A4C9A3D51EAE31F(802) == 1)
									{
										UNK_0xF20CC8F4F484A5AE(iVar1);
										if (UNK_0x237CD45E2257186F(iVar1, "msg", &uVar3))
										{
										}
										UNK_0x122DAC3E694B106E(iVar1);
									}
								}
								else
								{
									UNK_0x122DAC3E694B106E(iVar1);
								}
							}
							break;
						case -302691102:
							break;
						case joaat("MISSION_VERIFIED"):
							if (bParam1)
							{
								if (!uParam0->f_166)
								{
									if (func_161())
									{
										if (UNK_0x8CD06866876216F2())
										{
											if (func_160(UNK_0xD803B885F5E47A62(), 0, 1))
											{
												if (func_53() && func_52())
												{
													UNK_0xF20CC8F4F484A5AE(iVar1);
													func_114(0, "XPT_MISSVER", 663093519, 475954354, 5000, 1, -1, 0);
													if (UNK_0x237CD45E2257186F(iVar1, "msg", &uVar3))
													{
													}
													UNK_0x122DAC3E694B106E(iVar1);
												}
												else
												{
													UNK_0x122DAC3E694B106E(iVar1);
												}
												uParam0->f_166 = 1;
											}
										}
									}
								}
							}
							break;
						case joaat("ROCKSTAR_MESSAGE"):
							if ((func_53() && func_52()) && Global_262145.f_24737)
							{
								UNK_0xF20CC8F4F484A5AE(iVar1);
								if (UNK_0x237CD45E2257186F(iVar1, "msg", &uVar3))
								{
								}
								UNK_0x122DAC3E694B106E(iVar1);
							}
							else
							{
								UNK_0x122DAC3E694B106E(iVar1);
							}
							break;
						case 563149281:
							if (bParam1)
							{
								if (!uParam0->f_166)
								{
									if (func_53() && func_52())
									{
										if (((((((((((((((((func_113() == 0 && !func_112()) && !func_111()) && !func_110()) && !func_109()) && !func_108()) && !func_107()) && !func_106()) && !func_105()) && (func_161() && func_101())) && Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_98 != 8) && Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_98 != 9) && !func_99(UNK_0xD803B885F5E47A62())) && !func_98()) && !func_96(UNK_0xD803B885F5E47A62(), 1, 0)) && !UNK_0xA14BB9332558B949()) && !func_95()) && !Global_1652616)
										{
											if (UNK_0x0CE4B3046770188E(iVar1, &(uParam0->f_13)))
											{
												if (func_81(&Var71, &(uParam0->f_13), &Var165, &iVar253))
												{
													if (Var71)
													{
														if (uParam0->f_13.f_58)
														{
														}
														func_78(&(uParam0->f_13.f_10), uParam0->f_13.f_8, uParam0->f_13.f_55, uParam0->f_13.f_56, &(Var165.f_22));
														UNK_0x122DAC3E694B106E(iVar1);
														uParam0->f_166 = 1;
													}
													else
													{
														UNK_0x122DAC3E694B106E(iVar1);
													}
												}
											}
										}
									}
									else
									{
										UNK_0x122DAC3E694B106E(iVar1);
									}
								}
								else
								{
									UNK_0x122DAC3E694B106E(iVar1);
								}
							}
							break;
						case -89752472:
							if (bParam1)
							{
								if (!uParam0->f_166)
								{
									if (func_53() && func_52())
									{
										if (UNK_0x237CD45E2257186F(iVar1, "mn", &uVar35))
										{
											if (UNK_0x237CD45E2257186F(iVar1, "gtag", &uVar19))
											{
												func_77("SC_PUBLISH", &uVar19, &uVar35, 0, 0);
												UNK_0x122DAC3E694B106E(iVar1);
												uParam0->f_166 = 1;
											}
										}
									}
									else
									{
										UNK_0x122DAC3E694B106E(iVar1);
									}
								}
								else
								{
									UNK_0x122DAC3E694B106E(iVar1);
								}
							}
							break;
						case 1662919852:
							UNK_0x122DAC3E694B106E(iVar1);
							break;
						case joaat("BOUNTY"):
							if (bParam1)
							{
								if (!uParam0->f_166)
								{
									UNK_0x623EA58BFAD3402C(iVar1, &Var51);
									if (UNK_0xEAE0D21A50E6C7F4(Var51.f_16, 2))
									{
										if (func_53() && func_52())
										{
											func_75("FM_TXT_BNTY7", &Var51, Var51.f_17, 0, 0);
										}
										func_68("LESTER", "3", 12, "CT_AUD", "MPCT_BNTFL");
									}
									else if (UNK_0xEAE0D21A50E6C7F4(Var51.f_16, false))
									{
										func_68("LESTER", "3", 12, "CT_AUD", "MPCT_BNTSuc");
										if (func_53() && func_52())
										{
											func_65("FM_TXT_BNTY5", &Var51, &(Var51.f_8), Var51.f_17, 0);
										}
									}
									UNK_0x122DAC3E694B106E(iVar1);
									uParam0->f_166 = 1;
								}
								else
								{
									UNK_0x122DAC3E694B106E(iVar1);
								}
							}
							break;
						case -775483672:
							if (func_53() && func_52())
							{
								if (bParam1)
								{
									if (!uParam0->f_166)
									{
										func_58("SC_WON_TOURN");
									}
								}
							}
							func_56(151, 1, -1, 1);
							UNK_0x122DAC3E694B106E(iVar1);
							break;
						case joaat("GS_AWARD"):
							func_164(iVar1, 0);
							break;
						default:
							if (bParam1)
							{
								if (UNK_0x12AB0310C2281427(UNK_0x15714009421DC2F8(iVar1)) != joaat("COUPON"))
								{
									UNK_0x122DAC3E694B106E(iVar1);
								}
							}
							break;
					}
				}
				iVar1++;
			}
			if (uParam0->f_166)
			{
				uParam0->f_167 = 0;
			}
			break;
	}
}

void func_56(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (func_57())
	{
		iVar0 = Global_2583656[iParam0 /*3*/][func_34(iParam2)];
		if (iVar0 != 0)
		{
			UNK_0xD8B681091EBE4064(iVar0, bParam1, iParam3);
		}
	}
}

bool func_57()
{
	return true;
	return false;
}

int func_58(bool bParam0)
{
	int iVar0;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
	func_59(0, bParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_59(int iParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;

	if ((!func_64() || !UNK_0xA14BB9332558B949()) || !func_62(UNK_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_60(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0 /*53*/] = iParam0;
		Global_1670846.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0 /*53*/].f_2[0] = bParam4;
		Global_1670846.f_5[iVar0 /*53*/].f_2[1] = bParam5;
		Global_1670846.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1670846.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1670846.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_60(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0 /*53*/].f_1)
		{
			func_61(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1670846++;
	if (Global_1670846 > 5)
	{
		Global_1670846 = 5;
		return Global_1670846;
	}
	return (Global_1670846 - 1);
}

void func_61(int iParam0)
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0 /*53*/] = { Global_1670846.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_62(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_63(-1, 0) == 8;
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

int func_63(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_15();
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

bool func_64()
{
	return UNK_0xC146D5FBD23C6954(-1762644250);
}

int func_65(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	UNK_0xD06AC7C87A34A6AD(func_66(bParam1));
	if (!bParam4 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam4);
	}
	UNK_0xD06AC7C87A34A6AD(func_66(bParam2));
	if (!bParam4 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam4);
	}
	UNK_0x6D99DF8263D35CE5(bParam3);
	iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
	func_59(42, bParam0, 1, bParam1, bParam3, 0, 0, 0f, 1, bParam2, 0, 0);
	return iVar0;
}

char[] func_66(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_67(&cVar0);
}

char[] func_67(char[4] cParam0)
{
	return cParam0;
}

void func_68(char* sParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4)
{
	func_69(sParam0, sParam1, iParam2, sParam3, sParam4, "");
}

void func_69(char* sParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5)
{
	int iVar0;

	iVar0 = 0;
	if (func_70(iVar0, sParam0, sParam1, iParam2, sParam3, sParam4, sParam5, 0))
	{
		return;
	}
}

bool func_70(int iParam0, char* sParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, char* sParam6, bool bParam7)
{
	int iVar0;

	if (UNK_0xEA6BC48857E0AC4C(sParam1))
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(sParam2))
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(sParam4))
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(sParam5))
	{
		return false;
	}
	if (UNK_0x7724E025FD444F45(sParam1) > 23)
	{
		return false;
	}
	if (UNK_0x7724E025FD444F45(sParam2) > 1)
	{
		return false;
	}
	if (UNK_0x7724E025FD444F45(sParam4) > 7)
	{
		return false;
	}
	if (UNK_0x7724E025FD444F45(sParam5) > 15)
	{
		return false;
	}
	if (iParam0 == 1)
	{
		return false;
	}
	if (bParam7 < 0)
	{
		bParam7 = false;
	}
	iVar0 = iParam0;
	if (func_74(iVar0))
	{
		return false;
	}
	func_73(iVar0, 0);
	StringCopy(&(Global_1370527.f_15[iVar0 /*24*/].f_1), sParam1, 24);
	StringCopy(&(Global_1370527.f_15[iVar0 /*24*/].f_7), sParam2, 8);
	Global_1370527.f_15[iVar0 /*24*/].f_9 = iParam3;
	StringCopy(&(Global_1370527.f_15[iVar0 /*24*/].f_10), sParam4, 8);
	StringCopy(&(Global_1370527.f_15[iVar0 /*24*/].f_12), sParam5, 16);
	StringCopy(&(Global_1370527.f_15[iVar0 /*24*/].f_18), sParam6, 24);
	func_72(iVar0, bParam7);
	func_71(iVar0);
	return true;
}

void func_71(int iParam0)
{
	UNK_0x5D96D8530B3D0904(&(Global_1370527.f_15[iParam0 /*24*/]), false);
}

void func_72(int iParam0, bool bParam1)
{
	Global_1370527.f_15[iParam0 /*24*/].f_16 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), bParam1);
	Global_1370527.f_15[iParam0 /*24*/].f_17 = 1;
}

void func_73(int iParam0, bool bParam1)
{
	Global_1370527.f_15[iParam0 /*24*/] = 0;
	StringCopy(&(Global_1370527.f_15[iParam0 /*24*/].f_1), "", 24);
	StringCopy(&(Global_1370527.f_15[iParam0 /*24*/].f_7), "", 8);
	Global_1370527.f_15[iParam0 /*24*/].f_9 = 145;
	StringCopy(&(Global_1370527.f_15[iParam0 /*24*/].f_10), "", 8);
	StringCopy(&(Global_1370527.f_15[iParam0 /*24*/].f_12), "", 16);
	StringCopy(&(Global_1370527.f_15[iParam0 /*24*/].f_18), "", 24);
	Global_1370527.f_15[iParam0 /*24*/].f_17 = 0;
	if (bParam1)
	{
		return;
	}
}

bool func_74(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1370527.f_15[iParam0 /*24*/], true);
}

int func_75(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<16> Var1;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	UNK_0xD06AC7C87A34A6AD(func_66(bParam1));
	if (!bParam3 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam3);
	}
	UNK_0x6D99DF8263D35CE5(bParam2);
	if (bParam4)
	{
		Var1 = { func_76(bParam1) };
		iVar0 = UNK_0x1AEA174B291A9906("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
	}
	func_59(29, bParam0, 1, bParam1, bParam2, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

struct<16> func_76(char* sParam0)
{
	struct<16> Var0;

	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

int func_77(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<16> Var1;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	UNK_0xD06AC7C87A34A6AD(func_66(bParam1));
	if (!bParam3 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam3);
	}
	UNK_0x0D45A7AB73600CFA(bParam2);
	if (bParam4)
	{
		Var1 = { func_76(bParam1) };
		iVar0 = UNK_0x1AEA174B291A9906("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
	}
	func_59(31, bParam0, 1, bParam2, 0, 0, 0, 0f, 0, bParam1, 0, 0);
	return iVar0;
}

void func_78(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	switch (iParam2)
	{
		case 3:
			func_80("SC_BTRSCR_SUR", bParam0, bParam4, bParam1, 0, 0);
			break;
		case 1:
			switch (iParam3)
			{
				case 0:
				case 3:
					func_80("SC_BTRSCR_DMN", bParam0, bParam4, bParam1, 0, 0);
					break;
				case 1:
				case 4:
					func_80("SC_BTRSCR_DMT", bParam0, bParam4, bParam1, 0, 0);
					break;
				case 2:
					func_80("SC_BTRSCR_DMV", bParam0, bParam4, bParam1, 0, 0);
					break;
			}
			break;
		case 2:
			switch (iParam3)
			{
				case 0:
					func_79("SC_BTRSCR_RACN", bParam0, bParam1, bParam4, 0);
					break;
				case 1:
					func_79("SC_BTRSCR_RACG", bParam0, bParam1, bParam4, 0);
					break;
				case 2:
					func_79("SC_BTRSCR_RACR", bParam0, bParam1, bParam4, 0);
					break;
				case 3:
					func_79("SC_BTRSCR_RACN", bParam0, bParam1, bParam4, 0);
					break;
			}
			break;
		case 8:
			func_79("SC_BTRSCR_BJP", bParam0, bParam1, bParam4, 0);
			break;
		case 0:
			func_80("SC_BTRSCR_SUR", bParam0, bParam4, bParam1, 0, 0);
			break;
	}
}

int func_79(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<16> Var1;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	UNK_0xD06AC7C87A34A6AD(func_66(bParam1));
	UNK_0xD06AC7C87A34A6AD(bParam3);
	UNK_0x164431059FF80580(bParam2, 7);
	if (bParam4)
	{
		Var1 = { func_76(bParam1) };
		iVar0 = UNK_0x1AEA174B291A9906("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
	}
	func_59(18, bParam0, 1, bParam1, bParam2, 0, 0, 0f, 0, bParam3, 0, 0);
	return iVar0;
}

int func_80(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	struct<16> Var1;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	UNK_0xD06AC7C87A34A6AD(func_66(bParam1));
	if (!bParam4 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam4);
	}
	UNK_0xD06AC7C87A34A6AD(bParam2);
	UNK_0x6D99DF8263D35CE5(bParam3);
	if (bParam5)
	{
		Var1 = { func_76(bParam1) };
		iVar0 = UNK_0x1AEA174B291A9906("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
	}
	func_59(30, bParam0, 1, bParam1, bParam3, 0, 0, 0f, 0, bParam2, 0, 0);
	return iVar0;
}

bool func_81(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	switch (uParam0->f_4)
	{
		case 0:
			*uParam0 = 0;
			if (func_98())
			{
				return false;
			}
			func_94();
			func_93();
			if (func_92())
			{
				*uParam0 = 0;
				return true;
			}
			else
			{
				UNK_0x71939E9C5DD93A34(0);
			}
			func_91(uParam0, 1);
			break;
		case 1:
			if (UNK_0x532097D906222538(sParam1, func_90(0)))
			{
				func_91(uParam0, 3);
			}
			break;
		case 3:
			if (UNK_0x00528CBC2478166A())
			{
				uParam0->f_41 = UNK_0xA68C484CB8CFE012();
				if (UNK_0x2D6B689DC548F438())
				{
				}
				else
				{
					func_89(uParam0, 1, 1);
					uParam0->f_41 = UNK_0xA68C484CB8CFE012();
					*uParam0 = 0;
					return true;
				}
				if (UNK_0xAFE0F18038B8A4C0() > 0)
				{
					if (UNK_0x45A4029B43848D4B(0))
					{
						func_82(sParam2, 0, iParam3);
						func_89(uParam0, 1, 1);
						*uParam0 = 1;
						return true;
					}
				}
				else
				{
					func_89(uParam0, 1, 1);
					*uParam0 = 0;
					return true;
				}
			}
			break;
	}
	return false;
}

void func_82(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = UNK_0xB45EDD00181AF3F2();
	iVar1 = UNK_0x6D954AF55D3925DB(iVar0, "mission");
	iVar2 = UNK_0x6D954AF55D3925DB(iVar1, "gen");
	StringCopy(sParam0, UNK_0x774936D1A30C902C(iParam1), 24);
	StringCopy(&(sParam0->f_6), UNK_0xA89E31B6D809E76E(iParam1), 64);
	StringCopy(&(sParam0->f_22), UNK_0x91259F92C05E1E44(iParam1), 64);
	sParam0->f_56 = { func_88(iVar2) };
	sParam0->f_59 = { func_87(iVar2, "cam") };
	sParam0->f_62 = { func_86(iVar2) };
	sParam0->f_65 = UNK_0x8A83B52A17A321DB(iVar2, "type");
	sParam0->f_68 = UNK_0x8A83B52A17A321DB(iVar2, "subtype");
	sParam0->f_80 = UNK_0x8A83B52A17A321DB(iVar2, "adverm");
	sParam0->f_79 = UNK_0x8A83B52A17A321DB(iVar2, "testcomplete");
	sParam0->f_69 = UNK_0x8A83B52A17A321DB(iVar2, "min");
	sParam0->f_70 = UNK_0x8A83B52A17A321DB(iVar2, "rank");
	sParam0->f_71 = UNK_0x8A83B52A17A321DB(iVar2, "num");
	sParam0->f_73 = func_85(UNK_0x43F3160CD7399127(iParam1, 0), UNK_0xE4D3676AD065E454(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = UNK_0x8A83B52A17A321DB(iVar2, "charcon");
	*iParam2 = UNK_0x12AB0310C2281427(UNK_0x017764C9FA977AFF(0));
	if (func_84(*iParam2))
	{
		sParam0->f_68 = 8;
	}
	if (func_83() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4578)
		{
			sParam0->f_71 = Global_262145.f_4578;
		}
		if (sParam0->f_69 > Global_262145.f_4578)
		{
			sParam0->f_69 = Global_262145.f_4578;
		}
	}
	if (!func_92())
	{
		iVar3 = UNK_0x4446517B2720C2F9(iParam1);
		if (UNK_0xCEA7093049ECDD91(iVar3))
		{
			sParam0->f_54 = UNK_0x051ABD838C3CAF26(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (UNK_0xAE496C664AE89A9C(iVar2, "ltm") == 2)
	{
		sParam0->f_78 = UNK_0x8A83B52A17A321DB(iVar2, "ltm");
	}
	UNK_0x5D96D8530B3D0904(&(sParam0->f_76), 13);
	func_93();
}

int func_83()
{
	return Global_30768;
}

bool func_84(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_9027[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_85(float fParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return -1;
	}
	iVar0 = SYSTEM::ROUND((fParam0 * 100f));
	if (iVar0 < 0)
	{
		iVar0 = -1;
	}
	return iVar0;
}

Vector3 func_86(int iParam0)
{
	vector3 vVar0;

	if (UNK_0xAE496C664AE89A9C(iParam0, "camp") == 3)
	{
		vVar0.x = UNK_0xB37C1AC7E8A75F3C(iParam0, "camp");
	}
	else if (UNK_0xAE496C664AE89A9C(iParam0, "camp") == 2)
	{
		vVar0.x = SYSTEM::TO_FLOAT(UNK_0x8A83B52A17A321DB(iParam0, "camp"));
	}
	if (UNK_0xAE496C664AE89A9C(iParam0, "camh") == 3)
	{
		vVar0.f_2 = UNK_0xB37C1AC7E8A75F3C(iParam0, "camh");
	}
	else if (UNK_0xAE496C664AE89A9C(iParam0, "camh") == 2)
	{
		vVar0.f_2 = SYSTEM::TO_FLOAT(UNK_0x8A83B52A17A321DB(iParam0, "camh"));
	}
	return vVar0;
}

Vector3 func_87(int iParam0, char* sParam1)
{
	vector3 vVar0;
	int iVar3;

	if (UNK_0xAE496C664AE89A9C(iParam0, sParam1) == 5)
	{
		vVar0 = { UNK_0xC0F58A082935B6E1(iParam0, sParam1) };
	}
	else if (UNK_0xAE496C664AE89A9C(iParam0, sParam1) == 6)
	{
		iVar3 = UNK_0x6D954AF55D3925DB(iParam0, sParam1);
		if (UNK_0xAE496C664AE89A9C(iVar3, "x") == 2)
		{
			vVar0.x = SYSTEM::TO_FLOAT(UNK_0x8A83B52A17A321DB(iVar3, "x"));
		}
		else
		{
			vVar0.x = UNK_0xB37C1AC7E8A75F3C(iVar3, "x");
		}
		if (UNK_0xAE496C664AE89A9C(iVar3, "y") == 2)
		{
			vVar0.f_1 = SYSTEM::TO_FLOAT(UNK_0x8A83B52A17A321DB(iVar3, "y"));
		}
		else
		{
			vVar0.f_1 = UNK_0xB37C1AC7E8A75F3C(iVar3, "y");
		}
		if (UNK_0xAE496C664AE89A9C(iVar3, "z") == 2)
		{
			vVar0.f_2 = SYSTEM::TO_FLOAT(UNK_0x8A83B52A17A321DB(iVar3, "z"));
		}
		else
		{
			vVar0.f_2 = UNK_0xB37C1AC7E8A75F3C(iVar3, "z");
		}
	}
	return vVar0;
}

Vector3 func_88(int iParam0)
{
	vector3 vVar0;

	if (iParam0 == 0)
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { func_87(iParam0, "start") };
	if (UNK_0x0399732A9EBC368E(vVar0, -2233.327f, 2436.134f, -14.65155f, -2229.56f, 2399.576f, 11.99761f, 24f, 0, true))
	{
		vVar0 = { -2303.54f, 2428.09f, 2.02f };
	}
	if (UNK_0x0399732A9EBC368E(vVar0, 603.6218f, 5573.046f, 694.484f, 594.2379f, 5542.792f, 727.479f, 33.5f, 0, true))
	{
		vVar0 = { 502.6f, 5537.06f, 777.05f };
	}
	return vVar0;
}

void func_89(var uParam0, bool bParam1, bool bParam2)
{
	struct<52> Var0;

	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_12 = 0;
	uParam0->f_32 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_17 = 1;
	uParam0->f_17 = 1;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = -1;
	uParam0->f_3 = 0;
	uParam0->f_28 = 0;
	uParam0->f_29 = 0;
	uParam0->f_30 = 0;
	Global_1573299[0] = 0;
	Global_1573299[1] = 0;
	uParam0->f_41 = 0;
	if (bParam2)
	{
		uParam0->f_42 = { Var0 };
	}
	if (bParam1)
	{
		func_91(uParam0, 0);
	}
}

char* func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		case 1:
			return "playlist";
		case 2:
			return "lifeinvaderpost";
		case 3:
			return "photo";
		case 4:
			return "challenge";
		default:
			break;
	}
	return "gta5mission";
}

void func_91(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

bool func_92()
{
	return Global_1573282.f_4;
}

void func_93()
{
	if (UNK_0xB45EDD00181AF3F2() != 0)
	{
		UNK_0xEADC638FF742BE01();
	}
}

void func_94()
{
	if (func_92())
	{
		UNK_0x4739D3E2B190C50A();
	}
	else
	{
		UNK_0x025C4CF41AEFDEC7();
	}
}

bool func_95()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

bool func_96(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_97())
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, false))
	{
		return true;
	}
	if (bParam1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, true))
		{
			return true;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_97()
{
	return -1;
}

bool func_98()
{
	if (UNK_0xEB22E23C5DDDD376())
	{
		return true;
	}
	else if (UNK_0xAE6F4A4A47122354())
	{
		return true;
	}
	else if (UNK_0xC49C081F809590D9())
	{
		return true;
	}
	return false;
}

bool func_99(int iParam0)
{
	return func_100(iParam0);
}

bool func_100(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_13.f_1, false);
}

bool func_101()
{
	if (Global_1312448)
	{
		return true;
	}
	if (func_104())
	{
		return true;
	}
	if (func_103())
	{
		return true;
	}
	return func_102(120, -1);
}

bool func_102(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_34(iParam1)];
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

bool func_103()
{
	return Global_1312865;
}

bool func_104()
{
	return Global_1312867;
}

bool func_105()
{
	if ((!Global_2394836 && !Global_2394836.f_1) && !Global_2394836.f_2)
	{
		return false;
	}
	if (!Global_2394836.f_23)
	{
		return true;
	}
	return false;
}

bool func_106()
{
	return Global_1310987.f_5;
}

bool func_107()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_35;
}

bool func_108()
{
	return Global_2450632.f_606;
}

bool func_109()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632, 21);
}

bool func_110()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632, 19);
}

bool func_111()
{
	return Global_2458936.f_1;
}

bool func_112()
{
	return Global_2450632.f_591;
}

int func_113()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_196;
}

bool func_114(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_115(iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

bool func_115(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;

	bVar0 = func_116(iParam0, 0, bParam1, iParam4, iParam5, 0, iParam6, 1, bParam2, iParam3, bParam7);
	return bVar0;
}

bool func_116(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (func_159(UNK_0xD803B885F5E47A62()) || func_158(UNK_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_155() || func_151(UNK_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_150(bParam2))
	{
	}
	if (func_149())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		bVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		bVar1 = func_147(bVar1);
		fVar3 = (SYSTEM::TO_FLOAT(bVar1) * Global_262145.f_1);
		bVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			bVar1 = func_146(&bVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_143(0, &bVar1);
					break;
				case 3:
					func_143(1, &bVar1);
					break;
				case 1:
					func_139(&bVar1);
					break;
			}
		}
		if (bVar1 > Global_1686714)
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (bVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					bVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					bVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_137(1164, bVar1, -1);
			if (iParam1 == 0)
			{
				func_127((func_136(UNK_0xD803B885F5E47A62()) + bVar1), iParam9, 0);
				if (bParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				UNK_0x189A6F4108CDFDD6(bVar1, bParam8, iParam9);
				if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_2 != -1)
				{
					func_137(1165, bVar1, -1);
				}
				func_121(bVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_117((func_119(UNK_0xD803B885F5E47A62()) + bVar1));
			}
			else
			{
				func_117((func_119(UNK_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return bVar1;
}

void func_117(bool bParam0)
{
	if (func_149())
	{
		Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_5 = bParam0;
		func_118(joaat("MPPLY_GLOBALXP"), bParam0);
	}
}

void func_118(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, 1);
	}
}

int func_119(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_160(bParam0, 0, 1))
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return func_120(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_5;
			}
		}
		else
		{
			return func_120(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_121(bool bParam0)
{
	struct<13> Var0;
	int iVar13;

	Var0 = { func_126(UNK_0xD803B885F5E47A62()) };
	if (UNK_0x080E9D045AEE5605())
	{
		if (UNK_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar13 = func_124(func_125(&Var0));
			if (iVar13 == 0)
			{
				func_123(&Global_1387915, bParam0);
				func_122(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_123(&Global_1387916, bParam0);
				func_122(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_123(&Global_1387917, bParam0);
				func_122(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_123(&Global_1387918, bParam0);
				func_122(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_123(&Global_1387919, bParam0);
				func_122(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1387919);
			}
		}
	}
}

void func_122(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1387910 = bParam1;
			break;
		case joaat("MPPLY_CREW_1_ID"):
			Global_1387912 = bParam1;
			break;
		case joaat("MPPLY_CREW_2_ID"):
			Global_1387912 = bParam1;
			break;
		case joaat("MPPLY_CREW_3_ID"):
			Global_1387913 = bParam1;
			break;
		case joaat("MPPLY_CREW_4_ID"):
			Global_1387914 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1387915 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1387916 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1387917 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1387918 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1387919 = bParam1;
			break;
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1387920 = bParam1;
			break;
		case joaat("MPPLY_FRIENDLY"):
			Global_1387921 = bParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1387922 = bParam1;
			break;
		case joaat("MPPLY_GRIEFING"):
			Global_1387923 = bParam1;
			break;
		case joaat("MPPLY_HELPFUL"):
			Global_1387924 = bParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1387925 = bParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1387926 = bParam1;
			break;
		default:
			break;
	}
}

void func_123(var uParam0, bool bParam1)
{
	*uParam0 = (*uParam0 + bParam1);
}

int func_124(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_125(var uParam0)
{
	if (UNK_0x080E9D045AEE5605())
	{
		if (UNK_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

struct<13> func_126(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

void func_127(bool bParam0, int iParam1, int iParam2)
{
	if (func_149())
	{
		if (bParam0 >= 1787576850)
		{
			bParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (bParam0 < Global_1388060[func_34(-1)])
				{
					UNK_0x189A6F4108CDFDD6(bParam0, -523908350, iParam1);
					return;
				}
				else if (bParam0 == Global_1388060[func_34(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (bParam0 == 0)
			{
				UNK_0x189A6F4108CDFDD6(bParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (bParam0 < 0)
			{
				UNK_0x189A6F4108CDFDD6(bParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_135(UNK_0xD803B885F5E47A62()))
		{
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_1 = bParam0;
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_6 = func_133(bParam0, 1);
		}
		func_132(639, bParam0, -1, 1);
		func_131(640, func_133(bParam0, 1), -1, 1, 0);
		Global_1388060[func_34(-1)] = bParam0;
		func_128(-1109644434, 7, 0);
	}
}

void func_128(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_130(iParam1, bParam2))
	{
		iVar0 = func_129();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_129()
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

bool func_130(int iParam0, bool bParam1)
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

void func_131(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_34(bParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

void func_132(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = Global_2548434[iParam0 /*3*/][func_34(bParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_34(bParam2)] = bParam1;
			break;
		case 788:
			Global_1387994[func_34(bParam2)] = bParam1;
			break;
		case 789:
			Global_1388000[func_34(bParam2)] = bParam1;
			break;
		case 790:
			Global_1388006[func_34(bParam2)] = bParam1;
			break;
		case 8726:
			Global_1388012[func_34(bParam2)] = bParam1;
			break;
		case 777:
			Global_1387958[func_34(bParam2)] = bParam1;
			break;
		case 778:
			Global_1387964[func_34(bParam2)] = bParam1;
			break;
		case 779:
			Global_1387970[func_34(bParam2)] = bParam1;
			break;
		case 780:
			Global_1387976[func_34(bParam2)] = bParam1;
			break;
		case 8728:
			Global_1387982[func_34(bParam2)] = bParam1;
			break;
		case 767:
			Global_1387928[func_34(bParam2)] = bParam1;
			break;
		case 768:
			Global_1387934[func_34(bParam2)] = bParam1;
			break;
		case 769:
			Global_1387940[func_34(bParam2)] = bParam1;
			break;
		case 770:
			Global_1387946[func_34(bParam2)] = bParam1;
			break;
		case 8730:
			Global_1387952[func_34(bParam2)] = bParam1;
			break;
		case 757:
			Global_1388018[func_34(bParam2)] = bParam1;
			break;
		case 758:
			Global_1388024[func_34(bParam2)] = bParam1;
			break;
		case 759:
			Global_1388030[func_34(bParam2)] = bParam1;
			break;
		case 760:
			Global_1388036[func_34(bParam2)] = bParam1;
			break;
		case 8732:
			Global_1388042[func_34(bParam2)] = bParam1;
			break;
		case 1303:
			Global_1388048[func_34(bParam2)] = bParam1;
			break;
		case 7233:
			Global_1388054[func_34(bParam2)] = bParam1;
			break;
		case 639:
			Global_1388060[func_34(bParam2)] = bParam1;
			break;
		case 1278:
			Global_1388066[func_34(bParam2)] = bParam1;
			break;
		case 1876:
			Global_2586065[0 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 2267:
			Global_2586065[1 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 2929:
			Global_2586065[2 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3058:
			Global_2586065[3 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 10016:
			Global_2586214[func_34(bParam2)] = bParam1;
			break;
		case 764:
			Global_1388072[func_34(bParam2)] = bParam1;
			break;
		case 765:
			Global_1388078[func_34(bParam2)] = bParam1;
			break;
		case 766:
			Global_1388084[func_34(bParam2)] = bParam1;
			break;
		case 8731:
			Global_1388090[func_34(bParam2)] = bParam1;
			break;
		case 1236:
			Global_1388096[func_34(bParam2)] = bParam1;
			break;
		case 3053:
			Global_2586138[0 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3054:
			Global_2586138[1 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3055:
			Global_2586138[2 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3056:
			Global_2586138[3 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3057:
			Global_2586138[4 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3636:
			Global_2586217[0 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3637:
			Global_2586217[1 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3638:
			Global_2586217[2 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3639:
			Global_2586217[3 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3640:
			Global_2586217[4 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3641:
			Global_2586233[0 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3642:
			Global_2586233[1 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3643:
			Global_2586233[2 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3644:
			Global_2586233[3 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3645:
			Global_2586233[4 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3221:
			Global_2586138[5 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3227:
			Global_2586065[4 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3663:
			Global_2586249[func_34(bParam2)] = bParam1;
			break;
		case 3664:
			Global_2586258[func_34(bParam2)] = bParam1;
			break;
		case 3665:
			Global_2586252[func_34(bParam2)] = bParam1;
			break;
		case 3666:
			Global_2586261[func_34(bParam2)] = bParam1;
			break;
		case 3667:
			Global_2586255[func_34(bParam2)] = bParam1;
			break;
		case 3668:
			Global_2586264[func_34(bParam2)] = bParam1;
			break;
		case 3689:
			Global_2586267[func_34(bParam2)] = bParam1;
			break;
		case 3229:
			Global_2586138[6 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3230:
			Global_2586065[5 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3234:
			Global_2586138[7 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 3232:
			Global_2586065[6 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 4019:
			Global_2586138[8 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 4020:
			Global_2586065[7 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 4022:
			Global_2586138[9 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 4023:
			Global_2586065[8 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 4025:
			Global_2586138[10 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 4026:
			Global_2586065[9 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 4028:
			Global_2586138[11 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 4029:
			Global_2586065[10 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 6109:
			Global_2586138[12 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 6110:
			Global_2586065[11 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 6167:
			Global_2586138[13 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 6168:
			Global_2586065[12 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 6545:
			Global_2586138[14 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 6546:
			Global_2586065[13 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 6558:
			Global_2586138[15 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 6559:
			Global_2586065[14 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 6561:
			Global_2586138[16 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 6562:
			Global_2586065[15 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 6564:
			Global_2586138[17 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 6565:
			Global_2586065[16 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 7283:
			Global_2586065[17 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 7285:
			Global_2586065[18 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 7287:
			Global_2586065[19 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 8010:
			Global_2586065[20 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 8282:
			Global_2586270[func_34(bParam2)] = bParam1;
			break;
		case 8283:
			Global_2586273[func_34(bParam2)] = bParam1;
			break;
		case 8284:
			Global_2586276[func_34(bParam2)] = bParam1;
			break;
		case 8285:
			Global_2586279[func_34(bParam2)] = bParam1;
			break;
		case 8286:
			Global_2586282[func_34(bParam2)] = bParam1;
			break;
		case 8287:
			Global_2586285[func_34(bParam2)] = bParam1;
			break;
		case 8288:
			Global_2586288[func_34(bParam2)] = bParam1;
			break;
		case 8289:
			Global_2586291[func_34(bParam2)] = bParam1;
			break;
		case 8290:
			Global_2586294[func_34(bParam2)] = bParam1;
			break;
		case 8291:
			Global_2586297[func_34(bParam2)] = bParam1;
			break;
		case 8292:
			Global_2586300[func_34(bParam2)] = bParam1;
			break;
		case 8293:
			Global_2586303[func_34(bParam2)] = bParam1;
			break;
		case 8294:
			Global_2586306[func_34(bParam2)] = bParam1;
			break;
		case 8900:
			Global_2586309[func_34(bParam2)] = bParam1;
			break;
		case 8534:
			Global_2586065[21 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 8977:
			Global_2586138[23 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 8975:
			Global_2586065[22 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 8980:
			Global_2586138[24 /*3*/][func_34(bParam2)] = bParam1;
			break;
		case 8978:
			Global_2586065[23 /*3*/][func_34(bParam2)] = bParam1;
			break;
		default:
			break;
	}
}

int func_133(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_134(bParam0, 0);
}

int func_134(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_291133[iVar3] == bParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < bParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

bool func_135(bool bParam0)
{
	if (bParam0 == -1)
	{
		return false;
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2439138.f_1, bParam0);
	}
	return true;
}

int func_136(bool bParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (bParam0 > -1)
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return Global_1388060[func_34(-1)];
			}
			else if (func_135(bParam0))
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_34(-1)];
	}
	return 0;
}

void func_137(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_51(iParam0, func_34(bParam2), 0);
	bVar0 = (bVar0 + bParam1);
	if (!func_138(iParam0))
	{
		func_131(iParam0, bVar0, bParam2, 1, 0);
	}
	else
	{
		func_132(iParam0, bVar0, bParam2, 1);
	}
}

bool func_138(int iParam0)
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

void func_139(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;

	iVar1 = UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62());
	bVar0 = false;
	while (bVar0 < UNK_0x54EABC0DD106045B())
	{
		bVar4 = UNK_0xF4FB3A22FC4991C8(bVar0);
		if (UNK_0x81A93C8315C28F58(bVar4))
		{
			bVar5 = UNK_0x4B2BFE4A3BC248ED(bVar4);
			if (UNK_0x08067D4957B73C02(bVar5) != -1)
			{
				if (UNK_0x08067D4957B73C02(bVar5) == iVar1 || func_142(UNK_0x08067D4957B73C02(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != UNK_0xD803B885F5E47A62())
					{
						if (func_141(UNK_0xD803B885F5E47A62(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_140(*bParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_140(*bParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*bParam0 = (*bParam0 + iVar6);
	*bParam0 = (*bParam0 + iVar7);
}

float func_140(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

bool func_141(bool bParam0, bool bParam1)
{
	if (UNK_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_126(bParam0) };
		Global_2513231 = { func_126(bParam1) };
		if (UNK_0xF2EC2A39FF9E838D(&Global_2513218))
		{
			if (UNK_0xF2EC2A39FF9E838D(&Global_2513231))
			{
				UNK_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218);
				UNK_0xD9DA83C40D038174(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_142(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return true;
		}
		return false;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return true;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, false);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, true);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 2);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 3);
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 4);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 5);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 6);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 7);
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 8);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 9);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 10);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 11);
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 12);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 13);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 14);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 15);
				default:
					break;
			}
			break;
	}
	return false;
}

void func_143(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < UNK_0x54EABC0DD106045B())
		{
			bVar3 = iVar0;
			if (UNK_0x81A93C8315C28F58(bVar3))
			{
				bVar4 = UNK_0x4B2BFE4A3BC248ED(bVar3);
				if (func_160(bVar4, 0, 1))
				{
					if (bVar4 != UNK_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_141(UNK_0xD803B885F5E47A62(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar4 = iVar0;
			if (func_160(bVar4, 1, 1))
			{
				if (bVar4 != UNK_0xD803B885F5E47A62())
				{
					if (func_144(UNK_0xD803B885F5E47A62(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_141(UNK_0xD803B885F5E47A62(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_140(*bParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_140(*bParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*bParam1 = (*bParam1 + iVar5);
	*bParam1 = (*bParam1 + iVar6);
}

float func_144(bool bParam0, bool bParam1)
{
	return SYSTEM::VDIST(func_145(bParam0), func_145(bParam1));
	return 0f;
}

Vector3 func_145(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

bool func_146(bool bParam0)
{
	int iVar0;

	if (UNK_0xA0501A3E65437842() != 3)
	{
		return *bParam0;
	}
	iVar0 = SYSTEM::ROUND((func_140(*bParam0, 100) * 25f));
	*bParam0 = (*bParam0 + iVar0);
	return *bParam0;
}

bool func_147(bool bParam0)
{
	if (bParam0 < 0)
	{
		if (UNK_0x51D1D19912234EA0(bParam0) > func_136(UNK_0xD803B885F5E47A62()))
		{
			bParam0 = -func_136(UNK_0xD803B885F5E47A62());
		}
	}
	if (func_148(8000, 0, 0) > 0)
	{
		if (func_148(8000, 0, 0) < (bParam0 + func_136(UNK_0xD803B885F5E47A62())))
		{
			bParam0 = (func_148(8000, 0, 0) - func_136(UNK_0xD803B885F5E47A62()));
		}
	}
	return bParam0;
}

int func_148(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_291133[iParam0];
}

bool func_149()
{
	return true;
}

bool func_150(bool bParam0)
{
	if (UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		return true;
	}
	else if (UNK_0x7F8A39872A07D2CE(bParam0, "") || UNK_0x7F8A39872A07D2CE(bParam0, "0"))
	{
		return true;
	}
	return false;
}

int func_151(int iParam0)
{
	return func_152(func_153(iParam0));
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_153(int iParam0)
{
	if (func_154(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_154(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_155()
{
	if (UNK_0xA14BB9332558B949())
	{
		return func_157();
	}
	return func_156(Global_4456448.f_194990);
}

int func_156(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_157()
{
	return Global_2450632.f_17;
}

bool func_158(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_159(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

bool func_160(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (UNK_0x40B8C182D63932FC(bParam0))
		{
			if (bParam1)
			{
				if (!UNK_0xE1DBBD6CE209517C(bParam0))
				{
					return false;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[bVar0])
				{
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

bool func_161()
{
	if (func_163() && func_162(0))
	{
		return true;
	}
	return false;
}

var func_162(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_163()
{
	return func_162(func_15() + 1);
}

void func_164(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar19;
	var uVar20;
	int iVar36;
	int iVar37;
	var uVar38;

	iVar0 = 0;
	iVar1 = 0;
	StringCopy(&Global_2461954, "", 64);
	UNK_0x87D2E231F0F96E8C(iParam0, "awardAmount", &iVar2);
	UNK_0x237CD45E2257186F(iParam0, "awardType", &uVar3);
	iVar19 = UNK_0x2CF5A320D81DD616(iParam0, "fullRefresh");
	UNK_0x237CD45E2257186F(iParam0, "awardLabel", &Global_2461954);
	UNK_0x237CD45E2257186F(iParam0, "items", &uVar20);
	UNK_0x87D2E231F0F96E8C(iParam0, "userScreen", &iVar36);
	UNK_0x122DAC3E694B106E(iParam0);
	if (iVar2 != 0)
	{
		if (iVar2 == -99)
		{
			Global_2461936 = -99;
			Global_2461935 = iVar2;
		}
		else if (iVar2 < 0)
		{
			Global_2461936 = -1;
			Global_2461935 = iVar2;
		}
		else if (iVar2 > 0)
		{
			Global_2461936 = 1;
			Global_2461935 = iVar2;
		}
		iVar1 = 1;
	}
	if (UNK_0x7F8A39872A07D2CE(&uVar20, "[]") == 0)
	{
		Global_2461972 = 1;
	}
	if (iVar36 > 0)
	{
		Global_2461973 = iVar36;
	}
	if (iParam1 == 0)
	{
		if (func_83() == 0)
		{
			if (iVar19 == 1)
			{
				UNK_0xC02A8E2FDF7A5FB8(&iVar37, &uVar38);
				if (iVar37 == 8)
				{
					UNK_0x306565F6DB1F9D8A(iVar0, iVar1);
				}
			}
		}
	}
}

bool func_165(int iParam0)
{
	if (iParam0 == joaat("CREW_MESSAGE"))
	{
		return true;
	}
	if (iParam0 == joaat("GS_AWARD"))
	{
		return true;
	}
	return false;
}

void func_166()
{
	int iVar0;

	Global_111579 = UNK_0x1C0640BA9A7327B3();
	if ((Global_111579 - Global_111580) > Global_111385)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_111573[iVar0] == 1)
			{
				Global_111581 = (Global_111581 - 1);
				if (Global_111581 < 0)
				{
					Global_111581 = 0;
				}
				Global_111573[iVar0] = 0;
				func_167(Global_111386[iVar0 /*36*/], Global_111567[iVar0]);
				iVar0 = 5;
				Global_111580 = UNK_0x1C0640BA9A7327B3();
			}
			iVar0++;
		}
	}
}

void func_167(struct<36> Param0, int iParam36)
{
	char cVar0[64];
	char cVar16[64];
	char cVar32[64];

	iParam36 = func_174(Param0);
	if (iParam36 != -1)
	{
		if (UNK_0x0A4C9A3D51EAE31F(803) == 1)
		{
			if (func_53())
			{
				func_170(Param0, iParam36);
			}
		}
	}
	else
	{
		switch (Param0)
		{
			case joaat("TOTAL_PROGRESS_MADE"):
				if (UNK_0x0A4C9A3D51EAE31F(803) == 1)
				{
					if (func_53())
					{
						UNK_0x1E64CE678ED5F61E("CELL_FEED_F100PC_COMP");
						StringCopy(&cVar0, "<C>", 64);
						StringConCat(&cVar0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
						StringConCat(&cVar0, &(Param0.f_1), 64);
						StringConCat(&cVar0, "...", 64);
						StringConCat(&cVar0, "</C>", 64);
						UNK_0x1AEA174B291A9906("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar0, 0);
						Global_111580 = UNK_0x1C0640BA9A7327B3();
					}
				}
				break;
			case joaat("SP_VEHICLE_MODELS_DRIVEN"):
				if (Param0.f_17 == 200)
				{
					Global_111579 = UNK_0x1C0640BA9A7327B3();
					if ((Global_111579 - Global_111580) > Global_111385)
					{
						if (UNK_0x0A4C9A3D51EAE31F(803) == 1)
						{
							if (func_53())
							{
								UNK_0x1E64CE678ED5F61E("CELL_FEED_DRIVEN_ALL_VEH");
								StringCopy(&cVar16, "<C>", 64);
								StringConCat(&cVar16, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
								StringConCat(&cVar16, &(Param0.f_1), 64);
								StringConCat(&cVar16, "...", 64);
								StringConCat(&cVar16, "</C>", 64);
								UNK_0x1AEA174B291A9906("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar16, 0);
								Global_111580 = UNK_0x1C0640BA9A7327B3();
							}
						}
					}
					else
					{
						func_169(Param0, -1);
					}
				}
				break;
			case joaat("NUM_RNDEVENTS_COMPLETED"):
				Global_111579 = UNK_0x1C0640BA9A7327B3();
				if ((Global_111579 - Global_111580) > Global_111385)
				{
					if (UNK_0x0A4C9A3D51EAE31F(803) == 1)
					{
						if (func_53())
						{
							UNK_0x1E64CE678ED5F61E("CELL_FEED_RNDEV_COMP");
							StringCopy(&cVar32, "<C>", 64);
							StringConCat(&cVar32, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
							StringConCat(&cVar32, &(Param0.f_1), 64);
							StringConCat(&cVar32, "...", 64);
							StringConCat(&cVar32, "</C>", 64);
							UNK_0x1AEA174B291A9906("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar32, 0);
							Global_111580 = UNK_0x1C0640BA9A7327B3();
						}
					}
				}
				else
				{
					func_169(Param0, -1);
				}
				break;
			case joaat("NUM_HIDDEN_PACKAGES_0"):
				if (Param0.f_17 == 50)
				{
					func_168(Param0, "CELL_FEED_LETTER_SCRAPS");
				}
				break;
			case joaat("NUM_HIDDEN_PACKAGES_1"):
				if (Param0.f_17 == 50)
				{
					func_168(Param0, "CELL_FEED_SPACESHIP_PARTS");
				}
				break;
			case joaat("NUM_HIDDEN_PACKAGES_3"):
				if (Param0.f_17 == 50)
				{
					func_168(Param0, "CELL_FEED_SONAR_COLL");
				}
				break;
			case joaat("SP0_DIST_DRIVING_CAR"):
				if (Param0.f_18 == 500f)
				{
					func_168(Param0, "CELL_FEED_DRIVEN_500");
				}
				if (Param0.f_18 == 5000f)
				{
					func_168(Param0, "CELL_FEED_DRIVEN_5000");
				}
				if (Param0.f_18 == 50000f)
				{
					func_168(Param0, "CELL_FEED_DRIVEN_50000");
				}
				break;
			case joaat("SP0_DIST_DRIVING_PLANE"):
				if (Param0.f_18 == 500f)
				{
					func_168(Param0, "CELL_FEED_FLOWN_500");
				}
				if (Param0.f_18 == 5000f)
				{
					func_168(Param0, "CELL_FEED_FLOWN_5000");
				}
				if (Param0.f_18 == 50000f)
				{
					func_168(Param0, "CELL_FEED_FLOWN_50000");
				}
				break;
			case joaat("SP0_DIST_RUNNING"):
				if (Param0.f_18 == 50f)
				{
					func_168(Param0, "CELL_FEED_RAN_50");
				}
				if (Param0.f_18 == 100f)
				{
					func_168(Param0, "CELL_FEED_RAN_100");
				}
				if (Param0.f_18 == 1000f)
				{
					func_168(Param0, "CELL_FEED_RAN_1000");
				}
				break;
			case joaat("SP0_DIST_SWIMMING"):
				if (Param0.f_18 == 50f)
				{
					func_168(Param0, "CELL_FEED_SWAM_50");
				}
				if (Param0.f_18 == 100f)
				{
					func_168(Param0, "CELL_FEED_SWAM_100");
				}
				if (Param0.f_18 == 1000f)
				{
					func_168(Param0, "CELL_FEED_SWAM_1000");
				}
				break;
			case joaat("SP0_BUSTED"):
				if (Param0.f_17 == 10)
				{
					func_168(Param0, "CELL_FEED_BUSTED_10");
				}
				if (Param0.f_17 == 25)
				{
					func_168(Param0, "CELL_FEED_BUSTED_25");
				}
				if (Param0.f_17 == 50)
				{
					func_168(Param0, "CELL_FEED_BUSTED_50");
				}
				if (Param0.f_17 == 100)
				{
					func_168(Param0, "CELL_FEED_BUSTED_100");
				}
				if (Param0.f_17 == 250)
				{
					func_168(Param0, "CELL_FEED_BUSTED_250");
				}
				break;
			case joaat("SP0_DEATHS"):
				if (Param0.f_17 == 10)
				{
					func_168(Param0, "CELL_FEED_WASTED_10");
				}
				if (Param0.f_17 == 25)
				{
					func_168(Param0, "CELL_FEED_WASTED_25");
				}
				if (Param0.f_17 == 50)
				{
					func_168(Param0, "CELL_FEED_WASTED_50");
				}
				if (Param0.f_17 == 100)
				{
					func_168(Param0, "CELL_FEED_WASTED_100");
				}
				if (Param0.f_17 == 250)
				{
					func_168(Param0, "CELL_FEED_WASTED_250");
				}
				break;
			case joaat("SP0_SHOTS"):
				if (Param0.f_17 == 1000000)
				{
					func_168(Param0, "CELL_FEED_SHOTS_1ML");
				}
				if (Param0.f_17 == 2000000)
				{
					func_168(Param0, "CELL_FEED_SHOTS_2ML");
				}
				if (Param0.f_17 == 3000000)
				{
					func_168(Param0, "CELL_FEED_SHOTS_3ML");
				}
				if (Param0.f_17 == 4000000)
				{
					func_168(Param0, "CELL_FEED_SHOTS_4ML");
				}
				if (Param0.f_17 == 5000000)
				{
					func_168(Param0, "CELL_FEED_SHOTS_5ML");
				}
				break;
			case joaat("SP0_STARS_EVADED"):
				if (Param0.f_17 == 5)
				{
					func_168(Param0, "CELL_FEED_5STARS_WL");
				}
				break;
			case joaat("SP0_CROUCHED"):
				if (Param0.f_17 == 10)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, false))
					{
						func_168(Param0, "CELL_FEED_WEB_CAR");
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), false);
					}
				}
				if (Param0.f_17 == 20)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, true))
					{
						func_168(Param0, "CELL_FEED_WEB_RHINO");
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), true);
					}
				}
				if (Param0.f_17 == 30)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 2))
					{
						func_168(Param0, "CELL_FEED_WEB_BUZZARD");
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 2);
					}
				}
				break;
			case joaat("SP0_CROUCHED_AND_SHOT"):
				if (Param0.f_17 == 10)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 3))
					{
						func_168(Param0, "CELL_FEED_STOCK_INV");
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 3);
					}
				}
				if (Param0.f_17 == 20)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 4))
					{
						func_168(Param0, "CELL_FEED_STOCK_WIN");
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 4);
					}
				}
				if (Param0.f_17 == 30)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 5))
					{
						func_168(Param0, "CELL_FEED_STOCK_LOSS");
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 5);
					}
				}
				break;
			case joaat("SP0_WATER_CANNON_KILLS"):
				if (Param0.f_17 == 25)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 10))
					{
						func_168(Param0, "CELL_FEED_STNJ_25");
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 10);
					}
				}
				if (Param0.f_17 == 50)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 11))
					{
						func_168(Param0, "CELL_FEED_STNJ_50");
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 11);
					}
				}
				if (Param0.f_17 == 75)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 12))
					{
						func_168(Param0, "CELL_FEED_STNJ_75");
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 12);
					}
				}
				if (Param0.f_17 == 100)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 13))
					{
						func_168(Param0, "CELL_FEED_STNJ_100");
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 13);
					}
				}
				break;
			case joaat("SP0_WATER_CANNON_DEATHS"):
				if (Param0.f_17 == 25)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 6))
					{
						func_168(Param0, "CELL_FEED_UTB_25");
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 6);
					}
				}
				if (Param0.f_17 == 50)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 7))
					{
						func_168(Param0, "CELL_FEED_UTB_50");
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 7);
					}
				}
				if (Param0.f_17 == 75)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 8))
					{
						func_168(Param0, "CELL_FEED_UTB_75");
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 8);
					}
				}
				if (Param0.f_17 == 100)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 9))
					{
						func_168(Param0, "CELL_FEED_UTB_100");
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 9);
					}
				}
				break;
		}
	}
}

void func_168(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, bool bParam36)
{
	char cVar0[64];

	if (UNK_0x0A4C9A3D51EAE31F(803) == 1)
	{
		if (func_53())
		{
			Global_111579 = UNK_0x1C0640BA9A7327B3();
			if ((Global_111579 - Global_111580) > Global_111385)
			{
				UNK_0x1E64CE678ED5F61E(bParam36);
				StringCopy(&cVar0, "<C>", 64);
				StringConCat(&cVar0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar0, &(Param0.f_1), 64);
				StringConCat(&cVar0, "...", 64);
				StringConCat(&cVar0, "</C>", 64);
				UNK_0x1AEA174B291A9906("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar0, 0);
				Global_111580 = UNK_0x1C0640BA9A7327B3();
			}
		}
	}
}

void func_169(struct<36> Param0, int iParam36)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_111573[iVar0] == 0)
		{
			Global_111386[iVar0 /*36*/] = { Param0 };
			Global_111567[iVar0] = iParam36;
			Global_111573[iVar0] = 1;
			Global_111581++;
			if (Global_111581 > 5)
			{
				Global_111581 = 5;
			}
			iVar0 = 5;
		}
		iVar0++;
	}
}

void func_170(struct<36> Param0, int iParam36)
{
	int iVar0;
	var uVar1;
	vector3 vVar17[24];
	char cVar23[64];
	char cVar39[64];

	if (func_53())
	{
		MemCopy(&uVar1, {func_173(iParam36)}, 16);
		StringCopy(&cVar17, "NO_BLURB_REQ", 24);
		switch (iParam36)
		{
			case 53:
				StringCopy(&cVar17, "CELL_F_PROLOGUE", 24);
				break;
			case 44:
				StringCopy(&cVar17, "CELL_F_LESTER1", 24);
				break;
			case 20:
				StringCopy(&cVar17, "CELL_F_FAMILY4", 24);
				break;
			case 75:
				StringCopy(&cVar17, "CELL_F_DOCKH2B", 24);
				break;
			case 38:
				StringCopy(&cVar17, "CELL_F_FIB4", 24);
				break;
			case 93:
				StringCopy(&cVar17, "CELL_F_RURALH2", 24);
				break;
			case 69:
				StringCopy(&cVar17, "CELL_F_AGENCYH3A", 24);
				break;
			case 70:
				StringCopy(&cVar17, "CELL_F_AGENCYH3B", 24);
				break;
			case 47:
				StringCopy(&cVar17, "CELL_F_MICHAEL2", 24);
				break;
			case 42:
				StringCopy(&cVar17, "CELL_F_FRANKLIN2", 24);
				break;
			case 84:
				StringCopy(&cVar17, "CELL_F_FINALEH2A", 24);
				break;
			case 85:
				StringCopy(&cVar17, "CELL_F_FINALEH2B", 24);
				break;
			case 24:
				StringCopy(&cVar17, "CELL_F_ENDCHOICE", 24);
				break;
			case 25:
				StringCopy(&cVar17, "CELL_F_ENDCHOICE", 24);
				break;
			case 27:
				StringCopy(&cVar17, "CELL_F_ENDCHOICE", 24);
				break;
		}
		Global_111579 = UNK_0x1C0640BA9A7327B3();
		if ((Global_111579 - Global_111580) > Global_111385)
		{
			if (!UNK_0x7F8A39872A07D2CE(&cVar17, "NO_BLURB_REQ"))
			{
				UNK_0x1E64CE678ED5F61E(&cVar17);
				StringCopy(&cVar23, "<C>", 64);
				StringConCat(&cVar23, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar23, &(Param0.f_1), 64);
				StringConCat(&cVar23, "...", 64);
				StringConCat(&cVar23, "</C>", 64);
				UNK_0x1AEA174B291A9906("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar23, 0);
			}
			else if (func_172(iParam36))
			{
				iVar0 = func_171(iParam36);
				if (Param0.f_17 > iVar0)
				{
					UNK_0x1E64CE678ED5F61E("CELL_FEED_BEAT_MIS_SCORE");
					UNK_0x6B012227B3921E18(&uVar1);
					StringCopy(&cVar39, "<C>", 64);
					StringConCat(&cVar39, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
					StringConCat(&cVar39, &(Param0.f_1), 64);
					StringConCat(&cVar39, "...", 64);
					StringConCat(&cVar39, "</C>", 64);
					UNK_0x1AEA174B291A9906("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar39, 0);
				}
			}
			Global_111580 = UNK_0x1C0640BA9A7327B3();
		}
		else
		{
			func_169(Param0, iParam36);
		}
	}
}

int func_171(int iParam0)
{
	return Global_111638.f_9080.f_330[iParam0 /*6*/].f_4;
}

bool func_172(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

struct<2> func_173(int iParam0)
{
	struct<2> Var0;

	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_89532[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_111638.f_9080.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			default:
				StringConCat(&Var0, "A", 8);
				break;
		}
	}
	return Var0;
}

int func_174(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 94)
	{
		iVar1 = iVar0;
		if (!UNK_0xEAE0D21A50E6C7F4(Global_89532[iVar1 /*34*/].f_15, 6))
		{
			if (func_175(iVar1) == iParam0)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_175(int iParam0)
{
	char cVar0[16];

	if (!UNK_0xEAE0D21A50E6C7F4(Global_89532[iParam0 /*34*/].f_15, 7))
	{
		StringCopy(&cVar0, "FL_CO_", 16);
		StringConCat(&cVar0, &(Global_89532[iParam0 /*34*/].f_8), 16);
		if (iParam0 == 90)
		{
			if (Global_111638.f_9080.f_99.f_205[7] == 2)
			{
				StringConCat(&cVar0, "B", 16);
			}
			else
			{
				StringConCat(&cVar0, "A", 16);
			}
		}
		return UNK_0x12AB0310C2281427(&cVar0);
	}
	return joaat("CITIES_PASSED");
}

void func_176(var uParam0, bool bParam1)
{
	if (!func_53())
	{
		return;
	}
	if (!bParam1)
	{
		return;
	}
	if (UNK_0x0A4C9A3D51EAE31F(803) == 1 && uParam0->f_166 == 0)
	{
		uParam0->f_166 = 1;
	}
	else
	{
		if (UNK_0x0A4C9A3D51EAE31F(803) != 1)
		{
		}
		if (uParam0->f_166 == 1)
		{
		}
	}
}

void func_177(int iParam0, var uParam1, bool bParam2)
{
	struct<2> Var0;

	if (!func_53() || !func_52())
	{
		return;
	}
	if (UNK_0x218F818E64020C17(1, iParam0, &Var0, 2))
	{
		if (!bParam2)
		{
			return;
		}
		if (UNK_0x0A4C9A3D51EAE31F(803) == 1 && uParam1->f_166 == 0)
		{
			if (Var0.f_1)
			{
				UNK_0x1E64CE678ED5F61E("CREWKICK_TA");
				UNK_0x02DF0BABE0632886(0, 1);
			}
			else
			{
				UNK_0x1E64CE678ED5F61E("CREWKICK_TI");
				UNK_0x02DF0BABE0632886(0, 1);
			}
		}
	}
}

void func_178(int iParam0, var uParam1, bool bParam2)
{
	struct<2> Var0;

	if (!func_53() || !func_52())
	{
		return;
	}
	if (UNK_0x218F818E64020C17(1, iParam0, &Var0, 2))
	{
		if (!bParam2)
		{
			return;
		}
		if (UNK_0x0A4C9A3D51EAE31F(803) == 1 && uParam1->f_166 == 0)
		{
			if (Var0.f_1)
			{
				UNK_0x1E64CE678ED5F61E("CREWLEFT_TA");
				UNK_0x47AFB2993A42BD03(0, 1);
			}
			else
			{
				UNK_0x1E64CE678ED5F61E("CREWLEFT_TA");
				UNK_0x47AFB2993A42BD03(0, 1);
			}
		}
	}
}

void func_179(int iParam0, var uParam1, bool bParam2)
{
	struct<2> Var0;
	struct<4> Var35;
	int iVar46;
	int iVar47;
	char cVar48[32];

	if (!func_53() || !func_52())
	{
		return;
	}
	if (UNK_0x218F818E64020C17(1, iParam0, &Var35, 11))
	{
		if (!bParam2)
		{
			return;
		}
		if (UNK_0x0A4C9A3D51EAE31F(803) == 1 && uParam1->f_166 == 0)
		{
			iVar46 = UNK_0x25904A548EB5967C();
			iVar47 = 0;
			while (iVar47 < iVar46)
			{
				UNK_0x30BD62C32AF88880(&Var0, iVar47);
				if (Var0 == Var35)
				{
					if (Var35.f_2)
					{
						StringCopy(&cVar48, UNK_0x19C9F30A7697B43C("HIGHER_RANK"), 32);
					}
					else
					{
						StringCopy(&cVar48, UNK_0x19C9F30A7697B43C("LOWER_RANK"), 32);
					}
					if (UNK_0x7F8A39872A07D2CE(&(Var35.f_3), "Rank4"))
					{
						StringCopy(&cVar48, UNK_0x19C9F30A7697B43C("CREW_RANK4"), 32);
					}
					if (UNK_0x7F8A39872A07D2CE(&(Var35.f_3), "Rank3"))
					{
						StringCopy(&cVar48, UNK_0x19C9F30A7697B43C("CREW_RANK3"), 32);
					}
					if (UNK_0x7F8A39872A07D2CE(&(Var35.f_3), "Rank2"))
					{
						StringCopy(&cVar48, UNK_0x19C9F30A7697B43C("CREW_RANK2"), 32);
					}
					if (UNK_0x7F8A39872A07D2CE(&(Var35.f_3), "Rank1"))
					{
						StringCopy(&cVar48, UNK_0x19C9F30A7697B43C("CREW_RANK1"), 32);
					}
					if (Var35.f_2)
					{
						func_180("CREWPROM", &cVar48, &(Var0.f_1));
					}
					else
					{
						func_180("CREWDEMO", &cVar48, &(Var0.f_1));
					}
					uParam1->f_166 = 1;
				}
				iVar47++;
			}
		}
	}
}

int func_180(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	UNK_0xD06AC7C87A34A6AD(bParam1);
	UNK_0xD06AC7C87A34A6AD(bParam2);
	iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
	func_59(33, bParam0, 1, bParam1, 0, 0, 0, 0f, 0, bParam2, 0, 0);
	return iVar0;
}

void func_181(int iParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	struct<21> Var1;
	struct<37> Var37;
	struct<68> Var131;
	var uVar219;

	if (!func_53())
	{
		return;
	}
	if (!func_161())
	{
		return;
	}
	if (UNK_0x218F818E64020C17(1, iParam0, &Var1, 36))
	{
		if (!bParam2)
		{
			return;
		}
		if (UNK_0x0A4C9A3D51EAE31F(803) == 1 && uParam1->f_166 == 0)
		{
			switch (Var1)
			{
				case joaat("MP0_AWD_50_VEHICLES_BLOWNUP"):
				case joaat("MP1_AWD_50_VEHICLES_BLOWNUP"):
					bVar0 = func_50(10, -1);
					if (Var1.f_17 > bVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_186("SCFEED_13", &(Var1.f_1), Var1.f_17, bVar0, 0, 1);
						}
						else
						{
							func_186("SCFEED_13b", &(Var1.f_1), Var1.f_17, bVar0, 0, 1);
						}
						uParam1->f_166 = 1;
					}
					break;
				case joaat("MP0_AWD_VEHICLES_JACKEDR"):
				case joaat("MP1_AWD_VEHICLES_JACKEDR"):
					bVar0 = func_50(11, -1);
					if (Var1.f_17 > bVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_186("SCFEED_10", &(Var1.f_1), Var1.f_17, bVar0, 0, 1);
						}
						else
						{
							func_186("SCFEED_10b", &(Var1.f_1), Var1.f_17, bVar0, 0, 1);
						}
						uParam1->f_166 = 1;
					}
					break;
				case joaat("MP0_AWD_FMTIME5STARWANTED"):
				case joaat("MP1_AWD_FMTIME5STARWANTED"):
					bVar0 = func_50(60, -1);
					if (Var1.f_17 > bVar0)
					{
						func_186("SCFEED_4", &(Var1.f_1), Var1.f_17, bVar0, 0, 1);
						uParam1->f_166 = 1;
					}
					break;
				case joaat("MP0_AWD_FMFURTHESTWHEELIE"):
				case joaat("MP1_AWD_FMFURTHESTWHEELIE"):
					bVar0 = SYSTEM::ROUND(func_49(32, -1));
					if (Var1.f_17 > bVar0)
					{
						if (func_185(UNK_0xD803B885F5E47A62()) == 133 && func_184(UNK_0xD803B885F5E47A62()) == 4)
						{
						}
						else
						{
							if (UNK_0x8ED6EC1BDC7FE067())
							{
								func_186("SCFEED_5", &(Var1.f_1), Var1.f_17, bVar0, 0, 1);
							}
							else
							{
								func_186("SCFEED_5b", &(Var1.f_1), Var1.f_17, bVar0, 0, 1);
							}
							uParam1->f_166 = 1;
						}
					}
					break;
				case joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"):
				case joaat("MP1_AWD_FMDRIVEWITHOUTCRASH"):
					bVar0 = func_50(61, -1);
					if (Var1.f_17 > bVar0)
					{
						func_186("SCFEED_6", &(Var1.f_1), Var1.f_17, bVar0, 0, 1);
						uParam1->f_166 = 1;
					}
					break;
				case joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"):
				case joaat("MP1_AWD_FMMOSTFLIPSINONEVEHICLE"):
					bVar0 = func_50(62, -1);
					if (Var1.f_17 > bVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_186("SCFEED_7", &(Var1.f_1), Var1.f_17, bVar0, 0, 1);
						}
						else
						{
							func_186("SCFEED_7b", &(Var1.f_1), Var1.f_17, bVar0, 0, 1);
						}
						uParam1->f_166 = 1;
					}
					break;
				case joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"):
				case joaat("MP1_AWD_FMMOSTSPINSINONEVEHICLE"):
					bVar0 = func_50(63, -1);
					if (Var1.f_17 > bVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_186("SCFEED_8", &(Var1.f_1), Var1.f_17, bVar0, 0, 1);
						}
						else
						{
							func_186("SCFEED_8b", &(Var1.f_1), Var1.f_17, bVar0, 0, 1);
						}
						uParam1->f_166 = 1;
					}
					break;
				case joaat("MP0_CHAR_FM_RACE_RECORD_TIMES"):
				case joaat("MP1_CHAR_FM_RACE_RECORD_TIMES"):
					if (((((((((((((((func_113() == 0 && !UNK_0xA14BB9332558B949()) && !func_112()) && !func_111()) && !func_110()) && !func_109()) && !func_108()) && !func_107()) && !func_106()) && !func_105()) && (func_161() && func_101())) && Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_98 != 8) && Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_98 != 9) && !func_99(UNK_0xD803B885F5E47A62())) && !func_98()) && !func_96(UNK_0xD803B885F5E47A62(), 1, 0))
					{
						Var37.f_17 = 1;
						Var37.f_21 = -1;
						Var37.f_22 = -1;
						Var37.f_23 = 2;
						Var37.f_36 = 2;
						Var131.f_65 = -1;
						Var131.f_66 = -1;
						Var131.f_67 = 2;
						if (func_81(&Var37, &(Var1.f_20), &Var131, &uVar219))
						{
							if (Var37)
							{
								func_183("SCFEED_11", &(Var1.f_1), Var1.f_17, &(Var131.f_22), 1, 2f);
								if (!func_182())
								{
									UNK_0x4D7F4CC43D4D0DE3(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
								}
								uParam1->f_166 = 1;
							}
						}
					}
					break;
			}
		}
	}
}

bool func_182()
{
	return Global_1312854;
}

int func_183(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	struct<16> Var1;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	UNK_0xD06AC7C87A34A6AD(func_66(bParam1));
	UNK_0xD06AC7C87A34A6AD(bParam3);
	UNK_0x164431059FF80580(bParam2, 2055);
	if (bParam4)
	{
		Var1 = { func_76(bParam1) };
		iVar0 = UNK_0x2A891D808A0C7768("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, "", fParam5);
	}
	else
	{
		iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
	}
	func_59(18, bParam0, 1, bParam1, bParam2, 0, 0, 0f, 0, bParam3, 0, 0);
	return iVar0;
}

int func_184(int iParam0)
{
	if (func_185(iParam0) == 133)
	{
		return Global_2537071.f_5045;
	}
	return -1;
}

int func_185(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/];
	}
	return -1;
}

int func_186(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	struct<16> Var1;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	UNK_0xD06AC7C87A34A6AD(func_66(bParam1));
	if (!bParam4 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam4);
	}
	UNK_0x6D99DF8263D35CE5(bParam2);
	if (!bParam4 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam4);
	}
	UNK_0x6D99DF8263D35CE5(bParam3);
	if (bParam5)
	{
		Var1 = { func_76(bParam1) };
		iVar0 = UNK_0x1AEA174B291A9906("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		UNK_0x47AFB2993A42BD03(0, 1);
	}
	func_59(40, bParam0, 1, bParam1, bParam2, bParam3, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_187(int iParam0)
{
	struct<36> Var0;
	var uVar36;

	if (UNK_0x218F818E64020C17(1, iParam0, &Var0, 36))
	{
		func_167(Var0, uVar36);
	}
}

int func_188()
{
	switch (UNK_0x0A4C9A3D51EAE31F(807))
	{
		case 0:
			return 0;
		case 1:
			return 60000;
		case 2:
			return 120000;
		case 3:
			return 180000;
		case 4:
			return 240000;
		case 5:
			return 300000;
		case 6:
			return 600000;
		case 7:
			return 900000;
		case 8:
			return 1800000;
		case 9:
			return 3600000;
		default:
			break;
	}
	return 300000;
}

void func_189()
{
	if (!bLocal_127)
	{
		if (UNK_0x9F618E6F8EA8EFDE(iLocal_125))
		{
			if (!UNK_0x3E3CF43636981693(iLocal_125))
			{
				if (UNK_0x80A5E3A24A5F654D(iLocal_125))
				{
					iLocal_125 = 0;
					bLocal_127 = true;
				}
				else
				{
					if (UNK_0x8CD06866876216F2())
					{
						Global_2097152[func_191() /*10930*/].f_6086.f_56 = { func_192() };
					}
					else
					{
						Global_111638.f_20113.f_267 = { func_192() };
					}
					iLocal_125 = 0;
					bLocal_127 = true;
				}
			}
		}
		else if (func_190(&uLocal_121, &uLocal_126))
		{
			UNK_0xDE39D2F0ED5FFA62(&uLocal_121, &iLocal_125);
		}
		else
		{
			iLocal_125 = 0;
			bLocal_127 = true;
		}
	}
}

bool func_190(var uParam0, var uParam1)
{
	if (UNK_0x8CD06866876216F2())
	{
	}
	else if (Global_111638.f_20113.f_261)
	{
		*uParam0 = { Global_111638.f_20113.f_267 };
		*uParam1 = Global_111638.f_20113.f_271;
		return true;
	}
	return false;
}

int func_191()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

struct<4> func_192()
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	StringCopy(&Var0, "", 16);
	iVar5 = 0;
	while (iVar5 <= 7)
	{
		if (iVar5 < 2)
		{
			iVar4 = UNK_0x09AC81E49EA267F7(true, 10);
			StringConCat(&Var0, func_193(iVar4), 16);
		}
		else if (iVar5 < 5)
		{
			iVar4 = UNK_0x09AC81E49EA267F7(10, 36);
			StringConCat(&Var0, func_193(iVar4), 16);
		}
		else
		{
			iVar4 = UNK_0x09AC81E49EA267F7(true, 10);
			StringConCat(&Var0, func_193(iVar4), 16);
		}
		iVar5++;
	}
	return Var0;
}

char* func_193(int iParam0)
{
	if (iParam0 == 0)
	{
		return "0";
	}
	if (iParam0 == 1)
	{
		return "1";
	}
	if (iParam0 == 2)
	{
		return "2";
	}
	if (iParam0 == 3)
	{
		return "3";
	}
	if (iParam0 == 4)
	{
		return "4";
	}
	if (iParam0 == 5)
	{
		return "5";
	}
	if (iParam0 == 6)
	{
		return "6";
	}
	if (iParam0 == 7)
	{
		return "7";
	}
	if (iParam0 == 8)
	{
		return "8";
	}
	if (iParam0 == 9)
	{
		return "9";
	}
	if (iParam0 == 10)
	{
		return "A";
	}
	if (iParam0 == 11)
	{
		return "B";
	}
	if (iParam0 == 12)
	{
		return "C";
	}
	if (iParam0 == 13)
	{
		return "D";
	}
	if (iParam0 == 14)
	{
		return "E";
	}
	if (iParam0 == 15)
	{
		return "F";
	}
	if (iParam0 == 16)
	{
		return "G";
	}
	if (iParam0 == 17)
	{
		return "H";
	}
	if (iParam0 == 18)
	{
		return "I";
	}
	if (iParam0 == 19)
	{
		return "J";
	}
	if (iParam0 == 20)
	{
		return "K";
	}
	if (iParam0 == 21)
	{
		return "L";
	}
	if (iParam0 == 22)
	{
		return "M";
	}
	if (iParam0 == 23)
	{
		return "N";
	}
	if (iParam0 == 24)
	{
		return "O";
	}
	if (iParam0 == 25)
	{
		return "P";
	}
	if (iParam0 == 26)
	{
		return "Q";
	}
	if (iParam0 == 27)
	{
		return "R";
	}
	if (iParam0 == 28)
	{
		return "S";
	}
	if (iParam0 == 29)
	{
		return "T";
	}
	if (iParam0 == 30)
	{
		return "U";
	}
	if (iParam0 == 31)
	{
		return "V";
	}
	if (iParam0 == 32)
	{
		return "W";
	}
	if (iParam0 == 33)
	{
		return "X";
	}
	if (iParam0 == 34)
	{
		return "Y";
	}
	if (iParam0 == 35)
	{
		return "Z";
	}
	return "A";
}

void func_194()
{
	bool bVar0;
	bool bVar1;

	if (UNK_0x8CD06866876216F2() && func_495(UNK_0xD803B885F5E47A62()))
	{
		return;
	}
	if (iLocal_85 == 0)
	{
		func_494();
		if (bLocal_81)
		{
			return;
		}
		func_493();
	}
	func_463();
	if (bLocal_84)
	{
		return;
	}
	func_445();
	func_443();
	bVar0 = bLocal_83;
	bVar1 = ((iLocal_73 == 0 && !bLocal_84) && !bLocal_81);
	if (bLocal_83)
	{
		bLocal_83 = false;
	}
	else
	{
		iLocal_73 = (iLocal_73 + 1 % 30);
	}
	if (UNK_0x8CD06866876216F2())
	{
		if (iLocal_73 < 20)
		{
			if (!bVar0)
			{
				iLocal_74++;
				if (iLocal_74 >= 10)
				{
					iLocal_74 = 0;
					bLocal_77 = !bLocal_77;
				}
			}
			iLocal_76 = (Global_2097152[func_191() /*10930*/].f_6086.f_63[iLocal_74] - 1);
			if (bLocal_77)
			{
				if (func_442(iLocal_76, &iLocal_75))
				{
					func_201(3);
				}
			}
			else if (Global_2097152[func_191() /*10930*/].f_6086.f_63[iLocal_74] == 0)
			{
				func_200(iLocal_74);
			}
		}
	}
	else
	{
		switch (iLocal_73)
		{
			case 0:
				func_201(0);
				break;
			case 1:
				func_201(1);
				break;
			case 2:
				func_201(2);
				break;
			case 3:
				func_195();
				break;
		}
	}
	if (bVar1)
	{
		if (bLocal_101)
		{
			if (SYSTEM::TIMERA() > 5000)
			{
				UNK_0xEBD5716567F1D347("car");
				UNK_0x9B1B988780CBC954();
				UNK_0xFE0C6A4F9007749F();
				bLocal_101 = false;
			}
		}
	}
}

void func_195()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;

	if (UNK_0x8CD06866876216F2())
	{
		return;
	}
	if (func_199())
	{
		return;
	}
	if (Global_30913)
	{
		if (!bLocal_99)
		{
			UNK_0xEBD5716567F1D347("dog");
			UNK_0xB5B7B792811308A7("saveData");
			func_198("chopKilled", UNK_0x09AC81E49EA267F7(false, 65535));
			UNK_0x9B1B988780CBC954();
			UNK_0x98C61465A1232E0E();
			UNK_0xFE0C6A4F9007749F();
			bLocal_99 = true;
		}
	}
	else
	{
		bLocal_99 = false;
	}
	UNK_0xEBD5716567F1D347("dog");
	UNK_0xB5B7B792811308A7("saveData");
	if (UNK_0xB9B2DEACD44BF80B())
	{
		iVar0 = UNK_0x33C754EADD2C8282("happinessTimer");
		if (iVar0 == 0)
		{
			iVar0 = 450;
		}
		iVar1 = UNK_0x33C754EADD2C8282("happinessDecrement");
		if (iVar1 == 0)
		{
			iVar1 = 1;
		}
		iVar2 = UNK_0x33C754EADD2C8282("time_stamp");
		iVar3 = UNK_0xDD0E7998AE8AD485();
		if (iVar3 == 0)
		{
			iVar3 = iVar2;
		}
		iVar4 = UNK_0x33C754EADD2C8282("happiness");
		iVar5 = (iVar3 - iVar2);
		iVar6 = ((iVar5 / iVar0) * iVar1);
		iVar7 = func_197((iVar4 - iVar6), 0, 100);
		Global_111638.f_20113.f_254 = SYSTEM::TO_FLOAT(iVar7);
		Global_111638.f_20113.f_254.f_1 = UNK_0xFC9ACA6339FF5FF1("cleanliness");
		Global_111638.f_20113.f_254.f_2 = UNK_0xFC9ACA6339FF5FF1("hunger");
		Global_111638.f_20113.f_254.f_3 = func_27("trainingLevel");
		Global_111638.f_20113.f_254.f_4 = func_27("collar");
		Global_111638.f_20113.f_254.f_5 = 1;
		if (Global_111638.f_20113.f_254 > 50f)
		{
		}
		if (Global_111638.f_20113.f_254.f_2 > 50f)
		{
		}
		Global_111638.f_20113.f_263 = func_27("usedApp") != 0;
		if (UNK_0x89484FAA0691E684(joaat("CHOP_APP_USED"), &bVar8, -1))
		{
			if (!bVar8)
			{
				if (Global_111638.f_20113.f_263)
				{
					UNK_0xD8B681091EBE4064(joaat("CHOP_APP_USED"), true, 1);
				}
			}
		}
	}
	UNK_0x98C61465A1232E0E();
	UNK_0xFE0C6A4F9007749F();
	if (Global_111638.f_20113.f_264)
	{
		UNK_0xEBD5716567F1D347("dog");
		UNK_0xB5B7B792811308A7("saveData");
		if (func_196(6))
		{
			func_198("chopSafeHouse", 1);
		}
		else
		{
			func_198("chopSafeHouse", 0);
		}
		UNK_0x9B1B988780CBC954();
		UNK_0x98C61465A1232E0E();
		UNK_0xFE0C6A4F9007749F();
		Global_111638.f_20113.f_264 = 0;
	}
}

bool func_196(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], false);
}

int func_197(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_198(bool bParam0, bool bParam1)
{
	UNK_0x53B80405411BCB9F(func_28(bParam0), bParam1);
}

bool func_199()
{
	if (Global_41431 == 15)
	{
		return false;
	}
	return true;
}

void func_200(int iParam0)
{
	char cVar0[16];

	if (!Global_2097152[func_191() /*10930*/].f_6086.f_41[iParam0])
	{
		UNK_0xEBD5716567F1D347("car");
		StringCopy(&cVar0, "multiplayer", 16);
		StringIntConCat(&cVar0, func_15(), 16);
		UNK_0xB5B7B792811308A7(&cVar0);
		StringCopy(&cVar0, "vehicle", 16);
		StringIntConCat(&cVar0, iParam0, 16);
		UNK_0xB5B7B792811308A7(&cVar0);
		func_198("carUnlocked", 0);
		UNK_0x98C61465A1232E0E();
		bLocal_101 = true;
		SYSTEM::SETTIMERA(0);
		UNK_0x98C61465A1232E0E();
		UNK_0xFE0C6A4F9007749F();
		Global_2097152[func_191() /*10930*/].f_6086.f_41[iParam0] = 1;
	}
}

void func_201(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	struct<6> Var8;
	vector3 vVar14[24];
	struct<6> Var20;
	struct<43> Var26;
	struct<41> Var69;
	int iVar110;
	int iVar111;
	struct<82> Var112;
	bool bVar210;
	bool bVar211;
	bool bVar212;
	char cVar213[16];
	int iVar217;
	bool bVar218;
	int iVar219;
	int iVar220;
	var uVar221[6];
	int iVar228;
	bool bVar229;
	bool bVar230;
	char cVar231[16];
	bool bVar235;
	int iVar236;
	bool bVar237;
	int iVar238;
	int iVar239;
	int iVar240;
	bool bVar241;

	Var26.f_33 = 5;
	if (iParam0 == 0)
	{
		iVar2 = 0;
		StringCopy(&Var8, "singleplayer0", 24);
		StringCopy(&cVar14, "sp0_order", 24);
		Var26 = { Global_111638.f_20113[0 /*43*/] };
		Var69 = { Global_111638.f_20113.f_130[0 /*41*/] };
	}
	else if (iParam0 == 1)
	{
		iVar2 = 1;
		StringCopy(&Var8, "singleplayer1", 24);
		StringCopy(&cVar14, "sp1_order", 24);
		Var26 = { Global_111638.f_20113[1 /*43*/] };
		Var69 = { Global_111638.f_20113.f_130[1 /*41*/] };
	}
	else if (iParam0 == 2)
	{
		iVar2 = 2;
		StringCopy(&Var8, "singleplayer2", 24);
		StringCopy(&cVar14, "sp2_order", 24);
		Var26 = { Global_111638.f_20113[2 /*43*/] };
		Var69 = { Global_111638.f_20113.f_130[2 /*41*/] };
	}
	else if (iParam0 == 3)
	{
		bVar3 = func_15();
		iVar2 = (3 + bVar3);
		StringCopy(&Var8, "multiplayer", 24);
		StringIntConCat(&Var8, bVar3, 24);
		StringCopy(&cVar14, "mp", 24);
		StringIntConCat(&cVar14, bVar3, 24);
		StringConCat(&cVar14, "_order", 24);
		if (func_441(iLocal_75, &iVar110))
		{
			func_440(&Var26, iVar110);
		}
		else
		{
			func_440(&Var26, 0);
		}
		Var69 = { Global_2097152[func_191() /*10930*/].f_6086 };
		StringCopy(&Var20, "vehicle", 24);
		StringIntConCat(&Var20, iLocal_74, 24);
	}
	else
	{
		return;
	}
	if (bLocal_100 || (!UNK_0x8CD06866876216F2() && bLocal_78))
	{
		if (UNK_0x8CD06866876216F2())
		{
			bLocal_100 = false;
		}
		else
		{
			UNK_0xEBD5716567F1D347("car");
			UNK_0xB5B7B792811308A7("singleplayer0");
			func_198("carUnlocked", 0);
			UNK_0x98C61465A1232E0E();
			UNK_0xB5B7B792811308A7("singleplayer2");
			func_198("carUnlocked", 0);
			UNK_0x98C61465A1232E0E();
			UNK_0xFE0C6A4F9007749F();
			if (UNK_0x58424C49F8924842())
			{
				UNK_0xEBD5716567F1D347("car");
				UNK_0xB5B7B792811308A7("appdata");
				func_198("playerName", UNK_0x12AB0310C2281427(UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62())));
				UNK_0x98C61465A1232E0E();
				UNK_0xFE0C6A4F9007749F();
			}
			iVar111 = 0;
			while (iVar111 < Global_111638.f_20113)
			{
				if (!Global_111638.f_20113[iVar111 /*43*/].f_41)
				{
					Global_111638.f_20113[iVar111 /*43*/].f_40 = 0;
					if (Global_111638.f_20113[iVar111 /*43*/] != 0 && Global_111638.f_20113[iVar111 /*43*/].f_29 != 0)
					{
						Global_111638.f_20113[iVar111 /*43*/].f_40 = 1;
					}
					else
					{
						Global_111638.f_20113.f_273[iVar111] = 0;
					}
				}
				iVar111++;
			}
			bLocal_100 = false;
		}
		if (iParam0 >= 2)
		{
			bLocal_100 = false;
			bLocal_78 = false;
		}
	}
	if (!UNK_0x8CD06866876216F2())
	{
		if (!Global_111638.f_20113.f_273[iParam0])
		{
			if (((!func_439(0) && !func_439(3)) && !func_439(2)) || !func_172(0))
			{
				if ((iParam0 == 1 || (((iParam0 == 0 && func_172(0)) && func_438(iParam0)) && !Global_111638.f_9080.f_99.f_58[135])) || (((iParam0 == 2 && func_172(0)) && func_438(iParam0)) && !Global_111638.f_9080.f_99.f_58[136]))
				{
					UNK_0xEBD5716567F1D347("car");
					UNK_0xB5B7B792811308A7(&Var8);
					UNK_0x07A1A3A04807E104();
					Var112.f_11 = 12;
					Var112.f_31 = 49;
					Var112.f_81 = 2;
					func_437(iParam0, &Var112, 1);
					func_436(Var112.f_5, Var112.f_7, -1, 1, &bVar210);
					func_436(Var112.f_6, -1, -1, 0, &bVar211);
					func_198("carUnlocked", 1);
					func_198("carModel", Var112);
					func_198("tyreSmokeColourEnabled", 1);
					func_198("tyreSmokeColourRed", 255);
					func_198("tyreSmokeColourGreen", 255);
					func_198("tyreSmokeColourBlue", 255);
					if (Var112 == joaat("BUFFALO2"))
					{
						func_435("carType", "sport");
						func_198("carEngineCount", 5);
						func_198("carBrakesCount", 4);
						func_198("carExhaustCount", 6);
						func_198("carWheelCount", 26);
						func_198("carHornCount", 5);
						func_198("carArmourCount", 6);
						func_198("carSuspensionCount", 5);
						func_198("carHorn1", 1748384362);
						func_198("carHorn2", 1766676233);
						func_198("carHorn3", -1390777827);
						func_198("carHorn4", -1751761149);
						func_198("carHorn5", 1732399718);
						func_434("carPriceModifier", 3.25f);
						func_198("carColour1", bVar210);
						func_198("carColour2", bVar211);
						func_198("carColour1Unlocked", 1);
						func_198("carColour2Unlocked", 1);
					}
					else if (Var112 == joaat("BODHI2"))
					{
						func_435("carType", "car");
						func_198("carEngineCount", 5);
						func_198("carBrakesCount", 4);
						func_198("carExhaustCount", 1);
						func_198("carWheelCount", 26);
						func_198("carHornCount", 5);
						func_198("carArmourCount", 6);
						func_198("carSuspensionCount", 1);
						func_198("carHorn1", -1512308941);
						func_198("carHorn2", 1766676233);
						func_198("carHorn3", -1390777827);
						func_198("carHorn4", -1751761149);
						func_198("carHorn5", 1732399718);
						func_434("carPriceModifier", 1f);
						func_198("carColour1", bVar210);
						func_198("carColour1Unlocked", 1);
					}
					else if (Var112 == joaat("TAILGATER"))
					{
						func_435("carType", "car");
						func_198("carEngineCount", 5);
						func_198("carBrakesCount", 5);
						func_198("carExhaustCount", 5);
						func_198("carWheelCount", 26);
						func_198("carHornCount", 5);
						func_198("carArmourCount", 6);
						func_198("carSuspensionCount", 5);
						func_198("carHorn1", 36213993);
						func_198("carHorn2", 1766676233);
						func_198("carHorn3", -1390777827);
						func_198("carHorn4", -1751761149);
						func_198("carHorn5", 1732399718);
						func_434("carPriceModifier", 1f);
						func_198("carColour1", bVar210);
						func_198("carColour2", bVar211);
						func_198("carColour1Unlocked", 1);
						func_198("carColour2Unlocked", 1);
					}
					UNK_0x98C61465A1232E0E();
					Local_87 = { Var8 };
					Local_93 = { Var20 };
					bLocal_86 = Var112;
					bLocal_84 = true;
					bLocal_101 = true;
					SYSTEM::SETTIMERA(0);
					UNK_0xFE0C6A4F9007749F();
					Global_111638.f_20113.f_273[iParam0] = 1;
				}
			}
		}
		else if ((iParam0 == 0 && Global_111638.f_9080.f_99.f_58[135]) || (iParam0 == 2 && Global_111638.f_9080.f_99.f_58[136]))
		{
			Global_111638.f_20113[iParam0 /*43*/].f_41 = 1;
			Global_111638.f_20113.f_273[iParam0] = 0;
		}
	}
	if (UNK_0x8CD06866876216F2())
	{
		bVar212 = false;
		if (iLocal_129 == 0)
		{
			bVar212 = func_433(joaat("MPPLY_CARAPP_DATA_SENT_0"));
		}
		else if (iLocal_129 == 1)
		{
			bVar212 = func_433(joaat("MPPLY_CARAPP_DATA_SENT_1"));
		}
		else if (iLocal_129 == 2)
		{
			bVar212 = func_433(joaat("MPPLY_CARAPP_DATA_SENT_2"));
		}
		else if (iLocal_129 == 3)
		{
			bVar212 = func_433(joaat("MPPLY_CARAPP_DATA_SENT_3"));
		}
		else if (iLocal_129 == 4)
		{
			bVar212 = func_433(joaat("MPPLY_CARAPP_DATA_SENT_4"));
		}
		if (bVar212 && !func_432(iLocal_129))
		{
			UNK_0xEBD5716567F1D347("car");
			StringCopy(&cVar213, "multiplayer", 16);
			StringIntConCat(&cVar213, iLocal_129, 16);
			UNK_0xB5B7B792811308A7(&cVar213);
			iVar217 = 0;
			while (iVar217 < 10)
			{
				StringCopy(&cVar213, "vehicle", 16);
				StringIntConCat(&cVar213, iVar217, 16);
				UNK_0xB5B7B792811308A7(&cVar213);
				func_198("carUnlocked", 0);
				UNK_0x98C61465A1232E0E();
				iVar217++;
			}
			UNK_0x98C61465A1232E0E();
			bLocal_101 = true;
			SYSTEM::SETTIMERA(0);
			UNK_0xFE0C6A4F9007749F();
			if (iLocal_129 == 0)
			{
				func_431(joaat("MPPLY_CARAPP_DATA_SENT_0"), 0);
			}
			else if (iLocal_129 == 1)
			{
				func_431(joaat("MPPLY_CARAPP_DATA_SENT_1"), 0);
			}
			else if (iLocal_129 == 2)
			{
				func_431(joaat("MPPLY_CARAPP_DATA_SENT_2"), 0);
			}
			else if (iLocal_129 == 3)
			{
				func_431(joaat("MPPLY_CARAPP_DATA_SENT_3"), 0);
			}
			else if (iLocal_129 == 4)
			{
				func_431(joaat("MPPLY_CARAPP_DATA_SENT_4"), 0);
			}
		}
		iLocal_129++;
		if (iLocal_129 > 4)
		{
			iLocal_129 = 0;
		}
	}
	if (!bLocal_84)
	{
		if (Var26.f_42)
		{
			Local_87 = { Var8 };
			Local_93 = { Var20 };
			bLocal_86 = Var26;
			bLocal_84 = true;
			bLocal_101 = true;
			SYSTEM::SETTIMERA(0);
			Var26.f_42 = 0;
			if (UNK_0x8CD06866876216F2())
			{
				Global_2097152[func_191() /*10930*/].f_6086.f_52 = 0;
			}
		}
		else if (UNK_0x8CD06866876216F2() && func_160(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			if (SYSTEM::TIMERB() > 5000)
			{
				bVar218 = false;
				if (iLocal_130 == 0)
				{
					func_430(&iVar219);
					bVar218 = iVar219 != bLocal_132[0];
					iLocal_130++;
					SYSTEM::SETTIMERB(0);
				}
				else if (iLocal_130 == 1)
				{
					func_404(&iVar220);
					bVar218 = iVar220 != bLocal_132[1];
					iLocal_130++;
					SYSTEM::SETTIMERB(0);
				}
				else if (iLocal_130 == 2)
				{
					if (func_396(&uVar221, iLocal_131) == -1)
					{
						iLocal_131 = 0;
						iLocal_130++;
						SYSTEM::SETTIMERB(0);
					}
					else
					{
						bVar218 = UNK_0xEAE0D21A50E6C7F4(uVar221[(iLocal_131 / 32)], (iLocal_131 % 32)) != UNK_0xEAE0D21A50E6C7F4(uLocal_144[(iLocal_131 / 32)], (iLocal_131 % 32));
						iLocal_131++;
						SYSTEM::SETTIMERB(4900);
					}
				}
				if (bVar218)
				{
					Local_87 = { Var8 };
					Local_93 = { Var20 };
					bLocal_86 = Var26;
					bLocal_84 = true;
					bLocal_101 = true;
					SYSTEM::SETTIMERA(0);
				}
				if (iLocal_130 > 2)
				{
					iLocal_130 = 0;
				}
			}
		}
	}
	if (Var69.f_33)
	{
		if (UNK_0x8CD06866876216F2())
		{
			if (func_83() == 0)
			{
				iVar228 = Global_2097152[func_191() /*10930*/].f_6086.f_62;
				if (Global_1323615[iVar228 /*141*/].f_66 == Var69)
				{
					if (Var69.f_37)
					{
						Var69.f_38 = 0;
						if (iLocal_104 == 0)
						{
							if (UNK_0x9F618E6F8EA8EFDE(iLocal_102))
							{
								if (!UNK_0x3E3CF43636981693(iLocal_102))
								{
									if (UNK_0x80A5E3A24A5F654D(iLocal_102))
									{
										iLocal_102 = 0;
										Var69.f_37 = 0;
									}
									else
									{
										Var69.f_38 = 1;
										iLocal_102 = 0;
										Var69.f_37 = 0;
									}
								}
							}
							else
							{
								UNK_0xDE39D2F0ED5FFA62(&(Global_2097152[func_191() /*10930*/].f_6086.f_28), &iLocal_102);
							}
						}
						else if (iLocal_104 == 1)
						{
							if (iLocal_103 == 0)
							{
								UNK_0xF88B7DEAA25925F9(&(Global_2097152[func_191() /*10930*/].f_6086.f_28), &iLocal_103);
							}
							else if (!UNK_0x5E9C3E8391CBB040(iLocal_103))
							{
								switch (UNK_0x9E0FEF6524BB813B(iLocal_103))
								{
									case 0:
										iLocal_103 = 0;
										Var69.f_37 = 0;
										break;
									default:
										Var69.f_38 = 1;
										iLocal_103 = 0;
										Var69.f_37 = 0;
										break;
								}
							}
						}
					}
					else if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
					{
					}
					else if (func_395(UNK_0xD803B885F5E47A62(), 1, 0))
					{
					}
					else if (!func_161())
					{
					}
					else if (Var69.f_38)
					{
						if (func_394(96, "SOCIAL_CARAPP2", 0, 0))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 0;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
					else if (bLocal_118)
					{
						Var69.f_39 = 0;
						if (bLocal_120)
						{
							if (!func_383(&Var69, iVar228))
							{
								bLocal_118 = false;
							}
							bLocal_120 = false;
						}
						else if (Var69.f_27 > 0 && !UNK_0x7A7BDE279347E517(Var69.f_27, false, true, 0, -1, 0))
						{
							Var69.f_39 = 1;
							bLocal_118 = false;
						}
						else
						{
							if (!bLocal_119)
							{
								func_381(&Var69, 0);
								UNK_0x5D96D8530B3D0904(&(Global_1323615[iVar228 /*141*/].f_102), 14);
								bLocal_119 = true;
								func_362(iVar228, &(Global_1323615[iVar228 /*141*/]), 1, -1, 0, 0);
								func_128(407109726, 3, 0);
							}
							if (func_285(96, "SOCIAL_CARAPP1", UNK_0x1739BA50603D849C(Var69), 0, -99, 0, 0, 0, 0))
							{
								bVar229 = UNK_0x3A6D64D2A1228113() >= Var69.f_27;
								bVar230 = (!bVar229 && UNK_0x3A6D64D2A1228113() > 0);
								if (Var69.f_27 > 0)
								{
									UNK_0xA4F4B39459FDE0FD(Var69.f_27, Var69, 8, true, bVar229, "CMOD_MAIN_0", UNK_0x12AB0310C2281427(func_284(39, 0)), UNK_0x12AB0310C2281427("CMOD_MAIN_0"), 0, bVar230);
								}
								Var69.f_33 = 0;
								Var69.f_36 = 1;
								Var69.f_35 = 1;
								bLocal_118 = false;
								func_381(&Var69, 1);
								func_283(&Var69, 3);
								UNK_0x5D96D8530B3D0904(&(Global_1323615[iVar228 /*141*/].f_102), 14);
								func_362(iVar228, &(Global_1323615[iVar228 /*141*/]), 1, -1, 0, 0);
								func_128(407109726, 3, 0);
							}
						}
					}
					else if (Var69.f_39)
					{
						if (func_285(96, "SOCIAL_CARAPP3", UNK_0x1739BA50603D849C(Var69), 0, -99, 0, 0, 0, 0))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 1;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
					else if (func_285(96, "SOCIAL_CARAPP", UNK_0x1739BA50603D849C(Var69), 0, -99, 0, 0, 0, 0))
					{
						Var69.f_33 = 0;
						Var69.f_36 = 1;
						Var69.f_35 = 0;
					}
					bLocal_83 = true;
				}
				else
				{
					Var69.f_33 = 0;
					Var69.f_36 = 0;
					Var69.f_35 = 0;
					Var69.f_34 = 0;
				}
			}
		}
		else if (iParam0 == func_278())
		{
			if ((((((Global_111638.f_2358.f_539.f_2407[0 /*295*/][iParam0 /*98*/] == Var69 || Global_111638.f_2358.f_539.f_2407[1 /*295*/][iParam0 /*98*/] == Var69) || Global_111638.f_2358.f_539.f_2407[2 /*295*/][iParam0 /*98*/] == Var69) || Global_111638.f_2358.f_539.f_2407[3 /*295*/][iParam0 /*98*/] == Var69) || ((iParam0 == 1 && Var69 == joaat("BUFFALO2")) && !Global_111638.f_20113.f_281[iParam0])) || ((iParam0 == 0 && Var69 == joaat("TAILGATER")) && !Global_111638.f_20113.f_281[iParam0])) || ((iParam0 == 2 && Var69 == joaat("BODHI2")) && !Global_111638.f_20113.f_281[iParam0]))
			{
				if (Var69.f_37)
				{
					Var69.f_38 = 0;
					if (iLocal_104 == 0)
					{
						if (UNK_0x9F618E6F8EA8EFDE(iLocal_102))
						{
							if (!UNK_0x3E3CF43636981693(iLocal_102))
							{
								if (UNK_0x80A5E3A24A5F654D(iLocal_102))
								{
									iLocal_102 = 0;
									Var69.f_37 = 0;
								}
								else
								{
									Var69.f_38 = 1;
									iLocal_102 = 0;
									Var69.f_37 = 0;
								}
							}
						}
						else
						{
							UNK_0xDE39D2F0ED5FFA62(&(Global_111638.f_20113.f_130[iParam0 /*41*/].f_28), &iLocal_102);
						}
					}
					else if (iLocal_104 == 1)
					{
						if (iLocal_103 == 0)
						{
							UNK_0xF88B7DEAA25925F9(&(Global_111638.f_20113.f_130[iParam0 /*41*/].f_28), &iLocal_103);
						}
						else if (!UNK_0x5E9C3E8391CBB040(iLocal_103))
						{
							switch (UNK_0x9E0FEF6524BB813B(iLocal_103))
							{
								case 0:
									iLocal_103 = 0;
									Var69.f_37 = 0;
									break;
								default:
									Var69.f_38 = 1;
									iLocal_103 = 0;
									Var69.f_37 = 0;
									break;
							}
						}
					}
				}
				else if (Var69.f_38)
				{
					if ((!func_439(0) && !func_439(3)) && !func_439(2))
					{
						if (func_277(96, "SOCIAL_CARAPP2", 2, 0, 0, 0, 0, 1, 0, 1))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 0;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
				}
				else if (iLocal_106[iParam0])
				{
					iLocal_106[iParam0] = 0;
					Var69.f_39 = 0;
					Var69.f_34 = 0;
					if (!func_273(Var69.f_27) && (iParam0 != 1 || Global_111638.f_20113.f_281[iParam0]))
					{
						Var69.f_39 = 1;
					}
					else
					{
						Var69.f_33 = 0;
						Var69.f_36 = 1;
						Var69.f_35 = 1;
						Var69.f_34 = iLocal_110[iParam0];
					}
					iLocal_110[iParam0] = 0;
				}
				else if (Var69.f_39)
				{
					if ((!func_439(0) && !func_439(3)) && !func_439(2))
					{
						if (func_256(96, "SOCIAL_CARAPP3", 2, UNK_0x19C9F30A7697B43C(UNK_0x1739BA50603D849C(Global_111638.f_20113.f_130[iParam0 /*41*/])), -99, "NULL", 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 1;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
				}
				else if ((!func_439(0) && !func_439(3)) && !func_439(2))
				{
					StringCopy(&cVar231, "SOCIAL_CARAPP", 16);
					if (iParam0 == 1 && !Global_111638.f_20113.f_281[iParam0])
					{
						StringCopy(&cVar231, "SOCIAL_FREE", 16);
					}
					if (func_256(96, &cVar231, 2, UNK_0x19C9F30A7697B43C(UNK_0x1739BA50603D849C(Global_111638.f_20113.f_130[iParam0 /*41*/])), -99, "NULL", 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0))
					{
						Var69.f_33 = 0;
						Var69.f_36 = 1;
						Var69.f_35 = 0;
						Var69.f_34 = 0;
						func_255();
					}
				}
				bLocal_83 = true;
			}
			else
			{
				Var69.f_33 = 0;
				Var69.f_36 = 0;
				Var69.f_35 = 0;
				Var69.f_34 = 0;
			}
		}
	}
	bVar235 = true;
	if (UNK_0x8CD06866876216F2())
	{
		if (((iParam0 != 3 || !func_252(39)) || func_251()) || func_96(UNK_0xD803B885F5E47A62(), 1, 0))
		{
			bVar235 = false;
		}
	}
	else if (!func_250(iParam0) || func_251())
	{
		bVar235 = false;
	}
	if (bVar235 && !Var69.f_33)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (iVar1 == 0)
			{
				UNK_0xEBD5716567F1D347("car");
				UNK_0xB5B7B792811308A7(&cVar14);
				if (UNK_0xB9B2DEACD44BF80B())
				{
					iVar236 = func_27("uid");
					if (((iVar236 != 0 && iVar236 != Var69.f_26) && func_27("character") == iVar2) && (!UNK_0x8CD06866876216F2() || func_27("vehicle") == iLocal_74))
					{
						if (UNK_0x8CD06866876216F2())
						{
						}
						Var69.f_26 = iVar236;
						Var69 = func_27("carModel");
						if (!UNK_0x4DAC2AD66FE0E696(Var69))
						{
							if (iParam0 == 0)
							{
								Var69 = func_249(0, 1);
							}
							else if (iParam0 == 1)
							{
								Var69 = func_249(1, 1);
							}
							else if (iParam0 == 2)
							{
								Var69 = func_249(2, 1);
							}
							else
							{
								Var69 = joaat("BUFFALO2");
							}
						}
						Var69.f_27 = func_27("cost");
						Var69.f_1 = func_27("carColour1");
						Var69.f_2 = func_27("carColour2");
						Var69.f_3 = func_27("carColour1Group");
						Var69.f_4 = func_27("carColour2Group");
						Var69.f_5 = func_27("windowTint");
						Var69.f_18 = func_248(func_27("bulletProofTyres"));
						Var69.f_9 = func_27("carEngine");
						Var69.f_10 = func_27("carBrakes");
						Var69.f_13 = func_27("carExhaust");
						Var69.f_11 = func_27("carWheel");
						Var69.f_6 = func_27("tyreSmokeColourRed");
						Var69.f_7 = func_27("tyreSmokeColourGreen");
						Var69.f_8 = func_27("tyreSmokeColourBlue");
						Var69.f_16 = func_27("carHorn");
						Var69.f_15 = func_27("carArmour");
						Var69.f_19 = func_27("carTurbo");
						Var69.f_14 = func_27("carSuspension");
						Var69.f_17 = func_27("carXenonLights");
						Var69.f_20 = func_27("tyreSmoke");
						Var69.f_12 = Var26.f_10;
						bVar0 = true;
						if (!UNK_0x8CD06866876216F2())
						{
							if (!iLocal_114[iParam0] && (UNK_0x1C0640BA9A7327B3() - iLocal_105) < 20000)
							{
								iLocal_106[iParam0] = 1;
							}
							else if (((!func_172(0) && func_247(1, 0) == 0) && (Global_111638.f_9080 || func_246(0))) && (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_2[27 /*3*/], true) || func_246(0)))
							{
								iLocal_106[iParam0] = 1;
								iLocal_110[iParam0] = 1;
							}
							else if ((((iParam0 == 0 && Var69 == joaat("TAILGATER")) || (iParam0 == 1 && Var69 == joaat("BUFFALO2"))) || (iParam0 == 1 && Var69 == joaat("BAGGER"))) || (iParam0 == 2 && Var69 == joaat("BODHI2")))
							{
								if (func_247(iParam0, Var69) == 0)
								{
									iLocal_106[iParam0] = 1;
									iLocal_110[iParam0] = 1;
								}
							}
							if (!iLocal_106[iParam0])
							{
							}
						}
					}
					if (!UNK_0x8CD06866876216F2())
					{
						iLocal_114[iParam0] = 1;
					}
				}
				UNK_0x98C61465A1232E0E();
				UNK_0xFE0C6A4F9007749F();
			}
			else if (iVar1 == 1 && bVar0)
			{
				UNK_0xEBD5716567F1D347("car");
				UNK_0xB5B7B792811308A7("plate");
				if (UNK_0xB9B2DEACD44BF80B())
				{
					Var69.f_32 = func_27("carPlateBack");
					if (Var69.f_32 > 4)
					{
						Var69.f_32 = 0;
						Var69.f_32 = func_27("carPlateBack");
					}
					StringCopy(&(Var69.f_28), func_245("carPlateText"), 16);
				}
				UNK_0x98C61465A1232E0E();
				UNK_0xFE0C6A4F9007749F();
				Var69.f_33 = 1;
				Var69.f_37 = 1;
				Var69.f_39 = 0;
				Var69.f_35 = 0;
				Var69.f_40 = 0;
				if (!UNK_0x8CD06866876216F2())
				{
					UNK_0xD8B681091EBE4064(joaat("CAR_MOD_APP_USED"), true, 1);
					func_244(135, 1);
					Global_111638.f_20113.f_262 = 1;
				}
				else
				{
					Global_2097152[func_191() /*10930*/].f_6086.f_62 = iLocal_76;
					func_56(99, 1, -1, 1);
				}
				bLocal_323 = true;
			}
			iVar1++;
		}
	}
	if ((!Var26.f_41 && bVar235) && Var26.f_40)
	{
		if (UNK_0x8CD06866876216F2())
		{
			if (!func_242(&Var26))
			{
				bLocal_83 = true;
				return;
			}
		}
		if (UNK_0x8CD06866876216F2())
		{
		}
		UNK_0xEBD5716567F1D347("car");
		UNK_0xB5B7B792811308A7("appdata");
		bVar237 = func_241();
		if (bVar237 == 0)
		{
			bVar237 = func_241();
		}
		func_198("appUID", bVar237);
		Global_111638.f_20113.f_272 = bVar237;
		iVar238 = 0;
		iVar239 = 0;
		if (func_161())
		{
			if (func_213())
			{
				iVar239 = (iVar239 + Global_262145.f_122);
			}
		}
		func_434("spDiscount", (1f - (SYSTEM::TO_FLOAT(iVar238) / 100f)));
		func_434("mpDiscount", (1f - (SYSTEM::TO_FLOAT(iVar239) / 100f)));
		if (UNK_0x58424C49F8924842())
		{
			func_198("playerName", UNK_0x12AB0310C2281427(UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62())));
			if (UNK_0x8CD06866876216F2())
			{
				func_198("playerNameMP", UNK_0x12AB0310C2281427(UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62())));
			}
			else
			{
				func_198("playerNameSP", UNK_0x12AB0310C2281427(UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62())));
			}
		}
		UNK_0x98C61465A1232E0E();
		UNK_0xB5B7B792811308A7(&Var8);
		if (UNK_0x8CD06866876216F2())
		{
			UNK_0xB5B7B792811308A7(&Var20);
		}
		if (!func_212(Var26))
		{
			func_198("carUnlocked", 0);
		}
		else
		{
			func_198("carUnlocked", 1);
			if ((((Var26 == joaat("SANCHEZ") || Var26 == joaat("FAGGIO2")) || Var26 == joaat("DUNE")) || Var26 == joaat("BFINJECTION")) || !func_211(Var26.f_10))
			{
				Var26.f_27 = 0;
			}
			if (func_210(Var26, 1))
			{
				Var26.f_30 = 0;
			}
			if (Var26 == joaat("LECTRO") || Var26 == joaat("VINDICATOR"))
			{
				Var26.f_28 = 0;
			}
			if (!UNK_0x8CD06866876216F2())
			{
				if (Var26 == joaat("PATRIOT"))
				{
					Var26.f_26 = 0;
				}
				if (Var26 == joaat("PRAIRIE"))
				{
					if (Var26.f_26 > 1)
					{
						Var26.f_26 = 1;
					}
				}
			}
			if (Var26.f_15 > 1)
			{
				Var26.f_15 = 0;
			}
			if (UNK_0x8CD06866876216F2())
			{
				func_198("playerSlot", bVar3);
				func_198("playerRank", func_209(UNK_0xD803B885F5E47A62()));
				switch (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
				{
					case joaat("MP_M_FREEMODE_01"):
					case joaat("MP_F_FREEMODE_01"):
						func_435("playerGang", "None");
						UNK_0xA402F6C87C08815C(116, &bVar4, &bVar5, &bVar6, &uVar7);
						break;
				}
				func_198("playerGangR", bVar4);
				func_198("playerGangG", bVar5);
				func_198("playerGangB", bVar6);
			}
			if (!UNK_0x4DAC2AD66FE0E696(Var26))
			{
				func_198("carModel", -1);
				func_198("carUnlocked", 0);
			}
			else
			{
				func_198("carModel", Var26);
			}
			if (!UNK_0x8CD06866876216F2())
			{
				switch (Var26.f_39)
				{
					case 0:
						if (UNK_0x8E39AC3C76C8AA58(Var26))
						{
							func_435("carType", "car");
						}
						else
						{
							func_435("carType", "bike");
						}
						break;
					case 1:
						func_435("carType", "sport");
						break;
					case 2:
						func_435("carType", "suv");
						break;
					case 3:
						func_435("carType", "special");
						break;
				}
			}
			else
			{
				iVar240 = func_204(Var26);
				switch (iVar240)
				{
					case 0:
						func_435("carType", "car");
						break;
					case 1:
						func_435("carType", "sport");
						break;
					case 2:
						func_435("carType", "suv");
						break;
					case 3:
						func_435("carType", "special");
						break;
					case 4:
						func_435("carType", "bike");
						break;
					case 5:
						func_435("carType", "special");
						break;
					case 6:
						func_435("carType", "car");
						break;
					case 7:
						func_435("carType", "special");
						break;
					case 10:
						func_435("carType", "special");
						break;
					case 11:
						func_435("carType", "car");
						break;
					case 28:
						func_435("carType", "car");
						break;
					case 26:
						func_435("carType", "special");
						break;
					case 27:
						func_435("carType", "special");
						break;
					case 29:
						func_435("carType", "special");
						break;
					case 30:
						func_435("carType", "special");
						break;
					case 31:
						func_435("carType", "special");
						break;
					case 32:
						func_435("carType", "special");
						break;
					default:
						func_435("carType", "special");
						break;
				}
			}
			func_198("carColour1", Var26.f_1);
			func_198("carColour2", Var26.f_2);
			func_198("windowTint", Var26.f_3);
			func_198("bulletProofTyres", func_203(Var26.f_16));
			func_198("carEngine", Var26.f_7);
			func_198("carBrakes", Var26.f_8);
			func_198("carExhaust", Var26.f_11);
			func_198("carWheel", Var26.f_9);
			func_198("tyreSmokeColourRed", Var26.f_4);
			func_198("tyreSmokeColourGreen", Var26.f_5);
			func_198("tyreSmokeColourBlue", Var26.f_6);
			func_198("carHorn", Var26.f_14);
			func_198("carArmour", Var26.f_13);
			func_198("carTurbo", Var26.f_17);
			func_198("carSuspension", Var26.f_12);
			func_198("carXenonLights", Var26.f_15);
			func_198("tyreSmoke", Var26.f_18);
			func_198("tyreSmoke", Var26.f_18);
			func_198("carWheelType", Var26.f_10);
			func_198("carEngineCount", Var26.f_24);
			func_198("carBrakesCount", Var26.f_25);
			func_198("carExhaustCount", Var26.f_26);
			func_198("carWheelCount", Var26.f_27);
			func_198("carHornCount", Var26.f_28);
			func_198("carArmourCount", Var26.f_29);
			func_198("carSuspensionCount", Var26.f_30);
			func_198("carHorn1", Var26.f_33[0]);
			func_198("carHorn2", Var26.f_33[1]);
			func_198("carHorn3", Var26.f_33[2]);
			func_198("carHorn4", Var26.f_33[3]);
			func_198("carHorn5", Var26.f_33[4]);
			func_434("carPriceModifier", Var26.f_31);
			if (!UNK_0xEAE0D21A50E6C7F4(Var26.f_32, false) || Var26 == joaat("SOVEREIGN"))
			{
				func_198("carColour1Unlocked", 0);
			}
			else
			{
				func_198("carColour1Unlocked", 1);
			}
			if (!UNK_0xEAE0D21A50E6C7F4(Var26.f_32, true) || Var26 == joaat("SOVEREIGN"))
			{
				func_198("carColour2Unlocked", 0);
			}
			else
			{
				func_198("carColour2Unlocked", 1);
			}
			bVar241 = false;
			if (!UNK_0x8CD06866876216F2() || UNK_0xEAE0D21A50E6C7F4(Global_1323615[iLocal_76 /*141*/].f_102, 17))
			{
				UNK_0x5D96D8530B3D0904(&bVar241, false);
			}
			if (!UNK_0x8CD06866876216F2() || UNK_0xEAE0D21A50E6C7F4(Global_1323615[iLocal_76 /*141*/].f_102, 18))
			{
				UNK_0x5D96D8530B3D0904(&bVar241, true);
			}
			func_198("newItemUnlocks", bVar241);
		}
		if (UNK_0x8CD06866876216F2())
		{
			UNK_0x98C61465A1232E0E();
		}
		UNK_0x98C61465A1232E0E();
		Local_87 = { Var8 };
		Local_93 = { Var20 };
		bLocal_86 = Var26;
		bLocal_84 = true;
		UNK_0xB5B7B792811308A7("plate");
		func_198("carPlateBack", Var26.f_23);
		UNK_0x98C61465A1232E0E();
		UNK_0xFE0C6A4F9007749F();
		Var26.f_40 = 0;
		bLocal_101 = true;
		SYSTEM::SETTIMERA(0);
		if (!UNK_0x8CD06866876216F2())
		{
			Global_111638.f_20113.f_277[iParam0] = 1;
		}
		else
		{
			if (bVar3 == 0)
			{
				func_431(joaat("MPPLY_CARAPP_DATA_SENT_0"), 1);
			}
			else if (bVar3 == 1)
			{
				func_431(joaat("MPPLY_CARAPP_DATA_SENT_1"), 1);
			}
			else if (bVar3 == 2)
			{
				func_431(joaat("MPPLY_CARAPP_DATA_SENT_2"), 1);
			}
			else if (bVar3 == 3)
			{
				func_431(joaat("MPPLY_CARAPP_DATA_SENT_3"), 1);
			}
			else if (bVar3 == 4)
			{
				func_431(joaat("MPPLY_CARAPP_DATA_SENT_4"), 1);
			}
			Global_2097152[func_191() /*10930*/].f_6086.f_41[iLocal_74] = 0;
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_111638.f_20113[iParam0 /*43*/] = { Var26 };
			Global_111638.f_20113.f_130[iParam0 /*41*/] = { Var69 };
			break;
		case 3:
			func_202(&Var26);
			Global_2097152[func_191() /*10930*/].f_6086 = { Var69 };
			break;
	}
}

void func_202(var uParam0)
{
	if (uParam0->f_40)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1323615[iLocal_76 /*141*/].f_102), 25);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_1323615[iLocal_76 /*141*/].f_102), 25);
	}
	if (uParam0->f_41)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1323615[iLocal_76 /*141*/].f_102), 26);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_1323615[iLocal_76 /*141*/].f_102), 26);
	}
}

bool func_203(bool bParam0)
{
	if (bParam0)
	{
		return true;
	}
	return false;
}

int func_204(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("VIRGO2"):
			return 10;
		case joaat("SLAMVAN3"):
			return 11;
	}
	switch (bParam0)
	{
		case joaat("SULTANRS"):
			return 6;
		case joaat("BANSHEE2"):
			return 7;
	}
	switch (bParam0)
	{
		case joaat("BTYPE3"):
			return 5;
	}
	switch (bParam0)
	{
		case joaat("FACTION3"):
			return 3;
		case joaat("MINIVAN2"):
			return 0;
		case joaat("SABREGT2"):
			return 0;
		case joaat("SLAMVAN3"):
			return 0;
		case joaat("TORNADO5"):
			return 0;
		case joaat("VIRGO2"):
			return 3;
		case joaat("VIRGO3"):
			return 3;
	}
	switch (bParam0)
	{
		case joaat("FCR"):
			return 0;
		case joaat("DIABLOUS"):
			return 0;
		case joaat("DIABLOUS2"):
			return 28;
		case joaat("FCR2"):
			return 28;
		case joaat("ITALIGTB"):
			return 3;
		case joaat("SPECTER"):
			return 3;
		case joaat("NERO"):
			return 3;
		case joaat("ITALIGTB2"):
			return 27;
		case joaat("SPECTER2"):
			return 27;
		case joaat("NERO2"):
			return 27;
		case joaat("COMET3"):
			return 26;
		case joaat("ELEGY"):
			return 26;
		case 1802742206:
			return 27;
		case -2122646867:
			return 27;
		case 1717532765:
			return 27;
		case 1107404867:
			return 27;
		case 67753863:
			return 27;
		case -913589546:
			return 27;
	}
	switch (bParam0)
	{
		case joaat("APC"):
			return 29;
		case joaat("HALFTRACK"):
			return 29;
		case joaat("TRAILERSMALL2"):
			return 29;
		case joaat("DELUXO"):
			return 29;
		case joaat("STROMBERG"):
			return 29;
		case joaat("CARACARA"):
			return 29;
		case joaat("DUNE3"):
			return 30;
		case joaat("INSURGENT3"):
			return 30;
		case joaat("TAMPA3"):
			return 30;
		case joaat("TECHNICAL3"):
			return 30;
		case joaat("OPPRESSOR"):
			return 31;
		case joaat("OPPRESSOR2"):
			return 31;
		case joaat("PHANTOM3"):
			return 32;
		case joaat("HAULER2"):
			return 32;
		case joaat("TRAILERLARGE"):
			return 32;
		case joaat("BARRAGE"):
			return 35;
		case joaat("MULE4"):
			return 37;
		case joaat("SPEEDO4"):
			return 36;
		case joaat("POUNDER2"):
			return 36;
		case joaat("RCBANDITO"):
			return 39;
		case -1254331310:
			return 36;
		case 394110044:
			return 36;
	}
	if (func_208(bParam0))
	{
		return 33;
	}
	else if (func_207(bParam0))
	{
		return 34;
	}
	else if (func_206(bParam0))
	{
		return 38;
	}
	switch (bParam0)
	{
		case joaat("VIGILANTE"):
			return 31;
	}
	if (func_205(bParam0))
	{
		return 3;
	}
	if (UNK_0x7D8B2A8F9EA82DB7(bParam0))
	{
		return 4;
	}
	switch (bParam0)
	{
		case joaat("ADDER"):
			return 3;
		case joaat("AIRBUS"):
			return 0;
		case joaat("AKUMA"):
			return 4;
		case joaat("ALPHA"):
			return 3;
		case joaat("ANNIHILATOR"):
			return 0;
		case joaat("ASEA"):
			return 0;
		case joaat("ASTEROPE"):
			return 0;
		case joaat("BALLER2"):
			return 2;
		case joaat("BANSHEE"):
			return 3;
		case joaat("BARRACKS"):
			return 0;
		case joaat("BATI"):
			return 4;
		case joaat("BATI2"):
			return 4;
		case joaat("BESRA"):
			return 0;
		case joaat("BFINJECTION"):
			return 0;
		case joaat("BIFTA"):
			return 0;
		case joaat("BISON"):
			return 2;
		case joaat("BLADE"):
			return 3;
		case joaat("BLAZER"):
			return 0;
		case joaat("BLAZER3"):
			return 0;
		case joaat("BMX"):
			return 0;
		case joaat("BOBCATXL"):
			return 2;
		case joaat("BODHI2"):
			return 0;
		case joaat("BTYPE"):
			return 0;
		case joaat("BUFFALO"):
			return 0;
		case joaat("BUFFALO2"):
			return 1;
		case joaat("BULLET"):
			return 3;
		case joaat("BUS"):
			return 0;
		case joaat("BUZZARD"):
			return 0;
		case joaat("CARBONIZZARE"):
			return 3;
		case joaat("CARBONRS"):
			return 3;
		case joaat("CAVALCADE"):
			return 2;
		case joaat("CAVALCADE2"):
			return 2;
		case joaat("CHEETAH"):
			return 3;
		case joaat("COACH"):
			return 0;
		case joaat("COGCABRIO"):
			return 3;
		case joaat("COMET2"):
			return 3;
		case joaat("COQUETTE"):
			return 3;
		case joaat("COQUETTE2"):
			return 1;
		case joaat("CRUISER"):
			return 0;
		case joaat("CRUSADER"):
			return 0;
		case joaat("CUBAN800"):
			return 0;
		case joaat("DILETTANTE"):
			return 0;
		case joaat("DILETTANTE2"):
			return 0;
		case joaat("DOMINATOR"):
			return 1;
		case joaat("DOMINATOR2"):
			return 1;
		case joaat("DOUBLE"):
			return 4;
		case joaat("DUBSTA3"):
			return 3;
		case joaat("DUMP"):
			return 0;
		case joaat("DUNE"):
			return 0;
		case joaat("DUSTER"):
			return 0;
		case joaat("ELEGY2"):
			return 3;
		case joaat("ENTITYXF"):
			return 3;
		case joaat("EXEMPLAR"):
			return 3;
		case joaat("F620"):
			return 1;
		case joaat("FAGGIO2"):
			return 4;
		case joaat("FELON"):
			return 0;
		case joaat("FELON2"):
			return 0;
		case joaat("FELTZER2"):
			return 3;
		case joaat("FROGGER"):
			return 0;
		case joaat("FROGGER2"):
			return 0;
		case joaat("FUGITIVE"):
			return 0;
		case joaat("FUSILADE"):
			return 1;
		case joaat("GAUNTLET"):
			return 0;
		case joaat("GAUNTLET2"):
			return 0;
		case joaat("GLENDALE"):
			return 3;
		case joaat("GRANGER"):
			return 2;
		case joaat("GRESLEY"):
			return 2;
		case joaat("HEXER"):
			return 4;
		case joaat("HOTKNIFE"):
			return 3;
		case joaat("HUNTLEY"):
			return 1;
		case joaat("HYDRA"):
			return 0;
		case joaat("INFERNUS"):
			return 3;
		case joaat("INGOT"):
			return 0;
		case joaat("INTRUDER"):
			return 0;
		case joaat("ISSI2"):
			return 0;
		case joaat("JACKAL"):
			return 1;
		case joaat("JB700"):
			return 3;
		case joaat("JESTER"):
			return 3;
		case joaat("JESTER2"):
			return 3;
		case joaat("JETMAX"):
			return 0;
		case joaat("JOURNEY"):
			return 0;
		case joaat("KALAHARI"):
			return 0;
		case joaat("KHAMELION"):
			return 3;
		case joaat("LANDSTALKER"):
			return 2;
		case joaat("LUXOR"):
			return 0;
		case joaat("MAMMATUS"):
			return 0;
		case joaat("MARQUIS"):
			return 0;
		case joaat("MASSACRO"):
			return 3;
		case joaat("MASSACRO2"):
			return 3;
		case joaat("MAVERICK"):
			return 0;
		case joaat("MESA"):
			return 2;
		case joaat("MESA2"):
			return 2;
		case joaat("MESA3"):
			return 2;
		case joaat("MILJET"):
			return 0;
		case joaat("MINIVAN"):
			return 0;
		case joaat("MONROE"):
			return 3;
		case joaat("MONSTER"):
			return 0;
		case joaat("MULE"):
			return 0;
		case joaat("MULE2"):
			return 0;
		case joaat("MULE3"):
			return 0;
	}
	switch (bParam0)
	{
		case joaat("NEMESIS"):
			return 4;
		case joaat("NINEF"):
			return 3;
		case joaat("NINEF2"):
			return 3;
		case joaat("ORACLE"):
			return 1;
		case joaat("ORACLE2"):
			return 1;
		case joaat("PANTO"):
			return 3;
		case joaat("PARADISE"):
			return 0;
		case joaat("PCJ"):
			return 4;
		case joaat("PENUMBRA"):
			return 1;
		case joaat("PICADOR"):
			return 0;
		case joaat("PIGALLE"):
			return 3;
		case joaat("PREMIER"):
			return 0;
		case joaat("PRIMO"):
			return 0;
		case joaat("RADI"):
			return 0;
		case joaat("RANCHERXL"):
			return 2;
		case joaat("RANCHERXL2"):
			return 2;
		case joaat("RAPIDGT"):
			return 3;
		case joaat("RATLOADER"):
			return 2;
		case joaat("RATLOADER2"):
			return 2;
		case joaat("REBEL"):
			return 2;
		case joaat("REBEL2"):
			return 2;
		case joaat("REGINA"):
			return 0;
		case joaat("RENTALBUS"):
			return 0;
		case joaat("RHAPSODY"):
			return 3;
		case joaat("RHINO"):
			return 0;
		case joaat("ROCOTO"):
			return 2;
		case joaat("RUFFIAN"):
			return 4;
		case joaat("RUMPO"):
			return 0;
		case joaat("SADLER"):
			return 2;
		case joaat("SANCHEZ"):
			return 4;
		case joaat("SANCHEZ2"):
			return 4;
		case joaat("SANDKING"):
			return 2;
		case joaat("SANDKING2"):
			return 2;
		case joaat("SCHAFTER2"):
			return 1;
		case joaat("SCHWARZER"):
			return 1;
		case joaat("SCORCHER"):
			return 0;
		case joaat("SEASHARK"):
			return 0;
		case joaat("SEMINOLE"):
			return 2;
		case joaat("SENTINEL"):
			return 1;
		case joaat("SENTINEL2"):
			return 1;
		case joaat("SHAMAL"):
			return 0;
		case joaat("SOVEREIGN"):
			return 4;
		case joaat("SPEEDER"):
			return 0;
		case joaat("SQUALO"):
			return 0;
		case joaat("STANIER"):
			return 0;
		case joaat("STINGER"):
			return 3;
		case joaat("STINGERGT"):
			return 3;
		case joaat("STRATUM"):
			return 0;
		case joaat("STRETCH"):
			return 0;
		case joaat("STUNT"):
			return 0;
		case joaat("SUNTRAP"):
			return 0;
		case joaat("SUPERD"):
			return 3;
		case joaat("SURANO"):
			return 3;
		case joaat("SURFER"):
			return 0;
		case joaat("SURGE"):
			return 0;
		case joaat("TAILGATER"):
			return 0;
		case joaat("THRUST"):
			return 4;
		case joaat("TITAN"):
			return 0;
		case joaat("TRIBIKE"):
			return 4;
		case joaat("TRIBIKE2"):
			return 4;
		case joaat("TRIBIKE3"):
			return 4;
		case joaat("TROPIC"):
			return 0;
		case joaat("TURISMOR"):
			return 3;
		case joaat("VACCA"):
			return 3;
		case joaat("VADER"):
			return 4;
		case joaat("VALKYRIE"):
			return 0;
		case joaat("VELUM"):
			return 0;
		case joaat("VESTRA"):
			return 0;
		case joaat("VIGERO"):
			return 1;
		case joaat("VOLTIC"):
			return 3;
		case joaat("WARRENER"):
			return 3;
		case joaat("WASHINGTON"):
			return 0;
		case joaat("YOUGA"):
			return 2;
		case joaat("ZENTORNO"):
			return 3;
		case joaat("ZION"):
			return 1;
		case joaat("ZION2"):
			return 1;
		case joaat("ZTYPE"):
			return 3;
		case joaat("SWIFT"):
			return 0;
		case joaat("INNOVATION"):
			return 4;
		case joaat("HAKUCHOU"):
			return 4;
		case joaat("FUROREGT"):
			return 0;
		case joaat("KURUMA"):
			return 3;
		case joaat("BLISTA2"):
			return 0;
		case joaat("BLISTA3"):
			return 0;
		case joaat("BUFFALO3"):
			return 1;
		case joaat("DODO"):
			return 0;
		case joaat("DOMINATOR"):
			return 1;
		case joaat("DOMINATOR2"):
			return 1;
		case joaat("DUKES"):
			return 1;
		case joaat("DUKES2"):
			return 0;
		case joaat("MARSHALL"):
			return 0;
		case joaat("STALION"):
			return 0;
		case joaat("STALION2"):
			return 0;
		case joaat("SUBMERSIBLE"):
			return 0;
		case joaat("SUBMERSIBLE2"):
			return 0;
	}
	switch (bParam0)
	{
		case joaat("BAGGER"):
			return 4;
		case joaat("BALLER"):
			return 2;
		case joaat("BJXL"):
			return 2;
		case joaat("BLISTA"):
			return 0;
		case joaat("BLISTA2"):
			return 0;
		case joaat("BUCCANEER"):
			return 0;
		case joaat("DAEMON"):
			return 4;
		case joaat("DLOADER"):
			return 0;
		case joaat("FQ2"):
			return 0;
		case joaat("HABANERO"):
			return 0;
		case joaat("MANANA"):
			return 0;
		case joaat("PATRIOT"):
			return 2;
		case joaat("PEYOTE"):
			return 0;
		case joaat("PHOENIX"):
			return 0;
		case joaat("PRAIRIE"):
			return 0;
		case joaat("SABREGT"):
			return 0;
		case joaat("SERRANO"):
			return 2;
		case joaat("SPEEDO"):
			return 0;
		case joaat("SPEEDO2"):
			return 0;
		case joaat("VOODOO2"):
			return 0;
		case joaat("ROMERO"):
			return 0;
		case joaat("SURFER2"):
			return 0;
		case joaat("EMPEROR2"):
			return 0;
		case joaat("DUBSTA2"):
			return 2;
		case joaat("BLAZER2"):
			return 0;
		case joaat("ORACLE2"):
			return 1;
		case joaat("CAVALCADE2"):
			return 2;
		case joaat("DUBSTA"):
			return 2;
		case joaat("RAPIDGT2"):
			return 1;
		case joaat("BOXVILLE4"):
			return 0;
		case joaat("MESA"):
			return 2;
	}
	switch (bParam0)
	{
		case joaat("WINDSOR"):
		case joaat("OSIRIS"):
		case joaat("FELTZER3"):
		case joaat("VIRGO"):
			return 3;
		case joaat("FACTION"):
		case joaat("FACTION2"):
		case joaat("MOONBEAM2"):
		case joaat("MOONBEAM"):
			return 3;
		case joaat("BUCCANEER2"):
		case joaat("CHINO2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
			return 0;
		case joaat("BTYPE2"):
		case joaat("LURCHER"):
			return 3;
		case joaat("OMNIS"):
		case joaat("TROPOS"):
		case joaat("BRIOSO"):
		case joaat("TROPHYTRUCK"):
		case joaat("TROPHYTRUCK2"):
		case joaat("CLIFFHANGER"):
		case joaat("BF400"):
		case joaat("RALLYTRUCK"):
		case joaat("TAMPA2"):
		case joaat("GARGOYLE"):
		case joaat("TYRUS"):
		case joaat("LE7B"):
		case joaat("LYNX"):
		case joaat("SHEAVA"):
		case joaat("ARDENT"):
		case joaat("CHEETAH2"):
		case joaat("TORERO"):
		case joaat("VAGNER"):
		case joaat("XA21"):
			return 3;
		case joaat("CONTENDER"):
			return 2;
		case joaat("TAMPA3"):
		case joaat("APC"):
		case joaat("HALFTRACK"):
		case joaat("DUNE3"):
		case joaat("TRAILERSMALL2"):
		case joaat("INSURGENT3"):
		case joaat("TECHNICAL3"):
		case joaat("SENTINEL3"):
		case joaat("RIATA"):
			return 3;
		case joaat("GB200"):
		case joaat("ISSI3"):
		case joaat("SWINGER"):
		case joaat("PATRIOT2"):
		case joaat("MENACER"):
		case joaat("FREECRAWLER"):
		case joaat("STAFFORD"):
		case joaat("SCRAMJET"):
		case joaat("TERBYTE"):
		case joaat("CLIQUE"):
		case joaat("DEVESTE"):
		case joaat("DEVIANT"):
		case joaat("IMPALER"):
		case joaat("SCARAB"):
		case joaat("SCHLAGEN"):
		case joaat("TOROS"):
		case joaat("VAMOS"):
		case joaat("TULIP"):
		case joaat("MONSTER3"):
		case joaat("IMPALER2"):
		case joaat("BRUISER"):
		case joaat("CERBERUS"):
		case joaat("DOMINATOR4"):
		case joaat("IMPERATOR"):
		case joaat("ISSI4"):
		case joaat("ITALIGTO"):
		case joaat("DEATHBIKE"):
		case joaat("SLAMVAN4"):
		case joaat("ZR380"):
		case joaat("BRUTUS"):
		case joaat("LGUARD"):
		case joaat("BLAZER2"):
		case joaat("FIRETRUK"):
		case joaat("BURRITO2"):
		case joaat("BOXVILLE"):
		case joaat("STOCKADE"):
		case 1118611807:
		case 409049982:
		case 340154634:
		case -1132721664:
		case -834353991:
		case 1717532765:
		case 83136452:
		case 987469656:
		case 1802742206:
		case 1284356689:
		case 1456336509:
		case -1756021720:
		case 872704284:
		case 394110044:
		case joaat("OUTLAW"):
		case 301304410:
		case 740289177:
		case -1960756985:
		case 960812448:
		case 1693751655:
		case 2031587082:
		case -1254331310:
		case -2122646867:
		case joaat("CLUB"):
		case 2134119907:
		case 1107404867:
		case 67753863:
		case -913589546:
		case -631322662:
		case -838099166:
		case -1810806490:
		case -1358197432:
		case 1492612435:
		case -1728685474:
		case 1181339704:
			return 3;
	}
	return 0;
}

bool func_205(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("ADDER"):
		case joaat("BANSHEE"):
		case joaat("BULLET"):
		case joaat("CARBONIZZARE"):
		case joaat("CARBONRS"):
		case joaat("CHEETAH"):
		case joaat("COGCABRIO"):
		case joaat("COMET2"):
		case joaat("COQUETTE"):
		case joaat("ELEGY2"):
		case joaat("ENTITYXF"):
		case joaat("EXEMPLAR"):
		case joaat("FELTZER2"):
		case joaat("HOTKNIFE"):
		case joaat("INFERNUS"):
		case joaat("JB700"):
		case joaat("KHAMELION"):
		case joaat("MONROE"):
		case joaat("NINEF"):
		case joaat("NINEF2"):
		case joaat("RAPIDGT"):
		case joaat("RAPIDGT2"):
		case joaat("STINGER"):
		case joaat("STINGERGT"):
		case joaat("SUPERD"):
		case joaat("SURANO"):
		case joaat("VACCA"):
		case joaat("VOLTIC"):
		case joaat("ZTYPE"):
		case joaat("DUBSTA3"):
		case joaat("BLADE"):
		case joaat("GLENDALE"):
		case joaat("RHAPSODY"):
		case joaat("WARRENER"):
		case joaat("PANTO"):
		case joaat("PIGALLE"):
		case joaat("CASCO"):
		case joaat("KURUMA2"):
		case joaat("LECTRO"):
		case joaat("INSURGENT"):
		case joaat("INSURGENT2"):
		case joaat("TECHNICAL"):
			return true;
		case joaat("WINDSOR"):
		case joaat("OSIRIS"):
		case joaat("FELTZER3"):
		case joaat("VIRGO"):
			return true;
		case joaat("FACTION"):
		case joaat("FACTION2"):
		case joaat("MOONBEAM"):
		case joaat("MOONBEAM2"):
			return true;
		case joaat("FACTION3"):
		case joaat("VIRGO2"):
			return true;
		case joaat("BALLER3"):
		case joaat("BALLER4"):
		case joaat("COGNOSCENTI"):
		case joaat("COG55"):
		case joaat("LIMO2"):
		case joaat("MAMBA"):
		case joaat("NIGHTSHADE"):
		case joaat("SCHAFTER3"):
		case joaat("SCHAFTER4"):
		case joaat("VERLIERER2"):
			return true;
		case joaat("TAMPA"):
			return true;
		case joaat("BANSHEE2"):
			return true;
		case joaat("BESTIAGTS"):
		case joaat("BRICKADE"):
		case joaat("FMJ"):
		case joaat("NIMBUS"):
		case joaat("PFISTER811"):
		case joaat("PROTOTIPO"):
		case joaat("RUMPO3"):
		case joaat("SEVEN70"):
		case joaat("TUG"):
		case joaat("VOLATUS"):
		case joaat("WINDSOR2"):
		case joaat("XLS"):
		case joaat("XLS2"):
		case joaat("REAPER"):
			return true;
		case joaat("OMNIS"):
		case joaat("TROPOS"):
		case joaat("BRIOSO"):
		case joaat("TROPHYTRUCK"):
		case joaat("TROPHYTRUCK2"):
		case joaat("CLIFFHANGER"):
		case joaat("BF400"):
		case joaat("RALLYTRUCK"):
		case joaat("TAMPA2"):
		case joaat("GARGOYLE"):
		case joaat("TYRUS"):
		case joaat("LE7B"):
		case joaat("LYNX"):
		case joaat("SHEAVA"):
			return true;
		case joaat("AVARUS"):
		case joaat("DEFILER"):
		case joaat("NIGHTBLADE"):
		case joaat("ZOMBIEA"):
		case joaat("ZOMBIEB"):
		case joaat("CHIMERA"):
		case joaat("ESSKEY"):
		case joaat("RATBIKE"):
		case joaat("HAKUCHOU2"):
		case joaat("DAEMON2"):
		case joaat("SHOTARO"):
		case joaat("RAPTOR"):
		case joaat("BLAZER4"):
		case joaat("SANCTUS"):
		case joaat("VORTEX"):
		case joaat("MANCHEZ"):
		case joaat("TORNADO6"):
		case joaat("YOUGA2"):
		case joaat("WOLFSBANE"):
		case joaat("FAGGIO3"):
		case joaat("FAGGIO"):
			return true;
		case joaat("BLAZER5"):
		case joaat("BOXVILLE5"):
		case joaat("COMET3"):
		case joaat("DIABLOUS"):
		case joaat("DIABLOUS2"):
		case joaat("DUNE4"):
		case joaat("DUNE5"):
		case joaat("FCR"):
		case joaat("FCR2"):
		case joaat("ITALIGTB"):
		case joaat("NERO"):
		case joaat("PENETRATOR"):
		case joaat("PHANTOM2"):
		case joaat("RUINER2"):
		case joaat("TECHNICAL2"):
		case joaat("TEMPESTA"):
		case joaat("VOLTIC2"):
		case joaat("WASTELANDER"):
		case joaat("ELEGY"):
		case joaat("ITALIGTB2"):
		case joaat("NERO2"):
		case joaat("RUINER3"):
		case joaat("SPECTER"):
		case joaat("SPECTER2"):
			return true;
		case joaat("GP1"):
		case joaat("RUSTON"):
		case joaat("INFERNUS2"):
		case joaat("TURISMO2"):
			return true;
		case joaat("ARDENT"):
		case joaat("VAGNER"):
		case joaat("CHEETAH2"):
		case joaat("NIGHTSHARK"):
		case joaat("TORERO"):
		case joaat("XA21"):
		case joaat("TAMPA3"):
		case joaat("APC"):
		case joaat("HALFTRACK"):
		case joaat("DUNE3"):
		case joaat("TRAILERSMALL2"):
		case joaat("INSURGENT3"):
		case joaat("TECHNICAL3"):
		case joaat("PHANTOM3"):
		case joaat("HAULER2"):
			return true;
		case joaat("CYCLONE"):
		case joaat("RAPIDGT3"):
		case joaat("RETINUE"):
		case joaat("VISIONE"):
		case joaat("VIGILANTE"):
			return true;
		case joaat("DELUXO"):
		case joaat("STROMBERG"):
		case joaat("RIOT2"):
		case joaat("CHERNOBOG"):
		case joaat("KHANJALI"):
		case joaat("AKULA"):
		case joaat("THRUSTER"):
		case joaat("AVENGER"):
		case joaat("BARRAGE"):
		case joaat("VOLATOL"):
		case joaat("COMET4"):
		case joaat("NEON"):
		case joaat("STREITER"):
		case joaat("SENTINEL3"):
		case joaat("YOSEMITE"):
		case joaat("SC1"):
		case joaat("AUTARCH"):
		case joaat("GT500"):
		case joaat("HUSTLER"):
		case joaat("REVOLTER"):
		case joaat("PARIAH"):
		case joaat("RAIDEN"):
		case joaat("SAVESTRA"):
		case joaat("RIATA"):
		case joaat("HERMES"):
		case joaat("COMET5"):
		case joaat("Z190"):
		case joaat("VISERIS"):
		case joaat("KAMACHO"):
			return true;
	}
	switch (bParam0)
	{
		case joaat("GB200"):
		case joaat("ISSI3"):
		case joaat("ELLIE"):
		case joaat("FAGALOA"):
		case joaat("MICHELLI"):
		case joaat("FLASHGT"):
		case joaat("HOTRING"):
		case joaat("TEZERACT"):
		case joaat("TYRANT"):
		case joaat("DOMINATOR3"):
		case joaat("TAIPAN"):
		case joaat("ENTITY2"):
		case joaat("JESTER3"):
		case joaat("CHEBUREK"):
		case joaat("CARACARA"):
		case joaat("SEASPARROW"):
		case joaat("CLIQUE"):
		case joaat("DEVESTE"):
		case joaat("DEVIANT"):
		case joaat("IMPALER"):
		case joaat("SCARAB"):
		case joaat("SCHLAGEN"):
		case joaat("TOROS"):
		case joaat("VAMOS"):
		case joaat("TULIP"):
		case joaat("MONSTER3"):
		case joaat("IMPALER2"):
		case joaat("BRUISER"):
		case joaat("CERBERUS"):
		case joaat("DOMINATOR4"):
		case joaat("IMPERATOR"):
		case joaat("ISSI4"):
		case joaat("ITALIGTO"):
		case joaat("DEATHBIKE"):
		case joaat("SLAMVAN4"):
		case joaat("BRUTUS"):
		case joaat("IMPERATOR2"):
		case joaat("IMPERATOR3"):
		case joaat("DEATHBIKE3"):
		case joaat("DEATHBIKE2"):
		case joaat("IMPALER3"):
		case joaat("BRUTUS2"):
		case joaat("BRUISER2"):
		case joaat("SLAMVAN5"):
		case joaat("ISSI5"):
		case joaat("MONSTER4"):
		case joaat("SCARAB2"):
		case joaat("CERBERUS2"):
		case joaat("DOMINATOR5"):
		case joaat("ZR3802"):
		case joaat("IMPALER4"):
		case joaat("BRUTUS3"):
		case joaat("BRUISER3"):
		case joaat("SLAMVAN6"):
		case joaat("ISSI6"):
		case joaat("MONSTER5"):
		case joaat("SCARAB3"):
		case joaat("CERBERUS3"):
		case joaat("DOMINATOR6"):
		case joaat("ZR3803"):
		case joaat("RCBANDITO"):
		case -1349095620:
		case 686471183:
		case 310284501:
		case 722226637:
		case 1934384720:
		case -362150785:
		case 1854776567:
		case -664141241:
		case joaat("LOCUST"):
		case -882629065:
		case -1620126302:
		case -1829436850:
		case -324618589:
		case 1044193113:
		case 1862507111:
		case -682108547:
		case 1323778901:
		case -1804415708:
		case 916547552:
		case -208911803:
		case -447711397:
		case 1416466158:
		case joaat("SLAMVAN2"):
		case 1118611807:
		case 409049982:
		case 340154634:
		case -1132721664:
		case -834353991:
		case 1717532765:
		case 83136452:
		case 987469656:
		case 1802742206:
		case 1284356689:
		case 1456336509:
		case -1756021720:
		case 872704284:
		case 394110044:
		case joaat("OUTLAW"):
		case 301304410:
		case 740289177:
		case -1960756985:
		case -1254331310:
		case -2122646867:
		case 2134119907:
		case joaat("CLUB"):
		case 1107404867:
		case -913589546:
		case -631322662:
		case -838099166:
		case -1810806490:
		case -1358197432:
		case 1492612435:
		case -1728685474:
		case 1181339704:
			return true;
	}
	return false;
}

bool func_206(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("SCARAB"):
		case joaat("BRUISER"):
		case joaat("CERBERUS"):
		case joaat("MONSTER3"):
		case joaat("DOMINATOR4"):
		case joaat("IMPALER2"):
		case joaat("IMPERATOR"):
		case joaat("ISSI4"):
		case joaat("DEATHBIKE"):
		case joaat("ZR380"):
		case joaat("SLAMVAN4"):
		case joaat("BRUTUS"):
		case joaat("IMPERATOR2"):
		case joaat("IMPERATOR3"):
		case joaat("DEATHBIKE3"):
		case joaat("DEATHBIKE2"):
		case joaat("IMPALER3"):
		case joaat("BRUTUS2"):
		case joaat("BRUISER2"):
		case joaat("SLAMVAN5"):
		case joaat("ISSI5"):
		case joaat("MONSTER4"):
		case joaat("SCARAB2"):
		case joaat("CERBERUS2"):
		case joaat("DOMINATOR5"):
		case joaat("ZR3802"):
		case joaat("IMPALER4"):
		case joaat("BRUTUS3"):
		case joaat("BRUISER3"):
		case joaat("SLAMVAN6"):
		case joaat("ISSI6"):
		case joaat("MONSTER5"):
		case joaat("SCARAB3"):
		case joaat("CERBERUS3"):
		case joaat("DOMINATOR6"):
		case joaat("ZR3803"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_207(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("HUNTER"):
		case joaat("BOMBUSHKA"):
		case joaat("VOLATOL"):
		case joaat("AKULA"):
		case joaat("KHANJALI"):
		case joaat("STRIKEFORCE"):
			return true;
	}
	return false;
}

bool func_208(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("HAVOK"):
		case joaat("MICROLIGHT"):
		case joaat("MOGUL"):
		case joaat("ROGUE"):
		case joaat("SEABREEZE"):
		case joaat("TULA"):
		case joaat("PYRO"):
		case joaat("ALPHAZ1"):
		case joaat("HOWARD"):
		case joaat("STARLING"):
		case joaat("MOLOTOK"):
		case joaat("NOKOTA"):
		case joaat("CUBAN800"):
		case joaat("AVENGER"):
		case joaat("THRUSTER"):
		case joaat("RIOT2"):
		case joaat("CHERNOBOG"):
		case joaat("VOLATOL"):
		case joaat("SEASPARROW"):
			return true;
	}
	return false;
}

int func_209(bool bParam0)
{
	bool bVar0;

	bVar0 = func_136(bParam0);
	if (bVar0 < 0)
	{
		return 0;
	}
	return func_134(bVar0, 0);
}

bool func_210(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FACTION2"):
		case joaat("BUCCANEER2"):
		case joaat("CHINO2"):
		case joaat("MOONBEAM2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
			return true;
		case joaat("SABREGT2"):
			if (!Global_262145.f_14219)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("TORNADO5"):
			if (!Global_262145.f_14220)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("VIRGO2"):
			if (!Global_262145.f_14218)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("MINIVAN2"):
			if (!Global_262145.f_14221)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("SLAMVAN3"):
			if (!Global_262145.f_14223)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("FACTION3"):
			if (!Global_262145.f_14222)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("SULTANRS"):
		case joaat("BANSHEE2"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("COMET3"):
			if (Global_262145.f_18669)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("DIABLOUS2"):
			if (Global_262145.f_18671)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("FCR2"):
			if (Global_262145.f_18675)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("ELEGY"):
			if (Global_262145.f_18672)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("NERO2"):
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("ITALIGTB2"):
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("SPECTER2"):
			if (Global_262145.f_18682)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("TECHNICAL3"):
			if (Global_262145.f_20625)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("INSURGENT3"):
			if (Global_262145.f_20626)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("SLAMVAN4"):
		case joaat("SLAMVAN5"):
		case joaat("SLAMVAN6"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("ISSI4"):
		case joaat("ISSI5"):
		case joaat("ISSI6"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("IMPALER2"):
		case joaat("IMPALER3"):
		case joaat("IMPALER4"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("DEATHBIKE"):
		case joaat("DEATHBIKE2"):
		case joaat("DEATHBIKE3"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("DOMINATOR4"):
		case joaat("DOMINATOR5"):
		case joaat("DOMINATOR6"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("BRUISER"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case 1717532765:
		case 1107404867:
		case -913589546:
			return true;
	}
	return false;
}

bool func_211(int iParam0)
{
	switch (iParam0)
	{
		case -1:
		case 8:
		case 9:
			return false;
	}
	return true;
}

bool func_212(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	switch (bParam0)
	{
		case joaat("POLICE"):
		case joaat("POLICEOLD1"):
		case joaat("POLICEOLD2"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("FBI"):
		case joaat("FBI2"):
		case joaat("POLMAV"):
		case joaat("POLICEB"):
		case joaat("POLICET"):
		case joaat("RIOT"):
		case joaat("SHERIFF"):
		case joaat("PRANGER"):
		case joaat("AMBULANCE"):
		case joaat("FIRETRUK"):
		case joaat("TAXI"):
		case joaat("LGUARD"):
		case joaat("RIPLEY"):
		case joaat("DILETTANTE2"):
		case joaat("AIRBUS"):
		case joaat("AIRTUG"):
		case joaat("BURRITO"):
		case joaat("RUMPO2"):
		case joaat("SPEEDO"):
		case joaat("SPEEDO2"):
		case joaat("SCORCHER"):
		case joaat("BMX"):
		case joaat("CRUISER"):
		case joaat("FIXTER"):
		case joaat("CADDY"):
		case joaat("FORKLIFT"):
		case joaat("CADDY2"):
		case joaat("CRUSADER"):
		case joaat("TRIBIKE"):
		case joaat("TRIBIKE2"):
		case joaat("TRIBIKE3"):
		case joaat("TRACTOR"):
		case joaat("TRACTOR2"):
		case joaat("MOWER"):
		case joaat("TORNADO4"):
		case joaat("DOCKTUG"):
		case joaat("STRETCH"):
		case joaat("BISON2"):
		case joaat("BISON3"):
		case joaat("BENSON"):
		case joaat("POUNDER"):
		case joaat("SUBMERSIBLE"):
		case joaat("MONSTER"):
		case joaat("TECHNICAL"):
		case joaat("PHANTOM2"):
		case joaat("WASTELANDER"):
		case joaat("BOXVILLE5"):
		case joaat("TERBYTE"):
		case joaat("SPEEDO4"):
		case joaat("MULE4"):
		case joaat("POUNDER2"):
			return false;
		default:
			if (func_206(bParam0))
			{
				return false;
			}
			break;
	}
	if (UNK_0xAFB8495D36825275(bParam0) || UNK_0xC41A9202669A24C4(bParam0))
	{
		return false;
	}
	return true;
}

bool func_213()
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return false;
	}
	if (func_161())
	{
		if (func_216())
		{
			iVar0 = func_215();
			iVar1 = func_214();
			fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_121) && iVar0 >= 8)
			{
				return true;
			}
		}
	}
	return false;
}

int func_214()
{
	int iVar0;

	iVar0 = (iVar0 + Global_1387921);
	iVar0 = (iVar0 + Global_1387924);
	return iVar0;
}

int func_215()
{
	int iVar0;

	iVar0 = (iVar0 + Global_1387922);
	iVar0 = (iVar0 + Global_1387923);
	iVar0 = (iVar0 + Global_1387921);
	iVar0 = (iVar0 + Global_1387924);
	iVar0 = (iVar0 + Global_1387926);
	iVar0 = (iVar0 + Global_1387925);
	iVar0 = (iVar0 + func_120(joaat("MPPLY_EXPLOITS")));
	iVar0 = (iVar0 + func_120(joaat("MPPLY_VC_ANNOYINGME")));
	iVar0 = (iVar0 + func_120(joaat("MPPLY_VC_HATE")));
	iVar0 = (iVar0 + func_120(joaat("MPPLY_BAD_CREW_NAME")));
	iVar0 = (iVar0 + func_120(joaat("MPPLY_BAD_CREW_MOTTO")));
	iVar0 = (iVar0 + func_120(joaat("MPPLY_BAD_CREW_STATUS")));
	iVar0 = (iVar0 + func_120(joaat("MPPLY_BAD_CREW_EMBLEM")));
	iVar0 = (iVar0 + func_120(joaat("MPPLY_PLAYERMADE_TITLE")));
	iVar0 = (iVar0 + func_120(joaat("MPPLY_PLAYERMADE_DESC")));
	return iVar0;
}

bool func_216()
{
	struct<7> Var0;
	struct<7> Var7;

	UNK_0xA9A9632F6E019049(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var7 = { func_240(joaat("MPPLY_STARTED_MP")) };
	if (func_217(Var7, Var0, 7))
	{
		return true;
	}
	return false;
}

bool func_217(struct<7> Param0, struct<7> Param7, int iParam14)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_238(Param7);
	bVar1 = func_228(Param0, iParam14);
	if (bVar1 == -15)
	{
		return false;
	}
	if (func_218(bVar0, bVar1) == 1)
	{
		return true;
	}
	return false;
}

int func_218(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_226(bParam1) || !func_226(bParam0))
	{
		return 1;
	}
	iVar0 = func_224(bParam0);
	iVar1 = func_224(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_223(bParam0);
	iVar1 = func_223(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_222(bParam0);
	iVar1 = func_222(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_221(bParam0);
	iVar1 = func_221(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_220(bParam0);
	iVar1 = func_220(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_219(bParam0);
	iVar1 = func_219(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_219(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_220(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_221(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_222(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

bool func_223(bool bParam0)
{
	return (bParam0 && 15);
}

int func_224(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_225(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_225(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_226(bool bParam0)
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
	iVar0 = func_219(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_220(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_221(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_224(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_223(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_222(bParam0);
	if (iVar5 < 1 || iVar5 > func_227(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_227(bool bParam0, int iParam1)
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

bool func_228(struct<7> Param0, int iParam7)
{
	bool bVar0;
	bool bVar1;
	var uVar2;

	if (func_237(Param0) == 0)
	{
		bVar0 = func_238(Param0);
		bVar1 = bVar0;
		func_229(&bVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0)
		{
			bVar1 = bVar0;
		}
		return bVar1;
	}
	return uVar2;
}

void func_229(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_224(*bParam0);
	bVar1 = func_223(*bParam0);
	iVar2 = func_222(*bParam0);
	iVar3 = func_221(*bParam0);
	iVar4 = func_220(*bParam0);
	iVar5 = func_219(*bParam0);
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
	iVar6 = func_227(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_227(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_230(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_230(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_236(bParam0, iParam1);
	func_235(bParam0, iParam2);
	func_234(bParam0, iParam3);
	func_233(bParam0, bParam5);
	func_232(bParam0, iParam4);
	func_231(bParam0, iParam6);
}

void func_231(bool bParam0, int iParam1)
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

void func_232(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_223(*bParam0);
	iVar1 = func_224(*bParam0);
	if (iParam1 < 1 || iParam1 > func_227(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_233(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_234(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_235(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_236(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_237(struct<7> Param0)
{
	if ((((((Param0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_238(struct<6> Param0, var uParam6)
{
	var uVar0;

	if (Param0 > 0)
	{
		func_231(&uVar0, Param0);
	}
	if (Param0.f_1 > 0)
	{
		func_233(&uVar0, func_239(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_232(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_234(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_235(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_236(&uVar0, Param0.f_5);
	}
	return uVar0;
}

bool func_239(int iParam0)
{
	if (iParam0 < 1)
	{
		return false;
	}
	if (iParam0 > 12)
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			return false;
		case 2:
			return true;
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
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
	}
	return false;
}

struct<7> func_240(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	struct<7> Var8;

	iVar0 = iParam0;
	if (UNK_0x52555DE2F29B7339(iVar0, &Var8, 7, -1))
	{
		return Var8;
	}
	return Var1;
}

int func_241()
{
	var uVar0;
	bool bVar1;

	bVar1 = false;
	while (bVar1 < 32)
	{
		if (UNK_0x09AC81E49EA267F7(false, 2) == 0)
		{
			UNK_0x5D96D8530B3D0904(&uVar0, bVar1);
		}
		bVar1++;
	}
	return uVar0;
}

bool func_242(var uParam0)
{
	bool bVar0;

	if (!func_212(*uParam0))
	{
		return true;
	}
	if (bLocal_152)
	{
		if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), iLocal_151)) < 1500)
		{
			return false;
		}
	}
	bLocal_152 = false;
	UNK_0x523BCC9DC80CD82F(*uParam0);
	if (!UNK_0xB87F6CF6E5628C67(*uParam0))
	{
		return false;
	}
	if (UNK_0x8CD06866876216F2())
	{
		bVar0 = UNK_0x122AAB0B1D6F55AD(*uParam0, (660.3092f + IntToFloat(UNK_0xD803B885F5E47A62() * 10)), 4977.608f, 1222.024f, 0f, false, false, false);
	}
	else
	{
		bVar0 = UNK_0x122AAB0B1D6F55AD(*uParam0, 660.3092f, 4977.608f, 1222.024f, 0f, false, false, false);
	}
	if (UNK_0x40B3F576B41FA183(bVar0) > 0)
	{
		UNK_0xF95FF0A179413A39(bVar0, 0);
	}
	UNK_0x920DACD685EA4957(bVar0, Global_1323615[iLocal_76 /*141*/].f_69);
	uParam0->f_33[0] = UNK_0x80A2B6C1AD8E56D5(bVar0);
	uParam0->f_33[1] = UNK_0xEE936CC771514B50(bVar0, 14, 0);
	uParam0->f_33[2] = UNK_0xEE936CC771514B50(bVar0, 14, 1);
	uParam0->f_33[3] = UNK_0xEE936CC771514B50(bVar0, 14, 2);
	uParam0->f_33[4] = UNK_0xEE936CC771514B50(bVar0, 14, 3);
	uParam0->f_24 = UNK_0x461CAC843A21E4B6(bVar0, 11) + 1;
	uParam0->f_25 = UNK_0x461CAC843A21E4B6(bVar0, 12) + 1;
	uParam0->f_26 = UNK_0x461CAC843A21E4B6(bVar0, 4) + 1;
	uParam0->f_28 = UNK_0x461CAC843A21E4B6(bVar0, 14) + 1;
	uParam0->f_29 = UNK_0x461CAC843A21E4B6(bVar0, 16) + 1;
	uParam0->f_30 = UNK_0x461CAC843A21E4B6(bVar0, 15) + 1;
	uParam0->f_31 = func_243(bVar0);
	uParam0->f_32 = UNK_0xBB3F1A6E0A9B6511(bVar0);
	uParam0->f_39 = UNK_0xFF4012C9B4D4F728(bVar0);
	uParam0->f_27 = UNK_0x461CAC843A21E4B6(bVar0, 23) + 1;
	if (!UNK_0x8CD06866876216F2())
	{
		if (*uParam0 == joaat("PATRIOT"))
		{
			uParam0->f_26 = 0;
		}
		if (*uParam0 == joaat("PRAIRIE"))
		{
			if (uParam0->f_26 > 1)
			{
				uParam0->f_26 = 1;
			}
		}
	}
	UNK_0xA954465BA6FDEFE2(&bVar0);
	UNK_0x71199B01895C6202(*uParam0);
	bLocal_152 = true;
	iLocal_151 = UNK_0x2B6E0A53779D29EA();
	SYSTEM::SETTIMERA(0);
	return true;
}

float func_243(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;

	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0)) && UNK_0x67303E186EA6C9A0(bParam0) >= 0)
	{
		if (UNK_0xFF4012C9B4D4F728(bParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (UNK_0xFF4012C9B4D4F728(bParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (UNK_0xFF4012C9B4D4F728(bParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (UNK_0xFF4012C9B4D4F728(bParam0) == 0)
		{
			if (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(bParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
	return fVar6;
}

void func_244(int iParam0, int iParam1)
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

char* func_245(bool bParam0)
{
	return UNK_0x3CBB4585F3D27D58(func_28(bParam0));
}

bool func_246(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

int func_247(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar1]) && UNK_0xDF1306B443CD3D15(Global_96075[iVar1], 0))
		{
			if (Global_96085[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == UNK_0x134B62B726CEC8E6(Global_96075[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_248(int iParam0)
{
	return iParam0 == 1;
}

int func_249(int iParam0, int iParam1)
{
	struct<82> Var0;

	if (func_250(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_437(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_250(int iParam0)
{
	return iParam0 < 3;
}

bool func_251()
{
	return Global_98796.f_346 > 0;
}

bool func_252(int iParam0)
{
	return func_253(iParam0, 0, 0);
}

bool func_253(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (bParam2)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_98796.f_1357[iParam0], bParam1);
	}
	else if (UNK_0x8CD06866876216F2())
	{
		if (func_83() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_51(func_254(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

int func_254(int iParam0)
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

int func_255()
{
	if (func_246(0))
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

bool func_256(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;

	switch (iParam14)
	{
		case 0:
			bParam15 = "NULL";
			bParam16 = "NULL";
			break;
		case 1:
			bParam16 = "NULL";
			break;
		case 2:
			break;
		default:
			break;
	}
	UNK_0x0674E58A79778E99(&Global_7356, 10);
	iVar0 = 3;
	if (func_258(bParam0, bParam1, iParam2, iParam6, bParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, bParam15, bParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			Global_7966[3 /*6*/] = { func_257(bParam0) };
			Global_8043 = bParam0;
			StringCopy(&Global_8044, sParam5, 64);
			UNK_0x5D96D8530B3D0904(&Global_7356, true);
			UNK_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return true;
	}
	return false;
}

struct<4> func_257(bool bParam0)
{
	return Global_1798[bParam0 /*29*/].f_3;
}

int func_258(bool bParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (UNK_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_272();
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
	if (func_271() == 0)
	{
		func_269();
		return 0;
	}
	func_268(Global_21872);
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
		func_267(0);
		func_267(2);
		func_267(1);
	}
	else
	{
		func_272();
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
					func_267(0);
					Global_8062 = 0;
					break;
				case 1:
					func_267(1);
					Global_8062 = 1;
					break;
				case 2:
					func_267(2);
					Global_8062 = 2;
					break;
				case 3:
					func_267(3);
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
		func_272();
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
			if (!func_4())
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_266(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_263(1);
			func_266(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_259(bParam0, bParam1);
	return 1;
}

void func_259(bool bParam0, bool bParam1)
{
	if (!func_260())
	{
		return;
	}
	UNK_0x6DFDEDC7A51E8DAE(bParam0, 1654525105, UNK_0x12AB0310C2281427(bParam1), 0);
}

bool func_260()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_97())
	{
		return false;
	}
	if (func_261(UNK_0xD803B885F5E47A62()))
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

bool func_261(int iParam0)
{
	return func_262(iParam0, 20);
}

bool func_262(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

void func_263(int iParam0)
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
		if (func_439(14))
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
								func_265(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(bVar2);
								UNK_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_264(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_264(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_264(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_264(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_264(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								UNK_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								UNK_0x3CAEA85DA607305E(true);
								UNK_0x3CAEA85DA607305E(bVar0);
								UNK_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								UNK_0x3CAEA85DA607305E(false);
								func_265(&(Global_7363[iVar1 /*15*/]));
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
								func_265(&(Global_7363[iVar1 /*15*/]));
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
								func_265(&(Global_7363[iVar1 /*15*/]));
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
								func_265(&(Global_7363[iVar1 /*15*/]));
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
								func_265(&(Global_7363[iVar1 /*15*/]));
								UNK_0x3CAEA85DA607305E(42);
								UNK_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_264(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_264(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(bVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_264(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
		func_265(bParam7);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		func_265(bParam8);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam9))
	{
		func_265(bParam9);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam10))
	{
		func_265(bParam10);
	}
	if (!UNK_0xEA6BC48857E0AC4C(bParam11))
	{
		func_265(bParam11);
	}
	UNK_0x7E60D21B163E9D56();
}

void func_265(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_266(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_267(int iParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = Global_111638.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_268(int iParam0)
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

void func_269()
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
		if (!func_270(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_24 = 1;
}

bool func_270(struct<6> Param0, struct<6> Param6)
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

int func_271()
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
			if (!func_270(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
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

void func_272()
{
	if (func_439(14))
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
		Global_19486 = func_278();
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

bool func_273(bool bParam0)
{
	if (bParam0 == 0)
	{
		return true;
	}
	if (func_275(1))
	{
		if (Global_76622)
		{
			if (UNK_0x7A7BDE279347E517(bParam0, false, true, 0, -1, 0))
			{
				return true;
			}
		}
		else if (func_274(func_278()) >= bParam0)
		{
			return true;
		}
	}
	return false;
}

int func_274(int iParam0)
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

bool func_275(bool bParam0)
{
	if (Global_76622)
	{
		return func_160(UNK_0xD803B885F5E47A62(), bParam0, !func_276(1));
	}
	return !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9());
}

bool func_276(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2450632.f_684.f_28 && UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) == Global_2450632.f_684.f_31);
	}
	return Global_2450632.f_684.f_28;
}

bool func_277(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_258(bParam0, bParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_257(bParam0) };
			Global_8043 = bParam0;
			UNK_0x5D96D8530B3D0904(&Global_7356, true);
			UNK_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return true;
	}
	return false;
}

int func_278()
{
	func_279();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_279()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_281(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_280(UNK_0x16F2683693E537C9());
			if (func_250(iVar0) && (!func_439(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_250(Global_111638.f_2358.f_539.f_4321))
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

int func_280(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_281(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_281(int iParam0)
{
	if (func_250(iParam0))
	{
		return func_282(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_282(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_283(var uParam0, int iParam1)
{
	uParam0->f_36 = 0;
	uParam0->f_35 = 0;
	if (UNK_0x8CD06866876216F2())
	{
		Global_2097152[func_191() /*10930*/].f_6086.f_54 = 1;
		Global_2097152[func_191() /*10930*/].f_6086.f_55 = 1;
		Global_2097152[func_191() /*10930*/].f_6086.f_60 = uParam0->f_32;
		Global_2097152[func_191() /*10930*/].f_6086.f_56 = { uParam0->f_28 };
		Global_2097152[func_191() /*10930*/].f_6086.f_61++;
	}
	else
	{
		Global_111638.f_20113.f_265 = 1;
		Global_111638.f_20113.f_266 = iParam1;
		Global_111638.f_20113.f_261 = 1;
		Global_111638.f_20113.f_271 = uParam0->f_32;
		Global_111638.f_20113.f_267 = { uParam0->f_28 };
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			Global_111638.f_20113.f_281[iParam1] = 1;
			Global_111638.f_20113.f_285[iParam1]++;
			UNK_0x9505C13496579D28(joaat("SP_CAR_APP_ORDER_COUNT"), 1f);
		}
	}
}

char* func_284(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
		case 0:
			return "S_H_01";
		case 1:
			return "S_H_02";
		case 2:
			return "S_H_03";
		case 3:
			return "S_H_04";
		case 4:
			return "S_H_05";
		case 5:
			return "S_H_06";
		case 6:
			return "S_H_07";
		case 7:
			return "S_CL_01";
		case 8:
			return "S_CL_02";
		case 9:
			return "S_CL_03";
		case 10:
			return "S_CL_04";
		case 11:
			return "S_CL_05";
		case 12:
			return "S_CL_06";
		case 13:
			return "S_CL_07";
		case 14:
			return "S_CM_01";
		case 15:
			return "S_CM_03";
		case 16:
			return "S_CM_04";
		case 17:
			return "S_CM_05";
		case 18:
			return "S_CH_01";
		case 19:
			return "S_CH_02";
		case 20:
			return "S_CH_03";
		case 21:
			return "S_CA_01";
		case 22:
			return "S_T_01";
		case 23:
			return "S_T_02";
		case 24:
			return "S_T_03";
		case 25:
			return "S_T_04";
		case 26:
			return "S_T_05";
		case 27:
			return "S_T_06";
		case 28:
			return "S_G_01";
		case 29:
			return "S_G_02";
		case 30:
			return "S_G_03";
		case 31:
			return "S_G_04";
		case 32:
			return "S_G_05";
		case 33:
			return "S_G_06";
		case 34:
			return "S_G_07";
		case 35:
			return "S_G_08";
		case 36:
			return "S_G_09";
		case 37:
			return "S_G_10";
		case 38:
			return "S_G_11";
		case 39:
			return "S_MO_01";
		case 40:
			return "S_MO_05";
		case 41:
			return "S_MO_06";
		case 42:
			return "S_MO_07";
		case 43:
			return "S_MO_08";
		case 44:
			return "S_MO_09";
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "S_MO_10";
				case 11:
					return "S_MO_B";
				case 10:
					return "S_MO_T";
				case 12:
					return "S_MO_HA";
				case 13:
					return "S_MO_AOC";
				case 14:
					return "S_MO_AOC";
				case 15:
					return "S_MO_AOC";
				case 16:
					return "S_MO_AOC";
				case 17:
					return "S_MO_AOC";
			}
			return "S_MO_11";
		case 46:
			return "S_G_12";
		case 47:
			return "S_G_13";
		case 48:
			return "S_G_14";
		case 49:
			return "S_G_15";
		case 52:
			return "S_G_16";
		case 50:
			return "S_H_08";
		case 51:
			return "S_CL_09";
	}
	return "SHOP_NAME_EMPTY";
}

int func_285(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	var uVar0;
	int iVar165;

	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_286(&uVar0, bParam0, func_361(), bParam1, iVar165, 3, bParam8, bParam2, bParam3, iParam4, bParam5, bParam6, -1);
}

int func_286(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (UNK_0xEA6BC48857E0AC4C(bParam2))
	{
		return 0;
	}
	if (UNK_0x7724E025FD444F45(bParam2) > 7)
	{
		return 0;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam3))
	{
		return 0;
	}
	if (UNK_0x7724E025FD444F45(bParam3) > 15)
	{
		return 0;
	}
	iVar0 = UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C());
	iVar1 = func_360(bParam2, bParam3);
	iVar2 = 0;
	if (!UNK_0xEA6BC48857E0AC4C(bParam7))
	{
		iVar2 = UNK_0x12AB0310C2281427(bParam7);
	}
	if (func_359(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_353(bParam6))
	{
		return 0;
	}
	if (func_350(iVar0, iVar1, iVar2))
	{
		if (func_349())
		{
			return 0;
		}
		func_348();
		return func_293(uParam0, bParam1, iParam12, bParam2, bParam3, iParam4, iParam5, bParam6, bParam7, bParam8, iParam9, bParam10, bParam11);
	}
	if (!func_292(iParam4))
	{
		return 0;
	}
	func_287(iVar0, iVar1, iVar2, bParam3, iParam4, iParam5, bParam6);
	return 0;
}

void func_287(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6)
{
	Global_1370527.f_40.f_1 = iParam0;
	Global_1370527.f_40.f_2 = iParam1;
	Global_1370527.f_40.f_3 = iParam2;
	StringCopy(&(Global_1370527.f_40.f_4), sParam3, 16);
	Global_1370527.f_40.f_8 = iParam4;
	Global_1370527.f_40.f_9 = iParam5;
	Global_1370527.f_40.f_14 = bParam6;
	func_288(iParam4);
	func_348();
	Global_1370527.f_40.f_13 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), 7000);
}

void func_288(int iParam0)
{
	if (func_291(iParam0))
	{
		func_290();
		return;
	}
	func_289();
}

void func_289()
{
	Global_1370527.f_40.f_10 = 0;
}

void func_290()
{
	Global_1370527.f_40.f_10 = 1;
}

bool func_291(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return true;
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return false;
		default:
			break;
	}
	return false;
}

bool func_292(int iParam0)
{
	return iParam0 > Global_1370527.f_40.f_8;
}

int func_293(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12)
{
	char cVar0[16];

	func_347();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_344(uParam0, bParam3, bParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&cVar0, "CELL_226", 16);
		return func_341(uParam0, bParam1, bParam3, bParam4, &cVar0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_344(uParam0, bParam3, bParam4);
		}
		return func_323(uParam0, bParam1, bParam3, bParam4, bParam7);
	}
	if (iParam5 == 5)
	{
		return func_322(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	if (iParam5 == 2)
	{
		return func_319(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	if (iParam5 == 3)
	{
		return func_318(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	if (iParam5 == 6)
	{
		return func_294(bParam1, iParam2, bParam4, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12);
	}
	return 0;
}

int func_294(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	func_317();
	bVar0 = true;
	if (func_296(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8))
	{
		func_295(120000);
		return 1;
	}
	return 0;
}

void func_295(bool bParam0)
{
	Global_1370527.f_40.f_11 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), bParam0);
	Global_1370527.f_40.f_12 = 1;
}

bool func_296(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;

	bVar0 = func_97();
	iVar1 = 0;
	if (bParam0 == 145)
	{
		bVar0 = iParam1;
		bVar2 = UNK_0x6E524813889AECF8(bVar0);
		iVar1 = func_311(bVar0);
		if (iVar1 == 0)
		{
			if (UNK_0x4925CBEE5D8BE14B(UNK_0x2B6E0A53779D29EA(), Global_1370527.f_40.f_13))
			{
				return false;
			}
		}
	}
	else
	{
		bVar2 = "";
	}
	iVar3 = 0;
	bVar4 = func_310(bParam5, bParam6, &iVar3);
	iVar5 = func_308(iParam7, &iVar3);
	iVar6 = 0;
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		iVar6++;
		if (!UNK_0xEA6BC48857E0AC4C(bParam9))
		{
			iVar6++;
		}
	}
	if (UNK_0x7F8A39872A07D2CE(bVar4, " "))
	{
		bVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, true))
		{
			iVar8 = 1;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !UNK_0xEA6BC48857E0AC4C(bVar2))
	{
		bVar12 = func_307(bParam0, bParam2, iVar10, bVar4, iVar5, bVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, bParam8, bParam9);
	}
	else
	{
		bVar12 = func_300(bParam0, bParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, false))
	{
		func_299();
	}
	func_317();
	func_298();
	func_297();
	return true;
}

void func_297()
{
	Global_1370527.f_57 = 0;
	Global_1370527.f_57.f_1 = 0;
}

void func_298()
{
	Global_1370527.f_40 = 3;
}

void func_299()
{
	UNK_0x5D96D8530B3D0904(&Global_7356, 8);
}

int func_300(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;

	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_301(bParam0, bParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			UNK_0x5D96D8530B3D0904(&Global_4269765, false);
		}
		return 1;
	}
	return 0;
}

int func_301(bool bParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;

	if (iParam13 > 99)
	{
	}
	if (UNK_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_272();
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
		if (Global_4269750 == 1)
		{
			return 0;
		}
		if (UNK_0x8A22C4C08282BF26(joaat("APPEMAIL")) > 0)
		{
			return 0;
		}
		if (UNK_0x8A22C4C08282BF26(joaat("APPMPEMAIL")) > 0)
		{
			return 0;
		}
	}
	if (func_306() == 0)
	{
		func_304();
		return 0;
	}
	func_303(Global_4269749);
	StringCopy(&(Global_4268500[Global_4269749 /*104*/]), bParam1, 64);
	Global_4268500[Global_4269749 /*104*/].f_17 = bParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4268500[Global_4269749 /*104*/].f_24 = iParam2;
	}
	Global_4268500[Global_4269749 /*104*/].f_25 = iParam7;
	Global_4268500[Global_4269749 /*104*/].f_26 = iParam8;
	Global_4268500[Global_4269749 /*104*/].f_29 = iParam9;
	Global_4268500[Global_4269749 /*104*/].f_30 = iParam12;
	Global_4268500[Global_4269749 /*104*/].f_31 = iParam11;
	Global_4268500[Global_4269749 /*104*/].f_28 = 0;
	Global_4268500[Global_4269749 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_33), sParam4, 64);
	Global_4268500[Global_4269749 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_50), sParam5, 64);
	Global_4268500[Global_4269749 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_83), sParam15, 64);
	func_272();
	switch (iParam16)
	{
		case 3:
			Global_4268500[Global_4269749 /*104*/].f_99[Global_19486] = 1;
			break;
		case 0:
			Global_4268500[Global_4269749 /*104*/].f_99[0] = 1;
			break;
		case 2:
			Global_4268500[Global_4269749 /*104*/].f_99[2] = 1;
			break;
		case 1:
			Global_4268500[Global_4269749 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19486)
		{
			case 0:
				func_267(0);
				break;
			case 1:
				func_267(1);
				break;
			case 2:
				func_267(2);
				break;
			case 3:
				func_267(3);
				break;
			default:
				break;
		}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4269750 = 1;
				break;
			case 0:
				Global_4269750 = 1;
				break;
			case 2:
				Global_4269750 = 1;
				break;
			case 1:
				Global_4269750 = 1;
				break;
		}
	}
	Global_21874[Global_4269749] = 0;
	if (bParam10)
	{
		func_272();
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
			if (!func_4())
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_266(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			func_263(1);
			func_266(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	func_302(bParam0, bParam1);
	return 1;
}

void func_302(bool bParam0, bool bParam1)
{
	if (!func_260())
	{
		return;
	}
	UNK_0x6DFDEDC7A51E8DAE(bParam0, -1180597171, UNK_0x12AB0310C2281427(bParam1), 0);
}

void func_303(int iParam0)
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
	Global_4268500[iParam0 /*104*/].f_18 = iVar0;
	Global_4268500[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4268500[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4268500[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4268500[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4268500[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_304()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4269749 = 11;
	Global_4268500[Global_4269749 /*104*/].f_18 = -1;
	Global_4268500[Global_4269749 /*104*/].f_18.f_1 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_2 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_3 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_305(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
		{
			Global_4269749 = iVar2;
		}
		iVar2++;
	}
	Global_4268500[Global_4269749 /*104*/].f_24 = 1;
}

bool func_305(struct<6> Param0, struct<6> Param6)
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

int func_306()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4268500[iVar2 /*104*/].f_24 == 0)
		{
			Global_4269749 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4269749 = 11;
	Global_4268500[Global_4269749 /*104*/].f_18 = -1;
	Global_4268500[Global_4269749 /*104*/].f_18.f_1 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_2 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_3 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4268500[iVar2 /*104*/].f_24 == 0 || Global_4268500[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_305(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
			{
				Global_4269749 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4269749 == 11)
	{
		return 0;
	}
	Global_4268500[Global_4269749 /*104*/].f_99[0] = 0;
	Global_4268500[Global_4269749 /*104*/].f_99[1] = 0;
	Global_4268500[Global_4269749 /*104*/].f_99[2] = 0;
	return 1;
}

int func_307(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;

	switch (iParam14)
	{
		case 0:
			bParam15 = "NULL";
			bParam16 = "NULL";
			break;
		case 1:
			bParam16 = "NULL";
			break;
		case 2:
			break;
		default:
			break;
	}
	iVar0 = 3;
	if (func_301(bParam0, bParam1, iParam2, iParam6, bParam3, bParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, bParam15, bParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			UNK_0x5D96D8530B3D0904(&Global_4269765, false);
		}
		return 1;
	}
	return 0;
}

int func_308(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_309(2, iParam1);
	return iParam0;
}

void func_309(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		case 2:
			bVar1 = true;
			break;
		default:
			return;
	}
	if (bVar0)
	{
		switch (*iParam1)
		{
			case 1:
			case 3:
				break;
			case 0:
				*iParam1 = 1;
				break;
			case 2:
				*iParam1 = 3;
				break;
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*iParam1)
		{
			case 2:
			case 3:
				break;
			case 0:
				*iParam1 = 2;
				break;
			case 1:
				*iParam1 = 3;
				break;
			default:
				return;
		}
		return;
	}
}

bool func_310(bool bParam0, bool bParam1, int iParam2)
{
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return bLocal_21;
	}
	if (UNK_0x7F8A39872A07D2CE(bParam0, bLocal_21))
	{
		return bLocal_21;
	}
	func_309(1, iParam2);
	if (bParam1)
	{
		return bParam0;
	}
	return UNK_0x19C9F30A7697B43C(bParam0);
}

int func_311(bool bParam0)
{
	int iVar0;

	iVar0 = func_314(bParam0);
	if (iVar0 == -1)
	{
		func_312(bParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_312(bool bParam0, bool bParam1)
{
	if (!func_160(bParam0, 0, 1))
	{
		return;
	}
	if (func_314(bParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (bParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_313(bParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = bParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

bool func_313(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == bParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_314(bool bParam0)
{
	int iVar0;

	if (!func_160(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0 /*5*/].f_1 == bParam0)
		{
			if (UNK_0x0E66AEE1894BB411(Global_1389078[iVar0 /*5*/].f_2) && UNK_0x0A53A8B5FA0B3F4D(Global_1389078[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_315(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_315(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;

	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (UNK_0x0E66AEE1894BB411(Global_1389078[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, UNK_0x5283D58F79627134(Global_1389078[iParam0 /*5*/].f_2), 64);
			UNK_0x0DA3CF6693AF3C9C(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		UNK_0xC48867F0C23C5A64(Global_1389078[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32 /*5*/] = { Global_1389078[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_316(&(Global_1389078[iVar32 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_316(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_97();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (UNK_0x8CD06866876216F2())
	{
		uParam0->f_3 = UNK_0x2B6E0A53779D29EA();
	}
}

void func_317()
{
	Global_1370527.f_40.f_9 = 4;
}

bool func_318(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	func_317();
	bVar0 = false;
	return func_296(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8);
}

bool func_319(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	bVar0 = false;
	return func_320(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8);
}

bool func_320(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;

	bVar0 = func_97();
	iVar1 = 0;
	if (bParam0 == 145)
	{
		bVar0 = iParam1;
		bVar2 = UNK_0x6E524813889AECF8(bVar0);
		iVar1 = func_311(bVar0);
		if (iVar1 == 0)
		{
			if (UNK_0x4925CBEE5D8BE14B(UNK_0x2B6E0A53779D29EA(), Global_1370527.f_40.f_13))
			{
				return false;
			}
		}
		Global_21866 = iVar1;
	}
	else
	{
		bVar2 = "";
	}
	iVar3 = 0;
	bVar4 = func_310(bParam5, bParam6, &iVar3);
	iVar5 = func_308(iParam7, &iVar3);
	iVar6 = 0;
	if (!UNK_0xEA6BC48857E0AC4C(bParam8))
	{
		iVar6++;
		if (!UNK_0xEA6BC48857E0AC4C(bParam9))
		{
			iVar6++;
		}
	}
	if (UNK_0x7F8A39872A07D2CE(bVar4, " "))
	{
		bVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, true))
		{
			iVar8 = 1;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !UNK_0xEA6BC48857E0AC4C(bVar2))
	{
		bVar12 = func_256(bParam0, bParam2, iVar10, bVar4, iVar5, bVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, bParam8, bParam9);
	}
	else
	{
		bVar12 = func_277(bParam0, bParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, false))
	{
		func_299();
	}
	func_321();
	func_298();
	func_297();
	return true;
}

void func_321()
{
	Global_1370527.f_40.f_9 = 3;
}

int func_322(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
	}
	if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
	{
		return 0;
	}
	func_321();
	bVar0 = true;
	if (func_320(bParam0, iParam1, bParam2, bVar0, bParam3, bParam4, bParam5, iParam6, bParam7, bParam8))
	{
		func_295(120000);
		return 1;
	}
	return 0;
}

int func_323(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, 7))
	{
		iVar1 = 9;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam4, 4))
	{
		bVar0 = func_340(uParam0, bParam1, bParam2, bParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_329(uParam0, bParam1, bParam2, bParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, 3))
		{
			func_328(1);
		}
		if (UNK_0xEAE0D21A50E6C7F4(bParam4, 5))
		{
			func_327(1);
		}
		func_326();
		func_298();
		func_325();
		func_324();
		return 1;
	}
	return 0;
}

void func_324()
{
	Global_2546572 = 0;
}

void func_325()
{
	Global_1370527.f_57 = 1;
	Global_1370527.f_57.f_1 = 0;
}

void func_326()
{
	Global_1370527.f_40.f_9 = 1;
}

void func_327(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7358, false);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7358, false);
	}
}

void func_328(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7356, 20);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7356, 20);
	}
}

int func_329(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_339(uParam0, bParam1, bParam2, iParam5, iParam6, 0);
	Global_20853 = 0;
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
	return func_330(bParam3, iParam4, bParam7);
}

int func_330(char* sParam0, int iParam1, bool bParam2)
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
					func_338();
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
		if (func_337(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_336();
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
				func_272();
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
				if (func_335())
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
			if (func_334())
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
			func_333();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_332();
		func_331();
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
		func_338();
	}
	return 0;
}

void func_331()
{
	if (!func_260())
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

void func_332()
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

void func_333()
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

bool func_334()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_335()
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

void func_336()
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

bool func_337(bool bParam0, int iParam1)
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

void func_338()
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

void func_339(var uParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = bParam1;
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

int func_340(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_339(uParam0, bParam1, bParam2, iParam5, iParam6, 0);
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
	return func_330(bParam3, iParam4, bParam7);
}

int func_341(var uParam0, bool bParam1, bool bParam2, bool bParam3, char* sParam4)
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
	}
	if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (func_343(uParam0, bParam1, bParam2, bParam3, 9, sParam4, 0, 0, 1))
	{
		func_342();
		func_326();
		func_298();
		func_325();
		func_324();
		return 1;
	}
	return 0;
}

void func_342()
{
	Global_21823 = 0;
}

int func_343(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_339(uParam0, bParam1, bParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 1;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 1;
	Global_20859 = 0;
	StringCopy(&Global_20953, sParam5, 24);
	Global_2621441 = 0;
	return func_330(bParam3, iParam4, bParam8);
}

int func_344(var uParam0, bool bParam1, bool bParam2)
{
	if (func_346(uParam0, bParam1, bParam2, 12, 0, 0, 0))
	{
		func_345();
		func_298();
		func_325();
		return 1;
	}
	return 0;
}

void func_345()
{
	Global_1370527.f_40.f_9 = 2;
}

int func_346(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_339(uParam0, 145, bParam1, iParam4, iParam5, iParam6);
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
	return func_330(bParam2, iParam3, 0);
}

void func_347()
{
	Global_1370527.f_55 = Global_1370527.f_40.f_1;
	Global_1370527.f_55.f_1 = Global_1370527.f_40.f_10;
}

void func_348()
{
	Global_1370527.f_40 = 1;
}

bool func_349()
{
	return Global_1370527.f_40 == 1;
}

bool func_350(int iParam0, int iParam1, int iParam2)
{
	if (!func_351(iParam0))
	{
		return false;
	}
	if (Global_1370527.f_40.f_2 != iParam1)
	{
		return false;
	}
	if (iParam2 != 0)
	{
		if (Global_1370527.f_40.f_3 != iParam2)
		{
			return false;
		}
	}
	return true;
}

bool func_351(int iParam0)
{
	if (!func_352())
	{
		return false;
	}
	if (!Global_1370527.f_40.f_1 == iParam0)
	{
		return false;
	}
	return true;
}

bool func_352()
{
	if (Global_1370527.f_40 == 0)
	{
		return false;
	}
	return true;
}

bool func_353(bool bParam0)
{
	if (func_358())
	{
		return false;
	}
	if (func_357())
	{
		return false;
	}
	if (func_356(0))
	{
		return false;
	}
	if (Global_1312467.f_18 != 0)
	{
		return false;
	}
	if (Global_1662006 || func_355())
	{
		return false;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bParam0, 6))
	{
		if (func_354())
		{
			return false;
		}
	}
	return true;
}

bool func_354()
{
	return UNK_0x4925CBEE5D8BE14B(UNK_0x2B6E0A53779D29EA(), Global_1387714);
}

int func_355()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_356(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 14))
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
	if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return true;
	}
	if (Global_19486.f_1 > 3)
	{
		return true;
	}
	return false;
}

bool func_357()
{
	return Global_1370527.f_40 == 3;
}

bool func_358()
{
	return func_334();
}

bool func_359(int iParam0, int iParam1, int iParam2)
{
	if (!func_357())
	{
		return false;
	}
	return func_350(iParam0, iParam1, iParam2);
}

int func_360(char* sParam0, char* sParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return UNK_0x12AB0310C2281427(&cVar0);
}

bool func_361()
{
	return "TXTMSG";
}

int func_362(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2097152[func_191() /*10930*/].f_6174.f_1274 = UNK_0xDD0E7998AE8AD485();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_380(1411, iParam0);
	func_17(iVar1, uParam1->f_137, bParam3, 1);
	if (!bParam4)
	{
	}
	iVar1 = func_380(1412, iParam0);
	func_17(iVar1, uParam1->f_138, bParam3, 1);
	if (!bParam4)
	{
	}
	if (func_379(iParam0))
	{
	}
	else
	{
		iVar1 = func_380(1413, iParam0);
		func_17(iVar1, *uParam1, bParam3, 1);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_380(1414, iParam0) + iVar0);
				func_17(iVar1, uParam1->f_9[iVar0], bParam3, 1);
			}
			else
			{
				iVar1 = (func_378(iParam0) + (iVar0 - 25));
				func_17(iVar1, uParam1->f_9[iVar0], bParam3, 1);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_380(1439, iParam0) + iVar0);
			func_17(iVar1, uParam1->f_59[iVar0], bParam3, 1);
			iVar0++;
		}
	}
	iVar1 = func_380(1441, iParam0);
	func_17(iVar1, uParam1->f_62, bParam3, 1);
	iVar1 = func_380(1442, iParam0);
	func_17(iVar1, uParam1->f_63, bParam3, 1);
	iVar1 = func_380(1443, iParam0);
	func_17(iVar1, uParam1->f_64, bParam3, 1);
	if (func_379(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_380(1444, iParam0);
		func_17(iVar1, uParam1->f_65, bParam3, 1);
	}
	iVar1 = func_380(1445, iParam0);
	func_17(iVar1, uParam1->f_67, bParam3, 1);
	if (func_379(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_380(1446, iParam0);
		func_17(iVar1, uParam1->f_68, bParam3, 1);
	}
	iVar1 = func_380(1447, iParam0);
	func_17(iVar1, uParam1->f_69, bParam3, 1);
	iVar1 = func_380(1448, iParam0);
	func_17(iVar1, uParam1->f_70, -1, 1);
	iVar1 = func_380(1449, iParam0);
	func_17(iVar1, uParam1->f_71, bParam3, 1);
	iVar1 = func_380(1450, iParam0);
	func_17(iVar1, uParam1->f_72, bParam3, 1);
	iVar1 = func_380(1451, iParam0);
	func_17(iVar1, uParam1->f_73, bParam3, 1);
	iVar1 = func_380(1452, iParam0);
	func_17(iVar1, uParam1->f_5, bParam3, 1);
	iVar1 = func_380(1453, iParam0);
	func_17(iVar1, uParam1->f_6, bParam3, 1);
	iVar1 = func_380(1454, iParam0);
	func_17(iVar1, uParam1->f_7, bParam3, 1);
	iVar1 = func_380(1455, iParam0);
	func_17(iVar1, uParam1->f_8, bParam3, 1);
	if (func_379(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_380(3880, iParam0);
		func_17(iVar1, uParam1->f_74, bParam3, 1);
		iVar1 = func_380(3881, iParam0);
		func_17(iVar1, uParam1->f_75, bParam3, 1);
		iVar1 = func_380(3882, iParam0);
		func_17(iVar1, uParam1->f_76, bParam3, 1);
		iVar1 = func_377(iParam0);
		func_17(iVar1, uParam1->f_97, bParam3, 1);
		iVar1 = func_376(iParam0);
		func_17(iVar1, uParam1->f_99, bParam3, 1);
		iVar1 = func_365(iParam0);
		func_17(iVar1, uParam1->f_98, bParam3, 1);
	}
	bVar2 = Global_2097152[func_191() /*10930*/].f_6174.f_1274;
	if (bParam5)
	{
		bVar2 = UNK_0xDD0E7998AE8AD485();
	}
	func_131(1628, bVar2, bParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_131(func_364(1, iParam0), uParam1->f_102, bParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_131(func_364(2, iParam0), uParam1->f_103, bParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_131(func_364(3, iParam0), uParam1->f_104, bParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_131(func_364(4, iParam0), uParam1->f_66, bParam3, 1, 0);
	func_131(func_364(5, iParam0), uParam1->f_77, bParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_131(func_364(7, iParam0), uParam1->f_139, bParam3, 1, 0);
	if (!func_379(iParam0))
	{
		if (!UNK_0xEA6BC48857E0AC4C(&(uParam1->f_1)))
		{
			func_363(func_364(6, iParam0), &(uParam1->f_1), bParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_363(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = Global_2548434[iParam0 /*3*/][func_34(bParam2)];
	if (iVar0 != 0)
	{
		UNK_0xF345706D5D9F9C04(iVar0, uParam1);
	}
}

int func_364(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				case 1:
					return 1636;
				case 2:
					return 1643;
				case 3:
					return 1650;
				case 4:
					return 1657;
				case 5:
					return 1664;
				case 6:
					return 1671;
				case 7:
					return 1678;
				case 8:
					return 1685;
				case 9:
					return 1692;
				case 10:
					return 1699;
				case 11:
					return 1705;
				case 12:
					return 1711;
				case 13:
					return 1717;
				case 14:
					return 1795;
				case 15:
					return 1802;
				case 16:
					return 1809;
				case 17:
					return 1816;
				case 18:
					return 1823;
				case 19:
					return 1830;
				case 20:
					return 1837;
				case 21:
					return 1844;
				case 22:
					return 1851;
				case 23:
					return 1858;
				case 24:
					return 1864;
				case 25:
					return 1870;
				case 26:
					return 2165;
				case 27:
					return 2172;
				case 28:
					return 2179;
				case 29:
					return 2186;
				case 30:
					return 2193;
				case 31:
					return 2200;
				case 32:
					return 2207;
				case 33:
					return 2214;
				case 34:
					return 2221;
				case 35:
					return 2228;
				case 36:
					return 2235;
				case 37:
					return 2241;
				case 38:
					return 2247;
				case 39:
					return 2828;
				case 40:
					return 2835;
				case 41:
					return 2842;
				case 42:
					return 2849;
				case 43:
					return 2856;
				case 44:
					return 2863;
				case 45:
					return 2870;
				case 46:
					return 2877;
				case 47:
					return 2884;
				case 48:
					return 2891;
				case 49:
					return 2898;
				case 50:
					return 2904;
				case 51:
					return 2910;
				case 52:
					return 2952;
				case 53:
					return 2959;
				case 54:
					return 2966;
				case 55:
					return 2973;
				case 56:
					return 2980;
				case 57:
					return 2987;
				case 58:
					return 2994;
				case 59:
					return 3001;
				case 60:
					return 3008;
				case 61:
					return 3015;
				case 62:
					return 3022;
				case 63:
					return 3028;
				case 64:
					return 3034;
				case 65:
					return 3235;
				case 66:
					return 3243;
				case 67:
					return 3251;
				case 68:
					return 3259;
				case 69:
					return 3267;
				case 70:
					return 3275;
				case 71:
					return 3283;
				case 72:
					return 3291;
				case 73:
					return 3299;
				case 74:
					return 3307;
				case 75:
					return 3315;
				case 76:
					return 3323;
				case 77:
					return 3331;
				case 78:
					return 3339;
				case 79:
					return 3347;
				case 80:
					return 3355;
				case 81:
					return 3363;
				case 82:
					return 3371;
				case 83:
					return 3379;
				case 84:
					return 3387;
				case 85:
					return 3395;
				case 86:
					return 3402;
				case 87:
					return 3409;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				case 89:
					return 4039;
				case 90:
					return 4047;
				case 91:
					return 4055;
				case 92:
					return 4063;
				case 93:
					return 4071;
				case 94:
					return 4079;
				case 95:
					return 4087;
				case 96:
					return 4095;
				case 97:
					return 4103;
				case 98:
					return 4111;
				case 99:
					return 4119;
				case 100:
					return 4127;
				case 101:
					return 4135;
				case 102:
					return 4143;
				case 103:
					return 4151;
				case 104:
					return 4159;
				case 105:
					return 4167;
				case 106:
					return 4175;
				case 107:
					return 4183;
				case 108:
					return 4191;
				case 109:
					return 4199;
				case 110:
					return 4207;
				case 111:
					return 4215;
				case 112:
					return 4223;
				case 113:
					return 4231;
				case 114:
					return 4239;
				case 115:
					return 4247;
				case 116:
					return 4255;
				case 117:
					return 4263;
				case 118:
					return 4271;
				case 119:
					return 4279;
				case 120:
					return 4287;
				case 121:
					return 4295;
				case 122:
					return 4303;
				case 123:
					return 4311;
				case 124:
					return 4319;
				case 125:
					return 4327;
				case 126:
					return 4335;
				case 127:
					return 4343;
				case 128:
					return 4351;
				case 129:
					return 4359;
				case 130:
					return 4367;
				case 131:
					return 4375;
				case 132:
					return 4383;
				case 133:
					return 4391;
				case 134:
					return 4399;
				case 135:
					return 4407;
				case 136:
					return 4415;
				case 137:
					return 4423;
				case 138:
					return 4431;
				case 139:
					return 4439;
				case 140:
					return 4447;
				case 141:
					return 4455;
				case 142:
					return 4463;
				case 143:
					return 4471;
				case 144:
					return 4479;
				case 145:
					return 4487;
				case 146:
					return 4495;
				case 147:
					return 4503;
				case 148:
					return 4511;
				case 149:
					return 4519;
				case 150:
					return 4527;
				case 151:
					return 4535;
				case 152:
					return 4543;
				case 153:
					return 4551;
				case 154:
					return 4559;
				case 155:
					return 4567;
				case 156:
					return 4575;
				case 157:
					return 4583;
				case 158:
					return 5476;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				case 160:
					return 5932;
				case 161:
					return 5939;
				case 162:
					return 5946;
				case 163:
					return 5953;
				case 164:
					return 5960;
				case 165:
					return 5967;
				case 166:
					return 5974;
				case 167:
					return 5981;
				case 168:
					return 5988;
				case 169:
					return 5995;
				case 170:
					return 6002;
				case 171:
					return 6009;
				case 172:
					return 6016;
				case 173:
					return 6023;
				case 174:
					return 6030;
				case 175:
					return 6037;
				case 176:
					return 6044;
				case 177:
					return 6051;
				case 178:
					return 6058;
				case 179:
					return 6065;
				case 180:
					return 6072;
				case 181:
					return 6079;
				case 182:
					return 6086;
				case 183:
					return 6093;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				case 185:
					return 6177;
				case 186:
					return 6184;
				case 187:
					return 6191;
				case 188:
					return 6198;
				case 189:
					return 6205;
				case 190:
					return 6212;
				case 191:
					return 6219;
				case 192:
					return 6226;
				case 193:
					return 6233;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				case 195:
					return 6574;
				case 196:
					return 6581;
				case 197:
					return 6588;
				case 198:
					return 6595;
				case 199:
					return 6602;
				case 200:
					return 6609;
				case 201:
					return 6616;
				case 202:
					return 6623;
				case 203:
					return 6630;
				case 204:
					return 6637;
				case 205:
					return 6644;
				case 206:
					return 6651;
				case 207:
					return 6658;
				case 208:
					return 6665;
				case 209:
					return 6672;
				case 210:
					return 6679;
				case 211:
					return 6686;
				case 212:
					return 6693;
				case 213:
					return 6700;
				case 214:
					return 6707;
				case 215:
					return 6714;
				case 216:
					return 6721;
				case 217:
					return 6728;
				case 218:
					return 6735;
				case 219:
					return 6742;
				case 220:
					return 6749;
				case 221:
					return 6756;
				case 222:
					return 6763;
				case 223:
					return 6770;
				case 224:
					return 6777;
				case 225:
					return 6784;
				case 226:
					return 6791;
				case 227:
					return 6798;
				case 228:
					return 6805;
				case 229:
					return 6812;
				case 230:
					return 6819;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				case 232:
					return 7296;
				case 233:
					return 7303;
				case 234:
					return 7310;
				case 235:
					return 7317;
				case 236:
					return 7324;
				case 237:
					return 7331;
				case 238:
					return 7338;
				case 239:
					return 7345;
				case 240:
					return 7352;
				case 241:
					return 7359;
				case 242:
					return 7366;
				case 243:
					return 7373;
				case 244:
					return 7380;
				case 245:
					return 7387;
				case 246:
					return 7394;
				case 247:
					return 7401;
				case 248:
					return 7408;
				case 249:
					return 7415;
				case 250:
					return 7422;
				case 251:
					return 7429;
				case 252:
					return 7436;
				case 253:
					return 7443;
				case 254:
					return 7450;
				case 255:
					return 7457;
				case 256:
					return 7464;
				case 257:
					return 7471;
				case 258:
					return 7478;
				case 259:
					return 7485;
				case 260:
					return 7492;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				case 262:
					return 8019;
				case 263:
					return 8026;
				case 264:
					return 8033;
				case 265:
					return 8040;
				case 266:
					return 8047;
				case 267:
					return 8054;
				case 268:
					return 8061;
				case 269:
					return 8068;
				case 270:
					return 8075;
				case 271:
					return 8536;
				case 272:
					return 8543;
				case 273:
					return 8550;
				case 274:
					return 8557;
				case 275:
					return 8564;
				case 276:
					return 8571;
				case 277:
					return 8578;
				case 278:
					return 8585;
				case 279:
					return 8592;
				case 280:
					return 8599;
				case 281:
					return 8981;
				case 282:
					return 8988;
				case 283:
					return 8995;
				case 284:
					return 9002;
				case 285:
					return 9009;
				case 286:
					return 9016;
				case 287:
					return 9023;
				case 288:
					return 9030;
				case 289:
					return 9037;
				case 290:
					return 9044;
				case 291:
					return 9051;
				case 292:
					return 9057;
				case 293:
					return 9063;
				case 294:
					return 9069;
				case 295:
					return 9076;
				case 296:
					return 9083;
				case 297:
					return 9090;
				case 298:
					return 9097;
				case 299:
					return 9104;
				case 300:
					return 9111;
				case 301:
					return 9118;
				case 302:
					return 9125;
				case 303:
					return 9132;
				case 304:
					return 9139;
				case 305:
					return 9145;
				case 306:
					return 9151;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				case 1:
					return 1637;
				case 2:
					return 1644;
				case 3:
					return 1651;
				case 4:
					return 1658;
				case 5:
					return 1665;
				case 6:
					return 1672;
				case 7:
					return 1679;
				case 8:
					return 1686;
				case 9:
					return 1693;
				case 10:
					return 1700;
				case 11:
					return 1706;
				case 12:
					return 1712;
				case 13:
					return 1718;
				case 14:
					return 1796;
				case 15:
					return 1803;
				case 16:
					return 1810;
				case 17:
					return 1817;
				case 18:
					return 1824;
				case 19:
					return 1831;
				case 20:
					return 1838;
				case 21:
					return 1845;
				case 22:
					return 1852;
				case 23:
					return 1859;
				case 24:
					return 1865;
				case 25:
					return 1871;
				case 26:
					return 2166;
				case 27:
					return 2173;
				case 28:
					return 2180;
				case 29:
					return 2187;
				case 30:
					return 2194;
				case 31:
					return 2201;
				case 32:
					return 2208;
				case 33:
					return 2215;
				case 34:
					return 2222;
				case 35:
					return 2229;
				case 36:
					return 2236;
				case 37:
					return 2242;
				case 38:
					return 2248;
				case 39:
					return 2829;
				case 40:
					return 2836;
				case 41:
					return 2843;
				case 42:
					return 2850;
				case 43:
					return 2857;
				case 44:
					return 2864;
				case 45:
					return 2871;
				case 46:
					return 2878;
				case 47:
					return 2885;
				case 48:
					return 2892;
				case 49:
					return 2899;
				case 50:
					return 2905;
				case 51:
					return 2911;
				case 52:
					return 2953;
				case 53:
					return 2960;
				case 54:
					return 2967;
				case 55:
					return 2974;
				case 56:
					return 2981;
				case 57:
					return 2988;
				case 58:
					return 2995;
				case 59:
					return 3002;
				case 60:
					return 3009;
				case 61:
					return 3016;
				case 62:
					return 3023;
				case 63:
					return 3029;
				case 64:
					return 3035;
				case 65:
					return 3236;
				case 66:
					return 3244;
				case 67:
					return 3252;
				case 68:
					return 3260;
				case 69:
					return 3268;
				case 70:
					return 3276;
				case 71:
					return 3284;
				case 72:
					return 3292;
				case 73:
					return 3300;
				case 74:
					return 3308;
				case 75:
					return 3316;
				case 76:
					return 3324;
				case 77:
					return 3332;
				case 78:
					return 3340;
				case 79:
					return 3348;
				case 80:
					return 3356;
				case 81:
					return 3364;
				case 82:
					return 3372;
				case 83:
					return 3380;
				case 84:
					return 3388;
				case 85:
					return 3396;
				case 86:
					return 3403;
				case 87:
					return 3410;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				case 89:
					return 4040;
				case 90:
					return 4048;
				case 91:
					return 4056;
				case 92:
					return 4064;
				case 93:
					return 4072;
				case 94:
					return 4080;
				case 95:
					return 4088;
				case 96:
					return 4096;
				case 97:
					return 4104;
				case 98:
					return 4112;
				case 99:
					return 4120;
				case 100:
					return 4128;
				case 101:
					return 4136;
				case 102:
					return 4144;
				case 103:
					return 4152;
				case 104:
					return 4160;
				case 105:
					return 4168;
				case 106:
					return 4176;
				case 107:
					return 4184;
				case 108:
					return 4192;
				case 109:
					return 4200;
				case 110:
					return 4208;
				case 111:
					return 4216;
				case 112:
					return 4224;
				case 113:
					return 4232;
				case 114:
					return 4240;
				case 115:
					return 4248;
				case 116:
					return 4256;
				case 117:
					return 4264;
				case 118:
					return 4272;
				case 119:
					return 4280;
				case 120:
					return 4288;
				case 121:
					return 4296;
				case 122:
					return 4304;
				case 123:
					return 4312;
				case 124:
					return 4320;
				case 125:
					return 4328;
				case 126:
					return 4336;
				case 127:
					return 4344;
				case 128:
					return 4352;
				case 129:
					return 4360;
				case 130:
					return 4368;
				case 131:
					return 4376;
				case 132:
					return 4384;
				case 133:
					return 4392;
				case 134:
					return 4400;
				case 135:
					return 4408;
				case 136:
					return 4416;
				case 137:
					return 4424;
				case 138:
					return 4432;
				case 139:
					return 4440;
				case 140:
					return 4448;
				case 141:
					return 4456;
				case 142:
					return 4464;
				case 143:
					return 4472;
				case 144:
					return 4480;
				case 145:
					return 4488;
				case 146:
					return 4496;
				case 147:
					return 4504;
				case 148:
					return 4512;
				case 149:
					return 4520;
				case 150:
					return 4528;
				case 151:
					return 4536;
				case 152:
					return 4544;
				case 153:
					return 4552;
				case 154:
					return 4560;
				case 155:
					return 4568;
				case 156:
					return 4576;
				case 157:
					return 4584;
				case 158:
					return 5477;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				case 160:
					return 5933;
				case 161:
					return 5940;
				case 162:
					return 5947;
				case 163:
					return 5954;
				case 164:
					return 5961;
				case 165:
					return 5968;
				case 166:
					return 5975;
				case 167:
					return 5982;
				case 168:
					return 5989;
				case 169:
					return 5996;
				case 170:
					return 6003;
				case 171:
					return 6010;
				case 172:
					return 6017;
				case 173:
					return 6024;
				case 174:
					return 6031;
				case 175:
					return 6038;
				case 176:
					return 6045;
				case 177:
					return 6052;
				case 178:
					return 6059;
				case 179:
					return 6066;
				case 180:
					return 6073;
				case 181:
					return 6080;
				case 182:
					return 6087;
				case 183:
					return 6094;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				case 185:
					return 6178;
				case 186:
					return 6185;
				case 187:
					return 6192;
				case 188:
					return 6199;
				case 189:
					return 6206;
				case 190:
					return 6213;
				case 191:
					return 6220;
				case 192:
					return 6227;
				case 193:
					return 6234;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				case 195:
					return 6575;
				case 196:
					return 6582;
				case 197:
					return 6589;
				case 198:
					return 6596;
				case 199:
					return 6603;
				case 200:
					return 6610;
				case 201:
					return 6617;
				case 202:
					return 6624;
				case 203:
					return 6631;
				case 204:
					return 6638;
				case 205:
					return 6645;
				case 206:
					return 6652;
				case 207:
					return 6659;
				case 208:
					return 6666;
				case 209:
					return 6673;
				case 210:
					return 6680;
				case 211:
					return 6687;
				case 212:
					return 6694;
				case 213:
					return 6701;
				case 214:
					return 6708;
				case 215:
					return 6715;
				case 216:
					return 6722;
				case 217:
					return 6729;
				case 218:
					return 6736;
				case 219:
					return 6743;
				case 220:
					return 6750;
				case 221:
					return 6757;
				case 222:
					return 6764;
				case 223:
					return 6771;
				case 224:
					return 6778;
				case 225:
					return 6785;
				case 226:
					return 6792;
				case 227:
					return 6799;
				case 228:
					return 6806;
				case 229:
					return 6813;
				case 230:
					return 6820;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				case 232:
					return 7297;
				case 233:
					return 7304;
				case 234:
					return 7311;
				case 235:
					return 7318;
				case 236:
					return 7325;
				case 237:
					return 7332;
				case 238:
					return 7339;
				case 239:
					return 7346;
				case 240:
					return 7353;
				case 241:
					return 7360;
				case 242:
					return 7367;
				case 243:
					return 7374;
				case 244:
					return 7381;
				case 245:
					return 7388;
				case 246:
					return 7395;
				case 247:
					return 7402;
				case 248:
					return 7409;
				case 249:
					return 7416;
				case 250:
					return 7423;
				case 251:
					return 7430;
				case 252:
					return 7437;
				case 253:
					return 7444;
				case 254:
					return 7451;
				case 255:
					return 7458;
				case 256:
					return 7465;
				case 257:
					return 7472;
				case 258:
					return 7479;
				case 259:
					return 7486;
				case 260:
					return 7493;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				case 262:
					return 8020;
				case 263:
					return 8027;
				case 264:
					return 8034;
				case 265:
					return 8041;
				case 266:
					return 8048;
				case 267:
					return 8055;
				case 268:
					return 8062;
				case 269:
					return 8069;
				case 270:
					return 8076;
				case 271:
					return 8537;
				case 272:
					return 8544;
				case 273:
					return 8551;
				case 274:
					return 8558;
				case 275:
					return 8565;
				case 276:
					return 8572;
				case 277:
					return 8579;
				case 278:
					return 8586;
				case 279:
					return 8593;
				case 280:
					return 8600;
				case 281:
					return 8982;
				case 282:
					return 8989;
				case 283:
					return 8996;
				case 284:
					return 9003;
				case 285:
					return 9010;
				case 286:
					return 9017;
				case 287:
					return 9024;
				case 288:
					return 9031;
				case 289:
					return 9038;
				case 290:
					return 9045;
				case 291:
					return 9052;
				case 292:
					return 9058;
				case 293:
					return 9064;
				case 294:
					return 9070;
				case 295:
					return 9077;
				case 296:
					return 9084;
				case 297:
					return 9091;
				case 298:
					return 9098;
				case 299:
					return 9105;
				case 300:
					return 9112;
				case 301:
					return 9119;
				case 302:
					return 9126;
				case 303:
					return 9133;
				case 304:
					return 9140;
				case 305:
					return 9146;
				case 306:
					return 9152;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				case 1:
					return 1638;
				case 2:
					return 1645;
				case 3:
					return 1652;
				case 4:
					return 1659;
				case 5:
					return 1666;
				case 6:
					return 1673;
				case 7:
					return 1680;
				case 8:
					return 1687;
				case 9:
					return 1694;
				case 10:
					return 1701;
				case 11:
					return 1707;
				case 12:
					return 1713;
				case 13:
					return 1719;
				case 14:
					return 1797;
				case 15:
					return 1804;
				case 16:
					return 1811;
				case 17:
					return 1818;
				case 18:
					return 1825;
				case 19:
					return 1832;
				case 20:
					return 1839;
				case 21:
					return 1846;
				case 22:
					return 1853;
				case 23:
					return 1860;
				case 24:
					return 1866;
				case 25:
					return 1872;
				case 26:
					return 2167;
				case 27:
					return 2174;
				case 28:
					return 2181;
				case 29:
					return 2188;
				case 30:
					return 2195;
				case 31:
					return 2202;
				case 32:
					return 2209;
				case 33:
					return 2216;
				case 34:
					return 2223;
				case 35:
					return 2230;
				case 36:
					return 2237;
				case 37:
					return 2243;
				case 38:
					return 2249;
				case 39:
					return 2830;
				case 40:
					return 2837;
				case 41:
					return 2844;
				case 42:
					return 2851;
				case 43:
					return 2858;
				case 44:
					return 2865;
				case 45:
					return 2872;
				case 46:
					return 2879;
				case 47:
					return 2886;
				case 48:
					return 2893;
				case 49:
					return 2900;
				case 50:
					return 2906;
				case 51:
					return 2912;
				case 52:
					return 2954;
				case 53:
					return 2961;
				case 54:
					return 2968;
				case 55:
					return 2975;
				case 56:
					return 2982;
				case 57:
					return 2989;
				case 58:
					return 2996;
				case 59:
					return 3003;
				case 60:
					return 3010;
				case 61:
					return 3017;
				case 62:
					return 3024;
				case 63:
					return 3030;
				case 64:
					return 3036;
				case 65:
					return 3237;
				case 66:
					return 3245;
				case 67:
					return 3253;
				case 68:
					return 3261;
				case 69:
					return 3269;
				case 70:
					return 3277;
				case 71:
					return 3285;
				case 72:
					return 3293;
				case 73:
					return 3301;
				case 74:
					return 3309;
				case 75:
					return 3317;
				case 76:
					return 3325;
				case 77:
					return 3333;
				case 78:
					return 3341;
				case 79:
					return 3349;
				case 80:
					return 3357;
				case 81:
					return 3365;
				case 82:
					return 3373;
				case 83:
					return 3381;
				case 84:
					return 3389;
				case 85:
					return 3397;
				case 86:
					return 3404;
				case 87:
					return 3411;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				case 89:
					return 4041;
				case 90:
					return 4049;
				case 91:
					return 4057;
				case 92:
					return 4065;
				case 93:
					return 4073;
				case 94:
					return 4081;
				case 95:
					return 4089;
				case 96:
					return 4097;
				case 97:
					return 4105;
				case 98:
					return 4113;
				case 99:
					return 4121;
				case 100:
					return 4129;
				case 101:
					return 4137;
				case 102:
					return 4145;
				case 103:
					return 4153;
				case 104:
					return 4161;
				case 105:
					return 4169;
				case 106:
					return 4177;
				case 107:
					return 4185;
				case 108:
					return 4193;
				case 109:
					return 4201;
				case 110:
					return 4209;
				case 111:
					return 4217;
				case 112:
					return 4225;
				case 113:
					return 4233;
				case 114:
					return 4241;
				case 115:
					return 4249;
				case 116:
					return 4257;
				case 117:
					return 4265;
				case 118:
					return 4273;
				case 119:
					return 4281;
				case 120:
					return 4289;
				case 121:
					return 4297;
				case 122:
					return 4305;
				case 123:
					return 4313;
				case 124:
					return 4321;
				case 125:
					return 4329;
				case 126:
					return 4337;
				case 127:
					return 4345;
				case 128:
					return 4353;
				case 129:
					return 4361;
				case 130:
					return 4369;
				case 131:
					return 4377;
				case 132:
					return 4385;
				case 133:
					return 4393;
				case 134:
					return 4401;
				case 135:
					return 4409;
				case 136:
					return 4417;
				case 137:
					return 4425;
				case 138:
					return 4433;
				case 139:
					return 4441;
				case 140:
					return 4449;
				case 141:
					return 4457;
				case 142:
					return 4465;
				case 143:
					return 4473;
				case 144:
					return 4481;
				case 145:
					return 4489;
				case 146:
					return 4497;
				case 147:
					return 4505;
				case 148:
					return 4513;
				case 149:
					return 4521;
				case 150:
					return 4529;
				case 151:
					return 4537;
				case 152:
					return 4545;
				case 153:
					return 4553;
				case 154:
					return 4561;
				case 155:
					return 4569;
				case 156:
					return 4577;
				case 157:
					return 4585;
				case 158:
					return 5478;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				case 160:
					return 5934;
				case 161:
					return 5941;
				case 162:
					return 5948;
				case 163:
					return 5955;
				case 164:
					return 5962;
				case 165:
					return 5969;
				case 166:
					return 5976;
				case 167:
					return 5983;
				case 168:
					return 5990;
				case 169:
					return 5997;
				case 170:
					return 6004;
				case 171:
					return 6011;
				case 172:
					return 6018;
				case 173:
					return 6025;
				case 174:
					return 6032;
				case 175:
					return 6039;
				case 176:
					return 6046;
				case 177:
					return 6053;
				case 178:
					return 6060;
				case 179:
					return 6067;
				case 180:
					return 6074;
				case 181:
					return 6081;
				case 182:
					return 6088;
				case 183:
					return 6095;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				case 185:
					return 6179;
				case 186:
					return 6186;
				case 187:
					return 6193;
				case 188:
					return 6200;
				case 189:
					return 6207;
				case 190:
					return 6214;
				case 191:
					return 6221;
				case 192:
					return 6228;
				case 193:
					return 6235;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				case 195:
					return 6576;
				case 196:
					return 6583;
				case 197:
					return 6590;
				case 198:
					return 6597;
				case 199:
					return 6604;
				case 200:
					return 6611;
				case 201:
					return 6618;
				case 202:
					return 6625;
				case 203:
					return 6632;
				case 204:
					return 6639;
				case 205:
					return 6646;
				case 206:
					return 6653;
				case 207:
					return 6660;
				case 208:
					return 6667;
				case 209:
					return 6674;
				case 210:
					return 6681;
				case 211:
					return 6688;
				case 212:
					return 6695;
				case 213:
					return 6702;
				case 214:
					return 6709;
				case 215:
					return 6716;
				case 216:
					return 6723;
				case 217:
					return 6730;
				case 218:
					return 6737;
				case 219:
					return 6744;
				case 220:
					return 6751;
				case 221:
					return 6758;
				case 222:
					return 6765;
				case 223:
					return 6772;
				case 224:
					return 6779;
				case 225:
					return 6786;
				case 226:
					return 6793;
				case 227:
					return 6800;
				case 228:
					return 6807;
				case 229:
					return 6814;
				case 230:
					return 6821;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				case 232:
					return 7298;
				case 233:
					return 7305;
				case 234:
					return 7312;
				case 235:
					return 7319;
				case 236:
					return 7326;
				case 237:
					return 7333;
				case 238:
					return 7340;
				case 239:
					return 7347;
				case 240:
					return 7354;
				case 241:
					return 7361;
				case 242:
					return 7368;
				case 243:
					return 7375;
				case 244:
					return 7382;
				case 245:
					return 7389;
				case 246:
					return 7396;
				case 247:
					return 7403;
				case 248:
					return 7410;
				case 249:
					return 7417;
				case 250:
					return 7424;
				case 251:
					return 7431;
				case 252:
					return 7438;
				case 253:
					return 7445;
				case 254:
					return 7452;
				case 255:
					return 7459;
				case 256:
					return 7466;
				case 257:
					return 7473;
				case 258:
					return 7480;
				case 259:
					return 7487;
				case 260:
					return 7494;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				case 262:
					return 8021;
				case 263:
					return 8028;
				case 264:
					return 8035;
				case 265:
					return 8042;
				case 266:
					return 8049;
				case 267:
					return 8056;
				case 268:
					return 8063;
				case 269:
					return 8070;
				case 270:
					return 8077;
				case 271:
					return 8538;
				case 272:
					return 8545;
				case 273:
					return 8552;
				case 274:
					return 8559;
				case 275:
					return 8566;
				case 276:
					return 8573;
				case 277:
					return 8580;
				case 278:
					return 8587;
				case 279:
					return 8594;
				case 280:
					return 8601;
				case 281:
					return 8983;
				case 282:
					return 8990;
				case 283:
					return 8997;
				case 284:
					return 9004;
				case 285:
					return 9011;
				case 286:
					return 9018;
				case 287:
					return 9025;
				case 288:
					return 9032;
				case 289:
					return 9039;
				case 290:
					return 9046;
				case 291:
					return 9053;
				case 292:
					return 9059;
				case 293:
					return 9065;
				case 294:
					return 9071;
				case 295:
					return 9078;
				case 296:
					return 9085;
				case 297:
					return 9092;
				case 298:
					return 9099;
				case 299:
					return 9106;
				case 300:
					return 9113;
				case 301:
					return 9120;
				case 302:
					return 9127;
				case 303:
					return 9134;
				case 304:
					return 9141;
				case 305:
					return 9147;
				case 306:
					return 9153;
				default:
					break;
			}
			Jump @26010; //curOff = 11351
			switch (iParam1)
			{
				case 0:
					return 1632;
				case 1:
					return 1639;
				case 2:
					return 1646;
				case 3:
					return 1653;
				case 4:
					return 1660;
				case 5:
					return 1667;
				case 6:
					return 1674;
				case 7:
					return 1681;
				case 8:
					return 1688;
				case 9:
					return 1695;
				case 10:
					return 1702;
				case 11:
					return 1708;
				case 12:
					return 1714;
				case 13:
					return 1720;
				case 14:
					return 1798;
				case 15:
					return 1805;
				case 16:
					return 1812;
				case 17:
					return 1819;
				case 18:
					return 1826;
				case 19:
					return 1833;
				case 20:
					return 1840;
				case 21:
					return 1847;
				case 22:
					return 1854;
				case 23:
					return 1861;
				case 24:
					return 1867;
				case 25:
					return 1873;
				case 26:
					return 2168;
				case 27:
					return 2175;
				case 28:
					return 2182;
				case 29:
					return 2189;
				case 30:
					return 2196;
				case 31:
					return 2203;
				case 32:
					return 2210;
				case 33:
					return 2217;
				case 34:
					return 2224;
				case 35:
					return 2231;
				case 36:
					return 2238;
				case 37:
					return 2244;
				case 38:
					return 2250;
				case 39:
					return 2831;
				case 40:
					return 2838;
				case 41:
					return 2845;
				case 42:
					return 2852;
				case 43:
					return 2859;
				case 44:
					return 2866;
				case 45:
					return 2873;
				case 46:
					return 2880;
				case 47:
					return 2887;
				case 48:
					return 2894;
				case 49:
					return 2901;
				case 50:
					return 2907;
				case 51:
					return 2913;
				case 52:
					return 2955;
				case 53:
					return 2962;
				case 54:
					return 2969;
				case 55:
					return 2976;
				case 56:
					return 2983;
				case 57:
					return 2990;
				case 58:
					return 2997;
				case 59:
					return 3004;
				case 60:
					return 3011;
				case 61:
					return 3018;
				case 62:
					return 3025;
				case 63:
					return 3031;
				case 64:
					return 3037;
				case 65:
					return 3238;
				case 66:
					return 3246;
				case 67:
					return 3254;
				case 68:
					return 3262;
				case 69:
					return 3270;
				case 70:
					return 3278;
				case 71:
					return 3286;
				case 72:
					return 3294;
				case 73:
					return 3302;
				case 74:
					return 3310;
				case 75:
					return 3318;
				case 76:
					return 3326;
				case 77:
					return 3334;
				case 78:
					return 3342;
				case 79:
					return 3350;
				case 80:
					return 3358;
				case 81:
					return 3366;
				case 82:
					return 3374;
				case 83:
					return 3382;
				case 84:
					return 3390;
				case 85:
					return 3398;
				case 86:
					return 3405;
				case 87:
					return 3412;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				case 89:
					return 4042;
				case 90:
					return 4050;
				case 91:
					return 4058;
				case 92:
					return 4066;
				case 93:
					return 4074;
				case 94:
					return 4082;
				case 95:
					return 4090;
				case 96:
					return 4098;
				case 97:
					return 4106;
				case 98:
					return 4114;
				case 99:
					return 4122;
				case 100:
					return 4130;
				case 101:
					return 4138;
				case 102:
					return 4146;
				case 103:
					return 4154;
				case 104:
					return 4162;
				case 105:
					return 4170;
				case 106:
					return 4178;
				case 107:
					return 4186;
				case 108:
					return 4194;
				case 109:
					return 4202;
				case 110:
					return 4210;
				case 111:
					return 4218;
				case 112:
					return 4226;
				case 113:
					return 4234;
				case 114:
					return 4242;
				case 115:
					return 4250;
				case 116:
					return 4258;
				case 117:
					return 4266;
				case 118:
					return 4274;
				case 119:
					return 4282;
				case 120:
					return 4290;
				case 121:
					return 4298;
				case 122:
					return 4306;
				case 123:
					return 4314;
				case 124:
					return 4322;
				case 125:
					return 4330;
				case 126:
					return 4338;
				case 127:
					return 4346;
				case 128:
					return 4354;
				case 129:
					return 4362;
				case 130:
					return 4370;
				case 131:
					return 4378;
				case 132:
					return 4386;
				case 133:
					return 4394;
				case 134:
					return 4402;
				case 135:
					return 4410;
				case 136:
					return 4418;
				case 137:
					return 4426;
				case 138:
					return 4434;
				case 139:
					return 4442;
				case 140:
					return 4450;
				case 141:
					return 4458;
				case 142:
					return 4466;
				case 143:
					return 4474;
				case 144:
					return 4482;
				case 145:
					return 4490;
				case 146:
					return 4498;
				case 147:
					return 4506;
				case 148:
					return 4514;
				case 149:
					return 4522;
				case 150:
					return 4530;
				case 151:
					return 4538;
				case 152:
					return 4546;
				case 153:
					return 4554;
				case 154:
					return 4562;
				case 155:
					return 4570;
				case 156:
					return 4578;
				case 157:
					return 4586;
				case 158:
					return 5479;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				case 160:
					return 5935;
				case 161:
					return 5942;
				case 162:
					return 5949;
				case 163:
					return 5956;
				case 164:
					return 5963;
				case 165:
					return 5970;
				case 166:
					return 5977;
				case 167:
					return 5984;
				case 168:
					return 5991;
				case 169:
					return 5998;
				case 170:
					return 6005;
				case 171:
					return 6012;
				case 172:
					return 6019;
				case 173:
					return 6026;
				case 174:
					return 6033;
				case 175:
					return 6040;
				case 176:
					return 6047;
				case 177:
					return 6054;
				case 178:
					return 6061;
				case 179:
					return 6068;
				case 180:
					return 6075;
				case 181:
					return 6082;
				case 182:
					return 6089;
				case 183:
					return 6096;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				case 185:
					return 6180;
				case 186:
					return 6187;
				case 187:
					return 6194;
				case 188:
					return 6201;
				case 189:
					return 6208;
				case 190:
					return 6215;
				case 191:
					return 6222;
				case 192:
					return 6229;
				case 193:
					return 6236;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				case 195:
					return 6577;
				case 196:
					return 6584;
				case 197:
					return 6591;
				case 198:
					return 6598;
				case 199:
					return 6605;
				case 200:
					return 6612;
				case 201:
					return 6619;
				case 202:
					return 6626;
				case 203:
					return 6633;
				case 204:
					return 6640;
				case 205:
					return 6647;
				case 206:
					return 6654;
				case 207:
					return 6661;
				case 208:
					return 6668;
				case 209:
					return 6675;
				case 210:
					return 6682;
				case 211:
					return 6689;
				case 212:
					return 6696;
				case 213:
					return 6703;
				case 214:
					return 6710;
				case 215:
					return 6717;
				case 216:
					return 6724;
				case 217:
					return 6731;
				case 218:
					return 6738;
				case 219:
					return 6745;
				case 220:
					return 6752;
				case 221:
					return 6759;
				case 222:
					return 6766;
				case 223:
					return 6773;
				case 224:
					return 6780;
				case 225:
					return 6787;
				case 226:
					return 6794;
				case 227:
					return 6801;
				case 228:
					return 6808;
				case 229:
					return 6815;
				case 230:
					return 6822;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				case 232:
					return 7299;
				case 233:
					return 7306;
				case 234:
					return 7313;
				case 235:
					return 7320;
				case 236:
					return 7327;
				case 237:
					return 7334;
				case 238:
					return 7341;
				case 239:
					return 7348;
				case 240:
					return 7355;
				case 241:
					return 7362;
				case 242:
					return 7369;
				case 243:
					return 7376;
				case 244:
					return 7383;
				case 245:
					return 7390;
				case 246:
					return 7397;
				case 247:
					return 7404;
				case 248:
					return 7411;
				case 249:
					return 7418;
				case 250:
					return 7425;
				case 251:
					return 7432;
				case 252:
					return 7439;
				case 253:
					return 7446;
				case 254:
					return 7453;
				case 255:
					return 7460;
				case 256:
					return 7467;
				case 257:
					return 7474;
				case 258:
					return 7481;
				case 259:
					return 7488;
				case 260:
					return 7495;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				case 262:
					return 8022;
				case 263:
					return 8029;
				case 264:
					return 8036;
				case 265:
					return 8043;
				case 266:
					return 8050;
				case 267:
					return 8057;
				case 268:
					return 8064;
				case 269:
					return 8071;
				case 270:
					return 8078;
				case 271:
					return 8539;
				case 272:
					return 8546;
				case 273:
					return 8553;
				case 274:
					return 8560;
				case 275:
					return 8567;
				case 276:
					return 8574;
				case 277:
					return 8581;
				case 278:
					return 8588;
				case 279:
					return 8595;
				case 280:
					return 8602;
				case 281:
					return 8984;
				case 282:
					return 8991;
				case 283:
					return 8998;
				case 284:
					return 9005;
				case 285:
					return 9012;
				case 286:
					return 9019;
				case 287:
					return 9026;
				case 288:
					return 9033;
				case 289:
					return 9040;
				case 290:
					return 9047;
				case 291:
					return 9054;
				case 292:
					return 9060;
				case 293:
					return 9066;
				case 294:
					return 9072;
				case 295:
					return 9079;
				case 296:
					return 9086;
				case 297:
					return 9093;
				case 298:
					return 9100;
				case 299:
					return 9107;
				case 300:
					return 9114;
				case 301:
					return 9121;
				case 302:
					return 9128;
				case 303:
					return 9135;
				case 304:
					return 9142;
				case 305:
					return 9148;
				case 306:
					return 9154;
				default:
					break;
			}
			Jump @26010; //curOff = 15087
			switch (iParam1)
			{
				case 0:
					return 1633;
				case 1:
					return 1640;
				case 2:
					return 1647;
				case 3:
					return 1654;
				case 4:
					return 1661;
				case 5:
					return 1668;
				case 6:
					return 1675;
				case 7:
					return 1682;
				case 8:
					return 1689;
				case 9:
					return 1696;
				case 10:
					return 1703;
				case 11:
					return 1709;
				case 12:
					return 1715;
				case 13:
					return 1721;
				case 14:
					return 1799;
				case 15:
					return 1806;
				case 16:
					return 1813;
				case 17:
					return 1820;
				case 18:
					return 1827;
				case 19:
					return 1834;
				case 20:
					return 1841;
				case 21:
					return 1848;
				case 22:
					return 1855;
				case 23:
					return 1862;
				case 24:
					return 1868;
				case 25:
					return 1874;
				case 26:
					return 2169;
				case 27:
					return 2176;
				case 28:
					return 2183;
				case 29:
					return 2190;
				case 30:
					return 2197;
				case 31:
					return 2204;
				case 32:
					return 2211;
				case 33:
					return 2218;
				case 34:
					return 2225;
				case 35:
					return 2232;
				case 36:
					return 2239;
				case 37:
					return 2245;
				case 38:
					return 2251;
				case 39:
					return 2832;
				case 40:
					return 2839;
				case 41:
					return 2846;
				case 42:
					return 2853;
				case 43:
					return 2860;
				case 44:
					return 2867;
				case 45:
					return 2874;
				case 46:
					return 2881;
				case 47:
					return 2888;
				case 48:
					return 2895;
				case 49:
					return 2902;
				case 50:
					return 2908;
				case 51:
					return 2914;
				case 52:
					return 2956;
				case 53:
					return 2963;
				case 54:
					return 2970;
				case 55:
					return 2977;
				case 56:
					return 2984;
				case 57:
					return 2991;
				case 58:
					return 2998;
				case 59:
					return 3005;
				case 60:
					return 3012;
				case 61:
					return 3019;
				case 62:
					return 3026;
				case 63:
					return 3032;
				case 64:
					return 3038;
				case 65:
					return 3239;
				case 66:
					return 3247;
				case 67:
					return 3255;
				case 68:
					return 3263;
				case 69:
					return 3271;
				case 70:
					return 3279;
				case 71:
					return 3287;
				case 72:
					return 3295;
				case 73:
					return 3303;
				case 74:
					return 3311;
				case 75:
					return 3319;
				case 76:
					return 3327;
				case 77:
					return 3335;
				case 78:
					return 3343;
				case 79:
					return 3351;
				case 80:
					return 3359;
				case 81:
					return 3367;
				case 82:
					return 3375;
				case 83:
					return 3383;
				case 84:
					return 3391;
				case 85:
					return 3399;
				case 86:
					return 3406;
				case 87:
					return 3413;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				case 89:
					return 4043;
				case 90:
					return 4051;
				case 91:
					return 4059;
				case 92:
					return 4067;
				case 93:
					return 4075;
				case 94:
					return 4083;
				case 95:
					return 4091;
				case 96:
					return 4099;
				case 97:
					return 4107;
				case 98:
					return 4115;
				case 99:
					return 4123;
				case 100:
					return 4131;
				case 101:
					return 4139;
				case 102:
					return 4147;
				case 103:
					return 4155;
				case 104:
					return 4163;
				case 105:
					return 4171;
				case 106:
					return 4179;
				case 107:
					return 4187;
				case 108:
					return 4195;
				case 109:
					return 4203;
				case 110:
					return 4211;
				case 111:
					return 4219;
				case 112:
					return 4227;
				case 113:
					return 4235;
				case 114:
					return 4243;
				case 115:
					return 4251;
				case 116:
					return 4259;
				case 117:
					return 4267;
				case 118:
					return 4275;
				case 119:
					return 4283;
				case 120:
					return 4291;
				case 121:
					return 4299;
				case 122:
					return 4307;
				case 123:
					return 4315;
				case 124:
					return 4323;
				case 125:
					return 4331;
				case 126:
					return 4339;
				case 127:
					return 4347;
				case 128:
					return 4355;
				case 129:
					return 4363;
				case 130:
					return 4371;
				case 131:
					return 4379;
				case 132:
					return 4387;
				case 133:
					return 4395;
				case 134:
					return 4403;
				case 135:
					return 4411;
				case 136:
					return 4419;
				case 137:
					return 4427;
				case 138:
					return 4435;
				case 139:
					return 4443;
				case 140:
					return 4451;
				case 141:
					return 4459;
				case 142:
					return 4467;
				case 143:
					return 4475;
				case 144:
					return 4483;
				case 145:
					return 4491;
				case 146:
					return 4499;
				case 147:
					return 4507;
				case 148:
					return 4515;
				case 149:
					return 4523;
				case 150:
					return 4531;
				case 151:
					return 4539;
				case 152:
					return 4547;
				case 153:
					return 4555;
				case 154:
					return 4563;
				case 155:
					return 4571;
				case 156:
					return 4579;
				case 157:
					return 4587;
				case 158:
					return 5480;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				case 160:
					return 5936;
				case 161:
					return 5943;
				case 162:
					return 5950;
				case 163:
					return 5957;
				case 164:
					return 5964;
				case 165:
					return 5971;
				case 166:
					return 5978;
				case 167:
					return 5985;
				case 168:
					return 5992;
				case 169:
					return 5999;
				case 170:
					return 6006;
				case 171:
					return 6013;
				case 172:
					return 6020;
				case 173:
					return 6027;
				case 174:
					return 6034;
				case 175:
					return 6041;
				case 176:
					return 6048;
				case 177:
					return 6055;
				case 178:
					return 6062;
				case 179:
					return 6069;
				case 180:
					return 6076;
				case 181:
					return 6083;
				case 182:
					return 6090;
				case 183:
					return 6097;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				case 185:
					return 6181;
				case 186:
					return 6188;
				case 187:
					return 6195;
				case 188:
					return 6202;
				case 189:
					return 6209;
				case 190:
					return 6216;
				case 191:
					return 6223;
				case 192:
					return 6230;
				case 193:
					return 6237;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				case 195:
					return 6578;
				case 196:
					return 6585;
				case 197:
					return 6592;
				case 198:
					return 6599;
				case 199:
					return 6606;
				case 200:
					return 6613;
				case 201:
					return 6620;
				case 202:
					return 6627;
				case 203:
					return 6634;
				case 204:
					return 6641;
				case 205:
					return 6648;
				case 206:
					return 6655;
				case 207:
					return 6662;
				case 208:
					return 6669;
				case 209:
					return 6676;
				case 210:
					return 6683;
				case 211:
					return 6690;
				case 212:
					return 6697;
				case 213:
					return 6704;
				case 214:
					return 6711;
				case 215:
					return 6718;
				case 216:
					return 6725;
				case 217:
					return 6732;
				case 218:
					return 6739;
				case 219:
					return 6746;
				case 220:
					return 6753;
				case 221:
					return 6760;
				case 222:
					return 6767;
				case 223:
					return 6774;
				case 224:
					return 6781;
				case 225:
					return 6788;
				case 226:
					return 6795;
				case 227:
					return 6802;
				case 228:
					return 6809;
				case 229:
					return 6816;
				case 230:
					return 6823;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				case 232:
					return 7300;
				case 233:
					return 7307;
				case 234:
					return 7314;
				case 235:
					return 7321;
				case 236:
					return 7328;
				case 237:
					return 7335;
				case 238:
					return 7342;
				case 239:
					return 7349;
				case 240:
					return 7356;
				case 241:
					return 7363;
				case 242:
					return 7370;
				case 243:
					return 7377;
				case 244:
					return 7384;
				case 245:
					return 7391;
				case 246:
					return 7398;
				case 247:
					return 7405;
				case 248:
					return 7412;
				case 249:
					return 7419;
				case 250:
					return 7426;
				case 251:
					return 7433;
				case 252:
					return 7440;
				case 253:
					return 7447;
				case 254:
					return 7454;
				case 255:
					return 7461;
				case 256:
					return 7468;
				case 257:
					return 7475;
				case 258:
					return 7482;
				case 259:
					return 7489;
				case 260:
					return 7496;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				case 262:
					return 8023;
				case 263:
					return 8030;
				case 264:
					return 8037;
				case 265:
					return 8044;
				case 266:
					return 8051;
				case 267:
					return 8058;
				case 268:
					return 8065;
				case 269:
					return 8072;
				case 270:
					return 8079;
				case 271:
					return 8540;
				case 272:
					return 8547;
				case 273:
					return 8554;
				case 274:
					return 8561;
				case 275:
					return 8568;
				case 276:
					return 8575;
				case 277:
					return 8582;
				case 278:
					return 8589;
				case 279:
					return 8596;
				case 280:
					return 8603;
				case 281:
					return 8985;
				case 282:
					return 8992;
				case 283:
					return 8999;
				case 284:
					return 9006;
				case 285:
					return 9013;
				case 286:
					return 9020;
				case 287:
					return 9027;
				case 288:
					return 9034;
				case 289:
					return 9041;
				case 290:
					return 9048;
				case 291:
					return 9055;
				case 292:
					return 9061;
				case 293:
					return 9067;
				case 294:
					return 9073;
				case 295:
					return 9080;
				case 296:
					return 9087;
				case 297:
					return 9094;
				case 298:
					return 9101;
				case 299:
					return 9108;
				case 300:
					return 9115;
				case 301:
					return 9122;
				case 302:
					return 9129;
				case 303:
					return 9136;
				case 304:
					return 9143;
				case 305:
					return 9149;
				case 306:
					return 9155;
				default:
					break;
			}
			Jump @26010; //curOff = 18823
			switch (iParam1)
			{
				case 0:
					return 1635;
				case 1:
					return 1642;
				case 2:
					return 1649;
				case 3:
					return 1656;
				case 4:
					return 1663;
				case 5:
					return 1670;
				case 6:
					return 1677;
				case 7:
					return 1684;
				case 8:
					return 1691;
				case 9:
					return 1698;
				case 13:
					return 1723;
				case 14:
					return 1801;
				case 15:
					return 1808;
				case 16:
					return 1815;
				case 17:
					return 1822;
				case 18:
					return 1829;
				case 19:
					return 1836;
				case 20:
					return 1843;
				case 21:
					return 1850;
				case 22:
					return 1857;
				case 26:
					return 2171;
				case 27:
					return 2178;
				case 28:
					return 2185;
				case 29:
					return 2192;
				case 30:
					return 2199;
				case 31:
					return 2206;
				case 32:
					return 2213;
				case 33:
					return 2220;
				case 34:
					return 2227;
				case 35:
					return 2234;
				case 39:
					return 2834;
				case 40:
					return 2841;
				case 41:
					return 2848;
				case 42:
					return 2855;
				case 43:
					return 2862;
				case 44:
					return 2869;
				case 45:
					return 2876;
				case 46:
					return 2883;
				case 47:
					return 2890;
				case 48:
					return 2897;
				case 52:
					return 2958;
				case 53:
					return 2965;
				case 54:
					return 2972;
				case 55:
					return 2979;
				case 56:
					return 2986;
				case 57:
					return 2993;
				case 58:
					return 3000;
				case 59:
					return 3007;
				case 60:
					return 3014;
				case 61:
					return 3021;
				case 65:
					return 3242;
				case 66:
					return 3250;
				case 67:
					return 3258;
				case 68:
					return 3266;
				case 69:
					return 3274;
				case 70:
					return 3282;
				case 71:
					return 3290;
				case 72:
					return 3298;
				case 73:
					return 3306;
				case 74:
					return 3314;
				case 75:
					return 3322;
				case 76:
					return 3330;
				case 77:
					return 3338;
				case 78:
					return 3346;
				case 79:
					return 3354;
				case 80:
					return 3362;
				case 81:
					return 3370;
				case 82:
					return 3378;
				case 83:
					return 3386;
				case 84:
					return 3394;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				case 89:
					return 4046;
				case 90:
					return 4054;
				case 91:
					return 4062;
				case 92:
					return 4070;
				case 93:
					return 4078;
				case 94:
					return 4086;
				case 95:
					return 4094;
				case 96:
					return 4102;
				case 97:
					return 4110;
				case 98:
					return 4118;
				case 99:
					return 4126;
				case 100:
					return 4134;
				case 101:
					return 4142;
				case 102:
					return 4150;
				case 103:
					return 4158;
				case 104:
					return 4166;
				case 105:
					return 4174;
				case 106:
					return 4182;
				case 107:
					return 4190;
				case 108:
					return 4198;
				case 109:
					return 4206;
				case 110:
					return 4214;
				case 111:
					return 4222;
				case 112:
					return 4230;
				case 113:
					return 4238;
				case 114:
					return 4246;
				case 115:
					return 4254;
				case 116:
					return 4262;
				case 117:
					return 4270;
				case 118:
					return 4278;
				case 119:
					return 4286;
				case 120:
					return 4294;
				case 121:
					return 4302;
				case 122:
					return 4310;
				case 123:
					return 4318;
				case 124:
					return 4326;
				case 125:
					return 4334;
				case 126:
					return 4342;
				case 127:
					return 4350;
				case 128:
					return 4358;
				case 129:
					return 4366;
				case 130:
					return 4374;
				case 131:
					return 4382;
				case 132:
					return 4390;
				case 133:
					return 4398;
				case 134:
					return 4406;
				case 135:
					return 4414;
				case 136:
					return 4422;
				case 137:
					return 4430;
				case 138:
					return 4438;
				case 139:
					return 4446;
				case 140:
					return 4454;
				case 141:
					return 4462;
				case 142:
					return 4470;
				case 143:
					return 4478;
				case 144:
					return 4486;
				case 145:
					return 4494;
				case 146:
					return 4502;
				case 147:
					return 4510;
				case 148:
					return 4518;
				case 149:
					return 4526;
				case 150:
					return 4534;
				case 151:
					return 4542;
				case 152:
					return 4550;
				case 153:
					return 4558;
				case 154:
					return 4566;
				case 155:
					return 4574;
				case 156:
					return 4582;
				case 157:
					return 4590;
				case 158:
					return 5483;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				case 160:
					return 5938;
				case 161:
					return 5945;
				case 162:
					return 5952;
				case 163:
					return 5959;
				case 164:
					return 5966;
				case 165:
					return 5973;
				case 166:
					return 5980;
				case 167:
					return 5987;
				case 168:
					return 5994;
				case 169:
					return 6001;
				case 170:
					return 6008;
				case 171:
					return 6015;
				case 172:
					return 6022;
				case 173:
					return 6029;
				case 174:
					return 6036;
				case 175:
					return 6043;
				case 176:
					return 6050;
				case 177:
					return 6057;
				case 178:
					return 6064;
				case 179:
					return 6071;
				case 180:
					return 6078;
				case 181:
					return 6085;
				case 182:
					return 6092;
				case 183:
					return 6099;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				case 185:
					return 6183;
				case 186:
					return 6190;
				case 187:
					return 6197;
				case 188:
					return 6204;
				case 189:
					return 6211;
				case 190:
					return 6218;
				case 191:
					return 6225;
				case 192:
					return 6232;
				case 193:
					return 6239;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				case 195:
					return 6580;
				case 196:
					return 6587;
				case 197:
					return 6594;
				case 198:
					return 6601;
				case 199:
					return 6608;
				case 200:
					return 6615;
				case 201:
					return 6622;
				case 202:
					return 6629;
				case 203:
					return 6636;
				case 204:
					return 6643;
				case 205:
					return 6650;
				case 206:
					return 6657;
				case 207:
					return 6664;
				case 208:
					return 6671;
				case 209:
					return 6678;
				case 210:
					return 6685;
				case 211:
					return 6692;
				case 212:
					return 6699;
				case 213:
					return 6706;
				case 214:
					return 6713;
				case 215:
					return 6720;
				case 216:
					return 6727;
				case 217:
					return 6734;
				case 218:
					return 6741;
				case 219:
					return 6748;
				case 220:
					return 6755;
				case 221:
					return 6762;
				case 222:
					return 6769;
				case 223:
					return 6776;
				case 224:
					return 6783;
				case 225:
					return 6790;
				case 226:
					return 6797;
				case 227:
					return 6804;
				case 228:
					return 6811;
				case 229:
					return 6818;
				case 230:
					return 6825;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				case 232:
					return 7302;
				case 233:
					return 7309;
				case 234:
					return 7316;
				case 235:
					return 7323;
				case 236:
					return 7330;
				case 237:
					return 7337;
				case 238:
					return 7344;
				case 239:
					return 7351;
				case 240:
					return 7358;
				case 241:
					return 7365;
				case 242:
					return 7372;
				case 243:
					return 7379 /* GXTEntry: "1100000" */;
				case 244:
					return 7386;
				case 245:
					return 7393;
				case 246:
					return 7400;
				case 247:
					return 7407;
				case 248:
					return 7414;
				case 249:
					return 7421;
				case 250:
					return 7428;
				case 251:
					return 7435;
				case 252:
					return 7442;
				case 253:
					return 7449;
				case 254:
					return 7456;
				case 255:
					return 7463;
				case 256:
					return 7470;
				case 257:
					return 7477;
				case 258:
					return 7484;
				case 259:
					return 7491;
				case 260:
					return 7498;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				case 262:
					return 8025;
				case 263:
					return 8032;
				case 264:
					return 8039;
				case 265:
					return 8046;
				case 266:
					return 8053;
				case 267:
					return 8060;
				case 268:
					return 8067;
				case 269:
					return 8074;
				case 270:
					return 8081;
				case 271:
					return 8542;
				case 272:
					return 8549;
				case 273:
					return 8556;
				case 274:
					return 8563;
				case 275:
					return 8570;
				case 276:
					return 8577;
				case 277:
					return 8584;
				case 278:
					return 8591;
				case 279:
					return 8598;
				case 280:
					return 8605;
				case 281:
					return 8987;
				case 282:
					return 8994;
				case 283:
					return 9001;
				case 284:
					return 9008;
				case 285:
					return 9015;
				case 286:
					return 9022;
				case 287:
					return 9029;
				case 288:
					return 9036;
				case 289:
					return 9043;
				case 290:
					return 9050;
				case 294:
					return 9075;
				case 295:
					return 9082;
				case 296:
					return 9089;
				case 297:
					return 9096;
				case 298:
					return 9103;
				case 299:
					return 9110;
				case 300:
					return 9117;
				case 301:
					return 9124;
				case 302:
					return 9131;
				case 303:
					return 9138;
				default:
					break;
			}
			Jump @26010; //curOff = 22271
			switch (iParam1)
			{
				case 0:
					return 1634;
				case 1:
					return 1641;
				case 2:
					return 1648;
				case 3:
					return 1655;
				case 4:
					return 1662;
				case 5:
					return 1669;
				case 6:
					return 1676;
				case 7:
					return 1683;
				case 8:
					return 1690;
				case 9:
					return 1697;
				case 10:
					return 1704;
				case 11:
					return 1710;
				case 12:
					return 1716;
				case 13:
					return 1722;
				case 14:
					return 1800;
				case 15:
					return 1807;
				case 16:
					return 1814;
				case 17:
					return 1821;
				case 18:
					return 1828;
				case 19:
					return 1835;
				case 20:
					return 1842;
				case 21:
					return 1849;
				case 22:
					return 1856;
				case 23:
					return 1863;
				case 24:
					return 1869;
				case 25:
					return 1875;
				case 26:
					return 2170;
				case 27:
					return 2177;
				case 28:
					return 2184;
				case 29:
					return 2191;
				case 30:
					return 2198;
				case 31:
					return 2205;
				case 32:
					return 2212;
				case 33:
					return 2219;
				case 34:
					return 2226;
				case 35:
					return 2233;
				case 36:
					return 2240;
				case 37:
					return 2246;
				case 38:
					return 2252;
				case 39:
					return 2833;
				case 40:
					return 2840;
				case 41:
					return 2847;
				case 42:
					return 2854;
				case 43:
					return 2861;
				case 44:
					return 2868;
				case 45:
					return 2875;
				case 46:
					return 2882;
				case 47:
					return 2889;
				case 48:
					return 2896;
				case 49:
					return 2903;
				case 50:
					return 2909;
				case 51:
					return 2915;
				case 52:
					return 2957;
				case 53:
					return 2964;
				case 54:
					return 2971;
				case 55:
					return 2978;
				case 56:
					return 2985;
				case 57:
					return 2992;
				case 58:
					return 2999;
				case 59:
					return 3006;
				case 60:
					return 3013;
				case 61:
					return 3020;
				case 62:
					return 3027;
				case 63:
					return 3033;
				case 64:
					return 3039;
				case 65:
					return 3240;
				case 66:
					return 3248;
				case 67:
					return 3256;
				case 68:
					return 3264;
				case 69:
					return 3272;
				case 70:
					return 3280;
				case 71:
					return 3288;
				case 72:
					return 3296;
				case 73:
					return 3304;
				case 74:
					return 3312;
				case 75:
					return 3320;
				case 76:
					return 3328;
				case 77:
					return 3337;
				case 78:
					return 3345;
				case 79:
					return 3352;
				case 80:
					return 3360;
				case 81:
					return 3368;
				case 82:
					return 3376;
				case 83:
					return 3384;
				case 84:
					return 3392;
				case 85:
					return 3400;
				case 86:
					return 3407;
				case 87:
					return 3414;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				case 89:
					return 4044;
				case 90:
					return 4052;
				case 91:
					return 4060;
				case 92:
					return 4068;
				case 93:
					return 4076;
				case 94:
					return 4084;
				case 95:
					return 4092;
				case 96:
					return 4100;
				case 97:
					return 4108;
				case 98:
					return 4116;
				case 99:
					return 4124;
				case 100:
					return 4133;
				case 101:
					return 4141;
				case 102:
					return 4148;
				case 103:
					return 4156;
				case 104:
					return 4164;
				case 105:
					return 4172;
				case 106:
					return 4180;
				case 107:
					return 4188;
				case 108:
					return 4196;
				case 109:
					return 4204;
				case 110:
					return 4212;
				case 111:
					return 4220;
				case 112:
					return 4228;
				case 113:
					return 4236;
				case 114:
					return 4244;
				case 115:
					return 4252;
				case 116:
					return 4260;
				case 117:
					return 4268;
				case 118:
					return 4276;
				case 119:
					return 4284;
				case 120:
					return 4293;
				case 121:
					return 4301;
				case 122:
					return 4308;
				case 123:
					return 4316;
				case 124:
					return 4324;
				case 125:
					return 4332;
				case 126:
					return 4340;
				case 127:
					return 4348;
				case 128:
					return 4356;
				case 129:
					return 4364;
				case 130:
					return 4372;
				case 131:
					return 4380;
				case 132:
					return 4388;
				case 133:
					return 4396;
				case 134:
					return 4404;
				case 135:
					return 4412;
				case 136:
					return 4420;
				case 137:
					return 4428;
				case 138:
					return 4436;
				case 139:
					return 4444;
				case 140:
					return 4453;
				case 141:
					return 4461;
				case 142:
					return 4468;
				case 143:
					return 4476;
				case 144:
					return 4484;
				case 145:
					return 4492;
				case 146:
					return 4500;
				case 147:
					return 4508;
				case 148:
					return 4516;
				case 149:
					return 4524;
				case 150:
					return 4532;
				case 151:
					return 4540;
				case 152:
					return 4548;
				case 153:
					return 4556;
				case 154:
					return 4564;
				case 155:
					return 4572;
				case 156:
					return 4580;
				case 157:
					return 4588;
				case 158:
					return 5481;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				case 160:
					return 5937;
				case 161:
					return 5944;
				case 162:
					return 5951;
				case 163:
					return 5958;
				case 164:
					return 5965;
				case 165:
					return 5972;
				case 166:
					return 5979;
				case 167:
					return 5986;
				case 168:
					return 5993;
				case 169:
					return 6000;
				case 170:
					return 6007;
				case 171:
					return 6014;
				case 172:
					return 6021;
				case 173:
					return 6028;
				case 174:
					return 6035;
				case 175:
					return 6042;
				case 176:
					return 6049;
				case 177:
					return 6056;
				case 178:
					return 6063;
				case 179:
					return 6070;
				case 180:
					return 6077;
				case 181:
					return 6084;
				case 182:
					return 6091;
				case 183:
					return 6098;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				case 185:
					return 6182;
				case 186:
					return 6189;
				case 187:
					return 6196;
				case 188:
					return 6203;
				case 189:
					return 6210;
				case 190:
					return 6217;
				case 191:
					return 6224;
				case 192:
					return 6231;
				case 193:
					return 6238;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				case 195:
					return 6579;
				case 196:
					return 6586;
				case 197:
					return 6593;
				case 198:
					return 6600;
				case 199:
					return 6607;
				case 200:
					return 6614;
				case 201:
					return 6621;
				case 202:
					return 6628;
				case 203:
					return 6635;
				case 204:
					return 6642;
				case 205:
					return 6649;
				case 206:
					return 6656;
				case 207:
					return 6663;
				case 208:
					return 6670;
				case 209:
					return 6677;
				case 210:
					return 6684;
				case 211:
					return 6691;
				case 212:
					return 6698;
				case 213:
					return 6705;
				case 214:
					return 6712;
				case 215:
					return 6719;
				case 216:
					return 6726;
				case 217:
					return 6733;
				case 218:
					return 6740;
				case 219:
					return 6747;
				case 220:
					return 6754;
				case 221:
					return 6761;
				case 222:
					return 6768;
				case 223:
					return 6775;
				case 224:
					return 6782;
				case 225:
					return 6789;
				case 226:
					return 6796;
				case 227:
					return 6803;
				case 228:
					return 6810;
				case 229:
					return 6817;
				case 230:
					return 6824;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				case 232:
					return 7301;
				case 233:
					return 7308;
				case 234:
					return 7315;
				case 235:
					return 7322;
				case 236:
					return 7329;
				case 237:
					return 7336;
				case 238:
					return 7343;
				case 239:
					return 7350;
				case 240:
					return 7357;
				case 241:
					return 7364;
				case 242:
					return 7371;
				case 243:
					return 7378;
				case 244:
					return 7385;
				case 245:
					return 7392;
				case 246:
					return 7399;
				case 247:
					return 7406;
				case 248:
					return 7413;
				case 249:
					return 7420;
				case 250:
					return 7427;
				case 251:
					return 7434;
				case 252:
					return 7441;
				case 253:
					return 7448;
				case 254:
					return 7455;
				case 255:
					return 7462;
				case 256:
					return 7469;
				case 257:
					return 7476;
				case 258:
					return 7483;
				case 259:
					return 7490;
				case 260:
					return 7497;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				case 262:
					return 8024;
				case 263:
					return 8031;
				case 264:
					return 8038;
				case 265:
					return 8045;
				case 266:
					return 8052;
				case 267:
					return 8059;
				case 268:
					return 8066;
				case 269:
					return 8073;
				case 270:
					return 8080;
				case 271:
					return 8541;
				case 272:
					return 8548;
				case 273:
					return 8555;
				case 274:
					return 8562;
				case 275:
					return 8569;
				case 276:
					return 8576;
				case 277:
					return 8583;
				case 278:
					return 8590;
				case 279:
					return 8597;
				case 280:
					return 8604;
				case 281:
					return 8986;
				case 282:
					return 8993;
				case 283:
					return 9000;
				case 284:
					return 9007;
				case 285:
					return 9014;
				case 286:
					return 9021;
				case 287:
					return 9028;
				case 288:
					return 9035;
				case 289:
					return 9042;
				case 290:
					return 9049;
				case 291:
					return 9056;
				case 292:
					return 9062;
				case 293:
					return 9068;
				case 294:
					return 9074;
				case 295:
					return 9081;
				case 296:
					return 9088;
				case 297:
					return 9095;
				case 298:
					return 9102;
				case 299:
					return 9109;
				case 300:
					return 9116;
				case 301:
					return 9123;
				case 302:
					return 9130;
				case 303:
					return 9137;
				case 304:
					return 9144;
				case 305:
					return 9150;
				case 306:
					return 9156;
				default:
					break;
			}
			return 1629;
		}

int func_365(int iParam0)
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30154 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30154 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_366(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21979 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24565 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26329 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	return 0;
}

int func_366(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 8:
			return 108;
		case 9:
			return 128;
		case 10:
			return 148;
		case 11:
			return 156;
		case 6:
			return 75;
		case 7:
			return 88;
		case 5:
			return -1;
		case 12:
			return 179;
		case 13:
			return 186;
		case 14:
			return 192;
		case 15:
			return 202;
		case 16:
			return 212;
		case 17:
			return 222;
		case 18:
			return 236;
		case 19:
			return 246;
		case 20:
			return 256;
		case 21:
			return 268;
		case 22:
			return 278;
		case 23:
			return 294;
		case 24:
			return 307;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_375(iParam0);
		return func_374(iVar0);
	}
	return (func_367(iParam0, -1) * iParam0 + 1);
}

int func_367(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_370(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_369(iParam1))
			{
				return 0;
			}
			else if (func_368(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049922[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049922[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049922[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
		case 5:
			return 0;
		case 6:
			return 10;
		case 8:
		case 9:
		case 10:
			return 20;
		case 11:
			return 8;
		case 12:
			return 20;
		case 13:
			return 7;
		case 14:
			return 1;
		case 15:
		case 16:
		case 17:
			return 10;
		case 18:
		case 19:
		case 20:
			return 10;
		case 21:
			return 10;
		case 22:
			return 10;
	}
	return 0;
}

bool func_368(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return true;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	return false;
}

bool func_369(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
	}
	return false;
}

bool func_370(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_371(UNK_0xD803B885F5E47A62(), 0);
	}
	if (bParam1)
	{
		if (func_371(UNK_0xD803B885F5E47A62(), 0))
		{
			return false;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return true;
		}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return true;
	}
	return false;
}

bool func_371(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_97())
	{
		if (!func_373(Global_1590373))
		{
			return false;
		}
		if (bParam1)
		{
			if (UNK_0xD803B885F5E47A62() != Global_1590373)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[Global_1590373 /*421*/].f_195, 24) || func_372(Global_1590373))
				{
					return true;
				}
			}
		}
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_195, 24);
}

bool func_372(int iParam0)
{
	if (iParam0 != func_97())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_195, 9);
	}
	return false;
}

bool func_373(int iParam0)
{
	if (iParam0 != func_97())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_351, 2);
	}
	return false;
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		case 2:
			return 224;
		case 1:
			return 227;
		default:
			break;
	}
	return -1;
}

int func_375(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_376(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30114 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30114 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_366(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21905 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24505 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26309 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28029 + iParam0) - 271);
	}
	return 0;
}

int func_377(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30094 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30094 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_366(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21868 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24475 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26299 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28019 + iParam0) - 271);
	}
	return 0;
}

int func_378(int iParam0)
{
	int iVar0;

	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return (29534 + ((iParam0 - 281) * iVar0));
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (29774 + ((iParam0 - 294) * iVar0));
	}
	else if (iParam0 < func_366(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	else if (iParam0 < 231)
	{
		return (19019 + ((iParam0 - 194) * iVar0));
	}
	else if (iParam0 < 261)
	{
		return (22195 + ((iParam0 - 231) * iVar0));
	}
	else if (iParam0 < 271)
	{
		return (25539 + ((iParam0 - 261) * iVar0));
	}
	else if (iParam0 < 281)
	{
		return (27259 + ((iParam0 - 271) * iVar0));
	}
	return 0;
}

bool func_379(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
			return true;
	}
	return false;
}

int func_380(int iParam0, int iParam1)
{
	int iVar0;

	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_366(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
		else if (iParam1 < 271)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (26229 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (26230 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (26231 + (iParam1 - 261) * 3);
			}
		}
		else if (iParam1 < 281)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (27949 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (27950 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (27951 + (iParam1 - 271) * 3);
			}
		}
		else if (iParam1 < 291)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29474 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29475 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29476 + (iParam1 - 281) * 3);
			}
		}
		else if (iParam1 < 304)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29504 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29505 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29506 + (iParam1 - 294) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_366(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_366(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_366(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	else if (iParam1 < 271)
	{
		iVar0 = (25779 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 261) * (1456 - 1411)));
	}
	else if (iParam1 < 281)
	{
		iVar0 = (27499 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 271) * (1456 - 1411)));
	}
	else if (iParam1 < 291)
	{
		iVar0 = (28484 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 281) * (1456 - 1411)));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		iVar0 = ((iParam1 - 291) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 28934;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 28935;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 28936;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 28937;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 28938;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 28939;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 28940;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 28941;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 28942;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 28943;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 28944;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 28945;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 28946;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 28947;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 28948;
		}
	}
	else if (iParam1 < 304)
	{
		iVar0 = (28979 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 294) * (1456 - 1411)));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		iVar0 = ((iParam1 - 304) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 29429;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 29430;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 29431;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 29432;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 29433;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 29434;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 29435;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 29436;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 29437;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 29438;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 29439;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 29440;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 29441;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 29442;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 29443;
		}
	}
	return iVar0;
}

int func_381(var uParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar6;
	var uVar7;
	var uVar8;

	iVar0 = Global_2097152[func_191() /*10930*/].f_6086.f_62;
	if ((*uParam0 == Global_1323615[iVar0 /*141*/].f_66 && uParam0->f_36) && uParam0->f_35)
	{
		Global_1323615[iVar0 /*141*/].f_1 = { uParam0->f_28 };
		Global_1323615[iVar0 /*141*/] = uParam0->f_32;
		if (func_382(uParam0->f_1, &uVar2, &uVar1, &uVar6, &uVar7) && *uParam0 != joaat("SOVEREIGN"))
		{
			UNK_0x0674E58A79778E99(&(Global_1323615[iVar0 /*141*/].f_77), 13);
			Global_1323615[iVar0 /*141*/].f_5 = uVar6;
			Global_1323615[iVar0 /*141*/].f_7 = uVar7;
			Global_1323615[iVar0 /*141*/].f_137 = uVar1;
		}
		if (func_382(uParam0->f_2, &uVar2, &uVar1, &uVar6, &uVar7) && *uParam0 != joaat("SOVEREIGN"))
		{
			UNK_0x0674E58A79778E99(&(Global_1323615[iVar0 /*141*/].f_77), 12);
			Global_1323615[iVar0 /*141*/].f_6 = uVar6;
			Global_1323615[iVar0 /*141*/].f_138 = uVar1;
		}
		if (uParam0->f_18)
		{
			UNK_0x5D96D8530B3D0904(&(Global_1323615[iVar0 /*141*/].f_77), 9);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_1323615[iVar0 /*141*/].f_77), 9);
		}
		Global_1323615[iVar0 /*141*/].f_62 = uParam0->f_6;
		Global_1323615[iVar0 /*141*/].f_63 = uParam0->f_7;
		Global_1323615[iVar0 /*141*/].f_64 = uParam0->f_8;
		if (uParam0->f_5 == -1)
		{
			Global_1323615[iVar0 /*141*/].f_65 = 0;
		}
		else
		{
			Global_1323615[iVar0 /*141*/].f_65 = uParam0->f_5;
		}
		if (uParam0->f_13 != -1)
		{
			Global_1323615[iVar0 /*141*/].f_9[4] = uParam0->f_13;
		}
		if (uParam0->f_9 != -1)
		{
			Global_1323615[iVar0 /*141*/].f_9[11] = uParam0->f_9;
		}
		if (uParam0->f_10 != -1)
		{
			Global_1323615[iVar0 /*141*/].f_9[12] = uParam0->f_10;
		}
		if (uParam0->f_16 != -1 && uParam0->f_16 < 9)
		{
			Global_1323615[iVar0 /*141*/].f_9[14] = uParam0->f_16;
		}
		if (uParam0->f_14 != -1)
		{
			Global_1323615[iVar0 /*141*/].f_9[15] = uParam0->f_14;
		}
		if (uParam0->f_15 != -1)
		{
			Global_1323615[iVar0 /*141*/].f_9[16] = uParam0->f_15;
		}
		if (uParam0->f_11 != -1 && func_211(uParam0->f_12))
		{
			Global_1323615[iVar0 /*141*/].f_9[23] = uParam0->f_11;
			Global_1323615[iVar0 /*141*/].f_69 = -1;
		}
		if (uParam0->f_19 != -1)
		{
			Global_1323615[iVar0 /*141*/].f_9[18] = uParam0->f_19;
		}
		if (uParam0->f_17 != -1)
		{
			Global_1323615[iVar0 /*141*/].f_9[22] = uParam0->f_17;
		}
		if (uParam0->f_20 != -1)
		{
			Global_1323615[iVar0 /*141*/].f_9[20] = uParam0->f_20;
		}
		if (func_442(iVar0, &uVar8))
		{
			if (bParam1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_1323615[iVar0 /*141*/].f_102), 25);
				UNK_0x0674E58A79778E99(&(Global_1323615[iVar0 /*141*/].f_102), 26);
			}
		}
		return 1;
	}
	return 0;
}

bool func_382(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	*iParam2 = -1;
	*iParam3 = -1;
	*iParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*iParam2 = 3;
			*iParam3 = 118;
			*iParam4 = 3;
			break;
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*iParam2 = 0;
			*iParam3 = 147;
			*iParam4 = 4;
			break;
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 96;
			*iParam4 = 0;
			break;
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 71;
			*iParam4 = 145;
			break;
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*iParam2 = 0;
			*iParam3 = 135;
			*iParam4 = 135;
			break;
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*iParam2 = 0;
			*iParam3 = 29;
			*iParam4 = 28;
			break;
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 64;
			*iParam4 = 68;
			break;
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 70;
			*iParam4 = 0;
			break;
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 50;
			*iParam4 = 0;
			break;
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 2;
			*iParam3 = 55;
			*iParam4 = 0;
			break;
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*iParam2 = 1;
			*iParam3 = 89;
			*iParam4 = 0;
			break;
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 1;
			*iParam3 = 38;
			*iParam4 = 0;
			break;
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*iParam2 = 0;
			*iParam3 = 37;
			*iParam4 = 106;
			break;
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 4;
			*iParam4 = 111;
			break;
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*iParam2 = 4;
			*iParam3 = 120;
			*iParam4 = 0;
			break;
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 1;
			*iParam3 = 111;
			*iParam4 = 0;
			break;
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 10;
			break;
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*iParam2 = 0;
			*iParam3 = 1;
			*iParam4 = 5;
			break;
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*iParam2 = 0;
			*iParam3 = 11;
			*iParam4 = 2;
			break;
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*iParam2 = 0;
			*iParam3 = 2;
			*iParam4 = 5;
			break;
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 3;
			*iParam4 = 6;
			break;
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 5;
			*iParam4 = 111;
			break;
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*iParam2 = 0;
			*iParam3 = 6;
			*iParam4 = 4;
			break;
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 7;
			*iParam4 = 5;
			break;
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 8;
			*iParam4 = 5;
			break;
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 9;
			*iParam4 = 7;
			break;
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 7;
			break;
		case 27:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 0;
			*iParam3 = 27;
			*iParam4 = 36;
			break;
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*iParam2 = 0;
			*iParam3 = 28;
			*iParam4 = 28;
			break;
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*iParam2 = 0;
			*iParam3 = 150;
			*iParam4 = 42;
			break;
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*iParam2 = 0;
			*iParam3 = 30;
			*iParam4 = 36;
			break;
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*iParam2 = 0;
			*iParam3 = 31;
			*iParam4 = 27;
			break;
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*iParam2 = 0;
			*iParam3 = 32;
			*iParam4 = 25;
			break;
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*iParam2 = 0;
			*iParam3 = 33;
			*iParam4 = 47;
			break;
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*iParam2 = 0;
			*iParam3 = 34;
			*iParam4 = 47;
			break;
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*iParam2 = 0;
			*iParam3 = 143;
			*iParam4 = 31;
			break;
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*iParam2 = 0;
			*iParam3 = 35;
			*iParam4 = 25;
			break;
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*iParam2 = 0;
			*iParam3 = 137;
			*iParam4 = 3;
			break;
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*iParam2 = 0;
			*iParam3 = 136;
			*iParam4 = 5;
			break;
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*iParam2 = 0;
			*iParam3 = 36;
			*iParam4 = 26;
			break;
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 0;
			*iParam3 = 38;
			*iParam4 = 37;
			break;
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*iParam2 = 0;
			*iParam3 = 138;
			*iParam4 = 89;
			break;
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*iParam2 = 0;
			*iParam3 = 90;
			*iParam4 = 102;
			break;
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 0;
			*iParam3 = 88;
			*iParam4 = 88;
			break;
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*iParam2 = 0;
			*iParam3 = 89;
			*iParam4 = 88;
			break;
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*iParam2 = 0;
			*iParam3 = 91;
			*iParam4 = 91;
			break;
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 49;
			*iParam4 = 52;
			break;
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 50;
			*iParam4 = 53;
			break;
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 51;
			*iParam4 = 66;
			break;
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 52;
			*iParam4 = 59;
			break;
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 53;
			*iParam4 = 59;
			break;
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 54;
			*iParam4 = 60;
			break;
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 92;
			*iParam4 = 92;
			break;
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 141;
			*iParam4 = 73;
			break;
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 61;
			*iParam4 = 63;
			break;
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 62;
			*iParam4 = 68;
			break;
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 63;
			*iParam4 = 87;
			break;
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 65;
			*iParam4 = 87;
			break;
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 66;
			*iParam4 = 60;
			break;
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 67;
			*iParam4 = 67;
			break;
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 68;
			*iParam4 = 68;
			break;
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 69;
			*iParam4 = 74;
			break;
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 73;
			*iParam4 = 73;
			break;
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 70;
			*iParam4 = 70;
			break;
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 74;
			*iParam4 = 74;
			break;
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 96;
			*iParam4 = 95;
			break;
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 101;
			*iParam4 = 95;
			break;
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 95;
			*iParam4 = 97;
			break;
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 94;
			*iParam4 = 104;
			break;
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 97;
			*iParam4 = 98;
			break;
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 103;
			*iParam4 = 104;
			break;
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 104;
			*iParam4 = 104;
			break;
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 98;
			*iParam4 = 95;
			break;
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 100;
			*iParam4 = 100;
			break;
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 102;
			*iParam4 = 105;
			break;
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 99;
			*iParam4 = 106;
			break;
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 105;
			*iParam4 = 105;
			break;
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 106;
			*iParam4 = 106;
			break;
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 72;
			*iParam4 = 64;
			break;
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 146;
			*iParam4 = 145;
			break;
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 145;
			*iParam4 = 74;
			break;
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*iParam2 = 0;
			*iParam3 = 107;
			*iParam4 = 107;
			break;
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 0;
			*iParam3 = 111;
			*iParam4 = 0;
			break;
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*iParam2 = 0;
			*iParam3 = 112;
			*iParam4 = 0;
			break;
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			break;
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*iParam2 = 1;
			*iParam3 = 147;
			*iParam4 = 0;
			break;
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*iParam2 = 1;
			*iParam3 = 1;
			*iParam4 = 0;
			break;
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*iParam2 = 1;
			*iParam3 = 11;
			*iParam4 = 0;
			break;
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*iParam2 = 1;
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 3;
			*iParam4 = 2;
			break;
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 4;
			*iParam4 = 4;
			break;
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 5;
			*iParam4 = 5;
			break;
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*iParam2 = 1;
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 7;
			*iParam4 = 0;
			break;
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 8;
			*iParam4 = 0;
			break;
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 9;
			*iParam4 = 0;
			break;
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*iParam2 = 1;
			*iParam3 = 10;
			*iParam4 = 0;
			break;
		case 97:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 1;
			*iParam3 = 27;
			*iParam4 = 0;
			break;
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*iParam2 = 1;
			*iParam3 = 28;
			*iParam4 = 0;
			break;
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*iParam2 = 1;
			*iParam3 = 29;
			*iParam4 = 0;
			break;
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*iParam2 = 1;
			*iParam3 = 150;
			*iParam4 = 0;
			break;
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*iParam2 = 1;
			*iParam3 = 30;
			*iParam4 = 0;
			break;
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*iParam2 = 1;
			*iParam3 = 31;
			*iParam4 = 0;
			break;
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*iParam2 = 1;
			*iParam3 = 32;
			*iParam4 = 0;
			break;
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*iParam2 = 1;
			*iParam3 = 33;
			*iParam4 = 0;
			break;
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*iParam2 = 1;
			*iParam3 = 34;
			*iParam4 = 0;
			break;
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*iParam2 = 1;
			*iParam3 = 143;
			*iParam4 = 0;
			break;
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*iParam2 = 1;
			*iParam3 = 35;
			*iParam4 = 0;
			break;
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*iParam2 = 1;
			*iParam3 = 135;
			*iParam4 = 0;
			break;
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*iParam2 = 1;
			*iParam3 = 137;
			*iParam4 = 0;
			break;
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*iParam2 = 1;
			*iParam3 = 136;
			*iParam4 = 0;
			break;
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*iParam2 = 1;
			*iParam3 = 36;
			*iParam4 = 0;
			break;
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*iParam2 = 1;
			*iParam3 = 138;
			*iParam4 = 0;
			break;
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*iParam2 = 1;
			*iParam3 = 99;
			*iParam4 = 99;
			break;
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*iParam2 = 1;
			*iParam3 = 90;
			*iParam4 = 102;
			break;
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 1;
			*iParam3 = 88;
			*iParam4 = 0;
			break;
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*iParam2 = 1;
			*iParam3 = 91;
			*iParam4 = 0;
			break;
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 49;
			*iParam4 = 0;
			break;
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 51;
			*iParam4 = 0;
			break;
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 52;
			*iParam4 = 0;
			break;
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 53;
			*iParam4 = 0;
			break;
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 54;
			*iParam4 = 0;
			break;
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 92;
			*iParam4 = 0;
			break;
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 141;
			*iParam4 = 0;
			break;
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 61;
			*iParam4 = 0;
			break;
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 62;
			*iParam4 = 0;
			break;
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 63;
			*iParam4 = 0;
			break;
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 64;
			*iParam4 = 0;
			break;
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 65;
			*iParam4 = 0;
			break;
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 66;
			*iParam4 = 0;
			break;
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 67;
			*iParam4 = 0;
			break;
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 68;
			*iParam4 = 0;
			break;
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 69;
			*iParam4 = 0;
			break;
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 73;
			*iParam4 = 0;
			break;
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 74;
			*iParam4 = 0;
			break;
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 101;
			*iParam4 = 0;
			break;
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 95;
			*iParam4 = 0;
			break;
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 94;
			*iParam4 = 0;
			break;
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 97;
			*iParam4 = 0;
			break;
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 103;
			*iParam4 = 0;
			break;
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 104;
			*iParam4 = 0;
			break;
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 98;
			*iParam4 = 0;
			break;
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 100;
			*iParam4 = 0;
			break;
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 102;
			*iParam4 = 0;
			break;
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 99;
			*iParam4 = 0;
			break;
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 105;
			*iParam4 = 0;
			break;
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 106;
			*iParam4 = 0;
			break;
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 71;
			*iParam4 = 0;
			break;
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 72;
			*iParam4 = 0;
			break;
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 142;
			*iParam4 = 0;
			break;
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 145;
			*iParam4 = 0;
			break;
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*iParam2 = 1;
			*iParam3 = 107;
			*iParam4 = 0;
			break;
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*iParam2 = 1;
			*iParam3 = 112;
			*iParam4 = 0;
			break;
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 2;
			*iParam3 = 12;
			*iParam4 = 0;
			break;
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*iParam2 = 2;
			*iParam3 = 13;
			*iParam4 = 0;
			break;
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*iParam2 = 2;
			*iParam3 = 14;
			*iParam4 = 0;
			break;
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 2;
			*iParam3 = 131;
			*iParam4 = 0;
			break;
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 2;
			*iParam3 = 83;
			*iParam4 = 0;
			break;
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 2;
			*iParam3 = 82;
			*iParam4 = 0;
			break;
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 2;
			*iParam3 = 84;
			*iParam4 = 0;
			break;
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 2;
			*iParam3 = 149;
			*iParam4 = 0;
			break;
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*iParam2 = 2;
			*iParam3 = 148;
			*iParam4 = 0;
			break;
		case 162:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 2;
			*iParam3 = 39;
			*iParam4 = 0;
			break;
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*iParam2 = 2;
			*iParam3 = 40;
			*iParam4 = 0;
			break;
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 2;
			*iParam3 = 41;
			*iParam4 = 0;
			break;
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 2;
			*iParam3 = 42;
			*iParam4 = 0;
			break;
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*iParam2 = 2;
			*iParam3 = 128;
			*iParam4 = 0;
			break;
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*iParam2 = 2;
			*iParam3 = 151;
			*iParam4 = 0;
			break;
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*iParam2 = 2;
			*iParam3 = 155;
			*iParam4 = 0;
			break;
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*iParam2 = 2;
			*iParam3 = 152;
			*iParam4 = 0;
			break;
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*iParam2 = 2;
			*iParam3 = 153;
			*iParam4 = 0;
			break;
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*iParam2 = 2;
			*iParam3 = 154;
			*iParam4 = 0;
			break;
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*iParam2 = 3;
			*iParam3 = 117;
			*iParam4 = 18;
			break;
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*iParam2 = 3;
			*iParam3 = 119;
			*iParam4 = 5;
			break;
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*iParam2 = 3;
			*iParam3 = 158;
			*iParam4 = 160;
			break;
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*iParam2 = 3;
			*iParam3 = 159;
			*iParam4 = 160;
			break;
	}
	return *iParam2 != -1;
}

bool func_383(var uParam0, int iParam1)
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
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;

	iVar0 = 0;
	iVar2 = Global_1323615[iParam1 /*141*/].f_5;
	iVar3 = Global_1323615[iParam1 /*141*/].f_6;
	iVar4 = Global_1323615[iParam1 /*141*/].f_7;
	iVar5 = Global_1323615[iParam1 /*141*/].f_65;
	if (iVar5 == -1)
	{
		iVar5 = 0;
	}
	if (uParam0->f_5 == -1)
	{
		uParam0->f_5 = 0;
	}
	iVar16 = 0;
	if (func_393(uParam0->f_1, &iVar6, &iVar7))
	{
		if ((iVar6 != -1 && iVar7 != -1) && (iVar6 != iVar2 || iVar7 != iVar4))
		{
			func_382(uParam0->f_1, &uVar11, &iVar10, &iVar6, &iVar7);
			if (iVar10 == 0)
			{
				iVar15 = 0;
			}
			else if (iVar10 == 1)
			{
				iVar15 = 1;
			}
			else if (iVar10 == 2)
			{
				iVar15 = 3;
			}
			else if (iVar10 == 3)
			{
				iVar15 = 4;
			}
			else if (iVar10 == 4)
			{
				iVar15 = 5;
			}
			iVar16 = func_387(&uVar11, iVar15, 1, 1, 0, 0, 0);
			iVar0 = (iVar0 + iVar16);
		}
	}
	if (func_393(uParam0->f_2, &iVar8, &uVar9))
	{
		if (iVar8 != -1 && iVar8 != iVar3)
		{
			func_382(uParam0->f_2, &uVar11, &iVar10, &iVar6, &iVar7);
			if (iVar10 == 0)
			{
				iVar15 = 0;
			}
			else if (iVar10 == 1)
			{
				iVar15 = 1;
			}
			else if (iVar10 == 2)
			{
				iVar15 = 3;
			}
			else if (iVar10 == 3)
			{
				iVar15 = 4;
			}
			else if (iVar10 == 4)
			{
				iVar15 = 5;
			}
			iVar16 = func_387(&uVar11, iVar15, 0, 1, 0, 0, 0);
			iVar0 = (iVar0 + iVar16);
		}
	}
	if (uParam0->f_32 != Global_1323615[iParam1 /*141*/])
	{
		if (uParam0->f_32 == 3)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_32 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_32 == 4)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_32 == 2)
		{
			iVar0 += 300;
		}
		else if (uParam0->f_32 == 1)
		{
			iVar0 += 600;
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_1323615[iParam1 /*141*/].f_77, 9))
	{
		if (uParam0->f_18)
		{
			iVar0 += 25000;
		}
	}
	iVar17 = Global_1323615[iParam1 /*141*/].f_62;
	iVar18 = Global_1323615[iParam1 /*141*/].f_63;
	iVar19 = Global_1323615[iParam1 /*141*/].f_64;
	if ((uParam0->f_6 != iVar17 || uParam0->f_7 != iVar18) || uParam0->f_8 != iVar19)
	{
		switch (func_384(uParam0->f_6, uParam0->f_7, uParam0->f_8))
		{
			case 1:
				iVar0 += 1500;
				break;
			case 2:
				iVar0 += 5000;
				break;
			case 3:
				iVar0 += 10000;
				break;
			case 4:
				iVar0 += 12500;
				break;
			case 6:
				iVar0 += 15000;
				break;
			case 8:
				iVar0 += 20000;
				break;
			case 5:
				iVar0 += 14000;
				break;
			case 7:
				iVar0 += 17500;
				break;
			case 9:
				iVar0 = (iVar0 + Global_262145.f_7666);
				break;
			case 10:
				iVar0 = (iVar0 + Global_262145.f_7667);
				break;
			case 11:
				iVar0 = (iVar0 + Global_262145.f_7815);
				break;
		}
	}
	if (uParam0->f_5 != iVar5)
	{
		if (uParam0->f_5 == 0)
		{
			iVar0 += 500;
		}
		else if (uParam0->f_5 == 1)
		{
			iVar0 += 5000;
		}
		else if (uParam0->f_5 == 2)
		{
			iVar0 += 3500;
		}
		else if (uParam0->f_5 == 3)
		{
			iVar0 += 1500;
		}
		else if (uParam0->f_5 == 5)
		{
			iVar0 = (iVar0 + Global_262145.f_7661);
		}
	}
	iVar1 = Global_1323615[iParam1 /*141*/].f_9[11];
	if (uParam0->f_9 != iVar1 && uParam0->f_9 != -1)
	{
		if (uParam0->f_9 == 0)
		{
			iVar0 += 500;
		}
		else if (uParam0->f_9 == 1)
		{
			iVar0 += 1800;
		}
		else if (uParam0->f_9 == 2)
		{
			iVar0 += 2500;
		}
		else if (uParam0->f_9 == 3)
		{
			iVar0 += 3600;
		}
		else if (uParam0->f_9 == 4)
		{
			iVar0 += 6700;
		}
	}
	iVar1 = Global_1323615[iParam1 /*141*/].f_9[12];
	if (uParam0->f_10 != iVar1 && uParam0->f_10 != -1)
	{
		if (uParam0->f_10 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_10 == 1)
		{
			iVar0 += 4000;
		}
		else if (uParam0->f_10 == 2)
		{
			iVar0 += 5400;
		}
		else if (uParam0->f_10 == 3)
		{
			iVar0 += 7000;
		}
	}
	iVar1 = Global_1323615[iParam1 /*141*/].f_9[4];
	if (uParam0->f_13 != iVar1 && uParam0->f_13 != -1)
	{
		if (uParam0->f_13 == 0)
		{
			iVar0 += 260;
		}
		else if (uParam0->f_13 == 1)
		{
			iVar0 += 750;
		}
		else if (uParam0->f_13 == 2)
		{
			iVar0 += 1800;
		}
		else if (uParam0->f_13 == 3)
		{
			iVar0 += 3000;
		}
		else if (uParam0->f_13 == 4)
		{
			iVar0 += 9550;
		}
		else if (uParam0->f_13 == 5)
		{
			iVar0 += 9750;
		}
	}
	iVar1 = Global_1323615[iParam1 /*141*/].f_9[23];
	if (uParam0->f_11 != iVar1 && uParam0->f_11 != -1)
	{
	}
	iVar1 = Global_1323615[iParam1 /*141*/].f_9[14];
	if (uParam0->f_16 != iVar1 && uParam0->f_16 != -1)
	{
		if (uParam0->f_16 == 0)
		{
			iVar0 += 500;
		}
		else if (uParam0->f_16 == 1)
		{
			iVar0 += 2000;
		}
		else if (uParam0->f_16 == 2)
		{
			iVar0 += 3000;
		}
		else if (uParam0->f_16 == 3)
		{
			iVar0 += 5000;
		}
		else if (uParam0->f_16 == 4)
		{
			iVar0 += 10000;
		}
		else if (uParam0->f_16 == 5)
		{
			iVar0 += 12500;
		}
	}
	iVar1 = Global_1323615[iParam1 /*141*/].f_9[16];
	if (uParam0->f_15 != iVar1 && uParam0->f_15 != -1)
	{
		if (uParam0->f_15 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_15 == 1)
		{
			iVar0 += 3600;
		}
		else if (uParam0->f_15 == 2)
		{
			iVar0 += 6000;
		}
		else if (uParam0->f_15 == 3)
		{
			iVar0 += 9600;
		}
		else if (uParam0->f_15 == 4)
		{
			iVar0 += 16800;
		}
		else if (uParam0->f_15 == 5)
		{
			iVar0 += 24000;
		}
	}
	iVar1 = Global_1323615[iParam1 /*141*/].f_9[15];
	if (uParam0->f_14 != iVar1 && uParam0->f_14 != -1)
	{
		if (uParam0->f_14 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_14 == 1)
		{
			iVar0 += 1000;
		}
		else if (uParam0->f_14 == 2)
		{
			iVar0 += 2000;
		}
		else if (uParam0->f_14 == 3)
		{
			iVar0 += 3400;
		}
		else if (uParam0->f_14 == 4)
		{
			iVar0 += 4400;
		}
	}
	if (uParam0->f_17 != -1)
	{
		if (uParam0->f_17 != 1 && Global_1323615[iParam1 /*141*/].f_9[22] > 0)
		{
			iVar0 += 100;
		}
		else if (uParam0->f_17 == 1 && Global_1323615[iParam1 /*141*/].f_9[22] <= 0)
		{
			iVar0 += 2000;
		}
	}
	if (uParam0->f_19 != -1)
	{
		if (uParam0->f_19 != 1 && Global_1323615[iParam1 /*141*/].f_9[18] > 0)
		{
			iVar0 += 1000;
		}
		else if (uParam0->f_19 == 1 && Global_1323615[iParam1 /*141*/].f_9[18] <= 0)
		{
			iVar0 += 24000;
		}
	}
	return uParam0->f_27 >= iVar0;
}

int func_384(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;

	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 0 && iParam1 == 0) && iParam2 == 0)
	{
		return 11;
	}
	if ((iParam0 == 255 && iParam1 == 127) && iParam2 == 0)
	{
		return 6;
	}
	if ((iParam0 == 252 && iParam1 == 238) && iParam2 == 0)
	{
		return 4;
	}
	if ((iParam0 == 0 && iParam1 == 174) && iParam2 == 239)
	{
		return 3;
	}
	if ((iParam0 == 226 && iParam1 == 6) && iParam2 == 6)
	{
		return 8;
	}
	if ((iParam0 == 20 && iParam1 == 20) && iParam2 == 20)
	{
		return 2;
	}
	if ((iParam0 == Global_1314034 && iParam1 == Global_1314035) && iParam2 == Global_1314036)
	{
		return 12;
	}
	if ((iParam0 == 1 && iParam1 == 1) && iParam2 == 1)
	{
		return 0;
	}
	if (func_386())
	{
		UNK_0xA402F6C87C08815C(21, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 5;
		}
		UNK_0xA402F6C87C08815C(18, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 7;
		}
		if (((iParam0 == 114 && iParam1 == 204) && iParam2 == 114) || ((iParam0 == 102 && iParam1 == 152) && iParam2 == 104))
		{
			return 7;
		}
	}
	if (func_385())
	{
		UNK_0xA402F6C87C08815C(24, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 9;
		}
		UNK_0xA402F6C87C08815C(107, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 10;
		}
	}
	return 1;
}

bool func_385()
{
	return UNK_0xC146D5FBD23C6954(1785846048);
}

bool func_386()
{
	return UNK_0xC146D5FBD23C6954(42019760);
}

int func_387(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam1)
	{
		case 1:
			iVar0 = func_392(bParam0);
			break;
		case 4:
			iVar0 = func_391(bParam0);
			break;
		case 0:
			iVar0 = func_390(bParam0);
			break;
		case 3:
			iVar0 = func_389(bParam0);
			break;
		case 5:
			iVar0 = 25000;
			break;
		case 2:
			iVar0 = func_388(bParam0);
			break;
	}
	if (bParam3 && !bParam2)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 2f));
	}
	if (bParam4)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_14619));
	}
	if (bParam5)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_14620));
	}
	if (bParam6)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_14621));
	}
	return iVar0;
}

int func_388(bool bParam0)
{
	int iVar0;

	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return 0;
	}
	if (!UNK_0xEF07223F00EBE9C9(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x12AB0310C2281427(bParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 2520;
		case joaat("BLACK_GRAPHITE"):
			return 2430;
		case joaat("GRAPHITE"):
			return 2370;
		case joaat("ANTHR_BLACK"):
			return 2490;
		case joaat("BLACK_STEEL"):
			return 2580;
		case joaat("DARK_SILVER"):
			return 2340;
		case joaat("SILVER"):
			return 2460;
		case joaat("BLUE_SILVER"):
			return 3200;
		case joaat("ROLLED_STEEL"):
			return 2340;
		case joaat("SHADOW_SILVER"):
			return 2580;
		case joaat("STONE_SILVER"):
			return 2610;
		case joaat("MIDNIGHT_SILVER"):
			return 2700;
		case joaat("CAST_IRON_SIL"):
			return 2640;
		case joaat("RED"):
			return 4200;
		case joaat("TORINO_RED"):
			return 15250;
		case joaat("FORMULA_RED"):
			return 15000;
		case joaat("LAVA_RED"):
			return 19550;
		case joaat("BLAZE_RED"):
			return 5400;
		case joaat("GRACE_RED"):
			return 2850;
		case joaat("GARNET_RED"):
			return 2670;
		case joaat("SUNSET_RED"):
			return 18100;
		case joaat("CABERNET_RED"):
			return 16240;
		case joaat("WINE_RED"):
			return 8200;
		case joaat("CANDY_RED"):
			return 19800;
		case 1224546404:
			return 20000;
		case joaat("PINK"):
			return 19200;
		case joaat("SALMON_PINK"):
			return 17600;
		case joaat("SUNRISE_ORANGE"):
			return 15800;
		case joaat("ORANGE"):
			return 15480;
		case joaat("BRIGHT_ORANGE"):
			return 15620;
		case joaat("GOLD"):
			return 3500;
		case joaat("BRONZE"):
			return 3450;
		case joaat("YELLOW"):
			return 15590;
		case joaat("RACE_YELLOW"):
			return 15860;
		case joaat("FLUR_YELLOW"):
			return 16000;
		case joaat("DARK_GREEN"):
			return 2610;
		case joaat("RACING_GREEN"):
			return 15760;
		case joaat("SEA_GREEN"):
			return 2850;
		case joaat("OLIVE_GREEN"):
			return 2550;
		case joaat("BRIGHT_GREEN"):
			return 15970;
		case joaat("PETROL_GREEN"):
			return 16850;
		case joaat("LIME_GREEN"):
			return 20000;
		case joaat("MIDNIGHT_BLUE"):
			return 7500;
		case joaat("GALAXY_BLUE"):
			return 3030;
		case joaat("DARK_BLUE"):
			return 2790;
		case joaat("SAXON_BLUE"):
			return 2700;
		case joaat("BLUE"):
			return 3840;
		case joaat("MARINER_BLUE"):
			return 2610;
		case joaat("HARBOR_BLUE"):
			return 2520;
		case joaat("DIAMOND_BLUE"):
			return 15700;
		case joaat("SURF_BLUE"):
			return 3900;
		case joaat("NAUTICAL_BLUE"):
			return 3610;
		case joaat("RACING_BLUE"):
			return 15340;
		case joaat("ULTRA_BLUE"):
			return 18750;
		case joaat("LIGHT_BLUE"):
			return 3450;
		case joaat("CHOCOLATE_BROWN"):
			return 6300;
		case joaat("BISON_BROWN"):
			return 5800;
		case joaat("CREEK_BROWN"):
			return 2340;
		case joaat("UMBER_BROWN"):
			return 2430;
		case joaat("MAPLE_BROWN"):
			return 2550;
		case joaat("BEECHWOOD_BROWN"):
			return 2700;
		case joaat("SIENNA_BROWN"):
			return 2760;
		case joaat("SADDLE_BROWN"):
			return 2490;
		case joaat("MOSS_BROWN"):
			return 2580;
		case joaat("WOODBEECH_BROWN"):
			return 2700;
		case joaat("STRAW_BROWN"):
			return 2640;
		case joaat("SANDY_BROWN"):
			return 2610;
		case joaat("BLEECHED_BROWN"):
			return 2340;
		case joaat("PURPLE"):
			return 5650;
		case joaat("SPIN_PURPLE"):
			return 10000;
		case joaat("MIGHT_PURPLE"):
			return 9400;
		case joaat("BRIGHT_PURPLE"):
			return 20000;
		case joaat("CREAM"):
			return 2340;
		case joaat("WHITE"):
			return 2430;
		case joaat("FROST_WHITE"):
			return 2610;
	}
	return 0;
}

int func_389(bool bParam0)
{
	int iVar0;

	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return 0;
	}
	if (!UNK_0xEF07223F00EBE9C9(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x12AB0310C2281427(bParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 2200;
		case joaat("GREY"):
			return 2050;
		case joaat("LIGHT_GREY"):
			return 2000;
		case joaat("WHITE"):
			return 2120;
		case joaat("BLUE"):
			return 14250;
		case joaat("DARK_BLUE"):
			return 2150;
		case joaat("MIDNIGHT_BLUE"):
			return 10000;
		case joaat("MIGHT_PURPLE"):
			return 13750;
		case joaat("PURPLE"):
			return 17000;
		case joaat("RED"):
			return 12500;
		case joaat("DARK_RED"):
			return 15000;
		case joaat("ORANGE"):
			return 14000;
		case joaat("YELLOW"):
			return 11600;
		case joaat("LIME_GREEN"):
			return 17500;
		case joaat("GREEN"):
			return 2130;
		case joaat("MATTE_FOR"):
			return 2150;
		case joaat("MATTE_FOIL"):
			return 2100;
		case joaat("MATTE_OD"):
			return 2250;
		case joaat("MATTE_DIRT"):
			return 2240;
		case joaat("MATTE_DESERT"):
			return 2170;
	}
	return 0;
}

int func_390(bool bParam0)
{
	int iVar0;

	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return 0;
	}
	if (!UNK_0xEF07223F00EBE9C9(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x12AB0310C2281427(bParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 1400;
		case joaat("BLACK_GRAPHITE"):
			return 1350;
		case joaat("GRAPHITE"):
			return 1320;
		case joaat("ANTHR_BLACK"):
			return 1380;
		case joaat("BLACK_STEEL"):
			return 1440;
		case joaat("DARK_SILVER"):
			return 1300;
		case joaat("SILVER"):
			return 1370;
		case joaat("BLUE_SILVER"):
			return 1340;
		case joaat("ROLLED_STEEL"):
			return 1300;
		case joaat("SHADOW_SILVER"):
			return 1430;
		case joaat("STONE_SILVER"):
			return 1450;
		case joaat("MIDNIGHT_SILVER"):
			return 1500;
		case joaat("CAST_IRON_SIL"):
			return 1470;
		case joaat("RED"):
			return 1530;
		case joaat("TORINO_RED"):
			return 9260;
		case joaat("FORMULA_RED"):
			return 8890;
		case joaat("LAVA_RED"):
			return 14500;
		case joaat("BLAZE_RED"):
			return 5000;
		case joaat("GRACE_RED"):
			return 1590;
		case joaat("GARNET_RED"):
			return 1480;
		case joaat("SUNSET_RED"):
			return 13250;
		case joaat("CABERNET_RED"):
			return 12000;
		case joaat("WINE_RED"):
			return 13000;
		case joaat("CANDY_RED"):
			return 14750;
		case 1224546404:
			return 15000;
		case joaat("PINK"):
			return 13750;
		case joaat("SALMON_PINK"):
			return 13000;
		case joaat("SUNRISE_ORANGE"):
			return 11000;
		case joaat("ORANGE"):
			return 7500;
		case joaat("BRIGHT_ORANGE"):
			return 9000;
		case joaat("GOLD"):
			return 1650;
		case joaat("BRONZE"):
			return 1550;
		case joaat("YELLOW"):
			return 8500;
		case joaat("RACE_YELLOW"):
			return 11500;
		case joaat("FLUR_YELLOW"):
			return 12000;
		case joaat("DARK_GREEN"):
			return 1450;
		case joaat("RACING_GREEN"):
			return 10500;
		case joaat("SEA_GREEN"):
			return 1580;
		case joaat("OLIVE_GREEN"):
			return 1420;
		case joaat("BRIGHT_GREEN"):
			return 12000;
		case joaat("PETROL_GREEN"):
			return 13000;
		case joaat("LIME_GREEN"):
			return 15000;
		case joaat("MIDNIGHT_BLUE"):
			return 12250;
		case joaat("GALAXY_BLUE"):
			return 1690;
		case joaat("DARK_BLUE"):
			return 1550;
		case joaat("SAXON_BLUE"):
			return 1500;
		case joaat("BLUE"):
			return 1430;
		case joaat("MARINER_BLUE"):
			return 1450;
		case joaat("HARBOR_BLUE"):
			return 1400;
		case joaat("DIAMOND_BLUE"):
			return 10890;
		case joaat("SURF_BLUE"):
			return 1530;
		case joaat("NAUTICAL_BLUE"):
			return 1480;
		case joaat("RACING_BLUE"):
			return 7500;
		case joaat("ULTRA_BLUE"):
			return 13750;
		case joaat("LIGHT_BLUE"):
			return 1350;
		case joaat("CHOCOLATE_BROWN"):
			return 11250;
		case joaat("BISON_BROWN"):
			return 10000;
		case joaat("CREEK_BROWN"):
			return 1300;
		case joaat("UMBER_BROWN"):
			return 1350;
		case joaat("MAPLE_BROWN"):
			return 1420;
		case joaat("BEECHWOOD_BROWN"):
			return 1500;
		case joaat("SIENNA_BROWN"):
			return 1530;
		case joaat("SADDLE_BROWN"):
			return 1380;
		case joaat("MOSS_BROWN"):
			return 1430;
		case joaat("WOODBEECH_BROWN"):
			return 1500;
		case joaat("STRAW_BROWN"):
			return 1470;
		case joaat("SANDY_BROWN"):
			return 1450;
		case joaat("BLEECHED_BROWN"):
			return 1300;
		case joaat("PURPLE"):
			return 7500;
		case joaat("SPIN_PURPLE"):
			return 14250;
		case joaat("MIGHT_PURPLE"):
			return 13750;
		case joaat("BRIGHT_PURPLE"):
			return 15000;
		case joaat("CREAM"):
			return 1300;
		case joaat("WHITE"):
			return 1350;
		case joaat("FROST_WHITE"):
			return 1450;
	}
	return 0;
}

int func_391(bool bParam0)
{
	int iVar0;

	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return 0;
	}
	if (!UNK_0xEF07223F00EBE9C9(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x12AB0310C2281427(bParam0);
	switch (iVar0)
	{
		case joaat("BR_STEEL"):
			return 12500;
		case -644198701:
			return 11500;
		case joaat("BR_ALUMINIUM"):
			return 10250;
		case joaat("GOLD_P"):
			return Global_262145.f_7766;
		case joaat("GOLD_S"):
			return Global_262145.f_7767;
	}
	return 0;
}

int func_392(bool bParam0)
{
	int iVar0;

	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return 0;
	}
	if (!UNK_0xEF07223F00EBE9C9(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x12AB0310C2281427(bParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 840;
		case joaat("BLACK_GRAPHITE"):
			return 810;
		case joaat("GRAPHITE"):
			return 790;
		case joaat("ANTHR_BLACK"):
			return 830;
		case joaat("BLACK_STEEL"):
			return 860;
		case joaat("DARK_SILVER"):
			return 780;
		case joaat("SILVER"):
			return 820;
		case joaat("BLUE_SILVER"):
			return 800;
		case joaat("ROLLED_STEEL"):
			return 780;
		case joaat("SHADOW_SILVER"):
			return 860;
		case joaat("STONE_SILVER"):
			return 870;
		case joaat("MIDNIGHT_SILVER"):
			return 900;
		case joaat("CAST_IRON_SIL"):
			return 880;
		case joaat("RED"):
			return 920;
		case joaat("TORINO_RED"):
			return 5600;
		case joaat("FORMULA_RED"):
			return 5200;
		case joaat("LAVA_RED"):
			return 11600;
		case joaat("BLAZE_RED"):
			return 3800;
		case joaat("GRACE_RED"):
			return 950;
		case joaat("GARNET_RED"):
			return 890;
		case joaat("SUNSET_RED"):
			return 10600;
		case joaat("CABERNET_RED"):
			return 9600;
		case joaat("WINE_RED"):
			return 10400;
		case joaat("CANDY_RED"):
			return 12150;
		case 1224546404:
			return 12500;
		case joaat("PINK"):
			return 11000;
		case joaat("SALMON_PINK"):
			return 10400;
		case joaat("SUNRISE_ORANGE"):
			return 8800;
		case joaat("ORANGE"):
			return 4500;
		case joaat("BRIGHT_ORANGE"):
			return 5400;
		case joaat("GOLD"):
			return 990;
		case joaat("BRONZE"):
			return 930;
		case joaat("YELLOW"):
			return 5100;
		case joaat("RACE_YELLOW"):
			return 9200;
		case joaat("FLUR_YELLOW"):
			return 9600;
		case joaat("DARK_GREEN"):
			return 870;
		case joaat("RACING_GREEN"):
			return 8400;
		case joaat("SEA_GREEN"):
			return 950;
		case joaat("OLIVE_GREEN"):
			return 850;
		case joaat("BRIGHT_GREEN"):
			return 9600;
		case joaat("PETROL_GREEN"):
			return 10400;
		case joaat("LIME_GREEN"):
			return 12500;
		case joaat("MIDNIGHT_BLUE"):
			return 9800;
		case joaat("GALAXY_BLUE"):
			return 1010;
		case joaat("DARK_BLUE"):
			return 930;
		case joaat("SAXON_BLUE"):
			return 900;
		case joaat("BLUE"):
			return 860;
		case joaat("MARINER_BLUE"):
			return 870;
		case joaat("HARBOR_BLUE"):
			return 840;
		case joaat("DIAMOND_BLUE"):
			return 8650;
		case joaat("SURF_BLUE"):
			return 920;
		case joaat("NAUTICAL_BLUE"):
			return 890;
		case joaat("RACING_BLUE"):
			return 4500;
		case joaat("ULTRA_BLUE"):
			return 11000;
		case joaat("LIGHT_BLUE"):
			return 810;
		case joaat("CHOCOLATE_BROWN"):
			return 9050;
		case joaat("BISON_BROWN"):
			return 8000;
		case joaat("CREEK_BROWN"):
			return 780;
		case joaat("UMBER_BROWN"):
			return 810;
		case joaat("MAPLE_BROWN"):
			return 850;
		case joaat("BEECHWOOD_BROWN"):
			return 900;
		case joaat("SIENNA_BROWN"):
			return 920;
		case joaat("SADDLE_BROWN"):
			return 830;
		case joaat("MOSS_BROWN"):
			return 860;
		case joaat("WOODBEECH_BROWN"):
			return 900;
		case joaat("STRAW_BROWN"):
			return 880;
		case joaat("SANDY_BROWN"):
			return 870;
		case joaat("BLEECHED_BROWN"):
			return 780;
		case joaat("PURPLE"):
			return 4500;
		case joaat("SPIN_PURPLE"):
			return 11400;
		case joaat("MIGHT_PURPLE"):
			return 11000;
		case joaat("BRIGHT_PURPLE"):
			return 12500;
		case joaat("CREAM"):
			return 780;
		case joaat("WHITE"):
			return 810;
		case joaat("FROST_WHITE"):
			return 870;
	}
	return 0;
}

bool func_393(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;

	func_382(iParam0, &uVar1, &uVar0, iParam1, iParam2);
	return (*iParam1 != -1 && *iParam2 != -1);
}

int func_394(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = false;
	bVar1 = false;
	iVar2 = -99;
	return func_285(bParam0, bParam1, bVar0, bVar1, iVar2, bVar0, bVar0, bParam2, bParam3);
}

bool func_395(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_99(iParam0))
		{
			return true;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0 /*876*/] == -1)
	{
		return false;
	}
	return true;
}

int func_396(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	var uVar7;
	var uVar8;
	int iVar9;

	iVar0 = 0;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	bVar1 = false;
	while ((iParam1 == -1 || iParam1 == iVar0) && func_382(iVar0, &uVar3, &iVar2, &uVar7, &uVar8))
	{
		bVar1 = true;
		iVar9 = func_403(&uVar3);
		if (iVar2 == 0)
		{
			if (func_397(0, iVar9, 1, 0))
			{
				UNK_0x5D96D8530B3D0904(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 1)
		{
			if (func_397(1, iVar9, 1, 0))
			{
				UNK_0x5D96D8530B3D0904(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 2)
		{
			if (func_397(3, iVar9, 1, 0))
			{
				UNK_0x5D96D8530B3D0904(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 3)
		{
			if (func_397(4, iVar9, 1, 0))
			{
				UNK_0x5D96D8530B3D0904(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 4)
		{
			if (func_397(5, iVar9, 1, 0))
			{
				UNK_0x5D96D8530B3D0904(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		iVar0++;
	}
	if (!bVar1)
	{
		return -1;
	}
	return iParam1;
}

int func_397(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return 1;
	}
	if (!UNK_0x8CD06866876216F2())
	{
		return 1;
	}
	else if (UNK_0xC844350D5D58C99A(bParam3))
	{
		switch (UNK_0x134B62B726CEC8E6(bParam3))
		{
			case joaat("PHANTOM3"):
			case joaat("HAULER2"):
			case joaat("TRAILERLARGE"):
			case joaat("AVENGER"):
			case joaat("RIOT2"):
			case joaat("CHERNOBOG"):
			case joaat("KHANJALI"):
			case joaat("BARRAGE"):
			case joaat("MULE4"):
			case joaat("POUNDER2"):
			case joaat("TERBYTE"):
			case joaat("OPPRESSOR2"):
			case joaat("SPEEDO4"):
			case joaat("RCBANDITO"):
			case -1254331310:
			case 1802742206:
				return 1;
			default:
				if (func_402(UNK_0x134B62B726CEC8E6(bParam3)) || func_206(UNK_0x134B62B726CEC8E6(bParam3)))
				{
					return 1;
				}
				if (UNK_0xC41A9202669A24C4(UNK_0x134B62B726CEC8E6(bParam3)) || UNK_0xAFB8495D36825275(UNK_0x134B62B726CEC8E6(bParam3)))
				{
					return 1;
				}
				break;
		}
	}
	if (iParam0 == 4)
	{
		if (iParam1 == 32 || iParam1 == 91)
		{
			return func_133(func_401(UNK_0xD803B885F5E47A62(), 1), 0) >= 100;
		}
	}
	iVar0 = func_400(iParam0, iParam1, bParam2);
	if (iVar0 != 0)
	{
		return func_398(iParam0, iVar0);
	}
	return 1;
}

int func_398(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 166:
		case 167:
		case 168:
		case 169:
			if (func_133(func_401(UNK_0xD803B885F5E47A62(), 1), 0) >= func_399(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 148:
		case 149:
		case 150:
		case 151:
			if (func_50(38, -1) >= func_399(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 152:
		case 153:
		case 154:
			if (func_51(153, -1, 0) >= func_399(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 155:
		case 156:
		case 157:
		case 158:
			if (func_51(160, -1, 0) >= func_399(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 159:
		case 160:
		case 161:
			if (func_51(161, -1, 0) >= func_399(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 162:
		case 163:
		case 164:
		case 165:
			if (func_51(818, -1, 0) >= func_399(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 133:
			return 1;
		case 134:
			return 1;
		case 135:
			if (func_50(51, -1) >= 1 || func_50(52, -1) >= 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 170:
			if (func_133(func_401(UNK_0xD803B885F5E47A62(), 1), 0) >= func_399(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 136:
			if (func_50(58, -1) >= 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 137:
			if (func_50(57, -1) >= 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_399(int iParam0, int iParam1)
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 134:
				return 0;
			case 136:
				return 1;
			case 137:
				return 1;
			case 169:
				return 1;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 133:
				return 0;
		}
	}
	else if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 135:
				return 1;
			case 170:
				return 100;
		}
	}
	switch (iParam1)
	{
		case 148:
			return 5;
		case 149:
			return 10;
		case 150:
			return 25;
		case 151:
			return 50;
		case 155:
			return 5;
		case 156:
			return 10;
		case 157:
			return 25;
		case 158:
			return 50;
		case 152:
			return 5;
		case 153:
			return 10;
		case 154:
			return 25;
		case 159:
			return 25;
		case 160:
			return 50;
		case 161:
			return 100;
		case 162:
			return 5;
		case 163:
			return 10;
		case 164:
			return 25;
		case 165:
			return 50;
	}
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 0)
	{
		switch (iParam1)
		{
			case 138:
				return 7;
			case 139:
				return 9;
			case 140:
				return 11;
			case 141:
				return 13;
			case 142:
				return 15;
			case 143:
				return 17;
			case 144:
				return 19;
			case 145:
				return 21;
			case 146:
				return 23;
			case 147:
				return 25;
			case 166:
				return 1;
			case 167:
				return 1;
			case 168:
				return 1;
			default:
				break;
		}
	}
	return 0;
}

int func_400(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 1:
			case 75:
			case 48:
			case 15:
			case 30:
			case 78:
			case 77:
			case 34:
			case 46:
			case 80:
				if (bParam2)
				{
					return 134;
				}
				else
				{
					return 169;
				}
				break;
			case 87:
			case 90:
			case 86:
			case 88:
			case 89:
				return 136;
			case 70:
			case 72:
			case 43:
			case 44:
			case 79:
				return 137;
		}
	}
	if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (bParam2)
				{
					return 133;
				}
				else
				{
					return 166;
				}
				break;
		}
	}
	if (iParam0 == 0)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (!bParam2)
				{
					return 167;
				}
				break;
		}
	}
	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (!bParam2)
				{
					return 168;
				}
				break;
		}
	}
	if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 81:
			case 82:
			case 83:
				return 135;
			case 32:
			case 91:
				return 170;
		}
	}
	switch (iParam1)
	{
		case 58:
			return 148;
		case 44:
			return 149;
		case 55:
			return 150;
		case 25:
			return 151;
		case 29:
			return 152;
		case 85:
			return 153;
		case 43:
			return 154;
		case 23:
			return 155;
		case 38:
			return 156;
		case 71:
			return 157;
		case 26:
			return 158;
		case 24:
			return 159;
		case 42:
			return 160;
		case 18:
			return 161;
		case 62:
			return 162;
		case 12:
			return 163;
		case 32:
			return 164;
		case 84:
			return 165;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 0:
			switch (iParam1)
			{
				case 2:
				case 3:
				case 4:
				case 5:
					return 138;
				case 9:
				case 10:
				case 11:
				case 13:
					return 139;
				case 16:
				case 17:
				case 19:
				case 20:
					return 140;
				case 22:
				case 27:
				case 28:
				case 31:
					return 141;
				case 33:
				case 34:
				case 37:
				case 39:
					return 142;
				case 45:
				case 46:
				case 47:
				case 49:
					return 143;
				case 51:
				case 52:
				case 53:
				case 54:
					return 144;
				case 57:
				case 60:
				case 61:
				case 63:
					return 145;
				case 65:
				case 66:
				case 67:
				case 68:
					return 146;
				case 70:
				case 72:
				case 74:
				case 76:
					return 147;
			}
			break;
	}
	return 0;
}

int func_401(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_136(bParam0);
}

bool func_402(int iParam0)
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

int func_403(bool bParam0)
{
	int iVar0;

	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return 0;
	}
	if (!UNK_0xEF07223F00EBE9C9(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x12AB0310C2281427(bParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 1;
		case joaat("BLACK_GRAPHITE"):
			return 2;
		case joaat("GRAPHITE"):
			return 3;
		case joaat("ANTHR_BLACK"):
			return 4;
		case joaat("BLACK_STEEL"):
			return 5;
		case joaat("DARK_SILVER"):
			return 6;
		case -2077191789: /* GXTEntry: "Silver Steel" */
			return 7;
		case joaat("SILVER"):
			return 8;
		case joaat("BLUE_SILVER"):
			return 9;
		case joaat("ROLLED_STEEL"):
			return 10;
		case joaat("SHADOW_SILVER"):
			return 11;
		case joaat("STONE_SILVER"):
			return 12;
		case joaat("MIDNIGHT_SILVER"):
			return 13;
		case joaat("CAST_IRON_SIL"):
			return 14;
		case joaat("RED"):
			return 15;
		case joaat("TORINO_RED"):
			return 16;
		case joaat("FORMULA_RED"):
			return 17;
		case joaat("LAVA_RED"):
			return 18;
		case joaat("BLAZE_RED"):
			return 19;
		case joaat("GRACE_RED"):
			return 20;
		case joaat("GARNET_RED"):
			return 21;
		case joaat("SUNSET_RED"):
			return 22;
		case joaat("WINE_RED"):
			return 23;
		case joaat("CABERNET_RED"):
			return 24;
		case joaat("CANDY_RED"):
			return 25;
		case 1224546404:
			return 26;
		case joaat("PINK"):
			return 27;
		case joaat("SALMON_PINK"):
			return 28;
		case joaat("SUNRISE_ORANGE"):
			return 29;
		case joaat("ORANGE"):
			return 30;
		case joaat("BRIGHT_ORANGE"):
			return 31;
		case joaat("GOLD"):
			return 32;
		case joaat("BRONZE"):
			return 33;
		case joaat("YELLOW"):
			return 34;
		case joaat("RACE_YELLOW"):
			return 35;
		case -1411292916: /* GXTEntry: "Race Yellow" */
			return 36;
		case joaat("DARK_GREEN"):
			return 37;
		case joaat("RACING_GREEN"):
			return 38;
		case joaat("SEA_GREEN"):
			return 39;
		case joaat("OLIVE_GREEN"):
			return 40;
		case joaat("BRIGHT_GREEN"):
			return 41;
		case joaat("PETROL_GREEN"):
			return 42;
		case joaat("LIME_GREEN"):
			return 43;
		case joaat("MIDNIGHT_BLUE"):
			return 44;
		case joaat("GALAXY_BLUE"):
			return 45;
		case joaat("DARK_BLUE"):
			return 46;
		case joaat("SAXON_BLUE"):
			return 47;
		case joaat("BLUE"):
			return 48;
		case joaat("MARINER_BLUE"):
			return 49;
		case joaat("HARBOR_BLUE"):
			return 50;
		case joaat("DIAMOND_BLUE"):
			return 51;
		case joaat("SURF_BLUE"):
			return 52;
		case joaat("NAUTICAL_BLUE"):
			return 53;
		case joaat("RACING_BLUE"):
			return 54;
		case joaat("ULTRA_BLUE"):
			return 55;
		case joaat("LIGHT_BLUE"):
			return 56;
		case joaat("CHOCOLATE_BROWN"):
			return 57;
		case joaat("BISON_BROWN"):
			return 58;
		case joaat("CREEK_BROWN"):
			return 59;
		case joaat("UMBER_BROWN"):
			return 60;
		case joaat("MAPLE_BROWN"):
			return 61;
		case joaat("BEECHWOOD_BROWN"):
			return 62;
		case joaat("SIENNA_BROWN"):
			return 63;
		case joaat("SADDLE_BROWN"):
			return 64;
		case joaat("MOSS_BROWN"):
			return 65;
		case joaat("WOODBEECH_BROWN"):
			return 66;
		case joaat("STRAW_BROWN"):
			return 67;
		case joaat("SANDY_BROWN"):
			return 68;
		case joaat("BLEECHED_BROWN"):
			return 69;
		case joaat("PURPLE"):
			return 70;
		case joaat("SPIN_PURPLE"):
			return 71;
		case joaat("MIGHT_PURPLE"):
			return 72;
		case joaat("BRIGHT_PURPLE"):
			return 73;
		case joaat("CREAM"):
			return 74;
		case joaat("WHITE"):
			return 75;
		case joaat("FROST_WHITE"):
			return 76;
		case joaat("GREY"):
			return 77;
		case joaat("LIGHT_GREY"):
			return 78;
		case joaat("DARK_RED"):
			return 79;
		case joaat("GREEN"):
			return 80;
		case joaat("BR_STEEL"):
			return 81;
		case -644198701:
			return 82;
		case joaat("BR_ALUMINIUM"):
			return 83;
		case joaat("CHROME"):
			return 84;
		case joaat("FLUR_YELLOW"):
			return 85;
		case joaat("MATTE_OD"):
			return 86;
		case joaat("MATTE_FOR"):
			return 87;
		case joaat("MATTE_FOIL"):
			return 88;
		case joaat("MATTE_DESERT"):
			return 89;
		case joaat("MATTE_DIRT"):
			return 90;
		case joaat("GOLD_S"):
			return 91;
		case joaat("GOLD_P"):
			return 32;
	}
	return 0;
}

void func_404(bool bParam0)
{
	*bParam0 = 0;
	if (func_405(-1, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, false);
	}
	if (func_405(5, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, true);
	}
	if (func_405(6, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 2);
	}
	if (func_405(7, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 3);
	}
	if (func_405(8, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 4);
	}
	if (func_405(29, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 5);
	}
	if (func_405(30, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 6);
	}
	if (func_405(31, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 7);
	}
	if (func_405(32, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 8);
	}
	if (func_405(33, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 9);
	}
	if (func_405(-1, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 10);
	}
	if (func_405(81, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 11);
	}
	if (func_405(51, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 12);
	}
	if (func_405(61, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 13);
	}
	if (func_405(-1, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 14);
	}
	if (func_405(34, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 15);
	}
	if (func_405(35, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 16);
	}
	if (func_405(36, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 17);
	}
	if (func_405(37, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 18);
	}
	if (func_385())
	{
		UNK_0x5D96D8530B3D0904(bParam0, 19);
	}
}

bool func_405(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_429(iParam1, iParam3))
	{
		return true;
	}
	if (iParam0 == -1)
	{
		return true;
	}
	if (!UNK_0x8CD06866876216F2())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2241[(iParam0 / 32)], (iParam0 % 32));
	}
	else
	{
		if (func_428(iParam1, iParam3))
		{
			if (UNK_0xC844350D5D58C99A(bParam2))
			{
				if (UNK_0x4906F8A34E9F4814(bParam2, joaat("PHANTOM3")) || UNK_0x4906F8A34E9F4814(bParam2, joaat("HAULER2")))
				{
					return true;
				}
				else if (UNK_0x4906F8A34E9F4814(bParam2, joaat("TRAILERLARGE")))
				{
					if ((iParam0 == 85 || iParam0 == 86) || iParam0 == 87)
					{
						return true;
					}
				}
			}
		}
		if (func_427(iParam1, iParam3))
		{
			if (UNK_0xC844350D5D58C99A(bParam2))
			{
				if (UNK_0x4906F8A34E9F4814(bParam2, joaat("AVENGER")))
				{
					return true;
				}
			}
		}
		if (func_426(iParam1, iParam3))
		{
			if (UNK_0xC844350D5D58C99A(bParam2))
			{
				if (UNK_0x4906F8A34E9F4814(bParam2, joaat("OPPRESSOR2")))
				{
					return true;
				}
			}
		}
		if (func_425(iParam1, iParam3))
		{
			return true;
		}
		if (func_424(iParam1, iParam3))
		{
			if (UNK_0x4906F8A34E9F4814(bParam2, joaat("VIGILANTE")))
			{
				if (iParam0 == 85 || iParam0 == 86)
				{
					return true;
				}
			}
		}
		if (UNK_0xC844350D5D58C99A(bParam2) && !UNK_0x437347B10A200C4B(bParam2, 0))
		{
			switch (UNK_0x134B62B726CEC8E6(bParam2))
			{
				case joaat("MONSTER3"):
				case joaat("BRUISER"):
				case joaat("BRUISER2"):
				case joaat("BRUISER3"):
				case joaat("IMPALER2"):
				case joaat("IMPALER3"):
				case joaat("IMPALER4"):
				case joaat("ISSI4"):
				case joaat("DEATHBIKE"):
				case joaat("DEATHBIKE2"):
				case joaat("DEATHBIKE3"):
				case joaat("DOMINATOR"):
				case joaat("DOMINATOR2"):
				case joaat("DOMINATOR4"):
				case joaat("DOMINATOR5"):
				case joaat("DOMINATOR6"):
				case joaat("SLAMVAN4"):
				case joaat("IMPERATOR"):
				case joaat("ZR380"):
				case joaat("CERBERUS"):
				case joaat("SCARAB"):
				case joaat("BRUTUS"):
				case joaat("IMPERATOR2"):
				case joaat("IMPERATOR3"):
				case joaat("ZR3802"):
				case joaat("ZR3803"):
				case joaat("CERBERUS2"):
				case joaat("SCARAB2"):
				case joaat("BRUTUS2"):
				case joaat("CERBERUS3"):
				case joaat("SCARAB3"):
				case joaat("BRUTUS3"):
				case joaat("SLAMVAN5"):
				case joaat("SLAMVAN6"):
				case joaat("MONSTER4"):
				case joaat("MONSTER5"):
				case joaat("ISSI5"):
				case joaat("ISSI6"):
				case joaat("RCBANDITO"):
					return true;
			}
		}
		if (((iParam0 == 85 || iParam0 == 86) || iParam0 == 87) || iParam0 == 88)
		{
			if (UNK_0xC844350D5D58C99A(bParam2))
			{
				if (func_411(bParam2) || func_410(UNK_0x134B62B726CEC8E6(bParam2)))
				{
					return true;
				}
			}
		}
		if (iParam0 == 77 || iParam0 == 78)
		{
			if (UNK_0xC844350D5D58C99A(bParam2))
			{
				if (UNK_0x4906F8A34E9F4814(bParam2, joaat("THRUSTER")))
				{
					return true;
				}
			}
		}
		if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
		{
			if (UNK_0xC844350D5D58C99A(bParam2))
			{
				if (UNK_0x4906F8A34E9F4814(bParam2, joaat("OPPRESSOR2")))
				{
					return true;
				}
			}
		}
		if (((iParam0 == 72 || iParam0 == 73) || iParam0 == 74) || iParam0 == 75)
		{
			if (UNK_0xC844350D5D58C99A(bParam2))
			{
				if (UNK_0x4906F8A34E9F4814(bParam2, joaat("BARRAGE")) || func_410(UNK_0x134B62B726CEC8E6(bParam2)))
				{
					return true;
				}
			}
		}
		if ((((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 95) || iParam0 == 96)
		{
			if (UNK_0xC844350D5D58C99A(bParam2))
			{
				if (func_410(UNK_0x134B62B726CEC8E6(bParam2)))
				{
					return true;
				}
			}
		}
		if ((((((iParam0 == 17 || iParam0 == 18) || iParam0 == 19) || iParam0 == 20) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
		{
			if (UNK_0xC844350D5D58C99A(bParam2))
			{
				if (func_410(UNK_0x134B62B726CEC8E6(bParam2)))
				{
					return true;
				}
			}
		}
	}
	if (func_83() == 0)
	{
		return func_406(iParam0, -1);
	}
	return true;
}

bool func_406(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_407(iParam0, iParam1);
	iVar1 = iParam0;
	return UNK_0xEAE0D21A50E6C7F4(bVar0, func_32(iVar1));
}

int func_407(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_51(func_408(iParam0), iParam1, 0);
	return iVar0;
}

int func_408(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = func_36(iVar0);
	if ((func_83() == 0 || func_409() == 0) || (func_83() == 999 && func_409() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 729;
			case 1:
				return 730;
			case 2:
				return 731;
			case 3:
				return 732;
			case 4:
				return 733;
			case 5:
				return 734;
			case 6:
				return 735;
		}
	}
	return 11511;
}

int func_409()
{
	return Global_30769;
}

bool func_410(int iParam0)
{
	if (((iParam0 == joaat("MULE4") || iParam0 == joaat("POUNDER2")) || iParam0 == joaat("SPEEDO4")) || iParam0 == joaat("TERBYTE"))
	{
		return true;
	}
	return false;
}

bool func_411(bool bParam0)
{
	if ((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return false;
	}
	if (func_414(bParam0, 0))
	{
		return true;
	}
	if (UNK_0x30F813723591D02E(bParam0, "Player_Vehicle"))
	{
		if (UNK_0x1E2DFB0EF4BB4566(bParam0, "Player_Vehicle") == UNK_0xE86C2816EDC6CAF0(UNK_0xD803B885F5E47A62()))
		{
			if (func_412(bParam0))
			{
				return true;
			}
			switch (UNK_0x134B62B726CEC8E6(bParam0))
			{
				case joaat("ARDENT"):
				case joaat("NIGHTSHARK"):
				case joaat("DELUXO"):
				case joaat("STROMBERG"):
				case joaat("COMET4"):
				case joaat("REVOLTER"):
				case joaat("SAVESTRA"):
				case joaat("VISERIS"):
				case joaat("CARACARA"):
				case 1416466158:
					return true;
			}
		}
	}
	return false;
}

bool func_412(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	if (func_413(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		return true;
	}
	return false;
}

bool func_413(int iParam0)
{
	switch (iParam0)
	{
		case joaat("APC"):
		case joaat("DUNE3"):
		case joaat("HALFTRACK"):
		case joaat("OPPRESSOR"):
		case joaat("TAMPA3"):
		case joaat("TECHNICAL3"):
		case joaat("INSURGENT3"):
		case joaat("VIGILANTE"):
		case joaat("BARRAGE"):
		case joaat("MENACER"):
		case joaat("SCRAMJET"):
			return true;
	}
	return false;
}

bool func_414(bool bParam0, bool bParam1)
{
	switch (UNK_0x134B62B726CEC8E6(bParam0))
	{
		case joaat("TECHNICAL"):
		case joaat("INSURGENT"):
			if (func_416(UNK_0x134B62B726CEC8E6(bParam0), 0))
			{
				if (Global_2537071.f_301 == bParam0)
				{
					return true;
				}
				else if (func_415(bParam0) != -1 && !bParam1)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

int func_415(bool bParam0)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2439138.f_628[iVar0] == bParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_416(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_210(iParam0, 0))
		{
			return true;
		}
	}
	switch (iParam0)
	{
		case joaat("FACTION"):
		case joaat("BUCCANEER"):
		case joaat("CHINO"):
		case joaat("MOONBEAM"):
		case joaat("PRIMO"):
		case joaat("VOODOO2"):
			return func_423();
		case joaat("SABREGT"):
			if (Global_262145.f_14219)
			{
				return func_422();
			}
			break;
		case joaat("TORNADO"):
		case joaat("TORNADO2"):
		case joaat("TORNADO3"):
			if (Global_262145.f_14220)
			{
				return func_422();
			}
			break;
		case joaat("VIRGO3"):
			if (Global_262145.f_14218)
			{
				return func_422();
			}
			break;
		case joaat("MINIVAN"):
			if (Global_262145.f_14221)
			{
				return func_422();
			}
			break;
		case joaat("SLAMVAN"):
			if (Global_262145.f_14223)
			{
				return func_422();
			}
			break;
		case joaat("SULTAN"):
		case joaat("BANSHEE"):
			return func_421();
		case joaat("COMET2"):
			if (Global_262145.f_18669)
			{
				return func_420();
			}
			break;
		case joaat("DIABLOUS"):
			if (Global_262145.f_18671)
			{
				return func_420();
			}
			break;
		case joaat("FCR"):
			if (Global_262145.f_18675)
			{
				return func_420();
			}
			break;
		case joaat("ELEGY2"):
			if (Global_262145.f_18672)
			{
				return func_420();
			}
			break;
		case joaat("NERO"):
			if (Global_262145.f_18679)
			{
				return func_420();
			}
			break;
		case joaat("ITALIGTB"):
			if (Global_262145.f_18677)
			{
				return func_420();
			}
			break;
		case joaat("SPECTER"):
			if (Global_262145.f_18682)
			{
				return func_420();
			}
			break;
		case joaat("TECHNICAL"):
			if (Global_262145.f_20625)
			{
				return func_419();
			}
			break;
		case joaat("INSURGENT"):
			if (Global_262145.f_20626)
			{
				return func_419();
			}
			break;
		case joaat("RATLOADER"):
		case joaat("RATLOADER2"):
			return func_418();
		case joaat("GLENDALE"):
			if (func_418() || func_417())
			{
				return true;
			}
			break;
		case joaat("IMPALER"):
			return func_418();
		case joaat("ISSI3"):
			return func_418();
		case joaat("GARGOYLE"):
			return func_418();
		case joaat("DOMINATOR"):
			return func_418();
		case joaat("DOMINATOR2"):
			return func_418();
		case joaat("IMPERATOR"):
			return func_418();
		case joaat("IMPERATOR2"):
			return func_418();
		case joaat("IMPERATOR3"):
			return func_418();
		case joaat("DEATHBIKE"):
			return func_418();
		case joaat("DEATHBIKE2"):
			return func_418();
		case joaat("DEATHBIKE3"):
			return func_418();
		case joaat("IMPALER2"):
		case joaat("BRUTUS"):
		case joaat("BRUISER"):
		case joaat("SLAMVAN4"):
		case joaat("ISSI4"):
		case joaat("MONSTER3"):
		case joaat("SCARAB"):
		case joaat("CERBERUS"):
		case joaat("DOMINATOR4"):
		case joaat("ZR380"):
		case joaat("IMPALER3"):
		case joaat("BRUTUS2"):
		case joaat("BRUISER2"):
		case joaat("SLAMVAN5"):
		case joaat("ISSI5"):
		case joaat("MONSTER4"):
		case joaat("SCARAB2"):
		case joaat("CERBERUS2"):
		case joaat("DOMINATOR5"):
		case joaat("ZR3802"):
		case joaat("IMPALER4"):
		case joaat("BRUTUS3"):
		case joaat("BRUISER3"):
		case joaat("SLAMVAN6"):
		case joaat("ISSI6"):
		case joaat("MONSTER5"):
		case joaat("SCARAB3"):
		case joaat("CERBERUS3"):
		case joaat("DOMINATOR6"):
		case joaat("ZR3803"):
			return func_418();
		case joaat("YOUGA2"):
			if (Global_262145.f_28524)
			{
				return func_417();
			}
			break;
		case 722226637:
			if (Global_262145.f_28874)
			{
				return func_417();
			}
			break;
		case joaat("MANANA"):
			if (Global_262145.f_28523)
			{
				return func_417();
			}
			break;
		case joaat("PEYOTE"):
			if (Global_262145.f_28873)
			{
				return func_417();
			}
			break;
		case joaat("YOSEMITE"):
			if (Global_262145.f_28872)
			{
				return func_417();
			}
			break;
	}
	return false;
}

bool func_417()
{
	return UNK_0xC146D5FBD23C6954(1815791016);
}

bool func_418()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPCHRISTMAS2018"));
}

bool func_419()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPGUNRUNNING"));
}

bool func_420()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPIMPORTEXPORT"));
}

bool func_421()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPJANUARY2016"));
}

bool func_422()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPLOWRIDER2"));
}

bool func_423()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPLOWRIDER"));
}

bool func_424(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 10)
		{
			return true;
		}
	}
	return false;
}

bool func_425(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 12)
		{
			return true;
		}
	}
	return false;
}

bool func_426(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 16)
		{
			return true;
		}
	}
	return false;
}

bool func_427(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 14)
		{
			return true;
		}
	}
	return false;
}

bool func_428(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 11)
		{
			return true;
		}
	}
	return false;
}

bool func_429(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if ((iParam1 == 1 || iParam1 == 2) || iParam1 == 3)
		{
			return true;
		}
	}
	return false;
}

void func_430(bool bParam0)
{
	*bParam0 = 0;
	if (func_405(-1, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, false);
	}
	if (func_405(-1, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, true);
	}
	if (func_405(43, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 2);
	}
	if (func_405(44, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 3);
	}
	if (func_405(45, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 4);
	}
	if (func_405(55, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 5);
	}
	if (func_405(56, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 6);
	}
	if (func_405(57, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 7);
	}
	if (func_405(58, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 8);
	}
	if (func_405(59, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 9);
	}
	if (func_405(60, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 10);
	}
	if (func_405(-1, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 11);
	}
	if (func_405(47, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 12);
	}
	if (func_405(48, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 13);
	}
	if (func_405(49, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 14);
	}
	if (func_405(50, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 15);
	}
	if (func_405(-1, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 16);
	}
	if (func_405(13, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 17);
	}
	if (func_405(14, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 18);
	}
	if (func_405(15, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 19);
	}
	if (func_405(16, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 20);
	}
	if (func_405(-1, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 21);
	}
	if (func_405(77, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 22);
	}
	if (func_405(-1, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 23);
	}
	if (func_405(-1, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 24);
	}
	if (func_405(-1, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 25);
	}
	if (func_405(-1, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 26);
	}
	if (func_405(-1, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 27);
	}
	if (func_405(-1, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 28);
	}
	if (func_405(46, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 29);
	}
}

void func_431(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xD8B681091EBE4064(iVar0, bParam1, 1);
	}
}

bool func_432(int iParam0)
{
	if (func_102(76, iParam0) == 1)
	{
		return true;
	}
	return false;
}

int func_433(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_434(bool bParam0, float fParam1)
{
	UNK_0x090939265EBDAE0D(func_28(bParam0), fParam1);
}

void func_435(bool bParam0, char* sParam1)
{
	UNK_0x1FF7374D40CF9489(func_28(bParam0), sParam1);
}

int func_436(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;

	iVar0 = 0;
	while (func_382(iVar0, &uVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*bParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*bParam4 = -1;
	return 0;
}

void func_437(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("TAILGATER");
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = joaat("PREMIER");
			}
			switch (iVar0)
			{
				case joaat("TAILGATER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				case joaat("PREMIER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		case 2:
			iVar0 = joaat("BODHI2");
			switch (iVar0)
			{
				case joaat("BODHI2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("BUFFALO2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("BAGGER");
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = joaat("BAGGER");
			}
			else
			{
				iVar0 = joaat("BUFFALO2");
			}
			switch (iVar0)
			{
				case joaat("BAGGER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				case joaat("BUFFALO2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		default:
			break;
	}
}

bool func_438(int iParam0)
{
	if (func_250(iParam0))
	{
		if ((Global_111638.f_9080 || Global_3) || func_246(0))
		{
			return Global_111638.f_2358.f_539.f_2348[iParam0];
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_439(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_440(var uParam0, int iParam1)
{
	*uParam0 = Global_1323615[iParam1 /*141*/].f_66;
	uParam0->f_3 = Global_1323615[iParam1 /*141*/].f_65;
	uParam0->f_4 = Global_1323615[iParam1 /*141*/].f_62;
	uParam0->f_5 = Global_1323615[iParam1 /*141*/].f_63;
	uParam0->f_6 = Global_1323615[iParam1 /*141*/].f_64;
	uParam0->f_10 = Global_1323615[iParam1 /*141*/].f_69;
	uParam0->f_16 = UNK_0xEAE0D21A50E6C7F4(Global_1323615[iParam1 /*141*/].f_77, 9);
	uParam0->f_19 = { Global_1323615[iParam1 /*141*/].f_1 };
	uParam0->f_23 = Global_1323615[iParam1 /*141*/];
	uParam0->f_7 = Global_1323615[iParam1 /*141*/].f_9[11];
	uParam0->f_8 = Global_1323615[iParam1 /*141*/].f_9[12];
	uParam0->f_9 = Global_1323615[iParam1 /*141*/].f_9[23];
	uParam0->f_11 = Global_1323615[iParam1 /*141*/].f_9[4];
	uParam0->f_12 = Global_1323615[iParam1 /*141*/].f_9[15];
	uParam0->f_13 = Global_1323615[iParam1 /*141*/].f_9[16];
	uParam0->f_14 = Global_1323615[iParam1 /*141*/].f_9[14];
	uParam0->f_15 = Global_1323615[iParam1 /*141*/].f_9[22];
	uParam0->f_18 = Global_1323615[iParam1 /*141*/].f_9[20];
	uParam0->f_17 = Global_1323615[iParam1 /*141*/].f_9[18];
	uParam0->f_40 = UNK_0xEAE0D21A50E6C7F4(Global_1323615[iParam1 /*141*/].f_102, 25);
	uParam0->f_41 = UNK_0xEAE0D21A50E6C7F4(Global_1323615[iParam1 /*141*/].f_102, 26);
	func_436(Global_1323615[iParam1 /*141*/].f_5, Global_1323615[iParam1 /*141*/].f_7, Global_1323615[iParam1 /*141*/].f_137, 1, &(uParam0->f_1));
	func_436(Global_1323615[iParam1 /*141*/].f_6, -1, Global_1323615[iParam1 /*141*/].f_138, 0, &(uParam0->f_2));
	if (UNK_0xEAE0D21A50E6C7F4(Global_1323615[iParam1 /*141*/].f_77, 13))
	{
		uParam0->f_1 = -1;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1323615[iParam1 /*141*/].f_77, 12))
	{
		uParam0->f_2 = -1;
	}
	uParam0->f_42 = Global_2097152[func_191() /*10930*/].f_6086.f_52;
}

bool func_441(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 307)
	{
		if (func_442(iVar0, &iVar1))
		{
			if (iVar1 == iParam0)
			{
				*iParam1 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_442(int iParam0, int iParam1)
{
	int iVar0;

	*iParam1 = -1;
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 <= 9)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 13 && iParam0 <= 22)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 26 && iParam0 <= 35)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 39 && iParam0 <= 48)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 52 && iParam0 <= 61)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((iParam0 >= 65 && iParam0 <= 74) || (iParam0 >= 75 && iParam0 <= 84))
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((((iParam0 >= 88 && iParam0 <= 107) || (iParam0 >= 108 && iParam0 <= 127)) || (iParam0 >= 128 && iParam0 <= 147)) || (iParam0 >= 148 && iParam0 <= 155))
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0 += 20;
	if (iParam0 >= 179 && iParam0 <= 185)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 191 && iParam0 <= 221)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 227 && iParam0 <= 235)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 237 && iParam0 <= 245)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 247 && iParam0 <= 255)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (iParam0 >= 258 && iParam0 <= 267)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (*iParam1 >= 212 || *iParam1 == -1)
	{
		*iParam1 = 0;
		return false;
	}
	return *iParam1 != -1;
}

void func_443()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (UNK_0x8CD06866876216F2() && func_160(UNK_0xD803B885F5E47A62(), 1, 1))
	{
		if (func_444())
		{
			if (!func_23(3612, -1, -1))
			{
				func_14(2921, 1, -1, 1);
				func_14(2922, 1, -1, 1);
				func_14(2923, 1, -1, 1);
				func_14(2924, 1, -1, 1);
				func_14(2925, 1, -1, 1);
				func_14(3612, 1, -1, 1);
			}
		}
		else if (func_23(3612, -1, -1))
		{
			func_14(3612, 0, -1, 1);
		}
		iVar0 = func_191();
		if (((((iVar0 == 0 && func_23(2921, -1, -1)) || (iVar0 == 1 && func_23(2922, -1, -1))) || (iVar0 == 2 && func_23(2923, -1, -1))) || (iVar0 == 3 && func_23(2924, -1, -1))) || (iVar0 == 4 && func_23(2925, -1, -1)))
		{
			iVar1 = 0;
			while (iVar1 < 10)
			{
				iVar2 = (Global_2097152[iVar0 /*10930*/].f_6086.f_74[iVar1] - 1);
				if (((iVar2 >= 0 && Global_1323615[iVar2 /*141*/].f_66 != 0) && (!UNK_0xEAE0D21A50E6C7F4(Global_1323615[iVar2 /*141*/].f_102, true) || UNK_0xEAE0D21A50E6C7F4(Global_1323615[iVar2 /*141*/].f_102, 2))) && func_212(Global_1323615[iVar2 /*141*/].f_66))
				{
					if (func_442(iVar2, &uVar3))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Global_1323615[iVar2 /*141*/].f_102, 26))
						{
							UNK_0x5D96D8530B3D0904(&(Global_1323615[iVar2 /*141*/].f_102), 25);
						}
					}
				}
				iVar1++;
			}
			Global_2097152[iVar0 /*10930*/].f_6086.f_53 = 0;
			if (iVar0 == 0)
			{
				func_14(2921, 0, -1, 1);
			}
			if (iVar0 == 1)
			{
				func_14(2922, 0, -1, 1);
			}
			if (iVar0 == 2)
			{
				func_14(2923, 0, -1, 1);
			}
			if (iVar0 == 3)
			{
				func_14(2924, 0, -1, 1);
			}
			if (iVar0 == 4)
			{
				func_14(2925, 0, -1, 1);
			}
		}
	}
}

bool func_444()
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

void func_445()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7[10];
	bool bVar18;
	int iVar19;
	bool bVar20;

	if (!UNK_0x8CD06866876216F2())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar7[iVar0] = Global_2097152[func_191() /*10930*/].f_6086.f_74[iVar0];
		iVar0++;
	}
	switch (iLocal_324)
	{
		case 0:
			bVar6 = false;
			if (!func_446(UNK_0xD803B885F5E47A62(), 1))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					iVar2 = (Global_2097152[func_191() /*10930*/].f_6086.f_74[iVar0] - 1);
					if (iVar2 >= 0 && (Global_1323615[iVar2 /*141*/].f_66 == 0 || (UNK_0xEAE0D21A50E6C7F4(Global_1323615[iVar2 /*141*/].f_102, true) && !UNK_0xEAE0D21A50E6C7F4(Global_1323615[iVar2 /*141*/].f_102, 2))))
					{
						Global_2097152[func_191() /*10930*/].f_6086.f_74[iVar0] = 0;
						iVar7[iVar0] = 0;
						iVar1 = 0;
						while (iVar1 < 10)
						{
							if (Global_2097152[func_191() /*10930*/].f_6086.f_63[iVar1] == iVar2 + 1)
							{
								Global_2097152[func_191() /*10930*/].f_6086.f_63[iVar1] = 0;
							}
							iVar1++;
						}
						bVar6 = true;
					}
					iVar0++;
				}
			}
			if (bVar6)
			{
				iVar1 = 0;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (iVar7[iVar0] != 0)
					{
						Global_2097152[func_191() /*10930*/].f_6086.f_74[iVar1] = iVar7[iVar0];
						iVar1++;
					}
					iVar0++;
				}
				iVar0 = iVar1;
				while (iVar0 <= 9)
				{
					Global_2097152[func_191() /*10930*/].f_6086.f_74[iVar0] = 0;
					iVar0++;
				}
			}
			iLocal_324++;
			break;
		case 1:
			iVar2 = -1;
			if (((Global_2097152[func_191() /*10930*/].f_6174.f_2 != Global_2097152[func_191() /*10930*/].f_6086.f_85 && Global_2097152[func_191() /*10930*/].f_6174.f_2 != -1) && Global_1323615[Global_2097152[func_191() /*10930*/].f_6174.f_2 /*141*/].f_66 != 0) && (!UNK_0xEAE0D21A50E6C7F4(Global_1323615[Global_2097152[func_191() /*10930*/].f_6174.f_2 /*141*/].f_102, true) || UNK_0xEAE0D21A50E6C7F4(Global_1323615[Global_2097152[func_191() /*10930*/].f_6174.f_2 /*141*/].f_102, 2)))
			{
				iVar2 = Global_2097152[func_191() /*10930*/].f_6174.f_2;
				Global_2097152[func_191() /*10930*/].f_6086.f_85 = iVar2;
			}
			else if (Global_2097152[func_191() /*10930*/].f_6086.f_86 != 0)
			{
				iVar2 = (Global_2097152[func_191() /*10930*/].f_6086.f_86 - 1);
				Global_2097152[func_191() /*10930*/].f_6086.f_86 = 0;
			}
			if (iVar2 != -1)
			{
				bVar18 = false;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (Global_2097152[func_191() /*10930*/].f_6086.f_63[iVar0] == iVar2 + 1)
					{
						bVar18 = true;
					}
					iVar0++;
				}
				if (!bVar18)
				{
					iVar19 = -1;
					iVar0 = 0;
					while (iVar0 < 10)
					{
						if (Global_2097152[func_191() /*10930*/].f_6086.f_74[iVar0] > 0)
						{
							iVar19 = iVar0;
						}
						iVar0++;
					}
					if (iVar19 < 9)
					{
						iVar19++;
					}
					iVar0 = 0;
					while (iVar0 < 10)
					{
						if (Global_2097152[func_191() /*10930*/].f_6086.f_63[iVar0] == Global_2097152[func_191() /*10930*/].f_6086.f_74[iVar19])
						{
							Global_2097152[func_191() /*10930*/].f_6086.f_63[iVar0] = iVar2 + 1;
							iVar0 = 11;
						}
						iVar0++;
					}
				}
				Global_2097152[func_191() /*10930*/].f_6086.f_74[0] = iVar2 + 1;
				iVar1 = 1;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if ((iVar7[iVar0] != 0 && iVar7[iVar0] != iVar2 + 1) && iVar1 < 10)
					{
						Global_2097152[func_191() /*10930*/].f_6086.f_74[iVar1] = iVar7[iVar0];
						iVar1++;
					}
					iVar0++;
				}
				iVar0 = iVar1;
				while (iVar0 <= 9)
				{
					Global_2097152[func_191() /*10930*/].f_6086.f_74[iVar0] = 0;
					iVar0++;
				}
			}
			else
			{
				iVar3 = 0;
				iVar5 = -1;
				iVar0 = 0;
				while (iVar0 <= 9)
				{
					if (Global_2097152[func_191() /*10930*/].f_6086.f_74[iVar0] == 0)
					{
						if (iVar5 == -1)
						{
							iVar5 = iVar0;
						}
						iVar3++;
					}
					iVar0++;
				}
				if (iVar3 > 0)
				{
					iVar4 = 0;
					iVar0 = 0;
					while (iVar0 <= 306)
					{
						if (((func_442(iVar0, &iVar1) && Global_1323615[iVar0 /*141*/].f_66 != 0) && (!UNK_0xEAE0D21A50E6C7F4(Global_1323615[iVar0 /*141*/].f_102, true) || UNK_0xEAE0D21A50E6C7F4(Global_1323615[iVar0 /*141*/].f_102, 2))) && func_212(Global_1323615[iVar0 /*141*/].f_66))
						{
							iVar4++;
						}
						if (iVar4 > (10 - iVar3))
						{
						}
						else
						{
							iVar0++;
						}
					}
					if (iVar4 > (10 - iVar3))
					{
						iVar0 = 0;
						while (iVar0 <= 306)
						{
							if (((func_442(iVar0, &iVar1) && Global_1323615[iVar0 /*141*/].f_66 != 0) && (!UNK_0xEAE0D21A50E6C7F4(Global_1323615[iVar0 /*141*/].f_102, true) || UNK_0xEAE0D21A50E6C7F4(Global_1323615[iVar0 /*141*/].f_102, 2))) && func_212(Global_1323615[iVar0 /*141*/].f_66))
							{
								bVar20 = false;
								iVar1 = 0;
								while (iVar1 < 10)
								{
									if (Global_2097152[func_191() /*10930*/].f_6086.f_63[iVar1] == iVar0 + 1)
									{
										bVar20 = true;
										iVar1 = 11;
									}
									iVar1++;
								}
								if (!bVar20)
								{
									iVar2 = iVar0;
									iVar0 = 308;
								}
							}
							iVar0++;
						}
						if (iVar2 != -1)
						{
							iVar0 = 0;
							while (iVar0 < 10)
							{
								if (Global_2097152[func_191() /*10930*/].f_6086.f_63[iVar0] == Global_2097152[func_191() /*10930*/].f_6086.f_74[iVar5])
								{
									Global_2097152[func_191() /*10930*/].f_6086.f_63[iVar0] = iVar2 + 1;
									iVar0 = 11;
								}
								iVar0++;
							}
							Global_2097152[func_191() /*10930*/].f_6086.f_74[iVar5] = iVar2 + 1;
						}
					}
				}
			}
			iLocal_324++;
			break;
		default:
			iLocal_324++;
			break;
	}
	if (iLocal_324 > 300)
	{
		iLocal_324 = 0;
	}
}

bool func_446(bool bParam0, bool bParam1)
{
	if (func_447(bParam0, bParam1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, 3))
		{
			return true;
		}
	}
	return false;
}

bool func_447(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590535[bParam0 /*876*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, false))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (!bParam2)
	{
		if (func_462(bParam0))
		{
			return true;
		}
	}
	if (!bParam3)
	{
		if (func_461(bParam0))
		{
			return true;
		}
	}
	if (!bParam4)
	{
		if (func_460(bParam0))
		{
			return true;
		}
	}
	if (!bParam5)
	{
		if (func_459(bParam0))
		{
			return true;
		}
	}
	if (!bParam6)
	{
		if (func_458(bParam0))
		{
			return true;
		}
	}
	if (!bParam7)
	{
		if (func_457(bParam0))
		{
			return true;
		}
	}
	if (!bParam8)
	{
		if (func_456(bParam0))
		{
			return true;
		}
	}
	if (!bParam9)
	{
		if (func_455(bParam0))
		{
			return true;
		}
	}
	if (!bParam10)
	{
		if (func_495(bParam0))
		{
			return true;
		}
	}
	if (!bParam11)
	{
		if (func_454(bParam0, 0))
		{
			return true;
		}
	}
	if (!bParam12)
	{
		if (func_453(bParam0))
		{
			return true;
		}
	}
	if (!bParam13)
	{
		if (func_452(bParam0))
		{
			return true;
		}
	}
	if (!bParam14)
	{
		if (func_451(bParam0))
		{
			return true;
		}
	}
	if (!bParam15)
	{
		if (func_450(bParam0))
		{
			return true;
		}
	}
	if (!bParam16)
	{
		if (func_448(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_448(bool bParam0)
{
	if (bParam0 != func_97())
	{
		if (func_160(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[bParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return false;
}

int func_449(int iParam0)
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

bool func_450(bool bParam0)
{
	if (bParam0 != func_97())
	{
		if (func_160(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[bParam0 /*421*/].f_310.f_5) == 16;
			}
		}
	}
	return false;
}

bool func_451(bool bParam0)
{
	if (bParam0 != func_97())
	{
		if (func_160(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[bParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return false;
}

bool func_452(bool bParam0)
{
	if (bParam0 != func_97())
	{
		if (func_160(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[bParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return false;
}

bool func_453(bool bParam0)
{
	if (bParam0 != func_97())
	{
		if (func_160(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[bParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return false;
}

bool func_454(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (bParam1)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("TERBYTE"))
			{
				return true;
			}
		}
	}
	if (bParam0 != func_97())
	{
		if (func_160(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_97())
			{
				return func_449(Global_2425662[bParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return false;
}

bool func_455(bool bParam0)
{
	if (bParam0 != func_97())
	{
		if (func_160(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_456(bool bParam0)
{
	if (bParam0 != func_97())
	{
		if (func_160(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_97())
			{
				return func_449(Global_2425662[bParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return false;
}

bool func_457(bool bParam0)
{
	if (bParam0 != func_97())
	{
		if (func_160(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[bParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return false;
}

bool func_458(bool bParam0)
{
	if (bParam0 != func_97())
	{
		if (func_160(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[bParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return false;
}

bool func_459(bool bParam0)
{
	if (bParam0 != func_97())
	{
		if (func_160(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[bParam0 /*421*/].f_310.f_5) == 4;
			}
		}
	}
	return false;
}

bool func_460(bool bParam0)
{
	if (bParam0 != func_97())
	{
		if (func_160(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[bParam0 /*421*/].f_310.f_5) == 1;
			}
		}
	}
	return false;
}

bool func_461(bool bParam0)
{
	if (bParam0 != func_97())
	{
		if (func_160(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[bParam0 /*421*/].f_310.f_5) == 2;
			}
		}
	}
	return false;
}

bool func_462(bool bParam0)
{
	if (bParam0 != func_97())
	{
		if (func_160(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[bParam0 /*421*/].f_310.f_5) == 0;
			}
		}
	}
	return false;
}

void func_463()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	switch (iLocal_85)
	{
		case 0:
			if (bLocal_84)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					func_478(0, 0);
				}
				func_430(&bVar0);
				UNK_0xEBD5716567F1D347("car");
				if (UNK_0x8CD06866876216F2())
				{
					UNK_0xB5B7B792811308A7(&Local_87);
					UNK_0xB5B7B792811308A7("mpUnlocks");
				}
				else
				{
					UNK_0xB5B7B792811308A7("spUnlocks");
				}
				func_198("unlockBitset1", bVar0);
				bLocal_132[0] = bVar0;
				if (UNK_0x8CD06866876216F2())
				{
					UNK_0x98C61465A1232E0E();
					UNK_0x98C61465A1232E0E();
				}
				else
				{
					UNK_0x98C61465A1232E0E();
				}
				UNK_0xFE0C6A4F9007749F();
				iLocal_85++;
			}
			break;
		case 1:
			func_404(&bVar0);
			UNK_0xEBD5716567F1D347("car");
			if (UNK_0x8CD06866876216F2())
			{
				UNK_0xB5B7B792811308A7(&Local_87);
				UNK_0xB5B7B792811308A7("mpUnlocks");
			}
			else
			{
				UNK_0xB5B7B792811308A7("spUnlocks");
			}
			func_198("unlockBitset2", bVar0);
			bLocal_132[1] = bVar0;
			if (UNK_0x8CD06866876216F2())
			{
				UNK_0x98C61465A1232E0E();
				UNK_0x98C61465A1232E0E();
			}
			else
			{
				UNK_0x98C61465A1232E0E();
			}
			UNK_0xFE0C6A4F9007749F();
			iVar1 = 0;
			while (iVar1 < 6)
			{
				iLocal_137[iVar1] = 0;
				iVar1++;
			}
			iLocal_136 = 0;
			iLocal_85++;
			break;
		case 2:
			if (UNK_0x8CD06866876216F2())
			{
				while (iVar2 < 25 && !bVar3)
				{
					if (func_396(&iLocal_137, iLocal_136) == -1)
					{
						bVar3 = true;
						iLocal_85++;
					}
					iLocal_136++;
					iVar2++;
				}
			}
			else
			{
				iLocal_85++;
			}
			break;
		case 3:
			if (UNK_0x8CD06866876216F2())
			{
				UNK_0xEBD5716567F1D347("car");
				UNK_0xB5B7B792811308A7(&Local_87);
				UNK_0xB5B7B792811308A7(&Local_93);
				func_198("carColoursUnlocked0", iLocal_137[0]);
				uLocal_144[0] = iLocal_137[0];
				func_198("carColoursUnlocked1", iLocal_137[1]);
				uLocal_144[1] = iLocal_137[1];
				func_198("carColoursUnlocked2", iLocal_137[2]);
				uLocal_144[2] = iLocal_137[2];
				func_198("carColoursUnlocked3", iLocal_137[3]);
				uLocal_144[3] = iLocal_137[3];
				func_198("carColoursUnlocked4", iLocal_137[4]);
				uLocal_144[4] = iLocal_137[4];
				func_198("carColoursUnlocked5", iLocal_137[5]);
				uLocal_144[5] = iLocal_137[5];
				func_464(&bVar0);
				func_198("unlockBitset3", bVar0);
				bLocal_132[2] = bVar0;
				UNK_0x98C61465A1232E0E();
				UNK_0x98C61465A1232E0E();
				UNK_0xFE0C6A4F9007749F();
			}
			else
			{
				UNK_0xEBD5716567F1D347("car");
				UNK_0xB5B7B792811308A7("spUnlocks");
				func_396(&iLocal_137, -1);
				func_198("carColoursUnlocked0", iLocal_137[0]);
				uLocal_144[0] = iLocal_137[0];
				func_198("carColoursUnlocked1", iLocal_137[1]);
				uLocal_144[1] = iLocal_137[1];
				func_198("carColoursUnlocked2", iLocal_137[2]);
				uLocal_144[2] = iLocal_137[2];
				func_198("carColoursUnlocked3", iLocal_137[3]);
				uLocal_144[3] = iLocal_137[3];
				func_198("carColoursUnlocked4", iLocal_137[4]);
				uLocal_144[4] = iLocal_137[4];
				func_198("carColoursUnlocked5", iLocal_137[5]);
				uLocal_144[5] = iLocal_137[5];
				UNK_0x98C61465A1232E0E();
				UNK_0xFE0C6A4F9007749F();
			}
			iLocal_85++;
			break;
		case 4:
			bLocal_84 = false;
			iLocal_85 = 0;
			break;
	}
}

void func_464(bool bParam0)
{
	if (func_465(18, 1) || func_405(61, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, false);
	}
	if (func_465(11, 0))
	{
		UNK_0x5D96D8530B3D0904(bParam0, true);
	}
	if (func_465(11, 1) || func_405(47, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 2);
	}
	if (func_465(11, 2) || func_405(48, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 3);
	}
	if (func_465(11, 3) || func_405(49, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 4);
	}
	if (func_465(11, 4) || func_405(50, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 5);
	}
	if (func_465(12, 0))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 6);
	}
	if (func_465(12, 1) || func_405(13, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 7);
	}
	if (func_465(12, 2) || func_405(14, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 8);
	}
	if (func_465(12, 3) || func_405(15, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 9);
	}
	if (func_465(12, 4) || func_405(16, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 10);
	}
	if (func_465(4, 0))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 11);
	}
	if (func_465(4, 1) || func_405(77, -1, 0, -1))
	{
		UNK_0x5D96D8530B3D0904(bParam0, 12);
	}
}

int func_465(int iParam0, int iParam1)
{
	int iVar0;

	if (func_468(bLocal_86, iParam0, iParam1, &iVar0))
	{
		return func_466(iVar0);
	}
	return 1;
}

int func_466(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_51(818, -1, 0);
	iVar1 = func_467(iParam0);
	if (iVar1 == -1)
	{
		return 1;
	}
	else if (iVar0 >= iVar1)
	{
		return 1;
	}
	return 0;
}

int func_467(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1;
		case 2:
			return 1;
		case 1:
			return 1;
		case 9:
			return 2;
		case 10:
			return 2;
		case 11:
			return 2;
		case 12:
			return 3;
		case 5:
			return 3;
		case 3:
			return 3;
		case 6:
			return 4;
		case 7:
			return 4;
		case 8:
			return 4;
		case 40:
			return 5;
		case 38:
			return 5;
		case 37:
			return 5;
		case 46:
			return 6;
		case 45:
			return 6;
		case 47:
			return 6;
		case 48:
			return 7;
		case 41:
			return 7;
		case 39:
			return 7;
		case 42:
			return 8;
		case 43:
			return 8;
		case 44:
			return 8;
		case 16:
			return 9;
		case 14:
			return 9;
		case 13:
			return 9;
		case 21:
			return 10;
		case 22:
			return 10;
		case 23:
			return 10;
		case 24:
			return 11;
		case 17:
			return 11;
		case 15:
			return 11;
		case 18:
			return 12;
		case 19:
			return 12;
		case 20:
			return 12;
		case 27:
			return 13;
		case 26:
			return 13;
		case 25:
			return 13;
		case 32:
			return 14;
		case 34:
			return 14;
		case 35:
			return 14;
		case 36:
			return 15;
		case 28:
			return 15;
		case 33:
			return 15;
		case 29:
			return 16;
		case 30:
			return 16;
		case 31:
			return 16;
		case 52:
			return 17;
		case 50:
			return 17;
		case 49:
			return 17;
		case 57:
			return 18;
		case 58:
			return 18;
		case 59:
			return 18;
		case 60:
			return 19;
		case 53:
			return 19;
		case 51:
			return 19;
		case 54:
			return 20;
		case 55:
			return 20;
		case 56:
			return 20;
		case 85:
			return 21;
		case 86:
			return 21;
		case 87:
			return 21;
		case 88:
			return 22;
		case 89:
			return 22;
		case 90:
			return 22;
		case 91:
			return 23;
		case 92:
			return 23;
		case 93:
			return 23;
		case 94:
			return 24;
		case 95:
			return 24;
		case 96:
			return 24;
		case 97:
			return 25;
		case 98:
			return 25;
		case 99:
			return 25;
		case 100:
			return 26;
		case 101:
			return 26;
		case 102:
			return 26;
		case 103:
			return 27;
		case 104:
			return 27;
		case 105:
			return 27;
		case 106:
			return 28;
		case 107:
			return 28;
		case 108:
			return 28;
		case 64:
			return 29;
		case 62:
			return 29;
		case 61:
			return 29;
		case 69:
			return 30;
		case 70:
			return 30;
		case 71:
			return 30;
		case 72:
			return 31;
		case 65:
			return 31;
		case 63:
			return 31;
		case 66:
			return 32;
		case 67:
			return 32;
		case 68:
			return 32;
		case 109:
			return 33;
		case 110:
			return 33;
		case 111:
			return 33;
		case 112:
			return 34;
		case 113:
			return 34;
		case 114:
			return 34;
		case 115:
			return 35;
		case 116:
			return 35;
		case 117:
			return 35;
		case 118:
			return 36;
		case 119:
			return 36;
		case 120:
			return 36;
		case 121:
			return 37;
		case 122:
			return 37;
		case 123:
			return 37;
		case 124:
			return 38;
		case 125:
			return 38;
		case 126:
			return 38;
		case 127:
			return 39;
		case 128:
			return 39;
		case 129:
			return 39;
		case 131:
			return 40;
		case 130:
			return 40;
		case 132:
			return 40;
		case 76:
			return 41;
		case 74:
			return 41;
		case 73:
			return 41;
		case 81:
			return 42;
		case 82:
			return 42;
		case 83:
			return 42;
		case 84:
			return 43;
		case 77:
			return 43;
		case 75:
			return 43;
		case 78:
			return 44;
		case 79:
			return 44;
		case 80:
			return 44;
		default:
			break;
	}
	return -1;
}

bool func_468(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;

	if (!UNK_0x8CD06866876216F2())
	{
		return false;
	}
	bVar0 = func_469(bParam0);
	*iParam3 = 0;
	if (iParam1 == 11)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bVar0, false))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 1;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 25;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 61;
			}
			else if (iParam2 == 4)
			{
				*iParam3 = 73;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, true))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 2;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 26;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 62;
			}
			else if (iParam2 == 4)
			{
				*iParam3 = 74;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 2))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 3;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 33;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 63;
			}
			else if (iParam2 == 4)
			{
				*iParam3 = 75;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 3))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 4;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 27;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 64;
			}
			else if (iParam2 == 4)
			{
				*iParam3 = 76;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 4))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 5;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 28;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 65;
			}
			else if (iParam2 == 4)
			{
				*iParam3 = 77;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 5))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 6;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 29;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 66;
			}
			else if (iParam2 == 4)
			{
				*iParam3 = 78;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 6))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 7;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 30;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 67;
			}
			else if (iParam2 == 4)
			{
				*iParam3 = 79;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 7))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 8;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 31;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 68;
			}
			else if (iParam2 == 4)
			{
				*iParam3 = 80;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 8))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 9;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 32;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 69;
			}
			else if (iParam2 == 4)
			{
				*iParam3 = 81;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 9))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 10;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 34;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 70;
			}
			else if (iParam2 == 4)
			{
				*iParam3 = 82;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 11))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 11;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 35;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 71;
			}
			else if (iParam2 == 4)
			{
				*iParam3 = 83;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 12))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 12;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 36;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 72;
			}
			else if (iParam2 == 4)
			{
				*iParam3 = 84;
			}
		}
	}
	else if (iParam1 == 18)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bVar0, false))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 49;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, true))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 50;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 2))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 51;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 3))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 52;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 4))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 53;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 5))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 54;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 6))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 55;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 7))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 56;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 8))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 57;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 9))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 58;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 11))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 59;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 12))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 60;
			}
		}
	}
	else if (iParam1 == 13)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bVar0, false))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 37;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 87;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*iParam3 = 111;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, true))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 38;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 86;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*iParam3 = 110;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 2))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 39;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 93;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*iParam3 = 117;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 3))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 40;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 85;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*iParam3 = 109;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 4))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 41;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 92;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*iParam3 = 116;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 5))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 42;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 94;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*iParam3 = 118;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 6))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 43;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 95;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*iParam3 = 119;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 7))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 44;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 96;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 120;
			}
			else if (iParam2 == 4)
			{
				*iParam3 = 120;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 8))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 45;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 88;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*iParam3 = 112;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 9))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 46;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 89;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*iParam3 = 113;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 11))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 47;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 90;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*iParam3 = 114;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 12))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 48;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 91;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*iParam3 = 115;
			}
		}
	}
	else if (iParam1 == 12)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bVar0, false))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 13;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 99;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 123;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, true))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 14;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 98;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 122;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 2))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 15;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 105;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 129;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 3))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 16;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 97;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 121;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 4))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 17;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 104;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 128;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 5))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 18;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 106;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 130;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 6))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 19;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 107;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 131;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 7))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 20;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 108;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 132;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 8))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 21;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 100;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 124;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 9))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 22;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 101;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 125;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 11))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 23;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 102;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 126;
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bVar0, 12))
		{
			if (iParam2 == 1)
			{
				*iParam3 = 24;
			}
			else if (iParam2 == 2)
			{
				*iParam3 = 103;
			}
			else if (iParam2 == 3)
			{
				*iParam3 = 127;
			}
		}
	}
	return *iParam3 != 0;
}

bool func_469(bool bParam0)
{
	var uVar0;
	bool bVar1;

	bVar1 = false;
	while (bVar1 < 19)
	{
		if (func_470(bParam0, bVar1, 0))
		{
			UNK_0x5D96D8530B3D0904(&uVar0, bVar1);
		}
		bVar1++;
	}
	return uVar0;
}

bool func_470(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return true;
	}
	if (bParam1 == 15 || bParam1 == 16)
	{
		if (func_477(bParam0) || func_476(bParam0))
		{
			return true;
		}
	}
	else if (bParam1 == 17)
	{
		if (func_206(bParam0))
		{
			return true;
		}
	}
	else if (bParam1 == 18)
	{
		if (func_475(bParam0))
		{
			return true;
		}
	}
	else if (func_472(bParam0, bParam1))
	{
		return true;
	}
	else if (bParam1 == 14)
	{
	}
	else if (UNK_0xB9E7C6A784D3EC8A(bParam0) == func_471(bParam1))
	{
		return true;
	}
	return false;
}

int func_471(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		case 12:
			return 12;
		case 13:
			return 13;
		case 18:
			return 22;
	}
	return 0;
}

bool func_472(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_474(bParam1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_473(bParam1, iVar1) == bParam0)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_473(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("ADDER");
				case 1:
					return joaat("BULLET");
				case 2:
					return joaat("CHEETAH");
				case 3:
					return joaat("ENTITYXF");
				case 4:
					return joaat("INFERNUS");
				case 5:
					return joaat("VACCA");
				case 6:
					return joaat("VOLTIC");
				case 7:
					return joaat("BANSHEE2");
				case 8:
					return joaat("FMJ");
				case 9:
					return joaat("OSIRIS");
				case 10:
					return joaat("PFISTER811");
				case 11:
					return joaat("PROTOTIPO");
				case 12:
					return joaat("REAPER");
				case 13:
					return joaat("SULTANRS");
				case 14:
					return joaat("T20");
				case 15:
					return joaat("TURISMOR");
				case 16:
					return joaat("ZENTORNO");
				case 17:
					return joaat("LE7B");
				case 18:
					return joaat("TYRUS");
				case 19:
					return joaat("SHEAVA");
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("NINEF2");
				case 1:
					return joaat("BANSHEE");
				case 2:
					return joaat("CARBONIZZARE");
				case 3:
					return joaat("COMET2");
				case 4:
					return joaat("COQUETTE");
				case 5:
					return joaat("FELTZER2");
				case 6:
					return joaat("FUSILADE");
				case 7:
					return joaat("RAPIDGT2");
				case 8:
					return joaat("SULTAN");
				case 9:
					return joaat("ALPHA");
				case 10:
					return joaat("BESTIAGTS");
				case 11:
					return joaat("BLISTA2");
				case 12:
					return joaat("BLISTA3");
				case 13:
					return joaat("BUFFALO");
				case 14:
					return joaat("BUFFALO2");
				case 15:
					return joaat("BUFFALO3");
				case 16:
					return joaat("CARBONIZZARE");
				case 17:
					return joaat("ELEGY2");
				case 18:
					return joaat("FELTZER3");
				case 19:
					return joaat("FUROREGT");
				case 20:
					return joaat("FUTO");
				case 21:
					return joaat("JESTER");
				case 22:
					return joaat("JESTER2");
				case 23:
					return joaat("KHAMELION");
				case 24:
					return joaat("KURUMA");
				case 25:
					return joaat("KURUMA2");
				case 26:
					return joaat("MASSACRO");
				case 27:
					return joaat("MASSACRO2");
				case 28:
					return joaat("NINEF");
				case 29:
					return joaat("PENUMBRA");
				case 30:
					return joaat("RAPIDGT");
				case 31:
					return joaat("SCHWARZER");
				case 32:
					return joaat("SEVEN70");
				case 33:
					return joaat("SURANO");
				case 34:
					return joaat("VERLIERER2");
				case 35:
					return joaat("TROPOS");
				case 36:
					return joaat("TAMPA2");
				case 37:
					return joaat("OMNIS");
				case 38:
					return joaat("LYNX");
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("COGCABRIO");
				case 1:
					return joaat("EXEMPLAR");
				case 2:
					return joaat("F620");
				case 3:
					return joaat("FELON");
				case 4:
					return joaat("FELON2");
				case 5:
					return joaat("JACKAL");
				case 6:
					return joaat("ORACLE");
				case 7:
					return joaat("ORACLE2");
				case 8:
					return joaat("SENTINEL");
				case 9:
					return joaat("SENTINEL2");
				case 10:
					return joaat("WINDSOR");
				case 11:
					return joaat("WINDSOR2");
				case 12:
					return joaat("ZION");
				case 13:
					return joaat("ZION2");
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("BUCCANEER");
				case 1:
					return joaat("DOMINATOR");
				case 2:
					return joaat("GAUNTLET");
				case 3:
					return joaat("PHOENIX");
				case 4:
					return joaat("PICADOR");
				case 5:
					return joaat("RUINER");
				case 6:
					return joaat("SABREGT");
				case 7:
					return joaat("VIGERO");
				case 8:
					return joaat("BLADE");
				case 9:
					return joaat("BUCCANEER2");
				case 10:
					return joaat("CHINO");
				case 11:
					return joaat("CHINO2");
				case 12:
					return joaat("COQUETTE3");
				case 13:
					return joaat("DOMINATOR2");
				case 14:
					return joaat("DUKES");
				case 15:
					return joaat("DUKES2");
				case 16:
					return joaat("FACTION");
				case 17:
					return joaat("FACTION2");
				case 18:
					return joaat("FACTION3");
				case 19:
					return joaat("GAUNTLET2");
				case 20:
					return joaat("HOTKNIFE");
				case 21:
					return joaat("LURCHER");
				case 22:
					return joaat("MOONBEAM");
				case 23:
					return joaat("MOONBEAM2");
				case 24:
					return joaat("NIGHTSHADE");
				case 25:
					return joaat("RATLOADER");
				case 26:
					return joaat("RATLOADER2");
				case 27:
					return joaat("SABREGT2");
				case 28:
					return joaat("SLAMVAN");
				case 29:
					return joaat("SLAMVAN2");
				case 30:
					return joaat("SLAMVAN3");
				case 31:
					return joaat("STALION");
				case 32:
					return joaat("STALION2");
				case 33:
					return joaat("TAMPA");
				case 34:
					return joaat("VIRGO");
				case 35:
					return joaat("VIRGO2");
				case 36:
					return joaat("VIRGO3");
				case 37:
					return joaat("VOODOO");
				case 38:
					return joaat("VOODOO2");
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("JB700");
				case 1:
					return joaat("MONROE");
				case 2:
					return joaat("STINGER");
				case 3:
					return joaat("ZTYPE");
				case 4:
					return joaat("BTYPE");
				case 5:
					return joaat("BTYPE2");
				case 6:
					return joaat("BTYPE3");
				case 7:
					return joaat("CASCO");
				case 8:
					return joaat("COQUETTE2");
				case 9:
					return joaat("MAMBA");
				case 10:
					return joaat("MANANA");
				case 11:
					return joaat("PEYOTE");
				case 12:
					return joaat("PIGALLE");
				case 13:
					return joaat("STINGER");
				case 14:
					return joaat("STINGERGT");
				case 15:
					return joaat("TORNADO");
				case 16:
					return joaat("TORNADO2");
				case 17:
					return joaat("TORNADO3");
				case 18:
					return joaat("TORNADO4");
				case 19:
					return joaat("TORNADO5");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("ASEA");
				case 1:
					return joaat("ASTEROPE");
				case 2:
					return joaat("FUGITIVE");
				case 3:
					return joaat("PREMIER");
				case 4:
					return joaat("PRIMO");
				case 5:
					return joaat("SCHAFTER2");
				case 6:
					return joaat("STANIER");
				case 7:
					return joaat("SUPERD");
				case 8:
					return joaat("SURGE");
				case 9:
					return joaat("TAILGATER");
				case 10:
					return joaat("WASHINGTON");
				case 11:
					return joaat("COG55");
				case 12:
					return joaat("COGNOSCENTI");
				case 13:
					return joaat("COGNOSCENTI2");
				case 14:
					return joaat("EMPEROR");
				case 15:
					return joaat("EMPEROR2");
				case 16:
					return joaat("EMPEROR3");
				case 17:
					return joaat("GLENDALE");
				case 18:
					return joaat("ASEA2");
				case 19:
					return joaat("COG552");
				case 20:
					return joaat("INGOT");
				case 21:
					return joaat("INTRUDER");
				case 22:
					return joaat("LIMO2");
				case 23:
					return joaat("PRIMO2");
				case 24:
					return joaat("REGINA");
				case 25:
					return joaat("ROMERO");
				case 26:
					return joaat("SCHAFTER3");
				case 27:
					return joaat("SCHAFTER4");
				case 28:
					return joaat("SCHAFTER5");
				case 29:
					return joaat("SCHAFTER6");
				case 30:
					return joaat("STRATUM");
				case 31:
					return joaat("STRETCH");
				case 32:
					return joaat("WARRENER");
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("BALLER");
				case 1:
					return joaat("BALLER2");
				case 2:
					return joaat("BJXL");
				case 3:
					return joaat("CAVALCADE");
				case 4:
					return joaat("CAVALCADE2");
				case 5:
					return joaat("CRUSADER");
				case 6:
					return joaat("DUBSTA");
				case 7:
					return joaat("GRANGER");
				case 8:
					return joaat("GRESLEY");
				case 9:
					return joaat("LANDSTALKER");
				case 10:
					return joaat("MESA");
				case 11:
					return joaat("PRANGER");
				case 12:
					return joaat("RADI");
				case 13:
					return joaat("SEMINOLE");
				case 14:
					return joaat("SERRANO");
				case 15:
					return joaat("BALLER3");
				case 16:
					return joaat("BALLER4");
				case 17:
					return joaat("BALLER5");
				case 18:
					return joaat("BALLER6");
				case 19:
					return joaat("DUBSTA2");
				case 20:
					return joaat("FQ2");
				case 21:
					return joaat("HABANERO");
				case 22:
					return joaat("HUNTLEY");
				case 23:
					return joaat("MESA2");
				case 24:
					return joaat("PATRIOT");
				case 25:
					return joaat("ROCOTO");
				case 26:
					return joaat("XLS");
				case 27:
					return joaat("XLS2");
				case 28:
					return joaat("CONTENDER");
				default:
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("BLISTA");
				case 1:
					return joaat("DILETTANTE");
				case 2:
					return joaat("ISSI2");
				case 3:
					return joaat("PRAIRIE");
				case 4:
					return joaat("DILETTANTE2");
				case 5:
					return joaat("PANTO");
				case 6:
					return joaat("RHAPSODY");
				case 7:
					return joaat("BRIOSO");
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("BFINJECTION");
				case 1:
					return joaat("BALLER");
				case 2:
					return joaat("BLAZER");
				case 3:
					return joaat("DLOADER");
				case 4:
					return joaat("DUNE");
				case 5:
					return joaat("PATRIOT");
				case 6:
					return joaat("SANCHEZ");
				case 7:
					return joaat("SANDKING");
				case 8:
					return joaat("PARADISE");
				case 9:
					return joaat("SANCHEZ2");
				case 10:
					return joaat("GUARDIAN");
				case 11:
					return joaat("BIFTA");
				case 12:
					return joaat("BLAZER2");
				case 13:
					return joaat("BLAZER3");
				case 14:
					return joaat("BODHI2");
				case 15:
					return joaat("BRAWLER");
				case 16:
					return joaat("DUBSTA3");
				case 17:
					return joaat("INSURGENT2");
				case 18:
					return joaat("KALAHARI");
				case 19:
					return joaat("MARSHALL");
				case 20:
					return joaat("MESA3");
				case 21:
					return joaat("MONSTER");
				case 22:
					return joaat("RANCHERXL");
				case 23:
					return joaat("RANCHERXL2");
				case 24:
					return joaat("REBEL");
				case 25:
					return joaat("REBEL2");
				case 26:
					return joaat("SANDKING2");
				case 28:
					return joaat("TROPHYTRUCK");
				case 29:
					return joaat("TROPHYTRUCK2");
				case 30:
					return joaat("BF400");
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("BULLDOZER");
				case 1:
					return joaat("CUTTER");
				case 2:
					return joaat("DUMP");
				case 3:
					return joaat("HANDLER");
				case 4:
					return joaat("MIXER");
				case 5:
					return joaat("FLATBED");
				case 6:
					return joaat("GUARDIAN");
				case 7:
					return joaat("MIXER2");
				case 8:
					return joaat("RUBBLE");
				case 9:
					return joaat("TIPTRUCK");
				case 10:
					return joaat("TIPTRUCK2");
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("AIRTUG");
				case 1:
					return joaat("CADDY");
				case 2:
					return joaat("FAGGIO2");
				case 3:
					return joaat("TRACTOR2");
				case 4:
					return joaat("FORKLIFT");
				case 5:
					return joaat("MOWER");
				case 6:
					return joaat("RIPLEY");
				case 7:
					return joaat("ARMYTANKER");
				case 8:
					return joaat("SADLER");
				case 9:
					return joaat("SADLER2");
				case 10:
					return joaat("SCRAP");
				case 11:
					return joaat("TOWTRUCK");
				case 12:
					return joaat("TOWTRUCK2");
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("BOXVILLE");
				case 1:
					return joaat("BURRITO2");
				case 2:
					return joaat("CAMPER");
				case 3:
					return joaat("SPEEDO2");
				case 4:
					return joaat("JOURNEY");
				case 5:
					return joaat("PONY");
				case 6:
					return joaat("RUMPO");
				case 7:
					return joaat("SURFER");
				case 8:
					return joaat("TACO");
				case 9:
					return joaat("YOUGA");
				case 10:
					return joaat("BISON");
				case 11:
					return joaat("BISON2");
				case 12:
					return joaat("BISON3");
				case 13:
					return joaat("BOBCATXL");
				case 14:
					return joaat("BOXVILLE2");
				case 15:
					return joaat("BOXVILLE3");
				case 16:
					return joaat("BOXVILLE4");
				case 17:
					return joaat("BURRITO");
				case 18:
					return joaat("BURRITO3");
				case 19:
					return joaat("BURRITO4");
				case 20:
					return joaat("BURRITO5");
				case 21:
					return joaat("GBURRITO");
				case 22:
					return joaat("GBURRITO2");
				case 23:
					return joaat("MINIVAN");
				case 24:
					return joaat("MINIVAN2");
				case 25:
					return joaat("PARADISE");
				case 26:
					return joaat("PONY2");
				case 27:
					return joaat("RUMPO2");
				case 28:
					return joaat("RUMPO3");
				case 29:
					return joaat("SPEEDO");
				case 30:
					return joaat("SURFER2");
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("AKUMA");
				case 1:
					return joaat("BAGGER");
				case 2:
					return joaat("BATI");
				case 3:
					return joaat("BATI2");
				case 4:
					return joaat("BLAZER");
				case 5:
					return joaat("DAEMON");
				case 6:
					return joaat("DOUBLE");
				case 7:
					return joaat("NEMESIS");
				case 8:
					return joaat("PCJ");
				case 9:
					return joaat("RUFFIAN");
				case 10:
					return joaat("SANCHEZ");
				case 11:
					return joaat("SANCHEZ2");
				case 12:
					return joaat("VADER");
				case 13:
					return joaat("CARBONRS");
				case 14:
					return joaat("ENDURO");
				case 15:
					return joaat("FAGGIO2");
				case 16:
					return joaat("HAKUCHOU");
				case 17:
					return joaat("HEXER");
				case 18:
					return joaat("INNOVATION");
				case 19:
					return joaat("LECTRO");
				case 20:
					return joaat("SOVEREIGN");
				case 21:
					return joaat("THRUST");
				case 22:
					return joaat("VINDICATOR");
				case 23:
					return joaat("GARGOYLE");
				case 24:
					return joaat("CLIFFHANGER");
				case 25:
					return joaat("BF400");
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("BMX");
				case 1:
					return joaat("CRUISER");
				case 2:
					return joaat("SCORCHER");
				case 3:
					return joaat("TRIBIKE");
				case 4:
					return joaat("TRIBIKE2");
					return joaat("TRIBIKE3");
					return 0;
				}

int func_474(bool bParam0)
{
	switch (bParam0)
	{
		case 7:
			return 20;
		case 6:
			return 39;
		case 3:
			return 14;
		case 4:
			return 39;
		case 5:
			return 20;
		case 1:
			return 32;
		case 2:
			return 29;
		case 0:
			return 8;
		case 9:
			return 31;
		case 10:
			return 11;
		case 11:
			return 13;
		case 12:
			return 31;
		case 8:
			return 26;
		case 13:
			return 6;
		default:
			break;
	}
	return 39;
}

bool func_475(bool bParam0)
{
	switch (bParam0)
	{
		case 340154634:
		case -1960756985:
		case 1492612435:
		case 1181339704:
			return true;
		default:
			break;
	}
	return false;
}

int func_476(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("APC"):
		case joaat("HALFTRACK"):
		case joaat("DUNE3"):
		case joaat("OPPRESSOR"):
		case joaat("TAMPA3"):
		case joaat("TRAILERSMALL2"):
		case joaat("TRAILERLARGE"):
		case joaat("TECHNICAL3"):
		case joaat("INSURGENT3"):
		case joaat("PHANTOM3"):
		case joaat("ARDENT"):
		case joaat("NIGHTSHARK"):
		case joaat("HAULER2"):
		case joaat("CADDY3"):
		case joaat("VIGILANTE"):
		case joaat("THRUSTER"):
		case joaat("DELUXO"):
		case joaat("STROMBERG"):
		case joaat("RIOT2"):
		case joaat("CHERNOBOG"):
		case joaat("BARRAGE"):
		case joaat("KHANJALI"):
		case joaat("AVENGER"):
		case joaat("VOLATOL"):
		case joaat("AKULA"):
		case joaat("CARACARA"):
		case joaat("MENACER"):
		case joaat("SCRAMJET"):
		case joaat("OPPRESSOR2"):
		case 1416466158:
			return 1;
		default:
			break;
	}
	if (func_206(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_477(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("VOLTIC2"):
		case joaat("RUINER2"):
		case joaat("DUNE4"):
		case joaat("DUNE5"):
		case joaat("PHANTOM2"):
		case joaat("TECHNICAL2"):
		case joaat("BLAZER5"):
		case joaat("BOXVILLE5"):
		case joaat("WASTELANDER"):
		case joaat("RCBANDITO"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_478(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		func_486(39, 1, 0);
		func_486(40, 1, 0);
		func_486(41, 1, 0);
		func_486(42, 1, 0);
		func_486(43, 1, 0);
	}
	func_479(1, iParam0, 0);
	func_479(2, iParam0, 1);
	func_479(3, iParam0, 2);
	func_479(4, iParam0, 3);
	func_479(103, iParam0, 3);
	func_479(5, iParam0, 0);
	func_479(6, iParam0, 0);
	func_479(7, iParam0, 0);
	func_479(8, iParam0, 0);
	func_479(9, iParam0, 0);
	func_479(10, iParam0, 0);
	func_479(11, iParam0, 0);
	func_479(12, iParam0, 0);
	func_479(13, iParam0, 0);
	func_479(14, iParam0, 2);
	func_479(15, iParam0, 3);
	func_479(16, iParam0, 3);
	func_479(17, iParam0, 0);
	func_479(18, iParam0, 1);
	func_479(19, iParam0, 2);
	func_479(20, iParam0, 2);
	func_479(101, iParam0, 3);
	func_479(102, iParam0, 3);
	func_479(21, iParam0, 0);
	func_479(22, iParam0, 1);
	func_479(23, iParam0, 2);
	func_479(24, iParam0, 3);
	func_479(25, iParam0, 0);
	func_479(26, iParam0, 1);
	func_479(27, iParam0, 2);
	func_479(28, iParam0, 3);
	func_479(29, iParam0, 0);
	func_479(30, iParam0, 0);
	func_479(31, iParam0, 1);
	func_479(32, iParam0, 2);
	func_479(33, iParam0, 3);
	func_479(34, iParam0, 0);
	func_479(35, iParam0, 0);
	func_479(36, iParam0, 0);
	func_479(37, iParam0, 0);
	func_479(38, iParam0, 0);
	func_479(39, iParam0, 0);
	func_479(40, iParam0, 0);
	func_479(41, iParam0, 0);
	func_479(42, iParam0, 0);
	func_479(43, iParam0, 0);
	func_479(44, iParam0, 2);
	func_479(45, iParam0, 3);
	func_479(99, iParam0, 1);
	func_479(46, iParam0, 1);
	func_479(55, iParam0, 0);
	func_479(60, iParam0, 0);
	func_479(59, iParam0, 1);
	func_479(58, iParam0, 1);
	func_479(56, iParam0, 2);
	func_479(57, iParam0, 3);
	func_479(47, iParam0, 0);
	func_479(48, iParam0, 1);
	func_479(49, iParam0, 2);
	func_479(50, iParam0, 3);
	func_479(51, iParam0, 0);
	func_479(52, iParam0, 1);
	func_479(53, iParam0, 2);
	func_479(54, iParam0, 3);
	func_479(106, iParam0, 3);
	func_479(61, iParam0, 0);
	func_479(62, iParam0, 1);
	func_479(63, iParam0, 1);
	func_479(64, iParam0, 2);
	func_479(65, iParam0, 2);
	func_479(66, iParam0, 0);
	func_479(67, iParam0, 1);
	func_479(68, iParam0, 2);
	func_479(69, iParam0, 3);
	func_479(70, iParam0, 3);
	func_479(71, iParam0, 3);
	func_479(72, iParam0, 0);
	func_479(73, iParam0, 0);
	func_479(74, iParam0, 1);
	func_479(75, iParam0, 2);
	func_479(76, iParam0, 3);
	func_479(77, iParam0, 0);
	func_479(78, iParam0, 1);
	func_479(79, iParam0, 2);
	func_479(80, iParam0, 3);
	func_479(100, iParam0, 3);
	func_479(81, iParam0, 0);
	func_479(82, iParam0, 1);
	func_479(83, iParam0, 2);
	func_479(84, iParam0, 3);
	func_479(105, iParam0, 3);
	func_479(85, iParam0, 0);
	func_479(86, iParam0, 0);
	func_479(87, iParam0, 0);
	func_479(88, iParam0, 0);
	func_479(104, iParam0, 0);
	func_479(91, iParam0, 0);
	func_479(92, iParam0, 1);
	func_479(93, iParam0, 2);
	func_479(94, iParam0, 3);
	func_479(95, iParam0, 0);
	func_479(96, iParam0, 1);
	func_479(97, iParam0, 2);
	func_479(98, iParam0, 3);
	if (iParam0 >= 3)
	{
		iVar0 = 0;
		while (iVar0 < 90)
		{
			func_479(iVar0, iParam0, 3);
			iVar0++;
		}
	}
}

void func_479(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 >= iParam2)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358.f_539.f_2241[(iParam0 / 32)], (iParam0 % 32)))
		{
			iVar0 = 0;
			while (iVar0 < Global_111638.f_20113)
			{
				Global_111638.f_20113[iVar0 /*43*/].f_42 = 1;
				iVar0++;
			}
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358.f_539.f_2241[(iParam0 / 32)]), (iParam0 % 32));
			if (iParam2 == 0)
			{
				func_480(0, iParam0, "", 0, 0, 2);
			}
		}
	}
}

void func_480(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
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
	bool bVar13;

	if (func_485(iParam0) && func_405(iParam1, -1, 0, -1))
	{
		if (iParam5 == 8 && iParam4 == 2)
		{
			iParam3 = (iParam3 - 20);
		}
		if ((iParam5 == 15 && iParam3 > 21) && !func_484(iParam0))
		{
			iParam3 = (iParam3 - 21);
		}
		if (iParam0 == joaat("OPPRESSOR2"))
		{
			if (iParam5 == 23)
			{
				if (iParam3 > 2)
				{
					iParam3 = (iParam3 - 26);
				}
			}
		}
		else if (iParam0 == joaat("STRIKEFORCE"))
		{
			if (iParam5 == 18)
			{
				if (iParam3 > 2)
				{
					iParam3 = (iParam3 - 26);
				}
			}
		}
	}
	if (iParam1 == -1)
	{
		if (!func_485(iParam0))
		{
			if (UNK_0x8CD06866876216F2())
			{
				if (iParam0 == 0)
				{
					iVar0 = 0;
					while (iVar0 < 306)
					{
						iVar1 = iVar0 * 3;
						iVar2 = func_483(UNK_0x12AB0310C2281427(bParam2));
						if (iVar2 != -1)
						{
							UNK_0x5D96D8530B3D0904(&(Global_2097152[func_191() /*10930*/].f_6174.f_2685[(iVar1 + (iVar2 / 32))]), (iVar2 % 32));
						}
						iVar0++;
					}
				}
				else
				{
					iVar3 = func_482(iParam0);
					if (iVar3 != -1)
					{
						iVar4 = iVar3 * 3;
						iVar5 = func_483(UNK_0x12AB0310C2281427(bParam2));
						if (iVar5 != -1)
						{
							UNK_0x5D96D8530B3D0904(&(Global_2097152[func_191() /*10930*/].f_6174.f_2685[(iVar4 + (iVar5 / 32))]), (iVar5 % 32));
						}
					}
					iVar6 = func_481(iParam0, iParam3, iParam4, iParam5);
					if (iVar6 > 0)
					{
						UNK_0x5D96D8530B3D0904(&(Global_2097152[func_191() /*10930*/].f_6174.f_3604[(iVar6 / 32)]), (iVar6 % 32));
					}
				}
			}
			return;
		}
		else if (func_405(iParam1, -1, 0, -1) || iParam1 == -1)
		{
			iVar7 = func_481(iParam0, iParam3, iParam4, iParam5);
			if (iVar7 > 0)
			{
				UNK_0x5D96D8530B3D0904(&(Global_2097152[func_191() /*10930*/].f_6174.f_3604[(iVar7 / 32)]), (iVar7 % 32));
			}
		}
	}
	else if (func_485(iParam0) && func_405(iParam1, -1, 0, -1))
	{
		iVar8 = func_481(iParam0, iParam3, iParam4, iParam5);
		if (iVar8 > 0)
		{
			UNK_0x5D96D8530B3D0904(&(Global_2097152[func_191() /*10930*/].f_6174.f_3604[(iVar8 / 32)]), (iVar8 % 32));
		}
	}
	if (iParam0 == 0)
	{
		iVar9 = 0;
		while (iVar9 < 306)
		{
			if (func_405(iParam1, -1, 0, -1))
			{
				iVar10 = (iVar9 * 4 + (iParam1 / 32));
				if (UNK_0x8CD06866876216F2())
				{
					UNK_0x5D96D8530B3D0904(&(Global_2097152[func_191() /*10930*/].f_6174.f_46[iVar10]), (iParam1 % 32));
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(Global_111638.f_668.f_82[iVar10]), (iParam1 % 32));
				}
			}
			iVar9++;
		}
	}
	else if (func_405(iParam1, -1, 0, -1))
	{
		iVar11 = func_482(iParam0);
		if (iVar11 != -1)
		{
			iVar12 = (iVar11 * 4 + (iParam1 / 32));
			bVar13 = (iParam1 % 32);
			if (UNK_0x8CD06866876216F2())
			{
				if ((((iParam0 == joaat("AVARUS") || iParam0 == joaat("CHIMERA")) || iParam0 == joaat("ESSKEY")) && iParam1 == 1) || ((iParam1 == 72 || iParam1 == 66) && iParam0 == joaat("ESSKEY")))
				{
					bVar13 = (bVar13 - 1);
				}
				if (iParam0 == joaat("SPECTER2") && (iParam1 == 21 || iParam1 == 72))
				{
					bVar13 = (bVar13 - 1);
				}
				if (iParam0 == joaat("TRAILERLARGE") && iParam1 == 85)
				{
					bVar13++;
				}
				if (iParam0 == joaat("BOMBUSHKA") && iParam1 == 21)
				{
					bVar13 = (bVar13 - 1);
				}
				if (bVar13 >= 0)
				{
					UNK_0x5D96D8530B3D0904(&(Global_2097152[func_191() /*10930*/].f_6174.f_46[iVar12]), bVar13);
				}
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_668.f_82[iVar12]), bVar13);
			}
		}
	}
}

int func_481(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == joaat("BTYPE2"))
	{
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 51;
	}
	if (iParam0 == joaat("LURCHER"))
	{
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
	}
	else
	{
		iVar0 += 49;
	}
	if (iParam0 == joaat("FACTION2"))
	{
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 73 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 75 && iParam1 >= 2) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 268;
	}
	if (iParam0 == joaat("BUCCANEER2"))
	{
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 75 && iParam1 >= 2) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 73 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 319;
	}
	if (iParam0 == joaat("CHINO2"))
	{
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 315;
	}
	if (iParam0 == joaat("MOONBEAM2"))
	{
		if ((iParam3 == 6 && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 68 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if ((iParam3 == 69 && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 308;
	}
	if (iParam0 == joaat("PRIMO2"))
	{
		if ((iParam3 == 80 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 81 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 73 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 309;
	}
	if (iParam0 == joaat("VOODOO"))
	{
		if ((iParam3 == 79 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 80 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 81 && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 6 && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 326;
	}
	if (iParam0 == joaat("FACTION"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("BUCCANEER"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("CHINO"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("MOONBEAM"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("PRIMO"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("VOODOO2"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("SULTAN"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("BANSHEE"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("BANSHEE2"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (iParam3 == 65)
		{
			if (Global_262145.f_11570)
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
			else
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 114;
	}
	if (iParam0 == joaat("SULTANRS"))
	{
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (iParam3 == 65)
		{
			if (Global_262145.f_11570)
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
			else
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 221;
	}
	if (iParam0 == joaat("BTYPE3"))
	{
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 93 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 94 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 16;
	}
	if (iParam0 == joaat("FACTION"))
	{
		if (iParam3 == 61 && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("SABREGT"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("TORNADO"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("TORNADO2"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("TORNADO3"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("VIRGO3"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("MINIVAN"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("SLAMVAN"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("FACTION3"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (iParam3 == 65)
		{
			if (Global_262145.f_11570)
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
			else
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
		}
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 272;
	}
	if (iParam0 == joaat("MINIVAN2"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
	}
	else
	{
		iVar0 += 281;
	}
	if (iParam0 == joaat("SABREGT2"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 234;
	}
	if (iParam0 == joaat("SLAMVAN3"))
	{
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
	}
	else
	{
		iVar0 += 315;
	}
	if (iParam0 == joaat("TORNADO5"))
	{
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 91 && iParam2 == 3) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 382;
	}
	if (iParam0 == joaat("VIRGO2"))
	{
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 290;
	}
	if (iParam0 == joaat("AVARUS"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("CHIMERA"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("DAEMON2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("ZOMBIEA"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("ZOMBIEB"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("SANCTUS"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("WOLFSBANE"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 28)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 29;
	}
	else
	{
		iVar0 += 29;
	}
	if (iParam0 == joaat("BLAZER4"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("YOUGA2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0 += 20;
	}
	if (iParam0 == joaat("FCR2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 59;
	}
	if (iParam0 == joaat("DIABLOUS2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("NIGHTBLADE"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("FAGGIO3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("FAGGIO"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("DEFILER"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("ESSKEY"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("HAKUCHOU2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("MANCHEZ"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("VORTEX"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("APC"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("HALFTRACK"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("DUNE3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("TAMPA3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("NIGHTSHARK"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("TRAILERSMALL2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("OPPRESSOR"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("INSURGENT3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("TECHNICAL3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("ARDENT"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("SPECTER2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 67 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if ((iParam3 == 68 && iParam2 == 0) && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 116;
	}
	if (iParam0 == joaat("COMET3"))
	{
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if ((iParam3 == 68 && iParam2 == 0) && iParam1 == 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 200;
	}
	if (iParam0 == joaat("ELEGY"))
	{
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if ((iParam3 == 91 && iParam2 == 1) && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 68 && iParam2 == 0) && iParam1 == 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 252;
	}
	if (iParam0 == joaat("ITALIGTB2"))
	{
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 67 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 122;
	}
	if (iParam0 == joaat("NERO2"))
	{
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 67 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 81 && iParam2 == 0) && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
	}
	else
	{
		iVar0 += 105;
	}
	if (iParam0 == joaat("STARLING"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("NOKOTA"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("ROGUE"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("MOLOTOK"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("BOMBUSHKA"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("TULA"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("HUNTER"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("SEABREEZE"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("ALPHAZ1"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("HAVOK"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("RETINUE"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("MICROLIGHT"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("VISIONE"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("COMET4"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("BARRAGE"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("AVENGER"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("GB200"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 53;
	}
	if (iParam0 == joaat("FAGALOA"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 65;
	}
	if (iParam0 == joaat("MICHELLI"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 58;
	}
	if (iParam0 == joaat("ELLIE"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 27;
	}
	if (iParam0 == joaat("ISSI3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 114;
	}
	if (iParam0 == joaat("TEZERACT"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 43;
	}
	if (iParam0 == joaat("FLASHGT"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 56;
	}
	if (iParam0 == joaat("CARACARA"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("CHEBUREK"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 62;
	}
	if (iParam0 == joaat("DOMINATOR3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 19)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 20;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 115;
	}
	if (iParam0 == joaat("TYRANT"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 12;
	}
	if (iParam0 == joaat("TAIPAN"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 47;
	}
	if (iParam0 == joaat("ENTITY2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
	}
	else
	{
		iVar0 += 26;
	}
	if (iParam0 == joaat("HOTRING"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("JESTER3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 77;
	}
	if (iParam0 == joaat("STAFFORD"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 8;
	}
	if (iParam0 == joaat("SPEEDO4"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 31;
	}
	if (iParam0 == joaat("MULE4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 32;
	}
	if (iParam0 == joaat("POUNDER2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 35;
	}
	if (iParam0 == joaat("SWINGER"))
	{
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 55;
	}
	if (iParam0 == joaat("PATRIOT2"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 43;
	}
	if (iParam0 == joaat("OPPRESSOR2"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == joaat("MENACER"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 115;
	}
	if (iParam0 == joaat("FREECRAWLER"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 61;
	}
	if (iParam0 == joaat("SCRAMJET"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("STRIKEFORCE"))
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
	}
	else
	{
		iVar0 += 30;
	}
	if (iParam0 == joaat("PATRIOT"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("PRAIRIE"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("CLIQUE"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 43;
	}
	if (iParam0 == joaat("DEVESTE"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 48;
	}
	if (iParam0 == joaat("DEVIANT"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 66;
	}
	if (iParam0 == joaat("IMPALER"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == joaat("SCHLAGEN"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 86;
	}
	if (iParam0 == joaat("TOROS"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 96;
	}
	if (iParam0 == joaat("VAMOS"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 67;
	}
	if (iParam0 == joaat("TULIP"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 45;
	}
	if (iParam0 == joaat("IMPALER2"))
	{
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 59 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 75;
	}
	if (iParam0 == joaat("ITALIGTO"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
	}
	else
	{
		iVar0 += 77;
	}
	if (iParam0 == joaat("DOMINATOR4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == joaat("SCARAB"))
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 90;
	}
	if (iParam0 == joaat("CERBERUS"))
	{
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 76;
	}
	if (iParam0 == joaat("CERBERUS2"))
	{
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 80;
	}
	if (iParam0 == joaat("BRUISER"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == joaat("MONSTER3"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
	}
	else
	{
		iVar0 += 46;
	}
	if (iParam0 == joaat("SLAMVAN4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 59;
	}
	if (iParam0 == joaat("IMPERATOR"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 79;
	}
	if (iParam0 == joaat("ZR380"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 63;
	}
	if (iParam0 == joaat("ISSI4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 123;
	}
	if (iParam0 == joaat("DEATHBIKE"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 23;
	}
	if (iParam0 == joaat("BRUTUS"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 70;
	}
	if (iParam0 == joaat("ZR3802"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 86;
	}
	if (iParam0 == joaat("DOMINATOR5"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == joaat("DEATHBIKE2"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 40;
	}
	if (iParam0 == joaat("ISSI6"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 98;
	}
	if (iParam0 == joaat("ZR3803"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 63;
	}
	if (iParam0 == joaat("DOMINATOR6"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == joaat("DEATHBIKE3"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 14;
	}
	if (iParam0 == joaat("RCBANDITO"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == joaat("MONSTER5"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 55;
	}
	if (iParam0 == joaat("SCARAB2"))
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 108;
	}
	if (iParam0 == joaat("IMPALER3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 50;
	}
	if (iParam0 == joaat("IMPALER4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == joaat("BRUTUS3"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 72;
	}
	if (iParam0 == joaat("MONSTER4"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 62;
	}
	if (iParam0 == joaat("BRUISER2"))
	{
		if (((iParam3 == 45 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 73;
	}
	if (iParam0 == joaat("BRUISER3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 75;
	}
	if (iParam0 == joaat("ISSI5"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 129;
	}
	if (iParam0 == joaat("CERBERUS3"))
	{
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 76;
	}
	if (iParam0 == joaat("SLAMVAN5"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
	}
	else
	{
		iVar0 += 66;
	}
	if (iParam0 == joaat("IMPERATOR2"))
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 68;
	}
	if (iParam0 == joaat("IMPERATOR3"))
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == joaat("BRUTUS2"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 68;
	}
	if (iParam0 == joaat("SCARAB3"))
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 90;
	}
	if (iParam0 == joaat("SLAMVAN6"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 59;
	}
	if (iParam0 == -1349095620)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 58;
	}
	if (iParam0 == 686471183)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == 310284501)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 81;
	}
	if (iParam0 == 722226637)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0 += 87;
	}
	if (iParam0 == 1934384720)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 86;
	}
	if (iParam0 == -362150785)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 94;
	}
	if (iParam0 == 1854776567)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 65;
	}
	if (iParam0 == -664141241)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 37;
	}
	if (iParam0 == joaat("LOCUST"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 70;
	}
	if (iParam0 == -882629065)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 61;
	}
	if (iParam0 == -1620126302)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 87;
	}
	if (iParam0 == -1829436850)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 53;
	}
	if (iParam0 == -324618589)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 32;
	}
	if (iParam0 == 1044193113)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 80;
	}
	if (iParam0 == 1862507111)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 78;
	}
	if (iParam0 == -682108547)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 38;
	}
	if (iParam0 == 1323778901)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 23)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 24;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 72;
	}
	if (iParam0 == joaat("PEYOTE"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == -1804415708)
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
	}
	else
	{
		iVar0 += 57;
	}
	if (iParam0 == 916547552)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 16;
	}
	if (iParam0 == -208911803)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 54;
	}
	if (iParam0 == -447711397)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == 1416466158)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == 83136452)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 94;
	}
	if (iParam0 == -1132721664)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 24)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 25;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 125;
	}
	if (iParam0 == 1118611807)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 93;
	}
	if (iParam0 == 987469656)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 100;
	}
	if (iParam0 == -834353991)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 24)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 25;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 115;
	}
	if (iParam0 == 1284356689)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 30)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 31;
	}
	else
	{
		iVar0 += 87;
	}
	if (iParam0 == 1456336509)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 83;
	}
	if (iParam0 == -1756021720)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 81;
	}
	if (iParam0 == 872704284)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 101;
	}
	if (iParam0 == 409049982)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 145;
	}
	if (iParam0 == joaat("OUTLAW"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == 340154634)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 47;
	}
	if (iParam0 == 301304410)
	{
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 23;
	}
	if (iParam0 == 394110044)
	{
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 5;
	}
	if (iParam0 == 740289177)
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 30)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 31;
	}
	else
	{
		iVar0 += 60;
	}
	if (iParam0 == 2031587082)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 64;
	}
	if (iParam0 == 1693751655)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 51 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == 960812448)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 84;
	}
	if (iParam0 == -1960756985)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == -1254331310)
	{
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 15;
	}
	if (iParam0 == -2122646867)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 22) && iParam1 <= 23)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 59 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 54 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 207;
	}
	if (iParam0 == 1717532765)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 65 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
	}
	else
	{
		iVar0 += 204;
	}
	if (iParam0 == joaat("MANANA"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("YOSEMITE"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == 2134119907)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 59 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 26)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 27;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
	}
	else
	{
		iVar0 += 114;
	}
	if (iParam0 == joaat("CLUB"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 54 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 22) && iParam1 <= 27)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
	}
	else
	{
		iVar0 += 85;
	}
	if (iParam0 == 1802742206)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 43 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 24 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 7 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 91 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 182;
	}
	if (iParam0 == 1107404867)
	{
		if (((iParam3 == 91 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 65 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 45 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 207;
	}
	if (iParam0 == -913589546)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 91 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 65 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 207;
	}
	if (iParam0 == 67753863)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 43 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 7 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 84 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 65 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 51 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 264;
	}
	if (iParam0 == -1810806490)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 43 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 75;
	}
	if (iParam0 == -631322662)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 19 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 145;
	}
	if (iParam0 == joaat("GLENDALE"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == -838099166)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
	}
	else
	{
		iVar0 += 62;
	}
	if (iParam0 == -1728685474)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 54 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 60;
	}
	if (iParam0 == 1492612435)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 28;
	}
	if (iParam0 == 1181339704)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 57;
	}
	if (iParam0 == -1358197432)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 51;
	}
	if (iVar0 > 16000)
	{
	}
	return 0;
}

int func_482(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ADDER"):
			return 0;
		case joaat("AKUMA"):
			return 1;
		case joaat("ASEA"):
			return 2;
		case joaat("ASTEROPE"):
			return 3;
		case joaat("BAGGER"):
			return 4;
		case joaat("BALLER"):
			return 5;
		case joaat("BANSHEE"):
		case joaat("BANSHEE2"):
			return 6;
		case joaat("BATI"):
			return 7;
		case joaat("BATI2"):
			return 8;
		case joaat("BFINJECTION"):
			return 9;
		case joaat("BISON"):
			return 10;
		case joaat("BISON2"):
			return 11;
		case joaat("BISON3"):
			return 12;
		case joaat("BJXL"):
			return 13;
		case joaat("BTYPE"):
			return 14;
		case joaat("BLAZER"):
			return 15;
		case joaat("BLAZER2"):
			return 15;
		case joaat("BLAZER3"):
			return 15;
		case joaat("BLISTA"):
			return 16;
		case joaat("BOBCATXL"):
			return 17;
		case joaat("BODHI2"):
			return 18;
		case joaat("BOXVILLE"):
			return 19;
		case joaat("BOXVILLE2"):
			return 20;
		case joaat("BOXVILLE3"):
			return 21;
		case joaat("BUCCANEER"):
		case joaat("BUCCANEER2"):
			return 22;
		case joaat("BUFFALO"):
			return 23;
		case joaat("BUFFALO2"):
			return 24;
		case joaat("BULLET"):
			return 25;
		case joaat("BURRITO"):
			return 26;
		case joaat("PARADISE"):
			return 27;
		case joaat("BIFTA"):
			return 28;
		case joaat("KALAHARI"):
			return 29;
		case joaat("CARBONIZZARE"):
			return 30;
		case joaat("CARBONRS"):
			return 31;
		case joaat("CAVALCADE"):
			return 32;
		case joaat("CAVALCADE2"):
			return 33;
		case joaat("CHEETAH"):
			return 34;
		case joaat("COGCABRIO"):
			return 35;
		case joaat("COMET2"):
			return 36;
		case joaat("COQUETTE"):
		case joaat("COQUETTE2"):
			return 37;
		case joaat("DAEMON"):
			return 38;
		case joaat("DILETTANTE"):
			return 39;
		case joaat("DOMINATOR"):
			return 40;
		case joaat("DOUBLE"):
			return 41;
		case joaat("DUBSTA"):
			return 42;
		case joaat("DUBSTA2"):
			return 43;
		case joaat("ELEGY2"):
			return 44;
		case joaat("EMPEROR"):
			return 45;
		case joaat("EMPEROR2"):
			return 46;
		case joaat("EMPEROR3"):
			return 47;
		case joaat("ENTITYXF"):
			return 48;
		case joaat("EXEMPLAR"):
			return 49;
		case joaat("F620"):
			return 50;
		case joaat("FAGGIO2"):
			return 51;
		case joaat("FELON"):
			return 52;
		case joaat("FELON2"):
			return 53;
		case joaat("FELTZER2"):
			return 54;
		case joaat("FQ2"):
			return 55;
		case joaat("FUGITIVE"):
			return 56;
		case joaat("FUSILADE"):
			return 57;
		case joaat("FUTO"):
			return 58;
		case joaat("GAUNTLET"):
			return 59;
		case joaat("GBURRITO"):
			return 60;
		case joaat("GRANGER"):
			return 61;
		case joaat("GRESLEY"):
			return 62;
		case joaat("HABANERO"):
			return 63;
		case joaat("HEXER"):
			return 64;
		case joaat("HOTKNIFE"):
			return 65;
		case joaat("INFERNUS"):
			return 66;
		case joaat("INGOT"):
			return 67;
		case joaat("INTRUDER"):
			return 68;
		case joaat("ISSI2"):
			return 69;
		case joaat("JACKAL"):
			return 70;
		case joaat("JB700"):
			return 71;
		case joaat("KHAMELION"):
			return 72;
		case joaat("LANDSTALKER"):
			return 73;
		case joaat("LGUARD"):
			return 74;
		case joaat("MANANA"):
			return 75;
		case joaat("MESA"):
			return 76;
		case joaat("MINIVAN"):
		case joaat("MINIVAN2"):
			return 77;
		case joaat("MONROE"):
			return 78;
		case joaat("NEMESIS"):
			return 79;
		case joaat("NINEF"):
			return 80;
		case joaat("NINEF2"):
			return 81;
		case joaat("ORACLE"):
			return 82;
		case joaat("ORACLE2"):
			return 83;
		case joaat("PATRIOT"):
			return 84;
		case joaat("PCJ"):
			return 85;
		case joaat("PENUMBRA"):
			return 86;
		case joaat("PEYOTE"):
			return 87;
		case joaat("PHOENIX"):
			return 88;
		case joaat("PRAIRIE"):
			return 89;
		case joaat("PRANGER"):
			return 90;
		case joaat("PREMIER"):
			return 91;
		case joaat("PRIMO"):
		case joaat("PRIMO2"):
			return 92;
		case joaat("RADI"):
			return 93;
		case joaat("RANCHERXL"):
			return 94;
		case joaat("RANCHERXL2"):
			return 95;
		case joaat("RAPIDGT"):
			return 96;
		case joaat("RAPIDGT2"):
			return 97;
		case joaat("RATLOADER"):
			return 98;
		case joaat("REBEL"):
			return 99;
		case joaat("REBEL2"):
			return 100;
		case joaat("REGINA"):
			return 101;
		case joaat("ROCOTO"):
			return 102;
		case joaat("RUFFIAN"):
			return 103;
		case joaat("RUINER"):
			return 104;
		case joaat("RUMPO"):
			return 105;
		case joaat("SABREGT"):
		case joaat("SABREGT2"):
			return 106;
		case joaat("SADLER"):
			return 107;
		case joaat("SANCHEZ"):
			return 108;
		case joaat("SANDKING"):
			return 109;
		case joaat("SANDKING2"):
			return 110;
		case joaat("SCHAFTER2"):
			return 111;
		case joaat("SCHWARZER"):
			return 112;
		case joaat("SEMINOLE"):
			return 113;
		case joaat("SENTINEL"):
			return 114;
		case joaat("SENTINEL2"):
			return 115;
		case joaat("SERRANO"):
			return 116;
		case joaat("SPEEDO"):
			return 117;
		case joaat("SPEEDO2"):
			return 118;
		case joaat("STANIER"):
			return 119;
		case joaat("STINGER"):
			return 120;
		case joaat("STINGERGT"):
			return 121;
		case joaat("STRATUM"):
			return 122;
		case joaat("STRETCH"):
			return 123;
		case joaat("SULTAN"):
		case joaat("SULTANRS"):
			return 124;
		case joaat("SUPERD"):
			return 125;
		case joaat("SURANO"):
			return 126;
		case joaat("SURGE"):
			return 127;
		case joaat("TAILGATER"):
			return 128;
		case joaat("JESTER"):
			return 129;
		case joaat("TORNADO"):
		case joaat("TORNADO2"):
		case joaat("TORNADO3"):
		case joaat("TORNADO4"):
		case joaat("TORNADO5"):
			return 133;
		case joaat("VACCA"):
			return 134;
		case joaat("VADER"):
			return 135;
		case joaat("VIGERO"):
			return 136;
		case joaat("VOLTIC"):
			return 137;
		case joaat("VOODOO2"):
		case joaat("VOODOO"):
			return 138;
		case joaat("WASHINGTON"):
			return 139;
		case joaat("YOUGA"):
			return 140;
		case joaat("ZION"):
			return 141;
		case joaat("ZION2"):
			return 142;
		case joaat("ZTYPE"):
			return 143;
		case joaat("MASSACRO"):
			return 144;
		case joaat("TURISMOR"):
			return 145;
		case joaat("ZENTORNO"):
			return 146;
		case joaat("HUNTLEY"):
			return 147;
		case joaat("ALPHA"):
			return 148;
		case joaat("CRUISER"):
			return 149;
		case joaat("SURFER"):
			return 150;
		case joaat("FACTION"):
		case joaat("FACTION2"):
			return 151;
		case joaat("CHINO"):
		case joaat("CHINO2"):
			return 152;
		case joaat("MOONBEAM"):
		case joaat("MOONBEAM2"):
			return 153;
		case joaat("BTYPE2"):
			return 154;
		case joaat("LURCHER"):
			return 155;
		case joaat("BTYPE3"):
			return 156;
		case joaat("FACTION3"):
			return 157;
		case joaat("SLAMVAN"):
		case joaat("SLAMVAN2"):
		case joaat("SLAMVAN3"):
			return 158;
		case joaat("VIRGO2"):
			return 159;
		case joaat("VIRGO3"):
			return 160;
		case joaat("BESTIAGTS"):
			return 161;
		case joaat("BRICKADE"):
			return 162;
		case joaat("FMJ"):
			return 163;
		case joaat("NIMBUS"):
			return 164;
		case joaat("PFISTER811"):
			return 165;
		case joaat("PROTOTIPO"):
			return 166;
		case joaat("RUMPO3"):
			return 167;
		case joaat("SEVEN70"):
			return 168;
		case joaat("TUG"):
			return 169;
		case joaat("VOLATUS"):
			return 170;
		case joaat("WINDSOR2"):
			return 171;
		case joaat("XLS"):
			return 172;
		case joaat("XLS2"):
			return 173;
		case joaat("REAPER"):
			return 174;
		case joaat("LE7B"):
			return 175;
	}
	switch (iParam0)
	{
		case joaat("BUFFALO3"):
			return 176;
		case joaat("DOMINATOR2"):
			return 177;
		case joaat("GAUNTLET2"):
			return 178;
		case joaat("STALION2"):
			return 179;
		case joaat("OMNIS"):
			return 180;
		case joaat("TROPOS"):
			return 181;
		case joaat("BRIOSO"):
			return 182;
		case joaat("TROPHYTRUCK"):
			return 183;
		case joaat("TROPHYTRUCK2"):
			return 184;
		case joaat("CONTENDER"):
			return 185;
		case joaat("CLIFFHANGER"):
			return 186;
		case joaat("BF400"):
			return 187;
		case joaat("TYRUS"):
			return 188;
		case joaat("RALLYTRUCK"):
			return 189;
		case joaat("TAMPA2"):
			return 190;
		case joaat("GARGOYLE"):
			return 191;
		case joaat("LYNX"):
			return 192;
		case joaat("SHEAVA"):
			return 193;
		case joaat("AVARUS"):
			return 194;
		case joaat("CHIMERA"):
			return 195;
		case joaat("DAEMON2"):
			return 196;
		case joaat("DEFILER"):
			return 197;
		case joaat("ESSKEY"):
			return 198;
		case joaat("NIGHTBLADE"):
			return 199;
		case joaat("RATBIKE"):
			return 200;
		case joaat("ZOMBIEA"):
			return 202;
		case joaat("ZOMBIEB"):
			return 203;
		case joaat("SHOTARO"):
			return 204;
		case joaat("RAPTOR"):
			return 205;
		case joaat("HAKUCHOU2"):
			return 206;
		case joaat("BLAZER4"):
			return 207;
		case joaat("SANCTUS"):
			return 208;
		case joaat("VORTEX"):
			return 209;
		case joaat("MANCHEZ"):
			return 210;
		case joaat("TORNADO6"):
			return 211;
		case joaat("YOUGA2"):
			return 212;
		case joaat("WOLFSBANE"):
			return 213;
		case joaat("FAGGIO3"):
			return 214;
		case joaat("FAGGIO"):
			return 215;
		case joaat("DUNE5"):
			return 216;
		case joaat("PHANTOM2"):
			return 217;
		case joaat("TECHNICAL2"):
			return 218;
		case joaat("BLAZER5"):
			return 219;
		case joaat("BOXVILLE5"):
			return 220;
		case joaat("WASTELANDER"):
			return 221;
		case joaat("RUINER2"):
			return 222;
		case joaat("VOLTIC2"):
			return 223;
		case joaat("PENETRATOR"):
			return 224;
		case joaat("TEMPESTA"):
			return 225;
		case joaat("ITALIGTB2"):
			return 226;
		case joaat("NERO2"):
			return 227;
		case joaat("DIABLOUS2"):
			return 228;
		case joaat("FCR2"):
			return 229;
		case joaat("ELEGY"):
			return 230;
		case joaat("COMET3"):
			return 232;
		case joaat("SPECTER2"):
			return 232;
		case joaat("NERO"):
			return 233;
		case joaat("ITALIGTB"):
			return 234;
		case joaat("FCR"):
			return 235;
		case joaat("SPECTER"):
			return 236;
		case joaat("DIABLOUS"):
			return 237;
		case joaat("INFERNUS2"):
			return 238;
		case joaat("GP1"):
			return 239;
		case joaat("RUSTON"):
			return 240;
		case joaat("TURISMO2"):
			return 241;
		case joaat("CHEETAH2"):
			return 242;
		case joaat("TORERO"):
			return 243;
		case joaat("VAGNER"):
			return 244;
		case joaat("XA21"):
			return 245;
		case joaat("NIGHTSHARK"):
			return 246;
		case joaat("ARDENT"):
			return 247;
		case joaat("TAMPA3"):
			return 248;
		case joaat("APC"):
			return 249;
		case joaat("DUNE3"):
			return 250;
		case joaat("HALFTRACK"):
			return 251;
		case joaat("OPPRESSOR"):
			return 252;
		case joaat("TRAILERSMALL2"):
			return 253;
		case joaat("INSURGENT3"):
			return 254;
		case joaat("TECHNICAL3"):
			return 255;
		case joaat("HAULER2"):
			return 256;
		case joaat("PHANTOM3"):
			return 257;
		case joaat("TRAILERLARGE"):
			return 258;
		case joaat("LAZER"):
			return 259;
		case joaat("MICROLIGHT"):
			return 260;
		case joaat("MOGUL"):
			return 261;
		case joaat("ROGUE"):
			return 262;
		case joaat("STARLING"):
			return 263;
		case joaat("SEABREEZE"):
			return 264;
		case joaat("TULA"):
			return 265;
		case joaat("PYRO"):
			return 266;
		case joaat("MOLOTOK"):
			return 267;
		case joaat("NOKOTA"):
			return 268;
		case joaat("BOMBUSHKA"):
			return 269;
		case joaat("HUNTER"):
			return 270;
		case joaat("HAVOK"):
			return 271;
		case joaat("HOWARD"):
			return 272;
		case joaat("ALPHAZ1"):
			return 273;
		case joaat("CYCLONE"):
			return 274;
		case joaat("VISIONE"):
			return 275;
		case joaat("VIGILANTE"):
			return 276;
		case joaat("RETINUE"):
			return 277;
		case joaat("RAPIDGT3"):
			return 278;
		case joaat("DELUXO"):
			return 277;
		case joaat("STROMBERG"):
			return 278;
		case joaat("RIOT2"):
			return 279;
		case joaat("CHERNOBOG"):
			return 280;
		case joaat("KHANJALI"):
			return 281;
		case joaat("AKULA"):
			return 282;
		case joaat("THRUSTER"):
			return 283;
		case joaat("AVENGER"):
			return 284;
		case joaat("BARRAGE"):
			return 285;
		case joaat("VOLATOL"):
			return 286;
		case joaat("COMET4"):
			return 287;
		case joaat("NEON"):
			return 288;
		case joaat("STREITER"):
			return 289;
		case joaat("SENTINEL3"):
			return 290;
		case joaat("YOSEMITE"):
			return 291;
		case joaat("HUSTLER"):
			return 292;
		case joaat("RIATA"):
			return 293;
		case joaat("REVOLTER"):
			return 294;
		case joaat("HERMES"):
			return 295;
		case joaat("COMET5"):
			return 296;
		case joaat("Z190"):
			return 297;
		case joaat("VISERIS"):
			return 298;
		case joaat("KAMACHO"):
			return 299;
		case joaat("AUTARCH"):
			return 300;
		case joaat("PARIAH"):
			return 301;
		case joaat("RAIDEN"):
			return 302;
		case joaat("SC1"):
			return 303;
		case joaat("GT500"):
			return 304;
		case joaat("SAVESTRA"):
			return 305;
	}
	return -1;
}

int func_483(int iParam0)
{
	switch (iParam0)
	{
		case -1392019810: /* GXTEntry: "Green Tire Smoke" */
		case -288387677: /* GXTEntry: "Green Smoke" */
			return 0;
		case -1598824969: /* GXTEntry: "Purple Tire Smoke" */
		case 8630539: /* GXTEntry: "Purple Smoke" */
			return 1;
		case 232975537:
		case -2028738140: /* GXTEntry: "Black Smoke" */
			return 2;
		case 462718996:
		case 1489308935: /* GXTEntry: "Blue Smoke" */
			return 3;
		case -444556307:
		case -761265985: /* GXTEntry: "Yellow Smoke" */
			return 4;
		case -213731471:
		case -465001456: /* GXTEntry: "Orange Smoke" */
			return 5;
		case -968041086:
			return 6;
		case -694977009:
		case 2001619481: /* GXTEntry: "White Smoke" */
			return 7;
		case 1523877515:
		case 1076648918: /* GXTEntry: "Red Smoke" */
			return 8;
		case -1518694851:
			return 9;
		case 685937731:
			return 10;
		case 1107182854:
			return 11;
		case 1795528252:
			return 12;
		case 963431690:
			return 13;
		case 7683469:
			return 14;
		case -1485567420:
			return 15;
		case joaat("HORN_CNOTE_C1"):
			return 16;
		case 830480310: /* GXTEntry: "Pure Black" */
			return 17;
		case -835077886:
		case -2078754765: /* GXTEntry: "Pink Smoke" */
			return 18;
		case 1888648625:
		case -1712790573: /* GXTEntry: "Cyan Smoke" */
			return 19;
		case 1708257079:
			return 20;
		case -1440188433:
			return 22;
		case -1813427343:
			return 22;
		case -1940603832:
			return 23;
		case -665245345:
			return 24;
		case 1049163197:
			return 25;
		case -177872008:
			return 26;
		case -366752524:
			return 27;
		case -952091823:
			return 28;
		case -994541731:
			return 29;
		case 2039769366:
			return 30;
		case 1197540528:
			return 31;
		case 321431759:
			return 32;
		case -453129094:
			return 33;
		case 1548219456:
			return 34;
		case 1207356318:
			return 35;
		case 2061273084:
			return 36;
		case 1076531893:
			return 37;
		case 1388066776:
			return 38;
	}
	return -1;
}

bool func_484(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLUB"):
		case -2122646867:
			return true;
		default:
			break;
	}
	return false;
}

bool func_485(int iParam0)
{
	switch (iParam0)
	{
		case joaat("GB200"):
		case joaat("ISSI3"):
		case joaat("FAGALOA"):
		case joaat("ELLIE"):
		case joaat("MICHELLI"):
		case joaat("FLASHGT"):
		case joaat("HOTRING"):
		case joaat("TEZERACT"):
		case joaat("TYRANT"):
		case joaat("DOMINATOR3"):
		case joaat("TAIPAN"):
		case joaat("ENTITY2"):
		case joaat("JESTER3"):
		case joaat("CHEBUREK"):
		case joaat("CARACARA"):
		case joaat("SEASPARROW"):
		case joaat("MULE4"):
		case joaat("SPEEDO4"):
		case joaat("POUNDER2"):
		case joaat("SWINGER"):
		case joaat("PATRIOT2"):
		case joaat("OPPRESSOR2"):
		case joaat("MENACER"):
		case joaat("FREECRAWLER"):
		case joaat("STAFFORD"):
		case joaat("SCRAMJET"):
		case joaat("TERBYTE"):
		case joaat("STRIKEFORCE"):
		case joaat("CLIQUE"):
		case joaat("DEVESTE"):
		case joaat("DEVIANT"):
		case joaat("IMPALER"):
		case joaat("SCARAB"):
		case joaat("SCHLAGEN"):
		case joaat("TOROS"):
		case joaat("VAMOS"):
		case joaat("TULIP"):
		case joaat("MONSTER3"):
		case joaat("IMPALER2"):
		case joaat("BRUISER"):
		case joaat("CERBERUS"):
		case joaat("DOMINATOR4"):
		case joaat("IMPERATOR"):
		case joaat("ISSI4"):
		case joaat("ITALIGTO"):
		case joaat("DEATHBIKE"):
		case joaat("SLAMVAN4"):
		case joaat("BRUTUS"):
		case joaat("IMPERATOR2"):
		case joaat("IMPERATOR3"):
		case joaat("DEATHBIKE2"):
		case joaat("DEATHBIKE3"):
		case joaat("IMPALER3"):
		case joaat("BRUTUS2"):
		case joaat("BRUISER2"):
		case joaat("SLAMVAN5"):
		case joaat("ISSI5"):
		case joaat("MONSTER4"):
		case joaat("SCARAB2"):
		case joaat("CERBERUS2"):
		case joaat("DOMINATOR5"):
		case joaat("ZR3802"):
		case joaat("IMPALER4"):
		case joaat("BRUTUS3"):
		case joaat("BRUISER3"):
		case joaat("SLAMVAN6"):
		case joaat("ISSI6"):
		case joaat("MONSTER5"):
		case joaat("SCARAB3"):
		case joaat("CERBERUS3"):
		case joaat("DOMINATOR6"):
		case joaat("ZR3803"):
		case joaat("ZR380"):
		case joaat("RCBANDITO"):
		case -1349095620:
		case 686471183:
		case 310284501:
		case 722226637:
		case 1934384720:
		case -362150785:
		case 1854776567:
		case -664141241:
		case joaat("LOCUST"):
		case -882629065:
		case -1620126302:
		case -1829436850:
		case -324618589:
		case 1044193113:
		case 1862507111:
		case -682108547:
		case 1323778901:
		case -1804415708:
		case 916547552:
		case -208911803:
		case -447711397:
		case 1416466158:
		case 1118611807:
		case 409049982:
		case 340154634:
		case -1132721664:
		case -834353991:
		case 1717532765:
		case -2122646867:
		case 67753863:
		case 1107404867:
		case joaat("CLUB"):
		case -913589546:
		case -631322662:
		case -838099166:
		case -1810806490:
		case -1358197432:
		case 1492612435:
		case 1181339704:
		case -1728685474:
		case 2134119907:
		case 83136452:
		case 987469656:
		case 1802742206:
		case 1284356689:
		case 1456336509:
		case -1756021720:
		case 872704284:
		case 394110044:
		case joaat("OUTLAW"):
		case 301304410:
		case joaat("FIRETRUK"):
		case joaat("BURRITO2"):
		case joaat("BOXVILLE"):
		case joaat("STOCKADE"):
		case joaat("LGUARD"):
		case joaat("BLAZER2"):
		case 740289177:
		case -1960756985:
		case 960812448:
		case 1693751655:
		case 2031587082:
		case -1254331310:
			return true;
	}
	return false;
}

void func_486(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_253(iParam0, 0, 0))
		{
			if (iParam2 && Global_98796.f_18[iParam0])
			{
				if (func_492(iParam0) == 3 && !func_491(iParam0))
				{
					func_490(iParam0);
					func_489(iParam0, 0, 0);
					func_488(iParam0, 1, 0);
					func_487(iParam0);
				}
				else
				{
					func_489(iParam0, 1, 0);
					func_487(iParam0);
				}
			}
			else
			{
				func_489(iParam0, 0, 0);
				func_488(iParam0, 1, 0);
				func_487(iParam0);
			}
		}
		else
		{
			func_488(iParam0, 1, 0);
			func_487(iParam0);
		}
	}
	else if (func_253(iParam0, 0, 0))
	{
		func_488(iParam0, 0, 0);
		func_488(iParam0, 1, 0);
		func_487(iParam0);
	}
}

void func_487(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

void func_488(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x0674E58A79778E99(&(Global_98796.f_1357[iParam0]), bParam1);
	}
	else if (UNK_0x8CD06866876216F2())
	{
		if (func_83() == 0)
		{
			bVar0 = func_51(func_254(iParam0), -1, 0);
			UNK_0x0674E58A79778E99(&bVar0, bParam1);
			func_131(func_254(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

void func_489(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_98796.f_1357[iParam0]), bParam1);
	}
	else if (UNK_0x8CD06866876216F2())
	{
		if (func_83() == 0)
		{
			bVar0 = func_51(func_254(iParam0), -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, bParam1);
			func_131(func_254(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

void func_490(int iParam0)
{
	if (Global_98796.f_18[iParam0])
	{
		func_489(iParam0, 10, 1);
		func_489(iParam0, 19, 1);
	}
}

bool func_491(int iParam0)
{
	return func_253(iParam0, 5, 1);
}

int func_492(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 50:
			return 0;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
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
			return 2;
		case 23:
			return 2;
		case 24:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 27:
			return 2;
		case 28:
			return 3;
		case 29:
			return 3;
		case 30:
			return 3;
		case 31:
			return 3;
		case 32:
			return 3;
		case 33:
			return 3;
		case 34:
			return 3;
		case 35:
			return 3;
		case 36:
			return 3;
		case 37:
			return 3;
		case 38:
			return 3;
		case 39:
			return 4;
		case 40:
			return 4;
		case 41:
			return 4;
		case 42:
			return 4;
		case 43:
			return 4;
		case 44:
			return 4;
		case 45:
			return 5;
		case 46:
			return 3;
		case 47:
			return 3;
		case 48:
			return 3;
		case 49:
			return 3;
		case 52:
			return 3;
		case 51:
			return 1;
	}
	return 6;
}

void func_493()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	char cVar12[16];

	if (UNK_0x58424C49F8924842())
	{
		if (UNK_0x8CD06866876216F2())
		{
			bVar0 = false;
			UNK_0xEBD5716567F1D347("car");
			UNK_0xB5B7B792811308A7("appdata");
			iVar1 = func_27("playerNameMP");
			if ((iVar1 != 0 && iVar1 != UNK_0x12AB0310C2281427(UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62()))) || bLocal_79)
			{
				func_198("playerNameMP", UNK_0x12AB0310C2281427(UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62())));
				bVar0 = true;
				func_14(2921, 1, -1, 1);
				func_14(2922, 1, -1, 1);
				func_14(2923, 1, -1, 1);
				func_14(2924, 1, -1, 1);
				func_14(2925, 1, -1, 1);
				bLocal_79 = false;
			}
			UNK_0x98C61465A1232E0E();
			if (bVar0)
			{
				iVar2 = 0;
				while (iVar2 < 5)
				{
					StringCopy(&cVar4, "multiplayer", 16);
					StringIntConCat(&cVar4, iVar2, 16);
					UNK_0xB5B7B792811308A7(&cVar4);
					iVar3 = 0;
					while (iVar3 < 10)
					{
						StringCopy(&cVar4, "vehicle", 16);
						StringIntConCat(&cVar4, iVar3, 16);
						UNK_0xB5B7B792811308A7(&cVar4);
						func_198("carUnlocked", 0);
						UNK_0x98C61465A1232E0E();
						iVar3++;
					}
					UNK_0x98C61465A1232E0E();
					iVar2++;
				}
			}
			UNK_0xFE0C6A4F9007749F();
		}
		else
		{
			bVar8 = false;
			UNK_0xEBD5716567F1D347("car");
			UNK_0xB5B7B792811308A7("appdata");
			iVar9 = func_27("playerNameSP");
			if ((iVar9 != 0 && iVar9 != UNK_0x12AB0310C2281427(UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62()))) || bLocal_78)
			{
				func_198("playerNameSP", UNK_0x12AB0310C2281427(UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62())));
				bLocal_100 = true;
				bLocal_78 = false;
				bVar8 = true;
			}
			UNK_0x98C61465A1232E0E();
			if (bVar8)
			{
				iVar10 = 0;
				while (iVar10 < 5)
				{
					StringCopy(&cVar12, "multiplayer", 16);
					StringIntConCat(&cVar12, iVar10, 16);
					UNK_0xB5B7B792811308A7(&cVar12);
					iVar11 = 0;
					while (iVar11 < 10)
					{
						StringCopy(&cVar12, "vehicle", 16);
						StringIntConCat(&cVar12, iVar11, 16);
						UNK_0xB5B7B792811308A7(&cVar12);
						func_198("carUnlocked", 0);
						UNK_0x98C61465A1232E0E();
						iVar11++;
					}
					UNK_0x98C61465A1232E0E();
					iVar10++;
				}
			}
			UNK_0xFE0C6A4F9007749F();
		}
	}
}

void func_494()
{
	int iVar0;
	char cVar1[16];
	char cVar5[16];
	int iVar9;
	vector3 vVar10[24];
	int iVar16;
	vector3 vVar17[24];
	int iVar23;

	iVar0 = func_191();
	if (UNK_0x8CD06866876216F2())
	{
		if (!Global_2097152[iVar0 /*10930*/].f_6086.f_53)
		{
			UNK_0xEBD5716567F1D347("car");
			StringCopy(&cVar1, "multiplayer", 16);
			StringIntConCat(&cVar1, func_15(), 16);
			UNK_0xB5B7B792811308A7(&cVar1);
			iVar9 = 0;
			while (iVar9 < 10)
			{
				StringCopy(&cVar1, "vehicle", 16);
				StringIntConCat(&cVar1, iVar9, 16);
				UNK_0xB5B7B792811308A7(&cVar1);
				func_198("carUnlocked", 0);
				UNK_0x98C61465A1232E0E();
				iVar9++;
			}
			UNK_0x98C61465A1232E0E();
			UNK_0xB5B7B792811308A7("appdata");
			StringCopy(&cVar10, "orderCount_mp", 24);
			StringIntConCat(&cVar10, func_15(), 24);
			func_198(&cVar10, 0);
			UNK_0x98C61465A1232E0E();
			bLocal_101 = true;
			SYSTEM::SETTIMERA(0);
			UNK_0xFE0C6A4F9007749F();
			Global_2097152[iVar0 /*10930*/].f_6086.f_53 = 1;
		}
		if (iLocal_76 >= 0 && UNK_0xEAE0D21A50E6C7F4(Global_1323615[iLocal_76 /*141*/].f_102, 26))
		{
			iVar16 = 0;
			while (iVar16 < 10)
			{
				if ((Global_2097152[iVar0 /*10930*/].f_6086.f_63[iVar16] - 1) == iLocal_76)
				{
					UNK_0xEBD5716567F1D347("car");
					StringCopy(&cVar1, "multiplayer", 16);
					StringIntConCat(&cVar1, func_15(), 16);
					UNK_0xB5B7B792811308A7(&cVar1);
					StringCopy(&cVar1, "vehicle", 16);
					StringIntConCat(&cVar1, iVar16, 16);
					UNK_0xB5B7B792811308A7(&cVar1);
					func_198("carUnlocked", 0);
					UNK_0x98C61465A1232E0E();
					bLocal_101 = true;
					SYSTEM::SETTIMERA(0);
					UNK_0x98C61465A1232E0E();
					UNK_0xFE0C6A4F9007749F();
					UNK_0x0674E58A79778E99(&(Global_1323615[iLocal_76 /*141*/].f_102), 25);
					UNK_0x0674E58A79778E99(&(Global_1323615[iLocal_76 /*141*/].f_102), 26);
				}
				iVar16++;
			}
		}
		switch (iLocal_82)
		{
			case 0:
				if (Global_2097152[iVar0 /*10930*/].f_6086.f_54)
				{
					UNK_0xC39C475113F86C68("car");
					bLocal_81 = true;
					iLocal_82++;
				}
				else
				{
					bLocal_81 = false;
				}
				break;
			case 1:
				if (UNK_0x4D210DB36344AA6A() != 1)
				{
					if (UNK_0x4D210DB36344AA6A() != 3)
					{
						Global_2097152[iVar0 /*10930*/].f_6086.f_54 = 0;
					}
					UNK_0xEBD5716567F1D347("car");
					StringCopy(&cVar5, "mp", 16);
					StringIntConCat(&cVar5, func_15(), 16);
					StringConCat(&cVar5, "_order", 16);
					UNK_0xB5B7B792811308A7(&cVar5);
					UNK_0x07A1A3A04807E104();
					UNK_0x98C61465A1232E0E();
					UNK_0xB5B7B792811308A7("appdata");
					StringCopy(&cVar17, "orderCount_mp", 24);
					StringIntConCat(&cVar17, func_15(), 24);
					func_198(&cVar17, Global_2097152[iVar0 /*10930*/].f_6086.f_61);
					UNK_0x98C61465A1232E0E();
					UNK_0xFE0C6A4F9007749F();
					iLocal_82 = 0;
				}
				break;
		}
	}
	else
	{
		if (!Global_111638.f_20113.f_260)
		{
			UNK_0xEBD5716567F1D347("car");
			UNK_0xB5B7B792811308A7("singleplayer0");
			func_198("carUnlocked", 0);
			UNK_0x98C61465A1232E0E();
			UNK_0xB5B7B792811308A7("singleplayer2");
			func_198("carUnlocked", 0);
			UNK_0x98C61465A1232E0E();
			UNK_0xB5B7B792811308A7("appdata");
			func_198("orderCount_sp0", 0);
			func_198("orderCount_sp1", 0);
			func_198("orderCount_sp2", 0);
			UNK_0x98C61465A1232E0E();
			bLocal_101 = true;
			SYSTEM::SETTIMERA(0);
			UNK_0xFE0C6A4F9007749F();
			UNK_0xEBD5716567F1D347("dog");
			UNK_0xB5B7B792811308A7("saveData");
			func_198("chopSafeHouse", 0);
			UNK_0x9B1B988780CBC954();
			UNK_0x98C61465A1232E0E();
			UNK_0xFE0C6A4F9007749F();
			Global_111638.f_20113.f_273[0] = 0;
			Global_111638.f_20113.f_273[1] = 0;
			Global_111638.f_20113.f_273[2] = 0;
			Global_111638.f_20113.f_260 = 1;
		}
		iVar23 = 0;
		while (iVar23 < 3)
		{
			if (Global_111638.f_20113[iVar23 /*43*/].f_41)
			{
				UNK_0xEBD5716567F1D347("car");
				StringCopy(&cVar1, "singleplayer", 16);
				StringIntConCat(&cVar1, iVar23, 16);
				UNK_0xB5B7B792811308A7(&cVar1);
				func_198("carUnlocked", 0);
				bLocal_101 = true;
				SYSTEM::SETTIMERA(0);
				UNK_0x98C61465A1232E0E();
				UNK_0xFE0C6A4F9007749F();
				Global_111638.f_20113.f_273[iVar23] = 0;
				Global_111638.f_20113[iVar23 /*43*/].f_41 = 0;
				Global_111638.f_20113[iVar23 /*43*/].f_40 = 0;
				Global_111638.f_20113[iVar23 /*43*/] = 0;
				Global_111638.f_20113.f_273[iVar23] = 0;
			}
			iVar23++;
		}
		switch (iLocal_82)
		{
			case 0:
				if (Global_111638.f_20113.f_265)
				{
					UNK_0xC39C475113F86C68("car");
					bLocal_81 = true;
					iLocal_82++;
				}
				else
				{
					bLocal_81 = false;
				}
				break;
			case 1:
				if (UNK_0x4D210DB36344AA6A() != 1)
				{
					if (UNK_0x4D210DB36344AA6A() != 3)
					{
						Global_111638.f_20113.f_265 = 0;
					}
					UNK_0xEBD5716567F1D347("car");
					StringCopy(&cVar5, "sp", 16);
					StringIntConCat(&cVar5, Global_111638.f_20113.f_266, 16);
					StringConCat(&cVar5, "_order", 16);
					UNK_0xB5B7B792811308A7(&cVar5);
					UNK_0x07A1A3A04807E104();
					UNK_0x98C61465A1232E0E();
					UNK_0xB5B7B792811308A7("appdata");
					func_198("orderCount_sp0", Global_111638.f_20113.f_285[0]);
					func_198("orderCount_sp1", Global_111638.f_20113.f_285[1]);
					func_198("orderCount_sp2", Global_111638.f_20113.f_285[2]);
					UNK_0x98C61465A1232E0E();
					UNK_0xFE0C6A4F9007749F();
					iLocal_82 = 0;
				}
				break;
		}
	}
}

bool func_495(bool bParam0)
{
	if (bParam0 != func_97())
	{
		if (func_160(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_449(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

void func_496()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!UNK_0x17B07D4257435ADF() || !UNK_0x0C44E4033D9782F0("car"))
	{
		bLocal_80 = false;
		return;
	}
	else
	{
		if (!bLocal_80)
		{
			bLocal_78 = true;
			bLocal_79 = true;
			Global_108337 = 1;
		}
		bLocal_80 = true;
	}
	if (UNK_0x8CD06866876216F2())
	{
		if (func_83() != 0)
		{
			return;
		}
		if (!func_161())
		{
			return;
		}
	}
	if (UNK_0x8CD06866876216F2())
	{
		if (func_83() == 0)
		{
			iLocal_72 = 1;
		}
		if (!Global_2097152[func_191() /*10930*/].f_6086.f_87)
		{
			iVar0 = 9;
			while (iVar0 >= 0)
			{
				Global_2097152[func_191() /*10930*/].f_6086.f_63[iVar0] = iVar0 + 1;
				Global_2097152[func_191() /*10930*/].f_6086.f_74[iVar0] = iVar0 + 1;
				Global_2097152[func_191() /*10930*/].f_6086.f_41[iVar0] = 0;
				iVar0 = (iVar0 + -1);
			}
			Global_2097152[func_191() /*10930*/].f_6086.f_85 = -1;
			Global_2097152[func_191() /*10930*/].f_6086.f_87 = 1;
		}
	}
	else
	{
		iLocal_72 = 0;
	}
	if (UNK_0x8CD06866876216F2())
	{
		if (Global_2097152[func_191() /*10930*/].f_6086.f_36)
		{
			bLocal_323 = true;
		}
		if (func_102(187, -1))
		{
			bLocal_323 = true;
			func_56(187, 0, -1, 1);
		}
		if (!Global_262145.f_10123 && !Global_108339)
		{
			bLocal_323 = true;
		}
	}
	else if ((Global_111638.f_20113.f_130[0 /*41*/].f_36 || Global_111638.f_20113.f_130[1 /*41*/].f_36) || Global_111638.f_20113.f_130[2 /*41*/].f_36)
	{
		bLocal_323 = true;
	}
	iLocal_82 = 0;
	iLocal_74 = 0;
	iLocal_75 = 0;
	iLocal_76 = 0;
	bLocal_127 = false;
	bLocal_84 = false;
	iLocal_85 = 0;
	if (!bLocal_128 || Global_108171)
	{
		Global_111638.f_20113.f_264 = 1;
		bLocal_100 = false;
		UNK_0xEBD5716567F1D347("car");
		UNK_0xB5B7B792811308A7("appdata");
		iVar1 = func_27("appUID");
		if (iVar1 != Global_111638.f_20113.f_272)
		{
			bLocal_100 = true;
		}
		UNK_0x98C61465A1232E0E();
		UNK_0xFE0C6A4F9007749F();
		iVar2 = 0;
		while (iVar2 < Global_111638.f_20113.f_130)
		{
			iLocal_106[iVar2] = 0;
			iLocal_110[iVar2] = 0;
			iLocal_114[iVar2] = 0;
			iVar2++;
		}
		bLocal_118 = false;
	}
	Global_108171 = 0;
	bLocal_128 = true;
	iLocal_71 = 1;
}

void func_497()
{
	if (UNK_0x8CD06866876216F2() && Global_108340)
	{
		UNK_0xDA303319A57C6FF5(49, 0, 0);
	}
}

void func_498()
{
	func_504();
	switch (iLocal_66)
	{
		case 0:
			func_503();
			break;
		case 1:
			func_501();
			break;
		case 2:
			func_499();
			break;
	}
}

void func_499()
{
	func_500(0);
}

void func_500(int iParam0)
{
	iLocal_66 = iParam0;
}

void func_501()
{
	vector3 vVar0;

	switch (iLocal_67)
	{
		case 0:
			iLocal_69 = iLocal_68;
			UNK_0x92DCE5C81176D2B4("tuneables_processing");
			if (UNK_0x1FBF08B001C4788A("tuneables_processing") && UNK_0xF150EF9D54BF1D93(1424) > 0)
			{
				vVar0.x = func_502(iLocal_68);
				vVar0.f_1 = func_502(iLocal_70);
				vVar0.f_2 = iLocal_68 == 1;
				SYSTEM::START_NEW_SCRIPT_WITH_ARGS("tuneables_processing", &vVar0, 3, 1424);
				UNK_0x5E8C29AE121DF1C7("tuneables_processing");
				iLocal_67++;
			}
			break;
		case 1:
			if (UNK_0x8A22C4C08282BF26(joaat("TUNEABLES_PROCESSING")) == 0)
			{
				func_500(2);
				iLocal_67 = 0;
			}
			break;
	}
}

int func_502(int iParam0)
{
	if (iParam0 >= 22)
	{
		return (28 + (iParam0 - 22));
	}
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 15;
		case 4:
			return 16;
		case 5:
			return 9;
		case 6:
			return 10;
		case 7:
			return 11;
		case 8:
			return 12;
		case 9:
			return 13;
		case 10:
			return 14;
		case 11:
			return 17;
		case 12:
			return 18;
		case 13:
			return 19;
		case 18:
			return 26;
		case 14:
			return 20;
		case 15:
			return 21;
		case 16:
			return 22;
		case 19:
			return 23;
		case 17:
			return 24;
		case 20:
			return 25;
		case 21:
			return 27;
		default:
			break;
	}
	return 0;
}

void func_503()
{
	if (iLocal_68 != iLocal_69 || Global_262144)
	{
		Global_262144 = 0;
		func_500(1);
	}
}

void func_504()
{
	int iVar0;
	int iVar1;
	struct<6> Var2;

	if (((!UNK_0x8CD06866876216F2() && !func_112()) && !func_538()) && func_83() == -1)
	{
		iLocal_68 = 0;
		iLocal_70 = 21;
	}
	else
	{
		if (UNK_0xA14BB9332558B949() && func_537())
		{
			return;
		}
		iLocal_68 = 1;
		iLocal_70 = 21;
		iVar0 = func_536(UNK_0xD803B885F5E47A62());
		if (iVar0 != -1)
		{
			iVar1 = -1;
			if (func_99(UNK_0xD803B885F5E47A62()))
			{
				iVar1 = UNK_0x7ADF99974F87DF59(UNK_0x12AB0310C2281427(&(Global_959568.f_42)));
			}
			if (iVar1 == -1)
			{
				iVar1 = UNK_0x7ADF99974F87DF59(UNK_0x12AB0310C2281427(&(Global_4456448.f_195277)));
			}
			iLocal_70 = func_535(iVar1);
			if (iVar0 == 0)
			{
				if (func_395(UNK_0xD803B885F5E47A62(), 0, 0) && func_513(Global_4456448.f_194990, Global_4456448.f_232883))
				{
					iLocal_68 = 20;
				}
				else if (func_512(UNK_0xD803B885F5E47A62()))
				{
					iLocal_68 = 12;
				}
				else if (func_511(UNK_0xD803B885F5E47A62()))
				{
					iLocal_68 = 13;
				}
				else if (func_510(UNK_0xD803B885F5E47A62()))
				{
					iLocal_68 = 14;
				}
				else if (func_509(UNK_0xD803B885F5E47A62()))
				{
					iLocal_68 = 16;
				}
				else if (func_508(UNK_0xD803B885F5E47A62()))
				{
					iLocal_68 = 15;
				}
				else if (func_507(UNK_0xD803B885F5E47A62()))
				{
					iLocal_68 = 19;
				}
				else if (func_506(UNK_0xD803B885F5E47A62()) || func_505(UNK_0xD803B885F5E47A62()))
				{
					iLocal_68 = 18;
				}
				else
				{
					iLocal_68 = 3;
				}
			}
			if (iVar0 == 3)
			{
				iLocal_68 = 4;
			}
			if (iVar0 == 1 || Global_1574401)
			{
				iLocal_68 = 2;
			}
			if (iVar0 == 2)
			{
				iLocal_68 = 5;
				if (Global_4456448.f_75705 == 0 || Global_4456448.f_75705 == 1)
				{
					iLocal_68 = 5;
				}
				if (((Global_4456448.f_75705 == 6 || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 18) || Global_4456448.f_75705 == 19)
				{
					iLocal_68 = 10;
				}
				if (Global_4456448.f_75705 == 2 || Global_4456448.f_75705 == 3)
				{
					iLocal_68 = 9;
				}
				if (Global_4456448.f_75705 == 4 || Global_4456448.f_75705 == 5)
				{
					iLocal_68 = 8;
				}
				if ((Global_4456448.f_75705 == 8 || Global_4456448.f_75705 == 9) || Global_1574427)
				{
					iLocal_68 = 11;
				}
				if (Global_4456448.f_75705 == 12 || Global_4456448.f_75705 == 13)
				{
					if (Global_4456448.f_75708 == 8)
					{
						iLocal_68 = 6;
					}
					else
					{
						iLocal_68 = 7;
					}
				}
			}
			if (iVar0 == 8)
			{
				iLocal_68 = 11;
			}
		}
		if (func_4())
		{
			iLocal_68 = 1;
			iLocal_70 = 21;
		}
		if ((((UNK_0x8CD06866876216F2() && !func_112()) && !func_538()) && !func_83() == -1) && UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if (Global_2458952 > 10000)
			{
				UNK_0xA9A9632F6E019049(&Var2, &(Var2.f_1), &(Var2.f_2), &(Var2.f_3), &(Var2.f_4), &(Var2.f_5));
				if ((Var2 > Global_2458945 || Var2.f_1 > Global_2458945.f_1) || Var2.f_2 > Global_2458945.f_2)
				{
					UNK_0xA9A9632F6E019049(&Global_2458945, &(Global_2458945.f_1), &(Global_2458945.f_2), &(Global_2458945.f_3), &(Global_2458945.f_4), &(Global_2458945.f_5));
					func_500(1);
					Global_2458952 = 0;
				}
				Global_2458952 = 0;
			}
			else
			{
				Global_2458952++;
			}
		}
	}
}

bool func_505(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

bool func_506(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_507(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 8;
}

bool func_508(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 3;
}

bool func_509(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 4;
}

bool func_510(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 1;
}

bool func_511(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 5;
}

bool func_512(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 6;
}

bool func_513(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		return true;
	}
	if ((((((((((((((((((((func_534(iParam0) || func_533(iParam0)) || func_532(iParam0)) || func_531(iParam0, 1)) || func_530(iParam0)) || func_529(iParam0)) || func_528(iParam0)) || func_527(iParam0)) || func_526(iParam0)) || func_525(iParam0)) || func_524(iParam0)) || func_523(iParam0)) || func_522(iParam0)) || func_521(iParam0)) || func_520(iParam0)) || func_519(iParam0)) || func_518(iParam0)) || func_517(iParam0)) || func_516(iParam0)) || func_515(iParam1)) || func_514(iParam1))
	{
		return true;
	}
	return false;
}

bool func_514(int iParam0)
{
	return iParam0 == 65;
}

bool func_515(int iParam0)
{
	return iParam0 == 57;
}

int func_516(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 30)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9221[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_517(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 35)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9254[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_518(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 31)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9243[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_519(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 34)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9232[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_520(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 29)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (iParam0 == Global_262145.f_9208[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_521(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 27)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9197[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_522(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 28)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9186[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_523(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 46)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9175[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_524(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 32)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9078[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_525(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 33)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9100[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_526(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 86)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9089[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_527(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 84)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9067[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_528(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 25)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9056[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_529(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 85)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9045[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_530(int iParam0)
{
	int iVar0;

	if (Global_4456448.f_232883 == 21)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9011[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_531(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (Global_4456448.f_232883 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_532(int iParam0)
{
	if (Global_4456448.f_232883 == 18)
	{
		return 1;
	}
	if ((((iParam0 == Global_262145.f_9006 || iParam0 == Global_262145.f_9007) || iParam0 == Global_262145.f_9008) || iParam0 == Global_262145.f_9009) || iParam0 == Global_262145.f_9010)
	{
		return 1;
	}
	return 0;
}

int func_533(int iParam0)
{
	if (Global_4456448.f_232883 == 20)
	{
		return 1;
	}
	if ((((iParam0 == Global_262145.f_9001 || iParam0 == Global_262145.f_9002) || iParam0 == Global_262145.f_9003) || iParam0 == Global_262145.f_9004) || iParam0 == Global_262145.f_9005)
	{
		return 1;
	}
	return 0;
}

int func_534(int iParam0)
{
	if (Global_4456448.f_232883 == 19)
	{
		return 1;
	}
	if ((((((iParam0 == Global_262145.f_8994 || iParam0 == Global_262145.f_8995) || iParam0 == Global_262145.f_8996) || iParam0 == Global_262145.f_8997) || iParam0 == Global_262145.f_8998) || iParam0 == Global_262145.f_8999) || iParam0 == Global_262145.f_9000)
	{
		return 1;
	}
	return 0;
}

int func_535(int iParam0)
{
	if (iParam0 >= 0)
	{
		return (22 + iParam0);
	}
	return 21;
}

int func_536(int iParam0)
{
	return Global_1590535[iParam0 /*876*/];
}

bool func_537()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632.f_39.f_4, false);
}

bool func_538()
{
	return Global_2450632.f_592;
}

void func_539()
{
	if (iLocal_71 != 0 && iLocal_72 != 2)
	{
		if (iLocal_72 == 0)
		{
			if (UNK_0x8CD06866876216F2())
			{
				iLocal_72 = 2;
			}
		}
		else if (iLocal_72 == 1)
		{
			if ((!UNK_0x8CD06866876216F2() && !func_112()) && !func_540())
			{
				iLocal_72 = 2;
			}
			if (func_83() != 0)
			{
				iLocal_72 = 2;
			}
		}
		if (!UNK_0x17B07D4257435ADF())
		{
			iLocal_72 = 2;
		}
		if (Global_108171)
		{
			iLocal_72 = 2;
		}
		if (iLocal_72 == 2)
		{
			iLocal_71 = 0;
		}
	}
}

bool func_540()
{
	if ((((func_109() || func_108()) || func_112()) || func_542()) || func_541())
	{
		return true;
	}
	return false;
}

bool func_541()
{
	return Global_2450632.f_742;
}

bool func_542()
{
	return Global_2450632.f_593;
}

bool func_543()
{
	if (Global_1312812 == 68)
	{
		return true;
	}
	return false;
}

