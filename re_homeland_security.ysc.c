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
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	vector3 vLocal_44 = { 0f, 0f, 0f };
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52[2] = { 0, 0 };
	vector3 vLocal_55[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_62[2] = { 0f, 0f };
	bool bLocal_65 = false;
	vector3 vLocal_66 = { 0f, 0f, 0f };
	bool bLocal_69 = false;
	bool bLocal_70 = false;
	bool bLocal_71 = false;
	bool bLocal_72 = false;
	vector3 vLocal_73 = { 0f, 0f, 0f };
	bool bLocal_76 = false;
	bool bLocal_77 = false;
	char cLocal_78[48] = "";
	struct<6> Local_84 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_90 = false;
	bool bLocal_91 = false;
	bool bLocal_92 = false;
	vector3 vLocal_93 = { 0f, 0f, 0f };
	vector3 vLocal_96 = { 0f, 0f, 0f };
	vector3 vLocal_99 = { 0f, 0f, 0f };
	bool bLocal_102 = false;
	bool bLocal_103 = false;
	bool bLocal_104 = false;
	bool bLocal_105 = false;
	bool bLocal_106 = false;
	bool bLocal_107 = false;
	bool bLocal_108 = false;
	bool bLocal_109 = false;
	bool bLocal_110 = false;
	bool bLocal_111 = false;
	bool bLocal_112 = false;
	bool bLocal_113 = false;
	bool bLocal_114 = false;
	bool bLocal_115 = false;
	var uLocal_116 = 0;
	bool bLocal_117 = false;
	bool bLocal_118 = false;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121[2] = { 0, 0 };
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	var uLocal_131 = 0;
	int iLocal_132 = 0;
	bool bLocal_133 = false;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = false;
	bool bLocal_138 = false;
	var uLocal_139 = 0;
	bool bLocal_140 = false;
	bool bLocal_141 = false;
	bool bLocal_142 = false;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	bool bLocal_145 = false;
	bool bLocal_146 = false;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	bool bLocal_150 = false;
	bool bLocal_151 = false;
	int iLocal_152 = 0;
	bool bLocal_153 = false;
	var uLocal_154 = 16;
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
	var uLocal_261 = 0;
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
	int iVar0;

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
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	StringCopy(&cLocal_78, "", 24);
	if (UNK_0x2EBF608FFE6CA406(11))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
		{
			if (UNK_0x16102BEDC7435774(bLocal_72))
			{
				UNK_0x0A94A109271BE75A(bLocal_72);
			}
		}
		func_214();
	}
	if (func_172(ScriptParam_0.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_169(-1);
	}
	else
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((UNK_0x338D6FF72D84D90F() || bLocal_108) || bLocal_137)
		{
			if (!func_168())
			{
				if (func_167())
				{
					func_214();
				}
			}
			UNK_0x1A6DFFFEEC27BF4F("RE_RA", 0);
			switch (iLocal_48)
			{
				case 0:
					if (func_155())
					{
						func_214();
					}
					if (!bLocal_103)
					{
						func_154();
					}
					else
					{
						func_153();
					}
					if (bLocal_104)
					{
						bLocal_102 = true;
						iLocal_48 = 1;
					}
					break;
				case 1:
					if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
					{
						switch (iLocal_49)
						{
							case 0:
								func_146();
								iLocal_49 = 1;
								break;
							case 1:
								if (!func_145())
								{
									if ((UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_73, 75f, 75f, 75f, false, true, 0) && !UNK_0x03068588A1FCED1A(bLocal_72)) || UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_72, 15f, 15f, 15f, 0, 1, 0))
									{
										if (!func_168())
										{
											UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), bLocal_72, -1, 0, 2);
											UNK_0x51B096AAC60548C1(0.1f);
											func_144();
											func_135(1);
										}
										bLocal_111 = true;
									}
									if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_52[1]))
									{
										if (UNK_0xB87D13D0C064E9D1(iLocal_52[0], UNK_0x16F2683693E537C9(), 1) || UNK_0xB87D13D0C064E9D1(iLocal_52[1], UNK_0x16F2683693E537C9(), 1))
										{
											func_144();
											bLocal_111 = true;
										}
									}
									if (bLocal_111)
									{
										func_129();
									}
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_72) && UNK_0xDF1306B443CD3D15(bLocal_65, 0))
									{
										if (UNK_0xC42A92762C58E1B9(bLocal_72, bLocal_65, 0))
										{
											bLocal_137 = true;
										}
									}
									if (bLocal_138)
									{
										if (UNK_0xDF1306B443CD3D15(bLocal_65, 0))
										{
											if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_65, 150f, 150f, 150f, 0, 1, 0))
											{
												iLocal_49 = 9;
											}
										}
									}
								}
								if (func_128())
								{
									func_144();
									iLocal_49 = 3;
								}
								else if (func_145())
								{
									func_144();
									func_126();
									iLocal_49 = 2;
								}
								break;
							case 2:
								switch (iLocal_132)
								{
									case 0:
										iLocal_49 = 3;
										break;
									case 1:
										iLocal_49 = 3;
										break;
									case 3:
										iLocal_49 = 3;
										break;
									case 4:
										iLocal_49 = 3;
										break;
									case 5:
										if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 4))
										{
											bLocal_140 = true;
											iLocal_51 = 9;
										}
										else
										{
											iLocal_51 = 13;
										}
										iLocal_49 = 1;
										break;
								}
								if (func_145())
								{
									switch (iLocal_50)
									{
										case 2:
											func_125();
											break;
										case 4:
											func_124();
											break;
										case 5:
											func_123();
											break;
									}
								}
								break;
							case 3:
								func_120();
								UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
								{
									UNK_0x08082071A5F7C155(bLocal_72, 3, 0f, 0);
									if (!UNK_0x405E212DDE472467(bLocal_72, 0))
									{
										if (!bLocal_117)
										{
											if (UNK_0xB4ECF989E2C1DAC8(bLocal_72, "random@homelandsecurity", "idle_girl", 3) && !UNK_0x869EFD0BC0868856(bLocal_72))
											{
												UNK_0x5E678B691C852774(bLocal_72, 16);
												UNK_0xDD353D0E9C789D0E(&iLocal_136);
												UNK_0xC6EB89C59F2AF6B8(false, "random@homelandsecurity", "idle_to_knees_girl", 1000f, -8f, -1, 8192, false, 0, 0, 0);
												UNK_0xC6EB89C59F2AF6B8(false, "random@homelandsecurity", "knees_loop_girl", 8f, -8f, -1, 8321, false, 0, 0, 0);
												UNK_0x75ABDC5F81978924(iLocal_136);
												UNK_0x78ADC381772E3D54(bLocal_72, iLocal_136);
												UNK_0xF82EA857DA10E0CD(&iLocal_136);
												bLocal_117 = true;
											}
											else
											{
												UNK_0x8BE3D040D15AEA1D(bLocal_72, -1);
												bLocal_117 = true;
											}
										}
										else if ((((!UNK_0xB4ECF989E2C1DAC8(bLocal_72, "random@homelandsecurity", "idle_girl", 3) && !UNK_0xB4ECF989E2C1DAC8(bLocal_72, "random@homelandsecurity", "idle_to_knees_girl", 1)) && !UNK_0xB4ECF989E2C1DAC8(bLocal_72, "random@homelandsecurity", "knees_loop_girl", 1)) && UNK_0xD1960163A3042274(bLocal_72, 474215631) != 0) && UNK_0xD1960163A3042274(bLocal_72, 474215631) != 1)
										{
											bLocal_117 = false;
										}
									}
									else if (UNK_0xDF1306B443CD3D15(bLocal_65, 0))
									{
										if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_65, 0))
										{
											if (UNK_0xE4EDC4B0E92C078B(iLocal_120))
											{
												UNK_0x142CC44DB769B57E(&iLocal_120);
											}
										}
									}
								}
								else
								{
									func_119();
								}
								if (!func_118())
								{
									if (iLocal_129 < UNK_0x1C0640BA9A7327B3())
									{
										if (func_117())
										{
											if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[0]))
											{
												func_116(&uLocal_154, "REHOMAU", "REHOM_YELL", 4, 0, 0, 0);
											}
										}
										else if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[1]))
										{
											func_116(&uLocal_154, "REHOMAU", "REHOM_YELL2", 4, 0, 0, 0);
										}
										iLocal_129 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(4500, 5000));
									}
								}
								if (UNK_0xEB6A8945D1AC98A1(iLocal_52[0]))
								{
									if (UNK_0xE4EDC4B0E92C078B(iLocal_121[0]))
									{
										UNK_0x142CC44DB769B57E(&(iLocal_121[0]));
									}
									func_115(&uLocal_154, 5);
								}
								else if (UNK_0xE115347EA59F7B86(iLocal_52[0], UNK_0x16F2683693E537C9()) || UNK_0x12DE711B1C681E9E(iLocal_52[0], UNK_0x16F2683693E537C9(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (UNK_0xE4EDC4B0E92C078B(iLocal_121[0]))
								{
									UNK_0x142CC44DB769B57E(&(iLocal_121[0]));
								}
								if (UNK_0xEB6A8945D1AC98A1(iLocal_52[1]))
								{
									if (UNK_0xE4EDC4B0E92C078B(iLocal_121[1]))
									{
										UNK_0x142CC44DB769B57E(&(iLocal_121[1]));
									}
									func_115(&uLocal_154, 4);
								}
								else if (UNK_0xE115347EA59F7B86(iLocal_52[1], UNK_0x16F2683693E537C9()) || UNK_0x12DE711B1C681E9E(iLocal_52[1], UNK_0x16F2683693E537C9(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (UNK_0xE4EDC4B0E92C078B(iLocal_121[1]))
								{
									UNK_0x142CC44DB769B57E(&(iLocal_121[1]));
								}
								if (UNK_0xC844350D5D58C99A(iLocal_52[0]) && UNK_0xC844350D5D58C99A(iLocal_52[1]))
								{
									if (((UNK_0x54648B774DB42A3A(iLocal_52[0], joaat("WEAPON_STUNGUN"), 0) && UNK_0x54648B774DB42A3A(iLocal_52[1], joaat("WEAPON_STUNGUN"), 0)) || (UNK_0x28072FDD60CE3A6E(iLocal_52[0], 1) && UNK_0x28072FDD60CE3A6E(iLocal_52[1], 1))) || func_114())
									{
										if (UNK_0xE4EDC4B0E92C078B(iLocal_121[0]))
										{
											UNK_0x142CC44DB769B57E(&(iLocal_121[0]));
										}
										if (UNK_0xE4EDC4B0E92C078B(iLocal_121[1]))
										{
											UNK_0x142CC44DB769B57E(&(iLocal_121[1]));
										}
										if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
										{
											if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_72, 15f, 15f, 15f, 0, 1, 0))
											{
												if (!func_118())
												{
													func_116(&uLocal_154, "REHOMAU", "REHOM_THNK", 4, 0, 0, 0);
													bLocal_90 = false;
													bLocal_108 = true;
													UNK_0xE972B33144E77B35(bLocal_72, 16);
													UNK_0xE910A68AA670B4AA(bLocal_72);
													iLocal_49 = 4;
												}
											}
										}
									}
								}
								break;
							case 4:
								if (!bLocal_90)
								{
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
									{
										if ((UNK_0xB4ECF989E2C1DAC8(bLocal_72, "random@homelandsecurity", "idle_to_knees_girl", 1) || UNK_0xB4ECF989E2C1DAC8(bLocal_72, "random@homelandsecurity", "knees_loop_girl", 1)) && !UNK_0x869EFD0BC0868856(bLocal_72))
										{
											UNK_0xC6EB89C59F2AF6B8(bLocal_72, "random@homelandsecurity", "knees_to_stand_girl", 4f, -4f, -1, 0, 0.3f, 0, 0, 0);
										}
										else
										{
											UNK_0xA3BF0AA5A2608191(bLocal_72);
										}
										UNK_0xBF541ED34EA81209(bLocal_72, false);
										UNK_0xE25C96A9C36BE5D2(bLocal_72, func_113());
										UNK_0x7BECA8F360B1686D(bLocal_72, 1);
										func_112();
										bLocal_90 = true;
									}
								}
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
								{
									if (UNK_0xB4ECF989E2C1DAC8(bLocal_72, "random@homelandsecurity", "knees_to_stand_girl", 3))
									{
										if (UNK_0x8CA9406E01C7EE58(bLocal_72, "random@homelandsecurity", "knees_to_stand_girl") > 0.8f)
										{
											UNK_0xA3BF0AA5A2608191(bLocal_72);
										}
									}
								}
								if (!bLocal_92)
								{
									if (!func_118())
									{
										if (func_116(&uLocal_154, "REHOMAU", "REHOM_ASK", 4, 0, 0, 0))
										{
											bLocal_92 = true;
										}
									}
								}
								else if (!bLocal_91)
								{
									if (!func_118())
									{
										if (func_111() == 0)
										{
											func_116(&uLocal_154, "REHOMAU", "REHOM_RES1_M", 4, 0, 0, 0);
										}
										else if (func_111() == 1)
										{
											func_116(&uLocal_154, "REHOMAU", "REHOM_GOGO", 4, 0, 0, 0);
										}
										bLocal_91 = true;
									}
								}
								if (bLocal_90)
								{
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
									{
										if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_72, 8f, 8f, 8f, 0, 1, 0) || UNK_0x7EBBF23C1CD917AA(UNK_0x16F2683693E537C9()))
										{
											if (UNK_0xE4EDC4B0E92C078B(iLocal_120))
											{
												UNK_0x142CC44DB769B57E(&iLocal_120);
											}
										}
										else if (!UNK_0xE4EDC4B0E92C078B(iLocal_120))
										{
											iLocal_120 = func_109(bLocal_72, 0, 145);
										}
									}
								}
								if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[0]))
								{
									if (UNK_0xE115347EA59F7B86(iLocal_52[0], UNK_0x16F2683693E537C9()))
									{
										if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) < 2)
										{
										}
									}
								}
								if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[1]))
								{
									if (UNK_0xE115347EA59F7B86(iLocal_52[1], UNK_0x16F2683693E537C9()))
									{
										if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) < 2)
										{
										}
									}
								}
								if (bLocal_91 && func_108())
								{
									if (!func_118())
									{
										func_106();
										SYSTEM::WAIT(0);
										func_116(&uLocal_154, "REHOMAU", "REHOM_COME", 4, 0, 0, 0);
										UNK_0x6DAD7906B73F064D(&(iLocal_52[0]));
										UNK_0x6DAD7906B73F064D(&(iLocal_52[1]));
										if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
										{
											if (UNK_0x16102BEDC7435774(bLocal_72))
											{
												iVar0 = 0;
												while (iVar0 < iLocal_52)
												{
													if (UNK_0xC844350D5D58C99A(iLocal_52[iVar0]))
													{
														UNK_0x6DAD7906B73F064D(&(iLocal_52[iVar0]));
													}
													iVar0++;
												}
												UNK_0x51B096AAC60548C1(1f);
												iLocal_49 = 5;
											}
										}
									}
								}
								break;
							case 5:
								func_100();
								func_95();
								func_94();
								func_91();
								func_90();
								if (func_89(vLocal_93))
								{
									func_70(0);
									func_106();
									SYSTEM::WAIT(0);
									func_116(&uLocal_154, "REHOMAU", "REHOM_WRONG", 4, 0, 0, 0);
								}
								if (func_68())
								{
									func_70(0);
									func_106();
									SYSTEM::WAIT(0);
									func_116(&uLocal_154, "REHOMAU", "REHOM_CULT", 4, 0, 0, 0);
								}
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
								{
									if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_93, Global_22, true, true, 0) && UNK_0x12DE711B1C681E9E(bLocal_72, UNK_0x16F2683693E537C9(), 8f, 8f, 8f, 0, 1, 0))
									{
										if (UNK_0x16102BEDC7435774(bLocal_72))
										{
											if (UNK_0xE4EDC4B0E92C078B(iLocal_120))
											{
												UNK_0x142CC44DB769B57E(&iLocal_120);
											}
											if (UNK_0xE4EDC4B0E92C078B(iLocal_124))
											{
												UNK_0x142CC44DB769B57E(&iLocal_124);
											}
											if (UNK_0xE4EDC4B0E92C078B(iLocal_125))
											{
												UNK_0x142CC44DB769B57E(&iLocal_125);
											}
											if (UNK_0x16102BEDC7435774(bLocal_72))
											{
												UNK_0x0A94A109271BE75A(bLocal_72);
											}
											if (func_108())
											{
												if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
												{
													UNK_0xE0C0351D5B931E37(UNK_0x728870EB733D12A1(), 5f, 2, 0);
												}
												iLocal_49 = 6;
											}
											else
											{
												func_106();
												SYSTEM::WAIT(0);
												func_116(&uLocal_154, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
												if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
												{
													UNK_0xDD353D0E9C789D0E(&iLocal_136);
													UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 5000, 2052, 2);
													UNK_0x96167B03C5A77156(false, vLocal_96, 1f, -1, 0.25f, 0, 38.9844f);
													UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_SMOKING", 0, 1);
													UNK_0x75ABDC5F81978924(iLocal_136);
													UNK_0x78ADC381772E3D54(bLocal_72, iLocal_136);
													UNK_0xF82EA857DA10E0CD(&iLocal_136);
													UNK_0xFADC0A217229F6B5(bLocal_72, true);
												}
												func_35(func_111(), 1, 80, 0, 1);
												iLocal_49 = 7;
											}
										}
									}
								}
								break;
							case 6:
								func_34();
								break;
							case 7:
								func_4();
								break;
							case 9:
								func_119();
								break;
						}
						if (bLocal_150 && !bLocal_151)
						{
							if (iLocal_49 != 6)
							{
								if (UNK_0x69DF961355195C3C(iLocal_149))
								{
									if (UNK_0xA45992A6CE82FB43(iLocal_149) > 0.85f)
									{
										if (UNK_0xDF1306B443CD3D15(bLocal_65, 0))
										{
											if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
											{
												if (!UNK_0xC42A92762C58E1B9(bLocal_72, bLocal_65, 0))
												{
													if (!UNK_0x869EFD0BC0868856(bLocal_72))
													{
														UNK_0xA3BF0AA5A2608191(bLocal_72);
														UNK_0xF821F915BC24D246(bLocal_72, bLocal_65, 2);
														UNK_0xFADC0A217229F6B5(bLocal_72, true);
														bLocal_151 = true;
													}
													else
													{
														bLocal_151 = true;
													}
												}
											}
										}
									}
								}
							}
						}
						if (func_2())
						{
							if (UNK_0xC844350D5D58C99A(bLocal_72))
							{
								UNK_0xEBA53F35D0085654(&bLocal_72);
							}
							func_4();
						}
						if ((iLocal_49 != 0 && iLocal_49 != 6) && iLocal_49 != 7)
						{
							if (func_1())
							{
								iLocal_49 = 9;
							}
						}
						if (iLocal_49 == 4 || iLocal_49 == 5)
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
							{
								if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_72, 150f, 150f, 150f, 0, 1, 0) || UNK_0xB87D13D0C064E9D1(bLocal_72, UNK_0x16F2683693E537C9(), 1))
								{
									UNK_0xF3268524E9BE6D6E(bLocal_72, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
									func_106();
									func_119();
								}
							}
						}
						if (iLocal_49 < 5)
						{
							UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
						}
						if (UNK_0xEB6A8945D1AC98A1(iLocal_52[0]))
						{
							if (UNK_0xE4EDC4B0E92C078B(iLocal_121[0]))
							{
								UNK_0x142CC44DB769B57E(&(iLocal_121[0]));
							}
						}
						if (UNK_0xEB6A8945D1AC98A1(iLocal_52[1]))
						{
							if (UNK_0xE4EDC4B0E92C078B(iLocal_121[1]))
							{
								UNK_0x142CC44DB769B57E(&(iLocal_121[1]));
							}
						}
						if (UNK_0xEB6A8945D1AC98A1(bLocal_72))
						{
							if (UNK_0xE4EDC4B0E92C078B(iLocal_120))
							{
								UNK_0x142CC44DB769B57E(&iLocal_120);
							}
						}
					}
					break;
			}
		}
		else
		{
			func_214();
		}
	}
}

bool func_1()
{
	int iVar0[3];

	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	if (UNK_0xC844350D5D58C99A(iLocal_52[0]))
	{
		if (UNK_0xEB6A8945D1AC98A1(iLocal_52[0]))
		{
			iVar0[0] = 1;
		}
	}
	else
	{
		iVar0[0] = 1;
	}
	if (UNK_0xC844350D5D58C99A(iLocal_52[1]))
	{
		if (UNK_0xEB6A8945D1AC98A1(iLocal_52[1]))
		{
			iVar0[1] = 1;
		}
	}
	else
	{
		iVar0[1] = 1;
	}
	if (UNK_0xC844350D5D58C99A(bLocal_72))
	{
		if (UNK_0xEB6A8945D1AC98A1(bLocal_72))
		{
			iVar0[2] = 1;
		}
	}
	else
	{
		iVar0[2] = 1;
	}
	if ((iVar0[0] && iVar0[1]) && iVar0[2])
	{
		return true;
	}
	return false;
}

bool func_2()
{
	if (Global_31006)
	{
		func_3(4);
		return true;
	}
	return false;
}

void func_3(int iParam0)
{
	Global_111624 = iParam0;
}

void func_4()
{
	while (func_118())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_33())
	{
		SYSTEM::WAIT(0);
	}
	func_8(-1, 0);
	func_5();
	func_214();
}

void func_5()
{
	func_6();
}

int func_6()
{
	if (func_7(0))
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

bool func_7(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_8(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_30(iParam0))
	{
		func_29(iParam0, bParam1);
		if (!func_28(51))
		{
			func_18("RE_REWARD", 1, 0, 4000, 10000, func_21(), 0, 138, 0);
			func_17(51);
		}
		if (func_16(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_15(iParam0, bParam1) != 322)
		{
			func_9(func_15(iParam0, bParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_111626 = bParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_3(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_3(7);
			}
			else
			{
				func_3(1);
			}
		}
	}
}

void func_9(int iParam0, var uParam1, var uParam2)
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
		func_13((891 + iParam0), 1, -1, 1);
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
		func_10();
	}
}

void func_10()
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
		func_12(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_11() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_6();
				}
			}
		}
	}
}

int func_11()
{
	return Global_30768;
}

int func_12(int iParam0, bool bParam1)
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

int func_13(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_14();
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

int func_14()
{
	return Global_1312745;
}

int func_15(int iParam0, bool bParam1)
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

bool func_16(int iParam0)
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

void func_17(int iParam0)
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

void func_18(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_19(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_19(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_20();
	}
}

void func_20()
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

int func_21()
{
	func_22();
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

void func_22()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_26(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_25(UNK_0x16F2683693E537C9());
			if (func_24(iVar0) && (!func_23(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_24(Global_111638.f_2358.f_539.f_4321))
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

bool func_23(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_28(int iParam0)
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

void func_29(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), bParam1);
}

int func_30(int iParam0)
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

int func_31()
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, UNK_0xBB0808A181D4745C(), 64);
	iVar16 = func_32(Var0);
	return iVar16;
}

int func_32(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

bool func_33()
{
	return true;
}

void func_34()
{
	switch (iLocal_152)
	{
		case 0:
			func_106();
			SYSTEM::WAIT(0);
			func_116(&uLocal_154, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
			iLocal_152++;
			break;
		case 1:
			iLocal_152++;
			break;
		case 2:
			iLocal_152++;
			break;
		case 3:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_136);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 5000, 2052, 2);
				UNK_0x96167B03C5A77156(false, vLocal_96, 1f, -1, 0.25f, 0, 38.9844f);
				UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_SMOKING", 0, 1);
				UNK_0x75ABDC5F81978924(iLocal_136);
				UNK_0x78ADC381772E3D54(bLocal_72, iLocal_136);
				UNK_0xF82EA857DA10E0CD(&iLocal_136);
				UNK_0xFADC0A217229F6B5(bLocal_72, true);
			}
			iLocal_152++;
			break;
		case 4:
			func_35(func_111(), 1, 80, 0, 1);
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			func_4();
			break;
	}
}

void func_35(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (func_67(iParam0) == 3)
	{
		return;
	}
	if (func_67(iParam0) == 4)
	{
		return;
	}
	func_36(func_67(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		bVar0 = false;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				default:
					return;
			}
		}
		UNK_0x6FB46C25CCB7E6D5(iVar1, &bVar0, -1);
		bVar0 = (bVar0 + iParam2);
		UNK_0xCDC520E5E48E63D9(iVar1, bVar0, 1);
	}
}

int func_36(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_66();
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
					func_65(99, 1);
					func_64(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_64(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_64(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_50(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_45(5))
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
							func_64(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_64(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_64(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_45(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_64(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_64(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_64(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_64(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_64(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_64(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_64(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_64(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_64(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_64(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_64(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_64(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_64(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_64(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_64(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_45(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_64(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_64(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_64(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_64(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_64(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_64(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_44(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_65(95, iParam3);
					break;
				case 1:
					func_65(97, iParam3);
					break;
				case 2:
					func_65(96, iParam3);
					break;
			}
			func_65(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_39(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_39(bVar1);
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
					func_64(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_64(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_64(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_38(iParam0);
	if (Global_41431 == 15)
	{
		func_37(0);
	}
	return 1;
}

void func_37(bool bParam0)
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

void func_38(int iParam0)
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

void func_39(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_13(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_13(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_13(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_13(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_42(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_42(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_42(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_42(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_42(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_42(8274, 0, -1, 1, 0);
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
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_41() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_41() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_40(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_40(bool bParam0)
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

int func_41()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_42(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_43(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

void func_44(int iParam0)
{
	func_65(93, iParam0);
	func_65(29, iParam0);
	func_65(30, iParam0);
}

bool func_45(bool bParam0)
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
		return func_47(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_47(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_47(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_47(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_46(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_46(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_46(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_46(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_46(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_46(8274, -1, 0);
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
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_41() /*10930*/].f_6174.f_10, bParam0);
}

int func_46(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_43(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_47(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_14();
	}
	iVar1 = func_49(iParam0, bParam1);
	iVar2 = func_48(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_48(int iParam0)
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

int func_49(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_14();
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

int func_50(bool bParam0)
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
		func_12(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_51(27, 1);
	return 1;
}

int func_51(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_52(iParam0, iParam1);
}

int func_52(int iParam0, int iParam1)
{
	if (func_23(14) && !func_63(iParam0))
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
	if (func_62(&Global_4270065))
	{
		if (func_60(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_53(&Global_4270065, iParam0))
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

bool func_53(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_23(14) && !func_63(iParam1))
	{
		return false;
	}
	if (func_60(uParam0, iParam1))
	{
		return false;
	}
	if (func_59(uParam0) < 0f)
	{
		func_58(uParam0, 0);
	}
	func_56(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_54(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_54(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_63(iParam1))
	{
		return 0;
	}
	if (func_60(uParam0, iParam1))
	{
		return 0;
	}
	if (func_59(uParam0) < 0f)
	{
		func_58(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_55(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_55(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_56(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_57(uParam0, iVar0);
		iVar0++;
	}
	func_58(uParam0, (Global_4270064 - 0.5f));
}

void func_57(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_58(var uParam0, float fParam1)
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

float func_59(var uParam0)
{
	return uParam0->f_80;
}

bool func_60(var uParam0, int iParam1)
{
	return func_61(uParam0, iParam1) != -1;
}

int func_61(var uParam0, int iParam1)
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

bool func_62(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_63(int iParam0)
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

void func_64(int iParam0, int iParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

void func_65(int iParam0, int iParam1)
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

void func_66()
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

int func_67(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

bool func_68()
{
	if (func_111() == 2)
	{
		if (func_69())
		{
			if (UNK_0x0EB28750412C3A5A(-1014.154f, 4881.411f, 245.0001f, UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), false), 1) < 400f)
			{
				if (!Global_31010)
				{
					UNK_0xC92DB9682A650680("AC_EN_ROUTE_CULT");
					Global_31010 = 1;
					if (!Global_31009)
					{
						Global_31009 = 1;
						return true;
					}
				}
			}
			else if (Global_31010)
			{
				UNK_0xC92DB9682A650680("AC_LEFT_AREA");
				Global_31010 = 0;
			}
		}
	}
	return false;
}

bool func_69()
{
	return Global_31005;
}

void func_70(bool bParam0)
{
	if (bParam0)
	{
		if (bLocal_77)
		{
			if (func_73(&uLocal_154, "REHOMAU", &Local_84, &cLocal_78, 8, 0, 0))
			{
				bLocal_77 = false;
			}
		}
	}
	else if (!bLocal_77 && UNK_0x25037C66EB32B076())
	{
		Local_84 = { func_72() };
		cLocal_78 = { func_71() };
		func_126();
		bLocal_77 = true;
	}
}

struct<6> func_71()
{
	struct<6> Var0;
	int iVar6;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = UNK_0x40EFDB96B3112BA7();
		iVar6 = (iVar6 + Global_21815);
		if (iVar6 > -1)
		{
			return Global_19673[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_72()
{
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

int func_73(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_74(sParam2, iParam4, 0);
}

int func_74(char* sParam0, int iParam1, bool bParam2)
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
					func_87();
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
		if (func_86(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_85();
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
				func_84();
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
				if (func_83())
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
			if (func_82())
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
			func_81();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_80();
		func_75();
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
		func_87();
	}
	return 0;
}

void func_75()
{
	if (!func_76())
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

bool func_76()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_79())
	{
		return false;
	}
	if (func_77(UNK_0xD803B885F5E47A62()))
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

bool func_77(int iParam0)
{
	return func_78(iParam0, 20);
}

bool func_78(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_79()
{
	return -1;
}

void func_80()
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

void func_81()
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

bool func_82()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_83()
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

void func_84()
{
	if (func_23(14))
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
		Global_19486 = func_111();
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

void func_85()
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

bool func_86(bool bParam0, int iParam1)
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

void func_87()
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

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_89(vector3 vParam0)
{
	if (func_111() == 2)
	{
		if (func_69() && !Global_31008)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vParam0);
			}
			if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vParam0) > (fLocal_47 + 200f) || UNK_0x0EB28750412C3A5A(-1014.154f, 4881.411f, 245.0001f, UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), false), 1) < 400f)
			{
				Global_31008 = 1;
				return true;
			}
		}
	}
	return false;
}

void func_90()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
	{
		if (!bLocal_105)
		{
			if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
			{
				if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0x728870EB733D12A1(), 1) && UNK_0xC42A92762C58E1B9(bLocal_72, UNK_0x728870EB733D12A1(), 0))
				{
					func_70(0);
					func_106();
					SYSTEM::WAIT(0);
					func_116(&uLocal_154, "REHOMAU", "REHOM_GETOUT", 4, 0, 0, 0);
					bLocal_105 = true;
				}
			}
		}
		else if (!UNK_0x437347B10A200C4B(UNK_0x728870EB733D12A1(), 0))
		{
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), UNK_0x728870EB733D12A1(), 0) && UNK_0xC42A92762C58E1B9(bLocal_72, UNK_0x728870EB733D12A1(), 0))
			{
				bLocal_105 = false;
			}
		}
		if (!bLocal_106)
		{
			if (UNK_0xE64AC821059A938D(UNK_0x16F2683693E537C9()))
			{
				func_70(0);
				func_106();
				SYSTEM::WAIT(0);
				func_116(&uLocal_154, "REHOMAU", "REHOM_JACK", 4, 0, 0, 0);
				bLocal_106 = true;
			}
		}
		else if (!UNK_0xE64AC821059A938D(UNK_0x16F2683693E537C9()))
		{
			bLocal_106 = false;
		}
		if (!bLocal_107)
		{
			if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
			{
				func_70(0);
				func_106();
				SYSTEM::WAIT(0);
				func_116(&uLocal_154, "REHOMAU", "REHOM_SHOOT", 4, 0, 0, 0);
				bLocal_107 = true;
			}
		}
		else if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
		{
			bLocal_107 = false;
		}
	}
}

void func_91()
{
	if (!func_92())
	{
		func_70(1);
	}
	if (!func_118())
	{
		switch (iLocal_130)
		{
			case 0:
				if (func_111() == 0)
				{
					func_116(&uLocal_154, "REHOMAU", "REHOM_WTF_M", 4, 0, 0, 0);
				}
				else if (func_111() == 1)
				{
					func_116(&uLocal_154, "REHOMAU", "REHOM_WTF_F", 4, 0, 0, 0);
				}
				iLocal_130++;
				break;
			case 1:
				func_116(&uLocal_154, "REHOMAU", "REHOM_CORR", 4, 0, 0, 0);
				iLocal_130++;
				break;
			case 2:
				func_116(&uLocal_154, "REHOMAU", "REHOM_TALK", 4, 0, 0, 0);
				iLocal_130++;
				break;
			case 3:
				if (func_111() == 0)
				{
					func_116(&uLocal_154, "REHOMAU", "REHOM_CAR_M", 4, 0, 0, 0);
				}
				else if (func_111() == 1)
				{
					func_116(&uLocal_154, "REHOMAU", "REHOM_CAR_F", 4, 0, 0, 0);
				}
				iLocal_130++;
				break;
			case 4:
				func_116(&uLocal_154, "REHOMAU", "REHOM_TALK2", 4, 0, 0, 0);
				iLocal_130++;
				break;
			case 5:
				if (func_111() == 0)
				{
					func_116(&uLocal_154, "REHOMAU", "REHOM_REJ_M", 4, 0, 0, 0);
				}
				else if (func_111() == 1)
				{
					func_116(&uLocal_154, "REHOMAU", "REHOM_REJ_F", 4, 0, 0, 0);
				}
				iLocal_130++;
				break;
			case 6:
				func_116(&uLocal_154, "REHOMAU", "REHOM_TALK2b", 4, 0, 0, 0);
				iLocal_130++;
				break;
			case 7:
				func_116(&uLocal_154, "REHOMAU", "REHOM_TALK3", 4, 0, 0, 0);
				iLocal_130++;
				break;
			case 8:
				if (func_111() == 0)
				{
					func_116(&uLocal_154, "REHOMAU", "REHOM_INT_M", 4, 0, 0, 0);
				}
				else if (func_111() == 1)
				{
					func_116(&uLocal_154, "REHOMAU", "REHOM_INT_F", 4, 0, 0, 0);
				}
				iLocal_130++;
				break;
			case 9:
				func_116(&uLocal_154, "REHOMAU", "REHOM_NOBAN", 4, 0, 0, 0);
				iLocal_130++;
				break;
		}
	}
}

bool func_92()
{
	if (((((((((func_93("REHOM_QM") || func_93("REHOM_GETOUT")) || func_93("REHOM_SHOOT")) || func_93("REHOM_JACK")) || func_93("REHOM_WRONG")) || func_93("REHOM_CULT")) || func_93("REHOM_STOP")) || func_93("REHOM_NOVEH")) || func_93("REHOM_UNS1")) || func_93("REHOM_UNS2"))
	{
		return true;
	}
	return false;
}

int func_93(bool bParam0)
{
	var uVar0;

	if (func_118())
	{
		MemCopy(&uVar0, {func_72()}, 4);
		if (UNK_0x7F8A39872A07D2CE(bParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_94()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
	{
		if (UNK_0xE3614539F8B5C807(bLocal_72))
		{
			if (!bLocal_142)
			{
				iLocal_143 = UNK_0x1C0640BA9A7327B3();
				bLocal_142 = true;
			}
			else
			{
				iLocal_144 = UNK_0x1C0640BA9A7327B3();
			}
		}
		else
		{
			bLocal_142 = false;
		}
		if ((iLocal_144 - iLocal_143) > 180000)
		{
			if (UNK_0x16102BEDC7435774(bLocal_72))
			{
				UNK_0x0A94A109271BE75A(bLocal_72);
				func_116(&uLocal_154, "REHOMAU", "REHOM_WK", 4, 0, 0, 0);
				func_119();
			}
		}
	}
}

void func_95()
{
	if (UNK_0x4024663A44BC1535(UNK_0x16F2683693E537C9()))
	{
		if (!bLocal_145)
		{
			iLocal_147 = UNK_0x1C0640BA9A7327B3();
			bLocal_145 = true;
		}
		else
		{
			iLocal_148 = UNK_0x1C0640BA9A7327B3();
		}
	}
	else
	{
		iLocal_148 = 0;
		bLocal_145 = false;
		bLocal_146 = false;
	}
	if ((iLocal_148 - iLocal_147) > 50000 && !bLocal_146)
	{
		func_70(0);
		func_106();
		SYSTEM::WAIT(0);
		func_116(&uLocal_154, "REHOMAU", "REHOM_QM", 4, 0, 0, 0);
		bLocal_146 = true;
	}
	if ((iLocal_148 - iLocal_147) > 60000 && bLocal_146)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
		{
			UNK_0xF3268524E9BE6D6E(bLocal_72, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
			func_96(bLocal_72, 120000, 0);
			UNK_0xFADC0A217229F6B5(bLocal_72, true);
			if (UNK_0x16102BEDC7435774(bLocal_72))
			{
				UNK_0x0A94A109271BE75A(bLocal_72);
			}
		}
		func_119();
	}
}

int func_96(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = func_99(bParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_98(bParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_97();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_42357[iVar2 /*5*/] = 0;
	Global_42357[iVar2 /*5*/].f_1 = bParam0;
	Global_42357[iVar2 /*5*/].f_2 = iParam1;
	Global_42357[iVar2 /*5*/].f_3 = iParam1;
	Global_42357[iVar2 /*5*/].f_4 = 0;
	if (bParam0 == UNK_0x16F2683693E537C9())
	{
		Global_42594 = 1;
	}
	Global_42355++;
	return 1;
}

int func_97()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_98(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0 /*5*/].f_1 == bParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_99(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (bParam0 == Global_42383[iVar0 /*5*/].f_1)
		{
			return Global_42383[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_100()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
	{
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_72, 8f, 8f, 8f, 0, 1, 0) || UNK_0x7EBBF23C1CD917AA(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_120))
			{
				UNK_0x142CC44DB769B57E(&iLocal_120);
			}
			if (!UNK_0x16102BEDC7435774(bLocal_72))
			{
				UNK_0xE25C96A9C36BE5D2(bLocal_72, UNK_0x5D08BBCCCC2F43A4(UNK_0xD803B885F5E47A62()));
				UNK_0xBF541ED34EA81209(bLocal_72, false);
			}
			if (!UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
			{
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_124))
				{
					iLocal_124 = func_104(vLocal_93, 1);
				}
				if (UNK_0x7EBBF23C1CD917AA(UNK_0x16F2683693E537C9()))
				{
					if (!UNK_0xE4EDC4B0E92C078B(iLocal_124))
					{
						iLocal_124 = func_104(vLocal_93, 1);
					}
				}
				if (func_111() == 2 && !func_103())
				{
					if (!UNK_0xE4EDC4B0E92C078B(iLocal_125))
					{
						iLocal_125 = func_104(vLocal_99, 0);
						UNK_0xBC8E0A7390523199(iLocal_125, 269);
						func_101();
					}
				}
			}
		}
		else
		{
			if (!UNK_0xE4EDC4B0E92C078B(iLocal_120))
			{
				iLocal_120 = func_109(bLocal_72, 0, 145);
			}
			if (UNK_0xE4EDC4B0E92C078B(iLocal_124))
			{
				UNK_0x142CC44DB769B57E(&iLocal_124);
			}
		}
	}
}

void func_101()
{
	if (func_111() == 2)
	{
		if (!Global_31007)
		{
			func_102("CULT_BLIP_HELP", -1);
			Global_31007 = 1;
		}
	}
}

void func_102(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_103()
{
	if (Global_111638.f_24990.f_5 == 1000)
	{
		return true;
	}
	return false;
}

int func_104(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_105(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

float func_105(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_106()
{
	Global_19671 = 0;
	func_107();
}

void func_107()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

bool func_108()
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bLocal_118 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (UNK_0xDF1306B443CD3D15(bLocal_118, 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
			{
				if (UNK_0x82CCEAB29E9451DD(bLocal_72, bLocal_118))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_109(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_110(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_110(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_105(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_105(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_105(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_111()
{
	func_22();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_112()
{
	if (!func_103())
	{
		if (func_111() == 2)
		{
			Global_31005 = 1;
		}
	}
}

int func_113()
{
	return UNK_0x5D08BBCCCC2F43A4(UNK_0xA30EC016B12C03E4());
}

bool func_114()
{
	if (UNK_0xC844350D5D58C99A(bLocal_65))
	{
		if (((UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_65, 0) && UNK_0xC42A92762C58E1B9(bLocal_72, bLocal_65, 0)) && !UNK_0xC42A92762C58E1B9(iLocal_52[0], bLocal_65, 0)) && !UNK_0xC42A92762C58E1B9(iLocal_52[1], bLocal_65, 0))
		{
			return true;
		}
	}
	return false;
}

void func_115(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_116(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_74(sParam2, iParam3, 0);
}

bool func_117()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_118()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_119()
{
	func_214();
}

void func_120()
{
	if (!bLocal_109)
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[0]))
		{
			UNK_0x3CC33E4E9CE523F4(iLocal_52[0], 0);
			UNK_0xA3BF0AA5A2608191(iLocal_52[0]);
			UNK_0xDD353D0E9C789D0E(&iLocal_136);
			UNK_0xBC43ED9FE28DB191(false);
			UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
			UNK_0x75ABDC5F81978924(iLocal_136);
			UNK_0x78ADC381772E3D54(iLocal_52[0], iLocal_136);
			UNK_0xF82EA857DA10E0CD(&iLocal_136);
			UNK_0xFADC0A217229F6B5(iLocal_52[0], true);
			if (UNK_0xE4EDC4B0E92C078B(iLocal_121[0]))
			{
				UNK_0x321E019A46034F39(iLocal_121[0], false);
			}
			SYSTEM::SETTIMERB(0);
			bLocal_109 = true;
		}
		else
		{
			SYSTEM::SETTIMERB(500);
			bLocal_109 = true;
		}
	}
	if (!bLocal_110)
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_121[1]))
		{
			UNK_0x321E019A46034F39(iLocal_121[1], false);
		}
		func_106();
		SYSTEM::WAIT(0);
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[1]))
		{
			func_121(iLocal_52[1], "GENERIC_INSULT_HIGH", 24);
			UNK_0x3CC33E4E9CE523F4(iLocal_52[1], 2);
			if ((UNK_0xB4ECF989E2C1DAC8(iLocal_52[1], "random@homelandsecurity", "idle_cop_ground", 3) || UNK_0x69DF961355195C3C(iLocal_149)) && !UNK_0x869EFD0BC0868856(iLocal_52[1]))
			{
				UNK_0x5E678B691C852774(iLocal_52[1], 16);
				UNK_0xDD353D0E9C789D0E(&iLocal_136);
				UNK_0xC6EB89C59F2AF6B8(false, "random@homelandsecurity", "idle_to_stand_cop_ground", 4f, -2f, 1400, 8192, false, 0, 0, 0);
				UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
				UNK_0x75ABDC5F81978924(iLocal_136);
				UNK_0x78ADC381772E3D54(iLocal_52[1], iLocal_136);
				UNK_0xF82EA857DA10E0CD(&iLocal_136);
				UNK_0xFADC0A217229F6B5(iLocal_52[1], true);
				bLocal_110 = true;
			}
			else
			{
				UNK_0x6C3AE6E278DB3D0E(iLocal_52[1], UNK_0x16F2683693E537C9(), 0, 16);
				UNK_0xFADC0A217229F6B5(iLocal_52[1], true);
				bLocal_110 = true;
			}
		}
	}
	else if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[1]))
	{
		if (((!UNK_0xB4ECF989E2C1DAC8(iLocal_52[1], "random@homelandsecurity", "idle_cop_ground", 3) && !UNK_0xB4ECF989E2C1DAC8(iLocal_52[1], "random@homelandsecurity", "idle_to_stand_cop_ground", 1)) && UNK_0xD1960163A3042274(iLocal_52[1], 780511057) != 0) && UNK_0xD1960163A3042274(iLocal_52[1], 780511057) != 1)
		{
			bLocal_110 = true;
		}
	}
}

void func_121(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_122(iParam2), 1);
}

int func_122(int iParam0)
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

void func_123()
{
	iLocal_49 = 3;
}

void func_124()
{
	func_106();
	SYSTEM::WAIT(0);
	func_116(&uLocal_154, "REHOMAU", "REHOM_AGG", 4, 0, 0, 0);
	iLocal_49 = 3;
}

void func_125()
{
	iLocal_49 = 3;
}

void func_126()
{
	Global_19671 = 0;
	func_127();
}

void func_127()
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

bool func_128()
{
	iLocal_126 = 0;
	while (iLocal_126 <= 1)
	{
		if (UNK_0x437347B10A200C4B(iLocal_52[iLocal_126], 0))
		{
			if (UNK_0xB87D13D0C064E9D1(iLocal_52[iLocal_126], UNK_0x16F2683693E537C9(), 1))
			{
				return true;
			}
		}
		iLocal_126++;
	}
	return false;
}

void func_129()
{
	iLocal_128 = UNK_0x1C0640BA9A7327B3();
	if (!bLocal_138)
	{
		switch (iLocal_51)
		{
			case 0:
				if (func_134())
				{
					iLocal_51 = 9;
				}
				if (func_133() && !bLocal_114)
				{
					iLocal_51 = 13;
				}
				if (func_116(&uLocal_154, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
				{
					iLocal_127 = UNK_0x1C0640BA9A7327B3();
					iLocal_51 = 1;
				}
				break;
			case 1:
				if (func_134())
				{
					iLocal_51 = 9;
				}
				if (func_133() && !bLocal_114)
				{
					iLocal_51 = 13;
				}
				if (func_116(&uLocal_154, "REHOMAU", "REHOM_COM", 4, 0, 0, 0))
				{
					iLocal_127 = UNK_0x1C0640BA9A7327B3();
					iLocal_51 = 2;
				}
				break;
			case 2:
				if (func_134())
				{
					iLocal_51 = 9;
				}
				if (func_133() && !bLocal_114)
				{
					iLocal_51 = 13;
				}
				if ((iLocal_128 - iLocal_127) > 6000)
				{
					if (func_116(&uLocal_154, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_127 = UNK_0x1C0640BA9A7327B3();
						iLocal_51 = 3;
					}
				}
				break;
			case 3:
				if (func_134())
				{
					iLocal_51 = 9;
				}
				if (func_133() && !bLocal_114)
				{
					iLocal_51 = 13;
				}
				if (func_116(&uLocal_154, "REHOMAU", "REHOM_COM2", 4, 0, 0, 0))
				{
					iLocal_127 = UNK_0x1C0640BA9A7327B3();
					iLocal_51 = 4;
				}
				break;
			case 4:
				if (func_134())
				{
					iLocal_51 = 9;
				}
				if (func_133() && !bLocal_114)
				{
					iLocal_51 = 13;
				}
				if ((iLocal_128 - iLocal_127) > 5500)
				{
					if (func_116(&uLocal_154, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_127 = UNK_0x1C0640BA9A7327B3();
						iLocal_51 = 5;
					}
				}
				break;
			case 5:
				if (func_134())
				{
					iLocal_51 = 9;
				}
				if (func_133() && !bLocal_114)
				{
					iLocal_51 = 13;
				}
				if (!bLocal_115 && SYSTEM::TIMERA() > 5000)
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_136);
					UNK_0x0C8C0C840C2D1AD2(false, bLocal_72, -1, 2054, 2);
					UNK_0xF96A174EE26D7588(false, bLocal_72, -1);
					UNK_0x75ABDC5F81978924(iLocal_136);
					UNK_0x78ADC381772E3D54(iLocal_52[0], iLocal_136);
					UNK_0xFADC0A217229F6B5(iLocal_52[0], true);
					bLocal_115 = true;
				}
				if ((iLocal_128 - iLocal_127) > 3000 || bLocal_114)
				{
					if (((UNK_0xDF1306B443CD3D15(bLocal_65, 0) && !UNK_0xEB6A8945D1AC98A1(iLocal_52[0])) && !UNK_0xEB6A8945D1AC98A1(iLocal_52[1])) && !UNK_0xEB6A8945D1AC98A1(bLocal_72))
					{
						if (UNK_0x69DF961355195C3C(iLocal_149))
						{
							if (UNK_0xA45992A6CE82FB43(iLocal_149) > 0.98f)
							{
								if (!func_118())
								{
									if (UNK_0x7069CC4DE1EA3FAA(iLocal_52[0], bLocal_72, 10f))
									{
										if (func_116(&uLocal_154, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
										{
											UNK_0xBC43ED9FE28DB191(iLocal_52[0]);
											iLocal_149 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
											UNK_0x6BE2EAE992FD7C26(iLocal_149, bLocal_65, 0);
											UNK_0x915804B434753CBD(bLocal_72, iLocal_149, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
											UNK_0x915804B434753CBD(iLocal_52[0], iLocal_149, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
											UNK_0x915804B434753CBD(iLocal_52[1], iLocal_149, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
											UNK_0xD65E6E13E145467B(bLocal_65, "exit_car", "random@homelandsecurity", 4f, false, false, 0, false, 0);
											bLocal_150 = true;
											iLocal_127 = UNK_0x1C0640BA9A7327B3();
											iLocal_51 = 6;
										}
									}
								}
							}
						}
					}
				}
				if (func_132())
				{
					iLocal_51 = 15;
				}
				break;
			case 15:
				if (((UNK_0xDF1306B443CD3D15(bLocal_65, 0) && !UNK_0xEB6A8945D1AC98A1(iLocal_52[0])) && !UNK_0xEB6A8945D1AC98A1(iLocal_52[1])) && !UNK_0xEB6A8945D1AC98A1(bLocal_72))
				{
					if (UNK_0x69DF961355195C3C(iLocal_149))
					{
						if (!func_118())
						{
							if (UNK_0x7069CC4DE1EA3FAA(iLocal_52[0], bLocal_72, 10f))
							{
								if (func_116(&uLocal_154, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
								{
									UNK_0xBC43ED9FE28DB191(iLocal_52[0]);
									iLocal_149 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
									UNK_0x6BE2EAE992FD7C26(iLocal_149, bLocal_65, 0);
									UNK_0x915804B434753CBD(bLocal_72, iLocal_149, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
									UNK_0x915804B434753CBD(iLocal_52[0], iLocal_149, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
									UNK_0x915804B434753CBD(iLocal_52[1], iLocal_149, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
									UNK_0xD65E6E13E145467B(bLocal_65, "exit_car", "random@homelandsecurity", 2f, false, false, 0, false, 0);
									bLocal_150 = true;
									iLocal_127 = UNK_0x1C0640BA9A7327B3();
									iLocal_51 = 6;
								}
							}
						}
					}
				}
				break;
			case 6:
				func_130();
				if (UNK_0x69DF961355195C3C(iLocal_149))
				{
					if (UNK_0xA45992A6CE82FB43(iLocal_149) > 0.45f)
					{
						if ((UNK_0xDF1306B443CD3D15(bLocal_65, 0) && !UNK_0xEB6A8945D1AC98A1(bLocal_72)) && !UNK_0xEB6A8945D1AC98A1(iLocal_52[0]))
						{
						}
					}
				}
				if (UNK_0x69DF961355195C3C(iLocal_149))
				{
					if (UNK_0xA45992A6CE82FB43(iLocal_149) > 0.9f)
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_65, 0))
						{
							if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[0]))
							{
								UNK_0x5B1D360B9C6F0A09(iLocal_52[0], bLocal_65, -1, -1, 1f, 9, 0);
								iLocal_51 = 7;
							}
						}
					}
				}
				break;
			case 7:
				func_130();
				if (UNK_0x69DF961355195C3C(iLocal_149))
				{
					if (UNK_0xA45992A6CE82FB43(iLocal_149) > 0.95f)
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_65, 0))
						{
							if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[1]))
							{
								UNK_0x5B1D360B9C6F0A09(iLocal_52[1], bLocal_65, -1, false, 1f, 9, 0);
								UNK_0xFADC0A217229F6B5(iLocal_52[1], true);
								iLocal_51 = 8;
							}
						}
					}
				}
				break;
			case 8:
				func_130();
				if ((UNK_0xDF1306B443CD3D15(bLocal_65, 0) && !UNK_0xEB6A8945D1AC98A1(iLocal_52[0])) && !UNK_0xEB6A8945D1AC98A1(iLocal_52[1]))
				{
					if ((UNK_0x82CCEAB29E9451DD(bLocal_72, bLocal_65) && UNK_0x82CCEAB29E9451DD(iLocal_52[0], bLocal_65)) && UNK_0x82CCEAB29E9451DD(iLocal_52[1], bLocal_65))
					{
						UNK_0xE072601B4380E9DF(iLocal_52[0], bLocal_65, 15f, 786468);
						UNK_0xAA280AF45BCCCF21(bLocal_65, 1);
						bLocal_138 = true;
					}
				}
				break;
			case 9:
				UNK_0xDD353D0E9C789D0E(&iLocal_136);
				UNK_0xBC43ED9FE28DB191(false);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 20000, 0, 2);
				UNK_0x9BE7E7B6B488CC55(false, UNK_0x16F2683693E537C9(), -1, 0);
				UNK_0x75ABDC5F81978924(iLocal_136);
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[0]))
				{
					UNK_0x78ADC381772E3D54(iLocal_52[0], iLocal_136);
				}
				UNK_0xF82EA857DA10E0CD(&iLocal_136);
				if (!bLocal_112)
				{
					if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 4) && !UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 3))
					{
						func_106();
						SYSTEM::WAIT(0);
						func_116(&uLocal_154, "REHOMAU", "REHOM_GUN", 4, 0, 0, 0);
					}
					if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 3) && !UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 4))
					{
						func_106();
						SYSTEM::WAIT(0);
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[0]))
						{
							func_121(iLocal_52[0], "GUN_COOL", 24);
						}
					}
					bLocal_112 = true;
					iLocal_134 = UNK_0x1C0640BA9A7327B3();
				}
				iLocal_51 = 10;
				break;
			case 10:
				if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6) && UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_52[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_135 = UNK_0x1C0640BA9A7327B3();
				}
				else
				{
					iLocal_51 = 13;
				}
				if (((iLocal_135 - iLocal_134) > 6000 && UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6)) && !bLocal_113)
				{
					if (func_116(&uLocal_154, "REHOMAU", "REHOM_STAY3", 4, 0, 0, 0))
					{
						iLocal_134 = UNK_0x1C0640BA9A7327B3();
						bLocal_113 = true;
					}
					iLocal_51 = 11;
				}
				break;
			case 11:
				if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6) && UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_52[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_135 = UNK_0x1C0640BA9A7327B3();
				}
				else
				{
					iLocal_51 = 13;
				}
				if (((iLocal_135 - iLocal_134) > 9000 && UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6)) || bLocal_140)
				{
					if (func_116(&uLocal_154, "REHOMAU", "REHOM_SHOO", 4, 0, 0, 0))
					{
						iLocal_51 = 12;
					}
				}
				break;
			case 12:
				if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
				{
					iLocal_135 = UNK_0x1C0640BA9A7327B3();
				}
				else
				{
					iLocal_51 = 13;
				}
				if ((iLocal_135 - iLocal_134) > 13000)
				{
					iLocal_49 = 3;
				}
				break;
			case 13:
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[0]))
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_136);
					UNK_0xBC43ED9FE28DB191(false);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2052, 4);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), -1);
					UNK_0x75ABDC5F81978924(iLocal_136);
					UNK_0x78ADC381772E3D54(iLocal_52[0], iLocal_136);
					UNK_0xF82EA857DA10E0CD(&iLocal_136);
				}
				if (bLocal_141)
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[1]))
					{
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
						{
							if (UNK_0xD1960163A3042274(iLocal_52[1], 1785177548) != 1)
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_136);
								UNK_0xBC43ED9FE28DB191(false);
								UNK_0xF96A174EE26D7588(false, bLocal_72, 0);
								UNK_0x0C8C0C840C2D1AD2(false, bLocal_72, 20000, 0, 2);
								UNK_0xA8CC11FF8D2962D4(false, bLocal_72, -1f, 0f, 0f, 1f, -1, 1036831949 /* Float: 0.1f */, 1);
								UNK_0x75ABDC5F81978924(iLocal_136);
								UNK_0x78ADC381772E3D54(iLocal_52[1], iLocal_136);
								UNK_0xF82EA857DA10E0CD(&iLocal_136);
							}
						}
						else if (UNK_0xD1960163A3042274(iLocal_52[1], 1785177548) != 1)
						{
							UNK_0xDD353D0E9C789D0E(&iLocal_136);
							UNK_0xBC43ED9FE28DB191(false);
							UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
							UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), 20000, 0, 2);
							UNK_0x75ABDC5F81978924(iLocal_136);
							UNK_0x78ADC381772E3D54(iLocal_52[1], iLocal_136);
							UNK_0xF82EA857DA10E0CD(&iLocal_136);
						}
					}
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
					{
						if (UNK_0xD1960163A3042274(bLocal_72, 1785177548) != 1)
						{
							UNK_0x5DA3F35E3BFDEE66(bLocal_72, UNK_0x16F2683693E537C9(), -1, 0);
							UNK_0xFADC0A217229F6B5(bLocal_72, true);
						}
					}
				}
				iLocal_51 = 14;
				break;
			case 14:
				if (func_134())
				{
					iLocal_51 = 9;
				}
				if (func_132())
				{
					if (UNK_0x69DF961355195C3C(iLocal_149))
					{
						if (!bLocal_141)
						{
							if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[1]))
							{
							}
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
							{
								UNK_0x5DA3F35E3BFDEE66(bLocal_72, UNK_0x16F2683693E537C9(), -1, 0);
								UNK_0xFADC0A217229F6B5(bLocal_72, true);
							}
							bLocal_141 = true;
						}
					}
				}
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[0]))
				{
					if (!func_118() && !bLocal_114)
					{
						if (func_117())
						{
							func_116(&uLocal_154, "REHOMAU", "REHOM_AWAY1", 4, 0, 0, 0);
						}
						else
						{
							func_116(&uLocal_154, "REHOMAU", "REHOM_AWAY2", 4, 0, 0, 0);
						}
						bLocal_114 = true;
					}
					bLocal_115 = false;
					SYSTEM::SETTIMERA(0);
					iLocal_127 = (UNK_0x1C0640BA9A7327B3() - 4500);
					iLocal_51 = 5;
				}
		}
	}
}

void func_130()
{
	if (!func_118())
	{
		if (UNK_0xDF1306B443CD3D15(bLocal_65, 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
			{
				if (UNK_0xC42A92762C58E1B9(bLocal_72, bLocal_65, 0))
				{
					if (func_131(bLocal_72, 0) == 2)
					{
						if (iLocal_129 < UNK_0x1C0640BA9A7327B3())
						{
							func_116(&uLocal_154, "REHOMAU", "REHOM_FOLL", 4, 0, 0, 0);
							iLocal_129 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(3500, 4000));
						}
					}
				}
			}
		}
	}
}

bool func_131(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0x405E212DDE472467(bParam0, iParam1))
		{
			bVar0 = UNK_0x6937EA2286828455(bParam0, iParam1);
			if (UNK_0xC844350D5D58C99A(bVar0))
			{
				iVar1 = UNK_0x7087E053058E9F6C(UNK_0x134B62B726CEC8E6(bVar0));
				if (iVar1 == 1)
				{
					bVar3 = -1;
					return bVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					bVar3 = (iVar2 - 1);
					if (!UNK_0xBBA8A868118C90ED(bVar0, bVar3, 0))
					{
						if (UNK_0xA30B8362589C124A(bVar0, bVar3, 0) == bParam0)
						{
							return bVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return bVar3;
}

bool func_132()
{
	if ((!UNK_0xEB6A8945D1AC98A1(iLocal_52[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_52[1])) && !UNK_0xEB6A8945D1AC98A1(bLocal_72))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if ((UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_52[0], 1.5f, 1.5f, 5f, 0, 1, 2) || UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_52[1], 2.5f, 2.5f, 5f, 0, 1, 2)) || UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_72, 1.5f, 1.5f, 5f, 0, 1, 2))
			{
				return true;
			}
		}
		else if ((UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_52[0], 0.5f, 0.5f, 5f, 0, 1, 1) || UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_52[1], 0.5f, 0.5f, 5f, 0, 1, 1)) || UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_72, 0.5f, 0.5f, 5f, 0, 1, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_133()
{
	if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[1]))
	{
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_52[1], 6f, 6f, 6f, 0, 1, 0))
		{
			if (UNK_0x7069CC4DE1EA3FAA(iLocal_52[1], UNK_0x16F2683693E537C9(), 120f))
			{
				if (!UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
				{
					return true;
				}
			}
		}
	}
	if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[0]))
	{
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_52[0], 6f, 6f, 6f, 0, 1, 0))
		{
			if (!UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_134()
{
	if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[1]))
	{
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_52[1], 6f, 6f, 6f, 0, 1, 1))
		{
			if (UNK_0x7069CC4DE1EA3FAA(iLocal_52[1], UNK_0x16F2683693E537C9(), 120f))
			{
				if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
				{
					return true;
				}
			}
		}
	}
	if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[0]))
	{
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), iLocal_52[0], 6f, 6f, 6f, 0, 1, 1))
		{
			if (UNK_0x7069CC4DE1EA3FAA(iLocal_52[0], UNK_0x16F2683693E537C9(), 120f))
			{
				if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_135(bool bParam0)
{
	if (func_138())
	{
		Global_111628 = 1;
		Global_111625 = UNK_0x1C0640BA9A7327B3();
		if (func_16(Global_111627))
		{
			func_136(0);
		}
		UNK_0x974531784BE14213(1, "RE_TITLE");
		if (bParam0 && func_16(Global_111627))
		{
			UNK_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_136(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_102(func_137(iParam0), -1);
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
					func_102(func_137(iParam0), -1);
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
					func_102(func_137(iParam0), -1);
					Global_111638.f_24990.f_4++;
					UNK_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

bool func_137(int iParam0)
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

bool func_138()
{
	switch (func_139(&Global_30827, 0, 5, 0, UNK_0x0D0A574C76D769AC()))
	{
		case 1:
			return true;
		case 0:
			return true;
	}
	return false;
}

int func_139(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_143(0))
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
		if (!func_141(iParam2))
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
			func_140(uParam0, iParam4);
		}
	}
	return 2;
}

void func_140(var uParam0, int iParam1)
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

bool func_141(int iParam0)
{
	return func_142(iParam0, Global_41431);
}

int func_142(int iParam0, int iParam1)
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

bool func_143(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_141(iParam0))
	{
		return false;
	}
	return true;
}

void func_144()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_119))
	{
		UNK_0x142CC44DB769B57E(&iLocal_119);
	}
	if (!UNK_0xE4EDC4B0E92C078B(iLocal_120))
	{
		if (!UNK_0x437347B10A200C4B(bLocal_72, 0))
		{
			iLocal_120 = func_109(bLocal_72, 0, 145);
			UNK_0xF2D30B8ACAF12A39(iLocal_120, false);
		}
	}
	else
	{
		UNK_0xF2D30B8ACAF12A39(iLocal_120, true);
	}
	iLocal_126 = 0;
	while (iLocal_126 <= 1)
	{
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_121[iLocal_126]))
		{
			if (!UNK_0x437347B10A200C4B(iLocal_52[iLocal_126], 0))
			{
				iLocal_121[iLocal_126] = func_109(iLocal_52[iLocal_126], 0, 145);
				UNK_0xF2D30B8ACAF12A39(iLocal_121[iLocal_126], false);
			}
		}
		else
		{
			UNK_0xF2D30B8ACAF12A39(iLocal_121[iLocal_126], true);
		}
		iLocal_126++;
	}
}

bool func_145()
{
	bool bVar0;
	bool bVar1;

	if (!bLocal_133)
	{
		if (UNK_0x723EE7F83DF1497D(vLocal_66 - Vector(30f, 30f, 30f), vLocal_66 + Vector(30f, 30f, 30f), 1) || UNK_0x4DF7FAA5E7682BE3(vLocal_66 - Vector(30f, 30f, 30f), vLocal_66 + Vector(30f, 30f, 30f), 1))
		{
			iLocal_50 = 2;
			return true;
		}
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[0]) && !UNK_0xEB6A8945D1AC98A1(iLocal_52[1]))
		{
			if (UNK_0x12DE711B1C681E9E(iLocal_52[0], UNK_0x16F2683693E537C9(), 20f, 20f, 20f, 0, 1, 0))
			{
				if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 7) || (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()) && UNK_0x12DE711B1C681E9E(iLocal_52[0], UNK_0x16F2683693E537C9(), 6f, 6f, 6f, 0, 1, 0)))
				{
					if (((UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), iLocal_52[0]) || UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), iLocal_52[0])) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), iLocal_52[1])) || UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), iLocal_52[1]))
					{
						if (UNK_0xE115347EA59F7B86(iLocal_52[0], UNK_0x16F2683693E537C9()) || UNK_0xE115347EA59F7B86(iLocal_52[1], UNK_0x16F2683693E537C9()))
						{
							iLocal_50 = 2;
							return true;
						}
					}
				}
			}
		}
		bVar0 = UNK_0x728870EB733D12A1();
		if (UNK_0xC844350D5D58C99A(bLocal_65))
		{
			if (!UNK_0x437347B10A200C4B(bLocal_65, 0))
			{
				if (UNK_0xB87D13D0C064E9D1(bLocal_65, UNK_0x16F2683693E537C9(), 1))
				{
					iLocal_50 = 2;
					return true;
				}
				if (UNK_0x64E716CF8C283BF5(UNK_0x16F2683693E537C9(), bLocal_65) && UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) > 0.1f)
				{
					iLocal_50 = 2;
					return true;
				}
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_65, 0))
				{
					iLocal_50 = 2;
					return true;
				}
				if (UNK_0xDF1306B443CD3D15(bVar0, 0))
				{
					if (UNK_0xB87D13D0C064E9D1(bLocal_65, bVar0, 1))
					{
						iLocal_50 = 2;
						return true;
					}
				}
			}
			else if (UNK_0xB87D13D0C064E9D1(bLocal_65, UNK_0x16F2683693E537C9(), 1))
			{
				iLocal_50 = 2;
				return true;
			}
		}
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("TOWTRUCK")) || UNK_0xF94CCE643440E68B(UNK_0x16F2683693E537C9(), joaat("TOWTRUCK2")))
			{
				bVar1 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
				if (!UNK_0x437347B10A200C4B(bLocal_65, 0))
				{
					if (UNK_0x6D18156F72BE0773(bVar1, bLocal_65))
					{
						iLocal_50 = 2;
						return true;
					}
				}
			}
		}
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[0]) || UNK_0x437347B10A200C4B(iLocal_52[0], 0))
		{
			if (UNK_0xB87D13D0C064E9D1(iLocal_52[0], UNK_0x16F2683693E537C9(), 1))
			{
				iLocal_50 = 5;
				return true;
			}
			if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), iLocal_52[0]) && UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) > 0.1f)
			{
				iLocal_50 = 5;
				return true;
			}
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (UNK_0xB87D13D0C064E9D1(iLocal_52[0], bVar0, 1))
				{
					iLocal_50 = 5;
					return true;
				}
			}
		}
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[1]) || UNK_0x437347B10A200C4B(iLocal_52[1], 0))
		{
			if (UNK_0xB87D13D0C064E9D1(iLocal_52[1], UNK_0x16F2683693E537C9(), 1))
			{
				iLocal_50 = 5;
				return true;
			}
			if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), iLocal_52[1]) && UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) > 0.1f)
			{
				iLocal_50 = 5;
				return true;
			}
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (UNK_0xB87D13D0C064E9D1(iLocal_52[1], bVar0, 1))
				{
					iLocal_50 = 5;
					return true;
				}
			}
		}
		if (!UNK_0x437347B10A200C4B(bLocal_72, 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bLocal_72, UNK_0x16F2683693E537C9(), 1))
			{
				iLocal_50 = 4;
				return true;
			}
			if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), bLocal_72))
			{
				iLocal_50 = 4;
				return true;
			}
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (UNK_0xB87D13D0C064E9D1(bLocal_72, bVar0, 1))
				{
					iLocal_50 = 4;
					return true;
				}
			}
		}
		else if (UNK_0xB87D13D0C064E9D1(bLocal_72, UNK_0x16F2683693E537C9(), 1))
		{
			iLocal_50 = 4;
			return true;
		}
	}
	return false;
}

void func_146()
{
	func_148(39, 1);
	func_148(40, 1);
	func_148(41, 1);
	func_148(42, 1);
	func_148(43, 1);
	func_148(44, 1);
	UNK_0x7D6CA5F52B3748BF(374.869f, -1358.043f, 25.667f, 452.41f, -1423.882f, 38.337f, 0, 1, 1, 1);
	UNK_0x7D6CA5F52B3748BF(vLocal_96 - Vector(20f, 20f, 20f), vLocal_96 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	UNK_0x745CE398A4B0A3C6(vLocal_73, 50f, 0);
	UNK_0x17E8C6920A1E386F(419f, -1387f, 28f, 427f, -1370f, 29f, false, 0);
	UNK_0x5D96D8530B3D0904(&uLocal_131, 5);
	bLocal_72 = UNK_0x36F2404464202779(26, bLocal_76, vLocal_73, false, 1, true);
	UNK_0x11AD11297DC58CC7(bLocal_72, true);
	UNK_0x71199B01895C6202(bLocal_76);
	UNK_0x25C5402CC10F76CD(bLocal_72, false);
	UNK_0x4E885A246A9D983A(bLocal_72, 185, true);
	UNK_0x4E885A246A9D983A(bLocal_72, 206, true);
	UNK_0xBAFED2F6486F771A(bLocal_72, 2, false);
	UNK_0x33CE5A9E32EA10B2(bLocal_72, 1);
	UNK_0x4F39CC3882DD074E(bLocal_72, "REHOMGirl");
	UNK_0x64F9F278AB9DCA2C(bLocal_72, false, 2, true, 0);
	UNK_0x64F9F278AB9DCA2C(bLocal_72, 2, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(bLocal_72, 3, true, 4, 0);
	UNK_0x64F9F278AB9DCA2C(bLocal_72, 4, false, 5, 0);
	UNK_0x64F9F278AB9DCA2C(bLocal_72, 6, true, false, 0);
	UNK_0xF63400DBE3303D26("OFFICERS", &bLocal_153);
	iLocal_126 = 0;
	while (iLocal_126 <= 1)
	{
		iLocal_52[iLocal_126] = UNK_0x36F2404464202779(6, bLocal_70, vLocal_55[iLocal_126 /*3*/], fLocal_62[iLocal_126], 1, true);
		UNK_0x11AD11297DC58CC7(iLocal_52[iLocal_126], true);
		UNK_0x71199B01895C6202(bLocal_70);
		UNK_0x6DF7BF67E86AAE86(iLocal_52[iLocal_126], bLocal_153);
		UNK_0x4E885A246A9D983A(iLocal_52[iLocal_126], 42, true);
		iLocal_126++;
	}
	UNK_0x262EF6C6306BEA6C(iLocal_52[0], joaat("WEAPON_PISTOL"), -1, true, true);
	UNK_0x262EF6C6306BEA6C(iLocal_52[1], joaat("WEAPON_PISTOL"), -1, false, true);
	UNK_0x0E2400AB9174FA81(5, bLocal_153, joaat("PLAYER"));
	UNK_0x0E2400AB9174FA81(1, bLocal_153, joaat("COP"));
	UNK_0x0E2400AB9174FA81(1, joaat("COP"), bLocal_153);
	bLocal_65 = UNK_0x122AAB0B1D6F55AD(bLocal_71, vLocal_66, bLocal_69, true, true, false);
	UNK_0xAB8E2DDC7AF955E0(bLocal_71, true);
	UNK_0xB9FD7450C0DAB575(bLocal_65, 1084227584 /* Float: 5f */);
	UNK_0xAA280AF45BCCCF21(bLocal_65, 1);
	func_147(&uLocal_154, 5, iLocal_52[0], "ACULTMember1", 0, 1);
	func_147(&uLocal_154, 4, iLocal_52[1], "ACULTMember2", 0, 1);
	func_147(&uLocal_154, 3, bLocal_72, "REHOMGirl", 0, 1);
	if (func_111() == 0)
	{
		func_147(&uLocal_154, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	}
	else if (func_111() == 1)
	{
		func_147(&uLocal_154, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	}
	iLocal_149 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
	UNK_0x6BE2EAE992FD7C26(iLocal_149, bLocal_65, 0);
	UNK_0x915804B434753CBD(bLocal_72, iLocal_149, "random@homelandsecurity", "idle_girl", 4f, -2f, 1, 0, 1148846080, 0);
	UNK_0x915804B434753CBD(iLocal_52[0], iLocal_149, "random@homelandsecurity", "idle_cop_gun", 4f, -2f, 1, 0, 1148846080, 0);
	UNK_0x915804B434753CBD(iLocal_52[1], iLocal_149, "random@homelandsecurity", "idle_cop_ground", 4f, -2f, 1, 0, 1148846080, 0);
	UNK_0xC90224D9E95E5E3A(iLocal_149, true);
}

void func_147(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_148(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_152(iParam0, 2, 1))
		{
			func_151(iParam0, 2, 1);
		}
	}
	else if (func_152(iParam0, 2, 1))
	{
		func_149(iParam0, 2, 1);
	}
}

void func_149(int iParam0, bool bParam1, bool bParam2)
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
		if (func_11() == 0)
		{
			bVar0 = func_46(func_150(iParam0), -1, 0);
			UNK_0x0674E58A79778E99(&bVar0, bParam1);
			func_42(func_150(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

int func_150(int iParam0)
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

void func_151(int iParam0, bool bParam1, bool bParam2)
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
		if (func_11() == 0)
		{
			bVar0 = func_46(func_150(iParam0), -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, bParam1);
			func_42(func_150(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

bool func_152(int iParam0, bool bParam1, bool bParam2)
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
		if (func_11() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_46(func_150(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

void func_153()
{
	UNK_0x523BCC9DC80CD82F(bLocal_76);
	UNK_0x523BCC9DC80CD82F(bLocal_70);
	UNK_0x523BCC9DC80CD82F(bLocal_71);
	UNK_0x3F423BF5B8125A50("random@homelandsecurity");
	if (((UNK_0xB87F6CF6E5628C67(bLocal_76) && UNK_0xB87F6CF6E5628C67(bLocal_70)) && UNK_0xB87F6CF6E5628C67(bLocal_71)) && UNK_0xB4AE0788C1587752("random@homelandsecurity"))
	{
		bLocal_104 = true;
	}
	else
	{
		UNK_0x523BCC9DC80CD82F(bLocal_76);
		UNK_0x523BCC9DC80CD82F(bLocal_70);
		UNK_0x523BCC9DC80CD82F(bLocal_71);
		UNK_0x3F423BF5B8125A50("random@homelandsecurity");
	}
}

void func_154()
{
	bLocal_76 = joaat("A_F_Y_TOURIST_01");
	bLocal_70 = joaat("A_M_O_ACULT_01");
	bLocal_71 = joaat("FUGITIVE");
	vLocal_73 = { -174.0522f, 1905.611f, 197.0466f };
	vLocal_55[0 /*3*/] = { -174.3279f, 1903.972f, 197.0502f };
	fLocal_62[0] = 147.8596f;
	vLocal_55[1 /*3*/] = { -174.3233f, 1906.384f, 197.0145f };
	fLocal_62[1] = 164.5974f;
	vLocal_66 = { -172.4207f, 1905.183f, 197.1163f };
	bLocal_69 = 187.3899f;
	vLocal_93 = { 469.8768f, 2617.532f, 42.2566f };
	vLocal_96 = { 472.2393f, 2611.611f, 42.2676f };
	vLocal_99 = { -1034.6f, 4918.6f, 205.9f };
	bLocal_103 = true;
}

bool func_155()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_44) < (75f * 75f))
		{
			return true;
		}
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_166())
		{
			return false;
		}
	}
	if (func_162())
	{
		return true;
	}
	if (func_156(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_156(float fParam0, bool bParam1)
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
		if (func_24(func_111()))
		{
			iVar36 = func_21();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 2) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 3))
				{
					func_157(iVar32, &Var0);
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

void func_157(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_158(uParam1, "Abigail1", func_160(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
			break;
		case 1:
			func_158(uParam1, "Abigail2", func_160(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
			break;
		case 2:
			func_158(uParam1, "Barry1", func_160(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
			break;
		case 3:
			func_158(uParam1, "Barry2", func_160(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
			break;
		case 4:
			func_158(uParam1, "Barry3", func_160(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		case 5:
			func_158(uParam1, "Barry3A", func_160(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 6:
			func_158(uParam1, "Barry3C", func_160(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 7:
			func_158(uParam1, "Barry4", func_160(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_159(iParam0), 0, 0);
			break;
		case 8:
			func_158(uParam1, "Dreyfuss1", func_160(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		case 9:
			func_158(uParam1, "Epsilon1", func_160(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_159(iParam0), 0, 0);
			break;
		case 10:
			func_158(uParam1, "Epsilon2", func_160(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
			break;
		case 11:
			func_158(uParam1, "Epsilon3", func_160(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_159(iParam0), 0, 0);
			break;
		case 12:
			func_158(uParam1, "Epsilon4", func_160(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_159(iParam0), 0, 0);
			break;
		case 13:
			func_158(uParam1, "Epsilon5", func_160(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
			break;
		case 14:
			func_158(uParam1, "Epsilon6", func_160(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 15:
			func_158(uParam1, "Epsilon7", func_160(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_159(iParam0), 0, 0);
			break;
		case 16:
			func_158(uParam1, "Epsilon8", func_160(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
			break;
		case 17:
			func_158(uParam1, "Extreme1", func_160(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 18:
			func_158(uParam1, "Extreme2", func_160(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 19:
			func_158(uParam1, "Extreme3", func_160(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 20:
			func_158(uParam1, "Extreme4", func_160(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		case 21:
			func_158(uParam1, "Fanatic1", func_160(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_159(iParam0), 1, 0);
			break;
		case 22:
			func_158(uParam1, "Fanatic2", func_160(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_159(iParam0), 1, 0);
			break;
		case 23:
			func_158(uParam1, "Fanatic3", func_160(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_159(iParam0), 0, 1);
			break;
		case 24:
			func_158(uParam1, "Hao1", func_160(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_159(iParam0), 0, 1);
			break;
		case 25:
			func_158(uParam1, "Hunting1", func_160(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 26:
			func_158(uParam1, "Hunting2", func_160(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 27:
			func_158(uParam1, "Josh1", func_160(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_159(iParam0), 1, 0);
			break;
		case 28:
			func_158(uParam1, "Josh2", func_160(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
			break;
		case 29:
			func_158(uParam1, "Josh3", func_160(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
			break;
		case 30:
			func_158(uParam1, "Josh4", func_160(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_159(iParam0), 1, 0);
			break;
		case 31:
			func_158(uParam1, "Maude1", func_160(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 32:
			func_158(uParam1, "Minute1", func_160(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 33:
			func_158(uParam1, "Minute2", func_160(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 34:
			func_158(uParam1, "Minute3", func_160(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 35:
			func_158(uParam1, "MrsPhilips1", func_160(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_159(iParam0), 0, 0);
			break;
		case 36:
			func_158(uParam1, "MrsPhilips2", func_160(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_159(iParam0), 0, 0);
			break;
		case 37:
			func_158(uParam1, "Nigel1", func_160(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_159(iParam0), 1, 0);
			break;
		case 38:
			func_158(uParam1, "Nigel1A", func_160(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
			break;
		case 39:
			func_158(uParam1, "Nigel1B", func_160(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_159(iParam0), 1, 1);
			break;
		case 40:
			func_158(uParam1, "Nigel1C", func_160(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_159(iParam0), 1, 1);
			break;
		case 41:
			func_158(uParam1, "Nigel1D", func_160(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_159(iParam0), 1, 1);
			break;
		case 42:
			func_158(uParam1, "Nigel2", func_160(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
			break;
		case 43:
			func_158(uParam1, "Nigel3", func_160(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
			break;
		case 44:
			func_158(uParam1, "Omega1", func_160(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		case 45:
			func_158(uParam1, "Omega2", func_160(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		case 46:
			func_158(uParam1, "Paparazzo1", func_160(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 47:
			func_158(uParam1, "Paparazzo2", func_160(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 48:
			func_158(uParam1, "Paparazzo3", func_160(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		case 49:
			func_158(uParam1, "Paparazzo3A", func_160(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 50:
			func_158(uParam1, "Paparazzo3B", func_160(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 51:
			func_158(uParam1, "Paparazzo4", func_160(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
			break;
		case 52:
			func_158(uParam1, "Rampage1", func_160(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_159(iParam0), 0, 0);
			break;
		case 54:
			func_158(uParam1, "Rampage3", func_160(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_159(iParam0), 1, 0);
			break;
		case 55:
			func_158(uParam1, "Rampage4", func_160(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_159(iParam0), 1, 0);
			break;
		case 56:
			func_158(uParam1, "Rampage5", func_160(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_159(iParam0), 0, 0);
			break;
		case 53:
			func_158(uParam1, "Rampage2", func_160(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_159(iParam0), 1, 0);
			break;
		case 57:
			func_158(uParam1, "TheLastOne", func_160(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 58:
			func_158(uParam1, "Tonya1", func_160(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 59:
			func_158(uParam1, "Tonya2", func_160(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 60:
			func_158(uParam1, "Tonya3", func_160(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 61:
			func_158(uParam1, "Tonya4", func_160(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		case 62:
			func_158(uParam1, "Tonya5", func_160(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_158(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
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

int func_159(int iParam0)
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

struct<2> func_160(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_161(iParam0) };
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

struct<2> func_161(int iParam0)
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

bool func_162()
{
	if (func_165() && !func_166())
	{
		return true;
	}
	if (func_164() && func_163())
	{
		return true;
	}
	return false;
}

bool func_163()
{
	return Global_111356 > 0;
}

bool func_164()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_165()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_166()
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

bool func_167()
{
	if (!func_141(5))
	{
		return true;
	}
	if (func_162())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_166())
		{
			return false;
		}
	}
	if (func_156(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_168()
{
	if ((Global_111627 == func_31() && UNK_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return true;
	}
	return false;
}

void func_169(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_171(iParam0);
	UNK_0x24D1A8A556F3252A(0);
	UNK_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_170();
}

void func_170()
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

void func_171(int iParam0)
{
	Global_111627 = iParam0;
}

bool func_172(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_31();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_213())
		{
			return false;
		}
	}
	vLocal_44 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_166())
			{
				return false;
			}
		}
		if (!Global_111638.f_9080)
		{
			return false;
		}
		if (func_7(0))
		{
			return false;
		}
		if (func_162())
		{
			return false;
		}
		if (func_212())
		{
			return false;
		}
		if (Global_111627 != -1)
		{
			return false;
		}
		if (func_24(func_111()))
		{
			if (func_156(100f, 1) != -1)
			{
				return false;
			}
		}
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !bParam6)
		{
			if ((vVar1.z - vLocal_44.z) > 50f)
			{
				return false;
			}
		}
		if (!func_211(iParam3))
		{
			return false;
		}
		if (func_24(func_111()))
		{
			if (func_210(func_111()) == 4 || func_210(func_111()) == 5)
			{
				return false;
			}
		}
		if (func_24(func_111()))
		{
			if (!func_209(iParam3, bParam4, 145))
			{
				return false;
			}
		}
		if (!func_208(Global_111638.f_24990.f_43[iParam3]))
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
		if (func_207())
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
		if (!func_198(4))
		{
			return false;
		}
		if (!func_141(5))
		{
			return false;
		}
		if (func_197(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_197(0, 0))
		{
			return false;
		}
		if (Global_30914)
		{
			return false;
		}
		if (func_211(30) && !func_197(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_24(func_111()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4 /*3*/] };
				bVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_196(bVar8))
				{
					if (func_174(iVar4))
					{
						if (!func_173(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_111() != iVar4)
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

bool func_173(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_174(int iParam0)
{
	bool bVar0;

	bVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_175(bVar0);
}

int func_175(bool bParam0)
{
	return func_176(bParam0, 1);
}

int func_176(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_196(bParam0))
	{
		return 0;
	}
	func_177(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_177(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_178(func_189(), bParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_178(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_188(bParam0, bParam1))
	{
		iVar0 = func_187(bParam1);
		iVar1 = func_185(bParam0);
		iVar2 = (func_185(bParam0) - func_185(bParam1));
		iVar3 = (func_187(bParam0) - func_187(bParam1));
		iVar4 = (func_184(bParam0) - func_184(bParam1));
		iVar5 = (func_183(bParam0) - func_183(bParam1));
		iVar6 = (func_182(bParam0) - func_182(bParam1));
		iVar7 = (func_181(bParam0) - func_181(bParam1));
	}
	else
	{
		iVar0 = func_187(bParam0);
		iVar1 = func_185(bParam1);
		iVar2 = (func_185(bParam1) - func_185(bParam0));
		iVar3 = (func_187(bParam1) - func_187(bParam0));
		iVar4 = (func_184(bParam1) - func_184(bParam0));
		iVar5 = (func_183(bParam1) - func_183(bParam0));
		iVar6 = (func_182(bParam1) - func_182(bParam0));
		iVar7 = (func_181(bParam1) - func_181(bParam0));
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
		iVar4 = (iVar4 + func_180(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_179(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_179(float fParam0, float fParam1, float fParam2)
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

int func_180(bool bParam0, int iParam1)
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

int func_181(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_182(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_183(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_184(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

int func_185(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_186(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_186(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_187(bool bParam0)
{
	return (bParam0 && 15);
}

bool func_188(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_196(bParam1) || !func_196(bParam0))
	{
		return true;
	}
	bVar0 = func_185(bParam0);
	bVar1 = func_185(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_187(bParam0);
	bVar1 = func_187(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_184(bParam0);
	bVar1 = func_184(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_183(bParam0);
	bVar1 = func_183(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_182(bParam0);
	bVar1 = func_182(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_181(bParam0);
	bVar1 = func_181(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

bool func_189()
{
	var uVar0;

	func_195(&uVar0, UNK_0x4460E481B9E33ADA());
	func_194(&uVar0, UNK_0x8D199E381D262EEF());
	func_193(&uVar0, UNK_0xD8A54335F18763BA());
	func_192(&uVar0, UNK_0x972A296334C9D57B());
	func_191(&uVar0, UNK_0x118229AD063C3C1D());
	func_190(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_190(bool bParam0, int iParam1)
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

void func_191(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_192(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_187(*bParam0);
	iVar1 = func_185(*bParam0);
	if (iParam1 < 1 || iParam1 > func_180(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_193(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_194(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_195(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_196(bool bParam0)
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
	iVar0 = func_181(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_182(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_183(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_185(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_187(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_184(bParam0);
	if (iVar5 < 1 || iVar5 > func_180(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_197(int iParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], bParam1))
	{
		return true;
	}
	return false;
}

bool func_198(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_111();
				if (!func_24(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_206()) || Global_110685) || Global_30770) || func_205()) || func_86(8, -1)) || func_204()) || func_203()) || func_202()) || func_201()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_206()) || Global_30770) || func_205()) || func_86(8, -1)) || func_202()) || func_204()) || func_203()) || func_201()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_206()) || Global_110685) || Global_30770) || func_205()) || func_86(8, -1)) || func_202()) || func_204()) || func_203()) || func_201()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_206()) || Global_110685) || Global_30770) || func_205()) || func_86(8, -1)) || func_204()) || func_203()) || func_201()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_206() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_86(8, -1)) || func_201()) || func_200()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_86(8, -1) || func_204()) || func_203()) || func_200()) || func_199())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_206()) || Global_30770) || func_205()) || func_86(8, -1)) || func_203()) || func_202()) || func_201()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_206()) || func_203()) || Global_110685) || Global_30770) || func_205()) || Global_42596) || func_86(8, -1)) || func_202()) || func_200()) || func_201()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_206()) || Global_110685) || Global_30770) || func_205()) || func_86(8, -1)) || func_202()) || func_200()) || func_204()) || func_203()) || func_201())
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

bool func_199()
{
	return Global_98783.f_1;
}

bool func_200()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_201()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_202()
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

bool func_203()
{
	return Global_98796.f_346 > 0;
}

bool func_204()
{
	return Global_98796.f_345 > 0;
}

bool func_205()
{
	return Global_1312877;
}

bool func_206()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_207()
{
	func_84();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

bool func_208(bool bParam0)
{
	return func_188(func_189(), bParam0);
}

bool func_209(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_111();
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

int func_210(int iParam0)
{
	if (!func_24(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_211(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_213())
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

bool func_212()
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

bool func_213()
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

void func_214()
{
	int iVar0;

	if (bLocal_102)
	{
		func_228(0);
		if (Global_31009)
		{
			UNK_0xC92DB9682A650680("AC_STOP");
		}
		func_227();
		UNK_0xB547E3FFEB27073E();
		UNK_0x9FE27D475353EFE9(420.5f, -1387f, 28f, 427f, -1379f, 29f, 0);
		UNK_0x9EBC57EECAF8C953(UNK_0xD803B885F5E47A62());
		UNK_0x51B096AAC60548C1(1f);
		func_106();
		if (bLocal_103)
		{
			UNK_0x71199B01895C6202(bLocal_76);
			UNK_0x71199B01895C6202(bLocal_70);
			UNK_0x71199B01895C6202(bLocal_71);
			UNK_0xAB8E2DDC7AF955E0(bLocal_71, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_52)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_52[iVar0]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_52[iVar0]))
				{
					if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						UNK_0x731C6942D48648D6(iLocal_52[iVar0], func_226(UNK_0xD803B885F5E47A62()), -1, 0, 0);
						UNK_0xFADC0A217229F6B5(iLocal_52[iVar0], true);
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
						{
							UNK_0x8BE3D040D15AEA1D(bLocal_72, -1);
							UNK_0xFADC0A217229F6B5(bLocal_72, true);
						}
					}
					UNK_0x11AD11297DC58CC7(iLocal_52[iVar0], false);
				}
				UNK_0x6DAD7906B73F064D(&(iLocal_52[iVar0]));
			}
			iVar0++;
		}
		if (UNK_0xC844350D5D58C99A(bLocal_72))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_72))
			{
				UNK_0x4E885A246A9D983A(bLocal_72, 317, true);
				if (UNK_0x16102BEDC7435774(bLocal_72))
				{
					UNK_0x0A94A109271BE75A(bLocal_72);
				}
				if (!UNK_0x405E212DDE472467(bLocal_72, 0))
				{
					UNK_0x61F0DE0226FF7252(bLocal_72);
				}
				UNK_0x11AD11297DC58CC7(bLocal_72, false);
			}
			UNK_0x6DAD7906B73F064D(&bLocal_72);
		}
		if (UNK_0xC844350D5D58C99A(bLocal_65))
		{
			UNK_0x046C362CF15F1935(&bLocal_65);
		}
		UNK_0x15EA7F4313456B1D(5, true);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			}
		}
	}
	func_215(-1);
	UNK_0x10FAF14A60A0DBE1();
}

void func_215(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_168())
	{
		func_219(iParam0);
		UNK_0x974531784BE14213(0, 0);
		Global_111629 = UNK_0x1C0640BA9A7327B3();
		func_218(30000);
		StringCopy(&cVar0, func_217(Global_111627, 1), 64);
		if (func_30(Global_111627) > 0)
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
	func_216(&Global_30827);
	Global_111628 = 0;
	func_171(-1);
}

void func_216(var uParam0)
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

char* func_217(int iParam0, bool bParam1)
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

void func_218(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_219(int iParam0)
{
	func_220(iParam0, 0, func_225(iParam0));
}

void func_220(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<16> Var1;

	bVar0 = func_189();
	func_223(&bVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_222(iParam0, &bVar0);
	Var1 = { func_221(&bVar0) };
}

struct<16> func_221(bool bParam0)
{
	struct<16> Var0;
	bool bVar16;

	StringCopy(&Var0, "", 64);
	bVar16 = func_183(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_182(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_181(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "  ", 64);
	bVar16 = func_184(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "/", 64);
	bVar16 = func_187(*bParam0);
	if (bVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_185(*bParam0), 64);
	return Var0;
}

void func_222(int iParam0, bool bParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *bParam1;
}

void func_223(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_185(*bParam0);
	bVar1 = func_187(*bParam0);
	iVar2 = func_184(*bParam0);
	iVar3 = func_183(*bParam0);
	iVar4 = func_182(*bParam0);
	iVar5 = func_181(*bParam0);
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
	iVar6 = func_180(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_180(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_224(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_224(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_195(bParam0, iParam1);
	func_194(bParam0, iParam2);
	func_193(bParam0, iParam3);
	func_191(bParam0, bParam5);
	func_192(bParam0, iParam4);
	func_190(bParam0, iParam6);
}

int func_225(int iParam0)
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

Vector3 func_226(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

void func_227()
{
	Global_31005 = 0;
	Global_31006 = 0;
	Global_31008 = 0;
	Global_31009 = 0;
	Global_31010 = 0;
}

void func_228(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_148(iVar0, bParam0);
		iVar0++;
	}
}

