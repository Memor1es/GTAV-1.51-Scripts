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
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	bool bLocal_41 = false;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	struct<485> Local_46 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
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
	bool bLocal_729 = false;
	bool bLocal_730 = false;
	bool bLocal_731 = false;
	bool bLocal_732 = false;
	int iLocal_733 = 0;
	int iLocal_734 = 0;
	int iLocal_735 = 0;
	int iLocal_736 = 0;
	int iLocal_737 = 0;
	int iLocal_738 = 0;
	int iLocal_739 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_36 = 202;
	iLocal_37 = 201;
	iLocal_38 = 24;
	iLocal_39 = 202;
	iLocal_40 = 25;
	iLocal_43 = -1;
	iLocal_45 = -1;
	iLocal_738 = -1;
	if (UNK_0x2EBF608FFE6CA406(82))
	{
		func_243();
	}
	func_242(3);
	func_231(&(Local_46.f_1), func_241(Global_94773[1 /*19*/], Global_94773[2 /*19*/]));
	func_230(&Local_46, 0);
	while (!func_229(4))
	{
		if (!Global_76891)
		{
			if (!func_228(86) && !func_227(14))
			{
				func_216(&Local_46, 32f, 35f);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Local_46.f_449, false))
			{
				func_214(&Local_46);
			}
			if (UNK_0xEAE0D21A50E6C7F4(Local_46.f_449, false))
			{
				if (func_213() == 86)
				{
					while (!func_214(&Local_46))
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			func_211(&Local_46);
			func_202();
			func_153();
			if (func_151(0) || UNK_0xEAE0D21A50E6C7F4(Local_46.f_449, 2))
			{
				func_67(&Local_46);
				func_4(&Local_46);
				func_3(&Local_46);
			}
		}
		if (UNK_0x8A22C4C08282BF26(joaat("JEWELRY_HEIST")) > 0)
		{
			func_2();
		}
		SYSTEM::WAIT(0);
	}
	func_1(3);
	func_243();
}

int func_1(int iParam0)
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

void func_2()
{
	int iVar0;

	if (Global_76882)
	{
		return;
	}
	if (!UNK_0xE1DBBD6CE209517C(UNK_0xA30EC016B12C03E4()))
	{
		return;
	}
	iVar0 = SYSTEM::ROUND((1f + (1000f * SYSTEM::TIMESTEP())));
	Global_94964.f_8 = (Global_94964.f_8 + iVar0);
}

void func_3(var uParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_94752, *uParam0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, true))
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 15);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 16);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 14);
			UNK_0x0674E58A79778E99(&Global_94752, *uParam0);
		}
	}
}

void func_4(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_65(func_66(*uParam0));
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return;
	}
	iVar1 = iVar0;
	if ((iVar1 != uParam0->f_464 && !(iVar1 == 2 && uParam0->f_464 == 4)) && !((*uParam0 == 1 && iVar1 == 3) && uParam0->f_464 == 4))
	{
		if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
		{
			func_5(uParam0, iVar1, 0);
		}
		else
		{
			uParam0->f_464 = iVar1;
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 != uParam0->f_464)
	{
		if (uParam0->f_680 == 0)
		{
			func_64(uParam0);
			uParam0->f_464 = iParam1;
			func_6(uParam0, iParam1, iParam2);
		}
	}
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			func_63(uParam0);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			UNK_0x0674E58A79778E99(&(uParam0->f_449), 4);
			break;
		case 1:
			func_63(uParam0);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			UNK_0x0674E58A79778E99(&(uParam0->f_449), 4);
			uParam0->f_452 = -1;
			break;
		case 2:
			func_35(uParam0, uParam0->f_417, iParam2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			UNK_0x0674E58A79778E99(&(uParam0->f_449), 4);
			uParam0->f_457 = UNK_0x1C0640BA9A7327B3();
			break;
		case 3:
			func_17(uParam0);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			UNK_0x0674E58A79778E99(&(uParam0->f_449), 4);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 9);
			uParam0->f_457 = UNK_0x1C0640BA9A7327B3();
			break;
		case 4:
			func_13(&(uParam0->f_1.f_108[0 /*4*/]), 1);
			func_13(&(uParam0->f_1.f_108[1 /*4*/]), 1);
			Global_111638.f_1.f_6[*uParam0] = 1;
			UNK_0xA37A90C62806D848(0);
			func_11(uParam0, 0);
			func_63(uParam0);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 5);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 4);
			uParam0->f_457 = UNK_0x1C0640BA9A7327B3();
			break;
	}
	func_7(uParam0);
}

void func_7(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = UNK_0xE32F7AC5E6DF304A(2, 13, true);
	bVar1 = UNK_0xE32F7AC5E6DF304A(2, 11, true);
	bVar2 = UNK_0xF59058FCB716F903(0, 32, true);
	bVar3 = UNK_0xE32F7AC5E6DF304A(0, 1, true);
	bVar4 = UNK_0xF59058FCB716F903(2, 201, true);
	bVar5 = UNK_0xF59058FCB716F903(2, 202, true);
	if (UNK_0x91E3F625EF57450D(2))
	{
		bVar0 = UNK_0xE32F7AC5E6DF304A(2, 6, true);
		bVar1 = UNK_0xE32F7AC5E6DF304A(2, 7, true);
		bVar2 = UNK_0xE32F7AC5E6DF304A(0, 29, true);
	}
	bVar6 = func_10(1, *uParam0);
	UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_MAX_WIDTH");
	UNK_0x7C19E5E4784BD7CF(0.6f);
	UNK_0x7E60D21B163E9D56();
	switch (uParam0->f_464)
	{
		case 0:
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				if (bVar6)
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(true);
					func_9(bVar2);
					func_8("PB_H_ZOOM");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(false);
					func_9(bVar3);
					func_8("PB_H_LOOK");
					UNK_0x7E60D21B163E9D56();
				}
				else
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(2);
					func_9(bVar2);
					func_8("PB_H_ZOOM");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(true);
					func_9(bVar3);
					func_8("PB_H_LOOK");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(false);
					func_9(bVar5);
					func_8("PB_H_EXIT");
					UNK_0x7E60D21B163E9D56();
				}
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				UNK_0x1200CC973A2399C8(false);
				UNK_0x7E60D21B163E9D56();
			}
			break;
		case 1:
			UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
			UNK_0x1200CC973A2399C8(false);
			UNK_0x7E60D21B163E9D56();
			break;
		case 2:
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				UNK_0x7E60D21B163E9D56();
				if (*uParam0 == 2)
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(2);
					func_9(bVar0);
					func_8("PB_H_SELCT");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(true);
					func_9(bVar3);
					func_8("PB_H_LOOK");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(false);
					func_9(bVar4);
					func_8("PB_H_TRIG");
					UNK_0x7E60D21B163E9D56();
				}
				else
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(3);
					func_9(bVar0);
					func_8("PB_H_SELCT");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(2);
					func_9(bVar3);
					func_8("PB_H_LOOK");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(true);
					func_9(bVar5);
					func_8("PB_H_UNDO");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(false);
					func_9(bVar4);
					func_8("PB_H_TRIG");
					UNK_0x7E60D21B163E9D56();
				}
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				UNK_0x1200CC973A2399C8(false);
				UNK_0x7E60D21B163E9D56();
			}
			break;
		case 3:
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 9))
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(true);
					func_9(bVar1);
					func_8("PB_H_SELCT");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(false);
					func_9(bVar3);
					func_8("PB_H_LOOK");
					UNK_0x7E60D21B163E9D56();
				}
				else
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(2);
					func_9(bVar1);
					func_8("PB_H_SELCT");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(true);
					func_9(bVar3);
					func_8("PB_H_LOOK");
					UNK_0x7E60D21B163E9D56();
					UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
					UNK_0x3CAEA85DA607305E(false);
					func_9(bVar4);
					func_8("PB_H_TRIG");
					UNK_0x7E60D21B163E9D56();
				}
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				UNK_0x1200CC973A2399C8(false);
				UNK_0x7E60D21B163E9D56();
			}
			break;
		case 4:
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				UNK_0x7E60D21B163E9D56();
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(3);
				func_9(bVar2);
				func_8("PB_H_ZOOM");
				UNK_0x7E60D21B163E9D56();
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(2);
				func_9(bVar3);
				func_8("PB_H_LOOK");
				UNK_0x7E60D21B163E9D56();
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(true);
				func_9(bVar5);
				func_8("PB_H_UNDO");
				UNK_0x7E60D21B163E9D56();
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "SET_DATA_SLOT");
				UNK_0x3CAEA85DA607305E(false);
				func_9(bVar4);
				func_8("PB_H_CONF");
				UNK_0x7E60D21B163E9D56();
				UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				UNK_0x1200CC973A2399C8(false);
				UNK_0x7E60D21B163E9D56();
			}
			break;
	}
}

void func_8(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_9(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

bool func_10(int iParam0, bool bParam1)
{
	bool bVar0;

	if (iParam0 == 11 || iParam0 == -1)
	{
		return false;
	}
	if (bParam1 < 0 || bParam1 >= 32)
	{
		return false;
	}
	bVar0 = UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iParam0], bParam1);
	return bVar0;
}

void func_11(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 18);
		if (((!func_12(&(uParam0->f_1.f_20[0 /*4*/])) && !func_12(&(uParam0->f_1.f_20[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_108[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_108[1 /*4*/])))
		{
			UNK_0xA37A90C62806D848(0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(uParam0->f_449), 18);
	}
}

bool func_12(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_13(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (Global_110278 && iParam1)
	{
		if (func_12(bParam0) && !UNK_0x79BBCD5833294FD5())
		{
			UNK_0xA37A90C62806D848(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (UNK_0x7F8A39872A07D2CE(bParam0, &(Global_111638.f_20405[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_111638.f_20405.f_145 - 2))
			{
				func_16(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_15((Global_111638.f_20405.f_145 - 1));
			Global_111638.f_20405.f_145 = (Global_111638.f_20405.f_145 - 1);
			func_14();
			return;
		}
		iVar0++;
	}
}

void func_14()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, false))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, true))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_15(int iParam0)
{
	StringCopy(&(Global_111638.f_20405[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_111638.f_20405[iParam0 /*16*/].f_4), "", 16);
	Global_111638.f_20405[iParam0 /*16*/].f_8 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_9 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_11 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_10 = -1;
	Global_111638.f_20405[iParam0 /*16*/].f_12 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_13 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_14 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_15 = 0;
}

void func_16(int iParam0, int iParam1)
{
	Global_111638.f_20405[iParam0 /*16*/] = { Global_111638.f_20405[iParam1 /*16*/] };
	Global_111638.f_20405[iParam0 /*16*/].f_4 = { Global_111638.f_20405[iParam1 /*16*/].f_4 };
	Global_111638.f_20405[iParam0 /*16*/].f_8 = Global_111638.f_20405[iParam1 /*16*/].f_8;
	Global_111638.f_20405[iParam0 /*16*/].f_10 = Global_111638.f_20405[iParam1 /*16*/].f_10;
	Global_111638.f_20405[iParam0 /*16*/].f_9 = Global_111638.f_20405[iParam1 /*16*/].f_9;
	Global_111638.f_20405[iParam0 /*16*/].f_11 = Global_111638.f_20405[iParam1 /*16*/].f_11;
	Global_111638.f_20405[iParam0 /*16*/].f_12 = Global_111638.f_20405[iParam1 /*16*/].f_12;
	Global_111638.f_20405[iParam0 /*16*/].f_13 = Global_111638.f_20405[iParam1 /*16*/].f_13;
	Global_111638.f_20405[iParam0 /*16*/].f_14 = Global_111638.f_20405[iParam1 /*16*/].f_14;
	Global_111638.f_20405[iParam0 /*16*/].f_15 = Global_111638.f_20405[iParam1 /*16*/].f_15;
}

void func_17(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	func_34(uParam0);
	func_31(uParam0);
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
	UNK_0x3CAEA85DA607305E(uParam0->f_415);
	UNK_0x7E60D21B163E9D56();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_29(*uParam0, 0))
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(8);
			UNK_0x7E60D21B163E9D56();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(9);
			UNK_0x7E60D21B163E9D56();
		}
	}
	Var1 = (uParam0->f_1.f_16 + uParam0->f_1.f_18);
	Var1.f_1 = (uParam0->f_1.f_16.f_1 + uParam0->f_1.f_18.f_1);
	func_25(uParam0, &Var1, uParam0->f_1.f_10);
	func_23(uParam0, 1, 1);
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_18(var uParam0)
{
	int iVar0;

	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 7))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 18))
		{
			switch (uParam0->f_464)
			{
				case 3:
					if (!Global_111638.f_1[*uParam0])
					{
						if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_20[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_20[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_20[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_20[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_111638.f_1[*uParam0] = 1;
					}
					else if (func_20() && !UNK_0xFEBC1E4EC9E001F0())
					{
						if (((!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 11) && !UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0)
						{
							UNK_0xB6A2CAEFEE28197D("PB_H_CHOICE");
							UNK_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
						}
					}
					break;
				case 2:
					if (!Global_111638.f_1.f_6[*uParam0])
					{
						if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_108[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_108[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_108[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_108[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_111638.f_1.f_6[*uParam0] = 1;
					}
					else if (func_20() && !UNK_0xFEBC1E4EC9E001F0())
					{
						if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 10))
						{
							if ((!func_12("PB_H_GUNM") && !func_12("PB_H_HACK")) && !func_12("PB_H_DRIV"))
							{
								iVar0 = func_65(func_30(*uParam0));
								if (uParam0->f_417 < 5)
								{
									if (((!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 11) && !UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0)
									{
										switch (Global_94773[iVar0 /*19*/].f_1[uParam0->f_417])
										{
											case 1:
												UNK_0xB6A2CAEFEE28197D("PB_H_GUNM");
												UNK_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
												break;
											case 2:
												UNK_0xB6A2CAEFEE28197D("PB_H_HACK");
												UNK_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
												break;
											case 3:
												UNK_0xB6A2CAEFEE28197D("PB_H_DRIV");
												UNK_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
												break;
										}
									}
								}
							}
						}
					}
					break;
			}
		}
	}
}

bool func_19()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

bool func_20()
{
	if (Global_111638.f_20405.f_145 > 0)
	{
		return false;
	}
	return true;
}

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;

	if (UNK_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (UNK_0x7F8A39872A07D2CE(&(Global_111638.f_20405[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_8 = (UNK_0x1C0640BA9A7327B3() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_12 = iParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_15 = iParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_10 = ((UNK_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_14();
	}
}

void func_23(var uParam0, bool bParam1, int iParam2)
{
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_1.f_303, bParam1))
	{
		if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_280[bParam1 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[bParam1 /*2*/], iParam2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_1.f_303), bParam1);
		}
	}
}

void func_24(var uParam0, struct<2> Param1, struct<2> Param3, int iParam5)
{
	if (uParam0->f_483 == 3)
	{
		return;
	}
	if (!UNK_0xEA6BC48857E0AC4C(&Param3))
	{
		uParam0->f_467[uParam0->f_483 /*5*/] = { Param1 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_2 = { Param3 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_4 = iParam5;
		uParam0->f_483++;
	}
}

void func_25(var uParam0, var uParam1, float fParam2)
{
	vector3 vVar0;

	uParam0->f_411 = *uParam1;
	uParam0->f_411.f_1 = uParam1->f_1;
	uParam0->f_454 = UNK_0x1C0640BA9A7327B3() + 1000;
	vVar0 = { func_27(uParam0, &(uParam0->f_411)) };
	func_26(&(uParam0->f_649), vVar0, fParam2);
}

void func_26(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_11 = { vParam1 };
	if (fParam4 != -1f)
	{
		uParam0->f_7 = fParam4;
	}
}

Vector3 func_27(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;

	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_404;
	vVar7 = { uParam0->f_401 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	fVar10 = fVar4;
	fVar11 = UNK_0x10FCEF75D66B7A3B((fVar10 / uParam0->f_1.f_8));
	fVar12 = (uParam0->f_401.f_2 - uParam0->f_649.f_1.f_2);
	fVar13 = (vVar7.z - uParam0->f_649.f_1.f_2);
	fVar14 = (fVar13 - fVar12);
	fVar15 = UNK_0x10FCEF75D66B7A3B((fVar14 / uParam0->f_1.f_8));
	fVar16 = ((fVar11 * 3f) / 18f);
	return (fVar15 * 0.95f), fVar16, (-fVar11 * 0.85f);
}

void func_28(var uParam0, var uParam1, float fParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam0->f_1.f_2;
	iVar1 = uParam0->f_1.f_3;
	if (*uParam1 < 0 || *uParam1 > iVar0)
	{
		return;
	}
	if (uParam1->f_1 < 0 || uParam1->f_1 > iVar1)
	{
		return;
	}
	*fParam2 = (SYSTEM::TO_FLOAT(*uParam1) / SYSTEM::TO_FLOAT(iVar0));
	*fParam3 = (SYSTEM::TO_FLOAT(uParam1->f_1) / SYSTEM::TO_FLOAT(iVar1));
}

int func_29(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 4;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
				case 1:
					return 7;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 8;
				case 1:
					return 9;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		case 1:
			iVar0 = 8;
			break;
		case 2:
			iVar0 = 9;
			break;
		case 3:
			iVar0 = 10;
			break;
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_31(var uParam0)
{
	int iVar0;

	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "CREATE_VIEW");
	UNK_0x3CAEA85DA607305E(uParam0->f_415);
	UNK_0x3CAEA85DA607305E(true);
	UNK_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_16));
	UNK_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_16.f_1));
	UNK_0x7E60D21B163E9D56();
	func_33(uParam0);
	switch (*uParam0)
	{
		case 0:
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_415);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(2);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_415);
			UNK_0x3CAEA85DA607305E(true);
			UNK_0x3CAEA85DA607305E(true);
			UNK_0x7E60D21B163E9D56();
			break;
		case 1:
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_415);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(3);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_415);
			UNK_0x3CAEA85DA607305E(true);
			UNK_0x3CAEA85DA607305E(4);
			UNK_0x7E60D21B163E9D56();
			break;
		case 3:
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_415);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(6);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_415);
			UNK_0x3CAEA85DA607305E(true);
			UNK_0x3CAEA85DA607305E(7);
			UNK_0x7E60D21B163E9D56();
			break;
		case 4:
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_415);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x3CAEA85DA607305E(8);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_415);
			UNK_0x3CAEA85DA607305E(true);
			UNK_0x3CAEA85DA607305E(9);
			UNK_0x7E60D21B163E9D56();
			break;
	}
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "DISPLAY_VIEW");
	UNK_0x3CAEA85DA607305E(uParam0->f_415);
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
	UNK_0x3CAEA85DA607305E(uParam0->f_415);
	UNK_0x1200CC973A2399C8(func_32(*uParam0, uParam0->f_1.f_29));
	UNK_0x7E60D21B163E9D56();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
		UNK_0x3CAEA85DA607305E(uParam0->f_415);
		UNK_0x7E60D21B163E9D56();
		if (iVar0 == func_29(*uParam0, 0))
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(8);
			UNK_0x7E60D21B163E9D56();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(9);
			UNK_0x7E60D21B163E9D56();
		}
		UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
		UNK_0x3CAEA85DA607305E(99);
		UNK_0x7E60D21B163E9D56();
	}
}

bool func_32(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_120[iParam0], bParam1);
}

void func_33(var uParam0)
{
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_LABELS");
	func_8("H_CRW_NAME");
	func_8("H_CRW_TYPE");
	func_8("H_CRW_SKILLS");
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_JWL");
			break;
		case 1:
			func_8("H_LBL_DOC");
			break;
		case 2:
			func_8("H_LBL_RUR");
			break;
		case 3:
			func_8("H_LBL_AGN");
			break;
		case 4:
			func_8("H_LBL_FA");
			func_8("H_LBL_FB");
			break;
	}
	if (*uParam0 != 1)
	{
		func_8("H_LBL_CRW");
	}
	func_8("H_LBL_TODO");
	if (*uParam0 != 2)
	{
		func_8("H_LBL_APP");
	}
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_J1");
			func_8("H_LBL_J2");
			func_8("H_LBL_J3");
			func_8("H_LBL_J4");
			func_8("HC_J_IMPACT");
			func_8("HC_J_STEALTH");
			break;
		case 1:
			func_8("HC_D_BLOW_UP");
			func_8("HC_D_DEEP_SEA");
			break;
		case 2:
			func_8("H_LBL_R1");
			func_8("H_LBL_R2");
			func_8("H_LBL_R3");
			func_8("H_LBL_R4");
			func_8("H_LBL_R5");
			func_8("H_LBL_R6");
			func_8("H_LBL_R7");
			func_8("H_LBL_R8");
			func_8("H_LBL_R9");
			func_8("H_LBL_R10");
			func_8("H_LBL_R11");
			func_8("H_LBL_R12");
			break;
		case 3:
			func_8("H_LBL_A1");
			func_8("H_LBL_A2");
			func_8("H_LBL_A3");
			func_8("H_LBL_A4");
			func_8("H_LBL_A5");
			func_8("HC_A_FIRETRUCK");
			func_8("HC_A_HELICOPTER");
			break;
		case 4:
			func_8("H_LBL_F1");
			func_8("H_LBL_F2");
			func_8("H_LBL_F3");
			func_8("H_LBL_F4");
			func_8("H_LBL_F5");
			func_8("HC_F_TRAFFCONT");
			func_8("HC_F_HELI");
			break;
	}
	UNK_0x7E60D21B163E9D56();
}

void func_34(var uParam0)
{
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	UNK_0x3CAEA85DA607305E(uParam0->f_415);
	UNK_0x7E60D21B163E9D56();
}

void func_35(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam1 < 0 || bParam1 >= uParam0->f_1.f_96)
	{
		return;
	}
	func_23(uParam0, 2, 1);
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = Global_94773[iVar0 /*19*/].f_1[bParam1];
	switch (iVar1)
	{
		case 1:
			func_62(uParam0, iVar0, 1);
			break;
		case 2:
			func_62(uParam0, iVar0, 3);
			break;
		case 3:
			func_62(uParam0, iVar0, 2);
			break;
	}
	func_61(uParam0, uParam0->f_417);
	func_36(uParam0, uParam0->f_417);
	uParam0->f_450 = bParam1;
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x1200CC973A2399C8(true);
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x7E60D21B163E9D56();
	func_25(uParam0, &(uParam0->f_1.f_97[bParam1 /*2*/]), uParam0->f_1.f_10);
	if (iParam2 != 0)
	{
		iVar2 = 0;
		while (uParam0->f_418[iVar2] != iParam2)
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
			UNK_0x3CAEA85DA607305E(9);
			UNK_0x7E60D21B163E9D56();
			iVar2++;
			if (iVar2 > 7)
			{
				return;
			}
		}
	}
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_36(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	iVar0 = func_30(*uParam0);
	iVar1 = func_65(iVar0);
	iVar2 = Global_94773[iVar1 /*19*/].f_1[bParam1];
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "CREATE_VIEW");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x3CAEA85DA607305E(false);
	UNK_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_97[bParam1 /*2*/]));
	UNK_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_97[bParam1 /*2*/].f_1));
	UNK_0x7E60D21B163E9D56();
	func_33(uParam0);
	bVar3 = false;
	if (Global_111638.f_1.f_12[iVar1 /*6*/][bParam1] != 0)
	{
		bVar4 = Global_111638.f_1.f_12[iVar1 /*6*/][bParam1];
		func_41(uParam0->f_413, bVar4, bParam1, bVar3, bVar4);
	}
	else
	{
		bVar5 = false;
		while (bVar5 < 14)
		{
			bVar6 = bVar5;
			if (func_40(bVar6) == iVar2)
			{
				if (func_39(bVar6))
				{
					if (!func_38(bVar6))
					{
						if (!func_37(uParam0, bVar6))
						{
							if (!(bVar6 == 11 && *uParam0 == 3))
							{
								func_41(uParam0->f_413, bVar6, bParam1, bVar3, bVar5);
								uParam0->f_418[bVar3] = bVar6;
								bVar3++;
							}
						}
					}
				}
			}
			bVar5++;
		}
	}
	if (Global_111638.f_1.f_12[iVar1 /*6*/][bParam1] != 0)
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
		UNK_0x3CAEA85DA607305E(bParam1);
		UNK_0x1200CC973A2399C8(true);
		UNK_0x7E60D21B163E9D56();
	}
	else
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
		UNK_0x3CAEA85DA607305E(bParam1);
		UNK_0x1200CC973A2399C8(false);
		UNK_0x7E60D21B163E9D56();
	}
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "DISPLAY_VIEW");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x7E60D21B163E9D56();
}

bool func_37(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_65(func_30(*uParam0));
	iVar1 = 0;
	while (iVar1 < uParam0->f_417)
	{
		if (Global_111638.f_1.f_12[iVar0 /*6*/][iVar1] == bParam1)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_38(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_118, bParam0);
}

bool func_39(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_116, bParam0);
}

int func_40(bool bParam0)
{
	return Global_94619[bParam0 /*5*/];
}

void func_41(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
	UNK_0x3CAEA85DA607305E(bParam2);
	UNK_0x3CAEA85DA607305E(bParam3);
	UNK_0x3CAEA85DA607305E(bParam4);
	func_8(func_59(bParam1));
	func_8(func_58(bParam1));
	switch (func_40(bParam1))
	{
		case 1:
			func_8(func_57(0));
			UNK_0x3CAEA85DA607305E(func_54(bParam1, 0));
			func_8(func_57(1));
			UNK_0x3CAEA85DA607305E(func_54(bParam1, 1));
			func_8(func_57(2));
			UNK_0x3CAEA85DA607305E(func_54(bParam1, 2));
			func_8(func_57(3));
			UNK_0x3CAEA85DA607305E(func_54(bParam1, 3));
			break;
		case 2:
			func_8(func_53(0));
			UNK_0x3CAEA85DA607305E(func_50(bParam1, 0));
			func_8(func_53(1));
			UNK_0x3CAEA85DA607305E(func_50(bParam1, 1));
			func_8(func_53(2));
			UNK_0x3CAEA85DA607305E(func_50(bParam1, 2));
			break;
		case 3:
			func_8(func_48(0));
			UNK_0x3CAEA85DA607305E(func_43(bParam1, 0));
			func_8(func_48(1));
			UNK_0x3CAEA85DA607305E(func_43(bParam1, 1));
			func_8(func_48(2));
			UNK_0x3CAEA85DA607305E(func_43(bParam1, 2));
			break;
	}
	func_8("H_CRW_CUT");
	UNK_0x3CAEA85DA607305E(func_42(bParam1));
	UNK_0x7E60D21B163E9D56();
}

var func_42(bool bParam0)
{
	return Global_94619[bParam0 /*5*/].f_1;
}

int func_43(bool bParam0, int iParam1)
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_45(bParam0, iParam1)) / SYSTEM::TO_FLOAT(func_44(iParam1))) * 100f));
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 100;
		case 1:
			return 100;
		case 2:
			return 100;
	}
	return 0;
}

int func_45(bool bParam0, int iParam1)
{
	if (func_40(bParam0) != 3)
	{
		return -1;
	}
	return func_46(bParam0, iParam1);
}

int func_46(bool bParam0, int iParam1)
{
	return func_47(iParam1, Global_111638.f_1.f_73[bParam0 /*3*/].f_1, Global_111638.f_1.f_73[bParam0 /*3*/].f_2);
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return SYSTEM::SHIFT_RIGHT(iParam1, (15 * iParam0)) & 32767;
		case 2:
		case 3:
			return SYSTEM::SHIFT_RIGHT(iParam2, (15 * (iParam0 - 2))) & 32767;
	}
	return -1;
}

char* func_48(int iParam0)
{
	return func_49(3, iParam0);
}

char* func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_G1";
				case 1:
					return "HC_STA_G2";
				case 2:
					return "HC_STA_G3";
				case 3:
					return "HC_STA_G4";
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_H1";
				case 1:
					return "HC_STA_H2";
				case 2:
					return "HC_STA_H3";
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_D1";
				case 1:
					return "HC_STA_D2";
				case 2:
					return "HC_STA_D3";
			}
			break;
	}
	return "ERROR!";
}

int func_50(bool bParam0, int iParam1)
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_52(bParam0, iParam1)) / SYSTEM::TO_FLOAT(func_51(iParam1))) * 100f));
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 100;
		case 1:
			return 100;
		case 2:
			return 100;
	}
	return 0;
}

int func_52(bool bParam0, int iParam1)
{
	if (func_40(bParam0) != 2)
	{
		return -1;
	}
	return func_46(bParam0, iParam1);
}

char* func_53(int iParam0)
{
	return func_49(2, iParam0);
}

int func_54(bool bParam0, int iParam1)
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_56(bParam0, iParam1)) / SYSTEM::TO_FLOAT(func_55(iParam1))) * 100f));
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1000;
		case 1:
			return 100;
		case 2:
			return 100;
		case 3:
			return 100;
	}
	return 0;
}

int func_56(bool bParam0, int iParam1)
{
	if (func_40(bParam0) != 1)
	{
		return -1;
	}
	return func_46(bParam0, iParam1);
}

char* func_57(int iParam0)
{
	return func_49(1, iParam0);
}

bool func_58(bool bParam0)
{
	switch (Global_94619[bParam0 /*5*/])
	{
		case 1:
			return "HC_TYPE_G";
		case 2:
			return "HC_TYPE_H";
		case 3:
			return "HC_TYPE_D";
	}
	return "ERROR!";
}

char* func_59(bool bParam0)
{
	return func_60(bParam0);
}

char* func_60(bool bParam0)
{
	switch (bParam0)
	{
		case 1:
			return "HC_N_GUS";
		case 2:
			return "HC_N_KAR";
		case 10:
			return "HC_N_PAC";
		case 11:
			return "HC_N_CHE";
		case 3:
			return "HC_N_HUG";
		case 4:
			return "HC_N_NOR";
		case 5:
			return "HC_N_DAR";
		case 6:
			return "HC_N_PAI";
		case 7:
			return "HC_N_CHR";
		case 12:
			return "HC_N_RIC";
		case 8:
			return "HC_N_EDD";
		case 13:
			return "HC_N_TAL";
		case 9:
			return "HC_N_KRM";
	}
	return "ERROR!";
}

void func_61(var uParam0, bool bParam1)
{
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x7E60D21B163E9D56();
}

void func_62(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xEAE0D21A50E6C7F4(Global_94773[iParam1 /*19*/].f_18, bParam2))
	{
		if (!UNK_0x7F8A39872A07D2CE(&(Global_94773[iParam1 /*19*/].f_7[bParam2 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_276, Global_94773[iParam1 /*19*/].f_7[bParam2 /*2*/], 1);
			UNK_0x5D96D8530B3D0904(&(Global_94773[iParam1 /*19*/].f_18), bParam2);
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (UNK_0x7F8A39872A07D2CE(&(Global_94773[iParam1 /*19*/].f_7[bParam2 /*2*/]), &(Global_94773[iVar0 /*19*/].f_7[bParam2 /*2*/])))
				{
					UNK_0x5D96D8530B3D0904(&(Global_94773[iVar0 /*19*/].f_18), bParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_63(var uParam0)
{
	func_25(uParam0, &(uParam0->f_1.f_12), 45f);
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
	UNK_0x3CAEA85DA607305E(99);
	UNK_0x7E60D21B163E9D56();
	func_18(uParam0);
}

void func_64(var uParam0)
{
	switch (uParam0->f_464)
	{
		case 1:
		case 2:
		case 3:
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
			UNK_0x3CAEA85DA607305E(99);
			UNK_0x7E60D21B163E9D56();
			break;
	}
	UNK_0xA37A90C62806D848(0);
}

int func_65(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_205[iParam0];
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 6;
	}
	return -1;
}

void func_67(var uParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, true))
	{
		func_68(uParam0);
	}
}

void func_68(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;

	bVar0 = false;
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (!func_150(0))
			{
				if (func_141(8))
				{
					if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), uParam0->f_401) < 4f)
					{
						vVar1 = { uParam0->f_401 - UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
						fVar4 = UNK_0xE7D606C557C86100(vVar1.x, vVar1.y);
						fVar5 = UNK_0x755FF954DAE327E1((uParam0->f_404 - fVar4));
						if (fVar5 <= 70f)
						{
							bVar0 = true;
						}
						else
						{
							fVar6 = uParam0->f_404;
							if (fVar6 > 180f)
							{
								fVar6 = (fVar6 - 360f);
							}
							else if (fVar6 < -180f)
							{
								fVar6 = (fVar6 + 360f);
							}
							if ((fVar6 - fVar4) < fVar5)
							{
								fVar5 = UNK_0x755FF954DAE327E1((fVar6 - fVar4));
							}
							if (fVar5 <= 70f)
							{
								bVar0 = true;
							}
							else
							{
								if (fVar4 > 180f)
								{
									fVar4 = (fVar4 - 360f);
								}
								else if (fVar4 < -180f)
								{
									fVar4 = (fVar4 + 360f);
								}
								if ((uParam0->f_404 - fVar4) < fVar5)
								{
									fVar5 = UNK_0x755FF954DAE327E1((uParam0->f_404 - fVar4));
								}
								if (fVar5 <= 70f)
								{
									bVar0 = true;
								}
								else
								{
									if ((fVar6 - fVar4) < fVar5)
									{
										fVar5 = UNK_0x755FF954DAE327E1((fVar6 - fVar4));
									}
									if (fVar5 <= 70f)
									{
										bVar0 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar0)
		{
			if (uParam0->f_451 == -1)
			{
				func_140(&(uParam0->f_451), 3, "PB_H_ENT", 0, 0, 0, 0);
			}
			else if (func_139(uParam0->f_451, 1))
			{
				func_137(&(uParam0->f_451));
				func_123(uParam0);
			}
		}
		else if (uParam0->f_451 != -1)
		{
			func_137(&(uParam0->f_451));
		}
	}
	else
	{
		bVar7 = func_10(1, *uParam0);
		func_79(uParam0);
		if (((!bVar7 && uParam0->f_453 > 15) && (UNK_0xBFC0798A6E3417F9(2, iLocal_36) || UNK_0xBFC0798A6E3417F9(2, 238))) || UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 8))
		{
			UNK_0x0674E58A79778E99(&(uParam0->f_449), 8);
			func_69(uParam0, 0);
		}
	}
}

void func_69(var uParam0, bool bParam1)
{
	vector3 vVar0;
	int iVar3;

	uParam0->f_453 = 0;
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
		if (!bParam1)
		{
			vVar0 = { uParam0->f_401 };
			vVar0 = { vVar0 + Vector(0f, (1f * SYSTEM::COS((180f - uParam0->f_404))), (1f * SYSTEM::SIN((180f - uParam0->f_404)))) };
			UNK_0xE82754C349C7B581(vVar0, &(vVar0.f_2), 0, 0);
			UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vVar0, 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), uParam0->f_404);
			UNK_0x2FB9A57162E54BAB(0f);
			UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
			UNK_0xBD453909DC26A85D(UNK_0x16F2683693E537C9(), joaat("MOTIONSTATE_IDLE"), false, 0, 0);
			UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 1, 0);
		}
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, 134);
	}
	UNK_0xBFE31971E49FA500(1);
	func_72(0);
	func_71();
	UNK_0x17D339215F817B98();
	UNK_0xA5E3ADAAA4CD5D6C(17);
	UNK_0x911B98CDC647AC76(false);
	func_70(&(uParam0->f_649), 0, 1);
	func_13(&(uParam0->f_1.f_20[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_20[1 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_108[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_108[1 /*4*/]), 1);
	UNK_0xA37A90C62806D848(1);
	while (UNK_0xFEBC1E4EC9E001F0())
	{
		UNK_0xA37A90C62806D848(1);
		SYSTEM::WAIT(0);
	}
	iVar3 = UNK_0xFBD08BECC9B87937(uParam0->f_401);
	if (iVar3 != 0)
	{
		UNK_0x25BB71BA267FE042(iVar3);
	}
	UNK_0x5372553242EA2414();
	func_64(uParam0);
	UNK_0x0674E58A79778E99(&(uParam0->f_449), 7);
	UNK_0x0674E58A79778E99(&(uParam0->f_449), 2);
	Global_94751 = 0;
}

void func_70(var uParam0, int iParam1, bool bParam2)
{
	if (UNK_0x9F4FE516EAACCFC5(*uParam0))
	{
		if (bParam2)
		{
			UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, iParam1, 0);
		}
		if (UNK_0xFBB4F23D534EB790(*uParam0))
		{
			UNK_0xE3BB8E05FCEB3FBE(*uParam0, false);
		}
		UNK_0x9A8DDC7C522F5BF5(*uParam0, iParam1);
	}
	if (uParam0->f_23)
	{
		UNK_0xF737A3AD8873CE16();
		uParam0->f_23 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
}

void func_71()
{
	Global_22211.f_5 = 0;
}

void func_72(bool bParam0)
{
	if (bParam0)
	{
		func_78();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_150(0))
		{
			func_73(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_73(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_76())
		{
			func_75(1, 1);
		}
		else
		{
			func_75(0, 0);
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
	if (!func_74())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_74()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_75(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_150(0))
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

bool func_76()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_77()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_78()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_79(var uParam0)
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;

	bVar0 = UNK_0xE32F7AC5E6DF304A(0, 1, true);
	if (!UNK_0x7F8A39872A07D2CE(bVar0, uParam0->f_466))
	{
		func_7(uParam0);
	}
	uParam0->f_466 = bVar0;
	func_121();
	func_109(uParam0);
	func_87(uParam0);
	if (uParam0->f_464 == 1)
	{
		func_84(uParam0);
	}
	if (func_20())
	{
		func_18(uParam0);
	}
	bVar1 = uParam0->f_454 > UNK_0x1C0640BA9A7327B3();
	func_80(&(uParam0->f_649), UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 4), (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 5) && !bVar1), 1, 0, 1045220557 /* Float: 0.2f */, 1, 1065353216 /* Float: 1f */, 0);
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 7))
	{
		if ((!UNK_0x22A8E52414415B76() && UNK_0x0F1CCD77290EE12F()) && !UNK_0x798A3F1296751F46())
		{
			if (uParam0->f_464 != 1)
			{
				if (uParam0->f_464 == 0 || (((!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 11) && !UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 18) || uParam0->f_464 == 2)
					{
						UNK_0x6567AE843FADBA94(uParam0->f_414, 255, 255, 255, false, 0);
					}
				}
			}
		}
	}
	UNK_0xBFE31971E49FA500(0);
	UNK_0x3584F71E5CA29322(2);
	UNK_0x3584F71E5CA29322(1);
	UNK_0x3584F71E5CA29322(8);
	UNK_0x3584F71E5CA29322(7);
	UNK_0x3584F71E5CA29322(3);
	UNK_0xB8E3919889462ACD();
	UNK_0xD02CE72B4B66DC29(82, 66);
	UNK_0x744B56EE9DE7B57F(17, 0.612f, 0.818f);
	UNK_0xD59EF13BB60323B9();
	if (!UNK_0x22A8E52414415B76())
	{
		UNK_0x558EC149EB2BC0A2(2, 201);
	}
	UNK_0x558EC149EB2BC0A2(2, 202);
	UNK_0x558EC149EB2BC0A2(2, 188);
	UNK_0x558EC149EB2BC0A2(2, 187);
	UNK_0x558EC149EB2BC0A2(2, 189);
	UNK_0x558EC149EB2BC0A2(2, 190);
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 7))
	{
		if (!UNK_0x22A8E52414415B76())
		{
			vVar2 = { uParam0->f_401 };
			vVar2 = { vVar2 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_404))), (2.9f * SYSTEM::SIN((180f - uParam0->f_404)))) };
			UNK_0xE82754C349C7B581(vVar2, &(vVar2.f_2), 0, 0);
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 134);
			UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
			UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), true);
			UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vVar2, 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), uParam0->f_404);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 7);
		}
	}
}

void func_80(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	int iVar0[4];
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	vector3 vVar10;
	int iVar13;
	int iVar14;

	UNK_0xA2E3EDD0E119882F(2);
	func_83(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (UNK_0x89DF0B812BA6383B())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (UNK_0x91E3F625EF57450D(2))
	{
		fVar5 = UNK_0x659FAE9DBE6F38F5(2, 239);
		fVar6 = UNK_0x659FAE9DBE6F38F5(2, 240);
		fVar7 = (fVar5 - uParam0->f_29);
		fVar8 = (fVar6 - uParam0->f_30);
		uParam0->f_29 = fVar5;
		uParam0->f_30 = fVar6;
		if (bParam4)
		{
			iVar0[2] = -SYSTEM::ROUND(((fVar7 * fParam5) * 127f));
			iVar0[3] = -SYSTEM::ROUND(((fVar8 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = SYSTEM::ROUND(((UNK_0x659FAE9DBE6F38F5(2, 290) * fParam5) * 127f));
			iVar0[3] = SYSTEM::ROUND(((UNK_0x659FAE9DBE6F38F5(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_82((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_82((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < UNK_0x1C0640BA9A7327B3())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (UNK_0x91E3F625EF57450D(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = UNK_0x1C0640BA9A7327B3() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar9 = (30f * SYSTEM::TIMESTEP());
	vVar10 = { uParam0->f_8 + uParam0->f_11 };
	if ((UNK_0x91E3F625EF57450D(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = vVar10.x;
		uParam0->f_14.f_1 = vVar10.y;
		uParam0->f_14.f_2 = vVar10.z;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_81(((((vVar10.x - uParam0->f_14) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_81(((((vVar10.y - uParam0->f_14.f_1) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_81(((((vVar10.z - uParam0->f_14.f_2) * 0.05f) * fVar9) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_81(uParam0->f_14, SYSTEM::TO_FLOAT(-uParam0->f_21), SYSTEM::TO_FLOAT(uParam0->f_21));
		uParam0->f_14.f_1 = func_81(uParam0->f_14.f_1, SYSTEM::TO_FLOAT(-uParam0->f_22), SYSTEM::TO_FLOAT(uParam0->f_22));
		uParam0->f_14.f_2 = func_81(uParam0->f_14.f_2, SYSTEM::TO_FLOAT(-uParam0->f_20), SYSTEM::TO_FLOAT(uParam0->f_20));
	}
	if (UNK_0x91E3F625EF57450D(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (UNK_0x91E3F625EF57450D(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (UNK_0xD245978525608929(0, iVar13))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = UNK_0x1C0640BA9A7327B3() + 4000;
				uParam0->f_28 = 0;
			}
			else if (UNK_0xD245978525608929(0, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = UNK_0x1C0640BA9A7327B3() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_81(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_81(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = UNK_0x0DED1C1B8250FA57(2, 207);
			iVar0[3] = UNK_0x0DED1C1B8250FA57(2, 208);
			if (bParam3)
			{
				if (SYSTEM::TO_FLOAT(iVar0[3]) > 127f)
				{
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * uParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar9));
	UNK_0x86F44313DFA8F00C(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (UNK_0x9F4FE516EAACCFC5(*uParam0))
	{
		if (UNK_0xFBB4F23D534EB790(*uParam0))
		{
			if (UNK_0x9CF8D5C7090408A2(*uParam0))
			{
				UNK_0x9501364A300048C6();
			}
		}
	}
}

float func_81(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_82(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_83(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = SYSTEM::FLOOR((UNK_0x659FAE9DBE6F38F5(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((UNK_0x659FAE9DBE6F38F5(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((UNK_0x659FAE9DBE6F38F5(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((UNK_0x659FAE9DBE6F38F5(2, 221) * 127f));
	if (bParam4)
	{
		if (!UNK_0x718E6F84AA2510BB(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((UNK_0x8A6BC5D9CAEACD0F(2, 218) * 127f));
		}
		if (!UNK_0x718E6F84AA2510BB(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((UNK_0x8A6BC5D9CAEACD0F(2, 219) * 127f));
		}
		if (!UNK_0x718E6F84AA2510BB(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((UNK_0x8A6BC5D9CAEACD0F(2, 220) * 127f));
		}
		if (!UNK_0x718E6F84AA2510BB(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((UNK_0x8A6BC5D9CAEACD0F(2, 221) * 127f));
		}
	}
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (bParam5)
		{
			if (UNK_0x89DF0B812BA6383B())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (UNK_0x8EB1E94243F14479())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_84(var uParam0)
{
	bool bVar0;
	bool bVar1;

	if (!func_10(3, *uParam0))
	{
		if (uParam0->f_483 == 0 && uParam0->f_455 > 3)
		{
			if (uParam0->f_452 == -1)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 19))
				{
					uParam0->f_452 = UNK_0x1C0640BA9A7327B3() + 500;
				}
				else
				{
					uParam0->f_452 = UNK_0x1C0640BA9A7327B3();
				}
			}
			else if (UNK_0x1C0640BA9A7327B3() > uParam0->f_452)
			{
				bVar0 = false;
				bVar1 = false;
				while (bVar1 < uParam0->f_1.f_369)
				{
					if (!bVar0)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_1.f_303, bVar1 + 4))
						{
							func_86(uParam0, bVar1);
							if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_1.f_370, bVar1))
							{
								UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 19);
							}
							else
							{
								UNK_0x0674E58A79778E99(&(uParam0->f_449), 19);
							}
							bVar0 = true;
						}
					}
					bVar1++;
				}
				if (!bVar0)
				{
					func_85(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_85(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (bParam1 < 0 || bParam1 >= 32)
	{
		return;
	}
	bVar0 = UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iParam0], bParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_9080.f_99.f_219[iParam0]), bParam1);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_9080.f_99.f_219[iParam0]), bParam1);
	}
}

void func_86(var uParam0, bool bParam1)
{
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
	UNK_0x3CAEA85DA607305E(99);
	UNK_0x7E60D21B163E9D56();
	func_25(uParam0, &(uParam0->f_1.f_371[bParam1 /*2*/]), uParam0->f_1.f_11);
	func_23(uParam0, bParam1 + 4, 1);
	uParam0->f_452 = -1;
}

void func_87(var uParam0)
{
	int iVar0;
	int iVar1;

	if ((!func_19() && UNK_0x0F1CCD77290EE12F()) && !UNK_0x22A8E52414415B76())
	{
		if (uParam0->f_483 > 0)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 13))
			{
				if (func_88(&(uParam0->f_484), &(uParam0->f_467[0 /*5*/]), &(uParam0->f_467[0 /*5*/].f_2), 4, 0, 0, 0))
				{
					uParam0->f_455 = 0;
					if (uParam0->f_467[0 /*5*/].f_4)
					{
						UNK_0x0674E58A79778E99(&(uParam0->f_449), 11);
					}
					else
					{
						UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 11);
					}
					iVar0 = 0;
					while (iVar0 < 2)
					{
						uParam0->f_467[iVar0 /*5*/] = { uParam0->f_467[iVar0 + 1 /*5*/] };
						uParam0->f_467[iVar0 /*5*/].f_2 = { uParam0->f_467[iVar0 + 1 /*5*/].f_2 };
						uParam0->f_467[iVar0 /*5*/].f_4 = uParam0->f_467[iVar0 + 1 /*5*/].f_4;
						iVar0++;
					}
					uParam0->f_483 = (uParam0->f_483 - 1);
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					uParam0->f_467[iVar1 /*5*/] = { uParam0->f_467[iVar1 + 1 /*5*/] };
					uParam0->f_467[iVar1 /*5*/].f_2 = { uParam0->f_467[iVar1 + 1 /*5*/].f_2 };
					uParam0->f_467[iVar1 /*5*/].f_4 = uParam0->f_467[iVar1 + 1 /*5*/].f_4;
					iVar1++;
				}
				uParam0->f_483 = (uParam0->f_483 - 1);
				UNK_0x0674E58A79778E99(&(uParam0->f_449), 13);
				UNK_0x0674E58A79778E99(&(uParam0->f_449), 11);
			}
		}
		else
		{
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 11))
			{
				UNK_0x0674E58A79778E99(&(uParam0->f_449), 11);
			}
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 13))
			{
				UNK_0x0674E58A79778E99(&(uParam0->f_449), 13);
			}
			uParam0->f_455++;
		}
	}
}

int func_88(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_108(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_89(sParam2, iParam3, 0);
}

int func_89(char* sParam0, int iParam1, bool bParam2)
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
					UNK_0x5CEB4DB888A62073(false);
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
					func_107();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (UNK_0x25037C66EB32B076())
		{
			return 0;
		}
		if (func_106(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_105();
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
			UNK_0x0674E58A79778E99(&Global_7356, 20);
			UNK_0x0674E58A79778E99(&Global_7357, 17);
			UNK_0x0674E58A79778E99(&Global_7358, false);
			if (bParam2)
			{
				func_98();
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
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (func_97())
				{
					return 0;
				}
				if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x6438374572DE9B51(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x989FD1982F631EA3(UNK_0x16F2683693E537C9(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (UNK_0x70EED0761B82965E(UNK_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62()))
					{
						return 0;
					}
					if (UNK_0xFB275CE013F3A38C(UNK_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (UNK_0x3114787DB5A129EF(UNK_0xD803B885F5E47A62(), 0))
					{
						return 0;
					}
				}
			}
			if (func_74())
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
				if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 9))
				{
					return 0;
				}
			}
			func_96();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_95();
		func_90();
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
		func_107();
	}
	return 0;
}

void func_90()
{
	if (!func_91())
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

bool func_91()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_94())
	{
		return false;
	}
	if (func_92(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 7))
	{
		return false;
	}
	if (UNK_0xA14BB9332558B949())
	{
		return false;
	}
	return true;
}

bool func_92(int iParam0)
{
	return func_93(iParam0, 20);
}

bool func_93(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_94()
{
	return -1;
}

void func_95()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	UNK_0x5CEB4DB888A62073(false);
	Global_20805 = 1;
}

void func_96()
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
	UNK_0x0674E58A79778E99(&Global_7357, 16);
}

bool func_97()
{
	int iVar0;
	int iVar1;

	if (Global_76622)
	{
		iVar0 = 0;
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar1, 1);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (UNK_0x5ED715849883FAFF() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0x24129324CD7C13D0(UNK_0x16F2683693E537C9(), 78, 1))
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

void func_98()
{
	if (func_227(14))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[2 /*29*/])
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
		Global_19486 = func_99();
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

int func_99()
{
	func_100();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_100()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_103(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_102(UNK_0x16F2683693E537C9());
			if (func_101(iVar0) && (!func_227(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_101(Global_111638.f_2358.f_539.f_4321))
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

bool func_101(int iParam0)
{
	return iParam0 < 3;
}

int func_102(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_103(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_103(int iParam0)
{
	if (func_101(iParam0))
	{
		return func_104(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_104(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_105()
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

bool func_106(bool bParam0, int iParam1)
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

void func_107()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if ((UNK_0x1EE04CEA36EF313B() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

void func_108(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_109(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;

	uParam0->f_453++;
	if (UNK_0xB8E3620B82AD47D7(2))
	{
		func_7(uParam0);
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 11))
	{
		if ((UNK_0xBFC0798A6E3417F9(2, iLocal_37) || UNK_0xBFC0798A6E3417F9(2, iLocal_39)) || (UNK_0x91E3F625EF57450D(2) && (UNK_0xBFC0798A6E3417F9(2, iLocal_38) || UNK_0xBFC0798A6E3417F9(2, iLocal_40))))
		{
			func_119();
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 12))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 13);
				UNK_0x0674E58A79778E99(&(uParam0->f_449), 11);
				UNK_0x0674E58A79778E99(&(uParam0->f_449), 10);
			}
			UNK_0x0674E58A79778E99(&(uParam0->f_449), 12);
		}
	}
	func_83(&(uParam0->f_458[0]), &(uParam0->f_458[1]), &(uParam0->f_458[2]), &(uParam0->f_458[3]), 0, 0);
	if (UNK_0x91E3F625EF57450D(2))
	{
		uParam0->f_458[2] = (uParam0->f_458[2] / 10);
		uParam0->f_458[3] = (uParam0->f_458[3] / 10);
		uParam0->f_458[2] = func_82((uParam0->f_458[2] + uParam0->f_649.f_24), -127, 127);
		uParam0->f_458[3] = func_82((uParam0->f_458[3] + uParam0->f_649.f_25), -127, 127);
	}
	uParam0->f_649.f_24 = uParam0->f_458[2];
	uParam0->f_649.f_25 = uParam0->f_458[3];
	if (UNK_0x89DF0B812BA6383B())
	{
		uParam0->f_458[3] = -uParam0->f_458[3];
	}
	if (uParam0->f_454 > UNK_0x1C0640BA9A7327B3())
	{
		uParam0->f_458[2] = 0;
		uParam0->f_458[3] = 0;
	}
	if (uParam0->f_464 == 0 || uParam0->f_464 == 4)
	{
		if (uParam0->f_453 > 15)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 4);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(uParam0->f_449), 4);
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 10))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 11))
		{
			if ((UNK_0x1C0640BA9A7327B3() - uParam0->f_456) > 200)
			{
				if ((uParam0->f_464 == 2 || uParam0->f_464 == 3) || uParam0->f_464 == 4)
				{
					if ((UNK_0x1C0640BA9A7327B3() - uParam0->f_457) > 25000)
					{
						func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[3 /*2*/], 1);
						uParam0->f_457 = (UNK_0x1C0640BA9A7327B3() + UNK_0x09AC81E49EA267F7(false, 8000));
					}
				}
				if (uParam0->f_464 == 2)
				{
					if ((((uParam0->f_458[1] < -85 || uParam0->f_458[0] < -85) || UNK_0x06F8112AA79C53D9(2, 188)) || UNK_0x06F8112AA79C53D9(2, 189)) || (UNK_0x91E3F625EF57450D(2) && UNK_0xD245978525608929(2, 241)))
					{
						UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
						UNK_0x3CAEA85DA607305E(8);
						UNK_0x7E60D21B163E9D56();
						UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = UNK_0x7A8BB56B212464AC();
						uParam0->f_456 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((((uParam0->f_458[1] > 85 || uParam0->f_458[0] > 85) || UNK_0x06F8112AA79C53D9(2, 187)) || UNK_0x06F8112AA79C53D9(2, 190)) || (UNK_0x91E3F625EF57450D(2) && UNK_0xD245978525608929(0, 242)))
					{
						UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
						UNK_0x3CAEA85DA607305E(9);
						UNK_0x7E60D21B163E9D56();
						UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = UNK_0x7A8BB56B212464AC();
						uParam0->f_456 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (uParam0->f_464 == 3)
				{
					if ((uParam0->f_458[1] < -85 || UNK_0x06F8112AA79C53D9(2, 188)) || (UNK_0x91E3F625EF57450D(2) && UNK_0xD245978525608929(0, 40)))
					{
						UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
						UNK_0x3CAEA85DA607305E(8);
						UNK_0x7E60D21B163E9D56();
						if (uParam0->f_416 != 0)
						{
							UNK_0x4D7F4CC43D4D0DE3(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_416 = 0;
						if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 9))
						{
							UNK_0x0674E58A79778E99(&(uParam0->f_449), 9);
							func_7(uParam0);
						}
						uParam0->f_456 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((uParam0->f_458[1] > 85 || UNK_0x06F8112AA79C53D9(2, 187)) || (UNK_0x91E3F625EF57450D(2) && UNK_0xD245978525608929(0, 41)))
					{
						UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_INPUT_EVENT");
						UNK_0x3CAEA85DA607305E(9);
						UNK_0x7E60D21B163E9D56();
						if (uParam0->f_416 != 1)
						{
							UNK_0x4D7F4CC43D4D0DE3(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_416 = 1;
						if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 9))
						{
							UNK_0x0674E58A79778E99(&(uParam0->f_449), 9);
							func_7(uParam0);
						}
						uParam0->f_456 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (!func_19() || UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 13))
				{
					if (UNK_0xBFC0798A6E3417F9(2, iLocal_37) || (UNK_0x91E3F625EF57450D(2) && UNK_0xBFC0798A6E3417F9(2, iLocal_38)))
					{
						switch (uParam0->f_464)
						{
							case 3:
								if (!func_19())
								{
									if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 9))
									{
										uParam0->f_456 = UNK_0x1C0640BA9A7327B3();
										iVar0 = func_30(*uParam0);
										if (iVar0 != -1)
										{
											UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "GET_CURRENT_SELECTION");
											uParam0->f_680 = UNK_0x7A8BB56B212464AC();
											func_11(uParam0, 1);
											func_13(&(uParam0->f_1.f_20[0 /*4*/]), 1);
											func_13(&(uParam0->f_1.f_20[1 /*4*/]), 1);
											Global_111638.f_1[*uParam0] = 1;
											UNK_0xA37A90C62806D848(0);
										}
									}
								}
								break;
							case 2:
								if (!func_10(4, *uParam0))
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									if (uParam0->f_450 < Global_94773[iVar1 /*19*/])
									{
										UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "GET_CURRENT_SELECTION");
										uParam0->f_681 = UNK_0x7A8BB56B212464AC();
										func_11(uParam0, 1);
									}
								}
								break;
							case 4:
								if (*uParam0 != 1)
								{
									func_85(4, *uParam0, 1);
									if (!func_118(0))
									{
										func_116(*uParam0);
									}
								}
								else
								{
									func_85(5, *uParam0, 1);
								}
								UNK_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_94773[iVar1 /*19*/])
								{
									if (Global_111638.f_1.f_12[iVar1 /*6*/][iVar2] == 0 || func_40(Global_111638.f_1.f_12[iVar1 /*6*/][iVar2]) != Global_94773[iVar1 /*19*/].f_1[iVar2])
									{
										bVar4 = false;
										iVar5 = 0;
										while (iVar5 < 14)
										{
											if (!bVar4)
											{
												bVar4 = true;
												bVar3 = iVar5;
												if (bVar3 != 0)
												{
													if (Global_94619[bVar3 /*5*/] != Global_94773[iVar1 /*19*/].f_1[iVar2])
													{
														bVar4 = false;
													}
													if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_116, bVar3))
													{
														bVar4 = false;
													}
													if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_118, bVar3))
													{
														bVar4 = false;
													}
													if (bVar3 == 11 && *uParam0 == 3)
													{
														bVar4 = false;
													}
													if (func_37(uParam0, bVar3))
													{
														bVar4 = false;
													}
												}
												else
												{
													bVar4 = false;
												}
											}
											iVar5++;
										}
										Global_111638.f_1.f_12[iVar1 /*6*/][iVar2] = bVar3;
									}
									iVar2++;
								}
								func_11(uParam0, 1);
								func_62(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_427 = 0;
					}
					if (UNK_0xBFC0798A6E3417F9(2, iLocal_39) || (UNK_0x91E3F625EF57450D(2) && UNK_0xBFC0798A6E3417F9(2, iLocal_40)))
					{
						switch (uParam0->f_464)
						{
							case 2:
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								if (uParam0->f_450 > 0)
								{
									func_11(uParam0, 1);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar6 = Global_111638.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_111638.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_94773[iVar1 /*19*/].f_1[uParam0->f_450];
									func_35(uParam0, uParam0->f_450, iVar6);
									UNK_0x4D7F4CC43D4D0DE3(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
									uParam0->f_427 = 0;
									uParam0->f_456 = UNK_0x1C0640BA9A7327B3();
								}
								else if (!func_229(0))
								{
									if (*uParam0 != 2)
									{
										bVar7 = false;
										while (bVar7 < uParam0->f_1.f_96)
										{
											UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											UNK_0x3CAEA85DA607305E(bVar7);
											UNK_0x7E60D21B163E9D56();
											UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											UNK_0x3CAEA85DA607305E(bVar7);
											UNK_0x1200CC973A2399C8(true);
											UNK_0x7E60D21B163E9D56();
											bVar7++;
										}
										UNK_0x4D7F4CC43D4D0DE3(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
										bVar7 = false;
										while (bVar7 < 2)
										{
											if (uParam0->f_1.f_30[bVar7] != 13)
											{
												func_115(*uParam0, uParam0->f_1.f_30[bVar7], 0);
											}
											bVar7++;
										}
										uParam0->f_427 = 0;
										func_11(uParam0, 1);
										uParam0->f_456 = UNK_0x1C0640BA9A7327B3();
										uParam0->f_465 = 0;
										func_114(0, 1);
									}
								}
								break;
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar8 = Global_111638.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_111638.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_94773[iVar1 /*19*/].f_1[uParam0->f_450];
									func_5(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_30[iVar9] != 13)
										{
											func_115(*uParam0, uParam0->f_1.f_30[iVar9], 0);
										}
										iVar9++;
									}
									func_113(8, 0);
									func_85(5, 1, 0);
									uParam0->f_427 = 0;
									func_11(uParam0, 1);
									uParam0->f_456 = UNK_0x1C0640BA9A7327B3();
									func_5(uParam0, 3, 0);
								}
								UNK_0x4D7F4CC43D4D0DE3(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
								break;
						}
					}
				}
			}
		}
	}
	else if (uParam0->f_455 > 5)
	{
		iVar0 = func_30(*uParam0);
		iVar1 = func_65(iVar0);
		if (uParam0->f_450 >= Global_94773[iVar1 /*19*/] || (*uParam0 == 1 && uParam0->f_450 > uParam0->f_415))
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
			UNK_0x3CAEA85DA607305E(99);
			UNK_0x3CAEA85DA607305E(-1);
			UNK_0x7E60D21B163E9D56();
			func_23(uParam0, 0, 1);
			func_5(uParam0, 4, 0);
		}
		else
		{
			if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 17))
			{
				iVar10 = Global_111638.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
				Global_111638.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
				uParam0->f_465 = Global_94773[iVar1 /*19*/].f_1[uParam0->f_450];
				func_35(uParam0, uParam0->f_450, iVar10);
			}
			UNK_0x0674E58A79778E99(&(uParam0->f_449), 17);
		}
		uParam0->f_457 = UNK_0x1C0640BA9A7327B3();
		UNK_0x0674E58A79778E99(&(uParam0->f_449), 10);
	}
	else if (UNK_0xFEBC1E4EC9E001F0())
	{
		if (((!func_12(&(uParam0->f_1.f_108[0 /*4*/])) && !func_12(&(uParam0->f_1.f_108[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_20[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_20[1 /*4*/])))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
	if (uParam0->f_680 != 0)
	{
		if (UNK_0xC95D7AEEDEF4946B(uParam0->f_680))
		{
			iVar11 = UNK_0xA52833FE33F41C53(uParam0->f_680);
			iVar1 = func_29(*uParam0, iVar11);
			iVar0 = func_30(*uParam0);
			func_113(iVar0, iVar1);
			if (!func_118(0))
			{
				func_112(*uParam0);
			}
			UNK_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_62(uParam0, iVar1, 0);
			if (uParam0->f_1.f_30[iVar11] != 13)
			{
				func_115(*uParam0, uParam0->f_1.f_30[iVar11], 1);
			}
			bVar12 = false;
			while (bVar12 < uParam0->f_1.f_96)
			{
				func_61(uParam0, bVar12);
				if (bVar12 < Global_94773[iVar1 /*19*/])
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
					UNK_0x3CAEA85DA607305E(bVar12);
					UNK_0x1200CC973A2399C8(true);
					UNK_0x7E60D21B163E9D56();
				}
				else
				{
					UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
					UNK_0x3CAEA85DA607305E(bVar12);
					UNK_0x1200CC973A2399C8(false);
					UNK_0x7E60D21B163E9D56();
				}
				bVar12++;
			}
			if (*uParam0 != 1)
			{
				func_85(5, *uParam0, 1);
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
				uParam0->f_450++;
			}
			UNK_0xA37A90C62806D848(0);
			uParam0->f_680 = 0;
		}
	}
	if (uParam0->f_681 != 0)
	{
		if (UNK_0xC95D7AEEDEF4946B(uParam0->f_681))
		{
			bVar13 = UNK_0xA52833FE33F41C53(uParam0->f_681);
			iVar0 = func_30(*uParam0);
			iVar1 = func_65(iVar0);
			Global_111638.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = uParam0->f_418[bVar13];
			bVar14 = Global_111638.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "UPDATE_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_450);
			UNK_0x3CAEA85DA607305E(bVar13);
			UNK_0x3CAEA85DA607305E(bVar14);
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "FOCUS_VIEW");
			UNK_0x3CAEA85DA607305E(99);
			UNK_0x7E60D21B163E9D56();
			UNK_0x4D7F4CC43D4D0DE3(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
			UNK_0x0674E58A79778E99(&(uParam0->f_449), 17);
			func_111(uParam0, bVar14);
			uParam0->f_450++;
			uParam0->f_417 = uParam0->f_450;
			uParam0->f_456 = UNK_0x1C0640BA9A7327B3();
			uParam0->f_457 = uParam0->f_456;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
			if (!func_12(&(uParam0->f_1.f_108[0 /*4*/])) && !func_12(&(uParam0->f_1.f_108[1 /*4*/])))
			{
				UNK_0xA37A90C62806D848(0);
			}
			uParam0->f_681 = 0;
		}
	}
	if (uParam0->f_682 != 0)
	{
		if (UNK_0xC95D7AEEDEF4946B(uParam0->f_682))
		{
			iVar15 = UNK_0xA52833FE33F41C53(uParam0->f_682);
			if (iVar15 != -1)
			{
				iVar16 = uParam0->f_418[iVar15];
				if (iVar16 != uParam0->f_427)
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
				}
				uParam0->f_427 = iVar16;
			}
			uParam0->f_682 = 0;
		}
	}
	if (uParam0->f_427 != 0)
	{
		func_110(uParam0, uParam0->f_427);
	}
}

void func_110(var uParam0, int iParam1)
{
	if (!func_19())
	{
		if (uParam0->f_483 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_119, 14))
					{
						if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_304[14 /*2*/]), ""))
						{
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[14 /*2*/], 1);
							UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 14);
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				case 13:
					if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_119, 16))
					{
						if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_304[16 /*2*/]), ""))
						{
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[16 /*2*/], 1);
							UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 16);
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				case 12:
					if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_119, 15))
					{
						if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_304[15 /*2*/]), ""))
						{
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[15 /*2*/], 1);
							UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 15);
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				case 11:
					if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_119, 17))
					{
						if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_304[17 /*2*/]), ""))
						{
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 10);
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[17 /*2*/], 1);
							UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 17);
							UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
			}
		}
	}
}

void func_111(var uParam0, bool bParam1)
{
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_463, bParam1))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_119, bParam1))
		{
			if (!UNK_0x7F8A39872A07D2CE(&(uParam0->f_1.f_304[bParam1 /*2*/]), ""))
			{
				func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[bParam1 /*2*/], 1);
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_119), bParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 2:
					switch (bParam1)
					{
						case 1:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, false))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						case 10:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, true))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				case 3:
					switch (bParam1)
					{
						case 12:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 3))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
							}
							break;
						case 9:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 6))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
							}
							break;
						case 1:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, false))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 7))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 7))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						case 10:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, true))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 8))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 8))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						case 6:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 4))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						case 7:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 2))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						case 8:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 5))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				case 4:
					switch (bParam1)
					{
						case 12:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 15))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 3))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[25 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
								}
							}
							break;
						case 7:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 2))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 14))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[30 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[28 /*2*/], 1);
								}
							}
							else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 14))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[29 /*2*/], 1);
							}
							break;
						case 9:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 18))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 6))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[27 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
								}
							}
							break;
						case 4:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 17))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						case 5:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 12))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						case 1:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 10))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, false))
								{
									if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 7))
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						case 10:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 11))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, true))
								{
									if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 8))
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						case 3:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 13))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
						case 6:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 19))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 4))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						case 8:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 16))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 5))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						case 13:
							if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_117, 20))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
					}
					break;
			}
		}
		UNK_0x5D96D8530B3D0904(&(uParam0->f_463), bParam1);
	}
}

void func_112(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = Global_111638.f_9080.f_99.f_205[7];
			if (iVar0 == 1)
			{
				UNK_0xD8B681091EBE4064(joaat("SP_HEIST_CHOSE_JEWEL_STEALTH"), true, 1);
			}
			else
			{
				UNK_0xD8B681091EBE4064(joaat("SP_HEIST_CHOSE_JEWEL_STEALTH"), false, 1);
			}
			break;
		case 1:
			iVar0 = Global_111638.f_9080.f_99.f_205[8];
			if (iVar0 == 3)
			{
				UNK_0xD8B681091EBE4064(joaat("SP_HEIST_CHOSE_DOCKS_SINK_SHIP"), true, 1);
			}
			else
			{
				UNK_0xD8B681091EBE4064(joaat("SP_HEIST_CHOSE_DOCKS_SINK_SHIP"), false, 1);
			}
			break;
		case 3:
			iVar0 = Global_111638.f_9080.f_99.f_205[10];
			if (iVar0 == 6)
			{
				UNK_0xD8B681091EBE4064(joaat("SP_HEIST_CHOSE_BUREAU_FIRECREW"), true, 1);
			}
			else
			{
				UNK_0xD8B681091EBE4064(joaat("SP_HEIST_CHOSE_BUREAU_FIRECREW"), false, 1);
			}
			break;
		case 4:
			iVar0 = Global_111638.f_9080.f_99.f_205[11];
			if (iVar0 == 8)
			{
				UNK_0xD8B681091EBE4064(joaat("SP_HEIST_CHOSE_BIGS_TRAFFIC"), true, 1);
			}
			else
			{
				UNK_0xD8B681091EBE4064(joaat("SP_HEIST_CHOSE_BIGS_TRAFFIC"), false, 1);
			}
			break;
	}
}

void func_113(int iParam0, int iParam1)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_111638.f_9080.f_99.f_205[iParam0] == iParam1)
	{
		return;
	}
	Global_111638.f_9080.f_99.f_205[iParam0] = iParam1;
}

void func_114(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_111638.f_9080.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_111638.f_9080.f_99.f_58[iParam0] = iParam1;
}

void func_115(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_120[bParam0]), bParam1);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_120[bParam0]), bParam1);
	}
	UNK_0x5D96D8530B3D0904(&Global_94752, bParam0);
}

void func_116(int iParam0)
{
	int iVar0;
	int iVar1;

	func_117(iParam0);
	switch (iParam0)
	{
		case 0:
			iVar1 = Global_111638.f_9080.f_99.f_205[7];
			iVar0 = 0;
			while (iVar0 < Global_94773[iVar1 /*19*/])
			{
				switch (Global_111638.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), false);
						break;
					case 10:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), true);
						UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 14);
						break;
					case 7:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 2);
						break;
					case 12:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 3);
						UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 15);
						break;
					case 6:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 4);
						break;
					case 8:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 5);
						break;
					case 9:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 6);
						break;
				}
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_119), Global_111638.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		case 2:
			iVar1 = Global_111638.f_9080.f_99.f_205[9];
			iVar0 = 0;
			while (iVar0 < Global_94773[iVar1 /*19*/])
			{
				switch (Global_111638.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 7);
						break;
					case 10:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 8);
						UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 14);
						break;
					case 11:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 9);
						UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 17);
						break;
				}
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_119), Global_111638.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		case 3:
			iVar1 = Global_111638.f_9080.f_99.f_205[10];
			iVar0 = 0;
			while (iVar0 < Global_94773[iVar1 /*19*/])
			{
				switch (Global_111638.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 10);
						break;
					case 10:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 11);
						UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 14);
						break;
					case 5:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 12);
						break;
					case 3:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 13);
						break;
					case 4:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 17);
						break;
					case 7:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 14);
						break;
					case 12:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 15);
						UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 15);
						break;
					case 6:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 19);
						break;
					case 8:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 16);
						break;
					case 9:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 18);
						break;
					case 13:
						UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_117), 20);
						UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_119), 16);
						break;
				}
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_1.f_119), Global_111638.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
	}
}

void func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), false);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), true);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 2);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 3);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 4);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 5);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 6);
			break;
		case 2:
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 7);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 8);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 9);
			break;
		case 3:
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 10);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 11);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 12);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 13);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 14);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 15);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 16);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 17);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 18);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 19);
			UNK_0x0674E58A79778E99(&(Global_111638.f_1.f_117), 20);
			break;
	}
}

bool func_118(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_119()
{
	Global_19671 = 0;
	func_120();
}

void func_120()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_121()
{
	UNK_0xC2127C0F64D6A3B9();
	func_122();
}

void func_122()
{
	Global_22211.f_134 = 1;
}

void func_123(var uParam0)
{
	vector3 vVar0;
	int iVar3;

	uParam0->f_453 = 0;
	uParam0->f_463 = 0;
	UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 9);
	func_11(uParam0, 0);
	if (!UNK_0x22A8E52414415B76())
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (Global_42596 == 1)
			{
				func_128(UNK_0x16F2683693E537C9());
			}
			vVar0 = { uParam0->f_401 };
			vVar0 = { vVar0 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_404))), (2.9f * SYSTEM::SIN((180f - uParam0->f_404)))) };
			UNK_0xE82754C349C7B581(vVar0, &(vVar0.f_2), 0, 0);
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 134);
			UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vVar0, 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), uParam0->f_404);
			UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
			UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), true);
		}
		UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 7);
	}
	UNK_0xBFE31971E49FA500(0);
	func_72(1);
	func_127();
	UNK_0x56FCE5C6DA4AA600();
	UNK_0x536F1BE96C726C4B(uParam0->f_401, 5f, 1, 1, 0, false);
	UNK_0xD7AD2803AD9697F7(uParam0->f_401, 5f);
	UNK_0x911B98CDC647AC76(true);
	UNK_0xD02CE72B4B66DC29(82, 66);
	UNK_0x744B56EE9DE7B57F(17, 0.612f, 0.818f);
	UNK_0xD59EF13BB60323B9();
	func_126(&(uParam0->f_649), uParam0->f_405, uParam0->f_408, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432 /* Float: -1f */, 0);
	iVar3 = UNK_0xFBD08BECC9B87937(uParam0->f_401);
	if (iVar3 != 0)
	{
		UNK_0x0007C2367F4F23F3(iVar3);
	}
	UNK_0xB8842F7C7761A196(&(Global_94690[uParam0->f_1.f_1 /*15*/].f_7));
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x445BDC28669C33B9(UNK_0xB1C09B89AED111A5(UNK_0x16F2683693E537C9()));
	}
	func_125(0);
	func_124();
	UNK_0x9CBC55A05A07FC47(0);
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_414, "TOGGLE_MOUSE_BUTTONS");
		UNK_0x1200CC973A2399C8(false);
		UNK_0x7E60D21B163E9D56();
	}
	uParam0->f_466 = UNK_0xE32F7AC5E6DF304A(2, 10, true);
	UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 2);
	Global_94751 = 1;
	func_6(uParam0, uParam0->f_464, 0);
}

void func_124()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		func_15(iVar0);
		iVar0++;
	}
	Global_111638.f_20405.f_145 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	if (UNK_0xFEBC1E4EC9E001F0())
	{
		UNK_0xA37A90C62806D848(1);
	}
}

void func_125(bool bParam0)
{
	if (!bParam0)
	{
		Global_110280 = UNK_0x1C0640BA9A7327B3() + 250;
	}
	Global_110277 = bParam0;
}

void func_126(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_20 = iParam8;
	uParam0->f_21 = iParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam7;
	uParam0->f_18 = fParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = iParam11;
	*uParam0 = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
	UNK_0xE3BB8E05FCEB3FBE(*uParam0, true);
	UNK_0x86F44313DFA8F00C(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		UNK_0x91F5B0244AAE6222(*uParam0, "HAND_SHAKE", 0.19f);
	}
	UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		UNK_0xDC3CC6D1845B0567(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		UNK_0x3B05E4399DC8490C(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_127()
{
	Global_22211.f_5 = 1;
}

void func_128(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam0 == 0)
	{
		return;
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return;
	}
	iVar0 = func_136(bParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0 /*5*/];
		func_131(1, iVar1, 1);
		return;
	}
	iVar2 = func_130(bParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_129(iVar2);
}

void func_129(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42357[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42357[iParam0 /*5*/].f_1 == UNK_0x16F2683693E537C9())
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

int func_130(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0 /*5*/].f_1 == bParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_131(int iParam0, int iParam1, int iParam2)
{
	func_132(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_132(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_134(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_133();
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

int func_133()
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

bool func_134(int iParam0, int iParam1, int iParam2)
{
	if (func_135(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_135(int iParam0, int iParam1, int iParam2)
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

int func_136(bool bParam0)
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
		if (!Global_42383[iVar0 /*5*/] == -1)
		{
			if (bParam0 == Global_42383[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_137(var uParam0)
{
	int iVar0;

	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_138(*uParam0);
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

int func_138(int iParam0)
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

bool func_139(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_138(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!UNK_0xE1DBBD6CE209517C(UNK_0xA30EC016B12C03E4()))
	{
		return false;
	}
	if (func_150(0))
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

void func_140(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (UNK_0x8A22C4C08282BF26(joaat("CONTEXT_CONTROLLER")) < 1)
	{
	}
	if (UNK_0x991B1F0980C62628())
	{
		if (!*uParam0 == -1)
		{
			func_137(uParam0);
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

bool func_141(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_99();
				if (!func_101(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_149()) || Global_110685) || Global_30770) || func_148()) || func_106(8, -1)) || func_147()) || func_146()) || func_145()) || func_144()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_149()) || Global_30770) || func_148()) || func_106(8, -1)) || func_145()) || func_147()) || func_146()) || func_144()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_149()) || Global_110685) || Global_30770) || func_148()) || func_106(8, -1)) || func_145()) || func_147()) || func_146()) || func_144()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_149()) || Global_110685) || Global_30770) || func_148()) || func_106(8, -1)) || func_147()) || func_146()) || func_144()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_149() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_106(8, -1)) || func_144()) || func_143()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_106(8, -1) || func_147()) || func_146()) || func_143()) || func_142())
						{
							return false;
						}
						if ((UNK_0x991B1F0980C62628() && UNK_0x19EC8D83154D7CC1() != 3) && UNK_0x00A15D69BCAA5267() < 8)
						{
							return false;
						}
						break;
					case 6:
						if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
						{
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_149()) || Global_30770) || func_148()) || func_106(8, -1)) || func_146()) || func_145()) || func_144()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_149()) || func_146()) || Global_110685) || Global_30770) || func_148()) || Global_42596) || func_106(8, -1)) || func_145()) || func_143()) || func_144()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_149()) || Global_110685) || Global_30770) || func_148()) || func_106(8, -1)) || func_145()) || func_143()) || func_147()) || func_146()) || func_144())
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

bool func_142()
{
	return Global_98783.f_1;
}

bool func_143()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_144()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_145()
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

bool func_146()
{
	return Global_98796.f_346 > 0;
}

bool func_147()
{
	return Global_98796.f_345 > 0;
}

bool func_148()
{
	return Global_1312877;
}

bool func_149()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_150(int iParam0)
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

bool func_151(int iParam0)
{
	return func_152(iParam0, Global_41431);
}

int func_152(int iParam0, int iParam1)
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

void func_153()
{
	bool bVar0;
	vector3 vVar1;

	if (func_229(17))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 11))
		{
			UNK_0xAE1670DD12E839C3("JH_1_MCS_4P2", 8);
			UNK_0x92DCE5C81176D2B4("lesterHandler");
			UNK_0xD7992BEF7A9D109E("JHS1AUD", 6);
			UNK_0x5D96D8530B3D0904(&bLocal_41, 11);
		}
		else if (UNK_0x75EECC9B0572F772())
		{
			UNK_0xA2888AACD3C45CCA("LESTER", true, 0, 0, false);
		}
	}
	if (func_229(18))
	{
		if (func_229(17))
		{
			if ((UNK_0xA0F4292EA950943D("JH_1_MCS_4P2") && UNK_0x1FBF08B001C4788A("lesterHandler")) && UNK_0x67C1D9E5B91B2E37(6))
			{
				if (!UNK_0x437347B10A200C4B(bLocal_729, 0))
				{
					UNK_0x29E8331978B73E7F(bLocal_729, "Lester", 0, joaat("CS_LESTERCREST"), 0);
				}
				else
				{
					UNK_0x29E8331978B73E7F(bLocal_729, "Lester", 2, joaat("CS_LESTERCREST"), 0);
				}
				if (UNK_0xC844350D5D58C99A(bLocal_732))
				{
					if (UNK_0xBDEB2DEEF1D23A18(bLocal_732))
					{
						UNK_0x15AFB6CBDE990FB6(bLocal_732, 1, true);
					}
				}
				if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
				{
					UNK_0x29E8331978B73E7F(UNK_0x16F2683693E537C9(), "Michael", 0, joaat("PLAYER_ZERO"), 0);
				}
				if (UNK_0xC844350D5D58C99A(bLocal_732))
				{
					UNK_0x29E8331978B73E7F(bLocal_732, "WalkingStick_Lester", 1, joaat("PROP_CS_WALKING_STICK"), 0);
				}
				else
				{
					UNK_0x29E8331978B73E7F(bLocal_732, "WalkingStick_Lester", 2, joaat("PROP_CS_WALKING_STICK"), 0);
				}
				UNK_0x523BCC9DC80CD82F(joaat("PROP_CS_WALKING_STICK"));
				UNK_0x523BCC9DC80CD82F(joaat("PROP_LAPTOP_LESTER2"));
				func_72(1);
				func_125(1);
				func_193(1, 1, 1, 0, 0, 0);
				iLocal_43 = -1;
				UNK_0x4C902758BEA97C68(0);
				if (func_118(0))
				{
					UNK_0xFCA2A436FD40C153(0, 0, 0, 0);
				}
				func_114(17, 0);
			}
		}
		else if (UNK_0x22A8E52414415B76())
		{
			func_121();
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_41, 7))
			{
				if (UNK_0xC844350D5D58C99A(bLocal_732))
				{
					UNK_0x4A4806F9D471E491(bLocal_732, true, 0);
				}
				if (UNK_0xC844350D5D58C99A(bLocal_730))
				{
					UNK_0x4A4806F9D471E491(bLocal_730, true, 0);
				}
				if (UNK_0xC844350D5D58C99A(bLocal_729))
				{
					UNK_0x4A4806F9D471E491(bLocal_729, true, 0);
				}
				UNK_0x0674E58A79778E99(&bLocal_41, 7);
			}
			if (UNK_0x3148AE92ED70DC30("Lester", 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_729))
				{
					bVar0 = bLocal_729;
					SYSTEM::START_NEW_SCRIPT_WITH_ARGS("lesterHandler", &bVar0, 1, 1424);
					UNK_0x5E8C29AE121DF1C7("lesterHandler");
					iLocal_739 = UNK_0x1C0640BA9A7327B3();
					UNK_0x5D96D8530B3D0904(&bLocal_41, 18);
				}
			}
			if (UNK_0x3148AE92ED70DC30("Michael", 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					vVar1 = { 709.3766f, -964.2602f, 29.3954f };
					UNK_0xE82754C349C7B581(vVar1, &(vVar1.f_2), 0, 0);
					if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
					{
						UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vVar1, 1, 0, 0, 1);
						UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 261.7831f);
						if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
						{
							UNK_0x5A9FF5F994E904B8(UNK_0xD803B885F5E47A62(), 1f, 2000, false, 1, 0);
						}
						UNK_0xBD453909DC26A85D(UNK_0x16F2683693E537C9(), joaat("MOTIONSTATE_WALK"), false, 0, 0);
					}
					UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
				}
			}
			if (UNK_0xEABED1927EFB48CA(0))
			{
				UNK_0x2FB9A57162E54BAB(0f);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
			}
		}
		else if (iLocal_43 == -1 && !func_118(0))
		{
			iLocal_43 = UNK_0x1C0640BA9A7327B3() + 1500;
		}
		else if (UNK_0x1C0640BA9A7327B3() > iLocal_43 || func_118(0))
		{
			if (func_118(0))
			{
				UNK_0x53491B90E4FD0E56(0);
			}
			else
			{
				Global_61512 = 0;
				Global_98783 = 0;
				func_192();
			}
			UNK_0x71199B01895C6202(joaat("PROP_CS_WALKING_STICK"));
			UNK_0x71199B01895C6202(joaat("PROP_LAPTOP_LESTER2"));
			func_72(0);
			func_193(0, 1, 1, 0, 0, 0);
			func_190(&(Global_111638.f_2358.f_539), 86);
			func_162(&(Global_111638.f_2358.f_539), 86);
			func_161(&iLocal_45);
			UNK_0x0674E58A79778E99(&bLocal_41, true);
			UNK_0x2952D66A502EA873(iLocal_733, 0);
			if (iLocal_738 != -1)
			{
				if (UNK_0x49083FDB78AC0509(iLocal_738))
				{
					UNK_0xDDABC98CFF1A4C60(iLocal_738);
				}
			}
			UNK_0xEFED0CD6E25037B9();
			UNK_0x17E8C6920A1E386F(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, true, 0);
			UNK_0x34D79252800B23FF(5);
			func_114(18, 0);
			func_154(0, 0);
		}
	}
	else if (!func_229(17))
	{
		if (UNK_0xA0F4292EA950943D("JH_1_MCS_4P2"))
		{
			UNK_0x5C8D148FC238F38A();
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_41, 18))
	{
		UNK_0x38C3A68D7861DCFD(0, 26, 1);
		if (UNK_0x1C0640BA9A7327B3() > iLocal_739 + 1000)
		{
			UNK_0x0674E58A79778E99(&bLocal_41, 18);
		}
	}
}

void func_154(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		bVar1 = iVar0;
		if (func_39(bVar1) || func_38(bVar1))
		{
			if (!(bVar1 == 11 && iParam0 == 3))
			{
				switch (bVar1)
				{
					case 1:
						func_158(4, 1);
						break;
					case 4:
						func_158(8, 1);
						break;
					case 6:
						func_158(10, 1);
						break;
					case 7:
						func_158(1, 1);
						break;
					case 8:
						func_158(3, 1);
						break;
					case 9:
						func_158(6, 1);
						break;
					case 10:
						func_158(9, 1);
						break;
					case 12:
						func_158(11, 1);
						break;
					case 13:
						func_158(12, 1);
						break;
					case 11:
						if (func_157(91))
						{
							func_158(0, 1);
						}
						break;
					case 5:
						if (func_157(91))
						{
							func_158(2, 1);
						}
						break;
					case 3:
						if (func_157(67))
						{
							func_158(5, 1);
						}
						break;
					case 2:
						if (func_157(77))
						{
							func_158(7, 1);
						}
						break;
				}
			}
		}
		iVar0++;
	}
	if (!func_39(10) && UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[4], false))
	{
		func_158(9, 1);
	}
	if (!func_39(13) && UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[16], false))
	{
		func_158(12, 1);
	}
	if (!func_39(12))
	{
		if (iParam0 == 4)
		{
			func_158(11, 1);
		}
	}
	if (!bParam1)
	{
		if (!func_156(69))
		{
			func_21("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_155("DI_FEED_HST");
	}
}

void func_155(char* sParam0)
{
	UNK_0x1E64CE678ED5F61E("");
	UNK_0x49E52B24E5A757B3("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

bool func_156(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20405.f_150[iVar1], bVar0);
	}
	return false;
}

bool func_157(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

void func_158(bool bParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 >= 0 && bVar0 <= 31)
	{
		if (!func_160(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_26429.f_1), bVar0);
			if (!bParam1)
			{
				func_155(func_159(bParam0));
			}
		}
	}
}

char* func_159(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "CM_HSTCHE";
		case 1:
			return "CM_HSTCHR";
		case 2:
			return "CM_HSTDAR";
		case 3:
			return "CM_HSTEDD";
		case 4:
			return "CM_HSTGUS";
		case 5:
			return "CM_HSTHUG";
		case 6:
			return "CM_HSTKRM";
		case 7:
			return "CM_HSTKAR";
		case 8:
			return "CM_HSTNOR";
		case 9:
			return "CM_HSTPAC";
		case 10:
			return "CM_HSTPAI";
		case 11:
			return "CM_HSTRIC";
		case 12:
			return "CM_HSTTAL";
	}
	return "ERROR!";
}

bool func_160(bool bParam0)
{
	if (bParam0 != -1 && bParam0 != 13)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_26429.f_1, bParam0);
	}
	return false;
}

void func_161(int iParam0)
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

void func_162(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 17:
			func_163(uParam0, 0, 12);
			break;
		case 19:
			func_163(uParam0, 1, 13);
			break;
		case 29:
			func_163(uParam0, 1, 14);
			break;
		case 30:
			func_163(uParam0, 2, 15);
			func_163(uParam0, 1, 29);
			break;
		case 32:
			func_163(uParam0, 1, 16);
			func_163(uParam0, 0, 17);
			break;
		case 39:
			func_163(uParam0, 0, 21);
			func_163(uParam0, 1, 20);
			break;
		case 31:
			func_163(uParam0, 0, 18);
			break;
		case 20:
			func_163(uParam0, 2, 22);
			break;
		case 66:
			func_163(uParam0, 1, 23);
			break;
		case 68:
			func_163(uParam0, 1, 24);
			break;
		case 70:
			func_163(uParam0, 1, 67);
			break;
		case 8:
			func_163(uParam0, 1, 25);
			func_163(uParam0, 2, 26);
			break;
		case 67:
			func_163(uParam0, 1, 27);
			break;
		case 9:
			func_163(uParam0, 2, 28);
			break;
		case 38:
			func_163(uParam0, 2, 30);
			func_163(uParam0, 1, 19);
			break;
		case 83:
			func_163(uParam0, 2, 33);
			break;
		case 45:
			func_163(uParam0, 1, 35);
			break;
		case 64:
			func_163(uParam0, 0, 36);
			func_163(uParam0, 1, 37);
			break;
		case 91:
			func_163(uParam0, 0, 41);
			break;
		case 42:
			func_163(uParam0, 0, 58);
			Global_98148[0 /*98*/] = 0;
			func_163(uParam0, 2, 59);
			Global_98148[2 /*98*/] = 0;
			break;
		case 41:
			func_163(uParam0, 1, 42);
			func_163(uParam0, 2, 42);
			break;
		case 15:
			func_163(uParam0, 0, 46);
			func_163(uParam0, 1, 47);
			break;
		case 16:
			func_163(uParam0, 0, 48);
			break;
		case 48:
			func_163(uParam0, 1, 50);
			func_163(uParam0, 2, 51);
			break;
		case 74:
			func_163(uParam0, 0, 52);
			func_163(uParam0, 1, 66);
			break;
		case 76:
			func_163(uParam0, 1, 53);
			func_163(uParam0, 2, 54);
			func_163(uParam0, 0, 62);
			break;
		case 75:
			func_163(uParam0, 0, 61);
			func_163(uParam0, 1, 31);
			break;
		case 69:
			func_163(uParam0, 1, 63);
			break;
		case 84:
			func_163(uParam0, 0, 68);
			func_163(uParam0, 2, 69);
			break;
		case 85:
			func_163(uParam0, 0, 64);
			func_163(uParam0, 2, 65);
			break;
		case 93:
			func_163(uParam0, 1, 38);
			func_163(uParam0, 2, 39);
			break;
		case 11:
			func_163(uParam0, 2, 55);
			break;
		case 77:
			func_163(uParam0, 1, 56);
			func_163(uParam0, 2, 57);
			break;
		default:
			break;
	}
}

int func_163(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<98> Var1;
	var uVar99;
	var uVar102;
	var uVar103;
	var uVar106;

	if (!UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[0], 9))
	{
		iVar0 = Global_111638.f_18528[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_111638.f_18528[iParam1] = iParam2;
	uParam0->f_2296[iParam1] = func_179();
	if (!func_178(iParam2, &(uParam0->f_2300[iParam1 /*3*/]), &(uParam0->f_2310[iParam1])))
	{
		return 0;
	}
	if (!func_177(uParam0->f_2300[iParam1 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_177(Global_97183[iParam2 /*3*/], 0f, 0f, 0f, 0))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 49;
			Var1.f_81 = 2;
			if (func_164(iParam1, iParam2, &Var1, &uVar99, &uVar102, &uVar103, &uVar106))
			{
				Global_98148[iParam1 /*98*/] = { Var1 };
			}
		}
	}
	uParam0->f_2314[iParam1] = 0;
	uParam0->f_2318[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_2328[iParam1] = 0;
	return 1;
}

bool func_164(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_84 = 255;
	uParam2->f_85 = 255;
	uParam2->f_86 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_98148[iParam0 /*98*/] };
			if (Global_98443[iParam0] != 2)
			{
				if (UNK_0x0399732A9EBC368E(Global_98451[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f, -827.1384f, 153.8595f, 59.96172f, 33.25f, 0, true))
				{
					if (Global_98443[iParam0] == 1)
					{
						*uParam3 = { Global_98451[iParam0 /*3*/] - Global_111638.f_2358.f_539.f_2300[iParam0 /*3*/] };
						*uParam4 = (Global_98461[iParam0] - Global_111638.f_2358.f_539.f_2310[iParam0]);
						if (SYSTEM::VMAG2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return false;
						}
					}
				}
				*uParam3 = { Global_98451[iParam0 /*3*/] - Global_111638.f_2358.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_98461[iParam0] - Global_111638.f_2358.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return true;
		case 6:
			*uParam2 = { Global_98148[iParam0 /*98*/] };
			if (Global_98443[iParam0] != 2)
			{
				*uParam3 = { Global_98451[iParam0 /*3*/] - Global_111638.f_2358.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_98461[iParam0] - Global_111638.f_2358.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return true;
		case 7:
			*uParam2 = { Global_98148[iParam0 /*98*/] };
			if (Global_98443[iParam0] != 2)
			{
				*uParam3 = { Global_98451[iParam0 /*3*/] - Global_111638.f_2358.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_98461[iParam0] - Global_111638.f_2358.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return true;
		case 11:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return true;
		case 8:
			uParam2->f_97 = 0;
			*uParam2 = joaat("MESA");
			*uParam3 = { Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.195f, -90.0089f) };
			*uParam4 = (1.27f - 194.1887f);
			return true;
		case 9:
			return func_164(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 10:
			return func_164(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 13:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return true;
		case 14:
			func_166(iParam0, uParam2, 2);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return true;
		case 15:
			uParam2->f_97 = 0;
			*uParam2 = joaat("FROGGER");
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return true;
		case 55:
			uParam2->f_97 = 0;
			*uParam2 = joaat("MESA");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return true;
		case 56:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return true;
		case 57:
			uParam2->f_97 = 0;
			*uParam2 = joaat("PENUMBRA");
			*uParam3 = { Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.52f, 37.5988f) };
			*uParam4 = (141.28f - 90.0339f);
			return true;
		case 12:
			uParam2->f_97 = 0;
			*uParam2 = joaat("TAXI");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return true;
		case 16:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return true;
		case 17:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return true;
		case 18:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return true;
		case 19:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return true;
		case 20:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return true;
		case 23:
			return func_164(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 24:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return true;
		case 67:
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return true;
		case 58:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
		case 59:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
		case 60:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
		case 22:
			uParam2->f_97 = 0;
			*uParam2 = joaat("PHANTOM");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return true;
		case 74:
			func_166(iParam0, uParam2, 1);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return true;
		case 38:
			func_166(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return true;
		case 41:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return true;
		case 25:
			uParam2->f_97 = 0;
			*uParam2 = joaat("BLISTA");
			*uParam3 = { Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.68f, 72.2278f) };
			*uParam4 = (0.72f - 156.8827f);
			return true;
		case 27:
			uParam2->f_97 = 0;
			*uParam2 = joaat("SEMINOLE");
			*uParam3 = { Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f) };
			*uParam4 = (2.23f - 7.2736f);
			return true;
		case 26:
			uParam2->f_97 = 0;
			*uParam2 = joaat("PEYOTE");
			*uParam3 = { Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.786f, 257.9167f) };
			*uParam4 = (-1f - 97.2736f);
			return true;
		case 40:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return true;
		case 28:
			uParam2->f_97 = 0;
			*uParam2 = joaat("POLMAV");
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return true;
		case 234:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return true;
		case 75:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return true;
		case 76:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return true;
		case 42:
			uParam2->f_97 = 0;
			*uParam2 = joaat("MESA");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return true;
		case 43:
			uParam2->f_97 = 0;
			*uParam2 = joaat("MESA");
			*uParam3 = { Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.479f, 709.0244f) };
			*uParam4 = (247.4806f - 355.326f);
			return true;
		case 44:
			uParam2->f_97 = 0;
			*uParam2 = joaat("SADLER");
			*uParam3 = { Vector(5.1176f, -2936.843f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f) };
			*uParam4 = (253.776f - 334.1068f);
			return true;
		case 45:
			uParam2->f_97 = 0;
			*uParam2 = joaat("MIXER");
			*uParam3 = { Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.085f, 594.4415f) };
			*uParam4 = (2.62f - 299.0519f);
			return true;
		case 47:
			uParam2->f_97 = 0;
			*uParam2 = joaat("CAVALCADE");
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_27), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return true;
		case 49:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return true;
		case 48:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return true;
		case 50:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return true;
		case 51:
			uParam2->f_97 = 0;
			*uParam2 = joaat("STRETCH");
			*uParam3 = { Vector(28.1755f, -550.2679f, -1170.72f) - Vector(30.2361f, -526.9999f, -1257.5f) };
			*uParam4 = (310.4708f - 220.9554f);
			return true;
		case 52:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return true;
		case 66:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return true;
		case 61:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return true;
		case 62:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return true;
		case 63:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return true;
		case 64:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
		case 69:
			uParam2->f_97 = 0;
			*uParam2 = joaat("PRAIRIE");
			*uParam3 = { Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64.1848f - 180f);
			return true;
		case 65:
		case 54:
			uParam2->f_97 = 0;
			*uParam2 = joaat("FROGGER2");
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			uParam2->f_89 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5.5414f, -6.6035f, 1.0473f };
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5.7209f, -12.3958f, 1.0746f };
				*uParam4 = -152.2593f;
			}
			return true;
		case 112:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f };
			*uParam4 = UNK_0x79833B02DBD2A244(-180f, 180f);
			return true;
		case 113:
			if (func_164(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = UNK_0x79833B02DBD2A244(-180f, 180f);
				return true;
			}
			break;
		case 118:
			uParam2->f_97 = 0;
			*uParam2 = joaat("SCORCHER");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12.5f, 0f };
			*uParam6 = 5f;
			return true;
		case 119:
			if (func_164(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return true;
			}
			break;
		case 120:
			if (func_164(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return true;
			}
			break;
		case 173:
			uParam2->f_97 = 0;
			*uParam2 = joaat("CRUISER");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return true;
		case 114:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return true;
		case 105:
			func_166(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return true;
		case 106:
			return func_164(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 107:
			return func_164(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 98:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return true;
		case 99:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return true;
		case 100:
			return func_164(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 101:
			return func_164(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 102:
			return func_164(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 123:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return true;
		case 125:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return true;
		case 133:
			uParam2->f_97 = 0;
			*uParam2 = joaat("TROPIC");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_11[0] = 0;
			uParam2->f_11[1] = 0;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 0;
			uParam2->f_11[4] = 0;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
		case 89:
		case 90:
		case 127:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return true;
		case 91:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return true;
		case 93:
			if (func_164(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return true;
			}
			break;
		case 121:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return true;
		case 115:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return true;
		case 116:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return true;
		case 117:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return true;
		case 94:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return true;
		case 96:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return true;
		case 108:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return true;
		case 109:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return true;
		case 135:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f };
			*uParam4 = UNK_0x79833B02DBD2A244(-180f, 180f);
			return true;
		case 136:
			if (func_164(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = UNK_0x79833B02DBD2A244(-180f, 180f);
				return true;
			}
			break;
		case 137:
			if (func_164(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = UNK_0x79833B02DBD2A244(-180f, 180f);
				return true;
			}
			break;
		case 138:
			if (func_164(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { UNK_0x79833B02DBD2A244(-5f, 5f), UNK_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = UNK_0x79833B02DBD2A244(-180f, 180f);
				return true;
			}
			break;
		case 139:
			if (func_164(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return true;
			}
			break;
		case 140:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
		case 141:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return true;
			}
			break;
		case 142:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return true;
		case 143:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
		case 144:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
		case 145:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
		case 146:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
		case 147:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return true;
			}
			break;
		case 148:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
		case 149:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
		case 151:
			if (func_164(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return true;
			}
			break;
		case 162:
			if (func_164(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return true;
			}
			break;
		case 158:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return true;
		case 166:
			return func_164(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 170:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return true;
		case 171:
			return func_164(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 172:
			return func_164(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 208:
			func_166(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return true;
		case 209:
			return func_164(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 210:
			return func_164(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 211:
			func_165(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return true;
		case 212:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return true;
		case 213:
			if (func_164(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return true;
			}
			break;
		case 214:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return true;
		case 215:
			uParam2->f_97 = 0;
			*uParam2 = joaat("TAXI");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0.9714f, 1.6112f, -0.2773f };
			*uParam4 = -7.0583f;
			*uParam5 = { Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f) };
			*uParam6 = 10f;
			return true;
		case 196:
			uParam2->f_97 = 0;
			*uParam2 = joaat("TAXI");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29.4846f, -1457.915f, -17.4132f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam4 = (89.0026f - -1.5f);
			*uParam5 = { Vector(33.6125f, -1563.461f, -147.0307f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam6 = 10f;
			return true;
		case 221:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return true;
		case 216:
			if (func_164(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return true;
			}
			break;
		case 217:
			if (func_164(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return true;
			}
			break;
		case 232:
		case 233:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f) };
			*uParam4 = (162.098f - 109.0206f);
			return true;
		case 192:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return true;
		case 193:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return true;
		case 194:
			if (func_164(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return true;
			}
			break;
		case 195:
			if (func_164(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return true;
			}
			break;
		case 200:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.568f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.286f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return true;
		case 201:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return true;
		case 202:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return true;
		case 222:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return true;
		case 223:
			if (func_164(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return true;
			}
			break;
		case 224:
			return func_164(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 226:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return true;
		case 227:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return true;
		case 228:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return true;
		case 229:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return true;
		case 230:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return true;
		case 238:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return true;
		case 250:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return true;
		case 251:
			if (func_164(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return true;
			}
			break;
		case 252:
			if (func_164(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return true;
			}
			break;
		case 253:
			if (func_164(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return true;
			}
			break;
		case 281:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return true;
		case 282:
			if (func_164(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return true;
			}
			break;
		case 283:
			if (func_164(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return true;
			}
			break;
		case 284:
			if (func_164(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("FAGGIO2");
				uParam2->f_91 = 0;
				return true;
			}
			break;
		case 275:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return true;
		case 276:
			return func_164(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 277:
			return func_164(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
		case 280:
			if (!Global_3)
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("TROPIC");
				uParam2->f_11[0] = 0;
				uParam2->f_11[1] = 0;
				uParam2->f_11[2] = 1;
				uParam2->f_11[3] = 0;
				uParam2->f_11[4] = 0;
				uParam2->f_11[5] = 1;
				uParam2->f_11[6] = 1;
				uParam2->f_11[7] = 1;
				uParam2->f_11[8] = 1;
			}
			else
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("DINGHY");
			}
			*uParam3 = { Vector(-0.6187f, -1440.421f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f) };
			uParam3->f_2 = (uParam3->f_2 + 0.5f);
			*uParam4 = (340.0835f - 4.44f);
			*uParam3 = { Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f) };
			*uParam4 = (23.6441f + 90f);
			*uParam3 = { -4.0164f, 19.9594f, 0f };
			*uParam4 = 113.6465f;
			*uParam3 = { *uParam3 * Vector(1.1f, 1.1f, 1.1f) };
			return true;
		case 247:
			uParam2->f_97 = 0;
			*uParam2 = joaat("SANCHEZ");
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return true;
		case 288:
			uParam2->f_97 = 0;
			*uParam2 = joaat("SPEEDO");
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return true;
		case 309:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return true;
		case 305:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f) };
			*uParam4 = (315.9865f - 122.5269f);
			return true;
		case 310:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return true;
		case 255:
			uParam2->f_97 = 0;
			*uParam2 = joaat("ROMERO");
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return true;
		case 265:
			uParam2->f_97 = 0;
			*uParam2 = joaat("BMX");
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return true;
		case 285:
			uParam2->f_97 = 0;
			*uParam2 = joaat("GBURRITO");
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return true;
		case 256:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return true;
		case 257:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return true;
		case 258:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.3025f, 6276.12f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f) };
			*uParam4 = (130.9896f - 10.247f);
			return true;
		case 314:
			uParam2->f_97 = 0;
			*uParam2 = joaat("CUBAN800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return true;
	}
	switch (iParam1)
	{
		case 110:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return true;
		case 111:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.782f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return true;
		case 153:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return true;
		case 154:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return true;
		case 165:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.878f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return true;
		case 159:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return true;
		case 160:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return true;
		case 167:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.174f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return true;
		case 152:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.8f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return true;
		case 157:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return true;
		case 225:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.734f, 185.4888f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return true;
		case 218:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.159f, -17.556f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return true;
		case 219:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.151f, -219.3172f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return true;
		case 220:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.693f, -22.6138f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return true;
		case 206:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return true;
		case 207:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return true;
		case 274:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.446f, -1883.836f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return true;
		case 312:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.557f, -200.684f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return true;
		case 271:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.751f, -1278.023f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return true;
		case 248:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return true;
		case 242:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.22f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return true;
		case 254:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return true;
		case 287:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return true;
		case 286:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.704f, -1264.218f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return true;
		case 239:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return true;
		case 243:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return true;
		case 244:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return true;
		case 249:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return true;
		case 273:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return true;
		case 92:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return true;
		case 103:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return true;
		case 109:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.505f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return true;
		case 81:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.442f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return true;
		case 95:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return true;
		case 97:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.156f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return true;
		case 134:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.918f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return true;
		case 88:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.821f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return true;
		case 306:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.726f, -569.3535f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (296.1685f - UNK_0xE7D606C557C86100(7.4998f, -7.4995f));
			return true;
		case 307:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.593f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (236.223f - UNK_0xE7D606C557C86100(-10.6345f, -0.7246f));
			return true;
		case 308:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (332.7842f - UNK_0xE7D606C557C86100(3.4271f, 13.6787f));
			return true;
		case 278:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.745f, 631.8275f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return true;
		case 279:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return true;
		case 240:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.323f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return true;
		case 241:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.667f, -179.4242f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return true;
		case 264:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.545f, 486.7419f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return true;
		case 266:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.895f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return true;
		case 267:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.375f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return true;
		case 269:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return true;
		case 246:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.507f, -1195.256f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return true;
		case 263:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.213f, -573.3765f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return true;
		case 259:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.539f, -724.429f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return true;
		case 260:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.114f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return true;
		case 261:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return true;
		case 270:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_97183[iParam1 /*3*/] };
			*uParam4 = UNK_0x79833B02DBD2A244(-180f, 180f);
			return true;
		case 289:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return true;
	}
	return false;
}

void func_165(int iParam0, var uParam1, int iParam2)
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

int func_166(int iParam0, var uParam1, int iParam2)
{
	if (Global_98148[iParam0 /*98*/] == 0)
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("BLIMP"))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (func_176(iParam0))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (UNK_0xA7082C42B8809BF2(Global_98148[iParam0 /*98*/]))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (UNK_0xC41A9202669A24C4(Global_98148[iParam0 /*98*/]))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (UNK_0xAFB8495D36825275(Global_98148[iParam0 /*98*/]))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (UNK_0xA7D7011F9888A365(Global_98148[iParam0 /*98*/]))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!UNK_0x8E39AC3C76C8AA58(Global_98148[iParam0 /*98*/]))
		{
			func_165(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!UNK_0x7D8B2A8F9EA82DB7(Global_98148[iParam0 /*98*/]))
		{
			func_165(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	if (!func_167(Global_98148[iParam0 /*98*/], 0))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		if (Global_98148[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = { Global_98148[iParam0 /*98*/] };
			uParam1->f_91 = 0;
			return 0;
		}
	}
	else
	{
		func_165(iParam0, uParam1, 1);
		uParam1->f_91 = 1;
		if (Global_98148[iParam0 /*98*/] == *uParam1)
		{
			func_165(iParam0, uParam1, 1);
			uParam1->f_91 = 1;
			return 1;
		}
		func_165(iParam0, uParam1, 2);
		uParam1->f_91 = 2;
		if (Global_98148[iParam0 /*98*/] == *uParam1)
		{
			func_165(iParam0, uParam1, 2);
			uParam1->f_91 = 2;
			return 1;
		}
		*uParam1 = { Global_98148[iParam0 /*98*/] };
		uParam1->f_91 = 0;
		return 0;
	}
	func_165(iParam0, uParam1, iParam2);
	uParam1->f_91 = iParam2;
	return 1;
}

bool func_167(bool bParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;

	if (bParam0 == 0)
	{
		return false;
	}
	if (!UNK_0x4DAC2AD66FE0E696(bParam0))
	{
		return false;
	}
	if (((((bParam0 == joaat("DOMINATOR2") && !UNK_0x8CD06866876216F2()) || (bParam0 == joaat("BUFFALO3") && !UNK_0x8CD06866876216F2())) || (bParam0 == joaat("GAUNTLET2") && !UNK_0x8CD06866876216F2())) || bParam0 == joaat("BLIMP2")) || (bParam0 == joaat("STALION2") && !UNK_0x8CD06866876216F2()))
	{
		if (!func_175())
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < UNK_0x6C7B93D0F54679BE())
		{
			if (UNK_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (bParam0 == Var1.f_1)
				{
					if (UNK_0x232048AB4B0E0259(Var1))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam0 == joaat("BLIMP"))
	{
		if ((((!func_174() && !func_173()) && !func_172()) && !func_171()) && !func_175())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_172())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_170(bParam0))
		{
			return false;
		}
	}
	if (!func_168(bParam0))
	{
		return false;
	}
	return true;
}

bool func_168(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_169())
	{
		return true;
	}
	UNK_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return true;
	}
	switch (bParam0)
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
	if (!UNK_0x437ABF4F514F6471(&cVar2))
	{
		return false;
	}
	return true;
}

bool func_169()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_170(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (Global_2513258)
	{
		return true;
	}
	iVar0 = 1;
	iVar1 = UNK_0xDD0E7998AE8AD485();
	if (bParam0 == joaat("BTYPE3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("FACTION3"))
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VIRGO3") || bParam0 == joaat("VIRGO2"))
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SABREGT2"))
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORNADO5"))
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MINIVAN2"))
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SLAMVAN3"))
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("PROTOTIPO"))
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEVEN70"))
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PFISTER811"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("BF400"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BRIOSO"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLIFFHANGER"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CONTENDER"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LE7B"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OMNIS"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPHYTRUCK"))
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPHYTRUCK2"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPOS"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GARGOYLE"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RALLYTRUCK"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TAMPA2"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TYRUS"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SHEAVA"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LYNX"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STALION2"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GAUNTLET2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DOMINATOR2"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BUFFALO3"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("DEFILER"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NIGHTBLADE"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ZOMBIEA"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ESSKEY"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AVARUS"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ZOMBIEB"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HAKUCHOU2"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VORTEX"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SHOTARO"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHIMERA"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAPTOR"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DAEMON2"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER4"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORNADO6"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("YOUGA2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("WOLFSBANE"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGGIO3"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGGIO"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BAGGER"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SANCTUS"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MANCHEZ"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RATBIKE"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("VOLTIC2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RUINER2"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DUNE4"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DUNE5"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PHANTOM2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TECHNICAL2"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOXVILLE5"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("WASTELANDER"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER5"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET3"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DIABLOUS"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DIABLOUS2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELEGY"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELEGY2"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FCR"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FCR2"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTB"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTB2"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NERO"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NERO2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PENETRATOR"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SPECTER"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SPECTER2"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TEMPESTA"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("GP1"))
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("INFERNUS2"))
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RUSTON"))
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TURISMO2"))
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("XA21"))
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHEETAH2"))
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORERO"))
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VAGNER"))
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ARDENT"))
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NIGHTSHARK"))
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("MICROLIGHT"))
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MOGUL"))
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ROGUE"))
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STARLING"))
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEABREEZE"))
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TULA"))
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PYRO"))
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MOLOTOK"))
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NOKOTA"))
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOMBUSHKA"))
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HUNTER"))
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HAVOK"))
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HOWARD"))
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ALPHAZ1"))
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CYCLONE"))
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VISIONE"))
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VIGILANTE"))
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RETINUE"))
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAPIDGT3"))
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("DELUXO"))
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STROMBERG"))
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RIOT2"))
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHERNOBOG"))
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("KHANJALI"))
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AKULA"))
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("THRUSTER"))
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BARRAGE"))
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VOLATOL"))
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET4"))
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NEON"))
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STREITER"))
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SENTINEL3"))
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("YOSEMITE"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SC1"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AUTARCH"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GT500"))
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HUSTLER"))
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("REVOLTER"))
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PARIAH"))
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAIDEN"))
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SAVESTRA"))
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RIATA"))
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HERMES"))
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET5"))
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("Z190"))
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VISERIS"))
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("KAMACHO"))
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("GB200"))
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGALOA"))
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELLIE"))
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ISSI3"))
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MICHELLI"))
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FLASHGT"))
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HOTRING"))
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TEZERACT"))
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TYRANT"))
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DOMINATOR3"))
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TAIPAN"))
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ENTITY2"))
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("JESTER3"))
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHEBUREK"))
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CARACARA"))
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEASPARROW"))
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("TERBYTE"))
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PBUS2"))
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MULE4"))
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("POUNDER2"))
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SWINGER"))
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MENACER"))
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SCRAMJET"))
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STRIKEFORCE"))
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OPPRESSOR2"))
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PATRIOT2"))
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STAFFORD"))
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FREECRAWLER"))
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLIMP3"))
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("MONSTER3"))
	{
	}
	else if (bParam0 == joaat("CERBERUS"))
	{
	}
	else if (bParam0 == joaat("CERBERUS2"))
	{
	}
	else if (bParam0 == joaat("CERBERUS3"))
	{
	}
	else if (bParam0 == joaat("BRUTUS"))
	{
	}
	else if (bParam0 == joaat("BRUTUS2"))
	{
	}
	else if (bParam0 == joaat("BRUTUS3"))
	{
	}
	else if (bParam0 == joaat("SCARAB"))
	{
	}
	else if (bParam0 == joaat("SCARAB2"))
	{
	}
	else if (bParam0 == joaat("SCARAB3"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR2"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR3"))
	{
	}
	else if (bParam0 == joaat("ZR380"))
	{
	}
	else if (bParam0 == joaat("ZR3802"))
	{
	}
	else if (bParam0 == joaat("ZR3803"))
	{
	}
	else if (bParam0 == joaat("IMPALER"))
	{
	}
	else if (bParam0 == joaat("DEVESTE"))
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TOROS"))
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLIQUE"))
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTO"))
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DEVIANT"))
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VAMOS"))
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TULIP"))
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SCHLAGEN"))
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RCBANDITO"))
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LOCUST"))
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OUTLAW"))
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FIRETRUK"))
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BURRITO2"))
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOXVILLE"))
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STOCKADE"))
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LGUARD"))
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER2"))
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLUB"))
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_171()
{
	return false;
}

bool func_172()
{
	return true;
}

bool func_173()
{
	return true;
}

bool func_174()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_175()
{
	bool bVar0;

	if (UNK_0x61D9362D70D2DD56())
	{
		if (UNK_0x999A3BFD3E9B5D2C())
		{
			if (UNK_0x5CD8D2FE4603C900())
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &bVar0, -1);
				UNK_0x5D96D8530B3D0904(&bVar0, 2);
				UNK_0x5D96D8530B3D0904(&bVar0, 4);
				UNK_0x5D96D8530B3D0904(&bVar0, 6);
				UNK_0x5D96D8530B3D0904(&Global_25, 2);
				UNK_0x5D96D8530B3D0904(&Global_25, 4);
				UNK_0x5D96D8530B3D0904(&Global_25, 6);
				UNK_0xCDC520E5E48E63D9(joaat("SP_UNLOCK_EXCLUS_CONTENT"), bVar0, 1);
				if (UNK_0xE0DC536BD2AC0301())
				{
					bVar0 = UNK_0x0A4C9A3D51EAE31F(866);
					UNK_0x5D96D8530B3D0904(&bVar0, false);
					UNK_0x9F2BE984EBF8A0F4(bVar0);
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
	if (UNK_0xE0DC536BD2AC0301())
	{
		if (UNK_0xEAE0D21A50E6C7F4(UNK_0x0A4C9A3D51EAE31F(866), false))
		{
			return true;
		}
	}
	return false;
}

bool func_176(int iParam0)
{
	if (Global_98148[iParam0 /*98*/] == joaat("BLIMP") || Global_98148[iParam0 /*98*/] == joaat("BLIMP2"))
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("SUBMERSIBLE") || Global_98148[iParam0 /*98*/] == joaat("SUBMERSIBLE2"))
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("FREIGHT"))
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("PACKER"))
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("ASEA2"))
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("BURRITO2") || Global_98148[iParam0 /*98*/] == joaat("FBI2"))
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("ENTITYXF") && !Global_111638.f_9080.f_330[8 /*6*/])
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("CHEETAH") && !Global_111638.f_9080.f_330[8 /*6*/])
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("POLICEB") && !Global_111638.f_9080.f_330[8 /*6*/])
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("ZTYPE") && !Global_111638.f_9080.f_330[9 /*6*/])
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("POLMAV") && !Global_111638.f_9080.f_330[9 /*6*/])
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("JB700") && !Global_111638.f_9080.f_330[10 /*6*/])
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("MONROE") && !Global_111638.f_9080.f_330[11 /*6*/])
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("FIRETRUK"))
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("HANDLER"))
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("MONROE"))
	{
		return true;
	}
	if (Global_98148[iParam0 /*98*/] == joaat("PHANTOM"))
	{
		return true;
	}
	if (((Global_98148[iParam0 /*98*/] == joaat("GAUNTLET") && !Global_111638.f_9080.f_330[80 /*6*/]) && !Global_111638.f_9080.f_330[81 /*6*/]) && !Global_111638.f_9080.f_330[82 /*6*/])
	{
		return true;
	}
	return false;
}

bool func_177(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_178(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return true;
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return true;
		case 9:
			return func_178(8, uParam1, fParam2);
		case 10:
			return func_178(8, uParam1, fParam2);
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return true;
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return true;
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return true;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return true;
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return true;
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return true;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return true;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return true;
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return true;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return true;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return true;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return true;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return true;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return true;
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return true;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return true;
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return true;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return true;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return true;
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return true;
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return true;
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return true;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return true;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return true;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return true;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return true;
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return true;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return true;
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return true;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return true;
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return true;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return true;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return true;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return true;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return true;
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return true;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return true;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return true;
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return true;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return true;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return true;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return true;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return true;
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return true;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return true;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return true;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		default:
			break;
	}
	return false;
}

var func_179()
{
	var uVar0;

	func_189(&uVar0, UNK_0x4460E481B9E33ADA());
	func_188(&uVar0, UNK_0x8D199E381D262EEF());
	func_187(&uVar0, UNK_0xD8A54335F18763BA());
	func_182(&uVar0, UNK_0x972A296334C9D57B());
	func_181(&uVar0, UNK_0x118229AD063C3C1D());
	func_180(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_180(var uParam0, int iParam1)
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

void func_181(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_182(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_186(*uParam0);
	iVar1 = func_184(*uParam0);
	if (iParam1 < 1 || iParam1 > func_183(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_183(int iParam0, int iParam1)
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

var func_184(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_185(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_185(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_186(int iParam0)
{
	return iParam0 & 15;
}

void func_187(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_188(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_189(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_190(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_111638.f_18528[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_178(Global_111638.f_18528[iVar0], &vVar2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_191(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96134[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_9 = 0f;
				Global_96134[iVar0 /*29*/].f_12 = 0f;
				Global_96134[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_10 = 0f;
				Global_96134[iVar0 /*29*/].f_13 = 0f;
				Global_96134[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_11 = 0f;
				Global_96134[iVar0 /*29*/].f_14 = 0f;
				Global_96134[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_26 = 0f;
				Global_96134[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_27 = 0f;
				Global_96134[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_191(var uParam0)
{
	*uParam0 = -15;
}

int func_192()
{
	if (func_118(0))
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

void func_193(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_201(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_74())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_200(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_201(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_200(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_198(UNK_0xD803B885F5E47A62())) && !func_195(UNK_0xD803B885F5E47A62(), 0)) && !func_194()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_198(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_194()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_195(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_196(-1, 0) == 8;
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

int func_196(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_197();
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

int func_197()
{
	return Global_1312745;
}

bool func_198(bool bParam0)
{
	if (func_195(bParam0, 0))
	{
		return true;
	}
	if (func_199())
	{
		if (bParam0 == UNK_0xD803B885F5E47A62())
		{
			return true;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam0 /*421*/].f_195, 2))
	{
		return true;
	}
	return false;
}

bool func_199()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_200(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (UNK_0xFA2492ED90D43443() != bParam0 && bParam2)
		{
			UNK_0xF3B6BD1C0DC44D29(bParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_201(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7356, 13);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7356, 13);
	}
}

void func_202()
{
	UNK_0x16BBAF4B051E4BF5(joaat("ID2_EMISSIVE_LOD"));
	if (func_229(16))
	{
		if (!func_118(0))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 10))
			{
				UNK_0xAE1670DD12E839C3("JH_1_MCS_4_P1_ALT1", 8);
				func_210();
				func_115(0, 0, 1);
				iLocal_733 = UNK_0x7D6CA5F52B3748BF(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, 0, 1, 1, 1);
				iLocal_738 = UNK_0x544B74C043CE9948(Local_46.f_1.f_394, Local_46.f_1.f_397 * Vector(1.5f, 1.5f, 1.5f), 0f, 0, 7);
				UNK_0x10F3BFFADF2CE3DA(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397);
				UNK_0x17E8C6920A1E386F(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, false, 0);
				UNK_0x5D96D8530B3D0904(&bLocal_41, 10);
			}
			else if (UNK_0x75EECC9B0572F772())
			{
				UNK_0xA2888AACD3C45CCA("LESTER", true, 0, 0, false);
			}
			if (func_157(86))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, true))
				{
					if (func_151(0))
					{
						if (func_207(&iLocal_45, 0, 0, 0, 0) == 1)
						{
							func_200(1, 0, 1, 0);
							if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
							{
								UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
								UNK_0x34D79252800B23FF(0);
							}
							UNK_0x5D96D8530B3D0904(&bLocal_41, true);
							UNK_0x5D96D8530B3D0904(&bLocal_41, 2);
						}
					}
				}
			}
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_41, 2))
			{
				switch (iLocal_42)
				{
					case 0:
						if (UNK_0x9F4FE516EAACCFC5(iLocal_734))
						{
							UNK_0x9A8DDC7C522F5BF5(iLocal_734, 0);
						}
						if (UNK_0x9F4FE516EAACCFC5(iLocal_735))
						{
							UNK_0x9A8DDC7C522F5BF5(iLocal_735, 0);
						}
						iLocal_734 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), 724.4682f, -992.0684f, 24.25137f, 5.259225f, 0.000715f, 25.88918f, 44.13121f, 0, 2);
						iLocal_735 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), 724.3727f, -991.3205f, 24.43304f, 31.49925f, 0.000715f, -4.206256f, 44.13121f, 0, 2);
						if (UNK_0xC844350D5D58C99A(Global_95241.f_9[0]))
						{
							if (!UNK_0x437347B10A200C4B(Global_95241.f_9[0], 0))
							{
								bLocal_729 = Global_95241.f_9[0];
								UNK_0x73270B3C9CC833FD(bLocal_729, false, 1);
							}
						}
						if (UNK_0xC844350D5D58C99A(Global_95241[0]))
						{
							if (!UNK_0x437347B10A200C4B(Global_95241[0], 0))
							{
								bLocal_731 = Global_95241[0];
							}
						}
						iLocal_42++;
						break;
					case 1:
						func_193(1, 1, 0, 0, 0, 0);
						UNK_0xBFE31971E49FA500(0);
						UNK_0x8BCB70EB440DED83(0);
						if (UNK_0xC844350D5D58C99A(bLocal_731))
						{
							if (UNK_0xDF1306B443CD3D15(bLocal_731, 0))
							{
								UNK_0x1305278186D1C53E(iLocal_734, bLocal_731, 0f, 0f, 0f, 1);
							}
						}
						UNK_0xF1E4C781086FABC1(iLocal_735, iLocal_734, 5000, 1, 1);
						UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
						iLocal_43 = UNK_0x1C0640BA9A7327B3();
						iLocal_42++;
						break;
					case 2:
						if ((UNK_0x1C0640BA9A7327B3() - iLocal_43) > 1200)
						{
							if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
							{
								if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
								{
									if (UNK_0xDF1306B443CD3D15(bLocal_731, 0))
									{
										if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_731, 0))
										{
											UNK_0xDD353D0E9C789D0E(&iLocal_736);
											UNK_0x45F014B3D0466974(false, bLocal_731, 0);
											UNK_0x96167B03C5A77156(false, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
											UNK_0x75ABDC5F81978924(iLocal_736);
											UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
											UNK_0x78ADC381772E3D54(UNK_0x16F2683693E537C9(), iLocal_736);
										}
									}
								}
							}
							iLocal_42++;
						}
						break;
					case 3:
						if ((UNK_0x1C0640BA9A7327B3() - iLocal_43) > 2400)
						{
							if (!UNK_0x437347B10A200C4B(bLocal_729, 0))
							{
								if (UNK_0xC844350D5D58C99A(bLocal_731))
								{
									if (UNK_0xDF1306B443CD3D15(bLocal_731, 0))
									{
										if (UNK_0xC42A92762C58E1B9(bLocal_729, bLocal_731, 0))
										{
											UNK_0xDD353D0E9C789D0E(&iLocal_737);
											UNK_0x45F014B3D0466974(false, bLocal_731, 0);
											UNK_0x96167B03C5A77156(false, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
											UNK_0x75ABDC5F81978924(iLocal_737);
											UNK_0xA3BF0AA5A2608191(bLocal_729);
											UNK_0x78ADC381772E3D54(bLocal_729, iLocal_737);
										}
									}
								}
							}
							iLocal_42++;
						}
						break;
					case 4:
						if ((UNK_0x1C0640BA9A7327B3() - iLocal_43) > 5000)
						{
							UNK_0x0674E58A79778E99(&bLocal_41, 2);
						}
						break;
				}
			}
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_41, true) && !UNK_0xEAE0D21A50E6C7F4(bLocal_41, 2))
			{
				if (UNK_0xA0F4292EA950943D("JH_1_MCS_4_P1_ALT1"))
				{
					if (!UNK_0x22A8E52414415B76())
					{
						bLocal_730 = UNK_0x16F2683693E537C9();
						if (!UNK_0x437347B10A200C4B(bLocal_730, 0))
						{
							UNK_0x29E8331978B73E7F(bLocal_730, "Michael", 0, joaat("PLAYER_ZERO"), 0);
						}
						if (!UNK_0x437347B10A200C4B(bLocal_729, 0))
						{
							UNK_0x29E8331978B73E7F(bLocal_729, "Lester", 2, joaat("IG_LESTERCREST"), 0);
						}
						UNK_0x5D96D8530B3D0904(&bLocal_41, 9);
						UNK_0x29E8331978B73E7F(bLocal_732, "WalkingStick_Lester", 2, joaat("PROP_CS_WALKING_STICK"), 0);
						UNK_0x5D96D8530B3D0904(&bLocal_41, 8);
						func_206(&(Local_46.f_484), 0, 0, "MICHAEL", 1, 1);
						func_206(&(Local_46.f_484), 3, 0, "LESTER", 1, 1);
						func_72(1);
						iLocal_43 = UNK_0x1C0640BA9A7327B3();
						UNK_0x4C902758BEA97C68(2048);
					}
					else
					{
						func_121();
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 17))
						{
							if (!UNK_0x0F1CCD77290EE12F() && !UNK_0x7BCE0E6DD4A1F749())
							{
								UNK_0x82E51BCA72537B6C(800);
							}
							UNK_0x5D96D8530B3D0904(&bLocal_41, 17);
						}
						if (UNK_0xEAD40E09B5AA81FC())
						{
							UNK_0x5D96D8530B3D0904(&bLocal_41, 16);
						}
						if (UNK_0xEAE0D21A50E6C7F4(bLocal_41, 16))
						{
							if (UNK_0x757EF87A33649210())
							{
								if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 12))
								{
									func_115(0, 1, 1);
									UNK_0x5D96D8530B3D0904(&bLocal_41, 12);
								}
								if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 13))
								{
									func_115(0, 2, 1);
									UNK_0x5D96D8530B3D0904(&bLocal_41, 13);
								}
								if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 14))
								{
									func_115(0, 3, 1);
									UNK_0x5D96D8530B3D0904(&bLocal_41, 14);
								}
								if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 15))
								{
									func_115(0, 4, 1);
									UNK_0x5D96D8530B3D0904(&bLocal_41, 15);
								}
								func_204(&Local_46);
								if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, false))
								{
									func_203();
									UNK_0x5D96D8530B3D0904(&bLocal_41, false);
								}
							}
						}
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 5))
						{
							if (UNK_0x9F4FE516EAACCFC5(iLocal_734))
							{
								UNK_0xE3BB8E05FCEB3FBE(iLocal_734, false);
							}
							if (UNK_0x9F4FE516EAACCFC5(iLocal_735))
							{
								UNK_0xE3BB8E05FCEB3FBE(iLocal_735, false);
							}
							UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
							if (UNK_0x9F4FE516EAACCFC5(iLocal_735))
							{
								UNK_0x9A8DDC7C522F5BF5(iLocal_735, 0);
							}
							if (UNK_0x9F4FE516EAACCFC5(iLocal_735))
							{
								UNK_0x9A8DDC7C522F5BF5(iLocal_735, 0);
							}
							if (UNK_0xC844350D5D58C99A(bLocal_729))
							{
								UNK_0xEBA53F35D0085654(&bLocal_729);
							}
							UNK_0x5D96D8530B3D0904(&bLocal_41, 5);
						}
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 6))
						{
							if (iLocal_44 > 0)
							{
								UNK_0x5D96D8530B3D0904(&bLocal_41, 6);
							}
						}
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 12))
						{
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_43) > 14058)
							{
								func_115(0, 1, 1);
								UNK_0x5D96D8530B3D0904(&bLocal_41, 12);
							}
						}
						else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 13))
						{
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_43) > 22887)
							{
								func_115(0, 2, 1);
								UNK_0x5D96D8530B3D0904(&bLocal_41, 13);
							}
						}
						else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 14))
						{
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_43) > 27988)
							{
								func_115(0, 3, 1);
								func_204(&Local_46);
								UNK_0x5D96D8530B3D0904(&bLocal_41, 14);
							}
						}
						else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 15))
						{
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_43) > 42084)
							{
								func_115(0, 4, 1);
								UNK_0x5D96D8530B3D0904(&bLocal_41, 15);
							}
						}
						if (UNK_0xEAE0D21A50E6C7F4(bLocal_41, 8))
						{
							if (UNK_0xC844350D5D58C99A(UNK_0x6450C2A9FBA3C3BF("WalkingStick_Lester", joaat("PROP_CS_WALKING_STICK"))))
							{
								bLocal_732 = UNK_0x486F67509A82DB2D(UNK_0x6450C2A9FBA3C3BF("WalkingStick_Lester", joaat("PROP_CS_WALKING_STICK")));
								UNK_0x0674E58A79778E99(&bLocal_41, 8);
							}
						}
						if (UNK_0xEAE0D21A50E6C7F4(bLocal_41, 9))
						{
							if (UNK_0xC844350D5D58C99A(UNK_0x6450C2A9FBA3C3BF("Lester", joaat("IG_LESTERCREST"))))
							{
								bLocal_729 = UNK_0x940C1429253D3B1B(UNK_0x6450C2A9FBA3C3BF("Lester", joaat("IG_LESTERCREST")));
								UNK_0x0674E58A79778E99(&bLocal_41, 9);
							}
						}
						if (UNK_0x3148AE92ED70DC30("Michael", 0))
						{
							if (!UNK_0x437347B10A200C4B(bLocal_730, 0))
							{
								UNK_0x11AD11297DC58CC7(bLocal_730, true);
								UNK_0x4E885A246A9D983A(bLocal_730, 208, true);
								UNK_0x4E885A246A9D983A(bLocal_730, 118, false);
								UNK_0x4E885A246A9D983A(bLocal_730, 213, false);
								UNK_0x80AA372E04ED318D(bLocal_730, 708.8129f, -966.3621f, 29.3956f, 1f, 20000, 1193033728, 1056964608 /* Float: 0.5f */);
							}
						}
						if (UNK_0x3148AE92ED70DC30("Lester", 0))
						{
							if (!UNK_0x437347B10A200C4B(bLocal_729, 0))
							{
								if (UNK_0xC844350D5D58C99A(bLocal_732))
								{
									UNK_0x9F528B1B53FBC5D9(bLocal_732, bLocal_729, UNK_0x4A089F2B762B8D33(bLocal_729, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
							}
							if (!UNK_0x437347B10A200C4B(bLocal_729, 0))
							{
								UNK_0x11AD11297DC58CC7(bLocal_729, true);
								UNK_0x4E885A246A9D983A(bLocal_729, 208, true);
								UNK_0x4E885A246A9D983A(bLocal_729, 118, false);
								UNK_0x4E885A246A9D983A(bLocal_729, 213, false);
								UNK_0x80AA372E04ED318D(bLocal_729, 708.3643f, -963.9194f, 29.4181f, 1f, 20000, 1193033728, 1056964608 /* Float: 0.5f */);
							}
						}
						if (UNK_0xEABED1927EFB48CA(0))
						{
							if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, false))
							{
								func_203();
								UNK_0x5D96D8530B3D0904(&bLocal_41, false);
							}
							if (!UNK_0xEAE0D21A50E6C7F4(bLocal_41, 7))
							{
								if (!UNK_0x437347B10A200C4B(bLocal_730, 0))
								{
									UNK_0x4A4806F9D471E491(bLocal_730, false, 0);
								}
								if (!UNK_0x437347B10A200C4B(bLocal_729, 0))
								{
									UNK_0x4A4806F9D471E491(bLocal_729, false, 0);
								}
								if (UNK_0xC844350D5D58C99A(bLocal_732))
								{
									UNK_0x4A4806F9D471E491(bLocal_732, false, 0);
								}
								UNK_0x5D96D8530B3D0904(&bLocal_41, 7);
							}
							func_114(16, 0);
						}
						iLocal_44++;
					}
				}
			}
		}
		else
		{
			func_206(&(Local_46.f_484), 0, 0, "MICHAEL", 1, 1);
			func_206(&(Local_46.f_484), 3, 0, "LESTER", 1, 1);
			if (func_151(0))
			{
				if (func_207(&iLocal_45, 0, 0, 0, 0) == 1)
				{
					UNK_0x5D96D8530B3D0904(&bLocal_41, true);
				}
			}
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_41, true))
			{
				func_203();
				func_114(16, 0);
			}
		}
	}
	else
	{
		if (UNK_0xA0F4292EA950943D("JH_1_MCS_4_P1_ALT1"))
		{
			UNK_0x5C8D148FC238F38A();
		}
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_41, 10))
		{
			UNK_0x0674E58A79778E99(&bLocal_41, 10);
		}
	}
}

void func_203()
{
	func_85(1, 0, 1);
	func_85(2, 0, 1);
	func_211(&Local_46);
	func_67(&Local_46);
}

void func_204(var uParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, true))
	{
		if (!UNK_0x22A8E52414415B76())
		{
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				func_69(uParam0, 0);
			}
		}
		func_205(uParam0);
		UNK_0x0674E58A79778E99(&(uParam0->f_449), true);
		UNK_0x0674E58A79778E99(&Global_94753, *uParam0);
	}
}

void func_205(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (UNK_0xC844350D5D58C99A(uParam0->f_428[iVar0]))
		{
			UNK_0xF690C84DADBB3551(&(uParam0->f_428[iVar0]));
		}
		iVar0++;
	}
}

void func_206(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = bParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				UNK_0xA245D14CC59CDD36(bParam2, 0);
			}
			else
			{
				UNK_0xA245D14CC59CDD36(bParam2, 1);
			}
		}
		if (!UNK_0xEB6A8945D1AC98A1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				UNK_0x971EF1DE410C56CF(bParam2, 0);
			}
			else
			{
				UNK_0x971EF1DE410C56CF(bParam2, 1);
			}
		}
	}
}

int func_207(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_209(0))
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		UNK_0x62DE699599F0417E(UNK_0xA30EC016B12C03E4(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			UNK_0x4C7B0415764B64BA(8);
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
		if (!func_151(iParam2))
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
			func_208(iParam0, iParam4);
		}
	}
	return 2;
}

void func_208(int iParam0, int iParam1)
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

bool func_209(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_151(iParam0))
	{
		return false;
	}
	return true;
}

void func_210()
{
	Global_98783 = 1;
}

void func_211(var uParam0)
{
	if (func_10(2, *uParam0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, true))
		{
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 2))
			{
				func_69(uParam0, func_212(*uParam0));
				func_85(2, *uParam0, 0);
			}
			else
			{
				func_123(uParam0);
				func_85(2, *uParam0, 0);
			}
		}
	}
}

bool func_212(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_229(18);
		case 1:
			return func_229(22);
		case 2:
			return func_229(40);
		case 3:
			return func_229(8);
		case 4:
			return func_229(26);
		default:
			break;
	}
	return false;
}

int func_213()
{
	return Global_76884;
}

bool func_214(var uParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, true))
	{
		func_204(uParam0);
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, false))
	{
		func_215(uParam0);
	}
	return true;
}

void func_215(var uParam0)
{
	UNK_0x42740B44BA8D7B43("HEIST_BULLETIN_BOARD");
	UNK_0x71199B01895C6202(joaat("PROP_LD_PLANNING_PIN_01"));
	UNK_0x71199B01895C6202(joaat("PROP_LD_PLANNING_PIN_02"));
	UNK_0x71199B01895C6202(joaat("PROP_LD_PLANNING_PIN_03"));
	if (uParam0->f_413 != 0)
	{
		UNK_0xE17FDF9E3068281B(&(uParam0->f_413));
	}
	if (uParam0->f_414 != 0)
	{
		UNK_0xE17FDF9E3068281B(&(uParam0->f_414));
	}
	UNK_0x11CCD0ACA866C6C5(5, 0);
	UNK_0x0674E58A79778E99(&Global_94754, *uParam0);
	UNK_0x0674E58A79778E99(&(uParam0->f_449), false);
}

void func_216(var uParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		fVar0 = SYSTEM::VDIST2(uParam0->f_401, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true));
		if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, true))
		{
			func_224(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || UNK_0xEAE0D21A50E6C7F4(Global_94753, *uParam0))
		{
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, false))
			{
				if (func_223(uParam0))
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_94753, *uParam0))
					{
						if (UNK_0xEAE0D21A50E6C7F4(Global_94755, *uParam0))
						{
							func_218(uParam0);
						}
					}
					else
					{
						func_218(uParam0);
					}
				}
			}
			else
			{
				func_217(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !UNK_0xEAE0D21A50E6C7F4(Global_94753, *uParam0))
		{
			if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, false))
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, true))
				{
					func_204(uParam0);
				}
				func_215(uParam0);
			}
		}
	}
}

void func_217(var uParam0)
{
	if (!UNK_0x1D6041CB88128065())
	{
		return;
	}
	UNK_0xD7992BEF7A9D109E(&(uParam0->f_1.f_272), 5);
	UNK_0xAE317D00A5A55DF6("HEIST_BULLETIN_BOARD", 0, -1);
	if (*uParam0 != 1)
	{
		UNK_0x523BCC9DC80CD82F(joaat("PROP_LD_PLANNING_PIN_01"));
		UNK_0x523BCC9DC80CD82F(joaat("PROP_LD_PLANNING_PIN_02"));
		UNK_0x523BCC9DC80CD82F(joaat("PROP_LD_PLANNING_PIN_03"));
	}
	uParam0->f_413 = UNK_0x5275223F099DEF26(&(uParam0->f_1.f_268));
	uParam0->f_414 = UNK_0x5275223F099DEF26("INSTRUCTIONAL_BUTTONS");
	UNK_0x5D96D8530B3D0904(&Global_94752, *uParam0);
	UNK_0x5D96D8530B3D0904(&(uParam0->f_449), false);
}

void func_218(var uParam0)
{
	bool bVar0;

	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, true))
	{
		bVar0 = false;
		while (bVar0 < uParam0->f_1.f_96)
		{
			func_36(uParam0, bVar0);
			bVar0++;
		}
		func_33(uParam0);
		func_31(uParam0);
		func_222(uParam0);
		func_221(uParam0);
		func_219(uParam0);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_449), true);
	}
}

void func_219(var uParam0)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (func_32(*uParam0, uParam0->f_1.f_75[iVar0]))
		{
			switch ((iVar0 % 3))
			{
				case 0:
					bVar1 = joaat("PROP_LD_PLANNING_PIN_01");
					break;
				case 1:
					bVar1 = joaat("PROP_LD_PLANNING_PIN_02");
					break;
				case 2:
					bVar1 = joaat("PROP_LD_PLANNING_PIN_03");
					break;
			}
			fVar2 = (SYSTEM::TO_FLOAT((UNK_0x09AC81E49EA267F7(false, 65535) - 32767)) / 4000f);
			fVar3 = (SYSTEM::TO_FLOAT((UNK_0x09AC81E49EA267F7(false, 65535) - 32767)) / 4000f);
			vVar4 = { func_220(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
			uParam0->f_428[iVar0] = UNK_0x7707E48765093646(bVar1, vVar4, true, true, false);
			UNK_0xC023D1C4BF532815(uParam0->f_428[iVar0], fVar2, 0f, (uParam0->f_404 + fVar3), 2, 1);
			UNK_0x73270B3C9CC833FD(uParam0->f_428[iVar0], true, 0);
			UNK_0xE121AE1BBF90E186(uParam0->f_428[iVar0], true);
			UNK_0x20641932E5104B25(uParam0->f_428[iVar0], false, 0);
			UNK_0x08543B8F6DBE0B08(uParam0->f_428[iVar0], 0);
			UNK_0x1E9649458B15960F(uParam0->f_428[iVar0], true);
		}
		iVar0++;
	}
	UNK_0x0674E58A79778E99(&Global_94755, *uParam0);
}

Vector3 func_220(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;

	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_404;
	vVar7 = { uParam0->f_401 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	return vVar7;
}

void func_221(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_117)
	{
		bVar2 = uParam0->f_1.f_186[iVar0];
		bVar3 = UNK_0xEAE0D21A50E6C7F4(Global_111638.f_1.f_120[iVar1], bVar2);
		if (uParam0->f_1.f_141[iVar0 /*2*/] == 0 && uParam0->f_1.f_141[iVar0 /*2*/].f_1 == 0)
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_HEIST_ASSET");
			UNK_0x3CAEA85DA607305E(uParam0->f_1.f_118[iVar0]);
			UNK_0x1200CC973A2399C8(bVar3);
			UNK_0x7E60D21B163E9D56();
		}
		else
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_HEIST_ASSET");
			UNK_0x3CAEA85DA607305E(uParam0->f_1.f_118[iVar0]);
			UNK_0x1200CC973A2399C8(bVar3);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_141[iVar0 /*2*/]));
			UNK_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_141[iVar0 /*2*/].f_1));
			UNK_0x7E60D21B163E9D56();
		}
		iVar0++;
	}
}

void func_222(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "CREATE_VIEW");
	UNK_0x3CAEA85DA607305E(uParam0->f_415 + 1);
	UNK_0x3CAEA85DA607305E(2);
	UNK_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_14));
	UNK_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_14.f_1));
	UNK_0x7E60D21B163E9D56();
	iVar0 = *uParam0;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < uParam0->f_1.f_209)
	{
		if (func_32(iVar0, uParam0->f_1.f_248[iVar2]))
		{
			bVar3 = false;
			if (func_32(iVar0, uParam0->f_1.f_258[iVar2]))
			{
				bVar3 = true;
			}
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT");
			UNK_0x3CAEA85DA607305E(uParam0->f_415 + 1);
			UNK_0x3CAEA85DA607305E(bVar1);
			UNK_0x3CAEA85DA607305E(bVar3);
			func_8(&(uParam0->f_1.f_211[iVar2 /*4*/]));
			UNK_0x7E60D21B163E9D56();
			bVar1++;
		}
		iVar2++;
	}
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "DISPLAY_VIEW");
	UNK_0x3CAEA85DA607305E(uParam0->f_415 + 1);
	UNK_0x7E60D21B163E9D56();
	if (func_32(*uParam0, uParam0->f_1.f_210))
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
		UNK_0x3CAEA85DA607305E(uParam0->f_415 + 1);
		UNK_0x1200CC973A2399C8(true);
		UNK_0x7E60D21B163E9D56();
	}
	else
	{
		UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_VIEW");
		UNK_0x3CAEA85DA607305E(uParam0->f_415 + 1);
		UNK_0x1200CC973A2399C8(false);
		UNK_0x7E60D21B163E9D56();
	}
}

bool func_223(var uParam0)
{
	if (!UNK_0x83D8570832F172A7(uParam0->f_413))
	{
		return false;
	}
	if (!UNK_0x83D8570832F172A7(uParam0->f_414))
	{
		return false;
	}
	if (!UNK_0x67C1D9E5B91B2E37(5))
	{
		return false;
	}
	if (UNK_0x1D6041CB88128065())
	{
		if (!UNK_0xAE317D00A5A55DF6("HEIST_BULLETIN_BOARD", 0, -1))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	if (*uParam0 != 1)
	{
		if ((!UNK_0xB87F6CF6E5628C67(joaat("PROP_LD_PLANNING_PIN_01")) || !UNK_0xB87F6CF6E5628C67(joaat("PROP_LD_PLANNING_PIN_02"))) || !UNK_0xB87F6CF6E5628C67(joaat("PROP_LD_PLANNING_PIN_03")))
		{
			return false;
		}
	}
	UNK_0x5D96D8530B3D0904(&Global_94754, *uParam0);
	return true;
}

void func_224(var uParam0)
{
	float fVar0;
	float fVar1;

	if (func_32(*uParam0, 0))
	{
		func_225(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0.5f);
		fVar1 = (uParam0->f_1.f_5 * 0.5f);
		UNK_0x0103165890FA9E7F(uParam0->f_413, uParam0->f_401 + Vector(fVar1, (fVar0 * SYSTEM::COS((90f - uParam0->f_404))), (fVar0 * SYSTEM::SIN((90f - uParam0->f_404)))), 180f, 0f, uParam0->f_404, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}
}

void func_225(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;

	if (UNK_0xEAE0D21A50E6C7F4(Global_94752, *uParam0))
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 16);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 15);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 14);
		UNK_0x0674E58A79778E99(&Global_94752, *uParam0);
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 16))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_117)
		{
			bVar1 = uParam0->f_1.f_186[iVar0];
			bVar2 = func_32(*uParam0, bVar1);
			UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SHOW_HEIST_ASSET");
			UNK_0x3CAEA85DA607305E(uParam0->f_1.f_118[iVar0]);
			UNK_0x1200CC973A2399C8(bVar2);
			UNK_0x3CAEA85DA607305E(false);
			UNK_0x7E60D21B163E9D56();
			iVar0++;
		}
		UNK_0x0674E58A79778E99(&(uParam0->f_449), 16);
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 15))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_33)
		{
			if (func_32(*uParam0, uParam0->f_1.f_75[iVar0]))
			{
				if (!UNK_0xC844350D5D58C99A(uParam0->f_428[iVar0]))
				{
					switch ((iVar0 % 3))
					{
						case 0:
							bVar3 = joaat("PROP_LD_PLANNING_PIN_01");
							break;
						case 1:
							bVar3 = joaat("PROP_LD_PLANNING_PIN_02");
							break;
						case 2:
							bVar3 = joaat("PROP_LD_PLANNING_PIN_03");
							break;
					}
					fVar4 = (SYSTEM::TO_FLOAT((UNK_0x09AC81E49EA267F7(false, 65535) - 32767)) / 4000f);
					fVar5 = (SYSTEM::TO_FLOAT((UNK_0x09AC81E49EA267F7(false, 65535) - 32767)) / 4000f);
					vVar6 = { func_220(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
					uParam0->f_428[iVar0] = UNK_0x7707E48765093646(bVar3, vVar6, true, true, false);
					UNK_0xC023D1C4BF532815(uParam0->f_428[iVar0], fVar4, 0f, (uParam0->f_404 + fVar5), 2, 1);
					UNK_0x73270B3C9CC833FD(uParam0->f_428[iVar0], true, 0);
					UNK_0xE121AE1BBF90E186(uParam0->f_428[iVar0], true);
					UNK_0x20641932E5104B25(uParam0->f_428[iVar0], false, 0);
					UNK_0x08543B8F6DBE0B08(uParam0->f_428[iVar0], 0);
					UNK_0x1E9649458B15960F(uParam0->f_428[iVar0], true);
				}
			}
			else if (!UNK_0xC844350D5D58C99A(uParam0->f_428[iVar0]))
			{
				UNK_0xF690C84DADBB3551(&(uParam0->f_428[iVar0]));
			}
			iVar0++;
		}
		UNK_0x0674E58A79778E99(&(uParam0->f_449), 15);
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_449, 14))
	{
		func_226(uParam0);
		func_33(uParam0);
		func_222(uParam0);
		UNK_0x0674E58A79778E99(&(uParam0->f_449), 14);
	}
}

void func_226(var uParam0)
{
	UNK_0x7E60C62A7CE58FC8(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	UNK_0x3CAEA85DA607305E(uParam0->f_415 + 1);
	UNK_0x7E60D21B163E9D56();
}

bool func_227(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_228(int iParam0)
{
	int iVar0;

	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	if (Global_92729[iParam0 /*2*/])
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_89496)
	{
		if (Global_89496[iVar0 /*5*/] != -1)
		{
			if (Global_76891.f_109[Global_89496[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_229(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_230(var uParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;

	*uParam0 = iParam1;
	vVar0 = { Global_94690[uParam0->f_1.f_1 /*15*/].f_3 };
	fVar3 = Global_94690[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_401 = { vVar0 };
	uParam0->f_404 = fVar3;
	uParam0->f_405 = { vVar0 + Vector(0f, (-uParam0->f_1.f_8 * SYSTEM::COS((360f - fVar3))), (-uParam0->f_1.f_8 * SYSTEM::SIN((360f - fVar3)))) };
	uParam0->f_408 = { -0.85f, 0f, fVar3 };
	UNK_0x5D96D8530B3D0904(&(uParam0->f_449), 4);
	uParam0->f_415 = uParam0->f_1.f_96;
	uParam0->f_416 = -1;
	UNK_0x0674E58A79778E99(&(uParam0->f_449), false);
	UNK_0x0674E58A79778E99(&(uParam0->f_449), true);
	UNK_0x0674E58A79778E99(&(uParam0->f_449), 2);
	uParam0->f_464 = 0;
	uParam0->f_451 = -1;
}

void func_231(var uParam0, int iParam1)
{
	func_240(uParam0, 1, "HEIST_JEWELLERY", "BOARD0", "JHFAUD", "CRWAUD", 2, 2, 7, 8, iParam1, 708.9957f, -965.256f, 31.39533f, 5.5f, 6.25f, 4f);
	func_239(uParam0, 750, 540, 2.1f, 1.47f, 3.6f, 2.05f, 2f, 375, 250, 116, 420, 248, 425, 380, 425, 510, 430, 0, 0, 650, 300, 0, 70, 684, 106);
	func_238(uParam0, 20f, 22f, 28f);
	func_237(uParam0, "BRD_H_01", "BRD_H_02", "BRD_H_03", "BRD_H_04", "JHFP1", "JHFP4", "JHP11", "JHHUR");
	func_236(uParam0, 1, "CRW_GM", "");
	func_236(uParam0, 4, "CRW_NR", "");
	func_236(uParam0, 6, "CRW_PH", "");
	func_236(uParam0, 7, "CRW_CF", "");
	func_236(uParam0, 8, "CRW_ET", "");
	func_236(uParam0, 9, "CRW_KD", "");
	func_236(uParam0, 10, "CRW_PM", "CRM_PM");
	func_236(uParam0, 12, "CRW_RL", "CRM_RL");
	func_235(uParam0, 0, 0, 0, 0);
	func_235(uParam0, 6, 0, 0, 0);
	func_235(uParam0, 1, 0, 0, 0);
	func_235(uParam0, 3, 1, 0, 0);
	func_235(uParam0, 11, 2, 0, 0);
	func_235(uParam0, 5, 3, 0, 0);
	func_235(uParam0, 9, 3, 0, 0);
	func_235(uParam0, 2, 4, 0, 0);
	func_235(uParam0, 7, 9, 0, 0);
	func_235(uParam0, 10, 10, 0, 0);
	func_234(uParam0, 2, 2, "H_TD_SEC");
	func_234(uParam0, 2, 2, "H_TD_PHOTO");
	func_234(uParam0, 2, 5, "H_TD_PLAN");
	func_234(uParam0, 2, 6, "H_TD_CREW");
	func_234(uParam0, 7, 11, "H_TD_CARB");
	func_234(uParam0, 8, 9, "H_TD_BUGS");
	func_234(uParam0, 8, 10, "H_TD_GAS");
	func_233(uParam0, 0, 203, 74);
	func_233(uParam0, 1, 368, 181);
	func_233(uParam0, 1, 556, 189);
	func_233(uParam0, 2, 690, 63);
	func_233(uParam0, 2, 673, 308);
	func_233(uParam0, 2, 671, 406);
	func_233(uParam0, 3, 245, 244);
	func_233(uParam0, 4, 70, 68);
	func_232(uParam0, 0, "JHP12", 214, 165, 1);
	func_232(uParam0, 0, "JHP13", 254, 46, 1);
	func_232(uParam0, 0, "JHP14", 70, 97, 1);
	func_232(uParam0, 0, "JHP15", 254, 275, 1);
	func_232(uParam0, 0, "JHP16", 457, 165, 1);
}

void func_232(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;

	if (uParam0->f_369 < 7)
	{
		StringCopy(&Var0, sParam2, 8);
		uParam0->f_386[uParam0->f_369] = iParam1;
		uParam0->f_371[uParam0->f_369 /*2*/] = iParam3;
		uParam0->f_371[uParam0->f_369 /*2*/].f_1 = iParam4;
		uParam0->f_280[uParam0->f_369 + 4 /*2*/] = { Var0 };
		if (bParam5)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_370), uParam0->f_369);
		}
		uParam0->f_369++;
	}
}

void func_233(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_33 < 20)
	{
		uParam0->f_75[uParam0->f_33] = iParam1;
		uParam0->f_34[uParam0->f_33 /*2*/] = iParam2;
		uParam0->f_34[uParam0->f_33 /*2*/].f_1 = iParam3;
		uParam0->f_33++;
	}
}

void func_234(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	struct<8> Var0;

	if (uParam0->f_209 < 9)
	{
		StringCopy(&Var0, sParam3, 32);
		uParam0->f_248[uParam0->f_209] = iParam1;
		uParam0->f_258[uParam0->f_209] = iParam2;
		MemCopy(&(uParam0->f_211[uParam0->f_209 /*4*/]), {Var0}, 4);
		uParam0->f_209++;
	}
}

void func_235(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (uParam0->f_117 < 22)
	{
		uParam0->f_118[uParam0->f_117] = iParam1;
		uParam0->f_186[uParam0->f_117] = iParam2;
		uParam0->f_141[uParam0->f_117 /*2*/] = iParam3;
		uParam0->f_141[uParam0->f_117 /*2*/].f_1 = iParam4;
		uParam0->f_117++;
	}
}

void func_236(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	struct<2> Var0;
	struct<2> Var2;

	StringCopy(&Var0, sParam2, 8);
	StringCopy(&Var2, bParam3, 8);
	uParam0->f_304[iParam1 /*2*/] = { Var0 };
	if (!UNK_0x7F8A39872A07D2CE(bParam3, ""))
	{
		switch (iParam1)
		{
			case 10:
				uParam0->f_304[14 /*2*/] = { Var2 };
				break;
			case 13:
				uParam0->f_304[16 /*2*/] = { Var2 };
				break;
			case 12:
				uParam0->f_304[15 /*2*/] = { Var2 };
				break;
			case 11:
				uParam0->f_304[17 /*2*/] = { Var2 };
				break;
			default:
				break;
		}
	}
}

void func_237(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	struct<4> Var0;
	struct<4> Var4;
	struct<4> Var8;
	struct<4> Var12;
	struct<2> Var16;
	struct<2> Var18;
	struct<2> Var20;
	struct<2> Var22;

	StringCopy(&Var0, sParam1, 16);
	StringCopy(&Var4, sParam2, 16);
	StringCopy(&Var8, sParam3, 16);
	StringCopy(&Var12, sParam4, 16);
	StringCopy(&Var16, sParam5, 8);
	StringCopy(&Var18, sParam6, 8);
	StringCopy(&Var20, sParam7, 8);
	StringCopy(&Var22, sParam8, 8);
	uParam0->f_20[0 /*4*/] = { Var0 };
	uParam0->f_20[1 /*4*/] = { Var4 };
	uParam0->f_108[0 /*4*/] = { Var8 };
	uParam0->f_108[1 /*4*/] = { Var12 };
	uParam0->f_280[1 /*2*/] = { Var16 };
	uParam0->f_280[2 /*2*/] = { Var18 };
	uParam0->f_280[0 /*2*/] = { Var20 };
	uParam0->f_280[3 /*2*/] = { Var22 };
}

void func_238(var uParam0, float fParam1, float fParam2, float fParam3)
{
	uParam0->f_9 = fParam1;
	uParam0->f_10 = fParam2;
	uParam0->f_11 = fParam3;
}

void func_239(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = fParam3;
	uParam0->f_5 = fParam4;
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_12 = iParam8;
	uParam0->f_12.f_1 = iParam9;
	uParam0->f_97[0 /*2*/] = iParam10;
	uParam0->f_97[0 /*2*/].f_1 = iParam11;
	uParam0->f_97[1 /*2*/] = iParam12;
	uParam0->f_97[1 /*2*/].f_1 = iParam13;
	uParam0->f_97[2 /*2*/] = iParam14;
	uParam0->f_97[2 /*2*/].f_1 = iParam15;
	uParam0->f_97[3 /*2*/] = iParam16;
	uParam0->f_97[3 /*2*/].f_1 = iParam17;
	uParam0->f_97[4 /*2*/] = iParam18;
	uParam0->f_97[4 /*2*/].f_1 = iParam19;
	uParam0->f_16 = iParam20;
	uParam0->f_16.f_1 = iParam21;
	uParam0->f_18 = iParam22;
	uParam0->f_18.f_1 = iParam23;
	uParam0->f_14 = iParam24;
	uParam0->f_14.f_1 = iParam25;
}

void func_240(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, vector3 vParam11, vector3 vParam14)
{
	uParam0->f_1 = iParam1;
	StringCopy(&(uParam0->f_268), sParam2, 16);
	StringCopy(&(uParam0->f_272), sParam3, 16);
	StringCopy(&(uParam0->f_276), sParam4, 8);
	StringCopy(&(uParam0->f_278), sParam5, 8);
	uParam0->f_29 = iParam6;
	uParam0->f_30[0] = iParam8;
	uParam0->f_30[1] = iParam9;
	uParam0->f_210 = iParam7;
	uParam0->f_96 = iParam10;
	uParam0->f_394 = { vParam11 };
	uParam0->f_397 = { vParam14 };
}

int func_241(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_242(int iParam0)
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

void func_243()
{
	if (UNK_0xA0F4292EA950943D("JH_1_MCS_4P2") || UNK_0xA0F4292EA950943D("JH_1_MCS_4_P1_ALT1"))
	{
		UNK_0x5C8D148FC238F38A();
	}
	func_114(16, 0);
	func_114(17, 0);
	func_114(18, 0);
	func_85(1, 0, 0);
	func_85(2, 0, 0);
	UNK_0x2952D66A502EA873(iLocal_733, 0);
	if (iLocal_738 != -1)
	{
		if (UNK_0x49083FDB78AC0509(iLocal_738))
		{
			UNK_0xDDABC98CFF1A4C60(iLocal_738);
		}
	}
	UNK_0xEFED0CD6E25037B9();
	UNK_0x17E8C6920A1E386F(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, true, 0);
	UNK_0x34D79252800B23FF(5);
	if (iLocal_45 != -1)
	{
		func_161(&iLocal_45);
	}
	while (!func_214(&Local_46))
	{
		SYSTEM::WAIT(0);
	}
	UNK_0x10FAF14A60A0DBE1();
}

