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
	bool bLocal_18 = false;
	bool bLocal_19 = false;
	bool bLocal_20 = false;
	bool bLocal_21 = false;
	bool bLocal_22 = false;
	bool bLocal_23 = false;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_14();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_8();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_19486.f_1 != 9)
		{
			if (!bLocal_18)
			{
				bLocal_18 = true;
			}
			else if (Global_19468)
			{
				if (!bLocal_19)
				{
					bLocal_19 = true;
					func_7(Global_19467, "SET_DATA_SLOT_EMPTY", 5f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					func_4(Global_19467, 1);
					func_7(Global_19467, "DISPLAY_VIEW", 5f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				}
				else
				{
					func_3();
				}
			}
			if (func_2())
			{
				func_14();
			}
		}
		if (func_1())
		{
			func_14();
		}
	}
}

bool func_1()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return true;
	}
	return false;
}

bool func_2()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return true;
	}
	return false;
}

void func_3()
{
	if (!bLocal_20)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 172))
		{
			bLocal_20 = true;
			func_7(Global_19467, "SET_INPUT_EVENT", 1f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, 172))
	{
		bLocal_20 = false;
	}
	if (!bLocal_21)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 173))
		{
			bLocal_21 = true;
			func_7(Global_19467, "SET_INPUT_EVENT", 3f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, 173))
	{
		bLocal_21 = false;
	}
	if (!bLocal_22)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 174))
		{
			bLocal_22 = true;
			func_7(Global_19467, "SET_INPUT_EVENT", 4f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, 174))
	{
		bLocal_22 = false;
	}
	if (!bLocal_23)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 175))
		{
			bLocal_23 = true;
			func_7(Global_19467, "SET_INPUT_EVENT", 2f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, 175))
	{
		bLocal_23 = false;
	}
}

void func_4(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;

	if (Global_95831 == Global_95832)
	{
		if (!bParam1)
		{
			return;
		}
	}
	if (iParam0 == 0)
	{
		return;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0))
	{
		return;
	}
	func_8();
	iVar0 = Global_95835;
	iVar1 = Global_95834;
	bVar2 = true;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	while (bVar2)
	{
		iVar4 = iVar3;
		iVar3 = Global_95836[iVar0 /*25*/][iVar1];
		if (!iVar3 == iVar4)
		{
			if (!iVar3 == 0)
			{
				switch (iVar0)
				{
					case 0:
						sVar6 = "fSu";
						break;
					case 1:
						sVar6 = "fMo";
						break;
					case 2:
						sVar6 = "fTu";
						break;
					case 3:
						sVar6 = "fWe";
						break;
					case 4:
						sVar6 = "fTh";
						break;
					case 5:
						sVar6 = "fFr";
						break;
					case 6:
						sVar6 = "fSa";
						break;
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(-1f);
				func_6(sVar6);
				func_6(func_5(iVar3));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iVar5++;
			}
		}
		iVar1++;
		if (iVar1 > 23)
		{
			iVar1 = 0;
			iVar0++;
		}
		if (iVar0 > 6)
		{
			iVar0 = 0;
		}
		if (iVar0 == Global_95835 && iVar1 == Global_95834)
		{
			bVar2 = false;
		}
	}
	Global_95832 = Global_95831;
}

char* func_5(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ORG_EV_0";
		case 1:
			return "ORG_EV_1";
	}
	return "ORG_EV_0";
}

void func_6(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_8()
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

	if (!Global_95830)
	{
		Global_96014 = CLOCK::GET_CLOCK_MONTH();
		Global_96013 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
		Global_96012 = CLOCK::GET_CLOCK_HOURS();
		Global_95830 = 1;
		Global_95835 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
		Global_95834 = CLOCK::GET_CLOCK_HOURS();
		func_12();
		return;
	}
	iVar0 = CLOCK::GET_CLOCK_MONTH();
	iVar1 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = Global_96014;
	iVar4 = Global_96013;
	iVar5 = Global_96012;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 0;
	iVar11 = func_9(iVar4, iVar3, iVar1, iVar0);
	if (iVar11 > 0)
	{
		iVar10 = 0;
		if (iVar11 > 7)
		{
			iVar8 = 0;
			iVar9 = 0;
			iVar8 = 0;
			while (iVar8 < 7)
			{
				iVar9 = 0;
				while (iVar9 < 24)
				{
					if (!Global_95836[iVar6 /*25*/][iVar7] == 0)
					{
						Global_95831++;
						Global_95833 = (Global_95833 - 1);
					}
					Global_95836[iVar6 /*25*/][iVar7] = 0;
					iVar9++;
				}
				iVar8++;
			}
		}
		else if (iVar11 > 1)
		{
			iVar10 = (iVar10 + (iVar11 - 1) * 24);
		}
		iVar10 = (iVar10 + (24 - iVar5));
		iVar10 = (iVar10 + (24 - (24 - iVar2)));
		iVar8 = 0;
		iVar7 = Global_95834;
		iVar6 = Global_95835;
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			if (iVar7 > 23)
			{
				iVar7 = 0;
				iVar6++;
			}
			if (iVar6 > 6)
			{
				iVar6 = 0;
			}
			if (!Global_95836[iVar6 /*25*/][iVar7] == 0)
			{
				Global_95831++;
				Global_95833 = (Global_95833 - 1);
			}
			Global_95836[iVar6 /*25*/][iVar7] = 0;
			iVar7++;
			iVar8++;
		}
		Global_95834 = (iVar7 - 1);
		Global_95835 = iVar6;
	}
	else
	{
		if (iVar5 > iVar2)
		{
			Global_96014 = iVar0;
			Global_96013 = iVar1;
			Global_96012 = iVar2;
			Global_95835 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
			Global_95834 = CLOCK::GET_CLOCK_HOURS();
			return;
		}
		if (iVar5 == iVar2)
		{
			return;
		}
		else
		{
			iVar10 = (iVar2 - iVar5);
			iVar8 = 0;
			iVar7 = Global_95834;
			iVar6 = Global_95835;
			iVar8 = 0;
			while (iVar8 < iVar10)
			{
				if (!Global_95836[iVar6 /*25*/][iVar7] == 0)
				{
					Global_95831++;
					Global_95833 = (Global_95833 - 1);
				}
				Global_95836[iVar6 /*25*/][iVar7] = 0;
				iVar7++;
				if (iVar7 > 23)
				{
					iVar7 = 0;
					iVar6++;
				}
				if (iVar6 > 6)
				{
					iVar6 = 0;
				}
				iVar8++;
			}
			Global_95834 = iVar7;
			Global_95835 = iVar6;
		}
	}
	if (Global_95831 > Global_95832)
	{
	}
	if ((iVar3 == iVar0 && iVar5 == iVar2) && iVar4 == iVar1)
	{
	}
	else
	{
		Global_96014 = iVar0;
		Global_96013 = iVar1;
		Global_96012 = iVar2;
	}
}

int func_9(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = 0;
	if (!iParam1 == iParam3)
	{
		if (iParam1 < iParam3)
		{
			iVar1 = (func_10(iParam1) - (func_10(iParam1) - iParam0));
			iVar2 = 0;
			if (iParam3 > iParam1 + 1)
			{
				iVar3 = (iParam3 - iParam1);
				iVar4 = iParam1 + 1;
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < iVar3)
				{
					if (iVar4 > 11)
					{
						iVar4 = 0;
					}
					iVar2 = (iVar2 + func_10(iVar4));
					iVar4++;
					iVar0++;
				}
			}
			iVar5 = (func_10(iParam3) - iParam2);
			iVar6 = ((iVar1 + iVar2) + iVar5);
			return iVar6;
		}
	}
	else
	{
		if (iParam2 < iParam0)
		{
			return 0;
		}
		if (iParam2 == iParam0)
		{
			return 0;
		}
		return (iParam2 - iParam0);
	}
	return 0;
}

int func_10(int iParam0)
{
	return func_11(iParam0);
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 30;
		case 3:
			return 30;
		case 5:
			return 30;
		case 10:
			return 30;
		case 1:
			return 28;
		default:
			break;
	}
	return 31;
	return 0;
}

void func_12()
{
	int iVar0;
	int iVar1;

	Global_95834 = 0;
	Global_95835 = 0;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = 0;
		while (iVar1 < 24)
		{
			Global_95836[iVar0 /*25*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_13();
}

void func_13()
{
	Global_95834 = 0;
	Global_95835 = 0;
	Global_96012 = CLOCK::GET_CLOCK_HOURS();
	Global_96013 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	Global_96014 = CLOCK::GET_CLOCK_MONTH();
}

void func_14()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

