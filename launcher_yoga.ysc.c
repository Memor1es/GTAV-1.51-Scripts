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
	var uLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	char cLocal_53[64] = "";
	char cLocal_69[64] = "";
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	vector3 vLocal_87 = { 0f, 0f, 0f };
	vector3 vLocal_90 = { 0f, 0f, 0f };
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = NULL;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	float fLocal_110 = 0f;
	vector3 vLocal_111 = { 0f, 0f, 0f };
	vector3 vLocal_114 = { 0f, 0f, 0f };
	float fLocal_117 = 0f;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	struct<6> Local_120 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
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
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

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
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	iLocal_99 = -1;
	sLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	fLocal_117 = 4f;
	iLocal_118 = -1;
	vLocal_90 = { ScriptParam_0.f_1[0 /*3*/] };
	vLocal_90 = { vLocal_90 };
	uLocal_86 = uLocal_86;
	cLocal_69 = { cLocal_69 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_89(1);
	}
	iLocal_85 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_95 = 0;
	func_87(&Global_110289, 0);
	func_85();
	if (func_84(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_37199)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_84(uLocal_94, 8))
	{
		if (!func_82(iLocal_100))
		{
			if (func_81(0, iLocal_99))
			{
				func_89(0);
			}
			else
			{
				func_89(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_81(0, iLocal_99))
		{
			func_89(1);
		}
	}
	if (func_84(uLocal_94, 8388608))
	{
		func_89(1);
	}
	if (func_84(uLocal_94, 524288) && (func_80() && !func_79()))
	{
		func_89(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_84(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_78(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_77(10);
	}
	while (true)
	{
		if (!func_84(uLocal_94, 268435456))
		{
			fVar1 = 0f;
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(ScriptParam_0.f_1[0 /*3*/], &fVar1, false, false))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_0.f_1[0 /*3*/].f_2 = fVar1;
					func_76(&uLocal_94, 268435456);
				}
			}
		}
		iLocal_85 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (func_84(uLocal_94, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_85, false))
			{
				func_89(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_85) && !ENTITY::IS_ENTITY_DEAD(iLocal_85, false))
		{
			vLocal_87 = { ENTITY::GET_ENTITY_COORDS(iLocal_85, true) };
			fLocal_93 = SYSTEM::VDIST2(vLocal_87, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			vLocal_111 = { vLocal_87 };
			vLocal_114 = { ScriptParam_0.f_1[0 /*3*/] };
			vLocal_111.f_2 = 0f;
			vLocal_114.f_2 = 0f;
			fLocal_110 = SYSTEM::VDIST2(vLocal_111, vLocal_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_82(iLocal_100) || (func_84(uLocal_94, 16) && !func_84(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_75();
						func_77(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_78(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_77(10);
						}
						if ((vLocal_87.z - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				case 1:
					if (func_74())
					{
						iLocal_103 = iLocal_103;
						func_77(3);
					}
					else
					{
						func_75();
					}
					break;
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_89(1);
						return;
					}
					if (!func_82(iLocal_100))
					{
						if (!func_84(uLocal_94, 8))
						{
							bVar2 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_98744.f_3), &cLocal_69))
							{
								cLocal_69 = { cLocal_53 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_89(0);
							}
							else
							{
								if (!func_84(uLocal_94, 4))
								{
									func_73();
									func_76(&uLocal_94, 4);
								}
								if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_98778)
								{
									if (iLocal_105 != 263)
									{
										if (func_72(6) && !func_71(iLocal_105))
										{
										}
										else
										{
											func_78(iLocal_105, 1, 0);
											iLocal_105 = 263;
										}
									}
									func_77(10);
								}
								else
								{
									cLocal_69 = { cLocal_53 };
									bVar3 = !func_84(uLocal_94, 64);
									func_87(&uLocal_94, 128);
									if (!func_70(3) && !Global_98778)
									{
										if (func_84(uLocal_94, 2097152))
										{
											if ((!func_84(uLocal_94, 1) || !ENTITY::DOES_ENTITY_EXIST(func_69())) && !Global_98778)
											{
												func_77(10);
											}
											else
											{
												if (func_84(uLocal_94, 524288) && (func_80() && !func_79()))
												{
													func_89(1);
												}
												if (func_68())
												{
													func_89(1);
												}
												if ((!func_59(6) || Global_110685) || func_58())
												{
													bVar3 = false;
												}
												if (func_84(uLocal_94, 1))
												{
													if (!func_57())
													{
														func_55(&uLocal_94, 128);
														bVar3 = false;
													}
												}
												if (func_54(1))
												{
													bVar3 = false;
												}
												if (Global_76622)
												{
													bVar3 = false;
												}
												if (func_53())
												{
													bVar3 = false;
												}
												if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
												{
													bVar3 = false;
												}
												if (func_52() || func_51(8, -1))
												{
													bVar3 = false;
												}
												if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
												{
													bVar3 = false;
												}
												if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
												{
													bVar3 = false;
												}
												if (func_50(0) || func_49())
												{
													bVar3 = false;
												}
												if (bVar3)
												{
													if (!func_43(iLocal_118))
													{
														func_55(&uLocal_94, 128);
														bVar3 = false;
													}
													if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, false, true, iLocal_103))
													{
														bVar3 = false;
													}
													if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
													{
														bVar3 = false;
													}
													if (bVar3)
													{
														PAD::SET_INPUT_EXCLUSIVE(0, 51);
														if (func_42(uLocal_86))
														{
															if (iLocal_96 == -1)
															{
																func_41(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
																func_55(&uLocal_94, 2048);
															}
															else if (!func_84(uLocal_94, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
															{
																func_40(&iLocal_96);
																func_87(&uLocal_94, 2048);
															}
															if (func_38(iLocal_96, 1))
															{
																sLocal_101 = sLocal_101;
																func_40(&iLocal_96);
																func_87(&uLocal_94, 2048);
																SCRIPT::REQUEST_SCRIPT(&cLocal_69);
																PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
																func_77(5);
															}
														}
														else
														{
															sLocal_101 = sLocal_101;
															func_40(&iLocal_96);
															func_87(&uLocal_94, 2048);
															SCRIPT::REQUEST_SCRIPT(&cLocal_69);
															PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
															func_77(5);
														}
													}
												}
												if (!bVar3)
												{
													if (iLocal_96 != -1)
													{
														func_40(&iLocal_96);
														func_87(&uLocal_94, 2048);
														HUD::CLEAR_HELP(false);
													}
												}
												func_37();
												Jump @2692; //curOff = 1683
												PAD::SET_INPUT_EXCLUSIVE(0, 51);
												if (SCRIPT::HAS_SCRIPT_LOADED(&cLocal_69))
												{
													if (iLocal_96 != -1)
													{
														func_40(&iLocal_96);
													}
													iVar4 = 2;
													bVar0 = false;
													if (func_84(uLocal_94, 1))
													{
														if (func_72(6) || func_72(7))
														{
															iVar4 = 1;
															bVar0 = true;
														}
													}
													if (iVar4 != 1)
													{
														iVar4 = func_34(&iLocal_98, 6, iLocal_100, 0, 0);
													}
													if (iVar4 == 1)
													{
														if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
														{
															PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
														}
														func_33();
														if (Global_42596)
														{
															func_24(PLAYER::PLAYER_PED_ID());
														}
														PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 56);
														iLocal_52 = SYSTEM::START_NEW_SCRIPT(&cLocal_69, iLocal_97);
														SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_69);
														cLocal_53 = { cLocal_69 };
														StringCopy(&cLocal_69, "", 64);
														func_87(&uLocal_94, 4);
														func_23();
														func_55(&uLocal_94, 2);
														func_77(6);
														func_19(&iLocal_107);
														if (iLocal_99 != -1)
														{
															func_18(iLocal_99);
															func_15(func_17(iLocal_99), 0, 0);
														}
													}
													else if (iVar4 == 2)
													{
														func_14();
													}
													else if (iVar4 == 0)
													{
														func_77(10);
													}
												}
												else
												{
													func_14();
												}
												Jump @2692; //curOff = 1949
												if (!func_84(uLocal_94, 256))
												{
													if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN())
													{
														PAD::SET_INPUT_EXCLUSIVE(0, 51);
													}
													else if (CAM::IS_SCREEN_FADED_OUT())
													{
														func_55(&uLocal_94, 256);
													}
												}
												if (func_84(Global_110289, 262144))
												{
													func_87(&Global_110289, 262144);
													func_13();
												}
												if (func_84(uLocal_94, 2097152))
												{
													if (!func_70(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_52))
													{
														func_77(10);
													}
												}
												if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_52))
												{
													STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_9(&iLocal_107) * 1000f)), iLocal_99, 0);
													func_8(&iLocal_107);
													func_87(&uLocal_94, 256);
													func_7();
													if (bVar0)
													{
														func_87(&uLocal_94, 2);
													}
													else if (func_84(uLocal_94, 2))
													{
														if (func_84(Global_110289, 0))
														{
															func_6(&iLocal_98);
															iLocal_98 = -1;
															func_87(&uLocal_94, 2);
														}
														else
														{
															func_6(&iLocal_98);
															iLocal_98 = -1;
															func_87(&uLocal_94, 2);
														}
													}
													func_77(0);
													if (iLocal_99 != -1)
													{
														if (func_84(Global_110289, 0))
														{
															STATS::PLAYSTATS_MISSION_CHECKPOINT(func_17(iLocal_99), 0, Global_98781, 0);
															func_5(func_17(iLocal_99), 0, Global_98781, 1, 0);
														}
														else
														{
															STATS::PLAYSTATS_MISSION_CHECKPOINT(func_17(iLocal_99), 0, Global_98781, 0);
															func_5(func_17(iLocal_99), 0, Global_98781, 0, 0);
														}
													}
													func_4();
													func_87(&Global_110289, 0);
													if (func_84(uLocal_94, 16777216))
													{
														func_89(1);
													}
													if (iLocal_99 != -1)
													{
														if (Global_111638.f_9080)
														{
															if (!func_81(0, iLocal_99))
															{
																func_89(1);
															}
														}
													}
												}
												func_3();
												Jump @2692; //curOff = 2364
												func_77(0);
												Jump @2692; //curOff = 2372
												func_89(1);
												Jump @2692; //curOff = 2380
												if (fLocal_110 > (fLocal_102 * fLocal_102))
												{
													if (iLocal_105 != 263)
													{
														func_78(iLocal_105, 1, 0);
														iLocal_105 = 263;
													}
													func_77(10);
												}
												Jump @2692; //curOff = 2421
												func_2();
												if (iLocal_105 != 263)
												{
													func_78(iLocal_105, 0, 0);
												}
												if (iLocal_96 != -1)
												{
													func_40(&iLocal_96);
												}
												if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_101))
												{
													if (func_1(sLocal_101))
													{
														HUD::CLEAR_HELP(true);
													}
												}
												func_77(4);
												Jump @2692; //curOff = 2485
												if ((iLocal_104 % 150) == 0)
												{
													if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
													{
														if (iLocal_106 == 2)
														{
															if (iLocal_106 == 2)
															{
																if (func_82(iLocal_100) && func_81(0, iLocal_99))
																{
																	func_85();
																	if (iLocal_105 != 263)
																	{
																		func_78(iLocal_105, 1, 0);
																	}
																	func_77(0);
																}
															}
														}
														else if (iLocal_106 == 0)
														{
															if (fLocal_110 > (fLocal_102 * fLocal_102))
															{
																if (iLocal_105 != 263)
																{
																	func_78(iLocal_105, 1, 0);
																	iLocal_105 = 263;
																}
																func_77(10);
															}
														}
														else if (iLocal_106 == 1)
														{
															if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
															{
																func_85();
																if (iLocal_105 != 263)
																{
																	func_78(iLocal_105, 1, 0);
																}
																func_77(0);
															}
														}
													}
													else
													{
														func_78(iLocal_105, 1, 0);
													}
												}
												else
												{
													iLocal_104++;
												}
											}
											SYSTEM::WAIT(0);
										}
									}
								}
							}
						}
					}
					default:
						break;
			}
		}
	}
}

bool func_1(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()
{
}

void func_3()
{
}

void func_4()
{
}

void func_5(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_95814))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(sParam0, &Global_95814, false, -1) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, bParam3, bParam4, Global_92921);
	StringCopy(&Global_95814, "", 64);
}

void func_6(int iParam0)
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

void func_7()
{
	vector3 vVar0[24];

	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
	}
}

void func_8(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_9(int iParam0)
{
	if (func_12(iParam0))
	{
		if (func_11(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_10(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_10(bool bParam0)
{
	float fVar0;
	float fVar1;
	void fVar2;
	float fVar3;
	float fVar4;

	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar2 = NETWORK::_0xBA7F0B77D80A4EB7();
		fVar3 = SYSTEM::TO_FLOAT(fVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_11(int iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 2);
}

bool func_12(int iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 1);
}

int func_13()
{
	return 1;
}

void func_14()
{
}

void func_15(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_95814))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_95814, 0, 0, false, true, false);
		StringCopy(&Global_95814, "", 64);
	}
	StringCopy(&Global_95814, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_16(0));
}

bool func_16(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

char* func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
		case 1:
			return "MGDT";
		case 2:
			return "MGGF";
		case 3:
			return "OJHU";
		case 4:
			return "MGOR";
		case 5:
			return "MGPS";
		case 6:
			return "MGRP";
		case 7:
			return "MGSEA";
		case 8:
			return "MGSTR";
		case 9:
			return "MGSC";
		case 10:
			return "MGSP";
		case 11:
			return "MGSRm";
		case 12:
			return "OJTX";
		case 13:
			return "MGTN";
		case 14:
			return "OJTW";
		case 15:
			return "OJDA";
		case 16:
			return "OJDG";
		case 17:
			return "MGTR";
		case 18:
			return "MGYG";
		case 19:
			return "MGCR";
	}
	return "INVALID!";
}

void func_18(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];

	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

void func_19(int* iParam0)
{
	if (!func_12(iParam0))
	{
		func_22(iParam0);
	}
	else
	{
		func_20(iParam0);
	}
}

void func_20(int* iParam0)
{
	func_21(iParam0, 0f);
}

void func_21(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_10(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_22(int* iParam0)
{
	if (!func_12(iParam0))
	{
		func_20(iParam0);
	}
}

void func_23()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_120.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_120))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_120);
	}
}

void func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_32(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0 /*5*/];
		func_27(1, iVar1, 1);
		return;
	}
	iVar2 = func_26(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_25(iVar2);
}

void func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42357[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42357[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
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

int func_26(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0, int iParam1, int iParam2)
{
	func_28(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_28(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_30(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_29();
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

int func_29()
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

bool func_30(int iParam0, int iParam1, int iParam2)
{
	if (func_31(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_31(int iParam0, int iParam1, int iParam2)
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

int func_32(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42383[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42383[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_33()
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
	MISC::CLEAR_BIT(&Global_7356, 25);
	MISC::SET_BIT(&Global_7357, 11);
}

int func_34(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_36(0))
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
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
		if (!func_82(iParam2))
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
			func_35(iParam0, iParam4);
		}
	}
	return 2;
}

void func_35(int iParam0, int iParam1)
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

bool func_36(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_82(iParam0))
	{
		return false;
	}
	return true;
}

void func_37()
{
	if (iLocal_119 == 1)
	{
		if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER"))
		{
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", false);
			PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_MTLION"), true);
		}
	}
}

bool func_38(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_39(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	if (func_50(0))
	{
		return false;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return false;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/] == 1 && Global_42151[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0 /*32*/].f_29)
				{
					return false;
				}
			}
			Global_42151[iVar0 /*32*/].f_5 = 1;
			Global_42151[iVar0 /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			if (Global_42151[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42151[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return false;
}

int func_39(int iParam0)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_40(int iParam0)
{
	int iVar0;

	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_39(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_41(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CONTEXT_CONTROLLER")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_40(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/] = 1;
			Global_42151[iVar0 /*32*/].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0 /*32*/].f_4 = 0;
			Global_42151[iVar0 /*32*/].f_29 = 0;
			Global_42151[iVar0 /*32*/].f_5 = 0;
			Global_42151[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42151[iVar0 /*32*/].f_6 = iParam3;
			Global_42151[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_42151[iVar0 /*32*/].f_7 = 0;
			Global_42151[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_42151[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42151[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42151[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0 /*32*/].f_12 = 0;
				Global_42151[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_42151[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_42(var uParam0)
{
	return true;
}

bool func_43(int iParam0)
{
	func_44();
	return iParam0 == Global_111638.f_2358.f_539.f_4321;
}

void func_44()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_47(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_46(PLAYER::PLAYER_PED_ID());
			if (func_45(iVar0) && (!func_72(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_45(Global_111638.f_2358.f_539.f_4321))
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

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return func_48(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_48(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_49()
{
	return Global_73825;
}

bool func_50(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7356, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return true;
	}
	if (Global_19486.f_1 > 3)
	{
		return true;
	}
	return false;
}

bool func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

bool func_52()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

bool func_53()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_54(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_55(var uParam0, int iParam1)
{
	func_56(uParam0, iParam1);
}

void func_56(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_57()
{
	return true;
}

bool func_58()
{
	int iVar0;
	bool bVar1;

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	if (((iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED")) || iVar0 == joaat("WEAPON_ELECTRIC_FENCE")) || iVar0 == joaat("GADGET_PARACHUTE"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return ((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 69)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 70))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 68))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
	}
	return (((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 24)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 25))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 47))) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}

bool func_59(int iParam0)
{
	int iVar0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_67();
				if (!func_45(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_66()) || Global_110685) || Global_30770) || func_65()) || func_51(8, -1)) || func_64()) || func_63()) || func_62()) || func_53()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_66()) || Global_30770) || func_65()) || func_51(8, -1)) || func_62()) || func_64()) || func_63()) || func_53()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_66()) || Global_110685) || Global_30770) || func_65()) || func_51(8, -1)) || func_62()) || func_64()) || func_63()) || func_53()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_66()) || Global_110685) || Global_30770) || func_65()) || func_51(8, -1)) || func_64()) || func_63()) || func_53()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_66() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_51(8, -1)) || func_53()) || func_61()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_51(8, -1) || func_64()) || func_63()) || func_61()) || func_60())
						{
							return false;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return false;
						}
						break;
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_66()) || Global_30770) || func_65()) || func_51(8, -1)) || func_63()) || func_62()) || func_53()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_66()) || func_63()) || Global_110685) || Global_30770) || func_65()) || Global_42596) || func_51(8, -1)) || func_62()) || func_61()) || func_53()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_66()) || Global_110685) || Global_30770) || func_65()) || func_51(8, -1)) || func_62()) || func_61()) || func_64()) || func_63()) || func_53())
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

bool func_60()
{
	return Global_98783.f_1;
}

bool func_61()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_62()
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

bool func_63()
{
	return Global_98796.f_346 > 0;
}

bool func_64()
{
	return Global_98796.f_345 > 0;
}

bool func_65()
{
	return Global_1312877;
}

bool func_66()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

var func_67()
{
	func_44();
	return Global_111638.f_2358.f_539.f_4321;
}

bool func_68()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("STRIPPERHOME")) > 0)
	{
		return true;
	}
	return false;
}

var func_69()
{
	return Global_94576;
}

bool func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			if (func_72(6) || func_72(7))
			{
				return true;
			}
			else
			{
				return func_70(3);
			}
			break;
		case 2:
			return true;
		case 3:
			if (func_82(5))
			{
				if (func_59(4))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_71(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return false;
	}
	return HUD::DOES_BLIP_EXIST(Global_31146[iVar0 /*23*/].f_19);
}

bool func_72(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_73()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_120))
	{
		Local_120 = OBJECT::CREATE_OBJECT(Local_120.f_1, Local_120.f_2, true, true, false);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_120, Local_120.f_2, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_120, Local_120.f_5, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_120, true);
	}
}

bool func_74()
{
	if (!STREAMING::IS_MODEL_VALID(Local_120.f_1))
	{
		return false;
	}
	return STREAMING::HAS_MODEL_LOADED(Local_120.f_1);
}

void func_75()
{
	if (!STREAMING::IS_MODEL_VALID(Local_120.f_1))
	{
		return;
	}
	STREAMING::REQUEST_MODEL(Local_120.f_1);
}

void func_76(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_77(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_78(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = MISC::IS_BIT_SET(Global_31146[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != MISC::IS_BIT_SET(Global_31146[iVar0 /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 18);
		if (Global_31143 == 1)
		{
			Global_31144 = 1;
		}
		Global_31143 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_31146[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_31146[iVar0 /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_31146[iVar0 /*23*/].f_11), 15);
	}
	if (!MISC::IS_BIT_SET(Global_31146[iVar0 /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_31146[iVar0 /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_31146[iVar0 /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}
}

bool func_79()
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return true;
		}
	}
	return false;
}

bool func_80()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_81(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam0 == 11 || iParam0 == -1)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	bVar0 = MISC::IS_BIT_SET(Global_111638.f_9080.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

int func_82(int iParam0)
{
	return func_83(iParam0, Global_41431);
}

int func_83(int iParam0, int iParam1)
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

bool func_84(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_85()
{
	StringCopy(&cLocal_53, "Yoga", 64);
	sLocal_101 = "PLAY_YOGA";
	iLocal_99 = 18;
	fLocal_117 = 2.5f;
	fLocal_102 = 20f;
	iLocal_97 = 35000;
	iLocal_119 = func_86();
	if (iLocal_119 == 0)
	{
		iLocal_105 = 110;
		Local_120.f_2 = { -791.0036f, 186.3552f, 71.8295f };
		Local_120.f_5 = { 0f, 0f, -87.1403f };
		Local_120.f_1 = joaat("PROP_YOGA_MAT_03");
	}
	else if (iLocal_119 == 1)
	{
		iLocal_105 = 111;
		Local_120.f_2 = { 2861.47f, 5945.9f, 357.06f };
		Local_120.f_5 = { 0f, -0.5f, 70f };
		Local_120.f_1 = joaat("PROP_YOGA_MAT_03");
	}
	iLocal_118 = 0;
}

int func_86()
{
	vector3 vVar0;
	vector3 vVar3[2];
	float fVar10[2];

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true) };
		vVar3[0 /*3*/] = { -790.906f, 186.293f, 71.835f };
		vVar3[1 /*3*/] = { 2862.15f, 5945.49f, 357.11f };
		fVar10[0] = SYSTEM::VDIST2(vVar0, vVar3[0 /*3*/]);
		fVar10[1] = SYSTEM::VDIST2(vVar0, vVar3[1 /*3*/]);
		if (fVar10[0] < fVar10[1])
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 2;
}

void func_87(var uParam0, int iParam1)
{
	func_88(uParam0, iParam1);
}

void func_88(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_89(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_78(iLocal_105, 0, 0);
		}
	}
	func_40(&iLocal_96);
	if (func_84(uLocal_94, 2))
	{
		func_4();
		func_87(&uLocal_94, 2);
		func_6(&iLocal_98);
	}
	iLocal_98 = -1;
	func_90();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_90()
{
	func_87(&uLocal_94, 4);
	func_91();
	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_52))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_52, 3);
	}
	if (!MISC::IS_STRING_NULL(&cLocal_69))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_69) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_69);
		}
	}
}

void func_91()
{
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER"))
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", true);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_MTLION"), false);
	}
}

