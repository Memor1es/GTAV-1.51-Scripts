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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_64 = false;
	bool bLocal_65 = false;
	bool bLocal_66 = false;
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
	bool bLocal_77 = false;
	int iLocal_78 = 0;
	bool bLocal_79 = false;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	bool bLocal_94 = false;
	float fLocal_95 = 0f;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 1132396544;
	var uLocal_101 = 1132396544;
	var uLocal_102 = 1132396544;
	var uLocal_103 = 0;
	var uLocal_104 = -1082130432;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 8;
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
	var uLocal_164 = -1;
	var uLocal_165 = 1092616192;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	struct<21> Local_169 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_190[15];
	bool bLocal_341 = false;
	float fLocal_342 = 0f;
	struct<2> Local_343 = { 0, 16 } ;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	struct<414> Local_410 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = -1;
	var uLocal_829 = -1;
	var uLocal_830 = -1;
	var uLocal_831 = -1;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	int iLocal_840 = 0;
	vector3 vLocal_841[1] = {{ 0f, 0f, 0f } };
	int iLocal_845 = 0;
	int iLocal_846 = 0;
	int iLocal_847 = 0;
	int iLocal_848 = 0;
	var uLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	var uLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	int iLocal_858 = 0;
	bool bLocal_859 = false;
	bool bLocal_860 = false;
	bool bLocal_861 = false;
	bool bLocal_862 = false;
	bool bLocal_863 = false;
	bool bLocal_864 = false;
	bool bLocal_865 = false;
	bool bLocal_866 = false;
	bool bLocal_867 = false;
	vector3 vLocal_868 = { 0f, 0f, 0f };
	vector3 vLocal_871 = { 0f, 0f, 0f };
	vector3 vLocal_874 = { 0f, 0f, 0f };
	vector3 vLocal_877 = { 0f, 0f, 0f };
	vector3 vLocal_880 = { 0f, 0f, 0f };
	vector3 vLocal_883 = { 0f, 0f, 0f };
	vector3 vLocal_886 = { 0f, 0f, 0f };
	vector3 vLocal_889 = { 0f, 0f, 0f };
	vector3 vLocal_892 = { 0f, 0f, 0f };
	float fLocal_895 = 0f;
	vector3 vLocal_896[24] = "";
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	struct<6> Local_902 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_908[64] = "";
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	char cLocal_924[64] = "";
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	char cLocal_940[64] = "";
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	char cLocal_956[64] = "";
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	char cLocal_972[64] = "";
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	char cLocal_988[64] = "";
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	char cLocal_1004[64] = "";
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	char cLocal_1020[64] = "";
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	int iLocal_1037 = 0;
	bool bLocal_1038 = false;
	struct<28> Local_1039 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 5;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	int iLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 1097859072;
	var uLocal_1114 = 1500;
	var uLocal_1115 = 45;
	var uLocal_1116 = 1103626240;
	var uLocal_1117 = 5;
	int iLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	int iLocal_1128 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	bLocal_77 = HUD::_GET_LEVEL_BLIP_SPRITE();
	iLocal_78 = HUD::_GET_WAYPOINT_BLIP_SPRITE();
	vLocal_83 = { 500f, 500f, 500f };
	iLocal_840 = joaat("G_M_Y_MEXGOON_03");
	iLocal_852 = 1;
	iLocal_853 = -1;
	iLocal_858 = -1;
	bLocal_859 = true;
	vLocal_868 = { -1612.235f, 189.1934f, 58.9435f };
	vLocal_871 = { -1612.457f, 184.5166f, 58.7712f };
	vLocal_874 = { 32.60266f, -1243.837f, 28.45076f };
	vLocal_877 = { 33.2419f, -1234.385f, 28.2953f };
	vLocal_880 = { -628.1456f, -760.3765f, 25.106f };
	vLocal_883 = { -584.7739f, -779.0701f, 24.0178f };
	vLocal_886 = { 47.56787f, -1234.685f, 28.29707f };
	vLocal_889 = { -21.32591f, -1235.549f, 32.47597f };
	vLocal_892 = { 37.51834f, -1239.021f, 28.40267f };
	fLocal_895 = 33.75f;
	StringCopy(&cLocal_908, "amb@world_human_hang_out_street@male_a@enter", 64);
	StringCopy(&cLocal_924, "amb@world_human_hang_out_street@male_a@base", 64);
	StringCopy(&cLocal_940, "amb@world_human_hang_out_street@male_a@idle_a", 64);
	StringCopy(&cLocal_956, "amb@world_human_hang_out_street@male_a@exit", 64);
	StringCopy(&cLocal_972, "amb@world_human_hang_out_street@female_arm_side@enter", 64);
	StringCopy(&cLocal_988, "amb@world_human_hang_out_street@female_arm_side@base", 64);
	StringCopy(&cLocal_1004, "amb@world_human_hang_out_street@female_arm_side@idle_a", 64);
	StringCopy(&cLocal_1020, "amb@world_human_hang_out_street@female_arm_side@exit", 64);
	if (func_438(vLocal_877, 0f, 0f, 0f, 0))
	{
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_437(2);
		func_436();
	}
	MISC::SET_MISSION_FLAG(true);
	func_423();
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_410.f_2))
		{
			func_9();
		}
		else
		{
			func_1(&Local_410);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	func_7(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;

	iVar1 = func_3(PLAYER::PLAYER_PED_ID());
	if (iVar1 == 0)
	{
		iVar0 = joaat("SP0_DIST_DRIVING_CAR");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("SP2_DIST_DRIVING_CAR");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("SP1_DIST_DRIVING_CAR");
	}
	else
	{
		iVar0 = joaat("SP0_DIST_DRIVING_CAR");
	}
	return iVar0;
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)
{
	if (func_6(iParam0))
	{
		return func_5(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_5(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_6(int iParam0)
{
	return iParam0 < 3;
}

void func_7(var uParam0)
{
	int iVar0;
	char cVar1[64];

	iVar0 = func_3(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_8(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_8(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

void func_9()
{
	if (func_422(&Local_410))
	{
		func_421(&Local_410);
		if (func_420(&Local_410, 0))
		{
			func_418();
		}
	}
	else
	{
		func_417(&Local_410);
		if ((Local_410.f_410 >= 5 && Local_410.f_410 <= 9) || Local_410.f_410 >= 22)
		{
			func_383(&Local_410, &uLocal_1111);
			func_382(&Local_410);
		}
		func_381(&Local_410, &uLocal_855, 0);
		if (Local_410.f_410 > 5 && !MISC::IS_BIT_SET(iLocal_854, 0))
		{
			Local_410.f_17 = { vLocal_877 };
			MISC::SET_BIT(&iLocal_854, 0);
		}
		if (Local_410.f_410 >= 5 && Local_410.f_410 < 10)
		{
			func_380(&Local_410);
		}
		if (Local_410.f_410 >= 2)
		{
			if (!func_379(&Local_410))
			{
				func_348();
			}
			else
			{
				func_340(&Local_410, "Taxi Not Driveable", func_347(&Local_410));
			}
		}
		if (Local_410.f_410 >= 12 && Local_410.f_410 < 27)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_851))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_851, false))
				{
					func_340(&Local_410, "Player killed his new booty call", 9);
				}
			}
			if (func_339(&Local_410, iLocal_850, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_850, false))
				{
					VEHICLE::EXPLODE_VEHICLE(iLocal_850, true, false);
					func_340(&Local_410, "Player exploded the broke down car", 9);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_851))
			{
				if (func_338(iLocal_851, 1) > 50f)
				{
					func_340(&Local_410, "Player abandoned the girl", 9);
				}
			}
		}
		if (Local_410.f_410 == 9)
		{
			func_314(&Local_410, 0, 1);
		}
		switch (Local_410.f_410)
		{
			case 0:
				func_311();
				func_310(&Local_410, 16, 4f, 0);
				func_308(&Local_410, vLocal_868, vLocal_871, "TaxiAlonzo", iLocal_840, 196.3547f, 15f);
				func_307(&Local_410);
				func_306(&Local_410, 1);
				break;
			case 1:
				if (func_304())
				{
					func_303();
					func_302(&(vLocal_841[0 /*3*/]), "TAXI_SC_KO", 100);
					func_301(&Local_410, &vLocal_841);
					func_300(&Local_410);
					func_280();
					Local_410.f_14 = { vLocal_868 };
					func_306(&Local_410, 3);
				}
				break;
			case 3:
				if (func_273(&Local_410, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_410.f_3, false))
					{
						PED::SET_PED_MONEY(Local_410.f_3, 200);
						PED::SET_PED_COMPONENT_VARIATION(Local_410.f_3, 0, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_410.f_3, 3, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_410.f_3, 4, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_410.f_3, 8, 0, 1, 0);
					}
					func_272(&Local_410, 1, 0);
					func_306(&Local_410, 5);
				}
				break;
			case 5:
				if (func_251(&Local_410, 0, 1109393408 /* Float: 40f */))
				{
					func_306(&Local_410, 15);
				}
				break;
			case 15:
				if (func_250(&Local_410))
				{
					func_249();
					func_245(&Local_410, 9, 1, 0, 0);
					func_244(&Local_410);
					func_243();
					func_306(&Local_410, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_410.f_4, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_410.f_2, Local_410.f_4, false))
					{
						func_241(&Local_410);
						func_306(&Local_410, 9);
					}
				}
				break;
			case 9:
				if (!bLocal_865)
				{
					if ((func_240(&Local_410, 0) || func_240(&Local_410, 1)) || func_239(&Local_410, 1))
					{
						bLocal_865 = true;
					}
				}
				func_236();
				func_231();
				if (func_201(&Local_410, 9f, 1097859072 /* Float: 15f */, 1117782016 /* Float: 80f */))
				{
					HUD::REMOVE_BLIP(&(Local_410.f_9));
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
					PED::SET_CREATE_RANDOM_COPS(false);
					MISC::CLEAR_AREA_OF_COPS(func_200(PLAYER::PLAYER_ID()), 50f, 0);
					PED::SET_PED_CONFIG_FLAG(Local_410.f_3, 42, true);
					func_306(&Local_410, 10);
				}
				if (iLocal_853 >= 2)
				{
					if (!bLocal_863 && ((((((PED::IS_PED_INJURED(iLocal_851) || ENTITY::IS_ENTITY_DEAD(iLocal_850, false)) || (!ENTITY::IS_ENTITY_DEAD(iLocal_851, false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_851))) || (!ENTITY::IS_ENTITY_DEAD(iLocal_850, false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_850))) || (!ENTITY::IS_ENTITY_DEAD(iLocal_851, false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_851, 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(iLocal_850, false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_850, 0, 2))) || ((!ENTITY::IS_ENTITY_DEAD(iLocal_851, false) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && func_338(iLocal_851, 1) < 1f)))
					{
						if ((!ENTITY::IS_ENTITY_DEAD(iLocal_850, false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_850)) || (!ENTITY::IS_ENTITY_DEAD(iLocal_850, false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_850, 0, 2)))
						{
							VEHICLE::EXPLODE_VEHICLE(iLocal_850, true, false);
						}
						if (!PED::IS_PED_INJURED(iLocal_851))
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_851, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
							PED::SET_PED_KEEP_TASK(iLocal_851, true);
						}
						if ((!ENTITY::IS_ENTITY_DEAD(iLocal_851, false) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && func_338(iLocal_851, 1) < 1f)
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_848);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_848);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_848);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_851, iLocal_848);
							PED::SET_PED_KEEP_TASK(iLocal_851, true);
						}
						func_340(&Local_410, "Aggro Heard Shot", 8);
						bLocal_863 = true;
					}
				}
				break;
			case 10:
				if (func_177())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
					iLocal_1110 = func_176(Local_410.f_3, 0, 0);
					func_310(&Local_410, 0, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_851, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_851);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_851, PLAYER::PLAYER_PED_ID(), 0);
						ENTITY::SET_ENTITY_HEALTH(iLocal_851, 115, 0);
					}
					iLocal_856 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
					iLocal_857 = ENTITY::GET_ENTITY_HEALTH(Local_410.f_3);
					AUDIO::START_AUDIO_SCENE("TAXI_GOT_U_NOW");
					func_306(&Local_410, 11);
				}
				break;
			case 11:
				PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 11);
				if (ENTITY::IS_ENTITY_DEAD(Local_410.f_3, false) || ((!ENTITY::IS_ENTITY_DEAD(Local_410.f_3, false) && PED::IS_PED_FLEEING(Local_410.f_3)) && func_175(Local_410.f_3, vLocal_877, 1) > 25f))
				{
					HUD::CLEAR_THIS_PRINT("TAXI_OBJ_GYN");
					if (HUD::DOES_BLIP_EXIST(Local_410.f_9))
					{
						HUD::REMOVE_BLIP(&(Local_410.f_9));
					}
					if (HUD::DOES_BLIP_EXIST(Local_410.f_8))
					{
						HUD::REMOVE_BLIP(&(Local_410.f_8));
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_1110))
					{
						HUD::REMOVE_BLIP(&iLocal_1110);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_851, false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_410.f_4, false))
						{
							AUDIO::STOP_AUDIO_SCENE("TAXI_GOT_U_NOW");
							WEAPON::GET_CURRENT_PED_WEAPON(Local_410.f_2, &uLocal_849, true);
							if (func_174(&uLocal_849) || !ENTITY::IS_ENTITY_DEAD(Local_410.f_3, false))
							{
								bLocal_859 = true;
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_848);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_848);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_848);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_851, iLocal_848);
								func_245(&Local_410, 126, 1, 0, 0);
								Local_410.f_17 = { vLocal_880 };
								func_310(&Local_410, 19, 0, 0);
								func_306(&Local_410, 12);
							}
							else
							{
								bLocal_859 = false;
								TASK::TASK_SMART_FLEE_PED(iLocal_851, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
								PED::SET_PED_KEEP_TASK(iLocal_851, true);
								func_245(&Local_410, 127, 1, 0, 1);
								func_306(&Local_410, 27);
							}
						}
					}
					else
					{
						func_306(&Local_410, 27);
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vLocal_886, vLocal_889, fLocal_895, false, true, 0))
				{
					if ((ENTITY::GET_ENTITY_HEALTH(Local_410.f_3) == PED::GET_PED_MAX_HEALTH(Local_410.f_3) && !func_173()) && !bLocal_861)
					{
						func_245(&Local_410, 123, 1, 0, 0);
						bLocal_861 = true;
					}
					if (!bLocal_860 && func_171(&Local_410, 0) > 1.5f)
					{
						func_170(&(Local_410.f_3));
						PED::SET_PED_CONFIG_FLAG(Local_410.f_3, 314, false);
						bLocal_860 = true;
					}
					if (func_171(&Local_410, 0) > 10f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_851, false))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_851, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_848);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_848);
							TASK::TASK_PLAY_ANIM(0, "misscommon@response", "give_me_a_break", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "misscommon@response", "damn", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_848);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_851, iLocal_848);
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								iLocal_856 = (iLocal_856 - ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()));
								iLocal_857 = (iLocal_857 - ENTITY::GET_ENTITY_HEALTH(Local_410.f_3));
								if (iLocal_856 < iLocal_857)
								{
									func_245(&Local_410, 125, 1, 0, 0);
								}
								else
								{
									func_245(&Local_410, 124, 1, 0, 0);
								}
								iLocal_856 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
								iLocal_857 = ENTITY::GET_ENTITY_HEALTH(Local_410.f_3);
							}
						}
						else if (!bLocal_862)
						{
							func_168();
							ENTITY::SET_ENTITY_HEALTH(Local_410.f_3, PED::GET_PED_MAX_HEALTH(Local_410.f_3), 0);
							func_245(&Local_410, 128, 1, 0, 0);
							bLocal_862 = true;
							bLocal_859 = false;
						}
						func_310(&Local_410, 0, 0, 0);
					}
					else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
				}
				else if (!PED::IS_PED_FLEEING(Local_410.f_3))
				{
					if (bLocal_860)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_410.f_3);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_848);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_848);
						if (PED::IS_PED_INJURED(iLocal_851))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_851, false), 3f, 20000, 40000f, 0.5f);
							TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_851, false), 0);
						}
						else
						{
							TASK::TASK_GO_TO_ENTITY(0, iLocal_851, 20000, 3.5f, 1f, 2f, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_851, 0);
						}
						TASK::CLOSE_SEQUENCE_TASK(iLocal_848);
						TASK::TASK_PERFORM_SEQUENCE(Local_410.f_3, iLocal_848);
						if (!PED::IS_PED_INJURED(iLocal_851))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_851, Local_410.f_3, 0);
						}
						SYSTEM::SETTIMERA(0);
						bLocal_860 = false;
					}
					if (!PED::IS_PED_INJURED(iLocal_851))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_410.f_3, true), ENTITY::GET_ENTITY_COORDS(iLocal_851, false)) < 25f && (TASK::GET_SCRIPT_TASK_STATUS(Local_410.f_3, 264387021) != 1 || TASK::GET_SCRIPT_TASK_STATUS(Local_410.f_3, 264387021) != 0))
						{
							TASK::TASK_CHAT_TO_PED(iLocal_851, Local_410.f_3, 16, 0f, 0f, 0f, 0f, 0f);
							TASK::TASK_CHAT_TO_PED(Local_410.f_3, iLocal_851, 16, 0f, 0f, 0f, 0f, 0f);
						}
					}
					if (SYSTEM::TIMERA() > 30000)
					{
						func_340(&Local_410, "Player abandoned passenger", 8);
					}
				}
				if (func_166(Local_410.f_17, 1) > 250f && HUD::DOES_BLIP_EXIST(iLocal_1110))
				{
					func_340(&Local_410, "Player abandoned passenger", 8);
				}
				break;
			case 12:
				if (!func_173() && func_171(&Local_410, 19) > 2f)
				{
					Local_410.f_8 = func_165(iLocal_851, 0, 0);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_410.f_8, "TX_BLIP_GYN_TG");
					func_245(&Local_410, 11, 1, 0, 0);
					PED::SET_CREATE_RANDOM_COPS(true);
					func_310(&Local_410, 19, 0, 0);
					func_306(&Local_410, 18);
				}
				break;
			case 18:
				if (func_164(PLAYER::PLAYER_PED_ID(), iLocal_851, 1) < 3f && !func_163())
				{
					func_161();
					Local_410.f_115 = 1;
					func_159(&(Local_410.f_81), 67108864);
					func_306(&Local_410, 19);
				}
				else if (!PED::IS_PED_INJURED(iLocal_851) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_851, PLAYER::PLAYER_PED_ID(), 0);
				}
				break;
			case 19:
				if (func_155())
				{
					if (HUD::DOES_BLIP_EXIST(Local_410.f_8))
					{
						HUD::REMOVE_BLIP(&(Local_410.f_8));
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_410.f_3));
					func_306(&Local_410, 21);
				}
				break;
			case 21:
				if (!Local_410.f_141 && !func_438(Local_410.f_29, vLocal_883, 0))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_851, false) && !func_173())
					{
						Local_410.f_3 = iLocal_851;
						Local_410.f_29 = { vLocal_883 };
						Local_410.f_17 = { vLocal_880 };
						if (func_154(Local_410.f_98, 4))
						{
							func_159(&(Local_410.f_98), 4);
						}
						if (func_154(Local_410.f_98, 8))
						{
							func_159(&(Local_410.f_98), 8);
						}
						Local_410.f_86 = 0;
						func_245(&Local_410, 130, 1, 0, 0);
					}
				}
				else if (Local_410.f_141)
				{
					Local_410.f_9 = func_152(vLocal_880, 1);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_410.f_9, "TX_BLIP_GYN_GF");
					func_150();
					func_149(&Local_410, 2, 0);
					func_148(&Local_1039, 5, -1);
					func_306(&Local_410, 22);
				}
				break;
			case 22:
				if (func_201(&Local_410, 1086324736 /* Float: 6f */, 1097859072 /* Float: 15f */, 1117782016 /* Float: 80f */))
				{
					HUD::REMOVE_BLIP(&(Local_410.f_9));
					func_146(&uLocal_1069);
					func_145(&Local_1039, -1, 1);
					func_245(&Local_410, 132, 1, 0, 0);
					func_306(&Local_410, 27);
				}
				break;
			case 27:
				if ((func_134(&Local_410, 1) || func_133(&iLocal_851, 1805844857)) || ENTITY::IS_ENTITY_DEAD(iLocal_851, false))
				{
					if (bLocal_859)
					{
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_848);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_848);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -612.6458f, -777.7148f, 24.27f, 1f, 20000, 0.25f, false, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -608.3197f, -775.0622f, 24.0547f, 1f, 20000, 0.25f, false, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -589.0419f, -775.1888f, 24.0172f, 1f, 20000, 0.25f, false, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_410.f_29, 1f, 20000, 0.25f, false, 40000f);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_848);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_851, iLocal_848);
						PED::SET_PED_KEEP_TASK(iLocal_851, true);
						func_132(&Local_410, 0);
						func_112(8, 1, -1);
					}
					func_110(&Local_410);
					func_109();
					func_306(&Local_410, 29);
				}
				break;
			case 29:
				if (func_74(&Local_410, &iLocal_1118))
				{
					func_10(1, &Local_410, 1);
					func_306(&Local_410, 30);
				}
				break;
			case 30:
				func_436();
				break;
		}
	}
}

void func_10(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		func_48(iParam1);
		if (!PED::IS_PED_INJURED(iParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(iParam1->f_3, 317, true);
		}
	}
	else
	{
		func_46(1, 0);
	}
	func_11(iParam1, bParam2);
}

void func_11(int iParam0, bool bParam1)
{
	func_421(iParam0);
	if (func_173())
	{
		func_161();
	}
	func_44();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	func_39(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iParam0->f_4, false);
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(iParam0->f_4);
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(iParam0->f_4);
	}
	func_37(iParam0->f_14, 1);
	func_35(iParam0->f_14, 1, 1114636288 /* Float: 60f */);
	func_34(&(iParam0->f_244), 3);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
	if (func_31())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(true);
	func_21(0, 1, 1, 0, 0, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	if (CAM::DOES_CAM_EXIST(*iParam0))
	{
		CAM::DESTROY_CAM(*iParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	if (func_154(Global_111638.f_19092, 4))
	{
		func_159(&(Global_111638.f_19092), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_20(), false);
	}
	if (bParam1)
	{
		func_19(iParam0);
	}
	func_18(iParam0);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@towingcome_here");
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_16(iParam0->f_411);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_12(&iLocal_90) * 1000f)), 12, 0);
}

float func_12(int iParam0)
{
	if (func_15(iParam0))
	{
		if (func_14(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_13(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

float func_13(bool bParam0)
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

bool func_14(int iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 2);
}

bool func_15(int iParam0)
{
	return MISC::IS_BIT_SET(*iParam0, 1);
}

void func_16(int iParam0)
{
	var uVar0;

	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_17(iParam0)}, 6);
		if (!MISC::IS_STRING_NULL(&uVar0))
		{
		}
	}
}

struct<8> func_17(int iParam0)
{
	struct<8> Var0;

	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_18(int iParam0)
{
	VEHICLE::_REMOVE_SPEED_ZONE(iParam0->f_51[0]);
}

void func_19(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_3, false))
			{
				PED::RESET_PED_LAST_VEHICLE(iParam0->f_3);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_3, false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iParam0->f_413, joaat("PLAYER"));
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				TASK::STOP_ANIM_TASK(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				TASK::STOP_ANIM_TASK(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				TASK::STOP_ANIM_TASK(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				TASK::STOP_ANIM_TASK(iParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_3));
		}
	}
}

int func_20()
{
	return joaat("TAXI");
}

void func_21(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_30(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_29())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_28(1, bParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_30(0);
		HUD::THEFEED_RESUME();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_28(0, bParam3, bParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_26(PLAYER::PLAYER_ID())) && !func_23(PLAYER::PLAYER_ID(), 0)) && !func_22()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_26(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_76620 = 0;
	}
}

bool func_22()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_18, 14);
}

bool func_23(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_24(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0 /*876*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_24(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

int func_25()
{
	return Global_1312745;
}

bool func_26(int iParam0)
{
	if (func_23(iParam0, 0))
	{
		return true;
	}
	if (func_27())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return true;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 2))
	{
		return true;
	}
	return false;
}

bool func_27()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_28(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && bParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_29()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_30(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 13);
	}
}

bool func_31()
{
	if (!func_33() && !func_32())
	{
		if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			return true;
		}
	}
	return false;
}

bool func_32()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("APPCAMERA")) > 0)
	{
		return true;
	}
	return false;
}

bool func_33()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("APPINTERNET")) > 0)
	{
		return true;
	}
	return false;
}

void func_34(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_35(vector3 vParam0, bool bParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_36(vParam0, 1f, -fParam4, -fParam4, -fParam4) };
	vVar3 = { func_36(vParam0, 1f, fParam4, fParam4, fParam4) };
	vVar0.f_2 = (vVar0.z - 22f);
	vVar3.f_2 = (vVar3.z + 22f);
	if (!bParam3)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar0, vVar3, false, true);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar0, vVar3, 1);
		PED::CLEAR_PED_NON_CREATION_AREA();
	}
}

Vector3 func_36(vector3 vParam0, float fParam3, struct<2> Param4, var uParam6)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;

	fVar3 = fParam3;
	fVar4 = SYSTEM::COS(fVar3);
	fVar5 = SYSTEM::SIN(fVar3);
	vVar0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	vVar0.f_1 = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	vVar6 = { vParam0 + vVar0 };
	return vVar6;
}

void func_37(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!func_438(vParam0, func_38(), 0))
	{
		vVar0 = { func_36(vParam0, 1f, -30f, -30f, -10f) };
		vVar3 = { func_36(vParam0, 1f, 30f, 30f, 10f) };
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vVar0, vVar3, bParam3, true);
	}
}

Vector3 func_38()
{
	vector3 vVar0;

	return vVar0;
}

void func_39(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_42())
		{
			func_40(1, 1);
		}
		else
		{
			func_40(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_29())
	{
		Global_19486.f_1 = 3;
	}
}

void func_40(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_41(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19423);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
}

bool func_41(int iParam0)
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

bool func_42()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_43()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_44()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_95677[iVar0 /*17*/] && !Global_95677[iVar0 /*17*/].f_1)
		{
			if (Global_95677[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_95677[iVar0 /*17*/].f_5 != 88 && Global_95677[iVar0 /*17*/].f_5 != 89) && Global_95677[iVar0 /*17*/].f_5 != 92)
				{
					func_45(Global_95677[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_45(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92729[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92729[iParam0 /*2*/] = 0;
	}
}

void func_46(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_111638.f_19092.f_22[0]++;
			func_47("Fares Completed ++ = ", Global_111638.f_19092.f_22[0]);
			break;
		case 1:
			Global_111638.f_19092.f_22[1]++;
			func_47("Fares Failed ++ = ", Global_111638.f_19092.f_22[1]);
			break;
		case 2:
			Global_111638.f_19092.f_22[2]++;
			func_47("Fares Accepted ++ ", Global_111638.f_19092.f_22[2]);
			break;
		case 3:
			Global_111638.f_19092.f_22[3]++;
			func_47("Fares Expired ++ ", Global_111638.f_19092.f_22[3]);
			break;
		case 13:
			Global_111638.f_19092.f_22[13]++;
			func_47("Passengers run ++ = ", Global_111638.f_19092.f_22[13]);
			break;
		case 14:
			Global_111638.f_19092.f_22[14]++;
			func_47("Passenger Forced to Pay ++ = ", Global_111638.f_19092.f_22[14]);
			break;
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_111638.f_19092.f_22[4])
				{
					Global_111638.f_19092.f_22[4] = iParam1;
					func_47("This distance ", iParam1);
					func_47(" is longer than current best", Global_111638.f_19092.f_22[4]);
				}
				else
				{
					func_47("Longest Distance Not Beat ", Global_111638.f_19092.f_22[4]);
				}
			}
			break;
		case 5:
			Global_111638.f_19092.f_22[5] = (Global_111638.f_19092.f_22[5] + iParam1);
			func_47("Total Distance w/ Passenger = ", Global_111638.f_19092.f_22[5]);
			break;
		case 6:
			if (iParam1 == 0)
			{
				Global_111638.f_19092.f_22[6]++;
			}
			else
			{
				Global_111638.f_19092.f_22[6] = (Global_111638.f_19092.f_22[6] + iParam1);
			}
			func_47("Wanted Levels ++ = ", Global_111638.f_19092.f_22[6]);
			break;
		case 7:
			if (iParam1 > 0)
			{
				Global_111638.f_19092.f_22[7] = (Global_111638.f_19092.f_22[7] + iParam1);
			}
			else
			{
				Global_111638.f_19092.f_22[7]++;
			}
			func_47("Wanted Levels Lost = ", Global_111638.f_19092.f_22[7]);
			break;
		case 8:
			Global_111638.f_19092.f_22[8]++;
			func_47("Taxis wrecked ++ = ", Global_111638.f_19092.f_22[8]);
			break;
		case 9:
			Global_111638.f_19092.f_22[9]++;
			func_47("Horn Honked ++ = ", Global_111638.f_19092.f_22[9]);
			break;
		case 10:
			Global_111638.f_19092.f_22[10] = (Global_111638.f_19092.f_22[10] + iParam1);
			func_47("Total Money Earned = ", Global_111638.f_19092.f_22[10]);
			break;
		case 11:
			Global_111638.f_19092.f_22[11] = (Global_111638.f_19092.f_22[11] + iParam1);
			func_47("Total Tips Earned = ", Global_111638.f_19092.f_22[11]);
			break;
		case 12:
			if (iParam1 > Global_111638.f_19092.f_22[12])
			{
				Global_111638.f_19092.f_22[12] = iParam1;
				func_47("New Highest Tip = ", Global_111638.f_19092.f_22[12]);
			}
			else
			{
				func_47("Highest Tip Not Reached = ", Global_111638.f_19092.f_22[12]);
			}
			break;
	}
}

void func_47(char* sParam0, int iParam1)
{
}

void func_48(int iParam0)
{
	func_46(0, 0);
	if (iParam0->f_411 != 9)
	{
		func_437(1);
		func_60(15, 1);
	}
	func_58(&(Global_111638.f_19092), 1024);
	if (!func_154(Global_111638.f_19092, 64))
	{
		func_49(func_56(func_57(iParam0)), 0, 0);
	}
}

void func_49(int iParam0, int iParam1, int iParam2)
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
		func_55((891 + iParam0), 1, -1, 1);
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
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_50();
	}
}

void func_50()
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
	int iVar9;

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
			if (!MISC::IS_BIT_SET(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					STATS::_UPDATE_STAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_111361, 0);
					MISC::SET_BIT(&(Global_111638.f_10189.f_3856), 14);
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
		iVar9 = Global_111364;
	}
	else
	{
		iVar9 = Global_111378;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_111374, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_111357, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_111375, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_111358, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_111376, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_111359, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_111377, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_111360, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_111364, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_111380 + Global_111379), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_111363 + Global_111362), true);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + iVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_111638.f_10189.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_111381, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_111382, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_111383, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111638.f_10189.f_3853))
	{
		func_54(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76622)
		{
			if (func_53() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_51();
				}
			}
		}
	}
}

int func_51()
{
	if (func_52(0))
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

bool func_52(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

int func_53()
{
	return Global_30768;
}

bool func_54(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 78)
	{
		return false;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return false;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return false;
}

bool func_55(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
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

	if (iParam2 == -1)
	{
		iParam2 = func_25();
	}
	bVar0 = false;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar23, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar24, bParam1, iVar1, bParam3);
	}
	return bVar0;
}

int func_56(int iParam0)
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

int func_57(int iParam0)
{
	return iParam0->f_411;
}

void func_58(var uParam0, int iParam1)
{
	func_59(uParam0, iParam1);
}

void func_59(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_60(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_61(iParam0, iParam1);
}

int func_61(int iParam0, int iParam1)
{
	if (func_73(14) && !func_72(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_71(&Global_4270065))
	{
		if (func_69(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_62(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

bool func_62(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return false;
	}
	if (func_73(14) && !func_72(iParam1))
	{
		return false;
	}
	if (func_69(uParam0, iParam1))
	{
		return false;
	}
	if (func_68(uParam0) < 0f)
	{
		func_67(uParam0, 0);
	}
	func_65(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_63(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_63(var uParam0, int iParam1)
{
	int iVar0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_73(14) && !func_72(iParam1))
	{
		return 0;
	}
	if (func_69(uParam0, iParam1))
	{
		return 0;
	}
	if (func_68(uParam0) < 0f)
	{
		func_67(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_64(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_64(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_65(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_66(uParam0, iVar0);
		iVar0++;
	}
	func_67(uParam0, (Global_4270064 - 0.5f));
}

void func_66(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_67(var uParam0, float fParam1)
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

float func_68(var uParam0)
{
	return uParam0->f_80;
}

bool func_69(var uParam0, int iParam1)
{
	return func_70(uParam0, iParam1) != -1;
}

int func_70(var uParam0, int iParam1)
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

bool func_71(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_72(int iParam0)
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

bool func_73(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_74(int iParam0, int iParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_173() && func_171(iParam0, 0) > 1f)
			{
				if (func_31())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				func_108(iParam0);
				func_159(&(Global_111638.f_19092), 4096);
				func_105(iParam1, "TAXI_FARE_TITLE", iParam0->f_50, iParam0->f_56, ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105), iParam0->f_105, func_107(iParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_104(1);
				iLocal_168 = 6;
			}
			break;
		case 6:
			if (!func_98(iParam1, 0))
			{
				func_75(iParam0);
				func_310(iParam0, 0, 0, 0);
				func_104(0);
				iLocal_168 = 7;
				return true;
			}
			break;
	}
	return false;
}

void func_75(int iParam0)
{
	int iVar0;

	iVar0 = ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105);
	if (iVar0 > 0)
	{
		func_76(func_96(), 21, iVar0, 0, 0);
		func_46(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_76(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (func_95(iParam0) == 3)
	{
		return;
	}
	if (func_95(iParam0) == 4)
	{
		return;
	}
	func_77(func_95(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
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
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, true);
	}
}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_94();
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
					func_93(99, 1);
					func_92(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_92(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_92(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_91(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_86(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
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
							func_92(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_92(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_92(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_86(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_92(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_92(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_92(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_92(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_92(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_92(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_92(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_92(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_92(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("CLOTHES_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_92(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_92(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_92(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_92(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_86(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_92(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_92(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_92(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_92(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_85(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_93(95, iParam3);
					break;
				case 1:
					func_93(97, iParam3);
					break;
				case 2:
					func_93(96, iParam3);
					break;
			}
			func_93(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_80(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_80(iVar1);
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
					func_92(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_92(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_92(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_79(iParam0);
	if (Global_41431 == 15)
	{
		func_78(0);
	}
	return 1;
}

void func_78(bool bParam0)
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

void func_79(int iParam0)
{
	int iVar0;

	iVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), iVar0, true);
			break;
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), iVar0, true);
			break;
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), iVar0, true);
			break;
	}
}

void func_80(int iParam0)
{
	bool bVar0;
	char cVar1[64];

	if (iParam0 == 8)
	{
		func_55(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_55(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_55(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_55(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_83(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_83(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_83(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_83(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_83(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_83(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_82() /*10930*/].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_82() /*10930*/].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_81(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_81(int iParam0)
{
	switch (iParam0)
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

int func_82()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_83(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_84(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_84(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
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

void func_85(int iParam0)
{
	func_93(93, iParam0);
	func_93(29, iParam0);
	func_93(30, iParam0);
}

bool func_86(int iParam0)
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

	if (iParam0 == 8)
	{
		return func_88(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_88(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_88(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_88(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::_0xF12E6CD06C73D69E();
		iVar1 = func_87(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::_0xF12E6CD06C73D69E();
		iVar3 = func_87(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::_0xF12E6CD06C73D69E();
		iVar5 = func_87(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::_0xF12E6CD06C73D69E();
		iVar7 = func_87(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::_0xF12E6CD06C73D69E();
		iVar9 = func_87(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::_0xF12E6CD06C73D69E();
		iVar11 = func_87(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return false;
		}
		return true;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_82() /*10930*/].f_6174.f_10, iParam0);
}

int func_87(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_84(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_88(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_25();
	}
	iVar1 = func_90(iParam0, iParam1);
	iVar2 = func_89(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_89(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = func_25();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_91(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, true);
		func_54(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_60(27, 1);
	return 1;
}

void func_92(int iParam0, int iParam1)
{
	int iVar0;

	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_93(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_57254[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_57254[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_94()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_95(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_96()
{
	func_97();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_97()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_4(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_3(PLAYER::PLAYER_PED_ID());
			if (func_6(iVar0) && (!func_73(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_6(Global_111638.f_2358.f_539.f_4321))
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

bool func_98(int iParam0, int iParam1)
{
	if (!func_15(&(iParam0->f_2)))
	{
		func_102(&(iParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 255, 255, 255, 255, 0);
	if (iParam1 || iParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iParam0->f_8)
		{
			if (!func_15(&(iParam0->f_5)))
			{
				func_102(&(iParam0->f_5));
				func_101(iParam0, 1051260355 /* Float: 0.33f */);
			}
		}
		if (func_15(&(iParam0->f_5)))
		{
			if (func_100(&(iParam0->f_5)) > 0.33f)
			{
				func_99(&(iParam0->f_5));
				return false;
			}
		}
	}
	if (iParam0->f_1 == -1)
	{
		return true;
	}
	if (func_100(&(iParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(iParam0->f_1)
	{
		if (!func_15(&(iParam0->f_5)))
		{
			func_102(&(iParam0->f_5));
			func_101(iParam0, 1051260355 /* Float: 0.33f */);
		}
		else if (func_100(&(iParam0->f_5)) > 0.33f)
		{
			func_99(&(iParam0->f_2));
			return false;
		}
	}
	return true;
}

void func_99(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_100(int iParam0)
{
	if (func_15(iParam0))
	{
		if (func_14(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_13(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

void func_101(int iParam0, float fParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_102(int* iParam0)
{
	func_103(iParam0, 0f);
}

void func_103(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_13(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_104(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_105(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, func_106());
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam9);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_102(&(iParam0->f_2));
	iParam0->f_1 = iParam8;
	iParam0->f_9 = 1;
}

char* func_106()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_107(int iParam0)
{
	char* sVar0;

	switch (iParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_108(int iParam0)
{
	int iVar0;

	Local_169.f_1 = SYSTEM::TO_FLOAT(iParam0->f_50);
	Local_169.f_2 = SYSTEM::TO_FLOAT(iParam0->f_56);
	func_46(11, iParam0->f_56);
	func_46(12, iParam0->f_56);
	iLocal_57[1] = iParam0->f_56;
	iLocal_57[2] = iParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { iParam0->f_60[iVar0 /*3*/] };
		if (MISC::IS_BIT_SET(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(iParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169 = iParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

void func_109()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_410.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_410.f_4, false))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_410.f_4) < 500f)
			{
				Local_410.f_50 = 250;
			}
			else
			{
				Local_410.f_50 = 100;
			}
		}
	}
	Local_410.f_56 = (PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()) - ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()));
	if (Local_410.f_56 <= 150)
	{
		Local_410.f_56 = 250;
	}
	else
	{
		Local_410.f_56 = 100;
	}
}

void func_110(var uParam0)
{
	float fVar0;

	fVar0 = uParam0->f_41;
	fVar0 = func_111(fVar0);
	iLocal_57[4] = SYSTEM::CEIL(fVar0);
	iLocal_57[5] = SYSTEM::CEIL(fVar0);
	func_46(4, SYSTEM::CEIL(fVar0));
	func_46(5, SYSTEM::CEIL(fVar0));
	uParam0->f_50 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_111(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_112(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	if (iParam2 < 0)
	{
		iParam2 = func_131();
	}
	if (func_130(iParam2) == 4)
	{
	}
	bVar0 = Global_111638.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!func_128(func_129(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_128(func_129(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_111638.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_127(iParam0, 0);
			func_121(func_129(iParam0), func_130(iParam2), 1);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					MISC::SET_BIT(&(Global_2097152[func_82() /*10930*/].f_6174.f_1272), iParam0);
					func_118(-60084924, 15, 0);
					break;
			}
			func_117(iVar1);
			func_116(iParam0, iVar1);
			Global_110632.f_15[iParam0] = MISC::GET_GAME_TIMER();
		}
	}
	else if (bVar0)
	{
		func_113(func_129(iParam0), func_130(iParam2));
	}
}

void func_113(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_115(iParam0, iVar0, 0);
			func_114(iParam0, iVar0, 0);
		}
	}
}

void func_114(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_115(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_116(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_110632.f_4[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
	}
	else
	{
		Global_110632.f_4[iParam0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1200000, 2100000));
	}
}

void func_117(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_110632.f_3 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		Global_110632.f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(21600000, 25200000));
	}
}

void func_118(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_120(iParam1, bParam2))
	{
		iVar0 = func_119();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_119()
{
	int iVar0;
	int iVar1;

	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_120(int iParam0, bool bParam1)
{
	if (Global_1312865)
	{
		return false;
	}
	if (iParam0 == 22)
	{
		return true;
	}
	if ((((((((bParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

void func_121(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	Global_8042 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		func_126();
		if (iParam1 == 4)
		{
			func_115(iParam0, 0, 1);
			func_115(iParam0, 1, 1);
			func_115(iParam0, 2, 1);
			func_114(iParam0, 0, 1);
			func_114(iParam0, 1, 1);
			func_114(iParam0, 2, 1);
		}
		else
		{
			if (func_125(iParam0, iParam1) == 1 && func_124(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_115(iParam0, iVar0, 1);
			func_114(iParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76622)
			{
				if (iParam1 != 4)
				{
					if (Global_19486 != iParam1)
					{
						Global_8015[iParam1 /*4*/] = { func_123(iParam0) };
						Global_8032[iParam1] = 1;
						Global_8037[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19486)
					{
					}
					else
					{
						Global_7966[1 /*6*/] = { func_123(iParam0) };
						Global_7966[1 /*6*/].f_5 = iParam1;
						func_122();
					}
				}
				else
				{
					Global_7966[1 /*6*/] = { func_123(iParam0) };
					Global_7966[1 /*6*/].f_5 = iParam1;
					func_122();
				}
			}
			else
			{
				Global_7966[1 /*6*/] = { func_123(iParam0) };
				Global_7966[1 /*6*/].f_5 = iParam1;
				func_122();
			}
		}
	}
}

void func_122()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;

	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_1798[Global_8042 /*29*/].f_7)), 64);
	if (Global_8061 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::_GET_LABEL_TEXT(&(Global_7966[1 /*6*/])), 64);
		sVar32 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_7966[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_7356, 0);
}

struct<4> func_123(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_124(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

int func_125(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

void func_126()
{
	if (func_73(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[2 /*29*/])
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
		Global_19486 = func_96();
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

void func_127(int iParam0, int iParam1)
{
	Global_111638.f_243[func_131() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

bool func_128(int iParam0, int iParam1)
{
	if (func_125(iParam0, iParam1) == 1)
	{
		return true;
	}
	return false;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 104;
		case 1:
			return 105;
		case 2:
			return 106;
		case 3:
			return 107;
		case 4:
			return 108;
		case 5:
			return 109;
		case 6:
			return 110;
		case 7:
			return 111;
		case 8:
			return 112;
		case 9:
			return 93;
	}
	return 145;
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 2:
			return 2;
		case 1:
			return 1;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
	}
	return 4;
}

int func_131()
{
	int iVar0;

	iVar0 = func_96();
	switch (iVar0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		default:
			switch (func_84(-1))
			{
				case 0:
					return 3;
				case 1:
					return 4;
				case 2:
					return 5;
				case 3:
					return 6;
				case 4:
					return 7;
				default:
					break;
			}
			break;
	}
	return 3;
}

void func_132(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		MISC::SET_BIT(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

int func_133(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, iParam1) == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_134(var uParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (func_144(uParam0) && func_140(uParam0, 1, 1084227584 /* Float: 5f */))
		{
			if (bParam1)
			{
				if (func_139(uParam0, 2097152))
				{
					func_135(uParam0);
				}
			}
			else
			{
				func_135(uParam0);
			}
		}
		else if (!func_144(uParam0))
		{
			if (bParam1)
			{
				if (func_139(uParam0, 2097152))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 7)
					{
						return 1;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_135(var uParam0)
{
	vector3 vVar0;

	if (func_138(uParam0->f_29))
	{
		vVar0 = { uParam0->f_17 };
	}
	else
	{
		vVar0 = { uParam0->f_29 };
	}
	func_136(uParam0, vVar0);
}

void func_136(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_3, uParam0->f_4))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_137(uParam0->f_3, uParam0->f_4) == 0)
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, false) < MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vParam1, false) && VEHICLE::_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, true, false, false))
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, false) >= MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vParam1, false) && VEHICLE::_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, 2, false, false))
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_137(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, false) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, false) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, false) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_138(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_139(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_154(uParam0->f_81, iParam1) && !func_173());
	}
	return func_173();
}

bool func_140(int iParam0, bool bParam1, float fParam2)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (PED::IS_PED_IN_VEHICLE(iParam0->f_2, iParam0->f_4, false))
		{
			if (func_41(1))
			{
				func_39(0);
			}
			if (func_31())
			{
				func_143();
				return true;
			}
			else if (func_141(iParam0->f_4, fParam2, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
			{
				if (bParam1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256);
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
				}
			}
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iParam0->f_4, true);
		}
	}
	return false;
}

bool func_141(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, true);
	PAD::DISABLE_CONTROL_ACTION(0, 72, true);
	PAD::DISABLE_CONTROL_ACTION(0, 76, true);
	PAD::DISABLE_CONTROL_ACTION(0, 73, true);
	PAD::DISABLE_CONTROL_ACTION(0, 59, true);
	PAD::DISABLE_CONTROL_ACTION(0, 60, true);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, true);
		PAD::DISABLE_CONTROL_ACTION(0, 70, true);
		PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 86, true);
	PAD::DISABLE_CONTROL_ACTION(0, 81, true);
	PAD::DISABLE_CONTROL_ACTION(0, 82, true);
	PAD::DISABLE_CONTROL_ACTION(0, 138, true);
	PAD::DISABLE_CONTROL_ACTION(0, 136, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 107, true);
	PAD::DISABLE_CONTROL_ACTION(0, 110, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 87, true);
	PAD::DISABLE_CONTROL_ACTION(0, 88, true);
	PAD::DISABLE_CONTROL_ACTION(0, 113, true);
	PAD::DISABLE_CONTROL_ACTION(0, 115, true);
	PAD::DISABLE_CONTROL_ACTION(0, 116, true);
	PAD::DISABLE_CONTROL_ACTION(0, 117, true);
	PAD::DISABLE_CONTROL_ACTION(0, 118, true);
	PAD::DISABLE_CONTROL_ACTION(0, 119, true);
	PAD::DISABLE_CONTROL_ACTION(0, 352, true);
	PAD::DISABLE_CONTROL_ACTION(0, 131, true);
	PAD::DISABLE_CONTROL_ACTION(0, 132, true);
	PAD::DISABLE_CONTROL_ACTION(0, 123, true);
	PAD::DISABLE_CONTROL_ACTION(0, 126, true);
	PAD::DISABLE_CONTROL_ACTION(0, 129, true);
	PAD::DISABLE_CONTROL_ACTION(0, 130, true);
	PAD::DISABLE_CONTROL_ACTION(0, 133, true);
	PAD::DISABLE_CONTROL_ACTION(0, 134, true);
	CAM::_0x17FCA7199A530203();
	func_142(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

void func_142(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::_GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

void func_143()
{
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	}
}

bool func_144(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(iParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0->f_3, iParam0->f_4, true))
			{
				return true;
			}
		}
	}
	return false;
}

void func_145(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

void func_146(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_147(), 24);
		iVar0++;
	}
	HUD::CLEAR_PRINTS();
	func_161();
}

char* func_147()
{
	var uVar0;

	return uVar0;
}

void func_148(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

void func_149(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_99(&(iParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_99(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_150()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_151(0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_151(1));
	STREAMING::REMOVE_ANIM_SET("move_strafe_melee_unarmed");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@gyn@");
	STREAMING::REMOVE_ANIM_DICT("melee@unarmed@streamed_taunts");
	STREAMING::REMOVE_ANIM_DICT("misscommon@response");
	STREAMING::REMOVE_ANIM_DICT(&cLocal_908);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_924);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_940);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_956);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_972);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_988);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_1004);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_1020);
	TASK::REMOVE_WAYPOINT_RECORDING("taxi_oj_gyn");
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
}

int func_151(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("GAUNTLET");
			break;
		case 1:
			iVar0 = joaat("A_F_Y_EASTSA_03");
			break;
	}
	return iVar0;
}

int func_152(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_153(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_153(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_154(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_155()
{
	int iVar0;
	int iVar1;

	func_158();
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_851, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_410.f_4, false))
	{
		switch (iLocal_1128)
		{
			case 0:
				if (func_157(1, 0, 1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_851, PLAYER::PLAYER_PED_ID(), -1, 2049, 3);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_851, -1, 2049, 3);
					func_146(&uLocal_1069);
					func_145(&Local_1039, -1, 1);
					iLocal_1128 = 1;
				}
				break;
			case 1:
				if (func_171(&Local_410, 19) > 2f)
				{
					func_245(&Local_410, 129, 1, 0, 1);
					func_310(&Local_410, 19, 0, 0);
					iLocal_1128 = 5;
				}
				break;
			case 5:
				Local_902 = { func_156() };
				if (func_171(&Local_410, 19) > 15f || MISC::ARE_STRINGS_EQUAL(&cLocal_896, &Local_902))
				{
					iVar0 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_410.f_4);
					if (ENTITY::GET_ENTITY_MODEL(Local_410.f_4) == joaat("SENTINEL2"))
					{
						iVar0 = 1;
					}
					if (iVar0 > 1)
					{
						iVar1 = 2;
					}
					else
					{
						iVar1 = 0;
					}
					TASK::TASK_ENTER_VEHICLE(iLocal_851, Local_410.f_4, 40000, iVar1, 1f, 1, 0);
					func_310(&Local_410, 19, 0, 0);
					iLocal_1128 = 6;
				}
				else if ((MISC::GET_GAME_TIMER() % 1500) < 50)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_851, PLAYER::PLAYER_PED_ID(), 0);
				}
				break;
			case 6:
				if (func_171(&Local_410, 19) > 20f)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_851, false))
					{
						TASK::CLEAR_PED_TASKS(iLocal_851);
						TASK::TASK_WANDER_STANDARD(iLocal_851, 40000f, 0);
					}
					func_340(&Local_410, "Player not letting the chick in the car", 20);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_410.f_4, false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_851, false))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_851, false))
						{
							iLocal_1128 = 8;
						}
						else if ((MISC::GET_GAME_TIMER() % 2500) < 50)
						{
						}
					}
				}
				break;
			case 7:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_410.f_4, false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_851, false))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_851, false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_851, Local_410.f_4, 2);
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_410.f_4, -1);
					}
				}
				func_310(&Local_410, 19, 0, 0);
				iLocal_1128 = 8;
				break;
			case 8:
				GRAPHICS::DRAW_DEBUG_TEXT_2D("GYN_CS_END", 0.75f, 0.75f, 0f, 0, 0, 255, 255);
				Local_410.f_141 = 0;
				if (CAM::DOES_CAM_EXIST(Local_410))
				{
					CAM::DESTROY_CAM(Local_410, false);
				}
				if (CAM::DOES_CAM_EXIST(Local_410.f_1))
				{
					CAM::DESTROY_CAM(Local_410.f_1, false);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_1037))
				{
					CAM::DESTROY_CAM(iLocal_1037, false);
				}
				func_149(&Local_410, 19, 0);
				iLocal_1128 = 9;
				return true;
		}
	}
	return false;
}

struct<6> func_156()
{
	struct<6> Var0;
	int iVar6;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_21815);
		if (iVar6 > -1)
		{
			return Global_19673[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_157(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return false;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			return false;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return false;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				return false;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					return false;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return false;
			}
		}
	}
	else if (bParam1)
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

void func_158()
{
	if (func_33())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appInternet");
	}
	if (func_32())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appCamera");
	}
	if (func_41(1))
	{
		func_39(0);
	}
}

void func_159(var uParam0, int iParam1)
{
	func_160(uParam0, iParam1);
}

void func_160(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_161()
{
	Global_19671 = 0;
	func_162();
}

void func_162()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
	}
}

bool func_163()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1, false) == PLAYER::PLAYER_PED_ID())
		{
			return true;
		}
	}
	return false;
}

float func_164(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, bParam2);
}

int func_165(int iParam0, bool bParam1, bool bParam2)
{
	return func_176(iParam0, !bParam1, bParam2);
}

float func_166(vector3 vParam0, int iParam3)
{
	return func_167(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), vParam0, iParam3);
}

float func_167(int iParam0, vector3 vParam1, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), vParam1, bParam4);
}

void func_168()
{
	Global_19671 = 0;
	func_169();
}

void func_169()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_20805 = 6;
		return;
	}
}

void func_170(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 13, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, true);
			PED::SET_PED_SEEING_RANGE(*uParam0, 300f);
			PED::SET_PED_HEARING_RANGE(*uParam0, 300f);
			PED::SET_PED_ID_RANGE(*uParam0, 300f);
			PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 2);
			PED::SET_PED_COMBAT_ABILITY(*uParam0, 2);
			PED::SET_PED_ACCURACY(*uParam0, 75);
			PED::SET_PED_COMBAT_RANGE(*uParam0, 1);
			PED::SET_COMBAT_FLOAT(*uParam0, 7, 1f);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, Local_410.f_413);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_410.f_413, joaat("PLAYER"));
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*uParam0, 100f, 0);
		}
	}
}

float func_171(int iParam0, int iParam1)
{
	if (!func_15(&(iParam0->f_146[iParam1 /*3*/])))
	{
		func_172(&(iParam0->f_146[iParam1 /*3*/]));
	}
	return func_100(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_172(int* iParam0)
{
	if (!func_15(iParam0))
	{
		func_102(iParam0);
	}
}

bool func_173()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return true;
	}
	return false;
}

bool func_174(var uParam0)
{
	if ((((*uParam0 == joaat("WEAPON_UNARMED") || *uParam0 == joaat("WEAPON_SMOKEGRENADE")) || *uParam0 == joaat("WEAPON_FIREEXTINGUISHER")) || *uParam0 == joaat("WEAPON_PETROLCAN")) || *uParam0 == joaat("WEAPON_RUBBERGUN"))
	{
		return true;
	}
	return false;
}

float func_175(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, bParam4);
}

int func_176(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_153(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_153(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_153(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

bool func_177()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	func_158();
	if (iLocal_846 < 3 && iLocal_846 > 0)
	{
		if (func_198(iLocal_88))
		{
			iLocal_846 = 7;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_410.f_4, false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			GRAPHICS::DRAW_DEBUG_TEXT_2D("Player INSIDE of vehicle", 0.5f, 0.2f, 0f, 0, 0, 255, 255);
		}
		else
		{
			GRAPHICS::DRAW_DEBUG_TEXT_2D("Player OUTSIDE of vehicle", 0.5f, 0.2f, 0f, 0, 0, 255, 255);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			GRAPHICS::DRAW_DEBUG_TEXT_2D("Player INSIDE of vehicle adjusted", 0.5f, 0.25f, 0f, 0, 0, 255, 255);
		}
		else
		{
			GRAPHICS::DRAW_DEBUG_TEXT_2D("Player OUTSIDE of vehicle adjusted", 0.5f, 0.25f, 0f, 0, 0, 255, 255);
		}
	}
	switch (iLocal_846)
	{
		case 0:
			if (!func_173())
			{
				func_197(0, 0, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				func_196(&Local_410, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848 /* Float: 50f */);
				vVar0 = { 30.8062f, -1242.612f, 29.1026f };
				vVar3 = { 7.5623f, -0.0714f, 149.3929f };
				CAM::SET_CAM_COORD(Local_410, vVar0);
				CAM::SET_CAM_ROT(Local_410, vVar3, 2);
				CAM::SET_CAM_FOV(Local_410, 35f);
				CAM::SHAKE_CAM(Local_410, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE(Local_410, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				if (!PED::IS_PED_INJURED(Local_410.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_410.f_4, false))
				{
					ENTITY::SET_ENTITY_COORDS(Local_410.f_4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_850, 0f, 8.25f, 0f), true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_410.f_4, 114.629f);
					TASK::TASK_LOOK_AT_ENTITY(Local_410.f_3, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
				}
				func_245(&Local_410, 121, 1, 1, 0);
				func_310(&Local_410, 0, 0, 0);
				iLocal_846 = 1;
			}
			else
			{
				func_168();
			}
			break;
		case 1:
			if (func_171(&Local_410, 0) > 2f && !func_173())
			{
				if (!PED::IS_PED_INJURED(Local_410.f_3))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_848);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_848);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_ENTER_VEHICLE(0, Local_410.f_4, 20000, -1, 1f, 524296, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_848);
					TASK::TASK_PERFORM_SEQUENCE(Local_410.f_3, iLocal_848);
					func_183(&(Local_410.f_244), Local_410.f_144, "txm9_figt1", "txm9_figt1_1", 8, 0, 0);
				}
				func_310(&Local_410, 0, 0, 0);
				if (func_182())
				{
					if (!bLocal_867)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						bLocal_867 = true;
					}
				}
				iLocal_846 = 2;
			}
			break;
		case 2:
			if (func_171(&Local_410, 0) > 0.3f)
			{
				iLocal_846 = 3;
			}
			break;
		case 3:
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			func_310(&Local_410, 0, 0, 0);
			iLocal_846 = 4;
			break;
		case 4:
			if (!func_181(&Local_410) && !PED::IS_PED_INJURED(Local_410.f_3))
			{
				PED::SET_PED_CONFIG_FLAG(Local_410.f_3, 314, true);
				func_170(&(Local_410.f_3));
				func_310(&Local_410, 0, 0, 0);
				iLocal_846 = 5;
			}
			else if (!PED::IS_PED_INJURED(Local_410.f_3))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_410.f_3, 242628503) != 1)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_848);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_848);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_ENTER_VEHICLE(0, Local_410.f_4, 20000, -1, 1f, 524296, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_848);
					TASK::TASK_PERFORM_SEQUENCE(Local_410.f_3, iLocal_848);
				}
			}
			break;
		case 5:
			if (func_171(&Local_410, 0) > 0.5f && !func_173())
			{
				func_183(&(Local_410.f_244), Local_410.f_144, "txm9_figt1", "txm9_figt1_2", 9, 0, 0);
				func_310(&Local_410, 0, 0, 0);
				iLocal_846 = 6;
			}
			break;
		case 6:
			if (!PED::IS_PED_INJURED(Local_410.f_3))
			{
				PED::SET_PED_RESET_FLAG(Local_410.f_3, 69, true);
			}
			if (func_171(&Local_410, 0) > 1f)
			{
				func_245(&Local_410, 11, 1, 0, 0);
				func_179(1, 1, 1);
				if (CAM::DOES_CAM_EXIST(Local_410))
				{
					CAM::DESTROY_CAM(Local_410, false);
				}
				func_310(&Local_410, 0, 0, 0);
				return true;
			}
			break;
		case 7:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_410.f_3)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_410.f_4, false))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_410.f_3);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
				if (func_173())
				{
					func_168();
				}
				func_310(&Local_410, 0, 0, 0);
				iLocal_846 = 8;
			}
			break;
		case 8:
			if (func_171(&Local_410, 0) > 0.3f)
			{
				if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_410.f_3)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_410.f_4, false))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_410.f_3);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_410.f_4, 0, true);
					vVar9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_410.f_4, -1.6f, 0f, 0f) };
					vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_410.f_4, -4f, 2f, 0f) };
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vVar9, true, false, false, true);
					ENTITY::SET_ENTITY_COORDS(Local_410.f_3, vVar6, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_178(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_410.f_3, true)));
					ENTITY::SET_ENTITY_HEADING(Local_410.f_3, func_178(ENTITY::GET_ENTITY_COORDS(Local_410.f_3, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
					func_170(&(Local_410.f_3));
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(Local_410))
				{
					CAM::DESTROY_CAM(Local_410, false);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				func_310(&Local_410, 0, 0, 0);
				iLocal_846 = 9;
			}
			break;
		case 9:
			if (!CAM::IS_SCREEN_FADING_IN() && func_171(&Local_410, 0) > 1f)
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				iLocal_846 = 10;
			}
			break;
		case 10:
			if (!func_181(&Local_410))
			{
				func_179(1, 1, 1);
				func_245(&Local_410, 11, 1, 0, 0);
				func_310(&Local_410, 0, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

float func_178(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_179(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(true);
	func_21(0, 1, bParam2, 0, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	func_180(23, 0);
}

void func_180(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_31015, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_31015, iParam0);
	}
}

bool func_181(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			return true;
		}
	}
	return false;
}

bool func_182()
{
	if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		return true;
	}
	return false;
}

int func_183(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_195(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_184(sParam2, iParam4, 0);
}

int func_184(char* sParam0, int iParam1, bool bParam2)
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
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
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
					func_169();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_194(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_193();
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
			MISC::CLEAR_BIT(&Global_7356, 20);
			MISC::CLEAR_BIT(&Global_7357, 17);
			MISC::CLEAR_BIT(&Global_7358, 0);
			if (bParam2)
			{
				func_126();
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
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_192())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_29())
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
				if (MISC::IS_BIT_SET(Global_7356, 9))
				{
					return 0;
				}
			}
			func_191();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_190();
		func_185();
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
		func_169();
	}
	return 0;
}

void func_185()
{
	if (!func_186())
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

bool func_186()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (PLAYER::PLAYER_ID() == func_189())
	{
		return false;
	}
	if (func_187(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return false;
	}
	return true;
}

bool func_187(int iParam0)
{
	return func_188(iParam0, 20);
}

bool func_188(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_189()
{
	return -1;
}

void func_190()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_20805 = 1;
}

void func_191()
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
	MISC::CLEAR_BIT(&Global_7357, 16);
}

bool func_192()
{
	int iVar0;
	int iVar1;

	if (Global_76622)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
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

void func_193()
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

bool func_194(int iParam0, int iParam1)
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

void func_195(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_196(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	if (!CAM::DOES_CAM_EXIST(*iParam0))
	{
		*iParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vParam1, vParam4, fParam7, false, 2);
	}
}

void func_197(int iParam0, bool bParam1, bool bParam2)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(bParam1);
	func_39(0);
	func_21(1, 1, bParam2, 0, 0, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_180(23, 1);
}

bool func_198(int iParam0)
{
	if (func_199() && MISC::GET_GAME_TIMER() >= iParam0 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		func_39(0);
		func_168();
		return true;
	}
	return false;
}

bool func_199()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return false;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return true;
	}
	return false;
}

Vector3 func_200(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_201(var uParam0, float fParam1, float fParam2, float fParam3)
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !uParam0->f_142)
	{
		if (func_217(uParam0))
		{
			func_216(uParam0, &(uParam0->f_43));
			func_211(uParam0);
			func_210(uParam0);
			func_207(uParam0);
			func_204(uParam0, fParam2, fParam3);
			func_203(uParam0);
			return func_202(uParam0, fParam1);
		}
	}
	return 0;
}

bool func_202(var uParam0, float fParam1)
{
	if (func_57(uParam0) == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0))
		{
		}
		if (((func_175(uParam0->f_4, uParam0->f_17, 1) <= (fParam1 + 1f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_157(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			return func_140(uParam0, 1, fParam1);
		}
	}
	else if (((ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_157(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
	{
		return func_140(uParam0, 1, fParam1);
	}
	return false;
}

void func_203(int iParam0)
{
	float fVar0;

	if ((func_144(iParam0) && func_154(iParam0->f_81, 67108864)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_97) >= 10000)
		{
			fVar0 = func_166(iParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_96 >= 2 && !func_173())
		{
			func_245(iParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() % 4000) < 50)
		{
			if (!func_144(iParam0))
			{
			}
			if (!func_154(iParam0->f_81, 67108864))
			{
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

void func_204(int iParam0, float fParam1, float fParam2)
{
	if (func_144(iParam0) && func_154(iParam0->f_44, 4))
	{
		if ((VEHICLE::IS_VEHICLE_STOPPED(iParam0->f_4) || ENTITY::GET_ENTITY_SPEED(iParam0->f_4) < 3f) && func_181(iParam0))
		{
			if (!func_206(iParam0, 2))
			{
				func_205(iParam0, 2);
			}
			else if (func_144(iParam0))
			{
				if (func_171(iParam0, 2) > fParam1 && !func_206(iParam0, 14))
				{
					if (func_33())
					{
						func_245(iParam0, 48, 1, 0, 0);
					}
					else
					{
						func_245(iParam0, 48, 1, 0, 0);
					}
					func_310(iParam0, 2, 0, 0);
					if (func_206(iParam0, 10))
					{
						func_310(iParam0, 10, 0, 0);
					}
				}
				if (!func_206(iParam0, 3))
				{
					func_310(iParam0, 3, 0, 0);
				}
				else if (func_171(iParam0, 3) >= fParam2)
				{
					func_149(iParam0, 3, 0);
					func_340(iParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_206(iParam0, 2))
			{
				func_149(iParam0, 2, 0);
			}
			if (func_206(iParam0, 3))
			{
				func_149(iParam0, 3, 0);
			}
		}
	}
}

void func_205(int iParam0, int iParam1)
{
	func_172(&(iParam0->f_146[iParam1 /*3*/]));
}

bool func_206(int iParam0, int iParam1)
{
	return func_15(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_207(var uParam0)
{
	if (func_209(uParam0))
	{
		func_208(uParam0);
	}
}

void func_208(int iParam0)
{
	if (AUDIO::IS_RADIO_RETUNING() && iParam0->f_418.f_4 != 0)
	{
		iParam0->f_418.f_4 = 0;
	}
	switch (iParam0->f_418.f_4)
	{
		case 0:
			iParam0->f_418 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
			func_149(iParam0, 20, 0);
			iParam0->f_418.f_4++;
			break;
		case 1:
			if (iParam0->f_418.f_8 && !iParam0->f_418 == iParam0->f_418.f_2)
			{
				if (func_171(iParam0, 20) > 3f)
				{
					func_245(iParam0, 87, 1, 0, 0);
					iParam0->f_418.f_8 = 0;
					iParam0->f_418.f_4++;
				}
			}
			else if (iParam0->f_418 == iParam0->f_418.f_1)
			{
				if (!func_154(iParam0->f_81, 262144) || !func_154(iParam0->f_81, 1048576))
				{
					if (func_171(iParam0, 20) > 5f)
					{
						iParam0->f_418.f_5 = 1;
						func_245(iParam0, 84, 1, 0, 0);
						iParam0->f_418.f_4++;
					}
				}
			}
			else if (iParam0->f_418 == iParam0->f_418.f_2)
			{
				if (!func_154(iParam0->f_82, 67108864))
				{
					if (func_171(iParam0, 20) > 5f)
					{
						iParam0->f_418.f_6 = 1;
						iParam0->f_418.f_8 = 0;
						func_245(iParam0, 85, 1, 0, 0);
						func_149(iParam0, 22, 0);
						iParam0->f_418.f_4++;
					}
				}
			}
			else if (iParam0->f_418.f_7)
			{
				if (func_171(iParam0, 20) > 8f)
				{
					func_245(iParam0, 86, 1, 0, 0);
					iParam0->f_418.f_4++;
				}
			}
			break;
		case 2:
			if (func_154(iParam0->f_81, 262144) || func_154(iParam0->f_82, 67108864))
			{
				if (!func_206(iParam0, 22))
				{
					func_205(iParam0, 22);
				}
			}
			if (func_206(iParam0, 22) && func_171(iParam0, 22) > 15f)
			{
				if (iParam0->f_418 == iParam0->f_418.f_1)
				{
					if (!func_154(iParam0->f_81, 1048576))
					{
						func_245(iParam0, 84, 1, 0, 0);
						func_149(iParam0, 22, 0);
					}
				}
				else if (iParam0->f_418 == iParam0->f_418.f_2)
				{
					if (!func_154(iParam0->f_82, 134217728))
					{
						func_245(iParam0, 85, 1, 0, 0);
						func_149(iParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_209(var uParam0)
{
	return uParam0->f_120;
}

void func_210(int iParam0)
{
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && !func_154(iParam0->f_44, 2))
	{
		func_58(&(iParam0->f_44), 2);
	}
	else if (!PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && func_154(iParam0->f_44, 2))
	{
		func_159(&(iParam0->f_44), 2);
		iParam0->f_47++;
		func_46(9, 0);
	}
	if (iParam0->f_47 > 30)
	{
		func_245(iParam0, 47, 1, 0, 0);
		iParam0->f_47 = 0;
		iParam0->f_76 = (iParam0->f_76 + SYSTEM::CEIL(5f));
	}
}

void func_211(int iParam0)
{
	if (!func_154(iParam0->f_44, 1))
	{
		switch (iParam0->f_412)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (func_171(iParam0, 9) > 1f)
					{
						func_215(iParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						if (iParam0->f_410 != 22)
						{
							func_245(iParam0, 50, 1, 1, 0);
						}
						func_310(iParam0, 9, 0, 0);
						if (HUD::DOES_BLIP_EXIST(iParam0->f_9))
						{
							HUD::SET_BLIP_ALPHA(iParam0->f_9, 0);
							HUD::SET_BLIP_ROUTE(iParam0->f_9, false);
						}
						iParam0->f_140 = 1;
						iParam0->f_412 = 1;
					}
				}
				break;
			case 1:
				if (!func_173() && func_171(iParam0, 9) > 4f)
				{
					func_245(iParam0, 52, 1, 0, 0);
					iParam0->f_412 = 2;
				}
				break;
			case 2:
				if (func_214("TAXI_OBJ_POL", 0, 0))
				{
					if (iParam0->f_410 != 22)
					{
						func_245(iParam0, 51, 0, 0, 0);
					}
					iParam0->f_412 = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					iParam0->f_412 = 3;
				}
				break;
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), func_213(iParam0)))
				{
					func_215(iParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					func_46(6, 0);
				}
				if (!func_212(iParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (func_171(iParam0, 16) > 10f)
						{
							if (iParam0->f_410 != 22)
							{
								func_245(iParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (func_214("TAXI_OBJ_POL", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(iParam0->f_9))
					{
						HUD::SET_BLIP_ALPHA(iParam0->f_9, 255);
						HUD::SET_BLIP_ROUTE(iParam0->f_9, true);
					}
					iParam0->f_140 = 0;
					iParam0->f_412 = 4;
				}
				break;
			case 4:
				if (!func_173())
				{
					if (iParam0->f_410 != 22)
					{
						func_245(iParam0, 53, 1, 0, 1);
					}
					func_46(7, func_213(iParam0));
					func_215(iParam0, 0);
					iParam0->f_412 = 5;
				}
				break;
			case 5:
				if (!func_173())
				{
					func_149(iParam0, 9, 0);
					func_310(iParam0, 11, 0, 0);
					iParam0->f_412 = 0;
				}
				break;
		}
	}
}

bool func_212(int iParam0)
{
	return iParam0->f_110;
}

int func_213(int iParam0)
{
	return iParam0->f_106;
}

bool func_214(char* sParam0, int iParam1, char* sParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_215(int iParam0, int iParam1)
{
	if (iParam0->f_106 != iParam1)
	{
		iParam0->f_106 = iParam1;
	}
}

void func_216(var uParam0, float* fParam1)
{
	STATS::STAT_GET_FLOAT(uParam0->f_428, fParam1, -1);
	uParam0->f_41 = (*fParam1 - uParam0->f_42);
}

bool func_217(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(iParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(iParam0->f_3, iParam0->f_4, true) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0->f_3))
			{
				func_340(iParam0, "Passenger left car.", 9);
			}
			else if (func_227(iParam0))
			{
				if (func_214("TAXI_OBJ_PICKUP", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("TAXI_OBJ_PICKUP");
				}
				if (CAM::IS_SCREEN_FADED_IN())
				{
					return true;
				}
			}
			else
			{
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				func_218(iParam0, 1);
			}
		}
	}
	return false;
}

void func_218(int iParam0, bool bParam1)
{
	func_226(iParam0, iParam0->f_3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(iParam0->f_2, iParam0->f_4, false))
		{
			if (!func_206(iParam0, 14))
			{
				if (func_173())
				{
					func_225(1);
				}
				func_224(iParam0, 11, 1);
				func_219(iParam0, 1);
				func_310(iParam0, 14, 0f, 1);
				if (iParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_144(iParam0))
				{
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_2, false))
					{
						if (func_171(iParam0, 15) > 5f)
						{
							func_310(iParam0, 15, 0f, 1);
						}
					}
					if (func_171(iParam0, 14) > 20f)
					{
						func_340(iParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_171(iParam0, 14) > 20f)
				{
					if (func_338(iParam0->f_4, 1) > 40f)
					{
						func_340(iParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_340(iParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_219(int iParam0, bool bParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (bParam1)
		{
			if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(iParam0->f_8, 0);
				HUD::SET_BLIP_ROUTE(iParam0->f_8, false);
				func_223(iParam0, &(iParam0->f_98), 4, 3);
			}
			else if (HUD::DOES_BLIP_EXIST(iParam0->f_9))
			{
				HUD::SET_BLIP_ALPHA(iParam0->f_9, 0);
				HUD::SET_BLIP_ROUTE(iParam0->f_9, false);
				HUD::CLEAR_PRINTS();
				if (func_144(iParam0))
				{
					func_245(iParam0, 2, 1, 0, 0);
				}
				else
				{
					func_223(iParam0, &(iParam0->f_98), 4, 3);
				}
			}
			func_220(iParam0, 0, 0);
		}
		else if (HUD::DOES_BLIP_EXIST(iParam0->f_10))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_10));
			if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(iParam0->f_8, 255);
				HUD::SET_BLIP_ROUTE(iParam0->f_8, true);
			}
			else if (HUD::DOES_BLIP_EXIST(iParam0->f_9))
			{
				if (iParam0->f_411 == 5 && iParam0->f_410 == 17)
				{
					HUD::SET_BLIP_ALPHA(iParam0->f_9, 0);
					HUD::SET_BLIP_ROUTE(iParam0->f_9, false);
				}
				else if (iParam0->f_411 != 4)
				{
					HUD::SET_BLIP_ALPHA(iParam0->f_9, 255);
					HUD::SET_BLIP_ROUTE(iParam0->f_9, true);
				}
			}
			HUD::CLEAR_PRINTS();
		}
	}
}

void func_220(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_421(iParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(iParam0->f_10))
	{
		iParam0->f_10 = func_176(iParam0->f_4, 1, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0->f_10, "TAXI_BLIP_CAR");
		HUD::SET_BLIP_ROUTE(iParam0->f_10, true);
		func_221(iParam0);
		if (bParam2)
		{
			HUD::CLEAR_PRINTS();
			func_245(iParam0, 3, 1, 0, 0);
		}
	}
}

void func_221(int iParam0)
{
	func_310(iParam0, 14, 0, 0);
	func_222();
}

void func_222()
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_223(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_154(*uParam1, iParam2))
	{
		HUD::CLEAR_PRINTS();
		func_245(iParam0, iParam3, 1, 0, 0);
		func_58(uParam1, iParam2);
	}
}

void func_224(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_225(int iParam0)
{
	Global_21816 = iParam0;
}

void func_226(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("WEAPON_STUNGUN"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					func_340(iParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}

bool func_227(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, -1, false) == iParam0->f_2)
		{
			if (func_206(iParam0, 14))
			{
				func_228(iParam0);
			}
			func_219(iParam0, 0);
			return true;
		}
	}
	return false;
}

void func_228(int iParam0)
{
	func_149(iParam0, 14, 0);
	func_149(iParam0, 15, 0);
	func_230();
	if (func_229())
	{
		func_225(0);
	}
}

bool func_229()
{
	if (Global_21816 == 1)
	{
		return true;
	}
	return false;
}

void func_230()
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_231()
{
	switch (iLocal_847)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_410.f_4, false) && func_175(Local_410.f_4, Local_410.f_17, 1) < 300f)
			{
				func_235();
				iLocal_847 = 1;
			}
			break;
		case 1:
			if (func_233())
			{
				iLocal_847 = 2;
			}
			break;
		case 2:
			func_232();
			if (iLocal_853 > 1)
			{
				iLocal_847 = 3;
			}
			break;
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_410.f_4, false) && func_175(Local_410.f_4, Local_410.f_17, 1) > 350f)
			{
				func_150();
				iLocal_853 = -1;
				iLocal_847 = 0;
			}
			break;
	}
}

void func_232()
{
	vector3 vVar0;

	switch (iLocal_853)
	{
		case -1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_850))
			{
				iLocal_850 = VEHICLE::CREATE_VEHICLE(func_151(0), 27.1498f, -1246.523f, 28.4013f, 297.629f, true, true, false);
				iLocal_853++;
			}
			break;
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_850, false))
			{
				AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_850, true);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_850, true);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_850, "SNAKEYES");
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_850, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_850, 10);
				vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_850, 0f, 3f, 0f) };
				iLocal_851 = PED::CREATE_PED(26, func_151(1), vVar0, (ENTITY::GET_ENTITY_HEADING(iLocal_850) - 180f), true, true);
				iLocal_853++;
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_851, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_850, false))
			{
				func_8(&(Local_410.f_244), 5, iLocal_851, "TaxiLiz", 0, 1);
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_851, "TaxiLiz");
				PED::SET_PED_CONFIG_FLAG(iLocal_851, 317, true);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_851, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_851, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_851, 2, 0, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_851, true);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_851, false);
				PED::_0x46B05BCAE43856B0(iLocal_851, 1);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_851, iLocal_850, -1, 2048, 4);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_848);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@", "idle_b_ped", 8f, -8f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_848);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_851, iLocal_848);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_848);
				iLocal_853++;
			}
			break;
	}
}

bool func_233()
{
	if (!STREAMING::HAS_MODEL_LOADED(func_151(0)))
	{
		func_234("TAXI_ASSETS_STREAMED - Loading Gaunlet ", &iLocal_852, 1000);
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(func_151(1)))
	{
		func_234("TAXI_ASSETS_STREAMED - Loading A_F_Y_EastSA_03", &iLocal_852, 1000);
		return false;
	}
	if (!STREAMING::HAS_ANIM_SET_LOADED("move_strafe_melee_unarmed"))
	{
		func_234("TAXI_ASSETS_STREAMED - Loading move_strafe_melee_unarmed ", &iLocal_852, 1000);
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		func_234("TAXI_ASSETS_STREAMED - Loading misscommon@response ", &iLocal_852, 1000);
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_908))
	{
		func_234("TAXI_ASSETS_STREAMED - Loading sMaleChatEnter ", &iLocal_852, 1000);
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_924))
	{
		func_234("TAXI_ASSETS_STREAMED - Loading sMaleChatBase ", &iLocal_852, 1000);
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_956))
	{
		func_234("TAXI_ASSETS_STREAMED - Loading sMaleChatExit ", &iLocal_852, 1000);
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_940))
	{
		func_234("TAXI_ASSETS_STREAMED - Loading sMaleChatIdle ", &iLocal_852, 1000);
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_988))
	{
		func_234("TAXI_ASSETS_STREAMED - Loading sFemaleChatBase ", &iLocal_852, 1000);
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_972))
	{
		func_234("TAXI_ASSETS_STREAMED - Loading sFemaleChatEnter ", &iLocal_852, 1000);
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_1020))
	{
		func_234("TAXI_ASSETS_STREAMED - Loading sFemaleChatExit ", &iLocal_852, 1000);
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_1004))
	{
		func_234("TAXI_ASSETS_STREAMED - Loading sFemaleChatIdle ", &iLocal_852, 1000);
		return false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("taxi_oj_gyn"))
	{
		func_234("TAXI_ASSETS_STREAMING - Way point Recording Loading taxi_oj_gyn...", &iLocal_852, 1000);
		return false;
	}
	return true;
}

void func_234(char* sParam0, int iParam1, int iParam2)
{
	if (MISC::GET_GAME_TIMER() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = MISC::GET_GAME_TIMER();
}

void func_235()
{
	STREAMING::REQUEST_MODEL(func_151(0));
	STREAMING::REQUEST_MODEL(func_151(1));
	STREAMING::REQUEST_ANIM_SET("move_strafe_melee_unarmed");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@gyn@");
	STREAMING::REQUEST_ANIM_DICT("misscommon@response");
	STREAMING::REQUEST_ANIM_DICT("melee@unarmed@streamed_taunts");
	STREAMING::REQUEST_ANIM_DICT(&cLocal_908);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_924);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_940);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_956);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_972);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_988);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_1004);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_1020);
	TASK::REQUEST_WAYPOINT_RECORDING("taxi_oj_gyn");
}

void func_236()
{
	switch (iLocal_845)
	{
		case 0:
			if (!func_154(Local_410.f_82, 16384) && func_238(&Local_410) != 35)
			{
				if (func_144(&Local_410))
				{
					if (func_227(&Local_410))
					{
						if (func_167(Local_410.f_4, Local_410.f_17, 1) <= 85f && iLocal_853 > 1)
						{
							Local_410.f_17 = { vLocal_874 };
							HUD::SET_BLIP_COORDS(Local_410.f_9, vLocal_874);
							func_146(&uLocal_1069);
							func_145(&Local_1039, 3, 0);
							func_245(&Local_410, 36, 1, 0, 0);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_850, false))
							{
								VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_850, 4, false, false);
								VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_850, 0);
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_850, 150f);
								VEHICLE::SET_VEHICLE_DAMAGE(iLocal_850, 0f, 0f, 0f, 1000f, 0f, true);
							}
							ENTITY::CREATE_MODEL_HIDE(vLocal_892, 5f, joaat("PROP_SKID_CHAIR_02"), true);
							ENTITY::CREATE_MODEL_HIDE(vLocal_892, 5f, joaat("PROP_RUB_COUCH03"), true);
							iLocal_845 = 1;
							if (bLocal_1038)
							{
							}
						}
					}
				}
			}
			break;
		case 1:
			func_237(&uLocal_1036, vLocal_874, 30f, 0);
			iLocal_845 = 2;
			break;
		case 2:
			break;
	}
}

void func_237(var uParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_36(vParam1, 1f, -fParam4, -fParam4, -22f) };
	vVar3 = { func_36(vParam1, 1f, fParam4, fParam4, 44f) };
	vVar0.f_2 = (vVar0.z - 22f);
	vVar3.f_2 = (vVar3.z + 22f);
	if (!bParam5)
	{
		PED::SET_PED_NON_CREATION_AREA(vVar0, vVar3);
		*uParam0 = PED::ADD_SCENARIO_BLOCKING_AREA(vVar0, vVar3, false, true, true, true);
		MISC::CLEAR_AREA_OF_PEDS(vParam1, fParam4, 0);
	}
	else
	{
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, false);
	}
}

int func_238(int iParam0)
{
	return iParam0->f_416;
}

int func_239(var uParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, false))
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_4, iParam1, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 355471868) != 1)
				{
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uParam0->f_3, uParam0->f_4, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_240(var uParam0, int iParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, false))
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_4, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_241(int iParam0)
{
	func_242(iParam0, 1000);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_3);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
	}
	func_168();
	func_228(iParam0);
}

void func_242(var uParam0, int iParam1)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, false);
	}
	if (iParam1 > 0)
	{
		CAM::RENDER_SCRIPT_CAMS(false, true, iParam1, true, false, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
}

void func_243()
{
	func_58(&(Local_410.f_55), 2);
	func_58(&(Local_410.f_55), 4);
	func_58(&(Local_410.f_55), 16);
	func_58(&(Local_410.f_55), 64);
	func_58(&(Local_410.f_55), 256);
	func_58(&(Local_410.f_55), 512);
	func_58(&(Local_410.f_55), 1024);
	func_58(&(Local_410.f_55), 2048);
	func_58(&(Local_410.f_55), 4096);
	func_58(&(Local_410.f_55), 1073741824 /* Float: 2f */);
	func_58(&(Local_410.f_100), 8);
	func_58(&(Local_410.f_100), 2048);
	func_58(&(Local_410.f_100), 256);
	func_58(&uLocal_1111, 2);
}

void func_244(var uParam0)
{
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	func_242(uParam0, 1000);
}

void func_245(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_310(iParam0, 16, 4f, 0);
		if (func_246(iParam0))
		{
			func_161();
		}
	}
	func_272(iParam0, iParam2, bParam3);
}

bool func_246(int iParam0)
{
	vector3 vVar0[24];
	struct<6> Var6;

	StringCopy(&cVar0, iParam0->f_143, 24);
	if (func_173())
	{
		Var6 = { func_248() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
		{
			StringConCat(&cVar0, "_obj1", 24);
			if (MISC::ARE_STRINGS_EQUAL(&Var6, &cVar0))
			{
				return true;
			}
			StringCopy(&cVar0, iParam0->f_143, 24);
			StringConCat(&cVar0, "_gret1", 24);
			func_247(&cVar0);
			if (MISC::ARE_STRINGS_EQUAL(&Var6, &cVar0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_247(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_248()
{
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

void func_249()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_840);
}

bool func_250(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if ((PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) && (MISC::GET_GAME_TIMER() - iLocal_89) > 500) || PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_251(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(iParam0->f_2, iParam0->f_4, false))
		{
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			func_218(iParam0, 1);
			if (func_31())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 2106541073) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 2106541073) == 0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_3);
				iParam0->f_48 = 0;
				iLocal_87 = 0;
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			func_270(iParam0);
			if (iParam0->f_48 > 1)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iParam0->f_11, iParam0->f_6, 20000, 0.25f, false, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0->f_4, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(iParam0->f_3, iVar3);
				iParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_206(iParam0, 14))
			{
				func_228(iParam0);
				func_219(iParam0, 0);
			}
			if (func_206(iParam0, 9))
			{
				func_149(iParam0, 9, 0);
				HUD::CLEAR_PRINTS();
				if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
				{
					HUD::SET_BLIP_ALPHA(iParam0->f_8, 255);
					HUD::SET_BLIP_ROUTE(iParam0->f_8, true);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
			{
				fVar4 = ((ENTITY::GET_ENTITY_SPEED(iParam0->f_4) / 5f) + 4f);
				if (iParam0->f_141 && func_269(iParam0, iParam0->f_3) > 300f)
				{
					func_340(iParam0, "Left Passenger", 8);
				}
				switch (iParam0->f_48)
				{
					case 0:
						if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 242628503) != 1 || ((func_164(PLAYER::PLAYER_PED_ID(), iParam0->f_3, 1) < 20f && func_175(iParam0->f_3, iParam0->f_11, 1) <= 28f) && func_175(iParam0->f_4, iParam0->f_11, 1) <= 28f))
						{
							if (func_266(iParam0, fParam2))
							{
								iParam0->f_48++;
							}
						}
						break;
					case 1:
						if (func_265(iParam0, 0, 28f, fVar4, 4f))
						{
							iParam0->f_138 = 1;
							if (bLocal_94)
							{
								iParam0->f_7 = func_264(iParam0->f_4, iParam0->f_3);
								iVar0 = func_263(iParam0, &iVar1);
								if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
								{
									if (iVar1 == iParam0->f_7)
									{
										if (iParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (iParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, iVar2);
									}
									else
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
									}
								}
								if (iParam0->f_411 == 0)
								{
									if (VEHICLE::_0x639431E895B9AA57(iParam0->f_3, iParam0->f_4, false, false, false))
									{
										if (iParam0->f_7 == 2)
										{
											iParam0->f_7 = 0;
											if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							TASK::CLEAR_PED_TASKS(iParam0->f_3);
							TASK::TASK_ENTER_VEHICLE(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 1, 0);
							iParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(iParam0->f_3, true), fVar4, 0, 0, 255, 150);
							}
							if (!func_181(iParam0))
							{
								TASK::CLEAR_PED_TASKS(iParam0->f_3);
							}
							else if (((TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 242628503) != 0) && TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 242628503) != 7) && func_269(iParam0, iParam0->f_3) > 8f)
							{
								TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_243));
								TASK::OPEN_SEQUENCE_TASK(&(iParam0->f_243));
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								if (iParam0->f_411 != 9)
								{
									TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								else
								{
									TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(iParam0->f_243);
								TASK::TASK_PERFORM_SEQUENCE(iParam0->f_3, iParam0->f_243);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					case 2:
						if (bLocal_94)
						{
							if (func_164(iParam0->f_4, iParam0->f_3, 1) < 3f)
							{
								if (!func_262(iParam0, 1))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_3);
									func_340(iParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_261(iParam0->f_4))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_3);
									func_340(iParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_259(iParam0);
						if (func_269(iParam0, iParam0->f_3) < fVar4 || func_31())
						{
							if (PED::IS_PED_IN_VEHICLE(iParam0->f_2, iParam0->f_4, false))
							{
								if (func_253(iParam0))
								{
									func_252(iParam0);
									iLocal_89 = MISC::GET_GAME_TIMER();
									PED::SET_PED_CONFIG_FLAG(iParam0->f_3, 26, true);
									func_149(iParam0, 5, 0);
									HUD::CLEAR_GPS_FLAGS();
									STATS::STAT_GET_FLOAT(iParam0->f_428, &(iParam0->f_42), -1);
									PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0->f_3, false);
									return true;
								}
							}
						}
						else if (bParam1)
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(iParam0->f_3, true), fVar4, 0, 0, 255, 150);
						}
						break;
				}
			}
		}
	}
	return false;
}

void func_252(int iParam0)
{
	if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
	{
		HUD::SET_BLIP_ROUTE(iParam0->f_8, false);
		HUD::REMOVE_BLIP(&(iParam0->f_8));
	}
}

bool func_253(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	vector3 vVar13;

	func_234("UPDATE_PASSENGER_ENTER_CUTSCENE", &(iParam0->f_78), 1000);
	iVar12 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_4, false))
	{
		func_158();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_198(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_140(iParam0, 0, 1084227584 /* Float: 5f */) && func_157(1, 1, 1))
			{
				if (func_262(iParam0, 1))
				{
					iLocal_88 = MISC::GET_GAME_TIMER();
					SYSTEM::SETTIMERA(0);
					iLocal_86 = 1;
				}
				else
				{
					func_340(iParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				iParam0->f_7 = func_264(iParam0->f_4, iParam0->f_3);
				iVar9 = func_263(iParam0, &iVar10);
				if (!ENTITY::IS_ENTITY_DEAD(iVar9, false))
				{
					if (iVar10 == iParam0->f_7)
					{
						if (iParam0->f_7 == 1)
						{
							iVar11 = 262144;
						}
						else
						{
							iVar11 = 131072;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar9, 0, iVar11);
					}
					else
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar9, 0, 0);
					}
				}
				if (iParam0->f_411 == 0)
				{
					if (VEHICLE::_0x639431E895B9AA57(iParam0->f_3, iParam0->f_4, false, false, false))
					{
						iParam0->f_7 = 0;
						if (!ENTITY::IS_ENTITY_DEAD(iVar9, false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iVar9, 0, 4096);
						}
					}
				}
				iLocal_86 = 2;
			}
			break;
		case 2:
			if (iParam0->f_7 == 0)
			{
				vVar6 = { 1.5f, 0f, -0.6422f };
				vVar0 = { -1.4309f, 3.958f, 3.5037f };
				vVar3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (iParam0->f_7 == 2)
			{
				vVar6 = { 1.5f, -1f, -0.6422f };
				vVar0 = { 1.4309f, 3.958f, 0.5037f };
				vVar3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				vVar6 = { -1.5f, -1f, -0.6422f };
				vVar0 = { -1.4823f, 4.2333f, 0.5939f };
				vVar3 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar12 = func_258(&(iParam0->f_409), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, 0f, 2.2f, 0.275f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, vVar0), 1);
			if (iVar12 == 1)
			{
				vVar0.f_2 = (vVar0.z + 1.5f);
				if (iParam0->f_7 == 2)
				{
					vVar3 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar12 != -1)
			{
				func_197(0, 0, 1);
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(iParam0->f_4, true), 3f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(iParam0->f_4, true), 25f, 0);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				func_256();
				func_272(iParam0, 0, 0);
				vVar13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, vVar6) };
				ENTITY::SET_ENTITY_COORDS(iParam0->f_3, vVar13, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iParam0->f_3, func_255(iParam0));
				func_196(iParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848 /* Float: 50f */);
				CAM::SET_CAM_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, vVar0));
				CAM::POINT_CAM_AT_ENTITY(*iParam0, iParam0->f_4, vVar3, true);
				CAM::SET_CAM_ACTIVE(*iParam0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				PED::_0x2208438012482A1A(iParam0->f_3, false, false);
				TASK::TASK_ENTER_VEHICLE(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		case 5:
			func_234("TAXI_PED_ENTER_CUT_WAIT", &(iParam0->f_78), 1000);
			if (SYSTEM::TIMERA() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		case 6:
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_4, false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_3, false))
				{
					PED::SET_PED_INTO_VEHICLE(iParam0->f_3, iParam0->f_4, iParam0->f_7);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0->f_4, func_254(iParam0->f_7), true);
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(*iParam0, false);
				CAM::DESTROY_CAM(iParam0->f_1, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::DO_SCREEN_FADE_IN(800);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				func_256();
				func_272(iParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		case 8:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				func_179(1, 1, 1);
				return true;
			}
			break;
		case 9:
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::DESTROY_CAM(*iParam0, false);
			CAM::DESTROY_CAM(iParam0->f_1, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			func_179(1, 1, 1);
			return true;
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_4, false))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0->f_3) || PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_3, true))
				{
					return true;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return false;
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 2:
			return 3;
		case 0:
			return 1;
		case -1:
			return 0;
		default:
			break;
	}
	return 2;
}

float func_255(int iParam0)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	vVar1 = { func_38() };
	if (iParam0->f_7 == 2)
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_178(ENTITY::GET_ENTITY_COORDS(iParam0->f_3, true), vVar1);
	return fVar0;
}

void func_256()
{
	Global_19671 = 0;
	func_257();
}

void func_257()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_21816 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_20805 = 6;
		return;
	}
}

int func_258(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;

	if (*uParam0 == 0)
	{
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
		if (iVar8 == 2)
		{
			if (bParam7)
			{
			}
			if (iVar6 == 0)
			{
				*uParam0 = 0;
				return iVar6;
			}
			else
			{
				if (bParam7)
				{
				}
				*uParam0 = 0;
				return iVar6;
			}
		}
		else if (iVar8 == 0)
		{
			if (bParam7)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

void func_259(int iParam0)
{
	int iVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(iParam0->f_3))
		{
			if (func_338(iParam0->f_3, 1) > 30f || func_260(iParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, -1794415470) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 242628503) == 1)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0->f_4, 0);
					TASK::TASK_PLAY_ANIM(0, "misscommon@response", "screw_you", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iParam0->f_11, iParam0->f_6, 20000, 0.25f, false, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iParam0->f_3, iVar0);
					func_340(iParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

bool func_260(int iParam0)
{
	if ((ENTITY::GET_ENTITY_SPEED(iParam0->f_4) > 3f && func_171(iParam0, 5) > 15f) || ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0->f_4))
	{
		return true;
	}
	return false;
}

bool func_261(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, false))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return false;
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
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

bool func_262(int iParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		iVar0[0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, 1, false);
		iVar0[1] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, 2, false);
		iVar0[2] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, 0, false);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar4]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar0[iVar4], false))
				{
					if (iVar4 == 0)
					{
						iParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar4 == 1)
					{
						iParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						iParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return false;
				}
			}
			iVar4++;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	return true;
}

int func_263(int iParam0, int iParam1)
{
	int iVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, 1, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			*iParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, 2, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				*iParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, 0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					*iParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_264(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar4 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true)) };
	if (ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("VACCA"))
	{
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("SENTINEL2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (vVar0.x > 0f)
	{
		if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, 2, false, false))
		{
			iVar3 = 2;
		}
		else if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, true, false, false))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, true, false, false))
	{
		iVar3 = 1;
	}
	else if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, 2, false, false))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

bool func_265(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0->f_3) && func_338(iParam0->f_3, 1) < fParam2)
		{
			if (!func_206(iParam0, 5))
			{
				func_310(iParam0, 5, 0, 0);
			}
		}
		else if (func_206(iParam0, 5))
		{
			func_149(iParam0, 5, 0);
		}
		if (((func_171(iParam0, 5) > IntToFloat(iParam1) && ENTITY::GET_ENTITY_SPEED(iParam0->f_4) < fParam4) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0->f_3)) || func_338(iParam0->f_3, 1) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

bool func_266(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	var uVar12;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;

	iVar18 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		vVar6 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0->f_4, iVar18) };
		vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0->f_4, vVar6) };
		vVar6.f_1 = (vVar6.y + 1f);
	}
	else
	{
		vVar6 = { 0f, 1f, 1f };
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, vVar6) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_3, 0f, 0.25f, 0.9f) };
	GRAPHICS::DRAW_DEBUG_LINE(vVar0, vVar3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_3, true);
			iLocal_87 = 1;
			break;
		case 1:
			if ((func_164(iParam0->f_4, iParam0->f_3, 0) <= fParam1 && !iParam0->f_142) && MISC::ABSF((vVar0.z - vVar3.z)) < 5f)
			{
				if (iParam0->f_409 == 0)
				{
					iParam0->f_409 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar0, vVar3, 511, 0, 7);
				}
				else
				{
					iVar17 = SHAPETEST::GET_SHAPE_TEST_RESULT(iParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
					if (iVar17 == 2)
					{
						if (iVar15 == 0)
						{
							iLocal_87 = 2;
						}
						iParam0->f_409 = 0;
					}
					else if (iVar17 == 0)
					{
						iParam0->f_409 = 0;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, 242628503) != 0)
			{
				TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_243));
				TASK::OPEN_SEQUENCE_TASK(&(iParam0->f_243));
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::SET_SEQUENCE_TO_REPEAT(iParam0->f_243, true);
				TASK::CLOSE_SEQUENCE_TASK(iParam0->f_243);
				TASK::TASK_PERFORM_SEQUENCE(iParam0->f_3, iParam0->f_243);
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			if (iParam0->f_411 != 9)
			{
				if (!func_154(iParam0->f_44, 128))
				{
					func_245(iParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_267(iParam0->f_3, "TAXI_HAIL", iParam0->f_145, 4);
			}
			TASK::CLEAR_PED_TASKS(iParam0->f_3);
			TASK::TASK_LOOK_AT_ENTITY(iParam0->f_3, iParam0->f_4, -1, 2048, 4);
			TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_243));
			TASK::OPEN_SEQUENCE_TASK(&(iParam0->f_243));
			if (iParam0->f_411 != 9)
			{
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0f, false, false, false);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			TASK::CLOSE_SEQUENCE_TASK(iParam0->f_243);
			TASK::TASK_PERFORM_SEQUENCE(iParam0->f_3, iParam0->f_243);
			TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_243));
			iLocal_87 = 3;
			break;
		case 3:
			iLocal_87 = 0;
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(iParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return true;
	}
	return false;
}

void func_267(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(iParam0, sParam1, sParam2, func_268(iParam3), false);
}

int func_268(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		case 2:
			return "SPEECH_PARAMS_BEAT";
		case 3:
			return "SPEECH_PARAMS_FORCE";
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		case 14:
			return "SPEECH_PARAMS_HELI";
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		default:
			break;
	}
	iVar0 = 0;
	return iVar0;
}

float func_269(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (func_181(iParam0))
		{
			return func_164(iParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_270(int iParam0)
{
	func_226(iParam0, iParam0->f_3);
	if (func_181(iParam0))
	{
		if (func_206(iParam0, 14))
		{
			func_228(iParam0);
			if (HUD::DOES_BLIP_EXIST(iParam0->f_10))
			{
				HUD::REMOVE_BLIP(&(iParam0->f_10));
			}
		}
	}
	if (!func_206(iParam0, 9))
	{
		if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
		{
			HUD::SET_BLIP_ALPHA(iParam0->f_8, 0);
			HUD::SET_BLIP_ROUTE(iParam0->f_8, false);
		}
		func_310(iParam0, 9, 0, 0);
		func_271("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_271(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

void func_272(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_161();
		func_310(iParam0, 16, 4f, 0);
		HUD::CLEAR_PRINTS();
	}
}

bool func_273(int iParam0, int iParam1)
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		return false;
	}
	func_279(12);
	if (func_154(iParam0->f_44, 8))
	{
		if (!func_154(iParam0->f_44, 128))
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && !func_154(iParam0->f_44, 256))
			{
				func_58(&(iParam0->f_44), 256);
			}
			if (func_154(iParam0->f_44, 256) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_245(iParam0, 135, 1, 0, 1);
				func_58(&(iParam0->f_44), 128);
			}
		}
	}
	if (!func_277(iParam0, iParam1))
	{
		if (func_338(iParam0->f_3, 1) < 35f)
		{
			if (!func_154(iParam0->f_44, 8))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
				func_245(iParam0, 133, 1, 0, 1);
				func_58(&(iParam0->f_44), 8);
			}
		}
		if ((PED::IS_PED_INJURED(iParam0->f_3) || PED::IS_PED_FLEEING(iParam0->f_3)) || func_338(iParam0->f_3, 1) > 400f)
		{
			func_340(iParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		iParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(iParam0->f_2, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iParam0->f_4, true);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, -1, false) == iParam0->f_2)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iParam0->f_4);
			func_275(iParam0);
			func_46(2, 0);
			bLocal_94 = true;
			func_172(&iLocal_90);
			return true;
		}
		else
		{
			func_340(iParam0, "No Taxi", 21);
			func_274("TAXI_DBG_NTAXI", -1);
		}
	}
	return false;
}

void func_274(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_275(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_4, false))
	{
		if (func_276())
		{
		}
	}
}

bool func_276()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return true;
	}
	return false;
}

bool func_277(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
				bVar2 = func_261(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("RHINO") || iVar1 == joaat("RATLOADER")) || iVar1 == joaat("SURFER")) || iVar1 == joaat("SURFER2")) || iVar1 == joaat("ARMYTANKER")) || iVar1 == joaat("BARRACKS")) || iVar1 == joaat("BARRACKS2")) || iVar1 == joaat("CRUSADER")) || iVar1 == joaat("UTILLITRUCK")) || iVar1 == joaat("UTILLITRUCK2")) || iVar1 == joaat("UTILLITRUCK3")) || iVar1 == joaat("AIRTUG")) || iVar1 == joaat("CADDY")) || iVar1 == joaat("CADDY2")) || iVar1 == joaat("DLOADER")) || iVar1 == joaat("DOCKTUG")) || iVar1 == joaat("FLATBED")) || iVar1 == joaat("RIPLEY")) || iVar1 == joaat("ROMERO")) || iVar1 == joaat("TOWTRUCK")) || iVar1 == joaat("TOWTRUCK2")) || iVar1 == joaat("AIRBUS")) || iVar1 == joaat("BUS")) || iVar1 == joaat("COACH")) || iVar1 == joaat("RENTALBUS")) || iVar1 == joaat("TOURBUS")) || iVar1 == joaat("RIOT")) || iVar1 == joaat("TRASH")) || iVar1 == joaat("BENSON")) || iVar1 == joaat("BIFF")) || iVar1 == joaat("HAULER")) || iVar1 == joaat("PACKER")) || iVar1 == joaat("PHANTOM")) || iVar1 == joaat("POUNDER")) || iVar1 == joaat("BULLDOZER")) || iVar1 == joaat("HANDLER")) || iVar1 == joaat("TIPTRUCK2")) || iVar1 == joaat("CUTTER")) || iVar1 == joaat("DUMP")) || iVar1 == joaat("MIXER")) || iVar1 == joaat("MIXER2")) || iVar1 == joaat("RUBBLE")) || iVar1 == joaat("SCRAP")) || iVar1 == joaat("TIPTRUCK")) || iVar1 == joaat("CAMPER")) || iVar1 == joaat("TACO")) || iVar1 == joaat("BOXVILLE")) || iVar1 == joaat("BOXVILLE2")) || iVar1 == joaat("BOXVILLE3")) || iVar1 == joaat("BURRITO")) || iVar1 == joaat("BURRITO2")) || iVar1 == joaat("BURRITO3")) || iVar1 == joaat("BURRITO4")) || iVar1 == joaat("GBURRITO")) || iVar1 == joaat("JOURNEY")) || iVar1 == joaat("MULE")) || iVar1 == joaat("MULE2")) || iVar1 == joaat("PONY")) || iVar1 == joaat("RUMPO")) || iVar1 == joaat("RUMPO2")) || iVar1 == joaat("SPEEDO")) || iVar1 == joaat("SPEEDO2")) || iVar1 == joaat("YOUGA")) || iVar1 == joaat("MOWER")) || iVar1 == joaat("TRACTOR")) || iVar1 == joaat("TRACTOR2")) || iVar1 == joaat("FBI")) || iVar1 == joaat("FBI2")) || iVar1 == joaat("PRANGER")) || iVar1 == joaat("AMBULANCE")) || iVar1 == joaat("DILETTANTE2")) || iVar1 == joaat("FIRETRUK")) || iVar1 == joaat("LGUARD")) || iVar1 == joaat("DUNE")) || iVar1 == joaat("PBUS")) || iVar1 == joaat("POLICE")) || iVar1 == joaat("POLICE2")) || iVar1 == joaat("POLICE3")) || iVar1 == joaat("POLICE4")) || iVar1 == joaat("POLICEB")) || iVar1 == joaat("POLICET")) || iVar1 == joaat("SHERIFF")) || iVar1 == joaat("SHERIFF2")) || iVar1 == joaat("STOCKADE"))
				{
					bVar3 = false;
				}
				if (iParam0->f_411 == 7)
				{
					if (iVar1 == joaat("BODHI2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_154(iParam0->f_44, 64))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_274("TX_VIP_DMGD", -1);
							if (func_278("TX_VIP_DMGD"))
							{
								func_58(&(iParam0->f_44), 64);
							}
						}
					}
					return false;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_154(iParam0->f_44, 32))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_274("TX_VIP_CAR", -1);
							if (func_278("TX_VIP_CAR"))
							{
								func_58(&(iParam0->f_44), 32);
							}
						}
					}
					return false;
				}
				else if (!bVar5)
				{
					if (!func_154(iParam0->f_44, 16))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_274("TX_VIP_SMALL", -1);
							if (func_278("TX_VIP_SMALL"))
							{
								func_58(&(iParam0->f_44), 16);
							}
						}
					}
					return false;
				}
				return true;
			}
		}
		else
		{
			func_159(&(iParam0->f_44), 16);
			func_159(&(iParam0->f_44), 64);
			func_159(&(iParam0->f_44), 32);
		}
	}
	return false;
}

bool func_278(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_279(int iParam0)
{
	int iVar0;
	vector3 vVar1[24];

	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		iVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &iVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

void func_280()
{
	Local_343 = 0;
	func_297(45190, 45165, 1);
	func_297(44926, 44902, 1);
	func_297(44840, 44815, 1);
	func_297(44743, 44719, 1);
	func_297(44609, 44588, 1);
	func_297(44535, 44510, 1);
	func_297(44368, 44344, 1);
}

int func_281(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_340(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_282(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_284(uParam0->f_4))
		{
			func_283(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_283(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

bool func_284(int iParam0)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return true;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < -100f)
	{
		return true;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return true;
	}
	return false;
}

int func_285(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_340(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_286(var uParam0)
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (func_287(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_287(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_288(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_283(uParam0, 11);
	return 1;
}

int func_289(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0->f_4) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_4))
		{
			if (!func_206(iParam0, 25))
			{
				func_310(iParam0, 25, 0, 0);
			}
			else if (func_171(iParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_206(iParam0, 25))
		{
			func_149(iParam0, 25, 0);
		}
	}
	return 0;
}

int func_290(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_340(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_291(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(uParam0->f_4))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_292(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_340(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_293(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
			{
				if (func_287(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_294(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_340(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_295(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_296(uParam0->f_4))
		{
			func_283(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

bool func_296(int iParam0)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return true;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) == 0f)
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
		}
		return true;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return true;
	}
	return false;
}

void func_297(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343 >= 16)
	{
		Local_343 = 16;
		return;
	}
	Local_343.f_1[Local_343 /*4*/] = 0;
	func_59(&(Local_343.f_1[Local_343 /*4*/]), 1);
	if (bParam2)
	{
		func_59(&(Local_343.f_1[Local_343 /*4*/]), 2);
	}
	Local_343.f_1[Local_343 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343 /*4*/].f_3 = iParam1;
	Local_343++;
}

int func_298(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_340(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_299(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if ((PED::IS_PED_INJURED(uParam0->f_3) || ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false)) || FIRE::IS_ENTITY_ON_FIRE(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_300(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_160(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_301(var uParam0, var uParam1)
{
	int iVar0;

	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			MISC::CLEAR_BIT(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			MISC::SET_BIT(&(uParam0->f_60[iVar0 /*3*/]), 1);
			MISC::CLEAR_BIT(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_302(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_303()
{
	Local_190[5 /*10*/] = 5;
	Local_190[5 /*10*/].f_1 = 0;
	Local_190[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_190[5 /*10*/].f_9 = 78;
	Local_190[0 /*10*/] = 5;
	Local_190[0 /*10*/].f_1 = 0;
	Local_190[0 /*10*/].f_2 = "TX_AIR_N";
	Local_190[0 /*10*/].f_9 = 76;
	Local_190[2 /*10*/] = 5;
	Local_190[2 /*10*/].f_1 = 0;
	Local_190[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_190[2 /*10*/].f_9 = 21;
	Local_190[1 /*10*/] = 10;
	Local_190[1 /*10*/].f_1 = 0;
	Local_190[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_190[1 /*10*/].f_9 = 71;
	Local_190[4 /*10*/] = 10;
	Local_190[4 /*10*/].f_1 = 0;
	Local_190[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_190[4 /*10*/].f_9 = 79;
	Local_190[6 /*10*/] = 10;
	Local_190[6 /*10*/].f_1 = 0;
	Local_190[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_190[6 /*10*/].f_9 = 80;
	Local_190[9 /*10*/] = 15;
	Local_190[9 /*10*/].f_1 = 0;
	Local_190[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_190[9 /*10*/].f_9 = 82;
	Local_190[8 /*10*/] = 15;
	Local_190[8 /*10*/].f_1 = 0;
	Local_190[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_190[8 /*10*/].f_9 = 72;
	Local_190[7 /*10*/] = 15;
	Local_190[7 /*10*/].f_1 = 0;
	Local_190[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_190[7 /*10*/].f_9 = 74;
	Local_190[11 /*10*/] = 5;
	Local_190[11 /*10*/].f_1 = 0;
	Local_190[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_190[11 /*10*/].f_9 = 70;
	Local_190[12 /*10*/] = 5;
	Local_190[12 /*10*/].f_1 = 0;
	Local_190[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_190[12 /*10*/].f_9 = 69;
	Local_190[13 /*10*/] = 10;
	Local_190[13 /*10*/].f_1 = 0;
	Local_190[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_190[13 /*10*/].f_9 = 67;
	Local_190[14 /*10*/] = 10;
	Local_190[14 /*10*/].f_1 = 0;
	Local_190[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_190[14 /*10*/].f_9 = 75;
}

bool func_304()
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_840))
	{
		func_234("TAXI_ASSETS_STREAMED - Loading A_M_M_Farmer_01", &iLocal_852, 1000);
		return false;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1118))
	{
		return false;
	}
	if (!func_305(&iLocal_852, 1))
	{
		func_234("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_852, 1000);
		return false;
	}
	return true;
}

bool func_305(int iParam0, bool bParam1)
{
	if (!STREAMING::HAS_MODEL_LOADED(func_20()))
	{
		func_234("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return false;
	}
	if (bParam1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
		{
			func_234("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return false;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@taxi@"))
	{
		func_234("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@towingcome_here"))
	{
		func_234("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		func_234("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return false;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		func_234("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return false;
	}
	return true;
}

void func_306(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_123 = "TRS_STREAMING";
			break;
		case 2:
			uParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		case 3:
			uParam0->f_123 = " TRS_SPAWNING ";
			break;
		case 4:
			uParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		case 5:
			uParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		case 6:
			uParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		case 7:
			uParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		case 8:
			uParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		case 9:
			uParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		case 10:
			uParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		case 18:
			uParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		case 11:
			uParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		case 19:
			uParam0->f_123 = " TRS_CUTSCENE ";
			break;
		case 20:
			uParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		case 13:
			uParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		case 12:
			uParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		case 14:
			uParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		case 15:
			uParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		case 16:
			uParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		case 17:
			uParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		case 22:
			uParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		case 25:
			uParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		case 26:
			uParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		case 24:
			uParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		case 27:
			uParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		case 23:
			uParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		case 28:
			uParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		case 29:
			uParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		case 30:
			uParam0->f_123 = " TRS_CLEANUP ";
			break;
		case 21:
			uParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		default:
			uParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_410 = iParam1;
}

int func_307(var uParam0)
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_8 = func_165(uParam0->f_3, 0, 0);
		HUD::SET_GPS_FLAGS(1, 0f);
		HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, "TAXI_BLIP_PASS");
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
	}
	return 1;
}

int func_308(var uParam0, vector3 vParam1, vector3 vParam4, char* sParam7, int iParam8, float fParam9, int iParam10)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		func_309(uParam0, uParam0->f_14);
		uParam0->f_11 = { vParam1 };
		uParam0->f_14 = { vParam4 };
		func_37(uParam0->f_14, 0);
		MISC::CLEAR_AREA_OF_PEDS(uParam0->f_14, 2f, 0);
		func_35(uParam0->f_14, 0, iParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = PED::CREATE_RANDOM_PED(uParam0->f_11);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_110348.f_225[0]))
		{
			uParam0->f_3 = Global_110348.f_225[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, true);
		}
		else
		{
			uParam0->f_3 = PED::CREATE_PED(26, iParam8, uParam0->f_11, fParam9, true, true);
		}
		func_8(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_3, sParam7);
		PED::SET_PED_RESET_FLAG(uParam0->f_3, 112, true);
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_3, 250);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 32, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 104, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 177, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 116, false);
			PED::ADD_RELATIONSHIP_GROUP("TAXI_Passenger", &(uParam0->f_413));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uParam0->f_413, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uParam0->f_413, joaat("COP"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_309(var uParam0, vector3 vParam1)
{
	uParam0->f_51[0] = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(vParam1, 20f, 5f, false);
}

void func_310(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;

	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_103(&(iParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_102(&(iParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_103(&(iParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_102(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_311()
{
	STREAMING::REQUEST_MODEL(iLocal_840);
	func_313(1);
	iLocal_1118 = func_312();
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\TREVOR_2_BIKER_RINGTONE", false, -1);
}

int func_312()
{
	return UNK_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
}

void func_313(bool bParam0)
{
	STREAMING::REQUEST_MODEL(func_20());
	if (bParam0)
	{
		STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	}
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@towingcome_here");
	STREAMING::REQUEST_ANIM_DICT("misscommon@response");
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
	if (!func_154(Global_111638.f_19092, 128))
	{
		func_58(&(Global_111638.f_19092), 128);
	}
}

void func_314(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0->f_411 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (bParam2)
			{
				if (func_171(iParam0, 10) > (20f + 10f))
				{
					if (iParam0->f_112)
					{
						func_245(iParam0, 92, 1, 0, 0);
						iParam0->f_112 = 0;
					}
					else
					{
						func_245(iParam0, 83, 1, 0, 0);
					}
					iParam0->f_113 = 1;
					func_310(iParam0, 10, 0f, 1);
				}
			}
			else if (func_171(iParam0, 10) > 20f)
			{
				if (iParam0->f_112)
				{
					func_245(iParam0, 92, 1, 0, 0);
					iParam0->f_112 = 0;
				}
				else
				{
					func_245(iParam0, 83, 1, 0, 0);
				}
				iParam0->f_113 = 1;
				func_310(iParam0, 10, 0f, 1);
			}
		}
	}
	if (iParam0->f_411 == 1)
	{
		if (func_171(iParam0, 10) > 30f)
		{
			if (!func_173())
			{
				if (iParam0->f_112)
				{
					func_245(iParam0, 92, 1, 0, 0);
					iParam0->f_112 = 0;
				}
				else
				{
					func_245(iParam0, 83, 1, 0, 0);
				}
				iParam0->f_113 = 1;
				func_310(iParam0, 10, 0f, 1);
			}
		}
	}
	if (func_154(iParam0->f_100, 64))
	{
		if (!func_15(&(Local_190[5 /*10*/].f_6)))
		{
			func_172(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_337(iParam0))
			{
				if (iParam0->f_113)
				{
					func_245(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_245(iParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_336(iParam0, 1);
				func_334(5, iParam0);
				func_333(iParam0);
			}
		}
	}
	if (func_154(iParam0->f_100, 1))
	{
		if (!func_15(&(Local_190[0 /*10*/].f_6)))
		{
			func_172(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_332(iParam0))
			{
				func_336(iParam0, 1);
				func_334(0, iParam0);
				if (iParam0->f_113)
				{
					func_245(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_245(iParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_333(iParam0);
			}
		}
	}
	if (func_154(iParam0->f_100, 2))
	{
		if (!func_15(&(Local_190[1 /*10*/].f_6)))
		{
			func_172(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_331(iParam0))
			{
				func_336(iParam0, 1);
				func_334(1, iParam0);
				if (iParam0->f_113)
				{
					func_245(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_245(iParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_333(iParam0);
			}
		}
	}
	if (func_154(iParam0->f_100, 2048))
	{
		if (!func_15(&(Local_190[8 /*10*/].f_6)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4))
			{
				iParam0->f_46 = ENTITY::GET_ENTITY_HEALTH(iParam0->f_4);
				func_172(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_100(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_330(iParam0))
			{
				func_336(iParam0, 1);
				func_334(8, iParam0);
				func_333(iParam0);
			}
		}
	}
	if (func_154(iParam0->f_100, 128))
	{
		if (!func_15(&(Local_190[6 /*10*/].f_6)))
		{
			func_172(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_329(iParam0))
			{
				func_336(iParam0, 1);
				func_334(6, iParam0);
				if (iParam0->f_113)
				{
					func_245(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_245(iParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_333(iParam0);
			}
		}
	}
	if (func_154(iParam0->f_100, 32))
	{
		if (!func_15(&(Local_190[4 /*10*/].f_6)))
		{
			func_172(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_328(iParam0))
			{
				func_336(iParam0, 1);
				func_334(4, iParam0);
				if (iParam0->f_113)
				{
					func_245(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_245(iParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_333(iParam0);
			}
		}
	}
	if (func_154(iParam0->f_100, 256))
	{
		if (!func_15(&(Local_190[7 /*10*/].f_6)))
		{
			func_172(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_327(iParam0))
			{
				func_334(7, iParam0);
				func_336(iParam0, 1);
				if (iParam0->f_113)
				{
					func_245(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_245(iParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_333(iParam0);
			}
		}
	}
	if (func_154(iParam0->f_100, 8))
	{
		if (!func_15(&(Local_190[9 /*10*/].f_6)))
		{
			func_172(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
		else if (func_100(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_326(iParam0))
			{
				func_336(iParam0, 1);
				func_334(9, iParam0);
				if (iParam0->f_113)
				{
					func_245(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_245(iParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_333(iParam0);
			}
		}
	}
	if (func_154(iParam0->f_100, 16384))
	{
		if (!func_15(&(Local_190[13 /*10*/].f_6)))
		{
			func_172(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_320(iParam0))
			{
				func_336(iParam0, 1);
				func_334(13, iParam0);
				if (iParam0->f_113)
				{
					func_245(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_245(iParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_333(iParam0);
			}
		}
	}
	if (func_154(iParam0->f_100, 32768))
	{
		if (!func_15(&(Local_190[14 /*10*/].f_6)))
		{
			func_172(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_319(iParam0))
			{
				func_336(iParam0, 1);
				func_334(14, iParam0);
				if (iParam0->f_113)
				{
					func_245(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_245(iParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_333(iParam0);
			}
		}
	}
	if (func_154(iParam0->f_100, 4096))
	{
		if (!func_15(&(Local_190[11 /*10*/].f_6)))
		{
			func_172(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_318(iParam0))
			{
				func_336(iParam0, 1);
				func_334(11, iParam0);
				if (iParam0->f_113)
				{
					func_245(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_245(iParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_333(iParam0);
			}
		}
	}
	if (func_154(iParam0->f_100, 8192))
	{
		if (!func_15(&(Local_190[12 /*10*/].f_6)))
		{
			func_172(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_317(iParam0))
			{
				func_336(iParam0, 1);
				func_334(12, iParam0);
				if (iParam0->f_113)
				{
					func_245(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_245(iParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_333(iParam0);
			}
		}
	}
	if (func_154(iParam0->f_100, 4))
	{
		if (!func_15(&(Local_190[2 /*10*/].f_6)))
		{
			func_316(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_100(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_315(iParam0))
			{
				if (iParam0->f_113)
				{
					func_245(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_245(iParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_336(iParam0, 1);
				func_334(2, iParam0);
				func_333(iParam0);
			}
		}
	}
}

bool func_315(int iParam0)
{
	float fVar0;

	if (!PED::IS_PED_INJURED(iParam0->f_2))
	{
		if ((!PED::IS_PED_STOPPED(iParam0->f_2) && !func_15(&(Local_190[0 /*10*/].f_3))) && !func_15(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[2 /*10*/].f_3)))
			{
				iParam0->f_37 = ENTITY::GET_ENTITY_SPEED(iParam0->f_2);
				if (iParam0->f_37 > 10f)
				{
					func_172(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_100(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				iParam0->f_38 = iParam0->f_37;
				iParam0->f_37 = ENTITY::GET_ENTITY_SPEED(iParam0->f_2);
				fVar0 = (iParam0->f_38 - iParam0->f_37);
				func_99(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && iParam0->f_37 < 12f)
				{
					return true;
				}
			}
		}
		else
		{
			func_99(&(Local_190[2 /*10*/].f_3));
		}
	}
	return false;
}

void func_316(int* iParam0, float fParam1)
{
	if (!func_15(iParam0))
	{
		func_103(iParam0, fParam1);
	}
}

bool func_317(int iParam0)
{
	vector3 vVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0->f_4, true) };
		if (vVar0.y < -10f && !func_15(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[12 /*10*/].f_3)))
			{
				func_172(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_99(&(Local_190[12 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_99(&(Local_190[12 /*10*/].f_3));
		}
	}
	return false;
}

bool func_318(int iParam0)
{
	vector3 vVar0;

	if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false) && !func_15(&(Local_190[0 /*10*/].f_3))) && !func_15(&(Local_190[1 /*10*/].f_3))) && !func_15(&(Local_190[5 /*10*/].f_3))) && !func_15(&(Local_190[9 /*10*/].f_3))) && !func_15(&(Local_190[7 /*10*/].f_3))) && !func_15(&(Local_190[8 /*10*/].f_3)))
	{
		vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0->f_4, true) };
		if (MISC::ABSF(vVar0.x) > 2.5f && !func_15(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[11 /*10*/].f_3)))
			{
				func_172(&(Local_190[11 /*10*/].f_3));
				fLocal_342 = vVar0.x;
			}
			else if (func_100(&(Local_190[11 /*10*/].f_3)) < 1.5f && (MISC::ABSF(fLocal_342) - MISC::ABSF(vVar0.x)) < 0f)
			{
				func_99(&(Local_190[11 /*10*/].f_3));
				return true;
			}
			else if (func_100(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_99(&(Local_190[11 /*10*/].f_3));
				return false;
			}
		}
	}
	return false;
}

bool func_319(int iParam0)
{
	if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false) && !func_15(&(Local_190[0 /*10*/].f_3))) && !func_15(&(Local_190[8 /*10*/].f_3))) && !func_15(&(Local_190[5 /*10*/].f_3))) && !func_15(&(Local_190[9 /*10*/].f_3))) && !func_15(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_15(&(Local_190[14 /*10*/].f_3)))
		{
			iParam0->f_5 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(iParam0->f_4, true), 10f, 0, 260);
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_5))
			{
				if ((ENTITY::GET_ENTITY_SPEED(iParam0->f_4) > 15f && func_164(iParam0->f_5, iParam0->f_4, 1) < 3f) && (!ENTITY::IS_ENTITY_DEAD(iParam0->f_5, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0->f_5, -1, false)))
				{
					func_172(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_100(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_164(iParam0->f_5, iParam0->f_4, 1) > 4.5f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0->f_5))
		{
			func_99(&(Local_190[14 /*10*/].f_3));
			return true;
		}
		else if (func_100(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_99(&(Local_190[14 /*10*/].f_3));
			return false;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0->f_5))
		{
			func_99(&(Local_190[14 /*10*/].f_3));
			return false;
		}
	}
	return false;
}

bool func_320(int iParam0)
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false) && !func_15(&(Local_190[9 /*10*/].f_3))) && !func_15(&(Local_190[7 /*10*/].f_3))) && !func_15(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_321(iParam0->f_4) && ENTITY::GET_ENTITY_SPEED(iParam0->f_4) > 15f)
		{
			if (!func_15(&(Local_190[13 /*10*/].f_3)))
			{
				func_172(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_99(&(Local_190[13 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_99(&(Local_190[13 /*10*/].f_3));
		}
	}
	return false;
}

int func_321(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	float fVar27;

	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 1, &vVar0, 1, 3f, 0f);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 2, &vVar3, 1, 3f, 0f);
	PATHFIND::_GET_POINT_ON_ROAD_SIDE(vVar0, -1, &vVar6);
	fVar27 = SYSTEM::VMAG(vVar6 - vVar0);
	vVar9 = { func_325((vVar3.x - vVar0.x), (vVar3.y - vVar0.y), 0f) };
	vVar12 = { func_324(vVar9, 0) * Vector(fVar27, fVar27, fVar27) };
	vVar9 = { vVar9 * Vector(2f, 2f, 2f) };
	vVar15 = { vVar0 - vVar9 + vVar12 };
	vVar18 = { vVar0 - vVar9 - vVar12 };
	vVar21 = { vVar3 + vVar9 + vVar12 };
	vVar24 = { vVar3 + vVar9 - vVar12 };
	vVar24 = { vVar24 };
	return func_322(ENTITY::GET_ENTITY_COORDS(iParam0, true), vVar15, vVar18, vVar21);
}

int func_322(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	vParam6.f_2 = 0f;
	vParam9.f_2 = 0f;
	vVar0 = { func_325(vParam6 - vParam3) };
	vVar3 = { func_325(vParam9 - vParam3) };
	fVar6 = func_323(vParam0, vVar0);
	fVar7 = func_323(vParam3, vVar0);
	fVar8 = func_323(vParam6, vVar0);
	fVar9 = func_323(vParam0, vVar3);
	fVar10 = func_323(vParam3, vVar3);
	fVar11 = func_323(vParam9, vVar3);
	if (fVar7 > fVar8)
	{
		fVar12 = fVar7;
		fVar7 = fVar8;
		fVar8 = fVar12;
	}
	if (fVar6 < fVar7 || fVar6 > fVar8)
	{
		return 0;
	}
	if (fVar10 > fVar11)
	{
		fVar13 = fVar10;
		fVar10 = fVar11;
		fVar11 = fVar13;
	}
	if (fVar9 < fVar10 || fVar9 > fVar11)
	{
		return 0;
	}
	return 1;
}

float func_323(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_324(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	switch (iParam3)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.f_1 = vParam0.x;
			break;
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.f_1 = -vParam0.y;
			break;
		case 2:
			vVar0.x = vParam0.y;
			vVar0.f_1 = -vParam0.x;
			break;
	}
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

Vector3 func_325(vector3 vParam0)
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

bool func_326(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_327(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0->f_4))
			{
				if (!bLocal_341)
				{
					if (ENTITY::GET_ENTITY_ROLL(iParam0->f_4) <= -145f || ENTITY::GET_ENTITY_ROLL(iParam0->f_4) >= 145f)
					{
						bLocal_341 = true;
					}
				}
			}
			else if (bLocal_341)
			{
				if (ENTITY::GET_ENTITY_ROLL(iParam0->f_4) <= 35f && ENTITY::GET_ENTITY_ROLL(iParam0->f_4) >= -35f)
				{
					bLocal_341 = false;
					return true;
				}
			}
		}
	}
	return false;
}

bool func_328(int iParam0)
{
	int iVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_15(&(Local_190[4 /*10*/].f_3)))
			{
				func_172(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_99(&(Local_190[4 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_99(&(Local_190[4 /*10*/].f_3));
		}
	}
	return false;
}

bool func_329(int iParam0)
{
	int iVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_15(&(Local_190[6 /*10*/].f_3)))
			{
				func_172(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_99(&(Local_190[6 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_99(&(Local_190[6 /*10*/].f_3));
		}
	}
	return false;
}

bool func_330(int iParam0)
{
	int iVar0;
	int iVar1;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iParam0->f_4))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(iParam0->f_4);
			iVar1 = (iParam0->f_46 - iVar0);
			iParam0->f_46 = iVar0;
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (iParam0->f_113)
				{
					func_245(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_245(iParam0, 72, 1, 0, 1);
				}
				func_99(&(Local_190[2 /*10*/].f_6));
				return true;
			}
		}
	}
	return false;
}

bool func_331(int iParam0)
{
	vector3 vVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0->f_4, true) };
		if (MISC::ABSF(vVar0.x) > 3f && !func_15(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[1 /*10*/].f_3)))
			{
				func_172(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_99(&(Local_190[1 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_99(&(Local_190[1 /*10*/].f_3));
		}
	}
	return false;
}

bool func_332(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_4) && ENTITY::IS_ENTITY_IN_AIR(iParam0->f_4))
		{
			if (!func_15(&(Local_190[0 /*10*/].f_3)))
			{
				func_172(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_99(&(Local_190[0 /*10*/].f_3));
				func_102(&(Local_190[1 /*10*/].f_6));
				return true;
			}
		}
		else
		{
			func_99(&(Local_190[0 /*10*/].f_3));
		}
	}
	return false;
}

void func_333(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_15(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_102(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_310(iParam0, 10, 0f, 1);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
}

void func_334(int iParam0, int iParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_335(iParam1, iParam0);
	func_99(&(Local_190[iParam0 /*10*/].f_6));
	iParam1->f_112 = 1;
}

void func_335(int iParam0, int iParam1)
{
	iParam0->f_76 = (iParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_336(int iParam0, int iParam1)
{
	iParam0->f_104 = (iParam0->f_104 + iParam1);
}

bool func_337(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(iParam0->f_4) > 25f)
		{
			if (!func_15(&(Local_190[5 /*10*/].f_3)))
			{
				func_172(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_99(&(Local_190[5 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_99(&(Local_190[5 /*10*/].f_3));
		}
	}
	return false;
}

float func_338(int iParam0, bool bParam1)
{
	return func_164(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

bool func_339(var uParam0, int iParam1, bool bParam2)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, uParam0->f_4, true))
			{
				return true;
			}
		}
	}
	if (bParam2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_340(int iParam0, char* sParam1, int iParam2)
{
	vector3 vVar0[24];

	func_168();
	func_437(2);
	cVar0 = { func_156() };
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0) && func_173()) && !MISC::ARE_STRINGS_EQUAL(&cVar0, "NULL"))
	{
	}
	else
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		StringCopy(&cVar0, iParam0->f_143, 24);
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
		{
			if (!func_144(iParam0))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					TASK::STOP_ANIM_TASK(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					TASK::STOP_ANIM_TASK(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					TASK::STOP_ANIM_TASK(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		iParam0->f_109 = 1;
		iParam0->f_121 = sParam1;
		iParam0->f_415 = iParam2;
		func_310(iParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_aband1", 24);
				}
				func_345(iParam0, &cVar0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_267(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (iParam0->f_115)
			{
				StringConCat(&cVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&cVar0, "_aggro", 24);
			}
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam0->f_415 == 15)
		{
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&cVar0, "_lost1", 24);
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&cVar0, "_spotd1", 24);
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&cVar0, "_wntd1", 24);
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&cVar0, "_spook", 24);
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_144(iParam0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iParam0->f_4))
				{
					func_343(iParam0, 4096, 0);
				}
				else
				{
					func_343(iParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&cVar0, "_hit2", 24);
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&cVar0, "_jak", 24);
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_shot1", 24);
				}
				func_345(iParam0, &cVar0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_267(iParam0->f_3, "CALL_COPS_COMMIT", iParam0->f_145, 4);
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&cVar0, "_shot1", 24);
			func_345(iParam0, &cVar0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&cVar0, "_shot1", 24);
			func_345(iParam0, &cVar0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_46(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_345(iParam0, &cVar0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_267(iParam0->f_3, "GENERIC_INSULT_MED", iParam0->f_145, 4);
			}
			func_343(iParam0, 0, 0);
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_46(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_345(iParam0, &cVar0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_267(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_46(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_345(iParam0, &cVar0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_267(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&cVar0, "OJTX_QUIT_", 24);
			func_342(&cVar0);
			func_341(&(iParam0->f_244), "OJTXAUD", &cVar0, 7, 0, 0, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (iParam0->f_115)
			{
				StringConCat(&cVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&cVar0, "_fail1", 24);
			}
			func_345(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&cVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&cVar0, "_aband1", 24);
				}
				if (iParam0->f_410 > 5)
				{
					func_345(iParam0, &cVar0);
				}
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				func_267(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_46(3, 0);
		}
		func_310(iParam0, 3, 0f, 1);
	}
}

int func_341(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_195(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_184(sParam2, iParam3, 0);
}

void func_342(char* sParam0)
{
	switch (func_3(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_343(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_3, false);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0->f_3);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam0->f_3, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_3, 17, true);
		TASK::CLEAR_PED_TASKS(iParam0->f_3);
		if ((func_167(iParam0->f_3, iParam0->f_29, 1) <= 200f && !func_138(iParam0->f_29)) && !bParam2)
		{
			func_344(iParam0);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0->f_3, 1024, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0->f_3, 131072, true);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);
			if (iParam0->f_415 == 8)
			{
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
			}
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0->f_3, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(iParam0->f_3, true);
	}
}

void func_344(int iParam0)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
	{
		if (func_438(func_38(), iParam0->f_29, 0))
		{
			if (iParam0->f_411 == 2)
			{
				ENTITY::SET_ENTITY_HEADING(iParam0->f_3, 84.9058f);
				PED::SET_PED_KEEP_TASK(iParam0->f_3, true);
			}
			else if (iParam0->f_411 == 4)
			{
				ENTITY::SET_ENTITY_HEADING(iParam0->f_3, 68.3138f);
				PED::SET_PED_KEEP_TASK(iParam0->f_3, true);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(iParam0->f_3, 40000f, 0);
			}
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iParam0->f_3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iParam0->f_29, 1f, -1, 0.25f, false, 40000f);
			if (iParam0->f_411 == 2)
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_AA_SMOKE", 0, false);
			}
			else if (iParam0->f_411 == 0)
			{
				TASK::TASK_CLIMB_LADDER(0, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 0.25f, false, 40000f);
				TASK::TASK_ACHIEVE_HEADING(0, 151.7794f, 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING_POT", 0, false);
			}
			else if (iParam0->f_411 == 4)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, iParam0->f_29, 15f, 0);
			}
			else if (iParam0->f_411 == 1)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, iParam0->f_29, 15f, 20000);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "base", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, -1, 0, 0f, false, false, false);
			}
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(iParam0->f_29, 15f, true))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, iParam0->f_29, 15f, 0);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0->f_3, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(iParam0->f_3, true);
	}
}

void func_345(int iParam0, char* sParam1)
{
	if (func_346(iParam0))
	{
		func_341(&(iParam0->f_244), iParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

bool func_346(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
	{
		if (func_164(PLAYER::PLAYER_PED_ID(), iParam0->f_3, 1) < 40f && !ENTITY::IS_ENTITY_OCCLUDED(iParam0->f_3))
		{
			return true;
		}
	}
	return false;
}

int func_347(var uParam0)
{
	return uParam0->f_118;
}

void func_348()
{
	func_378(&Local_410);
	if (func_377(&Local_410, &Local_1039))
	{
		switch (Local_1039.f_27)
		{
			case 0:
				if (Local_410.f_410 == 9)
				{
					if (!func_376(&Local_410))
					{
						if (func_375("TX_OBJ_GYN_DO") || HUD::DOES_BLIP_EXIST(Local_410.f_9))
						{
							Local_1039.f_27++;
						}
						else if (func_238(&Local_410) != 10)
						{
							func_245(&Local_410, 10, 1, 0, 1);
						}
					}
				}
				break;
			case 1:
				if ((func_238(&Local_410) > 10 && func_238(&Local_410) != 15) && !func_376(&Local_410))
				{
					func_245(&Local_410, 15, 1, 0, 0);
					if (bLocal_1038)
					{
					}
					func_205(&Local_410, 7);
				}
				break;
			case 2:
				if (func_171(&Local_410, 18) > 4f && !bLocal_864)
				{
					iLocal_858 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_858, "Biker_Ring_Tone", Local_410.f_4, "TREVOR_2_SOUNDS", false, 0);
					bLocal_864 = true;
				}
				else if (((func_171(&Local_410, 18) > 7f && func_238(&Local_410) != 16) && bLocal_864) && !bLocal_866)
				{
					func_374(&iLocal_858);
					if (!PED::IS_PED_INJURED(Local_410.f_3))
					{
						TASK::TASK_USE_MOBILE_PHONE(Local_410.f_3, 1, 1);
					}
					func_245(&Local_410, 16, 1, 0, 0);
					if (bLocal_1038)
					{
					}
					bLocal_866 = true;
				}
				break;
			case 3:
				if (!PED::IS_PED_INJURED(Local_410.f_3))
				{
					TASK::TASK_USE_MOBILE_PHONE(Local_410.f_3, 0, 1);
				}
				Local_1039.f_27++;
				break;
			case 5:
				if (func_171(&Local_410, 18) > 2f && func_238(&Local_410) != 131)
				{
					func_245(&Local_410, 131, 1, 0, 0);
					if (bLocal_1038)
					{
					}
					Local_1039.f_27++;
				}
				break;
		}
	}
	func_349(&Local_410, &uLocal_1069, &Local_1039, bLocal_1038);
}

int func_349(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	func_357(iParam0, uParam1);
	if (((*uParam2 == -1 && iParam0->f_410 < 29) && !iParam0->f_109) && !func_206(iParam0, 2))
	{
		if (func_356(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((MISC::GET_GAME_TIMER() % 2000) < 50)
		{
		}
	}
	if (!iParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_355(iParam0))
				{
					uParam2->f_7 = { func_354(uParam1) };
					func_341(&(iParam0->f_244), iParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			case 2:
				if (func_173())
				{
					uParam2->f_13 = { func_248() };
					if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_59(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_352(uParam1);
					func_310(iParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			case 3:
				if (func_212(iParam0))
				{
					if (func_173())
					{
						func_310(iParam0, 17, 0f, 1);
						uParam2->f_1 = { func_351() };
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_173())
				{
					uParam2->f_19 = { func_156() };
				}
				else
				{
					func_59(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_352(uParam1);
					func_310(iParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			case 4:
				if (((!func_206(iParam0, 14) && !func_173()) && !func_212(iParam0)) && func_171(iParam0, 18) > 1f)
				{
					func_310(iParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			case 6:
				if (!func_173())
				{
					if (func_171(iParam0, 18) > 1f)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							func_350(&(iParam0->f_244), iParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			case 7:
				if (!func_173())
				{
					func_59(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_352(uParam1);
					func_310(iParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
		}
	}
	return 0;
}

int func_350(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_195(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_184(sParam2, iParam4, 0);
}

struct<6> func_351()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_21815);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_19673[iVar7 /*6*/])))
			{
				return Global_19673[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_19673[iVar8 /*6*/])))
					{
						return Global_19673[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_19673[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_352(var uParam0)
{
	int iVar0;

	iVar0 = func_353(uParam0);
	if (iVar0 > -1)
	{
		func_159(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_159(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_58(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_147(), 24);
	}
}

int func_353(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_154((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_354(var uParam0)
{
	int iVar0;
	struct<6> Var1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_154((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_58(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

bool func_355(int iParam0)
{
	switch (iParam0->f_411)
	{
		case 0:
			if (func_214("TX_OBJ_NEX_DO", 0, 0))
			{
				return true;
			}
			break;
		case 1:
			if (func_214("TX_OBJ_TIE_DO", 0, 0))
			{
				return true;
			}
			break;
		case 2:
			if (func_214("TX_OBJ_DL_DO", 0, 0))
			{
				return true;
			}
			break;
		case 3:
			if ((func_214("TX_OBJ_GYB_DO", 0, 0) || func_214("TAXI_OBJ_GYB", 0, 0)) || func_214("TAXI_OBJ_GYB_2", 0, 0))
			{
				return true;
			}
			break;
		case 4:
			if (func_214("TX_OBJ_TTB_DO", 0, 0))
			{
				return true;
			}
			break;
		case 5:
			if ((func_214("TX_OBJ_CYI_DO", 0, 0) || func_214("TAXI_OBJ_CYI_01", 0, 0)) || func_214("TAXI_OBJ_CYI_02", 0, 0))
			{
				return true;
			}
			break;
		case 6:
			if (((func_214("TX_OBJ_GYN_DO", 0, 0) || func_214("TAXI_OBJ_GYN", 0, 0)) || func_214("TAXI_OBJ_GYN_TG", 0, 0)) || func_214("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return true;
			}
			break;
		case 7:
			if ((func_214("TAXI_OBJ_CC1", 0, 0) || func_214("TAXI_OBJ_CC2", 0, 0)) || func_214("TAXI_OBJ_CC3", 0, 0))
			{
				return true;
			}
			break;
		case 8:
			if ((func_214("TAXI_OBJ_FTC1", 0, 0) || func_214("TAXI_OBJ_FTC2", 0, 0)) || func_214("TAXI_OBJ_FTC3", 0, 0))
			{
				return true;
			}
			break;
		case 9:
			if (func_214("TX_OBJ_PRO_DO", 0, 0))
			{
				return true;
			}
			break;
	}
	return (((((func_214("TAXI_OBJ_GETRUN", 0, 0) || func_214("TAXI_OBJ_DRIVE", 0, 0)) || func_214("TAXI_OBJ_RETURN", 0, 0)) || func_214("TAXI_OBJ_POL", 0, 0)) || func_214("TAXI_OBJ_RUNOUT", 0, 0)) || func_214("TAXI_OBJ_POL", 0, 0));
}

bool func_356(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_154((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_357(int iParam0, var uParam1)
{
	vector3 vVar0[24];
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;

	if (func_355(iParam0))
	{
	}
	else if (!iParam0->f_110)
	{
	}
	else if (func_206(iParam0, 14))
	{
		StringCopy(&cVar0, iParam0->f_143, 24);
		switch (func_238(iParam0))
		{
			case 55:
				StringConCat(&cVar0, "_lvMe1", 24);
				cVar6 = { cVar0 };
				func_373(&(iParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_183(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_372(4, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 2:
				if (!func_173())
				{
					if (iParam0->f_115)
					{
						StringConCat(&cVar0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&cVar0, "_retrn1", 24);
					}
					if (iParam0->f_411 != 9)
					{
						func_371(iParam0, &cVar0, 0, 0, 8);
					}
				}
				else
				{
					func_368(iParam0, cVar0, func_370(iParam0, 2));
				}
				if (func_154(iParam0->f_98, 4))
				{
					func_310(iParam0, 16, 0, 0);
					func_272(iParam0, 0, 0);
				}
				func_223(iParam0, &(iParam0->f_98), 4, 3);
				break;
			case 3:
				if (func_171(iParam0, 16) > 1f)
				{
					func_225(1);
					if (iParam0->f_411 == 9)
					{
						func_271("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_271("TAXI_VIP_RETURN", 7500, 1);
					}
					func_310(iParam0, 16, 0, 0);
					func_272(iParam0, 0, 0);
				}
				break;
			case 65:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_aggro", 24);
				}
				iParam0->f_107++;
				if (iParam0->f_411 != 9)
				{
					func_371(iParam0, &cVar0, 0, 1, 8);
				}
				else if (!PED::IS_PED_INJURED(iParam0->f_3))
				{
					func_267(iParam0->f_3, "TAXI_WHAT_THE_HELL", iParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_171(iParam0, 16) > func_153(iParam0->f_411 == 0, 1f, 4f) && !iParam0->f_142) && (((iParam0->f_411 == 0 || iParam0->f_411 == 1) && !func_173()) || (iParam0->f_411 != 0 && iParam0->f_411 != 1)))
	{
		StringCopy(&cVar0, iParam0->f_143, 24);
		switch (func_238(iParam0))
		{
			case 142:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_371(iParam0, &cVar0, 1, 0, 8);
				break;
			case 56:
				StringConCat(&cVar0, "_lvMe2", 24);
				cVar6 = { cVar0 };
				func_373(&(iParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_183(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_372(4, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 0:
				if (iParam0->f_411 == 9)
				{
					func_341(&(iParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_245(iParam0, 1, 1, 0, 0);
				break;
			case 1:
				func_310(iParam0, 16, 0, 0);
				func_245(iParam0, 4, 0, 0, 0);
				break;
			case 4:
				StringConCat(&cVar0, "_hail1", 24);
				cVar6 = { cVar0 };
				if (!func_154(iParam0->f_44, 128))
				{
					if ((iParam0->f_411 == 0 || iParam0->f_411 == 1) || iParam0->f_411 == 4)
					{
						func_373(&(iParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_183(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_371(iParam0, &cVar0, 0, 0, 8);
					}
				}
				func_310(iParam0, 16, 4f, 0);
				iParam0->f_141 = 1;
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 5:
				if (iParam0->f_411 == 7)
				{
					func_271("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_271("TAXI_OBJ_PICKUP", 7500, 1);
				}
				iParam0->f_141 = 1;
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 8:
				StringConCat(&cVar0, "_obj1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				if (iParam0->f_411 != 7 && iParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(iParam0->f_9))
					{
						iParam0->f_9 = func_152(iParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(iParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(iParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(iParam0->f_9, iParam0->f_17);
						HUD::SET_BLIP_ROUTE(iParam0->f_9, true);
					}
				}
				func_245(iParam0, 10, 1, 0, 0);
				iParam0->f_417 = 10;
				break;
			case 9:
				if ((iParam0->f_101 == 1 || iParam0->f_411 == 2) || iParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_gret1", 24);
				}
				else
				{
					switch (iParam0->f_102)
					{
						case 1:
							StringConCat(&cVar0, "_gret1", 24);
							break;
						case 0:
							StringConCat(&cVar0, "_gret2", 24);
							break;
						case 2:
							StringConCat(&cVar0, "_gret3", 24);
							break;
						default:
							StringConCat(&cVar0, "_gret4", 24);
							break;
					}
				}
				func_247(&cVar0);
				if (iParam0->f_411 != 9)
				{
					func_371(iParam0, &cVar0, 0, 0, 8);
				}
				else
				{
					func_267(iParam0->f_3, "TAXI_START", iParam0->f_145, 4);
				}
				if (iParam0->f_411 != 7 && iParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(iParam0->f_9))
					{
						iParam0->f_9 = func_152(iParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(iParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(iParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(iParam0->f_9, iParam0->f_17);
						HUD::SET_BLIP_ROUTE(iParam0->f_9, true);
					}
				}
				func_245(iParam0, 10, 1, 0, 0);
				iParam0->f_417 = 10;
				break;
			case 7:
				StringConCat(&cVar0, "_dest2", 24);
				func_367(iParam0, 33554432, cVar0, "", 1, 8);
				func_310(iParam0, 16, 0, 0);
				func_245(iParam0, 10, 1, 0, 0);
				iParam0->f_417 = 10;
				break;
			case 10:
				if (!func_173())
				{
					func_366(iParam0, 0);
					func_58(&(iParam0->f_44), 4);
					func_310(iParam0, 16, 0, 0);
					func_245(iParam0, 13, 0, 0, 0);
				}
				break;
			case 14:
				switch (iParam0->f_102)
				{
					case 0:
						StringConCat(&cVar0, "_bant2", 24);
						break;
					case 1:
						StringConCat(&cVar0, "_bant1", 24);
						break;
					case 2:
						StringConCat(&cVar0, "_bant3", 24);
						break;
					default:
						StringConCat(&cVar0, "_bant1", 24);
						break;
				}
				func_247(&cVar0);
				func_364(cVar0, uParam1);
				func_310(iParam0, 16, 0, 0);
				func_310(iParam0, 11, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 15:
				if (func_171(iParam0, 11) > iParam0->f_36)
				{
					if (iParam0->f_411 == 0)
					{
						StringConCat(&cVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&cVar0, "_bant1", 24);
						func_247(&cVar0);
					}
					func_364(cVar0, uParam1);
					func_58(&(iParam0->f_81), 67108864);
					func_310(iParam0, 16, 0, 0);
					func_310(iParam0, 11, 0, 0);
					func_272(iParam0, 0, 0);
				}
				break;
			case 16:
				if (func_171(iParam0, 11) > iParam0->f_36)
				{
					if (iParam0->f_411 == 0)
					{
						StringConCat(&cVar0, "_ban2", 24);
					}
					else if (iParam0->f_411 == 1)
					{
						StringConCat(&cVar0, "_banter", 24);
					}
					else
					{
						StringConCat(&cVar0, "_bant2", 24);
						if (iParam0->f_411 != 6)
						{
							func_247(&cVar0);
						}
					}
					func_364(cVar0, uParam1);
					func_310(iParam0, 11, 0, 0);
					func_310(iParam0, 16, 0, 0);
					func_272(iParam0, 0, 0);
				}
				break;
			case 17:
				if (iParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_ban3", 24);
				}
				else
				{
					StringConCat(&cVar0, "_bant3", 24);
					func_247(&cVar0);
				}
				func_364(cVar0, uParam1);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 18:
				if (iParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&cVar0, "_bant4", 24);
				}
				func_247(&cVar0);
				func_364(cVar0, uParam1);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 19:
				if (iParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&cVar0, "_bant5", 24);
				}
				func_247(&cVar0);
				func_364(cVar0, uParam1);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 20:
				StringConCat(&cVar0, "_dest2b", 24);
				func_247(&cVar0);
				func_364(cVar0, uParam1);
				func_310(iParam0, 16, 0, 0);
				func_310(iParam0, 11, 0, 0);
				func_272(iParam0, 0, 0);
				func_58(&(iParam0->f_82), 262144);
				iParam0->f_36 = 20f;
				break;
			case 23:
				StringConCat(&cVar0, "_seePt1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				func_245(iParam0, 24, 1, 0, 0);
				break;
			case 24:
				iParam0->f_417 = 24;
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 90:
				StringConCat(&cVar0, "_talk", 24);
				StringIntConCat(&cVar0, 1, 24);
				func_247(&cVar0);
				func_371(iParam0, &cVar0, 1, 0, 8);
				break;
			case 89:
				switch (iParam0->f_102)
				{
					case 0:
						StringConCat(&cVar0, "_deal1", 24);
						break;
					case 1:
						StringConCat(&cVar0, "_deal1", 24);
						break;
					default:
						StringConCat(&cVar0, "_deal1", 24);
						break;
				}
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 91:
				StringConCat(&cVar0, "_ig1c", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 27:
				StringConCat(&cVar0, "_bTime", 24);
				if (iParam0->f_411 == 2)
				{
					iVar13 = 8;
				}
				else
				{
					iVar13 = 3;
				}
				iVar12 = 0;
				while (iVar12 < iVar13)
				{
					switch (iParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar15[iVar12] = 0;
									break;
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (iParam0->f_411 == 2)
				{
					func_363(&(iParam0->f_90), 8, &cVar0, &iVar15, 1, 0);
				}
				else
				{
					func_363(&(iParam0->f_90), 3, &cVar0, &iVar15, 1, 0);
				}
				func_364(cVar0, uParam1);
				func_372(0, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_310(iParam0, 16, 0, 0);
				func_310(iParam0, 6, 0f, 1);
				func_272(iParam0, 0, 0);
				break;
			case 26:
				StringConCat(&cVar0, "_gTime", 24);
				iVar12 = 0;
				while (iVar12 < 8)
				{
					switch (iParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar15[iVar12] = 0;
									break;
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (iParam0->f_411 == 2)
				{
					func_363(&(iParam0->f_89), 8, &cVar0, &iVar15, 1, 0);
				}
				else
				{
					func_363(&(iParam0->f_89), 3, &cVar0, &iVar15, 1, 0);
				}
				func_364(cVar0, uParam1);
				func_372(0, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 1);
				func_310(iParam0, 16, 0, 0);
				func_310(iParam0, 6, 0f, 1);
				func_272(iParam0, 0, 0);
				break;
			case 12:
				func_271("TAXI_OBJ_GYB", 3500, 1);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 11:
				if (iParam0->f_410 == 12 || iParam0->f_410 == 18)
				{
					func_271("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (iParam0->f_410 < 21)
				{
					func_271("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_271("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				iParam0->f_417 = 11;
				iParam0->f_141 = 1;
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 28:
				switch (iParam0->f_102)
				{
					case 0:
						StringConCat(&cVar0, "_dest1A", 24);
						break;
					case 1:
						StringConCat(&cVar0, "_dest1B", 24);
						break;
					default:
						StringConCat(&cVar0, "_dest1A", 24);
						break;
				}
				func_371(iParam0, &cVar0, 0, 0, 8);
				func_245(iParam0, 29, 1, 0, 0);
				break;
			case 29:
				if (!func_154(iParam0->f_98, 268435456))
				{
					func_271("TAXI_OBJ_CYI_01", 7500, 1);
					func_58(&(iParam0->f_98), 268435456);
				}
				iParam0->f_417 = 29;
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 30:
				StringConCat(&cVar0, "_rCar1", 24);
				func_247(&cVar0);
				func_364(cVar0, uParam1);
				iParam0->f_124 = { cVar0 };
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 31:
				StringConCat(&cVar0, "_rCar2", 24);
				func_247(&cVar0);
				func_364(cVar0, uParam1);
				iParam0->f_124 = { cVar0 };
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 32:
				StringConCat(&cVar0, "_rCar3", 24);
				func_247(&cVar0);
				func_364(cVar0, uParam1);
				iParam0->f_124 = { cVar0 };
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 33:
				func_271("TAXI_OBJ_CYI_02", 7500, 1);
				iParam0->f_417 = 33;
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 34:
				if (!func_154(iParam0->f_82, 8192))
				{
					if (func_171(iParam0, 11) > iParam0->f_36)
					{
						StringConCat(&cVar0, "_airBr1", 24);
						func_247(&cVar0);
						if (iParam0->f_411 == 5)
						{
							func_364(cVar0, uParam1);
						}
						else
						{
							func_371(iParam0, &cVar0, 0, 0, 8);
						}
						func_58(&(iParam0->f_82), 8192);
						func_310(iParam0, 16, 0, 0);
						func_310(iParam0, 11, 0, 0);
						func_272(iParam0, 0, 0);
					}
				}
				break;
			case 35:
				if (!func_154(iParam0->f_82, 16384))
				{
					StringConCat(&cVar0, "_seeD1", 24);
					func_247(&cVar0);
					func_371(iParam0, &cVar0, 0, 0, 8);
					func_58(&(iParam0->f_82), 16384);
				}
				break;
			case 36:
				if (!func_154(iParam0->f_82, 32768))
				{
					StringConCat(&cVar0, "_seeD2", 24);
					func_247(&cVar0);
					func_371(iParam0, &cVar0, 0, 0, 8);
					func_58(&(iParam0->f_82), 32768);
				}
				break;
			case 37:
				StringConCat(&cVar0, "_done1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				func_245(iParam0, 46, 1, 0, 0);
				break;
			case 138:
				if (iParam0->f_101 == 1)
				{
					StringConCat(&cVar0, "_ftc1", 24);
				}
				else
				{
					switch (iParam0->f_102)
					{
						case 1:
							StringConCat(&cVar0, "_ftc1", 24);
							break;
						case 0:
							StringConCat(&cVar0, "_ftc2", 24);
							break;
						case 2:
							StringConCat(&cVar0, "_ftc3", 24);
							break;
						default:
							StringConCat(&cVar0, "_ftc3", 24);
							break;
					}
				}
				func_247(&cVar0);
				func_371(iParam0, &cVar0, 0, 0, 8);
				func_245(iParam0, 139, 1, 0, 0);
				iParam0->f_417 = 139;
				func_272(iParam0, 0, 0);
				break;
			case 139:
				func_271("TAXI_OBJ_FTC2", 7500, 1);
				iParam0->f_417 = 13;
				func_245(iParam0, 13, 0, 0, 0);
				break;
			case 38:
				StringConCat(&cVar0, "_dOff1", 24);
				cVar6 = { cVar0 };
				iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 120);
				if (!func_154(iParam0->f_82, 268435456))
				{
					if (iVar14 > 80)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else if (iVar14 > 40)
					{
						StringConCat(&cVar6, "_2", 24);
					}
					else
					{
						StringConCat(&cVar6, "_3", 24);
					}
					func_58(&(iParam0->f_82), 268435456);
				}
				else if (iVar14 > 80)
				{
					StringConCat(&cVar6, "_4", 24);
				}
				else if (iVar14 > 40)
				{
					StringConCat(&cVar6, "_5", 24);
				}
				else
				{
					StringConCat(&cVar6, "_6", 24);
				}
				func_183(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 39:
				StringConCat(&cVar0, "_bdOff1", 24);
				cVar6 = { cVar0 };
				iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (!func_154(iParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_58(&(iParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_183(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 41:
				StringConCat(&cVar0, "_dr2P", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 42:
				StringConCat(&cVar0, "_dr2N", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 40:
				StringConCat(&cVar0, "_dOff2", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				func_245(iParam0, 44, 1, 0, 0);
				break;
			case 44:
				func_271("TAXI_OBJ_CC2", 7500, 1);
				iParam0->f_417 = 44;
				func_272(iParam0, 0, 0);
				func_245(iParam0, 97, 1, 0, 0);
				break;
			case 43:
				StringConCat(&cVar0, "_dOff3", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				func_245(iParam0, 45, 1, 0, 0);
				break;
			case 45:
				if (!func_173())
				{
					func_271("TAXI_OBJ_CC3", 7500, 1);
					iParam0->f_417 = 45;
					func_272(iParam0, 0, 0);
					func_245(iParam0, 98, 1, 0, 0);
				}
				break;
			case 46:
				func_271("TAXI_OBJ_FTC3", 7500, 1);
				iParam0->f_417 = 46;
				func_272(iParam0, 0, 0);
				break;
			case 21:
				if (!func_154(iParam0->f_81, 1))
				{
					func_362(iParam0, 1, cVar0, "_sick1", 8);
					func_159(&(iParam0->f_81), 2);
				}
				else if (!func_154(iParam0->f_81, 2))
				{
					func_362(iParam0, 2, cVar0, "_sick2", 8);
					func_159(&(iParam0->f_81), 1);
				}
				func_372(12, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 22:
				if (!func_154(iParam0->f_82, 2097152))
				{
					StringConCat(&cVar0, "_nopke1", 24);
				}
				else if (!func_154(iParam0->f_82, 4194304))
				{
					StringConCat(&cVar0, "_nopke2", 24);
				}
				func_58(&(iParam0->f_81), 2097152);
				func_371(iParam0, &cVar0, 0, 0, 8);
				func_310(iParam0, 16, 0, 0);
				func_372(17, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 1);
				func_272(iParam0, 0, 0);
				break;
			case 61:
				StringConCat(&cVar0, "_Puke1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				func_372(18, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				break;
			case 63:
				StringConCat(&cVar0, "_PkStp2", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				func_372(20, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 62:
				StringConCat(&cVar0, "_PkStp1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				func_372(19, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				break;
			case 64:
				StringConCat(&cVar0, "_PukeR1", 24);
				func_247(&cVar0);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 71:
				if (!func_154(iParam0->f_81, 4))
				{
					func_362(iParam0, 4, cVar0, "_turns1", 8);
				}
				else if (!func_154(iParam0->f_81, 8))
				{
					func_362(iParam0, 8, cVar0, "_turns2", 8);
				}
				else
				{
					func_362(iParam0, 8, cVar0, "_turns3", 8);
					func_159(&(iParam0->f_81), 4);
					func_159(&(iParam0->f_81), 8);
				}
				func_372(13, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 72:
				if (func_361(iParam0))
				{
					func_368(iParam0, cVar0, func_370(iParam0, 72));
				}
				else if (iParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(iParam0->f_3))
					{
						func_267(iParam0->f_3, "CRASH_GENERIC", iParam0->f_145, 4);
					}
				}
				else if (iParam0->f_411 == 1)
				{
					StringConCat(&cVar0, "_carHt", 24);
					cVar6 = { cVar0 };
					func_373(&(iParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_341(&(iParam0->f_244), iParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&cVar0, "_carHt1", 24);
					cVar6 = { cVar0 };
					if (iParam0->f_411 == 0)
					{
						func_373(&(iParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_373(&(iParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_183(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				}
				func_372(2, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar6, 0);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 73:
				StringConCat(&cVar0, "_genPnHi", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 75:
				if (!func_154(iParam0->f_83, 128))
				{
					StringConCat(&cVar0, "_nMiss1", 24);
					func_341(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_58(&(iParam0->f_83), 128);
					func_159(&(iParam0->f_83), 256);
					func_310(iParam0, 16, 0, 0);
				}
				else if (!func_154(iParam0->f_83, 256))
				{
					StringConCat(&cVar0, "_nMiss2", 24);
					func_341(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_58(&(iParam0->f_83), 256);
					func_159(&(iParam0->f_83), 512);
					func_310(iParam0, 16, 0, 0);
				}
				else if (!func_154(iParam0->f_83, 512))
				{
					StringConCat(&cVar0, "_nMiss3", 24);
					func_341(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_58(&(iParam0->f_83), 512);
					func_159(&(iParam0->f_83), 128);
					func_310(iParam0, 16, 0, 0);
				}
				func_272(iParam0, 0, 0);
				break;
			case 76:
				if (iParam0->f_411 == 1 || iParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_154(iParam0->f_83, 1))
				{
					StringConCat(&cVar0, "_air1", 24);
					if (bVar24)
					{
						func_247(&cVar0);
					}
					func_341(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_58(&(iParam0->f_83), 1);
					func_159(&(iParam0->f_83), 2);
					func_310(iParam0, 16, 0, 0);
				}
				else if (!func_154(iParam0->f_83, 2))
				{
					StringConCat(&cVar0, "_air2", 24);
					if (bVar24)
					{
						func_247(&cVar0);
					}
					func_341(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_58(&(iParam0->f_83), 2);
					if (iParam0->f_411 == 0)
					{
						func_159(&(iParam0->f_83), 4);
					}
					else
					{
						func_159(&(iParam0->f_83), 1);
					}
					func_310(iParam0, 16, 0, 0);
				}
				else if (!func_154(iParam0->f_83, 4))
				{
					StringConCat(&cVar0, "_air3", 24);
					if (bVar24)
					{
						func_247(&cVar0);
					}
					func_341(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_58(&(iParam0->f_83), 4);
					func_159(&(iParam0->f_83), 1);
					func_310(iParam0, 16, 0, 0);
				}
				func_372(11, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 79:
				if (iParam0->f_411 == 1 || iParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_154(iParam0->f_81, 4096))
				{
					func_367(iParam0, 4096, cVar0, "_sideW1", bVar24, 8);
				}
				else if (!func_154(iParam0->f_81, 8192))
				{
					func_367(iParam0, 8192, cVar0, "_sideW2", bVar24, 8);
				}
				func_372(15, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 80:
				if (iParam0->f_411 == 1 || iParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_154(iParam0->f_81, 16384))
				{
					func_367(iParam0, 16384, cVar0, "_opLne1", bVar24, 8);
				}
				else if (!func_154(iParam0->f_81, 32768))
				{
					func_367(iParam0, 32768, cVar0, "_opLne2", bVar24, 8);
				}
				func_372(14, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 83:
				if (iParam0->f_411 == 0)
				{
					if (!func_154(iParam0->f_82, 8))
					{
						func_360(iParam0, 8, cVar0, "_bored1", 8, 0);
					}
					else if (!func_154(iParam0->f_82, 16))
					{
						func_360(iParam0, 16, cVar0, "_bored2", 8, 0);
					}
					else if (!func_154(iParam0->f_82, 32))
					{
						func_360(iParam0, 32, cVar0, "_bored3", 8, 0);
					}
					func_372(9, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
					func_272(iParam0, 0, 0);
				}
				if (iParam0->f_411 == 1)
				{
					StringConCat(&cVar0, "_good1", 24);
					cVar6 = { cVar0 };
					func_373(&(iParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_183(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
					func_372(9, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
					func_310(iParam0, 16, 0, 0);
					func_272(iParam0, 0, 0);
				}
				break;
			case 92:
				StringConCat(&cVar0, "_EtoB1", 24);
				cVar6 = { cVar0 };
				func_373(&(iParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_183(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_372(9, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 93:
				StringConCat(&cVar0, "_BtoE1", 24);
				cVar6 = { cVar0 };
				func_373(&(iParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_183(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_372(12, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 81:
				if (!func_154(iParam0->f_81, 65536))
				{
					func_367(iParam0, 65536, cVar0, "_runLit1", 1, 8);
				}
				else if (!func_154(iParam0->f_81, 131072))
				{
					func_367(iParam0, 131072, cVar0, "_runLit2", 1, 8);
				}
				func_272(iParam0, 0, 0);
				break;
			case 82:
				if (func_361(iParam0))
				{
					func_368(iParam0, cVar0, func_370(iParam0, 82));
				}
				else if (iParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(iParam0->f_3))
					{
						func_267(iParam0->f_3, "CAR_HIT_PED_DRIVEN", iParam0->f_145, 4);
					}
				}
				else if (!func_154(iParam0->f_83, 8))
				{
					StringConCat(&cVar0, "_hitR1", 24);
					func_247(&cVar0);
					func_341(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_58(&(iParam0->f_83), 8);
					func_159(&(iParam0->f_83), 16);
					func_310(iParam0, 16, 0, 0);
				}
				else if (!func_154(iParam0->f_83, 16))
				{
					StringConCat(&cVar0, "_hitR2", 24);
					func_247(&cVar0);
					func_341(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_58(&(iParam0->f_83), 16);
					func_159(&(iParam0->f_83), 32);
					func_310(iParam0, 16, 0, 0);
				}
				else if (!func_154(iParam0->f_83, 32))
				{
					StringConCat(&cVar0, "_hitR3", 24);
					func_247(&cVar0);
					func_341(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_58(&(iParam0->f_83), 32);
					if (iParam0->f_411 == 0)
					{
						func_159(&(iParam0->f_83), 64);
					}
					else
					{
						func_159(&(iParam0->f_83), 8);
					}
					func_310(iParam0, 16, 0, 0);
				}
				else if (!func_154(iParam0->f_83, 64))
				{
					StringConCat(&cVar0, "_hitR4", 24);
					func_247(&cVar0);
					func_341(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_58(&(iParam0->f_83), 64);
					func_159(&(iParam0->f_83), 8);
					func_310(iParam0, 16, 0, 0);
				}
				func_372(1, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 65:
				if (!func_173())
				{
					if (iParam0->f_115)
					{
						StringConCat(&cVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&cVar0, "_aggro", 24);
					}
					func_371(iParam0, &cVar0, 0, 1, 8);
				}
				else
				{
					func_368(iParam0, cVar0, func_370(iParam0, 65));
					func_272(iParam0, 0, 0);
				}
				iParam0->f_107++;
				break;
			case 66:
				if (!func_173())
				{
					if (iParam0->f_411 == 4)
					{
						StringCopy(&cVar0, "tm6_shoot", 24);
					}
					else if (iParam0->f_115)
					{
						StringConCat(&cVar0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&cVar0, "_shoot", 24);
					}
					func_371(iParam0, &cVar0, 0, 1, 8);
				}
				else
				{
					func_368(iParam0, cVar0, func_370(iParam0, 66));
					func_272(iParam0, 0, 0);
				}
				iParam0->f_107++;
				break;
			case 13:
				if (iParam0->f_411 == 8)
				{
					if (!iParam0->f_109 && !func_173())
					{
						switch (iParam0->f_414)
						{
							case 3:
								StringConCat(&cVar0, "_warnC1", 24);
								func_371(iParam0, &cVar0, 0, 0, 8);
								break;
							case 6:
								StringConCat(&cVar0, "_warnF1", 24);
								func_371(iParam0, &cVar0, 0, 0, 8);
								break;
							case 1:
								StringConCat(&cVar0, "_far1", 24);
								func_371(iParam0, &cVar0, 0, 0, 8);
								func_372(21, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
								break;
							case 2:
								StringConCat(&cVar0, "_close1", 24);
								func_371(iParam0, &cVar0, 0, 0, 8);
								func_372(22, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
								break;
							case 10:
								StringConCat(&cVar0, "_hit1", 24);
								func_371(iParam0, &cVar0, 0, 0, 8);
								break;
							case 8:
								StringConCat(&cVar0, "_good1", 24);
								cVar6 = { cVar0 };
								func_373(&(iParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_183(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
								func_372(23, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar6, 0);
								func_310(iParam0, 16, 0, 0);
								func_272(iParam0, 0, 0);
								break;
							case 9:
								if (!bLocal_64)
								{
									StringConCat(&cVar0, "_sBant1", 24);
									cVar6 = { cVar0 };
									func_371(iParam0, &cVar0, 0, 0, 8);
									func_310(iParam0, 16, 0, 0);
									func_310(iParam0, 11, 0, 0);
									func_272(iParam0, 0, 0);
									if (!bLocal_66)
									{
										bLocal_64 = true;
									}
								}
								else
								{
									if (!bLocal_65)
									{
										StringConCat(&cVar0, "_bant3", 24);
										bLocal_65 = true;
									}
									else
									{
										StringConCat(&cVar0, "_bant2", 24);
										bLocal_66 = true;
									}
									func_247(&cVar0);
									func_371(iParam0, &cVar0, 0, 0, 8);
									func_310(iParam0, 16, 0, 0);
									func_310(iParam0, 11, 0, 0);
									func_272(iParam0, 0, 0);
									bLocal_64 = false;
								}
								break;
							case 7:
								StringConCat(&cVar0, "_done1", 24);
								func_371(iParam0, &cVar0, 0, 0, 8);
								break;
						}
						func_245(iParam0, 143, 0, 0, 0);
					}
				}
				break;
			case 78:
				StringConCat(&cVar0, "_speed1", 24);
				cVar6 = { cVar0 };
				func_373(&(iParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_183(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_372(10, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 25:
				if (!func_154(iParam0->f_82, 1))
				{
					func_360(iParam0, 1, cVar0, "_close1", 8, 0);
				}
				else if (!func_154(iParam0->f_82, 2))
				{
					func_360(iParam0, 2, cVar0, "_close2", 8, 0);
				}
				else if (!func_154(iParam0->f_82, 4))
				{
					func_360(iParam0, 4, cVar0, "_close3", 8, 0);
				}
				func_272(iParam0, 0, 0);
				break;
			case 48:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_stop2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_stop1", 24);
				}
				cVar6 = { cVar0 };
				func_373(&(iParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (iParam0->f_411 != 9)
				{
					func_183(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iParam0->f_3))
				{
					func_267(iParam0->f_3, "TAXI_STOPPED", iParam0->f_145, 4);
				}
				func_310(iParam0, 16, 0, 0);
				func_372(5, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 74:
				if (func_361(iParam0))
				{
					func_368(iParam0, cVar0, func_370(iParam0, 74));
				}
				else if (iParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(iParam0->f_3))
					{
						func_267(iParam0->f_3, "VEHICLE_FLIPPED", iParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&cVar0, "_roll1", 24);
					func_359(iParam0, cVar0, 8);
				}
				func_372(3, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 70:
				if (!func_154(iParam0->f_83, 1024))
				{
					func_58(&(iParam0->f_83), 1024);
					func_310(iParam0, 16, 0, 0);
					StringConCat(&cVar0, "_swrv1", 24);
					func_247(&cVar0);
					func_341(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
				}
				else if (!func_154(iParam0->f_83, 2048))
				{
					func_58(&(iParam0->f_83), 2048);
					func_310(iParam0, 16, 0, 0);
					StringConCat(&cVar0, "_swrv2", 24);
					func_247(&cVar0);
					func_341(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
				}
				else if (!func_154(iParam0->f_83, 4096))
				{
					func_58(&(iParam0->f_83), 4096);
					func_310(iParam0, 16, 0, 0);
					StringConCat(&cVar0, "_swrv3", 24);
					func_247(&cVar0);
					func_341(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
				}
				func_272(iParam0, 0, 0);
				break;
			case 69:
				if (!func_154(iParam0->f_82, 1024))
				{
					func_360(iParam0, 1024, cVar0, "_rvrs1", 8, 1);
					func_159(&(iParam0->f_82), 2048);
				}
				else if (!func_154(iParam0->f_82, 2048))
				{
					func_360(iParam0, 2048, cVar0, "_rvrs2", 8, 1);
				}
				func_272(iParam0, 0, 0);
				break;
			case 67:
				StringConCat(&cVar0, "_ofrd1", 24);
				cVar6 = { cVar0 };
				func_373(&(iParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_183(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_372(16, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar6, 0);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 68:
				StringConCat(&cVar0, "_ofrdch1", 24);
				func_341(&(iParam0->f_244), iParam0->f_144, &cVar0, 9, 0, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 49:
				StringConCat(&cVar0, "_losPol1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				func_245(iParam0, 52, 1, 0, 0);
				break;
			case 50:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_lsPo1", 24);
				}
				if (iParam0->f_411 != 9)
				{
					func_371(iParam0, &cVar0, 0, 0, 8);
				}
				else if (!PED::IS_PED_INJURED(iParam0->f_3))
				{
					func_267(iParam0->f_3, "POLICE_PURSUIT_DRIVEN", iParam0->f_145, 4);
				}
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 51:
				if (func_361(iParam0))
				{
					if (iParam0->f_411 == 2)
					{
						StringConCat(&cVar0, "_copBa1", 24);
						cVar6 = { cVar0 };
						cVar6 = { cVar0 };
						func_371(iParam0, &cVar0, 0, 0, 8);
						func_245(iParam0, 52, 1, 0, 0);
						func_310(iParam0, 16, 0, 0);
					}
					else
					{
						if (iParam0->f_411 == 5 && iParam0->f_410 > 9)
						{
							StringConCat(&cVar0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&cVar0, "_copBa1", 24);
						}
						cVar6 = { cVar0 };
						func_371(iParam0, &cVar0, 0, 0, 8);
						func_310(iParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&cVar0, "_copBa1", 24);
					cVar6 = { cVar0 };
					func_373(&(iParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_183(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
					func_310(iParam0, 16, 0, 0);
					func_272(iParam0, 0, 0);
				}
				break;
			case 53:
				StringConCat(&cVar0, "_evdeP1", 24);
				func_372(8, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_371(iParam0, &cVar0, 0, 0, 8);
				func_310(iParam0, 10, 0f, 1);
				break;
			case 52:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					func_271("TAXI_OBJ_POL", 7500, 1);
					iParam0->f_417 = 52;
				}
				func_272(iParam0, 0, 0);
				break;
			case 54:
				StringConCat(&cVar0, "_cpFz1", 24);
				func_247(&cVar0);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 84:
				if (!func_154(iParam0->f_81, 262144))
				{
					func_367(iParam0, 262144, cVar0, "_rdCh1", 1, 8);
				}
				else if (!func_154(iParam0->f_81, 1048576))
				{
					if (iParam0->f_411 == 0 || iParam0->f_411 == 1)
					{
						func_367(iParam0, 1048576, cVar0, "_rdCh2", 1, 8);
					}
					else
					{
						func_367(iParam0, 1048576, cVar0, "_rdCh2", 0, 8);
					}
				}
				func_372(7, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 85:
				if (!func_154(iParam0->f_82, 67108864))
				{
					if (iParam0->f_418.f_6)
					{
						func_358(iParam0, 67108864, cVar0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_154(iParam0->f_82, 134217728))
				{
					func_358(iParam0, 134217728, cVar0, "_rdFv1", 0, 7);
				}
				func_372(6, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 86:
				StringConCat(&cVar0, "_rdneu1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 87:
				StringConCat(&cVar0, "_rdtip1", 24);
				cVar6 = { cVar0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, iParam0->f_418.f_3, 24);
				func_183(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 100:
				func_271("TAXI_OBJ_GYB_2", 7500, 1);
				iParam0->f_417 = 100;
				func_272(iParam0, 0, 0);
				break;
			case 47:
				if (iParam0->f_411 == 1)
				{
					StringConCat(&cVar0, "_horn", 24);
					func_371(iParam0, &cVar0, 0, 0, 8);
				}
				break;
			case 101:
				StringConCat(&cVar0, "_thank1", 24);
				if ((iParam0->f_411 == 1 || iParam0->f_411 == 5) || iParam0->f_411 == 0)
				{
					func_247(&cVar0);
				}
				func_58(&(iParam0->f_81), 2097152);
				if (iParam0->f_411 != 9)
				{
					func_371(iParam0, &cVar0, 0, 0, 8);
				}
				break;
			case 102:
				StringConCat(&cVar0, "_thank2", 24);
				if ((iParam0->f_411 == 1 || iParam0->f_411 == 5) || iParam0->f_411 == 0)
				{
					func_247(&cVar0);
				}
				func_58(&(iParam0->f_81), 2097152);
				if (iParam0->f_411 != 9)
				{
					func_371(iParam0, &cVar0, 0, 0, 8);
				}
				break;
			case 103:
				if (iParam0->f_411 == 4)
				{
					StringConCat(&cVar0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&cVar0, "_thank3", 24);
				}
				if ((iParam0->f_411 == 1 || iParam0->f_411 == 5) || iParam0->f_411 == 0)
				{
					func_247(&cVar0);
				}
				func_58(&(iParam0->f_81), 2097152);
				if (iParam0->f_411 != 9)
				{
					func_371(iParam0, &cVar0, 0, 0, 8);
				}
				break;
			case 97:
				if (!func_154(iParam0->f_82, 65536))
				{
					if (func_171(iParam0, 11) > iParam0->f_36)
					{
						switch (iParam0->f_102)
						{
							case 0:
								StringConCat(&cVar0, "_ccba2", 24);
								break;
							case 1:
								StringConCat(&cVar0, "_ccba1", 24);
								break;
							default:
								StringConCat(&cVar0, "_ccba1", 24);
								break;
						}
						func_247(&cVar0);
						func_364(cVar0, uParam1);
						func_58(&(iParam0->f_82), 65536);
						func_310(iParam0, 16, 0, 0);
						func_310(iParam0, 11, 0, 0);
						func_272(iParam0, 0, 0);
					}
				}
				break;
			case 98:
				if (!func_154(iParam0->f_82, 131072))
				{
					if (func_171(iParam0, 11) > iParam0->f_36)
					{
						StringConCat(&cVar0, "_ccbb1", 24);
						func_247(&cVar0);
						func_364(cVar0, uParam1);
						func_58(&(iParam0->f_82), 131072);
						func_310(iParam0, 16, 0, 0);
						func_310(iParam0, 11, 0, 0);
						func_272(iParam0, 0, 0);
					}
				}
				break;
			case 99:
				if (!func_154(iParam0->f_82, 8388608))
				{
					StringConCat(&cVar0, "_close1", 24);
					func_58(&(iParam0->f_82), 8388608);
				}
				else if (!func_154(iParam0->f_82, 16777216))
				{
					StringConCat(&cVar0, "_close2", 24);
					func_58(&(iParam0->f_82), 16777216);
				}
				else if (!func_154(iParam0->f_82, 33554432))
				{
					StringConCat(&cVar0, "_close3", 24);
					func_58(&(iParam0->f_82), 33554432);
				}
				func_364(cVar0, uParam1);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 58:
				if (iParam0->f_411 == 6)
				{
					StringConCat(&cVar0, "_kill1", 24);
					cVar6 = { cVar0 };
					func_373(&(iParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_247(&cVar0);
					func_183(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				}
				else if (iParam0->f_411 == 8)
				{
					StringConCat(&cVar0, "_cheat1", 24);
					func_371(iParam0, &cVar0, 0, 0, 8);
				}
				else
				{
					StringConCat(&cVar0, "_kill1", 24);
					func_371(iParam0, &cVar0, 0, 0, 8);
				}
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 95:
				StringConCat(&cVar0, "_wndw2", 24);
				func_364(cVar0, uParam1);
				func_310(iParam0, 16, 0, 0);
				func_310(iParam0, 11, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 94:
				StringConCat(&cVar0, "_wndw0", 24);
				func_364(cVar0, uParam1);
				func_310(iParam0, 16, 0, 0);
				func_310(iParam0, 11, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 96:
				StringConCat(&cVar0, "_wndw1", 24);
				func_364(cVar0, uParam1);
				func_310(iParam0, 16, 0, 0);
				func_310(iParam0, 11, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 113:
				StringConCat(&cVar0, "_csite1", 24);
				func_247(&cVar0);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 119:
				StringConCat(&cVar0, "_fair1", 24);
				func_247(&cVar0);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 115:
				StringConCat(&cVar0, "_AlCk1", 24);
				cVar6 = { cVar0 };
				func_373(&(iParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_183(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 116:
				StringConCat(&cVar0, "_eggG1", 24);
				cVar6 = { cVar0 };
				func_373(&(iParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_183(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 114:
				StringConCat(&cVar0, "_goons1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 59:
				StringConCat(&cVar0, "_oRun1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 117:
				StringConCat(&cVar0, "_gotG1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 118:
				StringConCat(&cVar0, "_getA1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 120:
				StringConCat(&cVar0, "_gnawy1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 121:
				StringConCat(&cVar0, "_grl1", 24);
				func_247(&cVar0);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 122:
				StringConCat(&cVar0, "_figt1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 123:
				StringConCat(&cVar0, "_gEgg1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 124:
				StringConCat(&cVar0, "_gEgg3", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 125:
				StringConCat(&cVar0, "_gEgg2", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 126:
				StringConCat(&cVar0, "_gLeav1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 127:
				StringConCat(&cVar0, "_aKill1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 129:
				StringConCat(&cVar0, "_gHelp1", 24);
				func_247(&cVar0);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 130:
				StringConCat(&cVar0, "_gDest1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				func_245(iParam0, 11, 1, 0, 0);
				break;
			case 128:
				StringConCat(&cVar0, "_gKO1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 132:
				StringConCat(&cVar0, "_gThank1", 24);
				func_58(&(iParam0->f_81), 2097152);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 131:
				StringConCat(&cVar0, "_gDriv1", 24);
				func_247(&cVar0);
				func_364(cVar0, uParam1);
				func_58(&(iParam0->f_81), 67108864);
				func_310(iParam0, 16, 0, 0);
				func_310(iParam0, 11, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 60:
				StringConCat(&cVar0, "_cash1", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 105:
				if (!func_154(iParam0->f_81, 33554432) && iParam0->f_411 != 9)
				{
					func_367(iParam0, 33554432, cVar0, "_noPay1", 1, 8);
				}
				else if (iParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(iParam0->f_3))
					{
						func_267(iParam0->f_3, "TAXI_NO_PAY", iParam0->f_145, 4);
					}
				}
				func_245(iParam0, 108, 1, 0, 0);
				break;
			case 106:
				StringConCat(&cVar0, "_foot", 24);
				func_341(&(iParam0->f_244), iParam0->f_144, &cVar0, 9, 0, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 107:
				if (!func_154(iParam0->f_81, 268435456))
				{
					func_367(iParam0, 268435456, cVar0, "_kPay1", 1, 8);
				}
				func_245(iParam0, 52, 1, 0, 0);
				break;
			case 108:
				func_271("TAXI_OBJ_RUNOUT", 7500, 1);
				iParam0->f_417 = 108;
				func_272(iParam0, 0, 0);
				break;
			case 109:
				if (!func_154(iParam0->f_81, 4194304))
				{
					if (iParam0->f_411 == 2 || iParam0->f_411 == 6)
					{
						func_367(iParam0, 4194304, cVar0, "_mPay1", 0, 8);
					}
					else if (iParam0->f_411 == 9)
					{
						if (!PED::IS_PED_INJURED(iParam0->f_3))
						{
							func_267(iParam0->f_3, "APOLOGY_NO_TROUBLE", iParam0->f_145, 4);
						}
					}
					else
					{
						func_367(iParam0, 4194304, cVar0, "_mPay1", 1, 8);
					}
				}
				func_245(iParam0, 111, 1, 0, 0);
				break;
			case 111:
				func_271("TAXI_OBJ_GETRUN", 7500, 1);
				iParam0->f_417 = 111;
				func_272(iParam0, 0, 0);
				break;
			case 110:
				StringConCat(&cVar0, "_runoff", 24);
				func_341(&(iParam0->f_244), iParam0->f_144, &cVar0, 9, 0, 0, 0);
				func_310(iParam0, 16, 0, 0);
				func_272(iParam0, 0, 0);
				break;
			case 141:
				if (!func_154(iParam0->f_81, 16777216))
				{
					func_367(iParam0, 16777216, cVar0, "_ret1", 1, 8);
				}
				func_272(iParam0, 0, 0);
				break;
			case 88:
				func_271("TAXI_TIEFLEE", 7500, 1);
				func_272(iParam0, 0, 0);
				break;
			case 57:
				if (!func_154(iParam0->f_98, 536870912))
				{
					func_271("TAXI_OBJ_CYI_1B", 7500, 1);
					func_58(&(iParam0->f_98), 536870912);
				}
				iParam0->f_417 = 57;
				func_272(iParam0, 0, 0);
				break;
			case 104:
				StringConCat(&cVar0, "_joke1", 24);
				func_247(&cVar0);
				func_371(iParam0, &cVar0, 0, 0, 8);
				break;
			case 136:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_wronglz", 24);
				}
				else if (iParam0->f_116)
				{
					StringConCat(&cVar0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_wrong", 24);
				}
				func_371(iParam0, &cVar0, 0, 0, 8);
				func_272(iParam0, 0, 0);
				break;
			case 140:
				StringConCat(&cVar0, "_shout", 24);
				func_371(iParam0, &cVar0, 0, 0, 8);
				func_272(iParam0, 0, 0);
				break;
			case 135:
				if (iParam0->f_411 == 4)
				{
					StringCopy(&cVar0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&cVar0, "_jack", 24);
				}
				func_371(iParam0, &cVar0, 0, 0, 8);
				func_272(iParam0, 0, 0);
				break;
			case 133:
				StringConCat(&cVar0, "_getCar", 24);
				func_371(iParam0, &cVar0, 1, 0, 8);
				func_245(iParam0, 134, 1, 0, 0);
				break;
			case 134:
				func_271("TX_VIP", 7500, 0);
				iParam0->f_417 = 134;
				func_245(iParam0, 0, 0, 0, 0);
				func_272(iParam0, 0, 0);
				break;
		}
	}
}

void func_358(int iParam0, int iParam1, char[12] cParam2, int iParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_58(&(iParam0->f_82), iParam1);
	func_310(iParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	if (bParam9)
	{
		func_247(&cParam2);
	}
	func_341(&(iParam0->f_244), iParam0->f_144, &cParam2, iParam10, 0, 0, 0);
}

void func_359(int iParam0, char[24] cParam1, int iParam7)
{
	vector3 vVar0[24];

	cVar0 = { cParam1 };
	if (!func_154(iParam0->f_82, 64))
	{
		func_58(&(iParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_154(iParam0->f_82, 128))
	{
		func_58(&(iParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 24);
	}
	func_183(&(iParam0->f_244), iParam0->f_144, &cParam1, &cVar0, iParam7, 0, 0);
	func_310(iParam0, 16, 0, 0);
}

void func_360(int iParam0, int iParam1, char[12] cParam2, int iParam5, var uParam6, var uParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_58(&(iParam0->f_82), iParam1);
	func_310(iParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	if ((((iParam0->f_411 == 1 || iParam0->f_411 == 0) || iParam0->f_411 == 5) || iParam0->f_411 == 8) || iParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_247(&cParam2);
		}
	}
	func_341(&(iParam0->f_244), iParam0->f_144, &cParam2, iParam9, 0, 0, 0);
}

bool func_361(int iParam0)
{
	if ((((((iParam0->f_411 == 2 || iParam0->f_411 == 3) || iParam0->f_411 == 4) || iParam0->f_411 == 5) || iParam0->f_411 == 6) || iParam0->f_411 == 7) || iParam0->f_411 == 8)
	{
		return true;
	}
	return false;
}

void func_362(int iParam0, int iParam1, char[12] cParam2, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9)
{
	func_58(&(iParam0->f_81), iParam1);
	func_310(iParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	func_341(&(iParam0->f_244), iParam0->f_144, &cParam2, iParam9, 0, 0, 0);
}

void func_363(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_287(*uParam0, iVar1))
		{
			func_59(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_247(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_364(char[24] cParam0, var uParam6)
{
	int iVar0;

	iVar0 = func_365(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_58(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_365(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_366(int iParam0, bool bParam1)
{
	switch (iParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_271("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_271("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_271("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_271("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		case 2:
			if (bParam1)
			{
				func_271("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_271("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		case 3:
			if (bParam1)
			{
				func_271("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_271("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		case 4:
			if (bParam1)
			{
				func_271("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_271("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		case 5:
			if (bParam1)
			{
				func_271("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_271("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		case 6:
			if (bParam1)
			{
				func_271("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_271("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		case 7:
			if (bParam1)
			{
				func_271("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_271("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		case 8:
			if (bParam1)
			{
				func_271("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_271("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		case 9:
			if (bParam1)
			{
				func_271("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_271("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		iParam0->f_139 = 1;
	}
}

void func_367(int iParam0, int iParam1, char[12] cParam2, int iParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_58(&(iParam0->f_81), iParam1);
	func_310(iParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	if (bParam9)
	{
		func_247(&cParam2);
	}
	func_341(&(iParam0->f_244), iParam0->f_144, &cParam2, iParam10, 0, 0, 0);
}

void func_368(int iParam0, char[12] cParam1, var uParam4, var uParam5, var uParam6, char* sParam7)
{
	func_310(iParam0, 16, 0, 0);
	func_310(iParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!PED::IS_PED_INJURED(iParam0->f_3))
	{
		AUDIO::INTERRUPT_CONVERSATION(iParam0->f_3, &cParam1, func_369(iParam0));
	}
}

char* func_369(int iParam0)
{
	char* sVar0;

	switch (iParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		case 1:
			sVar0 = "TaxiOtis";
			break;
		case 2:
			sVar0 = "TaxiKwak";
			break;
		case 3:
			sVar0 = "TaxiWalter";
			break;
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		case 7:
			sVar0 = "TaxiDarren";
			break;
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_370(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 72:
			switch (iParam0->f_411)
			{
				case 0:
					return "_ACRH";
				case 1:
					return "_ACRH";
				case 2:
					return "_ACAA";
				case 3:
					return "_ACRH";
				case 4:
					return "_AEAA";
				case 5:
					return "_DKAA";
				case 6:
					return "_ACAA";
				case 7:
					return "_ACAA";
				case 8:
					return "_ACRH";
				default:
					break;
			}
			return "_ACRH";
		case 82:
			switch (iParam0->f_411)
			{
				case 0:
					return "_AHIT";
				case 1:
					return "_AHIT";
				case 2:
					return "_AEAA";
				case 3:
					return "_ADAA";
				case 4:
					return "_AFAA";
				case 5:
					return "_AFAA";
				case 6:
					return "_AEAA";
				case 7:
					return "_AHAA";
				case 8:
					return "_AEAA";
				default:
					break;
			}
			return "_AHIT";
		case 74:
			switch (iParam0->f_411)
			{
				case 0:
					return "_AROL";
				case 1:
					return "_AROL";
				case 2:
					return "_AHAA";
				case 3:
					return "_AROL";
				case 4:
					return "_AGAA";
				case 5:
					return "_AROL";
				case 6:
					return "_AROL";
				case 7:
					return "_AROL";
				case 8:
					return "_AROL";
				default:
					break;
			}
			return "_AROL";
		case 65:
			switch (iParam0->f_411)
			{
				case 0:
					return "_ABAA";
				case 1:
					return "_FUAA";
				case 2:
					return "_AFAA";
				case 3:
					return "_DBAA";
				case 4:
					return "_DLAA";
				case 5:
					return "_DKAA";
				case 6:
					if (iParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				case 7:
					return "_DBAA";
				case 8:
					return "_EFAA";
				default:
					return "_AROL";
			}
			break;
		case 66:
			switch (iParam0->f_411)
			{
				case 0:
					return "_AEAA";
				case 1:
					return "_ACAA";
				case 2:
					return "_AJAA";
				case 3:
					return "_AHAA";
				case 4:
					return "_AHAA";
				case 5:
					return "_AIAA";
				case 6:
					if (iParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				case 7:
					return "_AUAA";
				case 8:
					return "_AHAA";
				default:
					return "_AROL";
			}
			break;
		case 2:
			switch (iParam0->f_411)
			{
				case 0:
					return "_AAAA";
				case 1:
					return "_AAAA";
				case 2:
					return "_ADAA";
				case 3:
					return "_ABAA";
				case 4:
					return "_AAAA";
				case 5:
					return "_ABAA";
				case 6:
					if (iParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				case 7:
					return "_BUAA";
				case 8:
					return "_ADAA";
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_371(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_310(iParam0, 16, 0, 0);
	if (bParam3)
	{
		func_310(iParam0, 17, 0f, 1);
	}
	func_272(iParam0, iParam2, 0);
	return func_341(&(iParam0->f_244), iParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_372(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_154(*uParam2, 2))
		{
			if (!bParam10)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_154(*uParam2, 1073741824 /* Float: 2f */))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_154(*uParam2, 4))
		{
			if (!func_154(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_159(uParam2, 4096);
			}
		}
		else if (func_154(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_154(*uParam2, 512))
		{
			if (!func_154(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_159(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_154(*uParam2, 16))
		{
			if (!func_154(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_159(uParam2, 4096);
			}
		}
		else if (func_154(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_154(*uParam2, 64))
		{
			if (!func_154(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_159(uParam2, 4096);
			}
		}
		else if (func_154(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_154(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_154(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_154(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_154(*uParam2, 8192))
		{
			if (func_154(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_154(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_154(*uParam2, 16384))
		{
			if (func_154(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_154(*uParam2, 32768))
		{
			if (func_154(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_154(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_154(*uParam2, 65536))
		{
			if (func_154(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_154(*uParam2, 131072))
		{
			if (func_154(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_154(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_154(*uParam2, 262144))
		{
			if (func_154(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_154(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_154(*uParam2, 524288))
		{
			if (func_154(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_154(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_154(*uParam2, 1048576))
		{
			if (func_154(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_154(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_154(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_154(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_154(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_154(*uParam2, 67108864))
		{
			if (func_154(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_154(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_154(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_154(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_154(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

void func_373(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_287(*uParam0, iVar1))
		{
			func_59(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_247(sParam2);
				}
				else
				{
					func_247(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_374(int iParam0)
{
	if (*iParam0 != -1)
	{
		AUDIO::STOP_SOUND(*iParam0);
		AUDIO::RELEASE_SOUND_ID(*iParam0);
		*iParam0 = -1;
	}
}

bool func_375(char* sParam0)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (func_214(sParam0, 0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_376(int iParam0)
{
	if (func_173())
	{
		return true;
	}
	if (func_206(iParam0, 17))
	{
		return true;
	}
	if (func_206(iParam0, 14))
	{
		return true;
	}
	if (func_212(iParam0))
	{
		return true;
	}
	return false;
}

bool func_377(int iParam0, var uParam1)
{
	return ((*uParam1 == -1 && iParam0->f_412 == 0) && !func_206(iParam0, 9));
}

void func_378(int iParam0)
{
	if (func_206(iParam0, 17))
	{
		if (!func_206(iParam0, 14))
		{
			if (!func_212(iParam0))
			{
				if (!func_173())
				{
					func_149(iParam0, 17, 1);
				}
			}
		}
	}
}

bool func_379(var uParam0)
{
	return uParam0->f_117;
}

void func_380(int iParam0)
{
	if (!func_181(iParam0))
	{
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
		func_218(iParam0, 1);
	}
	else if (func_206(iParam0, 14))
	{
		func_228(iParam0);
		func_219(iParam0, 0);
	}
}

void func_381(var uParam0, var uParam1, bool bParam2)
{
	if (!func_154(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_124)) && func_173())
				{
					*uParam1++;
				}
				break;
			case 1:
				if (!func_173())
				{
					StringCopy(&(uParam0->f_124), func_147(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
		}
	}
}

void func_382(int iParam0)
{
	int iVar0;

	if (iParam0->f_410 >= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4))
		{
			if (Local_343 > 0 && !func_287(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343 - 1))
				{
					if (func_287(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(iParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_287(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_59(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							func_160(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_287(Local_343.f_1[iVar0 /*4*/], 4) && !func_287(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(iParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_59(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_340(iParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_383(int iParam0, var uParam1)
{
	var uVar0;

	if (!func_206(iParam0, 27))
	{
		func_205(iParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!iParam0->f_109 && func_171(iParam0, 27) > 5f)
	{
		if (func_410(iParam0->f_3, iParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_310(iParam0, 27, 0, 0);
			func_310(iParam0, 10, 0, 0);
			func_408(iParam0, &uVar0, uParam1);
		}
		func_405(iParam0);
	}
	if (iParam0->f_410 >= 3 && iParam0->f_410 <= 5)
	{
		func_384(iParam0);
	}
	if ((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && (CAM::DOES_CAM_EXIST(*iParam0) && !CAM::IS_CAM_ACTIVE(*iParam0))) && (CAM::DOES_CAM_EXIST(iParam0->f_1) && !CAM::IS_CAM_ACTIVE(iParam0->f_1))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !func_173())
	{
		if (func_171(iParam0, 26) > 10f)
		{
			func_149(iParam0, 26, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	else if (func_206(iParam0, 26))
	{
		func_149(iParam0, 26, 0);
	}
	return 0;
}

void func_384(int iParam0)
{
	if (!func_404(iParam0->f_429))
	{
		iParam0->f_429 = func_403();
		func_394(&(iParam0->f_429), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (func_385(iParam0->f_429))
	{
		func_340(iParam0, "Player took too long to make pickup", 9);
	}
}

int func_385(int iParam0)
{
	return func_386(func_403(), iParam0);
}

int func_386(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_404(iParam1) || !func_404(iParam0))
	{
		return 1;
	}
	iVar0 = func_392(iParam0);
	iVar1 = func_392(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_391(iParam0);
	iVar1 = func_391(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_390(iParam0);
	iVar1 = func_390(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_389(iParam0);
	iVar1 = func_389(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_388(iParam0);
	iVar1 = func_388(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_387(iParam0);
	iVar1 = func_387(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_387(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_388(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_389(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_390(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_391(int iParam0)
{
	return iParam0 & 15;
}

int func_392(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_393(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_393(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_394(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_392(*uParam0);
	iVar1 = func_391(*uParam0);
	iVar2 = func_390(*uParam0);
	iVar3 = func_389(*uParam0);
	iVar4 = func_388(*uParam0);
	iVar5 = func_387(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_402(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_402(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_395(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_395(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_401(uParam0, iParam1);
	func_400(uParam0, iParam2);
	func_399(uParam0, iParam3);
	func_398(uParam0, iParam5);
	func_397(uParam0, iParam4);
	func_396(uParam0, iParam6);
}

void func_396(var uParam0, int iParam1)
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

void func_397(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_391(*uParam0);
	iVar1 = func_392(*uParam0);
	if (iParam1 < 1 || iParam1 > func_402(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_398(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_399(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_400(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_401(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_402(int iParam0, int iParam1)
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

int func_403()
{
	var uVar0;

	func_401(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_400(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_399(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_397(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_398(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_396(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

bool func_404(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_387(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_388(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_389(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_392(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_391(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_390(iParam0);
	if (iVar5 < 1 || iVar5 > func_402(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_405(int iParam0)
{
	var uVar0;

	if (iParam0->f_410 < 7 && !iParam0->f_138)
	{
		if (((iParam0->f_411 == 9 && func_407()) && !func_181(iParam0)) || ((iParam0->f_411 != 9 && func_277(iParam0, 1)) && !func_181(iParam0)))
		{
			uVar0 = func_406(iParam0->f_4);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
			iParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0->f_4, true, false);
			func_228(iParam0);
			func_219(iParam0, 0);
		}
	}
}

var func_406(var uParam0)
{
	return uParam0;
}

bool func_407()
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iVar0, func_20()))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_408(int iParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_409(iParam0, 0, 1))
			{
				func_340(iParam0, "Aggro Aiming", 5);
			}
			break;
		case 4:
			if (func_409(iParam0, 0, 4))
			{
				func_340(iParam0, "Aggro Shot Near", 8);
			}
			break;
		case 8:
			if (func_409(iParam0, 0, 8))
			{
				func_340(iParam0, "Aggro Heard Shot", 8);
			}
			break;
		case 16:
			if (func_409(iParam0, 1, 1))
			{
				func_340(iParam0, "Aggro Attacked", 14);
			}
			break;
		case 32:
			if (func_409(iParam0, 0, 1))
			{
				func_340(iParam0, "Aggro Minor Attacked", 8);
			}
			break;
		case 2:
			if (!func_154(*uParam2, 2) && func_144(iParam0))
			{
				func_340(iParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

bool func_409(int iParam0, bool bParam1, int iParam2)
{
	if (((iParam0->f_107 >= 2 && iParam0->f_410 < 29) || iParam0->f_410 <= 5) || (bParam1 && !iParam0->f_114))
	{
		return true;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_245(iParam0, 66, 1, 0, 1);
			}
			else
			{
				func_245(iParam0, 65, 1, 0, 1);
			}
		}
	}
	return false;
}

bool func_410(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!func_154(*uParam2, 1))
		{
			if (func_416(iParam0, uParam2))
			{
				*uParam3 = 1;
				return true;
			}
		}
		if (!func_154(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return true;
			}
		}
		if (!func_154(*uParam2, 4))
		{
			if (func_414(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return true;
			}
		}
		if (!func_154(*uParam2, 8))
		{
			if (func_413(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return true;
			}
		}
		bVar1 = !func_154(*uParam2, 128);
		if (bParam4)
		{
			if (func_411(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return true;
			}
		}
		else if (!func_154(*uParam2, 16))
		{
			if (func_411(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return true;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
		{
			*uParam3 = 16;
			return true;
		}
	}
	return false;
}

bool func_411(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return true;
				}
			}
		}
		if (bLocal_79)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return true;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		return true;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true))
			{
				return true;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return true;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return true;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return true;
		}
	}
	if (func_412(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return true;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_338(iParam0, 1) < 1.5f)
		{
			return true;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, false)))
			{
				return true;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return true;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_412(int iParam0, int iParam1)
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
	if (iVar0 == joaat("WEAPON_PETROLCAN"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_413(int iParam0, int iParam1, var uParam2)
{
	if (WEAPON::IS_PED_ARMED(iParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(iParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_414(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;

	iVar3 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	if (MISC::IS_BULLET_IN_AREA(vVar0, 4f, true))
	{
		return true;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), true, true))
	{
		return true;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return true;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_415(iVar3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return true;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), false))
		{
			return true;
		}
	}
	return false;
}

bool func_415(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
				{
					if (iVar0 == joaat("WEAPON_STICKYBOMB"))
					{
						if (func_164(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PAD::IS_CONTROL_PRESSED(0, 69)))
									{
										return true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_416(int iParam0, var uParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_338(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

void func_417(var uParam0)
{
	if (!func_154(uParam0->f_98, 2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
		{
			if (func_167(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_17, 25f, false, false, false, false, false, false);
				func_58(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_418()
{
	func_419(&Local_410);
	func_436();
}

void func_419(int iParam0)
{
	func_10(0, iParam0, 1);
	if (iParam0->f_411 != 9)
	{
		func_437(2);
	}
}

bool func_420(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return true;
	}
	if ((((!func_173() && func_171(iParam0, 3) > 1f) || iParam0->f_415 == 18) || iParam0->f_415 == 14) || iParam0->f_415 == 15)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0->f_3, iParam0->f_4, false))
				{
					if (func_57(iParam0) == 0 || func_287(iParam0->f_85, 32))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(iParam0->f_4))
						{
							func_343(iParam0, 4160, 0);
						}
						else
						{
							func_343(iParam0, 0, 0);
						}
						return true;
					}
					else
					{
						func_343(iParam0, 0, 0);
						return true;
					}
				}
				else
				{
					func_343(iParam0, 0, 0);
					return true;
				}
			}
			else
			{
				func_343(iParam0, 0, 0);
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	return false;
}

void func_421(int iParam0)
{
	if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_8));
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_9))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_9));
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_10))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_10));
	}
}

bool func_422(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return true;
	}
	return false;
}

void func_423()
{
	int iVar0;

	Local_410.f_23 = { -1583.59f, 169.2662f, 57.6205f };
	Local_410.f_33 = 116f;
	Local_410.f_26 = { 49.0898f, -1178.923f, 28.2091f };
	Local_410.f_34 = 185.975f;
	func_425(&Local_410, 6);
	Local_410.f_410 = 0;
	func_424(&Local_410, 3, 6);
	iVar0 = func_3(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		StringCopy(&cLocal_896, "txm9_gHelp1M_4", 24);
	}
	else if (iVar0 == 2)
	{
		StringCopy(&cLocal_896, "txm9_gHelp1T_4", 24);
	}
	else if (iVar0 == 1)
	{
		StringCopy(&cLocal_896, "txm9_gHelp1F_7", 24);
	}
}

void func_424(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_58 = iParam1;
	iParam0->f_59 = iParam2;
}

void func_425(int iParam0, int iParam1)
{
	func_435(1);
	func_230();
	func_7(&(iParam0->f_244));
	func_434(iParam0);
	iParam0->f_411 = iParam1;
	if (!func_154(Global_111638.f_19092, 4))
	{
		func_58(&(Global_111638.f_19092), 4);
	}
	func_429(iParam0);
	func_427(iParam0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	iParam0->f_102 = (func_426(iParam0->f_411) % iParam0->f_101);
	iParam0->f_80 = 0;
	iParam0->f_428 = func_2();
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
}

int func_426(int iParam0)
{
	return Global_111638.f_19092.f_39[iParam0];
}

void func_427(int iParam0)
{
	switch (func_57(iParam0))
	{
		case 0:
			func_428(iParam0, "EXC", "Txm2", "Txm2aud");
			iParam0->f_101 = 2;
			break;
		case 1:
			func_428(iParam0, "TIE", "Txm1", "txm1aud");
			iParam0->f_101 = 1;
			break;
		case 2:
			func_428(iParam0, "DED", "Txm3", "Txm3aud");
			iParam0->f_101 = 1;
			break;
		case 3:
			func_428(iParam0, "GYB", "Txm12", "Txm12au");
			iParam0->f_101 = 2;
			break;
		case 4:
			func_428(iParam0, "TTB", "Txm6", "Txm6aud");
			iParam0->f_101 = 2;
			break;
		case 5:
			func_428(iParam0, "CUI", "Txm8", "Txm8aud");
			iParam0->f_101 = 1;
			break;
		case 6:
			func_428(iParam0, "GYN", "Txm9", "Txm9aud");
			iParam0->f_101 = 1;
			break;
		case 7:
			func_428(iParam0, "TCC", "Txm10", "Txm10au");
			iParam0->f_101 = 2;
			break;
		case 8:
			func_428(iParam0, "TFC", "Txm4", "Txm4aud");
			iParam0->f_101 = 1;
			break;
		case 9:
			func_428(iParam0, "PRO", "txmP", "TxmPaud");
			iParam0->f_101 = 1;
			break;
	}
}

void func_428(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	iParam0->f_122 = sParam1;
	iParam0->f_143 = sParam2;
	iParam0->f_144 = sParam3;
}

void func_429(int iParam0)
{
	int iVar0;

	switch (iParam0->f_411)
	{
		case 0:
			func_433(iParam0, 3);
			func_432(iParam0, 14);
			break;
		case 1:
			func_433(iParam0, 14);
			func_432(iParam0, 8);
			break;
		case 2:
			func_433(iParam0, 8);
			func_432(iParam0, 7);
			break;
		case 3:
			func_433(iParam0, 15);
			func_432(iParam0, 6);
			break;
		case 4:
			func_433(iParam0, 0);
			func_432(iParam0, 3);
			break;
		case 5:
			func_433(iParam0, 6);
			func_432(iParam0, 7);
			break;
		case 6:
			func_433(iParam0, 8);
			func_432(iParam0, 15);
			break;
		case 7:
			func_433(iParam0, 8);
			func_432(iParam0, 14);
			break;
		case 8:
			func_433(iParam0, 7);
			func_432(iParam0, 15);
			break;
		case 9:
			func_433(iParam0, MISC::GET_RANDOM_INT_IN_RANGE(0, 17));
			iVar0 = func_431((iParam0->f_418.f_2 + MISC::GET_RANDOM_INT_IN_RANGE(1, 17)), 0, 16);
			func_432(iParam0, iVar0);
			func_430(iParam0);
			iParam0->f_418.f_7 = 1;
			iParam0->f_418.f_8 = 1;
			break;
	}
}

void func_430(int iParam0)
{
	switch (iParam0->f_418.f_2)
	{
		case 2:
		case 8:
			iParam0->f_418.f_3 = 1;
			break;
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			iParam0->f_418.f_3 = 2;
			break;
		case 4:
		case 10:
			iParam0->f_418.f_3 = 3;
			break;
		case 1:
		case 6:
		case 13:
			iParam0->f_418.f_3 = 4;
			break;
		case 11:
			iParam0->f_418.f_3 = 5;
			break;
		case 12:
		case 14:
			iParam0->f_418.f_3 = 6;
			break;
		case 7:
			iParam0->f_418.f_3 = 7;
			break;
	}
}

int func_431(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_432(int iParam0, int iParam1)
{
	iParam0->f_418.f_1 = iParam1;
}

void func_433(int iParam0, int iParam1)
{
	iParam0->f_418.f_2 = iParam1;
}

void func_434(int iParam0)
{
	iParam0->f_2 = PLAYER::PLAYER_PED_ID();
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	iParam0->f_14 = { func_38() };
	iParam0->f_17 = { func_38() };
	iParam0->f_35 = 0f;
	iParam0->f_76 = 0;
	iParam0->f_49 = 0;
	iParam0->f_109 = 0;
	iParam0->f_36 = 0f;
	iParam0->f_410 = 2;
	iParam0->f_123 = "TRS_FINDING_LOCATION";
	func_149(iParam0, 32, 0);
}

void func_435(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_110694, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_110688 = 1;
	}
	else
	{
		StringCopy(&Global_110694, "NULL", 24);
		Global_110688 = 0;
	}
}

void func_436()
{
	func_237(&uLocal_1036, vLocal_874, 100f, 1);
	TASK::REMOVE_WAYPOINT_RECORDING("taxi_oj_gyn");
	PED::SET_CREATE_RANDOM_COPS(true);
	func_249();
	func_150();
	ENTITY::REMOVE_MODEL_HIDE(vLocal_892, 5f, joaat("PROP_SKID_CHAIR_02"), 0);
	ENTITY::REMOVE_MODEL_HIDE(vLocal_892, 5f, joaat("PROP_RUB_COUCH03"), 0);
	AUDIO::STOP_AUDIO_SCENE("TAXI_GOT_U_NOW");
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_437(int iParam0)
{
	Global_110348.f_22 = iParam0;
}

bool func_438(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

