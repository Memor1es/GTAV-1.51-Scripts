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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	int iLocal_37 = 0;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
	int iLocal_40 = 0;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	vector3 vLocal_43 = { 0f, 0f, 0f };
	vector3 vLocal_46 = { 0f, 0f, 0f };
	vector3 vLocal_49 = { 0f, 0f, 0f };
	float fLocal_52 = 0f;
	vector3 vLocal_53 = { 0f, 0f, 0f };
	float fLocal_56 = 0f;
	vector3 vLocal_57 = { 0f, 0f, 0f };
	bool bLocal_60 = false;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	var uLocal_63 = 16;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	fLocal_41 = 50f;
	fLocal_42 = 2500f;
	vLocal_43 = { 409.1539f, -1626.677f, 28.2928f };
	vLocal_49 = { 409.2747f, -1623.022f, 28.29278f };
	fLocal_52 = 202.6928f;
	vLocal_53 = { 415.6071f, -1647.604f, 28.2928f };
	fLocal_56 = 85.7173f;
	if (UNK_0x2EBF608FFE6CA406(18))
	{
		func_33();
	}
	if (UNK_0x8A22C4C08282BF26(joaat("AMBIENT_TONYACALL")) > 1)
	{
		UNK_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62());
		if (func_32(0, 14))
		{
			func_33();
		}
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			vLocal_46 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		}
		if (SYSTEM::VDIST2(vLocal_46, vLocal_43) > fLocal_42)
		{
			func_33();
		}
		switch (iLocal_37)
		{
			case 0:
				if (func_28())
				{
					if (func_5(&uLocal_63, "TOWAUD", "TONYA_HANG", 8, 0, 0, 0))
					{
						iLocal_37 = 1;
					}
				}
				break;
			case 1:
				UNK_0x3F423BF5B8125A50("amb@world_human_stand_mobile@female@standing@call@enter");
				UNK_0x3F423BF5B8125A50("amb@world_human_stand_mobile@female@standing@call@base");
				UNK_0x3F423BF5B8125A50("amb@world_human_stand_mobile@female@standing@call@exit");
				UNK_0x3F423BF5B8125A50("amb@world_human_smoking@female@enter");
				UNK_0x3F423BF5B8125A50("amb@world_human_smoking@female@idle_a");
				UNK_0x523BCC9DC80CD82F(joaat("PROP_PHONE_ING"));
				if (((((UNK_0xB87F6CF6E5628C67(joaat("PROP_PHONE_ING")) && UNK_0xB4AE0788C1587752("amb@world_human_stand_mobile@female@standing@call@enter")) && UNK_0xB4AE0788C1587752("amb@world_human_stand_mobile@female@standing@call@base")) && UNK_0xB4AE0788C1587752("amb@world_human_stand_mobile@female@standing@call@exit")) && UNK_0xB4AE0788C1587752("amb@world_human_smoking@female@enter")) && UNK_0xB4AE0788C1587752("amb@world_human_smoking@female@idle_a"))
				{
					iLocal_37 = 2;
				}
				break;
			case 2:
				if (func_1())
				{
					iLocal_37 = 3;
				}
				break;
			case 3:
				func_33();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1()
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	float fVar7;
	int iVar8;

	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	}
	if (!UNK_0x437347B10A200C4B(bLocal_38, 0))
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bLocal_38, true) };
	}
	else
	{
		vVar3 = { 408.5002f, -1624.583f, 29.2928f };
	}
	if ((SYSTEM::VDIST2(vVar0, vVar3) > 10000f || UNK_0x437347B10A200C4B(bLocal_38, 0)) || func_4())
	{
		if (SYSTEM::VDIST2(vVar0, vVar3) > 10000f)
		{
		}
		if (UNK_0x437347B10A200C4B(bLocal_38, 0))
		{
		}
		if (func_4())
		{
		}
		return true;
	}
	switch (iLocal_40)
	{
		case 0:
			if (UNK_0xC844350D5D58C99A(bLocal_38) && !UNK_0x437347B10A200C4B(bLocal_38, 0))
			{
				if (UNK_0x5A91F08DF773C39D(bLocal_38, vLocal_57, 1f, 1f, 1f, false, true, 0))
				{
					UNK_0xF82EA857DA10E0CD(&iVar6);
					UNK_0xDD353D0E9C789D0E(&iVar6);
					UNK_0xE655C47E46F9A7E4(false, bLocal_60, 0);
					UNK_0xC6EB89C59F2AF6B8(false, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, false, 0, 0, 0);
					UNK_0xC6EB89C59F2AF6B8(false, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, false, 0, 0, 0);
					UNK_0x75ABDC5F81978924(iVar6);
					UNK_0x78ADC381772E3D54(bLocal_38, iVar6);
					UNK_0xF82EA857DA10E0CD(&iVar6);
					iLocal_40 = 1;
				}
			}
			break;
		case 1:
			if (UNK_0xC844350D5D58C99A(bLocal_38) && !UNK_0x437347B10A200C4B(bLocal_38, 0))
			{
				if (UNK_0x4F1B602325013CC2(bLocal_38) == 1)
				{
					if (!UNK_0xC844350D5D58C99A(bLocal_39))
					{
						if (UNK_0xB4ECF989E2C1DAC8(bLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar7 = UNK_0x8CA9406E01C7EE58(bLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar7 >= 0.157f)
							{
								bLocal_39 = UNK_0x7707E48765093646(joaat("PROP_PHONE_ING"), 1f, 1f, 1f, true, true, false);
								UNK_0x9F528B1B53FBC5D9(bLocal_39, bLocal_38, UNK_0x4A089F2B762B8D33(bLocal_38, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
						}
					}
				}
				else if (UNK_0x4F1B602325013CC2(bLocal_38) == 2)
				{
					iVar8 = (UNK_0x09AC81E49EA267F7(false, 65535) % 2);
					if (iVar8 == 0)
					{
						if (func_5(&uLocal_63, "TOWAUD", "TONYA_CALL1", 8, 0, 0, 0))
						{
							iLocal_40 = 2;
						}
					}
					else if (func_5(&uLocal_63, "TOWAUD", "TONYA_CALL2", 8, 0, 0, 0))
					{
						iLocal_40 = 2;
					}
				}
			}
			break;
		case 2:
			if (!UNK_0x437347B10A200C4B(bLocal_38, 0))
			{
				if (!func_3())
				{
					UNK_0xF82EA857DA10E0CD(&iVar6);
					UNK_0xDD353D0E9C789D0E(&iVar6);
					UNK_0xC6EB89C59F2AF6B8(false, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, false, 0, 0, 0);
					UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_SMOKING", -1, 1);
					UNK_0x75ABDC5F81978924(iVar6);
					UNK_0x78ADC381772E3D54(bLocal_38, iVar6);
					UNK_0xF82EA857DA10E0CD(&iVar6);
					iLocal_40 = 3;
				}
			}
			break;
		case 3:
			func_2();
			if (SYSTEM::VDIST2(vVar0, vVar3) < 25f)
			{
				if (UNK_0xA4FD7964FEE91ED8(0) != 4)
				{
					if (func_5(&uLocal_63, "TOWAUD", "TONYA_MESS", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_40 = 4;
					}
				}
			}
			break;
		case 4:
			func_2();
			if (SYSTEM::TIMERA() > 10000)
			{
				iLocal_40 = 3;
			}
			break;
	}
	return false;
}

void func_2()
{
	if (UNK_0xC844350D5D58C99A(bLocal_38) && !UNK_0x437347B10A200C4B(bLocal_38, 0))
	{
		if (UNK_0x4F1B602325013CC2(bLocal_38) == 1)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_39))
			{
				UNK_0xF690C84DADBB3551(&bLocal_39);
				UNK_0x0C8C0C840C2D1AD2(bLocal_38, UNK_0x16F2683693E537C9(), -1, 0, 2);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(bLocal_38) && !UNK_0x437347B10A200C4B(bLocal_38, 0))
	{
		if (UNK_0xC844350D5D58C99A(bLocal_39))
		{
			if (UNK_0xD1960163A3042274(bLocal_38, 993674639) == 1)
			{
				UNK_0xF690C84DADBB3551(&bLocal_39);
			}
		}
	}
}

bool func_3()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

bool func_4()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0x437347B10A200C4B(bLocal_38, 0))
	{
		if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), bLocal_38) || UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0xC844350D5D58C99A(bLocal_39))
			{
				UNK_0x15AFB6CBDE990FB6(bLocal_39, 1, true);
			}
			UNK_0x5CEB4DB888A62073(false);
			if (UNK_0xD1960163A3042274(bLocal_38, 1805844857) != 1)
			{
				UNK_0xFADC0A217229F6B5(bLocal_38, true);
				UNK_0xF3268524E9BE6D6E(bLocal_38, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
				return true;
			}
		}
	}
	return false;
}

int func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
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
					func_26();
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
		if (func_25(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_24();
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
				func_16();
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
				if (func_15())
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
			if (func_14())
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
			func_13();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_12();
		func_7();
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
		func_26();
	}
	return 0;
}

void func_7()
{
	if (!func_8())
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

bool func_8()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_11())
	{
		return false;
	}
	if (func_9(UNK_0xD803B885F5E47A62()))
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

bool func_9(int iParam0)
{
	return func_10(iParam0, 20);
}

bool func_10(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_11()
{
	return -1;
}

void func_12()
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

void func_13()
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

bool func_14()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_15()
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

void func_16()
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
		Global_19486 = func_17();
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

var func_17()
{
	func_18();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_18()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_21(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_20(UNK_0x16F2683693E537C9());
			if (func_19(iVar0) && (!func_23(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_19(Global_111638.f_2358.f_539.f_4321))
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

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)
{
	if (func_19(iParam0))
	{
		return func_22(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_22(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_23(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_24()
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

bool func_25(bool bParam0, int iParam1)
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

void func_26()
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

void func_27(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_28()
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;

	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	}
	UNK_0xE51E576EA6B739AC(vVar0, fLocal_41, 1, 1, &bVar3, 0, 1, -1);
	if (UNK_0xC844350D5D58C99A(bVar3) && !UNK_0x437347B10A200C4B(bVar3, 0))
	{
		iVar4 = UNK_0x134B62B726CEC8E6(bVar3);
		if (iVar4 == joaat("IG_TONYA"))
		{
			bLocal_38 = bVar3;
			UNK_0x73270B3C9CC833FD(bLocal_38, true, 0);
			UNK_0x6D80F1AEBA734886(bLocal_38, false);
			UNK_0x25C5402CC10F76CD(bLocal_38, false);
			UNK_0x5F2AA9E2843E9403(bLocal_38, "TONYA");
			UNK_0x6DF7BF67E86AAE86(bLocal_38, joaat("PLAYER"));
			func_31(&uLocal_63, 3, bLocal_38, "TONYA", 1, 1);
			func_30();
			if (!func_29(vLocal_57))
			{
				if (UNK_0xD1960163A3042274(bLocal_38, 713668775) != 1)
				{
					UNK_0x96167B03C5A77156(bLocal_38, vLocal_57, 1f, -1, 0.25f, 0, bLocal_60);
					UNK_0xFADC0A217229F6B5(bLocal_38, true);
				}
				return true;
			}
		}
	}
	return false;
}

bool func_29(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_30()
{
	vector3 vVar0;

	if (UNK_0xC844350D5D58C99A(bLocal_38) && !UNK_0x437347B10A200C4B(bLocal_38, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bLocal_38, true) };
		if (func_29(vLocal_57))
		{
			fLocal_61 = SYSTEM::VDIST(vVar0, vLocal_49);
			fLocal_62 = SYSTEM::VDIST(vVar0, vLocal_53);
			if (fLocal_61 < fLocal_62)
			{
				vLocal_57 = { vLocal_49 };
				bLocal_60 = fLocal_52;
			}
			else
			{
				vLocal_57 = { vLocal_53 };
				bLocal_60 = fLocal_56;
			}
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 407.4285f, -1626.572f, 27.29278f, 412.8245f, -1620.167f, 33.29278f, 6f, 0, true, 0))
				{
					vLocal_57 = { vLocal_53 };
					bLocal_60 = fLocal_56;
				}
			}
		}
	}
}

void func_31(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_32(int iParam0, bool bParam1)
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

void func_33()
{
	UNK_0x8D17794CE3273D70("amb@world_human_stand_mobile@female@standing@call@enter");
	UNK_0x8D17794CE3273D70("amb@world_human_stand_mobile@female@standing@call@base");
	UNK_0x8D17794CE3273D70("amb@world_human_stand_mobile@female@standing@call@exit");
	UNK_0x8D17794CE3273D70("amb@world_human_smoking@female@enter");
	UNK_0x8D17794CE3273D70("amb@world_human_smoking@female@idle_a");
	UNK_0x71199B01895C6202(joaat("PROP_PHONE_ING"));
	if (UNK_0xC844350D5D58C99A(bLocal_38))
	{
		if (UNK_0x03068588A1FCED1A(bLocal_38))
		{
			UNK_0xEBA53F35D0085654(&bLocal_38);
		}
		else
		{
			UNK_0x6DAD7906B73F064D(&bLocal_38);
		}
	}
	UNK_0x10FAF14A60A0DBE1();
}

