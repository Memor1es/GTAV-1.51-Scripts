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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	void fLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	bool bLocal_85[130] = { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
	bool bLocal_216[130] = { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
	var uLocal_347 = 0;
	int iLocal_348 = 0;
	bool bLocal_349 = false;
	var uLocal_350[4] = { 0, 0, 0, 0 };
	var uLocal_355[4] = { 0, 0, 0, 0 };
	int iLocal_360[4] = { 0, 0, 0, 0 };
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	vector3 vLocal_374[130] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_765 = 0;
	bool bLocal_766 = false;
	bool bLocal_767 = false;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	int iLocal_775[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_786 = 0;
	int iLocal_787[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_798 = 0;
	bool bLocal_799 = false;
	struct<2> Local_800 = { -1, -1 } ;
	struct<730> Local_802 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	struct<535> Local_1552 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_2087 = -1;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = -1082130432;
	var uLocal_2110 = 3;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = -1;
	var uLocal_2127 = 0;
	var uLocal_2128 = -1;
	var uLocal_2129 = -1;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = -1082130432;
	var uLocal_2152 = 3;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = -1;
	var uLocal_2169 = 0;
	var uLocal_2170 = -1;
	var uLocal_2171 = -1;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = -1082130432;
	var uLocal_2194 = 3;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = -1;
	var uLocal_2211 = 0;
	var uLocal_2212 = -1;
	var uLocal_2213 = -1;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = -1082130432;
	var uLocal_2236 = 3;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = -1;
	var uLocal_2253 = 0;
	var uLocal_2254 = -1;
	var uLocal_2255 = -1;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = -1082130432;
	var uLocal_2278 = 3;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = -1;
	var uLocal_2295 = 0;
	var uLocal_2296 = -1;
	var uLocal_2297 = -1;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = -1082130432;
	var uLocal_2320 = 3;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = -1;
	var uLocal_2337 = 0;
	var uLocal_2338 = -1;
	var uLocal_2339 = -1;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = -1082130432;
	var uLocal_2362 = 3;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = -1;
	var uLocal_2379 = 0;
	var uLocal_2380 = -1;
	var uLocal_2381 = -1;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = -1082130432;
	var uLocal_2404 = 3;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = -1;
	var uLocal_2421 = 0;
	var uLocal_2422 = -1;
	var uLocal_2423 = -1;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = -1082130432;
	var uLocal_2446 = 3;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = -1;
	var uLocal_2463 = 0;
	var uLocal_2464 = -1;
	var uLocal_2465 = -1;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = -1082130432;
	var uLocal_2488 = 3;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = -1;
	var uLocal_2505 = 0;
	var uLocal_2506 = -1;
	var uLocal_2507 = -1;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = -1082130432;
	var uLocal_2530 = 3;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = -1;
	var uLocal_2547 = 0;
	var uLocal_2548 = -1;
	var uLocal_2549 = -1;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = -1082130432;
	var uLocal_2572 = 3;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = -1;
	var uLocal_2589 = 0;
	var uLocal_2590 = -1;
	var uLocal_2591 = -1;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = -1082130432;
	var uLocal_2614 = 3;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = -1;
	var uLocal_2631 = 0;
	var uLocal_2632 = -1;
	var uLocal_2633 = -1;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = -1082130432;
	var uLocal_2656 = 3;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = -1;
	var uLocal_2673 = 0;
	var uLocal_2674 = -1;
	var uLocal_2675 = -1;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = -1082130432;
	var uLocal_2698 = 3;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = -1;
	var uLocal_2715 = 0;
	var uLocal_2716 = -1;
	var uLocal_2717 = -1;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = -1082130432;
	var uLocal_2740 = 3;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = -1;
	var uLocal_2757 = 0;
	var uLocal_2758 = -1;
	var uLocal_2759 = -1;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = -1082130432;
	var uLocal_2782 = 3;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = -1;
	var uLocal_2799 = 0;
	var uLocal_2800 = -1;
	var uLocal_2801 = -1;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = -1082130432;
	var uLocal_2824 = 3;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = -1;
	var uLocal_2841 = 0;
	var uLocal_2842 = -1;
	var uLocal_2843 = -1;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = -1082130432;
	var uLocal_2866 = 3;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = -1;
	var uLocal_2883 = 0;
	var uLocal_2884 = -1;
	var uLocal_2885 = -1;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = -1082130432;
	var uLocal_2908 = 3;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = -1;
	var uLocal_2925 = 0;
	var uLocal_2926 = -1;
	var uLocal_2927 = -1;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = -1082130432;
	var uLocal_2950 = 3;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = -1;
	var uLocal_2967 = 0;
	var uLocal_2968 = -1;
	var uLocal_2969 = -1;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = -1082130432;
	var uLocal_2992 = 3;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = -1;
	var uLocal_3009 = 0;
	var uLocal_3010 = -1;
	var uLocal_3011 = -1;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = -1082130432;
	var uLocal_3034 = 3;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = -1;
	var uLocal_3051 = 0;
	var uLocal_3052 = -1;
	var uLocal_3053 = -1;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = -1082130432;
	var uLocal_3076 = 3;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = -1;
	var uLocal_3093 = 0;
	var uLocal_3094 = -1;
	var uLocal_3095 = -1;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = -1082130432;
	var uLocal_3118 = 3;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = -1;
	var uLocal_3135 = 0;
	var uLocal_3136 = -1;
	var uLocal_3137 = -1;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = -1082130432;
	var uLocal_3160 = 3;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = -1;
	var uLocal_3177 = 0;
	var uLocal_3178 = -1;
	var uLocal_3179 = -1;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = -1082130432;
	var uLocal_3202 = 3;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = -1;
	var uLocal_3219 = 0;
	var uLocal_3220 = -1;
	var uLocal_3221 = -1;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = -1082130432;
	var uLocal_3244 = 3;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = -1;
	var uLocal_3261 = 0;
	var uLocal_3262 = -1;
	var uLocal_3263 = -1;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = -1082130432;
	var uLocal_3286 = 3;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = -1;
	var uLocal_3303 = 0;
	var uLocal_3304 = -1;
	var uLocal_3305 = -1;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = -1082130432;
	var uLocal_3328 = 3;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = -1;
	var uLocal_3345 = 0;
	var uLocal_3346 = -1;
	var uLocal_3347 = -1;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = -1082130432;
	var uLocal_3370 = 3;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = -1;
	var uLocal_3387 = 0;
	var uLocal_3388 = -1;
	var uLocal_3389 = -1;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = -1082130432;
	var uLocal_3412 = 3;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = -1;
	var uLocal_3429 = 0;
	var uLocal_3430 = -1;
	struct<12> Local_3431 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_3443[32];
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_722(ScriptParam_0))
		{
			func_684();
		}
	}
	while (true)
	{
		func_683();
		if (func_676() || func_674())
		{
			func_684();
		}
		func_647();
		switch (func_646(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_645() == 1)
				{
					if (func_643())
					{
						func_642(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1);
					}
				}
				break;
			case 1:
				if (func_645() == 1)
				{
					func_137();
					func_125();
				}
				else if (func_645() == 3)
				{
					func_642(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 3);
				}
				break;
			case 3:
				func_684();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_645())
			{
				case 0:
					if (func_108())
					{
						func_107(1);
					}
					break;
				case 1:
					if (Local_802.f_8 == 6)
					{
						func_107(2);
					}
					else
					{
						func_3();
					}
					break;
				case 2:
					if (func_1(&uLocal_372, 1000, 0))
					{
						func_107(3);
					}
					break;
				case 3:
					func_684();
					break;
			}
		}
	}
}

bool func_1(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_2(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::IS_TIME_EQUAL_TO(NETWORK::_0xBA7F0B77D80A4EB7(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (MISC::ABSI(NETWORK::IS_TIME_EQUAL_TO(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::_0xBA7F0B77D80A4EB7();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	if (func_35(2, 0, 0, 0, 0))
	{
		if (!MISC::IS_BIT_SET(Local_802.f_2, 2))
		{
			Local_802.f_1 = NETWORK::_0xBA7F0B77D80A4EB7();
			MISC::SET_BIT(&(Local_802.f_2), 2);
		}
	}
	switch (Local_802.f_8)
	{
		case 0:
			if (func_34())
			{
				if (func_24())
				{
					func_23(1);
				}
			}
			else
			{
				func_23(1);
			}
			break;
		case 1:
			if (func_1(&(Local_802.f_667), Global_262145.f_11114, 0) || MISC::IS_BIT_SET(Local_802.f_2, 2))
			{
				func_23(2);
			}
			func_24();
			break;
		case 2:
			Local_802.f_9 = NETWORK::_0xBA7F0B77D80A4EB7();
			func_23(3);
			break;
		case 3:
			if ((func_22() || func_1(&(Local_802.f_661), Global_262145.f_11113, 0)) || MISC::IS_BIT_SET(Local_802.f_2, 2))
			{
				if (!MISC::IS_BIT_SET(Local_802.f_2, 1) && func_21())
				{
					func_20(&(Local_802.f_661), 0, 0);
					MISC::SET_BIT(&(Local_802.f_2), 1);
				}
				else
				{
					func_23(4);
					Local_802.f_1 = NETWORK::_0xBA7F0B77D80A4EB7();
				}
			}
			func_8();
			iLocal_81++;
			if (iLocal_81 >= Local_802.f_709)
			{
				iLocal_81 = 0;
			}
			func_24();
			break;
		case 4:
			if (func_1(&(Local_802.f_663), 20000, 0) || func_5())
			{
				if (func_34())
				{
					func_20(&(Local_802.f_669), 0, 0);
					func_23(5);
				}
				else
				{
					func_23(6);
				}
			}
			func_24();
			break;
		case 5:
			if (func_4())
			{
				func_23(6);
			}
			break;
		case 6:
			break;
	}
}

bool func_4()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_802.f_729[iVar0 /*2*/].f_1) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_802.f_729[iVar0 /*2*/].f_1), false))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_5()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (!func_6(bVar1))
			{
				if ((!MISC::IS_BIT_SET(Local_3443[iVar0 /*5*/].f_2, 0) || Local_3443[iVar0 /*5*/].f_3 != 6) || (MISC::IS_BIT_SET(Local_802.f_2, 0) && !MISC::IS_BIT_SET(Local_3443[iVar0 /*5*/].f_2, 1)))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_6(bool bParam0)
{
	if (func_7(bParam0))
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 8);
}

bool func_7(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 2);
}

void func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0;
	while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
		{
			MISC::SET_BIT(&iVar3, iVar2);
		}
		else
		{
			func_19(iVar2);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (MISC::IS_BIT_SET(iVar3, iVar2))
		{
			if (func_18(iVar2))
			{
				iVar1++;
			}
			iVar0++;
			func_15(iVar2);
			func_9(iVar2);
			MISC::SET_BIT(&(Local_802.f_673), iVar2);
		}
		iVar2++;
	}
	if (iVar0 > Local_802.f_727)
	{
		Local_802.f_727 = iVar0;
	}
	else
	{
		Local_802.f_726 = (Local_802.f_727 - iVar0);
	}
	if (iVar1 > Local_802.f_728)
	{
		Local_802.f_728 = iVar1;
	}
}

void func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Local_3443[iParam0 /*5*/].f_4;
	iVar2 = -2;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (Local_802.f_674[iVar1] == iParam0)
		{
			iVar1 = 32;
		}
		else if (iVar2 >= -1)
		{
			if (iVar2 >= 0)
			{
				func_14(&(Local_802.f_674[iVar1]), &iVar2);
			}
		}
		else if (Local_802.f_674[iVar1] < 0 || iVar0 > Local_3443[Local_802.f_674[iVar1] /*5*/].f_4)
		{
			iVar2 = Local_802.f_674[iVar1];
			if (iVar0 != 0)
			{
				func_10(Local_802.f_674[iVar1], iParam0, iVar1);
			}
			Local_802.f_674[iVar1] = iParam0;
			iVar3 = iVar1 + 1;
			while (iVar3 <= 31)
			{
				if (Local_802.f_674[iVar3] == iParam0)
				{
					Local_802.f_674[iVar3] = -1;
				}
				iVar3++;
			}
		}
		iVar1++;
	}
}

void func_10(var uParam0, int iParam1, int iParam2)
{
	struct<14> Var0;
	int iVar14;

	iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
	if (iParam2 == 0)
	{
		Var0.f_2 = -357928750;
		Var0.f_10 = iVar14;
		func_11(Var0, func_12(1));
	}
}

void func_11(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_12(bool bParam0)
{
	var uVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_13(bVar2, 0, 0))
			{
				if (bVar2 != PLAYER::PLAYER_ID() || bParam0)
				{
					MISC::SET_BIT(&uVar0, bVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_13(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
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

void func_14(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
	iVar0 = iVar3;
	if (Global_2537071.f_4972.f_38[iVar0] >= 0)
	{
		iVar4 = Global_2537071.f_4972.f_38[iVar0];
		iVar1 = Global_2537071.f_4972.f_5[iVar0];
		if (!MISC::IS_BIT_SET(Local_802.f_3[func_17(iVar4)], func_16(iVar4)))
		{
			if (MISC::IS_BIT_SET(Global_2537071.f_4972[func_17(iVar4)], func_16(iVar4)))
			{
				if (func_1(&uLocal_370, 750, 0))
				{
					if (iVar1 != 0)
					{
						if (iVar1 < iVar2 || iVar2 == 0)
						{
							iVar2 = iVar1;
							Local_802.f_10[iVar4 /*5*/].f_3 = iParam0;
							Global_2537071.f_4972.f_38[iVar0] = -1;
							MISC::SET_BIT(&(Local_802.f_3[func_17(iVar4)]), func_16(iVar4));
							Local_802.f_708 = (Local_802.f_708 - 1);
						}
					}
				}
			}
		}
	}
}

int func_16(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_17(iParam0) * 31);
}

int func_17(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

bool func_18(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 32)
	{
		return Local_3443[iParam0 /*5*/].f_4 > 0;
	}
	return false;
}

void func_19(int iParam0)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_BIT_SET(Local_802.f_673, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_802.f_674[iVar0] == iParam0)
			{
				Local_802.f_674[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_802.f_709)
		{
			if (Local_802.f_10[iVar1 /*5*/].f_3 == iParam0)
			{
				Local_802.f_10[iVar1 /*5*/].f_3 = -1;
			}
			iVar1++;
		}
		MISC::CLEAR_BIT(&(Local_802.f_673), iParam0);
	}
}

void func_20(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::_0xBA7F0B77D80A4EB7();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

bool func_21()
{
	return false;
}

bool func_22()
{
	if (Local_802.f_708 > 0)
	{
		return false;
	}
	if (func_1(&(Local_802.f_671), 750, 0))
	{
		MISC::SET_BIT(&(Local_802.f_2), 0);
		return true;
	}
	return false;
}

void func_23(int iParam0)
{
	Local_802.f_8 = iParam0;
}

bool func_24()
{
	struct<2> Var0;
	vector3 vVar2;
	var uVar5;
	int iVar6;

	if (func_34())
	{
		Var0 = { Local_802.f_729[iLocal_83 /*2*/] };
		if (func_33(Var0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
			{
				if (func_32(iLocal_83, &vVar2, &uVar5))
				{
					Local_802.f_713[iLocal_83] = func_29(iLocal_83);
					if (MISC::IS_BIT_SET(Local_3443[Local_802.f_713[iLocal_83] /*5*/].f_1, iLocal_83))
					{
						if (func_26(&(Local_802.f_729[iLocal_83 /*2*/].f_1), Var0, vVar2, uVar5, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_802.f_729[iLocal_83 /*2*/].f_1), 1);
							ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_802.f_729[iLocal_83 /*2*/].f_1), true);
							VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_802.f_729[iLocal_83 /*2*/].f_1), false);
							func_25(NETWORK::NET_TO_VEH(Local_802.f_729[iLocal_83 /*2*/].f_1), 1);
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
							{
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_802.f_729[iLocal_83 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
							{
								if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_802.f_729[iLocal_83 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_802.f_729[iLocal_83 /*2*/].f_1), "MPBitset");
								}
								MISC::SET_BIT(&iVar6, 10);
								MISC::SET_BIT(&iVar6, 11);
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_802.f_729[iLocal_83 /*2*/].f_1), "MPBitset", iVar6);
							}
							Local_802.f_713[iLocal_83] = -1;
						}
					}
				}
			}
			iLocal_83++;
			if (iLocal_83 >= 10)
			{
				iLocal_83 = 0;
				return true;
			}
		}
		return false;
	}
	return true;
}

void func_25(int iParam0, bool bParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, 13);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, 13);
		}
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

bool func_26(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	float fVar0;
	int iVar1;

	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return false;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return false;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("BOMBUSHKA"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, false, false, false, false, false, false);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2537071.f_6516 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			}
			ENTITY::_SET_ENTITY_SOMETHING(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_27(vParam2, fParam5, iParam1, iVar1);
			return true;
		}
	}
	return false;
}

void func_27(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (func_28(PLAYER::PLAYER_ID(), vParam0, iParam4) > -1)
	{
		if ((Global_2405072.f_2912[1 /*6*/].f_5 == iParam5 && Global_2405072.f_2912[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2405072.f_2912[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405072.f_2912[iVar0 /*6*/] = { Global_2405072.f_2912[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405072.f_2912[1 /*6*/] = { vParam0 };
		Global_2405072.f_2912[1 /*6*/].f_3 = fParam3;
		Global_2405072.f_2912[1 /*6*/].f_4 = iParam4;
		Global_2405072.f_2912[1 /*6*/].f_5 = iParam5;
	}
}

int func_28(int iParam0, vector3 vParam1, int iParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				vVar2 = { vParam1 };
				if (MISC::ABSF((Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.f_2 = Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	var uVar7;
	bool bVar8;

	fVar2 = 1000000f;
	if (func_32(iParam0, &vVar4, &uVar7))
	{
		iVar0 = 0;
		while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				bVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if (func_13(bVar8, 1, 1))
				{
					fVar3 = func_30(func_31(bVar8), vVar4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

float func_30(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return SYSTEM::VDIST(vParam0, vParam3);
}

Vector3 func_31(bool bParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

bool func_32(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1729.582f, -2943.77f, 12.9443f };
			*uParam2 = 300.078f;
			break;
		case 1:
			*uParam1 = { 677.2984f, 769.7758f, 204.6846f };
			*uParam2 = 82.8903f;
			break;
		case 2:
			*uParam1 = { 1073.972f, 3003.889f, 40.5508f };
			*uParam2 = 333.2717f;
			break;
		case 3:
			*uParam1 = { 1928.635f, 4702.327f, 40.1958f };
			*uParam2 = 327.9112f;
			break;
		case 4:
			*uParam1 = { 1278.65f, 6579.366f, 1.505f };
			*uParam2 = 84.26f;
			break;
		case 5:
			*uParam1 = { -1700.407f, -829.8932f, 8.2542f };
			*uParam2 = 70.1811f;
			break;
		case 6:
			*uParam1 = { -2733.589f, 2925.563f, 1.2152f };
			*uParam2 = 176.5378f;
			break;
		case 7:
			*uParam1 = { 1493.418f, -2442.99f, 64.9693f };
			*uParam2 = 52.9918f;
			break;
		case 8:
			*uParam1 = { 569.0449f, -772.5692f, 10.4088f };
			*uParam2 = 179.3501f;
			break;
		case 9:
			*uParam1 = { -905.1526f, 5548.172f, 5.5251f };
			*uParam2 = 95.8361f;
			break;
		default:
			return false;
	}
	return true;
}

bool func_33(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_34()
{
	return Local_802.f_707;
}

bool func_35(int iParam0, bool bParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_106(PLAYER::PLAYER_ID(), 0) || func_103(PLAYER::PLAYER_ID(), 0))
	{
		if (func_102(PLAYER::PLAYER_ID()) || func_100(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 1);
		}
		if (func_42(26, -1))
		{
			func_39(26, -1);
		}
		return true;
	}
	if (func_38(&(Global_1574650.f_18)))
	{
		if (!func_1(&(Global_1574650.f_18), 7500, 0))
		{
			return false;
		}
		func_37(&(Global_1574650.f_18));
	}
	if (func_36())
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 0);
		}
		if (func_42(26, -1))
		{
			func_39(26, -1);
		}
		return true;
	}
	if (bParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 1);
		}
		if (func_42(26, -1))
		{
			func_39(26, -1);
		}
		return true;
	}
	return false;
}

bool func_36()
{
	return MISC::IS_BIT_SET(Global_1574650.f_1, 0);
}

void func_37(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_38(var uParam0)
{
	return uParam0->f_1;
}

void func_39(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_41();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, bParam1);
			break;
		default:
			iVar1 = func_40(bParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (MISC::IS_BIT_SET(iVar0, iParam0))
			{
				MISC::CLEAR_BIT(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, bParam1);
			}
			break;
	}
}

int func_40(bool bParam0)
{
	int iVar0;

	if (bParam0 == -1)
	{
		bParam0 = func_41();
	}
	switch (bParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		case 1:
			iVar0 = 910;
			break;
		case 2:
			iVar0 = 911;
			break;
		case 3:
			iVar0 = 912;
			break;
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

int func_41()
{
	return Global_1312745;
}

bool func_42(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_41();
	}
	iVar0 = func_40(bParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return MISC::IS_BIT_SET(iVar1, iParam0);
}

void func_43(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!MISC::IS_BIT_SET(Global_1574650.f_1, 2) && !func_7(PLAYER::PLAYER_ID())) && !func_6(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_44(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1574650.f_1), 2);
	}
}

int func_44(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_99(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_97(&(Var0.f_69), iParam7);
	}
	return func_45(&Var0);
}

int func_45(var uParam0)
{
	int iVar0;

	if (uParam0->f_1 == 1)
	{
		if (Global_2439138.f_3045)
		{
			return 0;
		}
	}
	func_60(uParam0, uParam0->f_17);
	func_57(uParam0);
	if (func_56())
	{
		func_57(uParam0);
	}
	if (func_55(uParam0->f_1))
	{
		func_48();
		if (Global_2439138.f_2723[0 /*80*/].f_2 == 0)
		{
			Global_2439138.f_2723[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2439138.f_2723[0 /*80*/].f_1 == 13 || Global_2439138.f_2723[0 /*80*/].f_1 == 53) || Global_2439138.f_2723[0 /*80*/].f_1 == 54) || Global_2439138.f_2723[0 /*80*/].f_1 == 58)
		{
			Global_2439138.f_2723[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2439138.f_2723[iVar0 + 1 /*80*/] = { Global_2439138.f_2723[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2439138.f_2723[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_2 == 0)
		{
			Global_2439138.f_2723[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_48();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_97(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 2);
				Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_47(uParam0->f_69, 128))
			{
				if (func_46(Global_2439138.f_2723[iVar0 /*80*/].f_1))
				{
					Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
					func_97(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_46(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return true;
		default:
			break;
	}
	return false;
}

bool func_47(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_48()
{
	bool bVar0;

	if (Global_2439138.f_3046)
	{
		return;
	}
	if (!Global_76890)
	{
		Global_76890 = 1;
		bVar0 = true;
	}
	func_49();
	if (bVar0)
	{
		Global_76890 = 0;
	}
}

void func_49()
{
	Global_2439138.f_3047 = 0;
	Global_2439138.f_3047.f_578 = 0;
	func_53(&(Global_2439138.f_3047.f_1));
	Global_2439138.f_3047.f_1.f_1 = 0;
	func_50(&(Global_2439138.f_3047.f_1));
}

void func_50(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_564 = 0;
	}
	if (!Global_76890)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_76891)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_52(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_51(0);
}

void func_51(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_52(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

void func_53(var uParam0)
{
	func_54(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_54(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

bool func_55(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return true;
	}
	return false;
}

bool func_56()
{
	return Global_2450632.f_17;
}

void func_57(var uParam0)
{
	if (func_59(uParam0->f_1))
	{
		uParam0->f_72 = func_58();
	}
}

int func_58()
{
	return 21;
}

bool func_59(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return true;
		default:
			break;
	}
	return false;
}

void func_60(var uParam0, bool bParam1)
{
	if (func_59(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_96() || !func_13(bParam1, 0, 1))
	{
		return;
	}
	if (func_46(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_61(bParam1, -2, 0, 0, 0);
		}
	}
}

int func_61(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (func_92(bParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_190067[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_92(PLAYER::PLAYER_ID()) || (func_91() && func_90())) && !MISC::IS_BIT_SET(Global_2537071.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_89();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_13(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_87(iParam1, bParam0, 0);
							}
							else
							{
								return func_74(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_74(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_87(iParam1, bParam0, 0);
				}
				else
				{
					return func_62(0, -1, 0);
				}
			}
			else
			{
				return func_62(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_87(iParam1, bParam0, 0);
		}
		else
		{
			return func_74(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_74(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_62(bool bParam0, int iParam1, bool bParam2)
{
	return func_63(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_63(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	if ((func_73() || (func_72() && func_70())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_69(iParam2, iVar0);
		}
		else
		{
			return func_69(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_68(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_67(1);
				}
				else
				{
					return func_67(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_64(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_64(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_67(1);
	}
	return func_67(0);
}

int func_64(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_66(iParam0, iParam1, iParam3);
	if (func_65(Global_4456448.f_194990, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			case 1:
				return 29;
			case 2:
				return 30;
			case 3:
				return 31;
			case 4:
				return 32;
			case 5:
				return 33;
			case 6:
				return 34;
			case 7:
				return 35;
			case 8:
				return 36;
			case 9:
				return 37;
			case 10:
				return 38;
			case 11:
				return 39;
			case 12:
				return 40;
			case 13:
				return 41;
			case 14:
				return 42;
			case 15:
				return 43;
			default:
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			case 1:
				return 29;
			case 2:
				return 30;
			default:
				break;
		}
	}
	return 28;
}

bool func_65(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (Global_4456448.f_232883 == 65)
		{
			return true;
		}
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_66(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_68(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_67(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

bool func_68(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return true;
		}
		return false;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return true;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 0);
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 1);
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 2);
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 3);
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 4);
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 5);
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 6);
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 7);
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 8);
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 9);
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 10);
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 11);
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 12);
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 13);
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 14);
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 15);
				default:
					break;
			}
			break;
	}
	return false;
}

int func_69(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_66(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 21;
		case 2:
			return 24;
		case 3:
			return 18;
		default:
			break;
	}
	return 28;
}

bool func_70()
{
	if (func_71())
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_237025, 4);
}

bool func_71()
{
	return MISC::IS_BIT_SET(Global_4456448.f_226020, 12);
}

bool func_72()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_237025, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_237025, 0) || Global_1653478) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FM_DEATHMATCH_CREATOR")) > 0);
}

bool func_73()
{
	if (func_71() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return true;
	}
	return false;
}

int func_74(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 148)
	{
		bVar1 = true;
	}
	bVar2 = bParam0;
	if (bVar2 > -1)
	{
		if (Global_1590535[bVar2 /*876*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_83())
			{
				iVar3 = func_79(bParam0);
				if (!iVar3 == -1)
				{
					return func_77(iVar3);
				}
			}
			if ((func_76(bParam1, bParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_68(PLAYER::GET_PLAYER_TEAM(bParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_67(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_75(1);
			}
			else
			{
				return func_63(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[bParam0 /*876*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_67(1);
			}
			else
			{
				return func_63(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_79(bParam0);
	if (!iVar4 == -1)
	{
		return func_77(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_75(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_76(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(bParam0) == -1 && PLAYER::GET_PLAYER_TEAM(bParam1) == -1)
			{
				return false;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(bParam0) == -1 && iParam2 == -1)
			{
				return false;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(bParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(bParam0) == iParam2;
}

int func_77(int iParam0)
{
	int iVar0;

	if (iParam0 > -1)
	{
		iVar0 = func_78(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			case 1:
				return 193;
			case 2:
				return 194;
			case 3:
				return 195;
			case 4:
				return 196;
			case 5:
				return 197;
			case 6:
				return 198;
			case 7:
				return 199;
			case 8:
				return 200;
			case 9:
				return 201;
			case 10:
				return 202;
			case 11:
				return 203;
			case 12:
				return 204;
			case 13:
				return 205;
			case 14:
				return 206;
			default:
				break;
		}
	}
	return 1;
}

int func_78(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_79(bool bParam0)
{
	if (!bParam0 == func_96())
	{
		if (func_81(bParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_80(bParam0)];
		}
	}
	return -1;
}

bool func_80(bool bParam0)
{
	if (bParam0 != func_96())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_96();
}

bool func_81(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_82(bParam0))
		{
			return false;
		}
	}
	return Global_1628237[bParam0 /*615*/].f_11 != func_96();
}

bool func_82(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_96())
		{
			return Global_1628237[bParam0 /*615*/].f_11 == bParam0;
		}
	}
	return false;
}

bool func_83()
{
	if (((func_86() || func_85()) || func_56()) || func_84())
	{
		return true;
	}
	return false;
}

bool func_84()
{
	return Global_2450632.f_19;
}

var func_85()
{
	return Global_2450632.f_16;
}

var func_86()
{
	return Global_2450632.f_15;
}

int func_87(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = Global_969031.f_14[iParam0];
	if (func_83())
	{
		iVar2 = func_79(bParam1);
		if (!iVar2 == -1)
		{
			return func_77(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_271[iParam0 /*15700*/].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_96())
	{
		if (Global_4456448.f_190067[iParam0] != -1 && Global_4456448.f_190067[iParam0] <= 4)
		{
			if (Global_4456448.f_190067[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_190067[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_190067[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_190067[iParam0] == 4)
			{
				if (MISC::IS_BIT_SET(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_190067[iParam0];
			}
		}
		else
		{
			iVar0 = func_63(bParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_88(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_68(iParam0, PLAYER::GET_PLAYER_TEAM(bParam1), 0))
		{
			iVar0 = func_75(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_88(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_233007;
			break;
		case 1:
			iVar0 = Global_4456448.f_233008;
			break;
		case 2:
			iVar0 = Global_4456448.f_233009;
			break;
		case 3:
			iVar0 = Global_4456448.f_233010;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		case 1:
			return 21;
		case 2:
			return 24;
		case 3:
			return 18;
		case 4:
			return 6;
		case 5:
			return 9;
		case 6:
			return 3;
		case 7:
			return 1;
		case 8:
			return 12;
		case 9:
			return 2;
		default:
			break;
	}
	return 2;
}

int func_89()
{
	return Global_2359302.f_2;
}

bool func_90()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_91()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_18, 14);
}

bool func_92(bool bParam0)
{
	if (func_94(bParam0, 0))
	{
		return true;
	}
	if (func_93())
	{
		if (bParam0 == PLAYER::PLAYER_ID())
		{
			return true;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425662[bParam0 /*421*/].f_195, 2))
	{
		return true;
	}
	return false;
}

bool func_93()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_94(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_95(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[bParam0 /*876*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_95(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_41();
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

bool func_96()
{
	return -1;
}

void func_97(var uParam0, int iParam1)
{
	func_98(uParam0, iParam1);
}

void func_98(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_99(int iParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_96();
	uParam1->f_18 = func_96();
	uParam1->f_19 = func_96();
	uParam1->f_20 = func_96();
	uParam1->f_1 = iParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

bool func_100(bool bParam0)
{
	return func_101(bParam0, 20);
}

bool func_101(bool bParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_11.f_4, iParam1);
}

bool func_102(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return func_101(bParam0, 9);
	}
	return false;
}

bool func_103(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 && func_104(Global_1628237[iParam0 /*615*/].f_11.f_33))
	{
		return true;
	}
	if (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1)
	{
		if (func_104(Global_1628237[iParam0 /*615*/].f_11.f_32))
		{
			return true;
		}
	}
	return false;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		default:
			break;
	}
	return func_105(iParam0, 0);
	return 0;
}

int func_105(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		default:
			break;
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			default:
				break;
		}
	}
	return 0;
}

bool func_106(bool bParam0, bool bParam1)
{
	if (Global_1628237[bParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[bParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

void func_107(int iParam0)
{
	Local_802 = iParam0;
}

bool func_108()
{
	int iVar0;

	if (func_1(&(Local_802.f_665), 750, 0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_802.f_674[iVar0] = -1;
			iVar0++;
		}
		func_37(&(Local_802.f_661));
		func_111();
		if (func_34())
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_802.f_713[iVar0] = func_29(iVar0);
				iVar0++;
			}
			func_109();
		}
		return true;
	}
	return false;
}

void func_109()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		Local_802.f_729[iVar0 /*2*/] = func_110();
		iVar0++;
	}
}

int func_110()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("MAVERICK");
		case 1:
			return joaat("MAMMATUS");
		default:
			break;
	}
	return 0;
}

void func_111()
{
	int iVar0;
	int iVar1;
	int iVar2;

	Local_802.f_709 = func_124();
	Local_802.f_708 = Local_802.f_709;
	Local_802.f_712 = func_120();
	Local_802.f_707 = func_117();
	iVar0 = func_116();
	if (Local_802.f_707)
	{
		iVar1 = 1;
	}
	func_113(func_115(132, Local_802.f_712, iVar1, 0));
	if (Local_802.f_712 == 1 && !Local_802.f_707)
	{
		Local_802.f_710 = 1;
	}
	iVar2 = 0;
	while (iVar2 < Local_802.f_709)
	{
		Local_802.f_10[iVar2 /*5*/].f_4 = iVar2;
		Local_802.f_10[iVar2 /*5*/] = { func_112(Local_802.f_712, Local_802.f_707, iVar0, iVar2) };
		iVar2++;
	}
}

Vector3 func_112(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 623.5349f, 1614.651f, 283.748f;
							case 1:
								return 742.6324f, 1271.099f, 388.9925f;
							case 2:
								return 682.1757f, 1204.295f, 350.0934f;
							case 3:
								return 1779.28f, 668.7821f, 276.3788f;
							case 4:
								return 1927.214f, 129.7589f, 174.4281f;
							case 5:
								return 1056.943f, -699.1728f, 78.8831f;
							case 6:
								return 2026.536f, -1594.874f, 262.0831f;
							case 7:
								return 2139.424f, -2613.58f, 20.5914f;
							case 8:
								return 1041.685f, -2882.901f, 27.0959f;
							case 9:
								return 796.1402f, -2624.645f, 95.127f;
							case 10:
								return 504.6169f, -3311.801f, 22.9858f;
							case 11:
								return 416.9175f, -2684.419f, 10.1246f;
							case 12:
								return 561.767f, -2100.675f, 60.143f;
							case 13:
								return 872.454f, -1929.237f, 104.4083f;
							case 14:
								return 636.6328f, -1429.945f, 15.5f;
							case 15:
								return 591.386f, -852.2912f, 50.7211f;
							case 16:
								return 471.2209f, -102.4007f, 149.7505f;
							case 17:
								return 533.762f, 143.6576f, 125.7511f;
							case 18:
								return 1112.19f, 74.8892f, 117.7713f;
							case 19:
								return 683.9346f, 570.1795f, 165.7115f;
							case 20:
								return 1453.832f, 1113.675f, 134.9644f;
							case 21:
								return 1539.314f, 1716.172f, 125.0574f;
							case 22:
								return 1875.192f, 1698.918f, 109.9103f;
							case 23:
								return 2320.32f, 1669.402f, 86.7663f;
							case 24:
								return 2337.891f, 1358.536f, 100.8737f;
							case 25:
								return 2727.786f, 1558.729f, 83.66f;
							case 26:
								return 3112.177f, 1153.66f, 25.3827f;
							case 27:
								return 2580.817f, 476.8322f, 121.7549f;
							case 28:
								return 2458.7f, -384.0464f, 127.5513f;
							case 29:
								return 2381.206f, -939.2949f, 185.6516f;
							case 30:
								return 1669.294f, -1652.948f, 154.2478f;
							case 31:
								return 1096.793f, -1141.693f, 96.1055f;
							case 32:
								return 3042.9f, -291.4662f, 22.8304f;
							case 33:
								return 2645.351f, -1492.043f, 30.646f;
							case 34:
								return 1214.374f, -2353.274f, 66.8f;
							case 35:
								return 1841.616f, -2497.971f, 101.8039f;
							case 36:
								return 1872.035f, -761.149f, 105f;
							case 37:
								return 1657.665f, -413.7629f, 228.448f;
							case 38:
								return 1589.229f, -1981.901f, 161.2293f;
							case 39:
								return 991.7729f, -1477.064f, 60.0276f;
							case 40:
								return 2609.912f, -2096.358f, 35.0044f;
							case 41:
								return 1121.19f, 725.4341f, 170.3273f;
							case 42:
								return 2117.316f, 1024.085f, 197f;
							case 43:
								return 727.6708f, -452.6442f, 25f;
							case 44:
								return 1211.964f, -3285.54f, 19.5936f;
							case 45:
								return 1499.883f, -1276.207f, 131.5493f;
							case 46:
								return 3381.442f, -826.2608f, 42.8967f;
							case 47:
								return 1562.097f, 292.1506f, 494.2574f;
							case 48:
								return 2021.578f, -1993.689f, 120f;
							case 49:
								return 757.5558f, -1196.363f, 232.0553f;
							case 50:
								return 1887.774f, -3474.97f, 77.8727f;
							case 51:
								return 1083.224f, -229.6182f, 68.6364f;
							case 52:
								return 2344.084f, -406.1672f, 91f;
							case 53:
								return 2184.821f, 529.1252f, 241.1723f;
							case 54:
								return 1251.541f, -1883.809f, 50f;
							case 55:
								return 847.74f, 1781.903f, 160.9508f;
							case 56:
								return 288.3698f, -1601.346f, 52f;
							case 57:
								return 2648.131f, -731.5316f, 99.7f;
							case 58:
								return 1937.117f, 1337.446f, 529.8608f;
							case 59:
								return 1512.681f, -2539.276f, 208.3091f;
							case 60:
								return 2352.986f, -1763.908f, 136.1568f;
							case 61:
								return 2099.732f, -1212.728f, 178.3343f;
							case 62:
								return 1945.16f, -957.8221f, 96.04f;
							case 63:
								return 1872.81f, -830.1746f, 171.44f;
							case 64:
								return 1256.392f, -1571.629f, 90.566f;
							case 65:
								return 1818.023f, -244.6768f, 305.9837f;
							case 66:
								return 2839.051f, -748.0399f, 21.5008f;
							case 67:
								return 1268.646f, -2126.072f, 60.6975f;
							case 68:
								return 1088.679f, -1982.82f, 84.1204f;
							case 69:
								return 1597.218f, -2817.042f, 19.0498f;
							case 70:
								return 356.3379f, -2319.226f, 67.6058f;
							case 71:
								return 692.5012f, -2330.583f, 60.7022f;
							case 72:
								return 1070.4f, -1835.148f, 100.8235f;
							case 73:
								return 478.3501f, -1682.318f, 59.7763f;
							case 74:
								return 845.2267f, -2186.32f, 46.5743f;
							case 75:
								return 2651.639f, -1230.85f, 40.5824f;
							case 76:
								return 461.851f, -1460.173f, 65.7889f;
							case 77:
								return 775.8362f, -852.0386f, 31f;
							case 78:
								return 913.9593f, -976.4005f, 81.0321f;
							case 79:
								return 970.9194f, -2510.112f, 64f;
							case 80:
								return 1096.666f, 1222.327f, 202.4859f;
							case 81:
								return 1978.543f, 690.4552f, 174.2517f;
							case 82:
								return 1571.993f, -36.6251f, 140.5239f;
							case 83:
								return 918.2688f, -675.462f, 76.6019f;
							case 84:
								return 798.097f, -1194.02f, 32f;
							case 85:
								return 382.4527f, -31.8431f, 143.6312f;
							case 86:
								return 672.1725f, -1745.012f, 16f;
							case 87:
								return 620.2905f, -588.2725f, 22.6129f;
							case 88:
								return 1204.318f, 196.6229f, 79.9329f;
							case 89:
								return 2028.402f, -2179.396f, 105.5733f;
							case 90:
								return 1131.183f, -2929.769f, 33.2799f;
							case 91:
								return 654.5255f, -2634.736f, 26.063f;
							case 92:
								return 757.272f, -30.6019f, 66.9464f;
							case 93:
								return 262.5532f, -1046.969f, 73.6448f;
							case 94:
								return 638.4819f, -1021f, 43.5236f;
							case 95:
								return 351.6616f, -2758.046f, 29.2267f;
							case 96:
								return 1613.985f, -2243.761f, 136f;
							case 97:
								return 2947.746f, 792.9475f, 45f;
							case 98:
								return 2608.733f, 822.9318f, 118.6201f;
							case 99:
								return 1357.208f, 674.4443f, 100f;
							case 100:
								return 978.4934f, -2073.071f, 1000f;
							case 101:
								return 2848.513f, -2701.795f, 547.5851f;
							case 102:
								return 2322.219f, -2129.611f, 13.6809f;
							case 103:
								return 1248.603f, -2675.042f, 145.6704f;
							case 104:
								return 2052.692f, -252.931f, 228.334f;
							case 105:
								return 2394.902f, 388.1578f, 194.5342f;
							case 106:
								return 3337.711f, 56.3844f, 764.684f;
							case 107:
								return 1573.049f, 1472.569f, 179.2061f;
							case 108:
								return 1898.354f, 1020.671f, 277.9648f;
							case 109:
								return 745.1586f, 232.868f, 177.0828f;
							case 110:
								return 1551.579f, -685.6392f, 126f;
							case 111:
								return 2734.234f, 61.798f, 25.1296f;
							case 112:
								return 2404.63f, -1485.806f, 86.3959f;
							case 113:
								return 3033.16f, 321.8385f, 908.0805f;
							case 114:
								return 1353.323f, 373.6808f, 184.937f;
							case 115:
								return 1317.262f, -737.488f, 125.2729f;
							case 116:
								return 1737.696f, -966.1904f, 119.8332f;
							case 117:
								return 923.2643f, 978.5736f, 605.3384f;
							case 118:
								return 2823.777f, -1483.905f, 26.8193f;
							case 119:
								return 1333.475f, -275.2598f, 1000f;
							default:
								break;
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 2360.429f, 1273.094f, 63.9814f;
							case 1:
								return 2545.422f, 342.8004f, 107.4641f;
							case 2:
								return 2483.171f, -363.0696f, 92.7352f;
							case 3:
								return 1491.835f, -1005.532f, 50.5682f;
							case 4:
								return 1078.853f, -688.3618f, 56.6151f;
							case 5:
								return 657.7627f, -1500.858f, 8.6817f;
							case 6:
								return 1216.266f, -2907.278f, 4.8661f;
							case 7:
								return 958.6841f, -3079.094f, 13.3327f;
							case 8:
								return 459.5267f, -2429.235f, 4.7518f;
							case 9:
								return 1130.214f, -2082.811f, 30.0089f;
							case 10:
								return 1506.701f, -2135.637f, 75.4567f;
							case 11:
								return 1759.277f, -1579.97f, 117.9f;
							case 12:
								return 2510.45f, -1219.332f, 1.89f;
							case 13:
								return 2855.604f, -1339.602f, 14.7183f;
							case 14:
								return 2826.41f, -743.3448f, 0.3071f;
							case 15:
								return 1236.599f, -83.0057f, 58.7636f;
							case 16:
								return 1660.534f, 0.3033f, 172.7744f;
							case 17:
								return 1917.608f, 301.6851f, 161.8848f;
							case 18:
								return 2145.003f, 146.688f, 224.1061f;
							case 19:
								return 1456.737f, 1111.848f, 113.334f;
							case 20:
								return 1135.62f, 58.6667f, 79.7561f;
							case 21:
								return 680.794f, 559.0409f, 128.0462f;
							case 22:
								return 716.7936f, 141.21f, 79.7545f;
							case 23:
								return 875.606f, -476.7556f, 29.0746f;
							case 24:
								return 536.7303f, -2817.502f, 5.0421f;
							case 25:
								return 984.1771f, -2410.686f, 29.4333f;
							case 26:
								return 863.2344f, -2151.808f, 29.4816f;
							case 27:
								return 1002.942f, -1918.75f, 30.1432f;
							case 28:
								return 1183.313f, -1550.946f, 38.5953f;
							case 29:
								return 694.0918f, 1283.059f, 359.296f;
							case 30:
								return 745.2003f, 1199.09f, 325.4016f;
							case 31:
								return 887.6219f, 873.548f, 178.5657f;
							case 32:
								return 1828.967f, 1571.725f, 99.7219f;
							case 33:
								return 2805.81f, 1676.1f, 23.5193f;
							case 34:
								return 1405.691f, -601.7893f, 73.3473f;
							case 35:
								return 1710.367f, -464.7253f, 169.8001f;
							case 36:
								return 1946.392f, 1331.992f, 160.1707f;
							case 37:
								return 2271.38f, 1711.949f, 67.0413f;
							case 38:
								return 2307.003f, -1750.421f, 133.7737f;
							case 39:
								return 2172.226f, -1069.367f, 176.0087f;
							case 40:
								return 595.0312f, -851.27f, 40.4327f;
							case 41:
								return 456.9577f, -752.8668f, 26.3578f;
							case 42:
								return 531.9203f, -1034.797f, 27.2597f;
							case 43:
								return 1289.908f, -3341.78f, 4.9016f;
							case 44:
								return 533.8767f, -1969.171f, 23.9846f;
							case 45:
								return 689.5218f, -1774.186f, 8.6f;
							case 46:
								return 848.6605f, -1211.77f, 30.3237f;
							case 47:
								return 1874.741f, -2202.331f, 166.2907f;
							case 48:
								return 1458.76f, -2623.696f, 47.69f;
							case 49:
								return 1538.907f, 784.3685f, 76.4501f;
							case 50:
								return 800.149f, -109.5107f, 79.533f;
							case 51:
								return 2687.09f, 889.5835f, 76.4359f;
							case 52:
								return 939.7744f, -1496.824f, 29.1156f;
							case 53:
								return 547.5936f, -455.3327f, 23.7304f;
							case 54:
								return 709.3f, -2285f, 33.8f;
							case 55:
								return 454.0637f, -2177.92f, 4.9177f;
							case 56:
								return 1468.104f, -1759.198f, 78.3022f;
							case 57:
								return 1239.343f, -1097.545f, 37.5256f;
							case 58:
								return 851.4936f, -956.856f, 25.2824f;
							case 59:
								return 512.4025f, 221.9917f, 103.7442f;
							case 60:
								return 1545.082f, 1701.081f, 108.769f;
							case 61:
								return 1188.11f, 1556.979f, 107.8028f;
							case 62:
								return 1033.948f, -273.4799f, 49.8443f;
							case 63:
								return 743.4129f, -591.6385f, 26.0061f;
							case 64:
								return 1975.484f, -749.9232f, 96.2513f;
							case 65:
								return 1968.117f, 708.8224f, 161.8571f;
							case 66:
								return 2296.027f, 1152.222f, 64.0942f;
							case 67:
								return 2474.09f, 1484.103f, 35.2029f;
							case 68:
								return 482.1839f, 664.4731f, 195.1235f;
							case 69:
								return 1505.106f, -1271.169f, 121.655f;
							case 70:
								return 1220.729f, -1865.861f, 37.4982f;
							case 71:
								return 476.6311f, -1283.433f, 28.5393f;
							case 72:
								return 952.6752f, -2248.219f, 29.5831f;
							case 73:
								return 1434.707f, -2315.042f, 65.927f;
							case 74:
								return 1882.254f, -1873.208f, 191.477f;
							case 75:
								return 2014.572f, -1591.406f, 249.303f;
							case 76:
								return 1969.748f, -992.8931f, 79.6204f;
							case 77:
								return 2267.432f, -331.317f, 92.9784f;
							case 78:
								return 1205.465f, 336.8802f, 80.9909f;
							case 79:
								return 531.8229f, -27.4548f, 69.6295f;
							case 80:
								return 304.7162f, 262.4799f, 104.337f;
							case 81:
								return 572.4857f, -2147.293f, 7.9233f;
							case 82:
								return 1223.13f, -2338.621f, 59.8673f;
							case 83:
								return 1747.151f, -2679.91f, 1.4587f;
							case 84:
								return 939.6769f, -1342.533f, 11.4778f;
							case 85:
								return 1435.646f, -1476.472f, 62.2245f;
							case 86:
								return 2273.048f, -539.2752f, 102.9436f;
							case 87:
								return 1522.075f, -381.5488f, 200.3996f;
							case 88:
								return 2778.579f, 1073.328f, 0.6607f;
							case 89:
								return 609.4634f, -1333.589f, 20.7017f;
							case 90:
								return 1360.928f, -946.584f, 55.9209f;
							case 91:
								return 1147.373f, -431.5072f, 65.9987f;
							case 92:
								return 2391.644f, -932.7006f, 151.3306f;
							case 93:
								return 2897.51f, -314.7418f, 17.1346f;
							case 94:
								return 2963.361f, 513.4398f, 35.0981f;
							case 95:
								return 2415.814f, 763.4792f, 124.8302f;
							case 96:
								return 2054.985f, 953.5229f, 218.5845f;
							case 97:
								return 1522.831f, 461.3894f, 224.2793f;
							case 98:
								return 1301.596f, 1445.471f, 98.4293f;
							case 99:
								return 1071.843f, -1841.304f, 36.3069f;
							case 100:
								return 1133.087f, -2602.795f, 17.3834f;
							case 101:
								return 484.4286f, -3064.647f, 5.084f;
							case 102:
								return 1610.912f, -2385.55f, 90.6982f;
							case 103:
								return 695.2822f, -2534.997f, 17.6967f;
							case 104:
								return 554.7129f, -1634.238f, 26.9479f;
							case 105:
								return 1723.686f, -1038.606f, 129.0783f;
							case 106:
								return 2637.012f, -1863.213f, 17.7764f;
							case 107:
								return 2638.077f, 1346.641f, 25.4338f;
							case 108:
								return 1910.663f, 29.3172f, 159.5f;
							case 109:
								return 2952.967f, 797.8872f, 0.1f;
							case 110:
								return 2937.12f, 1471.532f, 0f;
							case 111:
								return 2348.98f, -2281.005f, 0.1697f;
							case 112:
								return 2681.416f, -1560.354f, -0.0123f;
							case 113:
								return 2812.644f, -27.1503f, 0.7016f;
							case 114:
								return 3201.036f, -102.7169f, 0.2f;
							case 115:
								return 651.1428f, -3112.596f, 0.0233f;
							case 116:
								return 2313.423f, -2194.061f, 0.025f;
							case 117:
								return 3055.192f, 185.0506f, 0.4391f;
							case 118:
								return 2729.46f, -1073.702f, 0.6712f;
							case 119:
								return 1423.506f, -2790.912f, 0.7109f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 1:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -915.445f, -2520.007f, 58f;
							case 1:
								return -1343.719f, -3336.795f, 30.5601f;
							case 2:
								return -1336.239f, -3044.059f, 300.803f;
							case 3:
								return -1833.852f, -1191.057f, 41.1411f;
							case 4:
								return -1955.78f, 1776.57f, 195.8577f;
							case 5:
								return -2166.629f, 1607.567f, 260f;
							case 6:
								return -417.0685f, 1153.347f, 347.5894f;
							case 7:
								return -2503.341f, 754.9435f, 342.9515f;
							case 8:
								return -2626.127f, 136.1493f, 118.1611f;
							case 9:
								return -2246.804f, 266.7578f, 194.8923f;
							case 10:
								return -1364.038f, 56.9618f, 70.9416f;
							case 11:
								return -94.2512f, 880.448f, 265f;
							case 12:
								return -162.3738f, -999.6118f, 286.6717f;
							case 13:
								return 140.5345f, -698.5123f, 92.6658f;
							case 14:
								return -104.079f, -755.4847f, 59.1614f;
							case 15:
								return -284.6401f, -446.2669f, 91.5901f;
							case 16:
								return -795.1664f, -736.1061f, 78.6788f;
							case 17:
								return -971.361f, -1305.368f, 50f;
							case 18:
								return -1357.973f, -1476.396f, 40.9274f;
							case 19:
								return -2004.334f, -556.4324f, 20.3771f;
							case 20:
								return -1034.381f, 640.7464f, 163.7504f;
							case 21:
								return -1238.563f, -848.6133f, 89.7682f;
							case 22:
								return -1169.283f, -467.3812f, 69.0157f;
							case 23:
								return -324.4008f, -1968.694f, 71.7904f;
							case 24:
								return -269.9813f, -2425.728f, 95.05f;
							case 25:
								return 247.3292f, -3308.082f, 59.9012f;
							case 26:
								return 219.492f, -2318.923f, 43.917f;
							case 27:
								return 18.8233f, -1504f, 54.686f;
							case 28:
								return 8.9788f, 1715.057f, 249.4028f;
							case 29:
								return -667.7844f, 404.7751f, 125.5105f;
							case 30:
								return 216.2372f, 236.2603f, 125.7443f;
							case 31:
								return -3079.696f, 766.6476f, 33.988f;
							case 32:
								return -1105.589f, 1428.968f, 238.1016f;
							case 33:
								return -474.9906f, 1529.526f, 500.0109f;
							case 34:
								return -1621.841f, 929.212f, 193.8022f;
							case 35:
								return -767.9827f, -21.7202f, 69.0007f;
							case 36:
								return -472.9492f, -1444.143f, 92.8559f;
							case 37:
								return -1879.575f, -2634.001f, 11.491f;
							case 38:
								return -1459.734f, -2141.965f, 23.7189f;
							case 39:
								return -75.0934f, -818.6606f, 599.9617f;
							case 40:
								return -230.7478f, -241.4196f, 76.4557f;
							case 41:
								return -1608.013f, -537.3172f, 73.1431f;
							case 42:
								return -1806.964f, -125.5317f, 118.0094f;
							case 43:
								return -3170.222f, 1543.227f, 33.8091f;
							case 44:
								return -2753.087f, 1229.005f, 140.7239f;
							case 45:
								return -306.4009f, 202.0892f, 180.3099f;
							case 46:
								return 396.1246f, -1528.24f, 46.6041f;
							case 47:
								return 389.6704f, -356.0437f, 61.5436f;
							case 48:
								return 324.4086f, -988.9622f, 92.2799f;
							case 49:
								return -657.5551f, -1105.199f, 67.647f;
							case 50:
								return -439.2123f, -1003.071f, 58.7819f;
							case 51:
								return -208.3349f, -1800.983f, 12.0207f;
							case 52:
								return 104.7709f, -1940.293f, 33.3786f;
							case 53:
								return -80.1589f, 364.0139f, 180.4526f;
							case 54:
								return -1064.813f, 7.4781f, 69.6885f;
							case 55:
								return -1997.443f, 722.7387f, 175.1271f;
							case 56:
								return -254.3736f, -3074.535f, 75.4412f;
							case 57:
								return -830.1344f, -1880.055f, 33.9615f;
							case 58:
								return -2775.497f, -788.6588f, 36.447f;
							case 59:
								return 43.0406f, -413.7074f, 89.5811f;
							case 60:
								return -3209.421f, 1110.18f, 37.6606f;
							case 61:
								return -2256.718f, -339.6835f, 43.3005f;
							case 62:
								return -1957.094f, 1330.48f, 236.7105f;
							case 63:
								return -1030.221f, 996.1059f, 182.364f;
							case 64:
								return -1529.428f, 441.7661f, 134.8705f;
							case 65:
								return 145.6732f, 1154.994f, 253.3341f;
							case 66:
								return -520.5256f, 659.5372f, 177.0043f;
							case 67:
								return 18.1044f, 638.951f, 224.5906f;
							case 68:
								return 128.1127f, -27.8183f, 91.0755f;
							case 69:
								return -634.6116f, -367.6195f, 56.3093f;
							case 70:
								return -402.9568f, -655.0366f, 60.6586f;
							case 71:
								return -1034.505f, -1070.038f, 21.0905f;
							case 72:
								return -1013.909f, -1763.924f, 20.6112f;
							case 73:
								return -734.4069f, -1448.061f, 26.2766f;
							case 74:
								return -202.7723f, -1322.269f, 53.6863f;
							case 75:
								return 388.6693f, -1368.068f, 50.7767f;
							case 76:
								return -7.0116f, -2230.674f, 39.1959f;
							case 77:
								return 33.8391f, -2745.649f, 33.5782f;
							case 78:
								return -1100.793f, -2846.705f, 53.132f;
							case 79:
								return -1274.324f, -2448.849f, 99.9299f;
							case 80:
								return -473.7719f, -2675.318f, 19.2771f;
							case 81:
								return -727.3944f, -3494.9f, 23.1103f;
							case 82:
								return -1907.151f, -3034.577f, 39.2742f;
							case 83:
								return 416.2226f, -2912.834f, 5.0678f;
							case 84:
								return 414.82f, -2616.128f, 22.3517f;
							case 85:
								return 233.9356f, -1474.491f, 45.7138f;
							case 86:
								return 93.563f, -1189.746f, 51.969f;
							case 87:
								return -607.8086f, -2189.156f, 76.1713f;
							case 88:
								return -1106.939f, -2019.405f, 33.3166f;
							case 89:
								return -1210.83f, -1806.382f, 246.2572f;
							case 90:
								return -1309.448f, -1043.763f, 29.6876f;
							case 91:
								return -1618.367f, -827.8159f, 42.3072f;
							case 92:
								return -2257.555f, -9.0938f, 121.4433f;
							case 93:
								return -777.472f, -376.5067f, 72.7751f;
							case 94:
								return -1371.512f, -172.8742f, 99.1525f;
							case 95:
								return -1842.798f, 302.3257f, 105.5376f;
							case 96:
								return -1165.458f, 367.7476f, 95.3869f;
							case 97:
								return -3107.359f, 276.277f, 56.9633f;
							case 98:
								return -2548.786f, 1441.129f, 190.8976f;
							case 99:
								return -2644.523f, 1868.621f, 168.2627f;
							case 100:
								return -3029.234f, 1883.871f, 35.4705f;
							case 101:
								return -1119.207f, 1736.032f, 195.1095f;
							case 102:
								return -644.2039f, 1743.748f, 227.7433f;
							case 103:
								return -577.6026f, 2038.995f, 209.9244f;
							case 104:
								return -302.0078f, 1871.026f, 196.7599f;
							case 105:
								return 351.8685f, 1748.149f, 260.866f;
							case 106:
								return -11.935f, 1320.348f, 288.0058f;
							case 107:
								return 295.5885f, 753.7887f, 200.7135f;
							case 108:
								return 305.6451f, 501.4699f, 350.4832f;
							case 109:
								return 353.2237f, 58.5094f, 119.2648f;
							case 110:
								return 377.5104f, -695.2125f, 102.9432f;
							case 111:
								return 392.4507f, -1204.239f, 50f;
							case 112:
								return 397.6461f, -1929.781f, 43.4559f;
							case 113:
								return 470.8737f, -2451.431f, 30f;
							case 114:
								return -418.7521f, -2424.396f, 20.0582f;
							case 115:
								return -2440.527f, -1654.13f, 6.3248f;
							case 116:
								return -888.3994f, -2938.026f, 26.3869f;
							case 117:
								return -1374.637f, -2647.817f, 26.4425f;
							case 118:
								return -1082.177f, -620.1375f, 27.491f;
							case 119:
								return -1471.09f, 1324.141f, 193.4433f;
							default:
								break;
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2303.138f, 218.8738f, 166.6017f;
							case 1:
								return -2994.291f, 39.7167f, 7.4636f;
							case 2:
								return -3410.2f, 967.5133f, 7.3517f;
							case 3:
								return -3041.96f, 1209.59f, 13.7743f;
							case 4:
								return -2502.529f, 756.2985f, 301.2459f;
							case 5:
								return -1352.546f, 120.6978f, 55.2388f;
							case 6:
								return -1729.21f, -193.1235f, 57.5038f;
							case 7:
								return -1635.4f, -1054.226f, 12.1522f;
							case 8:
								return -1268.607f, -1915.845f, 4.8616f;
							case 9:
								return -18.3427f, -1297.615f, 28.3575f;
							case 10:
								return -145.3585f, 930.7858f, 234.6711f;
							case 11:
								return -424.3762f, 1587.798f, 355.2649f;
							case 12:
								return -112.2256f, 354.4933f, 111.6961f;
							case 13:
								return 67.6185f, -673.5317f, 28.7056f;
							case 14:
								return 338.3054f, -1394.279f, 31.5093f;
							case 15:
								return -19.2884f, -1426.187f, 29.6575f;
							case 16:
								return -251.9772f, -2029.258f, 28.946f;
							case 17:
								return -432.7254f, -2440.489f, 5.0008f;
							case 18:
								return -956.3549f, -3053.302f, 12.9451f;
							case 19:
								return -1662.76f, -3177.918f, 12.9914f;
							case 20:
								return -457.7008f, -1507.786f, 12.0586f;
							case 21:
								return 188.8895f, 300.349f, 104.515f;
							case 22:
								return 3.4946f, -2452.885f, 13.4665f;
							case 23:
								return -966.3007f, -973.4243f, 2.876f;
							case 24:
								return -1536.435f, 868.5392f, 180.16f;
							case 25:
								return -1521.53f, 1493.765f, 110.5947f;
							case 26:
								return -1173.264f, -2037.82f, 12.776f;
							case 27:
								return -0.4394f, -1037.738f, 37.152f;
							case 28:
								return 137.7382f, -3092.8f, 4.8963f;
							case 29:
								return -1177.272f, -507.6518f, 34.5662f;
							case 30:
								return -575.4523f, -142.0386f, 36.2353f;
							case 31:
								return -723.2367f, 655.733f, 154.5475f;
							case 32:
								return -455.0906f, -999.9053f, 22.8657f;
							case 33:
								return -1133.934f, -1447.037f, 4f;
							case 34:
								return -231.0999f, -242.6378f, 49.0062f;
							case 35:
								return 69.8444f, -62.9348f, 67.8751f;
							case 36:
								return -1981.162f, -296.7468f, 47.1062f;
							case 37:
								return 98.9504f, -1979.664f, 19.6635f;
							case 38:
								return 324.168f, -2758.195f, 5.0028f;
							case 39:
								return 219.5919f, -2310.078f, 7.4018f;
							case 40:
								return -693.2001f, -592.6827f, 30.5552f;
							case 41:
								return -1044.535f, 500.5195f, 83.1617f;
							case 42:
								return -1792.464f, 395.7471f, 111.7909f;
							case 43:
								return -425.5935f, 1123.605f, 324.8547f;
							case 44:
								return -523.835f, -2902.068f, 5.0004f;
							case 45:
								return -1213.84f, -2724.547f, 12.9541f;
							case 46:
								return -656.7547f, -1708.686f, 23.8153f;
							case 47:
								return -1024.89f, 1012.239f, 159.6649f;
							case 48:
								return -850.8826f, 1708.716f, 193.9906f;
							case 49:
								return -2253.348f, 1324.29f, 291.0074f;
							case 50:
								return -876.7352f, -210.6213f, 38.2135f;
							case 51:
								return -309.9497f, -609.0406f, 32.5568f;
							case 52:
								return -743.9313f, -2283.372f, 12.06f;
							case 53:
								return -2971.731f, 584.4294f, 19.423f;
							case 54:
								return 288.4228f, -1601.137f, 30.2709f;
							case 55:
								return 97.6932f, -348.3357f, 41.3071f;
							case 56:
								return -1065.912f, -12.7356f, 49.4423f;
							case 57:
								return -388.1416f, -2283.256f, 6.6082f;
							case 58:
								return -1213.121f, -945.0177f, 1.1502f;
							case 59:
								return -1605.807f, -588.1375f, 32.1103f;
							case 60:
								return -1573.01f, 400.7232f, 106.194f;
							case 61:
								return -2751.19f, 1185.782f, 93.6924f;
							case 62:
								return 287.3323f, -3014.992f, 8.8106f;
							case 63:
								return -96.4867f, -2744.17f, 5.1062f;
							case 64:
								return -1350.788f, -1435.002f, 3.325f;
							case 65:
								return -156.4393f, -979.7114f, 20.2769f;
							case 66:
								return -671.3023f, 399.0416f, 101.68f;
							case 67:
								return 169.03f, 667.5479f, 205.7125f;
							case 68:
								return -726.8502f, -410.5149f, 34.5413f;
							case 69:
								return -671.4555f, -891.9421f, 23.4991f;
							case 70:
								return -190.4528f, 1299.355f, 302.9701f;
							case 71:
								return -1284.425f, -3403.299f, 12.9452f;
							case 72:
								return -825.6949f, -3337.779f, 12.9445f;
							case 73:
								return -1368.524f, -2335.062f, 12.9446f;
							case 74:
								return -1098.009f, -2415.526f, 12.9452f;
							case 75:
								return -1336.274f, -3044.103f, 12.9444f;
							case 76:
								return -821.012f, -1992.519f, 9.6439f;
							case 77:
								return -350.2334f, -2640.808f, 5.0003f;
							case 78:
								return -219.3889f, -2386.881f, 5.0014f;
							case 79:
								return 109.4531f, -2816.037f, 9.7899f;
							case 80:
								return 208.6273f, -3327.894f, 4.8177f;
							case 81:
								return 370.2768f, -2128.437f, 15.2365f;
							case 82:
								return -53.6978f, -1688.638f, 28.4917f;
							case 83:
								return -1009.052f, -1759.302f, 5.5498f;
							case 84:
								return -988.1508f, -2106.591f, 10.5382f;
							case 85:
								return -708.1929f, -1517.804f, 4.4121f;
							case 86:
								return -228.0423f, -1514.504f, 30.4622f;
							case 87:
								return 297.5852f, -1204.386f, 28.1985f;
							case 88:
								return 383.1396f, -904.1862f, 28.4376f;
							case 89:
								return -630.6f, -1071.2f, 21.7f;
							case 90:
								return -1207.432f, -1796.611f, 2.9086f;
							case 91:
								return -876.3531f, -1501.708f, 4.1775f;
							case 92:
								return -1271.531f, -1099.613f, 6.5852f;
							case 93:
								return -1730.83f, -725.0892f, 9.3941f;
							case 94:
								return -1431.005f, -271.0002f, 45.2077f;
							case 95:
								return -1966.816f, 182.3251f, 85.7706f;
							case 96:
								return -2293.777f, 371.4213f, 173.6017f;
							case 97:
								return -2156.688f, 1551.647f, 272.9088f;
							case 98:
								return -2780.149f, 1423.379f, 99.9284f;
							case 99:
								return -2587.936f, 1930.876f, 166.0052f;
							case 100:
								return -3017.571f, 1860.058f, 28.4173f;
							case 101:
								return 142.7543f, 1689.097f, 233.0739f;
							case 102:
								return 186.6585f, 1162.86f, 224.5946f;
							case 103:
								return -461.6094f, 640.4639f, 143.1886f;
							case 104:
								return -440.1514f, 184.2777f, 74.2476f;
							case 105:
								return -186.476f, 25.015f, 63.554f;
							case 106:
								return 26.7096f, -660.0318f, 30.6286f;
							case 107:
								return 156.6823f, -565.1396f, 42.893f;
							case 108:
								return -1834.908f, -1221.919f, 0.8054f;
							case 109:
								return -707.5134f, -1340.225f, -0.0558f;
							case 110:
								return -544.5794f, -2580.831f, 0.2096f;
							case 111:
								return 103.7708f, -2461.292f, 0.1193f;
							case 112:
								return -3046.133f, 1570.539f, -0.3275f;
							case 113:
								return -2241.345f, -530.6988f, -0.3275f;
							case 114:
								return 44.8316f, 844.4984f, 195.5816f;
							case 115:
								return -1894.231f, -2724.314f, -0.3275f;
							case 116:
								return -1029.441f, -1778.107f, -0.3275f;
							case 117:
								return -95.1061f, -2313.997f, 0.4963f;
							case 118:
								return -1546.054f, -1509.913f, 0.409f;
							case 119:
								return -1678.194f, -2238.986f, 0.9841f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 2:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -1874.714f, 2055.242f, 164.0655f;
							case 1:
								return -2398.244f, 2197.323f, 103.0324f;
							case 2:
								return -2470.967f, 2693.007f, 16.093f;
							case 3:
								return -1417.126f, 2634.235f, 3.8116f;
							case 4:
								return -1617.519f, 3185.984f, 52.4819f;
							case 5:
								return -1187.536f, 3851.927f, 510.4073f;
							case 6:
								return -1243.21f, 4536.333f, 198.2652f;
							case 7:
								return -766.5436f, 4335.334f, 181.1521f;
							case 8:
								return -515.496f, 4425.549f, 56.3238f;
							case 9:
								return -210.6103f, 3651.887f, 80.5153f;
							case 10:
								return 90.0834f, 3766.962f, 52.4048f;
							case 11:
								return 267.8927f, 2866.58f, 81.5228f;
							case 12:
								return 180.018f, 2272.227f, 109.032f;
							case 13:
								return -618.2112f, 2031.457f, 238.4183f;
							case 14:
								return -1185.328f, 2439.395f, 110.052f;
							case 15:
								return -2881.416f, 3363.437f, 44.4458f;
							case 16:
								return -2188.789f, 4395.888f, 71.8569f;
							case 17:
								return -2166.268f, 5204.997f, 32.4229f;
							case 18:
								return 239.3275f, 5576.022f, 610.5799f;
							case 19:
								return -549.4456f, 5308.46f, 118.8087f;
							case 20:
								return -686.6255f, 5674.634f, 64.1394f;
							case 21:
								return 25.1643f, 7643.369f, 32.4106f;
							case 22:
								return -162.8882f, 6422.088f, 46.3268f;
							case 23:
								return 269.3018f, 5863.51f, 425.1252f;
							case 24:
								return 158.6423f, 4622.624f, 213.8925f;
							case 25:
								return 31.6062f, 4328.141f, 56.7127f;
							case 26:
								return -959.6198f, 4843.202f, 317.838f;
							case 27:
								return -1179.401f, 4926.922f, 230.3542f;
							case 28:
								return -1801.77f, 4513.373f, 40.2242f;
							case 29:
								return -2146.721f, 3964.171f, 111.159f;
							case 30:
								return -668.1703f, 3607.985f, 305.8568f;
							case 31:
								return -409.327f, 2963.414f, 38.182f;
							case 32:
								return -290.9469f, 2533.475f, 92.1749f;
							case 33:
								return -3029.401f, 1883.96f, 35.4066f;
							case 34:
								return -2597.654f, 1922.071f, 179.5395f;
							case 35:
								return 80.7072f, 5032.946f, 490.6172f;
							case 36:
								return -899.8328f, 6042.451f, 53.0212f;
							case 37:
								return -1576.676f, 5160.763f, 26.8806f;
							case 38:
								return 145.5836f, 6866.114f, 38.7097f;
							case 39:
								return -50.5306f, 6236.916f, 79.3327f;
							case 40:
								return -368.4536f, 6104.72f, 53f;
							case 41:
								return -1599.971f, 2104.185f, 80.8163f;
							case 42:
								return -1626.487f, 2585.598f, 12.1104f;
							case 43:
								return -2064f, 3361.181f, 48.6443f;
							case 44:
								return -2357.318f, 3250.916f, 117.4892f;
							case 45:
								return -2684.946f, 2304.948f, 39.1557f;
							case 46:
								return -772.2781f, 4704.552f, 242.9476f;
							case 47:
								return 125.5518f, 3365.379f, 35.8003f;
							case 48:
								return -113.0094f, 2803.876f, 67.1096f;
							case 49:
								return -179.3538f, 1907.562f, 221.1006f;
							case 50:
								return -1235.554f, 1879.036f, 150.8745f;
							case 51:
								return 341.9869f, 3569.314f, 63.2875f;
							case 52:
								return 391.3682f, 5485.655f, 1000f;
							case 53:
								return 311.9317f, 6432.635f, 80.2925f;
							case 54:
								return -292.9588f, 5839.533f, 129.366f;
							case 55:
								return -1502.468f, 5984.955f, 34.7383f;
							case 56:
								return -3449.053f, 2645.437f, 55.2519f;
							case 57:
								return -1096.963f, 3225.607f, 147.7444f;
							case 58:
								return -278.2971f, 6637.778f, 45.611f;
							case 59:
								return 297.8872f, 4013.252f, 33.872f;
							case 60:
								return -271.6442f, 5586.137f, 250.6218f;
							case 61:
								return -821f, 5419.5f, 58.4f;
							case 62:
								return -1734.6f, 3968.5f, 302.8f;
							case 63:
								return -2664.1f, 2594f, 3.8f;
							case 64:
								return -897.3f, 2797.5f, 28.3f;
							case 65:
								return -1158.6f, 4625.5f, 156.7f;
							case 66:
								return 618f, 6426.7f, 103.2f;
							case 67:
								return 435.1f, 6772.9f, 18.9f;
							case 68:
								return -677.8f, 6035f, 27.3f;
							case 69:
								return -1445.2f, 5428.6f, 53.5f;
							case 70:
								return -384.2f, 4711.1f, 278.4f;
							case 71:
								return 911.8f, 4338.1f, 61.8f;
							case 72:
								return 518.5f, 5944.8f, 525.2f;
							case 73:
								return -1631.5f, 4741.2f, 66.9f;
							case 74:
								return -1352.5f, 4147.1f, 125.1f;
							case 75:
								return -1138.5f, 2807.2f, 250.4f;
							case 76:
								return -540.3f, 4190.5f, 203.6f;
							case 77:
								return -166.9f, 4250.2f, 61.7f;
							case 78:
								return -88.2f, 4579f, 135.4f;
							case 79:
								return -3051.213f, 4178.12f, 72.7681f;
							case 80:
								return -2606.26f, 2993.814f, 30.4219f;
							case 81:
								return -2302.76f, 2011.211f, 153.3448f;
							case 82:
								return -2254.314f, 1680.506f, 298.8981f;
							case 83:
								return -1955.917f, 1772.408f, 201.629f;
							case 84:
								return -1751.763f, 1998.548f, 129.1121f;
							case 85:
								return -1453.889f, 2069.22f, 65.2848f;
							case 86:
								return -1479.386f, 2405.98f, 37.5402f;
							case 87:
								return -1041.601f, 3963.552f, 344.3259f;
							case 88:
								return -775.5471f, 4048.385f, 310.1201f;
							case 89:
								return -883.0366f, 4411.045f, 29.2546f;
							case 90:
								return -1215.23f, 4370.065f, 38.5217f;
							case 91:
								return -1269.523f, 4386.938f, 1000f;
							case 92:
								return -1508.03f, 4446.546f, 59.4166f;
							case 93:
								return -1449.331f, 4602.479f, 336.1419f;
							case 94:
								return -1640.183f, 5440.63f, 43.1539f;
							case 95:
								return -891.0049f, 5157.28f, 187.01f;
							case 96:
								return 724.7438f, 5251.831f, 586.2138f;
							case 97:
								return 537.1121f, 4647.938f, 274.9371f;
							case 98:
								return 64.3661f, 4022.363f, 575.3698f;
							case 99:
								return 907.8411f, 3627.435f, 53.8748f;
							case 100:
								return 591.9018f, 2977.436f, 82.2499f;
							case 101:
								return 259.6137f, 1788.459f, 256.6769f;
							case 102:
								return -2092.081f, 2518.016f, 800f;
							case 103:
								return -2536.684f, 1678.45f, 196.0372f;
							case 104:
								return 52.1855f, 7343.64f, 518.5611f;
							case 105:
								return -521.5972f, 6960.141f, 172.8203f;
							case 106:
								return -684.2739f, 6467.878f, 165.8478f;
							case 107:
								return -1060.232f, 5711.063f, 333.8782f;
							case 108:
								return -1786.052f, 5471.512f, 614.6761f;
							case 109:
								return -1501.189f, 3295.095f, 245.8079f;
							case 110:
								return -2149.145f, 3521.295f, 186.103f;
							case 111:
								return 887.6612f, 5610.092f, 697.7338f;
							case 112:
								return 451.4696f, 5020.989f, 610.8222f;
							case 113:
								return 693.6552f, 4097.276f, 53.8927f;
							case 114:
								return -99.6831f, 3960.636f, 80.8691f;
							case 115:
								return -579.6645f, 3979.675f, 136.2872f;
							case 116:
								return -996.2939f, 4194.288f, 151.0646f;
							case 117:
								return -1542.398f, 2886.044f, 1000f;
							case 118:
								return -3004.988f, 2333.1f, 209.9484f;
							case 119:
								return -3622.204f, 4740.62f, 19.17f;
							default:
								break;
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2200.786f, 3429.213f, 31.6018f;
							case 1:
								return -1873.915f, 2090.595f, 139.9944f;
							case 2:
								return -1674.252f, 2301.497f, 59.0047f;
							case 3:
								return -506.3776f, 4358.938f, 66.4342f;
							case 4:
								return -83.7414f, 4580.993f, 122.1646f;
							case 5:
								return -207.3853f, 3598.517f, 60.323f;
							case 6:
								return 233.0533f, 3547.927f, 30.2697f;
							case 7:
								return 93.7029f, 3597.86f, 38.7393f;
							case 8:
								return 327f, 2858f, 42.4386f;
							case 9:
								return 158.1294f, 3136.305f, 42.4573f;
							case 10:
								return -210.5036f, 2955.358f, 28.941f;
							case 11:
								return -288.922f, 2524.722f, 73.6685f;
							case 12:
								return -734.5254f, 5594.983f, 34.288f;
							case 13:
								return 88.2503f, 6368.129f, 30.2271f;
							case 14:
								return -344.4945f, 6242.846f, 30.4877f;
							case 15:
								return -267.3751f, 6639.444f, 6.3939f;
							case 16:
								return -1444.47f, 5418.419f, 22.2866f;
							case 17:
								return -1611.041f, 5258.685f, 2.9791f;
							case 18:
								return -1823.203f, 4464.67f, 37.4717f;
							case 19:
								return -2488.111f, 2740.839f, 1.8909f;
							case 20:
								return -1626.549f, 2587.924f, 1.6362f;
							case 21:
								return -1575.299f, 2105.205f, 66.0545f;
							case 22:
								return -543.6063f, 1983.754f, 126.0263f;
							case 23:
								return -563.8864f, 1886.811f, 122.0349f;
							case 24:
								return -592.4536f, 2076.64f, 130.3709f;
							case 25:
								return -2497.361f, 2307.194f, 33.1315f;
							case 26:
								return -2584.923f, 1931.11f, 166.3129f;
							case 27:
								return -1618.161f, 3184.126f, 31.8513f;
							case 28:
								return -913.2203f, 2562.701f, 57.2099f;
							case 29:
								return -1163.923f, 2408.993f, 92.402f;
							case 30:
								return 188.3494f, 2295.03f, 92.7443f;
							case 31:
								return -96.8265f, 2224.75f, 159.4986f;
							case 32:
								return -834.779f, 4178.558f, 214.3525f;
							case 33:
								return -790.3221f, 2901.125f, 18.2471f;
							case 34:
								return -799.6998f, 3478.014f, 172.9345f;
							case 35:
								return -1347.726f, 4127.416f, 61.6295f;
							case 36:
								return -1364.709f, 4848.779f, 144.9459f;
							case 37:
								return -2168.336f, 5186.728f, 14.9725f;
							case 38:
								return -987.1982f, 5075.115f, 186.5395f;
							case 39:
								return 231.926f, 5246.831f, 601.2042f;
							case 40:
								return -1.0985f, 5029.458f, 446.6905f;
							case 41:
								return -134.3454f, 4916.509f, 353.0826f;
							case 42:
								return -434.7882f, 4885.861f, 189.7331f;
							case 43:
								return -592.1419f, 5361.79f, 69.3186f;
							case 44:
								return 64.7121f, 7052.296f, 15.7854f;
							case 45:
								return -577.7616f, 5954.945f, 25.1362f;
							case 46:
								return -945.8056f, 4613.758f, 238.1628f;
							case 47:
								return -2228.817f, 4218.248f, 45.7951f;
							case 48:
								return -2493.361f, 4193.219f, 1.0754f;
							case 49:
								return -3073.088f, 3200.413f, 0.9527f;
							case 50:
								return 376.4925f, 6630.836f, 27.7626f;
							case 51:
								return -1692.925f, 4597.169f, 46.8227f;
							case 52:
								return -2587.798f, 3193.551f, 12.9622f;
							case 53:
								return -922.5162f, 6131.097f, 6.1891f;
							case 54:
								return -112.5477f, 7285.785f, 16.1674f;
							case 55:
								return -170.1744f, 6049.716f, 30.1726f;
							case 56:
								return 57.7188f, 6673.076f, 30.9499f;
							case 57:
								return -501.3606f, 5567.93f, 70.0852f;
							case 58:
								return -292.4363f, 5839.495f, 120.8191f;
							case 59:
								return -436.1143f, 5707.903f, 61.0179f;
							case 60:
								return -494.1112f, 5290.479f, 79.6187f;
							case 61:
								return -421.0542f, 5187.812f, 122.5195f;
							case 62:
								return -835.7191f, 5261.788f, 79.1947f;
							case 63:
								return -873.3408f, 4786.007f, 299.4599f;
							case 64:
								return -299.7797f, 4676.5f, 245.6817f;
							case 65:
								return -903.4214f, 5176.086f, 153.3577f;
							case 66:
								return -869.6852f, 5553.71f, 1.4216f;
							case 67:
								return -1210.241f, 5228.673f, 88.4579f;
							case 68:
								return -1224.511f, 3854.173f, 488.3926f;
							case 69:
								return -688.3312f, 3764.984f, 272.5302f;
							case 70:
								return -1829.375f, 3982.997f, 271.9911f;
							case 71:
								return -2432.337f, 3535.94f, 33.3233f;
							case 72:
								return -1440.526f, 5106.688f, 62.4016f;
							case 73:
								return -2258.899f, 3831.759f, 118.1093f;
							case 74:
								return -1577.494f, 5162.519f, 18.6627f;
							case 75:
								return -2046.334f, 4525.601f, 27.6239f;
							case 76:
								return -2189.855f, 4616.937f, 0.5382f;
							case 77:
								return 423.4926f, 5613.09f, 765.7494f;
							case 78:
								return 501.2704f, 5598.329f, 795.0286f;
							case 79:
								return 625.9471f, 5675.894f, 747.5628f;
							case 80:
								return -555.5328f, 5321.449f, 72.5996f;
							case 81:
								return -685.9285f, 5233.738f, 92.4703f;
							case 82:
								return -213.783f, 6348.989f, 30.5355f;
							case 83:
								return -391.0858f, 6341.175f, 25.425f;
							case 84:
								return 0.9189f, 3691.594f, 38.5039f;
							case 85:
								return -225.4021f, 3664.75f, 63.4125f;
							case 86:
								return 714.1616f, 4136.578f, 34.7842f;
							case 87:
								return 825.1304f, 4223.49f, 50.8188f;
							case 88:
								return 858.3134f, 4423.847f, 30.2196f;
							case 89:
								return 335.1393f, 4373.471f, 63.3434f;
							case 90:
								return -1474.287f, 2687.972f, 16.6437f;
							case 91:
								return -1183.146f, 4927.809f, 222.0748f;
							case 92:
								return -892.4783f, 4529.449f, 113.9803f;
							case 93:
								return 761.0254f, 6455.407f, 30.7286f;
							case 94:
								return 370.5299f, 5453.183f, 691.2834f;
							case 95:
								return -376.5987f, 3840.778f, 73.9626f;
							case 96:
								return -2077.635f, 3390.068f, 30.1962f;
							case 97:
								return -2317.722f, 3398.114f, 29.7812f;
							case 98:
								return -2686.153f, 3554.439f, 1.0289f;
							case 99:
								return -1869.387f, 4649.492f, 56.0019f;
							case 100:
								return -1854.183f, 4809.846f, 1.9984f;
							case 101:
								return -683.5417f, 5823.635f, 16.3313f;
							case 102:
								return -790.6581f, 5479.023f, 25.889f;
							case 103:
								return 482.4343f, 6486.61f, 29.0864f;
							case 104:
								return 183.3372f, 7008.858f, 11.2392f;
							case 105:
								return 50.2346f, 4325.231f, 43.3996f;
							case 106:
								return -28.0941f, 4430.794f, 57.1619f;
							case 107:
								return -187.3603f, 4019.421f, 30.6801f;
							case 108:
								return -1804.935f, 5315.242f, 0.8688f;
							case 109:
								return 81.2546f, 4050.058f, 29.4f;
							case 110:
								return -1191.056f, 4389.15f, 4.3f;
							case 111:
								return -2188.334f, 2590.943f, -0.4f;
							case 112:
								return -2825.633f, 2358.091f, 0.5703f;
							case 113:
								return -2047.696f, 4852.304f, 0.6241f;
							case 114:
								return -2664.615f, 2597.589f, -0.4f;
							case 115:
								return 271.9201f, 7512.879f, -0.5084f;
							case 116:
								return -215.5849f, 4284.967f, 29.5257f;
							case 117:
								return -2879.157f, 2879.604f, 0.4205f;
							case 118:
								return -920.2339f, 5871.843f, 0.4382f;
							case 119:
								return -34.7086f, 7618.572f, 0.4933f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 3:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 867.3339f, 4198.743f, 75f;
							case 1:
								return 1254.176f, 4848.075f, 247.0701f;
							case 2:
								return 1676.777f, 5140.256f, 160.2494f;
							case 3:
								return 1995.339f, 5021.67f, 68.695f;
							case 4:
								return 2599.952f, 5032.021f, 112.432f;
							case 5:
								return 2967.309f, 5197.417f, 148.5921f;
							case 6:
								return 2876.992f, 5911.252f, 378.2234f;
							case 7:
								return 3438.904f, 6144.417f, 10.0202f;
							case 8:
								return 3431.106f, 5174.187f, 46.1572f;
							case 9:
								return 4080.091f, 4476.533f, 17.0407f;
							case 10:
								return 3492.801f, 4619.894f, 65f;
							case 11:
								return 3378.036f, 4079.524f, 229.1767f;
							case 12:
								return 3944.403f, 3729.657f, 19.5046f;
							case 13:
								return 3556.383f, 3684.987f, 67.2346f;
							case 14:
								return 3296.121f, 3365.198f, 125f;
							case 15:
								return 3290f, 3140.437f, 275.7202f;
							case 16:
								return 2948.726f, 2791.748f, 48.6755f;
							case 17:
								return 1597.427f, 2599.171f, 95f;
							case 18:
								return 1397.009f, 2116.503f, 137.1597f;
							case 19:
								return 723.7358f, 2322.695f, 64.6875f;
							case 20:
								return 753.2642f, 2581.414f, 161f;
							case 21:
								return 564.4257f, 3392.354f, 96.1353f;
							case 22:
								return 1191.005f, 3400.265f, 78.9779f;
							case 23:
								return 1279.739f, 3100.26f, 53.8507f;
							case 24:
								return 1415.487f, 3833.477f, 52.6619f;
							case 25:
								return 1488.657f, 3946.224f, 305.2148f;
							case 26:
								return 2065.697f, 6451.615f, 149.8928f;
							case 27:
								return 2559.717f, 6155.792f, 171f;
							case 28:
								return 1502.546f, 6159.08f, 230.8224f;
							case 29:
								return 1163.891f, 5965.097f, 413.3012f;
							case 30:
								return 772.3428f, 5523.894f, 600f;
							case 31:
								return 501.8089f, 5604.274f, 1000.598f;
							case 32:
								return 1002.141f, 4786.271f, 185.7696f;
							case 33:
								return 587.414f, 5114.912f, 405f;
							case 34:
								return 1345.87f, 6384.963f, 52.4688f;
							case 35:
								return 754.4042f, 6466f, 49f;
							case 36:
								return 1042.216f, 6799.529f, 40.2945f;
							case 37:
								return 1779.115f, 5662.172f, 274f;
							case 38:
								return 2898.098f, 4327.457f, 107.9208f;
							case 39:
								return 2634.35f, 3661.461f, 111.1731f;
							case 40:
								return 2045.418f, 3429.524f, 56.3868f;
							case 41:
								return 1563.065f, 3572.822f, 41f;
							case 42:
								return 2276.492f, 1955.542f, 146.9525f;
							case 43:
								return 2379.747f, 2604.982f, 89.7836f;
							case 44:
								return 543.5116f, 3080.709f, 63f;
							case 45:
								return 2264.604f, 4455.955f, 62.2539f;
							case 46:
								return 2410.187f, 2908.336f, 373.9144f;
							case 47:
								return 3510.479f, 2569.052f, 16.1615f;
							case 48:
								return 3073.721f, 2084.079f, 30f;
							case 49:
								return 3319.34f, 2272.217f, 14.2949f;
							case 50:
								return 2822.12f, 4977.335f, 70f;
							case 51:
								return 1299.971f, 4219.281f, 41f;
							case 52:
								return 503.1913f, 4450.17f, 112f;
							case 53:
								return 2489.62f, 3760.053f, 53f;
							case 54:
								return 1824.499f, 2031.218f, 60.1953f;
							case 55:
								return 1153.765f, 2384.4f, 75.2003f;
							case 56:
								return 1339.664f, 2747.617f, 79.0765f;
							case 57:
								return 542.5154f, 2488.194f, 84.9932f;
							case 58:
								return 2767.542f, 2047.162f, 126.1494f;
							case 59:
								return 2061.36f, 3941.451f, 200f;
							case 60:
								return 873.5367f, 2867.737f, 73.5925f;
							case 61:
								return 1752.141f, 3052.542f, 78.6478f;
							case 62:
								return 2100.787f, 2339.885f, 133.921f;
							case 63:
								return 2738.826f, 3476.466f, 81.564f;
							case 64:
								return 2285.089f, 3289.129f, 86.2814f;
							case 65:
								return 1745.899f, 3756.127f, 53.8457f;
							case 66:
								return 2504.338f, 4418.758f, 55f;
							case 67:
								return 1552.003f, 2186.406f, 96f;
							case 68:
								return 2716.376f, 4132.656f, 63.7827f;
							case 69:
								return 3809.813f, 4462.08f, 36.1286f;
							case 70:
								return 3257.82f, 4308.541f, 140f;
							case 71:
								return 2268.876f, 5381.432f, 328.4639f;
							case 72:
								return 2236.389f, 5604.683f, 71.034f;
							case 73:
								return 1986.657f, 6201.739f, 66.4804f;
							case 74:
								return 3356.059f, 5696.29f, 20f;
							case 75:
								return 2457.263f, 6684.452f, 63.14f;
							case 76:
								return 1914.983f, 6702.233f, 14.7976f;
							case 77:
								return 2149.811f, 3844.999f, 88.0922f;
							case 78:
								return 1880.169f, 4244.354f, 80.3363f;
							case 79:
								return 1791.897f, 4595.955f, 48.6224f;
							case 80:
								return 1181.133f, 5151.417f, 772.3138f;
							case 81:
								return 431.2495f, 4768.536f, 665.041f;
							case 82:
								return 1410.651f, 6569.377f, 26.5039f;
							case 83:
								return 1522.466f, 6617.973f, 8f;
							case 84:
								return 2316.162f, 6378.738f, 143.7605f;
							case 85:
								return 3127.772f, 5566.866f, 317.7646f;
							case 86:
								return 3684.367f, 4916.152f, 618.67f;
							case 87:
								return 3941.761f, 4652.369f, 92.7624f;
							case 88:
								return 3900.581f, 4262.104f, 887.18f;
							case 89:
								return 3535.166f, 3778.242f, 46.4187f;
							case 90:
								return 3638.854f, 3108.953f, 8.7037f;
							case 91:
								return 931.8565f, 2446.375f, 59f;
							case 92:
								return 1052.214f, 2277.729f, 95.5547f;
							case 93:
								return 411.0964f, 4298.822f, 40.8556f;
							case 94:
								return 970.339f, 5647.13f, 650.7467f;
							case 95:
								return 2137.105f, 4785.519f, 59.9326f;
							case 96:
								return 2333.533f, 4801.554f, 467.9726f;
							case 97:
								return 2800.744f, 4745.392f, 370.3547f;
							case 98:
								return 2721.061f, 1556.416f, 101.1161f;
							case 99:
								return 1855.284f, 1600.665f, 116.8989f;
							case 100:
								return 1623.469f, 1518.122f, 294.3194f;
							case 101:
								return 923.4011f, 1635.348f, 218.3212f;
							case 102:
								return 829.6124f, 1892.871f, 135.5203f;
							case 103:
								return 1294.051f, 5675.865f, 472.5645f;
							case 104:
								return 1716.85f, 6416.637f, 81.5075f;
							case 105:
								return 2140.929f, 5892.89f, 161.9607f;
							case 106:
								return 1604.4f, 5793.905f, 429.8526f;
							case 107:
								return 1589.65f, 4160.215f, 883.122f;
							case 108:
								return 2191.156f, 4208.336f, 477.8802f;
							case 109:
								return 1427.64f, 4515.944f, 85.3721f;
							case 110:
								return 1206.398f, 4546.814f, 83.0875f;
							case 111:
								return 222.2962f, 4746.207f, 280.8666f;
							case 112:
								return 287.655f, 5361.114f, 659.2646f;
							case 113:
								return 194.6948f, 7393.709f, 1000f;
							case 114:
								return 469.5136f, 6745.105f, 14.1624f;
							case 115:
								return 537.5068f, 6663.253f, 447.8182f;
							case 116:
								return 3227.793f, 6940.11f, 111.4631f;
							case 117:
								return 3614.231f, 5883.145f, 9.5207f;
							case 118:
								return 3010.254f, 5697.739f, 463.4349f;
							case 119:
								return 2874.324f, 6196.489f, 1000f;
							default:
								break;
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 1581.963f, 2200.244f, 78.0226f;
							case 1:
								return 1104.104f, 2399.396f, 53.529f;
							case 2:
								return 1089.489f, 2132.943f, 57.0757f;
							case 3:
								return 932.5687f, 2434.264f, 49.6778f;
							case 4:
								return 586.3744f, 2935.313f, 39.9577f;
							case 5:
								return 437.5278f, 3537.285f, 32.3159f;
							case 6:
								return 917.2156f, 3648.117f, 35.1053f;
							case 7:
								return 1528.585f, 3916.301f, 30.6709f;
							case 8:
								return 1924.4f, 3468.064f, 50.6772f;
							case 9:
								return 2482.272f, 3761.54f, 40.6483f;
							case 10:
								return 2722.307f, 2895.323f, 46.873f;
							case 11:
								return 3021.258f, 2881.75f, 85.959f;
							case 12:
								return 2096.643f, 2504.604f, 89.6423f;
							case 13:
								return 2974.657f, 3485.959f, 70.4429f;
							case 14:
								return 3390.08f, 3704.603f, 34.9975f;
							case 15:
								return 2908.214f, 4342.968f, 49.3031f;
							case 16:
								return 1796.101f, 4920.626f, 47.3851f;
							case 17:
								return 2241.987f, 5382.81f, 144.0017f;
							case 18:
								return 2218.899f, 5946.263f, 49.634f;
							case 19:
								return 1601.463f, 6624.76f, 14.7707f;
							case 20:
								return 1406.928f, 6568.621f, 19.3763f;
							case 21:
								return 439.5467f, 6459.866f, 34.8699f;
							case 22:
								return 1503.687f, 6360.855f, 15.6193f;
							case 23:
								return 3316.647f, 5190.359f, 17.4152f;
							case 24:
								return 3632.89f, 5003.482f, 11.6053f;
							case 25:
								return 3057.659f, 5064.144f, 17.7153f;
							case 26:
								return 2822.534f, 4978.232f, 62.4826f;
							case 27:
								return 3930.095f, 4399.015f, 15.6116f;
							case 28:
								return 3859.284f, 4226.905f, 2.7151f;
							case 29:
								return 3692.684f, 4570.595f, 24.1191f;
							case 30:
								return 1830.916f, 2542.005f, 44.8856f;
							case 31:
								return 2424.308f, 3131.437f, 47.2055f;
							case 32:
								return 1340.228f, 2988.934f, 45.0809f;
							case 33:
								return 817.1245f, 3379.468f, 76.9467f;
							case 34:
								return 563.2202f, 2456.984f, 58.1331f;
							case 35:
								return 2041.713f, 2002.479f, 84.9881f;
							case 36:
								return 2431.854f, 1986.869f, 82.1812f;
							case 37:
								return 1190.872f, 3401.189f, 67.3338f;
							case 38:
								return 1943.983f, 3817.853f, 31.0619f;
							case 39:
								return 1977.679f, 3054.874f, 49.3235f;
							case 40:
								return 452.5827f, 5587.175f, 780.1891f;
							case 41:
								return 807.1406f, 5701.082f, 696.9146f;
							case 42:
								return 1600.868f, 5804.83f, 414.5815f;
							case 43:
								return 1412.016f, 5558.528f, 459.5185f;
							case 44:
								return 2279.983f, 5788.728f, 154.1637f;
							case 45:
								return 2346.173f, 4997.547f, 41.5868f;
							case 46:
								return 2391.918f, 4296.647f, 34.1954f;
							case 47:
								return 1364.943f, 4385.975f, 43.3491f;
							case 48:
								return 998.6568f, 4453.989f, 59.924f;
							case 49:
								return 1058.949f, 4219.405f, 34.273f;
							case 50:
								return 870.7486f, 6627.962f, 1.1131f;
							case 51:
								return 2721.632f, 4513.5f, 41.1966f;
							case 52:
								return 1219.444f, 2744.531f, 37.0054f;
							case 53:
								return 2564.32f, 2578.493f, 36.9367f;
							case 54:
								return 2827.744f, 5963.866f, 350.6364f;
							case 55:
								return 2946.397f, 5326.474f, 100.269f;
							case 56:
								return 2211.154f, 3593.324f, 55.1756f;
							case 57:
								return 3079.837f, 6027.145f, 129.2854f;
							case 58:
								return 3345.3f, 5555.332f, 17.907f;
							case 59:
								return 528.5965f, 3092.785f, 39.4652f;
							case 60:
								return 2184.891f, 3724.368f, 37.4901f;
							case 61:
								return 1471.091f, 4948.712f, 75.0594f;
							case 62:
								return 2713.996f, 4141.762f, 42.8723f;
							case 63:
								return 2476.558f, 5783.607f, 68.702f;
							case 64:
								return 2647.75f, 3281.402f, 54.2127f;
							case 65:
								return 2210.976f, 5610.793f, 52.8602f;
							case 66:
								return 2898.328f, 2389.586f, 170.4231f;
							case 67:
								return 2728.33f, 2616.292f, 95.3074f;
							case 68:
								return 1844.478f, 4591.953f, 29.6629f;
							case 69:
								return 2432.128f, 4616.881f, 28.1137f;
							case 70:
								return 2574.294f, 4653.86f, 33.0768f;
							case 71:
								return 1574.009f, 3591.066f, 34.3615f;
							case 72:
								return 2008.265f, 4986.431f, 40.3378f;
							case 73:
								return 1975.059f, 5182.086f, 46.8906f;
							case 74:
								return 1955.895f, 4620.182f, 39.6384f;
							case 75:
								return 2279.756f, 4846.217f, 39.2283f;
							case 76:
								return 2418.292f, 4784.674f, 33.6784f;
							case 77:
								return 2005.109f, 3765.983f, 31.1808f;
							case 78:
								return 1719.677f, 3692.743f, 33.513f;
							case 79:
								return 1530.711f, 3076.231f, 39.9815f;
							case 80:
								return 1686.366f, 3301.007f, 40.1368f;
							case 81:
								return 3481.603f, 3740.488f, 35.6427f;
							case 82:
								return 2392.425f, 3334.924f, 46.3672f;
							case 83:
								return 2192.154f, 3168.942f, 50.5572f;
							case 84:
								return 2354.496f, 2577.063f, 45.6677f;
							case 85:
								return 640.7736f, 2777.938f, 40.9601f;
							case 86:
								return 2768.528f, 1701.819f, 23.6943f;
							case 87:
								return 3239.663f, 3501.223f, 67.723f;
							case 88:
								return 2672.952f, 3516.45f, 51.712f;
							case 89:
								return 2619.962f, 3661.864f, 100.2808f;
							case 90:
								return 2437.504f, 4069.23f, 37.0001f;
							case 91:
								return 1685.598f, 6435.691f, 31.3515f;
							case 92:
								return 1417.653f, 3818.394f, 31.1351f;
							case 93:
								return 3300.7f, 5941.647f, 93.3217f;
							case 94:
								return 870.0084f, 2870.564f, 55.9249f;
							case 95:
								return 1352.413f, 6401.655f, 32.4101f;
							case 96:
								return 1960.858f, 5376.274f, 185.2074f;
							case 97:
								return 1974.847f, 6219.958f, 41.2546f;
							case 98:
								return 3684.152f, 3795.969f, 15.0641f;
							case 99:
								return 2625.796f, 2809.979f, 32.439f;
							case 100:
								return 1302.932f, 4234.541f, 32.9137f;
							case 101:
								return 577.5187f, 4169.561f, 37.8946f;
							case 102:
								return 1069.311f, 2259.363f, 43.4741f;
							case 103:
								return 1381.487f, 3633.717f, 34.0073f;
							case 104:
								return 3046.249f, 6219.229f, 111.0105f;
							case 105:
								return 985.3563f, 5642.3f, 627.7075f;
							case 106:
								return 2504.378f, 5178.088f, 67.6632f;
							case 107:
								return 2537.341f, 4476.488f, 36.1789f;
							case 108:
								return 1291.73f, 4112.564f, 29.6645f;
							case 109:
								return 2176.232f, 4605.335f, 29.194f;
							case 110:
								return 3456.624f, 5135.376f, -0.3837f;
							case 111:
								return 4054.226f, 4518.386f, 0.4f;
							case 112:
								return 1074.313f, 6738.594f, 1.3817f;
							case 113:
								return 409.7385f, 4290.737f, 29.5f;
							case 114:
								return 2551.275f, 6151.57f, 161.1609f;
							case 115:
								return 3646.335f, 2977.049f, 0.6928f;
							case 116:
								return 1938.372f, 4287.003f, 29.6693f;
							case 117:
								return 3630.215f, 5625.841f, 1.2201f;
							case 118:
								return 1582.613f, 6753.431f, 0.4436f;
							case 119:
								return 3449.314f, 2677.52f, 0.0895f;
							default:
								break;
						}
					}
					break;
			}
			return 0f, 0f, 0f;
		}

void func_113(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	vVar0.x = 1982372647;
	vVar0.f_1 = PLAYER::PLAYER_ID();
	vVar0.f_2 = iParam0;
	iVar3 = func_114(1, 1);
	if (!iVar3 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar3);
	}
}

int func_114(bool bParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_13(bVar2, 0, 0))
		{
			if (bVar2 != PLAYER::PLAYER_ID() || bParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_94(bVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_115(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
		case 150:
			return iParam1;
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						case 1:
							return 1;
						case 2:
							return 2;
						case 3:
							return 3;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						case 1:
							return 5;
						case 2:
							return 6;
						case 3:
							return 7;
						default:
							break;
					}
					break;
			}
			break;
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								case 1:
									return 1;
								case 2:
									return 2;
								case 3:
									return 3;
								case 4:
									return 4;
								default:
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								case 1:
									return 6;
								case 2:
									return 7;
								case 3:
									return 8;
								case 4:
									return 9;
								default:
									break;
							}
							break;
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								case 1:
									return 11;
								case 2:
									return 12;
								case 3:
									return 13;
								case 4:
									return 14;
								default:
									break;
							}
							break;
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								case 1:
									return 16;
								case 2:
									return 17;
								case 3:
									return 18;
								case 4:
									return 19;
								default:
									break;
							}
							break;
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								case 1:
									return 21;
								case 2:
									return 22;
								case 3:
									return 24;
								case 4:
									return 25;
								default:
									break;
							}
							break;
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								case 1:
									return 27;
								case 2:
									return 28;
								case 3:
									return 29;
								case 4:
									return 30;
								default:
									break;
							}
							break;
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								case 1:
									return 32;
								case 2:
									return 33;
								case 3:
									return 34;
								case 4:
									return 35;
								default:
									break;
							}
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								case 1:
									return 1;
								case 2:
									return 2;
								case 3:
									return 3;
								case 4:
									return 4;
								default:
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								case 1:
									return 6;
								case 2:
									return 7;
								case 3:
									return 8;
								case 4:
									return 9;
								default:
									break;
							}
							break;
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								case 1:
									return 11;
								case 2:
									return 12;
								case 3:
									return 13;
								case 4:
									return 14;
								default:
									break;
							}
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								default:
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								default:
									break;
							}
							break;
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								default:
									break;
							}
							break;
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								default:
									break;
							}
							break;
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								default:
									break;
							}
							break;
					}
					break;
			}
			break;
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						case 1:
							return 1;
						case 2:
							return 2;
						case 3:
							return 3;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						case 1:
							return 5;
						case 2:
							return 6;
						case 3:
							return 7;
						case 4:
							return 8;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						case 1:
							return 10;
						case 2:
							return 11;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						case 1:
							return 13;
						case 2:
							return 14;
						case 3:
							return 15;
						case 4:
							return 16;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						case 1:
							return 18;
						case 2:
							return 19;
						case 3:
							return 20;
						case 4:
							return 21;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						case 1:
							return 24;
						case 2:
							return 25;
						case 3:
							return 26;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						case 1:
							return 28;
						case 2:
							return 29;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						case 1:
							return 31;
						case 2:
							return 32;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						case 1:
							return 34;
						case 2:
							return 35;
						case 3:
							return 36;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						case 1:
							return 38;
						case 2:
							return 39;
						case 3:
							return 40;
						default:
							break;
					}
					break;
			}
			break;
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						case 1:
							return 1;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 4;
						case 2:
							return 5;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 7;
						case 2:
							return 8;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						case 1:
							return 10;
						case 2:
							return 11;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						case 1:
							return 13;
						case 2:
							return 14;
						default:
							break;
					}
					break;
			}
			break;
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						case 1:
							return 1;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 4;
						case 2:
							return 5;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 7;
						case 2:
							return 8;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						case 1:
							return 10;
						case 2:
							return 11;
						default:
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

int func_116()
{
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 1);
}

bool func_117()
{
	if (func_119(Local_802.f_712))
	{
		return false;
	}
	else if (func_118(Local_802.f_712))
	{
		return true;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1;
}

bool func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (Global_262145.f_11125 || Global_262145.f_11117);
		case 1:
			return (Global_262145.f_11124 || Global_262145.f_11117);
		case 2:
			return (Global_262145.f_11122 || Global_262145.f_11117);
		case 3:
			return (Global_262145.f_11123 || Global_262145.f_11117);
		default:
			break;
	}
	return false;
}

bool func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (Global_262145.f_11121 || Global_262145.f_11116);
		case 1:
			return (Global_262145.f_11120 || Global_262145.f_11116);
		case 2:
			return (Global_262145.f_11118 || Global_262145.f_11116);
		case 3:
			return (Global_262145.f_11119 || Global_262145.f_11116);
		default:
			break;
	}
	return false;
}

int func_120()
{
	var uVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iLocal_366 = 1;
	switch (iLocal_366)
	{
		case 0:
			return MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		case 1:
			iVar5 = func_121(&uVar0);
			iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
			iVar7 = 0;
			while (iVar7 < 4)
			{
				if (iVar6 >= iVar8 && iVar6 < (uVar0[iVar7] + iVar8))
				{
					return iVar7;
				}
				iVar8 = (iVar8 + uVar0[iVar7]);
				iVar7++;
			}
			break;
		case 2:
			break;
		case 3:
			break;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
}

int func_121(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;

	bVar8 = true;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			bVar10 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_13(bVar10, 1, 1))
			{
				iVar11 = PLAYER::GET_PLAYER_PED(bVar10);
				if (!PED::IS_PED_INJURED(iVar11))
				{
					iVar9 = 0;
					while (iVar9 < 4)
					{
						if (!func_123(iVar9))
						{
							if (func_122(iVar9, &vVar2, &vVar5))
							{
								if (ENTITY::IS_ENTITY_IN_AREA(iVar11, vVar2, vVar5, false, false, 0))
								{
									bVar8 = false;
									(*uParam0)[iVar9]++;
									iVar1++;
								}
							}
						}
						iVar9++;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar8)
	{
		iVar9 = 0;
		while (iVar9 < 4)
		{
			if (!func_123(iVar9))
			{
				(*uParam0)[iVar9] = 1;
			}
			iVar9++;
		}
	}
	return iVar1;
}

bool func_122(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 283f, -3946f, 0f };
			*uParam2 = { 4500f, 1924f, 0f };
			return true;
		case 1:
			*uParam1 = { -3747f, -3946f, 0f };
			*uParam2 = { 550f, 1868f, 0f };
			return true;
		case 2:
			*uParam1 = { -3747f, 1540f, 0f };
			*uParam2 = { 452.5f, 8022f, 0f };
			return true;
		case 3:
			*uParam1 = { 268f, 1946f, 0f };
			*uParam2 = { 4500f, 8022f, 0f };
			return true;
		default:
			break;
	}
	return false;
}

bool func_123(int iParam0)
{
	return (func_119(iParam0) && func_118(iParam0));
}

var func_124()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= Global_262145.f_11130)
	{
		return Global_262145.f_11016;
	}
	if (iVar1 >= Global_262145.f_11129)
	{
		return Global_262145.f_11015;
	}
	if (iVar1 >= Global_262145.f_11128)
	{
		return Global_262145.f_10195;
	}
	return Global_262145.f_10195;
}

void func_125()
{
	int iVar0;

	if (func_34())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_802.f_713[iVar0] == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (func_126(iVar0))
				{
					if (!MISC::IS_BIT_SET(Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1, iVar0))
					{
						MISC::SET_BIT(&(Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1), iVar0);
					}
				}
				else if (MISC::IS_BIT_SET(Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1, iVar0))
				{
					MISC::CLEAR_BIT(&(Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1), iVar0);
				}
			}
			else if (MISC::IS_BIT_SET(Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1), iVar0);
			}
			iVar0++;
		}
	}
}

bool func_126(int iParam0)
{
	vector3 vVar0;
	var uVar3;

	if (func_32(iParam0, &vVar0, &uVar3))
	{
		if (func_127(vVar0, 10f, 1065353216 /* Float: 1f */, 5f, 1084227584 /* Float: 5f */, 1, 1, 1, 1123024896 /* Float: 120f */, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_127(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	Global_2405072.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam3))
		{
			return false;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(vParam0, fParam4))
		{
			return false;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam5, bParam18))
		{
			return false;
		}
	}
	Global_2405072.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return false;
		}
	}
	Global_2405072.f_2++;
	if (fParam14 > 0f)
	{
		if (func_132(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return false;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_128(vParam0, fParam6, iParam7, bParam9, bParam10, bParam11, bParam12, bParam16, bParam17))
			{
				return false;
			}
		}
	}
	Global_2405072.f_2++;
	return true;
}

bool func_128(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (bParam4 && !bParam7)
	{
		if (func_13(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				bVar2 = bParam6;
				if (bParam9 > 0f)
				{
					bVar2 = bParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_130(PLAYER::PLAYER_ID()), vParam0, true) <= (bVar2 + bParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(vParam0, bParam3))
					{
						return true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_13(bVar1, 1, 1))
		{
			if (!func_94(bVar1, 0) && NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID(), bVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_129(bVar1) || !bParam10) && !Global_2425662[bVar1 /*421*/].f_259)
					{
						bVar2 = bParam6;
						if (bParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									bVar2 = bParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((bParam5 || (bParam5 == 0 && PLAYER::GET_PLAYER_TEAM(bVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_130(bVar1), vParam0, true) <= (bVar2 + bParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(bVar1, vParam0, bParam3))
									{
										return true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(bVar1) != bParam8 || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_130(bVar1), vParam0, true) <= (bVar2 + bParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(bVar1, vParam0, bParam3))
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_129(bool bParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2425662[bParam0 /*421*/].f_245)
	{
		return true;
	}
	return false;
}

Vector3 func_130(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if ((func_56() && Global_1590535[bVar0 /*876*/].f_847) && !func_131(Global_1590535[bVar0 /*876*/].f_848))
	{
		return Global_1590535[bVar0 /*876*/].f_848;
	}
	return func_31(bParam0);
}

bool func_131(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_132(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((bParam8 == 1 && PLAYER::PLAYER_ID() != bVar1) || bParam8 == 0)
		{
			if (func_13(bVar1, bParam4, bParam5))
			{
				if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_129(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && bParam9) && bParam6) && func_133(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_31(bVar1), vParam0, true) < fParam3)
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_133(bool bParam0)
{
	if (func_136(PLAYER::PLAYER_ID(), bParam0))
	{
		return true;
	}
	Global_2513218 = { func_135(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2513218))
	{
		return true;
	}
	if (func_134(PLAYER::PLAYER_ID(), bParam0))
	{
		return true;
	}
	return false;
}

bool func_134(bool bParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = func_80(bParam0);
	if (!bVar0 == func_96())
	{
		if (bVar0 == func_80(bParam1))
		{
			return true;
		}
	}
	return false;
}

struct<13> func_135(bool bParam0)
{
	struct<13> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

bool func_136(bool bParam0, bool bParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2513218 = { func_135(bParam0) };
		Global_2513231 = { func_135(bParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513218))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513231))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513148, 35, &Global_2513218);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_137()
{
	int iVar0;
	int iVar1;

	func_639();
	if (func_637())
	{
		func_521();
	}
	if (func_520(PLAYER::PLAYER_ID()) || func_519(PLAYER::PLAYER_ID()))
	{
		func_518();
	}
	if ((!func_6(PLAYER::PLAYER_ID()) && !func_517(0)) && !func_517(func_516(132)))
	{
		if (func_491(0, 1, 1))
		{
			if (MISC::IS_BIT_SET(iLocal_84, 3))
			{
				MISC::CLEAR_BIT(&iLocal_84, 3);
			}
			switch (Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3)
			{
				case 0:
					if (Local_802.f_8 == 1)
					{
						func_490(1);
						func_489(1);
					}
					else if (Local_802.f_8 >= 2)
					{
						func_489(1);
					}
					break;
				case 1:
					func_485(6);
					if (Local_802.f_8 >= 2)
					{
						func_489(2);
					}
					func_485(2);
					func_483(0);
					func_481((Global_262145.f_11114 - func_482(&(Local_802.f_667), 0, 0)));
					func_478(func_480((Global_262145.f_11114 - func_482(&(Local_802.f_667), 0, 0)), 0), func_479(-1));
					func_456();
					break;
				case 2:
					if (Local_802.f_8 > 2)
					{
						func_490(0);
						func_437(132, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */, 0, 0, 0, 0);
						if (!func_6(PLAYER::PLAYER_ID()))
						{
							func_436();
						}
						else
						{
							MISC::SET_BIT(&iLocal_84, 5);
						}
						if (Local_802.f_710)
						{
							func_435();
						}
						if (Local_802.f_707)
						{
							Global_2537071.f_5043 = 1;
						}
						else
						{
							Global_2537071.f_5043 = 0;
						}
						func_434();
						if (!func_6(PLAYER::PLAYER_ID()))
						{
							if (func_34())
							{
								func_419(678f, 794f, 206f, 8f, 0);
								func_419(1911.3f, 4714.6f, 41.1f, 8f, 0);
								func_419(688.5021f, 735.4581f, 181.296f, 8f, 0);
							}
						}
						func_489(3);
					}
					break;
				case 3:
					if (Local_802.f_8 > 3)
					{
						func_489(4);
					}
					else
					{
						if (!bLocal_766)
						{
							if (func_418())
							{
								bLocal_766 = true;
							}
						}
						iVar1 = 0;
						while (iVar1 < Local_802.f_709)
						{
							if (bLocal_216[iVar1] || bLocal_766)
							{
								func_316(iVar1);
							}
							iVar1++;
						}
						iVar0 = 0;
						while (iVar0 < 3)
						{
							bLocal_216[iLocal_80] = func_315(iLocal_80);
							bLocal_85[iLocal_80] = func_313(iLocal_80);
							if (!bLocal_85[iLocal_80])
							{
								func_316(iLocal_80);
							}
							iLocal_80++;
							if (iLocal_80 >= Local_802.f_709)
							{
								iLocal_80 = 0;
							}
							iVar0++;
						}
						func_483(0);
						func_485(4);
						func_485(5);
						if (func_311(0) && !func_310(0))
						{
							func_309();
						}
						if ((!func_308(PLAYER::PLAYER_ID()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
						{
							func_307();
						}
						func_306();
					}
					func_303();
					func_302();
					func_436();
					func_284();
					func_456();
					break;
				case 4:
					func_191();
					func_175();
					func_174();
					func_483(1);
					func_173();
					func_284();
					if (func_162(&uLocal_768, !MISC::IS_BIT_SET(Local_802.f_2, 2)) || MISC::IS_BIT_SET(Local_802.f_2, 2))
					{
						if (func_34())
						{
							func_489(5);
						}
						else
						{
							func_489(6);
						}
					}
					break;
				case 5:
					if (Local_802.f_8 > 5)
					{
						func_489(6);
					}
					break;
				case 6:
					break;
			}
		}
		else
		{
			func_157();
		}
	}
	else
	{
		func_518();
		func_157();
	}
	func_144();
	func_139();
	func_138();
}

void func_138()
{
	struct<2> Var0;
	int iVar2;

	if (func_34())
	{
		Var0 = { Local_802.f_729[iLocal_367 /*2*/] };
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
		{
			iVar2 = NETWORK::NET_TO_VEH(Var0.f_1);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
				}
			}
		}
		iLocal_367++;
		if (iLocal_367 >= 10)
		{
			iLocal_367 = 0;
			bLocal_799 = iLocal_798;
			iLocal_798 = 0;
		}
	}
}

void func_139()
{
	if (Local_802.f_8 == 5)
	{
		if (func_38(&(Local_802.f_669)))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_802.f_729[iLocal_367 /*2*/].f_1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_802.f_729[iLocal_367 /*2*/].f_1), false))
				{
					if (!MISC::IS_BIT_SET(iLocal_786, iLocal_367))
					{
						MISC::SET_BIT(&iLocal_786, iLocal_367);
						iLocal_787[iLocal_367] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_787[iLocal_367], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_802.f_729[iLocal_367 /*2*/].f_1), "GTAO_FM_Events_Soundset", false, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_787[iLocal_367], "Time", 30f);
					}
					if ((30000 - func_482(&(Local_802.f_669), 0, 0)) >= 0)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_802.f_729[iLocal_367 /*2*/].f_1), false))
						{
							func_485(3);
							iLocal_798 = 1;
						}
					}
					else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_802.f_729[iLocal_367 /*2*/].f_1))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_VEH(Local_802.f_729[iLocal_367 /*2*/].f_1));
						NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_802.f_729[iLocal_367 /*2*/].f_1), true, false, -1);
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_786, iLocal_367) && !AUDIO::HAS_SOUND_FINISHED(iLocal_787[iLocal_367]))
				{
					AUDIO::STOP_SOUND(iLocal_787[iLocal_367]);
				}
			}
			if (bLocal_799)
			{
				if (!func_92(PLAYER::PLAYER_ID()))
				{
					func_141(func_480((30000 - func_482(&(Local_802.f_669), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					func_140();
				}
			}
		}
	}
}

void func_140()
{
	Global_1378678.f_1130 = 1;
}

void func_141(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_143(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_142(7, iVar0);
		Global_1378678.f_4562[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_4562.f_172[iVar0] = iParam2;
		Global_1378678.f_4562.f_216[iVar0] = iParam3;
		Global_1378678.f_4562.f_183[iVar0] = iParam4;
		Global_1378678.f_4562.f_194[iVar0] = iParam5;
		Global_1378678.f_4562.f_249[iVar0] = iParam6;
		Global_1378678.f_4562.f_260[iVar0] = iParam7;
		Global_1378678.f_4562.f_205[iVar0] = iParam8;
		Global_1378678.f_4562.f_314[iVar0] = iParam9;
		Global_1378678.f_4562.f_325[iVar0] = iParam10;
		Global_1378678.f_4562.f_357[iVar0] = iParam11;
		Global_1378678.f_4562.f_238[iVar0] = iParam12;
		Global_1378678.f_4562.f_271[iVar0] = iParam13;
		Global_1378678.f_4562.f_368[iVar0] = iParam14;
		Global_1378678.f_4562.f_379[iVar0] = iParam15;
		Global_1378678.f_4562.f_390[iVar0] = iParam16;
		Global_1378678.f_4562.f_227[iVar0] = iParam17;
	}
}

void func_142(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_143(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

void func_144()
{
	char* sVar0;

	if (((func_13(PLAYER::PLAYER_ID(), 1, 1) && !func_6(PLAYER::PLAYER_ID())) && !func_519(PLAYER::PLAYER_ID())) && func_491(0, 1, 1))
	{
		if (Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3 == 1)
		{
			if (Local_802.f_707)
			{
				sVar0 = "CPC_TILELA";
			}
			else
			{
				sVar0 = "CPC_TILEL";
			}
			if (func_34() && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_145("CPC_PREPAIR", sVar0, func_156(), 0);
			}
			else
			{
				func_145("CPC_PREP", sVar0, func_156(), 0);
			}
		}
		else
		{
			func_434();
		}
	}
	else
	{
		func_434();
	}
}

int func_145(char* sParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 23)
	{
		return 0;
	}
	if (func_155(sParam0, sParam1, sParam2))
	{
		return 0;
	}
	func_149();
	Global_1312585 = 4;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	StringCopy(&(Global_1312585.f_32), sParam2, 64);
	func_148();
	func_147(bParam3);
	func_146();
	return 1;
}

void func_146()
{
	MISC::SET_BIT(&(Global_1312585.f_59), 1);
}

void func_147(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_148()
{
	Global_1312585.f_10 = NETWORK::HAS_NETWORK_TIME_STARTED(NETWORK::_0xBA7F0B77D80A4EB7(), 86400000);
	Global_1312585.f_11 = NETWORK::_0xBA7F0B77D80A4EB7();
}

void func_149()
{
	func_151();
	func_150(0);
}

void func_150(bool bParam0)
{
	bool bVar0;

	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = NETWORK::_0xBA7F0B77D80A4EB7();
		Global_1312585.f_11 = NETWORK::_0xBA7F0B77D80A4EB7();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_151()
{
	if (!func_154())
	{
	}
	if (func_153())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312585.f_12));
		func_152();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_152()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		case 0:
			return;
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			return;
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_53);
			return;
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		case 9:
			HUD::_ADD_TEXT_COMPONENT_SUBSTRING_UNK(&(Global_1312585.f_16));
			return;
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		case 11:
			HUD::_ADD_TEXT_COMPONENT_SUBSTRING_UNK(&(Global_1312585.f_16));
			return;
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			return;
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		default:
			break;
	}
}

bool func_153()
{
	if (Global_1312585 == 20)
	{
		return false;
	}
	return true;
}

bool func_154()
{
	if (!func_153())
	{
		return false;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_152();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_155(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_153())
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return false;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12)))
	{
		return false;
	}
	if (!MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1312585.f_16)))
	{
		return false;
	}
	return MISC::GET_HASH_KEY(sParam2) == MISC::GET_HASH_KEY(&(Global_1312585.f_32));
}

char* func_156()
{
	switch (Local_802.f_712)
	{
		case 0:
			return "CPC_WARN0";
		case 1:
			return "CPC_WARN1";
		case 2:
			return "CPC_WARN2";
		case 3:
			return "CPC_WARN3";
	}
	return "";
}

void func_157()
{
	if (!MISC::IS_BIT_SET(iLocal_84, 3))
	{
		bLocal_766 = true;
		func_174();
		HUD::CLEAR_ALL_HELP_MESSAGES();
		func_483(1);
		func_161();
		func_159();
		MISC::SET_BIT(&iLocal_84, 3);
		func_158();
	}
}

void func_158()
{
	Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_7 = 0;
}

void func_159()
{
	if (Global_2413899.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_160();
	}
}

void func_160()
{
	struct<28> Var0;

	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413899.f_6))
	{
		if (!Global_2413899.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413899 = { Var0 };
	Global_2413899.f_6 = -1;
}

void func_161()
{
	struct<6> Var0;

	if (Global_2405072.f_487.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405072.f_487 = { Var0 };
	}
}

bool func_162(var uParam0, bool bParam1)
{
	bool bVar0;

	if (((*uParam0 > 0 && !func_172()) && !(func_106(PLAYER::PLAYER_ID(), 0) && (func_102(PLAYER::PLAYER_ID()) || func_171(PLAYER::PLAYER_ID())))) && !func_169(PLAYER::PLAYER_ID()))
	{
		func_168();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_38(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1574650.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2537071.f_4588), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_167(uParam0, 1);
			}
			break;
		case 1:
			if (func_38(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_164();
				func_167(uParam0, 2);
			}
			break;
		case 2:
			func_164();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_163("AMEV_LBD_HELP"))
				{
					HUD::CLEAR_HELP(true);
				}
				func_167(uParam0, 3);
			}
			break;
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2537071.f_4588), 1);
				func_167(uParam0, 4);
				return true;
			}
			break;
		case 4:
			MISC::CLEAR_BIT(&(Global_2537071.f_4588), 1);
			return true;
	}
	return false;
}

bool func_163(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_164()
{
	if (MISC::IS_BIT_SET(Global_2537071.f_4588, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2537071.f_795, 2)) && func_13(PLAYER::PLAYER_ID(), 1, 1)) && !Global_73825) && !Global_58693) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_2537071.f_4588), 1);
			func_166("AMEV_LBD_HELP", -1);
			func_165(1);
			MISC::CLEAR_BIT(&(Global_2537071.f_4588), 0);
		}
	}
}

void func_165(bool bParam0)
{
	HUD::_SET_HELP_MESSAGE_TEXT_STYLE(3, 21, 200, 0, 0);
	if (bParam0 && !func_172())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_166(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

void func_167(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_168()
{
	Global_2462222 = 1;
}

bool func_169(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_170(Global_2425662[bParam0 /*421*/].f_310.f_5) == 2;
			}
		}
	}
	return false;
}

int func_170(int iParam0)
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

bool func_171(bool bParam0)
{
	return func_101(bParam0, 19);
}

bool func_172()
{
	return Global_2439138.f_2723[0 /*80*/].f_1 != 0;
}

void func_173()
{
	if (MISC::IS_BIT_SET(Global_2537071.f_4961, 1))
	{
		MISC::CLEAR_BIT(&(Global_2537071.f_4961), 1);
	}
	if (Global_2537071.f_4961 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
		Global_2537071.f_4961 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
		if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_2537071.f_4971 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2537071.f_4971);
				Global_2537071.f_4971 = -1;
			}
		}
	}
}

void func_174()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_802.f_709)
	{
		if (HUD::DOES_BLIP_EXIST(vLocal_374[iVar0 /*3*/]))
		{
			HUD::REMOVE_BLIP(&(vLocal_374[iVar0 /*3*/]));
			GRAPHICS::DELETE_CHECKPOINT(vLocal_374[iVar0 /*3*/].f_1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_360[iVar0] = 0;
		iVar0++;
	}
}

void func_175()
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;

	if (!MISC::IS_BIT_SET(Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0) && (func_190() || MISC::IS_BIT_SET(Local_802.f_2, 2)))
	{
		if (func_59(func_189()))
		{
			func_188();
		}
		if (!MISC::IS_BIT_SET(Local_802.f_2, 2))
		{
			if (func_311(0))
			{
				if (func_310(0))
				{
					if (!MISC::IS_BIT_SET(Local_802.f_2, 0))
					{
						sVar0 = "CPC_END";
					}
					else
					{
						sVar0 = "CPC_ENDBONUS";
					}
					func_187(64, Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, sVar0, "AMCH_WIN", 1, 15000, -1082130432 /* Float: -1f */, 2);
				}
				else
				{
					iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_802.f_674[0]);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
					{
						bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
						if (func_310(1))
						{
							if (!MISC::IS_BIT_SET(Local_802.f_2, 0))
							{
								sVar0 = "CPC_2ND";
							}
							else
							{
								sVar0 = "CPC_2NDBONUS";
							}
							func_187(67, Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, sVar0, "CPC_OVER", 1, 15000, -1082130432 /* Float: -1f */, 2);
						}
						else if (func_310(2))
						{
							if (!MISC::IS_BIT_SET(Local_802.f_2, 0))
							{
								sVar0 = "CPC_3RD";
							}
							else
							{
								sVar0 = "CPC_3RDBONUS";
							}
							func_187(67, Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, sVar0, "CPC_OVER", 1, 15000, -1082130432 /* Float: -1f */, 2);
						}
						else
						{
							if (MISC::IS_BIT_SET(Local_802.f_2, 0) && Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 >= Global_262145.f_11274)
							{
								sVar0 = "CPC_LOSEBONUS";
							}
							else
							{
								sVar0 = "CPC_LOSE";
							}
							sVar3 = PLAYER::GET_PLAYER_NAME(bVar2);
							if (func_81(bVar2, 1))
							{
								sVar3 = func_178(bVar2);
							}
							func_177(66, Local_3443[Local_802.f_674[0] /*5*/].f_4, sVar0, sVar3, "CPC_OVER", 1, 15000, 2);
						}
					}
				}
			}
			else
			{
				func_44(66, "CPC_OVER", "CPC_NOWIN", 1, 15000, 2, 1, 0);
			}
		}
		else
		{
			func_43("", "", 1);
		}
		MISC::SET_BIT(&(Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 0);
		func_176(132);
	}
}

void func_176(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_177(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_99(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_25), sParam3, 64);
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	return func_45(&Var0);
}

char* func_178(bool bParam0)
{
	char* sVar0;
	bool bVar1;

	if (bParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_186(&(Global_1628237[bParam0 /*615*/].f_11.f_104));
		return sVar0;
	}
	if (Global_1628237[bParam0 /*615*/].f_11.f_120 != Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_120)
	{
		sVar0 = func_181(bParam0, 0);
		return sVar0;
	}
	if (((func_101(bParam0, 28) || func_101(PLAYER::PLAYER_ID(), 28)) || func_180(bParam0)) && !func_179(bParam0))
	{
		return func_181(bParam0, 0);
	}
	bVar1 = func_80(bParam0);
	if (bVar1 != func_96())
	{
		if (bVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, true))
			{
				return func_181(bVar1, 0);
			}
		}
	}
	if (bVar1 != func_96())
	{
		sVar0 = func_186(&(Global_1628237[bVar1 /*615*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_181(bVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

bool func_179(bool bParam0)
{
	struct<13> Var0;

	Var0 = { func_135(bParam0) };
	if (MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_180(bool bParam0)
{
	struct<13> Var0;

	if (bParam0 != func_96())
	{
		Var0 = { func_135(bParam0) };
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return false;
			}
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return false;
				}
			}
		}
	}
	return true;
}

char* func_181(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_183(bParam0, 1))
		{
			return func_182();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_182()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

bool func_183(bool bParam0, bool bParam1)
{
	return func_184(bParam0, bParam1, 1);
}

int func_184(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (bParam0 == func_96())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_185(bParam0, iParam2))
		{
			return 0;
		}
	}
	bVar0 = Global_1628237[bParam0 /*615*/].f_11;
	if (bVar0 != func_96() && Global_1628237[bVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_185(bool bParam0, int iParam1)
{
	if (bParam0 != func_96())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_96())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 == bParam0 && Global_1628237[bParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

char* func_186(var uParam0)
{
	return uParam0;
}

int func_187(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_99(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_45(&Var0);
}

void func_188()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_2 != 0)
		{
			Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			func_97(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_189()
{
	return Global_2439138.f_2723[0 /*80*/].f_1;
}

bool func_190()
{
	return MISC::IS_BIT_SET(Global_1574650.f_1, 25);
}

void func_191()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;

	if (!MISC::IS_BIT_SET(Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 1))
	{
		if (func_6(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 1);
			return;
		}
		if (func_519(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 1);
			return;
		}
		if (Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 >= Global_262145.f_11274)
		{
			iVar3 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_802.f_1 - fLocal_82)) / 60f) / 1000f));
			if (iVar3 > Global_262145.f_11435)
			{
				iVar3 = Global_262145.f_11435;
			}
			else if (iVar3 < 1)
			{
				iVar3 = 1;
			}
			iVar2 = (func_283() * iVar3);
			iVar1 = (func_282() * iVar3);
		}
		else
		{
			func_280(0);
		}
		if (!MISC::IS_BIT_SET(Local_802.f_2, 2))
		{
			if (Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 >= Global_262145.f_11274)
			{
				if (MISC::IS_BIT_SET(Local_802.f_2, 0))
				{
					iVar0 = (iVar0 + SYSTEM::ROUND((IntToFloat(func_279()) * Global_262145.f_11446)));
				}
			}
			if (func_310(0))
			{
				Local_3431.f_5 = 1;
				iVar1 = (iVar1 + SYSTEM::ROUND((IntToFloat(func_278()) * Global_262145.f_11447)));
			}
			if ((Local_802.f_674[0] != NETWORK::PARTICIPANT_ID_TO_INT() && Local_802.f_674[1] != NETWORK::PARTICIPANT_ID_TO_INT()) && Local_802.f_674[2] != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 >= Global_262145.f_11274)
				{
					func_280(1);
				}
			}
		}
		func_259(&iVar0, 1);
		iVar0 = (iVar0 + iVar2);
		if (iVar0 > 0)
		{
			if (func_258())
			{
				func_246(-59668082, iVar0, &uVar4, 0, 1, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CP_COLLECTION", &uVar5);
			}
		}
		Local_3431.f_6 = iVar0;
		if (!Global_262145.f_11499)
		{
			if (Local_3431.f_6 > 0)
			{
				func_245(8, Local_3431.f_6);
			}
		}
		Global_2462880 = iVar0;
		func_244();
		func_192(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		Local_3431.f_7 = (Local_3431.f_7 + iVar1);
		MISC::SET_BIT(&(Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 1);
	}
}

int func_192(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	return func_193(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, iParam10);
}

int func_193(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;

	iVar0 = func_203(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_199(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, iParam8, iParam10);
			}
		}
	}
	else
	{
		func_194(iParam1, iVar0, iParam8, iParam10);
	}
	return iVar0;
}

void func_194(int iParam0, int iParam1, int iParam2, int iParam3)
{
	vector3 vVar0;

	vVar0 = { func_197(iParam0, 1) };
	if (iParam0 == func_196(PLAYER::PLAYER_PED_ID()))
	{
		func_195(1);
	}
	func_199(vVar0, iParam1, 0, iParam2, iParam3);
}

void func_195(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_196(int iParam0)
{
	return iParam0;
}

Vector3 func_197(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;

	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		vVar3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_198(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar6 = vVar3.z;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar7, &vVar10);
	if (bParam1)
	{
		fVar13 = (vVar10.z + 0.18f);
	}
	else
	{
		fVar13 = (vVar7.z + 0.18f);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar6, 0f, 0f, fVar13) };
	return vVar0;
}

int func_198(int iParam0)
{
	return iParam0;
}

void func_199(vector3 vParam0, int iParam3, int iParam4, char* sParam5, bool bParam6)
{
	int iVar0;
	int iVar1;

	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2439138.f_1290[iVar0 /*30*/].f_6 == 0 || Global_2439138.f_1290[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2439138.f_1290[iVar1 /*30*/] = { vParam0 };
			Global_2439138.f_1290[iVar1 /*30*/].f_6 = 1;
			Global_2439138.f_1290[iVar1 /*30*/].f_4 = func_202(Global_2439138.f_1290[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1 /*30*/].f_7 = NETWORK::_0xBA7F0B77D80A4EB7();
			Global_2439138.f_1290[iVar1 /*30*/].f_3 = iParam3;
			Global_2439138.f_1290[iVar1 /*30*/].f_8 = iParam4;
			Global_2439138.f_1290[iVar1 /*30*/].f_9 = func_201();
			Global_2439138.f_1290[iVar1 /*30*/].f_10 = func_200();
			StringCopy(&(Global_2439138.f_1290[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1 /*30*/].f_26 = NETWORK::HAS_NETWORK_TIME_STARTED(NETWORK::_0xBA7F0B77D80A4EB7(), bParam6);
		}
	}
}

int func_200()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_201()
{
	var uVar0;

	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_202(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

int func_203(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_204(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return iVar0;
}

int func_204(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (func_243(PLAYER::PLAYER_ID()) || func_242(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_240() || func_237(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_236(sParam2))
	{
	}
	if (func_235())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_233(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_232(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_230(0, &iVar1);
					break;
				case 3:
					func_230(1, &iVar1);
					break;
				case 1:
					func_228(&iVar1);
					break;
			}
		}
		if (iVar1 > Global_1686714)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_225(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_214((func_224(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_2 != -1)
				{
					func_225(1165, iVar1, -1);
				}
				func_209(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_205((func_207(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_205((func_207(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_205(int iParam0)
{
	if (func_235())
	{
		Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_211.f_5 = iParam0;
		func_206(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_206(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_207(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_13(bParam0, 0, 1))
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return func_208(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_5;
			}
		}
		else
		{
			return func_208(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_208(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_209(int iParam0)
{
	struct<13> Var0;
	int iVar13;

	Var0 = { func_135(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_212(func_213(&Var0));
			if (iVar13 == 0)
			{
				func_211(&Global_1387915, iParam0);
				func_210(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_211(&Global_1387916, iParam0);
				func_210(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_211(&Global_1387917, iParam0);
				func_210(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_211(&Global_1387918, iParam0);
				func_210(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_211(&Global_1387919, iParam0);
				func_210(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1387919);
			}
		}
	}
}

void func_210(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1387910 = iParam1;
			break;
		case joaat("MPPLY_CREW_1_ID"):
			Global_1387912 = iParam1;
			break;
		case joaat("MPPLY_CREW_2_ID"):
			Global_1387912 = iParam1;
			break;
		case joaat("MPPLY_CREW_3_ID"):
			Global_1387913 = iParam1;
			break;
		case joaat("MPPLY_CREW_4_ID"):
			Global_1387914 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1387915 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1387916 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1387917 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1387918 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1387919 = iParam1;
			break;
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1387920 = iParam1;
			break;
		case joaat("MPPLY_FRIENDLY"):
			Global_1387921 = iParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1387922 = iParam1;
			break;
		case joaat("MPPLY_GRIEFING"):
			Global_1387923 = iParam1;
			break;
		case joaat("MPPLY_HELPFUL"):
			Global_1387924 = iParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1387925 = iParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1387926 = iParam1;
			break;
		default:
			break;
	}
}

void func_211(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_212(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_213(int* iParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(iParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

void func_214(int iParam0, int iParam1, int iParam2)
{
	if (func_235())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_223(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_223(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_222(PLAYER::PLAYER_ID()))
		{
			Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_211.f_1 = iParam0;
			Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_211.f_6 = func_220(iParam0, 1);
		}
		func_219(639, iParam0, -1, 1);
		func_218(640, func_220(iParam0, 1), -1, 1, 0);
		Global_1388060[func_223(-1)] = iParam0;
		func_215(-1109644434, 7, 0);
	}
}

void func_215(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_217(iParam1, bParam2))
	{
		iVar0 = func_216();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_216()
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

bool func_217(int iParam0, bool bParam1)
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

void func_218(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_223(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_219(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = Global_2548434[iParam0 /*3*/][func_223(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_223(iParam2)] = iParam1;
			break;
		case 788:
			Global_1387994[func_223(iParam2)] = iParam1;
			break;
		case 789:
			Global_1388000[func_223(iParam2)] = iParam1;
			break;
		case 790:
			Global_1388006[func_223(iParam2)] = iParam1;
			break;
		case 8726:
			Global_1388012[func_223(iParam2)] = iParam1;
			break;
		case 777:
			Global_1387958[func_223(iParam2)] = iParam1;
			break;
		case 778:
			Global_1387964[func_223(iParam2)] = iParam1;
			break;
		case 779:
			Global_1387970[func_223(iParam2)] = iParam1;
			break;
		case 780:
			Global_1387976[func_223(iParam2)] = iParam1;
			break;
		case 8728:
			Global_1387982[func_223(iParam2)] = iParam1;
			break;
		case 767:
			Global_1387928[func_223(iParam2)] = iParam1;
			break;
		case 768:
			Global_1387934[func_223(iParam2)] = iParam1;
			break;
		case 769:
			Global_1387940[func_223(iParam2)] = iParam1;
			break;
		case 770:
			Global_1387946[func_223(iParam2)] = iParam1;
			break;
		case 8730:
			Global_1387952[func_223(iParam2)] = iParam1;
			break;
		case 757:
			Global_1388018[func_223(iParam2)] = iParam1;
			break;
		case 758:
			Global_1388024[func_223(iParam2)] = iParam1;
			break;
		case 759:
			Global_1388030[func_223(iParam2)] = iParam1;
			break;
		case 760:
			Global_1388036[func_223(iParam2)] = iParam1;
			break;
		case 8732:
			Global_1388042[func_223(iParam2)] = iParam1;
			break;
		case 1303:
			Global_1388048[func_223(iParam2)] = iParam1;
			break;
		case 7233:
			Global_1388054[func_223(iParam2)] = iParam1;
			break;
		case 639:
			Global_1388060[func_223(iParam2)] = iParam1;
			break;
		case 1278:
			Global_1388066[func_223(iParam2)] = iParam1;
			break;
		case 1876:
			Global_2586065[0 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 2267:
			Global_2586065[1 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 2929:
			Global_2586065[2 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3058:
			Global_2586065[3 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 10016:
			Global_2586214[func_223(iParam2)] = iParam1;
			break;
		case 764:
			Global_1388072[func_223(iParam2)] = iParam1;
			break;
		case 765:
			Global_1388078[func_223(iParam2)] = iParam1;
			break;
		case 766:
			Global_1388084[func_223(iParam2)] = iParam1;
			break;
		case 8731:
			Global_1388090[func_223(iParam2)] = iParam1;
			break;
		case 1236:
			Global_1388096[func_223(iParam2)] = iParam1;
			break;
		case 3053:
			Global_2586138[0 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3054:
			Global_2586138[1 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3055:
			Global_2586138[2 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3056:
			Global_2586138[3 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3057:
			Global_2586138[4 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3636:
			Global_2586217[0 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3637:
			Global_2586217[1 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3638:
			Global_2586217[2 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3639:
			Global_2586217[3 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3640:
			Global_2586217[4 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3641:
			Global_2586233[0 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3642:
			Global_2586233[1 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3643:
			Global_2586233[2 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3644:
			Global_2586233[3 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3645:
			Global_2586233[4 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3221:
			Global_2586138[5 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3227:
			Global_2586065[4 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3663:
			Global_2586249[func_223(iParam2)] = iParam1;
			break;
		case 3664:
			Global_2586258[func_223(iParam2)] = iParam1;
			break;
		case 3665:
			Global_2586252[func_223(iParam2)] = iParam1;
			break;
		case 3666:
			Global_2586261[func_223(iParam2)] = iParam1;
			break;
		case 3667:
			Global_2586255[func_223(iParam2)] = iParam1;
			break;
		case 3668:
			Global_2586264[func_223(iParam2)] = iParam1;
			break;
		case 3689:
			Global_2586267[func_223(iParam2)] = iParam1;
			break;
		case 3229:
			Global_2586138[6 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3230:
			Global_2586065[5 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3234:
			Global_2586138[7 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 3232:
			Global_2586065[6 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 4019:
			Global_2586138[8 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 4020:
			Global_2586065[7 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 4022:
			Global_2586138[9 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 4023:
			Global_2586065[8 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 4025:
			Global_2586138[10 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 4026:
			Global_2586065[9 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 4028:
			Global_2586138[11 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 4029:
			Global_2586065[10 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 6109:
			Global_2586138[12 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 6110:
			Global_2586065[11 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 6167:
			Global_2586138[13 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 6168:
			Global_2586065[12 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 6545:
			Global_2586138[14 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 6546:
			Global_2586065[13 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 6558:
			Global_2586138[15 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 6559:
			Global_2586065[14 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 6561:
			Global_2586138[16 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 6562:
			Global_2586065[15 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 6564:
			Global_2586138[17 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 6565:
			Global_2586065[16 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 7283:
			Global_2586065[17 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 7285:
			Global_2586065[18 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 7287:
			Global_2586065[19 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 8010:
			Global_2586065[20 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 8282:
			Global_2586270[func_223(iParam2)] = iParam1;
			break;
		case 8283:
			Global_2586273[func_223(iParam2)] = iParam1;
			break;
		case 8284:
			Global_2586276[func_223(iParam2)] = iParam1;
			break;
		case 8285:
			Global_2586279[func_223(iParam2)] = iParam1;
			break;
		case 8286:
			Global_2586282[func_223(iParam2)] = iParam1;
			break;
		case 8287:
			Global_2586285[func_223(iParam2)] = iParam1;
			break;
		case 8288:
			Global_2586288[func_223(iParam2)] = iParam1;
			break;
		case 8289:
			Global_2586291[func_223(iParam2)] = iParam1;
			break;
		case 8290:
			Global_2586294[func_223(iParam2)] = iParam1;
			break;
		case 8291:
			Global_2586297[func_223(iParam2)] = iParam1;
			break;
		case 8292:
			Global_2586300[func_223(iParam2)] = iParam1;
			break;
		case 8293:
			Global_2586303[func_223(iParam2)] = iParam1;
			break;
		case 8294:
			Global_2586306[func_223(iParam2)] = iParam1;
			break;
		case 8900:
			Global_2586309[func_223(iParam2)] = iParam1;
			break;
		case 8534:
			Global_2586065[21 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 8977:
			Global_2586138[23 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 8975:
			Global_2586065[22 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 8980:
			Global_2586138[24 /*3*/][func_223(iParam2)] = iParam1;
			break;
		case 8978:
			Global_2586065[23 /*3*/][func_223(iParam2)] = iParam1;
			break;
		default:
			break;
	}
}

int func_220(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_221(iParam0, 0);
}

int func_221(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_291133[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

bool func_222(bool bParam0)
{
	if (bParam0 == -1)
	{
		return false;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2439138.f_1, bParam0);
	}
	return true;
}

int func_223(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
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

int func_224(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388060[func_223(-1)];
			}
			else if (func_222(iParam0))
			{
				return Global_1590535[iParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_223(-1)];
	}
	return 0;
}

void func_225(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_227(iParam0, func_223(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_226(iParam0))
	{
		func_218(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_219(iParam0, iVar0, iParam2, 1);
	}
}

bool func_226(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return true;
		}
	}
	return false;
}

int func_227(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_223(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_228(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;

	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(bVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(bVar5) == iVar1 || func_68(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != PLAYER::PLAYER_ID())
					{
						if (func_136(PLAYER::PLAYER_ID(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_229(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_229(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_229(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_230(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_13(bVar4, 0, 1))
				{
					if (bVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_136(PLAYER::PLAYER_ID(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar4 = iVar0;
			if (func_13(bVar4, 1, 1))
			{
				if (bVar4 != PLAYER::PLAYER_ID())
				{
					if (func_231(PLAYER::PLAYER_ID(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_136(PLAYER::PLAYER_ID(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_229(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_229(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_231(bool bParam0, bool bParam1)
{
	return SYSTEM::VDIST(func_31(bParam0), func_31(bParam1));
	return 0f;
}

int func_232(int iParam0)
{
	int iVar0;

	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_229(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_233(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_224(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_224(PLAYER::PLAYER_ID());
		}
	}
	if (func_234(8000, 0, 0) > 0)
	{
		if (func_234(8000, 0, 0) < (iParam0 + func_224(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_234(8000, 0, 0) - func_224(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_234(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_291133[iParam0];
}

bool func_235()
{
	return true;
}

bool func_236(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return true;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return true;
	}
	return false;
}

int func_237(bool bParam0)
{
	return func_238(func_239(bParam0));
}

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_239(bool bParam0)
{
	if (func_106(bParam0, 0))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_240()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_56();
	}
	return func_241(Global_4456448.f_194990);
}

int func_241(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_242(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_243(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

void func_244()
{
	Global_2462221 = 1;
}

void func_245(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23489 == 0 || Global_262145.f_23489 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23489 == 1)
			{
				Global_2537071.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6584)
				{
					iParam1 = Global_262145.f_6584;
				}
				Global_2537071.f_284 = iParam1;
				Global_2537071.f_285 = 0;
			}
		}
	}
}

void func_246(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_258())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_247(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		case -31156877:
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
		case 1982688246:
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
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
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
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_247(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_247(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
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
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
			func_247(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_247(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar0 = false;
	if (!func_258())
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_41()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || bVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || bVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_254(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (bVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263954[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4263954[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_253(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_248(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_248(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_249(iParam0);
	}
}

void func_249(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_258())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_252(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4263954[iParam0 /*85*/].f_66);
		}
		func_250(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_250(var uParam0)
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
	func_251(&(uParam0->f_14));
	func_251(&(uParam0->f_14.f_13));
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

void func_251(var uParam0)
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

bool func_252(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return false;
}

void func_253(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_254(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_258())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4263954[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4263954[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4263954[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4263954[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4263954[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4263954[iVar0 /*85*/].f_66 = iParam0;
			Global_4263954[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4263954[iVar0 /*85*/].f_66.f_11 = iParam8;
			Global_4263954[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4263954[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4263954[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4263954[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_255(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_255(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	vector3 vVar0;
	int iVar36;

	if (iParam85 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 285918879;
	vVar0.f_1 = PLAYER::PLAYER_ID();
	vVar0.f_2 = { Param0.f_66 };
	vVar0.f_2.f_33 = iParam85;
	iVar36 = func_257(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_256();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 36, iVar36);
	}
}

void func_256()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_257(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

bool func_258()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return false;
}

void func_259(int iParam0, int iParam1)
{
	int iVar0;

	if (*iParam0 > 0)
	{
		if (!func_277())
		{
			if (func_276(0))
			{
				if (!func_275(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_274()))
					{
						if (func_273() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_273());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_271(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_264("GB_BCUT_TICK1", func_274(), iVar0, 0, 0, 1);
						}
						func_263(20);
						func_260(func_274(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_260(bool bParam0, int iParam1, int iParam2)
{
	struct<8> Var0;

	if (func_13(bParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_262(bParam0);
		func_261(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_257(bParam0));
	}
}

void func_261(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_262(bool bParam0)
{
	return Global_1628237[bParam0 /*615*/].f_533;
}

void func_263(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

int func_264(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	char cVar1[64];

	iVar0 = -1;
	if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID(), bParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&cVar1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&cVar1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_61(bParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_269(&cVar1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_265(27, sParam0, 1, &cVar1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_265(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;

	if ((!func_268() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_94(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_266(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0 /*53*/] = iParam0;
		Global_1670846.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1670846.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1670846.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1670846.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1670846.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_266(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0 /*53*/].f_1)
		{
			func_267(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1670846++;
	if (Global_1670846 > 5)
	{
		Global_1670846 = 5;
		return Global_1670846;
	}
	return (Global_1670846 - 1);
}

void func_267(int iParam0)
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0 /*53*/] = { Global_1670846.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_268()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_269(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_270(&cVar0);
}

char[] func_270(char[4] cParam0)
{
	return cParam0;
}

void func_271(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		iVar1 = func_272(1);
	}
	else
	{
		iVar1 = func_272(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_272(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_273()
{
	return Global_262145.f_12389;
}

bool func_274()
{
	return Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11;
}

bool func_275(bool bParam0)
{
	return func_183(PLAYER::PLAYER_ID(), bParam0);
}

bool func_276(bool bParam0)
{
	return func_81(PLAYER::PLAYER_ID(), bParam0);
}

bool func_277()
{
	return func_82(PLAYER::PLAYER_ID());
}

int func_278()
{
	return Global_262145.f_11257;
}

int func_279()
{
	return Global_262145.f_11256;
}

void func_280(bool bParam0)
{
	if (bParam0)
	{
		if (func_281(1))
		{
			MISC::SET_BIT(&Global_1574675, 1);
		}
	}
	else if (func_281(2))
	{
		MISC::SET_BIT(&Global_1574675, 2);
	}
}

bool func_281(int iParam0)
{
	int iVar0;

	iVar0 = func_227(2534, -1, 0);
	if (iParam0 == 0)
	{
		if ((MISC::IS_BIT_SET(iVar0, 0) && MISC::IS_BIT_SET(iVar0, 1)) && MISC::IS_BIT_SET(iVar0, 2))
		{
			return false;
		}
	}
	else if (iParam0 == 1)
	{
		if ((MISC::IS_BIT_SET(iVar0, 3) && MISC::IS_BIT_SET(iVar0, 4)) && MISC::IS_BIT_SET(iVar0, 5))
		{
			return false;
		}
	}
	else if (iParam0 == 2)
	{
		if ((MISC::IS_BIT_SET(iVar0, 6) && MISC::IS_BIT_SET(iVar0, 7)) && MISC::IS_BIT_SET(iVar0, 8))
		{
			return false;
		}
	}
	else if (iParam0 == 3)
	{
		if ((MISC::IS_BIT_SET(iVar0, 9) && MISC::IS_BIT_SET(iVar0, 10)) && MISC::IS_BIT_SET(iVar0, 11))
		{
			return false;
		}
	}
	return true;
}

int func_282()
{
	return Global_262145.f_11276;
}

int func_283()
{
	return Global_262145.f_11275;
}

void func_284()
{
	if (MISC::IS_BIT_SET(iLocal_84, 5))
	{
		func_285();
	}
	func_521();
}

void func_285()
{
	bool bVar0[3];
	bool bVar4;
	var uVar5[3];
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17[3];
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	if (Local_802.f_674[0] > -1)
	{
		iVar15 = 0;
		iVar13 = 0;
		while (iVar13 < 3)
		{
			bVar0[iVar13] = func_96();
			iVar13++;
		}
		iVar13 = 0;
		while (iVar13 < 3)
		{
			if (Local_802.f_674[iVar13] > -1)
			{
				iVar21 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_802.f_674[iVar13]);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar21))
				{
					bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar21);
					if (func_13(bVar4, 0, 1))
					{
						if (!func_94(bVar4, 0))
						{
							bVar0[iVar13] = bVar4;
							uVar5[iVar13] = Local_3443[Local_802.f_674[iVar13] /*5*/].f_4;
							if (func_276(1))
							{
								if (func_81(bVar4, 1))
								{
									iVar17[iVar13] = func_61(bVar4, -2, 0, 0, 0);
								}
							}
						}
					}
				}
			}
			iVar13++;
		}
		iVar14 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (func_92(PLAYER::PLAYER_ID()))
		{
			iVar22 = func_300();
			iVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar22);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar23))
			{
				iVar24 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar23);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar24))
				{
					iVar14 = iVar24;
				}
			}
		}
		iVar9 = func_480(0, Local_802.f_708);
		iVar10 = Local_802.f_709;
		iVar11 = func_480(0, Local_3443[iVar14 /*5*/].f_4);
		iVar12 = func_480(0, (Global_262145.f_11113 - func_482(&(Local_802.f_661), 0, 0)));
		func_299(iVar12);
		if (iVar12 > 30000)
		{
			iVar16 = 1;
		}
		else
		{
			iVar16 = 6;
		}
		func_286(bVar0[0], bVar0[1], bVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar9, iVar10, iVar11, iVar12, &iVar15, iVar16, func_296(), iVar17[0], iVar17[1], iVar17[2]);
	}
}

void func_286(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, int iParam14, int iParam15)
{
	char* sVar0;
	int iVar1;
	char* sVar2;

	if (func_293(0) == 0)
	{
		return;
	}
	func_292();
	iVar1 = 0;
	if (((Global_2461747[0] != iParam0 || Global_2461747[1] != iParam1) || Global_2461747[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2461747[0] = iParam0;
	Global_2461747[1] = iParam1;
	Global_2461747[2] = iParam2;
	Global_2461747[3] = 0;
	Global_2461747[4] = 0;
	if (Global_2461747[0] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2461747[0]);
			Global_2461753[0 /*16*/] = { func_291(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_288(iParam3, &(Global_2461753[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam13, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2461747[1] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2461747[1]);
			Global_2461753[1 /*16*/] = { func_291(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_288(iParam4, &(Global_2461753[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam14, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2461747[2] != func_96())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2461747[2]);
			Global_2461753[2 /*16*/] = { func_291(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_288(iParam5, &(Global_2461753[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam15, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	func_287(iParam6, iParam7, "HUD_CHECKPOINTS", -1, 1, 5, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	if (func_519(PLAYER::PLAYER_ID()) == 0)
	{
		func_288(iParam8, "HUD_USCORE", -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_236(sParam12))
	{
		sVar2 = sParam12;
	}
	func_141(iParam9, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	*iParam10 = 0;
	func_140();
}

void func_287(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_143(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_142(4, iVar0);
		Global_1378678.f_3272[iVar0] = iParam0;
		Global_1378678.f_3272.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1378678.f_3272.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1378678.f_3272.f_183[iVar0] = iParam3;
		Global_1378678.f_3272.f_216[iVar0] = iParam5;
		Global_1378678.f_3272.f_194[iVar0] = iParam4;
		Global_1378678.f_3272.f_227[iVar0] = iParam6;
		Global_1378678.f_3272.f_270[iVar0] = iParam7;
		Global_1378678.f_3272.f_281[iVar0] = iParam8;
		Global_1378678.f_3272.f_292[iVar0] = iParam9;
		Global_1378678.f_3272.f_303[iVar0] = iParam10;
		Global_1378678.f_3272.f_314[iVar0] = iParam11;
		Global_1378678.f_3272.f_325[iVar0] = iParam13;
		Global_1378678.f_3272.f_336[iVar0] = iParam14;
		Global_1378678.f_3272.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && bParam12)
		{
			Global_1378678.f_1130 = 1;
		}
	}
}

void func_288(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_143(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_142(6, iVar0);
		Global_1378678.f_3944[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_3944.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_3944.f_183[iVar0] = iParam3;
		Global_1378678.f_3944.f_172[iVar0] = iParam2;
		Global_1378678.f_3944.f_260[iVar0] = iParam4;
		Global_1378678.f_3944.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1378678.f_3944.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1378678.f_3944.f_443[iVar0] = iParam7;
		Global_1378678.f_3944.f_454[iVar0] = iParam8;
		Global_1378678.f_3944.f_497[iVar0] = iParam9;
		Global_1378678.f_3944.f_508[iVar0] = iParam10;
		Global_1378678.f_3944.f_205[iVar0] = iParam11;
		Global_1378678.f_3944.f_216[iVar0] = iParam12;
		Global_1378678.f_3944.f_227[iVar0] = iParam13;
		Global_1378678.f_3944.f_238[iVar0] = iParam14;
		Global_1378678.f_3944.f_249[iVar0] = iParam15;
		Global_1378678.f_3944.f_519[iVar0] = iParam16;
		Global_1378678.f_3944.f_530[iVar0] = iParam17;
		Global_1378678.f_3944.f_541[iVar0] = iParam18;
		Global_1378678.f_3944.f_552[iVar0] = iParam19;
		Global_1378678.f_3944.f_563[iVar0] = iParam20;
		Global_1378678.f_3944.f_574[iVar0] = iParam21;
		Global_1378678.f_3944.f_585[iVar0] = iParam22;
		Global_1378678.f_3944.f_596[iVar0] = iParam23;
		Global_1378678.f_3944.f_607[iVar0] = iParam24;
		Global_1378678.f_3944.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_290())
		{
			Global_1378678.f_1130 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			bVar2 = false;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				bVar2 = true;
			}
			if (iParam0 > 99999999)
			{
				Global_1378678.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || bVar2)
			{
				Global_1378678.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378678.f_1130 = 1;
			}
			if (func_289())
			{
				Global_1378678.f_1134 = 1;
			}
		}
	}
}

bool func_289()
{
	int iVar0;
	var uVar1;

	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return true;
		}
	}
	return false;
}

bool func_290()
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return true;
	}
	return false;
}

struct<16> func_291(int iParam0, char* sParam1)
{
	struct<16> Var0;

	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
		case 1:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSFIRST"), 64);
			break;
		case 2:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSSECOND"), 64);
			break;
		case 3:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSTHIRD"), 64);
			break;
		case 4:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSFOURTH"), 64);
			break;
		case 5:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_292()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2462225 = 1;
}

int func_293(bool bParam0)
{
	if (func_295())
	{
		return 0;
	}
	if (func_294())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_13(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_294()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_196 != 0;
}

bool func_295()
{
	return MISC::IS_BIT_SET(Global_2359302, 12);
}

char* func_296()
{
	return "HUD_COUNTDOWN";
	switch (func_298(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG";
		case 132:
			return "AET_CHK_COLL";
		case 133:
			switch (func_297())
			{
				case 0:
					return "AET_CHALL_LJ";
				case 1:
					return "AET_CHALL_LS";
				case 2:
					return "AET_CHALL_HS";
				case 3:
					return "AET_CHALL_LST";
				case 4:
					return "AET_CHALL_LW";
				case 5:
					return "AET_CHALL_NC";
				case 6:
					return "AET_CHALL_LP";
				case 7:
					return "AET_CHALL_VS";
				case 8:
					return "AET_CHALL_NM";
				case 9:
					return "AET_CHALL_RD";
				case 10:
					return "AET_CHALL_LF";
				case 11:
					return "AET_CHALL_LFL";
				case 12:
					return "AET_CHALL_LFI";
				case 13:
					return "AET_CHALL_LB";
				case 14:
					return "AET_CHALL_MB";
				case 15:
					return "AET_CHALL_HSH";
				case 16:
					return "AET_CHALL_DB";
				case 17:
					return "AET_CHALL_ML";
				case 18:
					return "AET_CHALL_LSN";
				default:
					break;
			}
			break;
		case 136:
			return "AET_PENNED";
		case 138:
			return "AET_PARCEL";
		case 139:
			return "AET_PROPERTY";
		case 140:
			return "AET_DDROP";
		case 141:
			return "AET_KCASTLE";
		case 144:
			return "AET_BLAST";
		case 129:
			return "AET_UWARF";
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_297()
{
	if (func_298(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2537071.f_5045;
	}
	return -1;
}

int func_298(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/];
	}
	return -1;
}

void func_299(int iParam0)
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		if (MISC::IS_BIT_SET(Global_2537071.f_4961, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2537071.f_4963)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2537071.f_4963));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
			if (Global_2537071.f_4971 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2537071.f_4971);
				Global_2537071.f_4971 = -1;
			}
			Global_2537071.f_4961 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (MISC::IS_BIT_SET(Global_2537071.f_4961, 0))
		{
			if (MISC::IS_BIT_SET(Global_2537071.f_4961, 4))
			{
				if (!MISC::IS_BIT_SET(Global_2537071.f_4961, 2))
				{
					if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
					{
						if ((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2537071.f_4963)))
						{
							StringCopy(&(Global_2537071.f_4963), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
							MISC::SET_BIT(&(Global_2537071.f_4961), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && MISC::IS_BIT_SET(Global_2537071.f_4961, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!MISC::IS_BIT_SET(Global_2537071.f_4961, 1))
			{
				if (iParam0 < 10000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_20S");
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
				}
				AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
				MISC::SET_BIT(&(Global_2537071.f_4961), 1);
			}
			else if (!MISC::IS_BIT_SET(Global_2537071.f_4961, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !AUDIO::IS_RADIO_FADED_OUT())
						{
							StringCopy(&(Global_2537071.f_4963), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						MISC::SET_BIT(&(Global_2537071.f_4961), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!MISC::IS_BIT_SET(Global_2537071.f_4961, 3))
				{
					Global_2537071.f_4971 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_2537071.f_4971, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
					MISC::SET_BIT(&(Global_2537071.f_4961), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!MISC::IS_BIT_SET(Global_2537071.f_4961, 0))
			{
				Global_2537071.f_4961 = 0;
				Global_2537071.f_4971 = -1;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
				MISC::SET_BIT(&(Global_2537071.f_4961), 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || MISC::IS_BIT_SET(Global_2537071.f_4961, 2))
				{
					MISC::SET_BIT(&(Global_2537071.f_4961), 2);
					MISC::SET_BIT(&(Global_2537071.f_4961), 5);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2537071.f_4961), 5);
					MISC::CLEAR_BIT(&(Global_2537071.f_4961), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!MISC::IS_BIT_SET(Global_2537071.f_4961, 0))
		{
			Global_2537071.f_4961 = 0;
			Global_2537071.f_4971 = -1;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
			MISC::SET_BIT(&(Global_2537071.f_4961), 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				MISC::SET_BIT(&(Global_2537071.f_4961), 2);
				MISC::SET_BIT(&(Global_2537071.f_4961), 5);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2537071.f_4961), 2);
				MISC::CLEAR_BIT(&(Global_2537071.f_4961), 5);
			}
		}
	}
}

int func_300()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_301()))
	{
		return func_301();
	}
	return func_89();
}

var func_301()
{
	return Global_2359302.f_3;
}

void func_302()
{
	int iVar0;
	struct<42> Var1;
	bool bVar43;
	int iVar44;
	var uVar45;

	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_1552.f_534[iVar0 /*42*/] = { Var1 };
		Local_1552.f_534[iVar0 /*42*/].f_1 = func_96();
		if (Local_802.f_674[iVar0] > -1)
		{
			iVar44 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_802.f_674[iVar0]);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar44))
			{
				bVar43 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar44);
				if (!func_94(bVar43, 0))
				{
					Local_1552.f_534[iVar0 /*42*/] = Local_802.f_674[iVar0];
					Local_1552.f_534[iVar0 /*42*/].f_1 = bVar43;
					uVar45 = Local_3443[Local_802.f_674[iVar0] /*5*/].f_4;
					Local_1552.f_534[iVar0 /*42*/].f_9 = uVar45;
					Local_1552.f_534[iVar0 /*42*/].f_31 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_303()
{
	if (Local_800 != -1 && Local_800.f_1 != -1)
	{
		if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_305() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()))
		{
			func_304(Local_800.f_1, Local_800, func_257(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
			Local_800 = -1;
			Local_800.f_1 = -1;
		}
	}
}

void func_304(bool bParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0 = -887834944;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iParam2);
	}
}

int func_305()
{
	return -1;
}

void func_306()
{
	if (func_310(0))
	{
		if (!MISC::IS_BIT_SET(iLocal_84, 4))
		{
			if (func_275(1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", false);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_FM_Events_Soundset", false);
			}
			MISC::SET_BIT(&iLocal_84, 4);
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_84, 4))
	{
		if (func_275(1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_FM_Events_Soundset", false);
		}
		MISC::CLEAR_BIT(&iLocal_84, 4);
	}
}

void func_307()
{
	MISC::SET_BIT(&(Global_2537071.f_1734), 26);
}

bool func_308(int iParam0)
{
	if ((MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_68.f_2, 9) && !(MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_68.f_2, 6) && MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_68.f_2, 7))) || ((MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_68.f_2, 6) && !MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_68.f_2, 7)) && !MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_68.f_2, 9)))
	{
		return true;
	}
	return false;
}

void func_309()
{
	MISC::SET_BIT(&(Global_2537071.f_1734), 19);
}

bool func_310(int iParam0)
{
	if (iParam0 >= 0)
	{
		if (Local_802.f_674[iParam0] == NETWORK::PARTICIPANT_ID_TO_INT() && Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 > 0)
		{
			return true;
		}
	}
	return false;
}

bool func_311(int iParam0)
{
	int iVar0;

	if (iParam0 >= 0)
	{
		iVar0 = Local_802.f_674[iParam0];
		if (iVar0 >= 0)
		{
			if (func_312(Local_3443[iVar0 /*5*/].f_4, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_312(int iParam0, int iParam1)
{
	return iParam0 > iParam1;
}

bool func_313(int iParam0)
{
	return func_314(PLAYER::PLAYER_PED_ID(), Local_802.f_10[iParam0 /*5*/], 1) < 500f;
}

float func_314(int iParam0, vector3 vParam1, bool bParam4)
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

bool func_315(int iParam0)
{
	return func_314(PLAYER::PLAYER_PED_ID(), Local_802.f_10[iParam0 /*5*/], 1) < 750f;
}

void func_316(int iParam0)
{
	func_349(&(vLocal_374[iParam0 /*3*/]), Local_802.f_10[iParam0 /*5*/], iParam0);
	if (bLocal_85[iParam0])
	{
		func_344(Local_802.f_10[iParam0 /*5*/], iParam0);
		func_317(Local_802.f_10[iParam0 /*5*/], iParam0);
	}
}

void func_317(struct<4> Param0, var uParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (Param0.f_3 == NETWORK::PARTICIPANT_ID_TO_INT() && !MISC::IS_BIT_SET(uLocal_355[func_17(iParam5)], func_16(iParam5)))
	{
		Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4++;
		if (fLocal_82 == 0)
		{
			fLocal_82 = NETWORK::_0xBA7F0B77D80A4EB7();
		}
		iVar0 = func_342(SYSTEM::CEIL((IntToFloat(Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4) / func_343())));
		iVar1 = func_340(SYSTEM::CEIL((IntToFloat(Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4) / func_341())));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * Global_262145.f_11446));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * Global_262145.f_11447));
		if (func_34())
		{
			iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * func_339()));
			iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * func_338()));
		}
		if (func_258())
		{
			func_246(-59668082, iVar0, &uVar2, 0, 1, 0);
		}
		else
		{
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CP_COLLECTION", &uVar3);
		}
		func_244();
		func_192(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
		iLocal_365 = (iLocal_365 + iVar0);
		Global_2462880 = iVar0;
		Local_3431.f_7 = (Local_3431.f_7 + iVar1);
		MISC::SET_BIT(&(uLocal_355[func_17(iParam5)]), func_16(iParam5));
		if (Local_3431.f_11 == 0)
		{
			Local_3431.f_11 = NETWORK::_0xF12E6CD06C73D69E();
		}
		func_318();
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Checkpoint_Cash_Hit", "GTAO_FM_Events_Soundset", false);
	}
}

void func_318()
{
	if (!MISC::IS_BIT_SET(Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 2))
	{
		MISC::SET_BIT(&(Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 2);
		func_319(1);
	}
}

void func_319(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
		{
			if (((!func_100(PLAYER::PLAYER_ID()) && !func_6(PLAYER::PLAYER_ID())) && !func_519(PLAYER::PLAYER_ID())) && !func_337(PLAYER::PLAYER_ID()))
			{
				if (func_336())
				{
					func_329(2, 0, 1);
					func_328();
				}
				if (func_517(0))
				{
					iVar0 = func_227(2480, -1, 0);
					MISC::CLEAR_BIT(&iVar0, 0);
					func_328();
				}
				if (func_517(func_516(func_298(PLAYER::PLAYER_ID()))))
				{
					iVar0 = func_227(2480, -1, 0);
					MISC::CLEAR_BIT(&iVar0, func_516(func_298(PLAYER::PLAYER_ID())));
					func_328();
				}
				if (func_327())
				{
					func_328();
				}
				if (func_298(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 7);
					if (func_326(PLAYER::PLAYER_ID()))
					{
						func_325();
					}
					func_322(func_324(func_298(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 7);
		func_320();
	}
}

void func_320()
{
	if (func_321())
	{
		MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 17);
	}
}

bool func_321()
{
	return MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 17);
}

void func_322(int iParam0)
{
	int iVar0;

	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_323() /*10930*/].f_6174.f_4111[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_323()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

int func_324(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 67;
		case 236:
			return 67;
		case 133:
			return 69;
		default:
			break;
	}
	return 68;
}

void func_325()
{
	if (!func_321())
	{
		Global_2537071.f_6577 = NETWORK::_0xBA7F0B77D80A4EB7();
		MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 17);
	}
}

bool func_326(int iParam0)
{
	if (func_298(iParam0) == 236 || func_298(iParam0) == 150)
	{
		return true;
	}
	return false;
}

bool func_327()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return false;
	}
	return true;
}

void func_328()
{
	if (func_327())
	{
		Global_2439138.f_1156.f_16 = 1;
	}
}

void func_329(int iParam0, int iParam1, bool bParam2)
{
	if (func_336())
	{
		if (iParam1 == 1)
		{
			if (Global_2537071.f_4395 == -1)
			{
				Global_2537071.f_4395 = Global_262145.f_26393;
			}
			func_20(&(Global_2537071.f_4393), 0, 0);
			if (bParam2)
			{
				if (Global_2537071.f_4398 == -1)
				{
					Global_2537071.f_4398 = Global_262145.f_26394;
				}
				func_20(&(Global_2537071.f_4396), 0, 0);
			}
			else
			{
				Global_1312418 = 0;
				Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_8 = 0;
				func_335(1);
			}
		}
		else
		{
			Global_1312418 = 0;
			Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_8 = 0;
			func_335(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_334()) && !func_330(PLAYER::PLAYER_ID()))
		{
			Global_968396 = 0;
		}
		UNK_0x6EC9FBED3024FDF5(0, -1, -1, iParam0);
	}
}

bool func_330(bool bParam0)
{
	if (func_331(bParam0, 1, 0))
	{
		if (Global_1590535[bParam0 /*876*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_331(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_332(bParam0))
		{
			return true;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[bParam0 /*876*/] == -1)
	{
		return false;
	}
	return true;
}

bool func_332(bool bParam0)
{
	return func_333(bParam0);
}

bool func_333(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_13.f_1, 0);
}

bool func_334()
{
	return Global_2450632.f_740;
}

void func_335(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_336())
		{
			if (func_13(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
			{
				Global_1312418.f_2 = 0;
				if (bParam0)
				{
					NETWORK::_0x838DA0936A24ED4D(0, 0);
				}
			}
		}
		else
		{
			if (func_13(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
				{
					NETWORK::_0x838DA0936A24ED4D(1, 0);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

bool func_336()
{
	return Global_1312418;
}

bool func_337(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2513889;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_FREEMODE_01") || iVar1 == joaat("MP_F_FREEMODE_01"))
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

float func_338()
{
	return Global_262145.f_11259;
}

float func_339()
{
	return Global_262145.f_11258;
}

int func_340(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_11270;
		case 2:
			return Global_262145.f_11271;
		case 3:
			return Global_262145.f_11272;
		case 4:
			return Global_262145.f_11273;
		default:
			break;
	}
	return Global_262145.f_11273;
}

float func_341()
{
	return Global_262145.f_11018;
}

int func_342(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_11260;
		case 2:
			return Global_262145.f_11261;
		case 3:
			return Global_262145.f_11262;
		case 4:
			return Global_262145.f_11263;
		case 5:
			return Global_262145.f_11264;
		case 6:
			return Global_262145.f_11265;
		case 7:
			return Global_262145.f_11266;
		case 8:
			return Global_262145.f_11267;
		case 9:
		case 10:
		case 11:
		case 12:
			return Global_262145.f_11268;
		default:
			break;
	}
	return Global_262145.f_11269;
}

float func_343()
{
	return Global_262145.f_11017;
}

void func_344(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (!MISC::IS_BIT_SET(Local_802.f_3[func_17(iParam5)], func_16(iParam5)))
	{
		if (!MISC::IS_BIT_SET(uLocal_350[func_17(iParam5)], func_16(iParam5)))
		{
			if (func_34())
			{
				fVar0 = 6f;
				fVar1 = 6f;
				fVar2 = 4f;
			}
			else
			{
				fVar0 = 3f;
				fVar1 = 2.5f;
				fVar2 = 2.8f;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vParam0 + Vector(fVar2, 0f, 0f), fVar1, fVar1, fVar0, false, true, 0))
			{
				if (func_345())
				{
					bLocal_349 = NETWORK::IS_TIME_EQUAL_TO(NETWORK::_0xBA7F0B77D80A4EB7(), Local_802.f_9);
					if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_305() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()))
					{
						func_304(bLocal_349, iParam5, func_257(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
						Local_800 = -1;
						Local_800.f_1 = -1;
					}
					else
					{
						Local_800 = iParam5;
						Local_800.f_1 = bLocal_349;
					}
					MISC::SET_BIT(&(uLocal_350[func_17(iParam5)]), func_16(iParam5));
				}
			}
		}
		else if (func_1(&uLocal_368, 250, 0))
		{
			if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_305() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()))
			{
				func_304(bLocal_349, iParam5, func_257(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
				Local_800.f_1 = -1;
				Local_800 = -1;
			}
			else
			{
				Local_800 = iParam5;
				Local_800.f_1 = bLocal_349;
			}
			func_37(&uLocal_368);
		}
	}
}

bool func_345()
{
	if (!func_13(PLAYER::PLAYER_ID(), 1, 1))
	{
		return false;
	}
	if (func_519(PLAYER::PLAYER_ID()))
	{
		if (((func_336() && !func_348()) || func_347(PLAYER::PLAYER_ID(), 21)) || func_347(PLAYER::PLAYER_ID(), 25))
		{
			func_485(0);
		}
		else
		{
			func_485(7);
		}
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (func_346(PLAYER::PLAYER_PED_ID(), 0) != -1)
		{
			return false;
		}
	}
	if (func_94(PLAYER::PLAYER_ID(), 0))
	{
		return false;
	}
	if (!func_34())
	{
		if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			func_485(1);
			return false;
		}
	}
	return true;
}

int func_346(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

bool func_347(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_208, iParam1);
}

bool func_348()
{
	return Global_1312418.f_1;
}

void func_349(int* iParam0, vector3 vParam1, var uParam4, var uParam5, int iParam6)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;

	vVar0 = { vParam1 };
	HUD::GET_HUD_COLOUR(12, &iVar3, &iVar4, &iVar5, &uVar6);
	if (!MISC::IS_BIT_SET(uLocal_350[func_17(iParam6)], func_16(iParam6)) && !MISC::IS_BIT_SET(Local_802.f_3[func_17(iParam6)], func_16(iParam6)))
	{
		if (!HUD::DOES_BLIP_EXIST(*iParam0))
		{
			if (!func_417(vVar0, 0f, 0f, 0f, 0) && !func_417(vVar0, 0f, 0f, -2000f, 0))
			{
				*iParam0 = HUD::ADD_BLIP_FOR_COORD(vVar0);
				HUD::SET_BLIP_SPRITE(*iParam0, 431);
				HUD::SET_BLIP_PRIORITY(*iParam0, 9);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "CPC_BLIP");
				func_356(*iParam0, 25, 1152319488 /* Float: 1400f */, 1137180672 /* Float: 400f */);
				func_354(iParam0, 12);
				HUD::SHOW_HEIGHT_ON_BLIP(*iParam0, true);
			}
		}
		else if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::SET_BLIP_ALPHA(*iParam0, 255);
		}
		else
		{
			func_356(*iParam0, 25, 1152319488 /* Float: 1400f */, 1137180672 /* Float: 400f */);
		}
		if (bLocal_216[iParam6])
		{
			if (!MISC::IS_BIT_SET(iLocal_360[func_17(iParam6)], func_16(iParam6)))
			{
				iVar7 = 54;
				if (func_34())
				{
					iParam0->f_1 = GRAPHICS::CREATE_CHECKPOINT(iVar7, vVar0 + Vector(4f, 0f, 0f), vVar0, 10f, iVar3, iVar4, iVar5, iParam0->f_2, 0);
					GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iParam0->f_1, 7.5f, 7.5f, 100f);
				}
				else
				{
					iParam0->f_1 = GRAPHICS::CREATE_CHECKPOINT(iVar7, vVar0 + Vector(2.8f, 0f, 0f), vVar0, 5f, iVar3, iVar4, iVar5, iParam0->f_2, 0);
					GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iParam0->f_1, 5f, 5f, 100f);
				}
				MISC::SET_BIT(&(iLocal_360[func_17(iParam6)]), func_16(iParam6));
			}
			else
			{
				func_353(&(iParam0->f_1), &(iParam0->f_2));
			}
			func_352(&vParam1);
		}
		else if (MISC::IS_BIT_SET(iLocal_360[func_17(iParam6)], func_16(iParam6)))
		{
			if (func_351(&(iParam0->f_1), &(iParam0->f_2)))
			{
				GRAPHICS::DELETE_CHECKPOINT(iParam0->f_1);
				MISC::CLEAR_BIT(&(iLocal_360[func_17(iParam6)]), func_16(iParam6));
			}
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_360[func_17(iParam6)], func_16(iParam6)))
	{
		func_350(&(iParam0->f_1), &(iParam0->f_2), iParam0, iParam6);
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_350(var uParam0, var uParam1, int* iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (*uParam0 != 0)
	{
		*uParam1 = (*uParam1 - 25);
		if (*uParam1 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(*uParam0, iVar0, iVar1, iVar2, *uParam1);
			GRAPHICS::_SET_CHECKPOINT_ICON_RGBA(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(*iParam2))
			{
				HUD::REMOVE_BLIP(iParam2);
			}
			GRAPHICS::DELETE_CHECKPOINT(*uParam0);
			*uParam0 = 0;
			MISC::CLEAR_BIT(&(iLocal_360[func_17(iParam3)]), func_16(iParam3));
		}
	}
}

bool func_351(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	*uParam1 = (*uParam1 - 10);
	if (*uParam1 > 0)
	{
		HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		GRAPHICS::_SET_CHECKPOINT_ICON_RGBA(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		return false;
	}
	else
	{
		return true;
	}
	return true;
}

void func_352(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;

	iVar0 = 239;
	iVar1 = 250;
	iVar2 = 187;
	fVar3 = 5f;
	fVar5 = 64f;
	if (func_34())
	{
		fVar4 = 40f;
	}
	else
	{
		fVar4 = 15f;
	}
	if (!func_131(*uParam0))
	{
		*uParam0 = { *uParam0 + Vector(1.7f, 1.7f, 1.7f) };
		GRAPHICS::_DRAW_LIGHT_WITH_RANGE_AND_SHADOW(*uParam0, iVar0, iVar1, iVar2, fVar4, fVar3, fVar5);
	}
}

int func_353(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (*uParam1 < 175)
	{
		*uParam1 += 10;
		HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		GRAPHICS::_SET_CHECKPOINT_ICON_RGBA(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_354(int* iParam0, int iParam1)
{
	int iVar0;

	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_355(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_355(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case 1:
			return 4;
		case 0:
			return 4;
		case 6:
			return 59;
		case 18:
			return 2;
		case 13:
			return 5;
		case 116:
			return 38;
		case 28:
			return 6;
		case 29:
			return 7;
		case 30:
			return 8;
		case 31:
			return 9;
		case 32:
			return 10;
		case 33:
			return 11;
		case 34:
			return 12;
		case 35:
			return 13;
		case 36:
			return 14;
		case 37:
			return 15;
		case 38:
			return 16;
		case 39:
			return 17;
		case 40:
			return 18;
		case 41:
			return 19;
		case 42:
			return 20;
		case 43:
			return 21;
		case 44:
			return 22;
		case 45:
			return 23;
		case 46:
			return 24;
		case 47:
			return 25;
		case 48:
			return 26;
		case 49:
			return 27;
		case 50:
			return 28;
		case 51:
			return 29;
		case 52:
			return 30;
		case 53:
			return 31;
		case 54:
			return 32;
		case 55:
			return 33;
		case 56:
			return 34;
		case 57:
			return 35;
		case 58:
			return 36;
		case 59:
			return 37;
		case 9:
			return 57;
		case 10:
			return 53;
		case 118:
			return 57;
		case 14:
			return 56;
		case 3:
			return 55;
		case 21:
			return 50;
		case 15:
			return 51;
		case 20:
			return 52;
		case 11:
			return 54;
		case 23:
			return 58;
		case 12:
			return 60;
		case 24:
			return 61;
		case 4:
			return 62;
		default:
			break;
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_356(int iParam0, int iParam1, float fParam2, float fParam3)
{
	HUD::SET_BLIP_ALPHA(iParam0, func_357(iParam0, iParam1, fParam2, fParam3));
}

int func_357(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (!func_308(Global_2439138) && !func_73())
	{
		fVar0 = func_362(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_358();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_358()
{
	if (func_359(Global_2439138, 1))
	{
		return 50;
	}
	return 0;
}

bool func_359(bool bParam0, bool bParam1)
{
	if (func_361() != 0)
	{
		return func_360(bParam0) != 0;
	}
	return func_331(bParam0, bParam1, 0);
}

int func_360(bool bParam0)
{
	if (func_13(bParam0, 0, 1))
	{
		return Global_2425662[bParam0 /*421*/].f_1;
	}
	return 0;
}

int func_361()
{
	return Global_30768;
}

float func_362(int iParam0, float fParam1, float fParam2)
{
	bool bVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;

	bVar0 = Global_2439138;
	vVar2 = { func_416(iParam0) };
	vVar2.f_2 = 0f;
	if (Global_1319111 || func_412())
	{
		if (func_411(bVar0))
		{
			vVar5 = { func_365(bVar0) };
		}
		else if (func_364(bVar0))
		{
			vVar5 = { func_363(bVar0) };
		}
	}
	else
	{
		vVar5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bVar0), false) };
	}
	vVar5.f_2 = 0f;
	fVar1 = SYSTEM::VMAG(vVar5 - vVar2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_363(bool bParam0)
{
	int iVar0;

	if (func_364(bParam0))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	return 0f, 0f, 0f;
}

bool func_364(bool bParam0)
{
	int iVar0;

	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, false, true, 0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

Vector3 func_365(bool bParam0)
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

	if (bParam0 == func_96())
	{
	}
	if (func_410(bParam0))
	{
		iVar0 = func_409(bParam0);
		if (iVar0 != func_96())
		{
			if (!func_408(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2439138.f_661[iVar0 /*3*/][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2439138.f_661[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2425662[func_409(bParam0) /*421*/].f_310.f_9;
				}
			}
			else
			{
				iVar1 = func_404(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1676377.f_488[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_403(bParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2537071.f_305))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2537071.f_305, false);
		}
	}
	else if (func_402(bParam0) && !func_401(bParam0))
	{
		iVar2 = Global_2425662[bParam0 /*421*/].f_310.f_8;
		if (iVar2 != func_96())
		{
			iVar3 = func_404(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1676377.f_488[iVar3 /*3*/];
			}
		}
	}
	else if (func_400(bParam0) && !func_399(bParam0))
	{
		if (func_411(bParam0) && func_398())
		{
			return Global_1676377.f_488[Global_2425662[bParam0 /*421*/].f_310.f_5 /*3*/];
		}
		iVar4 = Global_2425662[bParam0 /*421*/].f_310.f_8;
		if (iVar4 != func_96())
		{
			if (func_397(iVar4))
			{
				iVar5 = func_393(iVar4);
				if (iVar5 != -1)
				{
					return Global_1676377.f_488[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_392(bParam0))
	{
		iVar6 = func_391(bParam0);
		if (iVar6 != func_96())
		{
			if (!func_390(iVar6))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2439138.f_758[iVar6]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2439138.f_758[iVar6], false);
				}
				else
				{
					return Global_2425662[func_391(bParam0) /*421*/].f_310.f_16;
				}
			}
			else
			{
				iVar7 = func_393(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1676377.f_488[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_389(bParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2537071.f_307))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2537071.f_307, false);
		}
	}
	else if (func_388(bParam0) && !func_387(bParam0))
	{
		iVar8 = Global_2425662[bParam0 /*421*/].f_310.f_8;
		if (iVar8 != func_96())
		{
			if (func_386(iVar8))
			{
				iVar9 = func_382(iVar8);
				if (iVar9 != -1)
				{
					return func_381(iVar9);
				}
			}
		}
	}
	else if (func_380(bParam0) && !func_379(bParam0))
	{
		iVar10 = Global_2425662[bParam0 /*421*/].f_310.f_8;
		if (iVar10 != func_96())
		{
			if (func_378(iVar10))
			{
				iVar11 = func_374(iVar10);
				if (iVar11 != -1)
				{
					return Global_1676377.f_488[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_373(bParam0, 0))
	{
		iVar12 = func_372(bParam0);
		if (iVar12 != func_96())
		{
			if (!func_371(iVar12))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2439138.f_791[iVar12]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2439138.f_791[iVar12], false);
				}
				else
				{
					return Global_1628237[func_372(bParam0) /*615*/].f_600;
				}
			}
			else
			{
				iVar13 = func_374(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1676377.f_488[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_370(bParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	if (func_388(bParam0))
	{
		return func_381(Global_2425662[bParam0 /*421*/].f_310.f_5);
	}
	if (func_366(bParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1676377.f_488[Global_2425662[bParam0 /*421*/].f_310.f_5 /*3*/];
}

bool func_366(bool bParam0)
{
	if ((func_369(bParam0) || func_368(bParam0)) || func_367(bParam0))
	{
		return true;
	}
	return false;
}

bool func_367(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_170(Global_2425662[bParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return false;
}

bool func_368(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_170(Global_2425662[bParam0 /*421*/].f_310.f_5) == 16;
			}
		}
	}
	return false;
}

bool func_369(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_170(Global_2425662[bParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return false;
}

bool func_370(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_170(Global_2425662[bParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return false;
}

bool func_371(int iParam0)
{
	if (iParam0 != func_96())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310.f_3, 4);
	}
	return false;
}

bool func_372(bool bParam0)
{
	if (bParam0 == func_96())
	{
		return bParam0;
	}
	return Global_2425662[bParam0 /*421*/].f_310.f_8;
}

bool func_373(bool bParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("TERBYTE"))
			{
				return true;
			}
		}
	}
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_96())
			{
				return func_170(Global_2425662[bParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return false;
}

int func_374(int iParam0)
{
	int iVar0;

	if (iParam0 != func_96())
	{
		iVar0 = func_377(iParam0);
		if (iVar0 != 0)
		{
			return func_375(iVar0);
		}
	}
	return -1;
}

int func_375(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_170(iVar0) == 11)
		{
			if (func_376(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		case 103:
			return 2;
		case 104:
			return 3;
		case 105:
			return 4;
		case 106:
			return 5;
		case 107:
			return 6;
		case 108:
			return 7;
		case 109:
			return 8;
		case 110:
			return 9;
		case 111:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_377(int iParam0)
{
	if (iParam0 != func_96())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_281;
	}
	return 0;
}

bool func_378(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (Global_1590535[iParam0 /*876*/].f_274.f_281 != 0)
		{
			return true;
		}
	}
	return false;
}

bool func_379(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_380(bParam0) && Global_2425662[bParam0 /*421*/].f_310.f_8 == bParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_380(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_170(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

Vector3 func_381(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		case 103:
			return 331.9f, -974.9f, 30f;
		case 104:
			return -146f, -1270f, 28.3088f;
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		case 107:
			return -668f, -2431.5f, 12.9444f;
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		case 109:
			return 366.6f, 237.6f, 104.9f;
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		default:
			break;
	}
	return Global_1676377.f_488[iParam0 /*3*/];
}

int func_382(int iParam0)
{
	int iVar0;

	if (iParam0 != func_96())
	{
		iVar0 = func_385(iParam0);
		if (iVar0 != 0)
		{
			return func_383(iVar0);
		}
	}
	return -1;
}

int func_383(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_170(iVar0) == 11)
		{
			if (func_384(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_384(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		case 103:
			return 2;
		case 104:
			return 3;
		case 105:
			return 4;
		case 106:
			return 5;
		case 107:
			return 6;
		case 108:
			return 7;
		case 109:
			return 8;
		case 110:
			return 9;
		case 111:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_385(int iParam0)
{
	if (iParam0 != func_96())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_322;
	}
	return 0;
}

bool func_386(int iParam0)
{
	if (iParam0 != func_96())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_322 != 0;
	}
	return false;
}

bool func_387(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_388(bParam0) && Global_2425662[bParam0 /*421*/].f_310.f_8 == bParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_388(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_170(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_389(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_170(Global_2425662[bParam0 /*421*/].f_310.f_5) == 10;
			}
		}
	}
	return false;
}

bool func_390(int iParam0)
{
	if (iParam0 != func_96())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310.f_2, 6);
	}
	return false;
}

bool func_391(bool bParam0)
{
	if (bParam0 == func_96())
	{
		return bParam0;
	}
	return Global_2425662[bParam0 /*421*/].f_310.f_8;
}

bool func_392(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_96())
			{
				return func_170(Global_2425662[bParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return false;
}

int func_393(int iParam0)
{
	int iVar0;

	if (iParam0 == func_96())
	{
		return -1;
	}
	iVar0 = func_396(iParam0);
	if (!iVar0 == 0)
	{
		return func_394(iVar0);
	}
	return -1;
}

int func_394(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_170(iVar0) == 9)
		{
			if (func_395(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 3;
		case 92:
			return 4;
		case 93:
			return 5;
		case 94:
			return 6;
		case 95:
			return 7;
		case 96:
			return 8;
		case 97:
			return 9;
	}
	return 0;
}

int func_396(int iParam0)
{
	if (iParam0 == func_96())
	{
		return 0;
	}
	return Global_1590535[iParam0 /*876*/].f_274.f_271;
}

bool func_397(int iParam0)
{
	if (iParam0 != func_96())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_271 != 0;
	}
	return false;
}

bool func_398()
{
	if (MISC::IS_BIT_SET(Global_1676377.f_2, 13) || Global_1676377.f_3015)
	{
		return true;
	}
	return false;
}

bool func_399(bool bParam0)
{
	if (bParam0 == func_96())
	{
		return false;
	}
	if (func_400(bParam0) && Global_2425662[bParam0 /*421*/].f_310.f_8 == bParam0)
	{
		return true;
	}
	return false;
}

bool func_400(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_170(Global_2425662[bParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return false;
}

bool func_401(bool bParam0)
{
	if (bParam0 == func_96())
	{
		return false;
	}
	if (func_402(bParam0) && Global_2425662[bParam0 /*421*/].f_310.f_8 == bParam0)
	{
		return true;
	}
	return false;
}

bool func_402(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_170(Global_2425662[bParam0 /*421*/].f_310.f_5) == 4;
			}
		}
	}
	return false;
}

bool func_403(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_170(Global_2425662[bParam0 /*421*/].f_310.f_5) == 6;
			}
		}
	}
	return false;
}

int func_404(int iParam0)
{
	int iVar0;

	if (iParam0 == func_96())
	{
		return -1;
	}
	iVar0 = func_407(iParam0);
	if (!iVar0 == 0)
	{
		return func_405(iVar0);
	}
	return -1;
}

int func_405(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_406(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_406(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
		case 23:
			return 2;
		case 24:
			return 3;
		case 25:
			return 4;
		case 26:
			return 5;
		case 27:
			return 6;
		case 28:
			return 7;
		case 29:
			return 8;
		case 30:
			return 9;
		case 31:
			return 10;
		case 32:
			return 11;
		case 33:
			return 12;
		case 34:
			return 13;
		case 35:
			return 14;
		case 36:
			return 15;
		case 37:
			return 16;
		case 38:
			return 17;
		case 39:
			return 18;
		case 40:
			return 19;
		case 41:
			return 20;
		case 70:
			return 21;
		case 71:
			return 22;
		case 72:
			return 23;
		case 73:
			return 24;
		case 74:
			return 25;
		case 75:
			return 26;
		case 76:
			return 27;
		case 77:
			return 28;
		case 78:
			return 29;
		case 79:
			return 30;
		case 80:
			return 31;
	}
	return 0;
}

int func_407(int iParam0)
{
	if (iParam0 == func_96())
	{
		return 0;
	}
	return Global_1590535[iParam0 /*876*/].f_274.f_183[5 /*12*/];
}

bool func_408(int iParam0)
{
	if (iParam0 != func_96())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310, 6);
	}
	return false;
}

bool func_409(bool bParam0)
{
	if (bParam0 == func_96())
	{
		return bParam0;
	}
	return Global_2425662[bParam0 /*421*/].f_310.f_8;
}

bool func_410(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_96())
			{
				return func_170(Global_2425662[bParam0 /*421*/].f_310.f_5) == 5;
			}
		}
	}
	return false;
}

bool func_411(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == PLAYER::PLAYER_ID()) && func_13(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

int func_412()
{
	if ((func_415() || func_414()) || func_413(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_413(int iParam0)
{
	if (iParam0 == func_96())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1627020[iParam0 /*38*/].f_29, 20);
}

bool func_414()
{
	return MISC::IS_BIT_SET(Global_1687686, 1);
}

bool func_415()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

Vector3 func_416(int iParam0)
{
	int iVar0;

	switch (HUD::GET_BLIP_INFO_ID_TYPE(iParam0))
	{
		case 1:
		case 2:
		case 3:
			iVar0 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return ENTITY::GET_ENTITY_COORDS(iVar0, false);
			}
			break;
	}
	return HUD::GET_BLIP_COORDS(iParam0);
}

bool func_417(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_418()
{
	if (func_308(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_BIT_SET(iLocal_84, 2))
		{
			MISC::SET_BIT(&iLocal_84, 2);
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_84, 2))
	{
		MISC::CLEAR_BIT(&iLocal_84, 2);
		return true;
	}
	return false;
}

int func_419(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = -1;
	if (func_433() < 10)
	{
		iVar0 = func_432();
		func_420(vParam0, fParam3, iVar0, iParam4);
	}
	return iVar0;
}

void func_420(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	func_421(vParam0, 0f, 0f, 0f, fParam3, 0, iParam4, iParam5);
}

void func_421(vector3 vParam0, vector3 vParam3, int iParam6, int iParam7, var uParam8, bool bParam9)
{
	struct<12> Var0;

	if (func_429(PLAYER::PLAYER_ID()) || bParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_428(&vParam0, &vParam3);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam3 };
		Var0.f_6 = iParam6;
		Var0.f_10 = iParam7;
		if (func_423(Var0))
		{
			Global_2405072.f_45.f_64 = func_360(PLAYER::PLAYER_ID());
			func_422(Var0, uParam8);
		}
	}
}

void func_422(struct<12> Param0, int iParam12)
{
	Global_2405072.f_365[iParam12 /*12*/] = { Param0 };
	Global_2405072.f_365[iParam12 /*12*/].f_9 = 1;
}

bool func_423(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;

	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2405072.f_45[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_424(Global_2405072.f_45[iVar13 /*12*/], &Var0))
			{
				return false;
			}
		}
		iVar13++;
	}
	return true;
}

bool func_424(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if ((uParam12[iVar0 /*12*/])->f_9)
		{
			switch ((uParam12[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_427(vParam0, vParam0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return false;
							}
							break;
						case 1:
							if (func_425(vParam0, vParam0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return false;
							}
							break;
						case 2:
							break;
					}
					break;
				case 1:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_427(vParam0, vParam0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return false;
							}
							break;
						case 1:
							if (func_425(vParam0, vParam0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return false;
							}
							break;
						case 2:
							break;
					}
					break;
				case 2:
					break;
			}
		}
		iVar0++;
	}
	if (SYSTEM::VMAG(vParam0) == 0f)
	{
		return false;
	}
	return true;
}

int func_425(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	fVar6 = (fParam9 * 0.7071068f);
	vVar0 = { vParam6 - Vector(fVar6, fVar6, fVar6) };
	vVar3 = { vParam6 + Vector(fVar6, fVar6, fVar6) };
	return func_426(vParam0, vParam3, vVar0, vVar3);
}

int func_426(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	if (((((vParam0.x >= vParam6.x && vParam0.y >= vParam6.y) && vParam0.z >= vParam6.z) && vParam3.x <= vParam9.x) && vParam3.y <= vParam9.y) && vParam3.z <= vParam9.z)
	{
		return 1;
	}
	return 0;
}

bool func_427(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7)
{
	vector3 vVar0;

	vVar0 = { vParam4 - vParam0 };
	if ((SYSTEM::VMAG(vVar0) + fParam3) < fParam7)
	{
		return true;
	}
	return false;
}

void func_428(var uParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	if (*uParam0 <= *fParam1)
	{
		vVar0.x = *uParam0;
		vVar3.x = *fParam1;
	}
	else
	{
		vVar0.x = *fParam1;
		vVar3.x = *uParam0;
	}
	if (uParam0->f_1 <= fParam1->f_1)
	{
		vVar0.f_1 = uParam0->f_1;
		vVar3.f_1 = fParam1->f_1;
	}
	else
	{
		vVar0.f_1 = fParam1->f_1;
		vVar3.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= fParam1->f_2)
	{
		vVar0.f_2 = uParam0->f_2;
		vVar3.f_2 = fParam1->f_2;
	}
	else
	{
		vVar0.f_2 = fParam1->f_2;
		vVar3.f_2 = uParam0->f_2;
	}
	*uParam0 = { vVar0 };
	*fParam1 = { vVar3 };
}

bool func_429(bool bParam0)
{
	if (((func_359(bParam0, 1) || func_431(bParam0)) || func_106(bParam0, 0)) || func_430(bParam0))
	{
		return true;
	}
	return false;
}

bool func_430(bool bParam0)
{
	if (!func_13(bParam0, 0, 1))
	{
		return false;
	}
	return Global_1590535[bParam0 /*876*/].f_35;
}

bool func_431(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return Global_1628237[bVar0 /*615*/] != -1;
	}
	return false;
}

int func_432()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2405072.f_365[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_433()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405072.f_365[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_434()
{
	if (!func_153())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return;
	}
	func_149();
}

void func_435()
{
	Global_1671757 = 1;
	if (!MISC::IS_BIT_SET(Global_2546092, 0))
	{
		MISC::SET_BIT(&Global_2546092, 0);
		MISC::SET_BIT(&Global_1671758, 0);
	}
	if (!MISC::IS_BIT_SET(Global_2546092, 1))
	{
		MISC::SET_BIT(&Global_2546092, 1);
		MISC::SET_BIT(&Global_1671758, 1);
	}
	if (!MISC::IS_BIT_SET(Global_2546092, 5))
	{
		MISC::SET_BIT(&Global_2546092, 5);
		MISC::SET_BIT(&Global_1671758, 5);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 0, false, false);
	}
}

void func_436()
{
	char* sVar0;

	if (!MISC::IS_BIT_SET(iLocal_84, 5) && !HUD::IS_RADAR_HIDDEN())
	{
		if (Local_802.f_707)
		{
			sVar0 = "CPC_TITLEA";
		}
		else
		{
			sVar0 = "CPC_TITLE";
		}
		func_44(63, sVar0, "CPC_START", func_58(), -1, func_58(), 1, 0);
		HUD::FLASH_MINIMAP_DISPLAY();
		MISC::SET_BIT(&iLocal_84, 5);
	}
}

void func_437(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;

	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2537071.f_4971 = -1;
	bVar0 = (func_106(PLAYER::PLAYER_ID(), 0) && func_102(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_454(func_455(iParam0), 1);
	}
	else
	{
		func_453(iParam0, -1);
		if (func_7(PLAYER::PLAYER_ID()))
		{
			Global_1574650.f_3 = iParam0;
		}
		else
		{
			func_452(iParam0);
		}
		Global_1574650.f_4 = -1;
		if (func_7(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1574650.f_1), 5);
		}
		if (((func_336() && !func_348()) || func_347(PLAYER::PLAYER_ID(), 21)) || func_347(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1574650.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1574650.f_1), 17);
		MISC::SET_BIT(&(Global_1574650.f_1), 20);
		if (func_451(iParam0))
		{
			func_450();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_447(fParam1);
		}
		if (fParam2 != 1f)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
			if (iParam0 == 146)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		}
		if (func_445(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			MISC::SET_BIT(&(Global_1574650.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_443(1);
				if (func_281(0))
				{
					MISC::SET_BIT(&(Global_1574650.f_1), 9);
				}
				if (!bParam6)
				{
					MISC::SET_BIT(&(Global_1574650.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_441(1);
			MISC::SET_BIT(&(Global_1574650.f_1), 12);
		}
		if (bParam5)
		{
			func_440();
			MISC::SET_BIT(&(Global_1574650.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_438(iParam0))
			{
				MISC::SET_BIT(&(Global_1574650.f_1), 21);
			}
		}
	}
	Global_2513109 = 1;
}

bool func_438(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
		case 150:
			return true;
		default:
			break;
	}
	if (func_439())
	{
		return true;
	}
	return false;
}

bool func_439()
{
	switch (func_297())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return true;
		default:
			break;
	}
	return false;
}

void func_440()
{
	MISC::SET_BIT(&(Global_2537071.f_4962), 0);
}

void func_441(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		Global_98796.f_8 = 1;
	}
	else
	{
		Global_98796.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_442(iVar0);
		iVar0++;
	}
}

void func_442(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

void func_443(int iParam0)
{
	if (func_444() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_444()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

bool func_445(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return true;
		case 141:
			if (func_446(PLAYER::PLAYER_ID()))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_446(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[bVar0 /*615*/].f_1, 0);
	}
	return false;
}

void func_447(float fParam0)
{
	float fVar0;

	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_448())
	{
		return;
	}
	fVar0 = (Global_2537071.f_5119 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2537071.f_5119 = fParam0;
	Global_2537071.f_5120 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_448()
{
	switch (func_361())
	{
		case 0:
			return func_449();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_449()
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

void func_450()
{
	Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_200 = 0;
	MISC::CLEAR_BIT(&(Global_2537071.f_4561), 1);
}

bool func_451(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return true;
		default:
			break;
	}
	return false;
}

void func_452(int iParam0)
{
	Global_1628237[PLAYER::PLAYER_ID() /*615*/] = iParam0;
}

void func_453(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_517(0) || func_517(func_516(iVar0)))
		{
			MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 2);
		}
	}
}

void func_454(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_208, iParam0))
		{
			MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_208), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_208, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_208), iParam0);
	}
}

int func_455(int iParam0)
{
	switch (iParam0)
	{
		case 134:
			return 21;
		case 254:
			return 25;
		default:
			break;
	}
	return 0;
}

void func_456()
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	var uVar7;
	vector3 vVar8;
	bool bVar11;
	bool bVar12;
	int iVar13;
	vector3 vVar14;
	float fVar17;

	if (func_13(PLAYER::PLAYER_ID(), 1, 1))
	{
		if ((!func_294() && !func_473(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_472(PLAYER::PLAYER_ID()))
		{
			fVar5 = 2.147484E+09f;
			iVar6 = -1;
			vVar8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			bVar11 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
			bVar12 = func_471();
			iVar4 = 0;
			while (iVar4 < 10)
			{
				iVar13 = Local_802.f_729[iVar4 /*2*/].f_1;
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar13) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iVar13), false))
				{
					if (!bVar12)
					{
						if (bVar11 && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == NETWORK::NET_TO_VEH(iVar13))
						{
							func_319(1);
						}
					}
					if (func_32(iVar4, &vVar0, &uVar3))
					{
						vVar14 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iVar13), true) };
						if (SYSTEM::VDIST(vVar14, vVar0) <= 10f)
						{
							if (func_470(vVar14))
							{
								MISC::SET_BIT(&uVar7, iVar4);
							}
							if (func_468(vVar14, vVar8))
							{
								if (!func_466(vVar0, 100f))
								{
									fVar17 = SYSTEM::VDIST(vVar14, vVar8);
									if (fVar17 < fVar5)
									{
										fVar5 = fVar17;
										iVar6 = iVar4;
									}
								}
							}
						}
					}
				}
				iVar4++;
			}
			Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_7 = uVar7;
			if ((PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) || (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))) || Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 > 0)
			{
				if ((fVar5 < 2.147484E+09f && iVar6 >= 0) && iVar6 < 10)
				{
					if (func_32(iVar6, &vVar0, &uVar3))
					{
						bLocal_767 = true;
						func_465(vVar0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432 /* Float: -1f */);
						func_464(vVar0, 1, 0);
						func_458(10, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				func_457();
			}
		}
		else
		{
			func_457();
		}
	}
}

void func_457()
{
	if (bLocal_767)
	{
		func_161();
		func_159();
		bLocal_767 = false;
	}
}

void func_458(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2439138.f_1894.f_703.f_16 != func_96())
	{
		if (MISC::IS_BIT_SET(Global_2425662[Global_2439138.f_1894.f_703.f_16 /*421*/].f_404, 0) && func_459())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412642 = 0;
	}
	Global_2405072.f_487 = iParam0;
	Global_2405072.f_487.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405072.f_487.f_2 = iParam1;
	Global_2405072.f_487.f_3 = iParam2;
	Global_2405072.f_487.f_4 = iParam3;
	Global_2405072.f_487.f_5 = iParam4;
}

bool func_459()
{
	if ((((((func_239(PLAYER::PLAYER_ID()) == 229 || func_239(PLAYER::PLAYER_ID()) == 191) || func_463()) || func_462()) || func_337(PLAYER::PLAYER_ID())) || Global_2513890.f_226 == 1) || (Global_2405072.f_1745 && func_460(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	return true;
}

int func_460(bool bParam0)
{
	if (func_461(bParam0))
	{
		return 1;
	}
	if (func_100(bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_461(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[bVar0 /*615*/].f_1, 7);
	}
	return false;
}

bool func_462()
{
	return Global_1574405;
}

bool func_463()
{
	if (Global_4456448 == 6)
	{
		return true;
	}
	return false;
}

void func_464(vector3 vParam0, int iParam3, int iParam4)
{
	Global_2405072.f_45.f_49 = { vParam0 };
	Global_2405072.f_45.f_52 = iParam3;
	Global_2405072.f_45.f_53 = iParam4;
}

void func_465(vector3 vParam0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<28> Var0;

	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413899.f_6))
	{
		if (!Global_2413899.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(vParam0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2413899.f_6))
	{
		Global_2413899.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2413899.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = fParam3;
	Var0.f_4 = fParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = fParam6;
	Var0.f_8 = iParam8;
	Var0.f_9 = iParam7;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam9;
	Var0.f_22 = iParam10;
	if (func_429(PLAYER::PLAYER_ID()))
	{
		if (iParam13 || iParam7)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam11;
	Var0.f_26 = iParam12;
	Var0.f_27 = iParam14;
	Global_2413899 = { Var0 };
}

int func_466(vector3 vParam0, float fParam3)
{
	return func_467(vParam0, fParam3, PLAYER::PLAYER_ID(), 0, 0);
}

int func_467(vector3 vParam0, float fParam3, bool bParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam4 == bVar0 || iParam5 == 1)
		{
			bVar1 = bVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_13(bVar1, 0, 1) && func_13(bParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(bParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_13(bVar1, 0, 1) && func_13(bParam4, 0, 1))
				{
					if (Global_2417897.f_261[bVar0])
					{
						if (SYSTEM::VDIST(Global_2417897.f_131[bVar0 /*3*/], vParam0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_31(bVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417897.f_261[bVar0])
				{
					if (SYSTEM::VDIST(Global_2417897.f_131[bVar0 /*3*/], vParam0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_13(bVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_31(bVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool func_468(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;

	if (Local_802.f_8 == 3)
	{
		vVar0 = { func_469(Local_802.f_712) };
		if (SYSTEM::VDIST(vParam3, vVar0) < 3500f)
		{
			if (SYSTEM::VDIST(vParam0, vVar0) > 3500f)
			{
				return false;
			}
		}
	}
	return true;
}

Vector3 func_469(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1710.367f, -464.7253f, 169.8001f;
		case 1:
			return -966.3996f, -973.0624f, 2.8632f;
		case 2:
			return -1347.06f, 4123.072f, 62.2841f;
		case 3:
			return 1941.779f, 3847.167f, 34.3796f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_470(vector3 vParam0)
{
	vector3 vVar0;

	if (Local_802.f_8 == 3)
	{
		vVar0 = { func_469(Local_802.f_712) };
		if (SYSTEM::VDIST(vParam0, vVar0) > 2500f)
		{
			return false;
		}
	}
	return true;
}

int func_471()
{
	if ((((((func_461(PLAYER::PLAYER_ID()) || func_336()) || func_348()) || func_347(PLAYER::PLAYER_ID(), 21)) || func_347(PLAYER::PLAYER_ID(), 25)) || func_7(PLAYER::PLAYER_ID())) || func_6(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_472(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 14))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 11))
	{
		return true;
	}
	return false;
}

bool func_473(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590535[bParam0 /*876*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_26, 0))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (!bParam2)
	{
		if (func_477(bParam0))
		{
			return true;
		}
	}
	if (!bParam3)
	{
		if (func_169(bParam0))
		{
			return true;
		}
	}
	if (!bParam4)
	{
		if (func_476(bParam0))
		{
			return true;
		}
	}
	if (!bParam5)
	{
		if (func_402(bParam0))
		{
			return true;
		}
	}
	if (!bParam6)
	{
		if (func_475(bParam0))
		{
			return true;
		}
	}
	if (!bParam7)
	{
		if (func_400(bParam0))
		{
			return true;
		}
	}
	if (!bParam8)
	{
		if (func_392(bParam0))
		{
			return true;
		}
	}
	if (!bParam9)
	{
		if (func_388(bParam0))
		{
			return true;
		}
	}
	if (!bParam10)
	{
		if (func_380(bParam0))
		{
			return true;
		}
	}
	if (!bParam11)
	{
		if (func_373(bParam0, 0))
		{
			return true;
		}
	}
	if (!bParam12)
	{
		if (func_370(bParam0))
		{
			return true;
		}
	}
	if (!bParam13)
	{
		if (func_369(bParam0))
		{
			return true;
		}
	}
	if (!bParam14)
	{
		if (func_367(bParam0))
		{
			return true;
		}
	}
	if (!bParam15)
	{
		if (func_368(bParam0))
		{
			return true;
		}
	}
	if (!bParam16)
	{
		if (func_474(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_474(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_170(Global_2425662[bParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return false;
}

bool func_475(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_170(Global_2425662[bParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return false;
}

bool func_476(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_170(Global_2425662[bParam0 /*421*/].f_310.f_5) == 1;
			}
		}
	}
	return false;
}

bool func_477(bool bParam0)
{
	if (bParam0 != func_96())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_170(Global_2425662[bParam0 /*421*/].f_310.f_5) == 0;
			}
		}
	}
	return false;
}

void func_478(int iParam0, char* sParam1)
{
	char* sVar0;

	if (func_293(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_236(sParam1))
	{
		sVar0 = sParam1;
	}
	func_141(iParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_479(int iParam0)
{
	char* sVar0;

	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	return "HUD_STARTING";
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			case 1:
				return "AST_CHALL_LS";
			case 2:
				return "AST_CHALL_HS";
			case 3:
				return "AST_CHALL_LST";
			case 4:
				return "AST_CHALL_LW";
			case 5:
				return "AST_CHALL_NC";
			case 6:
				return "AST_CHALL_LP";
			case 7:
				return "AST_CHALL_VS";
			case 8:
				return "AST_CHALL_NM";
			case 9:
				return "AST_CHALL_RD";
			case 10:
				return "AST_CHALL_LF";
			case 11:
				return "AST_CHALL_LFL";
			case 12:
				return "AST_CHALL_LFI";
			case 13:
				return "AST_CHALL_LB";
			case 14:
				return "AST_CHALL_MB";
			case 15:
				return "AST_CHALL_HSH";
			case 16:
				return "AST_CHALL_DB";
			case 17:
				return "AST_CHALL_ML";
			case 18:
				return "AST_CHALL_LSN";
			default:
				break;
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_480(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_481(int iParam0)
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		Global_2537071.f_4961 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!MISC::IS_BIT_SET(Global_2537071.f_4961, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_2537071.f_4961 = 0;
			MISC::SET_BIT(&(Global_2537071.f_4961), 1);
		}
	}
}

bool func_482(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::IS_TIME_EQUAL_TO(NETWORK::_0xBA7F0B77D80A4EB7(), *uParam0);
		}
		else
		{
			return NETWORK::IS_TIME_EQUAL_TO(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
	}
	return NETWORK::IS_TIME_EQUAL_TO(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_483(bool bParam0)
{
	int iVar0;
	vector3 vVar1;

	if (func_34())
	{
		if (func_13(PLAYER::PLAYER_ID(), 1, 1))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((!bParam0 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_802.f_729[iVar0 /*2*/].f_1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_802.f_729[iVar0 /*2*/].f_1), false)) && VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_802.f_729[iVar0 /*2*/].f_1), -1, false))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_775[iVar0]))
					{
						iLocal_775[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_802.f_729[iVar0 /*2*/].f_1));
						HUD::SET_BLIP_PRIORITY(iLocal_775[iVar0], 9);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_775[iVar0], "AMCH_AC");
						HUD::SET_BLIP_SPRITE(iLocal_775[iVar0], func_484(iVar0));
						func_354(&(iLocal_775[iVar0]), 9);
					}
					else
					{
						vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (SYSTEM::VDIST(vVar1, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_802.f_729[iVar0 /*2*/].f_1), true)) <= 150f)
						{
							HUD::SHOW_HEIGHT_ON_BLIP(iLocal_775[iVar0], true);
						}
						else
						{
							HUD::SHOW_HEIGHT_ON_BLIP(iLocal_775[iVar0], false);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_775[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_775[iVar0]));
				}
				iVar0++;
			}
		}
	}
}

int func_484(int iParam0)
{
	switch (Local_802.f_729[iParam0 /*2*/])
	{
		case joaat("MAVERICK"):
			return 64;
		case joaat("MAMMATUS"):
			return 423;
		default:
			break;
	}
	return -1;
}

void func_485(int iParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;

	if (!HUD::IS_RADAR_HIDDEN())
	{
		switch (iParam0)
		{
			case 0:
				if (!MISC::IS_BIT_SET(iLocal_765, iParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_488("CPC_PASSIVE", 30000);
						func_165(1);
						MISC::SET_BIT(&iLocal_765, iParam0);
					}
				}
				break;
			case 1:
				if (!MISC::IS_BIT_SET(iLocal_765, iParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_488("CPC_NOAIR", 30000);
						func_165(1);
						MISC::SET_BIT(&iLocal_765, iParam0);
					}
				}
				break;
			case 2:
				if (!MISC::IS_BIT_SET(iLocal_765, iParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && func_34())
					{
						func_488("AMCH_AIRAV", 30000);
						func_165(1);
						MISC::SET_BIT(&iLocal_765, iParam0);
					}
				}
				break;
			case 3:
				if (!MISC::IS_BIT_SET(iLocal_765, iParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_488("AMCH_BLOW", 30000);
						func_165(1);
						MISC::SET_BIT(&iLocal_765, iParam0);
					}
				}
				break;
			case 4:
				if (!MISC::IS_BIT_SET(iLocal_765, iParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !func_487(63))
					{
						if (Local_802.f_707)
						{
							sVar0 = "CPC_HELPA";
						}
						else
						{
							sVar0 = "CPC_HELP";
						}
						func_488(sVar0, 30000);
						func_165(1);
						MISC::SET_BIT(&iLocal_765, iParam0);
					}
				}
				break;
			case 5:
				if (!MISC::IS_BIT_SET(iLocal_765, iParam0))
				{
					if (((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_487(63)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && MISC::IS_BIT_SET(iLocal_765, 4))
					{
						if (Local_802.f_707)
						{
							sVar1 = "CPC_HELPA2";
						}
						else
						{
							sVar1 = "CPC_HELP2";
						}
						func_488(sVar1, 30000);
						func_165(1);
						MISC::SET_BIT(&iLocal_765, iParam0);
					}
				}
				break;
			case 6:
				if (!MISC::IS_BIT_SET(iLocal_765, iParam0))
				{
					if (((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_487(63)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && MISC::IS_BIT_SET(iLocal_765, 5))
					{
						if (Local_802.f_707)
						{
							sVar2 = "CPC_WARNA";
						}
						else
						{
							sVar2 = "CPC_WARN";
						}
						func_486(sVar2, func_156(), 30000);
						func_165(1);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
						MISC::SET_BIT(&iLocal_765, iParam0);
					}
				}
				break;
			case 7:
				if (!MISC::IS_BIT_SET(iLocal_765, iParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_488("CPC_PASSIV1", 30000);
						func_165(1);
						MISC::SET_BIT(&iLocal_765, iParam0);
					}
				}
				break;
		}
	}
}

void func_486(char* sParam0, char* sParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam2);
}

bool func_487(int iParam0)
{
	return Global_2439138.f_2723[0 /*80*/].f_1 == iParam0;
}

void func_488(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_489(int iParam0)
{
	Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3 = iParam0;
}

void func_490(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 4);
	}
}

bool func_491(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_515(PLAYER::PLAYER_ID(), 29))
	{
		return false;
	}
	if (func_347(PLAYER::PLAYER_ID(), 21))
	{
		return false;
	}
	if (func_347(PLAYER::PLAYER_ID(), 25))
	{
		return false;
	}
	if (NETWORK::NETWORK_END_TUTORIAL_SESSION())
	{
		return false;
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_SET_IN_MP_CUTSCENE())
		{
			return false;
		}
	}
	if (func_330(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_514())
	{
		return false;
	}
	if (bParam2)
	{
		if (func_513(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	if (func_512())
	{
		return false;
	}
	if (bParam0)
	{
		if (func_100(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	else if (func_505(PLAYER::PLAYER_ID()) == 3)
	{
		return false;
	}
	if (func_504(PLAYER::PLAYER_ID()) != func_96() && func_504(PLAYER::PLAYER_ID()) == func_80(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_503(func_189()) && !func_326(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_502())
	{
		return false;
	}
	if (func_294())
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return false;
	}
	if (func_332(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!func_500())
	{
		return false;
	}
	if (func_347(PLAYER::PLAYER_ID(), 0) || func_347(PLAYER::PLAYER_ID(), 3))
	{
		return false;
	}
	if ((func_347(PLAYER::PLAYER_ID(), 12) || func_347(PLAYER::PLAYER_ID(), 14)) || func_347(PLAYER::PLAYER_ID(), 13))
	{
		return false;
	}
	if (func_499(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_415() && !Global_2513487)
		{
			return false;
		}
	}
	if (func_498(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_497())
	{
		return false;
	}
	if (Global_1662006)
	{
		return false;
	}
	if (func_430(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_496())
	{
		return false;
	}
	if (func_494(PLAYER::PLAYER_ID()) && Global_1590184.f_171)
	{
		return false;
	}
	if (func_493())
	{
		return false;
	}
	if (func_337(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (Global_2536130)
	{
		return false;
	}
	if (Global_1694139)
	{
		return false;
	}
	if (!func_461(PLAYER::PLAYER_ID()))
	{
		if (func_492(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	return true;
}

bool func_492(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0 /*13*/].f_12 != 0;
	}
	return false;
}

bool func_493()
{
	return Global_1676377.f_474;
}

int func_494(int iParam0)
{
	if (func_495(Global_1590535[iParam0 /*876*/].f_274.f_28))
	{
		return 1;
	}
	return 0;
}

bool func_495(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
	}
	return false;
}

bool func_496()
{
	if (Global_4254512.f_943 > -1)
	{
		return true;
	}
	return false;
}

bool func_497()
{
	return Global_98796.f_346 > 0;
}

bool func_498(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 11);
}

bool func_499(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_96())
	{
		return false;
	}
	if (MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 0))
	{
		return true;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 1))
		{
			return true;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_500()
{
	if (func_501() == 0)
	{
		return true;
	}
	return false;
}

int func_501()
{
	return Global_1312467.f_18;
}

bool func_502()
{
	return Global_1312877;
}

bool func_503(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return true;
		default:
			break;
	}
	return false;
}

bool func_504(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_11.f_35;
}

int func_505(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = 2;
	bVar1 = ((func_431(bParam0) && !func_7(bParam0)) && !MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 8));
	bVar2 = func_100(bParam0);
	bVar3 = func_336();
	bVar4 = func_506();
	if ((bVar1 && (func_461(bParam0) || func_446(bParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_102(bParam0)) && !func_171(bParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2537071.f_5124.f_216 != iVar0)
	{
		Global_2537071.f_5124.f_216 = iVar0;
	}
	return iVar0;
}

int func_506()
{
	if ((func_101(PLAYER::PLAYER_ID(), 21) || func_101(PLAYER::PLAYER_ID(), 22)) || func_510())
	{
		return 1;
	}
	if (func_508())
	{
		func_507(22);
		return 1;
	}
	return 0;
}

void func_507(int iParam0)
{
	MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_4), iParam0);
}

bool func_508()
{
	if (func_106(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_336() && !func_348()) || func_347(PLAYER::PLAYER_ID(), 21)) || func_347(PLAYER::PLAYER_ID(), 25))
		{
			return true;
		}
		else
		{
			func_509(27);
		}
	}
	return false;
}

void func_509(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_4), iParam0);
}

int func_510()
{
	return func_511(358, -1);
}

int func_511(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_223(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_512()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 5;
}

bool func_513(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_261.f_4 != 0 || Global_2425662[iParam0 /*421*/].f_261.f_5)
	{
		return true;
	}
	return false;
}

bool func_514()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_18, 0);
}

bool func_515(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_11.f_5, iParam1);
}

int func_516(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		case 132:
			return 1;
		case 133:
			return 2;
		case 136:
			return 11;
		case 138:
			return 5;
		case 139:
			return 6;
		case 129:
			return 8;
		case 140:
			return 4;
		case 141:
			return 9;
		case 144:
			return 3;
		case 146:
			return 7;
		case 236:
			return 12;
		case 150:
			return 12;
		default:
			break;
	}
	return Global_262145.f_23634;
}

bool func_517(int iParam0)
{
	int iVar0;

	iVar0 = func_227(2480, -1, 0);
	return MISC::IS_BIT_SET(iVar0, iParam0);
}

void func_518()
{
	if (Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 != 0)
	{
		Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 = 0;
	}
}

bool func_519(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (((func_336() && !func_348()) || func_347(PLAYER::PLAYER_ID(), 21)) || func_347(PLAYER::PLAYER_ID(), 25))
		{
			return true;
		}
		if (func_38(&(Global_1574650.f_13)))
		{
			if (!func_1(&(Global_1574650.f_13), Global_262145.f_14, 0))
			{
				return true;
			}
			func_37(&(Global_1574650.f_13));
		}
	}
	else if (MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 10))
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 9);
}

bool func_520(bool bParam0)
{
	return func_94(bParam0, 0);
}

void func_521()
{
	func_522(&(Local_1552.f_534), &Local_1552, 27, &(Local_1552.f_1), &(Local_1552.f_117), -1, 0, 0);
}

void func_522(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	bool bVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	var uVar42;
	int iVar43;
	bool bVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	char cVar57[16];

	if (func_636(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_634() || iParam2 == 28)
	{
		if (func_589(iParam1, iParam2, uParam3, Global_1574185, 0, func_637(), sParam7))
		{
			func_588(1);
			if ((!func_587() && !func_586()) || MISC::IS_BIT_SET(Global_2537071.f_4588, 1))
			{
				if (func_585())
				{
					func_584();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_583(1);
						Global_1574185 = 0;
						iVar54 = -1;
						if (Global_1574406 != 1)
						{
							func_582(iParam1, 0, 0);
							if (MISC::IS_BIT_SET(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_13(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_94(bVar35, 0))
									{
										if ((func_581(bVar35) || Global_2425662[bVar35 /*421*/].f_236 != -1) || func_580(bVar35))
										{
											bVar44 = bVar35;
											if (func_82(bVar35))
											{
												iVar1[bVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_577(&iVar1, bVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_103(PLAYER::PLAYER_ID(), 0) && func_239(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_576())
							{
								if (func_13(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									bVar35 = func_96();
								}
							}
							else
							{
								bVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_575(bVar35) && func_572(bVar35, iParam2)) && func_13(bVar35, 0, 1))
							{
								bVar44 = bVar35;
								uVar42 = Global_1590535[bVar44 /*876*/].f_211.f_6;
								Var38 = { func_567(bVar35) };
								if (bVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_135(bVar35) };
								iVar37 = func_561(bVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1574185++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_576())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_556(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_555(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_554(bVar35, 0);
								if (bVar34)
								{
									if (func_81(bVar35, 1) && iVar1[bVar44] != -1)
									{
										iVar53 = iVar1[bVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[bVar44 /*2*/].f_1 = iVar53;
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&cVar57, "UW_TM", 16);
									StringIntConCat(&cVar57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_553(iParam5))
								{
									func_552(bVar35, iParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &cVar57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_552(bVar35, iParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &cVar57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								MISC::SET_BIT(&iVar49, bVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							if (func_13(bVar35, 0, 1) && !MISC::IS_BIT_SET(iVar49, bVar35))
							{
								bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								bVar35 = func_96();
							}
							if (func_575(bVar35))
							{
								if (func_13(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar44 = bVar35;
									uVar42 = Global_1590535[bVar44 /*876*/].f_211.f_6;
									Var38 = { func_567(bVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_135(bVar35) };
									iVar37 = func_561(bVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574185++;
									iVar51 = func_554(bVar35, 1);
									if (bVar34)
									{
										if (func_81(bVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[bVar44 /*2*/].f_1 = iVar53;
									func_535(bVar35, PLAYER::GET_PLAYER_NAME(bVar35), iParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_532(uParam3, iParam1, iParam2);
						}
						func_37(&(uParam3->f_21));
						func_531();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_530(uParam3, iParam1);
							func_529(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_530(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_525(uParam3))
						{
							Global_1574406 = 1;
						}
						func_523(uParam3);
						if (Global_1574406 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574406 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_531();
			func_583(0);
			if (MISC::IS_BIT_SET(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (MISC::IS_BIT_SET(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_523(var uParam0)
{
	if (!func_38(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_37(&(uParam0->f_21));
		func_524(0);
	}
}

void func_524(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574406 != 2)
		{
			Global_1574406 = 2;
		}
	}
	else
	{
		switch (Global_1574406)
		{
			case 0:
				Global_1574406 = 1;
				break;
			case 1:
				break;
			case 2:
				break;
		}
	}
}

bool func_525(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;

	iVar16 = 0;
	iVar0 = uParam0->f_37;
	bVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar15 != func_96() && func_13(bVar15, 0, 1))
	{
		Var2 = { func_135(bVar15) };
		iVar1 = func_528(uParam0, uParam0->f_37);
		if (func_527(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_526(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_526(uParam0, iVar0, 1);
					}
					break;
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_526(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_526(uParam0, iVar0, 0);
					}
					break;
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_526(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_526(uParam0, iVar0, 0);
					}
					break;
			}
		}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_526(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_527(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

int func_528(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_529(int* iParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_530(var uParam0, int* iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_531()
{
	if (Global_1574406 != 0)
	{
		Global_1574406 = 0;
	}
}

void func_532(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (bVar2 != func_96())
		{
			if (func_13(bVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_534(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_533(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590535[iVar0 /*876*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_533(int* iParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_534(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		case 1:
			return 49;
		default:
			break;
	}
	return iVar0;
}

void func_535(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, var uParam5, char* sParam6, var uParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;

	if (iParam4 >= func_551() && iParam4 < func_550())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574187)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_549("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_549(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_549("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_549("");
			if (uParam3->f_108 == 6)
			{
				func_549("");
			}
			else
			{
				func_549(&uParam5);
			}
			func_540(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_539(uParam3))
			{
				func_538("DPAD_FRIEND");
			}
			else if (func_537(uParam3))
			{
				func_538("DPAD_FRIEND");
			}
			else if (func_536(uParam3))
			{
				func_538("DPAD_CREW");
			}
			else
			{
				func_538("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_536(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_537(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_538(bool bParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(bParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_539(var uParam0)
{
	if (func_537(uParam0) && func_536(uParam0))
	{
		return true;
	}
	return false;
}

void func_540(var uParam0, bool bParam1)
{
	if (func_548(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_544(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && bParam1 > -1) && bParam1 < 32) && MISC::IS_BIT_SET(Global_2425662[bParam1 /*421*/].f_413, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_541())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

bool func_541()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_542() || func_86())
		{
			return true;
		}
	}
	return false;
}

int func_542()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_86();
	}
	return func_543(Global_4456448.f_194990);
}

int func_543(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_544(bool bParam0)
{
	if ((func_13(bParam0, 0, 1) && func_545()) && func_183(bParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_545()
{
	if (func_431(PLAYER::PLAYER_ID()) || func_547())
	{
		if (!func_546(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	return true;
}

bool func_546(bool bParam0)
{
	if (func_298(bParam0) == 236 || func_298(bParam0) == 150)
	{
		return func_461(bParam0);
	}
	return false;
}

bool func_547()
{
	switch (func_239(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return true;
		default:
			break;
	}
	return false;
}

bool func_548(bool bParam0)
{
	if (func_541())
	{
		if (func_13(bParam0, 0, 1))
		{
			return func_82(bParam0);
		}
	}
	if ((func_13(bParam0, 0, 1) && func_545()) && func_185(bParam0, 0))
	{
		return true;
	}
	return false;
}

void func_549(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_550()
{
	int iVar0;

	if (Global_1574187)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_551()
{
	int iVar0;

	iVar0 = 0;
	if (Global_1574187)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_552(bool bParam0, int* iParam1, var uParam2, int iParam3, var uParam4, char* sParam5, var uParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, bool bParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;

	if (iParam3 >= func_551() && iParam3 < func_550())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574187)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_549("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(bParam16))
				{
					func_538(bParam16);
				}
				else
				{
					func_549(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_549("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_576())
				{
					func_549("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(bParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(bParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(bParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(bParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(bParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(bParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_538(&(uParam2->f_104));
					}
					else
					{
						func_549("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					func_549("");
				}
				if (uParam2->f_108 == 6)
				{
					func_549("");
				}
				else
				{
					func_549(&uParam4);
				}
				func_540(uParam2, bParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_549("");
					func_549("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_539(uParam2))
				{
					func_538("DPAD_FRIEND");
				}
				else if (func_537(uParam2))
				{
					func_538("DPAD_FRIEND");
				}
				else if (func_536(uParam2))
				{
					func_538("DPAD_CREW");
				}
				else
				{
					func_538("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

bool func_553(int iParam0)
{
	return false;
	switch (iParam0)
	{
		case 11:
		case 12:
			return true;
		default:
			break;
	}
	return false;
}

int func_554(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 116;
	if ((!bParam1 && func_431(bParam0)) && !func_100(bParam0))
	{
		iVar0 = func_58();
	}
	iVar1 = func_79(bParam0);
	if (!iVar1 == -1)
	{
		return func_77(iVar1);
	}
	return iVar0;
}

char* func_555(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_556(int iParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_560(iParam3))
	{
		*fParam1 = (func_557(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_553(iParam3))
	{
		*fParam1 = (func_557(iParam3, iParam2) / 1000f);
		return 1;
	}
	*iParam0 = iParam2;
	return 0;
}

float func_557(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_559(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_558(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_558(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_559(float fParam0)
{
	return (fParam0 / 0.3048f);
}

bool func_560(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return true;
		default:
			break;
	}
	return false;
}

int func_561(bool bParam0)
{
	int iVar0;

	iVar0 = func_564(bParam0);
	if (iVar0 == -1)
	{
		func_562(bParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_562(bool bParam0, bool bParam1)
{
	if (!func_13(bParam0, 0, 1))
	{
		return;
	}
	if (func_564(bParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (bParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_563(bParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = bParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

bool func_563(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == bParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_564(bool bParam0)
{
	int iVar0;

	if (!func_13(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0 /*5*/].f_1 == bParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1389078[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1389078[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_565(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_565(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;

	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1389078[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1389078[iParam0 /*5*/].f_2), 64);
			HUD::_THEFEED_ADD_TXD_REF(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1389078[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32 /*5*/] = { Global_1389078[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_566(&(Global_1389078[iVar32 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_566(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_96();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::_0xBA7F0B77D80A4EB7();
	}
}

struct<4> func_567(bool bParam0)
{
	char cVar0[32];

	if (func_13(bParam0, 0, 1))
	{
		Global_2513218 = { func_135(bParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_527(Global_2513218))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2513218))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_571(&Global_2513218))
		{
			Global_2513148 = { func_569(bParam0) };
			func_568(&Global_2513148, &cVar0);
		}
	}
	return cVar0;
}

void func_568(int* iParam0, char* sParam1)
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(iParam0, 35, sParam1);
}

struct<35> func_569(bool bParam0)
{
	struct<13> Var0;
	struct<35> Var13;

	if (func_570(bParam0))
	{
		return Global_1312909[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_135(bParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

bool func_570(bool bParam0)
{
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return true;
	}
	return false;
}

bool func_571(int* iParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_572(bool bParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_7(bParam0) || func_574(bParam0)) || func_6(bParam0))
		{
			return false;
		}
	}
	if (!func_573(bParam0))
	{
		return false;
	}
	if ((!func_581(bParam0) && Global_2425662[bParam0 /*421*/].f_236 == -1) && !func_580(bParam0))
	{
		return false;
	}
	return true;
}

bool func_573(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_142, 22);
}

bool func_574(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 10) || MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 9));
	}
	return false;
}

bool func_575(bool bParam0)
{
	bool bVar0;

	if (bParam0 == func_96())
	{
		return false;
	}
	if (func_94(bParam0, 0))
	{
		return false;
	}
	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (MISC::IS_BIT_SET(Global_1590535[bVar0 /*876*/].f_142, 2))
		{
			return false;
		}
	}
	return true;
}

bool func_576()
{
	switch (func_239(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return true;
		default:
			break;
	}
	switch (func_298(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return true;
	}
	if (func_100(PLAYER::PLAYER_ID()))
	{
		switch (func_239(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return true;
		}
	}
	if (func_546(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

void func_577(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_13(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_94(bVar1, 0))
			{
				if ((func_581(bVar1) || Global_2425662[bVar1 /*421*/].f_236 != -1) || func_580(bVar1))
				{
					if (func_578(bVar1, bParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_578(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1 != func_96())
	{
		if (!bParam2)
		{
			if (func_579(bParam0, bParam1))
			{
				return false;
			}
		}
		if (Global_1628237[bParam0 /*615*/].f_11 != func_96())
		{
			return bParam1 == Global_1628237[bParam0 /*615*/].f_11;
		}
	}
	return false;
}

bool func_579(bool bParam0, bool bParam1)
{
	if (bParam1 != func_96())
	{
		if (bParam0 != func_96())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 != func_96())
			{
				if (Global_1628237[bParam0 /*615*/].f_11 == bParam0)
				{
					return bParam1 == bParam0;
				}
			}
		}
	}
	return false;
}

bool func_580(bool bParam0)
{
	return Global_1590535[bParam0 /*876*/].f_196 != 0;
}

bool func_581(bool bParam0)
{
	if (func_13(bParam0, 0, 1))
	{
		if (func_13(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(bParam0, PLAYER::PLAYER_ID()) || func_239(bParam0) == 233)
			{
				return true;
			}
		}
	}
	return false;
}

void func_582(int* iParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_583(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377167.f_2 == 0)
		{
			Global_1377167.f_2 = 1;
		}
	}
	else if (Global_1377167.f_2 == 1)
	{
		Global_1377167.f_2 = 0;
	}
}

void func_584()
{
	if (MISC::IS_BIT_SET(Global_2537071.f_4588, 1))
	{
		if (func_172())
		{
			func_188();
		}
	}
}

bool func_585()
{
	if (MISC::IS_BIT_SET(Global_2537071.f_4588, 0) && func_172())
	{
		return true;
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_4588, 1) && func_172())
	{
		return true;
	}
	return false;
}

bool func_586()
{
	if (func_172())
	{
		if (func_46(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_587()
{
	if (func_172())
	{
		if (func_59(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return true;
		}
	}
	return false;
}

void func_588(int iParam0)
{
	if (Global_1377167.f_1 != Global_1377167)
	{
		Global_1377167.f_1 = Global_1377167;
	}
	if (Global_1377167 != iParam0)
	{
		Global_1377167 = iParam0;
	}
}

bool func_589(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;

	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_633(iParam1);
	fVar7 = func_632();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_631())
		{
			if (func_630() > 0 && Global_1574187)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_619())
		{
			func_618(iParam0, uParam2, 1);
			return false;
		}
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_4591, 26))
	{
		func_618(iParam0, uParam2, 1);
		return false;
	}
	if (!func_38(&(uParam2->f_19)))
	{
		if (func_630() == 1)
		{
			func_617(bVar6, iParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_618(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2537071.f_4592), 5);
		}
	}
	if (func_38(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_630() == 0 && !bParam5))
		{
			func_618(iParam0, uParam2, 1);
			return false;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_616();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_616();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_617(bVar6, iParam0, 0))
				{
					func_582(iParam0, 0, 0);
					sVar4 = func_614(iParam1, &(Global_4456448.f_194997), bParam4);
					Var0 = { func_612(iParam1) };
					if (bParam4)
					{
						func_609(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_603(iParam0, func_606(uParam2), func_604(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_597(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar9 = sParam6;
						}
						func_595(iParam0, sVar9, func_596(), -1);
					}
					else if (func_541())
					{
						uParam2->f_34 = Global_1574186;
						func_609(iParam0, sVar4, &Var0, 1, -1, Global_1574186, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_590(iParam1);
						uParam2->f_34 = Global_1574186;
						func_609(iParam0, sVar4, "", 0, iVar8, Global_1574186, 1);
					}
					else
					{
						iVar8 = func_590(iParam1);
						func_609(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574185 = uParam3;
				Global_1574184 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574186)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return true;
			}
		}
	}
	return false;
}

int func_590(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_594())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 1:
			iVar0 = 6;
			break;
		case 3:
			iVar0 = 5;
			break;
		case 26:
			iVar0 = 21;
			break;
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		case 7:
			iVar0 = 10;
			break;
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		case 15:
			iVar0 = 17;
			break;
		case 16:
			iVar0 = 18;
			break;
		case 18:
			if (func_593(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_592(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_591(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_240())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_591(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 4;
}

bool func_592(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

bool func_593(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_594()
{
	return Global_4456448.f_1 == 0;
}

void func_595(int* iParam0, bool bParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_538(bParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(bParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_538("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_596()
{
	switch (func_239(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
		case 160:
			return "BD_SORT_4";
		case 154:
			return "BD_SORT_3";
		case 155:
			return "BD_SORT_3";
	}
	return "";
}

char* func_597(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
		case 1:
			return "GR_DPD_F";
		case 2:
			return "GR_DPD_S";
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
		case 1:
			return "GR_DPD_B";
		case 2:
			return "GR_DPD_C";
		case 3:
			return "GR_DPD_D";
	}
	switch (func_239(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
		case 180:
			return "GB_BIGUNLOAD_T";
		case 182:
			return "DEAL_DEALN";
		case 194:
			return "PI_BIK_13_0";
		case 189:
			return "PI_BIK_4_1";
		case 193:
			return "PI_BIK_13_1";
		case 205:
			return "PI_BIK_13_3";
		case 186:
			return "CELL_BIKER_CK";
		case 207:
			return "DV_SH_TITLE";
		case 208:
			return "BA_SH_TITLE";
		case 209:
			return "SHU_SH_TITLE";
		case 210:
			return "PI_BIK_13_4";
		case 183:
			return "CELL_BIKER_RESC";
		case 199:
			return "CELL_BIKER_SEAR";
		case 201:
			return "CELL_BIKER_STAN";
		case 142:
			return "PIM_MAGM210";
		case 163:
			return "PIM_MAGM608";
		case 160:
			return "PIM_MAGM604";
		case 154:
			return "PIM_MAGM602";
		case 155:
			return "PIM_MAGM603";
		case 148:
			if (func_599())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
		case 151:
			if (func_275(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
		case 152:
			return "PIM_MAGM204";
		case 153:
			if (func_275(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
		case 157:
			return "PIM_MAGM207";
		case 159:
			return "PIM_MAGM206";
		case 162:
			return "PIM_MAGM607";
		case 164:
			return "PIM_MAGM212";
		case 166:
			return "GB_DPAD_HEAD";
		case 167:
			return "GB_DPAD_BUY";
		case 168:
			return "GB_DPAD_SELL";
		case 169:
			return "GB_DPAD_DEF";
		case 170:
			return "GB_DPAD_AIR";
		case 171:
			return "GB_DPAD_CASH";
		case 172:
			return "GB_DPAD_SAL";
		case 173:
			return "GB_DPAD_FRA";
		case 178:
			return "VEX_TITLEa";
		case 188:
			return "VEX_TITLEb";
		case 218:
			return "FRT_MODE";
		case 217:
			return "FRT_TRNS";
		case 214:
			return "MODE_PLW";
		case 215:
			return "MODE_FUL";
		case 216:
			return "MODE_AA";
		case 219:
			return "MODE_VEL";
		case 220:
			return "MODE_RMP";
		case 221:
			return "MODE_STK";
		case 225:
			return "GR_TITLEL";
		case 226:
			return "GRS_TITLEL";
		case 227:
			return "GRD_TITLEL";
		case 195:
			return "GB_STEAL_T";
		case 198:
			return "SC_MENU_TITLE";
		case 190:
			return "GB_DPAD_BSEL";
		case 191:
			return "GB_DPAD_BDEF";
		case 185:
			return "GB_DPAD_GFH";
		case 197:
			return "GB_DPAD_JB";
		case 179:
			return "CELL_JOUST";
		case 200:
			return "CAG_BLIP";
		case 192:
			if (func_598(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
	}
	return "";
}

bool func_598(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return true;
		default:
			break;
	}
	return false;
}

bool func_599()
{
	return (func_602() && func_600(func_601()));
}

bool func_600(bool bParam0)
{
	return func_185(bParam0, 1);
}

int func_601()
{
	return Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_35;
}

bool func_602()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 148;
}

void func_603(int* iParam0, bool bParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_538(bParam1);
		}
		else if (func_298(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(bParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(bParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_538("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_604(var uParam0)
{
	int iVar0;

	iVar0 = func_298(PLAYER::PLAYER_ID());
	if (func_605())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		case 132:
			return "FM_AE_SORT_5";
		case 133:
			switch (func_297())
			{
				case 0:
					return "FM_AE_SORT_2";
				case 1:
					return "FM_AE_SORT_2";
				case 2:
					return "FM_AE_SORT_3";
				case 3:
					return "FM_AE_SORT_2";
				case 4:
					return "FM_AE_SORT_2";
				case 5:
					return "FM_AE_SORT_2";
				case 6:
					return "FM_AE_SORT_2";
				case 7:
					return "FM_AE_SORT_13";
				case 8:
					return "FM_AE_SORT_4";
				case 9:
					return "FM_AE_SORT_2";
				case 10:
					return "FM_AE_SORT_2";
				case 11:
					return "FM_AE_SORT_2";
				case 12:
					return "FM_AE_SORT_2";
				case 13:
					return "FM_AE_SORT_2";
				case 14:
					return "FM_AE_SORT_5";
				case 15:
					return "FM_AE_SORT_9";
				case 16:
					return "FM_AE_SORT_9";
				case 17:
					return "FM_AE_SORT_9";
				case 18:
					return "FM_AE_SORT_9";
				default:
					break;
			}
			break;
		case 136:
			return "";
		case 138:
			return "";
		case 139:
			return "FM_AE_SORT_10";
		case 140:
			return "";
		case 141:
			return "FM_AE_SORT_5";
		case 144:
			return "FM_AE_SORT_1";
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

bool func_605()
{
	return Global_1590408;
}

char* func_606(var uParam0)
{
	int iVar0;

	iVar0 = func_298(PLAYER::PLAYER_ID());
	if (func_605())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		case 132:
			if (func_608() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_608() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
		case 133:
			switch (func_297())
			{
				case 0:
					return "AMCH_0SLC";
				case 1:
					return "AMCH_1SLC";
				case 2:
					return "AMCH_2SLC";
				case 3:
					return "AMCH_3SLC";
				case 4:
					return "AMCH_4SLC";
				case 5:
					return "AMCH_5SLC";
				case 6:
					return "AMCH_6SLC";
				case 7:
					return "AMCH_7SLC";
				case 8:
					return "AMCH_8SLC";
				case 9:
					return "AMCH_12SLC";
				case 10:
					return "AMCH_13SLC";
				case 11:
					return "AMCH_15SLC";
				case 12:
					return "AMCH_16SLC";
				case 13:
					return "AMCH_23SLC";
				case 14:
					return "AMCH_9SLC";
				case 15:
					return "AMCH_19SLC";
				case 16:
					return "AMCH_20SLC";
				case 17:
					return "AMCH_21SLC";
				case 18:
					return "AMCH_22SLC";
				default:
					break;
			}
			break;
		case 136:
			return "PIM_TA10";
		case 138:
			return "PIM_TA4";
		case 139:
			return "PIM_TA5";
		case 140:
			return "PIM_TA3";
		case 141:
			return "PIM_TA8";
		case 144:
			return "PIM_TA2";
		case 129:
			if (func_607() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_607()
{
	return Global_2537071.f_5048;
}

int func_608()
{
	if (func_298(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2537071.f_5043;
	}
	return -1;
}

void func_609(int* iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;

	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_549(bParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(bParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_538(bParam1);
		}
		if (func_631() && bParam6)
		{
			if (func_611())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_538(bParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_610(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_56())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_610(int iParam0)
{
	if (func_593(iParam0) || func_592(iParam0))
	{
		return true;
	}
	return false;
}

bool func_611()
{
	return Global_1574187;
}

struct<4> func_612(int iParam0)
{
	struct<4> Var0;

	StringCopy(&Var0, "", 16);
	if (func_613(PLAYER::PLAYER_ID()) || func_591(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_204, 16);
			break;
	}
	if (func_541() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_204, 16);
	}
	return Var0;
}

bool func_613(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 5;
}

char* func_614(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	if (iParam0 == 20 && (!func_541() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		sVar0 = func_615();
		return sVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1574425 == 1)
		{
			Global_1574425 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
			case 1:
				return "HUD_LBD_TDM";
			case 5:
				return "HUD_LBD_GRCE";
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
			case 7:
				return "HUD_LBD_BRCE";
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
			case 3:
				return "HUD_LBD_HRD";
			case 22:
				return "HUD_LBD_SHOO";
		}
	}
	return sParam1;
}

char* func_615()
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_616()
{
	Global_42351 = 1;
}

bool func_617(bool bParam0, int* iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = UNK_0xB01F55A0FD1CFD49("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = UNK_0xB01F55A0FD1CFD49("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = UNK_0xB01F55A0FD1CFD49("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_618(int* iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574185 = 0;
	func_531();
	Global_1574184 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_38(&(uParam1->f_19)))
		{
			func_37(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2537071.f_4592), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (MISC::IS_BIT_SET(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

bool func_619()
{
	if (func_629())
	{
		return false;
	}
	if (func_512())
	{
		return false;
	}
	if (!func_627())
	{
		return false;
	}
	if (!func_500())
	{
		return false;
	}
	if (func_626(8, -1))
	{
		return false;
	}
	if (func_630() == 2)
	{
		return false;
	}
	if (Global_2537071.f_4543)
	{
		return false;
	}
	if (func_294())
	{
		return false;
	}
	else if (!func_331(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return false;
	}
	if (((func_625(1) || func_623(1)) || Global_22211.f_124) || Global_22211)
	{
		return false;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return false;
	}
	if (func_622() && Global_1695468 == 2)
	{
		return false;
	}
	if (func_92(PLAYER::PLAYER_ID()) && !func_622())
	{
		return false;
	}
	if (Global_1662006)
	{
		return false;
	}
	if (Global_1662011)
	{
		return false;
	}
	if (func_621(0))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 4))
	{
		return false;
	}
	if (Global_1370230)
	{
		return false;
	}
	if ((Global_1688696.f_718.f_5 || Global_1691522.f_718.f_5) || Global_1687724.f_718.f_5)
	{
		return false;
	}
	if ((Global_1696433.f_724.f_5 || Global_1696433.f_744.f_724.f_5) || Global_1696433.f_1497.f_724.f_5)
	{
		return false;
	}
	if (func_620(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if ((Global_1370265 || Global_1370266) || Global_1370267)
	{
		return false;
	}
	return true;
}

bool func_620(int iParam0)
{
	if (iParam0 == func_96())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310.f_4, 6);
}

bool func_621(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_45, iParam0);
}

bool func_622()
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1695469, 0));
}

bool func_623(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_624(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return false;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return false;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return true;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return true;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_624(int iParam0)
{
	int iVar0;

	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_625(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_626(int iParam0, int iParam1)
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

bool func_627()
{
	if (func_628())
	{
		return true;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return false;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return false;
	}
	return true;
}

bool func_628()
{
	return Global_1312440;
}

bool func_629()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_630()
{
	return Global_1377170.f_68;
}

bool func_631()
{
	if (Global_1574186 > 16)
	{
		return true;
	}
	return false;
}

float func_632()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_633(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_634()
{
	if (func_637())
	{
		return true;
	}
	if (func_6(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_605())
	{
		return true;
	}
	if (func_431(PLAYER::PLAYER_ID()))
	{
		switch (func_298(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return true;
			case 140:
				if (!func_635(PLAYER::PLAYER_ID()))
				{
					return true;
				}
				break;
			case 129:
				if (!func_635(PLAYER::PLAYER_ID()))
				{
					return true;
				}
				break;
			case 174:
				if (!func_635(PLAYER::PLAYER_ID()))
				{
					return true;
				}
				break;
			case 175:
				return true;
		}
	}
	return false;
}

bool func_635(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 4);
}

bool func_636(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_431(PLAYER::PLAYER_ID()) && !func_100(PLAYER::PLAYER_ID())) && !func_546(PLAYER::PLAYER_ID()))
		{
			return true;
		}
	}
	if (iParam0 == 27)
	{
		if (func_106(PLAYER::PLAYER_ID(), 0) && func_100(PLAYER::PLAYER_ID()))
		{
			return true;
		}
		if (func_505(PLAYER::PLAYER_ID()) == 3)
		{
			return true;
		}
	}
	return false;
}

bool func_637()
{
	if (func_638(PLAYER::PLAYER_ID()))
	{
		return Global_1319101;
	}
	return false;
}

bool func_638(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_94(bParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(bParam0);
		}
	}
	return false;
}

void func_639()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_348)))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_348));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			func_640(iVar0, 2);
		}
	}
	iLocal_348++;
	if (iLocal_348 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_348 = 0;
	}
}

void func_640(bool bParam0, int iParam1)
{
	bool bVar0;

	if (MISC::IS_BIT_SET(Global_1574650.f_1, 0))
	{
		return;
	}
	if (func_38(&(Global_1574650.f_18)))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Global_1574650.f_2, bParam0))
	{
		if (Global_1574650 < iParam1 && MISC::IS_BIT_SET(Global_1574650.f_1, 1))
		{
			MISC::SET_BIT(&(Global_1574650.f_1), 0);
			return;
		}
		if (Global_1574650 != 0)
		{
			MISC::SET_BIT(&(Global_1574650.f_1), 1);
		}
		Global_1574650 = 0;
		Global_1574650.f_2 = 0;
	}
	MISC::SET_BIT(&(Global_1574650.f_2), bParam0);
	bVar0 = true;
	if (func_7(bParam0))
	{
		bVar0 = false;
	}
	if (func_641(bParam0))
	{
		bVar0 = false;
	}
	if (func_94(bParam0, 0))
	{
		bVar0 = false;
	}
	if (func_6(bParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1574650++;
	}
}

bool func_641(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 10);
}

void func_642(int iParam0, int iParam1)
{
	Local_3443[iParam0 /*5*/] = iParam1;
}

bool func_643()
{
	struct<71> Var0;
	int iVar71;
	int iVar72;

	Var0 = 4;
	Var0.f_5 = 32;
	Var0.f_38 = 32;
	Global_2537071.f_4972 = { Var0 };
	iVar71 = 0;
	while (iVar71 < func_644())
	{
		Global_2537071.f_4972.f_38[iVar71] = -1;
		iVar71++;
	}
	iVar72 = 0;
	while (iVar72 < 32)
	{
		Local_1552.f_534[iVar72 /*42*/].f_1 = func_96();
		iVar72++;
	}
	return true;
}

int func_644()
{
	if (Global_2457997)
	{
		return 32;
	}
	return (32 - Global_2457998);
}

int func_645()
{
	return Local_802;
}

int func_646(int iParam0)
{
	return Local_3443[iParam0 /*5*/];
}

void func_647()
{
	if (MISC::IS_BIT_SET(Global_1574650.f_1, 6))
	{
		func_671();
		MISC::CLEAR_BIT(&(Global_1574650.f_1), 6);
	}
	if (!MISC::IS_BIT_SET(Global_1574650.f_1, 7))
	{
		if (MISC::IS_BIT_SET(Global_1574650.f_1, 4) || MISC::IS_BIT_SET(Global_1574650.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_172()) && func_13(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1574650.f_1), 7);
				func_166("FME_PASINT", 30000);
				func_165(1);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1574650.f_1, 17))
		{
			if (func_336() && !func_348())
			{
				MISC::CLEAR_BIT(&(Global_1574650.f_1), 17);
				MISC::SET_BIT(&(Global_1574650.f_1), 16);
			}
		}
	}
	if (!MISC::IS_BIT_SET(Global_1574650.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2537071.f_795, 2)) && func_13(PLAYER::PLAYER_ID(), 1, 1)) && !Global_73825) && !Global_58693) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_669())
			{
				func_166("AMEV_GA_RP", -1);
				if (func_239(PLAYER::PLAYER_ID()) != 200)
				{
					func_165(1);
				}
				MISC::SET_BIT(&(Global_1574650.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_446(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
		}
	}
	if (MISC::IS_BIT_SET(Global_1574650.f_1, 9))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_172()) && func_13(PLAYER::PLAYER_ID(), 1, 1)) && !func_347(PLAYER::PLAYER_ID(), 21)) && !func_347(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1574650.f_1), 9);
			func_668(0);
			func_166("FME_TBL00", -1);
			func_165(1);
		}
	}
	if (func_431(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_BIT_SET(Global_1574650.f_1, 18))
		{
			if ((func_347(PLAYER::PLAYER_ID(), 21) && MISC::IS_BIT_SET(Global_1574650.f_1, 20)) && !MISC::IS_BIT_SET(Global_1574650.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1574650.f_1), 18);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1574650.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_172()) && func_13(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !Global_2537071.f_5057)
			{
				MISC::CLEAR_BIT(&(Global_1574650.f_1), 18);
				MISC::SET_BIT(&(Global_1574650.f_1), 19);
				func_166("AMTT_RPAS", -1);
				func_165(1);
			}
		}
	}
	if (((((func_431(PLAYER::PLAYER_ID()) && !func_7(PLAYER::PLAYER_ID())) && func_298(PLAYER::PLAYER_ID()) != 146) && !func_6(PLAYER::PLAYER_ID())) && !func_519(PLAYER::PLAYER_ID())) && !func_658())
	{
		if (func_445(func_298(PLAYER::PLAYER_ID())))
		{
			PLAYER::_0xFAC75988A7D078D3(PLAYER::PLAYER_ID());
		}
		if (!MISC::IS_BIT_SET(Global_1574650.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1574650.f_1), 22);
		}
		if (func_461(PLAYER::PLAYER_ID()) || func_439())
		{
			if (!MISC::IS_BIT_SET(Global_1574650.f_1, 10))
			{
				if (func_656(func_298(PLAYER::PLAYER_ID())))
				{
					if (func_281(0) && !Global_2391045)
					{
						MISC::SET_BIT(&(Global_1574650.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_443(1);
						MISC::SET_BIT(&(Global_1574650.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1574650.f_1), 10);
			}
		}
		if (func_446(PLAYER::PLAYER_ID()))
		{
			if (!MISC::IS_BIT_SET(Global_1574650.f_1, 11))
			{
				if (!Global_98796.f_8)
				{
					MISC::SET_BIT(&(Global_1574650.f_1), 12);
					func_441(1);
				}
				if (!func_655())
				{
					MISC::SET_BIT(&(Global_1574650.f_1), 13);
					func_440();
				}
				if (!Global_2391045)
				{
					MISC::SET_BIT(&(Global_1574650.f_1), 14);
					if (func_281(0) && !Global_2391045)
					{
						MISC::SET_BIT(&(Global_1574650.f_1), 9);
					}
					func_443(1);
				}
				MISC::SET_BIT(&(Global_1574650.f_1), 11);
			}
		}
		else
		{
			func_653(0);
		}
	}
	else
	{
		func_653(1);
	}
	func_648();
	if (func_438(func_298(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1574650.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1574650.f_1), 21);
	}
	if (((func_336() && !func_348()) || func_347(PLAYER::PLAYER_ID(), 21)) || func_347(PLAYER::PLAYER_ID(), 25))
	{
		if (!MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 10))
		{
			MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 10);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 10))
	{
		MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 10);
	}
}

void func_648()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_172())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_487(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (MISC::IS_BIT_SET(Global_1574650.f_1, 26))
				{
					MISC::CLEAR_BIT(&(Global_1574650.f_1), 26);
				}
				func_649(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!MISC::IS_BIT_SET(Global_1574650.f_1, 26))
	{
		func_37(&(Global_1574650.f_22));
		MISC::SET_BIT(&(Global_1574650.f_1), 26);
	}
}

void func_649(int iParam0, int iParam1)
{
	if (!func_38(&(Global_1574650.f_22)))
	{
		func_2(&(Global_1574650.f_22), 0, 0);
	}
	else if (func_1(&(Global_1574650.f_22), iParam1, 0))
	{
		if (func_630() > 0)
		{
			func_652(iParam0);
			if (func_163("AMEV_LBD_HELP"))
			{
				HUD::CLEAR_HELP(true);
			}
			func_37(&(Global_1574650.f_22));
		}
	}
	else
	{
		func_651(0);
		func_650();
	}
}

void func_650()
{
	Global_2537071.f_4532 = 0;
}

void func_651(int iParam0)
{
	Global_1377170.f_68 = iParam0;
}

void func_652(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			func_97(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_653(bool bParam0)
{
	if ((MISC::IS_BIT_SET(Global_1574650.f_1, 11) || (MISC::IS_BIT_SET(Global_1574650.f_1, 10) && bParam0)) || (MISC::IS_BIT_SET(Global_1574650.f_1, 22) && bParam0))
	{
		if (MISC::IS_BIT_SET(Global_1574650.f_1, 12))
		{
			MISC::CLEAR_BIT(&(Global_1574650.f_1), 12);
			func_441(0);
		}
		if (MISC::IS_BIT_SET(Global_1574650.f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1574650.f_1), 13);
			func_654();
		}
		if (MISC::IS_BIT_SET(Global_1574650.f_1, 14) && !func_106(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Global_1574650.f_1), 14);
			func_443(0);
		}
		MISC::CLEAR_BIT(&(Global_1574650.f_1), 11);
		MISC::CLEAR_BIT(&(Global_1574650.f_1), 10);
		MISC::CLEAR_BIT(&(Global_1574650.f_1), 22);
	}
}

void func_654()
{
	MISC::CLEAR_BIT(&(Global_2537071.f_4962), 0);
}

bool func_655()
{
	return MISC::IS_BIT_SET(Global_2537071.f_4962, 0);
}

bool func_656(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return true;
		case 131:
		case 146:
			return func_446(PLAYER::PLAYER_ID());
		case 133:
			return (func_439() || func_657(func_297()));
		default:
			break;
	}
	return false;
}

bool func_657(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return true;
		default:
			break;
	}
	return false;
}

bool func_658()
{
	if (((((((((func_667() || func_666()) || func_665()) || func_294()) || (func_664() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_661() && !func_660())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_659() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return true;
	}
	return false;
}

int func_659()
{
	return Global_968397;
}

bool func_660()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 27);
}

bool func_661()
{
	if (func_663() || func_662())
	{
		return Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_98 == 8;
	}
	return false;
}

bool func_662()
{
	return Global_2450632.f_635;
}

bool func_663()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 11);
}

bool func_664()
{
	return MISC::IS_BIT_SET(Global_2450632, 5);
}

bool func_665()
{
	return MISC::IS_BIT_SET(Global_2450632, 2);
}

bool func_666()
{
	return MISC::IS_BIT_SET(Global_2450632, 20);
}

bool func_667()
{
	return Global_2450632.f_598;
}

void func_668(int iParam0)
{
	int iVar0;

	iVar0 = func_227(2534, -1, 0);
	if (iParam0 == 0)
	{
		if (!MISC::IS_BIT_SET(iVar0, 0))
		{
			MISC::SET_BIT(&iVar0, 0);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 1))
		{
			MISC::SET_BIT(&iVar0, 1);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 2))
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(iVar0, 3))
		{
			MISC::SET_BIT(&iVar0, 3);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 4))
		{
			MISC::SET_BIT(&iVar0, 4);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 5))
		{
			MISC::SET_BIT(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!MISC::IS_BIT_SET(iVar0, 6))
		{
			MISC::SET_BIT(&iVar0, 6);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 7))
		{
			MISC::SET_BIT(&iVar0, 7);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 8))
		{
			MISC::SET_BIT(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!MISC::IS_BIT_SET(iVar0, 9))
		{
			MISC::SET_BIT(&iVar0, 9);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 10))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 11))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
	}
	func_218(2534, iVar0, -1, 1, 0);
}

bool func_669()
{
	bool bVar0;

	if (!func_38(&(Global_1574650.f_15)))
	{
		func_2(&(Global_1574650.f_15), 0, 0);
		Global_1574650.f_17 = 0;
	}
	else if (func_1(&(Global_1574650.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1574650.f_17)))
		{
			bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1574650.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
			{
				if (func_13(bVar0, 1, 1) && func_670(bVar0, 6))
				{
					if (SYSTEM::VDIST(func_31(PLAYER::PLAYER_ID()), func_31(bVar0)) < 80f)
					{
						return true;
					}
				}
			}
		}
		Global_1574650.f_17++;
		if (Global_1574650.f_17 >= 32)
		{
			Global_1574650.f_17 = 0;
			func_37(&(Global_1574650.f_15));
		}
	}
	return false;
}

bool func_670(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_361() != 0)
	{
		return false;
	}
	if (!func_222(bParam0))
	{
		return false;
	}
	bVar0 = bParam0;
	if (Global_1590535[bVar0 /*876*/] == iParam1)
	{
		return true;
	}
	return false;
}

void func_671()
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_673();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_BIT(&(Global_1574650.f_1), 8);
	func_672();
}

void func_672()
{
	if (Global_1671757)
	{
		if (MISC::IS_BIT_SET(Global_1671758, 0))
		{
			MISC::CLEAR_BIT(&Global_2546092, 0);
		}
		if (MISC::IS_BIT_SET(Global_1671758, 1))
		{
			MISC::CLEAR_BIT(&Global_2546092, 1);
		}
		if (MISC::IS_BIT_SET(Global_1671758, 5))
		{
			MISC::CLEAR_BIT(&Global_2546092, 5);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 1, false, false);
		}
		Global_1671758 = 0;
	}
	Global_1671757 = 0;
}

void func_673()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2537071.f_5119 < 1f)
		{
			return;
		}
	}
	Global_2537071.f_5120 = -1;
	Global_2537071.f_5119 = 1f;
}

bool func_674()
{
	if (func_675())
	{
		return true;
	}
	return false;
}

bool func_675()
{
	return Global_1574650.f_24;
}

bool func_676()
{
	var uVar0;

	func_680(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return true;
		}
	}
	if (func_679())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_678())
	{
		return true;
	}
	if (func_677(159))
	{
		if (!func_667())
		{
			return true;
		}
	}
	if (func_677(157))
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	if (func_448() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_448()) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_677(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_678()
{
	return Global_2460680;
}

bool func_679()
{
	return Global_2450632.f_593;
}

void func_680(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_681(iVar0);
					break;
				case 589125870:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar4, 4);
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

void func_681(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_13(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_682(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, vVar0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}

bool func_682(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*bParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_683()
{
	SYSTEM::WAIT(0);
}

void func_684()
{
	var uVar0[4];
	int iVar5;
	var uVar6;

	func_174();
	iVar5 = 0;
	while (iVar5 < 10)
	{
		if (MISC::IS_BIT_SET(iLocal_786, iVar5) && !AUDIO::HAS_SOUND_FINISHED(iLocal_787[iVar5]))
		{
			AUDIO::STOP_SOUND(iLocal_787[iVar5]);
			AUDIO::RELEASE_SOUND_ID(iLocal_787[iVar5]);
		}
		iVar5++;
	}
	func_434();
	func_490(0);
	func_688(132, 0, Local_802.f_8 == 6);
	func_454(22, 0);
	Global_2537071.f_5043 = -1;
	uVar0[0] = Local_802.f_3[0];
	uVar0[1] = Local_802.f_3[1];
	uVar0[2] = Local_802.f_3[2];
	uVar0[3] = Local_802.f_3[3];
	func_687(&(uVar0[0]));
	func_687(&(uVar0[1]));
	func_687(&(uVar0[2]));
	func_687(&(uVar0[3]));
	if (func_676())
	{
		Local_3431.f_5 = 5;
	}
	else if (MISC::IS_BIT_SET(Local_802.f_2, 2))
	{
		Local_3431.f_5 = 6;
	}
	else if (Local_3431.f_5 != 1)
	{
		Local_3431.f_5 = 2;
	}
	Local_3431 = Local_802.f_724;
	Local_3431.f_1 = Local_802.f_725;
	Local_3431.f_4 = Local_802.f_726;
	Local_3431.f_3 = Local_802.f_728;
	Local_3431.f_10 = (NETWORK::_0xF12E6CD06C73D69E() - Local_3431.f_9);
	uVar6 = Local_802.f_712;
	if (Local_802.f_707)
	{
		uVar6 = Local_802.f_712 + 4;
	}
	if (!Global_262145.f_11499)
	{
		if (Local_3431.f_6 > 0)
		{
		}
	}
	Local_3431.f_6 = (Local_3431.f_6 + iLocal_365);
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_685(Local_3431, uVar6, Local_3443[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, uVar0[0], uVar0[1], uVar0[2], uVar0[3]);
	}
	func_483(1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_685(struct<12> Param0, var uParam12, int iParam13, int iParam14, var uParam15, var uParam16, var uParam17)
{
	char* sVar0;
	struct<13> Var1;
	struct<14> Var14;
	struct<18> Var28;
	struct<14> Var52;
	struct<13> Var66;
	struct<14> Var79;
	struct<14> Var93;
	struct<16> Var107;
	struct<13> Var123;
	struct<14> Var136;
	struct<14> Var150;
	struct<13> Var164;

	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_76622)
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			STATS::_0xBFAFDB5FAAA5C5AB(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, func_686()))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			STATS::_0xBAA2F0490E146BE8(&Var14);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = uParam15;
			Var28.f_16 = uParam16;
			Var28.f_17 = uParam17;
			STATS::_0x3DE3AA516FB126A4(&Var28);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = SYSTEM::TO_FLOAT(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			STATS::_0x6A60E43998228229(&Var52);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
		{
			STATS::_0x1A7CE7CD3E653485(&Param0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			STATS::_0x419615486BBF1956(&Var66);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			STATS::_0x84DFC579C2FC214C(&Var79);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			STATS::_0x0A9C7F36E5D7B683(&Var93);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = uParam15;
			STATS::_0x164C5FF663790845(&Var107);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			STATS::_0xEDBF6C9B0D2C65C8(&Var123);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				STATS::_0x8C9D11605E59D955(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				STATS::_0x6551B1F7F6CD46EA(&Var150);
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			STATS::_0x2CD90358F67D0AA8(&Var164);
		}
	}
}

char* func_686()
{
	switch (Global_2463024)
	{
		case 0:
			return "freemode";
		default:
			break;
	}
	return "freemode";
}

void func_687(int* iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (MISC::IS_BIT_SET(*iParam0, iVar0))
		{
			MISC::CLEAR_BIT(iParam0, iVar0);
		}
		else
		{
			MISC::SET_BIT(iParam0, iVar0);
		}
		iVar0++;
	}
}

void func_688(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == 0)
	{
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 13);
		}
		if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 14))
		{
			MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 14);
		}
	}
	if (MISC::IS_BIT_SET(Global_1574650.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1574650.f_1), 21);
	}
	func_718();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		bVar0 = func_717(func_298(PLAYER::PLAYER_ID()));
		func_454(func_455(iParam0), 0);
	}
	else
	{
		if ((bParam2 && PLAYER::PLAYER_ID() != -1) && func_716(PLAYER::PLAYER_ID()) >= 12)
		{
			func_715(2546, -1);
			iVar1 = func_227(2546, -1, 0);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_1574676, 0);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_1574676, 1);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_1574676, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_1574676, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_1574676, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_1574676, 5);
			}
		}
		func_714();
		func_713();
		func_712();
		if ((!func_102(PLAYER::PLAYER_ID()) && !func_171(PLAYER::PLAYER_ID())) && !func_462())
		{
			func_696();
		}
		func_695();
		if (!MISC::IS_BIT_SET(Global_1674347.f_3, 0) && !MISC::IS_BIT_SET(Global_1674347.f_3, 1))
		{
			func_671();
		}
		func_694();
		MISC::CLEAR_BIT(&(Global_2537071.f_1746), 2);
		func_173();
		func_158();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
	}
	if (!bParam1 || bVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !func_347(PLAYER::PLAYER_ID(), 21)) && !func_347(PLAYER::PLAYER_ID(), 25)) && !func_106(PLAYER::PLAYER_ID(), 0))
		{
			func_443(0);
			func_441(0);
			if (!bParam1)
			{
				func_693();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_42(26, -1))
		{
			Global_2462854 = -1;
			func_39(26, -1);
		}
	}
	if (!func_689())
	{
		Global_2513109 = 1;
	}
}

bool func_689()
{
	if ((((((!func_610(PLAYER::PLAYER_ID()) && !func_591(PLAYER::PLAYER_ID())) && func_298(PLAYER::PLAYER_ID()) != 146) && !func_692()) && !func_691()) && !func_690(Global_4456448.f_232883)) && !func_84())
	{
		return false;
	}
	return true;
}

bool func_690(int iParam0)
{
	return iParam0 == 57;
}

bool func_691()
{
	if (Global_4456448.f_194990 == Global_262145.f_9596)
	{
		return true;
	}
	return false;
}

bool func_692()
{
	if ((Global_4456448 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_232883 > 0) || MISC::IS_BIT_SET(Global_4456448.f_4, 15)) || MISC::IS_BIT_SET(Global_4456448.f_4, 18)) || MISC::IS_BIT_SET(Global_4456448.f_4, 19)) || MISC::IS_BIT_SET(Global_4456448.f_4, 29)) || MISC::IS_BIT_SET(Global_4456448.f_4, 28)) || MISC::IS_BIT_SET(Global_4456448.f_5, 23)))
	{
		return true;
	}
	return false;
}

void func_693()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (MISC::IS_BIT_SET(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (MISC::IS_BIT_SET(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				MISC::CLEAR_BIT(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_694()
{
	struct<25> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574650 = { Var0 };
}

void func_695()
{
	var uVar0;

	Global_1319101 = uVar0;
}

void func_696()
{
	MISC::_COPY_MEMORY(&(Global_2405072.f_24), &Global_2409327, 2);
	MISC::_COPY_MEMORY(&(Global_2405072.f_26), &Global_2409329, 19);
	func_710();
	func_699(1, 1, 0);
	func_697();
}

void func_697()
{
	func_698(0, 0);
}

void func_698(int iParam0, int iParam1)
{
	Global_2405072.f_22 = iParam0;
	Global_2405072.f_23 = iParam1;
}

void func_699(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::_COPY_MEMORY(&(Global_2405072.f_45), &Global_2409348, 320);
	}
	else
	{
		Global_2405072.f_45 = { Global_2409348 };
		Global_2405072.f_45.f_49 = { Global_2409348.f_49 };
		Global_2405072.f_45.f_52 = Global_2409348.f_52;
		Global_2405072.f_45.f_53 = Global_2409348.f_53;
	}
	if (bParam0)
	{
		func_709();
	}
	if (!bParam2)
	{
		func_701(0, 1, 0, 1060320051 /* Float: 0.7f */, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1088421888 /* Float: 7f */, 1084227584 /* Float: 5f */, 0, 1066192077 /* Float: 1.1f */, 0, 0, 1, 0, 1109393408 /* Float: 40f */);
	}
	func_700(0);
	func_161();
}

void func_700(bool bParam0)
{
	if (bParam0)
	{
		Global_2405072.f_705 = 0;
	}
	else
	{
		Global_2405072.f_705 = 1;
	}
}

void func_701(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_708())
		{
			func_707();
		}
		Global_2405072.f_706.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405072.f_706.f_504 = iParam1;
		Global_2405072.f_706.f_505 = iParam2;
		Global_2405072.f_706.f_506 = iParam10;
		func_705();
		func_458(8, 0, 0, 0, 0);
		Global_2405072.f_706.f_507 = iParam11;
		Global_2405072.f_706.f_512 = iParam3;
		Global_2405072.f_706.f_513 = iParam4;
		Global_2405072.f_706.f_510 = iParam5;
		Global_2405072.f_706.f_511 = iParam6;
		Global_2405072.f_706.f_514 = iParam7;
		Global_2405072.f_706.f_515 = iParam8;
		Global_2405072.f_706.f_516 = iParam9;
		Global_2405072.f_706.f_517 = iParam14;
		Global_2405072.f_706.f_508 = iParam12;
		Global_2405072.f_706.f_509 = iParam13;
		Global_2405072.f_1745 = 1;
	}
	else
	{
		func_702();
	}
}

void func_702()
{
	if (func_708() && !func_704())
	{
		func_707();
	}
	if (func_704())
	{
		func_703();
	}
	else
	{
		func_705();
		func_458(0, 0, 0, 0, 0);
		Global_2405072.f_1745 = 0;
		Global_2405072.f_1744 = 0;
	}
}

void func_703()
{
	MISC::_COPY_MEMORY(&(Global_2405072.f_706), &(Global_2405072.f_1225), 519);
	Global_2405072.f_487 = { Global_2405072.f_493 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_706.f_518)
	{
		Global_2405072.f_1744 = 0;
	}
}

bool func_704()
{
	if ((Global_2405072.f_1744 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_1225.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405072.f_1225.f_518))
	{
		return true;
	}
	return false;
}

void func_705()
{
	if (func_708() && !func_704())
	{
		func_707();
	}
	func_706();
	Global_2405072.f_706 = 0;
}

void func_706()
{
	int iVar0;
	struct<5> Var1;

	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405072.f_706.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_707()
{
	if (func_704())
	{
		if (Global_2405072.f_706.f_518 == Global_2405072.f_1225.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_706.f_518)
	{
		MISC::_COPY_MEMORY(&(Global_2405072.f_1225), &(Global_2405072.f_706), 519);
		Global_2405072.f_493 = { Global_2405072.f_487 };
		Global_2405072.f_1744 = 1;
	}
}

bool func_708()
{
	if ((Global_2405072.f_1745 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_706.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405072.f_706.f_518))
	{
		return true;
	}
	return false;
}

void func_709()
{
	MISC::_COPY_MEMORY(&(Global_2405072.f_365), &Global_2409668, 121);
}

void func_710()
{
	func_711();
	Global_2405072.f_2254 = 0;
}

void func_711()
{
	int iVar0;
	struct<4> Var1;

	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405072.f_2255[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_712()
{
	Global_2537071.f_4962 = 0;
}

void func_713()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1 = 0;
	}
}

void func_714()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1628237[iVar0 /*615*/] = -1;
	}
}

void func_715(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_227(iParam0, func_223(iParam1), 0);
	iVar0++;
	if (!func_226(iParam0))
	{
		func_218(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_219(iParam0, iVar0, iParam1, 1);
	}
}

int func_716(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_211.f_6;
}

int func_717(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		case 146:
			if (func_446(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_718()
{
	if (MISC::IS_BIT_SET(Global_2537071.f_1735, 3) || MISC::IS_BIT_SET(Global_2537071.f_1735, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_1735, 5))
	{
		MISC::CLEAR_BIT(&(Global_2537071.f_1735), 5);
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_1735, 3))
	{
		MISC::CLEAR_BIT(&(Global_2537071.f_1735), 3);
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_1735, 4))
	{
		MISC::CLEAR_BIT(&(Global_2537071.f_1735), 4);
	}
	func_721(0);
	func_720(0);
	func_719(0);
}

void func_719(int iParam0)
{
	if (Global_2537071.f_4520 != iParam0)
	{
		Global_2537071.f_4520 = iParam0;
	}
}

void func_720(bool bParam0)
{
	if (Global_2537071.f_4519 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2537071.f_4519 = bParam0;
	}
}

void func_721(int iParam0)
{
	if (Global_2537071.f_4517 != iParam0)
	{
		Global_2537071.f_4517 = iParam0;
	}
}

bool func_722(struct<21> Param0)
{
	func_730(func_731(Param0), Param0);
	NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(func_729(8));
	func_726(0, -1, 0);
	func_724(132);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_802, 750);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_3443, 161);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_723())
	{
		func_684();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		STATS::_0x6DEE77AFF8C21BD1(&(Local_802.f_724), &(Local_802.f_725));
	}
	Local_3431.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
	Local_3431.f_9 = NETWORK::_0xF12E6CD06C73D69E();
	Local_3431.f_8 = NETWORK::_0xF12E6CD06C73D69E();
	func_454(22, 1);
	return true;
}

bool func_723()
{
	int iVar0;

	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return false;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return true;
		}
		if (func_679())
		{
			return false;
		}
		if (func_677(157))
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

void func_724(int iParam0)
{
	func_694();
	func_725();
	func_712();
	Global_1574650.f_4 = iParam0;
	Global_1574650.f_5 = iParam0;
	func_453(iParam0, -1);
	func_20(&(Global_1574650.f_18), 0, 0);
	Global_2537071.f_4588 = 0;
	Global_2461747[0] = func_96();
	Global_2461747[1] = func_96();
	Global_2461747[2] = func_96();
	Global_2461747[3] = func_96();
	Global_2461747[4] = func_96();
	func_158();
	if (!func_503(func_189()))
	{
		func_188();
	}
	if (func_336() && !func_348())
	{
		MISC::SET_BIT(&(Global_1574650.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1574650.f_1), 17);
	}
}

void func_725()
{
	var uVar0;

	Global_1574675 = uVar0;
}

int func_726(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_728();
			}
			else
			{
				return 0;
			}
		}
		if (!func_727())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_728();
					}
					else
					{
						return 0;
					}
				}
				if (func_679())
				{
					if (!bParam2)
					{
						func_728();
					}
					else
					{
						return 0;
					}
				}
				if (func_677(157))
				{
					if (!bParam2)
					{
						func_728();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_728();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_728();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_728();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_727()
{
	return Global_1312854;
}

void func_728()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_729(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		case 6:
			return 0;
		case 7:
			return 1;
		case 8:
			return 10;
		case 9:
			return 10;
		case 10:
			return 1;
		case 11:
			return 6;
		case 12:
			return 0;
		case 13:
			return 1;
		case 14:
			return 0;
		case 15:
			return 0;
		case 16:
			return 0;
		case 17:
			return 0;
		case 18:
			return 0;
		case 19:
			return 0;
		case 20:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_730(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_728();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_731(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		case 1:
			return 32;
		case 32:
			return 32;
		case 33:
			return 32;
		case 34:
			return 32;
		case 35:
			return 32;
		case 36:
			return 32;
		case 37:
			return 32;
		case 38:
			return 32;
		case 39:
			return 32;
		case 40:
			return 32;
		case 41:
			return 32;
		case 42:
			return 32;
		case 43:
			return 32;
		case 44:
			return 32;
		case 45:
			return 32;
		case 46:
			return 32;
		case 47:
			return 32;
		case 48:
			return 32;
		case 49:
			return 32;
		case 50:
			return 4;
		case 51:
			return 32;
		case 52:
			return 32;
		case 53:
			return 32;
		case 54:
			return 32;
		case 55:
			return 32;
		case 56:
			return 32;
		case 57:
			return 32;
		case 58:
			return 32;
		case 59:
			return 32;
		case 60:
			return 32;
		case 61:
			return 32;
		case 62:
			return 32;
		case 63:
			return 32;
		case 64:
			return 4;
		case 65:
			return 32;
		case 66:
			return 4;
		case 67:
			return 4;
		case 68:
			return 32;
		case 69:
			return 32;
		case 70:
			return 4;
		case 71:
			return 32;
		case 72:
			return 32;
		case 73:
		case 74:
			return 4;
		case 75:
			return 32;
		case 76:
			return 32;
		case 77:
			return 32;
		case 78:
			return 32;
		case 79:
			return 32;
		case 80:
			return 32;
		case 81:
			return 32;
		case 82:
			return 32;
		case 84:
			return 32;
		case 83:
			return 32;
		case 85:
			return 32;
		case 86:
			return 8;
		case 87:
			return 32;
		case 88:
			return 32;
		case 89:
			return 32;
		case 90:
			return 32;
		case 91:
			return 8;
		case 92:
			return 32;
		case 93:
			return 8;
		case 94:
			return 8;
		case 102:
			return 8;
		case 95:
			return 8;
		case 96:
			return 32;
		case 97:
			return 32;
		case 98:
			return 32;
		case 99:
			return 8;
		case 100:
			return 32;
		case 101:
			return 32;
		case 103:
			return 32;
		case 104:
			return 32;
		case 105:
			return 32;
		case 106:
			return 8;
		case 107:
			return 8;
		case 108:
			return 8;
		case 109:
			return 8;
		case 110:
			return 8;
		case 111:
			return 8;
		case 112:
			return 8;
		case 113:
			return 8;
		case 114:
			return 32;
		case 115:
			return 8;
		case 116:
			return 8;
		case 117:
			return 8;
		case 118:
			return 8;
		case 119:
			return 32;
		case 120:
			return 32;
		case 121:
			return 32;
		case 122:
			return 32;
		case 123:
			return 8;
		case 124:
			return 8;
		case 125:
			return 8;
		case 126:
			return 8;
		case 127:
			return 32;
		case 128:
			return 32;
		case 129:
			return 32;
		case 12:
			return 32;
		case 4:
			return 16;
		case 13:
			return 32;
		case 5:
			return 16;
		case 6:
			return 2;
		case 8:
			return 2;
		case 9:
			return 2;
		case 7:
			return 16;
		case 10:
			return 2;
		case 11:
			return 4;
		case 15:
			return 32;
		case 16:
			return 32;
		case 27:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 18:
			return 32;
		case 28:
			return 32;
		case 29:
			return 2;
		case 30:
			return 32;
		case 31:
			return 32;
		case 17:
			return 2;
		case 130:
			return 32;
		case 131:
			return 32;
		case 19:
			return 32;
		case 22:
			return 32;
		case 23:
			return 32;
		case 24:
			return 32;
		case 20:
			return 2;
		case 0:
			return 0;
		case 21:
			return 32;
		case 142:
			return 32;
		case 143:
			return 32;
		case 132:
			return 32;
		case 133:
			return 32;
		case 137:
			return 32;
		case 135:
			return 32;
		case 136:
			return 32;
		case 140:
			return 32;
		case 141:
			return 32;
		case 138:
			return 32;
		case 139:
			return 32;
		case 144:
			return 32;
		case 145:
			return 32;
		case 146:
			return 32;
		case 147:
			return 32;
		case 148:
			return 2;
		case 153:
			return 1;
		case 149:
			return 2;
		case 150:
			return 4;
		case 151:
			return 2;
		case 152:
			return 2;
		case 134:
			return 1;
		case 154:
			return 2;
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		case 176:
			return 1;
		case 161:
			return 4;
		case 164:
			return 4;
		case 165:
			return 1;
		case 166:
			return 1;
		case 172:
			return 1;
		case 168:
			return 2;
		case 173:
			return 1;
		case 169:
			return 1;
		case 167:
			return 2;
		case 170:
			return 8;
		case 171:
			return 8;
		case 174:
			return 1;
		case 162:
			return 16;
		case 163:
			return 32;
		default:
			break;
	}
	return 0;
}

