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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 1000;
	var uLocal_30 = 1000;
	var uLocal_31 = 0;
	char* sLocal_32 = NULL;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 6;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	vector3 vLocal_83 = { 0f, 0f, 0f };
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
	int iLocal_98 = 0;
	vector3 vLocal_99[24] = "";
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	float fLocal_111 = 0f;
	bool bLocal_112 = false;
	bool bLocal_113 = false;
	bool bLocal_114 = false;
	bool bLocal_115 = false;
	bool bLocal_116 = false;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 16;
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
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6[24];
	vector3 vVar12[24];

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
	sLocal_32 = "NULL";
	fLocal_33 = 0f;
	fLocal_37 = -0.0375f;
	fLocal_38 = 0.17f;
	iLocal_40 = 3;
	fLocal_43 = 80f;
	fLocal_44 = 140f;
	fLocal_45 = 180f;
	iLocal_51 = 1;
	iLocal_52 = 65;
	iLocal_53 = 49;
	iLocal_54 = 64;
	iLocal_77 = UNK_0xAD1355DD1E5D2D9B();
	iLocal_78 = UNK_0x817B3657F78A517A();
	vLocal_83 = { 500f, 500f, 500f };
	iLocal_108 = -1;
	fLocal_111 = 0f;
	iLocal_117 = 1;
	bVar0 = false;
	iVar1 = 0;
	func_90(&(Global_111638.f_19092), 4);
	func_90(&(Global_111638.f_19092), 256);
	if (UNK_0x2EBF608FFE6CA406(82))
	{
		func_89();
	}
	func_88(16);
	while (true)
	{
		bVar0 = !func_87(0, 12);
		iVar2 = 0;
		if (bVar0 && iVar1 != 1)
		{
			iVar1 = 1;
		}
		if (iVar1 == 2)
		{
			if (func_86(9))
			{
				func_85(&uLocal_118);
				iVar1 = 1;
			}
		}
		switch (iVar1)
		{
			case 0:
				if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
				{
					iVar3 = func_84(UNK_0x16F2683693E537C9());
					if ((iVar3 == 0 || iVar3 == 2) || iVar3 == 1)
					{
						func_83();
						if (!func_82(Global_111638.f_19092, 64))
						{
							func_80(&(Global_111638.f_19092), 64);
						}
						func_79(&uLocal_124);
						iVar1 = 1;
						func_77(&uLocal_118);
					}
				}
				iVar2 = 100;
				break;
			case 1:
				if (func_76(1))
				{
					iLocal_109 = UNK_0x1C0640BA9A7327B3();
				}
				if (!func_75() && !Global_95672)
				{
					if (iVar1 != 2)
					{
						if ((!UNK_0xC8BC75555A67090D() && !bVar0) && !func_74(5))
						{
							func_71();
							if (func_70())
							{
								if (!bLocal_113)
								{
									if (func_68() == 2)
									{
										if (!func_82(Global_111638.f_19092, 1))
										{
											switch (func_67("TC_H_TOODAMAGED"))
											{
												case 2:
													func_65("TC_H_TOODAMAGED", 1, 0, 1000, 10000, 7, 0, 0, 0);
													break;
												case 1:
													func_80(&(Global_111638.f_19092), 1);
													break;
											}
										}
									}
									else
									{
										func_90(&(Global_111638.f_19092), 1);
									}
									bLocal_113 = true;
								}
								if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) != 0)
								{
									iLocal_106 = 0;
								}
								else if (bLocal_114)
								{
									if (!func_82(Global_111638.f_19092, 16384))
									{
										switch (func_67("TC_ANOTHERJOB"))
										{
											case 2:
												func_65("TC_ANOTHERJOB", 1, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											case 1:
												func_80(&(Global_111638.f_19092), 16384);
												break;
										}
									}
								}
								else if (!func_82(Global_111638.f_19092, 16))
								{
									if (!bLocal_116)
									{
										switch (func_67("TC_HOWTOSTART"))
										{
											case 2:
												func_65("TC_HOWTOSTART", 1, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											case 1:
												iLocal_110 = UNK_0x1C0640BA9A7327B3();
												bLocal_116 = true;
												if (func_64("TC_HOWTOSTART"))
												{
													Global_111638.f_19092.f_22[15]++;
												}
												if (Global_111638.f_19092.f_22[15] >= 5)
												{
													func_80(&(Global_111638.f_19092), 16);
												}
												break;
										}
									}
								}
								if (UNK_0xE4EDC4B0E92C078B(iLocal_105))
								{
									UNK_0x142CC44DB769B57E(&iLocal_105);
								}
								switch (iLocal_106)
								{
									case 0:
										if (func_68() == 0)
										{
											if (!func_63(&uLocal_118))
											{
												func_62(&uLocal_118);
											}
											if (func_63(&uLocal_121))
											{
												func_85(&uLocal_121);
											}
											if (func_59(&uLocal_118) > 20f)
											{
												if (!UNK_0xFEBC1E4EC9E001F0() && func_58())
												{
													iLocal_107 = 9;
													StringCopy(&cLocal_99, "Taxi_Procedural", 24);
													func_57(&uLocal_124, 8, 0, "TaxiDispatch", 0, 1);
													func_56(&uLocal_124, "OJTXAUD", "OJTX_PRO_OFF", 2, 0, 0, 0);
													func_77(&uLocal_118);
													iLocal_106 = 1;
												}
												else if (!func_58())
												{
													if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
													{
													}
												}
											}
										}
										break;
									case 1:
										if (!func_63(&uLocal_118))
										{
											func_62(&uLocal_118);
										}
										if (func_59(&uLocal_118) >= 6f)
										{
											switch (func_67("TC_JOBOFFERED"))
											{
												case 2:
													func_65("TC_JOBOFFERED", 1, 0, 1000, 10000, 7, 0, 0, 0);
													break;
												case 1:
													bLocal_112 = true;
													func_77(&uLocal_118);
													iLocal_106 = 2;
													break;
											}
											if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
											{
											}
										}
										break;
									case 2:
										if (!func_63(&uLocal_118))
										{
											func_62(&uLocal_118);
										}
										if (func_59(&uLocal_118) > 15f)
										{
											if (!func_82(Global_111638.f_19092, 32))
											{
												func_55("TC_MISSEDJOB", -1);
												func_80(&(Global_111638.f_19092), 32);
											}
											fLocal_111 = (UNK_0x79833B02DBD2A244(10f, 40f) + func_59(&uLocal_118));
											iLocal_106 = 3;
										}
										else if (bLocal_112)
										{
											if (func_59(&uLocal_118) > 6f)
											{
												bLocal_112 = false;
												UNK_0xA37A90C62806D848(1);
											}
										}
										break;
									case 3:
										if (!func_63(&uLocal_118))
										{
											func_62(&uLocal_118);
										}
										if (func_59(&uLocal_118) > fLocal_111)
										{
											func_85(&uLocal_118);
											iLocal_106 = 0;
										}
										break;
								}
								if (((UNK_0x06F8112AA79C53D9(0, 86) && !UNK_0x377BE9A1BF38C7CE(UNK_0x16F2683693E537C9())) && !Global_30919) && (UNK_0x1C0640BA9A7327B3() - iLocal_109) > 3000)
								{
									iVar4 = func_68();
									if (iVar4 == 0)
									{
										if (iLocal_106 == 0 || iLocal_106 == 3)
										{
											func_79(&uLocal_124);
											iLocal_107 = 9;
											func_33(iLocal_107, &cLocal_99, &uLocal_124, 0);
											bLocal_115 = true;
											iVar1 = 4;
										}
										else
										{
											UNK_0x790015DC92C918E2();
											UNK_0xA37A90C62806D848(1);
											if (!func_82(Global_111638.f_19092, 128))
											{
												func_80(&(Global_111638.f_19092), 128);
											}
											iVar1 = 4;
										}
										UNK_0x92DCE5C81176D2B4(&cLocal_99);
										func_85(&uLocal_118);
										iVar2 = 0;
									}
									else if (iVar4 == 2)
									{
										if (!UNK_0xFEBC1E4EC9E001F0())
										{
											func_55("TXC_HEALTH_GONE", -1);
										}
									}
									else if (iVar4 == 3)
									{
										if (!UNK_0xFEBC1E4EC9E001F0())
										{
											if (!func_64("TXC_WANTED_WARN"))
											{
												if (!func_82(Global_111638.f_19092, 32768))
												{
													func_55("TXC_WANTED_WARN", -1);
													func_80(&(Global_111638.f_19092), 32768);
												}
											}
										}
									}
								}
							}
							else
							{
								if (!func_63(&uLocal_121))
								{
									func_62(&uLocal_121);
								}
								else
								{
									if (func_59(&uLocal_121) < 10f)
									{
										if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
										{
										}
									}
									if (func_59(&uLocal_121) > 10f && iLocal_106 != 0)
									{
										iLocal_106 = 0;
									}
								}
								if (func_32("TC_HOWTOSTART"))
								{
									func_28("TC_HOWTOSTART", 1);
								}
								if (func_32("TC_JOBOFFERED"))
								{
									func_28("TC_JOBOFFERED", 1);
								}
								if (func_32("TC_H_TOODAMAGED"))
								{
									func_28("TC_H_TOODAMAGED", 1);
								}
								if (func_32("TC_ANOTHERJOB"))
								{
									func_28("TC_ANOTHERJOB", 1);
								}
								if (((UNK_0x1C0640BA9A7327B3() - iLocal_110) > 60000 && !func_64("TC_HOWTOSTART")) && bLocal_116)
								{
									bLocal_116 = false;
								}
								if (bLocal_114)
								{
									bLocal_114 = false;
								}
								bLocal_113 = false;
								func_85(&uLocal_118);
							}
						}
					}
				}
				else if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) != 0)
				{
					iLocal_106 = 0;
				}
				break;
			case 4:
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					UNK_0x7A6662707CC5CFB0(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 1);
				}
				if (UNK_0x1FBF08B001C4788A(&cLocal_99))
				{
					iVar5 = func_24(&iLocal_108, 2, 9, 0, 0);
					if (iVar5 == 1)
					{
						Global_110693 = 1;
						if (bLocal_115)
						{
							iVar1 = 5;
						}
						else
						{
							iVar1 = 7;
						}
						iVar2 = 0;
					}
					else if (iVar5 == 0)
					{
						iLocal_106 = 0;
						iVar1 = 11;
					}
					else
					{
						func_23("PROCESS_TAXI_DBG_SKIP = Scene is loading.", &iLocal_117, 1000);
					}
				}
				break;
			case 5:
				StringCopy(&cVar6, "OJTX_PLRDE1", 24);
				func_22(&cVar6, 1);
				func_56(&uLocal_124, "OJTXAUD", &cVar6, 8, 0, 0, 0);
				iVar1 = 6;
				break;
			case 6:
				if (!func_21())
				{
					func_56(&uLocal_124, "OJTXAUD", "OJTX_DIS_JOB", 8, 0, 0, 0);
					iVar1 = 7;
				}
				break;
			case 7:
				if (!func_21())
				{
					StringCopy(&cVar12, "OJTX_ACCEPT", 24);
					func_22(&cVar12, 1);
					func_79(&uLocal_124);
					func_56(&uLocal_124, "OJTXAUD", &cVar12, 8, 0, 0, 0);
					iVar1 = 8;
				}
				break;
			case 8:
				if (func_70())
				{
					if (!func_21())
					{
						bLocal_114 = false;
						if (func_32("TC_HOWTOSTART"))
						{
							func_28("TC_HOWTOSTART", 1);
						}
						iLocal_98 = SYSTEM::START_NEW_SCRIPT(&cLocal_99, 35000);
						UNK_0x5E8C29AE121DF1C7(&cLocal_99);
						if (!func_82(Global_111638.f_19092, 4))
						{
							func_80(&(Global_111638.f_19092), 4);
							UNK_0xAB8E2DDC7AF955E0(func_20(), true);
						}
						func_80(&(Global_111638.f_19092), 256);
						StringCopy(&cLocal_99, "", 24);
						bLocal_115 = false;
						iVar1 = 10;
						iLocal_106 = 0;
					}
				}
				else
				{
					if (func_21())
					{
						func_18();
					}
					bLocal_114 = false;
					bLocal_115 = false;
					UNK_0x5E8C29AE121DF1C7(&cLocal_99);
					func_80(&(Global_111638.f_19092), 256);
					StringCopy(&cLocal_99, "", 24);
					iLocal_106 = 0;
					iVar1 = 10;
				}
				break;
			case 10:
				if (!UNK_0x1727A44C562FBED2(iLocal_98))
				{
					func_90(&(Global_111638.f_19092), 2048);
					if (func_82(Global_111638.f_19092, 4))
					{
						func_90(&(Global_111638.f_19092), 4);
						UNK_0xAB8E2DDC7AF955E0(func_20(), false);
					}
					Global_110693 = 0;
					iLocal_107 = -1;
					iVar1 = 11;
					iVar2 = 0;
				}
				else if (func_82(Global_111638.f_19092, 1024))
				{
					func_90(&(Global_111638.f_19092), 1024);
					func_11(func_17(iLocal_107), 0, 0);
					bLocal_114 = true;
					func_9(iLocal_107, bLocal_114);
					func_8(1, 0);
					func_5();
				}
				break;
			case 11:
				if (func_82(Global_111638.f_19092, 256))
				{
					func_90(&(Global_111638.f_19092), 256);
					func_4(&iLocal_108);
				}
				iLocal_108 = -1;
				if (!func_3())
				{
					func_8(0, 0);
					func_2();
					StringCopy(&cLocal_99, "", 24);
					if (iLocal_98 != 0)
					{
						if (UNK_0x1727A44C562FBED2(iLocal_98))
						{
							UNK_0xB3147F6556CFCCAC(iLocal_98);
							iLocal_98 = 0;
						}
					}
					func_85(&uLocal_118);
					func_1(0);
					iLocal_106 = 0;
					iVar1 = 1;
					iVar2 = 0;
				}
				break;
			case 12:
				func_89();
				break;
			default:
				func_89();
				break;
		}
		SYSTEM::WAIT(iVar2);
	}
}

void func_1(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_2()
{
	vector3 vVar0[24];

	if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
	{
		UNK_0x3CFFF3C8EACD8DC1(StackVal, 0, 0, 0);
	}
	else if (UNK_0xBA301E03A078FA59() || UNK_0x33A494591F2C1975())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		UNK_0x8DECFDD6715449E4(0, &cVar0);
	}
}

bool func_3()
{
	return Global_98783.f_1;
}

void func_4(int iParam0)
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

void func_8(int iParam0, int iParam1)
{
	Global_98783.f_7 = iParam0;
	Global_98783.f_8 = iParam1;
}

void func_9(int iParam0, bool bParam1)
{
	func_10();
	if (bParam1)
	{
		Global_111638.f_19092.f_1[iParam0 /*2*/] = 1;
		Global_111638.f_19092.f_1[iParam0 /*2*/].f_1 = 0;
	}
	else
	{
		Global_111638.f_19092.f_1[iParam0 /*2*/] = 0;
		Global_111638.f_19092.f_1[iParam0 /*2*/].f_1 = 1;
	}
}

void func_10()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_111638.f_19092.f_1[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
}

void func_11(int iParam0, int iParam1, int iParam2)
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
		func_15((891 + iParam0), 1, -1, 1);
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
		func_12();
	}
}

void func_12()
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
		func_14(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_13() == 2 == 0 && !UNK_0x8CD06866876216F2())
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

int func_13()
{
	return Global_30768;
}

int func_14(int iParam0, bool bParam1)
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

int func_15(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_16();
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

int func_16()
{
	return Global_1312745;
}

int func_17(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		case 1:
			iVar0 = 200;
			break;
		case 2:
			iVar0 = 201;
			break;
		case 3:
			iVar0 = 202;
			break;
		case 4:
			iVar0 = 203;
			break;
		case 5:
			iVar0 = 204;
			break;
		case 6:
			iVar0 = 205;
			break;
		case 7:
			iVar0 = 206;
			break;
		case 8:
			iVar0 = 207;
			break;
		case 9:
			break;
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

void func_18()
{
	Global_19671 = 0;
	func_19();
}

void func_19()
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

int func_20()
{
	return joaat("TAXI");
}

bool func_21()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_22(char* sParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_84(UNK_0x16F2683693E537C9());
	if (iVar0 == 0)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "M", 24);
		}
		else
		{
			StringConCat(sParam0, "_2", 24);
		}
	}
	else if (iVar0 == 2)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "T", 24);
		}
		else
		{
			StringConCat(sParam0, "_3", 24);
		}
	}
	else if (iVar0 == 1)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "F", 24);
		}
		else
		{
			StringConCat(sParam0, "_4", 24);
		}
	}
}

void func_23(char* sParam0, int iParam1, int iParam2)
{
	if (UNK_0x1C0640BA9A7327B3() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = UNK_0x1C0640BA9A7327B3();
}

int func_24(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_86(0))
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		UNK_0x62DE699599F0417E(UNK_0xA30EC016B12C03E4(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			UNK_0x4C7B0415764B64BA(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *iParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_26(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		Global_41398[Global_41392 /*4*/] = Global_41395;
		Global_41398[Global_41392 /*4*/].f_1 = iParam1;
		Global_41398[Global_41392 /*4*/].f_2 = iParam2;
		Global_41398[Global_41392 /*4*/].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_25(iParam0, iParam4);
		}
	}
	return 2;
}

void func_25(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_41392 == 0)
	{
		return;
	}
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0 /*4*/] == *iParam0)
		{
			Global_41398[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*iParam0 = -1;
}

bool func_26(int iParam0)
{
	return func_27(iParam0, Global_41431);
}

int func_27(int iParam0, int iParam1)
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

void func_28(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (Global_110278 && iParam1)
	{
		if (func_64(bParam0) && !UNK_0x79BBCD5833294FD5())
		{
			UNK_0xA37A90C62806D848(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (UNK_0x7F8A39872A07D2CE(bParam0, &(Global_111638.f_20405[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_111638.f_20405.f_145 - 2))
			{
				func_31(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_30((Global_111638.f_20405.f_145 - 1));
			Global_111638.f_20405.f_145 = (Global_111638.f_20405.f_145 - 1);
			func_29();
			return;
		}
		iVar0++;
	}
}

void func_29()
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

void func_30(int iParam0)
{
	StringCopy(&(Global_111638.f_20405[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_111638.f_20405[iParam0 /*16*/].f_4), "", 16);
	Global_111638.f_20405[iParam0 /*16*/].f_8 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_9 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_11 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_10 = -1;
	Global_111638.f_20405[iParam0 /*16*/].f_12 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_13 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_14 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_15 = 0;
}

void func_31(int iParam0, int iParam1)
{
	Global_111638.f_20405[iParam0 /*16*/] = { Global_111638.f_20405[iParam1 /*16*/] };
	Global_111638.f_20405[iParam0 /*16*/].f_4 = { Global_111638.f_20405[iParam1 /*16*/].f_4 };
	Global_111638.f_20405[iParam0 /*16*/].f_8 = Global_111638.f_20405[iParam1 /*16*/].f_8;
	Global_111638.f_20405[iParam0 /*16*/].f_10 = Global_111638.f_20405[iParam1 /*16*/].f_10;
	Global_111638.f_20405[iParam0 /*16*/].f_9 = Global_111638.f_20405[iParam1 /*16*/].f_9;
	Global_111638.f_20405[iParam0 /*16*/].f_11 = Global_111638.f_20405[iParam1 /*16*/].f_11;
	Global_111638.f_20405[iParam0 /*16*/].f_12 = Global_111638.f_20405[iParam1 /*16*/].f_12;
	Global_111638.f_20405[iParam0 /*16*/].f_13 = Global_111638.f_20405[iParam1 /*16*/].f_13;
	Global_111638.f_20405[iParam0 /*16*/].f_14 = Global_111638.f_20405[iParam1 /*16*/].f_14;
	Global_111638.f_20405[iParam0 /*16*/].f_15 = Global_111638.f_20405[iParam1 /*16*/].f_15;
}

bool func_32(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (UNK_0x7F8A39872A07D2CE(bParam0, &(Global_111638.f_20405[iVar0 /*16*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_33(int iParam0, char* sParam1, var uParam2, bool bParam3)
{
	struct<6> Var0;
	vector3 vVar6[24];

	if (iParam0 == 0)
	{
		StringCopy(sParam1, "Taxi_NeedExcitement", 24);
	}
	else if (iParam0 == 1)
	{
		StringCopy(sParam1, "Taxi_TakeItEasy", 24);
	}
	else if (iParam0 == 2)
	{
		StringCopy(sParam1, "Taxi_Deadline", 24);
	}
	else if (iParam0 == 3)
	{
		StringCopy(sParam1, "Taxi_GotYourBack", 24);
	}
	else if (iParam0 == 4)
	{
		StringCopy(sParam1, "Taxi_TakeToBest", 24);
	}
	else if (iParam0 == 5)
	{
		StringCopy(sParam1, "Taxi_CutYouIn", 24);
	}
	else if (iParam0 == 6)
	{
		StringCopy(sParam1, "Taxi_GotYouNow", 24);
	}
	else if (iParam0 == 7)
	{
		StringCopy(sParam1, "Taxi_ClownCar", 24);
	}
	else if (iParam0 == 8)
	{
		StringCopy(sParam1, "Taxi_FollowCar", 24);
	}
	else if (iParam0 == 9)
	{
		StringCopy(sParam1, "Taxi_Procedural", 24);
	}
	if (bParam3)
	{
		StringCopy(&Var0, func_54(iParam0), 24);
		cVar6 = { Var0 };
		StringConCat(&cVar6, "_1", 24);
		func_79(uParam2);
		func_34(uParam2, "OJTXAUD", &Var0, &cVar6, 8, 0, 0);
	}
}

int func_34(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_53(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_35(sParam2, iParam4, 0);
}

int func_35(char* sParam0, int iParam1, bool bParam2)
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
					func_19();
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
		if (func_52(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_51();
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
				func_45();
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
				if (func_44())
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
			if (func_43())
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
			func_42();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_41();
		func_36();
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
		func_19();
	}
	return 0;
}

void func_36()
{
	if (!func_37())
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

bool func_37()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_40())
	{
		return false;
	}
	if (func_38(UNK_0xD803B885F5E47A62()))
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

bool func_38(int iParam0)
{
	return func_39(iParam0, 20);
}

bool func_39(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_40()
{
	return -1;
}

void func_41()
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

void func_42()
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

bool func_43()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_44()
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

void func_45()
{
	if (func_74(14))
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
		Global_19486 = func_46();
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

var func_46()
{
	func_47();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_47()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_49(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_84(UNK_0x16F2683693E537C9());
			if (func_48(iVar0) && (!func_74(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_48(Global_111638.f_2358.f_539.f_4321))
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

bool func_48(int iParam0)
{
	return iParam0 < 3;
}

int func_49(int iParam0)
{
	if (func_48(iParam0))
	{
		return func_50(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_50(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_51()
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

bool func_52(bool bParam0, int iParam1)
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

void func_53(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

char* func_54(int iParam0)
{
	if (iParam0 == 0)
	{
		return "OJTX_EXC_OFF";
	}
	else if (iParam0 == 1)
	{
		return "OJTX_TIE_OFF";
	}
	else if (iParam0 == 2)
	{
		return "OJTX_DL_OFF";
	}
	else if (iParam0 == 3)
	{
		return "OJTX_GB_OFF";
	}
	else if (iParam0 == 4)
	{
		return "OJTX_TB_OFF";
	}
	else if (iParam0 == 5)
	{
		return "OJTX_CI_OFF";
	}
	else if (iParam0 == 6)
	{
		return "OJTX_GN_OFF";
	}
	else if (iParam0 == 7)
	{
		return "OJTX_CC_OFF";
	}
	else if (iParam0 == 8)
	{
		return "OJTX_FC_OFF";
	}
	else if (iParam0 == 9)
	{
		return "OJTX_PRO_OFF";
	}
	return "";
}

void func_55(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_56(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_53(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_35(sParam2, iParam3, 0);
}

void func_57(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_58()
{
	int iVar0;

	iVar0 = UNK_0x1C0640BA9A7327B3();
	if (Global_20805 == 0)
	{
		if ((iVar0 - Global_21827) > 3000)
		{
			if (UNK_0x25037C66EB32B076() == 0)
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

float func_59(var uParam0)
{
	if (func_63(uParam0))
	{
		if (func_61(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_60(UNK_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_60(bool bParam0)
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

bool func_61(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

void func_62(bool bParam0)
{
	if (!func_63(bParam0))
	{
		func_77(bParam0);
	}
}

bool func_63(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, true);
}

bool func_64(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_65(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_66(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_66(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_29();
	}
}

int func_67(bool bParam0)
{
	if (UNK_0x7F8A39872A07D2CE(bParam0, &Global_110281))
	{
		return 1;
	}
	if (func_32(bParam0))
	{
		return 0;
	}
	return 2;
}

int func_68()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_70())
	{
		return 1;
	}
	else
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		iVar1 = SYSTEM::ROUND(UNK_0x6EE94F60DA2A2273(bVar0));
		iVar2 = UNK_0x7F6DC62EA9922664(bVar0);
		if (iVar1 < 100 || iVar2 < 100)
		{
			return 2;
		}
		if (!func_69(bVar0))
		{
			return 2;
		}
		if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
		{
			return 3;
		}
	}
	return 0;
}

bool func_69(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!UNK_0x464B3D84B739AE72(bParam0, false, 0))
	{
		iVar0++;
	}
	if (!UNK_0x464B3D84B739AE72(bParam0, true, 0))
	{
		iVar0++;
	}
	if (!UNK_0x464B3D84B739AE72(bParam0, 4, 0))
	{
		iVar0++;
	}
	if (!UNK_0x464B3D84B739AE72(bParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return false;
	}
	if (UNK_0x8E39AC3C76C8AA58(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		iVar1 = 0;
		if (!UNK_0x1150BCE24B1630AC(bParam0, false))
		{
			iVar1++;
		}
		if (!UNK_0x1150BCE24B1630AC(bParam0, true))
		{
			iVar1++;
		}
		if (!UNK_0x1150BCE24B1630AC(bParam0, 2))
		{
			iVar1++;
		}
		if (!UNK_0x1150BCE24B1630AC(bParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return false;
		}
	}
	return true;
}

bool func_70()
{
	bool bVar0;

	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (UNK_0xA30B8362589C124A(bVar0, -1, 0) == UNK_0x16F2683693E537C9())
				{
					if (UNK_0x4906F8A34E9F4814(bVar0, func_20()))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_71()
{
	if (!func_82(Global_111638.f_19092, 8192))
	{
		if (func_70())
		{
			func_80(&(Global_111638.f_19092), 8192);
			func_73();
		}
	}
	else if (!func_70())
	{
		func_90(&(Global_111638.f_19092), 8192);
		func_72();
	}
}

void func_72()
{
	bool bVar0;

	bVar0 = UNK_0x728870EB733D12A1();
	if (UNK_0xDF1306B443CD3D15(bVar0, 0))
	{
		UNK_0xCEAA091B490F8407(-1, "Radio_Off", bVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_73()
{
	bool bVar0;

	bVar0 = UNK_0x728870EB733D12A1();
	if (UNK_0xDF1306B443CD3D15(bVar0, 0))
	{
		UNK_0xCEAA091B490F8407(-1, "Radio_On", bVar0, "TAXI_SOUNDS", 0, 0);
	}
}

bool func_74(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_75()
{
	if (Global_41431 == 15)
	{
		return false;
	}
	return true;
}

bool func_76(bool bParam0)
{
	if (Global_22211.f_130)
	{
		return false;
	}
	if (UNK_0xB9132A06AE472728(0, 19) || (!bParam0 && UNK_0x9A01369A10646AFE(0, 19)))
	{
		return true;
	}
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (UNK_0xB9132A06AE472728(0, 166))
		{
			if ((!UNK_0x06F8112AA79C53D9(0, 167) && !UNK_0x06F8112AA79C53D9(0, 168)) && !UNK_0x06F8112AA79C53D9(0, 169))
			{
				return true;
			}
		}
		else if (UNK_0xB9132A06AE472728(0, 167))
		{
			if ((!UNK_0x06F8112AA79C53D9(0, 166) && !UNK_0x06F8112AA79C53D9(0, 168)) && !UNK_0x06F8112AA79C53D9(0, 169))
			{
				return true;
			}
		}
		else if (UNK_0xB9132A06AE472728(0, 168))
		{
			if ((!UNK_0x06F8112AA79C53D9(0, 166) && !UNK_0x06F8112AA79C53D9(0, 167)) && !UNK_0x06F8112AA79C53D9(0, 169))
			{
				return true;
			}
		}
		else if (UNK_0xB9132A06AE472728(0, 169))
		{
			if ((!UNK_0x06F8112AA79C53D9(0, 166) && !UNK_0x06F8112AA79C53D9(0, 167)) && !UNK_0x06F8112AA79C53D9(0, 168))
			{
				return true;
			}
		}
		if (!bParam0)
		{
			if (UNK_0x9A01369A10646AFE(0, 166))
			{
				if ((!UNK_0x7FEE810EE9E768EB(0, 167) && !UNK_0x7FEE810EE9E768EB(0, 168)) && !UNK_0x7FEE810EE9E768EB(0, 169))
				{
					return true;
				}
			}
			else if (UNK_0x9A01369A10646AFE(0, 167))
			{
				if ((!UNK_0x7FEE810EE9E768EB(0, 166) && !UNK_0x7FEE810EE9E768EB(0, 168)) && !UNK_0x7FEE810EE9E768EB(0, 169))
				{
					return true;
				}
			}
			else if (UNK_0x9A01369A10646AFE(0, 168))
			{
				if ((!UNK_0x7FEE810EE9E768EB(0, 166) && !UNK_0x7FEE810EE9E768EB(0, 167)) && !UNK_0x7FEE810EE9E768EB(0, 169))
				{
					return true;
				}
			}
			else if (UNK_0x9A01369A10646AFE(0, 169))
			{
				if ((!UNK_0x7FEE810EE9E768EB(0, 166) && !UNK_0x7FEE810EE9E768EB(0, 167)) && !UNK_0x7FEE810EE9E768EB(0, 168))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_77(bool bParam0)
{
	func_78(bParam0, 0f);
}

void func_78(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_60(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_79(var uParam0)
{
	int iVar0;
	char cVar1[64];

	iVar0 = func_84(UNK_0x16F2683693E537C9());
	if (iVar0 == 0)
	{
		func_57(uParam0, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_57(uParam0, 0, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_57(uParam0, 0, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_57(uParam0, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_57(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_80(var uParam0, int iParam1)
{
	func_81(uParam0, iParam1);
}

void func_81(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_82(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_83()
{
	int iVar0;

	if (func_82(Global_111638.f_19092, 2048))
	{
		iVar0 = 0;
		while (iVar0 <= (10 - 1))
		{
			Global_111638.f_19092.f_1[0 /*2*/] = 0;
			Global_111638.f_19092.f_1[0 /*2*/].f_1 = 0;
			iVar0++;
		}
	}
}

int func_84(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_49(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

void func_85(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_86(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_26(iParam0))
	{
		return false;
	}
	return true;
}

bool func_87(int iParam0, bool bParam1)
{
	bool bVar0;

	if (iParam0 == 11 || iParam0 == -1)
	{
		return false;
	}
	if (bParam1 < 0 || bParam1 >= 32)
	{
		return false;
	}
	bVar0 = UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iParam0], bParam1);
	return bVar0;
}

int func_88(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_9080.f_99.f_219[iVar0]), bVar1);
	return 1;
}

void func_89()
{
	if (func_82(Global_111638.f_19092, 4))
	{
		func_90(&(Global_111638.f_19092), 4);
		UNK_0xAB8E2DDC7AF955E0(func_20(), false);
	}
	if (func_82(Global_111638.f_19092, 256))
	{
		func_90(&(Global_111638.f_19092), 256);
		func_4(&iLocal_108);
	}
	if (iLocal_98 != 0)
	{
		if (UNK_0x1727A44C562FBED2(iLocal_98))
		{
			UNK_0xB3147F6556CFCCAC(iLocal_98);
			iLocal_98 = 0;
		}
	}
	if (UNK_0x4880526EC51D1C27(&cLocal_99) != 0)
	{
		UNK_0x5E8C29AE121DF1C7(&cLocal_99);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_105))
	{
		UNK_0x142CC44DB769B57E(&iLocal_105);
	}
	UNK_0x10FAF14A60A0DBE1();
}

void func_90(var uParam0, int iParam1)
{
	func_91(uParam0, iParam1);
}

void func_91(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

