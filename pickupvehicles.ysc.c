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
	bool bLocal_28 = false;
	bool bLocal_29 = false;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
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
	func_4(21);
	if (UNK_0x2EBF608FFE6CA406(18))
	{
		if (UNK_0x3E653638C7A26115() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (UNK_0x8A22C4C08282BF26(joaat("DOCKS_SETUP")) == 0)
		{
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					bLocal_28 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
				}
				else
				{
					bLocal_28 = false;
				}
			}
			if (UNK_0xC844350D5D58C99A(bLocal_28))
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_28, 0))
				{
					if (UNK_0x4906F8A34E9F4814(bLocal_28, joaat("HANDLER")))
					{
						UNK_0x558EC149EB2BC0A2(0, 51);
						if (!UNK_0x360E6FD1D4C5F14A(bLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!UNK_0xC844350D5D58C99A(bLocal_29) || (UNK_0xC844350D5D58C99A(bLocal_29) && UNK_0x4B72871A3BE7B474(UNK_0x68F4C0EC296D3901(bLocal_28, true), 15f, joaat("PROP_CONTR_03B_LD"), 1, 0, 1) != bLocal_29))
								{
									bLocal_29 = UNK_0x4B72871A3BE7B474(UNK_0x68F4C0EC296D3901(bLocal_28, true), 15f, joaat("PROP_CONTR_03B_LD"), 1, 0, 1);
								}
								if (UNK_0xC844350D5D58C99A(bLocal_29))
								{
									if (func_1(&iLocal_30, 1000))
									{
										if (UNK_0x6EEBF6AAC466A028(bLocal_28, bLocal_29))
										{
											if (UNK_0xBFC0798A6E3417F9(0, 51))
											{
												UNK_0x69700D096A747A81(bLocal_28, bLocal_29);
												iLocal_31 = 1;
												iLocal_32 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_31 == 1)
							{
								iLocal_30 = UNK_0x1C0640BA9A7327B3();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (UNK_0xBFC0798A6E3417F9(0, 51))
							{
							}
						}
					}
				}
			}
		}
	}
}

bool func_1(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = UNK_0x1C0640BA9A7327B3();
	if ((iVar0 - *iParam0) > iParam1)
	{
		return true;
	}
	return false;
}

void func_2()
{
	UNK_0x10FAF14A60A0DBE1();
}

int func_3(int iParam0)
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

int func_4(int iParam0)
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

