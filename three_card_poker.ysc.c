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
	struct<577> Local_116 = { 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 32, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 32;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	struct<9> Local_749[32];
	struct<855> Local_1038 = { 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, -1, -1, 0, 0, 0, 4, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1893 = 3;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	struct<23> Local_1901 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_1924 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_1940 = false;
	bool bLocal_1941 = false;
	int iLocal_1942 = 0;
	bool bLocal_1943 = false;
	int iLocal_1944 = 0;
	int iLocal_1945 = 0;
	int iLocal_1946 = 0;
	bool bLocal_1947 = false;
	bool bLocal_1948 = false;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	bool bLocal_1951 = false;
	bool bLocal_1952 = false;
	bool bLocal_1953 = false;
	int iLocal_1954[4] = { 0, 0, 0, 0 };
	int iLocal_1959[4] = { 0, 0, 0, 0 };
	bool bLocal_1964 = false;
	bool bLocal_1965 = false;
	bool bLocal_1966 = false;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	int iLocal_1969 = 0;
	int iLocal_1970 = 0;
	int iLocal_1971 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

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
	iLocal_1942 = 1;
	func_435();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_424())
		{
			func_420();
		}
		if (Global_1696039)
		{
			Global_1696039 = 0;
			func_420();
		}
		if (Global_2405072.f_2672 && Global_2409287 != 0)
		{
			if (Global_2409287 != 6)
			{
				func_420();
			}
		}
		if (func_419() && UNK_0x757EF87A33649210())
		{
			func_420();
		}
		if ((!func_418(UNK_0xD803B885F5E47A62()) && !func_417(UNK_0xD803B885F5E47A62())) && !func_416(UNK_0xD803B885F5E47A62()))
		{
			func_420();
		}
		if (UNK_0xA14BB9332558B949() && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_34, 6))
		{
			func_420();
		}
		if (func_417(UNK_0xD803B885F5E47A62()) && func_412() != func_411())
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[func_412() /*421*/].f_310.f_4, false) && UNK_0x757EF87A33649210())
			{
				func_420();
			}
		}
		if (func_417(UNK_0xD803B885F5E47A62()) && func_409() != 0)
		{
			func_420();
		}
		iVar0 = 0;
		while (iVar0 < Local_1038.f_26)
		{
			if ((!func_408() && UNK_0xE9F78D191AD5EDBA(Local_116.f_50[iVar0])) && UNK_0x526BC32A660C89E6(Local_116.f_50[iVar0]))
			{
				UNK_0x866EE3B81CEF363A(Local_116.f_50[iVar0], 1);
			}
			iVar0++;
		}
		func_91();
		if (func_408())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;

	func_90();
	func_87();
	func_81();
	iVar0 = 0;
	while (iVar0 < Local_1038.f_26)
	{
		switch (Local_116.f_586[iVar0])
		{
			case 0:
				if (Global_2514396 != iVar0 && (Global_2514396 != -1 || func_417(UNK_0xD803B885F5E47A62())))
				{
					Local_116.f_25[iVar0] = 1;
					func_80(&(Local_116.f_168[iVar0 /*55*/]));
					func_79(1, iVar0);
				}
				break;
			case 1:
				if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iVar0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(Local_116.f_50[iVar0])))
				{
					if (UNK_0x526BC32A660C89E6(Local_116.f_50[iVar0]))
					{
						Local_116.f_45[iVar0] = UNK_0xF958843510932FF6(Local_116.f_35[iVar0]);
						if (Local_116.f_45[iVar0] != -1)
						{
							if (UNK_0xB4ECF989E2C1DAC8(UNK_0x1B50683925F00106(Local_116.f_50[iVar0]), func_78(), func_77(iVar0), 3))
							{
								if (UNK_0xA45992A6CE82FB43(Local_116.f_45[iVar0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iVar0]), joaat("BLEND_OUT")))
								{
									Local_116.f_35[iVar0] = UNK_0xF66E5A439A080021(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
									UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iVar0]), Local_116.f_35[iVar0], func_78(), func_74(iVar0), 2f, -2f, 13, 16, 1148846080, 0);
									UNK_0x914E6894744915F8(Local_116.f_35[iVar0]);
								}
							}
							else if (UNK_0xA45992A6CE82FB43(Local_116.f_45[iVar0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iVar0]), joaat("BLEND_OUT")))
							{
								Local_116.f_35[iVar0] = UNK_0xF66E5A439A080021(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, false, true, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
								UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iVar0]), Local_116.f_35[iVar0], func_78(), func_77(iVar0), 2f, -2f, 13, 16, 1148846080, 0);
								UNK_0x914E6894744915F8(Local_116.f_35[iVar0]);
							}
						}
					}
					else
					{
						UNK_0x8D30F6387EE75385(Local_116.f_50[iVar0]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if ((Local_116.f_117[(iVar0 * 4 + iVar1)] != func_411() && Global_2514396 != iVar0) && (Global_2514396 != -1 || func_417(UNK_0xD803B885F5E47A62())))
					{
						func_79(2, iVar0);
						Local_116.f_40[iVar0] = iVar1;
						func_73(&(Local_116.f_159[iVar0 /*2*/]), 0, 0);
						return;
					}
					iVar1++;
				}
				break;
			case 2:
				if (func_72(&(Local_116.f_159[iVar0 /*2*/])) && func_71(&(Local_116.f_159[iVar0 /*2*/]), 2000, 0))
				{
					Local_116.f_35[iVar0] = UNK_0xF66E5A439A080021(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
					UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iVar0]), Local_116.f_35[iVar0], func_78(), func_70(iVar0, Local_116.f_40[iVar0]), 2f, -2f, 13, 16, 1148846080, 0);
					UNK_0x914E6894744915F8(Local_116.f_35[iVar0]);
					func_69(&(Local_116.f_159[iVar0 /*2*/]));
				}
				func_2(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	vector3 vVar11;
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
	struct<5> Var25;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;

	iVar3 = 0;
	iVar4 = 0;
	bVar6 = false;
	if (Local_116.f_576[iParam0] > 7 && Local_116.f_576[iParam0] < 12)
	{
		bVar6 = true;
	}
	if ((!func_68(iParam0, bVar6) || Global_2514396 == iParam0) || Local_116[iParam0])
	{
		Local_116[iParam0] = 1;
		func_67(iParam0);
		return;
	}
	if (UNK_0xE9F78D191AD5EDBA(Local_116.f_50[iParam0]))
	{
		if (!UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
		{
			Local_116.f_10[iParam0] = 0;
			UNK_0x8D30F6387EE75385(Local_116.f_50[iParam0]);
		}
		else if (!Local_116.f_10[iParam0])
		{
			UNK_0x866EE3B81CEF363A(Local_116.f_50[iParam0], 0);
			Local_116.f_10[iParam0] = 1;
		}
	}
	Local_116.f_45[iParam0] = UNK_0xF958843510932FF6(Local_116.f_35[iParam0]);
	switch (Local_116.f_576[iParam0])
	{
		case 0:
			func_66(1, iParam0);
			break;
		case 1:
			bVar0 = true;
			iVar2 = 0;
			while (iVar2 < 4)
			{
				iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
				if (iVar1 != -1)
				{
					if (Local_749[iVar1 /*9*/] != 0 || Local_749[iVar1 /*9*/].f_6 != 0)
					{
						bVar0 = false;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_65(&(Local_116.f_168[iParam0 /*55*/]));
				func_64(iParam0);
				func_66(2, iParam0);
			}
			break;
		case 2:
			bVar0 = true;
			iVar2 = 0;
			while (iVar2 < 4)
			{
				iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
				if (iVar1 != -1)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/].f_6, false))
					{
						bVar0 = false;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_66(3, iParam0);
			}
			break;
		case 3:
			if (!func_63(iParam0, 18))
			{
				if (func_53(12, &(Local_116.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 18);
				}
			}
			if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(Local_116.f_50[iParam0])))
			{
				if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
				{
					if (Local_116.f_45[iParam0] != -1)
					{
						if (Local_116.f_30[iParam0] == 1)
						{
							if ((UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT"))) || UNK_0xB4ECF989E2C1DAC8(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_77(iParam0), 3))
							{
								Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
								UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_51(iParam0, -1), 2f, -2f, 13, 16, 1148846080, 0);
								UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
							}
						}
						else if (((UNK_0xB4ECF989E2C1DAC8(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 0), 3) || UNK_0xB4ECF989E2C1DAC8(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 1), 3)) || UNK_0xB4ECF989E2C1DAC8(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 2), 3)) || UNK_0xB4ECF989E2C1DAC8(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 3), 3))
						{
							Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
							UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_50(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
						}
						else if (UNK_0xB4ECF989E2C1DAC8(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_77(iParam0), 3))
						{
							if (UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT")))
							{
								Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
								UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_74(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
							}
						}
						else if (UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT")))
						{
							Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
							UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
						}
					}
				}
				else
				{
					UNK_0x8D30F6387EE75385(Local_116.f_50[iParam0]);
				}
			}
			bVar0 = true;
			iVar3 = 0;
			iVar4 = 0;
			if (!func_72(&(Local_116.f_150[iParam0 /*2*/])))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						iVar3++;
						if (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0)
						{
							func_73(&(Local_116.f_150[iParam0 /*2*/]), 0, 0);
						}
						else
						{
							iVar4++;
						}
					}
					iVar2++;
				}
				if (iVar3 == iVar4)
				{
					if (!func_72(&(Local_116.f_591[iParam0 /*2*/])))
					{
						func_73(&(Local_116.f_591[iParam0 /*2*/]), 0, 0);
					}
					else if (func_71(&(Local_116.f_591[iParam0 /*2*/]), 60000, 0))
					{
						func_64(iParam0);
						func_69(&(Local_116.f_591[iParam0 /*2*/]));
					}
					else if (func_71(&(Local_116.f_591[iParam0 /*2*/]), 30000, 0))
					{
						if (!func_63(iParam0, 17))
						{
							if (func_53(8, &(Local_116.f_50[iParam0]), 0, -1))
							{
								func_52(iParam0, 17);
							}
						}
					}
				}
				else
				{
					func_69(&(Local_116.f_591[iParam0 /*2*/]));
				}
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						if (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0)
						{
							iVar8++;
						}
						if (!UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], 2))
						{
							bVar0 = false;
						}
					}
					iVar2++;
				}
				if (iVar8 > 0)
				{
					if (func_71(&(Local_116.f_150[iParam0 /*2*/]), 30000, 0) || bVar0)
					{
						func_69(&(Local_116.f_150[iParam0 /*2*/]));
						func_64(iParam0);
						func_66(4, iParam0);
					}
					else if (func_71(&(Local_116.f_150[iParam0 /*2*/]), 18000, 0))
					{
						if (!func_63(iParam0, 19))
						{
							if (func_53(13, &(Local_116.f_50[iParam0]), 0, -1))
							{
								func_52(iParam0, 19);
							}
						}
					}
				}
				else
				{
					func_69(&(Local_116.f_150[iParam0 /*2*/]));
				}
			}
			break;
		case 4:
			func_64(iParam0);
			if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 11))
			{
				if (func_48(iParam0))
				{
					UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 11);
				}
			}
			else if (func_47(iParam0))
			{
				UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 11);
				func_66(5, iParam0);
			}
			break;
		case 5:
			if (!func_63(iParam0, 20))
			{
				if (func_53(21, &(Local_116.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 20);
				}
			}
			if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(Local_116.f_50[iParam0])))
			{
				if ((UNK_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 0)]) && UNK_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 1)])) && UNK_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 2)]))
				{
					if (!UNK_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 0)]))
					{
						UNK_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 0)]);
						bVar9 = true;
					}
					if (!UNK_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 1)]))
					{
						UNK_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 1)]);
						bVar9 = true;
					}
					if (!UNK_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 2)]))
					{
						UNK_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 2)]);
						bVar9 = true;
					}
					if (bVar9)
					{
						return;
					}
					if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
						{
							Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
							UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_44(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
							UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), false);
						}
						else if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 8))
						{
							if (Local_116.f_45[iParam0] != -1)
							{
								if (UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT")))
								{
									Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
									UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_43(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 0)]), Local_116.f_35[iParam0], func_45(), "deck_shuffle_card_a", 1000f, -1000f, 13);
									UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 1)]), Local_116.f_35[iParam0], func_45(), "deck_shuffle_card_b", 1000f, -1000f, 13);
									UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 2)]), Local_116.f_35[iParam0], func_45(), "deck_shuffle_card_c", 1000f, -1000f, 13);
									UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
									UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 8);
								}
							}
						}
						else if (Local_116.f_45[iParam0] != -1)
						{
							if (UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT")))
							{
								Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
								UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_42(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
								UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
								UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 8);
								UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 0)]), true, 0);
								UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 1)]), true, 0);
								UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 2)]), true, 0);
								func_66(6, iParam0);
							}
							else if (UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), -1813854677))
							{
								UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 0)]), true, 0);
								UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 1)]), true, 0);
								UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 2)]), true, 0);
							}
						}
					}
				}
			}
			break;
		case 6:
			if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 11))
			{
				if (func_48(iParam0))
				{
					UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 11);
				}
			}
			else
			{
				Local_116.f_168[iParam0 /*55*/] = 0;
				func_66(7, iParam0);
			}
			break;
		case 7:
			vVar11 = { func_76(iParam0) };
			vVar11.f_2 = (vVar11.z + 0.914f);
			switch (Local_116.f_571[iParam0])
			{
				case 0:
					iVar1 = Local_116.f_117[iParam0 * 4];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1 /*9*/].f_2 == iParam0 && (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0))
						{
							if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(Local_116.f_50[iParam0])))
							{
								if (!UNK_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 0, 0)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/];
									UNK_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (UNK_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 0, 0)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!UNK_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 1, 0)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 1;
									UNK_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (UNK_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 1, 0)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!UNK_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 2, 0)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 2;
									UNK_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (UNK_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 2, 0)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 0)]) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 0)])) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 0)]))
								{
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 0)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 0)]);
										bVar14 = true;
									}
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 0)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 0)]);
										bVar14 = true;
									}
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 0)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 0)]);
										bVar14 = true;
									}
									if (bVar14)
									{
										return;
									}
									if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
										{
											Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
											UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_38(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p01_card_a", 1000f, -1000f, 13);
											UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p01_card_b", 1000f, -1000f, 13);
											UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p01_card_c", 1000f, -1000f, 13);
											UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
											UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), false);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT"))) || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_116.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_116.f_410[iVar1 /*5*/] = 3;
												}
												UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_116.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_116.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
						bVar7 = false;
						func_36(1, iParam0);
					}
					break;
				case 1:
					iVar1 = Local_116.f_117[iParam0 * 4 + 1];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1 /*9*/].f_2 == iParam0 && (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0))
						{
							if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(Local_116.f_50[iParam0])))
							{
								if (!UNK_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 0, 1)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/];
									UNK_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (UNK_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 0, 1)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!UNK_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 1, 1)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 1;
									UNK_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (UNK_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 1, 1)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!UNK_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 2, 1)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 2;
									UNK_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (UNK_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 2, 1)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 1)]) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 1)])) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 1)]))
								{
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 1)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 1)]);
										bVar15 = true;
									}
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 1)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 1)]);
										bVar15 = true;
									}
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 1)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 1)]);
										bVar15 = true;
									}
									if (bVar15)
									{
										return;
									}
									if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
										{
											Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
											UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_35(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p02_card_a", 1000f, -1000f, 13);
											UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p02_card_b", 1000f, -1000f, 13);
											UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p02_card_c", 1000f, -1000f, 13);
											UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
											UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), false);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT"))) || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_116.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_116.f_410[iVar1 /*5*/] = 3;
												}
												UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_116.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_116.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
						bVar7 = false;
						func_36(2, iParam0);
					}
					break;
				case 2:
					iVar1 = Local_116.f_117[iParam0 * 4 + 2];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1 /*9*/].f_2 == iParam0 && (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0))
						{
							if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(Local_116.f_50[iParam0])))
							{
								if (!UNK_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 0, 2)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/];
									UNK_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (UNK_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 0, 2)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!UNK_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 1, 2)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 1;
									UNK_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (UNK_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 1, 2)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!UNK_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 2, 2)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 2;
									UNK_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (UNK_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 2, 2)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 2)]) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 2)])) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 2)]))
								{
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 2)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 2)]);
										bVar16 = true;
									}
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 2)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 2)]);
										bVar16 = true;
									}
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 2)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 2)]);
										bVar16 = true;
									}
									if (bVar16)
									{
										return;
									}
									if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
										{
											Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
											UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_34(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p03_card_a", 1000f, -1000f, 13);
											UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p03_card_b", 1000f, -1000f, 13);
											UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p03_card_c", 1000f, -1000f, 13);
											UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
											UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), false);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT"))) || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_116.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_116.f_410[iVar1 /*5*/] = 3;
												}
												UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_116.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_116.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
						bVar7 = false;
						func_36(3, iParam0);
					}
					break;
				case 3:
					iVar1 = Local_116.f_117[iParam0 * 4 + 3];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1 /*9*/].f_2 == iParam0 && (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0))
						{
							if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(Local_116.f_50[iParam0])))
							{
								if (!UNK_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 0, 3)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/];
									UNK_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (UNK_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 0, 3)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!UNK_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 1, 3)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 1;
									UNK_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (UNK_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 1, 3)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!UNK_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 2, 3)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 2;
									UNK_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (UNK_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 2, 3)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 3)]) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 3)])) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 3)]))
								{
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 3)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 3)]);
										bVar17 = true;
									}
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 3)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 3)]);
										bVar17 = true;
									}
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 3)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 3)]);
										bVar17 = true;
									}
									if (bVar17)
									{
										return;
									}
									if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
										{
											Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
											UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_33(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p04_card_a", 1000f, -1000f, 13);
											UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p04_card_b", 1000f, -1000f, 13);
											UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p04_card_c", 1000f, -1000f, 13);
											UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
											UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), false);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT"))) || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_116.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_116.f_410[iVar1 /*5*/] = 3;
												}
												UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_116.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_116.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
						bVar7 = false;
						func_36(4, iParam0);
					}
					break;
				case 4:
					if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(Local_116.f_50[iParam0])))
					{
						if (!UNK_0xE9F78D191AD5EDBA(Local_116.f_55[func_46(iParam0, 0)]))
						{
							iVar10 = Local_116.f_168[iParam0 /*55*/];
							UNK_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
							if (UNK_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
							{
								func_39(&(Local_116.f_55[func_46(iParam0, 0)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if (!UNK_0xE9F78D191AD5EDBA(Local_116.f_55[func_46(iParam0, 1)]))
						{
							iVar10 = Local_116.f_168[iParam0 /*55*/] + 1;
							UNK_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
							if (UNK_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
							{
								func_39(&(Local_116.f_55[func_46(iParam0, 1)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if (!UNK_0xE9F78D191AD5EDBA(Local_116.f_55[func_46(iParam0, 2)]))
						{
							iVar10 = Local_116.f_168[iParam0 /*55*/] + 2;
							UNK_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
							if (UNK_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
							{
								func_39(&(Local_116.f_55[func_46(iParam0, 2)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if ((UNK_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 0)]) && UNK_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 1)])) && UNK_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 2)]))
						{
							if (!UNK_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 0)]))
							{
								UNK_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 0)]);
								bVar18 = true;
							}
							if (!UNK_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 1)]))
							{
								UNK_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 1)]);
								bVar18 = true;
							}
							if (!UNK_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 2)]))
							{
								UNK_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 2)]);
								bVar18 = true;
							}
							if (bVar18)
							{
								return;
							}
							if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
								{
									Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
									UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_32(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 0)]), Local_116.f_35[iParam0], func_45(), "deck_deal_self_card_a", 1000f, -1000f, 13);
									UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 1)]), Local_116.f_35[iParam0], func_45(), "deck_deal_self_card_b", 1000f, -1000f, 13);
									UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 2)]), Local_116.f_35[iParam0], func_45(), "deck_deal_self_card_c", 1000f, -1000f, 13);
									UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
									UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), false);
								}
								else if (Local_116.f_45[iParam0] != -1)
								{
									if (UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT")))
									{
										bVar7 = true;
										Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
										UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
										if (Local_116.f_389[iParam0 /*5*/] == 0)
										{
											func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
											Local_116.f_389[iParam0 /*5*/].f_1[0] = uVar5;
											func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
											Local_116.f_389[iParam0 /*5*/].f_1[1] = uVar5;
											func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
											Local_116.f_389[iParam0 /*5*/].f_1[2] = uVar5;
											Local_116.f_389[iParam0 /*5*/] = 3;
										}
										UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
									}
								}
								else
								{
									bVar7 = true;
									Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
									UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
									if (Local_116.f_389[iParam0 /*5*/] == 0)
									{
										func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
										Local_116.f_389[iParam0 /*5*/].f_1[0] = uVar5;
										func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
										Local_116.f_389[iParam0 /*5*/].f_1[1] = uVar5;
										func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
										Local_116.f_389[iParam0 /*5*/].f_1[2] = uVar5;
										Local_116.f_389[iParam0 /*5*/] = 3;
									}
								}
							}
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
						bVar7 = false;
						func_36(0, iParam0);
						func_66(8, iParam0);
					}
					break;
			}
			break;
		case 8:
			if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(Local_116.f_50[iParam0])))
			{
				if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]) && Local_116.f_45[iParam0] != -1)
				{
					if (UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT")))
					{
						Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
						UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
						UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
						func_64(iParam0);
						func_66(9, iParam0);
					}
				}
			}
			break;
		case 9:
			bVar0 = true;
			if (!func_72(&(Local_116.f_150[iParam0 /*2*/])))
			{
				func_73(&(Local_116.f_150[iParam0 /*2*/]), 0, 0);
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						if ((!UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], true) && !UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], 3)) && (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0))
						{
							if (!func_63(iParam0, 18))
							{
								if (func_53(14, &(Local_116.f_50[iParam0]), 0, -1))
								{
									func_52(iParam0, 18);
								}
							}
							bVar0 = false;
						}
					}
					iVar2++;
				}
				if (bVar0)
				{
					func_69(&(Local_116.f_150[iParam0 /*2*/]));
					func_66(10, iParam0);
				}
				else if (func_71(&(Local_116.f_150[iParam0 /*2*/]), 15000, 0))
				{
					if (!func_63(iParam0, 19))
					{
						if (func_53(9, &(Local_116.f_50[iParam0]), 0, -1))
						{
							func_52(iParam0, 19);
						}
					}
				}
			}
			break;
		case 10:
			switch (Local_116.f_581[iParam0])
			{
				case 0:
					if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(Local_116.f_50[iParam0])))
					{
						if ((UNK_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 0)]) && UNK_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 1)])) && UNK_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 2)]))
						{
							if (!UNK_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 0)]))
							{
								UNK_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 0)]);
								bVar19 = true;
							}
							if (!UNK_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 1)]))
							{
								UNK_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 1)]);
								bVar19 = true;
							}
							if (!UNK_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 2)]))
							{
								UNK_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 2)]);
								bVar19 = true;
							}
							if (bVar19)
							{
								return;
							}
							if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
								{
									Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
									UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_30(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_self_card_a", 1000f, -1000f, 13);
									UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_self_card_b", 1000f, -1000f, 13);
									UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_self_card_c", 1000f, -1000f, 13);
									UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
									UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), false);
								}
								else if (Local_116.f_45[iParam0] != -1)
								{
									if ((UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT"))) || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
									{
										bVar7 = true;
										Local_116.f_5[iParam0] = 1;
										UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
									}
								}
								else
								{
									bVar7 = true;
									Local_116.f_5[iParam0] = 1;
									UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
								}
							}
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						bVar7 = false;
						func_29(1, iParam0);
					}
					break;
				case 1:
					iVar1 = Local_116.f_117[iParam0 * 4];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1 /*9*/].f_2 == iParam0 && (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0))
						{
							if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(Local_116.f_50[iParam0])))
							{
								if (((UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 0)]) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 0)])) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 0)])) && (UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], true) || UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], 3)))
								{
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 0)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 0)]);
										bVar20 = true;
									}
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 0)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 0)]);
										bVar20 = true;
									}
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 0)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 0)]);
										bVar20 = true;
									}
									if (bVar20)
									{
										return;
									}
									if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
										{
											Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
											if (UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], 4))
											{
												UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_28(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p01_card_a", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p01_card_b", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p01_card_c", 1000f, -1000f, 13);
											}
											else if (UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], true))
											{
												UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_27(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p01_card_a", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p01_card_b", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p01_card_c", 1000f, -1000f, 13);
											}
											else if (UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], 3))
											{
												UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_26(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p01_card_a", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p01_card_b", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p01_card_c", 1000f, -1000f, 13);
											}
											UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
											UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), false);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT"))) || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
											}
											else if (UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.5f)
											{
												UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 12);
											}
										}
										else
										{
											bVar7 = true;
											UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 12);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(2, iParam0);
					}
					break;
				case 2:
					iVar1 = Local_116.f_117[iParam0 * 4 + 1];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1 /*9*/].f_2 == iParam0 && (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0))
						{
							if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(Local_116.f_50[iParam0])))
							{
								if (((UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 1)]) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 1)])) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 1)])) && (UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], true) || UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], 3)))
								{
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 1)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 1)]);
										bVar21 = true;
									}
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 1)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 1)]);
										bVar21 = true;
									}
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 1)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 1)]);
										bVar21 = true;
									}
									if (bVar21)
									{
										return;
									}
									if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
										{
											Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
											if (UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], 4))
											{
												UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_20(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p02_card_a", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p02_card_b", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p02_card_c", 1000f, -1000f, 13);
											}
											else if (UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], true))
											{
												UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_19(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p02_card_a", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p02_card_b", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p02_card_c", 1000f, -1000f, 13);
											}
											else if (UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], 3))
											{
												UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_18(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p02_card_a", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p02_card_b", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p02_card_c", 1000f, -1000f, 13);
											}
											UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
											UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), false);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT"))) || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
											}
											else if (UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.5f)
											{
												UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 13);
											}
										}
										else
										{
											bVar7 = true;
											UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 13);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(3, iParam0);
					}
					break;
				case 3:
					iVar1 = Local_116.f_117[iParam0 * 4 + 2];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1 /*9*/].f_2 == iParam0 && (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0))
						{
							if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(Local_116.f_50[iParam0])))
							{
								if (((UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 2)]) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 2)])) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 2)])) && (UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], true) || UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], 3)))
								{
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 2)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 2)]);
										bVar22 = true;
									}
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 2)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 2)]);
										bVar22 = true;
									}
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 2)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 2)]);
										bVar22 = true;
									}
									if (bVar22)
									{
										return;
									}
									if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
										{
											Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
											if (UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], 4))
											{
												UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_17(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p03_card_a", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p03_card_b", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p03_card_c", 1000f, -1000f, 13);
											}
											else if (UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], true))
											{
												UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_16(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p03_card_a", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p03_card_b", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p03_card_c", 1000f, -1000f, 13);
											}
											else if (UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], 3))
											{
												UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_15(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p03_card_a", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p03_card_b", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p03_card_c", 1000f, -1000f, 13);
											}
											UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
											UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), false);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT"))) || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
											}
											else if (UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.5f)
											{
												UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 14);
											}
										}
										else
										{
											bVar7 = true;
											UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 14);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(4, iParam0);
					}
					break;
				case 4:
					iVar1 = Local_116.f_117[iParam0 * 4 + 3];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1 /*9*/].f_2 == iParam0 && (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0))
						{
							if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(Local_116.f_50[iParam0])))
							{
								if (((UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 3)]) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 3)])) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 3)])) && (UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], true) || UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], 3)))
								{
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 3)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 3)]);
										bVar23 = true;
									}
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 3)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 3)]);
										bVar23 = true;
									}
									if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 3)]))
									{
										UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 3)]);
										bVar23 = true;
									}
									if (bVar23)
									{
										return;
									}
									if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
										{
											Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
											if (UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], 4))
											{
												UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_14(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p04_card_a", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p04_card_b", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p04_card_c", 1000f, -1000f, 13);
											}
											else if (UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], true))
											{
												UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_13(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p04_card_a", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p04_card_b", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p04_card_c", 1000f, -1000f, 13);
											}
											else if (UNK_0xEAE0D21A50E6C7F4(Local_749[iVar1 /*9*/], 3))
											{
												UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_12(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p04_card_a", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p04_card_b", 1000f, -1000f, 13);
												UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p04_card_c", 1000f, -1000f, 13);
											}
											UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
											UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), false);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT"))) || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
											}
											else if (UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.5f)
											{
												UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 15);
											}
										}
										else
										{
											bVar7 = true;
											UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 15);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(0, iParam0);
						func_66(11, iParam0);
					}
					break;
			}
			break;
		case 11:
			if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(Local_116.f_50[iParam0])))
			{
				if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
					{
						Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
						UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_8(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
						UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
						UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), false);
					}
					else if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false) && !UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 2))
					{
						if (Local_116.f_45[iParam0] != -1)
						{
							if (UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT")))
							{
								Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
								UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_44(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
								UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 9);
								UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 2);
							}
						}
					}
					else if (UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 9))
					{
						if (Local_116.f_45[iParam0] != -1)
						{
							if (UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT")))
							{
								Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
								UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_42(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
								UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
								UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 9);
								func_64(iParam0);
								func_66(12, iParam0);
							}
						}
					}
				}
			}
			break;
		case 12:
			if (!func_63(iParam0, 21))
			{
				if (func_53(1, &(Local_116.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 21);
				}
			}
			Var25.f_1 = 3;
			if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(Local_116.f_50[iParam0])))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 3))
				{
					iVar2 = iParam0 * 4;
					bVar24 = Local_116.f_117[iVar2];
					if (bVar24 != func_411() && bVar24 > -1)
					{
						if (Local_116.f_410[bVar24 /*5*/] > 0 || UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
						{
							if ((UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 0)]) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 0)])) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 0)]))
							{
								if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 0)]))
								{
									UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 0)]);
									bVar30 = true;
								}
								if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 0)]))
								{
									UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 0)]);
									bVar30 = true;
								}
								if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 0)]))
								{
									UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 0)]);
									bVar30 = true;
								}
								if (bVar30)
								{
									return;
								}
								if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
								{
									if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
										UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_7(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p01_card_a", 1000f, -1000f, 13);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p01_card_b", 1000f, -1000f, 13);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p01_card_c", 1000f, -1000f, 13);
										UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
										UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), false);
									}
								}
								else if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
								{
									if (Local_116.f_45[iParam0] != -1)
									{
										if ((UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT"))) || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
										{
											UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
											UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 3);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 0)]), false, 0);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 0)]), false, 0);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 0)]), false, 0);
											Local_116.f_410[bVar24 /*5*/] = { Var25 };
										}
										else if (UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), -1406739296))
										{
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 0)]), false, 0);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 0)]), false, 0);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 0)]), false, 0);
										}
									}
									else
									{
										UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
										UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 3);
										UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 0)]), false, 0);
										UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 0)]), false, 0);
										UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 0)]), false, 0);
										Local_116.f_410[bVar24 /*5*/] = { Var25 };
									}
								}
							}
							else
							{
								UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
								UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 3);
							}
						}
						else
						{
							UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
							UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 3);
						}
					}
					else
					{
						UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
						UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 3);
					}
				}
				else if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 4))
				{
					iVar2 = iParam0 * 4 + 1;
					bVar24 = Local_116.f_117[iVar2];
					if (bVar24 != func_411() && bVar24 > -1)
					{
						if (Local_116.f_410[bVar24 /*5*/] > 0 || UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
						{
							if ((UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 1)]) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 1)])) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 1)]))
							{
								if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 1)]))
								{
									UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 1)]);
									bVar31 = true;
								}
								if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 1)]))
								{
									UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 1)]);
									bVar31 = true;
								}
								if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 1)]))
								{
									UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 1)]);
									bVar31 = true;
								}
								if (bVar31)
								{
									return;
								}
								if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
								{
									if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
										UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_6(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p02_card_a", 1000f, -1000f, 13);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p02_card_b", 1000f, -1000f, 13);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p02_card_c", 1000f, -1000f, 13);
										UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
										UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), false);
									}
								}
								else if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
								{
									if (Local_116.f_45[iParam0] != -1)
									{
										if ((UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT"))) || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
										{
											UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
											UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 4);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 1)]), false, 0);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 1)]), false, 0);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 1)]), false, 0);
											Local_116.f_410[bVar24 /*5*/] = { Var25 };
										}
										else if (UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), -1406739296))
										{
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 1)]), false, 0);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 1)]), false, 0);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 1)]), false, 0);
										}
									}
									else
									{
										UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
										UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 4);
										UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 1)]), false, 0);
										UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 1)]), false, 0);
										UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 1)]), false, 0);
										Local_116.f_410[bVar24 /*5*/] = { Var25 };
									}
								}
							}
							else
							{
								UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
								UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 4);
							}
						}
						else
						{
							UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
							UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 4);
						}
					}
					else
					{
						UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
						UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 4);
					}
				}
				else if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 5))
				{
					iVar2 = iParam0 * 4 + 2;
					bVar24 = Local_116.f_117[iVar2];
					if (bVar24 != func_411() && bVar24 > -1)
					{
						if (Local_116.f_410[bVar24 /*5*/] > 0 || UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
						{
							if ((UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 2)]) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 2)])) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 2)]))
							{
								if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 2)]))
								{
									UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 2)]);
									bVar32 = true;
								}
								if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 2)]))
								{
									UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 2)]);
									bVar32 = true;
								}
								if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 2)]))
								{
									UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 2)]);
									bVar32 = true;
								}
								if (bVar32)
								{
									return;
								}
								if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
								{
									if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
										UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_5(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p03_card_a", 1000f, -1000f, 13);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p03_card_b", 1000f, -1000f, 13);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p03_card_c", 1000f, -1000f, 13);
										UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
										UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), false);
									}
								}
								else if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
								{
									if (Local_116.f_45[iParam0] != -1)
									{
										if ((UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT"))) || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
										{
											UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
											UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 5);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 2)]), false, 0);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 2)]), false, 0);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 2)]), false, 0);
											Local_116.f_410[bVar24 /*5*/] = { Var25 };
										}
										else if (UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), -1406739296))
										{
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 2)]), false, 0);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 2)]), false, 0);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 2)]), false, 0);
										}
									}
									else
									{
										UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
										UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 5);
										UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 2)]), false, 0);
										UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 2)]), false, 0);
										UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 2)]), false, 0);
										Local_116.f_410[bVar24 /*5*/] = { Var25 };
									}
								}
							}
							else
							{
								UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
								UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 5);
							}
						}
						else
						{
							UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
							UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 5);
						}
					}
					else
					{
						UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
						UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 5);
					}
				}
				else if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 6))
				{
					iVar2 = iParam0 * 4 + 3;
					bVar24 = Local_116.f_117[iVar2];
					if (bVar24 != func_411() && bVar24 > -1)
					{
						if (Local_116.f_410[bVar24 /*5*/] > 0 || UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
						{
							if ((UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 3)]) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 3)])) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 3)]))
							{
								if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 3)]))
								{
									UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 3)]);
									bVar33 = true;
								}
								if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 3)]))
								{
									UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 3)]);
									bVar33 = true;
								}
								if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 3)]))
								{
									UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 3)]);
									bVar33 = true;
								}
								if (bVar33)
								{
									return;
								}
								if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
								{
									if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
										UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_4(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p04_card_a", 1000f, -1000f, 13);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p04_card_b", 1000f, -1000f, 13);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p04_card_c", 1000f, -1000f, 13);
										UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
										UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), false);
									}
								}
								else if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
								{
									if (Local_116.f_45[iParam0] != -1)
									{
										if ((UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT"))) || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
										{
											UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
											UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 6);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 3)]), false, 0);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 3)]), false, 0);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 3)]), false, 0);
											Local_116.f_410[bVar24 /*5*/] = { Var25 };
										}
										else if (UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), -1406739296))
										{
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 3)]), false, 0);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 3)]), false, 0);
											UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 3)]), false, 0);
										}
									}
									else
									{
										UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
										UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 6);
										UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 3)]), false, 0);
										UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 3)]), false, 0);
										UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 3)]), false, 0);
										Local_116.f_410[bVar24 /*5*/] = { Var25 };
									}
								}
							}
							else
							{
								UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
								UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 6);
							}
						}
						else
						{
							UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
							UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 6);
						}
					}
					else
					{
						UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
						UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 6);
					}
				}
				else if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 7))
				{
					if (Local_116.f_389[iParam0 /*5*/] > 0 || UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
					{
						if ((UNK_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 0)]) && UNK_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 1)])) && UNK_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 2)]))
						{
							if (!UNK_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 0)]))
							{
								UNK_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 0)]);
								bVar34 = true;
							}
							if (!UNK_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 1)]))
							{
								UNK_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 1)]);
								bVar34 = true;
							}
							if (!UNK_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 2)]))
							{
								UNK_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 2)]);
								bVar34 = true;
							}
							if (bVar34)
							{
								return;
							}
							if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], false))
							{
								if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
								{
									Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
									UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_3(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 0)]), Local_116.f_35[iParam0], func_45(), "cards_collect_self_card_a", 1000f, -1000f, 13);
									UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 1)]), Local_116.f_35[iParam0], func_45(), "cards_collect_self_card_b", 1000f, -1000f, 13);
									UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 2)]), Local_116.f_35[iParam0], func_45(), "cards_collect_self_card_c", 1000f, -1000f, 13);
									UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
									UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), false);
								}
							}
							else if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
							{
								if (Local_116.f_45[iParam0] != -1)
								{
									if (UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT")))
									{
										Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
										UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
										UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
										UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 7);
										UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 0)]), false, 0);
										UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 1)]), false, 0);
										UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 2)]), false, 0);
										Local_116.f_389[iParam0 /*5*/] = { Var25 };
									}
									else if (UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), -1406739296))
									{
										UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 0)]), false, 0);
										UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 1)]), false, 0);
										UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 2)]), false, 0);
									}
								}
								else
								{
									Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
									UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
									UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
									UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 7);
									UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 0)]), false, 0);
									UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 1)]), false, 0);
									UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 2)]), false, 0);
									Local_116.f_389[iParam0 /*5*/] = { Var25 };
								}
							}
						}
						else
						{
							UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
							UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 7);
						}
					}
					else
					{
						UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), false);
						UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 7);
					}
				}
				else if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 10))
				{
					if (Local_116.f_45[iParam0] != -1)
					{
						if (UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT")))
						{
							if (Local_116.f_30[iParam0] == 1)
							{
								Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
								UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_51(iParam0, -1), 2f, -2f, 13, 16, 1148846080, 0);
								UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
							}
							else
							{
								Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
								UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
							}
							UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 10);
						}
					}
				}
				else
				{
					Local_116.f_5[iParam0] = 0;
					Local_116.f_20[iParam0] = 0;
					Local_116.f_25[iParam0]++;
					func_69(&(Local_116.f_150[iParam0 /*2*/]));
					func_66(0, iParam0);
				}
			}
			break;
	}
}

char* func_3(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_self";
	}
	return "cards_collect_self";
}

char* func_4(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p04";
	}
	return "cards_collect_p04";
}

char* func_5(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p03";
	}
	return "cards_collect_p03";
}

char* func_6(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p02";
	}
	return "cards_collect_p02";
}

char* func_7(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p01";
	}
	return "cards_collect_p01";
}

char* func_8(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	iVar1 = func_9(&(Local_116.f_389[iParam0 /*5*/].f_1), 0, 0);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar2 = Local_116.f_117[(iParam0 * 4 + iVar3)];
		if (iVar2 != func_411())
		{
			iVar4 = func_9(&(Local_116.f_410[iVar2 /*5*/].f_1), 0, 0);
			if (iVar4 > iVar1 && (UNK_0xEAE0D21A50E6C7F4(Local_749[iVar2 /*9*/], true) || Local_749[iVar2 /*9*/].f_3 <= 0))
			{
				bVar0 = true;
			}
		}
		iVar3++;
	}
	if (Local_116.f_15[iParam0] >= 7)
	{
		if (iVar1 < 12)
		{
			switch (UNK_0x09AC81E49EA267F7(false, 3))
			{
				case 0:
					return "female_dealer_reaction_impartial_var01";
				case 1:
					return "female_dealer_reaction_impartial_var02";
				case 2:
					return "female_dealer_reaction_impartial_var03";
				default:
					break;
			}
		}
		else if (bVar0)
		{
			switch (UNK_0x09AC81E49EA267F7(false, 3))
			{
				case 0:
					return "female_dealer_reaction_good_var01";
				case 1:
					return "female_dealer_reaction_good_var02";
				case 2:
					return "female_dealer_reaction_good_var03";
				default:
					break;
			}
		}
		else
		{
			switch (UNK_0x09AC81E49EA267F7(false, 3))
			{
				case 0:
					return "female_dealer_reaction_bad_var01";
				case 1:
					return "female_dealer_reaction_bad_var02";
				case 2:
					return "female_dealer_reaction_bad_var03";
				default:
					break;
			}
		}
	}
	else if (iVar1 < 12)
	{
		switch (UNK_0x09AC81E49EA267F7(false, 4))
		{
			case 0:
				return "reaction_impartial_var_01";
			case 1:
				return "reaction_impartial_var_02";
			case 2:
				return "reaction_impartial_var_03";
			case 3:
				return "reaction_impartial_var_04";
			default:
				break;
		}
	}
	else if (bVar0)
	{
		switch (UNK_0x09AC81E49EA267F7(false, 3))
		{
			case 0:
				return "reaction_good_var_01";
			case 1:
				return "reaction_good_var_02";
			case 2:
				return "reaction_good_var_03";
			default:
				break;
		}
	}
	else
	{
		switch (UNK_0x09AC81E49EA267F7(false, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			case 1:
				return "reaction_bad_var_02";
			case 2:
				return "reaction_bad_var_03";
			case 3:
				return "reaction_bad_var_04";
			default:
				break;
		}
	}
	return "";
}

int func_9(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if ((func_11((*uParam0)[0]) != func_11((*uParam0)[1]) && func_11((*uParam0)[0]) != func_11((*uParam0)[2])) && func_11((*uParam0)[1]) != func_11((*uParam0)[2]))
	{
		bVar0 = false;
		iVar1 = ((func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + func_11((*uParam0)[2]));
		if (iVar1 == 19)
		{
			if ((((func_11((*uParam0)[0]) == 14 || func_11((*uParam0)[0]) == 2) || func_11((*uParam0)[0]) == 3) && ((func_11((*uParam0)[1]) == 14 || func_11((*uParam0)[1]) == 2) || func_11((*uParam0)[1]) == 3)) && ((func_11((*uParam0)[2]) == 14 || func_11((*uParam0)[2]) == 2) || func_11((*uParam0)[2]) == 3))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 9)
		{
			if ((((func_11((*uParam0)[0]) == 2 || func_11((*uParam0)[0]) == 3) || func_11((*uParam0)[0]) == 4) && ((func_11((*uParam0)[1]) == 2 || func_11((*uParam0)[1]) == 3) || func_11((*uParam0)[1]) == 4)) && ((func_11((*uParam0)[2]) == 2 || func_11((*uParam0)[2]) == 3) || func_11((*uParam0)[2]) == 4))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 12)
		{
			if ((((func_11((*uParam0)[0]) == 3 || func_11((*uParam0)[0]) == 4) || func_11((*uParam0)[0]) == 5) && ((func_11((*uParam0)[1]) == 3 || func_11((*uParam0)[1]) == 4) || func_11((*uParam0)[1]) == 5)) && ((func_11((*uParam0)[2]) == 3 || func_11((*uParam0)[2]) == 4) || func_11((*uParam0)[2]) == 5))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 15)
		{
			if ((((func_11((*uParam0)[0]) == 4 || func_11((*uParam0)[0]) == 5) || func_11((*uParam0)[0]) == 6) && ((func_11((*uParam0)[1]) == 4 || func_11((*uParam0)[1]) == 5) || func_11((*uParam0)[1]) == 6)) && ((func_11((*uParam0)[2]) == 4 || func_11((*uParam0)[2]) == 5) || func_11((*uParam0)[2]) == 6))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 18)
		{
			if ((((func_11((*uParam0)[0]) == 5 || func_11((*uParam0)[0]) == 6) || func_11((*uParam0)[0]) == 7) && ((func_11((*uParam0)[1]) == 5 || func_11((*uParam0)[1]) == 6) || func_11((*uParam0)[1]) == 7)) && ((func_11((*uParam0)[2]) == 5 || func_11((*uParam0)[2]) == 6) || func_11((*uParam0)[2]) == 7))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 21)
		{
			if ((((func_11((*uParam0)[0]) == 6 || func_11((*uParam0)[0]) == 7) || func_11((*uParam0)[0]) == 8) && ((func_11((*uParam0)[1]) == 6 || func_11((*uParam0)[1]) == 7) || func_11((*uParam0)[1]) == 8)) && ((func_11((*uParam0)[2]) == 6 || func_11((*uParam0)[2]) == 7) || func_11((*uParam0)[2]) == 8))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 24)
		{
			if ((((func_11((*uParam0)[0]) == 7 || func_11((*uParam0)[0]) == 8) || func_11((*uParam0)[0]) == 9) && ((func_11((*uParam0)[1]) == 7 || func_11((*uParam0)[1]) == 8) || func_11((*uParam0)[1]) == 9)) && ((func_11((*uParam0)[2]) == 7 || func_11((*uParam0)[2]) == 8) || func_11((*uParam0)[2]) == 9))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 27)
		{
			if ((((func_11((*uParam0)[0]) == 8 || func_11((*uParam0)[0]) == 9) || func_11((*uParam0)[0]) == 10) && ((func_11((*uParam0)[1]) == 8 || func_11((*uParam0)[1]) == 9) || func_11((*uParam0)[1]) == 10)) && ((func_11((*uParam0)[2]) == 8 || func_11((*uParam0)[2]) == 9) || func_11((*uParam0)[2]) == 10))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 30)
		{
			if ((((func_11((*uParam0)[0]) == 9 || func_11((*uParam0)[0]) == 10) || func_11((*uParam0)[0]) == 11) && ((func_11((*uParam0)[1]) == 9 || func_11((*uParam0)[1]) == 10) || func_11((*uParam0)[1]) == 11)) && ((func_11((*uParam0)[2]) == 9 || func_11((*uParam0)[2]) == 10) || func_11((*uParam0)[2]) == 11))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 33)
		{
			if ((((func_11((*uParam0)[0]) == 10 || func_11((*uParam0)[0]) == 11) || func_11((*uParam0)[0]) == 12) && ((func_11((*uParam0)[1]) == 10 || func_11((*uParam0)[1]) == 11) || func_11((*uParam0)[1]) == 12)) && ((func_11((*uParam0)[2]) == 10 || func_11((*uParam0)[2]) == 11) || func_11((*uParam0)[2]) == 12))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 36)
		{
			if ((((func_11((*uParam0)[0]) == 11 || func_11((*uParam0)[0]) == 12) || func_11((*uParam0)[0]) == 13) && ((func_11((*uParam0)[1]) == 11 || func_11((*uParam0)[1]) == 12) || func_11((*uParam0)[1]) == 13)) && ((func_11((*uParam0)[2]) == 11 || func_11((*uParam0)[2]) == 12) || func_11((*uParam0)[2]) == 13))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 39)
		{
			if ((((func_11((*uParam0)[0]) == 12 || func_11((*uParam0)[0]) == 13) || func_11((*uParam0)[0]) == 14) && ((func_11((*uParam0)[1]) == 12 || func_11((*uParam0)[1]) == 13) || func_11((*uParam0)[1]) == 14)) && ((func_11((*uParam0)[2]) == 12 || func_11((*uParam0)[2]) == 13) || func_11((*uParam0)[2]) == 14))
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			if (iVar1 == 19)
			{
				iVar1 = 6;
			}
			if (func_10((*uParam0)[0]) == func_10((*uParam0)[1]) && func_10((*uParam0)[0]) == func_10((*uParam0)[2]))
			{
				return iVar1 + 500;
			}
			return iVar1 + 300;
		}
	}
	iVar2 = 0;
	if (func_11((*uParam0)[0]) == func_11((*uParam0)[1]) && func_11((*uParam0)[0]) != func_11((*uParam0)[2]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + 100;
		}
		else
		{
			return func_11((*uParam0)[2]);
		}
	}
	else if (func_11((*uParam0)[1]) == func_11((*uParam0)[2]) && func_11((*uParam0)[1]) != func_11((*uParam0)[0]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[1]) + func_11((*uParam0)[2])) + 100;
		}
		else
		{
			return func_11((*uParam0)[0]);
		}
	}
	else if (func_11((*uParam0)[2]) == func_11((*uParam0)[0]) && func_11((*uParam0)[2]) != func_11((*uParam0)[1]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0]) + func_11((*uParam0)[2])) + 100;
		}
		else
		{
			return func_11((*uParam0)[1]);
		}
	}
	else if (func_11((*uParam0)[0]) == func_11((*uParam0)[1]) && func_11((*uParam0)[0]) == func_11((*uParam0)[2]))
	{
		return ((func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + func_11((*uParam0)[2])) + 400;
	}
	else if (func_10((*uParam0)[0]) == func_10((*uParam0)[1]) && func_10((*uParam0)[0]) == func_10((*uParam0)[2]))
	{
		iVar2 = 200;
	}
	if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]) && func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
		}
		return (func_11((*uParam0)[0]) + iVar2);
	}
	else if (func_11((*uParam0)[1]) > func_11((*uParam0)[0]) && func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
		}
		return (func_11((*uParam0)[1]) + iVar2);
	}
	else if (func_11((*uParam0)[2]) > func_11((*uParam0)[0]) && func_11((*uParam0)[2]) > func_11((*uParam0)[1]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]))
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]))
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
		}
		return (func_11((*uParam0)[2]) + iVar2);
	}
	return 0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			return 0;
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			return 1;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			return 2;
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			return 3;
		default:
			break;
	}
	return 3;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 15:
		case 28:
		case 41:
			return 2;
		case 3:
		case 16:
		case 29:
		case 42:
			return 3;
		case 4:
		case 17:
		case 30:
		case 43:
			return 4;
		case 5:
		case 18:
		case 31:
		case 44:
			return 5;
		case 6:
		case 19:
		case 32:
		case 45:
			return 6;
		case 7:
		case 20:
		case 33:
		case 46:
			return 7;
		case 8:
		case 21:
		case 34:
		case 47:
			return 8;
		case 9:
		case 22:
		case 35:
		case 48:
			return 9;
		case 10:
		case 23:
		case 36:
		case 49:
			return 10;
		case 11:
		case 24:
		case 37:
		case 50:
			return 11;
		case 12:
		case 25:
		case 38:
		case 51:
			return 12;
		case 13:
		case 26:
		case 39:
		case 52:
			return 13;
		case 1:
		case 14:
		case 27:
		case 40:
			return 14;
		default:
			break;
	}
	return 0;
}

char* func_12(int iParam0)
{
	if (Local_116.f_15[iParam0] > 7)
	{
		return "female_reveal_folded_p04";
	}
	return "reveal_folded_p04";
}

char* func_13(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p04";
	}
	return "reveal_played_p04";
}

char* func_14(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p04";
	}
	return "reveal_blind_p04";
}

char* func_15(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p03";
	}
	return "reveal_folded_p03";
}

char* func_16(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p03";
	}
	return "reveal_played_p03";
}

char* func_17(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p03";
	}
	return "reveal_blind_p03";
}

char* func_18(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p02";
	}
	return "reveal_folded_p02";
}

char* func_19(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p02";
	}
	return "reveal_played_p02";
}

char* func_20(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p02";
	}
	return "reveal_blind_p02";
}

bool func_21(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return true;
	}
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return true;
	}
	if (!func_24(iParam0, iParam1) && !func_22(iParam1))
	{
		return func_53(11, &(Local_116.f_50[iParam0]), 0, -1);
	}
	return true;
}

bool func_22(int iParam0)
{
	int iVar0;

	if (Local_749[iParam0 /*9*/].f_5 > 0)
	{
		iVar0 = func_9(&(Local_116.f_410[iParam0 /*5*/].f_1), 0, 0);
		if (func_23(iVar0) > 0)
		{
			return true;
		}
	}
	return false;
}

int func_23(int iParam0)
{
	if (iParam0 > 500)
	{
		return 40;
	}
	else if (iParam0 > 400)
	{
		return 30;
	}
	else if (iParam0 > 300)
	{
		return 6;
	}
	else if (iParam0 > 200)
	{
		return 4;
	}
	else if (iParam0 > 100)
	{
		return 1;
	}
	return 0;
}

bool func_24(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (Local_749[iParam1 /*9*/].f_3 > 0 && UNK_0xEAE0D21A50E6C7F4(Local_749[iParam1 /*9*/], true))
	{
		iVar0 = func_9(&(Local_116.f_410[iParam1 /*5*/].f_1), 0, 0);
		iVar1 = func_9(&(Local_116.f_389[iParam0 /*5*/].f_1), 0, 0);
		if (!func_25(iVar1))
		{
			return true;
		}
		if (iVar0 > iVar1)
		{
			return true;
		}
		if (iVar0 == iVar1)
		{
			iVar0 = func_9(&(Local_116.f_410[iParam1 /*5*/].f_1), 1, 0);
			iVar1 = func_9(&(Local_116.f_389[iParam0 /*5*/].f_1), 1, 0);
			if (iVar0 > iVar1)
			{
				return true;
			}
			if (iVar0 == iVar1)
			{
				iVar0 = func_9(&(Local_116.f_410[iParam1 /*5*/].f_1), 0, 1);
				iVar1 = func_9(&(Local_116.f_389[iParam0 /*5*/].f_1), 0, 1);
				if (iVar0 > iVar1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_25(int iParam0)
{
	if (iParam0 >= 12)
	{
		return true;
	}
	return false;
}

char* func_26(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p01";
	}
	return "reveal_folded_p01";
}

char* func_27(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p01";
	}
	return "reveal_played_p01";
}

char* func_28(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p01";
	}
	return "reveal_blind_p01";
}

void func_29(int iParam0, int iParam1)
{
	Local_116.f_581[iParam1] = iParam0;
}

char* func_30(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_self";
	}
	return "reveal_self";
}

char* func_31(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_put_down";
	}
	return "deck_put_down";
}

char* func_32(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_self";
	}
	return "deck_deal_self";
}

char* func_33(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p04";
	}
	return "deck_deal_p04";
}

char* func_34(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p03";
	}
	return "deck_deal_p03";
}

char* func_35(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p02";
	}
	return "deck_deal_p02";
}

void func_36(int iParam0, int iParam1)
{
	Local_116.f_571[iParam1] = iParam0;
}

int func_37(var uParam0, var uParam1)
{
	if (*uParam0 >= uParam0->f_1)
	{
		return 0;
	}
	*uParam1 = uParam0->f_2[*uParam0];
	*uParam0++;
	return 1;
}

char* func_38(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p01";
	}
	return "deck_deal_p01";
}

bool func_39(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!UNK_0x081C8BC5094A7B76(1))
	{
		return false;
	}
	if (bParam9)
	{
		*uParam0 = UNK_0x4193A2DE62BC07C0(UNK_0xB0BE3DFBBB59A620(bParam1, vParam2, bParam6, bParam5, bParam7));
	}
	else
	{
		*uParam0 = UNK_0x4193A2DE62BC07C0(UNK_0x7707E48765093646(bParam1, vParam2, bParam6, bParam5, bParam7));
	}
	if (UNK_0xE9F78D191AD5EDBA(*uParam0))
	{
		UNK_0x120A395B0ECB8EA5(UNK_0x09AD4CE7DA179533(*uParam0), bParam8);
		if (bParam10)
		{
			UNK_0x271603AF9C0C7EB3(UNK_0x09AD4CE7DA179533(*uParam0), 1);
		}
		if (bParam11)
		{
			UNK_0x4A4806F9D471E491(UNK_0x09AD4CE7DA179533(*uParam0), false, 0);
		}
		if (UNK_0xECE0BE5313FD8BDA(UNK_0x09AD4CE7DA179533(*uParam0)))
		{
			if (bParam5)
			{
				UNK_0xF4F945BB00F6E31C(*uParam0, 1);
			}
		}
		return true;
	}
	return false;
}

bool func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return UNK_0x12AB0310C2281427("vw_prop_vw_club_char_a_a");
			case 2:
				return UNK_0x12AB0310C2281427("vw_prop_vw_club_char_02a");
			case 3:
				return UNK_0x12AB0310C2281427("vw_prop_vw_club_char_03a");
			case 4:
				return UNK_0x12AB0310C2281427("vw_prop_vw_club_char_04a");
			case 5:
				return UNK_0x12AB0310C2281427("vw_prop_vw_club_char_05a");
			case 6:
				return UNK_0x12AB0310C2281427("vw_prop_vw_club_char_06a");
			case 7:
				return UNK_0x12AB0310C2281427("vw_prop_vw_club_char_07a");
			case 8:
				return UNK_0x12AB0310C2281427("vw_prop_vw_club_char_08a");
			case 9:
				return UNK_0x12AB0310C2281427("vw_prop_vw_club_char_09a");
			case 10:
				return UNK_0x12AB0310C2281427("vw_prop_vw_club_char_10a");
			case 11:
				return UNK_0x12AB0310C2281427("vw_prop_vw_club_char_j_a");
			case 12:
				return UNK_0x12AB0310C2281427("vw_prop_vw_club_char_q_a");
			case 13:
				return UNK_0x12AB0310C2281427("vw_prop_vw_club_char_k_a");
			case 14:
				return UNK_0x12AB0310C2281427("vw_prop_vw_dia_char_a_a");
			case 15:
				return UNK_0x12AB0310C2281427("vw_prop_vw_dia_char_02a");
			case 16:
				return UNK_0x12AB0310C2281427("vw_prop_vw_dia_char_03a");
			case 17:
				return UNK_0x12AB0310C2281427("vw_prop_vw_dia_char_04a");
			case 18:
				return UNK_0x12AB0310C2281427("vw_prop_vw_dia_char_05a");
			case 19:
				return UNK_0x12AB0310C2281427("vw_prop_vw_dia_char_06a");
			case 20:
				return UNK_0x12AB0310C2281427("vw_prop_vw_dia_char_07a");
			case 21:
				return UNK_0x12AB0310C2281427("vw_prop_vw_dia_char_08a");
			case 22:
				return UNK_0x12AB0310C2281427("vw_prop_vw_dia_char_09a");
			case 23:
				return UNK_0x12AB0310C2281427("vw_prop_vw_dia_char_10a");
			case 24:
				return UNK_0x12AB0310C2281427("vw_prop_vw_dia_char_j_a");
			case 25:
				return UNK_0x12AB0310C2281427("vw_prop_vw_dia_char_q_a");
			case 26:
				return UNK_0x12AB0310C2281427("vw_prop_vw_dia_char_k_a");
			case 27:
				return UNK_0x12AB0310C2281427("vw_prop_vw_hrt_char_a_a");
			case 28:
				return UNK_0x12AB0310C2281427("vw_prop_vw_hrt_char_02a");
			case 29:
				return UNK_0x12AB0310C2281427("vw_prop_vw_hrt_char_03a");
			case 30:
				return UNK_0x12AB0310C2281427("vw_prop_vw_hrt_char_04a");
			case 31:
				return UNK_0x12AB0310C2281427("vw_prop_vw_hrt_char_05a");
			case 32:
				return UNK_0x12AB0310C2281427("vw_prop_vw_hrt_char_06a");
			case 33:
				return UNK_0x12AB0310C2281427("vw_prop_vw_hrt_char_07a");
			case 34:
				return UNK_0x12AB0310C2281427("vw_prop_vw_hrt_char_08a");
			case 35:
				return UNK_0x12AB0310C2281427("vw_prop_vw_hrt_char_09a");
			case 36:
				return UNK_0x12AB0310C2281427("vw_prop_vw_hrt_char_10a");
			case 37:
				return UNK_0x12AB0310C2281427("vw_prop_vw_hrt_char_j_a");
			case 38:
				return UNK_0x12AB0310C2281427("vw_prop_vw_hrt_char_q_a");
			case 39:
				return UNK_0x12AB0310C2281427("vw_prop_vw_hrt_char_k_a");
			case 40:
				return UNK_0x12AB0310C2281427("vw_prop_vw_spd_char_a_a");
			case 41:
				return UNK_0x12AB0310C2281427("vw_prop_vw_spd_char_02a");
			case 42:
				return UNK_0x12AB0310C2281427("vw_prop_vw_spd_char_03a");
			case 43:
				return UNK_0x12AB0310C2281427("vw_prop_vw_spd_char_04a");
			case 44:
				return UNK_0x12AB0310C2281427("vw_prop_vw_spd_char_05a");
			case 45:
				return UNK_0x12AB0310C2281427("vw_prop_vw_spd_char_06a");
			case 46:
				return UNK_0x12AB0310C2281427("vw_prop_vw_spd_char_07a");
			case 47:
				return UNK_0x12AB0310C2281427("vw_prop_vw_spd_char_08a");
			case 48:
				return UNK_0x12AB0310C2281427("vw_prop_vw_spd_char_09a");
			case 49:
				return UNK_0x12AB0310C2281427("vw_prop_vw_spd_char_10a");
			case 50:
				return UNK_0x12AB0310C2281427("vw_prop_vw_spd_char_j_a");
			case 51:
				return UNK_0x12AB0310C2281427("vw_prop_vw_spd_char_q_a");
			case 52:
				return UNK_0x12AB0310C2281427("vw_prop_vw_spd_char_k_a");
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_club_ace");
			case 2:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_club_02");
			case 3:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_club_03");
			case 4:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_club_04");
			case 5:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_club_05");
			case 6:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_club_06");
			case 7:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_club_07");
			case 8:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_club_08");
			case 9:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_club_09");
			case 10:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_club_10");
			case 11:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_club_jack");
			case 12:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_club_queen");
			case 13:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_club_king");
			case 14:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_dia_ace");
			case 15:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_dia_02");
			case 16:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_dia_03");
			case 17:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_dia_04");
			case 18:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_dia_05");
			case 19:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_dia_06");
			case 20:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_dia_07");
			case 21:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_dia_08");
			case 22:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_dia_09");
			case 23:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_dia_10");
			case 24:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_dia_jack");
			case 25:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_dia_queen");
			case 26:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_dia_king");
			case 27:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_hrt_ace");
			case 28:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_hrt_02");
			case 29:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_hrt_03");
			case 30:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_hrt_04");
			case 31:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_hrt_05");
			case 32:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_hrt_06");
			case 33:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_hrt_07");
			case 34:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_hrt_08");
			case 35:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_hrt_09");
			case 36:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_hrt_10");
			case 37:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_hrt_jack");
			case 38:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_hrt_queen");
			case 39:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_hrt_king");
			case 40:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_spd_ace");
			case 41:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_spd_02");
			case 42:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_spd_03");
			case 43:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_spd_04");
			case 44:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_spd_05");
			case 45:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_spd_06");
			case 46:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_spd_07");
			case 47:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_spd_08");
			case 48:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_spd_09");
			case 49:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_spd_10");
			case 50:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_spd_jack");
			case 51:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_spd_queen");
			case 52:
				return UNK_0x12AB0310C2281427("vw_prop_cas_card_spd_king");
			default:
				break;
		}
	}
	return false;
}

int func_41(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 3 * 4 + iParam2 * 3) + iParam1);
}

char* func_42(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_idle";
	}
	return "deck_idle";
}

char* func_43(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_shuffle";
	}
	return "deck_shuffle";
}

char* func_44(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_pick_up";
	}
	return "deck_pick_up";
}

char* func_45()
{
	return "anim_casino_b@amb@casino@games@threecardpoker@dealer";
}

int func_46(int iParam0, int iParam1)
{
	return (iParam0 * 3 + iParam1);
}

bool func_47(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;

	vVar3 = { func_76(iParam0) };
	vVar3.f_2 = (vVar3.z + 0.914f);
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar0 = func_46(iParam0, iVar6);
		iVar2 = UNK_0x09AC81E49EA267F7(true, 53);
		bVar1 = func_40(iVar2, Local_1038.f_5);
		if (!UNK_0xE9F78D191AD5EDBA(Local_116.f_55[iVar0]))
		{
			UNK_0x523BCC9DC80CD82F(bVar1);
			if (!UNK_0xB87F6CF6E5628C67(bVar1) || !func_39(&(Local_116.f_55[iVar0]), bVar1, vVar3, 1, 1, 1, 1, 1, 1, 1))
			{
				return false;
			}
		}
		iVar6++;
	}
	return true;
}

bool func_48(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar1 = func_41(iParam0, iVar3, iVar2);
			if (UNK_0xE9F78D191AD5EDBA(Local_116.f_68[iVar1]))
			{
				if (UNK_0x526BC32A660C89E6(Local_116.f_68[iVar1]))
				{
					func_49(&(Local_116.f_68[iVar1]));
				}
				else
				{
					UNK_0x8D30F6387EE75385(Local_116.f_68[iVar1]);
					bVar0 = true;
				}
			}
			iVar3++;
		}
		iVar2++;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		iVar1 = func_46(iParam0, iVar4);
		if (UNK_0xE9F78D191AD5EDBA(Local_116.f_55[iVar1]))
		{
			if (UNK_0x526BC32A660C89E6(Local_116.f_55[iVar1]))
			{
				func_49(&(Local_116.f_55[iVar1]));
			}
			else
			{
				UNK_0x8D30F6387EE75385(Local_116.f_55[iVar1]);
				bVar0 = true;
			}
		}
		iVar4++;
	}
	if (bVar0)
	{
		return false;
	}
	return true;
}

void func_49(var uParam0)
{
	bool bVar0;

	if (UNK_0xE9F78D191AD5EDBA(*uParam0))
	{
		if (!UNK_0x526BC32A660C89E6(*uParam0))
		{
		}
	}
	if (UNK_0xE5DBF9B6126856CA(*uParam0))
	{
		bVar0 = UNK_0xA5FBBC2F619A4DE2(*uParam0);
		UNK_0x2ABAFAE29D459CE5(&bVar0);
	}
}

char* func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (UNK_0xB4ECF989E2C1DAC8(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 0), 3))
	{
		iVar0 = 0;
	}
	else if (UNK_0xB4ECF989E2C1DAC8(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 1), 3))
	{
		iVar0 = 1;
	}
	else if (UNK_0xB4ECF989E2C1DAC8(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 2), 3))
	{
		iVar0 = 2;
	}
	else if (UNK_0xB4ECF989E2C1DAC8(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 3), 3))
	{
		iVar0 = 3;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != iVar0 && Local_116.f_117[(iParam0 * 4 + iVar2)] != func_411())
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (Local_116.f_15[iParam0] >= 7)
	{
		switch (iVar1)
		{
			case 0:
				return "female_acknowledge_p01";
			case 1:
				return "female_acknowledge_p02";
			case 2:
				return "female_acknowledge_p03";
			case 3:
				return "female_acknowledge_p04";
			default:
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "acknowledge_p01";
			case 1:
				return "acknowledge_p02";
			case 2:
				return "acknowledge_p03";
			case 3:
				return "acknowledge_p04";
			default:
				break;
		}
	}
	return "";
}

char* func_51(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_116.f_117[(iParam0 * 4 + iVar1)] != func_411())
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iParam1 >= 0)
	{
		iVar0 = iParam1;
	}
	if (Local_116.f_15[iParam0] >= 7)
	{
		switch (iVar0)
		{
			case 0:
				return "female_idle_single_p01";
			case 1:
				return "female_idle_single_p02";
			case 2:
				return "female_idle_single_p03";
			case 3:
				return "female_idle_single_p04";
			default:
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return "idle_single_p01";
			case 1:
				return "idle_single_p02";
			case 2:
				return "idle_single_p03";
			case 3:
				return "idle_single_p04";
			default:
				break;
		}
	}
	return "";
}

void func_52(int iParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	UNK_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), bParam1);
}

bool func_53(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	char cVar0[64];
	bool bVar16;
	int iVar17;

	StringCopy(&cVar0, func_55(iParam0, bParam3), 64);
	if (UNK_0xEA6BC48857E0AC4C(&cVar0))
	{
		return false;
	}
	bVar16 = UNK_0x1B50683925F00106(*uParam1);
	if (UNK_0x437347B10A200C4B(bVar16, 0))
	{
		return false;
	}
	if (!UNK_0xE5DBF9B6126856CA(*uParam1))
	{
		return false;
	}
	if (!UNK_0xAFE0D3608EDA7039(bVar16))
	{
		return false;
	}
	if (UNK_0x65636D4556D82155(bVar16))
	{
		return false;
	}
	iVar17 = func_54(7);
	UNK_0xC8B576D6F470FFC6(bVar16, &cVar0, iVar17, 1);
	return true;
}

int func_54(int iParam0)
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

char* func_55(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_DEALER_PLACE_BET";
		case 1:
			return "MINIGAME_DEALER_ANOTHER_GO";
		case 3:
			return "MINIGAME_DEALER_REJOIN_TABLE";
		case 2:
			return func_56(bParam1);
		case 4:
			return "MINIGAME_DEALER_LEAVE_GOOD_GAME";
		case 5:
			return "MINIGAME_DEALER_LEAVE_BAD_GAME";
		case 6:
			return "MINIGAME_DEALER_LEAVE_NEUTRAL_GAME";
		case 7:
			return "MINIGAME_DEALER_REFUSE_BETS";
		case 9:
			return "MINIGAME_DEALER_COMMENT_SLOW";
		case 21:
			return "MINIGAME_DEALER_CLOSED_BETS";
		case 8:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		case 10:
			return "MINIGAME_DEALER_BUSTS";
		case 11:
			return "MINIGAME_DEALER_WINS";
		case 12:
			return "MINIGAME_DEALER_PLACE_BET";
		case 13:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		case 14:
			return "MINIGAME_DEALER_PLACE_BET";
		case 15:
			return "";
		case 16:
			return "";
		case 17:
			return "";
		case 18:
			return "";
		case 19:
			return "";
		case 20:
			return "";
		default:
			break;
	}
	return "";
}

char* func_56(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = UNK_0xF4FB3A22FC4991C8(bParam0);
	if (!UNK_0x81A93C8315C28F58(bVar0))
	{
		return "MINIGAME_DEALER_GREET";
	}
	bVar1 = UNK_0x4B2BFE4A3BC248ED(bVar0);
	if (!func_62(bVar1, 1, 1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar2 = UNK_0x9539D44F3E4492F6(bVar1);
	if (func_60(iVar2))
	{
		return "MINIGAME_DEALER_GREET_DRUNK";
	}
	if (!func_58(&bVar1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	if (func_57(bVar1))
	{
		return "MINIGAME_DEALER_GREET_FEMALE";
	}
	return "MINIGAME_DEALER_GREET_MALE";
}

bool func_57(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(UNK_0x9539D44F3E4492F6(bParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return true;
	}
	return false;
}

bool func_58(bool bParam0)
{
	int iVar0;

	iVar0 = Local_749[*bParam0 /*9*/].f_2;
	return func_59(iVar0, Local_1038.f_26);
}

bool func_59(int iParam0, int iParam1)
{
	if ((iParam0 == 2 || iParam0 == 3) || iParam1 == 1)
	{
		return true;
	}
	return false;
}

bool func_60(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (func_61(iParam0) == -1)
	{
		return false;
	}
	return true;
}

int func_61(int iParam0)
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

bool func_62(bool bParam0, bool bParam1, bool bParam2)
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

bool func_63(int iParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 32)
	{
		return false;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], bParam1);
}

void func_64(int iParam0)
{
	UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 16);
	UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 17);
	UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 18);
	UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 19);
	UNK_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 21);
}

void func_65(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	*uParam0 = 0;
	uParam0->f_1 = 52;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1)
		{
			iVar0 = UNK_0xA0A5F9CC633A6814(0, uParam0->f_1);
			uVar2 = uParam0->f_2[iVar1];
			uParam0->f_2[iVar1] = uParam0->f_2[iVar0];
			uParam0->f_2[iVar0] = uVar2;
			iVar1++;
		}
		iVar3++;
	}
}

void func_66(int iParam0, int iParam1)
{
	Local_116.f_576[iParam1] = iParam0;
}

void func_67(int iParam0)
{
	struct<5> Var0;

	Local_116[iParam0] = 1;
	if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(Local_116.f_50[iParam0])))
	{
		if (!UNK_0xB4ECF989E2C1DAC8(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_77(iParam0), 3))
		{
			if (UNK_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
			{
				Local_116.f_45[iParam0] = UNK_0xF958843510932FF6(Local_116.f_35[iParam0]);
				if (Local_116.f_45[iParam0] == -1 || (UNK_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), joaat("BLEND_OUT"))))
				{
					Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
					UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
					UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
				}
			}
			else
			{
				UNK_0x8D30F6387EE75385(Local_116.f_50[iParam0]);
			}
			return;
		}
	}
	if (func_48(iParam0))
	{
		Local_116.f_20[iParam0] = 0;
		Var0.f_1 = 3;
		Local_116.f_389[iParam0 /*5*/] = { Var0 };
		Local_116.f_5[iParam0] = 0;
		func_69(&(Local_116.f_150[iParam0 /*2*/]));
		func_79(1, iParam0);
		func_66(0, iParam0);
		func_36(0, iParam0);
		func_29(0, iParam0);
		Local_116.f_25[iParam0]++;
		Local_116[iParam0] = 0;
	}
}

bool func_68(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (bParam1)
		{
			if (Local_116.f_117[(iParam0 * 4 + iVar1)] != func_411() && Local_116.f_410[Local_116.f_117[(iParam0 * 4 + iVar1)] /*5*/] > 0)
			{
				iVar0++;
			}
			else
			{
				if (UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, iVar1)]))
				{
					if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, iVar1)]))
					{
						UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, iVar1)]);
					}
					else
					{
						func_49(&(Local_116.f_68[func_41(iParam0, 0, iVar1)]));
					}
				}
				if (UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, iVar1)]))
				{
					if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, iVar1)]))
					{
						UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, iVar1)]);
					}
					else
					{
						func_49(&(Local_116.f_68[func_41(iParam0, 1, iVar1)]));
					}
				}
				if (UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, iVar1)]))
				{
					if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, iVar1)]))
					{
						UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, iVar1)]);
					}
					else
					{
						func_49(&(Local_116.f_68[func_41(iParam0, 2, iVar1)]));
					}
				}
			}
		}
		else if (Local_116.f_117[(iParam0 * 4 + iVar1)] != func_411())
		{
			iVar0++;
		}
		else
		{
			if (UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, iVar1)]))
			{
				if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, iVar1)]))
				{
					UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, iVar1)]);
				}
				else
				{
					func_49(&(Local_116.f_68[func_41(iParam0, 0, iVar1)]));
				}
			}
			if (UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, iVar1)]))
			{
				if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, iVar1)]))
				{
					UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, iVar1)]);
				}
				else
				{
					func_49(&(Local_116.f_68[func_41(iParam0, 1, iVar1)]));
				}
			}
			if (UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, iVar1)]))
			{
				if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, iVar1)]))
				{
					UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, iVar1)]);
				}
				else
				{
					func_49(&(Local_116.f_68[func_41(iParam0, 2, iVar1)]));
				}
			}
		}
		iVar1++;
	}
	if (Local_116.f_30[iParam0] != iVar0)
	{
		Local_116.f_30[iParam0] = iVar0;
	}
	if (iVar0 > 0)
	{
		return true;
	}
	return false;
}

void func_69(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_70(int iParam0, int iParam1)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_acknowledge_p01";
			case 1:
				return "female_acknowledge_p02";
			case 2:
				return "female_acknowledge_p03";
			case 3:
				return "female_acknowledge_p04";
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "acknowledge_p01";
			case 1:
				return "acknowledge_p02";
			case 2:
				return "acknowledge_p03";
			case 3:
				return "acknowledge_p04";
			default:
				break;
		}
	}
	return "";
}

bool func_71(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_73(uParam0, bParam2, 0);
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

bool func_72(var uParam0)
{
	return uParam0->f_1;
}

void func_73(var uParam0, bool bParam1, bool bParam2)
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

char* func_74(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		switch (UNK_0x09AC81E49EA267F7(false, 5))
		{
			case 0:
				return "female_idle_var_01";
			case 1:
				return "female_idle_var_02";
			case 2:
				return "female_idle_var_03";
			case 3:
				return "female_idle_var_04";
			case 4:
				return "female_idle_var_05";
			default:
				break;
		}
	}
	else
	{
		switch (UNK_0x09AC81E49EA267F7(false, 5))
		{
			case 0:
				return "idle_var_01";
			case 1:
				return "idle_var_02";
			case 2:
				return "idle_var_03";
			case 3:
				return "idle_var_04";
			case 4:
				return "idle_var_05";
			default:
				break;
		}
	}
	return "";
}

float func_75(int iParam0)
{
	if (Local_1038.f_26 == 1)
	{
		return -122f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -135f;
			case 1:
				return 45f;
			case 2:
				return -45f;
			case 3:
				return -45f;
			default:
				break;
		}
	}
	return 0f;
}

Vector3 func_76(int iParam0)
{
	if (Local_1038.f_26 == 1)
	{
		return 967.33f, 32.0191f, 115.1742f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1143.338f, 264.2453f, -52.8409f;
			case 1:
				return 1146.329f, 261.2543f, -52.8409f;
			case 2:
				return 1133.74f, 266.6947f, -52.0409f;
			case 3:
				return 1148.74f, 251.6947f, -52.0409f;
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

char* func_77(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_idle";
	}
	return "idle";
}

char* func_78()
{
	return "anim_casino_b@amb@casino@games@shared@dealer@";
}

void func_79(int iParam0, int iParam1)
{
	Local_116.f_586[iParam1] = iParam0;
}

void func_80(var uParam0)
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;

	iVar4 = 52;
	iVar5 = 0;
	while (iVar5 < 52)
	{
		iVar3 = UNK_0xA0A5F9CC633A6814(0, iVar4);
		iVar6 = 0;
		while (iVar6 < 52)
		{
			iVar8 = (iVar6 / 32);
			bVar9 = (iVar6 % 32);
			if (iVar7 == iVar3 && !UNK_0xEAE0D21A50E6C7F4(uVar0[iVar8], bVar9))
			{
				UNK_0x5D96D8530B3D0904(&(uVar0[iVar8]), bVar9);
				uParam0->f_2[iVar5] = iVar6 + 1;
			}
			else
			{
				if (!UNK_0xEAE0D21A50E6C7F4(uVar0[iVar8], bVar9))
				{
					iVar7++;
				}
				iVar6++;
			}
		}
		iVar7 = 0;
		iVar4 = (iVar4 - 1);
		iVar5++;
	}
	uParam0->f_1 = 52;
}

void func_81()
{
	int iVar0;

	if (!func_85(UNK_0xD803B885F5E47A62()))
	{
		iVar0 = iLocal_1971;
		if (Global_2514396 != iVar0 && (Global_2514396 != -1 || func_417(UNK_0xD803B885F5E47A62())))
		{
			if (!UNK_0xE5DBF9B6126856CA(Local_116.f_50[iVar0]))
			{
				func_82(iVar0);
			}
		}
		else if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iVar0]))
		{
			if (UNK_0x526BC32A660C89E6(Local_116.f_50[iVar0]))
			{
				func_49(&(Local_116.f_50[iVar0]));
			}
			else
			{
				UNK_0x8D30F6387EE75385(Local_116.f_50[iVar0]);
			}
		}
	}
	iLocal_1971++;
	if (iLocal_1971 >= Local_1038.f_26)
	{
		iLocal_1971 = 0;
	}
}

void func_82(int iParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = joaat("S_M_Y_CASINO_01");
	if (Local_116.f_15[iParam0] >= 7)
	{
		bVar0 = joaat("S_F_Y_CASINO_01");
	}
	UNK_0x523BCC9DC80CD82F(bVar0);
	if (!UNK_0xB87F6CF6E5628C67(bVar0))
	{
		return;
	}
	UNK_0x3F423BF5B8125A50(func_78());
	if (!UNK_0xB4AE0788C1587752(func_78()))
	{
		return;
	}
	if (!UNK_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]))
	{
		if (UNK_0xA3FA8B6D2780D661(1))
		{
			if (UNK_0xF929B1A0A409FF93())
			{
				UNK_0x3C762650AC7F7C2E(1);
			}
			bVar1 = UNK_0x36F2404464202779(26, bVar0, func_76(iParam0), func_75(iParam0), 1, true);
			UNK_0x71199B01895C6202(bVar0);
			UNK_0x98868AF51859FC75(bVar1, 0);
			UNK_0x20EC6650986ACDC7(bVar1, 0);
			UNK_0x11AD11297DC58CC7(bVar1, true);
			UNK_0x9DD8618CA5BF832D(bVar1, 249, true);
			UNK_0x4E885A246A9D983A(bVar1, 185, true);
			UNK_0x4E885A246A9D983A(bVar1, 108, true);
			UNK_0x271603AF9C0C7EB3(bVar1, 1);
			UNK_0xC3BED1CE092AB15D(bVar1, 1);
			UNK_0xC978532B427F303B(bVar1, 0);
			UNK_0x004A9F3F2E1E4B43(bVar1, 1);
			UNK_0xF4CB0B98F8F79D8D(bVar1, 0);
			UNK_0x4E885A246A9D983A(bVar1, 208, true);
			UNK_0x46CB381A452EF99D(bVar1, 0);
			func_84(Local_116.f_15[iParam0], &bVar1);
			func_83(Local_116.f_15[iParam0], &bVar1);
			UNK_0x08841CDB215AE18F(bVar1, func_76(iParam0), 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(bVar1, func_75(iParam0));
			if (UNK_0xC844350D5D58C99A(bVar1))
			{
				Local_116.f_50[iParam0] = UNK_0xE8C9CB886096272A(bVar1);
				if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]))
				{
					UNK_0x866EE3B81CEF363A(Local_116.f_50[iParam0], 0);
					Local_116.f_10[iParam0] = 1;
					Local_116.f_35[iParam0] = UNK_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
					UNK_0x753499827286A5DA(UNK_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 1000f, -2f, 13, 16, 1148846080, 0);
					UNK_0x914E6894744915F8(Local_116.f_35[iParam0]);
					UNK_0x8D17794CE3273D70(func_78());
				}
			}
			if (UNK_0xF929B1A0A409FF93())
			{
				UNK_0x3C762650AC7F7C2E(0);
			}
		}
	}
}

void func_83(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			UNK_0x267F5A3F99CA04FE(*bParam1, UNK_0x12AB0310C2281427("S_M_Y_Casino_01_WHITE_01"));
			break;
		case 1:
			UNK_0x267F5A3F99CA04FE(*bParam1, UNK_0x12AB0310C2281427("S_M_Y_Casino_01_ASIAN_01"));
			break;
		case 2:
			UNK_0x267F5A3F99CA04FE(*bParam1, UNK_0x12AB0310C2281427("S_M_Y_Casino_01_ASIAN_02"));
			break;
		case 3:
			UNK_0x267F5A3F99CA04FE(*bParam1, UNK_0x12AB0310C2281427("S_M_Y_Casino_01_ASIAN_01"));
			break;
		case 4:
			UNK_0x267F5A3F99CA04FE(*bParam1, UNK_0x12AB0310C2281427("S_M_Y_Casino_01_WHITE_01"));
			break;
		case 5:
			UNK_0x267F5A3F99CA04FE(*bParam1, UNK_0x12AB0310C2281427("S_M_Y_Casino_01_WHITE_02"));
			break;
		case 6:
			UNK_0x267F5A3F99CA04FE(*bParam1, UNK_0x12AB0310C2281427("S_M_Y_Casino_01_WHITE_01"));
			break;
		case 7:
			UNK_0x267F5A3F99CA04FE(*bParam1, UNK_0x12AB0310C2281427("S_F_Y_Casino_01_ASIAN_01"));
			break;
		case 8:
			UNK_0x267F5A3F99CA04FE(*bParam1, UNK_0x12AB0310C2281427("S_F_Y_Casino_01_ASIAN_02"));
			break;
		case 9:
			UNK_0x267F5A3F99CA04FE(*bParam1, UNK_0x12AB0310C2281427("S_F_Y_Casino_01_ASIAN_01"));
			break;
		case 10:
			UNK_0x267F5A3F99CA04FE(*bParam1, UNK_0x12AB0310C2281427("S_F_Y_Casino_01_ASIAN_02"));
			break;
		case 11:
			UNK_0x267F5A3F99CA04FE(*bParam1, UNK_0x12AB0310C2281427("S_F_Y_Casino_01_LATINA_01"));
			break;
		case 12:
			UNK_0x267F5A3F99CA04FE(*bParam1, UNK_0x12AB0310C2281427("S_F_Y_Casino_01_LATINA_02"));
			break;
		case 13:
			UNK_0x267F5A3F99CA04FE(*bParam1, UNK_0x12AB0310C2281427("S_F_Y_Casino_01_LATINA_01"));
			break;
	}
}

void func_84(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			UNK_0x78ED16BE998AECC7(*bParam1);
			UNK_0x64F9F278AB9DCA2C(*bParam1, false, 3, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, true, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 2, 3, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 3, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 4, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 6, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 7, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 8, 3, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 10, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 11, true, false, 0);
			break;
		case 1:
			UNK_0x78ED16BE998AECC7(*bParam1);
			UNK_0x64F9F278AB9DCA2C(*bParam1, false, 2, 2, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, true, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 2, 4, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 3, false, 3, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 4, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 6, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 7, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 8, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 10, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 11, true, false, 0);
			break;
		case 2:
			UNK_0x78ED16BE998AECC7(*bParam1);
			UNK_0x64F9F278AB9DCA2C(*bParam1, false, 2, true, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, true, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 2, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 3, false, 3, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 4, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 6, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 7, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 8, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 10, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 11, true, false, 0);
			break;
		case 3:
			UNK_0x78ED16BE998AECC7(*bParam1);
			UNK_0x64F9F278AB9DCA2C(*bParam1, false, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, true, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 2, 3, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 3, true, 3, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 4, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 6, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 7, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 8, 3, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 10, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 11, true, false, 0);
			break;
		case 4:
			UNK_0x78ED16BE998AECC7(*bParam1);
			UNK_0x64F9F278AB9DCA2C(*bParam1, false, 4, 2, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, true, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 2, 3, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 3, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 4, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 6, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 7, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 8, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 10, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 11, true, false, 0);
			break;
		case 5:
			UNK_0x78ED16BE998AECC7(*bParam1);
			UNK_0x64F9F278AB9DCA2C(*bParam1, false, 4, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, true, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 2, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 3, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 4, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 6, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 7, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 8, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 10, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 11, true, false, 0);
			break;
		case 6:
			UNK_0x78ED16BE998AECC7(*bParam1);
			UNK_0x64F9F278AB9DCA2C(*bParam1, false, 4, true, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, true, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 2, 4, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 3, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 4, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 6, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 7, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 8, 3, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 10, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 11, true, false, 0);
			break;
		case 7:
			UNK_0x78ED16BE998AECC7(*bParam1);
			UNK_0x64F9F278AB9DCA2C(*bParam1, false, true, true, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, true, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 2, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 3, false, 3, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 4, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 6, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 7, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 8, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 10, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 11, false, false, 0);
			break;
		case 8:
			UNK_0x78ED16BE998AECC7(*bParam1);
			UNK_0x64F9F278AB9DCA2C(*bParam1, false, true, true, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, true, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 2, true, true, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 3, true, 3, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 4, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 6, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 7, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 8, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 10, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 11, false, false, 0);
			break;
		case 9:
			UNK_0x78ED16BE998AECC7(*bParam1);
			UNK_0x64F9F278AB9DCA2C(*bParam1, false, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, true, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 2, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 3, 2, 3, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 4, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 6, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 7, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 8, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 10, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 11, false, false, 0);
			break;
		case 10:
			UNK_0x78ED16BE998AECC7(*bParam1);
			UNK_0x64F9F278AB9DCA2C(*bParam1, false, 2, true, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, true, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 2, 2, true, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 3, 3, 3, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 4, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 6, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 7, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 8, 3, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 10, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 11, false, false, 0);
			break;
		case 11:
			UNK_0x78ED16BE998AECC7(*bParam1);
			UNK_0x64F9F278AB9DCA2C(*bParam1, false, 3, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, true, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 2, 3, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 3, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 4, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 6, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 7, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 8, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 10, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 11, false, false, 0);
			UNK_0x9A28E8CB86CD4694(*bParam1, true, 0, 0, false);
			break;
		case 12:
			UNK_0x78ED16BE998AECC7(*bParam1);
			UNK_0x64F9F278AB9DCA2C(*bParam1, false, 3, true, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, true, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 2, 3, true, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 3, true, true, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 4, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 6, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 7, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 8, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 10, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 11, false, false, 0);
			break;
		case 13:
			UNK_0x78ED16BE998AECC7(*bParam1);
			UNK_0x64F9F278AB9DCA2C(*bParam1, false, 4, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, true, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 2, 4, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 3, 2, true, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 4, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 6, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 7, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 8, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 10, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(*bParam1, 11, false, false, 0);
			UNK_0x9A28E8CB86CD4694(*bParam1, true, 0, 0, false);
			break;
	}
}

bool func_85(bool bParam0)
{
	if (bParam0 != func_411() && func_62(bParam0, 1, 1))
	{
		if (func_86(bParam0) && !func_416(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_86(bool bParam0)
{
	if (bParam0 != func_411() && func_62(bParam0, 1, 1))
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, 3);
	}
	return false;
}

void func_87()
{
	struct<5> Var0;
	bool bVar5;
	bool bVar6;

	Var0.f_1 = 3;
	bVar5 = false;
	bVar6 = iLocal_1970;
	if (Local_749[bVar6 /*9*/].f_2 == -1)
	{
		Local_116.f_410[bVar6 /*5*/] = { Var0 };
	}
	if (Local_749[bVar6 /*9*/].f_7 == 0)
	{
		if (Local_116.f_600[bVar6] != 0)
		{
			Local_116.f_600[bVar6] = 0;
		}
	}
	if (!bVar5)
	{
		if (func_88(bVar6))
		{
			bVar5 = true;
		}
	}
	iLocal_1970++;
	if (iLocal_1970 >= 32)
	{
		iLocal_1970 = 0;
	}
}

bool func_88(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!func_408())
	{
		return false;
	}
	bVar0 = UNK_0xF4FB3A22FC4991C8(bParam0);
	if (!UNK_0x81A93C8315C28F58(bVar0))
	{
		return false;
	}
	bVar1 = UNK_0x4B2BFE4A3BC248ED(bVar0);
	if (!func_62(bVar1, 1, 1))
	{
		return false;
	}
	iVar2 = Local_749[bParam0 /*9*/].f_7.f_1;
	if (iVar2 < 0 || iVar2 >= 4)
	{
		return false;
	}
	if (Local_749[bParam0 /*9*/].f_7 == 1)
	{
		if (func_53(2, &(Local_116.f_50[iVar2]), 0, bParam0))
		{
			func_89(bParam0, 1);
		}
		return true;
	}
	if (Local_749[bParam0 /*9*/].f_7 == 2)
	{
		if (func_53(3, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(bParam0, 2);
		}
		return true;
	}
	if (Local_749[bParam0 /*9*/].f_7 == 4)
	{
		if (func_53(4, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(bParam0, 4);
		}
		return true;
	}
	if (Local_749[bParam0 /*9*/].f_7 == 5)
	{
		if (func_53(5, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(bParam0, 5);
		}
		return true;
	}
	if (Local_749[bParam0 /*9*/].f_7 == 6)
	{
		if (func_53(6, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(bParam0, 6);
		}
		return true;
	}
	if (Local_749[bParam0 /*9*/].f_7 == 7)
	{
		if (func_53(7, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(bParam0, 7);
		}
		return true;
	}
	return false;
}

void func_89(bool bParam0, int iParam1)
{
	bool bVar0;

	bVar0 = iParam1;
	if (bVar0 < 0 || bVar0 >= 32)
	{
		return;
	}
	if (bParam0 < 0 || bParam0 >= 32)
	{
		return;
	}
	UNK_0x5D96D8530B3D0904(&(Local_116.f_600[bParam0]), bVar0);
}

void func_90()
{
	bool bVar0;
	int iVar1;

	bVar0 = iLocal_1969;
	if (Local_116.f_117[bVar0] != func_411())
	{
		iVar1 = Local_116.f_117[bVar0];
		if (((!func_62(Local_116.f_117[bVar0], 1, 1) || Local_749[iVar1 /*9*/].f_1 == -1) || Local_749[iVar1 /*9*/].f_1 != bVar0) || !UNK_0xFB75B0F82CA525F6(Local_116.f_117[bVar0]))
		{
			Local_116.f_117[bVar0] = func_411();
			if (Local_116.f_600[bVar0] != 0)
			{
				Local_116.f_600[bVar0] = 0;
			}
		}
	}
	if (func_62(bVar0, 1, 1) && UNK_0xFB75B0F82CA525F6(bVar0))
	{
		if (Local_749[bVar0 /*9*/].f_1 > -1 && Local_749[bVar0 /*9*/].f_1 < 32)
		{
			if (Local_116.f_117[Local_749[bVar0 /*9*/].f_1] == func_411())
			{
				if (func_62(UNK_0x117658E336116132(bVar0), 1, 1))
				{
					Local_116.f_117[Local_749[bVar0 /*9*/].f_1] = UNK_0x117658E336116132(bVar0);
				}
			}
		}
	}
	iLocal_1969++;
	if (iLocal_1969 >= 32)
	{
		iLocal_1969 = 0;
	}
}

void func_91()
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<16> Var6;
	vector3 vVar22;

	if (!Local_1038.f_5)
	{
		if (func_417(UNK_0xD803B885F5E47A62()) && func_412() != func_411())
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[func_412() /*421*/].f_310.f_4, 4))
			{
				Local_1038.f_5 = 1;
				func_407();
				bLocal_1964 = true;
			}
		}
	}
	else if (bLocal_1964)
	{
		if (func_406())
		{
			bLocal_1964 = false;
		}
	}
	func_401();
	Local_1038.f_19 = func_398();
	func_388();
	func_384();
	func_381();
	if (Local_1038.f_798 > 2)
	{
		UNK_0x38C3A68D7861DCFD(2, 210, 1);
		UNK_0x558EC149EB2BC0A2(2, 210);
		UNK_0x38C3A68D7861DCFD(2, 26, 1);
		if (UNK_0x9A01369A10646AFE(2, 210))
		{
		}
		if (func_380(Local_1038.f_18) >= 0 && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), func_76(func_380(Local_1038.f_18)), 1) > 5f)
		{
			func_375(0);
		}
	}
	if (Local_1038.f_798 > 5)
	{
		UNK_0x3FC8DBCC154CA56B();
		UNK_0xB8E3919889462ACD();
		UNK_0x5024DE80A08E9E70(19);
		func_373(1);
		func_372(1, 0);
	}
	if (Local_1038.f_798 > 6)
	{
		UNK_0x38C3A68D7861DCFD(2, 0, 1);
		if (UNK_0x9A01369A10646AFE(2, 0))
		{
			if (UNK_0xA4FD7964FEE91ED8(0) == 0)
			{
				UNK_0x398B6B43792F03FE(0, 4);
			}
			else if (UNK_0xA4FD7964FEE91ED8(0) == 4)
			{
				UNK_0x398B6B43792F03FE(0, 0);
			}
		}
		UNK_0x2DA67FDB9E5F446F();
	}
	if (Local_1038.f_798 > 7)
	{
		func_368(&(Local_749[UNK_0xD803B885F5E47A62() /*9*/]));
	}
	if (func_367())
	{
		bLocal_1966 = true;
	}
	else if (bLocal_1966)
	{
		func_366(&uLocal_1967, 0, 0);
		bLocal_1966 = false;
	}
	else if (func_72(&uLocal_1967) && func_71(&uLocal_1967, 500, 0))
	{
		func_69(&uLocal_1967);
	}
	switch (Local_1038.f_798)
	{
		case 0:
			if (func_365())
			{
				Local_1038.f_796 = "idle_cardgames";
				Local_1038.f_22 = 0;
				Local_749[UNK_0xD803B885F5E47A62() /*9*/] = 0;
				Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_6 = 0;
				Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 = -1;
				Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 = -1;
				func_364(UNK_0xD803B885F5E47A62());
				func_363(1);
			}
			break;
		case 1:
			switch (func_380(Local_1038.f_18))
			{
				case 0:
				case 1:
					bVar0 = false;
					Local_1038.f_16 = 5000;
					Local_1038.f_17 = 10;
					Local_1038.f_27 = 500;
					Local_1038.f_28 = 10;
					break;
				case 2:
				case 3:
					bVar0 = true;
					Local_1038.f_16 = 50000;
					Local_1038.f_17 = 1000;
					Local_1038.f_27 = 5000;
					Local_1038.f_28 = 1000;
					break;
			}
			if (Local_1038.f_26 == 1)
			{
				bVar0 = true;
				Local_1038.f_16 = 50000;
				Local_1038.f_17 = 1000;
				Local_1038.f_27 = 5000;
				Local_1038.f_28 = 1000;
			}
			if (((((((((((((((((((((((!Global_262145.f_26165 && !(Global_262145.f_26167 && !bVar0)) && !(Global_262145.f_26166 && bVar0)) && ((func_362(1581559923) || func_362(272405600)) || func_417(UNK_0xD803B885F5E47A62()))) && func_360(UNK_0x16F2683693E537C9(), func_361(Local_1038.f_18), 1.5f)) && func_355(UNK_0x16F2683693E537C9(), func_359(Local_1038.f_18), 40f)) && Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/] == 0) && !UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_4, 2)) && !Global_2405072.f_2672) && Global_2514396 != func_380(Local_1038.f_18)) && (Global_2514396 != -1 || func_417(UNK_0xD803B885F5E47A62()))) && func_354()) && !func_348()) && !UNK_0x757EF87A33649210()) && !UNK_0xD0BB2359EC70FC37()) && func_345(UNK_0x16F2683693E537C9()) <= 9) && !Global_2405072.f_2672) && !UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) && !func_344()) && !func_343()) && !func_341()) && !Global_2460715.f_12) && Global_1676371 != 31) && !func_340())
			{
				func_363(2);
			}
			else
			{
				Local_1038.f_18++;
				if (Local_1038.f_18 >= Local_1038.f_26 * 4)
				{
					Local_1038.f_18 = 0;
				}
			}
			break;
		case 2:
			func_339();
			func_364(UNK_0xD803B885F5E47A62());
			if (((((((((((((((((((((func_362(1581559923) || func_362(272405600)) || func_417(UNK_0xD803B885F5E47A62())) && func_360(UNK_0x16F2683693E537C9(), func_361(Local_1038.f_18), 1.5f)) && func_355(UNK_0x16F2683693E537C9(), func_359(Local_1038.f_18), 40f)) && Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/] == 0) && Global_2514396 != func_380(Local_1038.f_18)) && (Global_2514396 != -1 || func_417(UNK_0xD803B885F5E47A62()))) && func_354()) && !func_348()) && !UNK_0x757EF87A33649210()) && !UNK_0xD0BB2359EC70FC37()) && func_345(UNK_0x16F2683693E537C9()) <= 9) && !Global_2405072.f_2672) && !UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) && !func_344()) && !func_343()) && !func_341()) && !Global_2460715.f_12) && Global_1676371 != 31) && !Local_116[func_380(Local_1038.f_18)]) && !func_340())
			{
				if ((((((func_62(UNK_0xD803B885F5E47A62(), 1, 1) && UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) && !func_338()) && !func_337()) && !UNK_0xE57E602827E07C9D()) && !bLocal_1966) && !func_72(&uLocal_1967))
				{
					if (func_336(2, &uVar1))
					{
						if (!func_335("TCP_NA"))
						{
							func_334("TCP_NA");
						}
					}
					else if (Local_116.f_117[Local_1038.f_18] != func_411())
					{
						if (!func_335("TCP_USED"))
						{
							func_334("TCP_USED");
						}
					}
					else if (func_333())
					{
						if (func_329() == 2)
						{
							if (!func_335("CAS_MG_CTIME"))
							{
								func_334("CAS_MG_CTIME");
							}
						}
						else if (!func_335("CAS_MG_CBAN"))
						{
							func_334("CAS_MG_CBAN");
						}
					}
					else if ((!func_328(UNK_0xD803B885F5E47A62()) && (func_380(Local_1038.f_18) == 2 || func_380(Local_1038.f_18) == 3)) && !(func_327(1) && func_328(func_326())))
					{
						if (!func_335("CAS_MG_SUITE2"))
						{
							func_334("CAS_MG_SUITE2");
						}
					}
					else if (!func_325() && !(func_327(1) && func_324(func_326())))
					{
						if (!func_322("CAS_MG_MEMB2", func_323(1)))
						{
							func_321("CAS_MG_MEMB2", func_323(1));
						}
						else if (UNK_0xBFC0798A6E3417F9(2, 52))
						{
							UNK_0xA37A90C62806D848(1);
							func_320();
							func_363(3);
						}
					}
					else if (Local_1038.f_19 <= 0)
					{
						if (func_417(UNK_0xD803B885F5E47A62()))
						{
							if (!func_335("CAS_MG_NOCHIPS7"))
							{
								func_334("CAS_MG_NOCHIPS7");
							}
						}
						else if (!func_335("CAS_MG_NOCHIPS3"))
						{
							func_334("CAS_MG_NOCHIPS3");
						}
					}
					else if (Local_1038.f_19 < Local_1038.f_28)
					{
						if (func_417(UNK_0xD803B885F5E47A62()))
						{
							if (!func_335("CAS_MG_LOWCHIPS7"))
							{
								func_334("CAS_MG_LOWCHIPS7");
							}
						}
						else if (!func_335("CAS_MG_LOWCHIPS3"))
						{
							func_334("CAS_MG_LOWCHIPS3");
						}
					}
					else if (Local_1038.f_31 == -1)
					{
						if (func_319())
						{
							UNK_0xA37A90C62806D848(1);
						}
						if (((!func_328(UNK_0xD803B885F5E47A62()) && (func_380(Local_1038.f_18) == 2 || func_380(Local_1038.f_18) == 3)) && !(func_327(1) && func_328(func_326()))) || (!func_325() && (func_327(1) && func_324(func_326()))))
						{
							if (func_316(func_326()) == 1)
							{
								Local_1038.f_25 = 1;
								func_315(&(Local_1038.f_31), 4, "TCP_PLAY_A", 0, 0, 0, 0);
							}
							else if (func_314(func_326()))
							{
								Local_1038.f_25 = 2;
								func_315(&(Local_1038.f_31), 4, "TCP_PLAY_B", 0, 0, 0, 0);
							}
							else
							{
								Local_1038.f_25 = 3;
								func_315(&(Local_1038.f_31), 4, "TCP_PLAY_C", 0, 0, 0, 0);
							}
						}
						else
						{
							Local_1038.f_25 = 0;
							func_315(&(Local_1038.f_31), 4, "TCP_PLAY", 0, 0, 0, 0);
						}
					}
					else if (func_313(Local_1038.f_31, 1))
					{
						func_311(&(Local_1038.f_31));
						Local_1038.f_31 = -1;
						UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 185, true);
						func_310();
						func_300(UNK_0xD803B885F5E47A62(), 0, 1048832, 0);
						if (UNK_0xA4FD7964FEE91ED8(0) == 4 && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
						{
							UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
							UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
						}
						func_363(4);
					}
				}
				else
				{
					if (func_319())
					{
						UNK_0xA37A90C62806D848(1);
					}
					if (Local_1038.f_31 != -1)
					{
						func_311(&(Local_1038.f_31));
						Local_1038.f_31 = -1;
					}
					Local_1038.f_18 = 0;
					func_363(1);
				}
			}
			else
			{
				if (func_319())
				{
					UNK_0xA37A90C62806D848(1);
				}
				if (Local_1038.f_31 != -1)
				{
					func_311(&(Local_1038.f_31));
					Local_1038.f_31 = -1;
				}
				Local_1038.f_18 = 0;
				func_363(1);
			}
			break;
		case 3:
			if (!func_299())
			{
				func_363(2);
			}
			break;
		case 4:
			func_373(1);
			bVar2 = "CasinoUI_Cards_Three";
			if ((func_380(Local_1038.f_18) == 2 || func_380(Local_1038.f_18) == 3) || func_417(UNK_0xD803B885F5E47A62()))
			{
				bVar2 = "CasinoUI_Cards_Three_High";
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_5, 22))
			{
				func_366(&(Local_1038.f_792), 0, 0);
				func_298(Local_1038.f_18);
				if (UNK_0xA4FD7964FEE91ED8(0) == 4)
				{
					func_300(UNK_0xD803B885F5E47A62(), 0, 0, 0);
				}
				else
				{
					func_300(UNK_0xD803B885F5E47A62(), 0, 256, 0);
				}
				func_363(5);
			}
			else
			{
				UNK_0x0D3BE1DE0262A012(bVar2, 0);
				if (func_296(0, -1, 0) && UNK_0x27117E2CDD4D67C3(bVar2))
				{
					if (!bLocal_1965)
					{
						UNK_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
						func_295(0, 0);
						func_293(1, bVar2, bVar2);
						func_292("TCP_TITLE");
						func_291(-1, 1, 1);
						func_290("TCP_DIS", 0, 0);
						func_289("TCP_DIS1");
						func_289("TCP_DIS2");
						func_289("TCP_DIS3");
						func_288(202, "TCP_EXIT", -1);
						func_288(201, "TCP_CONT", -1);
						bLocal_1965 = true;
					}
					func_261(1, -1, 1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1);
				}
				if (UNK_0x9A01369A10646AFE(2, 202))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
					func_258(1, -1);
					UNK_0xF5A41F3D3B38EFE3(bVar2);
					bLocal_1965 = false;
					func_249();
				}
				else if (UNK_0x9A01369A10646AFE(2, 201))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
					func_258(1, -1);
					UNK_0xF5A41F3D3B38EFE3(bVar2);
					bLocal_1965 = false;
					UNK_0x5D96D8530B3D0904(&(Global_1676377.f_5), 22);
					func_366(&(Local_1038.f_792), 0, 0);
					func_298(Local_1038.f_18);
					if (UNK_0xA4FD7964FEE91ED8(0) == 4)
					{
						func_300(UNK_0xD803B885F5E47A62(), 0, 0, 0);
					}
					else
					{
						func_300(UNK_0xD803B885F5E47A62(), 0, 256, 0);
					}
					func_363(5);
				}
			}
			break;
		case 5:
			if ((((func_248(Local_1038.f_18) && !func_337()) && !func_367()) && func_354()) && !func_348())
			{
				func_69(&(Local_1038.f_792));
				UNK_0x5D96D8530B3D0904(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_4), 3);
				func_239(2);
				func_363(6);
			}
			else
			{
				if (func_337())
				{
					func_249();
				}
				if (func_367())
				{
					func_249();
				}
				if (func_238(Local_1038.f_18))
				{
					func_249();
				}
				if (func_237())
				{
					func_249();
				}
				if (!func_354())
				{
					func_249();
				}
				if (func_348())
				{
					func_249();
				}
			}
			break;
		case 6:
			if (!func_337() && !func_367())
			{
				if (func_236())
				{
					if (UNK_0xA4FD7964FEE91ED8(0) == 1 || UNK_0xA4FD7964FEE91ED8(0) == 2)
					{
						UNK_0x398B6B43792F03FE(0, 0);
					}
					fVar3 = func_234(UNK_0x16F2683693E537C9(), func_235(Local_1038.f_18, 0), 1);
					fVar4 = func_234(UNK_0x16F2683693E537C9(), func_235(Local_1038.f_18, 1), 1);
					fVar5 = func_234(UNK_0x16F2683693E537C9(), func_235(Local_1038.f_18, 2), 1);
					if (fVar4 < fVar5 && fVar4 < fVar3)
					{
						Local_1038.f_21 = 1;
					}
					else if (fVar5 < fVar4 && fVar5 < fVar3)
					{
						Local_1038.f_21 = 2;
					}
					else
					{
						Local_1038.f_21 = 0;
					}
					UNK_0x80AA372E04ED318D(UNK_0x16F2683693E537C9(), func_235(Local_1038.f_18, Local_1038.f_21), 1f, 5000, func_233(Local_1038.f_18, Local_1038.f_21), 0.01f);
					func_363(7);
				}
			}
			else
			{
				func_249();
			}
			break;
		case 7:
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), 2106541073) != 0)
			{
				Local_1038.f_24 = UNK_0xF66E5A439A080021(func_361(Local_1038.f_18), func_232(Local_1038.f_18), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
				UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_231(), func_230(Local_1038.f_21), 2f, -2f, 13, 16, 2f, 0);
				UNK_0x914E6894744915F8(Local_1038.f_24);
				Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_7.f_1 = Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2;
				func_363(8);
			}
			break;
		case 8:
			UNK_0xA78CDFD1AE3130A9(-1938411241);
			Local_1038.f_30 = UNK_0xF958843510932FF6(Local_1038.f_24);
			if (func_229())
			{
				func_228(&(Local_749[UNK_0xD803B885F5E47A62() /*9*/]), 2);
			}
			else
			{
				func_228(&(Local_749[UNK_0xD803B885F5E47A62() /*9*/]), 1);
			}
			if (Local_1038.f_30 != -1)
			{
				if ((UNK_0xA45992A6CE82FB43(Local_1038.f_30) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), 2038294702)) || UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), joaat("BLEND_OUT")))
				{
					func_300(UNK_0xD803B885F5E47A62(), 0, 256, 0);
					Local_1924 = { Var6 };
					if (func_417(UNK_0xD803B885F5E47A62()))
					{
						Local_1924 = 1695074466;
					}
					else if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 == 2 || Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 == 3)
					{
						Local_1924 = 1952785842;
					}
					else
					{
						Local_1924 = joaat("STANDARD");
					}
					Local_1924.f_1 = Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2;
					Local_1924.f_6 = 1;
					if (func_328(UNK_0xD803B885F5E47A62()))
					{
						Local_1924.f_15 = 1983458449;
					}
					else if (func_325())
					{
						Local_1924.f_15 = 1334658487;
					}
					else if (func_327(1) && (func_328(func_326()) || func_226(UNK_0xD803B885F5E47A62())))
					{
						Local_1924.f_15 = 980726932;
					}
					else
					{
						Local_1924.f_15 = 939907746;
					}
					func_366(&uLocal_1899, 0, 0);
					func_225();
					Local_1038.f_32 = func_398();
					func_363(9);
				}
			}
			break;
		case 9:
			if (!UNK_0x562F77A7F33D2E46("DLC_VW_Casino_Table_Games"))
			{
				UNK_0x8BC9595FD2792B5D("DLC_VW_Casino_Table_Games");
			}
			UNK_0xA78CDFD1AE3130A9(-1938411241);
			func_95();
			break;
		case 10:
			if (UNK_0x562F77A7F33D2E46("DLC_VW_Casino_Table_Games"))
			{
				UNK_0x8910D3D58E0132B8("DLC_VW_Casino_Table_Games");
			}
			if (UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), 1785177548) == 1)
			{
				func_228(&(Local_749[UNK_0xD803B885F5E47A62() /*9*/]), func_94());
				vVar22 = { UNK_0x4F3973434662D795(2, 218), UNK_0x4F3973434662D795(2, 219), 0f };
				Local_1038.f_30 = UNK_0xF958843510932FF6(Local_1038.f_24);
				if (Local_1038.f_7)
				{
					if (Local_1038.f_30 != -1 && (UNK_0xA45992A6CE82FB43(Local_1038.f_30) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), joaat("BLEND_OUT"))))
					{
						Local_1038.f_24 = UNK_0xF66E5A439A080021(func_361(Local_1038.f_18), func_232(Local_1038.f_18), 2, false, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
						UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_231(), func_93(Local_1038.f_18), 2f, -2f, 13, 16, 1148846080, 0);
						UNK_0x914E6894744915F8(Local_1038.f_24);
						Local_1038.f_7 = 0;
					}
				}
				else if (Local_1038.f_30 != -1 && ((UNK_0xA45992A6CE82FB43(Local_1038.f_30) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), joaat("BLEND_OUT"))) || (SYSTEM::VMAG(vVar22) >= 0.24f && UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), 2116425869))))
				{
					UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
					func_300(UNK_0xD803B885F5E47A62(), 1, 0, 0);
					UNK_0x8D17794CE3273D70(func_45());
					UNK_0x8D17794CE3273D70(func_78());
					UNK_0x8D17794CE3273D70(func_92());
					UNK_0x8D17794CE3273D70(func_231());
					func_407();
					UNK_0x0674E58A79778E99(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_4), 3);
					func_339();
					func_363(2);
				}
			}
			else
			{
				UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
				func_300(UNK_0xD803B885F5E47A62(), 1, 0, 0);
				UNK_0x8D17794CE3273D70(func_45());
				UNK_0x8D17794CE3273D70(func_78());
				UNK_0x8D17794CE3273D70(func_92());
				UNK_0x8D17794CE3273D70(func_231());
				UNK_0x0674E58A79778E99(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_4), 3);
				func_339();
				func_363(2);
			}
			break;
	}
}

char* func_92()
{
	return "anim_casino_b@amb@casino@games@threecardpoker@player";
}

char* func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
		case 8:
		case 9:
		case 12:
		case 13:
			return "sit_exit_left";
		default:
			break;
	}
	return "sit_exit_left";
}

int func_94()
{
	int iVar0;
	int iVar1;

	iVar0 = func_398();
	iVar1 = (iVar0 - Local_1038.f_32);
	if (iVar1 < 0)
	{
		return 5;
	}
	if (iVar1 > 0)
	{
		return 4;
	}
	return 6;
}

void func_95()
{
	int iVar0;
	struct<9> Var1;
	struct<5> Var10;
	struct<23> Var15;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	bool bVar44;
	bool bVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	bool bVar49;
	int iVar50;
	int iVar51;
	bool bVar52;
	int iVar53;
	int iVar54;
	bool bVar55;
	bool bVar56;
	int iVar57;
	int iVar58;
	bool bVar59;
	bool bVar60;
	int iVar61;
	int iVar62;
	bool bVar63;
	bool bVar64;
	bool bVar65;

	if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 >= 0)
	{
		if (func_224(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2))
		{
			func_223("TCP_ERROR", -1);
			return;
		}
	}
	func_210();
	if (func_408())
	{
		Local_1924.f_10 = 1;
	}
	Local_1924.f_11 = func_208();
	if ((((((((UNK_0xBFC0798A6E3417F9(2, 202) && !UNK_0x4FD68D5821EE3E19()) && !func_337()) && !UNK_0xE57E602827E07C9D()) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), func_92(), "cards_pickup", 3)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, false)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, 3)) && !Local_1038.f_1) && !func_207())
	{
		Local_1901.f_4 = joaat("QUIT");
		Local_1924.f_2 = joaat("QUIT");
		Local_1901.f_22 = joaat("QUIT");
		Local_1901.f_7 = func_398();
		Local_1901.f_17 = func_206(&uLocal_1897, 0, 0);
		Local_1901.f_18 = func_408();
		Local_1901.f_19 = func_208();
		if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 > -1)
		{
			Local_1901.f_9 = Local_116.f_30[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2];
		}
		if ((Local_1038.f_797 > 1 || Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 != 0) || Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 != 0)
		{
			if (Global_262145.f_26036)
			{
				UNK_0x1787A8354D584871(&Local_1901);
			}
		}
		if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 > 0 && !Local_1038.f_2)
		{
			func_205(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3);
		}
		if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 > 0 && !Local_1038.f_6)
		{
			func_205(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5);
		}
		if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 > 0 && !Local_1038.f_3)
		{
			func_205(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4);
		}
		func_375(1);
		UNK_0xA37A90C62806D848(1);
		return;
	}
	if (((Global_2514396 == Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 || Global_2460715.f_12) || Global_1676371 == 31) || !func_203())
	{
		Local_1901.f_7 = func_398();
		Local_1901.f_17 = func_206(&uLocal_1897, 0, 0);
		Local_1901.f_18 = func_408();
		Local_1901.f_19 = func_208();
		if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 > -1)
		{
			Local_1901.f_9 = Local_116.f_30[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2];
		}
		if (Global_262145.f_26036)
		{
			UNK_0x1787A8354D584871(&Local_1901);
		}
		func_375(1);
		UNK_0xA37A90C62806D848(1);
		return;
	}
	if (Local_1038.f_24 > -1)
	{
		Local_1038.f_30 = UNK_0xF958843510932FF6(Local_1038.f_24);
		if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), func_92(), "cards_idle", 3)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, false)) && !Local_1038.f_1)
		{
			if (!UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), func_231(), "idle_cardgames", 3))
			{
				if (Local_1038.f_30 != -1 && (UNK_0xA45992A6CE82FB43(Local_1038.f_30) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), joaat("BLEND_OUT"))))
				{
					Local_1038.f_24 = UNK_0xF66E5A439A080021(func_361(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
					UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_231(), "idle_cardgames", 2f, -2f, 13, 16, 1148846080, 0);
					UNK_0x914E6894744915F8(Local_1038.f_24);
					Local_1038.f_796 = "idle_cardgames";
				}
			}
			else if (Local_1038.f_30 != -1 && (UNK_0xA45992A6CE82FB43(Local_1038.f_30) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), joaat("BLEND_OUT"))))
			{
				Local_1038.f_24 = UNK_0xF66E5A439A080021(func_361(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
				UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_231(), func_202(0), 2f, -2f, 13, 16, 1148846080, 0);
				UNK_0x914E6894744915F8(Local_1038.f_24);
			}
		}
	}
	if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 >= 0)
	{
		func_200(&(Local_1038.f_90));
		if (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, false) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, 3))
		{
			func_199(UNK_0xF59058FCB716F903(0, 202, true), "TCP_EXIT", &(Local_1038.f_90), 0);
			if (((((Local_1038.f_797 == 3 && Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 > 0) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 2)) && !UNK_0xEAE0D21A50E6C7F4(Local_749[UNK_0xD803B885F5E47A62() /*9*/], true)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, true)) && !UNK_0xEAE0D21A50E6C7F4(Local_749[UNK_0xD803B885F5E47A62() /*9*/], 3))
			{
				func_199(UNK_0xF59058FCB716F903(0, 201, true), "TCP_PLAY_HAND", &(Local_1038.f_90), 0);
				func_199(UNK_0xF59058FCB716F903(0, 203, true), "TCP_FOLD_HAND", &(Local_1038.f_90), 0);
			}
			if (Local_116.f_576[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2] == 3 && ((Local_1038.f_19 >= Local_1038.f_28 || Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 != 0) || Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 != 0))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_749[UNK_0xD803B885F5E47A62() /*9*/], false) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, false))
				{
					if (Local_1038.f_19 >= Local_1038.f_17 * 2)
					{
						func_199(UNK_0xF59058FCB716F903(0, 201, true), "TCP_PLACE", &(Local_1038.f_90), 0);
					}
					func_199(UNK_0xF59058FCB716F903(0, 203, true), "TCP_DECLINEA", &(Local_1038.f_90), 0);
					if (Local_1038.f_19 >= Local_1038.f_17 * 2)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 8))
						{
							func_199(UNK_0xF59058FCB716F903(0, 204, true), "TCP_BET_MAX", &(Local_1038.f_90), 0);
						}
						func_198(2, 7, "TCP_BET_NUM", &(Local_1038.f_90));
					}
				}
				else if ((!UNK_0xEAE0D21A50E6C7F4(Local_749[UNK_0xD803B885F5E47A62() /*9*/], 2) && Local_1038.f_19 >= (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 + Local_1038.f_28)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, false))
				{
					func_199(UNK_0xF59058FCB716F903(0, 201, true), "TCP_PLACE_PP", &(Local_1038.f_90), 0);
					func_199(UNK_0xF59058FCB716F903(0, 203, true), "TCP_DECLINE", &(Local_1038.f_90), 0);
					if (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 8))
					{
						func_199(UNK_0xF59058FCB716F903(0, 204, true), "TCP_BET_MAX", &(Local_1038.f_90), 0);
					}
					func_198(2, 7, "TCP_BET_NUM", &(Local_1038.f_90));
				}
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, false))
		{
			func_199(UNK_0xF59058FCB716F903(0, 202, true), "IB_BACK", &(Local_1038.f_90), 0);
			func_198(2, 8, "IB_TAB", &(Local_1038.f_90));
		}
		else if (UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, 3))
		{
			func_199(UNK_0xF59058FCB716F903(0, 202, true), "IB_BACK", &(Local_1038.f_90), 0);
		}
		if (Local_116.f_576[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2] < 12)
		{
			if (Local_116.f_389[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*5*/] > 0)
			{
				func_199(UNK_0xF59058FCB716F903(0, 208, true), "TCP_DLR", &(Local_1038.f_90), 0);
			}
			if (Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/] > 0)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 4) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2], func_197(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1)))
				{
					func_199(UNK_0xF59058FCB716F903(0, 207, true), "TCP_CARDS", &(Local_1038.f_90), 0);
				}
				else if (((((Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 > 0 && Local_1038.f_797 == 3) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 2)) && !UNK_0xEAE0D21A50E6C7F4(Local_749[UNK_0xD803B885F5E47A62() /*9*/], true)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, true)) && !UNK_0xEAE0D21A50E6C7F4(Local_749[UNK_0xD803B885F5E47A62() /*9*/], 3))
				{
					func_199(UNK_0xF59058FCB716F903(0, 207, true), "TCP_PICK_UP", &(Local_1038.f_90), 0);
				}
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, false) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, 3))
		{
			func_199(UNK_0xF59058FCB716F903(2, 210, true), "TCP_RULESb", &(Local_1038.f_90), 0);
			func_199(UNK_0xF59058FCB716F903(2, 209, true), "TCP_HANDSb", &(Local_1038.f_90), 0);
		}
		Var1 = { func_196() };
		func_195(&(Local_1038.f_90), 1f);
		func_187(&(Local_1038.f_89), &Var1, &(Local_1038.f_90), func_194(&(Local_1038.f_90)));
		func_186(1);
	}
	func_181();
	func_162();
	switch (Local_1038.f_797)
	{
		case 0:
			if (Local_116.f_576[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2] == 3)
			{
				if ((Local_1038.f_15 > (Local_1038.f_19 / 2) || Local_1038.f_15 < Local_1038.f_17) || Local_1038.f_15 > Local_1038.f_16)
				{
					Local_1038.f_15 = Local_1038.f_17;
				}
				if ((((Local_1038.f_23 > Local_1038.f_19 || Local_1038.f_23 > Local_1038.f_27) || Local_1038.f_23 < Local_1038.f_28) || Local_1038.f_23 > (Local_1038.f_19 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3)) || Local_1038.f_23 > Local_1038.f_19)
				{
					Local_1038.f_23 = Local_1038.f_28;
				}
				Var10.f_1 = 3;
				Local_1038.f_854 = { Var10 };
				Local_1901 = { Var15 };
				Local_1901.f_10 = 1;
				Local_1901 = -941885798;
				Local_1901.f_11 = func_328(UNK_0xD803B885F5E47A62());
				if (func_328(UNK_0xD803B885F5E47A62()))
				{
					Local_1901.f_20 = 1983458449;
				}
				else if (func_325())
				{
					Local_1901.f_20 = 1334658487;
				}
				else if (func_327(1) && (func_328(func_326()) || func_226(UNK_0xD803B885F5E47A62())))
				{
					Local_1901.f_20 = 980726932;
				}
				else
				{
					Local_1901.f_20 = 939907746;
				}
				if (func_417(UNK_0xD803B885F5E47A62()))
				{
					Local_1901.f_1 = 1695074466;
				}
				else if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 == 2 || Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 == 3)
				{
					Local_1901.f_1 = 1952785842;
				}
				else
				{
					Local_1901.f_1 = joaat("STANDARD");
				}
				func_366(&uLocal_1897, 0, 0);
				Local_1901.f_3 = Local_116.f_25[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2];
				Local_1901.f_2 = Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2;
				func_161(1);
			}
			break;
		case 1:
			if ((!func_325() && !(func_327(1) && func_324(func_326()))) || ((!func_328(UNK_0xD803B885F5E47A62()) && (func_380(Local_1038.f_18) == 2 || func_380(Local_1038.f_18) == 3)) && !(func_327(1) && func_328(func_326()))))
			{
				if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 > -1)
				{
					Local_1901.f_9 = Local_116.f_30[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2];
				}
				Local_1924.f_2 = 939907746;
				Local_1901.f_4 = 939907746;
				Local_1901.f_7 = func_398();
				Local_1901.f_17 = func_206(&uLocal_1897, 0, 0);
				Local_1901.f_18 = func_408();
				Local_1901.f_19 = func_208();
				if (Global_262145.f_26036)
				{
					UNK_0x1787A8354D584871(&Local_1901);
				}
				func_375(1);
				UNK_0xA37A90C62806D848(1);
				if (Local_1038.f_25 == 1)
				{
					func_223("IT_MEMBOc", -1);
				}
				else if (Local_1038.f_25 == 2)
				{
					func_223("IT_MEMBOa", -1);
				}
				else if (Local_1038.f_25 == 3)
				{
					func_223("IT_MEMBOb", -1);
				}
				return;
			}
			if ((((Local_1038.f_19 < Local_1038.f_28 && Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 == 0) && Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 == 0) && Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 == 0) && !Local_1038.f_1)
			{
				Local_1901.f_4 = -1275559872;
				Local_1924.f_2 = -1275559872;
				Local_1901.f_7 = func_398();
				Local_1901.f_17 = func_206(&uLocal_1897, 0, 0);
				Local_1901.f_18 = func_408();
				Local_1901.f_19 = func_208();
				if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 > -1)
				{
					Local_1901.f_9 = Local_116.f_30[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2];
				}
				if (Global_262145.f_26036)
				{
					UNK_0x1787A8354D584871(&Local_1901);
				}
				func_375(1);
				UNK_0xA37A90C62806D848(1);
				if (func_417(UNK_0xD803B885F5E47A62()))
				{
					if (Local_1038.f_19 <= 0)
					{
						func_223("CAS_MG_NOCHIPS7", -1);
					}
					else
					{
						func_223("CAS_MG_LOWCHIPS7", -1);
					}
				}
				else if (Local_1038.f_19 <= 0)
				{
					func_223("CAS_MG_NOCHIPS3", -1);
				}
				else
				{
					func_223("CAS_MG_LOWCHIPS3", -1);
				}
				return;
			}
			if (func_333())
			{
				switch (func_329())
				{
					case 0:
						Local_1901.f_4 = 1982714739;
						break;
					case 1:
						Local_1901.f_4 = -633175758;
						break;
					case 2:
						Local_1901.f_4 = -1625999354;
						break;
				}
				switch (func_329())
				{
					case 0:
						Local_1924.f_2 = 1982714739;
						break;
					case 1:
						Local_1924.f_2 = -633175758;
						break;
					case 2:
						Local_1924.f_2 = -1625999354;
						break;
				}
				Local_1901.f_7 = func_398();
				Local_1901.f_17 = func_206(&uLocal_1897, 0, 0);
				Local_1901.f_18 = func_408();
				Local_1901.f_19 = func_208();
				if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 > -1)
				{
					Local_1901.f_9 = Local_116.f_30[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2];
				}
				if (Global_262145.f_26036)
				{
					UNK_0x1787A8354D584871(&Local_1901);
				}
				func_375(1);
				UNK_0xA37A90C62806D848(1);
				if (func_329() == 2)
				{
					func_223("CAS_MG_CTIME", -1);
				}
				else
				{
					func_223("CAS_MG_CBAN", -1);
				}
				return;
			}
			if (((!UNK_0xEAE0D21A50E6C7F4(Local_749[UNK_0xD803B885F5E47A62() /*9*/], false) && !UNK_0xEAE0D21A50E6C7F4(Local_749[UNK_0xD803B885F5E47A62() /*9*/], 2)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, false)) && (!func_354() || func_348()))
			{
				Local_1901.f_7 = func_398();
				Local_1901.f_17 = func_206(&uLocal_1897, 0, 0);
				Local_1901.f_18 = func_408();
				Local_1901.f_19 = func_208();
				if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 > -1)
				{
					Local_1901.f_9 = Local_116.f_30[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2];
				}
				if (Global_262145.f_26036)
				{
					UNK_0x1787A8354D584871(&Local_1901);
				}
				func_375(1);
				UNK_0xA37A90C62806D848(1);
				return;
			}
			if (!UNK_0xEAE0D21A50E6C7F4(Local_749[UNK_0xD803B885F5E47A62() /*9*/], false))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, false))
				{
					if ((((((!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_29, true) && !UNK_0x4FD68D5821EE3E19()) && !UNK_0xBFC0798A6E3417F9(2, 204)) && !func_337()) && !UNK_0xE57E602827E07C9D()) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, false)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, 3))
					{
						bVar39 = UNK_0x06F8112AA79C53D9(2, 188);
						bVar40 = UNK_0x06F8112AA79C53D9(2, 187);
						if (bVar40 || ((((((bVar39 && !UNK_0xBFC0798A6E3417F9(2, 204)) && !UNK_0x4FD68D5821EE3E19()) && !func_337()) && !UNK_0xE57E602827E07C9D()) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, false)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, 3)))
						{
							func_73(&(Local_1038.f_790), 0, 0);
							UNK_0x5D96D8530B3D0904(&(Local_1038.f_29), true);
						}
					}
					else if (func_71(&(Local_1038.f_790), 100, 0))
					{
						func_69(&(Local_1038.f_790));
						UNK_0x0674E58A79778E99(&(Local_1038.f_29), true);
					}
					if ((((((((UNK_0xBFC0798A6E3417F9(2, 204) && !bVar40) && !bVar39) && !UNK_0x4FD68D5821EE3E19()) && !func_337()) && !UNK_0xE57E602827E07C9D()) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, false)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, 3)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 8))
					{
						UNK_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", 1);
						bVar38 = true;
					}
					if (bVar38)
					{
						while (bVar38)
						{
							if (Local_1038.f_15 >= 10000)
							{
								iVar41 = 5000;
							}
							else if (Local_1038.f_15 >= 5000)
							{
								iVar41 = 1000;
							}
							else if (Local_1038.f_15 >= 500)
							{
								iVar41 = 500;
							}
							else if (Local_1038.f_15 >= 100)
							{
								iVar41 = 50;
							}
							else
							{
								iVar41 = 10;
							}
							if (Local_1038.f_15 > (Local_1038.f_19 / 2))
							{
								Local_1038.f_15 = (Local_1038.f_15 - iVar41);
							}
							if (Local_1038.f_15 < Local_1038.f_17)
							{
								Local_1038.f_15 = Local_1038.f_17;
							}
							if (Local_1038.f_15 > Local_1038.f_16)
							{
								Local_1038.f_15 = Local_1038.f_16;
							}
							Local_1038.f_15 = (Local_1038.f_15 + iVar41);
							if (Local_1038.f_15 > (Local_1038.f_19 / 2))
							{
								bVar38 = false;
								Local_1038.f_15 = (Local_1038.f_15 - iVar41);
							}
							if (Local_1038.f_15 < Local_1038.f_17)
							{
								Local_1038.f_15 = Local_1038.f_17;
							}
							if (Local_1038.f_15 > Local_1038.f_16)
							{
								bVar38 = false;
								Local_1038.f_15 = Local_1038.f_16;
							}
						}
					}
					else
					{
						if (Local_1038.f_15 >= 10000)
						{
							iVar41 = 5000;
						}
						else if (Local_1038.f_15 >= 5000)
						{
							iVar41 = 1000;
						}
						else if (Local_1038.f_15 >= 500)
						{
							iVar41 = 500;
						}
						else if (Local_1038.f_15 >= 100)
						{
							iVar41 = 50;
						}
						else
						{
							iVar41 = 10;
						}
						if (Local_1038.f_15 > (Local_1038.f_19 / 2))
						{
							Local_1038.f_15 = (Local_1038.f_15 - iVar41);
						}
						if (Local_1038.f_15 < Local_1038.f_17)
						{
							Local_1038.f_15 = Local_1038.f_17;
						}
						if (Local_1038.f_15 > Local_1038.f_16)
						{
							Local_1038.f_15 = Local_1038.f_16;
						}
						iVar42 = Local_1038.f_15;
						if (bVar39)
						{
							Local_1038.f_15 = (Local_1038.f_15 + iVar41);
							if (Local_1038.f_15 > (Local_1038.f_19 / 2))
							{
								Local_1038.f_15 = (Local_1038.f_15 - iVar41);
							}
							if (Local_1038.f_15 < Local_1038.f_17)
							{
								Local_1038.f_15 = Local_1038.f_17;
							}
							if (Local_1038.f_15 > Local_1038.f_16)
							{
								Local_1038.f_15 = Local_1038.f_16;
							}
							if (Local_1038.f_15 == iVar42)
							{
								if (UNK_0xBFC0798A6E3417F9(2, 188) || !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 10))
								{
									UNK_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), 10);
								}
							}
							else
							{
								UNK_0x0674E58A79778E99(&(Local_1038.f_22), 10);
								UNK_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
						if (bVar40)
						{
							if (Local_1038.f_15 <= 100)
							{
								iVar41 = 10;
							}
							else if (Local_1038.f_15 <= 500)
							{
								iVar41 = 50;
							}
							else if (Local_1038.f_15 <= 5000)
							{
								iVar41 = 500;
							}
							else if (Local_1038.f_15 <= 10000)
							{
								iVar41 = 1000;
							}
							else
							{
								iVar41 = 5000;
							}
							Local_1038.f_15 = (Local_1038.f_15 - iVar41);
							if (Local_1038.f_15 < Local_1038.f_17)
							{
								Local_1038.f_15 = Local_1038.f_17;
							}
							if (Local_1038.f_15 == iVar42)
							{
								if (UNK_0xBFC0798A6E3417F9(2, 187) || !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 10))
								{
									UNK_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), 10);
								}
							}
							else
							{
								UNK_0x0674E58A79778E99(&(Local_1038.f_22), 10);
								UNK_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
					}
					if ((Local_1038.f_15 == Local_1038.f_16 || (Local_1038.f_15 + iVar41) > Local_1038.f_16) || (Local_1038.f_15 + iVar41) > (Local_1038.f_19 / 2))
					{
						UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), 8);
					}
					else
					{
						UNK_0x0674E58A79778E99(&(Local_1038.f_22), 8);
					}
					UNK_0x5D96D8530B3D0904(&(Local_1038.f_29), false);
					iVar0 = (30 - (func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
					if (iVar0 > 0 || !func_72(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])))
					{
						if ((((!UNK_0x4FD68D5821EE3E19() && !func_337()) && !UNK_0xE57E602827E07C9D()) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, false)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, 3))
						{
							if (((UNK_0xBFC0798A6E3417F9(2, 201) && !UNK_0x06F8112AA79C53D9(2, 203)) && Local_1038.f_15 >= Local_1038.f_17) && Local_1038.f_19 >= Local_1038.f_17 * 2)
							{
								UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), false);
								Local_1038.f_24 = UNK_0xF66E5A439A080021(func_361(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
								if (func_160(Local_1038.f_15))
								{
									UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_92(), "bet_ante_large", 2f, -2f, 13, 16, 1148846080, 0);
								}
								else
								{
									UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_92(), "bet_ante", 2f, -2f, 13, 16, 1148846080, 0);
								}
								UNK_0x914E6894744915F8(Local_1038.f_24);
							}
							else if ((UNK_0xBFC0798A6E3417F9(2, 203) && !UNK_0x06F8112AA79C53D9(2, 201)) || Local_1038.f_19 < Local_1038.f_28)
							{
								Local_1038.f_19 = func_398();
								if ((((Local_1038.f_23 > Local_1038.f_19 || Local_1038.f_23 > Local_1038.f_27) || Local_1038.f_23 < Local_1038.f_28) || Local_1038.f_23 > (Local_1038.f_19 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3)) || Local_1038.f_23 > Local_1038.f_19)
								{
									Local_1038.f_23 = Local_1038.f_28;
								}
								UNK_0x5D96D8530B3D0904(&(Local_749[UNK_0xD803B885F5E47A62() /*9*/]), false);
							}
						}
						if (func_72(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
						{
							if (func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
							{
								func_159((30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_159((30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (Local_1038.f_19 < Local_1038.f_17 * 2)
						{
							if (((!func_335("TCP_LOW") && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
							{
								func_158("TCP_LOW");
							}
						}
						else if (((!func_335("TCP_PLACE_ANTE") && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
						{
							func_158("TCP_PLACE_ANTE");
						}
					}
				}
				else
				{
					if (((!func_335("TCP_PLACE_ANTE") && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
					{
						func_158("TCP_PLACE_ANTE");
					}
					if (func_72(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_159((30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_159((30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
					if (Local_1038.f_30 != -1 && !UNK_0xEAE0D21A50E6C7F4(Local_749[UNK_0xD803B885F5E47A62() /*9*/], false))
					{
						if ((UNK_0xA45992A6CE82FB43(Local_1038.f_30) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), joaat("BLEND_OUT"))) && Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 > 0)
						{
							UNK_0x5D96D8530B3D0904(&(Local_749[UNK_0xD803B885F5E47A62() /*9*/]), false);
							UNK_0x0674E58A79778E99(&(Local_1038.f_22), false);
						}
						else if (UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), 1503712844) && Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 <= 0)
						{
							Local_1038.f_1 = 1;
						}
						if (Local_1038.f_1)
						{
							if (func_155(Local_1038.f_15, &(Local_1038.f_14), 2, Local_1038))
							{
								if (Local_1038.f_14 == 3)
								{
									Local_1038.f_1 = 0;
									UNK_0x0674E58A79778E99(&(Local_1038.f_22), false);
									Local_1038.f_14 = 0;
								}
								else
								{
									Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 = Local_1038.f_15;
									if (Local_1038.f_15 >= 10000)
									{
										iVar43 = 5000;
									}
									else if (Local_1038.f_15 >= 5000)
									{
										iVar43 = 1000;
									}
									else if (Local_1038.f_15 >= 500)
									{
										iVar43 = 500;
									}
									else if (Local_1038.f_15 >= 100)
									{
										iVar43 = 50;
									}
									else
									{
										iVar43 = 10;
									}
									if ((Local_1038.f_15 == Local_1038.f_16 || (Local_1038.f_15 + iVar43) > Local_1038.f_16) || (Local_1038.f_15 + iVar43) > (Local_1038.f_19 / 2))
									{
										Local_1901.f_5 = 1;
									}
									Local_1901.f_6 = (Local_1901.f_6 - Local_1038.f_15);
									Local_1924.f_3 = (Local_1924.f_3 - Local_1038.f_15);
									Local_1924.f_7 = (Local_1924.f_7 + Local_1038.f_15);
									Local_1901.f_12 = (Local_1901.f_12 + Local_1038.f_15);
									Local_1038.f_19 = func_398();
									if ((((Local_1038.f_23 > Local_1038.f_19 || Local_1038.f_23 > Local_1038.f_27) || Local_1038.f_23 < Local_1038.f_28) || Local_1038.f_23 > (Local_1038.f_19 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3)) || Local_1038.f_23 > Local_1038.f_19)
									{
										Local_1038.f_23 = Local_1038.f_28;
									}
									Local_1038.f_1 = 0;
								}
							}
						}
					}
				}
				func_151(Local_1038.f_15, "TCP_BET2", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(Local_749[UNK_0xD803B885F5E47A62() /*9*/], 2))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, false))
				{
					if ((((((!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_29, true) && !UNK_0x4FD68D5821EE3E19()) && !func_337()) && !UNK_0xE57E602827E07C9D()) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, false)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, 3)) && !UNK_0xBFC0798A6E3417F9(2, 204))
					{
						bVar44 = UNK_0x06F8112AA79C53D9(2, 188);
						bVar45 = UNK_0x06F8112AA79C53D9(2, 187);
						if (bVar45 || ((((((bVar44 && !UNK_0xBFC0798A6E3417F9(2, 204)) && !UNK_0x4FD68D5821EE3E19()) && !func_337()) && !UNK_0xE57E602827E07C9D()) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, false)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, 3)))
						{
							func_73(&(Local_1038.f_790), 0, 0);
							UNK_0x5D96D8530B3D0904(&(Local_1038.f_29), true);
						}
					}
					else if (func_71(&(Local_1038.f_790), 100, 0))
					{
						func_69(&(Local_1038.f_790));
						UNK_0x0674E58A79778E99(&(Local_1038.f_29), true);
					}
					if ((((((((UNK_0xBFC0798A6E3417F9(2, 204) && !bVar45) && !bVar44) && !UNK_0x4FD68D5821EE3E19()) && !func_337()) && !UNK_0xE57E602827E07C9D()) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, false)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, 3)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 8))
					{
						UNK_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", 1);
						bVar38 = true;
					}
					if (bVar38)
					{
						while (bVar38)
						{
							if (Local_1038.f_23 >= 10000)
							{
								iVar46 = 5000;
							}
							else if (Local_1038.f_23 >= 5000)
							{
								iVar46 = 1000;
							}
							else if (Local_1038.f_23 >= 500)
							{
								iVar46 = 500;
							}
							else if (Local_1038.f_23 >= 100)
							{
								iVar46 = 50;
							}
							else
							{
								iVar46 = 10;
							}
							if (Local_1038.f_23 > Local_1038.f_19)
							{
								Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							}
							if (Local_1038.f_23 > Local_1038.f_27)
							{
								Local_1038.f_23 = Local_1038.f_27;
							}
							if (Local_1038.f_23 < Local_1038.f_28)
							{
								Local_1038.f_23 = Local_1038.f_28;
							}
							if (Local_1038.f_23 > (Local_1038.f_19 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3))
							{
								Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							}
							Local_1038.f_23 = (Local_1038.f_23 + iVar46);
							if (Local_1038.f_23 > Local_1038.f_19)
							{
								bVar38 = false;
								Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							}
							if (Local_1038.f_23 > Local_1038.f_27)
							{
								bVar38 = false;
								Local_1038.f_23 = Local_1038.f_27;
							}
							if (Local_1038.f_23 < Local_1038.f_28)
							{
								Local_1038.f_23 = Local_1038.f_28;
							}
							if (Local_1038.f_23 > (Local_1038.f_19 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3))
							{
								bVar38 = false;
								Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							}
						}
					}
					else
					{
						if (Local_1038.f_23 >= 10000)
						{
							iVar46 = 5000;
						}
						else if (Local_1038.f_23 >= 5000)
						{
							iVar46 = 1000;
						}
						else if (Local_1038.f_23 >= 500)
						{
							iVar46 = 500;
						}
						else if (Local_1038.f_23 >= 100)
						{
							iVar46 = 50;
						}
						else
						{
							iVar46 = 10;
						}
						if (Local_1038.f_23 > Local_1038.f_19)
						{
							Local_1038.f_23 = (Local_1038.f_23 - iVar46);
						}
						if (Local_1038.f_23 > Local_1038.f_27)
						{
							Local_1038.f_23 = Local_1038.f_27;
						}
						if (Local_1038.f_23 < Local_1038.f_28)
						{
							Local_1038.f_23 = Local_1038.f_28;
						}
						if (Local_1038.f_23 > (Local_1038.f_19 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3))
						{
							Local_1038.f_23 = (Local_1038.f_23 - iVar46);
						}
						iVar47 = Local_1038.f_23;
						if (bVar44)
						{
							Local_1038.f_23 = (Local_1038.f_23 + iVar46);
							if (Local_1038.f_23 > Local_1038.f_19)
							{
								Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							}
							if (Local_1038.f_23 > Local_1038.f_27)
							{
								Local_1038.f_23 = Local_1038.f_27;
							}
							if (Local_1038.f_23 < Local_1038.f_28)
							{
								Local_1038.f_23 = Local_1038.f_28;
							}
							if (Local_1038.f_23 > (Local_1038.f_19 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3))
							{
								Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							}
							if (Local_1038.f_23 == iVar47)
							{
								if (UNK_0xBFC0798A6E3417F9(2, 188) || !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 10))
								{
									UNK_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), 10);
								}
							}
							else
							{
								UNK_0x0674E58A79778E99(&(Local_1038.f_22), 10);
								UNK_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
						if (bVar45)
						{
							if (Local_1038.f_23 <= 100)
							{
								iVar46 = 10;
							}
							else if (Local_1038.f_23 <= 500)
							{
								iVar46 = 50;
							}
							else if (Local_1038.f_23 <= 5000)
							{
								iVar46 = 500;
							}
							else if (Local_1038.f_23 <= 10000)
							{
								iVar46 = 1000;
							}
							else
							{
								iVar46 = 5000;
							}
							Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							if (Local_1038.f_23 < Local_1038.f_28)
							{
								Local_1038.f_23 = Local_1038.f_28;
							}
							if (Local_1038.f_23 == iVar47)
							{
								if (UNK_0xBFC0798A6E3417F9(2, 187) || !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 10))
								{
									UNK_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), 10);
								}
							}
							else
							{
								UNK_0x0674E58A79778E99(&(Local_1038.f_22), 10);
								UNK_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
					}
					if ((Local_1038.f_23 == Local_1038.f_27 || (Local_1038.f_23 + iVar46) > Local_1038.f_27) || (Local_1038.f_23 + iVar46) > (Local_1038.f_19 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3))
					{
						UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), 8);
					}
					else
					{
						UNK_0x0674E58A79778E99(&(Local_1038.f_22), 8);
					}
					UNK_0x5D96D8530B3D0904(&(Local_1038.f_29), false);
					iVar0 = (30 - (func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
					if (iVar0 > 0 || !func_72(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])))
					{
						if ((((!UNK_0x4FD68D5821EE3E19() && !func_337()) && !UNK_0xE57E602827E07C9D()) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, false)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, 3))
						{
							if (((((UNK_0xBFC0798A6E3417F9(2, 201) && !UNK_0x06F8112AA79C53D9(2, 203)) && !UNK_0x06F8112AA79C53D9(2, 204)) && Local_1038.f_23 >= Local_1038.f_28) && Local_1038.f_23 <= Local_1038.f_19) && Local_1038.f_19 >= (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 + Local_1038.f_28))
							{
								UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), false);
								Local_1038.f_24 = UNK_0xF66E5A439A080021(func_361(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
								if (func_160(Local_1038.f_23))
								{
									UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_92(), "bet_plus_large", 2f, -2f, 13, 16, 1148846080, 0);
								}
								else
								{
									UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_92(), "bet_plus", 2f, -2f, 13, 16, 1148846080, 0);
								}
								UNK_0x914E6894744915F8(Local_1038.f_24);
							}
							else if (((UNK_0xBFC0798A6E3417F9(2, 203) && !UNK_0x06F8112AA79C53D9(2, 201)) && !UNK_0x06F8112AA79C53D9(2, 204)) || Local_1038.f_19 < (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 + Local_1038.f_28))
							{
								if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 > 0)
								{
									UNK_0x5D96D8530B3D0904(&(Local_749[UNK_0xD803B885F5E47A62() /*9*/]), 2);
								}
								else
								{
									Local_1901.f_4 = joaat("QUIT");
									Local_1924.f_2 = joaat("QUIT");
									Local_1901.f_7 = func_398();
									Local_1901.f_17 = func_206(&uLocal_1897, 0, 0);
									Local_1901.f_18 = func_408();
									Local_1901.f_19 = func_208();
									if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 > -1)
									{
										Local_1901.f_9 = Local_116.f_30[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2];
									}
									if (Global_262145.f_26036)
									{
										UNK_0x1787A8354D584871(&Local_1901);
									}
									func_375(1);
									UNK_0xA37A90C62806D848(1);
									return;
								}
							}
						}
						if (func_72(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
						{
							if (func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
							{
								func_159((30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_159((30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (((!func_335("TCP_PLACE_PAIR") && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
						{
							func_158("TCP_PLACE_PAIR");
						}
					}
				}
				else
				{
					if (((!func_335("TCP_PLACE_PAIR") && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
					{
						func_158("TCP_PLACE_PAIR");
					}
					if (func_72(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_159((30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_159((30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
					if (Local_1038.f_30 != -1 && !UNK_0xEAE0D21A50E6C7F4(Local_749[UNK_0xD803B885F5E47A62() /*9*/], 2))
					{
						if ((UNK_0xA45992A6CE82FB43(Local_1038.f_30) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), joaat("BLEND_OUT"))) && Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 > 0)
						{
							UNK_0x5D96D8530B3D0904(&(Local_749[UNK_0xD803B885F5E47A62() /*9*/]), 2);
							UNK_0x0674E58A79778E99(&(Local_1038.f_22), false);
						}
						else if (UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), 1503712844) && Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 <= 0)
						{
							Local_1038.f_1 = 1;
						}
						if (Local_1038.f_1)
						{
							if (func_155(Local_1038.f_23, &(Local_1038.f_14), 2, Local_1038))
							{
								if (Local_1038.f_14 == 3)
								{
									Local_1038.f_1 = 0;
									UNK_0x0674E58A79778E99(&(Local_1038.f_22), false);
									Local_1038.f_14 = 0;
								}
								else
								{
									Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 = Local_1038.f_23;
									if (Local_1038.f_23 >= 10000)
									{
										iVar48 = 5000;
									}
									else if (Local_1038.f_23 >= 5000)
									{
										iVar48 = 1000;
									}
									else if (Local_1038.f_23 >= 500)
									{
										iVar48 = 500;
									}
									else if (Local_1038.f_23 >= 100)
									{
										iVar48 = 50;
									}
									else
									{
										iVar48 = 10;
									}
									if ((Local_1038.f_23 == Local_1038.f_27 || (Local_1038.f_23 + iVar48) > Local_1038.f_27) || (Local_1038.f_23 + iVar48) > (Local_1038.f_19 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3))
									{
										Local_1901.f_5 = 1;
									}
									Local_1901.f_6 = (Local_1901.f_6 - Local_1038.f_23);
									Local_1924.f_3 = (Local_1924.f_3 - Local_1038.f_23);
									Local_1924.f_8 = (Local_1924.f_8 + Local_1038.f_23);
									Local_1901.f_13 = (Local_1901.f_13 + Local_1038.f_23);
									Local_1038.f_19 = func_398();
									Local_1038.f_1 = 0;
								}
							}
						}
					}
				}
				func_151(Local_1038.f_23, "TCP_BET3", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				bVar49 = true;
				iVar50 = 0;
				while (iVar50 < 4)
				{
					iVar51 = Local_116.f_117[(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4 + iVar50)];
					if (iVar51 != -1)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_749[iVar51 /*9*/], 2))
						{
							bVar49 = false;
						}
					}
					iVar50++;
				}
				if ((((!func_335("TCP_WAIT") && !bVar49) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
				{
					func_158("TCP_WAIT");
				}
				if (func_72(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
				{
					if (func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
					{
						func_159((30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						func_159((30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					}
				}
			}
			if ((Local_116.f_576[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2] > 3 && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, false)) && !Local_1038.f_1)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_1038.f_29, false))
				{
					UNK_0xA37A90C62806D848(1);
					Local_1924.f_12++;
					if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 <= 0 && Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 <= 0)
					{
						UNK_0x5D96D8530B3D0904(&(Local_749[UNK_0xD803B885F5E47A62() /*9*/]), 5);
					}
					func_161(2);
				}
				else
				{
					bVar52 = true;
					iVar53 = 0;
					while (iVar53 < 4)
					{
						iVar54 = Local_116.f_117[(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4 + iVar53)];
						if (iVar54 != -1)
						{
							if (!UNK_0xEAE0D21A50E6C7F4(Local_749[iVar54 /*9*/], 2))
							{
								bVar52 = false;
							}
						}
						iVar53++;
					}
					if ((((!func_335("TCP_WAIT") && !bVar52) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
					{
						func_158("TCP_WAIT");
					}
					if (func_72(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_159((30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_159((30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
				}
			}
			break;
		case 2:
			if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 >= 0)
			{
				if (Local_116.f_389[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*5*/] == 3)
				{
					if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 > 0)
					{
						UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), 6);
					}
					UNK_0x0674E58A79778E99(&(Local_1038.f_22), false);
					func_161(3);
				}
			}
			break;
		case 3:
			if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 <= 0 && Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 <= 0)
			{
				UNK_0x5D96D8530B3D0904(&(Local_749[UNK_0xD803B885F5E47A62() /*9*/]), 3);
				if (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 4))
				{
					UNK_0x5D96D8530B3D0904(&(Local_749[UNK_0xD803B885F5E47A62() /*9*/]), 4);
				}
				func_161(4);
				return;
			}
			if ((UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))])) && UNK_0xE5DBF9B6126856CA(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]))
			{
				if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]))
				{
					UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]);
					bVar55 = true;
				}
				if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]))
				{
					UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]);
					bVar55 = true;
				}
				if (!UNK_0x526BC32A660C89E6(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]))
				{
					UNK_0x8D30F6387EE75385(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]);
					bVar55 = true;
				}
				if (bVar55)
				{
					return;
				}
				if ((((((!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, false) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 4)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 2)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, true)) && !UNK_0xEAE0D21A50E6C7F4(Local_749[UNK_0xD803B885F5E47A62() /*9*/], true)) && !UNK_0xEAE0D21A50E6C7F4(Local_749[UNK_0xD803B885F5E47A62() /*9*/], 3)) && Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 > 0)
				{
					if ((!UNK_0x4FD68D5821EE3E19() && !func_337()) && !UNK_0xE57E602827E07C9D())
					{
						if ((UNK_0xBFC0798A6E3417F9(2, 207) && !UNK_0x06F8112AA79C53D9(2, 203)) && !UNK_0x06F8112AA79C53D9(2, 201))
						{
							Local_1038.f_24 = UNK_0xF66E5A439A080021(func_361(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
							UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_92(), "cards_pickup", 2f, -2f, 13, 16, 1148846080, 0);
							UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_pickup_card_a", 1000f, -1000f, 13);
							UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_pickup_card_b", 1000f, -1000f, 13);
							UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_pickup_card_c", 1000f, -1000f, 13);
							UNK_0x914E6894744915F8(Local_1038.f_24);
							UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), 7);
							UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), false);
						}
					}
				}
				if (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, false))
				{
					if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 > 0)
					{
						iVar0 = (30 - (func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
						if (iVar0 > 0)
						{
							if (func_72(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
							{
								if (func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
								{
									func_159((30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
								}
								else
								{
									func_159((30000 - func_206(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
							if (((!func_335("TCP_PLACE_PLAY") && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
							{
								func_158("TCP_PLACE_PLAY");
							}
							if ((((!UNK_0x4FD68D5821EE3E19() && !func_337()) && !UNK_0xE57E602827E07C9D()) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, false)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, 3))
							{
								if ((UNK_0xBFC0798A6E3417F9(2, 201) && !UNK_0x06F8112AA79C53D9(2, 203)) && (!UNK_0x06F8112AA79C53D9(2, 207) || UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 4)))
								{
									if (UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 4))
									{
										Local_1038.f_24 = UNK_0xF66E5A439A080021(func_361(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
										UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_92(), "cards_play", 2f, -2f, 13, 16, 1148846080, 0);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_play_card_a", 1000f, -1000f, 13);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_play_card_b", 1000f, -1000f, 13);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_play_card_c", 1000f, -1000f, 13);
										UNK_0x914E6894744915F8(Local_1038.f_24);
									}
									UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), false);
									UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), 2);
								}
								else if ((UNK_0xBFC0798A6E3417F9(2, 203) && !UNK_0x06F8112AA79C53D9(2, 201)) && (!UNK_0x06F8112AA79C53D9(2, 207) || UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 4)))
								{
									if (UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 4))
									{
										Local_1038.f_24 = UNK_0xF66E5A439A080021(func_361(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
										UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1148846080, 0);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
										UNK_0x914E6894744915F8(Local_1038.f_24);
									}
									UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), false);
									UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), true);
								}
							}
						}
						else if (func_72(&(Local_116.f_150[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])))
						{
							if (UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 4))
							{
								Local_1038.f_24 = UNK_0xF66E5A439A080021(func_361(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
								UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1148846080, 0);
								UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
								UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
								UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
								UNK_0x914E6894744915F8(Local_1038.f_24);
							}
							UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), false);
							UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), true);
						}
					}
					else
					{
						UNK_0x5D96D8530B3D0904(&(Local_749[UNK_0xD803B885F5E47A62() /*9*/]), 3);
						if (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 4))
						{
							UNK_0x5D96D8530B3D0904(&(Local_749[UNK_0xD803B885F5E47A62() /*9*/]), 4);
						}
						func_161(4);
						return;
					}
				}
				else if (UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 2))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 3))
					{
						if ((Local_1038.f_30 != -1 && (UNK_0xA45992A6CE82FB43(Local_1038.f_30) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), joaat("BLEND_OUT")))) || !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 4))
						{
							Local_1038.f_24 = UNK_0xF66E5A439A080021(func_361(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
							if (func_160(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3))
							{
								UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_92(), "cards_bet_large", 2f, -2f, 13, 16, 1148846080, 0);
							}
							else
							{
								UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_92(), "cards_bet", 2f, -2f, 13, 16, 1148846080, 0);
							}
							UNK_0x914E6894744915F8(Local_1038.f_24);
							UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), 3);
						}
					}
					else if (Local_1038.f_30 != -1)
					{
						if ((UNK_0xA45992A6CE82FB43(Local_1038.f_30) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), joaat("BLEND_OUT"))) && Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 > 0)
						{
							Local_1038.f_796 = "idle_cardgames";
							Local_1038.f_24 = UNK_0xF66E5A439A080021(func_361(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
							UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_231(), Local_1038.f_796, 2f, -2f, 13, 16, 1148846080, 0);
							UNK_0x914E6894744915F8(Local_1038.f_24);
							UNK_0x0674E58A79778E99(&(Local_1038.f_22), false);
							UNK_0x0674E58A79778E99(&(Local_1038.f_22), true);
							UNK_0x0674E58A79778E99(&(Local_1038.f_22), 2);
							UNK_0x0674E58A79778E99(&(Local_1038.f_22), 3);
							UNK_0x5D96D8530B3D0904(&(Local_749[UNK_0xD803B885F5E47A62() /*9*/]), true);
							if (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 4))
							{
								UNK_0x5D96D8530B3D0904(&(Local_749[UNK_0xD803B885F5E47A62() /*9*/]), 4);
							}
							func_161(4);
						}
						else if (UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), 1503712844) && Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 <= 0)
						{
							Local_1038.f_1 = 1;
						}
						if (Local_1038.f_1)
						{
							if (func_155(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3, &(Local_1038.f_14), 2, Local_1038))
							{
								if (Local_1038.f_14 == 3)
								{
									Local_1038.f_1 = 0;
									UNK_0x0674E58A79778E99(&(Local_1038.f_22), false);
									UNK_0x0674E58A79778E99(&(Local_1038.f_22), true);
									UNK_0x0674E58A79778E99(&(Local_1038.f_22), 2);
									UNK_0x0674E58A79778E99(&(Local_1038.f_22), 3);
									if (UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 4))
									{
										Local_1038.f_24 = UNK_0xF66E5A439A080021(func_361(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), 2, false, true, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
										UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_92(), "cards_idle", 1000f, -1000f, 13, 16, 1148846080, 0);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_idle_card_a", 1000f, -1000f, 13);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_idle_card_b", 1000f, -1000f, 13);
										UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_idle_card_c", 1000f, -1000f, 13);
										UNK_0x914E6894744915F8(Local_1038.f_24);
									}
									Local_1038.f_14 = 0;
								}
								else
								{
									Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 = Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3;
									Local_1901.f_6 = (Local_1901.f_6 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3);
									Local_1924.f_3 = (Local_1924.f_3 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3);
									Local_1038.f_19 = func_398();
									Local_1038.f_1 = 0;
								}
							}
						}
					}
				}
				else if (UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, true))
				{
					if ((Local_1038.f_30 != -1 && (UNK_0xA45992A6CE82FB43(Local_1038.f_30) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), joaat("BLEND_OUT")))) || !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 4))
					{
						Local_1038.f_796 = "idle_cardgames";
						Local_1038.f_24 = UNK_0xF66E5A439A080021(func_361(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
						UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_231(), Local_1038.f_796, 2f, -2f, 13, 16, 1148846080, 0);
						UNK_0x914E6894744915F8(Local_1038.f_24);
						UNK_0x0674E58A79778E99(&(Local_1038.f_22), false);
						UNK_0x0674E58A79778E99(&(Local_1038.f_22), true);
						UNK_0x0674E58A79778E99(&(Local_1038.f_22), 2);
						UNK_0x0674E58A79778E99(&(Local_1038.f_22), 3);
						UNK_0x5D96D8530B3D0904(&(Local_749[UNK_0xD803B885F5E47A62() /*9*/]), 3);
						if (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 4))
						{
							UNK_0x5D96D8530B3D0904(&(Local_749[UNK_0xD803B885F5E47A62() /*9*/]), 4);
						}
						func_161(4);
					}
				}
				else if (UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 7) && UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), func_92(), "cards_pickup", 3))
				{
					if (Local_1038.f_30 != -1 && (UNK_0xA45992A6CE82FB43(Local_1038.f_30) >= 0.99f || UNK_0xDDCA9A4E51DADA2B(UNK_0x16F2683693E537C9(), joaat("BLEND_OUT"))))
					{
						Local_1038.f_24 = UNK_0xF66E5A439A080021(func_361(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), 2, false, true, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
						UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_92(), "cards_idle", 2f, -2f, 13, 16, 1148846080, 0);
						UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_idle_card_a", 1000f, -1000f, 13);
						UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_idle_card_b", 1000f, -1000f, 13);
						UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_idle_card_c", 1000f, -1000f, 13);
						UNK_0x914E6894744915F8(Local_1038.f_24);
						UNK_0x0674E58A79778E99(&(Local_1038.f_22), false);
						UNK_0x0674E58A79778E99(&(Local_1038.f_22), 7);
						UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), 4);
					}
				}
				if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 > 0)
				{
					func_151(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3, "TCP_BET4", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		case 4:
			if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 >= 0)
			{
				bVar56 = true;
				iVar57 = 0;
				while (iVar57 < 4)
				{
					iVar58 = Local_116.f_117[(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4 + iVar57)];
					if (iVar58 != -1)
					{
						if ((!UNK_0xEAE0D21A50E6C7F4(Local_749[iVar58 /*9*/], true) && !UNK_0xEAE0D21A50E6C7F4(Local_749[iVar58 /*9*/], 3)) && (Local_749[iVar58 /*9*/].f_3 > 0 || Local_749[iVar58 /*9*/].f_5 > 0))
						{
							bVar56 = false;
						}
					}
					iVar57++;
				}
				if (Local_116.f_576[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2] == 9 && !bVar56)
				{
					if (((!func_335("TCP_WAIT") && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
					{
						func_158("TCP_WAIT");
					}
				}
				else if (func_335("TCP_WAIT") || func_335("TCP_PLACE_PLAY"))
				{
					UNK_0xA37A90C62806D848(1);
				}
				if (Local_116.f_576[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2] == 1)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Local_749[UNK_0xD803B885F5E47A62() /*9*/], 5))
					{
						bVar59 = true;
					}
					if (Local_1038.f_31 != -1)
					{
						func_311(&(Local_1038.f_31));
						Local_1038.f_31 = -1;
					}
					Local_1038.f_2 = 0;
					Local_1038.f_3 = 0;
					Local_1038.f_4 = 0;
					Local_1038.f_6 = 0;
					Local_1038.f_22 = 0;
					Local_749[UNK_0xD803B885F5E47A62() /*9*/] = 0;
					Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_6 = 0;
					Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 = 0;
					Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 = 0;
					Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 = 0;
					func_161(0);
					Local_1901.f_7 = func_398();
					Local_1901.f_17 = func_206(&uLocal_1897, 0, 0);
					Local_1901.f_18 = func_408();
					Local_1901.f_19 = func_208();
					if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 > -1)
					{
						Local_1901.f_9 = Local_116.f_30[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2];
					}
					if (!func_354() || func_348())
					{
						if (Global_262145.f_26036 && !bVar59)
						{
							UNK_0x1787A8354D584871(&Local_1901);
						}
						func_375(1);
						UNK_0xA37A90C62806D848(1);
						return;
					}
					if (func_333())
					{
						switch (func_329())
						{
							case 0:
								Local_1901.f_4 = 1982714739;
								break;
							case 1:
								Local_1901.f_4 = -633175758;
								break;
							case 2:
								Local_1901.f_4 = -1625999354;
								break;
						}
						switch (func_329())
						{
							case 0:
								Local_1924.f_2 = 1982714739;
								break;
							case 1:
								Local_1924.f_2 = -633175758;
								break;
							case 2:
								Local_1924.f_2 = -1625999354;
								break;
						}
						if (Global_262145.f_26036 && !bVar59)
						{
							UNK_0x1787A8354D584871(&Local_1901);
						}
						func_375(1);
						UNK_0xA37A90C62806D848(1);
						if (func_329() == 2)
						{
							func_223("CAS_MG_CTIME", -1);
						}
						else
						{
							func_223("CAS_MG_CBAN", -1);
						}
						return;
					}
					if (Global_262145.f_26036 && !bVar59)
					{
						UNK_0x1787A8354D584871(&Local_1901);
					}
					return;
				}
				if ((Local_116.f_5[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2] && Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/] > 0) && UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2], func_197(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1)))
				{
					iVar61 = func_9(&(Local_116.f_389[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0);
					iVar62 = func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0);
					if (func_25(iVar61))
					{
						bVar60 = true;
					}
					if (iVar62 > 500)
					{
						Local_1901.f_22 = 745220304;
					}
					else if (iVar62 > 400)
					{
						Local_1901.f_22 = 588481795;
					}
					else if (iVar62 > 300)
					{
						Local_1901.f_22 = joaat("STRAIGHT");
					}
					else if (iVar62 > 200)
					{
						Local_1901.f_22 = joaat("FLUSH");
					}
					else if (iVar62 > 100)
					{
						Local_1901.f_22 = 378531009;
					}
					else
					{
						Local_1901.f_22 = 201584577;
					}
					if (((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 5))
						{
							Local_1038.f_24 = UNK_0xF66E5A439A080021(func_361(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
							bVar63 = func_150(Local_1901.f_6);
							if ((Local_1038.f_26 == 1 || func_380(Local_1038.f_18) == 2) || func_380(Local_1038.f_18) == 3)
							{
								if (((Local_1038.f_15 >= 35000 && iVar62 > iVar61) && iVar62 > 300) || (Local_1038.f_23 >= 3500 && iVar62 > 300))
								{
									bVar63 = func_149();
								}
								else if (((Local_1038.f_15 >= 35000 && iVar62 > 300) && iVar62 < iVar61) && !(Local_1038.f_23 >= 3500 && iVar62 > 300))
								{
									bVar63 = func_147();
								}
							}
							else if (((Local_1038.f_15 >= 4500 && iVar62 > iVar61) && iVar62 > 300) || (Local_1038.f_23 >= 450 && iVar62 > 300))
							{
								bVar63 = func_149();
							}
							else if (((Local_1038.f_15 >= 4500 && iVar62 > 300) && iVar62 < iVar61) && !(Local_1038.f_23 >= 450 && iVar62 > 300))
							{
								bVar63 = func_147();
							}
							UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_231(), bVar63, 2f, -2f, 13, 16, 1148846080, 0);
							UNK_0x914E6894744915F8(Local_1038.f_24);
							UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), 5);
						}
						if (Local_1901.f_14 > 0)
						{
							if (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 9))
							{
								if (func_102(Local_1901.f_14, &(Local_1038.f_14), 2))
								{
									UNK_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_WIN_CHIPS", "dlc_vw_table_games_frontend_sounds", 1);
									UNK_0x5D96D8530B3D0904(&(Local_1038.f_22), 9);
									if (func_418(UNK_0xD803B885F5E47A62()) && iVar62 > 500)
									{
										UNK_0x5D96D8530B3D0904(&(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_840), 11);
									}
								}
							}
						}
					}
					if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 > 0)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(Local_749[UNK_0xD803B885F5E47A62() /*9*/], 3))
						{
							if (!bVar60)
							{
								if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
								{
									if (!func_100("TCP_WIN_NP", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_1901.f_14))
									{
										func_99("TCP_WIN_NP", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_1901.f_14);
									}
								}
								if (!Local_1038.f_2)
								{
									Local_1038.f_2 = 1;
									Local_1924.f_3 = (Local_1924.f_3 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 * 2);
									Local_1901.f_6 = (Local_1901.f_6 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 * 2);
									Local_1901.f_14 = (Local_1901.f_14 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 * 2);
								}
								if (!Local_1038.f_3)
								{
									Local_1038.f_3 = 1;
									Local_1924.f_3 = (Local_1924.f_3 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4);
									Local_1901.f_6 = (Local_1901.f_6 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4);
									Local_1924.f_13++;
									Local_1901.f_15 = 1;
									Local_1901.f_14 = (Local_1901.f_14 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4);
									Local_1901.f_4 = joaat("WIN");
								}
							}
							else if (iVar62 > iVar61)
							{
								if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
								{
									if (iVar62 > 500 && iVar61 > 500)
									{
										bVar64 = true;
									}
									if ((iVar62 > 400 && iVar61 > 400) && (iVar62 < 500 && iVar61 < 500))
									{
										bVar64 = true;
									}
									if ((iVar62 > 300 && iVar61 > 300) && (iVar62 < 400 && iVar61 < 400))
									{
										bVar64 = true;
									}
									if ((iVar62 > 200 && iVar61 > 200) && (iVar62 < 300 && iVar61 < 300))
									{
										bVar64 = true;
									}
									if ((iVar62 > 100 && iVar61 > 100) && (iVar62 < 200 && iVar61 < 200))
									{
										bVar64 = true;
									}
									if (bVar64)
									{
										if (!func_100("TCP_WIN2", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_1901.f_14))
										{
											func_99("TCP_WIN2", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_1901.f_14);
										}
									}
									else if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_1901.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_1901.f_14);
									}
								}
								if (!Local_1038.f_2)
								{
									Local_1038.f_2 = 1;
									Local_1924.f_3 = (Local_1924.f_3 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 * 2);
									Local_1901.f_6 = (Local_1901.f_6 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 * 2);
									Local_1901.f_14 = (Local_1901.f_14 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 * 2);
								}
								if (!Local_1038.f_3)
								{
									Local_1038.f_3 = 1;
									Local_1924.f_3 = (Local_1924.f_3 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 * 2);
									Local_1901.f_6 = (Local_1901.f_6 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 * 2);
									Local_1901.f_14 = (Local_1901.f_14 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 * 2);
									Local_1924.f_13++;
									Local_1901.f_15 = 1;
									Local_1901.f_4 = joaat("WIN");
								}
							}
							else if (iVar62 == iVar61)
							{
								iVar61 = func_9(&(Local_116.f_389[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 1, 0);
								iVar62 = func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 1, 0);
								if (iVar62 == iVar61)
								{
									iVar61 = func_9(&(Local_116.f_389[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 1);
									iVar62 = func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 1);
									if (iVar62 > iVar61)
									{
										if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
										{
											if (!func_100("TCP_WIN2", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_1901.f_14))
											{
												func_99("TCP_WIN2", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_1901.f_14);
											}
										}
										if (!Local_1038.f_2)
										{
											Local_1038.f_2 = 1;
											Local_1924.f_3 = (Local_1924.f_3 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 * 2);
											Local_1901.f_6 = (Local_1901.f_6 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 * 2);
											Local_1901.f_14 = (Local_1901.f_14 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 * 2);
										}
										if (!Local_1038.f_3)
										{
											Local_1038.f_3 = 1;
											Local_1924.f_3 = (Local_1924.f_3 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 * 2);
											Local_1901.f_6 = (Local_1901.f_6 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 * 2);
											Local_1901.f_14 = (Local_1901.f_14 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 * 2);
											Local_1924.f_13++;
											Local_1901.f_15 = 1;
											Local_1901.f_4 = joaat("WIN");
										}
									}
									else if (iVar62 == iVar61)
									{
										if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
										{
											if (!func_335("TCP_LOSE_PUSH"))
											{
												func_158("TCP_LOSE_PUSH");
											}
										}
										if (!Local_1038.f_2)
										{
											Local_1038.f_2 = 1;
											Local_1924.f_3 = (Local_1924.f_3 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3);
											Local_1901.f_6 = (Local_1901.f_6 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3);
											Local_1901.f_14 = (Local_1901.f_14 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3);
											func_205(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3);
										}
										if (!Local_1038.f_3)
										{
											Local_1038.f_3 = 1;
											Local_1924.f_3 = (Local_1924.f_3 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4);
											Local_1901.f_6 = (Local_1901.f_6 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4);
											Local_1901.f_14 = (Local_1901.f_14 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4);
											Local_1924.f_13++;
											Local_1901.f_15 = 1;
											Local_1901.f_4 = joaat("WIN");
										}
										Local_1038.f_2 = 1;
									}
									else
									{
										if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
										{
											if (Local_1901.f_14 > 0)
											{
												if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_1901.f_14))
												{
													func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_1901.f_14);
												}
											}
											else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_389[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
											{
												func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_389[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
											}
										}
										Local_1901.f_4 = joaat("LOSE");
										if (!Local_1038.f_3)
										{
											func_205((Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3));
											Local_1038.f_3 = 1;
											Local_1924.f_14++;
										}
										Local_1038.f_2 = 1;
									}
								}
								else if (iVar62 > iVar61)
								{
									if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
									{
										if (!func_100("TCP_WIN2", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_1901.f_14))
										{
											func_99("TCP_WIN2", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_1901.f_14);
										}
									}
									if (!Local_1038.f_2)
									{
										Local_1038.f_2 = 1;
										Local_1924.f_3 = (Local_1924.f_3 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 * 2);
										Local_1901.f_6 = (Local_1901.f_6 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 * 2);
										Local_1901.f_14 = (Local_1901.f_14 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 * 2);
									}
									if (!Local_1038.f_3)
									{
										Local_1038.f_3 = 1;
										Local_1924.f_3 = (Local_1924.f_3 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 * 2);
										Local_1901.f_6 = (Local_1901.f_6 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 * 2);
										Local_1924.f_13++;
										Local_1901.f_15 = 1;
										Local_1901.f_14 = (Local_1901.f_14 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 * 2);
										Local_1901.f_4 = joaat("WIN");
									}
								}
								else
								{
									if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
									{
										if (Local_1901.f_14 > 0)
										{
											if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_1901.f_14))
											{
												func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_1901.f_14);
											}
										}
										else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_389[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
										{
											func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_389[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
										}
									}
									Local_1901.f_4 = joaat("LOSE");
									if (!Local_1038.f_3)
									{
										func_205((Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3));
										Local_1038.f_3 = 1;
										Local_1924.f_14++;
									}
									Local_1038.f_2 = 1;
								}
							}
							else
							{
								if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
								{
									if (iVar62 > 500 && iVar61 > 500)
									{
										bVar65 = true;
									}
									if ((iVar62 > 400 && iVar61 > 400) && (iVar62 < 500 && iVar61 < 500))
									{
										bVar65 = true;
									}
									if ((iVar62 > 300 && iVar61 > 300) && (iVar62 < 400 && iVar61 < 400))
									{
										bVar65 = true;
									}
									if ((iVar62 > 200 && iVar61 > 200) && (iVar62 < 300 && iVar61 < 300))
									{
										bVar65 = true;
									}
									if ((iVar62 > 100 && iVar61 > 100) && (iVar62 < 200 && iVar61 < 200))
									{
										bVar65 = true;
									}
									if (bVar65)
									{
										if (Local_1901.f_14 > 0)
										{
											if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_1901.f_14))
											{
												func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_1901.f_14);
											}
										}
										else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_389[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
										{
											func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_389[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
										}
									}
									else if (Local_1901.f_14 > 0)
									{
										if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_1901.f_14))
										{
											func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_1901.f_14);
										}
									}
									else if (!func_98("TCP_LOSE_PLAY", func_101(func_9(&(Local_116.f_389[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 0)))
									{
										func_97("TCP_LOSE_PLAY", func_101(func_9(&(Local_116.f_389[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
									}
								}
								Local_1901.f_4 = joaat("LOSE");
								if (!Local_1038.f_3)
								{
									func_205((Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 + Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3));
									Local_1038.f_3 = 1;
									Local_1924.f_14++;
								}
								Local_1038.f_2 = 1;
							}
							iVar62 = func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0);
							if (!Local_1038.f_4)
							{
								if (func_96(iVar62) > 0)
								{
									Local_1924.f_3 = (Local_1924.f_3 + (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 * func_96(iVar62)));
									Local_1901.f_6 = (Local_1901.f_6 + (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 * func_96(iVar62)));
									Local_1924.f_13++;
									Local_1901.f_15 = 1;
									Local_1901.f_14 = (Local_1901.f_14 + (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 * func_96(iVar62)));
								}
								Local_1038.f_4 = 1;
							}
						}
						else
						{
							if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 >= 0)
							{
								Local_1901.f_4 = joaat("FOLD");
							}
							if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
							{
								if (Local_1901.f_14 > 0)
								{
									if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_1901.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_1901.f_14);
									}
								}
								else if (!func_98("TCP_LOSE_FOLD", func_101(func_9(&(Local_116.f_389[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 0)))
								{
									func_97("TCP_LOSE_FOLD", func_101(func_9(&(Local_116.f_389[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
								}
							}
							if (!Local_1038.f_3)
							{
								func_205(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3);
								Local_1038.f_3 = 1;
								Local_1924.f_14++;
							}
							Local_1038.f_4 = 1;
							Local_1038.f_2 = 1;
						}
					}
					else
					{
						Local_1038.f_2 = 1;
						Local_1038.f_3 = 1;
						Local_1038.f_4 = 1;
					}
					iVar62 = func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0);
					if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 > 0)
					{
						Local_1901.f_21 = 1;
						if (func_23(iVar62) > 0)
						{
							if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 <= 0)
							{
								if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
								{
									if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_1901.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_1901.f_14);
									}
								}
							}
							if (!Local_1038.f_6)
							{
								Local_1038.f_6 = 1;
								Local_1924.f_3 = (Local_1924.f_3 + (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 + (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 * func_23(iVar62))));
								Local_1901.f_6 = (Local_1901.f_6 + (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 + (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 * func_23(iVar62))));
								Local_1924.f_13++;
								Local_1901.f_15 = 1;
								Local_1901.f_14 = (Local_1901.f_14 + (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 + (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 * func_23(iVar62))));
								Local_1901.f_4 = joaat("WIN");
							}
						}
						else
						{
							if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 <= 0)
							{
								Local_1901.f_4 = joaat("LOSE");
								if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
								{
									if (!func_98("TCP_LOSE_PP", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0)))
									{
										func_97("TCP_LOSE_PP", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0));
									}
								}
							}
							if (!Local_1038.f_6)
							{
								func_205(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5);
								Local_1038.f_6 = 1;
								if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 <= 0)
								{
									Local_1924.f_14++;
								}
							}
						}
					}
					else
					{
						Local_1038.f_6 = 1;
					}
				}
				else
				{
					if (!Local_116.f_5[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2])
					{
					}
					if (Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/] <= 0)
					{
					}
					if (!UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2], func_197(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1)))
					{
					}
					if (((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6)
					{
						if (Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/] <= 0)
						{
							Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 = 0;
							Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 = 0;
							Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 = 0;
						}
					}
				}
			}
			break;
	}
}

int func_96(int iParam0)
{
	if (iParam0 > 500)
	{
		return 5;
	}
	else if (iParam0 > 400)
	{
		return 4;
	}
	else if (iParam0 > 300)
	{
		return 1;
	}
	return 0;
}

void func_97(bool bParam0, bool bParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
}

bool func_98(bool bParam0, bool bParam1)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	UNK_0x6B012227B3921E18(bParam1);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_99(bool bParam0, bool bParam1, bool bParam2)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0x6D99DF8263D35CE5(bParam2);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
}

bool func_100(bool bParam0, bool bParam1, bool bParam2)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0x6D99DF8263D35CE5(bParam2);
	return UNK_0xE3789B9938DCEAE8(0);
}

bool func_101(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (iParam0 > 500)
		{
			return "TCP_STRAIGHTF_F";
		}
		else if (iParam0 > 400)
		{
			return "TCP_TOFAKIND_F";
		}
		else if (iParam0 > 300)
		{
			return "TCP_STRAIGHT_F";
		}
		else if (iParam0 > 200)
		{
			return "TCP_FLUSH_F";
		}
		else if (iParam0 > 100)
		{
			return "TCP_PAIR_F";
		}
		else if (iParam0 == 12)
		{
			return "TCP_HIGH_Q_F";
		}
		else if (iParam0 == 13)
		{
			return "TCP_HIGH_K_F";
		}
		else
		{
			return "TCP_HIGH_A_F";
		}
	}
	else if (iParam0 > 500)
	{
		return "TCP_STRAIGHTF";
	}
	else if (iParam0 > 400)
	{
		return "TCP_TOFAKIND";
	}
	else if (iParam0 > 300)
	{
		return "TCP_STRAIGHT";
	}
	else if (iParam0 > 200)
	{
		return "TCP_FLUSH";
	}
	else if (iParam0 > 100)
	{
		if (iParam0 == 128)
		{
			return "TCP_PAIR_A";
		}
		else if (iParam0 == 104)
		{
			return "TCP_PAIR_2";
		}
		else if (iParam0 == 106)
		{
			return "TCP_PAIR_3";
		}
		else if (iParam0 == 108)
		{
			return "TCP_PAIR_4";
		}
		else if (iParam0 == 110)
		{
			return "TCP_PAIR_5";
		}
		else if (iParam0 == 112)
		{
			return "TCP_PAIR_6";
		}
		else if (iParam0 == 114)
		{
			return "TCP_PAIR_7";
		}
		else if (iParam0 == 116)
		{
			return "TCP_PAIR_8";
		}
		else if (iParam0 == 118)
		{
			return "TCP_PAIR_9";
		}
		else if (iParam0 == 120)
		{
			return "TCP_PAIR_10";
		}
		else if (iParam0 == 122)
		{
			return "TCP_PAIR_J";
		}
		else if (iParam0 == 124)
		{
			return "TCP_PAIR_Q";
		}
		else if (iParam0 == 126)
		{
			return "TCP_PAIR_K";
		}
	}
	else if (iParam0 == 5)
	{
		return "TCP_HIGH_5";
	}
	else if (iParam0 == 6)
	{
		return "TCP_HIGH_6";
	}
	else if (iParam0 == 7)
	{
		return "TCP_HIGH_7";
	}
	else if (iParam0 == 8)
	{
		return "TCP_HIGH_8";
	}
	else if (iParam0 == 9)
	{
		return "TCP_HIGH_9";
	}
	else if (iParam0 == 10)
	{
		return "TCP_HIGH_10";
	}
	else if (iParam0 == 11)
	{
		return "TCP_HIGH_J";
	}
	else if (iParam0 == 12)
	{
		return "TCP_HIGH_Q";
	}
	else if (iParam0 == 13)
	{
		return "TCP_HIGH_K";
	}
	else
	{
		return "TCP_HIGH_A";
	}
	return "";
}

bool func_102(int iParam0, var uParam1, int iParam2)
{
	return func_103(iParam0, 3, uParam1, iParam2, -1);
}

int func_103(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	struct<7> Var5;

	if (iParam0 <= 0)
	{
	}
	else if (!func_146(iParam1))
	{
	}
	else
	{
		iVar0 = func_398();
		bVar1 = (Global_262145.f_26395 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			bVar3 = func_144();
			if (bVar1 > bVar3)
			{
				bVar1 = bVar3;
			}
		}
		if (iParam0 > bVar1)
		{
			iVar2 = (bVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_124(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_398() - Global_1696044);
			func_123(iVar4, 1);
			func_121();
			func_120();
			Global_1696044 = (Global_1696044 + iVar4);
			if (iParam1 == 0)
			{
				func_114(iVar4);
				Global_2460613 = 1;
			}
			else if (iParam1 == 3)
			{
				func_107(iVar4);
				if (iVar4 >= Global_262145.f_26403)
				{
					Global_2460612 = 1;
				}
				else if (iVar4 >= Global_262145.f_26402)
				{
					Global_2460613 = 1;
				}
			}
			Var5 = func_106(iParam1);
			Var5.f_1 = func_105(iParam1, iParam3, iParam4);
			if (func_104(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (UNK_0x62F8C2EDB26F57B3(-1) + UNK_0x3A6D64D2A1228113());
			Var5.f_6 = Global_1696044;
			UNK_0xB1C8602C4408B407(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return true;
	}
	return false;
}

int func_105(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			case 1:
				iVar0 = 21;
				break;
			case 4:
				iVar0 = 22;
				break;
			case 5:
				iVar0 = 23;
				break;
			case 6:
				iVar0 = 24;
				break;
			case 7:
				iVar0 = 25;
				break;
			case 9:
				iVar0 = 26;
				break;
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
		}
	}
	return iVar0;
}

int func_106(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		case 1:
			iVar0 = -1612659516;
			break;
		case 2:
			iVar0 = -1304782539;
			break;
		case 3:
			iVar0 = 1196301501;
			break;
		case 4:
			iVar0 = -1964607937;
			break;
		case 5:
			iVar0 = -2125268726;
			break;
		case 6:
			iVar0 = 1138851024;
			break;
		case 7:
			iVar0 = 1848798713;
			break;
		case 8:
			iVar0 = 1196301501;
			break;
		case 9:
			iVar0 = -1297103179;
			break;
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_113();
	iVar1 = UNK_0xDD0E7998AE8AD485();
	iVar2 = func_111();
	if (iVar0 == 0)
	{
		func_110();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26397)
	{
		func_109();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26399)
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_WON_GD"), Global_262145.f_26399);
		func_109();
		Global_2460613 = 1;
	}
	else
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_WON_GD"), (iVar2 + iParam0));
	}
}

void func_108(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, 1);
	}
}

void func_109()
{
	func_110();
}

void func_110()
{
	func_108(joaat("MPPLY_CASINO_CHIPS_WONTIM"), UNK_0xDD0E7998AE8AD485());
}

int func_111()
{
	return func_112(joaat("MPPLY_CASINO_CHIPS_WON_GD"));
}

int func_112(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_113()
{
	return func_112(joaat("MPPLY_CASINO_CHIPS_WONTIM"));
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_119();
	iVar1 = UNK_0xDD0E7998AE8AD485();
	iVar2 = func_118();
	if (iVar0 == 0)
	{
		func_117();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26396)
	{
		func_116();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_115()
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_PUR_GD"), func_115());
		func_116();
	}
	else
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_PUR_GD"), (iVar2 + iParam0));
	}
}

bool func_115()
{
	if (func_328(UNK_0xD803B885F5E47A62()))
	{
		return Global_262145.f_26191;
	}
	return Global_262145.f_26190;
}

void func_116()
{
	func_117();
}

void func_117()
{
	func_108(joaat("MPPLY_CASINO_CHIPS_PURTIM"), UNK_0xDD0E7998AE8AD485());
}

int func_118()
{
	return func_112(joaat("MPPLY_CASINO_CHIPS_PUR_GD"));
}

int func_119()
{
	return func_112(joaat("MPPLY_CASINO_CHIPS_PURTIM"));
}

void func_120()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_1696079, 6))
	{
		UNK_0x5D96D8530B3D0904(&Global_1696079, 9);
		func_366(&Global_1696082, 0, 0);
	}
}

void func_121()
{
	if (func_122())
	{
		UNK_0x5D96D8530B3D0904(&Global_1696079, true);
	}
}

bool func_122()
{
	return (UNK_0xEAE0D21A50E6C7F4(Global_1696079, 6) || UNK_0xEAE0D21A50E6C7F4(Global_1696079, 5));
}

void func_123(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	UNK_0x5D96D8530B3D0904(&Global_1696079, 6);
	Global_1696080 = iParam0;
	Global_1696081 = iParam1;
}

bool func_124(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	bVar0 = bParam2;
	iVar1 = 1;
	bVar2 = func_104(iParam1);
	if (!bVar2)
	{
		bVar0 = false;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_143())
	{
		if (*uParam0 == 0)
		{
			if (func_142() != -1)
			{
				return false;
			}
			iVar3 = 657241867;
			iVar4 = func_106(iParam1);
			iVar5 = -22148635;
			if (func_146(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_138(78225582, 1950528552, iVar3, iVar5, bParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_138(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_132())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_131(func_142()))
			{
				if (func_130(func_142()) == 2)
				{
					UNK_0x7A87D9FAFCB10ADC(func_129(func_142()));
					if (func_146(iParam1))
					{
						UNK_0xBAAADC9CD356B660(bVar0, bParam2);
					}
					else
					{
						UNK_0xDB46ED1F703FD834(bVar0, bParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_125(func_142());
			}
		}
	}
	else if (bVar0 > 0 || UNK_0x7A7BDE279347E517(bVar0, false, true, 0, -1, 0))
	{
		if (func_146(iParam1))
		{
			UNK_0xBAAADC9CD356B660(bVar0, bParam2);
		}
		else
		{
			UNK_0xDB46ED1F703FD834(bVar0, bParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_125(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_128(iParam0))
		{
			if (!bVar0)
			{
				UNK_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			UNK_0xA6EF5385F39BAC90(Global_4263954[iParam0 /*85*/].f_66);
		}
		func_126(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_126(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_127(&(uParam0->f_14));
	func_127(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_127(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

bool func_128(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return false;
}

int func_129(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_130(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

bool func_131(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return false;
}

bool func_132()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	bVar1 = true;
	iVar2 = func_142();
	if (iVar2 == -1)
	{
		return false;
	}
	if (!bVar0)
	{
		if (!UNK_0x79B28160739BC9E6(func_137()) || UNK_0xDD2EE1F5DA6A6AB0())
		{
			if (func_136(Global_4263954[iVar2 /*85*/].f_66.f_6, Global_4263954[iVar2 /*85*/].f_66.f_4, Global_4263954[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4264536 = 1;
			}
			return false;
		}
		if (Global_2461839)
		{
			if (Global_4263954[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4263954[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4264537 = 1;
				return false;
			}
		}
	}
	iVar3 = func_129(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || bVar1) || UNK_0x80C74F9931DCF063(iVar3))
		{
			Global_4263954[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4263954[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar2 /*85*/].f_66.f_14 = UNK_0xF4CCC8CB6DE7F1AE();
			if (bVar0)
			{
				Global_4263954[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4263954[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4263954[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || bVar1)
			{
				func_133(Global_4263954[iVar2 /*85*/], iVar2);
			}
			Global_4264521 = 1;
			return true;
		}
	}
	return false;
}

void func_133(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	vector3 vVar0;
	bool bVar36;

	if (iParam85 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 285918879;
	vVar0.f_1 = UNK_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_66 };
	vVar0.f_2.f_33 = iParam85;
	bVar36 = func_135(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!bVar36 == 0)
	{
		func_134();
		UNK_0xFB061A86A7AC749F(1, &vVar0, 36, bVar36);
	}
}

void func_134()
{
	UNK_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

bool func_135(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		UNK_0x5D96D8530B3D0904(&uVar0, bParam0);
	}
	return uVar0;
}

int func_136(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			case 1982688246:
				return 0;
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
			default:
				return 0;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
				return 1;
			case 1775876058:
				return 2;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_137()
{
	return Global_1312745;
}

bool func_138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;

	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!UNK_0x79B28160739BC9E6(func_137()) || UNK_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return false;
		}
		if (Global_2461839)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4264537 = 1;
				return false;
			}
		}
	}
	if (iParam2 == 0)
	{
		return false;
	}
	iVar1 = func_142();
	if (iVar1 == -1)
	{
		if (!func_140(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return false;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_139(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4263954[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4263954[iVar1 /*85*/].f_66.f_15 = Var2;
		Global_4263954[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || UNK_0x54B75246B42BE23E(&Var2, bParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_139(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return true;
	}
	return false;
}

bool func_140(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;

	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!UNK_0x79B28160739BC9E6(func_137()) || UNK_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return false;
		}
		if (Global_2461839)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4264537 = 1;
				return false;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4263954[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4263954[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return false;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return false;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (UNK_0x9D14F555AB486471())
		{
			UNK_0x7B4DDB71AD8E7B73();
		}
	}
	if (bVar0 || UNK_0xA28E08E034174728(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_141(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, iParam5, 0, bVar0);
		return true;
	}
	return false;
}

int func_141(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_143())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4263954[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4263954[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4263954[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4263954[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4263954[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4263954[iVar0 /*85*/].f_66 = uParam0;
			Global_4263954[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4263954[iVar0 /*85*/].f_66.f_11 = iParam8;
			Global_4263954[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4263954[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4263954[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar0 /*85*/].f_66.f_14 = UNK_0xF4CCC8CB6DE7F1AE();
			Global_4263954[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_133(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_142()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_129(iVar0) != 2147483647)
		{
			if (func_128(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_143()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_144()
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = (func_115() - func_118());
	iVar1 = (Global_262145.f_26395 - func_398());
	bVar2 = func_145();
	if (bVar0 > iVar1)
	{
		bVar0 = iVar1;
	}
	if (bVar0 > bVar2)
	{
		bVar0 = bVar2;
	}
	return bVar0;
}

bool func_145()
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_115();
	if (bVar0 <= 0)
	{
		return false;
	}
	if (UNK_0xECB8E23DD6EEDD19())
	{
		if (UNK_0x7A7BDE279347E517(bVar0, false, true, 0, -1, 0))
		{
			bVar1 = bVar0;
		}
		else
		{
			bVar1 = (UNK_0x3A6D64D2A1228113() + UNK_0x62F8C2EDB26F57B3(-1));
		}
	}
	else if (UNK_0x7A7BDE279347E517(bVar0, false, true, 0, -1, 1))
	{
		bVar1 = bVar0;
	}
	else
	{
		bVar1 = UNK_0x98DF7171A5F240EC();
	}
	return bVar1;
}

bool func_146(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return false;
	}
	return true;
}

char* func_147()
{
	if (func_148())
	{
		switch (UNK_0x09AC81E49EA267F7(false, 5))
		{
			case 0:
				return "female_reaction_terrible_var_01";
			case 1:
				return "female_reaction_terrible_var_02";
			case 2:
				return "female_reaction_terrible_var_03";
			case 3:
				return "female_reaction_terrible_var_04";
			case 4:
				return "female_reaction_terrible_var_05";
			default:
				break;
		}
	}
	else
	{
		switch (UNK_0x09AC81E49EA267F7(false, 4))
		{
			case 0:
				return "reaction_terrible_var_01";
			case 1:
				return "reaction_terrible_var_02";
			case 2:
				return "reaction_terrible_var_03";
			case 3:
				return "reaction_terrible_var_04";
			default:
				break;
		}
	}
	return "";
}

bool func_148()
{
	return func_57(UNK_0xD803B885F5E47A62());
}

char* func_149()
{
	if (func_148())
	{
		switch (UNK_0x09AC81E49EA267F7(false, 5))
		{
			case 0:
				return "female_reaction_great_var_01";
			case 1:
				return "female_reaction_great_var_02";
			case 2:
				return "female_reaction_great_var_03";
			case 3:
				return "female_reaction_great_var_04";
			case 4:
				return "female_reaction_great_var_05";
			default:
				break;
		}
	}
	else
	{
		switch (UNK_0x09AC81E49EA267F7(false, 4))
		{
			case 0:
				return "reaction_great_var_01";
			case 1:
				return "reaction_great_var_02";
			case 2:
				return "reaction_great_var_03";
			case 3:
				return "reaction_great_var_04";
			default:
				break;
		}
	}
	return "";
}

char* func_150(int iParam0)
{
	if (func_148())
	{
		if ((func_417(UNK_0xD803B885F5E47A62()) || func_380(Local_1038.f_18) == 2) || func_380(Local_1038.f_18) == 3)
		{
			if (iParam0 > 10000)
			{
				switch (UNK_0x09AC81E49EA267F7(false, 4))
				{
					case 0:
						return "female_reaction_good_var_01";
					case 1:
						return "female_reaction_good_var_02";
					case 2:
						return "female_reaction_good_var_03";
					case 3:
						return "female_reaction_good_var_04";
					default:
						break;
				}
			}
			else if (iParam0 > -10000)
			{
				switch (UNK_0x09AC81E49EA267F7(false, 7))
				{
					case 0:
						return "female_reaction_impartial_var_01";
					case 1:
						return "female_reaction_impartial_var_02";
					case 2:
						return "female_reaction_impartial_var_03";
					case 3:
						return "female_reaction_impartial_var_04";
					case 4:
						return "female_reaction_impartial_var_05";
					case 5:
						return "female_reaction_impartial_var_06";
					case 6:
						return "female_reaction_impartial_var_07";
					default:
						break;
				}
			}
			else
			{
				switch (UNK_0x09AC81E49EA267F7(false, 4))
				{
					case 0:
						return "female_reaction_bad_var_01";
					case 1:
						return "female_reaction_bad_var_02";
					case 2:
						return "female_reaction_bad_var_03";
					case 3:
						return "female_reaction_bad_var_04";
					default:
						break;
				}
			}
		}
		else if (iParam0 > 1000)
		{
			switch (UNK_0x09AC81E49EA267F7(false, 4))
			{
				case 0:
					return "female_reaction_good_var_01";
				case 1:
					return "female_reaction_good_var_02";
				case 2:
					return "female_reaction_good_var_03";
				case 3:
					return "female_reaction_good_var_04";
				default:
					break;
			}
		}
		else if (iParam0 > -1000)
		{
			switch (UNK_0x09AC81E49EA267F7(false, 7))
			{
				case 0:
					return "female_reaction_impartial_var_01";
				case 1:
					return "female_reaction_impartial_var_02";
				case 2:
					return "female_reaction_impartial_var_03";
				case 3:
					return "female_reaction_impartial_var_04";
				case 4:
					return "female_reaction_impartial_var_05";
				case 5:
					return "female_reaction_impartial_var_06";
				case 6:
					return "female_reaction_impartial_var_07";
				default:
					break;
			}
		}
		else
		{
			switch (UNK_0x09AC81E49EA267F7(false, 4))
			{
				case 0:
					return "female_reaction_bad_var_01";
				case 1:
					return "female_reaction_bad_var_02";
				case 2:
					return "female_reaction_bad_var_03";
				case 3:
					return "female_reaction_bad_var_04";
				default:
					break;
			}
		}
	}
	else if ((func_417(UNK_0xD803B885F5E47A62()) || func_380(Local_1038.f_18) == 2) || func_380(Local_1038.f_18) == 3)
	{
		if (iParam0 > 10000)
		{
			switch (UNK_0x09AC81E49EA267F7(false, 4))
			{
				case 0:
					return "reaction_good_var_01";
				case 1:
					return "reaction_good_var_02";
				case 2:
					return "reaction_good_var_03";
				case 3:
					return "reaction_good_var_04";
				default:
					break;
			}
		}
		else if (iParam0 > -10000)
		{
			switch (UNK_0x09AC81E49EA267F7(false, 8))
			{
				case 0:
					return "reaction_impartial_var_01";
				case 1:
					return "reaction_impartial_var_02";
				case 2:
					return "reaction_impartial_var_03";
				case 3:
					return "reaction_impartial_var_04";
				case 4:
					return "reaction_impartial_var_05";
				case 5:
					return "reaction_impartial_var_06";
				case 6:
					return "reaction_impartial_var_07";
				case 7:
					return "reaction_impartial_var_08";
				default:
					break;
			}
		}
		else
		{
			switch (UNK_0x09AC81E49EA267F7(false, 4))
			{
				case 0:
					return "reaction_bad_var_01";
				case 1:
					return "reaction_bad_var_02";
				case 2:
					return "reaction_bad_var_03";
				case 3:
					return "reaction_bad_var_04";
				default:
					break;
			}
		}
	}
	else if (iParam0 > 1000)
	{
		switch (UNK_0x09AC81E49EA267F7(false, 4))
		{
			case 0:
				return "reaction_good_var_01";
			case 1:
				return "reaction_good_var_02";
			case 2:
				return "reaction_good_var_03";
			case 3:
				return "reaction_good_var_04";
			default:
				break;
		}
	}
	else if (iParam0 > -1000)
	{
		switch (UNK_0x09AC81E49EA267F7(false, 8))
		{
			case 0:
				return "reaction_impartial_var_01";
			case 1:
				return "reaction_impartial_var_02";
			case 2:
				return "reaction_impartial_var_03";
			case 3:
				return "reaction_impartial_var_04";
			case 4:
				return "reaction_impartial_var_05";
			case 5:
				return "reaction_impartial_var_06";
			case 6:
				return "reaction_impartial_var_07";
			case 7:
				return "reaction_impartial_var_08";
			default:
				break;
		}
	}
	else
	{
		switch (UNK_0x09AC81E49EA267F7(false, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			case 1:
				return "reaction_bad_var_02";
			case 2:
				return "reaction_bad_var_03";
			case 3:
				return "reaction_bad_var_04";
			default:
				break;
		}
	}
	return "";
}

void func_151(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	bool bVar0;
	bool bVar1;

	if (func_154(sParam6))
	{
		sParam6 = "NUMBER";
	}
	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_153(3, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_152(3, bVar0);
		Global_1378678.f_2764[bVar0] = uParam0;
		StringCopy(&(Global_1378678.f_2764.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_2764.f_183[bVar0] = iParam3;
		Global_1378678.f_2764.f_172[bVar0] = iParam2;
		Global_1378678.f_2764.f_205[bVar0] = iParam4;
		Global_1378678.f_2764.f_216[bVar0] = iParam5;
		StringCopy(&(Global_1378678.f_2764.f_259[bVar0 /*16*/]), sParam6, 64);
		Global_1378678.f_2764.f_420[bVar0] = iParam7;
		Global_1378678.f_2764.f_453[bVar0] = iParam8;
		Global_1378678.f_2764.f_431[bVar0] = iParam9;
		Global_1378678.f_2764.f_442[bVar0] = iParam10;
		Global_1378678.f_2764.f_464[bVar0] = iParam11;
		Global_1378678.f_2764.f_475[bVar0] = iParam12;
		Global_1378678.f_2764.f_486[bVar0] = iParam13;
		Global_1378678.f_2764.f_497[bVar0] = iParam14;
	}
}

void func_152(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), bParam1);
}

bool func_153(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], bParam1);
}

bool func_154(bool bParam0)
{
	if (UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		return true;
	}
	else if (UNK_0x7F8A39872A07D2CE(bParam0, "") || UNK_0x7F8A39872A07D2CE(bParam0, "0"))
	{
		return true;
	}
	return false;
}

bool func_155(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_143() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || func_157(bParam0))
	{
		return func_156(bParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return true;
}

int func_156(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;

	if (bParam0 <= 0)
	{
	}
	else if (func_146(iParam1))
	{
	}
	else
	{
		iVar0 = func_398();
		iVar1 = (iVar0 - bParam0);
		if (iVar1 < 0 && (!func_143() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			bParam0 = iVar0;
		}
		if (func_124(uParam2, iParam1, bParam0))
		{
			iVar2 = (Global_1696044 - func_398());
			if (iParam1 == 1)
			{
				Global_2460612 = 1;
			}
			else if (iVar2 >= Global_262145.f_26404)
			{
				Global_2460613 = 1;
			}
			func_123(iVar2, 0);
			func_121();
			func_120();
			Global_1696044 = (Global_1696044 - iVar2);
			Var3 = func_106(iParam1);
			Var3.f_1 = func_105(iParam1, iParam3, iParam4);
			if (func_104(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (UNK_0x62F8C2EDB26F57B3(-1) + UNK_0x3A6D64D2A1228113());
			Var3.f_6 = Global_1696044;
			Var3.f_7 = iParam5;
			UNK_0xB1C8602C4408B407(&Var3);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_157(bool bParam0)
{
	int iVar0;

	if (func_333())
	{
		return false;
	}
	iVar0 = func_398();
	if (iVar0 < bParam0)
	{
		return false;
	}
	return true;
}

void func_158(bool bParam0)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
}

void func_159(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_153(7, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_152(7, bVar0);
		Global_1378678.f_4562[bVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_4562.f_172[bVar0] = iParam2;
		Global_1378678.f_4562.f_216[bVar0] = iParam3;
		Global_1378678.f_4562.f_183[bVar0] = iParam4;
		Global_1378678.f_4562.f_194[bVar0] = iParam5;
		Global_1378678.f_4562.f_249[bVar0] = iParam6;
		Global_1378678.f_4562.f_260[bVar0] = iParam7;
		Global_1378678.f_4562.f_205[bVar0] = iParam8;
		Global_1378678.f_4562.f_314[bVar0] = iParam9;
		Global_1378678.f_4562.f_325[bVar0] = iParam10;
		Global_1378678.f_4562.f_357[bVar0] = iParam11;
		Global_1378678.f_4562.f_238[bVar0] = iParam12;
		Global_1378678.f_4562.f_271[bVar0] = iParam13;
		Global_1378678.f_4562.f_368[bVar0] = iParam14;
		Global_1378678.f_4562.f_379[bVar0] = iParam15;
		Global_1378678.f_4562.f_390[bVar0] = iParam16;
		Global_1378678.f_4562.f_227[bVar0] = iParam17;
	}
}

bool func_160(int iParam0)
{
	if ((Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 == 2 || Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 == 3) || func_417(UNK_0xD803B885F5E47A62()))
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				return true;
			default:
				break;
		}
	}
	return false;
}

void func_161(int iParam0)
{
	Local_1038.f_797 = iParam0;
}

void func_162()
{
	bool bVar0;
	int iVar1;

	UNK_0x38C3A68D7861DCFD(2, 209, 1);
	UNK_0x558EC149EB2BC0A2(2, 209);
	if (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, 3))
	{
		if ((UNK_0x9A01369A10646AFE(2, 209) && !UNK_0x7FEE810EE9E768EB(2, 210)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, false))
		{
			UNK_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
			UNK_0x5D96D8530B3D0904(&(Local_1038.f_20), 3);
		}
	}
	else
	{
		bVar0 = "CasinoUI_Cards_Three";
		if ((func_380(Local_1038.f_18) == 2 || func_380(Local_1038.f_18) == 3) || func_417(UNK_0xD803B885F5E47A62()))
		{
			bVar0 = "CasinoUI_Cards_Three_High";
		}
		UNK_0x0D3BE1DE0262A012(bVar0, 0);
		if (func_296(0, -1, 0) && UNK_0x27117E2CDD4D67C3(bVar0))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, 4))
			{
				func_295(0, 0);
				func_293(1, bVar0, bVar0);
				func_292("TCP_HANDS");
				func_180(1, 2, 2, 2, 1);
				func_179(1, 1, 1, 1, 0);
				iVar1 = 0;
				func_175(iVar1, "TCP_HAND1", 0, 1, 0, 0);
				func_175(iVar1, "TCP_10", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_9", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_8", 1, 1, 0, 0);
				func_163(59, 0);
				iVar1 = 1;
				func_175(iVar1, "TCP_HAND2", 0, 1, 0, 0);
				func_175(iVar1, "TCP_5", 1, 1, 0, 0);
				func_163(57, 0);
				func_175(iVar1, "TCP_5", 1, 1, 0, 0);
				func_163(58, 0);
				func_175(iVar1, "TCP_5", 1, 1, 0, 0);
				func_163(56, 0);
				iVar1 = 2;
				func_175(iVar1, "TCP_HAND3", 0, 1, 0, 0);
				func_175(iVar1, "TCP_2", 1, 1, 0, 0);
				func_163(57, 0);
				func_175(iVar1, "TCP_3", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_4", 1, 1, 0, 0);
				func_163(57, 0);
				iVar1 = 3;
				func_175(iVar1, "TCP_HAND4", 0, 1, 0, 0);
				func_175(iVar1, "TCP_A", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_Q", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_9", 1, 1, 0, 0);
				func_163(59, 0);
				iVar1 = 4;
				func_175(iVar1, "TCP_HAND5", 0, 1, 0, 0);
				func_175(iVar1, "TCP_K", 1, 1, 0, 0);
				func_163(57, 0);
				func_175(iVar1, "TCP_K", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_7", 1, 1, 0, 0);
				func_163(56, 0);
				iVar1 = 5;
				func_175(iVar1, "TCP_HAND6", 0, 1, 0, 0);
				func_175(iVar1, "TCP_A", 1, 1, 0, 0);
				func_163(56, 0);
				func_175(iVar1, "TCP_7", 1, 1, 0, 0);
				func_163(57, 0);
				func_175(iVar1, "TCP_3", 1, 1, 0, 0);
				func_163(59, 0);
				func_291(-1, 1, 1);
				UNK_0x5D96D8530B3D0904(&(Local_1038.f_20), 4);
			}
			func_261(1, -1, 1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1);
		}
		if (UNK_0x9A01369A10646AFE(2, 202))
		{
			UNK_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
			func_258(1, -1);
			UNK_0xF5A41F3D3B38EFE3(bVar0);
			iLocal_1942 = 1;
			Local_1038.f_20 = 0;
			UNK_0x5D96D8530B3D0904(&(Local_1038.f_20), 2);
		}
	}
}

void func_163(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	if (Global_22350.f_5224 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	Global_22350.f_4433[Global_22350.f_5224] = iParam0;
	Global_22350.f_5224++;
	Global_22350.f_2124[Global_22350.f_5742 /*5*/][Global_22350.f_5743] = 4;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_172();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_165(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_164();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

float func_164()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;

	iVar0 = 0;
	while (iVar0 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_165(Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > UNK_0x9153358B38685E6E(0.35f, 0))
	{
		return fVar2;
	}
	return UNK_0x9153358B38685E6E(0.35f, 0);
}

bool func_165(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;

	StringCopy(&cVar0, func_171(iParam0), 64);
	StringCopy(&cVar16, func_168(iParam0, bParam1), 64);
	if (UNK_0x12AB0310C2281427(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			UNK_0xE5AC5CA7914F5BAE(&iVar32, &iVar33);
			fVar35 = UNK_0x33D480CCE15C991A(0);
			if (func_167())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_167())
			{
				fVar34 = 1f;
			}
			if (UNK_0x8A22C4C08282BF26(joaat("DIRECTOR_MODE")) > 0)
			{
				UNK_0x8A462DAA7D1D9008(&iVar32, &iVar33);
			}
			iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar32) / fVar34));
			iVar33 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) / fVar34));
		}
		else
		{
			UNK_0x8A462DAA7D1D9008(&iVar32, &iVar33);
		}
		vVar37 = { UNK_0xDE43A059FBFFF38A(&cVar0, &cVar16) };
		vVar37.x = (vVar37.x * (func_166(iParam0) / fVar34));
		vVar37.f_1 = (vVar37.y * (func_166(iParam0) / fVar34));
		if (!bParam2)
		{
			vVar37.x = (vVar37.x - 2f);
			vVar37.f_1 = (vVar37.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar37.x = 288f;
			vVar37.f_1 = 106f;
		}
		if (iParam0 == 29 && UNK_0x12AB0310C2281427(&(Global_22350.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			vVar37.x = 106f;
			vVar37.f_1 = 106f;
		}
		*fParam3 = ((vVar37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((vVar37.y / IntToFloat(iVar33)) / (vVar37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!UNK_0x0D71AFA59EF5104F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return true;
	}
	return false;
}

float func_166(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
		case 61:
			return 0.8f;
	}
	return 1f;
}

bool func_167()
{
	int iVar0;
	int iVar1;
	float fVar2;

	UNK_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return true;
	}
	return false;
}

char* func_168(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;

	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0 /*16*/])))
	{
		if (UNK_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_170(UNK_0xD803B885F5E47A62()) };
			if (UNK_0x205FB5BBF81D8900(&Var19, &uVar3))
			{
				return func_169(&uVar3);
			}
		}
		else
		{
			return func_169(&(Global_22350.f_7029[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_169(var uParam0)
{
	return uParam0;
}

struct<13> func_170(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

char* func_171(int iParam0)
{
	var uVar0;
	struct<13> Var16;

	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0 /*16*/])))
	{
		if (UNK_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_170(UNK_0xD803B885F5E47A62()) };
			UNK_0x205FB5BBF81D8900(&Var16, &uVar0);
			return func_169(&uVar0);
		}
		else
		{
			return func_169(&(Global_22350.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

float func_172()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_173(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
	{
		UNK_0xBBA442527B4BB1A6(&(Global_22350.f_73[Global_22350.f_5742 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				UNK_0x6B012227B3921E18(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				UNK_0x6B012227B3921E18(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 2)
		{
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				UNK_0x6D99DF8263D35CE5(Global_22350.f_3918[((Global_22350.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 3)
		{
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				UNK_0x21994591120B91F0(Global_22350.f_4175[((Global_22350.f_5223 - iVar4) + iVar10)], Global_22350.f_4304[((Global_22350.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 5)
		{
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				UNK_0xD06AC7C87A34A6AD(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 6)
		{
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				UNK_0x6B012227B3921E18(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 7)
		{
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				UNK_0xD06AC7C87A34A6AD(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 9)
		{
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				UNK_0xD06AC7C87A34A6AD(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
	{
		fVar0 = UNK_0x79E367314AFBB5CA(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_165(Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_173(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (bParam2)
	{
		if (bParam3)
		{
			func_174(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &bVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				UNK_0xA402F6C87C08815C(14, &iVar0, &iVar1, &iVar2, &bVar3);
				UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				UNK_0xA402F6C87C08815C(12, &iVar0, &iVar1, &iVar2, &bVar3);
				UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			UNK_0x7178F32F6742C936(155, 155, 155, 255);
		}
		else
		{
			UNK_0x7178F32F6742C936(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			UNK_0x7178F32F6742C936(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &bVar3);
			UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bVar3);
		}
	}
	else if (bParam0)
	{
		UNK_0x7178F32F6742C936(155, 155, 155, 255);
	}
	else
	{
		UNK_0x7178F32F6742C936(155, 155, 155, 255);
	}
	UNK_0xD3539A877EC25E86(0f, 0.35f);
	UNK_0xEEF67251E263A87F(1);
	if (bParam5)
	{
		UNK_0xD3539A877EC25E86(0f, 0.425f);
		UNK_0x7BBAC160090910C3(4);
	}
	else if (bParam6)
	{
		UNK_0xD3539A877EC25E86(0f, 0.425f);
		UNK_0x7BBAC160090910C3(6);
	}
	else
	{
		UNK_0x7BBAC160090910C3(0);
	}
	UNK_0xF1F881BAAAFB43B1(0f, 1f);
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	UNK_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_174(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 8;
			*iParam2 = 8;
			*iParam3 = 8;
			break;
		case 1:
			*iParam1 = 37;
			*iParam2 = 37;
			*iParam3 = 39;
			break;
		case 22:
			*iParam1 = 140;
			*iParam2 = 146;
			*iParam3 = 154;
			break;
		case 23:
			*iParam1 = 91;
			*iParam2 = 93;
			*iParam3 = 94;
			break;
		case 6:
			*iParam1 = 81;
			*iParam2 = 84;
			*iParam3 = 89;
			break;
		case 111:
			*iParam1 = 240;
			*iParam2 = 240;
			*iParam3 = 240;
			break;
		case 28:
			*iParam1 = 150;
			*iParam2 = 8;
			*iParam3 = 0;
			break;
		case 34:
			*iParam1 = 38;
			*iParam2 = 3;
			*iParam3 = 6;
			break;
		case 88:
			*iParam1 = 245;
			*iParam2 = 137;
			*iParam3 = 15;
			break;
		case 45:
			*iParam1 = 74;
			*iParam2 = 22;
			*iParam3 = 7;
			break;
		case 56:
			*iParam1 = 45;
			*iParam2 = 58;
			*iParam3 = 53;
			break;
		case 58:
			*iParam1 = 71;
			*iParam2 = 120;
			*iParam3 = 60;
			break;
		case 54:
			*iParam1 = 77;
			*iParam2 = 98;
			*iParam3 = 104;
			break;
		case 73:
			*iParam1 = 14;
			*iParam2 = 49;
			*iParam3 = 109;
			break;
		case 68:
			*iParam1 = 22;
			*iParam2 = 34;
			*iParam3 = 72;
			break;
		case 140:
			*iParam1 = 0;
			*iParam2 = 174;
			*iParam3 = 239;
			break;
		case 131:
			*iParam1 = 255;
			*iParam2 = 183;
			*iParam3 = 0;
			break;
		case 90:
			*iParam1 = 142;
			*iParam2 = 140;
			*iParam3 = 70;
			break;
		case 97:
			*iParam1 = 156;
			*iParam2 = 141;
			*iParam3 = 113;
			break;
		case 89:
			*iParam1 = 145;
			*iParam2 = 115;
			*iParam3 = 71;
			break;
		case 105:
			*iParam1 = 98;
			*iParam2 = 68;
			*iParam3 = 40;
			break;
		case 100:
			*iParam1 = 124;
			*iParam2 = 27;
			*iParam3 = 68;
			break;
		case 99:
			*iParam1 = 114;
			*iParam2 = 42;
			*iParam3 = 63;
			break;
		case 136:
			*iParam1 = 246;
			*iParam2 = 151;
			*iParam3 = 153;
			break;
		case 49:
			*iParam1 = 32;
			*iParam2 = 32;
			*iParam3 = 44;
			break;
		case 146:
			*iParam1 = 26;
			*iParam2 = 1;
			*iParam3 = 23;
			break;
		default:
			*iParam1 = 255;
			*iParam2 = 255;
			*iParam3 = 255;
			break;
	}
}

void func_175(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;

	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 1)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]), bParam1, 24);
	if (!UNK_0xEA6BC48857E0AC4C(bParam1) && !UNK_0xEF07223F00EBE9C9(bParam1))
	{
	}
	Global_22350.f_1610[Global_22350.f_5220] = bParam3;
	Global_22350.f_1867[Global_22350.f_5220] = iParam4;
	Global_22350.f_5220++;
	if (!bParam3)
	{
		func_178(Global_22350.f_5218, 1);
	}
	else
	{
		func_178(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_177(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_165(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_176(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
			if (fVar4 > Global_22350.f_5745[iParam0])
			{
				Global_22350.f_5745[iParam0] = fVar4;
			}
		}
	}
	UNK_0x5D96D8530B3D0904(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_176(bool bParam0)
{
	if (!UNK_0xEF07223F00EBE9C9(bParam0))
	{
	}
	return UNK_0x9153358B38685E6E(0.35f, 0);
}

float func_177(bool bParam0)
{
	if (!UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		if (UNK_0x12AB0310C2281427(bParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_173(0, 1, 0, 0, 0, 0, 0);
	UNK_0xBBA442527B4BB1A6(bParam0);
	return UNK_0x79E367314AFBB5CA(1);
}

void func_178(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_179(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5056[0] = iParam0;
	Global_22350.f_5056[1] = iParam1;
	Global_22350.f_5056[2] = iParam2;
	Global_22350.f_5056[3] = iParam3;
	Global_22350.f_5056[4] = iParam4;
	Global_22350.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22350.f_5226++;
	}
}

void func_180(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_181()
{
	bool bVar0;

	if (UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, 2))
	{
		UNK_0x0674E58A79778E99(&(Local_1038.f_20), 2);
	}
	UNK_0x38C3A68D7861DCFD(2, 210, 1);
	UNK_0x558EC149EB2BC0A2(2, 210);
	if (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, false))
	{
		if ((UNK_0x9A01369A10646AFE(2, 210) && !UNK_0x7FEE810EE9E768EB(2, 209)) && !UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, 3))
		{
			UNK_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
			UNK_0x5D96D8530B3D0904(&(Local_1038.f_20), false);
		}
	}
	else
	{
		bVar0 = "CasinoUI_Cards_Three";
		if ((func_380(Local_1038.f_18) == 2 || func_380(Local_1038.f_18) == 3) || func_417(UNK_0xD803B885F5E47A62()))
		{
			bVar0 = "CasinoUI_Cards_Three_High";
		}
		UNK_0x0D3BE1DE0262A012(bVar0, 0);
		if (func_296(0, -1, 0) && UNK_0x27117E2CDD4D67C3(bVar0))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, true))
			{
				func_295(0, 0);
				func_293(1, bVar0, bVar0);
				func_292("TCP_RULES");
				func_185(1, iLocal_1942, 6);
				func_184(1, 1, 1, 1, 1);
				func_291(-1, 1, 1);
				func_290(func_183(iLocal_1942), 0, 0);
				func_289(func_182(iLocal_1942));
				UNK_0x5D96D8530B3D0904(&(Local_1038.f_20), true);
			}
			func_261(1, -1, 1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1);
		}
		if (UNK_0x9A01369A10646AFE(2, 202))
		{
			UNK_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
			func_258(1, -1);
			UNK_0xF5A41F3D3B38EFE3(bVar0);
			iLocal_1942 = 1;
			Local_1038.f_20 = 0;
			UNK_0x5D96D8530B3D0904(&(Local_1038.f_20), 2);
		}
		else if (UNK_0x9A01369A10646AFE(2, 190))
		{
			iLocal_1942++;
			if (iLocal_1942 > 6)
			{
				iLocal_1942 = 1;
			}
			UNK_0x0674E58A79778E99(&(Local_1038.f_20), true);
		}
		else if (UNK_0x9A01369A10646AFE(2, 189))
		{
			iLocal_1942 = (iLocal_1942 - 1);
			if (iLocal_1942 < 1)
			{
				iLocal_1942 = 6;
			}
			UNK_0x0674E58A79778E99(&(Local_1038.f_20), true);
		}
	}
}

char* func_182(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "TCP_RULE_1";
		case 2:
			return "TCP_RULE_2";
		case 3:
			return "TCP_RULE_3";
		case 4:
			return "TCP_RULE_4";
		case 5:
			return "TCP_RULE_5";
		case 6:
			if ((func_380(Local_1038.f_18) == 2 || func_380(Local_1038.f_18) == 3) || func_417(UNK_0xD803B885F5E47A62()))
			{
				return "TCP_RULE_6b";
			}
			else
			{
				return "TCP_RULE_6a";
			}
			break;
	}
	return "";
}

char* func_183(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "TCP_RULE_1T";
		case 2:
			return "TCP_RULE_2T";
		case 3:
			return "TCP_RULE_3T";
		case 4:
			return "TCP_RULE_4T";
		case 5:
			return "TCP_RULE_5T";
		case 6:
			if ((func_380(Local_1038.f_18) == 2 || func_380(Local_1038.f_18) == 3) || func_417(UNK_0xD803B885F5E47A62()))
			{
				return "TCP_RULE_6Tb";
			}
			else
			{
				return "TCP_RULE_6Ta";
			}
			break;
	}
	return "";
}

void func_184(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5075[0] = iParam0;
	Global_22350.f_5075[1] = iParam1;
	Global_22350.f_5075[2] = iParam2;
	Global_22350.f_5075[3] = iParam3;
	Global_22350.f_5075[4] = iParam4;
}

void func_185(int iParam0, int iParam1, int iParam2)
{
	Global_22350.f_5735 = iParam0;
	Global_22350.f_5736 = iParam1;
	Global_22350.f_5737 = iParam2;
}

void func_186(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_187(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam3 == 1 || UNK_0xB8E3620B82AD47D7(2))
	{
		*uParam2 = 0;
		if (UNK_0x83D8570832F172A7(*uParam0))
		{
			if (UNK_0x0EFF6B4415DAF4A1())
			{
				UNK_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				UNK_0x1200CC973A2399C8(false);
				UNK_0x7E60D21B163E9D56();
			}
			UNK_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL");
			UNK_0x7E60D21B163E9D56();
		}
		func_193(uParam2);
	}
	if (Global_1315716 < 2)
	{
		func_192(1);
	}
	if (*uParam2 == 0)
	{
		if (!UNK_0x83D8570832F172A7(*uParam0))
		{
			*uParam0 = UNK_0xB01F55A0FD1CFD49("instructional_buttons");
		}
		if (UNK_0x83D8570832F172A7(*uParam0))
		{
			UNK_0x7526D52FFFAB1652(*uParam0, "CLEAR_ALL");
			if (UNK_0x0EFF6B4415DAF4A1())
			{
				UNK_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				UNK_0x1200CC973A2399C8(true);
				UNK_0x7E60D21B163E9D56();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_689, bVar0))
				{
					UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(bVar0);
					if (!UNK_0xEAE0D21A50E6C7F4(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_191(UNK_0xF59058FCB716F903(iVar1, iVar2, true));
						if (iVar3 < 361)
						{
							func_191(UNK_0xF59058FCB716F903(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_191(UNK_0xE32F7AC5E6DF304A(iVar4, iVar5, true));
					}
					if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_686, bVar0))
					{
						UNK_0x7ACC3006A87F8B39(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							UNK_0x164431059FF80580(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							UNK_0x6D99DF8263D35CE5(uParam2->f_1[bVar0 /*57*/].f_36);
							if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_687, bVar0))
							{
								UNK_0x6D99DF8263D35CE5(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						UNK_0x779B34565F4D71B1();
					}
					else if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_688, bVar0))
					{
						UNK_0x7ACC3006A87F8B39(&(uParam2->f_1[bVar0 /*57*/].f_32));
						UNK_0xD06AC7C87A34A6AD(&(uParam2->f_1[bVar0 /*57*/].f_38));
						UNK_0x779B34565F4D71B1();
					}
					else
					{
						func_190(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (UNK_0x0EFF6B4415DAF4A1())
					{
						if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_691, bVar0))
						{
							UNK_0x1200CC973A2399C8(true);
							UNK_0x3CAEA85DA607305E(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							UNK_0x1200CC973A2399C8(false);
							UNK_0x3CAEA85DA607305E(361);
						}
					}
					UNK_0x7E60D21B163E9D56();
				}
				else
				{
					UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(bVar0);
					func_191(&(uParam2->f_1[bVar0 /*57*/]));
					if (!UNK_0xEA6BC48857E0AC4C(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_191(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_686, bVar0))
					{
						UNK_0x7ACC3006A87F8B39(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							UNK_0x164431059FF80580(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							UNK_0x6D99DF8263D35CE5(uParam2->f_1[bVar0 /*57*/].f_36);
							if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_687, bVar0))
							{
								UNK_0x6D99DF8263D35CE5(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						UNK_0x779B34565F4D71B1();
					}
					else if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_688, bVar0))
					{
						UNK_0x7ACC3006A87F8B39(&(uParam2->f_1[bVar0 /*57*/].f_32));
						UNK_0xD06AC7C87A34A6AD(&(uParam2->f_1[bVar0 /*57*/].f_38));
						UNK_0x779B34565F4D71B1();
					}
					else
					{
						func_190(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (UNK_0x0EFF6B4415DAF4A1())
					{
						UNK_0x1200CC973A2399C8(false);
						UNK_0x3CAEA85DA607305E(361);
					}
					UNK_0x7E60D21B163E9D56();
				}
				bVar0++;
			}
			UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
			UNK_0x7C19E5E4784BD7CF(uParam2->f_699);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x7E60D21B163E9D56();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_189(*uParam0, uParam1);
	}
	func_188();
}

void func_188()
{
	UNK_0x3584F71E5CA29322(7);
	UNK_0x3584F71E5CA29322(6);
	UNK_0x3584F71E5CA29322(8);
	UNK_0x3584F71E5CA29322(9);
}

void func_189(int iParam0, var uParam1)
{
	UNK_0x6567AE843FADBA94(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_190(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_191(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

void func_192(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_193(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_194(var uParam0)
{
	return uParam0->f_692;
}

void func_195(var uParam0, float fParam1)
{
	uParam0->f_699 = fParam1;
}

struct<9> func_196()
{
	struct<9> Var0;

	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return 12;
		case 1:
		case 5:
		case 9:
		case 13:
			return 13;
		case 2:
		case 6:
		case 10:
		case 14:
			return 14;
		case 3:
		case 7:
		case 11:
		case 15:
			return 15;
		default:
			break;
	}
	return 0;
}

void func_198(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	bool bVar0;

	if (uParam3->f_693 >= 12)
	{
		return;
	}
	bVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[bVar0 /*57*/].f_32), sParam2, 16);
	UNK_0x5D96D8530B3D0904(&(uParam3->f_689), bVar0);
	uParam3->f_1[bVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[bVar0 /*57*/].f_55 = iParam1;
	UNK_0x5D96D8530B3D0904(&(uParam3->f_690), bVar0);
	uParam3->f_693++;
}

void func_199(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;

	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

void func_200(var uParam0)
{
	func_201(uParam0);
	uParam0->f_692 = 1;
}

void func_201(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 361;
		uParam0->f_1[iVar0 /*57*/].f_56 = 361;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

var func_202(bool bParam0)
{
	if (func_148())
	{
		if (!bParam0)
		{
			switch (UNK_0x09AC81E49EA267F7(false, 8))
			{
				case 0:
					Local_1038.f_796 = "female_idle_cardgames_var_01";
					break;
				case 1:
					Local_1038.f_796 = "female_idle_cardgames_var_02";
					break;
				case 2:
					Local_1038.f_796 = "female_idle_cardgames_var_03";
					break;
				case 3:
					Local_1038.f_796 = "female_idle_cardgames_var_04";
					break;
				case 4:
					Local_1038.f_796 = "female_idle_cardgames_var_05";
					break;
				case 5:
					Local_1038.f_796 = "female_idle_cardgames_var_06";
					break;
				case 6:
					Local_1038.f_796 = "female_idle_cardgames_var_07";
					break;
				case 7:
					Local_1038.f_796 = "female_idle_cardgames_var_08";
					break;
			}
		}
	}
	else if (!bParam0)
	{
		switch (UNK_0x09AC81E49EA267F7(false, 13))
		{
			case 0:
				Local_1038.f_796 = "idle_cardgames_var_01";
				break;
			case 1:
				Local_1038.f_796 = "idle_cardgames_var_02";
				break;
			case 2:
				Local_1038.f_796 = "idle_cardgames_var_03";
				break;
			case 3:
				Local_1038.f_796 = "idle_cardgames_var_04";
				break;
			case 4:
				Local_1038.f_796 = "idle_cardgames_var_05";
				break;
			case 5:
				Local_1038.f_796 = "idle_cardgames_var_06";
				break;
			case 6:
				Local_1038.f_796 = "idle_cardgames_var_07";
				break;
			case 7:
				Local_1038.f_796 = "idle_cardgames_var_08";
				break;
			case 8:
				Local_1038.f_796 = "idle_cardgames_var_09";
				break;
			case 9:
				Local_1038.f_796 = "idle_cardgames_var_10";
				break;
			case 10:
				Local_1038.f_796 = "idle_cardgames_var_11";
				break;
			case 11:
				Local_1038.f_796 = "idle_cardgames_var_12";
				break;
			case 12:
				Local_1038.f_796 = "idle_cardgames_var_13";
				break;
		}
	}
	return Local_1038.f_796;
}

bool func_203()
{
	if (func_204() == 0)
	{
		return true;
	}
	return false;
}

int func_204()
{
	return Global_1312467.f_18;
}

void func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_113();
	iVar1 = UNK_0xDD0E7998AE8AD485();
	iVar2 = func_111();
	if (iVar0 == 0)
	{
		func_110();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26397)
	{
		func_109();
		iVar2 = 0;
	}
	if ((iVar2 - iParam0) >= Global_262145.f_26398)
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_WON_GD"), Global_262145.f_26398);
		func_109();
		Global_2460613 = 1;
	}
	else
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_WON_GD"), (iVar2 - iParam0));
	}
}

int func_206(var uParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			return UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), *uParam0);
		}
		else
		{
			return UNK_0x519D13E6C1911A0B(UNK_0x6794171A1021C2D8(), *uParam0);
		}
	}
	return UNK_0x519D13E6C1911A0B(UNK_0x1C0640BA9A7327B3(), *uParam0);
}

bool func_207()
{
	if ((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && (!UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 9) && Local_1901.f_14 > 0))
	{
		return true;
	}
	return false;
}

int func_208()
{
	if (UNK_0x0D03A641486A2001() != func_209())
	{
		return UNK_0x3DDF605689C8A861(UNK_0x4B2BFE4A3BC248ED(UNK_0x0D03A641486A2001()));
	}
	return 0;
}

int func_209()
{
	return -1;
}

void func_210()
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	vector3 vVar19;
	bool bVar22;
	float fVar23;

	if (!UNK_0x06F8112AA79C53D9(2, 207))
	{
		if (bLocal_1948)
		{
			func_300(UNK_0xD803B885F5E47A62(), 0, 256, 0);
		}
		bLocal_1948 = false;
	}
	if (!UNK_0x06F8112AA79C53D9(2, 208))
	{
		if (bLocal_1947)
		{
			func_300(UNK_0xD803B885F5E47A62(), 0, 256, 0);
		}
		bLocal_1947 = false;
	}
	if ((((Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 >= 0 && !UNK_0x4FD68D5821EE3E19()) && !func_337()) && !UNK_0xE57E602827E07C9D()) && Local_116.f_576[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2] < 12)
	{
		if (Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/] > 0 && (UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 4) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2], func_197(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1))))
		{
			if ((((UNK_0x06F8112AA79C53D9(2, 207) && !UNK_0x06F8112AA79C53D9(2, 208)) && !bLocal_1947) && !func_72(&uLocal_1949)) && !UNK_0x9F4FE516EAACCFC5(Local_1038.f_13))
			{
				if (!bLocal_1948)
				{
					if (UNK_0xA4FD7964FEE91ED8(0) == 4)
					{
						bLocal_1943 = true;
					}
					func_300(UNK_0xD803B885F5E47A62(), 0, 0, 0);
					bLocal_1948 = true;
				}
			}
		}
		else
		{
			if (bLocal_1948)
			{
				func_300(UNK_0xD803B885F5E47A62(), 0, 256, 0);
			}
			bLocal_1948 = false;
		}
		if (Local_116.f_389[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*5*/] > 0)
		{
			if ((((UNK_0x06F8112AA79C53D9(2, 208) && !UNK_0x06F8112AA79C53D9(2, 207)) && !bLocal_1948) && !func_72(&uLocal_1949)) && !UNK_0x9F4FE516EAACCFC5(Local_1038.f_13))
			{
				if (UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
				{
					func_300(UNK_0xD803B885F5E47A62(), 0, 0, 0);
				}
				bLocal_1947 = true;
			}
		}
		else
		{
			if (bLocal_1947)
			{
				func_300(UNK_0xD803B885F5E47A62(), 0, 256, 0);
			}
			bLocal_1947 = false;
		}
	}
	else
	{
		if (bLocal_1948 || bLocal_1947)
		{
			func_300(UNK_0xD803B885F5E47A62(), 0, 256, 0);
		}
		bLocal_1948 = false;
		bLocal_1947 = false;
	}
	if (bLocal_1947 || bLocal_1948)
	{
		UNK_0x01861BC775A34949(1);
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 166, true);
		}
		if (!UNK_0x562F77A7F33D2E46("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			UNK_0x8BC9595FD2792B5D("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (!UNK_0x9F4FE516EAACCFC5(Local_1038.f_13))
		{
			Local_1038.f_13 = UNK_0x92B061D59B9B540A(joaat("DEFAULT_SCRIPTED_CAMERA"), 1);
			UNK_0x86F44313DFA8F00C(Local_1038.f_13, func_222(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1, Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, bLocal_1947), func_221(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1, Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, bLocal_1947), func_220(bLocal_1947), 0, 1, 1, 2);
			UNK_0x91F5B0244AAE6222(Local_1038.f_13, "HAND_SHAKE", 0.03f);
			UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
		}
		else if (bLocal_1947)
		{
			if (Local_116.f_5[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2])
			{
				if (!func_98("TCP_D_HAND", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0)))
				{
					func_97("TCP_D_HAND", func_101(func_9(&(Local_116.f_389[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
				}
			}
			else if (!func_335("TCP_D_HAND_D"))
			{
				func_158("TCP_D_HAND_D");
			}
			bVar0 = UNK_0x86CC98177DFF41EC(Local_1038.f_13);
			fVar1 = 50f;
			fVar1 = func_219();
			bVar0 = func_217(bVar0, fVar1, 0.2f, 4);
			UNK_0x86F44313DFA8F00C(Local_1038.f_13, func_222(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1, Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, bLocal_1947), func_221(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1, Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, bLocal_1947), bVar0, 0, 1, 1, 2);
		}
		else if (bLocal_1948)
		{
			if (bLocal_1943)
			{
				bVar2 = UNK_0x86CC98177DFF41EC(Local_1038.f_13);
				fVar3 = 50f;
				vVar4 = { UNK_0x17D61C69BA58F815(Local_1038.f_13, 2) };
				vVar7 = { 0f, 0f, 0f };
				vVar10 = { -38.1166f, -0.0930717f, -102.613f };
				vVar13 = { UNK_0xD06724447386BC29(Local_1038.f_13) };
				vVar16 = { 0f, 0f, 0f };
				vVar19 = { 966.621f, 32.009f, 116.621f };
				if (vVar4.z < 0f)
				{
					vVar4.f_2 = (vVar4.z + 360f);
				}
				vVar19 = { func_216(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1) };
				vVar10 = { func_215(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1) };
				fVar3 = func_219();
				if (vVar10.z < 0f)
				{
					vVar10.f_2 = (vVar10.z + 360f);
				}
				vVar7 = { func_213(vVar4, vVar10, 0.35f, 4) };
				vVar16 = { func_212(vVar13, vVar19, 0.35f, 4) };
				if (vVar7.z > 180f)
				{
					vVar7.f_2 = (vVar7.z - 360f);
				}
				else if (vVar7.z < -180f)
				{
					vVar7.f_2 = (vVar7.z + 360f);
				}
				if (func_211(vVar4, vVar10, 10f, 0) && func_211(vVar13, vVar19, 0.1f, 0))
				{
					bVar2 = func_217(bVar2, fVar3, 0.35f, 4);
				}
				UNK_0x86F44313DFA8F00C(Local_1038.f_13, vVar16, vVar7, bVar2, 0, 1, 1, 2);
			}
			else
			{
				bVar22 = UNK_0x86CC98177DFF41EC(Local_1038.f_13);
				fVar23 = 50f;
				fVar23 = func_219();
				bVar22 = func_217(bVar22, fVar23, 0.35f, 4);
				UNK_0x86F44313DFA8F00C(Local_1038.f_13, func_222(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1, Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, bLocal_1947), func_221(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1, Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, bLocal_1947), bVar22, 0, 1, 1, 2);
			}
		}
	}
	else
	{
		if (UNK_0x562F77A7F33D2E46("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			UNK_0x8910D3D58E0132B8("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (UNK_0x9F4FE516EAACCFC5(Local_1038.f_13))
		{
			UNK_0x01861BC775A34949(1);
			if (!func_72(&uLocal_1949) && bLocal_1943)
			{
				func_73(&uLocal_1949, 0, 0);
				UNK_0x82A772610883F395("PokerCamTransition", 0, 0);
			}
			else if (func_71(&uLocal_1949, 100, 0) || !bLocal_1943)
			{
				UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				UNK_0x9A8DDC7C522F5BF5(Local_1038.f_13, 0);
				UNK_0xA37A90C62806D848(1);
				func_69(&uLocal_1949);
				bLocal_1943 = false;
			}
		}
	}
	if (bLocal_1948 || bLocal_1943)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 4) || UNK_0xEAE0D21A50E6C7F4(Local_116.f_20[Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2], func_197(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1)))
		{
			if (!func_98("TCP_P_HAND", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0)))
			{
				func_97("TCP_P_HAND", func_101(func_9(&(Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0));
			}
		}
	}
}

int func_211(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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
					return 1;
				}
			}
		}
	}
	else if (UNK_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (UNK_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_212(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7)
{
	vector3 vVar0;

	vVar0.x = func_217(vParam0.x, vParam3.x, fParam6, iParam7);
	vVar0.f_1 = func_217(vParam0.y, vParam3.y, fParam6, iParam7);
	vVar0.f_2 = func_217(vParam0.z, vParam3.z, fParam6, iParam7);
	return vVar0;
}

Vector3 func_213(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7)
{
	vector3 vVar0;

	vVar0.x = func_214(vParam0.x, vParam3.x, fParam6, iParam7);
	vVar0.f_1 = func_214(vParam0.y, vParam3.y, fParam6, iParam7);
	vVar0.f_2 = func_214(vParam0.z, vParam3.z, fParam6, iParam7);
	return vVar0;
}

float func_214(bool bParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = UNK_0x755FF954DAE327E1((fParam1 - bParam0));
	if (fVar0 > 180f)
	{
		if (fParam1 > bParam0)
		{
			bParam0 = (bParam0 + 360f);
		}
		else
		{
			fParam1 = (fParam1 + 360f);
		}
	}
	fVar1 = func_217(bParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

Vector3 func_215(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_232(iParam0) };
	vVar3 = { -47.16f, 0f, -87.475f };
	return Vector(vVar0.z, 0f, 0f) + vVar3;
}

Vector3 func_216(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_232(iParam0) };
	return UNK_0x8A5E176FF719A014(func_361(iParam0), vVar0.z, 0.198f, 0f, 1.388f);
}

float func_217(bool bParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;

	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = SYSTEM::POW(fParam2, 2f);
			break;
		case 2:
		case 7:
			fParam2 = (1f - SYSTEM::POW((1f - fParam2), 2f));
			break;
		case 3:
		case 8:
			fParam2 = ((-SYSTEM::COS(func_218((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		case 4:
		case 9:
			fParam2 = (SYSTEM::POW(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (bParam0 + (fParam2 * (fParam1 - bParam0)));
			break;
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_217(bParam0, fParam1, fParam2, 0);
			break;
		case 5:
			fVar0 = (((1f - fParam2) * bParam0) + (fParam2 * fParam1));
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_217(bParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_218(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_219()
{
	if (bLocal_1947)
	{
		return 37.8425f;
	}
	return 43.3518f;
}

float func_220(bool bParam0)
{
	float fVar0;

	fVar0 = 44.6546f;
	if (bParam0)
	{
		fVar0 = 40.5607f;
	}
	if (bLocal_1943)
	{
		fVar0 = 50f;
	}
	return fVar0;
}

Vector3 func_221(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;

	if (bParam2)
	{
		vVar0 = { -74.52f, 0f, 0f };
	}
	else if (bLocal_1943)
	{
		return UNK_0x3B276DB863622D2E(2);
	}
	else
	{
		return func_215(iParam0);
	}
	return Vector(func_75(iParam1), 0f, 0f) + vVar0;
}

Vector3 func_222(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;

	if (bParam2)
	{
		vVar0 = { 0f, -0.02f, 1.62f };
	}
	else if (bLocal_1943)
	{
		return UNK_0x07DAF5424BC6779A();
	}
	else
	{
		return func_216(iParam0);
	}
	return UNK_0x8A5E176FF719A014(func_76(iParam1), func_75(iParam1), vVar0);
}

void func_223(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_224(int iParam0)
{
	if (Local_116.f_576[iParam0] == 2)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_6, false))
		{
			Local_1038.f_799 = { Local_116.f_168[iParam0 /*55*/] };
			UNK_0x5D96D8530B3D0904(&(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_6), false);
		}
	}
	else if (Local_116.f_576[iParam0] > 2 && UNK_0xEAE0D21A50E6C7F4(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_6, false))
	{
		if (Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/] > 0)
		{
			if (Local_1038.f_854 != Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/])
			{
				Local_1038.f_854 = { Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/] };
			}
			else
			{
				if (Local_1038.f_854.f_1[iLocal_1946] != Local_116.f_410[UNK_0xD803B885F5E47A62() /*5*/].f_1[iLocal_1946])
				{
					iLocal_1945 = 0;
					iLocal_1946 = 0;
					if (Global_262145.f_26036)
					{
						UNK_0x1787A8354D584871(&Local_1901);
					}
					func_375(1);
					UNK_0xA37A90C62806D848(1);
					return true;
				}
				iLocal_1946++;
				if (iLocal_1946 >= Local_1038.f_854)
				{
					iLocal_1946 = 0;
				}
			}
		}
		if (Local_116.f_168[iParam0 /*55*/].f_2[iLocal_1945] != Local_1038.f_799.f_2[iLocal_1945])
		{
			iLocal_1945 = 0;
			iLocal_1946 = 0;
			if (Global_262145.f_26036)
			{
				UNK_0x1787A8354D584871(&Local_1901);
			}
			func_375(1);
			UNK_0xA37A90C62806D848(1);
			return true;
		}
		iLocal_1945++;
		if (iLocal_1945 >= 52)
		{
			iLocal_1945 = 0;
		}
	}
	return false;
}

void func_225()
{
	bool bVar0;

	bVar0 = func_380(Local_1038.f_18);
	if (bVar0 < 32)
	{
		UNK_0x5D96D8530B3D0904(&(Local_1038.f_33), bVar0);
	}
}

bool func_226(bool bParam0)
{
	bool bVar0;

	if (bParam0 == func_411())
	{
		return false;
	}
	bVar0 = func_227(bParam0);
	if (bVar0 != func_411())
	{
		return func_324(bVar0);
	}
	return false;
}

bool func_227(bool bParam0)
{
	if (bParam0 != func_411())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_411();
}

void func_228(var uParam0, int iParam1)
{
	if (uParam0->f_7 == iParam1)
	{
		return;
	}
	if (iParam1 < uParam0->f_7 && iParam1 != 0)
	{
		return;
	}
	if ((iParam1 == 4 || iParam1 == 5) || iParam1 == 6)
	{
		if (func_333())
		{
			func_228(uParam0, 7);
			return;
		}
	}
	uParam0->f_7 = iParam1;
	func_69(&(Local_1038.f_794));
	if ((iParam1 != 0 && iParam1 != 3) && iParam1 != 8)
	{
		func_73(&(Local_1038.f_794), 0, 0);
	}
}

bool func_229()
{
	bool bVar0;

	bVar0 = func_380(Local_1038.f_18);
	if (bVar0 < 32)
	{
		return UNK_0xEAE0D21A50E6C7F4(Local_1038.f_33, bVar0);
	}
	return false;
}

char* func_230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "sit_enter_left";
		case 1:
			return "sit_enter_left_side";
		case 2:
			return "sit_enter_right_side";
		default:
			break;
	}
	return "sit_enter_left";
}

char* func_231()
{
	return "anim_casino_b@amb@casino@games@shared@player@";
}

Vector3 func_232(int iParam0)
{
	bool bVar0;

	if (Local_1038.f_26 == 1)
	{
		bVar0 = UNK_0x4B72871A3BE7B474(func_76(func_380(iParam0)), 1f, joaat("VW_PROP_CASINO_3CARDPOKER_01B"), 0, 0, 0);
	}
	else if (func_380(iParam0) == 0 || func_380(iParam0) == 1)
	{
		bVar0 = UNK_0x4B72871A3BE7B474(func_76(func_380(iParam0)), 1f, joaat("VW_PROP_CASINO_3CARDPOKER_01"), 0, 0, 0);
	}
	else
	{
		bVar0 = UNK_0x4B72871A3BE7B474(func_76(func_380(iParam0)), 1f, joaat("VW_PROP_CASINO_3CARDPOKER_01B"), 0, 0, 0);
	}
	if (UNK_0xC844350D5D58C99A(bVar0) && UNK_0x1A5AE8A9B1D42A10(bVar0))
	{
		switch (iParam0)
		{
			case 0:
				return UNK_0xAE6F99477A0FA13D(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_04"));
			case 1:
				return UNK_0xAE6F99477A0FA13D(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_03"));
			case 2:
				return UNK_0xAE6F99477A0FA13D(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_02"));
			case 3:
				return UNK_0xAE6F99477A0FA13D(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_01"));
			case 4:
				return UNK_0xAE6F99477A0FA13D(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_04"));
			case 5:
				return UNK_0xAE6F99477A0FA13D(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_03"));
			case 6:
				return UNK_0xAE6F99477A0FA13D(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_02"));
			case 7:
				return UNK_0xAE6F99477A0FA13D(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_01"));
			case 8:
				return UNK_0xAE6F99477A0FA13D(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_04"));
			case 9:
				return UNK_0xAE6F99477A0FA13D(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_03"));
			case 10:
				return UNK_0xAE6F99477A0FA13D(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_02"));
			case 11:
				return UNK_0xAE6F99477A0FA13D(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_01"));
			case 12:
				return UNK_0xAE6F99477A0FA13D(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_04"));
			case 13:
				return UNK_0xAE6F99477A0FA13D(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_03"));
			case 14:
				return UNK_0xAE6F99477A0FA13D(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_02"));
			case 15:
				return UNK_0xAE6F99477A0FA13D(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_01"));
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

var func_233(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { UNK_0xEEB20D14BD38615E(func_231(), func_230(iParam1), func_361(iParam0), func_232(iParam0), 0.01f, 2) };
	return vVar0.z;
}

float func_234(bool bParam0, vector3 vParam1, int iParam4)
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

Vector3 func_235(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { UNK_0x1BB04F10296A1C5E(func_231(), func_230(iParam1), func_361(iParam0), func_232(iParam0), 0.01f, 2) };
	return vVar0;
}

bool func_236()
{
	UNK_0x3F423BF5B8125A50(func_45());
	UNK_0x3F423BF5B8125A50(func_78());
	UNK_0x3F423BF5B8125A50(func_92());
	UNK_0x3F423BF5B8125A50(func_231());
	if (((UNK_0xB4AE0788C1587752(func_45()) && UNK_0xB4AE0788C1587752(func_78())) && UNK_0xB4AE0788C1587752(func_92())) && UNK_0xB4AE0788C1587752(func_231()))
	{
		return true;
	}
	return false;
}

bool func_237()
{
	if (func_71(&(Local_1038.f_792), 3500, 0))
	{
		func_69(&(Local_1038.f_792));
		return true;
	}
	return false;
}

bool func_238(int iParam0)
{
	if (Local_116.f_117[iParam0] == func_411())
	{
		return false;
	}
	return Local_116.f_117[iParam0] != UNK_0xD803B885F5E47A62();
}

void func_239(int iParam0)
{
	Global_1696054 = UNK_0xDD0E7998AE8AD485();
	Global_1696071 = iParam0;
	if (!func_247())
	{
		func_244();
	}
	if (!func_243())
	{
		func_240();
	}
}

void func_240()
{
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_PX"), UNK_0xDD0E7998AE8AD485());
	func_242();
	func_241();
	Global_1696068 = 1;
	Global_1696063 = 0;
}

void func_241()
{
	func_108(joaat("MPPLY_CAS_24H_GMBLNG_PX"), UNK_0xDD0E7998AE8AD485());
}

void func_242()
{
	func_108(joaat("MPPLY_CAS_GMBLNG_L24"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_1"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_2"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_3"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_4"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_5"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_6"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_7"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_8"), 0);
	func_108(joaat("MPPLY_CAS_CUR_GMBLNG_HR"), 0);
	func_108(joaat("MPPLY_CAS_24H_GMBLNG_PX"), 0);
}

bool func_243()
{
	return Global_1696068;
}

void func_244()
{
	func_108(joaat("MPPLY_CASINO_GMBLNG_GD"), UNK_0xDD0E7998AE8AD485());
	func_246();
	func_245((UNK_0xDD0E7998AE8AD485() + 86400));
	Global_1696067 = 1;
}

void func_245(int iParam0)
{
	Global_1696062 = iParam0;
}

void func_246()
{
	func_108(joaat("MPPLY_CAS_CUR_GMBLNG_PX"), UNK_0xDD0E7998AE8AD485());
}

bool func_247()
{
	return func_112(joaat("MPPLY_CASINO_GMBLNG_GD")) != 0;
}

bool func_248(int iParam0)
{
	return Local_116.f_117[iParam0] == UNK_0xD803B885F5E47A62();
}

void func_249()
{
	func_363(2);
	UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 185, false);
	func_339();
	func_300(UNK_0xD803B885F5E47A62(), 1, 0, 0);
	func_257();
	UNK_0x0674E58A79778E99(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_4), 3);
	func_250();
}

void func_250()
{
	int iVar0;
	int iVar1;

	if (Global_1696071 != -1)
	{
		iVar0 = (UNK_0xDD0E7998AE8AD485() - Global_1696054);
		iVar1 = (UNK_0xDD0E7998AE8AD485() - Global_1696055);
		if (Global_1696055 == -1)
		{
			func_251(iVar0);
		}
		else
		{
			func_251(iVar1);
		}
		func_246();
		func_241();
		Global_1696054 = -1;
		Global_1696055 = -1;
		Global_1696071 = -1;
	}
}

void func_251(int iParam0)
{
	int iVar0;

	iVar0 = func_256();
	Global_1696063 = (Global_1696063 + iParam0);
	func_252(iVar0, iParam0);
	func_241();
}

void func_252(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1[9];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	int iVar16;

	iVar11 = (iParam0 + 1 * 12 - 12);
	iVar12 = 1;
	if ((iVar11 % 32) + 12 > 32)
	{
		iVar12 = 2;
	}
	iVar13 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar11) / 32f));
	if (iVar13 < 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		if ((iVar13 + iVar0) >= 9)
		{
			return;
		}
		iVar14 = func_255((iVar13 + iVar0));
		iVar1[(iVar13 + iVar0)] = func_112(iVar14);
		iVar0++;
	}
	bVar15 = func_254(&iVar1, iParam0, 12);
	bVar15 = (bVar15 + iParam1);
	func_253(&iVar1, iParam0, 12, bVar15);
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		iVar16 = func_255((iVar13 + iVar0));
		func_108(iVar16, iVar1[(iVar13 + iVar0)]);
		iVar0++;
	}
}

void func_253(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar3) / 32f));
	iVar5 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar4 - 1) + iVar5) >= *iParam0)
	{
		return;
	}
	bVar6 = false;
	iVar7 = (iVar3 % 32);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar8 = (32 - iVar7);
		if (iVar8 > (iParam2 - bVar6))
		{
			iVar8 = (iParam2 - bVar6);
		}
		bVar1 = iVar7;
		while (bVar1 <= ((iVar7 + iVar8) - 1))
		{
			if (UNK_0xEAE0D21A50E6C7F4(bParam3, bVar6))
			{
				UNK_0x5D96D8530B3D0904(iParam0[(iVar4 + iVar0)], bVar1);
			}
			else
			{
				UNK_0x0674E58A79778E99(iParam0[(iVar4 + iVar0)], bVar1);
			}
			bVar6++;
			bVar1++;
		}
		if (iVar7 > 0)
		{
			iVar7 = 0;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_254(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;

	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar4) / 32f));
	iVar6 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar5 - 1) + iVar6) >= *iParam0)
	{
		return 0;
	}
	bVar7 = false;
	iVar8 = (iVar4 % 32);
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar9 = (32 - iVar8);
		if (iVar9 > (iParam2 - bVar7))
		{
			iVar9 = (iParam2 - bVar7);
		}
		bVar1 = iVar8;
		while (bVar1 <= ((iVar8 + iVar9) - 1))
		{
			if (UNK_0xEAE0D21A50E6C7F4((*iParam0)[(iVar5 + iVar0)], bVar1))
			{
				UNK_0x5D96D8530B3D0904(&uVar2, bVar7);
			}
			bVar7++;
			bVar1++;
		}
		if (iVar8 > 0)
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_255(int iParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return UNK_0x12AB0310C2281427(&cVar0);
}

int func_256()
{
	return func_112(joaat("MPPLY_CAS_CUR_GMBLNG_HR"));
}

void func_257()
{
	Global_2439138.f_1156.f_10 = 0;
}

void func_258(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_260(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		UNK_0xA5E3ADAAA4CD5D6C(15);
		Global_22350.f_8417 = 0;
	}
	UNK_0xD668DA5CA4A1D2C8(0f);
	if (Global_22350.f_5628[iVar0])
	{
		UNK_0x11CCD0ACA866C6C5(9, 0);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		UNK_0xF5A41F3D3B38EFE3("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		UNK_0xF5A41F3D3B38EFE3("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_259(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_259(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (UNK_0x83D8570832F172A7(*iParam0))
		{
			UNK_0xE17FDF9E3068281B(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

bool func_260(int iParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;

	if (iParam2 == -1)
	{
		if (UNK_0x8CD06866876216F2() && UNK_0x2E9F2B9C010D34D9())
		{
			iParam2 = UNK_0xF35A91B88CC1915F();
		}
	}
	StringCopy(&cVar0, UNK_0xBB0808A181D4745C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = UNK_0x12AB0310C2281427(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*iParam0 = iVar17;
			return true;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*iParam0 = iVar18;
			return true;
		}
	}
	return false;
}

void func_261(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
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
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	bool bVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int iVar60;
	int iVar61;
	float fVar62;
	float fVar63;
	float fVar64;
	char cVar65[64];
	char cVar81[64];
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	bool bVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;

	if (!func_260(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_285(0, bParam6))
	{
		return;
	}
	UNK_0xD02CE72B4B66DC29(76, 84);
	UNK_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_165(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_22350 = 0;
		}
	}
	if (UNK_0x12AB0310C2281427(&(Global_22350.f_1)) == UNK_0x12AB0310C2281427("HIDE"))
	{
		fVar59 = Global_22348;
	}
	else
	{
		fVar59 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22349;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		UNK_0xE5AC5CA7914F5BAE(&iVar60, &iVar61);
		fVar63 = UNK_0x33D480CCE15C991A(0);
		if (func_167())
		{
			iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) * fVar63));
		}
		fVar64 = (SYSTEM::TO_FLOAT(iVar60) / SYSTEM::TO_FLOAT(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_167())
		{
			fVar62 = 1f;
		}
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar62));
		iVar61 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) / fVar62));
	}
	else
	{
		UNK_0x8A462DAA7D1D9008(&iVar60, &iVar61);
	}
	if (bParam3)
	{
		if (Global_22350.f_5218 <= 1)
		{
			func_175(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22350.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22350.f_5728)
		{
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_1)) == UNK_0x12AB0310C2281427("HIDE"))
			{
				fVar51 = Global_22348;
			}
			else
			{
				if (Global_22350)
				{
					StringCopy(&cVar65, func_171(29), 64);
					StringCopy(&cVar81, func_168(29, 1), 64);
					if (UNK_0x12AB0310C2281427(&(Global_22350.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_284(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						UNK_0x539E86AE011A8B38(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						UNK_0x539E86AE011A8B38(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22350.f_8387)
				{
					iVar1 = Global_22350.f_8383;
					iVar2 = Global_22350.f_8384;
					iVar3 = Global_22350.f_8385;
					bVar4 = Global_22350.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					bVar4 = 255;
				}
				func_284(Global_22347, (Global_22348 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, bVar4);
				fVar51 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
				if (UNK_0x12AB0310C2281427(&(Global_22350.f_1)) != 0)
				{
					func_283();
					UNK_0x070005E852D4C0E9(&(Global_22350.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22350.f_68)
					{
						if (Global_22350.f_5[iVar14] == 2)
						{
							UNK_0x6D99DF8263D35CE5(Global_22350.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22350.f_5[iVar14] == 3)
						{
							UNK_0x21994591120B91F0(Global_22350.f_14[iVar16], Global_22350.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22350.f_5[iVar14] == 1)
						{
							UNK_0x6B012227B3921E18(&(Global_22350.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 8)
						{
							UNK_0x6B012227B3921E18(&(Global_22350.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 5)
						{
							UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 6)
						{
							UNK_0x6B012227B3921E18(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 7)
						{
							UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 9)
						{
							UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					UNK_0xE0026608C37C7C41((Global_22347 + 0.00390625f), ((Global_22348 + fVar57) + 0.00416664f), 0);
				}
				if (Global_22350.f_5735)
				{
					func_283();
					func_281((((Global_22347 + fParam5) - 0.00390625f) - func_282("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_283();
						func_281((((Global_22347 + fParam5) - 0.00390625f) - func_282("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
					}
				}
			}
			iVar6 = Global_22350.f_5738;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_22350.f_8397)
			{
				iVar1 = Global_22350.f_8393;
				iVar2 = Global_22350.f_8394;
				iVar3 = Global_22350.f_8395;
				bVar4 = Global_22350.f_8396;
			}
			else
			{
				UNK_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &bVar4);
			}
			while (iVar9 < Global_22350.f_5225 && iVar6 <= Global_22350.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22350.f_5485[iVar6])
					{
						if (Global_22350.f_5356[iVar6] && iVar6 != Global_22350.f_5738)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar56 = Global_22350.f_5745[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			UNK_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar97 + ((fVar51 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_22350.f_5731 > Global_22350.f_5225)
			{
				if (Global_22350.f_8402)
				{
					iVar1 = Global_22350.f_8398;
					iVar2 = Global_22350.f_8399;
					iVar3 = Global_22350.f_8400;
					bVar4 = Global_22350.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					bVar4 = 204;
				}
				func_284(Global_22347, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, bVar4);
				vVar38 = { UNK_0xDE43A059FBFFF38A("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar62));
				vVar38.f_1 = (vVar38.y * (0.5f / fVar62));
				if (Global_22350.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					bVar4 = 255;
				}
				else
				{
					UNK_0xA402F6C87C08815C(true, &iVar1, &iVar2, &iVar3, &bVar4);
				}
				UNK_0x539E86AE011A8B38("CommonMenu", "shop_arrows_upANDdown", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar62), ((vVar38.y / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, bVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (UNK_0x12AB0310C2281427(&(Global_22350.f_4690)) != 0 && Global_22350.f_4766 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_22350.f_4768 != 0)
				{
					func_165(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_280(fVar42);
				UNK_0xA1868A78E3C3D56B(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						UNK_0x6D99DF8263D35CE5(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						UNK_0x21994591120B91F0(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UNK_0x5D2FD44A8C086959(fVar42, (fVar51 + 0.00277776f));
				UNK_0xA402F6C87C08815C(2, &iVar1, &iVar2, &iVar3, &bVar4);
				func_284(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, bVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					bVar4 = Global_22350.f_8406;
				}
				else
				{
					UNK_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &bVar4);
				}
				UNK_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, bVar4, 0);
				func_280(fVar42);
				UNK_0x070005E852D4C0E9(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						UNK_0x6D99DF8263D35CE5(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						UNK_0x21994591120B91F0(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 8)
					{
						UNK_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				UNK_0xE0026608C37C7C41(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_22350.f_4768 != 0)
				{
					func_165(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_279(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &bVar50);
					UNK_0x539E86AE011A8B38(func_171(Global_22350.f_4768), func_168(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
				}
				fVar51 = (fVar51 + (((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22350.f_4766 > 0)
				{
					if ((UNK_0x1C0640BA9A7327B3() - Global_22350.f_4767) > Global_22350.f_4766)
					{
						StringCopy(&(Global_22350.f_4690), "", 24);
						Global_22350.f_4766 = -1;
					}
				}
			}
			if (UNK_0x12AB0310C2281427(&(Global_4268421.f_21)) != 0 && Global_4268421.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_4268421.f_67 != 0)
				{
					func_165(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_280(fVar42);
				UNK_0xA1868A78E3C3D56B(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						UNK_0x6D99DF8263D35CE5(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						UNK_0x21994591120B91F0(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UNK_0x5D2FD44A8C086959(fVar42, (fVar51 + 0.00277776f));
				UNK_0xA402F6C87C08815C(2, &iVar1, &iVar2, &iVar3, &bVar4);
				func_284(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, bVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					bVar4 = Global_22350.f_8406;
				}
				else
				{
					UNK_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &bVar4);
				}
				UNK_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, bVar4, 0);
				func_280(fVar42);
				UNK_0x070005E852D4C0E9(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						UNK_0x6D99DF8263D35CE5(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						UNK_0x21994591120B91F0(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						UNK_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						UNK_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				UNK_0xE0026608C37C7C41(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4268421.f_67 != 0)
				{
					func_165(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_279(Global_4268421.f_67, 1, &iVar47, &iVar48, &iVar49, &bVar50);
					UNK_0x539E86AE011A8B38(func_171(Global_4268421.f_67), func_168(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
				}
				fVar51 = (fVar51 + (((UNK_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4268421.f_65 > 0)
				{
					if ((UNK_0x1C0640BA9A7327B3() - Global_4268421.f_66) > Global_4268421.f_65)
					{
						StringCopy(&(Global_4268421.f_21), "", 16);
						Global_4268421.f_65 = -1;
					}
				}
			}
			func_274(iVar60, iParam1, bParam8, 0, 0, 0, bParam4, 1, 0);
			UNK_0xD02CE72B4B66DC29(76, 84);
			UNK_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22350.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_22350.f_5218;
			if (Global_22350.f_5729)
			{
				iVar98 = (Global_22350.f_5732 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_22350.f_5745[iVar6] != 0f)
				{
					fVar56 = Global_22350.f_5745[iVar6];
				}
				if (Global_22350.f_5729)
				{
					iVar6 = Global_22350.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22350.f_5738 && iVar9 < Global_22350.f_5225)
				{
					bVar33 = true;
					if (Global_22350.f_5739 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_22350.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22350.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22347 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_22350.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					bVar105 = 255;
					if (Global_22350.f_8409)
					{
						UNK_0xA402F6C87C08815C(Global_22350.f_8408, &iVar102, &iVar103, &iVar104, &bVar105);
					}
					else
					{
						UNK_0xA402F6C87C08815C(true, &iVar102, &iVar103, &iVar104, &bVar105);
					}
					UNK_0x539E86AE011A8B38("CommonMenu", "Gradient_Nav", (Global_22347 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, bVar105, 0);
					Global_22350.f_5877 = fVar35;
				}
				bVar8 = false;
				while (bVar8 < Global_22350.f_5226)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_22350.f_5089[iVar6], bVar8) || Global_22350.f_5056[bVar8] == 5)
					{
						if (Global_22350.f_5729)
						{
							iVar19 = Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + bVar8)];
							iVar20 = Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + bVar8)];
							iVar21 = Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + bVar8)];
							iVar22 = Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + bVar8)];
							iVar23 = Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + bVar8)];
						}
						else
						{
							Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar19;
							Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar20;
							Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar21;
							Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar22;
							Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + bVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_22350.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + bVar8) == Global_22350.f_6008[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_22350.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + bVar8) == Global_22350.f_6008[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_22350.f_5062[bVar8] != -1f)
						{
							fVar34 = ((Global_22347 + 0.0046875f) + Global_22350.f_5062[bVar8]);
						}
						if ((bVar8 < 4 && Global_22350.f_5062[bVar8 + 1] != -1f) && fVar34 < Global_22350.f_5062[bVar8 + 1])
						{
							fVar46 = (Global_22350.f_5062[bVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22347 + Global_22349) - 0.0046875f) - fVar34);
						}
						if ((Global_22350.f_5075[bVar8] && Global_22350.f_5874) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22350.f_5056[bVar8])
						{
							case 0:
								break;
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_173(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											UNK_0xBBA442527B4BB1A6(&(Global_22350.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x6B012227B3921E18(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x6D99DF8263D35CE5(Global_22350.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													UNK_0x21994591120B91F0(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
										{
											fVar43 = UNK_0x79E367314AFBB5CA(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_165(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_22350.f_4433[(iVar22 + iVar14)] == 2 || Global_22350.f_4433[(iVar22 + iVar14)] == 51) || Global_22350.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22350.f_5083[bVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[bVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar43;
										Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar44;
										if (Global_22350.f_5083[bVar8] == 2)
										{
											iVar101 = (bVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_22350.f_5083[iVar101] == 2)
												{
													Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] = (Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] - Global_22350.f_5068[bVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)];
										fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + bVar8)];
									}
									if (bVar54)
									{
										if (func_165(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_171(26), func_168(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
										if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_171(27), func_168(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										func_173(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_273(bVar32);
										}
										UNK_0x070005E852D4C0E9(&(Global_22350.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x6B012227B3921E18(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x6D99DF8263D35CE5(Global_22350.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UNK_0x21994591120B91F0(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar28)] == 2 || Global_22350.f_4433[(iVar22 + iVar28)] == 51) || Global_22350.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_165(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_165(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_279(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &bVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[bVar8] == 2)
															{
																UNK_0x539E86AE011A8B38(func_171(Global_22350.f_4433[(iVar22 + iVar28)]), func_168(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
															else
															{
																UNK_0x539E86AE011A8B38(func_171(Global_22350.f_4433[(iVar22 + iVar28)]), func_168(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (UNK_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22350.f_5083[bVar8] == 2)
										{
											UNK_0xE0026608C37C7C41(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											UNK_0xE0026608C37C7C41((fVar34 + fVar42), fVar35, 0);
											if (func_272() && UNK_0x8A22C4C08282BF26(joaat("FM_MISSION_CREATOR")) > 0)
											{
												if (bVar8 == 0)
												{
													func_173(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													UNK_0xD3539A877EC25E86(0f, (0.35f * 0.7f));
													UNK_0x7178F32F6742C936(255, 255, 255, 150);
													UNK_0xC1032CAC14DE468A((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), 0);
													UNK_0x070005E852D4C0E9(&cVar107);
													UNK_0x6D99DF8263D35CE5((Global_22350.f_5738 + iVar30));
													UNK_0xE0026608C37C7C41((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar14)] != 2 && Global_22350.f_4433[(iVar22 + iVar14)] != 51) && Global_22350.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_165(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_165(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_279(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &bVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																UNK_0x539E86AE011A8B38(func_171(Global_22350.f_4433[(iVar22 + iVar14)]), func_168(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
															else if (Global_22350.f_5083[bVar8] == 2)
															{
																UNK_0x539E86AE011A8B38(func_171(Global_22350.f_4433[(iVar22 + iVar14)]), func_168(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
															else
															{
																UNK_0x539E86AE011A8B38(func_171(Global_22350.f_4433[(iVar22 + iVar14)]), func_168(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							case 2:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_173(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_273(bVar32);
										}
										UNK_0xBBA442527B4BB1A6("NUMBER");
										UNK_0x6D99DF8263D35CE5(Global_22350.f_3918[iVar20]);
										fVar43 = UNK_0x79E367314AFBB5CA(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[bVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[bVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)];
									}
									if (bVar54)
									{
										if (func_165(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_171(26), func_168(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
										if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_171(27), func_168(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_173(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_271((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							case 3:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_173(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_273(bVar32);
										}
										UNK_0xBBA442527B4BB1A6("NUMBER");
										UNK_0x21994591120B91F0(Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
										fVar43 = UNK_0x79E367314AFBB5CA(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[bVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[bVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + bVar8)];
									}
									if (bVar54)
									{
										if (func_165(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_171(26), func_168(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
										if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
												if (iVar5 == 1)
												{
													UNK_0x539E86AE011A8B38(func_171(27), func_168(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
												}
											}
										}
									}
									func_173(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_270((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							case 4:
								if (bVar33)
								{
									if (func_165(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22350.f_5729)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22350.f_5083[bVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_22350.f_5083[bVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar42;
											Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + bVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + bVar8)];
											fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + bVar8)];
										}
										if (bVar54)
										{
											if (func_165(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[bVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_279(26, 1, &iVar47, &iVar48, &iVar49, &bVar50);
													if (iVar5 == 1)
													{
														UNK_0x539E86AE011A8B38(func_171(26), func_168(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
													}
												}
											}
											if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_279(27, 1, &iVar47, &iVar48, &iVar49, &bVar50);
													if (iVar5 == 1)
													{
														UNK_0x539E86AE011A8B38(func_171(27), func_168(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, bVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_165(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &bVar50);
												UNK_0x539E86AE011A8B38(func_171(Global_22350.f_4433[iVar22]), func_168(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_269(Global_22350.f_4433[iVar22])), (fVar37 * func_269(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, bVar50, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22350.f_5056[bVar8] == 5)
						{
							if (Global_22350.f_5068[bVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22350.f_5068[bVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22350.f_5068[bVar8]);
							if (Global_22350.f_5075[bVar8])
							{
								if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22350.f_5068[bVar8]);
					}
					bVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22350.f_8038[iVar9] = iVar6;
						Global_22350.f_5740 = iVar6;
						iVar9++;
						if (Global_22350.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_22350.f_5745[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_22350.f_5728)
					{
						Global_22350.f_5485[iVar6] = 1;
						if (Global_22350.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22350.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22350.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22350.f_5728)
			{
				Global_22350.f_5730 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_22350.f_5733 = iVar11;
				Global_22350.f_5731 = iVar10;
				Global_22350.f_5728 = 1;
			}
		}
		if (!Global_22350.f_5729)
		{
			Global_22350.f_5732 = iVar9;
			Global_22350.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22350.f_5876 = fVar51;
	Global_22350.f_5878 = UNK_0x1C0640BA9A7327B3();
	UNK_0xD668DA5CA4A1D2C8(Global_22350.f_5876);
	if (!Global_22350.f_8382)
	{
		func_262(0);
	}
	Global_22350.f_8382 = 0;
	if (bParam2)
	{
		UNK_0x3584F71E5CA29322(10);
	}
	UNK_0x3584F71E5CA29322(6);
	UNK_0x3584F71E5CA29322(7);
	UNK_0x3584F71E5CA29322(9);
	UNK_0x3584F71E5CA29322(8);
	if (bParam0)
	{
		func_186(1);
	}
	UNK_0xD59EF13BB60323B9();
}

void func_262(int iParam0)
{
	if (func_268())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_267(0))
		{
			func_263(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_263(int iParam0)
{
	if (func_268())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_266())
		{
			func_265(1, 1);
		}
		else
		{
			func_265(0, 0);
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
	if (!func_264())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_264()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_265(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_267(0))
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

bool func_266()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_267(int iParam0)
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

bool func_268()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

float func_269(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
	}
	return 1f;
}

void func_270(float fParam0, float fParam1, bool bParam2, bool bParam3, int iParam4)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0x21994591120B91F0(bParam3, iParam4);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_271(float fParam0, float fParam1, bool bParam2, bool bParam3, int iParam4)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0x6D99DF8263D35CE5(bParam3);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_272()
{
	return UNK_0xC146D5FBD23C6954(-1762644250);
}

void func_273(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (bParam0)
	{
		UNK_0xA402F6C87C08815C(Global_22350.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		UNK_0xA402F6C87C08815C(Global_22350.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
}

void func_274(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	if (!func_260(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (bParam3 && !func_285(bParam4, bParam8))
	{
		return;
	}
	if (func_277())
	{
		return;
	}
	if (UNK_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_275(UNK_0xD803B885F5E47A62(), 0))
		{
			return;
		}
	}
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (UNK_0xDAC65F45B0B2D176() == 0 || UNK_0x4FD68D5821EE3E19())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (UNK_0xB8E3620B82AD47D7(2))
		{
			bVar1 = false;
			while (bVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[bVar1] != 361)
				{
					StringCopy(&(Global_22350.f_4771[bVar1 /*16*/]), UNK_0xF59058FCB716F903(2, Global_22350.f_5026[bVar1], true), 64);
				}
				else if (Global_22350.f_5039[bVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[bVar1 /*16*/]), UNK_0xE32F7AC5E6DF304A(2, Global_22350.f_5039[bVar1], true), 64);
				}
				bVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			UNK_0x7C19E5E4784BD7CF((1f - (Global_22350.f_5081 / 100f)));
			UNK_0x7E60D21B163E9D56();
			if (UNK_0x0EFF6B4415DAF4A1())
			{
				UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				UNK_0x1200CC973A2399C8(true);
				UNK_0x7E60D21B163E9D56();
			}
			bVar1 = false;
			while (bVar1 < Global_22350.f_4769)
			{
				if (UNK_0x12AB0310C2281427(&(Global_22350.f_4964[bVar1 /*4*/])) != UNK_0x12AB0310C2281427("PREV"))
				{
					UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(bVar1);
					func_191(&(Global_22350.f_4771[bVar1 /*16*/]));
					iVar2 = bVar1 + 1;
					while (iVar2 < 12 && UNK_0x12AB0310C2281427(&(Global_22350.f_4964[iVar2 /*4*/])) == UNK_0x12AB0310C2281427("PREV"))
					{
						func_191(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[bVar1] == -1)
					{
						func_190(&(Global_22350.f_4964[bVar1 /*4*/]));
					}
					else
					{
						bVar3 = Global_22350.f_5013[bVar1];
						if (bParam2 >= 0)
						{
							bVar3 = bParam2;
						}
						UNK_0x7ACC3006A87F8B39(&(Global_22350.f_4964[bVar1 /*4*/]));
						if (bParam5)
						{
							UNK_0x164431059FF80580(bVar3, 70);
						}
						else
						{
							UNK_0x6D99DF8263D35CE5(bVar3);
						}
						UNK_0x779B34565F4D71B1();
					}
					if (UNK_0x0EFF6B4415DAF4A1())
					{
						if (Global_22350.f_5026[bVar1] != 361 && UNK_0xEAE0D21A50E6C7F4(Global_22350.f_5052, bVar1))
						{
							UNK_0x1200CC973A2399C8(true);
							UNK_0x3CAEA85DA607305E(Global_22350.f_5026[bVar1]);
						}
						else
						{
							UNK_0x1200CC973A2399C8(false);
							UNK_0x3CAEA85DA607305E(361);
						}
					}
					UNK_0x7E60D21B163E9D56();
				}
				bVar1++;
			}
			if (UNK_0x12AB0310C2281427(&(Global_4268421.f_16)) != UNK_0x12AB0310C2281427(""))
			{
				UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(Global_22350.f_4769);
				func_191(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_190(&(Global_4268421.f_16));
				}
				else
				{
					bVar4 = Global_22350.f_5013[bVar1];
					if (bParam2 >= 0)
					{
						bVar4 = bParam2;
					}
					UNK_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
					if (bParam5)
					{
						UNK_0x164431059FF80580(bVar4, 70);
					}
					else
					{
						UNK_0x6D99DF8263D35CE5(bVar4);
					}
					UNK_0x779B34565F4D71B1();
				}
				UNK_0x7E60D21B163E9D56();
			}
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(80);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				UNK_0x3CAEA85DA607305E(true);
			}
			else
			{
				UNK_0x3CAEA85DA607305E(false);
			}
			UNK_0x7E60D21B163E9D56();
			Global_22350.f_4770 = 1;
		}
		bVar1 = false;
		while (bVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[bVar1] != -1)
			{
				if (bParam2 > 0)
				{
					UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					UNK_0x3CAEA85DA607305E(bVar1);
					UNK_0x7ACC3006A87F8B39(&(Global_22350.f_4964[bVar1 /*4*/]));
					if (bParam5)
					{
						UNK_0x164431059FF80580(bParam2, 70);
					}
					else
					{
						UNK_0x6D99DF8263D35CE5(bParam2);
					}
					UNK_0x779B34565F4D71B1();
					UNK_0x7E60D21B163E9D56();
				}
			}
			bVar1++;
		}
		if (Global_4268421.f_20 != -1)
		{
			if (bParam2 > 0)
			{
				UNK_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				UNK_0x3CAEA85DA607305E(bVar1);
				UNK_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
				if (bParam5)
				{
					UNK_0x164431059FF80580(bParam2, 70);
				}
				else
				{
					UNK_0x6D99DF8263D35CE5(bParam2);
				}
				UNK_0x779B34565F4D71B1();
				UNK_0x7E60D21B163E9D56();
			}
		}
		UNK_0xD02CE72B4B66DC29(76, 66);
		UNK_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8417)
			{
				UNK_0x744B56EE9DE7B57F(15, 0f, -0.0375f);
				Global_22350.f_8417 = 1;
			}
		}
		else if (Global_22350.f_8417)
		{
			UNK_0xA5E3ADAAA4CD5D6C(15);
			Global_22350.f_8417 = 0;
		}
		UNK_0xD59EF13BB60323B9();
		if (Global_22350.f_5055)
		{
			UNK_0xD02CE72B4B66DC29(82, 66);
			UNK_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
			UNK_0xEF45C43067063F18(Global_22350.f_5660[iVar0 /*10*/], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			UNK_0xD59EF13BB60323B9();
		}
		else
		{
			UNK_0x6567AE843FADBA94(Global_22350.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_275(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_276(-1, 0) == 8;
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

int func_276(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_137();
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

bool func_277()
{
	vector3 vVar0;

	if (Global_19486.f_1 > 3)
	{
		return true;
	}
	if (func_278())
	{
		vVar0 = { 0f, -500f, 0f };
		UNK_0x1CFAC524932A967E(&vVar0);
		if (Global_19431 == 0)
		{
			if (vVar0.y > -119f)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (vVar0.y > -101f)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_278()
{
	if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return true;
	}
	return false;
}

void func_279(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	UNK_0xA402F6C87C08815C(true, bParam2, bParam3, bParam4, bParam5);
	*bParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*bParam2 = 194;
			*bParam3 = 80;
			*bParam4 = 80;
			break;
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*bParam2 = 0;
				*bParam3 = 0;
				*bParam4 = 0;
			}
			break;
		case 54:
			*bParam5 = 100;
			break;
		case 62:
			*bParam5 = 100;
			break;
		case 55:
			UNK_0xA402F6C87C08815C(24, bParam2, bParam3, bParam4, bParam5);
			*bParam5 = 255;
			break;
	}
}

void func_280(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &bVar3);
	UNK_0x7BBAC160090910C3(0);
	UNK_0xD3539A877EC25E86(0f, 0.35f);
	UNK_0x4B9228CE1CF0DACA(2);
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bVar3);
	UNK_0xF1F881BAAAFB43B1(fParam0, ((Global_22347 + Global_22349) - 0.0046875f));
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	UNK_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_281(float fParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0x6D99DF8263D35CE5(bParam3);
	UNK_0x6D99DF8263D35CE5(bParam4);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

float func_282(bool bParam0, bool bParam1, bool bParam2)
{
	if (!UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		if (UNK_0x12AB0310C2281427(bParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_283();
	UNK_0xBBA442527B4BB1A6(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	UNK_0x6D99DF8263D35CE5(bParam2);
	return UNK_0x79E367314AFBB5CA(1);
}

void func_283()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	UNK_0xA402F6C87C08815C(true, &iVar0, &iVar1, &iVar2, &bVar3);
	if (Global_22350.f_8392)
	{
		iVar0 = Global_22350.f_8388;
		iVar1 = Global_22350.f_8389;
		iVar2 = Global_22350.f_8390;
		bVar3 = Global_22350.f_8391;
	}
	UNK_0x7BBAC160090910C3(0);
	UNK_0xD3539A877EC25E86(0f, 0.35f);
	UNK_0x7178F32F6742C936(iVar0, iVar1, iVar2, bVar3);
	UNK_0xF1F881BAAAFB43B1((Global_22347 + 0.0046875f), ((Global_22347 + Global_22349) - 0.0046875f));
	UNK_0xAAE406A7DA443B93(0);
	UNK_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	UNK_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_284(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	UNK_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, bParam7, 0);
}

bool func_285(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return true;
	}
	if ((((((((!UNK_0x0F1CCD77290EE12F() || (func_287(8, -1) && func_286() != 65)) || (UNK_0x8BB17FEBE0394018() != 0 && !bParam1)) || (UNK_0x991B1F0980C62628() && !bParam0)) || UNK_0x590766B2AF637235()) || Global_76882) || Global_22350.f_8416) || UNK_0xE57E602827E07C9D()) || Global_98796.f_1417)
	{
		return false;
	}
	return true;
}

int func_286()
{
	return Global_1312812;
}

bool func_287(bool bParam0, int iParam1)
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

void func_288(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;

	sVar0 = UNK_0xF59058FCB716F903(2, iParam0, true);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	UNK_0x0674E58A79778E99(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_289(char* sParam0)
{
	if (Global_22350.f_4765 >= 3 || Global_22350.f_4762 >= 4)
	{
		return;
	}
	Global_22350.f_4696[Global_22350.f_4762] = 1;
	Global_22350.f_4762++;
	StringCopy(&(Global_22350.f_4713[Global_22350.f_4765 /*16*/]), sParam0, 64);
	Global_22350.f_4765++;
}

void func_290(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;

	StringCopy(&(Global_22350.f_4690), sParam0, 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = iParam1;
	Global_22350.f_4767 = UNK_0x1C0640BA9A7327B3();
	Global_22350.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_291(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	Global_22350.f_5739 = iParam0;
	Global_22350.f_5874 = iParam2;
	if (Global_22350.f_5739 < Global_22350.f_5738)
	{
		Global_22350.f_5738 = Global_22350.f_5739;
	}
	else if ((Global_22350.f_5729 && Global_22350.f_5739 > Global_22350.f_5740) || (!Global_22350.f_5729 && Global_22350.f_5739 >= (Global_22350.f_5738 + Global_22350.f_5225)))
	{
		iVar0 = Global_22350.f_5738;
		while (iVar0 <= Global_22350.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22350.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22350.f_5225 && Global_22350.f_5738 < 128)
		{
			Global_22350.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22350.f_5738;
			while (iVar0 <= Global_22350.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22350.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22350.f_4690), "", 24);
		StringCopy(&(Global_4268421.f_21), "", 16);
	}
}

void func_292(char* sParam0)
{
	int iVar0;

	StringCopy(&(Global_22350.f_1), sParam0, 16);
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_293(int iParam0, bool bParam1, bool bParam2)
{
	Global_22350 = iParam0;
	func_294(29, bParam1, bParam2);
}

void func_294(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22350.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_22350.f_7029[iParam0 /*16*/]), sParam2, 64);
}

void func_295(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22350.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22350.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2461220[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_5089[iVar0] = 0;
		Global_22350.f_5227[iVar0] = 0;
		Global_22350.f_5356[iVar0] = 0;
		Global_22350.f_5879[iVar0] = 0f;
		Global_22350.f_5485[iVar0] = 0;
		Global_22350.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22350.f_5056[iVar0] = 0;
		Global_22350.f_5068[iVar0] = 0f;
		Global_22350.f_5062[iVar0] = -1f;
		Global_22350.f_5075[iVar0] = 0;
		Global_22350.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0 /*4*/]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22350.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22350.f_7029[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22350.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	Global_22350 = 0;
	Global_22350.f_5218 = 0;
	Global_22350.f_5219 = 0;
	Global_22350.f_5220 = 0;
	Global_22350.f_5222 = 0;
	Global_22350.f_5223 = 0;
	Global_22350.f_5224 = 0;
	Global_22350.f_5221 = 0;
	Global_22350.f_5874 = 0;
	Global_22350.f_6014 = 0;
	Global_22350.f_5739 = 0;
	Global_22350.f_5738 = 0;
	Global_22350.f_5740 = 0;
	StringCopy(&(Global_22350.f_4690), "", 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = 0;
	Global_22350.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_4768 = 0;
	StringCopy(&(Global_4268421.f_21), "", 16);
	Global_4268421.f_61 = 0;
	Global_4268421.f_62 = 0;
	Global_4268421.f_63 = 0;
	Global_4268421.f_64 = 0;
	Global_4268421.f_65 = 0;
	Global_4268421.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268421.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4268421.f_67 = 0;
	StringCopy(&(Global_22350.f_1), "", 16);
	Global_22350.f_5074 = 0f;
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_5744 = 0;
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = 0;
	Global_22350.f_5742 = 0;
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	Global_22350.f_5225 = 10;
	Global_22350.f_5226 = 0;
	Global_22350.f_5876 = 0f;
	Global_22350.f_5877 = 0f;
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	Global_22350.f_5730 = 0f;
	Global_22350.f_5731 = 0;
	Global_22350.f_5733 = 0;
	Global_22350.f_5732 = 0;
	Global_22350.f_5734 = 0;
	Global_22350.f_5735 = 0;
	Global_22350.f_5736 = 0;
	Global_22350.f_5737 = 0;
	Global_22350.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22350.f_6008[iVar0] = -1;
		Global_22350.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22350.f_5081 = 0f;
	Global_22350.f_5052 = 0;
	Global_22350.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22350.f_6015)
	{
		Global_22350.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_8392 = 0;
	Global_22350.f_8387 = 0;
	Global_22350.f_8397 = 0;
	Global_22350.f_8402 = 0;
	Global_22350.f_8407 = 0;
	Global_22350.f_8409 = 0;
	Global_22350.f_8415 = 0;
	Global_22347 = 0.05f;
	Global_22348 = 0.05f;
	Global_22349 = 0.225f;
	fVar2 = UNK_0x33D480CCE15C991A(0);
	if (bParam0)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22349 = 0.225f;
	}
}

bool func_296(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_260(&iVar0, 1, iParam1))
	{
		return false;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!UNK_0xEA6BC48857E0AC4C(&(Global_22350.f_5635[iVar0 /*4*/])))
	{
		UNK_0xD7992BEF7A9D109E(&(Global_22350.f_5635[iVar0 /*4*/]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!UNK_0x01C309A4BDFCAD82(&(Global_22350.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	UNK_0x0D3BE1DE0262A012("CommonMenu", 0);
	Global_22350.f_5614[iVar0] = 1;
	if (!UNK_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		UNK_0x0D3BE1DE0262A012("MPShopSale", 0);
		Global_22350.f_5621[iVar0] = 1;
		if (!UNK_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_297(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_297(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!UNK_0x83D8570832F172A7(*uParam0))
			{
				*uParam0 = UNK_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (UNK_0x83D8570832F172A7(*uParam0))
					{
						uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		case 1:
			if (UNK_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		case 2:
			if (!UNK_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_298(int iParam0)
{
	Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 = iParam0;
	Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 = func_380(iParam0);
}

bool func_299()
{
	return Global_4264528 == 1;
}

void func_300(bool bParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_309())
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
		if (!func_203())
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
				else if (bVar14 || (!func_275(UNK_0xD803B885F5E47A62(), 0) && !func_308()))
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
					func_305(0, 0, 0);
					if (bVar25)
					{
						UNK_0x066C43E677C08D5C();
					}
				}
				if (!func_304(bVar27) && !UNK_0x20906E1D6BDC7044(bVar27))
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
					func_303();
					func_302();
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
				if (!func_304(bVar27) && !UNK_0x20906E1D6BDC7044(bVar27))
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
					if (func_301(Global_4456448.f_232883))
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

bool func_301(int iParam0)
{
	return iParam0 == 17;
}

void func_302()
{
	vector3 vVar0;

	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_303()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

bool func_304(bool bParam0)
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

void func_305(bool bParam0, bool bParam1, int iParam2)
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
				func_307();
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
		if (func_275(UNK_0xD803B885F5E47A62(), 0))
		{
			UNK_0xD51AAA59D51D8056(bParam0, bParam1, 1);
		}
		else
		{
			UNK_0x7AEFB64DFEBF60B0(bParam0, bParam1);
		}
		UNK_0xF374D547F2AC15B0(bParam0, bParam1);
		func_306(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_306(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xD8B681091EBE4064(iVar0, bParam1, 1);
	}
}

void func_307()
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

bool func_308()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_309()
{
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return true;
	}
	return false;
}

void func_310()
{
	Global_2439138.f_1156.f_10 = 1;
}

void func_311(var uParam0)
{
	int iVar0;

	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_312(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_312(int iParam0)
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

bool func_313(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_312(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!UNK_0xE1DBBD6CE209517C(UNK_0xA30EC016B12C03E4()))
	{
		return false;
	}
	if (func_267(0))
	{
		return false;
	}
	if (UNK_0x22A8E52414415B76())
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

bool func_314(bool bParam0)
{
	if (bParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, 26);
}

void func_315(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (UNK_0x8A22C4C08282BF26(joaat("CONTEXT_CONTROLLER")) < 1)
	{
	}
	if (UNK_0x991B1F0980C62628())
	{
		if (!*uParam0 == -1)
		{
			func_311(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
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
			Global_42151[iVar0 /*32*/].f_31 = UNK_0x0D0A574C76D769AC();
			Global_42151[iVar0 /*32*/].f_7 = 0;
			Global_42151[iVar0 /*32*/].f_3 = iParam5;
			if (!UNK_0xEA6BC48857E0AC4C(sParam4))
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
			*uParam0 = Global_42151[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_316(bool bParam0)
{
	if (func_317(bParam0, 1))
	{
		return Global_1628237[func_326() /*615*/].f_11.f_450;
	}
	return -1;
}

bool func_317(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_318(bParam0))
		{
			return false;
		}
	}
	return Global_1628237[bParam0 /*615*/].f_11 != func_411();
}

bool func_318(bool bParam0)
{
	if (bParam0 != func_411())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_411())
		{
			return Global_1628237[bParam0 /*615*/].f_11 == bParam0;
		}
	}
	return false;
}

bool func_319()
{
	if (((((((((func_335("TCP_USED") || func_335("CAS_MG_CBAN")) || func_335("CAS_MG_CTIME")) || func_322("CAS_MG_MEMB2", func_323(1))) || func_335("CAS_MG_SUITE2")) || func_335("CAS_MG_NOCHIPS3")) || func_335("CAS_MG_LOWCHIPS3")) || func_335("CAS_MG_NOCHIPS7")) || func_335("CAS_MG_LOWCHIPS7")) || func_335("TCP_NA"))
	{
		return true;
	}
	return false;
}

void func_320()
{
	if (!UNK_0x7A7BDE279347E517(func_323(0), false, true, 0, -1, 0))
	{
		func_223("MAITRD_M_D0E", -1);
	}
	else if (func_324(UNK_0xD803B885F5E47A62()))
	{
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_5, 31))
	{
	}
	else if (Global_4264528 != 0)
	{
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_1676377.f_5), 30);
	}
}

void func_321(bool bParam0, bool bParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_322(bool bParam0, bool bParam1)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	return UNK_0xE3789B9938DCEAE8(0);
}

bool func_323(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

bool func_324(bool bParam0)
{
	if (bParam0 == func_411())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_369.f_1, 18);
}

bool func_325()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_369.f_1, 18);
}

bool func_326()
{
	return Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11;
}

bool func_327(bool bParam0)
{
	return func_317(UNK_0xD803B885F5E47A62(), bParam0);
}

bool func_328(bool bParam0)
{
	if (bParam0 != func_411())
	{
		return Global_1590535[bParam0 /*876*/].f_274.f_369 != 0;
	}
	return false;
}

int func_329()
{
	if (func_332() <= 0)
	{
		return 0;
	}
	if (func_331() <= 0)
	{
		return 1;
	}
	if (func_330())
	{
		return 2;
	}
	return 3;
}

bool func_330()
{
	return Global_1696061 != 0;
}

int func_331()
{
	return (Global_262145.f_26398 + func_111());
}

int func_332()
{
	return (Global_262145.f_26399 - func_111());
}

bool func_333()
{
	return func_329() != 3;
}

void func_334(bool bParam0)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_335(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

bool func_336(int iParam0, var uParam1)
{
	int iVar0;

	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		case 1:
			iVar0 = 1316161270;
			break;
		case 2:
			iVar0 = 1023703758;
			break;
		case 5:
			iVar0 = 1045499606;
			break;
		case 3:
			iVar0 = 1697066635;
			break;
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!UNK_0x829DE4CDEA2FE156(iVar0))
	{
		return true;
	}
	return false;
}

bool func_337()
{
	return UNK_0x8BB17FEBE0394018() != 0;
}

bool func_338()
{
	if (Global_4254512.f_910 == 1)
	{
		return true;
	}
	return false;
}

void func_339()
{
	if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 != -1)
	{
		Local_1038.f_2 = 0;
		Local_1038.f_3 = 0;
		Local_1038.f_4 = 0;
		Local_1038.f_6 = 0;
		Local_1038.f_22 = 0;
		Local_749[UNK_0xD803B885F5E47A62() /*9*/] = 0;
		Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_6 = 0;
		Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_3 = 0;
		Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_5 = 0;
		Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_4 = 0;
		Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 = -1;
		Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 = -1;
	}
}

bool func_340()
{
	return Global_2537071.f_6591;
}

bool func_341()
{
	if ((func_342() != -1 && func_342() != 28) && func_342() != 17)
	{
		return true;
	}
	return false;
}

int func_342()
{
	return Global_968397;
}

bool func_343()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

bool func_344()
{
	return Global_2450632.f_591;
}

int func_345(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = func_347(bParam0);
	iVar1 = func_346(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1 /*5*/].f_3;
}

int func_346(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42383[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_347(bool bParam0)
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
		if (bParam0 == Global_42383[iVar0 /*5*/].f_1)
		{
			return Global_42383[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_348()
{
	bool bVar0;

	if (func_317(UNK_0xD803B885F5E47A62(), 1))
	{
		bVar0 = func_326();
		if (func_62(bVar0, 1, 1) && UNK_0xEAE0D21A50E6C7F4(Global_1590535[bVar0 /*876*/].f_274.f_369.f_3, 6))
		{
			return true;
		}
		if ((func_353(UNK_0xD803B885F5E47A62(), 0) && func_351(UNK_0xD803B885F5E47A62())) || func_349(UNK_0xD803B885F5E47A62()))
		{
			return true;
		}
	}
	return false;
}

bool func_349(bool bParam0)
{
	if (func_350(bParam0) != func_411())
	{
		return func_350(bParam0) == func_227(bParam0);
	}
	return false;
}

bool func_350(bool bParam0)
{
	return Global_1628237[bParam0 /*615*/].f_11.f_35;
}

bool func_351(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_352(iParam0, 9);
	}
	return false;
}

bool func_352(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

bool func_353(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

bool func_354()
{
	if (func_417(UNK_0xD803B885F5E47A62()) && func_412() != func_411())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[func_412() /*421*/].f_310.f_4, false) || UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_6, 10))
		{
			return false;
		}
	}
	return true;
}

bool func_355(bool bParam0, vector3 vParam1, bool bParam4)
{
	return func_356(UNK_0x68F4C0EC296D3901(bParam0, true), UNK_0xD9522BA9E27E1349(bParam0), vParam1, bParam4);
}

bool func_356(vector3 vParam0, bool bParam3, vector3 vParam4, float fParam7)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { UNK_0x8A5E176FF719A014(0f, 0f, 0f, bParam3, 0f, 1f, 0f) };
	fVar3 = func_357(func_358(vVar0), func_358(vParam4 - vParam0));
	return UNK_0x3DCA5D50DD292443(fVar3) <= fParam7;
}

float func_357(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_358(vector3 vParam0)
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

Vector3 func_359(int iParam0)
{
	if (Local_1038.f_26 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 966.9982f, 31.2594f, 116.2281f;
			case 1:
				return 966.8203f, 31.9305f, 116.2222f;
			case 2:
				return 967.2217f, 32.4899f, 116.2216f;
			case 3:
				return 967.8962f, 32.6604f, 116.218f;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1142.798f, 263.5501f, -51.7869f;
			case 1:
				return 1142.82f, 264.2595f, -51.8004f;
			case 2:
				return 1143.339f, 264.7519f, -51.8289f;
			case 3:
				return 1144.052f, 264.7396f, -51.7913f;
			case 4:
				return 1146.849f, 261.9344f, -51.8167f;
			case 5:
				return 1146.865f, 261.2238f, -51.8003f;
			case 6:
				return 1146.325f, 260.7546f, -51.812f;
			case 7:
				return 1145.63f, 260.7765f, -51.7979f;
			case 8:
				return 1134.411f, 266.1568f, -50.9898f;
			case 9:
				return 1133.708f, 266.1863f, -50.9883f;
			case 10:
				return 1133.242f, 266.7186f, -50.9969f;
			case 11:
				return 1133.261f, 267.4263f, -50.9812f;
			case 12:
				return 1149.42f, 251.1891f, -50.9655f;
			case 13:
				return 1148.727f, 251.1957f, -50.9855f;
			case 14:
				return 1148.236f, 251.7239f, -51.0083f;
			case 15:
				return 1148.262f, 252.4149f, -51.0019f;
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

bool func_360(bool bParam0, vector3 vParam1, float fParam4)
{
	return SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bParam0, true), vParam1) <= (fParam4 * fParam4);
}

Vector3 func_361(int iParam0)
{
	bool bVar0;

	if (Local_1038.f_26 == 1)
	{
		bVar0 = UNK_0x4B72871A3BE7B474(func_76(func_380(iParam0)), 1f, joaat("VW_PROP_CASINO_3CARDPOKER_01B"), 0, 0, 0);
	}
	else if (func_380(iParam0) == 0 || func_380(iParam0) == 1)
	{
		bVar0 = UNK_0x4B72871A3BE7B474(func_76(func_380(iParam0)), 1f, joaat("VW_PROP_CASINO_3CARDPOKER_01"), 0, 0, 0);
	}
	else
	{
		bVar0 = UNK_0x4B72871A3BE7B474(func_76(func_380(iParam0)), 1f, joaat("VW_PROP_CASINO_3CARDPOKER_01B"), 0, 0, 0);
	}
	if (UNK_0xC844350D5D58C99A(bVar0) && UNK_0x1A5AE8A9B1D42A10(bVar0))
	{
		switch (iParam0)
		{
			case 0:
				return UNK_0xDAB786DCAB70E241(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_04"));
			case 1:
				return UNK_0xDAB786DCAB70E241(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_03"));
			case 2:
				return UNK_0xDAB786DCAB70E241(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_02"));
			case 3:
				return UNK_0xDAB786DCAB70E241(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_01"));
			case 4:
				return UNK_0xDAB786DCAB70E241(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_04"));
			case 5:
				return UNK_0xDAB786DCAB70E241(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_03"));
			case 6:
				return UNK_0xDAB786DCAB70E241(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_02"));
			case 7:
				return UNK_0xDAB786DCAB70E241(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_01"));
			case 8:
				return UNK_0xDAB786DCAB70E241(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_04"));
			case 9:
				return UNK_0xDAB786DCAB70E241(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_03"));
			case 10:
				return UNK_0xDAB786DCAB70E241(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_02"));
			case 11:
				return UNK_0xDAB786DCAB70E241(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_01"));
			case 12:
				return UNK_0xDAB786DCAB70E241(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_04"));
			case 13:
				return UNK_0xDAB786DCAB70E241(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_03"));
			case 14:
				return UNK_0xDAB786DCAB70E241(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_02"));
			case 15:
				return UNK_0xDAB786DCAB70E241(bVar0, UNK_0xF653B9B22DA806A9(bVar0, "Chair_Base_01"));
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

bool func_362(int iParam0)
{
	return Global_98796.f_344 == iParam0;
}

void func_363(int iParam0)
{
	Local_1038.f_798 = iParam0;
}

void func_364(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	func_228(&(Local_749[iParam0 /*9*/]), 0);
	Local_749[iParam0 /*9*/].f_7.f_1 = -1;
}

bool func_365()
{
	if (Local_1038.f_26 == 1)
	{
		if (!UNK_0xC844350D5D58C99A(Local_1038.f_34))
		{
			UNK_0x523BCC9DC80CD82F(joaat("VW_PROP_CASINO_3CARDPOKER_01B"));
			if (!UNK_0xB87F6CF6E5628C67(joaat("VW_PROP_CASINO_3CARDPOKER_01B")))
			{
				return false;
			}
			Local_1038.f_34 = UNK_0x7707E48765093646(joaat("VW_PROP_CASINO_3CARDPOKER_01B"), func_76(0), false, false, true);
			UNK_0x08841CDB215AE18F(Local_1038.f_34, func_76(0), 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(Local_1038.f_34, func_75(0));
			UNK_0x1E9649458B15960F(Local_1038.f_34, true);
			UNK_0x71199B01895C6202(joaat("VW_PROP_CASINO_3CARDPOKER_01B"));
		}
		else
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_366(var uParam0, bool bParam1, bool bParam2)
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

bool func_367()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return false;
	}
	return true;
}

void func_368(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			break;
		case 1:
			if ((func_371(UNK_0xD803B885F5E47A62(), 1) || func_371(UNK_0xD803B885F5E47A62(), 2)) || func_370())
			{
				func_228(uParam0, 3);
			}
			break;
		case 2:
			if ((func_371(UNK_0xD803B885F5E47A62(), 1) || func_371(UNK_0xD803B885F5E47A62(), 2)) || func_370())
			{
				func_228(uParam0, 3);
			}
			break;
		case 3:
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_369())
			{
				func_228(uParam0, 8);
			}
			break;
		case 8:
			break;
	}
}

bool func_369()
{
	if ((((func_371(UNK_0xD803B885F5E47A62(), 4) || func_371(UNK_0xD803B885F5E47A62(), 5)) || func_371(UNK_0xD803B885F5E47A62(), 6)) || func_371(UNK_0xD803B885F5E47A62(), 7)) || func_370())
	{
		return true;
	}
	return false;
}

bool func_370()
{
	if (func_71(&(Local_1038.f_794), 3500, 0))
	{
		func_69(&(Local_1038.f_794));
		return true;
	}
	return false;
}

bool func_371(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = iParam1;
	if (bVar0 < 0 || bVar0 >= 32)
	{
		return false;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Local_116.f_600[iParam0], bVar0);
}

void func_372(int iParam0, int iParam1)
{
	Global_22211.f_9 = iParam0;
	Global_22211.f_10 = iParam1;
}

void func_373(bool bParam0)
{
	if (bParam0)
	{
		func_374(1);
		func_263(1);
	}
	if (!UNK_0x1A72D8C9F025E5E3() && !UNK_0x798A3F1296751F46())
	{
		UNK_0x857E3CE01DEA2D26();
		UNK_0x5EEBDFEE72949D59(0);
		UNK_0x18B28213EC89540F(1);
		UNK_0x38C3A68D7861DCFD(2, 200, 1);
		UNK_0x38C3A68D7861DCFD(2, 199, 1);
		UNK_0x558EC149EB2BC0A2(0, 200);
		UNK_0x558EC149EB2BC0A2(2, 200);
		UNK_0x558EC149EB2BC0A2(0, 199);
		UNK_0x558EC149EB2BC0A2(2, 199);
		UNK_0x558EC149EB2BC0A2(0, 201);
		UNK_0x558EC149EB2BC0A2(0, 202);
		UNK_0x558EC149EB2BC0A2(0, 187);
	}
}

void func_374(bool bParam0)
{
	if (bParam0)
	{
		if (func_343())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

void func_375(bool bParam0)
{
	bool bVar0;

	if (Local_1038.f_798 > 2 && UNK_0xA4FD7964FEE91ED8(0) != 4)
	{
		if (((((!func_379() && !func_378()) && !func_377()) && !func_376()) && !func_86(UNK_0xD803B885F5E47A62())) && !UNK_0x0C2635BB5127C8FB())
		{
			func_300(UNK_0xD803B885F5E47A62(), 1, 0, 0);
		}
		func_257();
	}
	if (Local_1038.f_798 > 2)
	{
		func_257();
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, false) || UNK_0xEAE0D21A50E6C7F4(Local_1038.f_20, 3))
	{
		bVar0 = "CasinoUI_Cards_Three";
		if ((func_380(Local_1038.f_18) == 2 || func_380(Local_1038.f_18) == 3) || func_417(UNK_0xD803B885F5E47A62()))
		{
			bVar0 = "CasinoUI_Cards_Three_High";
		}
		func_258(1, -1);
		UNK_0xF5A41F3D3B38EFE3(bVar0);
		iLocal_1942 = 1;
		Local_1038.f_20 = 0;
	}
	if (UNK_0x9F4FE516EAACCFC5(Local_1038.f_13))
	{
		UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		UNK_0x9A8DDC7C522F5BF5(Local_1038.f_13, 0);
		bLocal_1943 = false;
	}
	if (Local_1038.f_31 != -1)
	{
		func_311(&(Local_1038.f_31));
		Local_1038.f_31 = -1;
	}
	if (bParam0)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_1038.f_22, 4) && UNK_0xB4ECF989E2C1DAC8(UNK_0x16F2683693E537C9(), func_92(), "cards_idle", 3))
		{
			Local_1038.f_24 = UNK_0xF66E5A439A080021(func_361(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
			UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1148846080, 0);
			UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
			UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
			UNK_0xF50FD289C7836651(UNK_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_1 - Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
			UNK_0x914E6894744915F8(Local_1038.f_24);
			Local_1038.f_7 = 1;
		}
		else
		{
			Local_1038.f_24 = UNK_0xF66E5A439A080021(func_361(Local_1038.f_18), func_232(Local_1038.f_18), 2, false, false, 1065353216 /* Float: 1f */, 0, 1065353216 /* Float: 1f */);
			UNK_0x753499827286A5DA(UNK_0x16F2683693E537C9(), Local_1038.f_24, func_231(), func_93(Local_1038.f_18), 2f, -2f, 13, 16, 1148846080, 0);
			UNK_0x914E6894744915F8(Local_1038.f_24);
		}
	}
	Local_1038.f_15 = 0;
	Local_1038.f_23 = 0;
	Local_1038.f_22 = 0;
	Local_1038.f_29 = 0;
	Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_6 = 0;
	Local_1038.f_1 = 0;
	Local_1038.f_2 = 0;
	Local_1038.f_3 = 0;
	Local_1038.f_4 = 0;
	Local_1038.f_6 = 0;
	Local_1038.f_14 = 0;
	if (!bParam0)
	{
		func_339();
	}
	Local_1924.f_4 = func_398();
	Local_1924.f_5 = func_206(&uLocal_1899, 0, 0);
	if (Local_1038.f_798 > 2)
	{
		if (Global_262145.f_26042)
		{
			UNK_0xE70629D68EB9B9E0(&Local_1924);
		}
	}
	if (!bParam0)
	{
		UNK_0x0674E58A79778E99(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_4), 3);
	}
	if (bParam0 || Local_1038.f_798 > 2)
	{
		func_250();
	}
	func_363(10);
	func_161(0);
}

bool func_376()
{
	if (UNK_0x8A22C4C08282BF26(joaat("MAINTRANSITION")) > 0)
	{
		return true;
	}
	return false;
}

bool func_377()
{
	return Global_1312877;
}

bool func_378()
{
	if (func_204() == 3 || func_204() == 2)
	{
		return true;
	}
	return false;
}

bool func_379()
{
	if (func_204() == 1 || func_204() == 4)
	{
		return true;
	}
	return false;
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0;
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		case 8:
		case 9:
		case 10:
		case 11:
			return 2;
		case 12:
		case 13:
		case 14:
		case 15:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_381()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < Local_1038.f_26)
	{
		if (!UNK_0xE5DBF9B6126856CA(Local_116.f_50[iVar0]))
		{
		}
		else
		{
			bVar1 = UNK_0x1B50683925F00106(Local_116.f_50[iVar0]);
			if (func_383(bVar1))
			{
				if (func_382(iVar0))
				{
					UNK_0xC6384DBF5F4B354B(bVar1, false, 1);
				}
				else
				{
					UNK_0xC6384DBF5F4B354B(bVar1, true, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_382(int iParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_4, 5) || UNK_0xEAE0D21A50E6C7F4(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_4, 2))
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_4, 3))
	{
		if (Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2 != iParam0)
		{
			return false;
		}
	}
	return true;
}

bool func_383(bool bParam0)
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

void func_384()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_1038.f_26)
	{
		if (Global_2514396 != iVar0 && (Global_2514396 != -1 || func_417(UNK_0xD803B885F5E47A62())))
		{
			if (!UNK_0xC844350D5D58C99A(Local_1038.f_35[iVar0]))
			{
				func_387(iVar0);
			}
			else if (UNK_0xE5DBF9B6126856CA(Local_116.f_50[iVar0]) && !UNK_0xEB6A8945D1AC98A1(UNK_0x1B50683925F00106(Local_116.f_50[iVar0])))
			{
				if (!iLocal_1954[iVar0])
				{
					if (UNK_0xB4ECF989E2C1DAC8(UNK_0x1B50683925F00106(Local_116.f_50[iVar0]), func_45(), func_44(iVar0), 3))
					{
						if (UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iVar0]), 1691374422))
						{
							iLocal_1959[iVar0] = 1;
						}
					}
					else
					{
						iLocal_1959[iVar0] = 0;
					}
					if (((iLocal_1959[iVar0] || UNK_0xB4ECF989E2C1DAC8(UNK_0x1B50683925F00106(Local_116.f_50[iVar0]), func_45(), func_43(iVar0), 3)) || Local_116.f_576[iVar0] == 6) || Local_116.f_576[iVar0] == 7)
					{
						if (!UNK_0xBDEB2DEEF1D23A18(Local_1038.f_35[iVar0]))
						{
							UNK_0x1E9649458B15960F(Local_1038.f_35[iVar0], false);
							UNK_0x9F528B1B53FBC5D9(Local_1038.f_35[iVar0], UNK_0x1B50683925F00106(Local_116.f_50[iVar0]), UNK_0x4A089F2B762B8D33(UNK_0x1B50683925F00106(Local_116.f_50[iVar0]), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
						}
						iLocal_1954[iVar0] = 1;
					}
				}
				else if ((UNK_0xB4ECF989E2C1DAC8(UNK_0x1B50683925F00106(Local_116.f_50[iVar0]), func_45(), func_31(iVar0), 3) && UNK_0xDDCA9A4E51DADA2B(UNK_0x1B50683925F00106(Local_116.f_50[iVar0]), 152918166)) || ((Local_116.f_576[iVar0] < 5 && !UNK_0xB4ECF989E2C1DAC8(UNK_0x1B50683925F00106(Local_116.f_50[iVar0]), func_45(), func_44(iVar0), 3)) && !UNK_0xB4ECF989E2C1DAC8(UNK_0x1B50683925F00106(Local_116.f_50[iVar0]), func_45(), func_43(iVar0), 3)))
				{
					if (UNK_0xBDEB2DEEF1D23A18(Local_1038.f_35[iVar0]))
					{
						UNK_0x15AFB6CBDE990FB6(Local_1038.f_35[iVar0], 1, true);
						UNK_0x08841CDB215AE18F(Local_1038.f_35[iVar0], func_386(iVar0), 0, 0, 1);
						UNK_0xC023D1C4BF532815(Local_1038.f_35[iVar0], func_385(iVar0), 2, 1);
						UNK_0x1E9649458B15960F(Local_1038.f_35[iVar0], true);
					}
					iLocal_1954[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

Vector3 func_385(int iParam0)
{
	vector3 vVar0;

	vVar0 = { UNK_0xEEB20D14BD38615E(func_45(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 2) };
	return vVar0;
}

Vector3 func_386(int iParam0)
{
	vector3 vVar0;

	vVar0 = { UNK_0x1BB04F10296A1C5E(func_45(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 2) };
	return vVar0;
}

void func_387(int iParam0)
{
	bool bVar0;

	if (Local_1038.f_5)
	{
		bVar0 = joaat("VW_PROP_VW_CASINO_CARDS_01");
	}
	else
	{
		bVar0 = joaat("VW_PROP_CASINO_CARDS_01");
	}
	UNK_0x523BCC9DC80CD82F(bVar0);
	if (!UNK_0xB87F6CF6E5628C67(bVar0))
	{
		return;
	}
	UNK_0x3F423BF5B8125A50(func_45());
	if (!UNK_0xB4AE0788C1587752(func_45()))
	{
		return;
	}
	if (!UNK_0xC844350D5D58C99A(Local_1038.f_35[iParam0]))
	{
		Local_1038.f_35[iParam0] = UNK_0xB0BE3DFBBB59A620(bVar0, func_386(iParam0), false, false, true);
		UNK_0x71199B01895C6202(bVar0);
		UNK_0x08841CDB215AE18F(Local_1038.f_35[iParam0], func_386(iParam0), 0, 0, 1);
		UNK_0xC023D1C4BF532815(Local_1038.f_35[iParam0], func_385(iParam0), 2, 1);
		UNK_0x1E9649458B15960F(Local_1038.f_35[iParam0], true);
		UNK_0x8D17794CE3273D70(func_45());
	}
}

void func_388()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;

	if (((func_362(1581559923) || func_362(272405600)) || func_417(UNK_0xD803B885F5E47A62())) && !func_397())
	{
		bLocal_1941 = true;
		if (!bLocal_1940)
		{
			bLocal_1940 = (func_406() && func_396());
		}
	}
	else
	{
		if (bLocal_1941)
		{
			func_407();
			func_394();
			bLocal_1941 = false;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_1038.f_26)
	{
		if (iVar0 != iLocal_1944 && iVar0 != Local_749[UNK_0xD803B885F5E47A62() /*9*/].f_2)
		{
		}
		else
		{
			bVar1 = false;
			if (func_59(iVar0, Local_1038.f_26))
			{
				bVar1 = true;
			}
			vVar3 = { 0f, 0f, func_75(iVar0) };
			iVar6 = 0;
			while (iVar6 < 4)
			{
				iVar7 = Local_116.f_117[(iVar0 * 4 + iVar6)];
				if (iVar7 < 0 || ((!func_362(1581559923) && !func_362(272405600)) && !func_417(UNK_0xD803B885F5E47A62())))
				{
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (UNK_0xC844350D5D58C99A(Local_1038.f_40[func_393(iVar0, iVar6, iVar2)]))
						{
							UNK_0xF690C84DADBB3551(&(Local_1038.f_40[func_393(iVar0, iVar6, iVar2)]));
						}
						iVar2++;
					}
				}
				else
				{
					if (Local_749[iVar7 /*9*/].f_3 > 0)
					{
						if (!UNK_0xC844350D5D58C99A(Local_1038.f_40[func_393(iVar0, iVar6, 0)]))
						{
							if (func_392(Local_749[iVar7 /*9*/].f_3, bVar1) != 0)
							{
								Local_1038.f_40[func_393(iVar0, iVar6, 0)] = UNK_0xB0BE3DFBBB59A620(func_392(Local_749[iVar7 /*9*/].f_3, bVar1), UNK_0x8A5E176FF719A014(func_76(iVar0), vVar3.z, func_391(Local_749[iVar7 /*9*/].f_3, 0, iVar6, bVar1, 0)), false, false, true);
								UNK_0x08841CDB215AE18F(Local_1038.f_40[func_393(iVar0, iVar6, 0)], UNK_0x8A5E176FF719A014(func_76(iVar0), vVar3.z, func_391(Local_749[iVar7 /*9*/].f_3, 0, iVar6, bVar1, 0)), 0, 0, 1);
								UNK_0xC023D1C4BF532815(Local_1038.f_40[func_393(iVar0, iVar6, 0)], vVar3 + func_390(Local_749[iVar7 /*9*/].f_4, 0, iVar6, bVar1), 2, 1);
								if (!UNK_0xEA6BC48857E0AC4C(func_389(Local_749[iVar7 /*9*/].f_3)))
								{
									UNK_0xCEAA091B490F8407(-1, func_389(Local_749[iVar7 /*9*/].f_3), Local_1038.f_40[func_393(iVar0, iVar6, 0)], "dlc_vw_table_games_sounds", 0, 0);
								}
							}
						}
						else if (UNK_0x81D9425174BF4F82(Local_1038.f_40[func_393(iVar0, iVar6, 0)]) != 255)
						{
							UNK_0xF690C84DADBB3551(&(Local_1038.f_40[func_393(iVar0, iVar6, 0)]));
						}
					}
					else if (UNK_0xC844350D5D58C99A(Local_1038.f_40[func_393(iVar0, iVar6, 0)]))
					{
						if (UNK_0x81D9425174BF4F82(Local_1038.f_40[func_393(iVar0, iVar6, 0)]) > 0)
						{
							UNK_0x4FB9A846E72E2F23(Local_1038.f_40[func_393(iVar0, iVar6, 0)], SYSTEM::FLOOR(func_217(SYSTEM::TO_FLOAT(UNK_0x81D9425174BF4F82(Local_1038.f_40[func_393(iVar0, iVar6, 0)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							UNK_0xF690C84DADBB3551(&(Local_1038.f_40[func_393(iVar0, iVar6, 0)]));
						}
					}
					if (Local_749[iVar7 /*9*/].f_5 > 0)
					{
						if (!UNK_0xC844350D5D58C99A(Local_1038.f_40[func_393(iVar0, iVar6, 1)]))
						{
							if (func_392(Local_749[iVar7 /*9*/].f_5, bVar1) != 0)
							{
								Local_1038.f_40[func_393(iVar0, iVar6, 1)] = UNK_0xB0BE3DFBBB59A620(func_392(Local_749[iVar7 /*9*/].f_5, bVar1), UNK_0x8A5E176FF719A014(func_76(iVar0), vVar3.z, func_391(Local_749[iVar7 /*9*/].f_5, 1, iVar6, bVar1, 0)), false, false, true);
								UNK_0x08841CDB215AE18F(Local_1038.f_40[func_393(iVar0, iVar6, 1)], UNK_0x8A5E176FF719A014(func_76(iVar0), vVar3.z, func_391(Local_749[iVar7 /*9*/].f_5, 1, iVar6, bVar1, 0)), 0, 0, 1);
								UNK_0xC023D1C4BF532815(Local_1038.f_40[func_393(iVar0, iVar6, 1)], vVar3 + func_390(Local_749[iVar7 /*9*/].f_4, 1, iVar6, bVar1), 2, 1);
								if (!UNK_0xEA6BC48857E0AC4C(func_389(Local_749[iVar7 /*9*/].f_5)))
								{
									UNK_0xCEAA091B490F8407(-1, func_389(Local_749[iVar7 /*9*/].f_5), Local_1038.f_40[func_393(iVar0, iVar6, 1)], "dlc_vw_table_games_sounds", 0, 0);
								}
							}
						}
						else if (UNK_0x81D9425174BF4F82(Local_1038.f_40[func_393(iVar0, iVar6, 1)]) != 255)
						{
							UNK_0xF690C84DADBB3551(&(Local_1038.f_40[func_393(iVar0, iVar6, 1)]));
						}
					}
					else if (UNK_0xC844350D5D58C99A(Local_1038.f_40[func_393(iVar0, iVar6, 1)]))
					{
						if (UNK_0x81D9425174BF4F82(Local_1038.f_40[func_393(iVar0, iVar6, 1)]) > 0)
						{
							UNK_0x4FB9A846E72E2F23(Local_1038.f_40[func_393(iVar0, iVar6, 1)], SYSTEM::FLOOR(func_217(SYSTEM::TO_FLOAT(UNK_0x81D9425174BF4F82(Local_1038.f_40[func_393(iVar0, iVar6, 1)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							UNK_0xF690C84DADBB3551(&(Local_1038.f_40[func_393(iVar0, iVar6, 1)]));
						}
					}
					if (Local_749[iVar7 /*9*/].f_4 > 0)
					{
						if (!UNK_0xC844350D5D58C99A(Local_1038.f_40[func_393(iVar0, iVar6, 2)]))
						{
							if (func_392(Local_749[iVar7 /*9*/].f_4, bVar1) != 0)
							{
								Local_1038.f_40[func_393(iVar0, iVar6, 2)] = UNK_0xB0BE3DFBBB59A620(func_392(Local_749[iVar7 /*9*/].f_4, bVar1), UNK_0x8A5E176FF719A014(func_76(iVar0), vVar3.z, func_391(Local_749[iVar7 /*9*/].f_4, 2, iVar6, bVar1, 1)), false, false, true);
								UNK_0x08841CDB215AE18F(Local_1038.f_40[func_393(iVar0, iVar6, 2)], UNK_0x8A5E176FF719A014(func_76(iVar0), vVar3.z, func_391(Local_749[iVar7 /*9*/].f_4, 2, iVar6, bVar1, 1)), 0, 0, 1);
								UNK_0xC023D1C4BF532815(Local_1038.f_40[func_393(iVar0, iVar6, 2)], vVar3 + func_390(Local_749[iVar7 /*9*/].f_4, 2, iVar6, bVar1), 2, 1);
								if (!UNK_0xEA6BC48857E0AC4C(func_389(Local_749[iVar7 /*9*/].f_4)))
								{
									UNK_0xCEAA091B490F8407(-1, func_389(Local_749[iVar7 /*9*/].f_4), Local_1038.f_40[func_393(iVar0, iVar6, 2)], "dlc_vw_table_games_sounds", 0, 0);
								}
							}
						}
						else if (UNK_0x81D9425174BF4F82(Local_1038.f_40[func_393(iVar0, iVar6, 2)]) != 255)
						{
							UNK_0xF690C84DADBB3551(&(Local_1038.f_40[func_393(iVar0, iVar6, 2)]));
						}
					}
					else if (UNK_0xC844350D5D58C99A(Local_1038.f_40[func_393(iVar0, iVar6, 2)]))
					{
						if (UNK_0x81D9425174BF4F82(Local_1038.f_40[func_393(iVar0, iVar6, 2)]) > 0)
						{
							UNK_0x4FB9A846E72E2F23(Local_1038.f_40[func_393(iVar0, iVar6, 2)], SYSTEM::FLOOR(func_217(SYSTEM::TO_FLOAT(UNK_0x81D9425174BF4F82(Local_1038.f_40[func_393(iVar0, iVar6, 2)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							UNK_0xF690C84DADBB3551(&(Local_1038.f_40[func_393(iVar0, iVar6, 2)]));
						}
					}
				}
				iVar6++;
			}
			if (!Local_116.f_5[iVar0])
			{
				Local_1038.f_8[iVar0] = 1;
			}
			else
			{
				Local_1038.f_8[iVar0] = 0;
			}
		}
		iVar0++;
	}
	iLocal_1944++;
	if (iLocal_1944 >= Local_1038.f_26)
	{
		iLocal_1944 = 0;
	}
}

char* func_389(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		case 20:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 30:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 40:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 50:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 60:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 70:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 80:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 90:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 100:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		case 150:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 200:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 250:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 300:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 350:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 400:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 450:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 500:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		case 1000:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		case 1500:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 2000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 2500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 3000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 3500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 4000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 4500:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 5000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		case 6000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 7000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 8000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 9000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 10000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		case 15000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		case 20000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		case 25000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		case 30000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		case 35000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		case 40000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		case 45000:
			return "DLC_VW_CHIP_BET_LRG_LARGE";
		case 50000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		default:
			break;
	}
	return "";
}

Vector3 func_390(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 66.96f;
					case 1:
						return 0f, 0f, 66.96f;
					case 2:
						return 0f, 0f, 64.08f;
					default:
						break;
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 21.24f;
					case 1:
						return 0f, 0f, 15.48f;
					case 2:
						return 0f, 0f, 20.16f;
					default:
						break;
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -21.6f;
					case 1:
						return 0f, 0f, -25.56f;
					case 2:
						return 0f, 0f, -21.96f;
					default:
						break;
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -71.64f;
					case 1:
						return 0f, 0f, -70.2f;
					case 2:
						return 0f, 0f, -68.4f;
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 68.76f;
							case 1:
								return 0f, 0f, 68.76f;
							case 2:
								return 0f, 0f, 69.48f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 22.68f;
							case 1:
								return 0f, 0f, 21.96f;
							case 2:
								return 0f, 0f, 22.68f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -21.96f;
							case 1:
								return 0f, 0f, -23.04f;
							case 2:
								return 0f, 0f, -21.6f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -68.04f;
							case 1:
								return 0f, 0f, -69.84f;
							case 2:
								return 0f, 0f, -69.84f;
							default:
								break;
						}
						break;
				}
				break;
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 66.96f;
							case 1:
								return 0f, 0f, 66.96f;
							case 2:
								return 0f, 0f, 64.08f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 21.24f;
							case 1:
								return 0f, 0f, 15.48f;
							case 2:
								return 0f, 0f, 20.16f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -21.6f;
							case 1:
								return 0f, 0f, -25.56f;
							case 2:
								return 0f, 0f, -21.96f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -71.64f;
							case 1:
								return 0f, 0f, -70.2f;
							case 2:
								return 0f, 0f, -68.4f;
							default:
								break;
						}
						break;
				}
				break;
		}
	}
	return 0f, 0f, 0f;
}

Vector3 func_391(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	vector3 vVar1;

	if (!bParam3)
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			case 20:
				fVar0 = 0.896f;
				break;
			case 30:
				fVar0 = 0.901f;
				break;
			case 40:
				fVar0 = 0.907f;
				break;
			case 50:
				fVar0 = 0.95f;
				break;
			case 60:
				fVar0 = 0.917f;
				break;
			case 70:
				fVar0 = 0.922f;
				break;
			case 80:
				fVar0 = 0.927f;
				break;
			case 90:
				fVar0 = 0.932f;
				break;
			case 100:
				fVar0 = 0.95f;
				break;
			case 150:
				fVar0 = 0.904f;
				break;
			case 200:
				fVar0 = 0.899f;
				break;
			case 250:
				fVar0 = 0.914f;
				break;
			case 300:
				fVar0 = 0.904f;
				break;
			case 350:
				fVar0 = 0.924f;
				break;
			case 400:
				fVar0 = 0.91f;
				break;
			case 450:
				fVar0 = 0.935f;
				break;
			case 500:
				fVar0 = 0.95f;
				break;
			case 1000:
				fVar0 = 0.95f;
				break;
			case 1500:
				fVar0 = 0.904f;
				break;
			case 2000:
				fVar0 = 0.899f;
				break;
			case 2500:
				fVar0 = 0.915f;
				break;
			case 3000:
				fVar0 = 0.904f;
				break;
			case 3500:
				fVar0 = 0.925f;
				break;
			case 4000:
				fVar0 = 0.91f;
				break;
			case 4500:
				fVar0 = 0.935f;
				break;
			case 5000:
				fVar0 = 0.95f;
				break;
			case 6000:
				fVar0 = 0.919f;
				break;
			case 7000:
				fVar0 = 0.924f;
				break;
			case 8000:
				fVar0 = 0.93f;
				break;
			case 9000:
				fVar0 = 0.935f;
				break;
			case 10000:
				fVar0 = 0.95f;
				break;
			case 15000:
				fVar0 = 0.902f;
				break;
			case 20000:
				fVar0 = 0.897f;
				break;
			case 25000:
				fVar0 = 0.912f;
				break;
			case 30000:
				fVar0 = 0.902f;
				break;
			case 35000:
				fVar0 = 0.922f;
				break;
			case 40000:
				fVar0 = 0.907f;
				break;
			case 45000:
				fVar0 = 0.932f;
				break;
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						vVar1 = { 0.59535f, 0.200875f, 0f };
						break;
					case 1:
						vVar1 = { 0.51655f, 0.2268f, 0f };
						break;
					case 2:
						vVar1 = { 0.689125f, 0.171575f, 0f };
						break;
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						vVar1 = { 0.247825f, -0.123625f, 0f };
						break;
					case 1:
						vVar1 = { 0.2163f, -0.04745f, 0f };
						break;
					case 2:
						vVar1 = { 0.2869f, -0.211925f, 0f };
						break;
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						vVar1 = { -0.2804f, -0.109775f, 0f };
						break;
					case 1:
						vVar1 = { -0.2552f, -0.031225f, 0f };
						break;
					case 2:
						vVar1 = { -0.30935f, -0.205675f, 0f };
						break;
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						vVar1 = { -0.606975f, 0.249675f, 0f };
						break;
					case 1:
						vVar1 = { -0.529875f, 0.281425f, 0f };
						break;
					case 2:
						vVar1 = { -0.69795f, 0.211525f, 0f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			case 20:
				fVar0 = 0.896f;
				break;
			case 30:
				fVar0 = 0.901f;
				break;
			case 40:
				fVar0 = 0.907f;
				break;
			case 50:
				fVar0 = 0.95f;
				break;
			case 60:
				fVar0 = 0.917f;
				break;
			case 70:
				fVar0 = 0.922f;
				break;
			case 80:
				fVar0 = 0.927f;
				break;
			case 90:
				fVar0 = 0.932f;
				break;
			case 100:
				fVar0 = 0.95f;
				break;
			case 150:
				fVar0 = 0.904f;
				break;
			case 200:
				fVar0 = 0.899f;
				break;
			case 250:
				fVar0 = 0.914f;
				break;
			case 300:
				fVar0 = 0.904f;
				break;
			case 350:
				fVar0 = 0.924f;
				break;
			case 400:
				fVar0 = 0.91f;
				break;
			case 450:
				fVar0 = 0.935f;
				break;
			case 500:
				fVar0 = 0.95f;
				break;
			case 1000:
				fVar0 = 0.95f;
				break;
			case 1500:
				fVar0 = 0.904f;
				break;
			case 2000:
				fVar0 = 0.899f;
				break;
			case 2500:
				fVar0 = 0.915f;
				break;
			case 3000:
				fVar0 = 0.904f;
				break;
			case 3500:
				fVar0 = 0.925f;
				break;
			case 4000:
				fVar0 = 0.91f;
				break;
			case 4500:
				fVar0 = 0.935f;
				break;
			case 5000:
				fVar0 = 0.953f;
				break;
			case 6000:
				fVar0 = 0.919f;
				break;
			case 7000:
				fVar0 = 0.924f;
				break;
			case 8000:
				fVar0 = 0.93f;
				break;
			case 9000:
				fVar0 = 0.935f;
				break;
			case 10000:
				fVar0 = 0.95f;
				break;
			case 15000:
				fVar0 = 0.902f;
				break;
			case 20000:
				fVar0 = 0.897f;
				break;
			case 25000:
				fVar0 = 0.912f;
				break;
			case 30000:
				fVar0 = 0.902f;
				break;
			case 35000:
				fVar0 = 0.922f;
				break;
			case 40000:
				fVar0 = 0.907f;
				break;
			case 45000:
				fVar0 = 0.932f;
				break;
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								vVar1 = { 0.597825f, 0.20105f, 0f };
								break;
							case 1:
								vVar1 = { 0.5151f, 0.22775f, 0f };
								break;
							case 2:
								vVar1 = { 0.686125f, 0.171625f, 0f };
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								vVar1 = { 0.248425f, -0.126325f, 0f };
								break;
							case 1:
								vVar1 = { 0.2144f, -0.04415f, 0f };
								break;
							case 2:
								vVar1 = { 0.285325f, -0.212f, 0f };
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								vVar1 = { -0.281f, -0.111875f, 0f };
								break;
							case 1:
								vVar1 = { -0.254775f, -0.029175f, 0f };
								break;
							case 2:
								vVar1 = { -0.308175f, -0.199325f, 0f };
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								vVar1 = { -0.61015f, 0.24815f, 0f };
								break;
							case 1:
								vVar1 = { -0.527375f, 0.283575f, 0f };
								break;
							case 2:
								vVar1 = { -0.694475f, 0.214225f, 0f };
								break;
						}
						break;
				}
				break;
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								vVar1 = { 0.59535f, 0.200875f, 0f };
								break;
							case 1:
								vVar1 = { 0.51655f, 0.2268f, 0f };
								break;
							case 2:
								vVar1 = { 0.689125f, 0.171575f, 0f };
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								vVar1 = { 0.247825f, -0.123625f, 0f };
								break;
							case 1:
								vVar1 = { 0.2163f, -0.04745f, 0f };
								break;
							case 2:
								vVar1 = { 0.2869f, -0.211925f, 0f };
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								vVar1 = { -0.2804f, -0.109775f, 0f };
								break;
							case 1:
								vVar1 = { -0.2552f, -0.031225f, 0f };
								break;
							case 2:
								vVar1 = { -0.30935f, -0.205675f, 0f };
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								vVar1 = { -0.606975f, 0.249675f, 0f };
								break;
							case 1:
								vVar1 = { -0.529875f, 0.281425f, 0f };
								break;
							case 2:
								vVar1 = { -0.69795f, 0.211525f, 0f };
								break;
						}
						break;
				}
				break;
		}
	}
	if (!bParam4)
	{
		vVar1.f_2 = fVar0;
	}
	else
	{
		vVar1.f_2 = fVar0;
		switch (iParam0)
		{
			case 10:
			case 50:
			case 100:
			case 500:
			case 1000:
			case 5000:
			case 10000:
				vVar1.f_2 = (vVar1.z + 0.004f);
				break;
		}
	}
	return vVar1;
}

int func_392(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 10:
				return joaat("VW_PROP_CHIP_10DOLLAR_X1");
			case 20:
				return joaat("VW_PROP_CHIP_10DOLLAR_ST");
			case 30:
				return joaat("VW_PROP_CHIP_10DOLLAR_ST");
			case 40:
				return joaat("VW_PROP_CHIP_10DOLLAR_ST");
			case 50:
				return joaat("VW_PROP_CHIP_50DOLLAR_X1");
			case 60:
				return joaat("VW_PROP_CHIP_10DOLLAR_ST");
			case 70:
				return joaat("VW_PROP_CHIP_10DOLLAR_ST");
			case 80:
				return joaat("VW_PROP_CHIP_10DOLLAR_ST");
			case 90:
				return joaat("VW_PROP_CHIP_10DOLLAR_ST");
			case 100:
				return joaat("VW_PROP_CHIP_100DOLLAR_X1");
			case 150:
				return joaat("VW_PROP_CHIP_50DOLLAR_ST");
			case 200:
				return joaat("VW_PROP_CHIP_100DOLLAR_ST");
			case 250:
				return joaat("VW_PROP_CHIP_50DOLLAR_ST");
			case 300:
				return joaat("VW_PROP_CHIP_100DOLLAR_ST");
			case 350:
				return joaat("VW_PROP_CHIP_50DOLLAR_ST");
			case 400:
				return joaat("VW_PROP_CHIP_100DOLLAR_ST");
			case 450:
				return joaat("VW_PROP_CHIP_50DOLLAR_ST");
			case 500:
				return joaat("VW_PROP_CHIP_500DOLLAR_X1");
			case 1000:
				return joaat("VW_PROP_CHIP_1KDOLLAR_X1");
			case 1500:
				return joaat("VW_PROP_CHIP_500DOLLAR_ST");
			case 2000:
				return joaat("VW_PROP_CHIP_1KDOLLAR_ST");
			case 2500:
				return joaat("VW_PROP_CHIP_500DOLLAR_ST");
			case 3000:
				return joaat("VW_PROP_CHIP_1KDOLLAR_ST");
			case 3500:
				return joaat("VW_PROP_CHIP_500DOLLAR_ST");
			case 4000:
				return joaat("VW_PROP_CHIP_1KDOLLAR_ST");
			case 4500:
				return joaat("VW_PROP_CHIP_500DOLLAR_ST");
			case 5000:
				return joaat("VW_PROP_CHIP_5KDOLLAR_X1");
			case 6000:
				return joaat("VW_PROP_CHIP_1KDOLLAR_ST");
			case 7000:
				return joaat("VW_PROP_CHIP_1KDOLLAR_ST");
			case 8000:
				return joaat("VW_PROP_CHIP_1KDOLLAR_ST");
			case 9000:
				return joaat("VW_PROP_CHIP_1KDOLLAR_ST");
			case 10000:
				return joaat("VW_PROP_CHIP_10KDOLLAR_X1");
			case 15000:
				return joaat("VW_PROP_CHIP_5KDOLLAR_ST");
			case 20000:
				return joaat("VW_PROP_CHIP_10KDOLLAR_ST");
			case 25000:
				return joaat("VW_PROP_CHIP_5KDOLLAR_ST");
			case 30000:
				return joaat("VW_PROP_CHIP_10KDOLLAR_ST");
			case 35000:
				return joaat("VW_PROP_CHIP_5KDOLLAR_ST");
			case 40000:
				return joaat("VW_PROP_CHIP_10KDOLLAR_ST");
			case 45000:
				return joaat("VW_PROP_CHIP_5KDOLLAR_ST");
			case 50000:
				return joaat("VW_PROP_CHIP_10KDOLLAR_ST");
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				return joaat("VW_PROP_CHIP_10DOLLAR_X1");
			case 20:
				return joaat("VW_PROP_CHIP_10DOLLAR_ST");
			case 30:
				return joaat("VW_PROP_CHIP_10DOLLAR_ST");
			case 40:
				return joaat("VW_PROP_CHIP_10DOLLAR_ST");
			case 50:
				return joaat("VW_PROP_CHIP_50DOLLAR_X1");
			case 60:
				return joaat("VW_PROP_CHIP_10DOLLAR_ST");
			case 70:
				return joaat("VW_PROP_CHIP_10DOLLAR_ST");
			case 80:
				return joaat("VW_PROP_CHIP_10DOLLAR_ST");
			case 90:
				return joaat("VW_PROP_CHIP_10DOLLAR_ST");
			case 100:
				return joaat("VW_PROP_CHIP_100DOLLAR_X1");
			case 150:
				return joaat("VW_PROP_CHIP_50DOLLAR_ST");
			case 200:
				return joaat("VW_PROP_CHIP_100DOLLAR_ST");
			case 250:
				return joaat("VW_PROP_CHIP_50DOLLAR_ST");
			case 300:
				return joaat("VW_PROP_CHIP_100DOLLAR_ST");
			case 350:
				return joaat("VW_PROP_CHIP_50DOLLAR_ST");
			case 400:
				return joaat("VW_PROP_CHIP_100DOLLAR_ST");
			case 450:
				return joaat("VW_PROP_CHIP_50DOLLAR_ST");
			case 500:
				return joaat("VW_PROP_CHIP_500DOLLAR_X1");
			case 1000:
				return joaat("VW_PROP_CHIP_1KDOLLAR_X1");
			case 1500:
				return joaat("VW_PROP_CHIP_500DOLLAR_ST");
			case 2000:
				return joaat("VW_PROP_CHIP_1KDOLLAR_ST");
			case 2500:
				return joaat("VW_PROP_CHIP_500DOLLAR_ST");
			case 3000:
				return joaat("VW_PROP_CHIP_1KDOLLAR_ST");
			case 3500:
				return joaat("VW_PROP_CHIP_500DOLLAR_ST");
			case 4000:
				return joaat("VW_PROP_CHIP_1KDOLLAR_ST");
			case 4500:
				return joaat("VW_PROP_CHIP_500DOLLAR_ST");
			case 5000:
				return joaat("VW_PROP_PLAQ_5KDOLLAR_X1");
			case 6000:
				return joaat("VW_PROP_CHIP_1KDOLLAR_ST");
			case 7000:
				return joaat("VW_PROP_CHIP_1KDOLLAR_ST");
			case 8000:
				return joaat("VW_PROP_CHIP_1KDOLLAR_ST");
			case 9000:
				return joaat("VW_PROP_CHIP_1KDOLLAR_ST");
			case 10000:
				return joaat("VW_PROP_PLAQ_10KDOLLAR_X1");
			case 15000:
				return joaat("VW_PROP_PLAQ_5KDOLLAR_ST");
			case 20000:
				return joaat("VW_PROP_PLAQ_10KDOLLAR_ST");
			case 25000:
				return joaat("VW_PROP_PLAQ_5KDOLLAR_ST");
			case 30000:
				return joaat("VW_PROP_PLAQ_10KDOLLAR_ST");
			case 35000:
				return joaat("VW_PROP_PLAQ_5KDOLLAR_ST");
			case 40000:
				return joaat("VW_PROP_PLAQ_10KDOLLAR_ST");
			case 45000:
				return joaat("VW_PROP_PLAQ_5KDOLLAR_ST");
			case 50000:
				return joaat("VW_PROP_PLAQ_10KDOLLAR_ST");
			default:
				break;
		}
	}
	return 0;
}

int func_393(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 3 * 4 + iParam1 * 3) + iParam2);
}

void func_394()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 18)
	{
		bVar1 = func_395(iVar0);
		UNK_0x71199B01895C6202(bVar1);
		iVar0++;
	}
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("VW_PROP_CHIP_10DOLLAR_X1");
		case 1:
			return joaat("VW_PROP_CHIP_50DOLLAR_X1");
		case 2:
			return joaat("VW_PROP_CHIP_100DOLLAR_X1");
		case 3:
			return joaat("VW_PROP_CHIP_500DOLLAR_X1");
		case 4:
			return joaat("VW_PROP_CHIP_1KDOLLAR_X1");
		case 5:
			return joaat("VW_PROP_CHIP_5KDOLLAR_X1");
		case 6:
			return joaat("VW_PROP_CHIP_10KDOLLAR_X1");
		case 7:
			return joaat("VW_PROP_CHIP_10DOLLAR_ST");
		case 8:
			return joaat("VW_PROP_CHIP_50DOLLAR_ST");
		case 9:
			return joaat("VW_PROP_CHIP_100DOLLAR_ST");
		case 10:
			return joaat("VW_PROP_CHIP_500DOLLAR_ST");
		case 11:
			return joaat("VW_PROP_CHIP_1KDOLLAR_ST");
		case 12:
			return joaat("VW_PROP_CHIP_5KDOLLAR_ST");
		case 13:
			return joaat("VW_PROP_CHIP_10KDOLLAR_ST");
		case 14:
			return joaat("VW_PROP_PLAQ_5KDOLLAR_X1");
		case 15:
			return joaat("VW_PROP_PLAQ_5KDOLLAR_ST");
		case 16:
			return joaat("VW_PROP_PLAQ_10KDOLLAR_X1");
		case 17:
			return joaat("VW_PROP_PLAQ_10KDOLLAR_ST");
		default:
			break;
	}
	return 0;
}

bool func_396()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 18)
	{
		bVar1 = func_395(iVar0);
		UNK_0x523BCC9DC80CD82F(bVar1);
		if (!UNK_0xB87F6CF6E5628C67(bVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_397()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_6, 12);
}

int func_398()
{
	return func_399(8248, -1, 0);
}

int func_399(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_400(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_400(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_137();
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

void func_401()
{
	if (Local_1038.f_26 == 1)
	{
		if (!UNK_0xC844350D5D58C99A(bLocal_1951))
		{
			bLocal_1951 = UNK_0x4B72871A3BE7B474(func_76(0), 1f, joaat("VW_PROP_CASINO_3CARDPOKER_01B"), 0, 0, 0);
		}
		else if (func_412() != func_411() && UNK_0x757EF87A33649210())
		{
			if (UNK_0xB02B5A3616555A54(bLocal_1951) != func_402(func_412()))
			{
				UNK_0x4EBF23A230F3B12C(bLocal_1951, func_402(func_412()));
			}
		}
	}
	else
	{
		if (!UNK_0xC844350D5D58C99A(bLocal_1952))
		{
			bLocal_1952 = UNK_0x4B72871A3BE7B474(1133.74f, 266.6947f, -52.0409f, 1f, joaat("VW_PROP_CASINO_3CARDPOKER_01B"), 0, 0, 0);
		}
		else if (UNK_0xB02B5A3616555A54(bLocal_1952) != 3)
		{
			UNK_0x4EBF23A230F3B12C(bLocal_1952, 3);
		}
		if (!UNK_0xC844350D5D58C99A(bLocal_1953))
		{
			bLocal_1953 = UNK_0x4B72871A3BE7B474(1148.74f, 251.6947f, -52.0409f, 1f, joaat("VW_PROP_CASINO_3CARDPOKER_01B"), 0, 0, 0);
		}
		else if (UNK_0xB02B5A3616555A54(bLocal_1953) != 3)
		{
			UNK_0x4EBF23A230F3B12C(bLocal_1953, 3);
		}
	}
}

int func_402(bool bParam0)
{
	if (func_405(bParam0))
	{
		return 1;
	}
	else if (func_404(bParam0))
	{
		return 2;
	}
	else if (func_403(bParam0))
	{
		return 3;
	}
	return 1;
}

bool func_403(bool bParam0)
{
	if (bParam0 != func_411())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_369.f_1, 21);
	}
	return false;
}

bool func_404(bool bParam0)
{
	if (bParam0 != func_411())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_369.f_1, 20);
	}
	return false;
}

bool func_405(bool bParam0)
{
	if (bParam0 != func_411())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_369.f_1, 19);
	}
	return false;
}

bool func_406()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		bVar2 = func_40(iVar1, Local_1038.f_5);
		UNK_0x523BCC9DC80CD82F(bVar2);
		if (!UNK_0xB87F6CF6E5628C67(bVar2))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_407()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		bVar2 = func_40(iVar1, Local_1038.f_5);
		UNK_0x71199B01895C6202(bVar2);
		iVar0++;
	}
}

bool func_408()
{
	if (UNK_0x8CD06866876216F2() && UNK_0xBFF81ED3B99522C7())
	{
		return true;
	}
	return false;
}

int func_409()
{
	return func_410(UNK_0xD803B885F5E47A62());
}

int func_410(int iParam0)
{
	return UNK_0xDC4DD3980107166C(Global_2425662[iParam0 /*421*/].f_310.f_3, 28, 31);
}

bool func_411()
{
	return -1;
}

bool func_412()
{
	return func_413(UNK_0xD803B885F5E47A62());
}

bool func_413(bool bParam0)
{
	int iVar0;

	if (bParam0 == func_411())
	{
		return bParam0;
	}
	if (func_415(bParam0) != -1)
	{
		iVar0 = func_414(func_415(bParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_317(bParam0, 0))
			{
				return func_227(bParam0);
			}
			return bParam0;
		}
		else if (iVar0 == 3)
		{
			return func_411();
		}
		return Global_2425662[bParam0 /*421*/].f_310.f_8;
	}
	return func_411();
}

int func_414(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
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
			return 1;
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
		case 81:
			return 5;
		case 82:
			return 6;
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
		case 88:
			return 8;
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
		case 101:
			return 10;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
		case 117:
			return 12;
		case 122:
			return 13;
		case 123:
			return 14;
		case 124:
			return 15;
		case 125:
			return 16;
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
		case 145:
			return 18;
	}
	return -1;
}

int func_415(bool bParam0)
{
	if (bParam0 != func_411())
	{
		if (func_62(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5;
		}
		else if (((Global_1312877 || Global_2405072.f_2671) && bParam0 == UNK_0xD803B885F5E47A62()) && func_62(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5;
		}
	}
	return -1;
}

bool func_416(bool bParam0)
{
	if (bParam0 != func_411() && func_62(bParam0, 1, 1))
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_310, 4);
	}
	return false;
}

bool func_417(bool bParam0)
{
	if (bParam0 != func_411())
	{
		if (func_62(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_414(Global_2425662[bParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return false;
}

bool func_418(bool bParam0)
{
	if (bParam0 != func_411())
	{
		if (func_62(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_414(Global_2425662[bParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return false;
}

bool func_419()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1676377.f_3, 2);
}

void func_420()
{
	if (Local_1038.f_798 > 2)
	{
		if (Global_262145.f_26036)
		{
			UNK_0x1787A8354D584871(&Local_1901);
		}
	}
	if (UNK_0x562F77A7F33D2E46("DLC_VW_Casino_Table_Games"))
	{
		UNK_0x8910D3D58E0132B8("DLC_VW_Casino_Table_Games");
	}
	if (UNK_0x562F77A7F33D2E46("DLC_VW_Casino_Cards_Focus_Hand"))
	{
		UNK_0x8910D3D58E0132B8("DLC_VW_Casino_Cards_Focus_Hand");
	}
	func_375(0);
	func_407();
	func_394();
	func_423();
	func_422();
	if (UNK_0xC844350D5D58C99A(Local_1038.f_34))
	{
		UNK_0xF690C84DADBB3551(&(Local_1038.f_34));
	}
	if (Local_1038.f_798 > 0)
	{
		UNK_0x8D17794CE3273D70(func_45());
		UNK_0x8D17794CE3273D70(func_78());
		UNK_0x8D17794CE3273D70(func_92());
		UNK_0x8D17794CE3273D70(func_231());
	}
	Global_1696046 = 0;
	func_421();
}

void func_421()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_422()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (UNK_0xC844350D5D58C99A(Local_1038.f_35[iVar0]))
		{
			if (UNK_0xD59B17D2DFF98E26(Local_1038.f_35[iVar0]))
			{
				UNK_0x15AFB6CBDE990FB6(Local_1038.f_35[iVar0], 1, true);
			}
			UNK_0xF690C84DADBB3551(&(Local_1038.f_35[iVar0]));
		}
		iVar0++;
	}
}

void func_423()
{
	int iVar0;
	int iVar1;

	iVar0 = 48;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (UNK_0xC844350D5D58C99A(Local_1038.f_40[iVar1]))
		{
			UNK_0xF690C84DADBB3551(&(Local_1038.f_40[iVar1]));
		}
		iVar1++;
	}
}

bool func_424()
{
	var uVar0;

	func_432(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_431())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_430())
	{
		return true;
	}
	if (func_429(159))
	{
		if (!func_428())
		{
			return true;
		}
	}
	if (func_429(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_425() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_425()) == 0)
		{
			return true;
		}
	}
	return false;
}

int func_425()
{
	switch (func_427())
	{
		case 0:
			return func_426();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_426()
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

int func_427()
{
	return Global_30768;
}

bool func_428()
{
	return Global_2450632.f_598;
}

bool func_429(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_430()
{
	return Global_2460680;
}

bool func_431()
{
	return Global_2450632.f_593;
}

void func_432(var uParam0)
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
					func_433(iVar0);
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

void func_433(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_62(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_434(bVar4, &bVar5))
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

bool func_434(bool bParam0, bool bParam1)
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

void func_435()
{
	int iVar0;

	if (Global_1696039)
	{
		Global_1696039 = 0;
	}
	if (func_417(UNK_0xD803B885F5E47A62()) && func_412() != func_411())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[func_412() /*421*/].f_310.f_4, 4))
		{
			Local_1038.f_5 = 1;
		}
	}
	while (!(Global_2514396 != -1 || func_417(UNK_0xD803B885F5E47A62())))
	{
		if (!UNK_0x8CD06866876216F2())
		{
			func_420();
		}
		if (func_424())
		{
			func_420();
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = -1;
	if (func_417(UNK_0xD803B885F5E47A62()))
	{
		iVar0 = func_439();
	}
	UNK_0x37AD2AB54480FA6A(32, 0, iVar0);
	func_437(0, -1, 0);
	UNK_0x9752E7BAEABA939E(&Local_116, 633);
	UNK_0x35B62793EAE9ADDF(&Local_749, 289);
	if (func_417(UNK_0xD803B885F5E47A62()))
	{
		while (!UNK_0x081C8BC5094A7B76(15))
		{
			SYSTEM::WAIT(0);
		}
		Local_1038.f_26 = 1;
		UNK_0x991E101AF0F7523A(1);
		UNK_0xE57F9AD44D9539F1(15);
	}
	else
	{
		while (!UNK_0x081C8BC5094A7B76(45))
		{
			SYSTEM::WAIT(0);
		}
		UNK_0x991E101AF0F7523A(3);
		UNK_0xE57F9AD44D9539F1(45);
	}
	if (!func_436())
	{
		func_420();
	}
	if (UNK_0x8CD06866876216F2())
	{
		UNK_0x256D93AFAE851A7A(0);
	}
	else
	{
		func_420();
	}
	if (UNK_0xBFF81ED3B99522C7())
	{
		if (func_417(UNK_0xD803B885F5E47A62()))
		{
			Local_116.f_15[0] = UNK_0x09AC81E49EA267F7(false, 14);
		}
		else
		{
			Local_116.f_15[0] = Global_2514414[0];
			Local_116.f_15[1] = Global_2514414[1];
			Local_116.f_15[2] = Global_2514414[2];
			Local_116.f_15[3] = Global_2514414[3];
		}
	}
	Global_1696046 = 1;
}

bool func_436()
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
		if (func_431())
		{
			return false;
		}
		if (func_429(157))
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

int func_437(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_421();
			}
			else
			{
				return 0;
			}
		}
		if (!func_438())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_421();
					}
					else
					{
						return 0;
					}
				}
				if (func_431())
				{
					if (!bParam2)
					{
						func_421();
					}
					else
					{
						return 0;
					}
				}
				if (func_429(157))
				{
					if (!bParam2)
					{
						func_421();
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
					func_421();
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
				func_421();
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
			func_421();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_438()
{
	return Global_1312854;
}

int func_439()
{
	var uVar0;

	uVar0 = Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_310.f_6;
	return uVar0;
}

