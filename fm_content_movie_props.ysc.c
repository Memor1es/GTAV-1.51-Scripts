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
	float fLocal_87 = 0f;
	int iLocal_88[5] = { 0, 0, 0, 0, 0 };
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 8;
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
	var uLocal_125 = 8;
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
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
	var uLocal_163 = 0;
	int iLocal_164[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = -1;
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
	int iLocal_214[1] = { 0 };
	int iLocal_216[1] = { 0 };
	struct<191> Local_218 = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 12, 1065353216, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 3, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1128792064, 1128792064, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1128792064, 1128792064, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1128792064, 1128792064, -1082130432, 1, 1443296302, 1, -1, 0, 0, 1, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, -1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1132068864, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1082130432, 1, 0, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 9, 3 } ;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	struct<264> Local_433 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	struct<10> Local_701 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<15> Local_711[7];
	struct<16> Local_817[7];
	struct<76> Local_930 = { 3, 0, 5, -1, 2, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 2, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 2, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 2, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 2, -1, 0, -1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 5;
	var uLocal_1009 = -1;
	var uLocal_1010 = 2;
	var uLocal_1011 = -1;
	var uLocal_1012 = 0;
	var uLocal_1013 = -1;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = -1;
	var uLocal_1021 = 2;
	var uLocal_1022 = -1;
	var uLocal_1023 = 0;
	var uLocal_1024 = -1;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = -1;
	var uLocal_1032 = 2;
	var uLocal_1033 = -1;
	var uLocal_1034 = 0;
	var uLocal_1035 = -1;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = -1;
	var uLocal_1043 = 2;
	var uLocal_1044 = -1;
	var uLocal_1045 = 0;
	var uLocal_1046 = -1;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = -1;
	var uLocal_1054 = 2;
	var uLocal_1055 = -1;
	var uLocal_1056 = 0;
	var uLocal_1057 = -1;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 1;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 5;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 5;
	var uLocal_1085 = -1;
	var uLocal_1086 = 2;
	var uLocal_1087 = -1;
	var uLocal_1088 = 0;
	var uLocal_1089 = -1;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = -1;
	var uLocal_1097 = 2;
	var uLocal_1098 = -1;
	var uLocal_1099 = 0;
	var uLocal_1100 = -1;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = -1;
	var uLocal_1108 = 2;
	var uLocal_1109 = -1;
	var uLocal_1110 = 0;
	var uLocal_1111 = -1;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = -1;
	var uLocal_1119 = 2;
	var uLocal_1120 = -1;
	var uLocal_1121 = 0;
	var uLocal_1122 = -1;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = -1;
	var uLocal_1130 = 2;
	var uLocal_1131 = -1;
	var uLocal_1132 = 0;
	var uLocal_1133 = -1;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 1;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 5;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162[1] = { 0 };
	struct<5> Local_1164 = { 1, 0, 1203982208, 1203982208, 1203982208 } ;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = -1;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177[1] = { 0 };
	struct<2> Local_1179[1];
	int iLocal_1182 = 0;
	struct<4> Local_1183 = { 0, 0, 0, 0 } ;
	var uLocal_1187 = 0;
	int iLocal_1188 = 0;
	struct<6> Local_1189 = { 0, -1, -1, 0, 0, 0 } ;
	int iLocal_1195 = 0;
	struct<11> Local_1196 = { 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1082130432 } ;
	var uLocal_1207 = 1;
	var uLocal_1208 = 0;
	var uLocal_1209[2] = { -1, -1 };
	bool bLocal_1212 = false;
	bool bLocal_1213 = false;
	bool bLocal_1214 = false;
	bool bLocal_1215 = false;
	bool bLocal_1216 = false;
	bool bLocal_1217 = false;
	int iLocal_1218 = 0;
	int iLocal_1219 = 0;
	vector3 vLocal_1220 = { 0f, 0f, 0f };
	bool bLocal_1223 = false;
	bool bLocal_1224 = false;
	int iLocal_1225 = 0;
	int iLocal_1226 = 0;
	int iLocal_1227 = 0;
	int iLocal_1228 = 0;
	var uLocal_1229 = 2;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	int iLocal_1232 = 0;
	int iLocal_1233 = 0;
	int iLocal_1234 = 0;
	int iLocal_1235[2] = { 0, 0 };
	int iLocal_1238 = 0;
	float fLocal_1239 = 0f;
	float fLocal_1240 = 0f;
	float fLocal_1241 = 0f;
	int iLocal_1242 = 0;
	vector3 vLocal_1243 = { 0f, 0f, 0f };
	int iLocal_1246[1] = { 0 };
	int iLocal_1248[1] = { 0 };
	int iLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	int iLocal_1253 = 0;
	char cLocal_1254[128] = "";
	struct<165> Local_1270 = { 0, 0, 1, 0, 1, 0, 0, 1, 2, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, -1, 1, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, -1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, -1, 0, 0, -1, 1, 0, 2, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1 } ;
	var uLocal_1435 = -1000;
	struct<37> Local_1436[32];
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
	fLocal_87 = 0f;
	fLocal_94 = 0f;
	fLocal_95 = 0f;
	fLocal_96 = 0f;
	fLocal_159 = 0.62f;
	fLocal_160 = 0.51f;
	fLocal_161 = 0.55f;
	fLocal_162 = 25f;
	iLocal_1225 = -1;
	iLocal_1226 = -1;
	iLocal_1232 = -1;
	iLocal_1233 = -1;
	iLocal_1234 = -1;
	fLocal_1239 = -1f;
	fLocal_1240 = 99999f;
	fLocal_1241 = 99999f;
	vLocal_1243 = { 5000f, 8500f, 0f };
	StringCopy(&cLocal_1254, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	cLocal_1254 = { cLocal_1254 };
	Local_701 = { Local_701 };
	func_1766(0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bLocal_1212)
		{
			if (!func_1758(ScriptParam_0))
			{
				func_1627(0, 1);
				func_1600();
			}
		}
		else
		{
			func_1600();
		}
	}
	else
	{
		func_1627(0, 1);
		func_1600();
	}
	func_1598(&(Local_1270.f_164));
	func_1540();
	while (true)
	{
		func_1539();
		if (func_1531())
		{
			func_1627(0, 1);
			func_1600();
		}
		if (func_1530())
		{
			func_1627(0, 1);
			func_1600();
		}
		func_1766(1);
		switch (func_1529())
		{
			case 0:
				if (func_1528() == 1)
				{
					if (func_1362())
					{
						func_1361(1);
					}
				}
				else if (func_1528() == 3)
				{
					func_1361(3);
				}
				break;
			case 1:
				func_1319();
				func_696();
				func_695();
				if (func_1528() != 1)
				{
					func_1361(func_1528());
				}
				break;
			case 2:
				func_1319();
				func_695();
				func_540();
				if (func_1528() > 2)
				{
					func_1627(func_534(), 0);
					func_1361(3);
				}
				break;
			case 3:
				func_1600();
				break;
		}
		if (bLocal_1214)
		{
			switch (func_1528())
			{
				case 0:
					if (func_410())
					{
						func_409(1);
					}
					break;
				case 1:
					if (func_408() == 0)
					{
						func_8();
					}
					else
					{
						func_409(2);
					}
					break;
				case 2:
					if (func_2())
					{
						func_409(3);
					}
					break;
				case 3:
					func_1600();
					break;
			}
		}
		func_1();
	}
}

void func_1()
{
	Local_930.f_231++;
	if (Local_930.f_231 >= Local_218.f_28)
	{
		Local_930.f_231 = 0;
	}
}

bool func_2()
{
	if (!func_5())
	{
		return false;
	}
	if (!func_3(0))
	{
		return false;
	}
	return true;
}

bool func_3(int iParam0)
{
	return func_4(&(Local_1270.f_132), iParam0);
}

bool func_4(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

bool func_5()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 18))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_6(int iParam0, int iParam1)
{
	return func_4(&(Local_1270.f_2.f_5[iParam0 /*3*/]), iParam1);
}

int func_7()
{
	return Local_218.f_10;
}

void func_8()
{
	if (Local_433.f_3 != 0)
	{
		Call_Loc(Local_433.f_3);
	}
	func_377();
	func_130();
	func_115();
	func_38();
	func_32();
	func_21();
	func_18();
	func_9();
}

void func_9()
{
	if (func_17() == -1)
	{
		return;
	}
	if (Local_433.f_38 == 0)
	{
		return;
	}
	Call_Loc(Local_433.f_38);
	if (!StackVal)
	{
		return;
	}
	if (!func_3(6) && Local_433.f_38.f_1 != 0)
	{
		Call_Loc(Local_433.f_38.f_1);
		if (StackVal)
		{
			func_16(&(Local_1270.f_151), 0, 0);
			func_14(6);
		}
	}
	if (!func_13(&(Local_1270.f_151)))
	{
		func_12(&(Local_1270.f_151), 0, 0);
	}
	else if (func_13(&(Local_1270.f_151)))
	{
		if (func_11(&(Local_1270.f_151), func_17(), 0))
		{
			func_10(1);
		}
	}
}

void func_10(int iParam0)
{
	if (!bLocal_1214)
	{
		return;
	}
	Local_1270.f_123 = iParam0;
}

bool func_11(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_12(uParam0, bParam2, 0);
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

void func_12(var uParam0, bool bParam1, bool bParam2)
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

bool func_13(int iParam0)
{
	return iParam0->f_1;
}

void func_14(int iParam0)
{
	if (func_15(&(Local_1270.f_132), iParam0))
	{
	}
}

bool func_15(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (!MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2))
	{
		MISC::SET_BIT(uParam0[iVar1], iVar2);
		return true;
	}
	return false;
}

void func_16(var uParam0, bool bParam1, bool bParam2)
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

int func_17()
{
	if (Local_218.f_128 != -1)
	{
		return Local_218.f_128 * 60 * 1000;
	}
	return Local_218.f_128;
}

void func_18()
{
	int iVar0;

	if (func_20() != -1)
	{
		while ((func_20() < iLocal_1227 && iVar0 < Local_711[func_20() /*15*/].f_14) && Local_711[func_20() /*15*/].f_1[iVar0 /*2*/] != -1)
		{
			Call_Loc(Local_711[func_20() /*15*/].f_1[iVar0 /*2*/].f_1);
			if (StackVal)
			{
				Call_Loc(Local_711[func_20() /*15*/].f_13);
				Local_1270.f_131 = func_20();
				func_19(Local_711[func_20() /*15*/].f_1[iVar0 /*2*/]);
				Call_Loc(Local_711[func_20() /*15*/].f_12);
				return;
			}
			iVar0++;
		}
	}
}

void func_19(var uParam0)
{
	if (!bLocal_1214)
	{
		return;
	}
	Local_1270.f_130 = uParam0;
}

int func_20()
{
	return Local_1270.f_130;
}

void func_21()
{
	vector3 vVar0;

	if (Local_433.f_37 == 0)
	{
		return;
	}
	Call_Loc(Local_433.f_37);
	vVar0 = { StackVal, StackVal, StackVal };
	if (func_31(vVar0))
	{
		return;
	}
	if (func_11(&(Local_1270.f_153), func_30(), 0))
	{
		if (!func_29(Local_1270.f_158, vVar0, 1056964608 /* Float: 0.5f */, 0))
		{
			func_23(func_24(1, 1), NETWORK::_0x638A3A81733086DB(), vVar0);
			func_22(&(Local_1270.f_153));
		}
		Local_1270.f_158 = { vVar0 };
	}
}

void func_22(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_23(int iParam0, int iParam1, vector3 vParam2)
{
	struct<4> Var0;

	Var0 = -1370208168;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = { vParam2 };
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iParam0);
	}
}

int func_24(bool bParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_28(bVar2, 0, 0))
		{
			if (bVar2 != PLAYER::PLAYER_ID() || bParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_25(bVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_25(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1312745;
}

bool func_28(bool bParam0, bool bParam1, bool bParam2)
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

bool func_29(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
				{
					return true;
				}
			}
		}
	}
	else if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			return true;
		}
	}
	return false;
}

int func_30()
{
	return 5000;
}

bool func_31(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_32()
{
	if (!func_37())
	{
		return;
	}
	if (!func_3(2))
	{
		if (func_33(&(Local_1270.f_105), &(Local_1270.f_105.f_3)))
		{
			func_14(2);
		}
	}
}

bool func_33(var uParam0, int* iParam1)
{
	int iVar0[1];
	int iVar2;
	int iVar3;
	int iVar4;

	iVar3 = 0;
	while (iVar3 < 1)
	{
		if (func_36(iVar3))
		{
			iVar0[iVar2] = iVar3;
			iVar2++;
		}
		iVar3++;
	}
	if (iVar2 < func_7())
	{
		return false;
	}
	iVar3 = 0;
	while (iVar3 < func_7())
	{
		if (func_35())
		{
			if (iVar3 > 0)
			{
				(*uParam0)[iVar3] = (*uParam0)[(iVar3 - 1)];
			}
			else
			{
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
				(*uParam0)[iVar3] = iVar0[iVar4];
				if (iVar0[iVar4] < 32)
				{
					MISC::SET_BIT(iParam1, iVar0[iVar4]);
				}
				if (iVar3 < (func_7() - 1))
				{
					func_34(&(iVar0[iVar4]), &(iVar0[(iVar2 - 1)]));
					iVar2 = (iVar2 - 1);
				}
			}
			iVar3++;
			return true;
		}
	}
}

void func_34(var uParam0, var uParam1)
{
	var uVar0;

	uVar0 = *uParam0;
	*uParam0 = *uParam1;
	*uParam1 = uVar0;
}

bool func_35()
{
	return false;
}

bool func_36(int iParam0)
{
	return false;
}

bool func_37()
{
	return false;
}

void func_38()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	iVar5 = 0;
	while (iVar5 < Local_218.f_28)
	{
		func_113(iVar5, &bVar2, &bVar3, &iVar0, &iVar4);
		if (bVar2)
		{
			if (Local_433.f_73.f_109 != 0)
			{
				Stack.Push(iVar5);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_433.f_73.f_109);
			}
		}
		if (iVar4 > 2)
		{
			if (iVar4 != 6)
			{
				if (!bVar2)
				{
					func_112(iVar5, 6);
				}
				else if (bVar3)
				{
					func_112(iVar5, 6);
				}
				else if (func_111(iVar5, iVar0))
				{
					func_112(iVar5, 6);
				}
			}
		}
		switch (iVar4)
		{
			case 0:
				if (func_110(iVar5))
				{
					func_112(iVar5, 2);
				}
				break;
			case 1:
				if (!bVar2)
				{
					if (func_109(iVar5))
					{
						func_112(iVar5, 2);
					}
				}
				else
				{
					func_108(&(Local_1270.f_24[iVar5 /*22*/]));
				}
				break;
			case 2:
				if (!bVar1)
				{
					if (func_99(iVar5))
					{
						if (func_57(iVar5))
						{
							func_112(iVar5, 3);
							func_56(iVar5);
							bVar1 = true;
						}
					}
				}
				break;
			case 3:
				if (bVar2)
				{
					if (!bVar3)
					{
						func_53(iVar5);
						func_49(iVar5, iVar0, 1);
						if (func_48(iVar5))
						{
							func_112(iVar5, 4);
						}
					}
				}
				break;
			case 6:
				func_47(iVar5, 16);
				if (!func_46(7))
				{
					func_41(iVar5, 1);
				}
				if (func_40(iVar5))
				{
					func_108(&(Local_1270.f_24[iVar5 /*22*/]));
					func_112(iVar5, 1);
				}
				if (func_408() == 0)
				{
					if (func_39(iVar5, 0))
					{
						func_10(9);
					}
				}
				break;
			case 4:
				if (!func_39(iVar5, 21) && !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iVar0))
				{
					func_112(iVar5, 5);
				}
				break;
			case 5:
				break;
		}
		iVar5++;
	}
	iVar5 = Local_930.f_231;
	func_113(iVar5, &bVar2, &bVar3, &iVar0, &iVar4);
	switch (iVar4)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_49(iVar5, iVar0, 0);
				}
			}
			break;
	}
}

bool func_39(int iParam0, int iParam1)
{
	return func_4(&(Local_218.f_28.f_1[iParam0 /*20*/]), iParam1);
}

bool func_40(int iParam0)
{
	if (func_408() != 0)
	{
		return false;
	}
	if (func_39(iParam0, 18))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_99);
		return StackVal;
	}
	return false;
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != func_45())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_218.f_10)
	{
		if (func_44(iVar0))
		{
			if (iParam0 == func_43(iVar0) && !func_6(iVar0, 4))
			{
				func_42(iVar0, 3);
				func_42(iVar0, 19);
			}
		}
		iVar0++;
	}
}

void func_42(int iParam0, int iParam1)
{
	if (func_15(&(Local_1270.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_43(int iParam0)
{
	return Local_1270.f_2.f_11[iParam0];
}

bool func_44(int iParam0)
{
	return Local_1270.f_2.f_11[iParam0] != -1;
}

int func_45()
{
	return Local_218.f_10.f_5[0 /*12*/].f_11;
}

bool func_46(int iParam0)
{
	return func_4(&(Local_218.f_8), iParam0);
}

void func_47(int iParam0, int iParam1)
{
	if (func_15(&(Local_1270.f_24[iParam0 /*22*/].f_3), iParam1))
	{
	}
}

bool func_48(int iParam0)
{
	if (Local_433.f_73.f_98 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_98);
		return StackVal;
	}
	return false;
}

void func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_52(iParam0) == -1)
	{
		return;
	}
	if (func_51(Local_930[iParam0 /*76*/].f_1[func_52(iParam0) /*11*/]) != iParam2)
	{
		return;
	}
	if (Local_930[iParam0 /*76*/].f_1[func_52(iParam0) /*11*/].f_9 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_930[iParam0 /*76*/].f_1[func_52(iParam0) /*11*/].f_9);
	}
	while ((func_52(iParam0) < Local_930[iParam0 /*76*/] && iVar0 < Local_930[iParam0 /*76*/].f_1[func_52(iParam0) /*11*/].f_10) && Local_930[iParam0 /*76*/].f_1[func_52(iParam0) /*11*/].f_1[iVar0 /*2*/] != -1)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_930[iParam0 /*76*/].f_1[func_52(iParam0) /*11*/].f_1[iVar0 /*2*/].f_1);
		if (StackVal)
		{
			if (Local_930[iParam0 /*76*/].f_1[func_52(iParam0) /*11*/].f_7 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_930[iParam0 /*76*/].f_1[func_52(iParam0) /*11*/].f_7);
			}
			func_50(iParam0, Local_930[iParam0 /*76*/].f_1[func_52(iParam0) /*11*/].f_1[iVar0 /*2*/]);
			if (Local_930[iParam0 /*76*/].f_1[func_52(iParam0) /*11*/].f_6 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_930[iParam0 /*76*/].f_1[func_52(iParam0) /*11*/].f_6);
			}
			return;
		}
		iVar0++;
	}
}

void func_50(int iParam0, var uParam1)
{
	if (!bLocal_1214)
	{
		return;
	}
	Local_1270.f_24[iParam0 /*22*/].f_2 = uParam1;
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_52(int iParam0)
{
	return Local_1270.f_24[iParam0 /*22*/].f_2;
}

void func_53(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_54(iParam0))
	{
		return;
	}
	iVar0 = Local_218.f_28.f_1[iParam0 /*20*/].f_14;
	iVar1 = 0;
	while (iVar1 < Local_930[iParam0 /*76*/].f_73)
	{
		if (Local_930[iParam0 /*76*/].f_67[iVar1] != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_930[iParam0 /*76*/].f_67[iVar1]);
			if (StackVal)
			{
				MISC::SET_BIT(&(Local_1270.f_104), iVar0);
			}
		}
		iVar1++;
	}
}

bool func_54(int iParam0)
{
	return func_55(Local_218.f_28.f_1[iParam0 /*20*/].f_14);
}

bool func_55(int iParam0)
{
	return MISC::IS_BIT_SET(Local_1270.f_104, iParam0);
}

void func_56(int iParam0)
{
}

bool func_57(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	func_98(0, iParam0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_103);
	iVar0 = StackVal;
	if (func_97(iVar0))
	{
		iVar1 = Local_218.f_28.f_1[iParam0 /*20*/].f_8;
		if (iVar1 != -1)
		{
			if (func_96(Local_1270.f_91[iVar1 /*6*/]))
			{
				if (func_95(&(Local_1270.f_24[iParam0 /*22*/]), Local_1270.f_91[iVar1 /*6*/], 26, iVar0, Local_218.f_28.f_1[iParam0 /*20*/].f_9, 1, 1, 1))
				{
					func_75(iParam0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					func_74();
					return true;
				}
			}
		}
		else
		{
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_104);
			vVar2 = { StackVal, StackVal, StackVal };
			if (!func_31(vVar2))
			{
				if (!func_72(iParam0) || func_59(vVar2, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */, 1084227584 /* Float: 5f */, 1, 1, 1, 1123024896 /* Float: 120f */, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Stack.Push(&(Local_1270.f_24[iParam0 /*22*/]));
					Stack.Push(26);
					Stack.Push(iVar0);
					Stack.Push(vVar2);
					Stack.Push(iParam0);
					Call_Loc(Local_433.f_73.f_105);
					if (func_58(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 1, 1, 1))
					{
						func_75(iParam0);
						func_74();
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_58(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return false;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, vParam3, fParam6, bParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(iVar0, bParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return true;
	}
	return false;
}

bool func_59(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
		if (func_65(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return false;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_60(vParam0, fParam6, iParam7, bParam9, bParam10, bParam11, bParam12, bParam16, bParam17))
			{
				return false;
			}
		}
	}
	Global_2405072.f_2++;
	return true;
}

bool func_60(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (bParam4 && !bParam7)
	{
		if (func_28(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				bVar2 = bParam6;
				if (bParam9 > 0f)
				{
					bVar2 = bParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_62(PLAYER::PLAYER_ID()), vParam0, true) <= (bVar2 + bParam3))
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
		if (func_28(bVar1, 1, 1))
		{
			if (!func_25(bVar1, 0) && NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID(), bVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_61(bVar1) || !bParam10) && !Global_2425662[bVar1 /*421*/].f_259)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_62(bVar1), vParam0, true) <= (bVar2 + bParam3))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_62(bVar1), vParam0, true) <= (bVar2 + bParam3))
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

bool func_61(bool bParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2425662[bParam0 /*421*/].f_245)
	{
		return true;
	}
	return false;
}

Vector3 func_62(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if ((func_64() && Global_1590535[bVar0 /*876*/].f_847) && !func_31(Global_1590535[bVar0 /*876*/].f_848))
	{
		return Global_1590535[bVar0 /*876*/].f_848;
	}
	return func_63(bParam0);
}

Vector3 func_63(bool bParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

bool func_64()
{
	return Global_2450632.f_17;
}

bool func_65(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((bParam8 == 1 && PLAYER::PLAYER_ID() != bVar1) || bParam8 == 0)
		{
			if (func_28(bVar1, bParam4, bParam5))
			{
				if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_61(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && bParam9) && bParam6) && func_66(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_63(bVar1), vParam0, true) < fParam3)
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

bool func_66(bool bParam0)
{
	if (func_71(PLAYER::PLAYER_ID(), bParam0))
	{
		return true;
	}
	Global_2513218 = { func_70(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2513218))
	{
		return true;
	}
	if (func_67(PLAYER::PLAYER_ID(), bParam0))
	{
		return true;
	}
	return false;
}

bool func_67(bool bParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = func_69(bParam0);
	if (!bVar0 == func_68())
	{
		if (bVar0 == func_69(bParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_68()
{
	return -1;
}

bool func_69(bool bParam0)
{
	if (bParam0 != func_68())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_68();
}

struct<13> func_70(bool bParam0)
{
	struct<13> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

bool func_71(bool bParam0, bool bParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2513218 = { func_70(bParam0) };
		Global_2513231 = { func_70(bParam1) };
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

bool func_72(int iParam0)
{
	if (func_39(iParam0, 18) && func_73(iParam0, 16))
	{
		return true;
	}
	return false;
}

bool func_73(int iParam0, int iParam1)
{
	return func_4(&(Local_1270.f_24[iParam0 /*22*/].f_3), iParam1);
}

void func_74()
{
	if (Local_1270.f_145 != -1)
	{
		Local_1270.f_155 = { 0f, 0f, 0f };
		Local_1270.f_161 = 0f;
		Local_1270.f_148 = 0;
		Local_1270.f_128 = -1;
		Local_1270.f_145 = -1;
	}
}

void func_75(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = NETWORK::NET_TO_PED(Local_1270.f_24[iParam0 /*22*/]);
	bVar1 = func_39(iParam0, 14);
	func_90(iParam0, iVar0);
	if (bVar1)
	{
		func_88(iParam0, iVar0);
	}
	else
	{
		func_81(iParam0, iVar0);
	}
	if (Local_433.f_73.f_107 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Stack.Push(bVar1);
		Call_Loc(Local_433.f_73.f_107);
	}
	if (func_39(iParam0, 4))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		func_76(iVar0, iParam0, 1, 0, 1, 1);
	}
}

void func_76(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (Local_218.f_28.f_1[iParam1 /*20*/].f_8 != -1)
		{
			if (bParam5)
			{
				vVar0 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, -5f, 0f) };
				vVar3 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(vVar0, vVar3, 25, true, joaat("WEAPON_HEAVYSNIPER"), 0, true, true, -1f);
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(vVar3, vVar0, 25, true, joaat("WEAPON_ASSAULTSHOTGUN"), 0, true, true, -1f);
			}
			if (bParam3)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
		}
		else
		{
			vVar6 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
			func_79(vVar6, &vVar9, &vVar12, 0);
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(vVar9, vVar12, 300, true, joaat("WEAPON_HEAVYSNIPER"), 0, false, false, 80f);
			if (bParam3)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
		}
		if (bParam4)
		{
			func_77(iParam0, -1, 0);
		}
	}
}

void func_77(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			func_78(iVar1, iParam0);
			iVar1++;
		}
	}
	else
	{
		func_78(iVar0, iParam0);
	}
}

void func_78(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 0, 0.727f, 0.625f, "ShotgunLargeMonolithic");
			break;
		case 1:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 0, 0.727f, 0.518f, "ShotgunLargeMonolithic");
			break;
		case 2:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 0, 0.727f, 0.399f, "ShotgunLargeMonolithic");
			break;
		case 3:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 0, 0.806f, 0.399f, "ShotgunLargeMonolithic");
			break;
		case 4:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 1, 0.379f, 0.324f, "ShotgunLargeMonolithic");
			break;
		case 5:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 1, 0.379f, 0.534f, "ShotgunLargeMonolithic");
			break;
		case 6:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 2, 0.628f, 0.277f, "ShotgunLargeMonolithic");
			break;
		case 7:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 2, 0.609f, 0.344f, "ShotgunLargeMonolithic");
			break;
		case 8:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 4, 0.719f, 0.802f, "ShotgunLargeMonolithic");
			break;
		case 9:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 4, 0.775f, 0.68f, "ShotgunLargeMonolithic");
			break;
		case 10:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 4, 0.775f, 0.561f, "ShotgunLargeMonolithic");
			break;
	}
}

void func_79(vector3 vParam0, int iParam3, var uParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;

	fVar0 = 0.1f;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	fVar2 = 0.5f;
	fVar3 = 0.1f;
	fVar4 = 0.4f;
	if (bParam5)
	{
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		fVar2 = (SYSTEM::TO_FLOAT(iVar5) / 10f);
		if (func_80())
		{
			fVar2 = (fVar2 * -1f);
		}
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		fVar3 = (SYSTEM::TO_FLOAT(iVar5) / 15f);
		if (func_80())
		{
			fVar3 = (fVar3 * -1f);
		}
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		fVar4 = (SYSTEM::TO_FLOAT(iVar5) / 10f);
		if (func_80())
		{
			fVar4 = (fVar4 * -1f);
		}
	}
	switch (iVar1)
	{
		case 0:
			*iParam3 = { (vParam0.x + fVar0), (vParam0.y + fVar3), (vParam0.z + fVar4) };
			*uParam4 = { (vParam0.x - fVar2), (vParam0.y - fVar3), (vParam0.z + fVar4) };
			break;
		case 1:
			*iParam3 = { (vParam0.x + fVar0), (vParam0.y + fVar3), (vParam0.z + fVar4) };
			*uParam4 = { (vParam0.x - fVar2), (vParam0.y - fVar3), (vParam0.z + fVar4) };
			break;
		case 2:
			*iParam3 = { (vParam0.x - fVar0), (vParam0.y + fVar3), (vParam0.z + fVar4) };
			*uParam4 = { (vParam0.x + fVar2), (vParam0.y - fVar3), (vParam0.z + fVar4) };
			break;
		case 3:
			*iParam3 = { (vParam0.x - fVar0), (vParam0.y - fVar3), (vParam0.z + fVar4) };
			*uParam4 = { (vParam0.x + fVar2), (vParam0.y + fVar3), (vParam0.z + fVar4) };
			break;
		case 4:
			*iParam3 = { (vParam0.x - fVar0), (vParam0.y - fVar3), (vParam0.z + fVar4) };
			*uParam4 = { (vParam0.x + fVar2), (vParam0.y + fVar3), (vParam0.z + fVar4) };
			break;
		case 5:
			*iParam3 = { (vParam0.x + fVar0), (vParam0.y + fVar3), (vParam0.z + fVar4) };
			*uParam4 = { (vParam0.x - fVar2), (vParam0.y - fVar3), (vParam0.z + fVar4) };
			break;
	}
}

bool func_80()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return true;
	}
	return false;
}

void func_81(int iParam0, int iParam1)
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_KEEP_TASK(iParam1, true);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam1, false);
	if (func_39(iParam0, 11))
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 146, false);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(iParam1, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 146, true);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(iParam1, false);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 43, true);
	PED::SET_PED_COMBAT_MOVEMENT(iParam1, Local_218.f_28.f_1[iParam0 /*20*/].f_15);
	PED::SET_PED_COMBAT_ABILITY(iParam1, func_87());
	PED::SET_PED_ACCURACY(iParam1, func_86(iParam0));
	PED::SET_PED_SHOOT_RATE(iParam1, func_85());
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 24, false);
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_84());
	ENTITY::SET_ENTITY_HEALTH(iParam1, func_84(), 0);
	PED::SET_PED_DIES_WHEN_INJURED(iParam1, true);
	func_82(iParam0, iParam1);
}

void func_82(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = Local_218.f_28.f_1[iParam0 /*20*/].f_14;
	iVar2 = 0;
	while (iVar2 < 1)
	{
		iVar3 = Local_218.f_28.f_62[iVar1 /*4*/].f_1[iVar2];
		if (iVar3 != -1)
		{
			if (func_83(iVar3, 4))
			{
				PED::SET_PED_ANGLED_DEFENSIVE_AREA(iParam1, Local_218.f_164[iVar3 /*9*/].f_2, Local_218.f_164[iVar3 /*9*/].f_5, Local_218.f_164[iVar3 /*9*/].f_8, false, false);
				bVar0 = true;
			}
		}
		iVar2++;
	}
	if (!bVar0 && Local_218.f_28.f_1[iParam0 /*20*/].f_19 != -1f)
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1, false), Local_218.f_28.f_1[iParam0 /*20*/].f_19, false, false);
	}
}

bool func_83(int iParam0, int iParam1)
{
	return func_4(&(Local_218.f_164[iParam0 /*9*/]), iParam1);
}

int func_84()
{
	switch (Local_1270.f_127)
	{
		case 2:
			return 200;
		case 3:
			return 300;
		default:
			break;
	}
	return 200;
}

int func_85()
{
	switch (Local_1270.f_127)
	{
		case 2:
			return 60;
		case 3:
			return 80;
		default:
			break;
	}
	return 60;
}

int func_86(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_106);
	Stack.Push(StackVal == joaat("WEAPON_RPG"));
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_106);
	if (StackVal || StackVal == joaat("WEAPON_RAILGUN"))
	{
		return 2;
	}
	switch (Local_1270.f_127)
	{
		case 2:
			return 10;
		case 3:
			return 25;
		default:
			break;
	}
	return 10;
}

int func_87()
{
	switch (Local_1270.f_127)
	{
		case 2:
			return 1;
		case 3:
			return 2;
		default:
			break;
	}
	return 1;
}

void func_88(int iParam0, int iParam1)
{
	PED::SET_DRIVER_AGGRESSIVENESS(iParam1, 1f);
	PED::SET_DRIVER_RACING_MODIFIER(iParam1, 1f);
	PED::SET_COMBAT_FLOAT(iParam1, 17, 5f);
	PED::SET_PED_KEEP_TASK(iParam1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 2, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 272, true);
	PED::SET_PED_DIES_INSTANTLY_IN_WATER(iParam1, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 42, true);
	PED::SET_COMBAT_FLOAT(iParam1, 27, 0f);
	PED::SET_PED_ACCURACY(iParam1, 5);
	if (func_89(iParam0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 52, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 53, true);
	}
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, 200);
	ENTITY::SET_ENTITY_HEALTH(iParam1, 200, 0);
}

bool func_89(int iParam0)
{
	if (func_39(iParam0, 23))
	{
		return true;
	}
	return false;
}

void func_90(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (Local_218.f_28.f_1[iParam0 /*20*/].f_12 != -1)
	{
		NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_ENT(Local_1270.f_24[iParam0 /*22*/]), true);
	}
	if (!func_94(iParam1))
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 324, true);
	}
	if (func_39(iParam0, 10))
	{
		NETWORK::NETWORK_FADE_OUT_ENTITY(iParam1, true, true);
	}
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_106);
	iVar0 = StackVal;
	if (iVar0 != 0)
	{
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(iParam1, true);
		}
		else
		{
			WEAPON::GIVE_WEAPON_TO_PED(iParam1, iVar0, 9999999, func_92(iParam0), true);
		}
	}
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam1, 1);
	iVar1 = func_91(iParam0);
	if (iVar1 != joaat("COP"))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, iVar1);
	}
}

int func_91(int iParam0)
{
	return Local_218.f_28.f_62[Local_218.f_28.f_1[iParam0 /*20*/].f_14 /*4*/];
}

int func_92(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_1);
	Stack.Push(!MISC::IS_STRING_NULL_OR_EMPTY(StackVal));
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_1);
	if (StackVal && MISC::ARE_STRINGS_EQUAL(StackVal, "CODE_HUMAN_PATROL_2H"))
	{
		return 1;
	}
	if (func_93(iParam0) == 22)
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0)
{
	return Local_930[iParam0 /*76*/].f_1[Local_1270.f_24[iParam0 /*22*/].f_2 /*11*/];
}

bool func_94(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((PED::GET_PED_TYPE(iParam0) == 6 || PED::GET_PED_TYPE(iParam0) == 29) || PED::GET_PED_TYPE(iParam0) == 27)
		{
			return true;
		}
	}
	return false;
}

bool func_95(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return false;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return false;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return true;
	}
	return false;
}

bool func_96(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return false;
}

bool func_97(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_98(int iParam0, int iParam1)
{
	if (Local_1270.f_145 == -1)
	{
		Local_1270.f_128 = iParam0;
		Local_1270.f_145 = iParam1;
	}
}

bool func_99(int iParam0)
{
	if (!func_107(0, iParam0))
	{
		return false;
	}
	if (Local_218.f_28.f_1[iParam0 /*20*/].f_8 != -1)
	{
		if (!func_105(Local_1270.f_91[Local_218.f_28.f_1[iParam0 /*20*/].f_8 /*6*/]))
		{
			return false;
		}
	}
	if (Local_218.f_28.f_1[iParam0 /*20*/].f_12 != -1)
	{
		if (!func_100(Local_218.f_28.f_1[iParam0 /*20*/].f_12) || !func_11(&(Local_1270.f_149), 2000, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_100(int iParam0)
{
	if (iParam0 == 28)
	{
		return func_104(&(Global_1680879.f_54), iParam0);
	}
	if (iParam0 != -1)
	{
		func_101(iParam0);
		return (func_104(&(Global_1680879.f_54), iParam0) && INTERIOR::IS_INTERIOR_READY(Global_1680879[iParam0]));
	}
	return false;
}

void func_101(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (Global_1680879[iVar0] == 0)
	{
		Global_1680879[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_103(iParam0), func_102(iParam0));
	}
}

char* func_102(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		case 0:
			return "hei_heist_police_dlc";
		case 2:
			return "v_genbank";
		case 3:
			return "v_genbank";
		case 4:
			return "v_genbank";
		case 5:
			return "v_genbank";
		case 6:
			return "v_bank4";
		case 7:
			return "v_genbank";
		case 8:
			return "hei_generic_bank_dlc";
		case 9:
			return "v_rockclub";
		case 10:
			return "v_factory1";
		case 11:
			return "v_factory2";
		case 12:
			return "v_factory3";
		case 13:
			return "v_factory4";
		case 14:
			return "v_farmhouse";
		case 15:
			return "gr_gta_milo_bridge";
		case 16:
			return "v_recycle";
		case 17:
			return "v_lab";
		case 18:
			return "v_garagem";
		case 19:
			return "v_studio_lo";
		case 20:
			return "v_apart_midspaz";
		case 21:
			return "v_sheriff";
		case 22:
			return "v_sheriff2";
		case 23:
			return "dt1_03_carpark";
		case 24:
			return "v_carshowroom";
		case 27:
			return "v_faceoffice";
		case 25:
			return "v_abattoir";
		case 26:
			return "V_JEWEL2";
		case 28:
			return "smboat";
		case 29:
			return "vb_33_garage";
		case 30:
			return "v_chopshop";
		case 31:
			return "v_methlab";
		case 32:
			return "v_office_lobby";
		case 33:
			return "v_lab";
		case 34:
			return "v_foundry";
		case 35:
			return "v_refit";
		case 36:
			return "hei_int_mph_carrierhang3";
		case 37:
			return "hei_int_mph_carrierhang2";
		case 38:
			return "hei_int_mph_carrierhang1";
		case 39:
			return "hei_int_mph_carrierupper";
		case 40:
			return "hei_int_mph_carriercontrol1";
		case 41:
			return "hei_int_mph_carriercontrol2";
		case 42:
			return "ch3_01_trlr_int";
		default:
			break;
	}
	return "";
}

Vector3 func_103(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 984.1552f, -95.3662f, 75.9326f;
		case 0:
			return 443.2281f, -984.0744f, 29.6896f;
		case 2:
			return -1216.762f, -333.0008f, 36.8508f;
		case 3:
			return 145.4168f, -1039.277f, 28.4379f;
		case 4:
			return 309.7465f, -277.6442f, 53.2346f;
		case 5:
			return -355.4359f, -48.5326f, 48.1064f;
		case 6:
			return -109.4503f, 6467.768f, 30.4388f;
		case 7:
			return 1179.745f, 2706.985f, 37.1578f;
		case 8:
			return -2962.591f, 478.238f, 14.7669f;
		case 9:
			return -556.5089f, 286.3181f, 81.1763f;
		case 10:
			return -76.6618f, 6222.191f, 32.2412f;
		case 11:
			return -100.7106f, 6205.7f, 30.0499f;
		case 12:
			return -125.6972f, 6172.923f, 30.0499f;
		case 13:
			return -162.4785f, 6155.384f, 30.0499f;
		case 14:
			return 2449.785f, 4983.825f, 45.8106f;
		case 15:
			return -1426.362f, 6754.506f, 11.7821f;
		case 16:
			return -583.2097f, -1599.302f, 26.3052f;
		case 17:
			return 3522.845f, 3707.965f, 19.9918f;
		case 18:
			return 630f, 4750f, -60f;
		case 19:
			return 600f, 4750f, -60f;
		case 20:
			return 575f, 4750f, -60f;
		case 21:
			return 1853.625f, 3687.826f, 33.2671f;
		case 22:
			return -447.5651f, 6013.988f, 30.7164f;
		case 23:
			return -28.1023f, -688.8687f, 34.4437f;
		case 24:
			return -40.2938f, -1097.321f, 25.4223f;
		case 27:
			return -1074.853f, -250.3996f, 36.7388f;
		case 25:
			return 982.233f, -2160.382f, 28.4761f;
		case 26:
			return -630.4205f, -236.7843f, 37.057f;
		case 28:
			return -2032f, -1035f, 5f;
		case 29:
			return -1078.561f, -1678.615f, 3.5752f;
		case 30:
			return 479.88f, -1318.57f, 28.2f;
		case 31:
			return 1392.512f, 3603.185f, 38.5f;
		case 32:
			return 105.4557f, -745.4835f, 44.7548f;
		case 33:
			return 3522.845f, 3707.965f, 19.9918f;
		case 34:
			return 1087.195f, -1988.445f, 28.649f;
		case 35:
			return -583.1606f, -282.3967f, 35.394f;
		case 36:
			return 3053.565f, -4653.67f, 5.0773f;
		case 37:
			return 3058.002f, -4700.8f, 5.0773f;
		case 38:
			return 3080.619f, -4772.69f, 5.0773f;
		case 39:
			return 3088.469f, -4708.33f, 20.567f;
		case 40:
			return 3085.222f, -4690.66f, 26.2522f;
		case 41:
			return 3092.459f, -4711.389f, 26.2657f;
		case 42:
			return 2329.242f, 2571.494f, 45.6772f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_104(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

bool func_105(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_106(NETWORK::NET_TO_VEH(iParam0));
	}
	return false;
}

bool func_106(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return true;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
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

bool func_107(int iParam0, int iParam1)
{
	if (Local_1270.f_128 == -1)
	{
		return true;
	}
	if (Local_1270.f_128 == iParam0)
	{
		if (Local_1270.f_145 == iParam1)
		{
			return true;
		}
	}
	return false;
}

void func_108(int iParam0)
{
	int iVar0;

	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

bool func_109(int iParam0)
{
	return true;
}

bool func_110(int iParam0)
{
	if (Local_433.f_73.f_102 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_102);
		return StackVal;
	}
	return true;
}

bool func_111(int iParam0, int iParam1)
{
	return false;
}

void func_112(int iParam0, int iParam1)
{
	if (!bLocal_1214)
	{
		return;
	}
	Local_1270.f_24[iParam0 /*22*/].f_1 = iParam1;
}

void func_113(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	*iParam4 = func_114(iParam0);
	*bParam1 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_24[iParam0 /*22*/]);
	if (*bParam1)
	{
		*bParam3 = NETWORK::NET_TO_PED(Local_1270.f_24[iParam0 /*22*/]);
		*bParam2 = PED::IS_PED_INJURED(*bParam3);
	}
}

int func_114(int iParam0)
{
	return Local_1270.f_24[iParam0 /*22*/].f_1;
}

void func_115()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	iVar4 = 0;
	while (iVar4 < Local_218.f_112)
	{
		bVar3 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_98[iVar4 /*5*/]);
		if (bVar3)
		{
			iVar0 = NETWORK::NET_TO_ENT(Local_1270.f_98[iVar4 /*5*/]);
			bVar2 = ENTITY::IS_ENTITY_DEAD(iVar0, false);
		}
		if (func_129(iVar4) > 1 && func_129(iVar4) != 3)
		{
			if (bVar3)
			{
				if (bVar2)
				{
					func_128(iVar4, 3);
				}
				else if (func_127(iVar4))
				{
					func_128(iVar4, 3);
				}
			}
			else
			{
				func_128(iVar4, 3);
			}
		}
		switch (func_129(iVar4))
		{
			case 0:
				if (func_126(iVar4))
				{
					func_128(iVar4, 1);
				}
				break;
			case 1:
				if ((!bVar1 && func_125(iVar4)) && func_116(iVar4))
				{
					func_128(iVar4, 2);
					bVar1 = true;
				}
				break;
			case 2:
				break;
			case 3:
				break;
		}
		iVar4++;
	}
}

int func_116(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_98[iParam0 /*5*/]))
	{
		if (func_31(Local_218.f_112.f_1[iParam0 /*10*/].f_3))
		{
			return 0;
		}
		iVar1 = Local_218.f_112.f_1[iParam0 /*10*/].f_2;
		if (!func_97(iVar1))
		{
			return 0;
		}
		if (func_123(&(Local_1270.f_98[iParam0 /*5*/]), iVar1, Local_218.f_112.f_1[iParam0 /*10*/].f_3, 1, 1, 0, func_124(iParam0, 22), 1, 0, 0))
		{
			bVar0 = NETWORK::NET_TO_OBJ(Local_1270.f_98[iParam0 /*5*/]);
			ENTITY::SET_ENTITY_ROTATION(bVar0, Local_218.f_112.f_1[iParam0 /*10*/].f_7, 2, true);
			func_120(iParam0, bVar0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_98[iParam0 /*5*/]))
	{
		if (func_119(iParam0))
		{
			bVar0 = NETWORK::NET_TO_OBJ(Local_1270.f_98[iParam0 /*5*/]);
			return func_117(iParam0, bVar0);
		}
		return 1;
	}
	return 0;
}

int func_117(int iParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	vector3 vVar8[24];
	int iVar14;

	Stack.Push(Local_433.f_216.f_13 != 0);
	Stack.Push(iParam0);
	Stack.Push(&iVar0);
	Stack.Push(&vVar1);
	Stack.Push(&vVar4);
	Stack.Push(&bVar7);
	Stack.Push(&cVar8);
	Call_Loc(Local_433.f_216.f_13);
	if (StackVal && StackVal)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar8))
		{
			StringCopy(&cVar8, "chassis_dummy", 24);
		}
		if (ENTITY::DOES_ENTITY_EXIST(bParam1) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
		{
			if (func_118(iVar0))
			{
				iVar14 = NETWORK::NET_TO_ENT(iVar0);
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(bParam1, iVar14))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(bParam1, iVar14, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar14, &cVar8), vVar1, vVar4, bVar7, true, true, false, 2, true);
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
			{
			}
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
			{
			}
		}
		return 0;
	}
	return 1;
}

bool func_118(int iParam0)
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) || (!NETWORK::_0x3FA36981311FA4FF(iParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
	{
		if (func_96(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_119(int iParam0)
{
	return func_124(iParam0, 25);
}

void func_120(int iParam0, bool bParam1)
{
	var uVar0;
	var uVar6;

	NETWORK::GET_MAX_NUM_NETWORK_PICKUPS(NETWORK::NET_TO_OBJ(Local_1270.f_98[iParam0 /*5*/]), 300);
	ENTITY::SET_ENTITY_PROOFS(bParam1, func_124(iParam0, 17), func_124(iParam0, 18), func_124(iParam0, 19), func_124(iParam0, 20), func_124(iParam0, 21), false, false, false);
	func_121(iParam0, 0);
	if (!func_124(iParam0, 1))
	{
		OBJECT::_PLACE_OBJECT_ON_GROUND_PROPERLY_2(NETWORK::NET_TO_OBJ(Local_1270.f_98[iParam0 /*5*/]));
	}
	if (func_124(iParam0, 2))
	{
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_1270.f_98[iParam0 /*5*/], true, true);
	}
	if (func_124(iParam0, 3))
	{
		ENTITY::SET_ENTITY_COLLISION(bParam1, false, false);
	}
	if (func_124(iParam0, 4))
	{
		ENTITY::SET_ENTITY_LIGHTS(bParam1, true);
	}
	if (func_124(iParam0, 5))
	{
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(bParam1, false);
	}
	if (func_124(iParam0, 6))
	{
		ENTITY::SET_ENTITY_DYNAMIC(bParam1, true);
	}
	if (func_124(iParam0, 7))
	{
		ENTITY::APPLY_FORCE_TO_ENTITY(bParam1, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0, false, false, false, false, true);
	}
	if (func_124(iParam0, 15))
	{
		ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_1270.f_98[iParam0 /*5*/]), 1200);
	}
	if (func_124(iParam0, 8))
	{
		ENTITY::FREEZE_ENTITY_POSITION(bParam1, true);
	}
	if (func_124(iParam0, 9))
	{
		ENTITY::_0x352E2B5CF420BF3B(NETWORK::NET_TO_OBJ(Local_1270.f_98[iParam0 /*5*/]), 1);
	}
	if (func_124(iParam0, 16))
	{
		ENTITY::SET_ENTITY_COORDS(bParam1, Local_218.f_112.f_1[iParam0 /*10*/].f_3, true, false, false, true);
	}
	if (func_124(iParam0, 10))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(bParam1, true);
	}
	if (func_124(iParam0, 11))
	{
		ENTITY::_0xD7B80E7C3BEFC396(bParam1, 1);
	}
	if (func_124(iParam0, 12))
	{
		NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(bParam1, true);
	}
	if (func_124(iParam0, 13))
	{
		ENTITY::SET_ENTITY_VISIBLE(bParam1, false, false);
	}
	if (func_124(iParam0, 14))
	{
		Stack.Push(Local_433.f_216.f_12 != 0);
		Stack.Push(iParam0);
		Stack.Push(&uVar0);
		Stack.Push(&uVar6);
		Call_Loc(Local_433.f_216.f_12);
		if (StackVal && StackVal)
		{
			AUDIO::_LINK_STATIC_EMITTER_TO_ENTITY(&uVar0, bParam1);
			AUDIO::SET_STATIC_EMITTER_ENABLED(&uVar0, true);
			AUDIO::SET_EMITTER_RADIO_STATION(&uVar0, &uVar6);
		}
	}
	if (Local_433.f_216.f_17 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(bParam1);
		Call_Loc(Local_433.f_216.f_17);
	}
}

void func_121(int iParam0, int iParam1)
{
	if (func_122(&(Local_1270.f_98[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

bool func_122(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2))
	{
		MISC::CLEAR_BIT(uParam0[iVar1], iVar2);
		return true;
	}
	return false;
}

bool func_123(var uParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!NETWORK::_RESERVE_NETWORK_LOCAL_VEHICLES(1))
	{
		return false;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, vParam2, bParam6, bParam5, bParam7));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, vParam2, bParam6, bParam5, bParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(*uParam0), bParam8);
		if (bParam10)
		{
			NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_OBJ(*uParam0), true);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, false);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return true;
	}
	return false;
}

bool func_124(int iParam0, int iParam1)
{
	return func_4(&(Local_218.f_112.f_1[iParam0 /*10*/]), iParam1);
}

bool func_125(int iParam0)
{
	return true;
}

bool func_126(int iParam0)
{
	if (Local_433.f_216.f_11 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_216.f_11);
		return StackVal;
	}
	return true;
}

bool func_127(int iParam0)
{
	Stack.Push(Local_433.f_216.f_14 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_216.f_14);
	if (StackVal && StackVal)
	{
		return true;
	}
	return false;
}

void func_128(int iParam0, int iParam1)
{
	Local_1270.f_98[iParam0 /*5*/].f_1 = iParam1;
}

int func_129(int iParam0)
{
	return Local_1270.f_98[iParam0 /*5*/].f_1;
}

void func_130()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Local_218.f_95)
	{
		bVar5 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[iVar0 /*6*/]);
		if (bVar5)
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_1270.f_91[iVar0 /*6*/]);
			bVar4 = func_105(Local_1270.f_91[iVar0 /*6*/]);
			bVar6 = func_375(iVar2, 1, 1, 0, 0, 0, 1, 0, 0);
			if (bVar4)
			{
				iVar1 = func_374(iVar0, 2);
			}
		}
		if (func_373(iVar0) > 2)
		{
			if (func_373(iVar0) != 5 && func_373(iVar0) != 3)
			{
				if (!bVar5)
				{
					func_372(iVar0, 5);
				}
				else if (!bVar4)
				{
					func_372(iVar0, 5);
				}
				else if (func_371(iVar0, iVar2))
				{
					func_372(iVar0, 5);
				}
			}
		}
		if (Local_433.f_188.f_25 != 0)
		{
			Stack.Push(iVar0);
			Stack.Push(iVar2);
			Stack.Push(bVar4);
			Stack.Push(iVar1);
			Call_Loc(Local_433.f_188.f_25);
		}
		func_366(iVar0);
		switch (func_373(iVar0))
		{
			case 0:
				if (func_365(iVar0))
				{
					func_372(iVar0, 2);
				}
				break;
			case 1:
				if (!bVar5)
				{
					if (func_364(iVar0))
					{
						func_372(iVar0, 2);
					}
				}
				else
				{
					func_108(&(Local_1270.f_91[iVar0 /*6*/]));
				}
				break;
			case 2:
				if (!bVar3)
				{
					if (func_363(iVar0))
					{
						if (func_136(iVar0))
						{
							func_372(iVar0, 4);
							bVar3 = true;
						}
					}
				}
				break;
			case 4:
				if (bVar4)
				{
				}
				break;
			case 5:
				if (!func_46(7))
				{
					func_41(iVar0, 2);
				}
				if (func_135(iVar0, 11))
				{
					func_10(10);
				}
				if (func_135(iVar0, 27))
				{
					if (bVar5)
					{
						func_108(&(Local_1270.f_91[iVar0 /*6*/]));
					}
				}
				if (func_134(iVar0))
				{
					func_108(&(Local_1270.f_91[iVar0 /*6*/]));
					func_372(iVar0, 1);
				}
				break;
			case 3:
				break;
			case 6:
				if (bVar5 && func_133(iVar0, iVar2))
				{
					func_108(&(Local_1270.f_91[iVar0 /*6*/]));
				}
				break;
			case 7:
				break;
		}
		if (bVar6)
		{
			func_132(iVar0, 17);
		}
		else
		{
			func_131(iVar0, 17);
		}
		iVar0++;
	}
}

void func_131(int iParam0, int iParam1)
{
	if (func_122(&(Local_1270.f_91[iParam0 /*6*/].f_2), iParam1))
	{
	}
}

void func_132(int iParam0, int iParam1)
{
	if (func_15(&(Local_1270.f_91[iParam0 /*6*/].f_2), iParam1))
	{
	}
}

bool func_133(int iParam0, int iParam1)
{
	if (func_135(iParam0, 27) || func_135(iParam0, 0))
	{
		return true;
	}
	return false;
}

bool func_134(int iParam0)
{
	if (func_408() != 0)
	{
		return false;
	}
	if (func_135(iParam0, 1))
	{
		if (Local_433.f_188.f_18 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_188.f_18);
			return StackVal;
		}
		return true;
	}
	return false;
}

bool func_135(int iParam0, int iParam1)
{
	return func_4(&(Local_218.f_95.f_1[iParam0 /*14*/]), iParam1);
}

bool func_136(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	func_98(1, iParam0);
	iVar0 = Local_218.f_95.f_1[iParam0 /*14*/].f_3;
	if (!func_97(iVar0))
	{
		return false;
	}
	bVar1 = true;
	if (func_31(Local_1270.f_155))
	{
		if (func_135(iParam0, 0))
		{
		}
		else if (func_135(iParam0, 23))
		{
			if (!func_241(iParam0, &(Local_1270.f_155), &(Local_1270.f_161)))
			{
				bVar1 = false;
			}
		}
		else if (func_135(iParam0, 22))
		{
			Stack.Push(iParam0);
			Stack.Push(&(Local_1270.f_155));
			Stack.Push(&(Local_1270.f_161));
			Call_Loc(Local_433.f_188.f_20);
			if (!StackVal)
			{
				bVar1 = false;
			}
		}
		else if (func_135(iParam0, 28))
		{
			if (!func_237(iParam0))
			{
				bVar1 = false;
			}
		}
		else if (func_135(iParam0, 33))
		{
			if (!func_231(iParam0))
			{
				bVar1 = false;
			}
		}
		else
		{
			Local_1270.f_155 = { Local_218.f_95.f_1[iParam0 /*14*/].f_4 };
			Local_1270.f_161 = Local_218.f_95.f_1[iParam0 /*14*/].f_7;
		}
	}
	if (bVar1)
	{
		func_210(Local_1270.f_155, 30f, 0);
		MISC::CLEAR_AREA(Local_1270.f_155, 30f, false, false, false, true);
		if (func_207(&(Local_1270.f_91[iParam0 /*6*/]), iVar0, Local_1270.f_155, Local_1270.f_161, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			bVar2 = NETWORK::NET_TO_VEH(Local_1270.f_91[iParam0 /*6*/]);
			func_137(iParam0, bVar2);
			func_74();
			return true;
		}
	}
	return false;
}

void func_137(int iParam0, bool bParam1)
{
	int iVar0;
	struct<101> Var1;

	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam1);
	if (Local_433.f_188.f_23 != 0)
	{
		Var1.f_9 = 49;
		Var1.f_59 = 2;
		Var1.f_78 = -1;
		Var1.f_79 = -1;
		Var1.f_96 = -1;
		Var1.f_97 = 1;
		Var1.f_99 = 132;
		Var1.f_100 = -1;
		Stack.Push(iParam0);
		Stack.Push(&Var1);
		Call_Loc(Local_433.f_188.f_23);
		if (StackVal)
		{
			func_146(bParam1, &Var1, 0, 1, func_135(iParam0, 0));
		}
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam1, func_135(iParam0, 21));
	NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(bParam1, func_135(iParam0, 13));
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(bParam1, func_135(iParam0, 17));
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(bParam1, func_135(iParam0, 17));
	VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(bParam1, func_135(iParam0, 25));
	if (func_135(iParam0, 18))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(bParam1, 7);
	}
	if (func_135(iParam0, 22))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(bParam1, Local_1270.f_155, false, false, true);
	}
	if (func_135(iParam0, 26))
	{
		VEHICLE::_SET_VEHICLE_DOOR_DESTROY_TYPE(bParam1, 2, 2);
		VEHICLE::_SET_VEHICLE_DOOR_DESTROY_TYPE(bParam1, 3, 2);
		VEHICLE::_0x1B212B26DD3C04DF(bParam1, false);
	}
	if (func_135(iParam0, 7))
	{
		ENTITY::SET_ENTITY_HEALTH(bParam1, 1000, 0);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(bParam1, false);
		VEHICLE::SET_VEHICLE_STRONG(bParam1, true);
		VEHICLE::_0xBB2333BB87DDD87F(bParam1, 0);
		if (func_145(iVar0))
		{
			VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(bParam1, false);
			VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(bParam1, func_144(iVar0));
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
		{
			VEHICLE::SET_VEHICLE_CAN_BREAK(bParam1, false);
			VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(bParam1, 0f);
		}
		func_142(bParam1, iVar0);
		func_141(bParam1, 1);
		VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(bParam1, false);
		VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(bParam1, func_135(iParam0, 24), false);
		func_140(iParam0, bParam1);
	}
	if (func_135(iParam0, 30))
	{
		ENTITY::FREEZE_ENTITY_POSITION(bParam1, true);
	}
	if (func_135(iParam0, 0))
	{
	}
	else
	{
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
		{
			VEHICLE::CONTROL_LANDING_GEAR(bParam1, 2);
		}
		if (VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0))
		{
			VEHICLE::SET_BOAT_ANCHOR(bParam1, true);
		}
	}
	if (func_135(iParam0, 0) || func_135(iParam0, 33))
	{
		if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(bParam1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(bParam1, true, true, false);
			PHYSICS::ACTIVATE_PHYSICS(bParam1);
			ENTITY::SET_ENTITY_DYNAMIC(bParam1, true);
		}
	}
	VEHICLE::_0xDBC631F109350B8C(bParam1, true);
	VEHICLE::_0x2311DD7159F00582(bParam1, true);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(bParam1, true);
	ENTITY::SET_ENTITY_LOD_DIST(bParam1, 1200);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	NETWORK::_0x267C78C60E806B9A(bParam1, true);
	func_138(bParam1);
	NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_1270.f_91[iParam0 /*6*/], 1);
	if (Local_433.f_188.f_22 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(bParam1);
		Call_Loc(Local_433.f_188.f_22);
	}
}

void func_138(bool bParam0)
{
	int iVar0;

	func_139(bParam0);
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(bParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "MPBitset");
		}
		MISC::SET_BIT(&iVar0, 10);
		MISC::SET_BIT(&iVar0, 11);
		DECORATOR::DECOR_SET_INT(bParam0, "MPBitset", iVar0);
	}
}

void func_139(bool bParam0)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
	{
		if (!DECORATOR::DECOR_EXIST_ON(bParam0, "Not_Allow_As_Saved_Veh"))
		{
			DECORATOR::DECOR_SET_INT(bParam0, "Not_Allow_As_Saved_Veh", 1);
		}
	}
}

void func_140(int iParam0, bool bParam1)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMCVehicle", 2))
	{
		DECORATOR::DECOR_SET_BOOL(bParam1, "FMCVehicle", true);
	}
}

void func_141(bool bParam0, bool bParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(bParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "MPBitset");
		}
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, 13);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, 13);
		}
		DECORATOR::DECOR_SET_INT(bParam0, "MPBitset", iVar0);
	}
}

void func_142(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("PHANTOM2"):
		case joaat("DUNE5"):
			VEHICLE::_SET_VEHICLE_RECEIVES_RAMP_DAMAGE(bParam0, false);
			break;
	}
	func_143(bParam0);
}

void func_143(bool bParam0)
{
	if (!Global_262145.f_4683)
	{
		VEHICLE::_0x80E3357FDEF45C21(bParam0, 0);
	}
}

float func_144(int iParam0)
{
	switch (iParam0)
	{
		case joaat("INSURGENT3"):
			return 1f;
		default:
			break;
	}
	return 0.2f;
}

bool func_145(int iParam0)
{
	return func_144(iParam0) != 1f;
}

void func_146(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (ENTITY::DOES_ENTITY_EXIST(bParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(bParam0, false))
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::PLAYER_ID() != func_68())
			{
				uParam1->f_100 = PLAYER::PLAYER_ID();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_194(bParam0, uParam1, bParam2, bParam3);
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				AUDIO::OVERRIDE_VEH_HORN(bParam0, true, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				AUDIO::_SET_VEHICLE_HORN_VARIATION(bParam0, uParam1->f_79);
			}
			if (func_193(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
			{
				uParam1->f_80 = fVar0;
			}
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(bParam0, uParam1->f_80);
			VEHICLE::_SET_VEHICLE_INTERIOR_COLOR(bParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				VEHICLE::_SET_VEHICLE_DASHBOARD_COLOR(bParam0, uParam1->f_99);
			}
			if (func_192(bParam0))
			{
				func_186(bParam0, func_189(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (VEHICLE::_GET_VEHICLE_ROOF_LIVERY_COUNT(bParam0) > 1 && uParam1->f_98 >= 0)
			{
				VEHICLE::_SET_VEHICLE_ROOF_LIVERY(bParam0, uParam1->f_98);
			}
			if (MISC::IS_BIT_SET(uParam1->f_95, 0))
			{
				func_160(bParam0, &(uParam1->f_81));
			}
			if ((!func_151(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_149(bParam0);
			}
			if (func_148(ENTITY::GET_ENTITY_MODEL(bParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(bParam0, 16);
						break;
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(bParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(bParam0, joaat("SCARAB")) || VEHICLE::IS_VEHICLE_MODEL(bParam0, joaat("SCARAB2"))) || VEHICLE::IS_VEHICLE_MODEL(bParam0, joaat("SCARAB3")))
						{
							VEHICLE::SET_VEHICLE_MOD(bParam0, 16, 0, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(bParam0, 16, 2, false);
						}
						break;
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(bParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(bParam0, joaat("SCARAB")) || VEHICLE::IS_VEHICLE_MODEL(bParam0, joaat("SCARAB2"))) || VEHICLE::IS_VEHICLE_MODEL(bParam0, joaat("SCARAB3")))
						{
							VEHICLE::SET_VEHICLE_MOD(bParam0, 16, 1, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(bParam0, 16, 3, false);
						}
						break;
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(bParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(bParam0, joaat("SCARAB")) || VEHICLE::IS_VEHICLE_MODEL(bParam0, joaat("SCARAB2"))) || VEHICLE::IS_VEHICLE_MODEL(bParam0, joaat("SCARAB3")))
						{
							VEHICLE::SET_VEHICLE_MOD(bParam0, 16, 2, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(bParam0, 16, 4, false);
						}
						break;
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(bParam0, 16);
							if ((VEHICLE::IS_VEHICLE_MODEL(bParam0, joaat("SCARAB")) || VEHICLE::IS_VEHICLE_MODEL(bParam0, joaat("SCARAB2"))) || VEHICLE::IS_VEHICLE_MODEL(bParam0, joaat("SCARAB3")))
							{
								VEHICLE::SET_VEHICLE_MOD(bParam0, 16, 2, false);
							}
							else
							{
								VEHICLE::SET_VEHICLE_MOD(bParam0, 16, 4, false);
							}
						}
						break;
				}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				case 1:
					if (MISC::IS_BIT_SET(uParam1->f_95, 1) && MISC::IS_BIT_SET(uParam1->f_95, 2))
					{
						if (MISC::IS_BIT_SET(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
					{
						DECORATOR::DECOR_SET_INT(bParam0, "Player_Vehicle", -1);
					}
					break;
				case 2:
					if (MISC::IS_BIT_SET(uParam1->f_95, 1) && MISC::IS_BIT_SET(uParam1->f_95, 2))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
						{
							DECORATOR::DECOR_SET_INT(bParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
					{
						if (func_147(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
						{
							DECORATOR::DECOR_SET_INT(bParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						}
						else
						{
							DECORATOR::DECOR_SET_INT(bParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				case 3:
					break;
				case 4:
					break;
			}
		}
	}
}

bool func_147(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

bool func_148(int iParam0)
{
	switch (iParam0)
	{
		case joaat("POUNDER2"):
		case joaat("MULE4"):
		case joaat("SPEEDO4"):
		case joaat("IMPERATOR"):
		case joaat("DEATHBIKE"):
		case joaat("CERBERUS"):
		case joaat("BRUISER"):
		case joaat("DOMINATOR4"):
		case joaat("ZR380"):
		case joaat("ISSI4"):
		case joaat("IMPERATOR2"):
		case joaat("DEATHBIKE2"):
		case joaat("CERBERUS2"):
		case joaat("BRUISER2"):
		case joaat("DOMINATOR5"):
		case joaat("ZR3802"):
		case joaat("ISSI5"):
		case joaat("IMPERATOR3"):
		case joaat("DEATHBIKE3"):
		case joaat("CERBERUS3"):
		case joaat("BRUISER3"):
		case joaat("DOMINATOR6"):
		case joaat("ZR3803"):
		case joaat("ISSI6"):
		case joaat("IMPALER2"):
		case joaat("IMPALER3"):
		case joaat("IMPALER4"):
		case joaat("SLAMVAN4"):
		case joaat("SLAMVAN5"):
		case joaat("SLAMVAN6"):
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
		case joaat("SCARAB"):
		case joaat("SCARAB2"):
		case joaat("SCARAB3"):
		case joaat("BRUTUS"):
		case joaat("BRUTUS2"):
		case joaat("BRUTUS3"):
			return true;
	}
	return false;
}

void func_149(bool bParam0)
{
	vector3 vVar0;

	if (Global_262145.f_19684)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(bParam0))
			{
				vVar0.x = ENTITY::GET_ENTITY_MODEL(bParam0);
				vVar0.f_1 = MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(bParam0));
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", 3))
				{
					if (!DECORATOR::DECOR_EXIST_ON(bParam0, "RandomID"))
					{
						vVar0.f_2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
						DECORATOR::DECOR_SET_INT(bParam0, "RandomID", vVar0.z);
					}
					else
					{
						vVar0.f_2 = DECORATOR::DECOR_GET_INT(bParam0, "RandomID");
					}
				}
				func_150(vVar0);
			}
		}
	}
}

void func_150(vector3 vParam0)
{
	vector3 vVar0;

	vVar0.x = -582258758;
	vVar0.f_1 = PLAYER::PLAYER_ID();
	vVar0.f_2 = vParam0.x;
	vVar0.f_2.f_1 = vParam0.y;
	vVar0.f_2.f_2 = vParam0.z;
	SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 5, func_24(1, 1));
}

bool func_151(int iParam0)
{
	int iVar0;

	if (func_159())
	{
		iVar0 = 0;
		while (iVar0 < 53)
		{
			if (func_158(iVar0) == iParam0)
			{
				if (func_152(iVar0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_152(int iParam0)
{
	return func_153(iParam0, 6, 1);
}

bool func_153(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_98796.f_1357[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_157() == 0)
		{
			return MISC::IS_BIT_SET(func_154(func_156(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_111638.f_668[iParam0], iParam1);
	}
	return false;
}

int func_154(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_155(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_155(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
		case 1:
			return 828;
		case 2:
			return 829;
		case 3:
			return 830;
		case 4:
			return 831;
		case 5:
			return 832;
		case 6:
			return 833;
		case 7:
			return 834;
		case 8:
			return 835;
		case 9:
			return 836;
		case 10:
			return 837;
		case 11:
			return 838;
		case 12:
			return 839;
		case 13:
			return 840;
		case 14:
			return 841;
		case 15:
			return 843;
		case 16:
			return 844;
		case 17:
			return 845;
		case 18:
			return 846;
		case 19:
			return 847;
		case 20:
			return 848;
		case 21:
			return 849;
		case 22:
			return 850;
		case 23:
			return 851;
		case 24:
			return 852;
		case 25:
			return 853;
		case 26:
			return 854;
		case 27:
			return 855;
		case 28:
			return 856;
		case 29:
			return 857;
		case 30:
			return 858;
		case 31:
			return 859;
		case 32:
			return 860;
		case 33:
			return 861;
		case 34:
			return 862;
		case 35:
			return 863;
		case 36:
			return 864;
		case 37:
			return 865;
		case 38:
			return 866;
		case 39:
			return 867;
		case 40:
			return 871;
		case 41:
			return 872;
		case 42:
			return 873;
		case 43:
			return 874;
		case 44:
			return 9977;
		case 45:
			return 3808;
		case 46:
			return 5383;
		case 47:
			return 6155;
		case 48:
			return 7232;
		case 49:
			return 7878;
		case 52:
			return 8912;
		case 50:
			return 8265;
		case 51:
			return 8267;
		default:
			break;
	}
	return 11511;
}

int func_157()
{
	return Global_30768;
}

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 50:
			return 0;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
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
			return 2;
		case 23:
			return 2;
		case 24:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 27:
			return 2;
		case 28:
			return 3;
		case 29:
			return 3;
		case 30:
			return 3;
		case 31:
			return 3;
		case 32:
			return 3;
		case 33:
			return 3;
		case 34:
			return 3;
		case 35:
			return 3;
		case 36:
			return 3;
		case 37:
			return 3;
		case 38:
			return 3;
		case 39:
			return 4;
		case 40:
			return 4;
		case 41:
			return 4;
		case 42:
			return 4;
		case 43:
			return 4;
		case 44:
			return 4;
		case 45:
			return 5;
		case 46:
			return 3;
		case 47:
			return 3;
		case 48:
			return 3;
		case 49:
			return 3;
		case 52:
			return 3;
		case 51:
			return 1;
	}
	return 6;
}

bool func_159()
{
	return Global_98796.f_346 > 0;
}

int func_160(bool bParam0, int* iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_170(bParam0, iParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0, false))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(bParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!func_168(bParam0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
			if (func_163(&bParam0, iVar1))
			{
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (func_161(bParam0))
	{
	}
	return 0;
}

bool func_161(bool bParam0)
{
	int iVar0;
	void fVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0, false))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(bParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				fVar1 = NETWORK::_0xBA7F0B77D80A4EB7();
			}
			else
			{
				fVar1 = MISC::GET_GAME_TIMER();
			}
			iVar2 = MISC::ABSI(NETWORK::IS_TIME_EQUAL_TO(fVar1, Global_1315731));
			iVar3 = 20000;
			if (Global_1574410)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				GRAPHICS::_0x82ACC484FFA3B05F(bParam0);
				func_162(bParam0);
				return false;
			}
		}
		return true;
	}
	return false;
}

void func_162(bool bParam0)
{
	int iVar0;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(bParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(bParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "MPBitset");
			}
		}
	}
	if (!MISC::IS_BIT_SET(iVar0, 16))
	{
		MISC::SET_BIT(&iVar0, 16);
		DECORATOR::DECOR_SET_INT(bParam0, "MPBitset", iVar0);
	}
}

bool func_163(bool bParam0, int iParam1)
{
	func_167();
	if (Global_1312467.f_18 != 0 || VEHICLE::_0x8533CAFDE1F0F336(*bParam0))
	{
		Global_1676268.f_11 = VEHICLE::_GET_VEHICLE_SUSPENSION_HEIGHT(*bParam0);
		if (Global_1676268.f_11 < 0f)
		{
			Global_1676268.f_11 = 0f;
		}
	}
	func_165(*bParam0, &Global_1676268, &(Global_1676268.f_1), &(Global_1676268.f_4), &(Global_1676268.f_7), &(Global_1676268.f_10));
	Global_1676268.f_1.f_2 = (Global_1676268.f_1.f_2 - Global_1676268.f_11);
	if (Global_1676268.f_4.f_2 < 0f)
	{
		Global_1676268.f_12 = 1;
	}
	Global_1676268.f_13 = 200;
	if (ENTITY::GET_ENTITY_MODEL(*bParam0) == joaat("WINDSOR") || ENTITY::GET_ENTITY_MODEL(*bParam0) == joaat("COMET4"))
	{
		Global_1676268.f_13 = 255;
	}
	if (Global_1676268.f_12)
	{
		if (func_164(bParam0, iParam1, Global_1676268, Global_1676268.f_1, Global_1676268.f_4, Global_1676268.f_7, Global_1676268.f_10, 0, Global_1676268.f_13))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1315731 = NETWORK::_0xBA7F0B77D80A4EB7();
			}
			else
			{
				Global_1315731 = MISC::GET_GAME_TIMER();
			}
			return true;
		}
	}
	else
	{
		Global_1676268.f_14 = { Global_1676268.f_1 };
		Global_1676268.f_14 = (Global_1676268.f_14 * -1f);
		Global_1676268.f_17 = { Global_1676268.f_4 };
		Global_1676268.f_17 = (Global_1676268.f_17 * -1f);
		Global_1676268.f_20 = { Global_1676268.f_7 };
		Global_1676268.f_20.f_1 = (Global_1676268.f_20.f_1 * -1f);
		Global_1676268.f_20.f_2 = (Global_1676268.f_20.f_2 * -1f);
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*bParam0, 0))
		{
			Global_1676268.f_23 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*bParam0, 0);
		}
		else
		{
			Global_1676268.f_23 = 3;
		}
		Global_1676268.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*bParam0, 1);
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*bParam0, 1))
		{
			Global_1676268.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*bParam0, 1);
		}
		else
		{
			Global_1676268.f_24 = 3;
		}
		if (((Global_1676268.f_23 == 0 && func_164(bParam0, iParam1, Global_1676268, Global_1676268.f_1, Global_1676268.f_4, Global_1676268.f_7, Global_1676268.f_10, 0, Global_1676268.f_13)) || Global_1676268.f_23 != 0) && ((Global_1676268.f_24 == 0 && func_164(bParam0, iParam1, Global_1676268, Global_1676268.f_14, Global_1676268.f_17, Global_1676268.f_20, Global_1676268.f_10, 1, Global_1676268.f_13)) || Global_1676268.f_24 != 0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1315731 = NETWORK::_0xBA7F0B77D80A4EB7();
			}
			else
			{
				Global_1315731 = MISC::GET_GAME_TIMER();
			}
			return true;
		}
	}
	return false;
}

bool func_164(bool bParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12, int iParam13, int iParam14)
{
	return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*bParam0, PLAYER::GET_PLAYER_PED(iParam1), iParam2, vParam3, vParam6, vParam9, fParam12, iParam13, iParam14);
}

int func_165(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
	if (((!func_166(Global_1676294, 0f, 0f, 0f, 0) && !func_166(Global_1676297, 0f, 0f, 0f, 0)) && !func_166(Global_1676300, 0f, 0f, 0f, 0)) && !Global_1676303 == 0f)
	{
		*uParam2 = { Global_1676294 };
		*uParam3 = { Global_1676297 };
		*uParam4 = { Global_1676300 };
		*uParam5 = Global_1676303;
		return 1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("DOMINATOR"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("FELTZER2"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("ADDER"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("AKUMA"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		case joaat("ASEA"):
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("ASTEROPE"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("BAGGER"):
			*uParam2 = { -1f, 0.16f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		case joaat("BALLER"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("BALLER2"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("BANSHEE"):
			*uParam2 = { 0f, 0.94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("BATI"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("BATI2"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("BFINJECTION"):
			*uParam2 = { -1f, 0.08f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("BISON"):
			*uParam2 = { 0f, 1.99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("BJXL"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("BLISTA"):
			*uParam2 = { 0f, 1.49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		case joaat("BOBCATXL"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.65f;
			break;
		case joaat("BODHI2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("BUCCANEER"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		case joaat("BUFFALO"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("BUFFALO2"):
			*uParam2 = { 0f, 2.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("BULLET"):
			*uParam2 = { -1.57f, 0.07f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("CARBONRS"):
			*uParam2 = { 0f, 0.09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		case joaat("CARBONIZZARE"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, -0.11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("CAVALCADE"):
			*uParam2 = { 0f, 1.51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.55f;
			break;
		case joaat("CAVALCADE2"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("CHEETAH"):
			*uParam2 = { -1.61f, 0.26f, 0.17f };
			*uParam3 = { 0.9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("COGCABRIO"):
			*uParam2 = { 0f, 1.42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("COMET2"):
			*uParam2 = { 0f, 1.35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("COQUETTE"):
			*uParam2 = { 0f, 0.96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.22f;
			break;
		case joaat("DAEMON"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("DILETTANTE"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("DLOADER"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("DOUBLE"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("DUBSTA"):
			*uParam2 = { -1.71f, 0.31f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("DUBSTA2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.75f;
			break;
		case joaat("ELEGY2"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("EMPEROR"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("EMPEROR2"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("ENTITYXF"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("EXEMPLAR"):
			*uParam2 = { 0f, 1.32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("F620"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("FAGGIO2"):
			*uParam2 = { -1f, -0.48f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("FELON"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("FELON2"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("FQ2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("FUGITIVE"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("FUSILADE"):
			*uParam2 = { 0f, 0.98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("FUTO"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("GAUNTLET"):
			*uParam2 = { 0f, 1.735f, 1.05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		case joaat("GRANGER"):
			*uParam2 = { 0f, 2.07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("GRESLEY"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("HABANERO"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("HEXER"):
			*uParam2 = { 0f, -0.46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.14f;
			break;
		case joaat("HOTKNIFE"):
			*uParam2 = { -1.43f, -0.14f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("INFERNUS"):
			*uParam2 = { -1f, 0.33f, 0.08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.25f;
			break;
		case joaat("INGOT"):
			*uParam2 = { 0f, 1.58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("INTRUDER"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("ISSI2"):
			*uParam2 = { 0f, 1.21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("JACKAL"):
			*uParam2 = { 0f, 1.36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("JB700"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		case joaat("KHAMELION"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.475f;
			break;
		case joaat("LANDSTALKER"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("MANANA"):
			*uParam2 = { 0f, 0.86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		case joaat("MESA"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("MESA3"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("MINIVAN"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("MONROE"):
			*uParam2 = { 0f, 1.23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		case joaat("NEMESIS"):
			*uParam2 = { 0f, 0.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("NINEF"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("NINEF2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("ORACLE"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("ORACLE2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("PATRIOT"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("PCJ"):
			*uParam2 = { 0f, 0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("PENUMBRA"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("PEYOTE"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("PHOENIX"):
			*uParam2 = { 0f, 1.833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.44f;
			break;
		case joaat("PICADOR"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.515f;
			break;
		case joaat("PRAIRIE"):
			*uParam2 = { 0f, 1.41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		case joaat("PREMIER"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("PRIMO"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("RADI"):
			*uParam2 = { 0f, 1.74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("RANCHERXL"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("RAPIDGT"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("RAPIDGT2"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("RATLOADER"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("REBEL"):
			*uParam2 = { -1.22f, 0.6f, 0.44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("REBEL2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("REGINA"):
			*uParam2 = { 0f, 1.473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("ROCOTO"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("ROMERO"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("RUFFIAN"):
			*uParam2 = { 0f, -0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		case joaat("RUINER"):
			*uParam2 = { 0f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("SABREGT"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		case joaat("SADLER"):
			*uParam2 = { 0f, 2.26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("SANDKING"):
			*uParam2 = { 0f, 2.496f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("SANDKING2"):
			*uParam2 = { 0f, 2.286f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("SCHAFTER2"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		case joaat("SCHWARZER"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		case joaat("SEMINOLE"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("SENTINEL"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("SENTINEL2"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("SERRANO"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.49f;
			break;
		case joaat("STANIER"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("STINGER"):
			*uParam2 = { 0f, 1.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("STINGERGT"):
			*uParam2 = { -1f, -0.17f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("STRATUM"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("SULTAN"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		case joaat("SUPERD"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("SURANO"):
			*uParam2 = { 0f, 1.38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("SURFER"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		case joaat("SURFER2"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		case joaat("SURGE"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("TAILGATER"):
			*uParam2 = { 0f, 1.783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("TORNADO"):
			*uParam2 = { -1.23f, 0.11f, -0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("TORNADO2"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("TORNADO3"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("VACCA"):
			*uParam2 = { 0f, 1.76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("VADER"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("VIGERO"):
			*uParam2 = { -1f, 0.11f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("VOLTIC"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		case joaat("VOODOO2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("WASHINGTON"):
			*uParam2 = { 0f, 1.61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("YOUGA"):
			*uParam2 = { 0f, 2.352f, 1.003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		case joaat("ZION"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("ZION2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("ZTYPE"):
			*uParam2 = { -0.96f, -0.69f, 0.35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		default:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0.5f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("KALAHARI"):
			*uParam2 = { -1f, 0.18f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("PARADISE"):
			*uParam2 = { 0f, 2.23f, 1f };
			*uParam3 = { 0f, -0.22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("ALPHA"):
			*uParam2 = { -1f, 0.18f, -0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("HUNTLEY"):
			*uParam2 = { 0f, 1.52f, 0.99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("ZENTORNO"):
			*uParam2 = { -1.24f, 0.42f, -0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.035f };
			*uParam5 = 0.3f;
			break;
		case joaat("JESTER"):
			*uParam2 = { -1f, 0.17f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.05f };
			*uParam5 = 0.33f;
			break;
		case joaat("MASSACRO"):
			*uParam2 = { 0f, 1.37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		case joaat("TURISMOR"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("THRUST"):
			*uParam2 = { -1f, 0.405f, 0.4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		case joaat("BTYPE"):
			*uParam2 = { 0f, 1.143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.7125f;
			break;
		case joaat("RHAPSODY"):
			*uParam2 = { -1f, -0.47f, -0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2625f;
			break;
		case joaat("GLENDALE"):
			*uParam2 = { 0f, 1.683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		case joaat("WARRENER"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		case joaat("BLADE"):
			*uParam2 = { -1f, 0.445f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.325f;
			break;
		case joaat("PANTO"):
			*uParam2 = { -1f, 0f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("DUBSTA3"):
			*uParam2 = { -1f, 0.34f, 0.2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("PIGALLE"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("COQUETTE2"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("INNOVATION"):
			*uParam2 = { 0f, 0.15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		case joaat("HAKUCHOU"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.16f;
			break;
		case joaat("FUROREGT"):
			*uParam2 = { -1f, 0f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("RATLOADER2"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("SLAMVAN"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("DUKES2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		case joaat("DUKES"):
			*uParam2 = { -1f, 0f, 0.0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3875f;
			break;
		case joaat("STALION"):
			*uParam2 = { -1f, 0f, 0.0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4375f;
			break;
		case joaat("BLISTA2"):
			*uParam2 = { -1f, 0.5325f, 0.245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2875f;
			break;
		case joaat("CASCO"):
			*uParam2 = { 0f, 0.94f, 1.03f };
			*uParam3 = { 0f, -0.03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("ENDURO"):
			*uParam2 = { 0f, -0.17f, 1f };
			*uParam3 = { 0f, 0.34f, -0.786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("GBURRITO2"):
			*uParam2 = { 0f, 2.32f, 0.94f };
			*uParam3 = { 0f, -0.182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("GUARDIAN"):
			*uParam2 = { -1.94f, 1.07f, 0.38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("KURUMA"):
		case joaat("KURUMA2"):
			*uParam2 = { -1f, 0.2475f, -0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.435f;
			break;
		case joaat("LECTRO"):
			*uParam2 = { 0f, 0.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.09f;
			break;
		case joaat("FELTZER3"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("OSIRIS"):
			*uParam2 = { -1f, 0.27f, -0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("VIRGO"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("WINDSOR"):
			*uParam2 = { -1.2f, -0.39f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		case joaat("BRAWLER"):
			*uParam2 = { -1f, -0.21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("CHINO"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("COQUETTE3"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("T20"):
			*uParam2 = { -1f, 0.4f, -0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("VINDICATOR"):
			*uParam2 = { -1f, 0.21f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("FACTION"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("FACTION2"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("BUCCANEER2"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		case joaat("CHINO2"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("MOONBEAM"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("MOONBEAM2"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("PRIMO2"):
			*uParam2 = { -1f, 0.42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("VOODOO"):
			*uParam2 = { -1.12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("FACTION3"):
			*uParam2 = { -1f, 0f, 0.5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("SABREGT2"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		case joaat("TORNADO5"):
			*uParam2 = { -1f, 0.15f, -0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("VIRGO2"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		case joaat("VIRGO3"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		case joaat("MINIVAN2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("SLAMVAN3"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("BTYPE2"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("LURCHER"):
			*uParam2 = { -1f, 0f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("BALLER3"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("BALLER4"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("BALLER5"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("BALLER6"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("COG55"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("COG552"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("COGNOSCENTI"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("COGNOSCENTI2"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("MAMBA"):
			*uParam2 = { -1f, -0.18f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("NIGHTSHADE"):
			*uParam2 = { -1f, -0.2f, 0.17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("SCHAFTER3"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		case joaat("SCHAFTER4"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		case joaat("SCHAFTER5"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		case joaat("SCHAFTER6"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		case joaat("VERLIERER2"):
			*uParam2 = { -1f, -0.21f, 0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("TAMPA"):
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("BANSHEE2"):
			*uParam2 = { -1f, -0.4f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("SULTANRS"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		case joaat("BTYPE3"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("BESTIAGTS"):
			*uParam2 = { -1f, -0.06f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("SEVEN70"):
			*uParam2 = { -1f, -0.21f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("FMJ"):
			*uParam2 = { -1f, -0.06f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("PFISTER811"):
			*uParam2 = { -1f, 0.06f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("PROTOTIPO"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("REAPER"):
			*uParam2 = { -1f, 0.48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("RUMPO3"):
			*uParam2 = { 0f, 2.103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("WINDSOR2"):
			*uParam2 = { -1.2f, 0.03f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		case joaat("XLS"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("XLS2"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("BRIOSO"):
			*uParam2 = { -1f, -0.06f, 0.565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("CONTENDER"):
			*uParam2 = { 0f, 2.33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("LE7B"):
			*uParam2 = { -1f, -0.12f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("OMNIS"):
			*uParam2 = { -1f, 0.03f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("TROPOS"):
			*uParam2 = { -1f, 0f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("AVARUS"):
			*uParam2 = { -1f, 0.27f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("DAEMON2"):
			*uParam2 = { -1f, 0.27f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("DEFILER"):
			*uParam2 = { -1f, 0f, 0.34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.125f;
			break;
		case joaat("ESSKEY"):
			*uParam2 = { -1f, 0.335f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		case joaat("HAKUCHOU2"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("NIGHTBLADE"):
			*uParam2 = { 0f, -0.133f, 0.61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.125f;
			break;
		case joaat("RATBIKE"):
			*uParam2 = { -1f, 0.31f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("SHOTARO"):
			*uParam2 = { -1f, 0.06f, 0.325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("ZOMBIEA"):
			*uParam2 = { -1f, 0.3f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("ZOMBIEB"):
			*uParam2 = { -1f, 0.2f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("VORTEX"):
			*uParam2 = { -1f, 0.18f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.095f;
			break;
		case joaat("TORNADO6"):
			*uParam2 = { -1f, -0.03f, -0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("YOUGA2"):
			*uParam2 = { 0f, 2.352f, 0.253f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		case joaat("WOLFSBANE"):
			*uParam2 = { -1f, 0.33f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("FAGGIO3"):
			*uParam2 = { -1f, -0.54f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("FAGGIO"):
			*uParam2 = { -0.9875f, -0.0175f, -0.01f };
			*uParam3 = { 0.8975f, -0.26f, -0.0725f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		case joaat("COMET3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("DIABLOUS"):
			*uParam2 = { -1f, 0.006f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("DIABLOUS2"):
			*uParam2 = { -1f, 0.225f, 0.541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("ELEGY"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("FCR"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("FCR2"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("ITALIGTB"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("ITALIGTB2"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("NERO"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("NERO2"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("PENETRATOR"):
			*uParam2 = { -1f, 0.153f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("RUINER2"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("RUINER3"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("SPECTER"):
			*uParam2 = { -1f, -0.273f, -0.02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("SPECTER2"):
			*uParam2 = { -1f, -0.273f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("TECHNICAL2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("TEMPESTA"):
			*uParam2 = { -1f, 0f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("VOLTIC2"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		case joaat("INFERNUS2"):
			*uParam2 = { -1f, 0.33f, 0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.2f;
			break;
		case joaat("RUSTON"):
			*uParam2 = { -1f, -0.273f, 0.084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("TURISMO2"):
			*uParam2 = { -1f, 0.159f, -0.193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("ARDENT"):
			*uParam2 = { -1f, 0.309f, 0.276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("CHEETAH2"):
			*uParam2 = { -1f, 0.159f, -0.127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("HALFTRACK"):
			*uParam2 = { -1f, 0.501f, 0.531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("NIGHTSHARK"):
			*uParam2 = { -1.5f, 0.42f, 0.584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("OPPRESSOR"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		case joaat("TAMPA3"):
			*uParam2 = { 0f, 1.515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.275f;
			break;
		case joaat("TECHNICAL3"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		case joaat("TORERO"):
			*uParam2 = { -1f, 0.201f, 0.114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("VAGNER"):
			*uParam2 = { -1.5f, 0.906f, 0.071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("XA21"):
			*uParam2 = { -1f, 0.441f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("PHANTOM3"):
			*uParam2 = { -1.3f, 2.045f, 0.802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("HAULER2"):
			*uParam2 = { -1.627f, 2.456f, 0.745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("CYCLONE"):
			*uParam2 = { -1f, 0.186f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("VISIONE"):
			*uParam2 = { -1f, 0.432f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("VIGILANTE"):
			*uParam2 = { -1f, 0.232f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		case joaat("RETINUE"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("RAPIDGT3"):
			*uParam2 = { 0f, 1.972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		case joaat("AVENGER"):
			*uParam2 = { -2.02f, 6.45f, -0.716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("DELUXO"):
			*uParam2 = { -1f, -0.291f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("STROMBERG"):
			*uParam2 = { -1f, 0.23f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("RIOT2"):
			*uParam2 = { -1.891f, 2.144f, 0.657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("CHERNOBOG"):
			*uParam2 = { -2.127f, 5.413f, 1.132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.34f;
			break;
		case joaat("KHANJALI"):
			*uParam2 = { -0.897f, 1.391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("BARRAGE"):
			*uParam2 = { -1.51f, 0.71f, 0.451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("COMET4"):
			*uParam2 = { -1f, 0.298f, 0.257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.36f;
			break;
		case joaat("NEON"):
			*uParam2 = { -1f, 0.181f, -0.066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("STREITER"):
			*uParam2 = { -1f, 0.301f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("SENTINEL3"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("YOSEMITE"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("SC1"):
			*uParam2 = { -1f, 0.616f, -0.131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("AUTARCH"):
			*uParam2 = { -1f, 0f, 0.116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("GT500"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("HUSTLER"):
			*uParam2 = { -1f, -0.228f, 0.321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("REVOLTER"):
			*uParam2 = { -1f, 0.203f, 0.126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("PARIAH"):
			*uParam2 = { -1f, -0.126f, 0.208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("RAIDEN"):
			*uParam2 = { -1f, 0.252f, -0.095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("SAVESTRA"):
			*uParam2 = { -1f, 0f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("RIATA"):
			*uParam2 = { -1.3f, 0.18f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("HERMES"):
			*uParam2 = { -1f, -0.134f, 0.158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("COMET5"):
			*uParam2 = { -1f, 0.002f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("Z190"):
			*uParam2 = { -1f, -0.175f, 0.242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("VISERIS"):
			*uParam2 = { -1f, 0f, 0.244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.275f;
			break;
		case joaat("KAMACHO"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("GB200"):
			*uParam2 = { -1f, 0f, 0.407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.225f;
			break;
		case joaat("FAGALOA"):
			*uParam2 = { -1f, 0f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("ELLIE"):
			*uParam2 = { -1f, 0.441f, -0.128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("ISSI3"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("MICHELLI"):
			*uParam2 = { -1f, 0f, 0.0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("FLASHGT"):
			*uParam2 = { 0f, 1.592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("HOTRING"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("TEZERACT"):
			*uParam2 = { -1f, 0.679f, 0.514f };
			*uParam3 = { 1f, 0f, -0.75f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		case joaat("TYRANT"):
			*uParam2 = { -1.588f, 0.315f, 0.337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("DOMINATOR3"):
			*uParam2 = { -1f, 0f, 0.221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("TAIPAN"):
			*uParam2 = { -1f, 0f, 0.219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("ENTITY2"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("JESTER3"):
			*uParam2 = { -1f, 0f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("CHEBUREK"):
			*uParam2 = { -1f, 0.393f, 0.162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		case joaat("CARACARA"):
			*uParam2 = { -1f, 1.266f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("SPEEDO4"):
			*uParam2 = { -1.5f, 0.833f, 0.391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("MULE4"):
			*uParam2 = { -1.125f, 2.691f, 0.318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("POUNDER2"):
			*uParam2 = { -1.5f, 1.853f, 0.779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.38f;
			break;
		case joaat("SWINGER"):
			*uParam2 = { -1f, 0.195f, 0.105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("MENACER"):
			*uParam2 = { -1.73f, 0.159f, 0.61f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("SCRAMJET"):
			*uParam2 = { -1f, -0.188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("PATRIOT2"):
			*uParam2 = { -1.213f, 1.546f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("STAFFORD"):
			*uParam2 = { -1f, 0.036f, 0.096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("FREECRAWLER"):
			*uParam2 = { -1f, 0.249f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("OPPRESSOR2"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		case joaat("TERBYTE"):
			*uParam2 = { -1.73f, 3.397f, 0.724f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("BRUISER"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		case joaat("BRUISER2"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		case joaat("BRUISER3"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		case joaat("BRUTUS"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("BRUTUS2"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("BRUTUS3"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("CERBERUS"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("CERBERUS2"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("CERBERUS3"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("CLIQUE"):
			*uParam2 = { -1f, 0.167f, 0.159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("DEVESTE"):
			*uParam2 = { -1.5f, 1.066f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("DEVIANT"):
			*uParam2 = { -1f, 0.111f, 0.123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("DOMINATOR4"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("DOMINATOR5"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("DOMINATOR6"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("IMPALER"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("IMPALER2"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("IMPALER3"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("IMPALER4"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("IMPERATOR"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("IMPERATOR2"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("IMPERATOR3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("ISSI4"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("ISSI5"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("ISSI6"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("ITALIGTO"):
			*uParam2 = { -1f, -0.091f, 0.207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("MONSTER3"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("MONSTER4"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("MONSTER5"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("SCHLAGEN"):
			*uParam2 = { -1f, -0.105f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("SLAMVAN4"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("SLAMVAN5"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("SLAMVAN6"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("TOROS"):
			*uParam2 = { -1f, 0.415f, 0.394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("TULIP"):
			*uParam2 = { -1f, 0.171f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("VAMOS"):
			*uParam2 = { -1f, 0f, 0.163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("ZR380"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("ZR3802"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("ZR3803"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case -1349095620:
			*uParam2 = { -1f, 0.687f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case 686471183:
			*uParam2 = { -1.045f, 0.15f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case 310284501:
			*uParam2 = { -1f, 0.12f, 0.334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case 1323778901:
			*uParam2 = { -1f, 0.372f, 0.439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case 722226637:
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		case 1934384720:
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		case -362150785:
			*uParam2 = { -1f, 0.27f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case 1854776567:
			*uParam2 = { -1f, 0.195f, -0.063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case -208911803:
			*uParam2 = { -1f, 0.213f, 0.213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case -664141241:
			*uParam2 = { -1f, 0.576f, -0.123f };
			*uParam3 = { 0.997f, -0.105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("LOCUST"):
			*uParam2 = { -1f, -0.207f, 0.042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case -882629065:
			*uParam2 = { -1f, 0.012f, 0.147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case -1620126302:
			*uParam2 = { -1f, 0.216f, 0.216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case -1829436850:
			*uParam2 = { -1f, 0.24f, 0.255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case -447711397:
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case 1416466158:
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case -1804415708:
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case -324618589:
			*uParam2 = { -1f, 0.357f, 0.256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case 1044193113:
			*uParam2 = { -1f, 0.426f, 0.339f };
			*uParam3 = { 1f, 0.06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case 1862507111:
			*uParam2 = { -1f, 0.108f, 0.234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case -682108547:
			*uParam2 = { -1f, 0.273f, -0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("SLAMVAN2"):
			*uParam2 = { -1f, 0.35f, 0.456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case 83136452:
			*uParam2 = { 0f, 1.9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		case 1118611807:
			*uParam2 = { -1f, 0.104f, 0.339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case 987469656:
			*uParam2 = { -1f, 0.104f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case -834353991:
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case 1456336509:
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case 872704284:
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case 409049982:
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case 394110044:
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		case 1693751655:
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case 2031587082:
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case 960812448:
			*uParam2 = { -1f, 0.0965f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case -1756021720:
			*uParam2 = { 0f, 2.019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case -1132721664:
			*uParam2 = { -1.5f, 0.42f, -0.2f };
			*uParam3 = { 1f, -0.0997f, 0.0415f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case 1284356689:
			*uParam2 = { -1.202f, 0.034f, 0.6635f };
			*uParam3 = { 1f, -0.002f, 0f };
			*uParam4 = { 0f, -0.7398f, 0f };
			*uParam5 = 0.4f;
			break;
		case -2122646867:
			*uParam2 = { -1.5f, 0.379f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.24f;
			break;
		case 2134119907:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		case 1717532765:
			*uParam2 = { -1.76f, 0.105f, 0.009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.22f;
			break;
		case joaat("CLUB"):
			*uParam2 = { 0f, 1.252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		case -913589546:
			*uParam2 = { 0f, 2.135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.205f;
			break;
		case 1802742206:
			*uParam2 = { 0f, 2.352f, 0.3f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.135f;
			break;
		case 67753863:
			*uParam2 = { -1f, 0.252f, 0.203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.21f;
			break;
		case -1810806490:
			*uParam2 = { 0f, 1.654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		case -631322662:
			*uParam2 = { -1.08f, 0.28f, -0.093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case -838099166:
			*uParam2 = { -1.64f, 0.7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case -1728685474:
			*uParam2 = { -1f, -0.021f, 0.273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case -1358197432:
			*uParam2 = { -1f, 0.156f, 0.099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case 1107404867:
			*uParam2 = { -1.5f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	}
	return 1;
}

bool func_166(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_167()
{
	Global_1676268 = 0;
	Global_1676268.f_1 = { 0f, 0f, 0f };
	Global_1676268.f_4 = { 0f, 0f, 0f };
	Global_1676268.f_7 = { 0f, 0f, 0f };
	Global_1676268.f_10 = 0f;
	Global_1676268.f_11 = 0f;
	Global_1676268.f_12 = 0;
	Global_1676268.f_13 = 0;
	Global_1676268.f_14 = { 0f, 0f, 0f };
	Global_1676268.f_17 = { 0f, 0f, 0f };
	Global_1676268.f_20 = { 0f, 0f, 0f };
	Global_1676268.f_23 = 0;
	Global_1676268.f_24 = 0;
}

bool func_168(bool bParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(bParam0, false))
	{
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(bParam0, 0) || func_169(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_169(bool bParam0)
{
	int iVar0;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(bParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(bParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "MPBitset");
				return MISC::IS_BIT_SET(iVar0, 16);
			}
		}
	}
	return false;
}

bool func_170(bool bParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;

	if (NETWORK::NETWORK_IS_HANDLE_VALID(iParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(iParam1))
	{
		bVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
	}
	else
	{
		bVar0 = func_68();
	}
	bVar1 = false;
	if (bVar0 == PLAYER::PLAYER_ID())
	{
		if (func_181(15, 0))
		{
			bVar1 = true;
		}
		else if (func_177(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(ENTITY::DOES_ENTITY_EXIST(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bParam0)) || !NETWORK::_0x595F028698072DD9(0, -1, true)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(iParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(iParam1))) || bVar0 == func_68()) || !func_28(bVar0, 0, 0)) || !bVar1) || func_171(bParam0))
	{
		return false;
	}
	return true;
}

bool func_171(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return true;
	}
	if (func_173(PLAYER::PLAYER_ID()) == 3)
	{
		if (func_172(bParam0) != -1)
		{
			return true;
		}
	}
	if (Global_1676293)
	{
		return true;
	}
	switch (ENTITY::GET_ENTITY_MODEL(bParam0))
	{
		case joaat("SANCHEZ"):
		case joaat("SANCHEZ2"):
		case joaat("BLAZER"):
		case joaat("BLAZER3"):
		case joaat("SURFER"):
		case joaat("SURFER2"):
		case joaat("BIFTA"):
		case joaat("SOVEREIGN"):
		case joaat("HEXER"):
		case joaat("DUNE"):
		case joaat("DUNE2"):
		case joaat("DUNE4"):
		case joaat("DUNE5"):
		case joaat("INSURGENT"):
		case joaat("INSURGENT2"):
		case joaat("BLISTA3"):
		case joaat("STALION2"):
		case joaat("GAUNTLET2"):
		case joaat("DOMINATOR2"):
		case joaat("BUFFALO3"):
		case joaat("MASSACRO2"):
		case joaat("JESTER2"):
		case joaat("OMNIS"):
		case joaat("BF400"):
		case joaat("TROPOS"):
		case joaat("BRIOSO"):
		case joaat("TROPHYTRUCK"):
		case joaat("TROPHYTRUCK2"):
		case joaat("CLIFFHANGER"):
		case joaat("TAMPA2"):
		case joaat("GARGOYLE"):
		case joaat("DEATHBIKE"):
		case joaat("DEATHBIKE2"):
		case joaat("DEATHBIKE3"):
		case joaat("LE7B"):
		case joaat("TYRUS"):
		case joaat("LYNX"):
		case joaat("SHEAVA"):
		case joaat("CHIMERA"):
		case joaat("SANCTUS"):
		case joaat("BLAZER4"):
		case joaat("MANCHEZ"):
		case joaat("RAPTOR"):
		case joaat("BLAZER5"):
		case 301304410:
		case 340154634:
		case -1960756985:
		case -1254331310:
		case joaat("OUTLAW"):
		case 740289177:
		case 1492612435:
		case 1181339704:
			return true;
		case joaat("YOUGA"):
		case joaat("YOUGA2"):
			if (VEHICLE::GET_VEHICLE_MOD(bParam0, 7) != -1)
			{
				return true;
			}
			break;
		case joaat("SURANO"):
			if (VEHICLE::GET_VEHICLE_MOD(bParam0, 5) == 1)
			{
				return true;
			}
			break;
		case joaat("GP1"):
			return true;
		case joaat("APC"):
		case joaat("DUNE3"):
		case joaat("INSURGENT3"):
		case joaat("TRAILERLARGE"):
		case joaat("TRAILERSMALL2"):
		case joaat("PHANTOM3"):
		case joaat("HAULER2"):
			return true;
		case joaat("THRUSTER"):
			return true;
		case joaat("TERBYTE"):
			return true;
		case joaat("RCBANDITO"):
		case joaat("SCARAB"):
		case joaat("SCARAB2"):
		case joaat("SCARAB3"):
		case 916547552:
		case joaat("BLAZER2"):
		case joaat("BURRITO2"):
			return true;
		case joaat("CLUB"):
			if ((VEHICLE::GET_VEHICLE_MOD(bParam0, 7) == 0 || VEHICLE::GET_VEHICLE_MOD(bParam0, 7) == 1) || VEHICLE::GET_VEHICLE_MOD(bParam0, 7) == 7)
			{
				return true;
			}
			break;
		case 67753863:
			if ((VEHICLE::GET_VEHICLE_MOD(bParam0, 45) == 4 || VEHICLE::GET_VEHICLE_MOD(bParam0, 45) == 5) || VEHICLE::GET_VEHICLE_MOD(bParam0, 45) == 6)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_172(bool bParam0)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(bParam0, "FMDeliverableID"))
		{
			return DECORATOR::DECOR_GET_INT(bParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_173(bool bParam0)
{
	if (func_176(bParam0) == 233)
	{
		return func_174(bParam0);
	}
	return -1;
}

int func_174(bool bParam0)
{
	if (func_175(bParam0, 0))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

bool func_175(bool bParam0, bool bParam1)
{
	if (Global_1628237[bParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[bParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_176(bool bParam0)
{
	if (func_175(bParam0, 0))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_177(bool bParam0)
{
	return func_178(PLAYER::PLAYER_ID(), bParam0);
}

bool func_178(bool bParam0, bool bParam1)
{
	return func_179(bParam0, bParam1, 1);
}

int func_179(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (bParam0 == func_68())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_180(bParam0, iParam2))
		{
			return 0;
		}
	}
	bVar0 = Global_1628237[bParam0 /*615*/].f_11;
	if (bVar0 != func_68() && Global_1628237[bVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_180(bool bParam0, int iParam1)
{
	if (bParam0 != func_68())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_68())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 == bParam0 && Global_1628237[bParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_181(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return true;
		}
	}
	iVar0 = func_183(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_182(iVar1));
}

int func_182(int iParam0)
{
	return (iParam0 % 32);
}

int func_183(int iParam0)
{
	int iVar0;

	iVar0 = func_154(func_184(iParam0), -1, 0);
	return iVar0;
}

int func_184(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = func_185(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1290;
	}
	return 1290;
}

int func_185(int iParam0)
{
	return (iParam0 / 32);
}

void func_186(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_188(iParam1);
	func_187(iVar1, &iVar0);
	VEHICLE::_SET_VEHICLE_DASHBOARD_COLOR(bParam0, iVar0);
}

bool func_187(int iParam0, int iParam1)
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 4;
			break;
		case 1:
			*iParam1 = 5;
			break;
		case 2:
			*iParam1 = 6;
			break;
		case 3:
			*iParam1 = 7;
			break;
		case 4:
			*iParam1 = 111;
			break;
		case 5:
			*iParam1 = 112;
			break;
		case 6:
			*iParam1 = 107;
			break;
		case 7:
			*iParam1 = 104;
			break;
		case 8:
			*iParam1 = 98;
			break;
		case 9:
			*iParam1 = 100;
			break;
		case 10:
			*iParam1 = 102;
			break;
		case 11:
			*iParam1 = 99;
			break;
		case 12:
			*iParam1 = 105;
			break;
		case 13:
			*iParam1 = 106;
			break;
		case 14:
			*iParam1 = 37;
			break;
		case 15:
			*iParam1 = 90;
			break;
		case 16:
			*iParam1 = 88;
			break;
		case 17:
			*iParam1 = 89;
			break;
		case 18:
			*iParam1 = 91;
			break;
		case 19:
			*iParam1 = 38;
			break;
		case 20:
			*iParam1 = 138;
			break;
		case 21:
			*iParam1 = 36;
			break;
		case 22:
			*iParam1 = 27;
			break;
		case 23:
			*iParam1 = 28;
			break;
		case 24:
			*iParam1 = 29;
			break;
		case 25:
			*iParam1 = 150;
			break;
		case 26:
			*iParam1 = 30;
			break;
		case 27:
			*iParam1 = 31;
			break;
		case 28:
			*iParam1 = 32;
			break;
		case 29:
			*iParam1 = 35;
			break;
		case 30:
			*iParam1 = 135;
			break;
		case 31:
			*iParam1 = 137;
			break;
		case 32:
			*iParam1 = 136;
			break;
		case 33:
			*iParam1 = 71;
			break;
		case 34:
			*iParam1 = 145;
			break;
		case 35:
			*iParam1 = 63;
			break;
		case 36:
			*iParam1 = 64;
			break;
		case 37:
			*iParam1 = 65;
			break;
		case 38:
			*iParam1 = 66;
			break;
		case 39:
			*iParam1 = 67;
			break;
		case 40:
			*iParam1 = 68;
			break;
		case 41:
			*iParam1 = 69;
			break;
		case 42:
			*iParam1 = 73;
			break;
		case 43:
			*iParam1 = 70;
			break;
		case 44:
			*iParam1 = 74;
			break;
		case 45:
			*iParam1 = 51;
			break;
		case 46:
			*iParam1 = 53;
			break;
		case 47:
			*iParam1 = 54;
			break;
		case 48:
			*iParam1 = 92;
			break;
	}
	return *iParam1 != -1;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 36;
		case 2:
			return 35;
		case 3:
			return 46;
		case 4:
			return 48;
		case 5:
			return 16;
		case 6:
			return 14;
		case 7:
			return 19;
		case 8:
			return 22;
		case 9:
			return 31;
		case 10:
			return 30;
		case 11:
			return 33;
		case 12:
			return 34;
		default:
			break;
	}
	return 0;
}

int func_189(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_190()) && Global_1314033)
	{
		if ((iParam0 == Global_1314034 && iParam1 == Global_1314035) && iParam2 == Global_1314036)
		{
			return 13;
		}
	}
	return 0;
}

bool func_190()
{
	struct<13> Var0;

	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_191() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return true;
			}
		}
	}
	return false;
}

struct<13> func_191()
{
	struct<13> Var0;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

bool func_192(bool bParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(bParam0))
	{
		case joaat("DEATHBIKE2"):
			return true;
	}
	return false;
}

bool func_193(int iParam0, float fParam1)
{
	*fParam1 = -1f;
	switch (iParam0)
	{
		case joaat("DUNE5"):
			*fParam1 = 1f;
			break;
		case joaat("BOXVILLE5"):
			*fParam1 = 1f;
			break;
		case joaat("WASTELANDER"):
			*fParam1 = 1f;
			break;
		case joaat("ALPHAZ1"):
			*fParam1 = 0.2f;
			break;
		case joaat("BOMBUSHKA"):
			*fParam1 = 0.15f;
			break;
		case joaat("HOWARD"):
			*fParam1 = 0.3f;
			break;
		case joaat("HUNTER"):
			*fParam1 = 0.5f;
			break;
		case joaat("MICROLIGHT"):
			*fParam1 = 0.3f;
			break;
		case joaat("MOGUL"):
			*fParam1 = 0.4f;
			break;
		case joaat("MOLOTOK"):
			*fParam1 = 0.3f;
			break;
		case joaat("NOKOTA"):
			*fParam1 = 0.4f;
			break;
		case joaat("PYRO"):
			*fParam1 = 0.4f;
			break;
		case joaat("ROGUE"):
			*fParam1 = 0.4f;
			break;
		case joaat("SEABREEZE"):
			*fParam1 = 0.3f;
			break;
		case joaat("STARLING"):
			*fParam1 = 0.5f;
			break;
		case joaat("TULA"):
			*fParam1 = 0.15f;
			break;
		case joaat("KHANJALI"):
			*fParam1 = 0.6f;
			break;
		case joaat("BRUISER"):
			*fParam1 = 1f;
			break;
		case joaat("BRUISER2"):
			*fParam1 = 1f;
			break;
		case joaat("BRUISER3"):
			*fParam1 = 1f;
			break;
		case joaat("BRUTUS"):
			*fParam1 = 1f;
			break;
		case joaat("BRUTUS2"):
			*fParam1 = 1f;
			break;
		case joaat("BRUTUS3"):
			*fParam1 = 1f;
			break;
		case joaat("CERBERUS"):
			*fParam1 = 1f;
			break;
		case joaat("CERBERUS2"):
			*fParam1 = 1f;
			break;
		case joaat("CERBERUS3"):
			*fParam1 = 1f;
			break;
		case joaat("DEATHBIKE"):
			*fParam1 = 1f;
			break;
		case joaat("DEATHBIKE2"):
			*fParam1 = 1f;
			break;
		case joaat("DEATHBIKE3"):
			*fParam1 = 1f;
			break;
		case joaat("DOMINATOR4"):
			*fParam1 = 1f;
			break;
		case joaat("DOMINATOR5"):
			*fParam1 = 1f;
			break;
		case joaat("DOMINATOR6"):
			*fParam1 = 1f;
			break;
		case joaat("IMPALER2"):
			*fParam1 = 1f;
			break;
		case joaat("IMPALER3"):
			*fParam1 = 1f;
			break;
		case joaat("IMPALER4"):
			*fParam1 = 1f;
			break;
		case joaat("IMPERATOR"):
			*fParam1 = 1f;
			break;
		case joaat("IMPERATOR2"):
			*fParam1 = 1f;
			break;
		case joaat("IMPERATOR3"):
			*fParam1 = 1f;
			break;
		case joaat("ISSI4"):
			*fParam1 = 1f;
			break;
		case joaat("ISSI5"):
			*fParam1 = 1f;
			break;
		case joaat("ISSI6"):
			*fParam1 = 1f;
			break;
		case joaat("MONSTER3"):
			*fParam1 = 1f;
			break;
		case joaat("MONSTER4"):
			*fParam1 = 1f;
			break;
		case joaat("MONSTER5"):
			*fParam1 = 1f;
			break;
		case joaat("SCARAB"):
			*fParam1 = 1f;
			break;
		case joaat("SCARAB2"):
			*fParam1 = 1f;
			break;
		case joaat("SCARAB3"):
			*fParam1 = 1f;
			break;
		case joaat("SLAMVAN4"):
			*fParam1 = 1f;
			break;
		case joaat("SLAMVAN5"):
			*fParam1 = 1f;
			break;
		case joaat("SLAMVAN6"):
			*fParam1 = 1f;
			break;
		case joaat("ZR380"):
			*fParam1 = 1f;
			break;
		case joaat("ZR3802"):
			*fParam1 = 1f;
			break;
		case joaat("ZR3803"):
			*fParam1 = 1f;
			break;
	}
	return *fParam1 != -1f;
}

void func_194(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(bParam0, false))
	{
		if (!func_205(bParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(bParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(bParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("SOVEREIGN"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("CASCO"))
		{
			iVar0 = 1;
			if (MISC::IS_BIT_SET(uParam1->f_77, func_204(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_204(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("SANDKING") || uParam1->f_66 == joaat("SANDKING2"))
		{
			iVar1 = 1;
			if (MISC::IS_BIT_SET(uParam1->f_77, func_204(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_204(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (MISC::IS_BIT_SET(uParam1->f_77, func_204(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_204(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (MISC::IS_BIT_SET(uParam1->f_77, func_204(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_204(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == 1181339704)
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (MISC::IS_BIT_SET(uParam1->f_77, func_204(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_204(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == -1728685474)
		{
			if (VEHICLE::GET_VEHICLE_MOD(bParam0, 10) != 0)
			{
				MISC::SET_BIT(&(uParam1->f_77), 0);
			}
		}
		if (uParam1->f_66 == joaat("NIGHTSHARK"))
		{
			VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(bParam0, 0);
			if (VEHICLE::GET_VEHICLE_MOD(bParam0, 5) != -1)
			{
				VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(bParam0, 1);
			}
		}
		if (MISC::IS_BIT_SET(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(bParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(bParam0);
		}
		if (MISC::IS_BIT_SET(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(bParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(bParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			VEHICLE::SET_VEHICLE_COLOURS(bParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(bParam0, uParam1->f_7, uParam1->f_8);
		if (((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_203(bParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_202())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(bParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_201(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(bParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(bParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(bParam0, uParam1->f_65);
		}
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(bParam0, !MISC::IS_BIT_SET(uParam1->f_77, 9));
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(bParam0, uParam1->f_70);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(bParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(bParam0, 2, MISC::IS_BIT_SET(uParam1->f_77, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(bParam0, 3, MISC::IS_BIT_SET(uParam1->f_77, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(bParam0, 0, MISC::IS_BIT_SET(uParam1->f_77, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(bParam0, 1, MISC::IS_BIT_SET(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(bParam0, MISC::IS_BIT_SET(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(bParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(bParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(bParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(bParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_200(bParam0, uParam1->f_69);
					}
				}
				else
				{
					func_200(bParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(bParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(bParam0, true);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(bParam0, true);
			}
		}
		if (bParam3)
		{
			func_195(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (MISC::IS_BIT_SET(uParam1->f_77, func_204(iVar5 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(bParam0, iVar5 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(bParam0, iVar5 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(bParam0, iVar5 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(bParam0, iVar5 + 1, true);
				}
				iVar5++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(bParam0) == joaat("SHEAVA") || ENTITY::GET_ENTITY_MODEL(bParam0) == joaat("OMNIS")) || ENTITY::GET_ENTITY_MODEL(bParam0) == joaat("LE7B"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(bParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(bParam0, 1, false);
			}
		}
		if (((VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66) && VEHICLE::_DOES_VEHICLE_HAVE_LANDING_GEAR(bParam0)) && !VEHICLE::IS_VEHICLE_MODEL(bParam0, joaat("AVENGER"))) && !((((Global_4456448.f_75705 == 6 || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 18) || Global_4456448.f_75705 == 19) && Global_4456448.f_2 == 20))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_77, 23))
			{
				if (MISC::IS_BIT_SET(uParam1->f_77, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(bParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(bParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(bParam0, 4);
			}
		}
		if (MISC::IS_BIT_SET(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(bParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(bParam0, "IgnoredByQuickSave", false);
		}
	}
}

int func_195(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*bParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*bParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*bParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*bParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*bParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					VEHICLE::_SET_VEHICLE_XENON_LIGHTS_COLOR(*bParam0, 255);
				}
				else
				{
					VEHICLE::_SET_VEHICLE_XENON_LIGHTS_COLOR(*bParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*bParam0, iVar1, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*bParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*bParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*bParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*bParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*bParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_199(ENTITY::GET_ENTITY_MODEL(*bParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*bParam0, 24) != func_198(*bParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*bParam0, 24, func_198(*bParam0, ((*uParam1)[38] - 1)), false);
	}
	func_197(bParam0);
	if (func_196(*bParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*bParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*bParam0, true);
	}
	return 1;
}

bool func_196(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];

	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
					{
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_197(bool bParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(*bParam0))
	{
		case joaat("STARLING"):
			if (VEHICLE::GET_VEHICLE_MOD(*bParam0, 4) == 0)
			{
				VEHICLE::SET_VEHICLE_MOD(*bParam0, 13, 0, false);
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_MOD(*bParam0, 13);
			}
			break;
	}
}

int func_198(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("TORNADO5"):
				switch (iParam1)
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
					case 5:
						return 4;
				}
				break;
			case joaat("FACTION3"):
				return 3;
		}
		iVar0 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 38);
		iVar1 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

bool func_199(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FACTION2"):
		case joaat("BUCCANEER2"):
		case joaat("CHINO2"):
		case joaat("MOONBEAM2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
			return true;
		case joaat("SABREGT2"):
			if (!Global_262145.f_14219)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("TORNADO5"):
			if (!Global_262145.f_14220)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("VIRGO2"):
			if (!Global_262145.f_14218)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("MINIVAN2"):
			if (!Global_262145.f_14221)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("SLAMVAN3"):
			if (!Global_262145.f_14223)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("FACTION3"):
			if (!Global_262145.f_14222)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("SULTANRS"):
		case joaat("BANSHEE2"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("COMET3"):
			if (Global_262145.f_18669)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("DIABLOUS2"):
			if (Global_262145.f_18671)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("FCR2"):
			if (Global_262145.f_18675)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("ELEGY"):
			if (Global_262145.f_18672)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("NERO2"):
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("ITALIGTB2"):
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("SPECTER2"):
			if (Global_262145.f_18682)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("TECHNICAL3"):
			if (Global_262145.f_20625)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("INSURGENT3"):
			if (Global_262145.f_20626)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("SLAMVAN4"):
		case joaat("SLAMVAN5"):
		case joaat("SLAMVAN6"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("ISSI4"):
		case joaat("ISSI5"):
		case joaat("ISSI6"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("IMPALER2"):
		case joaat("IMPALER3"):
		case joaat("IMPALER4"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("DEATHBIKE"):
		case joaat("DEATHBIKE2"):
		case joaat("DEATHBIKE3"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("DOMINATOR4"):
		case joaat("DOMINATOR5"):
		case joaat("DOMINATOR6"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("BRUISER"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case 1717532765:
		case 1107404867:
		case -913589546:
			return true;
	}
	return false;
}

void func_200(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (VEHICLE::GET_NUM_MOD_KITS(bParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(bParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(bParam0, 24);
		bVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(bParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(bParam0, iParam1);
		if (ENTITY::GET_ENTITY_MODEL(bParam0) == joaat("TORNADO6") || ENTITY::GET_ENTITY_MODEL(bParam0) == -1804415708)
		{
			return;
		}
		if (iVar0 == -1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(bParam0, 24);
		}
		else
		{
			VEHICLE::SET_VEHICLE_MOD(bParam0, 24, iVar0, bVar1 == 1);
		}
	}
}

bool func_201(int iParam0)
{
	switch (iParam0)
	{
		case joaat("GRANGER"):
		case joaat("VISIONE"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_202()
{
	return DLC::IS_DLC_PRESENT(joaat("MPINDEPENDENCE"));
}

bool func_203(bool bParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(bParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(bParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "MPBitset");
				}
				return MISC::IS_BIT_SET(iVar0, 4);
			}
		}
	}
	return false;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 24;
		case 11:
			return 25;
		case 12:
			return 26;
	}
	return 0;
}

bool func_205(bool bParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!func_206(PLAYER::PLAYER_ID(), -1))
		{
			bParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0, false))
	{
		return false;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(bParam0, false))
	{
		return false;
	}
	if (func_173(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(bParam0, false))
		{
			if (func_172(bParam0) != -1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_206(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_28(bParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, false))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_207(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
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
			func_208(vParam2, fParam5, iParam1, iVar1);
			return true;
		}
	}
	return false;
}

void func_208(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (func_209(PLAYER::PLAYER_ID(), vParam0, iParam4) > -1)
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

int func_209(int iParam0, vector3 vParam1, int iParam4)
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

void func_210(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_227(&(Global_75441.f_555[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_75441.f_555[0 /*21*/], bParam4) <= fParam3)
			{
				func_211(iVar0);
			}
		}
		iVar0++;
	}
}

void func_211(int iParam0)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (func_227(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_75441.f_139[iParam0], false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_75441.f_139[iParam0], false))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_75441.f_139[iParam0], true, true);
				VEHICLE::DELETE_VEHICLE(&(Global_75441.f_139[iParam0]));
			}
		}
		Global_75441[iParam0] = 1;
		if (MISC::IS_BIT_SET(Global_75441.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_226(iParam0, 0)) && Global_76350.f_66 == 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] != 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] > 3) && (!func_215(0, Global_75441.f_555[0 /*21*/].f_12) || !func_215(1, Global_75441.f_555[0 /*21*/].f_12)))
			{
				func_214(&(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]), &Global_76350);
				Global_76428 = Global_111638.f_32744.f_5591;
			}
			func_212(iParam0, 0);
		}
	}
}

void func_212(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_226(iParam0, 0))
		{
			func_213(iParam0, 1, 0);
			func_213(iParam0, 2, 0);
			func_213(iParam0, 3, 0);
			func_213(iParam0, 4, 0);
			func_213(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_213(iParam0, 0, 0);
	}
}

void func_213(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_111638.f_32744[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_111638.f_32744[iParam0]), iParam1);
	}
}

void func_214(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

bool func_215(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_225(&(Global_111638.f_32744.f_5038[iVar0 /*157*/])))
	{
		return false;
	}
	return func_216(Global_111638.f_32744.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

bool func_216(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;

	if (iParam0 == 0)
	{
		return false;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return false;
	}
	if (((((iParam0 == joaat("DOMINATOR2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("BUFFALO3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("GAUNTLET2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("BLIMP2")) || (iParam0 == joaat("STALION2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_224())
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("BLIMP"))
	{
		if ((((!func_223() && !func_222()) && !func_221()) && !func_220()) && !func_224())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("CARBONRS")) || iParam0 == joaat("KHAMELION"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_221())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_219(iParam0))
		{
			return false;
		}
	}
	if (!func_217(iParam0))
	{
		return false;
	}
	return true;
}

bool func_217(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_218())
	{
		return true;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return true;
	}
	switch (iParam0)
	{
		case joaat("DUNE4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		case joaat("VOLTIC2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		case joaat("RUINER2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		case joaat("PHANTOM2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		case joaat("TECHNICAL2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		case joaat("BOXVILLE5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		case joaat("WASTELANDER"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		case joaat("BLAZER5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		default:
			return true;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return false;
	}
	return true;
}

bool func_218()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return false;
}

bool func_219(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_2513258)
	{
		return true;
	}
	iVar0 = 1;
	iVar1 = NETWORK::_0xF12E6CD06C73D69E();
	if (iParam0 == joaat("BTYPE3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("FACTION3"))
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIRGO3") || iParam0 == joaat("VIRGO2"))
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SABREGT2"))
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO5"))
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MINIVAN2"))
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SLAMVAN3"))
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("PROTOTIPO"))
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEVEN70"))
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PFISTER811"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("BF400"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BRIOSO"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIFFHANGER"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CONTENDER"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LE7B"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OMNIS"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPHYTRUCK"))
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPHYTRUCK2"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPOS"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GARGOYLE"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RALLYTRUCK"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAMPA2"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRUS"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHEAVA"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LYNX"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STALION2"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GAUNTLET2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR2"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BUFFALO3"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DEFILER"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTBLADE"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEA"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ESSKEY"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AVARUS"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEB"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAKUCHOU2"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VORTEX"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHOTARO"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHIMERA"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPTOR"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DAEMON2"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER4"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO6"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOUGA2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WOLFSBANE"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO3"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BAGGER"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SANCTUS"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MANCHEZ"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RATBIKE"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("VOLTIC2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUINER2"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE4"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE5"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PHANTOM2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TECHNICAL2"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOXVILLE5"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WASTELANDER"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER5"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET3"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY2"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR2"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB2"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PENETRATOR"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER2"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEMPESTA"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GP1"))
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("INFERNUS2"))
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUSTON"))
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TURISMO2"))
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("XA21"))
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEETAH2"))
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORERO"))
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAGNER"))
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ARDENT"))
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTSHARK"))
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MICROLIGHT"))
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOGUL"))
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ROGUE"))
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STARLING"))
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEABREEZE"))
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULA"))
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PYRO"))
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOLOTOK"))
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NOKOTA"))
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOMBUSHKA"))
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUNTER"))
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAVOK"))
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOWARD"))
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ALPHAZ1"))
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CYCLONE"))
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISIONE"))
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIGILANTE"))
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RETINUE"))
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPIDGT3"))
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DELUXO"))
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STROMBERG"))
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RIOT2"))
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHERNOBOG"))
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KHANJALI"))
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AKULA"))
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("THRUSTER"))
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BARRAGE"))
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VOLATOL"))
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET4"))
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NEON"))
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STREITER"))
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SENTINEL3"))
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOSEMITE"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SC1"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AUTARCH"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GT500"))
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUSTLER"))
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("REVOLTER"))
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PARIAH"))
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAIDEN"))
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SAVESTRA"))
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RIATA"))
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HERMES"))
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET5"))
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("Z190"))
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISERIS"))
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KAMACHO"))
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GB200"))
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGALOA"))
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELLIE"))
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ISSI3"))
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MICHELLI"))
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FLASHGT"))
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOTRING"))
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEZERACT"))
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRANT"))
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR3"))
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAIPAN"))
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ENTITY2"))
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("JESTER3"))
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEBUREK"))
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CARACARA"))
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEASPARROW"))
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("TERBYTE"))
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PBUS2"))
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MULE4"))
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("POUNDER2"))
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SWINGER"))
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MENACER"))
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SCRAMJET"))
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STRIKEFORCE"))
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OPPRESSOR2"))
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PATRIOT2"))
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STAFFORD"))
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FREECRAWLER"))
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLIMP3"))
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MONSTER3"))
	{
	}
	else if (iParam0 == joaat("CERBERUS"))
	{
	}
	else if (iParam0 == joaat("CERBERUS2"))
	{
	}
	else if (iParam0 == joaat("CERBERUS3"))
	{
	}
	else if (iParam0 == joaat("BRUTUS"))
	{
	}
	else if (iParam0 == joaat("BRUTUS2"))
	{
	}
	else if (iParam0 == joaat("BRUTUS3"))
	{
	}
	else if (iParam0 == joaat("SCARAB"))
	{
	}
	else if (iParam0 == joaat("SCARAB2"))
	{
	}
	else if (iParam0 == joaat("SCARAB3"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR2"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR3"))
	{
	}
	else if (iParam0 == joaat("ZR380"))
	{
	}
	else if (iParam0 == joaat("ZR3802"))
	{
	}
	else if (iParam0 == joaat("ZR3803"))
	{
	}
	else if (iParam0 == joaat("IMPALER"))
	{
	}
	else if (iParam0 == joaat("DEVESTE"))
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TOROS"))
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIQUE"))
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTO"))
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DEVIANT"))
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAMOS"))
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULIP"))
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SCHLAGEN"))
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RCBANDITO"))
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LOCUST"))
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OUTLAW"))
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FIRETRUK"))
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BURRITO2"))
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOXVILLE"))
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STOCKADE"))
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LGUARD"))
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER2"))
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLUB"))
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_220()
{
	return false;
}

bool func_221()
{
	return true;
}

bool func_222()
{
	return true;
}

bool func_223()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_224()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAVE_JUST_UPLOAD_LATER())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return true;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return true;
	}
	else if (Global_150472 == 3)
	{
		return false;
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return true;
		}
	}
	return false;
}

int func_225(var uParam0)
{
	return *uParam0;
}

bool func_226(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_111638.f_32744[iParam0], iParam1);
}

bool func_227(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_228(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_228(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_228(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_228(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_228(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_228(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_228(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_228(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_228(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("SCORCHER");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("SEASHARK");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("DUSTER");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("TAILGATER");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("PROPTRAILER");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("BJXL");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("VELUM");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("CARGOBOB3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TOWTRUCK");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TRASH");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("BARRACKS");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("FIRETRUK");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("VACCA");
			iVar0 = 1;
			break;
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("SURANO");
			iVar0 = 1;
			break;
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("TORNADO2");
			iVar0 = 1;
			break;
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("SUPERD");
			iVar0 = 1;
			break;
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("DINGHY");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("BFINJECTION");
			iVar0 = 1;
			break;
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_224())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_224())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("BLAZER3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("SUBMERSIBLE2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("DUKES2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("DUKES2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("DODO");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("DODO");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111638.f_32744.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("MILJET") || uParam0->f_4 == joaat("BESRA")) || uParam0->f_4 == joaat("LUXOR")) || uParam0->f_4 == joaat("SHAMAL")) || uParam0->f_4 == joaat("TITAN")) || uParam0->f_4 == joaat("LUXOR2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_166(Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_111638.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111638.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_166(Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_166(Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_228(int iParam0, int iParam1)
{
	struct<82> Var0;

	if (func_230(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_229(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_229(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("TAILGATER");
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = joaat("PREMIER");
			}
			switch (iVar0)
			{
				case joaat("TAILGATER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				case joaat("PREMIER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		case 2:
			iVar0 = joaat("BODHI2");
			switch (iVar0)
			{
				case joaat("BODHI2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("BUFFALO2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("BAGGER");
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = joaat("BAGGER");
			}
			else
			{
				iVar0 = joaat("BUFFALO2");
			}
			switch (iVar0)
			{
				case joaat("BAGGER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				case joaat("BUFFALO2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		default:
			break;
	}
}

bool func_230(int iParam0)
{
	return iParam0 < 3;
}

bool func_231(int iParam0)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (func_234(iParam0, &vVar4, &vVar1, &uVar0))
	{
		if (func_233(iParam0, vVar4, vVar1, uVar0))
		{
			Local_1270.f_155 = { vVar4 };
			Local_1270.f_161 = func_232(vVar4, vVar1);
			return true;
		}
	}
	return false;
}

float func_232(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

bool func_233(int iParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, var uParam7)
{
	float fVar0;

	if (!func_59(vParam1, 20f, 1f, 1f, 15f, 1, 1, 1, 200f, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return false;
	}
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam1, &fVar0, true, false))
	{
		if (vParam1.z < fVar0)
		{
			return false;
		}
	}
	else
	{
		fVar0 = PATHFIND::_GET_HEIGHTMAP_BOTTOM_Z_FOR_POSITION(vParam1.x, vParam1.y);
		if (vParam1.z < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_234(int iParam0, var uParam1, var uParam2, var uParam3)
{
	float fVar0;

	fVar0 = 200f;
	if (func_135(iParam0, 0))
	{
	}
	else
	{
		*uParam2 = { Local_218.f_95.f_1[iParam0 /*14*/].f_4 };
	}
	*uParam1 = { func_236(*uParam2, 0f, ((-1f * fVar0) * SYSTEM::SIN((SYSTEM::TO_FLOAT(Local_1270.f_148) * 30f))), (fVar0 * SYSTEM::COS((SYSTEM::TO_FLOAT(Local_1270.f_148) * 30f))), 0f) };
	uParam1->f_2 = (uParam1->f_2 + func_235());
	Local_1270.f_148++;
	if (Local_1270.f_148 >= 12)
	{
		Local_1270.f_148 = 0;
	}
	return true;
}

float func_235()
{
	return 60f;
}

Vector3 func_236(vector3 vParam0, float fParam3, struct<2> Param4, var uParam6)
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

bool func_237(int iParam0)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;

	if (func_239(iParam0, &vVar1, &vVar4, &fVar10, &uVar0))
	{
		if (MISC::FIND_SPAWN_POINT_IN_DIRECTION(vVar4, vVar1, fVar10, &vVar7))
		{
			if (func_238(iParam0, vVar7, vVar4, uVar0))
			{
				Local_1270.f_155 = { vVar7 };
				Local_1270.f_161 = func_232(vVar7, vVar4);
				return true;
			}
		}
	}
	return false;
}

bool func_238(int iParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (!func_59(vParam1, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */, 1084227584 /* Float: 5f */, 1, 1, 1, 1123024896 /* Float: 120f */, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return false;
	}
	return true;
}

bool func_239(int iParam0, var uParam1, var uParam2, float fParam3, var uParam4)
{
	if (func_135(iParam0, 0))
	{
	}
	else
	{
		*uParam1 = { Local_218.f_95.f_1[iParam0 /*14*/].f_4 };
		*uParam2 = { Local_218.f_95.f_1[iParam0 /*14*/].f_4 };
	}
	if (Local_1270.f_148 > 0)
	{
		func_240(uParam1);
	}
	if ((uParam1->f_2 >= 0f && uParam1->f_2 < 90f) || (uParam1->f_2 >= 270f && uParam1->f_2 < 360f))
	{
		*fParam3 = 160f;
	}
	else
	{
		*fParam3 = 80f;
	}
	return true;
}

void func_240(var uParam0)
{
	if (Local_1270.f_148 < 5)
	{
		switch (Local_1270.f_148)
		{
			case 1:
				*uParam0 = { *uParam0 + Vector(10f, 0f, 0f) };
				break;
			case 2:
				*uParam0 = { *uParam0 + Vector(20f, 0f, 0f) };
				break;
			case 3:
				*uParam0 = { *uParam0 - Vector(10f, 0f, 0f) };
				break;
			case 4:
				*uParam0 = { *uParam0 - Vector(20f, 0f, 0f) };
				break;
		}
		if (uParam0->f_2 > 360f)
		{
			uParam0->f_2 = (uParam0->f_2 - 360f);
		}
	}
	else
	{
		Local_1270.f_148 = 0;
	}
	Local_1270.f_148++;
}

bool func_241(int iParam0, int iParam1, int iParam2)
{
	struct<30> Var0;

	Stack.Push(iParam0);
	Call_Loc(Local_433.f_188.f_21);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	return func_242(Local_218.f_95.f_1[iParam0 /*14*/].f_4, Local_218.f_95.f_1[iParam0 /*14*/].f_4, Local_218.f_95.f_1[iParam0 /*14*/].f_3, 0, iParam1, iParam2, &Var0);
}

bool func_242(vector3 vParam0, vector3 vParam3, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<58> Var5;
	struct<58> Var64;

	bVar0 = false;
	if (uParam10->f_14)
	{
		if (uParam10->f_25)
		{
			uParam10->f_25 = 0;
		}
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE() == 5)
		{
			return false;
		}
	}
	if (Global_2405072.f_514)
	{
		Global_2405072.f_514 = 0;
		return false;
	}
	if (!func_362(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!Global_2405072.f_600 == 0 && NETWORK::IS_TIME_EQUAL_TO(NETWORK::_0xBA7F0B77D80A4EB7(), Global_2405072.f_605) < func_361(0))
	{
		if (!Global_2405072.f_670 == 0)
		{
			Global_2405072.f_670 = 0;
			func_360();
			func_359();
		}
		return false;
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_669)
	{
		if (!Global_2405072.f_670 == 0)
		{
			if (NETWORK::IS_TIME_EQUAL_TO(NETWORK::_0xBA7F0B77D80A4EB7(), Global_2405072.f_673) < func_361(0))
			{
				return false;
			}
			else
			{
				Global_2405072.f_670 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::IS_TIME_EQUAL_TO(NETWORK::_0xBA7F0B77D80A4EB7(), Global_2405072.f_671) > 30000)
		{
			Global_2405072.f_670 = 0;
		}
		if (!Global_2405072.f_670 == 0)
		{
			if (NETWORK::IS_TIME_EQUAL_TO(NETWORK::_0xBA7F0B77D80A4EB7(), Global_2405072.f_673) > func_361(1))
			{
				Global_2405072.f_670 = 0;
			}
		}
	}
	if (uParam10->f_6)
	{
		if (func_353(vParam0))
		{
			if (func_352(&vParam0, 1))
			{
			}
		}
	}
	if (!Global_2405072.f_670 == 0)
	{
		if (SYSTEM::VDIST(Global_2405072.f_688, vParam0) > 50f)
		{
			return false;
		}
	}
	PATHFIND::_0x07FB139B592FA687((vParam0.x - 100f), (vParam0.y - 100f), (vParam0.x + 100f), (vParam0.y + 100f));
	if (Global_2405072.f_670 == 0)
	{
		Global_2405072.f_675 = 0;
		Global_2405072.f_671 = NETWORK::GET_NETWORK_TIME();
		Global_2405072.f_669 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405072.f_673 = NETWORK::GET_NETWORK_TIME();
		Global_2405072.f_688 = { vParam0 };
		Global_2405072.f_674 = NETWORK::GET_NETWORK_TIME();
		Global_2405072.f_670 = 2;
		func_351();
		func_360();
		if (!uParam10->f_27 || (((((func_350(vParam0, 1, 1133903872 /* Float: 300f */) && !uParam10->f_28) && !Global_2537071.f_883) && !Global_2537071.f_872) && !Global_2537071.f_880) && !Global_2537071.f_884))
		{
			func_331(vParam0, iParam6);
		}
		if (func_316(vParam0))
		{
			func_331(vParam0, iParam6);
		}
	}
	switch (Global_2405072.f_670)
	{
		case 2:
			if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA((vParam0.x - 100f), (vParam0.y - 100f), (vParam0.x + 100f), (vParam0.y + 100f)))
			{
				Global_2405072.f_676 = { vParam0 };
				Global_2405072.f_679 = 0f;
				if (Global_2537071.f_883)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam10->f_3 && func_59(vParam0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896 /* Float: 120f */, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_7) && !func_314(vParam0, *iParam9, iParam6, PLAYER::PLAYER_ID(), 0))
				{
					Global_2405072.f_676 = { vParam0 };
					Global_2405072.f_679 = *iParam9;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("TAILGATER");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam7;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam10->f_5;
					Var5.f_4 = *uParam10;
					Var5.f_13 = uParam10->f_1;
					Var5.f_14 = uParam10->f_2;
					Var5.f_5 = uParam10->f_4;
					Var5.f_15 = uParam10->f_6;
					Var5.f_11 = uParam10->f_7;
					Var5.f_6 = uParam10->f_8;
					Var5.f_7 = uParam10->f_9;
					Var5.f_16 = uParam10->f_10;
					Var5.f_17 = uParam10->f_11;
					Var5 = { vParam3 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam6;
					Var5.f_31 = uParam10->f_13;
					Var5.f_30 = 1;
					Var5.f_48 = uParam10->f_14;
					Var5.f_56 = uParam10->f_25;
					Var5.f_57 = uParam10->f_26;
					Var5.f_49 = uParam10->f_29;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam10->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam10->f_22[iVar1];
						iVar1++;
					}
					func_262(&(Global_2405072.f_676), &(Global_2405072.f_679), &Var5);
				}
				func_260(Global_2405072.f_676, Global_2405072.f_679, iParam6, &(Global_2405072.f_667));
				Global_2405072.f_665 = 0;
				Global_2405072.f_666 = 0;
				Global_2405072.f_675++;
				Global_2405072.f_672 = NETWORK::GET_NETWORK_TIME();
				Global_2405072.f_671 = NETWORK::GET_NETWORK_TIME();
				Global_2405072.f_670 = 3;
			}
			break;
		case 3:
			if (Global_2405072.f_665)
			{
				if (Global_2405072.f_667 == Global_2405072.f_668)
				{
					if (Global_2405072.f_666)
					{
						if (uParam10->f_12 && !uParam10->f_11)
						{
							if (func_259(Global_2405072.f_676, Global_2405072.f_679, iParam6, 1, 1036831949 /* Float: 0.1f */))
							{
								Global_2405072.f_670 = 4;
								Global_2405072.f_692 = NETWORK::GET_NETWORK_TIME();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_257(Global_2405072.f_676, 0);
						func_256(-1);
					}
				}
				else
				{
					Global_2405072.f_665 = 0;
					Global_2405072.f_666 = 0;
				}
			}
			else if (NETWORK::IS_TIME_EQUAL_TO(NETWORK::_0xBA7F0B77D80A4EB7(), Global_2405072.f_672) > 3000)
			{
				func_256(-1);
			}
			break;
		case 4:
			if (uParam10->f_12 && !uParam10->f_11)
			{
				if (NETWORK::IS_TIME_EQUAL_TO(NETWORK::_0xBA7F0B77D80A4EB7(), Global_2405072.f_692) < 10000)
				{
					if (NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2405072.f_691))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2405072.f_691))
						{
							if (!NETWORK::_0x4DF7CFFF471A7FB1(Global_2405072.f_691))
							{
								if (func_255(Global_2405072.f_676, Global_2405072.f_679, iParam6, PLAYER::PLAYER_ID(), 0) || func_244(Global_2405072.f_676, Global_2405072.f_679, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_257(Global_2405072.f_676, 0);
									func_256(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_257(Global_2405072.f_676, 0);
								func_256(-1);
							}
						}
					}
					else
					{
						func_256(-1);
					}
				}
				else
				{
					func_256(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 5:
			Global_2405072.f_676 = { vParam0 };
			Global_2405072.f_679 = 0f;
			Var64.f_6 = 1082130432;
			Var64.f_7 = 1176255488;
			Var64.f_8 = 1;
			Var64.f_10 = 1;
			Var64.f_13 = 1;
			Var64.f_15 = 1;
			Var64.f_16 = 1;
			Var64.f_31 = 1;
			Var64.f_34 = joaat("TAILGATER");
			Var64.f_38 = 2;
			Var64.f_45 = 2;
			Var64.f_49 = 1123024896;
			Var64.f_53 = 999;
			Var64.f_54 = 1176256410;
			Var64.f_55 = 1;
			Var64.f_56 = 1;
			Var64.f_57 = 1;
			Var64.f_9 = iParam7;
			Var64.f_3 = 3.5f;
			Var64.f_10 = uParam10->f_5;
			Var64.f_4 = *uParam10;
			Var64.f_12 = 1;
			Var64.f_13 = 0;
			Var64.f_15 = uParam10->f_6;
			Var64.f_11 = uParam10->f_7;
			Var64.f_6 = uParam10->f_8;
			Var64.f_7 = uParam10->f_9;
			Var64 = { vParam3 };
			Var64.f_34 = iParam6;
			Var64.f_31 = uParam10->f_13;
			Var64.f_30 = 1;
			Var64.f_48 = uParam10->f_14;
			Var64.f_56 = uParam10->f_25;
			Var64.f_57 = uParam10->f_26;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var64.f_38[iVar1 /*3*/] = { uParam10->f_15[iVar1 /*3*/] };
				Var64.f_45[iVar1] = uParam10->f_22[iVar1];
				iVar1++;
			}
			Var64.f_49 = uParam10->f_29;
			func_262(&(Global_2405072.f_676), &(Global_2405072.f_679), &Var64);
			Global_2405072.f_670 = 6;
			break;
		case 6:
			bVar0 = true;
			break;
	}
	Global_2405072.f_688 = { vParam0 };
	Global_2405072.f_673 = NETWORK::GET_NETWORK_TIME();
	if (bVar0)
	{
		Global_2405072.f_513 = 0;
		*iParam8 = { Global_2405072.f_676 };
		*iParam9 = Global_2405072.f_679;
		func_243(1);
		return true;
	}
	return false;
}

void func_243(bool bParam0)
{
	Global_2405072.f_670 = 0;
	func_351();
	func_360();
	if (bParam0)
	{
		func_359();
	}
}

bool func_244(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar8;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam9 == 0)
		{
			if (func_28(bVar1, bParam5, bParam6))
			{
				if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_61(bVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && bParam10) && bParam7) && func_66(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar1), false))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar1), false);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
										fVar8 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_254(vParam0, iParam3, iParam4, vVar5, fVar8, iVar4, 0))
										{
											return true;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_245(func_63(bVar1), vParam0, iParam3, iParam4, fVar2))
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

bool func_245(vector3 vParam0, vector3 vParam3, int iParam6, int iParam7, int iParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (SYSTEM::VDIST(vParam0, vParam3) < func_253(iParam7, 1008981770 /* Float: 0.01f */))
	{
		func_246(vParam3, iParam6, iParam7, &vVar0, &vVar3, &fVar6, iParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar3, fVar6, false, true))
		{
			return true;
		}
	}
	return false;
}

void func_246(vector3 vParam0, float fParam3, int iParam4, var uParam5, int iParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;

	vVar0 = { 0f, 1f, 0f };
	func_252(&vVar0, 0f, 0f, fParam3);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_247(iParam4, &vVar3, &vVar6, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar9 = { vParam0 + vVar0 * FtoV((vVar6.y + fParam8)) };
	vVar9.f_2 = (vVar9.z - ((0.5f * MISC::ABSF((vVar6.z - vVar3.z))) + fParam8));
	vVar12 = { vParam0 - vVar0 * FtoV(((vVar3.y * -1f) + fParam8)) };
	vVar12.f_2 = (vVar12.z + ((0.5f * MISC::ABSF((vVar6.z - vVar3.z))) + fParam8));
	*uParam5 = { vVar9 };
	*iParam6 = { vVar12 };
	*fParam7 = MISC::ABSF((vVar6.x - vVar3.x));
}

void func_247(int iParam0, Vector3* vParam1, Vector3* vParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;

	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, vParam1, vParam2);
	}
	else
	{
		iVar0 = func_250(iParam0);
		if (iVar0 != 0)
		{
			func_248(iVar0, vParam1, vParam2, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
			return;
		}
	}
	if (SYSTEM::VMAG(*vParam1) <= 0.01f || SYSTEM::VMAG(*vParam2) <= 0.01f)
	{
		*vParam1 = (0f - (fParam4 * 0.5f));
		*vParam2 = (0f + (fParam4 * 0.5f));
		vParam1->f_1 = (0f - (fParam3 * 0.5f));
		vParam2->f_1 = (0f + (fParam3 * 0.5f));
		vParam1->f_2 = (0f - (fParam5 * 0.5f));
		vParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_248(int iParam0, Vector3* vParam1, Vector3* vParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;

	func_249(iParam0, &Global_1315812);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1315812[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1315812[iVar0], &(Global_1315816[iVar0 /*3*/]), &(Global_1315823[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315816[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315823[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315816[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315823[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315816[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315823[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315816[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315823[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315830[iVar0] = (Global_1315823[iVar0 /*3*/] - Global_1315816[iVar0 /*3*/]);
		Global_1315833[iVar0] = (Global_1315823[iVar0 /*3*/].f_1 - Global_1315816[iVar0 /*3*/].f_1);
		Global_1315836[iVar0] = (Global_1315823[iVar0 /*3*/].f_2 - Global_1315816[iVar0 /*3*/].f_2);
		if (Global_1315830[iVar0] > Global_1315839)
		{
			Global_1315839 = Global_1315830[iVar0];
		}
		if (Global_1315836[iVar0] > Global_1315840)
		{
			Global_1315840 = Global_1315836[iVar0];
		}
		iVar0++;
	}
	Global_1315841 = (Global_1315839 * -0.5f);
	Global_1315844 = (Global_1315839 * 0.5f);
	Global_1315841.f_1 = ((((0.5f * Global_1315833[0]) + Global_1315833[1]) + Global_1315812.f_3) * -1f);
	Global_1315844.f_1 = (0.5f * Global_1315833[0]);
	Global_1315841.f_2 = (Global_1315836[0] * -0.5f);
	Global_1315844.f_2 = (Global_1315836[0] * 0.5f);
	*vParam1 = { Global_1315841 };
	*vParam2 = { Global_1315844 };
}

void func_249(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("HAULER2");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		case 2:
			(*uParam1)[0] = joaat("PHANTOM3");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		case 3:
			(*uParam1)[0] = joaat("NIGHTSHARK");
			(*uParam1)[1] = joaat("TRAILERSMALL2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_250(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_251(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_251(int iParam0)
{
	int iVar0;

	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_252(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.f_1 = uParam0->f_1;
	vVar2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.f_2 = uParam0->f_2;
	*uParam0 = { vVar2 };
}

float func_253(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (iParam0 == 0)
	{
		return 5f;
	}
	func_247(iParam0, &vVar0, &vVar3, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar6 = { vVar3 - vVar0 };
	fVar9 = (SYSTEM::SQRT(((((vVar6.x * 0.5f) * (vVar6.x * 0.5f)) + ((vVar6.y * 0.5f) * (vVar6.y * 0.5f))) + ((vVar6.z * 0.5f) * (vVar6.z * 0.5f)))) + fParam1);
	return fVar9;
}

bool func_254(vector3 vParam0, float fParam3, int iParam4, vector3 vParam5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;

	if (func_245(vParam0, vParam5, fParam8, iParam9, 1036831949 /* Float: 0.1f */))
	{
		return true;
	}
	func_247(iParam4, &vVar14, &vVar17, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	vVar20 = { 0f, vVar17.y, 0f };
	func_252(&vVar20, 0f, 0f, fParam3);
	vVar23 = { 0f, vVar14.y, 0f };
	func_252(&vVar23, 0f, 0f, fParam3);
	vVar26 = { (MISC::ABSF((vVar17.x - vVar14.x)) * 0.5f), 0f, 0f };
	func_252(&vVar26, 0f, 0f, fParam3);
	vVar1[0 /*3*/] = { vParam0 + vVar20 + vVar26 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar17.z - vVar14.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar20 - vVar26 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar17.z - vVar14.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar23 + vVar26 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar17.z - vVar14.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar23 - vVar26 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar17.z - vVar14.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_245(vVar1[iVar0 /*3*/], vParam5, fParam8, iParam9, 1036831949 /* Float: 0.1f */))
		{
			return true;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_254(vParam5, fParam8, iParam9, vParam0, fParam3, iParam4, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_255(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam5 == bVar0 || iParam6 == 1)
		{
			bVar1 = bVar0;
			if (func_28(bVar1, 0, 1) && func_28(bParam5, 0, 1))
			{
				if (Global_2417897.f_261[bVar0])
				{
					if (func_245(Global_2417897.f_131[bVar0 /*3*/], vParam0, iParam3, iParam4, 1036831949 /* Float: 0.1f */))
					{
						return true;
					}
				}
				else if (func_245(func_63(bVar1), vParam0, iParam3, iParam4, 1036831949 /* Float: 0.1f */))
				{
					return true;
				}
			}
			else if (Global_2417897.f_261[bVar0])
			{
				if (func_245(Global_2417897.f_131[bVar0 /*3*/], vParam0, iParam3, iParam4, 1036831949 /* Float: 0.1f */))
				{
					return true;
				}
			}
			else if (func_28(bVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
				{
					if (func_245(func_63(bVar1), vParam0, iParam3, iParam4, 1036831949 /* Float: 0.1f */))
					{
						return true;
					}
				}
			}
		}
		bVar0++;
	}
	return false;
}

void func_256(int iParam0)
{
	if (Global_2405072.f_675 < 20 && NETWORK::IS_TIME_EQUAL_TO(NETWORK::_0xBA7F0B77D80A4EB7(), Global_2405072.f_674) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2405072.f_675 < iParam0))
		{
			Global_2405072.f_670 = 2;
		}
		else
		{
			Global_2405072.f_670 = 5;
		}
	}
	else
	{
		Global_2405072.f_670 = 5;
	}
}

void func_257(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (iParam3 == 0 && func_258(vParam0, 0.01f))
	{
		return;
	}
	if (iParam3 < 30 && SYSTEM::VMAG(vParam0) > 0f)
	{
		vVar0 = { Global_2405072.f_2728[iParam3 /*3*/] };
		Global_2405072.f_2728[iParam3 /*3*/] = { vParam0 };
		func_257(vVar0, iParam3 + 1);
	}
}

bool func_258(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_2405072.f_2728[iVar0 /*3*/]) < fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_259(vector3 vParam0, int iParam3, int iParam4, bool bParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	int iVar7;
	float fVar8;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return false;
	}
	else
	{
		func_360();
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_2405072.f_680[iVar7] == -1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_246(vParam0, iParam3, iParam4, &vVar0, &vVar3, &uVar6, fParam6);
				if (bParam5)
				{
					fVar8 = MISC::ABSF((vVar0.z - vVar3.z));
					vVar0.f_2 = (vVar0.z + ((fVar8 * 0.5f) - 2f));
					vVar3.f_2 = (vVar3.z + (fVar8 * 0.5f));
				}
				Global_2405072.f_680[iVar7] = NETWORK::NETWORK_ADD_ENTITY_DISPLAYED_BOUNDARIES(vVar0, vVar3, fParam6);
				Global_2405072.f_684[iVar7] = SCRIPT::GET_ID_OF_THIS_THREAD();
				Global_2405072.f_691 = Global_2405072.f_680[iVar7];
				return true;
			}
			iVar7++;
		}
	}
	return false;
}

void func_260(vector3 vParam0, var uParam3, int iParam4, var uParam5)
{
	struct<8> Var0;

	*uParam5 = func_261(&vParam0, &uParam3, &iParam4);
	Var0 = -1768581418;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { vParam0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	Var0.f_7 = *uParam5;
	SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_24(1, 1));
}

int func_261(var uParam0, var uParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;

	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam0), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_1), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_2), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam1), 64);
	StringIntConCat(&cVar0, *iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	return iVar16;
}

void func_262(var uParam0, var uParam1, Vector3* vParam2)
{
	int iVar0;

	iVar0 = 0;
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		while (func_311(uParam0, uParam1, vParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			vParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_263(uParam0, uParam1, vParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_263(var uParam0, var uParam1, Vector3* vParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	bool bVar5;
	var uVar6;
	int iVar7;
	bool bVar8;
	Vector3* vVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	vector3 vVar27;
	var uVar30;
	vector3 vVar31;
	float fVar34;
	bool bVar35;

	iVar0 = 0;
	if (!SYSTEM::VMAG(vParam2->f_35) > 0f)
	{
		vParam2->f_35 = { *uParam0 };
	}
	if (vParam2->f_15)
	{
		if (func_307(vParam2->f_35, uParam0, &(vParam2->f_38), &(vParam2->f_45), 1, 1))
		{
			vParam2->f_6 = 9999.9f;
			vParam2->f_7 = 9999.9f;
		}
	}
	if (vParam2->f_51)
	{
		vParam2->f_6 = 9999.9f;
	}
	if (vParam2->f_48)
	{
		if (func_302(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		vParam2->f_6 = 9999.9f;
		vParam2->f_7 = 9999.9f;
	}
	bVar5 = false;
	bVar10 = true;
	if (vParam2->f_11)
	{
		bVar5 += 2;
		bVar5++;
		bVar10 = false;
	}
	else if (vParam2->f_10 == 0 || (vParam2->f_33 > 0 && vParam2->f_16))
	{
		bVar5++;
		bVar10 = false;
	}
	bVar5 += 4;
	fVar13 = 3f;
	bVar14 = 5f;
	switch (vParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			bVar14 = 5f;
			break;
		case 1:
			fVar13 = 2.75f;
			bVar14 = 7.5f;
			break;
		default:
			fVar13 = 2.5f;
			bVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2412474.f_162 = 0;
	Global_2412474.f_163 = 0;
	Global_2412474.f_164 = -99;
	Global_2412474.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412474[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2412474.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_250(vParam2->f_34) != 0)
	{
		iVar17 = 3;
		vParam2->f_6 = 9999.9f;
		vParam2->f_7 = 9999.9f;
		vParam2->f_18 = 0;
	}
	while (true)
	{
		bVar8 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar17), &fVar4, &vVar9, bVar5, fVar13, bVar14);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(bVar8))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(bVar8, &vVar1);
			bVar12 = false;
			if (Global_2412474.f_164 == bVar8)
			{
				bVar12 = true;
			}
			Global_2412474.f_165 = { vVar1 };
			if (((vParam2->f_10 || vParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(bVar8)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(bVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar1, &uVar6, &iVar7);
				if (SYSTEM::VDIST(vVar1, vParam2->f_35) > vParam2->f_4)
				{
					if (!func_295(&vVar1, 0))
					{
						if ((vParam2->f_13 || iVar7 & 64 == 0) || vParam2->f_33 == 1)
						{
							if (vParam2->f_14 || iVar7 & 16 == 0)
							{
								if ((iVar7 & 128 == 0 && iVar7 & 256 == 0) && iVar7 & 512 == 0)
								{
									if (!func_292(vVar1))
									{
										vVar1 = { func_287(vVar1, &fVar4, vVar9, vParam2->f_9, *vParam2, bVar10, vParam2->f_11, vParam2->f_34, &bVar11, bVar12, 1, vParam2->f_51) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_286(vVar1, 5f))
											{
												if (vVar1.z >= (vParam2->f_35.f_2 - vParam2->f_7) || vParam2->f_33 >= 2)
												{
													if (vVar1.z <= (vParam2->f_35.f_2 + vParam2->f_6) || vParam2->f_33 >= 2)
													{
														if (func_282(vVar1, vParam2))
														{
															if ((vParam2->f_48 && !func_302(&vVar1, 0)) || vParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((vParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, vParam2->f_35, vParam2->f_35.f_1, 0f) < vParam2->f_5) || vParam2->f_5 <= 0f) || vParam2->f_33 >= 2)
																	{
																		if ((vParam2->f_12 && !func_281(vVar1, fVar4, vParam2->f_34, PLAYER::PLAYER_ID(), 0, vParam2->f_56)) || !vParam2->f_12)
																		{
																			if (!vParam2->f_15 || !func_307(vParam2->f_35, &vVar1, &(vParam2->f_38), &(vParam2->f_45), 0, 1))
																			{
																				if (vParam2->f_8)
																				{
																					iVar19 = vParam2->f_31;
																					iVar20 = 1;
																					iVar21 = 1;
																					bVar22 = vParam2->f_49;
																					if (!vParam2->f_55)
																					{
																						iVar19 = 0;
																						iVar20 = 0;
																						iVar21 = 0;
																						bVar22 = 1f;
																					}
																					else if (vParam2->f_17)
																					{
																						iVar19 = 0;
																						iVar20 = 0;
																						iVar21 = 0;
																						if (vParam2->f_33 == 1)
																						{
																							bVar22 = (bVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						iVar20 = 1;
																						iVar21 = 1;
																						if (vParam2->f_28)
																						{
																							if (vParam2->f_33 == 1)
																							{
																								bVar22 = (bVar22 * 0.375f);
																							}
																						}
																					}
																					bVar23 = false;
																					if (!func_280(vVar1, fVar4, vParam2->f_34))
																					{
																						if (vParam2->f_3 > 7f)
																						{
																							if (func_59(vVar1, 6f, 1f, 1f, 5f, iVar19, iVar20, iVar21, bVar22, vParam2->f_58, -1, 1, vParam2->f_3, 0, 0, 0, 0))
																							{
																								bVar23 = true;
																							}
																						}
																						else if (func_59(vVar1, 6f, 1f, 1f, 5f, iVar19, iVar20, iVar21, bVar22, vParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_244(vVar1, fVar4, vParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							bVar23 = true;
																						}
																					}
																					if (bVar23 || vParam2->f_33 >= 2)
																					{
																						if (((vParam2->f_29 || vParam2->f_30) || vParam2->f_52) || vParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (vParam2->f_52)
																							{
																								iVar24 = func_272(vVar1, vParam2->f_54, &fVar25);
																							}
																							if (!vParam2->f_52 || (vParam2->f_52 && iVar24 <= vParam2->f_53))
																							{
																								if (vParam2->f_52)
																								{
																									if (iVar24 < vParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412474.f_162)
																										{
																											Global_2412474[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2412474.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412474.f_162 = 0;
																										vParam2->f_53 = iVar24;
																									}
																								}
																								if (vParam2->f_30)
																								{
																									if (Global_2412474.f_162 == 0)
																									{
																										Global_2412474[0 /*3*/] = { vVar1 };
																										Global_2412474.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412474.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, vParam2->f_35) < SYSTEM::VDIST2(Global_2412474[iVar16 /*3*/], vParam2->f_35))
																												{
																													func_271(vVar1, fVar4, iVar16);
																													iVar16 = Global_2412474.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412474.f_162++;
																									if (Global_2412474.f_162 >= 5)
																									{
																										if ((vParam2->f_52 && vParam2->f_53 == 0) || vParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412474[Global_2412474.f_162 /*3*/] = { vVar1 };
																									Global_2412474.f_121[Global_2412474.f_162] = fVar4;
																									Global_2412474.f_162++;
																									if (func_282(vVar1, vParam2))
																									{
																										Global_2412474.f_163++;
																									}
																									if (Global_2412474.f_162 >= 10)
																									{
																										if ((vParam2->f_52 && vParam2->f_53 == 0) || vParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!vParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2412474.f_162 > 0 && ((vParam2->f_29 || vParam2->f_30) || vParam2->f_33 >= 2))
				{
					if (vParam2->f_30)
					{
						*uParam0 = { Global_2412474[0 /*3*/] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
						{
							func_269(0, vParam2);
						}
						iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2412474.f_162);
						if (vParam2->f_18 && vParam2->f_30)
						{
							iVar26 = 0;
						}
						vVar27 = { Global_2412474[0 /*3*/] };
						uVar30 = Global_2412474.f_121[0];
						Global_2412474[0 /*3*/] = { Global_2412474[iVar26 /*3*/] };
						Global_2412474.f_121[0] = Global_2412474.f_121[iVar26];
						Global_2412474[iVar26 /*3*/] = { vVar27 };
						Global_2412474.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2412474[0 /*3*/] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
				}
				else
				{
					vParam2->f_33++;
					if (vParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_268(iVar15, *uParam0, &iVar0, &vVar1, &fVar4, vParam2, bVar10, vVar9, bVar5, fVar13, bVar14, bVar11);
						vVar31 = { vVar1 };
						fVar34 = fVar4;
						if (!vParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_307(vParam2->f_35, &vVar31, &(vParam2->f_38), &(vParam2->f_45), bVar35, 1) || func_302(&vVar31, bVar35))
						{
							if (!vParam2->f_50)
							{
								vParam2->f_33 = 0;
								vParam2->f_50 = 1;
								*uParam0 = { vVar31 };
								*uParam1 = fVar34;
								vParam2->f_6 = 9999.9f;
								vParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { vVar31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { vVar31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			vParam2->f_33++;
			if (vParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_264(&Global_1312061, uParam0, uParam1, *uParam0);
				if (vParam2->f_11)
				{
					vParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412474.f_164 = bVar8;
	}
	return 0;
}

void func_264(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_265(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

bool func_265(vector3 vParam0, float fParam3, int iParam4, float fParam5, int iParam6)
{
	if (func_267(vParam0, fParam3, iParam4, fParam5, 0) || func_266(vParam0, iParam4, iParam6))
	{
		return true;
	}
	return false;
}

int func_266(vector3 vParam0, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam3 == bVar0 || iParam4 == 1)
		{
			bVar2 = bVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_245(vParam0, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949 /* Float: 0.1f */))
					{
						if (func_28(bVar2, 0, 1) && func_28(bParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		bVar0++;
	}
	return 0;
}

int func_267(vector3 vParam0, float fParam3, bool bParam4, int iParam5, bool bParam6)
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
				if (func_28(bVar1, 0, 1) && func_28(bParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(bParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_28(bVar1, 0, 1) && func_28(bParam4, 0, 1))
				{
					if (Global_2417897.f_261[bVar0])
					{
						if (SYSTEM::VDIST(Global_2417897.f_131[bVar0 /*3*/], vParam0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_63(bVar1), vParam0) < 1f)
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
				else if (func_28(bVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_63(bVar1), vParam0) < 1f)
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

void func_268(int iParam0, vector3 vParam1, int iParam4, Vector3* vParam5, bool bParam6, Vector3* vParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *iParam4, vParam5, bParam6, &fParam9, bParam10, bParam11, bParam12);
		*vParam5 = { func_287(*vParam5, bParam6, fParam9, vParam7->f_9, *vParam7, bParam8, vParam7->f_11, vParam7->f_34, &bParam13, 0, 0, vParam7->f_51) };
		if (!func_292(*vParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_269(int iParam0, Vector3* vParam1)
{
	if (!func_282(Global_2412474[iParam0 /*3*/], vParam1))
	{
		Global_2412474.f_162 = (Global_2412474.f_162 - 1);
		func_270(iParam0);
		if (Global_2412474.f_162 > Global_2412474.f_163)
		{
			func_269(iParam0, vParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_269(iParam0 + 1, vParam1);
	}
}

void func_270(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412474[iParam0 /*3*/] = { Global_2412474[iParam0 + 1 /*3*/] };
			Global_2412474.f_121[iParam0] = Global_2412474.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_271(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { Global_2412474[iParam4 /*3*/] };
	fVar3 = Global_2412474.f_121[iParam4];
	Global_2412474[iParam4 /*3*/] = { vParam0 };
	Global_2412474.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412474.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_271(vVar0, fVar3, iParam4 + 1);
		}
	}
}

int func_272(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	bool bVar5;
	float fVar6;
	float fVar7;

	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar5 = iVar0;
		if (func_273(bVar5))
		{
			vVar1 = { func_63(bVar5) };
			fVar7 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

bool func_273(bool bParam0)
{
	if (func_28(bParam0, 0, 1))
	{
		if (!func_278(bParam0))
		{
			if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID(), bParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_275(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_274(PLAYER::GET_PLAYER_TEAM(bParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return true;
						}
					}
					else
					{
						return true;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(bParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_275(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_66(bParam0))
						{
							return true;
						}
					}
					else
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_274(int iParam0, int iParam1, int iParam2)
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

bool func_275(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_276(bParam0))
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

bool func_276(bool bParam0)
{
	return func_277(bParam0);
}

bool func_277(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_13.f_1, 0);
}

bool func_278(bool bParam0)
{
	if (func_25(bParam0, 0))
	{
		return true;
	}
	if (func_279())
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

bool func_279()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_280(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_254(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return true;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_254(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_281(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_255(vParam0, iParam3, iParam4, iParam5, iParam6) || func_314(vParam0, iParam3, iParam4, iParam5, iParam7))
	{
		return true;
	}
	return false;
}

bool func_282(vector3 vParam0, Vector3* vParam3)
{
	if (vParam3->f_18)
	{
		switch (vParam3->f_26)
		{
			case 0:
				if (func_285(vParam0, vParam3->f_19, vParam3->f_25, 0, 0))
				{
					return true;
				}
				break;
			case 1:
				if (func_283(vParam0, vParam3->f_19, vParam3->f_22, 0, 0))
				{
					return true;
				}
				break;
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam3->f_19, vParam3->f_22, vParam3->f_25, false, true))
				{
					return true;
				}
				break;
		}
		return false;
	}
	return true;
}

bool func_283(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, bool bParam10)
{
	func_284(&vParam3, &vParam6);
	if (((!vParam0.x >= vParam3.x || !vParam0.y >= vParam3.y) || !vParam0.x <= vParam6.x) || !vParam0.y <= vParam6.y)
	{
		return false;
	}
	if (bParam9 && bParam10)
	{
		return true;
	}
	else if (bParam9)
	{
		if (vParam0.z >= vParam3.z)
		{
			return true;
		}
	}
	else if (bParam10)
	{
		if (vParam0.z <= vParam6.z)
		{
			return true;
		}
	}
	else if (vParam0.z >= vParam3.z && vParam0.z <= vParam6.z)
	{
		return true;
	}
	return false;
}

void func_284(bool bParam0, var uParam1)
{
	var uVar0;

	if (*bParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *bParam0;
		*bParam0 = uVar0;
	}
	if (bParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = bParam0->f_1;
		bParam0->f_1 = uVar0;
	}
	if (bParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = bParam0->f_2;
		bParam0->f_2 = uVar0;
	}
}

bool func_285(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		vParam0.f_2 = 0f;
		vParam3.f_2 = 0f;
		return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (vParam0.z > vParam3.z)
		{
			vParam0.f_2 = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (vParam0.z < vParam3.z)
		{
			vParam0.f_2 = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
}

bool func_286(vector3 vParam0, int iParam3)
{
	int iVar0;

	if (func_275(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4456448.f_91960 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_91960)
			{
				if (Global_4456448.f_91961[iVar0 /*107*/].f_7 != 0)
				{
					if (func_245(vParam0, Global_4456448.f_91961[iVar0 /*107*/], Global_4456448.f_91961[iVar0 /*107*/].f_6, Global_4456448.f_91961[iVar0 /*107*/].f_7, iParam3))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_78239 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_78239)
			{
				if (Global_4456448.f_78242[iVar0 /*266*/].f_15 != 0)
				{
					if (func_245(vParam0, Global_4456448.f_78242[iVar0 /*266*/], Global_4456448.f_78242[iVar0 /*266*/].f_3, Global_4456448.f_78242[iVar0 /*266*/].f_15, 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_124061 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_124061)
			{
				if (Global_4456448.f_124065[iVar0 /*325*/].f_12 != 0)
				{
					if (func_245(vParam0, Global_4456448.f_124065[iVar0 /*325*/], Global_4456448.f_124065[iVar0 /*325*/].f_3, Global_4456448.f_124065[iVar0 /*325*/].f_12, 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_268)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969031.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969031.f_233[iVar0], false))
				{
					if (func_245(vParam0, ENTITY::GET_ENTITY_COORDS(Global_969031.f_233[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_969031.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969031.f_233[iVar0]), 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_266)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969031.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969031.f_119[iVar0], false))
				{
					if (func_245(vParam0, ENTITY::GET_ENTITY_COORDS(Global_969031.f_119[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_969031.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969031.f_119[iVar0]), 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

Vector3 func_287(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, vector3 vParam6, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;

	if (bParam15)
	{
		if (SYSTEM::VMAG(vParam6) > 0f)
		{
			if (!func_290(vParam0, *bParam3, vParam6))
			{
				*bParam3 = (*bParam3 + 180f);
			}
		}
		return vParam0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vParam0, &uVar3, &iVar4);
	if (iVar4 & 1024 == 0 && !bParam10)
	{
		PATHFIND::GET_CLOSEST_ROAD(vParam0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, bParam9);
		if (iVar8 == iVar9)
		{
			*bParam12 = 1;
		}
		if (bParam14)
		{
			if (!iVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!iVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!iVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_289(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (bParam13 && *bParam12)
		{
			*bParam3 = (*bParam3 + 180f);
			if (*bParam3 > 360f)
			{
				*bParam3 = (*bParam3 + -360f);
			}
		}
		if (*bParam3 <= 90f || *bParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!iVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!iVar4 & 4 == 0 || !iVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!iVar4 & 32 == 0 && iVar4 & 4 == 0) && iVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !iVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				if (iVar4 & 8 != 0)
				{
					fVar14 = func_288(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_288(iParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam6) > 0f)
	{
		if (!func_290(vParam0, *bParam3, vParam6))
		{
			if (bParam5 || ((iVar4 & 1024 != 0 || vParam0.z == 0f) && bParam10))
			{
				*bParam3 = (*bParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, *bParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (PATHFIND::_GET_ROAD_SIDE_POINT_WITH_HEADING(vParam0, *bParam3, &vVar15))
		{
			vVar18 = { vVar15 - vParam0 };
			if (!iParam11 == 0)
			{
				vVar21 = { vVar18 / FtoV(SYSTEM::VMAG(vVar18)) };
				if (iVar4 & 8 != 0)
				{
					fVar14 = func_288(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_288(iParam11, 1.5f);
				}
				vVar21 = { vVar21 * FtoV((fVar14 * 0.5f)) };
				vVar18 = { vVar18 - vVar21 };
				vVar15 = { vParam0 + vVar18 };
			}
			vVar21 = { vVar0 - vVar15 };
			vVar0 = { vVar15 };
		}
	}
	return vVar0;
}

float func_288(int iParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;

	func_247(iParam0, &fVar0, &fVar3, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

bool func_289(vector3 vParam0)
{
	float fVar0;

	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, false, false))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return true;
		}
	}
	return false;
}

bool func_290(vector3 vParam0, float fParam3, vector3 vParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { 0f, 1f, 0f };
	func_252(&vVar0, 0f, 0f, fParam3);
	vVar3 = { vParam4 - vParam0 };
	if (func_291(vVar3, vVar0) >= 0f)
	{
		return true;
	}
	return false;
}

float func_291(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_292(vector3 vParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_294(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412181[iVar1])
	{
		if (func_293(vParam0, &(Global_2411478[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412181[8])
	{
		if (func_293(vParam0, &(Global_2411478[8 /*78*/][iVar0 /*7*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_293(vector3 vParam0, var uParam3)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
}

int func_294(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411469[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411469[1])
	{
		if (Param0 < Global_2411473[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411469[2])
	{
		if (Param0 < Global_2411473[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411473[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411473[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

bool func_295(var uParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar4;

	if (func_301(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_300(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949 /* Float: 0.1f */, 0, fVar4);
			if (func_296(vVar1, &uVar0) || func_301(vVar1))
			{
				vVar1 = { *uParam0 };
				func_300(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949 /* Float: 0.1f */, 1, fVar4);
			}
			*uParam0 = { vVar1 };
		}
	}
	return false;
}

bool func_296(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_299())
	{
		return false;
	}
	iVar1 = func_298();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405072.f_365[iVar0 /*12*/].f_9 == 1)
		{
			if (func_297(vParam0, &(Global_2405072.f_365[iVar0 /*12*/]), 1008981770 /* Float: 0.01f */, 0, 0))
			{
				*iParam3 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_297(vector3 vParam0, int iParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (iParam3->f_10)
	{
		case 0:
			return func_285(vParam0, *iParam3, ((iParam3->f_6 + fParam4) + (IntToFloat(Global_2405072.f_2726) * iParam3->f_8)), bParam5, bParam6);
		case 1:
			return func_283(vParam0, *iParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), iParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
		case 2:
			if (bParam5 && bParam6)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, false, false);
			}
			else if (bParam5)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, false, false) && !(vParam0.z < iParam3->f_2 && vParam0.z < iParam3->f_3.f_2))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else if (bParam6)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, false, false) && !(vParam0.z > iParam3->f_2 && vParam0.z > iParam3->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *iParam3, iParam3->f_3, iParam3->f_6, false, true);
			}
			break;
	}
	return false;
}

int func_298()
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

bool func_299()
{
	return Global_1676377.f_474;
}

void func_300(var uParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { *uParam0 - vParam1 };
	vVar0.f_2 = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_252(&vVar0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_252(&vVar0, 0f, 0f, fParam7);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		vVar3 = { vParam1 + vVar0 };
	}
	else
	{
		vVar3 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar3.x;
	uParam0->f_1 = vVar3.y;
}

bool func_301(vector3 vParam0)
{
	float fVar0;

	if (Global_2405072.f_590 > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_2405072.f_587);
		if (fVar0 < Global_2405072.f_590)
		{
			return true;
		}
	}
	return false;
}

bool func_302(var uParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (Global_2405072.f_26.f_18)
	{
		switch (Global_2405072.f_26.f_17)
		{
			case 0:
				if (func_285(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			case 1:
				if (func_283(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, false, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_303(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, Global_2405072.f_26.f_17, 1036831949 /* Float: 0.1f */, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_303(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, float fParam11, float fParam12)
{
	int iVar0;
	vector3 vVar1;

	switch (iParam10)
	{
		case 0:
			func_300(&vParam0, vParam3, fParam9, fParam11, fParam12, 0);
			break;
		case 1:
			func_306(&vParam0, vParam3, vParam6, fParam11, fParam12);
			break;
		case 2:
			func_304(&vParam0, vParam3, vParam6, fParam9, fParam11, fParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_285(vVar1, vParam3, fParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			case 1:
				if (!func_283(vVar1, vParam3, vParam6, 0, 0))
				{
					return vVar1;
				}
				break;
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, vParam3, vParam6, fParam9, false, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

void func_304(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8, bool bParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;

	vVar0 = { vParam4 - vParam1 };
	vVar0.f_2 = 0f;
	vVar3 = { *uParam0 - vParam1 };
	vVar3.f_2 = 0f;
	vVar6 = { func_305(0f, 0f, 1f, vVar0) };
	vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
	fVar9 = (SYSTEM::VMAG(vVar3) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar0.x, vVar0.y, vVar3.x, vVar3.y)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_291(vVar6, vVar3) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_291(vVar6, vVar3) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar10 = { *uParam0 + vVar6 };
		fVar16 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam4.x, vParam4.y, 0f);
		vVar17 = { vParam1 + vParam4 / Vector(2f, 2f, 2f) };
		vVar17.f_2 = 0f;
		vVar6 = { func_305(0f, 0f, 1f, vVar0) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		vVar6 = { vVar6 * FtoV((fParam7 * 0.5f)) };
		vVar20 = { vVar17 - vVar6 };
		vVar23 = { vVar17 + vVar6 };
		vVar26 = { vVar23 - vVar20 };
		vVar26.f_2 = 0f;
		vVar29 = { *uParam0 - vVar20 };
		vVar29.f_2 = 0f;
		vVar6 = { func_305(0f, 0f, 1f, vVar26) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		fVar9 = (SYSTEM::VMAG(vVar29) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar26.x, vVar26.y, vVar29.x, vVar29.y)));
		if (!bParam9)
		{
			if (func_291(vVar6, vVar29) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_291(vVar6, vVar29) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar13 = { *uParam0 + vVar6 };
		if (SYSTEM::VDIST(vVar10, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vVar13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar10 };
		}
		else
		{
			*uParam0 = { vVar13 };
		}
	}
}

Vector3 func_305(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

void func_306(var uParam0, struct<2> Param1, float fParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;

	vVar0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1);
	fVar4 = (*uParam0 - Param4);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	vVar0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				vVar0.x = (Param1 - fParam7);
			}
			else
			{
				vVar0.x = (Param4 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			vVar0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			vVar0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			vVar0.x = (Param4 + fParam7);
		}
		else
		{
			vVar0.x = (Param1 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		vVar0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		vVar0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { vVar0 };
}

bool func_307(vector3 vParam0, var uParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;

	if (func_353(vParam0))
	{
		if (func_310(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return true;
		}
	}
	if (func_308(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return true;
	}
	if (bParam7)
	{
		if (func_258(*uParam3, 1056964608 /* Float: 0.5f */))
		{
			return true;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *bParam4)
	{
		if (SYSTEM::VDIST(*uParam3, *(bParam4[iVar0 /*3*/])) < (*iParam5)[iVar0])
		{
			if (bParam6)
			{
				func_300(uParam3, *(bParam4[iVar0 /*3*/]), (*iParam5)[iVar0], 1036831949 /* Float: 0.1f */, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return true;
	}
	return false;
}

bool func_308(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;

	if (func_296(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_309(&vVar2, &(Global_2405072.f_365[iVar0 /*12*/]), 1036831949 /* Float: 0.1f */, 0, bParam2);
			if (func_296(vVar2, &uVar1) || func_301(vVar2))
			{
				vVar2 = { *uParam0 };
				func_309(&vVar2, &(Global_2405072.f_365[iVar0 /*12*/]), 1036831949 /* Float: 0.1f */, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return true;
	}
	return false;
}

void func_309(var uParam0, var uParam1, float fParam2, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_303(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), 0, fParam2, fParam3) };
				break;
			case 1:
				*uParam0 = { func_303(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, fParam3) };
				break;
			case 2:
				*uParam0 = { func_303(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, fParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_300(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), fParam2, fParam3, 0);
				break;
			case 1:
				func_306(uParam0, *uParam1, uParam1->f_3, fParam2, fParam3);
				break;
			case 2:
				func_304(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, fParam3);
				break;
		}
	}
}

bool func_310(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409984[iVar0 /*17*/].f_16))
			{
				if (func_297(*uParam0, &(Global_2409984[iVar0 /*17*/]), 1008981770 /* Float: 0.01f */, iParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409984[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409984[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_309(&vVar1, &(Global_2409984[iVar0 /*17*/]), 1036831949 /* Float: 0.1f */, 0, bParam3);
							if (func_310(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_309(&vVar1, &(Global_2409984[iVar0 /*17*/]), 1036831949 /* Float: 0.1f */, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_311(var uParam0, var uParam1, Vector3* vParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	float fVar13;
	int iVar14;
	vector3 vVar15;
	var uVar18;

	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(vParam2->f_35) > 0f)
		{
			vParam2->f_35 = { *uParam0 };
		}
		if (vParam2->f_15)
		{
			if (func_307(vParam2->f_35, uParam0, &(vParam2->f_38), &(vParam2->f_45), 1, 1))
			{
				vParam2->f_6 = 9999.9f;
				vParam2->f_7 = 9999.9f;
			}
		}
		if (vParam2->f_48)
		{
			if (func_302(uParam0, 1))
			{
				vParam2->f_6 = 9999.9f;
				vParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			vParam2->f_6 = 9999.9f;
			vParam2->f_7 = 9999.9f;
		}
		Global_2412474.f_162 = 0;
		Global_2412474.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2412474[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2412474.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_312(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_1746)
		{
			iVar1 = Global_2405072.f_2152[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405072.f_1747[iVar1 /*4*/] };
				fVar5 = Global_2405072.f_1747[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((vParam2->f_57 && SYSTEM::VDIST(vVar2, vParam2->f_35) > vParam2->f_4) || vParam2->f_57 == 0)
					{
						if ((vParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, vParam2->f_35, vParam2->f_35.f_1, 0f) < vParam2->f_5) || vParam2->f_5 <= 0f)
						{
							if ((vParam2->f_12 && !func_281(vVar2, fVar5, vParam2->f_34, PLAYER::PLAYER_ID(), 0, vParam2->f_56)) || !vParam2->f_12)
							{
								if (!vParam2->f_15 || !func_307(vParam2->f_35, &vVar2, &(vParam2->f_38), &(vParam2->f_45), 0, 1))
								{
									if (vParam2->f_8)
									{
										iVar7 = vParam2->f_31;
										iVar8 = 1;
										iVar9 = 1;
										bVar10 = vParam2->f_49;
										if (!vParam2->f_55)
										{
											iVar7 = 0;
											iVar8 = 0;
											iVar9 = 0;
											bVar10 = 1f;
										}
										else if (vParam2->f_17)
										{
											iVar7 = 0;
											iVar8 = 0;
											iVar9 = 0;
											if (vParam2->f_33 == 1)
											{
												bVar10 = (bVar10 * 0.375f);
											}
										}
										else
										{
											iVar8 = 1;
											iVar9 = 1;
											if (vParam2->f_28)
											{
												if (vParam2->f_33 == 1)
												{
													bVar10 = (bVar10 * 0.375f);
												}
											}
										}
										bVar11 = false;
										if (!func_280(vVar2, fVar5, vParam2->f_34))
										{
											if (vParam2->f_3 > 7f)
											{
												if (func_59(vVar2, 6f, 1f, 1f, 5f, iVar7, iVar8, iVar9, bVar10, vParam2->f_58, -1, 1, vParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_59(vVar2, 6f, 1f, 1f, 5f, iVar7, iVar8, iVar9, bVar10, vParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_244(vVar2, fVar5, vParam2->f_34, 1, 1, 0, 0, vParam2->f_58, 0))
											{
												bVar11 = true;
											}
										}
										if (bVar11)
										{
											if ((vParam2->f_29 || vParam2->f_30) || vParam2->f_52)
											{
												fVar13 = 0f;
												if (vParam2->f_52)
												{
													iVar12 = func_272(vVar2, vParam2->f_54, &fVar13);
												}
												if (!vParam2->f_52 || (vParam2->f_52 && iVar12 <= vParam2->f_53))
												{
													if (vParam2->f_52)
													{
														if (iVar12 < vParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2412474.f_162)
															{
																Global_2412474[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2412474.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2412474.f_162 = 0;
															vParam2->f_53 = iVar12;
														}
													}
													if (vParam2->f_30)
													{
														if (Global_2412474.f_162 == 0)
														{
															Global_2412474[0 /*3*/] = { vVar2 };
															Global_2412474.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2412474.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (SYSTEM::VDIST2(vVar2, vParam2->f_35) < SYSTEM::VDIST2(Global_2412474[iVar6 /*3*/], vParam2->f_35))
																	{
																		func_271(vVar2, fVar5, iVar6);
																		iVar6 = Global_2412474.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 5)
														{
															if ((vParam2->f_52 && vParam2->f_53 == 0) || vParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
													else
													{
														Global_2412474[Global_2412474.f_162 /*3*/] = { vVar2 };
														Global_2412474.f_121[Global_2412474.f_162] = fVar5;
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 10)
														{
															if ((vParam2->f_52 && vParam2->f_53 == 0) || vParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar5;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar5;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2412474.f_162 > 0)
		{
			if (vParam2->f_30)
			{
				*uParam0 = { Global_2412474[0 /*3*/] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
				{
					func_269(0, vParam2);
				}
				iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2412474.f_162);
				vVar15 = { Global_2412474[0 /*3*/] };
				uVar18 = Global_2412474.f_121[0];
				Global_2412474[0 /*3*/] = { Global_2412474[iVar14 /*3*/] };
				Global_2412474.f_121[0] = Global_2412474.f_121[iVar14];
				Global_2412474[iVar14 /*3*/] = { vVar15 };
				Global_2412474.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2412474[0 /*3*/] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
		}
		else
		{
			vParam2->f_33++;
			if (vParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_312(vector3 vParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = -1f;
	while (iVar2 < Global_2405072.f_1746)
	{
		iVar1 = func_313(vParam0, fVar0, &fVar0);
		Global_2405072.f_2152[iVar2] = iVar1;
		iVar2++;
	}
}

int func_313(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405072.f_1746)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_2405072.f_1747[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

bool func_314(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (!bParam5 == bVar0 || iParam6 == 1)
		{
			bVar2 = bVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_315(vParam0, iParam4, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_254(vParam0, iParam3, iParam4, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417897.f_461[bVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_28(bVar2, 0, 1) && func_28(bParam5, 0, 1))
						{
							return true;
						}
						else
						{
							return true;
						}
					}
				}
				iVar1++;
			}
		}
		bVar0++;
	}
	return false;
}

bool func_315(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_253(iParam3, 1008981770 /* Float: 0.01f */);
	fVar1 = func_253(iParam7, 1008981770 /* Float: 0.01f */);
	fVar2 = SYSTEM::VDIST(vParam0, vParam4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return true;
	}
	return false;
}

bool func_316(vector3 vParam0)
{
	var uVar0;

	if (Global_2537071.f_883 && func_317(vParam0, &uVar0))
	{
		return true;
	}
	return false;
}

bool func_317(vector3 vParam0, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	*uParam3 = -1;
	iVar2 = func_330(vParam0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_318(iVar1))
			{
				if (func_330(Global_1676377.f_488[iVar0 /*3*/], 0) == iVar2)
				{
					*uParam3 = iVar0 + 1000;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_318(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_329(iParam0);
	if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_264 == iVar0)
	{
		return true;
	}
	iVar1 = Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11;
	if (iVar1 != func_68())
	{
		if (Global_1590535[iVar1 /*876*/].f_274.f_264 == iVar0)
		{
			return true;
		}
	}
	if (Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_310.f_5 == iParam0)
	{
		return true;
	}
	if (func_328(PLAYER::PLAYER_ID(), 0) || (func_325(PLAYER::PLAYER_ID()) && func_323(func_324(PLAYER::PLAYER_ID())) == 12))
	{
		return true;
	}
	if (func_322(PLAYER::PLAYER_ID()) || (func_325(PLAYER::PLAYER_ID()) && func_323(func_324(PLAYER::PLAYER_ID())) == 8))
	{
		return true;
	}
	if (func_321(PLAYER::PLAYER_ID()) || (func_325(PLAYER::PLAYER_ID()) && func_323(func_324(PLAYER::PLAYER_ID())) == 5))
	{
		return true;
	}
	if (func_320(PLAYER::PLAYER_ID()) || (func_325(PLAYER::PLAYER_ID()) && func_323(func_324(PLAYER::PLAYER_ID())) == 10))
	{
		return true;
	}
	if (func_319(PLAYER::PLAYER_ID()) || (func_325(PLAYER::PLAYER_ID()) && func_323(func_324(PLAYER::PLAYER_ID())) == 6))
	{
		return true;
	}
	return false;
}

bool func_319(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[bParam0 /*421*/].f_310.f_5) == 6;
			}
		}
	}
	return false;
}

bool func_320(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[bParam0 /*421*/].f_310.f_5) == 10;
			}
		}
	}
	return false;
}

bool func_321(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_68())
			{
				return func_323(Global_2425662[bParam0 /*421*/].f_310.f_5) == 5;
			}
		}
	}
	return false;
}

bool func_322(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_68())
			{
				return func_323(Global_2425662[bParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return false;
}

int func_323(int iParam0)
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

int func_324(bool bParam0)
{
	if (bParam0 != func_68() && func_28(bParam0, 1, 1))
	{
		return Global_2425662[bParam0 /*421*/].f_310.f_14;
	}
	return -1;
}

bool func_325(bool bParam0)
{
	if (bParam0 != func_68() && func_28(bParam0, 1, 1))
	{
		if (func_327(bParam0) && !func_326(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_326(bool bParam0)
{
	if (bParam0 != func_68() && func_28(bParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[bParam0 /*421*/].f_310, 4);
	}
	return false;
}

bool func_327(bool bParam0)
{
	if (bParam0 != func_68() && func_28(bParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[bParam0 /*421*/].f_310, 3);
	}
	return false;
}

bool func_328(bool bParam0, bool bParam1)
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
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_68())
			{
				return func_323(Global_2425662[bParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return false;
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
		case 84:
			return 2;
		case 85:
			return 3;
		case 86:
			return 4;
		case 87:
			return 5;
	}
	return 0;
}

int func_330(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0 /*17*/].f_9 == 1 || iParam3 == 0)
		{
			if (func_297(vParam0, &(Global_2409984[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_331(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6[3];

	if (Global_2405072.f_45.f_316)
	{
		return;
	}
	if (!func_349())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_348(vParam0);
		if (iVar1 > -1)
		{
			func_359();
			switch (iVar1)
			{
				case 0:
					func_347(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_347(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_347(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_347(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_347(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_347(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_347(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_347(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_347(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				case 1:
					func_347(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_347(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_347(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_347(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				case 2:
					func_347(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_347(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_347(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_347(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				case 3:
					func_347(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_347(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_347(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_347(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				case 4:
					func_347(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_347(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_347(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_347(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				case 5:
					func_347(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_347(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_347(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_347(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				case 6:
					func_347(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_347(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_347(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_347(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				case 7:
					func_347(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_347(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_347(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_347(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				case 8:
					func_347(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_347(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_347(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_347(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				case 9:
					func_347(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_347(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_347(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_347(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_347(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_347(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_347(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_347(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_347(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_347(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_347(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_347(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				case 10:
					func_345(78);
					break;
				case 11:
					func_345(79);
					break;
				case 12:
					func_345(82);
					break;
				case 13:
					func_345(81);
					break;
				case 14:
					func_345(73);
					break;
				case 15:
					func_347(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_347(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_347(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_347(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				case 16:
					func_345(75);
					break;
				case 17:
					func_345(76);
					break;
				case 18:
					func_345(77);
					break;
				case 19:
					func_347(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_347(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_347(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_347(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				case 20:
					func_345(80);
					break;
				case 21:
				case 25:
					func_345(87);
					break;
				case 22:
				case 26:
					func_345(88);
					break;
				case 23:
				case 27:
					func_345(89);
					break;
				case 24:
				case 28:
					func_345(90);
					break;
				case 29:
				case 30:
					if (func_344(iParam3))
					{
						func_345(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_28);
					}
					break;
				case 31:
					func_347(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_347(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_347(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_347(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_347(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_347(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_347(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_347(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_347(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_347(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_347(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_347(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_347(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_347(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_347(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_347(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_347(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_347(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_347(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_347(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_347(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_347(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_347(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_347(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_347(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_347(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_347(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_347(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_347(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_347(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_347(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_347(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_347(-194.254f, -2018.756f, 26.62f, 75f);
					func_347(-186.956f, -2031.369f, 26.62f, 338f);
					func_347(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_347(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_347(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_347(-233.372f, -2089.601f, 26.62f, 304f);
					func_347(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_347(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_347(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_347(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_347(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_347(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_347(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_347(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_347(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_347(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_347(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_347(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_347(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_347(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_347(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_347(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_341(vParam0, &iVar2, &iVar6) || (func_317(vParam0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))))
		{
			func_359();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar6[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2405072.f_513 = 1;
				}
				if (!iVar6[iVar0] && func_340(iVar2[iVar0], -1))
				{
					if (func_344(iParam3))
					{
						func_345(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_339(PLAYER::PLAYER_PED_ID()) || func_338(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))
					{
						if (func_337(iParam3))
						{
							func_336(iVar2[iVar0]);
						}
						else if (func_335(iParam3))
						{
							func_334(iVar2[iVar0]);
							func_336(iVar2[iVar0]);
						}
						else
						{
							func_334(iVar2[iVar0]);
							func_336(iVar2[iVar0]);
						}
					}
					else
					{
						func_332(iVar2[iVar0], iParam3);
					}
				}
				else
				{
					func_345(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_332(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_347(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_347(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_347(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_347(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_347(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_347(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_347(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_347(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		case 26:
			func_347(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_347(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_347(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_347(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_347(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_347(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_347(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_347(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		case 24:
			func_347(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_347(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_347(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_347(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_347(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_347(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_347(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_347(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		case 25:
			func_347(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_347(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_347(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_347(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_347(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_347(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_347(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_347(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		case 22:
			func_347(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_347(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_347(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_347(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_347(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_347(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_347(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_347(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		case 28:
			func_347(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_347(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_347(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_347(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_347(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_347(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_347(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_347(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		case 31:
			func_347(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_347(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_347(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_347(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_347(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_347(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_347(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_347(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		case 29:
			func_347(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_347(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_347(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_347(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_347(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_347(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_347(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_347(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		case 30:
			func_347(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_347(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_347(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_347(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_347(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_347(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_347(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_347(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		case 27:
			func_347(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_347(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_347(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_347(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_347(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_347(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_347(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_347(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		case 33:
			func_347(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_347(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_347(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_347(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_347(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_347(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_347(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_347(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		case 36:
			func_347(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_347(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_347(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_347(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_347(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_347(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_347(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_347(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		case 34:
			func_347(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_347(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_347(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_347(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_347(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_347(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_347(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_347(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		case 35:
			func_347(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_347(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_347(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_347(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_347(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_347(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_347(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_347(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		case 32:
			func_347(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_347(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_347(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_347(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_347(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_347(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_347(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_347(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		case 38:
			func_347(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_347(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_347(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_347(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_347(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_347(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_347(142.7427f, -2536.147f, 5f, 205.0002f);
			func_347(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		case 41:
			func_347(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_347(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_347(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_347(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_347(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_347(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_347(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_347(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		case 39:
			func_347(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_347(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_347(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_347(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_347(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_347(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_347(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_347(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		case 40:
			func_347(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_347(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_347(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_347(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_347(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_347(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_347(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_347(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		case 37:
			func_347(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_347(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_347(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_347(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_347(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_347(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_347(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_347(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		case 83:
			func_347(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_347(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_347(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_347(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_347(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_347(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_347(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_347(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_347(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_347(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_347(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_347(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_347(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_347(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_347(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_347(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_347(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_347(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_347(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_347(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_347(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_347(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		case 84:
			func_347(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_347(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_347(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_347(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_347(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_347(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_347(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_347(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_347(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_347(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_347(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_347(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_347(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_347(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_347(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_347(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_347(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_347(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_347(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_347(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_347(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_347(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		case 85:
			func_347(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_347(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_347(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_347(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_347(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_347(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_347(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_347(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_347(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_347(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_347(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_347(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_347(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_347(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_347(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_347(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_347(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_347(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_347(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_347(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_347(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_347(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		case 86:
			func_347(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_347(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_347(-1823.414f, 3092.762f, 31.843f, 330f);
			func_347(-1819.045f, 3100.435f, 31.845f, 330f);
			func_347(-1833.313f, 3075.722f, 31.838f, 330f);
			func_347(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_347(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_347(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_347(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_347(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_347(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_347(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_347(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_347(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_347(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_347(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_347(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_347(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_347(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_347(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_347(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_347(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		case 87:
			func_347(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_347(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_347(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_347(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_347(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_347(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_347(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_347(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_347(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_347(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_347(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_347(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_347(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_347(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_347(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_347(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_347(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_347(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_347(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_347(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_347(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_347(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		case 89:
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_58 == 0)
			{
				func_347(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_347(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_347(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_347(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_347(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_347(1231.279f, 2910.881f, 43.3085f, 12f);
				func_347(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_347(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_347(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_347(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_347(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_347(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_347(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_347(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_347(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_347(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_347(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_347(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_347(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_347(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_347(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_347(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_347(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_347(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_347(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_347(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_347(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_347(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_347(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_347(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_347(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_347(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_347(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_347(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_347(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_347(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_347(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_347(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		case 90:
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_58 == 0)
			{
				func_347(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_347(3.855f, 2672.388f, 78.437f, 319.2f);
				func_347(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_347(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_347(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_347(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_347(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_347(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_347(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_347(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_347(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_347(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_347(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_347(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_347(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_347(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_347(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_347(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_347(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_347(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_347(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_347(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_347(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_347(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_347(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_347(102.851f, 2688.009f, 51.732f, 224f);
				func_347(109.815f, 2681.012f, 51.112f, 224f);
				func_347(116.355f, 2674.26f, 50.529f, 224f);
				func_347(125.138f, 2665.98f, 49.8f, 224f);
				func_347(132.228f, 2659.865f, 49.26f, 228.4f);
				func_347(139.354f, 2653.536f, 48.737f, 228.4f);
				func_347(88.512f, 2702.995f, 53.042f, 224.199f);
				func_347(81.565f, 2710.357f, 53.67f, 224.199f);
				func_347(75.156f, 2716.981f, 54.223f, 224.199f);
				func_347(68.442f, 2723.806f, 54.775f, 226.199f);
				func_347(61.449f, 2730.606f, 55.308f, 226.199f);
				func_347(53.702f, 2738.167f, 55.855f, 226.199f);
				func_347(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		case 91:
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_58 == 0)
			{
				func_347(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_347(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_347(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_347(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_347(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_347(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_347(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_347(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_347(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_347(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_347(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_347(2714.633f, 3918.283f, 42.938f, 16f);
				func_347(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_347(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_347(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_347(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_347(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_347(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_347(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_347(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_347(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_347(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_347(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_347(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_347(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_347(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_347(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_347(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_347(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_347(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_347(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_347(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_347(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_347(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_347(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_347(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_347(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_347(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		case 92:
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_58 == 0)
			{
				func_347(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_347(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_347(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_347(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_347(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_347(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_347(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_347(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_347(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_347(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_347(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_347(3374.923f, 5520.177f, 20.3207f, 86f);
				func_347(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_347(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_347(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_347(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_347(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_347(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_347(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_347(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_347(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_347(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_347(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_347(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_347(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_347(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_347(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_347(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_347(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_347(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_347(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_347(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_347(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_347(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_347(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_347(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_347(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_347(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		case 93:
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_58 == 0)
			{
				func_347(43.848f, 6845.657f, 13.379f, 247.2f);
				func_347(50.379f, 6861.146f, 15.105f, 247.2f);
				func_347(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_347(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_347(55.806f, 6875.081f, 14.824f, 247.2f);
				func_347(11.616f, 6877.079f, 11.466f, 247.2f);
				func_347(18.954f, 6891.633f, 11.37f, 247.2f);
				func_347(26.68f, 6907.587f, 11.869f, 247.2f);
				func_347(7.479f, 6907.895f, 12.024f, 247.2f);
				func_347(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_347(35.591f, 6836.608f, 13.288f, 274.4f);
				func_347(36.028f, 6830.135f, 13.801f, 270.8f);
				func_347(35.114f, 6823.884f, 14.527f, 260.8f);
				func_347(48.779f, 6838.693f, 14.337f, 273.6f);
				func_347(56.738f, 6821.8f, 15.244f, 244.8f);
				func_347(48.377f, 6825.895f, 14.656f, 249.8f);
				func_347(49.11f, 6831.439f, 13.991f, 274.8f);
				func_347(53.544f, 6818.275f, 16.342f, 243f);
				func_347(46.162f, 6821.945f, 15.483f, 249.8f);
				func_347(60.129f, 6836.8f, 15.605f, 269.6f);
				func_347(40.88f, 6802.952f, 20.113f, 242.6f);
				func_347(48.203f, 6799.134f, 20.897f, 244.4f);
				func_347(70.449f, 6809.271f, 16.846f, 243f);
				func_347(61.436f, 6814.266f, 16.71f, 244.2f);
				func_347(56.142f, 6793.458f, 19.806f, 242.6f);
				func_347(65.759f, 6791.12f, 18.433f, 276.4f);
				func_347(77.305f, 6805.391f, 18.558f, 245.6f);
				func_347(85.893f, 6800.243f, 18.535f, 249.8f);
				func_347(56.85f, 6780.582f, 18.822f, 297.999f);
				func_347(65.636f, 6784.669f, 18.789f, 293.799f);
				func_347(74.121f, 6788.498f, 18.739f, 293.799f);
				func_347(97.779f, 6796.32f, 19.02f, 276.799f);
				func_347(106.76f, 6796.983f, 18.914f, 272.599f);
				func_347(112.387f, 6802.858f, 18.994f, 210.599f);
				func_347(117.58f, 6802.644f, 18.663f, 209.399f);
				func_347(122.481f, 6802.693f, 18.468f, 209.399f);
				func_347(127.182f, 6802.686f, 18.218f, 209.399f);
				func_347(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		case 94:
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_58 == 0)
			{
				func_347(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_347(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_347(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_347(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_347(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_347(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_347(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_347(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_347(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_347(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_347(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_347(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_347(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_347(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_347(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_347(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_347(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_347(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_347(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_347(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_347(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_347(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_347(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_347(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_347(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_347(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_347(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_347(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_347(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_347(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_347(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_347(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_347(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_347(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_347(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_347(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_347(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_347(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		case 95:
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_58 == 0)
			{
				func_347(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_347(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_347(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_347(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_347(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_347(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_347(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_347(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_347(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_347(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_347(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_347(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_347(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_347(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_347(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_347(30.027f, 3292.351f, 38.604f, 140.199f);
				func_347(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_347(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_347(23.897f, 3283.152f, 39.381f, 145.399f);
				func_347(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_347(18.723f, 3274.025f, 40.054f, 155.799f);
				func_347(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_347(36.958f, 3298.847f, 38.001f, 127.799f);
				func_347(54.165f, 3311.582f, 36.517f, 303.799f);
				func_347(61.607f, 3317.105f, 35.916f, 306.999f);
				func_347(68.994f, 3323.129f, 35.364f, 308.199f);
				func_347(76.266f, 3329.467f, 34.805f, 311.399f);
				func_347(82.757f, 3335.915f, 34.344f, 316.598f);
				func_347(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_347(14.664f, 3263.688f, 40.931f, 160.398f);
				func_347(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_347(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_347(89.575f, 3343.311f, 33.932f, 318.398f);
				func_347(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_347(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_347(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_347(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_347(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		case 96:
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_58 == 0)
			{
				func_347(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_347(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_347(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_347(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_347(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_347(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_347(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_347(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_347(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_347(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_347(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_347(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_347(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_347(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_347(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_347(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_347(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_347(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_347(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_347(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_347(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_347(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_347(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_347(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_347(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_347(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_347(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_347(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_347(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_347(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_347(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_347(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_347(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_347(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_347(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_347(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_347(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_347(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		case 97:
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_58 == 0)
			{
				func_347(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_347(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_347(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_347(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_347(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_347(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_347(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_347(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_347(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_347(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_347(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_347(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_347(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_347(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_347(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_347(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_347(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_347(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_347(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_347(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_347(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_347(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_347(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_347(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_347(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_347(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_347(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_347(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_347(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_347(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_347(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_347(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_347(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_347(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_347(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_347(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_347(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_347(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		case 123:
		case 124:
		case 125:
			func_333(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_333(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_333(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_333(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_333(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_333(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_333(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_333(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_333(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_333(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_333(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_333(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_333(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_333(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_333(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_333(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_333(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_333(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_333(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_333(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_333(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_333(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_333(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_333(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_333(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_333(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_333(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_333(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_333(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_333(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_333(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_333(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		default:
			break;
	}
}

void func_333(vector3 vParam0, float fParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;

	if (!iParam4 == 0)
	{
		func_247(iParam4, &Var0, &Var3, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
		fVar6 = (Var3.f_1 - Var0.f_1);
		if (bParam5)
		{
			fVar6 = (fVar6 * -1f);
		}
		fVar6 = (fVar6 * 0.5f);
		vVar7 = { 0f, fVar6, 0f };
		vVar10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam3, vVar7) };
		func_347(vVar10, fParam3);
	}
	else
	{
		func_347(vParam0, fParam3);
	}
}

void func_334(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_347(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_347(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_347(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_347(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_347(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_347(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_347(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_347(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_347(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_347(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_347(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_347(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_347(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_347(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_347(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_347(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_347(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_347(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_347(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_347(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_347(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_347(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_347(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_347(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_347(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_347(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_347(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_347(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_347(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_347(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_347(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_347(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_347(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_347(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_347(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_347(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_347(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_347(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_347(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_347(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_347(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_347(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_347(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_347(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_347(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_347(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		case 84:
			func_347(-1356.991f, -3242.228f, 12.945f, 330f);
			func_347(-1369.313f, -3234.758f, 12.945f, 330f);
			func_347(-1381.751f, -3227.408f, 12.945f, 330f);
			func_347(-1394.302f, -3220.021f, 12.945f, 330f);
			func_347(-1354.339f, -3223.129f, 12.945f, 330f);
			func_347(-1366.302f, -3215.809f, 12.945f, 330f);
			func_347(-1378.492f, -3208.645f, 12.945f, 330f);
			func_347(-1350.322f, -3203.405f, 12.945f, 330f);
			func_347(-1362.684f, -3196.451f, 12.945f, 330f);
			func_347(-1347.089f, -3182.69f, 12.945f, 330f);
			func_347(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_347(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_347(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_347(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_347(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_347(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_347(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_347(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_347(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_347(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_347(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_347(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_347(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_347(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_347(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_347(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_347(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_347(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_347(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_347(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_347(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_347(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_347(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_347(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_347(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_347(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_347(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_347(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_347(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_347(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_347(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_347(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_347(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_347(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_347(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_347(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		case 85:
			func_347(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_347(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_347(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_347(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_347(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_347(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_347(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_347(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_347(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_347(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_347(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_347(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_347(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_347(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_347(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_347(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_347(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_347(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_347(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_347(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_347(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_347(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_347(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_347(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_347(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_347(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_347(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_347(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_347(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_347(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_347(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_347(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_347(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_347(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_347(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_347(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_347(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_347(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_347(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_347(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_347(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_347(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_347(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_347(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_347(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_347(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		case 86:
			func_347(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_347(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_347(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_347(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_347(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_347(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_347(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_347(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_347(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_347(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_347(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_347(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_347(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_347(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_347(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_347(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_347(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_347(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_347(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_347(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_347(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_347(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_347(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_347(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_347(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_347(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_347(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_347(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_347(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_347(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_347(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_347(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_347(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_347(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_347(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_347(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_347(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_347(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_347(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_347(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_347(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_347(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_347(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_347(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_347(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_347(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		case 87:
			func_347(-2484.323f, 3249.294f, 31.828f, 151f);
			func_347(-2495.313f, 3255.746f, 31.828f, 151f);
			func_347(-2472.644f, 3242.684f, 31.828f, 151f);
			func_347(-2506.313f, 3262.27f, 31.823f, 151f);
			func_347(-2461.494f, 3235.93f, 31.828f, 151f);
			func_347(-2505.602f, 3238.049f, 31.828f, 151f);
			func_347(-2481.937f, 3224.8f, 31.828f, 151f);
			func_347(-2516.813f, 3244.266f, 31.823f, 151f);
			func_347(-2470.03f, 3217.899f, 31.828f, 151f);
			func_347(-2493.933f, 3231.308f, 31.828f, 151f);
			func_347(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_347(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_347(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_347(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_347(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_347(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_347(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_347(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_347(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_347(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_347(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_347(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_347(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_347(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_347(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_347(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_347(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_347(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_347(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_347(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_347(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_347(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_347(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_347(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_347(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_347(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_347(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_347(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_347(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_347(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_347(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_347(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_347(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_347(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_347(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_347(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		default:
			break;
	}
}

bool func_335(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MICROLIGHT"):
		case joaat("HAVOK"):
		case joaat("SEABREEZE"):
		case joaat("ROGUE"):
		case joaat("PYRO"):
		case joaat("BUZZARD"):
		case joaat("FROGGER"):
		case joaat("MAVERICK"):
		case joaat("SUPERVOLITO"):
		case joaat("SUPERVOLITO2"):
		case joaat("VOLATUS"):
		case joaat("CUBAN800"):
		case joaat("BESRA"):
		case joaat("DUSTER"):
		case joaat("STUNT"):
		case joaat("VELUM"):
		case joaat("VELUM2"):
		case joaat("VESTRA"):
		case joaat("LAZER"):
		case joaat("ALPHAZ1"):
		case joaat("HOWARD"):
		case joaat("MOLOTOK"):
		case joaat("NOKOTA"):
		case joaat("STARLING"):
			return true;
		default:
			break;
	}
	return false;
}

void func_336(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_347(-947.712f, -3367.704f, 12.944f, 60f);
			func_347(-904.692f, -3293.072f, 12.944f, 60f);
			func_347(-863.71f, -3221.978f, 12.944f, 60f);
			func_347(-966.418f, -3162.773f, 12.944f, 60f);
			func_347(-1007.435f, -3233.93f, 12.944f, 60f);
			func_347(-1050.455f, -3308.559f, 12.944f, 60f);
			func_347(-1145.673f, -3253.456f, 12.944f, 60f);
			func_347(-1098.386f, -3181.428f, 12.944f, 60f);
			func_347(-1060.474f, -3108.903f, 12.944f, 60f);
			func_347(-1155.391f, -3053.632f, 12.944f, 60f);
			func_347(-1196.114f, -3125.146f, 12.948f, 60f);
			func_347(-1235.552f, -3201.86f, 12.944f, 60f);
			func_347(-1344.446f, -3139.177f, 12.944f, 60f);
			func_347(-1301.308f, -3064.341f, 12.944f, 60f);
			func_347(-1260.135f, -2992.912f, 12.944f, 60f);
			func_347(-1364.244f, -2932.9f, 12.98f, 60f);
			func_347(-1405.284f, -3004.108f, 12.96f, 60f);
			func_347(-1448.29f, -3078.72f, 12.95f, 60f);
			func_347(-1535.732f, -3028.318f, 12.945f, 60f);
			func_347(-1492.639f, -2953.558f, 12.945f, 60f);
			func_347(-1451.506f, -2882.2f, 12.944f, 60f);
			func_347(-1553.927f, -2823.12f, 13.002f, 60f);
			func_347(-1595.097f, -2894.571f, 12.944f, 60f);
			func_347(-1637.836f, -2968.714f, 12.945f, 60f);
			func_347(-1740.971f, -2911.484f, 12.944f, 330f);
			func_347(-1696.293f, -2833.978f, 12.944f, 330f);
			func_347(-1651.502f, -2756.273f, 12.945f, 330f);
			func_347(-1588.258f, -2647.575f, 12.944f, 330f);
			func_347(-1536.862f, -2681.378f, 12.945f, 330f);
			func_347(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		case 85:
		case 86:
		case 87:
			func_347(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_347(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_347(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_347(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_347(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_347(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_347(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_347(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_347(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_347(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_347(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_347(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_347(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_347(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_347(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_347(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_347(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_347(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_347(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_347(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_347(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_347(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_347(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_347(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_347(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_347(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_347(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_347(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_347(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_347(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		default:
			break;
	}
}

bool func_337(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HYDRA"):
		case joaat("DODO"):
		case joaat("MAMMATUS"):
		case joaat("ANNIHILATOR"):
		case joaat("TULA"):
		case joaat("HUNTER"):
		case joaat("MOGUL"):
		case joaat("CARGOBOB"):
		case joaat("CARGOBOB2"):
		case joaat("SHAMAL"):
		case joaat("SAVAGE"):
		case joaat("LUXOR"):
		case joaat("LUXOR2"):
		case joaat("NIMBUS"):
		case joaat("SWIFT"):
		case joaat("SWIFT2"):
		case joaat("VALKYRIE"):
		case joaat("TITAN"):
		case joaat("SKYLIFT"):
		case joaat("MILJET"):
		case joaat("BOMBUSHKA"):
		case joaat("VOLATOL"):
			return true;
		default:
			break;
	}
	return false;
}

int func_338(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_339(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

bool func_340(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return true;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	return false;
}

bool func_341(struct<2> Param0, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 126)
	{
		if (iVar2 < *iParam3)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1049922[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1049922[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*iParam3)[iVar2] = iVar0;
					(*iParam4)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 146)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_318(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_342(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		if (iVar2 < *iParam3)
		{
			fVar4 = SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1676377.f_488[iVar0 /*3*/], Global_1676377.f_488[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3)
			{
				(*iParam3)[iVar2] = iVar0;
				(*iParam4)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return true;
	}
	return false;
}

bool func_342(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_343(iParam0);
	if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_271 == iVar0)
	{
		return true;
	}
	iVar1 = Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11;
	if (iVar1 != func_68())
	{
		if (Global_1590535[iVar1 /*876*/].f_274.f_271 == iVar0)
		{
			return true;
		}
	}
	if (Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_310.f_5 == iParam0)
	{
		return true;
	}
	return false;
}

int func_343(int iParam0)
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

bool func_344(int iParam0)
{
	if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return true;
	}
	return false;
}

void func_345(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_347(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_347(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_347(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_347(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		case 79:
			func_347(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_347(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_347(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_347(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		case 82:
			func_347(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_347(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_347(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_347(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		case 81:
			func_347(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_347(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_347(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_347(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		case 73:
			func_347(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_347(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_347(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_347(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		case 75:
			func_347(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_347(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_347(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_347(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		case 76:
			func_347(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_347(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_347(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_347(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		case 77:
			func_347(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_347(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_347(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_347(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		case 80:
			func_347(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_347(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_347(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_347(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		case 87:
			if (func_346())
			{
				func_347(-1608.297f, -556.875f, 33.406f, 310f);
				func_347(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_347(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_347(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_347(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_347(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_347(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_347(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_347(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_347(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_347(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_347(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		case 88:
			if (func_346())
			{
				func_347(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_347(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_347(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_347(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_347(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_347(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_347(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_347(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_347(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_347(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_347(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_347(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		case 89:
			if (func_346())
			{
				func_347(-102.737f, -597.379f, 35.053f, 160.999f);
				func_347(-97.793f, -589.568f, 35.082f, 134.799f);
				func_347(-110.357f, -619.402f, 35.055f, 160.599f);
				func_347(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_347(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_347(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_347(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_347(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_347(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_347(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_347(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_347(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		case 90:
			if (func_346())
			{
				func_347(-59.349f, -779.238f, 43.134f, 228.398f);
				func_347(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_347(-65.212f, -772.66f, 43.151f, 219.398f);
				func_347(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_347(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_347(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_347(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_347(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_347(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_347(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_347(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_347(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		case 91:
			func_347(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_347(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_347(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_347(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_347(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_347(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_347(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_347(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		case 92:
			func_347(-1464.5f, -927.9f, 9f, 296.7991f);
			func_347(-1466f, -926.1f, 9f, 296.7991f);
			func_347(-1467.9f, -924.7f, 9f, 296.7991f);
			func_347(-1469.7f, -923.7f, 9f, 296.7991f);
			func_347(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_347(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_347(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_347(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		case 93:
			func_347(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_347(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_347(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_347(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_347(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_347(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_347(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_347(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		case 94:
			func_347(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_347(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_347(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_347(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_347(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_347(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_347(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_347(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		case 95:
			func_347(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_347(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_347(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_347(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_347(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_347(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_347(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_347(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		case 96:
			func_347(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_347(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_347(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_347(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_347(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_347(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_347(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_347(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		case 97:
			func_347(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_347(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_347(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_347(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_347(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_347(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_347(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_347(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		case 98:
			func_347(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_347(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_347(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_347(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_347(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_347(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_347(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_347(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		case 99:
			func_347(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_347(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_347(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_347(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_347(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_347(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_347(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_347(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		case 100:
			func_347(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_347(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_347(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_347(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_347(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_347(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_347(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_347(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		case 101:
			func_347(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_347(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_347(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_347(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_347(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_347(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_347(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_347(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		case 102:
			func_347(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_347(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_347(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_347(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_347(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_347(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_347(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_347(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		default:
			break;
	}
}

bool func_346()
{
	return Global_2450632.f_15;
}

void func_347(vector3 vParam0, float fParam3)
{
	if (Global_2405072.f_1746 < 101)
	{
		if (SYSTEM::VMAG(vParam0) <= 0.01f)
		{
			return;
		}
		Global_2405072.f_1747[Global_2405072.f_1746 /*4*/] = { vParam0 };
		Global_2405072.f_1747[Global_2405072.f_1746 /*4*/].f_3 = fParam3;
		Global_2405072.f_1746++;
	}
}

int func_348(vector3 vParam0)
{
	int iVar0;

	if (SYSTEM::VDIST(Global_2405072.f_2895, vParam0) < Global_2405072.f_2903)
	{
		return Global_2405072.f_2898;
	}
	Global_2405072.f_2895 = { vParam0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (vParam0.z <= 0f)
		{
			vParam0.f_2 = ((Global_2412235[iVar0 /*7*/].f_2 + Global_2412235[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_293(vParam0, &(Global_2412235[iVar0 /*7*/])))
		{
			Global_2405072.f_2898 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405072.f_2898 = -1;
	return -1;
}

bool func_349()
{
	if (MISC::IS_BIT_SET(Global_4456448.f_13, 0) && !Global_2451426.f_6285)
	{
		return false;
	}
	return false;
}

bool func_350(struct<2> Param0, int iParam2, bool bParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam3)
		{
			if (func_318(iVar0))
			{
				fVar1 = fParam4;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam4;
		}
		fVar2 = SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1676377.f_488[iVar0 /*3*/], Global_1676377.f_488[iVar0 /*3*/].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return true;
	}
	return false;
}

void func_351()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405072.f_2728[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

bool func_352(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;

	vVar1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (vVar1.z <= 0f)
		{
			vVar1.f_2 = ((Global_2412191[iVar0 /*7*/].f_2 + Global_2412191[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_293(vVar1, &(Global_2412191[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_304(&vVar1, Global_2412191[iVar0 /*7*/], Global_2412191[iVar0 /*7*/].f_3, Global_2412191[iVar0 /*7*/].f_6, 1036831949 /* Float: 0.1f */, 0);
				*uParam0 = { vVar1 };
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_353(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;

	if (!Global_2405072.f_512 && !Global_2405072.f_513)
	{
		if (!Global_2405072.f_45.f_314)
		{
			if (!func_357(PLAYER::PLAYER_ID(), 1))
			{
				return true;
			}
			if (!func_356(vParam0, 1008981770 /* Float: 0.01f */))
			{
				if (!func_310(&vParam0, 0, 0, 0, 1))
				{
					return true;
				}
				else if (func_310(&vParam0, 0, 1, 0, 1))
				{
					return true;
				}
			}
			else
			{
				iVar0 = func_355(vParam0, 1008981770 /* Float: 0.01f */);
				if (iVar0 > -1)
				{
					vVar1 = { func_354(&(Global_2405072.f_45[iVar0 /*12*/])) };
					if (!func_310(&vVar1, 0, 0, 0, 1))
					{
						if (!func_310(&vParam0, 0, 0, 0, 1))
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

Vector3 func_354(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
	}
	return *uParam0;
}

int func_355(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0 /*12*/].f_9)
		{
			if (func_297(vParam0, &(Global_2405072.f_45[iVar0 /*12*/]), iParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_356(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0 /*12*/].f_9)
		{
			if (func_297(vParam0, &(Global_2405072.f_45[iVar0 /*12*/]), iParam3, 0, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_357(bool bParam0, bool bParam1)
{
	if (func_157() != 0)
	{
		return func_358(bParam0) != 0;
	}
	return func_275(bParam0, bParam1, 0);
}

int func_358(bool bParam0)
{
	if (func_28(bParam0, 0, 1))
	{
		return Global_2425662[bParam0 /*421*/].f_1;
	}
	return 0;
}

void func_359()
{
	int iVar0;
	struct<4> Var1;

	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405072.f_1747[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405072.f_1746 = 0;
}

void func_360()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2405072.f_684[iVar0]))
		{
			if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_684[iVar0])
			{
				if (!Global_2405072.f_680[iVar0] == -1)
				{
					if (NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2405072.f_680[iVar0]))
					{
						NETWORK::_0x2B1C623823DB0D9D(Global_2405072.f_680[iVar0]);
						Global_2405072.f_680[iVar0] = -1;
					}
					else
					{
						Global_2405072.f_680[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2405072.f_680[iVar0] == -1)
		{
			Global_2405072.f_680[iVar0] = -1;
		}
		iVar0++;
	}
}

bool func_361(bool bParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_362(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2439138.f_1, iParam0);
	}
	return true;
}

bool func_363(int iParam0)
{
	if (!func_107(1, iParam0))
	{
		return false;
	}
	if (Local_218.f_95.f_1[iParam0 /*14*/].f_9 != -1)
	{
		if (!func_100(Local_218.f_95.f_1[iParam0 /*14*/].f_9) || !func_11(&(Local_1270.f_149), 2000, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_364(int iParam0)
{
	return true;
}

bool func_365(int iParam0)
{
	if (Local_433.f_188.f_11 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_188.f_11);
		return StackVal;
	}
	return true;
}

void func_366(int iParam0)
{
	if (!func_135(iParam0, 13))
	{
		return;
	}
	if (func_373(iParam0) > 2 && func_373(iParam0) < 5)
	{
		if (func_367(iParam0))
		{
			func_132(iParam0, 2);
		}
		else
		{
			func_131(iParam0, 2);
		}
	}
}

bool func_367(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[iParam0 /*6*/]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_1270.f_91[iParam0 /*6*/]);
		bVar1 = func_370(iVar0);
		if (bVar1 != func_68() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar1))
		{
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar1);
			return func_369(iVar2, 2);
		}
	}
	return func_368(iParam0, 2);
}

bool func_368(int iParam0, int iParam1)
{
	return func_4(&(Local_1270.f_91[iParam0 /*6*/].f_2), iParam1);
}

bool func_369(int iParam0, int iParam1)
{
	return func_4(&(Local_1436[iParam0 /*37*/].f_1), iParam1);
}

bool func_370(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			if (bVar1 != func_68() && func_28(bVar1, 0, 1))
			{
				return bVar1;
			}
		}
	}
	return func_68();
}

bool func_371(int iParam0, int iParam1)
{
	return false;
}

void func_372(int iParam0, int iParam1)
{
	Local_1270.f_91[iParam0 /*6*/].f_1 = iParam1;
}

int func_373(int iParam0)
{
	return Local_1270.f_91[iParam0 /*6*/].f_1;
}

int func_374(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != func_45())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Local_218.f_10)
	{
		if (iParam0 == func_43(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_375(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (bParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_376(iParam0, (iVar0 - 1), bParam6, bParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (bParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && bVar3 != func_68()) && func_28(bVar3, 1, 1)) || bParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_376(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, bParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, bParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_377()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		func_387(iVar0);
		func_383(iVar0);
		iVar0++;
	}
	func_378();
}

void func_378()
{
	if (Local_218.f_10 <= 0)
	{
		return;
	}
	if (!func_382())
	{
		return;
	}
	if (func_381())
	{
		if (func_380())
		{
			func_10(4);
		}
	}
	else if (func_379())
	{
		func_10(4);
	}
}

bool func_379()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 3))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_380()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 3))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_381()
{
	return func_46(0);
}

bool func_382()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 6))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_383(int iParam0)
{
	if (func_6(iParam0, 29) && func_386(iParam0))
	{
		if (func_385(iParam0))
		{
			func_384(iParam0, 29);
		}
	}
}

void func_384(int iParam0, int iParam1)
{
	if (func_122(&(Local_1270.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

bool func_385(int iParam0)
{
	int iVar0;

	if (func_386(iParam0))
	{
		iVar0 = func_43(iParam0);
		return (Local_1270.f_91[iVar0 /*6*/].f_1 == 5 || func_6(iParam0, 49));
	}
	return true;
}

bool func_386(int iParam0)
{
	return (func_44(iParam0) && func_45() == 2);
}

void func_387(int iParam0)
{
	if (Local_218.f_10.f_5[iParam0 /*12*/].f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_54.f_11);
		if (StackVal)
		{
			if (!func_6(iParam0, 6))
			{
				if (func_97(Local_218.f_10.f_5[iParam0 /*12*/].f_2))
				{
					if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
					{
						if (func_388(iParam0))
						{
							func_42(iParam0, 6);
						}
					}
				}
			}
		}
	}
}

bool func_388(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1270.f_2[iParam0]))
	{
		vVar0 = { func_406(iParam0) };
		fVar3 = Local_218.f_10.f_5[iParam0 /*12*/].f_6;
		vVar4 = { Local_218.f_10.f_5[iParam0 /*12*/].f_7 };
		if (func_31(vVar0))
		{
			return false;
		}
		Local_1270.f_2[iParam0] = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("PICKUP_PORTABLE_CRATE_UNFIXED_INAIRVEHICLE_WITH_PASSENGERS"), vVar0, !func_405(iParam0, 0), Local_218.f_10.f_5[iParam0 /*12*/].f_2));
		ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), fVar3);
		if (!func_31(vVar4))
		{
			ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]), vVar4, 2, true);
		}
		func_400(iParam0, vVar0);
		if (Local_433.f_54.f_14 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_54.f_14);
		}
	}
	if (Local_1270.f_2.f_20 != func_399())
	{
		Local_1270.f_2.f_20 = func_399();
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1270.f_2[iParam0]))
	{
		if (func_389(&(Local_1270.f_2.f_15[iParam0 /*2*/]), func_398(iParam0), iParam0, Local_1270.f_2.f_20, Local_1270.f_164, func_397(iParam0), func_396(iParam0)))
		{
			Local_1270.f_2.f_13[iParam0] = NETWORK::_0xF12E6CD06C73D69E();
			return true;
		}
	}
	return false;
}

bool func_389(var uParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (bParam1 == func_68())
	{
		return false;
	}
	if (MISC::IS_BIT_SET(Global_1681961.f_4713, 31))
	{
		iVar1 = (Global_1681961.f_4714 - 1);
		if (MISC::GET_FRAME_COUNT() == iVar1)
		{
			return false;
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1681961.f_4713), 31);
		}
	}
	if (Global_1681961.f_4714 == 0)
	{
		Global_1681961.f_4714 = MISC::GET_FRAME_COUNT();
		iVar0 = 0;
		while (iVar0 < 20)
		{
			Global_1681961.f_4715[iVar0] = -1;
			iVar0++;
		}
	}
	iVar2 = func_395(bParam1, iParam2);
	*uParam0 = bParam1;
	uParam0->f_1 = iVar2;
	if (func_393(*uParam0))
	{
		if (Global_1681961.f_4714 == MISC::GET_FRAME_COUNT())
		{
			MISC::SET_BIT(&(Global_1681961.f_4713), iParam2);
			MISC::SET_BIT(&(Global_1681961.f_4713), 31);
			Global_1681961.f_4714++;
			return false;
		}
		else
		{
			func_392(*uParam0, "FREEMODE_DELIVERY_CREATE_DELIVERABLE");
			return true;
		}
	}
	if (Global_1681961.f_4715[iParam2] == -1)
	{
		Global_1681961.f_4715[iParam2] = iVar2;
	}
	if (!func_13(&(Global_1681961.f_4540)) || func_11(&(Global_1681961.f_4540), 1500, 0))
	{
		bVar3 = true;
		func_16(&(Global_1681961.f_4540), 0, 0);
	}
	if (!bVar3)
	{
		if (MISC::GET_FRAME_COUNT() == Global_1681961.f_4542)
		{
			bVar3 = true;
		}
	}
	if (bVar3)
	{
		func_390(*uParam0, uParam3, iParam6, Param4, iParam7);
		Global_1681961.f_4542 = MISC::GET_FRAME_COUNT();
	}
	return false;
}

void func_390(struct<2> Param0, int iParam2, int iParam3, struct<2> Param4, int iParam6)
{
	struct<9> Var0;
	int iVar9;

	if (!func_391(Param4))
	{
		return;
	}
	Var0.f_2.f_1 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1000;
	Var0 = 26071989;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_4 = iParam2;
	Var0.f_8 = iParam3;
	Var0.f_5 = iParam6;
	Var0.f_6 = { Param4 };
	iVar9 = func_24(1, 1);
	if (!iVar9 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 9, iVar9);
	}
}

bool func_391(struct<2> Param0)
{
	if (Param0 == -1 || Param0.f_1 == -1000)
	{
		return false;
	}
	return true;
}

void func_392(var uParam0, char* sParam1, char* sParam2)
{
}

bool func_393(struct<2> Param0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419327.f_199.f_1[iVar0 /*14*/].f_1.f_1 != -1 && func_394(Global_2419327.f_199.f_1[iVar0 /*14*/].f_1, Param0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_394(struct<2> Param0, struct<2> Param2)
{
	if (Param0.f_1 != -1 && Param2.f_1 != -1)
	{
		return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
	}
	return false;
}

int func_395(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(bParam0));
	if (Global_1681961.f_4715[iParam1] != -1)
	{
		return Global_1681961.f_4715[iParam1];
	}
	iVar1 = 0;
	while (iVar1 < 31)
	{
		if (!MISC::IS_BIT_SET(Global_1681961.f_4713, iVar1))
		{
			MISC::SET_BIT(&(Global_1681961.f_4713), iVar1);
			return (iVar0 + iVar1);
		}
		iVar1++;
	}
	return -1;
}

int func_396(int iParam0)
{
	return 0;
}

int func_397(int iParam0)
{
	return 1;
}

bool func_398(int iParam0)
{
	return bLocal_1216;
}

int func_399()
{
	return 24;
}

void func_400(int iParam0, vector3 vParam1)
{
	func_404(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]), Local_1270.f_2.f_15[iParam0 /*2*/].f_1);
	if (func_44(iParam0))
	{
		func_42(iParam0, 29);
		if (iParam0 != func_403(func_43(iParam0)))
		{
			func_42(iParam0, 50);
		}
	}
	else
	{
		func_42(iParam0, 39);
	}
	NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_1270.f_2[iParam0], true);
	ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), 1200);
	ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), 50, 0);
	ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), true);
	ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), true, true, false, true, true, true, true, false);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]), true, 1);
	ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]), true);
	OBJECT::_0x641F272B52E2F0F8(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), 1);
	OBJECT::_SET_OBJECT_SOMETHING(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), true);
	if (func_402(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), true);
	}
	else
	{
		func_42(iParam0, 28);
	}
	if (!func_405(iParam0, 1))
	{
		OBJECT::_PLACE_OBJECT_ON_GROUND_PROPERLY_2(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]));
	}
	if (func_405(iParam0, 2))
	{
		ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), vParam1, true, false, false, true);
	}
	if (func_405(iParam0, 3))
	{
		PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]));
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), true);
	}
	if (func_405(iParam0, 4))
	{
		ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]), true);
	}
	if ((func_405(iParam0, 6) || func_405(iParam0, 7)) || func_44(iParam0))
	{
		ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), false, false);
	}
	if (func_405(iParam0, 8))
	{
		NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]), true);
		func_42(iParam0, 23);
	}
	else
	{
		func_42(iParam0, 40);
	}
	if (func_405(iParam0, 9))
	{
		func_401(iParam0, 1, 0);
	}
}

void func_401(int iParam0, bool bParam1, bool bParam2)
{
	OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), bParam1, bParam2);
}

bool func_402(int iParam0)
{
	if (func_6(iParam0, 29))
	{
		return false;
	}
	return !func_405(iParam0, 5);
}

int func_403(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_218.f_10)
	{
		if (Local_1270.f_2.f_11[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_404(int iParam0, int iParam1)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "FMDeliverableID", iParam1);
	}
}

bool func_405(int iParam0, int iParam1)
{
	return func_4(&(Local_218.f_10.f_5[iParam0 /*12*/]), iParam1);
}

Vector3 func_406(int iParam0)
{
	if (func_386(iParam0))
	{
		return Local_218.f_95.f_1[func_43(iParam0) /*14*/].f_4 + func_407(iParam0, Local_218.f_95.f_1[func_43(iParam0) /*14*/].f_3);
	}
	else if (!func_31(Local_218.f_10.f_5[iParam0 /*12*/].f_3))
	{
		return Local_218.f_10.f_5[iParam0 /*12*/].f_3;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_54.f_12);
	return StackVal, StackVal, StackVal;
}

Vector3 func_407(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("INSURGENT3"):
		case joaat("LIMO2"):
			switch (iParam0)
			{
				case 0:
					return 1f, -2f, -0.1f;
				case 1:
					return -1f, -2f, -0.1f;
				case 2:
					return 1f, -2f, -0.1f;
				case 3:
					return -1f, -2f, -0.1f;
				default:
					break;
			}
			break;
		case joaat("ISSI3"):
		case joaat("PANTO"):
		case joaat("RAPTOR"):
			switch (iParam0)
			{
				case 0:
					return 0.5f, 0f, -0.1f;
				case 1:
					return -0.5f, 0f, -0.1f;
				case 2:
					return 0.5f, 0f, -0.1f;
				case 3:
					return -0.5f, 0f, -0.1f;
				default:
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			return 1f, 0f, -0.1f;
		case 1:
			return -1f, 0f, -0.1f;
		case 2:
			return 1f, 0f, -0.1f;
		case 3:
			return -1f, 0f, -0.1f;
		default:
			break;
	}
	return 0f, -1f, -0.1f;
}

int func_408()
{
	return Local_1270.f_123;
}

void func_409(int iParam0)
{
	Local_1270.f_122 = iParam0;
}

bool func_410()
{
	int iVar0;

	if (!func_531(func_533(), func_532()))
	{
		return false;
	}
	if (!func_421())
	{
		return false;
	}
	func_420();
	func_419();
	Local_1270.f_140 = NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(func_418(), -1, 0);
	func_416();
	func_415();
	func_413();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_1270.f_105[iVar0] = -1;
		iVar0++;
	}
	Local_1270.f_143 = MISC::GET_RANDOM_INT_IN_RANGE(0, 99999999);
	Local_1270.f_129 = func_412();
	STATS::_0x6DEE77AFF8C21BD1(&(Local_1270.f_137), &(Local_1270.f_138));
	Global_1628237[bLocal_1216 /*615*/].f_549 = Local_1270.f_137;
	Global_1628237[bLocal_1216 /*615*/].f_550 = Local_1270.f_138;
	Local_1270.f_144 = NETWORK::_0xF12E6CD06C73D69E();
	if (!func_411())
	{
		return false;
	}
	Call_Loc(Local_433.f_1);
	return StackVal;
}

bool func_411()
{
	return true;
}

int func_412()
{
	return -1;
}

void func_413()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_218.f_28)
	{
		Local_1270.f_24[iVar0 /*22*/].f_15 = func_414(iVar0);
		iVar0++;
	}
}

int func_414(int iParam0)
{
	if (Local_218.f_28.f_1[iParam0 /*20*/].f_16 == -1)
	{
		Local_218.f_28.f_1[iParam0 /*20*/].f_16 = 1500;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, Local_218.f_28.f_1[iParam0 /*20*/].f_16);
}

void func_415()
{
	Local_1270.f_127 = 2;
}

void func_416()
{
	int iVar0;

	if (func_417())
	{
		if (func_33(&(Local_1270.f_2.f_11), &(Local_1270.f_105.f_3)))
		{
			func_14(2);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_218.f_10)
		{
			Local_1270.f_2.f_11[iVar0] = Local_218.f_10.f_5[iVar0 /*12*/].f_10;
			iVar0++;
		}
	}
}

bool func_417()
{
	return false;
}

char* func_418()
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

void func_419()
{
}

void func_420()
{
}

bool func_421()
{
	func_530();
	func_435();
	if (!func_422())
	{
		return false;
	}
	Stack.Push(Local_433 != 0);
	Call_Loc(Local_433);
	if (StackVal && !StackVal)
	{
		return false;
	}
	return true;
}

bool func_422()
{
	if (func_434(12))
	{
		return true;
	}
	if (!func_433())
	{
		return false;
	}
	func_432();
	func_424();
	if (Local_433.f_8 != 0)
	{
		Call_Loc(Local_433.f_8);
	}
	func_423(12);
	return true;
}

void func_423(int iParam0)
{
	if (func_15(&uLocal_1229, iParam0))
	{
	}
}

void func_424()
{
	Local_218.f_136[0 /*12*/] = { Local_218.f_95.f_1[0 /*14*/].f_4 };
	Local_218.f_136[0 /*12*/].f_3 = 200f;
	Local_218.f_136[0 /*12*/].f_6 = 0;
	Local_218.f_183 = 1;
	Local_218.f_183.f_1[0 /*5*/] = { Local_218.f_136[0 /*12*/] };
	Local_218.f_183.f_1[0 /*5*/].f_3 = 50f;
	Local_218.f_28.f_62[0 /*4*/].f_1[0] = 0;
	Local_218.f_112 = 1;
	Local_218.f_112.f_1[0 /*10*/].f_2 = func_431();
	Local_218.f_112.f_1[0 /*10*/].f_3 = { Local_218.f_95.f_1[0 /*14*/].f_4 + Vector(2f, 0f, 0f) };
	func_430(0, 25);
	func_430(0, 10);
	func_429(0, 16);
	func_429(0, 34);
	Local_218.f_134 = 1;
	Local_218.f_134.f_1 = 1;
	Local_218.f_128 = Global_262145.f_28850;
	Local_218.f_128.f_1 = 2;
	switch (func_428())
	{
		case 0:
			switch (func_427())
			{
				case 0:
					Local_218.f_164[0 /*9*/].f_2 = { -286.5353f, 6309.744f, 28.49337f };
					Local_218.f_164[0 /*9*/].f_5 = { -297.6026f, 6298.312f, 35.49236f };
					Local_218.f_164[0 /*9*/].f_8 = 12.5f;
					func_426(0, 0);
					Local_218.f_164[1 /*9*/].f_2 = { -286.5353f, 6309.744f, 28.49337f };
					Local_218.f_164[1 /*9*/].f_5 = { -297.6026f, 6298.312f, 35.49236f };
					Local_218.f_164[1 /*9*/].f_8 = 12.5f;
					func_426(1, 4);
					Local_218.f_149[1 /*7*/] = 1;
					Local_218.f_149[1 /*7*/].f_1 = { -291.9085f, 6310.448f, 29.49225f };
					Local_218.f_149[1 /*7*/].f_4 = { -283.1549f, 6298.624f, 34.17293f };
					break;
				case 1:
					Local_218.f_164[0 /*9*/].f_2 = { -78.97802f, 6532.613f, 28.54681f };
					Local_218.f_164[0 /*9*/].f_5 = { -67.70448f, 6543.824f, 35.4908f };
					Local_218.f_164[0 /*9*/].f_8 = 15f;
					func_426(0, 0);
					Local_218.f_164[1 /*9*/].f_2 = { -78.97802f, 6532.613f, 28.54681f };
					Local_218.f_164[1 /*9*/].f_5 = { -67.70448f, 6543.824f, 35.4908f };
					Local_218.f_164[1 /*9*/].f_8 = 15f;
					func_426(1, 4);
					Local_218.f_149[0 /*7*/] = 0;
					Local_218.f_149[0 /*7*/].f_1 = { func_425(-75.4234f, 6541.845f, 30.4908f, 10f, 0) };
					Local_218.f_149[0 /*7*/].f_4 = { func_425(-75.4234f, 6541.845f, 30.4908f, 10f, 1) };
					Local_218.f_149[1 /*7*/] = 1;
					Local_218.f_149[1 /*7*/].f_1 = { -77.00486f, 6535.086f, 29.49014f };
					Local_218.f_149[1 /*7*/].f_4 = { -85.27054f, 6545.833f, 33.4908f };
					break;
				case 2:
					Local_218.f_28.f_1[0 /*20*/].f_8 = 0;
					Local_218.f_28.f_1[0 /*20*/].f_9 = -1;
					Local_218.f_28.f_1[1 /*20*/].f_8 = 0;
					Local_218.f_28.f_1[1 /*20*/].f_9 = 0;
					break;
			}
			break;
		case 1:
			switch (func_427())
			{
				case 3:
					Local_218.f_164[0 /*9*/].f_2 = { -674.6777f, 79.99255f, 48.34937f };
					Local_218.f_164[0 /*9*/].f_5 = { -662.3475f, 80.28144f, 54.94165f };
					Local_218.f_164[0 /*9*/].f_8 = 13.5f;
					func_426(0, 0);
					Local_218.f_164[1 /*9*/].f_2 = { -674.6777f, 79.99255f, 48.34937f };
					Local_218.f_164[1 /*9*/].f_5 = { -662.3475f, 80.28144f, 54.94165f };
					Local_218.f_164[1 /*9*/].f_8 = 13.5f;
					func_426(1, 4);
					Local_218.f_149[0 /*7*/] = 0;
					Local_218.f_149[0 /*7*/].f_1 = { func_425(-670.9532f, 82.5052f, 50.7471f, 10f, 0) };
					Local_218.f_149[0 /*7*/].f_4 = { func_425(-670.9532f, 82.5052f, 50.7471f, 10f, 1) };
					break;
				case 4:
					Local_218.f_164[0 /*9*/].f_2 = { -2312.438f, 266.2307f, 166.6021f };
					Local_218.f_164[0 /*9*/].f_5 = { -2319.812f, 282.64f, 173.4671f };
					Local_218.f_164[0 /*9*/].f_8 = 15f;
					func_426(0, 0);
					Local_218.f_164[1 /*9*/].f_2 = { -2312.438f, 266.2307f, 166.6021f };
					Local_218.f_164[1 /*9*/].f_5 = { -2319.812f, 282.64f, 173.4671f };
					Local_218.f_164[1 /*9*/].f_8 = 15f;
					func_426(1, 4);
					Local_218.f_149[0 /*7*/] = 0;
					Local_218.f_149[0 /*7*/].f_1 = { func_425(-2314.728f, 276.2633f, 168.6021f, 10f, 0) };
					Local_218.f_149[0 /*7*/].f_4 = { func_425(-2314.728f, 276.2633f, 168.6021f, 10f, 1) };
					break;
				case 5:
					Local_218.f_28.f_1[0 /*20*/].f_8 = 0;
					Local_218.f_28.f_1[0 /*20*/].f_9 = -1;
					Local_218.f_28.f_1[1 /*20*/].f_8 = 0;
					Local_218.f_28.f_1[1 /*20*/].f_9 = 0;
					break;
			}
			break;
		case 2:
			switch (func_427())
			{
				case 6:
					Local_218.f_164[0 /*9*/].f_2 = { 739.0746f, -969.018f, 21.52275f };
					Local_218.f_164[0 /*9*/].f_5 = { 752.2088f, -968.995f, 28.8791f };
					Local_218.f_164[0 /*9*/].f_8 = 13.5f;
					func_426(0, 0);
					Local_218.f_164[1 /*9*/].f_2 = { 739.0746f, -969.018f, 21.52275f };
					Local_218.f_164[1 /*9*/].f_5 = { 752.2088f, -968.995f, 28.8791f };
					Local_218.f_164[1 /*9*/].f_8 = 13.5f;
					func_426(1, 4);
					break;
				case 7:
					Local_218.f_164[0 /*9*/].f_2 = { 471.2332f, -732.4796f, 24.45348f };
					Local_218.f_164[0 /*9*/].f_5 = { 458.8213f, -732.6755f, 31.35762f };
					Local_218.f_164[0 /*9*/].f_8 = 13.5f;
					func_426(0, 0);
					Local_218.f_164[1 /*9*/].f_2 = { 471.2332f, -732.4796f, 24.45348f };
					Local_218.f_164[1 /*9*/].f_5 = { 458.8213f, -732.6755f, 31.35762f };
					Local_218.f_164[1 /*9*/].f_8 = 13.5f;
					func_426(1, 4);
					Local_218.f_149[0 /*7*/] = 0;
					Local_218.f_149[0 /*7*/].f_1 = { func_425(462.2993f, -730.7943f, 26.3576f, 10f, 0) };
					Local_218.f_149[0 /*7*/].f_4 = { func_425(462.2993f, -730.7943f, 26.3576f, 10f, 1) };
					break;
				case 8:
					Local_218.f_28.f_1[0 /*20*/].f_8 = 0;
					Local_218.f_28.f_1[0 /*20*/].f_9 = -1;
					Local_218.f_28.f_1[1 /*20*/].f_8 = 0;
					Local_218.f_28.f_1[1 /*20*/].f_9 = 0;
					break;
			}
			break;
	}
}

Vector3 func_425(vector3 vParam0, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		return vParam0 + Vector(fParam3, fParam3, fParam3);
	}
	return vParam0 - Vector(fParam3, fParam3, fParam3);
}

void func_426(int iParam0, int iParam1)
{
	if (func_15(&(Local_218.f_164[iParam0 /*9*/]), iParam1))
	{
	}
}

int func_427()
{
	return Local_1270.f_162.f_1;
}

int func_428()
{
	return Local_1270.f_162;
}

void func_429(int iParam0, int iParam1)
{
	if (func_15(&(Local_218.f_95.f_1[iParam0 /*14*/]), iParam1))
	{
	}
}

void func_430(int iParam0, int iParam1)
{
	if (func_15(&(Local_218.f_112.f_1[iParam0 /*10*/]), iParam1))
	{
	}
}

int func_431()
{
	switch (func_428())
	{
		case 0:
			return -237334631;
		case 1:
			return -1711408708;
		case 2:
			return 1475614842;
		default:
			break;
	}
	return 0;
}

void func_432()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Local_218.f_10)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar1++;
		}
		if (-1 != Local_218.f_10.f_5[iVar0 /*12*/].f_10)
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_218.f_28)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar1++;
		}
		if (Local_218.f_28.f_1[iVar0 /*20*/].f_10 != -1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_218.f_190[Local_218.f_28.f_1[iVar0 /*20*/].f_10 /*8*/])))
			{
			}
		}
		if (-1 != Local_218.f_28.f_1[iVar0 /*20*/].f_8)
		{
		}
		if (-1 != Local_218.f_28.f_1[iVar0 /*20*/].f_8)
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_218.f_95)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_218.f_112)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_218.f_136)
	{
		iVar0++;
	}
}

bool func_433()
{
	switch (func_428())
	{
		case 0:
			switch (func_427())
			{
				case 0:
					Local_218.f_28.f_1[0 /*20*/].f_2 = joaat("A_M_M_SALTON_01");
					Local_218.f_28.f_1[0 /*20*/].f_3 = { -288.499f, 6299.241f, 30.492f };
					Local_218.f_28.f_1[0 /*20*/].f_6 = 42.6f;
					Local_218.f_28.f_1[0 /*20*/].f_7 = joaat("WEAPON_ASSAULTRIFLE");
					Local_218.f_28.f_1[0 /*20*/].f_10 = 0;
					StringCopy(&(Local_218.f_190[0 /*8*/]), "WORLD_HUMAN_GUARD_STAND", 32);
					Local_218.f_28.f_1[1 /*20*/].f_2 = joaat("A_M_M_SALTON_01");
					Local_218.f_28.f_1[1 /*20*/].f_3 = { -286.484f, 6304.44f, 30.492f };
					Local_218.f_28.f_1[1 /*20*/].f_6 = 28.199f;
					Local_218.f_28.f_1[1 /*20*/].f_7 = joaat("WEAPON_PISTOL");
					Local_218.f_28.f_1[1 /*20*/].f_10 = 1;
					StringCopy(&(Local_218.f_190[1 /*8*/]), "WORLD_HUMAN_SMOKING_POT", 32);
					Local_218.f_28.f_1[2 /*20*/].f_2 = joaat("A_M_M_SALTON_01");
					Local_218.f_28.f_1[2 /*20*/].f_3 = { -286.935f, 6305.677f, 30.492f };
					Local_218.f_28.f_1[2 /*20*/].f_6 = 206.799f;
					Local_218.f_28.f_1[2 /*20*/].f_7 = joaat("WEAPON_ASSAULTSHOTGUN");
					Local_218.f_28.f_1[2 /*20*/].f_10 = 2;
					StringCopy(&(Local_218.f_190[2 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
					Local_218.f_95.f_1[0 /*14*/].f_3 = joaat("REBEL");
					Local_218.f_95.f_1[0 /*14*/].f_4 = { -290.654f, 6303.431f, 30.492f };
					Local_218.f_95.f_1[0 /*14*/].f_7 = 115f;
					func_429(0, 7);
					Local_218.f_10.f_5[0 /*12*/].f_10 = 0;
					Local_218.f_10.f_5[0 /*12*/].f_2 = joaat("PROP_DRUG_PACKAGE_02");
					Local_218.f_10 = 1;
					Local_218.f_28 = 3;
					Local_218.f_95 = 1;
					Local_218.f_112 = 0;
					break;
				case 1:
					Local_218.f_28.f_1[0 /*20*/].f_2 = joaat("A_M_M_SALTON_01");
					Local_218.f_28.f_1[0 /*20*/].f_3 = { -79.668f, 6535.546f, 30.491f };
					Local_218.f_28.f_1[0 /*20*/].f_6 = 315.6f;
					Local_218.f_28.f_1[0 /*20*/].f_7 = joaat("WEAPON_ASSAULTRIFLE");
					Local_218.f_28.f_1[0 /*20*/].f_10 = 0;
					StringCopy(&(Local_218.f_190[0 /*8*/]), "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 32);
					Local_218.f_28.f_1[1 /*20*/].f_2 = joaat("A_M_M_SALTON_01");
					Local_218.f_28.f_1[1 /*20*/].f_3 = { -72.927f, 6538.502f, 30.491f };
					Local_218.f_28.f_1[1 /*20*/].f_6 = 14.6f;
					Local_218.f_28.f_1[1 /*20*/].f_7 = joaat("WEAPON_PISTOL");
					Local_218.f_28.f_1[1 /*20*/].f_10 = 1;
					StringCopy(&(Local_218.f_190[1 /*8*/]), "WORLD_HUMAN_HANG_OUT_STREET", 32);
					Local_218.f_28.f_1[2 /*20*/].f_2 = joaat("A_M_M_SALTON_01");
					Local_218.f_28.f_1[2 /*20*/].f_3 = { -73.187f, 6539.921f, 30.491f };
					Local_218.f_28.f_1[2 /*20*/].f_6 = 193.799f;
					Local_218.f_28.f_1[2 /*20*/].f_7 = joaat("WEAPON_ASSAULTSHOTGUN");
					Local_218.f_28.f_1[2 /*20*/].f_10 = 2;
					StringCopy(&(Local_218.f_190[2 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
					Local_218.f_95.f_1[0 /*14*/].f_3 = joaat("REBEL");
					Local_218.f_95.f_1[0 /*14*/].f_4 = { -77.11f, 6537.942f, 30.491f };
					Local_218.f_95.f_1[0 /*14*/].f_7 = 315.6f;
					func_429(0, 7);
					Local_218.f_10.f_5[0 /*12*/].f_10 = 0;
					Local_218.f_10.f_5[0 /*12*/].f_2 = joaat("PROP_DRUG_PACKAGE_02");
					Local_218.f_10 = 1;
					Local_218.f_28 = 3;
					Local_218.f_95 = 1;
					Local_218.f_112 = 0;
					break;
				case 2:
					Local_218.f_28.f_1[0 /*20*/].f_2 = joaat("A_M_M_SALTON_01");
					Local_218.f_28.f_1[0 /*20*/].f_3 = { 1253.8f, 6483.887f, 21.376f };
					Local_218.f_28.f_1[0 /*20*/].f_6 = 269.2f;
					Local_218.f_28.f_1[0 /*20*/].f_7 = joaat("WEAPON_PISTOL");
					Local_218.f_28.f_1[1 /*20*/].f_2 = joaat("A_M_M_SALTON_01");
					Local_218.f_28.f_1[1 /*20*/].f_3 = { 1254.129f, 6483.602f, 21.44f };
					Local_218.f_28.f_1[1 /*20*/].f_6 = 269.2f;
					Local_218.f_28.f_1[1 /*20*/].f_7 = joaat("WEAPON_MICROSMG");
					Local_218.f_95.f_1[0 /*14*/].f_3 = joaat("REBEL");
					Local_218.f_95.f_1[0 /*14*/].f_4 = { 1254.091f, 6483.862f, 19.618f };
					Local_218.f_95.f_1[0 /*14*/].f_7 = 269.2f;
					func_429(0, 7);
					Local_218.f_10.f_5[0 /*12*/].f_10 = 0;
					Local_218.f_10.f_5[0 /*12*/].f_2 = joaat("PROP_DRUG_PACKAGE_02");
					Local_218.f_10 = 1;
					Local_218.f_28 = 2;
					Local_218.f_95 = 1;
					Local_218.f_112 = 0;
					break;
			}
			break;
		case 1:
			switch (func_427())
			{
				case 3:
					Local_218.f_28.f_1[0 /*20*/].f_2 = joaat("A_M_Y_EPSILON_01");
					Local_218.f_28.f_1[0 /*20*/].f_3 = { -670.294f, 80.811f, 50.435f };
					Local_218.f_28.f_1[0 /*20*/].f_6 = 247.6f;
					Local_218.f_28.f_1[0 /*20*/].f_7 = joaat("WEAPON_KNIFE");
					Local_218.f_28.f_1[0 /*20*/].f_10 = 0;
					StringCopy(&(Local_218.f_190[0 /*8*/]), "WORLD_HUMAN_CLIPBOARD", 32);
					Local_218.f_28.f_1[1 /*20*/].f_2 = joaat("A_M_Y_EPSILON_01");
					Local_218.f_28.f_1[1 /*20*/].f_3 = { -671.64f, 80.162f, 50.35f };
					Local_218.f_28.f_1[1 /*20*/].f_6 = 267.399f;
					Local_218.f_28.f_1[1 /*20*/].f_7 = joaat("WEAPON_UNARMED");
					Local_218.f_28.f_1[1 /*20*/].f_10 = 1;
					StringCopy(&(Local_218.f_190[1 /*8*/]), "WORLD_HUMAN_STAND_IMPATIENT", 32);
					Local_218.f_28.f_1[2 /*20*/].f_2 = joaat("A_M_Y_EPSILON_01");
					Local_218.f_28.f_1[2 /*20*/].f_3 = { -667.864f, 84.508f, 50.928f };
					Local_218.f_28.f_1[2 /*20*/].f_6 = 172.199f;
					Local_218.f_28.f_1[2 /*20*/].f_7 = joaat("WEAPON_PISTOL");
					Local_218.f_28.f_1[2 /*20*/].f_10 = 2;
					StringCopy(&(Local_218.f_190[2 /*8*/]), "WORLD_HUMAN_GUARD_STAND", 32);
					Local_218.f_95.f_1[0 /*14*/].f_3 = joaat("PONY");
					Local_218.f_95.f_1[0 /*14*/].f_4 = { -667.25f, 80.216f, 50.139f };
					Local_218.f_95.f_1[0 /*14*/].f_7 = 260.8f;
					func_429(0, 7);
					Local_218.f_10.f_5[0 /*12*/].f_10 = 0;
					Local_218.f_10.f_5[0 /*12*/].f_2 = joaat("PROP_DRUG_PACKAGE_02");
					Local_218.f_10 = 1;
					Local_218.f_28 = 3;
					Local_218.f_95 = 1;
					Local_218.f_112 = 0;
					break;
				case 4:
					Local_218.f_28.f_1[0 /*20*/].f_2 = joaat("A_M_Y_BUSINESS_03");
					Local_218.f_28.f_1[0 /*20*/].f_3 = { -2314.76f, 277.063f, 168.591f };
					Local_218.f_28.f_1[0 /*20*/].f_6 = 22f;
					Local_218.f_28.f_1[0 /*20*/].f_7 = joaat("WEAPON_CROWBAR");
					Local_218.f_28.f_1[0 /*20*/].f_10 = 0;
					StringCopy(&(Local_218.f_190[0 /*8*/]), "WORLD_HUMAN_CLIPBOARD", 32);
					Local_218.f_28.f_1[1 /*20*/].f_2 = joaat("A_M_Y_BUSINESS_03");
					Local_218.f_28.f_1[1 /*20*/].f_3 = { -2315.667f, 273.35f, 168.602f };
					Local_218.f_28.f_1[1 /*20*/].f_6 = 68.2f;
					Local_218.f_28.f_1[1 /*20*/].f_7 = joaat("WEAPON_UNARMED");
					Local_218.f_28.f_1[1 /*20*/].f_10 = 1;
					StringCopy(&(Local_218.f_190[1 /*8*/]), "WORLD_HUMAN_STAND_MOBILE", 32);
					Local_218.f_28.f_1[2 /*20*/].f_2 = joaat("A_M_Y_BUSINESS_03");
					Local_218.f_28.f_1[2 /*20*/].f_3 = { -2316.671f, 273.687f, 168.602f };
					Local_218.f_28.f_1[2 /*20*/].f_6 = 229.4f;
					Local_218.f_28.f_1[2 /*20*/].f_7 = joaat("WEAPON_PISTOL");
					Local_218.f_28.f_1[2 /*20*/].f_10 = 2;
					StringCopy(&(Local_218.f_190[2 /*8*/]), "WORLD_HUMAN_SMOKING", 32);
					Local_218.f_95.f_1[0 /*14*/].f_3 = joaat("PONY");
					Local_218.f_95.f_1[0 /*14*/].f_4 = { -2316.255f, 280.381f, 168.467f };
					Local_218.f_95.f_1[0 /*14*/].f_7 = 24.4f;
					func_429(0, 7);
					Local_218.f_10.f_5[0 /*12*/].f_10 = 0;
					Local_218.f_10.f_5[0 /*12*/].f_2 = joaat("PROP_DRUG_PACKAGE_02");
					Local_218.f_10 = 1;
					Local_218.f_28 = 3;
					Local_218.f_95 = 1;
					Local_218.f_112 = 0;
					break;
				case 5:
					Local_218.f_28.f_1[0 /*20*/].f_2 = joaat("G_M_Y_STRPUNK_01");
					Local_218.f_28.f_1[0 /*20*/].f_3 = { -1861.437f, 150.461f, 81.193f };
					Local_218.f_28.f_1[0 /*20*/].f_6 = 49.071f;
					Local_218.f_28.f_1[0 /*20*/].f_7 = joaat("WEAPON_PISTOL");
					Local_218.f_28.f_1[1 /*20*/].f_2 = joaat("G_M_Y_STRPUNK_01");
					Local_218.f_28.f_1[1 /*20*/].f_3 = { -1861.171f, 150.879f, 81.158f };
					Local_218.f_28.f_1[1 /*20*/].f_6 = 49.071f;
					Local_218.f_28.f_1[1 /*20*/].f_7 = joaat("WEAPON_MICROSMG");
					Local_218.f_95.f_1[0 /*14*/].f_3 = joaat("PONY");
					Local_218.f_95.f_1[0 /*14*/].f_4 = { -1861.402f, 150.232f, 79.223f };
					Local_218.f_95.f_1[0 /*14*/].f_7 = 49.6f;
					func_429(0, 7);
					Local_218.f_10.f_5[0 /*12*/].f_10 = 0;
					Local_218.f_10.f_5[0 /*12*/].f_2 = joaat("PROP_DRUG_PACKAGE_02");
					Local_218.f_10 = 1;
					Local_218.f_28 = 2;
					Local_218.f_95 = 1;
					Local_218.f_112 = 0;
					break;
			}
			break;
		case 2:
			switch (func_427())
			{
				case 6:
					Local_218.f_28.f_1[0 /*20*/].f_2 = joaat("G_M_Y_AZTECA_01");
					Local_218.f_28.f_1[0 /*20*/].f_3 = { 747.134f, -970.125f, 23.698f };
					Local_218.f_28.f_1[0 /*20*/].f_6 = 104.799f;
					Local_218.f_28.f_1[0 /*20*/].f_7 = joaat("WEAPON_PISTOL");
					Local_218.f_28.f_1[0 /*20*/].f_10 = 0;
					StringCopy(&(Local_218.f_190[0 /*8*/]), "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 32);
					Local_218.f_28.f_1[1 /*20*/].f_2 = joaat("G_M_Y_AZTECA_01");
					Local_218.f_28.f_1[1 /*20*/].f_3 = { 741.774f, -967.47f, 23.504f };
					Local_218.f_28.f_1[1 /*20*/].f_6 = 355.799f;
					Local_218.f_28.f_1[1 /*20*/].f_7 = joaat("WEAPON_ASSAULTRIFLE");
					Local_218.f_28.f_1[1 /*20*/].f_10 = 1;
					StringCopy(&(Local_218.f_190[1 /*8*/]), "WORLD_HUMAN_HANG_OUT_STREET", 32);
					Local_218.f_28.f_1[2 /*20*/].f_2 = joaat("G_M_Y_AZTECA_01");
					Local_218.f_28.f_1[2 /*20*/].f_3 = { 741.807f, -965.949f, 23.505f };
					Local_218.f_28.f_1[2 /*20*/].f_6 = 181.398f;
					Local_218.f_28.f_1[2 /*20*/].f_7 = joaat("WEAPON_PUMPSHOTGUN");
					Local_218.f_28.f_1[2 /*20*/].f_10 = 2;
					StringCopy(&(Local_218.f_190[2 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
					Local_218.f_95.f_1[0 /*14*/].f_3 = joaat("RUMPO");
					Local_218.f_95.f_1[0 /*14*/].f_4 = { 744.011f, -971.328f, 23.585f };
					Local_218.f_95.f_1[0 /*14*/].f_7 = 109.2f;
					func_429(0, 7);
					Local_218.f_10.f_5[0 /*12*/].f_10 = 0;
					Local_218.f_10.f_5[0 /*12*/].f_2 = joaat("PROP_DRUG_PACKAGE_02");
					Local_218.f_10 = 1;
					Local_218.f_28 = 3;
					Local_218.f_95 = 1;
					Local_218.f_112 = 0;
					break;
				case 7:
					Local_218.f_28.f_1[0 /*20*/].f_2 = joaat("G_M_Y_AZTECA_01");
					Local_218.f_28.f_1[0 /*20*/].f_3 = { 463.783f, -733.993f, 26.361f };
					Local_218.f_28.f_1[0 /*20*/].f_6 = 176.4f;
					Local_218.f_28.f_1[0 /*20*/].f_7 = joaat("WEAPON_PISTOL");
					Local_218.f_28.f_1[0 /*20*/].f_10 = 0;
					StringCopy(&(Local_218.f_190[0 /*8*/]), "WORLD_HUMAN_CLIPBOARD", 32);
					Local_218.f_28.f_1[1 /*20*/].f_2 = joaat("G_M_Y_AZTECA_01");
					Local_218.f_28.f_1[1 /*20*/].f_3 = { 466.928f, -730.751f, 26.363f };
					Local_218.f_28.f_1[1 /*20*/].f_6 = 56.199f;
					Local_218.f_28.f_1[1 /*20*/].f_7 = joaat("WEAPON_ASSAULTRIFLE");
					Local_218.f_28.f_1[1 /*20*/].f_10 = 1;
					StringCopy(&(Local_218.f_190[1 /*8*/]), "WORLD_HUMAN_HANG_OUT_STREET", 32);
					Local_218.f_28.f_1[2 /*20*/].f_2 = joaat("G_M_Y_AZTECA_01");
					Local_218.f_28.f_1[2 /*20*/].f_3 = { 465.587f, -730.108f, 26.36f };
					Local_218.f_28.f_1[2 /*20*/].f_6 = 243.199f;
					Local_218.f_28.f_1[2 /*20*/].f_7 = joaat("WEAPON_PUMPSHOTGUN");
					Local_218.f_28.f_1[2 /*20*/].f_10 = 2;
					StringCopy(&(Local_218.f_190[2 /*8*/]), "WORLD_HUMAN_DRINKING", 32);
					Local_218.f_95.f_1[0 /*14*/].f_3 = joaat("RUMPO");
					Local_218.f_95.f_1[0 /*14*/].f_4 = { 463.492f, -737.44f, 26.362f };
					Local_218.f_95.f_1[0 /*14*/].f_7 = 176.4f;
					func_429(0, 7);
					Local_218.f_10.f_5[0 /*12*/].f_10 = 0;
					Local_218.f_10.f_5[0 /*12*/].f_2 = joaat("PROP_DRUG_PACKAGE_02");
					Local_218.f_10 = 1;
					Local_218.f_28 = 3;
					Local_218.f_95 = 1;
					Local_218.f_112 = 0;
					Jump @3449; //curOff = 3177
					Local_218.f_28.f_1[0 /*20*/].f_2 = joaat("G_M_Y_AZTECA_01");
					Local_218.f_28.f_1[0 /*20*/].f_3 = { 514.941f, -859.401f, 40.852f };
					Local_218.f_28.f_1[0 /*20*/].f_6 = 271.354f;
					Local_218.f_28.f_1[0 /*20*/].f_7 = joaat("WEAPON_PISTOL");
					Local_218.f_28.f_1[1 /*20*/].f_2 = joaat("G_M_Y_AZTECA_01");
					Local_218.f_28.f_1[1 /*20*/].f_3 = { 515.098f, -860.411f, 40.771f };
					Local_218.f_28.f_1[1 /*20*/].f_6 = 271.354f;
					Local_218.f_28.f_1[1 /*20*/].f_7 = joaat("WEAPON_MICROSMG");
					Local_218.f_95.f_1[0 /*14*/].f_3 = joaat("RUMPO");
					Local_218.f_95.f_1[0 /*14*/].f_4 = { 514.737f, -859.692f, 38.819f };
					Local_218.f_95.f_1[0 /*14*/].f_7 = 270.754f;
					func_429(0, 7);
					Local_218.f_10.f_5[0 /*12*/].f_10 = 0;
					Local_218.f_10.f_5[0 /*12*/].f_2 = joaat("PROP_DRUG_PACKAGE_02");
					Local_218.f_10 = 1;
					Local_218.f_28 = 2;
					Local_218.f_95 = 1;
					Local_218.f_112 = 0;
					return true;
				}

bool func_434(int iParam0)
{
	return func_4(&uLocal_1229, iParam0);
}

void func_435()
{
	if (func_434(21))
	{
		return;
	}
	func_436();
	func_423(21);
}

void func_436()
{
	Local_433.f_6 = 137796;
	Local_433.f_6.f_1 = 135918;
	Local_433.f_1 = 135909;
	Local_433.f_2 = 135882;
	Local_433.f_8 = 135847;
	Local_433.f_3.f_1 = 134957;
	Local_433.f_18 = 134942;
	Local_433.f_18.f_1 = 134927;
	Local_433.f_73 = 134482;
	Local_433.f_73.f_13.f_2 = 134380;
	Local_433.f_73.f_62 = 134330;
	Local_433.f_73.f_76 = 133911;
	Local_433.f_188.f_23 = 133539;
	Local_433.f_188.f_22 = 133411;
	Local_433.f_188.f_13 = 133398;
	Local_433.f_188.f_27 = 132929;
	Local_433.f_37 = 132873;
	Local_433.f_38 = 132864;
	Local_433.f_38.f_1 = 132850;
	Local_433.f_252.f_3 = 132838;
	Local_433.f_252.f_1 = 132829;
	Local_433.f_252.f_4 = 132813;
	Local_433.f_54 = 132768;
	Local_433.f_54.f_1 = 132746;
	Local_433.f_54.f_2 = 132724;
	Local_433.f_54.f_7 = 132712;
	Local_433.f_54.f_3 = 132687;
	Local_433.f_54.f_4 = 132687;
	Local_433.f_54.f_15 = 132500;
	Local_433.f_263 = 132472;
	Local_433.f_216.f_13 = 132256;
	Local_433.f_216.f_14 = 132206;
	Local_433.f_257.f_1 = 132168;
	Local_433.f_257 = 132136;
}

char* func_437(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HLP_MPROP_0";
		default:
			break;
	}
	return "";
}

bool func_438(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_1164[0 /*5*/].f_4 == PLAYER::PLAYER_ID();
		default:
			break;
	}
	return false;
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_6(0, 4) || func_6(0, 3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_440(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = Local_1270.f_91[0 /*6*/];
			*uParam2 = { func_442() };
			*uParam3 = { func_441() };
			*uParam4 = 1;
			StringCopy(sParam5, "chassis_dummy", 24);
			return 1;
	}
	return 0;
}

Vector3 func_441()
{
	switch (func_428())
	{
		case 0:
			break;
		case 1:
			return -90f, 0f, 0f;
		case 2:
			return 0f, 0f, 90f;
	}
	return 0f, 0f, 0f;
}

Vector3 func_442()
{
	switch (func_428())
	{
		case 0:
			return 0f, -1f, 0.3f;
		case 1:
			return 0f, -2.4f, 0.38f;
		case 2:
			return 0f, -1f, -0.5f;
	}
	return 0f, 0f, 0f;
}

int func_443(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 755;
		default:
			break;
	}
	return 0;
}

void func_444(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_423(11);
		func_445(0, func_447(), 1, 0, 1);
	}
}

void func_445(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<7> Var0;
	int iVar7;

	Var0 = 224793881;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam3;
	iVar7 = func_446(Var0.f_1);
	if (iVar7 != 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 7, iVar7);
	}
}

int func_446(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_447()
{
	switch (func_428())
	{
		case 0:
			return 9;
		case 1:
			return 8;
		case 2:
			return 7;
		default:
			break;
	}
	return -1;
}

float func_448(var uParam0)
{
	return func_449();
}

float func_449()
{
	return 0.5f;
}

char* func_450(var uParam0)
{
	return "RE_BLIP_MPROP";
}

int func_451(var uParam0)
{
	return func_452();
}

int func_452()
{
	return 9;
}

int func_453(var uParam0)
{
	return func_454();
}

int func_454()
{
	return 143;
}

int func_455(int iParam0)
{
	if (HUD::DOES_BLIP_EXIST(iLocal_216[0]))
	{
		return 0;
	}
	if (Local_1164[iParam0 /*5*/].f_4 == PLAYER::PLAYER_ID())
	{
		return 0;
	}
	return 1;
}

var func_456(var uParam0)
{
	return Local_1270.f_91[0 /*6*/];
}

int func_457(var uParam0)
{
	return 0;
}

char* func_458(var uParam0)
{
	return "RE_BLIP_MPROP";
}

bool func_459()
{
	return func_6(0, 1);
}

int func_460()
{
	return 1;
}

Vector3 func_461()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[0 /*6*/]))
	{
		return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_1270.f_91[0 /*6*/]), false);
	}
	return Local_218.f_95.f_1[0 /*14*/].f_4;
}

void func_462(var uParam0, int iParam1)
{
	switch (func_427())
	{
		case 3:
		case 4:
		case 6:
		case 7:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
			{
				if (!func_6(0, 1))
				{
					if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam1, 2) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iParam1, 2) < 0.8f)
					{
						func_465(iParam1, 2, 0, 1, 5, 1065353216 /* Float: 1f */);
					}
					if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam1, 3) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iParam1, 3) < 0.8f)
					{
						func_465(iParam1, 3, 0, 1, 5, 1065353216 /* Float: 1f */);
					}
				}
				else if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam1, 2) && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam1, 3))
				{
					if (!func_13(&uLocal_212))
					{
						if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iParam1, 2) > 0.1f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iParam1, 3) > 0.1f)
						{
							func_12(&uLocal_212, 0, 0);
						}
					}
					else if (func_11(&uLocal_212, 2000, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, false))
						{
							if (func_463(iParam1, 2, 0, 1065353216 /* Float: 1f */) && func_463(iParam1, 3, 0, 1065353216 /* Float: 1f */))
							{
								VEHICLE::_SET_VEHICLE_DOOR_DESTROY_TYPE(iParam1, 2, 2);
								VEHICLE::_SET_VEHICLE_DOOR_DESTROY_TYPE(iParam1, 3, 2);
								func_22(&uLocal_212);
							}
						}
					}
				}
			}
			break;
	}
}

int func_463(int iParam0, int iParam1, int iParam2, float fParam3)
{
	float fVar0;
	float fVar1;

	if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iParam0, iParam1) > 0.01f)
	{
		fVar0 = VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iParam0, iParam1);
		fVar1 = (MISC::GET_FRAME_TIME() / (fParam3 * (1f - fVar0)));
		VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, iParam1, iParam2, func_464(0f, (fVar0 - fVar1)));
	}
	else
	{
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0, iParam1, true);
		VEHICLE::SET_VEHICLE_DOOR_LATCHED(iParam0, iParam1, true, true, false);
		return 1;
	}
	return 0;
}

float func_464(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_465(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, float fParam5)
{
	VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam0, iParam1, bParam2, bParam3);
	VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, iParam1, iParam4, fParam5);
}

float func_466(var uParam0)
{
	return 50f;
}

void func_467(var uParam0, int iParam1)
{
	VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iParam1, false);
	switch (func_427())
	{
		case 3:
		case 4:
		case 6:
		case 7:
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iParam1, 2, false);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iParam1, 3, false);
			func_465(iParam1, 2, 0, 1, 0, 1065353216 /* Float: 1f */);
			func_465(iParam1, 3, 0, 1, 0, 1065353216 /* Float: 1f */);
			break;
		case 5:
		case 8:
			VEHICLE::_SET_VEHICLE_DOOR_DESTROY_TYPE(iParam1, 2, 2);
			VEHICLE::_SET_VEHICLE_DOOR_DESTROY_TYPE(iParam1, 3, 2);
			break;
	}
}

int func_468(int iParam0, var uParam1)
{
	switch (func_428())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					StringCopy(&(uParam1->f_1), "69GUO730", 16);
					*uParam1 = 2;
					uParam1->f_5 = 129;
					uParam1->f_8 = 156;
					uParam1->f_97 = 1;
					uParam1->f_99 = 132;
					uParam1->f_98 = 0;
					uParam1->f_69 = 4;
					uParam1->f_62 = 255;
					uParam1->f_63 = 255;
					uParam1->f_64 = 255;
					uParam1->f_74 = 255;
					uParam1->f_76 = 255;
					MISC::SET_BIT(&(uParam1->f_77), 0);
					return 1;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					StringCopy(&(uParam1->f_1), "01ZTR149", 16);
					uParam1->f_5 = 110;
					uParam1->f_6 = 110;
					uParam1->f_7 = 110;
					uParam1->f_8 = 156;
					uParam1->f_97 = 1;
					uParam1->f_99 = 132;
					uParam1->f_98 = 0;
					uParam1->f_67 = 0;
					uParam1->f_69 = 1;
					uParam1->f_62 = 255;
					uParam1->f_63 = 255;
					uParam1->f_64 = 255;
					uParam1->f_74 = 255;
					uParam1->f_76 = 255;
					return 1;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					StringCopy(&(uParam1->f_1), "81HGQ634", 16);
					*uParam1 = 3;
					uParam1->f_5 = 3;
					uParam1->f_6 = 0;
					uParam1->f_7 = 5;
					uParam1->f_8 = 156;
					uParam1->f_97 = 1;
					uParam1->f_99 = 132;
					uParam1->f_98 = 0;
					uParam1->f_67 = 1;
					uParam1->f_69 = 1;
					uParam1->f_62 = 255;
					uParam1->f_63 = 255;
					uParam1->f_64 = 255;
					uParam1->f_74 = 255;
					uParam1->f_76 = 255;
					return 1;
			}
			break;
	}
	return 0;
}

void func_469(int iParam0)
{
	switch (func_427())
	{
		case 0:
		case 1:
		case 3:
		case 4:
		case 6:
		case 7:
			func_475(iParam0, 134233);
			func_475(iParam0, 134151);
			break;
		case 2:
		case 5:
		case 8:
			func_475(iParam0, 134127);
			break;
	}
	func_475(iParam0, 134096);
	func_475(iParam0, 134072);
	func_475(iParam0, 134048);
}

int func_470(int iParam0)
{
	if (func_73(iParam0, 23))
	{
		return 1;
	}
	return 0;
}

int func_471(int iParam0)
{
	if (func_73(iParam0, 21))
	{
		return 1;
	}
	return 0;
}

int func_472(int iParam0)
{
	func_47(iParam0, 27);
	if (func_73(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_473(int iParam0)
{
	if (func_73(iParam0, 24))
	{
		return 1;
	}
	return 0;
}

int func_474(int iParam0)
{
	func_47(iParam0, 26);
	if (func_73(iParam0, 25))
	{
		return 1;
	}
	return 0;
}

void func_475(int iParam0, int iParam1)
{
	Local_930[iParam0 /*76*/].f_67[Local_930[iParam0 /*76*/].f_73] = iParam1;
	Local_930[iParam0 /*76*/].f_73++;
}

int func_476(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = Local_218.f_28.f_1[iParam0 /*20*/].f_14;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar2 = Local_218.f_28.f_62[iVar1 /*4*/].f_1[iVar0];
		if (iVar2 != -1)
		{
			if (func_477(iVar2))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_477(int iParam0)
{
	return func_104(&(Local_1270.f_109), iParam0);
}

int func_478(var uParam0)
{
	switch (func_427())
	{
		case 2:
		case 5:
		case 8:
			return Local_1270.f_91[0 /*6*/];
	}
	return -1;
}

void func_479(var uParam0, bool bParam1)
{
	switch (func_427())
	{
		case 0:
		case 1:
		case 3:
		case 4:
		case 6:
		case 7:
			PED::_0xF1C03A5352243A30(bParam1);
			break;
	}
	PED::SET_PED_DIES_WHEN_INJURED(bParam1, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bParam1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 46, true);
}

void func_480(int iParam0)
{
	switch (func_427())
	{
		case 0:
		case 1:
		case 3:
		case 4:
		case 6:
		case 7:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					func_485(iParam0, 0, 9);
					func_483(iParam0, 0, 1, 134874);
					func_485(iParam0, 1, 7);
					break;
			}
			break;
		case 2:
		case 5:
		case 8:
			switch (iParam0)
			{
				case 0:
					func_485(iParam0, 0, 1);
					func_483(iParam0, 0, 1, 134743);
					func_483(iParam0, 0, 2, 134717);
					func_485(iParam0, 1, 7);
					func_485(iParam0, 2, 2);
					break;
				case 1:
					func_485(iParam0, 0, 0);
					func_483(iParam0, 0, 1, 134874);
					func_485(iParam0, 1, 7);
					break;
			}
			break;
	}
}

bool func_481(int iParam0, var uParam1)
{
	return (func_54(iParam0) && Local_1270.f_141 == 1);
}

bool func_482(int iParam0, var uParam1)
{
	return (func_54(iParam0) && Local_1270.f_141 == 0);
}

void func_483(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = Local_930[iParam0 /*76*/].f_1[iParam1 /*11*/].f_10;
	iVar1 = iParam2;
	Local_930[iParam0 /*76*/].f_1[iParam1 /*11*/].f_1[iVar0 /*2*/] = iVar1;
	Local_930[iParam0 /*76*/].f_1[iParam1 /*11*/].f_1[iVar0 /*2*/].f_1 = iParam3;
	Local_930[iParam0 /*76*/].f_1[iParam1 /*11*/].f_10++;
}

bool func_484(int iParam0, var uParam1)
{
	return func_54(iParam0);
}

void func_485(int iParam0, int iParam1, int iParam2)
{
	Local_930[iParam0 /*76*/].f_1[iParam1 /*11*/] = iParam2;
	Local_930[iParam0 /*76*/]++;
}

var func_486()
{
	return Global_262145.f_28849;
}

var func_487()
{
	return Global_262145.f_28848;
}

void func_488()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[0 /*6*/]) && func_496(NETWORK::NET_TO_VEH(Local_1270.f_91[0 /*6*/])))
	{
		if (func_492())
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_1270.f_91[0 /*6*/]), false))
			{
				if (!VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_1270.f_91[0 /*6*/]), PLAYER::PLAYER_ID()))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_1270.f_91[0 /*6*/]), PLAYER::PLAYER_ID(), true);
				}
			}
			else if (func_490(NETWORK::NET_TO_VEH(Local_1270.f_91[0 /*6*/]), 1093140480 /* Float: 10.5f */, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
			{
				if (!func_489(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 1))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_1270.f_91[0 /*6*/]), 0);
				}
			}
		}
		else if (VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_1270.f_91[0 /*6*/]), PLAYER::PLAYER_ID()))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_1270.f_91[0 /*6*/]), PLAYER::PLAYER_ID(), false);
		}
	}
}

bool func_489(int iParam0, int iParam1, bool bParam2)
{
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0 && bParam2))
	{
		return true;
	}
	return false;
}

bool func_490(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_491(iParam0);
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

void func_491(int iParam0)
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

bool func_492()
{
	if (((func_495() && !func_494()) || func_493(PLAYER::PLAYER_ID(), 21)) || func_493(PLAYER::PLAYER_ID(), 25))
	{
		return true;
	}
	return false;
}

bool func_493(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_208, iParam1);
}

bool func_494()
{
	return Global_1312418.f_1;
}

bool func_495()
{
	return Global_1312418;
}

bool func_496(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return true;
		}
	}
	return false;
}

void func_497()
{
	func_498(21);
}

void func_498(int iParam0)
{
	if (func_15(&(Local_218.f_8), iParam0))
	{
	}
}

int func_499()
{
	Global_1703580.f_5 = 0;
	Local_1196.f_1[0 /*4*/].f_2 = 1;
	return 1;
}

int func_500()
{
	return 1;
}

void func_501()
{
	func_520(0, 5, 137688);
	func_517(0, 1, 137594);
	func_502(1, 2, 3, 4, 5, 137688, 136265, 137688, 137688, 1);
	func_520(5, 44, 137688);
}

void func_502(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = iParam0;
	iVar1 = iParam1;
	iVar2 = iParam2;
	iVar3 = iParam3;
	if (bParam9)
	{
		iVar4 = iVar3;
		iVar5 = iVar0;
	}
	else
	{
		iVar4 = iVar0;
		iVar5 = iVar3;
	}
	func_520(iVar0, 25, iParam5);
	func_503(iVar0, iParam4);
	func_503(iVar0, iVar1);
	func_503(iVar0, iVar4);
	func_503(iVar0, iVar5);
	func_503(iVar0, iVar2);
	func_520(iVar1, 27, iParam6);
	func_503(iVar1, iParam4);
	func_503(iVar1, iVar4);
	func_503(iVar1, iVar5);
	func_503(iVar1, iVar2);
	func_520(iVar2, 28, iParam7);
	func_503(iVar2, iParam4);
	func_503(iVar2, iVar4);
	func_503(iVar2, iVar5);
	func_520(iVar3, 26, iParam8);
	func_503(iVar3, iParam4);
	func_503(iVar3, iVar1);
	func_503(iVar3, iVar4);
	func_503(iVar3, iVar5);
	func_503(iVar3, iVar2);
}

void func_503(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = Local_817[iParam0 /*16*/].f_14;
	iVar1 = iParam1;
	Local_817[iParam0 /*16*/].f_1[iVar0 /*2*/] = iVar1;
	Local_817[iParam0 /*16*/].f_14++;
}

void func_504()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		func_505("BBOT_LOSECOPS", 0);
		return;
	}
	func_505("RD_DELIVER_SOL", 0);
}

void func_505(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_515(sParam0))
	{
		return;
	}
	func_509();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_508();
	func_507(bParam1);
	func_506();
}

void func_506()
{
	MISC::SET_BIT(&(Global_1312585.f_59), 1);
}

void func_507(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_508()
{
	Global_1312585.f_10 = NETWORK::HAS_NETWORK_TIME_STARTED(NETWORK::_0xBA7F0B77D80A4EB7(), 86400000);
	Global_1312585.f_11 = NETWORK::_0xBA7F0B77D80A4EB7();
}

void func_509()
{
	func_511();
	func_510(0);
}

void func_510(bool bParam0)
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

void func_511()
{
	if (!func_514())
	{
	}
	if (func_513())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312585.f_12));
		func_512();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_512()
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

bool func_513()
{
	if (Global_1312585 == 20)
	{
		return false;
	}
	return true;
}

bool func_514()
{
	if (!func_513())
	{
		return false;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_512();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_515(char* sParam0)
{
	if (!func_513())
	{
		return false;
	}
	if (Global_1312585 == 11)
	{
		return func_516(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_516(char* sParam0)
{
	if (!func_513())
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

void func_517(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = Local_817[iParam0 /*16*/].f_14;
	iVar1 = iParam1;
	Local_817[iParam0 /*16*/].f_1[iVar0 /*2*/] = iVar1;
	Local_817[iParam0 /*16*/].f_1[iVar0 /*2*/].f_1 = iParam2;
	Local_817[iParam0 /*16*/].f_14++;
}

bool func_518()
{
	if (func_519(0, NETWORK::PARTICIPANT_ID(), 5))
	{
		return true;
	}
	return func_6(0, 1);
}

bool func_519(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_1436[iParam1 /*37*/].f_19[iParam0 /*2*/]), iParam2);
}

void func_520(int iParam0, int iParam1, int iParam2)
{
	Local_817[iParam0 /*16*/] = iParam1;
	Local_817[iParam0 /*16*/].f_15 = iParam2;
	iLocal_1228++;
}

void func_521()
{
	if (func_523())
	{
		func_522();
	}
}

void func_522()
{
	if (!func_513())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return;
	}
	func_509();
}

bool func_523()
{
	if (!func_513())
	{
		return false;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return false;
	}
	return true;
}

void func_524()
{
	func_529(0, 5);
	func_527(0, 1, 138065);
	func_529(1, 25);
	func_526(1, 2);
	func_527(1, 3, 137867);
	func_529(2, 27);
	func_527(2, 3, 137867);
	func_529(3, 44);
}

int func_525()
{
	switch (func_408())
	{
		case 3:
		case 4:
		case 1:
			return 1;
		default:
			break;
	}
	if (func_6(0, 4) || func_6(0, 3))
	{
		return 1;
	}
	return 0;
}

void func_526(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = Local_711[iParam0 /*15*/].f_14;
	iVar1 = iParam1;
	Local_711[iParam0 /*15*/].f_1[iVar0 /*2*/] = iVar1;
	Local_711[iParam0 /*15*/].f_14++;
}

void func_527(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = Local_711[iParam0 /*15*/].f_14;
	iVar1 = iParam1;
	Local_711[iParam0 /*15*/].f_1[iVar0 /*2*/] = iVar1;
	Local_711[iParam0 /*15*/].f_1[iVar0 /*2*/].f_1 = iParam2;
	Local_711[iParam0 /*15*/].f_14++;
}

bool func_528()
{
	return func_368(0, 6);
}

void func_529(int iParam0, int iParam1)
{
	Local_711[iParam0 /*15*/] = iParam1;
	iLocal_1227++;
}

void func_530()
{
}

bool func_531(int iParam0, int iParam1)
{
	Local_1270.f_162 = iParam0;
	Local_1270.f_162.f_1 = iParam1;
	Local_1270.f_141 = 1;
	return true;
}

int func_532()
{
	int iVar0;

	iVar0 = NETWORK::_0x638A3A81733086DB();
	if (iVar0 != -1)
	{
		return Global_1703118.f_1[iVar0 /*13*/].f_6;
	}
	return -1;
}

int func_533()
{
	int iVar0;

	iVar0 = NETWORK::_0x638A3A81733086DB();
	if (iVar0 != -1)
	{
		return Global_1703118.f_1[iVar0 /*13*/].f_5;
	}
	return -1;
}

bool func_534()
{
	if (func_434(11))
	{
		return true;
	}
	if (func_381())
	{
		return func_539(bLocal_1216);
	}
	return func_535(bLocal_1216);
}

int func_535(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 4) || !func_536(bParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_536(bool bParam0, int iParam1)
{
	if (func_537(bParam0, 1))
	{
		return Local_1270.f_2.f_9[iParam1] == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(func_69(bParam0));
	}
	return Local_1270.f_2.f_9[iParam1] == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(bParam0);
}

bool func_537(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_538(bParam0))
		{
			return false;
		}
	}
	return Global_1628237[bParam0 /*615*/].f_11 != func_68();
}

bool func_538(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_68())
		{
			return Global_1628237[bParam0 /*615*/].f_11 == bParam0;
		}
	}
	return false;
}

bool func_539(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 4) && func_536(bParam0, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_540()
{
	func_688();
	func_607();
	func_544();
	func_541();
}

void func_541()
{
	if (!func_434(30))
	{
		if (Local_433.f_45 != 0)
		{
			Call_Loc(Local_433.f_45);
			func_542(StackVal);
		}
		func_423(30);
	}
}

void func_542(int iParam0)
{
	if (iParam0 == -1 || iParam0 == 0)
	{
		return;
	}
	func_543(iParam0);
}

void func_543(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2537071.f_5124.f_35[iVar0]), iVar1);
}

void func_544()
{
	int iVar0;
	int iVar1;

	if (func_369(iLocal_1219, 0))
	{
		return;
	}
	if (func_434(11))
	{
		if (Local_433.f_18 != 0)
		{
			Stack.Push(iVar0);
			Call_Loc(Local_433.f_18);
			iVar0 = (StackVal + StackVal);
		}
		if (Local_433.f_18.f_1 != 0)
		{
			Stack.Push(iVar1);
			Call_Loc(Local_433.f_18.f_1);
			iVar1 = (StackVal + StackVal);
		}
	}
	if (Local_433.f_18.f_5 != 0)
	{
		Stack.Push(IntToFloat(iVar0));
		Call_Loc(Local_433.f_18.f_5);
		iVar0 = SYSTEM::ROUND((StackVal * StackVal));
		Stack.Push(IntToFloat(iVar1));
		Call_Loc(Local_433.f_18.f_5);
		iVar1 = SYSTEM::ROUND((StackVal * StackVal));
	}
	if (iVar0 > 0)
	{
		func_595(iVar0);
		if (Local_218.f_134)
		{
			Global_2462880 = iVar0;
			func_16(&Global_2461144, 0, 0);
		}
	}
	if (iVar1 > 0)
	{
		if (Local_218.f_134.f_1)
		{
			func_594();
		}
		func_546(0, bLocal_1217, "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	Local_1189.f_4 = (Local_1189.f_4 + iVar0);
	Local_1189.f_5 = (Local_1189.f_5 + iVar1);
	func_545(0);
}

void func_545(int iParam0)
{
	if (func_15(&(Local_1436[iLocal_1218 /*37*/].f_1), iParam0))
	{
	}
}

int func_546(int iParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	return func_547(iParam0, bParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, iParam10);
}

int func_547(int iParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;

	iVar0 = func_557(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(bParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1);
				func_553(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, iParam8, iParam10);
			}
		}
	}
	else
	{
		func_548(bParam1, iVar0, iParam8, iParam10);
	}
	return iVar0;
}

void func_548(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	vector3 vVar0;

	vVar0 = { func_551(bParam0, 1) };
	if (bParam0 == func_550(PLAYER::PLAYER_PED_ID()))
	{
		func_549(1);
	}
	func_553(vVar0, iParam1, 0, iParam2, iParam3);
}

void func_549(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_550(int iParam0)
{
	return iParam0;
}

Vector3 func_551(bool bParam0, bool bParam1)
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
	if (bParam0 == func_552(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(bParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(bParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar6 = vVar3.z;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(bParam0), &vVar7, &vVar10);
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

bool func_552(int iParam0)
{
	return iParam0;
}

void func_553(vector3 vParam0, int iParam3, int iParam4, char* sParam5, bool bParam6)
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
			Global_2439138.f_1290[iVar1 /*30*/].f_4 = func_556(Global_2439138.f_1290[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1 /*30*/].f_7 = NETWORK::_0xBA7F0B77D80A4EB7();
			Global_2439138.f_1290[iVar1 /*30*/].f_3 = iParam3;
			Global_2439138.f_1290[iVar1 /*30*/].f_8 = iParam4;
			Global_2439138.f_1290[iVar1 /*30*/].f_9 = func_555();
			Global_2439138.f_1290[iVar1 /*30*/].f_10 = func_554();
			StringCopy(&(Global_2439138.f_1290[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1 /*30*/].f_26 = NETWORK::HAS_NETWORK_TIME_STARTED(NETWORK::_0xBA7F0B77D80A4EB7(), bParam6);
		}
	}
}

int func_554()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_555()
{
	var uVar0;

	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_556(vector3 vParam0, var uParam3, var uParam4)
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

int func_557(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_558(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return iVar0;
}

int func_558(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (func_593(PLAYER::PLAYER_ID()) || func_592(PLAYER::PLAYER_ID()))
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
	else if (func_590() || func_588(PLAYER::PLAYER_ID()))
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
	if (func_587(sParam2))
	{
	}
	if (func_586())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_584(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_583(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_581(0, &iVar1);
					break;
				case 3:
					func_581(1, &iVar1);
					break;
				case 1:
					func_579(&iVar1);
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
			func_577(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_568((func_576(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_2 != -1)
				{
					func_577(1165, iVar1, -1);
				}
				func_563(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_559((func_561(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_559((func_561(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_559(int iParam0)
{
	if (func_586())
	{
		Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_211.f_5 = iParam0;
		func_560(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_560(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_561(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_28(bParam0, 0, 1))
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return func_562(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_5;
			}
		}
		else
		{
			return func_562(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_562(int iParam0)
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

void func_563(int iParam0)
{
	struct<13> Var0;
	int iVar13;

	Var0 = { func_70(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_566(func_567(&Var0));
			if (iVar13 == 0)
			{
				func_565(&Global_1387915, iParam0);
				func_564(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_565(&Global_1387916, iParam0);
				func_564(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_565(&Global_1387917, iParam0);
				func_564(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_565(&Global_1387918, iParam0);
				func_564(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_565(&Global_1387919, iParam0);
				func_564(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1387919);
			}
		}
	}
}

void func_564(int iParam0, int iParam1)
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

void func_565(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_566(int iParam0)
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

int func_567(int* iParam0)
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

void func_568(int iParam0, int iParam1, int iParam2)
{
	if (func_586())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_155(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_155(-1)])
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
		if (func_362(PLAYER::PLAYER_ID()))
		{
			Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_211.f_1 = iParam0;
			Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_211.f_6 = func_574(iParam0, 1);
		}
		func_573(639, iParam0, -1, 1);
		func_572(640, func_574(iParam0, 1), -1, 1, 0);
		Global_1388060[func_155(-1)] = iParam0;
		func_569(-1109644434, 7, 0);
	}
}

void func_569(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_571(iParam1, bParam2))
	{
		iVar0 = func_570();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_570()
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

bool func_571(int iParam0, bool bParam1)
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

void func_572(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_155(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_573(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = Global_2548434[iParam0 /*3*/][func_155(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_155(iParam2)] = iParam1;
			break;
		case 788:
			Global_1387994[func_155(iParam2)] = iParam1;
			break;
		case 789:
			Global_1388000[func_155(iParam2)] = iParam1;
			break;
		case 790:
			Global_1388006[func_155(iParam2)] = iParam1;
			break;
		case 8726:
			Global_1388012[func_155(iParam2)] = iParam1;
			break;
		case 777:
			Global_1387958[func_155(iParam2)] = iParam1;
			break;
		case 778:
			Global_1387964[func_155(iParam2)] = iParam1;
			break;
		case 779:
			Global_1387970[func_155(iParam2)] = iParam1;
			break;
		case 780:
			Global_1387976[func_155(iParam2)] = iParam1;
			break;
		case 8728:
			Global_1387982[func_155(iParam2)] = iParam1;
			break;
		case 767:
			Global_1387928[func_155(iParam2)] = iParam1;
			break;
		case 768:
			Global_1387934[func_155(iParam2)] = iParam1;
			break;
		case 769:
			Global_1387940[func_155(iParam2)] = iParam1;
			break;
		case 770:
			Global_1387946[func_155(iParam2)] = iParam1;
			break;
		case 8730:
			Global_1387952[func_155(iParam2)] = iParam1;
			break;
		case 757:
			Global_1388018[func_155(iParam2)] = iParam1;
			break;
		case 758:
			Global_1388024[func_155(iParam2)] = iParam1;
			break;
		case 759:
			Global_1388030[func_155(iParam2)] = iParam1;
			break;
		case 760:
			Global_1388036[func_155(iParam2)] = iParam1;
			break;
		case 8732:
			Global_1388042[func_155(iParam2)] = iParam1;
			break;
		case 1303:
			Global_1388048[func_155(iParam2)] = iParam1;
			break;
		case 7233:
			Global_1388054[func_155(iParam2)] = iParam1;
			break;
		case 639:
			Global_1388060[func_155(iParam2)] = iParam1;
			break;
		case 1278:
			Global_1388066[func_155(iParam2)] = iParam1;
			break;
		case 1876:
			Global_2586065[0 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 2267:
			Global_2586065[1 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 2929:
			Global_2586065[2 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3058:
			Global_2586065[3 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 10016:
			Global_2586214[func_155(iParam2)] = iParam1;
			break;
		case 764:
			Global_1388072[func_155(iParam2)] = iParam1;
			break;
		case 765:
			Global_1388078[func_155(iParam2)] = iParam1;
			break;
		case 766:
			Global_1388084[func_155(iParam2)] = iParam1;
			break;
		case 8731:
			Global_1388090[func_155(iParam2)] = iParam1;
			break;
		case 1236:
			Global_1388096[func_155(iParam2)] = iParam1;
			break;
		case 3053:
			Global_2586138[0 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3054:
			Global_2586138[1 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3055:
			Global_2586138[2 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3056:
			Global_2586138[3 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3057:
			Global_2586138[4 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3636:
			Global_2586217[0 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3637:
			Global_2586217[1 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3638:
			Global_2586217[2 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3639:
			Global_2586217[3 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3640:
			Global_2586217[4 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3641:
			Global_2586233[0 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3642:
			Global_2586233[1 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3643:
			Global_2586233[2 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3644:
			Global_2586233[3 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3645:
			Global_2586233[4 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3221:
			Global_2586138[5 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3227:
			Global_2586065[4 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3663:
			Global_2586249[func_155(iParam2)] = iParam1;
			break;
		case 3664:
			Global_2586258[func_155(iParam2)] = iParam1;
			break;
		case 3665:
			Global_2586252[func_155(iParam2)] = iParam1;
			break;
		case 3666:
			Global_2586261[func_155(iParam2)] = iParam1;
			break;
		case 3667:
			Global_2586255[func_155(iParam2)] = iParam1;
			break;
		case 3668:
			Global_2586264[func_155(iParam2)] = iParam1;
			break;
		case 3689:
			Global_2586267[func_155(iParam2)] = iParam1;
			break;
		case 3229:
			Global_2586138[6 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3230:
			Global_2586065[5 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3234:
			Global_2586138[7 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 3232:
			Global_2586065[6 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 4019:
			Global_2586138[8 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 4020:
			Global_2586065[7 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 4022:
			Global_2586138[9 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 4023:
			Global_2586065[8 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 4025:
			Global_2586138[10 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 4026:
			Global_2586065[9 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 4028:
			Global_2586138[11 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 4029:
			Global_2586065[10 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 6109:
			Global_2586138[12 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 6110:
			Global_2586065[11 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 6167:
			Global_2586138[13 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 6168:
			Global_2586065[12 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 6545:
			Global_2586138[14 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 6546:
			Global_2586065[13 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 6558:
			Global_2586138[15 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 6559:
			Global_2586065[14 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 6561:
			Global_2586138[16 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 6562:
			Global_2586065[15 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 6564:
			Global_2586138[17 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 6565:
			Global_2586065[16 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 7283:
			Global_2586065[17 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 7285:
			Global_2586065[18 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 7287:
			Global_2586065[19 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 8010:
			Global_2586065[20 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 8282:
			Global_2586270[func_155(iParam2)] = iParam1;
			break;
		case 8283:
			Global_2586273[func_155(iParam2)] = iParam1;
			break;
		case 8284:
			Global_2586276[func_155(iParam2)] = iParam1;
			break;
		case 8285:
			Global_2586279[func_155(iParam2)] = iParam1;
			break;
		case 8286:
			Global_2586282[func_155(iParam2)] = iParam1;
			break;
		case 8287:
			Global_2586285[func_155(iParam2)] = iParam1;
			break;
		case 8288:
			Global_2586288[func_155(iParam2)] = iParam1;
			break;
		case 8289:
			Global_2586291[func_155(iParam2)] = iParam1;
			break;
		case 8290:
			Global_2586294[func_155(iParam2)] = iParam1;
			break;
		case 8291:
			Global_2586297[func_155(iParam2)] = iParam1;
			break;
		case 8292:
			Global_2586300[func_155(iParam2)] = iParam1;
			break;
		case 8293:
			Global_2586303[func_155(iParam2)] = iParam1;
			break;
		case 8294:
			Global_2586306[func_155(iParam2)] = iParam1;
			break;
		case 8900:
			Global_2586309[func_155(iParam2)] = iParam1;
			break;
		case 8534:
			Global_2586065[21 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 8977:
			Global_2586138[23 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 8975:
			Global_2586065[22 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 8980:
			Global_2586138[24 /*3*/][func_155(iParam2)] = iParam1;
			break;
		case 8978:
			Global_2586065[23 /*3*/][func_155(iParam2)] = iParam1;
			break;
		default:
			break;
	}
}

int func_574(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_575(iParam0, 0);
}

int func_575(int iParam0, int iParam1)
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

int func_576(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388060[func_155(-1)];
			}
			else if (func_362(iParam0))
			{
				return Global_1590535[iParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_155(-1)];
	}
	return 0;
}

void func_577(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_154(iParam0, func_155(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_578(iParam0))
	{
		func_572(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_573(iParam0, iVar0, iParam2, 1);
	}
}

bool func_578(int iParam0)
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

void func_579(int iParam0)
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
				if (PLAYER::GET_PLAYER_TEAM(bVar5) == iVar1 || func_274(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != PLAYER::PLAYER_ID())
					{
						if (func_71(PLAYER::PLAYER_ID(), bVar5))
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
		iVar6 = SYSTEM::ROUND((func_580(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_580(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_580(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_581(bool bParam0, int iParam1)
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
				if (func_28(bVar4, 0, 1))
				{
					if (bVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_71(PLAYER::PLAYER_ID(), bVar4))
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
			if (func_28(bVar4, 1, 1))
			{
				if (bVar4 != PLAYER::PLAYER_ID())
				{
					if (func_582(PLAYER::PLAYER_ID(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_71(PLAYER::PLAYER_ID(), bVar4))
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
		iVar5 = SYSTEM::ROUND((func_580(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_580(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_582(bool bParam0, bool bParam1)
{
	return SYSTEM::VDIST(func_63(bParam0), func_63(bParam1));
	return 0f;
}

int func_583(int iParam0)
{
	int iVar0;

	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_580(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_584(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_576(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_576(PLAYER::PLAYER_ID());
		}
	}
	if (func_585(8000, 0, 0) > 0)
	{
		if (func_585(8000, 0, 0) < (iParam0 + func_576(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_585(8000, 0, 0) - func_576(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_585(int iParam0, bool bParam1, int iParam2)
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

bool func_586()
{
	return true;
}

bool func_587(char* sParam0)
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

bool func_588(bool bParam0)
{
	return func_589(func_176(bParam0));
}

bool func_589(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return true;
		default:
			break;
	}
	return false;
}

bool func_590()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_64();
	}
	return func_591(Global_4456448.f_194990);
}

int func_591(int iParam0)
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

bool func_592(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_593(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

void func_594()
{
	Global_2462221 = 1;
}

void func_595(int iParam0)
{
	var uVar0;
	var uVar1;

	if (func_218())
	{
		func_596(-1027218631, iParam0, &uVar0, 0, 1, 0);
	}
	else
	{
		MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iParam0, "FM Event Completion", &uVar1);
	}
}

void func_596(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_218())
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
				func_597(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_597(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_597(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_597(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_597(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_27()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
			*uParam0 = func_604(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_603(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_598(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_598(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_599(iParam0);
	}
}

void func_599(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_602(iParam0))
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
		func_600(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_600(var uParam0)
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
	func_601(&(uParam0->f_14));
	func_601(&(uParam0->f_14.f_13));
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

void func_601(var uParam0)
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

bool func_602(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return false;
}

void func_603(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_604(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_218())
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
				func_605(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_605(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_446(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_606();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 36, iVar36);
	}
}

void func_606()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

void func_607()
{
	if (!func_434(8))
	{
		if (func_660(0, 1, 1) && func_659())
		{
			func_608();
			func_423(8);
		}
	}
}

void func_608()
{
	int iVar0;

	if (func_434(11))
	{
		iVar0 = Global_1703580.f_3;
		if (!Global_1703580.f_5)
		{
			iVar0++;
		}
		else
		{
			Global_1703580.f_5 = 0;
		}
		if (iVar0 > 10)
		{
			iVar0 = 10;
		}
		func_614(25, iVar0, "RE_SHRD_SMPDEL", "RE_SHRD_TMPDEL", 1, 15000, -1082130432 /* Float: -1f */, 2);
		func_609("RE_SHRD_MPTICK", iVar0);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "movie_prop", "DLC_SUM20_HIDDEN_COLLECTIBLES", false);
	}
}

int func_609(char* sParam0, int iParam1)
{
	int iVar0;

	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_610(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_610(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;

	if ((!func_613() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_25(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_611(iParam2);
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

int func_611(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0 /*53*/].f_1)
		{
			func_612(iVar0);
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

void func_612(int iParam0)
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0 /*53*/] = { Global_1670846.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_613()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_614(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_658(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_615(&Var0);
}

int func_615(var uParam0)
{
	int iVar0;

	if (uParam0->f_1 == 1)
	{
		if (Global_2439138.f_3045)
		{
			return 0;
		}
	}
	func_631(uParam0, uParam0->f_17);
	func_628(uParam0);
	if (func_64())
	{
		func_628(uParam0);
	}
	if (func_627(uParam0->f_1))
	{
		func_620();
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
				func_620();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_618(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 2);
				Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_617(uParam0->f_69, 128))
			{
				if (func_616(Global_2439138.f_2723[iVar0 /*80*/].f_1))
				{
					Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
					func_618(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_616(int iParam0)
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

bool func_617(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_618(var uParam0, int iParam1)
{
	func_619(uParam0, iParam1);
}

void func_619(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_620()
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
	func_621();
	if (bVar0)
	{
		Global_76890 = 0;
	}
}

void func_621()
{
	Global_2439138.f_3047 = 0;
	Global_2439138.f_3047.f_578 = 0;
	func_625(&(Global_2439138.f_3047.f_1));
	Global_2439138.f_3047.f_1.f_1 = 0;
	func_622(&(Global_2439138.f_3047.f_1));
}

void func_622(var uParam0)
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_624(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_623(0);
}

void func_623(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_624(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

void func_625(var uParam0)
{
	func_626(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_626(var uParam0)
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

bool func_627(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return true;
	}
	return false;
}

void func_628(var uParam0)
{
	if (func_630(uParam0->f_1))
	{
		uParam0->f_72 = func_629();
	}
}

int func_629()
{
	return 21;
}

bool func_630(int iParam0)
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

void func_631(var uParam0, bool bParam1)
{
	if (func_630(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_68() || !func_28(bParam1, 0, 1))
	{
		return;
	}
	if (func_616(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_632(bParam1, -2, 0, 0, 0);
		}
	}
}

int func_632(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (func_278(bParam0) && !bParam4)
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
	if (((func_278(PLAYER::PLAYER_ID()) || (func_657() && func_656())) && !MISC::IS_BIT_SET(Global_2537071.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_655();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_28(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_653(iParam1, bParam0, 0);
							}
							else
							{
								return func_644(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_644(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_653(iParam1, bParam0, 0);
				}
				else
				{
					return func_633(0, -1, 0);
				}
			}
			else
			{
				return func_633(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_653(iParam1, bParam0, 0);
		}
		else
		{
			return func_644(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_644(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_633(bool bParam0, int iParam1, bool bParam2)
{
	return func_634(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_634(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	if ((func_643() || (func_642() && func_640())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_639(iParam2, iVar0);
		}
		else
		{
			return func_639(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_274(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_638(1);
				}
				else
				{
					return func_638(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_635(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_635(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_638(1);
	}
	return func_638(0);
}

int func_635(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_637(iParam0, iParam1, iParam3);
	if (func_636(Global_4456448.f_194990, 1))
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

bool func_636(int iParam0, bool bParam1)
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

int func_637(int iParam0, int iParam1, int iParam2)
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
			if (!func_274(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_638(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_639(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_637(iParam1, iParam0, 4);
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

bool func_640()
{
	if (func_641())
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_237025, 4);
}

bool func_641()
{
	return MISC::IS_BIT_SET(Global_4456448.f_226020, 12);
}

bool func_642()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_237025, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_237025, 0) || Global_1653478) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FM_DEATHMATCH_CREATOR")) > 0);
}

bool func_643()
{
	if (func_641() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return true;
	}
	return false;
}

int func_644(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_650())
			{
				iVar3 = func_649(bParam0);
				if (!iVar3 == -1)
				{
					return func_647(iVar3);
				}
			}
			if ((func_646(bParam1, bParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_274(PLAYER::GET_PLAYER_TEAM(bParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_638(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_645(1);
			}
			else
			{
				return func_634(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[bParam0 /*876*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_638(1);
			}
			else
			{
				return func_634(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_649(bParam0);
	if (!iVar4 == -1)
	{
		return func_647(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_645(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_646(bool bParam0, bool bParam1, int iParam2, int iParam3)
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

int func_647(int iParam0)
{
	int iVar0;

	if (iParam0 > -1)
	{
		iVar0 = func_648(iParam0);
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

int func_648(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_649(bool bParam0)
{
	if (!bParam0 == func_68())
	{
		if (func_537(bParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_69(bParam0)];
		}
	}
	return -1;
}

bool func_650()
{
	if (((func_346() || func_652()) || func_64()) || func_651())
	{
		return true;
	}
	return false;
}

bool func_651()
{
	return Global_2450632.f_19;
}

bool func_652()
{
	return Global_2450632.f_16;
}

int func_653(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = Global_969031.f_14[iParam0];
	if (func_650())
	{
		iVar2 = func_649(bParam1);
		if (!iVar2 == -1)
		{
			return func_647(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_271[iParam0 /*15700*/].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_68())
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
			iVar0 = func_634(bParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_654(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_274(iParam0, PLAYER::GET_PLAYER_TEAM(bParam1), 0))
		{
			iVar0 = func_645(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_654(int iParam0)
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

int func_655()
{
	return Global_2359302.f_2;
}

bool func_656()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_657()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_18, 14);
}

void func_658(int iParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_68();
	uParam1->f_18 = func_68();
	uParam1->f_19 = func_68();
	uParam1->f_20 = func_68();
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

bool func_659()
{
	return true;
}

bool func_660(bool bParam0, int iParam1, bool bParam2)
{
	return (!func_492() && func_661(iParam1, bParam0, bParam2));
}

bool func_661(int iParam0, bool bParam1, bool bParam2)
{
	if (func_687(PLAYER::PLAYER_ID(), 29))
	{
		return false;
	}
	if (func_493(PLAYER::PLAYER_ID(), 21))
	{
		return false;
	}
	if (func_493(PLAYER::PLAYER_ID(), 25))
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
	if (func_686(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_685())
	{
		return false;
	}
	if (bParam2)
	{
		if (func_684(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	if (func_683())
	{
		return false;
	}
	if (func_679(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_678(PLAYER::PLAYER_ID()) != func_68() && func_678(PLAYER::PLAYER_ID()) == func_69(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_676(func_677()) && !func_674(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_673())
	{
		return false;
	}
	if (func_672())
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return false;
	}
	if (func_276(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!func_670())
	{
		return false;
	}
	if (func_493(PLAYER::PLAYER_ID(), 0) || func_493(PLAYER::PLAYER_ID(), 3))
	{
		return false;
	}
	if ((func_493(PLAYER::PLAYER_ID(), 12) || func_493(PLAYER::PLAYER_ID(), 14)) || func_493(PLAYER::PLAYER_ID(), 13))
	{
		return false;
	}
	if (func_669(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_668() && !Global_2513487)
		{
			return false;
		}
	}
	if (func_667(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_159())
	{
		return false;
	}
	if (Global_1662006)
	{
		return false;
	}
	if (func_666(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_665())
	{
		return false;
	}
	if (func_663(PLAYER::PLAYER_ID()) && Global_1590184.f_171)
	{
		return false;
	}
	if (func_299())
	{
		return false;
	}
	if (func_662(PLAYER::PLAYER_ID()))
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
	return true;
}

bool func_662(int iParam0)
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

int func_663(int iParam0)
{
	if (func_664(Global_1590535[iParam0 /*876*/].f_274.f_28))
	{
		return 1;
	}
	return 0;
}

bool func_664(int iParam0)
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

bool func_665()
{
	if (Global_4254512.f_943 > -1)
	{
		return true;
	}
	return false;
}

bool func_666(bool bParam0)
{
	if (!func_28(bParam0, 0, 1))
	{
		return false;
	}
	return Global_1590535[bParam0 /*876*/].f_35;
}

bool func_667(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 11);
}

bool func_668()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_669(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_68())
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

bool func_670()
{
	if (func_671() == 0)
	{
		return true;
	}
	return false;
}

int func_671()
{
	return Global_1312467.f_18;
}

bool func_672()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_196 != 0;
}

bool func_673()
{
	return Global_1312877;
}

bool func_674(int iParam0)
{
	if (func_675(iParam0) == 236 || func_675(iParam0) == 150)
	{
		return true;
	}
	return false;
}

int func_675(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return Global_1628237[bVar0 /*615*/];
	}
	return -1;
}

bool func_676(int iParam0)
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

int func_677()
{
	return Global_2439138.f_2723[0 /*80*/].f_1;
}

bool func_678(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_11.f_35;
}

bool func_679(bool bParam0)
{
	if (func_682(bParam0))
	{
		return true;
	}
	if (func_680(bParam0))
	{
		return true;
	}
	return false;
}

bool func_680(bool bParam0)
{
	return func_681(bParam0, 20);
}

bool func_681(bool bParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_11.f_4, iParam1);
}

bool func_682(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[bVar0 /*615*/].f_1, 7);
	}
	return false;
}

bool func_683()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 5;
}

bool func_684(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_261.f_4 != 0 || Global_2425662[iParam0 /*421*/].f_261.f_5)
	{
		return true;
	}
	return false;
}

bool func_685()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_18, 0);
}

bool func_686(bool bParam0)
{
	if (func_275(bParam0, 1, 0))
	{
		if (Global_1590535[bParam0 /*876*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_687(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_11.f_5, iParam1);
}

void func_688()
{
	int iVar0;

	if (func_692())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_691(iVar0, iLocal_1219, 16))
		{
			if (Local_1270.f_2.f_15[iVar0 /*2*/].f_1 != -1)
			{
				func_690(Local_1270.f_2.f_15[iVar0 /*2*/]);
			}
			func_689(iVar0, 16);
		}
		iVar0++;
	}
}

void func_689(int iParam0, int iParam1)
{
	if (func_15(&(Local_1436[iLocal_1218 /*37*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

void func_690(struct<2> Param0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1681961.f_4558[iVar0 /*2*/].f_1 == -1)
		{
			Global_1681961.f_4558[iVar0 /*2*/] = { Param0 };
			MISC::SET_BIT(&Global_1681961, 1);
			return;
		}
		iVar0++;
	}
	if (!MISC::IS_BIT_SET(Global_1681961, 1))
	{
		MISC::SET_BIT(&Global_1681961, 1);
	}
}

bool func_691(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_1436[iParam1 /*37*/].f_3[iParam0 /*3*/]), iParam2);
}

bool func_692()
{
	return func_693(PLAYER::PLAYER_ID());
}

int func_693(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_694(Global_1628237[iParam0 /*615*/].f_579.f_12) || MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_579, 4))
		{
			return 1;
		}
	}
	return 0;
}

bool func_694(struct<2> Param0)
{
	return (Param0.f_1 != -1 && Param0 != func_68());
}

void func_695()
{
}

void func_696()
{
	func_1317();
	func_1313();
	func_1311();
	func_1281();
	if (Local_433.f_3.f_1 != 0)
	{
		Call_Loc(Local_433.f_3.f_1);
	}
	func_1194();
	func_1149();
	func_1132();
	func_1031();
	func_1026();
	func_1008();
	func_977();
	func_948();
	func_913();
	func_912();
	func_892();
	func_888();
	func_755();
	func_752();
	func_733();
	func_708();
	func_701();
	func_697();
}

void func_697()
{
	int iVar0;

	if (func_700() != -1)
	{
		while ((func_700() < iLocal_1228 && iVar0 < Local_817[func_700() /*16*/].f_14) && Local_817[func_700() /*16*/].f_1[iVar0 /*2*/] != -1)
		{
			if (func_699(func_700(), iVar0))
			{
				Call_Loc(Local_817[func_700() /*16*/].f_13);
				func_698(Local_817[func_700() /*16*/].f_1[iVar0 /*2*/]);
				Call_Loc(Local_817[func_700() /*16*/].f_12);
				return;
			}
			iVar0++;
		}
	}
}

void func_698(var uParam0)
{
	Local_1436[iLocal_1218 /*37*/] = uParam0;
}

bool func_699(int iParam0, int iParam1)
{
	if (Local_817[iParam0 /*16*/].f_1[iParam1 /*2*/].f_1 != 0)
	{
		Call_Loc(Local_817[iParam0 /*16*/].f_1[iParam1 /*2*/].f_1);
		return StackVal;
	}
	return (Local_817[iParam0 /*16*/].f_1[iParam1 /*2*/] == func_20() || Local_817[iParam0 /*16*/].f_1[iParam1 /*2*/] == Local_1270.f_131);
}

int func_700()
{
	return Local_1436[iLocal_1218 /*37*/];
}

void func_701()
{
	float fVar0;

	if (!func_707())
	{
		return;
	}
	if (!func_706())
	{
		PAD::DISABLE_CONTROL_ACTION(0, 22, true);
		PED::SET_PED_RESET_FLAG(bLocal_1217, 102, true);
		PED::SET_PED_RESET_FLAG(bLocal_1217, 362, true);
	}
	fVar0 = func_705();
	if (fVar0 != -1f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(bLocal_1217, fVar0);
	}
	fVar0 = func_704();
	if (fVar0 != -1f)
	{
		PED::SET_PED_CAPSULE(bLocal_1217, fVar0);
	}
	if (func_703())
	{
		ENTITY::SET_ENTITY_VELOCITY(bLocal_1217, func_702());
	}
}

Vector3 func_702()
{
	if (Local_433.f_10.f_5 != 0)
	{
		Call_Loc(Local_433.f_10.f_5);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

bool func_703()
{
	if (Local_433.f_10.f_4 != 0)
	{
		Call_Loc(Local_433.f_10.f_4);
		return StackVal;
	}
	return false;
}

float func_704()
{
	if (Local_433.f_10.f_3 != 0)
	{
		Call_Loc(Local_433.f_10.f_3);
		return StackVal;
	}
	return 0.3f;
}

float func_705()
{
	if (Local_433.f_10.f_2 != 0)
	{
		Call_Loc(Local_433.f_10.f_2);
		return StackVal;
	}
	if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(bLocal_1217) > 1f)
	{
		return 1.85f;
	}
	return -1f;
}

bool func_706()
{
	if (Local_433.f_10.f_1 != 0)
	{
		Call_Loc(Local_433.f_10.f_1);
		return StackVal;
	}
	return false;
}

bool func_707()
{
	if (Local_433.f_10 != 0)
	{
		Call_Loc(Local_433.f_10);
		return StackVal;
	}
	return false;
}

void func_708()
{
	int iVar0;

	if (!func_46(19) || !func_732(bLocal_1216))
	{
		return;
	}
	switch (func_731())
	{
		case 0:
			if (!func_434(33))
			{
				func_423(33);
			}
			break;
		case 9:
			if (func_434(33))
			{
				if ((iLocal_1195 == joaat("WEAPON_UNARMED") || WEAPON::GET_WEAPONTYPE_GROUP(iLocal_1195) == joaat("GROUP_MELEE")) && WEAPON::HAS_PED_GOT_WEAPON(bLocal_1217, iLocal_1195, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(bLocal_1217, iLocal_1195, true);
				}
				else
				{
					func_710(2);
				}
				func_709(33);
			}
			break;
		case 99:
			WEAPON::GET_CURRENT_PED_WEAPON(bLocal_1217, &iVar0, false);
			if (iLocal_1195 != iVar0)
			{
				iLocal_1195 = iVar0;
			}
			break;
	}
}

void func_709(int iParam0)
{
	if (func_122(&uLocal_1229, iParam0))
	{
	}
}

void func_710(int iParam0)
{
	int iVar0;

	if (func_672())
	{
		iParam0 = 5;
	}
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			func_729();
			break;
		case 2:
			if ((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_728(), false) && func_728() != joaat("WEAPON_UNARMED")) && func_728() != joaat("GADGET_PARACHUTE"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), func_728(), true);
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), func_728()) == 0 && func_728() != joaat("WEAPON_STONE_HATCHET"))
				{
					func_713(func_728());
				}
				if (Global_1312416 == 0 || func_728() == 0)
				{
					if (func_728() == joaat("WEAPON_STONE_HATCHET"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), func_728(), true);
						Global_1312416 = func_728();
					}
					else
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), true), false);
						Global_1312416 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), true);
					}
				}
				if ((!func_712(func_728()) && !func_711(func_728())) && func_728() != 0)
				{
					WEAPON::_PED_SKIP_NEXT_RELOADING(PLAYER::PLAYER_PED_ID());
				}
			}
			else
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
				if (iVar0 != 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, true);
				}
			}
			break;
		case 3:
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_728(), false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), func_728(), true);
				Global_1312416 = func_728();
			}
			break;
		case 4:
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_728(), false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), func_728(), true);
				Global_1312416 = func_728();
			}
			break;
		case 5:
			if (!Global_1662006)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				Global_1312416 = joaat("WEAPON_UNARMED");
			}
			break;
		case 6:
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false), true);
			Global_1312416 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false);
			break;
	}
}

bool func_711(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_PROXMINE"):
			return true;
		case joaat("WEAPON_PIPEBOMB"):
			return true;
	}
	return false;
}

bool func_712(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_KNUCKLE"):
		case joaat("WEAPON_HATCHET"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_SWITCHBLADE"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_STONE_HATCHET"):
			return true;
		default:
			break;
	}
	return false;
}

void func_713(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_727(Global_4456448.f_232883))
	{
		if (func_712(iParam0))
		{
			return;
		}
	}
	iVar0 = func_726(iParam0);
	if (((iVar0 == 0 || iVar0 == 29) || iVar0 == 33) || iVar0 == 31)
	{
		return;
	}
	iVar1 = iVar0;
	while (iVar1 >= 0)
	{
		iVar2 = func_725(iVar1, 0);
		if (func_714(iVar2, -1))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iVar2, false))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar2) > 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar2, true);
					return;
				}
			}
		}
		iVar1 = (iVar1 + -1);
	}
	iVar1 = iVar0;
	while (iVar1 <= 85)
	{
		iVar3 = func_725(iVar1, 0);
		if (func_714(iVar3, -1))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iVar3, false))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar3) > 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar3, true);
					return;
				}
			}
		}
		iVar1++;
	}
}

bool func_714(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_722() == 0)
	{
		return false;
	}
	if (func_721())
	{
		return false;
	}
	iVar0 = func_720(iParam0);
	if (iVar0 != 414 && func_719(iVar0, -1))
	{
		return true;
	}
	else
	{
		return false;
	}
	iVar1 = func_716(iParam0, iParam1);
	iVar2 = func_715(iParam0);
	return MISC::IS_BIT_SET(iVar1, func_182(iVar2));
}

int func_715(int iParam0)
{
	return func_726(iParam0);
}

int func_716(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_154(func_717(iParam0), iParam1, 0);
	return iVar0;
}

int func_717(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_715(iParam0);
	iVar1 = func_185(iVar0);
	if ((func_157() == 0 || func_718() == 0) || (func_157() == 999 && func_718() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 685;
			case 1:
				return 686;
			case 2:
				return 2419;
		}
	}
	return 11511;
}

int func_718()
{
	return Global_30769;
}

bool func_719(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_155(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

int func_720(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return 17;
		case joaat("WEAPON_COMBATPISTOL"):
			return 19;
		case joaat("WEAPON_APPISTOL"):
			return 23;
		case joaat("WEAPON_PISTOL50"):
			return 21;
		case joaat("WEAPON_SMG"):
			return 27;
		case joaat("WEAPON_MICROSMG"):
			return 25;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 31;
		case joaat("WEAPON_CARBINERIFLE"):
			return 33;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 35;
		case joaat("WEAPON_MG"):
			return 37;
		case joaat("WEAPON_COMBATMG"):
			return 39;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 43;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 45;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 49;
		case joaat("WEAPON_HEAVYSNIPER"):
			return 55;
		case joaat("WEAPON_SNIPERRIFLE"):
			return 53;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 59;
		case joaat("WEAPON_RPG"):
			return 61;
		case joaat("WEAPON_MINIGUN"):
			return 63;
		case joaat("WEAPON_GRENADE"):
			return 65;
		case joaat("WEAPON_SMOKEGRENADE"):
			return 67;
		case joaat("WEAPON_STICKYBOMB"):
			return 69;
		case joaat("WEAPON_MOLOTOV"):
			return 71;
		case joaat("WEAPON_PETROLCAN"):
			return 74;
		case joaat("GADGET_PARACHUTE"):
			return 73;
		case joaat("WEAPON_KNIFE"):
			return 1;
		case joaat("WEAPON_NIGHTSTICK"):
			return 3;
		case joaat("WEAPON_HAMMER"):
			return 11;
		case joaat("WEAPON_BAT"):
			return 13;
		case joaat("WEAPON_CROWBAR"):
			return 5;
		case joaat("WEAPON_GOLFCLUB"):
			return 15;
		case joaat("WEAPON_ASSAULTMG"):
			return 41;
		case joaat("WEAPON_ASSAULTSMG"):
			return 29;
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 57;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 47;
		case joaat("WEAPON_BOTTLE"):
			return 142;
		case joaat("WEAPON_SPECIALCARBINE"):
			return 282;
		case joaat("WEAPON_SNSPISTOL"):
			return 144;
		case joaat("WEAPON_HEAVYPISTOL"):
			return 280;
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 284;
		case joaat("WEAPON_GUSENBERG"):
			return 286;
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 309;
		case joaat("WEAPON_DAGGER"):
			return 307;
		case joaat("WEAPON_MUSKET"):
			return 313;
		case joaat("WEAPON_FIREWORK"):
			return 311;
		case joaat("WEAPON_FLAREGUN"):
			return 301;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 325;
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 327;
		case joaat("WEAPON_PROXMINE"):
			return 331;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 333;
		case joaat("WEAPON_HATCHET"):
			return 329;
		case joaat("WEAPON_COMBATPDW"):
			return 335;
		case joaat("WEAPON_KNUCKLE"):
			return 337;
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 339;
		case joaat("WEAPON_MACHETE"):
			return 341;
		case joaat("WEAPON_MACHINEPISTOL"):
			return 343;
		case joaat("WEAPON_DBSHOTGUN"):
			return 348;
		case joaat("WEAPON_COMPACTRIFLE"):
			return 346;
		case joaat("WEAPON_FLASHLIGHT"):
			return 350;
		case joaat("WEAPON_REVOLVER"):
			return 353;
		case joaat("WEAPON_SWITCHBLADE"):
			return 355;
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 360;
		case joaat("WEAPON_MINISMG"):
			return 366;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 364;
		case joaat("WEAPON_BATTLEAXE"):
			return 362;
		case joaat("WEAPON_PIPEBOMB"):
			return 368;
		case joaat("WEAPON_POOLCUE"):
			return 370;
		case joaat("WEAPON_WRENCH"):
			return 9;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 31;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 33;
		case joaat("WEAPON_COMBATMG_MK2"):
			return 39;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 55;
		case joaat("WEAPON_PISTOL_MK2"):
			return 17;
		case joaat("WEAPON_SMG_MK2"):
			return 27;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 47;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 327;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 43;
		case joaat("WEAPON_REVOLVER_MK2"):
			return 353;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 144;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 282;
		case joaat("WEAPON_DOUBLEACTION"):
			return 394;
		case joaat("WEAPON_RAYPISTOL"):
			return 402;
		case joaat("WEAPON_RAYCARBINE"):
			return 404;
		case joaat("WEAPON_RAYMINIGUN"):
			return 406;
		case joaat("WEAPON_STONE_HATCHET"):
			return 400;
		case joaat("WEAPON_NAVYREVOLVER"):
			return 410;
		case joaat("WEAPON_CERAMICPISTOL"):
			return 408;
	}
	return 414;
}

bool func_721()
{
	return Global_1312856;
}

int func_722()
{
	if (func_724() && func_723(0))
	{
		return 1;
	}
	return 0;
}

var func_723(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_724()
{
	return func_723(func_27() + 1);
}

int func_725(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return joaat("WEAPON_PISTOL_MK2");
			case 5:
				return joaat("WEAPON_SMG_MK2");
			case 8:
				return joaat("WEAPON_ASSAULTRIFLE_MK2");
			case 9:
				return joaat("WEAPON_CARBINERIFLE_MK2");
			case 13:
				return joaat("WEAPON_COMBATMG_MK2");
			case 21:
				return joaat("WEAPON_HEAVYSNIPER_MK2");
			default:
				break;
		}
		switch (iParam0)
		{
			case 22:
				return joaat("WEAPON_PUMPSHOTGUN_MK2");
			case 46:
				return joaat("WEAPON_SPECIALCARBINE_MK2");
			case 47:
				return joaat("WEAPON_SNSPISTOL_MK2");
			case 56:
				return joaat("WEAPON_MARKSMANRIFLE_MK2");
			case 70:
				return joaat("WEAPON_REVOLVER_MK2");
			case 48:
				return joaat("WEAPON_BULLPUPRIFLE_MK2");
			default:
				break;
		}
	}
	switch (iParam0)
	{
		case 34:
			return joaat("WEAPON_KNIFE");
		case 1:
			return joaat("WEAPON_PISTOL");
		case 2:
			return joaat("WEAPON_COMBATPISTOL");
		case 3:
			return joaat("WEAPON_APPISTOL");
		case 5:
			return joaat("WEAPON_SMG");
		case 7:
			return joaat("WEAPON_MICROSMG");
		case 8:
			return joaat("WEAPON_ASSAULTRIFLE");
		case 9:
			return joaat("WEAPON_CARBINERIFLE");
		case 11:
			return joaat("WEAPON_ADVANCEDRIFLE");
		case 12:
			return joaat("WEAPON_MG");
		case 13:
			return joaat("WEAPON_COMBATMG");
		case 15:
			return joaat("WEAPON_STICKYBOMB");
		case 16:
			return joaat("WEAPON_GRENADE");
		case 17:
			return joaat("WEAPON_SMOKEGRENADE");
		case 60:
			return joaat("WEAPON_PROXMINE");
		case 18:
			return joaat("WEAPON_REMOTESNIPER");
		case 20:
			return joaat("WEAPON_SNIPERRIFLE");
		case 21:
			return joaat("WEAPON_HEAVYSNIPER");
		case 56:
			return joaat("WEAPON_MARKSMANRIFLE");
		case 22:
			return joaat("WEAPON_PUMPSHOTGUN");
		case 24:
			return joaat("WEAPON_ASSAULTSHOTGUN");
		case 25:
			return joaat("WEAPON_SAWNOFFSHOTGUN");
		case 55:
			return joaat("WEAPON_HEAVYSHOTGUN");
		case 26:
			return joaat("WEAPON_GRENADELAUNCHER");
		case 27:
			return joaat("WEAPON_RPG");
		case 28:
			return joaat("WEAPON_MINIGUN");
		case 61:
			return joaat("WEAPON_HOMINGLAUNCHER");
		case 31:
			return joaat("WEAPON_STUNGUN");
		case 33:
			return joaat("GADGET_PARACHUTE");
		case 35:
			return joaat("WEAPON_NIGHTSTICK");
		case 43:
			return joaat("WEAPON_PETROLCAN");
		case 45:
			return joaat("WEAPON_BOTTLE");
		case 46:
			return joaat("WEAPON_SPECIALCARBINE");
		case 47:
			return joaat("WEAPON_SNSPISTOL");
		case 48:
			return joaat("WEAPON_BULLPUPRIFLE");
		case 49:
			return joaat("WEAPON_HEAVYPISTOL");
		case 23:
			return joaat("WEAPON_BULLPUPSHOTGUN");
		case 50:
			return joaat("WEAPON_GUSENBERG");
		case 51:
			return joaat("WEAPON_DAGGER");
		case 52:
			return joaat("WEAPON_VINTAGEPISTOL");
		case 57:
			return joaat("WEAPON_FLAREGUN");
		case 53:
			return joaat("WEAPON_MUSKET");
		case 54:
			return joaat("WEAPON_FIREWORK");
		case 58:
			return joaat("WEAPON_HATCHET");
		case 59:
			return joaat("WEAPON_RAILGUN");
		case 64:
			return joaat("WEAPON_COMBATPDW");
		case 62:
			return joaat("WEAPON_KNUCKLE");
		case 63:
			return joaat("WEAPON_MARKSMANPISTOL");
		case 65:
			return joaat("WEAPON_MACHETE");
		case 68:
			return joaat("WEAPON_MACHINEPISTOL");
		case 66:
			return joaat("WEAPON_DBSHOTGUN");
		case 67:
			return joaat("WEAPON_COMPACTRIFLE");
		case 69:
			return joaat("WEAPON_FLASHLIGHT");
		case 70:
			return joaat("WEAPON_REVOLVER");
		case 71:
			return joaat("WEAPON_SWITCHBLADE");
		case 36:
			return joaat("WEAPON_HAMMER");
		case 4:
			return joaat("WEAPON_PISTOL50");
		case 6:
			return joaat("WEAPON_ASSAULTSMG");
		case 41:
			return joaat("WEAPON_MOLOTOV");
		case 39:
			return joaat("WEAPON_GOLFCLUB");
		case 38:
			return joaat("WEAPON_CROWBAR");
		case 37:
			return joaat("WEAPON_BAT");
		case 72:
			return joaat("WEAPON_AUTOSHOTGUN");
		case 73:
			return joaat("WEAPON_MINISMG");
		case 74:
			return joaat("WEAPON_COMPACTLAUNCHER");
		case 75:
			return joaat("WEAPON_BATTLEAXE");
		case 76:
			return joaat("WEAPON_PIPEBOMB");
		case 77:
			return joaat("WEAPON_POOLCUE");
		case 78:
			return joaat("WEAPON_WRENCH");
		case 79:
			return joaat("WEAPON_DOUBLEACTION");
		case 80:
			return joaat("WEAPON_STONE_HATCHET");
		case 81:
			return joaat("WEAPON_RAYPISTOL");
		case 82:
			return joaat("WEAPON_RAYCARBINE");
		case 83:
			return joaat("WEAPON_RAYMINIGUN");
		case 84:
			return joaat("WEAPON_NAVYREVOLVER");
		case 85:
			return joaat("WEAPON_CERAMICPISTOL");
	}
	return joaat("WEAPON_UNARMED");
}

int func_726(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 0;
		case joaat("WEAPON_PISTOL"):
			return 1;
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
		case joaat("WEAPON_APPISTOL"):
			return 3;
		case joaat("WEAPON_PISTOL50"):
			return 4;
		case joaat("WEAPON_SMG"):
			return 5;
		case joaat("WEAPON_ASSAULTSMG"):
			return 6;
		case joaat("WEAPON_MICROSMG"):
			return 7;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 8;
		case joaat("WEAPON_CARBINERIFLE"):
			return 9;
		case joaat("WEAPON_HEAVYRIFLE"):
			return 10;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 11;
		case joaat("WEAPON_MG"):
			return 12;
		case joaat("WEAPON_COMBATMG"):
			return 13;
		case joaat("WEAPON_ASSAULTMG"):
			return 14;
		case joaat("WEAPON_STICKYBOMB"):
			return 15;
		case joaat("WEAPON_GRENADE"):
			return 16;
		case joaat("WEAPON_SMOKEGRENADE"):
			return 17;
		case joaat("WEAPON_REMOTESNIPER"):
			return 18;
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 19;
		case joaat("WEAPON_SNIPERRIFLE"):
			return 20;
		case joaat("WEAPON_HEAVYSNIPER"):
			return 21;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 22;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 23;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 24;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 25;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 26;
		case joaat("WEAPON_RPG"):
			return 27;
		case joaat("WEAPON_MINIGUN"):
			return 28;
		case joaat("WEAPON_LOUDHAILER"):
			return 29;
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return 30;
		case joaat("WEAPON_STUNGUN"):
			return 31;
		case joaat("WEAPON_RUBBERGUN"):
			return 32;
		case joaat("GADGET_PARACHUTE"):
			return 33;
		case joaat("WEAPON_KNIFE"):
			return 34;
		case joaat("WEAPON_NIGHTSTICK"):
			return 35;
		case joaat("WEAPON_HAMMER"):
			return 36;
		case joaat("WEAPON_BAT"):
			return 37;
		case joaat("WEAPON_CROWBAR"):
			return 38;
		case joaat("WEAPON_GOLFCLUB"):
			return 39;
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			return 40;
		case joaat("WEAPON_MOLOTOV"):
			return 41;
		case joaat("WEAPON_FIREEXTINGUISHER"):
			return 42;
		case joaat("WEAPON_PETROLCAN"):
			return 43;
		case joaat("WEAPON_DIGISCANNER"):
			return 44;
		case joaat("WEAPON_BOTTLE"):
			return 45;
		case joaat("WEAPON_SPECIALCARBINE"):
			return 46;
		case joaat("WEAPON_SNSPISTOL"):
			return 47;
		case joaat("WEAPON_HEAVYPISTOL"):
			return 49;
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 48;
		case joaat("WEAPON_GUSENBERG"):
			return 50;
		case joaat("WEAPON_DAGGER"):
			return 51;
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 52;
		case joaat("WEAPON_FLAREGUN"):
			return 57;
		case joaat("WEAPON_MUSKET"):
			return 53;
		case joaat("WEAPON_FIREWORK"):
			return 54;
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 56;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 55;
		case joaat("WEAPON_PROXMINE"):
			return 60;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 61;
		case joaat("WEAPON_HATCHET"):
			return 58;
		case joaat("WEAPON_RAILGUN"):
			return 59;
		case joaat("WEAPON_COMBATPDW"):
			return 64;
		case joaat("WEAPON_KNUCKLE"):
			return 62;
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 63;
		case joaat("WEAPON_MACHETE"):
			return 65;
		case joaat("WEAPON_MACHINEPISTOL"):
			return 68;
		case joaat("WEAPON_DBSHOTGUN"):
			return 66;
		case joaat("WEAPON_COMPACTRIFLE"):
			return 67;
		case joaat("WEAPON_FLASHLIGHT"):
			return 69;
		case joaat("WEAPON_REVOLVER"):
			return 70;
		case joaat("WEAPON_SWITCHBLADE"):
			return 71;
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 72;
		case joaat("WEAPON_MINISMG"):
			return 73;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 74;
		case joaat("WEAPON_BATTLEAXE"):
			return 75;
		case joaat("WEAPON_PIPEBOMB"):
			return 76;
		case joaat("WEAPON_POOLCUE"):
			return 77;
		case joaat("WEAPON_WRENCH"):
			return 78;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
		case joaat("WEAPON_SMG_MK2"):
			return 5;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 22;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 46;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 47;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 56;
		case joaat("WEAPON_REVOLVER_MK2"):
			return 70;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
		case joaat("WEAPON_DOUBLEACTION"):
			return 79;
		case joaat("WEAPON_STONE_HATCHET"):
			return 80;
		case joaat("WEAPON_RAYPISTOL"):
			return 81;
		case joaat("WEAPON_RAYCARBINE"):
			return 82;
		case joaat("WEAPON_RAYMINIGUN"):
			return 83;
		case joaat("WEAPON_NAVYREVOLVER"):
			return 84;
		case joaat("WEAPON_CERAMICPISTOL"):
			return 85;
	}
	return 0;
}

bool func_727(int iParam0)
{
	return iParam0 == 47;
}

int func_728()
{
	return Global_1312416;
}

void func_729()
{
	int iVar0;

	iVar0 = func_730();
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, false))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, true);
	}
}

int func_730()
{
	int iVar0;
	int iVar1;

	iVar0 = joaat("WEAPON_UNARMED");
	iVar1 = 0;
	if (func_154(255, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PISTOL");
		iVar1 = func_154(255, -1, 0);
	}
	if (func_154(285, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_APPISTOL");
		iVar1 = func_154(285, -1, 0);
	}
	if (func_154(265, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_COMBATPISTOL");
		iVar1 = func_154(265, -1, 0);
	}
	if (func_154(295, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MICROSMG");
		iVar1 = func_154(295, -1, 0);
	}
	if (func_154(305, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SMG");
		iVar1 = func_154(305, -1, 0);
	}
	if (func_154(388, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SAWNOFFSHOTGUN");
		iVar1 = func_154(388, -1, 0);
	}
	if (func_154(416, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_STUNGUN");
		iVar1 = func_154(416, -1, 0);
	}
	if (func_154(467, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_GRENADE");
		iVar1 = func_154(467, -1, 0);
	}
	if (func_154(476, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SMOKEGRENADE");
		iVar1 = func_154(476, -1, 0);
	}
	if (func_154(484, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_STICKYBOMB");
		iVar1 = func_154(484, -1, 0);
	}
	if (func_154(493, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MOLOTOV");
		iVar1 = func_154(493, -1, 0);
	}
	if (func_154(197, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_KNIFE");
		iVar1 = func_154(197, -1, 0);
	}
	if (func_154(205, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_NIGHTSTICK");
		iVar1 = func_154(205, -1, 0);
	}
	if (func_154(212, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_CROWBAR");
		iVar1 = func_154(212, -1, 0);
	}
	if (func_154(233, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HAMMER");
		iVar1 = func_154(233, -1, 0);
	}
	if (func_154(240, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_BAT");
		iVar1 = func_154(240, -1, 0);
	}
	if (func_154(247, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_GOLFCLUB");
		iVar1 = func_154(247, -1, 0);
	}
	if (func_154(1734, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_BOTTLE");
		iVar1 = func_154(1734, -1, 0);
	}
	if (func_154(275, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PISTOL50");
		iVar1 = func_154(275, -1, 0);
	}
	if (func_154(315, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_ASSAULTSMG");
		iVar1 = func_154(315, -1, 0);
	}
	if (func_154(325, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_ASSAULTRIFLE");
		iVar1 = func_154(325, -1, 0);
	}
	if (func_154(334, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_CARBINERIFLE");
		iVar1 = func_154(334, -1, 0);
	}
	if (func_154(9492, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SPECIALCARBINE");
		iVar1 = func_154(9492, -1, 0);
	}
	if (func_154(1744, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SNSPISTOL");
		iVar1 = func_154(1744, -1, 0);
	}
	if (func_154(9503, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_BULLPUPRIFLE");
		iVar1 = func_154(9503, -1, 0);
	}
	if (func_154(9483, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HEAVYPISTOL");
		iVar1 = func_154(9483, -1, 0);
	}
	if (func_154(343, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_ADVANCEDRIFLE");
		iVar1 = func_154(343, -1, 0);
	}
	if (func_154(352, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MG");
		iVar1 = func_154(352, -1, 0);
	}
	if (func_154(361, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_COMBATMG");
		iVar1 = func_154(361, -1, 0);
	}
	if (func_154(370, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_ASSAULTMG");
		iVar1 = func_154(370, -1, 0);
	}
	if (func_154(379, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PUMPSHOTGUN");
		iVar1 = func_154(379, -1, 0);
	}
	if (func_154(398, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_BULLPUPSHOTGUN");
		iVar1 = func_154(398, -1, 0);
	}
	if (func_154(407, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_ASSAULTSHOTGUN");
		iVar1 = func_154(407, -1, 0);
	}
	if (func_154(426, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SNIPERRIFLE");
		iVar1 = func_154(426, -1, 0);
	}
	if (func_154(435, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HEAVYSNIPER");
		iVar1 = func_154(435, -1, 0);
	}
	if (func_154(444, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_GRENADELAUNCHER");
		iVar1 = func_154(444, -1, 0);
	}
	if (func_154(451, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_RPG");
		iVar1 = func_154(451, -1, 0);
	}
	if (func_154(460, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MINIGUN");
		iVar1 = func_154(460, -1, 0);
	}
	if (func_154(9795, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_VINTAGEPISTOL");
		iVar1 = func_154(9795, -1, 0);
	}
	if (func_154(9785, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_DAGGER");
		iVar1 = func_154(9785, -1, 0);
	}
	if (func_154(9805, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_FIREWORK");
		iVar1 = func_154(9805, -1, 0);
	}
	if (func_154(9815, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MUSKET");
		iVar1 = func_154(9815, -1, 0);
	}
	if (func_154(9919, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PROXMINE");
		iVar1 = func_154(9919, -1, 0);
	}
	if (func_154(9911, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HATCHET");
		iVar1 = func_154(9911, -1, 0);
	}
	if (func_154(9927, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HOMINGLAUNCHER");
		iVar1 = func_154(9927, -1, 0);
	}
	if (func_154(9492, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SPECIALCARBINE");
		iVar1 = func_154(9492, -1, 0);
	}
	if (func_154(9512, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_GUSENBERG");
		iVar1 = func_154(9512, -1, 0);
	}
	if (func_154(9893, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HEAVYSHOTGUN");
		iVar1 = func_154(9893, -1, 0);
	}
	if (func_154(9903, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MARKSMANRIFLE");
		iVar1 = func_154(9903, -1, 0);
	}
	if (func_154(9937, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_COMBATPDW");
		iVar1 = func_154(9937, -1, 0);
	}
	if (func_154(9954, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MARKSMANPISTOL");
		iVar1 = func_154(9954, -1, 0);
	}
	if (func_154(9945, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_KNUCKLE");
		iVar1 = func_154(9945, -1, 0);
	}
	if (func_154(9962, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MACHETE");
		iVar1 = func_154(9962, -1, 0);
	}
	if (func_154(9972, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MACHINEPISTOL");
		iVar1 = func_154(9972, -1, 0);
	}
	if (func_154(10008, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_FLASHLIGHT");
		iVar1 = func_154(10008, -1, 0);
	}
	if (func_154(10036, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SWITCHBLADE");
		iVar1 = func_154(10036, -1, 0);
	}
	if (func_154(10028, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_REVOLVER");
		iVar1 = func_154(10028, -1, 0);
	}
	if (func_154(10000, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_DBSHOTGUN");
		iVar1 = func_154(10000, -1, 0);
	}
	if (func_154(9990, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_COMPACTRIFLE");
		iVar1 = func_154(9990, -1, 0);
	}
	if (func_154(10079, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_AUTOSHOTGUN");
		iVar1 = func_154(10079, -1, 0);
	}
	if (func_154(10087, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_BATTLEAXE");
		iVar1 = func_154(10087, -1, 0);
	}
	if (func_154(10095, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_COMPACTLAUNCHER");
		iVar1 = func_154(10095, -1, 0);
	}
	if (func_154(10105, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MINISMG");
		iVar1 = func_154(10105, -1, 0);
	}
	if (func_154(10113, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PIPEBOMB");
		iVar1 = func_154(10113, -1, 0);
	}
	if (func_154(10121, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_POOLCUE");
		iVar1 = func_154(10121, -1, 0);
	}
	if (func_154(226, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_WRENCH");
		iVar1 = func_154(226, -1, 0);
	}
	if (func_154(10567, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PISTOL_MK2");
		iVar1 = func_154(10567, -1, 0);
	}
	if (func_154(10577, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SMG_MK2");
		iVar1 = func_154(10577, -1, 0);
	}
	if (func_154(10557, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HEAVYSNIPER_MK2");
		iVar1 = func_154(10557, -1, 0);
	}
	if (func_154(10547, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_COMBATMG_MK2");
		iVar1 = func_154(10547, -1, 0);
	}
	if (func_154(10527, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_ASSAULTRIFLE_MK2");
		iVar1 = func_154(10527, -1, 0);
	}
	if (func_154(10537, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_CARBINERIFLE_MK2");
		iVar1 = func_154(10537, -1, 0);
	}
	if (func_154(10587, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_BULLPUPRIFLE_MK2");
		iVar1 = func_154(10587, -1, 0);
	}
	if (func_154(10607, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MARKSMANRIFLE_MK2");
		iVar1 = func_154(10607, -1, 0);
	}
	if (func_154(10597, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PUMPSHOTGUN_MK2");
		iVar1 = func_154(10597, -1, 0);
	}
	if (func_154(10617, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_REVOLVER_MK2");
		iVar1 = func_154(10617, -1, 0);
	}
	if (func_154(10637, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SNSPISTOL_MK2");
		iVar1 = func_154(10637, -1, 0);
	}
	if (func_154(10647, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SPECIALCARBINE_MK2");
		iVar1 = func_154(10647, -1, 0);
	}
	if (func_154(10627, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_DOUBLEACTION");
		iVar1 = func_154(10627, -1, 0);
	}
	if (func_154(11459, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_NAVYREVOLVER");
		iVar1 = func_154(11459, -1, 0);
	}
	if (func_154(11449, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_CERAMICPISTOL");
		iVar1 = func_154(11449, -1, 0);
	}
	return iVar0;
}

int func_731()
{
	return Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_222;
}

bool func_732(bool bParam0)
{
	return false;
}

void func_733()
{
	int iVar0;

	if (func_679(bLocal_1216))
	{
		return;
	}
	if (func_408() != 0)
	{
		return;
	}
	if (!bLocal_1213)
	{
		return;
	}
	if (func_434(25))
	{
		func_751();
	}
	if (func_750(0))
	{
		func_751();
		if (func_732(bLocal_1216))
		{
			return;
		}
	}
	if (func_749(bLocal_1216, 0, 1, 0))
	{
		func_751();
		if (func_732(bLocal_1216))
		{
			return;
		}
	}
	iVar0 = 0;
	if (func_747(func_748()))
	{
		func_545(3);
	}
	else if (!func_747(func_746()))
	{
		if (func_369(iLocal_1219, 3))
		{
			func_745(3);
			iVar0 = 1;
		}
	}
	func_734(iVar0);
}

void func_734(int iParam0)
{
	if (func_744(iParam0))
	{
		func_737();
	}
	if (func_735(func_736()))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 357, true);
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 51) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 51))
		{
			func_751();
			HUD::CLEAR_HELP(true);
		}
	}
}

bool func_735(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_736()
{
	return "FMH_LEFTRANGE";
}

void func_737()
{
	if (!bLocal_1223)
	{
		func_743();
		return;
	}
	if (!func_739())
	{
		return;
	}
	if (!func_369(iLocal_1219, 8))
	{
		func_738(func_736(), -1);
		func_545(8);
	}
}

void func_738(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_739()
{
	if ((((((((((!func_742() && !func_741()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_RADAR_HIDDEN()) && bLocal_1213) && !func_740()) && func_434(9)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
	{
		return true;
	}
	return false;
}

bool func_740()
{
	return Global_2439138.f_2723[0 /*80*/].f_1 != 0;
}

bool func_741()
{
	return Global_73825;
}

bool func_742()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

void func_743()
{
	if (func_735(func_736()))
	{
		HUD::CLEAR_HELP(true);
	}
}

bool func_744(int iParam0)
{
	return false;
}

void func_745(int iParam0)
{
	if (func_122(&(Local_1436[iLocal_1218 /*37*/].f_1), iParam0))
	{
	}
}

float func_746()
{
	return 250f;
}

bool func_747(float fParam0)
{
	vector3 vVar0;

	Call_Loc(Local_433.f_37);
	vVar0 = { StackVal, StackVal, StackVal };
	if (func_31(vVar0))
	{
		return false;
	}
	return SYSTEM::VDIST2(vLocal_1220, vVar0) <= (fParam0 * fParam0);
}

float func_748()
{
	return 200f;
}

bool func_749(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if ((((bParam1 || !func_6(iVar0, 4)) && (bParam2 || !func_691(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bParam0), 1))) && (bParam3 || !func_691(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bParam0), 12))) && func_691(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bParam0), 14))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_750(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if (PED::IS_PED_IN_ANY_VEHICLE(bLocal_1217, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(bLocal_1217, false);
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) + 1;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = func_376(iVar0, (iVar2 - 1), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && PED::IS_PED_A_PLAYER(iVar3))
			{
				bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
				if (func_732(bVar4))
				{
					if (!bParam0)
					{
						if (iVar3 != bLocal_1217)
						{
							return true;
						}
					}
					else
					{
						return true;
					}
				}
			}
			iVar2++;
		}
	}
	return false;
}

void func_751()
{
}

void func_752()
{
	if (func_732(bLocal_1216))
	{
		if (!func_754())
		{
			func_753(1);
		}
	}
}

void func_753(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_2537071.f_1734, 9))
		{
			MISC::SET_BIT(&(Global_2537071.f_1734), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2537071.f_1734, 9))
	{
		MISC::CLEAR_BIT(&(Global_2537071.f_1734), 9);
	}
}

bool func_754()
{
	return MISC::IS_BIT_SET(Global_2537071.f_1734, 9);
}

void func_755()
{
	if (func_434(10) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_218.f_130)))
	{
		func_756(&(Global_1366905.f_534), &Global_1366905, 28, &(Global_1366905.f_1), &(Global_1366905.f_117), -1, 0, &(Local_218.f_130));
	}
}

void func_756(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
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

	if (func_878(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_876() || iParam2 == 28)
	{
		if (func_829(iParam1, iParam2, uParam3, Global_1574185, 0, func_874(), sParam7))
		{
			func_828(1);
			if ((!func_827() && !func_826()) || MISC::IS_BIT_SET(Global_2537071.f_4588, 1))
			{
				if (func_825())
				{
					func_823();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_822(1);
						Global_1574185 = 0;
						iVar54 = -1;
						if (Global_1574406 != 1)
						{
							func_821(iParam1, 0, 0);
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
								if (func_28(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_25(bVar35, 0))
									{
										if ((func_820(bVar35) || Global_2425662[bVar35 /*421*/].f_236 != -1) || func_819(bVar35))
										{
											bVar44 = bVar35;
											if (func_538(bVar35))
											{
												iVar1[bVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_816(&iVar1, bVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_813(PLAYER::PLAYER_ID(), 0) && func_176(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_812())
							{
								if (func_28(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									bVar35 = func_68();
								}
							}
							else
							{
								bVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_811(bVar35) && func_806(bVar35, iParam2)) && func_28(bVar35, 0, 1))
							{
								bVar44 = bVar35;
								uVar42 = Global_1590535[bVar44 /*876*/].f_211.f_6;
								Var38 = { func_801(bVar35) };
								if (bVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_70(bVar35) };
								iVar37 = func_795(bVar35);
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
									if (!func_812())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_790(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_789(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_788(bVar35, 0);
								if (bVar34)
								{
									if (func_537(bVar35, 1) && iVar1[bVar44] != -1)
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
								if (func_787(iParam5))
								{
									func_786(bVar35, iParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &cVar57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_786(bVar35, iParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &cVar57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
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
							if (func_28(bVar35, 0, 1) && !MISC::IS_BIT_SET(iVar49, bVar35))
							{
								bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								bVar35 = func_68();
							}
							if (func_811(bVar35))
							{
								if (func_28(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar44 = bVar35;
									uVar42 = Global_1590535[bVar44 /*876*/].f_211.f_6;
									Var38 = { func_801(bVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_70(bVar35) };
									iVar37 = func_795(bVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574185++;
									iVar51 = func_788(bVar35, 1);
									if (bVar34)
									{
										if (func_537(bVar35, 1))
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
									func_768(bVar35, PLAYER::GET_PLAYER_NAME(bVar35), iParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_765(uParam3, iParam1, iParam2);
						}
						func_22(&(uParam3->f_21));
						func_764();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_763(uParam3, iParam1);
							func_762(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_763(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_759(uParam3))
						{
							Global_1574406 = 1;
						}
						func_757(uParam3);
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
			func_764();
			func_822(0);
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

void func_757(var uParam0)
{
	if (!func_13(&(uParam0->f_21)))
	{
		func_12(&(uParam0->f_21), 0, 0);
	}
	else if (func_11(&(uParam0->f_21), 250, 0))
	{
		func_22(&(uParam0->f_21));
		func_758(0);
	}
}

void func_758(bool bParam0)
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

bool func_759(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;

	iVar16 = 0;
	iVar0 = uParam0->f_37;
	bVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar15 != func_68() && func_28(bVar15, 0, 1))
	{
		Var2 = { func_70(bVar15) };
		iVar1 = func_761(uParam0, uParam0->f_37);
		if (func_147(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_760(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_760(uParam0, iVar0, 1);
					}
					break;
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_760(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_760(uParam0, iVar0, 0);
					}
					break;
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_760(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_760(uParam0, iVar0, 0);
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

void func_760(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

int func_761(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_762(int* iParam0, bool bParam1, int iParam2)
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

void func_763(var uParam0, int* iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_764()
{
	if (Global_1574406 != 0)
	{
		Global_1574406 = 0;
	}
}

void func_765(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (bVar2 != func_68())
		{
			if (func_28(bVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_767(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_766(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590535[iVar0 /*876*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_766(int* iParam0, int iParam1, int iParam2, int iParam3)
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

int func_767(int iParam0, bool bParam1, int iParam2)
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

void func_768(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, var uParam5, char* sParam6, var uParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;

	if (iParam4 >= func_785() && iParam4 < func_784())
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
				func_783("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_783(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_783("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_783("");
			if (uParam3->f_108 == 6)
			{
				func_783("");
			}
			else
			{
				func_783(&uParam5);
			}
			func_773(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_772(uParam3))
			{
				func_771("DPAD_FRIEND");
			}
			else if (func_770(uParam3))
			{
				func_771("DPAD_FRIEND");
			}
			else if (func_769(uParam3))
			{
				func_771("DPAD_CREW");
			}
			else
			{
				func_771("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_769(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_770(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_771(bool bParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(bParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_772(var uParam0)
{
	if (func_770(uParam0) && func_769(uParam0))
	{
		return true;
	}
	return false;
}

void func_773(var uParam0, bool bParam1)
{
	if (func_782(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_777(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && bParam1 > -1) && bParam1 < 32) && MISC::IS_BIT_SET(Global_2425662[bParam1 /*421*/].f_413, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_774())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

bool func_774()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_775() || func_346())
		{
			return true;
		}
	}
	return false;
}

int func_775()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_346();
	}
	return func_776(Global_4456448.f_194990);
}

int func_776(int iParam0)
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

bool func_777(bool bParam0)
{
	if ((func_28(bParam0, 0, 1) && func_778()) && func_178(bParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_778()
{
	if (func_781(PLAYER::PLAYER_ID()) || func_780())
	{
		if (!func_779(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	return true;
}

bool func_779(bool bParam0)
{
	if (func_675(bParam0) == 236 || func_675(bParam0) == 150)
	{
		return func_682(bParam0);
	}
	return false;
}

bool func_780()
{
	switch (func_176(PLAYER::PLAYER_ID()))
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

bool func_781(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return Global_1628237[bVar0 /*615*/] != -1;
	}
	return false;
}

bool func_782(bool bParam0)
{
	if (func_774())
	{
		if (func_28(bParam0, 0, 1))
		{
			return func_538(bParam0);
		}
	}
	if ((func_28(bParam0, 0, 1) && func_778()) && func_180(bParam0, 0))
	{
		return true;
	}
	return false;
}

void func_783(bool bParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(bParam0);
}

int func_784()
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

int func_785()
{
	int iVar0;

	iVar0 = 0;
	if (Global_1574187)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_786(bool bParam0, int* iParam1, var uParam2, int iParam3, var uParam4, char* sParam5, var uParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, bool bParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;

	if (iParam3 >= func_785() && iParam3 < func_784())
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
					func_783("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(bParam16))
				{
					func_771(bParam16);
				}
				else
				{
					func_783(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_783("");
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
				if (func_812())
				{
					func_783("");
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
						func_771(&(uParam2->f_104));
					}
					else
					{
						func_783("");
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
					func_783("");
				}
				if (uParam2->f_108 == 6)
				{
					func_783("");
				}
				else
				{
					func_783(&uParam4);
				}
				func_773(uParam2, bParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_783("");
					func_783("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_772(uParam2))
				{
					func_771("DPAD_FRIEND");
				}
				else if (func_770(uParam2))
				{
					func_771("DPAD_FRIEND");
				}
				else if (func_769(uParam2))
				{
					func_771("DPAD_CREW");
				}
				else
				{
					func_771("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

bool func_787(int iParam0)
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

int func_788(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 116;
	if ((!bParam1 && func_781(bParam0)) && !func_680(bParam0))
	{
		iVar0 = func_629();
	}
	iVar1 = func_649(bParam0);
	if (!iVar1 == -1)
	{
		return func_647(iVar1);
	}
	return iVar0;
}

char* func_789(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_790(int iParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_794(iParam3))
	{
		*fParam1 = (func_791(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_787(iParam3))
	{
		*fParam1 = (func_791(iParam3, iParam2) / 1000f);
		return 1;
	}
	*iParam0 = iParam2;
	return 0;
}

float func_791(int iParam0, int iParam1)
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
				return func_793(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_792(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_792(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_793(float fParam0)
{
	return (fParam0 / 0.3048f);
}

bool func_794(int iParam0)
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

int func_795(bool bParam0)
{
	int iVar0;

	iVar0 = func_798(bParam0);
	if (iVar0 == -1)
	{
		func_796(bParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_796(bool bParam0, bool bParam1)
{
	if (!func_28(bParam0, 0, 1))
	{
		return;
	}
	if (func_798(bParam0) != -1)
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
	if (func_797(bParam0))
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

bool func_797(bool bParam0)
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

int func_798(bool bParam0)
{
	int iVar0;

	if (!func_28(bParam0, 0, 1))
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
			func_799(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_799(int iParam0)
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
	func_800(&(Global_1389078[iVar32 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_800(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_68();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::_0xBA7F0B77D80A4EB7();
	}
}

struct<4> func_801(bool bParam0)
{
	char cVar0[32];

	if (func_28(bParam0, 0, 1))
	{
		Global_2513218 = { func_70(bParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_147(Global_2513218))
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
		if (func_805(&Global_2513218))
		{
			Global_2513148 = { func_803(bParam0) };
			func_802(&Global_2513148, &cVar0);
		}
	}
	return cVar0;
}

void func_802(int* iParam0, char* sParam1)
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(iParam0, 35, sParam1);
}

struct<35> func_803(bool bParam0)
{
	struct<13> Var0;
	struct<35> Var13;

	if (func_804(bParam0))
	{
		return Global_1312909[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_70(bParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

bool func_804(bool bParam0)
{
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return true;
	}
	return false;
}

bool func_805(int* iParam0)
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

bool func_806(bool bParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_810(bParam0) || func_809(bParam0)) || func_808(bParam0))
		{
			return false;
		}
	}
	if (!func_807(bParam0))
	{
		return false;
	}
	if ((!func_820(bParam0) && Global_2425662[bParam0 /*421*/].f_236 == -1) && !func_819(bParam0))
	{
		return false;
	}
	return true;
}

bool func_807(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_142, 22);
}

bool func_808(bool bParam0)
{
	if (func_810(bParam0))
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 8);
}

bool func_809(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 10) || MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 9));
	}
	return false;
}

bool func_810(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 2);
}

bool func_811(bool bParam0)
{
	bool bVar0;

	if (bParam0 == func_68())
	{
		return false;
	}
	if (func_25(bParam0, 0))
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

bool func_812()
{
	switch (func_176(PLAYER::PLAYER_ID()))
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
	switch (func_675(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return true;
	}
	if (func_680(PLAYER::PLAYER_ID()))
	{
		switch (func_176(PLAYER::PLAYER_ID()))
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
	if (func_779(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

bool func_813(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 && func_814(Global_1628237[iParam0 /*615*/].f_11.f_33))
	{
		return true;
	}
	if (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1)
	{
		if (func_814(Global_1628237[iParam0 /*615*/].f_11.f_32))
		{
			return true;
		}
	}
	return false;
}

bool func_814(int iParam0)
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
			return true;
		default:
			break;
	}
	return func_815(iParam0, 0);
	return false;
}

bool func_815(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return true;
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
				return true;
			default:
				break;
		}
	}
	return false;
}

void func_816(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_28(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_25(bVar1, 0))
			{
				if ((func_820(bVar1) || Global_2425662[bVar1 /*421*/].f_236 != -1) || func_819(bVar1))
				{
					if (func_817(bVar1, bParam1, 0))
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

bool func_817(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1 != func_68())
	{
		if (!bParam2)
		{
			if (func_818(bParam0, bParam1))
			{
				return false;
			}
		}
		if (Global_1628237[bParam0 /*615*/].f_11 != func_68())
		{
			return bParam1 == Global_1628237[bParam0 /*615*/].f_11;
		}
	}
	return false;
}

bool func_818(bool bParam0, bool bParam1)
{
	if (bParam1 != func_68())
	{
		if (bParam0 != func_68())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 != func_68())
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

bool func_819(bool bParam0)
{
	return Global_1590535[bParam0 /*876*/].f_196 != 0;
}

bool func_820(bool bParam0)
{
	if (func_28(bParam0, 0, 1))
	{
		if (func_28(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(bParam0, PLAYER::PLAYER_ID()) || func_176(bParam0) == 233)
			{
				return true;
			}
		}
	}
	return false;
}

void func_821(int* iParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_822(bool bParam0)
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

void func_823()
{
	if (MISC::IS_BIT_SET(Global_2537071.f_4588, 1))
	{
		if (func_740())
		{
			func_824();
		}
	}
}

void func_824()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_2 != 0)
		{
			Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			func_618(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

bool func_825()
{
	if (MISC::IS_BIT_SET(Global_2537071.f_4588, 0) && func_740())
	{
		return true;
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_4588, 1) && func_740())
	{
		return true;
	}
	return false;
}

bool func_826()
{
	if (func_740())
	{
		if (func_616(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_827()
{
	if (func_740())
	{
		if (func_630(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return true;
		}
	}
	return false;
}

void func_828(int iParam0)
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

bool func_829(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	bool bVar9;

	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_873(iParam1);
	fVar7 = func_872();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_871())
		{
			if (func_870() > 0 && Global_1574187)
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
		if (!func_860())
		{
			func_859(iParam0, uParam2, 1);
			return false;
		}
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_4591, 26))
	{
		func_859(iParam0, uParam2, 1);
		return false;
	}
	if (!func_13(&(uParam2->f_19)))
	{
		if (func_870() == 1)
		{
			func_858(bVar6, iParam0, 0);
			func_12(&(uParam2->f_19), 0, 0);
			func_859(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2537071.f_4592), 5);
		}
	}
	if (func_13(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_11(&(uParam2->f_19), 10000, 0) || (func_870() == 0 && !bParam5))
		{
			func_859(iParam0, uParam2, 1);
			return false;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_857();
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
					func_857();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_858(bVar6, iParam0, 0))
				{
					func_821(iParam0, 0, 0);
					bVar4 = func_855(iParam1, &(Global_4456448.f_194997), bParam4);
					Var0 = { func_853(iParam1) };
					if (bParam4)
					{
						func_850(iParam0, bVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_843(iParam0, func_847(uParam2), func_844(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						bVar9 = func_837(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							bVar9 = sParam6;
						}
						func_835(iParam0, bVar9, func_836(), -1);
					}
					else if (func_774())
					{
						uParam2->f_34 = Global_1574186;
						func_850(iParam0, bVar4, &Var0, 1, -1, Global_1574186, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_830(iParam1);
						uParam2->f_34 = Global_1574186;
						func_850(iParam0, bVar4, "", 0, iVar8, Global_1574186, 1);
					}
					else
					{
						iVar8 = func_830(iParam1);
						func_850(iParam0, bVar4, &Var0, 1, iVar8, -1, 1);
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

int func_830(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_834())
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
			if (func_833(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_832(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_831(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_590())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_831(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 4;
}

bool func_832(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

bool func_833(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_834()
{
	return Global_4456448.f_1 == 0;
}

void func_835(int* iParam0, bool bParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_771(bParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(bParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_771("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_836()
{
	switch (func_176(PLAYER::PLAYER_ID()))
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

char* func_837(var uParam0)
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
	switch (func_176(PLAYER::PLAYER_ID()))
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
			if (func_839())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
		case 151:
			if (func_177(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
		case 152:
			return "PIM_MAGM204";
		case 153:
			if (func_177(1))
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
			if (func_838(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
	}
	return "";
}

bool func_838(int iParam0)
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

bool func_839()
{
	return (func_842() && func_840(func_841()));
}

bool func_840(bool bParam0)
{
	return func_180(bParam0, 1);
}

bool func_841()
{
	return Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_35;
}

bool func_842()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 148;
}

void func_843(int* iParam0, bool bParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_771(bParam1);
		}
		else if (func_675(PLAYER::PLAYER_ID()) == 133)
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
		func_771("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_844(var uParam0)
{
	int iVar0;

	iVar0 = func_675(PLAYER::PLAYER_ID());
	if (func_846())
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
			switch (func_845())
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

int func_845()
{
	if (func_675(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2537071.f_5045;
	}
	return -1;
}

bool func_846()
{
	return Global_1590408;
}

bool func_847(var uParam0)
{
	int iVar0;

	iVar0 = func_675(PLAYER::PLAYER_ID());
	if (func_846())
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
			if (func_849() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_849() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
		case 133:
			switch (func_845())
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
			if (func_848() == 1)
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

int func_848()
{
	return Global_2537071.f_5048;
}

int func_849()
{
	if (func_675(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2537071.f_5043;
	}
	return -1;
}

void func_850(int* iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;

	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_783(bParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(bParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_771(bParam1);
		}
		if (func_871() && bParam6)
		{
			if (func_852())
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
			func_771(bParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_851(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_64())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_851(int iParam0)
{
	if (func_833(iParam0) || func_832(iParam0))
	{
		return true;
	}
	return false;
}

bool func_852()
{
	return Global_1574187;
}

struct<4> func_853(int iParam0)
{
	struct<4> Var0;

	StringCopy(&Var0, "", 16);
	if (func_854(PLAYER::PLAYER_ID()) || func_831(PLAYER::PLAYER_ID()))
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
	if (func_774() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_204, 16);
	}
	return Var0;
}

bool func_854(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 5;
}

char* func_855(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	if (iParam0 == 20 && (!func_774() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		sVar0 = func_856();
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

char* func_856()
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

void func_857()
{
	Global_42351 = 1;
}

bool func_858(bool bParam0, int* iParam1, bool bParam2)
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

void func_859(int* iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574185 = 0;
	func_764();
	Global_1574184 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_13(&(uParam1->f_19)))
		{
			func_22(&(uParam1->f_19));
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

bool func_860()
{
	if (func_742())
	{
		return false;
	}
	if (func_683())
	{
		return false;
	}
	if (!func_868())
	{
		return false;
	}
	if (!func_670())
	{
		return false;
	}
	if (func_867(8, -1))
	{
		return false;
	}
	if (func_870() == 2)
	{
		return false;
	}
	if (Global_2537071.f_4543)
	{
		return false;
	}
	if (func_672())
	{
		return false;
	}
	else if (!func_275(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return false;
	}
	if (((func_866(1) || func_864(1)) || Global_22211.f_124) || Global_22211)
	{
		return false;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return false;
	}
	if (func_863() && Global_1695468 == 2)
	{
		return false;
	}
	if (func_278(PLAYER::PLAYER_ID()) && !func_863())
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
	if (func_862(0))
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
	if (func_861(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if ((Global_1370265 || Global_1370266) || Global_1370267)
	{
		return false;
	}
	return true;
}

bool func_861(int iParam0)
{
	if (iParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310.f_4, 6);
}

bool func_862(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_45, iParam0);
}

bool func_863()
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1695469, 0));
}

bool func_864(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_865(PLAYER::PLAYER_PED_ID()))
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

bool func_865(int iParam0)
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

bool func_866(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_867(int iParam0, int iParam1)
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

bool func_868()
{
	if (func_869())
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

bool func_869()
{
	return Global_1312440;
}

int func_870()
{
	return Global_1377170.f_68;
}

bool func_871()
{
	if (Global_1574186 > 16)
	{
		return true;
	}
	return false;
}

float func_872()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_873(int iParam0)
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

bool func_874()
{
	if (func_875(PLAYER::PLAYER_ID()))
	{
		return Global_1319101;
	}
	return false;
}

bool func_875(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_25(bParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(bParam0);
		}
	}
	return false;
}

bool func_876()
{
	if (func_874())
	{
		return true;
	}
	if (func_808(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_846())
	{
		return true;
	}
	if (func_781(PLAYER::PLAYER_ID()))
	{
		switch (func_675(PLAYER::PLAYER_ID()))
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
				if (!func_877(PLAYER::PLAYER_ID()))
				{
					return true;
				}
				break;
			case 129:
				if (!func_877(PLAYER::PLAYER_ID()))
				{
					return true;
				}
				break;
			case 174:
				if (!func_877(PLAYER::PLAYER_ID()))
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

bool func_877(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 4);
}

bool func_878(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_781(PLAYER::PLAYER_ID()) && !func_680(PLAYER::PLAYER_ID())) && !func_779(PLAYER::PLAYER_ID()))
		{
			return true;
		}
	}
	if (iParam0 == 27)
	{
		if (func_175(PLAYER::PLAYER_ID(), 0) && func_680(PLAYER::PLAYER_ID()))
		{
			return true;
		}
		if (func_879(PLAYER::PLAYER_ID()) == 3)
		{
			return true;
		}
	}
	return false;
}

int func_879(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = 2;
	bVar1 = ((func_781(bParam0) && !func_810(bParam0)) && !MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 8));
	bVar2 = func_680(bParam0);
	bVar3 = func_495();
	bVar4 = func_883();
	if ((bVar1 && (func_682(bParam0) || func_882(bParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_881(bParam0)) && !func_880(bParam0)))
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

bool func_880(bool bParam0)
{
	return func_681(bParam0, 19);
}

bool func_881(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return func_681(bParam0, 9);
	}
	return false;
}

bool func_882(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[bVar0 /*615*/].f_1, 0);
	}
	return false;
}

int func_883()
{
	if ((func_681(PLAYER::PLAYER_ID(), 21) || func_681(PLAYER::PLAYER_ID(), 22)) || func_887())
	{
		return 1;
	}
	if (func_885())
	{
		func_884(22);
		return 1;
	}
	return 0;
}

void func_884(int iParam0)
{
	MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_4), iParam0);
}

bool func_885()
{
	if (func_175(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_495() && !func_494()) || func_493(PLAYER::PLAYER_ID(), 21)) || func_493(PLAYER::PLAYER_ID(), 25))
		{
			return true;
		}
		else
		{
			func_886(27);
		}
	}
	return false;
}

void func_886(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_4), iParam0);
}

bool func_887()
{
	return func_719(358, -1);
}

void func_888()
{
	int iVar0;

	if (Local_433.f_252 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_218.f_183)
	{
		Stack.Push(iVar0);
		Call_Loc(Local_433.f_252);
		if (StackVal)
		{
			if (func_891(iVar0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_214[iVar0]))
				{
					iLocal_214[iVar0] = HUD::ADD_BLIP_FOR_RADIUS(Local_218.f_183.f_1[iVar0 /*5*/], Local_218.f_183.f_1[iVar0 /*5*/].f_3);
					func_890(&(iLocal_214[iVar0]), Local_218.f_183.f_1[iVar0 /*5*/].f_4);
					HUD::SET_BLIP_ALPHA(iLocal_214[iVar0], 85);
				}
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_216[iVar0]))
			{
				Stack.Push(Local_433.f_252.f_4 != 0);
				Stack.Push(iVar0);
				Call_Loc(Local_433.f_252.f_4);
				if (StackVal && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(StackVal))
				{
					Stack.Push(iVar0);
					Call_Loc(Local_433.f_252.f_4);
					iLocal_216[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(StackVal));
				}
				else
				{
					iLocal_216[iVar0] = HUD::ADD_BLIP_FOR_COORD(Local_218.f_183.f_1[iVar0 /*5*/]);
				}
				HUD::SET_BLIP_SPRITE(iLocal_216[iVar0], func_454());
				func_890(&(iLocal_216[iVar0]), func_452());
				HUD::SET_BLIP_SCALE(iLocal_216[iVar0], func_449());
				if (Local_433.f_252.f_3 != 0)
				{
					Stack.Push(iLocal_216[iVar0]);
					Stack.Push(iVar0);
					Call_Loc(Local_433.f_252.f_3);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(StackVal, StackVal);
				}
				if (!func_434(29))
				{
					HUD::FLASH_MINIMAP_DISPLAY();
					func_423(29);
				}
			}
			else if (HUD::GET_BLIP_COLOUR(iLocal_216[iVar0]) != func_889(func_452()))
			{
				func_890(&(iLocal_216[iVar0]), func_452());
			}
			if (Local_433.f_252.f_2 != 0)
			{
				Stack.Push(iVar0);
				Call_Loc(Local_433.f_252.f_2);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_214[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_214[iVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_216[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_216[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_889(int iParam0)
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

void func_890(var uParam0, int iParam1)
{
	int iVar0;

	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_889(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

bool func_891(int iParam0)
{
	if (Local_433.f_252.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_252.f_1);
		return StackVal;
	}
	return true;
}

void func_892()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;

	bVar0 = bLocal_1217;
	if (PED::IS_PED_INJURED(bVar0))
	{
		return;
	}
	bVar3 = (PED::IS_PED_IN_FLYING_VEHICLE(bVar0) || func_911(bVar0));
	iVar1 = 0;
	while (iVar1 < Local_218.f_164)
	{
		bVar2 = false;
		if ((func_31(Local_218.f_164[iVar1 /*9*/].f_2) || func_31(Local_218.f_164[iVar1 /*9*/].f_5)) || Local_218.f_164[iVar1 /*9*/].f_8 == 0f)
		{
			Jump @606; //curOff = 116
		}
		else
		{
			vVar4 = { Local_218.f_164[iVar1 /*9*/].f_2 };
			vVar7 = { Local_218.f_164[iVar1 /*9*/].f_5 };
			fVar10 = Local_218.f_164[iVar1 /*9*/].f_8;
		}
		if (((((func_83(iVar1, 0) || func_83(iVar1, 1)) || func_83(iVar1, 2)) || func_83(iVar1, 6)) || func_83(iVar1, 7)) || func_83(iVar1, 8))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(bVar0, vVar4, vVar7, fVar10, false, true, 0))
			{
				Stack.Push(func_83(iVar1, 7));
				Stack.Push(iVar1);
				Stack.Push(7);
				Stack.Push(bVar3);
				Call_Loc(Local_433.f_250.f_1);
				if (StackVal && StackVal)
				{
					func_545(1);
				}
				Stack.Push(func_83(iVar1, 0));
				Stack.Push(iVar1);
				Stack.Push(0);
				Stack.Push(bVar3);
				Call_Loc(Local_433.f_250.f_1);
				if (StackVal && StackVal)
				{
					func_910(iVar1, 1);
					func_907(iVar1, 1);
					bVar2 = true;
					if (!func_46(14))
					{
						func_751();
					}
				}
				Stack.Push(func_83(iVar1, 1));
				Stack.Push(iVar1);
				Stack.Push(1);
				Stack.Push(bVar3);
				Call_Loc(Local_433.f_250.f_1);
				Stack.Push((StackVal && StackVal));
				Stack.Push((func_83(iVar1, 2) && bVar3));
				Stack.Push(iVar1);
				Stack.Push(2);
				Stack.Push(bVar3);
				Call_Loc(Local_433.f_250.f_1);
				if (StackVal || (StackVal && StackVal))
				{
					func_910(iVar1, 1);
					bVar2 = true;
					if (!func_46(14))
					{
						func_751();
					}
				}
				Stack.Push(func_83(iVar1, 6));
				Stack.Push(iVar1);
				Stack.Push(6);
				Stack.Push(bVar3);
				Call_Loc(Local_433.f_250.f_1);
				if (StackVal && StackVal)
				{
					func_910(iVar1, 1);
					bVar2 = true;
					func_903(iVar1);
				}
				Stack.Push(func_83(iVar1, 8));
				Stack.Push(iVar1);
				Stack.Push(8);
				Stack.Push(bVar3);
				Call_Loc(Local_433.f_250.f_1);
				if (StackVal && StackVal)
				{
					func_910(iVar1, 1);
					bVar2 = true;
					func_900(iVar1);
				}
			}
			if (!bVar2)
			{
				func_910(iVar1, 0);
			}
			if (func_83(iVar1, 1) || func_83(iVar1, 2))
			{
				if (func_899(iVar1))
				{
					func_893(iVar1, bVar2);
				}
			}
		}
		if (func_83(iVar1, 3))
		{
			func_907(iVar1, 1);
		}
		iVar1++;
	}
}

void func_893(int iParam0, bool bParam1)
{
	if (func_477(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_83(iParam0, 5))
		{
			func_894();
		}
		if (!func_13(&(Local_1270.f_109.f_4[iParam0 /*4*/])))
		{
			func_12(&(Local_1270.f_109.f_4[iParam0 /*4*/]), 0, 0);
		}
		else
		{
			Stack.Push(&(Local_1270.f_109.f_4[iParam0 /*4*/]));
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_250);
			if (func_11(StackVal, StackVal, 0))
			{
				func_907(iParam0, 1);
			}
		}
	}
	else
	{
		func_22(&(Local_1270.f_109.f_4[iParam0 /*4*/]));
	}
}

int func_894()
{
	int iVar0;

	iVar0 = func_898();
	if (iVar0 != -1)
	{
		func_895(NETWORK::NET_TO_PED(Local_1270.f_24[iVar0 /*22*/]), func_897(iVar0), 35);
		return 1;
	}
	return 0;
}

void func_895(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_896(iParam2), true);
}

int func_896(int iParam0)
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

char* func_897(int iParam0)
{
	return "PROVOKE_TRESPASS";
}

int func_898()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;

	iVar1 = -1;
	fVar6 = 999999.9f;
	vVar2 = { vLocal_1220 };
	iVar0 = 0;
	while (iVar0 < Local_218.f_28)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_24[iVar0 /*22*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1270.f_24[iVar0 /*22*/]))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_897(iVar0)))
				{
					if (!PED::IS_PED_DEAD_OR_DYING(NETWORK::NET_TO_PED(Local_1270.f_24[iVar0 /*22*/]), true))
					{
						fVar5 = SYSTEM::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_1270.f_24[iVar0 /*22*/]), false));
						if (fVar5 < fVar6)
						{
							fVar6 = fVar5;
							iVar1 = iVar0;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_899(int iParam0)
{
	return true;
}

void func_900(int iParam0)
{
	if (func_901())
	{
	}
}

bool func_901()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(bLocal_1217, false))
	{
		return func_902();
	}
	else if (bLocal_1213)
	{
		FIRE::ADD_EXPLOSION(vLocal_1220, 72, 1f, true, false, 1f, false);
		ENTITY::SET_ENTITY_HEALTH(bLocal_1217, 0, 0);
		return true;
	}
	return false;
}

int func_902()
{
	bool bVar0;

	bVar0 = PED::GET_VEHICLE_PED_IS_USING(bLocal_1217);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bVar0))
	{
		if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(bVar0)))
		{
			NETWORK::_0x2A5E0621DD815A9A(bVar0, 1, 0, 0);
			return 1;
		}
		else
		{
			NETWORK::NETWORK_EXPLODE_VEHICLE(bVar0, true, false, -1);
			return 1;
		}
	}
	return 0;
}

void func_903(int iParam0)
{
	int iVar0;

	Stack.Push(&(Local_1436[iLocal_1218 /*37*/].f_24.f_4[iParam0 /*4*/].f_2));
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_250);
	if (!func_11(StackVal, StackVal, 0))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_250);
		iVar0 = (StackVal - func_906(&(Local_1436[iLocal_1218 /*37*/].f_24.f_4[iParam0 /*4*/].f_2), 0, 0));
		if (iVar0 <= 1000)
		{
			func_905(&(uLocal_1209[iParam0]));
			if (func_904(&(uLocal_1209[iParam0]), "VULKAN_LOCK_ON_RED", 0, 1))
			{
			}
		}
		else if (func_904(&(uLocal_1209[iParam0]), "VULKAN_LOCK_ON_AMBER", 0, 1))
		{
		}
	}
	else if (func_901())
	{
	}
}

bool func_904(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (*uParam0 == -1)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(*uParam0, sParam1, sParam2, bParam3);
		return true;
	}
	return false;
}

void func_905(var uParam0)
{
	if (*uParam0 != -1)
	{
		AUDIO::STOP_SOUND(*uParam0);
		AUDIO::RELEASE_SOUND_ID(*uParam0);
		*uParam0 = -1;
	}
}

bool func_906(var uParam0, bool bParam1, bool bParam2)
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

void func_907(int iParam0, bool bParam1)
{
	if (!func_899(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_104(&(Local_1436[iLocal_1218 /*37*/].f_24), iParam0))
		{
			func_909(&(Local_1436[iLocal_1218 /*37*/].f_24), iParam0);
		}
	}
	else if (func_104(&(Local_1436[iLocal_1218 /*37*/].f_24), iParam0))
	{
		func_908(&(Local_1436[iLocal_1218 /*37*/].f_24), iParam0);
	}
}

void func_908(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
}

void func_909(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
}

void func_910(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_104(&(Local_1436[iLocal_1218 /*37*/].f_24.f_2), iParam0))
		{
			func_909(&(Local_1436[iLocal_1218 /*37*/].f_24.f_2), iParam0);
		}
	}
	else
	{
		if (func_104(&(Local_1436[iLocal_1218 /*37*/].f_24.f_2), iParam0))
		{
			func_908(&(Local_1436[iLocal_1218 /*37*/].f_24.f_2), iParam0);
		}
		if (func_83(iParam0, 6))
		{
			if (uLocal_1209[iParam0] != -1)
			{
				func_905(&(uLocal_1209[iParam0]));
			}
			if (func_13(&(Local_1436[iLocal_1218 /*37*/].f_24.f_4[iParam0 /*4*/].f_2)))
			{
				func_22(&(Local_1436[iLocal_1218 /*37*/].f_24.f_4[iParam0 /*4*/].f_2));
			}
		}
	}
}

bool func_911(bool bParam0)
{
	int iVar0;

	if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(bParam0, false);
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("OPPRESSOR2"))
		{
			return true;
		}
		if (ENTITY::IS_ENTITY_IN_AIR(iVar0) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0) > 1f)
		{
			return true;
		}
	}
	return false;
}

void func_912()
{
}

void func_913()
{
	if (!func_946())
	{
		func_914();
		return;
	}
	if (!func_659())
	{
		func_522();
		return;
	}
	Call_Loc(Local_817[func_700() /*16*/].f_15);
}

void func_914()
{
	func_522();
	func_915(1, 1, 1);
}

void func_915(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
		func_944();
	}
	func_942();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < func_7())
		{
			if (iLocal_1248[iVar0] != func_412())
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iLocal_1248[iVar0]))
					{
						func_916(NETWORK::NETWORK_GET_PLAYER_INDEX(iLocal_1248[iVar0]), 0);
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam1)
	{
	}
}

void func_916(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_941(bParam0);
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (MISC::IS_BIT_SET(Local_1164.f_6, bParam0) || bParam1)
			{
				if (func_940(bParam0))
				{
					func_939(bParam0, func_889(func_632(bLocal_1216, -2, 0, 0, 0)), 0, 0);
				}
				if (func_938(bParam0))
				{
					func_937(bParam0, 0);
				}
				if (func_936(bParam0))
				{
					func_935(bParam0, 0, 1, 0);
				}
				if (func_934(bParam0))
				{
					if (func_932(bParam0))
					{
						func_931(bParam0, 0, 1);
					}
				}
				if (func_930(bParam0))
				{
					func_926(bParam0, func_928(iVar0), 0, 0);
				}
				if (func_925(bParam0))
				{
					func_924(bParam0, 1f, 0, 0);
				}
				if (func_940(bParam0))
				{
					func_939(bParam0, 1, 0, 0);
				}
				if (func_922(bParam0))
				{
					func_917(bParam0, 0, 0);
				}
				MISC::CLEAR_BIT(&(Local_1164.f_6), bParam0);
			}
		}
	}
}

void func_917(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0;

	if (func_919(bParam0))
	{
		return;
	}
	func_918(&(Global_2416079.f_720[bParam0]), &(Global_2416079.f_1083[bParam0]), &(Global_2416079.f_393), bParam1, bParam0, bParam2, &uVar0);
}

bool func_918(var uParam0, var uParam1, int* iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!MISC::IS_BIT_SET(*iParam2, bParam4))
			{
				*bParam6 = 1;
				MISC::SET_BIT(iParam2, bParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (MISC::IS_BIT_SET(*iParam2, bParam4))
			{
				*bParam6 = 1;
				MISC::CLEAR_BIT(iParam2, bParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return true;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return false;
}

bool func_919(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return true;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_920())
	{
		return true;
	}
	return false;
}

int func_920()
{
	switch (func_157())
	{
		case 0:
			return func_921();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_921()
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

int func_922(bool bParam0)
{
	return func_923(&(Global_2416079.f_720[bParam0]));
}

int func_923(var uParam0)
{
	if (SCRIPT::IS_THREAD_ACTIVE(*uParam0))
	{
		if (!*uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return 0;
		}
	}
	return 1;
}

void func_924(bool bParam0, float fParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_919(bParam0))
	{
		return;
	}
	if (func_918(&(Global_2416079.f_753[bParam0]), &(Global_2416079.f_1116[bParam0]), &(Global_2416079.f_392), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_555[bParam0] = fParam1;
		}
	}
}

int func_925(bool bParam0)
{
	return func_923(&(Global_2416079.f_753[bParam0]));
}

void func_926(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;

	if (func_919(bParam0))
	{
		return;
	}
	if (func_918(&(Global_2416079.f_588[bParam0]), &(Global_2416079.f_951[bParam0]), &(Global_2416079.f_388), bParam2, bParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_423[bParam0] = iParam1;
		}
		if (bVar0)
		{
			func_927();
		}
	}
}

void func_927()
{
	Global_2416079.f_1614 = 1;
}

int func_928(int iParam0)
{
	if (Local_433.f_54.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_54.f_1);
		return StackVal;
	}
	if (Local_218.f_10.f_1 != -1)
	{
		return Local_218.f_10.f_1;
	}
	return func_929();
}

int func_929()
{
	return 478;
}

int func_930(bool bParam0)
{
	return func_923(&(Global_2416079.f_588[bParam0]));
}

void func_931(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0;

	if (func_919(bParam0))
	{
		return;
	}
	func_918(&(Global_2416079.f_918[bParam0]), &(Global_2416079.f_1281[bParam0]), &(Global_2416079.f_398), bParam1, bParam0, bParam2, &uVar0);
}

bool func_932(bool bParam0)
{
	return func_933(Global_2416079.f_918[bParam0], &(Global_2416079.f_398), bParam0);
}

int func_933(int iParam0, int* iParam1, bool bParam2)
{
	if (MISC::IS_BIT_SET(*iParam1, bParam2))
	{
		if (SCRIPT::IS_THREAD_ACTIVE(iParam0))
		{
			return 1;
		}
		else
		{
			MISC::CLEAR_BIT(iParam1, bParam2);
		}
	}
	return 0;
}

bool func_934(bool bParam0)
{
	return func_923(&(Global_2416079.f_918[bParam0]));
}

void func_935(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_919(bParam0))
	{
		return;
	}
	if (func_918(&(Global_2416079.f_819[bParam0]), &(Global_2416079.f_1182[bParam0]), &(Global_2416079.f_367), bParam1, bParam0, bParam3, &uVar0))
	{
		func_937(bParam0, bParam2);
	}
}

int func_936(bool bParam0)
{
	return func_923(&(Global_2416079.f_819[bParam0]));
}

void func_937(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_2416079.f_368), bParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2416079.f_368), bParam0);
	}
	if (HUD::DOES_BLIP_EXIST(Global_2416079[bParam0]))
	{
		if (bParam1)
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2416079[bParam0], false);
		}
		else
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2416079[bParam0], true);
		}
	}
}

int func_938(bool bParam0)
{
	return func_923(&(Global_2416079.f_885[bParam0]));
}

void func_939(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_919(bParam0))
	{
		return;
	}
	if (func_918(&(Global_2416079.f_621[bParam0]), &(Global_2416079.f_984[bParam0]), &(Global_2416079.f_389), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_456[bParam0] = iParam1;
		}
	}
}

int func_940(bool bParam0)
{
	return func_923(&(Global_2416079.f_621[bParam0]));
}

int func_941(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (Local_1164[iVar0 /*5*/].f_4 == bParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_942()
{
	func_943();
}

void func_943()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_1253))
	{
		HUD::REMOVE_BLIP(&iLocal_1253);
	}
}

void func_944()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_1164)
	{
		func_945(iVar0);
		iVar0++;
	}
}

void func_945(int iParam0)
{
	if (HUD::DOES_BLIP_EXIST(Local_1164[iParam0 /*5*/]))
	{
		HUD::REMOVE_BLIP(&(Local_1164[iParam0 /*5*/]));
	}
}

bool func_946()
{
	if (((((bLocal_1223 && func_434(7)) && !func_434(8)) && func_434(31)) && func_408() == 0) && !func_947())
	{
		return true;
	}
	return false;
}

bool func_947()
{
	Call_Loc(Local_433.f_17);
	return StackVal;
}

void func_948()
{
	func_970();
	func_964();
	if (bLocal_1224)
	{
		func_958();
		func_953();
		func_949();
	}
}

void func_949()
{
	int iVar0;

	if (!func_739())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!func_952(iVar0))
		{
			Stack.Push(Local_433.f_257.f_1 != 0);
			Stack.Push(iVar0);
			Call_Loc(Local_433.f_257.f_1);
			if (StackVal && StackVal)
			{
				if (func_951(iVar0))
				{
					if (Local_433.f_257.f_3 != 0)
					{
						Stack.Push(iVar0);
						Call_Loc(Local_433.f_257.f_3);
					}
					Stack.Push(iVar0);
					Call_Loc(Local_433.f_257.f_5);
					if (StackVal)
					{
						func_950(iVar0);
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_950(int iParam0)
{
	if (!func_104(&uLocal_1207, iParam0))
	{
		func_909(&uLocal_1207, iParam0);
	}
}

bool func_951(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_257.f_2);
	switch (StackVal)
	{
		case 0:
			if (Local_433.f_257 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_257);
				func_738(StackVal, -1);
				return true;
			}
			break;
		case 3:
			if (Local_433.f_257.f_4 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_257.f_4);
				return true;
			}
			break;
	}
	return false;
}

bool func_952(int iParam0)
{
	return func_104(&uLocal_1207, iParam0);
}

void func_953()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_218.f_10)
	{
		if (Local_1164.f_9 != -1)
		{
			if (Local_1164.f_9 == iVar0 && Local_1164[iVar0 /*5*/].f_4 != bLocal_1216)
			{
				Local_1164.f_9 = func_941(bLocal_1216);
				if (!func_691(iVar0, iLocal_1219, 6) && !func_6(iVar0, 29))
				{
				}
			}
		}
		else if (Local_1164[iVar0 /*5*/].f_4 == bLocal_1216)
		{
			if (!func_691(iVar0, iLocal_1219, 6) && !func_6(iVar0, 4))
			{
				if (!func_46(16))
				{
					Local_1164.f_9 = iVar0;
					func_954(iLocal_1225, bLocal_1216, func_957(), 0, func_46(20), -1, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_954(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	bool bVar16;

	Var0.f_2 = 590034952;
	Var0.f_10 = bParam1;
	Var0.f_11 = bParam2;
	Var0.f_3 = iParam0;
	Var0.f_12 = iParam5;
	Var0.f_13 = iParam6;
	Var0.f_4 = func_956(bParam3);
	Var0.f_5 = SYSTEM::TO_FLOAT(NETWORK::_0xF12E6CD06C73D69E());
	if (bParam4)
	{
	}
	iVar14 = 0;
	while (iVar14 < 32)
	{
		bVar16 = iVar14;
		if (func_28(bVar16, 0, 1))
		{
			if (bParam4)
			{
				MISC::SET_BIT(&iVar15, iVar14);
			}
			else if (func_67(bParam2, bVar16))
			{
				MISC::SET_BIT(&iVar15, iVar14);
			}
			else if (bParam1 == bVar16)
			{
				MISC::SET_BIT(&iVar15, iVar14);
			}
		}
		iVar14++;
	}
	if (iVar15 != 0)
	{
		func_955(Var0, iVar15);
	}
}

void func_955(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_956(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_957()
{
	return Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11;
}

void func_958()
{
	if (!func_659())
	{
		return;
	}
	func_959();
}

void func_959()
{
	int iVar0;
	int iVar1;

	if (Local_218.f_128 == -1 || Local_218.f_128.f_1 == 1)
	{
		return;
	}
	if (!func_13(&(Local_1270.f_151)))
	{
		return;
	}
	iVar0 = (func_17() - func_906(&(Local_1270.f_151), 0, 0));
	if (Local_218.f_128.f_1 == 2 && iVar0 > 300000)
	{
		return;
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 30000)
	{
		iVar1 = 1;
	}
	else
	{
		iVar1 = 6;
	}
	func_961(iVar0, "SMHUD_TIMEREM", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, iVar1, 0, 0, 0, 0, -1);
	if (func_960(Local_1270.f_151, (func_17() - 5000), 0) && !func_960(Local_1270.f_151, (func_17() - 4000), 0))
	{
		if (!func_434(22))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
			func_423(22);
		}
	}
	else if (func_434(22))
	{
		func_709(22);
	}
}

bool func_960(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return true;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::IS_TIME_EQUAL_TO(NETWORK::_0xBA7F0B77D80A4EB7(), iParam0)) >= iParam2)
		{
			return true;
		}
	}
	else if (MISC::ABSI(NETWORK::IS_TIME_EQUAL_TO(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return true;
	}
	return false;
}

void func_961(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_963(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_962(7, iVar0);
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

void func_962(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_963(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

void func_964()
{
	if (func_968())
	{
		func_965(1);
	}
	else
	{
		func_965(0);
	}
}

void func_965(bool bParam0)
{
	if (bParam0)
	{
		if (!func_434(32))
		{
			func_967(0, 13, 1, 1, 0, 1, 1, 0, 0);
			func_423(32);
		}
	}
	else if (func_434(32))
	{
		func_966(0);
		func_709(32);
	}
}

void func_966(int iParam0)
{
	int iVar0;

	if (func_362(PLAYER::PLAYER_ID()))
	{
		iVar0 = PLAYER::PLAYER_ID();
		MISC::CLEAR_BIT(&(Global_2425662[iVar0 /*421*/].f_229), Global_1373155[iParam0]);
		MISC::CLEAR_BIT(&(Global_2425662[iVar0 /*421*/].f_229), 17);
		MISC::CLEAR_BIT(&(Global_2425662[iVar0 /*421*/].f_229), 18);
		MISC::CLEAR_BIT(&(Global_2425662[iVar0 /*421*/].f_229), 19);
		MISC::CLEAR_BIT(&(Global_2425662[iVar0 /*421*/].f_229), 20);
		if (Global_2425662[iVar0 /*421*/].f_229 == 0)
		{
			Global_2425662[iVar0 /*421*/].f_228 = 0;
		}
	}
	Global_1373132[iParam0] = 0;
	Global_1373171[iParam0] = 0;
	Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_232 = 0;
}

void func_967(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	Global_1373155[iParam0] = iParam1;
	Global_1373179[iParam0] = iParam4;
	Global_1373187[iParam0] = iParam5;
	if (bParam6)
	{
		Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_232 = 1;
	}
	else
	{
		Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_232 = 0;
	}
	if (bParam7)
	{
	}
	if (func_362(PLAYER::PLAYER_ID()))
	{
		iVar0 = PLAYER::PLAYER_ID();
		MISC::SET_BIT(&(Global_2425662[iVar0 /*421*/].f_229), iParam1);
		Global_2425662[iVar0 /*421*/].f_228 = 1;
	}
	if (iParam2 == 1)
	{
		Global_1373163[iParam0] = 1;
	}
	else
	{
		Global_1373163[iParam0] = 0;
	}
	Global_1373132[iParam0] = 1;
	Global_1373171[iParam0] = iParam3;
	if (bParam8)
	{
		if (iParam1 == 12)
		{
			Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_233 = 1;
		}
	}
}

bool func_968()
{
	if ((((bLocal_1224 && func_46(18)) && func_969(bLocal_1216, 1)) && func_385(func_941(bLocal_1216))) && !PED::IS_PED_IN_ANY_VEHICLE(bLocal_1217, false))
	{
		return true;
	}
	return false;
}

bool func_969(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (Local_1164[iVar0 /*5*/].f_4 == bParam0)
		{
			if (bParam1)
			{
				if (func_691(iVar0, iLocal_1219, 6) || func_6(iVar0, 4))
				{
					return false;
				}
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_970()
{
	func_971();
}

void func_971()
{
	if (func_1529() > 0)
	{
		if (!func_434(9))
		{
			if (func_975())
			{
				if (func_11(&uLocal_1251, 1350, 0) && !func_974())
				{
					func_973();
					func_423(9);
				}
			}
		}
		else if (!func_434(10))
		{
			if (func_972(86))
			{
				func_423(10);
			}
		}
	}
}

bool func_972(int iParam0)
{
	return Global_2439138.f_2723[0 /*80*/].f_1 == iParam0;
}

void func_973()
{
}

bool func_974()
{
	return Global_1681929;
}

bool func_975()
{
	if ((((bLocal_1213 && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_742()) && bLocal_1223) && func_976())
	{
		return true;
	}
	return false;
}

bool func_976()
{
	if ((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT())
	{
		return true;
	}
	return false;
}

void func_977()
{
	func_988();
	func_985();
	func_979();
	func_978();
}

void func_978()
{
}

void func_979()
{
	if (func_984())
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_1216) < func_983())
		{
			func_981(bLocal_1216, func_983(), 0, 0);
		}
		PLAYER::_0x4669B3ED80F24B4E(bLocal_1216);
		PLAYER::_0xBC9490CA15AEA8FB(bLocal_1216);
		func_423(17);
	}
	else if (func_434(17))
	{
		if (func_980())
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_1216) > 0)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(bLocal_1216, 0, false);
			}
		}
		func_709(17);
	}
}

bool func_980()
{
	if (Local_433.f_26.f_8 != 0)
	{
		Call_Loc(Local_433.f_26.f_8);
		return StackVal;
	}
	return false;
}

void func_981(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	if (bParam0 != func_68() && func_28(bParam0, 1, 1))
	{
		func_982(iLocal_1225, func_446(bParam0), iParam1, iParam2, iParam3);
	}
}

void func_982(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<7> Var0;

	Var0 = 1059615374;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam2;
	Var0.f_4 = NETWORK::_0xF12E6CD06C73D69E();
	Var0.f_6 = iParam3;
	Var0.f_5 = iParam4;
	if (!iParam1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 7, iParam1);
	}
}

int func_983()
{
	Call_Loc(Local_433.f_26);
	return StackVal;
}

bool func_984()
{
	if (Local_433.f_26.f_7 != 0)
	{
		Call_Loc(Local_433.f_26.f_7);
		return StackVal;
	}
	return false;
}

void func_985()
{
	if (func_987())
	{
		if (PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(bLocal_1216) < func_986())
		{
			MISC::SET_FAKE_WANTED_LEVEL(func_986());
			func_423(18);
		}
	}
	else if (func_434(18))
	{
		if (PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(bLocal_1216) > 0)
		{
			MISC::SET_FAKE_WANTED_LEVEL(0);
		}
		func_709(18);
	}
}

int func_986()
{
	if (Local_433.f_26.f_1 != 0)
	{
		Call_Loc(Local_433.f_26.f_1);
		return StackVal;
	}
	return Local_218.f_125.f_1;
}

bool func_987()
{
	if (Local_433.f_26.f_6 != 0)
	{
		Call_Loc(Local_433.f_26.f_6);
		return StackVal;
	}
	return false;
}

void func_988()
{
	if (func_434(15))
	{
		if (!func_1007(Local_1183.f_2))
		{
			if (func_991(Local_1183, Local_1183.f_1))
			{
				if (Local_1183 > func_983())
				{
					PLAYER::SET_MAX_WANTED_LEVEL(Local_1183);
				}
				else if (PLAYER::GET_MAX_WANTED_LEVEL() != func_983())
				{
					PLAYER::SET_MAX_WANTED_LEVEL(func_983());
					func_709(13);
				}
				if (Global_1590535[bLocal_1216 /*876*/].f_751)
				{
					func_990();
				}
				PLAYER::SET_PLAYER_WANTED_LEVEL(bLocal_1216, Local_1183, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(bLocal_1216, false);
				Stack.Push(Local_433.f_26.f_9 != 0);
				Call_Loc(Local_433.f_26.f_9);
				if (StackVal && StackVal)
				{
					EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(104, bLocal_1217, -1f);
					PED::_0xAD27D957598E49E9(bLocal_1217, vLocal_1220, 20f, joaat("ARMY"));
				}
				func_989();
				func_709(15);
			}
			else
			{
				func_989();
				func_709(15);
			}
		}
	}
}

void func_989()
{
	Local_1183 = 0;
	Local_1183.f_2 = 0;
	Local_1183.f_1 = 0;
	func_22(&(Local_1183.f_3));
}

void func_990()
{
	if (MISC::IS_BIT_SET(Global_2537071.f_4555, 1))
	{
		MISC::CLEAR_BIT(&(Global_2537071.f_4555), 1);
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_4555, 4))
	{
		MISC::CLEAR_BIT(&(Global_2537071.f_4555), 4);
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_4555, 6))
	{
		MISC::CLEAR_BIT(&(Global_2537071.f_4555), 6);
	}
	MISC::CLEAR_BIT(&(Global_2537071.f_4555), 0);
	MISC::CLEAR_BIT(&(Global_2537071.f_4555), 2);
	Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_751 = 0;
	if (Global_2537071.f_4557 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(Global_2537071.f_4557);
	}
	Global_2537071.f_4556 = 0;
}

bool func_991(int iParam0, bool bParam1)
{
	if (func_983() <= 0)
	{
		return false;
	}
	if (func_993(bLocal_1216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		return false;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_1216) == iParam0)
	{
		return false;
	}
	if (func_992() && !bParam1)
	{
		return false;
	}
	Stack.Push(Local_433.f_26.f_3 != 0);
	Stack.Push(bParam1);
	Call_Loc(Local_433.f_26.f_3);
	if (StackVal && !StackVal)
	{
		return false;
	}
	return true;
}

bool func_992()
{
	bool bVar0;

	if (MISC::IS_BIT_SET(Global_2537071.f_4555, 4))
	{
		if (func_537(PLAYER::PLAYER_ID(), 1))
		{
			bVar0 = func_69(PLAYER::PLAYER_ID());
			if (bVar0 != func_68())
			{
				if (Global_1590535[bVar0 /*876*/].f_751)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_993(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_1006(bParam0))
		{
			return true;
		}
	}
	if (!bParam3)
	{
		if (func_1005(bParam0))
		{
			return true;
		}
	}
	if (!bParam4)
	{
		if (func_1004(bParam0))
		{
			return true;
		}
	}
	if (!bParam5)
	{
		if (func_1003(bParam0))
		{
			return true;
		}
	}
	if (!bParam6)
	{
		if (func_1002(bParam0))
		{
			return true;
		}
	}
	if (!bParam7)
	{
		if (func_1001(bParam0))
		{
			return true;
		}
	}
	if (!bParam8)
	{
		if (func_322(bParam0))
		{
			return true;
		}
	}
	if (!bParam9)
	{
		if (func_1000(bParam0))
		{
			return true;
		}
	}
	if (!bParam10)
	{
		if (func_999(bParam0))
		{
			return true;
		}
	}
	if (!bParam11)
	{
		if (func_328(bParam0, 0))
		{
			return true;
		}
	}
	if (!bParam12)
	{
		if (func_998(bParam0))
		{
			return true;
		}
	}
	if (!bParam13)
	{
		if (func_997(bParam0))
		{
			return true;
		}
	}
	if (!bParam14)
	{
		if (func_996(bParam0))
		{
			return true;
		}
	}
	if (!bParam15)
	{
		if (func_995(bParam0))
		{
			return true;
		}
	}
	if (!bParam16)
	{
		if (func_994(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_994(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[bParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return false;
}

bool func_995(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[bParam0 /*421*/].f_310.f_5) == 16;
			}
		}
	}
	return false;
}

bool func_996(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[bParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return false;
}

bool func_997(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[bParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return false;
}

bool func_998(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[bParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return false;
}

bool func_999(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_1000(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_1001(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[bParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return false;
}

bool func_1002(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[bParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return false;
}

bool func_1003(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[bParam0 /*421*/].f_310.f_5) == 4;
			}
		}
	}
	return false;
}

bool func_1004(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[bParam0 /*421*/].f_310.f_5) == 1;
			}
		}
	}
	return false;
}

bool func_1005(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[bParam0 /*421*/].f_310.f_5) == 2;
			}
		}
	}
	return false;
}

bool func_1006(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_323(Global_2425662[bParam0 /*421*/].f_310.f_5) == 0;
			}
		}
	}
	return false;
}

bool func_1007(var uParam0)
{
	Stack.Push(Local_433.f_26.f_10 != 0);
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_26.f_10);
	if (StackVal && StackVal)
	{
		return true;
	}
	if (Local_1183.f_2 == 0 || func_11(&(Local_1183.f_3), Local_1183.f_2, 0))
	{
		return false;
	}
	return true;
}

void func_1008()
{
	func_1025();
	func_1009();
}

void func_1009()
{
	if ((bLocal_1224 && (func_1024() == 27 || func_1024() == 28)) && Local_1196.f_9 == func_1023())
	{
		if (func_1018())
		{
			func_1012();
		}
	}
	else
	{
		func_1010();
	}
	Local_1196.f_9 = func_1023();
}

void func_1010()
{
	if (HUD::DOES_BLIP_EXIST(Local_1196.f_1[func_1011() /*4*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_1196.f_1[func_1011() /*4*/].f_1));
	}
}

int func_1011()
{
	return Local_1436[iLocal_1218 /*37*/].f_18;
}

void func_1012()
{
	float fVar0;

	fVar0 = 0.5f;
	if (PED::IS_PED_IN_ANY_VEHICLE(bLocal_1217, false))
	{
		fVar0 = 1.5f;
	}
	func_1013(func_1014(), (fVar0 * 1.8f), (fVar0 * 1.8f), 2.5f, 12, 0.7f);
}

void func_1013(vector3 vParam0, vector3 vParam3, int iParam6, float fParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	HUD::GET_HUD_COLOUR(iParam6, &iVar0, &iVar1, &iVar2, &uVar3);
	vParam0.f_2 = (vParam0.z - fParam7);
	GRAPHICS::DRAW_MARKER(1, vParam0, 0f, 0f, 0f, 0f, 0f, 0f, vParam3, iVar0, iVar1, iVar2, 150, false, false, 2, false, 0, 0, false);
}

Vector3 func_1014()
{
	return func_1015(func_1023());
}

Vector3 func_1015(int iParam0)
{
	if (bLocal_1213 && PED::IS_PED_IN_ANY_VEHICLE(bLocal_1217, false))
	{
		return func_1017(iParam0);
	}
	return func_1016(iParam0);
}

Vector3 func_1016(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1681961.f_1[iParam0 /*6*/];
	}
	return 0f, 0f, 0f;
}

Vector3 func_1017(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1681961.f_1[iParam0 /*6*/].f_3;
	}
	return 0f, 0f, 0f;
}

bool func_1018()
{
	if (!HUD::DOES_BLIP_EXIST(Local_1196.f_1[func_1011() /*4*/].f_1))
	{
		Local_1196.f_1[func_1011() /*4*/].f_1 = HUD::ADD_BLIP_FOR_COORD(func_1014());
		HUD::_0xB552929B85FC27EC(Local_1196.f_1[func_1011() /*4*/].f_1, true);
		HUD::SET_BLIP_PRIORITY(Local_1196.f_1[func_1011() /*4*/].f_1, 12);
		HUD::SET_BLIP_ROUTE(Local_1196.f_1[func_1011() /*4*/].f_1, func_1020());
		if (Local_1196.f_1[func_1011() /*4*/].f_2 && !Local_1196.f_1[func_1011() /*4*/].f_3)
		{
			func_1019(&(Local_1196.f_1[func_1011() /*4*/].f_1), 0);
			Local_1196.f_1[func_1011() /*4*/].f_3 = 1;
		}
		return false;
	}
	return true;
}

void func_1019(var uParam0, bool bParam1)
{
	HUD::SET_BLIP_FLASHES(*uParam0, true);
	HUD::SET_BLIP_FLASH_INTERVAL(*uParam0, 250);
	HUD::SET_BLIP_FLASH_TIMER(*uParam0, 7000);
	if (bParam1)
	{
		HUD::FLASH_MINIMAP_DISPLAY();
	}
}

int func_1020()
{
	if (func_1024() == 27)
	{
		return 1;
	}
	else if (func_1024() == 28 && func_1021(bLocal_1216))
	{
		return 1;
	}
	return 0;
}

bool func_1021(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
	if (func_1022(iVar0, 0) != -1)
	{
		return false;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
	{
		return false;
	}
	iVar3 = 0;
	while (iVar3 < VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar1))
	{
		if (iVar3 == -1)
		{
		}
		else if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar1, iVar3, false))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, iVar3, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (!PED::IS_PED_INJURED(iVar2))
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (func_969(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), 1))
						{
							return true;
						}
					}
				}
			}
		}
		iVar3++;
	}
	return false;
}

int func_1022(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!PED::IS_PED_INJURED(bParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(bParam0, bParam1);
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
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == bParam0)
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

int func_1023()
{
	if (Local_433.f_263.f_1 != 0)
	{
		Call_Loc(Local_433.f_263.f_1);
		return StackVal;
	}
	if (iLocal_1218 != -1)
	{
		return Local_1196.f_1[Local_1436[iLocal_1218 /*37*/].f_18 /*4*/];
	}
	return 0;
}

int func_1024()
{
	return Local_817[func_700() /*16*/];
}

void func_1025()
{
	if (!bLocal_1213 || func_31(func_1014()))
	{
		return;
	}
	Local_1196.f_10 = SYSTEM::VDIST(vLocal_1220, func_1014());
}

void func_1026()
{
	fLocal_1239 = SYSTEM::VDIST(vLocal_1220, Local_218.f_136[Local_1270.f_146 /*12*/]);
	if (func_1024() == 4)
	{
		func_1030();
		if (func_1028())
		{
			func_545(1);
		}
	}
	else if (func_1027())
	{
		func_745(1);
	}
}

bool func_1027()
{
	return false;
}

bool func_1028()
{
	if (func_369(iLocal_1219, 1))
	{
		return true;
	}
	if (Local_218.f_136[Local_1270.f_146 /*12*/].f_3 == -1f)
	{
		return true;
	}
	if (func_1029())
	{
		if (fLocal_1239 != -1f)
		{
			if (fLocal_1239 <= Local_218.f_136[Local_1270.f_146 /*12*/].f_3)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1029()
{
	return true;
}

void func_1030()
{
}

void func_1031()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;

	iVar5 = 0;
	while (iVar5 < Local_218.f_28)
	{
		bVar2 = false;
		bVar3 = false;
		func_113(iVar5, &bVar2, &bVar3, &bVar0, &iVar1);
		if (bVar2)
		{
			if (!bVar3)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(bVar0, true))
				{
					func_1131(iVar5, 1);
				}
				else
				{
					func_1130(iVar5, 1);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(bVar0, false))
				{
					func_1131(iVar5, 0);
				}
				else
				{
					func_1130(iVar5, 0);
				}
			}
			if (Local_433.f_73.f_108 != 0)
			{
				Stack.Push(iVar5);
				Stack.Push(bVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_433.f_73.f_108);
			}
			func_1068(iVar5, bVar0, bVar3);
			if (!bVar3)
			{
			}
		}
		switch (iVar1)
		{
			case 3:
				if (bVar2)
				{
					if (!bVar3)
					{
						func_1064(iVar5, bVar0);
						func_1061(iVar5, bVar0);
						func_1060(iVar5, bVar0, 1);
						if (!func_54(iVar5))
						{
							func_1054(iVar5, bVar0);
							func_1049(iVar5, bVar0, &bVar4);
							func_1045(iVar5, bVar0);
							func_1043(iVar5, bVar0);
							func_1034(iVar5, bVar0);
						}
					}
				}
				break;
			case 4:
				func_1033(iVar5, bVar0);
				break;
			case 6:
				if (bVar2)
				{
					if (!bVar3)
					{
					}
				}
				break;
			case 5:
				if (bVar2)
				{
					if (func_39(iVar5, 20) && func_118(Local_1270.f_24[iVar5 /*22*/]))
					{
						func_1032(&(Local_1270.f_24[iVar5 /*22*/]));
					}
				}
				break;
		}
		iVar5++;
	}
	if (!bVar4)
	{
		if (func_13(&(Local_930.f_229)))
		{
			func_22(&(Local_930.f_229));
		}
	}
	iVar5 = Local_930.f_231;
	func_113(iVar5, &bVar2, &bVar3, &bVar0, &iVar1);
	switch (iVar1)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_1060(iVar5, bVar0, 0);
				}
			}
			break;
	}
}

void func_1032(int iParam0)
{
	int iVar0;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*iParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

void func_1033(int iParam0, bool bParam1)
{
	if ((ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(bParam1) && !NETWORK::NETWORK_IS_PLAYER_FADING(bParam1)) && func_118(Local_1270.f_24[iParam0 /*22*/]))
	{
		if (func_39(iParam0, 19))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(bParam1);
			PED::SET_PED_KEEP_TASK(bParam1, false);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(bParam1, true);
		NETWORK::FADE_OUT_LOCAL_PLAYER(bParam1, 1, 1);
	}
}

void func_1034(int iParam0, bool bParam1)
{
	if (!func_1042(iParam0))
	{
		return;
	}
	if (!func_73(iParam0, 3))
	{
		if (func_1039(bParam1, func_1041(iParam0), func_1040(iParam0)))
		{
			if (func_11(&(Local_930[iParam0 /*76*/].f_74), func_1038(iParam0), 0))
			{
				func_1037(iParam0, 1);
				if (Local_433.f_73.f_76.f_1.f_5 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(1);
					Call_Loc(Local_433.f_73.f_76.f_1.f_5);
				}
			}
		}
		else if (func_13(&(Local_930[iParam0 /*76*/].f_74)))
		{
			func_22(&(Local_930[iParam0 /*76*/].f_74));
		}
	}
	else if (func_1036(iParam0))
	{
		if (!func_1039(bParam1, func_1041(iParam0), func_1040(iParam0)))
		{
			func_1035(iParam0, 1);
			if (Local_433.f_73.f_76.f_1.f_5 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(0);
				Call_Loc(Local_433.f_73.f_76.f_1.f_5);
			}
		}
	}
}

void func_1035(int iParam0, int iParam1)
{
	if (func_122(&(Local_1436[iLocal_1219 /*37*/].f_7[iParam0 /*2*/]), iParam1))
	{
	}
}

bool func_1036(int iParam0)
{
	if (Local_433.f_73.f_76.f_1.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_76.f_1.f_4);
		return StackVal;
	}
	return false;
}

void func_1037(int iParam0, int iParam1)
{
	if (func_15(&(Local_1436[iLocal_1219 /*37*/].f_7[iParam0 /*2*/]), iParam1))
	{
	}
}

int func_1038(int iParam0)
{
	if (Local_433.f_73.f_76.f_1.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_76.f_1.f_3);
		return StackVal;
	}
	return 0;
}

bool func_1039(bool bParam0, float fParam1, bool bParam2)
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(bParam0, false), vLocal_1220) <= (fParam1 * fParam1))
	{
		if (bParam2)
		{
			return ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bLocal_1217, bParam0, 287);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_1040(int iParam0)
{
	if (Local_433.f_73.f_76.f_1.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_76.f_1.f_2);
		return StackVal;
	}
	return false;
}

float func_1041(int iParam0)
{
	if (Local_433.f_73.f_76.f_1.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_76.f_1.f_1);
		return StackVal;
	}
	return 50f;
}

bool func_1042(int iParam0)
{
	if (Local_433.f_73.f_76.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_76.f_1);
		return StackVal;
	}
	return func_73(iParam0, 28);
}

void func_1043(int iParam0, bool bParam1)
{
	if (!func_1044(iParam0))
	{
		return;
	}
	if (!bLocal_1213)
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(bParam1) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam1, bLocal_1217))
	{
		func_1037(iParam0, 23);
	}
}

bool func_1044(int iParam0)
{
	return func_73(iParam0, 26);
}

void func_1045(int iParam0, bool bParam1)
{
	if (!func_1048(iParam0))
	{
		return;
	}
	if (!bLocal_1213)
	{
		return;
	}
	if (func_1046(bParam1, func_1047(), 1))
	{
		func_1037(iParam0, 0);
	}
}

bool func_1046(bool bParam0, float fParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), bParam0) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), bParam0) && bParam2))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		vVar3 = { ENTITY::GET_ENTITY_COORDS(bParam0, false) };
		if (SYSTEM::VDIST2(vVar0, vVar3) < (fParam1 * fParam1))
		{
			return true;
		}
	}
	return false;
}

float func_1047()
{
	return 20f;
}

bool func_1048(int iParam0)
{
	return (func_73(iParam0, 27) && !func_73(iParam0, 0));
}

void func_1049(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1053(iParam0))
	{
		return;
	}
	if (func_1052(bParam1))
	{
		*bParam2 = 1;
		if (!func_13(&(Local_930.f_229)))
		{
			func_12(&(Local_930.f_229), 0, 0);
			if (Local_433.f_73.f_111 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(bParam1);
				Call_Loc(Local_433.f_73.f_111);
			}
		}
		else if (func_11(&(Local_930.f_229), func_1050(iParam0), 0))
		{
			func_1037(iParam0, 20);
			if (Local_433.f_73.f_112 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(bParam1);
				Call_Loc(Local_433.f_73.f_112);
			}
		}
	}
}

int func_1050(int iParam0)
{
	if (Local_433.f_73.f_110 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(func_1051());
		Call_Loc(Local_433.f_73.f_110);
	}
	return 1000;
}

bool func_1051()
{
	int iVar0;

	return (WEAPON::GET_CURRENT_PED_WEAPON(bLocal_1217, &iVar0, false) && iVar0 != joaat("WEAPON_UNARMED"));
}

bool func_1052(bool bParam0)
{
	if (bLocal_1213)
	{
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(bLocal_1217))
		{
			if (PED::_0x06087579E7AA85A9(bParam0, bLocal_1217, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, bLocal_1217, 287))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1053(int iParam0)
{
	Stack.Push(Local_433.f_73.f_83.f_6 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_83.f_6);
	if (StackVal && StackVal)
	{
		return true;
	}
	return func_39(iParam0, 12);
}

void func_1054(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_1059(Local_1270.f_151, 2000, 0) || func_39(iParam0, 15))
	{
		return;
	}
	bVar0 = false;
	if (PED::HAS_PED_RECEIVED_EVENT(bParam1, 125))
	{
		bVar0 = true;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(bParam1, 126))
	{
		bVar0 = true;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(bParam1, 84))
	{
		bVar0 = true;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(bParam1, 97))
	{
		bVar0 = true;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(bParam1, 116))
	{
		bVar0 = true;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(bParam1, 94))
	{
		bVar0 = true;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(bParam1, 124))
	{
		bVar0 = true;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(bParam1, 23))
	{
		bVar0 = true;
	}
	if (func_1059(Local_1179[Local_218.f_28.f_1[iParam0 /*20*/].f_14 /*2*/], func_1058(iParam0), 0) && !func_1056(func_1057(iParam0)))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_1055(iParam0))
		{
			func_1037(iParam0, 19);
		}
	}
}

bool func_1055(int iParam0)
{
	if (func_1058(iParam0) > 0)
	{
		if (func_11(&(Local_1179[func_1057(iParam0) /*2*/]), func_1058(iParam0), 0))
		{
			return true;
		}
		return false;
	}
	return true;
}

bool func_1056(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_218.f_28)
	{
		if (Local_218.f_28.f_1[iVar0 /*20*/].f_14 == iParam0)
		{
			if (func_114(iVar0) < 6)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_1057(int iParam0)
{
	return Local_218.f_28.f_1[iParam0 /*20*/].f_14;
}

int func_1058(int iParam0)
{
	return Local_218.f_28.f_62[Local_218.f_28.f_1[iParam0 /*20*/].f_14 /*4*/].f_3;
}

bool func_1059(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_13(&iParam0))
	{
		return false;
	}
	if (iParam2 == -1)
	{
		return true;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::IS_TIME_EQUAL_TO(NETWORK::_0xBA7F0B77D80A4EB7(), iParam0)) >= iParam2)
		{
			return true;
		}
	}
	else if (MISC::ABSI(NETWORK::IS_TIME_EQUAL_TO(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return true;
	}
	return false;
}

void func_1060(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_52(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_51(Local_930[iParam0 /*76*/].f_1[iVar0 /*11*/]) != iParam2)
	{
		return;
	}
	if (Local_930[iParam0 /*76*/].f_1[iVar0 /*11*/].f_8 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(bParam1);
		Call_Loc(Local_930[iParam0 /*76*/].f_1[iVar0 /*11*/].f_8);
	}
}

void func_1061(int iParam0, bool bParam1)
{
	func_1062(iParam0, bParam1);
}

void func_1062(int iParam0, bool bParam1)
{
	if (!func_1063(iParam0, iLocal_1219, 24))
	{
		if (Local_218.f_28.f_62[Local_218.f_28.f_1[iParam0 /*20*/].f_14 /*4*/] == Global_1575000)
		{
			PED::_0x0F62619393661D6E(bParam1, 1, 1);
			func_1037(iParam0, 24);
		}
	}
}

bool func_1063(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_1436[iParam1 /*37*/].f_7[iParam0 /*2*/]), iParam2);
}

void func_1064(int iParam0, bool bParam1)
{
	if (func_39(iParam0, 2))
	{
		if (func_1024() == 8)
		{
			func_1066(0, iParam0, bParam1);
		}
		func_1065();
	}
}

void func_1065()
{
	iLocal_1182++;
}

void func_1066(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	HUD::GET_HUD_COLOUR(6, &iVar0, &iVar1, &iVar2, &uVar3);
	switch (iParam0)
	{
		case 0:
			if (func_46(8))
			{
				func_1067(bParam2, iVar0, iVar1, iVar2, 0.5f, 0, 0);
			}
			break;
		case 1:
			if (func_46(10))
			{
				func_1067(bParam2, iVar0, iVar1, iVar2, 0.5f, 0, 0);
			}
			break;
		case 2:
			if (func_46(9))
			{
				func_1067(bParam2, iVar0, iVar1, iVar2, 0.5f, 0, (Local_218.f_112.f_1[iParam1 /*10*/].f_7.f_1 > 170f && Local_218.f_112.f_1[iParam1 /*10*/].f_7.f_1 < 190f));
			}
			break;
	}
}

void func_1067(bool bParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;

	if (ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		if (!PED::IS_PED_INJURED(iVar11))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar11, false) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(iVar11, false))))
			{
				bParam0 = PED::GET_VEHICLE_PED_IS_IN(iVar11, false);
			}
		}
	}
	fVar9 = 0.5f;
	iVar10 = ENTITY::GET_ENTITY_MODEL(bParam0);
	MISC::GET_MODEL_DIMENSIONS(iVar10, &vVar0, &vVar3);
	fVar12 = ((vVar3.z - vVar0.z) / 2f);
	fVar13 = (vVar3.z - fVar12);
	if (fVar9 <= (fVar13 + 0.1f))
	{
		fVar9 = ((fVar13 + fParam4) - 0.1f);
	}
	switch (iVar10)
	{
		case joaat("SEVEN70"):
		case joaat("RAPTOR"):
		case joaat("ISSI3"):
		case joaat("COMET3"):
		case joaat("SPECTER2"):
		case joaat("HERMES"):
		case joaat("DOMINATOR3"):
			fVar9 = (fVar9 + 0.25f);
			break;
		case joaat("INSURGENT2"):
			fVar9 = (fVar9 + 0.75f);
			break;
	}
	fVar9 = (fVar9 + fParam5);
	fVar14 = 0f;
	if (bParam6)
	{
		vVar6 = { ENTITY::GET_ENTITY_COORDS(bParam0, true) - Vector((((vVar3.z - vVar0.z) / 2f) + fVar9), 0f, 0f) };
		fVar14 = 180f;
	}
	else
	{
		vVar6 = { ENTITY::GET_ENTITY_COORDS(bParam0, true) + Vector((((vVar3.z - vVar0.z) / 2f) + fVar9), 0f, 0f) };
	}
	if (iVar10 == joaat("IMP_PROP_IMPEXP_BOXPILE_02"))
	{
		vVar6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, true), ENTITY::GET_ENTITY_HEADING(bParam0), -1.45f, 0.5f, 0f) + Vector((((vVar3.z - vVar0.z) / 2f) + fVar9), 0f, 0f) };
	}
	GRAPHICS::DRAW_MARKER(2, vVar6, 0f, 0f, 0f, 180f, fVar14, 0f, fParam4, fParam4, fParam4, iParam1, iParam2, iParam3, 100, true, true, 2, false, 0, 0, false);
}

void func_1068(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	float fVar6;

	if (func_1128(iParam0, bParam2))
	{
		if (!MISC::IS_BIT_SET(Local_930[iParam0 /*76*/].f_59.f_6, 2) && HUD::DOES_BLIP_EXIST(Local_930[iParam0 /*76*/].f_59))
		{
			HUD::REMOVE_BLIP(&(Local_930[iParam0 /*76*/].f_59));
		}
		func_1123(Local_1270.f_24[iParam0 /*22*/], &(Local_930[iParam0 /*76*/].f_59), func_1127(iParam0), 0, 0, 0, func_1126(iParam0), 1, -1, 0);
	}
	else if ((bLocal_1223 && func_1121(iParam0, bParam2)) && !MISC::IS_BIT_SET(Local_930[iParam0 /*76*/].f_59.f_6, 2))
	{
		iVar0 = func_1120(iParam0);
		iVar1 = func_1118(iParam0);
		fVar2 = func_1117(iParam0);
		if (!HUD::DOES_BLIP_EXIST(Local_930[iParam0 /*76*/].f_59))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(bParam1))
			{
				func_1116(&(Local_930[iParam0 /*76*/].f_59));
			}
			Stack.Push(Local_433.f_73.f_83.f_8 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_83.f_8);
			bVar3 = (StackVal && StackVal);
			func_1115(&(Local_930[iParam0 /*76*/].f_59), bParam1, iVar1, iVar0, func_1126(iParam0), fVar2, 0, 0, 0, bVar3);
			HUD::SET_BLIP_PRIORITY(Local_930[iParam0 /*76*/].f_59, 11);
		}
		else
		{
			if (func_1114(iParam0))
			{
				HUD::SET_BLIP_ROTATION(Local_930[iParam0 /*76*/].f_59, SYSTEM::ROUND(ENTITY::_GET_ENTITY_PHYSICS_HEADING(bParam1)));
			}
			if (func_1053(iParam0))
			{
				HUD::SET_BLIP_SHOW_CONE(Local_930[iParam0 /*76*/].f_59, true);
			}
			if (iVar1 != -1 && iVar1 != HUD::GET_BLIP_SPRITE(Local_930[iParam0 /*76*/].f_59))
			{
				HUD::SET_BLIP_SPRITE(Local_930[iParam0 /*76*/].f_59, iVar1);
				HUD::SET_BLIP_SCALE(Local_930[iParam0 /*76*/].f_59, fVar2);
			}
			if (func_889(iVar0) != HUD::GET_BLIP_COLOUR(Local_930[iParam0 /*76*/].f_59))
			{
				func_890(&(Local_930[iParam0 /*76*/].f_59), iVar0);
			}
			if (func_39(iParam0, 13))
			{
				if (func_1113(iParam0, &iVar4, &fVar5, &fVar6))
				{
					func_1069(Local_930[iParam0 /*76*/].f_59, iVar4, fVar5, fVar6);
				}
			}
			Stack.Push(Local_433.f_73.f_83.f_5 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_83.f_5);
			if (StackVal && StackVal)
			{
				if (!HUD::IS_BLIP_FLASHING(Local_930[iParam0 /*76*/].f_59))
				{
					func_1019(&(Local_930[iParam0 /*76*/].f_59), 0);
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_930[iParam0 /*76*/].f_59.f_6, 2))
	{
		func_1116(&(Local_930[iParam0 /*76*/].f_59));
	}
	else if (HUD::DOES_BLIP_EXIST(Local_930[iParam0 /*76*/].f_59))
	{
		HUD::REMOVE_BLIP(&(Local_930[iParam0 /*76*/].f_59));
	}
}

void func_1069(int iParam0, int iParam1, float fParam2, float fParam3)
{
	HUD::SET_BLIP_ALPHA(iParam0, func_1070(iParam0, iParam1, fParam2, fParam3));
}

int func_1070(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (!func_1112(Global_2439138) && !func_643())
	{
		fVar0 = func_1072(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_1071();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_1071()
{
	if (func_357(Global_2439138, 1))
	{
		return 50;
	}
	return 0;
}

float func_1072(int iParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;

	iVar0 = Global_2439138;
	vVar2 = { func_1111(iParam0) };
	vVar2.f_2 = 0f;
	if (Global_1319111 || func_1108())
	{
		if (func_1107(iVar0))
		{
			vVar5 = { func_1075(iVar0) };
		}
		else if (func_1074(iVar0))
		{
			vVar5 = { func_1073(iVar0) };
		}
	}
	else
	{
		vVar5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), false) };
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

Vector3 func_1073(int iParam0)
{
	int iVar0;

	if (func_1074(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	return 0f, 0f, 0f;
}

bool func_1074(bool bParam0)
{
	int iVar0;

	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
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

Vector3 func_1075(bool bParam0)
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

	if (bParam0 == func_68())
	{
	}
	if (func_321(bParam0))
	{
		iVar0 = func_1106(bParam0);
		if (iVar0 != func_68())
		{
			if (!func_1105(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2439138.f_661[iVar0 /*3*/][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2439138.f_661[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2425662[func_1106(bParam0) /*421*/].f_310.f_9;
				}
			}
			else
			{
				iVar1 = func_1101(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1676377.f_488[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_319(bParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2537071.f_305))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2537071.f_305, false);
		}
	}
	else if (func_1003(bParam0) && !func_1100(bParam0))
	{
		iVar2 = Global_2425662[bParam0 /*421*/].f_310.f_8;
		if (iVar2 != func_68())
		{
			iVar3 = func_1101(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1676377.f_488[iVar3 /*3*/];
			}
		}
	}
	else if (func_1001(bParam0) && !func_1099(bParam0))
	{
		if (func_1107(bParam0) && func_1098())
		{
			return Global_1676377.f_488[Global_2425662[bParam0 /*421*/].f_310.f_5 /*3*/];
		}
		iVar4 = Global_2425662[bParam0 /*421*/].f_310.f_8;
		if (iVar4 != func_68())
		{
			if (func_1097(iVar4))
			{
				iVar5 = func_1094(iVar4);
				if (iVar5 != -1)
				{
					return Global_1676377.f_488[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_322(bParam0))
	{
		iVar6 = func_1093(bParam0);
		if (iVar6 != func_68())
		{
			if (!func_1092(iVar6))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2439138.f_758[iVar6]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2439138.f_758[iVar6], false);
				}
				else
				{
					return Global_2425662[func_1093(bParam0) /*421*/].f_310.f_16;
				}
			}
			else
			{
				iVar7 = func_1094(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1676377.f_488[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_320(bParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2537071.f_307))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2537071.f_307, false);
		}
	}
	else if (func_1000(bParam0) && !func_1091(bParam0))
	{
		iVar8 = Global_2425662[bParam0 /*421*/].f_310.f_8;
		if (iVar8 != func_68())
		{
			if (func_1090(iVar8))
			{
				iVar9 = func_1086(iVar8);
				if (iVar9 != -1)
				{
					return func_1085(iVar9);
				}
			}
		}
	}
	else if (func_999(bParam0) && !func_1084(bParam0))
	{
		iVar10 = Global_2425662[bParam0 /*421*/].f_310.f_8;
		if (iVar10 != func_68())
		{
			if (func_1083(iVar10))
			{
				iVar11 = func_1079(iVar10);
				if (iVar11 != -1)
				{
					return Global_1676377.f_488[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_328(bParam0, 0))
	{
		iVar12 = func_1078(bParam0);
		if (iVar12 != func_68())
		{
			if (!func_1077(iVar12))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2439138.f_791[iVar12]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2439138.f_791[iVar12], false);
				}
				else
				{
					return Global_1628237[func_1078(bParam0) /*615*/].f_600;
				}
			}
			else
			{
				iVar13 = func_1079(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1676377.f_488[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_998(bParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	if (func_1000(bParam0))
	{
		return func_1085(Global_2425662[bParam0 /*421*/].f_310.f_5);
	}
	if (func_1076(bParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1676377.f_488[Global_2425662[bParam0 /*421*/].f_310.f_5 /*3*/];
}

bool func_1076(bool bParam0)
{
	if ((func_997(bParam0) || func_995(bParam0)) || func_996(bParam0))
	{
		return true;
	}
	return false;
}

bool func_1077(int iParam0)
{
	if (iParam0 != func_68())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310.f_3, 4);
	}
	return false;
}

bool func_1078(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return bParam0;
	}
	return Global_2425662[bParam0 /*421*/].f_310.f_8;
}

int func_1079(int iParam0)
{
	int iVar0;

	if (iParam0 != func_68())
	{
		iVar0 = func_1082(iParam0);
		if (iVar0 != 0)
		{
			return func_1080(iVar0);
		}
	}
	return -1;
}

int func_1080(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_323(iVar0) == 11)
		{
			if (func_1081(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1081(int iParam0)
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

int func_1082(int iParam0)
{
	if (iParam0 != func_68())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_281;
	}
	return 0;
}

bool func_1083(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (Global_1590535[iParam0 /*876*/].f_274.f_281 != 0)
		{
			return true;
		}
	}
	return false;
}

bool func_1084(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_999(bParam0) && Global_2425662[bParam0 /*421*/].f_310.f_8 == bParam0)
		{
			return true;
		}
	}
	return false;
}

Vector3 func_1085(int iParam0)
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

int func_1086(int iParam0)
{
	int iVar0;

	if (iParam0 != func_68())
	{
		iVar0 = func_1089(iParam0);
		if (iVar0 != 0)
		{
			return func_1087(iVar0);
		}
	}
	return -1;
}

int func_1087(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_323(iVar0) == 11)
		{
			if (func_1088(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1088(int iParam0)
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

int func_1089(int iParam0)
{
	if (iParam0 != func_68())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_322;
	}
	return 0;
}

bool func_1090(int iParam0)
{
	if (iParam0 != func_68())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_322 != 0;
	}
	return false;
}

bool func_1091(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_1000(bParam0) && Global_2425662[bParam0 /*421*/].f_310.f_8 == bParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_1092(int iParam0)
{
	if (iParam0 != func_68())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310.f_2, 6);
	}
	return false;
}

bool func_1093(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return bParam0;
	}
	return Global_2425662[bParam0 /*421*/].f_310.f_8;
}

int func_1094(int iParam0)
{
	int iVar0;

	if (iParam0 == func_68())
	{
		return -1;
	}
	iVar0 = func_1096(iParam0);
	if (!iVar0 == 0)
	{
		return func_1095(iVar0);
	}
	return -1;
}

int func_1095(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_323(iVar0) == 9)
		{
			if (func_343(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1096(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return Global_1590535[iParam0 /*876*/].f_274.f_271;
}

bool func_1097(int iParam0)
{
	if (iParam0 != func_68())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_271 != 0;
	}
	return false;
}

bool func_1098()
{
	if (MISC::IS_BIT_SET(Global_1676377.f_2, 13) || Global_1676377.f_3015)
	{
		return true;
	}
	return false;
}

bool func_1099(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return false;
	}
	if (func_1001(bParam0) && Global_2425662[bParam0 /*421*/].f_310.f_8 == bParam0)
	{
		return true;
	}
	return false;
}

bool func_1100(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return false;
	}
	if (func_1003(bParam0) && Global_2425662[bParam0 /*421*/].f_310.f_8 == bParam0)
	{
		return true;
	}
	return false;
}

int func_1101(int iParam0)
{
	int iVar0;

	if (iParam0 == func_68())
	{
		return -1;
	}
	iVar0 = func_1104(iParam0);
	if (!iVar0 == 0)
	{
		return func_1102(iVar0);
	}
	return -1;
}

int func_1102(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_1103(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1103(int iParam0)
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

int func_1104(int iParam0)
{
	if (iParam0 == func_68())
	{
		return 0;
	}
	return Global_1590535[iParam0 /*876*/].f_274.f_183[5 /*12*/];
}

bool func_1105(int iParam0)
{
	if (iParam0 != func_68())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310, 6);
	}
	return false;
}

bool func_1106(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return bParam0;
	}
	return Global_2425662[bParam0 /*421*/].f_310.f_8;
}

bool func_1107(bool bParam0)
{
	if (bParam0 != func_68())
	{
		if (func_28(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == PLAYER::PLAYER_ID()) && func_28(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

int func_1108()
{
	if ((func_668() || func_1110()) || func_1109(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_1109(int iParam0)
{
	if (iParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1627020[iParam0 /*38*/].f_29, 20);
}

bool func_1110()
{
	return MISC::IS_BIT_SET(Global_1687686, 1);
}

Vector3 func_1111(int iParam0)
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

bool func_1112(bool bParam0)
{
	if ((MISC::IS_BIT_SET(Global_2425662[bParam0 /*421*/].f_68.f_2, 9) && !(MISC::IS_BIT_SET(Global_2425662[bParam0 /*421*/].f_68.f_2, 6) && MISC::IS_BIT_SET(Global_2425662[bParam0 /*421*/].f_68.f_2, 7))) || ((MISC::IS_BIT_SET(Global_2425662[bParam0 /*421*/].f_68.f_2, 6) && !MISC::IS_BIT_SET(Global_2425662[bParam0 /*421*/].f_68.f_2, 7)) && !MISC::IS_BIT_SET(Global_2425662[bParam0 /*421*/].f_68.f_2, 9)))
	{
		return true;
	}
	return false;
}

bool func_1113(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (Local_433.f_73.f_83.f_10 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Stack.Push(fParam2);
		Stack.Push(fParam3);
		Call_Loc(Local_433.f_73.f_83.f_10);
		return StackVal;
	}
	*iParam1 = 100;
	*fParam2 = 5000f;
	*fParam3 = 400f;
	return true;
}

bool func_1114(int iParam0)
{
	return false;
}

void func_1115(var uParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	*uParam0 = HUD::ADD_BLIP_FOR_ENTITY(bParam1);
	if (iParam2 != -1)
	{
		HUD::SET_BLIP_SPRITE(*uParam0, iParam2);
	}
	func_890(uParam0, iParam3);
	HUD::SET_BLIP_ROUTE(*uParam0, bParam6);
	HUD::SET_BLIP_AS_SHORT_RANGE(*uParam0, bParam7);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sParam4);
	}
	if (bParam9)
	{
		HUD::SHOW_HEIGHT_ON_BLIP(*uParam0, true);
		HUD::_0x2C9F302398E13141(*uParam0, 0);
	}
	if (bParam8)
	{
		func_1019(uParam0, 0);
	}
	if (fParam5 != 1f)
	{
		HUD::SET_BLIP_SCALE(*uParam0, fParam5);
	}
}

void func_1116(int* iParam0)
{
	bool bVar0;
	struct<8> Var1;

	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, false))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

float func_1117(int iParam0)
{
	if (Local_433.f_73.f_83.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_83.f_3);
		return StackVal;
	}
	switch (func_1024())
	{
		case 8:
			if (func_39(iParam0, 2))
			{
				return 1f;
			}
			break;
	}
	return 1f;
}

int func_1118(int iParam0)
{
	if (Local_433.f_73.f_83.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_83.f_1);
		return StackVal;
	}
	switch (func_1024())
	{
		case 8:
			if (func_39(iParam0, 2))
			{
				return 432;
			}
			break;
		case 33:
		case 34:
		case 35:
			if (func_1119(iParam0) != -1)
			{
				return 280;
			}
			break;
	}
	return -1;
}

int func_1119(int iParam0)
{
	return -1;
}

int func_1120(int iParam0)
{
	if (Local_433.f_73.f_83.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_83.f_2);
		return StackVal;
	}
	switch (func_1024())
	{
		case 8:
			if (func_39(iParam0, 2))
			{
				return 6;
			}
			break;
		case 33:
		case 34:
		case 35:
			if (func_1119(iParam0) != -1)
			{
				return 9;
			}
			break;
	}
	return 6;
}

bool func_1121(int iParam0, bool bParam1)
{
	Stack.Push(Local_433.f_73.f_83 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_83);
	if (StackVal && StackVal)
	{
		return true;
	}
	if (!bParam1)
	{
		switch (func_1024())
		{
			case 8:
				if (func_39(iParam0, 2))
				{
					return true;
				}
				break;
			case 33:
			case 34:
			case 35:
				if (func_1119(iParam0) == func_1122())
				{
					return true;
				}
				break;
		}
	}
	return false;
}

int func_1122()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (Local_1164[iVar0 /*5*/].f_4 == bLocal_1216 || func_691(iVar0, iLocal_1219, 14))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1123(int iParam0, int* iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_1125())
		{
			Global_2439138 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_1124(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2439138, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_1124(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2439138, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_1116(iParam1);
	}
}

int func_1124(int iParam0, int* iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			if (iParam8 == -1)
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0, true);
			}
			else
			{
				HUD::_SET_PED_HAS_AI_BLIP_WITH_COLOR(iParam0, true, iParam8);
			}
			iParam1->f_7 = iParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::SET_BLIP_PRIORITY(*iParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			HUD::_SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*iParam1 = HUD::_GET_AI_BLIP_2(iParam0);
		if (!iParam9 == -1)
		{
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*iParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*iParam1);
				}
				HUD::SET_BLIP_PRIORITY(*iParam1, 7);
			}
		}
		if (!MISC::IS_BIT_SET(iParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				MISC::SET_BIT(&(iParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			iParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!MISC::IS_BIT_SET(iParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(iParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(iParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(iParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(iParam1->f_1, 7);
					MISC::SET_BIT(&(iParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(iParam1->f_1))
			{
				iParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(iParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iParam1->f_1))
		{
			iParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(iParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_1125()
{
	return Global_1312854;
}

char* func_1126(int iParam0)
{
	if (Local_433.f_73.f_83.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_83.f_7);
		return StackVal;
	}
	if (func_39(iParam0, 9))
	{
		return "PB_COP";
	}
	if (func_39(iParam0, 3))
	{
		return "PB_CIV";
	}
	switch (func_1024())
	{
		case 8:
			if (func_39(iParam0, 2))
			{
				return "PB_TARGET";
			}
			break;
	}
	return "PB_ENEMY";
}

float func_1127(int iParam0)
{
	if (func_39(iParam0, 14))
	{
		return 300f;
	}
	return -1f;
}

bool func_1128(int iParam0, bool bParam1)
{
	if (!func_369(iLocal_1219, 2) && func_1129())
	{
		return false;
	}
	if (func_369(iLocal_1219, 2) && func_1112(bLocal_1216))
	{
		return false;
	}
	if (func_39(iParam0, 3) || func_1063(iParam0, iLocal_1219, 24))
	{
		return false;
	}
	if (!func_54(iParam0))
	{
		return false;
	}
	if (func_1121(iParam0, bParam1))
	{
		return false;
	}
	return true;
}

bool func_1129()
{
	return Global_1676377.f_460 != -1;
}

void func_1130(int iParam0, int iParam1)
{
	if (func_122(&(Local_930[iParam0 /*76*/].f_57), iParam1))
	{
	}
}

void func_1131(int iParam0, int iParam1)
{
	if (func_15(&(Local_930[iParam0 /*76*/].f_57), iParam1))
	{
	}
}

void func_1132()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 < Local_218.f_112)
	{
		bVar1 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_98[iVar3 /*5*/]);
		if (bVar1)
		{
			iVar0 = NETWORK::NET_TO_VEH(Local_1270.f_98[iVar3 /*5*/]);
			bVar2 = ENTITY::IS_ENTITY_DEAD(iVar0, false);
			func_1146(iVar3, iVar0);
			func_1140(iVar3, iVar0, bVar2);
			switch (func_129(iVar3))
			{
				case 2:
					func_1136(iVar3, iVar0);
					if (!bVar2)
					{
						func_1135(iVar3, iVar0);
					}
					break;
				case 3:
					if (func_1134(iVar3))
					{
						if (func_118(Local_1270.f_98[iVar3 /*5*/]))
						{
							func_1032(&(Local_1270.f_98[iVar3 /*5*/]));
						}
					}
					else if (func_1133(iVar3))
					{
						if (func_118(Local_1270.f_98[iVar3 /*5*/]))
						{
							func_108(&(Local_1270.f_98[iVar3 /*5*/]));
						}
					}
					break;
			}
		}
		iVar3++;
	}
}

bool func_1133(int iParam0)
{
	return false;
}

bool func_1134(int iParam0)
{
	if (func_119(iParam0))
	{
		return true;
	}
	return false;
}

void func_1135(int iParam0, bool bParam1)
{
	if (func_124(iParam0, 0))
	{
		if (func_1024() == 8)
		{
			func_1066(2, iParam0, bParam1);
		}
		func_1065();
	}
}

void func_1136(int iParam0, int iParam1)
{
	if (!func_1138(iParam0))
	{
		return;
	}
	if (func_118(Local_1270.f_98[iParam0 /*5*/]))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
		func_1137(iParam0, 10);
	}
}

void func_1137(int iParam0, int iParam1)
{
	if (func_15(&(Local_1436[iLocal_1219 /*37*/].f_14[iParam0 /*2*/]), iParam1))
	{
	}
}

bool func_1138(int iParam0)
{
	if (func_1139(iParam0, iLocal_1219, 10))
	{
		return false;
	}
	Stack.Push(Local_433.f_216.f_15 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_216.f_15);
	if (StackVal && StackVal)
	{
		return true;
	}
	return false;
}

bool func_1139(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_1436[iParam1 /*37*/].f_14[iParam0 /*2*/]), iParam2);
}

void func_1140(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;

	if (bLocal_1223 && func_1145(iParam0, bParam2))
	{
		iVar0 = func_1144(iParam0);
		iVar1 = func_1143(iParam0);
		fVar2 = func_1142(iParam0);
		if (!HUD::DOES_BLIP_EXIST(uLocal_1177[iParam0]))
		{
			Stack.Push(Local_433.f_216.f_8 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_216.f_8);
			bVar3 = (StackVal && StackVal);
			func_1115(&(uLocal_1177[iParam0]), bParam1, iVar1, iVar0, func_1141(iParam0), fVar2, 0, 0, 0, bVar3);
			HUD::SET_BLIP_PRIORITY(uLocal_1177[iParam0], 12);
		}
		else
		{
			if (iVar1 != HUD::GET_BLIP_SPRITE(uLocal_1177[iParam0]))
			{
				HUD::SET_BLIP_SPRITE(uLocal_1177[iParam0], iVar1);
				HUD::SET_BLIP_SCALE(uLocal_1177[iParam0], fVar2);
			}
			if (func_889(iVar0) != HUD::GET_BLIP_COLOUR(uLocal_1177[iParam0]))
			{
				func_890(&(uLocal_1177[iParam0]), iVar0);
			}
			if (func_124(iParam0, 23))
			{
				func_1069(uLocal_1177[iParam0], 100, 5000f, 1137180672 /* Float: 400f */);
			}
			Stack.Push(Local_433.f_216.f_5 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_216.f_5);
			if (StackVal && StackVal)
			{
				if (!HUD::IS_BLIP_FLASHING(uLocal_1177[iParam0]))
				{
					func_1019(&(uLocal_1177[iParam0]), 0);
				}
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_1177[iParam0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_1177[iParam0]));
	}
}

char* func_1141(int iParam0)
{
	if (Local_433.f_216.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_216.f_7);
		return StackVal;
	}
	if (func_1024() == 8 && func_124(iParam0, 0))
	{
		return "PB_TARGET";
	}
	return "BLIP_OBJ";
}

float func_1142(int iParam0)
{
	if (Local_433.f_216.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_216.f_3);
		return StackVal;
	}
	if (func_1024() == 8 && func_124(iParam0, 0))
	{
		return 1f;
	}
	return 1f;
}

int func_1143(int iParam0)
{
	if (Local_433.f_216.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_216.f_1);
		return StackVal;
	}
	if (func_1024() == 8 && func_124(iParam0, 0))
	{
		return 432;
	}
	return 32;
}

int func_1144(int iParam0)
{
	if (Local_433.f_216.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_83.f_2);
		return StackVal;
	}
	if (func_1024() == 8 && func_124(iParam0, 0))
	{
		return 6;
	}
	return 6;
}

bool func_1145(int iParam0, bool bParam1)
{
	Stack.Push(Local_433.f_216 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_216);
	if (StackVal && StackVal)
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_1024() == 8 && func_124(iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_1146(int iParam0, int iParam1)
{
	if (!func_1147(iParam0))
	{
		return;
	}
	if (func_118(Local_1270.f_98[iParam0 /*5*/]))
	{
		ENTITY::SET_ENTITY_PROOFS(iParam1, false, false, false, false, false, false, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iParam1, true);
		ENTITY::SET_ENTITY_HEALTH(iParam1, 0, 0);
		FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iParam1, true), 6, 1f, true, false, 1f, false);
		func_1137(iParam0, 11);
	}
}

bool func_1147(int iParam0)
{
	if (func_1139(iParam0, iLocal_1219, 11) || func_1148(iParam0, 9))
	{
		return false;
	}
	Stack.Push(Local_433.f_216.f_16 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_216.f_16);
	if (StackVal && StackVal)
	{
		return true;
	}
	return false;
}

bool func_1148(int iParam0, int iParam1)
{
	return func_4(&(Local_1270.f_98[iParam0 /*5*/].f_2), iParam1);
}

void func_1149()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	iVar1 = -1;
	fLocal_1240 = 99999f;
	iVar0 = 0;
	while (iVar0 < Local_218.f_95)
	{
		func_1192(iVar0);
		bVar5 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[iVar0 /*6*/]);
		if (bVar5)
		{
			bVar2 = NETWORK::NET_TO_VEH(Local_1270.f_91[iVar0 /*6*/]);
			bVar3 = func_105(Local_1270.f_91[iVar0 /*6*/]);
			bVar4 = func_1191(bLocal_1217, bVar2);
			if (bVar3)
			{
				iVar1 = func_374(iVar0, 2);
			}
			if (bVar4)
			{
				func_1190(iVar0, 4);
			}
			if (Local_433.f_188.f_24 != 0)
			{
				Stack.Push(iVar0);
				Stack.Push(bVar2);
				Stack.Push(bVar3);
				Stack.Push(bVar4);
				Stack.Push(iVar1);
				Call_Loc(Local_433.f_188.f_24);
			}
		}
		else
		{
			bVar2 = -1;
			bVar3 = false;
			bVar4 = false;
			iVar1 = -1;
		}
		func_1179(iVar0, bVar2, bVar3);
		if (bVar5)
		{
			func_1178(iVar0, bVar2);
			func_1176(iVar0, bVar2);
			func_1175(iVar0, bVar2);
			switch (func_373(iVar0))
			{
				case 0:
					break;
				case 2:
					break;
				case 4:
					if (bVar5)
					{
						func_1174(iVar0, bVar2);
						func_1172(iVar0, bVar2);
						func_1171(iVar0, bVar2, iVar1);
						func_1170(iVar0, bVar2);
						func_1168(iVar0, bVar2, iVar1, bVar4);
						if (bVar3)
						{
							func_1167(iVar0, bVar2);
							func_1166(iVar0, bVar2);
							func_1159(iVar0, bVar2);
							func_1157(iVar0, bVar2);
							func_1155(iVar0, bVar2);
							func_1154(iVar0, bVar2);
							func_1153(iVar0, bVar2);
						}
					}
					break;
				case 5:
					break;
				case 3:
					func_1150(iVar0, bVar2);
					break;
				case 6:
					break;
				case 7:
					break;
			}
		}
		iVar0++;
	}
	fLocal_1241 = fLocal_1240;
	fLocal_1240 = fLocal_1241;
}

void func_1150(int iParam0, bool bParam1)
{
	vector3 vVar0;
	float fVar3;
	struct<30> Var4;

	if (func_118(Local_1270.f_91[iParam0 /*6*/]))
	{
		Var4.f_4 = 1125515264;
		Var4.f_5 = 1;
		Var4.f_6 = 1;
		Var4.f_8 = 1082130432;
		Var4.f_9 = 1176255488;
		Var4.f_10 = 1;
		Var4.f_13 = 1;
		Var4.f_15 = 2;
		Var4.f_22 = 2;
		Var4.f_25 = 1;
		Var4.f_26 = 1;
		Var4.f_29 = 1123024896;
		Var4 = 20f;
		Var4.f_4 = 100f;
		Var4.f_1 = 1;
		Var4.f_12 = 1;
		Var4.f_13 = 0;
		Var4.f_5 = 0;
		if (func_242(ENTITY::GET_ENTITY_COORDS(bParam1, true), 0f, 0f, 0f, ENTITY::GET_ENTITY_MODEL(bParam1), 1, &vVar0, &fVar3, &Var4))
		{
			NETWORK::NETWORK_FADE_OUT_ENTITY(bParam1, true, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(bParam1, vVar0, false, false, true);
			ENTITY::SET_ENTITY_HEADING(bParam1, fVar3);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(bParam1, 5f);
			func_1151(iParam0, 1, Local_1270.f_144);
		}
	}
}

void func_1151(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar5;

	Var0 = 982668033;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_4 = iParam1;
	Var0.f_3 = uParam2;
	iVar5 = func_1152(1);
	if (iVar5 != 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 5, iVar5);
	}
}

int func_1152(bool bParam0)
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
			if (func_28(bVar2, 0, 0))
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

void func_1153(int iParam0, bool bParam1)
{
	if (!func_519(iParam0, iLocal_1219, 15))
	{
		if (func_135(iParam0, 34))
		{
			PED::SET_PED_VEHICLE_FORCED_SEAT_USAGE(bLocal_1217, bParam1, 0, 1);
		}
		func_1190(iParam0, 15);
	}
}

void func_1154(int iParam0, bool bParam1)
{
	if (Local_433.f_188.f_27 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(bParam1);
		Call_Loc(Local_433.f_188.f_27);
	}
}

void func_1155(int iParam0, bool bParam1)
{
	if (func_135(iParam0, 10) && func_1024() == 8)
	{
		func_1066(1, iParam0, bParam1);
	}
	else if (func_135(iParam0, 7) && func_46(17))
	{
		if (func_368(iParam0, 17))
		{
			func_1156(bParam1);
		}
	}
}

void func_1156(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
	func_1067(bParam0, iVar0, iVar1, iVar2, 0.5f, 0, 0);
}

void func_1157(int iParam0, bool bParam1)
{
	Stack.Push(!func_135(iParam0, 17));
	Stack.Push(iParam0);
	Stack.Push(bParam1);
	Call_Loc(Local_433.f_188.f_16);
	if (StackVal || !StackVal)
	{
		return;
	}
	if (func_118(Local_1270.f_91[iParam0 /*6*/]))
	{
		func_1158(iParam0, bParam1);
	}
}

void func_1158(int iParam0, bool bParam1)
{
	if (func_135(iParam0, 18))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(bParam1, 7);
	}
	else
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(bParam1, 1);
	}
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(bParam1, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(bParam1, bLocal_1216, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(bParam1, true);
	if (!func_135(iParam0, 20))
	{
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(bParam1, false);
	}
}

void func_1159(int iParam0, bool bParam1)
{
	vector3 vVar0;
	float fVar3;
	struct<30> Var4;

	if (!func_135(iParam0, 2) || !func_1162(iParam0, bParam1))
	{
		return;
	}
	if (func_118(Local_1270.f_91[iParam0 /*6*/]))
	{
		Var4.f_4 = 1125515264;
		Var4.f_5 = 1;
		Var4.f_6 = 1;
		Var4.f_8 = 1082130432;
		Var4.f_9 = 1176255488;
		Var4.f_10 = 1;
		Var4.f_13 = 1;
		Var4.f_15 = 2;
		Var4.f_22 = 2;
		Var4.f_25 = 1;
		Var4.f_26 = 1;
		Var4.f_29 = 1123024896;
		Var4 = func_1161();
		Var4.f_4 = func_1160();
		Var4.f_1 = 1;
		Var4.f_12 = 1;
		Var4.f_13 = 0;
		Var4.f_5 = 1;
		if (func_242(ENTITY::GET_ENTITY_COORDS(bParam1, true), 0f, 0f, 0f, ENTITY::GET_ENTITY_MODEL(bParam1), 1, &vVar0, &fVar3, &Var4))
		{
			NETWORK::NETWORK_FADE_OUT_ENTITY(bParam1, true, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(bParam1, vVar0, false, false, true);
			ENTITY::SET_ENTITY_HEADING(bParam1, fVar3);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(bParam1, 5f);
			if (Local_433.f_188.f_19 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_188.f_19);
			}
		}
	}
}

float func_1160()
{
	return 150f;
}

float func_1161()
{
	return 20f;
}

bool func_1162(int iParam0, bool bParam1)
{
	Stack.Push(Local_433.f_188.f_17 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_188.f_17);
	if (StackVal && StackVal)
	{
		return true;
	}
	if (func_1163(bParam1))
	{
		return true;
	}
	return false;
}

bool func_1163(bool bParam0)
{
	return (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(bParam0, 0, func_1165()) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(bParam0, 1, func_1165())) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(bParam0, 3, func_1164())) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(bParam0, 2, func_1165()));
}

int func_1164()
{
	return 15000;
}

int func_1165()
{
	return 10000;
}

void func_1166(int iParam0, bool bParam1)
{
	float fVar0;

	Stack.Push(Local_433.f_188.f_15 == 0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_188.f_15);
	if (StackVal || !StackVal)
	{
		return;
	}
	fVar0 = SYSTEM::VDIST(vLocal_1220, ENTITY::GET_ENTITY_COORDS(bParam1, false));
	if (fVar0 < fLocal_1240)
	{
		fLocal_1240 = fVar0;
		iLocal_1234 = iLocal_1234;
		iLocal_1234 = iParam0;
	}
}

void func_1167(int iParam0, bool bParam1)
{
	if (func_135(iParam0, 10))
	{
		func_1065();
	}
}

void func_1168(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!func_1169(iParam0, iParam2, bParam3))
	{
		return;
	}
	if (func_118(Local_1270.f_91[iParam0 /*6*/]))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(bParam1, false);
		func_1190(iParam0, 1);
	}
}

bool func_1169(int iParam0, int iParam1, bool bParam2)
{
	if (func_519(iParam0, iLocal_1219, 1))
	{
		return false;
	}
	if ((func_135(iParam0, 7) && bParam2) || ((iParam1 != -1 && func_6(iParam1, 7)) && func_6(iParam1, 1)))
	{
		return true;
	}
	Stack.Push(Local_433.f_188.f_14 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_188.f_14);
	if (StackVal && StackVal)
	{
		return true;
	}
	return false;
}

void func_1170(int iParam0, bool bParam1)
{
	if ((!func_135(iParam0, 19) || func_368(iParam0, 13)) || func_519(iParam0, iLocal_1219, 11))
	{
		return;
	}
	if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(bParam1))
	{
		if (func_118(Local_1270.f_91[iParam0 /*6*/]))
		{
			VEHICLE::_SET_CARGOBOB_HOOK_POSITION(bParam1, 5f, 5f, 0);
			func_1190(iParam0, 11);
		}
	}
}

void func_1171(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if ((!func_135(iParam0, 14) && !func_135(iParam0, 15)) || func_408() == 0)
	{
		return;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(bParam1, false))
	{
		if (func_135(iParam0, 7))
		{
			if ((iParam2 != -1 && !func_6(iParam2, 4)) && !func_6(iParam2, 3))
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
			if (func_118(Local_1270.f_91[iParam0 /*6*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(bParam1, false);
				if (func_135(iParam0, 14))
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(bParam1, -1000f);
				}
				if (func_135(iParam0, 15))
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_218.f_95.f_1[iParam0 /*14*/].f_3))
					{
						NETWORK::NETWORK_EXPLODE_VEHICLE(bParam1, true, false, -1);
					}
					else
					{
						NETWORK::_0x2A5E0621DD815A9A(bParam1, 1, 0, 0);
					}
				}
			}
		}
	}
}

void func_1172(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((!func_135(iParam0, 8) || func_368(iParam0, 3)) || func_519(iParam0, iLocal_1219, 3))
	{
		return;
	}
	iVar0 = -1;
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = Local_1270.f_91[iVar0 /*6*/];
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar1) && func_105(iVar1))
	{
		iVar2 = NETWORK::NET_TO_VEH(iVar1);
		if (func_1173(ENTITY::GET_ENTITY_MODEL(bParam1)))
		{
			if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(bParam1))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(bParam1, iVar2, 1f);
			}
			else
			{
				func_1190(iParam0, 3);
			}
		}
		else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(bParam1))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(bParam1, iVar2, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar2, "chassis_dummy"), 0f, -5.5f, 0.7f, 0f, 0f, 0f, false, false, false, false, 2, true);
		}
		else
		{
			func_1190(iParam0, 3);
		}
	}
}

bool func_1173(int iParam0)
{
	if ((((iParam0 == joaat("HAULER") || iParam0 == joaat("HAULER2")) || iParam0 == joaat("PHANTOM")) || iParam0 == joaat("PHANTOM2")) || iParam0 == joaat("PHANTOM3"))
	{
		return true;
	}
	return false;
}

void func_1174(int iParam0, bool bParam1)
{
	vector3 vVar0;
	float fVar3;

	if (iParam0 != Local_218.f_95.f_16 || func_841() != bLocal_1216)
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, false) };
	fVar3 = 500f;
	if (SYSTEM::VDIST2(vVar0, vLocal_1243) > (550f * 550f))
	{
		if (iLocal_1233 != -1)
		{
			MISC::REMOVE_POP_MULTIPLIER_SPHERE(iLocal_1233, false);
		}
		vLocal_1243 = { vVar0 };
		iLocal_1233 = MISC::ADD_POP_MULTIPLIER_SPHERE(vLocal_1243, fVar3, 1f, 0.02f, false, true);
	}
}

void func_1175(int iParam0, bool bParam1)
{
	if (bLocal_1213 && Local_1196.f_10 <= 10f)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(bLocal_1217, false))
		{
			if (bParam1 == PED::GET_VEHICLE_PED_IS_IN(bLocal_1217, false) && iLocal_1232 != iParam0)
			{
				iLocal_1232 = iParam0;
			}
		}
	}
	else if ((iLocal_1232 != -1 && !Global_1681961.f_4551) && !NETWORK::NETWORK_SET_IN_MP_CUTSCENE())
	{
		iLocal_1232 = -1;
	}
	if (iParam0 == iLocal_1232)
	{
		if (Global_1681961.f_4551 && NETWORK::NETWORK_SET_IN_MP_CUTSCENE())
		{
			func_1151(iParam0, 0, Local_1270.f_144);
			iLocal_1232 = -1;
		}
	}
}

void func_1176(int iParam0, bool bParam1)
{
	float fVar0;

	if (!func_135(iParam0, 16))
	{
		return;
	}
	if (!func_368(iParam0, 6) && !func_519(iParam0, iLocal_1219, 5))
	{
		if (Local_433.f_188.f_13 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_188.f_13);
			fVar0 = StackVal;
			Stack.Push(fVar0 != -1f);
			Stack.Push(bParam1);
			Stack.Push(fVar0);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_188.f_12);
			if (StackVal && func_1177(StackVal, StackVal, StackVal))
			{
				func_1190(iParam0, 5);
			}
		}
	}
}

bool func_1177(int iParam0, float fParam1, bool bParam2)
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), vLocal_1220) <= (fParam1 * fParam1))
	{
		if (bParam2)
		{
			return ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bLocal_1217, iParam0, 287);
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_1178(int iParam0, bool bParam1)
{
	if (!func_135(iParam0, 13))
	{
		return;
	}
	if (!func_368(iParam0, 2))
	{
		if (!func_368(iParam0, 0) && !func_519(iParam0, iLocal_1219, 0))
		{
			if (func_118(Local_1270.f_91[iParam0 /*6*/]))
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(bParam1, false);
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_1270.f_91[iParam0 /*6*/], true);
				func_1190(iParam0, 0);
			}
		}
	}
}

void func_1179(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;

	if (bLocal_1223 && func_1186(iParam0, bParam2))
	{
		iVar0 = func_1185(iParam0);
		iVar1 = func_1184(iParam0);
		fVar2 = func_1183(iParam0);
		if (!HUD::DOES_BLIP_EXIST(uLocal_1162[iParam0]))
		{
			Stack.Push(Local_433.f_188.f_8 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_188.f_8);
			bVar3 = (StackVal && StackVal);
			bVar4 = func_1182(iParam0);
			func_1115(&(uLocal_1162[iParam0]), bParam1, iVar1, iVar0, func_1181(iParam0), fVar2, 0, bVar4, 0, bVar3);
		}
		else
		{
			if (func_1180(iParam0))
			{
				HUD::SET_BLIP_ROTATION(uLocal_1162[iParam0], SYSTEM::ROUND(ENTITY::_GET_ENTITY_PHYSICS_HEADING(bParam1)));
			}
			if (iVar1 != HUD::GET_BLIP_SPRITE(uLocal_1162[iParam0]))
			{
				HUD::SET_BLIP_SPRITE(uLocal_1162[iParam0], iVar1);
				HUD::SET_BLIP_SCALE(uLocal_1162[iParam0], fVar2);
			}
			if (func_889(iVar0) != HUD::GET_BLIP_COLOUR(uLocal_1162[iParam0]))
			{
				func_890(&(uLocal_1162[iParam0]), iVar0);
			}
			if (func_135(iParam0, 12))
			{
				func_1069(uLocal_1162[iParam0], 100, 5000f, 1137180672 /* Float: 400f */);
			}
			Stack.Push(Local_433.f_188.f_5 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_188.f_5);
			if (StackVal && StackVal)
			{
				if (!HUD::IS_BLIP_FLASHING(uLocal_1162[iParam0]))
				{
					func_1019(&(uLocal_1162[iParam0]), 0);
				}
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_1162[iParam0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_1162[iParam0]));
	}
}

bool func_1180(int iParam0)
{
	switch (func_1184(iParam0))
	{
		case 460:
			return true;
		default:
			break;
	}
	return false;
}

char* func_1181(int iParam0)
{
	if (Local_433.f_188.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_188.f_7);
		return StackVal;
	}
	if (func_1024() == 8 && func_135(iParam0, 10))
	{
		return "PB_TARGET";
	}
	return "BLIP_VEH";
}

int func_1182(int iParam0)
{
	if (Local_433.f_188.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_188.f_9);
		return StackVal;
	}
	return 0;
}

float func_1183(int iParam0)
{
	if (Local_433.f_188.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_188.f_3);
		return StackVal;
	}
	if (func_1024() == 8 && func_135(iParam0, 10))
	{
		return 1f;
	}
	return 1f;
}

int func_1184(int iParam0)
{
	if (Local_433.f_188.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_188.f_1);
		return StackVal;
	}
	switch (func_1024())
	{
		case 8:
			if (func_135(iParam0, 10))
			{
				return 432;
			}
			break;
	}
	return 225;
}

int func_1185(int iParam0)
{
	if (Local_433.f_188.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_188.f_2);
		return StackVal;
	}
	if (func_1024() == 8 && func_135(iParam0, 10))
	{
		return 6;
	}
	return 9;
}

bool func_1186(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Stack.Push(Local_433.f_188 != 0);
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_188);
		if (StackVal && StackVal)
		{
			return true;
		}
		switch (func_1024())
		{
			case 8:
				if (func_135(iParam0, 10))
				{
					return true;
				}
				break;
			case 32:
				if ((func_1189(func_374(iParam0, 2)) != -1 && !func_1188(func_374(iParam0, 2))) && !func_1187(func_374(iParam0, 2), 1))
				{
					return true;
				}
				break;
			case 36:
				if (func_1189(func_374(iParam0, 2)) != -1 && !func_1187(func_374(iParam0, 2), 1))
				{
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_1187(int iParam0, bool bParam1)
{
	if ((func_6(iParam0, 4) || func_6(iParam0, 3)) || (bParam1 && func_691(iParam0, iLocal_1219, 6)))
	{
		return true;
	}
	return false;
}

bool func_1188(int iParam0)
{
	return Local_1164[iParam0 /*5*/].f_4 != func_68();
}

int func_1189(int iParam0)
{
	return -1;
}

void func_1190(int iParam0, int iParam1)
{
	if (func_15(&(Local_1436[iLocal_1219 /*37*/].f_19[iParam0 /*2*/]), iParam1))
	{
	}
}

int func_1191(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam0, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam1) && !ENTITY::IS_ENTITY_DEAD(bParam1, false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(bParam0, bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1192(int iParam0)
{
	func_1193(iParam0, 4);
}

void func_1193(int iParam0, int iParam1)
{
	if (func_122(&(Local_1436[iLocal_1219 /*37*/].f_19[iParam0 /*2*/]), iParam1))
	{
	}
}

void func_1194()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_1280(bLocal_1216);
	iVar5 = 0;
	while (iVar5 < Local_218.f_10)
	{
		func_1278(iVar5);
		bVar1 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2[iVar5]);
		if (bVar1)
		{
			iVar4 = NETWORK::NET_TO_ENT(Local_1270.f_2[iVar5]);
			bVar2 = ENTITY::IS_ENTITY_DEAD(iVar4, false);
			if (Local_433.f_54.f_18 != 0)
			{
				Stack.Push(iVar5);
				Stack.Push(iVar4);
				Stack.Push(bVar2);
				Call_Loc(Local_433.f_54.f_18);
			}
			if (!bVar2)
			{
				func_1273(iVar5, iVar4);
				func_1264(iVar5, iVar4, &bVar3);
				func_1261(iVar5, iVar4);
			}
			func_1260(iVar5);
			func_1255(iVar5, iVar0);
			func_1246(iVar5);
		}
		else
		{
			Local_1164[iVar5 /*5*/].f_1 = 99999f;
			Local_1164[iVar5 /*5*/].f_2 = 99999f;
			Local_1164[iVar5 /*5*/].f_3 = 99999f;
		}
		func_1238(iVar5, bVar1);
		iVar5++;
	}
	if (bVar3)
	{
		if (!func_1237())
		{
			if (Local_433.f_54.f_16 != 0)
			{
				Stack.Push(iVar5);
				Call_Loc(Local_433.f_54.f_16);
			}
		}
		func_1234(1, func_1236(iLocal_1225));
		func_1229(1);
	}
	else
	{
		func_1234(0, func_1236(iLocal_1225));
		func_1229(0);
	}
	if (func_1280(bLocal_1216) > 0)
	{
		func_1222(1);
	}
	else
	{
		func_1222(0);
	}
	if (iVar0 > 0)
	{
		func_1221();
	}
	func_1218();
	func_1196();
	iLocal_1242++;
	if (iLocal_1242 >= func_7())
	{
		iLocal_1242 = 0;
		func_1195();
	}
}

void func_1195()
{
	if (func_11(&(Local_1164.f_10), 5000, 0) && Local_1164.f_12)
	{
		func_22(&(Local_1164.f_10));
		Local_1164.f_12 = 0;
	}
}

void func_1196()
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;

	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2[iLocal_1242]))
	{
		iVar4 = NETWORK::NET_TO_ENT(Local_1270.f_2[iLocal_1242]);
		bVar3 = ENTITY::IS_ENTITY_DEAD(iVar4, false);
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar4, false) };
		if (!bVar3)
		{
			func_1216(iLocal_1242, vVar0);
			if (func_11(&(Local_1164.f_10), 5000, 0))
			{
				if (iLocal_1242 == 0)
				{
					Local_1164.f_12 = 1;
				}
				func_1197(iLocal_1242, iVar4, vVar0);
			}
		}
	}
}

void func_1197(int iParam0, int iParam1, vector3 vParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	float fVar6;

	iVar0 = func_1214(vParam2, 6, -1, 0, 1, -1);
	vVar1 = { func_1203(iVar0, 0) };
	iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vVar1, func_1199(iVar0));
	iVar5 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam1);
	if (iVar4 != 0 && iVar4 == iVar5)
	{
		if (func_1198(iVar0, &vVar1, &fVar6))
		{
			ENTITY::SET_ENTITY_COORDS(iParam1, vVar1, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iParam1, fVar6);
		}
	}
}

bool func_1198(int iParam0, var uParam1, float fParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*fParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*fParam2 = 29.5061f;
			break;
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*fParam2 = 50.3483f;
			break;
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*fParam2 = 0.9933f;
			break;
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*fParam2 = 118.2305f;
			break;
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*fParam2 = 346.4477f;
			break;
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*fParam2 = 186.0052f;
			break;
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*fParam2 = 316.1349f;
			break;
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*fParam2 = 320.2739f;
			break;
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*fParam2 = 4.6192f;
			break;
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*fParam2 = 1.8972f;
			break;
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*fParam2 = 129.7382f;
			break;
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*fParam2 = 1.1454f;
			break;
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*fParam2 = 120.5883f;
			break;
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*fParam2 = 316.4451f;
			break;
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*fParam2 = 36.3181f;
			break;
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*fParam2 = 3.5411f;
			break;
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*fParam2 = 251.3506f;
			break;
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*fParam2 = 101.2229f;
			break;
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*fParam2 = 29.8138f;
			break;
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*fParam2 = 160.4526f;
			break;
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*fParam2 = 318.7851f;
			break;
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*fParam2 = 17.9365f;
			break;
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*fParam2 = 68.6407f;
			break;
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*fParam2 = 301.2329f;
			break;
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*fParam2 = 225.1334f;
			break;
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*fParam2 = 246.9161f;
			break;
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*fParam2 = 163.5456f;
			break;
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*fParam2 = 98.6092f;
			break;
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*fParam2 = 85.2495f;
			break;
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*fParam2 = 45.6778f;
			break;
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*fParam2 = 159.4265f;
			break;
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*fParam2 = 181.0445f;
			break;
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*fParam2 = 315.8405f;
			break;
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*fParam2 = 92.6796f;
			break;
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*fParam2 = 210.7398f;
			break;
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*fParam2 = 127.0383f;
			break;
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*fParam2 = 100.2942f;
			break;
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*fParam2 = 179.205f;
			break;
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*fParam2 = 355.0598f;
			break;
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*fParam2 = 43.1213f;
			break;
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*fParam2 = 93.2649f;
			break;
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*fParam2 = 119.1085f;
			break;
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*fParam2 = 90.7225f;
			break;
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*fParam2 = 133.9002f;
			break;
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*fParam2 = 269.0687f;
			break;
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			break;
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			break;
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			break;
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			break;
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			break;
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			break;
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			break;
	}
	return !func_166(*uParam1, 0f, 0f, 0f, 0);
}

char* func_1199(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
		case 0:
			return "v_hairdresser";
		case 1:
			return "v_barbers";
		case 2:
			return "v_barbers";
		case 3:
			return "v_barbers";
		case 4:
			return "v_barbers";
		case 5:
			return "v_barbers";
		case 6:
			return "v_barbers";
		case 7:
			return "v_clotheslo";
		case 8:
			return "v_clotheslo";
		case 9:
			return "v_clotheslo";
		case 10:
			return "v_clotheslo";
		case 11:
			return "v_clotheslo";
		case 12:
			return "v_clotheslo";
		case 13:
			return "v_clotheslo";
		case 14:
			return "v_clothesmid";
		case 15:
			return "v_clothesmid";
		case 16:
			return "v_clothesmid";
		case 17:
			return "v_clothesmid";
		case 18:
			return "v_clotheshi";
		case 19:
			return "v_clotheshi";
		case 20:
			return "v_clotheshi";
		case 21:
			return "";
		case 22:
			return "v_tattoo";
		case 23:
			return "v_tattoo2";
		case 24:
			return "v_tattoo2";
		case 25:
			return "v_tattoo";
		case 26:
			return "v_tattoo";
		case 27:
			return "v_tattoo";
		case 28:
			return "v_gun";
		case 29:
			return "v_gun2";
		case 30:
			return "v_gun2";
		case 31:
			return "v_gun2";
		case 32:
			return "v_gun2";
		case 33:
			return "v_gun2";
		case 34:
			return "v_gun2";
		case 35:
			return "v_gun2";
		case 36:
			return "v_gun2";
		case 37:
			return "v_gun2";
		case 38:
			return "v_gun";
		case 39:
			return "v_carmod";
		case 40:
			return "v_lockup";
		case 41:
			return "v_carmod";
		case 42:
			return "v_carmod3";
		case 43:
			return "v_carmod3";
		case 44:
			return "lr_supermod_int";
		case 45:
			return func_1200(Global_100839);
		case 46:
			return "gr_grdlc_int_01";
		case 47:
			return "xm_x17dlc_int_01";
		case 48:
			return "ba_dlc_int_03_ba";
		case 49:
			return "xs_x18_int_mod";
		case 52:
			return "ch_dlc_plan";
		case 50:
			return "vw_dlc_casino_apart";
		case 51:
			return "vw_dlc_casino_main";
	}
	return "";
}

char* func_1200(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "imp_impexp_intwaremed";
		case 2:
			return "imp_impexp_intwaremed";
		case 3:
			return "imp_impexp_intwaremed";
		case 6:
		case 7:
		case 8:
		case 9:
			return "imp_imptexp_mod_int_01";
		case 4:
			return "Bkr_Biker_DLC_INT_01";
		case 5:
			return "Bkr_Biker_DLC_INT_02";
		case 10:
			return "gr_grdlc_int_01";
		case 11:
			return "gr_grdlc_int_02";
		case 12:
			return "sm_smugdlc_int_01";
		case 13:
			return "xm_x17dlc_int_01";
		case 14:
			return "xm_x17dlc_int_02";
		case 15:
			return "ba_dlc_int_01_ba";
		case 16:
			return "ba_dlc_int_03_ba";
		case 17:
			if (func_1201() == 0)
			{
				return "xs_x18_int_mod";
			}
			else
			{
				return "xs_x18_int_mod2";
			}
			break;
		default:
			return "";
	}
	return "";
}

int func_1201()
{
	return func_1202(PLAYER::PLAYER_ID());
}

int func_1202(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2425662[iParam0 /*421*/].f_310.f_3, 28, 31);
}

Vector3 func_1203(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
		case 4:
			return 1208.333f, -470.917f, 65.208f;
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		case 45:
			return func_1213(Global_100839);
		case 46:
			if (Global_1590374 != func_68())
			{
				if (func_1212(Global_1590374))
				{
					return func_1205(2, 2);
				}
				else if (func_1204(Global_1590374))
				{
					return func_1205(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		case 47:
			return 510.1f, 4749.5f, -69f;
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
		case 50:
			return Global_1696048;
		case 51:
			return 1100f, 220f, -50f;
	}
	return 1000000f, 1000000f, 1000000f;
}

bool func_1204(int iParam0)
{
	if (iParam0 != func_68())
	{
		if ((MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 0) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 1)) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 2))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_1205(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar6;

	vVar6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_68())
	{
		if (iParam1 == 3)
		{
			if (func_1206(iParam0, 1, &vVar0, 0, 0))
			{
				vVar6 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (MISC::IS_BIT_SET(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 4))
			{
				if (func_1206(iParam0, 1, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
			else if (MISC::IS_BIT_SET(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 5))
			{
				if (func_1206(iParam0, 2, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
		}
	}
	return vVar6;
}

bool func_1206(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar6;
	struct<4> Var12;
	vector3 vVar18;

	if (!func_1211(iParam3, &Var0))
	{
		return false;
	}
	if (!func_1211(iParam1, &vVar6))
	{
		return false;
	}
	if (!bParam4)
	{
		Var12 = { func_1209(iParam0) };
	}
	else
	{
		Var12 = { func_1208(iParam0) };
	}
	vVar18 = { Var12 - Var0 };
	vVar18 = { func_1207(vVar18, -Var0.f_3.f_2) };
	vVar18 = { func_1207(vVar18, vVar6.f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar6, 0f, vVar18) };
	uParam2->f_3 = { Var12.f_3 };
	return true;
}

Vector3 func_1207(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

struct<6> func_1208(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_1209(int iParam0)
{
	return func_1210(iParam0);
}

struct<6> func_1210(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

bool func_1211(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		default:
			break;
	}
	return false;
}

bool func_1212(int iParam0)
{
	if (iParam0 != func_68())
	{
		if ((MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 3) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 4)) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 5))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_1213(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
		case 2:
			return 1060f, -2990f, -35f;
		case 3:
			return 974.9542f, -3000.091f, -35f;
		case 6:
			return -1586.36f, -566.6f, 106.17f;
		case 7:
			return -1389.87f, -465.17f, 82.68f;
		case 8:
			return -145.81f, -590.2f, 171.13f;
		case 9:
			return -62.49f, -823.55f, 288.74f;
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
		case 10:
			return 1103.562f, -3000f, -40f;
		case 11:
			return 938.3077f, -3196.112f, -100f;
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
		case 13:
			return 520.0001f, 4750f, -70f;
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
		case 16:
			return -1421.015f, -3012.587f, -80f;
		case 17:
			if (func_1201() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		default:
			return 0f, 0f, -200f;
	}
	return 0f, 0f, -200f;
}

int func_1214(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam3 == 6 || iParam3 == func_158(iVar0))
		{
			if (!bParam5 || func_1215(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, func_1203(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (bParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_1215(int iParam0)
{
	return func_153(iParam0, 0, 0);
}

void func_1216(int iParam0, vector3 vParam1)
{
	Local_1164[iParam0 /*5*/].f_1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam1, vLocal_1220, func_1217(iParam0));
	Local_1164[iParam0 /*5*/].f_2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam1, func_1014(), func_1217(iParam0));
	Local_1164[iParam0 /*5*/].f_3 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam1, Local_218.f_10.f_5[iParam0 /*12*/].f_3, func_1217(iParam0));
}

int func_1217(int iParam0)
{
	if (Local_433.f_54.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_54.f_13);
	}
	return 1;
}

void func_1218()
{
	if (func_969(bLocal_1216, 1) && func_1220())
	{
		if (func_739())
		{
			if (!func_434(35))
			{
				func_738(func_1219(), -1);
				func_423(35);
			}
		}
	}
	else
	{
		if (func_434(35))
		{
			func_709(35);
		}
		if (func_735(func_1219()))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

char* func_1219()
{
	return "BHH_HELD";
}

bool func_1220()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2[iVar0]))
		{
			if (iLocal_1246[iVar0] != iLocal_1219)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(Local_1270.f_2[iVar0])))
				{
					if (Local_1164[iVar0 /*5*/].f_1 < 2f)
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_1221()
{
}

void func_1222(bool bParam0)
{
	if (bParam0)
	{
		if (func_1228() == 0)
		{
			func_1226(func_1023(), Local_1270.f_164);
		}
	}
	else
	{
		func_1223();
	}
}

void func_1223()
{
	if (Global_1681961.f_4706.f_2 != 0)
	{
	}
	else
	{
		return;
	}
	func_1225();
	func_1224();
}

void func_1224()
{
	Global_1681961.f_4706.f_2 = 0;
	Global_1681961.f_4706 = -1;
	Global_1681961.f_4706.f_1 = -1000;
}

void func_1225()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579), 0);
	func_1224();
}

void func_1226(int iParam0, struct<2> Param1)
{
	func_1227(iParam0, Param1);
}

void func_1227(int iParam0, struct<2> Param1)
{
	if (iParam0 == 0 || !func_391(Param1))
	{
		return;
	}
	if (Global_1681961.f_4706.f_2 != iParam0)
	{
		Global_1681961.f_4706.f_2 = iParam0;
		Global_1681961.f_4706 = { Param1 };
	}
}

int func_1228()
{
	return Global_1681961.f_4706.f_2;
}

void func_1229(bool bParam0)
{
	if (bParam0 != func_1233(bLocal_1216))
	{
		func_1230(iLocal_1226, bParam0);
	}
}

void func_1230(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1231(PLAYER::PLAYER_ID(), iParam0))
		{
			MISC::SET_BIT(&(Global_1703159[PLAYER::PLAYER_ID() /*13*/].f_12), iParam0);
		}
	}
	else if (func_1231(PLAYER::PLAYER_ID(), iParam0))
	{
		MISC::CLEAR_BIT(&(Global_1703159[PLAYER::PLAYER_ID() /*13*/].f_12), iParam0);
	}
}

bool func_1231(bool bParam0, int iParam1)
{
	if (!func_1232(bParam0))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1703159[bParam0 /*13*/].f_12, iParam1);
}

bool func_1232(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return Global_1703159[bVar0 /*13*/].f_12 != 0;
	}
	return false;
}

bool func_1233(bool bParam0)
{
	return func_1231(bParam0, iLocal_1226);
}

void func_1234(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1235(iParam1);
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1573343, iVar0))
		{
			MISC::SET_BIT(&Global_1573343, iVar0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1573343, iVar0))
	{
		MISC::CLEAR_BIT(&Global_1573343, iVar0);
	}
}

int func_1235(int iParam0)
{
	switch (iParam0)
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
	return 0;
}

int func_1236(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		case 24:
			return 2;
		case 26:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_1237()
{
	return Global_1573342;
}

void func_1238(int iParam0, bool bParam1)
{
	if (!func_1245(iParam0))
	{
		return;
	}
	if (bParam1 && func_118(Local_1270.f_2[iParam0]))
	{
		func_1032(&(Local_1270.f_2[iParam0]));
	}
	func_1240(iParam0);
	func_1239(iParam0);
}

void func_1239(int iParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2.f_18[iParam0]) && func_118(Local_1270.f_2.f_18[iParam0]))
	{
		func_1032(&(Local_1270.f_2.f_18[iParam0]));
		func_108(&(Local_1270.f_2.f_18[iParam0]));
	}
}

void func_1240(int iParam0)
{
	int iVar0;

	if (!func_6(iParam0, 4) || !func_1242(iParam0))
	{
		return;
	}
	iVar0 = func_1241(iParam0);
	if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(func_1241(iParam0))))
	{
		ENTITY::DETACH_ENTITY(NETWORK::NET_TO_ENT(func_1241(iParam0)), true, true);
	}
	if (func_46(11))
	{
		if (!NETWORK::NETWORK_IS_PLAYER_FADING(NETWORK::NET_TO_ENT(func_1241(iParam0))))
		{
			NETWORK::FADE_OUT_LOCAL_PLAYER(NETWORK::NET_TO_ENT(func_1241(iParam0)), 1, 1);
		}
		if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(func_1241(iParam0))))
		{
			func_1032(&iVar0);
		}
	}
	else if (func_46(12))
	{
		func_108(&iVar0);
	}
	else
	{
		func_1032(&iVar0);
	}
}

int func_1241(int iParam0)
{
	var uVar0;
	int iVar1;

	if (!func_44(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_43(iParam0);
	switch (func_45())
	{
		case 2:
			return Local_1270.f_91[iVar1 /*6*/];
		case 1:
			return Local_1270.f_24[iVar1 /*22*/];
		default:
			break;
	}
	return uVar0;
}

bool func_1242(int iParam0)
{
	if (!func_44(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_1241(iParam0)))
	{
		return false;
	}
	if ((func_6(iParam0, 35) || func_6(iParam0, 36)) || func_6(iParam0, 37))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(func_1241(iParam0)), false))
	{
		return false;
	}
	switch (func_45())
	{
		case 2:
			if (func_1243(func_1244(iParam0), 0, 1))
			{
				return false;
			}
			break;
	}
	if (!func_118(func_1241(iParam0)))
	{
		return false;
	}
	return true;
}

bool func_1243(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), false))
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), false);
				if (bParam1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (PED::IS_PED_A_PLAYER(iVar2))
						{
							if (!bParam2 && func_67(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID()))
							{
							}
							else
							{
								return true;
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (!bParam2 && func_67(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID()))
						{
						}
						else
						{
							return true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_1244(int iParam0)
{
	var uVar0;
	int iVar1;

	iVar1 = func_1241(iParam0);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar1))
	{
		return NETWORK::NET_TO_VEH(iVar1);
	}
	return uVar0;
}

bool func_1245(int iParam0)
{
	if ((((func_6(iParam0, 19) || (func_6(iParam0, 3) && func_11(&(Local_1270.f_2.f_2[iParam0 /*2*/]), 6000, 0))) || func_6(iParam0, 4)) || func_6(iParam0, 25)) || func_6(iParam0, 33))
	{
		return (func_6(iParam0, 4) || func_6(iParam0, 3));
	}
	return false;
}

void func_1246(int iParam0)
{
	if (func_1254(iParam0))
	{
		func_1247(iParam0);
	}
	else
	{
		func_945(iParam0);
	}
}

void func_1247(int iParam0)
{
	if (!HUD::DOES_BLIP_EXIST(Local_1164[iParam0 /*5*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2[iParam0]))
		{
			Local_1164[iParam0 /*5*/] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]));
			if (func_1253(func_928(iParam0)))
			{
				HUD::SET_BLIP_SPRITE(Local_1164[iParam0 /*5*/], func_928(iParam0));
			}
			HUD::SET_BLIP_SCALE(Local_1164[iParam0 /*5*/], func_1252(iParam0));
			HUD::SET_BLIP_COLOUR(Local_1164[iParam0 /*5*/], func_1250(iParam0, 0));
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1164[iParam0 /*5*/], func_1249(iParam0));
			HUD::SET_BLIP_PRIORITY(Local_1164[iParam0 /*5*/], 12);
			if (func_1248(iParam0))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(Local_1164[iParam0 /*5*/], true);
			}
			if (!func_691(iParam0, iLocal_1219, 46))
			{
				func_1019(&(Local_1164[iParam0 /*5*/]), 1);
				func_689(iParam0, 46);
			}
		}
	}
	else
	{
		HUD::SET_BLIP_COLOUR(Local_1164[iParam0 /*5*/], func_1250(iParam0, 0));
		if (HUD::GET_BLIP_SPRITE(Local_1164[iParam0 /*5*/]) != func_928(iParam0) && func_1253(func_928(iParam0)))
		{
			HUD::SET_BLIP_SPRITE(Local_1164[iParam0 /*5*/], func_928(iParam0));
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1164[iParam0 /*5*/], func_1249(iParam0));
		}
		if (HUD::GET_BLIP_COLOUR(Local_1164[iParam0 /*5*/]) != func_1250(iParam0, 0))
		{
			HUD::SET_BLIP_COLOUR(Local_1164[iParam0 /*5*/], func_1250(iParam0, 0));
		}
	}
}

bool func_1248(int iParam0)
{
	if (Local_433.f_54.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_54.f_8);
		return StackVal;
	}
	return Local_218.f_10.f_1.f_3;
}

char* func_1249(int iParam0)
{
	if (Local_433.f_54.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_54.f_7);
		return StackVal;
	}
	return "FMC_BLIP_ME";
}

int func_1250(int iParam0, bool bParam1)
{
	if (Local_433.f_54.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_54.f_2);
		return func_889(StackVal);
	}
	if (!bParam1)
	{
		if (func_691(iParam0, iLocal_1219, 12))
		{
			return 1;
		}
	}
	else if (func_1024() == 26 && func_691(iParam0, iLocal_1219, 12))
	{
		return 1;
	}
	if (!bParam1 && Local_1164[iParam0 /*5*/].f_4 != func_68())
	{
		return func_889(func_1251(Local_1164[iParam0 /*5*/].f_4));
	}
	if (func_386(iParam0))
	{
		if (!func_46(7))
		{
			return 57;
		}
	}
	return 2;
}

int func_1251(bool bParam0)
{
	int iVar0;

	iVar0 = func_649(bParam0);
	if (iVar0 != -1)
	{
		return func_647(iVar0);
	}
	return 1;
}

var func_1252(int iParam0)
{
	if (Local_433.f_54.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_54.f_3);
		return StackVal;
	}
	return Local_218.f_10.f_1.f_2;
}

bool func_1253(int iParam0)
{
	switch (iParam0)
	{
		case -1:
		case 32:
			return false;
		default:
			break;
	}
	return true;
}

bool func_1254(int iParam0)
{
	if (!bLocal_1224)
	{
		return false;
	}
	if (func_1187(iParam0, 0))
	{
		return false;
	}
	if (Local_1164[iParam0 /*5*/].f_4 != func_68() && func_45() != 1)
	{
		return false;
	}
	if (func_405(iParam0, 10) && !func_6(iParam0, 7))
	{
		return false;
	}
	if (func_691(iParam0, iLocal_1219, 14))
	{
		return false;
	}
	if (func_6(iParam0, 23) && func_1112(bLocal_1216))
	{
		return false;
	}
	if (func_6(iParam0, 29) && func_6(iParam0, 50))
	{
		return false;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_54);
	return StackVal;
}

void func_1255(int iParam0, int iParam1)
{
	if (Local_1164[iParam0 /*5*/].f_4 == bLocal_1216)
	{
		if (iParam1 != 5)
		{
			if (!func_1259(Local_1270.f_2.f_15[iParam0 /*2*/]))
			{
				func_1258(Local_1270.f_2.f_15[iParam0 /*2*/]);
			}
		}
	}
	else if (iParam1 != 0)
	{
		if ((!Global_1681961.f_4551 && !func_1257(bLocal_1216)) && !func_692())
		{
			if (func_1259(Local_1270.f_2.f_15[iParam0 /*2*/]))
			{
				func_1256(Local_1270.f_2.f_15[iParam0 /*2*/]);
			}
		}
	}
}

void func_1256(struct<2> Param0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_694(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/]) && func_394(Param0, Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/]))
		{
			Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/].f_1 = -1;
		}
		else
		{
			iVar0++;
		}
	}
	if (func_1280(PLAYER::PLAYER_ID()) <= 0)
	{
		MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579), 0);
		func_1224();
	}
}

bool func_1257(bool bParam0)
{
	bool bVar0;

	if (bParam0 != func_68() && (func_28(bParam0, 1, 1) || Global_2405072.f_2671))
	{
		bVar0 = MISC::IS_BIT_SET(Global_2425662[bParam0 /*421*/].f_310, 1);
		return bVar0;
	}
	return false;
}

void func_1258(struct<2> Param0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_694(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/]))
		{
			Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/] = { Param0 };
		}
		else
		{
			iVar0++;
		}
	}
	MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579), 0);
	func_392(Param0, "FREEMODE_DELIVERY_SET_LOCAL_PLAYER_IN_POSSESSION_OF_DELIVERABLE");
}

bool func_1259(struct<2> Param0)
{
	int iVar0;

	if (!func_694(Param0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_694(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/]) && func_394(Param0, Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1260(int iParam0)
{
	if (iLocal_1246[iParam0] != func_412())
	{
		if (iLocal_1248[iParam0] != iLocal_1246[iParam0])
		{
			iLocal_1248[iParam0] = iLocal_1246[iParam0];
		}
	}
}

void func_1261(int iParam0, int iParam1)
{
	if (func_6(iParam0, 29) || !func_1263(iParam0))
	{
		return;
	}
	func_1262(iParam1);
}

void func_1262(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;

	if (ENTITY::IS_ENTITY_VISIBLE(bParam0))
	{
		fVar0 = 0.3f;
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			fVar1 = 0.5f;
			fVar0 = 1f;
		}
		HUD::GET_HUD_COLOUR(18, &iVar2, &iVar3, &iVar4, &uVar5);
		func_1067(bParam0, iVar2, iVar3, iVar4, fVar0, fVar1, 0);
	}
}

bool func_1263(int iParam0)
{
	return false;
}

void func_1264(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		iVar0 = ENTITY::GET_ENTITY_ATTACHED_TO(iParam1);
		if (iVar0 != -1)
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (iVar2 == bLocal_1216)
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1270.f_2[iParam0]))
						{
							OBJECT::_HIDE_PICKUP(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), false);
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]), true);
							ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]), false);
							func_689(iParam0, 1);
							if (func_1272(iParam0))
							{
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_1270.f_2[iParam0]), true, false);
							}
							if (!func_6(iParam0, 1))
							{
								func_689(iParam0, 18);
							}
							*bParam2 = 1;
							func_751();
						}
					}
					else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
					{
						func_689(iParam0, 12);
					}
				}
				else if (!PED::IS_PED_INJURED(iVar1))
				{
					if (PED::IS_PED_IN_GROUP(iVar1))
					{
						if (PED::IS_PED_GROUP_MEMBER(iVar1, iLocal_1188))
						{
							func_689(iParam0, 1);
							if (!func_6(iParam0, 1))
							{
								func_689(iParam0, 18);
							}
							*bParam2 = 1;
							func_751();
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(iVar1, false) == iLocal_1250)
					{
						func_689(iParam0, 14);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
			{
				iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, false) && !func_1271())
				{
					func_689(iParam0, 21);
					if (PED::IS_PED_IN_ANY_VEHICLE(bLocal_1217, false))
					{
						if (PED::GET_VEHICLE_PED_IS_IN(bLocal_1217, false) == iVar3)
						{
							if (func_1022(bLocal_1217, 0) == -1)
							{
								func_689(iParam0, 1);
								if (!func_6(iParam0, 1))
								{
									func_689(iParam0, 18);
									func_751();
								}
								*bParam2 = 1;
								func_751();
							}
							func_689(iParam0, 14);
						}
						else
						{
							func_1268(iLocal_1250, iVar3, iParam0);
						}
					}
				}
				else if (func_408() == 0)
				{
					func_1265(iParam0);
				}
			}
		}
	}
}

void func_1265(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	float fVar8;

	if (func_118(Local_1270.f_2[iParam0]))
	{
		ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), true, true);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), true, false);
		ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), true, false);
		func_1267(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]));
		func_689(iParam0, 45);
		vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), true) };
		vVar3 = { OBJECT::GET_SAFE_PICKUP_COORDS(vVar0, 1.2f, 1.5f) };
		if (vVar3.x == vVar0.x && vVar3.y == vVar0.y)
		{
			iVar6 = func_43(iParam0);
			if (iVar6 != -1)
			{
				iVar7 = Local_1270.f_91[iVar6 /*6*/];
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar7))
				{
					vVar3 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iVar7), false) };
				}
			}
		}
		fVar8 = func_1266(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0])));
		vVar3.f_2 = (vVar3.z + (fVar8 * 0.5f));
		ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_1270.f_2[iParam0]), vVar3, true, false, false, true);
	}
}

float func_1266(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	func_247(iParam0, &vVar0, &vVar3, 1086324736 /* Float: 6f */, 1080033280 /* Float: 3.5f */, 1077936128 /* Float: 3f */);
	return MISC::ABSF((vVar0.z - vVar3.z));
}

void func_1267(int iParam0)
{
	OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iParam0, true);
	PHYSICS::ACTIVATE_PHYSICS(iParam0);
	OBJECT::_0x4C134B4DF76025D0(iParam0, 1);
}

void func_1268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar1 = func_1022(bLocal_1217, 0);
		if (func_1270(iVar0))
		{
			if (iVar1 == -1)
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam1, iParam0))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam1, -1, false) || ENTITY::GET_ENTITY_MODEL(iParam1) == func_1269())
						{
							func_689(iParam2, 1);
							if (!func_6(iParam2, 1))
							{
								func_689(iParam2, 18);
								func_751();
							}
						}
					}
				}
			}
		}
	}
}

int func_1269()
{
	return joaat("TRAILERS");
	return joaat("TRAILERS4");
}

bool func_1270(int iParam0)
{
	if (iParam0 == joaat("CARGOBOB"))
	{
		return true;
	}
	if (iParam0 == joaat("CARGOBOB2"))
	{
		return true;
	}
	if (iParam0 == joaat("CARGOBOB3"))
	{
		return true;
	}
	if (iParam0 == joaat("CARGOBOB4"))
	{
		return true;
	}
	return false;
}

bool func_1271()
{
	return false;
}

bool func_1272(int iParam0)
{
	return false;
}

void func_1273(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((!func_44(iParam0) || func_6(iParam0, 39)) || func_691(iParam0, iLocal_1219, 36))
	{
		return;
	}
	iVar0 = func_1277(iParam0);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0) && func_118(iVar0))
	{
		iVar1 = NETWORK::NET_TO_ENT(iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (func_1275(iParam1, iVar1, func_1276(iParam0, ENTITY::GET_ENTITY_MODEL(iVar1)), 0f, 0f, 90f, 0, 0))
			{
				func_1274(iVar1);
				func_689(iParam0, 36);
			}
		}
	}
}

void func_1274(int iParam0)
{
	int iVar0;

	switch (func_45())
	{
		case 2:
			iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0);
			VEHICLE::_0xB088E9A47AE6EDD5(iVar0, true);
			break;
	}
}

bool func_1275(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, bool bParam8, bool bParam9)
{
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iParam1))
	{
		switch (func_45())
		{
			case 2:
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam1, "chassis_dummy"), vParam2, vParam5, bParam8, false, bParam9, false, 2, true);
				break;
			case 1:
				OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
				break;
		}
	}
	else
	{
		return true;
	}
	return false;
}

Vector3 func_1276(int iParam0, int iParam1)
{
	switch (func_45())
	{
		case 2:
			switch (iParam1)
			{
				case joaat("INSURGENT3"):
				case joaat("LIMO2"):
					switch (iParam0)
					{
						case 0:
							return 1f, -2f, -0.1f;
						case 1:
							return -1f, -2f, -0.1f;
						case 2:
							return 1f, -2f, -0.1f;
						case 3:
							return -1f, -2f, -0.1f;
						default:
							break;
					}
					break;
				case joaat("ISSI3"):
				case joaat("PANTO"):
				case joaat("RAPTOR"):
					switch (iParam0)
					{
						case 0:
							return 0.5f, 0f, -0.1f;
						case 1:
							return -0.5f, 0f, -0.1f;
						case 2:
							return 0.5f, 0f, -0.1f;
						case 3:
							return -0.5f, 0f, -0.1f;
						default:
							break;
					}
					break;
			}
			switch (iParam0)
			{
				case 0:
					return 1f, 0f, -0.1f;
				case 1:
					return -1f, 0f, -0.1f;
				case 2:
					return 1f, 0f, -0.1f;
				case 3:
					return -1f, 0f, -0.1f;
				default:
					break;
			}
			return 0f, -1f, -0.1f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_1277(int iParam0)
{
	var uVar0;

	switch (func_45())
	{
		case 2:
			return Local_1270.f_91[func_43(iParam0) /*6*/];
		case 1:
			return Local_1270.f_24[func_43(iParam0) /*22*/];
		default:
			break;
	}
	return uVar0;
}

void func_1278(int iParam0)
{
	func_1279(iParam0, 1);
	func_1279(iParam0, 21);
	func_1279(iParam0, 14);
}

void func_1279(int iParam0, int iParam1)
{
	if (func_122(&(Local_1436[iLocal_1218 /*37*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_1280(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0 != func_68())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_694(Global_1628237[bParam0 /*615*/].f_579.f_1[iVar0 /*2*/]))
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	return iVar1;
}

void func_1281()
{
	int iVar0;
	int iVar1;
	int iVar3;

	iVar3 = 0;
	while (iVar3 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar0 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar3);
		switch (iVar0)
		{
			case 174:
				if (!SCRIPT::GET_EVENT_DATA(1, iVar3, &iVar1, 2))
				{
					return;
				}
				switch (iVar1)
				{
					case -1872730803:
						func_1310(iVar3);
						break;
					case -1717006654:
						func_1301(iVar3);
						break;
					case 1059615374:
						func_1300(iVar3);
						break;
					case -251935260:
						func_1299(iVar3);
						break;
					case 24120320:
						func_1293(iVar3);
						break;
				}
				break;
			case 185:
				func_1282(iVar3);
				break;
		}
		iVar3++;
	}
}

void func_1282(int iParam0)
{
	int iVar0;
	struct<13> Var1;
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

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var1, 13))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var1))
		{
			if (ENTITY::IS_ENTITY_A_PED(Var1))
			{
				iVar15 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1);
				iVar16 = func_983();
				if (PLAYER::GET_MAX_WANTED_LEVEL() < iVar16)
				{
					if (func_94(iVar15))
					{
						if (func_1288(iVar15))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1)) && bLocal_1217 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1))
							{
								func_981(bLocal_1216, iVar16, 1, 0);
							}
						}
					}
				}
				iVar17 = 0;
				while (iVar17 < Local_218.f_28.f_1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_24[iVar17 /*22*/]))
					{
						if (Var1 == NETWORK::NET_TO_ENT(Local_1270.f_24[iVar17 /*22*/]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
							{
								iVar18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1);
								if (PED::IS_PED_A_PLAYER(iVar18))
								{
									func_1037(iVar17, 21);
									iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar18);
									if (Local_433.f_73.f_113 != 0)
									{
										Stack.Push(iVar17);
										Stack.Push(Var1);
										Stack.Push(iVar14);
										Call_Loc(Local_433.f_73.f_113);
									}
									if (iVar14 == bLocal_1216)
									{
										func_751();
										if (Var1.f_5 && func_1287(iVar17))
										{
											Local_1189.f_3++;
										}
									}
									if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar14))
									{
									}
								}
							}
						}
					}
					iVar17++;
				}
				func_1286(Var1, iVar15, iVar14);
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(Var1))
			{
				iVar19 = func_983();
				if (PLAYER::GET_MAX_WANTED_LEVEL() < iVar19)
				{
					iVar20 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var1), -1, false);
					iVar21 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var1), 0, false);
					if (func_1284(Var1, iVar20, iVar21))
					{
						if (func_1288(iVar20))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1)) && bLocal_1217 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1))
							{
								func_981(bLocal_1216, iVar19, 1, 0);
							}
						}
					}
				}
				iVar22 = 0;
				while (iVar22 < Local_218.f_95.f_1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[iVar22 /*6*/]))
					{
						if (Var1 == NETWORK::NET_TO_ENT(Local_1270.f_91[iVar22 /*6*/]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
							{
								if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1)))
								{
									iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1));
									if (Local_433.f_188.f_26 != 0)
									{
										Stack.Push(iVar22);
										Stack.Push(Var1);
										Stack.Push(iVar14);
										Call_Loc(Local_433.f_188.f_26);
									}
									if (iVar14 == bLocal_1216)
									{
										func_751();
									}
									iVar23 = func_1283(iVar22);
									if (iVar23 != -1)
									{
										func_1037(iVar23, 22);
										if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar14))
										{
										}
									}
								}
							}
						}
					}
					iVar22++;
				}
				iVar24 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var1), -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar24))
				{
					func_1286(Var1, iVar24, iVar14);
				}
			}
			else if (ENTITY::IS_ENTITY_AN_OBJECT(Var1))
			{
				iVar0 = 0;
				while (iVar0 < Local_218.f_10.f_5)
				{
					if (!func_6(iVar0, 4) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2[iVar0]))
					{
						if (Var1 == NETWORK::NET_TO_ENT(Local_1270.f_2[iVar0]))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1)) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1)))
							{
								iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1));
								if (Var1.f_5)
								{
								}
							}
							if (Var1.f_5)
							{
								if (bLocal_1214)
								{
									func_42(iVar0, 3);
									func_42(iVar0, 19);
								}
								else
								{
									func_689(iVar0, 9);
									if (Local_433.f_54.f_17 != 0)
									{
										Stack.Push(iVar0);
										Call_Loc(Local_433.f_54.f_17);
									}
								}
							}
						}
					}
					iVar0++;
				}
				iVar25 = 0;
				while (iVar25 < Local_218.f_112.f_1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_98[iVar25 /*5*/]))
					{
						if (Var1 == NETWORK::NET_TO_ENT(Local_1270.f_98[iVar25 /*5*/]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
							{
								if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1)))
								{
									iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1));
									if (iVar14 == bLocal_1216)
									{
										func_751();
									}
									if (Local_433.f_216.f_18 != 0)
									{
										Stack.Push(iVar25);
										Stack.Push(Var1);
										Stack.Push(iVar14);
										Call_Loc(Local_433.f_216.f_18);
									}
								}
							}
						}
					}
					iVar25++;
				}
			}
		}
	}
}

int func_1283(int iParam0)
{
	int iVar0;
	int iVar1;

	if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_1270.f_91[iParam0 /*6*/]), -1, false))
	{
		return -1;
	}
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_1270.f_91[iParam0 /*6*/]), -1, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < Local_218.f_28.f_1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_24[iVar1 /*22*/]) && iVar0 == NETWORK::NET_TO_PED(Local_1270.f_24[iVar1 /*22*/]))
			{
				return iVar1;
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_1284(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && PED::IS_PED_A_PLAYER(iParam1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && PED::IS_PED_A_PLAYER(iParam2))
	{
		return false;
	}
	if (func_1285(ENTITY::GET_ENTITY_MODEL(iParam0)) && ENTITY::GET_ENTITY_POPULATION_TYPE(iParam0) != 7)
	{
		return true;
	}
	if (func_94(iParam1))
	{
		return true;
	}
	if (func_94(iParam2))
	{
		return true;
	}
	return false;
}

bool func_1285(int iParam0)
{
	if (((((((((((((((iParam0 == joaat("POLICE") || iParam0 == joaat("POLICE2")) || iParam0 == joaat("POLICE3")) || iParam0 == joaat("POLICE4")) || iParam0 == joaat("POLICET")) || iParam0 == joaat("POLMAV")) || iParam0 == joaat("RIOT")) || iParam0 == joaat("FBI")) || iParam0 == joaat("FBI2")) || iParam0 == joaat("SHERIFF")) || iParam0 == joaat("SHERIFF2")) || iParam0 == joaat("BARRACKS")) || iParam0 == joaat("BARRACKS2")) || iParam0 == joaat("BARRACKS3")) || iParam0 == joaat("CRUSADER")) || iParam0 == joaat("TANK"))
	{
		return true;
	}
	return false;
}

void func_1286(struct<13> Param0, int iParam13, int iParam14)
{
	bool bVar0;
	int iVar1;

	if (PED::IS_PED_A_PLAYER(iParam13))
	{
		bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam13);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_1) && ENTITY::IS_ENTITY_A_PED(Param0.f_1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1);
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iParam14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (Local_433.f_10.f_6 != 0)
					{
						Stack.Push(bVar0);
						Stack.Push(Param0);
						Stack.Push(iParam14);
						Call_Loc(Local_433.f_10.f_6);
					}
					if (iParam14 == bLocal_1216)
					{
						if (func_46(15))
						{
							if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar0))
							{
								if (func_732(bVar0))
								{
									func_751();
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_1287(int iParam0)
{
	if (Local_433.f_46 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_46);
		return StackVal;
	}
	return 1;
}

bool func_1288(int iParam0)
{
	if (!func_1289() || !func_660(0, 0, 1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		return false;
	}
	return true;
}

bool func_1289()
{
	int iVar0;

	if (func_369(iLocal_1219, 3))
	{
		func_1290(iLocal_1226, 1);
		iVar0 = 1;
	}
	else
	{
		func_1290(iLocal_1226, 0);
		iVar0 = 0;
	}
	return iVar0;
}

void func_1290(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1291(PLAYER::PLAYER_ID(), iParam0))
		{
			MISC::SET_BIT(&(Global_1703159[PLAYER::PLAYER_ID() /*13*/].f_11), iParam0);
		}
	}
	else if (func_1291(PLAYER::PLAYER_ID(), iParam0))
	{
		MISC::CLEAR_BIT(&(Global_1703159[PLAYER::PLAYER_ID() /*13*/].f_11), iParam0);
	}
}

bool func_1291(int iParam0, int iParam1)
{
	if (!func_1292(iParam0))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1703159[iParam0 /*13*/].f_11, iParam1);
}

bool func_1292(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0 /*13*/].f_11 != 0;
	}
	return false;
}

void func_1293(int iParam0)
{
	vector3 vVar0;

	if (Global_1391799.f_791 || !SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		return;
	}
	if (!func_1289())
	{
		return;
	}
	switch (vVar0.z)
	{
		case 0:
			if (vVar0.y == bLocal_1216)
			{
				func_1298("FMC_TIC_HAXSPu");
			}
			else
			{
				func_1294("FMC_TIC_HAXSPr", vVar0.y, 0, 0, 0, 1, 0);
			}
			break;
		case 1:
			if (vVar0.y == bLocal_1216)
			{
				func_1298("FMC_TIC_HAXLAPu");
			}
			else
			{
				func_1294("FMC_TIC_HAXLAPr", vVar0.y, 0, 0, 0, 1, 0);
			}
			break;
	}
}

int func_1294(char* sParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	bool bVar18;
	bool bVar19;

	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(bParam1);
	if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID(), bParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
		{
			if (Global_4456448.f_190067[iVar1] != -1)
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_653(iVar1, bParam1, 0));
			}
			else
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_632(bParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_632(bParam1, -2, 1, 0, 0));
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_1296(&Var2));
		if (!bParam4)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2513218 = { func_70(bParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513148, 35, &Global_2513218))
			{
				bVar18 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
				{
					bVar18 = true;
				}
				if (Global_2513148.f_21 > 0)
				{
					bVar19 = false;
				}
				else
				{
					bVar19 = true;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_1295(&Var2) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, bVar18, false, Global_2513148, &Var2, Global_1314034, Global_1314035, Global_1314036);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, bVar18, false, Global_2513148, Global_1314034, Global_1314035, Global_1314036);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		func_610(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_1295(char* sParam0)
{
	struct<16> Var0;

	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

char[] func_1296(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_1297(&cVar0);
}

char[] func_1297(char[4] cParam0)
{
	return cParam0;
}

int func_1298(char* sParam0)
{
	int iVar0;

	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_610(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_1299(int iParam0)
{
	struct<7> Var0;

	if (!bLocal_1214)
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		if (Var0.f_5 != iLocal_1225 || Var0.f_6 != NETWORK::_0x638A3A81733086DB())
		{
			return;
		}
		Local_1270.f_24[Var0.f_3 /*22*/].f_6 = Var0.f_2;
	}
}

void func_1300(int iParam0)
{
	struct<7> Var0;

	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7) || iLocal_1225 != Var0.f_2)
	{
		return;
	}
	Local_1183 = Var0.f_3;
	Local_1183.f_2 = Var0.f_5;
	Local_1183.f_1 = Var0.f_6;
	func_423(15);
}

void func_1301(int iParam0)
{
	struct<21> Var0;
	int iVar26;
	int iVar27;

	Var0.f_2 = 5;
	Var0.f_2.f_1.f_1 = -1;
	Var0.f_2.f_1.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_14 = 5;
	Var0.f_20 = 5;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 26))
	{
		iVar26 = 0;
		while (iVar26 < 5)
		{
			if (Var0.f_20[iVar26] > 0)
			{
			}
			else
			{
				iVar27 = (iVar27 + func_1307(Var0.f_14[iVar26], Var0.f_2[iVar26 /*2*/].f_1, Var0.f_1));
			}
			iVar26++;
		}
		if (iVar27 > 0)
		{
			func_1305(Var0.f_1);
			func_1302(iVar27, Var0.f_1);
		}
	}
}

void func_1302(int iParam0, int iParam1)
{
	if (func_1303(iParam1))
	{
		Local_1436[iLocal_1218 /*37*/].f_17 = (Local_1436[iLocal_1218 /*37*/].f_17 + iParam0);
	}
}

bool func_1303(bool bParam0)
{
	return ((bParam0 == bLocal_1216 && !func_1304(1)) || func_69(bParam0) == bLocal_1216);
}

bool func_1304(bool bParam0)
{
	return func_537(PLAYER::PLAYER_ID(), bParam0);
}

void func_1305(bool bParam0)
{
	if (!func_862(26))
	{
		if (!func_1306())
		{
		}
	}
	if (func_28(bParam0, 0, 1))
	{
		MISC::SET_BIT(&(Global_2537071.f_1749), bParam0);
		Global_2537071.f_1750[bParam0] = iLocal_1225;
	}
}

bool func_1306()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_218.f_10)
	{
		if (func_6(iVar0, 4))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1307(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Local_218.f_10)
	{
		if (iParam0 == Local_1270.f_2.f_20)
		{
			if (iParam1 == Local_1270.f_2.f_15[iVar0 /*2*/].f_1)
			{
				iVar1++;
				if (bLocal_1214)
				{
					if (func_537(bParam2, 1))
					{
						Local_1270.f_2.f_9[iVar0] = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(func_69(bParam2));
					}
					else
					{
						Local_1270.f_2.f_9[iVar0] = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(bParam2);
					}
				}
				if (bParam2 == bLocal_1216)
				{
					func_689(iVar0, 6);
				}
				if (Local_433.f_54.f_15 != 0)
				{
					Stack.Push(iVar0);
					Stack.Push(bParam2 == bLocal_1216);
					Call_Loc(Local_433.f_54.f_15);
				}
				if (Local_433.f_18.f_6 != 0)
				{
					Stack.Push(bParam2 == bLocal_1216);
					Call_Loc(Local_433.f_18.f_6);
					func_1309(StackVal);
				}
				if (Local_433.f_18.f_7 != 0)
				{
					Stack.Push(bParam2 == bLocal_1216);
					Call_Loc(Local_433.f_18.f_7);
					func_1308(StackVal);
				}
				Jump @241; //curOff = 223
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_1308(var uParam0)
{
}

void func_1309(var uParam0)
{
}

void func_1310(int iParam0)
{
	struct<10> Var0;
	int iVar10;

	Var0.f_2.f_1 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 10))
	{
		if (Var0.f_6 > 0)
		{
			return;
		}
		iVar10 = func_1307(Var0.f_5, Var0.f_2.f_1, Var0.f_1);
		if (iVar10 > 0)
		{
			func_1305(Var0.f_1);
			func_1302(iVar10, Var0.f_1);
		}
	}
}

void func_1311()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2[iVar0]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_1270.f_2[iVar0]), false))
		{
			if (func_660(0, 0, 1) && !func_691(iVar0, iLocal_1219, 47))
			{
				OBJECT::_0x0BF3B3BD47D79C08(Local_218.f_10.f_5[0 /*12*/].f_2, func_1312());
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_1270.f_2[iVar0]), false, true);
				OBJECT::_SET_LOCAL_PLAYER_CAN_USE_PICKUPS_WITH_THIS_MODEL(Local_218.f_10.f_5[0 /*12*/].f_2, true);
				func_423(6);
			}
			else
			{
				if (func_434(6))
				{
					OBJECT::_0x0BF3B3BD47D79C08(Local_218.f_10.f_5[0 /*12*/].f_2, -1);
					func_709(6);
				}
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_1270.f_2[iVar0]), true, true);
				if (func_691(iVar0, iLocal_1219, 1) && func_385(iVar0))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1270.f_2[iVar0]))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_1270.f_2[iVar0]), true, true);
					}
				}
			}
		}
		iVar0++;
	}
}

int func_1312()
{
	return 1;
}

void func_1313()
{
	if ((!func_434(31) && bLocal_1223) && func_408() == 0)
	{
		func_1314();
		func_423(31);
	}
}

void func_1314()
{
	func_1316();
	Local_1189.f_1 = NETWORK::_0xF12E6CD06C73D69E();
	func_1315();
}

void func_1315()
{
}

void func_1316()
{
}

void func_1317()
{
	func_1318();
}

void func_1318()
{
	iLocal_1182 = 0;
}

void func_1319()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<2> Var3;
	struct<2> Var6;
	var uVar13;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;

	Var3 = 1;
	Var3.f_1 = 1;
	Var6 = 3;
	Var6.f_1 = 1;
	Var6.f_1.f_2 = 1;
	Var6.f_1.f_2.f_2 = 1;
	uVar13 = 1;
	bVar15 = true;
	bVar1 = bVar1;
	iLocal_1250 = func_1360();
	iVar2 = 0;
	while (iVar2 < Local_218.f_10)
	{
		iLocal_1246[iVar2] = func_412();
		Local_1164[iVar2 /*5*/].f_4 = func_68();
		func_1279(iVar2, 33);
		func_1279(iVar2, 12);
		iVar2++;
	}
	if (bLocal_1214)
	{
		func_14(4);
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (bLocal_1214)
		{
		}
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar17 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			bVar16 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar17);
			bVar1 = bVar16;
			if (func_28(bVar16, 0, 1))
			{
				iVar18 = 0;
				iVar2 = 0;
				while (iVar2 < Local_218.f_10)
				{
					if (func_691(iVar2, iVar17, 1))
					{
						iLocal_1246[iVar2] = iVar17;
						iLocal_1246[iVar2] = iLocal_1246[iVar2];
						Local_1164[iVar2 /*5*/].f_4 = bVar16;
						if (bLocal_1216 != bVar16)
						{
							if (func_67(bLocal_1216, bVar16) && !func_46(21))
							{
								func_689(iVar2, 33);
							}
							else
							{
								func_689(iVar2, 12);
							}
						}
						if (!func_691(iVar2, iLocal_1219, 14))
						{
							iVar18 = 1;
						}
					}
					iVar2++;
				}
				func_1352(bVar16, iVar18);
				if (bLocal_1214)
				{
					iVar2 = 0;
					while (iVar2 < Local_218.f_10)
					{
						func_1349(iVar2, iVar0, iVar17);
						func_1347(&Var3, iVar2, iVar17);
						iVar2++;
					}
					func_1344(iVar0, iVar17);
					iVar2 = 0;
					while (iVar2 < Local_218.f_95)
					{
						func_1341(iVar2, iVar0, iVar17);
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_218.f_28)
					{
						func_1338(iVar2, iVar0, iVar17);
						func_1336(&Var6, iVar2, iVar17);
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_218.f_112)
					{
						func_1332(iVar2, iVar0, iVar17);
						iVar2++;
					}
					if (!func_369(iVar17, 0))
					{
						bVar15 = false;
					}
					if (!func_369(iVar17, 4))
					{
						func_1331(4);
					}
					iVar19 = 0;
					while (iVar19 < Local_218.f_164)
					{
						if (func_1330(iVar0, iVar19))
						{
							func_1329(&uVar13, iVar19);
						}
						iVar19++;
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_1164.f_7 != bLocal_1216)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_1164.f_7))
		{
			if (!MISC::IS_BIT_SET(Local_1164.f_8, Local_1164.f_7))
			{
				MISC::SET_BIT(&(Local_1164.f_8), Local_1164.f_7);
				func_916(Local_1164.f_7, 1);
			}
		}
		else if (MISC::IS_BIT_SET(Local_1164.f_8, Local_1164.f_7))
		{
			MISC::CLEAR_BIT(&(Local_1164.f_8), Local_1164.f_7);
		}
	}
	Local_1164.f_7++;
	if (Local_1164.f_7 >= 31)
	{
		Local_1164.f_7 = 0;
	}
	if (bLocal_1214)
	{
		func_1327(&Var3);
		func_1324(&Var6);
		func_1320(&uVar13);
		if (bVar15)
		{
			if (!func_3(0))
			{
				func_14(0);
			}
		}
		else if (func_3(0))
		{
			func_1331(0);
		}
	}
}

void func_1320(var uParam0)
{
	if (!func_1323(&(Local_1270.f_109), uParam0))
	{
		func_1321(uParam0, &(Local_1270.f_109));
	}
}

void func_1321(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1322(*uParam0, *uParam1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		(*uParam1)[iVar1] = (*uParam0)[iVar1];
		iVar1++;
	}
}

int func_1322(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1323(var uParam0, var uParam1)
{
	int iVar0;

	if (*uParam0 != *uParam1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != (*uParam1)[iVar0])
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1324(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Local_218.f_28)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (func_104(uParam0[iVar0 /*2*/], iVar1))
			{
				func_47(iVar0, func_1326(iVar1));
			}
			else
			{
				func_1325(iVar0, func_1326(iVar1));
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_1325(int iParam0, int iParam1)
{
	if (func_122(&(Local_1270.f_24[iParam0 /*22*/].f_3), iParam1))
	{
	}
}

int func_1326(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		case 1:
			return 7;
		case 2:
			return 13;
		default:
			break;
	}
	return 29;
}

void func_1327(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (func_104(uParam0[iVar0 /*2*/], iVar1))
			{
				func_42(iVar0, func_1328(iVar1));
			}
			else
			{
				func_384(iVar0, func_1328(iVar1));
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_1328(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 44;
		default:
			break;
	}
	return 51;
}

void func_1329(var uParam0, int iParam1)
{
	if (!func_104(uParam0, iParam1))
	{
		func_909(uParam0, iParam1);
	}
}

bool func_1330(int iParam0, int iParam1)
{
	return func_104(&(Local_1436[iParam0 /*37*/].f_24), iParam1);
}

void func_1331(int iParam0)
{
	if (func_122(&(Local_1270.f_132), iParam0))
	{
	}
}

void func_1332(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar1 = iVar0;
		iVar2 = func_1335(iVar1);
		if (iVar2 != 11)
		{
			if (func_1139(iParam0, iParam2, iVar1))
			{
				func_1333(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_1333(int iParam0, int iParam1, int iParam2)
{
	if (!func_1148(iParam1, iParam0))
	{
		func_1334(iParam1, iParam0);
	}
}

void func_1334(int iParam0, int iParam1)
{
	if (func_15(&(Local_1270.f_98[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

int func_1335(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 3:
			return 3;
		case 4:
			return 4;
		case 11:
			return 9;
		default:
			break;
	}
	return 11;
}

void func_1336(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		iVar2 = func_1337(iVar1);
		if (iVar2 != 25)
		{
			if (!func_104(uParam0[iParam1 /*2*/], iVar0) && func_1063(iParam1, iParam2, iVar2))
			{
				func_909(uParam0[iParam1 /*2*/], iVar0);
			}
		}
		iVar0++;
	}
}

int func_1337(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		case 1:
			return 7;
		case 2:
			return 13;
		default:
			break;
	}
	return 25;
}

void func_1338(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 25)
	{
		iVar1 = iVar0;
		iVar2 = func_1340(iVar1);
		if (iVar2 != 29)
		{
			if (func_1063(iParam0, iParam2, iVar1))
			{
				func_1339(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_1339(int iParam0, int iParam1, int iParam2)
{
	if (!func_73(iParam1, iParam0))
	{
		func_47(iParam1, iParam0);
	}
}

int func_1340(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 3:
			return 2;
		case 2:
			return 4;
		case 12:
			return 10;
		case 14:
			return 14;
		case 16:
			return 15;
		case 17:
			return 17;
		case 19:
			return 21;
		case 20:
			return 22;
		case 21:
			return 23;
		case 22:
			return 24;
		case 23:
			return 25;
		case 1:
			return 3;
		default:
			break;
	}
	return 29;
}

void func_1341(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = iVar0;
		iVar2 = func_1343(iVar1);
		if (iVar2 != 18)
		{
			if (func_519(iParam0, iParam2, iVar1))
			{
				func_1342(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_1342(int iParam0, int iParam1, int iParam2)
{
	if (!func_368(iParam1, iParam0))
	{
		func_132(iParam1, iParam0);
	}
}

int func_1343(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 5;
		case 3:
			return 3;
		case 5:
			return 6;
		case 6:
			return 8;
		case 11:
			return 13;
		case 12:
			return 14;
		case 13:
			return 15;
		default:
			break;
	}
	return 18;
}

void func_1344(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = iVar0;
		if (func_369(iParam1, iVar1))
		{
			iVar2 = func_1346(iVar1);
			if (iVar2 != 7)
			{
				func_1345(iVar2, iParam0);
			}
		}
		iVar0++;
	}
}

void func_1345(int iParam0, int iParam1)
{
	if (!func_3(iParam0))
	{
		func_14(iParam0);
	}
}

int func_1346(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 7:
			return 5;
		default:
			break;
	}
	return 7;
}

void func_1347(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		iVar2 = func_1348(iVar1);
		if (iVar2 != 48)
		{
			if (!func_104(uParam0[iParam1 /*2*/], iVar0) && func_691(iParam1, iParam2, iVar2))
			{
				func_909(uParam0[iParam1 /*2*/], iVar0);
			}
		}
		iVar0++;
	}
}

int func_1348(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 38;
		default:
			break;
	}
	return 48;
}

void func_1349(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 48)
	{
		iVar1 = iVar0;
		iVar2 = func_1351(iVar1);
		if (iVar2 != 51)
		{
			if (func_691(iParam0, iParam2, iVar1))
			{
				func_1350(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_1350(int iParam0, int iParam1, int iParam2)
{
	if (!func_6(iParam1, iParam0))
	{
		func_42(iParam1, iParam0);
	}
}

int func_1351(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 10;
		case 16:
			return 18;
		case 29:
			return 37;
		case 31:
			return 40;
		case 11:
			return 14;
		case 18:
			return 1;
		case 22:
			return 31;
		case 7:
			return 30;
		case 23:
			return 28;
		case 24:
			return 32;
		case 17:
			return 25;
		case 25:
			return 33;
		case 5:
			return 13;
		case 13:
			return 15;
		case 15:
			return 17;
		case 42:
			return 46;
		case 19:
			return 26;
		case 20:
			return 27;
		case 26:
			return 34;
		case 30:
			return 38;
		case 34:
			return 42;
		case 37:
			return 43;
		case 40:
			return 45;
		case 43:
			return 47;
		case 44:
			return 48;
		case 4:
			return 12;
		case 10:
			return 11;
		case 36:
			return 39;
		case 45:
			return 49;
		case 6:
			return 4;
		case 9:
			return 3;
		default:
			break;
	}
	return 51;
}

void func_1352(bool bParam0, int iParam1)
{
	if (iParam1 && func_1358(bParam0))
	{
		func_1353(bParam0, !func_67(bLocal_1216, bParam0));
	}
	else
	{
		func_916(bParam0, 0);
	}
}

void func_1353(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_941(bParam0);
	if (!MISC::IS_BIT_SET(Local_1164.f_6, bParam0))
	{
		if (bParam0 != func_68())
		{
			if (func_28(bParam0, 1, 1))
			{
				func_1357(bParam0, 0, 1);
				func_937(bParam0, 1);
				if (!func_1356(bParam0))
				{
					func_935(bParam0, 1, 1, 1);
				}
				func_926(bParam0, func_928(iVar0), 1, 1);
				func_924(bParam0, func_1355(iVar0), 1, 1);
				func_939(bParam0, func_1250(iVar0, 0), 1, 0);
				if (func_934(bParam0))
				{
					if (!func_932(bParam0))
					{
						func_931(bParam0, 1, 1);
					}
				}
				func_917(bParam0, 0, 1);
				MISC::SET_BIT(&(Local_1164.f_6), bParam0);
			}
		}
	}
	else if (func_1354(bParam0) != func_928(iVar0))
	{
		func_926(bParam0, func_928(iVar0), 1, 1);
		func_924(bParam0, func_1355(iVar0), 1, 1);
		func_939(bParam0, func_1250(iVar0, 0), 1, 0);
	}
}

int func_1354(bool bParam0)
{
	return Global_2416079.f_423[bParam0];
}

float func_1355(int iParam0)
{
	if (Local_433.f_54.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_54.f_4);
		return StackVal;
	}
	return 1.1f;
}

int func_1356(bool bParam0)
{
	return func_933(Global_2416079.f_819[bParam0], &(Global_2416079.f_367), bParam0);
}

void func_1357(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0;

	if (func_919(bParam0))
	{
		return;
	}
	func_918(&(Global_2416079.f_786[bParam0]), &(Global_2416079.f_1149[bParam0]), &(Global_2416079.f_394), bParam1, bParam0, bParam2, &uVar0);
}

int func_1358(bool bParam0)
{
	if (!func_1359())
	{
		return 0;
	}
	if (!func_434(7))
	{
		return 0;
	}
	if (func_1529() > 2)
	{
		return 0;
	}
	if (func_45() == 1)
	{
		return 0;
	}
	if (bParam0 == bLocal_1216)
	{
		return 0;
	}
	if (!func_28(bParam0, 1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_1359()
{
	return Global_2416079.f_1607;
}

int func_1360()
{
	int iVar0;

	if (bLocal_1213)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(bLocal_1217, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(bLocal_1217, false);
		}
	}
	return iVar0;
}

void func_1361(int iParam0)
{
	Local_1436[iLocal_1218 /*37*/].f_22 = iParam0;
}

bool func_1362()
{
	if (!func_421())
	{
		return false;
	}
	func_1503();
	func_1476();
	func_1383();
	func_1382();
	func_1381();
	func_1380();
	func_1365(1);
	func_1364();
	if (!func_1363())
	{
		return false;
	}
	Call_Loc(Local_433.f_2);
	return StackVal;
}

bool func_1363()
{
	return true;
}

void func_1364()
{
	func_423(7);
}

void func_1365(bool bParam0)
{
	func_1378(bParam0);
	if (func_46(1))
	{
		if (bParam0)
		{
			func_1377(8);
		}
		else
		{
			func_1376(8);
		}
	}
	if (func_46(2))
	{
		if (bParam0)
		{
			func_1375();
		}
		else
		{
			func_1374();
		}
	}
	if (func_46(3))
	{
		func_1373(bParam0);
	}
	if (func_46(4))
	{
		func_1371(bParam0);
		func_1370(bParam0);
	}
	if (func_46(5))
	{
		if (bParam0)
		{
			func_1369(2);
		}
		else
		{
			func_1368(2);
		}
	}
	if (func_46(6))
	{
		PED::SET_PED_CONFIG_FLAG(bLocal_1217, 432, bParam0);
	}
	func_1367(!bParam0);
	func_1366(bParam0);
	if (Local_433.f_9 != 0)
	{
		Stack.Push(bParam0);
		Call_Loc(Local_433.f_9);
	}
}

void func_1366(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2[iVar0]))
		{
			if (bParam0)
			{
				if (!NETWORK::SET_ENTITY_LOCALLY_VISIBLE(Local_1270.f_2[iVar0]))
				{
					NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_1270.f_2[iVar0], 1);
				}
			}
			else if (NETWORK::SET_ENTITY_LOCALLY_VISIBLE(Local_1270.f_2[iVar0]))
			{
				NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_1270.f_2[iVar0], 0);
			}
		}
		iVar0++;
	}
}

void func_1367(bool bParam0)
{
	Global_2461974 = bParam0;
}

void func_1368(int iParam0)
{
	MISC::CLEAR_BIT(&Global_1573979, iParam0);
}

void func_1369(int iParam0)
{
	MISC::SET_BIT(&Global_1573979, iParam0);
}

void func_1370(bool bParam0)
{
	if (Global_2537071.f_6565 != bParam0)
	{
		Global_2537071.f_6565 = bParam0;
	}
}

void func_1371(bool bParam0)
{
	Global_30775 = bParam0;
	if (bParam0)
	{
		func_1372(7, bLocal_1217, 0);
		func_1372(8, bLocal_1217, 0);
		func_1372(20, bLocal_1217, 0);
		func_1372(21, bLocal_1217, 0);
	}
}

void func_1372(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
		{
			return;
		}
	}
	if (Global_40554[iParam0 /*31*/].f_24 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_40554[iParam0 /*31*/].f_24)
	{
		if (bVar1)
		{
			Global_40554[iParam0 /*31*/].f_25[(iVar0 - 1)] = Global_40554[iParam0 /*31*/].f_25[iVar0];
			Global_40554[iParam0 /*31*/].f_25[iVar0] = 0;
		}
		else if (bParam1 == Global_40554[iParam0 /*31*/].f_25[iVar0])
		{
			Global_40554[iParam0 /*31*/].f_25[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_40554[iParam0 /*31*/].f_24 = (Global_40554[iParam0 /*31*/].f_24 - 1);
	}
}

void func_1373(bool bParam0)
{
	if (!bParam0 == Global_2405072.f_45.f_314)
	{
		Global_2405072.f_45.f_314 = bParam0;
	}
}

void func_1374()
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

void func_1375()
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

void func_1376(int iParam0)
{
	MISC::SET_BIT(&(Global_2537071.f_5124.f_45), iParam0);
}

void func_1377(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_45), iParam0);
}

void func_1378(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < Local_218.f_149)
		{
			func_1379(bParam0, iVar0);
			iVar0++;
		}
	}
	else
	{
		iVar0 = (Local_218.f_149 - 1);
		while (iVar0 >= 0)
		{
			func_1379(bParam0, iVar0);
			iVar0 = (iVar0 + -1);
		}
	}
}

void func_1379(bool bParam0, int iParam1)
{
	if (!func_31(Local_218.f_149[iParam1 /*7*/].f_1) && !func_31(Local_218.f_149[iParam1 /*7*/].f_4))
	{
		if (iParam1 >= 10)
		{
			return;
		}
		switch (Local_218.f_149[iParam1 /*7*/])
		{
			case 0:
				if (bParam0)
				{
					if (iLocal_1238 < 2)
					{
						iLocal_1235[iLocal_1238] = PED::ADD_SCENARIO_BLOCKING_AREA(Local_218.f_149[iParam1 /*7*/].f_1, Local_218.f_149[iParam1 /*7*/].f_4, false, true, true, true);
						iLocal_1238++;
					}
				}
				else if (iLocal_1238 < 2)
				{
					if (iLocal_1235[iLocal_1238] != -1)
					{
						PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1235[iLocal_1238], false);
						iLocal_1235[iLocal_1238] = -1;
						iLocal_1238 = (iLocal_1238 - 1);
					}
				}
				break;
			case 1:
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_218.f_149[iParam1 /*7*/].f_1, Local_218.f_149[iParam1 /*7*/].f_4, !bParam0, false);
				break;
			case 2:
				if (bParam0)
				{
					if (iLocal_1238 < 2)
					{
						iLocal_1235[iLocal_1238] = MISC::ADD_POP_MULTIPLIER_AREA(Local_218.f_149[iParam1 /*7*/].f_1, Local_218.f_149[iParam1 /*7*/].f_4, 1f, 0.25f, true, true);
						iLocal_1238++;
					}
				}
				else if (iLocal_1235[iLocal_1238] != -1)
				{
					if (MISC::DOES_POP_MULTIPLIER_AREA_EXIST(iLocal_1235[iLocal_1238]))
					{
						MISC::REMOVE_POP_MULTIPLIER_AREA(iLocal_1235[iLocal_1238], true);
						iLocal_1235[iLocal_1238] = -1;
						iLocal_1238 = (iLocal_1238 - 1);
					}
				}
				break;
		}
	}
}

void func_1380()
{
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_218.f_28);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_218.f_95);
	NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(Local_218.f_112);
}

void func_1381()
{
}

void func_1382()
{
	int iVar0;

	if (Local_433.f_263 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_1196.f_1)
	{
		Stack.Push(iVar0);
		Call_Loc(Local_433.f_263);
		Local_1196.f_1[iVar0 /*4*/] = StackVal;
		iVar0++;
	}
	Local_1196 = iVar0;
}

void func_1383()
{
	int iVar0;

	if (Local_218.f_28 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_218.f_28)
	{
		if (func_39(iVar0, 14))
		{
			func_1470(iVar0);
		}
		else
		{
			Stack.Push(iVar0);
			Call_Loc(Local_433.f_73);
		}
		func_1384(iVar0);
		Stack.Push(iVar0);
		Call_Loc(Local_433.f_73.f_76);
		iVar0++;
	}
}

void func_1384(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 < Local_930[iParam0 /*76*/])
	{
		iVar3 = Local_930[iParam0 /*76*/].f_1[iVar0 /*11*/];
		if (iVar3 != -1)
		{
			if (Local_930[iParam0 /*76*/].f_1[iVar0 /*11*/].f_8 == 0)
			{
				func_1386(iParam0, iVar0, iVar3);
			}
			iVar1 = 0;
			while (iVar1 < Local_930[iParam0 /*76*/].f_1[iVar0 /*11*/].f_10)
			{
				if (Local_930[iParam0 /*76*/].f_1[iVar0 /*11*/].f_1[iVar1 /*2*/].f_1 == 0)
				{
					iVar2 = Local_930[iParam0 /*76*/].f_1[iVar0 /*11*/].f_1[iVar1 /*2*/];
					func_1385(iParam0, iVar3, Local_930[iParam0 /*76*/].f_1[iVar2 /*11*/], &(Local_930[iParam0 /*76*/].f_1[iVar0 /*11*/].f_1[iVar1 /*2*/].f_1));
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_1385(int iParam0, int iParam1, var uParam2, var uParam3)
{
}

void func_1386(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	switch (iParam2)
	{
		case 9:
			iVar0 = 241222;
			break;
		case 11:
			iVar0 = 241122;
			break;
		case 12:
			iVar0 = 241075;
			break;
		case 16:
			iVar0 = 240824;
			break;
		case 14:
			iVar0 = 240740;
			break;
		case 10:
			iVar0 = 240614;
			break;
		case 7:
			iVar0 = 240523;
			break;
		case 19:
			iVar0 = 240444;
			break;
		case 20:
			iVar0 = 240332;
			break;
		case 21:
			iVar0 = 240220;
			break;
		case 13:
			iVar0 = 238472;
			iVar1 = 237879;
			break;
		case 6:
			iVar0 = 237599;
			break;
		case 27:
			iVar0 = 237394;
			break;
		case 29:
			iVar0 = 236991;
			break;
		case 40:
			iVar0 = 236894;
			break;
		case 22:
			iVar0 = 236886;
			break;
		case 42:
			iVar0 = 236656;
			break;
		case 24:
			iVar0 = 236361;
			break;
		case 1:
			iVar0 = 236065;
			break;
		case 2:
			iVar0 = 235569;
			break;
		case 41:
			iVar0 = 235098;
			break;
		case 17:
			iVar0 = 234673;
			break;
	}
	if (iVar0 != 0)
	{
		func_1387(iParam0, iParam1, iVar0, iVar1);
	}
}

void func_1387(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Local_930[iParam0 /*76*/].f_1[iParam1 /*11*/].f_8 = iParam2;
	Local_930[iParam0 /*76*/].f_1[iParam1 /*11*/].f_9 = iParam3;
}

void func_1388(int iParam0, bool bParam1)
{
	vector3 vVar0;

	if (!func_1393(bParam1, 1306903184, 1) && func_118(Local_1270.f_24[iParam0 /*22*/]))
	{
		vVar0 = { func_1392(iParam0) };
		TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(bParam1, vVar0, 2f, func_1391(iParam0), true, func_1390(iParam0), 50f, 0, 10f, func_1389(iParam0), 100f, 10f);
	}
}

int func_1389(int iParam0)
{
	if (Local_433.f_73.f_72.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_72.f_3);
		return StackVal;
	}
	return 25;
}

int func_1390(int iParam0)
{
	if (Local_433.f_73.f_72.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_72.f_2);
		return StackVal;
	}
	return 1076642364;
}

int func_1391(int iParam0)
{
	if (Local_433.f_73.f_72.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_72.f_1);
		return StackVal;
	}
	if (Local_218.f_28.f_1[iParam0 /*20*/].f_8 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[Local_218.f_28.f_1[iParam0 /*20*/].f_8 /*6*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_1270.f_91[Local_218.f_28.f_1[iParam0 /*20*/].f_8 /*6*/]), false))
		{
			return NETWORK::NET_TO_VEH(Local_1270.f_91[Local_218.f_28.f_1[iParam0 /*20*/].f_8 /*6*/]);
		}
	}
	return 0;
}

Vector3 func_1392(int iParam0)
{
	if (Local_433.f_73.f_72 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_72);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

bool func_1393(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return true;
		}
	}
	return false;
}

void func_1394(int iParam0, bool bParam1)
{
	if (!PED::IS_PED_IN_GROUP(bParam1))
	{
		if (func_1397(iParam0, bParam1))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bParam1))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(bParam1);
			}
			else
			{
				PED::_0xF1C03A5352243A30(bParam1);
				TASK::CLEAR_PED_TASKS(bParam1);
				PED::SET_PED_CONFIG_FLAG(bParam1, 268, true);
				PED::SET_PED_AS_GROUP_MEMBER(bParam1, iLocal_1188);
				PED::SET_GROUP_FORMATION_SPACING(iLocal_1188, 2f, 0f, 0f);
				PED::SET_GROUP_SEPARATION_RANGE(iLocal_1188, 36f);
			}
		}
		else if (Local_433.f_73.f_70.f_1 != 0)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(bParam1, false))
			{
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_73.f_70.f_1);
				switch (StackVal)
				{
					case 1:
						func_1468(iParam0, bParam1);
						break;
					case 2:
						func_1462(iParam0, bParam1);
						break;
				}
			}
		}
	}
	else if (PED::IS_PED_GROUP_MEMBER(bParam1, iLocal_1188))
	{
		Stack.Push((func_1396(bLocal_1217, bParam1, 1) > func_1395(iParam0) || !bLocal_1213));
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_70);
		if (StackVal || !StackVal)
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bParam1))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(bParam1);
			}
			else
			{
				PED::REMOVE_PED_FROM_GROUP(bParam1);
			}
		}
	}
}

float func_1395(int iParam0)
{
	return 35f;
}

float func_1396(bool bParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::IS_ENTITY_DEAD(bParam0, false))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(bParam1, false))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(bParam1, true) };
	}
	else
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(bParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, bParam2);
}

bool func_1397(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;

	if (!bLocal_1213)
	{
		return false;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_70);
	if (!StackVal)
	{
		return false;
	}
	PED::GET_GROUP_SIZE(iLocal_1188, &uVar0, &iVar1);
	if (iVar1 > 0)
	{
		return false;
	}
	if (func_1396(bLocal_1217, bParam1, 1) > func_1398(iParam0))
	{
		return false;
	}
	return true;
}

float func_1398(int iParam0)
{
	return 7.5f;
}

void func_1399(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (func_118(Local_1270.f_24[iParam0 /*22*/]))
	{
		if (Local_433.f_73.f_65 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_65);
			iVar0 = StackVal;
			bVar1 = true;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam1);
			bVar1 = false;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam1, iVar0, false))
				{
					if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 8)
					{
						bVar2 = bLocal_1217;
						if (Local_433.f_73.f_65.f_1 != 0)
						{
							Stack.Push(iParam0);
							Call_Loc(Local_433.f_73.f_65.f_1);
							bVar2 = StackVal;
						}
						if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							TASK::TASK_HELI_MISSION(iParam1, iVar0, 0, bVar2, 0f, 0f, 0f, 8, func_1402(iParam0, 0), 10f, -1f, SYSTEM::ROUND(func_1401(iParam0)), func_1400(iParam0), -1082130432 /* Float: -1f */, 0);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							VEHICLE::SET_BOAT_ANCHOR(iVar0, false);
							TASK::TASK_BOAT_MISSION(iParam1, iVar0, 0, bVar2, 0f, 0f, 0f, 8, func_1402(iParam0, 1), 786469, -1f, 7);
						}
						else
						{
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam1, iVar0, bVar2, 8, func_1402(iParam0, 0), 786468, 1000f, 1000f, true);
						}
					}
				}
				else if ((bVar1 && TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1794415470) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1794415470) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(iParam1, iVar0, -1, -1, 2f, 9, 0);
				}
			}
		}
	}
}

int func_1400(int iParam0)
{
	if (Local_433.f_73.f_65.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_65.f_4);
		return StackVal;
	}
	return 80;
}

float func_1401(int iParam0)
{
	if (Local_433.f_73.f_65.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_65.f_3);
		return StackVal;
	}
	return 80f;
}

float func_1402(int iParam0, bool bParam1)
{
	if (Local_433.f_73.f_65.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_65.f_2);
		return StackVal;
	}
	if (bParam1)
	{
		return 20f;
	}
	return 30f;
}

void func_1403(int iParam0, int iParam1)
{
	int iVar0;

	if (func_118(Local_1270.f_24[iParam0 /*22*/]))
	{
		if (func_1406(iParam0, &iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam1, iVar0, false))
				{
					if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 1)
					{
						TASK::TASK_VEHICLE_MISSION(iParam1, iVar0, 0, 1, func_1405(iParam0), func_1404(iParam0), -1f, -1f, false);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1794415470) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(iParam1, iVar0, -1, -1, 2f, 9, 0);
				}
			}
		}
	}
}

int func_1404(int iParam0)
{
	if (Local_433.f_73.f_62.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_62.f_2);
		return StackVal;
	}
	return 22713;
}

float func_1405(int iParam0)
{
	if (Local_433.f_73.f_62.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_62.f_1);
		return StackVal;
	}
	return 10f;
}

bool func_1406(int iParam0, int iParam1)
{
	int iVar0;

	if (Local_433.f_73.f_62 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_62);
		iVar0 = StackVal;
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0) && ENTITY::IS_ENTITY_A_VEHICLE(NETWORK::NET_TO_ENT(iVar0)))
		{
			*iParam1 = NETWORK::NET_TO_VEH(iVar0);
			return true;
		}
	}
	return false;
}

void func_1407(int iParam0, bool bParam1)
{
	vector3 vVar0;

	if (!func_1393(bParam1, -251125078, 1) && func_118(Local_1270.f_24[iParam0 /*22*/]))
	{
		func_1411(iParam0, bParam1);
		vVar0 = { func_1410(iParam0) };
		TASK::TASK_SMART_FLEE_COORD(bParam1, vVar0, func_1409(iParam0), func_1408(iParam0), false, false);
	}
}

int func_1408(int iParam0)
{
	if (Local_433.f_73.f_58.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_58.f_2);
		return StackVal;
	}
	return -1;
}

float func_1409(int iParam0)
{
	if (Local_433.f_73.f_58.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_58.f_1);
		return StackVal;
	}
	return 10000f;
}

Vector3 func_1410(int iParam0)
{
	if (Local_433.f_73.f_58 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_58);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_1270.f_24[iParam0 /*22*/]), false);
}

void func_1411(int iParam0, bool bParam1)
{
	if (Local_433.f_73.f_58.f_3 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(bParam1);
		Call_Loc(Local_433.f_73.f_58.f_3);
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bParam1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 5, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 17, true);
	PED::SET_PED_FLEE_ATTRIBUTES(bParam1, 1024, true);
	PED::SET_PED_FLEE_ATTRIBUTES(bParam1, 32768, false);
}

void func_1412(int iParam0, bool bParam1)
{
	if (!func_1393(bParam1, -1519143300, 1) && func_118(Local_1270.f_24[iParam0 /*22*/]))
	{
		Stack.Push(iParam0);
		Stack.Push(bParam1);
		Call_Loc(Local_433.f_73.f_53.f_4);
		TASK::TASK_HANDS_UP(bParam1, func_1416(iParam0), func_1415(iParam0), func_1414(iParam0), func_1413(iParam0));
	}
}

int func_1413(int iParam0)
{
	if (Local_433.f_73.f_53.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_53.f_3);
		return StackVal;
	}
	return 0;
}

int func_1414(int iParam0)
{
	if (Local_433.f_73.f_53.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_53.f_2);
		return StackVal;
	}
	return -1;
}

int func_1415(int iParam0)
{
	if (Local_433.f_73.f_53.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_53.f_1);
		return StackVal;
	}
	return 0;
}

int func_1416(int iParam0)
{
	if (Local_433.f_73.f_53 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_53);
		return StackVal;
	}
	return -1;
}

void func_1417(var uParam0, var uParam1)
{
}

void func_1418(int iParam0, bool bParam1)
{
	if (!func_1393(bParam1, 1920390111, 1) && func_118(Local_1270.f_24[iParam0 /*22*/]))
	{
		TASK::TASK_ACHIEVE_HEADING(bParam1, func_1419(iParam0), 0);
	}
}

var func_1419(int iParam0)
{
	if (Local_433.f_73.f_49 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_49);
		return StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_105);
	return StackVal;
}

void func_1420(int iParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;

	if (func_118(Local_1270.f_24[iParam0 /*22*/]))
	{
		if (Local_218.f_28.f_1[iParam0 /*20*/].f_8 != -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[Local_218.f_28.f_1[iParam0 /*20*/].f_8 /*6*/]))
			{
				iVar0 = NETWORK::NET_TO_VEH(Local_1270.f_91[Local_218.f_28.f_1[iParam0 /*20*/].f_8 /*6*/]);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (!func_1393(bParam1, -1794415470, 1) || PED::GET_VEHICLE_PED_IS_ENTERING(bParam1) != iVar0)
					{
						TASK::CLEAR_PED_TASKS(bParam1);
						TASK::TASK_ENTER_VEHICLE(bParam1, iVar0, -1, Local_218.f_28.f_1[iParam0 /*20*/].f_9, func_1424(iParam0), 1, 0);
					}
				}
			}
		}
		else if (!func_1393(bParam1, 713668775, 1))
		{
			vVar1 = { func_1423(iParam0) };
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 3, true);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(bParam1, vVar1, func_1424(iParam0), func_1422(), 0.25f, 4096, func_1421(iParam0));
		}
	}
}

float func_1421(int iParam0)
{
	if (Local_433.f_73.f_44.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_44.f_4);
		return StackVal;
	}
	return 0f;
}

int func_1422()
{
	if (Local_433.f_73.f_44.f_3 != 0)
	{
		Call_Loc(Local_433.f_73.f_44.f_3);
		return StackVal;
	}
	return 20000;
}

Vector3 func_1423(int iParam0)
{
	if (Local_433.f_73.f_44.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_44.f_1);
		return StackVal, StackVal, StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_104);
	return StackVal, StackVal, StackVal;
}

float func_1424(int iParam0)
{
	if (Local_433.f_73.f_44.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_44.f_2);
		return StackVal;
	}
	return 1f;
}

void func_1425(int iParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;

	if (func_118(Local_1270.f_24[iParam0 /*22*/]))
	{
		iVar0 = -1824940423;
		if (func_1426(iParam0))
		{
			iVar0 = 713668775;
		}
		if (!func_1393(bParam1, iVar0, 1))
		{
			vVar1 = { func_1423(iParam0) };
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 3, true);
			switch (iVar0)
			{
				case 713668775:
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(bParam1, vVar1, func_1424(iParam0), func_1422(), 0.25f, 4096, func_1421(iParam0));
					break;
				case -1824940423:
					TASK::TASK_GO_TO_COORD_ANY_MEANS(bParam1, vVar1, func_1424(iParam0), 0, false, 786603, -1f);
					break;
			}
		}
	}
}

bool func_1426(int iParam0)
{
	if (Local_433.f_73.f_44 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_44);
		return StackVal;
	}
	return false;
}

void func_1427(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_1393(bParam1, 780511057, 1))
	{
		if (func_1430(iParam0, &iVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (func_118(Local_1270.f_24[iParam0 /*22*/]))
				{
					func_1429(iParam0, bParam1);
					TASK::TASK_COMBAT_PED(bParam1, iVar0, func_1428(iParam0), 16);
				}
			}
		}
	}
}

int func_1428(int iParam0)
{
	if (func_39(iParam0, 14))
	{
		return 67108864;
	}
	if (Local_433.f_73.f_42.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_42.f_1);
	}
	return 0;
}

void func_1429(int iParam0, bool bParam1)
{
	if (func_39(iParam0, 23))
	{
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(bParam1, joaat("VEHICLE_WEAPON_PLAYER_BUZZARD")))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 52, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 53, true);
			PED::SET_PED_FIRING_PATTERN(bParam1, -1857128337);
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 89, true);
		}
	}
}

bool func_1430(int iParam0, int iParam1)
{
	int iVar0;

	if (Local_433.f_73.f_42 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_42);
		iVar0 = StackVal;
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0) && ENTITY::IS_ENTITY_A_PED(NETWORK::NET_TO_ENT(iVar0)))
		{
			*iParam1 = NETWORK::NET_TO_PED(iVar0);
			return true;
		}
	}
	return false;
}

void func_1431(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { func_1437(iParam0, -1) };
	fVar3 = func_1436(iParam1, vVar0, 0);
	if (Local_433.f_73.f_20.f_19 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Stack.Push(fVar3);
		Call_Loc(Local_433.f_73.f_20.f_19);
	}
	if (func_39(iParam0, 16))
	{
		if (!func_13(&(Local_1270.f_24[iParam0 /*22*/].f_20)))
		{
			func_12(&(Local_1270.f_24[iParam0 /*22*/].f_20), 0, 0);
		}
		if (func_11(&(Local_1270.f_24[iParam0 /*22*/].f_20), 60000, 0))
		{
			if (Local_433.f_73.f_20.f_21 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_433.f_73.f_20.f_21);
			}
		}
	}
	if (fVar3 <= func_1435(iParam0) || func_1433(iParam0))
	{
		if (Local_433.f_73.f_20.f_20 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_433.f_73.f_20.f_20);
		}
		if (func_39(iParam0, 16))
		{
			func_22(&(Local_1270.f_24[iParam0 /*22*/].f_20));
		}
		Local_1270.f_24[iParam0 /*22*/].f_5++;
		if (Local_1270.f_24[iParam0 /*22*/].f_5 >= func_1432(iParam0))
		{
			Local_1270.f_24[iParam0 /*22*/].f_5 = 0;
			func_47(iParam0, 9);
			func_14(3);
		}
	}
}

int func_1432(int iParam0)
{
	if (Local_433.f_73.f_20.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_1);
		return StackVal;
	}
	return 0;
}

bool func_1433(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = NETWORK::NET_TO_PED(Local_1270.f_24[iParam0 /*22*/]);
	vVar1 = { func_1437(iParam0, -1) };
	if (func_1434(iVar0, vVar1, func_1435(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_1434(int iParam0, vector3 vParam1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), vParam1) <= (fParam4 * fParam4);
}

float func_1435(int iParam0)
{
	if (Local_433.f_73.f_20.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_4);
		return StackVal;
	}
	return 10f;
}

float func_1436(int iParam0, vector3 vParam1, bool bParam4)
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

Vector3 func_1437(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = Local_1270.f_24[iParam0 /*22*/].f_5;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (Local_433.f_73.f_20.f_2 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Call_Loc(Local_433.f_73.f_20.f_2);
		vVar1 = { StackVal, StackVal, StackVal };
	}
	return vVar1;
}

void func_1438(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;

	bVar0 = func_1457(iParam0);
	iVar1 = func_1456(iParam0);
	if (bVar0 || NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar1))
	{
		if (bVar0)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 3, true);
		}
		else
		{
			bVar2 = NETWORK::NET_TO_VEH(iVar1);
		}
		if (bVar0 || !ENTITY::IS_ENTITY_DEAD(bVar2, false))
		{
			if ((func_1455() && !bVar0) && !PED::IS_PED_IN_VEHICLE(bParam1, bVar2, false))
			{
				if (func_118(Local_1270.f_24[iParam0 /*22*/]))
				{
					if (!func_1393(bParam1, -1794415470, 1) || PED::GET_VEHICLE_PED_IS_ENTERING(bParam1) != bVar2)
					{
						Stack.Push(bParam1);
						Call_Loc(Local_433.f_73.f_4.f_5);
						Stack.Push(bParam1);
						Stack.Push(bVar2);
						Stack.Push(iParam0);
						Call_Loc(Local_433.f_73.f_4.f_1);
						Stack.Push(iParam0);
						Call_Loc(Local_433.f_73.f_4.f_2);
						Stack.Push(iParam0);
						Call_Loc(Local_433.f_73.f_4.f_3);
						Stack.Push(iParam0);
						Call_Loc(Local_433.f_73.f_4.f_4);
						TASK::TASK_ENTER_VEHICLE(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0);
					}
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(bParam1))
			{
				if (!func_1393(bParam1, -1273030092, 1))
				{
					if (func_118(Local_1270.f_24[iParam0 /*22*/]))
					{
						vVar3 = { func_1437(iParam0, -1) };
						TASK::TASK_HELI_MISSION(bParam1, bVar2, 0, 0, vVar3, 4, func_1454(iParam0), 10f, -1f, SYSTEM::ROUND(func_1453()), func_1452(), -1f, 128);
						if (Local_1270.f_24[iParam0 /*22*/].f_6 != Local_1270.f_24[iParam0 /*22*/].f_5)
						{
							func_1451(Local_1270.f_24[iParam0 /*22*/].f_5, iParam0);
						}
					}
				}
				else if (Local_1270.f_24[iParam0 /*22*/].f_6 != Local_1270.f_24[iParam0 /*22*/].f_5)
				{
					if (func_118(Local_1270.f_24[iParam0 /*22*/]))
					{
						TASK::CLEAR_PED_TASKS(bParam1);
					}
				}
			}
			else if (PED::IS_PED_IN_ANY_BOAT(bParam1))
			{
				if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(iVar1)) != 4)
				{
					if (func_118(Local_1270.f_24[iParam0 /*22*/]))
					{
						fVar6 = 20f;
						vVar7 = { func_1437(iParam0, -1) };
						VEHICLE::SET_BOAT_ANCHOR(bVar2, false);
						TASK::TASK_BOAT_MISSION(bParam1, bVar2, 0, false, vVar7, 4, fVar6, 786469, -1f, 7);
					}
				}
			}
			else if (!func_1393(bParam1, func_1450(iParam0), 1))
			{
				if (func_118(Local_1270.f_24[iParam0 /*22*/]) && (bVar0 || func_118(iVar1)))
				{
					vVar10 = { func_1437(iParam0, -1) };
					fVar13 = func_1449(iParam0);
					fVar14 = func_1448(iParam0);
					if (!bVar0)
					{
						func_1447(bVar2);
					}
					if (func_1446(iParam0))
					{
						TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(bParam1, vVar10, func_1445(iParam0), bVar2, true, func_1444(iParam0), -1f, 0, fVar14, func_1443(iParam0), fVar13, func_1442(iParam0));
					}
					else
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(bParam1, bVar2, vVar10, fVar13, func_1441(iParam0), ENTITY::GET_ENTITY_MODEL(bVar2), func_1444(iParam0), func_1442(iParam0), fVar14);
					}
					if (Local_1270.f_24[iParam0 /*22*/].f_6 != Local_1270.f_24[iParam0 /*22*/].f_5)
					{
						func_1451(Local_1270.f_24[iParam0 /*22*/].f_5, iParam0);
					}
					if (func_1440(iParam0) != -1f)
					{
						if (!func_73(iParam0, 14) && !func_1063(iParam0, iLocal_1219, 14))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(bVar2, func_1440(iParam0));
							func_1037(iParam0, 14);
						}
					}
				}
			}
			else if (Local_1270.f_24[iParam0 /*22*/].f_6 != Local_1270.f_24[iParam0 /*22*/].f_5)
			{
				if (func_118(Local_1270.f_24[iParam0 /*22*/]))
				{
					TASK::CLEAR_PED_TASKS(bParam1);
				}
			}
			if ((!func_73(iParam0, 10) && !func_1063(iParam0, iLocal_1219, 12)) && func_1439(iParam0))
			{
				if (func_118(Local_1270.f_24[iParam0 /*22*/]))
				{
					TASK::CLEAR_PED_TASKS(bParam1);
					func_1037(iParam0, 12);
				}
			}
		}
	}
}

bool func_1439(int iParam0)
{
	if (Local_433.f_73.f_20.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_18);
		return StackVal;
	}
	return false;
}

float func_1440(int iParam0)
{
	if (Local_433.f_73.f_20.f_14 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_14);
		return StackVal;
	}
	return -1f;
}

int func_1441(int iParam0)
{
	if (Local_433.f_73.f_20.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_7);
		return StackVal;
	}
	return 0;
}

float func_1442(int iParam0)
{
	if (Local_433.f_73.f_20.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_5);
		return StackVal;
	}
	return 5f;
}

int func_1443(int iParam0)
{
	if (Local_433.f_73.f_20.f_11 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_11);
		return StackVal;
	}
	return 24;
}

int func_1444(int iParam0)
{
	if (Local_433.f_73.f_20.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_8);
		return StackVal;
	}
	return 2359332;
}

float func_1445(int iParam0)
{
	if (Local_433.f_73.f_20.f_10 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_10);
		return StackVal;
	}
	return 0f;
}

bool func_1446(int iParam0)
{
	if (Local_433.f_73.f_20.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_6);
		return StackVal;
	}
	return false;
}

void func_1447(bool bParam0)
{
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(bParam0)))
	{
		VEHICLE::SET_BOAT_ANCHOR(bParam0, false);
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(bParam0)))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(bParam0))
		{
			VEHICLE::CONTROL_LANDING_GEAR(bParam0, 1);
		}
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(bParam0, true, true, false);
}

float func_1448(int iParam0)
{
	if (Local_433.f_73.f_20.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_9);
		return StackVal;
	}
	return 0f;
}

float func_1449(int iParam0)
{
	if (Local_433.f_73.f_20.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_3);
		return StackVal;
	}
	return 35f;
}

int func_1450(int iParam0)
{
	if (func_1446(iParam0))
	{
		return 1306903184;
	}
	return -1817882002;
}

void func_1451(var uParam0, int iParam1)
{
	struct<7> Var0;
	int iVar7;

	Var0 = -251935260;
	Var0.f_1 = bLocal_1216;
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = MISC::GET_FRAME_COUNT();
	Var0.f_5 = iLocal_1225;
	Var0.f_6 = NETWORK::_0x638A3A81733086DB();
	iVar7 = func_1152(1);
	if (iVar7 != 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 7, iVar7);
	}
}

int func_1452()
{
	if (Local_433.f_73.f_20.f_17 != 0)
	{
		Call_Loc(Local_433.f_73.f_20.f_17);
		return StackVal;
	}
	return 80;
}

float func_1453()
{
	if (Local_433.f_73.f_20.f_16 != 0)
	{
		Call_Loc(Local_433.f_73.f_20.f_16);
		return StackVal;
	}
	return 80f;
}

float func_1454(int iParam0)
{
	if (Local_433.f_73.f_20.f_15 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_15);
		return StackVal;
	}
	return 30f;
}

bool func_1455()
{
	if (Local_433.f_73.f_20.f_13 != 0)
	{
		Call_Loc(Local_433.f_73.f_20.f_13);
		return StackVal;
	}
	return false;
}

int func_1456(int iParam0)
{
	if (Local_433.f_73.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20);
		return StackVal;
	}
	if (Local_218.f_28.f_1[iParam0 /*20*/].f_8 != -1)
	{
		return Local_1270.f_91[Local_218.f_28.f_1[iParam0 /*20*/].f_8 /*6*/];
	}
	return 0;
}

int func_1457(int iParam0)
{
	if (Local_433.f_73.f_20.f_12 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_20.f_12);
		return StackVal;
	}
	return 0;
}

void func_1458(int iParam0, bool bParam1)
{
	int iVar0;

	if (Local_433.f_73.f_18 != 0)
	{
		if (!func_1393(bParam1, 167901368, 1))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_18);
			iVar0 = StackVal;
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(iVar0), false))
			{
				if (func_118(Local_1270.f_24[iParam0 /*22*/]))
				{
					Stack.Push(bParam1);
					Stack.Push(NETWORK::NET_TO_ENT(iVar0));
					Stack.Push(-1);
					Call_Loc(Local_433.f_73.f_18.f_1);
					TASK::TASK_SHOOT_AT_ENTITY(StackVal, StackVal, StackVal, StackVal);
				}
			}
		}
	}
}

void func_1459(int iParam0, bool bParam1)
{
	int iVar0;

	if (Local_433.f_73.f_17 != 0)
	{
		if (!func_1393(bParam1, 1630799643, 1))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_17);
			iVar0 = StackVal;
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(iVar0), false))
			{
				if (func_118(Local_1270.f_24[iParam0 /*22*/]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 30, true);
					TASK::TASK_AIM_GUN_AT_ENTITY(bParam1, NETWORK::NET_TO_ENT(iVar0), -1, false);
				}
			}
		}
	}
}

void func_1460(int iParam0, bool bParam1)
{
	if (Local_433.f_73.f_16 != 0)
	{
		if (!func_1393(bParam1, 1237250926, 1))
		{
			if (func_118(Local_1270.f_24[iParam0 /*22*/]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 30, true);
				Stack.Push(bParam1);
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_73.f_16);
				TASK::TASK_AIM_GUN_AT_COORD(StackVal, StackVal, StackVal, StackVal, -1, false, false);
			}
		}
	}
}

void func_1461(int iParam0, bool bParam1)
{
	if (!func_1393(bParam1, 1120685857, 1))
	{
		if (func_118(Local_1270.f_24[iParam0 /*22*/]))
		{
			Stack.Push(iParam0);
			Stack.Push(bParam1);
			Call_Loc(Local_433.f_73.f_13.f_2);
			func_1429(iParam0, bParam1);
			Stack.Push(bParam1);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_13);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_13.f_1);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(StackVal, StackVal, StackVal, StackVal, StackVal, 0);
		}
	}
}

void func_1462(int iParam0, bool bParam1)
{
	if (!func_1393(bParam1, -2017877118, 1))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_10);
		STREAMING::REQUEST_ANIM_DICT(StackVal);
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_10);
		if (STREAMING::HAS_ANIM_DICT_LOADED(StackVal))
		{
			if (func_118(Local_1270.f_24[iParam0 /*22*/]))
			{
				Stack.Push(bParam1);
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_73.f_10);
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_73.f_10.f_1);
				Stack.Push(1090519040);
				Stack.Push(-1056964608);
				Stack.Push(-1);
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_73.f_10.f_2);
				TASK::TASK_PLAY_ANIM(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0f, false, false, false);
			}
		}
	}
}

void func_1463(int iParam0, bool bParam1)
{
	if (func_1464(iParam0, 0))
	{
		if (func_118(Local_1270.f_24[iParam0 /*22*/]))
		{
			if (!func_1393(bParam1, -828834893, 1))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(bParam1, 0, 0);
			}
		}
	}
}

bool func_1464(int iParam0, int iParam1)
{
	return func_4(&(Local_930[iParam0 /*76*/].f_57), iParam1);
}

void func_1465(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_1464(iParam0, 0))
	{
		if (func_118(Local_1270.f_24[iParam0 /*22*/]))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_4);
			iVar0 = StackVal;
			if (func_39(iParam0, 14))
			{
				iVar0 = Local_218.f_28.f_1[iParam0 /*20*/].f_8;
			}
			if (iVar0 != -1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[iVar0 /*6*/]))
				{
					iVar1 = NETWORK::NET_TO_VEH(Local_1270.f_91[iVar0 /*6*/]);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
					{
						if (!func_1393(bParam1, -1794415470, 1) || PED::GET_VEHICLE_PED_IS_ENTERING(bParam1) != iVar1)
						{
							Stack.Push(iParam0);
							Call_Loc(Local_433.f_73.f_4.f_2);
							uVar2 = StackVal;
							if (func_39(iParam0, 14))
							{
								uVar2 = Local_218.f_28.f_1[iParam0 /*20*/].f_9;
							}
							else
							{
								Stack.Push(bParam1);
								Call_Loc(Local_433.f_73.f_4.f_5);
							}
							Stack.Push(bParam1);
							Stack.Push(iVar1);
							Stack.Push(iParam0);
							Call_Loc(Local_433.f_73.f_4.f_1);
							Stack.Push(uVar2);
							Stack.Push(iParam0);
							Call_Loc(Local_433.f_73.f_4.f_3);
							Stack.Push(iParam0);
							Call_Loc(Local_433.f_73.f_4.f_4);
							TASK::TASK_ENTER_VEHICLE(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0);
						}
					}
				}
			}
		}
	}
}

void func_1466(int iParam0, bool bParam1)
{
	if (func_118(Local_1270.f_24[iParam0 /*22*/]))
	{
		if (!func_1393(bParam1, 474215631, 1))
		{
			TASK::TASK_COWER(bParam1, -1);
		}
	}
}

void func_1467(int iParam0, bool bParam1)
{
	if (!func_1393(bParam1, -251125078, 1))
	{
		if (func_118(Local_1270.f_24[iParam0 /*22*/]))
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(bParam1, false);
			TASK::TASK_SMART_FLEE_COORD(bParam1, ENTITY::GET_ENTITY_COORDS(bParam1, false), 10000f, 999999, false, false);
			PED::SET_PED_FLEE_ATTRIBUTES(bParam1, 256, true);
			PED::SET_PED_FLEE_ATTRIBUTES(bParam1, 2, false);
			PED::SET_PED_FLEE_ATTRIBUTES(bParam1, 65536, true);
		}
	}
}

void func_1468(int iParam0, bool bParam1)
{
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_1);
		if (func_1469(StackVal))
		{
			if (!func_1393(bParam1, -1098463898, 1) && func_118(Local_1270.f_24[iParam0 /*22*/]))
			{
				Stack.Push(bParam1);
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_73.f_1);
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_73.f_1.f_1);
				Stack.Push(iParam0);
				Call_Loc(Local_433.f_73.f_1.f_2);
				TASK::TASK_START_SCENARIO_AT_POSITION(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, false, true);
			}
		}
		else if (!func_1393(bParam1, 993674639, 1) && func_118(Local_1270.f_24[iParam0 /*22*/]))
		{
			Stack.Push(bParam1);
			Stack.Push(iParam0);
			Call_Loc(Local_433.f_73.f_1);
			TASK::TASK_START_SCENARIO_IN_PLACE(StackVal, StackVal, 0, false);
		}
	}
}

bool func_1469(char* sParam0)
{
	return (((((MISC::ARE_STRINGS_EQUAL(sParam0, "PROP_HUMAN_SEAT_SUNLOUNGER") || MISC::ARE_STRINGS_EQUAL(sParam0, "WORLD_HUMAN_SEAT_LEDGE")) || MISC::ARE_STRINGS_EQUAL(sParam0, "WORLD_HUMAN_SEAT_LEDGE_EATING")) || MISC::ARE_STRINGS_EQUAL(sParam0, "WORLD_HUMAN_SEAT_STEPS")) || MISC::ARE_STRINGS_EQUAL(sParam0, "WORLD_HUMAN_SEAT_WALL")) || MISC::ARE_STRINGS_EQUAL(sParam0, "WORLD_HUMAN_SEAT_WALL_EATING"));
}

void func_1470(int iParam0)
{
	bool bVar0;

	bVar0 = (VEHICLE::IS_THIS_MODEL_A_HELI(Local_218.f_95.f_1[Local_218.f_28.f_1[iParam0 /*20*/].f_8 /*14*/].f_3) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_218.f_95.f_1[Local_218.f_28.f_1[iParam0 /*20*/].f_8 /*14*/].f_3));
	if (Local_218.f_28.f_1[iParam0 /*20*/].f_9 == -1)
	{
		if (bVar0)
		{
			func_1475(iParam0);
		}
		else
		{
			func_1474(iParam0);
		}
	}
	else if (bVar0)
	{
		func_1473(iParam0);
	}
	else
	{
		func_1471(iParam0);
	}
}

void func_1471(int iParam0)
{
	func_485(iParam0, 0, 6);
	func_1472(iParam0, 0, 1);
	func_1472(iParam0, 0, 2);
	func_1472(iParam0, 0, 3);
	func_485(iParam0, 1, 7);
	func_1472(iParam0, 1, 0);
	func_1472(iParam0, 1, 2);
	func_1472(iParam0, 1, 3);
	func_485(iParam0, 2, 14);
	func_1472(iParam0, 2, 0);
	func_1472(iParam0, 2, 1);
	func_1472(iParam0, 2, 3);
	func_485(iParam0, 3, 16);
	func_1472(iParam0, 3, 0);
	func_1472(iParam0, 3, 1);
	func_1472(iParam0, 3, 2);
}

void func_1472(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = Local_930[iParam0 /*76*/].f_1[iParam1 /*11*/].f_10;
	iVar1 = iParam2;
	Local_930[iParam0 /*76*/].f_1[iParam1 /*11*/].f_1[iVar0 /*2*/] = iVar1;
	Local_930[iParam0 /*76*/].f_1[iParam1 /*11*/].f_10++;
}

void func_1473(int iParam0)
{
	func_485(iParam0, 0, 6);
	func_1472(iParam0, 0, 1);
	func_485(iParam0, 1, 7);
	func_1472(iParam0, 1, 0);
}

void func_1474(int iParam0)
{
	func_485(iParam0, 0, 6);
	func_1472(iParam0, 0, 2);
	func_1472(iParam0, 0, 1);
	func_1472(iParam0, 0, 3);
	func_1472(iParam0, 0, 4);
	func_485(iParam0, 2, 7);
	func_1472(iParam0, 2, 0);
	func_1472(iParam0, 2, 1);
	func_1472(iParam0, 2, 3);
	func_1472(iParam0, 2, 4);
	func_485(iParam0, 1, 17);
	func_1472(iParam0, 1, 0);
	func_1472(iParam0, 1, 2);
	func_1472(iParam0, 1, 3);
	func_1472(iParam0, 1, 4);
	func_485(iParam0, 3, 14);
	func_1472(iParam0, 3, 0);
	func_1472(iParam0, 3, 2);
	func_1472(iParam0, 3, 1);
	func_1472(iParam0, 3, 4);
	func_485(iParam0, 4, 16);
	func_1472(iParam0, 4, 0);
	func_1472(iParam0, 4, 2);
	func_1472(iParam0, 4, 1);
	func_1472(iParam0, 4, 3);
}

void func_1475(int iParam0)
{
	func_485(iParam0, 0, 6);
	func_1472(iParam0, 0, 2);
	func_1472(iParam0, 0, 1);
	func_485(iParam0, 2, 7);
	func_1472(iParam0, 2, 0);
	func_1472(iParam0, 2, 1);
	func_485(iParam0, 1, 17);
	func_1472(iParam0, 1, 0);
	func_1472(iParam0, 1, 2);
}

void func_1476()
{
	Call_Loc(Local_433.f_6.f_1);
	func_1477();
}

void func_1477()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 < iLocal_1228)
	{
		iVar1 = Local_817[iVar0 /*16*/];
		if (iVar1 != -1)
		{
			if (Local_817[iVar0 /*16*/].f_1[0 /*2*/].f_1 == 0)
			{
				iVar2 = 0;
				while (iVar2 < Local_817[iVar0 /*16*/].f_14)
				{
					iVar3 = Local_817[iVar0 /*16*/].f_1[iVar2 /*2*/];
					func_1487(iVar1, Local_817[iVar3 /*16*/], &(Local_817[iVar0 /*16*/].f_1[iVar2 /*2*/].f_1));
					iVar2++;
				}
			}
			if (Local_817[iVar0 /*16*/].f_13 == 0)
			{
				func_1483(iVar0, iVar1);
			}
			if (Local_817[iVar0 /*16*/].f_12 == 0)
			{
				func_1479(iVar0, iVar1);
			}
			if (Local_817[iVar0 /*16*/].f_15 == 0)
			{
				Local_817[iVar0 /*16*/].f_15 = 242395;
			}
		}
		iVar0++;
	}
}

void func_1478()
{
}

void func_1479(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam1)
	{
		case 4:
			iVar0 = 242510;
			break;
		case 30:
			iVar0 = 242497;
			break;
	}
	if (iVar0 != 0)
	{
		func_1480(iParam0, iVar0);
	}
	else
	{
		Local_817[iParam0 /*16*/].f_12 = 242395;
	}
}

void func_1480(int iParam0, int iParam1)
{
	Local_817[iParam0 /*16*/].f_12 = iParam1;
}

void func_1481()
{
	func_745(4);
}

void func_1482()
{
	func_745(1);
}

void func_1483(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam1)
	{
		case 4:
			iVar0 = 242630;
			break;
		case 30:
			iVar0 = 242617;
			break;
	}
	if (iVar0 != 0)
	{
		func_1484(iParam0, iVar0);
	}
	else
	{
		Local_817[iParam0 /*16*/].f_13 = 242395;
	}
}

void func_1484(int iParam0, int iParam1)
{
	Local_817[iParam0 /*16*/].f_13 = iParam1;
}

void func_1485()
{
	func_745(4);
}

void func_1486()
{
	func_943();
}

void func_1487(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 25:
		case 27:
		case 28:
		case 26:
			switch (iParam1)
			{
				case 25:
					*uParam2 = 243437;
					break;
				case 27:
					*uParam2 = 243413;
					break;
				case 28:
					*uParam2 = 243393;
					break;
				case 26:
					*uParam2 = 243296;
					break;
			}
			break;
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
		case 36:
			switch (iParam1)
			{
				case 32:
					*uParam2 = 243174;
					break;
				case 33:
					*uParam2 = 243165;
					break;
				case 34:
					*uParam2 = 243156;
					break;
				case 35:
					*uParam2 = 243147;
					break;
				case 37:
					*uParam2 = 243138;
					break;
				case 36:
					*uParam2 = 242929;
					break;
			}
			break;
		case 42:
			*uParam2 = 242913;
			break;
	}
}

bool func_1488()
{
	return func_369(iLocal_1219, 7);
}

int func_1489()
{
	if ((!func_969(bLocal_1216, 1) && !func_749(bLocal_1216, 0, 1, 0)) && func_1490(0))
	{
		return 1;
	}
	return 0;
}

bool func_1490(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 6))
		{
			if (!func_6(iVar0, 3))
			{
				if (!func_6(iVar0, 4) || bParam0)
				{
					if (func_1491(iVar0))
					{
						iVar1++;
					}
				}
				else
				{
					iVar2++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	if (iVar1 > 0 && iVar1 == (func_7() - iVar2))
	{
		return true;
	}
	return false;
}

bool func_1491(int iParam0)
{
	return Local_1164[iParam0 /*5*/].f_4 != func_68();
}

int func_1492()
{
	return 0;
}

int func_1493()
{
	return 0;
}

int func_1494()
{
	return 0;
}

int func_1495()
{
	return 0;
}

int func_1496()
{
	if ((!func_969(bLocal_1216, 1) && !func_749(bLocal_1216, 0, 1, 0)) || func_1187(func_1122(), 1))
	{
		if (!func_1490(0) && !func_1497(0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1497(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_1187(iVar0, bParam0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_1498()
{
	if (func_1501())
	{
		return 0;
	}
	if (!func_1499())
	{
		return 0;
	}
	if (func_749(bLocal_1216, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1499()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_691(iVar0, iLocal_1219, 12))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1500()
{
	if (func_1501())
	{
		return 0;
	}
	return 1;
}

bool func_1501()
{
	if (func_969(bLocal_1216, 1))
	{
		return true;
	}
	return false;
}

int func_1502()
{
	if (func_1501())
	{
		return 0;
	}
	if (func_1490(0))
	{
		return 0;
	}
	if (func_749(bLocal_1216, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1503()
{
	Call_Loc(Local_433.f_6);
	func_1504();
}

void func_1504()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < iLocal_1227)
	{
		iVar1 = Local_711[iVar0 /*15*/];
		if (iVar1 != -1)
		{
			if (Local_711[iVar0 /*15*/].f_1[0 /*2*/].f_1 == 0)
			{
				func_1513(iVar1, &(Local_711[iVar0 /*15*/].f_1[0 /*2*/].f_1));
			}
			if (Local_711[iVar0 /*15*/].f_13 == 0)
			{
				func_1509(iVar0, iVar1);
			}
			if (Local_711[iVar0 /*15*/].f_12 == 0)
			{
				func_1505(iVar0, iVar1);
			}
		}
		iVar0++;
	}
}

void func_1505(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam1)
	{
		case 4:
			break;
		case 44:
			iVar0 = 243738;
			break;
		case 30:
			iVar0 = 243730;
			break;
	}
	if (iVar0 != 0)
	{
		func_1506(iParam0, iVar0);
	}
	else
	{
		Local_711[iParam0 /*15*/].f_12 = 242395;
	}
}

void func_1506(int iParam0, int iParam1)
{
	Local_711[iParam0 /*15*/].f_12 = iParam1;
}

void func_1507()
{
}

void func_1508()
{
	if (func_534())
	{
		func_423(11);
		func_10(3);
	}
	else
	{
		func_10(4);
	}
}

void func_1509(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam1)
	{
		case 4:
			iVar0 = 243879;
			break;
		case 30:
			iVar0 = 243866;
			break;
	}
	if (iVar0 != 0)
	{
		func_1510(iParam0, iVar0);
	}
	else
	{
		Local_711[iParam0 /*15*/].f_13 = 242395;
	}
}

void func_1510(int iParam0, int iParam1)
{
	Local_711[iParam0 /*15*/].f_13 = iParam1;
}

void func_1511()
{
	func_1331(4);
}

void func_1512()
{
	func_1331(1);
}

void func_1513(int iParam0, var uParam1)
{
	*uParam1 = 244331;
	switch (iParam0)
	{
		case 4:
			*uParam1 = 244212;
			break;
		case 25:
			*uParam1 = 244148;
			break;
		case 27:
			*uParam1 = 244127;
			break;
		case 8:
			*uParam1 = 244102;
			break;
		case 32:
			*uParam1 = 244023;
			break;
		case 30:
			*uParam1 = 244010;
			break;
	}
}

bool func_1514()
{
	return func_3(4);
}

int func_1515()
{
	if (func_379())
	{
		return 1;
	}
	else if (func_1516())
	{
		return 1;
	}
	return 0;
}

bool func_1516()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_218.f_10)
	{
		if (!func_6(iVar0, 4))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_1517()
{
	return func_1518();
}

bool func_1518()
{
	return iLocal_1182 == 0;
}

int func_1519()
{
	if (func_1497(0))
	{
		return 1;
	}
	return 0;
}

int func_1520()
{
	if (func_1521())
	{
		return 1;
	}
	return 0;
}

bool func_1521()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1522()
{
	if (func_1526())
	{
		return 1;
	}
	if (func_1524())
	{
		return 1;
	}
	if (func_1523())
	{
		return 1;
	}
	return 0;
}

bool func_1523()
{
	return false;
}

bool func_1524()
{
	int iVar0;

	iVar0 = Local_218.f_136[func_1525() /*12*/].f_6;
	if (iVar0 != -1)
	{
		if (func_55(iVar0))
		{
			return true;
		}
	}
	return false;
}

int func_1525()
{
	return Local_1270.f_146;
}

bool func_1526()
{
	return func_3(1);
}

int func_1527()
{
	return 0;
}

int func_1528()
{
	return Local_1270.f_122;
}

int func_1529()
{
	return Local_1436[iLocal_1218 /*37*/].f_22;
}

bool func_1530()
{
	return false;
}

bool func_1531()
{
	var uVar0;

	func_1536(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return true;
		}
	}
	if (func_1535())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_1534())
	{
		return true;
	}
	if (func_1533(159))
	{
		if (!func_1532())
		{
			return true;
		}
	}
	if (func_1533(157))
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	if (func_920() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_920()) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_1532()
{
	return Global_2450632.f_598;
}

bool func_1533(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1534()
{
	return Global_2460680;
}

bool func_1535()
{
	return Global_2450632.f_593;
}

void func_1536(var uParam0)
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
					func_1537(iVar0);
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

void func_1537(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_28(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_1538(iVar4, &bVar5))
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

bool func_1538(int iParam0, bool bParam1)
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

void func_1539()
{
	SYSTEM::WAIT(0);
}

void func_1540()
{
	Local_433.f_6 = 246968;
	Local_433.f_6.f_1 = 246907;
	Local_433.f_2 = 246898;
	Local_433.f_1 = 246889;
	Local_433.f_17 = 244331;
	Local_433.f_26.f_2 = 246880;
	Local_433.f_26 = 246868;
	Local_433.f_18 = 246859;
	Local_433.f_18.f_1 = 246850;
	Local_433.f_18.f_2 = 246841;
	Local_433.f_18.f_3 = 246832;
	Local_433.f_18.f_4 = 246820;
	Local_433.f_18.f_5 = 246811;
	Local_433.f_38 = 246802;
	Local_433.f_37 = 246779;
	Local_433.f_54.f_11 = 246770;
	Local_433.f_54.f_12 = 246759;
	Local_433.f_54 = 246713;
	Local_433.f_73.f_103 = 246693;
	Local_433.f_73.f_104 = 246630;
	Local_433.f_73.f_105 = 246569;
	Local_433.f_73.f_106 = 246549;
	Local_433.f_73.f_99 = 246540;
	Local_433.f_73.f_99.f_1 = 246518;
	Local_433.f_73.f_99.f_2 = 246498;
	Local_433.f_73 = 246490;
	Local_433.f_73.f_76 = 246432;
	Local_433.f_73.f_1 = 246369;
	Local_433.f_73.f_1.f_1 = 246351;
	Local_433.f_73.f_1.f_2 = 246333;
	Local_433.f_73.f_4 = 246313;
	Local_433.f_73.f_4.f_1 = 246304;
	Local_433.f_73.f_4.f_2 = 246295;
	Local_433.f_73.f_4.f_3 = 246286;
	Local_433.f_73.f_4.f_4 = 246261;
	Local_433.f_73.f_4.f_5 = 246247;
	Local_433.f_73.f_10 = 246235;
	Local_433.f_73.f_10.f_1 = 246223;
	Local_433.f_73.f_10.f_2 = 246214;
	Local_433.f_73.f_13 = 246144;
	Local_433.f_73.f_13.f_1 = 246131;
	Local_433.f_73.f_13.f_2 = 245929;
	Local_433.f_73.f_18.f_1 = 245916;
	Local_433.f_73.f_53.f_4 = 245896;
	Local_433.f_73.f_70 = 245887;
	Local_433.f_188.f_12 = 245878;
	Local_433.f_188.f_20 = 245869;
	Local_433.f_188.f_21 = 245722;
	Local_433.f_188.f_16 = 245713;
	Local_433.f_235.f_11 = 245704;
	Local_433.f_235.f_12 = 245689;
	Local_433.f_235 = 245680;
	Local_433.f_249 = 194198;
	Local_433.f_250 = 245637;
	Local_433.f_250.f_1 = 245628;
	Local_433.f_252 = 245603;
	Local_433.f_257.f_2 = 245594;
	Local_433.f_257.f_5 = 245585;
}

int func_1541(var uParam0)
{
	return 1;
}

int func_1542(var uParam0)
{
	return 0;
}

bool func_1543(var uParam0)
{
	if (func_6(0, 1))
	{
		return false;
	}
	return func_1289();
}

int func_1544(var uParam0, var uParam1, var uParam2)
{
	return 1;
}

int func_1545(int iParam0)
{
	if (func_83(iParam0, 2))
	{
		return 3000;
	}
	if (func_83(iParam0, 6))
	{
		return 6500;
	}
	return 10000;
}

int func_1546(var uParam0)
{
	return 1;
}

bool func_1547(var uParam0)
{
	return func_1024() == 42;
}

int func_1548()
{
	return 1;
}

int func_1549(var uParam0, var uParam1)
{
	return 0;
}

struct<30> func_1550(var uParam0)
{
	struct<30> Var0;

	Var0.f_4 = 1125515264;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0.f_8 = 1082130432;
	Var0.f_9 = 1176255488;
	Var0.f_10 = 1;
	Var0.f_13 = 1;
	Var0.f_15 = 2;
	Var0.f_22 = 2;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_29 = 1123024896;
	Var0.f_1 = 1;
	Var0.f_5 = 0;
	Var0.f_6 = 1;
	Var0.f_10 = 0;
	Var0.f_12 = 1;
	Var0.f_4 = 150f;
	Var0 = 0f;
	Var0.f_27 = 0;
	return Var0;
}

int func_1551(var uParam0, var uParam1, var uParam2)
{
	return 0;
}

int func_1552(var uParam0)
{
	return 0;
}

int func_1553(var uParam0)
{
	return 1;
}

void func_1554(var uParam0, int iParam1)
{
	WEAPON::SET_CURRENT_PED_WEAPON(iParam1, joaat("WEAPON_UNARMED"), true);
}

int func_1555()
{
	return joaat("FIRING_PATTERN_FULL_AUTO");
}

void func_1556(var uParam0, bool bParam1)
{
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_1);
	Stack.Push(MISC::IS_STRING_NULL_OR_EMPTY(StackVal));
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_1);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_PUSH_UPS")));
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_1);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_BUM_SLUMPED")));
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_1);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SUNBATHE_BACK")));
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_1);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_LEDGE_EATING")));
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_1);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_STEPS")));
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_1);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_WALL")));
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_1);
	if (StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_LEDGE"))
	{
		return;
	}
	PED::_0xF1C03A5352243A30(bParam1);
}

float func_1557(var uParam0)
{
	return 299.9f;
}

Vector3 func_1558(int iParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_24[iParam0 /*22*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_1270.f_24[iParam0 /*22*/]), false))
		{
			return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_1270.f_24[iParam0 /*22*/]), true);
		}
	}
	return 0f, 0f, 0f;
}

int func_1559(var uParam0)
{
	return 1;
}

char* func_1560(var uParam0)
{
	return "";
}

char* func_1561(var uParam0)
{
	return "";
}

void func_1562(int iParam0)
{
	TASK::CLEAR_PED_TASKS(iParam0);
}

int func_1563(int iParam0)
{
	if (func_39(iParam0, 14))
	{
		return 9;
	}
	return 1;
}

float func_1564(var uParam0)
{
	return 3f;
}

int func_1565(var uParam0)
{
	return -1;
}

int func_1566(var uParam0)
{
	return -1;
}

var func_1567(int iParam0)
{
	return Local_218.f_28.f_1[iParam0 /*20*/].f_8;
}

var func_1568(var uParam0)
{
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_105);
	return StackVal;
}

Vector3 func_1569(var uParam0)
{
	Stack.Push(uParam0);
	Call_Loc(Local_433.f_73.f_104);
	return StackVal, StackVal, StackVal;
}

char* func_1570(int iParam0)
{
	if (Local_218.f_28.f_1[iParam0 /*20*/].f_10 != -1)
	{
		return func_1571(&(Local_218.f_190[Local_218.f_28.f_1[iParam0 /*20*/].f_10 /*8*/]));
	}
	return "";
}

var func_1571(var uParam0)
{
	return uParam0;
}

void func_1572(int iParam0)
{
	func_475(iParam0, 134096);
	func_475(iParam0, 134233);
	func_475(iParam0, 134048);
	func_475(iParam0, 134127);
	func_475(iParam0, 134072);
}

void func_1573(var uParam0)
{
}

var func_1574(int iParam0)
{
	return Local_218.f_28.f_1[iParam0 /*20*/].f_6;
}

Vector3 func_1575(int iParam0)
{
	return Local_218.f_28.f_1[iParam0 /*20*/].f_3;
}

int func_1576(var uParam0)
{
	return 1;
}

var func_1577(int iParam0)
{
	return Local_218.f_28.f_1[iParam0 /*20*/].f_7;
}

var func_1578(int iParam0)
{
	Stack.Push(func_73(iParam0, 16));
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_99);
	if (StackVal && StackVal)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_99.f_2);
		return StackVal;
	}
	return Local_218.f_28.f_1[iParam0 /*20*/].f_6;
}

Vector3 func_1579(int iParam0)
{
	Stack.Push(func_73(iParam0, 16));
	Stack.Push(iParam0);
	Call_Loc(Local_433.f_73.f_99);
	if (StackVal && StackVal)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_433.f_73.f_99.f_1);
		return StackVal, StackVal, StackVal;
	}
	return Local_218.f_28.f_1[iParam0 /*20*/].f_3;
}

var func_1580(int iParam0)
{
	return Local_218.f_28.f_1[iParam0 /*20*/].f_2;
}

int func_1581(var uParam0)
{
	switch (func_1024())
	{
		case 25:
		case 27:
		case 28:
		case 26:
			return 1;
		default:
			break;
	}
	return 0;
}

Vector3 func_1582(var uParam0)
{
	return 0f, 0f, 0f;
}

int func_1583(var uParam0)
{
	return 1;
}

Vector3 func_1584()
{
	return Local_218.f_136[0 /*12*/];
	return 0f, 0f, 0f;
}

int func_1585()
{
	return 1;
}

float func_1586()
{
	return 1f;
}

int func_1587()
{
	return 600000;
}

int func_1588()
{
	return 0;
}

int func_1589()
{
	return 0;
}

int func_1590()
{
	return 0;
}

int func_1591()
{
	return 0;
}

var func_1592()
{
	return Local_218.f_125;
}

int func_1593()
{
	return 1;
}

int func_1594()
{
	return 1;
}

int func_1595()
{
	return 1;
}

void func_1596()
{
	func_520(0, 4, 242395);
	func_503(0, 1);
	func_502(1, 2, 4, 5, 3, 242395, 242395, 242395, 242395, 1);
	func_520(3, 44, 242395);
}

void func_1597()
{
	func_529(0, 4);
	func_527(0, 1, 244212);
	func_529(1, 25);
	func_527(1, 2, 244148);
	func_529(2, 27);
	func_527(2, 3, 244127);
	func_529(3, 44);
	func_1506(3, 243738);
}

void func_1598(var uParam0)
{
	Global_1681961.f_4713 = 0;
	Global_1681961.f_4714 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		*uParam0 = { func_1599() };
	}
}

struct<2> func_1599()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1000;
	Var0 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
	Var0.f_1 = NETWORK::_0x638A3A81733086DB();
	return Var0;
}

void func_1600()
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_408() != false;
	bVar1 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	if (func_1626())
	{
		func_1616(0, 0, 0);
	}
	func_965(0);
	OBJECT::_0x0BF3B3BD47D79C08(Local_218.f_10.f_5[0 /*12*/].f_2, -1);
	func_1234(0, func_1236(iLocal_1225));
	func_1614(bVar0);
	if (bVar1)
	{
		func_1610(Local_1270.f_164);
		func_1609();
		if (func_732(bLocal_1216))
		{
			func_753(0);
		}
	}
	func_915(1, 1, 1);
	func_522();
	func_1608();
	func_1365(0);
	if (bVar0)
	{
		func_1607();
		func_1606();
		func_1604();
		func_1602();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_688();
		}
	}
	if (Local_433.f_5 != 0)
	{
		Call_Loc(Local_433.f_5);
	}
	func_1601();
	func_1229(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1601()
{
}

void func_1602()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_218.f_112)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_98[iVar0 /*5*/]))
		{
			if (func_124(iVar0, 26))
			{
				NETWORK::FADE_OUT_LOCAL_PLAYER(NETWORK::NET_TO_ENT(Local_1270.f_98[iVar0 /*5*/]), 0, 1);
			}
			if (func_1603(iVar0))
			{
				if (func_118(Local_1270.f_98[iVar0 /*5*/]))
				{
					func_1032(&(Local_1270.f_98[iVar0 /*5*/]));
				}
			}
			else
			{
				func_108(&(Local_1270.f_98[iVar0 /*5*/]));
			}
		}
		iVar0++;
	}
}

bool func_1603(int iParam0)
{
	return false;
}

void func_1604()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_218.f_95)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_91[iVar0 /*6*/]))
		{
			if (func_135(iVar0, 32) && !func_1243(NETWORK::NET_TO_VEH(Local_1270.f_91[iVar0 /*6*/]), 0, 1))
			{
				NETWORK::FADE_OUT_LOCAL_PLAYER(NETWORK::NET_TO_ENT(Local_1270.f_91[iVar0 /*6*/]), 0, 1);
			}
			if (NETWORK::NET_TO_VEH(Local_1270.f_91[iVar0 /*6*/]) == VEHICLE::GET_LAST_DRIVEN_VEHICLE())
			{
				VEHICLE::CLEAR_LAST_DRIVEN_VEHICLE();
			}
			if (func_1605(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1270.f_91[iVar0 /*6*/]))
				{
					func_1032(&(Local_1270.f_91[iVar0 /*6*/]));
				}
			}
			else
			{
				func_108(&(Local_1270.f_91[iVar0 /*6*/]));
			}
		}
		iVar0++;
	}
}

bool func_1605(int iParam0)
{
	bool bVar0;

	bVar0 = !func_1243(NETWORK::NET_TO_VEH(Local_1270.f_91[iParam0 /*6*/]), 0, 1);
	if (func_368(iParam0, 2) && bVar0)
	{
		return true;
	}
	return false;
}

void func_1606()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < Local_218.f_28)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_24[iVar0 /*22*/]))
		{
			bVar1 = NETWORK::NET_TO_PED(Local_1270.f_24[iVar0 /*22*/]);
			if (!ENTITY::IS_ENTITY_DEAD(bVar1, false))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1270.f_24[iVar0 /*22*/]))
				{
					if (PED::GET_PED_TYPE(bVar1) == 6)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar1, false);
						if (PED::IS_PED_USING_ANY_SCENARIO(bVar1))
						{
							PED::_0xF1C03A5352243A30(bVar1);
						}
						TASK::CLEAR_PED_TASKS(bVar1);
						PED::SET_PED_KEEP_TASK(bVar1, false);
					}
				}
				PED::REMOVE_PED_FROM_GROUP(bVar1);
			}
			if (Local_433.f_73.f_114 != 0)
			{
				Stack.Push(iVar0);
				Call_Loc(Local_433.f_73.f_114);
			}
			func_108(&(Local_1270.f_24[iVar0 /*22*/]));
		}
		iVar0++;
	}
}

void func_1607()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1270.f_2[iVar0]))
			{
				func_1032(&(Local_1270.f_2[iVar0]));
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1270.f_2.f_18[iVar0]))
		{
			if (func_118(Local_1270.f_2.f_18[iVar0]))
			{
				func_1032(&(Local_1270.f_2.f_18[iVar0]));
			}
			func_108(&(Local_1270.f_2.f_18[iVar0]));
		}
		iVar0++;
	}
}

void func_1608()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_218.f_164)
	{
		func_905(&(uLocal_1209[iVar0]));
		iVar0++;
	}
}

void func_1609()
{
	vector3 vVar0;

	vVar0 = { func_1014() };
	MISC::CLEAR_AREA_OF_VEHICLES(vVar0, 80f, false, false, true, true, true, false);
}

void func_1610(struct<2> Param0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_694(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/]))
		{
			if (func_393(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/]))
			{
				Var1 = { func_1612(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/]) };
				if (func_1611(Var1, Param0))
				{
					Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/].f_1 = -1;
				}
			}
			else
			{
				Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/].f_1 = -1;
			}
		}
		iVar0++;
	}
	if (func_1280(PLAYER::PLAYER_ID()) <= 0)
	{
		MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579), 0);
		func_1224();
	}
}

bool func_1611(struct<2> Param0, struct<2> Param2)
{
	if (!func_391(Param0))
	{
		return false;
	}
	if (Param0 == Param2 && Param0.f_1 == Param2.f_1)
	{
		return true;
	}
	return false;
}

struct<2> func_1612(struct<2> Param0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = func_1613(Param0);
	if (iVar0 < 0 || iVar0 >= 48)
	{
		Var1 = -1;
		Var1.f_1 = -1000;
		return Var1;
	}
	return Global_2419327.f_199.f_1[iVar0 /*14*/].f_11;
}

int func_1613(struct<2> Param0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_394(Param0, Global_2419327.f_199.f_1[iVar0 /*14*/].f_1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1614(bool bParam0)
{
	if (bParam0)
	{
	}
	else
	{
		func_1615();
	}
}

void func_1615()
{
}

void func_1616(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		func_1617(bLocal_1216, 0, iParam1, bParam2);
		func_423(26);
	}
	else
	{
		func_1617(bLocal_1216, 1, iParam1, bParam2);
		func_709(26);
	}
}

void func_1617(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
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
	int iVar27;
	int iVar28;

	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_1625())
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
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(bParam0, bParam1, iVar0);
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
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_670())
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
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0) && (PLAYER::IS_PLAYER_PLAYING(bParam0) || bParam3 == 1))
		{
			if (bParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(bParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(bParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::SET_PLAYER_VISIBLE_LOCALLY(1);
				}
				else if (bVar14 || (!func_25(PLAYER::PLAYER_ID(), 0) && !func_279()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::SET_PLAYER_VISIBLE_LOCALLY(0);
					}
					Global_2425662[bParam0 /*421*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_1622(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_1621(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_SOMETHING(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(bParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(bParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(iVar27))
				{
					PED::_0x4668D80430D6C299(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_1620();
					func_1619();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
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
				if (!func_1621(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_SOMETHING(iVar27, true);
						}
					}
					if (func_1618(Global_4456448.f_232883))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(bParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(bParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(bParam0, bParam1, iVar28);
		}
	}
}

bool func_1618(int iParam0)
{
	return iParam0 == 17;
}

void func_1619()
{
	vector3 vVar0;

	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_1620()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

bool func_1621(int iParam0)
{
	int iVar0;

	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return true;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

void func_1622(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
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
				func_1624();
			}
			else if (!MISC::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (MISC::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_25(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1, 1);
		}
		else
		{
			NETWORK::_GET_DATE_AND_TIME_FROM_UNIX_EPOCH(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_1623(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_1623(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_1624()
{
	int iVar0;

	if (!NETWORK::_0x5C707A667DF8B9FA())
	{
		if (!MISC::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2359302.f_67), 2);
			MISC::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_1625()
{
	if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return true;
	}
	return false;
}

bool func_1626()
{
	return func_434(26);
}

void func_1627(bool bParam0, bool bParam1)
{
	if (!func_434(31))
	{
		return;
	}
	if (!func_434(0))
	{
		func_1629(bParam0, bParam1);
		Local_1189.f_2 = (NETWORK::_0xF12E6CD06C73D69E() - Local_1189.f_1);
		func_1628();
		func_423(0);
	}
}

void func_1628()
{
}

void func_1629(bool bParam0, bool bParam1)
{
	int iVar0;

	Global_1674356.f_2 = Local_1270.f_137;
	Global_1674356.f_3 = Local_1270.f_138;
	iVar0 = func_1753(func_408(), bParam0, bParam1);
	Local_1189 = iVar0;
	func_1630(bParam0, iVar0, 0, 0, -1, -1, -1, -1, -1, 0);
}

void func_1630(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_675(PLAYER::PLAYER_ID());
		Global_1674635.f_4 = func_1752();
		Global_1674635.f_5 = func_1751();
		if (func_882(PLAYER::PLAYER_ID()) || func_682(PLAYER::PLAYER_ID()))
		{
			Global_1674635.f_6 = 1;
		}
		else
		{
			Global_1674635.f_6 = 0;
		}
		Global_1674635.f_1 = func_1745(bParam9);
		Global_1674635.f_8 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674635.f_9 = func_956(bParam0);
		Global_1674635.f_10 = iParam1;
		Global_1674635.f_17 = Global_1674635.f_2;
		Global_1674635.f_18 = Global_1674635.f_2;
		Global_1674635.f_19 = func_1742();
		Global_1674635.f_21 = (Global_1674635.f_8 - Global_1674635.f_7);
		if (func_537(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674635.f_23 = func_956(func_177(1));
		}
		Global_1674635.f_24 = func_1741(PLAYER::PLAYER_ID());
		Global_1674635.f_28 = func_1090(PLAYER::PLAYER_ID());
		if (Global_1674635.f_24 > 2)
		{
			Global_1674635.f_24 = 2;
		}
		func_1739(iVar0);
	}
	else
	{
		iVar0 = func_176(PLAYER::PLAYER_ID());
	}
	if (func_1738(iVar0))
	{
		Global_1674374.f_2 = func_1752();
		Global_1674374.f_3 = func_1751();
		Global_1674374.f_50 = iParam4;
		Global_1674374.f_51 = iParam5;
		Global_1674374.f_10 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674374.f_20 = (Global_1674374.f_10 - Global_1674374.f_9);
		Global_1674374.f_12 = iParam1;
		Global_1674374.f_19 = func_1732(iVar0, bParam0, func_1737(bParam3));
		if (bParam0)
		{
			Global_1674374.f_11 = 1;
		}
		else
		{
			Global_1674374.f_11 = 0;
		}
		if ((func_881(PLAYER::PLAYER_ID()) || func_880(PLAYER::PLAYER_ID())) || func_680(PLAYER::PLAYER_ID()))
		{
			Global_1674374.f_8 = 1;
		}
		else
		{
			Global_1674374.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1674374.f_43 = 0;
			Global_1674374.f_45 = func_1731(func_957(), iParam2);
			Global_1674374.f_47 = iParam7;
			Global_1674374.f_46 = iParam6;
			Global_1674374.f_52 = func_1730(func_957(), iParam2);
		}
		func_1728(iVar0);
	}
	else if (func_1727(iVar0))
	{
		Global_1674428.f_2 = func_1752();
		Global_1674428.f_3 = func_1751();
		Global_1674428.f_10 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674428.f_19 = (Global_1674428.f_10 - Global_1674428.f_9);
		Global_1674428.f_12 = iParam1;
		if (bParam0)
		{
			Global_1674428.f_11 = 1;
		}
		else
		{
			Global_1674428.f_11 = 0;
		}
		if ((func_881(PLAYER::PLAYER_ID()) || func_880(PLAYER::PLAYER_ID())) || func_680(PLAYER::PLAYER_ID()))
		{
			Global_1674428.f_8 = 1;
		}
		else
		{
			Global_1674428.f_8 = 0;
		}
		func_1725(iVar0);
	}
	else if (func_1724(iVar0))
	{
		Global_1674491.f_2 = func_1752();
		Global_1674491.f_3 = func_1751();
		Global_1674491.f_9 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674491.f_18 = (Global_1674491.f_9 - Global_1674491.f_8);
		Global_1674491.f_11 = iParam1;
		Global_1674491.f_7 = func_1742();
		Global_1674491.f_42 = func_1722(func_27(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = func_1104(iVar1);
		Global_1674491.f_28 = iVar2;
		Global_1674491.f_29 = func_956((func_1721(iVar1) || func_1720(iVar1)));
		Global_1674491.f_30 = func_956(func_1719(iVar1));
		Global_1674491.f_32 = func_956(func_1718(iVar1));
		Global_1674491.f_33 = func_956(func_1717(iVar1));
		Global_1674491.f_34 = func_956(func_1716(iVar1));
		Global_1674491.f_35 = func_956(func_1715(0, iVar1) == 1);
		Global_1674491.f_36 = func_956(func_1714(iVar1));
		Global_1674491.f_37 = func_956(func_1204(iVar1));
		Global_1674491.f_38 = func_956(func_1713(iVar1));
		Global_1674491.f_39 = func_956(func_1709(iVar1, iVar2, 0));
		Global_1674491.f_40 = func_956(func_1709(iVar1, iVar2, 2));
		Global_1674491.f_41 = func_956(func_1709(iVar1, iVar2, 1));
		if (func_1708(iVar1))
		{
			Global_1674491.f_31 = 2;
		}
		else if (func_1707(iVar1))
		{
			Global_1674491.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1674491.f_10 = 1;
		}
		else
		{
			Global_1674491.f_10 = 0;
		}
		if ((func_881(PLAYER::PLAYER_ID()) || func_880(PLAYER::PLAYER_ID())) || func_680(PLAYER::PLAYER_ID()))
		{
			Global_1674491.f_6 = 1;
		}
		else
		{
			Global_1674491.f_6 = 0;
		}
		Global_1674491.f_21 = -2;
		Global_1674491.f_22 = -2;
		func_1705(iVar0);
	}
	else if (func_1704(iVar0))
	{
		Global_1674535.f_2 = func_1752();
		Global_1674535.f_3 = func_1751();
		if ((func_881(PLAYER::PLAYER_ID()) || func_880(PLAYER::PLAYER_ID())) || func_680(PLAYER::PLAYER_ID()))
		{
			Global_1674535.f_6 = 1;
		}
		else
		{
			Global_1674535.f_6 = 0;
		}
		Global_1674535.f_9 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674535.f_10 = func_956(bParam0);
		Global_1674535.f_11 = iParam1;
		Global_1674535.f_17 = func_1703(func_841());
		Global_1674535.f_18 = (Global_1674535.f_9 - Global_1674535.f_8);
		Global_1674535.f_20 = iParam8;
		Global_1674535.f_21 = -2;
		Global_1674535.f_22 = -2;
		Global_1674535.f_27 = func_1702();
		Global_1674535.f_29 = func_154(6107, -1, 0);
		Global_1674535.f_30 = func_154(6103, -1, 0);
		Global_1674535.f_31 = func_154(6104, -1, 0);
		Global_1674535.f_32 = func_154(6106, -1, 0);
		Global_1674535.f_33 = func_154(6105, -1, 0);
		Global_1674535.f_34 = func_154(6108, -1, 0);
		Global_1674535.f_36 = func_956(func_177(1));
		Global_1674535.f_37 = func_1699();
		func_1689();
		func_1687(iVar0);
	}
	else if (func_589(iVar0))
	{
		Global_1674589.f_2 = func_1752();
		Global_1674589.f_3 = func_1751();
		if ((func_881(PLAYER::PLAYER_ID()) || func_880(PLAYER::PLAYER_ID())) || func_680(PLAYER::PLAYER_ID()))
		{
			Global_1674589.f_6 = 1;
		}
		else
		{
			Global_1674589.f_6 = 0;
		}
		Global_1674589.f_9 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674589.f_10 = func_956(bParam0);
		Global_1674589.f_11 = iParam1;
		Global_1674589.f_18 = (Global_1674589.f_9 - Global_1674589.f_8);
		Global_1674589.f_20 = iParam8;
		Global_1674589.f_23 = Global_786547;
		Global_1674589.f_36 = Global_786547.f_1;
		Global_1674589.f_24 = func_154(6157, -1, 0);
		Global_1674589.f_25 = func_154(6162, -1, 0);
		Global_1674589.f_26 = func_154(6163, -1, 0);
		Global_1674589.f_27 = func_956((((func_1686() || func_1685()) || func_1684()) || func_1097(PLAYER::PLAYER_ID())));
		Global_1674589.f_28 = func_154(6164, -1, 0);
		Global_1674589.f_29 = func_956(func_1683());
		Global_1674589.f_35 = -1;
		Global_1674589.f_38 = -1;
		Global_1674589.f_39 = Global_1674589.f_4;
		Global_1674589.f_40 = Global_1674589.f_5;
		Global_1674589.f_41 = func_1752();
		Global_1674589.f_42 = func_956(func_177(1));
		Global_1674589.f_44 = Global_1674589.f_18;
		func_1681(iVar0);
	}
	else if (func_1678(iVar0))
	{
		if (Global_1674725.f_2 == -1)
		{
			Global_1674725.f_2 = func_1752();
		}
		if (Global_1674725.f_3 == -1)
		{
			Global_1674725.f_3 = func_1751();
		}
		if ((func_881(PLAYER::PLAYER_ID()) || func_880(PLAYER::PLAYER_ID())) || func_680(PLAYER::PLAYER_ID()))
		{
			Global_1674725.f_6 = 1;
		}
		else
		{
			Global_1674725.f_6 = 0;
		}
		Global_1674725.f_1 = func_1745(0);
		Global_1674725.f_7 = func_1742();
		Global_1674725.f_9 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674725.f_10 = func_956(bParam0);
		Global_1674725.f_11 = iParam1;
		if (func_957() != -1)
		{
			Global_1674725.f_17 = func_1677(func_957());
		}
		Global_1674725.f_18 = (Global_1674725.f_9 - Global_1674725.f_8);
		Global_1674725.f_19 = Global_2537071.f_6579;
		Global_1674725.f_28 = func_1090(PLAYER::PLAYER_ID());
		Global_1674725.f_29 = func_956(func_1676(PLAYER::PLAYER_ID()));
		Global_1674725.f_30 = func_956(func_1675(PLAYER::PLAYER_ID()));
		Global_1674725.f_31 = func_1674(PLAYER::PLAYER_ID());
		if (func_537(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674725.f_33 = func_956(func_177(1));
		}
		if (Global_1674725.f_34 > 2)
		{
			Global_1674725.f_34 = 2;
		}
		func_1672(iVar0);
	}
	else if (func_1671(iVar0))
	{
		Global_1674671.f_2 = func_1752();
		Global_1674671.f_3 = func_1751();
		if ((func_881(PLAYER::PLAYER_ID()) || func_880(PLAYER::PLAYER_ID())) || func_680(PLAYER::PLAYER_ID()))
		{
			Global_1674671.f_6 = 1;
		}
		else
		{
			Global_1674671.f_6 = 0;
		}
		Global_1674671.f_1 = func_1745(0);
		Global_1674671.f_9 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674671.f_10 = func_956(bParam0);
		Global_1674671.f_11 = iParam1;
		Global_1674671.f_18 = (Global_1674671.f_9 - Global_1674671.f_8);
		Global_1674671.f_28 = func_1090(PLAYER::PLAYER_ID());
		if (Global_1674671.f_28)
		{
			Global_1674671.f_29 = func_1670(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1674671.f_29 = 0;
		}
		Global_1674671.f_30 = func_1654(PLAYER::PLAYER_ID(), 4, -1);
		Global_1674671.f_31 = func_1674(PLAYER::PLAYER_ID());
		Global_1674671.f_32 = func_956(func_1653(PLAYER::PLAYER_ID()));
		Global_1674671.f_33 = func_956(func_1652(PLAYER::PLAYER_ID()));
		Global_1674671.f_34 = func_956(func_1651(PLAYER::PLAYER_ID()));
		Global_1674671.f_35 = func_956(func_1650(PLAYER::PLAYER_ID()));
		Global_1674671.f_36 = func_1649(PLAYER::PLAYER_ID());
		Global_1674671.f_37 = func_1648(PLAYER::PLAYER_ID());
		Global_1674671.f_39 = func_1647(PLAYER::PLAYER_ID());
		if (func_537(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674671.f_41 = func_956(func_177(1));
		}
		if (Global_1674671.f_42 > 2)
		{
			Global_1674671.f_42 = 2;
		}
		func_1645(iVar0);
	}
	else if (func_1644(iVar0))
	{
		Global_1674809.f_2 = func_1752();
		Global_1674809.f_3 = func_1751();
		Global_1674809.f_4 = func_1643(func_957());
		Global_1674809.f_5 = func_1642(func_957());
		if ((func_881(PLAYER::PLAYER_ID()) || func_880(PLAYER::PLAYER_ID())) || func_680(PLAYER::PLAYER_ID()))
		{
			Global_1674809.f_6 = 1;
		}
		else
		{
			Global_1674809.f_6 = 0;
		}
		Global_1674809.f_7 = func_1742();
		Global_1674809.f_9 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674809.f_10 = func_956(bParam0);
		Global_1674809.f_11 = iParam1;
		if (func_841() != -1)
		{
			Global_1674809.f_17 = func_1677(func_841());
		}
		Global_1674809.f_18 = (Global_1674809.f_9 - Global_1674809.f_8);
		Global_1674809.f_21 = 1;
		Global_1674809.f_22 = 1;
		Global_1674809.f_25 = func_1641(PLAYER::PLAYER_ID());
		Global_1674809.f_27 = func_956(func_1640(PLAYER::PLAYER_ID()));
		Global_1674809.f_28 = func_1637(21, -1);
		Global_1674809.f_29 = func_956(func_1636(PLAYER::PLAYER_ID()));
		func_1634(iVar0);
	}
	else if (func_1633(iVar0))
	{
		Global_1674884.f_6 = func_1643(func_957());
		Global_1674884.f_7 = func_1642(func_957());
		if (func_537(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674884.f_8 = func_956(func_177(1));
		}
		Global_1674884.f_10 = func_1742();
		Global_1674884.f_11 = 1;
		Global_1674884.f_13 = (NETWORK::_0xF12E6CD06C73D69E() - Global_1702973);
		Global_1674884.f_14 = iParam1;
		Global_1674884.f_19 = 1;
		Global_1674884.f_20 = 1;
		func_1631(iVar0);
	}
	else
	{
		Global_1674356.f_6 = NETWORK::_0xF12E6CD06C73D69E();
		if (bParam0)
		{
			Global_1674356.f_7 = 1;
		}
		else
		{
			Global_1674356.f_7 = 0;
		}
		Global_1674356.f_8 = iParam1;
		if (Global_1674356.f_4 == 0)
		{
			if ((func_881(PLAYER::PLAYER_ID()) || func_880(PLAYER::PLAYER_ID())) || func_680(PLAYER::PLAYER_ID()))
			{
				Global_1674356.f_4 = 1;
			}
		}
	}
}

void func_1631(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	UNK_0x9CA4259CC8E87599(&Global_1674884);
	func_1632();
}

void func_1632()
{
	struct<36> Var0;

	Global_1674884 = { Var0 };
	Global_1674884.f_23 = 0;
	Global_1674884.f_22 = 0;
	Global_1674884.f_21 = 0;
}

bool func_1633(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return true;
		default:
			break;
	}
	return false;
}

void func_1634(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	UNK_0x62CC3DEF90BBBB82(&Global_1674809);
	func_1635();
}

void func_1635()
{
	struct<31> Var0;

	Global_1674809 = { Var0 };
}

bool func_1636(int iParam0)
{
	if (iParam0 != func_68())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_369.f_2, 6);
	}
	return false;
}

int func_1637(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_27();
	}
	if (iParam0 == 7 && !Global_262145.f_16984)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_1639(iParam0);
		if (iVar1 == 0 && func_154(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_1638(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_1090(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1388066[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2586214[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 25)
		{
			return 0;
		}
		return Global_2586065[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_1638(int iParam0)
{
	if (!Global_262145.f_23663)
	{
		return false;
	}
	return func_154(7207, iParam0, 0) != 0;
}

int func_1639(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

bool func_1640(int iParam0)
{
	if (iParam0 != func_68())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_369 != 0;
	}
	return false;
}

int func_1641(bool bParam0)
{
	if (func_176(bParam0) == 243)
	{
		return func_174(bParam0);
	}
	return -1;
}

int func_1642(int iParam0)
{
	if (iParam0 == func_68())
	{
		return -1;
	}
	return Global_1628237[iParam0 /*615*/].f_11.f_8[1];
}

int func_1643(int iParam0)
{
	if (iParam0 == func_68())
	{
		return -1;
	}
	return Global_1628237[iParam0 /*615*/].f_11.f_8[0];
}

bool func_1644(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return true;
		default:
			break;
	}
	return false;
}

void func_1645(int iParam0)
{
	STATS::_0x2D7A9B577E72385E(&Global_1674671);
	func_1646();
}

void func_1646()
{
	struct<54> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1674671 = { Var0 };
}

bool func_1647(int iParam0)
{
	if (iParam0 != func_68())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_334, 12);
	}
	return false;
}

bool func_1648(int iParam0)
{
	if (iParam0 != func_68())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_334, 10);
	}
	return false;
}

bool func_1649(int iParam0)
{
	if (iParam0 != func_68())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_334, 11);
	}
	return false;
}

bool func_1650(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 4);
}

bool func_1651(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 3);
}

bool func_1652(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 2);
}

bool func_1653(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 1);
}

bool func_1654(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0 == func_68() || !func_1669(iParam1))
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			return func_1664(bParam0, iParam2);
		case 1:
			return func_1662(bParam0, iParam2);
		case 3:
			return func_1661(bParam0);
		case 2:
			return func_1656(bParam0, iParam2);
		case 4:
			return func_1655(bParam0);
		default:
			break;
	}
	return false;
}

bool func_1655(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 6);
}

bool func_1656(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_1660(bParam0);
		case 11:
			return func_1659(bParam0);
		case 12:
			return func_1658(bParam0);
		case 13:
			return func_1657(bParam0);
		default:
			break;
	}
	return false;
}

bool func_1657(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 15);
}

bool func_1658(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 14);
}

bool func_1659(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 13);
}

bool func_1660(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 12);
}

bool func_1661(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 5);
}

bool func_1662(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_1663(bParam0);
		case 6:
			return func_1653(bParam0);
		case 7:
			return func_1652(bParam0);
		case 8:
			return func_1651(bParam0);
		case 9:
			return func_1650(bParam0);
		default:
			break;
	}
	return false;
}

bool func_1663(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 0);
}

bool func_1664(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1668(bParam0);
		case 1:
			return func_1667(bParam0);
		case 2:
			return func_1666(bParam0);
		case 3:
			return func_1665(bParam0);
		case 4:
			return func_1674(bParam0);
		default:
			break;
	}
	return false;
}

bool func_1665(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 10);
}

bool func_1666(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 9);
}

bool func_1667(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 8);
}

bool func_1668(bool bParam0)
{
	if (bParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 7);
}

bool func_1669(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_1670(bool bParam0)
{
	int iVar0;

	if (bParam0 == func_68())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_1654(bParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_1654(bParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_1654(bParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_1654(bParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_1671(int iParam0)
{
	if (iParam0 == 237)
	{
		return true;
	}
	return false;
}

void func_1672(int iParam0)
{
	STATS::_0x830C3A44EB3F2CF9(&Global_1674725);
	func_1673();
}

void func_1673()
{
	struct<39> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1674725 = { Var0 };
}

bool func_1674(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_351, 31);
}

bool func_1675(int iParam0)
{
	if (iParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_322.f_1, 0);
}

bool func_1676(int iParam0)
{
	if (iParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_322.f_1, 19);
}

var func_1677(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_211.f_6;
}

bool func_1678(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_1679(func_1680(PLAYER::PLAYER_ID()))))
	{
		return true;
	}
	return false;
}

bool func_1679(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

int func_1680(bool bParam0)
{
	if (func_176(bParam0) == 237 || func_176(bParam0) == 250)
	{
		return func_174(bParam0);
	}
	return -1;
}

void func_1681(int iParam0)
{
	STATS::_PLAYSTATS_H2_FMPREP_END(&Global_1674589);
	func_1682();
}

void func_1682()
{
	struct<46> Var0;

	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1674589 = { Var0 };
	Global_1674589.f_16 = 0;
}

bool func_1683()
{
	return func_154(6156, -1, 0) != 0;
}

bool func_1684()
{
	return func_154(6164, -1, 0) == 3;
}

bool func_1685()
{
	return func_154(6164, -1, 0) == 2;
}

bool func_1686()
{
	return func_154(6164, -1, 0) == 1;
}

void func_1687(int iParam0)
{
	STATS::_PLAYSTATS_SMUG_MISSION_ENDED(&Global_1674535);
	func_1688();
}

void func_1688()
{
	struct<54> Var0;

	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674535 = { Var0 };
	Global_1674535.f_23 = 0;
	Global_1674535.f_24 = 0;
	Global_1674535.f_16 = 0;
}

void func_1689()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_1692(12));
		func_1691(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323615[iVar1 /*141*/].f_66 != 0 && func_216(Global_1323615[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2537071.f_896 != iVar1)
				{
					if (func_1690(Global_1323615[iVar1 /*141*/].f_66))
					{
						if (Global_1323615[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1323615[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1674535.f_38 = iVar3;
								break;
							case 1:
								Global_1674535.f_39 = iVar3;
								break;
							case 2:
								Global_1674535.f_40 = iVar3;
								break;
							case 3:
								Global_1674535.f_41 = iVar3;
								break;
							case 4:
								Global_1674535.f_42 = iVar3;
								break;
							case 5:
								Global_1674535.f_43 = iVar3;
								break;
							case 6:
								Global_1674535.f_44 = iVar3;
								break;
							case 7:
								Global_1674535.f_45 = iVar3;
								break;
							case 8:
								Global_1674535.f_46 = iVar3;
								break;
							case 9:
								Global_1674535.f_47 = iVar3;
								break;
						}
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_1690(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BUZZARD"):
		case joaat("SAVAGE"):
		case joaat("VALKYRIE"):
		case joaat("HYDRA"):
		case joaat("CARGOBOB"):
		case joaat("CARGOBOB2"):
		case joaat("HAVOK"):
		case joaat("HUNTER"):
		case joaat("VOLATUS"):
		case joaat("SUPERVOLITO"):
		case joaat("SUPERVOLITO2"):
		case joaat("SWIFT"):
		case joaat("SWIFT2"):
		case joaat("FROGGER"):
		case joaat("MAVERICK"):
		case joaat("ANNIHILATOR"):
		case joaat("MOGUL"):
		case joaat("ROGUE"):
		case joaat("STARLING"):
		case joaat("SEABREEZE"):
		case joaat("MICROLIGHT"):
		case joaat("TULA"):
		case joaat("LAZER"):
		case joaat("PYRO"):
		case joaat("MOLOTOK"):
		case joaat("NOKOTA"):
		case joaat("HOWARD"):
		case joaat("BOMBUSHKA"):
		case joaat("ALPHAZ1"):
		case joaat("NIMBUS"):
		case joaat("LUXOR2"):
		case joaat("VELUM2"):
		case joaat("DODO"):
		case joaat("MILJET"):
		case joaat("BESRA"):
		case joaat("VESTRA"):
		case joaat("DUSTER"):
		case joaat("SHAMAL"):
		case joaat("CUBAN800"):
		case joaat("LUXOR"):
		case joaat("STUNT"):
		case joaat("MAMMATUS"):
		case joaat("TITAN"):
		case joaat("VELUM"):
		case joaat("AKULA"):
		case joaat("VOLATOL"):
		case joaat("SEASPARROW"):
			return true;
		default:
			break;
	}
	if (iParam0 == joaat("STRIKEFORCE"))
	{
		return true;
	}
	return false;
}

void func_1691(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10163)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1671199[iParam0] - 1);
		if (bParam2)
		{
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_1692(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 8:
			return 88;
		case 9:
			return 108;
		case 10:
			return 128;
		case 11:
			return 148;
		case 6:
			return 65;
		case 7:
			return 75;
		case 5:
			return -1;
		case 12:
			return 159;
		case 13:
			return 179;
		case 14:
			return 191;
		case 15:
			return 192;
		case 16:
			return 202;
		case 17:
			return 212;
		case 18:
			return 227;
		case 19:
			return 237;
		case 20:
			return 247;
		case 21:
			return 258;
		case 22:
			return 268;
		case 23:
			return 281;
		case 24:
			return 294;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_1639(iParam0);
		return func_1698(iVar0);
	}
	return (func_1693(iParam0, -1) * iParam0);
}

int func_1693(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_1694(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_664(iParam1))
			{
				return 0;
			}
			else if (func_340(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049922[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049922[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049922[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
		case 5:
			return 0;
		case 6:
			return 10;
		case 8:
		case 9:
		case 10:
			return 20;
		case 11:
			return 8;
		case 12:
			return 20;
		case 13:
			return 7;
		case 14:
			return 1;
		case 15:
		case 16:
		case 17:
			return 10;
		case 18:
		case 19:
		case 20:
			return 10;
		case 21:
			return 10;
		case 22:
			return 10;
	}
	return 0;
}

bool func_1694(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_1695(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_1695(PLAYER::PLAYER_ID(), 0))
		{
			return false;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return true;
		}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return true;
	}
	return false;
}

bool func_1695(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_68())
	{
		if (!func_1697(Global_1590373))
		{
			return false;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590373)
			{
				if (MISC::IS_BIT_SET(Global_2425662[Global_1590373 /*421*/].f_195, 24) || func_1696(Global_1590373))
				{
					return true;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 24);
}

bool func_1696(int iParam0)
{
	if (iParam0 != func_68())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 9);
	}
	return false;
}

bool func_1697(int iParam0)
{
	if (iParam0 != func_68())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 2);
	}
	return false;
}

int func_1698(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		case 2:
			return 223;
		case 1:
			return 224;
		default:
			break;
	}
	return -1;
}

int func_1699()
{
	int iVar0;

	iVar0 = func_1701();
	if (!func_1700())
	{
		if (func_957() != func_68())
		{
			iVar0 = func_1741(func_957()) + 1;
		}
	}
	return iVar0;
}

bool func_1700()
{
	return func_538(PLAYER::PLAYER_ID());
}

int func_1701()
{
	return func_1741(PLAYER::PLAYER_ID()) + 1;
}

int func_1702()
{
	return func_154(6113, -1, 0);
}

int func_1703(bool bParam0)
{
	if (func_537(bParam0, 1))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_451;
	}
	return -1;
}

bool func_1704(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return true;
		default:
			break;
	}
	return false;
}

void func_1705(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Global_1674491);
	func_1706();
}

void func_1706()
{
	struct<44> Var0;

	Global_1674491 = { Var0 };
	Global_1674491.f_23 = 0;
	Global_1674491.f_24 = 0;
	Global_1674491.f_16 = 0;
}

bool func_1707(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 12);
}

bool func_1708(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 13);
}

bool func_1709(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_1712(iParam0, iParam1))
	{
		iVar0 = func_1710(iParam0, iParam1);
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_5, iParam2);
	}
	return false;
}

int func_1710(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_1711(iParam1) && bParam0 != func_68())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_1711(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1712(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_1711(iParam1) && bParam0 != func_68())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_1713(int iParam0)
{
	if (iParam0 != func_68())
	{
		if ((MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 12) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 13)) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 14))
		{
			return true;
		}
	}
	return false;
}

bool func_1714(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (((((MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 3) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 4)) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 5)) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 0)) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 1)) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 2))
		{
			return true;
		}
	}
	return false;
}

int func_1715(int iParam0, int iParam1)
{
	if (iParam1 == func_68())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 0))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 3))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 6))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 9))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 12))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 15))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 18))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 21))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 24))
			{
				return 8;
			}
			break;
		case 1:
			if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 1))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 4))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 7))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 10))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 13))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 16))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 19))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 22))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 25))
			{
				return 8;
			}
			break;
		case 2:
			if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 2))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 5))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 8))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 11))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 14))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 17))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 20))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 23))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[iParam1 /*876*/].f_274.f_259, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

bool func_1716(int iParam0)
{
	if (iParam0 != func_68())
	{
		if ((MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 6) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 7)) || MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_259, 8))
		{
			return true;
		}
	}
	return false;
}

bool func_1717(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 8);
}

bool func_1718(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 7);
}

bool func_1719(int iParam0)
{
	if (iParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 9);
}

bool func_1720(int iParam0)
{
	if (iParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 11);
}

bool func_1721(int iParam0)
{
	if (iParam0 == func_68())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 10);
}

int func_1722(int iParam0, int iParam1)
{
	return func_154(func_1723(iParam1), iParam0, 0);
}

int func_1723(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		case 1:
			return 3927;
		case 2:
			return 3931;
		case 3:
			return 3935;
		case 4:
			return 3939;
		case 5:
			return 5450;
		default:
			break;
	}
	return 3898;
}

bool func_1724(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return true;
		default:
			break;
	}
	return false;
}

void func_1725(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0x7D8BA05688AD64C7(&Global_1674428);
	func_1726();
}

void func_1726()
{
	struct<63> Var0;

	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1674428 = { Var0 };
	Global_1674428.f_24 = 0;
	Global_1674428.f_25 = 0;
	Global_1674428.f_17 = 0;
}

bool func_1727(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return true;
		default:
			break;
	}
	return false;
}

void func_1728(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0xBF371CD2B64212FD(&Global_1674374);
	func_1729();
}

void func_1729()
{
	struct<54> Var0;

	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674374 = { Var0 };
	Global_1674374.f_29 = 0;
	Global_1674374.f_30 = 0;
	Global_1674374.f_17 = 0;
}

int func_1730(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = func_1709(iParam0, iParam1, 2);
	bVar1 = func_1709(iParam0, iParam1, 1);
	bVar2 = func_1709(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_1731(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == func_68())
	{
		return 0;
	}
	if (func_1711(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1732(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (func_1736(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17699;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17698;
		}
		else
		{
			iVar0 = Global_262145.f_17680;
		}
		iVar1 = 19;
	}
	else if (func_1735(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_815(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17679;
			iVar1 = 20;
		}
	}
	else if (func_1738(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17699;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17698;
		}
		else
		{
			iVar0 = Global_262145.f_17680;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		STATS::_PLAYSTATS_EARNED_MC_POINTS(func_1643(func_957()), func_1642(func_957()), func_1752(), func_1751(), iVar1, iVar0);
	}
	func_1734(iVar0);
	func_1733(iVar0);
	return iVar0;
}

void func_1733(int iParam0)
{
	int iVar0;

	iVar0 = func_154(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_490 = iVar0;
	func_572(3968, iVar0, -1, 1, 0);
}

void func_1734(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1628237[iVar0 /*615*/].f_11.f_489 = (Global_1628237[iVar0 /*615*/].f_11.f_489 + iParam0);
	if (Global_1628237[iVar0 /*615*/].f_11.f_489 < -9999)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_489 = 9999;
	}
	else if (Global_1628237[iVar0 /*615*/].f_11.f_489 > 9999)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_489 = 9999;
	}
}

bool func_1735(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1736(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1737(bool bParam0)
{
	if (bParam0)
	{
		return false;
	}
	if (func_881(PLAYER::PLAYER_ID()) || func_680(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

bool func_1738(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 148 && func_180(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_35, 1))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return true;
	}
	return false;
}

void func_1739(int iParam0)
{
	STATS::_0x316DB59CD14C1774(&Global_1674635);
	func_1740();
}

void func_1740()
{
	struct<36> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1674635 = { Var0 };
}

int func_1741(bool bParam0)
{
	if (func_69(bParam0) == func_68())
	{
		return 0;
	}
	return Global_1628237[bParam0 /*615*/].f_11.f_19;
}

int func_1742()
{
	int iVar0;

	if (func_1744())
	{
		return 4;
	}
	else if (func_1700())
	{
		if (func_1743(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_177(1))
	{
		iVar0 = func_1703(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_1304(1))
	{
		if (func_1743(func_957()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

bool func_1743(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 26);
}

bool func_1744()
{
	return func_840(PLAYER::PLAYER_ID());
}

int func_1745(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_675(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = func_176(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_1750(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		case 150:
			iVar2 = func_1748(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		case 237:
			iVar2 = func_1747(PLAYER::PLAYER_ID());
			if (func_1679(func_1680(PLAYER::PLAYER_ID())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		case 250:
			iVar2 = func_1747(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		case 238:
			iVar2 = func_1746(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		case 249:
			iVar2 = func_1746(PLAYER::PLAYER_ID());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		case 239:
			iVar1 = 600;
			break;
		case 240:
			iVar1 = 700;
			break;
		case 241:
			iVar1 = 800;
			break;
		case 242:
			iVar1 = 900;
			break;
		case 244:
			iVar1 = 1100;
			break;
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_1746(int iParam0)
{
	if (func_176(PLAYER::PLAYER_ID()) == 238 || func_176(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_499;
	}
	return -1;
}

int func_1747(int iParam0)
{
	if (func_176(PLAYER::PLAYER_ID()) == 237 || func_176(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_498;
	}
	return -1;
}

int func_1748(int iParam0)
{
	return func_1749(iParam0, 150);
}

int func_1749(int iParam0, int iParam1)
{
	if (func_675(iParam0) == iParam1)
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_496;
	}
	return -1;
}

int func_1750(int iParam0)
{
	return func_1749(iParam0, 236);
}

int func_1751()
{
	if (Global_1674356.f_3 != 0)
	{
		return Global_1674356.f_3;
	}
	return -1;
}

int func_1752()
{
	if (Global_1674356.f_2 != 0)
	{
		return Global_1674356.f_2;
	}
	return -1;
}

int func_1753(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 14:
			return 0;
		case 2:
			return 8;
		case 1:
			return 7;
		case 12:
			return 6;
		case 0:
			return 4;
		default:
			break;
	}
	if (func_1757() && func_1756())
	{
		return 13;
	}
	if (bParam1)
	{
		if (func_1754())
		{
			return 11;
		}
		else
		{
			return 1;
		}
	}
	return 2;
}

bool func_1754()
{
	if (!func_381())
	{
		return false;
	}
	if (func_1516() && func_1755(bLocal_1216) < func_7())
	{
		return true;
	}
	return (func_539(bLocal_1216) && !func_1516());
}

int func_1755(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 4) && func_536(bParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1756()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 33))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_1757()
{
	return func_7() > 0;
}

bool func_1758(struct<21> Param0)
{
	int iVar0;

	func_1764(func_1765(Param0), Param0);
	func_1762(0, -1, 0);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_1270.f_2.f_13[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_1270.f_134[iVar0] = -1;
		Local_1270.f_124[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_1246[iVar0] = func_412();
		iLocal_1248[iVar0] = func_412();
		Local_1164[iVar0 /*5*/].f_4 = func_68();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iLocal_164[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_88[iVar0] = -1;
		iVar0++;
	}
	Global_2535833.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < iLocal_1235)
	{
		iLocal_1235[iVar0] = -1;
		iVar0++;
	}
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_1270, 166);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_1436, 1185);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	iLocal_1225 = func_1761(Param0);
	iLocal_1226 = NETWORK::_0x638A3A81733086DB();
	iLocal_1226 = iLocal_1226;
	func_1760();
	func_1759();
	iLocal_1188 = PLAYER::GET_PLAYER_GROUP(bLocal_1216);
	return true;
}

void func_1759()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574967[iVar0], -347613984);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -347613984, Global_1574967[iVar0]);
		iVar0++;
	}
}

void func_1760()
{
}

int func_1761(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return 15;
		case 155:
			return 8;
		case 149:
			return 14;
		case 153:
			return 122;
		case 156:
			return 1;
		case 154:
			return 5;
		case 157:
			return 6;
		case 150:
			return 11;
		case 158:
			return 0;
		case 159:
			return 2;
		case 151:
			return 13;
		case 160:
			return 3;
		case 152:
			return 12;
		case 49:
			return 148;
		case 52:
			return 151;
		case 53:
			return 152;
		case 54:
			return 157;
		case 55:
			return 153;
		case 56:
			return 154;
		case 57:
			return 155;
		case 58:
			return 159;
		case 51:
			return 162;
		case 60:
			return 142;
		case 62:
			return 160;
		case 63:
			return 164;
		case 64:
			return 163;
		case 65:
			return 166;
		case 66:
			return 167;
		case 67:
			return 168;
		case 68:
			return 169;
		case 69:
			return 170;
		case 70:
			return 171;
		case 71:
			return 172;
		case 72:
			return 173;
		case 73:
			return 178;
		case 74:
			return 188;
		case 75:
			return 214;
		case 76:
			return 215;
		case 77:
			return 216;
		case 78:
			return 217;
		case 79:
			return 218;
		case 80:
			return 219;
		case 81:
			return 220;
		case 82:
			return 221;
		case 84:
			return 179;
		case 83:
			return 189;
		case 85:
			return 180;
		case 87:
			return 182;
		case 88:
			return 183;
		case 89:
			return 185;
		case 90:
			return 186;
		case 91:
			return 190;
		case 92:
			return 191;
		case 93:
			return 192;
		case 94:
			return 193;
		case 102:
			return 205;
		case 95:
			return 194;
		case 96:
			return 197;
		case 97:
			return 198;
		case 99:
			return 199;
		case 100:
			return 200;
		case 101:
			return 201;
		case 103:
			return 207;
		case 104:
			return 208;
		case 105:
			return 209;
		case 106:
			return 210;
		case 98:
			return 195;
		case 107:
			return 225;
		case 108:
			return 226;
		case 109:
			return 227;
		case 110:
			return 229;
		case 111:
			return 230;
		case 113:
			return 233;
		case 115:
			return 237;
		case 116:
			return 238;
		case 117:
			return 239;
		case 118:
			return 240;
		case 119:
			return 241;
		case 120:
			return 242;
		case 121:
			return 244;
		case 122:
			return 248;
		case 123:
			return 249;
		case 124:
			return 250;
		case 125:
			return 243;
		case 126:
			return 158;
		case 86:
			return 181;
		case 127:
			return 150;
		case 128:
			return 24;
		case 129:
			return 26;
		default:
			break;
	}
	return 256;
}

int func_1762(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1763();
			}
			else
			{
				return 0;
			}
		}
		if (!func_1125())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_1763();
					}
					else
					{
						return 0;
					}
				}
				if (func_1535())
				{
					if (!bParam2)
					{
						func_1763();
					}
					else
					{
						return 0;
					}
				}
				if (func_1533(157))
				{
					if (!bParam2)
					{
						func_1763();
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
					func_1763();
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
				func_1763();
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
			func_1763();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1763()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1764(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_1763();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_1765(int iParam0)
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

void func_1766(bool bParam0)
{
	bLocal_1216 = PLAYER::PLAYER_ID();
	bLocal_1217 = PLAYER::PLAYER_PED_ID();
	vLocal_1220 = { ENTITY::GET_ENTITY_COORDS(bLocal_1217, false) };
	bLocal_1212 = func_28(bLocal_1216, 0, 1);
	if (bParam0)
	{
		bLocal_1214 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
		iLocal_1218 = NETWORK::PARTICIPANT_ID_TO_INT();
		iLocal_1219 = NETWORK::PARTICIPANT_ID();
		bLocal_1215 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iLocal_1219);
	}
	if (bLocal_1212)
	{
		bLocal_1213 = PLAYER::IS_PLAYER_PLAYING(bLocal_1216);
	}
	else
	{
		bLocal_1213 = false;
	}
	bLocal_1214 = bLocal_1214;
	iLocal_1218 = iLocal_1218;
	iLocal_1219 = iLocal_1219;
	vLocal_1220 = { vLocal_1220 };
	bLocal_1215 = bLocal_1215;
	bLocal_1223 = func_660(1, 0, 1);
	bLocal_1224 = func_946();
}

