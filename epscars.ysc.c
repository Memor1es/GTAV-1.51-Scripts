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
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	vector3 vLocal_40 = { 0f, 0f, 0f };
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	vector3 vLocal_70[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_86[5] = { 0, 0, 0, 0, 0 };
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = false;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = false;
	bool bLocal_100 = false;
	int iLocal_101 = 0;
	bool bLocal_102 = false;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	vector3 vLocal_109[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119 = 16;
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
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	var uLocal_286 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar3;

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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	vLocal_40 = { -690.938f, 512.2703f, 109.3639f };
	bLocal_100 = -1;
	iLocal_108 = 60000;
	iLocal_285 = 99;
	if (UNK_0x2EBF608FFE6CA406(146))
	{
		func_96();
	}
	if (func_95(90) == 1)
	{
		func_94();
		UNK_0x10FAF14A60A0DBE1();
	}
	bLocal_99 = Global_111638.f_10044.f_103;
	func_93();
	if (func_92())
	{
		func_96();
	}
	func_91(6);
	func_90(&Local_43, joaat("PROP_CH2_09C_GARAGE_DOOR"), -689.81f, 510.34f, 109.98f, vLocal_40, -688.4919f, 507.2549f, 108.9186f, -691.8835f, 516.2689f, 113.4316f, 9.25f, -687.4553f, 507.5179f, 109.3635f, -690.9484f, 506.2783f, 109.3631f);
	func_89(&Local_43, 2);
	Local_43.f_4 = 3;
	UNK_0x28F5E4DA506AC0CA(vLocal_40, 5f, 0, 0, 0, 0, false, 0);
	func_88(&vLocal_109, -691.9059f, 515.8249f, 108.6139f, -684.0605f, 493.0171f, 110.8504f, 8.25f);
	UNK_0xB5376EA942202450(vLocal_109[0 /*3*/], vLocal_109[1 /*3*/], 8.25f, 0, false, 1);
	UNK_0xB5376EA942202450(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0, false, 1);
	func_87(-688.5f, 503.7f, 110.2f, 30f, &vVar0, &vVar3);
	iLocal_118 = UNK_0x7D6CA5F52B3748BF(vVar0, vVar3, 0, 1, 1, 1);
	if (func_95(90) == 1)
	{
		func_94();
		func_96();
	}
	if (Global_111638.f_10044.f_104 == 0)
	{
		Global_111638.f_10044.f_104 = UNK_0x972A296334C9D57B();
	}
	func_83(1);
	func_82(0);
	while (true)
	{
		if (func_95(90) == 1)
		{
			func_94();
			func_96();
		}
		func_81(UNK_0x16F2683693E537C9());
		if (UNK_0x2C1AA3A291786CDC() || func_75() != 0)
		{
			func_70();
		}
		switch (iLocal_94)
		{
			case 0:
				func_69(&iLocal_93);
				break;
			case 4:
				func_68(&iLocal_93);
				break;
			case 1:
				func_67(&iLocal_93);
				break;
			case 2:
				func_61(&iLocal_93);
				break;
			case 3:
				func_57(&iLocal_93);
				break;
			case 6:
				func_54(2, 6, 1);
				func_53(2, "EPS_LSTEMAIL", 1);
				func_52(2);
				func_96();
				break;
		}
		func_49(&Local_43);
		if (func_48(&Local_43))
		{
			if (func_42(&Local_43))
			{
				if (UNK_0x4EF27AB24893425F() == Global_76346)
				{
					Global_76346 = 0;
					Global_111638.f_32744.f_5588 = 0;
				}
				UNK_0x28F5E4DA506AC0CA(Local_43.f_14, 8.5f, 0, 0, 0, 0, false, 0);
				Global_111638.f_10044.f_103 = bLocal_99;
				func_40();
				func_39(&uLocal_119, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
				func_22(&uLocal_119, "EPS3AUD", "EP3_MCS1", 6, 0, 0, 0);
				if (func_21("EPS_DROP_HELP"))
				{
					UNK_0xA37A90C62806D848(1);
				}
				func_19();
			}
		}
		if (Global_111638.f_10044.f_104 != 0)
		{
			iLocal_97 = (Global_111638.f_10044.f_104 + 14 % func_18(UNK_0x118229AD063C3C1D(), UNK_0x1A61A218F5C5EB02()));
			if (((UNK_0x972A296334C9D57B() == iLocal_97 && !func_17(0)) && !UNK_0x131F22FE6F47A65D(UNK_0xD803B885F5E47A62())) && UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				func_4(func_16());
			}
		}
		func_1(&iLocal_284, &uLocal_286, &iLocal_285);
		if ((iLocal_107 > 0 && UNK_0x1C0640BA9A7327B3() > iLocal_107) && iLocal_285 == 99)
		{
			iLocal_107 = 0;
			if (func_92())
			{
				func_82(6);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	switch (*iParam2)
	{
		case 0:
			*iParam0 = UNK_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
			if (UNK_0x83D8570832F172A7(*iParam0))
			{
				iVar0 = UNK_0xD68EA767274B7444();
				UNK_0x4D7F4CC43D4D0DE3(iVar0, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 1);
				*iParam2++;
			}
			break;
		case 1:
			UNK_0x7E60C62A7CE58FC8(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
			UNK_0x7ACC3006A87F8B39("EPS_CAR_TITLE");
			UNK_0x779B34565F4D71B1();
			UNK_0x7ACC3006A87F8B39("EPS_CAR_NOTE");
			UNK_0x6D99DF8263D35CE5(func_3());
			UNK_0x779B34565F4D71B1();
			UNK_0x7E60D21B163E9D56();
			*uParam1 = UNK_0x1C0640BA9A7327B3();
			*iParam2++;
			break;
		case 2:
			if ((UNK_0x1C0640BA9A7327B3() - *uParam1) > 7000)
			{
				UNK_0x7E60C62A7CE58FC8(*iParam0, "SHARD_ANIM_OUT");
				UNK_0x3CAEA85DA607305E(true);
				UNK_0x7C19E5E4784BD7CF(0.33f);
				UNK_0x7E60D21B163E9D56();
				*iParam2++;
			}
			else if (!func_2())
			{
				if (UNK_0x83D8570832F172A7(*iParam0))
				{
					UNK_0x6567AE843FADBA94(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		case 3:
			if ((UNK_0x1C0640BA9A7327B3() - *uParam1) > 7500)
			{
				*iParam2++;
			}
			else if (!func_2())
			{
				if (UNK_0x83D8570832F172A7(*iParam0))
				{
					UNK_0x6567AE843FADBA94(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		case 4:
			if (UNK_0x83D8570832F172A7(*iParam0))
			{
				UNK_0xE17FDF9E3068281B(iParam0);
			}
			*iParam2 = 99;
			break;
		case 99:
			break;
	}
}

bool func_2()
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

int func_3()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < 5)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_99, bVar0))
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

void func_4(bool bParam0)
{
	int iVar0;

	if (bParam0 <= 0)
	{
		return;
	}
	func_54(2, vLocal_70[(5 - bParam0) /*3*/], 1);
	if (func_15(bLocal_100))
	{
		func_53(2, vLocal_70[(5 - bParam0) /*3*/].f_2, 0);
	}
	else
	{
		func_53(2, vLocal_70[(5 - bParam0) /*3*/].f_1, 0);
	}
	bParam0 = false;
	iVar0 = 0;
	bParam0 = false;
	while (bParam0 < iLocal_86)
	{
		if (!func_14(bParam0))
		{
			func_12(2, func_13(iLocal_86[bParam0]));
			iVar0++;
		}
		bParam0++;
	}
	func_5(2);
	Global_111638.f_10044.f_104 = UNK_0x972A296334C9D57B();
	if (iVar0 == 0)
	{
	}
}

void func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	bool bVar8;

	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_51915[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_51915[iVar0 /*203*/].f_10[(Global_51915[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_51915[iVar0 /*203*/].f_9 - 1);
	if (!Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_10(Global_42615[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				bVar8 = "PW_FEED_EM_1";
				break;
			case 269:
				bVar8 = "PW_FEED_EM_3";
				break;
			default:
				bVar8 = "PW_FEED_EM_2";
				break;
		}
		func_6(1, Global_42615[iVar1 /*12*/].f_2, iVar1, bVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_42615[iVar1 /*12*/].f_3)
		{
			case 0:
				func_6(0, Global_42615[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			case 1:
				func_6(1, Global_42615[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			case 2:
				func_6(2, Global_42615[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_51915[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
		}
	}
}

void func_6(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];

	if (UNK_0x22A8E52414415B76())
	{
		return;
	}
	iVar0 = func_75();
	bVar1 = false;
	StringCopy(&cVar2, func_9(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				UNK_0x1E64CE678ED5F61E("PROPR_INCEMAIL1");
				break;
			case 73:
				UNK_0x1E64CE678ED5F61E("PROPR_INCEMAIL3");
				break;
			case 74:
				UNK_0x1E64CE678ED5F61E("PROPR_INCEMAIL2");
				break;
			default:
				UNK_0x1E64CE678ED5F61E(bParam3);
				if (!UNK_0xEA6BC48857E0AC4C(bParam4))
				{
					UNK_0x6B012227B3921E18(bParam4);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam5))
				{
					UNK_0x6B012227B3921E18(bParam5);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam6))
				{
					UNK_0x6B012227B3921E18(bParam6);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam7))
				{
					UNK_0x6B012227B3921E18(bParam7);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam8))
				{
					UNK_0x6B012227B3921E18(bParam8);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam9))
				{
					UNK_0x6B012227B3921E18(bParam9);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam10))
				{
					UNK_0x6B012227B3921E18(bParam10);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam11))
				{
					UNK_0x6B012227B3921E18(bParam11);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam12))
				{
					UNK_0x6B012227B3921E18(bParam12);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam13))
				{
					UNK_0x6B012227B3921E18(bParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_7(UNK_0x1AEA174B291A9906(&cVar2, &cVar2, 0, 2, UNK_0x19C9F30A7697B43C(func_8(iParam1)), 0));
		}
		else
		{
			func_7(UNK_0x1AEA174B291A9906("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, UNK_0x19C9F30A7697B43C(func_8(iParam1)), 0));
		}
		switch (Global_19486)
		{
			case 0:
				StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
				Global_42607++;
				if (Global_42607 > 16)
				{
					Global_42607 = 16;
				}
				break;
			case 2:
				StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
				Global_42609++;
				if (Global_42609 > 16)
				{
					Global_42609 = 16;
				}
				break;
			case 1:
				StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
				Global_42608++;
				if (Global_42608 > 16)
				{
					Global_42608 = 16;
				}
				break;
			default:
				StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
				break;
		}
		UNK_0x4D7F4CC43D4D0DE3(-1, "Notification", &Global_19475, 1);
	}
}

void func_7(int iParam0)
{
	Global_42610[Global_42614] = iParam0;
	Global_21863 = 1;
	Global_21862 = iParam0;
	Global_42614++;
	if (Global_42614 == 3)
	{
		Global_42614 = 0;
	}
}

char* func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		case 3:
			return "EMSTR_3";
		case 1:
			return "EMSTR_6";
		case 2:
			return "EMSTR_9";
		case 4:
			return "EMSTR_12";
		case 5:
			return "EMSTR_29";
		case 6:
			return "EMSTR_36";
		case 7:
			return "EMSTR_39";
		case 8:
			return "EMSTR_52";
		case 9:
			return "EMSTR_55";
		case 10:
			return "EMSTR_58";
		case 11:
			return "EMSTR_78";
		case 12:
			return "EMSTR_81";
		case 13:
			return "EMSTR_84";
		case 14:
			return "EMSTR_87";
		case 15:
			return "EMSTR_106";
		case 16:
			return "EMSTR_114";
		case 17:
			return "EMSTR_142";
		case 18:
			return "EMSTR_145";
		case 19:
			return "EMSTR_152";
		case 20:
			return "EMSTR_157";
		case 21:
			return "EMSTR_163";
		case 22:
			return "EMSTR_182";
		case 23:
			return "EMSTR_187";
		case 24:
			return "EMSTR_190";
		case 25:
			return "EMSTR_206";
		case 26:
			return "EMSTR_219";
		case 27:
			return "EMSTR_226";
		case 28:
			return "EMSTR_233";
		case 29:
			return "EMSTR_242";
		case 30:
			return "EMSTR_249";
		case 31:
			return "EMSTR_262";
		case 32:
			return "EMSTR_269";
		case 33:
			return "EMSTR_319";
		case 34:
			return "EMSTR_340";
		case 35:
			return "EMSTR_348";
		case 36:
			return "EMSTR_182";
		case 37:
			return "EMSTR_357";
		case 38:
			return "EMSTR_360";
		case 39:
			return "EMSTR_369";
		case 40:
			return "EMSTR_376";
		case 41:
			return "EMSTR_379";
		case 42:
			return "EMSTR_382";
		case 43:
			return "EMSTR_384";
		case 44:
			return "EMSTR_387";
		case 45:
			return "EMSTR_390";
		case 46:
			return "EMSTR_393";
		case 47:
			return "EMSTR_396";
		case 48:
			return "EMSTR_399";
		case 49:
			return "EMSTR_402";
		case 50:
			return "EMSTR_405";
		case 51:
			return "EMSTR_408";
		case 52:
			return "EMSTR_411";
		case 53:
			return "EMSTR_414";
		case 54:
			return "EMSTR_465";
		case 55:
			return "EMSTR_468";
		case 56:
			return "EMSTR_489";
		case 57:
			return "EMSTR_492";
		case 58:
			return "EMSTR_495";
		case 59:
			return "EMSTR_498";
		case 60:
			return "EMSTR_501";
		case 61:
			return "EMSTR_504";
		case 62:
			return "EMSTR_507";
		case 63:
			return "EMSTR_640";
		case 64:
			return "EMSTR_643";
		case 65:
			return "EMSTR_652";
		default:
			break;
	}
	return "NULL";
}

char* func_9(int iParam0, bool bParam1)
{
	*bParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[0 /*29*/].f_7));
		case 1:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[1 /*29*/].f_7));
		case 2:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[2 /*29*/].f_7));
		case 7:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[12 /*29*/].f_7));
		case 4:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[60 /*29*/].f_7));
		case 6:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[62 /*29*/].f_7));
		case 3:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[14 /*29*/].f_7));
		case 16:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[97 /*29*/].f_7));
		case 19:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[99 /*29*/].f_7));
		case 15:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[96 /*29*/].f_7));
		case 63:
			return "CHAR_CARSITE2";
		case 64:
			return "CHAR_BOATSITE";
		case 8:
			return "CHAR_BANK_MAZE";
		case 9:
			return "CHAR_BANK_FLEECA";
		case 10:
			return "CHAR_BANK_BOL";
		case 21:
			return "CHAR_MINOTAUR";
		case 25:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[15 /*29*/].f_7));
		case 26:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[30 /*29*/].f_7));
		case 27:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[17 /*29*/].f_7));
		case 29:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[20 /*29*/].f_7));
		case 30:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[43 /*29*/].f_7));
		case 31:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[44 /*29*/].f_7));
		case 32:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[19 /*29*/].f_7));
		case 34:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[40 /*29*/].f_7));
		case 36:
			return UNK_0x19C9F30A7697B43C("CELL_E_381");
		case 38:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[64 /*29*/].f_7));
		case 5:
			return "CHAR_EPSILON";
		case 13:
			return "CHAR_MILSITE";
		case 11:
			return "CHAR_CARSITE";
		case 14:
			return "CHAR_BOATSITE";
		case 12:
			return "CHAR_PLANESITE";
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		case 55:
			return "CHAR_CARSITE2";
		case 54:
			return "CHAR_BIKESITE";
		case 39:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[122 /*29*/].f_7));
		case 40:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[125 /*29*/].f_7));
		case 41:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[113 /*29*/].f_7));
		case 42:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[126 /*29*/].f_7));
		case 43:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[127 /*29*/].f_7));
		case 44:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[124 /*29*/].f_7));
		case 45:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[114 /*29*/].f_7));
		case 46:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[115 /*29*/].f_7));
		case 47:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[116 /*29*/].f_7));
		case 48:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[123 /*29*/].f_7));
		case 49:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[117 /*29*/].f_7));
		case 50:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[118 /*29*/].f_7));
		case 51:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[119 /*29*/].f_7));
		case 52:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[120 /*29*/].f_7));
		case 53:
			return UNK_0x19C9F30A7697B43C(&(Global_1798[121 /*29*/].f_7));
		default:
			break;
	}
	*bParam1 = 0;
	return "ERROR!";
}

struct<16> func_10(int iParam0)
{
	struct<16> Var0;
	struct<16> Var16;

	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_51915[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_51915[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_51915[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_12(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_51915[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_51915[iVar0 /*203*/].f_10[(Global_51915[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_51915[iVar0 /*203*/].f_10[(Global_51915[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_51915[iVar0 /*203*/].f_10[(Global_51915[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_51915[iVar0 /*203*/].f_10[(Global_51915[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

char* func_13(int iParam0)
{
	if (iParam0 == iLocal_86[0])
	{
		return "EPS_CARNME_0";
	}
	if (iParam0 == iLocal_86[1])
	{
		return "EPS_CARNME_1";
	}
	if (iParam0 == iLocal_86[2])
	{
		return "EPS_CARNME_2";
	}
	if (iParam0 == iLocal_86[3])
	{
		return "EPS_CARNME_3";
	}
	if (iParam0 == iLocal_86[4])
	{
		return "EPS_CARNME_4";
	}
	return "EPS_CARNME_N";
}

bool func_14(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(bLocal_99, bParam0);
}

bool func_15(bool bParam0)
{
	if (bParam0 < 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(bLocal_99, bParam0 + 5);
}

bool func_16()
{
	return (5 - func_3());
}

bool func_17(int iParam0)
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

int func_18(int iParam0, int iParam1)
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

void func_19()
{
	int iVar0;

	iLocal_285 = 0;
	UNK_0x6FB46C25CCB7E6D5(joaat("NUM_EPSILON_STEP"), &iVar0, -1);
	if (iVar0 < (6 + func_3()))
	{
		UNK_0xCDC520E5E48E63D9(joaat("NUM_EPSILON_STEP"), (6 + func_3()), 1);
		func_20(23, (6 + func_3()));
	}
}

int func_20(int iParam0, bool bParam1)
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

bool func_21(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

int func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
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
					func_37();
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
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_35();
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
				func_33();
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
				if (func_32())
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
			if (func_31())
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
			func_30();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_29();
		func_24();
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
		func_37();
	}
	return 0;
}

void func_24()
{
	if (!func_25())
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

bool func_25()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_28())
	{
		return false;
	}
	if (func_26(UNK_0xD803B885F5E47A62()))
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

bool func_26(int iParam0)
{
	return func_27(iParam0, 20);
}

bool func_27(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_28()
{
	return -1;
}

void func_29()
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

void func_30()
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

bool func_31()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_32()
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

void func_33()
{
	if (func_34(14))
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
		Global_19486 = func_75();
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

bool func_34(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_35()
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

bool func_36(bool bParam0, int iParam1)
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

void func_37()
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

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_39(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

int func_40()
{
	if (func_41(0))
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

bool func_41(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

bool func_42(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[20];

	iVar2 = 0;
	iVar1 = UNK_0xA361D247A75E0128(UNK_0x16F2683693E537C9(), &uVar3);
	if (iVar1 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (func_81(uVar3[iVar0]))
		{
			if (UNK_0x3D1053F9EB43B7AD(uVar3[iVar0], uParam0->f_6[0 /*3*/], uParam0->f_6[1 /*3*/], uParam0->f_6.f_7, 0, true, 0) && !uParam0->f_26)
			{
				if (func_43(uVar3[iVar0]))
				{
					iVar2 = 1;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 == 1)
	{
		Global_111638.f_10044.f_104 = UNK_0x972A296334C9D57B();
		iLocal_107 = (UNK_0x1C0640BA9A7327B3() + iLocal_108);
	}
	return iVar2;
}

bool func_43(bool bParam0)
{
	bool bVar0;
	int iVar1;

	iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
	if (func_47(bParam0))
	{
		return false;
	}
	bVar0 = false;
	while (bVar0 < 5)
	{
		if (func_46(iVar1, bVar0))
		{
			if (!func_14(bVar0))
			{
				func_45(bVar0, UNK_0x7F6DC62EA9922664(bParam0) < 875);
				func_44(bVar0, 1);
				return true;
			}
		}
		bVar0++;
	}
	return false;
}

void func_44(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&bLocal_99, bParam0);
		bLocal_100 = bParam0;
	}
	else
	{
		UNK_0x0674E58A79778E99(&bLocal_99, bParam0);
	}
}

void func_45(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&bLocal_99, bParam0 + 5);
	}
	else
	{
		UNK_0x0674E58A79778E99(&bLocal_99, bParam0 + 5);
	}
}

bool func_46(int iParam0, bool bParam1)
{
	if (iParam0 == iLocal_86[bParam1])
	{
		return true;
	}
	if (iLocal_86[bParam1] != joaat("TORNADO2"))
	{
		return false;
	}
	if (iParam0 == joaat("TORNADO"))
	{
		return true;
	}
	if (iParam0 == joaat("TORNADO2"))
	{
		return true;
	}
	if (iParam0 == joaat("TORNADO3"))
	{
		return true;
	}
	if (iParam0 == joaat("TORNADO4"))
	{
		return true;
	}
	return false;
}

bool func_47(bool bParam0)
{
	if (!func_81(bParam0))
	{
		return true;
	}
	if (UNK_0x7F6DC62EA9922664(bParam0) < 750)
	{
		return true;
	}
	if (UNK_0xDBF86CCBD1D2F357(bParam0, 1) || UNK_0xDBF86CCBD1D2F357(bParam0, 0))
	{
		return true;
	}
	return UNK_0x304FA4F6882D730E(bParam0) > 0;
}

bool func_48(var uParam0)
{
	return (uParam0->f_5 == 2 && uParam0->f_4 == 2);
}

void func_49(var uParam0)
{
	vector3 vVar0;

	uParam0->f_26 = 0;
	if (UNK_0xF65264B66E133BD8(uParam0->f_19[0 /*3*/], 1.2f, 0, 1, 1, 0, 0, UNK_0x16F2683693E537C9(), 0))
	{
		uParam0->f_26 = 1;
	}
	else if (UNK_0xF65264B66E133BD8(uParam0->f_19[1 /*3*/], 1.2f, 0, 1, 1, 0, 0, UNK_0x16F2683693E537C9(), 0))
	{
		uParam0->f_26 = 1;
	}
	else
	{
		vVar0 = { func_50(uParam0->f_19[0 /*3*/], uParam0->f_19[1 /*3*/], 0.5f, 1) };
		uParam0->f_26 = UNK_0xF65264B66E133BD8(vVar0, 1.2f, 0, 1, 1, 0, 0, UNK_0x16F2683693E537C9(), 0);
		if (uParam0->f_26)
		{
		}
	}
	if (uParam0->f_5 == 2 && (uParam0->f_4 != 2 || uParam0->f_4 == 3))
	{
		uParam0->f_17 = (uParam0->f_17 - uParam0->f_18);
		if (uParam0->f_17 <= 0f)
		{
			uParam0->f_17 = 0f;
			uParam0->f_4 = 2;
			UNK_0x55D0A2DB35045A35(iLocal_95);
			bLocal_96 = false;
			UNK_0xEB819BD1E585E9CB(-1, "CLOSED", *uParam0, "DOOR_GARAGE", false, 0, 1);
		}
		else if (!bLocal_96)
		{
			UNK_0xEB819BD1E585E9CB(iLocal_95, "CLOSING", *uParam0, "DOOR_GARAGE", false, 0, 1);
			bLocal_96 = true;
		}
	}
	if (uParam0->f_5 == 1 && (uParam0->f_4 != 1 || uParam0->f_4 == 4))
	{
		uParam0->f_17 = (uParam0->f_17 + uParam0->f_18);
		if (uParam0->f_17 >= 1f)
		{
			uParam0->f_17 = 1f;
			uParam0->f_4 = 1;
			UNK_0x55D0A2DB35045A35(iLocal_95);
			bLocal_96 = false;
			UNK_0xEB819BD1E585E9CB(-1, "OPENED", *uParam0, "DOOR_GARAGE", false, 0, 1);
		}
		else if (!bLocal_96)
		{
			UNK_0xEB819BD1E585E9CB(iLocal_95, "OPENING", *uParam0, "DOOR_GARAGE", false, 0, 1);
			bLocal_96 = true;
		}
	}
	if (UNK_0xBF75E4DF4C367CD9(*uParam0, 20f, uParam0->f_3, 0))
	{
		UNK_0x6DA3AC47D5DB9EED(uParam0->f_3, *uParam0, true, uParam0->f_17, 0);
	}
}

Vector3 func_50(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		fParam6 = func_51(fParam6, 0f, 1f);
	}
	return vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3 - vParam0;
}

float func_51(float fParam0, float fParam1, float fParam2)
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

void func_52(int iParam0)
{
	int iVar0;

	if (iParam0 == 26)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24981, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_51915[iVar0 /*203*/] = 0;
}

void func_53(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_51915[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_51915[iVar0 /*203*/].f_10[(Global_51915[iVar0 /*203*/].f_9 - 1) /*48*/].f_1 = 1;
	StringCopy(&(Global_51915[iVar0 /*203*/].f_10[(Global_51915[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
	Global_51915[iVar0 /*203*/].f_10[(Global_51915[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 = 0;
	StringCopy(&(Global_51915[iVar0 /*203*/].f_10[(Global_51915[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_51915[iVar0 /*203*/].f_10[(Global_51915[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_51915[iVar0 /*203*/].f_10[(Global_51915[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_51915[iVar0 /*203*/].f_10[(Global_51915[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_51915[iVar0 /*203*/].f_10[(Global_51915[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
	if (bParam2)
	{
		func_5(iParam0);
	}
}

int func_54(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_56(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_51915[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_51915[iVar0 /*203*/].f_2 = iParam0;
	Global_51915[iVar0 /*203*/].f_10[Global_51915[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_51915[iVar0 /*203*/].f_10[Global_51915[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_51915[iVar0 /*203*/].f_10[Global_51915[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_51915[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_51915[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_51915[iVar0 /*203*/].f_4[iVar1] == Global_42615[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_51915[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_51915[iVar0 /*203*/].f_4[Global_51915[iVar0 /*203*/].f_3] = Global_42615[iParam1 /*12*/].f_3;
			Global_51915[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_51915[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_51915[iVar0 /*203*/].f_4[iVar1] == Global_42615[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_51915[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_51915[iVar0 /*203*/].f_4[Global_51915[iVar0 /*203*/].f_3] = Global_42615[iParam1 /*12*/].f_2;
			Global_51915[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_51915[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_51915[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_55(Global_51915[iVar0 /*203*/].f_4[iVar1], Global_51915[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_55(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;

	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_45940[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_45940[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_10(Global_42615[iVar20 /*12*/].f_1) };
		if (Global_42615[iVar20 /*12*/].f_2 == iParam0 && !Global_42615[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_42615[iVar20 /*12*/].f_2;
		iVar0 = Global_51553[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_51553[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_42607 = (Global_42607 - 1);
						if (Global_42607 < 0)
						{
							Global_42607 = 0;
						}
						break;
					case 1:
						Global_42608 = (Global_42608 - 1);
						if (Global_42608 < 0)
						{
							Global_42608 = 0;
						}
						break;
					case 2:
						Global_42609 = (Global_42609 - 1);
						if (Global_42609 < 0)
						{
							Global_42609 = 0;
						}
						break;
				}
			}
		}
		Global_51553[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_51553[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_51553[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_51553[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_51553[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_51553[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_51553[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_51553[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_42607 = (Global_42607 - 1);
						if (Global_42607 < 0)
						{
							Global_42607 = 0;
						}
						break;
					case 1:
						Global_42608 = (Global_42608 - 1);
						if (Global_42608 < 0)
						{
							Global_42608 = 0;
						}
						break;
					case 2:
						Global_42609 = (Global_42609 - 1);
						if (Global_42609 < 0)
						{
							Global_42609 = 0;
						}
						break;
				}
			}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_51915[iVar24 /*203*/].f_1 == iParam1 && Global_51915[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_51553[iParam0 /*120*/].f_18[iVar0] = Global_51915[iVar23 /*203*/].f_1;
		Global_51553[iParam0 /*120*/].f_1[iVar0] = (Global_51915[iVar23 /*203*/].f_9 - 1);
		Global_51553[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_51553[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_51553[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_51553[iParam0 /*120*/]++;
		iVar25 = Global_51553[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_51915[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_42615[iVar26 /*12*/].f_2;
		if (Global_51915[iVar23 /*203*/].f_10[(Global_51915[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_51915[iVar23 /*203*/].f_10[(Global_51915[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_10(Global_42615[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_51553[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_6(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				case 1:
					if (iVar2 == 249)
					{
						func_6(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_6(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				case 2:
					func_6(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			}
		}
	}
}

int func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_11(iParam0);
	if (iVar0 > -1)
	{
		if (Global_51915[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_51915[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_51915[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_51915[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_51915[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_51915[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_51915[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_51915[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_51553[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_51553[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_51553[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_51553[iVar6 /*120*/].f_18[iVar8] == Global_51915[iVar4 /*203*/].f_1)
							{
								if (Global_51553[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_42607 = (Global_42607 - 1);
											break;
										case 1:
											Global_42608 = (Global_42608 - 1);
											break;
										case 2:
											Global_42609 = (Global_42609 - 1);
											break;
									}
								}
							}
						}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_51915[iVar4 /*203*/].f_2 = iParam0;
	Global_51915[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_51915[iVar4 /*203*/] = 1;
	}
	Global_111638.f_21032.f_310++;
	if (Global_111638.f_21032.f_310 == 0)
	{
		Global_111638.f_21032.f_310 = 1;
	}
	Global_51915[iVar4 /*203*/].f_1 = Global_111638.f_21032.f_310;
	Global_51915[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_57(int iParam0)
{
	bool bVar0;

	switch (*iParam0)
	{
		case 1:
			func_60(&iLocal_92);
			func_59("EPS_DROP_PERSON", -1);
			*iParam0 = 2;
			break;
		case 2:
			if (!func_58())
			{
				*iParam0 = 4;
				return;
			}
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
			{
				bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 1);
				if (func_81(bVar0))
				{
					if (UNK_0x2720E241B5CCF780(bVar0) == 0)
					{
						*iParam0 = 4;
					}
				}
			}
			break;
		case 4:
			if (!func_58())
			{
				func_82(0);
			}
			else
			{
				func_59("EPS_DROP_ESCAPE", -1);
				func_82(2);
			}
			break;
	}
}

bool func_58()
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	if (!func_81(UNK_0x16F2683693E537C9()))
	{
		return false;
	}
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bLocal_102 = false;
		return false;
	}
	bVar1 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
	if (!func_81(bVar1))
	{
		return false;
	}
	bVar0 = false;
	while (bVar0 < 5)
	{
		if (!func_14(bVar0))
		{
			if (func_46(UNK_0x134B62B726CEC8E6(bVar1), bVar0))
			{
				if (func_47(bVar1))
				{
					if (!bLocal_102)
					{
						func_59("EPS_DROP_FAIL", -1);
						bLocal_102 = true;
					}
					return false;
				}
				return true;
			}
		}
		bVar0++;
	}
	return false;
}

void func_59(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_60(bool bParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x661342B9651D16E2(*bParam0, false);
		UNK_0x142CC44DB769B57E(bParam0);
	}
}

void func_61(int iParam0)
{
	bool bVar0;

	switch (*iParam0)
	{
		case 1:
			func_89(&Local_43, 1);
			Local_43.f_4 = 4;
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				UNK_0x7800CEC090C01D4D(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1.5f);
			}
			*iParam0 = 2;
			iLocal_98 = 0;
			iLocal_106 = 0;
			break;
		case 2:
			switch (iLocal_98)
			{
				case 0:
					if (iLocal_103 == 1 && !Local_43.f_26)
					{
						if (func_21("EPS_DROP_MESS"))
						{
							UNK_0xA37A90C62806D848(1);
						}
					}
					if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
					{
						func_82(4);
						return;
					}
					if (func_66(UNK_0x16F2683693E537C9()) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 1);
					}
					if (func_81(bVar0) && UNK_0x2720E241B5CCF780(bVar0) > 0)
					{
						if (UNK_0xA30B8362589C124A(bVar0, false, 0) != UNK_0x16F2683693E537C9())
						{
							func_82(3);
							return;
						}
					}
					if (!Local_43.f_26)
					{
						if (iLocal_104 == 0)
						{
							if (func_65(bVar0))
							{
								if (UNK_0x3D1053F9EB43B7AD(bVar0, Local_43.f_6[0 /*3*/], Local_43.f_6[1 /*3*/], Local_43.f_6.f_7, 0, true, 0))
								{
									func_64("EPS_DROP_EXIT", 7500, 1);
									iLocal_106 = 0;
									iLocal_104 = 1;
									iLocal_103 = 0;
								}
							}
						}
						if (func_63(UNK_0x16F2683693E537C9(), Local_43.f_14, 0) < 3f)
						{
							func_60(&iLocal_92);
						}
						if (func_63(UNK_0x16F2683693E537C9(), Local_43, 0) > (15f + 5f))
						{
							func_89(&Local_43, 2);
							Local_43.f_4 = 3;
							iLocal_104 = 0;
							iLocal_103 = 0;
							iLocal_106 = 0;
							func_82(1);
							return;
						}
						if (func_62(&Local_43) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
						{
							func_89(&Local_43, 2);
							Local_43.f_4 = 3;
							iLocal_106 = 0;
							func_82(0);
							return;
						}
					}
					if ((Local_43.f_26 && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0)) && UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()))
					{
						if (iLocal_106 == 0)
						{
							iLocal_106 = UNK_0x1C0640BA9A7327B3();
						}
						else if ((UNK_0x1C0640BA9A7327B3() - iLocal_106) > 500)
						{
							if (iLocal_103 == 0)
							{
								UNK_0x790015DC92C918E2();
								func_59("EPS_DROP_MESS", -1);
								iLocal_103 = 1;
								iLocal_104 = 0;
							}
						}
					}
					break;
			}
			break;
	}
}

bool func_62(var uParam0)
{
	return (!uParam0->f_26 && !UNK_0xF65264B66E133BD8(uParam0->f_14, 6.2f, 0, 0, 1, 0, 0, false, 0));
}

float func_63(bool bParam0, vector3 vParam1, int iParam4)
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

void func_64(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

bool func_65(bool bParam0)
{
	if (func_66(bParam0))
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

bool func_66(bool bParam0)
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

void func_67(int iParam0)
{
	bool bVar0;

	switch (*iParam0)
	{
		case 1:
			if (!UNK_0xE4EDC4B0E92C078B(iLocal_92))
			{
				iLocal_92 = UNK_0x6CC513A908911CF0(vLocal_40);
				if (UNK_0xE4EDC4B0E92C078B(iLocal_92))
				{
					UNK_0xBC8E0A7390523199(iLocal_92, 206);
					UNK_0x61755AC17D8F538E(iLocal_92, 42);
				}
			}
			*iParam0 = 2;
			iLocal_98 = 0;
			break;
		case 2:
			if (!func_58())
			{
				func_82(0);
				return;
			}
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
			{
				func_82(4);
				return;
			}
			if (func_66(UNK_0x16F2683693E537C9()) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
			{
				bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 1);
			}
			if (func_81(bVar0) && UNK_0x2720E241B5CCF780(bVar0) > 0)
			{
				if (UNK_0xA30B8362589C124A(bVar0, false, 0) != UNK_0x16F2683693E537C9())
				{
					func_82(3);
					return;
				}
			}
			if (func_63(UNK_0x16F2683693E537C9(), Local_43, 0) < 15f)
			{
				*iParam0 = 4;
				return;
			}
			break;
		case 4:
			func_82(2);
			break;
	}
}

void func_68(int iParam0)
{
	switch (*iParam0)
	{
		case 1:
			func_60(&iLocal_92);
			if (iLocal_105 == 0)
			{
				func_59("EPS_DROP_WANTED", -1);
			}
			*iParam0 = 2;
			break;
		case 2:
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
			{
				*iParam0 = 4;
			}
			break;
		case 4:
			if (!func_58())
			{
				func_82(0);
			}
			else
			{
				if (iLocal_105 == 0)
				{
					func_59("EPS_DROP_ESCAPE", -1);
				}
				func_82(2);
			}
			iLocal_105 = 1;
			break;
	}
}

void func_69(int iParam0)
{
	switch (*iParam0)
	{
		case 1:
			*iParam0 = 2;
			iLocal_101 = 0;
			iLocal_103 = 0;
			func_60(&iLocal_92);
			break;
		case 2:
			if (func_66(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), Local_43.f_6[0 /*3*/], Local_43.f_6[1 /*3*/], Local_43.f_6.f_7, 0, true, 0) && func_48(&Local_43))
				{
					UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -687.6668f, 500.598f, 109.0364f, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 200.7367f);
				}
			}
			if (func_63(UNK_0x16F2683693E537C9(), Local_43, 0) > (15f + 5f))
			{
				func_89(&Local_43, 2);
				if (Local_43.f_4 != 2)
				{
					Local_43.f_4 = 3;
				}
			}
			if (func_58())
			{
				if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
				{
					func_82(4);
					return;
				}
				*iParam0 = 4;
				return;
			}
			break;
		case 4:
			if (iLocal_101 == 0 && func_66(UNK_0x16F2683693E537C9()))
			{
				if (iLocal_117 != UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 1))
				{
					iLocal_117 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 1);
					func_59("EPS_DROP_HELP", -1);
					iLocal_101 = 1;
				}
			}
			bLocal_102 = false;
			func_82(1);
			break;
	}
}

void func_70()
{
	func_72();
	while (UNK_0x2C1AA3A291786CDC() || func_75() != 0)
	{
		SYSTEM::WAIT(0);
	}
	func_71();
}

void func_71()
{
	vector3 vVar0;
	vector3 vVar3;

	if (!func_81(UNK_0x16F2683693E537C9()))
	{
	}
	UNK_0xB5376EA942202450(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0, false, 1);
	func_87(-688.5f, 503.7f, 110.2f, 30f, &vVar0, &vVar3);
	iLocal_118 = UNK_0x7D6CA5F52B3748BF(vVar0, vVar3, 0, 1, 1, 1);
	bLocal_99 = Global_111638.f_10044.f_103;
	func_93();
	if (func_92())
	{
		func_96();
	}
	func_83(1);
	if (func_11(2) == -1)
	{
		func_4(func_16());
	}
	func_82(0);
}

void func_72()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_92))
	{
		func_60(&iLocal_92);
		iLocal_92 = 0;
	}
	Global_111638.f_10044.f_103 = bLocal_99;
	func_60(&iLocal_92);
	func_83(0);
	func_74();
	func_73(&Local_43);
	UNK_0x2952D66A502EA873(iLocal_118, 0);
	UNK_0x842F1AEB2FCC00B7(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 1);
	UNK_0x842F1AEB2FCC00B7(vLocal_109[0 /*3*/], vLocal_109[1 /*3*/], 8.25f, 1);
}

void func_73(var uParam0)
{
	if (UNK_0xBF75E4DF4C367CD9(*uParam0, 20f, uParam0->f_3, 0))
	{
		UNK_0x6DA3AC47D5DB9EED(uParam0->f_3, *uParam0, true, 0f, 0);
	}
}

void func_74()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		UNK_0x71199B01895C6202(iLocal_86[iVar0]);
		iVar0++;
	}
}

int func_75()
{
	func_76();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_76()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_79(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_78(UNK_0x16F2683693E537C9());
			if (func_77(iVar0) && (!func_34(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_77(Global_111638.f_2358.f_539.f_4321))
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

bool func_77(int iParam0)
{
	return iParam0 < 3;
}

int func_78(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_79(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_79(int iParam0)
{
	if (func_77(iParam0))
	{
		return func_80(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_80(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_81(bool bParam0)
{
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return false;
	}
	return !UNK_0x437347B10A200C4B(bParam0, 0);
}

void func_82(int iParam0)
{
	iLocal_94 = iParam0;
	iLocal_93 = 1;
}

void func_83(bool bParam0)
{
	func_84(44, bParam0);
	func_84(45, bParam0);
	func_84(46, bParam0);
	func_84(47, bParam0);
	func_84(48, bParam0);
	func_84(49, bParam0);
	func_84(50, bParam0);
}

void func_84(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_86(iParam0, 0))
		{
			func_85(iParam0, 1, 0);
			func_85(iParam0, 2, 0);
			func_85(iParam0, 3, 0);
			func_85(iParam0, 4, 0);
			func_85(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_85(iParam0, 0, 0);
	}
}

void func_85(int iParam0, bool bParam1, bool bParam2)
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

bool func_86(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], bParam1);
}

void func_87(vector3 vParam0, float fParam3, var uParam4, var uParam5)
{
	vector3 vVar0;

	vVar0 = { fParam3, fParam3, fParam3 };
	*uParam4 = { vParam0 - vVar0 };
	*uParam5 = { vParam0 + vVar0 };
}

void func_88(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	*(uParam0[0 /*3*/]) = { vParam1 };
	*(uParam0[1 /*3*/]) = { vParam4 };
	uParam0->f_7 = fParam7;
}

void func_89(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

void func_90(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, vector3 vParam11, float fParam14, vector3 vParam15, vector3 vParam18)
{
	uParam0->f_3 = iParam1;
	*uParam0 = { vParam2 };
	uParam0->f_5 = 2;
	uParam0->f_4 = 0;
	uParam0->f_19[0 /*3*/] = { vParam15 };
	uParam0->f_19[1 /*3*/] = { vParam18 };
	uParam0->f_14 = { vParam5 };
	func_88(&(uParam0->f_6), vParam8, vParam11, fParam14);
}

int func_91(int iParam0)
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

bool func_92()
{
	return func_3() == 5;
}

void func_93()
{
	iLocal_86[0] = joaat("VACCA");
	iLocal_86[1] = joaat("SURANO");
	iLocal_86[2] = joaat("TORNADO2");
	iLocal_86[3] = joaat("SUPERD");
	iLocal_86[4] = joaat("DOUBLE");
	vLocal_70[0 /*3*/] = 1;
	vLocal_70[0 /*3*/].f_1 = "EPS_GMAIL_G5";
	vLocal_70[0 /*3*/].f_2 = "EPS_BMAIL_G5";
	vLocal_70[1 /*3*/] = 2;
	vLocal_70[1 /*3*/].f_1 = "EPS_GMAIL_G4";
	vLocal_70[1 /*3*/].f_2 = "EPS_BMAIL_G4";
	vLocal_70[2 /*3*/] = 3;
	vLocal_70[2 /*3*/].f_1 = "EPS_GMAIL_G3";
	vLocal_70[2 /*3*/].f_2 = "EPS_BMAIL_G3";
	vLocal_70[3 /*3*/] = 4;
	vLocal_70[3 /*3*/].f_1 = "EPS_GMAIL_G2";
	vLocal_70[3 /*3*/].f_2 = "EPS_BMAIL_G2";
	vLocal_70[4 /*3*/] = 5;
	vLocal_70[4 /*3*/].f_1 = "EPS_GMAIL_G1";
	vLocal_70[4 /*3*/].f_2 = "EPS_BMAIL_G1";
}

void func_94()
{
	bool bVar0;

	bLocal_99 = false;
	bVar0 = false;
	while (bVar0 < 5)
	{
		UNK_0x5D96D8530B3D0904(&bLocal_99, bVar0);
		bVar0++;
	}
}

int func_95(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_96()
{
	int iVar0;

	func_60(&iLocal_92);
	func_83(0);
	func_74();
	func_73(&Local_43);
	Global_111638.f_10044.f_103 = bLocal_99;
	if (func_92() || func_95(90) == 1)
	{
		func_98(90, 1);
		func_97(6);
	}
	UNK_0x842F1AEB2FCC00B7(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 1);
	UNK_0x842F1AEB2FCC00B7(vLocal_109[0 /*3*/], vLocal_109[1 /*3*/], 8.25f, 1);
	UNK_0x2952D66A502EA873(iLocal_118, 0);
	if (iLocal_284 != 0)
	{
		UNK_0xE17FDF9E3068281B(&iLocal_284);
		iLocal_284 = 0;
	}
	UNK_0x6FB46C25CCB7E6D5(joaat("NUM_EPSILON_STEP"), &iVar0, -1);
	if (iVar0 < (6 + func_3()))
	{
		UNK_0xCDC520E5E48E63D9(joaat("NUM_EPSILON_STEP"), (6 + func_3()), 1);
		func_20(23, (6 + func_3()));
	}
	UNK_0x10FAF14A60A0DBE1();
}

int func_97(int iParam0)
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
		UNK_0x0674E58A79778E99(&(Global_111638.f_9080.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

void func_98(int iParam0, int iParam1)
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

