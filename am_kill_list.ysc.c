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
	struct<617> Local_80 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_697 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_709[4] = { 0, 0, 0, 0 };
	struct<18> Local_714[32];
	int iLocal_1291 = 0;
	int iLocal_1292 = 0;
	int iLocal_1293[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1299 = 0;
	int iLocal_1300 = 0;
	int iLocal_1301 = 0;
	float fLocal_1302 = 0f;
	int iLocal_1303[4] = { 0, 0, 0, 0 };
	struct<8> Local_1308[24];
	int iLocal_1501 = 0;
	int iLocal_1502 = 0;
	int iLocal_1503 = 0;
	int iLocal_1504[4] = { 0, 0, 0, 0 };
	int iLocal_1509[4] = { 0, 0, 0, 0 };
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	int iLocal_1516 = 0;
	struct<42> Local_1517[32];
	struct<104> Local_2862 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = -1;
	var uLocal_2972 = -1;
	var uLocal_2973 = -1;
	var uLocal_2974 = -1;
	var uLocal_2975 = -1;
	var uLocal_2976 = -1;
	var uLocal_2977 = 0;
	var uLocal_2978 = 32;
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
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
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
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
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
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
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
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
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
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
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
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
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
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
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
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
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
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
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
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
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
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
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
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
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
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
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
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
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
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
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
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
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
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
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
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
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
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
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
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
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
	int iLocal_3402 = 0;
	int iLocal_3403 = 0;
	int iLocal_3404 = 0;
	int iLocal_3405[4] = { 0, 0, 0, 0 };
	int iLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	int iLocal_3413 = 0;
	int iLocal_3414 = 0;
	struct<2> Local_3415[10];
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	struct<2> Local_3446[5];
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	bool bLocal_3461 = false;
	vector3 vLocal_3462 = { 0f, 0f, 0f };
	int iLocal_3465 = 0;
	int iLocal_3466 = 0;
	int iLocal_3467 = 0;
	int iLocal_3468 = 0;
	int iLocal_3469 = 0;
	int iLocal_3470[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3495 = 0;
	int iLocal_3496[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_3502 = false;
	var uLocal_3503[4] = { 0, 0, 0, 0 };
	var uLocal_3508[4] = { 0, 0, 0, 0 };
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
	fLocal_1302 = -100f;
	iLocal_3403 = -1;
	iLocal_3404 = -1;
	iLocal_3467 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_844(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_833(ScriptParam_0);
	}
	else
	{
		func_787();
	}
	while (true)
	{
		func_786();
		if (func_779())
		{
			func_787();
		}
		else if (func_776(19))
		{
			func_787();
		}
		if (func_775())
		{
			func_787();
		}
		func_751();
		switch (func_750(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if ((func_749() == 1 && Local_80.f_1 != -1) && Local_80.f_2 != -1)
				{
					func_747();
					func_743(129, Local_80.f_1, Local_80.f_2, 0);
					if (Global_2537071.f_5048 == -1)
					{
						if (!func_742())
						{
							Global_2537071.f_5048 = 0;
						}
						else
						{
							Global_2537071.f_5048 = 1;
						}
					}
					func_741(Local_80.f_30[0 /*3*/]);
					Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 1;
				}
				else if (func_749() == 4)
				{
					Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 3;
				}
				break;
			case 1:
				if (func_749() == 1)
				{
					func_736();
					func_735();
					func_717();
					func_417();
					func_164();
					func_163();
					func_162();
				}
				else if (func_749() == 4)
				{
					Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 3;
				}
				break;
			case 3:
				func_161(&(Local_80.f_320));
				if (func_160(&(Local_80.f_320)))
				{
					Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 4;
				}
				break;
			case 2:
				Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 4;
			case 4:
				func_787();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_749())
			{
				case 0:
					if (func_145())
					{
						if (func_140())
						{
							func_137(func_139(129, Local_80.f_1, Local_80.f_2, 0));
							Local_80 = 1;
						}
					}
					break;
				case 1:
					func_128();
					func_32();
					func_24();
					if (func_1())
					{
						Local_80 = 4;
					}
					break;
				case 4:
					break;
			}
		}
	}
}

bool func_1()
{
	if (func_2())
	{
		return true;
	}
	return false;
}

bool func_2()
{
	int iVar0;
	int iVar1;

	if ((MISC::IS_BIT_SET(Local_80.f_3, 0) && MISC::IS_BIT_SET(Local_80.f_3, 1)) && MISC::IS_BIT_SET(Local_80.f_3, 2))
	{
		if (!MISC::IS_BIT_SET(Local_80.f_3, 11))
		{
			return false;
		}
	}
	else if (MISC::IS_BIT_SET(Local_80.f_3, 6))
	{
		if (!MISC::IS_BIT_SET(Local_80.f_3, 11))
		{
			return false;
		}
	}
	if (Local_80.f_241 > 0)
	{
		if (Local_80 != 4)
		{
			if (func_23())
			{
				if (Local_80.f_241 == 3)
				{
					if (func_21())
					{
						if (MISC::IS_BIT_SET(Local_80.f_3, 11))
						{
							return true;
						}
					}
				}
				else if (func_19(&(Local_80.f_322), 3000, 0))
				{
					if (func_21())
					{
						return true;
					}
				}
			}
		}
		if (Local_80.f_241 < 3)
		{
			iVar0 = 0;
			if (Local_80.f_241 >= 1)
			{
				iVar0 = 1;
				iVar1 = 0;
				while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
					{
						if (!func_16(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)), 0))
						{
							if (Local_714[iVar1 /*18*/].f_17 < 2)
							{
								iVar0 = 0;
							}
						}
					}
					iVar1++;
				}
			}
			if (iVar0 == 1)
			{
				if ((!((MISC::IS_BIT_SET(Local_80.f_3, 0) && MISC::IS_BIT_SET(Local_80.f_3, 1)) && MISC::IS_BIT_SET(Local_80.f_3, 2)) && !MISC::IS_BIT_SET(Local_80.f_3, 6)) && !MISC::IS_BIT_SET(Local_80.f_3, 14))
				{
					MISC::SET_BIT(&(Local_80.f_3), 15);
				}
				func_7();
			}
			else if (Local_80.f_241 < 3)
			{
				if (func_3())
				{
					MISC::SET_BIT(&(Local_80.f_3), 16);
					MISC::SET_BIT(&(Local_80.f_3), 15);
					func_7();
				}
			}
		}
	}
	return false;
}

bool func_3()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iVar0]))
		{
			if (!func_4(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), 1, 0, 0, 0, 0, 1, 0, 1))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_4(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
			iVar2 = func_6(iParam0, (iVar0 - 1), bParam6, bParam7);
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
						if (((!PED::IS_PED_INJURED(iVar2) && bVar3 != func_5()) && func_844(bVar3, 1, 1)) || bParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return false;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

bool func_5()
{
	return -1;
}

int func_6(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_7()
{
	if (Local_80.f_241 != 3)
	{
		func_9();
		func_8(&(Local_80.f_324), 0, 0);
		Local_80.f_241 = 3;
	}
}

void func_8(var uParam0, bool bParam1, bool bParam2)
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

void func_9()
{
	if (!func_15())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return;
	}
	func_10();
}

void func_10()
{
	func_12();
	func_11(0);
}

void func_11(bool bParam0)
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

void func_12()
{
	if (!func_14())
	{
	}
	if (func_15())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312585.f_12));
		func_13();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_13()
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

bool func_14()
{
	if (!func_15())
	{
		return false;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_13();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_15()
{
	if (Global_1312585 == 20)
	{
		return false;
	}
	return true;
}

bool func_16(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_17(-1, 0) == 8;
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

int func_17(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_18();
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

int func_18()
{
	return Global_1312745;
}

bool func_19(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_20(uParam0, bParam2, 0);
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

void func_20(var uParam0, bool bParam1, bool bParam2)
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

bool func_21()
{
	int iVar0;

	if (!func_22(&(Local_80.f_328)))
	{
		func_20(&(Local_80.f_328), 0, 0);
	}
	else if (func_19(&(Local_80.f_328), 20000, 0))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_48[iVar0]))
		{
			if (Local_80.f_85[iVar0] < 4)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_22(var uParam0)
{
	return uParam0->f_1;
}

bool func_23()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), false))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_48[iVar1]))
		{
			if (!func_31(Local_80.f_48[iVar1]))
			{
				switch (Local_80.f_85[iVar1])
				{
					case 0:
						if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_48[iVar1]), false))
						{
							Local_80.f_85[iVar1] = 1;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_48[iVar1]), false) && func_30(iVar1))
						{
							Local_80.f_85[iVar1] = 1;
						}
						break;
					case 1:
						if (Local_80.f_241 == 1)
						{
							if (!func_23())
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_48[iVar1]), false))
								{
									iVar4 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_80.f_48[iVar1]), false);
									if (func_29(iVar4, 250f))
									{
										Local_80.f_85[iVar1] = 2;
									}
									else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar4)))
									{
										if ((iVar1 % 4) == 0)
										{
											iVar0 = (iVar1 / 4);
											if (iVar0 < 5)
											{
												if (Local_80.f_110[iVar0] == -1 || !func_28(iVar1))
												{
													iVar2 = func_27();
													if (iVar2 != func_5())
													{
														iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
														if (!PED::IS_PED_INJURED(iVar3))
														{
															if (func_26(iVar4, iVar3, 1) > 250f)
															{
																Local_80.f_110[iVar0] = iVar2;
															}
														}
													}
												}
											}
										}
									}
								}
								else
								{
									Local_80.f_85[iVar1] = 2;
								}
							}
							else
							{
								Local_80.f_85[iVar1] = 3;
							}
						}
						else
						{
							Local_80.f_85[iVar1] = 3;
						}
						break;
					case 2:
						if (Local_80.f_241 == 1)
						{
							if (func_23())
							{
								Local_80.f_85[iVar1] = 3;
							}
							else if (MISC::IS_BIT_SET(Local_80.f_3, 6))
							{
								Local_80.f_85[iVar1] = 3;
							}
							else if (MISC::IS_BIT_SET(Local_80.f_464, iVar1))
							{
								Local_80.f_85[iVar1] = 1;
								MISC::CLEAR_BIT(&(Local_80.f_464), iVar1);
							}
						}
						else
						{
							Local_80.f_85[iVar1] = 3;
						}
						break;
					case 3:
						if (PED::IS_PED_FLEEING(NETWORK::NET_TO_PED(Local_80.f_48[iVar1])))
						{
							func_25(&(Local_80.f_48[iVar1]));
							Local_80.f_85[iVar1] = 4;
						}
						break;
				}
			}
		}
		iVar1++;
	}
}

void func_25(var uParam0)
{
	int iVar0;

	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

float func_26(bool bParam0, int iParam1, bool bParam2)
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

int func_27()
{
	int iVar0;
	int iVar1;

	iVar0 = func_5();
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (iVar0 == func_5())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (Local_714[iVar1 /*18*/].f_1 != 0)
				{
					if (Local_714[iVar1 /*18*/].f_17 == 1)
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_28(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if ((iParam0 % 4) == 0)
	{
		iVar0 = (iParam0 / 4);
		if (iVar0 < 5)
		{
			if (Local_80.f_110[iVar0] != -1)
			{
				iVar3 = Local_80.f_110[iVar0];
				bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
				{
					if (func_844(bVar1, 1, 1))
					{
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar1))
						{
							iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar1);
							iVar3 = iVar2;
							if (Local_714[iVar3 /*18*/].f_17 != 1)
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
				}
				else
				{
					return false;
				}
			}
		}
	}
	return true;
}

bool func_29(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_714[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_714[iVar0 /*18*/].f_17 == 1)
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
					iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
					if (!PED::IS_PED_INJURED(iVar2))
					{
						if (func_26(iParam0, iVar2, 1) < fParam1)
						{
							return true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_30(int iParam0)
{
	int iVar0;

	if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_48[iParam0]), false))
	{
		return false;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_80.f_48[iParam0]), false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return false;
	}
	return true;
}

bool func_31(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return true;
}

void func_32()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;

	if (Local_80.f_463 > 0)
	{
		if (Local_80.f_28 != Local_80.f_463)
		{
			Local_80.f_28 = Local_80.f_463;
		}
	}
	switch (Local_80.f_241)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_80.f_28)
			{
				if (Local_80.f_17[iVar0] == func_5())
				{
				}
				else
				{
					iVar1++;
					if (MISC::IS_BIT_SET(Local_80.f_3, 4))
					{
					}
				}
				iVar0++;
			}
			func_125();
			func_124();
			if (MISC::IS_BIT_SET(Local_80.f_3, 4))
			{
				Local_80.f_463 = iVar1;
			}
			if (func_122())
			{
				func_115();
				Local_80.f_241 = 1;
			}
			else if (MISC::IS_BIT_SET(Local_80.f_3, 4) && func_112() > 1)
			{
				func_111();
				func_115();
				Local_80.f_241 = 1;
			}
			if (!func_742())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[0]))
				{
					if (!func_109(Local_80.f_7[0]))
					{
						Var2.f_2 = 1848340361;
						func_107(Var2, func_108(NETWORK::NET_TO_VEH(Local_80.f_7[0]), 1, 0));
						Local_80.f_241 = 2;
					}
				}
			}
			if (Local_80.f_241 == 0)
			{
				if (!func_22(&(Local_80.f_330)))
				{
					if (!func_22(&(Local_80.f_326)))
					{
						func_20(&(Local_80.f_330), 0, 0);
					}
				}
				else if (func_22(&(Local_80.f_326)))
				{
					func_106(&(Local_80.f_330));
				}
				else if (func_19(&(Local_80.f_330), func_105(), 0))
				{
					Var2.f_2 = 1848340361;
					func_107(Var2, func_104(1));
					MISC::SET_BIT(&(Local_80.f_3), 12);
					func_7();
				}
				if (MISC::IS_BIT_SET(Local_80.f_3, 14))
				{
					func_7();
				}
			}
			break;
		case 1:
			func_35();
			func_33();
			func_111();
			if (MISC::IS_BIT_SET(Local_80.f_3, 6))
			{
				Local_80.f_241 = 2;
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
	}
}

void func_33()
{
	if (!MISC::IS_BIT_SET(Local_80.f_3, 19))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_80.f_3, 6))
	{
		if (!func_22(&(Local_80.f_332)))
		{
			func_20(&(Local_80.f_332), 0, 0);
			MISC::SET_BIT(&(Local_80.f_3), 7);
		}
		else if (func_19(&(Local_80.f_332), func_34(), 0))
		{
			MISC::SET_BIT(&(Local_80.f_3), 6);
		}
	}
}

int func_34()
{
	if (func_742())
	{
		return Global_262145.f_11109;
	}
	return Global_262145.f_11086;
}

void func_35()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	bVar2 = true;
	bVar3 = false;
	if (Local_80.f_278 > 0)
	{
		if (Local_80.f_279 >= Local_80.f_278)
		{
			if (Local_80.f_254 >= Local_80.f_255)
			{
				MISC::SET_BIT(&(Local_80.f_3), 0);
				MISC::SET_BIT(&(Local_80.f_3), 1);
				MISC::SET_BIT(&(Local_80.f_3), 2);
				return;
			}
		}
	}
	iVar5 = 0;
	if (bVar2)
	{
		if (Local_80.f_278 > 0)
		{
			if (Local_80.f_279 >= Local_80.f_278)
			{
				if (Local_80.f_256[0] >= 0)
				{
					iVar5 = (iVar5 + Local_80.f_256[0]);
				}
				if (Local_80.f_256[1] >= 0)
				{
					iVar5 = (iVar5 + Local_80.f_256[1]);
				}
				if (Local_80.f_256[2] >= 0)
				{
					iVar5 = (iVar5 + Local_80.f_256[2]);
				}
				if (Local_80.f_256[3] >= 0)
				{
					iVar5 = (iVar5 + Local_80.f_256[3]);
				}
				if (iVar5 >= Local_80.f_255)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 24)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_48[iVar4]))
						{
							if (!func_31(Local_80.f_48[iVar4]))
							{
								bVar3 = true;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						MISC::SET_BIT(&(Local_80.f_3), 0);
						MISC::SET_BIT(&(Local_80.f_3), 1);
						MISC::SET_BIT(&(Local_80.f_3), 2);
						return;
					}
				}
				bVar3 = false;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 24)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_48[iVar4]))
					{
						if (!func_31(Local_80.f_48[iVar4]))
						{
							bVar3 = true;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!func_22(&(Local_80.f_347)))
					{
						func_20(&(Local_80.f_347), 0, 0);
					}
					else if (func_19(&(Local_80.f_347), 3000, 0))
					{
						MISC::SET_BIT(&(Local_80.f_3), 0);
						MISC::SET_BIT(&(Local_80.f_3), 1);
						MISC::SET_BIT(&(Local_80.f_3), 2);
						return;
					}
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(Local_80.f_3, 0) || !MISC::IS_BIT_SET(Local_80.f_3, 1))
	{
		if (Local_80.f_249 >= func_103())
		{
			MISC::SET_BIT(&(Local_80.f_3), 0);
			MISC::SET_BIT(&(Local_80.f_3), 1);
		}
		iVar0 = 0;
		while (iVar0 < Local_80.f_242)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_73[iVar0]))
			{
				if (func_102(iVar0))
				{
					if (!MISC::IS_BIT_SET(Local_80.f_245, iVar0))
					{
						if ((Local_80.f_27 != joaat("HYDRA") && !func_4(NETWORK::NET_TO_VEH(Local_80.f_73[iVar0]), 1, 0, 0, 0, 0, 1, 0, 1)) || Local_80.f_27 == joaat("HYDRA"))
						{
							MISC::CLEAR_BIT(&(Local_80.f_3), 0);
							if (func_22(&(Local_3446[iVar0 /*2*/])))
							{
								func_106(&(Local_3446[iVar0 /*2*/]));
							}
						}
						else if (func_4(NETWORK::NET_TO_VEH(Local_80.f_73[iVar0]), 1, 0, 0, 0, 0, 1, 0, 1) && ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_73[iVar0])) == joaat("SAVAGE"))
						{
							if (MISC::IS_BIT_SET(Local_80.f_3, 0))
							{
								MISC::CLEAR_BIT(&(Local_80.f_3), 0);
							}
							if (!MISC::IS_BIT_SET(Local_80.f_3, 18))
							{
								func_101(func_104(1), iVar0);
								MISC::SET_BIT(&(Local_80.f_3), 18);
							}
						}
						else if (func_100(iVar0) || !func_742())
						{
							if (MISC::IS_BIT_SET(Local_80.f_3, 0))
							{
								MISC::CLEAR_BIT(&(Local_80.f_3), 0);
							}
							if (!MISC::IS_BIT_SET(Local_80.f_303, iVar0))
							{
								func_99(func_104(1), iVar0);
								MISC::SET_BIT(&(Local_80.f_303), iVar0);
							}
						}
						else
						{
							func_25(&(Local_80.f_73[iVar0]));
							if (!MISC::IS_BIT_SET(Local_80.f_253, iVar0))
							{
								Local_80.f_251 = (Local_80.f_251 - 1);
								if (func_98() > 1)
								{
									if (Local_80.f_252 > 0)
									{
										Local_80.f_302++;
										func_97(iVar0, func_104(1));
									}
								}
								MISC::SET_BIT(&(Local_80.f_253), iVar0);
							}
							func_106(&(Local_3446[iVar0 /*2*/]));
						}
					}
				}
				else if (func_96(iVar0))
				{
					if (!MISC::IS_BIT_SET(Local_80.f_253, iVar0))
					{
						Local_80.f_251 = (Local_80.f_251 - 1);
						if (func_98() > 1)
						{
							if (Local_80.f_252 > 0)
							{
								Local_80.f_302++;
								func_97(iVar0, func_104(1));
							}
						}
						if (Local_80.f_27 == joaat("HYDRA"))
						{
							Local_80.f_254++;
						}
						MISC::SET_BIT(&(Local_80.f_253), iVar0);
					}
					if (func_22(&(Local_80.f_336[iVar0 /*2*/])))
					{
						func_106(&(Local_80.f_336[iVar0 /*2*/]));
					}
					func_25(&(Local_80.f_73[iVar0]));
				}
				else
				{
					if (MISC::IS_BIT_SET(Local_80.f_3, 0))
					{
						MISC::CLEAR_BIT(&(Local_80.f_3), 0);
					}
					if (!MISC::IS_BIT_SET(Local_80.f_271, iVar0))
					{
						if (!func_22(&(Local_80.f_336[iVar0 /*2*/])))
						{
							func_20(&(Local_80.f_336[iVar0 /*2*/]), 0, 0);
						}
						else if (func_19(&(Local_80.f_336[iVar0 /*2*/]), 5000, 0))
						{
							MISC::SET_BIT(&(Local_80.f_271), iVar0);
						}
						else if (func_19(&(Local_80.f_336[iVar0 /*2*/]), 3000, 0))
						{
							if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_73[iVar0])) == joaat("SAVAGE"))
							{
								if (!MISC::IS_BIT_SET(Local_80.f_3, 18))
								{
									func_101(func_104(1), iVar0);
									MISC::SET_BIT(&(Local_80.f_3), 18);
								}
							}
							else if (func_100(iVar0) || !func_742())
							{
								if (!MISC::IS_BIT_SET(Local_80.f_303, iVar0))
								{
									func_99(func_104(1), iVar0);
									MISC::SET_BIT(&(Local_80.f_303), iVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_80.f_116)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_48[(iVar0 * 4 + iVar1)]))
				{
					iVar6 = (iVar0 * 4 + iVar1);
					if (!func_31(Local_80.f_48[(iVar0 * 4 + iVar1)]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_48[(iVar0 * 4 + iVar1)]), false))
						{
							if (!func_94((iVar0 * 4 + iVar1)))
							{
								MISC::CLEAR_BIT(&(Local_80.f_3), 0);
							}
							else if (func_93(iVar6))
							{
								if (!func_19(&(Local_80.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
								{
								}
								if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_80.f_48[(iVar0 * 4 + iVar1)])))
								{
									func_92(&(Local_1308[(iVar0 * 4 + iVar1) /*8*/]));
								}
								func_25(&(Local_80.f_48[(iVar0 * 4 + iVar1)]));
								if (MISC::IS_BIT_SET(Local_80.f_272[func_91(iVar6)], func_90(iVar6)))
								{
									if (Local_80.f_85[(iVar0 * 4 + iVar1)] > 0)
									{
										func_89((iVar0 * 4 + iVar1), func_104(1));
										Local_80.f_254++;
									}
								}
								Local_80.f_85[(iVar0 * 4 + iVar1)] = 0;
								if (func_22(&(Local_80.f_364[iVar6 /*2*/])))
								{
									func_106(&(Local_80.f_364[iVar6 /*2*/]));
								}
								if (MISC::IS_BIT_SET(Local_80.f_275[func_91(iVar6)], func_90(iVar6)))
								{
									MISC::CLEAR_BIT(&(Local_80.f_275[func_91(iVar6)]), func_90(iVar6));
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(Local_80.f_272[func_91(iVar6)], func_90(iVar6)))
								{
									if (!func_22(&(Local_80.f_364[iVar6 /*2*/])))
									{
										func_20(&(Local_80.f_364[iVar6 /*2*/]), 0, 0);
									}
									else if (func_19(&(Local_80.f_364[iVar6 /*2*/]), 7000, 0))
									{
										MISC::SET_BIT(&(Local_80.f_272[func_91(iVar6)]), func_90(iVar6));
										func_106(&(Local_80.f_364[iVar6 /*2*/]));
									}
								}
								if (!MISC::IS_BIT_SET(Local_80.f_275[func_91(iVar6)], func_90(iVar6)))
								{
									MISC::SET_BIT(&(Local_80.f_275[func_91(iVar6)]), func_90(iVar6));
								}
							}
						}
					}
					else if (MISC::IS_BIT_SET(Local_80.f_272[func_91(iVar6)], func_90(iVar6)) || Local_80.f_27 == joaat("HYDRA"))
					{
						if (!func_19(&(Local_80.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
						{
						}
						func_25(&(Local_80.f_48[(iVar0 * 4 + iVar1)]));
						if (MISC::IS_BIT_SET(Local_80.f_272[func_91(iVar6)], func_90(iVar6)))
						{
							if (Local_80.f_85[(iVar0 * 4 + iVar1)] > 0)
							{
								Local_80.f_254++;
								func_89((iVar0 * 4 + iVar1), func_104(1));
							}
						}
						Local_80.f_85[(iVar0 * 4 + iVar1)] = 0;
						if (MISC::IS_BIT_SET(Local_80.f_275[func_91(iVar6)], func_90(iVar6)))
						{
							MISC::CLEAR_BIT(&(Local_80.f_275[func_91(iVar6)]), func_90(iVar6));
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(Local_80.f_272[func_91(iVar6)], func_90(iVar6)))
						{
							if (!func_22(&(Local_80.f_364[iVar6 /*2*/])))
							{
								func_20(&(Local_80.f_364[iVar6 /*2*/]), 0, 0);
							}
							else if (func_19(&(Local_80.f_364[iVar6 /*2*/]), 7000, 0))
							{
								MISC::SET_BIT(&(Local_80.f_272[func_91(iVar6)]), func_90(iVar6));
								func_106(&(Local_80.f_364[iVar6 /*2*/]));
							}
						}
						if (!MISC::IS_BIT_SET(Local_80.f_275[func_91(iVar6)], func_90(iVar6)))
						{
							MISC::SET_BIT(&(Local_80.f_275[func_91(iVar6)]), func_90(iVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_80.f_249 < func_103())
			{
				if (func_73(iVar0))
				{
				}
				MISC::CLEAR_BIT(&(Local_80.f_3), 0);
			}
			iVar0++;
		}
	}
	if (!MISC::IS_BIT_SET(Local_80.f_3, 2))
	{
		if (Local_80.f_247 >= Global_262145.f_10207)
		{
			MISC::SET_BIT(&(Local_80.f_3), 2);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_80.f_243)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_48[(20 + iVar1)]))
			{
				iVar7 = (20 + iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iVar1)]), false))
				{
					MISC::CLEAR_BIT(&(Local_80.f_3), 2);
				}
				else if (MISC::IS_BIT_SET(Local_80.f_272[func_91(iVar7)], func_90(iVar7)))
				{
					if (!func_19(&(Local_80.f_414[(20 + iVar1) /*2*/]), 5000, 0))
					{
					}
					if (func_22(&(Local_80.f_364[iVar7 /*2*/])))
					{
						func_106(&(Local_80.f_364[iVar7 /*2*/]));
					}
					func_25(&(Local_80.f_48[(20 + iVar1)]));
					if (Local_80.f_85[(20 + iVar1)] > 0)
					{
						Local_80.f_254++;
						if (func_98() > 1)
						{
							if (Local_80.f_317 > 0)
							{
								Local_80.f_316++;
							}
						}
						func_89((20 + iVar1), func_104(1));
					}
					Local_80.f_85[(20 + iVar1)] = 0;
					if (MISC::IS_BIT_SET(Local_80.f_275[func_91(iVar7)], func_90(iVar7)))
					{
						MISC::CLEAR_BIT(&(Local_80.f_275[func_91(iVar7)]), func_90(iVar7));
					}
				}
				else
				{
					if (!MISC::IS_BIT_SET(Local_80.f_272[func_91(iVar7)], func_90(iVar7)))
					{
						if (!func_22(&(Local_80.f_364[iVar7 /*2*/])))
						{
							func_20(&(Local_80.f_364[iVar7 /*2*/]), 0, 0);
						}
						else if (func_19(&(Local_80.f_364[iVar7 /*2*/]), 7000, 0))
						{
							MISC::SET_BIT(&(Local_80.f_272[func_91(iVar7)]), func_90(iVar7));
							func_106(&(Local_80.f_364[iVar7 /*2*/]));
						}
					}
					if (!MISC::IS_BIT_SET(Local_80.f_275[func_91(iVar7)], func_90(iVar7)))
					{
						MISC::SET_BIT(&(Local_80.f_275[func_91(iVar7)]), func_90(iVar7));
					}
				}
			}
			if (Local_80.f_247 < func_72())
			{
				if (func_51(iVar1))
				{
				}
				MISC::CLEAR_BIT(&(Local_80.f_3), 2);
			}
			iVar1++;
		}
	}
	func_36();
}

void func_36()
{
	int iVar0;
	int iVar1;

	if (func_98() == 1)
	{
		return;
	}
	if (func_98() == 2)
	{
		if (Local_80.f_252 > 0)
		{
			if (Local_80.f_302 > 0)
			{
				if (Local_80.f_302 >= (Local_80.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							iVar0 = Local_80.f_279 + 1;
							if (iVar0 < 10)
							{
								iVar1 = Local_80.f_280[iVar0];
								if (iVar1 != 5)
								{
									func_47();
									Local_80.f_279++;
									func_40();
								}
								else if (Local_80.f_318 >= func_39())
								{
									func_47();
									Local_80.f_279++;
									func_40();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_98() == 3)
	{
		if (Local_80.f_317 > 0)
		{
			if (Local_80.f_316 > 0)
			{
				if (Local_80.f_316 >= Local_80.f_317)
				{
					if (Local_80.f_317 >= func_38())
					{
						func_47();
						Local_80.f_279++;
						func_40();
					}
				}
			}
		}
	}
	else if (func_98() == 4)
	{
		if (Local_80.f_316 > 0)
		{
			if (Local_80.f_302 > 0)
			{
				if (Local_80.f_317 > 0)
				{
					if (Local_80.f_316 >= (Local_80.f_317 - 2))
					{
						if (Local_80.f_252 > 0)
						{
							if (Local_80.f_302 >= (Local_80.f_252 - 2))
							{
								if (func_50() <= func_49())
								{
									if (func_48() <= func_37())
									{
										iVar0 = Local_80.f_279 + 1;
										if (iVar0 < 10)
										{
											iVar1 = Local_80.f_280[iVar0];
											if (iVar1 != 5)
											{
												func_47();
												Local_80.f_279++;
												func_40();
											}
											else if (Local_80.f_318 >= func_39())
											{
												func_47();
												Local_80.f_279++;
												func_40();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_98() == 5)
	{
		if (Local_80.f_252 > 0)
		{
			if (Local_80.f_302 > 0)
			{
				if (Local_80.f_302 >= (Local_80.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							func_47();
							Local_80.f_279++;
							func_40();
						}
					}
				}
			}
		}
	}
}

int func_37()
{
	int iVar0;
	int iVar1;

	iVar0 = Local_80.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_80.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
			case 2:
				return 1;
			case 4:
				if (func_98() == 4)
				{
					return 2;
				}
				else if (func_98() == 2)
				{
					return 1;
				}
				break;
			case 5:
				return 0;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_38()
{
	return Local_80.f_305[Local_80.f_279];
}

int func_39()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < Local_80.f_278)
	{
		iVar0 = (iVar0 + Local_80.f_305[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_40()
{
	int iVar0;

	if (Local_80.f_29 == -1)
	{
		iVar0 = func_46(Local_80.f_27);
		Local_80.f_29 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
		if (func_742())
		{
			if (Local_80.f_27 == joaat("HYDRA"))
			{
				if (Local_80.f_29 == 2)
				{
					Local_80.f_29 = 4;
				}
			}
			else if (Local_80.f_27 == joaat("SAVAGE"))
			{
				if (Local_80.f_29 == 0)
				{
					Local_80.f_29 = 1;
				}
				else if (Local_80.f_29 == 1)
				{
					Local_80.f_29 = 2;
				}
				else if (Local_80.f_29 == 2)
				{
					Local_80.f_29 = 3;
				}
			}
			else if (Local_80.f_27 == joaat("VALKYRIE"))
			{
				if (Local_80.f_29 == 2)
				{
					Local_80.f_29 = 3;
				}
				else if (Local_80.f_29 == 3)
				{
					Local_80.f_29 = 4;
				}
			}
			else if (Local_80.f_27 == joaat("BUZZARD"))
			{
				if (Local_80.f_29 == 0)
				{
					Local_80.f_29 = 1;
				}
				else if (Local_80.f_29 == 1)
				{
					Local_80.f_29 = 2;
				}
				else if (Local_80.f_29 == 2)
				{
					Local_80.f_29 = 3;
				}
				else if (Local_80.f_29 == 3)
				{
					Local_80.f_29 = 4;
				}
			}
		}
		else if (Local_80.f_27 == joaat("SAVAGE"))
		{
			if (Local_80.f_29 == 0)
			{
				Local_80.f_29 = 1;
			}
			else if (Local_80.f_29 == 1)
			{
				Local_80.f_29 = 2;
			}
			else if (Local_80.f_29 == 2)
			{
				Local_80.f_29 = 3;
			}
		}
	}
	switch (Local_80.f_27)
	{
		case joaat("RHINO"):
			Local_80.f_280[0] = 4;
			Local_80.f_291[0] = func_45(4);
			Local_80.f_305[0] = func_44(4);
			Local_80.f_280[1] = 4;
			Local_80.f_291[1] = func_45(4);
			Local_80.f_305[1] = func_44(4);
			Local_80.f_280[2] = 4;
			Local_80.f_291[2] = func_45(4);
			Local_80.f_305[2] = func_44(4);
			if (Local_80.f_12 <= 2 || !func_742())
			{
				Local_80.f_278 = 3;
			}
			else if (Local_80.f_12 == 3)
			{
				Local_80.f_280[3] = 4;
				Local_80.f_291[3] = func_45(4);
				Local_80.f_305[3] = func_44(4);
				Local_80.f_278 = 4;
			}
			else
			{
				Local_80.f_280[3] = 4;
				Local_80.f_291[3] = func_45(4);
				Local_80.f_305[3] = func_44(4);
				Local_80.f_280[4] = 4;
				Local_80.f_291[4] = func_45(4);
				Local_80.f_305[4] = func_44(4);
				Local_80.f_278 = 5;
			}
			Local_80.f_255 = func_41();
			if (!func_742())
			{
				Local_80.f_1 = 0;
			}
			else
			{
				Local_80.f_1 = 5;
			}
			Local_80.f_2 = Local_80.f_29;
			switch (Local_80.f_29)
			{
				case 0:
					Local_80.f_30[0 /*3*/] = { 1016.734f, 2360.83f, 50.4559f };
					Local_80.f_43[0] = 269.414f;
					Local_80.f_30[1 /*3*/] = { 1002.526f, 2390.64f, 50.5438f };
					Local_80.f_43[1] = 3.5491f;
					Local_80.f_30[2 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_80.f_43[2] = 54.4509f;
					Local_80.f_30[3 /*3*/] = { 977.1004f, 2371.714f, 51.0115f };
					Local_80.f_43[3] = 178.1948f;
					Local_80.f_159[0 /*3*/] = { 1028.325f, 2436.455f, 44.2365f };
					Local_80.f_175[0] = 270.8322f;
					Local_80.f_159[1 /*3*/] = { 1166.498f, 2403.021f, 56.662f };
					Local_80.f_175[1] = 177.3506f;
					Local_80.f_159[2 /*3*/] = { 892.8997f, 2465.881f, 49.7859f };
					Local_80.f_175[2] = 318.1089f;
					Local_80.f_159[3 /*3*/] = { 1078.988f, 2246.879f, 43.7942f };
					Local_80.f_175[3] = 272.0801f;
					Local_80.f_159[4 /*3*/] = { 1016.784f, 2259.447f, 43.8512f };
					Local_80.f_175[4] = 104.0591f;
					Local_80.f_117[0 /*3*/] = { 1042.504f, 2280.497f, 48.6315f };
					Local_80.f_148[0] = 296.4225f;
					Local_80.f_117[1 /*3*/] = { 991.9136f, 2278.353f, 48.1838f };
					Local_80.f_148[1] = 164.9695f;
					Local_80.f_117[2 /*3*/] = { 1029.763f, 2447.042f, 44.5979f };
					Local_80.f_148[2] = 136.0596f;
					Local_80.f_117[3 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_80.f_148[3] = 116.379f;
					Local_80.f_117[4 /*3*/] = { 1017.264f, 2432.009f, 45.2054f };
					Local_80.f_148[4] = 86.6586f;
					Local_80.f_117[5 /*3*/] = { 1072.751f, 2237.599f, 43.3802f };
					Local_80.f_148[5] = 74.6822f;
					Local_80.f_117[6 /*3*/] = { 944.4364f, 2407.392f, 50.0925f };
					Local_80.f_148[6] = 206.8863f;
					Local_80.f_117[7 /*3*/] = { 1059.804f, 2280.784f, 48.5613f };
					Local_80.f_148[7] = 267.8581f;
					Local_80.f_117[8 /*3*/] = { 1004.272f, 2372.344f, 54.5719f };
					Local_80.f_148[8] = 267.5856f;
					Local_80.f_117[9 /*3*/] = { 972.3055f, 2235.821f, 53.1094f };
					Local_80.f_148[9] = 325.0964f;
					break;
				case 1:
					Local_80.f_30[0 /*3*/] = { 1733.134f, 3302.545f, 40.2235f };
					Local_80.f_43[0] = 194.8062f;
					Local_80.f_30[1 /*3*/] = { 1761.281f, 3309.879f, 40.1489f };
					Local_80.f_43[1] = 238.9372f;
					Local_80.f_30[2 /*3*/] = { 1755.753f, 3236.49f, 41.0341f };
					Local_80.f_43[2] = 16.3071f;
					Local_80.f_30[3 /*3*/] = { 1676.76f, 3279.734f, 39.8901f };
					Local_80.f_43[3] = 209.9883f;
					Local_80.f_117[0 /*3*/] = { 1758.449f, 3309.247f, 40.1417f };
					Local_80.f_148[0] = 221.3913f;
					Local_80.f_117[1 /*3*/] = { 1746.445f, 3323.75f, 40.1528f };
					Local_80.f_148[1] = 246.3415f;
					Local_80.f_117[2 /*3*/] = { 1775.057f, 3332.943f, 40.3398f };
					Local_80.f_148[2] = 213.4087f;
					Local_80.f_117[3 /*3*/] = { 1713.24f, 3302.458f, 40.1851f };
					Local_80.f_148[3] = 100.5405f;
					Local_80.f_117[4 /*3*/] = { 1693.817f, 3293.163f, 40.1465f };
					Local_80.f_148[4] = 289.6017f;
					Local_80.f_117[5 /*3*/] = { 1697.449f, 3176.312f, 44.0261f };
					Local_80.f_148[5] = 285.6456f;
					Local_80.f_117[6 /*3*/] = { 1710.565f, 3180.909f, 43.2884f };
					Local_80.f_148[6] = 310.9245f;
					Local_80.f_117[7 /*3*/] = { 1627.436f, 3198.51f, 39.9059f };
					Local_80.f_148[7] = 46.7117f;
					Local_80.f_117[8 /*3*/] = { 1788.401f, 3208.964f, 43.0201f };
					Local_80.f_148[8] = 35.9192f;
					Local_80.f_117[9 /*3*/] = { 1698.308f, 3289.254f, 47.8594f };
					Local_80.f_148[9] = 207.53f;
					Local_80.f_159[0 /*3*/] = { 1669.932f, 3132.549f, 42.2874f };
					Local_80.f_175[0] = 286.6127f;
					Local_80.f_159[1 /*3*/] = { 1943.321f, 3263.146f, 44.7265f };
					Local_80.f_175[1] = 124.1428f;
					Local_80.f_159[2 /*3*/] = { 1151.224f, 3172.348f, 40.6704f };
					Local_80.f_175[2] = 275.0147f;
					Local_80.f_159[3 /*3*/] = { 1134.716f, 3169.23f, 40.6443f };
					Local_80.f_175[3] = 287.91f;
					Local_80.f_159[4 /*3*/] = { 1311.352f, 2963.962f, 40.0443f };
					Local_80.f_175[4] = 270.287f;
					break;
				case 2:
					Local_80.f_30[0 /*3*/] = { 2703.281f, 1576.7f, 23.527f };
					Local_80.f_43[0] = 172.439f;
					Local_80.f_30[1 /*3*/] = { 2702.781f, 1512.725f, 23.5199f };
					Local_80.f_43[1] = 53.9805f;
					Local_80.f_30[2 /*3*/] = { 2678.432f, 1518.734f, 23.5295f };
					Local_80.f_43[2] = 303.2142f;
					Local_80.f_30[3 /*3*/] = { 2677.509f, 1566.525f, 23.501f };
					Local_80.f_43[3] = 218.5974f;
					Local_80.f_117[0 /*3*/] = { 2621.796f, 1695.869f, 26.5983f };
					Local_80.f_148[0] = 264.5842f;
					Local_80.f_117[1 /*3*/] = { 2746.846f, 1567.683f, 23.501f };
					Local_80.f_148[1] = 133.7932f;
					Local_80.f_117[2 /*3*/] = { 2664.273f, 1599.201f, 23.7604f };
					Local_80.f_148[2] = 205.1215f;
					Local_80.f_117[3 /*3*/] = { 2757.255f, 1576.939f, 23.501f };
					Local_80.f_148[3] = 66.1065f;
					Local_80.f_117[4 /*3*/] = { 2714.176f, 1480.445f, 23.5007f };
					Local_80.f_148[4] = 7.8064f;
					Local_80.f_117[5 /*3*/] = { 2713.364f, 1450.272f, 23.6191f };
					Local_80.f_148[5] = 358.7563f;
					Local_80.f_117[6 /*3*/] = { 2739.862f, 1463.719f, 23.5015f };
					Local_80.f_148[6] = 142.1748f;
					Local_80.f_117[7 /*3*/] = { 2676.403f, 1589.224f, 26.2548f };
					Local_80.f_148[7] = 247.816f;
					Local_80.f_117[8 /*3*/] = { 2703.085f, 1685.568f, 23.4887f };
					Local_80.f_148[8] = 124.4666f;
					Local_80.f_117[9 /*3*/] = { 2665.022f, 1409.433f, 23.538f };
					Local_80.f_148[9] = 348.6588f;
					Local_80.f_159[0 /*3*/] = { 2737.115f, 1697.578f, 23.6755f };
					Local_80.f_175[0] = 89.8563f;
					Local_80.f_159[1 /*3*/] = { 2778.598f, 1458.218f, 23.5382f };
					Local_80.f_175[1] = 163.8004f;
					Local_80.f_159[2 /*3*/] = { 2529.779f, 1641.113f, 27.9752f };
					Local_80.f_175[2] = 270.0754f;
					Local_80.f_159[3 /*3*/] = { 2665.372f, 1702.379f, 23.4882f };
					Local_80.f_175[3] = 184.9752f;
					Local_80.f_159[4 /*3*/] = { 2726.623f, 1640.299f, 23.5607f };
					Local_80.f_175[4] = 90.4555f;
					break;
				case 3:
				case 4:
					Local_80.f_30[0 /*3*/] = { 1088.383f, -3024.919f, 4.901f };
					Local_80.f_43[0] = 0.5044f;
					Local_80.f_30[1 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_80.f_43[1] = 179.2507f;
					Local_80.f_30[2 /*3*/] = { 986.4979f, -3024.68f, 4.9008f };
					Local_80.f_43[2] = 0.3066f;
					Local_80.f_30[3 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_80.f_43[3] = 180.2973f;
					Local_80.f_117[0 /*3*/] = { 991.85f, -2969.792f, 4.9008f };
					Local_80.f_148[0] = 336.7541f;
					Local_80.f_117[1 /*3*/] = { 1178.155f, -3022.33f, 4.9021f };
					Local_80.f_148[1] = 6.0929f;
					Local_80.f_117[2 /*3*/] = { 1107.679f, -2983.992f, 4.901f };
					Local_80.f_148[2] = 4.2803f;
					Local_80.f_117[3 /*3*/] = { 1043.869f, -2979.597f, 4.901f };
					Local_80.f_148[3] = 274.985f;
					Local_80.f_117[4 /*3*/] = { 1042.952f, -3031.76f, 4.901f };
					Local_80.f_148[4] = 267.2555f;
					Local_80.f_117[5 /*3*/] = { 1095.349f, -3077.492f, 4.8877f };
					Local_80.f_148[5] = 6.5529f;
					Local_80.f_117[6 /*3*/] = { 1114.924f, -3031.319f, 4.901f };
					Local_80.f_148[6] = 89.1724f;
					Local_80.f_117[7 /*3*/] = { 1048.021f, -3077.814f, 4.901f };
					Local_80.f_148[7] = 348.279f;
					Local_80.f_117[8 /*3*/] = { 995.4651f, -3036.897f, 4.9008f };
					Local_80.f_148[8] = 267.8075f;
					Local_80.f_117[9 /*3*/] = { 1101.347f, -2968.894f, 13.3329f };
					Local_80.f_148[9] = 0.5237f;
					Local_80.f_159[0 /*3*/] = { 1254.191f, -3126.908f, 4.8012f };
					Local_80.f_175[0] = 357.9713f;
					Local_80.f_159[1 /*3*/] = { 856.4759f, -3118.969f, 4.9008f };
					Local_80.f_175[1] = 269.3234f;
					Local_80.f_159[2 /*3*/] = { 838.2247f, -3118.748f, 4.9008f };
					Local_80.f_175[2] = 269.3055f;
					Local_80.f_159[3 /*3*/] = { 1197.595f, -2983.872f, 4.9021f };
					Local_80.f_175[3] = 359.1497f;
					Local_80.f_159[4 /*3*/] = { 962.6804f, -3016.159f, 4.9017f };
					Local_80.f_175[4] = 270.0873f;
					break;
			}
			break;
		case joaat("SAVAGE"):
			Local_80.f_240 = joaat("INSURGENT");
			Local_80.f_280[0] = 2;
			Local_80.f_291[0] = func_45(2);
			Local_80.f_280[1] = 4;
			Local_80.f_291[1] = func_45(4);
			Local_80.f_305[1] = func_44(4);
			Local_80.f_280[2] = 2;
			Local_80.f_291[2] = func_45(2);
			if (Local_80.f_12 <= 2 || !func_742())
			{
				Local_80.f_280[3] = 5;
				Local_80.f_291[3] = func_45(5);
				Local_80.f_278 = 4;
			}
			else if (Local_80.f_12 == 3)
			{
				Local_80.f_280[3] = 4;
				Local_80.f_291[3] = func_45(4);
				Local_80.f_305[3] = func_44(4);
				Local_80.f_280[4] = 2;
				Local_80.f_291[4] = func_45(2);
				Local_80.f_280[5] = 5;
				Local_80.f_291[5] = func_45(5);
				Local_80.f_278 = 6;
			}
			else
			{
				Local_80.f_280[3] = 4;
				Local_80.f_291[3] = func_45(4);
				Local_80.f_305[3] = func_44(4);
				Local_80.f_280[4] = 2;
				Local_80.f_291[4] = func_45(2);
				Local_80.f_280[5] = 4;
				Local_80.f_291[5] = func_45(4);
				Local_80.f_305[5] = func_44(4);
				Local_80.f_280[6] = 5;
				Local_80.f_291[6] = func_45(5);
				Local_80.f_278 = 7;
			}
			Local_80.f_255 = func_41();
			if (!func_742())
			{
				Local_80.f_1 = 2;
			}
			else
			{
				Local_80.f_1 = 7;
			}
			Local_80.f_2 = Local_80.f_29;
			switch (Local_80.f_29)
			{
				case 0:
					Local_80.f_30[0 /*3*/] = { -1177.65f, -2845.542f, 12.9458f };
					Local_80.f_43[0] = 331.74f;
					Local_80.f_30[1 /*3*/] = { -1082.479f, -2900.191f, 12.9478f };
					Local_80.f_43[1] = 327.7335f;
					Local_80.f_30[2 /*3*/] = { -1202.019f, -2873.67f, 12.9454f };
					Local_80.f_43[2] = 149.1604f;
					Local_80.f_30[3 /*3*/] = { -1126.58f, -2918.416f, 12.9454f };
					Local_80.f_43[3] = 150.6753f;
					Local_80.f_117[0 /*3*/] = { -985.8373f, -2942.973f, 12.9451f };
					Local_80.f_148[0] = 147.2177f;
					Local_80.f_117[1 /*3*/] = { -1051.412f, -2880.828f, 29.3631f };
					Local_80.f_148[1] = 103.9461f;
					Local_80.f_117[2 /*3*/] = { -1154.54f, -2821.091f, 29.3631f };
					Local_80.f_148[2] = 160.822f;
					Local_80.f_117[3 /*3*/] = { -1211.898f, -2789.125f, 12.9523f };
					Local_80.f_148[3] = 205.8375f;
					Local_80.f_117[4 /*3*/] = { -1199.493f, -2724.709f, 12.9771f };
					Local_80.f_148[4] = 124.7328f;
					break;
				case 1:
					Local_80.f_30[0 /*3*/] = { 1930.067f, 4710.339f, 40.1633f };
					Local_80.f_43[0] = 344.2504f;
					Local_80.f_30[1 /*3*/] = { 1954.56f, 4724.181f, 40.0604f };
					Local_80.f_43[1] = 340.3425f;
					Local_80.f_30[2 /*3*/] = { 2004.913f, 4748.04f, 40.0604f };
					Local_80.f_43[2] = 351.5693f;
					Local_80.f_30[3 /*3*/] = { 2027.928f, 4757.387f, 40.0595f };
					Local_80.f_43[3] = 354.2446f;
					Local_80.f_117[0 /*3*/] = { 1954.209f, 4653.232f, 39.7136f };
					Local_80.f_148[0] = 245.2865f;
					Local_80.f_117[1 /*3*/] = { 2116.177f, 4761.993f, 40.2281f };
					Local_80.f_148[1] = 74.1185f;
					Local_80.f_117[2 /*3*/] = { 2123.414f, 4784.407f, 39.9703f };
					Local_80.f_148[2] = 10.2312f;
					Local_80.f_117[3 /*3*/] = { 1925.159f, 4817.925f, 43.9706f };
					Local_80.f_148[3] = 222.4017f;
					Local_80.f_117[4 /*3*/] = { 2009.58f, 4802.505f, 41.009f };
					Local_80.f_148[4] = 150.2763f;
					Local_80.f_117[5 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_80.f_148[5] = 105.4526f;
					Local_80.f_117[6 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_80.f_148[6] = 88.9429f;
					Local_80.f_117[7 /*3*/] = { 2014.276f, 4721.062f, 40.6111f };
					Local_80.f_148[7] = 51.1733f;
					Local_80.f_117[8 /*3*/] = { 2060.417f, 4847.691f, 40.8344f };
					Local_80.f_148[8] = 169.7083f;
					Local_80.f_117[9 /*3*/] = { 2151.434f, 4789.446f, 39.9594f };
					Local_80.f_148[9] = 29.5849f;
					Local_80.f_243 = 3;
					break;
				case 2:
					if (!func_742())
					{
						Local_80.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_80.f_43[0] = 319.153f;
					}
					else
					{
						Local_80.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_80.f_43[0] = 319.153f;
						Local_80.f_30[1 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_80.f_43[1] = 316.7079f;
						Local_80.f_30[2 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_80.f_43[2] = 316.9623f;
						Local_80.f_30[3 /*3*/] = { 242.3287f, 6987.263f, 1.7354f };
						Local_80.f_43[3] = 314.2003f;
					}
					Local_80.f_117[0 /*3*/] = { 131.5444f, 6956.887f, 12.1839f };
					Local_80.f_148[0] = 326.4292f;
					Local_80.f_117[1 /*3*/] = { 201.7152f, 6842.864f, 21.2216f };
					Local_80.f_148[1] = 6.8118f;
					Local_80.f_117[2 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_80.f_148[2] = 32.8776f;
					Local_80.f_117[3 /*3*/] = { 42.4962f, 7055.19f, 1.3986f };
					Local_80.f_148[3] = 8.387f;
					Local_80.f_117[4 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_80.f_148[4] = 291.5504f;
					Local_80.f_117[5 /*3*/] = { 290.266f, 6946.917f, 3.1171f };
					Local_80.f_148[5] = 333.1838f;
					Local_80.f_117[6 /*3*/] = { 50.5669f, 7102.213f, 2.0034f };
					Local_80.f_148[6] = 203.8353f;
					Local_80.f_117[7 /*3*/] = { 274.1516f, 6856.506f, 15.8452f };
					Local_80.f_148[7] = 32.2329f;
					Local_80.f_117[8 /*3*/] = { 88.9963f, 7113.472f, 24.5763f };
					Local_80.f_148[8] = 195.4847f;
					Local_80.f_117[9 /*3*/] = { 131.6119f, 6956.082f, 12.2413f };
					Local_80.f_148[9] = 327.4941f;
					Local_80.f_243 = 4;
					break;
				case 3:
					if (!func_742())
					{
						Local_80.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_80.f_43[0] = 156.0209f;
					}
					else
					{
						Local_80.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_80.f_43[0] = 156.0209f;
						Local_80.f_30[1 /*3*/] = { 699.7866f, -1637.337f, 8.7086f };
						Local_80.f_43[1] = 41.8571f;
						Local_80.f_30[2 /*3*/] = { 663.725f, -1634.052f, 8.7086f };
						Local_80.f_43[2] = 305.7411f;
						Local_80.f_30[3 /*3*/] = { 662.7472f, -1596.468f, 8.7086f };
						Local_80.f_43[3] = 223.2489f;
					}
					if (func_98() == 2 || func_98() == 5)
					{
						Local_80.f_242 = 3;
					}
					else
					{
						Local_80.f_242 = 4;
					}
					Local_80.f_117[0 /*3*/] = { 585.7374f, -1450.264f, 19.043f };
					Local_80.f_148[0] = 197.3456f;
					Local_80.f_117[1 /*3*/] = { 784.6684f, -1526.172f, 9.5498f };
					Local_80.f_148[1] = 140.7211f;
					Local_80.f_117[2 /*3*/] = { 790.8864f, -1603.665f, 30.2421f };
					Local_80.f_148[2] = 98.9528f;
					Local_80.f_117[3 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_80.f_148[3] = 107.0238f;
					Local_80.f_117[4 /*3*/] = { 698.9001f, -1443.555f, 21.3382f };
					Local_80.f_148[4] = 202.129f;
					Local_80.f_117[5 /*3*/] = { 566.2017f, -1506.386f, 27.1027f };
					Local_80.f_148[5] = 230.1207f;
					Local_80.f_117[6 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_80.f_148[6] = 36.194f;
					Local_80.f_117[7 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_80.f_148[7] = 48.2522f;
					Local_80.f_117[8 /*3*/] = { 592.6577f, -1452.304f, 28.8626f };
					Local_80.f_148[8] = 296.114f;
					Local_80.f_117[9 /*3*/] = { 794.9213f, -1660.62f, 43.147f };
					Local_80.f_148[9] = 3.1632f;
					break;
			}
			break;
		case joaat("HYDRA"):
			Local_80.f_240 = joaat("LAZER");
			Local_80.f_280[0] = 2;
			Local_80.f_291[0] = func_45(2);
			Local_80.f_280[1] = 2;
			Local_80.f_291[1] = func_45(2);
			Local_80.f_280[2] = 2;
			Local_80.f_291[2] = func_45(2);
			if (Local_80.f_12 <= 2 || !func_742())
			{
				Local_80.f_278 = 3;
			}
			else if (Local_80.f_12 == 3)
			{
				Local_80.f_280[3] = 2;
				Local_80.f_291[3] = func_45(2);
				Local_80.f_280[4] = 2;
				Local_80.f_291[4] = func_45(2);
				Local_80.f_278 = 5;
			}
			else
			{
				Local_80.f_280[3] = 2;
				Local_80.f_291[3] = func_45(2);
				Local_80.f_280[4] = 2;
				Local_80.f_291[4] = func_45(2);
				Local_80.f_280[5] = 2;
				Local_80.f_291[5] = func_45(2);
				Local_80.f_278 = 6;
			}
			Local_80.f_255 = func_41();
			if (!func_742())
			{
				Local_80.f_1 = 1;
			}
			else
			{
				Local_80.f_1 = 6;
			}
			Local_80.f_2 = Local_80.f_29;
			switch (Local_80.f_29)
			{
				case 0:
					if (!func_742())
					{
						Local_80.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_80.f_43[0] = 197.4435f;
					}
					else
					{
						Local_80.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_80.f_43[0] = 197.4435f;
						Local_80.f_30[1 /*3*/] = { 132.5468f, -2805.181f, 5.0002f };
						Local_80.f_43[1] = 197.1133f;
						Local_80.f_30[2 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_80.f_43[2] = 272.2065f;
						Local_80.f_30[3 /*3*/] = { 163.5494f, -2795.92f, 5.0002f };
						Local_80.f_43[3] = 142.941f;
					}
					Local_80.f_159[0 /*3*/] = { 887.9951f, -3884.45f, 54.3252f };
					Local_80.f_175[0] = 34.149f;
					Local_80.f_159[1 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_80.f_175[1] = -26.0182f;
					Local_80.f_159[2 /*3*/] = { 1271.189f, -3196.243f, 104.9035f };
					Local_80.f_175[2] = 88.3998f;
					Local_80.f_159[3 /*3*/] = { -879.6379f, -2210.024f, 245.712f };
					Local_80.f_175[3] = -141.7949f;
					Local_80.f_228[0] = 10000;
					Local_80.f_228[1] = 10000;
					Local_80.f_228[2] = 10000;
					Local_80.f_228[3] = 10000;
					Local_80.f_117[0 /*3*/] = { 546.2563f, -3289.316f, 17.714f };
					Local_80.f_148[0] = 143.4012f;
					Local_80.f_117[1 /*3*/] = { 596.183f, -3288.174f, 17.714f };
					Local_80.f_148[1] = 212.1136f;
					Local_80.f_117[2 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_80.f_148[2] = 95.8248f;
					Local_80.f_117[3 /*3*/] = { 480.8767f, -3238.414f, 5.0696f };
					Local_80.f_148[3] = 113.3084f;
					Local_80.f_117[4 /*3*/] = { 444.4339f, -3187.956f, 5.0703f };
					Local_80.f_148[4] = 260.1329f;
					Local_80.f_242 = 4;
					break;
				case 1:
					if (!func_742())
					{
						Local_80.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_80.f_43[0] = 131.0993f;
					}
					else
					{
						Local_80.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_80.f_43[0] = 131.0993f;
						Local_80.f_30[1 /*3*/] = { -1734.978f, -796.148f, 8.3998f };
						Local_80.f_43[1] = 127.8408f;
						Local_80.f_30[2 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_80.f_43[2] = 131.1571f;
						Local_80.f_30[3 /*3*/] = { -1792.501f, -751.6967f, 8.1782f };
						Local_80.f_43[3] = 132.943f;
					}
					Local_80.f_159[0 /*3*/] = { -1876.497f, -665.6128f, 109.1172f };
					Local_80.f_175[0] = 316.9068f;
					Local_80.f_159[1 /*3*/] = { -1099.297f, 20.5145f, 150.0107f };
					Local_80.f_175[1] = 142.3075f;
					Local_80.f_159[2 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_80.f_175[2] = 93.1231f;
					Local_80.f_159[3 /*3*/] = { -1697.535f, -1306.955f, 127.8882f };
					Local_80.f_175[3] = -9.0334f;
					Local_80.f_228[0] = 10000;
					Local_80.f_228[1] = 10000;
					Local_80.f_228[2] = 10000;
					Local_80.f_228[3] = 10000;
					Local_80.f_117[0 /*3*/] = { -1468.446f, -546.457f, 84.073f };
					Local_80.f_148[0] = 236.3566f;
					Local_80.f_117[1 /*3*/] = { -1288.024f, -439.2769f, 102.47f };
					Local_80.f_148[1] = 212.7533f;
					Local_80.f_117[2 /*3*/] = { -1556.831f, -589.7376f, 32.9884f };
					Local_80.f_148[2] = 299.3619f;
					Local_80.f_117[3 /*3*/] = { -1353.281f, -514.1478f, 22.2694f };
					Local_80.f_148[3] = 115.7556f;
					Local_80.f_117[4 /*3*/] = { -1314.693f, -570.6011f, 28.3023f };
					Local_80.f_148[4] = 191.3862f;
					Local_80.f_242 = 4;
					break;
				case 2:
					Local_80.f_30[0 /*3*/] = { 737.7632f, 1292.348f, 359.296f };
					Local_80.f_43[0] = 176.244f;
					Local_80.f_159[0 /*3*/] = { 737.1152f, 1296.363f, 459.296f };
					Local_80.f_175[0] = 93.8354f;
					Local_80.f_159[1 /*3*/] = { -425.5261f, 1185.381f, 324.6416f };
					Local_80.f_175[1] = 250.5173f;
					Local_80.f_159[2 /*3*/] = { 1157.617f, 116.7023f, 180.3293f };
					Local_80.f_175[2] = 337.8961f;
					Local_80.f_159[3 /*3*/] = { 1604.747f, 2094.859f, 184.1727f };
					Local_80.f_175[3] = 142.1369f;
					Local_80.f_228[0] = 10000;
					Local_80.f_228[1] = 10000;
					Local_80.f_228[2] = 10000;
					Local_80.f_228[3] = 10000;
					Local_80.f_117[0 /*3*/] = { 662.439f, 1284.189f, 359.296f };
					Local_80.f_148[0] = 208.2624f;
					Local_80.f_117[1 /*3*/] = { 782.1017f, 1279.344f, 359.2967f };
					Local_80.f_148[1] = 349.048f;
					Local_80.f_117[2 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_80.f_148[2] = 69.8162f;
					Local_80.f_117[3 /*3*/] = { 750.6609f, 1209.155f, 326.5541f };
					Local_80.f_148[3] = 286.6181f;
					Local_80.f_242 = 4;
					Local_80.f_243 = 4;
					break;
				case 3:
					Local_80.f_30[0 /*3*/] = { 2521.121f, -471.1436f, 91.9971f };
					Local_80.f_43[0] = 292.0822f;
					Local_80.f_30[1 /*3*/] = { 2510.273f, -473.5832f, 91.9929f };
					Local_80.f_43[1] = 43.3907f;
					Local_80.f_30[2 /*3*/] = { 2481.39f, -320.2297f, 91.9927f };
					Local_80.f_43[2] = 124.2279f;
					Local_80.f_30[3 /*3*/] = { 2560.314f, -438.3987f, 91.9926f };
					Local_80.f_43[3] = 129.3366f;
					Local_80.f_159[0 /*3*/] = { 2870.504f, 368.2049f, 101.6602f };
					Local_80.f_175[0] = 137.5025f;
					Local_80.f_159[1 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_80.f_175[1] = 227.9336f;
					Local_80.f_159[2 /*3*/] = { 2666.033f, -931.6996f, 100.6606f };
					Local_80.f_175[2] = 6.0299f;
					Local_80.f_159[3 /*3*/] = { 1336.474f, -345.6518f, 424.9653f };
					Local_80.f_175[3] = -87.5596f;
					Local_80.f_228[0] = 10000;
					Local_80.f_228[1] = 10000;
					Local_80.f_228[2] = 10000;
					Local_80.f_228[3] = 10000;
					Local_80.f_242 = 4;
					Local_80.f_117[0 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_80.f_148[0] = 338.8487f;
					Local_80.f_117[1 /*3*/] = { 2473.828f, -384.0913f, 108.6521f };
					Local_80.f_148[1] = 272.5443f;
					Local_80.f_117[2 /*3*/] = { 2535.322f, -335.4323f, 113.0844f };
					Local_80.f_148[2] = 223.0158f;
					Local_80.f_117[3 /*3*/] = { 2478.752f, -416.0706f, 92.7351f };
					Local_80.f_148[3] = 355.6682f;
					Local_80.f_117[4 /*3*/] = { 2482.176f, -353.0269f, 92.7351f };
					Local_80.f_148[4] = 179.3658f;
					break;
				case 4:
					if (!func_742())
					{
						Local_80.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_80.f_43[0] = 331.7771f;
					}
					else
					{
						Local_80.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_80.f_43[0] = 331.7771f;
						Local_80.f_30[1 /*3*/] = { -1841.38f, -3156.666f, 12.9444f };
						Local_80.f_43[1] = 324.1843f;
						Local_80.f_30[2 /*3*/] = { -1860.858f, -3143.922f, 12.9444f };
						Local_80.f_43[2] = 330.0586f;
						Local_80.f_30[3 /*3*/] = { -1885.131f, -3129.948f, 12.9444f };
						Local_80.f_43[3] = 329.5413f;
					}
					Local_80.f_159[0 /*3*/] = { -1185.202f, -2364.726f, 112.9452f };
					Local_80.f_175[0] = 146.9594f;
					Local_80.f_159[1 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_80.f_175[1] = 137.6555f;
					Local_80.f_159[2 /*3*/] = { -412.0741f, -2847.307f, 105.0004f };
					Local_80.f_175[2] = 114.7478f;
					Local_80.f_159[3 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_80.f_175[3] = -84.6269f;
					Local_80.f_228[0] = 10000;
					Local_80.f_228[1] = 10000;
					Local_80.f_228[2] = 10000;
					Local_80.f_228[3] = 10000;
					Local_80.f_242 = 4;
					Local_80.f_117[0 /*3*/] = { -1051.566f, -2880.667f, 29.3631f };
					Local_80.f_148[0] = 153.0449f;
					Local_80.f_117[1 /*3*/] = { -1154.167f, -2821.089f, 29.3631f };
					Local_80.f_148[1] = 153.1271f;
					Local_80.f_117[2 /*3*/] = { -1441.866f, -3280.676f, 12.9449f };
					Local_80.f_148[2] = 331.3771f;
					Local_80.f_117[3 /*3*/] = { -1209.32f, -2789.023f, 12.9523f };
					Local_80.f_148[3] = 183.2579f;
					Local_80.f_117[4 /*3*/] = { -1239.188f, -2688.943f, 12.9449f };
					Local_80.f_148[4] = 149.3518f;
					break;
				case 5:
					Local_80.f_30[0 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_80.f_43[0] = 184.7817f;
					Local_80.f_159[0 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_80.f_175[0] = 91.7761f;
					Local_80.f_159[1 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_80.f_175[1] = 269.7376f;
					Local_80.f_159[2 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_80.f_175[1] = 211.4614f;
					Local_80.f_159[3 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_80.f_175[3] = 148.9204f;
					Local_80.f_228[0] = 10000;
					Local_80.f_228[1] = 10000;
					Local_80.f_228[2] = 10000;
					Local_80.f_228[3] = 10000;
					Local_80.f_242 = 4;
					Local_80.f_117[0 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_80.f_148[0] = 113.298f;
					Local_80.f_117[1 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_80.f_148[1] = 353.0292f;
					Local_80.f_117[2 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_80.f_148[2] = 216.1793f;
					Local_80.f_117[3 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_80.f_148[3] = 347.4008f;
					Local_80.f_243 = 4;
					break;
			}
			break;
		case joaat("VALKYRIE"):
			Local_80.f_240 = joaat("BUZZARD");
			Local_80.f_280[0] = 2;
			Local_80.f_291[0] = func_45(2);
			Local_80.f_305[0] = func_44(4);
			Local_80.f_280[1] = 4;
			Local_80.f_291[1] = func_45(4);
			Local_80.f_305[1] = func_44(4);
			Local_80.f_280[2] = 2;
			Local_80.f_291[2] = func_45(2);
			Local_80.f_305[2] = func_44(4);
			if (Local_80.f_12 <= 2 || !func_742())
			{
				Local_80.f_280[3] = 5;
				Local_80.f_291[3] = func_45(5);
				Local_80.f_278 = 4;
			}
			else if (Local_80.f_12 == 3)
			{
				Local_80.f_280[3] = 4;
				Local_80.f_291[3] = func_45(4);
				Local_80.f_305[3] = func_44(4);
				Local_80.f_280[4] = 2;
				Local_80.f_291[4] = func_45(2);
				Local_80.f_280[5] = 5;
				Local_80.f_291[5] = func_45(5);
				Local_80.f_278 = 6;
			}
			else
			{
				Local_80.f_280[3] = 4;
				Local_80.f_291[3] = func_45(4);
				Local_80.f_305[3] = func_44(4);
				Local_80.f_280[4] = 2;
				Local_80.f_291[4] = func_45(2);
				Local_80.f_280[5] = 4;
				Local_80.f_291[5] = func_45(4);
				Local_80.f_305[5] = func_44(4);
				Local_80.f_280[6] = 5;
				Local_80.f_291[6] = func_45(5);
				Local_80.f_278 = 7;
			}
			Local_80.f_255 = func_41();
			if (!func_742())
			{
				Local_80.f_1 = 3;
			}
			else
			{
				Local_80.f_1 = 8;
			}
			Local_80.f_2 = Local_80.f_29;
			switch (Local_80.f_29)
			{
				case 0:
					if (!func_742())
					{
						Local_80.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_80.f_43[0] = 290.0732f;
					}
					else
					{
						Local_80.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_80.f_43[0] = 290.0732f;
						Local_80.f_30[1 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_80.f_43[1] = 231.5867f;
						Local_80.f_30[2 /*3*/] = { -712.4144f, -1459.331f, 4.0005f };
						Local_80.f_43[2] = 49.6234f;
						Local_80.f_30[3 /*3*/] = { -729.9052f, -1418.734f, 4.0005f };
						Local_80.f_43[3] = 229.3317f;
					}
					Local_80.f_117[0 /*3*/] = { -692.5144f, -1384.774f, 4.1503f };
					Local_80.f_148[0] = 230.0049f;
					Local_80.f_117[1 /*3*/] = { -724.5416f, -1374.024f, 0.6002f };
					Local_80.f_148[1] = 147.9421f;
					Local_80.f_117[2 /*3*/] = { -763.0113f, -1531.637f, 4.4284f };
					Local_80.f_148[2] = 22.3204f;
					Local_80.f_117[3 /*3*/] = { -622.6572f, -1346.997f, 10.7793f };
					Local_80.f_148[3] = 80.7676f;
					Local_80.f_117[4 /*3*/] = { -650.5557f, -1313.337f, 9.8688f };
					Local_80.f_148[4] = 162.0507f;
					Local_80.f_117[5 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_80.f_148[5] = 225.9002f;
					Local_80.f_117[6 /*3*/] = { -719.8957f, -1300.4f, 4.1019f };
					Local_80.f_148[6] = 140.0515f;
					Local_80.f_117[7 /*3*/] = { -661.9195f, -1213.277f, 9.7043f };
					Local_80.f_148[7] = 90.6966f;
					Local_80.f_117[8 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_80.f_148[8] = 226.042f;
					Local_80.f_117[9 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_80.f_148[9] = 79.7294f;
					Local_80.f_243 = 4;
					break;
				case 1:
					Local_80.f_30[0 /*3*/] = { 307.4523f, 2835.238f, 42.4361f };
					Local_80.f_43[0] = 122.9714f;
					Local_80.f_30[1 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_80.f_43[1] = 118.6931f;
					Local_80.f_30[2 /*3*/] = { 356.6689f, 2806.741f, 52.9669f };
					Local_80.f_43[2] = 26.5272f;
					Local_80.f_30[3 /*3*/] = { 310.0119f, 2875.712f, 42.5068f };
					Local_80.f_43[3] = 211.0638f;
					Local_80.f_117[0 /*3*/] = { 346.145f, 2861.565f, 42.4603f };
					Local_80.f_148[0] = 203.4084f;
					Local_80.f_117[1 /*3*/] = { 264.2803f, 2872.275f, 42.6105f };
					Local_80.f_148[1] = 123.7895f;
					Local_80.f_117[2 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_80.f_148[2] = 115.9053f;
					Local_80.f_117[3 /*3*/] = { 290.606f, 2810.906f, 47.9461f };
					Local_80.f_148[3] = 330.5807f;
					Local_80.f_117[4 /*3*/] = { 341.4013f, 2863.181f, 42.4361f };
					Local_80.f_148[4] = 116.311f;
					Local_80.f_117[5 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_80.f_148[5] = 145.855f;
					Local_80.f_117[6 /*3*/] = { 301.125f, 2814.328f, 42.4361f };
					Local_80.f_148[6] = 41.353f;
					Local_80.f_117[7 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_80.f_148[7] = 266.0158f;
					Local_80.f_117[8 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_80.f_148[8] = 290.3963f;
					Local_80.f_117[9 /*3*/] = { 269.1239f, 2866.509f, 73.1797f };
					Local_80.f_148[9] = 243.2495f;
					Local_80.f_243 = 4;
					break;
				case 2:
					Local_80.f_30[0 /*3*/] = { 714.882f, 4175.296f, 39.7092f };
					Local_80.f_43[0] = 280.2862f;
					Local_80.f_30[1 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_80.f_43[1] = 32.9157f;
					Local_80.f_30[2 /*3*/] = { 750.664f, 4238.85f, 54.7686f };
					Local_80.f_43[2] = 106.2954f;
					Local_80.f_30[3 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_80.f_43[3] = 272.3807f;
					Local_80.f_117[0 /*3*/] = { 724.4003f, 4198.888f, 39.7092f };
					Local_80.f_148[0] = 254.5411f;
					Local_80.f_117[1 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_80.f_148[1] = 183.227f;
					Local_80.f_117[2 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_80.f_148[2] = 338.6039f;
					Local_80.f_117[3 /*3*/] = { 849.6327f, 4224.779f, 49.5859f };
					Local_80.f_148[3] = 71.8258f;
					Local_80.f_117[4 /*3*/] = { 856.303f, 4257.466f, 49.48f };
					Local_80.f_148[4] = 179.6626f;
					Local_80.f_117[5 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_80.f_148[5] = 272.7491f;
					Local_80.f_117[6 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_80.f_148[6] = 270.8252f;
					Local_80.f_117[7 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_80.f_148[7] = 180.4937f;
					Local_80.f_117[8 /*3*/] = { 876.0669f, 4247.905f, 48.9739f };
					Local_80.f_148[8] = 107.4297f;
					Local_80.f_117[9 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_80.f_148[9] = 247.5728f;
					break;
				case 3:
					Local_80.f_30[0 /*3*/] = { 3279.497f, 5204.456f, 17.3168f };
					Local_80.f_43[0] = 117.7311f;
					Local_80.f_30[1 /*3*/] = { 3280.456f, 5166.343f, 17.9564f };
					Local_80.f_43[1] = 46.3958f;
					Local_80.f_30[2 /*3*/] = { 3258.509f, 5225.87f, 17.2293f };
					Local_80.f_43[2] = 189.2091f;
					Local_80.f_30[3 /*3*/] = { 3302.896f, 5136.244f, 17.3101f };
					Local_80.f_43[3] = 50.0778f;
					Local_80.f_117[0 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_80.f_148[0] = 229.5714f;
					Local_80.f_117[1 /*3*/] = { 3309.254f, 5167.526f, 17.4491f };
					Local_80.f_148[1] = 136.4963f;
					Local_80.f_117[2 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_80.f_148[2] = 88.3908f;
					Local_80.f_117[3 /*3*/] = { 3222.684f, 5187.734f, 30.0174f };
					Local_80.f_148[3] = 271.8922f;
					Local_80.f_117[4 /*3*/] = { 3217.351f, 5145.03f, 18.4178f };
					Local_80.f_148[4] = 316.4374f;
					Local_80.f_117[5 /*3*/] = { 3155.562f, 5285.246f, 28.0707f };
					Local_80.f_148[5] = 246.1521f;
					Local_80.f_117[6 /*3*/] = { 3311.935f, 5176.247f, 18.6196f };
					Local_80.f_148[6] = 198.8985f;
					Local_80.f_117[7 /*3*/] = { 3230.142f, 5200.801f, 22.8278f };
					Local_80.f_148[7] = 257.2332f;
					Local_80.f_117[8 /*3*/] = { 3420.069f, 5169.133f, 4.8574f };
					Local_80.f_148[8] = 104.7808f;
					Local_80.f_117[9 /*3*/] = { 3242.868f, 5035.166f, 20.011f };
					Local_80.f_148[9] = 339.2293f;
					break;
				case 4:
					Local_80.f_30[0 /*3*/] = { -1736.989f, 162.0228f, 63.371f };
					Local_80.f_43[0] = 306.7662f;
					Local_80.f_30[1 /*3*/] = { -1736.938f, 137.1991f, 63.371f };
					Local_80.f_43[1] = 303.3918f;
					Local_80.f_30[2 /*3*/] = { -1756.272f, 172.5584f, 63.3711f };
					Local_80.f_43[2] = 302.365f;
					Local_80.f_30[3 /*3*/] = { -1710.748f, 129.7035f, 63.3716f };
					Local_80.f_43[3] = 304.9788f;
					Local_80.f_117[0 /*3*/] = { -1674.868f, 141.795f, 62.4627f };
					Local_80.f_148[0] = 30.9787f;
					Local_80.f_117[1 /*3*/] = { -1668.265f, 190.8298f, 60.7573f };
					Local_80.f_148[1] = 97.3626f;
					Local_80.f_117[2 /*3*/] = { -1661.135f, 236.6263f, 61.391f };
					Local_80.f_148[2] = 218.2636f;
					Local_80.f_117[3 /*3*/] = { -1706.443f, 186.8354f, 62.9277f };
					Local_80.f_148[3] = 257.6324f;
					Local_80.f_117[4 /*3*/] = { -1722.395f, 227.362f, 60.7408f };
					Local_80.f_148[4] = 244.6777f;
					Local_80.f_117[5 /*3*/] = { -1623.344f, 165.8969f, 59.7796f };
					Local_80.f_148[5] = 12.745f;
					Local_80.f_117[6 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_80.f_148[6] = 196.3743f;
					Local_80.f_117[7 /*3*/] = { -1796.215f, 150.6246f, 67.7735f };
					Local_80.f_148[7] = 283.2556f;
					Local_80.f_117[8 /*3*/] = { -1774.033f, 105.8673f, 69.3384f };
					Local_80.f_148[8] = 243.4268f;
					Local_80.f_117[9 /*3*/] = { -1594.717f, 210.4007f, 73.3379f };
					Local_80.f_148[9] = 27.7876f;
					break;
			}
			break;
		case joaat("BUZZARD"):
			Local_80.f_240 = joaat("BUZZARD");
			Local_80.f_280[0] = 2;
			Local_80.f_291[0] = func_45(2);
			Local_80.f_280[1] = 4;
			Local_80.f_291[1] = func_45(4);
			Local_80.f_305[1] = func_44(4);
			Local_80.f_280[2] = 2;
			Local_80.f_291[2] = func_45(2);
			if (Local_80.f_12 <= 2 || !func_742())
			{
				Local_80.f_280[3] = 5;
				Local_80.f_291[3] = func_45(5);
				Local_80.f_278 = 4;
			}
			else if (Local_80.f_12 == 3)
			{
				Local_80.f_280[3] = 4;
				Local_80.f_291[3] = func_45(4);
				Local_80.f_305[3] = func_44(4);
				Local_80.f_280[4] = 2;
				Local_80.f_291[4] = func_45(2);
				Local_80.f_280[5] = 5;
				Local_80.f_291[5] = func_45(5);
				Local_80.f_278 = 6;
			}
			else
			{
				Local_80.f_280[3] = 4;
				Local_80.f_291[3] = func_45(4);
				Local_80.f_305[3] = func_44(4);
				Local_80.f_280[4] = 2;
				Local_80.f_291[4] = func_45(2);
				Local_80.f_280[5] = 4;
				Local_80.f_291[5] = func_45(4);
				Local_80.f_305[5] = func_44(4);
				Local_80.f_280[6] = 5;
				Local_80.f_291[6] = func_45(5);
				Local_80.f_278 = 7;
			}
			Local_80.f_255 = func_41();
			if (!func_742())
			{
				Local_80.f_1 = 4;
			}
			else
			{
				Local_80.f_1 = 9;
			}
			Local_80.f_2 = Local_80.f_29;
			switch (Local_80.f_29)
			{
				case 0:
					Local_80.f_30[0 /*3*/] = { 1139.943f, -1289.195f, 33.6127f };
					Local_80.f_43[0] = 180.7904f;
					Local_80.f_30[1 /*3*/] = { 1156.358f, -1327.402f, 33.7312f };
					Local_80.f_43[1] = 269.3001f;
					Local_80.f_30[2 /*3*/] = { 1204.963f, -1265.334f, 34.2267f };
					Local_80.f_43[2] = 180.39f;
					Local_80.f_30[3 /*3*/] = { 1220.954f, -1214.883f, 34.9485f };
					Local_80.f_43[3] = 276.7351f;
					Local_80.f_117[0 /*3*/] = { 1195.556f, -1277.914f, 34.3601f };
					Local_80.f_148[0] = 329.9165f;
					Local_80.f_117[1 /*3*/] = { 1197.899f, -1297.386f, 34.1985f };
					Local_80.f_148[1] = 264.7702f;
					Local_80.f_117[2 /*3*/] = { 1168.435f, -1382.305f, 33.784f };
					Local_80.f_148[2] = 359.5203f;
					Local_80.f_117[3 /*3*/] = { 1160.796f, -1253.626f, 33.5659f };
					Local_80.f_148[3] = 111.3101f;
					Local_80.f_117[4 /*3*/] = { 1178.2f, -1272.399f, 33.8277f };
					Local_80.f_148[4] = 176.3058f;
					Local_80.f_117[5 /*3*/] = { 1185.282f, -1355.494f, 33.9506f };
					Local_80.f_148[5] = 213.1969f;
					Local_80.f_117[6 /*3*/] = { 1217.704f, -1381.659f, 34.3114f };
					Local_80.f_148[6] = 275.2275f;
					Local_80.f_117[7 /*3*/] = { 1193.388f, -1257.564f, 34.2036f };
					Local_80.f_148[7] = 220.0349f;
					Local_80.f_117[8 /*3*/] = { 1174.833f, -1381.064f, 41.8297f };
					Local_80.f_148[8] = 359.15f;
					Local_80.f_117[9 /*3*/] = { 1154.647f, -1338.613f, 33.7034f };
					Local_80.f_148[9] = 83.4212f;
					break;
				case 1:
					Local_80.f_30[0 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_80.f_43[0] = 247.4892f;
					Local_80.f_30[1 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_80.f_43[1] = 66.129f;
					Local_80.f_30[2 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_80.f_43[2] = 340.0713f;
					Local_80.f_30[3 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_80.f_43[3] = 245.7466f;
					Local_80.f_117[0 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_80.f_148[0] = 252.6017f;
					Local_80.f_117[1 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_80.f_148[1] = 245.262f;
					Local_80.f_117[2 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_80.f_148[2] = 44.7945f;
					Local_80.f_117[3 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_80.f_148[3] = 255.6518f;
					Local_80.f_117[4 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_80.f_148[4] = 124.8391f;
					Local_80.f_117[5 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_80.f_148[5] = 188.9979f;
					Local_80.f_117[6 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_80.f_148[6] = 159.3613f;
					Local_80.f_117[7 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_80.f_148[7] = 5.7762f;
					Local_80.f_117[8 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_80.f_148[8] = 89.3388f;
					Local_80.f_117[9 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_80.f_148[9] = 85.9158f;
					break;
				case 2:
					Local_80.f_30[0 /*3*/] = { -509.9767f, 1186.854f, 323.8415f };
					Local_80.f_43[0] = 310.6241f;
					Local_80.f_30[1 /*3*/] = { -398.0129f, 1230.508f, 324.6416f };
					Local_80.f_43[1] = 166.0191f;
					Local_80.f_30[2 /*3*/] = { -455.6342f, 1141.998f, 324.9044f };
					Local_80.f_43[2] = 343.1715f;
					Local_80.f_30[3 /*3*/] = { -412.4245f, 1133.032f, 324.9044f };
					Local_80.f_43[3] = 342.4984f;
					Local_80.f_117[0 /*3*/] = { -426.3299f, 1216.66f, 324.7585f };
					Local_80.f_148[0] = 248.8594f;
					Local_80.f_117[1 /*3*/] = { -363.2418f, 1266.761f, 329.8745f };
					Local_80.f_148[1] = 195.7758f;
					Local_80.f_117[2 /*3*/] = { -453.9799f, 1074.992f, 326.6897f };
					Local_80.f_148[2] = 28.6127f;
					Local_80.f_117[3 /*3*/] = { -392.485f, 1078.562f, 323.2558f };
					Local_80.f_148[3] = 296.7476f;
					Local_80.f_117[4 /*3*/] = { -413.6003f, 1086.831f, 326.6821f };
					Local_80.f_148[4] = 240.9422f;
					Local_80.f_117[5 /*3*/] = { -381.0179f, 1141.269f, 321.6503f };
					Local_80.f_148[5] = 2.473f;
					Local_80.f_117[6 /*3*/] = { -482.3448f, 1118.646f, 319.0963f };
					Local_80.f_148[6] = 343.6776f;
					Local_80.f_117[7 /*3*/] = { -397.3531f, 1127.527f, 321.7288f };
					Local_80.f_148[7] = 0.2495f;
					Local_80.f_117[8 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_80.f_148[8] = 72.7889f;
					Local_80.f_117[9 /*3*/] = { -424.5132f, 1225.076f, 324.7585f };
					Local_80.f_148[9] = 238.4196f;
					break;
				case 3:
					Local_80.f_30[0 /*3*/] = { 341.0539f, 3569.789f, 32.4743f };
					Local_80.f_43[0] = 351.0324f;
					Local_80.f_30[1 /*3*/] = { 373.5018f, 3512.322f, 33.1732f };
					Local_80.f_43[1] = 3.5452f;
					Local_80.f_30[2 /*3*/] = { 353.5068f, 3483.839f, 34.0848f };
					Local_80.f_43[2] = 7.3237f;
					Local_80.f_30[3 /*3*/] = { 245.8774f, 3580.881f, 32.9612f };
					Local_80.f_43[3] = 332.0844f;
					Local_80.f_117[0 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_80.f_148[0] = 2.6416f;
					Local_80.f_117[1 /*3*/] = { 445.3309f, 3512.088f, 32.9825f };
					Local_80.f_148[1] = 171.8638f;
					Local_80.f_117[2 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_80.f_148[2] = 257.0332f;
					Local_80.f_117[3 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_80.f_148[3] = 91.7869f;
					Local_80.f_117[4 /*3*/] = { 395.8559f, 3577.025f, 32.2922f };
					Local_80.f_148[4] = 4.2016f;
					Local_80.f_117[5 /*3*/] = { 380.2437f, 3560.991f, 32.342f };
					Local_80.f_148[5] = 339.729f;
					Local_80.f_117[6 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_80.f_148[6] = 359.2033f;
					Local_80.f_117[7 /*3*/] = { 476.5523f, 3557.328f, 32.2386f };
					Local_80.f_148[7] = 333.6298f;
					Local_80.f_117[8 /*3*/] = { 325.6323f, 3390.666f, 35.4033f };
					Local_80.f_148[8] = 73.2788f;
					Local_80.f_117[9 /*3*/] = { 461.6116f, 3535.257f, 32.318f };
					Local_80.f_148[9] = 96.8181f;
					break;
				case 4:
					Local_80.f_30[0 /*3*/] = { 1493.166f, 1177.555f, 113.2209f };
					Local_80.f_43[0] = 42.1535f;
					Local_80.f_30[1 /*3*/] = { 1433.476f, 1179.544f, 113.1842f };
					Local_80.f_43[1] = 315.0261f;
					Local_80.f_30[2 /*3*/] = { 1471.486f, 1108.967f, 113.3343f };
					Local_80.f_43[2] = 1.2527f;
					Local_80.f_30[3 /*3*/] = { 1448.914f, 1110.622f, 113.3363f };
					Local_80.f_43[3] = 1.9403f;
					Local_80.f_117[0 /*3*/] = { 1485.622f, 1047.388f, 113.334f };
					Local_80.f_148[0] = 352.9674f;
					Local_80.f_117[1 /*3*/] = { 1461.541f, 1083.658f, 113.3344f };
					Local_80.f_148[1] = 88.8285f;
					Local_80.f_117[2 /*3*/] = { 1411.874f, 1126.96f, 113.3341f };
					Local_80.f_148[2] = 177.2297f;
					Local_80.f_117[3 /*3*/] = { 1442.497f, 1148.469f, 113.3342f };
					Local_80.f_148[3] = 273.1487f;
					Local_80.f_117[4 /*3*/] = { 1406.476f, 1256.695f, 106.6555f };
					Local_80.f_148[4] = 225.394f;
					Local_80.f_117[5 /*3*/] = { 1464.077f, 1134.808f, 113.3227f };
					Local_80.f_148[5] = 175.5423f;
					Local_80.f_117[6 /*3*/] = { 1410.314f, 1162.317f, 113.3342f };
					Local_80.f_148[6] = 191.1842f;
					Local_80.f_117[7 /*3*/] = { 1487.483f, 1102.243f, 113.3346f };
					Local_80.f_148[7] = 269.6831f;
					Local_80.f_117[8 /*3*/] = { 1391.034f, 1154.223f, 113.4433f };
					Local_80.f_148[8] = 29.4203f;
					Local_80.f_117[9 /*3*/] = { 1484.87f, 1039.553f, 113.2318f };
					Local_80.f_148[9] = 287.677f;
					break;
			}
			break;
	}
}

int func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (Local_80.f_255 != -1)
	{
		return Local_80.f_255;
	}
	if (Local_80.f_278 == 0)
	{
		return ((4 * Global_262145.f_10206) + Global_262145.f_10207);
	}
	iVar2 = func_98();
	iVar3 = func_43(iVar2);
	iVar4 = func_42(iVar3);
	switch (Local_80.f_27)
	{
		case joaat("RHINO"):
		case joaat("SAVAGE"):
		case joaat("HYDRA"):
		case joaat("VALKYRIE"):
		case joaat("BUZZARD"):
			iVar1 = 0;
			while (iVar1 < Local_80.f_278)
			{
				iVar0 = (iVar0 + ((Local_80.f_291[iVar1] * iVar4) + Local_80.f_305[iVar1]));
				iVar1++;
			}
			break;
	}
	return iVar0;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case joaat("INSURGENT"):
			return 2;
		case joaat("LAZER"):
			return 1;
		case joaat("BUZZARD"):
			return 4;
		case joaat("MESA3"):
			return 4;
		case joaat("SAVAGE"):
			return 4;
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 2:
			if (Local_80.f_27 == joaat("HYDRA"))
			{
				iVar0 = joaat("LAZER");
			}
			else
			{
				iVar0 = joaat("BUZZARD");
			}
			break;
		case 4:
			if (Local_80.f_27 == joaat("RHINO"))
			{
				iVar0 = joaat("INSURGENT");
			}
			else
			{
				iVar0 = joaat("MESA3");
			}
			break;
		case 5:
			iVar0 = joaat("SAVAGE");
			break;
		default:
			if (Local_80.f_27 == joaat("RHINO"))
			{
				iVar0 = joaat("INSURGENT");
			}
			else if (Local_80.f_27 == joaat("HYDRA"))
			{
				iVar0 = joaat("LAZER");
			}
			else
			{
				iVar0 = joaat("BUZZARD");
			}
			break;
	}
	return iVar0;
}

int func_44(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 4:
		case 3:
			if (func_742())
			{
				iVar0 = Global_262145.f_11382;
			}
			else
			{
				iVar0 = Global_262145.f_11102;
			}
			break;
	}
	return iVar0;
}

int func_45(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 2:
			if (func_742())
			{
				iVar0 = Global_262145.f_11383;
			}
			else
			{
				iVar0 = Global_262145.f_11103;
			}
			break;
		case 5:
			if (func_742())
			{
				iVar0 = Global_262145.f_11384;
			}
			else
			{
				iVar0 = Global_262145.f_11104;
			}
			break;
		case 4:
			if (func_742())
			{
				iVar0 = Global_262145.f_11381;
			}
			else
			{
				iVar0 = Global_262145.f_11101;
			}
			break;
	}
	return iVar0;
}

int func_46(int iParam0)
{
	if (!func_742())
	{
		switch (iParam0)
		{
			case joaat("RHINO"):
				return 4;
			case joaat("HYDRA"):
				return 5;
			case joaat("SAVAGE"):
				return 3;
			case joaat("VALKYRIE"):
				return 5;
			case joaat("BUZZARD"):
				return 5;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("RHINO"):
				return 4;
			case joaat("HYDRA"):
				return 3;
			case joaat("SAVAGE"):
				return 3;
			case joaat("VALKYRIE"):
				return 4;
			case joaat("BUZZARD"):
				return 4;
			default:
				break;
		}
	}
	return 5;
}

void func_47()
{
	Local_80.f_252 = 0;
	Local_80.f_302 = 0;
	Local_80.f_317 = 0;
	Local_80.f_316 = 0;
}

int func_48()
{
	int iVar0;
	int iVar1;

	iVar0 = 20;
	iVar0 = 20;
	while (iVar0 <= 23)
	{
		if (!func_31(Local_80.f_48[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_49()
{
	int iVar0;
	int iVar1;

	iVar0 = Local_80.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_80.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
			case 2:
				return 1;
			case 4:
				if (func_98() == 4)
				{
					return 2;
				}
				else if (func_98() == 2)
				{
					return 1;
				}
				break;
			case 5:
				return 0;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_50()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_109(Local_80.f_73[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;

	if (Local_80.f_318 == 0 || Local_80.f_318 == func_39())
	{
		if (func_98() == 2 || func_98() == 5)
		{
			return false;
		}
	}
	if (func_98() == 3 || func_98() == 4)
	{
		if (Local_80.f_317 >= func_38())
		{
			iVar0 = Local_80.f_279 + 1;
			if (iVar0 < 10)
			{
				iVar1 = Local_80.f_280[iVar0];
				if (iVar1 == 5)
				{
					bVar2 = true;
				}
			}
			if (!bVar2)
			{
				return false;
			}
		}
	}
	else if (Local_80.f_317 == 2)
	{
		iVar0 = Local_80.f_279 + 1;
		if (iVar0 < 10)
		{
			iVar1 = Local_80.f_280[iVar0];
			if (iVar1 == 5)
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			return false;
		}
	}
	if (Local_80.f_318 == func_39())
	{
		return false;
	}
	if (Local_80.f_318 == func_71())
	{
		return false;
	}
	if (func_98() == 1)
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_48[(20 + iParam0)]))
	{
		if (func_70(Local_80.f_239) && NETWORK::_0xE16AA70CE9BEEDC3(false, 1, 0, 0))
		{
			if (func_68(&iVar3))
			{
				if (func_55(Local_80.f_117[iVar3 /*3*/], 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */, 1084227584 /* Float: 5f */, 1, 1, 1, 1123024896 /* Float: 120f */, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_54(&(Local_80.f_48[(20 + iParam0)]), 22, Local_80.f_239, Local_80.f_117[iVar3 /*3*/], Local_80.f_148[iVar3], 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]), iLocal_1502);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]), true, 0f);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]), 0);
						if (iVar3 == 8 || iVar3 == 9)
						{
							WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]), joaat("WEAPON_RPG"), 25000, true, true);
						}
						else
						{
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]), joaat("WEAPON_ADVANCEDRIFLE"), 25000, true);
						}
						fVar6 = (30f * func_53());
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]), SYSTEM::ROUND(fVar6));
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]), 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]), 0, true);
						PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]), true);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]), 42, true);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]), SYSTEM::ROUND((200f * Global_262145.f_154)), 0);
						PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]), true);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]), true);
						PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]), true);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]), 151, false);
						iVar4 = ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]));
						fVar5 = func_52();
						iVar4 = SYSTEM::ROUND((fVar5 * SYSTEM::TO_FLOAT(iVar4)));
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_80.f_48[(20 + iParam0)]), iVar4, 0);
						iVar7 = (20 + iParam0);
						if (MISC::IS_BIT_SET(Local_80.f_272[func_91(iVar7)], func_90(iVar7)))
						{
							MISC::CLEAR_BIT(&(Local_80.f_272[func_91(iVar7)]), func_90(iVar7));
						}
						Local_80.f_247++;
						Local_80.f_317++;
						Local_80.f_250++;
						Local_80.f_318++;
						func_106(&(Local_80.f_414[iVar7 /*2*/]));
						func_20(&(Local_80.f_414[iVar7 /*2*/]), 0, 0);
						if (func_22(&(Local_80.f_364[iVar7 /*2*/])))
						{
							func_106(&(Local_80.f_364[iVar7 /*2*/]));
						}
						func_20(&(Local_3415[iVar3 /*2*/]), 0, 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_80.f_48[iVar7]), true, iLocal_1501);
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_48[(20 + iParam0)]))
	{
		return false;
	}
	return true;
}

float func_52()
{
	if (func_742())
	{
		return Global_262145.f_11370;
	}
	return Global_262145.f_11090;
}

float func_53()
{
	if (func_742())
	{
		return Global_262145.f_11372;
	}
	return Global_262145.f_11092;
}

bool func_54(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9)
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

bool func_55(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
		if (func_62(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return false;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_56(vParam0, fParam6, iParam7, bParam9, bParam10, bParam11, bParam12, bParam16, bParam17))
			{
				return false;
			}
		}
	}
	Global_2405072.f_2++;
	return true;
}

bool func_56(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (bParam4 && !bParam7)
	{
		if (func_844(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				bVar2 = bParam6;
				if (bParam9 > 0f)
				{
					bVar2 = bParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(PLAYER::PLAYER_ID()), vParam0, true) <= (bVar2 + bParam3))
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
		if (func_844(bVar1, 1, 1))
		{
			if (!func_16(bVar1, 0) && NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID(), bVar1))
			{
				if (bParam4 == 1 || (bParam4 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_57(bVar1) || !bParam10) && !Global_2425662[bVar1 /*421*/].f_259)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(bVar1), vParam0, true) <= (bVar2 + bParam3))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(bVar1), vParam0, true) <= (bVar2 + bParam3))
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

bool func_57(bool bParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2425662[bParam0 /*421*/].f_245)
	{
		return true;
	}
	return false;
}

Vector3 func_58(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if ((func_61() && Global_1590535[bVar0 /*876*/].f_847) && !func_60(Global_1590535[bVar0 /*876*/].f_848))
	{
		return Global_1590535[bVar0 /*876*/].f_848;
	}
	return func_59(bParam0);
}

Vector3 func_59(bool bParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

bool func_60(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_61()
{
	return Global_2450632.f_17;
}

bool func_62(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((bParam8 == 1 && PLAYER::PLAYER_ID() != bVar1) || bParam8 == 0)
		{
			if (func_844(bVar1, bParam4, bParam5))
			{
				if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_57(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && bParam9) && bParam6) && func_63(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(bVar1), vParam0, true) < fParam3)
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

bool func_63(bool bParam0)
{
	if (func_67(PLAYER::PLAYER_ID(), bParam0))
	{
		return true;
	}
	Global_2513218 = { func_66(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2513218))
	{
		return true;
	}
	if (func_64(PLAYER::PLAYER_ID(), bParam0))
	{
		return true;
	}
	return false;
}

bool func_64(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_65(iParam0);
	if (!iVar0 == func_5())
	{
		if (iVar0 == func_65(bParam1))
		{
			return true;
		}
	}
	return false;
}

int func_65(bool bParam0)
{
	if (bParam0 != func_5())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_5();
}

struct<13> func_66(bool bParam0)
{
	struct<13> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

bool func_67(bool bParam0, bool bParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2513218 = { func_66(bParam0) };
		Global_2513231 = { func_66(bParam1) };
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

bool func_68(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	if (!func_69(Local_80.f_117[iVar0 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_22(&(Local_3415[iVar0 /*2*/])) || (func_22(&(Local_3415[iVar0 /*2*/])) && func_19(&(Local_3415[iVar0 /*2*/]), 10000, 0)))
		{
			*iParam0 = iVar0;
			return true;
		}
	}
	return false;
}

bool func_69(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_70(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_71()
{
	int iVar0;
	int iVar1;

	if (Local_80.f_279 == 0)
	{
		iVar0 = Local_80.f_305[0];
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Local_80.f_279)
		{
			iVar0 = (iVar0 + Local_80.f_305[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_72()
{
	int iVar0;
	int iVar1;

	switch (Local_80.f_27)
	{
		case joaat("SAVAGE"):
		case joaat("RHINO"):
		case joaat("HYDRA"):
		case joaat("VALKYRIE"):
		case joaat("BUZZARD"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_80.f_305[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

bool func_73(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 4;
	if (func_98() == 3)
	{
		return false;
	}
	if (Local_80.f_242 < iVar0)
	{
	}
	if (Local_80.f_251 >= iVar0)
	{
		return false;
	}
	if (func_98() > 1)
	{
		iVar1 = func_88();
		if (Local_80.f_252 >= iVar1)
		{
			return false;
		}
	}
	if (func_70(Local_80.f_240) && func_70(Local_80.f_239))
	{
		if (func_74(iParam0))
		{
			if (MISC::IS_BIT_SET(Local_80.f_245, iParam0))
			{
				Local_80.f_249++;
				Local_80.f_251++;
				Local_80.f_252++;
				MISC::CLEAR_BIT(&(Local_80.f_245), iParam0);
				if (!MISC::IS_BIT_SET(Local_80.f_3, 19))
				{
					MISC::SET_BIT(&(Local_80.f_3), 19);
				}
			}
			return true;
		}
	}
	return false;
}

bool func_74(int iParam0)
{
	if (NETWORK::_0xE16AA70CE9BEEDC3(4, 1, 0, 0))
	{
		if (func_80(iParam0))
		{
			if (func_75(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_75(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;

	if (func_109(Local_80.f_73[iParam0]) && MISC::IS_BIT_SET(Local_80.f_245, iParam0))
	{
		if (func_79(Local_80.f_73[iParam0]))
		{
			if (Local_80.f_116 <= 0)
			{
				if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0])) == joaat("INSURGENT"))
				{
					Local_80.f_116 = 2;
				}
				else
				{
					Local_80.f_116 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0])) + 1;
					if (Local_80.f_116 > 4)
					{
						Local_80.f_116 = 4;
					}
				}
			}
			iVar6 = 0;
			while (iVar6 < Local_80.f_116)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_48[(iParam0 * 4 + iVar6)]))
				{
					if (func_70(Local_80.f_239))
					{
						iVar4 = (iVar6 - 1);
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0])) == joaat("INSURGENT"))
						{
							if (iVar4 == 0)
							{
								iVar4 = 7;
							}
						}
						if (func_78(&(Local_80.f_48[(iParam0 * 4 + iVar6)]), Local_80.f_73[iParam0], 22, Local_80.f_239, iVar4, 1, 1, 1))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), iLocal_1502);
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), true, 0f);
							PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 0);
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), joaat("WEAPON_APPISTOL"), 25000, false);
							if (func_77())
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), joaat("WEAPON_ADVANCEDRIFLE"), 25000, true);
							}
							else
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), joaat("WEAPON_ADVANCEDRIFLE"), 25000, true);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_53());
							PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 2, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 3, false);
							PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 0, true);
							PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), true);
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND((200f * Global_262145.f_154)), 0);
							PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), true);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 42, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 52, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 53, true);
							PED::SET_PED_DIES_IN_WATER(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), true);
							PED::SET_PED_DIES_INSTANTLY_IN_WATER(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), true);
							PED::SET_PED_DIES_IN_SINKING_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 151, false);
							if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]))))
							{
								if (iVar6 == 0)
								{
									PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_76());
									PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
									PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 50);
									PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 52, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 53, true);
									PED::SET_PED_FIRING_PATTERN(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), -1857128337);
								}
								fVar0 = Global_262145.f_11354;
								fVar1 = Global_262145.f_11355;
								fVar2 = Global_262145.f_11356;
								fVar3 = Global_262145.f_11357;
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 23, fVar0);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 24, fVar1);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 25, fVar2);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 26, fVar3);
							}
							else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]))))
							{
								PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_76());
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
								PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 50);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 52, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 53, true);
								fVar0 = Global_262145.f_11354;
								fVar1 = Global_262145.f_11355;
								fVar2 = Global_262145.f_11356;
								fVar3 = Global_262145.f_11357;
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 23, fVar0);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 24, fVar1);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 25, fVar2);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 26, fVar3);
							}
							iVar7 = (iParam0 * 4 + iVar6);
							if (MISC::IS_BIT_SET(Local_80.f_272[func_91(iVar7)], func_90(iVar7)))
							{
								MISC::CLEAR_BIT(&(Local_80.f_272[func_91(iVar7)]), func_90(iVar7));
							}
							PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), true);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), 1);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), true, iLocal_1501);
							Local_80.f_250++;
							func_106(&(Local_80.f_414[(iParam0 * 4 + iVar6) /*2*/]));
							func_20(&(Local_80.f_414[(iParam0 * 4 + iVar6) /*2*/]), 0, 0);
							if (func_22(&(Local_80.f_364[(iParam0 * 4 + iVar6) /*2*/])))
							{
								func_106(&(Local_80.f_364[(iParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < Local_80.f_116)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_48[(iParam0 * 4 + iVar6)]))
				{
					return false;
				}
				else if (func_31(Local_80.f_48[(iParam0 * 4 + iVar6)]))
				{
					return false;
				}
				else if (!PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_48[(iParam0 * 4 + iVar6)]), NETWORK::NET_TO_VEH(Local_80.f_73[iParam0])))
				{
					return false;
				}
				iVar6++;
			}
			return true;
		}
	}
	return false;
}

float func_76()
{
	if (func_742())
	{
		return Global_262145.f_11373;
	}
	return Global_262145.f_11093;
}

bool func_77()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return true;
	}
	return false;
}

bool func_78(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
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

bool func_79(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return false;
}

bool func_80(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	var uVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	var uVar15;
	bool bVar16;

	iVar0 = func_98();
	Local_80.f_240 = func_43(iVar0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_73[iParam0]))
	{
		iVar2 = 0;
		while (iVar2 < Local_80.f_116)
		{
			iVar3 = (iParam0 * 4 + iVar2);
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_48[iVar3]))
			{
				return false;
			}
			iVar2++;
		}
		if (func_70(Local_80.f_240) && !MISC::IS_BIT_SET(Local_80.f_245, iParam0))
		{
			bVar10 = 300f;
			if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_80.f_240) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_80.f_240))
			{
				bVar9 = 300f;
			}
			else
			{
				bVar9 = 100f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_80.f_240))
			{
				bVar10 = 800f;
			}
			iVar11 = 0;
			while (iVar11 < Local_80.f_242)
			{
				if (func_87(iVar11))
				{
					func_86(Local_80.f_240, iVar11, &vVar12, &uVar15);
					if (!func_69(vVar12, 0f, 0f, 0f, 0))
					{
						if (func_55(vVar12, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */, 1084227584 /* Float: 5f */, 1, 1, 1, bVar10, 0, -1, 1, bVar9, 0, 0, 0, 0))
						{
							vVar4 = { vVar12 };
							uVar7 = uVar15;
							iVar8 = 1;
							func_8(&(Local_80.f_186[iVar11 /*2*/]), 0, 0);
							iVar11 = Local_80.f_242;
						}
					}
				}
				iVar11++;
			}
			if (iVar8 == 1)
			{
				bVar16 = true;
				if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_80.f_240) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_80.f_240))
				{
					bVar16 = false;
				}
				if (func_85(iParam0))
				{
					if (func_82(&(Local_80.f_73[iParam0]), Local_80.f_240, vVar4, uVar7, 1, 1, 1, 0, bVar16, 1, 0, 0, 0, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), 2);
						VEHICLE::_0x2311DD7159F00582(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), true);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), false, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), 2);
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), true, true, false);
						VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), false);
						VEHICLE::_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), 0);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_80.f_240))
						{
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]));
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), true);
							PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]));
							ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), false);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_80.f_240))
						{
							VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), 3);
							ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), false);
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), true);
							PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]));
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), 30f);
							VEHICLE::_0xE16142B94664DEFD(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), true);
							VEHICLE::_0xC361AA040D6637A8(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), true);
							fVar1 = 500f;
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), SYSTEM::ROUND(fVar1), 0);
						}
						else
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), true, 1);
						}
						if (func_98() == 5)
						{
							fVar1 = SYSTEM::TO_FLOAT(func_81());
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), SYSTEM::ROUND(fVar1), 0);
							ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), SYSTEM::ROUND(fVar1));
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), fVar1);
							VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), fVar1);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), fVar1);
							VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), false);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							VEHICLE::_0x4056EA1105F5ABD7(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), fVar1);
							VEHICLE::_SET_HELI_TAIL_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), fVar1);
						}
						if (func_22(&(Local_80.f_336[iParam0 /*2*/])))
						{
							func_106(&(Local_80.f_336[iParam0 /*2*/]));
						}
						MISC::CLEAR_BIT(&(Local_80.f_253), iParam0);
						MISC::SET_BIT(&(Local_80.f_245), iParam0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), true, iLocal_1501);
						if (MISC::IS_BIT_SET(Local_80.f_271, iParam0))
						{
							MISC::CLEAR_BIT(&(Local_80.f_271), iParam0);
						}
						if (MISC::IS_BIT_SET(Local_80.f_303, iParam0))
						{
							MISC::CLEAR_BIT(&(Local_80.f_303), iParam0);
						}
						if (Local_80.f_240 == joaat("HYDRA") || Local_80.f_240 == joaat("SAVAGE"))
						{
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_73[iParam0]))
	{
		return false;
	}
	return true;
}

var func_81()
{
	if (func_742())
	{
		return Global_262145.f_11371;
	}
	return Global_262145.f_11091;
}

bool func_82(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
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
			func_83(vParam2, fParam5, iParam1, iVar1);
			return true;
		}
	}
	return false;
}

void func_83(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (func_84(PLAYER::PLAYER_ID(), vParam0, iParam4) > -1)
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

int func_84(int iParam0, vector3 vParam1, int iParam4)
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

bool func_85(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (MISC::IS_BIT_SET(Local_714[iVar0 /*18*/].f_6, iParam0))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_86(int iParam0, int iParam1, var uParam2, var uParam3)
{
	bool bVar0;

	bVar0 = (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0));
	switch (Local_80.f_27)
	{
		case joaat("RHINO"):
			if (!func_69(Local_80.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_80.f_159[iParam1 /*3*/] };
				*uParam3 = Local_80.f_175[iParam1];
			}
			break;
		case joaat("HYDRA"):
			if (!func_69(Local_80.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_80.f_159[iParam1 /*3*/] };
				*uParam3 = Local_80.f_175[iParam1];
			}
			break;
		case joaat("SAVAGE"):
			switch (Local_80.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1292.189f, -2572.868f, 22.9452f };
								*uParam3 = 332.6443f;
								break;
							case 1:
								*uParam2 = { -1062.843f, -3502.913f, 23.1484f };
								*uParam3 = 326.474f;
								break;
							case 2:
								*uParam2 = { -1842.189f, -3149.964f, 22.9444f };
								*uParam3 = 177.2589f;
								break;
							case 3:
								*uParam2 = { -1271.333f, -2267.149f, 12.9454f };
								*uParam3 = 243.2036f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -892.8904f, -2935.942f, 12.9444f };
								*uParam3 = 50.7848f;
								break;
							case 1:
								*uParam2 = { -1290.713f, -2658.844f, 13.0516f };
								*uParam3 = 152.2952f;
								break;
							case 2:
								*uParam2 = { -1157.682f, -2725.707f, 12.9534f };
								*uParam3 = 187.5114f;
								break;
							case 3:
								*uParam2 = { -949.6019f, -3072.991f, 12.9444f };
								*uParam3 = 63.8501f;
								break;
						}
					}
					break;
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
							case 1:
								*uParam2 = { 2259.96f, 5608.534f, 63.366f };
								*uParam3 = 171.56f;
								break;
							case 2:
								*uParam2 = { 1042.117f, 4282.784f, 47.277f };
								*uParam3 = 284.7637f;
								break;
							case 3:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							case 1:
								*uParam2 = { 2439.703f, 4993.831f, 44.9932f };
								*uParam3 = 136.377f;
								break;
							case 2:
								*uParam2 = { 1972.487f, 4843.981f, 43.13f };
								*uParam3 = 315.4388f;
								break;
							case 3:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
						}
					}
					break;
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -822.0636f, 5744.907f, 16.2672f };
								*uParam3 = 305.7653f;
								break;
							case 1:
								*uParam2 = { 22.328f, 6898.096f, 21.23f };
								*uParam3 = 151.4785f;
								break;
							case 2:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
							case 3:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							case 1:
								*uParam2 = { -38.6174f, 6281.176f, 30.2043f };
								*uParam3 = 32.7307f;
								break;
							case 2:
								*uParam2 = { -313.5567f, 6436.651f, 11.6953f };
								*uParam3 = 129.4952f;
								break;
							case 3:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
						}
					}
					break;
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1490.884f, -1955.97f, 79.7973f };
								*uParam3 = 78.8897f;
								break;
							case 1:
								*uParam2 = { 594.3433f, -1979.466f, 28.9706f };
								*uParam3 = 319.8794f;
								break;
							case 2:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
							case 3:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 983.6414f, -1848.797f, 30.0987f };
								*uParam3 = 178.6463f;
								break;
							case 1:
								*uParam2 = { 992.1669f, -1506.845f, 30.4275f };
								*uParam3 = 90.1264f;
								break;
							case 2:
								*uParam2 = { 771.2441f, -1620.786f, 29.9058f };
								*uParam3 = 313.4008f;
								break;
							case 3:
								*uParam2 = { 840.4948f, -1950.51f, 27.9516f };
								*uParam3 = 87.2509f;
								break;
						}
					}
					break;
			}
			break;
		case joaat("VALKYRIE"):
			switch (Local_80.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -619.1071f, -1856.811f, 38.0408f };
								*uParam3 = 10.5487f;
								break;
							case 1:
								*uParam2 = { -273.1338f, -1627.779f, 40.8488f };
								*uParam3 = 77.2743f;
								break;
							case 2:
								*uParam2 = { -1157.959f, -1697.113f, 40.3479f };
								*uParam3 = 299.9692f;
								break;
							case 3:
								*uParam2 = { -1150.749f, -1708.635f, 40.2485f };
								*uParam3 = 295.9259f;
								break;
							case 4:
								*uParam2 = { -1001.754f, -731.3828f, 85.5368f };
								*uParam3 = 232.7072f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -648.1588f, -1632.12f, 23.9175f };
								*uParam3 = 145.9387f;
								break;
							case 1:
								*uParam2 = { -850.9597f, -1194.948f, 4.7312f };
								*uParam3 = 2.3024f;
								break;
							case 2:
								*uParam2 = { -513.3444f, -967.2039f, 22.5742f };
								*uParam3 = 111.3599f;
								break;
							case 3:
								*uParam2 = { -720.752f, -1143.745f, 9.6125f };
								*uParam3 = 126.5029f;
								break;
						}
					}
					break;
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1384.463f, 3175.862f, 49.4674f };
								*uParam3 = 107.9207f;
								break;
							case 1:
								*uParam2 = { 848.3471f, 3587.832f, 42.0217f };
								*uParam3 = 117.8402f;
								break;
							case 2:
								*uParam2 = { -390.1283f, 2557.157f, 99.8288f };
								*uParam3 = 292.5476f;
								break;
							case 3:
								*uParam2 = { 1084.247f, 2367.027f, 53.6989f };
								*uParam3 = 53.4222f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 654.4302f, 2752.401f, 40.9669f };
								*uParam3 = 192.1139f;
								break;
							case 1:
								*uParam2 = { 91.7939f, 3432.573f, 38.5904f };
								*uParam3 = 246.3809f;
								break;
							case 2:
								*uParam2 = { -361.922f, 2954.955f, 24.1579f };
								*uParam3 = 273.6807f;
								break;
							case 3:
								*uParam2 = { -180.3412f, 2508.928f, 71.8451f };
								*uParam3 = 7.1243f;
								break;
							case 4:
								*uParam2 = { 142.7533f, 2271.567f, 93.6005f };
								*uParam3 = 255.3593f;
								break;
						}
					}
					break;
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -394.287f, 4340.043f, 65.1832f };
								*uParam3 = 263.3693f;
								break;
							case 1:
								*uParam2 = { 1002.483f, 3175.867f, 48.6918f };
								*uParam3 = 0.497f;
								break;
							case 2:
								*uParam2 = { 2325.472f, 3922.296f, 45.2575f };
								*uParam3 = 57.4066f;
								break;
							case 3:
								*uParam2 = { 1962.95f, 4785.836f, 51.8872f };
								*uParam3 = 134.6506f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1398.018f, 4520.393f, 52.8047f };
								*uParam3 = 105.7989f;
								break;
							case 1:
								*uParam2 = { 366.9009f, 4432.027f, 61.6888f };
								*uParam3 = 204.5592f;
								break;
							case 2:
								*uParam2 = { 128.2849f, 4454.878f, 80.3457f };
								*uParam3 = 226.3244f;
								break;
							case 3:
								*uParam2 = { -132.4943f, 4295.465f, 41.7475f };
								*uParam3 = 276.3481f;
								break;
							case 4:
								*uParam2 = { 1908.425f, 4607f, 36.8242f };
								*uParam3 = 174.8533f;
								break;
						}
					}
					break;
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3841.898f, 4234.117f, 15.4291f };
								*uParam3 = 336.9579f;
								break;
							case 1:
								*uParam2 = { 2836.958f, 5957.465f, 362.3982f };
								*uParam3 = 225.8444f;
								break;
							case 2:
								*uParam2 = { 2624.236f, 5310.019f, 52.1567f };
								*uParam3 = 215.63f;
								break;
							case 3:
								*uParam2 = { 2780.447f, 4758.9f, 55.0574f };
								*uParam3 = 326.934f;
								break;
							case 4:
								*uParam2 = { 3201.127f, 4657.409f, 190.8286f };
								*uParam3 = 359.7683f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3756.635f, 4434.785f, 11.7586f };
								*uParam3 = 138.6266f;
								break;
							case 1:
								*uParam2 = { 3680.549f, 4492.803f, 23.5887f };
								*uParam3 = 113.1337f;
								break;
							case 2:
								*uParam2 = { 3337.639f, 5482.484f, 19.0418f };
								*uParam3 = 157.3183f;
								break;
							case 3:
								*uParam2 = { 2766.238f, 4974.986f, 32.7262f };
								*uParam3 = 225.2302f;
								break;
							case 4:
								*uParam2 = { 2797.095f, 4923.666f, 33.1334f };
								*uParam3 = 34.0949f;
								break;
						}
					}
					break;
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1988.479f, -219.2565f, 42.6251f };
								*uParam3 = 325.2252f;
								break;
							case 1:
								*uParam2 = { -1567.165f, -555.6394f, 123.4493f };
								*uParam3 = 24.7442f;
								break;
							case 2:
								*uParam2 = { -713.2371f, 195.5196f, 149.754f };
								*uParam3 = 75.542f;
								break;
							case 3:
								*uParam2 = { -509.8761f, 1187.824f, 333.8082f };
								*uParam3 = 128.2553f;
								break;
							case 4:
								*uParam2 = { -1265.789f, 1493.722f, 203.9673f };
								*uParam3 = 187.8592f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1570.476f, 1366.453f, 127.6559f };
								*uParam3 = 115.4139f;
								break;
							case 1:
								*uParam2 = { -1581.127f, 955.6403f, 157.1481f };
								*uParam3 = 39.5031f;
								break;
							case 2:
								*uParam2 = { -1813.683f, 799.5704f, 137.5134f };
								*uParam3 = 188.8774f;
								break;
							case 3:
								*uParam2 = { -1912.698f, 509.3147f, 110.6628f };
								*uParam3 = 70.3926f;
								break;
							case 4:
								*uParam2 = { -2298.497f, 441.8974f, 173.4667f };
								*uParam3 = 1.8886f;
								break;
						}
					}
					break;
			}
			break;
		case joaat("BUZZARD"):
			switch (Local_80.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1351.441f, -641.5107f, 83.2342f };
								*uParam3 = 186.1368f;
								break;
							case 1:
								*uParam2 = { 636.2282f, -434.6195f, 33.632f };
								*uParam3 = 203.6348f;
								break;
							case 2:
								*uParam2 = { 352.4392f, -590.8399f, 83.1657f };
								*uParam3 = 209.917f;
								break;
							case 3:
								*uParam2 = { 375.2908f, -1020.433f, 66.5363f };
								*uParam3 = 271.2396f;
								break;
							case 4:
								*uParam2 = { 345.1868f, -1426.622f, 85.1742f };
								*uParam3 = 284.6382f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1248.49f, -1131.338f, 37.2874f };
								*uParam3 = 153.8083f;
								break;
							case 1:
								*uParam2 = { 1396.414f, -1518.39f, 56.7703f };
								*uParam3 = 134.0967f;
								break;
							case 2:
								*uParam2 = { 972.8618f, -1464.828f, 30.3558f };
								*uParam3 = 0.609f;
								break;
							case 3:
								*uParam2 = { 935.6596f, -909.6719f, 39.5752f };
								*uParam3 = 271.1971f;
								break;
							case 4:
								*uParam2 = { 1156.687f, -768.8879f, 56.4831f };
								*uParam3 = 275.3533f;
								break;
						}
					}
					break;
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -137.5082f, -168.3033f, 102.7024f };
								*uParam3 = 160.3978f;
								break;
							case 1:
								*uParam2 = { -174.828f, -214.6927f, 156.6312f };
								*uParam3 = 258.2675f;
								break;
							case 2:
								*uParam2 = { 404.7129f, -24.3335f, 169.3952f };
								*uParam3 = 95.0683f;
								break;
							case 3:
								*uParam2 = { 168.3323f, 668.6285f, 215.7082f };
								*uParam3 = 172.5901f;
								break;
							case 4:
								*uParam2 = { -608.792f, 660.9065f, 165.6164f };
								*uParam3 = 207.7868f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -166.1217f, -214.9006f, 45.8637f };
								*uParam3 = 257.5103f;
								break;
							case 1:
								*uParam2 = { 33.7482f, -95.8814f, 55.3626f };
								*uParam3 = 73.0413f;
								break;
							case 2:
								*uParam2 = { 36.568f, 47.4427f, 71.3139f };
								*uParam3 = 158.1279f;
								break;
							case 3:
								*uParam2 = { -501.5253f, -67.3569f, 38.6901f };
								*uParam3 = 155.0279f;
								break;
							case 4:
								*uParam2 = { -430.6903f, -423.6864f, 31.7928f };
								*uParam3 = 352.977f;
								break;
						}
					}
					break;
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -468.3117f, 2034.281f, 225.8829f };
								*uParam3 = 183.5655f;
								break;
							case 1:
								*uParam2 = { -1572.228f, 838.9957f, 193.9097f };
								*uParam3 = 278.9509f;
								break;
							case 2:
								*uParam2 = { -175.6009f, -162.3506f, 102.7024f };
								*uParam3 = 12.7537f;
								break;
							case 3:
								*uParam2 = { 494.7073f, 706.4063f, 205.6965f };
								*uParam3 = 75.8614f;
								break;
							case 4:
								*uParam2 = { 821.3636f, 1308.909f, 372.5396f };
								*uParam3 = 113.467f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -803.5167f, 1295.326f, 257.4832f };
								*uParam3 = 209.5666f;
								break;
							case 1:
								*uParam2 = { -925.5961f, 1124.77f, 218.7065f };
								*uParam3 = 215.2912f;
								break;
							case 2:
								*uParam2 = { -404.5761f, 833.0574f, 224.6128f };
								*uParam3 = 218.3907f;
								break;
							case 3:
								*uParam2 = { -303.0683f, 1010.302f, 232.2905f };
								*uParam3 = 78.2628f;
								break;
							case 4:
								*uParam2 = { 56.7959f, 1080.651f, 220.6167f };
								*uParam3 = 18.8188f;
								break;
						}
					}
					break;
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 377.1972f, 4405.938f, 71.4024f };
								*uParam3 = 157.1671f;
								break;
							case 1:
								*uParam2 = { -210.0587f, 4223.346f, 53.7504f };
								*uParam3 = 206.9778f;
								break;
							case 2:
								*uParam2 = { -318.9394f, 3790.772f, 77.5459f };
								*uParam3 = 258.802f;
								break;
							case 3:
								*uParam2 = { -236.0281f, 3088.237f, 47.229f };
								*uParam3 = 304.6536f;
								break;
							case 4:
								*uParam2 = { 312.2873f, 2783.272f, 54.9498f };
								*uParam3 = 10.4182f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1111.445f, 3430.153f, 33.0281f };
								*uParam3 = 351.5004f;
								break;
							case 1:
								*uParam2 = { 940.4324f, 3582.793f, 32.0891f };
								*uParam3 = 71.8698f;
								break;
							case 2:
								*uParam2 = { -177.7739f, 3695.669f, 43.0132f };
								*uParam3 = 195.3546f;
								break;
							case 3:
								*uParam2 = { -241.2375f, 3905.453f, 37.3939f };
								*uParam3 = 207.658f;
								break;
							case 4:
								*uParam2 = { -77.8371f, 3185.706f, 37.1225f };
								*uParam3 = 280.9105f;
								break;
						}
					}
					break;
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 815.4335f, 1311.455f, 372.12f };
								*uParam3 = 258.8483f;
								break;
							case 1:
								*uParam2 = { 609.2955f, 205.9871f, 146.2221f };
								*uParam3 = 316.1886f;
								break;
							case 2:
								*uParam2 = { 1150.014f, 130.2795f, 90.7203f };
								*uParam3 = 340.2898f;
								break;
							case 3:
								*uParam2 = { 1876.22f, 285.6447f, 171.779f };
								*uParam3 = 18.4441f;
								break;
							case 4:
								*uParam2 = { 2105.892f, 1586.21f, 99.9212f };
								*uParam3 = 107.1124f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1199.866f, 1852.856f, 77.9143f };
								*uParam3 = 147.2836f;
								break;
							case 1:
								*uParam2 = { 1526.959f, 1717.267f, 108.9733f };
								*uParam3 = 116.5075f;
								break;
							case 2:
								*uParam2 = { 1962.413f, 1297.095f, 166.6211f };
								*uParam3 = 14.5081f;
								break;
							case 3:
								*uParam2 = { 958.8857f, 1717.174f, 163.6494f };
								*uParam3 = 280.2715f;
								break;
							case 4:
								*uParam2 = { 703.955f, 777.3345f, 204.8183f };
								*uParam3 = 308.1731f;
								break;
						}
					}
					break;
			}
			break;
	}
}

bool func_87(int iParam0)
{
	if (Local_80.f_228[iParam0] > 0)
	{
		if (!func_22(&(Local_80.f_207[iParam0 /*2*/])))
		{
			func_20(&(Local_80.f_207[iParam0 /*2*/]), 0, 0);
			return false;
		}
		else if (!func_19(&(Local_80.f_207[iParam0 /*2*/]), Local_80.f_228[iParam0], 0))
		{
			return false;
		}
	}
	if (func_22(&(Local_80.f_186[iParam0 /*2*/])))
	{
		if (!func_19(&(Local_80.f_186[iParam0 /*2*/]), 20000, 0))
		{
			return false;
		}
	}
	return true;
}

int func_88()
{
	return Local_80.f_291[Local_80.f_279];
}

void func_89(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0.x = -657622694;
	vVar0.f_1 = PLAYER::PLAYER_ID();
	vVar0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iParam1);
	}
}

int func_90(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_91(iParam0) * 31);
}

int func_91(int iParam0)
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

void func_92(int* iParam0)
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

bool func_93(int iParam0)
{
	if (Local_80.f_27 == joaat("HYDRA"))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(Local_80.f_272[func_91(iParam0)], func_90(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_94(int iParam0)
{
	return func_95(iParam0);
}

int func_95(int iParam0)
{
	int iVar0;

	if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_48[iParam0]), false))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_80.f_48[iParam0]), false);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 1;
	}
	return 0;
}

bool func_96(int iParam0)
{
	int iVar0;

	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]));
	if (iVar0 == joaat("SAVAGE"))
	{
		if (MISC::IS_BIT_SET(Local_80.f_271, iParam0))
		{
			return true;
		}
	}
	else if (iVar0 == joaat("BUZZARD"))
	{
		if (MISC::IS_BIT_SET(Local_80.f_271, iParam0))
		{
			return true;
		}
	}
	else
	{
		if (Local_80.f_27 != joaat("HYDRA"))
		{
			return true;
		}
		if (Local_80.f_27 == joaat("HYDRA"))
		{
			if (MISC::IS_BIT_SET(Local_80.f_271, iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_97(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0.x = -2124360391;
	vVar0.f_1 = PLAYER::PLAYER_ID();
	vVar0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iParam1);
	}
}

int func_98()
{
	return Local_80.f_280[Local_80.f_279];
}

void func_99(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0.x = -1384053127;
	vVar0.f_1 = PLAYER::PLAYER_ID();
	vVar0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iParam0);
	}
}

bool func_100(int iParam0)
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
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), false))
			{
				if (NETWORK::_NETWORK_GET_DESTROYER_OF_ENTITY(bVar2, NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), &uVar0))
				{
					return true;
				}
			}
			else if (NETWORK::_0x83660B734994124D(bVar2, NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), &uVar0))
			{
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

void func_101(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0.x = 540859937;
	vVar0.f_1 = PLAYER::PLAYER_ID();
	vVar0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iParam0);
	}
}

bool func_102(int iParam0)
{
	int iVar0;

	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]));
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
	{
		return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), false);
	}
	return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_80.f_73[iParam0]), false);
}

int func_103()
{
	int iVar0;
	int iVar1;

	switch (Local_80.f_27)
	{
		case joaat("RHINO"):
		case joaat("SAVAGE"):
		case joaat("VALKYRIE"):
		case joaat("BUZZARD"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_80.f_291[iVar0]);
				iVar0++;
			}
			break;
		case joaat("HYDRA"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_80.f_291[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_104(bool bParam0)
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
			if (func_844(bVar2, 0, 0))
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

int func_105()
{
	if (func_742())
	{
		return Global_262145.f_11364;
	}
	return Global_262145.f_11087;
}

void func_106(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_107(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_108(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_844(bVar2, 1, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar2), iParam0, false))
			{
				if (PLAYER::GET_PLAYER_TEAM(bVar2) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2)
				{
					if (bVar2 != PLAYER::PLAYER_ID() || bParam1)
					{
						MISC::SET_BIT(&uVar0, iVar1);
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_109(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_110(NETWORK::NET_TO_VEH(iParam0));
	}
	return false;
}

bool func_110(int iParam0)
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

void func_111()
{
	int iVar0;
	int iVar1;

	if (MISC::IS_BIT_SET(Local_80.f_3, 20))
	{
		return;
	}
	if (!func_22(&uLocal_3459))
	{
		func_20(&uLocal_3459, 0, 0);
		return;
	}
	if (!func_19(&uLocal_3459, 5000, 0))
	{
		return;
	}
	iVar0 = func_112();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_4(NETWORK::NET_TO_VEH(Local_80.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0, 1))
		{
			func_25(&(Local_80.f_7[iVar1]));
		}
		iVar1++;
	}
	MISC::SET_BIT(&(Local_80.f_3), 20);
}

int func_112()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (Local_80.f_12 != 0)
	{
		return Local_80.f_12;
	}
	if (!func_742())
	{
		Local_80.f_12 = 1;
		return Local_80.f_12;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar2))
		{
			if (!func_16(bVar2, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 < func_114())
	{
		Local_80.f_12 = 2;
	}
	else if (iVar1 < func_113())
	{
		Local_80.f_12 = 3;
	}
	else
	{
		Local_80.f_12 = 4;
	}
	return Local_80.f_12;
}

int func_113()
{
	return Global_262145.f_11112;
}

int func_114()
{
	return Global_262145.f_11111;
}

void func_115()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iVar0]))
		{
			func_121(iVar0);
			func_120(iVar0, Local_80.f_256[iVar0], Local_80.f_22[iVar0]);
		}
		else if (Local_80.f_594[iVar0 /*4*/].f_1 != -1)
		{
			func_121(iVar0);
		}
		iVar0++;
	}
	func_119();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			func_118(iVar0);
			if (Local_714[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_714[iVar0 /*18*/].f_9 > -1)
				{
					iVar1 = Local_714[iVar0 /*18*/].f_9;
					func_117(iVar1, Local_714[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_117(-1, -1, iVar2);
			}
		}
		else if (Local_80.f_465[iVar0 /*4*/].f_1 != -1)
		{
			func_118(iVar0);
		}
		iVar0++;
	}
	func_116();
}

void func_116()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;

	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_80.f_465[iVar1 /*4*/].f_1 > Local_80.f_465[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_80.f_465[iVar1 /*4*/].f_1;
					uVar3 = Local_80.f_465[iVar1 /*4*/];
					uVar4 = Local_80.f_465[iVar1 /*4*/].f_2;
					Local_80.f_465[iVar1 /*4*/].f_1 = Local_80.f_465[(iVar1 - 1) /*4*/].f_1;
					Local_80.f_465[iVar1 /*4*/] = Local_80.f_465[(iVar1 - 1) /*4*/];
					Local_80.f_465[iVar1 /*4*/].f_2 = Local_80.f_465[(iVar1 - 1) /*4*/].f_2;
					Local_80.f_465[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_80.f_465[(iVar1 - 1) /*4*/] = uVar3;
					Local_80.f_465[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_117(int iParam0, int iParam1, int iParam2)
{
	Local_80.f_465[iParam2 /*4*/] = iParam0;
	Local_80.f_465[iParam2 /*4*/].f_1 = iParam1;
	Local_80.f_465[iParam2 /*4*/].f_2 = iParam2;
}

void func_118(int iParam0)
{
	Local_80.f_465[iParam0 /*4*/] = -1;
	Local_80.f_465[iParam0 /*4*/].f_2 = -1;
	Local_80.f_465[iParam0 /*4*/].f_1 = -1;
}

void func_119()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;

	iVar0 = 3;
	while (iVar0 >= 0)
	{
		iVar1 = 3;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_80.f_594[iVar1 /*4*/].f_1 > Local_80.f_594[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_80.f_594[iVar1 /*4*/].f_1;
					uVar3 = Local_80.f_594[iVar1 /*4*/];
					uVar4 = Local_80.f_594[iVar1 /*4*/].f_2;
					Local_80.f_594[iVar1 /*4*/].f_1 = Local_80.f_594[(iVar1 - 1) /*4*/].f_1;
					Local_80.f_594[iVar1 /*4*/] = Local_80.f_594[(iVar1 - 1) /*4*/];
					Local_80.f_594[iVar1 /*4*/].f_2 = Local_80.f_594[(iVar1 - 1) /*4*/].f_2;
					Local_80.f_594[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_80.f_594[(iVar1 - 1) /*4*/] = uVar3;
					Local_80.f_594[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_120(int iParam0, var uParam1, var uParam2)
{
	Local_80.f_594[iParam0 /*4*/] = iParam0;
	Local_80.f_594[iParam0 /*4*/].f_1 = uParam1;
	Local_80.f_594[iParam0 /*4*/].f_2 = uParam2;
}

void func_121(int iParam0)
{
	Local_80.f_594[iParam0 /*4*/] = -1;
	Local_80.f_594[iParam0 /*4*/].f_1 = -1;
	Local_80.f_594[iParam0 /*4*/].f_2 = -1;
}

bool func_122()
{
	int iVar0;
	int iVar1;

	iVar0 = func_112();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_123(iVar1))
		{
			func_106(&(Local_80.f_5));
			return false;
		}
		if (!MISC::IS_BIT_SET(Local_80.f_13, iVar1))
		{
			func_106(&(Local_80.f_5));
			return false;
		}
		else if (func_4(NETWORK::NET_TO_VEH(Local_80.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0, 1))
		{
			func_106(&(Local_80.f_5));
			return false;
		}
		iVar1++;
	}
	if (!func_22(&(Local_80.f_5)))
	{
		func_20(&(Local_80.f_5), 0, 0);
	}
	else if (func_19(&(Local_80.f_5), 1500, 0))
	{
		return true;
	}
	return false;
}

bool func_123(int iParam0)
{
	if (func_109(Local_80.f_7[iParam0]))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_80.f_7[iParam0]), -1, false) != 0)
		{
			return true;
		}
	}
	return false;
}

void func_124()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_742())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iVar0]))
		{
			if (func_109(Local_80.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_80.f_12)
	{
		Local_80.f_12 = iVar1;
	}
	if (Local_80.f_12 <= 1)
	{
		MISC::CLEAR_BIT(&(Local_80.f_3), 8);
		if (!func_109(Local_80.f_7[0]))
		{
			if (func_109(Local_80.f_7[iVar2]))
			{
				func_25(&(Local_80.f_7[0]));
				Local_80.f_7[0] = Local_80.f_7[iVar2];
			}
		}
	}
}

void func_125()
{
	bool bVar0;

	if (!func_742())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[0]))
		{
			if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_7[0])) == joaat("VALKYRIE"))
			{
				bVar0 = Local_80.f_15 != false;
			}
			else
			{
				bVar0 = Local_80.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = MISC::IS_BIT_SET(Local_80.f_3, 9);
	}
	if (bVar0)
	{
		if (Local_80.f_413 == -1)
		{
			Local_80.f_413 = func_127();
		}
		if (!func_22(&(Local_80.f_326)))
		{
			func_20(&(Local_80.f_326), 0, 0);
		}
		else if (!MISC::IS_BIT_SET(Local_80.f_3, 4))
		{
			if ((Local_80.f_413 - func_126(&(Local_80.f_326), 0, 0)) < 0)
			{
				MISC::SET_BIT(&(Local_80.f_3), 4);
			}
		}
	}
	else if (func_22(&(Local_80.f_326)))
	{
		func_106(&(Local_80.f_326));
		Local_80.f_413 = (Local_80.f_413 - func_126(&(Local_80.f_326), 0, 0));
	}
}

bool func_126(var uParam0, bool bParam1, bool bParam2)
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

var func_127()
{
	if (func_742())
	{
		return Global_262145.f_11374;
	}
	return Global_262145.f_11094;
}

void func_128()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;

	bVar5 = false;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_1504[iVar0] = 0;
		iLocal_709[iVar0] = -2;
		iLocal_1509[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	if (Local_80 != 4)
	{
		iLocal_1299 = 0;
		while (iLocal_1299 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_1299)))
			{
				bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_1299));
				if (!func_16(bVar7, 0))
				{
					if (Local_714[iLocal_1299 /*18*/].f_1 != 0)
					{
						iVar2++;
					}
					iVar1++;
					iVar0 = 0;
					while (iVar0 < 4)
					{
						func_135(iLocal_1299, iVar0, bVar7);
						iVar0++;
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_134(iLocal_1299, iVar0);
						iVar0++;
					}
					if (!MISC::IS_BIT_SET(Local_80.f_3, 14))
					{
						if (!MISC::IS_BIT_SET(Local_714[iLocal_1299 /*18*/].f_2, 9))
						{
							iVar6++;
						}
					}
					iVar0 = 0;
					while (iVar0 <= 23)
					{
						func_133(iLocal_1299, iVar0);
						iVar0++;
					}
					if (!bVar5)
					{
						if (!MISC::IS_BIT_SET(Local_714[iLocal_1299 /*18*/].f_2, 8))
						{
							bVar5 = true;
						}
					}
					func_131(iLocal_1299, bVar7);
					if (func_844(bVar7, 1, 1))
					{
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (Local_80.f_17[iVar0] == func_5())
							{
								if (MISC::IS_BIT_SET(Local_714[iLocal_1299 /*18*/].f_2, (0 + iVar0)))
								{
									Local_80.f_17[iVar0] = bVar7;
								}
							}
							else if (Local_80.f_17[iVar0] == bVar7 && Local_80.f_241 == 0)
							{
								if (!MISC::IS_BIT_SET(Local_714[iLocal_1299 /*18*/].f_2, (0 + iVar0)))
								{
									Local_80.f_17[iVar0] = func_5();
								}
							}
							iVar0++;
						}
					}
				}
			}
			iLocal_1299++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_BIT_SET(Local_80.f_13, iVar0))
		{
			if (iLocal_1504[iVar0] == func_130() && func_123(iVar0))
			{
				MISC::SET_BIT(&(Local_80.f_13), iVar0);
			}
			if (!MISC::IS_BIT_SET(Local_80.f_14, iVar0))
			{
				if (iLocal_1504[iVar0] >= 1 && func_123(iVar0))
				{
					MISC::SET_BIT(&(Local_80.f_14), iVar0);
				}
			}
			else if (iLocal_1504[iVar0] == 0 || !func_123(iVar0))
			{
				if (MISC::IS_BIT_SET(Local_80.f_14, iVar0))
				{
					MISC::CLEAR_BIT(&(Local_80.f_14), iVar0);
					if (iLocal_1504[iVar0] == 0)
					{
						if (Local_80.f_241 >= 1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iVar0]))
							{
								func_25(&(Local_80.f_7[iVar0]));
							}
						}
					}
				}
			}
			if (!MISC::IS_BIT_SET(Local_80.f_15, iVar0) && func_123(iVar0))
			{
				if (iLocal_1504[iVar0] >= 2)
				{
					MISC::SET_BIT(&(Local_80.f_15), iVar0);
				}
			}
			else if (iLocal_1504[iVar0] <= 1 || !func_123(iVar0))
			{
				if (MISC::IS_BIT_SET(Local_80.f_15, iVar0))
				{
					MISC::CLEAR_BIT(&(Local_80.f_15), iVar0);
				}
			}
		}
		else if (iLocal_1504[iVar0] < func_130() || !func_123(iVar0))
		{
			MISC::CLEAR_BIT(&(Local_80.f_13), iVar0);
		}
		if (Local_80.f_266[iVar0] != iLocal_1504[iVar0])
		{
			Local_80.f_266[iVar0] = iLocal_1504[iVar0];
			if (Local_80.f_241 == 1)
			{
				if (Local_80.f_266[iVar0] == 0)
				{
					if (!MISC::IS_BIT_SET(Local_80.f_616, iVar0))
					{
						MISC::SET_BIT(&(Local_80.f_616), iVar0);
					}
				}
			}
		}
		if (Local_80.f_241 == 0)
		{
			if (func_742())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iVar0]))
				{
					iVar3 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]));
					if (iLocal_1504[iVar0] >= func_129(iVar3) && func_123(iVar0))
					{
						iLocal_1509[iVar0] = 1;
					}
				}
			}
		}
		if (Local_80.f_241 == 1)
		{
			if (Local_80.f_256[iVar0] != iLocal_709[iVar0])
			{
				if (iLocal_709[iVar0] >= 0)
				{
					if (iLocal_709[iVar0] > Local_80.f_256[iVar0])
					{
						Local_80.f_256[iVar0] = iLocal_709[iVar0];
						bVar4 = true;
					}
					else
					{
						iVar8 = (Local_80.f_256[iVar0] - iLocal_709[iVar0]);
						if (Local_80.f_261[iVar0] != iVar8)
						{
							Local_80.f_261[iVar0] = iVar8;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		func_115();
	}
	if (!MISC::IS_BIT_SET(Local_80.f_3, 11))
	{
		if (!bVar5)
		{
			MISC::SET_BIT(&(Local_80.f_3), 11);
		}
	}
	iVar0 = 0;
	iVar9 = 0;
	if (Local_80.f_241 == 0)
	{
		if (func_742())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iLocal_1509[iVar0])
				{
					iVar9++;
				}
				iVar0++;
			}
			if (!MISC::IS_BIT_SET(Local_80.f_3, 9))
			{
				if (iVar9 >= 2)
				{
					MISC::SET_BIT(&(Local_80.f_3), 9);
				}
			}
			else if (iVar9 < 2)
			{
				MISC::CLEAR_BIT(&(Local_80.f_3), 9);
			}
		}
	}
	if (Local_80.f_241 == 0)
	{
		if (!func_22(&(Local_80.f_360)))
		{
			func_20(&(Local_80.f_360), 0, 0);
		}
		else if (func_19(&(Local_80.f_360), 5000, 0))
		{
			if (!MISC::IS_BIT_SET(Local_80.f_3, 14))
			{
				if (func_742())
				{
					if (Local_80.f_27 == joaat("VALKYRIE"))
					{
						if (iVar6 < 4)
						{
							MISC::SET_BIT(&(Local_80.f_3), 14);
						}
					}
					else if (iVar6 < 2)
					{
						MISC::SET_BIT(&(Local_80.f_3), 14);
					}
				}
				else if (Local_80.f_27 == joaat("VALKYRIE"))
				{
					if (iVar6 < 2)
					{
						MISC::SET_BIT(&(Local_80.f_3), 14);
					}
				}
				else if (iVar6 < 1)
				{
					MISC::SET_BIT(&(Local_80.f_3), 14);
				}
			}
		}
	}
	if (iVar1 > Local_80.f_614)
	{
		Local_80.f_614 = iVar1;
	}
	else
	{
		Local_80.f_613 = (Local_80.f_614 - iVar1);
	}
	if (iVar2 > Local_80.f_615)
	{
		Local_80.f_615 = iVar2;
	}
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case joaat("RHINO"):
			return 1;
		case joaat("HYDRA"):
			return 1;
		case joaat("SAVAGE"):
			return 1;
		case joaat("VALKYRIE"):
			return 2;
		case joaat("BUZZARD"):
			return 1;
		default:
			break;
	}
	return 99;
}

int func_130()
{
	return Local_80.f_28;
}

void func_131(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (!MISC::IS_BIT_SET(Local_80.f_16, iParam0))
	{
		if (MISC::IS_BIT_SET(Local_714[iParam0 /*18*/].f_2, 12))
		{
			func_132(bParam1, 1);
			MISC::SET_BIT(&(Local_80.f_16), iParam0);
		}
		else if (Local_80.f_241 >= 1)
		{
			if (Local_714[iParam0 /*18*/].f_1 == 0)
			{
				func_132(bParam1, 1);
				MISC::SET_BIT(&(Local_80.f_16), iParam0);
			}
			else if (Local_714[iParam0 /*18*/].f_17 >= 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iVar1]))
					{
						if (func_109(Local_80.f_7[iVar1]))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bParam1), NETWORK::NET_TO_VEH(Local_80.f_7[iVar1]), false))
							{
								bVar0 = true;
							}
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_132(bParam1, 1);
					MISC::SET_BIT(&(Local_80.f_16), iParam0);
				}
			}
		}
	}
	else if (Local_80.f_241 < 1)
	{
		if (!MISC::IS_BIT_SET(Local_714[iParam0 /*18*/].f_2, 12))
		{
			func_132(bParam1, 0);
			MISC::CLEAR_BIT(&(Local_80.f_16), iParam0);
		}
	}
}

void func_132(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iVar0]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), bParam0, bParam1);
		}
		iVar0++;
	}
}

void func_133(int iParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(Local_80.f_272[func_91(iParam1)], func_90(iParam1)))
	{
		if (MISC::IS_BIT_SET(Local_714[iParam0 /*18*/].f_3[func_91(iParam1)], func_90(iParam1)))
		{
			MISC::SET_BIT(&(Local_80.f_272[func_91(iParam1)]), func_90(iParam1));
			if (Local_714[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_48[iParam1]))
			{
				if (!func_31(Local_80.f_48[iParam1]))
				{
					if (!func_94(iParam1))
					{
						MISC::CLEAR_BIT(&(Local_80.f_272[func_91(iParam1)]), func_90(iParam1));
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_48[iParam1]), false))
					{
						if (iParam1 >= 20)
						{
							MISC::CLEAR_BIT(&(Local_80.f_272[func_91(iParam1)]), func_90(iParam1));
						}
					}
				}
			}
		}
	}
}

void func_134(int iParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(Local_80.f_271, iParam1))
	{
		if (MISC::IS_BIT_SET(Local_714[iParam0 /*18*/].f_6, iParam1))
		{
			MISC::SET_BIT(&(Local_80.f_271), iParam1);
			if (Local_714[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (MISC::IS_BIT_SET(Local_80.f_303, iParam1))
			{
				if (!MISC::IS_BIT_SET(Local_80.f_253, iParam1))
				{
					Local_80.f_251 = (Local_80.f_251 - 1);
					if (func_98() > 1)
					{
						if (Local_80.f_252 > 0)
						{
							Local_80.f_302++;
							func_97(iParam1, func_104(1));
						}
					}
					MISC::SET_BIT(&(Local_80.f_253), iParam1);
				}
				if (func_22(&(Local_80.f_336[iParam1 /*2*/])))
				{
					func_106(&(Local_80.f_336[iParam1 /*2*/]));
				}
				func_25(&(Local_80.f_73[iParam1]));
				MISC::CLEAR_BIT(&(Local_80.f_303), iParam1);
			}
		}
	}
}

void func_135(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_BIT_SET(Local_714[iParam0 /*18*/].f_1, iParam1))
	{
		iLocal_1504[iParam1]++;
		if (iLocal_709[iParam1] < 0)
		{
			if (Local_714[iParam0 /*18*/].f_8 >= 0)
			{
				if (Local_80.f_261[iParam1] > 0)
				{
					iLocal_709[iParam1] = Local_80.f_261[iParam1];
				}
				else
				{
					iLocal_709[iParam1] = 0;
				}
			}
		}
		iLocal_709[iParam1] = (iLocal_709[iParam1] + Local_714[iParam0 /*18*/].f_8);
		if (Local_80.f_241 >= 1)
		{
			if (Local_80.f_22[iParam1] == func_5())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iParam1]))
				{
					if (func_109(Local_80.f_7[iParam1]))
					{
						iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_80.f_7[iParam1]), -1, false);
						if (iVar1 != 0)
						{
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
								if (iVar0 == bParam2)
								{
									Local_80.f_22[iParam1] = bParam2;
									func_115();
								}
							}
						}
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_80.f_319, iParam1))
		{
			if (Local_714[iParam0 /*18*/].f_10 > -1)
			{
				MISC::SET_BIT(&(Local_80.f_319), iParam1);
				func_20(&(Local_80.f_349[iParam1 /*2*/]), 0, 0);
			}
		}
	}
	if (Local_80.f_22[iParam1] != func_5())
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_80.f_22[iParam1]))
		{
			iVar0 = func_136(iParam1, 1);
			if (iVar0 != func_5())
			{
				Local_80.f_22[iParam1] = iVar0;
			}
			else
			{
				Local_80.f_22[iParam1] = func_5();
			}
		}
		else if (func_16(Local_80.f_22[iParam1], 0))
		{
			Local_80.f_22[iParam1] = func_5();
			func_115();
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Local_80.f_22[iParam1]);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (func_109(Local_80.f_7[iParam1]))
				{
					if (!PED::IS_PED_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_80.f_7[iParam1]), false))
					{
						iVar0 = func_136(iParam1, 1);
						if (iVar0 != func_5())
						{
							Local_80.f_22[iParam1] = iVar0;
						}
						else
						{
							Local_80.f_22[iParam1] = func_5();
						}
					}
				}
			}
		}
	}
}

int func_136(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_5();
	if (iParam0 >= 0)
	{
		iVar3 = 0;
		while (iVar3 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
			{
				if (iVar0 == func_5())
				{
					if (Local_714[iVar3 /*18*/].f_17 == 1)
					{
						if (MISC::IS_BIT_SET(Local_714[iVar3 /*18*/].f_1, iParam0))
						{
							if (!bParam1)
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
							}
							else
							{
								iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
								if (func_109(Local_80.f_7[iParam0]))
								{
									iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
									if (!PED::IS_PED_INJURED(iVar2))
									{
										if (PED::IS_PED_IN_VEHICLE(iVar2, NETWORK::NET_TO_VEH(Local_80.f_7[iParam0]), false))
										{
											iVar0 = iVar1;
										}
									}
								}
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

void func_137(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	vVar0.x = 1982372647;
	vVar0.f_1 = PLAYER::PLAYER_ID();
	vVar0.f_2 = iParam0;
	iVar3 = func_138(1, 1);
	if (!iVar3 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar3);
	}
}

int func_138(bool bParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_844(bVar2, 0, 0))
		{
			if (bVar2 != PLAYER::PLAYER_ID() || bParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_16(bVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_139(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_140()
{
	func_112();
	if (func_70(Local_80.f_27))
	{
		if (func_141())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_80.f_27);
			return true;
		}
	}
	return false;
}

bool func_141()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 < Local_80.f_12)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_7[iVar0]))
		{
			if (func_70(Local_80.f_27))
			{
				if (!MISC::IS_BIT_SET(Local_80.f_244, iVar0))
				{
					MISC::CLEAR_AREA(Local_80.f_30[iVar0 /*3*/], 5f, true, false, false, true);
					MISC::SET_BIT(&(Local_80.f_244), iVar0);
				}
				if (func_82(&(Local_80.f_7[iVar0]), Local_80.f_27, Local_80.f_30[iVar0 /*3*/], Local_80.f_43[iVar0], 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_80.f_7[iVar0]), true, true);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), 1);
					VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), true);
					VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), false);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), false, 0);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), false);
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), true);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), true, true, false);
					ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), true);
					VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), false);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_80.f_27) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_80.f_27))
					{
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), false);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_80.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_144());
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_80.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_143());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_142());
						}
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), SYSTEM::ROUND(fVar1), 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), SYSTEM::ROUND(fVar1));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), fVar1);
						if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_80.f_27))
						{
							VEHICLE::_0xE16142B94664DEFD(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), true);
						}
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_80.f_27))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							VEHICLE::_0x4056EA1105F5ABD7(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), fVar1);
							VEHICLE::_SET_HELI_TAIL_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), fVar1);
						}
					}
					else
					{
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_80.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_144());
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_80.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_143());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_142());
						}
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), SYSTEM::ROUND(fVar1), 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), SYSTEM::ROUND(fVar1));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), fVar1);
					}
					VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), true);
					if (Local_80.f_27 == joaat("SAVAGE"))
					{
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
					{
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
					{
						if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), "MPBitset"))
						{
							iVar2 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), "MPBitset");
						}
						MISC::SET_BIT(&iVar2, 10);
						MISC::SET_BIT(&iVar2, 15);
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), "MPBitset", iVar2);
					}
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), false, iLocal_1501);
					iVar3 = 0;
					while (iVar3 < 32)
					{
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), false, Global_1574967[iVar3]);
						iVar3++;
					}
					VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), false, false);
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), false);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), true);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), false);
					VEHICLE::_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), 0);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_80.f_12)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_7[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

var func_142()
{
	if (func_742())
	{
		return Global_262145.f_11368;
	}
	return Global_262145.f_11107;
}

var func_143()
{
	if (func_742())
	{
		return Global_262145.f_11369;
	}
	return Global_262145.f_11108;
}

var func_144()
{
	if (func_742())
	{
		return Global_262145.f_11367;
	}
	return Global_262145.f_11106;
}

bool func_145()
{
	int iVar0;
	int iVar1;

	if (!func_22(&(Local_80.f_362)))
	{
		func_20(&(Local_80.f_362), 0, 0);
		return false;
	}
	else if (!func_19(&(Local_80.f_362), 3000, 0))
	{
		return false;
	}
	if (!MISC::IS_BIT_SET(Local_80.f_3, 10))
	{
		if (func_159(&iVar0))
		{
			if (iVar0 < func_158())
			{
				MISC::SET_BIT(&(Local_80.f_3), 10);
			}
			else
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if ((IntToFloat(iVar1) < (50f * Global_262145.f_11362) && !Global_262145.f_11360) || Global_262145.f_11361)
				{
					MISC::SET_BIT(&(Local_80.f_3), 8);
					MISC::SET_BIT(&(Local_80.f_3), 10);
				}
				else
				{
					MISC::SET_BIT(&(Local_80.f_3), 10);
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_80.f_3, 10))
	{
		if (Local_80.f_12 == 0)
		{
			func_112();
			return false;
		}
		if (!MISC::IS_BIT_SET(Local_80.f_3, 13))
		{
			if (func_154())
			{
				if (!func_152(129, Local_80.f_1, Local_80.f_2, 0))
				{
					if (func_146())
					{
						MISC::SET_BIT(&(Local_80.f_3), 13);
					}
					else
					{
						Local_80.f_29 = -1;
					}
				}
				else
				{
					Local_80.f_29 = -1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Local_80.f_3, 13);
}

bool func_146()
{
	int iVar0;
	int iVar1;

	iVar0 = func_112();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_147(Local_80.f_30[iVar1 /*3*/], 1125515264 /* Float: 150f */))
		{
			return false;
		}
		if (!func_55(Local_80.f_30[iVar1 /*3*/], 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */, 1084227584 /* Float: 5f */, 1, 1, 1, 1123024896 /* Float: 120f */, 0, -1, 1, 50f, 0, 0, 0, 0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_147(vector3 vParam0, float fParam3)
{
	int iVar0[32];
	int iVar33;
	int iVar34;
	bool bVar35;
	vector3 vVar36;
	vector3 vVar39;
	int iVar42;
	struct<10> Var43;
	int iVar53;

	if (Global_2424150.f_309.f_225 == 0)
	{
		return false;
	}
	iVar33 = 0;
	iVar34 = 0;
	bVar35 = true;
	while (bVar35)
	{
		if (Global_2424150.f_309[iVar34 /*7*/] != -1)
		{
			iVar0[iVar33] = MISC::GET_HASH_KEY(&(Global_2424150.f_309[iVar34 /*7*/].f_1));
			iVar33++;
			if (iVar33 == Global_2424150.f_309.f_225)
			{
				bVar35 = false;
			}
		}
		iVar34++;
		if (iVar34 >= 32)
		{
			bVar35 = false;
		}
	}
	if (iVar33 == 0)
	{
		return false;
	}
	vVar36 = { 0f, 0f, 0f };
	vVar39 = { vParam0 };
	iVar42 = 0;
	Var43.f_1 = -1;
	Var43.f_2 = -1;
	Var43.f_9 = -1;
	iVar53 = 0;
	iVar34 = 0;
	while (iVar34 < Global_1311741)
	{
		if (MISC::IS_BIT_SET(Global_2359721[iVar34 /*26*/].f_12, 11))
		{
			vVar36 = { Global_2359721[iVar34 /*26*/].f_3 };
			vVar39.f_2 = vVar36.z;
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar36, vVar39, true) < fParam3)
			{
				Var43 = { Global_2359721[iVar34 /*26*/].f_15 };
				iVar53 = func_148(&Var43);
				iVar42 = 0;
				while (iVar42 < iVar33)
				{
					if (iVar53 == iVar0[iVar42])
					{
						return true;
					}
					iVar42++;
				}
			}
		}
		iVar34++;
	}
	return false;
}

int func_148(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_149(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar1 /*13*/].f_3;
		case 62:
			return Global_917806.f_9405[iVar1 /*13*/].f_3;
		default:
			break;
	}
	return iVar0;
}

int func_149(var uParam0)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_151(uParam0->f_1))
	{
		if (func_150(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (MISC::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!MISC::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (MISC::IS_BIT_SET(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		case 62:
			if (MISC::IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_917806.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!MISC::IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (MISC::IS_BIT_SET(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_917806.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		case 40:
			return uParam0->f_1;
		default:
			break;
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (MISC::IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_939452.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (MISC::IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (MISC::IS_BIT_SET(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_939452.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

bool func_150(var uParam0)
{
	if (Global_2398103)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return true;
		}
	}
	return false;
}

bool func_151(int iParam0)
{
	return iParam0 == 9999;
}

bool func_152(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
		case 150:
			return false;
		default:
			break;
	}
	iVar1 = func_153(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8112)
		{
			if (Global_2506618.f_136[iVar0 /*2*/] == iVar1 && Global_2506618.f_136[iVar0 /*2*/].f_1 == func_139(iParam0, iParam1, iParam2, iParam3))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		case 139:
			return 14;
		case 141:
			return 16;
		case 133:
			return 9;
		case 138:
			return 13;
		case 144:
			return 17;
		case 132:
			return 8;
		case 131:
			return 10;
		case 146:
			return 18;
		case 129:
			return 11;
		case 140:
			return 15;
		case 236:
			return 19;
		case 150:
			return 20;
		default:
			break;
	}
	return -1;
}

bool func_154()
{
	if (func_156(&(Local_80.f_27)))
	{
		if (Local_80.f_4)
		{
			func_155();
		}
		func_40();
		return true;
	}
	return false;
}

void func_155()
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

bool func_156(var uParam0)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar0)
	{
		case 0:
			if (!func_157(joaat("RHINO")))
			{
				Local_80.f_28 = 1;
				*uParam0 = joaat("RHINO");
				return true;
			}
			break;
		case 1:
			if (!func_157(joaat("HYDRA")))
			{
				Local_80.f_28 = 1;
				*uParam0 = joaat("HYDRA");
				Local_80.f_4 = 1;
				return true;
			}
			break;
		case 2:
			if (!func_157(joaat("SAVAGE")))
			{
				Local_80.f_28 = 4;
				*uParam0 = joaat("SAVAGE");
				Local_80.f_4 = 1;
				return true;
			}
			break;
		case 3:
			if (!func_157(joaat("VALKYRIE")))
			{
				Local_80.f_28 = 4;
				*uParam0 = joaat("VALKYRIE");
				return true;
			}
			break;
		case 4:
			if (!func_157(joaat("BUZZARD")))
			{
				Local_80.f_28 = 4;
				*uParam0 = joaat("BUZZARD");
				return true;
			}
			break;
	}
	return false;
}

bool func_157(int iParam0)
{
	if (!func_742())
	{
		switch (iParam0)
		{
			case joaat("RHINO"):
				return Global_262145.f_11096;
			case joaat("HYDRA"):
				return Global_262145.f_11098;
			case joaat("SAVAGE"):
				return Global_262145.f_11097;
			case joaat("BUZZARD"):
				return Global_262145.f_11100;
			case joaat("VALKYRIE"):
				return Global_262145.f_11099;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("RHINO"):
				return Global_262145.f_11376;
			case joaat("HYDRA"):
				return Global_262145.f_11378;
			case joaat("SAVAGE"):
				return Global_262145.f_11377;
			case joaat("BUZZARD"):
				return Global_262145.f_11380;
			case joaat("VALKYRIE"):
				return Global_262145.f_11379;
		}
	}
	return false;
}

int func_158()
{
	return Global_262145.f_11110;
}

bool func_159(int iParam0)
{
	int iVar0;

	if (!func_22(&(Local_80.f_334)))
	{
		func_20(&(Local_80.f_334), 0, 0);
	}
	else if (func_19(&(Local_80.f_334), 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				if (!func_16(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)), 0))
				{
					if (!MISC::IS_BIT_SET(Local_714[iVar0 /*18*/].f_2, 7))
					{
						*iParam0++;
					}
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

bool func_160(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::IS_TIME_EQUAL_TO(NETWORK::_0xBA7F0B77D80A4EB7(), *uParam0)) >= 1000)
		{
			return true;
		}
	}
	return false;
}

void func_161(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_20(uParam0, 0, 0);
		}
	}
}

void func_162()
{
	vector3 vVar0;

	if (iLocal_3468 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iLocal_3468]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_7[iLocal_3468]))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_80.f_7[iLocal_3468]), false) };
				if (vVar0.z < -25f)
				{
					func_25(&(Local_80.f_7[iLocal_3468]));
				}
			}
		}
	}
	iLocal_3468++;
	if (iLocal_3468 >= 4)
	{
		iLocal_3468 = 0;
	}
}

void func_163()
{
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
	{
		if (!MISC::IS_BIT_SET(iLocal_1292, 13))
		{
			MISC::SET_BIT(&iLocal_1292, 13);
			NETWORK::_0x838DA0936A24ED4D(1, 0);
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_1292, 13))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				NETWORK::_0x838DA0936A24ED4D(0, 0);
				MISC::CLEAR_BIT(&iLocal_1292, 13);
			}
		}
	}
}

void func_164()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (func_415())
	{
		func_269(0);
	}
	iVar0 = Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_740;
	if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
	}
	if (iVar0 != func_5())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
				iVar2 = iVar1;
				iVar3 = Local_714[iVar2 /*18*/].f_17;
				switch (iVar3)
				{
					case 0:
						func_196();
						func_193(iVar2);
						break;
					case 1:
						func_192();
						func_169();
						func_165(1);
						break;
					case 2:
						func_165(0);
						break;
				}
			}
		}
	}
}

void func_165(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (bParam0)
		{
			func_166(Local_80.f_48[iVar0], &(Local_1308[iVar0 /*8*/]), -1082130432 /* Float: -1f */, 0, 1, 0, 0, -1, -1, 1);
		}
		else
		{
			func_166(Local_80.f_48[iVar0], &(Local_1308[iVar0 /*8*/]), -1082130432 /* Float: -1f */, 0, 1, 0, 0, 55, -1, 1);
		}
		if (HUD::DOES_BLIP_EXIST(Local_1308[iVar0 /*8*/]))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1308[iVar0 /*8*/], "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_1308[iVar0 /*8*/], true);
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_1308[iVar0 /*8*/].f_1))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1308[iVar0 /*8*/].f_1, "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_1308[iVar0 /*8*/].f_1, true);
			}
		}
		if (Local_80.f_27 != joaat("HYDRA"))
		{
			if (MISC::IS_BIT_SET(Local_80.f_272[func_91(iVar0)], func_90(iVar0)) || MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar0)], func_90(iVar0)))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_48[iVar0]))
				{
					func_92(&(Local_1308[iVar0 /*8*/]));
				}
			}
		}
		else if ((iVar0 % 4) == 0)
		{
			iVar1 = (iVar0 / 4);
			if (MISC::IS_BIT_SET(Local_80.f_271, iVar1) || MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_48[iVar0]))
				{
					func_92(&(Local_1308[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_166(int iParam0, int* iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_168())
		{
			Global_2439138 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_167(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2439138, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_167(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2439138, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_92(iParam1);
	}
}

int func_167(int iParam0, int* iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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

bool func_168()
{
	return Global_1312854;
}

void func_169()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4[4];
	bool bVar9;
	int iVar10[4];
	var uVar15[4];
	int iVar20;
	int iVar21;

	iVar2 = (func_34() - func_126(&(Local_80.f_332), 0, 0));
	if (iLocal_3414 == 0)
	{
		if (MISC::IS_BIT_SET(iLocal_1291, 26))
		{
			if ((MISC::IS_BIT_SET(Local_80.f_3, 0) && MISC::IS_BIT_SET(Local_80.f_3, 1)) && MISC::IS_BIT_SET(Local_80.f_3, 2))
			{
				iLocal_3414 = (func_34() - func_126(&(Local_80.f_332), 0, 0));
				iVar2 = iLocal_3414;
			}
		}
	}
	else
	{
		iVar2 = iLocal_3414;
	}
	if (MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
	{
		return;
	}
	if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 >= 0)
	{
		return;
	}
	if (func_742())
	{
		iVar0 = (((Local_80.f_256[0] + Local_80.f_256[1]) + Local_80.f_256[2]) + Local_80.f_256[3]);
	}
	else
	{
		iVar0 = Local_80.f_256[0];
	}
	func_191(iVar2);
	if (iVar2 > 30000)
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 6;
	}
	if (func_742())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar21 = PLAYER::INT_TO_PLAYERINDEX(Local_80.f_594[iVar1 /*4*/].f_2);
			if (iVar21 != func_5())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar21))
				{
					sVar4[iVar1] = PLAYER::GET_PLAYER_NAME(iVar21);
					iVar10[iVar1] = Local_80.f_594[iVar1 /*4*/].f_1;
					uVar15[iVar1] = Local_80.f_594[iVar1 /*4*/];
					if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 == uVar15[iVar1])
					{
						iVar20 = uVar15[iVar1];
						iVar20++;
					}
					uVar15[iVar1]++;
				}
				else
				{
					sVar4[iVar1] = "";
					iVar10[iVar1] = -1;
				}
			}
			else
			{
				sVar4[iVar1] = "";
				iVar10[iVar1] = -1;
			}
			iVar1++;
		}
		if ((func_34() - func_126(&(Local_80.f_332), 0, 0)) >= 0)
		{
			if (Local_80.f_27 == joaat("RHINO") || Local_80.f_27 == joaat("HYDRA"))
			{
				func_187(sVar4[0], uVar15[0], sVar4[1], uVar15[1], sVar4[2], uVar15[2], sVar4[3], uVar15[3], iVar10[0], iVar10[1], iVar10[2], iVar10[3], iVar2, iVar3, func_188(), iVar20);
			}
			else
			{
				func_185(iVar10[0], uVar15[0], iVar10[1], uVar15[1], iVar10[2], uVar15[2], iVar10[3], uVar15[3], iVar2, iVar3, func_188(), iVar20);
			}
		}
	}
	else if (iVar2 >= 0)
	{
		if (iVar0 > Local_80.f_255)
		{
			iVar0 = Local_80.f_255;
		}
		if (Local_80.f_27 == joaat("RHINO") || Local_80.f_27 == joaat("HYDRA"))
		{
			func_184(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), iVar0, iVar0, Local_80.f_255, iVar2, iVar3, 0, func_188());
		}
		else
		{
			func_170(iVar0, iVar0, Local_80.f_255, iVar2, iVar3, 0, func_188(), 1);
		}
		if (bVar9)
		{
			func_115();
		}
	}
}

void func_170(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, char* sParam6, int iParam7)
{
	char cVar0[64];
	char* sVar16;

	if (func_181(0) == 0)
	{
		return;
	}
	func_180();
	func_179();
	StringCopy(&cVar0, "HUD_TEAM", 64);
	if (bParam5)
	{
		func_176(iParam0, &cVar0, -1, iParam7, 5, 1, "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	func_175(iParam1, iParam2, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar16 = "HUD_COUNTDOWN";
	if (!func_174(sParam6))
	{
		sVar16 = sParam6;
	}
	func_171(iParam3, sVar16, 0, 0, -1, 0, 3, 0, iParam4, 0, 0, 0, iParam4, 0, 0, 0, 0, -1);
}

void func_171(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_173(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_172(7, iVar0);
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

void func_172(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_173(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

bool func_174(char* sParam0)
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

void func_175(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_173(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_172(4, iVar0);
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

void func_176(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
			if (func_173(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_172(6, iVar0);
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
		if (iParam15 == 5 && func_178())
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
			if (func_177())
			{
				Global_1378678.f_1134 = 1;
			}
		}
	}
}

bool func_177()
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

bool func_178()
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return true;
	}
	return false;
}

void func_179()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2462225 = 1;
}

void func_180()
{
	Global_1378678.f_1130 = 1;
}

int func_181(bool bParam0)
{
	if (func_183())
	{
		return 0;
	}
	if (func_182())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_844(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_182()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_196 != 0;
}

bool func_183()
{
	return MISC::IS_BIT_SET(Global_2359302, 12);
}

void func_184(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7)
{
	char* sVar0;

	if (func_181(0) == 0)
	{
		return;
	}
	func_179();
	func_180();
	if (bParam6)
	{
		func_176(iParam1, sParam0, -1, 1, 5, 1, "HUD_NUMKILLS", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	func_175(iParam2, iParam3, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_174(sParam7))
	{
		sVar0 = sParam7;
	}
	func_171(iParam4, sVar0, 0, 0, -1, 0, 3, 0, iParam5, 0, 0, 0, iParam5, 0, 0, 0, 0, -1);
}

void func_185(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11)
{
	struct<16> Var0;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	char* sVar20;

	if (func_181(0) == 0)
	{
		return;
	}
	func_180();
	func_179();
	if (iParam0 > -1)
	{
		Var0 = { func_186(iParam1) };
		iVar16 = 1;
		if (iParam11 == iParam1)
		{
			iVar16 = 9;
		}
		func_176(iParam0, &Var0, -1, iVar16, 7, 1, "", 0, 0, 0, 0, iVar16, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam2 > -1)
	{
		Var0 = { func_186(iParam3) };
		iVar17 = 1;
		if (iParam11 == iParam3)
		{
			iVar17 = 9;
		}
		func_176(iParam2, &Var0, -1, iVar17, 6, 1, "", 0, 0, 0, 0, iVar17, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam4 > -1)
	{
		Var0 = { func_186(iParam5) };
		iVar18 = 1;
		if (iParam11 == iParam5)
		{
			iVar18 = 9;
		}
		func_176(iParam4, &Var0, -1, iVar18, 5, 1, "", 0, 0, 0, 0, iVar18, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam6 > -1)
	{
		Var0 = { func_186(iParam7) };
		iVar19 = 1;
		if (iParam11 == iParam7)
		{
			iVar19 = 9;
		}
		func_176(iParam6, &Var0, -1, iVar19, 4, 1, "", 0, 0, 0, 0, iVar19, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar20 = "HUD_COUNTDOWN";
	if (!func_174(sParam10))
	{
		sVar20 = sParam10;
	}
	func_171(iParam8, sVar20, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0, -1);
}

struct<16> func_186(int iParam0)
{
	struct<16> Var0;

	StringConCat(&Var0, HUD::_GET_LABEL_TEXT("HUD_TEAM"), 64);
	StringConCat(&Var0, " ", 64);
	StringIntConCat(&Var0, iParam0, 64);
	return Var0;
}

void func_187(char* sParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;

	if (func_181(0) == 0)
	{
		return;
	}
	func_180();
	func_179();
	if (iParam8 > -1)
	{
		iVar0 = 1;
		if (iParam15 == iParam1)
		{
			iVar0 = 9;
		}
		func_176(iParam8, sParam0, -1, 1, 7, 1, "", 0, 0, 0, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam9 > -1)
	{
		iVar1 = 1;
		if (iParam15 == iParam3)
		{
			iVar1 = 9;
		}
		func_176(iParam9, sParam2, -1, 1, 6, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam10 > -1)
	{
		iVar2 = 1;
		if (iParam15 == iParam5)
		{
			iVar2 = 9;
		}
		func_176(iParam10, sParam4, -1, 1, 5, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam11 > -1)
	{
		iVar3 = 1;
		if (iParam15 == iParam7)
		{
			iVar3 = 9;
		}
		func_176(iParam11, sParam6, -1, 1, 4, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar4 = "HUD_COUNTDOWN";
	if (!func_174(sParam14))
	{
		sVar4 = sParam14;
	}
	func_171(iParam12, sVar4, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0, 0, 0, -1);
}

char* func_188()
{
	return "HUD_COUNTDOWN";
	switch (func_190(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG";
		case 132:
			return "AET_CHK_COLL";
		case 133:
			switch (func_189())
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

int func_189()
{
	if (func_190(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2537071.f_5045;
	}
	return -1;
}

int func_190(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/];
	}
	return -1;
}

void func_191(int iParam0)
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

void func_192()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_1303[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_1303[iVar0]));
		}
		iVar0++;
	}
}

void func_193(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_1303[iVar0]))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iVar0]))
			{
				if (!MISC::IS_BIT_SET(Local_80.f_13, iVar0))
				{
					if (!MISC::IS_BIT_SET(Local_714[iParam0 /*18*/].f_1, iVar0))
					{
						iLocal_1303[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]));
						HUD::SET_BLIP_SPRITE(iLocal_1303[iVar0], 429);
						func_194(&(iLocal_1303[iVar0]), 29);
						if (func_742())
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1303[iVar0], "UW_BLIPC");
						}
						else
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1303[iVar0], "UW_BLIP");
						}
						HUD::SET_BLIP_PRIORITY(iLocal_1303[iVar0], 9);
					}
					else if (HUD::DOES_BLIP_EXIST(iLocal_1303[iVar0]))
					{
						HUD::REMOVE_BLIP(&(iLocal_1303[iVar0]));
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_1303[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_1303[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_194(var uParam0, int iParam1)
{
	int iVar0;

	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_195(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_195(int iParam0)
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

void func_196()
{
	bool bVar0;

	bVar0 = func_261();
	if (bVar0)
	{
		if (Local_80.f_413 > -1)
		{
			if ((Local_80.f_413 - func_126(&(Local_80.f_326), 0, 0)) >= 0)
			{
				if (!func_200())
				{
					func_199((Local_80.f_413 - func_126(&(Local_80.f_326), 0, 0)));
					func_197((Local_80.f_413 - func_126(&(Local_80.f_326), 0, 0)), func_198(-1));
				}
			}
			else
			{
				if (!func_200())
				{
					func_197(0, func_198(-1));
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					MISC::SET_BIT(&(Local_80.f_3), 4);
				}
			}
		}
	}
}

void func_197(int iParam0, char* sParam1)
{
	char* sVar0;

	if (func_181(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_174(sParam1))
	{
		sVar0 = sParam1;
	}
	func_171(iParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_198(int iParam0)
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

void func_199(int iParam0)
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

bool func_200()
{
	bool bVar0;
	int iVar1;

	if (func_259(8))
	{
		bVar0 = true;
	}
	if (func_259(0))
	{
		bVar0 = true;
	}
	if (!func_251(129, 0, 0))
	{
		bVar0 = true;
	}
	if (!func_207(0, 1, 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					func_205(0, -1);
					MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
	{
		MISC::CLEAR_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
	}
	if (Global_1662006)
	{
		bVar0 = true;
	}
	if (func_204(PLAYER::PLAYER_ID()))
	{
		bVar0 = true;
	}
	if (func_203(PLAYER::PLAYER_ID(), 2))
	{
		bVar0 = true;
	}
	if (func_201(PLAYER::PLAYER_ID()))
	{
		bVar0 = true;
	}
	return bVar0;
}

bool func_201(bool bParam0)
{
	if (func_202(bParam0))
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 8);
}

bool func_202(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 2);
}

bool func_203(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_208, iParam1);
}

bool func_204(bool bParam0)
{
	if (!func_844(bParam0, 0, 1))
	{
		return false;
	}
	return Global_1590535[bParam0 /*876*/].f_35;
}

void func_205(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_1590408)
		{
			if (!func_259(0) && !func_259(func_206(iParam1)))
			{
				Global_1590408 = 1;
			}
		}
	}
	else if (Global_1590408)
	{
		Global_1590408 = 0;
	}
}

int func_206(int iParam0)
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

bool func_207(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_250(PLAYER::PLAYER_ID(), 29))
	{
		return false;
	}
	if (func_203(PLAYER::PLAYER_ID(), 21))
	{
		return false;
	}
	if (func_203(PLAYER::PLAYER_ID(), 25))
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
	if (func_248(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_247())
	{
		return false;
	}
	if (bParam2)
	{
		if (func_246(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	if (func_245())
	{
		return false;
	}
	if (bParam0)
	{
		if (func_244(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	else if (func_228(PLAYER::PLAYER_ID()) == 3)
	{
		return false;
	}
	if (func_227(PLAYER::PLAYER_ID()) != func_5() && func_227(PLAYER::PLAYER_ID()) == func_65(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_225(func_226()) && !func_224(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_223())
	{
		return false;
	}
	if (func_182())
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return false;
	}
	if (func_221(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!func_219())
	{
		return false;
	}
	if (func_203(PLAYER::PLAYER_ID(), 0) || func_203(PLAYER::PLAYER_ID(), 3))
	{
		return false;
	}
	if ((func_203(PLAYER::PLAYER_ID(), 12) || func_203(PLAYER::PLAYER_ID(), 14)) || func_203(PLAYER::PLAYER_ID(), 13))
	{
		return false;
	}
	if (func_218(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_217() && !Global_2513487)
		{
			return false;
		}
	}
	if (func_216(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_215())
	{
		return false;
	}
	if (Global_1662006)
	{
		return false;
	}
	if (func_204(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_214())
	{
		return false;
	}
	if (func_212(PLAYER::PLAYER_ID()) && Global_1590184.f_171)
	{
		return false;
	}
	if (func_211())
	{
		return false;
	}
	if (func_210(PLAYER::PLAYER_ID()))
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
	if (!func_209(PLAYER::PLAYER_ID()))
	{
		if (func_208(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	return true;
}

bool func_208(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0 /*13*/].f_12 != 0;
	}
	return false;
}

bool func_209(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[iVar0 /*615*/].f_1, 7);
	}
	return false;
}

bool func_210(int iParam0)
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

bool func_211()
{
	return Global_1676377.f_474;
}

int func_212(int iParam0)
{
	if (func_213(Global_1590535[iParam0 /*876*/].f_274.f_28))
	{
		return 1;
	}
	return 0;
}

bool func_213(int iParam0)
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

bool func_214()
{
	if (Global_4254512.f_943 > -1)
	{
		return true;
	}
	return false;
}

bool func_215()
{
	return Global_98796.f_346 > 0;
}

bool func_216(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 11);
}

bool func_217()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_218(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_5())
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

bool func_219()
{
	if (func_220() == 0)
	{
		return true;
	}
	return false;
}

int func_220()
{
	return Global_1312467.f_18;
}

bool func_221(int iParam0)
{
	return func_222(iParam0);
}

bool func_222(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_13.f_1, 0);
}

bool func_223()
{
	return Global_1312877;
}

bool func_224(int iParam0)
{
	if (func_190(iParam0) == 236 || func_190(iParam0) == 150)
	{
		return true;
	}
	return false;
}

bool func_225(int iParam0)
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

int func_226()
{
	return Global_2439138.f_2723[0 /*80*/].f_1;
}

int func_227(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_11.f_35;
}

int func_228(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = 2;
	bVar1 = ((func_243(iParam0) && !func_202(iParam0)) && !MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 8));
	bVar2 = func_244(iParam0);
	bVar3 = func_242();
	bVar4 = func_233();
	if ((bVar1 && (func_209(iParam0) || func_232(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_231(iParam0)) && !func_229(iParam0)))
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

bool func_229(int iParam0)
{
	return func_230(iParam0, 19);
}

bool func_230(bool bParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_11.f_4, iParam1);
}

bool func_231(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_230(iParam0, 9);
	}
	return false;
}

bool func_232(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[iVar0 /*615*/].f_1, 0);
	}
	return false;
}

int func_233()
{
	if ((func_230(PLAYER::PLAYER_ID(), 21) || func_230(PLAYER::PLAYER_ID(), 22)) || func_239())
	{
		return 1;
	}
	if (func_235())
	{
		func_234(22);
		return 1;
	}
	return 0;
}

void func_234(int iParam0)
{
	MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_4), iParam0);
}

bool func_235()
{
	if (func_238(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_242() && !func_237()) || func_203(PLAYER::PLAYER_ID(), 21)) || func_203(PLAYER::PLAYER_ID(), 25))
		{
			return true;
		}
		else
		{
			func_236(27);
		}
	}
	return false;
}

void func_236(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_4), iParam0);
}

bool func_237()
{
	return Global_1312418.f_1;
}

bool func_238(bool bParam0, bool bParam1)
{
	if (Global_1628237[bParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[bParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_239()
{
	return func_240(358, -1);
}

int func_240(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_241(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_241(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_18();
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

bool func_242()
{
	return Global_1312418;
}

bool func_243(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return Global_1628237[bVar0 /*615*/] != -1;
	}
	return false;
}

bool func_244(bool bParam0)
{
	return func_230(bParam0, 20);
}

bool func_245()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 5;
}

bool func_246(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_261.f_4 != 0 || Global_2425662[iParam0 /*421*/].f_261.f_5)
	{
		return true;
	}
	return false;
}

bool func_247()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_18, 0);
}

bool func_248(int iParam0)
{
	if (func_249(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0 /*876*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_249(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_221(iParam0))
		{
			return true;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0 /*876*/] == -1)
	{
		return false;
	}
	return true;
}

bool func_250(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_11.f_5, iParam1);
}

bool func_251(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (Global_262145.f_7686 == 1)
	{
		if (iParam0 == 67)
		{
			return true;
		}
		if (iParam0 == 74)
		{
			return true;
		}
		if (func_255(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return true;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return true;
		}
	}
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4718 == 1)
		{
			return true;
		}
	}
	if (func_254() || func_253())
	{
		return true;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_252())
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (bParam2)
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1574637[iVar1], iVar0);
}

bool func_252()
{
	int iVar0;

	if (Global_1312448)
	{
		return true;
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_1731, 23))
	{
		return true;
	}
	if (func_254())
	{
		return true;
	}
	if (func_253())
	{
		return true;
	}
	iVar0 = Global_1388048[func_241(-1)];
	if (MISC::IS_BIT_SET(iVar0, 7))
	{
		MISC::SET_BIT(&(Global_2537071.f_1731), 23);
		return true;
	}
	return false;
}

bool func_253()
{
	return Global_1312865;
}

bool func_254()
{
	return Global_1312867;
}

bool func_255(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_258())
	{
		return false;
	}
	if (func_257())
	{
		return false;
	}
	if (iParam1 == 86)
	{
		return true;
	}
	iVar0 = func_256(iParam1);
	iVar1 = iVar0;
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_730, iVar1);
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		case 19:
			return 1;
		case 12:
			return 2;
		case 31:
			return 3;
		case 20:
			return 4;
		case 18:
			return 5;
		case 2:
			return 6;
		case 76:
			return 7;
		case 22:
			return 8;
		case 53:
			return 9;
		case 34:
			return 10;
		case 152:
			return 11;
		case 85:
			return 12;
		case 84:
			return 13;
		case 0:
			return 14;
		case 1:
			return 15;
		case 153:
			return 16;
		case 151:
			return 17;
		case 14:
			return 18;
		case 15:
			return 19;
		case 24:
			return 20;
		case 30:
			return 21;
		case 46:
			return 22;
		case 47:
			return 23;
		case 54:
			return 24;
		case 51:
			return 25;
		case 60:
			return 26;
		case 62:
			return 27;
		case 66:
			return 28;
		case 69:
			return 29;
		case 154:
			return 30;
		case 82:
			return 31;
		case 157:
			return 32;
		default:
			break;
	}
	return 1;
}

bool func_257()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_146, 3);
}

int func_258()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_254())
	{
		return 1;
	}
	if (func_253())
	{
		return 1;
	}
	return func_240(120, -1);
}

bool func_259(int iParam0)
{
	int iVar0;

	iVar0 = func_260(2480, -1, 0);
	return MISC::IS_BIT_SET(iVar0, iParam0);
}

int func_260(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_241(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_261()
{
	bool bVar0;

	if (!func_742())
	{
		if (Local_80.f_27 == joaat("HYDRA") || Local_80.f_27 == joaat("RHINO"))
		{
			return false;
		}
	}
	else if (Local_80.f_27 == joaat("HYDRA") || Local_80.f_27 == joaat("RHINO"))
	{
		if (func_112() == 2)
		{
			return false;
		}
	}
	if (!func_742())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[0]))
		{
			if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_7[0])) == joaat("VALKYRIE"))
			{
				bVar0 = Local_80.f_15 != false;
			}
			else
			{
				bVar0 = Local_80.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = MISC::IS_BIT_SET(Local_80.f_3, 9);
	}
	if (!func_16(PLAYER::PLAYER_ID(), 0))
	{
		if (bVar0 && !func_200())
		{
			if (func_742())
			{
				if (!func_268("UW_ABTSC"))
				{
					func_262("UW_ABTSC", 0);
				}
			}
			else if (!func_268("UW_ABTS"))
			{
				func_262("UW_ABTS", 0);
			}
		}
		else if (func_268("UW_ABTSC") || func_268("UW_ABTS"))
		{
			func_9();
		}
	}
	return bVar0;
}

void func_262(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_266(sParam0))
	{
		return;
	}
	func_10();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_265();
	func_264(bParam1);
	func_263();
}

void func_263()
{
	MISC::SET_BIT(&(Global_1312585.f_59), 1);
}

void func_264(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_265()
{
	Global_1312585.f_10 = NETWORK::HAS_NETWORK_TIME_STARTED(NETWORK::_0xBA7F0B77D80A4EB7(), 86400000);
	Global_1312585.f_11 = NETWORK::_0xBA7F0B77D80A4EB7();
}

bool func_266(char* sParam0)
{
	if (!func_15())
	{
		return false;
	}
	if (Global_1312585 == 11)
	{
		return func_267(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_267(char* sParam0)
{
	if (!func_15())
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

bool func_268(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	if (!func_15())
	{
		return false;
	}
	if (Global_1312585 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return false;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return false;
	}
	return func_266(sParam0);
}

void func_269(bool bParam0)
{
	int iVar0;
	struct<4> Var1;
	bool bVar5;

	Var1 = { func_414() };
	bVar5 = false;
	if (Local_80.f_27 == joaat("RHINO") || Local_80.f_27 == joaat("HYDRA"))
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_1517[iVar0 /*42*/] = -1;
			Local_1517[iVar0 /*42*/].f_1 = func_5();
			Local_1517[iVar0 /*42*/].f_9 = 0;
			Local_1517[iVar0 /*42*/].f_31 = -1;
			if (Local_80.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_1517[iVar0 /*42*/].f_1 = Local_80.f_465[iVar0 /*4*/].f_2;
				Local_1517[iVar0 /*42*/].f_9 = Local_80.f_465[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!func_413())
			{
				if (Local_2862.f_103 != 129)
				{
					Local_2862.f_103 = 129;
				}
				else
				{
					func_205(1, 129);
				}
			}
		}
		else if (Local_2862.f_103 != 129)
		{
			Local_2862.f_103 = 129;
		}
		func_274(&Local_1517, &iLocal_1516, 27, &Local_2862, &uLocal_2978, -1, 0, 0);
		if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			if (Local_1517[0 /*42*/].f_1 != PLAYER::PLAYER_ID())
			{
				if (Local_80.f_465[0 /*4*/].f_1 > 0)
				{
					func_273();
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_1517[iVar0 /*42*/] = -1;
			Local_1517[iVar0 /*42*/].f_1 = func_5();
			Local_1517[iVar0 /*42*/].f_9 = 0;
			Local_1517[iVar0 /*42*/].f_31 = -1;
			Local_1517[iVar0 /*42*/].f_39 = -1;
			if (Local_80.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_1517[iVar0 /*42*/].f_39 = Local_80.f_465[iVar0 /*4*/] + 1;
				Local_1517[iVar0 /*42*/].f_1 = PLAYER::INT_TO_PLAYERINDEX(Local_80.f_465[iVar0 /*4*/].f_2);
				Local_1517[iVar0 /*42*/].f_40 = Local_80.f_465[iVar0 /*4*/].f_1;
				Local_1517[iVar0 /*42*/].f_9 = Local_80.f_465[iVar0 /*4*/].f_1;
				Local_1517[iVar0 /*42*/].f_2 = Local_80.f_465[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_270();
		if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			if (Local_80.f_594[0 /*4*/] > 0)
			{
				if (Local_80.f_594[0 /*4*/] != Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9)
				{
					if (Local_80.f_256[Local_80.f_594[0 /*4*/]] > 0)
					{
						func_273();
					}
				}
			}
		}
		func_274(&Local_1517, &iLocal_1516, 27, &Local_2862, &uLocal_2978, -1, 1, 0);
		if (bParam0)
		{
			if (!func_413())
			{
				if (Local_2862.f_103 != 129)
				{
					Local_2862.f_103 = 129;
				}
				else
				{
					func_205(1, 129);
				}
			}
		}
		else if (Local_2862.f_103 != 129)
		{
			Local_2862.f_103 = 129;
		}
	}
}

void func_270()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;

	uLocal_3503[0] = Local_80.f_594[0 /*4*/];
	uLocal_3503[1] = Local_80.f_594[1 /*4*/];
	uLocal_3503[2] = Local_80.f_594[2 /*4*/];
	uLocal_3503[3] = Local_80.f_594[3 /*4*/];
	iVar3 = Local_80.f_594[0 /*4*/];
	iVar4 = Local_80.f_594[1 /*4*/];
	iVar5 = Local_80.f_594[2 /*4*/];
	iVar6 = Local_80.f_594[3 /*4*/];
	if (iVar3 != -1)
	{
		uVar7 = Local_80.f_266[iVar3];
	}
	if (iVar4 != -1)
	{
		uVar8 = Local_80.f_266[iVar4];
	}
	if (iVar5 != -1)
	{
		uVar9 = Local_80.f_266[iVar5];
	}
	if (iVar6 != -1)
	{
		uVar10 = Local_80.f_266[iVar6];
	}
	uLocal_3508[0] = uVar7;
	uLocal_3508[1] = uVar8;
	uLocal_3508[2] = uVar9;
	uLocal_3508[3] = uVar10;
	iVar11 = 0;
	while (iVar11 < NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
	{
		iVar2 = func_272(uLocal_3503[iVar0], iVar11);
		if (iVar2 != -1)
		{
			Local_1517[iVar2 /*42*/].f_9 = Local_80.f_594[iVar0 /*4*/].f_1;
		}
		func_271(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_3508[iVar0])
		{
			iVar0++;
			iVar1 = 0;
		}
		if (iVar0 >= 4)
		{
			return;
		}
		iVar11++;
	}
}

void func_271(int iParam0, int iParam1)
{
	struct<42> Var0;

	if (iParam0 == -1 || iParam1 == -1)
	{
		return;
	}
	Var0 = { Local_1517[iParam1 /*42*/] };
	Local_1517[iParam1 /*42*/] = { Local_1517[iParam0 /*42*/] };
	Local_1517[iParam0 /*42*/] = { Var0 };
}

int func_272(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = iParam1;
	while (iVar0 <= (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() - 1))
	{
		if (iParam0 == Local_1517[iVar0 /*42*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
		}
		iVar0++;
	}
	return iVar1;
}

void func_273()
{
	MISC::SET_BIT(&(Global_2537071.f_1734), 19);
}

void func_274(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
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

	if (func_412(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_410() || iParam2 == 28)
	{
		if (func_361(iParam1, iParam2, uParam3, Global_1574185, 0, func_415(), sParam7))
		{
			func_360(1);
			if ((!func_358() && !func_356()) || MISC::IS_BIT_SET(Global_2537071.f_4588, 1))
			{
				if (func_355())
				{
					func_350();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_349(1);
						Global_1574185 = 0;
						iVar54 = -1;
						if (Global_1574406 != 1)
						{
							func_348(iParam1, 0, 0);
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
								if (func_844(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_16(bVar35, 0))
									{
										if ((func_347(bVar35) || Global_2425662[bVar35 /*421*/].f_236 != -1) || func_346(bVar35))
										{
											bVar44 = bVar35;
											if (func_345(bVar35))
											{
												iVar1[bVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_342(&iVar1, bVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_339(PLAYER::PLAYER_ID(), 0) && func_338(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_337())
							{
								if (func_844(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									bVar35 = func_5();
								}
							}
							else
							{
								bVar35 = (iParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_336(bVar35) && func_333(bVar35, iParam2)) && func_844(bVar35, 0, 1))
							{
								bVar44 = bVar35;
								uVar42 = Global_1590535[bVar44 /*876*/].f_211.f_6;
								Var38 = { func_328(bVar35) };
								if (bVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_66(bVar35) };
								iVar37 = func_322(bVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1574185++;
								if ((iParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (iParam0[iVar52 /*42*/])->f_22;
								}
								if ((iParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (iParam0[iVar52 /*42*/])->f_31;
								}
								if ((iParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (iParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (iParam0[iVar52 /*42*/])->f_9;
								if (((iParam0[iVar52 /*42*/])->f_9 != -1 || (iParam0[iVar52 /*42*/])->f_22 != -1f) || (iParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_337())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_317(&iVar43, &fVar45, (iParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_316(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (iParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_311(bVar35, 0);
								if (bVar34)
								{
									if (func_310(bVar35, 1) && iVar1[bVar44] != -1)
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
								if ((iParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&cVar57, "UW_TM", 16);
									StringIntConCat(&cVar57, (iParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_309(iParam5))
								{
									func_308(bVar35, iParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &cVar57, (iParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_308(bVar35, iParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &cVar57, (iParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
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
							if (func_844(bVar35, 0, 1) && !MISC::IS_BIT_SET(iVar49, bVar35))
							{
								bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								bVar35 = func_5();
							}
							if (func_336(bVar35))
							{
								if (func_844(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar44 = bVar35;
									uVar42 = Global_1590535[bVar44 /*876*/].f_211.f_6;
									Var38 = { func_328(bVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_66(bVar35) };
									iVar37 = func_322(bVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574185++;
									iVar51 = func_311(bVar35, 1);
									if (bVar34)
									{
										if (func_310(bVar35, 1))
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
									func_287(bVar35, PLAYER::GET_PLAYER_NAME(bVar35), iParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_284(uParam3, iParam1, iParam2);
						}
						func_106(&(uParam3->f_21));
						func_283();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_282(uParam3, iParam1);
							func_281(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_282(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_277(uParam3))
						{
							Global_1574406 = 1;
						}
						func_275(uParam3);
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
			func_283();
			func_349(0);
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

void func_275(var uParam0)
{
	if (!func_22(&(uParam0->f_21)))
	{
		func_20(&(uParam0->f_21), 0, 0);
	}
	else if (func_19(&(uParam0->f_21), 250, 0))
	{
		func_106(&(uParam0->f_21));
		func_276(0);
	}
}

void func_276(bool bParam0)
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

bool func_277(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;

	iVar16 = 0;
	iVar0 = uParam0->f_37;
	bVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar15 != func_5() && func_844(bVar15, 0, 1))
	{
		Var2 = { func_66(bVar15) };
		iVar1 = func_280(uParam0, uParam0->f_37);
		if (func_279(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_278(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_278(uParam0, iVar0, 1);
					}
					break;
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_278(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_278(uParam0, iVar0, 0);
					}
					break;
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_278(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_278(uParam0, iVar0, 0);
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

void func_278(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_279(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

int func_280(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_281(int* iParam0, bool bParam1, int iParam2)
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

void func_282(var uParam0, int* iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_283()
{
	if (Global_1574406 != 0)
	{
		Global_1574406 = 0;
	}
}

void func_284(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (bVar2 != func_5())
		{
			if (func_844(bVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_286(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_285(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590535[iVar0 /*876*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_285(int* iParam0, int iParam1, int iParam2, int iParam3)
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

int func_286(int iParam0, bool bParam1, int iParam2)
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

void func_287(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, var uParam5, char* sParam6, var uParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;

	if (iParam4 >= func_307() && iParam4 < func_306())
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
				func_305("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_305(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_305("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_305("");
			if (uParam3->f_108 == 6)
			{
				func_305("");
			}
			else
			{
				func_305(&uParam5);
			}
			func_292(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_291(uParam3))
			{
				func_290("DPAD_FRIEND");
			}
			else if (func_289(uParam3))
			{
				func_290("DPAD_FRIEND");
			}
			else if (func_288(uParam3))
			{
				func_290("DPAD_CREW");
			}
			else
			{
				func_290("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_288(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_289(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_290(bool bParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(bParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_291(var uParam0)
{
	if (func_289(uParam0) && func_288(uParam0))
	{
		return true;
	}
	return false;
}

void func_292(var uParam0, bool bParam1)
{
	if (func_304(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_297(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && bParam1 > -1) && bParam1 < 32) && MISC::IS_BIT_SET(Global_2425662[bParam1 /*421*/].f_413, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_293())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

bool func_293()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_295() || func_294())
		{
			return true;
		}
	}
	return false;
}

var func_294()
{
	return Global_2450632.f_15;
}

int func_295()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_294();
	}
	return func_296(Global_4456448.f_194990);
}

int func_296(int iParam0)
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

bool func_297(bool bParam0)
{
	if ((func_844(bParam0, 0, 1) && func_301()) && func_298(bParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_298(bool bParam0, bool bParam1)
{
	return func_299(bParam0, bParam1, 1);
}

int func_299(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (bParam0 == func_5())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_300(bParam0, iParam2))
		{
			return 0;
		}
	}
	bVar0 = Global_1628237[bParam0 /*615*/].f_11;
	if (bVar0 != func_5() && Global_1628237[bVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_300(bool bParam0, int iParam1)
{
	if (bParam0 != func_5())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_5())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 == bParam0 && Global_1628237[bParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_301()
{
	if (func_243(PLAYER::PLAYER_ID()) || func_303())
	{
		if (!func_302(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	return true;
}

bool func_302(int iParam0)
{
	if (func_190(iParam0) == 236 || func_190(iParam0) == 150)
	{
		return func_209(iParam0);
	}
	return false;
}

bool func_303()
{
	switch (func_338(PLAYER::PLAYER_ID()))
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

bool func_304(bool bParam0)
{
	if (func_293())
	{
		if (func_844(bParam0, 0, 1))
		{
			return func_345(bParam0);
		}
	}
	if ((func_844(bParam0, 0, 1) && func_301()) && func_300(bParam0, 0))
	{
		return true;
	}
	return false;
}

void func_305(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_306()
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

int func_307()
{
	int iVar0;

	iVar0 = 0;
	if (Global_1574187)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_308(bool bParam0, int* iParam1, var uParam2, int iParam3, var uParam4, char* sParam5, var uParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, bool bParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;

	if (iParam3 >= func_307() && iParam3 < func_306())
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
					func_305("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(bParam16))
				{
					func_290(bParam16);
				}
				else
				{
					func_305(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_305("");
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
				if (func_337())
				{
					func_305("");
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
						func_290(&(uParam2->f_104));
					}
					else
					{
						func_305("");
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
					func_305("");
				}
				if (uParam2->f_108 == 6)
				{
					func_305("");
				}
				else
				{
					func_305(&uParam4);
				}
				func_292(uParam2, bParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_305("");
					func_305("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_291(uParam2))
				{
					func_290("DPAD_FRIEND");
				}
				else if (func_289(uParam2))
				{
					func_290("DPAD_FRIEND");
				}
				else if (func_288(uParam2))
				{
					func_290("DPAD_CREW");
				}
				else
				{
					func_290("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

bool func_309(int iParam0)
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

bool func_310(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_345(bParam0))
		{
			return false;
		}
	}
	return Global_1628237[bParam0 /*615*/].f_11 != func_5();
}

int func_311(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 116;
	if ((!bParam1 && func_243(bParam0)) && !func_244(bParam0))
	{
		iVar0 = func_315();
	}
	iVar1 = func_314(bParam0);
	if (!iVar1 == -1)
	{
		return func_312(iVar1);
	}
	return iVar0;
}

int func_312(int iParam0)
{
	int iVar0;

	if (iParam0 > -1)
	{
		iVar0 = func_313(iParam0);
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

int func_313(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_314(bool bParam0)
{
	if (!bParam0 == func_5())
	{
		if (func_310(bParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_65(bParam0)];
		}
	}
	return -1;
}

int func_315()
{
	return 21;
}

char* func_316(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_317(int iParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_321(iParam3))
	{
		*fParam1 = (func_318(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_309(iParam3))
	{
		*fParam1 = (func_318(iParam3, iParam2) / 1000f);
		return 1;
	}
	*iParam0 = iParam2;
	return 0;
}

float func_318(int iParam0, int iParam1)
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
				return func_320(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_319(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_319(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_320(float fParam0)
{
	return (fParam0 / 0.3048f);
}

bool func_321(int iParam0)
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

int func_322(bool bParam0)
{
	int iVar0;

	iVar0 = func_325(bParam0);
	if (iVar0 == -1)
	{
		func_323(bParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_323(bool bParam0, bool bParam1)
{
	if (!func_844(bParam0, 0, 1))
	{
		return;
	}
	if (func_325(bParam0) != -1)
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
	if (func_324(bParam0))
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

bool func_324(bool bParam0)
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

int func_325(bool bParam0)
{
	int iVar0;

	if (!func_844(bParam0, 0, 1))
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
			func_326(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_326(int iParam0)
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
	func_327(&(Global_1389078[iVar32 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_327(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_5();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::_0xBA7F0B77D80A4EB7();
	}
}

struct<4> func_328(bool bParam0)
{
	char cVar0[32];

	if (func_844(bParam0, 0, 1))
	{
		Global_2513218 = { func_66(bParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_279(Global_2513218))
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
		if (func_332(&Global_2513218))
		{
			Global_2513148 = { func_330(bParam0) };
			func_329(&Global_2513148, &cVar0);
		}
	}
	return cVar0;
}

void func_329(int* iParam0, char* sParam1)
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(iParam0, 35, sParam1);
}

struct<35> func_330(bool bParam0)
{
	struct<13> Var0;
	struct<35> Var13;

	if (func_331(bParam0))
	{
		return Global_1312909[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_66(bParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

bool func_331(bool bParam0)
{
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return true;
	}
	return false;
}

bool func_332(int* iParam0)
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

bool func_333(bool bParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_202(bParam0) || func_335(bParam0)) || func_201(bParam0))
		{
			return false;
		}
	}
	if (!func_334(bParam0))
	{
		return false;
	}
	if ((!func_347(bParam0) && Global_2425662[bParam0 /*421*/].f_236 == -1) && !func_346(bParam0))
	{
		return false;
	}
	return true;
}

bool func_334(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_142, 22);
}

bool func_335(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 10) || MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 9));
	}
	return false;
}

bool func_336(bool bParam0)
{
	bool bVar0;

	if (bParam0 == func_5())
	{
		return false;
	}
	if (func_16(bParam0, 0))
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

bool func_337()
{
	switch (func_338(PLAYER::PLAYER_ID()))
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
	switch (func_190(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return true;
	}
	if (func_244(PLAYER::PLAYER_ID()))
	{
		switch (func_338(PLAYER::PLAYER_ID()))
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
	if (func_302(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

int func_338(bool bParam0)
{
	if (func_238(bParam0, 0))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_339(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 && func_340(Global_1628237[iParam0 /*615*/].f_11.f_33))
	{
		return true;
	}
	if (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1)
	{
		if (func_340(Global_1628237[iParam0 /*615*/].f_11.f_32))
		{
			return true;
		}
	}
	return false;
}

int func_340(int iParam0)
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
	return func_341(iParam0, 0);
	return 0;
}

int func_341(int iParam0, int iParam1)
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

void func_342(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_844(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_16(bVar1, 0))
			{
				if ((func_347(bVar1) || Global_2425662[bVar1 /*421*/].f_236 != -1) || func_346(bVar1))
				{
					if (func_343(bVar1, bParam1, 0))
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

bool func_343(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1 != func_5())
	{
		if (!bParam2)
		{
			if (func_344(bParam0, bParam1))
			{
				return false;
			}
		}
		if (Global_1628237[bParam0 /*615*/].f_11 != func_5())
		{
			return bParam1 == Global_1628237[bParam0 /*615*/].f_11;
		}
	}
	return false;
}

bool func_344(bool bParam0, bool bParam1)
{
	if (bParam1 != func_5())
	{
		if (bParam0 != func_5())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 != func_5())
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

bool func_345(bool bParam0)
{
	if (bParam0 != func_5())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_5())
		{
			return Global_1628237[bParam0 /*615*/].f_11 == bParam0;
		}
	}
	return false;
}

bool func_346(bool bParam0)
{
	return Global_1590535[bParam0 /*876*/].f_196 != 0;
}

bool func_347(bool bParam0)
{
	if (func_844(bParam0, 0, 1))
	{
		if (func_844(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(bParam0, PLAYER::PLAYER_ID()) || func_338(bParam0) == 233)
			{
				return true;
			}
		}
	}
	return false;
}

void func_348(int* iParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_349(bool bParam0)
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

void func_350()
{
	if (MISC::IS_BIT_SET(Global_2537071.f_4588, 1))
	{
		if (func_354())
		{
			func_351();
		}
	}
}

void func_351()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_2 != 0)
		{
			Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			func_352(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_352(var uParam0, int iParam1)
{
	func_353(uParam0, iParam1);
}

void func_353(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_354()
{
	return Global_2439138.f_2723[0 /*80*/].f_1 != 0;
}

bool func_355()
{
	if (MISC::IS_BIT_SET(Global_2537071.f_4588, 0) && func_354())
	{
		return true;
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_4588, 1) && func_354())
	{
		return true;
	}
	return false;
}

bool func_356()
{
	if (func_354())
	{
		if (func_357(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_357(int iParam0)
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

bool func_358()
{
	if (func_354())
	{
		if (func_359(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_359(int iParam0)
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

void func_360(int iParam0)
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

bool func_361(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
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
	bVar6 = func_409(iParam1);
	fVar7 = func_408();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_407())
		{
			if (func_406() > 0 && Global_1574187)
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
		if (!func_393())
		{
			func_392(iParam0, uParam2, 1);
			return false;
		}
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_4591, 26))
	{
		func_392(iParam0, uParam2, 1);
		return false;
	}
	if (!func_22(&(uParam2->f_19)))
	{
		if (func_406() == 1)
		{
			func_391(bVar6, iParam0, 0);
			func_20(&(uParam2->f_19), 0, 0);
			func_392(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2537071.f_4592), 5);
		}
	}
	if (func_22(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_19(&(uParam2->f_19), 10000, 0) || (func_406() == 0 && !bParam5))
		{
			func_392(iParam0, uParam2, 1);
			return false;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_390();
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
					func_390();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_391(bVar6, iParam0, 0))
				{
					func_348(iParam0, 0, 0);
					sVar4 = func_388(iParam1, &(Global_4456448.f_194997), bParam4);
					Var0 = { func_386(iParam1) };
					if (bParam4)
					{
						func_383(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_378(iParam0, func_380(uParam2), func_379(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_371(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar9 = sParam6;
						}
						func_369(iParam0, sVar9, func_370(), -1);
					}
					else if (func_293())
					{
						uParam2->f_34 = Global_1574186;
						func_383(iParam0, sVar4, &Var0, 1, -1, Global_1574186, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_362(iParam1);
						uParam2->f_34 = Global_1574186;
						func_383(iParam0, sVar4, "", 0, iVar8, Global_1574186, 1);
					}
					else
					{
						iVar8 = func_362(iParam1);
						func_383(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
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

int func_362(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_368())
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
			if (func_367(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_366(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_365(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_363())
	{
		iVar0 = 20;
	}
	return iVar0;
}

int func_363()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_61();
	}
	return func_364(Global_4456448.f_194990);
}

int func_364(int iParam0)
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

bool func_365(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 4;
}

bool func_366(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

bool func_367(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_368()
{
	return Global_4456448.f_1 == 0;
}

void func_369(int* iParam0, bool bParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_290(bParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(bParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_290("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_370()
{
	switch (func_338(PLAYER::PLAYER_ID()))
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

char* func_371(var uParam0)
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
	switch (func_338(PLAYER::PLAYER_ID()))
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
			if (func_374())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
		case 151:
			if (func_373(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
		case 152:
			return "PIM_MAGM204";
		case 153:
			if (func_373(1))
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
			if (func_372(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
	}
	return "";
}

bool func_372(int iParam0)
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

bool func_373(bool bParam0)
{
	return func_298(PLAYER::PLAYER_ID(), bParam0);
}

bool func_374()
{
	return (func_377() && func_375(func_376()));
}

bool func_375(bool bParam0)
{
	return func_300(bParam0, 1);
}

int func_376()
{
	return Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_35;
}

bool func_377()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 148;
}

void func_378(int* iParam0, bool bParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_290(bParam1);
		}
		else if (func_190(PLAYER::PLAYER_ID()) == 133)
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
		func_290("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_379(var uParam0)
{
	int iVar0;

	iVar0 = func_190(PLAYER::PLAYER_ID());
	if (func_413())
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
			switch (func_189())
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

char* func_380(var uParam0)
{
	int iVar0;

	iVar0 = func_190(PLAYER::PLAYER_ID());
	if (func_413())
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
			if (func_382() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_382() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
		case 133:
			switch (func_189())
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
			if (func_381() == 1)
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

int func_381()
{
	return Global_2537071.f_5048;
}

int func_382()
{
	if (func_190(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2537071.f_5043;
	}
	return -1;
}

void func_383(int* iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;

	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_305(bParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(bParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_290(bParam1);
		}
		if (func_407() && bParam6)
		{
			if (func_385())
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
			func_290(bParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_384(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_61())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_384(int iParam0)
{
	if (func_367(iParam0) || func_366(iParam0))
	{
		return true;
	}
	return false;
}

bool func_385()
{
	return Global_1574187;
}

struct<4> func_386(int iParam0)
{
	struct<4> Var0;

	StringCopy(&Var0, "", 16);
	if (func_387(PLAYER::PLAYER_ID()) || func_365(PLAYER::PLAYER_ID()))
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
	if (func_293() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_204, 16);
	}
	return Var0;
}

bool func_387(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 5;
}

char* func_388(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	if (iParam0 == 20 && (!func_293() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		sVar0 = func_389();
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

char* func_389()
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

void func_390()
{
	Global_42351 = 1;
}

bool func_391(bool bParam0, int* iParam1, bool bParam2)
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

void func_392(int* iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574185 = 0;
	func_283();
	Global_1574184 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_22(&(uParam1->f_19)))
		{
			func_106(&(uParam1->f_19));
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

bool func_393()
{
	if (func_405())
	{
		return false;
	}
	if (func_245())
	{
		return false;
	}
	if (!func_403())
	{
		return false;
	}
	if (!func_219())
	{
		return false;
	}
	if (func_402(8, -1))
	{
		return false;
	}
	if (func_406() == 2)
	{
		return false;
	}
	if (Global_2537071.f_4543)
	{
		return false;
	}
	if (func_182())
	{
		return false;
	}
	else if (!func_249(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return false;
	}
	if (((func_401(1) || func_399(1)) || Global_22211.f_124) || Global_22211)
	{
		return false;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return false;
	}
	if (func_398() && Global_1695468 == 2)
	{
		return false;
	}
	if (func_396(PLAYER::PLAYER_ID()) && !func_398())
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
	if (func_395(0))
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
	if (func_394(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if ((Global_1370265 || Global_1370266) || Global_1370267)
	{
		return false;
	}
	return true;
}

bool func_394(int iParam0)
{
	if (iParam0 == func_5())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310.f_4, 6);
}

bool func_395(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_45, iParam0);
}

bool func_396(bool bParam0)
{
	if (func_16(bParam0, 0))
	{
		return true;
	}
	if (func_397())
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

bool func_397()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_398()
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1695469, 0));
}

bool func_399(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_400(PLAYER::PLAYER_PED_ID()))
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

bool func_400(int iParam0)
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

bool func_401(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_402(int iParam0, int iParam1)
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

bool func_403()
{
	if (func_404())
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

bool func_404()
{
	return Global_1312440;
}

bool func_405()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_406()
{
	return Global_1377170.f_68;
}

bool func_407()
{
	if (Global_1574186 > 16)
	{
		return true;
	}
	return false;
}

float func_408()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_409(int iParam0)
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

bool func_410()
{
	if (func_415())
	{
		return true;
	}
	if (func_201(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_413())
	{
		return true;
	}
	if (func_243(PLAYER::PLAYER_ID()))
	{
		switch (func_190(PLAYER::PLAYER_ID()))
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
				if (!func_411(PLAYER::PLAYER_ID()))
				{
					return true;
				}
				break;
			case 129:
				if (!func_411(PLAYER::PLAYER_ID()))
				{
					return true;
				}
				break;
			case 174:
				if (!func_411(PLAYER::PLAYER_ID()))
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

bool func_411(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 4);
}

bool func_412(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_243(PLAYER::PLAYER_ID()) && !func_244(PLAYER::PLAYER_ID())) && !func_302(PLAYER::PLAYER_ID()))
		{
			return true;
		}
	}
	if (iParam0 == 27)
	{
		if (func_238(PLAYER::PLAYER_ID(), 0) && func_244(PLAYER::PLAYER_ID()))
		{
			return true;
		}
		if (func_228(PLAYER::PLAYER_ID()) == 3)
		{
			return true;
		}
	}
	return false;
}

bool func_413()
{
	return Global_1590408;
}

struct<4> func_414()
{
	struct<4> Var0;

	switch (Local_80.f_27)
	{
		case joaat("RHINO"):
			StringCopy(&Var0, "UW_TMRHN", 16);
			break;
		case joaat("HYDRA"):
			StringCopy(&Var0, "UW_TMHYD", 16);
			break;
		case joaat("SAVAGE"):
			StringCopy(&Var0, "UW_TMSAV", 16);
			break;
		case joaat("VALKYRIE"):
			StringCopy(&Var0, "UW_TMVALK", 16);
			break;
		case joaat("BUZZARD"):
			StringCopy(&Var0, "UW_TMBUZ", 16);
			break;
	}
	return Var0;
}

bool func_415()
{
	if (func_416(PLAYER::PLAYER_ID()))
	{
		return Global_1319101;
	}
	return false;
}

bool func_416(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_16(bParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(bParam0);
		}
	}
	return false;
}

void func_417()
{
	char cVar0[16];
	int iVar4;
	var uVar5;
	int iVar6;

	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17)
	{
		case 0:
			if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
			{
				if (Local_80.f_241 == 0)
				{
					func_747();
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_1291, 22))
			{
				if (Local_80.f_27 == joaat("RHINO") && Local_80.f_29 == 2)
				{
					func_716(Local_80.f_30[0 /*3*/]);
					MISC::SET_BIT(&iLocal_1291, 22);
				}
				else if (!func_69(Local_80.f_30[0 /*3*/], 0f, 0f, 0f, 0))
				{
					func_716(Local_80.f_30[0 /*3*/]);
					MISC::SET_BIT(&iLocal_1291, 22);
				}
			}
			func_715();
			func_709();
			if (Local_80.f_241 == 0)
			{
				func_706(1);
			}
			func_705(0);
			if (Local_80.f_241 == 0)
			{
				if (!Local_80.f_27 == joaat("HYDRA") && !Local_80.f_27 == joaat("RHINO"))
				{
					func_196();
				}
				else if (func_742())
				{
					func_196();
				}
				if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (!MISC::IS_BIT_SET(iLocal_1292, 1))
					{
						func_704(129);
						func_683(1);
						MISC::SET_BIT(&iLocal_1292, 1);
						NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
					}
					if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 6))
					{
						if (Local_80.f_28 > 1 || (Local_80.f_28 == 1 && func_112() > 1))
						{
							if (MISC::IS_BIT_SET(Local_80.f_3, 4))
							{
								Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
								MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 6);
							}
						}
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_1292, 1))
				{
					MISC::CLEAR_BIT(&iLocal_1292, 1);
					func_682(1);
					func_681();
					func_683(0);
				}
			}
			if (Local_80.f_241 == 1)
			{
				func_680(&iVar4, &uVar5);
				iLocal_3404 = iVar4;
				func_679(0);
				if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (!func_678())
					{
						MISC::SET_BIT(&iLocal_1292, 19);
					}
					if (func_268("UW_ABTSC") || func_268("UW_ABTS"))
					{
						func_9();
					}
					NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
					if ((func_677("UW_MINV") || func_677("UW_TIMELA")) || func_677("UW_TIMEL"))
					{
						HUD::CLEAR_HELP(true);
					}
					func_192();
					func_666(129, 0f, 0f, 1, 1, 1, 0);
					func_656(1);
					func_655();
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
					iLocal_1301 = PLAYER::GET_MAX_WANTED_LEVEL();
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					func_654(1);
					func_653(1);
					if (Local_80.f_27 != joaat("RHINO"))
					{
						func_632(1);
					}
					iLocal_1503 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_1501);
					AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
					AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START");
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, false);
					func_631(0);
					Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = iLocal_3404;
					if (!func_742())
					{
						func_630(63, "UW_TITLE", "UW_DESC", func_315(), -1, func_315(), 1, 0);
					}
					else if (Local_80.f_27 == joaat("HYDRA") || Local_80.f_27 == joaat("RHINO"))
					{
						func_630(63, "UW_TITLEC", "UW_DESCC", func_315(), -1, func_315(), 1, 0);
					}
					else
					{
						iVar4++;
						StringCopy(&cVar0, "UW_TM", 16);
						StringIntConCat(&cVar0, iVar4, 16);
						func_629(63, &cVar0, "UW_DESCCT", "UW_TITLE", 15000, -1, -1082130432 /* Float: -1f */, "", func_315(), func_315(), 0);
					}
					Local_697.f_9 = NETWORK::_0xF12E6CD06C73D69E();
					func_631(0);
					func_627(3, 0, 1);
					func_20(&uLocal_3442, 0, 0);
					Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 1;
				}
				else
				{
					func_192();
					if (func_268("UW_ABTSC") || func_268("UW_ABTS"))
					{
						func_9();
					}
					if (func_624("UW_HELP1", func_626(), func_625(1)) || func_624("UW_HELP1C", func_626(), func_625(1)))
					{
						HUD::CLEAR_HELP(true);
					}
					Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					func_631(0);
					if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
					{
					}
					else if (!func_623())
					{
					}
				}
			}
			else if (Local_80.f_241 == 3)
			{
				func_631(0);
				if (func_624("UW_HELP1", func_626(), func_625(1)) || func_624("UW_HELP1C", func_626(), func_625(1)))
				{
					HUD::CLEAR_HELP(true);
				}
				if (!func_622())
				{
				}
				if (func_268("UW_ABTSC") || func_268("UW_ABTS"))
				{
					func_9();
				}
				func_192();
				Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_80.f_241 > 3)
			{
				if (func_268("UW_ABTSC") || func_268("UW_ABTS"))
				{
					func_9();
				}
				func_631(0);
				Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			else
			{
				if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					func_621();
					func_620();
					if (func_122())
					{
						func_655();
					}
				}
				if (func_742())
				{
					if (func_614(2, 0, 1, 0, 0))
					{
						if (func_268("UW_ABTSC") || func_268("UW_ABTS"))
						{
							func_9();
						}
						func_631(0);
						Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
					}
				}
				else if (Local_80.f_27 == joaat("VALKYRIE"))
				{
					if (func_614(2, 0, 1, 0, 0))
					{
						if (func_268("UW_ABTSC") || func_268("UW_ABTS"))
						{
							func_9();
						}
						func_631(0);
						Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
					}
				}
			}
			break;
		case 1:
			func_165(1);
			func_709();
			func_542();
			func_169();
			func_540();
			func_528();
			func_269(0);
			func_524();
			func_521();
			func_621();
			func_620();
			if (!MISC::IS_BIT_SET(iLocal_1291, 26))
			{
				if (!func_520(55))
				{
					if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
					{
						if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
						{
							if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
							{
								if (!func_742())
								{
									if (!func_268("UW_ATTK"))
									{
										func_262("UW_ATTK", 0);
									}
								}
								else if (Local_80.f_27 == joaat("HYDRA") || Local_80.f_27 == joaat("RHINO"))
								{
									if (!func_268("UW_ATTK"))
									{
										func_262("UW_ATTK", 0);
									}
								}
								else if (!func_268("UW_ATTK"))
								{
									func_680(&iVar4, &uVar5);
									iVar4++;
									StringCopy(&cVar0, "UW_TM", 16);
									StringIntConCat(&cVar0, iVar4, 16);
									func_262("UW_ATTK", 0);
								}
							}
							else if (func_268("UW_ATTK"))
							{
								func_9();
							}
						}
					}
				}
			}
			func_519();
			if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
				{
					func_655();
				}
			}
			if (!func_844(PLAYER::PLAYER_ID(), 1, 1))
			{
				Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				func_9();
				MISC::SET_BIT(&iLocal_1291, 21);
			}
			else if (func_182())
			{
				Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				func_9();
			}
			if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
			{
				if (!func_518())
				{
					MISC::SET_BIT(&iLocal_1291, 23);
					func_9();
					if (iLocal_3404 > -1)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iLocal_3404]))
						{
							func_25(&(Local_80.f_7[iLocal_3404]));
						}
					}
					Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				}
			}
			if (Local_80.f_241 == 3)
			{
				func_682(1);
				Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_80.f_241 > 3)
			{
				func_682(1);
				Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			else if (func_742())
			{
				if (func_614(2, 0, 1, 0, 0))
				{
					Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
				}
			}
			break;
		case 2:
			if (Local_80.f_241 == 3)
			{
				Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_80.f_241 > 3)
			{
				Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			func_452();
			if (func_622())
			{
				if (func_190(PLAYER::PLAYER_ID()) == 129)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !HUD::IS_RADAR_HIDDEN())
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
						if (MISC::IS_BIT_SET(iLocal_1291, 22))
						{
							func_451();
							MISC::CLEAR_BIT(&iLocal_1291, 22);
						}
						func_681();
						func_448();
						func_446(0);
						func_444(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, true);
						func_683(0);
						func_682(1);
					}
					func_443();
				}
			}
			else if (!MISC::IS_BIT_SET(iLocal_1292, 8))
			{
				MISC::SET_BIT(&iLocal_1292, 8);
			}
			if (!func_200())
			{
				func_442();
				func_540();
				func_165(0);
				func_528();
				func_269(1);
				func_524();
				if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
				}
			}
			else
			{
				func_441();
			}
			func_434();
			func_433();
			func_542();
			if (!MISC::IS_BIT_SET(iLocal_1292, 7))
			{
				iVar6 = 0;
				while (iVar6 < 24)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_48[iVar6]))
					{
						if (!func_31(Local_80.f_48[iVar6]))
						{
							PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_80.f_48[iVar6]), PLAYER::PLAYER_ID(), false);
						}
					}
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < 4)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_80[iVar6]))
					{
						if (!func_31(Local_80.f_80[iVar6]))
						{
							PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_80.f_80[iVar6]), PLAYER::PLAYER_ID(), false);
						}
					}
					iVar6++;
				}
				MISC::SET_BIT(&iLocal_1292, 7);
			}
			else if (Local_80.f_247 != iLocal_3402)
			{
				iLocal_3402 = Local_80.f_247;
				MISC::CLEAR_BIT(&iLocal_1292, 7);
			}
			if (MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
			{
				MISC::CLEAR_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 11);
			}
			if (MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
			{
				MISC::CLEAR_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_1501)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_1503);
			}
			break;
		case 3:
			if (!MISC::IS_BIT_SET(iLocal_1291, 31))
			{
				if (MISC::IS_BIT_SET(Local_80.f_3, 12))
				{
					func_192();
					MISC::SET_BIT(&iLocal_1291, 31);
				}
			}
			func_519();
			func_428();
			if (!func_200())
			{
				if (!MISC::IS_BIT_SET(Local_80.f_3, 14) && !MISC::IS_BIT_SET(Local_80.f_3, 12))
				{
					func_269(1);
				}
				func_528();
				func_540();
				func_524();
				func_419();
			}
			func_452();
			func_433();
			func_542();
			if (Local_80.f_241 > 3)
			{
				Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			break;
		case 4:
			func_787();
			break;
	}
	func_418();
}

void func_418()
{
	int iVar0;

	if (iLocal_3465 != Local_80.f_616)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (MISC::IS_BIT_SET(Local_80.f_616, iVar0))
			{
				if (!MISC::IS_BIT_SET(iLocal_3465, iVar0))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iVar0]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_7[iVar0]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), 2);
							func_25(&(Local_80.f_7[iVar0]));
							MISC::SET_BIT(&iLocal_3465, iVar0);
						}
					}
					else
					{
						MISC::SET_BIT(&iLocal_3465, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_419()
{
	if (MISC::IS_BIT_SET(Local_80.f_3, 14))
	{
		if (!MISC::IS_BIT_SET(iLocal_1292, 5))
		{
			if (func_422(0, 1, 1, 1))
			{
				if (func_742())
				{
					func_421("UW_TFEWC", 30000);
				}
				else
				{
					func_421("UW_TFEW", 30000);
				}
				func_420(1);
				MISC::SET_BIT(&iLocal_1292, 5);
			}
		}
	}
}

void func_420(bool bParam0)
{
	HUD::_SET_HELP_MESSAGE_TEXT_STYLE(3, 21, 200, 0, 0);
	if (bParam0 && !func_354())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_421(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

bool func_422(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return false;
	}
	if (func_427())
	{
		return false;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	if (func_405())
	{
		return false;
	}
	if (func_247())
	{
		return false;
	}
	if (bParam1)
	{
		if (func_249(PLAYER::PLAYER_ID(), 1, 0))
		{
			return false;
		}
	}
	if (bParam0)
	{
		if (func_426(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	if (func_425())
	{
		return false;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return false;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	if (Global_1574184)
	{
		return false;
	}
	if (func_424())
	{
		return false;
	}
	if (func_423())
	{
		return false;
	}
	if (func_182())
	{
		return false;
	}
	if (Global_73825)
	{
		return false;
	}
	if (Global_2547056)
	{
		return false;
	}
	if (func_210(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

bool func_423()
{
	return Global_2450632.f_591;
}

bool func_424()
{
	return Global_2450632.f_744;
}

bool func_425()
{
	return Global_2439138.f_3047.f_578;
}

bool func_426(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_208 == 0)
	{
		return false;
	}
	return true;
}

bool func_427()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return true;
	}
	return false;
}

void func_428()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_268("UW_EXPL") && !func_268("UW_EXPLC"))
	{
		func_9();
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!MISC::IS_BIT_SET(iLocal_1291, (27 + iVar2)))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_7[iVar2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_80.f_7[iVar2]), false))
				{
					MISC::SET_BIT(&iLocal_1291, (27 + iVar2));
					iLocal_3405[iVar2] = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3405[iVar2], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_80.f_7[iVar2]), "GTAO_FM_Events_Soundset", false, 0);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_3405[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_742())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_7[0]))
		{
			if (!MISC::IS_BIT_SET(Local_80.f_319, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_80.f_7[0]), false))
				{
					if ((func_432() - func_126(&(Local_80.f_324), 0, 0)) >= 0)
					{
						if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || MISC::IS_BIT_SET(Local_80.f_3, 14))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_80.f_7[0]), 50f, 50f, 50f, false, true, 0))
							{
								if (!func_200())
								{
									func_431();
									func_171((func_432() - func_126(&(Local_80.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else
					{
						if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || MISC::IS_BIT_SET(Local_80.f_3, 14))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_80.f_7[0]), 50f, 50f, 50f, false, true, 0))
							{
								if (!func_200())
								{
									func_431();
									func_171(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
						if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							func_682(1);
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_7[0]))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_80.f_7[0]), false);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_80.f_7[0]), true);
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_7[0]))))
							{
								NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_80.f_7[0]), true, false, -1);
								func_25(&(Local_80.f_7[0]));
							}
							else
							{
								NETWORK::_0x2A5E0621DD815A9A(NETWORK::NET_TO_VEH(Local_80.f_7[0]), 1, 0, 0);
								func_25(&(Local_80.f_7[0]));
							}
						}
					}
				}
			}
		}
		func_192();
		if (!func_200())
		{
			if (!MISC::IS_BIT_SET(iLocal_1291, 12))
			{
				if (func_109(Local_80.f_7[0]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_80.f_7[0])))
						{
							if (!func_742())
							{
								if (!func_268("UW_EXPL"))
								{
									func_262("UW_EXPL", 0);
								}
							}
							else if (!func_268("UW_EXPLC"))
							{
								func_262("UW_EXPLC", 0);
							}
							MISC::SET_BIT(&iLocal_1291, 12);
						}
					}
				}
			}
			else if (func_268("UW_EXPL") || func_268("UW_EXPLC"))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						func_9();
					}
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_7[iVar0]))
			{
				if (!MISC::IS_BIT_SET(Local_80.f_319, iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), false))
					{
						if ((func_432() - func_126(&(Local_80.f_324), 0, 0)) >= 0)
						{
							if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || MISC::IS_BIT_SET(Local_80.f_3, 14))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), 50f, 50f, 50f, false, true, 0))
								{
									if (!func_200())
									{
										if (!bVar1)
										{
											func_431();
											func_171((func_432() - func_126(&(Local_80.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
											bVar1 = true;
										}
									}
								}
							}
						}
						else
						{
							if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || MISC::IS_BIT_SET(Local_80.f_3, 14))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), 50f, 50f, 50f, false, true, 0))
								{
									if (!func_200())
									{
										if (!bVar1)
										{
											func_431();
											func_171(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
											bVar1 = true;
										}
									}
								}
							}
							if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
							{
								func_682(1);
							}
							if (func_429(Local_80.f_7[iVar0]))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_7[iVar0]))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), false);
									VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), true);
									if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]))))
									{
										NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), true, false, -1);
										func_25(&(Local_80.f_7[iVar0]));
									}
									else
									{
										NETWORK::_0x2A5E0621DD815A9A(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), 1, 0, 0);
										func_25(&(Local_80.f_7[iVar0]));
									}
								}
							}
						}
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_1291, 12))
				{
					if (func_109(Local_80.f_7[iVar0]))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_80.f_7[iVar0])))
							{
								if (!func_200())
								{
									if (!func_742())
									{
										if (!func_268("UW_EXPL"))
										{
											func_262("UW_EXPL", 0);
										}
									}
									else if (!func_268("UW_EXPLC"))
									{
										func_262("UW_EXPLC", 0);
									}
									MISC::SET_BIT(&iLocal_1291, 12);
								}
							}
						}
					}
				}
				else if (func_268("UW_EXPL") || func_268("UW_EXPLC"))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							func_9();
						}
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_429(int iParam0)
{
	if (NETWORK::_0x3FA36981311FA4FF(iParam0))
	{
		return true;
	}
	if (func_430(iParam0))
	{
		return true;
	}
	return false;
}

bool func_430(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		return false;
	}
	if (func_79(iParam0))
	{
		return true;
	}
	return false;
}

void func_431()
{
	Global_1378678.f_1131 = 1;
}

int func_432()
{
	if (func_742())
	{
		return Global_262145.f_11375;
	}
	return Global_262145.f_11095;
}

void func_433()
{
	if (!MISC::IS_BIT_SET(iLocal_1292, 4))
	{
		if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_682(1);
					MISC::SET_BIT(&iLocal_1292, 4);
				}
			}
		}
	}
}

void func_434()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_1300);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (iLocal_1300 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (!MISC::IS_BIT_SET(iLocal_3466, iLocal_1300))
				{
					if (!func_200())
					{
						if (Local_714[iLocal_1300 /*18*/].f_17 == 1)
						{
							MISC::SET_BIT(&iLocal_3466, iLocal_1300);
							func_435(iVar1, 55, 1, 0);
						}
					}
				}
				else if (func_200())
				{
					func_435(iVar1, 55, 0, 0);
					MISC::CLEAR_BIT(&iLocal_3466, iLocal_1300);
				}
				else if (Local_714[iLocal_1300 /*18*/].f_17 > 1)
				{
					MISC::CLEAR_BIT(&iLocal_3466, iLocal_1300);
					func_435(iVar1, 55, 0, 0);
				}
			}
		}
	}
	iLocal_1300++;
	if (iLocal_1300 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_1300 = 0;
	}
}

void func_435(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_437(iParam0))
	{
		return;
	}
	if (func_436(&(Global_2416079.f_621[iParam0]), &(Global_2416079.f_984[iParam0]), &(Global_2416079.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_456[iParam0] = iParam1;
		}
	}
}

bool func_436(var uParam0, var uParam1, int* iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
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
			if (!MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, iParam4);
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

bool func_437(int iParam0)
{
	if (iParam0 == func_5())
	{
		return true;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_438())
	{
		return true;
	}
	return false;
}

int func_438()
{
	switch (func_440())
	{
		case 0:
			return func_439();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_439()
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

int func_440()
{
	return Global_30768;
}

void func_441()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (HUD::DOES_BLIP_EXIST(Local_1308[iVar0 /*8*/]))
		{
			HUD::REMOVE_BLIP(&(Local_1308[iVar0 /*8*/]));
		}
		if (HUD::DOES_BLIP_EXIST(Local_1308[iVar0 /*8*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_1308[iVar0 /*8*/].f_1));
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_48[iVar0]))
		{
			if (!func_31(Local_80.f_48[iVar0]))
			{
				if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_80.f_48[iVar0])))
				{
					func_92(&(Local_1308[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_442()
{
	if (!MISC::IS_BIT_SET(iLocal_1291, 11))
	{
		if (!MISC::IS_BIT_SET(Local_80.f_3, 6))
		{
			if (!MISC::IS_BIT_SET(iLocal_1291, 13))
			{
				if (func_190(PLAYER::PLAYER_ID()) != 129)
				{
					if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
					{
						if (!func_520(65) && !func_520(66))
						{
							if (MISC::IS_BIT_SET(iLocal_1292, 11))
							{
								if (!MISC::IS_BIT_SET(iLocal_1292, 12))
								{
									if (func_422(0, 1, 1, 1))
									{
										if (func_742())
										{
											func_421("UW_HELIMC", -1);
										}
										else
										{
											func_421("UW_HELIM", -1);
										}
										func_420(1);
										MISC::SET_BIT(&iLocal_1292, 12);
									}
								}
							}
							else if (!(Local_80.f_27 == joaat("RHINO") || Local_80.f_27 == joaat("HYDRA")))
							{
								if (func_422(0, 1, 1, 1))
								{
									if (!func_742())
									{
										func_421("UW_TAVAIL", 30000);
									}
									else
									{
										func_421("UW_TAVAILC", 30000);
									}
									func_420(1);
									MISC::SET_BIT(&iLocal_1291, 11);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_443()
{
	float fVar0;

	if (bLocal_3461 != 0)
	{
		return;
	}
	if (func_22(&uLocal_3442))
	{
		bLocal_3461 = func_126(&uLocal_3442, 0, 0);
	}
	fVar0 = SYSTEM::TO_FLOAT(bLocal_3461);
	fVar0 = (fVar0 / 60000f);
	bLocal_3461 = SYSTEM::FLOOR(fVar0);
	if (bLocal_3461 >= 1)
	{
	}
	else
	{
		bLocal_3461 = true;
	}
	if (bLocal_3461 > Global_262145.f_11435)
	{
		bLocal_3461 = Global_262145.f_11435;
	}
}

void func_444(bool bParam0)
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
		func_445(iVar0);
		iVar0++;
	}
}

void func_445(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

void func_446(int iParam0)
{
	if (func_447() && iParam0)
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

int func_447()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

void func_448()
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_450();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_BIT(&(Global_1574650.f_1), 8);
	func_449();
}

void func_449()
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

void func_450()
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

void func_451()
{
	Global_2391049 = { 0f, 0f, 0f };
	Global_2391052 = 0;
}

void func_452()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar10;

	if (MISC::IS_BIT_SET(iLocal_1291, 13))
	{
		return;
	}
	bVar0 = MISC::IS_BIT_SET(Local_80.f_3, 6);
	bVar1 = MISC::IS_BIT_SET(iLocal_1291, 21);
	bVar2 = MISC::IS_BIT_SET(iLocal_1291, 23);
	bVar3 = Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 != -1;
	if (bVar3)
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (func_622())
	{
		if (!MISC::IS_BIT_SET(iLocal_1292, 17))
		{
			if (func_844(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || bVar2)
				{
					if (!func_200())
					{
						if (!func_742())
						{
							if (bVar0)
							{
								func_630(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1, 0);
							}
							else if (bVar1)
							{
								if (Local_80.f_27 == joaat("RHINO") || Local_80.f_27 == joaat("HYDRA"))
								{
									func_630(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
								else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[0]) && func_109(Local_80.f_7[0]))
								{
									MISC::SET_BIT(&iLocal_1292, 11);
									MISC::SET_BIT(&iLocal_1292, 16);
									func_630(66, "UW_BIGE", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
								else
								{
									func_630(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
							}
							else if (bVar2)
							{
								func_630(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
							}
							else if (bVar3 || MISC::IS_BIT_SET(Local_80.f_3, 16))
							{
								func_630(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar0)
						{
							func_630(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1, 0);
						}
						else if (bVar1)
						{
							if (Local_80.f_27 == joaat("RHINO") || Local_80.f_27 == joaat("HYDRA"))
							{
								if (func_517())
								{
									MISC::SET_BIT(&iLocal_1292, 11);
									MISC::SET_BIT(&iLocal_1292, 16);
									func_630(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
								}
								else
								{
									func_630(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
							}
							else if (func_517())
							{
								MISC::SET_BIT(&iLocal_1292, 11);
								MISC::SET_BIT(&iLocal_1292, 16);
								func_630(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
							else
							{
								func_630(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar2)
						{
							if (func_517())
							{
								MISC::SET_BIT(&iLocal_1292, 11);
								MISC::SET_BIT(&iLocal_1292, 16);
								func_630(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
							else
							{
								func_630(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar3 || MISC::IS_BIT_SET(Local_80.f_3, 16))
						{
							func_630(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
						}
					}
					iVar4 = func_516(1);
					Local_697.f_6 = (Local_697.f_6 + iVar4);
					if (!Global_262145.f_11502)
					{
						if (Local_697.f_6 > 0)
						{
							func_515(19, Local_697.f_6);
						}
					}
					Global_2462880 = iVar4;
					if (iVar4 > 0)
					{
						if (func_514())
						{
							func_502(210955503, iVar4, &uVar5, 0, 1, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar10 = func_501(1);
					Local_697.f_7 = (Local_697.f_7 + iVar10);
					func_500();
					func_453(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar10, 1, -1, 0, 0, 0);
					Local_697.f_5 = 2;
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
					if (!MISC::IS_BIT_SET(iLocal_1292, 16))
					{
						MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					}
					MISC::SET_BIT(&iLocal_1292, 17);
					MISC::SET_BIT(&iLocal_1292, 18);
				}
			}
		}
	}
}

int func_453(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	return func_454(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, iParam10);
}

int func_454(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;

	iVar0 = func_464(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_460(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, iParam8, iParam10);
			}
		}
	}
	else
	{
		func_455(iParam1, iVar0, iParam8, iParam10);
	}
	return iVar0;
}

void func_455(int iParam0, int iParam1, int iParam2, int iParam3)
{
	vector3 vVar0;

	vVar0 = { func_458(iParam0, 1) };
	if (iParam0 == func_457(PLAYER::PLAYER_PED_ID()))
	{
		func_456(1);
	}
	func_460(vVar0, iParam1, 0, iParam2, iParam3);
}

void func_456(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_457(int iParam0)
{
	return iParam0;
}

Vector3 func_458(int iParam0, bool bParam1)
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
	if (iParam0 == func_459(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
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

int func_459(int iParam0)
{
	return iParam0;
}

void func_460(vector3 vParam0, int iParam3, int iParam4, char* sParam5, bool bParam6)
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
			Global_2439138.f_1290[iVar1 /*30*/].f_4 = func_463(Global_2439138.f_1290[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1 /*30*/].f_7 = NETWORK::_0xBA7F0B77D80A4EB7();
			Global_2439138.f_1290[iVar1 /*30*/].f_3 = iParam3;
			Global_2439138.f_1290[iVar1 /*30*/].f_8 = iParam4;
			Global_2439138.f_1290[iVar1 /*30*/].f_9 = func_462();
			Global_2439138.f_1290[iVar1 /*30*/].f_10 = func_461();
			StringCopy(&(Global_2439138.f_1290[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1 /*30*/].f_26 = NETWORK::HAS_NETWORK_TIME_STARTED(NETWORK::_0xBA7F0B77D80A4EB7(), bParam6);
		}
	}
}

int func_461()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_462()
{
	var uVar0;

	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_463(vector3 vParam0, var uParam3, var uParam4)
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

int func_464(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_465(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return iVar0;
}

int func_465(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (func_499(PLAYER::PLAYER_ID()) || func_498(PLAYER::PLAYER_ID()))
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
	else if (func_363() || func_496(PLAYER::PLAYER_ID()))
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
	if (func_174(sParam2))
	{
	}
	if (func_495())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_493(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_492(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_490(0, &iVar1);
					break;
				case 3:
					func_490(1, &iVar1);
					break;
				case 1:
					func_487(&iVar1);
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
			func_485(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_475((func_484(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_2 != -1)
				{
					func_485(1165, iVar1, -1);
				}
				func_470(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_466((func_468(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_466((func_468(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_466(int iParam0)
{
	if (func_495())
	{
		Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_211.f_5 = iParam0;
		func_467(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_467(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_468(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_844(bParam0, 0, 1))
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return func_469(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_5;
			}
		}
		else
		{
			return func_469(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_469(int iParam0)
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

void func_470(int iParam0)
{
	struct<13> Var0;
	int iVar13;

	Var0 = { func_66(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_473(func_474(&Var0));
			if (iVar13 == 0)
			{
				func_472(&Global_1387915, iParam0);
				func_471(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_472(&Global_1387916, iParam0);
				func_471(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_472(&Global_1387917, iParam0);
				func_471(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_472(&Global_1387918, iParam0);
				func_471(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_472(&Global_1387919, iParam0);
				func_471(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1387919);
			}
		}
	}
}

void func_471(int iParam0, int iParam1)
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

void func_472(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_473(int iParam0)
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

int func_474(int* iParam0)
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

void func_475(int iParam0, int iParam1, int iParam2)
{
	if (func_495())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_241(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_241(-1)])
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
		if (func_483(PLAYER::PLAYER_ID()))
		{
			Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_211.f_1 = iParam0;
			Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_211.f_6 = func_481(iParam0, 1);
		}
		func_480(639, iParam0, -1, 1);
		func_479(640, func_481(iParam0, 1), -1, 1, 0);
		Global_1388060[func_241(-1)] = iParam0;
		func_476(-1109644434, 7, 0);
	}
}

void func_476(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_478(iParam1, bParam2))
	{
		iVar0 = func_477();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_477()
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

bool func_478(int iParam0, bool bParam1)
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

void func_479(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_241(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_480(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = Global_2548434[iParam0 /*3*/][func_241(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_241(iParam2)] = iParam1;
			break;
		case 788:
			Global_1387994[func_241(iParam2)] = iParam1;
			break;
		case 789:
			Global_1388000[func_241(iParam2)] = iParam1;
			break;
		case 790:
			Global_1388006[func_241(iParam2)] = iParam1;
			break;
		case 8726:
			Global_1388012[func_241(iParam2)] = iParam1;
			break;
		case 777:
			Global_1387958[func_241(iParam2)] = iParam1;
			break;
		case 778:
			Global_1387964[func_241(iParam2)] = iParam1;
			break;
		case 779:
			Global_1387970[func_241(iParam2)] = iParam1;
			break;
		case 780:
			Global_1387976[func_241(iParam2)] = iParam1;
			break;
		case 8728:
			Global_1387982[func_241(iParam2)] = iParam1;
			break;
		case 767:
			Global_1387928[func_241(iParam2)] = iParam1;
			break;
		case 768:
			Global_1387934[func_241(iParam2)] = iParam1;
			break;
		case 769:
			Global_1387940[func_241(iParam2)] = iParam1;
			break;
		case 770:
			Global_1387946[func_241(iParam2)] = iParam1;
			break;
		case 8730:
			Global_1387952[func_241(iParam2)] = iParam1;
			break;
		case 757:
			Global_1388018[func_241(iParam2)] = iParam1;
			break;
		case 758:
			Global_1388024[func_241(iParam2)] = iParam1;
			break;
		case 759:
			Global_1388030[func_241(iParam2)] = iParam1;
			break;
		case 760:
			Global_1388036[func_241(iParam2)] = iParam1;
			break;
		case 8732:
			Global_1388042[func_241(iParam2)] = iParam1;
			break;
		case 1303:
			Global_1388048[func_241(iParam2)] = iParam1;
			break;
		case 7233:
			Global_1388054[func_241(iParam2)] = iParam1;
			break;
		case 639:
			Global_1388060[func_241(iParam2)] = iParam1;
			break;
		case 1278:
			Global_1388066[func_241(iParam2)] = iParam1;
			break;
		case 1876:
			Global_2586065[0 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 2267:
			Global_2586065[1 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 2929:
			Global_2586065[2 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3058:
			Global_2586065[3 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 10016:
			Global_2586214[func_241(iParam2)] = iParam1;
			break;
		case 764:
			Global_1388072[func_241(iParam2)] = iParam1;
			break;
		case 765:
			Global_1388078[func_241(iParam2)] = iParam1;
			break;
		case 766:
			Global_1388084[func_241(iParam2)] = iParam1;
			break;
		case 8731:
			Global_1388090[func_241(iParam2)] = iParam1;
			break;
		case 1236:
			Global_1388096[func_241(iParam2)] = iParam1;
			break;
		case 3053:
			Global_2586138[0 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3054:
			Global_2586138[1 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3055:
			Global_2586138[2 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3056:
			Global_2586138[3 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3057:
			Global_2586138[4 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3636:
			Global_2586217[0 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3637:
			Global_2586217[1 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3638:
			Global_2586217[2 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3639:
			Global_2586217[3 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3640:
			Global_2586217[4 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3641:
			Global_2586233[0 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3642:
			Global_2586233[1 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3643:
			Global_2586233[2 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3644:
			Global_2586233[3 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3645:
			Global_2586233[4 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3221:
			Global_2586138[5 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3227:
			Global_2586065[4 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3663:
			Global_2586249[func_241(iParam2)] = iParam1;
			break;
		case 3664:
			Global_2586258[func_241(iParam2)] = iParam1;
			break;
		case 3665:
			Global_2586252[func_241(iParam2)] = iParam1;
			break;
		case 3666:
			Global_2586261[func_241(iParam2)] = iParam1;
			break;
		case 3667:
			Global_2586255[func_241(iParam2)] = iParam1;
			break;
		case 3668:
			Global_2586264[func_241(iParam2)] = iParam1;
			break;
		case 3689:
			Global_2586267[func_241(iParam2)] = iParam1;
			break;
		case 3229:
			Global_2586138[6 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3230:
			Global_2586065[5 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3234:
			Global_2586138[7 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 3232:
			Global_2586065[6 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 4019:
			Global_2586138[8 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 4020:
			Global_2586065[7 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 4022:
			Global_2586138[9 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 4023:
			Global_2586065[8 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 4025:
			Global_2586138[10 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 4026:
			Global_2586065[9 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 4028:
			Global_2586138[11 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 4029:
			Global_2586065[10 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 6109:
			Global_2586138[12 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 6110:
			Global_2586065[11 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 6167:
			Global_2586138[13 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 6168:
			Global_2586065[12 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 6545:
			Global_2586138[14 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 6546:
			Global_2586065[13 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 6558:
			Global_2586138[15 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 6559:
			Global_2586065[14 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 6561:
			Global_2586138[16 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 6562:
			Global_2586065[15 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 6564:
			Global_2586138[17 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 6565:
			Global_2586065[16 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 7283:
			Global_2586065[17 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 7285:
			Global_2586065[18 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 7287:
			Global_2586065[19 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 8010:
			Global_2586065[20 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 8282:
			Global_2586270[func_241(iParam2)] = iParam1;
			break;
		case 8283:
			Global_2586273[func_241(iParam2)] = iParam1;
			break;
		case 8284:
			Global_2586276[func_241(iParam2)] = iParam1;
			break;
		case 8285:
			Global_2586279[func_241(iParam2)] = iParam1;
			break;
		case 8286:
			Global_2586282[func_241(iParam2)] = iParam1;
			break;
		case 8287:
			Global_2586285[func_241(iParam2)] = iParam1;
			break;
		case 8288:
			Global_2586288[func_241(iParam2)] = iParam1;
			break;
		case 8289:
			Global_2586291[func_241(iParam2)] = iParam1;
			break;
		case 8290:
			Global_2586294[func_241(iParam2)] = iParam1;
			break;
		case 8291:
			Global_2586297[func_241(iParam2)] = iParam1;
			break;
		case 8292:
			Global_2586300[func_241(iParam2)] = iParam1;
			break;
		case 8293:
			Global_2586303[func_241(iParam2)] = iParam1;
			break;
		case 8294:
			Global_2586306[func_241(iParam2)] = iParam1;
			break;
		case 8900:
			Global_2586309[func_241(iParam2)] = iParam1;
			break;
		case 8534:
			Global_2586065[21 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 8977:
			Global_2586138[23 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 8975:
			Global_2586065[22 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 8980:
			Global_2586138[24 /*3*/][func_241(iParam2)] = iParam1;
			break;
		case 8978:
			Global_2586065[23 /*3*/][func_241(iParam2)] = iParam1;
			break;
		default:
			break;
	}
}

int func_481(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_482(iParam0, 0);
}

int func_482(int iParam0, int iParam1)
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

bool func_483(bool bParam0)
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

int func_484(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388060[func_241(-1)];
			}
			else if (func_483(iParam0))
			{
				return Global_1590535[iParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_241(-1)];
	}
	return 0;
}

void func_485(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_260(iParam0, func_241(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_486(iParam0))
	{
		func_479(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_480(iParam0, iVar0, iParam2, 1);
	}
}

bool func_486(int iParam0)
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

void func_487(int iParam0)
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
				if (PLAYER::GET_PLAYER_TEAM(bVar5) == iVar1 || func_489(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != PLAYER::PLAYER_ID())
					{
						if (func_67(PLAYER::PLAYER_ID(), bVar5))
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
		iVar6 = SYSTEM::ROUND((func_488(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_488(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_488(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

bool func_489(int iParam0, int iParam1, int iParam2)
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

void func_490(bool bParam0, int iParam1)
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
				if (func_844(bVar4, 0, 1))
				{
					if (bVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_67(PLAYER::PLAYER_ID(), bVar4))
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
			if (func_844(bVar4, 1, 1))
			{
				if (bVar4 != PLAYER::PLAYER_ID())
				{
					if (func_491(PLAYER::PLAYER_ID(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_67(PLAYER::PLAYER_ID(), bVar4))
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
		iVar5 = SYSTEM::ROUND((func_488(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_488(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_491(bool bParam0, bool bParam1)
{
	return SYSTEM::VDIST(func_59(bParam0), func_59(bParam1));
	return 0f;
}

int func_492(int iParam0)
{
	int iVar0;

	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_488(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_493(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_484(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_484(PLAYER::PLAYER_ID());
		}
	}
	if (func_494(8000, 0, 0) > 0)
	{
		if (func_494(8000, 0, 0) < (iParam0 + func_484(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_494(8000, 0, 0) - func_484(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_494(int iParam0, bool bParam1, int iParam2)
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

bool func_495()
{
	return true;
}

int func_496(bool bParam0)
{
	return func_497(func_338(bParam0));
}

int func_497(int iParam0)
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

bool func_498(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_499(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

void func_500()
{
	Global_2462221 = 1;
}

int func_501(bool bParam0)
{
	int iVar0;

	if (MISC::IS_BIT_SET(iLocal_1292, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_742())
		{
			return Global_262145.f_11316;
		}
		else
		{
			return Global_262145.f_11255;
		}
	}
	func_443();
	if (func_742())
	{
		iVar0 = (Global_262145.f_11316 * bLocal_3461);
	}
	else
	{
		iVar0 = (Global_262145.f_11255 * bLocal_3461);
	}
	return iVar0;
}

void func_502(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_514())
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
				func_503(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_503(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_503(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_503(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_503(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar0 = false;
	if (!func_514())
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
			*uParam0 = func_510(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_509(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_504(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_504(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_505(iParam0);
	}
}

void func_505(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_514())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_508(iParam0))
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
		func_506(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_506(var uParam0)
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
	func_507(&(uParam0->f_14));
	func_507(&(uParam0->f_14.f_13));
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

void func_507(var uParam0)
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

bool func_508(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return false;
}

void func_509(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_510(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_514())
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
				func_511(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_511(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_513(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_512();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 36, iVar36);
	}
}

void func_512()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_513(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

bool func_514()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return false;
}

void func_515(int iParam0, int iParam1)
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

int func_516(bool bParam0)
{
	int iVar0;

	if (MISC::IS_BIT_SET(iLocal_1292, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_742())
		{
			return Global_262145.f_11315;
		}
		else
		{
			return Global_262145.f_11254;
		}
	}
	func_443();
	if (func_742())
	{
		iVar0 = (Global_262145.f_11315 * bLocal_3461);
	}
	else
	{
		iVar0 = (Global_262145.f_11254 * bLocal_3461);
	}
	return iVar0;
}

bool func_517()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iLocal_3404]))
	{
		if (func_109(Local_80.f_7[iLocal_3404]))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_80.f_256[iVar1] > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_80.f_256[iLocal_3404];
	if (!bVar0)
	{
		if (Local_80.f_594[0 /*4*/] != iLocal_3404)
		{
			return false;
		}
		else if (iVar3 > 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (Local_80.f_594[0 /*4*/] == iLocal_3404)
	{
		return true;
	}
	else
	{
		iVar4 = Local_80.f_256[Local_80.f_594[0 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_80.f_255 - iVar2);
		if (iVar5 > iVar6)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_518()
{
	var uVar0;
	var uVar1;

	func_680(&uVar0, &uVar1);
	if (iLocal_3404 > -1)
	{
		if (func_109(Local_80.f_7[iLocal_3404]))
		{
			return true;
		}
	}
	return false;
}

void func_519()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (Local_80.f_241 == 1)
	{
		if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
		{
			if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
			{
				if (!func_22(&uLocal_3440) || (func_22(&uLocal_3440) && func_19(&uLocal_3440, 5000, 0)))
				{
					if (Local_80.f_27 == joaat("SAVAGE") || Local_80.f_27 == joaat("BUZZARD"))
					{
						iVar1 = iLocal_3404;
						if (iVar1 > -1)
						{
							if (func_109(Local_80.f_7[iVar1]))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_80.f_7[iVar1]), -1, false);
								if (iVar0 == 0)
								{
									Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (PED::IS_PED_INJURED(iVar0))
								{
									Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (!PED::IS_PED_A_PLAYER(iVar0))
								{
									Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
							}
						}
					}
					else if (Local_80.f_27 == joaat("VALKYRIE"))
					{
						iVar1 = iLocal_3404;
						if (iVar1 > -1)
						{
							if (func_109(Local_80.f_7[iVar1]))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_80.f_7[iVar1]), -1, false);
								if (iVar0 == 0)
								{
									Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (PED::IS_PED_INJURED(iVar0))
								{
									Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (!PED::IS_PED_A_PLAYER(iVar0))
								{
									Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
								{
									iVar4 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("VALKYRIE"));
									iVar2 = 0;
									while (iVar2 < iVar4)
									{
										iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_80.f_7[iVar1]), iVar2, false);
										if (iVar0 != 0)
										{
											if (!PED::IS_PED_INJURED(iVar0))
											{
												if (PED::IS_PED_A_PLAYER(iVar0))
												{
													iVar3++;
												}
											}
										}
										iVar2++;
									}
									if (iVar3 == 0)
									{
										Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
									}
								}
							}
						}
					}
					func_106(&uLocal_3440);
					func_20(&uLocal_3440, 0, 0);
				}
			}
		}
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (MISC::IS_BIT_SET(Local_80.f_319, iVar2))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_7[iVar2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_80.f_7[iVar2]), false))
				{
					if ((func_432() - func_126(&(Local_80.f_349[iVar2 /*2*/]), 0, 0)) >= 0)
					{
						if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_80.f_7[iVar2]), false))
							{
								if (!func_200())
								{
									func_431();
									func_171((func_432() - func_126(&(Local_80.f_349[iVar2 /*2*/]), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else
					{
						if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_80.f_7[iVar2]), false))
							{
								if (!func_200())
								{
									func_431();
									func_171(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_7[iVar2]))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_80.f_7[iVar2]), false);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_80.f_7[iVar2]), true);
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_7[iVar2]))))
							{
								NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_80.f_7[iVar2]), true, false, -1);
								func_25(&(Local_80.f_7[iVar2]));
							}
							else
							{
								NETWORK::_0x2A5E0621DD815A9A(NETWORK::NET_TO_VEH(Local_80.f_7[iVar2]), 1, 0, 0);
								func_25(&(Local_80.f_7[iVar2]));
							}
						}
					}
				}
			}
			if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == iVar2)
			{
				if (!MISC::IS_BIT_SET(iLocal_1292, 6))
				{
					if (func_422(0, 1, 1, 1))
					{
						if (func_742())
						{
							if (!MISC::IS_BIT_SET(iLocal_1292, 19))
							{
								func_421("UW_NOPILC", 30000);
							}
							else
							{
								func_421("UW_NOGUN", 30000);
							}
						}
						else
						{
							func_421("UW_NOPIL", 30000);
						}
						func_420(1);
						MISC::SET_BIT(&iLocal_1292, 6);
					}
					else if (MISC::IS_BIT_SET(iLocal_1292, 19))
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(true);
						}
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar5 = Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10;
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iVar5]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_80.f_7[iVar5])))
						{
							if (!func_742())
							{
								if (!func_268("UW_EXPL"))
								{
									func_262("UW_EXPL", 0);
								}
							}
							else if (!func_268("UW_EXPLC"))
							{
								func_262("UW_EXPLC", 0);
							}
						}
						else if (func_268("UW_EXPL") || func_268("UW_EXPLC"))
						{
							func_9();
						}
					}
					else if (func_268("UW_EXPL") || func_268("UW_EXPLC"))
					{
						func_9();
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_520(int iParam0)
{
	return Global_2439138.f_2723[0 /*80*/].f_1 == iParam0;
}

void func_521()
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		if (Local_80.f_27 == joaat("RHINO"))
		{
			if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
			{
				if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
				{
					if (!func_22(&uLocal_3436) || (func_22(&uLocal_3436) && func_19(&uLocal_3436, 5000, 0)))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (func_69(vLocal_3462, 0f, 0f, 0f, 0))
							{
								vLocal_3462 = { Local_80.f_30[0 /*3*/] };
							}
							fVar0 = func_523(PLAYER::PLAYER_PED_ID(), vLocal_3462, 1);
							if (fVar0 > 750f)
							{
								MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
							}
						}
						func_106(&uLocal_3436);
						func_20(&uLocal_3436, 0, 0);
					}
				}
				else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!func_268("UW_OOB"))
					{
						func_262("UW_OOB", 0);
					}
					if (!func_22(&uLocal_3438))
					{
						iVar2 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(iVar2, "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_80.f_7[func_522()]), "GTAO_FM_Events_Soundset", false, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iVar2, "Time", 30f);
						func_20(&uLocal_3438, 0, 0);
					}
					if (func_22(&uLocal_3438))
					{
						if ((func_432() - func_126(&uLocal_3438, 0, 0)) >= 0)
						{
							func_431();
							func_171((func_432() - func_126(&uLocal_3438, 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
						else
						{
							func_431();
							func_171(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							func_9();
							MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 11);
						}
					}
					if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
					{
						fVar0 = func_523(PLAYER::PLAYER_PED_ID(), Local_80.f_30[0 /*3*/], 1);
						if (fVar0 < 750f)
						{
							MISC::CLEAR_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
							func_106(&uLocal_3438);
							AUDIO::STOP_SOUND(iVar2);
						}
					}
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
	{
		func_682(1);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar1 = func_522();
			if (iVar1 > -1)
			{
				if (func_109(Local_80.f_7[iVar1]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_7[iVar1]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_80.f_7[iVar1]), false);
						VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_80.f_7[iVar1]), true);
						NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_80.f_7[iVar1]), true, false, -1);
						func_25(&(Local_80.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_522()
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar0 == -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iVar1]))
			{
				if (func_109(Local_80.f_7[iVar1]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_80.f_7[iVar1])))
						{
							iVar0 = iVar1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_523(int iParam0, vector3 vParam1, bool bParam4)
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

void func_524()
{
	var uVar0;
	int iVar1;

	iVar1 = -1;
	if (Local_80.f_27 == joaat("HYDRA") || Local_80.f_27 == joaat("RHINO"))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_1291, 24))
	{
		if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			func_680(&iVar1, &uVar0);
			if (func_527(iVar1))
			{
				if (iVar1 > -1)
				{
					if (Local_80.f_22[iVar1] != func_5())
					{
						fLocal_1302 = NETWORK::NETWORK_GET_TALKER_PROXIMITY();
						NETWORK::NETWORK_SET_TALKER_PROXIMITY(-1f);
						func_526(1, iVar1);
						MISC::SET_BIT(&iLocal_1291, 24);
						func_525(1);
					}
				}
			}
			else
			{
				MISC::SET_BIT(&iLocal_1291, 24);
				MISC::SET_BIT(&iLocal_1291, 25);
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_1291, 25))
	{
		if (MISC::IS_BIT_SET(iLocal_1291, 24))
		{
			if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 > 1)
			{
				NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_1302);
				func_680(&iVar1, &uVar0);
				if (iVar1 > -1)
				{
					func_526(0, iVar1);
					MISC::SET_BIT(&iLocal_1291, 25);
					func_525(0);
				}
			}
		}
	}
}

void func_525(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 15);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 4);
	}
}

void func_526(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_844(bVar1, 0, 1) && bVar1 != PLAYER::PLAYER_ID())
			{
				if (MISC::IS_BIT_SET(Local_714[iVar0 /*18*/].f_1, iParam1) || !bParam0)
				{
					NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(bVar1, true);
				}
				else if (bParam0)
				{
					NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(bVar1, false);
				}
			}
		}
		iVar0++;
	}
}

bool func_527(int iParam0)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (!bVar0)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (iVar1 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (MISC::IS_BIT_SET(Local_714[iVar1 /*18*/].f_1, iParam0))
					{
						bVar0 = true;
					}
				}
			}
		}
		iVar1++;
	}
	return bVar0;
}

void func_528()
{
	bool bVar0;
	int iVar1;

	if (NETWORK::NETWORK_END_TUTORIAL_SESSION())
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_1291, 15))
	{
		if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 2)
		{
			if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
			{
				if (Local_80.f_22[0] != func_5())
				{
					if (func_422(0, 0, 1, 1))
					{
						if (!func_742())
						{
							if (Local_80.f_27 == joaat("RHINO") || Local_80.f_27 == joaat("HYDRA"))
							{
								if (!func_742())
								{
									func_539("UW_START1P", PLAYER::GET_PLAYER_NAME(Local_80.f_22[0]), 1, 30000);
								}
								else
								{
									func_539("UW_START1PC", PLAYER::GET_PLAYER_NAME(Local_80.f_22[0]), 1, 30000);
								}
								func_420(1);
							}
							else if (MISC::IS_BIT_SET(Local_80.f_15, 0))
							{
								if (!MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 14))
								{
									if (!func_742())
									{
										func_421("UW_STARTM", 30000);
									}
									else
									{
										func_421("UW_STARTMC", 30000);
									}
									func_420(1);
								}
							}
							else
							{
								func_539("UW_START1P", PLAYER::GET_PLAYER_NAME(Local_80.f_22[0]), 1, 30000);
								func_420(1);
							}
						}
						else if (!MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 14))
						{
							if (!func_742())
							{
								func_421("UW_STARTM", 30000);
							}
							else
							{
								func_421("UW_STARTMC", 30000);
							}
							func_420(1);
						}
						MISC::SET_BIT(&iLocal_1291, 15);
					}
				}
			}
		}
	}
	if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 2)
	{
		if (Local_80.f_241 == 1)
		{
			if (Local_80.f_27 != joaat("HYDRA") && Local_80.f_27 != joaat("RHINO"))
			{
				if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (iLocal_3404 >= 0)
					{
						if (!MISC::IS_BIT_SET(iLocal_1292, 10))
						{
							if (!MISC::IS_BIT_SET(iLocal_1292, 9))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iLocal_3404]))
								{
									if (func_109(Local_80.f_7[iLocal_3404]))
									{
										MISC::SET_BIT(&iLocal_1292, 9);
									}
								}
							}
							else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iLocal_3404]))
							{
								if (!func_109(Local_80.f_7[iLocal_3404]))
								{
									func_538("UW_TEAMV");
									MISC::SET_BIT(&iLocal_1292, 10);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0;
	if (!func_742())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!MISC::IS_BIT_SET(Local_80.f_3, 6))
			{
				if (!MISC::IS_BIT_SET(iLocal_1291, (16 + iVar1)))
				{
					if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 >= 2)
					{
						if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
						{
							if ((MISC::IS_BIT_SET(Local_80.f_3, 0) && MISC::IS_BIT_SET(Local_80.f_3, 1)) && MISC::IS_BIT_SET(Local_80.f_3, 2))
							{
								if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_7[0]))
								{
									if (func_109(Local_80.f_7[0]))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_80.f_7[0]), -1, false) != 0)
										{
											bVar0 = func_537(iVar1, 0);
											if (bVar0 != func_5())
											{
												func_529("UW_COMP", bVar0, 1, 0, 0, 0, 1, 0);
											}
											MISC::SET_BIT(&iLocal_1291, (16 + iVar1));
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
}

int func_529(char* sParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	struct<16> Var1;
	bool bVar17;
	bool bVar18;

	iVar0 = -1;
	if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID(), bParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_535(&Var1));
		if (!bParam5)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2513218 = { func_66(bParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513148, 35, &Global_2513218))
			{
				bVar17 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
				{
					bVar17 = true;
				}
				if (Global_2513148.f_21 > 0)
				{
					bVar18 = false;
				}
				else
				{
					bVar18 = true;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { func_534(&Var1) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, bVar17, false, Global_2513148, &Var1, Global_1314034, Global_1314035, Global_1314036);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, bVar17, false, Global_2513148, Global_1314034, Global_1314035, Global_1314036);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		func_530(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_530(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;

	if ((!func_533() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_531(iParam2);
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

int func_531(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0 /*53*/].f_1)
		{
			func_532(iVar0);
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

void func_532(int iParam0)
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0 /*53*/] = { Global_1670846.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_533()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_534(char* sParam0)
{
	struct<16> Var0;

	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_535(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_536(&cVar0);
}

char[] func_536(char[4] cParam0)
{
	return cParam0;
}

bool func_537(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = func_5();
	iVar2 = (iParam0 - 1);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_7[iParam1]))
	{
		if (func_109(Local_80.f_7[iParam1]))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_80.f_7[iParam1]), iVar2, false);
			if (iVar1 != 0)
			{
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				}
			}
		}
	}
	return bVar0;
}

int func_538(char* sParam0)
{
	int iVar0;

	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_530(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_539(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

void func_540()
{
	if (!MISC::IS_BIT_SET(iLocal_1291, 9))
	{
		if (Local_80.f_241 == 1)
		{
			if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_START_MUSIC"))
				{
					MISC::SET_BIT(&iLocal_1291, 9);
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_1291, 10))
	{
		if (MISC::IS_BIT_SET(iLocal_1291, 9))
		{
			if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 > 1)
			{
				if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FAIL"))
						{
							MISC::SET_BIT(&iLocal_1291, 10);
						}
					}
					else if (AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC"))
					{
						MISC::SET_BIT(&iLocal_1291, 10);
						func_541();
					}
				}
			}
		}
	}
}

void func_541()
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

void func_542()
{
	char cVar0[16];
	char cVar4[16];
	bool bVar8;
	int iVar9[2];
	int iVar12;
	int iVar13;
	int iVar14[4];
	int iVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	var uVar27;
	var uVar28;
	var uVar32;
	var uVar33;
	var uVar37;
	var uVar38;
	var uVar42;
	var uVar43;
	var uVar47;
	var uVar48;
	bool bVar52;
	int iVar53;
	char* sVar54;
	int iVar55;
	var uVar56;
	var uVar57;
	var uVar61;
	var uVar62;

	iVar20 = 1;
	if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
		{
			if (!MISC::IS_BIT_SET(iLocal_1291, 26))
			{
				if ((((MISC::IS_BIT_SET(Local_80.f_3, 0) && MISC::IS_BIT_SET(Local_80.f_3, 1)) && MISC::IS_BIT_SET(Local_80.f_3, 2)) || (func_742() && MISC::IS_BIT_SET(Local_80.f_3, 6))) || (func_742() && MISC::IS_BIT_SET(Local_80.f_3, 15)))
				{
					if (!func_22(&uLocal_3457))
					{
						func_20(&uLocal_3457, 0, 0);
					}
					if (func_19(&uLocal_3457, 1000, 0))
					{
						if (func_268("UW_ATTK"))
						{
							func_9();
						}
						func_613();
						if (func_612())
						{
							iVar25 = func_516(1);
							if (iVar25 > 0)
							{
								Local_697.f_6 = (Local_697.f_6 + iVar25);
								if ((!Global_262145.f_11502 && !MISC::IS_BIT_SET(Local_80.f_3, 8)) || (!Global_262145.f_11503 && MISC::IS_BIT_SET(Local_80.f_3, 8)))
								{
									if (Local_697.f_6 > 0)
									{
										func_515(19, Local_697.f_6);
									}
								}
								Global_2462880 = iVar25;
								if (func_514())
								{
									func_502(210955503, iVar25, &uVar27, 0, 1, 0);
								}
								else
								{
									MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar28);
								}
							}
							iVar23 = func_501(1);
							func_500();
							Local_697.f_7 = (Local_697.f_7 + iVar23);
							func_453(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
							Local_697.f_5 = 2;
							func_630(65, "UW_BIGF", "UW_DRAWZ", 1, 15000, 2, 1, 0);
						}
						else if (!func_742())
						{
							iVar25 = func_625(0);
							func_600(&iVar25, 1);
							iVar25 = (iVar25 + func_516(1));
							if (iVar25 > 0)
							{
								Local_697.f_6 = (Local_697.f_6 + iVar25);
								if (!Global_262145.f_11502)
								{
									if (Local_697.f_6 > 0)
									{
										func_515(19, Local_697.f_6);
									}
								}
								Global_2462880 = iVar25;
								if (func_514())
								{
									func_502(210955503, iVar25, &uVar32, 0, 1, 0);
								}
								else
								{
									MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar33);
								}
							}
							iVar23 = func_501(1);
							iVar23 = (iVar23 + func_599());
							Local_697.f_7 = (Local_697.f_7 + iVar23);
							func_500();
							func_453(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
							Local_697.f_5 = 1;
							func_629(64, "", "UW_BIG_BMEXP", "UW_BIGM", 15000, -1, -1082130432 /* Float: -1f */, 0, 1, 2, 0);
						}
						else if (func_598())
						{
							if (!func_597(1))
							{
								if (!func_268("UW_EXPL") && !func_268("UW_EXPLC"))
								{
									func_9();
								}
								iVar25 = func_625(0);
								func_600(&iVar25, 1);
								iVar25 = (iVar25 + func_516(1));
								Local_697.f_6 = (Local_697.f_6 + iVar25);
								if (!Global_262145.f_11503)
								{
									if (Local_697.f_6 > 0)
									{
										func_515(19, Local_697.f_6);
									}
								}
								Global_2462880 = iVar25;
								if (iVar25 > 0)
								{
									if (func_514())
									{
										func_502(210955503, iVar25, &uVar37, 0, 1, 0);
									}
									else
									{
										MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar38);
									}
								}
								if (Local_80.f_27 == joaat("RHINO") || Local_80.f_27 == joaat("HYDRA"))
								{
									func_629(64, "", "UW_WON1P", "UW_BIGM", 15000, -1, -1082130432 /* Float: -1f */, 0, 1, 2, 0);
								}
								else
								{
									func_629(64, "", "UW_WON", "UW_BIGM", 15000, -1, -1082130432 /* Float: -1f */, 0, 1, 2, 0);
								}
								Local_697.f_5 = 1;
								iVar23 = func_599();
								iVar23 = (iVar23 + func_501(1));
								Local_697.f_7 = (Local_697.f_7 + iVar23);
								func_500();
								func_453(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							}
							else
							{
								iVar25 = func_516(1);
								iVar23 = func_501(1);
								iVar20 = 0;
								iVar22 = 0;
								while (iVar22 <= 3)
								{
									if (Local_80.f_465[iVar22 /*4*/].f_1 == Local_80.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										iVar14[iVar22] = -1;
										if (Local_80.f_27 == joaat("HYDRA") || Local_80.f_27 == joaat("RHINO"))
										{
											if (Local_80.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (Local_80.f_465[iVar22 /*4*/].f_2 != PLAYER::PLAYER_ID())
												{
													if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_465[iVar22 /*4*/].f_2)))
													{
														iVar9[iVar12] = PLAYER::INT_TO_PLAYERINDEX(Local_80.f_465[iVar22 /*4*/].f_2);
														iVar12++;
													}
												}
											}
										}
										else if (iLocal_3404 > -1)
										{
											if (iLocal_3404 != Local_80.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_80.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_80.f_27 == joaat("HYDRA") || Local_80.f_27 == joaat("RHINO"))
								{
									if (iVar20 > 2)
									{
										bVar21 = true;
									}
									else if (iVar9[0] == func_5())
									{
										bVar21 = true;
									}
									else
									{
										func_596(68, "UW_DRAWP", PLAYER::GET_PLAYER_NAME(iVar9[0]), 1, 15000, "UW_BIGO", 2);
									}
								}
								else if (iVar20 > 2)
								{
									bVar21 = true;
								}
								else if (iVar14[0] == -1)
								{
								}
								else
								{
									StringCopy(&cVar0, "UW_TM", 16);
									StringIntConCat(&cVar0, iVar14[0] + 1, 16);
									func_629(68, &cVar0, "UW_DRAWP", "UW_BIGO", 15000, -1, -1082130432 /* Float: -1f */, 0, 1, 2, 0);
								}
								if (bVar21)
								{
									if (!func_742())
									{
										func_630(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1, 0);
									}
									else
									{
										func_630(68, "UW_BIGO", "UW_DRAWC", 1, 15000, 2, 1, 0);
									}
								}
								iVar26 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_625(0)) / SYSTEM::TO_FLOAT(iVar20)));
								iVar24 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_599()) / SYSTEM::TO_FLOAT(iVar20)));
								func_600(&iVar26, 1);
								iVar25 = (iVar25 + iVar26);
								iVar23 = (iVar23 + iVar24);
								Local_697.f_6 = (Local_697.f_6 + iVar25);
								if (!Global_262145.f_11503)
								{
									if (Local_697.f_6 > 0)
									{
										func_515(19, Local_697.f_6);
									}
								}
								Global_2462880 = iVar25;
								if (iVar25 > 0)
								{
									if (func_514())
									{
										func_502(210955503, iVar25, &uVar42, 0, 1, 0);
									}
									else
									{
										MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar43);
									}
								}
								Local_697.f_7 = (Local_697.f_7 + iVar23);
								func_500();
								func_453(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							}
						}
						else
						{
							func_594(1);
							iVar25 = func_516(1);
							iVar23 = func_501(1);
							Local_697.f_6 = (Local_697.f_6 + iVar25);
							if (!Global_262145.f_11503)
							{
								if (Local_697.f_6 > 0)
								{
									func_515(19, Local_697.f_6);
								}
							}
							Global_2462880 = iVar25;
							if (iVar25 > 0)
							{
								if (func_514())
								{
									func_502(210955503, iVar25, &uVar47, 0, 1, 0);
								}
								else
								{
									MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar48);
								}
							}
							Local_697.f_7 = (Local_697.f_7 + iVar23);
							func_500();
							func_453(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							if (!func_597(0))
							{
								iVar13 = Local_80.f_465[0 /*4*/];
								if (!func_268("UW_EXPL") && !func_268("UW_EXPLC"))
								{
									func_9();
								}
								if (Local_80.f_27 == joaat("HYDRA") || Local_80.f_27 == joaat("RHINO"))
								{
									bVar8 = PLAYER::INT_TO_PLAYERINDEX(Local_80.f_465[0 /*4*/].f_2);
									if (func_310(bVar8, 1))
									{
										iVar53 = func_314(bVar8);
										if (iVar53 > -1)
										{
											iVar55 = func_312(iVar53);
											sVar54 = func_588(bVar8);
											bVar52 = true;
										}
									}
									if (bVar8 != func_5())
									{
										if (!bVar52)
										{
											if (!func_742())
											{
												func_596(65, "UW_FWONP", PLAYER::GET_PLAYER_NAME(bVar8), 6, 15000, "UW_BIGF", 2);
											}
											else
											{
												func_596(65, "UW_FWONPC", PLAYER::GET_PLAYER_NAME(bVar8), 6, 15000, "UW_BIGF", 2);
											}
										}
										else if (!func_742())
										{
											func_586(66, "PEN_OVR", "UW_FWONG", sVar54, iVar55, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_586(66, "PEN_OVR", "UW_FWONGC", sVar54, iVar55, 0, -1, -1, -1, 2, -1);
										}
									}
								}
								else
								{
									StringCopy(&cVar0, "UW_TM", 16);
									StringIntConCat(&cVar0, iVar13 + 1, 16);
									if (!func_742())
									{
										func_629(65, &cVar0, "UW_FWONT", "UW_BIGF", 15000, -1, -1082130432 /* Float: -1f */, "", 6, 2, 0);
									}
									else
									{
										func_629(65, &cVar0, "UW_FWONTC", "UW_BIGF", 15000, -1, -1082130432 /* Float: -1f */, "", 6, 2, 0);
									}
								}
							}
							else
							{
								if (!func_268("UW_EXPL") && !func_268("UW_EXPLC"))
								{
									func_9();
								}
								iVar22 = 1;
								while (iVar22 <= 3)
								{
									if (Local_80.f_465[iVar22 /*4*/].f_1 == Local_80.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										if (Local_80.f_27 == joaat("HYDRA") || Local_80.f_27 == joaat("RHINO"))
										{
											if (Local_80.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_465[iVar22 /*4*/].f_2)))
												{
													iVar9[iVar12] = PLAYER::INT_TO_PLAYERINDEX(Local_80.f_465[iVar22 /*4*/].f_2);
													iVar12++;
												}
											}
										}
										else if (iLocal_3404 > -1)
										{
											if (iLocal_3404 != Local_80.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_80.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_80.f_27 == joaat("HYDRA") || Local_80.f_27 == joaat("RHINO"))
								{
									if (iVar20 == 2)
									{
										if (iVar9[0] != func_5() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar9[0]))
										{
											if (iVar9[1] != func_5() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar9[1]))
											{
												func_549(68, func_5(), func_5(), -1, "UW_DRAW2P", "UW_BIGF", func_315(), 15000, func_315(), PLAYER::GET_PLAYER_NAME(iVar9[0]), PLAYER::GET_PLAYER_NAME(iVar9[1]), 0);
											}
											else
											{
												bVar21 = true;
											}
										}
										else
										{
											bVar21 = true;
										}
									}
									else
									{
										bVar21 = true;
									}
								}
								else if (iVar20 == 2)
								{
									StringCopy(&cVar0, "UW_TM", 16);
									StringIntConCat(&cVar0, iVar14[0] + 1, 16);
									StringCopy(&cVar4, "UW_TM", 16);
									StringIntConCat(&cVar4, iVar14[1] + 1, 16);
									func_629(11, &cVar0, "UW_DRAW2P", "UW_BIGO", 15000, -1, -1082130432 /* Float: -1f */, &cVar4, 1, 2, 0);
									bVar21 = true;
								}
								else
								{
									bVar21 = true;
								}
								if (bVar21)
								{
									func_630(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1, 0);
								}
							}
						}
						func_653(0);
						if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
						{
							Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
						}
						MISC::SET_BIT(&iLocal_1291, 13);
						MISC::SET_BIT(&iLocal_1291, 26);
					}
				}
				else if (MISC::IS_BIT_SET(Local_80.f_3, 6) || (!func_742() && MISC::IS_BIT_SET(Local_80.f_3, 15)))
				{
					if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 != -1)
					{
						func_630(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
					}
					else
					{
						func_629(65, "", "UW_FAIL", "UW_BIGF", 15000, -1, -1082130432 /* Float: -1f */, 0, 6, 2, 0);
					}
					func_653(0);
					MISC::SET_BIT(&iLocal_1291, 26);
					iVar25 = func_516(1);
					Local_697.f_6 = (Local_697.f_6 + iVar25);
					if (!Global_262145.f_11502)
					{
						if (Local_697.f_6 > 0)
						{
							func_515(19, Local_697.f_6);
						}
					}
					Global_2462880 = iVar25;
					if (iVar25 > 0)
					{
						if (func_514())
						{
							func_502(210955503, iVar25, &uVar56, 0, 1, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar57);
						}
					}
					iVar23 = func_501(1);
					Local_697.f_7 = (Local_697.f_7 + iVar23);
					func_500();
					func_453(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
					Local_697.f_5 = 2;
					if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					}
				}
				else if (MISC::IS_BIT_SET(Local_80.f_3, 14))
				{
					func_653(0);
					MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 3)
					{
						Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
					}
				}
				else if (MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
				{
					func_629(65, "", "UW_FAILD", "UW_BIGF", 15000, -1, -1082130432 /* Float: -1f */, 0, 6, 2, 0);
					func_653(0);
					MISC::SET_BIT(&iLocal_1291, 26);
					MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					iVar25 = func_516(1);
					Local_697.f_6 = (Local_697.f_6 + iVar25);
					if (!Global_262145.f_11502)
					{
						if (Local_697.f_6 > 0)
						{
							func_515(19, Local_697.f_6);
						}
					}
					Global_2462880 = iVar25;
					if (iVar25 > 0)
					{
						if (func_514())
						{
							func_502(210955503, iVar25, &uVar61, 0, 1, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar62);
						}
					}
					iVar23 = func_501(1);
					Local_697.f_7 = (Local_697.f_7 + iVar23);
					func_500();
					func_453(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
					Local_697.f_5 = 2;
					if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					}
				}
				else if (MISC::IS_BIT_SET(Local_80.f_3, 12))
				{
					MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
				}
			}
			if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
			{
				if (MISC::IS_BIT_SET(iLocal_1291, 26))
				{
					if (func_268("UW_ATTK"))
					{
						func_9();
					}
					if (func_543(&uLocal_3395, 1))
					{
						MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					}
					if (!func_268("UW_EXPL") && !func_268("UW_EXPLC"))
					{
						if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 > -1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9]))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (func_109(Local_80.f_7[Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9]))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_80.f_7[Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9])))
										{
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
	{
		MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
	}
}

bool func_543(var uParam0, bool bParam1)
{
	bool bVar0;

	if (((*uParam0 > 0 && !func_354()) && !(func_238(PLAYER::PLAYER_ID(), 0) && (func_231(PLAYER::PLAYER_ID()) || func_229(PLAYER::PLAYER_ID())))) && !func_547(PLAYER::PLAYER_ID()))
	{
		func_546();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_22(&(uParam0->f_3)))
			{
				func_20(&(uParam0->f_3), 0, 0);
			}
			else if (func_19(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1574650.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2537071.f_4588), 0);
					func_20(&(uParam0->f_5), 0, 0);
				}
				func_20(&(uParam0->f_1), 0, 0);
				func_545(uParam0, 1);
			}
			break;
		case 1:
			if (func_22(&(uParam0->f_5)))
			{
				if (func_19(&(uParam0->f_5), 3000, 0))
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
				func_544();
				func_545(uParam0, 2);
			}
			break;
		case 2:
			func_544();
			if (func_19(&(uParam0->f_1), 15000, 0))
			{
				if (func_677("AMEV_LBD_HELP"))
				{
					HUD::CLEAR_HELP(true);
				}
				func_545(uParam0, 3);
			}
			break;
		case 3:
			if (func_19(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2537071.f_4588), 1);
				func_545(uParam0, 4);
				return true;
			}
			break;
		case 4:
			MISC::CLEAR_BIT(&(Global_2537071.f_4588), 1);
			return true;
	}
	return false;
}

void func_544()
{
	if (MISC::IS_BIT_SET(Global_2537071.f_4588, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2537071.f_795, 2)) && func_844(PLAYER::PLAYER_ID(), 1, 1)) && !Global_73825) && !Global_58693) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_2537071.f_4588), 1);
			func_421("AMEV_LBD_HELP", -1);
			func_420(1);
			MISC::CLEAR_BIT(&(Global_2537071.f_4588), 0);
		}
	}
}

void func_545(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_546()
{
	Global_2462222 = 1;
}

bool func_547(bool bParam0)
{
	if (bParam0 != func_5())
	{
		if (func_844(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_548(Global_2425662[bParam0 /*421*/].f_310.f_5) == 2;
			}
		}
	}
	return false;
}

int func_548(int iParam0)
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

int func_549(int iParam0, bool bParam1, bool bParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
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
	func_585(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = bParam1;
	Var0.f_18 = bParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_550(&Var0);
}

int func_550(var uParam0)
{
	int iVar0;

	if (uParam0->f_1 == 1)
	{
		if (Global_2439138.f_3045)
		{
			return 0;
		}
	}
	func_561(uParam0, uParam0->f_17);
	func_560(uParam0);
	if (func_61())
	{
		func_560(uParam0);
	}
	if (func_559(uParam0->f_1))
	{
		func_552();
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
				func_552();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_352(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 2);
				Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_551(uParam0->f_69, 128))
			{
				if (func_357(Global_2439138.f_2723[iVar0 /*80*/].f_1))
				{
					Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
					func_352(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_551(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_552()
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
	func_553();
	if (bVar0)
	{
		Global_76890 = 0;
	}
}

void func_553()
{
	Global_2439138.f_3047 = 0;
	Global_2439138.f_3047.f_578 = 0;
	func_557(&(Global_2439138.f_3047.f_1));
	Global_2439138.f_3047.f_1.f_1 = 0;
	func_554(&(Global_2439138.f_3047.f_1));
}

void func_554(var uParam0)
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_556(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_555(0);
}

void func_555(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_556(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

void func_557(var uParam0)
{
	func_558(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_558(var uParam0)
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

bool func_559(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return true;
	}
	return false;
}

void func_560(var uParam0)
{
	if (func_359(uParam0->f_1))
	{
		uParam0->f_72 = func_315();
	}
}

void func_561(var uParam0, bool bParam1)
{
	if (func_359(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_5() || !func_844(bParam1, 0, 1))
	{
		return;
	}
	if (func_357(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_562(bParam1, -2, 0, 0, 0);
		}
	}
}

int func_562(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (func_396(bParam0) && !bParam4)
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
	if (((func_396(PLAYER::PLAYER_ID()) || (func_584() && func_583())) && !MISC::IS_BIT_SET(Global_2537071.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_582();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_844(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_580(iParam1, bParam0, 0);
							}
							else
							{
								return func_574(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_574(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_580(iParam1, bParam0, 0);
				}
				else
				{
					return func_563(0, -1, 0);
				}
			}
			else
			{
				return func_563(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_580(iParam1, bParam0, 0);
		}
		else
		{
			return func_574(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_574(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_563(bool bParam0, int iParam1, bool bParam2)
{
	return func_564(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_564(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	if ((func_573() || (func_572() && func_570())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_569(iParam2, iVar0);
		}
		else
		{
			return func_569(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_489(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_568(1);
				}
				else
				{
					return func_568(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_565(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_565(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_568(1);
	}
	return func_568(0);
}

int func_565(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_567(iParam0, iParam1, iParam3);
	if (func_566(Global_4456448.f_194990, 1))
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

bool func_566(int iParam0, bool bParam1)
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

int func_567(int iParam0, int iParam1, int iParam2)
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
			if (!func_489(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_568(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_569(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_567(iParam1, iParam0, 4);
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

bool func_570()
{
	if (func_571())
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_237025, 4);
}

bool func_571()
{
	return MISC::IS_BIT_SET(Global_4456448.f_226020, 12);
}

bool func_572()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_237025, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_237025, 0) || Global_1653478) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FM_DEATHMATCH_CREATOR")) > 0);
}

bool func_573()
{
	if (func_571() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return true;
	}
	return false;
}

int func_574(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_577())
			{
				iVar3 = func_314(bParam0);
				if (!iVar3 == -1)
				{
					return func_312(iVar3);
				}
			}
			if ((func_576(bParam1, bParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_489(PLAYER::GET_PLAYER_TEAM(bParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_568(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_575(1);
			}
			else
			{
				return func_564(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[bParam0 /*876*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_568(1);
			}
			else
			{
				return func_564(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_314(bParam0);
	if (!iVar4 == -1)
	{
		return func_312(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_575(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_576(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(bParam1) == -1)
			{
				return false;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return false;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

bool func_577()
{
	if (((func_294() || func_579()) || func_61()) || func_578())
	{
		return true;
	}
	return false;
}

bool func_578()
{
	return Global_2450632.f_19;
}

var func_579()
{
	return Global_2450632.f_16;
}

int func_580(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = Global_969031.f_14[iParam0];
	if (func_577())
	{
		iVar2 = func_314(bParam1);
		if (!iVar2 == -1)
		{
			return func_312(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_271[iParam0 /*15700*/].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_5())
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
			iVar0 = func_564(bParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_581(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_489(iParam0, PLAYER::GET_PLAYER_TEAM(bParam1), 0))
		{
			iVar0 = func_575(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_581(int iParam0)
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

int func_582()
{
	return Global_2359302.f_2;
}

bool func_583()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_584()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_18, 14);
}

void func_585(int iParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_5();
	uParam1->f_18 = func_5();
	uParam1->f_19 = func_5();
	uParam1->f_20 = func_5();
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

int func_586(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = func_5();
	bVar1 = func_5();
	bVar2 = func_5();
	return func_587(iParam0, sParam1, sParam2, sParam3, iParam4, bVar0, bVar1, bVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_587(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
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
	func_585(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_17 = bParam5;
	Var0.f_18 = bParam6;
	Var0.f_19 = bParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = iParam4;
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam13;
	Var0.f_72 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_352(&(Var0.f_69), 4);
	return func_550(&Var0);
}

char* func_588(bool bParam0)
{
	char* sVar0;
	bool bVar1;

	if (bParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_593(&(Global_1628237[bParam0 /*615*/].f_11.f_104));
		return sVar0;
	}
	if (Global_1628237[bParam0 /*615*/].f_11.f_120 != Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_120)
	{
		sVar0 = func_591(bParam0, 0);
		return sVar0;
	}
	if (((func_230(bParam0, 28) || func_230(PLAYER::PLAYER_ID(), 28)) || func_590(bParam0)) && !func_589(bParam0))
	{
		return func_591(bParam0, 0);
	}
	bVar1 = func_65(bParam0);
	if (bVar1 != func_5())
	{
		if (bVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, true))
			{
				return func_591(bVar1, 0);
			}
		}
	}
	if (bVar1 != func_5())
	{
		sVar0 = func_593(&(Global_1628237[bVar1 /*615*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_591(bVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

bool func_589(bool bParam0)
{
	struct<13> Var0;

	Var0 = { func_66(bParam0) };
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

bool func_590(bool bParam0)
{
	struct<13> Var0;

	if (bParam0 != func_5())
	{
		Var0 = { func_66(bParam0) };
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

char* func_591(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_298(bParam0, 1))
		{
			return func_592();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_592()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

char* func_593(var uParam0)
{
	return uParam0;
}

void func_594(bool bParam0)
{
	if (bParam0)
	{
		if (func_595(1))
		{
			MISC::SET_BIT(&Global_1574675, 1);
		}
	}
	else if (func_595(2))
	{
		MISC::SET_BIT(&Global_1574675, 2);
	}
}

bool func_595(int iParam0)
{
	int iVar0;

	iVar0 = func_260(2534, -1, 0);
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

int func_596(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
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
	func_585(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return func_550(&Var0);
}

bool func_597(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam0)
	{
		func_680(&iVar1, &iVar2);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 != iVar1)
			{
				if (Local_80.f_256[iVar0] == iVar2)
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	else if (Local_80.f_27 == joaat("RHINO") || Local_80.f_27 == joaat("HYDRA"))
	{
		return Local_80.f_465[0 /*4*/].f_1 == Local_80.f_465[1 /*4*/].f_1;
	}
	else
	{
		return Local_80.f_594[0 /*4*/].f_1 == Local_80.f_594[1 /*4*/].f_1;
	}
	return false;
}

bool func_598()
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_680(&iVar1, &iVar2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iVar1)
		{
			if (Local_80.f_256[iVar0] > iVar2)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_599()
{
	if (!func_742())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11251) * Global_262145.f_11441));
	}
	if ((MISC::IS_BIT_SET(Local_80.f_3, 0) && MISC::IS_BIT_SET(Local_80.f_3, 1)) && MISC::IS_BIT_SET(Local_80.f_3, 2))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11312) * Global_262145.f_11443));
	}
	if (MISC::IS_BIT_SET(Local_80.f_3, 6))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11312) * Global_262145.f_11443));
	}
	return 0;
}

void func_600(int iParam0, int iParam1)
{
	int iVar0;

	if (*iParam0 > 0)
	{
		if (!func_611())
		{
			if (func_610(0))
			{
				if (!func_373(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_609()))
					{
						if (func_608() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_608());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_606(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_605("GB_BCUT_TICK1", func_609(), iVar0, 0, 0, 1);
						}
						func_604(20);
						func_601(func_609(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_601(bool bParam0, int iParam1, int iParam2)
{
	struct<8> Var0;

	if (func_844(bParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_603(bParam0);
		func_602(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_513(bParam0));
	}
}

void func_602(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_603(bool bParam0)
{
	return Global_1628237[bParam0 /*615*/].f_533;
}

void func_604(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

int func_605(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_562(bParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_535(&cVar1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_530(27, sParam0, 1, &cVar1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_606(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		iVar1 = func_607(1);
	}
	else
	{
		iVar1 = func_607(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_607(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_608()
{
	return Global_262145.f_12389;
}

bool func_609()
{
	return Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11;
}

bool func_610(bool bParam0)
{
	return func_310(PLAYER::PLAYER_ID(), bParam0);
}

bool func_611()
{
	return func_345(PLAYER::PLAYER_ID());
}

bool func_612()
{
	int iVar0;

	if (!MISC::IS_BIT_SET(Local_80.f_3, 6) && !MISC::IS_BIT_SET(Local_80.f_3, 15))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_80.f_256[iVar0] > 0)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_613()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_73[iVar0]))
		{
			if (!func_109(Local_80.f_73[iVar0]))
			{
				func_25(&(Local_80.f_73[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_48[iVar0]))
		{
			if (func_31(Local_80.f_48[iVar0]))
			{
				func_25(&(Local_80.f_48[iVar0]));
			}
		}
		iVar0++;
	}
}

bool func_614(int iParam0, bool bParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_238(PLAYER::PLAYER_ID(), 0) || func_339(PLAYER::PLAYER_ID(), 0))
	{
		if (func_231(PLAYER::PLAYER_ID()) || func_244(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_619(sParam3, sParam4, 1);
		}
		if (func_618(26, -1))
		{
			func_616(26, -1);
		}
		return true;
	}
	if (func_22(&(Global_1574650.f_18)))
	{
		if (!func_19(&(Global_1574650.f_18), 7500, 0))
		{
			return false;
		}
		func_106(&(Global_1574650.f_18));
	}
	if (func_615())
	{
		if (bParam2)
		{
			func_619(sParam3, sParam4, 0);
		}
		if (func_618(26, -1))
		{
			func_616(26, -1);
		}
		return true;
	}
	if (bParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_619(sParam3, sParam4, 1);
		}
		if (func_618(26, -1))
		{
			func_616(26, -1);
		}
		return true;
	}
	return false;
}

bool func_615()
{
	return MISC::IS_BIT_SET(Global_1574650.f_1, 0);
}

void func_616(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_18();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, bParam1);
			break;
		default:
			iVar1 = func_617(bParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (MISC::IS_BIT_SET(iVar0, iParam0))
			{
				MISC::CLEAR_BIT(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, bParam1);
			}
			break;
	}
}

int func_617(bool bParam0)
{
	int iVar0;

	if (bParam0 == -1)
	{
		bParam0 = func_18();
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

bool func_618(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_18();
	}
	iVar0 = func_617(bParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return MISC::IS_BIT_SET(iVar1, iParam0);
}

void func_619(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!MISC::IS_BIT_SET(Global_1574650.f_1, 2) && !func_202(PLAYER::PLAYER_ID())) && !func_201(PLAYER::PLAYER_ID()))
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
		func_630(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1574650.f_1), 2);
	}
}

void func_620()
{
	Global_2537071.f_1791.f_56 = 1;
}

void func_621()
{
	Global_2537071.f_1791.f_54 = 1;
}

bool func_622()
{
	return MISC::IS_BIT_SET(Global_2537071.f_1734, 11);
}

bool func_623()
{
	if (iLocal_3404 > -1)
	{
		if (func_109(Local_80.f_7[iLocal_3404]))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_80.f_7[iLocal_3404])))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_624(char* sParam0, char* sParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_625(bool bParam0)
{
	if (!func_742())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11250) * Global_262145.f_11440));
	}
	if (bParam0)
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11311) * Global_262145.f_11442));
	}
	if ((MISC::IS_BIT_SET(Local_80.f_3, 0) && MISC::IS_BIT_SET(Local_80.f_3, 1)) && MISC::IS_BIT_SET(Local_80.f_3, 2))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11311) * Global_262145.f_11442));
	}
	if (MISC::IS_BIT_SET(Local_80.f_3, 6))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11311) * Global_262145.f_11442));
	}
	return 0;
}

char* func_626()
{
	if (Local_80.f_27 == joaat("RHINO"))
	{
		return "ABLIP_TANK";
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_80.f_27))
	{
		return "ABLIP_PLANE";
	}
	return "ABLIP_HELI";
}

void func_627(int iParam0, int iParam1, bool bParam2)
{
	if (func_242())
	{
		if (iParam1 == 1)
		{
			if (Global_2537071.f_4395 == -1)
			{
				Global_2537071.f_4395 = Global_262145.f_26393;
			}
			func_8(&(Global_2537071.f_4393), 0, 0);
			if (bParam2)
			{
				if (Global_2537071.f_4398 == -1)
				{
					Global_2537071.f_4398 = Global_262145.f_26394;
				}
				func_8(&(Global_2537071.f_4396), 0, 0);
			}
			else
			{
				Global_1312418 = 0;
				Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_8 = 0;
				func_682(1);
			}
		}
		else
		{
			Global_1312418 = 0;
			Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_8 = 0;
			func_682(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_628()) && !func_248(PLAYER::PLAYER_ID()))
		{
			Global_968396 = 0;
		}
		UNK_0x6EC9FBED3024FDF5(0, -1, -1, iParam0);
	}
}

bool func_628()
{
	return Global_2450632.f_740;
}

int func_629(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
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
	func_585(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_352(&(Var0.f_69), iParam10);
	}
	return func_550(&Var0);
}

int func_630(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_585(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_352(&(Var0.f_69), iParam7);
	}
	return func_550(&Var0);
}

void func_631(bool bParam0)
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

void func_632(bool bParam0)
{
	int iVar0;

	if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), func_260(585, -1, 0));
		if (func_652())
		{
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("LTS_P_PARA_PILOT2_SP_S"));
		}
		else if (func_651())
		{
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("PIL_P_PARA_PILOT_SP_S"));
		}
		if (func_648(3610, -1, -1))
		{
		}
		iVar0 = func_260(2040, -1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_647(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0));
		if (func_610(0))
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), func_260(585, -1, 0));
		}
		else
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), func_646(Global_2546381));
		}
		func_645(PLAYER::PLAYER_ID(), iVar0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_638(PLAYER::PLAYER_PED_ID(), iVar0), func_637(PLAYER::PLAYER_PED_ID(), iVar0), false);
		func_636(func_260(2040, -1, 0), 1);
		Global_2537071.f_287 = 1;
		func_633(PLAYER::PLAYER_ID(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_633(int iParam0, int iParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_635();
		if (iParam2 == -1)
		{
			iParam2 = func_260(2040, -1, 0);
		}
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, func_638(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_637(PLAYER::GET_PLAYER_PED(iParam0), iParam2), false);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0, func_647(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(iParam0), 5, func_638(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_637(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_647(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_260(585, -1, 0);
		}
		if (func_610(1) && func_634(iParam0))
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, func_646(Global_2546381));
		}
		else
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, iParam1);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_28, 4))
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, Global_1574438);
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0, joaat("XM_PROP_X17_PARA_SP_S"));
		}
		func_645(iParam0, iParam2);
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 177, true);
	}
}

bool func_634(bool bParam0)
{
	return func_230(bParam0, 10);
}

void func_635()
{
	Global_76595 = 0;
	Global_76596 = -1;
	Global_76597 = -1;
	Global_76598 = -1;
	Global_76599 = -1;
	Global_76600 = -1;
}

void func_636(int iParam0, bool bParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_635();
		func_479(2040, iParam0, -1, 1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_638(PLAYER::PLAYER_PED_ID(), iParam0), func_637(PLAYER::PLAYER_PED_ID(), iParam0), false);
		func_645(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_647(PLAYER::PLAYER_PED_ID(), iParam0));
		if ((bParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
		{
			func_633(PLAYER::PLAYER_ID(), -1, -1);
		}
	}
}

int func_637(int iParam0, int iParam1)
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_638(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	bVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != false;
	iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	iVar2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
	if ((((!bVar0 == Global_76595 || !iParam1 == Global_76596) || !iVar1 == Global_76597) || !iVar2 == Global_76598) || !iVar3 == Global_76599)
	{
		Global_76595 = bVar0;
		Global_76596 = iParam1;
		Global_76597 = iVar1;
		Global_76598 = iVar2;
		Global_76599 = iVar3;
		Global_76600 = func_639(iParam0, iParam1);
		if (iParam1 == 63 || iParam1 == 62)
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) == joaat("MP_F_FREEMODE_01"))
			{
				if (Global_76600 == 61)
				{
					Global_76600 = 79;
				}
				else if (Global_76600 == 39)
				{
					Global_76600 = 79;
				}
				else if (Global_76600 == 76)
				{
					Global_76600 = 80;
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) == joaat("MP_M_FREEMODE_01"))
			{
				if (Global_76600 == 61)
				{
					Global_76600 = 78;
				}
				else if (Global_76600 == 39)
				{
					Global_76600 = 78;
				}
			}
		}
	}
	return Global_76600;
}

int func_639(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 69;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("MP_M_FREEMODE_01"))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (2 + iVar3);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 8))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (7 + iVar3);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 8))
			{
				return (8 + iVar3);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		return func_644(iParam0, iParam1);
	}
	if (func_643(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("PILOT_SUIT"), 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("MP_M_FREEMODE_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_5"), 0))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_32"), 0))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_33"), 0))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE_COAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("X17_DRAW_3"), 0))
		{
			iVar6 = func_642(iVar5, 0);
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					default:
						iVar0 = func_641(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
					default:
						iVar0 = func_641(iVar5);
						break;
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE_BOMB"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_640(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				case 5:
					if (iVar2 == joaat("MP_M_FREEMODE_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				case 6:
					if (iVar2 == joaat("MP_M_FREEMODE_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				case 7:
					if (iVar2 == joaat("MP_M_FREEMODE_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				case 11:
					if (iVar2 == joaat("MP_M_FREEMODE_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				case 12:
					if (iVar2 == joaat("MP_M_FREEMODE_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				default:
					iVar0 = func_641(iVar5);
					break;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_7"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("AIR_DRAW_3"), 0))
				{
					return func_644(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("XMAS2_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE_SWEAT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_F_FREEMODE_01"))
			{
				if (bVar1)
				{
					return func_644(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_8"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_13"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_16"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return func_644(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return func_644(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 970679185, 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 83294665, 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 382246252, 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
			}
			else
			{
				return func_644(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (1 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 2006289597, 0))
			{
				if (iVar2 == joaat("MP_M_FREEMODE_01"))
				{
					return func_644(iParam0, iParam1) + 15;
				}
				else
				{
					return func_644(iParam0, iParam1) + 15;
				}
			}
			else if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return func_644(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (4 + iVar3);
			}
			else
			{
				return func_644(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return func_644(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1);
			}
			else
			{
				return func_644(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return func_644(iParam0, iParam1) + 15;
			}
			else
			{
				return func_644(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("MP_F_FREEMODE_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("MP_F_FREEMODE_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("MP_M_FREEMODE_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("SILK_PYJAMAS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("SANTA_SUIT"), 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_641(iVar5);
		}
	}
	if (iVar2 == joaat("MP_M_FREEMODE_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			case 9:
				return (2 + iVar3);
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
		}
	}
	return (1 + iVar3);
	return 0;
}

int func_640(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_641(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_642(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

bool func_643(int iParam0)
{
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return true;
	}
	return false;
}

int func_644(int iParam0, int iParam1)
{
	if (iParam1 > 69)
	{
		return 69;
	}
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

void func_645(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("VW_P_PARA_BAG_VINE_S"));
	}
	else if (iParam1 > 51)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("LTS_P_PARA_BAG_PILOT2_S"));
	}
	else if (iParam1 > 46)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("P_PARA_BAG_XMAS_S"));
	}
	else if (iParam1 > 26)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("LTS_P_PARA_BAG_LTS_S"));
	}
	else if (iParam1 > 0)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("LTS_P_PARA_BAG_PILOT2_S"));
	}
	else
	{
		PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
	}
}

int func_646(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
		case 2:
			return 9;
		case 3:
			return 3;
		case 4:
			return 3;
		case 5:
			return 8;
		case 6:
			return 8;
		case 7:
			return 11;
		case 8:
			return 11;
		case 9:
			return 6;
		case 10:
			return 6;
		case 11:
			return 10;
		case 12:
			return 10;
	}
	return 0;
}

int func_647(int iParam0, int iParam1)
{
	return 0;
}

bool func_648(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar1 = func_650(iParam0, iParam1);
	iVar2 = func_649(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_649(int iParam0)
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

int func_650(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = func_18();
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

bool func_651()
{
	return DLC::IS_DLC_PRESENT(joaat("MPPILOT"));
}

bool func_652()
{
	return DLC::IS_DLC_PRESENT(joaat("MPLTS"));
}

void func_653(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_2537071.f_1734, 11))
		{
			MISC::SET_BIT(&(Global_2537071.f_1734), 11);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2537071.f_1734, 11))
	{
		MISC::CLEAR_BIT(&(Global_2537071.f_1734), 11);
	}
}

void func_654(bool bParam0)
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

void func_655()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
}

void func_656(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
		{
			if (((!func_244(PLAYER::PLAYER_ID()) && !func_201(PLAYER::PLAYER_ID())) && !func_665(PLAYER::PLAYER_ID())) && !func_210(PLAYER::PLAYER_ID()))
			{
				if (func_242())
				{
					func_627(2, 0, 1);
					func_664();
				}
				if (func_259(0))
				{
					iVar0 = func_260(2480, -1, 0);
					MISC::CLEAR_BIT(&iVar0, 0);
					func_664();
				}
				if (func_259(func_206(func_190(PLAYER::PLAYER_ID()))))
				{
					iVar0 = func_260(2480, -1, 0);
					MISC::CLEAR_BIT(&iVar0, func_206(func_190(PLAYER::PLAYER_ID())));
					func_664();
				}
				if (func_663())
				{
					func_664();
				}
				if (func_190(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 7);
					if (func_224(PLAYER::PLAYER_ID()))
					{
						func_662();
					}
					func_659(func_661(func_190(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 7);
		func_657();
	}
}

void func_657()
{
	if (func_658())
	{
		MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 17);
	}
}

bool func_658()
{
	return MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 17);
}

void func_659(int iParam0)
{
	int iVar0;

	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_660() /*10930*/].f_6174.f_4111[iVar0 /*3*/] == iParam0)
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

int func_660()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

int func_661(int iParam0)
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

void func_662()
{
	if (!func_658())
	{
		Global_2537071.f_6577 = NETWORK::_0xBA7F0B77D80A4EB7();
		MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 17);
	}
}

bool func_663()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return false;
	}
	return true;
}

void func_664()
{
	if (func_663())
	{
		Global_2439138.f_1156.f_16 = 1;
	}
}

bool func_665(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (((func_242() && !func_237()) || func_203(PLAYER::PLAYER_ID(), 21)) || func_203(PLAYER::PLAYER_ID(), 25))
		{
			return true;
		}
		if (func_22(&(Global_1574650.f_13)))
		{
			if (!func_19(&(Global_1574650.f_13), Global_262145.f_14, 0))
			{
				return true;
			}
			func_106(&(Global_1574650.f_13));
		}
	}
	else if (MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 10))
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 9);
}

void func_666(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;

	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2537071.f_4971 = -1;
	bVar0 = (func_238(PLAYER::PLAYER_ID(), 0) && func_231(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_675(func_676(iParam0), 1);
	}
	else
	{
		func_674(iParam0, -1);
		if (func_202(PLAYER::PLAYER_ID()))
		{
			Global_1574650.f_3 = iParam0;
		}
		else
		{
			func_704(iParam0);
		}
		Global_1574650.f_4 = -1;
		if (func_202(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1574650.f_1), 5);
		}
		if (((func_242() && !func_237()) || func_203(PLAYER::PLAYER_ID(), 21)) || func_203(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1574650.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1574650.f_1), 17);
		MISC::SET_BIT(&(Global_1574650.f_1), 20);
		if (func_673(iParam0))
		{
			func_672();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_671(fParam1);
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
		if (func_670(iParam0))
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
				func_446(1);
				if (func_595(0))
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
			func_444(1);
			MISC::SET_BIT(&(Global_1574650.f_1), 12);
		}
		if (bParam5)
		{
			func_669();
			MISC::SET_BIT(&(Global_1574650.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_667(iParam0))
			{
				MISC::SET_BIT(&(Global_1574650.f_1), 21);
			}
		}
	}
	Global_2513109 = 1;
}

bool func_667(int iParam0)
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
	if (func_668())
	{
		return true;
	}
	return false;
}

bool func_668()
{
	switch (func_189())
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

void func_669()
{
	MISC::SET_BIT(&(Global_2537071.f_4962), 0);
}

bool func_670(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return true;
		case 141:
			if (func_232(PLAYER::PLAYER_ID()))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_671(float fParam0)
{
	float fVar0;

	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_438())
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

void func_672()
{
	Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_200 = 0;
	MISC::CLEAR_BIT(&(Global_2537071.f_4561), 1);
}

bool func_673(int iParam0)
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

void func_674(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_259(0) || func_259(func_206(iVar0)))
		{
			MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 2);
		}
	}
}

void func_675(int iParam0, bool bParam1)
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

int func_676(int iParam0)
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

bool func_677(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_678()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (Local_80.f_27 != joaat("VALKYRIE"))
	{
		return true;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return false;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("VALKYRIE"));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar2, false);
		if (iVar4 != 0)
		{
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if (PED::IS_PED_A_PLAYER(iVar4))
				{
					iVar3++;
				}
			}
		}
		iVar2++;
	}
	if (iVar3 > 0)
	{
		return true;
	}
	return false;
}

void func_679(bool bParam0)
{
	int iVar0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, bParam0);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iVar0, !bParam0);
		}
	}
}

void func_680(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, iVar0))
		{
			*iParam0 = iVar0;
			*iParam1 = Local_80.f_256[iVar0];
		}
		iVar0++;
	}
}

void func_681()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1628237[iVar0 /*615*/] = -1;
	}
}

void func_682(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_242())
		{
			if (func_844(PLAYER::PLAYER_ID(), 1, 0))
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
			if (func_844(PLAYER::PLAYER_ID(), 1, 1))
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

void func_683(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 0))
		{
			Global_2462854 = func_190(PLAYER::PLAYER_ID());
			if (Global_2462854 == -1)
			{
				Global_2462854 = Global_1574650.f_4;
			}
			if (func_703(Global_2462854) == 0)
			{
				if (func_702(1) > 0)
				{
					func_701(26, -1);
				}
			}
			if (func_242())
			{
				func_627(2, 0, 1);
				func_664();
			}
			if (func_259(0))
			{
				iVar1 = func_260(2480, -1, 0);
				MISC::CLEAR_BIT(&iVar1, 0);
				func_664();
			}
			if (func_259(func_206(func_190(PLAYER::PLAYER_ID()))))
			{
				iVar1 = func_260(2480, -1, 0);
				MISC::CLEAR_BIT(&iVar1, func_206(func_190(PLAYER::PLAYER_ID())));
				func_664();
			}
			if (func_663())
			{
				func_664();
			}
			MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 0))
	{
		if ((!func_223() && !func_700()) && !func_699())
		{
			Global_2462854 = -1;
			func_616(26, -1);
		}
		else if (func_703(Global_2462854) == 0)
		{
			iVar0 = func_686(1);
			if (iVar0 > 0)
			{
				func_684(joaat("MPPLY_FMEVN_CHEAT_END"), iVar0);
				func_485(1932, 1, -1);
				func_684(joaat("MPPLY_ACTIVITY_ENDED"), 1);
			}
		}
		else if (func_618(26, -1))
		{
			Global_2462854 = -1;
			func_616(26, -1);
		}
		MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 0);
	}
}

void func_684(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_469(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_685(iParam0))
	{
		func_467(iParam0, iVar0);
	}
	else
	{
		func_471(iParam0, iVar0);
	}
}

bool func_685(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case joaat("MPPLY_CREW_0_ID"):
			case joaat("MPPLY_CREW_1_ID"):
			case joaat("MPPLY_CREW_2_ID"):
			case joaat("MPPLY_CREW_3_ID"):
			case joaat("MPPLY_CREW_4_ID"):
			case joaat("MPPLY_CREW_LOCAL_XP_0"):
			case joaat("MPPLY_CREW_LOCAL_XP_1"):
			case joaat("MPPLY_CREW_LOCAL_XP_2"):
			case joaat("MPPLY_CREW_LOCAL_XP_3"):
			case joaat("MPPLY_CREW_LOCAL_XP_4"):
			case joaat("MPPLY_BECAME_CHEATER_NUM"):
			case joaat("MPPLY_FRIENDLY"):
			case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			case joaat("MPPLY_GRIEFING"):
			case joaat("MPPLY_HELPFUL"):
			case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			case joaat("MPPLY_OFFENSIVE_UGC"):
				return true;
		}
	}
	return false;
}

int func_686(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	iVar1 = 0;
	if (Global_2461737 == 0)
	{
		return 0;
	}
	if (func_699())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_698() || func_696()))
		{
			Global_2460684 = 1;
		}
	}
	Global_2461737 = 0;
	if (Global_1315704)
	{
		iVar0 = 1;
	}
	if (Global_2460684)
	{
		iVar0 = 1;
	}
	if (Global_2460683)
	{
		iVar0 = 1;
	}
	if (func_551(Global_110666.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2460606)
	{
		iVar0 = 1;
	}
	if (func_695(512))
	{
		iVar0 = 1;
	}
	if (func_694(128))
	{
		iVar0 = 1;
	}
	if (Global_1315728 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_168())
	{
		iVar0 = 0;
	}
	if (Global_2461176)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_692())
		{
			if (Global_4456448.f_197270 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_691())
	{
		iVar0 = 0;
	}
	if ((Global_2460684 || Global_2460683) || Global_1315704)
	{
		if (func_696())
		{
			iVar0 = 0;
		}
	}
	Global_2461176 = 0;
	Global_2460683 = 0;
	Global_2460684 = 0;
	Global_1315704 = 0;
	Global_2460606 = 0;
	func_689(&(Global_110666.f_1), 32);
	func_688(512);
	func_687(128);
	return iVar0;
}

void func_687(int iParam0)
{
	Global_110723 = (Global_110723 - (Global_110723 && iParam0));
}

void func_688(int iParam0)
{
	Global_110724 = (Global_110724 - (Global_110724 && iParam0));
}

void func_689(var uParam0, int iParam1)
{
	func_690(uParam0, iParam1);
}

void func_690(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_691()
{
	if (((Global_1574428 || Global_1574398) || func_16(PLAYER::PLAYER_ID(), 0)) || func_584())
	{
		return true;
	}
	return false;
}

bool func_692()
{
	switch (func_693())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return true;
		default:
			break;
	}
	return false;
}

int func_693()
{
	return Global_2451426.f_1.f_2822;
}

bool func_694(int iParam0)
{
	return (Global_110723 && iParam0) != 0;
}

bool func_695(int iParam0)
{
	return (Global_110724 && iParam0) != 0;
}

bool func_696()
{
	if (func_703(Global_2462854))
	{
		return false;
	}
	if (func_697(PLAYER::PLAYER_ID(), 146))
	{
		return true;
	}
	return false;
}

bool func_697(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/] == iParam1)
	{
		return func_232(iParam0);
	}
	return false;
}

bool func_698()
{
	if (func_703(Global_2462854))
	{
		return false;
	}
	if (func_232(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

bool func_699()
{
	return MISC::IS_BIT_SET(Global_1312425, 0);
}

bool func_700()
{
	return Global_1312846;
}

void func_701(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_18();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, bParam1);
			break;
		default:
			iVar1 = func_617(bParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!MISC::IS_BIT_SET(iVar0, iParam0))
			{
				MISC::SET_BIT(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, bParam1);
			}
			break;
	}
}

int func_702(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	iVar1 = 0;
	if (Global_1315728 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_168())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_692())
		{
			if (Global_4456448.f_197270 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_691())
	{
		iVar0 = 0;
	}
	Global_2461737 = 1;
	return iVar0;
}

bool func_703(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11389)
			{
				return true;
			}
			break;
		case 132:
			if (Global_262145.f_11391)
			{
				return true;
			}
			break;
		case 133:
			if (Global_262145.f_11388)
			{
				return true;
			}
			break;
		case 136:
			if (Global_262145.f_11392)
			{
				return true;
			}
			break;
		case 138:
			if (Global_262145.f_11393)
			{
				return true;
			}
			break;
		case 139:
			if (Global_262145.f_11394)
			{
				return true;
			}
			break;
		case 129:
			if (Global_262145.f_11390)
			{
				return true;
			}
			break;
		case 140:
			if (Global_262145.f_11395)
			{
				return true;
			}
			break;
		case 141:
			if (Global_262145.f_11396)
			{
				return true;
			}
			break;
		case 144:
			if (Global_262145.f_11397)
			{
				return true;
			}
			break;
		case 146:
			if (Global_262145.f_11398)
			{
				return true;
			}
			break;
		case 236:
		case 150:
			break;
	}
	return false;
}

void func_704(int iParam0)
{
	Global_1628237[PLAYER::PLAYER_ID() /*615*/] = iParam0;
}

void func_705(int iParam0)
{
	Global_2461974 = iParam0;
}

void func_706(int iParam0)
{
	if (func_200())
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (!MISC::IS_BIT_SET(iLocal_1291, 0))
			{
				if ((((func_708(60000) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_405()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && func_422(0, 1, 1, 1))
				{
					if (!func_742())
					{
						func_707("UW_HELP1", func_626(), func_625(1), 30000);
					}
					else
					{
						func_707("UW_HELP1C", func_626(), func_625(1), 30000);
					}
					func_420(0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
					MISC::SET_BIT(&iLocal_1291, 0);
				}
			}
			break;
	}
}

void func_707(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

bool func_708(int iParam0)
{
	return MISC::ABSI(NETWORK::IS_TIME_EQUAL_TO(Global_2413895, NETWORK::_0xBA7F0B77D80A4EB7())) > iParam0;
}

void func_709()
{
	int iVar0;

	MISC::CLEAR_BIT(&iLocal_1292, 15);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_710(iVar0);
		iVar0++;
	}
	if (MISC::IS_BIT_SET(iLocal_1292, 15))
	{
		if (!MISC::IS_BIT_SET(Global_1574650.f_1, 15))
		{
			MISC::SET_BIT(&(Global_1574650.f_1), 15);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1574650.f_1, 15))
	{
		MISC::CLEAR_BIT(&(Global_1574650.f_1), 15);
	}
}

void func_710(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_7[iParam0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_80.f_7[iParam0]), false))
		{
			if (Local_80.f_241 == 0)
			{
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_80.f_7[iParam0]), false))
		{
			if (!func_200())
			{
				if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, iParam0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!MISC::IS_BIT_SET(iLocal_1292, 15))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == NETWORK::NET_TO_VEH(Local_80.f_7[iParam0]))
							{
								MISC::SET_BIT(&iLocal_1292, 15);
							}
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_80.f_7[iParam0]), false))
						{
							if (func_714("UW_HELP2", func_626()) || func_714("UW_HELP2C", func_626()))
							{
								HUD::CLEAR_HELP(true);
							}
							if (!func_411(PLAYER::PLAYER_ID()))
							{
								func_631(1);
							}
							iVar0 = func_713(PLAYER::PLAYER_PED_ID(), 0);
							if (func_624("UW_HELP1", func_626(), func_625(1)) || func_624("UW_HELP1C", func_626(), func_625(1)))
							{
								HUD::CLEAR_HELP(true);
							}
							if (Local_80.f_463 != -1)
							{
								if (iVar0 > (Local_80.f_463 - 2))
								{
									iVar0 = (Local_80.f_463 - 2);
									if (iVar0 < -1)
									{
										iVar0 = -1;
									}
								}
							}
							MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iVar0 + 1));
							MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), iParam0);
							Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = iParam0;
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, true);
							func_192();
							iLocal_3467 = iVar0;
						}
						else if (Local_80.f_241 == 0)
						{
							if (!MISC::IS_BIT_SET(iLocal_1291, 1))
							{
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_80.f_7[iParam0]), true)) < 2500f)
									{
										if (func_422(0, 1, 1, 1))
										{
											if (!func_742())
											{
												func_712("UW_HELP2", func_626(), 30000);
											}
											else
											{
												func_712("UW_HELP2C", func_626(), 30000);
											}
											func_420(1);
											MISC::SET_BIT(&iLocal_1291, 1);
										}
									}
								}
							}
							if (!func_242())
							{
								if (MISC::IS_BIT_SET(iLocal_1292, 2))
								{
									MISC::CLEAR_BIT(&iLocal_1292, 2);
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
								{
									if (!MISC::IS_BIT_SET(iLocal_1291, 4))
									{
										if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
										{
											MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
										}
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
										{
											if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_80.f_7[iParam0]), true)) < 2500f)
											{
												if (func_422(0, 1, 1, 1))
												{
													if (!func_742())
													{
														func_421("UW_COPS", 30000);
													}
													else
													{
														func_421("UW_COPSC", 30000);
													}
													func_420(1);
													MISC::SET_BIT(&iLocal_1291, 4);
												}
											}
										}
									}
									else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_80.f_7[iParam0]), true)) > 10000f)
									{
										MISC::CLEAR_BIT(&iLocal_1291, 4);
									}
								}
								else
								{
									if (MISC::IS_BIT_SET(iLocal_1291, 4))
									{
										MISC::CLEAR_BIT(&iLocal_1291, 4);
									}
									if (MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
									{
										MISC::CLEAR_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
								{
									MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
								}
								if (!MISC::IS_BIT_SET(iLocal_1292, 2))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_80.f_7[iParam0]), true)) < 2500f)
									{
										if (func_422(0, 1, 1, 1))
										{
											if (!func_742())
											{
												func_421("UW_PASSMD", 30000);
											}
											else
											{
												func_421("UW_PASSMD", 30000);
											}
											func_420(1);
											MISC::SET_BIT(&iLocal_1292, 2);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_80.f_7[iParam0]), false))
							{
								iVar2 = 0;
								while (iVar2 < Local_80.f_28)
								{
									if (MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, (0 + iVar2)))
									{
										func_9();
										MISC::CLEAR_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iVar2));
									}
									iVar2++;
								}
								if (MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, iParam0))
								{
									MISC::CLEAR_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), iParam0);
								}
								if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 != -1)
								{
									Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = -1;
								}
								if (func_677("UW_TIMEL"))
								{
									HUD::CLEAR_HELP(true);
								}
								if (func_677("UW_TIMELA"))
								{
									HUD::CLEAR_HELP(true);
								}
								if (func_411(PLAYER::PLAYER_ID()))
								{
									func_631(0);
								}
								PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
							}
							else
							{
								if (Local_80.f_241 == 0 && !MISC::IS_BIT_SET(Local_80.f_3, 4))
								{
									iVar0 = func_713(PLAYER::PLAYER_PED_ID(), 0);
									if (Local_80.f_463 != -1)
									{
										if (iVar0 > (Local_80.f_463 - 2))
										{
											iVar0 = (Local_80.f_463 - 2);
										}
									}
									if (iVar0 != iLocal_3467)
									{
										MISC::CLEAR_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), iParam0);
										MISC::CLEAR_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iLocal_3467 + 1));
									}
								}
								bVar1 = false;
								if (func_261())
								{
									if (Local_80.f_413 > -1)
									{
										iVar3 = (Local_80.f_413 - func_126(&(Local_80.f_326), 0, 0));
										if (iVar3 < 2000)
										{
											bVar1 = true;
										}
									}
								}
								func_711(bVar1);
								if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_7[iParam0])) == joaat("RHINO"))
								{
									VEHICLE::_DISABLE_VEHICLE_TURRET_MOVEMENT_THIS_FRAME(NETWORK::NET_TO_VEH(Local_80.f_7[iParam0]));
								}
								if (!func_22(&uLocal_1514))
								{
									func_20(&uLocal_1514, 0, 0);
								}
								else if (func_19(&uLocal_1514, 2000, 0))
								{
									if (MISC::IS_BIT_SET(Local_80.f_3, 9) || !func_742())
									{
										if (func_677("UW_MINV"))
										{
										}
										if (!MISC::IS_BIT_SET(iLocal_1291, 5))
										{
											if (Local_80.f_28 > 1 || (Local_80.f_28 == 1 && func_112() > 1))
											{
												if (func_22(&(Local_80.f_326)))
												{
													if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
													{
														if (func_112() > 1)
														{
															func_421("UW_TIMELA", 30000);
														}
														else
														{
															func_421("UW_TIMEL", 30000);
														}
														func_420(1);
														MISC::SET_BIT(&iLocal_1291, 5);
													}
												}
											}
										}
									}
									else if (func_742())
									{
										if (!MISC::IS_BIT_SET(Local_80.f_3, 9))
										{
											if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_7[iParam0])) != joaat("VALKYRIE"))
											{
												if (!MISC::IS_BIT_SET(iLocal_1291, 14))
												{
													if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
													{
														func_421("UW_MINV", 30000);
														func_420(1);
														MISC::SET_BIT(&iLocal_1291, 14);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_80.f_241 == 0)
					{
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_7[iParam0])) == joaat("VALKYRIE"))
						{
							if (!func_677("UW_VALK") && !func_677("UW_VALKC"))
							{
								HUD::CLEAR_ALL_HELP_MESSAGES();
								if (MISC::IS_BIT_SET(iLocal_1291, 8))
								{
									MISC::CLEAR_BIT(&iLocal_1291, 8);
								}
							}
							if (!MISC::IS_BIT_SET(iLocal_1291, 8))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									iVar6 = 0;
									iVar4 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_80.f_7[iParam0])) + 1;
									iVar5 = 0;
									while (iVar5 < iVar4)
									{
										if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_80.f_7[iParam0]), (iVar5 - 1), false))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 1)
									{
										if (!func_742())
										{
											func_421("UW_VALK", 30000);
										}
										else
										{
											func_421("UW_VALKC", 30000);
										}
										func_420(1);
										MISC::SET_BIT(&iLocal_1291, 8);
									}
									if (!MISC::IS_BIT_SET(iLocal_1291, 8))
									{
										if (func_742())
										{
											iVar7 = 0;
											iVar7 = 0;
											while (iVar7 < 4)
											{
												if (!bVar8)
												{
													if (iVar7 != iParam0)
													{
														iVar5 = 0;
														iVar6 = 0;
														if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iVar7]))
														{
															if (func_109(Local_80.f_7[iVar7]))
															{
																iVar5 = 0;
																while (iVar5 < iVar4)
																{
																	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_80.f_7[iVar7]), (iVar5 - 1), false))
																	{
																		iVar6++;
																	}
																	iVar5++;
																}
																if (iVar6 > 1)
																{
																	bVar8 = true;
																}
															}
														}
													}
												}
												iVar7++;
											}
											if (!bVar8)
											{
												func_421("UW_VALKC", 30000);
												func_420(1);
												MISC::SET_BIT(&iLocal_1291, 8);
											}
										}
									}
								}
							}
						}
					}
					if (Local_80.f_241 == 1)
					{
						if (MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, iParam0))
						{
							if (!MISC::IS_BIT_SET(iLocal_1291, 6))
							{
								if (func_109(Local_80.f_7[iParam0]))
								{
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_80.f_7[iParam0])))
										{
											if (!MISC::IS_BIT_SET(iLocal_1291, 7))
											{
												if ((PAD::IS_CONTROL_JUST_PRESSED(0, 75) || PAD::IS_CONTROL_PRESSED(0, 75)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 75))
												{
													MISC::SET_BIT(&iLocal_1291, 7);
												}
											}
											if (MISC::IS_BIT_SET(iLocal_1291, 7))
											{
												if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
												{
													if (func_742())
													{
														func_421("UW_EXITVC", 30000);
													}
													else
													{
														func_421("UW_EXITV", 30000);
													}
													func_420(1);
													MISC::SET_BIT(&iLocal_1291, 6);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else
			{
				iVar10 = 0;
				while (iVar10 < 4)
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_7[iVar10]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_80.f_7[iVar10]), false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_80.f_7[iVar10]), false))
							{
								bVar11 = true;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (func_259(0))
					{
						iVar9 = func_260(2480, -1, 0);
						MISC::CLEAR_BIT(&iVar9, 0);
						func_479(2480, iVar9, -1, 1, 0);
						func_664();
						if (MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
						{
							MISC::CLEAR_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
						}
					}
					if (func_259(8))
					{
						iVar9 = func_260(2480, -1, 0);
						MISC::CLEAR_BIT(&iVar9, 8);
						func_479(2480, iVar9, -1, 1, 0);
						func_664();
						if (MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
						{
							MISC::CLEAR_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
						}
					}
				}
				else
				{
					if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
					{
						Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
					}
					if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
					{
						MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_1292, 14))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (func_109(Local_80.f_7[iParam0]))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_80.f_7[iParam0]), true)) < 2500f)
							{
								if (func_422(0, 1, 1, 1))
								{
									if (!func_251(129, 0, 0))
									{
										if (!func_742())
										{
											func_421("UW_TUT", -1);
										}
										else
										{
											func_421("UW_TUTC", -1);
										}
										func_420(1);
										MISC::SET_BIT(&iLocal_1292, 14);
									}
									else
									{
										if (!func_742())
										{
											func_421("UW_HIDE", -1);
										}
										else
										{
											func_421("UW_HIDEC", -1);
										}
										func_420(1);
										MISC::SET_BIT(&iLocal_1292, 14);
									}
								}
							}
						}
					}
				}
			}
			if (func_844(PLAYER::PLAYER_ID(), 1, 1) && Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (!MISC::IS_BIT_SET(Global_2537071.f_4592, 1))
				{
					MISC::SET_BIT(&(Global_2537071.f_4592), 1);
				}
			}
			else if (MISC::IS_BIT_SET(Global_2537071.f_4592, 1))
			{
				MISC::CLEAR_BIT(&(Global_2537071.f_4592), 1);
			}
		}
	}
}

void func_711(bool bParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, true);
	PAD::DISABLE_CONTROL_ACTION(0, 72, true);
	PAD::DISABLE_CONTROL_ACTION(0, 76, true);
	PAD::DISABLE_CONTROL_ACTION(0, 59, true);
	PAD::DISABLE_CONTROL_ACTION(0, 60, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	PAD::DISABLE_CONTROL_ACTION(0, 69, true);
	PAD::DISABLE_CONTROL_ACTION(0, 70, true);
	PAD::DISABLE_CONTROL_ACTION(0, 92, true);
	PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	PAD::DISABLE_CONTROL_ACTION(0, 91, true);
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 86, true);
	PAD::DISABLE_CONTROL_ACTION(0, 81, true);
	PAD::DISABLE_CONTROL_ACTION(0, 82, true);
	PAD::DISABLE_CONTROL_ACTION(0, 99, true);
	PAD::DISABLE_CONTROL_ACTION(0, 100, true);
	PAD::DISABLE_CONTROL_ACTION(0, 65, true);
	PAD::DISABLE_CONTROL_ACTION(0, 105, true);
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
	PAD::DISABLE_CONTROL_ACTION(0, 51, true);
	PAD::DISABLE_CONTROL_ACTION(0, 47, true);
	PAD::DISABLE_CONTROL_ACTION(0, 24, true);
	PAD::DISABLE_CONTROL_ACTION(0, 257, true);
}

void func_712(char* sParam0, char* sParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam2);
}

int func_713(int iParam0, bool bParam1)
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

bool func_714(char* sParam0, char* sParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_715()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_7[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_7[iVar0]))
		{
			iVar1 = NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				PHYSICS::_SET_ENTITY_PROOF_UNK(iVar1, true);
			}
		}
		iVar0++;
	}
}

void func_716(vector3 vParam0)
{
	Global_2391049 = { vParam0 };
	Global_2391052 = 1;
}

void func_717()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_733(iVar0);
				break;
			case 174:
				func_718(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_718(int iParam0)
{
	int iVar0;

	SCRIPT::GET_EVENT_DATA(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case -2124360391:
			func_732(iParam0);
			break;
		case -657622694:
			func_731(iParam0);
			break;
		case -1657590237:
			func_730(iParam0);
			break;
		case -1956435139:
			func_729(iParam0);
			break;
		case 1047532459:
			func_728(iParam0);
			break;
		case 540859937:
			func_725(iParam0);
			break;
		case -1384053127:
			func_719(iParam0);
			break;
	}
}

void func_719(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		iVar6 = vVar0.z;
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_73[iVar6]))
		{
			return;
		}
		if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar6))
		{
			if (!MISC::IS_BIT_SET(Local_80.f_271, iVar6))
			{
				if (func_100(iVar6))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_80.f_73[iVar6]), false))
					{
						if (NETWORK::_NETWORK_GET_DESTROYER_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_80.f_73[iVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (NETWORK::_0x83660B734994124D(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_80.f_73[iVar6]), &uVar5))
					{
						bVar8 = true;
					}
				}
				else if (!func_742())
				{
					if (Local_80.f_465[0 /*4*/].f_1 > 0)
					{
						iVar9 = PLAYER::INT_TO_PLAYERINDEX(Local_80.f_465[0 /*4*/].f_2);
						if (iVar9 != func_5())
						{
							if (iVar9 == PLAYER::PLAYER_ID())
							{
								bVar8 = true;
							}
						}
					}
					else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[0]))
					{
						if (func_109(Local_80.f_7[0]))
						{
							iVar11 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_80.f_7[0]), -1, false);
							if (iVar11 != 0)
							{
								if (PED::IS_PED_A_PLAYER(iVar11))
								{
									iVar10 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
									if (iVar10 == PLAYER::PLAYER_ID())
									{
										bVar8 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar8)
		{
			if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
			{
				iVar4 = func_724();
				iVar12 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_73[iVar6]));
				iVar7 = iVar6 * 4;
				if (func_723(iVar12))
				{
					iVar3 = func_42(iVar12);
					iVar14 = iVar7;
					while (iVar14 <= (iVar7 + (iVar3 - 1)))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_48[iVar14]) && !MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar14)], func_90(iVar14)))
						{
							iVar13++;
							MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar14)]), func_90(iVar14));
						}
						iVar14++;
					}
					Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar13);
					iVar4 = (iVar4 * iVar13);
				}
				else
				{
					Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
				}
				if (Local_697.f_11 == 0)
				{
					Local_697.f_11 = NETWORK::_0xF12E6CD06C73D69E();
				}
				if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_722())
				{
					Local_697.f_7 = (Local_697.f_7 + iVar4);
					func_721(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
					func_720();
				}
			}
			MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar6);
		}
	}
}

void func_720()
{
	if (!func_22(&uLocal_3444) || (func_22(&uLocal_3444) && func_19(&uLocal_3444, 2000, 0)))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Kill_List_Counter", "GTAO_FM_Events_Soundset", false);
		func_106(&uLocal_3444);
		func_20(&uLocal_3444, 0, 0);
	}
}

int func_721(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_464(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_722()
{
	if (func_742())
	{
		return Global_262145.f_11314;
	}
	return Global_262145.f_11253;
}

bool func_723(int iParam0)
{
	return (((iParam0 == joaat("INSURGENT") || iParam0 == joaat("LAZER")) || iParam0 == joaat("BUZZARD")) || iParam0 == joaat("MESA3"));
}

int func_724()
{
	if (func_742())
	{
		return Global_262145.f_11313;
	}
	return Global_262145.f_11252;
}

void func_725(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		iVar6 = vVar0.z;
		if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar6))
		{
			if (!MISC::IS_BIT_SET(Local_80.f_271, iVar6))
			{
				if (func_727(iVar6))
				{
					bVar8 = true;
				}
				else if (!func_726(iVar6))
				{
					if (func_100(iVar6))
					{
						if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_80.f_73[iVar6]), false))
						{
							if (NETWORK::_NETWORK_GET_DESTROYER_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_80.f_73[iVar6]), &uVar5))
							{
								bVar8 = true;
							}
						}
						else if (NETWORK::_0x83660B734994124D(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_80.f_73[iVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (!func_742())
					{
						if (Local_80.f_465[0 /*4*/].f_1 > 0)
						{
							iVar9 = PLAYER::INT_TO_PLAYERINDEX(Local_80.f_465[0 /*4*/].f_2);
							if (iVar9 != func_5())
							{
								if (iVar9 == PLAYER::PLAYER_ID())
								{
									bVar8 = true;
								}
							}
						}
						else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[0]))
						{
							if (func_109(Local_80.f_7[0]))
							{
								iVar11 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_80.f_7[0]), -1, false);
								if (iVar11 != 0)
								{
									if (PED::IS_PED_A_PLAYER(iVar11))
									{
										iVar10 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
										if (iVar10 == PLAYER::PLAYER_ID())
										{
											bVar8 = true;
										}
									}
								}
							}
						}
					}
				}
				if (bVar8)
				{
					if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						iVar3 = func_42(joaat("SAVAGE"));
						iVar7 = iVar6 * 4;
						iVar13 = 0;
						iVar12 = iVar7;
						while (iVar12 <= (iVar7 + (iVar3 - 1)))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_48[iVar12]) && !MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar12)], func_90(iVar12)))
							{
								iVar13++;
								MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar12)]), func_90(iVar12));
							}
							iVar12++;
						}
						Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar13);
						iVar4 = (iVar4 * iVar13);
						if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_722())
						{
							iVar4 = func_724();
							iVar4 = (iVar4 * iVar3);
							Local_697.f_7 = (Local_697.f_7 + iVar4);
							func_721(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
							func_720();
							if (Local_697.f_11 == 0)
							{
								Local_697.f_11 = NETWORK::_0xF12E6CD06C73D69E();
							}
						}
						MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar6);
					}
				}
			}
		}
	}
}

bool func_726(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_714[iVar0 /*18*/].f_11[iParam0] > 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_727(int iParam0)
{
	int iVar0;

	if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[iParam0] == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (iVar0 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (Local_714[iVar0 /*18*/].f_11[iParam0] > Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[iParam0])
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_728(int iParam0)
{
	vector3 vVar0;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("am_kill_list", -1, 0) != func_5())
		{
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			MISC::SET_BIT(&(Local_80.f_464), vVar0.z);
		}
	}
}

void func_729(int iParam0)
{
	vector3 vVar0;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		MISC::SET_BIT(&uLocal_3411, vVar0.z);
	}
}

void func_730(int iParam0)
{
	vector3 vVar0;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		MISC::SET_BIT(&uLocal_3412, vVar0.z);
	}
}

void func_731(int iParam0)
{
	vector3 vVar0;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(vVar0.z)], func_90(vVar0.z)))
		{
			MISC::CLEAR_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(vVar0.z)]), func_90(vVar0.z));
		}
	}
}

void func_732(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		iVar3 = vVar0.z;
		if (MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar3))
		{
			MISC::CLEAR_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar3);
		}
	}
}

void func_733(int iParam0)
{
	struct<6> Var0;
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
	bool bVar23;
	var uVar24;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		iVar13 = 0;
		while (iVar13 < 5)
		{
			if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar13))
			{
				if (!MISC::IS_BIT_SET(Local_80.f_271, iVar13))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_73[iVar13]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_80.f_73[iVar13])))
								{
									if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_VEH(Local_80.f_73[iVar13]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
										{
											if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
											{
												if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
												{
													if (Var0.f_5)
													{
														iVar16 = ENTITY::GET_ENTITY_MODEL(Var0);
														if (Local_80.f_27 == joaat("HYDRA"))
														{
															if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
															{
																iVar19 = func_724();
																if (func_723(iVar16))
																{
																	iVar14 = func_42(iVar16);
																	Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar14);
																	iVar19 = (iVar19 * iVar14);
																}
																else
																{
																	Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																}
																if (Local_697.f_11 == 0)
																{
																	Local_697.f_11 = NETWORK::_0xF12E6CD06C73D69E();
																}
																if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_722())
																{
																	Local_697.f_7 = (Local_697.f_7 + iVar19);
																	func_721(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																	func_720();
																}
															}
															MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar13);
														}
														else if (iVar16 == joaat("BUZZARD"))
														{
															iVar21 = -1;
															iVar21 = -1;
															while (iVar21 <= 3)
															{
																iVar18 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_80.f_73[iVar13]), iVar21, false);
																if (iVar18 != 0)
																{
																	iVar20 = func_734(iVar18);
																	if (iVar20 > -1)
																	{
																		if (!MISC::IS_BIT_SET(Local_80.f_272[func_91(iVar20)], func_90(iVar20)))
																		{
																			if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar20)], func_90(iVar20)))
																			{
																				MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar20)]), func_90(iVar20));
																				iVar19 = func_724();
																				Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																				if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_722())
																				{
																					Local_697.f_7 = (Local_697.f_7 + iVar19);
																					func_721(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																					func_720();
																				}
																				if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_80.f_48[iVar20])))
																				{
																					func_92(&(Local_1308[iVar20 /*8*/]));
																				}
																			}
																		}
																	}
																}
																iVar21++;
															}
															MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar13);
														}
													}
													else if (!func_109(Local_80.f_73[iVar13]))
													{
													}
												}
												else if (Var0.f_5)
												{
													if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)))
													{
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			iVar13++;
		}
		if (Local_80.f_27 != joaat("HYDRA"))
		{
			iVar13 = 0;
			while (iVar13 <= 19)
			{
				if (!MISC::IS_BIT_SET(Local_80.f_272[func_91(iVar13)], func_90(iVar13)))
				{
					if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar13)], func_90(iVar13)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_48[iVar13]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_80.f_48[iVar13])))
									{
										if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_PED(Local_80.f_48[iVar13]))
										{
											if (Var0.f_5)
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar17))
														{
															if (iVar17 == PLAYER::PLAYER_PED_ID())
															{
																if (Var0.f_5)
																{
																	iVar19 = func_724();
																	if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																	{
																		Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																		if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_722())
																		{
																			func_721(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																			Local_697.f_7 = (Local_697.f_7 + iVar19);
																			func_720();
																		}
																	}
																	if (Local_697.f_11 == 0)
																	{
																		Local_697.f_11 = NETWORK::_0xF12E6CD06C73D69E();
																	}
																	MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar13)]), func_90(iVar13));
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (iVar13 < 5)
				{
					if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar13))
					{
						if (!MISC::IS_BIT_SET(Local_80.f_271, iVar13))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_73[iVar13]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_80.f_73[iVar13])))
										{
											if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_VEH(Local_80.f_73[iVar13]))
											{
												if (ENTITY::GET_ENTITY_MODEL(Var0) == joaat("SAVAGE"))
												{
													if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar13)], func_90(iVar13)))
													{
														if (Var0.f_5)
														{
															if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
															{
																if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
																{
																	iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																	if (PED::IS_PED_A_PLAYER(iVar17))
																	{
																		if (iVar17 == PLAYER::PLAYER_PED_ID())
																		{
																			if (Var0.f_5)
																			{
																				if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																				{
																					iVar14 = func_42(joaat("SAVAGE"));
																					Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar14);
																					iVar19 = func_724();
																					iVar19 = (iVar19 * iVar14);
																					if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_722())
																					{
																						func_721(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																						Local_697.f_7 = (Local_697.f_7 + iVar19);
																						func_720();
																						if (Local_697.f_11 == 0)
																						{
																							Local_697.f_11 = NETWORK::_0xF12E6CD06C73D69E();
																						}
																					}
																					iVar22 = iVar13 * 4;
																					MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22)]), func_90(iVar22));
																					MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22 + 1)]), func_90(iVar22 + 1));
																					MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22 + 2)]), func_90(iVar22 + 2));
																					MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22 + 3)]), func_90(iVar22 + 3));
																					MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar13);
																				}
																			}
																		}
																	}
																	else if (func_727(iVar13))
																	{
																		if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																		{
																			iVar14 = func_42(joaat("SAVAGE"));
																			Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar14);
																			if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_722())
																			{
																				iVar19 = func_724();
																				iVar19 = (iVar19 * iVar14);
																				Local_697.f_7 = (Local_697.f_7 + iVar19);
																				func_721(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																				func_720();
																				if (Local_697.f_11 == 0)
																				{
																					Local_697.f_11 = NETWORK::_0xF12E6CD06C73D69E();
																				}
																			}
																			iVar22 = iVar13 * 4;
																			MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22)]), func_90(iVar22));
																			MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22 + 1)]), func_90(iVar22 + 1));
																			MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22 + 2)]), func_90(iVar22 + 2));
																			MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22 + 3)]), func_90(iVar22 + 3));
																			MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar13);
																		}
																	}
																	else if (func_726(iVar13))
																	{
																	}
																	else if (NETWORK::_0x83660B734994124D(bVar23, Var0, &uVar24))
																	{
																		if (bVar23 == PLAYER::PLAYER_ID())
																		{
																			if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																			{
																				iVar14 = func_42(joaat("SAVAGE"));
																				Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar14);
																				if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_722())
																				{
																					iVar19 = func_724();
																					iVar19 = (iVar19 * iVar14);
																					Local_697.f_7 = (Local_697.f_7 + iVar19);
																					func_721(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																					func_720();
																					if (Local_697.f_11 == 0)
																					{
																						Local_697.f_11 = NETWORK::_0xF12E6CD06C73D69E();
																					}
																				}
																				iVar22 = iVar13 * 4;
																				MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22)]), func_90(iVar22));
																				MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22 + 1)]), func_90(iVar22 + 1));
																				MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22 + 2)]), func_90(iVar22 + 2));
																				MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22 + 3)]), func_90(iVar22 + 3));
																				MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar13);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
															{
																if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
																{
																	iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																	if (PED::IS_PED_A_PLAYER(iVar17))
																	{
																		if (iVar17 == PLAYER::PLAYER_PED_ID())
																		{
																			iVar15 = NETWORK::_0xF12E6CD06C73D69E();
																			Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[iVar13] = iVar15;
																		}
																	}
																}
															}
															if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0), false))
															{
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				iVar13++;
			}
			iVar13 = 20;
			while (iVar13 <= 23)
			{
				if (!MISC::IS_BIT_SET(Local_80.f_272[func_91(iVar13)], func_90(iVar13)))
				{
					if (!MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar13)], func_90(iVar13)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_48[iVar13]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_80.f_48[iVar13])))
									{
										if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_PED(Local_80.f_48[iVar13]))
										{
											if (Var0.f_5)
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar17))
														{
															if (iVar17 == PLAYER::PLAYER_PED_ID())
															{
																if (Var0.f_5)
																{
																	if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																	{
																		Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																		if (Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_722())
																		{
																			iVar19 = func_724();
																			Local_697.f_7 = (Local_697.f_7 + iVar19);
																			if (Local_697.f_11 == 0)
																			{
																				Local_697.f_11 = NETWORK::_0xF12E6CD06C73D69E();
																			}
																			func_721(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																			func_720();
																		}
																	}
																	MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar13)]), func_90(iVar13));
																}
															}
														}
													}
												}
												else
												{
													MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar13)]), func_90(iVar13));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_48[iVar13]))
				{
				}
				iVar13++;
			}
		}
	}
}

int func_734(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar0 == -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_48[iVar1]))
			{
				if (NETWORK::NET_TO_PED(Local_80.f_48[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_735()
{
	int iVar0;
	int iVar1;

	if (Local_80.f_27 != joaat("HYDRA"))
	{
		if (iLocal_3469 == 0)
		{
			iLocal_3469 = 20;
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_48[iLocal_3469]))
		{
			if (!func_31(Local_80.f_48[iLocal_3469]))
			{
				iVar0 = NETWORK::_NETWORK_GET_ENTITY_NET_SCRIPT_ID(NETWORK::NET_TO_PED(Local_80.f_48[iLocal_3469]));
				if (iLocal_3470[iLocal_3469] != iVar0)
				{
					iLocal_3470[iLocal_3469] = iVar0;
					NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_80.f_48[iLocal_3469], 1);
				}
			}
		}
		iLocal_3469++;
		if (iLocal_3469 == 23)
		{
			iLocal_3469 = 20;
		}
	}
	if (Local_80.f_27 != joaat("HYDRA") && Local_80.f_27 != joaat("RHINO"))
	{
		if (!bLocal_3502)
		{
			if (func_98() == 5)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_73[iVar1]))
					{
						if (func_109(Local_80.f_73[iVar1]))
						{
							if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_80.f_73[iVar1])) == joaat("SAVAGE"))
							{
								NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_80.f_73[iVar1], 1);
								bLocal_3502 = true;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_73[iLocal_3495]))
	{
		if (func_109(Local_80.f_73[iLocal_3495]))
		{
			iVar0 = NETWORK::_NETWORK_GET_ENTITY_NET_SCRIPT_ID(NETWORK::NET_TO_PED(Local_80.f_73[iLocal_3495]));
			if (iLocal_3496[iLocal_3495] != iVar0)
			{
				iLocal_3496[iLocal_3495] = iVar0;
				if (!bLocal_3502)
				{
					NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_80.f_73[iLocal_3495], 1);
				}
			}
		}
	}
	iLocal_3495++;
	if (iLocal_3495 == 5)
	{
		iLocal_3495 = 0;
	}
}

void func_736()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;

	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (MISC::IS_BIT_SET(iLocal_3413, iVar0))
		{
			if (Local_80.f_85[iVar0] != 2)
			{
				MISC::CLEAR_BIT(&iLocal_3413, iVar0);
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_48[iVar0]))
		{
			func_740(iVar0);
			if (!func_31(Local_80.f_48[iVar0]))
			{
				switch (Local_80.f_85[iVar0])
				{
					case 1:
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_48[iVar0]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), false))
							{
								bVar2 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), false);
								iVar1 = ENTITY::GET_ENTITY_MODEL(bVar2);
								if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar1))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), -1273030092) != 0)
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(bVar2, -1, false) == NETWORK::NET_TO_PED(Local_80.f_48[iVar0]))
										{
											iVar9 = func_27();
											if (iVar9 != func_5())
											{
												iVar10 = PLAYER::GET_PLAYER_PED(iVar9);
												if (!PED::IS_PED_INJURED(iVar10))
												{
													if (func_26(bVar2, iVar10, 1) > 250f)
													{
														vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar10, true) };
														TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), bVar2, 0, iVar10, vVar3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
													}
												}
											}
										}
									}
								}
								else if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar1))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(bVar2, -1, false) == NETWORK::NET_TO_PED(Local_80.f_48[iVar0]))
									{
										bVar15 = true;
										iVar14 = (iVar0 / 4);
									}
									if ((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), -1273030092) != 0) || ((bVar15 && iVar14 < 5) && iLocal_1293[iVar14] != Local_80.f_110[iVar14]))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(bVar2, -1, false) == NETWORK::NET_TO_PED(Local_80.f_48[iVar0]))
										{
											iVar13 = Local_80.f_110[iVar14];
											if (iVar13 > -1)
											{
												iVar9 = PLAYER::INT_TO_PLAYERINDEX(iVar13);
												if (iVar9 != func_5())
												{
													iVar10 = PLAYER::GET_PLAYER_PED(iVar9);
													if (!PED::IS_PED_INJURED(iVar10))
													{
														vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar10, true) };
														TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), bVar2, 0, iVar10, vVar3, 4, 50f, 5f, -1f, 1.401298E-43f, 7.006492E-44f, 1);
														if (iLocal_1293[iVar14] != Local_80.f_110[iVar14])
														{
															iLocal_1293[iVar14] = Local_80.f_110[iVar14];
														}
													}
												}
											}
										}
									}
								}
								else if (((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), -1273030092) != 0) && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), 1306903184) != 0) && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), 1306903184) != 1)
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(bVar2, -1, false) == NETWORK::NET_TO_PED(Local_80.f_48[iVar0]))
									{
										iVar9 = func_27();
										if (iVar9 != func_5())
										{
											iVar10 = PLAYER::GET_PLAYER_PED(iVar9);
											if (!PED::IS_PED_INJURED(iVar10))
											{
												fVar11 = func_26(bVar2, iVar10, 1);
												if (fVar11 > 500f)
												{
													TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), ENTITY::GET_ENTITY_COORDS(iVar10, true), 2f, bVar2, true, 786469, -1f, 0, 1101004800 /* Float: 20f */, 0, 30f, 1082130432 /* Float: 4f */);
												}
												else if (fVar11 > 250f)
												{
													TASK::TASK_VEHICLE_MISSION_PED_TARGET(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), bVar2, iVar10, 4, 30f, 786469, 5f, 5f, true);
												}
											}
										}
									}
								}
							}
						}
						break;
					case 2:
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_48[iVar0]))
						{
							if (!func_23())
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), -1442466670) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), -1442466670) != 0)
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), false))
									{
										if (!MISC::IS_BIT_SET(iLocal_3413, iVar0))
										{
											iVar12 = func_739(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), 1133084672 /* Float: 275f */);
											if (iVar12 > -1)
											{
												TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), 299f, 0);
											}
											else if (!MISC::IS_BIT_SET(iLocal_3413, iVar0))
											{
												func_738(iVar0, func_104(1));
												MISC::SET_BIT(&iLocal_3413, iVar0);
											}
										}
									}
									else
									{
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), 299f, 0);
									}
								}
							}
						}
						break;
					case 3:
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), -251125078) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), -251125078) != 0)
						{
							vVar6 = { func_737() };
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]));
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), true);
							TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_80.f_48[iVar0]), vVar6, 10000f, 999999, false, false);
						}
						break;
				}
			}
		}
		iVar0++;
	}
}

Vector3 func_737()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iVar0]))
		{
			return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), false);
		}
		iVar0++;
	}
	return Local_80.f_30[0 /*3*/];
}

void func_738(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0.x = 1047532459;
	vVar0.f_1 = PLAYER::PLAYER_ID();
	vVar0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iParam1);
	}
}

int func_739(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;

	iVar0 = -1;
	fVar1 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iVar3]))
		{
			if (func_109(Local_80.f_7[iVar3]))
			{
				iVar7 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_80.f_7[iVar3]), -1, false);
				if (!PED::IS_PED_INJURED(iVar7))
				{
					if (PED::IS_PED_A_PLAYER(iVar7))
					{
						vVar4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_80.f_7[iVar3]), true) };
						fVar2 = func_523(iParam0, vVar4, 1);
						if (fVar2 < fVar1)
						{
							if (fVar2 < fParam1)
							{
								fVar1 = fVar2;
								iVar0 = iVar3;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

void func_740(int iParam0)
{
	int iVar0;

	return;
	if (!func_31(Local_80.f_48[iParam0]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_48[iParam0]))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_80.f_48[iParam0])))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_80.f_48[iParam0]), false);
				if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_80.f_48[iParam0]), 5, 0);
					}
				}
			}
		}
	}
}

void func_741(vector3 vParam0)
{
	Global_1574650.f_6 = { vParam0 };
}

bool func_742()
{
	return MISC::IS_BIT_SET(Local_80.f_3, 8);
}

void func_743(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_744("kwUfKUus6EuQyNSL8KpY-w");
					func_744("yMTOFLfO2UKwzKrmgPP7kg");
					func_744("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				case 2:
					func_744("tP5HSeCA0UiHnkRzakdO2Q");
					func_744("uEkrqoerQEmQ0uZRtp4rkw");
					func_744("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				case 3:
					func_744("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				case 6:
					func_744("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		case 139:
			switch (iParam1)
			{
				case 1:
					func_744("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				case 2:
					func_744("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		case 138:
			switch (iParam1)
			{
				case 2:
					func_744("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				case 3:
					func_744("uEkrqoerQEmQ0uZRtp4rkw");
					func_744("92t91kL3Wkqvl2Kc82cNSA");
					func_744("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				case 5:
					func_744("WfnWlxu780CwC7LLUrLljw");
					break;
				case 6:
					func_744("lowxnyELLUCxqy_Q1uslIg");
					break;
				case 7:
					func_744("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		case 141:
			switch (iParam1)
			{
				case 0:
					func_744("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		case 134:
			switch (iParam1)
			{
				case 1:
					func_744("QmlvLMLCwkOvoZlkAstYxw");
					break;
				case 4:
					func_744("fOfm7nzMLkav0ldcSCNAzA");
					func_744("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				case 5:
					func_744("3AAj-muvN0iHI5IMyGlboA");
					break;
				case 0:
					func_744("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				case 9:
					func_744("Ma78E44OMkGfYPmCPZXUNA");
					func_744("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				case 19:
					func_744("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				case 10:
					func_744("gxmtJHj2OUWQDt8nNMy3TQ");
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
							func_744("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 2:
							func_744("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				case 2:
					func_744("QmlvLMLCwkOvoZlkAstYxw");
					break;
				case 3:
					switch (iParam2)
					{
						case 1:
							func_744("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						case 2:
							func_744("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				case 4:
					func_744("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_744("3AAj-muvN0iHI5IMyGlboA");
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
							func_744("kXry-nXRbEC6ktiopjDDcg");
							break;
						case 1:
							func_744("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						case 2:
							func_744("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						case 3:
							func_744("fOfm7nzMLkav0ldcSCNAzA");
							func_744("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							func_744("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						case 1:
							func_744("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							func_744("QmlvLMLCwkOvoZlkAstYxw");
							break;
						case 2:
							func_744("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 3:
							func_744("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 1:
							func_744("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 1:
							func_744("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						case 2:
							func_744("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						case 3:
							func_744("fOfm7nzMLkav0ldcSCNAzA");
							func_744("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 0:
							func_744("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						case 1:
							func_744("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 0:
							func_744("QmlvLMLCwkOvoZlkAstYxw");
							break;
						case 2:
							func_744("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				case 8:
					switch (iParam2)
					{
						case 3:
							func_744("xIXaDwts7kKz0sbMnwYlCQ");
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
								case 1:
									func_744("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								case 2:
									func_744("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									func_744("kXry-nXRbEC6ktiopjDDcg");
									break;
								case 2:
									func_744("QmlvLMLCwkOvoZlkAstYxw");
									break;
								case 3:
									func_744("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								case 4:
									func_744("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						case 2:
							switch (iParam2)
							{
								case 0:
									func_744("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								case 2:
									func_744("aGBjo2rKi0yMDLl3a2ATGA");
									func_744("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								case 3:
									func_744("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						case 3:
							switch (iParam2)
							{
								case 1:
									func_744("VmS_SI5wSE2LuL9qItQqbw");
									break;
								case 4:
									func_744("f2lnL6wZPkGWUowu0yLm1Q");
									func_744("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						case 4:
							switch (iParam2)
							{
								case 1:
									func_744("Ma78E44OMkGfYPmCPZXUNA");
									break;
								case 2:
									func_744("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						case 5:
							switch (iParam2)
							{
								case 0:
									func_744("W-OJzHlM-0ym9PsIASYZtw");
									func_744("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								case 1:
									func_744("3AAj-muvN0iHI5IMyGlboA");
									break;
								case 3:
									func_744("TjGz31AMYE6bGCjAIitu6w");
									func_744("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						case 6:
							switch (iParam2)
							{
								case 2:
									func_744("QmlvLMLCwkOvoZlkAstYxw");
									func_744("BktATxH9R0Wp2x0kWSbqjw");
									break;
								case 3:
									func_744("BktATxH9R0Wp2x0kWSbqjw");
									func_744("kXry-nXRbEC6ktiopjDDcg");
									break;
								case 4:
									func_744("f2lnL6wZPkGWUowu0yLm1Q");
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
								case 1:
									func_744("kXry-nXRbEC6ktiopjDDcg");
									break;
								case 3:
									func_744("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									func_744("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								case 1:
									func_744("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								case 2:
									func_744("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								case 3:
									func_744("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						case 2:
							switch (iParam2)
							{
								case 3:
									func_744("Cl3Gh6-LMkuZ7Z_jPqSE8g");
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
									func_744("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						case 4:
							switch (iParam2)
							{
								case 4:
									func_744("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_744(char* sParam0)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_745(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					MISC::SET_BIT(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_745(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;

	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_149(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_746(uParam0) };
			return Var0.f_1;
		case 62:
			return iVar13;
		default:
			break;
	}
	return iVar13;
}

struct<13> func_746(var uParam0)
{
	struct<13> Var0;
	int iVar13;

	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_149(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar13 /*13*/];
		case 62:
			return Global_917806.f_9405[iVar13 /*13*/];
		default:
			break;
	}
	return Var0;
}

void func_747()
{
	int iVar0;
	vector3 vVar1;

	if (MISC::IS_BIT_SET(Local_80.f_3, 12))
	{
		func_192();
	}
	if (func_742())
	{
		if (iLocal_3403 != Local_80.f_12)
		{
			iLocal_3403 = Local_80.f_12;
			func_192();
		}
	}
	if (!func_200())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_1303[iVar0]))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iVar0]))
				{
					if (func_109(Local_80.f_7[iVar0]))
					{
						vVar1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), false) };
						if (!func_748(iVar0, vVar1))
						{
							if (!MISC::IS_BIT_SET(Local_80.f_13, iVar0))
							{
								iLocal_1303[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]));
								HUD::SET_BLIP_SPRITE(iLocal_1303[iVar0], 429);
								func_194(&(iLocal_1303[iVar0]), 29);
								if (!MISC::IS_BIT_SET(iLocal_1291, 20))
								{
									HUD::SET_BLIP_FLASHES(iLocal_1303[iVar0], true);
									HUD::SET_BLIP_FLASH_TIMER(iLocal_1303[iVar0], 7000);
									MISC::SET_BIT(&iLocal_1291, 20);
								}
								HUD::SET_BLIP_PRIORITY(iLocal_1303[iVar0], 9);
								if (func_742())
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1303[iVar0], "UW_BLIPC");
								}
								else
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1303[iVar0], "UW_BLIP");
								}
								if (!MISC::IS_BIT_SET(iLocal_1292, 3))
								{
									HUD::FLASH_MINIMAP_DISPLAY();
									MISC::SET_BIT(&iLocal_1292, 3);
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iVar0]))
			{
				if (!func_109(Local_80.f_7[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_1303[iVar0]));
				}
				else if (MISC::IS_BIT_SET(Local_80.f_13, iVar0))
				{
					HUD::REMOVE_BLIP(&(iLocal_1303[iVar0]));
				}
			}
			else
			{
				HUD::REMOVE_BLIP(&(iLocal_1303[iVar0]));
			}
			iVar0++;
		}
	}
	else
	{
		func_192();
	}
}

bool func_748(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iParam0)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_7[iVar0]))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_80.f_7[iVar0]), false) };
				if (func_69(vParam1, vVar1, 0))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_1303[iVar0]))
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

int func_749()
{
	return Local_80;
}

int func_750(int iParam0)
{
	return Local_714[iParam0 /*18*/];
}

void func_751()
{
	if (MISC::IS_BIT_SET(Global_1574650.f_1, 6))
	{
		func_448();
		MISC::CLEAR_BIT(&(Global_1574650.f_1), 6);
	}
	if (!MISC::IS_BIT_SET(Global_1574650.f_1, 7))
	{
		if (MISC::IS_BIT_SET(Global_1574650.f_1, 4) || MISC::IS_BIT_SET(Global_1574650.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_354()) && func_844(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1574650.f_1), 7);
				func_421("FME_PASINT", 30000);
				func_420(1);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1574650.f_1, 17))
		{
			if (func_242() && !func_237())
			{
				MISC::CLEAR_BIT(&(Global_1574650.f_1), 17);
				MISC::SET_BIT(&(Global_1574650.f_1), 16);
			}
		}
	}
	if (!MISC::IS_BIT_SET(Global_1574650.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2537071.f_795, 2)) && func_844(PLAYER::PLAYER_ID(), 1, 1)) && !Global_73825) && !Global_58693) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_773())
			{
				func_421("AMEV_GA_RP", -1);
				if (func_338(PLAYER::PLAYER_ID()) != 200)
				{
					func_420(1);
				}
				MISC::SET_BIT(&(Global_1574650.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_232(PLAYER::PLAYER_ID()))
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
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_354()) && func_844(PLAYER::PLAYER_ID(), 1, 1)) && !func_203(PLAYER::PLAYER_ID(), 21)) && !func_203(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1574650.f_1), 9);
			func_772(0);
			func_421("FME_TBL00", -1);
			func_420(1);
		}
	}
	if (func_243(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_BIT_SET(Global_1574650.f_1, 18))
		{
			if ((func_203(PLAYER::PLAYER_ID(), 21) && MISC::IS_BIT_SET(Global_1574650.f_1, 20)) && !MISC::IS_BIT_SET(Global_1574650.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1574650.f_1), 18);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1574650.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_354()) && func_844(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !Global_2537071.f_5057)
			{
				MISC::CLEAR_BIT(&(Global_1574650.f_1), 18);
				MISC::SET_BIT(&(Global_1574650.f_1), 19);
				func_421("AMTT_RPAS", -1);
				func_420(1);
			}
		}
	}
	if (((((func_243(PLAYER::PLAYER_ID()) && !func_202(PLAYER::PLAYER_ID())) && func_190(PLAYER::PLAYER_ID()) != 146) && !func_201(PLAYER::PLAYER_ID())) && !func_665(PLAYER::PLAYER_ID())) && !func_762())
	{
		if (func_670(func_190(PLAYER::PLAYER_ID())))
		{
			PLAYER::_0xFAC75988A7D078D3(PLAYER::PLAYER_ID());
		}
		if (!MISC::IS_BIT_SET(Global_1574650.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1574650.f_1), 22);
		}
		if (func_209(PLAYER::PLAYER_ID()) || func_668())
		{
			if (!MISC::IS_BIT_SET(Global_1574650.f_1, 10))
			{
				if (func_760(func_190(PLAYER::PLAYER_ID())))
				{
					if (func_595(0) && !Global_2391045)
					{
						MISC::SET_BIT(&(Global_1574650.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_446(1);
						MISC::SET_BIT(&(Global_1574650.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1574650.f_1), 10);
			}
		}
		if (func_232(PLAYER::PLAYER_ID()))
		{
			if (!MISC::IS_BIT_SET(Global_1574650.f_1, 11))
			{
				if (!Global_98796.f_8)
				{
					MISC::SET_BIT(&(Global_1574650.f_1), 12);
					func_444(1);
				}
				if (!func_759())
				{
					MISC::SET_BIT(&(Global_1574650.f_1), 13);
					func_669();
				}
				if (!Global_2391045)
				{
					MISC::SET_BIT(&(Global_1574650.f_1), 14);
					if (func_595(0) && !Global_2391045)
					{
						MISC::SET_BIT(&(Global_1574650.f_1), 9);
					}
					func_446(1);
				}
				MISC::SET_BIT(&(Global_1574650.f_1), 11);
			}
		}
		else
		{
			func_757(0);
		}
	}
	else
	{
		func_757(1);
	}
	func_752();
	if (func_667(func_190(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1574650.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1574650.f_1), 21);
	}
	if (((func_242() && !func_237()) || func_203(PLAYER::PLAYER_ID(), 21)) || func_203(PLAYER::PLAYER_ID(), 25))
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

void func_752()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_354())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_520(iVar2))
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
				func_753(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!MISC::IS_BIT_SET(Global_1574650.f_1, 26))
	{
		func_106(&(Global_1574650.f_22));
		MISC::SET_BIT(&(Global_1574650.f_1), 26);
	}
}

void func_753(int iParam0, int iParam1)
{
	if (!func_22(&(Global_1574650.f_22)))
	{
		func_20(&(Global_1574650.f_22), 0, 0);
	}
	else if (func_19(&(Global_1574650.f_22), iParam1, 0))
	{
		if (func_406() > 0)
		{
			func_756(iParam0);
			if (func_677("AMEV_LBD_HELP"))
			{
				HUD::CLEAR_HELP(true);
			}
			func_106(&(Global_1574650.f_22));
		}
	}
	else
	{
		func_755(0);
		func_754();
	}
}

void func_754()
{
	Global_2537071.f_4532 = 0;
}

void func_755(int iParam0)
{
	Global_1377170.f_68 = iParam0;
}

void func_756(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			func_352(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_757(bool bParam0)
{
	if ((MISC::IS_BIT_SET(Global_1574650.f_1, 11) || (MISC::IS_BIT_SET(Global_1574650.f_1, 10) && bParam0)) || (MISC::IS_BIT_SET(Global_1574650.f_1, 22) && bParam0))
	{
		if (MISC::IS_BIT_SET(Global_1574650.f_1, 12))
		{
			MISC::CLEAR_BIT(&(Global_1574650.f_1), 12);
			func_444(0);
		}
		if (MISC::IS_BIT_SET(Global_1574650.f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1574650.f_1), 13);
			func_758();
		}
		if (MISC::IS_BIT_SET(Global_1574650.f_1, 14) && !func_238(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Global_1574650.f_1), 14);
			func_446(0);
		}
		MISC::CLEAR_BIT(&(Global_1574650.f_1), 11);
		MISC::CLEAR_BIT(&(Global_1574650.f_1), 10);
		MISC::CLEAR_BIT(&(Global_1574650.f_1), 22);
	}
}

void func_758()
{
	MISC::CLEAR_BIT(&(Global_2537071.f_4962), 0);
}

bool func_759()
{
	return MISC::IS_BIT_SET(Global_2537071.f_4962, 0);
}

bool func_760(int iParam0)
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
			return func_232(PLAYER::PLAYER_ID());
		case 133:
			return (func_668() || func_761(func_189()));
		default:
			break;
	}
	return false;
}

bool func_761(int iParam0)
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

bool func_762()
{
	if (((((((((func_771() || func_770()) || func_769()) || func_182()) || (func_768() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_765() && !func_764())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_763() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return true;
	}
	return false;
}

int func_763()
{
	return Global_968397;
}

bool func_764()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 27);
}

bool func_765()
{
	if (func_767() || func_766())
	{
		return Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_98 == 8;
	}
	return false;
}

bool func_766()
{
	return Global_2450632.f_635;
}

bool func_767()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 11);
}

bool func_768()
{
	return MISC::IS_BIT_SET(Global_2450632, 5);
}

bool func_769()
{
	return MISC::IS_BIT_SET(Global_2450632, 2);
}

bool func_770()
{
	return MISC::IS_BIT_SET(Global_2450632, 20);
}

bool func_771()
{
	return Global_2450632.f_598;
}

void func_772(int iParam0)
{
	int iVar0;

	iVar0 = func_260(2534, -1, 0);
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
	func_479(2534, iVar0, -1, 1, 0);
}

bool func_773()
{
	bool bVar0;

	if (!func_22(&(Global_1574650.f_15)))
	{
		func_20(&(Global_1574650.f_15), 0, 0);
		Global_1574650.f_17 = 0;
	}
	else if (func_19(&(Global_1574650.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1574650.f_17)))
		{
			bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1574650.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
			{
				if (func_844(bVar0, 1, 1) && func_774(bVar0, 6))
				{
					if (SYSTEM::VDIST(func_59(PLAYER::PLAYER_ID()), func_59(bVar0)) < 80f)
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
			func_106(&(Global_1574650.f_15));
		}
	}
	return false;
}

bool func_774(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_440() != 0)
	{
		return false;
	}
	if (!func_483(bParam0))
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

bool func_775()
{
	return Global_1574650.f_24;
}

bool func_776(int iParam0)
{
	return !func_777(iParam0);
}

bool func_777(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			if (Global_262145.f_6660)
			{
				return false;
			}
			if (func_203(PLAYER::PLAYER_ID(), 7))
			{
				return false;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 1))
			{
				return false;
			}
			break;
		case 5:
			if (Global_262145.f_6661)
			{
				return false;
			}
			if (func_203(PLAYER::PLAYER_ID(), 7))
			{
				return false;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 1))
			{
				return false;
			}
			break;
		case 6:
			if (Global_262145.f_6662)
			{
				return false;
			}
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			if (Global_262145.f_6663)
			{
				return false;
			}
			if (func_203(PLAYER::PLAYER_ID(), 7))
			{
				return false;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 1))
			{
				return false;
			}
			break;
		case 15:
			if (func_778(4))
			{
				return false;
			}
			if (func_203(PLAYER::PLAYER_ID(), 7))
			{
				return false;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 1))
			{
				return false;
			}
			break;
		case 17:
			if (func_778(4))
			{
				return false;
			}
			if (func_203(PLAYER::PLAYER_ID(), 7))
			{
				return false;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 1))
			{
				return false;
			}
			break;
		case 16:
			if (func_778(4))
			{
				return false;
			}
			if (func_203(PLAYER::PLAYER_ID(), 7))
			{
				return false;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 1))
			{
				return false;
			}
			break;
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_778(4))
			{
				return false;
			}
			if (func_203(PLAYER::PLAYER_ID(), 7))
			{
				return false;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 1))
			{
				return false;
			}
			break;
		case 19:
			if (func_778(4))
			{
				return false;
			}
			if (func_203(PLAYER::PLAYER_ID(), 7))
			{
				return false;
			}
			break;
		case 20:
			if (func_778(4))
			{
				return false;
			}
			if (func_203(PLAYER::PLAYER_ID(), 7))
			{
				return false;
			}
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
	}
	return true;
}

bool func_778(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_844(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (MISC::IS_BIT_SET(Global_2425662[iVar0 /*421*/].f_208, iParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_779()
{
	var uVar0;

	func_783(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return true;
		}
	}
	if (func_782())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_781())
	{
		return true;
	}
	if (func_780(159))
	{
		if (!func_771())
		{
			return true;
		}
	}
	if (func_780(157))
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	if (func_438() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_438()) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_780(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_781()
{
	return Global_2460680;
}

bool func_782()
{
	return Global_2450632.f_593;
}

void func_783(var uParam0)
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
					func_784(iVar0);
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

void func_784(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_844(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_785(iVar4, &bVar5))
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

bool func_785(int iParam0, bool bParam1)
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

void func_786()
{
	SYSTEM::WAIT(0);
}

void func_787()
{
	int iVar0;

	func_192();
	if (func_749() == 4 && Local_80.f_27 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_80.f_27, false);
	}
	MISC::CLEAR_BIT(&(Global_2537071.f_4592), 1);
	func_675(19, 0);
	func_654(0);
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_793(129, 0, MISC::IS_BIT_SET(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8));
	}
	func_792(129);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (iLocal_1301 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(iLocal_1301);
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 129)
		{
			Global_1590535[PLAYER::PLAYER_ID() /*876*/] = -1;
		}
	}
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_1501)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_1503);
	}
	func_791();
	func_205(0, 129);
	if (MISC::IS_BIT_SET(iLocal_1291, 22))
	{
		func_451();
		MISC::CLEAR_BIT(&iLocal_1291, 22);
	}
	if (MISC::IS_BIT_SET(iLocal_1291, 9))
	{
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		if (!MISC::IS_BIT_SET(iLocal_1291, 10))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_1302 != -100f)
	{
		func_526(0, 0);
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_1302);
	}
	func_525(0);
	if (func_779())
	{
		Local_697.f_5 = 5;
	}
	else if (func_614(2, 0, 0, 0, 0))
	{
		Local_697.f_5 = 6;
	}
	else if (Local_697.f_5 != 1)
	{
		Local_697.f_5 = 2;
	}
	AUDIO::STOP_SOUND(iLocal_3410);
	Local_697 = Local_80.f_611;
	Local_697.f_1 = Local_80.f_612;
	Local_697.f_4 = Local_80.f_613;
	Local_697.f_3 = Local_80.f_615;
	if (Local_697.f_9 > 0)
	{
		Local_697.f_10 = (NETWORK::_0xF12E6CD06C73D69E() - Local_697.f_9);
	}
	if ((!Global_262145.f_11502 && !MISC::IS_BIT_SET(Local_80.f_3, 8)) || (!Global_262145.f_11503 && MISC::IS_BIT_SET(Local_80.f_3, 8)))
	{
		if (Local_697.f_6 > 0)
		{
		}
	}
	if (MISC::IS_BIT_SET(Local_80.f_3, 8))
	{
		iVar0 = 1;
	}
	if (MISC::IS_BIT_SET(iLocal_1292, 1))
	{
		func_682(1);
		NETWORK::_0x838DA0936A24ED4D(0, 0);
	}
	if (iVar0 == 0)
	{
		func_789(Local_697, Local_80.f_27, Local_80.f_279, iVar0, -1, -1, -1);
	}
	else if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_789(Local_697, Local_80.f_279, Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8, iVar0, -1, -1, -1);
	}
	if (func_411(PLAYER::PLAYER_ID()))
	{
		func_631(0);
	}
	func_653(0);
	func_705(1);
	func_788();
}

void func_788()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_789(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, func_790()))
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
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
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
			Var107.f_15 = iParam15;
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

char* func_790()
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

void func_791()
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1502);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1501);
}

void func_792(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_793(int iParam0, bool bParam1, bool bParam2)
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
	func_829();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		bVar0 = func_828(func_190(PLAYER::PLAYER_ID()));
		func_675(func_676(iParam0), 0);
	}
	else
	{
		if ((bParam2 && PLAYER::PLAYER_ID() != -1) && func_827(PLAYER::PLAYER_ID()) >= 12)
		{
			func_826(2546, -1);
			iVar1 = func_260(2546, -1, 0);
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
		func_681();
		func_825();
		func_824();
		if ((!func_231(PLAYER::PLAYER_ID()) && !func_229(PLAYER::PLAYER_ID())) && !func_823())
		{
			func_802();
		}
		func_801();
		if (!MISC::IS_BIT_SET(Global_1674347.f_3, 0) && !MISC::IS_BIT_SET(Global_1674347.f_3, 1))
		{
			func_448();
		}
		func_800();
		MISC::CLEAR_BIT(&(Global_2537071.f_1746), 2);
		func_541();
		func_799();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
	}
	if (!bParam1 || bVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !func_203(PLAYER::PLAYER_ID(), 21)) && !func_203(PLAYER::PLAYER_ID(), 25)) && !func_238(PLAYER::PLAYER_ID(), 0))
		{
			func_446(0);
			func_444(0);
			if (!bParam1)
			{
				func_798();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_618(26, -1))
		{
			Global_2462854 = -1;
			func_616(26, -1);
		}
	}
	if (!func_794())
	{
		Global_2513109 = 1;
	}
}

bool func_794()
{
	if ((((((!func_384(PLAYER::PLAYER_ID()) && !func_365(PLAYER::PLAYER_ID())) && func_190(PLAYER::PLAYER_ID()) != 146) && !func_797()) && !func_796()) && !func_795(Global_4456448.f_232883)) && !func_578())
	{
		return false;
	}
	return true;
}

bool func_795(int iParam0)
{
	return iParam0 == 57;
}

bool func_796()
{
	if (Global_4456448.f_194990 == Global_262145.f_9596)
	{
		return true;
	}
	return false;
}

bool func_797()
{
	if ((Global_4456448 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_232883 > 0) || MISC::IS_BIT_SET(Global_4456448.f_4, 15)) || MISC::IS_BIT_SET(Global_4456448.f_4, 18)) || MISC::IS_BIT_SET(Global_4456448.f_4, 19)) || MISC::IS_BIT_SET(Global_4456448.f_4, 29)) || MISC::IS_BIT_SET(Global_4456448.f_4, 28)) || MISC::IS_BIT_SET(Global_4456448.f_5, 23)))
	{
		return true;
	}
	return false;
}

void func_798()
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

void func_799()
{
	Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_7 = 0;
}

void func_800()
{
	struct<25> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574650 = { Var0 };
}

void func_801()
{
	var uVar0;

	Global_1319101 = uVar0;
}

void func_802()
{
	MISC::_COPY_MEMORY(&(Global_2405072.f_24), &Global_2409327, 2);
	MISC::_COPY_MEMORY(&(Global_2405072.f_26), &Global_2409329, 19);
	func_821();
	func_805(1, 1, 0);
	func_803();
}

void func_803()
{
	func_804(0, 0);
}

void func_804(int iParam0, int iParam1)
{
	Global_2405072.f_22 = iParam0;
	Global_2405072.f_23 = iParam1;
}

void func_805(bool bParam0, bool bParam1, bool bParam2)
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
		func_820();
	}
	if (!bParam2)
	{
		func_808(0, 1, 0, 1060320051 /* Float: 0.7f */, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1088421888 /* Float: 7f */, 1084227584 /* Float: 5f */, 0, 1066192077 /* Float: 1.1f */, 0, 0, 1, 0, 1109393408 /* Float: 40f */);
	}
	func_807(0);
	func_806();
}

void func_806()
{
	struct<6> Var0;

	if (Global_2405072.f_487.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405072.f_487 = { Var0 };
	}
}

void func_807(bool bParam0)
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

void func_808(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_819())
		{
			func_818();
		}
		Global_2405072.f_706.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405072.f_706.f_504 = iParam1;
		Global_2405072.f_706.f_505 = iParam2;
		Global_2405072.f_706.f_506 = iParam10;
		func_816();
		func_812(8, 0, 0, 0, 0);
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
		func_809();
	}
}

void func_809()
{
	if (func_819() && !func_811())
	{
		func_818();
	}
	if (func_811())
	{
		func_810();
	}
	else
	{
		func_816();
		func_812(0, 0, 0, 0, 0);
		Global_2405072.f_1745 = 0;
		Global_2405072.f_1744 = 0;
	}
}

void func_810()
{
	MISC::_COPY_MEMORY(&(Global_2405072.f_706), &(Global_2405072.f_1225), 519);
	Global_2405072.f_487 = { Global_2405072.f_493 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_706.f_518)
	{
		Global_2405072.f_1744 = 0;
	}
}

bool func_811()
{
	if ((Global_2405072.f_1744 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_1225.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405072.f_1225.f_518))
	{
		return true;
	}
	return false;
}

void func_812(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2439138.f_1894.f_703.f_16 != func_5())
	{
		if (MISC::IS_BIT_SET(Global_2425662[Global_2439138.f_1894.f_703.f_16 /*421*/].f_404, 0) && func_813())
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

bool func_813()
{
	if ((((((func_338(PLAYER::PLAYER_ID()) == 229 || func_338(PLAYER::PLAYER_ID()) == 191) || func_815()) || func_823()) || func_210(PLAYER::PLAYER_ID())) || Global_2513890.f_226 == 1) || (Global_2405072.f_1745 && func_814(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	return true;
}

int func_814(bool bParam0)
{
	if (func_209(bParam0))
	{
		return 1;
	}
	if (func_244(bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_815()
{
	if (Global_4456448 == 6)
	{
		return true;
	}
	return false;
}

void func_816()
{
	if (func_819() && !func_811())
	{
		func_818();
	}
	func_817();
	Global_2405072.f_706 = 0;
}

void func_817()
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

void func_818()
{
	if (func_811())
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

bool func_819()
{
	if ((Global_2405072.f_1745 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_706.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405072.f_706.f_518))
	{
		return true;
	}
	return false;
}

void func_820()
{
	MISC::_COPY_MEMORY(&(Global_2405072.f_365), &Global_2409668, 121);
}

void func_821()
{
	func_822();
	Global_2405072.f_2254 = 0;
}

void func_822()
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

bool func_823()
{
	return Global_1574405;
}

void func_824()
{
	Global_2537071.f_4962 = 0;
}

void func_825()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1 = 0;
	}
}

void func_826(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_260(iParam0, func_241(iParam1), 0);
	iVar0++;
	if (!func_486(iParam0))
	{
		func_479(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_480(iParam0, iVar0, iParam1, 1);
	}
}

int func_827(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_211.f_6;
}

int func_828(int iParam0)
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
			if (func_232(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_829()
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
	func_832(0);
	func_831(0);
	func_830(0);
}

void func_830(int iParam0)
{
	if (Global_2537071.f_4520 != iParam0)
	{
		Global_2537071.f_4520 = iParam0;
	}
}

void func_831(bool bParam0)
{
	if (Global_2537071.f_4519 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2537071.f_4519 = bParam0;
	}
}

void func_832(int iParam0)
{
	if (Global_2537071.f_4517 != iParam0)
	{
		Global_2537071.f_4517 = iParam0;
	}
}

void func_833(struct<21> Param0)
{
	int iVar0;

	func_842(func_843(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(24);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(9);
	func_841(0, -1, 0);
	func_839(129);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_80, 617);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_714, 577);
	func_838(1);
	if (!func_837())
	{
		func_787();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_80.f_17[iVar0] = func_5();
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_80.f_22[iVar0] = func_5();
				Local_80.f_256[iVar0] = -1;
				Local_80.f_110[iVar0] = -1;
				iVar0++;
			}
			STATS::_0x6DEE77AFF8C21BD1(&(Local_80.f_611), &(Local_80.f_612));
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_1293[iVar0] = -1;
			iVar0++;
		}
		Local_697.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
		Local_697.f_8 = NETWORK::_0xF12E6CD06C73D69E();
		func_675(19, 1);
		func_834();
		if (func_200())
		{
			MISC::SET_BIT(&(Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 7);
		}
		Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = -1;
		Global_2537071.f_5048 = -1;
		Local_714[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 0;
	}
	else
	{
		func_787();
	}
}

void func_834()
{
	int iVar0;

	PED::ADD_RELATIONSHIP_GROUP("relUWPlayer", &iLocal_1501);
	PED::ADD_RELATIONSHIP_GROUP("relUWAi", &iLocal_1502);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574967[iVar0], iLocal_1501);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1501, Global_1574967[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574967[iVar0], iLocal_1502);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1502, Global_1574967[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1501, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1501);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1501, Global_1575015[5]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1575015[5], iLocal_1501);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1501, Global_1575000);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1575000, iLocal_1501);
		iVar0++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1501, iLocal_1502);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1502, iLocal_1501);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_CULT"), iLocal_1502);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_CULT"), iLocal_1501);
	func_836(1, &iLocal_1502);
	func_835(&iLocal_1502);
	func_835(&iLocal_1501);
}

void func_835(int iParam0)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_LOST"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_LOST"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_MEXICAN"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_MEXICAN"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_FAMILY"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_FAMILY"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_MARABUNTE"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_MARABUNTE"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_CULT"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_CULT"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_SALVA"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_SALVA"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_WEICHENG"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_WEICHENG"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_BALLAS"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_BALLAS"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_HILLBILLY"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_HILLBILLY"));
}

void func_836(int iParam0, int iParam1)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("COP"), *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("ARMY"), *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, joaat("ARMY"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("SECURITY_GUARD"), *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, joaat("SECURITY_GUARD"));
}

bool func_837()
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
		if (func_782())
		{
			return false;
		}
		if (func_780(157))
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

void func_838(bool bParam0)
{
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_438())
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2416079.f_1314) || Global_2416079.f_1314 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam0)
		{
			Global_2416079.f_1314 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			Global_2416079.f_1314 = -1;
		}
	}
}

void func_839(int iParam0)
{
	func_800();
	func_840();
	func_824();
	Global_1574650.f_4 = iParam0;
	Global_1574650.f_5 = iParam0;
	func_674(iParam0, -1);
	func_8(&(Global_1574650.f_18), 0, 0);
	Global_2537071.f_4588 = 0;
	Global_2461747[0] = func_5();
	Global_2461747[1] = func_5();
	Global_2461747[2] = func_5();
	Global_2461747[3] = func_5();
	Global_2461747[4] = func_5();
	func_799();
	if (!func_225(func_226()))
	{
		func_351();
	}
	if (func_242() && !func_237())
	{
		MISC::SET_BIT(&(Global_1574650.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1574650.f_1), 17);
	}
}

void func_840()
{
	var uVar0;

	Global_1574675 = uVar0;
}

int func_841(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_788();
			}
			else
			{
				return 0;
			}
		}
		if (!func_168())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_788();
					}
					else
					{
						return 0;
					}
				}
				if (func_782())
				{
					if (!bParam2)
					{
						func_788();
					}
					else
					{
						return 0;
					}
				}
				if (func_780(157))
				{
					if (!bParam2)
					{
						func_788();
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
					func_788();
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
				func_788();
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
			func_788();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_842(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_788();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_843(int iParam0)
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

bool func_844(bool bParam0, bool bParam1, bool bParam2)
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

