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
#endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;

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
	iVar0 = -1;
	bVar1 = false;
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		func_5();
	}
	while (true)
	{
		if (!bVar1)
		{
			switch (func_1(UNK_0x16F2683693E537C9()))
			{
				case 1:
					if (UNK_0xE3934829A331AF92("MISSION_COMPLETE_FRANKLIN_SMALL", 0))
					{
						UNK_0x7B1292B738DF9FAF();
						bVar1 = true;
					}
					break;
				case 2:
					if (UNK_0xE3934829A331AF92("MISSION_COMPLETE_TREVOR_SMALL", 0))
					{
						UNK_0x7B1292B738DF9FAF();
						bVar1 = true;
					}
					break;
				default:
					if (UNK_0xE3934829A331AF92("MISSION_COMPLETE_MICHAEL_SMALL", 0))
					{
						UNK_0x7B1292B738DF9FAF();
						bVar1 = true;
					}
					break;
			}
		}
		else if (iVar0 == -1)
		{
			iVar0 = UNK_0x1C0640BA9A7327B3();
		}
		else if (UNK_0x1C0640BA9A7327B3() > iVar0 + 8000)
		{
			func_5();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_2(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_2(int iParam0)
{
	if (func_4(iParam0))
	{
		return func_3(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_3(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_4(int iParam0)
{
	return iParam0 < 3;
}

void func_5()
{
	UNK_0xE96F19797E59AB06();
	UNK_0x10FAF14A60A0DBE1();
}

