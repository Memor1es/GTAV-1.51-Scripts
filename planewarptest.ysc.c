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
	vector3 vLocal_19[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_26[2] = { 0f, 0f };
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
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		func_1();
	}
	UNK_0x7798376279BB5369(1);
	UNK_0x523BCC9DC80CD82F(joaat("CUBAN800"));
	while (!UNK_0xB87F6CF6E5628C67(joaat("CUBAN800")))
	{
		SYSTEM::WAIT(0);
	}
	vLocal_19[0 /*3*/] = { 1169.976f, 3592.572f, 32.6481f };
	vLocal_19[1 /*3*/] = { 1215.738f, 3586.608f, 33.5131f };
	fLocal_26[0] = 277.7043f;
	fLocal_26[1] = 77.1113f;
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), 1220.202f, 3596.281f, 33.259f, 1, 0, 0, 1);
	}
	UNK_0x90CECE08EA8E77CC(1220.202f, 3596.281f, 33.259f);
	bLocal_18 = UNK_0x122AAB0B1D6F55AD(joaat("CUBAN800"), vLocal_19[0 /*3*/], fLocal_26[0], true, true, false);
	UNK_0xB9FD7450C0DAB575(bLocal_18, 1084227584 /* Float: 5f */);
	UNK_0x71199B01895C6202(joaat("CUBAN800"));
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), bLocal_18, -1);
	}
	while (true)
	{
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
	}
	if (UNK_0xC844350D5D58C99A(bLocal_18))
	{
		UNK_0xA954465BA6FDEFE2(&bLocal_18);
	}
	UNK_0x71199B01895C6202(joaat("CUBAN800"));
	UNK_0x10FAF14A60A0DBE1();
}

