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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = -1;
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
	var uLocal_122 = 32;
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
	struct<117> Local_156 = { 0, -1, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, -1073741824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<18> ScriptParam_0 = { 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (UNK_0x8CD06866876216F2())
	{
		func_122(ScriptParam_0);
	}
	else
	{
		func_119();
	}
	while (true)
	{
		func_118();
		if (func_107())
		{
			func_119();
		}
		if (func_99())
		{
			func_119();
		}
		func_2();
		if (UNK_0xBFF81ED3B99522C7())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	switch (Local_156.f_65)
	{
		case 0:
			func_93();
			break;
		case 1:
			func_71();
			break;
		case 2:
			func_43();
			break;
	}
	func_41();
	func_3();
}

void func_3()
{
	switch (Local_156.f_116)
	{
		case 1:
			func_40();
			break;
		case 2:
			func_36();
			break;
		case 3:
			func_28();
			break;
		case 4:
			func_23();
			break;
		case 5:
			func_8();
			break;
	}
	func_4();
}

void func_4()
{
	if (Local_156.f_116 > 0 && !UNK_0xC844350D5D58C99A(Local_156.f_64))
	{
		if (Local_156.f_8 != -1)
		{
			UNK_0x55D0A2DB35045A35(Local_156.f_8);
			UNK_0x43A06902454A1172(Local_156.f_8);
			Local_156.f_8 = -1;
		}
		if (Local_156.f_7 != -1)
		{
			UNK_0x55D0A2DB35045A35(Local_156.f_7);
			UNK_0x43A06902454A1172(Local_156.f_7);
			Local_156.f_7 = -1;
		}
		UNK_0x8D17794CE3273D70(func_7(Local_156.f_10));
		func_6(0);
		func_5(&(Local_156.f_11));
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_6(int iParam0)
{
	Local_156.f_116 = iParam0;
}

char* func_7(bool bParam0)
{
	char* sVar0;

	sVar0 = "ANIM_HEIST@ARCADE@FORTUNE@MALE@";
	if (bParam0)
	{
		sVar0 = "ANIM_HEIST@ARCADE@FORTUNE@FEMALE@";
	}
	return sVar0;
}

void func_8()
{
	struct<16> Var0;

	if (UNK_0xB4ECF989E2C1DAC8(Local_156.f_64, func_7(Local_156.f_10), "prop_body_loop_outro", 3))
	{
		return;
	}
	if (Local_156.f_8 != -1)
	{
		UNK_0x55D0A2DB35045A35(Local_156.f_8);
		UNK_0x43A06902454A1172(Local_156.f_8);
		Local_156.f_8 = -1;
	}
	if (Local_156.f_7 != -1)
	{
		UNK_0x55D0A2DB35045A35(Local_156.f_7);
		UNK_0x43A06902454A1172(Local_156.f_7);
		Local_156.f_7 = -1;
	}
	StringCopy(&Var0, "HS3MN_EXIT", 64);
	func_10(Var0, 1);
	UNK_0x8D17794CE3273D70(func_7(Local_156.f_10));
	func_6(0);
	func_5(&(Local_156.f_11));
	Local_156.f_6 = 0;
	Local_156.f_9 = -1;
	func_9(9);
}

void func_9(bool bParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Local_156, bParam0))
	{
		UNK_0x0674E58A79778E99(&Local_156, bParam0);
	}
}

void func_10(char[64] cParam0, bool bParam16)
{
	Local_156.f_9 = func_21(UNK_0xD803B885F5E47A62());
	Local_156.f_76.f_36 = 11;
	Local_156.f_76.f_35 = Local_156.f_9;
	Local_156.f_76 = { cParam0 };
	Local_156.f_76.f_33 = 1;
	func_11(&(Local_156.f_76), bParam16);
}

void func_11(var uParam0, bool bParam1)
{
	struct<39> Var0;
	bool bVar39;
	bool bVar40;

	Var0 = -503716486;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	Var0.f_2 = { *uParam0 };
	Var0.f_34 = uParam0->f_34;
	Var0.f_37 = bParam1;
	Var0.f_35 = uParam0->f_35;
	Var0.f_36 = uParam0->f_36;
	Var0.f_38 = uParam0->f_33;
	if (!func_20(&(uParam0->f_37)))
	{
		func_19(&(uParam0->f_37), 0, 0);
	}
	bVar39 = true;
	if (UNK_0x7F8A39872A07D2CE(&(uParam0->f_16), &(Var0.f_2)))
	{
		if (func_20(&(uParam0->f_37)) && !func_18(&(uParam0->f_37), 1000, 0))
		{
			bVar39 = false;
		}
		else
		{
			func_5(&(uParam0->f_37));
		}
	}
	else
	{
		uParam0->f_16 = { Var0.f_2 };
		func_5(&(uParam0->f_37));
	}
	uParam0->f_32 = 0;
	if (bVar39)
	{
		bVar40 = func_17(UNK_0xD803B885F5E47A62());
		if (bParam1)
		{
			bVar40 = func_12(1, 1);
		}
		if (bVar40 != 0)
		{
			uParam0->f_32 = 1;
			UNK_0xFB061A86A7AC749F(1, &Var0, 39, bVar40);
		}
	}
}

bool func_12(bool bParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = UNK_0x117658E336116132(bVar1);
		if (func_16(bVar2, 0, 0))
		{
			if (bVar2 != UNK_0xD803B885F5E47A62() || bParam0)
			{
				if (bParam1)
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar1);
				}
				else if (!func_13(bVar2, 0))
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_13(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_14(-1, 0) == 8;
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

int func_14(int iParam0, bool bParam1)
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

int func_15()
{
	return Global_1312745;
}

bool func_16(bool bParam0, bool bParam1, bool bParam2)
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

bool func_17(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		UNK_0x5D96D8530B3D0904(&uVar0, bParam0);
	}
	return uVar0;
}

bool func_18(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_19(uParam0, bParam2, 0);
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

void func_19(var uParam0, bool bParam1, bool bParam2)
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

bool func_20(var uParam0)
{
	return uParam0->f_1;
}

int func_21(int iParam0)
{
	if (iParam0 != func_22())
	{
		return Global_2425662[iParam0 /*421*/].f_416.f_1;
	}
	return -1;
}

bool func_22()
{
	return -1;
}

void func_23()
{
	if (func_20(&(Local_156.f_11)))
	{
		if (func_18(&(Local_156.f_11), Local_156.f_6, 0))
		{
			if (func_27())
			{
				if (!func_26(6))
				{
					UNK_0x5B8BE59CB25E8968(Local_156.f_64, 1, 1);
					UNK_0x5B8BE59CB25E8968(Local_156.f_64, 0, 1);
					func_25(6);
				}
				if (UNK_0xD65E6E13E145467B(Local_156.f_64, "prop_body_loop_outro", func_7(Local_156.f_10), 0.125f, false, false, 0, false, 0))
				{
					if (func_24(UNK_0xD803B885F5E47A62(), Local_156.f_64))
					{
						Local_156.f_8 = UNK_0xD68EA767274B7444();
						UNK_0xEB819BD1E585E9CB(Local_156.f_8, "fortune_bell", UNK_0x68F4C0EC296D3901(Local_156.f_64, true), "dlc_ch_nazar_speaks_sounds", false, 0, 0);
					}
					func_9(6);
					func_6(5);
				}
			}
		}
	}
}

bool func_24(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	float fVar3;

	if ((!UNK_0xC844350D5D58C99A(bParam1) || !UNK_0xC844350D5D58C99A(UNK_0x9539D44F3E4492F6(bParam0))) || UNK_0x437347B10A200C4B(UNK_0x9539D44F3E4492F6(bParam0), 0))
	{
		return false;
	}
	vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), true) };
	fVar3 = vVar0.z;
	if (fVar3 <= -48f)
	{
		return UNK_0x0EB28750412C3A5A(vVar0, UNK_0x68F4C0EC296D3901(bParam1, true), 1) <= 4f;
	}
	return false;
}

void func_25(bool bParam0)
{
	if (!UNK_0xEAE0D21A50E6C7F4(Local_156, bParam0))
	{
		UNK_0x5D96D8530B3D0904(&Local_156, bParam0);
	}
}

bool func_26(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Local_156, bParam0);
}

bool func_27()
{
	UNK_0x3F423BF5B8125A50(func_7(Local_156.f_10));
	return UNK_0xB4AE0788C1587752(func_7(Local_156.f_10));
}

void func_28()
{
	if (func_20(&(Local_156.f_11)))
	{
		if (func_18(&(Local_156.f_11), func_34(Local_156.f_4) + 2000, 0))
		{
			func_10(func_33(Local_156.f_3), 0);
			if (Local_156.f_76.f_32)
			{
				func_32(&(Local_156.f_11), 0, 0);
				Local_156.f_6 = func_29();
				func_25(9);
				func_6(4);
			}
		}
	}
}

int func_29()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 5200;
	iVar1 = func_34(Local_156.f_4);
	iVar2 = func_30(Local_156.f_3);
	switch (iVar1)
	{
		case 2000:
			switch (iVar2)
			{
				case 5000:
					iVar0 = 5200;
					break;
				case 8000:
					iVar0 = 9400;
					break;
				case 12500:
					iVar0 = 16800;
					break;
			}
			break;
		case 4000:
			switch (iVar2)
			{
				case 5000:
					iVar0 = 6500;
					break;
				case 8000:
					iVar0 = 11000;
					break;
				case 12500:
					iVar0 = 15300;
					break;
			}
			break;
		case 7000:
			switch (iVar2)
			{
				case 5000:
					iVar0 = 4300;
					break;
				case 8000:
					iVar0 = 8700;
					break;
				case 12500:
					iVar0 = 16200;
					break;
			}
			break;
	}
	return iVar0;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 5000;
	iVar1 = func_31(iParam0);
	if (iVar1 <= 5000)
	{
		iVar0 = 5000;
	}
	else if (iVar1 > 5000 && iVar1 <= 8000)
	{
		iVar0 = 8000;
	}
	else if (iVar1 > 8000)
	{
		iVar0 = 12500;
	}
	return iVar0;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5000;
		case 1:
			return 8000;
		case 2:
			return 7000;
		case 3:
			return 14000;
		case 4:
			return 9000;
		case 5:
			return 7000;
		case 6:
			return 7000;
		case 7:
			return 6000;
		case 8:
			return 7000;
		case 9:
			return 1000;
		case 10:
			return 9000;
		case 11:
			return 7000;
		case 12:
			return 6000;
		case 13:
			return 9000;
		case 14:
			return 8000;
		case 15:
			return 11000;
		case 16:
			return 3000;
		case 17:
			return 3000;
		case 18:
			return 7000;
		case 19:
			return 7000;
		case 20:
			return 9000;
		case 21:
			return 9000;
		case 22:
			return 4000;
		case 23:
			return 5000;
		case 24:
			return 4000;
		case 25:
			return 8000;
		case 26:
			return 8000;
		case 27:
			return 7000;
		case 28:
			return 7000;
		case 29:
			return 7000;
		case 30:
			return 4000;
		case 31:
			return 4000;
		case 32:
			return 6000;
		case 33:
			return 7000;
		case 34:
			return 7000;
		case 35:
			return 6000;
		case 36:
			return 5000;
		case 37:
			return 4000;
		case 38:
			return 6000;
		case 39:
			return 5000;
		case 40:
			return 7000;
		case 41:
			return 6000;
		case 42:
			return 7000;
		case 43:
			return 6000;
		case 44:
			return 7000;
		case 45:
			return 7000;
		case 46:
			return 7000;
		case 47:
			return 7000;
		case 48:
			return 7000;
		default:
			break;
	}
	return 0;
}

void func_32(var uParam0, bool bParam1, bool bParam2)
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

struct<16> func_33(int iParam0)
{
	struct<16> Var0;

	StringCopy(&Var0, "HS3MN_FT_", 64);
	if (iParam0 > 28)
	{
		StringIntConCat(&Var0, iParam0 + 2, 64);
	}
	else
	{
		StringIntConCat(&Var0, iParam0 + 1, 64);
	}
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HS3MN_FT_130", 64);
			break;
		case 41:
			switch (UNK_0x92EA5294EF5CA70E())
			{
				case joaat("RAIN"):
					StringCopy(&Var0, "HS3MN_FT_43", 64);
					break;
				case joaat("CLEARING"):
				case joaat("NEUTRAL"):
				case joaat("CLEAR"):
					StringCopy(&Var0, "HS3MN_FT_44", 64);
					break;
				case joaat("OVERCAST"):
				case joaat("SMOG"):
					StringCopy(&Var0, "HS3MN_FT_45", 64);
					break;
				case -318724249:
				case joaat("CLOUDS"):
					StringCopy(&Var0, "HS3MN_FT_46", 64);
					break;
				case joaat("THUNDER"):
					StringCopy(&Var0, "HS3MN_FT_47", 64);
					break;
				case joaat("SNOW"):
				case joaat("XMAS"):
					StringCopy(&Var0, "HS3MN_FT_48", 64);
					break;
				default:
					StringCopy(&Var0, "HS3MN_FT_44", 64);
					break;
			}
			break;
		case 42:
			StringCopy(&Var0, "HS3MN_FT_55", 64);
			break;
		case 43:
			StringCopy(&Var0, "HS3MN_FT_56", 64);
			break;
		case 44:
			StringCopy(&Var0, "HS3MN_FT_50", 64);
			break;
		case 45:
			StringCopy(&Var0, "HS3MN_FT_51", 64);
			break;
		case 46:
			StringCopy(&Var0, "HS3MN_FT_57", 64);
			break;
		case 47:
			StringCopy(&Var0, "HS3MN_FT_58", 64);
			break;
		case 48:
			StringCopy(&Var0, "HS3MN_FT_53", 64);
			break;
	}
	return Var0;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2000;
	iVar1 = func_35(iParam0);
	if (iVar1 <= 2000)
	{
		iVar0 = 2000;
	}
	else if (iVar1 > 2000 && iVar1 <= 4000)
	{
		iVar0 = 4000;
	}
	else if (iVar1 > 4000)
	{
		iVar0 = 7000;
	}
	return iVar0;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4000;
		case 1:
			return 4000;
		case 2:
			return 3000;
		case 3:
			return 3000;
		case 4:
			return 2000;
		case 5:
			return 4000;
		case 6:
			return 3000;
		case 7:
			return 4000;
		case 8:
			return 7000;
		case 9:
			return 3000;
		default:
			break;
	}
	return 0;
}

void func_36()
{
	float fVar0;

	if (UNK_0xB4ECF989E2C1DAC8(Local_156.f_64, func_7(Local_156.f_10), "prop_body_loop_intro", 3))
	{
		fVar0 = UNK_0x8CA9406E01C7EE58(Local_156.f_64, func_7(Local_156.f_10), "prop_body_loop_intro");
		if (fVar0 >= 0.96f)
		{
			if (func_38())
			{
				func_37();
				func_6(3);
			}
		}
	}
	else if (func_38())
	{
		func_37();
		func_6(3);
	}
}

void func_37()
{
	struct<20> Var0;

	Local_156.f_19 = 1;
	Local_156.f_19.f_1 = func_7(Local_156.f_10);
	Local_156.f_19.f_2 = "prop_body_loop";
	Local_156.f_19.f_3 = 0f;
	Local_156.f_19.f_4 = 1f;
	Local_156.f_19.f_5 = 1f;
	Local_156.f_19.f_17 = 0.125f;
	Local_156.f_19.f_18 = 0.125f;
	Local_156.f_19.f_19 = -1;
	Local_156.f_19.f_20 = 1;
	Local_156.f_19.f_21 = 0;
	Local_156.f_41 = 1;
	Local_156.f_41.f_1 = func_7(Local_156.f_10);
	Local_156.f_41.f_2 = "prop_mouth_loop";
	Local_156.f_41.f_3 = 0f;
	Local_156.f_41.f_4 = 1f;
	Local_156.f_41.f_5 = 1f;
	Local_156.f_41.f_17 = 0.125f;
	Local_156.f_41.f_18 = 0.125f;
	Local_156.f_41.f_19 = -1;
	Local_156.f_41.f_20 = 289;
	Local_156.f_41.f_21 = 0;
	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	UNK_0x4F1E401FAB69FE63(Local_156.f_64, &(Local_156.f_19), &(Local_156.f_41), &Var0, 0.125f, 0.125f);
	func_19(&(Local_156.f_11), 0, 0);
}

bool func_38()
{
	struct<16> Var0;

	Var0 = { func_39(Local_156.f_4) };
	func_10(Var0, 0);
	return Local_156.f_76.f_32;
}

struct<16> func_39(int iParam0)
{
	struct<16> Var0;

	StringCopy(&Var0, "HS3MN_PRE", 64);
	if (iParam0 > 0)
	{
		StringConCat(&Var0, "_", 64);
		StringIntConCat(&Var0, iParam0 + 1, 64);
	}
	return Var0;
}

void func_40()
{
	if (func_27())
	{
		if (UNK_0xD65E6E13E145467B(Local_156.f_64, "prop_body_loop_intro", func_7(Local_156.f_10), 0.125f, false, false, 0, false, 0))
		{
			if (func_24(UNK_0xD803B885F5E47A62(), Local_156.f_64))
			{
				Local_156.f_7 = UNK_0xD68EA767274B7444();
				UNK_0xEB819BD1E585E9CB(Local_156.f_7, "fortune_mech_loop", UNK_0x68F4C0EC296D3901(Local_156.f_64, true), "dlc_ch_nazar_speaks_sounds", false, 0, 0);
			}
			func_6(2);
		}
	}
}

void func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < UNK_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = UNK_0xB98DB26FBF676FA1(1, iVar0);
		switch (iVar1)
		{
			case 174:
				UNK_0x218F818E64020C17(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case -559810780:
						if (Global_1391799.f_788)
						{
							return;
						}
						func_42(iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_42(int iParam0)
{
	struct<6> Var0;

	if (UNK_0x218F818E64020C17(1, iParam0, &Var0, 6))
	{
		if (UNK_0xFB75B0F82CA525F6(Var0.f_1))
		{
			if (UNK_0xC844350D5D58C99A(Local_156.f_64))
			{
				Local_156.f_3 = Var0.f_4;
				Local_156.f_4 = Var0.f_3;
				Local_156.f_9 = Var0.f_5;
				Local_156.f_10 = Var0.f_2;
				func_6(1);
			}
		}
	}
}

void func_43()
{
	if (func_70("ARC_CAB_FRT_TLL_H"))
	{
		UNK_0xA37A90C62806D848(1);
	}
	func_68();
	Local_156 = false;
	Local_156.f_1 = -1;
	Local_156.f_10 = 0;
	func_5(&(Local_156.f_13));
	func_5(&(Local_156.f_15));
	func_67(0);
	func_66(&(Local_156.f_65), 0);
	func_25(8);
	func_56();
	func_44(UNK_0xD803B885F5E47A62(), 1, 0, 0);
}

void func_44(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;

	if (bParam1)
	{
		if (UNK_0xC6F697B2083C83D4())
		{
			UNK_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_55())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			bParam3 = true;
		}
	}
	if (!UNK_0x8CD06866876216F2())
	{
		bVar0 = iParam2;
		UNK_0x98E4DC66A651C9FA(bParam0, bParam1, bVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || UNK_0xA14BB9332558B949())
		{
			bVar1 = false;
		}
		if (!func_53())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (UNK_0x40B8C182D63932FC(bParam0) && (UNK_0xE1DBBD6CE209517C(bParam0) || bParam3 == 1))
		{
			if (bParam3 && UNK_0x437347B10A200C4B(UNK_0x9539D44F3E4492F6(bParam0), 0))
			{
				return;
			}
			bVar27 = UNK_0x9539D44F3E4492F6(bParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && UNK_0x8CD06866876216F2())
				{
					UNK_0x30134914EFF0516E(1);
				}
				else if (bVar14 || (!func_13(UNK_0xD803B885F5E47A62(), 0) && !func_52()))
				{
					UNK_0x4A4806F9D471E491(bVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (UNK_0x8CD06866876216F2() && !bVar19)
					{
						UNK_0x30134914EFF0516E(0);
					}
					Global_2425662[bParam0 /*421*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_49(0, 0, 0);
					if (bVar25)
					{
						UNK_0x066C43E677C08D5C();
					}
				}
				if (!func_48(bVar27) && !UNK_0x20906E1D6BDC7044(bVar27))
				{
					if (!bVar22)
					{
						UNK_0x20641932E5104B25(bVar27, true, 0);
					}
				}
				if (!UNK_0xD59B17D2DFF98E26(bVar27))
				{
					if (!bVar21)
					{
						UNK_0x1E9649458B15960F(bVar27, false);
					}
					UNK_0x120A395B0ECB8EA5(bVar27, true);
				}
				else if (!bVar21)
				{
					UNK_0x1E9649458B15960F(bVar27, false);
				}
				UNK_0x25C5402CC10F76CD(bVar27, true);
				UNK_0x62DE699599F0417E(bParam0, 0);
				UNK_0x7569764C11F70C0A(bParam0, 0);
				if (UNK_0xCCBA4C0B3BD2AB7B(bVar27) && UNK_0x8A83E339B374E53A(bVar27))
				{
					UNK_0xE7EE28867F07D06D(bVar27);
				}
				UNK_0x46CB381A452EF99D(bVar27, 1);
				if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()) == 0)
				{
					func_47();
					func_46();
				}
				if (UNK_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (UNK_0xEB880D98B5988D0C())
				{
				}
				Global_2425662[bParam0 /*421*/].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_48(bVar27) && !UNK_0x20906E1D6BDC7044(bVar27))
				{
					if (!bVar22)
					{
						UNK_0x20641932E5104B25(bVar27, !bVar15, 0);
					}
					if (!UNK_0xD59B17D2DFF98E26(bVar27))
					{
						if (!bVar21)
						{
							UNK_0x1E9649458B15960F(bVar27, bVar16);
						}
						if (!bVar16)
						{
							UNK_0x120A395B0ECB8EA5(bVar27, true);
						}
					}
					if (func_45(Global_4456448.f_232883))
					{
						UNK_0x1E9649458B15960F(bVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					UNK_0x62DE699599F0417E(bParam0, 0);
				}
				else
				{
					UNK_0x62DE699599F0417E(bParam0, 1);
				}
				UNK_0x25C5402CC10F76CD(bVar27, bVar17);
				if (bVar3)
				{
					if (!UNK_0x2EF364CB160B45F2(bVar27) && !UNK_0x405E212DDE472467(bVar27, 0))
					{
						UNK_0x327AAEE25F323797(bVar27);
					}
				}
			}
			bVar28 = false;
			if (bVar2)
			{
				bVar28 = (bVar28 || 2);
			}
			if (bVar3)
			{
				bVar28 = (bVar28 || 4);
			}
			if (bVar4)
			{
				bVar28 = (bVar28 || 8);
			}
			if (bVar5)
			{
				bVar28 = (bVar28 || 16);
			}
			if (bVar6)
			{
				bVar28 = (bVar28 || 32);
			}
			if (bVar7)
			{
				bVar28 = (bVar28 || 64);
			}
			if (bVar8)
			{
				bVar28 = (bVar28 || 128);
			}
			if (bVar9)
			{
				bVar28 = (bVar28 || 256);
			}
			if (bVar10)
			{
				bVar28 = (bVar28 || 512);
			}
			if (bVar11)
			{
				bVar28 = (bVar28 || 1024);
			}
			if (bVar12)
			{
				bVar28 = (bVar28 || 2048);
			}
			if (bVar13)
			{
				bVar28 = (bVar28 || 4096);
			}
			UNK_0x98E4DC66A651C9FA(bParam0, bParam1, bVar28);
		}
	}
}

bool func_45(int iParam0)
{
	return iParam0 == 17;
}

void func_46()
{
	vector3 vVar0;

	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_47()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

bool func_48(bool bParam0)
{
	int iVar0;

	if (UNK_0x405E212DDE472467(bParam0, 1))
	{
		return true;
	}
	else
	{
		iVar0 = UNK_0xD1960163A3042274(bParam0, -1794415470);
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

void func_49(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (UNK_0x437347B10A200C4B(bParam1, 0))
	{
	}
	if (bParam0 == 1)
	{
		if (UNK_0xC844350D5D58C99A(bParam1))
		{
			if (UNK_0x34BFC6F0CB887BC2(bParam1))
			{
				if (!UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), UNK_0x83FACCC48B68F9D1(bParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_51();
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(Global_2359302.f_67, true))
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						UNK_0x398B6B43792F03FE(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				UNK_0x5D96D8530B3D0904(&(Global_2359302.f_67), true);
			}
		}
		if (func_13(UNK_0xD803B885F5E47A62(), 0))
		{
			UNK_0xD51AAA59D51D8056(bParam0, bParam1, 1);
		}
		else
		{
			UNK_0x7AEFB64DFEBF60B0(bParam0, bParam1);
		}
		UNK_0xF374D547F2AC15B0(bParam0, bParam1);
		func_50(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_50(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xD8B681091EBE4064(iVar0, bParam1, 1);
	}
}

void func_51()
{
	int iVar0;

	if (!UNK_0xB7DDF77EF860941D())
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = UNK_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			UNK_0x5D96D8530B3D0904(&(Global_2359302.f_67), 2);
			UNK_0x5D96D8530B3D0904(&(Global_2359302.f_67), false);
		}
	}
}

bool func_52()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_53()
{
	if (func_54() == 0)
	{
		return true;
	}
	return false;
}

int func_54()
{
	return Global_1312467.f_18;
}

bool func_55()
{
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return true;
	}
	return false;
}

void func_56()
{
	if (Local_156.f_2 == 19)
	{
		if (!func_63(27247, -1, -1))
		{
			func_62(27247, 1, -1, 1);
			func_61(1);
			func_62(28191, 1, -1, 1);
			func_60(10);
			func_57(18, 0);
		}
	}
	else if (Local_156.f_2 == 41)
	{
		UNK_0x5D96D8530B3D0904(&Global_42599, true);
	}
	else if (Local_156.f_2 == 42)
	{
		UNK_0x5D96D8530B3D0904(&Global_42599, 2);
	}
	else if (Local_156.f_2 == 43)
	{
		UNK_0x5D96D8530B3D0904(&Global_42599, 3);
	}
	else if (Local_156.f_2 == 44)
	{
		UNK_0x5D96D8530B3D0904(&Global_42599, 4);
	}
	else if (Local_156.f_2 == 45)
	{
		UNK_0x5D96D8530B3D0904(&Global_42599, 5);
	}
	else if (Local_156.f_2 == 46)
	{
		UNK_0x5D96D8530B3D0904(&Global_42599, 7);
	}
	else if (Local_156.f_2 == 47)
	{
		UNK_0x5D96D8530B3D0904(&Global_42599, 10);
	}
	else if (Local_156.f_2 == 48)
	{
		UNK_0x5D96D8530B3D0904(&Global_42599, 8);
	}
	else if (Local_156.f_2 == 22)
	{
		func_62(28250, 1, -1, 1);
	}
	else if (Local_156.f_2 == 23)
	{
		func_62(28251, 1, -1, 1);
	}
	else if (Local_156.f_2 == 24)
	{
		func_62(28252, 1, -1, 1);
	}
}

void func_57(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(6);
	}
	switch (iParam0)
	{
		case 0:
			func_58(3);
			break;
		case 1:
			func_58(12);
			break;
		case 7:
			func_58(21);
			break;
		case 8:
			func_58(31);
			break;
		case 9:
			func_58(32);
			break;
		case 10:
			func_58(33);
			break;
		case 11:
			func_58(34);
			break;
		case 12:
			func_58(35);
			break;
		case 13:
			func_58(36);
			break;
		case 14:
			func_58(37);
			break;
		case 15:
			func_58(38);
			break;
		case 16:
			func_58(39);
			break;
		case 17:
			func_58(40);
			break;
		case 18:
			func_58(41);
			break;
		case 4:
			func_58(59);
			break;
		case 19:
			func_58(70);
			break;
	}
}

void func_58(int iParam0)
{
	bool bVar0;

	if (!func_59(iParam0))
	{
		bVar0 = iParam0;
		if (bVar0 > 31)
		{
			if (bVar0 <= 63)
			{
				bVar0 = (bVar0 - 32);
				UNK_0x5D96D8530B3D0904(&(Global_2537071.f_6593), bVar0);
			}
			else if (bVar0 <= 95)
			{
				bVar0 = (bVar0 - 64);
				UNK_0x5D96D8530B3D0904(&(Global_2537071.f_6594), bVar0);
			}
		}
		else
		{
			UNK_0x5D96D8530B3D0904(&(Global_2537071.f_6592), bVar0);
		}
	}
}

bool func_59(int iParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = iParam0;
	bVar1 = Global_2537071.f_6592;
	if (bVar0 > 31)
	{
		if (bVar0 <= 63)
		{
			bVar1 = Global_2537071.f_6593;
			bVar0 = (bVar0 - 32);
		}
		else if (bVar0 <= 95)
		{
			bVar1 = Global_2537071.f_6594;
			bVar0 = (bVar0 - 64);
		}
	}
	return UNK_0xEAE0D21A50E6C7F4(bVar1, bVar0);
}

void func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_58(0);
			break;
		case 1:
			func_58(1);
			break;
		case 2:
			func_58(2);
			break;
		case 3:
			func_58(5);
			break;
		case 4:
			func_58(7);
			break;
		case 5:
			func_58(8);
			break;
		case 9:
			func_58(14);
			break;
		case 6:
			func_58(9);
			break;
		case 7:
			func_58(10);
			break;
		case 8:
			func_58(11);
			break;
		case 10:
			func_58(15);
			break;
		case 11:
			func_58(16);
			break;
		case 12:
			func_58(17);
			break;
		case 13:
			func_58(18);
			break;
		case 14:
			func_58(19);
			break;
		case 15:
			func_58(20);
			break;
		case 20:
			func_58(22);
			break;
		case 21:
			func_58(23);
			break;
		case 22:
			func_58(24);
			break;
		case 23:
			func_58(25);
			break;
		case 24:
			func_58(26);
			break;
		case 25:
			func_58(27);
			break;
		case 26:
			func_58(28);
			break;
		case 27:
			func_58(29);
			break;
		case 28:
			func_58(30);
			break;
		case 29:
			func_58(43);
			break;
		case 30:
			func_58(44);
			break;
		case 31:
			func_58(45);
			break;
		case 32:
			func_58(46);
			break;
		case 33:
			func_58(47);
			break;
		case 34:
			func_58(48);
			break;
		case 35:
			func_58(49);
			break;
		case 36:
			func_58(50);
			break;
		case 37:
			func_58(51);
			break;
		case 38:
			func_58(52);
			break;
		case 16:
			func_58(53);
			break;
		case 17:
			func_58(54);
			break;
		case 18:
			func_58(55);
			break;
		case 19:
			func_58(56);
			break;
		case 39:
			func_58(61);
			break;
		case 40:
			func_58(65);
			break;
		case 41:
			func_58(66);
			break;
		case 43:
			func_58(64);
			break;
		case 42:
			func_58(63);
			break;
		case 44:
			func_58(67);
			break;
		case 45:
			func_58(68);
			break;
		case 46:
			func_58(69);
			break;
	}
}

void func_61(bool bParam0)
{
	if (bParam0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_393.f_2, 14))
		{
			UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_393.f_2), 14);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_393.f_2, 14))
	{
		UNK_0x0674E58A79778E99(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_393.f_2), 14);
	}
}

int func_62(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

bool func_63(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_15();
	}
	iVar1 = func_65(iParam0, bParam1);
	iVar2 = func_64(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_64(int iParam0)
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

int func_65(int iParam0, bool bParam1)
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

void func_66(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

void func_67(int iParam0)
{
	Local_156.f_115 = iParam0;
}

void func_68()
{
	struct<10> Var0;
	struct<16> Var10;

	Var0 = -438538740;
	Var0.f_2 = 1;
	Var0.f_6 = UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), Local_156.f_13));
	Var10 = { func_33(Local_156.f_2) };
	Var0.f_8 = UNK_0x12AB0310C2281427(func_69(&Var10));
	if (Local_156.f_2 == 19)
	{
		Var0.f_9 = 1;
	}
	UNK_0xEEE9620CDB225790(&Var0);
}

var func_69(var uParam0)
{
	return uParam0;
}

bool func_70(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_71()
{
	switch (Local_156.f_115)
	{
		case 0:
			func_92();
			break;
		case 1:
			func_86();
			break;
		case 2:
			func_83();
			break;
		case 3:
			func_79();
			break;
		case 4:
			func_72();
			break;
	}
}

void func_72()
{
	if (!func_26(5))
	{
		Local_156.f_67.f_4 = 0;
		Local_156.f_67.f_3 = 0;
		func_78(&(Local_156.f_67), 11);
		if (Local_156.f_67.f_5)
		{
			func_25(5);
		}
	}
	else if (func_73(UNK_0x16F2683693E537C9(), 11))
	{
		func_66(&(Local_156.f_65), 2);
	}
}

bool func_73(bool bParam0, int iParam1)
{
	struct<18> Var0;

	if (func_77(bParam0))
	{
		Var0.f_2 = 14;
		func_74(Local_156.f_66, iParam1, 0, &Var0);
		return UNK_0xB4ECF989E2C1DAC8(bParam0, &(Var0.f_17), Var0.f_1, 3);
	}
	return false;
}

void func_74(var uParam0, int iParam1, int iParam2, var uParam3)
{
	if (!func_75())
	{
		StringCopy(&(uParam3->f_17), "anim_heist@arcade@fortune@male@", 64);
	}
	else
	{
		StringCopy(&(uParam3->f_17), "anim_heist@arcade@fortune@female@", 64);
	}
	switch (iParam1)
	{
		case 0:
			uParam3->f_1 = "start_game";
			break;
		case 1:
			uParam3->f_1 = "idle";
			break;
		case 11:
			uParam3->f_1 = "exit";
			break;
		case 21:
			uParam3->f_1 = "reaction_amused";
			break;
		case 22:
			uParam3->f_1 = "reaction_angry";
			break;
		case 23:
			uParam3->f_1 = "reaction_confused";
			break;
		case 24:
			uParam3->f_1 = "reaction_disgusted";
			break;
		case 25:
			uParam3->f_1 = "reaction_insulted";
			break;
		case 26:
			uParam3->f_1 = "reaction_pondering";
			break;
		case 27:
			uParam3->f_1 = "reaction_surprised";
			break;
	}
}

int func_75()
{
	return func_76(UNK_0xD803B885F5E47A62());
}

int func_76(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(UNK_0x9539D44F3E4492F6(bParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

bool func_77(bool bParam0)
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

void func_78(var uParam0, int iParam1)
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	bool bVar10;

	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0 = -734905987;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar8 = false;
	if (iParam1 == 11)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_416, true))
		{
			UNK_0x0674E58A79778E99(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_416), true);
			bVar8 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_20(&(uParam0->f_1)))
	{
		func_19(&(uParam0->f_1), 0, 0);
	}
	bVar9 = true;
	if (*uParam0 == iParam1 && !bVar8)
	{
		if (func_20(&(uParam0->f_1)) && !func_18(&(uParam0->f_1), 1000, 0))
		{
			bVar9 = false;
		}
		else
		{
			func_5(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_5(&(uParam0->f_1));
	}
	if (bVar9)
	{
		bVar10 = func_17(UNK_0xD803B885F5E47A62());
		if (bVar10 != -1)
		{
			UNK_0xFB061A86A7AC749F(1, &Var0, 8, bVar10);
			uParam0->f_5 = 1;
		}
	}
}

void func_79()
{
	if (!func_26(2))
	{
		if (func_26(9) && func_18(&(Local_156.f_11), (func_31(Local_156.f_3) / 3) * 2, 0))
		{
			Local_156.f_67.f_4 = 0;
			Local_156.f_67.f_3 = 0;
			func_78(&(Local_156.f_67), Local_156.f_63);
			func_9(9);
			func_25(2);
		}
	}
	else if (func_80())
	{
		func_67(4);
	}
}

bool func_80()
{
	float fVar0;

	if (!func_26(3))
	{
		if (func_73(UNK_0x16F2683693E537C9(), Local_156.f_63))
		{
			func_25(3);
		}
	}
	else if (!func_26(4))
	{
		Local_156.f_1 = UNK_0xF958843510932FF6(func_82());
		fVar0 = func_81(Local_156.f_63);
		if (UNK_0xA45992A6CE82FB43(Local_156.f_1) >= fVar0)
		{
			func_25(4);
		}
	}
	return func_26(4);
}

float func_81(int iParam0)
{
	float fVar0;

	fVar0 = 0.96f;
	switch (iParam0)
	{
		case 22:
			fVar0 = 0.65f;
			break;
		case 23:
			fVar0 = 0.85f;
			break;
		case 26:
			fVar0 = 0.9f;
			break;
		case 27:
			fVar0 = 0.9f;
			break;
	}
	return fVar0;
}

var func_82()
{
	return Global_1702977.f_1;
}

void func_83()
{
	if (func_18(&(Local_156.f_15), 2100, 0))
	{
		func_5(&(Local_156.f_15));
		Local_156.f_9 = func_21(UNK_0xD803B885F5E47A62());
		func_84(Local_156.f_2, Local_156.f_5, Local_156.f_9, Local_156.f_10);
		func_67(3);
	}
}

void func_84(var uParam0, var uParam1, var uParam2, var uParam3)
{
	struct<6> Var0;
	bool bVar6;

	Var0 = -559810780;
	Var0.f_1 = UNK_0xD803B885F5E47A62();
	Var0.f_2 = uParam3;
	Var0.f_3 = uParam1;
	Var0.f_4 = uParam0;
	Var0.f_5 = uParam2;
	bVar6 = func_85(1);
	if (!bVar6 == 0)
	{
		UNK_0xFB061A86A7AC749F(1, &Var0, 6, bVar6);
	}
}

bool func_85(bool bParam0)
{
	var uVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	while (bVar1 < UNK_0x54EABC0DD106045B())
	{
		if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bVar1)))
		{
			bVar2 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bVar1));
			if (func_16(bVar2, 0, 0))
			{
				if (bVar2 != UNK_0xD803B885F5E47A62() || bParam0)
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar2);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

void func_86()
{
	Local_156.f_2 = func_91();
	Local_156.f_63 = func_88(Local_156.f_2);
	Local_156.f_5 = func_87();
	func_67(2);
}

int func_87()
{
	int iVar0;
	int iVar1;

	iVar0 = UNK_0x09AC81E49EA267F7(false, 10);
	iVar1 = 0;
	while (iVar0 == Local_156.f_5 && iVar1 < 10)
	{
		iVar0 = UNK_0x09AC81E49EA267F7(false, 10);
		iVar1++;
	}
	if (iVar1 >= 10)
	{
		iVar0 = UNK_0x09AC81E49EA267F7(false, 10);
	}
	return iVar0;
}

int func_88(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = func_90(23, 26);
			break;
		case 1:
			iVar0 = func_90(26, 27);
			break;
		case 2:
			iVar0 = func_90(21, 27);
			break;
		case 3:
			iVar0 = func_90(21, 26);
			break;
		case 4:
			iVar0 = func_90(23, 23);
			break;
		case 5:
			iVar0 = func_90(22, 23);
			break;
		case 6:
			iVar0 = func_90(26, 26);
			break;
		case 7:
			iVar0 = func_90(27, 23);
			break;
		case 8:
			iVar0 = func_90(23, 26);
			break;
		case 9:
			iVar0 = func_90(23, 23);
			break;
		case 10:
			iVar0 = func_90(22, 25);
			break;
		case 11:
			iVar0 = func_90(22, 21);
			break;
		case 12:
			iVar0 = func_90(22, 25);
			break;
		case 13:
			iVar0 = func_90(23, 26);
			break;
		case 14:
			iVar0 = func_90(27, 26);
			break;
		case 15:
			iVar0 = func_90(21, 24);
			break;
		case 16:
			iVar0 = func_90(23, 22);
			break;
		case 17:
			iVar0 = func_90(23, 26);
			break;
		case 18:
			iVar0 = func_90(22, 23);
			break;
		case 19:
			iVar0 = func_90(27, 27);
			break;
		case 20:
			iVar0 = func_90(27, 27);
			break;
		case 21:
			iVar0 = func_90(22, 25);
			break;
		case 22:
			iVar0 = func_90(23, 26);
			break;
		case 23:
			iVar0 = func_90(23, 26);
			break;
		case 24:
			iVar0 = func_90(23, 26);
			break;
		case 25:
			iVar0 = func_90(21, 21);
			break;
		case 26:
			iVar0 = func_90(27, 26);
			break;
		case 27:
			iVar0 = func_90(21, 22);
			break;
		case 28:
			iVar0 = func_90(23, 25);
			break;
		case 29:
			iVar0 = func_90(23, 26);
			break;
		case 30:
			iVar0 = func_90(23, 26);
			break;
		case 31:
			iVar0 = func_90(23, 26);
			break;
		case 32:
			iVar0 = func_90(23, 26);
			break;
		case 33:
			iVar0 = func_90(23, 26);
			break;
		case 34:
			iVar0 = func_90(23, 26);
			break;
		case 35:
			iVar0 = func_90(23, 26);
			break;
		case 36:
			iVar0 = func_90(23, 26);
			break;
		case 37:
			iVar0 = func_90(23, 26);
			break;
		case 38:
			iVar0 = func_90(23, 26);
			break;
		case 39:
			iVar0 = func_90(23, 26);
			break;
		case 40:
			iVar0 = func_90(23, 26);
			break;
		case 41:
			iVar0 = func_89();
			break;
		case 42:
			iVar0 = func_90(22, 25);
			break;
		case 43:
			iVar0 = func_90(27, 26);
			break;
		case 44:
			iVar0 = func_90(22, 25);
			break;
		case 45:
			iVar0 = func_90(22, 25);
			break;
		case 46:
			iVar0 = func_90(22, 25);
			break;
		case 47:
			iVar0 = func_90(22, 25);
			break;
		case 48:
			iVar0 = func_90(23, 26);
			break;
	}
	return iVar0;
}

int func_89()
{
	int iVar0;
	int iVar1;

	switch (UNK_0x92EA5294EF5CA70E())
	{
		case joaat("RAIN"):
			iVar0 = 24;
			iVar1 = 22;
			break;
		case joaat("CLEARING"):
		case joaat("NEUTRAL"):
		case joaat("CLEAR"):
			iVar0 = 21;
			iVar1 = 27;
			break;
		case joaat("OVERCAST"):
		case joaat("SMOG"):
			iVar0 = 26;
			iVar1 = 23;
			break;
		case -318724249:
		case joaat("CLOUDS"):
			iVar0 = 26;
			iVar1 = 23;
			break;
		case joaat("THUNDER"):
			iVar0 = 22;
			iVar1 = 24;
			break;
		case joaat("SNOW"):
		case joaat("XMAS"):
			iVar0 = 27;
			iVar1 = 27;
			break;
		default:
			iVar0 = 26;
			iVar1 = 26;
			break;
	}
	return func_90(iVar0, iVar1);
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = UNK_0x09AC81E49EA267F7(false, 2);
	iVar1 = -1;
	switch (iVar0)
	{
		case 0:
			iVar1 = iParam0;
			if (Local_156.f_63 == iParam0)
			{
				iVar1 = iParam1;
			}
			break;
		case 1:
			iVar1 = iParam1;
			if (Local_156.f_63 == iParam1)
			{
				iVar1 = iParam0;
			}
			break;
	}
	return iVar1;
}

int func_91()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	bVar0 = 49;
	if (Global_42599 != 0)
	{
		bVar0 = 41;
	}
	else if (!Global_262145.f_26342)
	{
		bVar0 = 48;
	}
	iVar1 = UNK_0x09AC81E49EA267F7(false, bVar0);
	bVar2 = func_63(27247, -1, -1);
	bVar3 = func_63(28250, -1, -1);
	bVar4 = func_63(28251, -1, -1);
	bVar5 = func_63(28252, -1, -1);
	iVar6 = 0;
	while ((((iVar1 == Local_156.f_2 || (iVar1 == 19 && bVar2)) || (iVar1 == 22 && bVar3)) || (iVar1 == 23 && bVar4)) || ((iVar1 == 24 && bVar5) && iVar6 < 10))
	{
		iVar1 = UNK_0x09AC81E49EA267F7(false, bVar0);
		iVar6++;
	}
	if (iVar6 >= 10)
	{
		iVar1 = UNK_0x09AC81E49EA267F7(false, 19);
	}
	return iVar1;
}

void func_92()
{
	Local_156.f_10 = func_75();
	Local_156.f_67.f_4 = 0;
	Local_156.f_67.f_3 = 0;
	func_78(&(Local_156.f_67), 1);
	func_19(&(Local_156.f_13), 0, 0);
	func_67(1);
}

void func_93()
{
	if (func_96())
	{
		func_66(&(Local_156.f_65), 1);
	}
	else if (func_95(UNK_0xD803B885F5E47A62()) == Local_156.f_66 && Local_156.f_66 == 11)
	{
		func_94();
	}
	else if (func_20(&(Local_156.f_17)))
	{
		func_5(&(Local_156.f_17));
	}
}

void func_94()
{
	struct<16> Var0;

	if (!func_20(&(Local_156.f_17)))
	{
		if (func_26(8))
		{
			func_9(8);
			func_32(&(Local_156.f_17), 0, 0);
		}
		else
		{
			StringCopy(&Var0, "HS3MN_ATTRCT", 64);
			func_10(Var0, 0);
			if (Local_156.f_76.f_32)
			{
				func_32(&(Local_156.f_17), 0, 0);
			}
		}
	}
	else if (func_18(&(Local_156.f_17), 40000, 0))
	{
		func_5(&(Local_156.f_17));
	}
}

int func_95(int iParam0)
{
	if (iParam0 != func_22())
	{
		return Global_2425662[iParam0 /*421*/].f_416.f_3;
	}
	return -1;
}

bool func_96()
{
	if (!func_98(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (!func_97(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_95(UNK_0xD803B885F5E47A62()) != Local_156.f_66)
	{
		return false;
	}
	return true;
}

bool func_97(int iParam0)
{
	if (iParam0 != func_22())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_416, true);
	}
	return false;
}

bool func_98(int iParam0)
{
	if (iParam0 != func_22())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_416, false);
	}
	return false;
}

bool func_99()
{
	if (func_106())
	{
		return true;
	}
	if (!func_53())
	{
		return true;
	}
	if (func_103(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	if (func_102(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	if (func_100(11))
	{
		return true;
	}
	return false;
}

bool func_100(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1702977, func_101(iParam0));
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return 10;
		case 12:
			return 11;
		case 13:
			return 12;
		case 14:
			return 13;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

bool func_102(int iParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 14))
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 11))
	{
		return true;
	}
	return false;
}

bool func_103(bool bParam0)
{
	if (bParam0 != func_22() && func_16(bParam0, 1, 1))
	{
		if (func_105(bParam0) && !func_104(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_104(bool bParam0)
{
	if (bParam0 != func_22() && func_16(bParam0, 1, 1))
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, 4);
	}
	return false;
}

bool func_105(bool bParam0)
{
	if (bParam0 != func_22() && func_16(bParam0, 1, 1))
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, 3);
	}
	return false;
}

bool func_106()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1702977, false);
}

bool func_107()
{
	var uVar0;

	func_115(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_114())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_113())
	{
		return true;
	}
	if (func_112(159))
	{
		if (!func_111())
		{
			return true;
		}
	}
	if (func_112(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_108() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_108()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_108()
{
	switch (func_110())
	{
		case 0:
			return func_109();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_109()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("FREEMODE");
		default:
			break;
	}
	return joaat("FREEMODE");
}

int func_110()
{
	return Global_30768;
}

bool func_111()
{
	return Global_2450632.f_598;
}

bool func_112(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_113()
{
	return Global_2460680;
}

bool func_114()
{
	return Global_2450632.f_593;
}

void func_115(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < UNK_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = UNK_0xB98DB26FBF676FA1(1, iVar0);
		if (iVar1 == 174)
		{
			UNK_0x218F818E64020C17(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_116(iVar0);
					break;
				case 589125870:
					UNK_0x218F818E64020C17(1, iVar0, &vVar4, 4);
					if (vVar4.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_116(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_16(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_117(bVar4, &bVar5))
						{
							UNK_0x920D29D81E211607(bVar4, vVar0.z);
						}
						if (bVar5)
						{
							UNK_0x046C362CF15F1935(&bVar4);
						}
					}
				}
			}
		}
	}
}

bool func_117(bool bParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0xAF6690C489CC6203(bParam0))
		{
			if (UNK_0x7DDF43006A714856(bParam0))
			{
				if (!UNK_0xA7D7011F9888A365(UNK_0x134B62B726CEC8E6(bParam0)))
				{
					UNK_0x73270B3C9CC833FD(bParam0, false, 1);
					*bParam1 = 1;
				}
			}
		}
		if (UNK_0x9C77D2D0559097F0(bParam0, 0))
		{
			if (UNK_0xAFE0D3608EDA7039(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_118()
{
	SYSTEM::WAIT(0);
}

void func_119()
{
	func_121(11, 0);
	func_120();
}

void func_120()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_121(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_100(iParam0))
		{
			UNK_0x5D96D8530B3D0904(&Global_1702977, func_101(iParam0));
		}
	}
	else if (func_100(iParam0))
	{
		UNK_0x0674E58A79778E99(&Global_1702977, func_101(iParam0));
	}
}

void func_122(struct<18> Param0)
{
	UNK_0x37AD2AB54480FA6A(32, 0, Param0);
	func_125(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&uLocal_155, 1);
	UNK_0x35B62793EAE9ADDF(&uLocal_122, 33);
	if (!func_124())
	{
		func_119();
	}
	Local_156.f_64 = Param0.f_1;
	Local_156.f_66 = Param0.f_17;
	if (UNK_0x8CD06866876216F2())
	{
	}
	else
	{
		func_119();
	}
	func_123();
}

void func_123()
{
	func_121(11, 0);
}

bool func_124()
{
	int iVar0;

	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!UNK_0x8CD06866876216F2())
		{
			return false;
		}
		if (UNK_0x67CCE3DFA3467CAD())
		{
			return true;
		}
		if (func_114())
		{
			return false;
		}
		if (func_112(157))
		{
			return false;
		}
		if (iVar0 >= 3600)
		{
			return false;
		}
		SYSTEM::WAIT(0);
	}
	return false;
}

int func_125(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_120();
			}
			else
			{
				return 0;
			}
		}
		if (!func_126())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_120();
					}
					else
					{
						return 0;
					}
				}
				if (func_114())
				{
					if (!bParam2)
					{
						func_120();
					}
					else
					{
						return 0;
					}
				}
				if (func_112(157))
				{
					if (!bParam2)
					{
						func_120();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!UNK_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_120();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = UNK_0xDA9EEE4F835948F9();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_120();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!UNK_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_120();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_126()
{
	return Global_1312854;
}

