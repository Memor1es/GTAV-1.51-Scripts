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
	vector3 vLocal_44 = { 0f, 0f, 0f };
	var uLocal_47 = 0;
	var uLocal_48 = 10;
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
	bool bLocal_90 = false;
	vector3 vLocal_91 = { 0f, 0f, 0f };
	bool bLocal_94 = false;
	bool bLocal_95 = false;
	bool bLocal_96 = false;
	int iLocal_97 = 0;
	bool bLocal_98 = false;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	struct<18> ScriptParam_0 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;

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
	bLocal_90 = joaat("U_M_O_TAPHILLBILLY");
	bLocal_98 = "SPECIAL_PED@MOUNTAIN_DANCER@MONOLOGUE_1@MONOLOGUE_1A";
	iLocal_101 = -1;
	vLocal_91 = { ScriptParam_0.f_1[0 /*3*/] };
	bLocal_94 = ScriptParam_0.f_17[0];
	if (UNK_0x2EBF608FFE6CA406(11))
	{
		func_37(0);
	}
	if (func_36(Global_111638.f_20112, 16384))
	{
		func_37(0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (UNK_0xC844350D5D58C99A(bLocal_95))
		{
			if (UNK_0x437347B10A200C4B(bLocal_95, 0) && !iLocal_99 == 7)
			{
				func_35(&(Global_111638.f_20112), 16384);
				iLocal_99 = 7;
			}
		}
		switch (iLocal_99)
		{
			case 0:
				if ((UNK_0x338D6FF72D84D90F() && !func_34()) && !func_12())
				{
					if (func_11())
					{
						bLocal_95 = UNK_0x36F2404464202779(26, bLocal_90, vLocal_91, bLocal_94, 1, true);
						UNK_0x11AD11297DC58CC7(bLocal_95, true);
						bLocal_96 = UNK_0x7707E48765093646(joaat("PROP_TAPEPLAYER_01"), 704.7615f, 4179.574f, 39.7093f, true, true, false);
						UNK_0xD8F6A53F4799FAFE(bLocal_96, (233.8288f + 180f));
						UNK_0x9A28E8CB86CD4694(bLocal_95, false, 0, 0, false);
						iLocal_99 = 1;
					}
				}
				else
				{
					func_37(0);
				}
				break;
			case 1:
				iLocal_101 = UNK_0xE9744DB7B8CA6965(vLocal_91 + Vector(1f, 0f, 0f), 0f, 0f, bLocal_94, 2);
				UNK_0x915804B434753CBD(bLocal_95, iLocal_101, bLocal_98, "MTN_DNC_if_you_want_to_get_to_heaven", 2f, -2f, 1, 0, 1148846080, 0);
				UNK_0xA195DF23E9D2A5FF("MNT_DNC", bLocal_95);
				iLocal_99 = 2;
				break;
			case 2:
				if (UNK_0x642AF55F953F8FA7(iLocal_101, "MNT_DNC") == 1)
				{
					UNK_0x451E64C9E789DAF6(iLocal_101);
					iLocal_99 = 3;
				}
				break;
			case 3:
				vVar0 = { UNK_0x68F4C0EC296D3901(bLocal_95, true) };
				UNK_0x8B66ED74C2DC2E98(bLocal_95, 3f);
				if (func_10(UNK_0x16F2683693E537C9(), bLocal_95) < 10f)
				{
					UNK_0x50155CDC2C5335FC(UNK_0x16F2683693E537C9(), 1, bLocal_95, 31086, 0f, 0f, 0f, 0, -1, -1);
					UNK_0x50155CDC2C5335FC(bLocal_95, 1, UNK_0x16F2683693E537C9(), 31086, 0f, 0f, 0f, 0, -1, -1);
				}
				if (func_9(bLocal_95, UNK_0x16F2683693E537C9(), 1) < 25f)
				{
					if (!UNK_0xE4EDC4B0E92C078B(iLocal_100))
					{
						func_5(&iLocal_100, &bLocal_95, 0);
						UNK_0x61755AC17D8F538E(iLocal_100, 3);
					}
				}
				else if (UNK_0xE4EDC4B0E92C078B(iLocal_100))
				{
					func_4(&iLocal_100);
				}
				if (UNK_0xA45992A6CE82FB43(iLocal_101) > 0.9999999f)
				{
					iLocal_99 = 1;
				}
				if (UNK_0x869EFD0BC0868856(bLocal_95))
				{
					UNK_0x0C381ABE35BC2C84(iLocal_101);
					iLocal_99 = 4;
				}
				if (((((UNK_0xEB6A8945D1AC98A1(bLocal_95) || UNK_0xD3DCEC81D13AAFB1(vVar0, 50f, true)) || UNK_0xD3DCEC81D13AAFB1(vVar0, 50f, false)) || UNK_0x723EE7F83DF1497D(vVar0, 20f, 20f, 20f, 0)) || UNK_0x681F21BF9F7B449B(-1, vVar0, 50f)) || (((UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bLocal_95) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bLocal_95)) && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vVar0, 1) < 25f) && func_1(bLocal_95, UNK_0x16F2683693E537C9(), 1126825984 /* Float: 170f */, 0)))
				{
					UNK_0x0C381ABE35BC2C84(iLocal_101);
					iLocal_99 = 4;
					iLocal_97 = 1;
				}
				break;
			case 4:
				if (UNK_0xE4EDC4B0E92C078B(iLocal_100))
				{
					func_4(&iLocal_100);
				}
				if (!UNK_0x869EFD0BC0868856(bLocal_95))
				{
					if (iLocal_97 == 1)
					{
						UNK_0x96167B03C5A77156(bLocal_95, 723.1315f, 4171.957f, 39.7091f, 2f, -1, 1f, 1024, 1193033728);
					}
					else
					{
						UNK_0x96167B03C5A77156(bLocal_95, 723.1315f, 4171.957f, 39.7091f, 1f, -1, 1f, 1024, 1193033728);
					}
					UNK_0xFADC0A217229F6B5(bLocal_95, true);
					iLocal_99 = 6;
				}
				break;
			case 6:
				if (UNK_0xD1960163A3042274(bLocal_95, 713668775) != 1 && UNK_0xD1960163A3042274(bLocal_95, 713668775) != 0)
				{
					UNK_0x11AD11297DC58CC7(bLocal_95, false);
					if (iLocal_97 == 1)
					{
						UNK_0xF3268524E9BE6D6E(bLocal_95, UNK_0x16F2683693E537C9(), 100f, -1, 0, 0);
					}
					else
					{
						UNK_0x01E4BB5190DF7317(bLocal_95, 1193033728, 0);
					}
					UNK_0xFADC0A217229F6B5(bLocal_95, true);
					iLocal_99 = 5;
				}
				break;
			case 5:
				if ((UNK_0x03068588A1FCED1A(bLocal_95) && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bLocal_95, true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1) > 50f) && !UNK_0x338D6FF72D84D90F())
				{
					func_37(1);
				}
				break;
			case 7:
				if (!UNK_0x338D6FF72D84D90F())
				{
					func_37(0);
				}
				break;
		}
	}
}

bool func_1(bool bParam0, bool bParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = { func_3(UNK_0x68F4C0EC296D3901(bParam1, true) - UNK_0x68F4C0EC296D3901(bParam0, true)) };
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
		vVar3 = { func_3(UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 5f, 0f) - UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_2(vVar3, vVar0);
	if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return false;
	}
	return true;
}

float func_2(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_3(vector3 vParam0)
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

void func_4(bool bParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x142CC44DB769B57E(bParam0);
	}
}

void func_5(int iParam0, bool bParam1, bool bParam2)
{
	if (!UNK_0xE4EDC4B0E92C078B(*iParam0))
	{
		if (UNK_0xC844350D5D58C99A(*bParam1))
		{
			if (!UNK_0xEB6A8945D1AC98A1(*bParam1))
			{
				*iParam0 = func_6(*bParam1, bParam2, 145);
				if (bParam2 == 0)
				{
					UNK_0x2A065371C9D96655(*iParam0, 7);
				}
			}
		}
	}
}

int func_6(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_7(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_7(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_8(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_8(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_8(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_8(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

float func_9(bool bParam0, bool bParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
	}
	else
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, false) };
	}
	return UNK_0x0EB28750412C3A5A(vVar0, vVar3, iParam2);
}

float func_10(bool bParam0, bool bParam1)
{
	return func_9(bParam0, bParam1, 1);
}

bool func_11()
{
	UNK_0x523BCC9DC80CD82F(bLocal_90);
	UNK_0x3F423BF5B8125A50(bLocal_98);
	if (UNK_0xB87F6CF6E5628C67(bLocal_90) && UNK_0xB4AE0788C1587752(bLocal_98))
	{
		return true;
	}
	return false;
}

bool func_12()
{
	if (!func_32(5))
	{
		return true;
	}
	if (func_28())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_27())
		{
			return false;
		}
	}
	if (func_13(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_13(float fParam0, bool bParam1)
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
		if (func_25(func_26()))
		{
			iVar36 = func_19();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 2) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 3))
				{
					func_14(iVar32, &Var0);
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

void func_14(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_15(uParam1, "Abigail1", func_17(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
		case 1:
			func_15(uParam1, "Abigail2", func_17(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
		case 2:
			func_15(uParam1, "Barry1", func_17(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
		case 3:
			func_15(uParam1, "Barry2", func_17(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
		case 4:
			func_15(uParam1, "Barry3", func_17(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
		case 5:
			func_15(uParam1, "Barry3A", func_17(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 6:
			func_15(uParam1, "Barry3C", func_17(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 7:
			func_15(uParam1, "Barry4", func_17(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_16(iParam0), 0, 0);
			break;
		case 8:
			func_15(uParam1, "Dreyfuss1", func_17(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
		case 9:
			func_15(uParam1, "Epsilon1", func_17(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
			break;
		case 10:
			func_15(uParam1, "Epsilon2", func_17(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
		case 11:
			func_15(uParam1, "Epsilon3", func_17(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
			break;
		case 12:
			func_15(uParam1, "Epsilon4", func_17(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
			break;
		case 13:
			func_15(uParam1, "Epsilon5", func_17(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
		case 14:
			func_15(uParam1, "Epsilon6", func_17(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 15:
			func_15(uParam1, "Epsilon7", func_17(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
			break;
		case 16:
			func_15(uParam1, "Epsilon8", func_17(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
		case 17:
			func_15(uParam1, "Extreme1", func_17(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 18:
			func_15(uParam1, "Extreme2", func_17(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 19:
			func_15(uParam1, "Extreme3", func_17(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 20:
			func_15(uParam1, "Extreme4", func_17(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
		case 21:
			func_15(uParam1, "Fanatic1", func_17(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_16(iParam0), 1, 0);
			break;
		case 22:
			func_15(uParam1, "Fanatic2", func_17(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_16(iParam0), 1, 0);
			break;
		case 23:
			func_15(uParam1, "Fanatic3", func_17(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_16(iParam0), 0, 1);
			break;
		case 24:
			func_15(uParam1, "Hao1", func_17(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_16(iParam0), 0, 1);
			break;
		case 25:
			func_15(uParam1, "Hunting1", func_17(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 26:
			func_15(uParam1, "Hunting2", func_17(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 27:
			func_15(uParam1, "Josh1", func_17(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
		case 28:
			func_15(uParam1, "Josh2", func_17(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
		case 29:
			func_15(uParam1, "Josh3", func_17(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
		case 30:
			func_15(uParam1, "Josh4", func_17(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
		case 31:
			func_15(uParam1, "Maude1", func_17(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 32:
			func_15(uParam1, "Minute1", func_17(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 33:
			func_15(uParam1, "Minute2", func_17(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 34:
			func_15(uParam1, "Minute3", func_17(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 35:
			func_15(uParam1, "MrsPhilips1", func_17(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 0);
			break;
		case 36:
			func_15(uParam1, "MrsPhilips2", func_17(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 0);
			break;
		case 37:
			func_15(uParam1, "Nigel1", func_17(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
		case 38:
			func_15(uParam1, "Nigel1A", func_17(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
		case 39:
			func_15(uParam1, "Nigel1B", func_17(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_16(iParam0), 1, 1);
			break;
		case 40:
			func_15(uParam1, "Nigel1C", func_17(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_16(iParam0), 1, 1);
			break;
		case 41:
			func_15(uParam1, "Nigel1D", func_17(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_16(iParam0), 1, 1);
			break;
		case 42:
			func_15(uParam1, "Nigel2", func_17(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
		case 43:
			func_15(uParam1, "Nigel3", func_17(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
		case 44:
			func_15(uParam1, "Omega1", func_17(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
		case 45:
			func_15(uParam1, "Omega2", func_17(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
		case 46:
			func_15(uParam1, "Paparazzo1", func_17(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 47:
			func_15(uParam1, "Paparazzo2", func_17(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 48:
			func_15(uParam1, "Paparazzo3", func_17(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
		case 49:
			func_15(uParam1, "Paparazzo3A", func_17(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 50:
			func_15(uParam1, "Paparazzo3B", func_17(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 51:
			func_15(uParam1, "Paparazzo4", func_17(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
		case 52:
			func_15(uParam1, "Rampage1", func_17(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_16(iParam0), 0, 0);
			break;
		case 54:
			func_15(uParam1, "Rampage3", func_17(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
		case 55:
			func_15(uParam1, "Rampage4", func_17(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
		case 56:
			func_15(uParam1, "Rampage5", func_17(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_16(iParam0), 0, 0);
			break;
		case 53:
			func_15(uParam1, "Rampage2", func_17(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
		case 57:
			func_15(uParam1, "TheLastOne", func_17(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 58:
			func_15(uParam1, "Tonya1", func_17(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 59:
			func_15(uParam1, "Tonya2", func_17(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 60:
			func_15(uParam1, "Tonya3", func_17(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 61:
			func_15(uParam1, "Tonya4", func_17(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		case 62:
			func_15(uParam1, "Tonya5", func_17(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_15(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
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

int func_16(int iParam0)
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

struct<2> func_17(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_18(iParam0) };
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

struct<2> func_18(int iParam0)
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

int func_19()
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

void func_20()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_23(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_22(UNK_0x16F2683693E537C9());
			if (func_25(iVar0) && (!func_21(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_25(Global_111638.f_2358.f_539.f_4321))
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
	return Global_41431 == iParam0;
}

int func_22(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
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
	if (func_25(iParam0))
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
	return iParam0 < 3;
}

int func_26()
{
	func_20();
	return Global_111638.f_2358.f_539.f_4321;
}

bool func_27()
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

bool func_28()
{
	if (func_31() && !func_27())
	{
		return true;
	}
	if (func_30() && func_29())
	{
		return true;
	}
	return false;
}

bool func_29()
{
	return Global_111356 > 0;
}

bool func_30()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_31()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

int func_32(int iParam0)
{
	return func_33(iParam0, Global_41431);
}

int func_33(int iParam0, int iParam1)
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

bool func_34()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_44) < (75f * 75f))
		{
			return true;
		}
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_27())
		{
			return false;
		}
	}
	if (func_28())
	{
		return true;
	}
	if (func_13(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

void func_35(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_36(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_37(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bLocal_96))
	{
		UNK_0xF690C84DADBB3551(&bLocal_96);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_100))
	{
		func_4(&iLocal_100);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_95))
	{
		if (bParam0)
		{
			UNK_0xEBA53F35D0085654(&bLocal_95);
		}
		else
		{
			UNK_0x6DAD7906B73F064D(&bLocal_95);
		}
	}
	UNK_0x10FAF14A60A0DBE1();
}

