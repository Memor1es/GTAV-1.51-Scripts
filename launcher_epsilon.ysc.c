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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_78 = false;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = false;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 16;
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
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	bool bLocal_265 = false;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	vector3 vLocal_274[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
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
	struct<42> Var0;
	vector3 vVar61;
	int iVar64;
	int iVar65[8];

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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_82 = 1;
	iLocal_83 = 65;
	iLocal_84 = 49;
	iLocal_85 = 64;
	iLocal_89 = UNK_0xAD1355DD1E5D2D9B();
	iLocal_90 = UNK_0x817B3657F78A517A();
	iLocal_92 = func_497(60);
	iLocal_93 = func_497(14);
	iLocal_96 = -1;
	UNK_0xDF8BDD00CF1D4043(1);
	func_496();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	vVar61 = { 0f, 0f, 0f };
	iVar64 = 1;
	func_495(&Var0);
	vVar61 = { ScriptParam_0.f_1[0 /*3*/] };
	iVar65[0] = 9;
	iVar65[1] = 10;
	iVar65[2] = 11;
	iVar65[3] = 12;
	iVar65[4] = 13;
	iVar65[5] = 14;
	iVar65[6] = 15;
	iVar65[7] = 16;
	if (UNK_0x2EBF608FFE6CA406(83))
	{
		func_494("Force cleanup [TERMINATING]");
		if (Var0 != -1)
		{
			if (Global_110725[Var0 /*10*/].f_9 != -1)
			{
				func_494("Relinquishing candidate id...");
				func_493(&(Global_110725[Var0 /*10*/].f_9));
			}
		}
		func_478(&Var0, 1);
	}
	if (!func_475(&iVar65, &Var0, vVar61, 5f))
	{
		func_474();
		func_494("SCRIPT TERMINATED");
		UNK_0x10FAF14A60A0DBE1();
	}
	if (!func_466(Var0))
	{
		func_474();
		func_494("SCRIPT TERMINATED");
		UNK_0x10FAF14A60A0DBE1();
	}
	if (func_465(Var0))
	{
		func_474();
		func_494("SCRIPT TERMINATED");
		UNK_0x10FAF14A60A0DBE1();
	}
	while (!func_433(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!UNK_0x338D6FF72D84D90F())
		{
			func_494("Player out of range [TERMINATING]");
			func_478(&Var0, 1);
		}
	}
	UNK_0x536F1BE96C726C4B(vVar61, Var0.f_15, 1, 0, 0, false);
	if (Var0 == 11)
	{
		func_432(&uLocal_98, 3, Var0.f_28[0], "MARNIE", 0, 1);
	}
	if (Var0 == 12)
	{
		func_432(&uLocal_98, 4, Var0.f_28[0], "MARNIE", 0, 1);
		func_432(&uLocal_98, 5, Var0.f_28[1], "JIMMYBOSTON", 0, 1);
		iLocal_263 = UNK_0x1C0640BA9A7327B3();
		func_431();
	}
	if (Var0 == 13)
	{
		func_432(&uLocal_98, 4, Var0.f_28[0], "MARNIE", 0, 1);
	}
	if (Var0 == 16)
	{
		func_432(&uLocal_98, 4, Var0.f_28[0], "EPSGUARD5", 0, 1);
		func_432(&uLocal_98, 5, Var0.f_28[1], "EPSGUARD6", 0, 1);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_411(&Var0, 1))
		{
			if (Var0 == 16 && UNK_0x338D6FF72D84D90F())
			{
				func_494("Epsilon 8 kicking off! [TERMINATING]");
				func_410(&Var0);
				func_409();
			}
			if (Var0 == 14)
			{
				func_406(37, 1);
			}
			func_478(&Var0, 1);
		}
		if (Var0 == 10)
		{
			func_392();
			if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 237.926f, 360.2992f, 103.6515f, 244.6899f, 357.8277f, 107.3224f, 4.75f, 0, true, 0))
			{
				UNK_0xCAF7AE54F764D5AA(UNK_0x16F2683693E537C9(), 1f);
			}
		}
		else if (Var0 == 11)
		{
			if (func_391(Var0.f_28[0]))
			{
				if (!UNK_0xE9FDA1035CFEA94F(Var0.f_28[0]) && !UNK_0x869EFD0BC0868856(Var0.f_28[0]))
				{
					func_390(&Var0, vVar61, "EPS3AUD", "EP3_AMB", 3, "MARNIE", 500, 1101004800 /* Float: 20f */);
				}
				if (func_371(Var0.f_28[0], 1, 1116471296 /* Float: 70f */, 1126825984 /* Float: 170f */, 0, 0, 0, 0))
				{
					if (UNK_0xB4AE0788C1587752("rcmepsilonism3"))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_267);
						UNK_0xC6EB89C59F2AF6B8(false, "rcmepsilonism3", "outro", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
						UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_267);
						UNK_0x78ADC381772E3D54(Var0.f_28[0], iLocal_267);
					}
					else
					{
						UNK_0xF3268524E9BE6D6E(Var0.f_28[0], UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
					}
					UNK_0xFADC0A217229F6B5(Var0.f_28[0], true);
					UNK_0x6DAD7906B73F064D(&(Var0.f_28[0]));
					func_478(&Var0, 1);
				}
			}
		}
		else if (Var0 == 12)
		{
			if (UNK_0x75EECC9B0572F772())
			{
				func_494("Can request assets for cutscene entity in Eps 4");
				UNK_0xA2888AACD3C45CCA("Jimmy_Boston", true, 0, 0, false);
			}
			func_370();
			if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1826.621f, 4698.734f, 41.36862f, 1831.158f, 4680.191f, 32.42626f, 16.5f, 0, true, 0))
			{
				if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if (!func_369(UNK_0x16F2683693E537C9(), 713668775))
					{
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 256);
						UNK_0x96167B03C5A77156(UNK_0x16F2683693E537C9(), 1827.34f, 4697.22f, 38.02f, 1f, 20000, 0.25f, 1, 1193033728);
					}
				}
			}
			func_368();
		}
		else if (Var0 == 13)
		{
			if (func_391(Var0.f_28[0]))
			{
				if (!UNK_0xE9FDA1035CFEA94F(Var0.f_28[0]) && !UNK_0x869EFD0BC0868856(Var0.f_28[0]))
				{
					if (func_364(&Var0, vVar61, "EPS5AUD", "EP5_AMB", 4, "MARNIE", 1500))
					{
						func_494("Triggered Mary Ann Eps 5 conv");
					}
				}
				if (func_371(Var0.f_28[0], 1, 1116471296 /* Float: 70f */, 1126825984 /* Float: 170f */, 0, 0, 0, 0))
				{
					if (func_363())
					{
						func_494("Killed Eps 5 conversation (threat)");
						func_362();
					}
					UNK_0xF3268524E9BE6D6E(Var0.f_28[0], UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
					UNK_0xFADC0A217229F6B5(Var0.f_28[0], true);
					UNK_0x6DAD7906B73F064D(&(Var0.f_28[0]));
					func_478(&Var0, 1);
				}
			}
		}
		else if (Var0 == 14)
		{
			func_361(&Var0);
		}
		else if (Var0 == 15)
		{
			if (UNK_0x75EECC9B0572F772())
			{
				func_494("Can request assets for cutscene entity in Eps 7");
				UNK_0xA2888AACD3C45CCA("Jimmy_Boston", true, 0, 0, false);
			}
		}
		else if (Var0 == 16)
		{
			func_347();
		}
		func_346(Var0);
		func_338(&iLocal_96, &(Var0.f_9), vVar61);
		func_337(&Var0, &iVar64);
		if (func_322(&Var0, 0))
		{
			if (!func_172(&Var0))
			{
				func_169(&Var0, &iVar64);
			}
			else
			{
				if (func_168(Var0))
				{
					func_165(Var0, &iLocal_266);
				}
				if (!func_2(&Var0))
				{
					func_478(&Var0, 1);
				}
				if (func_1(&Var0))
				{
					func_478(&Var0, 0);
				}
			}
		}
	}
}

bool func_1(int iParam0)
{
	while (!Global_110725[*iParam0 /*10*/])
	{
		SYSTEM::WAIT(0);
	}
	return true;
}

bool func_2(int iParam0)
{
	struct<4> Var0;
	var uVar32;

	if (!func_164())
	{
		while (!func_155(*iParam0))
		{
			if (func_154(*iParam0))
			{
				func_143();
			}
			if (!func_411(iParam0, *iParam0 != 2))
			{
				func_494("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return false;
			}
			SYSTEM::WAIT(0);
		}
	}
	if (func_363())
	{
		func_362();
	}
	if (!func_113(iParam0))
	{
		func_494("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return false;
	}
	func_110(*iParam0, &Var0);
	MemCopy(&uVar32, {func_109(*iParam0)}, 4);
	func_107(&uVar32, Var0.f_3, 0);
	func_106(*iParam0);
	if (!func_164())
	{
		if (iParam0->f_16 == 2)
		{
			func_22(&(iParam0->f_1), 0);
		}
		else
		{
			func_22(&(iParam0->f_1), 1);
		}
	}
	func_3(*iParam0, Var0);
	return true;
}

void func_3(int iParam0, bool bParam1)
{
	func_21(bParam1);
	UNK_0x0674E58A79778E99(&(Global_111638.f_18569[iParam0 /*6*/]), 5);
	if (UNK_0x8A22C4C08282BF26(joaat("MISSION_STAT_WATCHER")) > 0)
	{
		while (UNK_0x8A22C4C08282BF26(joaat("MISSION_STAT_WATCHER")) > 0)
		{
			func_19();
			SYSTEM::WAIT(0);
		}
	}
	if (UNK_0x8A22C4C08282BF26(joaat("MISSION_STAT_WATCHER")) < 1)
	{
		Global_61513 = 0;
		UNK_0x92DCE5C81176D2B4("mission_stat_watcher");
		while (!UNK_0x1FBF08B001C4788A("mission_stat_watcher"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("mission_stat_watcher", 1828);
		UNK_0x5E8C29AE121DF1C7("mission_stat_watcher");
	}
	while (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], 5))
	{
		if (UNK_0x8A22C4C08282BF26(joaat("MISSION_STAT_WATCHER")) > 0)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_18569[iParam0 /*6*/]), 5);
		}
	}
	func_4(iParam0);
}

void func_4(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_61510 == 1)
	{
		func_18();
		Global_61510 = 0;
		if (Global_61505)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_61513 = 1;
		func_10();
		return;
	}
	MemCopy(&Global_61527, {func_9(iParam0)}, 4);
	Global_61515 = 0;
	Global_61514 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_61502 = 1;
			Global_61505 = 1;
			Global_61508 = 1;
			break;
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_61513 = 1;
			Global_61514 = 1;
			func_10();
			func_19();
			return;
	}
	iVar0 = Global_73757;
	Global_73757 = 1;
	iVar1 = Global_73758;
	Global_73758 = iParam0;
	if (!Global_61502)
	{
		if ((Global_73758 != iVar1 || Global_73607 == 0) || iVar0 != Global_73757)
		{
			Global_31020 = 0;
			func_10();
			func_6(iParam0);
		}
		else
		{
			Global_61505 = 1;
		}
	}
	Global_61540 = UNK_0x1C0640BA9A7327B3();
	func_5();
	Global_61512 = 0;
}

void func_5()
{
	int iVar0;

	if (!Global_61509)
	{
		return;
	}
	if (Global_73607 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		switch (Global_61737[Global_73608[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_73608[iVar0 /*9*/].f_3 = 1;
				break;
			case 4:
				if (Global_61520)
				{
					Global_73608[iVar0 /*9*/].f_3 = 1;
				}
				break;
			case 6:
				if (Global_61737[Global_73608[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_73608[iVar0 /*9*/].f_1 != 0)
					{
						Global_73608[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_61509 = 0;
}

void func_6(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			func_7(741);
			func_7(742);
			return;
		case 3:
			func_7(743);
			func_7(744);
			return;
		case 5:
			func_7(745);
			func_7(746);
			return;
		case 6:
			func_7(747);
			func_7(748);
			return;
		case 8:
			func_7(749);
			return;
		case 12:
			func_7(750);
			return;
		case 14:
			func_7(751);
			func_7(752);
			return;
		case 16:
			func_7(753);
			func_7(754);
			return;
		case 17:
			func_7(755);
			func_7(756);
			func_7(757);
			return;
		case 18:
			func_7(758);
			func_7(759);
			return;
		case 19:
			func_7(760);
			func_7(761);
			return;
		case 20:
			func_7(762);
			return;
		case 21:
			func_7(763);
			return;
		case 22:
			func_7(764);
			func_7(765);
			return;
		case 23:
			func_7(766);
			return;
		case 25:
			func_7(767);
			func_7(768);
			func_7(769);
			return;
		case 26:
			func_7(770);
			func_7(771);
			return;
		case 28:
			func_7(772);
			func_7(773);
			return;
		case 29:
			func_7(774);
			func_7(775);
			return;
		case 30:
			func_7(776);
			func_7(777);
			return;
		case 32:
			func_7(778);
			func_7(779);
			return;
		case 33:
			func_7(780);
			func_7(781);
			func_7(782);
			return;
		case 34:
			func_7(783);
			func_7(784);
			return;
		case 38:
			func_7(785);
			func_7(786);
			return;
		case 39:
			func_7(787);
			func_7(788);
			return;
		case 40:
			func_7(789);
			return;
		case 41:
			func_7(790);
			func_7(791);
			func_7(792);
			return;
		case 42:
			func_7(793);
			func_7(794);
			func_7(795);
			return;
		case 43:
			func_7(796);
			func_7(797);
			return;
		case 46:
			func_7(798);
			func_7(799);
			return;
		default:
			break;
	}
	switch (iParam0)
	{
		case 47:
			func_7(800);
			func_7(801);
			return;
		case 49:
			func_7(802);
			func_7(803);
			return;
		case 50:
			func_7(804);
			func_7(805);
			return;
		case 51:
			func_7(806);
			return;
		case 57:
			func_7(807);
			func_7(808);
			func_7(809);
			return;
		case 58:
			func_7(828);
			func_7(829);
			func_7(830);
			return;
		case 59:
			func_7(831);
			func_7(832);
			func_7(833);
			return;
		case 60:
			func_7(834);
			func_7(835);
			func_7(836);
			return;
		case 61:
			func_7(837);
			func_7(838);
			func_7(839);
			return;
		case 62:
			func_7(840);
			func_7(841);
			func_7(842);
			return;
		case 24:
			func_7(843);
			func_7(844);
			func_7(845);
			return;
		default:
			break;
	}
}

void func_7(int iParam0)
{
	Global_61505 = 1;
	Global_61508 = 1;
	if (Global_73607 > 15)
	{
		return;
	}
	func_8(Global_73607);
	Global_73608[Global_73607 /*9*/] = iParam0;
	Global_73607++;
	if (Global_61737[iParam0 /*13*/] == 16)
	{
		Global_73759 = 1;
	}
}

void func_8(int iParam0)
{
	Global_73608[iParam0 /*9*/].f_1 = 0;
	Global_73608[iParam0 /*9*/].f_2 = 0f;
	Global_73608[iParam0 /*9*/].f_3 = 0;
	Global_73608[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_9(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_109(iParam0) };
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

void func_10()
{
	if (Global_61512)
	{
		return;
	}
	Global_61521 = 0;
	Global_73607 = 0;
	Global_61523 = 0;
	if (Global_61520)
	{
	}
	Global_61520 = 0;
	func_17(0);
	func_16();
	Global_73759 = 0;
	Global_61511 = 1;
	func_14();
	func_13();
	func_12();
	func_11();
	Global_61502 = 0;
	Global_61532 = 0;
	Global_61540 = -1;
}

void func_11()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_73794[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_73803 = 0;
}

void func_12()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_73760[iVar0 /*2*/] = 0;
		Global_73760[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_73793 = 0;
}

void func_13()
{
	Global_61671 = 0;
}

void func_14()
{
	Global_61531 = 0;
	Global_61535 = func_15(joaat("SP0_SHOTS"));
	Global_61534 = func_15(joaat("SP0_HITS"));
	Global_61537 = func_15(joaat("SP1_SHOTS"));
	Global_61536 = func_15(joaat("SP1_HITS"));
	Global_61539 = func_15(joaat("SP2_SHOTS"));
	Global_61538 = func_15(joaat("SP2_HITS"));
}

var func_15(int iParam0)
{
	var uVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &uVar0, -1);
	return uVar0;
}

void func_16()
{
	int iVar0;

	Global_61541 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_61542[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_17(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_18()
{
	int iVar0;

	Global_61510 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		Global_73608[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_61520)
	{
	}
	Global_61520 = 0;
}

void func_19()
{
	if (UNK_0x8A22C4C08282BF26(joaat("MISSION_STAT_WATCHER")) > 0)
	{
		if (func_20())
		{
			if (Global_61507 && !Global_61506)
			{
				Global_61507 = 0;
				UNK_0xCB0CD9B929EB37B9("mission_stat_watcher");
			}
		}
		else
		{
			UNK_0xCB0CD9B929EB37B9("mission_stat_watcher");
		}
	}
}

bool func_20()
{
	if (UNK_0x8A22C4C08282BF26(joaat("MISSION_STAT_WATCHER")) < 1)
	{
		return false;
	}
	if (!Global_61505)
	{
		return false;
	}
	return Global_61517;
}

void func_21(bool bParam0)
{
	if (UNK_0x7F8A39872A07D2CE(bParam0, bParam0))
	{
	}
}

void func_22(char[4] cParam0, int iParam1)
{
	UNK_0x0674E58A79778E99(&(Global_98744.f_20), 17);
	func_23(cParam0, iParam1, 0);
}

void func_23(char[4] cParam0, int iParam1, bool bParam2)
{
	if (Global_98744 != 10 && Global_98744 != 9)
	{
		StringCopy(&Global_102195, cParam0, 32);
		func_25(&Global_102203, cParam0, 0, "Start", iParam1, bParam2);
		func_24();
		Global_92922 = 0;
	}
}

void func_24()
{
	int iVar0;
	int iVar1;

	Global_105187 = Global_102203;
	Global_105187.f_1 = Global_102203.f_1;
	Global_105187.f_6 = Global_102203.f_6;
	Global_105187.f_7 = Global_102203.f_7;
	Global_105187.f_8 = Global_102203.f_8;
	Global_105187.f_2 = Global_102203.f_2;
	Global_105187.f_3 = Global_102203.f_3;
	Global_105187.f_4 = Global_102203.f_4;
	Global_105187.f_5 = Global_102203.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_105187.f_9[iVar1] = Global_102203.f_9[iVar1];
		Global_105187.f_13[iVar1] = Global_102203.f_13[iVar1];
		Global_105187.f_17[iVar1] = Global_102203.f_17[iVar1];
		Global_105187.f_21[iVar1] = Global_102203.f_21[iVar1];
		Global_105187.f_25[0 /*295*/][iVar1 /*98*/] = { Global_102203.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_105187.f_25[1 /*295*/][iVar1 /*98*/] = { Global_102203.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_105187.f_616[iVar1 /*65*/][iVar0] = Global_102203.f_616[iVar1 /*65*/][iVar0];
			Global_105187.f_616[iVar1 /*65*/].f_13[iVar0] = Global_102203.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_105187.f_616[iVar1 /*65*/].f_26[iVar0] = Global_102203.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_105187.f_616[iVar1 /*65*/].f_59 = Global_102203.f_616[iVar1 /*65*/].f_59;
		Global_105187.f_616[iVar1 /*65*/].f_60 = Global_102203.f_616[iVar1 /*65*/].f_60;
		Global_105187.f_616[iVar1 /*65*/].f_61 = Global_102203.f_616[iVar1 /*65*/].f_61;
		Global_105187.f_616[iVar1 /*65*/].f_62 = Global_102203.f_616[iVar1 /*65*/].f_62;
		Global_105187.f_616[iVar1 /*65*/].f_63 = Global_102203.f_616[iVar1 /*65*/].f_63;
		Global_105187.f_616[iVar1 /*65*/].f_64 = Global_102203.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_105187.f_616[iVar1 /*65*/].f_39[iVar0] = Global_102203.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_105187.f_616[iVar1 /*65*/].f_49[iVar0] = Global_102203.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_105187.f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_102203.f_812[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			Global_105187.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_102203.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_105187.f_2244[iVar1 /*32*/][iVar0] = Global_102203.f_2244[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_105187.f_2244[iVar1 /*32*/].f_5[iVar0] = Global_102203.f_2244[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_105187.f_2244[iVar1 /*32*/].f_16[iVar0] = Global_102203.f_2244[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_105187.f_2341[iVar1] = Global_102203.f_2341[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_105187.f_2838[iVar1 /*15*/][iVar0] = Global_102203.f_2838[iVar1 /*15*/][iVar0];
			Global_105187.f_2838[iVar1 /*15*/].f_5[iVar0] = Global_102203.f_2838[iVar1 /*15*/].f_5[iVar0];
			Global_105187.f_2838[iVar1 /*15*/].f_10[iVar0] = Global_102203.f_2838[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_105187.f_2345[iVar1 /*164*/][iVar0] = Global_102203.f_2345[iVar1 /*164*/][iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_4[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_4[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_8[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_8[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_12[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_12[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_16[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_16[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_20[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_20[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_24[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_24[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_28[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_28[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_32[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_32[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_36[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_36[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_40[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_40[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_44[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_44[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_48[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_48[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_52[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_52[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_56[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_56[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_60[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_60[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_64[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_64[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_68[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_68[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_72[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_72[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_76[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_76[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_80[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_80[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_84[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_84[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_88[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_88[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_92[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_92[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_96[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_96[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_100[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_100[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_104[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_104[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_108[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_108[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_112[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_112[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_116[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_116[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_120[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_120[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_124[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_124[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_128[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_128[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_132[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_132[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_136[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_136[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_140[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_140[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_144[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_144[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_148[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_148[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_152[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_152[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_156[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_156[iVar0];
			Global_105187.f_2345[iVar1 /*164*/].f_160[iVar0] = Global_102203.f_2345[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_105187.f_2884 = { Global_102203.f_2884 };
	Global_105187.f_2884.f_3 = Global_102203.f_2884.f_3;
	Global_105187.f_2890 = { Global_102203.f_2890 };
	Global_105187.f_2890.f_3 = { Global_102203.f_2890.f_3 };
	Global_105187.f_2890.f_6 = Global_102203.f_2890.f_6;
	Global_105187.f_2890.f_8 = Global_105187.f_2890.f_8;
	Global_105187.f_2890.f_7 = Global_102203.f_2890.f_7;
	Global_105187.f_2890.f_9 = Global_102203.f_2890.f_9;
	Global_105187.f_2890.f_11 = Global_102203.f_2890.f_11;
	Global_105187.f_2890.f_10 = Global_102203.f_2890.f_10;
	Global_105187.f_2890.f_12 = Global_102203.f_2890.f_12;
	Global_105187.f_2890.f_12.f_1 = { Global_102203.f_2890.f_12.f_1 };
	Global_105187.f_2890.f_12.f_5 = Global_102203.f_2890.f_12.f_5;
	Global_105187.f_2890.f_12.f_6 = Global_102203.f_2890.f_12.f_6;
	Global_105187.f_2890.f_12.f_7 = Global_102203.f_2890.f_12.f_7;
	Global_105187.f_2890.f_12.f_8 = Global_102203.f_2890.f_12.f_8;
	Global_105187.f_2890.f_12.f_9 = { Global_102203.f_2890.f_12.f_9 };
	Global_105187.f_2890.f_12.f_59 = { Global_102203.f_2890.f_12.f_59 };
	Global_105187.f_2890.f_12.f_62 = Global_102203.f_2890.f_12.f_62;
	Global_105187.f_2890.f_12.f_63 = Global_102203.f_2890.f_12.f_63;
	Global_105187.f_2890.f_12.f_64 = Global_102203.f_2890.f_12.f_64;
	Global_105187.f_2890.f_12.f_65 = Global_102203.f_2890.f_12.f_65;
	Global_105187.f_2890.f_12.f_77 = Global_102203.f_2890.f_12.f_77;
	Global_105187.f_2890.f_12.f_66 = Global_102203.f_2890.f_12.f_66;
	Global_105187.f_2890.f_12.f_67 = Global_102203.f_2890.f_12.f_67;
	Global_105187.f_2890.f_12.f_68 = Global_102203.f_2890.f_12.f_68;
	Global_105187.f_2890.f_12.f_69 = Global_102203.f_2890.f_12.f_69;
	Global_105187.f_2890.f_12.f_71 = Global_102203.f_2890.f_12.f_71;
	Global_105187.f_2890.f_12.f_72 = Global_102203.f_2890.f_12.f_72;
	Global_105187.f_2890.f_12.f_73 = Global_102203.f_2890.f_12.f_73;
	Global_105187.f_2890.f_12.f_74 = Global_102203.f_2890.f_12.f_74;
	Global_105187.f_2890.f_12.f_75 = Global_102203.f_2890.f_12.f_75;
	Global_105187.f_2890.f_12.f_76 = Global_102203.f_2890.f_12.f_76;
	Global_105187.f_2980 = Global_102203.f_2980;
	Global_105187.f_2980.f_1 = Global_102203.f_2980.f_1;
	Global_105187.f_2980.f_2 = Global_102203.f_2980.f_2;
	Global_105187.f_2980.f_3 = Global_102203.f_2980.f_3;
}

void func_25(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	*uParam0 = func_105();
	uParam0->f_1 = func_94();
	UNK_0x1BC83DD08AA82285(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		func_66(&(uParam0->f_2884), 0);
		func_65(UNK_0x16F2683693E537C9());
		func_58(UNK_0x16F2683693E537C9(), 0);
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_111638.f_2358.f_539.f_294[iVar1];
		if (iVar1 == func_55())
		{
			func_48(UNK_0x16F2683693E537C9(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_98469[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_98469[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_98469[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_98469[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_98469[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_98469[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_98469[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_98469[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_98469[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_98469[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_111638.f_2358.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_111638.f_2358.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 1:
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 2:
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_111638.f_20559.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_58686[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_111638.f_2358.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_111638.f_2358.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_111638.f_2358[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	UNK_0x6FB46C25CCB7E6D5(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	UNK_0x6FB46C25CCB7E6D5(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	UNK_0x6FB46C25CCB7E6D5(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_27(&(uParam0->f_2890), uParam0, bParam5, 1, 1, 0);
	}
	func_26(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_26(var uParam0)
{
	*uParam0 = Global_94593;
	uParam0->f_1 = Global_94594;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_27(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;

	if (bParam2 == 0)
	{
		bParam2 = UNK_0x16F2683693E537C9();
	}
	if (UNK_0xC844350D5D58C99A(bParam2))
	{
		uParam1->f_5 = func_45(bParam2);
	}
	if (func_42(bParam2, &bVar0, iParam3, iParam5))
	{
		func_28(uParam0, uParam1, bVar0, iParam4);
	}
	else if (UNK_0xC844350D5D58C99A(bVar0))
	{
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0x4906F8A34E9F4814(bVar0, joaat("SKYLIFT")) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bVar0, 0))
			{
				func_28(uParam0, uParam1, bVar0, iParam4);
			}
		}
	}
}

int func_28(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (UNK_0xDF1306B443CD3D15(bParam2, 0))
	{
		func_30(uParam0, bParam2, iParam3);
		uParam1->f_4 = bParam2;
		if (func_29(bParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

bool func_29(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_98744.f_22[iVar0] == bParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_30(var uParam0, bool bParam1, int iParam2)
{
	func_37(bParam1, &(uParam0->f_12));
	uParam0->f_7 = func_33(bParam1, 145, 0);
	uParam0->f_11 = func_32(bParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_31(bParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
		uParam0->f_6 = UNK_0xD9522BA9E27E1349(bParam1);
		uParam0->f_3 = { UNK_0x56E9E0FD5ACCD35D(bParam1) };
		if (UNK_0x3D1053F9EB43B7AD(bParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_76346 == bParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_31(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_484[iVar0]))
		{
			if (bParam0 == Global_75441.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_32(bool bParam0)
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

int func_33(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == bParam0)
			{
				if (bParam1 == 145 || bParam1 == Global_96085[iVar0])
				{
					if (iParam2 == 0 || UNK_0x134B62B726CEC8E6(bParam0) == func_34(bParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(bool bParam0, int iParam1)
{
	struct<82> Var0;

	if (func_36(bParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_35(bParam0, &Var0, iParam1);
		return Var0;
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

void func_35(bool bParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (bParam0)
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

bool func_36(bool bParam0)
{
	return bParam0 < 3;
}

void func_37(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_41(uParam1);
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
		if (uParam1->f_65 == -1 && !func_40(uParam1->f_66))
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
		func_39(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_38(iVar0 + 1));
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

int func_38(int iParam0)
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

int func_39(bool bParam0, var uParam1, var uParam2)
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

bool func_40(int iParam0)
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

void func_41(var uParam0)
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

bool func_42(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			if (bParam0 == UNK_0x16F2683693E537C9())
			{
				*bParam1 = UNK_0x728870EB733D12A1();
			}
			else
			{
				*bParam1 = UNK_0x6937EA2286828455(bParam0, 1);
			}
			if (UNK_0xC844350D5D58C99A(*bParam1))
			{
				if (UNK_0xDF1306B443CD3D15(*bParam1, 0))
				{
					if (iParam2 == 0 || UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(*bParam1, true), UNK_0x68F4C0EC296D3901(bParam0, true), 1) < 100f)
					{
						if (UNK_0x4906F8A34E9F4814(*bParam1, joaat("TAXI")))
						{
							if (UNK_0xA30B8362589C124A(*bParam1, -1, 0) != bParam0 && UNK_0xA30B8362589C124A(*bParam1, -1, 0) != 0)
							{
								return false;
							}
						}
						if (func_43(*bParam1, func_105(), 1))
						{
							bVar0 = UNK_0xBB0808A181D4745C();
							if (!UNK_0x7F8A39872A07D2CE(bVar0, "save_anywhere"))
							{
								return false;
							}
							else if (!UNK_0x405E212DDE472467(bParam0, 1))
							{
								return false;
							}
						}
						if (iParam3 == 1)
						{
							if (UNK_0x30F813723591D02E(*bParam1, "IgnoredByQuickSave"))
							{
								if (UNK_0xB2C7CF65CF9B897C(*bParam1, "IgnoredByQuickSave"))
								{
									return false;
								}
							}
						}
						else if (UNK_0x4906F8A34E9F4814(*bParam1, joaat("BLIMP")))
						{
							return false;
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_43(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_44(iParam1, iVar0, &uVar1, &iVar9))
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

bool func_44(int iParam0, int iParam1, char* sParam2, int iParam3)
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

int func_45(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(bool bParam0)
{
	if (func_36(bParam0))
	{
		return func_47(bParam0);
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

var func_47(bool bParam0)
{
	return Global_1798[bParam0 /*29*/];
}

void func_48(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		bVar0 = func_45(bParam0);
		bVar1 = false;
		while (bVar1 < 12)
		{
			func_54(bParam0, bVar1, &(uParam1->f_13[bVar1]), uParam1[bVar1], &(uParam1->f_26[bVar1]), iParam2, 145);
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 9)
		{
			func_53(bParam0, bVar1, &(uParam1->f_39[bVar1]), &(uParam1->f_49[bVar1]), iParam2, 145);
			bVar1++;
		}
		if (func_36(bVar0))
		{
			uParam1->f_59 = Global_111638.f_2358.f_539[bVar0 /*65*/].f_59;
			uParam1->f_60 = Global_111638.f_2358.f_539[bVar0 /*65*/].f_60;
			uParam1->f_61 = Global_111638.f_2358.f_539[bVar0 /*65*/].f_61;
			uParam1->f_62 = Global_111638.f_2358.f_539[bVar0 /*65*/].f_62;
			uParam1->f_63 = Global_111638.f_2358.f_539[bVar0 /*65*/].f_63;
			uParam1->f_64 = Global_111638.f_2358.f_539[bVar0 /*65*/].f_64;
		}
		else if (UNK_0x8CD06866876216F2() && UNK_0x134B62B726CEC8E6(bParam0) == UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			if (func_52(161, iParam3))
			{
				uParam1->f_59 = func_49(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_49(752, iParam3, 0);
			}
			uParam1->f_60 = func_49(753, iParam3, 0);
			uParam1->f_61 = func_49(754, iParam3, 0);
		}
		if (UNK_0x8CD06866876216F2() && bParam0 == UNK_0x16F2683693E537C9())
		{
			if (func_52(161, iParam3))
			{
				uParam1->f_59 = func_49(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_49(752, iParam3, 0);
			}
		}
	}
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_50(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_51();
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

int func_51()
{
	return Global_1312745;
}

bool func_52(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_50(iParam1)];
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

void func_53(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;

	iVar0 = func_45(bParam0);
	if (bParam0 != 0)
	{
		*uParam2 = UNK_0x98F1B512A2CC07C5(bParam0, bParam1);
		*uParam3 = UNK_0x22286A85EDEAEC56(bParam0, bParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (bParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (bParam0 != 0)
			{
				if (UNK_0xDCCE25EA1C1D1F76(bParam0) && UNK_0x6BE6D34EA3F561AC(bParam0) != -1)
				{
					*uParam2 = UNK_0x6BE6D34EA3F561AC(bParam0);
					*uParam3 = UNK_0x7E1F0AD2CE37D34C(bParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (bParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (bParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		case 1:
			if (bParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		case 2:
			if (bParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_54(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;

	iVar0 = func_45(bParam0);
	if (bParam0 != 0)
	{
		*uParam2 = UNK_0x36C584991B4C183F(bParam0, bParam1);
		*uParam3 = UNK_0xDADA8E1DD0D0D9D9(bParam0, bParam1);
		*uParam4 = UNK_0xAA973E78065E07A0(bParam0, bParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		case 1:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		case 2:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_55()
{
	func_56();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_56()
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_46(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			bVar0 = func_45(UNK_0x16F2683693E537C9());
			if (func_36(bVar0) && (!func_57(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != bVar0 && func_36(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = bVar0;
				Global_111638.f_2358.f_539.f_4321 = bVar0;
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

bool func_57(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_58(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	bVar0 = func_45(bParam0);
	if (func_36(bVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (bParam0 == UNK_0x16F2683693E537C9())
		{
			func_59(bParam0, &(Global_111638.f_2358.f_539.f_298[bVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111638.f_2358.f_539.f_1730[iVar2 /*4*/][bVar0] = UNK_0x923C832C9AB56966(iVar2);
				if (bParam1)
				{
					iVar1 = UNK_0xFA91242148B28E7D();
					if (Global_111638.f_2358.f_539.f_1730[iVar2 /*4*/][bVar0] == iVar1)
					{
						Global_111638.f_2358.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			UNK_0x812D6591566D640E(UNK_0xD803B885F5E47A62(), &bVar3);
			if (bVar0 == 0)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP0_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
			else if (bVar0 == 1)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP1_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
			else if (bVar0 == 2)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP2_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
		}
	}
}

void func_59(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	bool bVar73;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_64(iVar0);
			if (iVar3 != 0)
			{
				Var4 = UNK_0x3F0B5EEC37A0EDD3(bParam0, func_64(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("WEAPON_UNARMED"))
				{
					Var4.f_1 = UNK_0xD2AEDBB0268DF71A(bParam0, Var4);
					if (Var4 == joaat("GADGET_PARACHUTE"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = UNK_0x7DD9FDEA5DFB355E(bParam0, Var4);
					Var4.f_4 = UNK_0x7F1C58A86289ED1A(bParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!UNK_0x9AEFFB8166364079(bParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					bVar1 = false;
					iVar2 = func_62(Var4, bVar1);
					while (iVar2 != 0)
					{
						if (UNK_0xAFB8387ED2D7213E(bParam0, Var4, iVar2))
						{
							UNK_0x5D96D8530B3D0904(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_62(Var4, bVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = UNK_0x4160B65AE085B5A9();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((UNK_0x310836EE7129BA33(iVar9, &Var11) && !func_61(Var11.f_1)) && iVar72 < 51)
			{
				if (!UNK_0x232048AB4B0E0259(Var11))
				{
					Var4 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = UNK_0xD2AEDBB0268DF71A(bParam0, Var4);
					if (UNK_0x440C646F2F11A2A1(bParam0, Var4, 0))
					{
						Var4.f_3 = UNK_0x7DD9FDEA5DFB355E(bParam0, Var4);
						Var4.f_4 = UNK_0x7F1C58A86289ED1A(bParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!UNK_0x9AEFFB8166364079(bParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					bVar73 = false;
					bVar1 = false;
					while (bVar1 < UNK_0xAD2A7A6DFF55841B(iVar9))
					{
						if (UNK_0x31D5E073B6F93CDC(iVar9, bVar1, &Var50))
						{
							if (!func_60(Var50.f_3))
							{
								if (UNK_0xAFB8387ED2D7213E(bParam0, Var4, Var50.f_3))
								{
									UNK_0x5D96D8530B3D0904(&(Var4.f_2), bVar73);
								}
								bVar73++;
							}
						}
						bVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!UNK_0x440C646F2F11A2A1(bParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

bool func_60(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return true;
	}
	return false;
}

bool func_61(int iParam0)
{
	if (UNK_0x8CD06866876216F2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return false;
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return false;
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return false;
			case joaat("WEAPON_BULLPUPRIFLE"):
				return false;
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return false;
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return false;
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return false;
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return false;
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return false;
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case -1523701417:
			case -2112826155:
			case -664359727:
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
				return true;
		}
	}
	return false;
}

int func_62(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_SMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_SMG_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 9:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_SR_SUPP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_KNUCKLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
		case joaat("WEAPON_MINISMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_63(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					bVar2 = false;
					while (bVar2 < UNK_0xA942498EEAA3EEAD(iVar1))
					{
						if (UNK_0x8B27EE8DAA2A39B3(iVar1, bVar2, &Var43))
						{
							if (!func_60(Var43.f_3))
							{
								if (iVar3 == bParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						bVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_63(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = UNK_0x037F36BEA9A47381();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (UNK_0x6532540B34EE6273(iVar0, iParam1))
		{
			if (iParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_64(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("SLOT_UNARMED");
			break;
		case 1:
			iVar0 = joaat("SLOT_KNIFE");
			break;
		case 2:
			iVar0 = joaat("SLOT_NIGHTSTICK");
			break;
		case 3:
			iVar0 = joaat("SLOT_HAMMER");
			break;
		case 4:
			iVar0 = joaat("SLOT_BAT");
			break;
		case 5:
			iVar0 = joaat("SLOT_CROWBAR");
			break;
		case 6:
			iVar0 = joaat("SLOT_GOLFCLUB");
			break;
		case 7:
			iVar0 = joaat("SLOT_STUNGUN");
			break;
		case 8:
			iVar0 = joaat("SLOT_PISTOL");
			break;
		case 9:
			iVar0 = joaat("SLOT_COMBATPISTOL");
			break;
		case 10:
			iVar0 = joaat("SLOT_APPISTOL");
			break;
		case 11:
			iVar0 = joaat("SLOT_MICROSMG");
			break;
		case 12:
			iVar0 = joaat("SLOT_SMG");
			break;
		case 13:
			iVar0 = joaat("SLOT_ASSAULTRIFLE");
			break;
		case 14:
			iVar0 = joaat("SLOT_CARBINERIFLE");
			break;
		case 15:
			iVar0 = joaat("SLOT_ADVANCEDRIFLE");
			break;
		case 16:
			iVar0 = joaat("SLOT_MG");
			break;
		case 17:
			iVar0 = joaat("SLOT_COMBATMG");
			break;
		case 18:
			iVar0 = joaat("SLOT_PUMPSHOTGUN");
			break;
		case 19:
			iVar0 = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
		case 20:
			iVar0 = joaat("SLOT_ASSAULTSHOTGUN");
			break;
		case 21:
			iVar0 = joaat("SLOT_SNIPERRIFLE");
			break;
		case 22:
			iVar0 = joaat("SLOT_HEAVYSNIPER");
			break;
		case 23:
			iVar0 = joaat("SLOT_GRENADELAUNCHER");
			break;
		case 24:
			iVar0 = joaat("SLOT_RPG");
			break;
		case 25:
			iVar0 = joaat("SLOT_MINIGUN");
			break;
		case 26:
			iVar0 = joaat("SLOT_GRENADE");
			break;
		case 27:
			iVar0 = joaat("SLOT_STICKYBOMB");
			break;
		case 28:
			iVar0 = joaat("SLOT_SMOKEGRENADE");
			break;
		case 29:
			iVar0 = joaat("SLOT_MOLOTOV");
			break;
		case 30:
			iVar0 = joaat("SLOT_FIREEXTINGUISHER");
			break;
		case 31:
			iVar0 = joaat("SLOT_PETROLCAN");
			break;
		case 33:
			iVar0 = joaat("SLOT_PARACHUTE");
			break;
		case 34:
			iVar0 = joaat("SLOT_DIGISCANNER");
			break;
		case 35:
			iVar0 = joaat("SLOT_OBJECT");
			break;
		case 36:
			iVar0 = joaat("SLOT_ASSAULTSMG");
			break;
		case 37:
			iVar0 = joaat("SLOT_BULLPUPSHOTGUN");
			break;
		case 38:
			iVar0 = joaat("SLOT_PISTOL50");
			break;
	}
	return iVar0;
}

void func_65(bool bParam0)
{
	bool bVar0;

	bVar0 = func_45(bParam0);
	if (func_36(bVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		Global_111638.f_2358.f_539.f_294[bVar0] = UNK_0x34460709B9A5160B(bParam0);
	}
}

void func_66(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;

	*uParam0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	uParam0->f_3 = UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9());
	uParam0->f_5 = UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9());
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		uParam0->f_4 = UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (UNK_0x8A22C4C08282BF26(joaat("FINALE_CHOICE")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == UNK_0x0D1736C2E221BCEA(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_70(&iVar0))
		{
			if (func_68(iVar0, &vVar1, &uVar4))
			{
				vVar1.f_2 = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar5 = func_105();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_67(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

bool func_67(vector3 vParam0, bool bParam3, vector3 vParam4)
{
	int iVar0;
	int iVar1;

	if (!UNK_0xD1BF3090E1F8300E(vParam0))
	{
		iVar0 = UNK_0x0D1736C2E221BCEA(vParam4, bParam3);
		if (!UNK_0x31609A585163CBAC(iVar0))
		{
			return false;
		}
		iVar1 = UNK_0x16804749AA17EEA8(vParam0);
		if (iVar1 == iVar0)
		{
			return true;
		}
	}
	return false;
}

bool func_68(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_69(*uParam1, 0f, 0f, 0f, 0);
}

bool func_69(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_70(int iParam0)
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (func_93())
		{
			*iParam0 = func_76(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), 6, -1, 0, 1, -1);
			if (func_75(*iParam0) && !func_71(*iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_71(int iParam0)
{
	return func_72(iParam0, 0, 1);
}

bool func_72(int iParam0, bool bParam1, bool bParam2)
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
		if (func_74() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_49(func_73(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

int func_73(int iParam0)
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

int func_74()
{
	return Global_30768;
}

bool func_75(int iParam0)
{
	return func_72(iParam0, 5, 1);
}

int func_76(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam3 == 6 || iParam3 == func_92(iVar0))
		{
			if (!bParam5 || func_91(iVar0))
			{
				fVar1 = UNK_0x0EB28750412C3A5A(vParam0, func_77(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (bParam6 || iVar0 != 21)) && iVar0 != iParam7)
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

Vector3 func_77(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
		case 4:
			return 1208.333f, -470.917f, 65.208f;
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		case 45:
			return func_88(Global_100839);
		case 46:
			if (Global_1590374 != func_87())
			{
				if (func_86(Global_1590374))
				{
					return func_79(2, 2);
				}
				else if (func_78(Global_1590374))
				{
					return func_79(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		case 47:
			return 510.1f, 4749.5f, -69f;
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
		case 50:
			return Global_1696048;
		case 51:
			return 1100f, 220f, -50f;
	}
	return 1000000f, 1000000f, 1000000f;
}

bool func_78(int iParam0)
{
	if (iParam0 != func_87())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, true)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 2))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_79(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar6;

	vVar6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_87())
	{
		if (iParam1 == 3)
		{
			if (func_80(iParam0, 1, &vVar0, 0, 0))
			{
				vVar6 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 4))
			{
				if (func_80(iParam0, 1, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 5))
			{
				if (func_80(iParam0, 2, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
		}
	}
	return vVar6;
}

bool func_80(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar6;
	struct<4> Var12;
	vector3 vVar18;

	if (!func_85(iParam3, &Var0))
	{
		return false;
	}
	if (!func_85(iParam1, &vVar6))
	{
		return false;
	}
	if (!bParam4)
	{
		Var12 = { func_83(iParam0) };
	}
	else
	{
		Var12 = { func_82(iParam0) };
	}
	vVar18 = { Var12 - Var0 };
	vVar18 = { func_81(vVar18, -Var0.f_3.f_2) };
	vVar18 = { func_81(vVar18, vVar6.f_3.f_2) };
	*uParam2 = { UNK_0x8A5E176FF719A014(vVar6, 0f, vVar18) };
	uParam2->f_3 = { Var12.f_3 };
	return true;
}

Vector3 func_81(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

struct<6> func_82(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_83(int iParam0)
{
	return func_84(iParam0);
}

struct<6> func_84(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

bool func_85(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		default:
			break;
	}
	return false;
}

bool func_86(int iParam0)
{
	if (iParam0 != func_87())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 3) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 4)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 5))
		{
			return true;
		}
	}
	return false;
}

int func_87()
{
	return -1;
}

Vector3 func_88(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
		case 2:
			return 1060f, -2990f, -35f;
		case 3:
			return 974.9542f, -3000.091f, -35f;
		case 6:
			return -1586.36f, -566.6f, 106.17f;
		case 7:
			return -1389.87f, -465.17f, 82.68f;
		case 8:
			return -145.81f, -590.2f, 171.13f;
		case 9:
			return -62.49f, -823.55f, 288.74f;
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
		case 10:
			return 1103.562f, -3000f, -40f;
		case 11:
			return 938.3077f, -3196.112f, -100f;
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
		case 13:
			return 520.0001f, 4750f, -70f;
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
		case 16:
			return -1421.015f, -3012.587f, -80f;
		case 17:
			if (func_89() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		default:
			return 0f, 0f, -200f;
	}
	return 0f, 0f, -200f;
}

int func_89()
{
	return func_90(UNK_0xD803B885F5E47A62());
}

int func_90(int iParam0)
{
	return UNK_0xDC4DD3980107166C(Global_2425662[iParam0 /*421*/].f_310.f_3, 28, 31);
}

bool func_91(int iParam0)
{
	return func_72(iParam0, 0, 0);
}

int func_92(int iParam0)
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

bool func_93()
{
	return Global_98796.f_345 > 0;
}

int func_94()
{
	var uVar0;

	func_104(&uVar0, UNK_0x4460E481B9E33ADA());
	func_103(&uVar0, UNK_0x8D199E381D262EEF());
	func_102(&uVar0, UNK_0xD8A54335F18763BA());
	func_97(&uVar0, UNK_0x972A296334C9D57B());
	func_96(&uVar0, UNK_0x118229AD063C3C1D());
	func_95(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_95(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_96(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_97(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_101(*uParam0);
	iVar1 = func_99(*uParam0);
	if (iParam1 < 1 || iParam1 > func_98(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_98(int iParam0, int iParam1)
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

int func_99(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_100(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_100(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_101(int iParam0)
{
	return iParam0 & 15;
}

void func_102(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_103(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_104(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_105()
{
	func_56();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_106(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];

	if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
	{
		uVar0 = iParam0;
		UNK_0x3CFFF3C8EACD8DC1(9, &uVar0, 1, 1);
	}
	else if (UNK_0xBA301E03A078FA59() || UNK_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		UNK_0x8DECFDD6715449E4(9, &cVar1);
	}
}

void func_107(char* sParam0, int iParam1, int iParam2)
{
	if (!UNK_0xEA6BC48857E0AC4C(&Global_95814))
	{
		UNK_0x73B08BBDEAC9B885(&Global_95814, 0, 0, 0, 1, 0);
		StringCopy(&Global_95814, "", 64);
	}
	StringCopy(&Global_95814, sParam0, 64);
	UNK_0x1AE6E2984A30CB9E(sParam0, iParam1, iParam2, func_108(0));
}

bool func_108(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

struct<2> func_109(int iParam0)
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

void func_110(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			func_111(bParam1, "Abigail1", func_9(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		case 1:
			func_111(bParam1, "Abigail2", func_9(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		case 2:
			func_111(bParam1, "Barry1", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		case 3:
			func_111(bParam1, "Barry2", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		case 4:
			func_111(bParam1, "Barry3", func_9(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		case 5:
			func_111(bParam1, "Barry3A", func_9(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 6:
			func_111(bParam1, "Barry3C", func_9(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 7:
			func_111(bParam1, "Barry4", func_9(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_112(iParam0), 0, 0);
			break;
		case 8:
			func_111(bParam1, "Dreyfuss1", func_9(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		case 9:
			func_111(bParam1, "Epsilon1", func_9(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_112(iParam0), 0, 0);
			break;
		case 10:
			func_111(bParam1, "Epsilon2", func_9(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		case 11:
			func_111(bParam1, "Epsilon3", func_9(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_112(iParam0), 0, 0);
			break;
		case 12:
			func_111(bParam1, "Epsilon4", func_9(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_112(iParam0), 0, 0);
			break;
		case 13:
			func_111(bParam1, "Epsilon5", func_9(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		case 14:
			func_111(bParam1, "Epsilon6", func_9(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 15:
			func_111(bParam1, "Epsilon7", func_9(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_112(iParam0), 0, 0);
			break;
		case 16:
			func_111(bParam1, "Epsilon8", func_9(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		case 17:
			func_111(bParam1, "Extreme1", func_9(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 18:
			func_111(bParam1, "Extreme2", func_9(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 19:
			func_111(bParam1, "Extreme3", func_9(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 20:
			func_111(bParam1, "Extreme4", func_9(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		case 21:
			func_111(bParam1, "Fanatic1", func_9(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_112(iParam0), 1, 0);
			break;
		case 22:
			func_111(bParam1, "Fanatic2", func_9(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_112(iParam0), 1, 0);
			break;
		case 23:
			func_111(bParam1, "Fanatic3", func_9(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_112(iParam0), 0, 1);
			break;
		case 24:
			func_111(bParam1, "Hao1", func_9(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_112(iParam0), 0, 1);
			break;
		case 25:
			func_111(bParam1, "Hunting1", func_9(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 26:
			func_111(bParam1, "Hunting2", func_9(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 27:
			func_111(bParam1, "Josh1", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		case 28:
			func_111(bParam1, "Josh2", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		case 29:
			func_111(bParam1, "Josh3", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		case 30:
			func_111(bParam1, "Josh4", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		case 31:
			func_111(bParam1, "Maude1", func_9(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 32:
			func_111(bParam1, "Minute1", func_9(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 33:
			func_111(bParam1, "Minute2", func_9(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 34:
			func_111(bParam1, "Minute3", func_9(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 35:
			func_111(bParam1, "MrsPhilips1", func_9(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 0);
			break;
		case 36:
			func_111(bParam1, "MrsPhilips2", func_9(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 0);
			break;
		case 37:
			func_111(bParam1, "Nigel1", func_9(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		case 38:
			func_111(bParam1, "Nigel1A", func_9(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		case 39:
			func_111(bParam1, "Nigel1B", func_9(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_112(iParam0), 1, 1);
			break;
		case 40:
			func_111(bParam1, "Nigel1C", func_9(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_112(iParam0), 1, 1);
			break;
		case 41:
			func_111(bParam1, "Nigel1D", func_9(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_112(iParam0), 1, 1);
			break;
		case 42:
			func_111(bParam1, "Nigel2", func_9(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		case 43:
			func_111(bParam1, "Nigel3", func_9(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		case 44:
			func_111(bParam1, "Omega1", func_9(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		case 45:
			func_111(bParam1, "Omega2", func_9(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		case 46:
			func_111(bParam1, "Paparazzo1", func_9(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 47:
			func_111(bParam1, "Paparazzo2", func_9(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 48:
			func_111(bParam1, "Paparazzo3", func_9(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		case 49:
			func_111(bParam1, "Paparazzo3A", func_9(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 50:
			func_111(bParam1, "Paparazzo3B", func_9(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 51:
			func_111(bParam1, "Paparazzo4", func_9(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		case 52:
			func_111(bParam1, "Rampage1", func_9(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_112(iParam0), 0, 0);
			break;
		case 54:
			func_111(bParam1, "Rampage3", func_9(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		case 55:
			func_111(bParam1, "Rampage4", func_9(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		case 56:
			func_111(bParam1, "Rampage5", func_9(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_112(iParam0), 0, 0);
			break;
		case 53:
			func_111(bParam1, "Rampage2", func_9(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		case 57:
			func_111(bParam1, "TheLastOne", func_9(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 58:
			func_111(bParam1, "Tonya1", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 59:
			func_111(bParam1, "Tonya2", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 60:
			func_111(bParam1, "Tonya3", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 61:
			func_111(bParam1, "Tonya4", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		case 62:
			func_111(bParam1, "Tonya5", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_111(bool bParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
{
	bParam0->f_4 = iParam5;
	*bParam0 = sParam1;
	bParam0->f_1 = { Param2 };
	bParam0->f_3 = iParam4;
	bParam0->f_5 = iParam6;
	bParam0->f_6 = { vParam7 };
	bParam0->f_9 = sParam10;
	StringCopy(&(bParam0->f_10), sParam11, 16);
	bParam0->f_14 = iParam12;
	bParam0->f_15 = sParam13;
	StringCopy(&(bParam0->f_16), sParam14, 24);
	bParam0->f_22 = iParam15;
	bParam0->f_23 = iParam16;
	bParam0->f_24 = iParam17;
	bParam0->f_25 = iParam18;
	bParam0->f_26 = iParam19;
	bParam0->f_27 = iParam20;
	bParam0->f_28 = iParam21;
	bParam0->f_29 = iParam22;
	bParam0->f_30 = iParam23;
	bParam0->f_31 = uParam24;
}

int func_112(int iParam0)
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

bool func_113(int iParam0)
{
	int iVar0;

	if (func_142(&(iParam0->f_1)))
	{
		if (!UNK_0xEA6BC48857E0AC4C(&(iParam0->f_9)))
		{
			func_132(1);
			func_130(iParam0, 1, func_131(*iParam0));
		}
		if (iParam0->f_27)
		{
			if (func_129(*iParam0))
			{
				while (!UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
				{
					func_143();
					SYSTEM::WAIT(0);
				}
			}
		}
		func_114(*iParam0);
		iVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(iParam0->f_1), iParam0, 61, 35000);
		UNK_0x5E8C29AE121DF1C7(&(iParam0->f_1));
		if (UNK_0x62A1F4500E8F07E0())
		{
			func_494("Initial cutscene loaded and passing to RC mission.");
			UNK_0x357FE4830F757FC1(iVar0);
		}
		else
		{
			func_494("Initial cutscene wasn't loaded in time to pass to RC mission.");
			UNK_0x5C8D148FC238F38A();
		}
		return true;
	}
	return false;
}

void func_114(int iParam0)
{
	struct<2> Var0;

	func_128();
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, false);
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 250, false);
	}
	if (func_127(iParam0))
	{
		UNK_0xE731059548189243(UNK_0x16F2683693E537C9(), 0);
	}
	UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
	UNK_0x11CCD0ACA866C6C5(false, 1);
	UNK_0x11CCD0ACA866C6C5(3, 1);
	UNK_0x11CCD0ACA866C6C5(2, 1);
	if (Global_42596 == 1)
	{
		if (func_126(UNK_0x16F2683693E537C9()))
		{
			func_117(UNK_0x16F2683693E537C9());
		}
	}
	if (!func_164())
	{
		if (iParam0 < 63)
		{
			func_115(iParam0);
			Var0 = { func_9(iParam0) };
			UNK_0x974531784BE14213(1, &Var0);
		}
	}
}

void func_115(int iParam0)
{
	if (iParam0 < 63)
	{
		func_116();
		Global_76877 = iParam0;
		Global_76876 = 0;
		Global_76879 = 7;
	}
}

void func_116()
{
	if (Global_76876 != 6)
	{
	}
	if (Global_76881)
	{
		UNK_0xA5E3ADAAA4CD5D6C(15);
		Global_76881 = 0;
		Global_22350.f_8417 = 0;
	}
	Global_76876 = 6;
	Global_76878 = -1;
	Global_76877 = -1;
}

void func_117(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam0 == 0)
	{
		return;
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return;
	}
	iVar0 = func_125(bParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0 /*5*/];
		func_120(1, iVar1, 1);
		return;
	}
	iVar2 = func_119(bParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_118(iVar2);
}

void func_118(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42357[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42357[iParam0 /*5*/].f_1 == UNK_0x16F2683693E537C9())
		{
			Global_42594 = 0;
		}
	}
	Global_42357[iParam0 /*5*/] = 13;
	Global_42357[iParam0 /*5*/].f_1 = 0;
	Global_42357[iParam0 /*5*/].f_2 = 0;
	Global_42357[iParam0 /*5*/].f_3 = 0;
	Global_42357[iParam0 /*5*/].f_4 = 0;
	Global_42355 = (Global_42355 - 1);
	if (Global_42355 < 0)
	{
		Global_42355 = 0;
	}
}

int func_119(bool bParam0)
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

void func_120(int iParam0, int iParam1, int iParam2)
{
	func_121(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_121(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_123(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_122();
	if (iVar0 == -1)
	{
		return;
	}
	Global_42464[iVar0 /*6*/] = iParam0;
	Global_42464[iVar0 /*6*/].f_1 = iParam1;
	Global_42464[iVar0 /*6*/].f_2 = iParam2;
	Global_42464[iVar0 /*6*/].f_3 = iParam3;
	Global_42464[iVar0 /*6*/].f_4 = iParam4;
	Global_42464[iVar0 /*6*/].f_5 = iParam5;
}

int func_122()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42464[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_123(int iParam0, int iParam1, int iParam2)
{
	if (func_124(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_124(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_42464[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_42464[iVar0 /*6*/])
			{
				if (iParam1 == Global_42464[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_125(bool bParam0)
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
		if (!Global_42383[iVar0 /*5*/] == -1)
		{
			if (bParam0 == Global_42383[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_126(bool bParam0)
{
	if (func_391(bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_127(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return false;
	}
	return true;
}

void func_128()
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
	UNK_0x0674E58A79778E99(&Global_7356, 25);
	UNK_0x5D96D8530B3D0904(&Global_7357, 11);
}

bool func_129(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return false;
	}
	return true;
}

void func_130(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_391(uParam0->f_28[iVar0]))
		{
			UNK_0xAA6B3A4292417750(uParam0->f_28[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_391(uParam0->f_35[iVar0]))
		{
			UNK_0xAA6B3A4292417750(uParam0->f_35[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_391(uParam0->f_41[iVar0]))
		{
			UNK_0xAA6B3A4292417750(uParam0->f_41[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xAA6B3A4292417750(UNK_0x16F2683693E537C9(), bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), bParam1);
		if (bParam2)
		{
			UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
		}
	}
}

bool func_131(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return false;
	}
	return true;
}

void func_132(bool bParam0)
{
	bool bVar0;

	bVar0 = UNK_0xA30EC016B12C03E4();
	if (!UNK_0x131F22FE6F47A65D(bVar0))
	{
		if (bParam0)
		{
		}
		UNK_0x98E4DC66A651C9FA(bVar0, bParam0, 16);
		UNK_0x98E4DC66A651C9FA(bVar0, bParam0, 32);
	}
	func_133(1, 1, 0, 0, 0, 0);
}

void func_133(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_141(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_140())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_139(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_141(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_139(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_137(UNK_0xD803B885F5E47A62())) && !func_135(UNK_0xD803B885F5E47A62(), 0)) && !func_134()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_137(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_134()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_135(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_136(-1, 0) == 8;
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

int func_136(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_51();
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

bool func_137(bool bParam0)
{
	if (func_135(bParam0, 0))
	{
		return true;
	}
	if (func_138())
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

bool func_138()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_139(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_140()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_141(int iParam0)
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

bool func_142(bool bParam0)
{
	if (!UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		UNK_0x92DCE5C81176D2B4(bParam0);
		while (!UNK_0x1FBF08B001C4788A(bParam0))
		{
			UNK_0x92DCE5C81176D2B4(bParam0);
			SYSTEM::WAIT(0);
		}
		return true;
	}
	func_494("Attempting to launch invalid script file [TERMINATING]");
	return false;
}

void func_143()
{
	func_148(0);
	func_147();
	func_144();
}

void func_144()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (func_145(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 10.5f, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
			{
				if (UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), -828834893) != 1)
				{
					UNK_0x75CDA8644CD3B5F5(UNK_0x16F2683693E537C9(), 0, 0);
				}
			}
		}
	}
}

bool func_145(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	UNK_0x38C3A68D7861DCFD(0, 71, 1);
	UNK_0x38C3A68D7861DCFD(0, 72, 1);
	UNK_0x38C3A68D7861DCFD(0, 76, 1);
	UNK_0x38C3A68D7861DCFD(0, 73, 1);
	UNK_0x38C3A68D7861DCFD(0, 59, 1);
	UNK_0x38C3A68D7861DCFD(0, 60, 1);
	if (bParam5)
	{
		UNK_0x38C3A68D7861DCFD(0, 75, 1);
	}
	UNK_0x38C3A68D7861DCFD(0, 80, 1);
	if (!bParam6)
	{
		UNK_0x38C3A68D7861DCFD(0, 69, 1);
		UNK_0x38C3A68D7861DCFD(0, 70, 1);
		UNK_0x38C3A68D7861DCFD(0, 68, 1);
	}
	UNK_0x38C3A68D7861DCFD(0, 74, 1);
	UNK_0x38C3A68D7861DCFD(0, 86, 1);
	UNK_0x38C3A68D7861DCFD(0, 81, 1);
	UNK_0x38C3A68D7861DCFD(0, 82, 1);
	UNK_0x38C3A68D7861DCFD(0, 138, 1);
	UNK_0x38C3A68D7861DCFD(0, 136, 1);
	UNK_0x38C3A68D7861DCFD(0, 114, 1);
	UNK_0x38C3A68D7861DCFD(0, 107, 1);
	UNK_0x38C3A68D7861DCFD(0, 110, 1);
	UNK_0x38C3A68D7861DCFD(0, 89, 1);
	UNK_0x38C3A68D7861DCFD(0, 89, 1);
	UNK_0x38C3A68D7861DCFD(0, 87, 1);
	UNK_0x38C3A68D7861DCFD(0, 88, 1);
	UNK_0x38C3A68D7861DCFD(0, 113, 1);
	UNK_0x38C3A68D7861DCFD(0, 115, 1);
	UNK_0x38C3A68D7861DCFD(0, 116, 1);
	UNK_0x38C3A68D7861DCFD(0, 117, 1);
	UNK_0x38C3A68D7861DCFD(0, 118, 1);
	UNK_0x38C3A68D7861DCFD(0, 119, 1);
	UNK_0x38C3A68D7861DCFD(0, 352, 1);
	UNK_0x38C3A68D7861DCFD(0, 131, 1);
	UNK_0x38C3A68D7861DCFD(0, 132, 1);
	UNK_0x38C3A68D7861DCFD(0, 123, 1);
	UNK_0x38C3A68D7861DCFD(0, 126, 1);
	UNK_0x38C3A68D7861DCFD(0, 129, 1);
	UNK_0x38C3A68D7861DCFD(0, 130, 1);
	UNK_0x38C3A68D7861DCFD(0, 133, 1);
	UNK_0x38C3A68D7861DCFD(0, 134, 1);
	UNK_0xCFAE3195DD6AE715();
	func_146(bParam0);
	if ((UNK_0x1C0640BA9A7327B3() - Global_29) > 500)
	{
		UNK_0xE0C0351D5B931E37(bParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = UNK_0x1C0640BA9A7327B3();
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x755FF954DAE327E1(UNK_0x9C66D99E63E8E24C(bParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

void func_146(bool bParam0)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x2668265160B1C0E5(bParam0))
		{
			if (UNK_0x08D499BC1F863857(bParam0))
			{
				UNK_0xF356D74F6AE75D16(bParam0, 0);
			}
		}
	}
}

void func_147()
{
	UNK_0x38C3A68D7861DCFD(0, 21, 1);
	UNK_0x38C3A68D7861DCFD(0, 37, 1);
	UNK_0x38C3A68D7861DCFD(0, 25, 1);
	UNK_0x38C3A68D7861DCFD(0, 141, 1);
	UNK_0x38C3A68D7861DCFD(0, 140, 1);
	UNK_0x38C3A68D7861DCFD(0, 24, 1);
	UNK_0x38C3A68D7861DCFD(0, 257, 1);
	UNK_0x38C3A68D7861DCFD(0, 22, 1);
	UNK_0x38C3A68D7861DCFD(0, 23, 1);
}

void func_148(int iParam0)
{
	if (func_153())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_152(0))
		{
			func_149(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_149(int iParam0)
{
	if (func_153())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_151())
		{
			func_150(1, 1);
		}
		else
		{
			func_150(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		UNK_0x5D96D8530B3D0904(&Global_7357, 16);
	}
	if (UNK_0x1EE04CEA36EF313B())
	{
		UNK_0x5CEB4DB888A62073(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7356, 30);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7356, 30);
	}
	if (!func_140())
	{
		Global_19486.f_1 = 3;
	}
}

void func_150(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_152(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				UNK_0x1CFAC524932A967E(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			UNK_0x39F06A2B18483C68(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			UNK_0x39F06A2B18483C68(Global_19423);
		}
		else
		{
			UNK_0x39F06A2B18483C68(Global_19414);
		}
	}
}

bool func_151()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_152(int iParam0)
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

bool func_153()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_154(int iParam0)
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return true;
	}
	return false;
}

bool func_155(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iParam0 = func_162();
	}
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_157(&(Global_110725[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return false;
	}
	func_156(iParam0);
	return true;
}

void func_156(int iParam0)
{
	Global_110725[iParam0 /*10*/].f_4 = 1;
	Global_110725[iParam0 /*10*/].f_5 = 0;
	Global_110725[iParam0 /*10*/].f_6 = 0;
	Global_110725[iParam0 /*10*/] = 0;
}

int func_157(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_161(0))
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
		if (!func_159(iParam2))
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
			func_158(uParam0, iParam4);
		}
	}
	return 2;
}

void func_158(var uParam0, int iParam1)
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

bool func_159(int iParam0)
{
	return func_160(iParam0, Global_41431);
}

int func_160(int iParam0, int iParam1)
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

bool func_161(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_159(iParam0))
	{
		return false;
	}
	return true;
}

int func_162()
{
	return func_163(UNK_0xBB0808A181D4745C(), 0);
}

int func_163(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar33;
	int iVar34;

	iVar33 = UNK_0x12AB0310C2281427(bParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_110(iVar0, &bVar1);
		if (UNK_0x12AB0310C2281427(bVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

bool func_164()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return true;
	}
	return false;
}

void func_165(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = func_166(-1604.668f, 5239.1f, 3.01f, 0);
			UNK_0xBC8E0A7390523199(*iParam1, 66);
			UNK_0x61755AC17D8F538E(*iParam1, 42);
			break;
		case 1:
			*iParam1 = func_166(-1592.84f, 5214.04f, 3.01f, 0);
			UNK_0xBC8E0A7390523199(*iParam1, 400);
			UNK_0x61755AC17D8F538E(*iParam1, 42);
			break;
		case 2:
		case 3:
			*iParam1 = func_166(190.26f, -956.35f, 29.63f, 0);
			if ((UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[2 /*6*/], 3) || UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[4 /*6*/], 3)) || UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[4 /*6*/], 3))
			{
				UNK_0xBC8E0A7390523199(*iParam1, 381);
			}
			else
			{
				UNK_0xBC8E0A7390523199(*iParam1, 66);
			}
			if (iParam0 == 2)
			{
				UNK_0x61755AC17D8F538E(*iParam1, 42);
			}
			else
			{
				UNK_0x61755AC17D8F538E(*iParam1, 44);
			}
			break;
		case 4:
			*iParam1 = func_166(414f, -761f, 29f, 0);
			if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[2 /*6*/], 3) || UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[3 /*6*/], 3))
			{
				UNK_0xBC8E0A7390523199(*iParam1, 381);
			}
			else
			{
				UNK_0xBC8E0A7390523199(*iParam1, 66);
			}
			UNK_0x61755AC17D8F538E(*iParam1, 43);
			break;
		case 9:
			*iParam1 = func_166(-1622.89f, 4204.87f, 83.3f, 0);
			UNK_0xBC8E0A7390523199(*iParam1, 66);
			UNK_0x61755AC17D8F538E(*iParam1, 42);
			break;
		case 11:
		case 12:
		case 13:
			if (iParam0 == 11)
			{
				*iParam1 = func_166(1835.53f, 4705.86f, 38.1f, 0);
			}
			else if (iParam0 == 12)
			{
				*iParam1 = func_166(1826.13f, 4698.88f, 38.92f, 0);
			}
			else
			{
				*iParam1 = func_166(637.02f, 119.7093f, 89.5f, 0);
			}
			UNK_0xBC8E0A7390523199(*iParam1, 206);
			UNK_0x61755AC17D8F538E(*iParam1, 42);
			break;
		case 18:
		case 19:
			if (iParam0 == 18)
			{
				*iParam1 = func_166(-954.19f, -2760.05f, 14.64f, 0);
			}
			else
			{
				*iParam1 = func_166(-63.8f, -809.5f, 321.8f, 0);
			}
			UNK_0xBC8E0A7390523199(*iParam1, 382);
			UNK_0x61755AC17D8F538E(*iParam1, 43);
			break;
		case 21:
		case 23:
			if (iParam0 == 21)
			{
				*iParam1 = func_166(-1877.82f, -440.649f, 45.05f, 0);
			}
			else
			{
				*iParam1 = func_166(-915.6f, 6139.2f, 5.5f, 0);
			}
			if ((UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[21 /*6*/], 3) || UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[22 /*6*/], 3)) || UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[23 /*6*/], 3))
			{
				UNK_0xBC8E0A7390523199(*iParam1, 405);
			}
			else
			{
				UNK_0xBC8E0A7390523199(*iParam1, 66);
			}
			if (iParam0 == 21)
			{
				UNK_0x61755AC17D8F538E(*iParam1, 42);
			}
			else
			{
				UNK_0x61755AC17D8F538E(*iParam1, 43);
			}
			break;
		case 27:
			*iParam1 = func_166(-1104.93f, 291.25f, 64.3f, 0);
			UNK_0xBC8E0A7390523199(*iParam1, 66);
			UNK_0x61755AC17D8F538E(*iParam1, 44);
			break;
		case 30:
			*iParam1 = func_166(-1104.93f, 291.25f, 64.3f, 0);
			UNK_0xBC8E0A7390523199(*iParam1, 385);
			UNK_0x61755AC17D8F538E(*iParam1, 44);
			break;
		case 34:
			*iParam1 = func_166(-303.82f, 6211.29f, 31.05f, 0);
			UNK_0xBC8E0A7390523199(*iParam1, 386);
			UNK_0x61755AC17D8F538E(*iParam1, 44);
			break;
		case 43:
			*iParam1 = func_166(-44.75f, -1288.67f, 28.21f, 0);
			UNK_0xBC8E0A7390523199(*iParam1, 149);
			UNK_0x61755AC17D8F538E(*iParam1, 44);
			break;
		case 46:
			*iParam1 = func_166(-149.75f, 285.81f, 93.67f, 0);
			UNK_0xBC8E0A7390523199(*iParam1, 66);
			UNK_0x61755AC17D8F538E(*iParam1, 43);
			break;
		case 47:
		case 48:
			if (iParam0 == 47)
			{
				*iParam1 = func_166(-70.71f, 301.43f, 106.79f, 0);
			}
			else
			{
				*iParam1 = func_166(-257.22f, 292.85f, 90.63f, 0);
			}
			UNK_0xBC8E0A7390523199(*iParam1, 389);
			UNK_0x61755AC17D8F538E(*iParam1, 43);
			break;
	}
}

int func_166(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_167(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

float func_167(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_168(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 9:
		case 11:
		case 12:
		case 13:
		case 18:
		case 19:
		case 21:
		case 23:
		case 27:
		case 30:
		case 34:
		case 43:
		case 46:
		case 47:
		case 48:
			return true;
	}
	return false;
}

void func_169(var uParam0, int iParam1)
{
	if (*iParam1)
	{
		switch (*uParam0)
		{
			case 15:
				func_494("Need to wear robes to launch Epsilon 7...");
				func_171("BADSUIT_HELP", "OUTFIT_P0_11", -1);
				*iParam1 = 0;
				break;
			case 16:
				func_494("Need robes and $ to launch Epsilon 8...");
				func_170("NOCASH_HELP", "OUTFIT_P0_11", 50000, -1);
				*iParam1 = 0;
				break;
			default:
				func_494("Tried to show help text for invalid mission");
				break;
		}
	}
}

void func_170(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0x6D99DF8263D35CE5(bParam2);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam3);
}

void func_171(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam2);
}

bool func_172(var uParam0)
{
	switch (*uParam0)
	{
		case 15:
			return func_321(*uParam0);
		case 16:
			if (func_108(0))
			{
				func_320(joaat("PLAYER_ZERO"), 12, 28, 1);
				func_319(joaat("PLAYER_ZERO"), 12, 28, 1, 1);
				func_207(UNK_0x16F2683693E537C9(), 12, 28, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_174(0, 1, 50000, 0, 0);
			}
			if (func_173(0) >= 50000 || Global_111638.f_18569.f_387 == 1)
			{
				return func_321(*uParam0);
			}
			else
			{
				return false;
			}
			break;
	}
	return true;
}

int func_173(int iParam0)
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

void func_174(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (func_206(iParam0) == 3)
	{
		return;
	}
	if (func_206(iParam0) == 4)
	{
		return;
	}
	func_175(func_206(iParam0), 1, iParam1, iParam2, 0);
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

int func_175(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_205();
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
					func_204(99, 1);
					func_203(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_203(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_203(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_188(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_184(5))
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
							func_203(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_203(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_203(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_184(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_203(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_203(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_203(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_203(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_203(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_203(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_203(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_203(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_203(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_203(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_203(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_203(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_203(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_203(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_203(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_184(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_203(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_203(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_203(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_203(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_203(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_203(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_183(iParam3);
							break;
					}
					break;
			}
			Jump @1125; //curOff = 1053
			switch (iParam0)
			{
				case 0:
					func_204(95, iParam3);
					break;
				case 1:
					func_204(97, iParam3);
					break;
				case 2:
					func_204(96, iParam3);
					break;
			}
			func_204(98, iParam3);
			iVar2 = iParam0;
			iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
			iVar3 = 0;
			iVar4 = iParam3;
			if (fVar0 == 0f)
			{
				func_178(bVar1);
				return 1;
			}
			else if (fVar0 != 1f)
			{
				func_178(bVar1);
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
							func_203(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
							break;
						case 1:
							func_203(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
							break;
						case 2:
							func_203(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
			func_177(iParam0);
			if (Global_41431 == 15)
			{
				func_176(0);
			}
			return 1;
		}

void func_176(bool bParam0)
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

void func_177(int iParam0)
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

void func_178(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_182(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_182(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_182(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_182(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_181(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_181(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_181(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_181(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_181(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_181(8274, 0, -1, 1, 0);
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
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_180() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_180() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_179(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_179(bool bParam0)
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

int func_180()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_181(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_50(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_182(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_51();
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

void func_183(int iParam0)
{
	func_204(93, iParam0);
	func_204(29, iParam0);
	func_204(30, iParam0);
}

bool func_184(bool bParam0)
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
		return func_185(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_185(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_185(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_185(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_49(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_49(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_49(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_49(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_49(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_49(8274, -1, 0);
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
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_180() /*10930*/].f_6174.f_10, bParam0);
}

int func_185(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_51();
	}
	iVar1 = func_187(iParam0, bParam1);
	iVar2 = func_186(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_186(int iParam0)
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

int func_187(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_51();
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

int func_188(bool bParam0)
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
		func_202(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_189(27, 1);
	return 1;
}

int func_189(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_190(iParam0, iParam1);
}

int func_190(int iParam0, int iParam1)
{
	if (func_57(14) && !func_201(iParam0))
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
	if (func_200(&Global_4270065))
	{
		if (func_198(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_191(&Global_4270065, iParam0))
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

bool func_191(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_57(14) && !func_201(iParam1))
	{
		return false;
	}
	if (func_198(uParam0, iParam1))
	{
		return false;
	}
	if (func_197(uParam0) < 0f)
	{
		func_196(uParam0, 0);
	}
	func_194(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_192(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_192(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_57(14) && !func_201(iParam1))
	{
		return 0;
	}
	if (func_198(uParam0, iParam1))
	{
		return 0;
	}
	if (func_197(uParam0) < 0f)
	{
		func_196(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_193(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_193(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_194(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_195(uParam0, iVar0);
		iVar0++;
	}
	func_196(uParam0, (Global_4270064 - 0.5f));
}

void func_195(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_196(var uParam0, float fParam1)
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

float func_197(var uParam0)
{
	return uParam0->f_80;
}

bool func_198(var uParam0, int iParam1)
{
	return func_199(uParam0, iParam1) != -1;
}

int func_199(var uParam0, int iParam1)
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

bool func_200(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_201(int iParam0)
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

int func_202(int iParam0, bool bParam1)
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

void func_203(int iParam0, int iParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

void func_204(int iParam0, int iParam1)
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

void func_205()
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

int func_206(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_207(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	var uVar11;
	var uVar28;
	var uVar38;
	struct<14> Var55;
	var uVar69;

	if (UNK_0xEB6A8945D1AC98A1(bParam0) || bParam2 == -99)
	{
		return 0;
	}
	Global_76432++;
	bVar5 = -99;
	bVar6 = -99;
	bVar7 = -99;
	bVar8 = -99;
	bVar9 = -99;
	iVar10 = UNK_0x134B62B726CEC8E6(bParam0);
	if (iParam5 == 0)
	{
		Global_76434[1 /*14*/] = { func_255(iVar10, iParam1, bParam2, -1) };
		if (!func_254(iParam3))
		{
			Global_76432 = (Global_76432 - 1);
			return 0;
		}
		func_250(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("PLAYER_ONE"))
			{
				bVar5 = func_248(bParam0, 8);
				if (bVar5 != 9)
				{
					bVar5 = -99;
				}
			}
			bVar6 = func_248(bParam0, 9);
			if (iVar10 == joaat("PLAYER_ZERO"))
			{
				if (bVar6 >= 9 && bVar6 <= 14)
				{
				}
				else
				{
					bVar6 = -99;
				}
			}
			else if (iVar10 == joaat("PLAYER_ONE"))
			{
				if (bVar6 >= 5 && bVar6 <= 10)
				{
				}
				else
				{
					bVar6 = -99;
				}
			}
			else if (iVar10 == joaat("PLAYER_TWO"))
			{
				if ((bVar6 >= 9 && bVar6 <= 14) || (bVar6 >= 15 && bVar6 <= 16))
				{
				}
				else
				{
					bVar6 = -99;
				}
			}
			bVar7 = func_247(bParam0, 1);
			if (!func_246(iVar10, 14, bVar7, -1))
			{
				bVar7 = -99;
			}
			bVar8 = func_247(bParam0, 0);
			if (!func_245(iVar10, 14, bVar8, -1) && !func_244(iVar10, 14, bVar8, -1))
			{
				bVar8 = -99;
			}
			if (iVar10 == joaat("PLAYER_ONE"))
			{
				bVar9 = func_247(bParam0, 2);
			}
		}
		UNK_0xFFE16595F5CF81E9(bParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_76477 };
		}
		else
		{
			uVar11 = { func_240(iVar10, bParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_76434[1 /*14*/] = { func_255(iVar10, iVar0, uVar11[iVar0], -1) };
				if (UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, false))
				{
					if (iVar0 == 13)
					{
						uVar28 = 9;
						if (iParam5 == 1)
						{
							uVar28 = { Global_76494 };
						}
						else
						{
							uVar28 = { func_237(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_76434[1 /*14*/] = { func_255(iVar10, 14, uVar28[iVar1], -1) };
							func_228(bParam0, Global_76434[1 /*14*/].f_12, Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4);
							func_250(14);
							if (Global_76432 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									bVar3 = func_220(bParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
									if (bVar3 != -99)
									{
										func_207(bParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("PLAYER_ONE") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_219(iVar10, 2, 20, &bVar4);
						}
						if (iParam4 == -1)
						{
							UNK_0x64F9F278AB9DCA2C(bParam0, func_218(iVar0), Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4, UNK_0xAA973E78065E07A0(bParam0, func_218(iVar0)));
						}
						else
						{
							UNK_0x64F9F278AB9DCA2C(bParam0, func_218(iVar0), Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4, iParam4);
						}
						func_250(iVar0);
						if (Global_76432 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								bVar3 = func_220(bParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (bVar3 != -99)
								{
									func_207(bParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_76434[1 /*14*/] = { func_255(iVar10, iVar0, func_217(bParam0, iVar0, -1), -1) };
				if (UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("PLAYER_ONE"))
						{
							if (func_216(bParam0, iVar10, &bVar4, 1))
							{
								func_207(bParam0, 2, bVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar38 = { func_240(iVar10, 0) };
						func_207(bParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var55 = { func_255(iVar10, 8, bVar5, -1) };
			if (bVar5 != -99)
			{
				if (func_214(iVar10, bParam2, 8, bVar5, &uVar11, &Var55))
				{
					func_207(bParam0, 8, bVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_255(iVar10, 9, bVar6, -1) };
			if (bVar6 != -99)
			{
				if (func_214(iVar10, bParam2, 9, bVar6, &uVar11, &Var55))
				{
					func_207(bParam0, 9, bVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_255(iVar10, 14, bVar7, -1) };
			if (bVar7 != -99)
			{
				if (func_214(iVar10, bParam2, 14, bVar7, &uVar11, &Var55))
				{
					func_207(bParam0, 14, bVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_255(iVar10, 14, bVar8, -1) };
			if (bVar8 != -99)
			{
				if (func_214(iVar10, bParam2, 14, bVar8, &uVar11, &Var55))
				{
					func_207(bParam0, 14, bVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_255(iVar10, 14, bVar9, -1) };
			if (bVar9 != -99)
			{
				if (func_214(iVar10, bParam2, 14, bVar9, &uVar11, &Var55))
				{
					func_207(bParam0, 14, bVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar69 = { func_237(iVar10, bParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_76434[1 /*14*/] = { func_255(iVar10, 14, uVar69[iVar1], -1) };
			func_228(bParam0, Global_76434[1 /*14*/].f_12, Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4);
			func_250(14);
			if (Global_76432 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					bVar3 = func_220(bParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
					if (bVar3 != -99)
					{
						func_207(bParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_228(bParam0, Global_76434[1 /*14*/].f_12, Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4);
		func_250(iParam1);
		if (Global_76432 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				bVar3 = func_220(bParam0, iVar10, iParam1, bParam2, iVar2, 0);
				if (bVar3 != -99)
				{
					func_207(bParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			UNK_0x64F9F278AB9DCA2C(bParam0, func_218(iParam1), Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4, UNK_0xAA973E78065E07A0(bParam0, func_218(iParam1)));
		}
		else
		{
			UNK_0x64F9F278AB9DCA2C(bParam0, func_218(iParam1), Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4, iParam4);
		}
		if (Global_76432 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				bVar3 = func_220(bParam0, iVar10, iParam1, bParam2, iVar2, 0);
				if (bVar3 != -99)
				{
					func_207(bParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_211(iVar10, iParam1, bParam2);
		}
	}
	if (Global_76432 == 1)
	{
		if (func_216(bParam0, iVar10, &bVar4, 0))
		{
			func_207(bParam0, 2, bVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_208(bParam0, iVar10, &bVar4))
		{
			func_207(bParam0, 1, bVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_76432 = (Global_76432 - 1);
	return 1;
}

bool func_208(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_210(iParam1);
	if (Global_111638.f_2358.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_209(bParam0, Global_111638.f_2358.f_539[iVar0 /*65*/].f_64, Global_111638.f_2358.f_539[iVar0 /*65*/].f_63))
		{
			*bParam2 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_62;
			Global_111638.f_2358.f_539[iVar0 /*65*/].f_63 = -99;
			Global_111638.f_2358.f_539[iVar0 /*65*/].f_64 = 1;
			return true;
		}
	}
	return false;
}

bool func_209(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	var uVar22;
	int iVar32;
	var uVar33;

	if (UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		return false;
	}
	iVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	Global_76434[1 /*14*/] = { func_255(iVar0, iParam1, bParam2, -1) };
	if (!UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, false))
	{
		return false;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_240(iVar0, bParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_209(bParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar22 = { func_237(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_209(bParam0, 14, uVar22[iVar3]))
							{
								bVar4 = false;
								while (bVar4 <= 19)
								{
									Global_76434[2 /*14*/] = { func_255(iVar0, 14, bVar4, -1) };
									if (Global_76434[2 /*14*/].f_12 == iVar3)
									{
										if (func_209(bParam0, 14, bVar4))
										{
											if (!func_214(iVar0, bParam2, 14, bVar4, &uVar5, &(Global_76434[2 /*14*/])))
											{
												return false;
											}
										}
									}
									bVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						bVar1 = func_248(bParam0, iVar2);
						Global_76434[2 /*14*/] = { func_255(iVar0, iVar2, bVar1, -1) };
						if (!func_214(iVar0, bParam2, iVar2, bVar1, &uVar5, &(Global_76434[2 /*14*/])))
						{
							return false;
						}
					}
				}
			}
			iVar2++;
		}
		return true;
	}
	else if (iParam1 == 13)
	{
		uVar33 = { func_237(iVar0, bParam2) };
		iVar32 = 0;
		while (iVar32 <= 8)
		{
			if (!func_209(bParam0, 14, uVar33[iVar32]))
			{
				return false;
			}
			iVar32++;
		}
		return true;
	}
	else if (iParam1 == 14)
	{
		if (UNK_0x98F1B512A2CC07C5(bParam0, Global_76434[1 /*14*/].f_12) == Global_76434[1 /*14*/].f_3 && (UNK_0x22286A85EDEAEC56(bParam0, Global_76434[1 /*14*/].f_12) == Global_76434[1 /*14*/].f_4 || Global_76434[1 /*14*/].f_3 == -1))
		{
			return true;
		}
	}
	else if (Global_76434[1 /*14*/].f_3 == UNK_0x36C584991B4C183F(bParam0, func_218(iParam1)) && Global_76434[1 /*14*/].f_4 == UNK_0xDADA8E1DD0D0D9D9(bParam0, func_218(iParam1)))
	{
		return true;
	}
	return false;
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			return 0;
		case joaat("PLAYER_ONE"):
			return 1;
		case joaat("PLAYER_TWO"):
			return 2;
		default:
			break;
	}
	return 145;
}

void func_211(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (iParam0 == joaat("PLAYER_ZERO"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("PLAYER_ONE"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("PLAYER_TWO"))
	{
		iVar0 = 4;
	}
	if (func_213(iParam0, 12, iVar0))
	{
		if (func_212(iParam0, iParam1, bParam2))
		{
			iVar1 = func_210(iParam0);
			if (iParam1 == 3)
			{
				Global_111638.f_2358.f_539.f_196[iVar1] = bParam2;
			}
			else if (iParam1 == 4)
			{
				Global_111638.f_2358.f_539.f_200[iVar1] = bParam2;
			}
		}
	}
}

bool func_212(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == joaat("PLAYER_ZERO"))
	{
		if (iParam1 == 4)
		{
			if (bParam2 >= 47 && bParam2 <= 54)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (bParam2 >= 77 && bParam2 <= 84)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("PLAYER_ONE"))
	{
		if (iParam1 == 4)
		{
			if (bParam2 >= 14 && bParam2 <= 21)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (bParam2 >= 41 && bParam2 <= 56)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("PLAYER_TWO"))
	{
		if (iParam1 == 4)
		{
			if (bParam2 >= 18 && bParam2 <= 29)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (bParam2 >= 54 && bParam2 <= 69)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_213(int iParam0, int iParam1, bool bParam2)
{
	Global_76434[1 /*14*/] = { func_255(iParam0, iParam1, bParam2, -1) };
	return UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 2);
}

bool func_214(int iParam0, bool bParam1, int iParam2, bool bParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;

	if ((*uParam4)[iParam2] == bParam3)
	{
		return true;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return true;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((bParam3 == 0 || bParam3 == 1) || bParam3 == 2) || bParam3 == 3) || bParam3 == 4) || bParam3 == 5) || bParam3 == 6) || bParam3 == 7) || bParam3 == 8)
		{
			return true;
		}
	}
	if (bParam3 == -99 || uParam5->f_1 == -1)
	{
		return true;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_237(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == bParam3)
			{
				return true;
			}
			iVar10++;
		}
	}
	if (func_215(iParam0, iParam2, bParam3))
	{
		return true;
	}
	if (iParam0 == joaat("PLAYER_ZERO"))
	{
		if (func_246(iParam0, iParam2, bParam3, -1))
		{
			if ((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 10) || bParam1 == 11) || bParam1 == 12) || bParam1 == 18) || bParam1 == 50)
			{
				return false;
			}
			return true;
		}
		else if (func_245(iParam0, iParam2, bParam3, -1))
		{
			if (((((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 4) || bParam1 == 5) || bParam1 == 10) || bParam1 == 11) || bParam1 == 12) || bParam1 == 14) || bParam1 == 18) || bParam1 == 50)
			{
				return false;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return false;
				}
			}
			return true;
		}
		else if (func_244(iParam0, iParam2, bParam3, -1))
		{
			if (((((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 4) || bParam1 == 5) || bParam1 == 10) || bParam1 == 11) || bParam1 == 12) || bParam1 == 14) || bParam1 == 18) || bParam1 == 50)
			{
				return false;
			}
			return true;
		}
	}
	else if (iParam0 == joaat("PLAYER_ONE"))
	{
		if (func_246(iParam0, iParam2, bParam3, -1))
		{
			if ((bParam1 == 3 || bParam1 == 5) || bParam1 == 7)
			{
				return false;
			}
			return true;
		}
		else if (func_245(iParam0, iParam2, bParam3, -1))
		{
			if ((((bParam1 == 3 || bParam1 == 5) || bParam1 == 7) || bParam1 == 8) || bParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (bParam3 == 9)
					{
						if (bParam1 == 8 || bParam1 == 21)
						{
							return true;
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return false;
				}
				if (((bParam1 == 43 || bParam1 == 44) || bParam1 == 45) || bParam1 == 46)
				{
					if (bParam3 >= 5 && bParam3 <= 10)
					{
						return false;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((bParam1 == 43 || bParam1 == 44) || bParam1 == 45) || bParam1 == 46)
				{
					if (bParam3 >= 26 && bParam3 <= 39)
					{
						return false;
					}
				}
			}
			return true;
		}
		else if (func_244(iParam0, iParam2, bParam3, -1))
		{
			if (((((bParam1 == 3 || bParam1 == 3) || bParam1 == 5) || bParam1 == 7) || bParam1 == 8) || bParam1 == 21)
			{
				return false;
			}
			return true;
		}
		else if (iParam2 == 14)
		{
			if (bParam3 >= 159 && bParam3 <= 174)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("PLAYER_TWO"))
	{
		if (bParam1 == 2)
		{
			if (iParam2 == 14 && bParam3 == 0)
			{
				return true;
			}
		}
		if (func_246(iParam0, iParam2, bParam3, -1))
		{
			if (((((bParam1 == 1 || bParam1 == 2) || bParam1 == 6) || bParam1 == 8) || bParam1 == 45) || bParam1 == 12)
			{
				return false;
			}
			return true;
		}
		else if (func_245(iParam0, iParam2, bParam3, -1))
		{
			if (((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 3) || bParam1 == 6) || bParam1 == 8) || bParam1 == 11) || bParam1 == 45) || bParam1 == 12)
			{
				return false;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return false;
				}
			}
			return true;
		}
		else if (func_244(iParam0, iParam2, bParam3, -1))
		{
			if ((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 3) || bParam1 == 6) || bParam1 == 8) || bParam1 == 11) || bParam1 == 12)
			{
				return false;
			}
			return true;
		}
	}
	return false;
}

bool func_215(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 15)
					{
						return true;
					}
					break;
				case 9:
					if (bParam2 == 6)
					{
						return true;
					}
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 1 || bParam2 == 10)
					{
						return true;
					}
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 4)
					{
						return true;
					}
					break;
			}
			break;
	}
	return false;
}

bool func_216(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_210(iParam1);
	if (Global_111638.f_2358.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_209(bParam0, Global_111638.f_2358.f_539[iVar0 /*65*/].f_61, Global_111638.f_2358.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*bParam2 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_59;
			Global_111638.f_2358.f_539[iVar0 /*65*/].f_60 = -99;
			Global_111638.f_2358.f_539[iVar0 /*65*/].f_61 = 2;
			return true;
		}
	}
	return false;
}

int func_217(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (iParam1 == 12)
		{
			bVar0 = false;
			while (bVar0 <= 53)
			{
				if (func_209(bParam0, iParam1, bVar0))
				{
					return bVar0;
				}
				bVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			bVar1 = false;
			while (bVar1 <= 19)
			{
				if (func_209(bParam0, iParam1, bVar1))
				{
					return bVar1;
				}
				bVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (bParam2 == -1)
			{
			}
			else
			{
				return func_247(bParam0, bParam2);
			}
		}
		else
		{
			return func_248(bParam0, iParam1);
		}
	}
	return -99;
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 6:
			return 6;
		case 5:
			return 5;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 1:
			return 1;
		case 7:
			return 7;
		case 11:
			return 11;
	}
	return 0;
}

int func_219(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	*bParam3 = -99;
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 7 || bParam2 == 23)
					{
						*bParam3 = 1;
					}
					break;
				case 9:
					if (bParam2 == 8 || (bParam2 >= 9 && bParam2 <= 14))
					{
						*bParam3 = 1;
					}
					break;
				case 10:
					if (bParam2 >= 44 && bParam2 <= 47)
					{
						*bParam3 = 1;
					}
					break;
				case 14:
					if ((((((bParam2 >= 31 && bParam2 <= 32) || (bParam2 >= 33 && bParam2 <= 34)) || (bParam2 >= 35 && bParam2 <= 36)) || bParam2 == 37) || (bParam2 >= 40 && bParam2 <= 41)) || bParam2 == 46)
					{
						*bParam3 = 1;
					}
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 2:
					if (bParam2 == 20)
					{
						*bParam3 = 20;
					}
					break;
				case 8:
					if (bParam2 == 4)
					{
						*bParam3 = 19;
					}
					break;
				case 9:
					if (bParam2 >= 5 && bParam2 <= 10)
					{
						*bParam3 = 19;
					}
					break;
				case 10:
					if (bParam2 >= 47 && bParam2 <= 50)
					{
						*bParam3 = 19;
					}
					break;
				case 14:
					if (((((bParam2 >= 26 && bParam2 <= 27) || (bParam2 >= 28 && bParam2 <= 29)) || (bParam2 >= 30 && bParam2 <= 31)) || bParam2 == 32) || (bParam2 >= 35 && bParam2 <= 36))
					{
						*bParam3 = 19;
					}
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 7)
					{
						*bParam3 = 2;
					}
					break;
				case 9:
					if ((bParam2 >= 9 && bParam2 <= 14) || (bParam2 >= 15 && bParam2 <= 16))
					{
						*bParam3 = 2;
					}
					break;
				case 10:
					if (bParam2 >= 29 && bParam2 <= 32)
					{
						*bParam3 = 2;
					}
					break;
				case 14:
					if ((((((bParam2 >= 47 && bParam2 <= 48) || (bParam2 >= 49 && bParam2 <= 50)) || (bParam2 >= 51 && bParam2 <= 52)) || bParam2 == 53) || (bParam2 >= 56 && bParam2 <= 57)) || bParam2 == 62)
					{
						*bParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*bParam3 != -99)
	{
		iVar0 = func_210(iParam0);
		Global_111638.f_2358.f_539[iVar0 /*65*/].f_60 = bParam2;
		Global_111638.f_2358.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_220(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;

	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_248(bParam0, 1);
				iVar0 = func_227(iParam1, bParam3, iVar1);
				break;
			case 1:
				bVar2 = func_248(bParam0, 2);
				iVar0 = func_227(iParam1, bVar2, bParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_219(iParam1, iParam2, bParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_226(iParam1, iParam2, bParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_225(iParam1, bParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("PLAYER_ZERO"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (bParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									case 37:
										iVar0 = 17;
										break;
									case 38:
										iVar0 = 18;
										break;
									case 39:
										iVar0 = 18;
										break;
									case 40:
										iVar0 = 19;
										break;
									case 41:
										iVar0 = 19;
										break;
									case 42:
										iVar0 = 20;
										break;
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							case 11:
								if (bParam3 >= 2 && bParam3 <= 7)
								{
									if (!func_224(bParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((bParam3 >= 8 && bParam3 <= 17) || (bParam3 >= 18 && bParam3 <= 27)) || (bParam3 >= 28 && bParam3 <= 43))
								{
									if (!func_224(bParam0, 3, 135, 150))
									{
										iVar0 = func_223(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (bParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									case 61:
										iVar0 = 3;
										break;
									case 16:
										iVar0 = 1;
										break;
									case 114:
										iVar0 = 15;
										break;
									case 115:
										iVar0 = 17;
										break;
									case 116:
										iVar0 = 16;
										break;
									case 117:
										iVar0 = 18;
										break;
									case 118:
										iVar0 = 20;
										break;
									case 119:
										iVar0 = 19;
										break;
									case 125:
										iVar0 = 21;
										break;
									case 120:
										iVar0 = 22;
										break;
									case 124:
										iVar0 = 23;
										break;
									case 126:
										iVar0 = 24;
										break;
									case 121:
										iVar0 = 25;
										break;
									case 127:
										iVar0 = 26;
										break;
									case 128:
										iVar0 = 27;
										break;
									case 85:
										iVar0 = 6;
										break;
									case 77:
										iVar0 = 7;
										break;
									case 78:
										iVar0 = 8;
										break;
									case 79:
										iVar0 = 9;
										break;
									case 80:
										iVar0 = 10;
										break;
									case 81:
										iVar0 = 11;
										break;
									case 82:
										iVar0 = 12;
										break;
									case 83:
										iVar0 = 13;
										break;
									case 84:
										iVar0 = 14;
										break;
									case 21:
										iVar0 = 31;
										break;
									case 22:
										iVar0 = 30;
										break;
									case 23:
										iVar0 = 29;
										break;
									case 24:
										iVar0 = 28;
										break;
									case 25:
										iVar0 = 33;
										break;
									case 26:
										iVar0 = 35;
										break;
									case 27:
										iVar0 = 34;
										break;
									case 28:
										iVar0 = 32;
										break;
									default:
										if (bParam3 >= 17 && bParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							case 11:
								if (bParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if ((bParam3 >= 44 && bParam3 <= 59) || (bParam3 >= 135 && bParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (bParam3 >= 36 && bParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			case joaat("PLAYER_ONE"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (bParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									case 90:
										iVar0 = 1;
										break;
									case 268:
										iVar0 = 3;
										break;
									case 269:
										iVar0 = 5;
										break;
									case 270:
										iVar0 = 4;
										break;
									case 271:
										iVar0 = 6;
										break;
									case 272:
										iVar0 = 8;
										break;
									case 273:
										iVar0 = 7;
										break;
									case 279:
										iVar0 = 9;
										break;
									case 274:
										iVar0 = 10;
										break;
									case 278:
										iVar0 = 11;
										break;
									case 280:
										iVar0 = 12;
										break;
									case 275:
										iVar0 = 13;
										break;
									case 281:
										iVar0 = 14;
										break;
									case 282:
										iVar0 = 15;
										break;
									case 107:
										iVar0 = 16;
										break;
									case 108:
										iVar0 = 17;
										break;
									case 109:
										iVar0 = 18;
										break;
									case 110:
										iVar0 = 19;
										break;
									case 111:
										iVar0 = 20;
										break;
									case 112:
										iVar0 = 21;
										break;
									case 113:
										iVar0 = 22;
										break;
									case 114:
										iVar0 = 23;
										break;
									case 115:
										iVar0 = 24;
										break;
									case 116:
										iVar0 = 25;
										break;
									case 117:
										iVar0 = 52;
										break;
									case 118:
										iVar0 = 27;
										break;
									case 119:
										iVar0 = 28;
										break;
									case 120:
										iVar0 = 29;
										break;
									case 121:
										iVar0 = 30;
										break;
									case 122:
										iVar0 = 31;
										break;
									case 296:
										iVar0 = 32;
										break;
									case 297:
										iVar0 = 33;
										break;
									case 298:
										iVar0 = 34;
										break;
									case 299:
										iVar0 = 35;
										break;
									case 300:
										iVar0 = 36;
										break;
									case 301:
										iVar0 = 37;
										break;
									case 302:
										iVar0 = 38;
										break;
									case 309:
										iVar0 = 39;
										break;
									case 310:
										iVar0 = 40;
										break;
									case 311:
										iVar0 = 41;
										break;
									case 312:
										iVar0 = 42;
										break;
									case 313:
										iVar0 = 43;
										break;
									case 314:
										iVar0 = 44;
										break;
									case 315:
										iVar0 = 45;
										break;
									case 316:
										iVar0 = 46;
										break;
									case 317:
										iVar0 = 51;
										break;
									default:
										iVar0 = 0;
										break;
								}
								break;
							case 11:
								if (bParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					case 3:
						switch (iParam2)
						{
							case 11:
								if (bParam3 >= 47 && bParam3 <= 62)
								{
									if (!func_224(bParam0, 3, 209, 222))
									{
										iVar0 = func_223(iParam1, 3, 209, 222);
									}
								}
								else if ((bParam3 >= 1 && bParam3 <= 4) || (bParam3 >= 5 && bParam3 <= 8))
								{
									if (!func_224(bParam0, 3, 243, 258))
									{
										if (bParam3 == 1 || bParam3 == 5)
										{
											iVar0 = func_223(iParam1, 3, 243, 246);
										}
										else if (bParam3 == 2 || bParam3 == 6)
										{
											iVar0 = func_223(iParam1, 3, 247, 250);
										}
										else if (bParam3 == 3 || bParam3 == 7)
										{
											iVar0 = func_223(iParam1, 3, 251, 254);
										}
										else if (bParam3 == 4 || bParam3 == 8)
										{
											iVar0 = func_223(iParam1, 3, 255, 258);
										}
									}
								}
								else if (bParam3 == 41 || bParam3 == 42)
								{
									if (!func_224(bParam0, 3, 176, 191) && !func_224(bParam0, 3, 227, 242))
									{
										iVar0 = func_223(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								bVar5 = bParam3;
								bVar4 = func_248(bParam0, 3);
							}
							else if (iParam2 == 3)
							{
								bVar4 = bParam3;
								bVar5 = func_248(bParam0, 11);
								bVar5 = func_222(iParam1, bVar4, bVar5, 0);
							}
							iVar3 = func_248(bParam0, 8);
							if (((bVar5 >= 5 && bVar5 <= 8) || (bVar5 >= 25 && bVar5 <= 40)) || (bVar5 >= 42 && bVar5 <= 43))
							{
								if (!func_221(joaat("PLAYER_ONE"), iVar3, bVar5, bVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if (bParam3 >= 209 && bParam3 <= 222)
							{
							}
							else if (((bParam3 >= 176 && bParam3 <= 191) || (bParam3 >= 227 && bParam3 <= 242)) || (bParam3 >= 243 && bParam3 <= 258))
							{
								iVar7 = func_248(bParam0, 8);
								bVar8 = func_248(bParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_222(iParam1, bParam3, bVar8, 0);
								}
								else
								{
									iVar0 = func_222(iParam1, bParam3, bVar8, 1);
								}
							}
							else if (bParam3 >= 41 && bParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (bParam3 >= 223 && bParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((bParam3 >= 27 && bParam3 <= 42) || (bParam3 >= 43 && bParam3 <= 58)) || (bParam3 >= 59 && bParam3 <= 74))
							{
								bVar9 = func_248(bParam0, 11);
								iVar0 = func_222(iParam1, -99, bVar9, 0);
							}
						}
						break;
				}
				break;
			case joaat("PLAYER_TWO"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (bParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									case 81:
										iVar0 = 5;
										break;
									case 82:
										iVar0 = 6;
										break;
									case 83:
										iVar0 = 7;
										break;
									case 84:
										iVar0 = 10;
										break;
									case 85:
										iVar0 = 9;
										break;
									case 86:
										iVar0 = 8;
										break;
									case 92:
										iVar0 = 22;
										break;
									case 87:
										iVar0 = 23;
										break;
									case 91:
										iVar0 = 24;
										break;
									case 93:
										iVar0 = 25;
										break;
									case 88:
										iVar0 = 26;
										break;
									case 94:
										iVar0 = 27;
										break;
									case 120:
										iVar0 = 11;
										break;
									case 121:
										iVar0 = 13;
										break;
									case 122:
										iVar0 = 14;
										break;
									case 124:
										iVar0 = 12;
										break;
									case 126:
										iVar0 = 18;
										break;
									case 128:
										iVar0 = 17;
										break;
									case 130:
										iVar0 = 19;
										break;
									case 131:
										iVar0 = 16;
										break;
									case 134:
										iVar0 = 15;
										break;
									case 135:
										iVar0 = 20;
										break;
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
		}
	}
	return iVar0;
}

bool func_221(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			break;
		case joaat("PLAYER_ONE"):
			*iParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (bParam2 != -99)
				{
					if ((bParam2 >= 5 && bParam2 <= 8) || (bParam2 >= 25 && bParam2 <= 40))
					{
					}
					else
					{
						if (bParam2 >= 42 && bParam2 <= 43)
						{
							if (bParam3 >= 176 && bParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*iParam4 = (59 + iVar0);
							}
							else if (bParam3 >= 227 && bParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*iParam4 = (43 + iVar0);
							}
						}
						return false;
					}
				}
				if (bParam3 != -99)
				{
					if (((bParam3 >= 227 && bParam3 <= 242) || (bParam3 >= 176 && bParam3 <= 191)) || (bParam3 >= 243 && bParam3 <= 258))
					{
					}
					else
					{
						return false;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (bParam2 != -99)
				{
					if (bParam2 >= 42 && bParam2 <= 43)
					{
					}
					else
					{
						if ((bParam2 >= 5 && bParam2 <= 8) || (bParam2 >= 25 && bParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*iParam4 = (27 + iVar0);
						}
						return false;
					}
				}
				if (bParam3 != -99)
				{
					if (bParam3 >= 227 && bParam3 <= 242)
					{
					}
					else
					{
						if (bParam3 >= 176 && bParam3 <= 191)
						{
							if (bParam2 >= 42 && bParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*iParam4 = (59 + iVar0);
							}
						}
						return false;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (bParam2 != -99)
				{
					if (bParam2 >= 42 && bParam2 <= 43)
					{
					}
					else
					{
						if ((bParam2 >= 5 && bParam2 <= 8) || (bParam2 >= 25 && bParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*iParam4 = (27 + iVar0);
						}
						return false;
					}
				}
				if (bParam3 != -99)
				{
					if (bParam3 >= 176 && bParam3 <= 191)
					{
					}
					else
					{
						if (bParam3 >= 227 && bParam3 <= 242)
						{
							if (bParam2 >= 42 && bParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*iParam4 = (43 + iVar0);
							}
						}
						else if ((bParam2 >= 5 && bParam2 <= 8) || (bParam2 >= 25 && bParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*iParam4 = (27 + iVar0);
						}
						return false;
					}
				}
			}
			break;
		case joaat("PLAYER_TWO"):
			if (iParam1 == 12)
			{
				if (bParam3 != 241)
				{
					return false;
				}
			}
			break;
	}
	return true;
}

bool func_222(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1 >= 243 && bParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return true;
		}
		else
		{
			return 5;
		}
	}
	else if (bParam1 >= 247 && bParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (bParam1 >= 251 && bParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (bParam1 >= 255 && bParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (bParam1 >= 255 && bParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((bParam1 >= 176 && bParam1 <= 191) || (bParam1 >= 227 && bParam1 <= 242))
	{
		if (bParam2 >= 9 && bParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return bParam2;
			}
			else
			{
				iVar0 = (bParam2 - 9);
				bParam2 = (25 + iVar0);
				return bParam2;
			}
		}
		else if (bParam2 >= 25 && bParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (bParam2 - 25);
				bParam2 = (9 + iVar0);
				return bParam2;
			}
			else
			{
				return bParam2;
			}
		}
		else if (bParam2 == 41 || bParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				bParam2 = func_223(iParam0, 11, 9, 24);
			}
			else
			{
				bParam2 = func_223(iParam0, 11, 25, 40);
			}
			if (bParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return bParam2;
			}
		}
	}
	else if (bParam2 >= 1 && bParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return bParam2;
		}
		else
		{
			iVar0 = (bParam2 - 1);
			bParam2 = (5 + iVar0);
			return bParam2;
		}
	}
	else if (bParam2 >= 5 && bParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (bParam2 - 5);
			bParam2 = (1 + iVar0);
			return bParam2;
		}
		else
		{
			return bParam2;
		}
	}
	else if (bParam2 >= 9 && bParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return bParam2;
		}
		else
		{
			iVar0 = (bParam2 - 9);
			bParam2 = (25 + iVar0);
			return bParam2;
		}
	}
	else if (bParam2 >= 25 && bParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (bParam2 - 25);
			bParam2 = (9 + iVar0);
			return bParam2;
		}
		else
		{
			return bParam2;
		}
	}
	else if (bParam2 == 41 || bParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

bool func_223(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		bVar1 = iVar0;
		if (func_213(iParam0, iParam1, bVar1))
		{
			return bVar1;
		}
		iVar0++;
	}
	return -99;
}

bool func_224(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_248(bParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return true;
	}
	return false;
}

bool func_225(int iParam0, bool bParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			if ((((((((((((((((((bParam1 == 16 || bParam1 == 17) || bParam1 == 21) || bParam1 == 22) || bParam1 == 32) || (bParam1 >= 34 && bParam1 <= 39)) || (bParam1 >= 41 && bParam1 <= 45)) || bParam1 == 46) || (bParam1 >= 47 && bParam1 <= 54)) || (bParam1 >= 55 && bParam1 <= 70)) || (bParam1 >= 72 && bParam1 <= 79)) || bParam1 == 80) || (bParam1 >= 81 && bParam1 <= 83)) || (bParam1 >= 84 && bParam1 <= 87)) || bParam1 == 88) || (bParam1 >= 89 && bParam1 <= 91)) || bParam1 == 95) || (bParam1 >= 96 && bParam1 <= 111)) || bParam1 == 112)
			{
				*iParam2 = 6;
				return true;
			}
			break;
		case joaat("PLAYER_ONE"):
			if ((((((bParam1 == 12 || (bParam1 >= 14 && bParam1 <= 21)) || bParam1 == 32) || bParam1 == 52) || (bParam1 >= 69 && bParam1 <= 70)) || bParam1 == 71) || (bParam1 >= 72 && bParam1 <= 77))
			{
				*iParam2 = 17;
				return true;
			}
			break;
		case joaat("PLAYER_TWO"):
			if (((((((((((((((bParam1 == 4 || bParam1 == 5) || bParam1 == 6) || bParam1 == 7) || bParam1 == 14) || (bParam1 >= 18 && bParam1 <= 29)) || bParam1 == 31) || bParam1 == 32) || bParam1 == 33) || bParam1 == 34) || (bParam1 >= 35 && bParam1 <= 42)) || (bParam1 >= 43 && bParam1 <= 53)) || (bParam1 >= 54 && bParam1 <= 61)) || (bParam1 >= 71 && bParam1 <= 80)) || (bParam1 >= 81 && bParam1 <= 90)) || (bParam1 >= 94 && bParam1 <= 103))
			{
				*iParam2 = 8;
				return true;
			}
			break;
	}
	return false;
}

int func_226(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 10:
					if (bParam2 >= 44 && bParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				case 14:
					if (((((((bParam2 >= 31 && bParam2 <= 32) || (bParam2 >= 33 && bParam2 <= 34)) || (bParam2 >= 35 && bParam2 <= 36)) || bParam2 == 37) || (bParam2 >= 38 && bParam2 <= 39)) || (bParam2 >= 40 && bParam2 <= 41)) || (bParam2 >= 42 && bParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 10:
					if (bParam2 >= 47 && bParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				case 14:
					if (((((bParam2 >= 26 && bParam2 <= 27) || (bParam2 >= 28 && bParam2 <= 29)) || (bParam2 >= 30 && bParam2 <= 31)) || bParam2 == 32) || (bParam2 >= 35 && bParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 9:
					if (bParam2 >= 15 && bParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				case 10:
					if (bParam2 >= 29 && bParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				case 14:
					if (((((((bParam2 >= 47 && bParam2 <= 48) || (bParam2 >= 49 && bParam2 <= 50)) || (bParam2 >= 51 && bParam2 <= 52)) || bParam2 == 53) || (bParam2 >= 54 && bParam2 <= 55)) || (bParam2 >= 56 && bParam2 <= 57)) || (bParam2 >= 58 && bParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_210(iParam0);
		Global_111638.f_2358.f_539[iVar0 /*65*/].f_63 = bParam2;
		Global_111638.f_2358.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_227(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			if (bParam1 == 1)
			{
				if (bParam2 == 0)
				{
					return 1;
				}
				else if (bParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (bParam2 == 0)
			{
				return 0;
			}
			else if (bParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("PLAYER_ONE"):
			if (bParam1 >= 0 && bParam1 <= 15)
			{
				if (bParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (bParam1 >= 16 && bParam1 <= 17)
			{
				if (bParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (bParam1 == 18)
			{
				if (bParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (bParam1 == 19)
			{
				if (bParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (bParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		case joaat("PLAYER_TWO"):
			if (bParam1 == 2)
			{
				if (bParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (bParam1 == 3)
			{
				if (bParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (bParam1 == 8)
			{
				return 5;
			}
			else if (bParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_228(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam2 == -1)
	{
		UNK_0x3BFC3B9ADD2EE7B7(bParam0, bParam1);
		if (bParam1 == 0)
		{
			UNK_0x4E885A246A9D983A(bParam0, 34, false);
			UNK_0x4E885A246A9D983A(bParam0, 36, false);
		}
	}
	else
	{
		UNK_0x9A28E8CB86CD4694(bParam0, bParam1, iParam2, iParam3, UNK_0x8CD06866876216F2());
		if (bParam1 == 0)
		{
			iVar0 = func_233(bParam0, iParam2, iParam3, bParam1);
			if (func_229(UNK_0x134B62B726CEC8E6(bParam0), 14, iVar0, UNK_0xD1BC07002824FE76(bParam0, false, iParam2, iParam3)))
			{
				UNK_0x4E885A246A9D983A(bParam0, 34, true);
				UNK_0x4E885A246A9D983A(bParam0, 36, true);
			}
			else
			{
				UNK_0x4E885A246A9D983A(bParam0, 34, false);
				UNK_0x4E885A246A9D983A(bParam0, 36, false);
			}
		}
	}
}

bool func_229(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case joaat("MP_M_FREEMODE_01"):
			switch (iParam1)
			{
				case 14:
					if (bParam3 == -1)
					{
						bParam3 = func_230(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && UNK_0x1A5A491D253EA7BA(bParam3, joaat("HELMET"), true)))
					{
						return true;
					}
					break;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (iParam1)
			{
				case 14:
					if (bParam3 == -1)
					{
						bParam3 = func_230(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && UNK_0x1A5A491D253EA7BA(bParam3, joaat("HELMET"), true)))
					{
						return true;
					}
					break;
			}
			break;
	}
	return false;
}

int func_230(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;

	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		UNK_0x30BBA34DD235D7FE(&Var0);
		iVar18 = 0;
		iVar19 = (bParam1 - func_232(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = UNK_0xF6900DA2D9CD7BC5(bParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			UNK_0x4F79808059300187(iVar17, &Var0);
			if (!UNK_0x232048AB4B0E0259(Var0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		UNK_0x65C0659496B1CC14(&Var21);
		iVar39 = 0;
		iVar40 = (bParam1 - func_231(iParam0, func_218(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76556.f_26[iParam2] && bParam1 == Global_76556[iParam2]) && Global_76556.f_13[iParam2] != 0)
		{
			return Global_76556.f_13[iParam2];
		}
		iVar41 = UNK_0xF6900DA2D9CD7BC5(bParam3, 7, -1, 0, -1, func_218(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			UNK_0xC578687D5A643830(iVar38, &Var21);
			if (!UNK_0x232048AB4B0E0259(Var21))
			{
				if (iVar39 == iVar40)
				{
					Global_76556.f_13[iParam2] = Var21.f_1;
					Global_76556[iParam2] = bParam1;
					Global_76556.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_231(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 0:
					return 7;
				case 1:
					return 5;
				case 2:
					return 6;
				case 3:
					return 181;
				case 4:
					return 113;
				case 5:
					return 14;
				case 6:
					return 99;
				case 7:
					return 1;
				case 8:
					return 24;
				case 9:
					return 20;
				case 10:
					return 48;
				case 11:
					return 45;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 0:
					return 10;
				case 1:
					return 5;
				case 2:
					return 21;
				case 3:
					return 318;
				case 4:
					return 117;
				case 5:
					return 7;
				case 6:
					return 134;
				case 7:
					return 1;
				case 8:
					return 77;
				case 9:
					return 12;
				case 10:
					return 53;
				case 11:
					return 63;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 0:
					return 7;
				case 1:
					return 6;
				case 2:
					return 9;
				case 3:
					return 242;
				case 4:
					return 104;
				case 5:
					return 7;
				case 6:
					return 84;
				case 7:
					return 1;
				case 8:
					return 18;
				case 9:
					return 17;
				case 10:
					return 33;
				case 11:
					return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_FREEMODE_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 26;
				case 2:
					return 91;
				case 3:
					return 16;
				case 4:
					return 256;
				case 5:
					return 9;
				case 6:
					return 256;
				case 7:
					return 92;
				case 8:
					return 241;
				case 9:
					return 46;
				case 10:
					return 7;
				case 11:
					return 237;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 26;
				case 2:
					return 92;
				case 3:
					return 16;
				case 4:
					return 256;
				case 5:
					return 9;
				case 6:
					return 256;
				case 7:
					return 55;
				case 8:
					return 136;
				case 9:
					return 36;
				case 10:
					return 6;
				case 11:
					return 256;
			}
			break;
	}
	return -99;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			return 113;
		case joaat("PLAYER_ONE"):
			return 175;
		case joaat("PLAYER_TWO"):
			return 155;
	}
	switch (iParam0)
	{
		case joaat("MP_M_FREEMODE_01"):
			return 327;
		case joaat("MP_F_FREEMODE_01"):
			return 327;
	}
	return -99;
}

int func_233(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam1 == -1)
	{
		return func_236(bParam3);
	}
	iVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	iVar1 = UNK_0xD1BC07002824FE76(bParam0, bParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("MP_M_FREEMODE_01"))
		{
			return func_235(UNK_0x134B62B726CEC8E6(bParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("MP_F_FREEMODE_01"))
		{
			return func_235(UNK_0x134B62B726CEC8E6(bParam0), iVar1, 14, 4);
		}
	}
	iVar2 = UNK_0xB0D40A53430D217C(bParam0, bParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = UNK_0xFEDCD54A497F3495(bParam0, bParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_234(bParam0, bParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_236(bParam3);
}

int func_234(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	switch (iVar0)
	{
		case joaat("PLAYER_ZERO"):
			switch (bParam1)
			{
				case 0:
					return 10;
				case 1:
					return 58;
				case 2:
					return 112;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (bParam1)
			{
				case 0:
					return 10;
				case 1:
					return 82;
				case 2:
					return 158;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (bParam1)
			{
				case 0:
					return 10;
				case 1:
					return 88;
				case 2:
					return 154;
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			switch (bParam1)
			{
				case 0:
					return 10;
				case 1:
					return 155;
				case 6:
					return 319;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (bParam1)
			{
				case 0:
					return 10;
				case 1:
					return 155;
				case 6:
					return 319;
			}
			break;
	}
	return -99;
}

int func_235(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;

	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		UNK_0x30BBA34DD235D7FE(&Var0);
		iVar18 = 0;
		iVar19 = UNK_0xF6900DA2D9CD7BC5(bParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			UNK_0x4F79808059300187(iVar17, &Var0);
			if (!UNK_0x232048AB4B0E0259(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_232(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		UNK_0x65C0659496B1CC14(&Var20);
		iVar38 = 0;
		iVar39 = UNK_0xF6900DA2D9CD7BC5(bParam3, 7, -1, 0, -1, func_218(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			UNK_0xC578687D5A643830(iVar37, &Var20);
			if (!UNK_0x232048AB4B0E0259(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_231(iParam0, func_218(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_236(bool bParam0)
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
	}
	return 0;
}

struct<10> func_237(int iParam0, bool bParam1)
{
	int iVar0;
	struct<10> Var1;

	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (bParam1)
			{
				case 31:
					func_239(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_239(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_239(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_239(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_239(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_239(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_239(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_239(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_239(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_239(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 9:
					func_239(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_238(&Var1, iParam0, bParam1, 10);
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (bParam1)
			{
				case 31:
					func_239(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_239(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_239(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_239(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_239(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_239(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_239(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_239(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_239(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_239(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_238(&Var1, iParam0, bParam1, 9);
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (bParam1)
			{
				case 31:
					func_239(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_239(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_239(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_239(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_239(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_239(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_239(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_239(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_239(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_239(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_238(&Var1, iParam0, bParam1, 9);
					break;
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			switch (bParam1)
			{
				case 31:
					func_239(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_239(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_239(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_239(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_239(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_239(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_239(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_239(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_239(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_239(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 9:
					func_239(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 10:
					func_239(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 11:
					func_239(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 12:
					func_239(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 13:
					func_239(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 14:
					func_239(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 15:
					func_239(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 16:
					func_239(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 17:
					func_239(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 18:
					func_239(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 19:
					func_239(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 20:
					func_239(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 21:
					func_239(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 22:
					func_239(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 23:
					func_239(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 24:
					func_239(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_238(&Var1, iParam0, bParam1, 25);
					break;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (bParam1)
			{
				case 31:
					func_239(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_239(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_239(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_239(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_239(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_239(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_239(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_239(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_239(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_239(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 9:
					func_239(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 10:
					func_239(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 11:
					func_239(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 12:
					func_239(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 13:
					func_239(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				case 14:
					func_239(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 15:
					func_239(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 16:
					func_239(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 17:
					func_239(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 18:
					func_239(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 19:
					func_239(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 20:
					func_239(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 21:
					func_239(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 22:
					func_239(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 23:
					func_239(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_238(&Var1, iParam0, bParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_238(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	struct<4> Var1;
	vector3 vVar16;
	int iVar19;

	if (bParam2 != 0 && bParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		bVar0 = false;
		if (iParam1 == joaat("PLAYER_ZERO"))
		{
			bVar0 = false;
		}
		else if (iParam1 == joaat("PLAYER_ONE"))
		{
			bVar0 = true;
		}
		else if (iParam1 == joaat("PLAYER_TWO"))
		{
			bVar0 = 2;
		}
		else if (iParam1 == joaat("MP_M_FREEMODE_01"))
		{
			bVar0 = 3;
		}
		else if (iParam1 == joaat("MP_F_FREEMODE_01"))
		{
			bVar0 = 4;
		}
		UNK_0xEF5FB5FCF95E0C4D(bParam2, &Var1);
		if (!UNK_0x232048AB4B0E0259(Var1))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (UNK_0x5D149814CB08088A(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1)
				{
					if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
					{
						(*iParam0)[vVar16.z] = func_235(iParam1, vVar16.x, 14, bVar0);
					}
					else if (vVar16.y != -1)
					{
						(*iParam0)[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_239(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_240(int iParam0, bool bParam1)
{
	int iVar0;
	struct<17> Var1;

	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (bParam1)
			{
				case 0:
					if (Global_111638.f_9080.f_99.f_58[120])
					{
						func_243(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_243(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				case 1:
					func_243(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				case 2:
					func_243(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				case 3:
					func_243(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				case 4:
					func_243(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				case 5:
					func_243(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[0], Global_111638.f_2358.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				case 6:
					func_243(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 7:
					func_243(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 8:
					func_243(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 9:
					func_243(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 10:
					func_243(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				case 11:
					func_243(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				case 12:
					func_243(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				case 13:
					func_243(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 14:
					func_243(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				case 15:
					func_243(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				case 16:
					func_243(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				case 17:
					func_243(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 18:
					func_243(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				case 19:
					func_243(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 20:
					func_243(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 21:
					func_243(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 22:
					func_243(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 23:
					func_243(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 24:
					func_243(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				case 25:
					func_243(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 26:
					func_243(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 27:
					func_243(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 28:
					func_243(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				case 29:
					func_243(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 30:
					func_243(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 31:
					func_243(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				case 32:
					func_243(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 33:
					func_243(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 34:
					func_243(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				case 35:
					func_243(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 36:
					func_243(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 37:
					func_243(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 38:
					func_243(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 39:
					func_243(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 40:
					func_243(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 41:
					func_243(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 42:
					func_243(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 43:
					func_243(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 44:
					func_243(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 45:
					func_243(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 46:
					func_243(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 47:
					func_243(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 48:
					func_243(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 49:
					func_243(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 50:
					func_243(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				case 51:
					func_243(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 52:
					func_243(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				default:
					func_241(&Var1, iParam0, bParam1, 53);
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (bParam1)
			{
				case 0:
					func_243(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 1:
					func_243(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				case 2:
					func_243(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[1], Global_111638.f_2358.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				case 3:
					func_243(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				case 4:
					func_243(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				case 5:
					func_243(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 6:
					func_243(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 7:
					func_243(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				case 8:
					func_243(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				case 9:
					func_243(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 10:
					func_243(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 11:
					func_243(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				case 12:
					func_243(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 13:
					func_243(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 14:
					func_243(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 15:
					func_243(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 16:
					func_243(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 17:
					func_243(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 18:
					func_243(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				case 19:
					func_243(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 20:
					func_243(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 21:
					func_243(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				case 22:
					func_243(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				case 23:
					func_243(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				case 24:
					func_243(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				case 25:
					func_243(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				case 26:
					func_243(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				case 27:
					func_243(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				case 28:
					func_243(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				case 29:
					func_243(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				case 30:
					func_243(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				case 31:
					func_243(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				case 32:
					func_243(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				case 33:
					func_243(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				case 34:
					func_243(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				case 35:
					func_243(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				case 36:
					func_243(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				case 37:
					func_243(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				case 38:
					func_243(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 39:
					func_243(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 40:
					func_243(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 41:
					func_243(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 42:
					func_243(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 43:
					func_243(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				case 44:
					func_243(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				case 45:
					func_243(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				case 46:
					func_243(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				default:
					func_241(&Var1, iParam0, bParam1, 47);
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (bParam1)
			{
				case 0:
					func_243(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 1:
					func_243(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				case 2:
					func_243(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				case 3:
					func_243(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				case 4:
					func_243(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[2], Global_111638.f_2358.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 5:
					func_243(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				case 6:
					func_243(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				case 7:
					func_243(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				case 8:
					func_243(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				case 9:
					func_243(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 10:
					func_243(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 11:
					func_243(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				case 12:
					func_243(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				case 13:
					func_243(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 14:
					func_243(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				case 15:
					func_243(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 16:
					func_243(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 17:
					func_243(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 18:
					func_243(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 19:
					func_243(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 20:
					func_243(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 21:
					func_243(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 22:
					func_243(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 23:
					func_243(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 24:
					func_243(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 25:
					func_243(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 26:
					func_243(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 27:
					func_243(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 28:
					func_243(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 29:
					func_243(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 30:
					func_243(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 31:
					func_243(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 32:
					func_243(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 33:
					func_243(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 34:
					func_243(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 35:
					func_243(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 36:
					func_243(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 37:
					func_243(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 38:
					func_243(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 39:
					func_243(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 40:
					func_243(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 41:
					func_243(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 42:
					func_243(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 43:
					func_243(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 44:
					func_243(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 45:
					func_243(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				case 46:
					func_243(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 47:
					func_243(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				default:
					func_241(&Var1, iParam0, bParam1, 48);
					break;
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			switch (bParam1)
			{
				case 0:
					func_243(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				case 1:
					func_243(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				case 2:
					func_243(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				case 3:
					func_243(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				case 4:
					func_243(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				case 5:
					func_243(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				case 6:
					func_243(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				case 7:
					func_243(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				case 8:
					func_243(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				case 9:
					func_243(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				case 10:
					func_243(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				case 11:
					func_243(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				case 12:
					func_243(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				case 13:
					func_243(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				case 14:
					func_243(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				case 15:
					func_243(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				case 16:
					func_243(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				case 17:
					func_243(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				case 18:
					func_243(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				case 19:
					func_243(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				case 20:
					func_243(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				case 21:
					func_243(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				case 22:
					func_243(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				case 23:
					func_243(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				case 24:
					func_243(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				case 25:
					func_243(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				default:
					func_241(&Var1, iParam0, bParam1, 26);
					break;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (bParam1)
			{
				case 0:
					func_243(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				case 1:
					func_243(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				case 2:
					func_243(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				case 3:
					func_243(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				case 4:
					func_243(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				case 5:
					func_243(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				case 6:
					func_243(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				case 7:
					func_243(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				case 8:
					func_243(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				case 9:
					func_243(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				case 10:
					func_243(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				case 11:
					func_243(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				case 12:
					func_243(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				case 13:
					func_243(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				case 14:
					func_243(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				case 15:
					func_243(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				case 16:
					func_243(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				case 17:
					func_243(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				case 18:
					func_243(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				case 19:
					func_243(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				case 20:
					func_243(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				case 21:
					func_243(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				case 22:
					func_243(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				case 23:
					func_243(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				case 24:
					func_243(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				case 25:
					func_243(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				case 26:
					func_243(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				case 27:
					func_243(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				default:
					func_241(&Var1, iParam0, bParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_241(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	struct<5> Var1;
	vector3 vVar16;
	struct<2> Var19;
	int iVar36;

	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	bVar0 = false;
	if (iParam1 == joaat("PLAYER_ZERO"))
	{
		bVar0 = false;
		(*uParam0)[13] = (10 + (bParam2 - iParam3));
	}
	else if (iParam1 == joaat("PLAYER_ONE"))
	{
		bVar0 = true;
		(*uParam0)[13] = (9 + (bParam2 - iParam3));
	}
	else if (iParam1 == joaat("PLAYER_TWO"))
	{
		bVar0 = 2;
		(*uParam0)[13] = (9 + (bParam2 - iParam3));
	}
	else if (iParam1 == joaat("MP_M_FREEMODE_01"))
	{
		bVar0 = 3;
	}
	else if (iParam1 == joaat("MP_F_FREEMODE_01"))
	{
		bVar0 = 4;
	}
	UNK_0x84997C8C8A5848DD(bVar0, 0);
	UNK_0xA69F810DF7EA02E6((bParam2 - iParam3), &Var1);
	if (!UNK_0x232048AB4B0E0259(Var1))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (UNK_0xD00B813D5424DD2E(Var1.f_1, iVar36, &vVar16))
			{
				if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
				{
					if (vVar16.z == 10)
					{
						UNK_0x65C0659496B1CC14(&Var19);
						UNK_0xFDEBA3FD0BF0D4AC(vVar16.x, &Var19);
						if (vVar16.x != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (vVar16.z == 10 && uParam0->f_16)
					{
						(*uParam0)[func_242(vVar16.z)] = vVar16.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_242(vVar16.z)] = func_235(iParam1, vVar16.x, func_242(vVar16.z), bVar0);
					}
				}
				else if (vVar16.y != -1)
				{
					(*uParam0)[func_242(vVar16.z)] = vVar16.y;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_242(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 6:
			return 6;
		case 5:
			return 5;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 1:
			return 1;
		case 7:
			return 7;
		case 11:
			return 11;
	}
	return 0;
}

void func_243(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

bool func_244(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 14:
					if (bParam2 == 16)
					{
						return true;
					}
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 14:
					if ((bParam2 == 40 || (bParam2 >= 41 && bParam2 <= 56)) || (bParam2 >= 64 && bParam2 <= 79))
					{
						return true;
					}
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 14:
					if ((bParam2 >= 17 && bParam2 <= 18) || (bParam2 >= 71 && bParam2 <= 86))
					{
						return true;
					}
					break;
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			switch (iParam1)
			{
				case 14:
					if (bParam2 >= 18 && bParam2 <= 130)
					{
						return true;
					}
					else if (bParam2 >= 10 && bParam2 <= 17)
					{
						return true;
					}
					else if (bParam2 >= 327)
					{
						if (bParam3 == -1)
						{
							bParam3 = func_230(iParam0, bParam2, 14, 3);
						}
						return (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), true) || UNK_0x1A5A491D253EA7BA(func_230(iParam0, bParam2, 14, 3), -1842686353, true));
					}
					break;
				case 1:
					if (bParam2 >= 26)
					{
						if (bParam3 == -1)
						{
							bParam3 = func_230(iParam0, bParam2, 1, 3);
						}
						return (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), false) || UNK_0x1A5A491D253EA7BA(func_230(iParam0, bParam2, 1, 3), -1842686353, false));
					}
					break;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (iParam1)
			{
				case 14:
					if (bParam2 >= 18 && bParam2 <= 130)
					{
						return true;
					}
					else if (bParam2 >= 10 && bParam2 <= 17)
					{
						return true;
					}
					else if (bParam2 >= 327)
					{
						if (bParam3 == -1)
						{
							bParam3 = func_230(iParam0, bParam2, 14, 4);
						}
						return (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), true) || UNK_0x1A5A491D253EA7BA(func_230(iParam0, bParam2, 14, 4), -1842686353, true));
					}
					break;
				case 1:
					if (bParam2 >= 26)
					{
						if (bParam3 == -1)
						{
							bParam3 = func_230(iParam0, bParam2, 1, 4);
						}
						return (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), false) || UNK_0x1A5A491D253EA7BA(func_230(iParam0, bParam2, 1, 4), -1842686353, false));
					}
					break;
			}
			break;
	}
	return false;
}

bool func_245(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == joaat("PLAYER_ZERO"))
	{
		if (iParam1 == 6)
		{
			if (bParam2 == 10)
			{
				return true;
			}
		}
		else if (iParam1 == 8)
		{
			if ((bParam2 == 9 || bParam2 == 7) || bParam2 == 23)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (bParam2 >= 9 && bParam2 <= 14)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((bParam2 == 12 || bParam2 == 59) || bParam2 == 60) || bParam2 == 31) || bParam2 == 32) || bParam2 == 33) || bParam2 == 34) || bParam2 == 35) || bParam2 == 36) || bParam2 == 37) || bParam2 == 38) || bParam2 == 39) || bParam2 == 40) || bParam2 == 41) || (bParam2 >= 42 && bParam2 <= 44)) || bParam2 == 54) || bParam2 == 55)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("PLAYER_ONE"))
	{
		if (iParam1 == 2)
		{
			if (bParam2 == 20)
			{
				return true;
			}
		}
		else if (iParam1 == 8)
		{
			if ((bParam2 == 3 || bParam2 == 5) || bParam2 == 9)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (bParam2 >= 5 && bParam2 <= 10)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((bParam2 == 82 || bParam2 == 10) || bParam2 == 26) || bParam2 == 27) || bParam2 == 28) || bParam2 == 29) || bParam2 == 30) || bParam2 == 31) || bParam2 == 32) || bParam2 == 33) || bParam2 == 34) || bParam2 == 35) || bParam2 == 36) || (bParam2 >= 37 && bParam2 <= 39))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("PLAYER_TWO"))
	{
		if (iParam1 == 8)
		{
			if (bParam2 == 14 || bParam2 == 7)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (((bParam2 == 8 || (bParam2 >= 9 && bParam2 <= 14)) || bParam2 == 15) || bParam2 == 16)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((bParam2 == 88 || bParam2 == 12) || bParam2 == 47) || bParam2 == 48) || bParam2 == 49) || bParam2 == 50) || bParam2 == 51) || bParam2 == 52) || bParam2 == 53) || bParam2 == 54) || bParam2 == 55) || bParam2 == 56) || bParam2 == 57) || (bParam2 >= 58 && bParam2 <= 60))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("MP_M_FREEMODE_01"))
	{
		if (iParam1 == 1)
		{
			if (bParam2 > 0)
			{
				if (bParam2 >= 26)
				{
					if (bParam3 == -1)
					{
						bParam3 = func_230(iParam0, bParam2, 1, 3);
					}
					if (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), false) || UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAIR_SHRINK"), false))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	else if (iParam0 == joaat("MP_F_FREEMODE_01"))
	{
		if (iParam1 == 1)
		{
			if (bParam2 > 0)
			{
				if (bParam2 >= 26)
				{
					if (bParam3 == -1)
					{
						bParam3 = func_230(iParam0, bParam2, 1, 4);
					}
					if (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), false) || UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAIR_SHRINK"), false))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

bool func_246(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			if (iParam1 == 14)
			{
				if ((((((((bParam2 == 58 || bParam2 == 61) || (bParam2 >= 62 && bParam2 <= 69)) || (bParam2 >= 70 && bParam2 <= 79)) || (bParam2 >= 80 && bParam2 <= 89)) || bParam2 == 90) || (bParam2 >= 91 && bParam2 <= 102)) || (bParam2 >= 103 && bParam2 <= 110)) || bParam2 == 111)
				{
					return true;
				}
			}
			break;
		case joaat("PLAYER_ONE"):
			if (iParam1 == 14)
			{
				if (((((((((((bParam2 >= 83 && bParam2 <= 92) || bParam2 == 93) || bParam2 == 94) || (bParam2 >= 95 && bParam2 <= 101)) || (bParam2 >= 102 && bParam2 <= 111)) || (bParam2 >= 112 && bParam2 <= 121)) || (bParam2 >= 122 && bParam2 <= 131)) || (bParam2 >= 132 && bParam2 <= 139)) || (bParam2 >= 140 && bParam2 <= 149)) || (bParam2 >= 150 && bParam2 <= 156)) || bParam2 == 157)
				{
					return true;
				}
			}
			break;
		case joaat("PLAYER_TWO"):
			if (iParam1 == 14)
			{
				if (((((((((bParam2 == 89 || (bParam2 >= 90 && bParam2 <= 99)) || (bParam2 >= 100 && bParam2 <= 109)) || bParam2 == 111) || bParam2 == 112) || (bParam2 >= 113 && bParam2 <= 122)) || (bParam2 >= 123 && bParam2 <= 132)) || (bParam2 >= 133 && bParam2 <= 142)) || (bParam2 >= 143 && bParam2 <= 152)) || bParam2 == 153)
				{
					return true;
				}
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			if (iParam1 == 14)
			{
				if (bParam2 >= 155 && bParam2 <= 318)
				{
					return true;
				}
				else if (bParam2 >= 327)
				{
					if (bParam3 == -1)
					{
						bParam3 = func_230(iParam0, bParam2, 14, 3);
					}
					return UNK_0x1A5A491D253EA7BA(bParam3, joaat("GLASSES"), true);
				}
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			if (iParam1 == 14)
			{
				if (bParam2 >= 155 && bParam2 <= 318)
				{
					return true;
				}
				else if (bParam2 >= 327)
				{
					if (bParam3 == -1)
					{
						bParam3 = func_230(iParam0, bParam2, 14, 4);
					}
					return UNK_0x1A5A491D253EA7BA(bParam3, joaat("GLASSES"), true);
				}
			}
			break;
	}
	return false;
}

int func_247(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		return -99;
	}
	iVar0 = UNK_0x98F1B512A2CC07C5(bParam0, bParam1);
	if (iVar0 == -1)
	{
		return func_236(bParam1);
	}
	iVar1 = UNK_0x22286A85EDEAEC56(bParam0, bParam1);
	return func_233(bParam0, iVar0, iVar1, bParam1);
}

int func_248(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		return -99;
	}
	bVar0 = func_218(iParam1);
	iVar1 = UNK_0x36C584991B4C183F(bParam0, bVar0);
	iVar2 = UNK_0xDADA8E1DD0D0D9D9(bParam0, bVar0);
	return func_249(bParam0, iVar1, iVar2, iParam1);
}

int func_249(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	bVar0 = func_218(iParam3);
	iVar1 = UNK_0xD2C792E5A65B6BF1(bParam0, bVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = UNK_0x0F84621831DD8D8A(bParam0, bVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

void func_250(int iParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, true) && !UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 6))
	{
		func_253(iParam0, Global_76434[1 /*14*/].f_5, Global_76434[1 /*14*/].f_2, 2, Global_76434[1 /*14*/].f_1, 1, 0);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, true) && UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_251(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_251(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_251(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_251(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	iVar0 = Global_76431;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_252(bParam0, iParam1, &iVar2, &bVar1, bParam2, bParam3))
	{
		bVar3 = func_49(iVar2, iVar0, 0);
		UNK_0x5D96D8530B3D0904(&bVar3, bVar1);
		func_181(iVar2, bVar3, iVar0, 1, 0);
	}
}

bool func_252(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam2 = 11511;
	if ((bParam4 && Global_4267094) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*iParam2 = 971;
						*bParam3 = 19;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*iParam2 = 971;
						*bParam3 = 20;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*iParam2 = 971;
						*bParam3 = 21;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*iParam2 = 971;
						*bParam3 = 22;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*iParam2 = 971;
						*bParam3 = 23;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*iParam2 = 971;
						*bParam3 = 24;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*iParam2 = 971;
						*bParam3 = 25;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*iParam2 = 971;
						*bParam3 = 26;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*iParam2 = 935;
						*bParam3 = 0;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*iParam2 = 935;
						*bParam3 = 1;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*iParam2 = 935;
						*bParam3 = 2;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*iParam2 = 935;
						*bParam3 = 3;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*iParam2 = 935;
						*bParam3 = 4;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*iParam2 = 935;
						*bParam3 = 5;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*iParam2 = 935;
						*bParam3 = 7;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*iParam2 = 935;
						*bParam3 = 8;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*iParam2 = 935;
						*bParam3 = 11;
						return true;
				}
				break;
			case 2:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*iParam2 = 1023;
						*bParam3 = 19;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*iParam2 = 1023;
						*bParam3 = 20;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*iParam2 = 1023;
						*bParam3 = 21;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*iParam2 = 1023;
						*bParam3 = 22;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*iParam2 = 1023;
						*bParam3 = 23;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*iParam2 = 1023;
						*bParam3 = 24;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*iParam2 = 1023;
						*bParam3 = 25;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*iParam2 = 1023;
						*bParam3 = 26;
						return true;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*iParam2 = 971;
						*bParam3 = 19;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*iParam2 = 971;
						*bParam3 = 20;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*iParam2 = 971;
						*bParam3 = 21;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*iParam2 = 971;
						*bParam3 = 22;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*iParam2 = 971;
						*bParam3 = 23;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*iParam2 = 971;
						*bParam3 = 24;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*iParam2 = 971;
						*bParam3 = 25;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*iParam2 = 971;
						*bParam3 = 26;
						return true;
				}
				break;
			case 2:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*iParam2 = 1023;
						*bParam3 = 19;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*iParam2 = 1023;
						*bParam3 = 20;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*iParam2 = 1023;
						*bParam3 = 21;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*iParam2 = 1023;
						*bParam3 = 22;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*iParam2 = 1023;
						*bParam3 = 23;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*iParam2 = 1023;
						*bParam3 = 24;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*iParam2 = 1023;
						*bParam3 = 25;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*iParam2 = 1023;
						*bParam3 = 26;
						return true;
				}
				break;
		}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4267094)
		{
			iVar0 = UNK_0xFAB100617491B764(bParam0);
		}
		else
		{
			iVar0 = UNK_0xCE50BA51F0598785(bParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = UNK_0xFAB100617491B764(bParam0);
	}
	else
	{
		iVar0 = UNK_0xCE50BA51F0598785(bParam0);
	}
	if (iVar0 == -1)
	{
		return false;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*iParam2 = 1759;
					break;
				case 1:
					*iParam2 = 1760;
					break;
				case 2:
					*iParam2 = 1761;
					break;
				case 3:
					*iParam2 = 1762;
					break;
				case 4:
					*iParam2 = 1763;
					break;
				case 5:
					*iParam2 = 1764;
					break;
				case 6:
					*iParam2 = 1771;
					break;
				case 7:
					*iParam2 = 1772;
					break;
				case 8:
					*iParam2 = 1773;
					break;
				case 9:
					*iParam2 = 1774;
					break;
				case 10:
					*iParam2 = 1775;
					break;
				case 11:
					*iParam2 = 1776;
					break;
				case 12:
					*iParam2 = 1777;
					break;
				case 13:
					*iParam2 = 1785;
					break;
				case 14:
					*iParam2 = 1786;
					break;
				case 15:
					*iParam2 = 1887;
					break;
				case 16:
					*iParam2 = 1888;
					break;
				case 17:
					*iParam2 = 1919;
					break;
				case 18:
					*iParam2 = 1933;
					break;
				case 19:
					*iParam2 = 1934;
					break;
				case 20:
					*iParam2 = 1935;
					break;
				case 21:
					*iParam2 = 1936;
					break;
				case 22:
					*iParam2 = 1937;
					break;
				case 23:
					*iParam2 = 2041;
					break;
				case 24:
					*iParam2 = 2042;
					break;
				case 25:
					*iParam2 = 2068;
					break;
				case 26:
					*iParam2 = 2069;
					break;
				case 27:
					*iParam2 = 2070;
					break;
				case 28:
					*iParam2 = 2071;
					break;
				case 29:
					*iParam2 = 2072;
					break;
				case 30:
					*iParam2 = 2073;
					break;
				case 31:
					*iParam2 = 2074;
					break;
				case 32:
					*iParam2 = 2075;
					break;
				case 33:
					*iParam2 = 2076;
					break;
				case 34:
					*iParam2 = 2077;
					break;
				case 35:
					*iParam2 = 2324;
					break;
				case 36:
					*iParam2 = 2325;
					break;
				case 37:
					*iParam2 = 2389;
					break;
				case 38:
					*iParam2 = 2390;
					break;
				case 39:
					*iParam2 = 2391;
					break;
				case 40:
					*iParam2 = 2392;
					break;
				case 41:
					*iParam2 = 2451;
					break;
				case 42:
					*iParam2 = 2452;
					break;
				case 43:
					*iParam2 = 2453;
					break;
				case 44:
					*iParam2 = 2454;
					break;
				case 45:
					*iParam2 = 2455;
					break;
				case 46:
					*iParam2 = 2456;
					break;
				case 47:
					*iParam2 = 2457;
					break;
				case 48:
					*iParam2 = 2458;
					break;
				case 49:
					*iParam2 = 2459;
					break;
				case 50:
					*iParam2 = 2460;
					break;
				case 51:
					*iParam2 = 2589;
					break;
				case 52:
					*iParam2 = 2590;
					break;
				case 53:
					*iParam2 = 2591;
					break;
				case 54:
					*iParam2 = 2592;
					break;
				case 55:
					*iParam2 = 2593;
					break;
				case 56:
					*iParam2 = 2594;
					break;
				case 57:
					*iParam2 = 2595;
					break;
				case 58:
					*iParam2 = 2596;
					break;
				case 59:
					*iParam2 = 2597;
					break;
				case 60:
					*iParam2 = 2598;
					break;
				case 61:
					*iParam2 = 2599;
					break;
				case 62:
					*iParam2 = 3196;
					break;
				case 63:
					*iParam2 = 3197;
					break;
				case 64:
					*iParam2 = 3198;
					break;
				case 65:
					*iParam2 = 3199;
					break;
				case 66:
					*iParam2 = 3200;
					break;
				case 67:
					*iParam2 = 3201;
					break;
				case 68:
					*iParam2 = 3669;
					break;
				case 69:
					*iParam2 = 3670;
					break;
				case 70:
					*iParam2 = 3671;
					break;
				case 71:
					*iParam2 = 3672;
					break;
				case 72:
					*iParam2 = 3673;
					break;
				case 73:
					*iParam2 = 3674;
					break;
				case 74:
					*iParam2 = 3675;
					break;
				case 75:
					*iParam2 = 3676;
					break;
				case 76:
					*iParam2 = 3677;
					break;
				case 77:
					*iParam2 = 3678;
					break;
				case 78:
					*iParam2 = 3792;
					break;
				case 79:
					*iParam2 = 3793;
					break;
				case 80:
					*iParam2 = 3794;
					break;
				case 81:
					*iParam2 = 3795;
					break;
				case 82:
					*iParam2 = 3796;
					break;
				case 83:
					*iParam2 = 3797;
					break;
				case 84:
					*iParam2 = 3798;
					break;
				case 85:
					*iParam2 = 3799;
					break;
				case 86:
					*iParam2 = 3902;
					break;
				case 87:
					*iParam2 = 3903;
					break;
				case 88:
					*iParam2 = 3904;
					break;
				case 89:
					*iParam2 = 5337;
					break;
				case 90:
					*iParam2 = 5338;
					break;
				case 91:
					*iParam2 = 5339;
					break;
				case 92:
					*iParam2 = 5340;
					break;
				case 93:
					*iParam2 = 5341;
					break;
				case 94:
					*iParam2 = 5342;
					break;
				case 95:
					*iParam2 = 5343;
					break;
				case 96:
					*iParam2 = 5344;
					break;
				case 97:
					*iParam2 = 5345;
					break;
				case 98:
					*iParam2 = 5346;
					break;
				case 99:
					*iParam2 = 5347;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*iParam2 = 5348;
					break;
				case 101:
					*iParam2 = 5394;
					break;
				case 102:
					*iParam2 = 5395;
					break;
				case 103:
					*iParam2 = 5396;
					break;
				case 104:
					*iParam2 = 5397;
					break;
				case 105:
					*iParam2 = 5398;
					break;
				case 106:
					*iParam2 = 5399;
					break;
				case 107:
					*iParam2 = 5400;
					break;
				case 108:
					*iParam2 = 5401;
					break;
				case 109:
					*iParam2 = 5402;
					break;
				case 110:
					*iParam2 = 5403;
					break;
				case 111:
					*iParam2 = 5404;
					break;
				case 112:
					*iParam2 = 5405;
					break;
				case 113:
					*iParam2 = 5406;
					break;
				case 114:
					*iParam2 = 5407;
					break;
				case 115:
					*iParam2 = 5408;
					break;
				case 116:
					*iParam2 = 5409;
					break;
				case 117:
					*iParam2 = 5410;
					break;
				case 118:
					*iParam2 = 5411;
					break;
				case 119:
					*iParam2 = 5412;
					break;
				case 120:
					*iParam2 = 5413;
					break;
				case 121:
					*iParam2 = 5414;
					break;
				case 122:
					*iParam2 = 5415;
					break;
				case 123:
					*iParam2 = 5416;
					break;
				case 124:
					*iParam2 = 6122;
					break;
				case 125:
					*iParam2 = 6123;
					break;
				case 126:
					*iParam2 = 6124;
					break;
				case 127:
					*iParam2 = 6125;
					break;
				case 128:
					*iParam2 = 6126;
					break;
				case 129:
					*iParam2 = 6127;
					break;
				case 130:
					*iParam2 = 6128;
					break;
				case 131:
					*iParam2 = 6129;
					break;
				case 132:
					*iParam2 = 6130;
					break;
				case 133:
					*iParam2 = 6131;
					break;
				case 134:
					*iParam2 = 6132;
					break;
				case 135:
					*iParam2 = 6133;
					break;
				case 136:
					*iParam2 = 6134;
					break;
				case 137:
					*iParam2 = 6135;
					break;
				case 138:
					*iParam2 = 6136;
					break;
				case 139:
					*iParam2 = 6435;
					break;
				case 140:
					*iParam2 = 6436;
					break;
				case 141:
					*iParam2 = 6437;
					break;
				case 142:
					*iParam2 = 6438;
					break;
				case 143:
					*iParam2 = 6439;
					break;
				case 144:
					*iParam2 = 6440;
					break;
				case 145:
					*iParam2 = 6441;
					break;
				case 146:
					*iParam2 = 6442;
					break;
				case 147:
					*iParam2 = 6443;
					break;
				case 148:
					*iParam2 = 6444;
					break;
				case 149:
					*iParam2 = 6445;
					break;
				case 150:
					*iParam2 = 6446;
					break;
				case 151:
					*iParam2 = 6447;
					break;
				case 152:
					*iParam2 = 6448;
					break;
				case 153:
					*iParam2 = 6449;
					break;
				case 154:
					*iParam2 = 7266;
					break;
				case 155:
					*iParam2 = 7267;
					break;
				case 156:
					*iParam2 = 7268;
					break;
				case 157:
					*iParam2 = 7269;
					break;
				case 158:
					*iParam2 = 7270;
					break;
				case 159:
					*iParam2 = 7271;
					break;
				case 160:
					*iParam2 = 7272;
					break;
				case 161:
					*iParam2 = 7879;
					break;
				case 162:
					*iParam2 = 7880;
					break;
				case 163:
					*iParam2 = 7881;
					break;
				case 164:
					*iParam2 = 7882;
					break;
				case 165:
					*iParam2 = 7883;
					break;
				case 166:
					*iParam2 = 7884;
					break;
				case 167:
					*iParam2 = 7885;
					break;
				case 168:
					*iParam2 = 7886;
					break;
				case 169:
					*iParam2 = 7887;
					break;
				case 170:
					*iParam2 = 7888;
					break;
				case 171:
					*iParam2 = 7889;
					break;
				case 172:
					*iParam2 = 7890;
					break;
				case 173:
					*iParam2 = 7891;
					break;
				case 174:
					*iParam2 = 7892;
					break;
				case 175:
					*iParam2 = 7893;
					break;
				case 176:
					*iParam2 = 8299;
					break;
				case 177:
					*iParam2 = 8300;
					break;
				case 178:
					*iParam2 = 8301;
					break;
				case 179:
					*iParam2 = 8302;
					break;
				case 180:
					*iParam2 = 8303;
					break;
				case 181:
					*iParam2 = 8304;
					break;
				case 182:
					*iParam2 = 8305;
					break;
				case 183:
					*iParam2 = 8306;
					break;
				case 184:
					*iParam2 = 8307;
					break;
				case 185:
					*iParam2 = 8308;
					break;
				case 186:
					*iParam2 = 8309;
					break;
				case 187:
					*iParam2 = 8310;
					break;
				case 188:
					*iParam2 = 8311;
					break;
				case 189:
					*iParam2 = 8312;
					break;
				case 190:
					*iParam2 = 8313;
					break;
				case 191:
					*iParam2 = 8314;
					break;
				case 192:
					*iParam2 = 8315;
					break;
				case 193:
					*iParam2 = 8316;
					break;
				case 194:
					*iParam2 = 8317;
					break;
				case 195:
					*iParam2 = 8318;
					break;
				case 196:
					*iParam2 = 8319;
					break;
				case 197:
					*iParam2 = 8320;
					break;
				case 198:
					*iParam2 = 8321;
					break;
				case 199:
					*iParam2 = 8322;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*iParam2 = 8323;
					break;
				case 201:
					*iParam2 = 8936;
					break;
				case 202:
					*iParam2 = 8937;
					break;
				case 203:
					*iParam2 = 8938;
					break;
				case 204:
					*iParam2 = 8939;
					break;
				case 205:
					*iParam2 = 8940;
					break;
				case 206:
					*iParam2 = 9419;
					break;
				case 207:
					*iParam2 = 9420;
					break;
				case 208:
					*iParam2 = 9421;
					break;
				case 209:
					*iParam2 = 9422;
					break;
				case 210:
					*iParam2 = 9423;
					break;
				case 211:
					*iParam2 = 9424;
					break;
				case 212:
					*iParam2 = 9425;
					break;
				case 213:
					*iParam2 = 9426;
					break;
				case 214:
					*iParam2 = 9427;
					break;
				case 215:
					*iParam2 = 9428;
					break;
				case 216:
					*iParam2 = 9429;
					break;
				case 217:
					*iParam2 = 9430;
					break;
				case 218:
					*iParam2 = 9431;
					break;
				case 219:
					*iParam2 = 9432;
					break;
				case 220:
					*iParam2 = 9433;
					break;
				case 221:
					*iParam2 = 9434;
					break;
				case 222:
					*iParam2 = 9435;
					break;
				case 223:
					*iParam2 = 9436;
					break;
				case 224:
					*iParam2 = 9437;
					break;
				case 225:
					*iParam2 = 9438;
					break;
				case 226:
					*iParam2 = 9439;
					break;
				case 227:
					*iParam2 = 9440;
					break;
				case 228:
					*iParam2 = 9441;
					break;
				case 229:
					*iParam2 = 9442;
					break;
				case 230:
					*iParam2 = 9443;
					break;
				default:
					break;
			}
			break;
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*iParam2 = 1765;
					break;
				case 1:
					*iParam2 = 1766;
					break;
				case 2:
					*iParam2 = 1767;
					break;
				case 3:
					*iParam2 = 1768;
					break;
				case 4:
					*iParam2 = 1769;
					break;
				case 5:
					*iParam2 = 1770;
					break;
				case 6:
					*iParam2 = 1778;
					break;
				case 7:
					*iParam2 = 1779;
					break;
				case 8:
					*iParam2 = 1780;
					break;
				case 9:
					*iParam2 = 1781;
					break;
				case 10:
					*iParam2 = 1782;
					break;
				case 11:
					*iParam2 = 1783;
					break;
				case 12:
					*iParam2 = 1784;
					break;
				case 13:
					*iParam2 = 1787;
					break;
				case 14:
					*iParam2 = 1788;
					break;
				case 15:
					*iParam2 = 1889;
					break;
				case 16:
					*iParam2 = 1890;
					break;
				case 17:
					*iParam2 = 1920;
					break;
				case 18:
					*iParam2 = 1938;
					break;
				case 19:
					*iParam2 = 1939;
					break;
				case 20:
					*iParam2 = 1940;
					break;
				case 21:
					*iParam2 = 1941;
					break;
				case 22:
					*iParam2 = 1942;
					break;
				case 23:
					*iParam2 = 2043;
					break;
				case 24:
					*iParam2 = 2044;
					break;
				case 25:
					*iParam2 = 2078;
					break;
				case 26:
					*iParam2 = 2079;
					break;
				case 27:
					*iParam2 = 2080;
					break;
				case 28:
					*iParam2 = 2081;
					break;
				case 29:
					*iParam2 = 2082;
					break;
				case 30:
					*iParam2 = 2083;
					break;
				case 31:
					*iParam2 = 2084;
					break;
				case 32:
					*iParam2 = 2085;
					break;
				case 33:
					*iParam2 = 2086;
					break;
				case 34:
					*iParam2 = 2087;
					break;
				case 35:
					*iParam2 = 2326;
					break;
				case 36:
					*iParam2 = 2327;
					break;
				case 37:
					*iParam2 = 2393;
					break;
				case 38:
					*iParam2 = 2394;
					break;
				case 39:
					*iParam2 = 2395;
					break;
				case 40:
					*iParam2 = 2396;
					break;
				case 41:
					*iParam2 = 2461;
					break;
				case 42:
					*iParam2 = 2462;
					break;
				case 43:
					*iParam2 = 2463;
					break;
				case 44:
					*iParam2 = 2464;
					break;
				case 45:
					*iParam2 = 2465;
					break;
				case 46:
					*iParam2 = 2466;
					break;
				case 47:
					*iParam2 = 2467;
					break;
				case 48:
					*iParam2 = 2468;
					break;
				case 49:
					*iParam2 = 2469;
					break;
				case 50:
					*iParam2 = 2470;
					break;
				case 51:
					*iParam2 = 2600;
					break;
				case 52:
					*iParam2 = 2601;
					break;
				case 53:
					*iParam2 = 2602;
					break;
				case 54:
					*iParam2 = 2603;
					break;
				case 55:
					*iParam2 = 2604;
					break;
				case 56:
					*iParam2 = 2605;
					break;
				case 57:
					*iParam2 = 2606;
					break;
				case 58:
					*iParam2 = 2607;
					break;
				case 59:
					*iParam2 = 2608;
					break;
				case 60:
					*iParam2 = 2609;
					break;
				case 61:
					*iParam2 = 2610;
					break;
				case 62:
					*iParam2 = 3202;
					break;
				case 63:
					*iParam2 = 3203;
					break;
				case 64:
					*iParam2 = 3204;
					break;
				case 65:
					*iParam2 = 3205;
					break;
				case 66:
					*iParam2 = 3206;
					break;
				case 67:
					*iParam2 = 3207;
					break;
				case 68:
					*iParam2 = 3679;
					break;
				case 69:
					*iParam2 = 3680;
					break;
				case 70:
					*iParam2 = 3681;
					break;
				case 71:
					*iParam2 = 3682;
					break;
				case 72:
					*iParam2 = 3683;
					break;
				case 73:
					*iParam2 = 3684;
					break;
				case 74:
					*iParam2 = 3685;
					break;
				case 75:
					*iParam2 = 3686;
					break;
				case 76:
					*iParam2 = 3687;
					break;
				case 77:
					*iParam2 = 3688;
					break;
				case 78:
					*iParam2 = 3800;
					break;
				case 79:
					*iParam2 = 3801;
					break;
				case 80:
					*iParam2 = 3802;
					break;
				case 81:
					*iParam2 = 3803;
					break;
				case 82:
					*iParam2 = 3804;
					break;
				case 83:
					*iParam2 = 3805;
					break;
				case 84:
					*iParam2 = 3806;
					break;
				case 85:
					*iParam2 = 3807;
					break;
				case 86:
					*iParam2 = 3905;
					break;
				case 87:
					*iParam2 = 3906;
					break;
				case 88:
					*iParam2 = 3907;
					break;
				case 89:
					*iParam2 = 5349;
					break;
				case 90:
					*iParam2 = 5350;
					break;
				case 91:
					*iParam2 = 5351;
					break;
				case 92:
					*iParam2 = 5352;
					break;
				case 93:
					*iParam2 = 5353;
					break;
				case 94:
					*iParam2 = 5354;
					break;
				case 95:
					*iParam2 = 5355;
					break;
				case 96:
					*iParam2 = 5356;
					break;
				case 97:
					*iParam2 = 5357;
					break;
				case 98:
					*iParam2 = 5358;
					break;
				case 99:
					*iParam2 = 5359;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*iParam2 = 5360;
					break;
				case 101:
					*iParam2 = 5417;
					break;
				case 102:
					*iParam2 = 5418;
					break;
				case 103:
					*iParam2 = 5419;
					break;
				case 104:
					*iParam2 = 5420;
					break;
				case 105:
					*iParam2 = 5421;
					break;
				case 106:
					*iParam2 = 5422;
					break;
				case 107:
					*iParam2 = 5423;
					break;
				case 108:
					*iParam2 = 5424;
					break;
				case 109:
					*iParam2 = 5425;
					break;
				case 110:
					*iParam2 = 5426;
					break;
				case 111:
					*iParam2 = 5427;
					break;
				case 112:
					*iParam2 = 5428;
					break;
				case 113:
					*iParam2 = 5429;
					break;
				case 114:
					*iParam2 = 5430;
					break;
				case 115:
					*iParam2 = 5431;
					break;
				case 116:
					*iParam2 = 5432;
					break;
				case 117:
					*iParam2 = 5433;
					break;
				case 118:
					*iParam2 = 5434;
					break;
				case 119:
					*iParam2 = 5435;
					break;
				case 120:
					*iParam2 = 5436;
					break;
				case 121:
					*iParam2 = 5437;
					break;
				case 122:
					*iParam2 = 5438;
					break;
				case 123:
					*iParam2 = 5439;
					break;
				case 124:
					*iParam2 = 6137;
					break;
				case 125:
					*iParam2 = 6138;
					break;
				case 126:
					*iParam2 = 6139;
					break;
				case 127:
					*iParam2 = 6140;
					break;
				case 128:
					*iParam2 = 6141;
					break;
				case 129:
					*iParam2 = 6142;
					break;
				case 130:
					*iParam2 = 6143;
					break;
				case 131:
					*iParam2 = 6144;
					break;
				case 132:
					*iParam2 = 6145;
					break;
				case 133:
					*iParam2 = 6146;
					break;
				case 134:
					*iParam2 = 6147;
					break;
				case 135:
					*iParam2 = 6148;
					break;
				case 136:
					*iParam2 = 6149;
					break;
				case 137:
					*iParam2 = 6150;
					break;
				case 138:
					*iParam2 = 6151;
					break;
				case 139:
					*iParam2 = 6450;
					break;
				case 140:
					*iParam2 = 6451;
					break;
				case 141:
					*iParam2 = 6452;
					break;
				case 142:
					*iParam2 = 6453;
					break;
				case 143:
					*iParam2 = 6454;
					break;
				case 144:
					*iParam2 = 6455;
					break;
				case 145:
					*iParam2 = 6456;
					break;
				case 146:
					*iParam2 = 6457;
					break;
				case 147:
					*iParam2 = 6458;
					break;
				case 148:
					*iParam2 = 6459;
					break;
				case 149:
					*iParam2 = 6460;
					break;
				case 150:
					*iParam2 = 6461;
					break;
				case 151:
					*iParam2 = 6462;
					break;
				case 152:
					*iParam2 = 6463;
					break;
				case 153:
					*iParam2 = 6464;
					break;
				case 154:
					*iParam2 = 7273;
					break;
				case 155:
					*iParam2 = 7274;
					break;
				case 156:
					*iParam2 = 7275;
					break;
				case 157:
					*iParam2 = 7276;
					break;
				case 158:
					*iParam2 = 7277;
					break;
				case 159:
					*iParam2 = 7278;
					break;
				case 160:
					*iParam2 = 7279;
					break;
				case 161:
					*iParam2 = 7894;
					break;
				case 162:
					*iParam2 = 7895;
					break;
				case 163:
					*iParam2 = 7896;
					break;
				case 164:
					*iParam2 = 7897;
					break;
				case 165:
					*iParam2 = 7898;
					break;
				case 166:
					*iParam2 = 7899;
					break;
				case 167:
					*iParam2 = 7900;
					break;
				case 168:
					*iParam2 = 7901;
					break;
				case 169:
					*iParam2 = 7902;
					break;
				case 170:
					*iParam2 = 7903;
					break;
				case 171:
					*iParam2 = 7904;
					break;
				case 172:
					*iParam2 = 7905;
					break;
				case 173:
					*iParam2 = 7906;
					break;
				case 174:
					*iParam2 = 7907;
					break;
				case 175:
					*iParam2 = 7908;
					break;
				case 176:
					*iParam2 = 8324;
					break;
				case 177:
					*iParam2 = 8325;
					break;
				case 178:
					*iParam2 = 8326;
					break;
				case 179:
					*iParam2 = 8327;
					break;
				case 180:
					*iParam2 = 8328;
					break;
				case 181:
					*iParam2 = 8329;
					break;
				case 182:
					*iParam2 = 8330;
					break;
				case 183:
					*iParam2 = 8331;
					break;
				case 184:
					*iParam2 = 8332;
					break;
				case 185:
					*iParam2 = 8333;
					break;
				case 186:
					*iParam2 = 8334;
					break;
				case 187:
					*iParam2 = 8335;
					break;
				case 188:
					*iParam2 = 8336;
					break;
				case 189:
					*iParam2 = 8337;
					break;
				case 190:
					*iParam2 = 8338;
					break;
				case 191:
					*iParam2 = 8339;
					break;
				case 192:
					*iParam2 = 8340;
					break;
				case 193:
					*iParam2 = 8341;
					break;
				case 194:
					*iParam2 = 8342;
					break;
				case 195:
					*iParam2 = 8343;
					break;
				case 196:
					*iParam2 = 8344;
					break;
				case 197:
					*iParam2 = 8345;
					break;
				case 198:
					*iParam2 = 8346;
					break;
				case 199:
					*iParam2 = 8347;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*iParam2 = 8348;
					break;
				case 201:
					*iParam2 = 8941;
					break;
				case 202:
					*iParam2 = 8942;
					break;
				case 203:
					*iParam2 = 8943;
					break;
				case 204:
					*iParam2 = 8944;
					break;
				case 205:
					*iParam2 = 8945;
					break;
				case 206:
					*iParam2 = 9444;
					break;
				case 207:
					*iParam2 = 9445;
					break;
				case 208:
					*iParam2 = 9446;
					break;
				case 209:
					*iParam2 = 9447;
					break;
				case 210:
					*iParam2 = 9448;
					break;
				case 211:
					*iParam2 = 9449;
					break;
				case 212:
					*iParam2 = 9450;
					break;
				case 213:
					*iParam2 = 9451;
					break;
				case 214:
					*iParam2 = 9452;
					break;
				case 215:
					*iParam2 = 9453;
					break;
				case 216:
					*iParam2 = 9454;
					break;
				case 217:
					*iParam2 = 9455;
					break;
				case 218:
					*iParam2 = 9456;
					break;
				case 219:
					*iParam2 = 9457;
					break;
				case 220:
					*iParam2 = 9458;
					break;
				case 221:
					*iParam2 = 9459;
					break;
				case 222:
					*iParam2 = 9460;
					break;
				case 223:
					*iParam2 = 9461;
					break;
				case 224:
					*iParam2 = 9462;
					break;
				case 225:
					*iParam2 = 9463;
					break;
				case 226:
					*iParam2 = 9464;
					break;
				case 227:
					*iParam2 = 9465;
					break;
				case 228:
					*iParam2 = 9466;
					break;
				case 229:
					*iParam2 = 9467;
					break;
				case 230:
					*iParam2 = 9468;
					break;
				default:
					break;
			}
			break;
	}
	*bParam3 = (iVar0 % 32);
	return *iParam2 != 11511;
}

bool func_253(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/][iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/][iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/][iParam3], bParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_4[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_4[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_4[iParam3], bParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_8[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_8[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_8[iParam3], bParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_12[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_12[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_12[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_16[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_16[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_16[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_20[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_20[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_20[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_24[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_24[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_24[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_28[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_28[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_28[iParam3], bParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_32[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_32[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_32[iParam3], bParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_36[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_36[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_36[iParam3], bParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_40[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_40[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_40[iParam3], bParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_44[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_44[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_44[iParam3], bParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_48[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_48[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_48[iParam3], bParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_52[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_52[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_52[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_56[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_56[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_56[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_60[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_60[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_60[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_64[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_64[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_64[iParam3], bParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_68[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_68[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_68[iParam3], bParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_72[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_72[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_72[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_76[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_76[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_76[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_80[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_80[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_80[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_84[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_84[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_84[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_88[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_88[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_88[iParam3], bParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_92[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_92[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_92[iParam3], bParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_96[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_96[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_96[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_100[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_100[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_100[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_104[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_104[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_104[iParam3], bParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_108[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_108[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_108[iParam3], bParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_112[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_112[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_112[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_116[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_116[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_116[iParam3], bParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_120[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_120[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_120[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_124[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_124[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_124[iParam3], bParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_128[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_128[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_128[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_132[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_132[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_132[iParam3], bParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_136[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_136[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_136[iParam3], bParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_140[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_140[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_140[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_144[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_144[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_144[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_148[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_148[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_148[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_152[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_152[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_152[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_156[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_156[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_156[iParam3], bParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_160[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_160[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_160[iParam3], bParam4);
		}
	}
	return false;
}

bool func_254(int iParam0)
{
	if (!UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, false))
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, true))
		{
			return false;
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 2))
		{
			return false;
		}
	}
	return true;
}

struct<14> func_255(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	func_318();
	if (iParam0 == joaat("PLAYER_ZERO"))
	{
		func_300(iParam1, bParam2);
	}
	else if (iParam0 == joaat("PLAYER_ONE"))
	{
		func_281(iParam1, bParam2);
	}
	else if (iParam0 == joaat("PLAYER_TWO"))
	{
		func_256(iParam1, bParam2);
	}
	return Global_76434[0 /*14*/];
}

void func_256(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			func_280(bParam1);
			break;
		case 2:
			func_279(bParam1);
			break;
		case 3:
			func_276(bParam1);
			break;
		case 4:
			func_275(bParam1);
			break;
		case 6:
			func_274(bParam1);
			break;
		case 5:
			func_273(bParam1);
			break;
		case 8:
			func_272(bParam1);
			break;
		case 9:
			func_271(bParam1);
			break;
		case 10:
			func_270(bParam1);
			break;
		case 1:
			func_269(bParam1);
			break;
		case 7:
			func_268(bParam1);
			break;
		case 11:
			func_267(bParam1);
			break;
		case 12:
			func_266(bParam1);
			break;
		case 13:
			func_265(bParam1);
			break;
		case 14:
			func_257(bParam1);
			break;
	}
}

void func_257(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		case 154:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		case 88:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		case 89:
			StringCopy(&cVar2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		case 90:
			StringCopy(&cVar2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 91:
			StringCopy(&cVar2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		case 92:
			StringCopy(&cVar2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 93:
			StringCopy(&cVar2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		case 94:
			StringCopy(&cVar2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		case 95:
			StringCopy(&cVar2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		case 96:
			StringCopy(&cVar2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 97:
			StringCopy(&cVar2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 98:
			StringCopy(&cVar2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 99:
			StringCopy(&cVar2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 100:
			StringCopy(&cVar2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 101:
			StringCopy(&cVar2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 102:
			StringCopy(&cVar2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 103:
			StringCopy(&cVar2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 104:
			StringCopy(&cVar2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 105:
			StringCopy(&cVar2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 106:
			StringCopy(&cVar2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 107:
			StringCopy(&cVar2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 108:
			StringCopy(&cVar2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 109:
			StringCopy(&cVar2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 110:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 111:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 112:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 113:
			StringCopy(&cVar2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 114:
			StringCopy(&cVar2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		case 115:
			StringCopy(&cVar2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		case 116:
			StringCopy(&cVar2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		case 117:
			StringCopy(&cVar2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 118:
			StringCopy(&cVar2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 119:
			StringCopy(&cVar2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 120:
			StringCopy(&cVar2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		case 121:
			StringCopy(&cVar2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		case 122:
			StringCopy(&cVar2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		case 123:
			StringCopy(&cVar2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		case 124:
			StringCopy(&cVar2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		case 125:
			StringCopy(&cVar2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		case 126:
			StringCopy(&cVar2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 127:
			StringCopy(&cVar2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		case 128:
			StringCopy(&cVar2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 129:
			StringCopy(&cVar2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		case 130:
			StringCopy(&cVar2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		case 131:
			StringCopy(&cVar2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		case 132:
			StringCopy(&cVar2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		case 133:
			StringCopy(&cVar2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 134:
			StringCopy(&cVar2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 135:
			StringCopy(&cVar2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		case 136:
			StringCopy(&cVar2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		case 137:
			StringCopy(&cVar2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 138:
			StringCopy(&cVar2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 139:
			StringCopy(&cVar2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 140:
			StringCopy(&cVar2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		case 141:
			StringCopy(&cVar2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		case 142:
			StringCopy(&cVar2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		case 143:
			StringCopy(&cVar2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		case 144:
			StringCopy(&cVar2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		case 145:
			StringCopy(&cVar2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		case 146:
			StringCopy(&cVar2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 147:
			StringCopy(&cVar2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 148:
			StringCopy(&cVar2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 149:
			StringCopy(&cVar2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 150:
			StringCopy(&cVar2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		case 151:
			StringCopy(&cVar2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 152:
			StringCopy(&cVar2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 153:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 38:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 39:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 41:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 49:
			StringCopy(&cVar2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 50:
			StringCopy(&cVar2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 51:
			StringCopy(&cVar2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 53:
			StringCopy(&cVar2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		case 54:
			StringCopy(&cVar2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 55:
			StringCopy(&cVar2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 56:
			StringCopy(&cVar2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 57:
			StringCopy(&cVar2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 58:
			StringCopy(&cVar2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 59:
			StringCopy(&cVar2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 60:
			StringCopy(&cVar2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 61:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 62:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 63:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 64:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 65:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 66:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 67:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 68:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 69:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 70:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 71:
			StringCopy(&cVar2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		case 72:
			StringCopy(&cVar2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 73:
			StringCopy(&cVar2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 74:
			StringCopy(&cVar2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		case 75:
			StringCopy(&cVar2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		case 76:
			StringCopy(&cVar2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 77:
			StringCopy(&cVar2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		case 78:
			StringCopy(&cVar2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		case 79:
			StringCopy(&cVar2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 80:
			StringCopy(&cVar2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		case 81:
			StringCopy(&cVar2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		case 82:
			StringCopy(&cVar2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		case 83:
			StringCopy(&cVar2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		case 84:
			StringCopy(&cVar2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		case 85:
			StringCopy(&cVar2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 86:
			StringCopy(&cVar2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 87:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 155, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_258(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;

	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (bParam2 % 32);
	uParam0->f_2 = (bParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), bParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_263(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (UNK_0x12AB0310C2281427(bParam3) != UNK_0x12AB0310C2281427("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), false);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		}
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 6);
		if (func_57(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (UNK_0x1A5A491D253EA7BA(Global_2621444, joaat("REBREATHER"), false))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_262(Global_2621444, 1, 1, 1, -1))
			{
				UNK_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_262(Global_2621444, 2, 1, 1, -1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_262(Global_2621444, 1, 1, 1, -1))
			{
				UNK_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_262(Global_2621444, 2, 1, 1, -1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_262(Global_2621444, 1, 1, 1, -1))
			{
				UNK_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_262(Global_2621444, 2, 1, 1, -1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), false);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		if (func_253(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
		}
		if (func_253(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
		if (!func_253(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_57(14))
			{
				return;
			}
			bVar0 = func_49(func_261(iParam1, uParam0->f_2), Global_76431, 0);
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, uParam0->f_1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
			}
			bVar0 = func_49(func_260(iParam1, uParam0->f_2), Global_76431, 0);
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, uParam0->f_1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
			}
			if (func_259(iParam1, uParam0->f_2, &iVar1))
			{
				bVar0 = func_49(iVar1, Global_76431, 0);
				if (!UNK_0xEAE0D21A50E6C7F4(bVar0, uParam0->f_1))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
}

bool func_259(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*iParam2 = 979;
					break;
				case 3:
					*iParam2 = 1429;
					break;
				case 4:
					*iParam2 = 995;
					break;
				case 6:
					*iParam2 = 1003;
					break;
				case 8:
					*iParam2 = 1430;
					break;
				case 9:
					*iParam2 = 1438;
					break;
				case 10:
					*iParam2 = 1440;
					break;
				case 1:
					*iParam2 = 1011;
					break;
				case 7:
					*iParam2 = 1441;
					break;
				case 11:
					*iParam2 = 987;
					break;
				case 14:
					*iParam2 = 1019;
					break;
				case 12:
					*iParam2 = 1030;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					*iParam2 = 980;
					break;
				case 4:
					*iParam2 = 996;
					break;
				case 6:
					*iParam2 = 1004;
					break;
				case 8:
					*iParam2 = 1431;
					break;
				case 9:
					*iParam2 = 1439;
					break;
				case 7:
					*iParam2 = 1442;
					break;
				case 11:
					*iParam2 = 988;
					break;
				case 14:
					*iParam2 = 1020;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					*iParam2 = 981;
					break;
				case 4:
					*iParam2 = 997;
					break;
				case 6:
					*iParam2 = 1005;
					break;
				case 8:
					*iParam2 = 1432;
					break;
				case 7:
					*iParam2 = 1443;
					break;
				case 11:
					*iParam2 = 989;
					break;
				case 14:
					*iParam2 = 1021;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 998;
					break;
				case 6:
					*iParam2 = 1006;
					break;
				case 8:
					*iParam2 = 1433;
					break;
				case 11:
					*iParam2 = 990;
					break;
				case 14:
					*iParam2 = 1022;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 999;
					break;
				case 6:
					*iParam2 = 1007;
					break;
				case 8:
					*iParam2 = 1434;
					break;
				case 11:
					*iParam2 = 991;
					break;
				case 14:
					*iParam2 = 1023;
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 1000;
					break;
				case 6:
					*iParam2 = 1008;
					break;
				case 8:
					*iParam2 = 1435;
					break;
				case 11:
					*iParam2 = 992;
					break;
				case 14:
					*iParam2 = 1024;
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 1001;
					break;
				case 6:
					*iParam2 = 1009;
					break;
				case 8:
					*iParam2 = 1436;
					break;
				case 11:
					*iParam2 = 993;
					break;
				case 14:
					*iParam2 = 1025;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 1002;
					break;
				case 6:
					*iParam2 = 1010;
					break;
				case 8:
					*iParam2 = 1437;
					break;
				case 11:
					*iParam2 = 994;
					break;
				case 14:
					*iParam2 = 1026;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 14:
					*iParam2 = 1027;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 14:
					*iParam2 = 1028;
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 14:
					*iParam2 = 1029;
					break;
			}
			break;
	}
	return *iParam2 != 978;
}

int func_260(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
				case 3:
					return 1414;
				case 4:
					return 943;
				case 6:
					return 951;
				case 8:
					return 1415;
				case 9:
					return 1423;
				case 10:
					return 1425;
				case 1:
					return 959;
				case 7:
					return 1426;
				case 11:
					return 935;
				case 14:
					return 967;
				case 12:
					return 978;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
				case 4:
					return 944;
				case 6:
					return 952;
				case 8:
					return 1416;
				case 9:
					return 1424;
				case 7:
					return 1427;
				case 11:
					return 936;
				case 14:
					return 968;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					return 929;
				case 4:
					return 945;
				case 6:
					return 953;
				case 8:
					return 1417;
				case 7:
					return 1428;
				case 11:
					return 937;
				case 14:
					return 969;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
				case 6:
					return 954;
				case 8:
					return 1418;
				case 11:
					return 938;
				case 14:
					return 970;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return 947;
				case 6:
					return 955;
				case 8:
					return 1419;
				case 11:
					return 939;
				case 14:
					return 971;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 4:
					return 948;
				case 6:
					return 956;
				case 8:
					return 1420;
				case 11:
					return 940;
				case 14:
					return 972;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 4:
					return 949;
				case 6:
					return 957;
				case 8:
					return 1421;
				case 11:
					return 941;
				case 14:
					return 973;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 4:
					return 950;
				case 6:
					return 958;
				case 8:
					return 1422;
				case 11:
					return 942;
				case 14:
					return 974;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
			}
			break;
	}
	return 935;
}

int func_261(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
				case 3:
					return 1399;
				case 4:
					return 891;
				case 6:
					return 899;
				case 8:
					return 1400;
				case 9:
					return 1408;
				case 10:
					return 1410;
				case 1:
					return 907;
				case 7:
					return 1411;
				case 11:
					return 883;
				case 14:
					return 915;
				case 12:
					return 926;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
				case 4:
					return 892;
				case 6:
					return 900;
				case 8:
					return 1401;
				case 9:
					return 1409;
				case 7:
					return 1412;
				case 11:
					return 884;
				case 14:
					return 916;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					return 877;
				case 4:
					return 893;
				case 6:
					return 901;
				case 8:
					return 1402;
				case 7:
					return 1413;
				case 11:
					return 885;
				case 14:
					return 917;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
				case 6:
					return 902;
				case 8:
					return 1403;
				case 11:
					return 886;
				case 14:
					return 918;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return 895;
				case 6:
					return 903;
				case 8:
					return 1404;
				case 11:
					return 887;
				case 14:
					return 919;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 4:
					return 896;
				case 6:
					return 904;
				case 8:
					return 1405;
				case 11:
					return 888;
				case 14:
					return 920;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 4:
					return 897;
				case 6:
					return 905;
				case 8:
					return 1406;
				case 11:
					return 889;
				case 14:
					return 921;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 4:
					return 898;
				case 6:
					return 906;
				case 8:
					return 1407;
				case 11:
					return 890;
				case 14:
					return 922;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
			}
			break;
	}
	return 883;
}

bool func_262(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	iVar0 = Global_76431;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_252(bParam0, iParam1, &iVar2, &bVar1, bParam2, bParam3))
	{
		bVar3 = func_49(iVar2, iVar0, 0);
		return UNK_0xEAE0D21A50E6C7F4(bVar3, bVar1);
	}
	return false;
}

int func_263(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
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
			return 0;
		case 10:
			return 1;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
	}
	return 0;
}

void func_264(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;

	iVar0 = (bParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	bVar1 = Global_76434[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = UNK_0x84997C8C8A5848DD(bVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			UNK_0xA69F810DF7EA02E6(iVar17, &Var2);
			if (!UNK_0x232048AB4B0E0259(Var2))
			{
				if (iVar18 == (bParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_258(&(Global_76434[0 /*14*/]), iParam0, bParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_258(&(Global_76434[0 /*14*/]), iParam0, bParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		UNK_0x30BBA34DD235D7FE(&Var20);
		iVar39 = 0;
		iVar40 = UNK_0xF6900DA2D9CD7BC5(bVar1, 7, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			UNK_0x4F79808059300187(iVar38, &Var20);
			if (!UNK_0x232048AB4B0E0259(Var20))
			{
				if (iVar39 == (bParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_258(&(Global_76434[0 /*14*/]), iParam0, bParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, UNK_0x1A5A491D253EA7BA(Var20.f_1, joaat("OUTFIT_ONLY"), false), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		UNK_0x65C0659496B1CC14(&Var41);
		if (bParam3 != -1 && Global_76603)
		{
			UNK_0xFDEBA3FD0BF0D4AC(bParam3, &Var41);
			Global_2621444 = Var41.f_1;
			Global_2621445 = Var41;
			func_258(&(Global_76434[0 /*14*/]), iParam0, bParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, UNK_0x1A5A491D253EA7BA(Var41.f_1, joaat("OUTFIT_ONLY"), false), -1, 2, Var41.f_1 != 0);
			return;
		}
		iVar59 = 0;
		iVar60 = UNK_0xF6900DA2D9CD7BC5(bVar1, 7, -1, 0, -1, func_218(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			UNK_0xC578687D5A643830(iVar58, &Var41);
			if (!UNK_0x232048AB4B0E0259(Var41))
			{
				if (iVar59 == (bParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_258(&(Global_76434[0 /*14*/]), iParam0, bParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, UNK_0x1A5A491D253EA7BA(Var41.f_1, joaat("OUTFIT_ONLY"), false), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_265(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_264(iVar10, bParam0, 9, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_266(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 9:
			StringCopy(&cVar2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		case 15:
			StringCopy(&cVar2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 18:
			StringCopy(&cVar2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 19:
			StringCopy(&cVar2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 20:
			StringCopy(&cVar2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		case 25:
			StringCopy(&cVar2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		case 26:
			StringCopy(&cVar2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		case 27:
			StringCopy(&cVar2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		case 28:
			StringCopy(&cVar2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		case 29:
			StringCopy(&cVar2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		case 30:
			StringCopy(&cVar2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		case 31:
			StringCopy(&cVar2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		case 32:
			StringCopy(&cVar2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		case 33:
			StringCopy(&cVar2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		case 34:
			StringCopy(&cVar2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 35:
			StringCopy(&cVar2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 36:
			StringCopy(&cVar2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 37:
			StringCopy(&cVar2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 38:
			StringCopy(&cVar2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 39:
			StringCopy(&cVar2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 40:
			StringCopy(&cVar2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		case 41:
			StringCopy(&cVar2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 48, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_267(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 1, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_268(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 1, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_269(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 6, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_270(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		default:
			func_264(iVar10, bParam0, 33, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_271(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		case 10:
			StringCopy(&cVar2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		case 11:
			StringCopy(&cVar2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		case 12:
			StringCopy(&cVar2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		case 13:
			StringCopy(&cVar2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		case 14:
			StringCopy(&cVar2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		case 15:
			StringCopy(&cVar2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		case 16:
			StringCopy(&cVar2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		default:
			func_264(iVar10, bParam0, 17, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_272(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_264(iVar10, bParam0, 18, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_273(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_264(iVar10, bParam0, 7, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_274(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		case 2:
			StringCopy(&cVar2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		case 3:
			StringCopy(&cVar2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		case 4:
			StringCopy(&cVar2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		case 5:
			StringCopy(&cVar2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		case 6:
			StringCopy(&cVar2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		case 7:
			StringCopy(&cVar2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		case 18:
			StringCopy(&cVar2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 19:
			StringCopy(&cVar2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		case 20:
			StringCopy(&cVar2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		case 21:
			StringCopy(&cVar2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		case 22:
			StringCopy(&cVar2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		case 23:
			StringCopy(&cVar2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		case 24:
			StringCopy(&cVar2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		case 25:
			StringCopy(&cVar2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		case 26:
			StringCopy(&cVar2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		case 27:
			StringCopy(&cVar2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		case 28:
			StringCopy(&cVar2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		case 37:
			StringCopy(&cVar2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		case 38:
			StringCopy(&cVar2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		case 39:
			StringCopy(&cVar2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		case 40:
			StringCopy(&cVar2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		case 41:
			StringCopy(&cVar2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 42:
			StringCopy(&cVar2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		case 43:
			StringCopy(&cVar2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		case 44:
			StringCopy(&cVar2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		case 45:
			StringCopy(&cVar2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		case 46:
			StringCopy(&cVar2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		case 47:
			StringCopy(&cVar2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		case 48:
			StringCopy(&cVar2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		case 49:
			StringCopy(&cVar2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		case 50:
			StringCopy(&cVar2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		case 51:
			StringCopy(&cVar2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		case 52:
			StringCopy(&cVar2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		case 53:
			StringCopy(&cVar2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		case 54:
			StringCopy(&cVar2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		case 55:
			StringCopy(&cVar2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		case 56:
			StringCopy(&cVar2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		case 57:
			StringCopy(&cVar2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 58:
			StringCopy(&cVar2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		case 59:
			StringCopy(&cVar2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		case 60:
			StringCopy(&cVar2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		case 61:
			StringCopy(&cVar2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		case 62:
			StringCopy(&cVar2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		case 63:
			StringCopy(&cVar2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		case 64:
			StringCopy(&cVar2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		case 65:
			StringCopy(&cVar2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		case 66:
			StringCopy(&cVar2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		case 67:
			StringCopy(&cVar2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		case 68:
			StringCopy(&cVar2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		case 69:
			StringCopy(&cVar2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 70:
			StringCopy(&cVar2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		case 71:
			StringCopy(&cVar2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 72:
			StringCopy(&cVar2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		case 73:
			StringCopy(&cVar2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		case 74:
			StringCopy(&cVar2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		case 75:
			StringCopy(&cVar2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		case 76:
			StringCopy(&cVar2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		case 77:
			StringCopy(&cVar2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		case 78:
			StringCopy(&cVar2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		case 79:
			StringCopy(&cVar2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		case 80:
			StringCopy(&cVar2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		case 81:
			StringCopy(&cVar2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		case 82:
			StringCopy(&cVar2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		case 83:
			StringCopy(&cVar2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		default:
			func_264(iVar10, bParam0, 84, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_275(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		case 2:
			StringCopy(&cVar2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		case 3:
			StringCopy(&cVar2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		case 20:
			StringCopy(&cVar2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 21:
			StringCopy(&cVar2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		case 22:
			StringCopy(&cVar2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		case 23:
			StringCopy(&cVar2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		case 24:
			StringCopy(&cVar2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		case 25:
			StringCopy(&cVar2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		case 26:
			StringCopy(&cVar2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		case 27:
			StringCopy(&cVar2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		case 28:
			StringCopy(&cVar2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		case 29:
			StringCopy(&cVar2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&cVar2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&cVar2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		case 36:
			StringCopy(&cVar2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		case 37:
			StringCopy(&cVar2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		case 38:
			StringCopy(&cVar2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		case 39:
			StringCopy(&cVar2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		case 40:
			StringCopy(&cVar2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		case 41:
			StringCopy(&cVar2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		case 42:
			StringCopy(&cVar2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		case 43:
			StringCopy(&cVar2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		case 45:
			StringCopy(&cVar2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		case 46:
			StringCopy(&cVar2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		case 47:
			StringCopy(&cVar2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		case 48:
			StringCopy(&cVar2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		case 49:
			StringCopy(&cVar2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		case 50:
			StringCopy(&cVar2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		case 51:
			StringCopy(&cVar2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		case 52:
			StringCopy(&cVar2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		case 53:
			StringCopy(&cVar2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		case 54:
			StringCopy(&cVar2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		case 55:
			StringCopy(&cVar2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		case 56:
			StringCopy(&cVar2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		case 57:
			StringCopy(&cVar2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		case 58:
			StringCopy(&cVar2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		case 59:
			StringCopy(&cVar2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		case 60:
			StringCopy(&cVar2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		case 61:
			StringCopy(&cVar2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		case 62:
			StringCopy(&cVar2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		case 63:
			StringCopy(&cVar2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		case 64:
			StringCopy(&cVar2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		case 65:
			StringCopy(&cVar2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		case 66:
			StringCopy(&cVar2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		case 67:
			StringCopy(&cVar2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		case 68:
			StringCopy(&cVar2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		case 69:
			StringCopy(&cVar2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		case 70:
			StringCopy(&cVar2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		case 71:
			StringCopy(&cVar2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		case 72:
			StringCopy(&cVar2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		case 73:
			StringCopy(&cVar2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		case 74:
			StringCopy(&cVar2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		case 75:
			StringCopy(&cVar2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		case 76:
			StringCopy(&cVar2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		case 77:
			StringCopy(&cVar2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		case 78:
			StringCopy(&cVar2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		case 79:
			StringCopy(&cVar2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		case 80:
			StringCopy(&cVar2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		case 81:
			StringCopy(&cVar2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		case 82:
			StringCopy(&cVar2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		case 83:
			StringCopy(&cVar2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		case 84:
			StringCopy(&cVar2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		case 85:
			StringCopy(&cVar2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		case 86:
			StringCopy(&cVar2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		case 87:
			StringCopy(&cVar2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		case 88:
			StringCopy(&cVar2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		case 89:
			StringCopy(&cVar2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		case 90:
			StringCopy(&cVar2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		case 91:
			StringCopy(&cVar2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		case 92:
			StringCopy(&cVar2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		case 93:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 94:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		case 95:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		case 96:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		case 97:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		case 98:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		case 99:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		case 100:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		case 101:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		case 102:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		case 103:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		default:
			func_264(iVar10, bParam0, 104, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_276(bool bParam0)
{
	if (bParam0 < 136)
	{
		func_278(bParam0);
	}
	else
	{
		func_277(bParam0);
	}
	if (Global_76434[0 /*14*/].f_2 == -1)
	{
		func_264(3, bParam0, 242, -1);
	}
}

void func_277(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 136:
			StringCopy(&cVar2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		case 137:
			StringCopy(&cVar2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		case 138:
			StringCopy(&cVar2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		case 139:
			StringCopy(&cVar2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		case 140:
			StringCopy(&cVar2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		case 141:
			StringCopy(&cVar2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		case 142:
			StringCopy(&cVar2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		case 143:
			StringCopy(&cVar2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		case 144:
			StringCopy(&cVar2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		case 145:
			StringCopy(&cVar2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		case 146:
			StringCopy(&cVar2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		case 147:
			StringCopy(&cVar2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		case 148:
			StringCopy(&cVar2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		case 149:
			StringCopy(&cVar2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		case 150:
			StringCopy(&cVar2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		case 151:
			StringCopy(&cVar2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		case 152:
			StringCopy(&cVar2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		case 153:
			StringCopy(&cVar2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		case 154:
			StringCopy(&cVar2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		case 155:
			StringCopy(&cVar2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		case 156:
			StringCopy(&cVar2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		case 157:
			StringCopy(&cVar2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		case 158:
			StringCopy(&cVar2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		case 159:
			StringCopy(&cVar2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		case 160:
			StringCopy(&cVar2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		case 161:
			StringCopy(&cVar2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		case 162:
			StringCopy(&cVar2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		case 163:
			StringCopy(&cVar2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		case 164:
			StringCopy(&cVar2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		case 165:
			StringCopy(&cVar2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		case 166:
			StringCopy(&cVar2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		case 167:
			StringCopy(&cVar2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		case 168:
			StringCopy(&cVar2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		case 169:
			StringCopy(&cVar2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		case 170:
			StringCopy(&cVar2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		case 171:
			StringCopy(&cVar2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		case 172:
			StringCopy(&cVar2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		case 173:
			StringCopy(&cVar2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		case 174:
			StringCopy(&cVar2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		case 175:
			StringCopy(&cVar2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		case 176:
			StringCopy(&cVar2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		case 177:
			StringCopy(&cVar2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		case 178:
			StringCopy(&cVar2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		case 179:
			StringCopy(&cVar2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		case 180:
			StringCopy(&cVar2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		case 181:
			StringCopy(&cVar2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		case 182:
			StringCopy(&cVar2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		case 183:
			StringCopy(&cVar2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		case 184:
			StringCopy(&cVar2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		case 185:
			StringCopy(&cVar2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		case 186:
			StringCopy(&cVar2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		case 187:
			StringCopy(&cVar2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		case 188:
			StringCopy(&cVar2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		case 189:
			StringCopy(&cVar2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		case 190:
			StringCopy(&cVar2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		case 191:
			StringCopy(&cVar2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		case 192:
			StringCopy(&cVar2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		case 193:
			StringCopy(&cVar2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		case 194:
			StringCopy(&cVar2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		case 195:
			StringCopy(&cVar2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		case 196:
			StringCopy(&cVar2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		case 197:
			StringCopy(&cVar2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		case 198:
			StringCopy(&cVar2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		case 199:
			StringCopy(&cVar2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		case 200:
			StringCopy(&cVar2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		case 201:
			StringCopy(&cVar2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		case 202:
			StringCopy(&cVar2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		case 203:
			StringCopy(&cVar2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		case 204:
			StringCopy(&cVar2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		case 205:
			StringCopy(&cVar2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		case 206:
			StringCopy(&cVar2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		case 207:
			StringCopy(&cVar2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		case 208:
			StringCopy(&cVar2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		case 209:
			StringCopy(&cVar2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		case 210:
			StringCopy(&cVar2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		case 211:
			StringCopy(&cVar2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		case 212:
			StringCopy(&cVar2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		case 213:
			StringCopy(&cVar2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		case 214:
			StringCopy(&cVar2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		case 215:
			StringCopy(&cVar2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		case 216:
			StringCopy(&cVar2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		case 217:
			StringCopy(&cVar2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		case 218:
			StringCopy(&cVar2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		case 219:
			StringCopy(&cVar2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		case 220:
			StringCopy(&cVar2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		case 221:
			StringCopy(&cVar2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		case 222:
			StringCopy(&cVar2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		case 223:
			StringCopy(&cVar2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		case 224:
			StringCopy(&cVar2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		case 225:
			StringCopy(&cVar2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		case 226:
			StringCopy(&cVar2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		case 227:
			StringCopy(&cVar2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		case 228:
			StringCopy(&cVar2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		case 229:
			StringCopy(&cVar2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		case 230:
			StringCopy(&cVar2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		case 231:
			StringCopy(&cVar2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		case 232:
			StringCopy(&cVar2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		case 233:
			StringCopy(&cVar2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		case 234:
			StringCopy(&cVar2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		case 235:
			StringCopy(&cVar2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		case 236:
			StringCopy(&cVar2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		case 237:
			StringCopy(&cVar2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		case 238:
			StringCopy(&cVar2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		case 239:
			StringCopy(&cVar2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		case 240:
			StringCopy(&cVar2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		case 241:
			StringCopy(&cVar2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		default:
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_278(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		case 2:
			StringCopy(&cVar2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		case 4:
			StringCopy(&cVar2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		case 5:
			StringCopy(&cVar2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		case 6:
			StringCopy(&cVar2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		case 7:
			StringCopy(&cVar2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		case 8:
			StringCopy(&cVar2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		case 9:
			StringCopy(&cVar2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		case 10:
			StringCopy(&cVar2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		case 11:
			StringCopy(&cVar2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		case 12:
			StringCopy(&cVar2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		case 13:
			StringCopy(&cVar2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		case 14:
			StringCopy(&cVar2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		case 15:
			StringCopy(&cVar2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		case 19:
			StringCopy(&cVar2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		case 20:
			StringCopy(&cVar2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		case 21:
			StringCopy(&cVar2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		case 22:
			StringCopy(&cVar2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		case 23:
			StringCopy(&cVar2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		case 24:
			StringCopy(&cVar2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		case 25:
			StringCopy(&cVar2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		case 26:
			StringCopy(&cVar2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		case 27:
			StringCopy(&cVar2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		case 29:
			StringCopy(&cVar2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		case 30:
			StringCopy(&cVar2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		case 31:
			StringCopy(&cVar2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		case 32:
			StringCopy(&cVar2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		case 33:
			StringCopy(&cVar2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		case 34:
			StringCopy(&cVar2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		case 35:
			StringCopy(&cVar2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		case 36:
			StringCopy(&cVar2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		case 37:
			StringCopy(&cVar2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		case 38:
			StringCopy(&cVar2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		case 39:
			StringCopy(&cVar2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		case 40:
			StringCopy(&cVar2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		case 41:
			StringCopy(&cVar2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		case 42:
			StringCopy(&cVar2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		case 43:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 44:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 47:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 48:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		case 49:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 50:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 51:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 52:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 53:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 54:
			StringCopy(&cVar2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 55:
			StringCopy(&cVar2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		case 56:
			StringCopy(&cVar2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		case 57:
			StringCopy(&cVar2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		case 58:
			StringCopy(&cVar2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		case 59:
			StringCopy(&cVar2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		case 60:
			StringCopy(&cVar2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		case 61:
			StringCopy(&cVar2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		case 62:
			StringCopy(&cVar2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		case 63:
			StringCopy(&cVar2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		case 64:
			StringCopy(&cVar2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		case 65:
			StringCopy(&cVar2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		case 66:
			StringCopy(&cVar2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		case 67:
			StringCopy(&cVar2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		case 68:
			StringCopy(&cVar2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		case 69:
			StringCopy(&cVar2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		case 70:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		case 71:
			StringCopy(&cVar2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		case 72:
			StringCopy(&cVar2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		case 73:
			StringCopy(&cVar2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		case 74:
			StringCopy(&cVar2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		case 75:
			StringCopy(&cVar2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		case 76:
			StringCopy(&cVar2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		case 77:
			StringCopy(&cVar2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		case 78:
			StringCopy(&cVar2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		case 79:
			StringCopy(&cVar2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 80:
			StringCopy(&cVar2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		case 81:
			StringCopy(&cVar2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		case 82:
			StringCopy(&cVar2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		case 83:
			StringCopy(&cVar2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		case 84:
			StringCopy(&cVar2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		case 85:
			StringCopy(&cVar2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		case 86:
			StringCopy(&cVar2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		case 87:
			StringCopy(&cVar2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		case 88:
			StringCopy(&cVar2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		case 89:
			StringCopy(&cVar2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		case 90:
			StringCopy(&cVar2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		case 91:
			StringCopy(&cVar2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		case 92:
			StringCopy(&cVar2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		case 93:
			StringCopy(&cVar2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		case 94:
			StringCopy(&cVar2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		case 95:
			StringCopy(&cVar2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 96:
			StringCopy(&cVar2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 97:
			StringCopy(&cVar2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 98:
			StringCopy(&cVar2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 99:
			StringCopy(&cVar2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		case 100:
			StringCopy(&cVar2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		case 101:
			StringCopy(&cVar2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		case 102:
			StringCopy(&cVar2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		case 103:
			StringCopy(&cVar2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		case 104:
			StringCopy(&cVar2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		case 105:
			StringCopy(&cVar2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		case 106:
			StringCopy(&cVar2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		case 107:
			StringCopy(&cVar2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		case 108:
			StringCopy(&cVar2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		case 109:
			StringCopy(&cVar2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		case 110:
			StringCopy(&cVar2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		case 111:
			StringCopy(&cVar2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		case 112:
			StringCopy(&cVar2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		case 113:
			StringCopy(&cVar2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		case 114:
			StringCopy(&cVar2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		case 115:
			StringCopy(&cVar2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		case 116:
			StringCopy(&cVar2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		case 117:
			StringCopy(&cVar2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		case 118:
			StringCopy(&cVar2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		case 119:
			StringCopy(&cVar2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		case 120:
			StringCopy(&cVar2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		case 121:
			StringCopy(&cVar2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		case 122:
			StringCopy(&cVar2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		case 123:
			StringCopy(&cVar2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		case 124:
			StringCopy(&cVar2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		case 125:
			StringCopy(&cVar2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		case 126:
			StringCopy(&cVar2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		case 127:
			StringCopy(&cVar2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		case 128:
			StringCopy(&cVar2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		case 129:
			StringCopy(&cVar2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		case 130:
			StringCopy(&cVar2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		case 131:
			StringCopy(&cVar2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		case 132:
			StringCopy(&cVar2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		case 133:
			StringCopy(&cVar2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		case 134:
			StringCopy(&cVar2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		case 135:
			StringCopy(&cVar2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		default:
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_279(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 9, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_280(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		default:
			func_264(iVar10, bParam0, 7, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_281(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			func_299(bParam1);
			break;
		case 2:
			func_298(bParam1);
			break;
		case 3:
			func_294(bParam1);
			break;
		case 4:
			func_293(bParam1);
			break;
		case 6:
			func_292(bParam1);
			break;
		case 5:
			func_291(bParam1);
			break;
		case 8:
			func_290(bParam1);
			break;
		case 9:
			func_289(bParam1);
			break;
		case 10:
			func_288(bParam1);
			break;
		case 1:
			func_287(bParam1);
			break;
		case 7:
			func_286(bParam1);
			break;
		case 11:
			func_285(bParam1);
			break;
		case 12:
			func_284(bParam1);
			break;
		case 13:
			func_283(bParam1);
			break;
		case 14:
			func_282(bParam1);
			break;
	}
}

void func_282(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		case 158:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		case 159:
			StringCopy(&cVar2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		case 160:
			StringCopy(&cVar2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		case 161:
			StringCopy(&cVar2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		case 162:
			StringCopy(&cVar2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		case 163:
			StringCopy(&cVar2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		case 164:
			StringCopy(&cVar2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		case 165:
			StringCopy(&cVar2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		case 166:
			StringCopy(&cVar2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		case 167:
			StringCopy(&cVar2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		case 168:
			StringCopy(&cVar2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		case 169:
			StringCopy(&cVar2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		case 170:
			StringCopy(&cVar2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		case 171:
			StringCopy(&cVar2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		case 172:
			StringCopy(&cVar2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		case 173:
			StringCopy(&cVar2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		case 174:
			StringCopy(&cVar2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		case 82:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		case 83:
			StringCopy(&cVar2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 84:
			StringCopy(&cVar2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 85:
			StringCopy(&cVar2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 86:
			StringCopy(&cVar2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 87:
			StringCopy(&cVar2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 88:
			StringCopy(&cVar2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 89:
			StringCopy(&cVar2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 90:
			StringCopy(&cVar2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 91:
			StringCopy(&cVar2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 92:
			StringCopy(&cVar2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 93:
			StringCopy(&cVar2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 94:
			StringCopy(&cVar2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		case 95:
			StringCopy(&cVar2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		case 96:
			StringCopy(&cVar2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		case 97:
			StringCopy(&cVar2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		case 98:
			StringCopy(&cVar2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		case 99:
			StringCopy(&cVar2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		case 100:
			StringCopy(&cVar2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		case 101:
			StringCopy(&cVar2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		case 102:
			StringCopy(&cVar2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		case 103:
			StringCopy(&cVar2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		case 104:
			StringCopy(&cVar2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		case 105:
			StringCopy(&cVar2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		case 106:
			StringCopy(&cVar2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		case 107:
			StringCopy(&cVar2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		case 108:
			StringCopy(&cVar2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		case 109:
			StringCopy(&cVar2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		case 110:
			StringCopy(&cVar2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		case 111:
			StringCopy(&cVar2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		case 112:
			StringCopy(&cVar2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 113:
			StringCopy(&cVar2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 114:
			StringCopy(&cVar2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 115:
			StringCopy(&cVar2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 116:
			StringCopy(&cVar2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 117:
			StringCopy(&cVar2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		case 118:
			StringCopy(&cVar2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 119:
			StringCopy(&cVar2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 120:
			StringCopy(&cVar2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 121:
			StringCopy(&cVar2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		case 122:
			StringCopy(&cVar2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		case 123:
			StringCopy(&cVar2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		case 124:
			StringCopy(&cVar2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		case 125:
			StringCopy(&cVar2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		case 126:
			StringCopy(&cVar2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		case 127:
			StringCopy(&cVar2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		case 128:
			StringCopy(&cVar2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		case 129:
			StringCopy(&cVar2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		case 130:
			StringCopy(&cVar2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		case 131:
			StringCopy(&cVar2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		case 132:
			StringCopy(&cVar2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		case 133:
			StringCopy(&cVar2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		case 134:
			StringCopy(&cVar2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 135:
			StringCopy(&cVar2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		case 136:
			StringCopy(&cVar2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		case 137:
			StringCopy(&cVar2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		case 138:
			StringCopy(&cVar2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		case 139:
			StringCopy(&cVar2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		case 140:
			StringCopy(&cVar2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 141:
			StringCopy(&cVar2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 142:
			StringCopy(&cVar2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		case 143:
			StringCopy(&cVar2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		case 144:
			StringCopy(&cVar2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		case 145:
			StringCopy(&cVar2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		case 146:
			StringCopy(&cVar2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		case 147:
			StringCopy(&cVar2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 148:
			StringCopy(&cVar2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		case 149:
			StringCopy(&cVar2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		case 150:
			StringCopy(&cVar2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		case 151:
			StringCopy(&cVar2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		case 152:
			StringCopy(&cVar2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		case 153:
			StringCopy(&cVar2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 154:
			StringCopy(&cVar2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		case 155:
			StringCopy(&cVar2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		case 156:
			StringCopy(&cVar2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		case 157:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		case 10:
			StringCopy(&cVar2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			Jump @5331; //curOff = 4015
			StringCopy(&cVar2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			Jump @5331; //curOff = 4041
			StringCopy(&cVar2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			Jump @5331; //curOff = 4066
			StringCopy(&cVar2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			Jump @5331; //curOff = 4091
			StringCopy(&cVar2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			Jump @5331; //curOff = 4117
			StringCopy(&cVar2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			Jump @5331; //curOff = 4143
			StringCopy(&cVar2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			Jump @5331; //curOff = 4169
			StringCopy(&cVar2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			Jump @5331; //curOff = 4195
			StringCopy(&cVar2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			Jump @5331; //curOff = 4221
			StringCopy(&cVar2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			Jump @5331; //curOff = 4246
			StringCopy(&cVar2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			Jump @5331; //curOff = 4271
			StringCopy(&cVar2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			Jump @5331; //curOff = 4296
			StringCopy(&cVar2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			Jump @5331; //curOff = 4321
			StringCopy(&cVar2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			Jump @5331; //curOff = 4346
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			Jump @5331; //curOff = 4370
			StringCopy(&cVar2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			Jump @5331; //curOff = 4391
			StringCopy(&cVar2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			Jump @5331; //curOff = 4412
			StringCopy(&cVar2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			Jump @5331; //curOff = 4433
			StringCopy(&cVar2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			Jump @5331; //curOff = 4454
			StringCopy(&cVar2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			Jump @5331; //curOff = 4475
			StringCopy(&cVar2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			Jump @5331; //curOff = 4496
			StringCopy(&cVar2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			Jump @5331; //curOff = 4517
			StringCopy(&cVar2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			Jump @5331; //curOff = 4538
			StringCopy(&cVar2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			Jump @5331; //curOff = 4560
			StringCopy(&cVar2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			Jump @5331; //curOff = 4582
			StringCopy(&cVar2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			Jump @5331; //curOff = 4604
			StringCopy(&cVar2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			Jump @5331; //curOff = 4626
			StringCopy(&cVar2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			Jump @5331; //curOff = 4648
			StringCopy(&cVar2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			Jump @5331; //curOff = 4670
			StringCopy(&cVar2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			Jump @5331; //curOff = 4692
			StringCopy(&cVar2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			Jump @5331; //curOff = 4714
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			Jump @5331; //curOff = 4735
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			Jump @5331; //curOff = 4756
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			Jump @5331; //curOff = 4777
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			Jump @5331; //curOff = 4798
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			Jump @5331; //curOff = 4819
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			Jump @5331; //curOff = 4840
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			Jump @5331; //curOff = 4861
			StringCopy(&cVar2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			Jump @5331; //curOff = 4886
			StringCopy(&cVar2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			Jump @5331; //curOff = 4911
			StringCopy(&cVar2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			Jump @5331; //curOff = 4936
			StringCopy(&cVar2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			Jump @5331; //curOff = 4961
			StringCopy(&cVar2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			Jump @5331; //curOff = 4986
			StringCopy(&cVar2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			Jump @5331; //curOff = 5011
			StringCopy(&cVar2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			Jump @5331; //curOff = 5036
			StringCopy(&cVar2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			Jump @5331; //curOff = 5061
			StringCopy(&cVar2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			Jump @5331; //curOff = 5087
			StringCopy(&cVar2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			Jump @5331; //curOff = 5113
			StringCopy(&cVar2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			Jump @5331; //curOff = 5139
			StringCopy(&cVar2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			Jump @5331; //curOff = 5165
			StringCopy(&cVar2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			Jump @5331; //curOff = 5191
			StringCopy(&cVar2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			Jump @5331; //curOff = 5217
			StringCopy(&cVar2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			Jump @5331; //curOff = 5243
			StringCopy(&cVar2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			Jump @5331; //curOff = 5269
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			Jump @5331; //curOff = 5290
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			Jump @5331; //curOff = 5311
			func_264(iVar10, bParam0, 175, -1);
			return;
			func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
		}

void func_283(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 9, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_284(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 9:
			StringCopy(&cVar2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		case 12:
			StringCopy(&cVar2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 14:
			StringCopy(&cVar2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 15:
			StringCopy(&cVar2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 16:
			StringCopy(&cVar2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		case 23:
			StringCopy(&cVar2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 24:
			StringCopy(&cVar2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 25:
			StringCopy(&cVar2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		case 26:
			StringCopy(&cVar2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 27:
			StringCopy(&cVar2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		case 28:
			StringCopy(&cVar2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		case 29:
			StringCopy(&cVar2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		case 30:
			StringCopy(&cVar2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		case 31:
			StringCopy(&cVar2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		case 32:
			StringCopy(&cVar2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		case 33:
			StringCopy(&cVar2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 34:
			StringCopy(&cVar2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 35:
			StringCopy(&cVar2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 36:
			StringCopy(&cVar2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 37:
			StringCopy(&cVar2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 38:
			StringCopy(&cVar2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		case 39:
			StringCopy(&cVar2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		case 40:
			StringCopy(&cVar2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		case 41:
			StringCopy(&cVar2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 47, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_285(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		case 5:
			StringCopy(&cVar2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		case 7:
			StringCopy(&cVar2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		case 8:
			StringCopy(&cVar2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		case 9:
			StringCopy(&cVar2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		case 11:
			StringCopy(&cVar2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		case 12:
			StringCopy(&cVar2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		case 13:
			StringCopy(&cVar2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		case 14:
			StringCopy(&cVar2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		case 15:
			StringCopy(&cVar2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		case 16:
			StringCopy(&cVar2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		case 17:
			StringCopy(&cVar2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		case 18:
			StringCopy(&cVar2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		case 19:
			StringCopy(&cVar2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		case 20:
			StringCopy(&cVar2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		case 21:
			StringCopy(&cVar2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		case 22:
			StringCopy(&cVar2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		case 23:
			StringCopy(&cVar2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		case 24:
			StringCopy(&cVar2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		case 25:
			StringCopy(&cVar2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		case 27:
			StringCopy(&cVar2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		case 28:
			StringCopy(&cVar2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		case 29:
			StringCopy(&cVar2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		case 30:
			StringCopy(&cVar2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		case 31:
			StringCopy(&cVar2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		case 32:
			StringCopy(&cVar2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		case 33:
			StringCopy(&cVar2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		case 34:
			StringCopy(&cVar2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		case 35:
			StringCopy(&cVar2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		case 36:
			StringCopy(&cVar2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		case 37:
			StringCopy(&cVar2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		case 38:
			StringCopy(&cVar2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		case 39:
			StringCopy(&cVar2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		case 40:
			StringCopy(&cVar2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		case 41:
			StringCopy(&cVar2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		case 44:
			StringCopy(&cVar2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		case 49:
			StringCopy(&cVar2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		case 50:
			StringCopy(&cVar2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		case 51:
			StringCopy(&cVar2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		case 52:
			StringCopy(&cVar2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		case 53:
			StringCopy(&cVar2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		case 54:
			StringCopy(&cVar2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		case 55:
			StringCopy(&cVar2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		case 56:
			StringCopy(&cVar2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		case 57:
			StringCopy(&cVar2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		case 58:
			StringCopy(&cVar2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		case 59:
			StringCopy(&cVar2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		case 60:
			StringCopy(&cVar2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		case 61:
			StringCopy(&cVar2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		case 62:
			StringCopy(&cVar2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		default:
			func_264(iVar10, bParam0, 63, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_286(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 1, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_287(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 5, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_288(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		case 36:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		case 37:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		case 38:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		case 39:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		case 41:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		case 42:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		case 43:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		case 44:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		case 47:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		case 49:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		case 50:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		case 51:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 53, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_289(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		case 6:
			StringCopy(&cVar2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		case 7:
			StringCopy(&cVar2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		case 8:
			StringCopy(&cVar2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		case 9:
			StringCopy(&cVar2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		case 10:
			StringCopy(&cVar2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 12, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_290(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		case 12:
			StringCopy(&cVar2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		case 13:
			StringCopy(&cVar2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		case 14:
			StringCopy(&cVar2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		case 15:
			StringCopy(&cVar2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		case 16:
			StringCopy(&cVar2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		case 17:
			StringCopy(&cVar2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		case 18:
			StringCopy(&cVar2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		case 19:
			StringCopy(&cVar2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		case 20:
			StringCopy(&cVar2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		case 21:
			StringCopy(&cVar2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		case 22:
			StringCopy(&cVar2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		case 23:
			StringCopy(&cVar2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		case 29:
			StringCopy(&cVar2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		case 30:
			StringCopy(&cVar2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		case 31:
			StringCopy(&cVar2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		case 32:
			StringCopy(&cVar2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		case 33:
			StringCopy(&cVar2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		case 34:
			StringCopy(&cVar2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		case 35:
			StringCopy(&cVar2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		case 36:
			StringCopy(&cVar2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		case 37:
			StringCopy(&cVar2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		case 38:
			StringCopy(&cVar2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		case 39:
			StringCopy(&cVar2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		case 40:
			StringCopy(&cVar2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		case 41:
			StringCopy(&cVar2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		case 42:
			StringCopy(&cVar2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		case 43:
			StringCopy(&cVar2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		case 45:
			StringCopy(&cVar2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		case 46:
			StringCopy(&cVar2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		case 47:
			StringCopy(&cVar2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		case 48:
			StringCopy(&cVar2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		case 49:
			StringCopy(&cVar2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		case 50:
			StringCopy(&cVar2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		case 51:
			StringCopy(&cVar2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		case 52:
			StringCopy(&cVar2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		case 53:
			StringCopy(&cVar2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		case 54:
			StringCopy(&cVar2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		case 55:
			StringCopy(&cVar2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		case 56:
			StringCopy(&cVar2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		case 57:
			StringCopy(&cVar2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		case 58:
			StringCopy(&cVar2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		case 59:
			StringCopy(&cVar2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		case 60:
			StringCopy(&cVar2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		case 61:
			StringCopy(&cVar2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		case 62:
			StringCopy(&cVar2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		case 63:
			StringCopy(&cVar2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		case 64:
			StringCopy(&cVar2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		case 65:
			StringCopy(&cVar2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		case 66:
			StringCopy(&cVar2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		case 67:
			StringCopy(&cVar2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		case 68:
			StringCopy(&cVar2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		case 69:
			StringCopy(&cVar2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		case 70:
			StringCopy(&cVar2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		case 71:
			StringCopy(&cVar2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		case 72:
			StringCopy(&cVar2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		case 73:
			StringCopy(&cVar2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		case 74:
			StringCopy(&cVar2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		case 75:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 76:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 77, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_291(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_264(iVar10, bParam0, 7, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_292(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		case 2:
			StringCopy(&cVar2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		case 3:
			StringCopy(&cVar2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		case 4:
			StringCopy(&cVar2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		case 5:
			StringCopy(&cVar2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		case 6:
			StringCopy(&cVar2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		case 7:
			StringCopy(&cVar2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		case 8:
			StringCopy(&cVar2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		case 9:
			StringCopy(&cVar2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		case 10:
			StringCopy(&cVar2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		case 11:
			StringCopy(&cVar2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		case 12:
			StringCopy(&cVar2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		case 20:
			StringCopy(&cVar2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		case 21:
			StringCopy(&cVar2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		case 22:
			StringCopy(&cVar2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		case 23:
			StringCopy(&cVar2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 25:
			StringCopy(&cVar2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		case 26:
			StringCopy(&cVar2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		case 27:
			StringCopy(&cVar2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		case 28:
			StringCopy(&cVar2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		case 29:
			StringCopy(&cVar2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		case 30:
			StringCopy(&cVar2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		case 31:
			StringCopy(&cVar2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		case 32:
			StringCopy(&cVar2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		case 33:
			StringCopy(&cVar2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&cVar2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&cVar2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		case 38:
			StringCopy(&cVar2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		case 39:
			StringCopy(&cVar2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		case 40:
			StringCopy(&cVar2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		case 41:
			StringCopy(&cVar2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		case 42:
			StringCopy(&cVar2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		case 43:
			StringCopy(&cVar2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		case 44:
			StringCopy(&cVar2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		case 45:
			StringCopy(&cVar2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		case 46:
			StringCopy(&cVar2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		case 47:
			StringCopy(&cVar2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		case 48:
			StringCopy(&cVar2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		case 49:
			StringCopy(&cVar2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		case 50:
			StringCopy(&cVar2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		case 51:
			StringCopy(&cVar2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		case 52:
			StringCopy(&cVar2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		case 53:
			StringCopy(&cVar2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		case 54:
			StringCopy(&cVar2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		case 55:
			StringCopy(&cVar2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		case 56:
			StringCopy(&cVar2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		case 57:
			StringCopy(&cVar2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		case 58:
			StringCopy(&cVar2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		case 59:
			StringCopy(&cVar2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		case 60:
			StringCopy(&cVar2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		case 61:
			StringCopy(&cVar2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		case 62:
			StringCopy(&cVar2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		case 63:
			StringCopy(&cVar2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		case 64:
			StringCopy(&cVar2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 65:
			StringCopy(&cVar2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		case 66:
			StringCopy(&cVar2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		case 67:
			StringCopy(&cVar2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		case 68:
			StringCopy(&cVar2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		case 69:
			StringCopy(&cVar2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		case 70:
			StringCopy(&cVar2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		case 71:
			StringCopy(&cVar2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		case 72:
			StringCopy(&cVar2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		case 73:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 74:
			StringCopy(&cVar2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		case 75:
			StringCopy(&cVar2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		case 76:
			StringCopy(&cVar2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 77:
			StringCopy(&cVar2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		case 78:
			StringCopy(&cVar2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		case 79:
			StringCopy(&cVar2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		case 80:
			StringCopy(&cVar2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		case 81:
			StringCopy(&cVar2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		case 82:
			StringCopy(&cVar2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		case 83:
			StringCopy(&cVar2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		case 84:
			StringCopy(&cVar2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		case 85:
			StringCopy(&cVar2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		case 86:
			StringCopy(&cVar2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		case 87:
			StringCopy(&cVar2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		case 88:
			StringCopy(&cVar2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		case 89:
			StringCopy(&cVar2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		case 90:
			StringCopy(&cVar2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		case 91:
			StringCopy(&cVar2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 92:
			StringCopy(&cVar2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		case 93:
			StringCopy(&cVar2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		case 94:
			StringCopy(&cVar2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		case 95:
			StringCopy(&cVar2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		case 96:
			StringCopy(&cVar2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		case 97:
			StringCopy(&cVar2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		case 98:
			StringCopy(&cVar2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		case 99:
			StringCopy(&cVar2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		case 100:
			StringCopy(&cVar2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		case 101:
			StringCopy(&cVar2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		case 102:
			StringCopy(&cVar2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		case 103:
			StringCopy(&cVar2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		case 104:
			StringCopy(&cVar2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		case 105:
			StringCopy(&cVar2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		case 106:
			StringCopy(&cVar2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		case 107:
			StringCopy(&cVar2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 108:
			StringCopy(&cVar2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		case 109:
			StringCopy(&cVar2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		case 110:
			StringCopy(&cVar2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		case 111:
			StringCopy(&cVar2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		case 112:
			StringCopy(&cVar2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		case 113:
			StringCopy(&cVar2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		case 114:
			StringCopy(&cVar2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		case 115:
			StringCopy(&cVar2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		case 116:
			StringCopy(&cVar2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		case 117:
			StringCopy(&cVar2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		case 118:
			StringCopy(&cVar2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		case 119:
			StringCopy(&cVar2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 120:
			StringCopy(&cVar2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		case 121:
			StringCopy(&cVar2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 122:
			StringCopy(&cVar2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		case 123:
			StringCopy(&cVar2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		case 124:
			StringCopy(&cVar2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		case 125:
			StringCopy(&cVar2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		case 126:
			StringCopy(&cVar2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		case 127:
			StringCopy(&cVar2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		case 128:
			StringCopy(&cVar2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		case 129:
			StringCopy(&cVar2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		case 130:
			StringCopy(&cVar2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		case 131:
			StringCopy(&cVar2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		case 132:
			StringCopy(&cVar2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		case 133:
			StringCopy(&cVar2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		default:
			func_264(iVar10, bParam0, 134, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_293(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		case 2:
			StringCopy(&cVar2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		case 3:
			StringCopy(&cVar2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		case 16:
			StringCopy(&cVar2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		case 17:
			StringCopy(&cVar2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		case 18:
			StringCopy(&cVar2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		case 19:
			StringCopy(&cVar2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		case 20:
			StringCopy(&cVar2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		case 21:
			StringCopy(&cVar2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 24:
			StringCopy(&cVar2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		case 26:
			StringCopy(&cVar2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		case 27:
			StringCopy(&cVar2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		case 28:
			StringCopy(&cVar2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		case 29:
			StringCopy(&cVar2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		case 30:
			StringCopy(&cVar2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 33:
			StringCopy(&cVar2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		case 34:
			StringCopy(&cVar2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		case 35:
			StringCopy(&cVar2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		case 36:
			StringCopy(&cVar2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		case 37:
			StringCopy(&cVar2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		case 38:
			StringCopy(&cVar2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		case 39:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		case 41:
			StringCopy(&cVar2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		case 42:
			StringCopy(&cVar2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		case 43:
			StringCopy(&cVar2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		case 44:
			StringCopy(&cVar2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		case 45:
			StringCopy(&cVar2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		case 46:
			StringCopy(&cVar2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		case 47:
			StringCopy(&cVar2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		case 48:
			StringCopy(&cVar2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		case 49:
			StringCopy(&cVar2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		case 50:
			StringCopy(&cVar2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		case 51:
			StringCopy(&cVar2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		case 52:
			StringCopy(&cVar2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 53:
			StringCopy(&cVar2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 54:
			StringCopy(&cVar2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		case 55:
			StringCopy(&cVar2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		case 56:
			StringCopy(&cVar2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		case 57:
			StringCopy(&cVar2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		case 58:
			StringCopy(&cVar2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		case 59:
			StringCopy(&cVar2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		case 60:
			StringCopy(&cVar2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		case 61:
			StringCopy(&cVar2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		case 62:
			StringCopy(&cVar2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		case 63:
			StringCopy(&cVar2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		case 64:
			StringCopy(&cVar2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		case 65:
			StringCopy(&cVar2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		case 66:
			StringCopy(&cVar2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		case 67:
			StringCopy(&cVar2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		case 68:
			StringCopy(&cVar2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		case 69:
			StringCopy(&cVar2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 70:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 71:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 72:
			StringCopy(&cVar2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 73:
			StringCopy(&cVar2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		case 74:
			StringCopy(&cVar2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		case 75:
			StringCopy(&cVar2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		case 76:
			StringCopy(&cVar2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		case 77:
			StringCopy(&cVar2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		case 78:
			StringCopy(&cVar2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 79:
			StringCopy(&cVar2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		case 80:
			StringCopy(&cVar2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		case 81:
			StringCopy(&cVar2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		case 82:
			StringCopy(&cVar2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		case 83:
			StringCopy(&cVar2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		case 84:
			StringCopy(&cVar2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		case 85:
			StringCopy(&cVar2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		case 86:
			StringCopy(&cVar2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		case 87:
			StringCopy(&cVar2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		case 88:
			StringCopy(&cVar2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		case 89:
			StringCopy(&cVar2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		case 90:
			StringCopy(&cVar2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		case 91:
			StringCopy(&cVar2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		case 92:
			StringCopy(&cVar2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		case 93:
			StringCopy(&cVar2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		case 94:
			StringCopy(&cVar2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		case 95:
			StringCopy(&cVar2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		case 96:
			StringCopy(&cVar2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		case 97:
			StringCopy(&cVar2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		case 98:
			StringCopy(&cVar2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		case 99:
			StringCopy(&cVar2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		case 100:
			StringCopy(&cVar2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		case 101:
			StringCopy(&cVar2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		case 102:
			StringCopy(&cVar2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		case 103:
			StringCopy(&cVar2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		case 104:
			StringCopy(&cVar2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		case 105:
			StringCopy(&cVar2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		case 106:
			StringCopy(&cVar2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		case 107:
			StringCopy(&cVar2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		case 108:
			StringCopy(&cVar2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		case 109:
			StringCopy(&cVar2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		case 110:
			StringCopy(&cVar2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		case 111:
			StringCopy(&cVar2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		case 112:
			StringCopy(&cVar2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		case 113:
			StringCopy(&cVar2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		case 114:
			StringCopy(&cVar2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		case 115:
			StringCopy(&cVar2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		case 116:
			StringCopy(&cVar2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		default:
			func_264(iVar10, bParam0, 117, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_294(bool bParam0)
{
	if (bParam0 < 107)
	{
		func_297(bParam0);
	}
	else if (bParam0 < 227)
	{
		func_296(bParam0);
	}
	else
	{
		func_295(bParam0);
	}
	if (Global_76434[0 /*14*/].f_2 == -1)
	{
		func_264(3, bParam0, 318, -1);
	}
}

void func_295(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 227:
			StringCopy(&cVar2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 228:
			StringCopy(&cVar2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		case 229:
			StringCopy(&cVar2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		case 230:
			StringCopy(&cVar2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		case 231:
			StringCopy(&cVar2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		case 232:
			StringCopy(&cVar2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		case 233:
			StringCopy(&cVar2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		case 234:
			StringCopy(&cVar2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		case 235:
			StringCopy(&cVar2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		case 236:
			StringCopy(&cVar2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		case 237:
			StringCopy(&cVar2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		case 238:
			StringCopy(&cVar2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		case 239:
			StringCopy(&cVar2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		case 240:
			StringCopy(&cVar2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		case 241:
			StringCopy(&cVar2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		case 242:
			StringCopy(&cVar2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		case 243:
			StringCopy(&cVar2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 244:
			StringCopy(&cVar2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 245:
			StringCopy(&cVar2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 246:
			StringCopy(&cVar2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 247:
			StringCopy(&cVar2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 248:
			StringCopy(&cVar2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 249:
			StringCopy(&cVar2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 250:
			StringCopy(&cVar2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 251:
			StringCopy(&cVar2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 252:
			StringCopy(&cVar2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 253:
			StringCopy(&cVar2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 254:
			StringCopy(&cVar2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 255:
			StringCopy(&cVar2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 256:
			StringCopy(&cVar2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 257:
			StringCopy(&cVar2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 258:
			StringCopy(&cVar2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 259:
			StringCopy(&cVar2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		case 260:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		case 261:
			StringCopy(&cVar2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		case 262:
			StringCopy(&cVar2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		case 263:
			StringCopy(&cVar2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		case 264:
			StringCopy(&cVar2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		case 265:
			StringCopy(&cVar2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		case 266:
			StringCopy(&cVar2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		case 267:
			StringCopy(&cVar2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		case 268:
			StringCopy(&cVar2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		case 269:
			StringCopy(&cVar2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		case 270:
			StringCopy(&cVar2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		case 271:
			StringCopy(&cVar2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		case 272:
			StringCopy(&cVar2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		case 273:
			StringCopy(&cVar2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		case 274:
			StringCopy(&cVar2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		case 275:
			StringCopy(&cVar2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		case 276:
			StringCopy(&cVar2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		case 277:
			StringCopy(&cVar2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		case 278:
			StringCopy(&cVar2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		case 279:
			StringCopy(&cVar2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		case 280:
			StringCopy(&cVar2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		case 281:
			StringCopy(&cVar2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		case 282:
			StringCopy(&cVar2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		case 283:
			StringCopy(&cVar2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		case 284:
			StringCopy(&cVar2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		case 285:
			StringCopy(&cVar2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		case 286:
			StringCopy(&cVar2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		case 287:
			StringCopy(&cVar2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		case 288:
			StringCopy(&cVar2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		case 289:
			StringCopy(&cVar2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		case 290:
			StringCopy(&cVar2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		case 291:
			StringCopy(&cVar2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		case 292:
			StringCopy(&cVar2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		case 293:
			StringCopy(&cVar2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		case 294:
			StringCopy(&cVar2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		case 295:
			StringCopy(&cVar2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		case 296:
			StringCopy(&cVar2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		case 297:
			StringCopy(&cVar2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		case 298:
			StringCopy(&cVar2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		case 299:
			StringCopy(&cVar2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		case 300:
			StringCopy(&cVar2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		case 301:
			StringCopy(&cVar2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		case 302:
			StringCopy(&cVar2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		case 303:
			StringCopy(&cVar2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		case 304:
			StringCopy(&cVar2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		case 305:
			StringCopy(&cVar2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		case 306:
			StringCopy(&cVar2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		case 307:
			StringCopy(&cVar2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		case 308:
			StringCopy(&cVar2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		case 309:
			StringCopy(&cVar2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		case 310:
			StringCopy(&cVar2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		case 311:
			StringCopy(&cVar2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		case 312:
			StringCopy(&cVar2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		case 313:
			StringCopy(&cVar2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		case 314:
			StringCopy(&cVar2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		case 315:
			StringCopy(&cVar2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		case 316:
			StringCopy(&cVar2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		case 317:
			StringCopy(&cVar2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		default:
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_296(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 107:
			StringCopy(&cVar2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		case 108:
			StringCopy(&cVar2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		case 109:
			StringCopy(&cVar2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		case 110:
			StringCopy(&cVar2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		case 111:
			StringCopy(&cVar2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		case 112:
			StringCopy(&cVar2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		case 113:
			StringCopy(&cVar2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		case 114:
			StringCopy(&cVar2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		case 115:
			StringCopy(&cVar2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		case 116:
			StringCopy(&cVar2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		case 117:
			StringCopy(&cVar2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		case 118:
			StringCopy(&cVar2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		case 119:
			StringCopy(&cVar2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		case 120:
			StringCopy(&cVar2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		case 121:
			StringCopy(&cVar2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		case 122:
			StringCopy(&cVar2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		case 123:
			StringCopy(&cVar2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		case 124:
			StringCopy(&cVar2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		case 125:
			StringCopy(&cVar2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		case 126:
			StringCopy(&cVar2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		case 127:
			StringCopy(&cVar2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		case 128:
			StringCopy(&cVar2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		case 129:
			StringCopy(&cVar2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		case 130:
			StringCopy(&cVar2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		case 131:
			StringCopy(&cVar2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		case 132:
			StringCopy(&cVar2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		case 133:
			StringCopy(&cVar2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		case 134:
			StringCopy(&cVar2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		case 135:
			StringCopy(&cVar2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		case 136:
			StringCopy(&cVar2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		case 137:
			StringCopy(&cVar2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		case 138:
			StringCopy(&cVar2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		case 139:
			StringCopy(&cVar2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		case 140:
			StringCopy(&cVar2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		case 141:
			StringCopy(&cVar2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		case 142:
			StringCopy(&cVar2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		case 143:
			StringCopy(&cVar2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		case 144:
			StringCopy(&cVar2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		case 145:
			StringCopy(&cVar2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		case 146:
			StringCopy(&cVar2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		case 147:
			StringCopy(&cVar2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		case 148:
			StringCopy(&cVar2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		case 149:
			StringCopy(&cVar2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		case 150:
			StringCopy(&cVar2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		case 151:
			StringCopy(&cVar2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		case 152:
			StringCopy(&cVar2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		case 153:
			StringCopy(&cVar2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		case 154:
			StringCopy(&cVar2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		case 155:
			StringCopy(&cVar2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		case 156:
			StringCopy(&cVar2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		case 157:
			StringCopy(&cVar2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		case 158:
			StringCopy(&cVar2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		case 159:
			StringCopy(&cVar2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 160:
			StringCopy(&cVar2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		case 161:
			StringCopy(&cVar2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		case 162:
			StringCopy(&cVar2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		case 163:
			StringCopy(&cVar2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		case 164:
			StringCopy(&cVar2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		case 165:
			StringCopy(&cVar2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		case 166:
			StringCopy(&cVar2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		case 167:
			StringCopy(&cVar2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		case 168:
			StringCopy(&cVar2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		case 169:
			StringCopy(&cVar2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		case 170:
			StringCopy(&cVar2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		case 171:
			StringCopy(&cVar2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		case 172:
			StringCopy(&cVar2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		case 173:
			StringCopy(&cVar2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		case 174:
			StringCopy(&cVar2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		case 175:
			StringCopy(&cVar2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		case 176:
			StringCopy(&cVar2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 177:
			StringCopy(&cVar2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		case 178:
			StringCopy(&cVar2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		case 179:
			StringCopy(&cVar2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		case 180:
			StringCopy(&cVar2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		case 181:
			StringCopy(&cVar2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		case 182:
			StringCopy(&cVar2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		case 183:
			StringCopy(&cVar2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		case 184:
			StringCopy(&cVar2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		case 185:
			StringCopy(&cVar2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		case 186:
			StringCopy(&cVar2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		case 187:
			StringCopy(&cVar2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		case 188:
			StringCopy(&cVar2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		case 189:
			StringCopy(&cVar2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		case 190:
			StringCopy(&cVar2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		case 191:
			StringCopy(&cVar2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		case 192:
			StringCopy(&cVar2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 193:
			StringCopy(&cVar2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 194:
			StringCopy(&cVar2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 195:
			StringCopy(&cVar2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		case 196:
			StringCopy(&cVar2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 197:
			StringCopy(&cVar2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 198:
			StringCopy(&cVar2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 199:
			StringCopy(&cVar2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 200:
			StringCopy(&cVar2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 201:
			StringCopy(&cVar2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 202:
			StringCopy(&cVar2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 203:
			StringCopy(&cVar2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 204:
			StringCopy(&cVar2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		case 205:
			StringCopy(&cVar2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		case 206:
			StringCopy(&cVar2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		case 207:
			StringCopy(&cVar2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 208:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 209:
			StringCopy(&cVar2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		case 210:
			StringCopy(&cVar2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		case 211:
			StringCopy(&cVar2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		case 212:
			StringCopy(&cVar2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		case 213:
			StringCopy(&cVar2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		case 214:
			StringCopy(&cVar2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		case 215:
			StringCopy(&cVar2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		case 216:
			StringCopy(&cVar2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		case 217:
			StringCopy(&cVar2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		case 218:
			StringCopy(&cVar2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		case 219:
			StringCopy(&cVar2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		case 220:
			StringCopy(&cVar2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		case 221:
			StringCopy(&cVar2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		case 222:
			StringCopy(&cVar2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		case 223:
			StringCopy(&cVar2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		case 224:
			StringCopy(&cVar2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		case 225:
			StringCopy(&cVar2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		case 226:
			StringCopy(&cVar2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		default:
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_297(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		case 3:
			StringCopy(&cVar2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		case 4:
			StringCopy(&cVar2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		case 5:
			StringCopy(&cVar2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		case 6:
			StringCopy(&cVar2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		case 7:
			StringCopy(&cVar2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		case 8:
			StringCopy(&cVar2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		case 9:
			StringCopy(&cVar2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		case 10:
			StringCopy(&cVar2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		case 11:
			StringCopy(&cVar2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		case 12:
			StringCopy(&cVar2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		case 13:
			StringCopy(&cVar2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		case 14:
			StringCopy(&cVar2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		case 15:
			StringCopy(&cVar2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 22:
			StringCopy(&cVar2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		case 24:
			StringCopy(&cVar2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		case 25:
			StringCopy(&cVar2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		case 26:
			StringCopy(&cVar2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		case 27:
			StringCopy(&cVar2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		case 28:
			StringCopy(&cVar2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		case 29:
			StringCopy(&cVar2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		case 30:
			StringCopy(&cVar2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		case 31:
			StringCopy(&cVar2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		case 32:
			StringCopy(&cVar2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		case 33:
			StringCopy(&cVar2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		case 34:
			StringCopy(&cVar2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		case 35:
			StringCopy(&cVar2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		case 36:
			StringCopy(&cVar2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		case 37:
			StringCopy(&cVar2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		case 38:
			StringCopy(&cVar2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		case 39:
			StringCopy(&cVar2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 41:
			StringCopy(&cVar2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 42:
			StringCopy(&cVar2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		case 43:
			StringCopy(&cVar2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		case 44:
			StringCopy(&cVar2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		case 45:
			StringCopy(&cVar2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		case 46:
			StringCopy(&cVar2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		case 47:
			StringCopy(&cVar2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		case 48:
			StringCopy(&cVar2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		case 49:
			StringCopy(&cVar2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		case 50:
			StringCopy(&cVar2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		case 51:
			StringCopy(&cVar2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		case 52:
			StringCopy(&cVar2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		case 53:
			StringCopy(&cVar2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		case 54:
			StringCopy(&cVar2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		case 55:
			StringCopy(&cVar2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		case 56:
			StringCopy(&cVar2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		case 57:
			StringCopy(&cVar2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		case 58:
			StringCopy(&cVar2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		case 59:
			StringCopy(&cVar2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		case 60:
			StringCopy(&cVar2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 61:
			StringCopy(&cVar2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		case 62:
			StringCopy(&cVar2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		case 63:
			StringCopy(&cVar2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		case 64:
			StringCopy(&cVar2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		case 65:
			StringCopy(&cVar2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		case 66:
			StringCopy(&cVar2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		case 67:
			StringCopy(&cVar2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		case 68:
			StringCopy(&cVar2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		case 69:
			StringCopy(&cVar2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		case 70:
			StringCopy(&cVar2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		case 71:
			StringCopy(&cVar2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		case 72:
			StringCopy(&cVar2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		case 73:
			StringCopy(&cVar2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 74:
			StringCopy(&cVar2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		case 75:
			StringCopy(&cVar2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		case 76:
			StringCopy(&cVar2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		case 77:
			StringCopy(&cVar2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		case 78:
			StringCopy(&cVar2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		case 79:
			StringCopy(&cVar2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		case 80:
			StringCopy(&cVar2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		case 81:
			StringCopy(&cVar2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		case 82:
			StringCopy(&cVar2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		case 83:
			StringCopy(&cVar2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		case 84:
			StringCopy(&cVar2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		case 85:
			StringCopy(&cVar2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		case 86:
			StringCopy(&cVar2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		case 87:
			StringCopy(&cVar2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		case 88:
			StringCopy(&cVar2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		case 89:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 90:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 91:
			StringCopy(&cVar2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 92:
			StringCopy(&cVar2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		case 93:
			StringCopy(&cVar2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		case 94:
			StringCopy(&cVar2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		case 95:
			StringCopy(&cVar2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		case 96:
			StringCopy(&cVar2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		case 97:
			StringCopy(&cVar2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		case 98:
			StringCopy(&cVar2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		case 99:
			StringCopy(&cVar2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		case 100:
			StringCopy(&cVar2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		case 101:
			StringCopy(&cVar2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		case 102:
			StringCopy(&cVar2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		case 103:
			StringCopy(&cVar2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		case 104:
			StringCopy(&cVar2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		case 105:
			StringCopy(&cVar2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		case 106:
			StringCopy(&cVar2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		default:
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_298(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		case 5:
			StringCopy(&cVar2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		case 6:
			StringCopy(&cVar2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		case 7:
			StringCopy(&cVar2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		case 8:
			StringCopy(&cVar2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		case 9:
			StringCopy(&cVar2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		case 10:
			StringCopy(&cVar2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		case 11:
			StringCopy(&cVar2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		case 12:
			StringCopy(&cVar2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		case 13:
			StringCopy(&cVar2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		case 14:
			StringCopy(&cVar2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		case 15:
			StringCopy(&cVar2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		case 16:
			StringCopy(&cVar2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 17:
			StringCopy(&cVar2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 18:
			StringCopy(&cVar2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 19:
			StringCopy(&cVar2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_264(iVar10, bParam0, 21, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_299(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		default:
			func_264(iVar10, bParam0, 10, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_300(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			func_317(bParam1);
			break;
		case 2:
			func_316(bParam1);
			break;
		case 3:
			func_313(bParam1);
			break;
		case 4:
			func_312(bParam1);
			break;
		case 6:
			func_311(bParam1);
			break;
		case 5:
			func_310(bParam1);
			break;
		case 8:
			func_309(bParam1);
			break;
		case 9:
			func_308(bParam1);
			break;
		case 10:
			func_307(bParam1);
			break;
		case 1:
			func_306(bParam1);
			break;
		case 7:
			func_305(bParam1);
			break;
		case 11:
			func_304(bParam1);
			break;
		case 12:
			func_303(bParam1);
			break;
		case 13:
			func_302(bParam1);
			break;
		case 14:
			func_301(bParam1);
			break;
	}
}

void func_301(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 31:
			StringCopy(&cVar2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 32:
			StringCopy(&cVar2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		case 38:
			StringCopy(&cVar2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 39:
			StringCopy(&cVar2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 41:
			StringCopy(&cVar2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 49:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 50:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 51:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 53:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 54:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 55:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 56:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 57:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 58:
			StringCopy(&cVar2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		case 59:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		case 60:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		case 61:
			StringCopy(&cVar2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 62:
			StringCopy(&cVar2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 63:
			StringCopy(&cVar2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		case 64:
			StringCopy(&cVar2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 65:
			StringCopy(&cVar2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 66:
			StringCopy(&cVar2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		case 67:
			StringCopy(&cVar2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 68:
			StringCopy(&cVar2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 69:
			StringCopy(&cVar2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 70:
			StringCopy(&cVar2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 71:
			StringCopy(&cVar2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 72:
			StringCopy(&cVar2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		case 73:
			StringCopy(&cVar2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		case 74:
			StringCopy(&cVar2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		case 75:
			StringCopy(&cVar2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		case 76:
			StringCopy(&cVar2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		case 77:
			StringCopy(&cVar2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		case 78:
			StringCopy(&cVar2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		case 79:
			StringCopy(&cVar2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		case 80:
			StringCopy(&cVar2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 81:
			StringCopy(&cVar2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 82:
			StringCopy(&cVar2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 83:
			StringCopy(&cVar2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 84:
			StringCopy(&cVar2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 85:
			StringCopy(&cVar2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 86:
			StringCopy(&cVar2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 87:
			StringCopy(&cVar2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 88:
			StringCopy(&cVar2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 89:
			StringCopy(&cVar2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 90:
			StringCopy(&cVar2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 91:
			StringCopy(&cVar2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		case 92:
			StringCopy(&cVar2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 93:
			StringCopy(&cVar2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		case 94:
			StringCopy(&cVar2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 95:
			StringCopy(&cVar2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		case 96:
			StringCopy(&cVar2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		case 97:
			StringCopy(&cVar2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		case 98:
			StringCopy(&cVar2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		case 99:
			StringCopy(&cVar2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		case 100:
			StringCopy(&cVar2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		case 101:
			StringCopy(&cVar2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		case 102:
			StringCopy(&cVar2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		case 103:
			StringCopy(&cVar2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		case 104:
			StringCopy(&cVar2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		case 105:
			StringCopy(&cVar2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 106:
			StringCopy(&cVar2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		case 107:
			StringCopy(&cVar2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 108:
			StringCopy(&cVar2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 109:
			StringCopy(&cVar2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		case 110:
			StringCopy(&cVar2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		case 111:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		case 112:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		default:
			func_264(iVar10, bParam0, 113, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_302(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_264(iVar10, bParam0, 10, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_303(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 9:
			StringCopy(&cVar2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		case 17:
			StringCopy(&cVar2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 21:
			StringCopy(&cVar2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 22:
			StringCopy(&cVar2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 23:
			StringCopy(&cVar2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 30:
			StringCopy(&cVar2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		case 31:
			StringCopy(&cVar2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 32:
			StringCopy(&cVar2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		case 38:
			StringCopy(&cVar2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		case 39:
			StringCopy(&cVar2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 40:
			StringCopy(&cVar2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		case 41:
			StringCopy(&cVar2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		case 42:
			StringCopy(&cVar2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		case 43:
			StringCopy(&cVar2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		case 44:
			StringCopy(&cVar2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 45:
			StringCopy(&cVar2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		case 46:
			StringCopy(&cVar2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 47:
			StringCopy(&cVar2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 48:
			StringCopy(&cVar2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 49:
			StringCopy(&cVar2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 50:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 51:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 53, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_304(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		case 4:
			StringCopy(&cVar2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		case 5:
			StringCopy(&cVar2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		case 6:
			StringCopy(&cVar2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		case 7:
			StringCopy(&cVar2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		case 8:
			StringCopy(&cVar2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		case 9:
			StringCopy(&cVar2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		case 10:
			StringCopy(&cVar2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		case 11:
			StringCopy(&cVar2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		case 12:
			StringCopy(&cVar2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		case 13:
			StringCopy(&cVar2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		case 14:
			StringCopy(&cVar2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		case 15:
			StringCopy(&cVar2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		case 16:
			StringCopy(&cVar2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		case 17:
			StringCopy(&cVar2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		case 18:
			StringCopy(&cVar2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		case 19:
			StringCopy(&cVar2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		case 20:
			StringCopy(&cVar2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		case 21:
			StringCopy(&cVar2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		case 22:
			StringCopy(&cVar2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		case 23:
			StringCopy(&cVar2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		case 24:
			StringCopy(&cVar2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		case 25:
			StringCopy(&cVar2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		case 26:
			StringCopy(&cVar2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		case 27:
			StringCopy(&cVar2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		case 28:
			StringCopy(&cVar2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		case 29:
			StringCopy(&cVar2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		case 30:
			StringCopy(&cVar2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		case 31:
			StringCopy(&cVar2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		case 32:
			StringCopy(&cVar2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		case 33:
			StringCopy(&cVar2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		case 34:
			StringCopy(&cVar2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		case 35:
			StringCopy(&cVar2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		case 36:
			StringCopy(&cVar2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		case 37:
			StringCopy(&cVar2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		case 38:
			StringCopy(&cVar2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		case 39:
			StringCopy(&cVar2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		case 40:
			StringCopy(&cVar2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		case 41:
			StringCopy(&cVar2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		case 42:
			StringCopy(&cVar2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		case 43:
			StringCopy(&cVar2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		case 44:
			StringCopy(&cVar2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 45, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_305(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 1, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_306(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 5, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_307(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		case 36:
			StringCopy(&cVar2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		case 37:
			StringCopy(&cVar2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		case 38:
			StringCopy(&cVar2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		case 39:
			StringCopy(&cVar2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		case 40:
			StringCopy(&cVar2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		case 41:
			StringCopy(&cVar2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		case 42:
			StringCopy(&cVar2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		case 43:
			StringCopy(&cVar2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		case 44:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		case 47:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		default:
			func_264(iVar10, bParam0, 48, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_308(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		case 10:
			StringCopy(&cVar2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		case 11:
			StringCopy(&cVar2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		case 12:
			StringCopy(&cVar2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		case 13:
			StringCopy(&cVar2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		case 14:
			StringCopy(&cVar2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_264(iVar10, bParam0, 20, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_309(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_264(iVar10, bParam0, 24, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_310(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_264(iVar10, bParam0, 14, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_311(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		case 2:
			StringCopy(&cVar2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		case 3:
			StringCopy(&cVar2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		case 4:
			StringCopy(&cVar2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		case 5:
			StringCopy(&cVar2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 20:
			StringCopy(&cVar2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		case 22:
			StringCopy(&cVar2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		case 23:
			StringCopy(&cVar2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		case 24:
			StringCopy(&cVar2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		case 25:
			StringCopy(&cVar2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		case 26:
			StringCopy(&cVar2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		case 27:
			StringCopy(&cVar2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		case 28:
			StringCopy(&cVar2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		case 29:
			StringCopy(&cVar2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		case 30:
			StringCopy(&cVar2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		case 31:
			StringCopy(&cVar2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		case 32:
			StringCopy(&cVar2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		case 33:
			StringCopy(&cVar2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		case 34:
			StringCopy(&cVar2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		case 35:
			StringCopy(&cVar2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		case 36:
			StringCopy(&cVar2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		case 37:
			StringCopy(&cVar2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		case 38:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 39:
			StringCopy(&cVar2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		case 40:
			StringCopy(&cVar2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		case 41:
			StringCopy(&cVar2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		case 42:
			StringCopy(&cVar2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		case 43:
			StringCopy(&cVar2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		case 44:
			StringCopy(&cVar2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 45:
			StringCopy(&cVar2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		case 46:
			StringCopy(&cVar2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		case 47:
			StringCopy(&cVar2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		case 48:
			StringCopy(&cVar2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		case 49:
			StringCopy(&cVar2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		case 50:
			StringCopy(&cVar2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		case 51:
			StringCopy(&cVar2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		case 52:
			StringCopy(&cVar2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		case 53:
			StringCopy(&cVar2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		case 54:
			StringCopy(&cVar2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		case 55:
			StringCopy(&cVar2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		case 56:
			StringCopy(&cVar2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		case 57:
			StringCopy(&cVar2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		case 58:
			StringCopy(&cVar2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		case 59:
			StringCopy(&cVar2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		case 60:
			StringCopy(&cVar2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 61:
			StringCopy(&cVar2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		case 62:
			StringCopy(&cVar2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		case 63:
			StringCopy(&cVar2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		case 64:
			StringCopy(&cVar2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		case 65:
			StringCopy(&cVar2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		case 66:
			StringCopy(&cVar2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		case 67:
			StringCopy(&cVar2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		case 68:
			StringCopy(&cVar2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		case 69:
			StringCopy(&cVar2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		case 70:
			StringCopy(&cVar2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		case 71:
			StringCopy(&cVar2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		case 72:
			StringCopy(&cVar2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 73:
			StringCopy(&cVar2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		case 74:
			StringCopy(&cVar2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 75:
			StringCopy(&cVar2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		case 76:
			StringCopy(&cVar2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		case 77:
			StringCopy(&cVar2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		case 78:
			StringCopy(&cVar2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		case 79:
			StringCopy(&cVar2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		case 80:
			StringCopy(&cVar2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		case 81:
			StringCopy(&cVar2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		case 82:
			StringCopy(&cVar2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		case 83:
			StringCopy(&cVar2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		case 84:
			StringCopy(&cVar2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		case 85:
			StringCopy(&cVar2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		case 86:
			StringCopy(&cVar2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		case 87:
			StringCopy(&cVar2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		case 88:
			StringCopy(&cVar2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		case 89:
			StringCopy(&cVar2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 90:
			StringCopy(&cVar2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		case 91:
			StringCopy(&cVar2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		case 92:
			StringCopy(&cVar2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		case 93:
			StringCopy(&cVar2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		case 94:
			StringCopy(&cVar2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		case 95:
			StringCopy(&cVar2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		case 96:
			StringCopy(&cVar2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		case 97:
			StringCopy(&cVar2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		case 98:
			StringCopy(&cVar2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		default:
			func_264(iVar10, bParam0, 99, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_312(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		case 9:
			StringCopy(&cVar2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		case 10:
			StringCopy(&cVar2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		case 11:
			StringCopy(&cVar2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		case 12:
			StringCopy(&cVar2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		case 13:
			StringCopy(&cVar2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		case 14:
			StringCopy(&cVar2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		case 15:
			StringCopy(&cVar2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 23:
			StringCopy(&cVar2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		case 24:
			StringCopy(&cVar2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 25:
			StringCopy(&cVar2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		case 26:
			StringCopy(&cVar2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		case 27:
			StringCopy(&cVar2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		case 28:
			StringCopy(&cVar2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		case 29:
			StringCopy(&cVar2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		case 30:
			StringCopy(&cVar2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 37:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 38:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 39:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 41:
			StringCopy(&cVar2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		case 42:
			StringCopy(&cVar2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		case 43:
			StringCopy(&cVar2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		case 44:
			StringCopy(&cVar2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		case 45:
			StringCopy(&cVar2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 47:
			StringCopy(&cVar2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		case 49:
			StringCopy(&cVar2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 50:
			StringCopy(&cVar2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		case 51:
			StringCopy(&cVar2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		case 52:
			StringCopy(&cVar2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		case 53:
			StringCopy(&cVar2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		case 54:
			StringCopy(&cVar2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		case 55:
			StringCopy(&cVar2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 56:
			StringCopy(&cVar2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		case 57:
			StringCopy(&cVar2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		case 58:
			StringCopy(&cVar2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		case 59:
			StringCopy(&cVar2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		case 60:
			StringCopy(&cVar2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		case 61:
			StringCopy(&cVar2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		case 62:
			StringCopy(&cVar2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		case 63:
			StringCopy(&cVar2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		case 64:
			StringCopy(&cVar2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		case 65:
			StringCopy(&cVar2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		case 66:
			StringCopy(&cVar2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		case 67:
			StringCopy(&cVar2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		case 68:
			StringCopy(&cVar2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		case 69:
			StringCopy(&cVar2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		case 70:
			StringCopy(&cVar2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		case 71:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 72:
			StringCopy(&cVar2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 73:
			StringCopy(&cVar2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		case 74:
			StringCopy(&cVar2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		case 75:
			StringCopy(&cVar2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		case 76:
			StringCopy(&cVar2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		case 77:
			StringCopy(&cVar2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		case 78:
			StringCopy(&cVar2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		case 79:
			StringCopy(&cVar2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		case 80:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 81:
			StringCopy(&cVar2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		case 82:
			StringCopy(&cVar2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		case 83:
			StringCopy(&cVar2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		case 84:
			StringCopy(&cVar2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		case 85:
			StringCopy(&cVar2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		case 86:
			StringCopy(&cVar2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		case 87:
			StringCopy(&cVar2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		case 88:
			StringCopy(&cVar2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		case 89:
			StringCopy(&cVar2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		case 90:
			StringCopy(&cVar2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		case 91:
			StringCopy(&cVar2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		case 92:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 93:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 94:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 95:
			StringCopy(&cVar2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		case 96:
			StringCopy(&cVar2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		case 97:
			StringCopy(&cVar2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		case 98:
			StringCopy(&cVar2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		case 99:
			StringCopy(&cVar2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		case 100:
			StringCopy(&cVar2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		case 101:
			StringCopy(&cVar2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		case 102:
			StringCopy(&cVar2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		case 103:
			StringCopy(&cVar2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		case 104:
			StringCopy(&cVar2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		case 105:
			StringCopy(&cVar2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		case 106:
			StringCopy(&cVar2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		case 107:
			StringCopy(&cVar2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		case 108:
			StringCopy(&cVar2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		case 109:
			StringCopy(&cVar2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		case 110:
			StringCopy(&cVar2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		case 111:
			StringCopy(&cVar2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		case 112:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 113, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_313(bool bParam0)
{
	if (bParam0 < 60)
	{
		func_315(bParam0);
	}
	else
	{
		func_314(bParam0);
	}
	if (Global_76434[0 /*14*/].f_2 == -1)
	{
		func_264(3, bParam0, 181, -1);
	}
}

void func_314(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 60:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 61:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 62:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 63:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 64:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 65:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 66:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 67:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 68:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		case 69:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 70:
			StringCopy(&cVar2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		case 71:
			StringCopy(&cVar2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		case 72:
			StringCopy(&cVar2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		case 73:
			StringCopy(&cVar2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		case 74:
			StringCopy(&cVar2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		case 75:
			StringCopy(&cVar2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		case 76:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 77:
			StringCopy(&cVar2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 78:
			StringCopy(&cVar2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		case 79:
			StringCopy(&cVar2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		case 80:
			StringCopy(&cVar2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		case 81:
			StringCopy(&cVar2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		case 82:
			StringCopy(&cVar2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		case 83:
			StringCopy(&cVar2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		case 84:
			StringCopy(&cVar2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		case 85:
			StringCopy(&cVar2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		case 86:
			StringCopy(&cVar2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		case 87:
			StringCopy(&cVar2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		case 88:
			StringCopy(&cVar2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		case 89:
			StringCopy(&cVar2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		case 90:
			StringCopy(&cVar2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		case 91:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 92:
			StringCopy(&cVar2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		case 93:
			StringCopy(&cVar2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		case 94:
			StringCopy(&cVar2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		case 95:
			StringCopy(&cVar2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		case 96:
			StringCopy(&cVar2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		case 97:
			StringCopy(&cVar2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		case 98:
			StringCopy(&cVar2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 99:
			StringCopy(&cVar2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		case 100:
			StringCopy(&cVar2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 101:
			StringCopy(&cVar2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		case 102:
			StringCopy(&cVar2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		case 103:
			StringCopy(&cVar2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		case 104:
			StringCopy(&cVar2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		case 105:
			StringCopy(&cVar2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		case 106:
			StringCopy(&cVar2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		case 107:
			StringCopy(&cVar2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		case 108:
			StringCopy(&cVar2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		case 109:
			StringCopy(&cVar2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		case 110:
			StringCopy(&cVar2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		case 111:
			StringCopy(&cVar2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		case 112:
			StringCopy(&cVar2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		case 113:
			StringCopy(&cVar2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		case 114:
			StringCopy(&cVar2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		case 115:
			StringCopy(&cVar2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		case 116:
			StringCopy(&cVar2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		case 117:
			StringCopy(&cVar2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		case 118:
			StringCopy(&cVar2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		case 119:
			StringCopy(&cVar2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		case 120:
			StringCopy(&cVar2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		case 121:
			StringCopy(&cVar2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		case 122:
			StringCopy(&cVar2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		case 123:
			StringCopy(&cVar2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		case 124:
			StringCopy(&cVar2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		case 125:
			StringCopy(&cVar2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		case 126:
			StringCopy(&cVar2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		case 127:
			StringCopy(&cVar2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		case 128:
			StringCopy(&cVar2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		case 129:
			StringCopy(&cVar2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		case 130:
			StringCopy(&cVar2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		case 131:
			StringCopy(&cVar2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		case 132:
			StringCopy(&cVar2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		case 133:
			StringCopy(&cVar2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		case 134:
			StringCopy(&cVar2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		case 135:
			StringCopy(&cVar2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		case 136:
			StringCopy(&cVar2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		case 137:
			StringCopy(&cVar2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		case 138:
			StringCopy(&cVar2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		case 139:
			StringCopy(&cVar2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		case 140:
			StringCopy(&cVar2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		case 141:
			StringCopy(&cVar2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		case 142:
			StringCopy(&cVar2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		case 143:
			StringCopy(&cVar2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		case 144:
			StringCopy(&cVar2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		case 145:
			StringCopy(&cVar2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		case 146:
			StringCopy(&cVar2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		case 147:
			StringCopy(&cVar2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		case 148:
			StringCopy(&cVar2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		case 149:
			StringCopy(&cVar2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		case 150:
			StringCopy(&cVar2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		case 151:
			StringCopy(&cVar2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		case 152:
			StringCopy(&cVar2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		case 153:
			StringCopy(&cVar2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		case 154:
			StringCopy(&cVar2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		case 155:
			StringCopy(&cVar2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		case 156:
			StringCopy(&cVar2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		case 157:
			StringCopy(&cVar2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		case 158:
			StringCopy(&cVar2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		case 159:
			StringCopy(&cVar2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		case 160:
			StringCopy(&cVar2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		case 161:
			StringCopy(&cVar2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		case 162:
			StringCopy(&cVar2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		case 163:
			StringCopy(&cVar2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		case 164:
			StringCopy(&cVar2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		case 165:
			StringCopy(&cVar2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		case 166:
			StringCopy(&cVar2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 167:
			StringCopy(&cVar2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		case 168:
			StringCopy(&cVar2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		case 169:
			StringCopy(&cVar2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		case 170:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 171:
			StringCopy(&cVar2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		case 172:
			StringCopy(&cVar2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		case 173:
			StringCopy(&cVar2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		case 174:
			StringCopy(&cVar2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 175:
			StringCopy(&cVar2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		case 176:
			StringCopy(&cVar2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		case 177:
			StringCopy(&cVar2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		case 178:
			StringCopy(&cVar2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		case 179:
			StringCopy(&cVar2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		case 180:
			StringCopy(&cVar2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		default:
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_315(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		case 3:
			StringCopy(&cVar2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		case 9:
			StringCopy(&cVar2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		case 10:
			StringCopy(&cVar2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		case 11:
			StringCopy(&cVar2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		case 12:
			StringCopy(&cVar2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		case 13:
			StringCopy(&cVar2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		case 14:
			StringCopy(&cVar2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		case 15:
			StringCopy(&cVar2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		case 21:
			StringCopy(&cVar2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		case 22:
			StringCopy(&cVar2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		case 23:
			StringCopy(&cVar2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		case 24:
			StringCopy(&cVar2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		case 25:
			StringCopy(&cVar2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		case 26:
			StringCopy(&cVar2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		case 27:
			StringCopy(&cVar2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		case 28:
			StringCopy(&cVar2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		case 29:
			StringCopy(&cVar2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		case 30:
			StringCopy(&cVar2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		case 31:
			StringCopy(&cVar2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		case 32:
			StringCopy(&cVar2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 37:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 38:
			StringCopy(&cVar2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		case 39:
			StringCopy(&cVar2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		case 40:
			StringCopy(&cVar2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		case 41:
			StringCopy(&cVar2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		case 42:
			StringCopy(&cVar2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		case 43:
			StringCopy(&cVar2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		case 44:
			StringCopy(&cVar2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		case 46:
			StringCopy(&cVar2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		case 47:
			StringCopy(&cVar2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		case 48:
			StringCopy(&cVar2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		case 49:
			StringCopy(&cVar2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		case 50:
			StringCopy(&cVar2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		case 51:
			StringCopy(&cVar2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		case 52:
			StringCopy(&cVar2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		case 53:
			StringCopy(&cVar2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		case 54:
			StringCopy(&cVar2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		case 55:
			StringCopy(&cVar2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		case 56:
			StringCopy(&cVar2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		case 57:
			StringCopy(&cVar2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		case 58:
			StringCopy(&cVar2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		case 59:
			StringCopy(&cVar2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		default:
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_316(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		default:
			func_264(iVar10, bParam0, 6, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_317(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		default:
			func_264(iVar10, bParam0, 7, -1);
			return;
	}
	func_258(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_318()
{
	Global_76434[0 /*14*/].f_1 = -1;
	Global_76434[0 /*14*/].f_2 = -1;
	Global_76434[0 /*14*/].f_5 = -1;
	Global_76434[0 /*14*/].f_3 = -1;
	Global_76434[0 /*14*/].f_4 = -1;
	Global_76434[0 /*14*/].f_7 = 0;
	Global_76434[0 /*14*/].f_6 = 0;
	Global_76434[0 /*14*/].f_13 = -1;
	Global_76434[0 /*14*/].f_12 = 0;
	Global_76434[0 /*14*/] = 0;
	StringCopy(&(Global_76434[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_319(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar20;
	int iVar30;

	Global_76434[1 /*14*/] = { func_255(iParam0, iParam1, iParam2, -1) };
	if (UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, false) && !UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			func_253(iParam1, Global_76434[1 /*14*/].f_5, Global_76434[1 /*14*/].f_2, 1, Global_76434[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("PLAYER_ZERO"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { func_240(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_319(iParam0, iVar1, uVar3[iVar1], 1, 1);
								func_320(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar20 = { func_237(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_319(iParam0, 14, uVar20[iVar2], 1, 1);
									func_320(iParam0, 14, uVar20[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			func_253(iParam1, Global_76434[1 /*14*/].f_5, Global_76434[1 /*14*/].f_2, 1, Global_76434[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("PLAYER_ZERO"):
					break;
				case joaat("PLAYER_ONE"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar30 = (227 + Global_76434[1 /*14*/].f_4);
								func_319(iParam0, 3, iVar30, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar30 = (176 + Global_76434[1 /*14*/].f_4);
								func_319(iParam0, 3, iVar30, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar30 = (25 + Global_76434[1 /*14*/].f_4);
								func_319(iParam0, 11, iVar30, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar30 = (9 + Global_76434[1 /*14*/].f_4);
								func_319(iParam0, 11, iVar30, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar30 = (43 + Global_76434[1 /*14*/].f_4);
								func_319(iParam0, 8, iVar30, 1, 0);
								iVar30 = (59 + Global_76434[1 /*14*/].f_4);
								func_319(iParam0, 8, iVar30, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar30 = (27 + Global_76434[1 /*14*/].f_4);
								func_319(iParam0, 8, iVar30, 1, 0);
								iVar30 = (59 + Global_76434[1 /*14*/].f_4);
								func_319(iParam0, 8, iVar30, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar30 = (27 + Global_76434[1 /*14*/].f_4);
								func_319(iParam0, 8, iVar30, 1, 0);
								iVar30 = (43 + Global_76434[1 /*14*/].f_4);
								func_319(iParam0, 8, iVar30, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar30 = (41 + Global_76434[1 /*14*/].f_4);
								func_319(iParam0, 14, iVar30, 1, 0);
							}
							break;
					}
					break;
				case joaat("PLAYER_TWO"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar30 = (94 + Global_76434[1 /*14*/].f_4);
								func_319(iParam0, 4, iVar30, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_319(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
			}
		}
		return 1;
	}
	return 0;
}

int func_320(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_76434[1 /*14*/] = { func_255(iParam0, iParam1, iParam2, -1) };
	if (UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, false) && !UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			func_253(iParam1, Global_76434[1 /*14*/].f_5, Global_76434[1 /*14*/].f_2, 0, Global_76434[1 /*14*/].f_1, 1, 0);
		}
		else
		{
			func_253(iParam1, Global_76434[1 /*14*/].f_5, Global_76434[1 /*14*/].f_2, 0, Global_76434[1 /*14*/].f_1, 0, 1);
		}
		return 1;
	}
	return 0;
}

int func_321(int iParam0)
{
	if (func_391(UNK_0x16F2683693E537C9()))
	{
		switch (iParam0)
		{
			case 15:
				if (func_209(UNK_0x16F2683693E537C9(), 12, 8))
				{
					return 1;
				}
				break;
			case 16:
				if (func_209(UNK_0x16F2683693E537C9(), 12, 8) || func_209(UNK_0x16F2683693E537C9(), 12, 28))
				{
					return 1;
				}
				break;
			default:
				return 1;
		}
	}
	return 0;
}

bool func_322(var uParam0, int iParam1)
{
	switch (uParam0->f_16)
	{
		case 0:
			if (*uParam0 == 12)
			{
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, true, 0))
				{
					if (func_391(uParam0->f_28[0]))
					{
						if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(uParam0->f_28[0], true), 1) < 3f)
						{
							if (func_328(2))
							{
								if (func_326(uParam0->f_27))
								{
									func_325(uParam0->f_27, *uParam0);
									func_494("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return true;
								}
							}
						}
					}
					else
					{
						return false;
					}
				}
				else if (func_391(uParam0->f_28[0]))
				{
					if (func_324(uParam0))
					{
						if (func_328(2))
						{
							if (func_326(uParam0->f_27))
							{
								func_325(uParam0->f_27, *uParam0);
								return true;
							}
						}
					}
				}
				else
				{
					return false;
				}
			}
			else if (*uParam0 == 21)
			{
				if ((((!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, true, 0) && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, true, 0)) && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, true, 0)) && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, true, 0)) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, true, 0))
				{
					if (func_391(uParam0->f_28[0]))
					{
						if (func_324(uParam0))
						{
							if (func_328(2))
							{
								if (func_326(uParam0->f_27))
								{
									func_325(uParam0->f_27, *uParam0);
									return true;
								}
							}
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
			else if (*uParam0 == 22)
			{
				if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, true, 0))
				{
					if (func_391(uParam0->f_28[0]))
					{
						if (func_324(uParam0))
						{
							if (func_328(2))
							{
								if (func_326(uParam0->f_27))
								{
									func_325(uParam0->f_27, *uParam0);
									return true;
								}
							}
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
			else if (func_391(uParam0->f_28[0]))
			{
				if (func_324(uParam0))
				{
					if (func_328(2))
					{
						if (func_326(uParam0->f_27))
						{
							func_325(uParam0->f_27, *uParam0);
							return true;
						}
					}
				}
			}
			else
			{
				return false;
			}
			break;
		case 2:
			if (func_391(uParam0->f_35[0]))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), uParam0->f_35[0], 0))
				{
					if (func_328(3))
					{
						func_325(uParam0->f_27, *uParam0);
						return true;
					}
				}
				else if (iParam1 == 1)
				{
					func_323();
				}
			}
			else
			{
				return false;
			}
			break;
		case 1:
			if (UNK_0xC844350D5D58C99A(uParam0->f_35[0]))
			{
				if (!UNK_0x437347B10A200C4B(uParam0->f_35[0], 0))
				{
					if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(uParam0->f_35[0], true), 1) < uParam0->f_15)
					{
						if (func_328(2))
						{
							if (func_326(uParam0->f_27))
							{
								func_325(uParam0->f_27, *uParam0);
								return true;
							}
						}
					}
				}
			}
			else
			{
				return false;
			}
			break;
		case 3:
			if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), uParam0->f_17[0 /*3*/], 1) < uParam0->f_15)
			{
				if (func_328(2))
				{
					if (func_326(uParam0->f_27))
					{
						func_325(uParam0->f_27, *uParam0);
						return true;
					}
				}
			}
			else
			{
				return false;
			}
			break;
		case 4:
			if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], false, true, 0))
			{
				if (func_328(2))
				{
					if (func_326(uParam0->f_27))
					{
						func_325(uParam0->f_27, *uParam0);
						return true;
					}
				}
			}
			else
			{
				return false;
			}
			break;
		case 5:
			if (*uParam0 == 6)
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if (func_391(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)))
					{
						if (UNK_0x4906F8A34E9F4814(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), joaat("TOWTRUCK")) || UNK_0x4906F8A34E9F4814(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), joaat("TOWTRUCK2")))
						{
							if (UNK_0x6D18156F72BE0773(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), uParam0->f_35[0]))
							{
								if (func_328(3))
								{
									return true;
								}
							}
						}
						else if ((UNK_0x4906F8A34E9F4814(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), joaat("CARGOBOB")) || UNK_0x4906F8A34E9F4814(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), joaat("CARGOBOB2"))) || UNK_0x4906F8A34E9F4814(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), joaat("CARGOBOB3")))
						{
							if (UNK_0x2709213DA9C091FF(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) && UNK_0xED55EA714F84A53E(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), uParam0->f_35[0]))
							{
								if (func_328(3))
								{
									return true;
								}
							}
						}
					}
				}
			}
			else if (*uParam0 == 10)
			{
				if (UNK_0x504A57ECC0B1E81C(UNK_0x16F2683693E537C9()) >= 2f)
				{
					if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, true, 0))
					{
						if (func_328(2))
						{
							if (func_326(uParam0->f_27))
							{
								func_325(uParam0->f_27, *uParam0);
								func_494("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return true;
							}
						}
					}
				}
			}
			else if (*uParam0 == 46)
			{
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, true, 0))
				{
					return false;
				}
			}
			else if (*uParam0 == 31)
			{
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, true, 0))
				{
					if (func_328(2))
					{
						if (func_326(1))
						{
							func_325(1, *uParam0);
							func_494("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return true;
						}
					}
				}
			}
			else if (*uParam0 == 39)
			{
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, true, 0))
				{
					if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, true, 0))
					{
						if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, true, 0))
						{
							if (func_328(2))
							{
								if (func_326(uParam0->f_27))
								{
									func_325(uParam0->f_27, *uParam0);
									func_494("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return true;
								}
							}
						}
					}
				}
			}
			if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], uParam0->f_24, 0, true, 0))
			{
				if (*uParam0 == 45)
				{
					if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, true, 0))
					{
						return false;
					}
				}
				if (func_328(2))
				{
					if (func_326(uParam0->f_27))
					{
						func_325(uParam0->f_27, *uParam0);
						return true;
					}
				}
			}
			else
			{
				return false;
			}
			break;
		case 6:
			break;
	}
	return false;
}

void func_323()
{
	func_27(&(Global_102203.f_2890), &Global_102203, 0, 1, 1, 0);
}

bool func_324(var uParam0)
{
	float fVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(uParam0->f_28[0], true), 1) < (uParam0->f_15 + fVar0))
		{
			return true;
		}
	}
	else if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(uParam0->f_28[0], true), 1) < uParam0->f_15)
	{
		return true;
	}
	return false;
}

void func_325(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		if (!func_129(iParam1))
		{
			return;
		}
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			func_494("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()) || UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
			{
				func_494("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				UNK_0x56FDC9ADE35F7DB0(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), false, true, 0);
			}
			func_143();
		}
	}
}

bool func_326(bool bParam0)
{
	bool bVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xA30EC016B12C03E4()))
	{
		if (UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
		{
			return true;
		}
		else if (bParam0)
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				bVar0 = UNK_0x728870EB733D12A1();
				if (func_327(bVar0))
				{
					if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()) || UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
					{
						if ((!UNK_0xE608C809F9416F00(bVar0) && !UNK_0xE934758D273C899A(bVar0)) && UNK_0x9C66D99E63E8E24C(bVar0) < 1f)
						{
							return true;
						}
					}
					else if (!UNK_0xE934758D273C899A(bVar0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_327(bool bParam0)
{
	if (func_391(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (!UNK_0x4E861BC5B1EDA7BD(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_328(int iParam0)
{
	bool bVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				bVar0 = func_105();
				if (!func_36(bVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_336()) || Global_110685) || Global_30770) || func_335()) || func_334(8, -1)) || func_93()) || func_333()) || func_332()) || func_331()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_336()) || Global_30770) || func_335()) || func_334(8, -1)) || func_332()) || func_93()) || func_333()) || func_331()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_336()) || Global_110685) || Global_30770) || func_335()) || func_334(8, -1)) || func_332()) || func_93()) || func_333()) || func_331()) || Global_111638.f_7683.f_919[bVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_336()) || Global_110685) || Global_30770) || func_335()) || func_334(8, -1)) || func_93()) || func_333()) || func_331()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_336() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_334(8, -1)) || func_331()) || func_330()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_334(8, -1) || func_93()) || func_333()) || func_330()) || func_329())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_336()) || Global_30770) || func_335()) || func_334(8, -1)) || func_333()) || func_332()) || func_331()) || Global_111638.f_7683.f_919[bVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_336()) || func_333()) || Global_110685) || Global_30770) || func_335()) || Global_42596) || func_334(8, -1)) || func_332()) || func_330()) || func_331()) || Global_111638.f_7683.f_919[bVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_336()) || Global_110685) || Global_30770) || func_335()) || func_334(8, -1)) || func_332()) || func_330()) || func_93()) || func_333()) || func_331())
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

bool func_329()
{
	return Global_98783.f_1;
}

bool func_330()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_331()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_332()
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

bool func_333()
{
	return Global_98796.f_346 > 0;
}

bool func_334(bool bParam0, int iParam1)
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

bool func_335()
{
	return Global_1312877;
}

bool func_336()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

void func_337(var uParam0, int iParam1)
{
	if (!*iParam1)
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), uParam0->f_17[0 /*3*/], 1) > 25f)
				{
					func_494("Resetting help text flag as player has moved out of range...");
					*iParam1 = 1;
				}
			}
		}
	}
}

void func_338(int iParam0, bool bParam1, vector3 vParam2)
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (!UNK_0xEA6BC48857E0AC4C(bParam1))
		{
			if (Global_41431 == 17)
			{
				if (*iParam0 != -1)
				{
					func_344(iParam0);
				}
			}
			else if (func_343())
			{
				if (*iParam0 != -1)
				{
					func_344(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_342(UNK_0x16F2683693E537C9(), vParam2, 1) <= 100f)
				{
					func_341(iParam0, 1);
				}
			}
			else
			{
				switch (func_340(*iParam0))
				{
					case 1:
						if (UNK_0x7F8A39872A07D2CE(bParam1, "JOSH_1_INT_CONCAT"))
						{
							UNK_0x8E590B419F1E5182(bParam1, 14, 8);
						}
						else
						{
							UNK_0xAE1670DD12E839C3(bParam1, 8);
						}
						UNK_0x084B7FAC53E6CA0A(2);
						func_339(*iParam0, 1);
						break;
					case 2:
						UNK_0x55BE34EDDEA0AC9E(0);
						UNK_0x5C8D148FC238F38A();
						UNK_0x084B7FAC53E6CA0A(0);
						func_339(*iParam0, 0);
						break;
				}
				if (func_342(UNK_0x16F2683693E537C9(), vParam2, 1) > 120f)
				{
					func_344(iParam0);
				}
			}
		}
	}
}

void func_339(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_76618 == iParam0)
		{
			Global_76619 = iParam0;
		}
	}
	else if (Global_76619 == iParam0)
	{
		Global_76619 = -1;
	}
}

int func_340(int iParam0)
{
	if (Global_76618 == iParam0)
	{
		if (Global_76619 == -1)
		{
			if (Global_76617 < UNK_0xF4CCC8CB6DE7F1AE())
			{
				return 1;
			}
		}
	}
	else if (Global_76619 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_341(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (Global_76615 < 5)
	{
		Global_76604[Global_76615 /*2*/] = 0;
		Global_76604[Global_76615 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_76615)
			{
				if (Global_76604[iVar1 /*2*/] == Global_76604[Global_76615 /*2*/])
				{
					Global_76604[Global_76615 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_76604[Global_76615 /*2*/];
		Global_76615++;
		Global_76616 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

float func_342(bool bParam0, vector3 vParam1, int iParam4)
{
	vector3 vVar0;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	return UNK_0x0EB28750412C3A5A(vVar0, vParam1, iParam4);
}

bool func_343()
{
	return Global_96053;
}

void func_344(int iParam0)
{
	UNK_0x55BE34EDDEA0AC9E(0);
	UNK_0x5C8D148FC238F38A();
	func_345(iParam0);
}

void func_345(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_76619 == *iParam0)
	{
		func_339(*iParam0, 0);
	}
	if (Global_76618 == *iParam0)
	{
		Global_76618 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_76615)
	{
		if (Global_76604[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_76615 - 2))
	{
		Global_76604[iVar2 /*2*/] = Global_76604[iVar2 + 1 /*2*/];
		Global_76604[iVar2 /*2*/].f_1 = Global_76604[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_76604[(Global_76615 - 1) /*2*/] = -1;
	Global_76604[(Global_76615 - 1) /*2*/].f_1 = 3;
	Global_76615 = (Global_76615 - 1);
	Global_76616 = 1;
	Global_76617 = UNK_0xF4CCC8CB6DE7F1AE();
	*iParam0 = -1;
}

void func_346(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_162();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_110725[iParam0 /*10*/].f_1 = 1;
}

void func_347()
{
	switch (iLocal_97)
	{
		case 0:
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_263) > 20000)
			{
				iLocal_97 = 1;
			}
			break;
		case 1:
			if (func_342(UNK_0x16F2683693E537C9(), -726.45f, 33.33f, 43.23f, 1) < 9f)
			{
				if (func_348(&uLocal_98, "EPS8AU", "EPS8_AMB1", 7, 0, 0, 0))
				{
					iLocal_97 = 2;
				}
			}
			if (func_342(UNK_0x16F2683693E537C9(), -666.55f, 49.19f, 42.08f, 1) < 9f)
			{
				if (func_348(&uLocal_98, "EPS8AU", "EPS8_AMB2", 7, 0, 0, 0))
				{
					iLocal_97 = 2;
				}
			}
			break;
		case 2:
			if (!func_363())
			{
				iLocal_263 = UNK_0x1C0640BA9A7327B3();
				iLocal_97 = 0;
			}
			break;
	}
}

bool func_348(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_360(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_349(sParam2, iParam3, 0);
}

int func_349(char* sParam0, int iParam1, bool bParam2)
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
					func_359();
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
		if (func_334(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_358();
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
				func_357();
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
				if (func_356())
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
			if (func_140())
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
			func_355();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_354();
		func_350();
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
		func_359();
	}
	return 0;
}

void func_350()
{
	if (!func_351())
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

bool func_351()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_87())
	{
		return false;
	}
	if (func_352(UNK_0xD803B885F5E47A62()))
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

bool func_352(int iParam0)
{
	return func_353(iParam0, 20);
}

bool func_353(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

void func_354()
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

void func_355()
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

bool func_356()
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

void func_357()
{
	if (func_57(14))
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
		Global_19486 = func_105();
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

void func_358()
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

void func_359()
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

void func_360(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_361(int iParam0)
{
	if (func_391(iParam0->f_28[0]))
	{
		switch (iLocal_272)
		{
			case 0:
				iLocal_273 = 0;
				vLocal_274[0 /*3*/] = { -2887.15f, 3197.88f, 10.17f };
				vLocal_274[1 /*3*/] = { -2888.92f, 3203.76f, 10.6f };
				vLocal_274[2 /*3*/] = { -2895.37f, 3199.37f, 10.03f };
				UNK_0x3F423BF5B8125A50("rcmepsilonism6");
				if (UNK_0xB4AE0788C1587752("rcmepsilonism6"))
				{
					UNK_0xC6EB89C59F2AF6B8(iParam0->f_28[0], "rcmepsilonism6", "cultist_upperstatic", 1090519040, -1056964608, -1, 49, false, 0, 0, 0);
					iLocal_272 = 1;
					func_494("Initialised Eps 6 Tom state machine");
				}
				break;
			case 1:
				if (!func_369(iParam0->f_28[0], 713668775))
				{
					UNK_0x96167B03C5A77156(iParam0->f_28[0], vLocal_274[iLocal_273 /*3*/], 1f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					func_494("Eps 6: Nav tasking Tom...");
					iLocal_272 = 2;
				}
				break;
			case 2:
				if (func_342(iParam0->f_28[0], vLocal_274[iLocal_273 /*3*/], 1) <= 1.2f)
				{
					iLocal_272 = 3;
					func_494("Eps 6: Tom at coord; do idle anim");
				}
				break;
			case 3:
				UNK_0xA3BF0AA5A2608191(iParam0->f_28[0]);
				UNK_0xC6EB89C59F2AF6B8(iParam0->f_28[0], "rcmepsilonism6", "cultist_idle_a", 16f, -2f, -1, 131072, false, 0, 0, 0);
				UNK_0xF895E10BF4C72645(iParam0->f_28[0], 0, 0);
				iLocal_272 = 4;
				func_494("Eps 6: Done Tom idle anim");
				break;
			case 4:
				if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_28[0], "rcmepsilonism6", "cultist_idle_a", 3))
				{
					if (UNK_0x8CA9406E01C7EE58(iParam0->f_28[0], "rcmepsilonism6", "cultist_idle_a") >= 0.98f)
					{
						if (iLocal_273 >= 2)
						{
							iLocal_273 = 0;
						}
						else
						{
							iLocal_273++;
						}
						UNK_0xC6EB89C59F2AF6B8(iParam0->f_28[0], "rcmepsilonism6", "cultist_upperstatic", 16f, -1056964608, -1, 49, false, 0, 0, 0);
						UNK_0xF895E10BF4C72645(iParam0->f_28[0], 0, 0);
						iLocal_272 = 1;
						func_494("Eps 6: Tom idle anim >0.98");
					}
				}
				else
				{
					if (iLocal_273 >= 2)
					{
						iLocal_273 = 0;
					}
					else
					{
						iLocal_273++;
					}
					UNK_0xC6EB89C59F2AF6B8(iParam0->f_28[0], "rcmepsilonism6", "cultist_upperstatic", 1090519040, -1056964608, -1, 49, false, 0, 0, 0);
					iLocal_272 = 1;
					func_494("Eps 6: Tom idle anim not playing");
				}
				break;
		}
	}
}

void func_362()
{
	Global_19671 = 0;
	func_359();
}

bool func_363()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

bool func_364(var uParam0, vector3 vParam1, char[4] cParam4, bool bParam5, int iParam6, char* sParam7, int iParam8)
{
	var uVar0;

	if (func_328(2))
	{
		if (!func_363())
		{
			if (((func_391(UNK_0x16F2683693E537C9()) && func_391(uParam0->f_28[0])) && (UNK_0x1C0640BA9A7327B3() - uParam0->f_60) > iParam8) && func_342(UNK_0x16F2683693E537C9(), vParam1, 1) < 20f)
			{
				uVar0 = 16;
				func_432(&uVar0, iParam6, uParam0->f_28[0], sParam7, 0, 1);
				func_367(&uVar0, cParam4, bParam5, 7, 0, 0);
				uParam0->f_60 = UNK_0x1C0640BA9A7327B3();
				return true;
			}
		}
		else if (func_365(bParam5))
		{
			if (func_391(UNK_0x16F2683693E537C9()))
			{
				if (func_342(UNK_0x16F2683693E537C9(), vParam1, 1) >= 20f)
				{
					func_362();
				}
			}
		}
	}
	return false;
}

bool func_365(bool bParam0)
{
	struct<6> Var0;

	Var0 = { func_366() };
	if (UNK_0x7F8A39872A07D2CE(&Var0, bParam0))
	{
		return true;
	}
	return false;
}

struct<6> func_366()
{
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

void func_367(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_360(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	UNK_0x5D96D8530B3D0904(&Global_19671, false);
	Global_20808 = iParam3;
	StringCopy(&Global_20795, sParam2, 24);
}

void func_368()
{
	switch (iLocal_97)
	{
		case 0:
			iLocal_97 = 1;
			break;
		case 1:
			if (func_342(UNK_0x16F2683693E537C9(), 1826.45f, 4699.58f, 38.15f, 1) <= 25f && iLocal_264 == 0)
			{
				if (func_348(&uLocal_98, "EPS4AUD", "EPS4_AMBJ", 8, 0, 0, 0))
				{
					iLocal_97 = 2;
					iLocal_264 = 1;
				}
			}
			break;
		case 2:
			if (!func_363())
			{
				iLocal_97 = 0;
			}
			else if (func_342(UNK_0x16F2683693E537C9(), 1826.45f, 4699.58f, 38.15f, 1) >= 28f)
			{
				func_362();
				iLocal_97 = 0;
			}
			break;
	}
}

bool func_369(bool bParam0, int iParam1)
{
	if (func_126(bParam0))
	{
		if (UNK_0xD1960163A3042274(bParam0, iParam1) == 1 || UNK_0xD1960163A3042274(bParam0, iParam1) == 0)
		{
			return true;
		}
	}
	return false;
}

void func_370()
{
	UNK_0x7E60C62A7CE58FC8(iLocal_268, "SET_COLOUR");
	UNK_0x3CAEA85DA607305E(255);
	UNK_0x3CAEA85DA607305E(10);
	UNK_0x3CAEA85DA607305E(10);
	UNK_0x3CAEA85DA607305E(255);
	UNK_0x3CAEA85DA607305E(10);
	UNK_0x3CAEA85DA607305E(10);
	UNK_0x3CAEA85DA607305E(255);
	UNK_0x3CAEA85DA607305E(10);
	UNK_0x3CAEA85DA607305E(10);
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(iLocal_268, "SET_DISTANCE");
	UNK_0x7C19E5E4784BD7CF(10f);
	UNK_0x7E60D21B163E9D56();
	UNK_0x3039591AD3E735CE(iLocal_269);
	UNK_0xEF45C43067063F18(iLocal_268, 0.1f, 0.24f, 0.21f, 0.51f, 100, 100, 100, 255, 0);
	if ((UNK_0x1C0640BA9A7327B3() - iLocal_270) > 1250)
	{
		UNK_0xEB819BD1E585E9CB(iLocal_271, "IDLE_BEEP_NPC", 1827.06f, 4700.52f, 39.16f, "EPSILONISM_04_SOUNDSET", false, 0, 0);
		iLocal_270 = UNK_0x1C0640BA9A7327B3();
	}
}

bool func_371(bool bParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;

	if (func_391(UNK_0x16F2683693E537C9()) && func_391(bParam0))
	{
		if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
		{
			return true;
		}
		if (func_385(bParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return true;
		}
		if (!UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
		{
			if (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
			{
				vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) - UNK_0x68F4C0EC296D3901(bParam0, true) };
				if ((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)) <= 5f)
				{
					return func_384(UNK_0x16F2683693E537C9(), bParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return false;
		}
		else if (func_372(bParam0, fParam3))
		{
			return true;
		}
	}
	return false;
}

bool func_372(bool bParam0, float fParam1)
{
	bool bVar0;

	if (func_391(UNK_0x16F2683693E537C9()) && func_391(bParam0))
	{
		if (func_383(bParam0) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0))
		{
			if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
			{
				bVar0 = 40f;
			}
			else
			{
				bVar0 = 3f;
			}
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, bVar0, bVar0, bVar0, 0, 1, 0))
			{
				if (func_373(bParam0, fParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_373(bool bParam0, float fParam1)
{
	return func_374(bParam0, UNK_0x16F2683693E537C9(), fParam1, 1, 250, 7);
}

bool func_374(bool bParam0, bool bParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;

	iVar4 = func_382(bParam0, bParam1);
	if (!func_391(bParam0) || !func_391(bParam1))
	{
		if (iVar4 != -1)
		{
			func_381(&(Local_37[iVar4 /*4*/]));
		}
		return false;
	}
	if (!func_378(bParam0, bParam1, fParam2, iParam3))
	{
		return false;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_377();
		if (iVar4 == -1)
		{
			return false;
		}
		Local_37[iVar4 /*4*/].f_1 = bParam0;
		Local_37[iVar4 /*4*/].f_2 = bParam1;
	}
	vVar1 = { UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f) };
	bVar0 = func_375(&(Local_37[iVar4 /*4*/]), vVar1, bParam1, &(Local_37[iVar4 /*4*/].f_3), bParam0, iParam5);
	return (bVar0 || (UNK_0x1C0640BA9A7327B3() - Local_37[iVar4 /*4*/].f_3) < iParam4);
}

int func_375(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	var uVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar7;
	int iVar8;

	bVar7 = false;
	if (!func_391(bParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_376(bParam4, iParam7) };
		*uParam0 = UNK_0xCD02F8660C47B801(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, bParam6, 7);
		return 0;
	}
	iVar8 = UNK_0x1EC301670B54C6DE(*uParam0, &uVar0, &vVar1, &uVar4, &bVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (UNK_0xEC560E589DF8370E(bVar7))
	{
		func_391(bVar7);
		if (UNK_0x940C1429253D3B1B(bVar7) == bParam4)
		{
			if (bLocal_78)
			{
				UNK_0xBA5BBB3ADDA49094(vParam1, UNK_0x68F4C0EC296D3901(bParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*iParam5 = UNK_0x1C0640BA9A7327B3();
			return 1;
		}
		return 0;
	}
	if (UNK_0xE2F1E99DD161A861(bVar7))
	{
		func_391(bVar7);
		if (UNK_0x405E212DDE472467(bParam4, 0))
		{
			if (UNK_0x96A5FE5834B81CE7(bVar7) == UNK_0x6937EA2286828455(bParam4, 0))
			{
				if (bLocal_78)
				{
					UNK_0xBA5BBB3ADDA49094(vParam1, UNK_0x68F4C0EC296D3901(bParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*iParam5 = UNK_0x1C0640BA9A7327B3();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_376(bool bParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 7)
	{
		iVar0 = UNK_0x09AC81E49EA267F7(false, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return UNK_0x68F4C0EC296D3901(bParam0, true);
	}
	else if (iParam1 == 1)
	{
		return UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return UNK_0x64430C979F516F7A(bParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return UNK_0x64430C979F516F7A(bParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return UNK_0x64430C979F516F7A(bParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return UNK_0x64430C979F516F7A(bParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return UNK_0x64430C979F516F7A(bParam0, 36864, 0f, 0f, 0f);
	}
	return UNK_0x68F4C0EC296D3901(bParam0, true);
}

int func_377()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_378(bool bParam0, bool bParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = { func_380(UNK_0x68F4C0EC296D3901(bParam1, true) - UNK_0x68F4C0EC296D3901(bParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return true;
	}
	if (iParam3 == 0)
	{
		vVar3 = { UNK_0x08D89CE2E20AE305(bParam0) };
	}
	else
	{
		vVar3 = { func_380(UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 5f, 0f) - UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_379(vVar3, vVar0);
	if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return false;
	}
	return true;
}

float func_379(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_380(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

void func_381(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_382(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0 /*4*/].f_1 == bParam0 && Local_37[iVar0 /*4*/].f_2 == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_383(bool bParam0)
{
	if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0) && UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
	{
		return true;
	}
	return false;
}

bool func_384(bool bParam0, bool bParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { UNK_0x08D89CE2E20AE305(bParam0) };
	vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, true) - UNK_0x68F4C0EC296D3901(bParam0, true) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / SYSTEM::VDIST(vVar3, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

bool func_385(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	fVar0 = 8f;
	bVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		bVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_391(UNK_0x16F2683693E537C9()) && func_391(bParam0))
	{
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar2, 1);
		if (iVar2 == joaat("WEAPON_PETROLCAN"))
		{
			fVar0 = 3f;
			bVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_389(bParam0, bParam1, fVar0, bVar1))
			{
				return true;
			}
			if (func_386(bParam0, bVar1, bParam3, bParam4))
			{
				return true;
			}
		}
		else
		{
			if (UNK_0x52AE17073D025311(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xD3DCEC81D13AAFB1(UNK_0x68F4C0EC296D3901(bParam0, true), fVar0, true))
					{
						return true;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					bVar1 = 1.86f;
				}
				if (func_389(bParam0, bParam1, fVar0, bVar1))
				{
					return true;
				}
			}
			if (func_386(bParam0, bVar1, bParam3, bParam4))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_386(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	vVar3 = { vVar0 };
	vVar0.x = (vVar0.x - bParam1);
	vVar0.f_1 = (vVar0.y - bParam1);
	vVar0.f_2 = (vVar0.z - bParam1);
	vVar3.x = (vVar3.x + bParam1);
	vVar3.f_1 = (vVar3.y + bParam1);
	vVar3.f_2 = (vVar3.z + bParam1);
	if (bParam2)
	{
		if (((UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_GRENADE"), bParam1, 1) || UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_MOLOTOV"), bParam1, 1)) || UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_SMOKEGRENADE"), bParam1, 1)) || UNK_0x0A4F3CD1EDAEF9D0(UNK_0x68F4C0EC296D3901(bParam0, true), joaat("WEAPON_STICKYBOMB"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_387(bParam0, bParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_387(bParam0, bParam1))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if (UNK_0x723EE7F83DF1497D(vVar0, vVar3, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_387(bool bParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;

	if ((((UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_GRENADE"), bParam1, &vVar1, &uVar0, 0) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_SMOKEGRENADE"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_BZGAS"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_STICKYBOMB"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_MOLOTOV"), bParam1, &vVar1, &uVar0, 0))
	{
		if (func_388(bParam0, vVar1, 90f, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_388(bool bParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = { func_380(vParam1 - UNK_0x68F4C0EC296D3901(bParam0, true)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return true;
	}
	if (iParam5 == 0)
	{
		vVar3 = { UNK_0x08D89CE2E20AE305(bParam0) };
	}
	else
	{
		vVar3 = { func_380(UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 5f, 0f) - UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_379(vVar3, vVar0);
	if (fVar6 <= SYSTEM::COS((fParam4 / 2f)))
	{
		return false;
	}
	return true;
}

bool func_389(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (bParam1)
	{
		if (UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, bParam3, bParam3, bParam3, 0, 1, 0))
			{
				return true;
			}
		}
	}
	if (UNK_0xD3DCEC81D13AAFB1(UNK_0x68F4C0EC296D3901(bParam0, true), fParam2, true))
	{
		return true;
	}
	return false;
}

int func_390(var uParam0, vector3 vParam1, char[4] cParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, float fParam9)
{
	var uVar0;

	if ((((func_391(UNK_0x16F2683693E537C9()) && func_391(uParam0->f_28[0])) && !func_363()) && (UNK_0x1C0640BA9A7327B3() - uParam0->f_60) > iParam8) && func_342(UNK_0x16F2683693E537C9(), vParam1, 1) < fParam9)
	{
		uVar0 = 16;
		func_432(&uVar0, iParam6, uParam0->f_28[0], sParam7, 0, 1);
		func_367(&uVar0, cParam4, sParam5, 7, 0, 0);
		uParam0->f_60 = UNK_0x1C0640BA9A7327B3();
		return 1;
	}
	return 0;
}

bool func_391(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_392()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
		{
			if (bLocal_265)
			{
				func_393(109, 0);
				bLocal_265 = false;
			}
		}
		else if (!bLocal_265)
		{
			func_393(109, 1);
			bLocal_265 = true;
		}
	}
	if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 244.9669f, 374.6696f, 104.4579f, 239.6119f, 360.3045f, 107.7523f, 9.0625f, 0, true, 0))
	{
		Global_7361 = 1;
	}
	else
	{
		Global_7361 = 0;
	}
}

void func_393(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 != 226)
	{
		if (Global_76622)
		{
			iVar0 = Global_2439138.f_75[iParam0];
		}
		else
		{
			iVar0 = Global_111638.f_7256[iParam0];
		}
		if (iVar0 != iParam1 || UNK_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				UNK_0x5D96D8530B3D0904(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
				Global_37690[iParam0] = iParam1;
			}
			else if (Global_76622)
			{
				Global_2439138.f_75[iParam0] = iParam1;
			}
			else
			{
				Global_111638.f_7256[iParam0] = iParam1;
			}
			UNK_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
			func_395(iParam0);
			if (UNK_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_394(iParam0);
			}
		}
	}
}

void func_394(int iParam0)
{
	if (!UNK_0xEAE0D21A50E6C7F4(Global_38161.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		UNK_0x5D96D8530B3D0904(&(Global_38161.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_38161[Global_38161.f_227] = iParam0;
		Global_38161.f_227++;
	}
}

void func_395(int iParam0)
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (!func_404())
	{
		return;
	}
	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		return;
	}
	Var0 = { func_403(iParam0) };
	if (UNK_0xEAE0D21A50E6C7F4(Var0.f_4, 2))
	{
		func_400(iParam0, &Var0);
	}
	if (!UNK_0x76395FF5E8D5E643(Var0.f_5))
	{
		if (UNK_0x22A8E52414415B76())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = UNK_0x0EB28750412C3A5A(Var0, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1);
	if ((UNK_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) && Global_37690[iParam0] == 2) && fVar10 > 210f)
	{
		UNK_0x0674E58A79778E99(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
		Global_37236[iParam0] = 0;
	}
	if (UNK_0x8A22C4C08282BF26(joaat("STARTUP_POSITIONING")) == 0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_37463[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_98796.f_343 == 0)
				{
					if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
					{
						Global_98796.f_343 = UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9());
					}
				}
				iVar11 = Global_98796.f_343;
				iVar12 = UNK_0xFBD08BECC9B87937(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					UNK_0x5D96D8530B3D0904(&(Global_37227[(iParam0 / 32)]), (iParam0 % 32));
					Global_37690[iParam0] = 3;
					UNK_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			UNK_0x0674E58A79778E99(&(Global_37463[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_37690[iParam0];
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Var0.f_4, false))
	{
		if (Global_111638.f_9080)
		{
			iVar9 = func_397(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_57(14))
		{
			iVar9 = 0;
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Var0.f_4, true) && UNK_0x8A22C4C08282BF26(joaat("AMBIENT_SOLOMON")) == 0)
	{
		if (func_396())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_111638.f_7256[iParam0];
	}
	if (Global_37917[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_37218[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) || (Global_37236[iParam0] == 0 && Global_37690[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_37217)
		{
		}
		else
		{
			if (!UNK_0x76395FF5E8D5E643(Var0.f_5))
			{
				UNK_0x8010B3127F058F0F(Var0.f_5, Var0.f_3, Var0, 0, false, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (UNK_0xEAE0D21A50E6C7F4(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || UNK_0x755FF954DAE327E1(UNK_0x9CED8DAD53D1A397(Var0.f_5)) <= 0.015f)
					{
						iVar14 = UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9());
						iVar15 = UNK_0xFBD08BECC9B87937(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
						}
						UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
						bVar8 = true;
					}
					break;
				case 4:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 2:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 0:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 1);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 3:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, 0, false, true);
					bVar8 = true;
					break;
				case 5:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				case 6:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				default:
					if (Var0.f_6 != 0f)
					{
						UNK_0xD3356E7C68990256(Var0.f_5, Var0.f_6, false, 0);
					}
					UNK_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
			}
		}
		if (bVar8)
		{
			UNK_0x0674E58A79778E99(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
			Global_37917[iParam0] = iVar9;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_37227[(iParam0 / 32)], (iParam0 % 32)) && Global_37690[iParam0] != 2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_37218[(iParam0 / 32)]), (iParam0 % 32));
		func_394(iParam0);
		if (Global_37236[iParam0] < 2)
		{
			Global_37236[iParam0]++;
		}
	}
}

bool func_396()
{
	if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
	{
		return false;
	}
	switch (func_105())
	{
		case 0:
			if (Global_111638.f_9080.f_99.f_58[65])
			{
				return true;
			}
			break;
		case 1:
			if (Global_111638.f_9080.f_99.f_58[66])
			{
				return true;
			}
			break;
		case 2:
			if (Global_111638.f_9080.f_99.f_58[65])
			{
				return true;
			}
			break;
	}
	return false;
}

int func_397(int iParam0)
{
	bool bVar0;

	bVar0 = func_105();
	if (func_398(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (bVar0 == 1)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[5], false) || UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[6], false))
			{
				return 0;
			}
		}
		if (func_36(bVar0))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_93771[5], bVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (bVar0 == 0)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[0], false))
				{
					return 0;
				}
			}
			if (func_36(bVar0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_93771[0], bVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		case 47:
		case 48:
		case 49:
			if (bVar0 == 1)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[5], false))
				{
					return 0;
				}
			}
			if (func_36(bVar0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_93771[5], bVar0))
				{
					return 0;
				}
			}
			break;
		case 50:
			if (bVar0 == 1)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[6], false))
				{
					return 0;
				}
			}
			if (func_36(bVar0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_93771[6], bVar0))
				{
					return 0;
				}
			}
			break;
		case 51:
		case 52:
			if (bVar0 == 2)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[2], false))
				{
					return 0;
				}
				if (func_36(bVar0))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_93771[2], bVar0))
					{
						return 0;
					}
				}
			}
			else if (bVar0 == 0)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[1], false))
				{
					return 0;
				}
				if (func_36(bVar0))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_93771[1], bVar0))
					{
						return 0;
					}
				}
			}
			break;
		case 53:
			if (bVar0 == 2)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[3], false))
				{
					return 0;
				}
			}
			if (func_36(bVar0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_93771[3], bVar0))
				{
					return 0;
				}
			}
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_398(int iParam0)
{
	int iVar0;

	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
			{
				iVar0 = UNK_0x134B62B726CEC8E6(func_399(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 1)));
				switch (iVar0)
				{
					case joaat("UTILLITRUCK"):
					case joaat("MONSTER"):
						return true;
				}
			}
		}
	}
	return false;
}

int func_399(int iParam0)
{
	return iParam0;
}

void func_400(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_94();
	iVar1 = func_402(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_401(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_111638.f_7256[iParam0] = 0;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_401(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_111638.f_7256[iParam0] = 0;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 12f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 141:
		case 142:
			if (func_401(iParam0))
			{
				if ((UNK_0x8A22C4C08282BF26(joaat("JEWELRY_HEIST")) == 0 && UNK_0x8A22C4C08282BF26(joaat("JEWELRY_SETUP1")) == 0) && !Global_111638.f_9080.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_111638.f_7256[iParam0] = 0;
							UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_111638.f_9080.f_99.f_58[4])
				{
					Global_111638.f_7256[iParam0] = 0;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (Global_111638.f_9080.f_99.f_58[4])
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			else if (UNK_0x8A22C4C08282BF26(joaat("JEWELRY_HEIST")) == 0 && UNK_0x8A22C4C08282BF26(joaat("JEWELRY_SETUP1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 18f)
					{
						Global_111638.f_7256[iParam0] = 1;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 18f)
					{
						Global_111638.f_7256[iParam0] = 1;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
			}
			break;
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_401(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_111638.f_7256[iParam0] = 0;
						UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 40f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), *uParam1) >= 40f)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 147:
		case 148:
			if (!func_401(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_401(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(joaat("ASSASSIN_VALET")) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else if (UNK_0x8A22C4C08282BF26(joaat("ASSASSIN_VALET")) > 0)
			{
				Global_111638.f_7256[iParam0] = 0;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 158:
		case 159:
			if (UNK_0x8A22C4C08282BF26(Global_89532[70 /*34*/].f_6) == 0)
			{
				if (!func_401(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 160:
		case 161:
			if (UNK_0x8A22C4C08282BF26(joaat("OMEGA2")) == 0)
			{
				if (!func_401(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 70:
		case 71:
		case 72:
			if (!func_401(iParam0) && UNK_0x8A22C4C08282BF26(Global_89532[26 /*34*/].f_6) == 0)
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			else
			{
				return;
			}
			break;
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_401(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(Global_89532[43 /*34*/].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 190:
		case 191:
			if (!func_401(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 193:
			if (!func_401(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(Global_89532[93 /*34*/].f_6) > 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 198:
			if (!func_401(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 80:
			if (!func_401(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(Global_89532[8 /*34*/].f_6) == 0 && UNK_0x8A22C4C08282BF26(Global_89532[10 /*34*/].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 205:
		case 206:
			if (!func_401(iParam0))
			{
				if (UNK_0x8A22C4C08282BF26(Global_89532[47 /*34*/].f_6) == 0)
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 207:
			if (UNK_0x8A22C4C08282BF26(Global_89532[70 /*34*/].f_6) == 0)
			{
				if (!func_401(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (UNK_0x8A22C4C08282BF26(Global_89532[48 /*34*/].f_6) == 0)
			{
				if (!func_401(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 99:
		case 100:
			if (UNK_0x8A22C4C08282BF26(Global_89532[39 /*34*/].f_6) == 0)
			{
				if (!func_401(iParam0))
				{
					Global_111638.f_7256[iParam0] = 1;
					UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
				}
			}
			break;
		case 216:
			if (!func_401(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 217:
		case 218:
			if (!func_401(iParam0))
			{
				Global_111638.f_7256[iParam0] = 1;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_401(iParam0))
			{
				Global_111638.f_7256[iParam0] = 0;
				UNK_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_111638.f_7256[iParam0], true, true);
			}
			break;
	}
}

bool func_401(int iParam0)
{
	struct<7> Var0;
	int iVar7;

	Var0 = { func_403(iParam0) };
	iVar7 = UNK_0x51D3DB30DC0C68AD(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_402(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

struct<7> func_403(int iParam0)
{
	struct<7> Var0;

	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		case 1:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		case 2:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		case 3:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		case 4:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		case 5:
			Var0.f_3 = joaat("V_ILEV_BS_DOOR");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		case 6:
			Var0.f_3 = joaat("V_ILEV_HD_DOOR_L");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		case 7:
			Var0.f_3 = joaat("V_ILEV_HD_DOOR_R");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		case 8:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		case 9:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		case 10:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		case 11:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		case 12:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		case 13:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		case 14:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		case 15:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		case 16:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		case 17:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		case 18:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		case 19:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		case 20:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		case 21:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		case 22:
			Var0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		case 23:
			Var0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		case 24:
			Var0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		case 25:
			Var0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		case 26:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		case 27:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		case 28:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		case 29:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		case 30:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		case 31:
			Var0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		case 32:
			Var0.f_3 = joaat("V_ILEV_TA_DOOR");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		case 33:
			Var0.f_3 = joaat("V_ILEV_ML_DOOR1");
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		case 34:
			Var0.f_3 = joaat("V_ILEV_ML_DOOR1");
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		case 35:
			Var0.f_3 = joaat("V_ILEV_TA_DOOR");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		case 36:
			Var0.f_3 = joaat("V_ILEV_TA_DOOR");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		case 37:
			Var0.f_3 = joaat("V_ILEV_TA_DOOR");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		case 38:
			Var0.f_3 = joaat("V_ILEV_MM_DOORM_L");
			Var0 = { -817f, 179f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -2097039789;
			break;
		case 39:
			Var0.f_3 = joaat("V_ILEV_MM_DOORM_R");
			Var0 = { -816f, 178f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -2127416656;
			break;
		case 40:
			Var0.f_3 = joaat("PROP_LD_GARAGED_01");
			Var0 = { -815f, 186f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		case 41:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_L");
			Var0 = { -797f, 177f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 776026812;
			break;
		case 42:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_R");
			Var0 = { -795f, 178f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 698422331;
			break;
		case 43:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_L");
			Var0 = { -793f, 181f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 535076355;
			break;
		case 44:
			Var0.f_3 = joaat("PROP_BH1_48_BACKDOOR_R");
			Var0 = { -794f, 183f, 73f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 474675599;
			break;
		case 45:
			Var0.f_3 = joaat("PROP_BH1_48_GATE_1");
			Var0 = { -849f, 179f, 70f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1978427516;
			break;
		case 46:
			Var0.f_3 = joaat("V_ILEV_MM_WINDOWWC");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1700375831;
			break;
		case 47:
			Var0.f_3 = joaat("V_ILEV_FA_FRONTDOOR");
			Var0 = { -14f, -1441f, 31f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 613961892;
			break;
		case 48:
			Var0.f_3 = joaat("V_ILEV_FH_FRNTDOOR");
			Var0 = { -15f, -1427f, 31f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -272570634;
			break;
		case 49:
			Var0.f_3 = joaat("PROP_SC1_21_G_DOOR_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1040675994;
			break;
		case 50:
			Var0.f_3 = joaat("V_ILEV_FH_FRONTDOOR");
			Var0 = { 7.52f, 539.53f, 176.18f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 1201219326;
			break;
		case 51:
			Var0.f_3 = joaat("V_ILEV_TREVTRAILDR");
			Var0 = { 1973f, 3815f, 34f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = 1736361794;
			break;
		case 52:
			Var0.f_3 = joaat("PROP_CS4_10_TR_GD_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		case 53:
			Var0.f_3 = joaat("V_ILEV_TREV_DOORFRONT");
			Var0 = { -1150f, -1521f, 11f };
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), false);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("PROP_COM_LS_DOOR_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		case 55:
			Var0.f_3 = joaat("PROP_ID2_11_GDOOR");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		case 56:
			Var0.f_3 = joaat("PROP_COM_LS_DOOR_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		case 57:
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		case 58:
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		case 59:
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		case 60:
			Var0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		case 225:
			Var0.f_3 = joaat("LR_PROP_SUPERMOD_DOOR_01");
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		case 61:
			Var0.f_3 = joaat("V_ILEV_JANITOR_FRONTDOOR");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		case 62:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		case 63:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		case 64:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		case 65:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		case 66:
			Var0.f_3 = joaat("V_ILEV_STORE_DOOR");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		case 67:
			Var0.f_3 = joaat("V_ILEV_ML_DOOR1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		case 68:
			Var0.f_3 = joaat("V_ILEV_ML_DOOR1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		case 69:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		case 70:
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 71:
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 72:
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 73:
			Var0.f_3 = joaat("V_ILEV_BANK4DOOR02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		case 74:
			Var0.f_3 = joaat("V_ILEV_BANK4DOOR01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		case 75:
			Var0.f_3 = joaat("V_ILEV_LESTER_DOORFRONT");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		case 76:
			Var0.f_3 = joaat("V_ILEV_LESTER_DOORVERANDA");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		case 77:
			Var0.f_3 = joaat("V_ILEV_LESTER_DOORVERANDA");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		case 78:
			Var0.f_3 = joaat("V_ILEV_DEVIANTFRONTDOOR");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		case 79:
			Var0.f_3 = joaat("PROP_COM_GAR_DOOR_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		case 80:
			Var0.f_3 = joaat("V_ILEV_CS_DOOR");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 81:
			Var0.f_3 = joaat("PROP_STRIP_DOOR_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		case 82:
			Var0.f_3 = joaat("PROP_MAGENTA_DOOR");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		case 83:
			Var0.f_3 = joaat("PROP_MOTEL_DOOR_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		case 84:
			Var0.f_3 = joaat("V_ILEV_GANGSAFEDOOR");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		case 85:
			Var0.f_3 = joaat("V_ILEV_GANGSAFEDOOR");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		case 86:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_L");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		case 87:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_R");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		case 88:
			Var0.f_3 = joaat("PROP_CS6_03_DOOR_L");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		case 89:
			Var0.f_3 = joaat("PROP_CS6_03_DOOR_R");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		case 90:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_L");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		case 91:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_R");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		case 92:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_L");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		case 93:
			Var0.f_3 = joaat("V_ILEV_RA_DOOR1_R");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		case 94:
			Var0.f_3 = joaat("PROP_GAR_DOOR_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		case 95:
			Var0.f_3 = joaat("PROP_GAR_DOOR_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		case 96:
			Var0.f_3 = joaat("PROP_MAP_DOOR_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		case 97:
			Var0.f_3 = joaat("V_ILEV_FIB_DOOR1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		case 98:
			Var0.f_3 = joaat("V_ILEV_TORT_DOOR");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		case 99:
			Var0.f_3 = joaat("V_ILEV_BL_SHUTTER2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 100:
			Var0.f_3 = joaat("V_ILEV_BL_SHUTTER2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 101:
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_L");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 102:
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_R");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 103:
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_L");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 104:
			Var0.f_3 = joaat("V_ILEV_RC_DOOR3_R");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 105:
			Var0.f_3 = joaat("V_ILEV_SS_DOOR04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		case 106:
			Var0.f_3 = joaat("V_ILEV_FH_DOOR4");
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		case 107:
			Var0.f_3 = joaat("PROP_EPSILON_DOOR_L");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		case 108:
			Var0.f_3 = joaat("PROP_EPSILON_DOOR_R");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		case 109:
			Var0.f_3 = joaat("V_ILEV_EPSSTOREDOOR");
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		case 110:
			Var0.f_3 = joaat("PROP_CH2_09C_GARAGE_DOOR");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		case 111:
			Var0.f_3 = joaat("V_ILEV_DOOR_ORANGESOLID");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		case 112:
			Var0.f_3 = joaat("PROP_MAGENTA_DOOR");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		case 113:
			Var0.f_3 = joaat("PROP_CS4_05_TDOOR");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		case 114:
			Var0.f_3 = joaat("V_ILEV_HOUSEDOOR1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		case 115:
			Var0.f_3 = joaat("V_ILEV_FH_FRNTDOOR");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		case 116:
			Var0.f_3 = joaat("P_CUT_DOOR_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		case 117:
			Var0.f_3 = joaat("P_CUT_DOOR_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		case 118:
			Var0.f_3 = joaat("V_ILEV_PO_DOOR");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		case 119:
			Var0.f_3 = joaat("PROP_SS1_10_DOOR_L");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		case 120:
			Var0.f_3 = joaat("PROP_SS1_10_DOOR_R");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		case 121:
			Var0.f_3 = joaat("V_ILEV_FIBL_DOOR02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		case 122:
			Var0.f_3 = joaat("V_ILEV_FIBL_DOOR01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		case 123:
			Var0.f_3 = joaat("V_ILEV_CT_DOOR01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		case 124:
			Var0.f_3 = joaat("V_ILEV_CT_DOOR01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		case 125:
			Var0.f_3 = joaat("AP1_02_DOOR_L");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		case 126:
			Var0.f_3 = joaat("AP1_02_DOOR_R");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		case 128:
			Var0.f_3 = joaat("V_ILEV_FB_DOORSHORTL");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		case 129:
			Var0.f_3 = joaat("V_ILEV_FB_DOORSHORTR");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		case 130:
			Var0.f_3 = joaat("V_ILEV_FB_DOOR01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		case 131:
			Var0.f_3 = joaat("V_ILEV_FB_DOOR02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		case 127:
			Var0.f_3 = joaat("V_ILEV_GTDOOR");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		case 132:
			Var0.f_3 = joaat("PROP_DAMDOOR_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		case 133:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 134:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 135:
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_01A");
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), true);
			break;
		case 136:
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_01A");
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), true);
			break;
		case 137:
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_02A");
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), true);
			break;
		case 138:
			Var0.f_3 = joaat("PROP_SEC_BARRIER_LD_02A");
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), true);
			break;
		case 139:
			Var0.f_3 = joaat("V_ILEV_ROC_DOOR4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		case 140:
			Var0.f_3 = joaat("V_ILEV_ROC_DOOR4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		case 141:
			Var0.f_3 = joaat("P_JEWEL_DOOR_L");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 142:
			Var0.f_3 = joaat("P_JEWEL_DOOR_R1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 145:
			Var0.f_3 = joaat("PROP_LD_BANKDOORS_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 146:
			Var0.f_3 = joaat("PROP_LD_BANKDOORS_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 143:
			Var0.f_3 = joaat("HEI_PROP_HEI_BANKDOOR_NEW");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 144:
			Var0.f_3 = joaat("HEI_PROP_HEI_BANKDOOR_NEW");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 148:
			Var0.f_3 = joaat("HEI_V_ILEV_BK_GATE_PRIS");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 147:
			Var0.f_3 = joaat("V_ILEV_BK_DOOR");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 149:
			Var0.f_3 = joaat("V_ILEV_SHRF2DOOR");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		case 150:
			Var0.f_3 = joaat("V_ILEV_SHRF2DOOR");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		case 151:
			Var0.f_3 = joaat("V_ILEV_SHRFDOOR");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		case 152:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_L");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 153:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_R");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 154:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_L");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 155:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_R");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 156:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_L");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 157:
			Var0.f_3 = joaat("PROP_BHHOTEL_DOOR_R");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 158:
			Var0.f_3 = joaat("PROP_CH3_04_DOOR_01L");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 159:
			Var0.f_3 = joaat("PROP_CH3_04_DOOR_01R");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 160:
			Var0.f_3 = joaat("PROP_CH3_01_TRLRDOOR_L");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 161:
			Var0.f_3 = joaat("PROP_CH3_01_TRLRDOOR_R");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 162:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		case 163:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		case 165:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		case 166:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		case 167:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		case 168:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		case 169:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		case 170:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		case 171:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		case 172:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		case 173:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		case 174:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		case 175:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		case 176:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		case 177:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		case 178:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		case 179:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		case 180:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		case 181:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		case 182:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		case 183:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		case 184:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		case 164:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		case 185:
			Var0.f_3 = joaat("V_ILEV_GC_DOOR01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 3);
			break;
		case 186:
			Var0.f_3 = joaat("PROP_LRGGATE_01C_L");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		case 187:
			Var0.f_3 = joaat("PROP_LRGGATE_01C_R");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		case 188:
			Var0.f_3 = joaat("PROP_LRGGATE_01C_L");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		case 189:
			Var0.f_3 = joaat("PROP_LRGGATE_01C_R");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		case 190:
			Var0.f_3 = joaat("V_ILEV_BL_DOOREL_L");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 191:
			Var0.f_3 = joaat("V_ILEV_BL_DOOREL_R");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 192:
			Var0.f_3 = joaat("V_ILEV_CBANKCOUNTDOOR01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		case 193:
			Var0.f_3 = joaat("PROP_FNCLINK_03GATE5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("V_ILEV_CSR_DOOR_L");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		case 197:
			Var0.f_3 = joaat("V_ILEV_CSR_DOOR_R");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		case 194:
			Var0.f_3 = joaat("V_ILEV_CSR_DOOR_L");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		case 195:
			Var0.f_3 = joaat("V_ILEV_CSR_DOOR_R");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		case 198:
			Var0.f_3 = joaat("PROP_RON_DOOR_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 199:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 200:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 201:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 202:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 205:
			Var0.f_3 = joaat("V_ILEV_ABBMAINDOOR");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 206:
			Var0.f_3 = joaat("V_ILEV_ABBMAINDOOR2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 207:
			Var0.f_3 = joaat("PROP_CH3_04_DOOR_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 208:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 209:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 210:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 211:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 212:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 213:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 214:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 215:
			Var0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 216:
			Var0.f_3 = joaat("PROP_GAR_DOOR_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 217:
			Var0.f_3 = joaat("PROP_GATE_TEP_01_L");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 218:
			Var0.f_3 = joaat("PROP_GATE_TEP_01_R");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 219:
			Var0.f_3 = joaat("PROP_ARTGALLERY_02_DR");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 220:
			Var0.f_3 = joaat("PROP_ARTGALLERY_02_DL");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 221:
			Var0.f_3 = joaat("PROP_ARTGALLERY_02_DR");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 222:
			Var0.f_3 = joaat("PROP_ARTGALLERY_02_DL");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 223:
			Var0.f_3 = joaat("PROP_FNCLINK_07GATE1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		case 203:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 204:
			Var0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			UNK_0x5D96D8530B3D0904(&(Var0.f_4), 2);
			break;
		case 224:
			Var0.f_3 = joaat("PROP_ABAT_SLIDE");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

bool func_404()
{
	if ((func_74() == -1 || func_74() == 999) && !func_405() == 0)
	{
		return true;
	}
	return false;
}

int func_405()
{
	return Global_30769;
}

void func_406(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_408(iParam0, 0))
		{
			func_407(iParam0, 1, 0);
			func_407(iParam0, 2, 0);
			func_407(iParam0, 3, 0);
			func_407(iParam0, 4, 0);
			func_407(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_407(iParam0, 0, 0);
	}
}

void func_407(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_32744[iParam0]), bParam1);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_32744[iParam0]), bParam1);
	}
}

bool func_408(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], bParam1);
}

void func_409()
{
	UNK_0x0E2400AB9174FA81(5, bLocal_94, joaat("PLAYER"));
	if (func_342(UNK_0x16F2683693E537C9(), -726.45f, 33.33f, 43.23f, 1) <= func_342(UNK_0x16F2683693E537C9(), -666.55f, 49.19f, 42.08f, 1))
	{
		func_348(&uLocal_98, "EPS8AU", "EPS8_AMA1", 8, 0, 0, 0);
	}
	else
	{
		func_348(&uLocal_98, "EPS8AU", "EPS8_AMA2", 8, 0, 0, 0);
	}
}

void func_410(int iParam0)
{
	int iVar0;

	if (func_391(UNK_0x16F2683693E537C9()))
	{
		iVar0 = 0;
		while (iVar0 <= (iParam0->f_28 - 1))
		{
			if (func_126(iParam0->f_28[iVar0]))
			{
				UNK_0xAFF39FB306F8E232(iParam0->f_28[iVar0], 1, false);
				UNK_0x11AD11297DC58CC7(iParam0->f_28[iVar0], false);
				UNK_0xFADC0A217229F6B5(iParam0->f_28[iVar0], true);
				UNK_0x6C3AE6E278DB3D0E(iParam0->f_28[iVar0], UNK_0x16F2683693E537C9(), 0, 16);
				UNK_0x6DAD7906B73F064D(&(iParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}

bool func_411(int iParam0, bool bParam1)
{
	struct<27> Var0;

	if (Global_76622)
	{
		func_494("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return false;
	}
	func_110(*iParam0, &Var0);
	if ((func_430(*iParam0) || func_428(*iParam0)) || Global_76867 == 1)
	{
		return true;
	}
	if (!UNK_0x338D6FF72D84D90F())
	{
		func_494("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return false;
	}
	if (func_424(*iParam0))
	{
		if (*iParam0 == 19)
		{
			func_423(iParam0->f_28[0]);
		}
		func_494("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return false;
	}
	if (iParam0->f_25 == 1)
	{
		if (!func_420(iParam0, 1, 0))
		{
			return false;
		}
	}
	else if (iParam0->f_16 == 0)
	{
		if (!func_420(iParam0, 0, 0))
		{
			return false;
		}
	}
	if (((((*iParam0 == 16 || *iParam0 == 9) || *iParam0 == 18) || *iParam0 == 22) || *iParam0 == 32) || *iParam0 == 51)
	{
		if (!func_418(iParam0, 1, 1))
		{
			if (*iParam0 == 16)
			{
				func_410(iParam0);
			}
			else
			{
				func_416(iParam0);
			}
			return false;
		}
	}
	else if (*iParam0 == 24)
	{
		if (!func_418(iParam0, 0, 1))
		{
			func_416(iParam0);
			return false;
		}
	}
	else if (*iParam0 == 6)
	{
		if (!func_418(iParam0, 0, 1))
		{
			return false;
		}
	}
	else if (iParam0->f_26 == 1)
	{
		if (!func_418(iParam0, 1, 0))
		{
			func_416(iParam0);
			return false;
		}
	}
	else if (iParam0->f_16 == 2 || iParam0->f_16 == 1)
	{
		if (!func_418(iParam0, 0, 0))
		{
			func_416(iParam0);
			return false;
		}
	}
	if (iParam0->f_16 == 2 || iParam0->f_16 == 1)
	{
		if (func_391(iParam0->f_35[0]))
		{
			if (!UNK_0x5A91F08DF773C39D(iParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, false, true, 0))
			{
				return false;
			}
		}
	}
	if (*iParam0 == 10)
	{
		if (UNK_0x681F21BF9F7B449B(-1, iParam0->f_17[0 /*3*/], 8f))
		{
			func_494("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return false;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Var0.f_26, func_105()))
		{
			func_494("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return false;
		}
	}
	if (func_415(&(iParam0->f_48)) && bParam1)
	{
		func_412(iParam0->f_28[0], &(iParam0->f_48), *iParam0);
	}
	return true;
}

void func_412(bool bParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_391(bParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_415(uParam1))
				{
					if (UNK_0xB4AE0788C1587752(*uParam1))
					{
						UNK_0x327AAEE25F323797(bParam0);
						if (iParam2 != 21)
						{
							if (func_69(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								UNK_0xC6EB89C59F2AF6B8(bParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, false, 0, 0, 0);
							}
							else
							{
								UNK_0xDD353D0E9C789D0E(&iVar0);
								if (func_414(uParam1))
								{
									UNK_0x3E8E48829F3C7624(false, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, false, 2, 0);
								}
								else
								{
									UNK_0x3E8E48829F3C7624(false, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, false, 2, 0);
								}
								UNK_0x3E8E48829F3C7624(false, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, false, 2, 0);
								UNK_0x75ABDC5F81978924(iVar0);
								UNK_0x78ADC381772E3D54(bParam0, iVar0);
								UNK_0xF82EA857DA10E0CD(&iVar0);
							}
						}
						else
						{
							UNK_0x3E8E48829F3C7624(bParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, false, 2, 3);
						}
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			case 2:
				if (!func_414(uParam1) || !UNK_0xB4ECF989E2C1DAC8(bParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_413(iParam2) && !UNK_0x7069CC4DE1EA3FAA(bParam0, UNK_0x16F2683693E537C9(), 25f))
					{
						UNK_0xF96A174EE26D7588(bParam0, UNK_0x16F2683693E537C9(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_414(uParam1) && uParam1->f_4 == 0) && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bParam0, true), 1) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			case 3:
				UNK_0xDD353D0E9C789D0E(&iVar1);
				if (func_69(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					UNK_0xC6EB89C59F2AF6B8(false, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, false, 0, 0, 0);
					UNK_0xC6EB89C59F2AF6B8(false, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, false, 0, 0, 0);
				}
				else
				{
					UNK_0x3E8E48829F3C7624(false, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, false, 2, 0);
					UNK_0x3E8E48829F3C7624(false, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, false, 2, 0);
				}
				UNK_0x75ABDC5F81978924(iVar1);
				UNK_0x78ADC381772E3D54(bParam0, iVar1);
				UNK_0xF82EA857DA10E0CD(&iVar1);
				uParam1->f_4 = 1;
				if (func_413(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			case 5:
				if (!func_413(iParam2) || UNK_0x7069CC4DE1EA3FAA(bParam0, UNK_0x16F2683693E537C9(), 10f))
				{
					if (func_69(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						UNK_0xC6EB89C59F2AF6B8(bParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, false, 0, 0, 0);
					}
					else
					{
						UNK_0x3E8E48829F3C7624(bParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, false, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
		}
	}
}

bool func_413(int iParam0)
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return true;
	}
	return false;
}

bool func_414(var uParam0)
{
	if (UNK_0xEA6BC48857E0AC4C(uParam0->f_2))
	{
		return false;
	}
	return true;
}

bool func_415(var uParam0)
{
	if (UNK_0xEA6BC48857E0AC4C(*uParam0) || UNK_0xEA6BC48857E0AC4C(uParam0->f_1))
	{
		return false;
	}
	return true;
}

void func_416(int iParam0)
{
	int iVar0;
	int iVar1;

	if (*iParam0 == 52)
	{
		func_417(&(iParam0->f_41[1]));
		func_417(&(iParam0->f_41[2]));
	}
	if (func_391(UNK_0x16F2683693E537C9()))
	{
		iVar0 = 0;
		while (iVar0 <= (iParam0->f_28 - 1))
		{
			if (func_126(iParam0->f_28[iVar0]))
			{
				if (!UNK_0x405E212DDE472467(iParam0->f_28[iVar0], 0))
				{
					UNK_0x20641932E5104B25(iParam0->f_28[iVar0], true, 0);
					UNK_0x1E9649458B15960F(iParam0->f_28[0], false);
				}
				UNK_0xFADC0A217229F6B5(iParam0->f_28[iVar0], true);
				if (*iParam0 == 34)
				{
					if (func_391(iParam0->f_41[0]))
					{
						UNK_0x20641932E5104B25(iParam0->f_41[0], true, 0);
						UNK_0x1E9649458B15960F(iParam0->f_41[0], false);
					}
				}
				switch (*iParam0)
				{
					case 19:
						func_423(iParam0->f_28[iVar0]);
						break;
					case 8:
						UNK_0x3F423BF5B8125A50("rcmcollect_paperleadinout@");
						while (!UNK_0xB4AE0788C1587752("rcmcollect_paperleadinout@"))
						{
							SYSTEM::WAIT(0);
						}
						UNK_0xDD353D0E9C789D0E(&iVar1);
						UNK_0xC6EB89C59F2AF6B8(false, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, false, 0, 0, 0);
						UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 10000f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iVar1);
						UNK_0x78ADC381772E3D54(iParam0->f_28[iVar0], iVar1);
						UNK_0xF82EA857DA10E0CD(&iVar1);
						break;
					case 0:
					case 1:
						UNK_0x3F423BF5B8125A50("rcmabigail");
						while (!UNK_0xB4AE0788C1587752("rcmabigail"))
						{
							SYSTEM::WAIT(0);
						}
						UNK_0xDD353D0E9C789D0E(&iVar1);
						UNK_0xC6EB89C59F2AF6B8(false, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, false, 0, 0, 0);
						UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 10000f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iVar1);
						UNK_0x78ADC381772E3D54(iParam0->f_28[iVar0], iVar1);
						UNK_0xF82EA857DA10E0CD(&iVar1);
						break;
					case 32:
						UNK_0x3F423BF5B8125A50("rcmminute1");
						while (!UNK_0xB4AE0788C1587752("rcmminute1"))
						{
							SYSTEM::WAIT(0);
						}
						UNK_0xDD353D0E9C789D0E(&iVar1);
						if (iVar0 == 0)
						{
							UNK_0xC6EB89C59F2AF6B8(false, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, false, 0, 0, 0);
						}
						else
						{
							UNK_0xC6EB89C59F2AF6B8(false, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, false, 0, 0, 0);
						}
						UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 10000f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iVar1);
						UNK_0x78ADC381772E3D54(iParam0->f_28[iVar0], iVar1);
						UNK_0xF82EA857DA10E0CD(&iVar1);
						break;
					case 24:
						UNK_0x3F423BF5B8125A50("special_ped@hao@base");
						while (!UNK_0xB4AE0788C1587752("special_ped@hao@base"))
						{
							SYSTEM::WAIT(0);
						}
						UNK_0xDD353D0E9C789D0E(&iVar1);
						UNK_0xC6EB89C59F2AF6B8(false, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, false, 0, 0, 0);
						UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 10000f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iVar1);
						UNK_0x78ADC381772E3D54(iParam0->f_28[iVar0], iVar1);
						UNK_0xF82EA857DA10E0CD(&iVar1);
						break;
					default:
						UNK_0x8FB4E06C94958F84(iParam0->f_28[iVar0]);
						UNK_0xF3268524E9BE6D6E(iParam0->f_28[iVar0], UNK_0x16F2683693E537C9(), 10000f, -1, 0, 0);
						break;
				}
			}
			iVar0++;
		}
	}
}

void func_417(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (UNK_0xBDEB2DEEF1D23A18(*bParam0))
		{
			UNK_0x15AFB6CBDE990FB6(*bParam0, 1, true);
		}
		UNK_0xF690C84DADBB3551(bParam0);
	}
}

bool func_418(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (bParam1)
	{
		iVar1 = (iParam0->f_35 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (func_126(UNK_0x16F2683693E537C9()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (UNK_0xC844350D5D58C99A(iParam0->f_35[iVar0]))
			{
				if (UNK_0x437347B10A200C4B(iParam0->f_35[iVar0], 0))
				{
					func_494("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return false;
				}
				if (!UNK_0xDF1306B443CD3D15(iParam0->f_35[iVar0], 0))
				{
					func_494("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return false;
				}
				if (UNK_0xB87D13D0C064E9D1(iParam0->f_35[iVar0], UNK_0x16F2683693E537C9(), 0))
				{
					func_494("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return false;
				}
				if (UNK_0x7F6DC62EA9922664(iParam0->f_35[iVar0]) < 850)
				{
					func_494("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return false;
				}
				if (bParam2)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if (UNK_0x1B3D109B39CC2C89(iParam0->f_35[iVar0], UNK_0x16F2683693E537C9()) && UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) > 5f)
						{
							func_494("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return false;
						}
						bVar2 = UNK_0x728870EB733D12A1();
						if (func_327(bVar2))
						{
							if (UNK_0x134B62B726CEC8E6(bVar2) == joaat("TOWTRUCK") || UNK_0x134B62B726CEC8E6(bVar2) == joaat("TOWTRUCK2"))
							{
								if (func_327(iParam0->f_35[iVar0]))
								{
									if (UNK_0x6D18156F72BE0773(bVar2, iParam0->f_35[iVar0]))
									{
										func_494("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return false;
									}
								}
							}
						}
					}
					else
					{
						bVar3 = UNK_0x728870EB733D12A1();
						if (func_327(bVar3))
						{
							if (UNK_0x1B3D109B39CC2C89(iParam0->f_35[iVar0], bVar3) && UNK_0x9C66D99E63E8E24C(bVar3) > 6f)
							{
								func_494("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return false;
							}
						}
						if (*iParam0 == 16)
						{
							if (func_419(UNK_0x16F2683693E537C9(), iParam0->f_35[iVar0]))
							{
								func_494("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return false;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return true;
}

bool func_419(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam1, 0))
		{
			iVar0 = UNK_0x3C66DF04E6EA3587(bParam0);
			if (iVar0 == bParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_420(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		iVar1 = (iParam0->f_28 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*iParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*iParam0 == 30)
	{
		iParam2 = 1;
	}
	if (func_126(UNK_0x16F2683693E537C9()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (UNK_0xC844350D5D58C99A(iParam0->f_28[iVar0]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_28[iVar0]))
				{
					if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
					{
						if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), iParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_416(iParam0);
							}
							else
							{
								func_410(iParam0);
							}
							if (func_363())
							{
								func_362();
							}
							func_494("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return false;
						}
					}
					if ((UNK_0x688A90832774AB83(iParam0->f_28[iVar0]) || UNK_0xE147126C9AD09A60(iParam0->f_28[iVar0])) || UNK_0xD24FAF25ADC00F44(iParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_416(iParam0);
						}
						else
						{
							func_410(iParam0);
						}
						func_494("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return false;
					}
					if (UNK_0x869EFD0BC0868856(iParam0->f_28[iVar0]))
					{
						if (UNK_0x12DE711B1C681E9E(iParam0->f_28[iVar0], UNK_0x16F2683693E537C9(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_416(iParam0);
							}
							else
							{
								func_410(iParam0);
							}
							func_494("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return false;
						}
					}
					if (func_422(*iParam0))
					{
						if (!func_154(*iParam0))
						{
							if (func_385(iParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_416(iParam0);
								}
								else
								{
									func_410(iParam0);
								}
								func_494("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return false;
							}
						}
						if (UNK_0x681F21BF9F7B449B(-1, UNK_0x68F4C0EC296D3901(iParam0->f_28[iVar0], true), 15f))
						{
							if (iParam2 == 0)
							{
								func_416(iParam0);
							}
							else
							{
								func_410(iParam0);
							}
							func_494("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return false;
						}
						if (func_372(iParam0->f_28[iVar0], 1126825984 /* Float: 170f */))
						{
							if (iParam2 == 0)
							{
								func_416(iParam0);
							}
							else
							{
								func_410(iParam0);
							}
							func_494("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return false;
						}
					}
					if (!func_421(*iParam0))
					{
						if (UNK_0x681F21BF9F7B449B(-1, UNK_0x68F4C0EC296D3901(iParam0->f_28[iVar0], true), 5f))
						{
							if (iParam2 == 0)
							{
								func_416(iParam0);
							}
							else
							{
								func_410(iParam0);
							}
							func_494("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return false;
						}
						if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
						{
							if (iParam2 == 0)
							{
								func_416(iParam0);
							}
							else
							{
								func_410(iParam0);
							}
							func_494("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return false;
						}
					}
				}
				else
				{
					func_494("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*iParam0 == 34)
					{
						if (func_391(iParam0->f_41[0]))
						{
							UNK_0x20641932E5104B25(iParam0->f_41[0], true, 0);
							UNK_0x1E9649458B15960F(iParam0->f_41[0], false);
						}
					}
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

bool func_421(int iParam0)
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return true;
	}
	return false;
}

bool func_422(int iParam0)
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return false;
	}
	return true;
}

void func_423(bool bParam0)
{
	int iVar0;

	if (func_391(UNK_0x16F2683693E537C9()) && func_391(bParam0))
	{
		UNK_0x3F423BF5B8125A50("rcmextreme3");
		while (!UNK_0xB4AE0788C1587752("rcmextreme3"))
		{
			SYSTEM::WAIT(0);
		}
		UNK_0xDD353D0E9C789D0E(&iVar0);
		UNK_0xC6EB89C59F2AF6B8(false, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, false, 0, 0, 0);
		UNK_0xD93EE6549113F9E1(false, 1);
		UNK_0x05D36E45031B6514(false, 64.6f, -737.8f, 44.2f);
		UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 10000f, -1, 0, 0);
		UNK_0x75ABDC5F81978924(iVar0);
		UNK_0x78ADC381772E3D54(bParam0, iVar0);
		UNK_0xF82EA857DA10E0CD(&iVar0);
	}
}

bool func_424(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_162();
	}
	if (iParam0 == -1)
	{
		return true;
	}
	if (func_430(iParam0))
	{
		return false;
	}
	if (!func_159(4))
	{
		if (func_428(iParam0))
		{
		}
		else
		{
			return true;
		}
	}
	if (func_427() && !func_426())
	{
		return true;
	}
	if (!func_425(iParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) != 0)
			{
				return true;
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], 2))
	{
		return true;
	}
	return false;
}

bool func_425(int iParam0)
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return true;
	}
	return false;
}

bool func_426()
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

bool func_427()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_428(int iParam0)
{
	if ((func_429() && Global_98744.f_11 == 6) && iParam0 == func_163(&(Global_98744.f_3), 0))
	{
		return true;
	}
	return false;
}

bool func_429()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return false;
	}
	return true;
}

bool func_430(int iParam0)
{
	if (func_108(0))
	{
		if (Global_76868.f_1 == 7)
		{
			if (Global_76868 == iParam0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_431()
{
	iLocal_268 = UNK_0xB01F55A0FD1CFD49("digiscanner");
	while (!UNK_0x83D8570832F172A7(iLocal_268))
	{
		SYSTEM::WAIT(0);
	}
	if (!UNK_0xE6CD5C6925050049("digiscanner"))
	{
		UNK_0x268029E44B2B3E36("digiscanner", 0);
	}
	UNK_0x064E7408AD6E15E5(UNK_0x6B7EC7B5B6B57364(joaat("WEAPON_DIGISCANNER")));
	if (UNK_0xE6CD5C6925050049("digiscanner"))
	{
		iLocal_269 = UNK_0x3FF702268B97B673("digiscanner");
	}
	iLocal_271 = UNK_0xD68EA767274B7444();
	iLocal_270 = UNK_0x1C0640BA9A7327B3();
}

void func_432(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_433(int iParam0)
{
	switch (*iParam0)
	{
		case 9:
			if (!func_464(iParam0))
			{
				return false;
			}
			break;
		case 10:
			if (!func_455(iParam0))
			{
				return false;
			}
			break;
		case 11:
			if (!func_453(iParam0))
			{
				return false;
			}
			break;
		case 12:
			if (!func_451(iParam0))
			{
				return false;
			}
			break;
		case 13:
			if (!func_445(iParam0))
			{
				return false;
			}
			break;
		case 14:
			if (!func_444(iParam0))
			{
				return false;
			}
			break;
		case 15:
			if (!func_443(iParam0))
			{
				return false;
			}
			break;
		case 16:
			if (!func_437(iParam0))
			{
				return false;
			}
			break;
	}
	if (*iParam0 == 12)
	{
		iLocal_95 = func_436();
	}
	else if (*iParam0 == 15)
	{
		iLocal_95 = func_435();
		UNK_0x745CE398A4B0A3C6(538.45f, 3079.61f, 39.27f, 75f, 0);
	}
	else if (*iParam0 == 16)
	{
		iLocal_95 = func_434();
	}
	func_494("Created initial scene");
	return true;
}

int func_434()
{
	return UNK_0x7D6CA5F52B3748BF(-722.7994f, 14.8417f, 37.4501f, -661.751f, 56.4227f, 42.8989f, 0, 1, 1, 1);
}

int func_435()
{
	return UNK_0x7D6CA5F52B3748BF(529.7899f, 3067.578f, 37.8313f, 545.8693f, 3098.999f, 43.0209f, 0, 1, 1, 1);
}

int func_436()
{
	return UNK_0x7D6CA5F52B3748BF(1789.2f, 4658f, 30.73f, 1871.87f, 4745.51f, 40.17f, 0, 1, 1, 1);
}

bool func_437(int iParam0)
{
	int iVar0[3];
	int iVar4;

	iVar0[0] = joaat("LANDSTALKER");
	iVar0[1] = joaat("TAILGATER");
	iVar0[2] = joaat("S_M_M_HIGHSEC_01");
	switch (iLocal_91)
	{
		case 0:
			iParam0->f_16 = 5;
			iParam0->f_17[0 /*3*/] = { -670.9681f, 53.53062f, 40.04339f };
			iParam0->f_17[1 /*3*/] = { -723.7632f, 34.0545f, 46.97017f };
			iParam0->f_24 = 19.75f;
			iParam0->f_27 = 1;
			iParam0->f_26 = 1;
			iParam0->f_25 = 1;
			StringCopy(&(iParam0->f_9), "EP_8_RCM", 24);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				UNK_0x523BCC9DC80CD82F(iVar0[iVar4]);
				iVar4++;
			}
			iLocal_91 = 1;
			break;
		case 1:
			if (!func_442(&iVar0))
			{
				return false;
			}
			iLocal_91 = 2;
			break;
		case 2:
			func_440(&(iParam0->f_35[0]), iVar0[0], -686.5046f, 43.9098f, 42.2067f, 296.81f);
			UNK_0x71EDC33E5A423750(iParam0->f_35[0], 3);
			UNK_0xC002508A277213DE(iParam0->f_35[0], 157, 157);
			UNK_0x58A0C35FA7CA6162(iParam0->f_35[0], false, false);
			UNK_0xDC2C59BD0989562B(iParam0->f_35[0], 1);
			UNK_0xA22B35B584F0580A(iParam0->f_35[0], false);
			func_440(&(iParam0->f_35[1]), iVar0[1], -697.3215f, 39.0406f, 42.86736f, -66.98854f);
			UNK_0x71EDC33E5A423750(iParam0->f_35[1], 3);
			UNK_0x55A3C4ED4728EA42(iParam0->f_35[1], "K1FFL0M");
			UNK_0xC002508A277213DE(iParam0->f_35[1], 157, 157);
			UNK_0x58A0C35FA7CA6162(iParam0->f_35[1], false, false);
			UNK_0xA22B35B584F0580A(iParam0->f_35[1], false);
			func_438(&(iParam0->f_28[0]), iVar0[2], -726.4555f, 33.33568f, 43.22695f, -147.8099f, 26);
			UNK_0x262EF6C6306BEA6C(iParam0->f_28[0], joaat("WEAPON_SMG"), -1, false, false);
			UNK_0x0C8C0C840C2D1AD2(iParam0->f_28[0], UNK_0x16F2683693E537C9(), -1, 0, 2);
			UNK_0x76C102AEA12B3523(iParam0->f_28[0], 2);
			UNK_0x509B8296EBA9B408(iParam0->f_28[0], "WORLD_HUMAN_GUARD_STAND", 0, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], false, true, true, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 3, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 4, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 8, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[0], 11, true, false, 0);
			func_438(&(iParam0->f_28[1]), iVar0[2], -666.5512f, 49.19759f, 42.07154f, -171.6803f, 26);
			UNK_0x262EF6C6306BEA6C(iParam0->f_28[1], joaat("WEAPON_SMG"), -1, false, false);
			UNK_0x0C8C0C840C2D1AD2(iParam0->f_28[1], UNK_0x16F2683693E537C9(), -1, 0, 2);
			UNK_0x76C102AEA12B3523(iParam0->f_28[1], 2);
			UNK_0x509B8296EBA9B408(iParam0->f_28[1], "WORLD_HUMAN_GUARD_STAND", 0, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], false, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 3, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 4, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 8, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[1], 11, false, false, 0);
			func_438(&(iParam0->f_28[2]), iVar0[2], -690f, 42f, 42f, 0f, 26);
			func_438(&(iParam0->f_28[3]), iVar0[2], -690f, 42f, 43f, 0f, 26);
			UNK_0xF821F915BC24D246(iParam0->f_28[2], iParam0->f_35[0], -1);
			UNK_0xF821F915BC24D246(iParam0->f_28[3], iParam0->f_35[0], false);
			UNK_0x262EF6C6306BEA6C(iParam0->f_28[2], joaat("WEAPON_COMBATPISTOL"), -1, false, false);
			UNK_0x262EF6C6306BEA6C(iParam0->f_28[3], joaat("WEAPON_MICROSMG"), -1, false, false);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[2], false, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[2], 3, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[2], 4, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[2], 8, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[2], 11, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[3], false, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[3], 3, false, 2, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[3], 4, false, 2, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[3], 8, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(iParam0->f_28[3], 11, false, true, 0);
			UNK_0xF63400DBE3303D26("gang", &bLocal_94);
			UNK_0x6DF7BF67E86AAE86(iParam0->f_28[0], bLocal_94);
			UNK_0x6DF7BF67E86AAE86(iParam0->f_28[1], bLocal_94);
			UNK_0x6DF7BF67E86AAE86(iParam0->f_28[2], bLocal_94);
			UNK_0x6DF7BF67E86AAE86(iParam0->f_28[3], bLocal_94);
			UNK_0xC978532B427F303B(iParam0->f_28[0], 0);
			UNK_0xC978532B427F303B(iParam0->f_28[1], 0);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				UNK_0x71199B01895C6202(iVar0[iVar4]);
				iVar4++;
			}
			return true;
	}
	return false;
}

void func_438(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	func_439(bParam0);
	*bParam0 = UNK_0x36F2404464202779(iParam6, bParam1, vParam2, bParam5, 0, false);
}

void func_439(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0x437347B10A200C4B(*bParam0, 0))
		{
			UNK_0xE8832A9E16A57A1F(*bParam0, false, 1);
		}
		if (!UNK_0xAF6690C489CC6203(*bParam0))
		{
			UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
		}
		UNK_0xEBA53F35D0085654(bParam0);
	}
}

void func_440(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5)
{
	func_441(bParam0);
	*bParam0 = UNK_0x122AAB0B1D6F55AD(bParam1, vParam2, bParam5, true, true, false);
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		UNK_0xB9FD7450C0DAB575(*bParam0, 1084227584 /* Float: 5f */);
		UNK_0xD458AC1C1D29C3B4(*bParam0, 1000, false);
	}
}

void func_441(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0xAF6690C489CC6203(*bParam0))
		{
			UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
		}
		if (func_327(*bParam0))
		{
			if (UNK_0xAF6690C489CC6203(*bParam0) && UNK_0x9C77D2D0559097F0(*bParam0, 1))
			{
				if (func_391(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam0, 0))
					{
						UNK_0x046C362CF15F1935(bParam0);
						return;
					}
				}
				UNK_0xA954465BA6FDEFE2(bParam0);
			}
		}
		else
		{
			if (func_391(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam0, 0))
				{
					UNK_0x046C362CF15F1935(bParam0);
					return;
				}
			}
			UNK_0xA954465BA6FDEFE2(bParam0);
		}
	}
}

bool func_442(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!UNK_0xB87F6CF6E5628C67((*iParam0)[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_443(int iParam0)
{
	iParam0->f_16 = 5;
	iParam0->f_17[0 /*3*/] = { 513.48f, 3081.22f, 38.84f };
	iParam0->f_17[1 /*3*/] = { 530.53f, 3073f, 44.13f };
	iParam0->f_24 = 9.25f;
	iParam0->f_27 = 0;
	StringCopy(&(iParam0->f_9), "EP_7_RCM", 24);
	return true;
}

bool func_444(int iParam0)
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;

	bVar5 = "rcmepsilonism6";
	iVar0[0] = joaat("VELUM");
	iVar0[1] = joaat("IG_TOMEPSILON");
	switch (iLocal_91)
	{
		case 0:
			iParam0->f_16 = 5;
			iParam0->f_17[0 /*3*/] = { -2869.424f, 3170.774f, 1.954f };
			iParam0->f_17[1 /*3*/] = { -2918.701f, 3217.056f, 32.294f };
			iParam0->f_24 = 94.5f;
			iParam0->f_27 = 0;
			iParam0->f_25 = 1;
			iParam0->f_26 = 1;
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				UNK_0x523BCC9DC80CD82F(iVar0[iVar3]);
				iVar3++;
			}
			UNK_0x3F423BF5B8125A50(bVar5);
			iLocal_91 = 1;
			break;
		case 1:
			if (!func_442(&iVar0) || !UNK_0xB4AE0788C1587752(bVar5))
			{
				return false;
			}
			iLocal_91 = 2;
			break;
		case 2:
			bVar6 = true;
			if (!UNK_0xC844350D5D58C99A(iParam0->f_35[0]))
			{
				bVar4 = UNK_0x6E7D01E16ABEFABB(-2892.93f, 3192.37f, 11.66f, 11f, iVar0[0], 16390);
				if (func_391(bVar4))
				{
					iParam0->f_35[0] = bVar4;
					UNK_0x73270B3C9CC833FD(bVar4, true, 1);
				}
				else
				{
					UNK_0x28F5E4DA506AC0CA(-2892.93f, 3192.37f, 11.66f, 11f, 0, 0, 0, 0, false, 0);
					func_440(&(iParam0->f_35[0]), iVar0[0], -2892.93f, 3192.37f, 11.66f, -132.35f);
				}
			}
			func_406(37, 0);
			if (UNK_0xC844350D5D58C99A(iParam0->f_35[0]))
			{
				UNK_0xAB8E2DDC7AF955E0(iVar0[0], true);
				UNK_0x2F625BED8BF7F26A(iParam0->f_35[0]);
				UNK_0xC6A6B4DDD6DC073A(iParam0->f_35[0], false);
				UNK_0xC002508A277213DE(iParam0->f_35[0], 157, 157);
				UNK_0x58A0C35FA7CA6162(iParam0->f_35[0], 157, 5);
				UNK_0x446EA2500F021666(iParam0->f_35[0], 3);
				UNK_0xB422445CBCD0AEFB(iParam0->f_35[0], 0);
				UNK_0x44A200C9B6E1CEA6(iParam0->f_35[0], true);
				UNK_0x71EDC33E5A423750(iParam0->f_35[0], 3);
				if (Global_76867)
				{
					if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
					{
						UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -2907.29f, 3215.91f, 9.86f, 1, 0, 0, 1);
						UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 215.2149f);
					}
				}
			}
			else
			{
				bVar6 = false;
			}
			func_438(&(iParam0->f_28[0]), iVar0[1], -2881.755f, 3188.125f, 10.1136f, 254.1723f, 26);
			if (func_391(iParam0->f_28[0]) && func_126(UNK_0x16F2683693E537C9()))
			{
				bVar7 = UNK_0xD09DF7101876AFB8(UNK_0x16F2683693E537C9());
				UNK_0x262EF6C6306BEA6C(iParam0->f_28[0], joaat("WEAPON_DIGISCANNER"), -1, true, true);
				UNK_0x78ED16BE998AECC7(iParam0->f_28[0]);
				UNK_0x1365063FA6365BE8(iParam0->f_28[0], true);
				UNK_0x25C5402CC10F76CD(iParam0->f_28[0], false);
				UNK_0x4E885A246A9D983A(iParam0->f_28[0], 185, true);
				UNK_0x4E885A246A9D983A(iParam0->f_28[0], 188, true);
				UNK_0x4E885A246A9D983A(iParam0->f_28[0], 132, true);
				UNK_0x33CE5A9E32EA10B2(iParam0->f_28[0], 1);
				UNK_0x6DF7BF67E86AAE86(iParam0->f_28[0], bVar7);
				UNK_0x11AD11297DC58CC7(iParam0->f_28[0], false);
			}
			else
			{
				bVar6 = false;
			}
			if (bVar6)
			{
				iLocal_91 = 3;
			}
			break;
		case 3:
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				UNK_0x71199B01895C6202(iVar0[iVar3]);
				iVar3++;
			}
			return true;
	}
	return false;
}

bool func_445(int iParam0)
{
	int iVar0[1];
	int iVar2;
	bool bVar3;
	bool bVar4;

	iVar0[0] = iLocal_92;
	switch (iLocal_91)
	{
		case 0:
			iParam0->f_16 = 5;
			iParam0->f_17[0 /*3*/] = { 638.1478f, 106.1284f, 87.36301f };
			iParam0->f_17[1 /*3*/] = { 646.6449f, 129.2266f, 93.14977f };
			iParam0->f_24 = 12.5f;
			iParam0->f_27 = 0;
			iParam0->f_25 = 1;
			StringCopy(&(iParam0->f_9), "EP_5_RCM", 24);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				UNK_0x523BCC9DC80CD82F(iVar0[iVar2]);
				iVar2++;
			}
			func_450(&(iParam0->f_48), "rcm_epsilonism5", "ep_5_rcm_marnie_strokes_wall", 0);
			iLocal_91 = 1;
			break;
		case 1:
			if (!func_442(&iVar0) || !func_449(&(iParam0->f_48)))
			{
				return false;
			}
			iLocal_91 = 2;
			break;
		case 2:
			bVar3 = true;
			if (!UNK_0xC844350D5D58C99A(iParam0->f_28[0]))
			{
				if (func_446(&(iParam0->f_28[0]), 60, 636.58f, 119.68f, 90.56f, 80.62f, "EPSILON LAUNCHER RC", 1) && func_126(UNK_0x16F2683693E537C9()))
				{
					bVar4 = UNK_0xD09DF7101876AFB8(UNK_0x16F2683693E537C9());
					UNK_0x6DF7BF67E86AAE86(iParam0->f_28[0], bVar4);
					UNK_0x4E885A246A9D983A(iParam0->f_28[0], 132, true);
				}
				else
				{
					bVar3 = false;
				}
			}
			if (bVar3)
			{
				iLocal_91 = 3;
			}
			break;
		case 3:
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				UNK_0x71199B01895C6202(iVar0[iVar2]);
				iVar2++;
			}
			return true;
	}
	return false;
}

bool func_446(bool bParam0, bool bParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	if (func_447(bParam0, bParam1, vParam2, fParam5, 1))
	{
		if (UNK_0xC844350D5D58C99A(*bParam0))
		{
			if (!UNK_0x437347B10A200C4B(*bParam0, 0))
			{
				UNK_0x11AD11297DC58CC7(*bParam0, true);
				UNK_0x6D80F1AEBA734886(*bParam0, false);
				if (iParam7 == 1)
				{
					UNK_0x25C5402CC10F76CD(*bParam0, false);
				}
			}
			UNK_0x5F2AA9E2843E9403(*bParam0, bParam6);
		}
		return true;
	}
	return false;
}

bool func_447(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	bool bVar0;

	if (!func_36(bParam1))
	{
		bVar0 = func_497(bParam1);
		UNK_0x523BCC9DC80CD82F(bVar0);
		if (UNK_0xB87F6CF6E5628C67(bVar0))
		{
			if (UNK_0xC844350D5D58C99A(*bParam0))
			{
				UNK_0xEBA53F35D0085654(bParam0);
			}
			*bParam0 = UNK_0x36F2404464202779(26, bVar0, vParam2, bParam5, 0, false);
			UNK_0x78ED16BE998AECC7(*bParam0);
			if (bVar0 == joaat("IG_LAMARDAVIS"))
			{
				if (UNK_0x36C584991B4C183F(*bParam0, 3) == 0)
				{
					UNK_0x64F9F278AB9DCA2C(*bParam0, 5, 2, false, 0);
				}
			}
			func_448(*bParam0, bParam1);
			if (bParam6)
			{
				UNK_0x71199B01895C6202(bVar0);
			}
			return true;
		}
	}
	return false;
}

int func_448(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 7;
	if (bParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (bParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (bParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_94578[(iVar0 - 3)] = uParam0;
	return 1;
}

bool func_449(var uParam0)
{
	if (func_415(uParam0))
	{
		UNK_0x3F423BF5B8125A50(*uParam0);
		if (UNK_0xB4AE0788C1587752(*uParam0))
		{
			return true;
		}
	}
	return false;
}

void func_450(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	*uParam0 = sParam1;
	uParam0->f_1 = sParam2;
	uParam0->f_2 = iParam3;
	UNK_0x3F423BF5B8125A50(*uParam0);
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
}

bool func_451(int iParam0)
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	bool bVar5;

	iVar0[0] = iLocal_92;
	iVar0[1] = iLocal_93;
	switch (iLocal_91)
	{
		case 0:
			iParam0->f_16 = 0;
			iParam0->f_15 = 11.5f;
			iParam0->f_27 = 0;
			iParam0->f_25 = 1;
			StringCopy(&(iParam0->f_9), "EP_4_RCM_CONCAT", 24);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				UNK_0x523BCC9DC80CD82F(iVar0[iVar3]);
				iVar3++;
			}
			func_450(&(iParam0->f_48), "rcm_epsilonism4", "ep_4_rcm_marnie_base_marnie", "ep_4_rcm_marnie_lookaround_marnie");
			iLocal_91 = 1;
			break;
		case 1:
			if (!func_442(&iVar0) || !func_449(&(iParam0->f_48)))
			{
				return false;
			}
			iLocal_91 = 2;
			break;
		case 2:
			bVar4 = true;
			if (func_126(UNK_0x16F2683693E537C9()))
			{
				bVar5 = UNK_0xD09DF7101876AFB8(UNK_0x16F2683693E537C9());
			}
			if (!UNK_0xC844350D5D58C99A(iParam0->f_28[0]))
			{
				if (func_446(&(iParam0->f_28[0]), 60, 1826.13f, 4698.88f, 38.92f, 21.63f, "EPSILON LAUNCHER RC - MARNIE", 1))
				{
					UNK_0x6DF7BF67E86AAE86(iParam0->f_28[0], bVar5);
					UNK_0x4E885A246A9D983A(iParam0->f_28[0], 132, true);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!UNK_0xC844350D5D58C99A(iParam0->f_28[1]))
			{
				if (func_446(&(iParam0->f_28[1]), 55, 1827.24f, 4699.76f, 39.09f, 57.09f, "EPSILON LAUNCHER RC - JIMMY", 1))
				{
					UNK_0x6DF7BF67E86AAE86(iParam0->f_28[1], bVar5);
					UNK_0x4E885A246A9D983A(iParam0->f_28[1], 132, true);
					UNK_0x9A28E8CB86CD4694(iParam0->f_28[1], true, 0, 0, false);
					UNK_0xA3BF0AA5A2608191(iParam0->f_28[1]);
					UNK_0x262EF6C6306BEA6C(iParam0->f_28[1], joaat("WEAPON_DIGISCANNER"), -1, true, true);
					UNK_0xC6EB89C59F2AF6B8(iParam0->f_28[1], "rcm_epsilonism4", "ep_4_rcm_jimmyboston_base_jb", 8f, -8f, -1, 1, false, 0, 0, 0);
					func_452(iParam0->f_28[1], 1827.24f, 4699.76f, 39.09f, 57.09f, 1, 1);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (bVar4)
			{
				iLocal_91 = 3;
			}
			break;
		case 3:
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				UNK_0x71199B01895C6202(iVar0[iVar3]);
				iVar3++;
			}
			return true;
	}
	return false;
}

bool func_452(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (func_391(bParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = UNK_0xE82754C349C7B581(vParam1, &fVar1, 0, 0);
			if (bVar0)
			{
				vParam1.f_2 = fVar1;
			}
		}
		UNK_0xA47B46945FF6DE74(bParam0, vParam1, 1, 0, 0, iParam6);
		UNK_0xD8F6A53F4799FAFE(bParam0, bParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return true;
	}
	return false;
}

bool func_453(int iParam0)
{
	int iVar0[1];
	int iVar2;
	vector3 vVar3;
	float fVar6;
	bool bVar7;
	bool bVar8;

	vVar3 = { 1843.82f, 4705.74f, 38.8f };
	fVar6 = func_454(1.99f);
	iVar0[0] = iLocal_92;
	switch (iLocal_91)
	{
		case 0:
			iParam0->f_16 = 3;
			iParam0->f_17[0 /*3*/] = { 1842.66f, 4704.65f, 37.81f };
			iParam0->f_15 = 9f;
			iParam0->f_25 = 1;
			iParam0->f_27 = 0;
			StringCopy(&(iParam0->f_9), "EP_3_RCM_ALT1", 24);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				UNK_0x523BCC9DC80CD82F(iVar0[iVar2]);
				iVar2++;
			}
			func_450(&(iParam0->f_48), "rcmepsilonism3", "base_loop", 0);
			iLocal_91 = 1;
			break;
		case 1:
			if (!func_442(&iVar0) || !func_449(&(iParam0->f_48)))
			{
				return false;
			}
			iLocal_91 = 2;
			break;
		case 2:
			bVar7 = true;
			UNK_0x745CE398A4B0A3C6(vVar3, 35f, 0);
			if (!UNK_0xC844350D5D58C99A(iParam0->f_28[0]))
			{
				if (func_446(&(iParam0->f_28[0]), 60, vVar3, fVar6, "EPSILON LAUNCHER RC - MARNIE", 1))
				{
					if (UNK_0xC844350D5D58C99A(iParam0->f_28[0]) && func_126(UNK_0x16F2683693E537C9()))
					{
						bVar8 = UNK_0xD09DF7101876AFB8(UNK_0x16F2683693E537C9());
						UNK_0xF4CB0B98F8F79D8D(iParam0->f_28[0], 0);
						UNK_0x6DF7BF67E86AAE86(iParam0->f_28[0], bVar8);
						UNK_0x4E885A246A9D983A(iParam0->f_28[0], 132, true);
						UNK_0xC6EB89C59F2AF6B8(iParam0->f_28[0], "rcmepsilonism3", "ep_3_rcm_marnie_meditating", 1000f, -8f, -1, 786433, false, 0, 0, 0);
					}
					else
					{
						bVar7 = false;
					}
				}
			}
			if (bVar7)
			{
				iLocal_91 = 3;
			}
			break;
		case 3:
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				UNK_0x71199B01895C6202(iVar0[iVar2]);
				iVar2++;
			}
			return true;
	}
	return false;
}

float func_454(float fParam0)
{
	return (fParam0 * 57.29578f);
}

bool func_455(int iParam0)
{
	switch (iLocal_91)
	{
		case 0:
			iParam0->f_16 = 5;
			iParam0->f_17[0 /*3*/] = { 246.8182f, 374.0685f, 103.1233f };
			iParam0->f_17[1 /*3*/] = { 241.9806f, 360.8724f, 108.8699f };
			iParam0->f_24 = 9f;
			iParam0->f_15 = 2f;
			iParam0->f_27 = 0;
			StringCopy(&(iParam0->f_9), "EP_2_RCM", 24);
			if (Global_76867)
			{
				func_463(86, 1);
			}
			iLocal_91 = 1;
			break;
		case 1:
			if (!UNK_0xBF75E4DF4C367CD9(241.3607f, 361.0345f, 105.8884f, 4f, joaat("V_ILEV_EPSSTOREDOOR"), 0))
			{
				return false;
			}
			iLocal_91 = 3;
			break;
		case 3:
			func_393(109, 0);
			func_456(11, 0);
			return true;
	}
	return false;
}

void func_456(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = "NULL";
	iVar1 = 0;
	bVar0 = func_460(iParam0, &iVar1);
	if (!UNK_0x7F8A39872A07D2CE("NONE", bVar0) && iVar1 != 0)
	{
		if (bParam1 && !UNK_0x3C4C57B70481C643(iVar1))
		{
			if (UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == iVar1)
			{
				func_459(iParam0, 1);
				return;
			}
			UNK_0xE9C847D3387E544A(iVar1, 1);
		}
		else if (!bParam1 && UNK_0x3C4C57B70481C643(iVar1))
		{
			if (func_457(iParam0))
			{
				func_459(iParam0, 0);
			}
			UNK_0xE9C847D3387E544A(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_457(iParam0))
			{
				func_459(iParam0, 0);
			}
		}
	}
}

bool func_457(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_458(iParam0) };
	if (Var0.f_1 != -1 && UNK_0xEAE0D21A50E6C7F4(Global_37200[Var0.f_1], Var0))
	{
		return true;
	}
	return false;
}

struct<2> func_458(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;

	iVar0 = iParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 7)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_459(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_458(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_37200[Var0.f_1]), Var0);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_37200[Var0.f_1]), Var0);
	}
}

char* func_460(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_461(iParam0) };
	*iParam1 = UNK_0x0D1736C2E221BCEA(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_461(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		case 25:
			vVar5 = { func_462(1, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		case 26:
			vVar5 = { func_462(2, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		case 27:
			vVar5 = { func_462(3, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		case 28:
			vVar5 = { func_462(4, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		case 29:
			vVar5 = { func_462(5, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		case 30:
			vVar5 = { func_462(6, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		case 31:
			vVar5 = { func_462(7, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		case 32:
			Var0 = { Global_1049922[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		case 33:
			vVar5 = { func_462(35, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		case 34:
			vVar5 = { func_462(36, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		case 35:
			vVar5 = { func_462(37, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		case 36:
			vVar5 = { func_462(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		case 37:
			vVar5 = { func_462(39, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		case 38:
			vVar5 = { func_462(40, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		case 39:
			vVar5 = { func_462(41, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		case 40:
			vVar5 = { func_462(42, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		case 41:
			vVar5 = { func_462(43, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		case 83:
			vVar5 = { func_462(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 84:
			vVar5 = { func_462(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 85:
			vVar5 = { func_462(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 86:
			vVar5 = { func_462(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 87:
			vVar5 = { func_462(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 88:
			vVar5 = { func_462(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 89:
			vVar5 = { func_462(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 90:
			vVar5 = { func_462(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 91:
			vVar5 = { func_462(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 92:
			vVar5 = { func_462(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 93:
			vVar5 = { func_462(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 94:
			vVar5 = { func_462(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 95:
			vVar5 = { func_462(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 96:
			vVar5 = { func_462(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 97:
			vVar5 = { func_462(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 98:
			vVar5 = { func_462(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 99:
			vVar5 = { func_462(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 100:
			vVar5 = { func_462(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 101:
			vVar5 = { func_462(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 102:
			vVar5 = { func_462(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 103:
			vVar5 = { func_462(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 104:
			vVar5 = { func_462(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 105:
			vVar5 = { func_462(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 106:
			vVar5 = { func_462(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 107:
			vVar5 = { func_462(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 108:
			vVar5 = { func_462(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 109:
			vVar5 = { func_462(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 110:
			vVar5 = { func_462(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 111:
			vVar5 = { func_462(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 112:
			vVar5 = { func_462(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 113:
			vVar5 = { func_462(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 114:
			vVar5 = { func_462(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 115:
			vVar5 = { func_462(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 116:
			vVar5 = { func_462(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 117:
			vVar5 = { func_462(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 118:
			vVar5 = { func_462(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 119:
			vVar5 = { func_462(91, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 120:
			vVar5 = { func_462(97, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 121:
			vVar5 = { func_462(103, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 122:
			vVar5 = { func_462(104, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 123:
			vVar5 = { func_462(105, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 124:
			vVar5 = { func_462(106, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 125:
			vVar5 = { func_462(107, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 126:
			vVar5 = { func_462(108, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 127:
			vVar5 = { func_462(109, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 128:
			vVar5 = { func_462(110, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 129:
			vVar5 = { func_462(111, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 130:
			vVar5 = { func_462(112, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 131:
			vVar5 = { func_462(113, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 132:
			vVar5 = { func_462(114, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 133:
			vVar5 = { func_462(103, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 134:
			vVar5 = { func_462(106, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 135:
			vVar5 = { func_462(109, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 136:
			vVar5 = { func_462(112, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		case 193:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		case 195:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 196:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		case 197:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		case 198:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		case 199:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		case 200:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		case 201:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		case 202:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		case 203:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		case 204:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		case 205:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		case 206:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		case 207:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		case 208:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		case 209:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		case 210:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		case 211:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		case 212:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		case 213:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
			default:
				break;
	}
}

struct<6> func_462(int iParam0, bool bParam1)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

void func_463(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_111638.f_9080.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_111638.f_9080.f_99.f_58[iParam0] = iParam1;
}

bool func_464(int iParam0)
{
	int iVar0[1];
	int iVar2;
	bool bVar3;

	iVar0[0] = joaat("BISON");
	switch (iLocal_91)
	{
		case 0:
			iParam0->f_16 = 3;
			iParam0->f_17[0 /*3*/] = { -1626.97f, 4205.64f, 83.01f };
			iParam0->f_15 = 17f;
			iParam0->f_27 = 0;
			iParam0->f_26 = 1;
			StringCopy(&(iParam0->f_9), "EP_1_RCM_Concat", 24);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				UNK_0x523BCC9DC80CD82F(iVar0[iVar2]);
				iVar2++;
			}
			iLocal_91 = 1;
			break;
		case 1:
			if (!func_442(&iVar0))
			{
				return false;
			}
			iLocal_91 = 2;
			break;
		case 2:
			bVar3 = true;
			if (!UNK_0xC844350D5D58C99A(iParam0->f_35[0]))
			{
				func_440(&(iParam0->f_35[0]), iVar0[0], -1619.53f, 4204.1f, 83.3f, 77.92f);
				if (UNK_0xC844350D5D58C99A(iParam0->f_35[0]))
				{
					UNK_0x71EDC33E5A423750(iParam0->f_35[0], 2);
					UNK_0xC002508A277213DE(iParam0->f_35[0], 27, 27);
					UNK_0xAB8E2DDC7AF955E0(iVar0[0], true);
					UNK_0xB9FD7450C0DAB575(iParam0->f_35[0], 1084227584 /* Float: 5f */);
				}
				else
				{
					bVar3 = false;
				}
			}
			if (bVar3)
			{
				iLocal_91 = 3;
			}
			break;
		case 3:
			UNK_0x5BED90AC1E2BC558("AZ_EPSILONISM_01_HILLS", 1, 0);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				UNK_0x71199B01895C6202(iVar0[iVar2]);
				iVar2++;
			}
			return true;
	}
	return false;
}

bool func_465(int iParam0)
{
	struct<27> Var0;
	bool bVar32;

	func_110(iParam0, &Var0);
	bVar32 = func_105();
	if (bVar32 == 145)
	{
		return true;
	}
	else if ((bVar32 != 1 && bVar32 != 0) && bVar32 != 2)
	{
		return true;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Var0.f_26, bVar32))
	{
		return true;
	}
	return false;
}

bool func_466(int iParam0)
{
	bool bVar0;

	if (Global_76622)
	{
		func_494("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return false;
	}
	if (!Global_111638.f_9080 && !func_108(1))
	{
		func_494("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return false;
	}
	if (!func_467(iParam0))
	{
		Global_110725[iParam0 /*10*/].f_1 = 1;
		func_494("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return false;
	}
	if (Global_98744.f_11 == 6)
	{
		if (Global_98744 < 9)
		{
			func_110(iParam0, &bVar0);
			if (UNK_0x7F8A39872A07D2CE(&(Global_98744.f_3), bVar0))
			{
				func_494("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return false;
			}
		}
	}
	if (UNK_0x8A22C4C08282BF26(joaat("CANDIDATE_CONTROLLER")) == 0)
	{
		Global_110725[iParam0 /*10*/].f_1 = 1;
		func_494("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return false;
	}
	return true;
}

bool func_467(int iParam0)
{
	var uVar0;

	func_110(iParam0, &uVar0);
	if (!func_159(4))
	{
		if (func_428(iParam0))
		{
		}
		else
		{
			return false;
		}
	}
	if (func_427() && !func_426())
	{
		return false;
	}
	if (func_473(iParam0))
	{
		return false;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_162();
	}
	if (iParam0 == -1)
	{
		return false;
	}
	if (!func_430(iParam0))
	{
		if (!func_472(iParam0))
		{
			return false;
		}
		if (!func_471(iParam0))
		{
			return false;
		}
		if (func_470(iParam0))
		{
			return false;
		}
	}
	if (iParam0 == 58)
	{
		if (func_468(5))
		{
			Global_110725[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_110725[iParam0 /*10*/].f_3 == 1)
	{
		return false;
	}
	return true;
}

bool func_468(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (Global_98796.f_343 == 0)
	{
		return false;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_468(iVar0))
			{
				return true;
			}
			iVar0++;
		}
	}
	else if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		func_469(iParam0, &uVar1);
		iVar9 = UNK_0x0D1736C2E221BCEA(Global_93782[iParam0 /*10*/].f_3, &uVar1);
		if (iVar9 != 0 && Global_98796.f_343 == iVar9)
		{
			return true;
		}
	}
	return false;
}

bool func_469(int iParam0, bool bParam1)
{
	StringCopy(bParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(bParam1, "v_michael", 32);
			break;
		case 5:
			StringCopy(bParam1, "v_franklins", 32);
			break;
		case 6:
			StringCopy(bParam1, "v_franklinshouse", 32);
			break;
		case 2:
		case 1:
			if (UNK_0xBCFF5481C5F58C19("TrevorsTrailer"))
			{
				StringCopy(bParam1, "v_trailer", 32);
			}
			else if (UNK_0xBCFF5481C5F58C19("TrevorsTrailerTidy"))
			{
				StringCopy(bParam1, "V_TrailerTIDY", 32);
			}
			else if (UNK_0xBCFF5481C5F58C19("TrevorsTrailerTrash"))
			{
				StringCopy(bParam1, "V_TrailerTRASH", 32);
			}
			break;
		case 3:
			StringCopy(bParam1, "v_trevors", 32);
			break;
		case 4:
			StringCopy(bParam1, "v_strip3", 32);
			break;
		case 8:
		case 7:
		case 9:
			StringCopy(bParam1, "v_psycheoffice", 32);
			break;
	}
	return !UNK_0x7F8A39872A07D2CE(bParam1, "");
}

bool func_470(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], 3);
}

bool func_471(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], 2);
}

bool func_472(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], false);
}

bool func_473(int iParam0)
{
	if (func_425(iParam0))
	{
		return false;
	}
	else if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) != 0)
		{
			return true;
		}
	}
	return false;
}

void func_474()
{
	func_494("Running end routines.");
	Global_111356 = (Global_111356 - 1);
}

bool func_475(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	int iVar0;

	if (*iParam0 == 1)
	{
		if (func_476((*iParam0)[0], vParam2, fParam5, iParam1))
		{
			return true;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_476((*iParam0)[iVar0], vParam2, fParam5, iParam1))
			{
				iVar0 = *iParam0;
				return true;
			}
			iVar0++;
		}
	}
	func_494("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return false;
}

bool func_476(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	int iVar0;
	struct<7> Var1;

	iVar0 = 0;
	func_110(iParam0, &Var1);
	if (func_477(Var1.f_6, vParam1, fParam4, 0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], false))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_430(iParam0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		*iParam5 = iParam0;
		StringCopy(&(iParam5->f_1), Var1, 32);
		return true;
	}
	return false;
}

bool func_477(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (UNK_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (UNK_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (UNK_0x755FF954DAE327E1((vParam0.z - vParam3.z)) <= fParam6)
				{
					return true;
				}
			}
		}
	}
	else if (UNK_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (UNK_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
		{
			return true;
		}
	}
	return false;
}

void func_478(int iParam0, bool bParam1)
{
	bool bVar0;

	if (bParam1)
	{
		func_494("Cleaning up launcher script entities [TERMINATING]");
		func_483(iParam0, 0, 0, 0);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_266))
	{
		UNK_0x142CC44DB769B57E(&iLocal_266);
	}
	if (iLocal_96 != -1)
	{
		func_494("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_345(&iLocal_96);
	}
	if ((*iParam0 == 12 || *iParam0 == 15) || *iParam0 == 16)
	{
		UNK_0x2952D66A502EA873(iLocal_95, 0);
	}
	func_482(&(iParam0->f_48));
	switch (*iParam0)
	{
		case 9:
			UNK_0x5BED90AC1E2BC558("AZ_EPSILONISM_01_HILLS", 0, 0);
			break;
		case 14:
			UNK_0x8D17794CE3273D70("rcmepsilonism6");
			break;
	}
	switch (*iParam0)
	{
		case 11:
			bVar0 = "EP3_RCM_L2";
			break;
		case 12:
			func_479("EPS4_AMBM");
			bVar0 = "EPS4_AMBJ";
			break;
		case 16:
			func_479("EPS8_AMB1");
			bVar0 = "EPS8_AMB2";
			break;
	}
	func_479(bVar0);
	if (bParam1)
	{
		func_346(*iParam0);
	}
	Global_7361 = 0;
	func_474();
	func_494("SCRIPT TERMINATED");
	UNK_0x10FAF14A60A0DBE1();
}

void func_479(bool bParam0)
{
	if (!UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		if (func_365(bParam0))
		{
			func_480();
		}
	}
}

void func_480()
{
	Global_19671 = 0;
	func_481();
}

void func_481()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

int func_482(var uParam0)
{
	if (func_415(uParam0))
	{
		if (UNK_0xB4AE0788C1587752(*uParam0))
		{
			UNK_0x8D17794CE3273D70(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_483(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_490(iParam0, iParam1);
	func_487(iParam0, bParam2);
	func_484(iParam0, bParam3);
}

void func_484(int iParam0, bool bParam1)
{
	func_485(&(iParam0->f_41), bParam1);
}

void func_485(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_417(uParam0[iVar0]);
		}
		else
		{
			func_486(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_486(bool bParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (UNK_0xBDEB2DEEF1D23A18(*bParam0))
		{
			UNK_0x15AFB6CBDE990FB6(*bParam0, 1, true);
		}
		if (!bParam1)
		{
			UNK_0xEEEE2E5FA6F78DF0(bParam0);
		}
		else
		{
			UNK_0xAA2AE6161CB0D2DC(*bParam0);
		}
	}
}

void func_487(int iParam0, bool bParam1)
{
	func_488(&(iParam0->f_35), bParam1);
}

void func_488(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_441(uParam0[iVar0]);
		}
		else
		{
			func_489(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_489(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		UNK_0x437347B10A200C4B(*bParam0, 0);
		if (UNK_0xAF6690C489CC6203(*bParam0) && UNK_0x9C77D2D0559097F0(*bParam0, 1))
		{
			UNK_0x046C362CF15F1935(bParam0);
		}
	}
}

void func_490(int iParam0, int iParam1)
{
	func_491(&(iParam0->f_28), iParam1);
}

void func_491(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_439(uParam0[iVar0]);
		}
		else
		{
			func_492(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_492(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(*bParam0))
		{
			UNK_0xE8832A9E16A57A1F(*bParam0, false, 1);
			if (iParam3 == 0)
			{
				UNK_0x8FB4E06C94958F84(*bParam0);
			}
			UNK_0xFADC0A217229F6B5(*bParam0, bParam1);
			if (iParam2 == 1)
			{
				UNK_0x11AD11297DC58CC7(*bParam0, false);
			}
		}
		UNK_0x6DAD7906B73F064D(bParam0);
	}
}

void func_493(var uParam0)
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

void func_494(bool bParam0)
{
	if (!UNK_0xEA6BC48857E0AC4C(bParam0))
	{
	}
}

void func_495(var uParam0)
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_496()
{
	func_494("Running start routines.");
	Global_111356++;
}

int func_497(bool bParam0)
{
	if (!func_36(bParam0))
	{
		return func_47(bParam0);
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

