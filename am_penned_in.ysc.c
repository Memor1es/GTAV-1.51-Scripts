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
	struct<199> Local_80 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 1, 0, 5, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744705981, -178150202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1 } ;
	struct<8> Local_279[32];
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	var uLocal_544 = 1;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	int iLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	int iLocal_558 = 0;
	vector3 vLocal_559 = { 0f, 0f, 0f };
	vector3 vLocal_562 = { 0f, 0f, 0f };
	int iLocal_565 = 0;
	float fLocal_566 = 0f;
	float fLocal_567 = 0f;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	struct<14> Local_573 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	vector3 vLocal_591[217] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_1243[217] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_1461 = 0;
	float fLocal_1462 = 0f;
	float fLocal_1463 = 0f;
	float fLocal_1464 = 0f;
	int iLocal_1465 = 0;
	struct<105> Local_1466 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0 } ;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = -1;
	var uLocal_1576 = -1;
	var uLocal_1577 = -1;
	var uLocal_1578 = -1;
	var uLocal_1579 = -1;
	var uLocal_1580 = -1;
	var uLocal_1581 = 0;
	var uLocal_1582 = 32;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	void fLocal_1999 = 0;
	int iLocal_2000 = 0;
	int iLocal_2001 = 0;
	int iLocal_2002 = 0;
	int iLocal_2003 = 0;
	int iLocal_2004 = 0;
	int iLocal_2005 = 0;
	vector3 vLocal_2006 = { 0f, 0f, 0f };
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 12;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
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
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
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
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
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
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
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
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
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
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
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
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
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
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
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
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
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
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
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
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
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
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
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
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
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
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
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
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
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
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
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
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
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
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
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
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
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
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
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
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
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
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
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
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
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
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
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
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
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
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
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
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
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
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
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
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
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
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
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
	var uLocal_2712 = 1065353216;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	int iLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	struct<12> Local_2722 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	bool bLocal_2744 = false;
	int iLocal_2745 = 0;
	int iLocal_2746 = 0;
	int iLocal_2747 = 0;
	bool bLocal_2748 = false;
	int iLocal_2749 = 0;
	bool bLocal_2750 = false;
	vector3 vLocal_2751 = { 0f, 0f, 0f };
	float fLocal_2754 = 0f;
	float fLocal_2755 = 0f;
	vector3 vLocal_2756 = { 0f, 0f, 0f };
	float fLocal_2759 = 0f;
	int iLocal_2760 = 0;
	int iLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	int iLocal_2764 = 0;
	var uLocal_2765 = 0;
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
	bLocal_2748 = -1;
	iLocal_2749 = -1;
	fLocal_2755 = -1f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1274(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_1221(ScriptParam_0);
	}
	else
	{
		func_1160();
	}
	while (true)
	{
		func_1159();
		if (func_1152() || func_1149(24))
		{
			func_1160();
		}
		if (func_1148())
		{
			func_1160();
		}
		func_1129();
		if (Local_80.f_197 == 2)
		{
			if (func_1125(1))
			{
				func_1068(0, 5, 0, !MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0), -1, -1, -1, -1, -1, 0);
				func_1160();
			}
		}
		switch (func_1067(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_1066() == 1)
				{
					if (func_1065())
					{
						if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 7))
						{
							if (func_1064(11))
							{
								MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 7);
							}
						}
						func_1061();
						vLocal_559 = { vLocal_591[0 /*3*/] };
						fLocal_566 = func_1060();
						fLocal_567 = fLocal_566;
						iLocal_558 = 0;
						uLocal_568 = func_1059();
						if (Local_80.f_197 == 2)
						{
							func_1057();
						}
						if (!func_1004(1))
						{
							func_1002(func_1003(), 1);
							func_997();
						}
						func_990(136, Local_80.f_167, 0, 0);
						if (Local_80.f_197 == 2)
						{
							func_906(-1, 0, Local_80.f_197 == 2, 200, 0, 0);
							if (func_901())
							{
								MISC::SET_BIT(&iLocal_538, 1);
							}
						}
						Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/] = 1;
					}
				}
				else if (func_1066() == 4)
				{
					Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/] = 3;
				}
				break;
			case 1:
				if (func_1066() == 1)
				{
					func_894();
					func_736();
					func_732();
					func_731();
					func_686();
					func_619();
					func_433();
					func_432();
					func_428();
					func_424();
					func_408();
				}
				else if (func_1066() == 4)
				{
					Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/] = 3;
				}
				break;
			case 3:
				func_407(&(Local_80.f_22));
				if (func_406(&(Local_80.f_22)))
				{
					Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/] = 4;
				}
				break;
			case 2:
				Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/] = 4;
			case 4:
				func_1160();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (Local_80.f_197 == 2)
			{
				if (func_405())
				{
					if (func_1066() < 4)
					{
						Local_80 = 4;
					}
				}
			}
			switch (func_1066())
			{
				case 0:
					if (func_392(&(Local_80.f_167)))
					{
						func_390();
						if (func_1065())
						{
							func_1061();
							Local_80.f_184.f_7 = func_389();
							Local_80.f_8 = func_1060();
							Local_80.f_166 = func_1059();
							Local_80 = 1;
							func_388(&(Local_80.f_32), 0, 0);
							func_385(func_387(136, Local_80.f_167, 0, 0));
						}
					}
					break;
				case 1:
					func_375();
					func_28();
					func_3();
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
	bool bVar0;
	int iVar1;

	if (Local_80.f_21 >= 2)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (Local_279[iVar1 /*8*/].f_7 < 5)
				{
					bVar0 = false;
				}
			}
			iVar1++;
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

void func_3()
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (Local_80.f_197 == 2)
	{
		return;
	}
	iVar1 = 1;
	if (Local_80.f_21 > 0)
	{
		if (func_27())
		{
			iVar0 = PLAYER::GET_PLAYER_PED(Local_80.f_184.f_7);
		}
		else
		{
			func_26();
		}
		if (!func_25(vLocal_559, Local_80.f_194, 1056964608 /* Float: 0.5f */, 0))
		{
			if (!func_24(&uLocal_2762))
			{
				func_388(&uLocal_2762, 0, 0);
			}
			else if (func_23(&uLocal_2762, 500, 0))
			{
				Local_80.f_194 = { vLocal_559 };
				func_22(&uLocal_2762);
			}
		}
		fVar2 = Global_262145.f_11159;
		func_4(&(Local_80.f_184), iVar0, Local_80.f_194, iVar1, Global_262145.f_11157, Global_262145.f_11158, fVar2, 4352);
	}
}

void func_4(var uParam0, int iParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;

	switch (func_21(uParam0))
	{
		case 0:
			if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) == 0)
			{
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
			}
			func_20(uParam0, 1);
			break;
		case 1:
			if (!func_19(vParam2))
			{
				if (func_13(uParam0, func_18(vParam2), func_17()))
				{
					if (func_9(uParam0))
					{
						func_7(uParam0);
						func_20(uParam0, 2);
					}
				}
			}
			break;
		case 2:
			if (bParam5)
			{
				if (func_6(uParam0))
				{
					iVar0 = NETWORK::NET_TO_PED(uParam0->f_3);
					iVar1 = NETWORK::NET_TO_VEH(uParam0->f_2);
					func_5(uParam0, iVar0, iVar1, iParam1, fParam6, fParam7, iParam8, iParam9);
				}
			}
			break;
		default:
			break;
	}
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, int iParam6, int iParam7)
{
	bool bVar0;

	if (!func_24(&(uParam0->f_8)))
	{
		func_388(&(uParam0->f_8), 0, 0);
	}
	else if (func_23(&(uParam0->f_8), 5000, 0))
	{
		func_22(&(uParam0->f_8));
		bVar0 = true;
	}
	if ((!PED::IS_PED_INJURED(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam2, false)) && !PED::IS_PED_INJURED(iParam3))
	{
		if (((TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1273030092) != 0) || iParam3 != uParam0->f_4) || bVar0)
		{
			if (iParam3 != uParam0->f_4)
			{
				uParam0->f_4 = iParam3;
				TASK::CLEAR_PED_TASKS(iParam1);
			}
			TASK::TASK_VEHICLE_HELI_PROTECT(iParam1, iParam2, iParam3, fParam4, 32, fParam5, iParam6, iParam7);
		}
	}
}

bool func_6(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_2) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3))
	{
		return true;
	}
	return false;
}

void func_7(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_ENT(uParam0->f_2);
	ENTITY::SET_ENTITY_PROOFS(iVar0, true, true, true, true, false, false, false, false);
	ENTITY::_SET_ENTITY_SOMETHING(iVar0, false);
	iVar1 = NETWORK::NET_TO_VEH(uParam0->f_2);
	VEHICLE::_0x7D6F9A3EF26136A0(iVar1, false, false);
	VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(iVar1, false);
	iVar2 = NETWORK::NET_TO_ENT(uParam0->f_3);
	ENTITY::SET_ENTITY_INVINCIBLE(iVar2, true);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iVar1, true, true, false);
	VEHICLE::SET_HELI_TURBULENCE_SCALAR(iVar1, 0.3f);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(iVar1);
	PHYSICS::ACTIVATE_PHYSICS(iVar1);
	func_8(1);
}

void func_8(bool bParam0)
{
	if (bParam0)
	{
		if (Global_2359296 == 0)
		{
			Global_2359296 = 1;
		}
	}
	else if (Global_2359296 == 1)
	{
		Global_2359296 = 0;
	}
}

bool func_9(var uParam0)
{
	int iVar0;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3))
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_1);
	if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
	{
		if (func_11(uParam0->f_2))
		{
			iVar0 = NETWORK::NET_TO_ENT(uParam0->f_2);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_10(&(uParam0->f_3), uParam0->f_2, 4, uParam0->f_1, -1, 1, 1, 1))
				{
					return true;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
			}
		}
	}
	return false;
}

bool func_10(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
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

bool func_11(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_12(NETWORK::NET_TO_VEH(iParam0));
	}
	return false;
}

bool func_12(int iParam0)
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

bool func_13(var uParam0, vector3 vParam1, var uParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_2))
	{
		return true;
	}
	iVar0 = 1;
	iVar1 = 1;
	bVar2 = true;
	bVar3 = false;
	bVar4 = true;
	STREAMING::REQUEST_MODEL(*uParam0);
	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		if (!func_19(vParam1))
		{
			if (func_14(&(uParam0->f_2), *uParam0, vParam1, uParam4, iVar0, iVar1, bVar2, bVar3, bVar4, 1, 0, 0, 0, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_14(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
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
			func_15(vParam2, fParam5, iParam1, iVar1);
			return true;
		}
	}
	return false;
}

void func_15(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (func_16(PLAYER::PLAYER_ID(), vParam0, iParam4) > -1)
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

int func_16(int iParam0, vector3 vParam1, int iParam4)
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

var func_17()
{
	return Global_4456448.f_124065[0 /*325*/].f_3;
}

Vector3 func_18(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { vParam0 };
	vVar0.f_2 = (vVar0.z + 100f);
	return vVar0;
}

bool func_19(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_20(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

int func_21(var uParam0)
{
	return uParam0->f_5;
}

void func_22(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_23(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_388(uParam0, bParam2, 0);
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

bool func_24(var uParam0)
{
	return uParam0->f_1;
}

bool func_25(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_26()
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar1 = func_389();
	iVar2 = 0;
	while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
		{
			bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
			if (func_1274(bVar0, 1, 1))
			{
				if (MISC::IS_BIT_SET(Local_279[iVar2 /*8*/].f_1, 0))
				{
					if (!MISC::IS_BIT_SET(Local_279[iVar2 /*8*/].f_1, 1))
					{
						if (!MISC::IS_BIT_SET(Local_279[iVar2 /*8*/].f_1, 11))
						{
							bVar1 = bVar0;
						}
					}
				}
			}
		}
		iVar2++;
	}
	if (Local_80.f_184.f_7 != bVar1)
	{
		Local_80.f_184.f_7 = bVar1;
	}
}

bool func_27()
{
	int iVar0;
	int iVar1;

	if (Local_80.f_184.f_7 != func_389())
	{
		if (func_1274(Local_80.f_184.f_7, 1, 1))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_80.f_184.f_7))
			{
				iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_80.f_184.f_7);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
				{
					iVar1 = iVar0;
					if (!MISC::IS_BIT_SET(Local_279[iVar1 /*8*/].f_1, 1))
					{
						if (!MISC::IS_BIT_SET(Local_279[iVar1 /*8*/].f_1, 11))
						{
							if (MISC::IS_BIT_SET(Local_279[iVar1 /*8*/].f_1, 0))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

void func_28()
{
	switch (Local_80.f_21)
	{
		case 0:
			func_370();
			if (MISC::IS_BIT_SET(Local_80.f_1, 2))
			{
				if (MISC::IS_BIT_SET(Local_80.f_1, 0))
				{
					MISC::SET_BIT(&(Local_80.f_1), 8);
					Local_80.f_21 = 1;
					MISC::CLEAR_AREA_OF_PROJECTILES(vLocal_591[0 /*3*/], (func_1060() + 50f), 1);
				}
			}
			else if (MISC::IS_BIT_SET(Local_80.f_1, 13))
			{
				MISC::SET_BIT(&(Local_80.f_1), 8);
				Local_80.f_21 = 1;
				MISC::CLEAR_AREA_OF_PROJECTILES(vLocal_591[0 /*3*/], (func_1060() + 50f), 1);
			}
			if (MISC::IS_BIT_SET(Local_80.f_1, 12))
			{
				Local_80.f_21 = 3;
			}
			if (MISC::IS_BIT_SET(Local_80.f_1, 16))
			{
				func_37();
				Local_80.f_21 = 3;
			}
			else if (MISC::IS_BIT_SET(Local_80.f_1, 18))
			{
				Local_80.f_21 = 3;
			}
			break;
		case 1:
			if (MISC::IS_BIT_SET(Local_80.f_1, 9))
			{
				Local_80.f_21 = 2;
			}
			break;
		case 2:
			func_33();
			func_29(0);
			if (MISC::IS_BIT_SET(Local_80.f_1, 3))
			{
				Local_80.f_21 = 3;
			}
			if (MISC::IS_BIT_SET(Local_80.f_1, 10))
			{
				Local_80.f_21 = 3;
			}
			break;
		case 3:
			if (MISC::IS_BIT_SET(Local_80.f_1, 16))
			{
				func_37();
			}
			if (MISC::IS_BIT_SET(Local_80.f_1, 5))
			{
				if (Local_80.f_21 == 3)
				{
					Local_80.f_21 = 5;
				}
			}
			break;
		case 4:
			break;
		case 5:
			break;
	}
}

void func_29(bool bParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	vector3 vVar17;
	vector3 vVar20;
	bool bVar23;

	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return;
		}
	}
	if (Local_80.f_197 == 0 || Local_80.f_197 == 2)
	{
		fLocal_2754 = func_32();
	}
	iVar0 = iLocal_558 + 1;
	if (!func_31(vLocal_559, 0f, 0f, 0f, 0))
	{
		if (!func_31(vLocal_2751, vLocal_559, 0))
		{
			vLocal_2751 = { vLocal_559 };
		}
	}
	if (iVar0 < 217)
	{
		vVar1 = { vLocal_591[iVar0 /*3*/] };
		fVar13 = SYSTEM::VDIST2(vLocal_559, vVar1);
		if (!func_31(vLocal_591[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			if (!func_31(vLocal_591[iLocal_558 /*3*/], 0f, 0f, 0f, 0))
			{
				if (fVar13 < (0.1f * 0.1f))
				{
					vLocal_559 = { vLocal_591[iVar0 /*3*/] };
					iLocal_558++;
					bVar15 = true;
				}
				else
				{
					vVar4 = { vVar1 - vLocal_559 };
					vVar7 = { func_30(vVar4) };
					if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						vVar10 = { vLocal_559 + vVar7 * FtoV(MISC::GET_FRAME_TIME()) * Vector(Local_80.f_166, Local_80.f_166, Local_80.f_166) * Vector(fLocal_2754, fLocal_2754, fLocal_2754) };
					}
					else
					{
						vVar10 = { vLocal_559 + vVar7 * FtoV(MISC::GET_FRAME_TIME()) * Vector(Local_80.f_166, Local_80.f_166, Local_80.f_166) };
					}
					fVar14 = SYSTEM::VDIST2(vLocal_559, vVar10);
					if (fVar14 > fVar13)
					{
						vVar17 = { vVar1 };
					}
					else
					{
						vVar17 = { vVar10 };
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 3))
			{
				MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 3);
			}
			if (!MISC::IS_BIT_SET(Local_80.f_1, 4))
			{
				if (!func_31(vLocal_591[(iLocal_1461 - 1) /*3*/], 0f, 0f, 0f, 0))
				{
					vVar17 = { vLocal_591[(iLocal_1461 - 1) /*3*/] };
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!func_24(&(Local_80.f_172)))
		{
			func_388(&(Local_80.f_172), 0, 0);
		}
		if (!MISC::IS_BIT_SET(Local_80.f_1, 4))
		{
			if (!func_23(&(Local_80.f_172), 16000, 0))
			{
				if (!bVar15)
				{
					Local_80.f_176 = { vVar17 };
					Local_80.f_171 = iLocal_558;
				}
				else
				{
					Local_80.f_176 = { vLocal_559 };
					Local_80.f_171 = iLocal_558;
				}
			}
			else if (func_23(&(Local_80.f_172), 16500, 0))
			{
				func_22(&(Local_80.f_172));
			}
		}
	}
	if (!func_31(Local_80.f_176, 0f, 0f, 0f, 0))
	{
		if (iLocal_565 != Local_80.f_171 || !func_31(vLocal_562, Local_80.f_176, 0))
		{
			if (iLocal_565 != Local_80.f_171)
			{
				iLocal_565 = Local_80.f_171;
				vLocal_562 = { Local_80.f_176 };
				vLocal_559 = { vLocal_562 };
				iLocal_558 = iLocal_565;
				bVar15 = true;
			}
			else
			{
				vLocal_562 = { Local_80.f_176 };
				vVar20 = { Local_80.f_176 };
			}
			bVar16 = true;
		}
	}
	if (!bVar15)
	{
		if (bVar16)
		{
			bVar23 = true;
			if (bVar23)
			{
				vLocal_559 = { vVar20 };
			}
		}
		else
		{
			vLocal_559 = { vVar17 };
		}
	}
	if (MISC::IS_BIT_SET(Local_80.f_1, 4))
	{
		if (!func_31(vLocal_559, vLocal_591[(iLocal_1461 - 1) /*3*/], 0))
		{
			vLocal_559 = { vLocal_591[(iLocal_1461 - 1) /*3*/] };
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_556))
	{
		HUD::SET_BLIP_COORDS(iLocal_556, vLocal_559);
	}
}

Vector3 func_30(vector3 vParam0)
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

bool func_31(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_32()
{
	return 0.9f;
}

void func_33()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (!func_24(&(Local_80.f_26)))
	{
		func_388(&(Local_80.f_26), 0, 0);
	}
	if (!func_23(&(Local_80.f_26), 10000, 0))
	{
		return;
	}
	else if (!func_23(&(Local_80.f_26), 20000, 0))
	{
		if (!func_24(&uLocal_571))
		{
			func_388(&uLocal_571, 0, 0);
		}
		if (func_23(&uLocal_571, 1000, 0))
		{
			fVar0 = Local_80.f_166;
			if (fVar0 < func_36())
			{
				fVar0 = (fVar0 + 0.5f);
				fVar0 = (fVar0 * func_35());
				if (fVar0 > func_36())
				{
					fVar0 = func_36();
				}
				Local_80.f_166 = fVar0;
			}
			func_22(&uLocal_571);
		}
	}
	else if (fLocal_1463 <= (fLocal_1462 / 2f))
	{
		if (Local_80.f_166 != func_36())
		{
			Local_80.f_166 = func_36();
		}
	}
	else if (!func_24(&uLocal_571))
	{
		func_388(&uLocal_571, 0, 0);
	}
	else if (func_23(&uLocal_571, 1000, 0))
	{
		if (Local_80.f_166 > func_34())
		{
			fVar1 = (func_36() - func_34());
			fVar3 = (fLocal_1462 / 2f);
			fVar2 = ((fLocal_1463 - fVar3) / fVar3);
			fVar4 = (func_36() - (fVar1 * fVar2));
			fVar4 = (fVar4 * 0.8f);
			fVar4 = (fVar4 * func_35());
			if (fVar4 < func_34())
			{
				fVar4 = func_34();
			}
			Local_80.f_166 = fVar4;
			func_22(&uLocal_571);
		}
	}
}

float func_34()
{
	return Global_262145.f_11148;
}

float func_35()
{
	return Global_262145.f_11149;
}

float func_36()
{
	return Global_262145.f_11146;
}

void func_37()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	char cVar6[32];
	struct<4> Var10;
	char cVar14[32];
	char cVar18[32];
	bool bVar22;
	int iVar23;
	struct<20> Var24;
	bool bVar47;
	bool bVar48;
	int iVar49;
	bool bVar50;
	bool bVar51;
	struct<4> Var52;
	struct<4> Var56;
	var uVar60;
	var uVar61;
	var uVar65;
	var uVar66;
	int iVar70;
	char[] cVar71[8];
	int iVar72;
	var uVar73;
	var uVar74;
	char cVar78[32];
	var uVar82;
	var uVar83;
	struct<4> Var87;
	struct<4> Var91;
	struct<4> Var95;

	iVar5 = -1;
	cVar18 = { func_369() };
	bVar22 = func_389();
	if (!func_367(PLAYER::PLAYER_ID(), 0))
	{
		iVar5 = NETWORK::PARTICIPANT_ID_TO_INT();
		bVar22 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar23 = Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_740;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar23))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar23))
			{
				bVar22 = iVar23;
				iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar23);
			}
		}
	}
	Var24.f_2 = 1065353216;
	Var24.f_3 = 1065353216;
	Var24.f_4 = 1;
	Var24.f_9 = -1;
	Var24.f_18 = -1;
	Var24.f_19 = -1;
	if (Local_80.f_197 != 2)
	{
		if (func_366(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
			return;
		}
	}
	else if (func_359())
	{
		MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
		return;
	}
	if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 2))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_80.f_1, 12))
	{
		MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
		return;
	}
	if (!func_1004(1))
	{
		if (iVar5 > -1)
		{
			if (bVar22 != func_389())
			{
				if (!MISC::IS_BIT_SET(Local_80.f_1, 17))
				{
					if (!MISC::IS_BIT_SET(Local_80.f_1, 16))
					{
						if (!MISC::IS_BIT_SET(Local_80.f_1, 18))
						{
							if (MISC::IS_BIT_SET(Local_279[iVar5 /*8*/].f_1, 0))
							{
								if (!MISC::IS_BIT_SET(iLocal_536, 17))
								{
									if (!MISC::IS_BIT_SET(Local_80.f_1, 10))
									{
										if (MISC::IS_BIT_SET(Local_80.f_1, 3) && MISC::IS_BIT_SET(Local_80.f_1, 11))
										{
											if (!MISC::IS_BIT_SET(iLocal_536, 19))
											{
												if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
												{
													if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
													{
														if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
														{
															MISC::SET_BIT(&iLocal_536, 19);
														}
													}
												}
											}
											if (MISC::IS_BIT_SET(Local_80.f_10, iVar5))
											{
												if (!MISC::IS_BIT_SET(Local_279[iVar5 /*8*/].f_1, 1))
												{
													bVar51 = true;
												}
											}
											if (func_358(&bVar47, &bVar48, &iVar49))
											{
												if (iVar49 > 2)
												{
													if (func_357(bVar22, bVar47, bVar48))
													{
														bVar2 = true;
													}
													if (!bVar2)
													{
														bVar50 = true;
													}
												}
												else if (iVar49 == 2)
												{
													if (bVar22 == bVar47 || bVar22 == bVar48)
													{
														Var52 = { func_356() };
														if (bVar22 == bVar47)
														{
															func_354(func_355(), &Var52, PLAYER::GET_PLAYER_NAME(bVar48), 1, 15000, &cVar18, 2);
														}
														else
														{
															func_354(func_355(), &Var52, PLAYER::GET_PLAYER_NAME(bVar47), 1, 15000, &cVar18, 2);
														}
														func_353(1);
													}
													else
													{
														if (func_357(bVar22, bVar47, bVar48))
														{
															bVar2 = true;
														}
														if (!bVar2)
														{
															Var56 = { func_352() };
															func_350(func_351(), func_389(), func_389(), -1, &Var56, &cVar18, 1, 15000, 2, PLAYER::GET_PLAYER_NAME(bVar47), PLAYER::GET_PLAYER_NAME(bVar48), 0);
														}
														func_353(0);
													}
												}
												if (!bVar2 || (bVar2 && bVar4))
												{
													if (iVar5 == NETWORK::PARTICIPANT_ID_TO_INT())
													{
														func_338(bVar51, &bVar0, &iVar1, iVar49);
														if (Local_80.f_197 != 2)
														{
															Local_2722.f_6 = bVar0;
															Local_2722.f_7 = iVar1;
															Global_2462880 = bVar0;
															if (bVar0 > 0)
															{
																if (func_337())
																{
																	func_326(968073639, bVar0, &uVar60, 0, 1, 0);
																}
																else
																{
																	MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(bVar0, "AM_PENNED_IN", &uVar61);
																}
															}
															if (!func_325())
															{
																if (Local_2722.f_6 > 0)
																{
																	func_324(11, Local_2722.f_6);
																}
															}
															func_323();
															func_322(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
														}
														else
														{
															Var24 = bVar0;
															Var24.f_1 = iVar1;
															func_137(200, bVar51, &Var24, 0);
														}
													}
													MISC::SET_BIT(&iLocal_536, 17);
												}
											}
											else if (bVar51)
											{
												if (iVar5 == NETWORK::PARTICIPANT_ID_TO_INT())
												{
													func_338(1, &bVar0, &iVar1, 1);
													if (Local_80.f_197 != 2)
													{
														Local_2722.f_6 = bVar0;
														Local_2722.f_7 = iVar1;
														Global_2462880 = bVar0;
														if (bVar0 > 0)
														{
															if (func_337())
															{
																func_326(968073639, bVar0, &uVar65, 0, 1, 0);
															}
															else
															{
																MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(bVar0, "AM_PENNED_IN", &uVar66);
															}
														}
														if (!func_325())
														{
															if (Local_2722.f_6 > 0)
															{
																func_324(11, Local_2722.f_6);
															}
														}
														func_323();
														func_322(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
													}
													else
													{
														Var24 = bVar0;
														Var24.f_1 = iVar1;
														func_137(200, 1, &Var24, 0);
													}
												}
												Var10 = { func_136() };
												func_134(func_135(), "PEN_WIN", &Var10, 1, 15000, 2, 1, 0);
												MISC::SET_BIT(&iLocal_536, 17);
												func_353(1);
											}
											else if (MISC::IS_BIT_SET(Local_80.f_1, 3))
											{
												if (func_1274(bVar22, 1, 1))
												{
													bVar47 = func_133();
													if (bVar47 != func_389())
													{
														if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar47))
														{
															if (!bVar2)
															{
																if (func_131(bVar47, 1))
																{
																	iVar70 = func_130(bVar47);
																	if (iVar70 > -1)
																	{
																		iVar72 = func_128(iVar70);
																		cVar71 = func_118(bVar47);
																		bVar3 = true;
																	}
																}
															}
															if (Local_80.f_197 == 2)
															{
																bVar2 = false;
																bVar3 = false;
															}
															if (!bVar2 && !bVar3)
															{
																cVar14 = { func_117() };
																func_354(func_351(), &cVar14, PLAYER::GET_PLAYER_NAME(bVar47), 1, 15000, &cVar18, 2);
															}
															else if (bVar3)
															{
																cVar14 = { func_116() };
																func_68(func_351(), &cVar18, &cVar14, cVar71, iVar72, 0, -1, -1, -1, 2, -1);
															}
															else if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar47))
															{
																cVar14 = { func_67() };
																func_354(91, &cVar14, PLAYER::GET_PLAYER_NAME(bVar47), 1, 15000, &cVar18, 2);
																bVar4 = true;
															}
															else
															{
																cVar14 = { func_117() };
																func_354(func_351(), &cVar14, PLAYER::GET_PLAYER_NAME(bVar47), 1, 15000, &cVar18, 2);
																bVar4 = true;
															}
														}
													}
													else
													{
														cVar6 = { func_66() };
														func_134(func_351(), &cVar18, &cVar6, 1, 15000, 2, 1, 0);
													}
													if (!bVar2 || (bVar2 && bVar4))
													{
														if (iVar5 == NETWORK::PARTICIPANT_ID_TO_INT())
														{
															func_338(0, &bVar0, &iVar1, 1);
															if (Local_80.f_197 != 2)
															{
																Local_2722.f_6 = bVar0;
																Local_2722.f_7 = iVar1;
																Global_2462880 = bVar0;
																if (bVar0 > 0)
																{
																	if (func_337())
																	{
																		func_326(968073639, bVar0, &uVar73, 0, 1, 0);
																	}
																	else
																	{
																		MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(bVar0, "AM_PENNED_IN", &uVar74);
																	}
																}
																if (!func_325())
																{
																	if (Local_2722.f_6 > 0)
																	{
																		func_324(11, Local_2722.f_6);
																	}
																}
																func_323();
																func_322(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
															}
															else
															{
																Var24 = bVar0;
																Var24.f_1 = iVar1;
																func_137(200, 0, &Var24, 0);
															}
														}
														MISC::SET_BIT(&iLocal_536, 17);
													}
													func_353(0);
												}
											}
											if (bVar50)
											{
												cVar78 = { func_65() };
												if (bVar51)
												{
													func_134(func_355(), &cVar18, &cVar78, 1, -1, 2, 1, 0);
												}
												else
												{
													func_134(func_355(), &cVar18, &cVar78, 1, -1, 2, 1, 0);
												}
												func_353(0);
											}
										}
									}
									else
									{
										cVar6 = { func_66() };
										func_134(func_351(), &cVar18, &cVar6, 1, 15000, 2, 1, 0);
										if (iVar5 == NETWORK::PARTICIPANT_ID_TO_INT())
										{
											func_338(0, &bVar0, &iVar1, 1);
											if (Local_80.f_197 != 2)
											{
												Local_2722.f_6 = bVar0;
												Local_2722.f_7 = iVar1;
												Global_2462880 = bVar0;
												if (bVar0 > 0)
												{
													if (func_337())
													{
														func_326(968073639, bVar0, &uVar82, 0, 1, 0);
													}
													else
													{
														MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(bVar0, "AM_PENNED_IN", &uVar83);
													}
												}
												func_323();
												func_322(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
											}
											else
											{
												Var24 = bVar0;
												Var24.f_1 = iVar1;
												func_137(200, 0, &Var24, 0);
											}
										}
										MISC::SET_BIT(&iLocal_536, 17);
									}
								}
								if (MISC::IS_BIT_SET(iLocal_536, 17))
								{
									if (MISC::IS_BIT_SET(Local_279[iVar5 /*8*/].f_1, 5))
									{
										if (!MISC::IS_BIT_SET(Local_279[iVar5 /*8*/].f_1, 1))
										{
											AUDIO::STOP_SOUND(iLocal_2005);
											AUDIO::RELEASE_SOUND_ID(iLocal_2005);
										}
									}
									if (CAM::IS_SCREEN_FADED_IN())
									{
										MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
									}
								}
							}
							else if (!MISC::IS_BIT_SET(Local_80.f_1, 10))
							{
								if (MISC::IS_BIT_SET(Local_80.f_1, 3))
								{
									bVar47 = func_133();
									if (bVar47 != func_389())
									{
										if (!func_358(&bVar47, &bVar48, &iVar49))
										{
											Var87 = { func_117() };
											func_62(&Var87, bVar47, 1, 0, 0, 0, 1, 0);
										}
										else if (iVar49 == 2)
										{
											Var91 = { func_61() };
											func_58(&Var91, bVar47, bVar48, 1, 1, 0, 0);
										}
										else
										{
											Var95 = { func_65() };
											func_53(&Var95);
										}
									}
									MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
									if (Local_80.f_197 != 2)
									{
										func_48(0);
									}
									else
									{
										func_353(0);
									}
								}
							}
							else
							{
								MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
								if (Local_80.f_197 != 2)
								{
									func_48(0);
								}
								else
								{
									func_353(0);
								}
							}
						}
						else if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 2))
						{
							MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
							if (func_38(PLAYER::PLAYER_ID()) >= 2)
							{
								func_134(func_351(), &cVar18, "CAG_NOP", 1, 15000, 2, 1, 0);
							}
							func_353(0);
						}
					}
					else if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 2))
					{
						MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
						if (func_38(PLAYER::PLAYER_ID()) >= 2)
						{
							func_134(func_351(), &cVar18, "CAG_NOP", 1, 15000, 2, 1, 0);
						}
						func_353(0);
					}
				}
				else if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 2))
				{
					MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
					if (func_38(PLAYER::PLAYER_ID()) >= 2)
					{
						if (!MISC::IS_BIT_SET(iLocal_538, 1))
						{
							func_134(func_351(), &cVar18, "CAG_PRES", 1, 15000, 2, 1, 0);
						}
					}
					func_353(0);
				}
			}
			else if (func_367(PLAYER::PLAYER_ID(), 0))
			{
				if (MISC::IS_BIT_SET(Local_80.f_1, 3) && MISC::IS_BIT_SET(Local_80.f_1, 11))
				{
					MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
				}
				else if (MISC::IS_BIT_SET(Local_80.f_1, 10))
				{
					MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 2))
	{
		if ((MISC::IS_BIT_SET(Local_80.f_1, 3) || MISC::IS_BIT_SET(Local_80.f_1, 10)) || MISC::IS_BIT_SET(Local_80.f_1, 16))
		{
			MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 2);
		}
	}
}

int func_38(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = 2;
	bVar1 = ((func_47(bParam0) && !func_46(bParam0)) && !MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 8));
	bVar2 = func_45(bParam0);
	bVar3 = func_44();
	bVar4 = func_359();
	if ((bVar1 && (func_43(bParam0) || func_42(bParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_41(bParam0)) && !func_39(bParam0)))
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

bool func_39(bool bParam0)
{
	return func_40(bParam0, 19);
}

bool func_40(bool bParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_11.f_4, iParam1);
}

bool func_41(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return func_40(bParam0, 9);
	}
	return false;
}

bool func_42(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[bVar0 /*615*/].f_1, 0);
	}
	return false;
}

bool func_43(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[bVar0 /*615*/].f_1, 7);
	}
	return false;
}

bool func_44()
{
	return Global_1312418;
}

bool func_45(bool bParam0)
{
	return func_40(bParam0, 20);
}

bool func_46(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 2);
}

bool func_47(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return Global_1628237[bVar0 /*615*/] != -1;
	}
	return false;
}

void func_48(bool bParam0)
{
	if (bParam0)
	{
		if (func_49(1))
		{
			MISC::SET_BIT(&Global_1574675, 1);
		}
	}
	else if (func_49(2))
	{
		MISC::SET_BIT(&Global_1574675, 2);
	}
}

bool func_49(int iParam0)
{
	int iVar0;

	iVar0 = func_50(2534, -1, 0);
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

int func_50(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_51(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
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

int func_52()
{
	return Global_1312745;
}

int func_53(char* sParam0)
{
	int iVar0;

	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_54(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_54(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;

	if ((!func_57() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_367(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_55(iParam2);
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

int func_55(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0 /*53*/].f_1)
		{
			func_56(iVar0);
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

void func_56(int iParam0)
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0 /*53*/] = { Global_1670846.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_57()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_58(char* sParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	char cVar1[64];
	char cVar17[64];

	iVar0 = -1;
	if ((NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID(), bParam1) && NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID(), bParam2)) || iParam6)
	{
		if (!bParam5)
		{
			StringCopy(&cVar1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
			StringCopy(&cVar17, PLAYER::GET_PLAYER_NAME(bParam2), 64);
		}
		else
		{
			StringCopy(&cVar1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
			StringCopy(&cVar17, PLAYER::GET_PLAYER_NAME(bParam2), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
		{
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar17))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_59(&cVar1));
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_59(&cVar17));
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_54(22, sParam0, 1, &cVar1, 0, 0, 0, 0f, 0, &cVar17, 0, 0);
	}
	return iVar0;
}

var func_59(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_60(&cVar0);
}

char[] func_60(char[4] cParam0)
{
	return cParam0;
}

struct<4> func_61()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WON2P", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_WON2P", 16);
			break;
	}
	return Var0;
}

int func_62(char* sParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
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
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_59(&Var1));
		if (!bParam5)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2513218 = { func_64(bParam1) };
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
						Var1 = { func_63(&Var1) };
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
		func_54(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_63(char* sParam0)
{
	struct<16> Var0;

	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_64(bool bParam0)
{
	struct<13> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

struct<4> func_65()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_DRAWD", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_DRAWD", 16);
			break;
	}
	return Var0;
}

struct<4> func_66()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NWN", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_NWN", 16);
			break;
	}
	return Var0;
}

struct<4> func_67()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WONPG", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_WONPG", 16);
			break;
	}
	return Var0;
}

int func_68(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_389();
	iVar1 = func_389();
	iVar2 = func_389();
	return func_69(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_69(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
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
	func_115(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
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
	func_113(&(Var0.f_69), 4);
	return func_70(&Var0);
}

int func_70(var uParam0)
{
	int iVar0;

	if (uParam0->f_1 == 1)
	{
		if (Global_2439138.f_3045)
		{
			return 0;
		}
	}
	func_85(uParam0, uParam0->f_17);
	func_82(uParam0);
	if (func_81())
	{
		func_82(uParam0);
	}
	if (func_80(uParam0->f_1))
	{
		func_73();
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
				func_73();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_113(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 2);
				Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_72(uParam0->f_69, 128))
			{
				if (func_71(Global_2439138.f_2723[iVar0 /*80*/].f_1))
				{
					Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
					func_113(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_71(int iParam0)
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

bool func_72(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_73()
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
	func_74();
	if (bVar0)
	{
		Global_76890 = 0;
	}
}

void func_74()
{
	Global_2439138.f_3047 = 0;
	Global_2439138.f_3047.f_578 = 0;
	func_78(&(Global_2439138.f_3047.f_1));
	Global_2439138.f_3047.f_1.f_1 = 0;
	func_75(&(Global_2439138.f_3047.f_1));
}

void func_75(var uParam0)
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_77(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_76(0);
}

void func_76(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_77(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

void func_78(var uParam0)
{
	func_79(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_79(var uParam0)
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

bool func_80(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return true;
	}
	return false;
}

bool func_81()
{
	return Global_2450632.f_17;
}

void func_82(var uParam0)
{
	if (func_84(uParam0->f_1))
	{
		uParam0->f_72 = func_83();
	}
}

int func_83()
{
	return 21;
}

bool func_84(int iParam0)
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

void func_85(var uParam0, bool bParam1)
{
	if (func_84(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_389() || !func_1274(bParam1, 0, 1))
	{
		return;
	}
	if (func_71(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_86(bParam1, -2, 0, 0, 0);
		}
	}
}

int func_86(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (func_111(bParam0) && !bParam4)
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
	if (((func_111(PLAYER::PLAYER_ID()) || (func_110() && func_109())) && !MISC::IS_BIT_SET(Global_2537071.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_108();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_1274(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_106(iParam1, bParam0, 0);
							}
							else
							{
								return func_99(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_99(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_106(iParam1, bParam0, 0);
				}
				else
				{
					return func_87(0, -1, 0);
				}
			}
			else
			{
				return func_87(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_106(iParam1, bParam0, 0);
		}
		else
		{
			return func_99(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_99(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_87(bool bParam0, int iParam1, bool bParam2)
{
	return func_88(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_88(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	if ((func_98() || (func_97() && func_95())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_94(iParam2, iVar0);
		}
		else
		{
			return func_94(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_93(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_92(1);
				}
				else
				{
					return func_92(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_89(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_89(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_92(1);
	}
	return func_92(0);
}

int func_89(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_91(iParam0, iParam1, iParam3);
	if (func_90(Global_4456448.f_194990, 1))
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

bool func_90(int iParam0, bool bParam1)
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

int func_91(int iParam0, int iParam1, int iParam2)
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
			if (!func_93(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_92(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

bool func_93(int iParam0, int iParam1, int iParam2)
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

int func_94(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_91(iParam1, iParam0, 4);
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

bool func_95()
{
	if (func_96())
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_237025, 4);
}

bool func_96()
{
	return MISC::IS_BIT_SET(Global_4456448.f_226020, 12);
}

bool func_97()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_237025, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_237025, 0) || Global_1653478) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FM_DEATHMATCH_CREATOR")) > 0);
}

bool func_98()
{
	if (func_96() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return true;
	}
	return false;
}

int func_99(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_102())
			{
				iVar3 = func_130(bParam0);
				if (!iVar3 == -1)
				{
					return func_128(iVar3);
				}
			}
			if ((func_101(bParam1, bParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_93(PLAYER::GET_PLAYER_TEAM(bParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_92(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_100(1);
			}
			else
			{
				return func_88(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[bParam0 /*876*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_92(1);
			}
			else
			{
				return func_88(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_130(bParam0);
	if (!iVar4 == -1)
	{
		return func_128(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_100(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_101(int iParam0, bool bParam1, int iParam2, int iParam3)
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

bool func_102()
{
	if (((func_105() || func_104()) || func_81()) || func_103())
	{
		return true;
	}
	return false;
}

bool func_103()
{
	return Global_2450632.f_19;
}

var func_104()
{
	return Global_2450632.f_16;
}

var func_105()
{
	return Global_2450632.f_15;
}

int func_106(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = Global_969031.f_14[iParam0];
	if (func_102())
	{
		iVar2 = func_130(bParam1);
		if (!iVar2 == -1)
		{
			return func_128(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_271[iParam0 /*15700*/].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_389())
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
			iVar0 = func_88(bParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_107(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_93(iParam0, PLAYER::GET_PLAYER_TEAM(bParam1), 0))
		{
			iVar0 = func_100(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_107(int iParam0)
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

int func_108()
{
	return Global_2359302.f_2;
}

bool func_109()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_110()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_18, 14);
}

bool func_111(bool bParam0)
{
	if (func_367(bParam0, 0))
	{
		return true;
	}
	if (func_112())
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

bool func_112()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

void func_113(var uParam0, int iParam1)
{
	func_114(uParam0, iParam1);
}

void func_114(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_115(int iParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_389();
	uParam1->f_18 = func_389();
	uParam1->f_19 = func_389();
	uParam1->f_20 = func_389();
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

struct<4> func_116()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WONPG2", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_WONPG2", 16);
			break;
	}
	return Var0;
}

struct<4> func_117()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WONP", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_WONP", 16);
			break;
	}
	return Var0;
}

char* func_118(bool bParam0)
{
	char* sVar0;
	bool bVar1;

	if (bParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_127(&(Global_1628237[bParam0 /*615*/].f_11.f_104));
		return sVar0;
	}
	if (Global_1628237[bParam0 /*615*/].f_11.f_120 != Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_120)
	{
		sVar0 = func_122(bParam0, 0);
		return sVar0;
	}
	if (((func_40(bParam0, 28) || func_40(PLAYER::PLAYER_ID(), 28)) || func_121(bParam0)) && !func_120(bParam0))
	{
		return func_122(bParam0, 0);
	}
	bVar1 = func_119(bParam0);
	if (bVar1 != func_389())
	{
		if (bVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, true))
			{
				return func_122(bVar1, 0);
			}
		}
	}
	if (bVar1 != func_389())
	{
		sVar0 = func_127(&(Global_1628237[bVar1 /*615*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_122(bVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

bool func_119(bool bParam0)
{
	if (bParam0 != func_389())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_389();
}

bool func_120(bool bParam0)
{
	struct<13> Var0;

	Var0 = { func_64(bParam0) };
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

bool func_121(bool bParam0)
{
	struct<13> Var0;

	if (bParam0 != func_389())
	{
		Var0 = { func_64(bParam0) };
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

char* func_122(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_124(bParam0, 1))
		{
			return func_123();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_123()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

bool func_124(bool bParam0, bool bParam1)
{
	return func_125(bParam0, bParam1, 1);
}

int func_125(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (bParam0 == func_389())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_126(bParam0, iParam2))
		{
			return 0;
		}
	}
	bVar0 = Global_1628237[bParam0 /*615*/].f_11;
	if (bVar0 != func_389() && Global_1628237[bVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_126(bool bParam0, int iParam1)
{
	if (bParam0 != func_389())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_389())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 == bParam0 && Global_1628237[bParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

char* func_127(var uParam0)
{
	return uParam0;
}

int func_128(int iParam0)
{
	int iVar0;

	if (iParam0 > -1)
	{
		iVar0 = func_129(iParam0);
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

int func_129(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_130(bool bParam0)
{
	if (!bParam0 == func_389())
	{
		if (func_131(bParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_119(bParam0)];
		}
	}
	return -1;
}

bool func_131(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_132(bParam0))
		{
			return false;
		}
	}
	return Global_1628237[bParam0 /*615*/].f_11 != func_389();
}

bool func_132(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_389())
		{
			return Global_1628237[bParam0 /*615*/].f_11 == bParam0;
		}
	}
	return false;
}

bool func_133()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = func_389();
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (bVar0 == func_389())
		{
			if (MISC::IS_BIT_SET(Local_80.f_10, iVar2))
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
					{
						bVar0 = iVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return bVar0;
}

int func_134(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_115(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_113(&(Var0.f_69), iParam7);
	}
	return func_70(&Var0);
}

int func_135()
{
	if (Local_80.f_197 != 2)
	{
		return 64;
	}
	return 87;
}

struct<4> func_136()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WON", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_WON", 16);
			break;
	}
	return Var0;
}

void func_137(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;

	func_320(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		bVar0 = (bVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_319(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		bVar0 = (bVar0 + func_318(iParam0, bParam3));
		bVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(bVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * fVar2));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		bVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(bVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * fVar2));
		bVar0 = SYSTEM::ROUND((IntToFloat(bVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		bVar0 = (bVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_316(iParam0))
	{
		if (bParam1)
		{
			if (func_315(PLAYER::PLAYER_ID()) > 0)
			{
				func_314();
			}
			else
			{
				func_313();
			}
		}
		else
		{
			func_312();
		}
	}
	func_296(iParam0, bParam1, uParam2, &bVar0, &iVar4);
	func_294(iParam0, uParam2, &bVar0, &iVar5);
	func_268(iParam0, uParam2, &bVar0, &iVar5);
	func_265(iParam0, uParam2, &bVar0, &iVar5, &iVar7);
	func_248(iParam0, uParam2, &bVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2537071.f_5124.f_382 = iVar4;
	}
	else
	{
		Global_2537071.f_5124.f_382 = iVar5;
	}
	bVar8 = func_247();
	if (bVar8 != func_389() && iParam0 != 148)
	{
		if (func_131(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_245(PLAYER::PLAYER_ID(), bVar8, 1))
			{
				func_235(&bVar0, 1);
			}
		}
	}
	func_229(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	bVar0 = (bVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1674356.f_10 = iVar1;
		func_323();
		func_182(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (bVar0 > 0)
	{
		Global_1674356.f_9 = bVar0;
		func_169(iParam0, bVar0, iVar7, iVar4, iVar5, uParam2);
		func_168(iParam0, bVar0);
		if (func_167(iParam0))
		{
			if (func_166(iParam0) > -1)
			{
				func_324(func_166(iParam0), bVar0);
			}
		}
		Global_2462880 = bVar0;
		func_165(&Global_2461144, 0, 0);
	}
	if (func_41(PLAYER::PLAYER_ID()) || func_45(PLAYER::PLAYER_ID()))
	{
		func_153(iParam0);
	}
	if (func_152(iParam0))
	{
		Global_1674374.f_13 = bVar0;
		Global_1674374.f_14 = iVar1;
	}
	if (func_151(iParam0))
	{
		Global_1674428.f_13 = bVar0;
		Global_1674428.f_14 = iVar1;
	}
	if (func_150(iParam0))
	{
		Global_1674491.f_12 = bVar0;
		Global_1674491.f_13 = iVar1;
	}
	if (func_149(iParam0))
	{
		Global_1674535.f_12 = bVar0;
		Global_1674535.f_13 = iVar1;
	}
	if (func_148(iParam0))
	{
		Global_1674589.f_12 = bVar0;
		Global_1674589.f_13 = iVar1;
	}
	if (func_147(iParam0))
	{
		if (func_146(iParam0))
		{
			Global_1674671.f_12 = bVar0;
			Global_1674671.f_13 = iVar1;
		}
		else if (func_140(iParam0))
		{
			Global_1674725.f_12 = bVar0;
			Global_1674725.f_13 = iVar1;
		}
	}
	if (func_139(iParam0))
	{
		Global_1674809.f_12 = bVar0;
		Global_1674809.f_13 = iVar1;
	}
	if (func_138(iParam0))
	{
		Global_1674884.f_16 = bVar0;
		Global_1674884.f_17 = iVar1;
	}
}

bool func_138(int iParam0)
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

bool func_139(int iParam0)
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

bool func_140(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_141(func_142(PLAYER::PLAYER_ID()))))
	{
		return true;
	}
	return false;
}

bool func_141(int iParam0)
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

int func_142(bool bParam0)
{
	if (func_145(bParam0) == 237 || func_145(bParam0) == 250)
	{
		return func_143(bParam0);
	}
	return -1;
}

int func_143(bool bParam0)
{
	if (func_144(bParam0, 0))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

bool func_144(bool bParam0, bool bParam1)
{
	if (Global_1628237[bParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[bParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_145(bool bParam0)
{
	if (func_144(bParam0, 0))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_146(int iParam0)
{
	if (iParam0 == 237)
	{
		return true;
	}
	return false;
}

bool func_147(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return true;
		default:
			break;
	}
	return false;
}

bool func_148(int iParam0)
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

bool func_149(int iParam0)
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

bool func_150(int iParam0)
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

bool func_151(int iParam0)
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

bool func_152(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 148 && func_126(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_35, 1))
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

void func_153(int iParam0)
{
	if (func_164(PLAYER::PLAYER_ID()) && func_162())
	{
		if (func_161(iParam0))
		{
			func_157(10146, -1);
		}
		else if (func_156(iParam0))
		{
			func_157(10148, -1);
		}
		else if (func_155(iParam0, 1))
		{
			func_157(10149, -1);
		}
		else if (func_154(iParam0))
		{
			func_157(10150, -1);
		}
	}
}

bool func_154(int iParam0)
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
	return false;
}

bool func_155(int iParam0, int iParam1)
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

bool func_156(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return true;
		default:
			break;
	}
	return false;
}

void func_157(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_50(iParam0, func_51(iParam1), 0);
	iVar0++;
	if (!func_160(iParam0))
	{
		func_159(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_158(iParam0, iVar0, iParam1, 1);
	}
}

void func_158(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = Global_2548434[iParam0 /*3*/][func_51(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_51(iParam2)] = iParam1;
			break;
		case 788:
			Global_1387994[func_51(iParam2)] = iParam1;
			break;
		case 789:
			Global_1388000[func_51(iParam2)] = iParam1;
			break;
		case 790:
			Global_1388006[func_51(iParam2)] = iParam1;
			break;
		case 8726:
			Global_1388012[func_51(iParam2)] = iParam1;
			break;
		case 777:
			Global_1387958[func_51(iParam2)] = iParam1;
			break;
		case 778:
			Global_1387964[func_51(iParam2)] = iParam1;
			break;
		case 779:
			Global_1387970[func_51(iParam2)] = iParam1;
			break;
		case 780:
			Global_1387976[func_51(iParam2)] = iParam1;
			break;
		case 8728:
			Global_1387982[func_51(iParam2)] = iParam1;
			break;
		case 767:
			Global_1387928[func_51(iParam2)] = iParam1;
			break;
		case 768:
			Global_1387934[func_51(iParam2)] = iParam1;
			break;
		case 769:
			Global_1387940[func_51(iParam2)] = iParam1;
			break;
		case 770:
			Global_1387946[func_51(iParam2)] = iParam1;
			break;
		case 8730:
			Global_1387952[func_51(iParam2)] = iParam1;
			break;
		case 757:
			Global_1388018[func_51(iParam2)] = iParam1;
			break;
		case 758:
			Global_1388024[func_51(iParam2)] = iParam1;
			break;
		case 759:
			Global_1388030[func_51(iParam2)] = iParam1;
			break;
		case 760:
			Global_1388036[func_51(iParam2)] = iParam1;
			break;
		case 8732:
			Global_1388042[func_51(iParam2)] = iParam1;
			break;
		case 1303:
			Global_1388048[func_51(iParam2)] = iParam1;
			break;
		case 7233:
			Global_1388054[func_51(iParam2)] = iParam1;
			break;
		case 639:
			Global_1388060[func_51(iParam2)] = iParam1;
			break;
		case 1278:
			Global_1388066[func_51(iParam2)] = iParam1;
			break;
		case 1876:
			Global_2586065[0 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 2267:
			Global_2586065[1 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 2929:
			Global_2586065[2 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3058:
			Global_2586065[3 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 10016:
			Global_2586214[func_51(iParam2)] = iParam1;
			break;
		case 764:
			Global_1388072[func_51(iParam2)] = iParam1;
			break;
		case 765:
			Global_1388078[func_51(iParam2)] = iParam1;
			break;
		case 766:
			Global_1388084[func_51(iParam2)] = iParam1;
			break;
		case 8731:
			Global_1388090[func_51(iParam2)] = iParam1;
			break;
		case 1236:
			Global_1388096[func_51(iParam2)] = iParam1;
			break;
		case 3053:
			Global_2586138[0 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3054:
			Global_2586138[1 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3055:
			Global_2586138[2 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3056:
			Global_2586138[3 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3057:
			Global_2586138[4 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3636:
			Global_2586217[0 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3637:
			Global_2586217[1 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3638:
			Global_2586217[2 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3639:
			Global_2586217[3 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3640:
			Global_2586217[4 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3641:
			Global_2586233[0 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3642:
			Global_2586233[1 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3643:
			Global_2586233[2 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3644:
			Global_2586233[3 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3645:
			Global_2586233[4 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3221:
			Global_2586138[5 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3227:
			Global_2586065[4 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3663:
			Global_2586249[func_51(iParam2)] = iParam1;
			break;
		case 3664:
			Global_2586258[func_51(iParam2)] = iParam1;
			break;
		case 3665:
			Global_2586252[func_51(iParam2)] = iParam1;
			break;
		case 3666:
			Global_2586261[func_51(iParam2)] = iParam1;
			break;
		case 3667:
			Global_2586255[func_51(iParam2)] = iParam1;
			break;
		case 3668:
			Global_2586264[func_51(iParam2)] = iParam1;
			break;
		case 3689:
			Global_2586267[func_51(iParam2)] = iParam1;
			break;
		case 3229:
			Global_2586138[6 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3230:
			Global_2586065[5 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3234:
			Global_2586138[7 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 3232:
			Global_2586065[6 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 4019:
			Global_2586138[8 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 4020:
			Global_2586065[7 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 4022:
			Global_2586138[9 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 4023:
			Global_2586065[8 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 4025:
			Global_2586138[10 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 4026:
			Global_2586065[9 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 4028:
			Global_2586138[11 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 4029:
			Global_2586065[10 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 6109:
			Global_2586138[12 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 6110:
			Global_2586065[11 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 6167:
			Global_2586138[13 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 6168:
			Global_2586065[12 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 6545:
			Global_2586138[14 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 6546:
			Global_2586065[13 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 6558:
			Global_2586138[15 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 6559:
			Global_2586065[14 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 6561:
			Global_2586138[16 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 6562:
			Global_2586065[15 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 6564:
			Global_2586138[17 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 6565:
			Global_2586065[16 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 7283:
			Global_2586065[17 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 7285:
			Global_2586065[18 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 7287:
			Global_2586065[19 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 8010:
			Global_2586065[20 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 8282:
			Global_2586270[func_51(iParam2)] = iParam1;
			break;
		case 8283:
			Global_2586273[func_51(iParam2)] = iParam1;
			break;
		case 8284:
			Global_2586276[func_51(iParam2)] = iParam1;
			break;
		case 8285:
			Global_2586279[func_51(iParam2)] = iParam1;
			break;
		case 8286:
			Global_2586282[func_51(iParam2)] = iParam1;
			break;
		case 8287:
			Global_2586285[func_51(iParam2)] = iParam1;
			break;
		case 8288:
			Global_2586288[func_51(iParam2)] = iParam1;
			break;
		case 8289:
			Global_2586291[func_51(iParam2)] = iParam1;
			break;
		case 8290:
			Global_2586294[func_51(iParam2)] = iParam1;
			break;
		case 8291:
			Global_2586297[func_51(iParam2)] = iParam1;
			break;
		case 8292:
			Global_2586300[func_51(iParam2)] = iParam1;
			break;
		case 8293:
			Global_2586303[func_51(iParam2)] = iParam1;
			break;
		case 8294:
			Global_2586306[func_51(iParam2)] = iParam1;
			break;
		case 8900:
			Global_2586309[func_51(iParam2)] = iParam1;
			break;
		case 8534:
			Global_2586065[21 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 8977:
			Global_2586138[23 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 8975:
			Global_2586065[22 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 8980:
			Global_2586138[24 /*3*/][func_51(iParam2)] = iParam1;
			break;
		case 8978:
			Global_2586065[23 /*3*/][func_51(iParam2)] = iParam1;
			break;
		default:
			break;
	}
}

void func_159(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_51(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

bool func_160(int iParam0)
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

bool func_161(int iParam0)
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

bool func_162()
{
	return func_163(PLAYER::PLAYER_ID());
}

bool func_163(bool bParam0)
{
	return func_126(bParam0, 1);
}

bool func_164(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_123, 14);
}

void func_165(var uParam0, bool bParam1, bool bParam2)
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

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		case 157:
			return 22;
		case 159:
			return 21;
		case 151:
			return 33;
		case 148:
			return 23;
		case 164:
			return 24;
		case 152:
			return 26;
		case 153:
			return 30;
		case 154:
			return 32;
		case 155:
			return 28;
		case 160:
			return 29;
		case 162:
			return 31;
		case 163:
			return 27;
		case 166:
			return 38;
		case 170:
			return 34;
		case 171:
			return 35;
		case 172:
			return 36;
		case 173:
			return 37;
		case 179:
			return 23;
		default:
			break;
	}
	return 0;
}

bool func_167(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		case 169:
			iVar0 = 0;
			break;
		case 168:
			iVar0 = 0;
			break;
		case 166:
			iVar0 = 0;
			break;
		case 190:
			iVar0 = 0;
			break;
		case 191:
			iVar0 = 0;
			break;
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_168(int iParam0, bool bParam1)
{
	if (func_164(PLAYER::PLAYER_ID()) && func_162())
	{
		if (func_161(iParam0) && bParam1 > 0)
		{
			func_159(10147, (func_50(10147, -1, 0) + bParam1), -1, 1, 0);
		}
	}
}

void func_169(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	struct<2> Var7;

	bVar5 = func_181();
	if (bVar5 != func_389())
	{
		func_180(bVar5, &iVar0, &uVar1);
	}
	bVar6 = !func_179(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_337())
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(bParam1, iParam3);
			}
			break;
		case 190:
			if (func_162())
			{
				if (!func_337())
				{
					Var7 = { func_178() };
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(bParam1, MISC::GET_HASH_KEY(func_177(Var7)), func_176(Var7), iParam4);
				}
			}
			else if (func_337())
			{
				func_326(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(bParam1, iParam4);
			}
			break;
		case 226:
			if (func_175())
			{
				if (!func_337())
				{
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(bParam1, MISC::GET_HASH_KEY(func_177(func_174(PLAYER::PLAYER_ID()))), 5, iParam4);
				}
			}
			else if (func_337())
			{
				func_326(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(bParam1, iParam4);
			}
			break;
		case 230:
			if (func_175())
			{
				if (!func_337())
				{
					iVar2 = func_170(uParam5->f_16, iParam4);
					bVar3 = bParam1;
					if (iVar2 > 0)
					{
						bVar3 = (bVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						bVar3 = (bVar3 - iParam2);
					}
					MONEY::_0x6B7E4FB50D5F3D65(bVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_337())
			{
				func_326(463142405, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_SMUGGLING(iVar0, uVar1, bParam1, bVar6);
			}
			break;
		case 233:
			if (func_337())
			{
				func_326(1407278493, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_GANGOPS_JOBS_PREP_PARTICIPATION(bParam1);
			}
			break;
		case 237:
			if (func_175())
			{
				if (!func_337())
				{
					MONEY::_0x0B39CF0D53F1C883(bParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_337())
			{
				func_326(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(bParam1, iParam4);
			}
			break;
		case 250:
			if (func_337())
			{
				func_326(-961034881, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0xA75EAC69F59E96E7(bParam1);
			}
			break;
		case 249:
			if (func_337())
			{
				func_326(1135468152, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0xC5156361F26E2212(bParam1);
			}
			break;
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_337())
			{
				func_326(-634726636, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0x1FDA0AA679C9919B(bParam1);
			}
			break;
		case 243:
			if (func_337())
			{
				func_326(1698417709, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				UNK_0xA8C1B24657FB32B3(bParam1);
			}
			break;
		case 158:
			if (uParam5->f_22)
			{
				if (func_337())
				{
					func_326(1668610896, bParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					UNK_0xB0E03FD240577D6C(bParam1, 0, false, 1, bParam1, 0, false);
				}
			}
			else if (func_337())
			{
				func_326(-2032529561, bParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				UNK_0xB0E03FD240577D6C(bParam1, 1, bParam1, 0, false, 0, false);
			}
			break;
		default:
			if (func_337())
			{
				func_326(-856006867, bParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4 /*85*/].f_6 = iVar0;
				Global_4263954[iVar4 /*85*/].f_7 = uVar1;
				Global_4263954[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0x0CB1BE0633C024A8(iVar0, uVar1, bParam1, bVar6);
			}
			break;
	}
}

int func_170(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_173(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_171(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_171(int iParam0, int iParam1)
{
	return (func_172(iParam0) * iParam1);
}

int func_172(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22306;
		case 0:
			return Global_262145.f_22307;
		case 1:
			return Global_262145.f_22308;
		case 2:
			return Global_262145.f_22309;
		case 3:
			return Global_262145.f_22310;
		case 4:
			return Global_262145.f_22311;
		case 5:
			return Global_262145.f_22312;
		case 6:
			return Global_262145.f_22313;
		case 7:
			return Global_262145.f_22314;
		default:
			break;
	}
	return 0;
}

float func_173(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22316);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		case 7:
			fVar0 = Global_262145.f_22318;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22315);
			break;
		case 3:
			fVar0 = Global_262145.f_22318;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22315);
			break;
		case 0:
			fVar0 = Global_262145.f_22319;
			break;
		case 1:
			fVar0 = Global_262145.f_22319;
			break;
		case 4:
			fVar0 = Global_262145.f_22319;
			break;
		case 6:
			fVar0 = Global_262145.f_22320;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22317);
			break;
		case 2:
			fVar0 = Global_262145.f_22320;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22317);
			break;
		case 5:
			fVar0 = Global_262145.f_22320;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22317);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_174(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return 0;
	}
	return Global_1590535[bParam0 /*876*/].f_274.f_183[5 /*12*/];
}

bool func_175()
{
	return func_132(PLAYER::PLAYER_ID());
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		case 2:
			return 1;
		case 3:
			return 4;
		case 4:
			return 2;
		case 5:
			return 0;
		case 6:
			return 3;
		case 7:
			return 1;
		case 8:
			return 4;
		case 9:
			return 2;
		case 10:
			return 0;
		case 11:
			return 3;
		case 12:
			return 1;
		case 13:
			return 4;
		case 14:
			return 2;
		case 15:
			return 0;
		case 16:
			return 3;
		case 17:
			return 1;
		case 18:
			return 4;
		case 19:
			return 2;
		case 20:
			return 0;
		case 21:
			return 5;
		case 22:
			return 5;
		case 23:
			return 5;
		case 24:
			return 5;
		case 25:
			return 5;
		case 26:
			return 5;
		case 27:
			return 5;
		case 28:
			return 5;
		case 29:
			return 5;
		case 30:
			return 5;
		case 31:
			return 5;
		default:
			break;
	}
	return -1;
}

char* func_177(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_178()
{
	return Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_193;
}

bool func_179(bool bParam0)
{
	return func_131(PLAYER::PLAYER_ID(), bParam0);
}

void func_180(bool bParam0, int iParam1, var uParam2)
{
	*iParam1 = Global_1628237[bParam0 /*615*/].f_11.f_8[0];
	*uParam2 = Global_1628237[bParam0 /*615*/].f_11.f_8[1];
}

bool func_181()
{
	return Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11;
}

int func_182(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	return func_183(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, iParam10);
}

int func_183(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;

	iVar0 = func_193(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_189(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, iParam8, iParam10);
			}
		}
	}
	else
	{
		func_184(iParam1, iVar0, iParam8, iParam10);
	}
	return iVar0;
}

void func_184(int iParam0, int iParam1, int iParam2, int iParam3)
{
	vector3 vVar0;

	vVar0 = { func_187(iParam0, 1) };
	if (iParam0 == func_186(PLAYER::PLAYER_PED_ID()))
	{
		func_185(1);
	}
	func_189(vVar0, iParam1, 0, iParam2, iParam3);
}

void func_185(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_186(int iParam0)
{
	return iParam0;
}

Vector3 func_187(int iParam0, bool bParam1)
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
	if (iParam0 == func_188(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
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

int func_188(int iParam0)
{
	return iParam0;
}

void func_189(vector3 vParam0, int iParam3, int iParam4, char* sParam5, bool bParam6)
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
			Global_2439138.f_1290[iVar1 /*30*/].f_4 = func_192(Global_2439138.f_1290[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1 /*30*/].f_7 = NETWORK::_0xBA7F0B77D80A4EB7();
			Global_2439138.f_1290[iVar1 /*30*/].f_3 = iParam3;
			Global_2439138.f_1290[iVar1 /*30*/].f_8 = iParam4;
			Global_2439138.f_1290[iVar1 /*30*/].f_9 = func_191();
			Global_2439138.f_1290[iVar1 /*30*/].f_10 = func_190();
			StringCopy(&(Global_2439138.f_1290[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1 /*30*/].f_26 = NETWORK::HAS_NETWORK_TIME_STARTED(NETWORK::_0xBA7F0B77D80A4EB7(), bParam6);
		}
	}
}

int func_190()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_191()
{
	var uVar0;

	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_192(vector3 vParam0, var uParam3, var uParam4)
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

int func_193(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_194(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return iVar0;
}

int func_194(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (func_228(PLAYER::PLAYER_ID()) || func_227(PLAYER::PLAYER_ID()))
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
	else if (func_225() || func_224(PLAYER::PLAYER_ID()))
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
	if (func_223(sParam2))
	{
	}
	if (func_222())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_220(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_219(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_216(0, &iVar1);
					break;
				case 3:
					func_216(1, &iVar1);
					break;
				case 1:
					func_213(&iVar1);
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
			func_212(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_204((func_211(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_2 != -1)
				{
					func_212(1165, iVar1, -1);
				}
				func_199(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_195((func_197(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_195((func_197(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_195(int iParam0)
{
	if (func_222())
	{
		Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_211.f_5 = iParam0;
		func_196(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_196(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_197(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_1274(bParam0, 0, 1))
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return func_198(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_5;
			}
		}
		else
		{
			return func_198(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_198(int iParam0)
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

void func_199(int iParam0)
{
	struct<13> Var0;
	int iVar13;

	Var0 = { func_64(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_202(func_203(&Var0));
			if (iVar13 == 0)
			{
				func_201(&Global_1387915, iParam0);
				func_200(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_201(&Global_1387916, iParam0);
				func_200(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_201(&Global_1387917, iParam0);
				func_200(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_201(&Global_1387918, iParam0);
				func_200(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_201(&Global_1387919, iParam0);
				func_200(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1387919);
			}
		}
	}
}

void func_200(int iParam0, int iParam1)
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

void func_201(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_202(int iParam0)
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

int func_203(int* iParam0)
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

void func_204(int iParam0, int iParam1, int iParam2)
{
	if (func_222())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_51(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_51(-1)])
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
		if (func_210(PLAYER::PLAYER_ID()))
		{
			Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_211.f_1 = iParam0;
			Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_211.f_6 = func_208(iParam0, 1);
		}
		func_158(639, iParam0, -1, 1);
		func_159(640, func_208(iParam0, 1), -1, 1, 0);
		Global_1388060[func_51(-1)] = iParam0;
		func_205(-1109644434, 7, 0);
	}
}

void func_205(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_207(iParam1, bParam2))
	{
		iVar0 = func_206();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_206()
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

bool func_207(int iParam0, bool bParam1)
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

int func_208(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_209(iParam0, 0);
}

int func_209(int iParam0, int iParam1)
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

bool func_210(bool bParam0)
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

int func_211(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388060[func_51(-1)];
			}
			else if (func_210(iParam0))
			{
				return Global_1590535[iParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_51(-1)];
	}
	return 0;
}

void func_212(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_50(iParam0, func_51(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_160(iParam0))
	{
		func_159(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_158(iParam0, iVar0, iParam2, 1);
	}
}

void func_213(int iParam0)
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
				if (PLAYER::GET_PLAYER_TEAM(bVar5) == iVar1 || func_93(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != PLAYER::PLAYER_ID())
					{
						if (func_215(PLAYER::PLAYER_ID(), bVar5))
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
		iVar6 = SYSTEM::ROUND((func_214(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_214(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_214(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

bool func_215(bool bParam0, bool bParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2513218 = { func_64(bParam0) };
		Global_2513231 = { func_64(bParam1) };
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

void func_216(bool bParam0, int iParam1)
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
				if (func_1274(bVar4, 0, 1))
				{
					if (bVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_215(PLAYER::PLAYER_ID(), bVar4))
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
			if (func_1274(bVar4, 1, 1))
			{
				if (bVar4 != PLAYER::PLAYER_ID())
				{
					if (func_217(PLAYER::PLAYER_ID(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_215(PLAYER::PLAYER_ID(), bVar4))
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
		iVar5 = SYSTEM::ROUND((func_214(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_214(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_217(bool bParam0, bool bParam1)
{
	return SYSTEM::VDIST(func_218(bParam0), func_218(bParam1));
	return 0f;
}

Vector3 func_218(bool bParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

int func_219(int iParam0)
{
	int iVar0;

	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_214(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_220(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_211(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_211(PLAYER::PLAYER_ID());
		}
	}
	if (func_221(8000, 0, 0) > 0)
	{
		if (func_221(8000, 0, 0) < (iParam0 + func_211(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_221(8000, 0, 0) - func_211(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_221(int iParam0, bool bParam1, int iParam2)
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

bool func_222()
{
	return true;
}

bool func_223(char* sParam0)
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

bool func_224(bool bParam0)
{
	return func_148(func_145(bParam0));
}

bool func_225()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_81();
	}
	return func_226(Global_4456448.f_194990);
}

int func_226(int iParam0)
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

bool func_227(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_228(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

void func_229(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*iParam1 = 0;
	*iParam2 = 0;
	if (!func_234(7))
	{
		return;
	}
	iVar0 = func_232(iParam0);
	iVar1 = func_231(iParam0);
	iVar2 = MISC::ABSI(NETWORK::IS_TIME_EQUAL_TO(Global_2537071.f_5124.f_265, NETWORK::_0xBA7F0B77D80A4EB7()));
	if (func_230(iParam0) != -1)
	{
		if (iVar2 > func_230(iParam0))
		{
			iVar2 = func_230(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12395)
	{
		iVar2 = Global_262145.f_12395;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*iParam1 = (iVar3 * iVar1);
	*iParam2 = (iVar3 * iVar0);
}

int func_230(int iParam0)
{
	if (func_155(iParam0, 0) || func_156(iParam0))
	{
		return Global_262145.f_18487;
	}
	if (func_161(iParam0))
	{
		return Global_262145.f_18486;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18483;
		case 191:
			return Global_262145.f_18485;
		case 190:
			return Global_262145.f_18484;
		case 227:
			return Global_262145.f_21043;
		case 226:
			return Global_262145.f_21031;
		case 225:
			return Global_262145.f_21051;
		case 230:
			return Global_262145.f_22303;
		case 229:
			return Global_262145.f_22207;
		case 233:
			return Global_262145.f_22779;
		case 237:
			return Global_262145.f_23942;
		case 238:
			return Global_262145.f_24053;
		case 249:
			return Global_262145.f_24069;
		case 243:
			return Global_262145.f_26301;
		default:
			break;
	}
	return -1;
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12486;
		case 152:
			return Global_262145.f_12521;
		case 151:
			return 0;
		case 142:
			return Global_262145.f_12509;
		case 157:
			return Global_262145.f_12476;
		case 159:
			return Global_262145.f_12459;
		case 164:
			return Global_262145.f_12499;
		case 160:
			return Global_262145.f_12549;
		case 162:
			return Global_262145.f_12569;
		case 163:
			return Global_262145.f_12534;
		case 154:
			return Global_262145.f_12604;
		case 155:
			return Global_262145.f_12594;
		case 153:
			return Global_262145.f_12558;
		case 170:
			return Global_262145.f_14995;
		case 171:
			return Global_262145.f_15054;
		case 172:
			return Global_262145.f_15072;
		case 173:
			return Global_262145.f_15013;
		case 166:
			return Global_262145.f_15028;
		case 167:
			return Global_262145.f_15119;
		case 169:
			return Global_262145.f_15091;
		case 168:
			return Global_262145.f_15084;
		case 179:
			return Global_262145.f_18366;
		case 180:
			return Global_262145.f_18144;
		case 182:
			return Global_262145.f_18144;
		case 183:
			return Global_262145.f_18144;
		case 185:
			return Global_262145.f_18144;
		case 186:
			return Global_262145.f_18144;
		case 189:
			return Global_262145.f_18366;
		case 190:
			return Global_262145.f_18020;
		case 191:
			return Global_262145.f_18111;
		case 192:
			return Global_262145.f_17905;
		case 193:
			return Global_262145.f_18366;
		case 194:
			return Global_262145.f_18366;
		case 195:
			return Global_262145.f_18144;
		case 197:
			return Global_262145.f_18144;
		case 198:
			return Global_262145.f_18144;
		case 199:
			return Global_262145.f_18366;
		case 200:
			return Global_262145.f_18366;
		case 201:
			return Global_262145.f_18366;
		case 205:
			return Global_262145.f_18366;
		case 207:
			return Global_262145.f_18144;
		case 208:
			return Global_262145.f_18144;
		case 209:
			return Global_262145.f_18144;
		case 210:
			return Global_262145.f_18366;
		case 211:
			return Global_262145.f_18366;
		case 214:
			return Global_262145.f_19216;
		case 215:
			return Global_262145.f_19218;
		case 216:
			return Global_262145.f_19220;
		case 217:
			return Global_262145.f_19222;
		case 218:
			return Global_262145.f_19224;
		case 219:
			return Global_262145.f_19226;
		case 220:
			return Global_262145.f_19228;
		case 221:
			return Global_262145.f_19230;
		case 225:
			if (!func_175())
			{
				return Global_262145.f_21053;
			}
			break;
		case 226:
			if (!func_175())
			{
				return Global_262145.f_21033;
			}
			break;
		case 227:
			if (!func_175())
			{
				return Global_262145.f_21045;
			}
			break;
		case 229:
			if (!func_175())
			{
				return Global_262145.f_22209;
			}
			break;
		case 230:
			if (!func_175())
			{
				return Global_262145.f_22305;
			}
			break;
		case 233:
			if (!func_175())
			{
				return Global_262145.f_22778;
			}
			break;
		case 241:
			return 100;
		case 242:
			return 100;
		case 244:
			return 100;
		case 248:
			return 100;
		case 239:
			return 100;
		case 240:
			return 100;
		case 250:
			return 100;
		case 237:
			if (!func_175())
			{
				return Global_262145.f_23944;
			}
			break;
		case 238:
			if (!func_175())
			{
				return Global_262145.f_24055;
			}
			break;
		case 249:
			if (!func_175())
			{
				return Global_262145.f_24071;
			}
			break;
		case 243:
			if (!func_175())
			{
				return Global_262145.f_26304;
			}
			break;
		case 158:
			if (!func_175())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12485;
		case 152:
			return Global_262145.f_12520;
		case 151:
			return 0;
		case 142:
			return Global_262145.f_12508;
		case 157:
			return Global_262145.f_12475;
		case 159:
			return Global_262145.f_12458;
		case 164:
			return Global_262145.f_12498;
		case 160:
			return Global_262145.f_12548;
		case 162:
			return Global_262145.f_12568;
		case 163:
			return Global_262145.f_12533;
		case 154:
			return Global_262145.f_12603;
		case 155:
			return Global_262145.f_12593;
		case 153:
			return Global_262145.f_12557;
		case 170:
			return Global_262145.f_14994;
		case 171:
			return Global_262145.f_15053;
		case 172:
			return Global_262145.f_15071;
		case 173:
			return Global_262145.f_15012;
		case 166:
			return Global_262145.f_15027;
		case 179:
			return Global_262145.f_18365;
		case 180:
			return Global_262145.f_18143;
		case 182:
			return Global_262145.f_18143;
		case 183:
			return Global_262145.f_18143;
		case 185:
			return Global_262145.f_18143;
		case 186:
			return Global_262145.f_18143;
		case 189:
			return Global_262145.f_18365;
		case 193:
			return Global_262145.f_18365;
		case 194:
			return Global_262145.f_18365;
		case 195:
			return Global_262145.f_18143;
		case 197:
			return Global_262145.f_18143;
		case 198:
			return Global_262145.f_18143;
		case 199:
			return Global_262145.f_18365;
		case 200:
			return Global_262145.f_18365;
		case 201:
			return Global_262145.f_18365;
		case 205:
			return Global_262145.f_18365;
		case 207:
			return Global_262145.f_18143;
		case 208:
			return Global_262145.f_18143;
		case 209:
			return Global_262145.f_18143;
		case 210:
			return Global_262145.f_18365;
		case 211:
			return Global_262145.f_18365;
		case 190:
			if (func_233(0))
			{
				return Global_262145.f_18019;
			}
			else
			{
				return 0;
			}
			break;
		case 191:
			if (func_233(0))
			{
				return Global_262145.f_18110;
			}
			else
			{
				return 0;
			}
			break;
		case 192:
			if (func_233(0))
			{
				return Global_262145.f_17904;
			}
			else
			{
				return 0;
			}
			break;
		case 214:
			return Global_262145.f_19215;
		case 215:
			return Global_262145.f_19217;
		case 216:
			return Global_262145.f_19219;
		case 217:
			return Global_262145.f_19221;
		case 218:
			return Global_262145.f_19223;
		case 219:
			return Global_262145.f_19225;
		case 220:
			return Global_262145.f_19227;
		case 221:
			return Global_262145.f_19229;
		case 225:
			if (func_233(0))
			{
				return Global_262145.f_21052;
			}
			break;
		case 226:
			if (func_233(0))
			{
				return Global_262145.f_21032;
			}
			break;
		case 227:
			if (func_233(0))
			{
				return Global_262145.f_21044;
			}
			break;
		case 229:
			if (func_233(0))
			{
				return Global_262145.f_22208;
			}
			break;
		case 230:
			if (func_233(0))
			{
				return Global_262145.f_22304;
			}
			break;
		case 233:
			if (func_233(0))
			{
				return Global_262145.f_22780;
			}
			break;
		case 241:
			return 500;
		case 242:
			return 500;
		case 244:
			return 500;
		case 248:
			return 500;
		case 239:
			return 500;
		case 240:
			return 500;
		case 250:
			return 500;
		case 237:
			if (func_233(0))
			{
				return Global_262145.f_23943;
			}
			break;
		case 238:
			if (func_233(0))
			{
				return Global_262145.f_24054;
			}
			break;
		case 249:
			if (func_233(0))
			{
				return Global_262145.f_24070;
			}
			break;
		case 243:
			return Global_262145.f_26300;
		case 158:
			if (func_233(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_233(bool bParam0)
{
	return func_124(PLAYER::PLAYER_ID(), bParam0);
}

bool func_234(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_45, iParam0);
}

void func_235(bool bParam0, int iParam1)
{
	int iVar0;

	if (*bParam0 > 0)
	{
		if (!func_175())
		{
			if (func_179(0))
			{
				if (!func_233(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_181()))
					{
						if (func_244() == 100)
						{
							iVar0 = *bParam0;
							*bParam0 = 0;
						}
						else
						{
							iVar0 = ((*bParam0 / 100) * func_244());
							*bParam0 = (*bParam0 - iVar0);
						}
						func_242(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_241("GB_BCUT_TICK1", func_181(), iVar0, 0, 0, 1);
						}
						func_240(20);
						func_236(func_181(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_236(bool bParam0, int iParam1, int iParam2)
{
	struct<8> Var0;

	if (func_1274(bParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_239(bParam0);
		func_238(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_237(bParam0));
	}
}

int func_237(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

void func_238(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_239(bool bParam0)
{
	return Global_1628237[bParam0 /*615*/].f_533;
}

void func_240(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

int func_241(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_86(bParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_59(&cVar1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_54(27, sParam0, 1, &cVar1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_242(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		iVar1 = func_243(1);
	}
	else
	{
		iVar1 = func_243(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_243(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_244()
{
	return Global_262145.f_12389;
}

bool func_245(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1 != func_389())
	{
		if (!bParam2)
		{
			if (func_246(bParam0, bParam1))
			{
				return false;
			}
		}
		if (Global_1628237[bParam0 /*615*/].f_11 != func_389())
		{
			return bParam1 == Global_1628237[bParam0 /*615*/].f_11;
		}
	}
	return false;
}

bool func_246(bool bParam0, bool bParam1)
{
	if (bParam1 != func_389())
	{
		if (bParam0 != func_389())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 != func_389())
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

bool func_247()
{
	return Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_35;
}

void func_248(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	bool bVar23;

	bVar18 = func_233(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_175())
		{
			bVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			bVar17 = func_181();
		}
		bVar11 = bVar17;
		if (bVar11 != -1)
		{
			iVar0 = Global_1590535[bVar11 /*876*/].f_854.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*iParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590535[bVar11 /*876*/].f_854.f_2;
			}
			else
			{
				iVar2 = func_264(Global_1590535[bVar11 /*876*/].f_854, *iParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*bParam2 = (*bParam2 + iVar2);
			iVar10 = func_263(*bParam2);
			if (iVar10 > 0)
			{
				if (bVar17 == PLAYER::PLAYER_ID())
				{
					func_262("TICK_TCUT", iVar10);
				}
				*bParam2 = (*bParam2 - iVar10);
			}
			Global_1674671.f_49 = *iParam3;
			if (bVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_261(iVar2);
				}
				if (*iParam3 > 0)
				{
					func_259(*iParam3);
				}
				iVar6 = func_258(&uVar5);
				iVar7 = Global_262145.f_23973;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_23972));
				iVar8 = ((*bParam2 / 100) * iVar9);
				*bParam2 = (*bParam2 + iVar8);
				if (*bParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_240(140);
					}
				}
				if (*bParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar22 = iVar21;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								bVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22);
								if (func_257(bVar23))
								{
									func_249(bVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *bParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23945;
				iVar3 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar16));
				*bParam2 = iVar3;
				iVar4 = Global_262145.f_23946;
				if (*bParam2 > iVar4)
				{
					*bParam2 = iVar4;
				}
				if (*bParam2 > 0)
				{
					Global_1686723 = *bParam2;
					func_240(121);
				}
			}
			else
			{
				*bParam2 = 0;
			}
		}
	}
}

void func_249(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_251(bParam0);
	func_250(bParam0, iVar0, iParam1, iParam2);
}

void func_250(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	struct<8> Var0;

	Var0 = -601653676;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_3 = iParam3;
	Var0.f_5 = func_239(bParam0);
	func_238(&(Var0.f_6), &(Var0.f_7));
	if (bParam0 != func_389())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_237(bParam0));
		}
	}
}

int func_251(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_256();
	iVar0 = func_254(bParam0, iVar0);
	iVar1 = Global_1628237[func_181() /*615*/].f_11.f_449;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14955));
	if (iVar0 < func_253())
	{
		iVar0 = func_253();
	}
	if (iVar0 > func_252())
	{
		iVar0 = func_252();
	}
	return iVar0;
}

int func_252()
{
	return Global_262145.f_14956;
}

int func_253()
{
	return Global_262145.f_16131;
}

int func_254(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = (func_315(bParam0) * func_255());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_255()
{
	return Global_262145.f_16130;
}

int func_256()
{
	return Global_262145.f_12381;
}

bool func_257(bool bParam0)
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
	{
		if (bParam0 != PLAYER::PLAYER_ID())
		{
			if (func_245(bParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_40(bParam0, 26))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_258(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_367(bVar2, 0) && !func_245(bVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_367(bVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_259(int iParam0)
{
	func_260(iParam0, 7236);
}

void func_260(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_50(iParam1, -1, 0);
	func_159(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_261(int iParam0)
{
	func_260(iParam0, 7231);
}

int func_262(char* sParam0, int iParam1)
{
	int iVar0;

	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_54(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_263(int iParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23974);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_264(struct<5> Param0, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;

	if (iParam5 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_265(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;

	*iParam4 = 0;
	bVar16 = func_233(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_175())
		{
			bVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			bVar15 = func_181();
		}
		if (bVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*iParam3 = iVar1;
			iVar2 = func_171(uParam1->f_16, *iParam3);
			*bParam2 = (*bParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_170(uParam1->f_16, *iParam3);
				if (iVar9 > 0)
				{
					*bParam2 = (*bParam2 + iVar9);
				}
			}
			if (func_267(*bParam2) > 0)
			{
				if (bVar15 == PLAYER::PLAYER_ID())
				{
					func_262("SMTICK_RONCUT", func_267(*bParam2));
				}
				*bParam2 = (*bParam2 - func_267(*bParam2));
			}
			if (bVar15 == PLAYER::PLAYER_ID())
			{
				func_266(iVar2, iVar9);
				iVar6 = func_258(&uVar5);
				iVar7 = Global_262145.f_22322;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22321));
				*iParam4 = ((*bParam2 / 100) * iVar8);
				*bParam2 = (*bParam2 + *iParam4);
				if (*bParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_240(44);
					}
				}
				if (*bParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								bVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_257(bVar20))
								{
									func_249(bVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *bParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22255;
				iVar3 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar14));
				*bParam2 = iVar3;
				iVar4 = Global_262145.f_22256;
				if (*bParam2 > iVar4)
				{
					*bParam2 = iVar4;
				}
				if (*bParam2 > 0)
				{
					Global_1686723 = *bParam2;
					func_240(121);
				}
			}
			else
			{
				*bParam2 = 0;
			}
		}
	}
}

void func_266(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_260(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_260(iParam1, 6117);
	}
}

int func_267(int iParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22289);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_22290))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22290);
	}
	return SYSTEM::ROUND(fVar1);
}

void func_268(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;

	bVar17 = func_233(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_175())
		{
			bVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			bVar15 = func_181();
		}
		if (bVar15 != -1)
		{
			iVar16 = func_174(bVar15);
			iVar0 = (func_293(bVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*iParam3 = iVar1;
			iVar2 = func_289(bVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21035));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21034));
			}
			*bParam2 = (*bParam2 + iVar2);
			if (bVar15 == PLAYER::PLAYER_ID())
			{
				func_283(iVar16, iVar2);
				if (func_279(iVar16) >= Global_262145.f_20583 || iVar2 >= Global_262145.f_20583)
				{
					func_269(5);
				}
				iVar6 = func_258(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_21037);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21036));
				iVar9 = ((*bParam2 / 100) * iVar8);
				*bParam2 = (*bParam2 + iVar9);
				if (*bParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_240(108);
					}
					else
					{
						func_240(110);
					}
				}
				if (*bParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								bVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_257(bVar20))
								{
									func_249(bVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *bParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21038;
				iVar3 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar14));
				*bParam2 = iVar3;
				iVar4 = Global_262145.f_21039;
				if (*bParam2 > iVar4)
				{
					*bParam2 = iVar4;
				}
				if (*bParam2 > 0)
				{
					Global_1686723 = *bParam2;
					func_240(112);
				}
			}
			else
			{
				*bParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_269(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20571)
			{
				if (func_271(Global_262145.f_20572))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		case 1:
			if (Global_262145.f_20573)
			{
				if (func_271(Global_262145.f_20574))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		case 2:
			if (Global_262145.f_20575)
			{
				if (func_271(Global_262145.f_20576))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		case 3:
			if (Global_262145.f_20577)
			{
				if (func_271(Global_262145.f_20578))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		case 4:
			if (Global_262145.f_20579)
			{
				if (func_271(Global_262145.f_20580))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		case 5:
			if (Global_262145.f_20581)
			{
				if (func_271(Global_262145.f_20582))
				{
					func_262("CLOTHAWDSTRAP3", Global_262145.f_20583);
				}
			}
			break;
		case 6:
			if (Global_262145.f_20584)
			{
				if (func_271(Global_262145.f_20585))
				{
					func_262("CLOTHAWDSTRAP5", Global_262145.f_20717);
				}
			}
			break;
		case 7:
			if (Global_262145.f_20587)
			{
				if (func_271(Global_262145.f_20588))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		case 8:
			if (Global_262145.f_20589)
			{
				if (func_271(Global_262145.f_20590))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		case 9:
			if (Global_262145.f_20591)
			{
				if (func_271(Global_262145.f_20592))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		case 10:
			if (Global_262145.f_20593)
			{
				if (func_271(Global_262145.f_20594))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		case 11:
			if (Global_262145.f_20595)
			{
				if (func_271(Global_262145.f_20596))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		case 12:
			if (Global_262145.f_20597)
			{
				if (func_271(Global_262145.f_20598))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		case 13:
			if (Global_262145.f_20599)
			{
				if (func_271(Global_262145.f_20600))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		case 14:
			if (Global_262145.f_20601)
			{
				if (func_271(Global_262145.f_20602))
				{
					func_270("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_270(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	else
	{
		Global_2513218 = { func_64(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513148, 35, &Global_2513218))
		{
			bVar1 = false;
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
			{
				bVar1 = true;
			}
			if (Global_2513148.f_21 > 0)
			{
				bVar2 = false;
			}
			else
			{
				bVar2 = true;
			}
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar2, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, bVar1, false, Global_2513148, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1314034, Global_1314035, Global_1314036);
		}
		else
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
	}
	func_54(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

bool func_271(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case joaat("CLO_GRM_U_19_0"):
		case joaat("CLO_GRF_U_25_0"):
			if (!func_276(15417, -1, -1))
			{
				func_275(15417, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case joaat("CLO_GRM_U_19_1"):
		case joaat("CLO_GRF_U_25_1"):
			if (!func_276(15418, -1, -1))
			{
				func_275(15418, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case joaat("CLO_GRF_U_26_0"):
			if (!func_276(15425, -1, -1))
			{
				func_275(15425, 1, -1, 1);
				return true;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case joaat("CLO_GRM_DECL_19"):
		case joaat("CLO_GRF_DECL_19"):
			if (!func_276(15405, -1, -1))
			{
				func_275(15405, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case joaat("CLO_GRF_DECL_20"):
			if (!func_276(15393, -1, -1))
			{
				func_275(15393, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case joaat("CLO_GRF_DECL_21"):
			if (!func_276(15409, -1, -1))
			{
				func_275(15409, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case joaat("CLO_GRM_DECL_22"):
		case joaat("CLO_GRF_DECL_22"):
			if (!func_276(15396, -1, -1))
			{
				func_275(15396, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case joaat("CLO_GRF_DECL_23"):
			if (!func_276(15412, -1, -1))
			{
				func_275(15412, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case joaat("CLO_GRM_DECL_24"):
		case joaat("CLO_GRF_DECL_24"):
			if (!func_274(209, -1))
			{
				func_272(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case joaat("CLO_GRF_DECL_25"):
			if (!func_276(15403, -1, -1))
			{
				func_275(15403, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case joaat("CLO_GRM_DECL_26"):
		case joaat("CLO_GRF_DECL_26"):
			if (!func_274(209, -1))
			{
				func_272(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case joaat("CLO_GRF_DECL_27"):
			if (!func_276(15389, -1, -1))
			{
				func_275(15389, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case joaat("CLO_GRM_DECL_28"):
		case joaat("CLO_GRF_DECL_28"):
			if (!func_274(209, -1))
			{
				func_272(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case joaat("CLO_GRF_DECL_29"):
			if (!func_276(15398, -1, -1))
			{
				func_275(15398, 1, -1, 1);
				return true;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case joaat("CLO_GRM_PH_6_0"):
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_276(15400, -1, -1))
			{
				func_275(15400, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case joaat("CLO_GRM_PH_6_1"):
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_274(209, -1))
			{
				func_272(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case joaat("CLO_GRM_PH_6_2"):
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_276(15408, -1, -1))
			{
				func_275(15408, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case joaat("CLO_GRM_PH_6_3"):
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_274(209, -1))
			{
				func_272(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case joaat("CLO_GRM_PH_6_4"):
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_276(15411, -1, -1))
			{
				func_275(15411, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case joaat("CLO_GRM_PH_6_5"):
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_276(15397, -1, -1))
			{
				func_275(15397, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case joaat("CLO_GRM_PH_6_6"):
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_276(15413, -1, -1))
			{
				func_275(15413, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case joaat("CLO_GRM_PH_6_7"):
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_276(15391, -1, -1))
			{
				func_275(15391, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case joaat("CLO_GRF_PH_6_8"):
			if (!func_276(15388, -1, -1))
			{
				func_275(15388, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case joaat("CLO_GRM_PH_6_9"):
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_274(209, -1))
			{
				func_272(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case joaat("CLO_GRF_PH_6_10"):
			if (!func_276(15401, -1, -1))
			{
				func_275(15401, 1, -1, 1);
				return true;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_GUNRUNNING_AWARD_000_M"):
		case joaat("MP_GUNRUNNING_AWARD_000_F"):
		case joaat("CLO_GRM_DECL_0"):
		case joaat("CLO_GRF_DECL_0"):
			if (!func_276(15394, -1, -1))
			{
				func_275(15394, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_001_M"):
		case joaat("MP_GUNRUNNING_AWARD_001_F"):
		case joaat("CLO_GRM_DECL_1"):
		case joaat("CLO_GRF_DECL_1"):
			if (!func_274(209, -1))
			{
				func_272(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_002_M"):
		case joaat("MP_GUNRUNNING_AWARD_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case joaat("CLO_GRF_DECL_2"):
			if (!func_276(15406, -1, -1))
			{
				func_275(15406, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_003_M"):
		case joaat("MP_GUNRUNNING_AWARD_003_F"):
		case joaat("CLO_GRM_DECL_3"):
		case joaat("CLO_GRF_DECL_3"):
			if (!func_276(15395, -1, -1))
			{
				func_275(15395, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_004_M"):
		case joaat("MP_GUNRUNNING_AWARD_004_F"):
		case joaat("CLO_GRM_DECL_4"):
		case joaat("CLO_GRF_DECL_4"):
			if (!func_274(209, -1))
			{
				func_272(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_005_M"):
		case joaat("MP_GUNRUNNING_AWARD_005_F"):
		case joaat("CLO_GRM_DECL_5"):
		case joaat("CLO_GRF_DECL_5"):
			if (!func_276(15410, -1, -1))
			{
				func_275(15410, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_006_M"):
		case joaat("MP_GUNRUNNING_AWARD_006_F"):
		case joaat("CLO_GRM_DECL_6"):
		case joaat("CLO_GRF_DECL_6"):
			if (!func_276(15407, -1, -1))
			{
				func_275(15407, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_007_M"):
		case joaat("MP_GUNRUNNING_AWARD_007_F"):
		case joaat("CLO_GRM_DECL_7"):
		case joaat("CLO_GRF_DECL_7"):
			if (!func_274(209, -1))
			{
				func_272(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_008_M"):
		case joaat("MP_GUNRUNNING_AWARD_008_F"):
		case joaat("CLO_GRM_DECL_8"):
		case joaat("CLO_GRF_DECL_8"):
			if (!func_274(209, -1))
			{
				func_272(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_009_M"):
		case joaat("MP_GUNRUNNING_AWARD_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case joaat("CLO_GRF_DECL_9"):
			if (!func_276(15414, -1, -1))
			{
				func_275(15414, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_010_M"):
		case joaat("MP_GUNRUNNING_AWARD_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case joaat("CLO_GRF_DECL_10"):
			if (!func_276(15415, -1, -1))
			{
				func_275(15415, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_011_M"):
		case joaat("MP_GUNRUNNING_AWARD_011_F"):
		case joaat("CLO_GRM_DECL_11"):
		case joaat("CLO_GRF_DECL_11"):
			if (!func_276(15399, -1, -1))
			{
				func_275(15399, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_012_M"):
		case joaat("MP_GUNRUNNING_AWARD_012_F"):
		case joaat("CLO_GRM_DECL_12"):
		case joaat("CLO_GRF_DECL_12"):
			if (!func_276(15404, -1, -1))
			{
				func_275(15404, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_013_M"):
		case joaat("MP_GUNRUNNING_AWARD_013_F"):
		case joaat("CLO_GRM_DECL_13"):
		case joaat("CLO_GRF_DECL_13"):
			if (!func_274(209, -1))
			{
				func_272(209, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_014_M"):
		case joaat("MP_GUNRUNNING_AWARD_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case joaat("CLO_GRF_DECL_14"):
			if (!func_276(15392, -1, -1))
			{
				func_275(15392, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_015_M"):
		case joaat("MP_GUNRUNNING_AWARD_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case joaat("CLO_GRF_DECL_15"):
			if (!func_276(15390, -1, -1))
			{
				func_275(15390, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_016_M"):
		case joaat("MP_GUNRUNNING_AWARD_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case joaat("CLO_GRF_DECL_16"):
			if (!func_276(15402, -1, -1))
			{
				func_275(15402, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_017_M"):
		case joaat("MP_GUNRUNNING_AWARD_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case joaat("CLO_GRF_DECL_17"):
			if (!func_276(15416, -1, -1))
			{
				func_275(15416, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_018_M"):
		case joaat("MP_GUNRUNNING_AWARD_018_F"):
		case joaat("CLO_GRM_DECL_18"):
		case joaat("CLO_GRF_DECL_18"):
			if (!func_274(209, -1))
			{
				func_272(209, 1, -1, 1);
				return true;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_GUNRUNNING_AWARD_019_M"):
		case joaat("MP_GUNRUNNING_AWARD_025_F"):
		case joaat("CLO_GRM_DECL_30"):
		case joaat("CLO_GRF_DECL_30"):
			if (!func_276(15426, -1, -1))
			{
				func_275(15426, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_020_M"):
		case joaat("MP_GUNRUNNING_AWARD_020_F"):
		case joaat("CLO_GRM_DECL_31"):
		case joaat("CLO_GRF_DECL_31"):
			if (!func_276(15422, -1, -1))
			{
				func_275(15422, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_020_M_ALT"):
		case joaat("MP_GUNRUNNING_AWARD_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_276(15423, -1, -1))
			{
				func_275(15423, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_021_M"):
		case joaat("MP_GUNRUNNING_AWARD_021_F"):
		case joaat("CLO_GRM_DECL_33"):
		case joaat("CLO_GRF_DECL_33"):
			if (!func_276(15421, -1, -1))
			{
				func_275(15421, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_022_M"):
		case joaat("MP_GUNRUNNING_AWARD_026_F"):
		case joaat("CLO_GRM_DECL_34"):
		case joaat("CLO_GRF_DECL_34"):
			if (!func_276(15427, -1, -1))
			{
				func_275(15427, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_023_M"):
		case joaat("MP_GUNRUNNING_AWARD_023_F"):
		case joaat("CLO_GRM_DECL_35"):
		case joaat("CLO_GRF_DECL_35"):
			if (!func_276(15419, -1, -1))
			{
				func_275(15419, 1, -1, 1);
				return true;
			}
			break;
		case joaat("MP_GUNRUNNING_AWARD_024_M"):
		case joaat("MP_GUNRUNNING_AWARD_024_F"):
		case joaat("CLO_GRM_DECL_36"):
		case joaat("CLO_GRF_DECL_36"):
			if (!func_276(15420, -1, -1))
			{
				func_275(15420, 1, -1, 1);
				return true;
			}
			break;
	}
	return false;
}

void func_272(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_273())
	{
		iVar0 = Global_2583656[iParam0 /*3*/][func_51(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

bool func_273()
{
	return true;
	return false;
}

bool func_274(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_51(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

bool func_275(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
		iParam2 = func_52();
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

bool func_276(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	iVar1 = func_278(iParam0, iParam1);
	iVar2 = func_277(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_277(int iParam0)
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

int func_278(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = func_52();
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

int func_279(int iParam0)
{
	int iVar0;

	iVar0 = func_281(iParam0);
	return func_50(func_280(iVar0), -1, 0);
}

int func_280(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		case 1:
			return 3952;
		case 2:
			return 3953;
		case 3:
			return 3954;
		case 4:
			return 3955;
		case 5:
			return 5456;
		default:
			break;
	}
	return 3951;
}

int func_281(int iParam0)
{
	int iVar0;

	if (func_282(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_183[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_282(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return false;
	}
	return true;
}

void func_283(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	iVar0 = func_281(iParam0);
	iVar1 = func_280(iVar0);
	iVar2 = (func_50(iVar1, -1, 0) + iParam1);
	func_159(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_286(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_183[iVar0 /*12*/] != 0)
			{
				iVar1 = func_280(iVar0);
				iVar3 = (iVar3 + func_50(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_285(iVar4))
			{
				bVar5 = iVar4;
			}
			iVar4++;
		}
		func_284(9357, bVar5, -1, 1);
	}
}

bool func_284(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (iParam2 == -1)
	{
		iParam2 = func_52();
	}
	if (bParam1 < 0)
	{
		bParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), false, true, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), true, true, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), false, false, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), true, false, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), false, true, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), false, false, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), false, true, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), false, false, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), false, true, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), false, true, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), false, true, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), false, true, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), false, true, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), false, true, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), false, true, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), false, true, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), false, true, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), false, true, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), false, true, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), false, true, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - STATS::_0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), false, true, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - STATS::_0x94F12ABF9C79E339((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), false, true, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), false, false, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	bVar2 = STATS::STAT_SET_MASKED_INT(iVar0, bParam1, iVar1, 8, bParam3);
	return bVar2;
}

int func_285(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
		case 2:
			return 300000;
		case 3:
			return 500000;
	}
	return 0;
}

int func_286(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	iVar0 = 0;
	iVar1 = func_288(iParam0, iParam1);
	iVar2 = func_287(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_287(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - STATS::_0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - STATS::_0x94F12ABF9C79E339((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_288(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), false, true, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), true, true, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), false, false, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), true, false, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), false, false, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), false, true, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), false, false, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), false, true, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), false, true, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), false, true, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), false, true, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), false, true, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), false, true, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), false, true, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), false, false, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), false, true, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), false, true, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), false, true, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), false, true, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), false, true, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), false, true, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), false, true, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), false, true, iParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

int func_289(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_176(iParam1);
	if (func_282(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16960;
				if (func_290(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16965);
				}
				if (func_290(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16970);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 3:
				iVar0 = Global_262145.f_16959;
				if (func_290(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16964);
				}
				if (func_290(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16969);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 4:
				iVar0 = Global_262145.f_16958;
				if (func_290(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16963);
				}
				if (func_290(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16968);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 0:
				iVar0 = Global_262145.f_16956;
				if (func_290(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16961);
				}
				if (func_290(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16966);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 2:
				iVar0 = Global_262145.f_16957;
				if (func_290(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16962);
				}
				if (func_290(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16967);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			case 5:
				iVar0 = Global_262145.f_21060;
				if (func_290(bParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21062);
				}
				if (func_290(bParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21061);
				}
				iVar0 = (iVar0 * iParam2);
				break;
		}
	}
	return iVar0;
}

bool func_290(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_292(bParam0, iParam1))
	{
		iVar0 = func_291(bParam0, iParam1);
		return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_5, iParam2);
	}
	return false;
}

int func_291(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_282(iParam1) && bParam0 != func_389())
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

bool func_292(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_282(iParam1) && bParam0 != func_389())
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

int func_293(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == func_389())
	{
		return 0;
	}
	if (func_282(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_294(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;

	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_162())
			{
				Var0 = { func_178() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*iParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar3 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*iParam3 = SYSTEM::CEIL(fVar6);
				}
				iVar7 = func_289(PLAYER::PLAYER_ID(), Var0, *iParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18595);
					iVar7 = SYSTEM::ROUND(fVar8);
				}
				else
				{
					fVar9 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18594);
					iVar7 = SYSTEM::ROUND(fVar9);
				}
				*bParam2 = (*bParam2 + iVar7);
				iVar11 = func_258(&uVar10);
				iVar12 = SYSTEM::ROUND(Global_262145.f_18585);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = SYSTEM::CEIL((IntToFloat(iVar11) * Global_262145.f_18584));
				iVar14 = ((*bParam2 / 100) * iVar13);
				*bParam2 = (*bParam2 + iVar14);
				if (uParam1->f_6)
				{
					*bParam2 = (*bParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*bParam2 = (*bParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*bParam2 = (*bParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_240(86);
				}
				Global_2537071.f_5124.f_381 = *bParam2;
			}
			else if (func_233(0))
			{
				Var15 = { func_295(func_181()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*iParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar18 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*iParam3 = SYSTEM::CEIL(fVar21);
				}
				iVar22 = func_289(func_181(), Var15, *iParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18595));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18594));
				}
				*bParam2 = (*bParam2 + iVar22);
				fVar23 = Global_262145.f_18634;
				iVar24 = SYSTEM::CEIL((IntToFloat(*bParam2) * fVar23));
				*bParam2 = iVar24;
				iVar25 = Global_262145.f_18635;
				if (*bParam2 > iVar25)
				{
					*bParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*bParam2 = (*bParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_295(bool bParam0)
{
	return Global_1628237[bParam0 /*615*/].f_11.f_193;
}

void func_296(int iParam0, bool bParam1, var uParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;

	if (iParam0 == 167)
	{
		if (func_132(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_311();
			}
			func_310();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_132(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*bParam3 = (*bParam3 + func_302(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_182));
				}
				else
				{
					*iParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*iParam4 = (*iParam4 + uParam2->f_8);
					}
					iVar0 = func_301(*iParam4);
					iVar1 = (iVar0 * *iParam4);
					*bParam3 = (*bParam3 + iVar1);
					iVar3 = func_258(&uVar2);
					iVar4 = Global_262145.f_16141;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_15350));
					iVar6 = ((*bParam3 / 100) * iVar5);
					*bParam3 = (*bParam3 + iVar6);
					if (uParam2->f_6)
					{
						*bParam3 = (*bParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_240(44);
					}
				}
				func_299(*bParam3);
				func_298();
				Global_2537071.f_5124.f_381 = *bParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						bVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_257(bVar9))
						{
							func_249(bVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_132(PLAYER::PLAYER_ID()))
		{
			func_297();
		}
	}
}

void func_297()
{
	int iVar0;

	iVar0 = Global_2586255[func_52()];
	iVar0++;
	func_158(3667, iVar0, -1, 1);
}

void func_298()
{
	int iVar0;

	iVar0 = Global_2586261[func_52()];
	iVar0++;
	func_158(3666, iVar0, -1, 1);
}

void func_299(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = Global_2586264[func_52()];
	iVar0 = (iVar0 + iParam0);
	func_158(3668, iVar0, -1, 1);
	if (func_286(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_300(iVar1))
			{
				bVar2 = iVar1;
			}
			iVar1++;
		}
		func_284(7666, bVar2, -1, 1);
	}
}

int func_300(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16274;
		case 2:
			return Global_262145.f_16275;
		case 3:
			return Global_262145.f_16276;
		case 4:
			return Global_262145.f_16277;
		case 5:
			return Global_262145.f_16278;
		case 6:
			return Global_262145.f_16279;
		case 7:
			return Global_262145.f_16280;
		case 8:
			return Global_262145.f_16281;
		case 9:
			return Global_262145.f_16282;
		case 10:
			return Global_262145.f_16283;
		case 11:
			return Global_262145.f_16284;
		case 12:
			return Global_262145.f_16285;
		case 13:
			return Global_262145.f_16286;
		case 14:
			return Global_262145.f_16287;
		case 15:
			return Global_262145.f_16288;
		case 16:
			return Global_262145.f_16289;
		case 17:
			return Global_262145.f_16290;
		case 18:
			return Global_262145.f_16291;
		case 19:
			return Global_262145.f_16292;
		case 20:
			return Global_262145.f_16293;
		case 21:
			return Global_262145.f_16294;
		case 22:
			return Global_262145.f_16295;
		case 23:
			return Global_262145.f_16296;
		case 24:
			return Global_262145.f_16297;
	}
	return 0;
}

int func_301(int iParam0)
{
	if (iParam0 >= Global_262145.f_15328)
	{
		return Global_262145.f_15349;
	}
	else if (iParam0 >= Global_262145.f_15327)
	{
		return Global_262145.f_15348;
	}
	else if (iParam0 >= Global_262145.f_15326)
	{
		return Global_262145.f_15347;
	}
	else if (iParam0 >= Global_262145.f_15325)
	{
		return Global_262145.f_15346;
	}
	else if (iParam0 >= Global_262145.f_15324)
	{
		return Global_262145.f_15345;
	}
	else if (iParam0 >= Global_262145.f_15323)
	{
		return Global_262145.f_15344;
	}
	else if (iParam0 >= Global_262145.f_15322)
	{
		return Global_262145.f_15343;
	}
	else if (iParam0 >= Global_262145.f_15321)
	{
		return Global_262145.f_15342;
	}
	else if (iParam0 >= Global_262145.f_15320)
	{
		return Global_262145.f_15341;
	}
	else if (iParam0 >= Global_262145.f_15319)
	{
		return Global_262145.f_15340;
	}
	else if (iParam0 >= Global_262145.f_15318)
	{
		return Global_262145.f_15339;
	}
	else if (iParam0 >= Global_262145.f_15317)
	{
		return Global_262145.f_15338;
	}
	else if (iParam0 >= Global_262145.f_15316)
	{
		return Global_262145.f_15337;
	}
	else if (iParam0 >= Global_262145.f_15315)
	{
		return Global_262145.f_15336;
	}
	else if (iParam0 >= Global_262145.f_15314)
	{
		return Global_262145.f_15335;
	}
	else if (iParam0 >= Global_262145.f_15313)
	{
		return Global_262145.f_15334;
	}
	else if (iParam0 >= Global_262145.f_15312)
	{
		return Global_262145.f_15333;
	}
	else if (iParam0 >= Global_262145.f_15311)
	{
		return Global_262145.f_15332;
	}
	else if (iParam0 >= Global_262145.f_15310)
	{
		return Global_262145.f_15331;
	}
	else if (iParam0 >= Global_262145.f_15309)
	{
		return Global_262145.f_15330;
	}
	return Global_262145.f_15329;
}

int func_302(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_309(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_308(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_307(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_303(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_303(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_307(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_303(int iParam0)
{
	int iVar0;

	if (func_306(iParam0))
	{
		iVar0 = func_304(func_305(iParam0));
		return func_50(iVar0, -1, 0);
	}
	return 0;
}

int func_304(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_305(int iParam0)
{
	int iVar0;

	if (func_306(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_306(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_307(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15528;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15526;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15530;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15524;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15522;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15532;
	}
	return 0;
}

bool func_308(int iParam0, int iParam1)
{
	int iVar0;

	if (func_306(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1676087[iVar0] == iParam1 && Global_1676094[iVar0] == iParam0)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_309(int iParam0)
{
	int iVar0;

	if (func_306(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

void func_310()
{
	int iVar0;

	iVar0 = Global_2586252[func_52()];
	iVar0++;
	Global_2586252[func_52()] = iVar0;
	func_158(3665, iVar0, -1, 1);
}

void func_311()
{
	int iVar0;
	int iVar1;

	iVar0 = Global_2586249[func_52()];
	iVar1 = Global_2586258[func_52()];
	iVar0++;
	iVar1++;
	Global_2586249[func_52()] = iVar0;
	Global_2586258[func_52()] = iVar1;
	Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_128 = iVar1;
	func_158(3663, iVar0, -1, 1);
	func_158(3664, iVar1, -1, 1);
}

void func_312()
{
	if (func_175())
	{
		Global_2451426.f_3074.f_134 = 0;
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_449 = Global_2451426.f_3074.f_134;
	}
}

void func_313()
{
	if (func_175())
	{
		if (Global_2451426.f_3074.f_134 < 10)
		{
			Global_2451426.f_3074.f_134++;
			Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_449 = Global_2451426.f_3074.f_134;
		}
	}
}

void func_314()
{
	if (func_175())
	{
		if (Global_2451426.f_3074.f_134 > 0)
		{
			Global_2451426.f_3074.f_134 = (Global_2451426.f_3074.f_134 - 1);
			Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_449 = Global_2451426.f_3074.f_134;
		}
	}
}

int func_315(bool bParam0)
{
	return Global_1628237[bParam0 /*615*/].f_11.f_28;
}

bool func_316(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return true;
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
			if (func_179(1) && !func_233(1))
			{
				if (func_317(func_181()))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_317(bool bParam0)
{
	if (bParam0 == -1)
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_26, 26);
}

int func_318(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18281;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12506) * Global_262145.f_12511));
		case 157:
			return 0;
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12456) * Global_262145.f_12461));
		case 151:
			return 0;
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12483) * Global_262145.f_12487));
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12496) * Global_262145.f_12500));
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12518) * Global_262145.f_12523));
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12680) * Global_262145.f_12681));
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12678) * Global_262145.f_12679));
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12682) * Global_262145.f_12683));
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12676) * Global_262145.f_12677));
		case 170:
			return 0;
		case 171:
			return Global_262145.f_15051;
		case 172:
			return Global_262145.f_15067;
		case 173:
			return Global_262145.f_15010;
		case 166:
			return 0;
		case 179:
			return Global_262145.f_18289;
		case 180:
			return Global_262145.f_18164;
		case 182:
			return 0;
		case 183:
			return Global_262145.f_18172;
		case 185:
			return Global_262145.f_18181;
		case 186:
			return 0;
		case 189:
			return Global_262145.f_18377;
		case 190:
			return 0;
		case 191:
			return 0;
		case 192:
			return 0;
		case 193:
			return Global_262145.f_18394;
		case 194:
			return 0;
		case 195:
			return 0;
		case 197:
			return Global_262145.f_18241;
		case 198:
			return 0;
		case 199:
			return Global_262145.f_18425;
		case 200:
			return 0;
		case 201:
			return Global_262145.f_18303;
		case 205:
			return Global_262145.f_18412;
		case 207:
			return 0;
		case 208:
			return Global_262145.f_18270;
		case 209:
			return 0;
		case 210:
			return Global_262145.f_18407;
		case 211:
			return Global_262145.f_18371;
		case 214:
			return Global_262145.f_18965;
		case 215:
			return Global_262145.f_18975;
		case 216:
			return Global_262145.f_18985;
		case 217:
			return Global_262145.f_18994;
		case 218:
			return Global_262145.f_19003;
		case 219:
			return Global_262145.f_19019;
		case 241:
			return Global_262145.f_24090;
		case 242:
			return Global_262145.f_24086;
		case 248:
			return Global_262145.f_24089;
		case 244:
			return Global_262145.f_24087;
		case 239:
			return Global_262145.f_24091;
		case 240:
			return Global_262145.f_24092;
		case 243:
			return Global_262145.f_26299;
		default:
			break;
	}
	return 0;
}

int func_319(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18282;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12507) * Global_262145.f_12512));
		case 157:
			return 0;
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12457) * Global_262145.f_12462));
		case 151:
			return 0;
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12484) * Global_262145.f_12488));
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12497) * Global_262145.f_12501));
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12519) * Global_262145.f_12524));
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12556) * Global_262145.f_12559));
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12602) * Global_262145.f_12605));
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12592) * Global_262145.f_12595));
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12547) * Global_262145.f_12550));
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12567) * Global_262145.f_12572));
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12532) * Global_262145.f_12535));
		case 170:
			return Global_262145.f_14993;
		case 171:
			return Global_262145.f_15052;
		case 172:
			return Global_262145.f_15068;
		case 173:
			return Global_262145.f_15011;
		case 166:
			return 0;
		case 167:
			return Global_262145.f_17090;
		case 168:
			return Global_262145.f_17089;
		case 179:
			return Global_262145.f_18290;
		case 180:
			return Global_262145.f_18165;
		case 182:
			return 0;
		case 183:
			return Global_262145.f_18173;
		case 185:
			return Global_262145.f_18182;
		case 186:
			return 0;
		case 189:
			return Global_262145.f_18378;
		case 190:
			return 0;
		case 191:
			return 0;
		case 192:
			return 0;
		case 193:
			return Global_262145.f_18395;
		case 194:
			return 0;
		case 195:
			return 0;
		case 197:
			return Global_262145.f_18242;
		case 198:
			return 0;
		case 199:
			return Global_262145.f_18426;
		case 200:
			return 0;
		case 201:
			return Global_262145.f_18304;
		case 205:
			return Global_262145.f_18413;
		case 207:
			return 0;
		case 208:
			return Global_262145.f_18271;
		case 209:
			return 0;
		case 210:
			return Global_262145.f_18408;
		case 211:
			return Global_262145.f_18372;
		case 214:
			return Global_262145.f_18966;
		case 215:
			return Global_262145.f_18976;
		case 216:
			return Global_262145.f_18986;
		case 217:
			return Global_262145.f_18995;
		case 218:
			return Global_262145.f_19004;
		case 219:
			return Global_262145.f_19020;
		case 178:
			if (func_175())
			{
				return Global_262145.f_18843;
			}
			else if (bParam1)
			{
				return Global_262145.f_18844;
			}
			break;
		case 188:
			if (func_175())
			{
				return Global_262145.f_18927;
			}
			else if (bParam1)
			{
				return Global_262145.f_18928;
			}
			break;
		case 225:
			if (func_175() && !func_162())
			{
				if (func_317(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21048;
				}
				else
				{
					return Global_262145.f_21049;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_21050;
			}
			break;
		case 226:
			if (func_175() && !func_162())
			{
				if (func_317(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21028;
				}
				else
				{
					return Global_262145.f_21029;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_21030;
			}
			break;
		case 227:
			if (func_175() && !func_162())
			{
				if (func_317(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21040;
				}
				else
				{
					return Global_262145.f_21041;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_21042;
			}
			break;
		case 229:
			if (func_175() && !func_162())
			{
				if (func_317(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22204;
				}
				else
				{
					return Global_262145.f_22205;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_22206;
			}
			break;
		case 230:
			if (func_175() && !func_162())
			{
				if (func_317(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22300;
				}
				else
				{
					return Global_262145.f_22301;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_22302;
			}
			break;
		case 233:
			if (func_175() && !func_162())
			{
				if (func_317(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22776;
				}
				else
				{
					return Global_262145.f_22777;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_22775;
			}
			break;
		case 241:
			return Global_262145.f_24097;
		case 242:
			return Global_262145.f_24093;
		case 244:
			return Global_262145.f_24094;
		case 248:
			return Global_262145.f_24096;
		case 239:
			return Global_262145.f_24098;
		case 240:
			return Global_262145.f_24099;
		case 237:
			if (func_175() && !func_162())
			{
				if (func_317(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23939;
				}
				else
				{
					return Global_262145.f_23940;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_23941;
			}
			break;
		case 238:
			if (func_175() && !func_162())
			{
				if (func_317(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24050;
				}
				else
				{
					return Global_262145.f_24051;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_24052;
			}
			break;
		case 249:
			if (func_175() && !func_162())
			{
				if (func_317(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24066;
				}
				else
				{
					return Global_262145.f_24067;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_24068;
			}
			break;
		case 243:
			if (func_175() && !func_162())
			{
				if (func_317(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_26302;
				}
				else
				{
					return Global_262145.f_26303;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_26302;
			}
			break;
		case 158:
			if (func_175() && !func_162())
			{
				if (func_317(PLAYER::PLAYER_ID()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_162())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_320(int iParam0, float fParam1, float fParam2)
{
	bool bVar0;

	if (iParam0 == 157)
	{
		*fParam1 = 1f;
		*fParam2 = 1f;
		return;
	}
	if (func_321(iParam0))
	{
		if (!func_175())
		{
			*fParam1 = 1f;
			*fParam2 = Global_262145.f_12400;
		}
		else
		{
			*fParam1 = 1f;
			*fParam2 = 1f;
		}
		return;
	}
	if (func_131(PLAYER::PLAYER_ID(), 1))
	{
		if (func_152(iParam0))
		{
			*fParam1 = (Global_262145.f_18141 / 100f);
			*fParam2 = (Global_262145.f_18141 / 100f);
		}
		else if (iParam0 == 242)
		{
			*fParam1 = Global_262145.f_24100;
			*fParam2 = Global_262145.f_24100;
		}
		else if (iParam0 == 244)
		{
			*fParam1 = Global_262145.f_24101;
			*fParam2 = Global_262145.f_24101;
		}
		else if (iParam0 == 248)
		{
			*fParam1 = Global_262145.f_24103;
			*fParam2 = Global_262145.f_24103;
		}
		else if (iParam0 == 241)
		{
			*fParam1 = Global_262145.f_24104;
			*fParam2 = Global_262145.f_24104;
		}
		else if (iParam0 == 239)
		{
			*fParam1 = Global_262145.f_24105;
			*fParam2 = Global_262145.f_24105;
		}
		else if (iParam0 == 240)
		{
			*fParam1 = Global_262145.f_24106;
			*fParam2 = Global_262145.f_24106;
		}
		else
		{
			*fParam1 = Global_262145.f_12397;
			*fParam2 = Global_262145.f_12396;
		}
	}
	else if (func_152(iParam0))
	{
		*fParam1 = (Global_262145.f_18142 / 100f);
		*fParam2 = (Global_262145.f_18142 / 100f);
	}
	else if (iParam0 == 242)
	{
		*fParam1 = Global_262145.f_24107;
		*fParam2 = Global_262145.f_24107;
	}
	else if (iParam0 == 244)
	{
		*fParam1 = Global_262145.f_24108;
		*fParam2 = Global_262145.f_24108;
	}
	else if (iParam0 == 248)
	{
		*fParam1 = Global_262145.f_24110;
		*fParam2 = Global_262145.f_24110;
	}
	else if (iParam0 == 241)
	{
		*fParam1 = Global_262145.f_24111;
		*fParam2 = Global_262145.f_24111;
	}
	else if (iParam0 == 239)
	{
		*fParam1 = Global_262145.f_24112;
		*fParam2 = Global_262145.f_24112;
	}
	else if (iParam0 == 240)
	{
		*fParam1 = Global_262145.f_24113;
		*fParam2 = Global_262145.f_24113;
	}
	else
	{
		*fParam1 = Global_262145.f_12399;
		*fParam2 = Global_262145.f_12398;
	}
	bVar0 = func_247();
	if (bVar0 != func_389())
	{
		if (func_245(PLAYER::PLAYER_ID(), bVar0, 1))
		{
			*fParam1 = 1f;
			*fParam2 = 1f;
		}
	}
}

bool func_321(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return true;
		default:
			break;
	}
	return false;
}

int func_322(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_193(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

void func_323()
{
	Global_2462221 = 1;
}

void func_324(int iParam0, bool bParam1)
{
	if (bParam1 > 0)
	{
		if (Global_262145.f_23489 == 0 || Global_262145.f_23489 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23489 == 1)
			{
				Global_2537071.f_283 = iParam0;
				if (bParam1 > Global_262145.f_6584)
				{
					bParam1 = Global_262145.f_6584;
				}
				Global_2537071.f_284 = bParam1;
				Global_2537071.f_285 = 0;
			}
		}
	}
}

bool func_325()
{
	return Global_262145.f_11406;
}

void func_326(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_337())
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
			if (bParam1 > 0 || Global_262145.f_27584)
			{
				func_327(iParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
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
			func_327(iParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
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
			if (bParam1 > 0 || Global_262145.f_27584)
			{
				func_327(iParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
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
			func_327(iParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
			break;
	}
}

int func_327(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar0 = false;
	if (!func_337())
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_52()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
	*iParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || bVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, bParam5, iParam6))
	{
		if ((bVar0 || bVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*iParam0 = func_334(iVar4, iParam1, iParam4, iParam2, iParam3, bParam5, 0, iParam6, iParam7, 1, 1);
			if (bVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*iParam0 != -1)
				{
					Global_4263954[*iParam0 /*85*/].f_66.f_8 = 1;
					Global_4263954[*iParam0 /*85*/].f_66.f_12 = 1;
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
			Global_4264539 = bParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = bParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_333(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_328(-1, iParam4, iParam6, bParam5, -1);
		}
	}
	return 0;
}

void func_328(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_329(iParam0);
	}
}

void func_329(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_337())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_332(iParam0))
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
		func_330(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_330(var uParam0)
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
	func_331(&(uParam0->f_14));
	func_331(&(uParam0->f_14.f_13));
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

void func_331(var uParam0)
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

bool func_332(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return false;
}

void func_333(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_334(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_337())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4263954[iVar0 /*85*/].f_66.f_1 = bParam5;
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
				func_335(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_335(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_237(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_336();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 36, iVar36);
	}
}

void func_336()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

bool func_337()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return false;
}

void func_338(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	if (Local_80.f_197 == 2)
	{
		func_349(bParam0, bParam1, iParam2, iParam3);
		return;
	}
	if (bLocal_2748 == -1)
	{
		bLocal_2748 = func_348(&uLocal_589, 0, 0);
	}
	if (!bParam0)
	{
		if (Local_80.f_197 != 2)
		{
			func_48(1);
		}
	}
	if (bLocal_2748 < (Global_262145.f_11288 * 60000))
	{
		fVar0 = Global_262145.f_11292;
	}
	else if (bLocal_2748 < (Global_262145.f_11289 * 60000))
	{
		fVar0 = Global_262145.f_11293;
	}
	else if (bLocal_2748 < (Global_262145.f_11290 * 60000))
	{
		fVar0 = Global_262145.f_11294;
	}
	else if (bLocal_2748 < (Global_262145.f_11291 * 60000))
	{
		fVar0 = Global_262145.f_11295;
	}
	else
	{
		fVar0 = Global_262145.f_11296;
	}
	fVar1 = SYSTEM::TO_FLOAT(func_347());
	fVar2 = SYSTEM::TO_FLOAT(func_346());
	fVar3 = SYSTEM::TO_FLOAT(func_345());
	fVar4 = SYSTEM::TO_FLOAT(func_344());
	fVar5 = func_343();
	iVar6 = func_342();
	if (iLocal_2749 > iVar6)
	{
		iLocal_2749 = iVar6;
	}
	iVar7 = func_341(1);
	iVar8 = func_339(1);
	*bParam1 = iVar7;
	*iParam2 = iVar8;
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Local_80.f_1, 14))
		{
			iVar9 = SYSTEM::ROUND((((fVar1 * fVar0) + (((fVar3 * fVar0) * (SYSTEM::TO_FLOAT(iLocal_2749) * fVar5)) / IntToFloat(iParam3))) * Global_262145.f_11444));
			*iParam2 = (*iParam2 + SYSTEM::ROUND((((fVar2 * fVar0) + ((fVar4 * fVar0) * (SYSTEM::TO_FLOAT(iLocal_2749) * fVar5))) * Global_262145.f_11445)));
			if (Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_5 == -1)
			{
				Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_5 = *bParam1;
			}
			func_235(&iVar9, 1);
			*bParam1 = (*bParam1 + iVar9);
		}
	}
}

int func_339(bool bParam0)
{
	int iVar0;

	if (!bParam0)
	{
		return Global_262145.f_11300;
	}
	func_340();
	iVar0 = (Global_262145.f_11300 * bLocal_2744);
	if (Local_80.f_197 == 2)
	{
		return 0;
	}
	return iVar0;
}

void func_340()
{
	float fVar0;

	if (bLocal_2744 != 0)
	{
		return;
	}
	if (func_24(&uLocal_2742))
	{
		bLocal_2744 = func_348(&uLocal_2742, 0, 0);
	}
	fVar0 = SYSTEM::TO_FLOAT(bLocal_2744);
	fVar0 = (fVar0 / 60000f);
	bLocal_2744 = SYSTEM::FLOOR(fVar0);
	if (bLocal_2744 >= 1)
	{
	}
	else
	{
		bLocal_2744 = true;
	}
	if (bLocal_2744 > Global_262145.f_11435)
	{
		bLocal_2744 = Global_262145.f_11435;
	}
}

int func_341(bool bParam0)
{
	int iVar0;

	if (!bParam0)
	{
		return Global_262145.f_11299;
	}
	func_340();
	iVar0 = (Global_262145.f_11299 * bLocal_2744);
	if (Local_80.f_197 == 2)
	{
		return 0;
	}
	return iVar0;
}

int func_342()
{
	if (Local_80.f_197 == 2)
	{
		return Global_262145.f_18354;
	}
	return Global_262145.f_11298;
}

float func_343()
{
	if (Local_80.f_197 == 2)
	{
		return Global_262145.f_18353;
	}
	return Global_262145.f_11297;
}

var func_344()
{
	if (Local_80.f_197 == 2)
	{
		return Global_262145.f_18347;
	}
	return Global_262145.f_11287;
}

var func_345()
{
	if (Local_80.f_197 == 2)
	{
		return Global_262145.f_18345;
	}
	return Global_262145.f_11286;
}

var func_346()
{
	if (Local_80.f_197 == 2)
	{
		return Global_262145.f_18346;
	}
	return Global_262145.f_11285;
}

var func_347()
{
	if (Local_80.f_197 == 2)
	{
		return Global_262145.f_18344;
	}
	return Global_262145.f_11284;
}

bool func_348(var uParam0, bool bParam1, bool bParam2)
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

void func_349(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	if (bLocal_2748 == -1)
	{
		bLocal_2748 = func_348(&uLocal_589, 0, 0);
	}
	if (bLocal_2748 < (Global_262145.f_11288 * 60000))
	{
		fVar0 = Global_262145.f_18348;
	}
	else if (bLocal_2748 < (Global_262145.f_11289 * 60000))
	{
		fVar0 = Global_262145.f_18349;
	}
	else if (bLocal_2748 < (Global_262145.f_11290 * 60000))
	{
		fVar0 = Global_262145.f_18350;
	}
	else if (bLocal_2748 < (Global_262145.f_11291 * 60000))
	{
		fVar0 = Global_262145.f_18351;
	}
	else
	{
		fVar0 = Global_262145.f_18352;
	}
	fVar1 = SYSTEM::TO_FLOAT(func_347());
	fVar2 = SYSTEM::TO_FLOAT(func_346());
	fVar3 = SYSTEM::TO_FLOAT(func_345());
	fVar4 = SYSTEM::TO_FLOAT(func_344());
	fVar5 = func_343();
	iVar6 = func_342();
	if (iLocal_2749 > iVar6)
	{
		iLocal_2749 = iVar6;
	}
	iVar7 = func_341(1);
	iVar8 = func_339(1);
	*bParam1 = iVar7;
	*iParam2 = iVar8;
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Local_80.f_1, 14))
		{
			iVar9 = SYSTEM::ROUND((((fVar1 * fVar0) + (((fVar3 * fVar0) * (SYSTEM::TO_FLOAT(iLocal_2749) * fVar5)) / IntToFloat(iParam3))) * Global_262145.f_11444));
			*iParam2 = (*iParam2 + SYSTEM::ROUND((((fVar2 * fVar0) + ((fVar4 * fVar0) * (SYSTEM::TO_FLOAT(iLocal_2749) * fVar5))) * Global_262145.f_11445)));
			if (Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_5 == -1)
			{
				Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_5 = *bParam1;
			}
			func_235(&iVar9, 1);
			*bParam1 = (*bParam1 + iVar9);
		}
	}
}

int func_350(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
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
	func_115(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = iParam1;
	Var0.f_18 = iParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_70(&Var0);
}

int func_351()
{
	if (Local_80.f_197 != 2)
	{
		return 66;
	}
	return 88;
}

struct<4> func_352()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_DRAW2P", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_DRAW2P", 16);
			break;
	}
	return Var0;
}

void func_353(bool bParam0)
{
	if (Local_80.f_197 == 2)
	{
		if (!MISC::IS_BIT_SET(iLocal_537, 31))
		{
			Global_1674356.f_2 = Local_80.f_179;
			Global_1674356.f_3 = Local_80.f_180;
			if (bParam0)
			{
				func_1068(1, 1, 0, !MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0), -1, -1, -1, -1, -1, 0);
			}
			else
			{
				func_1068(0, 2, 0, !MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0), -1, -1, -1, -1, -1, 0);
			}
		}
	}
}

int func_354(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
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
	func_115(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return func_70(&Var0);
}

int func_355()
{
	if (Local_80.f_197 != 2)
	{
		return 68;
	}
	return 88;
}

struct<4> func_356()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_DRAWP", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_DRAWP", 16);
			break;
	}
	return Var0;
}

bool func_357(bool bParam0, bool bParam1, bool bParam2)
{
	return false;
	if (!func_175())
	{
		return false;
	}
	if (bParam1 != func_389())
	{
		if (func_245(bParam1, bParam0, 1))
		{
			return true;
		}
	}
	if (bParam2 != func_389())
	{
		if (func_245(bParam2, bParam0, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_358(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_133();
	*bParam1 = func_389();
	if (bVar0 != func_389())
	{
		*iParam2 = 1;
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (MISC::IS_BIT_SET(Local_80.f_10, iVar2))
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
				{
					bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
					if (!func_367(bVar1, 0))
					{
						if (bVar1 != bVar0)
						{
							if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar1))
							{
								iVar4 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar1);
								iVar3 = iVar4;
								if (!MISC::IS_BIT_SET(Local_279[iVar3 /*8*/].f_1, 1))
								{
									*iParam2++;
									if (*bParam1 == func_389())
									{
										*bParam0 = bVar0;
										*bParam1 = bVar1;
									}
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	if (*iParam2 > 1)
	{
		return true;
	}
	return false;
}

bool func_359()
{
	if ((func_40(PLAYER::PLAYER_ID(), 21) || func_40(PLAYER::PLAYER_ID(), 22)) || func_365())
	{
		return true;
	}
	if (func_361())
	{
		func_360(22);
		return true;
	}
	return false;
}

void func_360(int iParam0)
{
	MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_4), iParam0);
}

bool func_361()
{
	if (func_144(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_44() && !func_364()) || func_363(PLAYER::PLAYER_ID(), 21)) || func_363(PLAYER::PLAYER_ID(), 25))
		{
			return true;
		}
		else
		{
			func_362(27);
		}
	}
	return false;
}

void func_362(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_4), iParam0);
}

bool func_363(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_208, iParam1);
}

bool func_364()
{
	return Global_1312418.f_1;
}

bool func_365()
{
	return func_274(358, -1);
}

bool func_366(bool bParam0)
{
	if (func_46(bParam0))
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 8);
}

bool func_367(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_368(-1, 0) == 8;
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

int func_368(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_52();
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

struct<4> func_369()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_OVR", 16);
			break;
		case 2:
			StringCopy(&Var0, "BK_RUN_OVER", 16);
			break;
	}
	return Var0;
}

void func_370()
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = MISC::IS_BIT_SET(Local_80.f_1, 1);
	if (Local_80.f_197 == 2)
	{
		bVar0 = true;
	}
	if (MISC::IS_BIT_SET(Local_80.f_1, 6))
	{
		if (!MISC::IS_BIT_SET(Local_80.f_1, 7))
		{
			if (func_374() - func_348(&(Local_80.f_24), 0, 0)) >= func_373()
			{
				func_22(&(Local_80.f_24));
				MISC::SET_BIT(&(Local_80.f_1), 7);
			}
		}
	}
	iVar1 = func_374();
	if (MISC::IS_BIT_SET(Local_80.f_1, 7))
	{
		iVar1 = func_373();
	}
	if (!MISC::IS_BIT_SET(Local_80.f_1, 12))
	{
		if (bVar0)
		{
			if (func_24(&(Local_80.f_30)))
			{
				func_22(&(Local_80.f_30));
			}
			if (!func_24(&(Local_80.f_24)))
			{
				func_388(&(Local_80.f_24), 0, 0);
				if (Local_80.f_34 > 0)
				{
					bVar2 = NETWORK::HAS_NETWORK_TIME_STARTED(NETWORK::_0xBA7F0B77D80A4EB7(), (-1 * Local_80.f_34));
					func_372(&(Local_80.f_24), bVar2);
					Local_80.f_34 = 0;
				}
			}
			else if (!MISC::IS_BIT_SET(Local_80.f_1, 2))
			{
				if ((iVar1 - func_348(&(Local_80.f_24), 0, 0)) <= 0)
				{
					if (MISC::IS_BIT_SET(Local_80.f_1, 1))
					{
						MISC::SET_BIT(&(Local_80.f_1), 2);
					}
					else
					{
						MISC::SET_BIT(&(Local_80.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (MISC::IS_BIT_SET(Local_80.f_1, 0))
			{
				if (func_24(&(Local_80.f_24)))
				{
					Local_80.f_34 = func_348(&(Local_80.f_24), 0, 0);
				}
			}
			else
			{
				Local_80.f_34 = 0;
			}
			if (func_24(&(Local_80.f_24)))
			{
				func_22(&(Local_80.f_24));
			}
			if (!func_24(&(Local_80.f_30)))
			{
				func_388(&(Local_80.f_30), 0, 0);
			}
			else if (func_23(&(Local_80.f_30), func_371(), 0))
			{
				MISC::SET_BIT(&(Local_80.f_1), 12);
			}
		}
	}
}

int func_371()
{
	if (Local_80.f_197 != 2)
	{
		return Global_262145.f_11137;
	}
	return Global_262145.f_18341 * 1000;
}

void func_372(var uParam0, bool bParam1)
{
	*uParam0 = bParam1;
	uParam0->f_1 = 1;
}

int func_373()
{
	return Global_262145.f_11152;
}

int func_374()
{
	if (Local_80.f_197 != 2)
	{
		return Global_262145.f_11136;
	}
	return 300000;
}

void func_375()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;

	bVar6 = false;
	bVar7 = false;
	if (Local_80 != 4)
	{
		iLocal_539 = 0;
		while (iLocal_539 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_539)))
			{
				iVar0++;
				bVar11 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_539));
				if (!func_367(bVar11, 0))
				{
					if (Local_80.f_197 == 2)
					{
						if (!bVar10)
						{
							if (func_384() != func_389())
							{
								if (func_384() == bVar11)
								{
									bVar10 = true;
								}
							}
							else
							{
								bVar10 = true;
							}
						}
					}
					if (MISC::IS_BIT_SET(Local_279[iLocal_539 /*8*/].f_1, 0))
					{
						iVar1++;
					}
					if (!func_46(bVar11) || (Local_80.f_197 == 2 && func_38(bVar11) > 0))
					{
						iVar4++;
					}
					else if (Local_80.f_21 == 0)
					{
						if (Local_80.f_197 == 2)
						{
							if (func_38(bVar11) == 0)
							{
							}
						}
					}
					if (Local_80.f_21 == 0)
					{
						if (!MISC::IS_BIT_SET(Local_279[iLocal_539 /*8*/].f_1, 0))
						{
							if (MISC::IS_BIT_SET(Local_279[iLocal_539 /*8*/].f_1, 13))
							{
								iVar5 = func_383();
								if (iVar5 < func_382())
								{
									MISC::SET_BIT(&(Local_80.f_35), iLocal_539);
								}
							}
							else if (MISC::IS_BIT_SET(Local_80.f_35, iLocal_539))
							{
								MISC::CLEAR_BIT(&(Local_80.f_35), iLocal_539);
							}
						}
					}
					if (!MISC::IS_BIT_SET(Local_80.f_1, 9))
					{
						if (Local_80.f_21 == 1)
						{
							if (MISC::IS_BIT_SET(Local_279[iLocal_539 /*8*/].f_1, 0))
							{
								if (!MISC::IS_BIT_SET(Local_279[iLocal_539 /*8*/].f_1, 4))
								{
									bVar7 = true;
								}
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					if (!MISC::IS_BIT_SET(Local_80.f_1, 4))
					{
						if (MISC::IS_BIT_SET(Local_279[iLocal_539 /*8*/].f_1, 3))
						{
							bVar8 = true;
						}
					}
					if (MISC::IS_BIT_SET(Local_279[iLocal_539 /*8*/].f_1, 0))
					{
						if (!MISC::IS_BIT_SET(Local_279[iLocal_539 /*8*/].f_1, 1))
						{
							if (!MISC::IS_BIT_SET(Local_80.f_1, 4) || (MISC::IS_BIT_SET(Local_80.f_1, 4) && !MISC::IS_BIT_SET(Local_279[iLocal_539 /*8*/].f_1, 5)))
							{
								if (func_381(bVar8))
								{
									iVar2++;
									if (!MISC::IS_BIT_SET(Local_80.f_9, iLocal_539))
									{
										MISC::SET_BIT(&(Local_80.f_9), iLocal_539);
										MISC::SET_BIT(&(Local_80.f_10), bVar11);
										if (MISC::IS_BIT_SET(Local_80.f_1, 3) && !MISC::IS_BIT_SET(Local_80.f_1, 11))
										{
										}
									}
									if (MISC::IS_BIT_SET(Local_80.f_1, 4))
									{
										bVar9 = true;
									}
								}
							}
							else if (!MISC::IS_BIT_SET(Local_80.f_1, 3))
							{
								if (MISC::IS_BIT_SET(Local_80.f_9, iLocal_539))
								{
									MISC::CLEAR_BIT(&(Local_80.f_9), iLocal_539);
									MISC::CLEAR_BIT(&(Local_80.f_10), bVar11);
								}
								if (MISC::IS_BIT_SET(Local_80.f_1, 4))
								{
									if (MISC::IS_BIT_SET(Local_279[iLocal_539 /*8*/].f_1, 5))
									{
										iVar3++;
									}
								}
							}
						}
						else if (MISC::IS_BIT_SET(Local_80.f_9, iLocal_539))
						{
							MISC::CLEAR_BIT(&(Local_80.f_9), iLocal_539);
							MISC::CLEAR_BIT(&(Local_80.f_10), bVar11);
						}
					}
					else
					{
						if (MISC::IS_BIT_SET(Local_80.f_9, iLocal_539))
						{
							MISC::CLEAR_BIT(&(Local_80.f_9), iLocal_539);
						}
						if (MISC::IS_BIT_SET(Local_80.f_10, bVar11))
						{
							MISC::CLEAR_BIT(&(Local_80.f_10), bVar11);
						}
					}
					if (func_1274(bVar11, 1, 1))
					{
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(Local_80.f_9, iLocal_539))
					{
						MISC::CLEAR_BIT(&(Local_80.f_9), iLocal_539);
					}
					if (MISC::IS_BIT_SET(Local_80.f_35, iLocal_539))
					{
						MISC::CLEAR_BIT(&(Local_80.f_35), iLocal_539);
					}
				}
				if (Local_80.f_21 <= 2)
				{
					bVar6 = true;
				}
				else if (!MISC::IS_BIT_SET(Local_279[iLocal_539 /*8*/].f_1, 2))
				{
					if (!func_367(bVar11, 0))
					{
					}
					bVar6 = true;
				}
			}
			else
			{
				if (MISC::IS_BIT_SET(Local_80.f_9, iLocal_539))
				{
					MISC::CLEAR_BIT(&(Local_80.f_9), iLocal_539);
				}
				if (MISC::IS_BIT_SET(Local_80.f_35, iLocal_539))
				{
					MISC::CLEAR_BIT(&(Local_80.f_35), iLocal_539);
				}
			}
			iLocal_539++;
		}
		if (Local_80.f_197 == 2)
		{
			if (!MISC::IS_BIT_SET(Local_80.f_1, 17))
			{
				if (!bVar10)
				{
					MISC::SET_BIT(&(Local_80.f_1), 17);
				}
			}
		}
		if (iVar1 > Local_80.f_183)
		{
			Local_80.f_183 = iVar1;
		}
		if (iVar0 > Local_80.f_182)
		{
			Local_80.f_182 = iVar0;
		}
		else
		{
			Local_80.f_181 = (Local_80.f_182 - iVar0);
		}
		if (Local_80.f_165 != (iVar2 + iVar3))
		{
			Local_80.f_165 = (iVar2 + iVar3);
			func_377();
		}
		if (!MISC::IS_BIT_SET(Local_80.f_1, 13))
		{
			if (Local_80.f_165 >= func_382() || (iVar4 >= 2 && Local_80.f_165 >= iVar4))
			{
				MISC::SET_BIT(&(Local_80.f_1), 13);
			}
		}
		if (Local_80.f_21 == 0)
		{
			if (!MISC::IS_BIT_SET(Local_80.f_1, 0))
			{
				if (iVar1 >= 1)
				{
					MISC::SET_BIT(&(Local_80.f_1), 0);
				}
			}
			else if (iVar1 == 0)
			{
				MISC::CLEAR_BIT(&(Local_80.f_1), 0);
			}
			if (!MISC::IS_BIT_SET(Local_80.f_1, 1))
			{
				if (iVar1 >= 2)
				{
					MISC::SET_BIT(&(Local_80.f_1), 1);
				}
			}
			else if (iVar1 < 2)
			{
				MISC::CLEAR_BIT(&(Local_80.f_1), 1);
			}
			if (!MISC::IS_BIT_SET(Local_80.f_1, 6))
			{
				if (iVar1 >= func_376())
				{
					MISC::SET_BIT(&(Local_80.f_1), 6);
				}
			}
			if (Local_80.f_197 == 2)
			{
				if (!MISC::IS_BIT_SET(Local_80.f_1, 18))
				{
					if (func_24(&(Local_80.f_32)))
					{
						if (func_23(&(Local_80.f_32), 10000, 0))
						{
							if (iVar4 < 2)
							{
								MISC::SET_BIT(&(Local_80.f_1), 18);
							}
						}
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_80.f_1, 9))
		{
			if (Local_80.f_21 == 1)
			{
				if (!bVar7)
				{
					MISC::SET_BIT(&(Local_80.f_1), 9);
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_80.f_1, 4))
		{
			if (bVar8)
			{
				MISC::SET_BIT(&(Local_80.f_1), 4);
			}
		}
		if (MISC::IS_BIT_SET(Local_80.f_1, 4))
		{
			if (!MISC::IS_BIT_SET(Local_80.f_1, 3))
			{
				if (!MISC::IS_BIT_SET(Local_80.f_1, 10))
				{
					if (!func_24(&(Local_80.f_28)))
					{
						func_388(&(Local_80.f_28), 0, 0);
					}
					else if (func_23(&(Local_80.f_28), 60000, 0))
					{
						MISC::SET_BIT(&(Local_80.f_1), 10);
					}
				}
				if (iVar2 == 0 && iVar3 == 0)
				{
					if (!MISC::IS_BIT_SET(Local_80.f_1, 10))
					{
						MISC::SET_BIT(&(Local_80.f_1), 10);
					}
				}
			}
		}
		if (Local_80.f_21 == 2)
		{
			if (!MISC::IS_BIT_SET(Local_80.f_1, 3))
			{
				if (iVar2 == 1 || bVar9)
				{
					Local_80.f_169 = 1900;
					Local_80.f_168 = 18000;
					MISC::SET_BIT(&(Local_80.f_1), 3);
					if (!MISC::IS_BIT_SET(Local_80.f_1, 4))
					{
						MISC::SET_BIT(&(Local_80.f_1), 11);
					}
					if (iVar1 == 1)
					{
						if (!MISC::IS_BIT_SET(Local_80.f_1, 14))
						{
							MISC::SET_BIT(&(Local_80.f_1), 14);
						}
					}
				}
				else if (iVar2 == 0)
				{
					if (!MISC::IS_BIT_SET(Local_80.f_1, 3))
					{
						if (!MISC::IS_BIT_SET(Local_80.f_1, 4) || (MISC::IS_BIT_SET(Local_80.f_1, 4) && iVar3 == 0))
						{
							MISC::SET_BIT(&(Local_80.f_1), 3);
							if (!MISC::IS_BIT_SET(Local_80.f_1, 4))
							{
								MISC::SET_BIT(&(Local_80.f_1), 11);
							}
						}
					}
				}
				else if (iVar4 == 0)
				{
					Local_80.f_21 = 5;
				}
				else if (MISC::IS_BIT_SET(Local_80.f_1, 4))
				{
				}
			}
		}
		if (MISC::IS_BIT_SET(Local_80.f_1, 3))
		{
			if (!func_24(&(Local_80.f_174)))
			{
				func_388(&(Local_80.f_174), 0, 0);
			}
			if (func_23(&(Local_80.f_174), 100, 0))
			{
				if (!MISC::IS_BIT_SET(Local_80.f_1, 11))
				{
					func_377();
					MISC::SET_BIT(&(Local_80.f_1), 11);
				}
			}
		}
		if (Local_80.f_21 > 2)
		{
			if (!MISC::IS_BIT_SET(Local_80.f_1, 5))
			{
				if (!bVar6)
				{
					MISC::SET_BIT(&(Local_80.f_1), 5);
				}
			}
		}
	}
}

int func_376()
{
	if (Global_262145.f_11407 < Global_262145.f_11476)
	{
		return Global_262145.f_11407;
	}
	return Global_262145.f_11476;
}

void func_377()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			func_380(iVar0);
			bVar2 = MISC::IS_BIT_SET(Local_279[iVar0 /*8*/].f_1, 0);
			bVar3 = true;
			if (!bVar2)
			{
				bVar3 = false;
			}
			if (MISC::IS_BIT_SET(Local_279[iVar0 /*8*/].f_1, 1))
			{
				bVar3 = false;
			}
			if (MISC::IS_BIT_SET(Local_80.f_1, 4))
			{
				if (MISC::IS_BIT_SET(Local_279[iVar0 /*8*/].f_1, 5))
				{
					bVar3 = false;
				}
			}
			func_379(iVar0, iVar1, bVar3, bVar2);
		}
		else if (Local_80.f_36[iVar0 /*4*/].f_2 != -1)
		{
			func_380(iVar0);
		}
		iVar0++;
	}
	func_378();
}

void func_378()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;

	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_80.f_36[iVar1 /*4*/].f_2 > Local_80.f_36[(iVar1 - 1) /*4*/].f_2)
				{
					uVar2 = Local_80.f_36[iVar1 /*4*/].f_2;
					uVar3 = Local_80.f_36[iVar1 /*4*/];
					uVar4 = Local_80.f_36[iVar1 /*4*/].f_1;
					uVar5 = Local_80.f_36[iVar1 /*4*/].f_3;
					Local_80.f_36[iVar1 /*4*/].f_2 = Local_80.f_36[(iVar1 - 1) /*4*/].f_2;
					Local_80.f_36[iVar1 /*4*/] = Local_80.f_36[(iVar1 - 1) /*4*/];
					Local_80.f_36[iVar1 /*4*/].f_1 = Local_80.f_36[(iVar1 - 1) /*4*/].f_1;
					Local_80.f_36[iVar1 /*4*/].f_3 = Local_80.f_36[(iVar1 - 1) /*4*/].f_3;
					Local_80.f_36[(iVar1 - 1) /*4*/].f_2 = uVar2;
					Local_80.f_36[(iVar1 - 1) /*4*/].f_3 = uVar5;
					Local_80.f_36[(iVar1 - 1) /*4*/] = uVar3;
					Local_80.f_36[(iVar1 - 1) /*4*/].f_1 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_379(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		iVar0 = 1;
	}
	if (bParam3)
	{
		iVar1 = 1;
	}
	Local_80.f_36[iParam0 /*4*/] = iParam0;
	Local_80.f_36[iParam0 /*4*/].f_1 = iParam1;
	Local_80.f_36[iParam0 /*4*/].f_2 = iVar0;
	Local_80.f_36[iParam0 /*4*/].f_3 = iVar1;
}

void func_380(int iParam0)
{
	Local_80.f_36[iParam0 /*4*/] = -1;
	Local_80.f_36[iParam0 /*4*/].f_1 = -1;
	Local_80.f_36[iParam0 /*4*/].f_2 = -1;
	Local_80.f_36[iParam0 /*4*/].f_3 = -1;
}

bool func_381(bool bParam0)
{
	if (!MISC::IS_BIT_SET(Local_80.f_1, 3))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(Local_80.f_1, 3))
	{
		if (!MISC::IS_BIT_SET(Local_80.f_1, 11))
		{
			if (MISC::IS_BIT_SET(Local_80.f_1, 4))
			{
				return true;
			}
			if (bParam0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_382()
{
	if (Local_80.f_197 != 2)
	{
		return Global_262145.f_11407;
	}
	return Global_262145.f_18343;
}

int func_383()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (MISC::IS_BIT_SET(Local_80.f_35, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_384()
{
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_80.f_198)))
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_80.f_198));
	}
	return func_389();
}

void func_385(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	vVar0.x = 1982372647;
	vVar0.f_1 = PLAYER::PLAYER_ID();
	vVar0.f_2 = iParam0;
	iVar3 = func_386(1, 1);
	if (!iVar3 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar3);
	}
}

int func_386(bool bParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_1274(bVar2, 0, 0))
		{
			if (bVar2 != PLAYER::PLAYER_ID() || bParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_367(bVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_387(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_388(var uParam0, bool bParam1, bool bParam2)
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

bool func_389()
{
	return -1;
}

void func_390()
{
	if (Local_80.f_197 != -1)
	{
		return;
	}
	switch (Local_80.f_167)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_80.f_197 = 0;
			break;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			Local_80.f_197 = 2;
			func_391();
			break;
	}
}

void func_391()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (Local_80.f_198 == -1)
		{
			Local_80.f_198 = NETWORK::PARTICIPANT_ID_TO_INT();
		}
	}
}

bool func_392(var uParam0)
{
	if (func_402())
	{
		*uParam0 = MISC::GET_RANDOM_INT_IN_RANGE(6, 11);
		if (!func_396(*uParam0, 1128792064 /* Float: 200f */))
		{
		}
		else
		{
			return false;
		}
	}
	else
	{
		*uParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	}
	if (!func_395(*uParam0))
	{
		if (!func_393(136, *uParam0, 0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_393(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_394(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8112)
		{
			if (Global_2506618.f_136[iVar0 /*2*/] == iVar1 && Global_2506618.f_136[iVar0 /*2*/].f_1 == func_387(iParam0, iParam1, iParam2, iParam3))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_394(int iParam0)
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

bool func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_11139;
		case 1:
			return Global_262145.f_11140;
		case 2:
			return Global_262145.f_11141;
		case 3:
			return Global_262145.f_11142;
		case 4:
			return Global_262145.f_11143;
		case 6:
			return Global_262145.f_18356;
		case 7:
			return Global_262145.f_18357;
		case 8:
			return Global_262145.f_18358;
		case 9:
			return Global_262145.f_18359;
		case 10:
			return Global_262145.f_18360;
	}
	return false;
}

int func_396(int iParam0, int iParam1)
{
	return func_397(func_401(iParam0), iParam1, 1, 1, 0, 0, 0, 0);
}

int func_397(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam8 == 0)
		{
			if (func_1274(bVar1, bParam4, bParam5))
			{
				if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_400(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && bParam9) && bParam6) && func_398(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_218(bVar1), vParam0, true) < fParam3)
								{
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
	return 0;
}

bool func_398(bool bParam0)
{
	if (func_215(PLAYER::PLAYER_ID(), bParam0))
	{
		return true;
	}
	Global_2513218 = { func_64(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2513218))
	{
		return true;
	}
	if (func_399(PLAYER::PLAYER_ID(), bParam0))
	{
		return true;
	}
	return false;
}

bool func_399(bool bParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = func_119(bParam0);
	if (!bVar0 == func_389())
	{
		if (bVar0 == func_119(bParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_400(bool bParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2425662[bParam0 /*421*/].f_245)
	{
		return true;
	}
	return false;
}

Vector3 func_401(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 6:
			vVar0 = { 770.8729f, -232.9857f, 65.1145f };
			break;
		case 7:
			vVar0 = { 157.237f, -1519.715f, 28.1416f };
			break;
		case 8:
			vVar0 = { -899.8332f, 5567.762f, 2.7747f };
			break;
		case 9:
			vVar0 = { -1894.427f, 2010.27f, 140.5029f };
			break;
		case 10:
			vVar0 = { 1036.689f, -619.3324f, 57.1851f };
			break;
	}
	return vVar0;
}

bool func_402()
{
	return func_403(PLAYER::PLAYER_ID()) == 200;
}

int func_403(int iParam0)
{
	if (func_404(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_32;
	}
	return -1;
}

bool func_404(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_32 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_33 != -1))
	{
		return true;
	}
	return false;
}

bool func_405()
{
	if (Global_2537071.f_5124.f_40)
	{
		Global_2537071.f_5124.f_40 = 0;
		return true;
	}
	return false;
}

bool func_406(var uParam0)
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

void func_407(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_388(uParam0, 0, 0);
		}
	}
}

void func_408()
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_367(PLAYER::PLAYER_ID(), 0))
	{
		switch (iLocal_2764)
		{
			case 0:
				if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4, 0))
				{
					if (func_423("PEN_BIKE"))
					{
						MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 0);
					}
				}
				else if (!func_423("PEN_BIKE"))
				{
					MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 0);
				}
				iLocal_2764++;
				break;
			case 1:
				if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4, 1))
				{
					if (func_423("PEN_VEHG"))
					{
						MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 1);
					}
				}
				else if (!func_423("PEN_VEHG"))
				{
					MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 1);
				}
				iLocal_2764++;
				break;
			case 2:
				if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4, 2))
				{
					if (func_423("PEN_PBIKE"))
					{
						MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 2);
					}
				}
				else if (!func_423("PEN_PBIKE"))
				{
					MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 2);
				}
				iLocal_2764++;
				break;
			case 3:
				if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4, 3))
				{
					if (func_423("PEN_PVEHG"))
					{
						MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 3);
					}
				}
				else if (!func_423("PEN_PVEHG"))
				{
					MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 3);
				}
				iLocal_2764++;
				break;
			case 4:
				if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4, 4))
				{
					if (func_423("PEN_AREA"))
					{
						MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 4);
					}
				}
				else if (!func_423("PEN_AREA"))
				{
					MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 4);
				}
				iLocal_2764++;
				break;
			case 5:
				if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4, 5))
				{
					if (func_423("PEN_BAREA"))
					{
						MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 5);
					}
				}
				else if (!func_423("PEN_BAREA"))
				{
					MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 5);
				}
				iLocal_2764++;
				break;
			case 6:
				if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4, 6))
				{
					if (func_423("PEN_EXITV"))
					{
						MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 6);
					}
				}
				else if (!func_423("PEN_EXITV"))
				{
					MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 6);
				}
				iLocal_2764++;
				break;
			case 7:
				Var0 = { func_422() };
				if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4, 7))
				{
					if (func_423(&Var0))
					{
						MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 7);
					}
				}
				else if (!func_423(&Var0))
				{
					MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4), 7);
				}
				iLocal_2764++;
				break;
		}
		if (iLocal_2764 > 7)
		{
			iLocal_2764 = 0;
		}
	}
	else
	{
		if (Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4 != 0)
		{
			Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4 = 0;
		}
		iVar4 = Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_740;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
			{
				iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
				iVar6 = iVar5;
				switch (iLocal_2764)
				{
					case 0:
						if (!MISC::IS_BIT_SET(Local_279[iVar6 /*8*/].f_4, 0))
						{
							if (func_423("PEN_BIKE"))
							{
								func_421();
							}
						}
						else if (!func_423("PEN_BIKE"))
						{
							func_409("PEN_BIKE", 0);
						}
						iLocal_2764++;
						break;
					case 1:
						if (!MISC::IS_BIT_SET(Local_279[iVar6 /*8*/].f_4, 1))
						{
							if (func_423("PEN_VEHG"))
							{
								func_421();
							}
						}
						else if (!func_423("PEN_VEHG"))
						{
							func_409("PEN_VEHG", 0);
						}
						iLocal_2764++;
						break;
					case 2:
						if (!MISC::IS_BIT_SET(Local_279[iVar6 /*8*/].f_4, 2))
						{
							if (func_423("PEN_PBIKE"))
							{
								func_421();
							}
						}
						else if (!func_423("PEN_PBIKE"))
						{
							func_409("PEN_PBIKE", 0);
						}
						iLocal_2764++;
						break;
					case 3:
						if (!MISC::IS_BIT_SET(Local_279[iVar6 /*8*/].f_4, 3))
						{
							if (func_423("PEN_PVEHG"))
							{
								func_421();
							}
						}
						else if (!func_423("PEN_PVEHG"))
						{
							func_409("PEN_PVEHG", 0);
						}
						iLocal_2764++;
						break;
					case 4:
						if (!MISC::IS_BIT_SET(Local_279[iVar6 /*8*/].f_4, 4))
						{
							if (func_423("PEN_AREA"))
							{
								func_421();
							}
						}
						else if (!func_423("PEN_AREA"))
						{
							func_409("PEN_AREA", 0);
						}
						iLocal_2764++;
						break;
					case 5:
						if (!MISC::IS_BIT_SET(Local_279[iVar6 /*8*/].f_4, 5))
						{
							if (func_423("PEN_BAREA"))
							{
								func_421();
							}
						}
						else if (!func_423("PEN_BAREA"))
						{
							func_409("PEN_BAREA", 0);
						}
						iLocal_2764++;
						break;
					case 6:
						if (!MISC::IS_BIT_SET(Local_279[iVar6 /*8*/].f_4, 6))
						{
							if (func_423("PEN_EXITV"))
							{
								func_421();
							}
						}
						else if (!func_423("PEN_EXITV"))
						{
							func_409("PEN_EXITV", 0);
						}
						iLocal_2764++;
						break;
					case 7:
						Var0 = { func_422() };
						if (!MISC::IS_BIT_SET(Local_279[iVar6 /*8*/].f_4, 7))
						{
							if (func_423(&Var0))
							{
								func_421();
							}
						}
						else if (!func_423(&Var0))
						{
							func_409(&Var0, 0);
						}
						iLocal_2764++;
						break;
				}
				if (iLocal_2764 > 7)
				{
					iLocal_2764 = 0;
				}
			}
		}
	}
}

void func_409(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_419(sParam0))
	{
		return;
	}
	func_413();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_412();
	func_411(bParam1);
	func_410();
}

void func_410()
{
	MISC::SET_BIT(&(Global_1312585.f_59), 1);
}

void func_411(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_412()
{
	Global_1312585.f_10 = NETWORK::HAS_NETWORK_TIME_STARTED(NETWORK::_0xBA7F0B77D80A4EB7(), 86400000);
	Global_1312585.f_11 = NETWORK::_0xBA7F0B77D80A4EB7();
}

void func_413()
{
	func_415();
	func_414(0);
}

void func_414(bool bParam0)
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

void func_415()
{
	if (!func_418())
	{
	}
	if (func_417())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312585.f_12));
		func_416();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_416()
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

bool func_417()
{
	if (Global_1312585 == 20)
	{
		return false;
	}
	return true;
}

bool func_418()
{
	if (!func_417())
	{
		return false;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_416();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_419(char* sParam0)
{
	if (!func_417())
	{
		return false;
	}
	if (Global_1312585 == 11)
	{
		return func_420(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_420(char* sParam0)
{
	if (!func_417())
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

void func_421()
{
	if (!func_417())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return;
	}
	func_413();
}

struct<4> func_422()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_STARTO", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_STARTO", 16);
			break;
	}
	return Var0;
}

bool func_423(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	if (!func_417())
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
	return func_419(sParam0);
}

void func_424()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
	{
		if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
		{
			bVar5 = true;
		}
	}
	if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
	{
		if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (iVar1 != PLAYER::PLAYER_PED_ID())
						{
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
								if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
								{
									iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
									iVar4 = iVar3;
									if (MISC::IS_BIT_SET(Local_279[iVar4 /*8*/].f_1, 0))
									{
										bVar5 = true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (func_427(PLAYER::PLAYER_ID()))
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		func_426();
		func_425();
	}
}

void func_425()
{
	Global_2537071.f_1791.f_56 = 1;
}

void func_426()
{
	Global_2537071.f_1791.f_54 = 1;
}

bool func_427(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 4);
}

void func_428()
{
	float fVar0;

	if (!func_24(&uLocal_2734) || (func_24(&uLocal_2734) && func_23(&uLocal_2734, 5000, 0)))
	{
		fVar0 = func_431(PLAYER::PLAYER_PED_ID(), vLocal_559, 1);
		if (!func_430(PLAYER::PLAYER_ID()))
		{
			if (fVar0 <= 700f)
			{
				func_429(1);
			}
		}
		else if (fVar0 > 700f)
		{
			func_429(0);
		}
		func_22(&uLocal_2734);
		func_388(&uLocal_2734, 0, 0);
	}
}

void func_429(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 5);
	}
}

bool func_430(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 5);
	}
	return false;
}

float func_431(int iParam0, vector3 vParam1, bool bParam4)
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

void func_432()
{
	if (Local_80.f_197 != 2)
	{
		if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0) || MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
		{
			if (!MISC::IS_BIT_SET(iLocal_537, 11))
			{
				if (Local_80.f_21 == 2)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("PENNED_IN_START_MUSIC"))
					{
						MISC::SET_BIT(&iLocal_537, 11);
					}
				}
			}
			else if (MISC::IS_BIT_SET(iLocal_537, 15))
			{
				if (!MISC::IS_BIT_SET(iLocal_537, 12))
				{
					if (!MISC::IS_BIT_SET(iLocal_537, 16))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("PENNED_IN_70_PERCENT"))
						{
							MISC::SET_BIT(&iLocal_537, 16);
						}
					}
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_537, 12))
			{
				if (MISC::IS_BIT_SET(iLocal_537, 11))
				{
					if (Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 > 2)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("PENNED_IN_STOP_MUSIC"))
						{
							MISC::SET_BIT(&iLocal_537, 12);
						}
					}
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0) || MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
	{
		if (!MISC::IS_BIT_SET(iLocal_537, 11))
		{
			if (Local_80.f_21 == 2)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("CAGED_IN_START_MUSIC"))
				{
					MISC::SET_BIT(&iLocal_537, 11);
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				}
			}
		}
		else if (MISC::IS_BIT_SET(iLocal_537, 15))
		{
			if (!MISC::IS_BIT_SET(iLocal_537, 12))
			{
				if (!MISC::IS_BIT_SET(iLocal_537, 16))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("CAGED_IN_70_PERCENT"))
					{
						MISC::SET_BIT(&iLocal_537, 16);
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(iLocal_537, 12))
		{
			if (MISC::IS_BIT_SET(iLocal_537, 11))
			{
				if (Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 > 2)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("CAGED_IN_STOP_MUSIC"))
					{
						MISC::SET_BIT(&iLocal_537, 12);
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
					}
				}
			}
		}
	}
}

void func_433()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_367(PLAYER::PLAYER_ID(), 0))
	{
		if (MISC::IS_BIT_SET(iLocal_537, 22))
		{
			MISC::CLEAR_BIT(&iLocal_537, 22);
		}
		return;
	}
	if (func_617())
	{
		func_494(0);
	}
	iVar0 = Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_740;
	if (!MISC::IS_BIT_SET(iLocal_537, 22))
	{
		if (Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1 != 0)
		{
			Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1 = 0;
		}
		MISC::SET_BIT(&iLocal_537, 22);
	}
	if (!MISC::IS_BIT_SET(iLocal_537, 13))
	{
		MISC::SET_BIT(&iLocal_537, 13);
		func_421();
	}
	if (iLocal_2761 == 2)
	{
		func_485();
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			iVar2 = iVar1;
			iVar3 = Local_279[iVar2 /*8*/].f_7;
			if (iVar3 > 0)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_557))
				{
					HUD::REMOVE_BLIP(&iLocal_557);
				}
			}
			switch (iVar3)
			{
				case 0:
					func_478(1, 0);
					func_468();
					func_454();
					break;
				case 1:
					func_454();
					func_478(!MISC::IS_BIT_SET(iLocal_536, 9), 0);
					break;
				case 2:
					func_29(1);
					func_448();
					func_478(0, 0);
					func_439();
					if (MISC::IS_BIT_SET(Local_279[iVar2 /*8*/].f_1, 5))
					{
						if (!MISC::IS_BIT_SET(Local_279[iVar2 /*8*/].f_1, 1))
						{
							if (!func_24(&uLocal_569))
							{
								func_388(&uLocal_569, 0, 0);
							}
							if (func_24(&uLocal_569))
							{
								if ((func_438() - func_348(&uLocal_569, 0, 0)) >= 0)
								{
									func_435((func_438() - func_348(&uLocal_569, 0, 0)), "PEN_ELM", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else if (func_24(&uLocal_569))
					{
						func_22(&uLocal_569);
					}
					func_37();
					break;
				case 3:
					if (MISC::IS_BIT_SET(Local_279[iVar2 /*8*/].f_1, 0) || MISC::IS_BIT_SET(Local_279[iVar2 /*8*/].f_1, 6))
					{
						func_478(0, 1);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_556))
					{
						HUD::SET_BLIP_COLOUR(iLocal_556, 55);
					}
					func_37();
					break;
				default:
					if (MISC::IS_BIT_SET(Local_279[iVar2 /*8*/].f_1, 2))
					{
						func_434();
					}
					break;
			}
		}
	}
	if (Local_80.f_21 > 4)
	{
		func_1160();
	}
}

void func_434()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_556))
	{
		HUD::REMOVE_BLIP(&iLocal_556);
	}
}

void func_435(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_437(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_436(7, iVar0);
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

void func_436(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_437(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

int func_438()
{
	if (Local_80.f_197 != 2)
	{
		return Global_262145.f_11153;
	}
	return 15000;
}

void func_439()
{
	float fVar0;
	float fVar1;

	if (MISC::IS_BIT_SET(Local_80.f_1, 3))
	{
		return;
	}
	if (iLocal_2749 == -1)
	{
		if (Local_80.f_165 > 0)
		{
			iLocal_2749 = Local_80.f_165;
		}
	}
	else if (Local_80.f_165 > iLocal_2749)
	{
		iLocal_2749 = Local_80.f_165;
	}
	if (func_445(0))
	{
		if (!func_1004(1))
		{
			func_442(Local_80.f_165, "PEN_REMP", -1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	fVar0 = func_441();
	if (fVar0 >= fLocal_1463)
	{
		fLocal_1463 = fVar0;
	}
	if (!MISC::IS_BIT_SET(iLocal_537, 15))
	{
		if (fLocal_1463 >= fLocal_1464)
		{
			MISC::SET_BIT(&iLocal_537, 15);
		}
	}
	fVar1 = (fLocal_1462 - fLocal_1463);
	if (func_445(0))
	{
		if (!func_1004(1))
		{
			func_440(SYSTEM::ROUND(fVar1), SYSTEM::ROUND(fLocal_1462), "PEN_DST", 1, -1, 2, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 0, 1, 0, 0, 1, -1);
		}
	}
}

void func_440(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_437(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_436(0, iVar0);
		Global_1378678.f_1135[iVar0] = iParam0;
		Global_1378678.f_1135.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1378678.f_1135.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1378678.f_1135.f_194[iVar0] = iParam3;
		Global_1378678.f_1135.f_183[iVar0] = iParam4;
		Global_1378678.f_1135.f_216[iVar0] = iParam5;
		Global_1378678.f_1135.f_227[iVar0 /*3*/] = iParam6;
		Global_1378678.f_1135.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1378678.f_1135.f_258[iVar0] = iParam8;
		Global_1378678.f_1135.f_269[iVar0] = iParam9;
		Global_1378678.f_1135.f_312[iVar0] = iParam10;
		Global_1378678.f_1135.f_323[iVar0] = iParam11;
		Global_1378678.f_1135.f_334[iVar0] = iParam12;
		Global_1378678.f_1135.f_345[iVar0] = iParam13;
		Global_1378678.f_1130 = 1;
		Global_1378678.f_1135.f_356[iVar0] = iParam14;
		Global_1378678.f_1135.f_367[iVar0] = iParam15;
		Global_1378678.f_1135.f_378[iVar0] = iParam16;
		Global_1378678.f_1135.f_389[iVar0] = iParam17;
		Global_1378678.f_1135.f_400[iVar0] = iParam18;
		Global_1378678.f_1135.f_411[iVar0] = iParam19;
		Global_1378678.f_1135.f_422[iVar0] = iParam20;
		Global_1378678.f_1135.f_433[iVar0] = iParam21;
		Global_1378678.f_1135.f_444[iVar0] = iParam22;
		Global_1378678.f_1135.f_455[iVar0] = iParam23;
		Global_1378678.f_1135.f_466[iVar0] = iParam24;
		Global_1378678.f_1135.f_205[iVar0] = iParam25;
		Global_1378678.f_1135.f_477[iVar0] = iParam26;
		Global_1378678.f_1135.f_488[iVar0] = iParam27;
		Global_1378678.f_1135.f_499[iVar0] = iParam28;
		Global_1378678.f_1135.f_510[iVar0] = iParam29;
		Global_1378678.f_1135.f_521[iVar0] = iParam30;
		Global_1378678.f_1135.f_532[iVar0] = iParam31;
		Global_1378678.f_1135.f_543[iVar0] = iParam32;
		Global_1378678.f_1135.f_554[iVar0] = iParam33;
	}
}

float func_441()
{
	float fVar0;
	int iVar1;

	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_559, vLocal_591[iLocal_558 /*3*/], true);
	if (iLocal_558 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_558 - 1))
		{
			fVar0 = (fVar0 + fLocal_1243[iVar1]);
			iVar1++;
		}
	}
	return fVar0;
}

void func_442(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
			if (func_437(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_436(6, iVar0);
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
		if (iParam15 == 5 && func_444())
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
			if (func_443())
			{
				Global_1378678.f_1134 = 1;
			}
		}
	}
}

bool func_443()
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

bool func_444()
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return true;
	}
	return false;
}

bool func_445(bool bParam0)
{
	if (func_447())
	{
		return false;
	}
	if (func_446())
	{
		return false;
	}
	if (!bParam0)
	{
		if (func_1274(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return false;
		}
	}
	return true;
}

bool func_446()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_196 != 0;
}

bool func_447()
{
	return MISC::IS_BIT_SET(Global_2359302, 12);
}

void func_448()
{
	if (bLocal_2750)
	{
		func_434();
		if (func_453(100f, 10f, 5f))
		{
			bLocal_2750 = true;
		}
	}
	func_449();
	if (HUD::DOES_BLIP_EXIST(iLocal_556))
	{
		HUD::SET_BLIP_SCALE(iLocal_556, fLocal_566);
	}
}

void func_449()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_452();
	fVar1 = (fVar0 / fLocal_1462);
	fVar2 = ((((func_1060() - func_451()) * fVar1) + func_451()) * func_450());
	if (fVar2 < func_451())
	{
		fVar2 = func_451();
	}
	if (fVar2 > func_1060())
	{
		fVar2 = func_1060();
	}
	fLocal_567 = fLocal_566;
	if (fVar2 > fLocal_567)
	{
		fVar2 = fLocal_567;
	}
	fLocal_566 = fVar2;
	if (MISC::IS_BIT_SET(Local_80.f_1, 4))
	{
		if (fLocal_566 != func_451())
		{
			fLocal_566 = func_451();
		}
	}
	if (!func_24(&uLocal_2738) || (func_24(&uLocal_2738) && func_23(&uLocal_2738, 5000, 0)))
	{
		func_22(&uLocal_2738);
		func_388(&uLocal_2738, 0, 0);
		Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_6 = fLocal_566;
	}
}

float func_450()
{
	return Global_262145.f_11150;
}

float func_451()
{
	if (Local_80.f_197 != 2)
	{
		return Global_262145.f_11145;
	}
	return Global_262145.f_18362;
}

float func_452()
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_559, vLocal_591[iLocal_558 + 1 /*3*/], true);
	iVar1 = iLocal_558 + 1;
	if (iVar1 < (iLocal_1461 - 1))
	{
		iVar2 = iVar1;
		while (iVar2 <= (iLocal_1461 - 1))
		{
			fVar0 = (fVar0 + fLocal_1243[iVar2]);
			iVar2++;
		}
	}
	return fVar0;
}

bool func_453(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	fVar0 = MISC::ABSF((fParam0 - fParam1));
	if (fLocal_566 > fParam1)
	{
		fLocal_566 = (fLocal_566 - IntToFloat(SYSTEM::FLOOR(((fVar0 / fParam2) * MISC::GET_FRAME_TIME()))));
		if (fLocal_566 < fParam1)
		{
			fLocal_566 = fParam1;
		}
	}
	else
	{
		fLocal_566 = fParam1;
		return true;
	}
	return false;
}

void func_454()
{
	if (!MISC::IS_BIT_SET(iLocal_536, 7))
	{
		func_467(&iLocal_2716);
		MISC::SET_BIT(&iLocal_536, 7);
	}
	if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 4))
	{
		if (func_466(&iLocal_2716))
		{
			if (MISC::IS_BIT_SET(Local_80.f_1, 8))
			{
				if (func_455(&iLocal_2716, 1, 0, 1))
				{
					MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 4);
				}
			}
		}
	}
}

bool func_455(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
	{
		if (func_1004(1))
		{
			return true;
		}
	}
	if (func_466(iParam0))
	{
		if (!func_465(&(iParam0->f_3)))
		{
			func_463(&(iParam0->f_3));
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 255, 255, 255, 100, 0);
		}
		iVar0 = SYSTEM::FLOOR(func_460(&(iParam0->f_3)));
		iVar1 = MISC::ABSI((iVar0 - 3));
		bVar2 = false;
		if (func_72(iParam0->f_1, 4))
		{
			if (iParam0->f_2 >= 5)
			{
				if (!func_72(iParam0->f_1, 16))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "GO", "HUD_MINI_GAME_SOUNDSET", false);
					func_113(&(iParam0->f_1), 16);
					AUDIO::STOP_STREAM();
				}
			}
			else
			{
				iParam0->f_2++;
			}
		}
		if (!func_72(iParam0->f_1, 8))
		{
			if (iVar1 == 3 && !func_72(iParam0->f_1, 1))
			{
				func_113(&(iParam0->f_1), 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_459(iParam0, iVar1);
			}
			else if (iVar1 == 2 && !func_72(iParam0->f_1, 2))
			{
				func_113(&(iParam0->f_1), 2);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_459(iParam0, iVar1);
			}
			else if (iVar1 == 1 && !func_72(iParam0->f_1, 4))
			{
				func_113(&(iParam0->f_1), 4);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_459(iParam0, iVar1);
				if (!func_367(PLAYER::PLAYER_ID(), 0))
				{
					func_409("PEN_AREA", 0);
				}
			}
			else if (iVar1 == 0 && !func_72(iParam0->f_1, 8))
			{
				func_113(&(iParam0->f_1), 8);
				HUD::GET_HUD_COLOUR(18, &iVar3, &iVar4, &iVar5, &uVar6);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MESSAGE");
				func_458("CNTDWN_GO");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_434();
				func_1002(func_1003(), 0);
				MISC::SET_BIT(&iLocal_536, 9);
				if (!MISC::IS_BIT_SET(iLocal_536, 6))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("pennedIn", 0, true);
					MISC::SET_BIT(&iLocal_536, 6);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Outside_Bubble_Scene"))
					{
						AUDIO::STOP_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
					}
					AUDIO::START_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
				}
				if (!bParam1)
				{
					bVar2 = true;
				}
			}
		}
		else if (iVar1 == 1)
		{
			bVar2 = true;
		}
		if ((iParam2 && func_457()) || iVar0 > 5)
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			if (bParam3)
			{
				iParam0->f_1 = 0;
				func_456(&(iParam0->f_3));
			}
			AUDIO::STOP_AUDIO_SCENE("RACES_RADIO_MUTE_scene");
			AUDIO::START_AUDIO_SCENE("MP_RACE_GENERAL_SCENE");
			iVar7 = 0;
			while (iVar7 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar7)))
				{
					iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar7));
					if (iVar8 != PLAYER::PLAYER_ID())
					{
						iVar9 = PLAYER::GET_PLAYER_PED(iVar8);
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar9, false))
						{
							iVar10 = PED::GET_VEHICLE_PED_IS_IN(iVar9, false);
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar10, "MP_RACE_NPC_CAR_Group", 0f);
						}
					}
				}
				iVar7++;
			}
			return true;
		}
	}
	return false;
}

void func_456(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_457()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 18) || PAD::IS_CONTROL_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_458(bool bParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(bParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_459(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MESSAGE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
	HUD::ADD_TEXT_COMPONENT_INTEGER(MISC::ABSI(iParam1));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_460(var uParam0)
{
	if (func_465(uParam0))
	{
		if (func_462(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_461(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_461(bool bParam0)
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

bool func_462(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

void func_463(int* iParam0)
{
	func_464(iParam0, 0f);
}

void func_464(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_461(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_465(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

bool func_466(int iParam0)
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		return false;
	}
	return true;
}

void func_467(int iParam0)
{
	*iParam0 = UNK_0xB01F55A0FD1CFD49("COUNTDOWN");
}

void func_468()
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;

	bVar0 = MISC::IS_BIT_SET(Local_80.f_1, 1);
	if (!func_477())
	{
		return;
	}
	iVar1 = func_374();
	if (MISC::IS_BIT_SET(Local_80.f_1, 7))
	{
		iVar1 = func_373();
	}
	if (Local_80.f_197 == 2)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar6 = func_382();
		if (iVar6 > iLocal_2745)
		{
			iVar6 = iLocal_2745;
		}
		if (iVar7 != Local_80.f_165)
		{
			iVar7 = Local_80.f_165;
		}
		if (!func_367(PLAYER::PLAYER_ID(), 0))
		{
			Var2 = { func_422() };
			if (Local_80.f_197 != 2)
			{
				if (!func_423(&Var2))
				{
					func_409(&Var2, 0);
				}
			}
			else if (!func_423(&Var2))
			{
				func_474(&Var2, "CAG_BLIP", iLocal_2747, 0);
			}
		}
		if (Local_80.f_197 != 2)
		{
			if ((iVar1 - func_348(&(Local_80.f_24), 0, 0)) >= 0)
			{
				func_473((iVar1 - func_348(&(Local_80.f_24), 0, 0)));
				func_469(iVar7, iVar6, (iVar1 - func_348(&(Local_80.f_24), 0, 0)), 1, func_472(-1));
			}
			else
			{
				func_469(iVar7, iVar6, 0, 1, func_472(-1));
			}
		}
		else if ((iVar1 - func_348(&(Local_80.f_24), 0, 0)) >= 0)
		{
			func_473((iVar1 - func_348(&(Local_80.f_24), 0, 0)));
			func_469(iVar7, iVar6, (iVar1 - func_348(&(Local_80.f_24), 0, 0)), 1, "SYG_GOTOTIMER");
		}
		else
		{
			func_469(iVar7, iVar6, 0, 1, "SYG_GOTOTIMER");
		}
	}
	else if (!func_367(PLAYER::PLAYER_ID(), 0))
	{
		Var2 = { func_422() };
		if (func_423(&Var2))
		{
			func_421();
		}
	}
}

void func_469(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;

	if (func_445(0) == 0)
	{
		return;
	}
	func_471();
	func_470(iParam0, iParam1, "HUD_PARITIC", -1, 1, 4, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_223(sParam4))
	{
		sVar0 = sParam4;
	}
	func_435(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, -1);
}

void func_470(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_437(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_436(4, iVar0);
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

void func_471()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2462225 = 1;
}

char* func_472(int iParam0)
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

void func_473(int iParam0)
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

void func_474(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_475(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 19;
		Global_1312585.f_56 = iParam2;
	}
}

bool func_475(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	if (func_476(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return false;
	}
	func_413();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	func_412();
	func_411(bParam2);
	func_410();
	return true;
}

bool func_476(char* sParam0, char* sParam1)
{
	if (!func_417())
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
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12)))
	{
		return false;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

bool func_477()
{
	if (Local_80.f_197 != 2)
	{
		return true;
	}
	else if (func_901())
	{
		return true;
	}
	else if (func_38(PLAYER::PLAYER_ID()) == 3)
	{
		return true;
	}
	if (func_423("CAG_STARTO"))
	{
		func_421();
	}
	return false;
}

void func_478(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	vector3 vVar5;
	float fVar8;
	float fVar9;
	float fVar10;
	bool bVar11;

	if (Local_80.f_197 == 2)
	{
		if (func_38(PLAYER::PLAYER_ID()) < 2)
		{
			return;
		}
	}
	if (!bParam0)
	{
		if (!bParam1 || func_484())
		{
			HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
		}
		else
		{
			HUD::GET_HUD_COLOUR(3, &iVar0, &iVar1, &iVar2, &iVar3);
		}
	}
	else if (Local_80.f_197 == 2)
	{
		HUD::GET_HUD_COLOUR(iLocal_2747, &iVar0, &iVar1, &iVar2, &iVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(29, &iVar0, &iVar1, &iVar2, &iVar3);
	}
	fVar4 = 0.5f;
	vVar5 = { vLocal_559 };
	fVar8 = (fLocal_566 * 2f);
	switch (Local_80.f_167)
	{
		case 0:
			fVar9 = 36.9f;
			fVar10 = 7.875f;
			fVar8 = func_483();
			vVar5 = { func_482() };
			break;
		case 1:
			fVar9 = 26.25f;
			fVar10 = 4.375f;
			fVar8 = func_483();
			vVar5 = { func_482() };
			break;
		case 2:
			fVar9 = 49.875f;
			fVar10 = 12f;
			fVar8 = func_483();
			vVar5 = { func_482() };
			break;
		case 3:
			fVar9 = 9.5f;
			fVar10 = 0f;
			fVar8 = func_483();
			vVar5 = { func_482() };
			break;
		case 4:
			fVar9 = 38.75f;
			fVar10 = 10.25f;
			fVar8 = func_483();
			vVar5 = { func_482() };
			break;
		case 6:
			fVar9 = 5.25f;
			fVar10 = 0f;
			fVar8 = func_483();
			vVar5 = { func_482() };
			break;
		case 7:
			fVar9 = 5.25f;
			fVar10 = 0.875f;
			fVar8 = func_483();
			vVar5 = { func_482() };
			break;
		case 8:
			fVar9 = 15.375f;
			fVar10 = 4.75f;
			fVar8 = func_483();
			vVar5 = { func_482() };
			break;
		case 9:
			fVar9 = 13.625f;
			fVar10 = 4.5f;
			fVar8 = 38.875f;
			vVar5 = { func_482() };
			break;
		case 10:
			fVar9 = 7.75f;
			fVar10 = 2f;
			fVar8 = func_483();
			vVar5 = { func_482() };
			break;
	}
	vVar5.f_2 = (vVar5.z - fVar10);
	if (func_484())
	{
		fVar4 = (fVar4 / 2f);
	}
	if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
	{
		if (func_1004(1))
		{
			bVar11 = true;
		}
	}
	if (!func_481())
	{
		if (func_480(PLAYER::PLAYER_ID()) == 0)
		{
			if (!func_479())
			{
				if (!bParam0)
				{
					if (!MISC::IS_BIT_SET(Local_80.f_1, 3))
					{
						if (!bVar11)
						{
							GRAPHICS::_0x799017F9E3B10112(vLocal_559, fLocal_566, iVar0, iVar1, iVar2, fVar4);
						}
					}
				}
				else
				{
					GRAPHICS::DRAW_MARKER(1, vVar5, 0f, 0f, 0f, 0f, 0f, 0f, fVar8, fVar8, fVar9, iVar0, iVar1, iVar2, iVar3, false, false, 2, false, 0, 0, false);
				}
			}
		}
	}
}

bool func_479()
{
	return MISC::IS_BIT_SET(Global_2450632, 20);
}

int func_480(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_196;
}

bool func_481()
{
	return (MISC::IS_BIT_SET(iLocal_537, 5) || MISC::IS_BIT_SET(iLocal_537, 8));
}

Vector3 func_482()
{
	vector3 vVar0;

	switch (Local_80.f_167)
	{
		case 0:
			vVar0 = { vLocal_559 };
			vVar0.x = 1457.639f;
			vVar0.f_1 = -2371.45f;
			break;
		case 1:
			vVar0 = { vLocal_559 };
			vVar0.x = -1903.733f;
			vVar0.f_1 = 2042.75f;
			break;
		case 2:
			vVar0 = { vLocal_559 };
			vVar0.x = 2237.85f;
			vVar0.f_1 = 1469f;
			break;
		case 3:
			vVar0 = { vLocal_559 };
			vVar0.x = -1210.197f;
			vVar0.f_1 = -2437.739f;
			break;
		case 4:
			vVar0 = { vLocal_559 };
			vVar0.x = 106.968f;
			vVar0.f_1 = 7003.605f;
			break;
		case 6:
			vVar0 = { vLocal_559 };
			break;
		case 7:
			vVar0 = { vLocal_559 };
			break;
		case 8:
			vVar0 = { vLocal_559 };
			vVar0.x = -2653.049f;
			vVar0.f_1 = 1505.637f;
			break;
		case 9:
			vVar0 = { vLocal_559 };
			vVar0.x = -1464.237f;
			vVar0.f_1 = 2789.826f;
			break;
		case 10:
			vVar0 = { vLocal_559 };
			vVar0.x = 999.892f;
			vVar0.f_1 = -677.42f;
			break;
	}
	return vVar0;
}

float func_483()
{
	float fVar0;

	switch (Local_80.f_167)
	{
		case 0:
			fVar0 = 155.375f;
			break;
		case 1:
			fVar0 = 94.75f;
			break;
		case 2:
			fVar0 = 198.75f;
			break;
		case 3:
			fVar0 = 250f;
			break;
		case 4:
			fVar0 = 196.375f;
			break;
		case 7:
			fVar0 = 36f;
			break;
		case 6:
		case 8:
		case 9:
		case 10:
			fVar0 = 42.5f;
			break;
	}
	return fVar0;
}

bool func_484()
{
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		return MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 11);
	}
	return false;
}

void func_485()
{
	if (!MISC::IS_BIT_SET(iLocal_537, 19))
	{
		func_493();
		HUD::_0xCD74233600C4EA6B(false);
		if (func_492("SCTV_HELI_HLP"))
		{
			HUD::CLEAR_HELP(true);
		}
		func_487(&(Local_80.f_184), 1, MISC::IS_BIT_SET(Local_80.f_1, 5), 0);
		if (!func_367(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 11);
			MISC::CLEAR_BIT(&(Global_2425662[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*421*/].f_195), 2);
			MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 14);
			func_486(PLAYER::PLAYER_ID(), 0);
		}
		MISC::SET_BIT(&iLocal_537, 19);
	}
}

void func_486(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset");
	}
	MISC::CLEAR_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset", iVar0);
}

void func_487(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_2) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_2))
		{
			iVar0 = NETWORK::NET_TO_ENT(uParam0->f_2);
			if (bParam3)
			{
				func_491(&(uParam0->f_2));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
			}
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_3))
		{
			iVar1 = NETWORK::NET_TO_ENT(uParam0->f_3);
			if (bParam3)
			{
				func_491(&(uParam0->f_3));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
	}
	func_488(1, -1);
	func_8(0);
}

void func_488(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_490(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_22350.f_8417 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_22350.f_5628[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_489(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_489(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

bool func_490(int iParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;

	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
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

void func_491(var uParam0)
{
	int iVar0;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

bool func_492(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_493()
{
	Global_2439138.f_1156.f_10 = 0;
}

void func_494(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Global_1368784[iVar0 /*42*/] = -1;
		Global_1368784[iVar0 /*42*/].f_1 = func_389();
		Global_1368784[iVar0 /*42*/].f_9 = -1;
		Global_1368784[iVar0 /*42*/].f_31 = -1;
		StringCopy(&(Local_1466.f_104), "FM_AE_SORT_12", 16);
		if (Local_80.f_36[iVar0 /*4*/] > -1)
		{
			if (Local_80.f_36[iVar0 /*4*/].f_3 > 0)
			{
				Global_1368784[iVar0 /*42*/] = Local_80.f_36[iVar0 /*4*/];
				Global_1368784[iVar0 /*42*/].f_1 = Local_80.f_36[iVar0 /*4*/].f_1;
				Global_1368784[iVar0 /*42*/].f_9 = -1;
				Global_1368784[iVar0 /*42*/].f_41 = Local_80.f_36[iVar0 /*4*/].f_2;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
		if (!func_616())
		{
			if (Local_1466.f_103 != 136)
			{
				Local_1466.f_103 = 136;
			}
			else
			{
				func_614(1, 136);
			}
		}
	}
	iVar1 = 27;
	if (Local_80.f_197 == 2)
	{
		iVar1 = 28;
	}
	func_495(&Global_1368784, &iLocal_1465, iVar1, &Local_1466, &uLocal_1582, -1, 0, 0);
}

void func_495(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
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

	if (func_613(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_612() || iParam2 == 28)
	{
		if (func_564(iParam1, iParam2, uParam3, Global_1574185, 0, func_617(), sParam7))
		{
			func_563(1);
			if ((!func_562() && !func_561()) || MISC::IS_BIT_SET(Global_2537071.f_4588, 1))
			{
				if (func_560())
				{
					func_557();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_556(1);
						Global_1574185 = 0;
						iVar54 = -1;
						if (Global_1574406 != 1)
						{
							func_555(iParam1, 0, 0);
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
								if (func_1274(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_367(bVar35, 0))
									{
										if ((func_554(bVar35) || Global_2425662[bVar35 /*421*/].f_236 != -1) || func_553(bVar35))
										{
											bVar44 = bVar35;
											if (func_132(bVar35))
											{
												iVar1[bVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_552(&iVar1, bVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_550(PLAYER::PLAYER_ID(), 0) && func_145(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_549())
							{
								if (func_1274(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									bVar35 = func_389();
								}
							}
							else
							{
								bVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_548(bVar35) && func_545(bVar35, iParam2)) && func_1274(bVar35, 0, 1))
							{
								bVar44 = bVar35;
								uVar42 = Global_1590535[bVar44 /*876*/].f_211.f_6;
								Var38 = { func_540(bVar35) };
								if (bVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_64(bVar35) };
								iVar37 = func_534(bVar35);
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
									if (!func_549())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_529(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_528(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_527(bVar35, 0);
								if (bVar34)
								{
									if (func_131(bVar35, 1) && iVar1[bVar44] != -1)
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
								if (func_526(iParam5))
								{
									func_525(bVar35, iParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &cVar57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_525(bVar35, iParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &cVar57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
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
							if (func_1274(bVar35, 0, 1) && !MISC::IS_BIT_SET(iVar49, bVar35))
							{
								bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								bVar35 = func_389();
							}
							if (func_548(bVar35))
							{
								if (func_1274(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar44 = bVar35;
									uVar42 = Global_1590535[bVar44 /*876*/].f_211.f_6;
									Var38 = { func_540(bVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_64(bVar35) };
									iVar37 = func_534(bVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574185++;
									iVar51 = func_527(bVar35, 1);
									if (bVar34)
									{
										if (func_131(bVar35, 1))
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
									func_508(bVar35, PLAYER::GET_PLAYER_NAME(bVar35), iParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_505(uParam3, iParam1, iParam2);
						}
						func_22(&(uParam3->f_21));
						func_504();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_503(uParam3, iParam1);
							func_502(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_503(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_498(uParam3))
						{
							Global_1574406 = 1;
						}
						func_496(uParam3);
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
			func_504();
			func_556(0);
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

void func_496(var uParam0)
{
	if (!func_24(&(uParam0->f_21)))
	{
		func_388(&(uParam0->f_21), 0, 0);
	}
	else if (func_23(&(uParam0->f_21), 250, 0))
	{
		func_22(&(uParam0->f_21));
		func_497(0);
	}
}

void func_497(bool bParam0)
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

bool func_498(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;

	iVar16 = 0;
	iVar0 = uParam0->f_37;
	bVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar15 != func_389() && func_1274(bVar15, 0, 1))
	{
		Var2 = { func_64(bVar15) };
		iVar1 = func_501(uParam0, uParam0->f_37);
		if (func_500(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_499(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_499(uParam0, iVar0, 1);
					}
					break;
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_499(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_499(uParam0, iVar0, 0);
					}
					break;
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_499(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_499(uParam0, iVar0, 0);
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

void func_499(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_500(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

int func_501(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_502(int* iParam0, bool bParam1, int iParam2)
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

void func_503(var uParam0, int* iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_504()
{
	if (Global_1574406 != 0)
	{
		Global_1574406 = 0;
	}
}

void func_505(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (bVar2 != func_389())
		{
			if (func_1274(bVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_507(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_506(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590535[iVar0 /*876*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_506(int* iParam0, int iParam1, int iParam2, int iParam3)
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

int func_507(int iParam0, bool bParam1, int iParam2)
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

void func_508(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, var uParam5, char* sParam6, var uParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;

	if (iParam4 >= func_524() && iParam4 < func_523())
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
				func_522("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_522(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_522("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_522("");
			if (uParam3->f_108 == 6)
			{
				func_522("");
			}
			else
			{
				func_522(&uParam5);
			}
			func_512(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_511(uParam3))
			{
				func_458("DPAD_FRIEND");
			}
			else if (func_510(uParam3))
			{
				func_458("DPAD_FRIEND");
			}
			else if (func_509(uParam3))
			{
				func_458("DPAD_CREW");
			}
			else
			{
				func_458("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_509(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_510(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

bool func_511(var uParam0)
{
	if (func_510(uParam0) && func_509(uParam0))
	{
		return true;
	}
	return false;
}

void func_512(var uParam0, bool bParam1)
{
	if (func_521(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_516(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && bParam1 > -1) && bParam1 < 32) && MISC::IS_BIT_SET(Global_2425662[bParam1 /*421*/].f_413, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_513())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

bool func_513()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_514() || func_105())
		{
			return true;
		}
	}
	return false;
}

int func_514()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_105();
	}
	return func_515(Global_4456448.f_194990);
}

int func_515(int iParam0)
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

bool func_516(bool bParam0)
{
	if ((func_1274(bParam0, 0, 1) && func_517()) && func_124(bParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_517()
{
	if (func_47(PLAYER::PLAYER_ID()) || func_520())
	{
		if (!func_518(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	return true;
}

bool func_518(bool bParam0)
{
	if (func_519(bParam0) == 236 || func_519(bParam0) == 150)
	{
		return func_43(bParam0);
	}
	return false;
}

int func_519(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/];
	}
	return -1;
}

bool func_520()
{
	switch (func_145(PLAYER::PLAYER_ID()))
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

bool func_521(bool bParam0)
{
	if (func_513())
	{
		if (func_1274(bParam0, 0, 1))
		{
			return func_132(bParam0);
		}
	}
	if ((func_1274(bParam0, 0, 1) && func_517()) && func_126(bParam0, 0))
	{
		return true;
	}
	return false;
}

void func_522(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_523()
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

int func_524()
{
	int iVar0;

	iVar0 = 0;
	if (Global_1574187)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_525(bool bParam0, int* iParam1, var uParam2, int iParam3, var uParam4, char* sParam5, var uParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, bool bParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;

	if (iParam3 >= func_524() && iParam3 < func_523())
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
					func_522("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(bParam16))
				{
					func_458(bParam16);
				}
				else
				{
					func_522(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_522("");
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
				if (func_549())
				{
					func_522("");
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
						func_458(&(uParam2->f_104));
					}
					else
					{
						func_522("");
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
					func_522("");
				}
				if (uParam2->f_108 == 6)
				{
					func_522("");
				}
				else
				{
					func_522(&uParam4);
				}
				func_512(uParam2, bParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_522("");
					func_522("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_511(uParam2))
				{
					func_458("DPAD_FRIEND");
				}
				else if (func_510(uParam2))
				{
					func_458("DPAD_FRIEND");
				}
				else if (func_509(uParam2))
				{
					func_458("DPAD_CREW");
				}
				else
				{
					func_458("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

bool func_526(int iParam0)
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

int func_527(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 116;
	if ((!bParam1 && func_47(bParam0)) && !func_45(bParam0))
	{
		iVar0 = func_83();
	}
	iVar1 = func_130(bParam0);
	if (!iVar1 == -1)
	{
		return func_128(iVar1);
	}
	return iVar0;
}

char* func_528(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_529(int iParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_533(iParam3))
	{
		*fParam1 = (func_530(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_526(iParam3))
	{
		*fParam1 = (func_530(iParam3, iParam2) / 1000f);
		return 1;
	}
	*iParam0 = iParam2;
	return 0;
}

float func_530(int iParam0, int iParam1)
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
				return func_532(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_531(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_531(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_532(float fParam0)
{
	return (fParam0 / 0.3048f);
}

bool func_533(int iParam0)
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

int func_534(bool bParam0)
{
	int iVar0;

	iVar0 = func_537(bParam0);
	if (iVar0 == -1)
	{
		func_535(bParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_535(bool bParam0, bool bParam1)
{
	if (!func_1274(bParam0, 0, 1))
	{
		return;
	}
	if (func_537(bParam0) != -1)
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
	if (func_536(bParam0))
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

bool func_536(bool bParam0)
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

int func_537(bool bParam0)
{
	int iVar0;

	if (!func_1274(bParam0, 0, 1))
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
			func_538(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_538(int iParam0)
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
	func_539(&(Global_1389078[iVar32 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_539(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_389();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::_0xBA7F0B77D80A4EB7();
	}
}

struct<4> func_540(bool bParam0)
{
	char cVar0[32];

	if (func_1274(bParam0, 0, 1))
	{
		Global_2513218 = { func_64(bParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_500(Global_2513218))
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
		if (func_544(&Global_2513218))
		{
			Global_2513148 = { func_542(bParam0) };
			func_541(&Global_2513148, &cVar0);
		}
	}
	return cVar0;
}

void func_541(int* iParam0, char* sParam1)
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(iParam0, 35, sParam1);
}

struct<35> func_542(bool bParam0)
{
	struct<13> Var0;
	struct<35> Var13;

	if (func_543(bParam0))
	{
		return Global_1312909[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_64(bParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

bool func_543(bool bParam0)
{
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return true;
	}
	return false;
}

bool func_544(int* iParam0)
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

bool func_545(bool bParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_46(bParam0) || func_547(bParam0)) || func_366(bParam0))
		{
			return false;
		}
	}
	if (!func_546(bParam0))
	{
		return false;
	}
	if ((!func_554(bParam0) && Global_2425662[bParam0 /*421*/].f_236 == -1) && !func_553(bParam0))
	{
		return false;
	}
	return true;
}

bool func_546(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_142, 22);
}

bool func_547(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 10) || MISC::IS_BIT_SET(Global_1628237[bParam0 /*615*/].f_1, 9));
	}
	return false;
}

bool func_548(bool bParam0)
{
	bool bVar0;

	if (bParam0 == func_389())
	{
		return false;
	}
	if (func_367(bParam0, 0))
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

bool func_549()
{
	switch (func_145(PLAYER::PLAYER_ID()))
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
	switch (func_519(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return true;
	}
	if (func_45(PLAYER::PLAYER_ID()))
	{
		switch (func_145(PLAYER::PLAYER_ID()))
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
	if (func_518(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

bool func_550(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 && func_551(Global_1628237[iParam0 /*615*/].f_11.f_33))
	{
		return true;
	}
	if (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1)
	{
		if (func_551(Global_1628237[iParam0 /*615*/].f_11.f_32))
		{
			return true;
		}
	}
	return false;
}

bool func_551(int iParam0)
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
	return func_155(iParam0, 0);
	return false;
}

void func_552(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1274(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_367(bVar1, 0))
			{
				if ((func_554(bVar1) || Global_2425662[bVar1 /*421*/].f_236 != -1) || func_553(bVar1))
				{
					if (func_245(bVar1, bParam1, 0))
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

bool func_553(bool bParam0)
{
	return Global_1590535[bParam0 /*876*/].f_196 != 0;
}

bool func_554(bool bParam0)
{
	if (func_1274(bParam0, 0, 1))
	{
		if (func_1274(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(bParam0, PLAYER::PLAYER_ID()) || func_145(bParam0) == 233)
			{
				return true;
			}
		}
	}
	return false;
}

void func_555(int* iParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_556(bool bParam0)
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

void func_557()
{
	if (MISC::IS_BIT_SET(Global_2537071.f_4588, 1))
	{
		if (func_559())
		{
			func_558();
		}
	}
}

void func_558()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_2 != 0)
		{
			Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			func_113(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

bool func_559()
{
	return Global_2439138.f_2723[0 /*80*/].f_1 != 0;
}

bool func_560()
{
	if (MISC::IS_BIT_SET(Global_2537071.f_4588, 0) && func_559())
	{
		return true;
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_4588, 1) && func_559())
	{
		return true;
	}
	return false;
}

bool func_561()
{
	if (func_559())
	{
		if (func_71(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_562()
{
	if (func_559())
	{
		if (func_84(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return true;
		}
	}
	return false;
}

void func_563(int iParam0)
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

bool func_564(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
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
	bVar6 = func_611(iParam1);
	fVar7 = func_610();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_609())
		{
			if (func_608() > 0 && Global_1574187)
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
		if (!func_592())
		{
			func_591(iParam0, uParam2, 1);
			return false;
		}
	}
	if (MISC::IS_BIT_SET(Global_2537071.f_4591, 26))
	{
		func_591(iParam0, uParam2, 1);
		return false;
	}
	if (!func_24(&(uParam2->f_19)))
	{
		if (func_608() == 1)
		{
			func_590(bVar6, iParam0, 0);
			func_388(&(uParam2->f_19), 0, 0);
			func_591(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2537071.f_4592), 5);
		}
	}
	if (func_24(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_23(&(uParam2->f_19), 10000, 0) || (func_608() == 0 && !bParam5))
		{
			func_591(iParam0, uParam2, 1);
			return false;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_589();
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
					func_589();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_590(bVar6, iParam0, 0))
				{
					func_555(iParam0, 0, 0);
					sVar4 = func_587(iParam1, &(Global_4456448.f_194997), bParam4);
					Var0 = { func_585(iParam1) };
					if (bParam4)
					{
						func_582(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_576(iParam0, func_579(uParam2), func_577(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_572(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar9 = sParam6;
						}
						func_570(iParam0, sVar9, func_571(), -1);
					}
					else if (func_513())
					{
						uParam2->f_34 = Global_1574186;
						func_582(iParam0, sVar4, &Var0, 1, -1, Global_1574186, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_565(iParam1);
						uParam2->f_34 = Global_1574186;
						func_582(iParam0, sVar4, "", 0, iVar8, Global_1574186, 1);
					}
					else
					{
						iVar8 = func_565(iParam1);
						func_582(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
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

int func_565(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_569())
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
			if (func_568(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_567(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_566(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_225())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_566(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 4;
}

bool func_567(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

bool func_568(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_569()
{
	return Global_4456448.f_1 == 0;
}

void func_570(int* iParam0, bool bParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_458(bParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(bParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_458("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_571()
{
	switch (func_145(PLAYER::PLAYER_ID()))
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

char* func_572(var uParam0)
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
	switch (func_145(PLAYER::PLAYER_ID()))
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
			if (func_574())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
		case 151:
			if (func_233(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
		case 152:
			return "PIM_MAGM204";
		case 153:
			if (func_233(1))
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
			if (func_573(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
	}
	return "";
}

bool func_573(int iParam0)
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

bool func_574()
{
	return (func_575() && func_163(func_247()));
}

bool func_575()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 148;
}

void func_576(int* iParam0, bool bParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_458(bParam1);
		}
		else if (func_519(PLAYER::PLAYER_ID()) == 133)
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
		func_458("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_577(var uParam0)
{
	int iVar0;

	iVar0 = func_519(PLAYER::PLAYER_ID());
	if (func_616())
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
			switch (func_578())
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

int func_578()
{
	if (func_519(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2537071.f_5045;
	}
	return -1;
}

char* func_579(var uParam0)
{
	int iVar0;

	iVar0 = func_519(PLAYER::PLAYER_ID());
	if (func_616())
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
			if (func_581() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_581() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
		case 133:
			switch (func_578())
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
			if (func_580() == 1)
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

int func_580()
{
	return Global_2537071.f_5048;
}

int func_581()
{
	if (func_519(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2537071.f_5043;
	}
	return -1;
}

void func_582(int* iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;

	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_522(bParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(bParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_458(bParam1);
		}
		if (func_609() && bParam6)
		{
			if (func_584())
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
			func_458(bParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_583(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_81())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_583(int iParam0)
{
	if (func_568(iParam0) || func_567(iParam0))
	{
		return true;
	}
	return false;
}

bool func_584()
{
	return Global_1574187;
}

struct<4> func_585(int iParam0)
{
	struct<4> Var0;

	StringCopy(&Var0, "", 16);
	if (func_586(PLAYER::PLAYER_ID()) || func_566(PLAYER::PLAYER_ID()))
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
	if (func_513() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_204, 16);
	}
	return Var0;
}

bool func_586(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 5;
}

char* func_587(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	if (iParam0 == 20 && (!func_513() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		sVar0 = func_588();
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

char* func_588()
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

void func_589()
{
	Global_42351 = 1;
}

bool func_590(bool bParam0, int* iParam1, bool bParam2)
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

void func_591(int* iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574185 = 0;
	func_504();
	Global_1574184 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_24(&(uParam1->f_19)))
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

bool func_592()
{
	if (func_607())
	{
		return false;
	}
	if (func_606())
	{
		return false;
	}
	if (!func_604())
	{
		return false;
	}
	if (!func_602())
	{
		return false;
	}
	if (func_601(8, -1))
	{
		return false;
	}
	if (func_608() == 2)
	{
		return false;
	}
	if (Global_2537071.f_4543)
	{
		return false;
	}
	if (func_446())
	{
		return false;
	}
	else if (!func_598(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return false;
	}
	if (((func_597(1) || func_595(1)) || Global_22211.f_124) || Global_22211)
	{
		return false;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return false;
	}
	if (func_594() && Global_1695468 == 2)
	{
		return false;
	}
	if (func_111(PLAYER::PLAYER_ID()) && !func_594())
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
	if (func_234(0))
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
	if (func_593(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if ((Global_1370265 || Global_1370266) || Global_1370267)
	{
		return false;
	}
	return true;
}

bool func_593(int iParam0)
{
	if (iParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310.f_4, 6);
}

bool func_594()
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1695469, 0));
}

bool func_595(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_596(PLAYER::PLAYER_PED_ID()))
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

bool func_596(int iParam0)
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

bool func_597(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_598(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_599(iParam0))
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

bool func_599(int iParam0)
{
	return func_600(iParam0);
}

bool func_600(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_13.f_1, 0);
}

bool func_601(int iParam0, int iParam1)
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

bool func_602()
{
	if (func_603() == 0)
	{
		return true;
	}
	return false;
}

int func_603()
{
	return Global_1312467.f_18;
}

bool func_604()
{
	if (func_605())
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

bool func_605()
{
	return Global_1312440;
}

bool func_606()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 5;
}

bool func_607()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_608()
{
	return Global_1377170.f_68;
}

bool func_609()
{
	if (Global_1574186 > 16)
	{
		return true;
	}
	return false;
}

float func_610()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_611(int iParam0)
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

bool func_612()
{
	if (func_617())
	{
		return true;
	}
	if (func_366(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_616())
	{
		return true;
	}
	if (func_47(PLAYER::PLAYER_ID()))
	{
		switch (func_519(PLAYER::PLAYER_ID()))
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
				if (!func_427(PLAYER::PLAYER_ID()))
				{
					return true;
				}
				break;
			case 129:
				if (!func_427(PLAYER::PLAYER_ID()))
				{
					return true;
				}
				break;
			case 174:
				if (!func_427(PLAYER::PLAYER_ID()))
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

bool func_613(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_47(PLAYER::PLAYER_ID()) && !func_45(PLAYER::PLAYER_ID())) && !func_518(PLAYER::PLAYER_ID()))
		{
			return true;
		}
	}
	if (iParam0 == 27)
	{
		if (func_144(PLAYER::PLAYER_ID(), 0) && func_45(PLAYER::PLAYER_ID()))
		{
			return true;
		}
		if (func_38(PLAYER::PLAYER_ID()) == 3)
		{
			return true;
		}
	}
	return false;
}

void func_614(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_1590408)
		{
			if (!func_1064(0) && !func_1064(func_615(iParam1)))
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

int func_615(int iParam0)
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

bool func_616()
{
	return Global_1590408;
}

bool func_617()
{
	if (func_618(PLAYER::PLAYER_ID()))
	{
		return Global_1319101;
	}
	return false;
}

bool func_618(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_367(bParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(bParam0);
		}
	}
	return false;
}

void func_619()
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;

	bVar4 = true;
	iVar5 = 1;
	if (iLocal_2761 == 1 && !func_446())
	{
		func_682(&vLocal_2006);
	}
	switch (iLocal_2761)
	{
		case 0:
			if (func_681())
			{
				iLocal_2761++;
			}
			break;
		case 1:
			iVar0 = PLAYER::GET_PLAYER_PED(Local_80.f_184.f_7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				vLocal_2006.f_2 = { vVar1 };
			}
			else if (!func_19(vLocal_2006.f_2))
			{
				vVar1 = { vLocal_2006.f_2 };
			}
			vLocal_2006.f_1 = NETWORK::NET_TO_ENT(Local_80.f_184.f_2);
			if (ENTITY::DOES_ENTITY_EXIST(vLocal_2006.y))
			{
				if (!ENTITY::IS_ENTITY_DEAD(vLocal_2006.y, false))
				{
					if (!func_673())
					{
						if (func_19(vLocal_2756))
						{
							if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
								{
									vLocal_2756 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
									fLocal_2759 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
								}
							}
						}
					}
					NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(vLocal_2006.y);
					if (Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_222 == 99)
					{
						if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 11))
						{
							GRAPHICS::SET_NIGHTVISION(false);
							if (!HUD::_0xC2D2AD9EAAE265B8())
							{
								HUD::_0xCD74233600C4EA6B(true);
							}
							NETWORK::_0x267C78C60E806B9A(vLocal_2006.y, true);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), vLocal_2006.y, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(vLocal_2006.y, "chassis"), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true);
							MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 11);
							MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_195), 2);
							MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 14);
							func_672(PLAYER::PLAYER_ID(), 0);
							func_667();
						}
						if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 12))
						{
							func_658(PLAYER::PLAYER_ID(), 0, 8192, 0);
							ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
							MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 12);
						}
						func_649();
						func_647();
						if (func_673())
						{
							func_658(PLAYER::PLAYER_ID(), 1, 0, 0);
							iLocal_2761++;
						}
						else
						{
							func_630(&(Local_80.f_184), &vLocal_2006, vLocal_2006.y, vVar1, iVar5, bVar4);
							if (bVar4)
							{
								if (!MISC::IS_BIT_SET(iLocal_537, 18) && func_622(0, 1, 1, 0))
								{
									func_621("SCTV_HELI_HLP", 30000);
									if (Local_80.f_197 != 2)
									{
										func_620(1);
									}
									MISC::SET_BIT(&iLocal_537, 18);
								}
							}
						}
					}
				}
			}
			break;
		case 2:
			break;
	}
}

void func_620(bool bParam0)
{
	HUD::_SET_HELP_MESSAGE_TEXT_STYLE(3, 21, 200, 0, 0);
	if (bParam0 && !func_559())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_621(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

bool func_622(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return false;
	}
	if (func_629())
	{
		return false;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	if (func_607())
	{
		return false;
	}
	if (func_628())
	{
		return false;
	}
	if (bParam1)
	{
		if (func_598(PLAYER::PLAYER_ID(), 1, 0))
		{
			return false;
		}
	}
	if (bParam0)
	{
		if (func_627(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	if (func_626())
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
	if (func_625())
	{
		return false;
	}
	if (func_624())
	{
		return false;
	}
	if (func_446())
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
	if (func_623(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

bool func_623(int iParam0)
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

bool func_624()
{
	return Global_2450632.f_591;
}

bool func_625()
{
	return Global_2450632.f_744;
}

bool func_626()
{
	return Global_2439138.f_3047.f_578;
}

bool func_627(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_208 == 0)
	{
		return false;
	}
	return true;
}

bool func_628()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_18, 0);
}

bool func_629()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return true;
	}
	return false;
}

void func_630(var uParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7)
{
	switch (func_646(uParam1))
	{
		case 0:
			if (func_645() || bParam6)
			{
				func_644(uParam1, 1);
			}
			break;
		case 1:
			if (!CAM::DOES_CAM_EXIST(*uParam1))
			{
				*uParam1 = CAM::CREATE_CAM("default_scripted_camera", false);
			}
			else
			{
				INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
				CAM::ATTACH_CAM_TO_ENTITY(*uParam1, iParam2, 0f, 2.75f, -1.25f, true);
				CAM::SET_CAM_ACTIVE(*uParam1, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				func_8(1);
				func_644(uParam1, 2);
			}
			break;
		case 2:
			if (CAM::DOES_CAM_EXIST(*uParam1))
			{
				if (!CAM::IS_CAM_ACTIVE(*uParam1))
				{
					CAM::ATTACH_CAM_TO_ENTITY(*uParam1, iParam2, 0f, 2.75f, -1.25f, true);
					CAM::SET_CAM_ACTIVE(*uParam1, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				else
				{
					CAM::POINT_CAM_AT_COORD(*uParam1, vParam3);
				}
				if (bParam7)
				{
					func_631(uParam1);
				}
				if (func_645() && !bParam6)
				{
					func_487(uParam0, 1, 1, 1);
					func_644(uParam1, 0);
				}
			}
			else
			{
				func_644(uParam1, 0);
			}
			break;
		default:
			break;
	}
}

void func_631(var uParam0)
{
	struct<9> Var0;

	Var0 = { func_643() };
	if (func_641(0, -1, 0))
	{
		switch (uParam0->f_707)
		{
			case 0:
				func_639(&(uParam0->f_7));
				func_638(2, 202, "HUD_QUIT", &(uParam0->f_7), 1, 361);
				uParam0->f_707++;
				break;
			case 1:
				func_632(&(uParam0->f_6), &Var0, &(uParam0->f_7), 0);
				break;
		}
	}
}

void func_632(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam3 == 1 || PAD::_0x6CD79468A1E595C6(2))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		func_637(uParam2);
	}
	if (Global_1315716 < 2)
	{
		func_636(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			*uParam0 = UNK_0xB01F55A0FD1CFD49("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_693)
			{
				if (MISC::IS_BIT_SET(uParam2->f_689, iVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					if (!MISC::IS_BIT_SET(uParam2->f_690, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[iVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[iVar0 /*57*/].f_56;
						func_635(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar2, true));
						if (iVar3 < 361)
						{
							func_635(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[iVar0 /*57*/].f_55;
						func_635(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(iVar4, iVar5, true));
					}
					if (MISC::IS_BIT_SET(uParam2->f_686, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*57*/].f_32));
						if (uParam2->f_694 == iVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*57*/].f_36);
							if (MISC::IS_BIT_SET(uParam2->f_687, iVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (MISC::IS_BIT_SET(uParam2->f_688, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_458(&(uParam2->f_1[iVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (MISC::IS_BIT_SET(uParam2->f_691, iVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[iVar0 /*57*/].f_55);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					func_635(&(uParam2->f_1[iVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[iVar0 /*57*/].f_16)))
					{
						func_635(&(uParam2->f_1[iVar0 /*57*/].f_16));
					}
					if (MISC::IS_BIT_SET(uParam2->f_686, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*57*/].f_32));
						if (uParam2->f_694 == iVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*57*/].f_36);
							if (MISC::IS_BIT_SET(uParam2->f_687, iVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (MISC::IS_BIT_SET(uParam2->f_688, iVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_458(&(uParam2->f_1[iVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_634(*uParam0, uParam1);
	}
	func_633();
}

void func_633()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_634(int iParam0, var uParam1)
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_635(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_636(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_637(var uParam0)
{
	uParam0->f_692 = 0;
}

void func_638(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	MISC::SET_BIT(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_55 = iParam1;
	uParam3->f_1[iVar0 /*57*/].f_56 = iParam5;
	if (bParam4)
	{
		MISC::SET_BIT(&(uParam3->f_691), iVar0);
		if (iParam5 < 361)
		{
		}
	}
	uParam3->f_693++;
}

void func_639(var uParam0)
{
	func_640(uParam0);
	uParam0->f_692 = 1;
}

void func_640(var uParam0)
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

bool func_641(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_490(&iVar0, 1, iParam1))
	{
		return false;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_5635[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_22350.f_5635[iVar0 /*4*/]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22350.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_22350.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_22350.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_642(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_642(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = UNK_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

struct<9> func_643()
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

void func_644(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

bool func_645()
{
	if ((!PAD::_IS_INPUT_DISABLED(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 231)) || (PAD::_IS_INPUT_DISABLED(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 44)))
	{
		return true;
	}
	return false;
}

int func_646(var uParam0)
{
	return uParam0->f_5;
}

void func_647()
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_648();
}

void func_648()
{
	Global_22211.f_134 = 1;
}

void func_649()
{
	func_657();
	func_650(0);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
}

void func_650(int iParam0)
{
	if (func_656())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_655(0))
		{
			func_651(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_651(int iParam0)
{
	if (func_656())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_654())
		{
			func_653(1, 1);
		}
		else
		{
			func_653(0, 0);
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
	if (!func_652())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_652()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_653(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_655(0))
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

bool func_654()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_655(int iParam0)
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

bool func_656()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_657()
{
	Global_2439138.f_1156.f_10 = 1;
}

void func_658(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_666())
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
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
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
		if (!func_602())
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
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || bParam3 == 1))
		{
			if (bParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::SET_PLAYER_VISIBLE_LOCALLY(1);
				}
				else if (bVar14 || (!func_367(PLAYER::PLAYER_ID(), 0) && !func_112()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::SET_PLAYER_VISIBLE_LOCALLY(0);
					}
					Global_2425662[iParam0 /*421*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_663(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_662(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(iVar27))
				{
					PED::_0x4668D80430D6C299(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_661();
					func_660();
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
				Global_2425662[iParam0 /*421*/].f_245 = 0;
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
				if (!func_662(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_659(Global_4456448.f_232883))
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
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
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
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_659(int iParam0)
{
	return iParam0 == 17;
}

void func_660()
{
	vector3 vVar0;

	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_661()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

bool func_662(int iParam0)
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

void func_663(bool bParam0, int iParam1, int iParam2)
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
				func_665();
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
		if (func_367(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1, 1);
		}
		else
		{
			NETWORK::_GET_DATE_AND_TIME_FROM_UNIX_EPOCH(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_664(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_664(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_665()
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

bool func_666()
{
	if (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return true;
	}
	return false;
}

void func_667()
{
	if (func_671() || func_670())
	{
		func_669();
		func_668();
	}
}

void func_668()
{
	if ((!func_446() && !func_624()) && Global_2451425)
	{
		Global_4456448.f_194990 = 0;
	}
}

void func_669()
{
	Global_2450632.f_656 = 1;
}

bool func_670()
{
	return Global_2450632.f_635;
}

bool func_671()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 11);
}

void func_672(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset");
	}
	MISC::SET_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset", iVar0);
}

bool func_673()
{
	if (func_680(&vLocal_2006))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(Local_80.f_1, 3))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(Local_80.f_1, 5))
	{
		return true;
	}
	if (func_674())
	{
		return true;
	}
	if (func_1004(0))
	{
		return true;
	}
	if (func_367(PLAYER::PLAYER_ID(), 0))
	{
		return true;
	}
	if (Local_80.f_184.f_7 == func_389())
	{
		return true;
	}
	return false;
}

bool func_674()
{
	if (MISC::IS_BIT_SET(Global_2537071.f_393.f_5, 0))
	{
		return true;
	}
	if (func_676() && Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_98 != 3)
	{
		return true;
	}
	if (func_675() && Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_98 != 3)
	{
		return true;
	}
	if (Global_2394768)
	{
		return true;
	}
	if (Global_1574650.f_20)
	{
		return true;
	}
	return false;
}

bool func_675()
{
	return MISC::IS_BIT_SET(Global_2450632, 5);
}

bool func_676()
{
	if (((func_679() || func_479()) || func_678()) || func_677())
	{
		return true;
	}
	return false;
}

bool func_677()
{
	return MISC::IS_BIT_SET(Global_2450632, 1);
}

bool func_678()
{
	return MISC::IS_BIT_SET(Global_2450632, 2);
}

bool func_679()
{
	return Global_2450632.f_598;
}

bool func_680(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_709, 2);
}

bool func_681()
{
	if (!func_6(&(Local_80.f_184)))
	{
		return false;
	}
	if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
	{
		return false;
	}
	if (Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 < 3)
	{
		return false;
	}
	if (!func_1274(PLAYER::PLAYER_ID(), 1, 1))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(Local_80.f_1, 3))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(Local_80.f_1, 5))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(Local_80.f_1, 12))
	{
		return false;
	}
	if (Local_80.f_184.f_7 == func_389())
	{
		return false;
	}
	if (!func_1274(Local_80.f_184.f_7, 1, 1))
	{
		return false;
	}
	if (Local_80.f_184.f_7 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!MISC::IS_BIT_SET(iLocal_537, 21))
	{
		return false;
	}
	if (func_446())
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (Local_80.f_165 < 2)
	{
		return false;
	}
	return true;
}

void func_682(var uParam0)
{
	if (!MISC::IS_BIT_SET(uParam0->f_709, 2))
	{
		switch (uParam0->f_708)
		{
			case 0:
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_685(uParam0))
					{
						func_684(uParam0);
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("SPEC_LEAVE", "SPEC_SURE", 36, 0, false, -1, 0, 0, true, 0);
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 201))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "EXIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							uParam0->f_708++;
						}
					}
					else
					{
						func_683(uParam0);
					}
				}
				break;
			case 1:
				MISC::SET_BIT(&(uParam0->f_709), 2);
				break;
		}
	}
}

void func_683(var uParam0)
{
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_709, 0))
		{
			MISC::SET_BIT(&(uParam0->f_709), 0);
		}
		if (!MISC::IS_BIT_SET(uParam0->f_709, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			MISC::SET_BIT(&(uParam0->f_709), 1);
		}
	}
}

void func_684(var uParam0)
{
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
	{
		if (MISC::IS_BIT_SET(uParam0->f_709, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			MISC::CLEAR_BIT(&(uParam0->f_709), 0);
		}
	}
}

bool func_685(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_709, 0);
}

void func_686()
{
	vector3 vVar0;

	if (Local_80.f_197 != 2)
	{
		return;
	}
	if (Local_80.f_21 > 0)
	{
		return;
	}
	vVar0 = { vLocal_591[0 /*3*/] };
	if (!func_31(vVar0, 0f, 0f, 0f, 0))
	{
		func_687(200, vVar0, &uLocal_2765, 1140457472 /* Float: 500f */, 1144750080 /* Float: 750f */, 0);
	}
}

void func_687(int iParam0, vector3 vParam1, int iParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;
	float fVar1;

	if ((((func_47(PLAYER::PLAYER_ID()) && !func_46(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 8)) && (func_43(PLAYER::PLAYER_ID()) || func_42(PLAYER::PLAYER_ID()))) || func_19(vParam1))
	{
		return;
	}
	Global_1674347 = { vParam1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam1);
	func_727(iParam0, fVar0);
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_41(PLAYER::PLAYER_ID()) || func_726(PLAYER::PLAYER_ID()))
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
	if (fVar0 < fParam5)
	{
		if (!(func_363(PLAYER::PLAYER_ID(), 21) || func_363(PLAYER::PLAYER_ID(), 25)))
		{
			func_725(vParam1, 1, 0);
		}
		if (!*iParam4 && func_1274(PLAYER::PLAYER_ID(), 1, 1))
		{
			*iParam4 = 1;
			if (func_724(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_723(iParam0));
				if (func_722(iParam0, -1))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, true);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), true);
					}
					MISC::SET_BIT(&(Global_1674347.f_3), 0);
				}
			}
			if (func_721(iParam0))
			{
				fVar1 = func_720(iParam0);
				if (fVar1 != 1f)
				{
					func_716(fVar1);
					MISC::SET_BIT(&(Global_1674347.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_715(iParam0) && func_41(PLAYER::PLAYER_ID()))
				{
					func_713(1);
					func_712(2);
				}
			}
			func_360(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_40(PLAYER::PLAYER_ID(), 19))
			{
				func_362(19);
			}
		}
		if (*iParam4 && func_1274(PLAYER::PLAYER_ID(), 1, 1))
		{
			*iParam4 = 0;
			if (func_724(iParam0))
			{
				if (MISC::IS_BIT_SET(Global_1674347.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					MISC::CLEAR_BIT(&(Global_1674347.f_3), 0);
				}
			}
			if (func_721(iParam0))
			{
				func_711();
				MISC::CLEAR_BIT(&(Global_1674347.f_3), 1);
			}
			if (bParam7 && !func_47(PLAYER::PLAYER_ID()))
			{
				if (func_145(PLAYER::PLAYER_ID()) != 152)
				{
					func_689();
				}
			}
			if (func_234(2))
			{
				func_713(0);
				func_688(2);
			}
		}
	}
}

void func_688(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_45), iParam0);
}

void func_689()
{
	MISC::_COPY_MEMORY(&(Global_2405072.f_24), &Global_2409327, 2);
	MISC::_COPY_MEMORY(&(Global_2405072.f_26), &Global_2409329, 19);
	func_709();
	func_692(1, 1, 0);
	func_690();
}

void func_690()
{
	func_691(0, 0);
}

void func_691(int iParam0, int iParam1)
{
	Global_2405072.f_22 = iParam0;
	Global_2405072.f_23 = iParam1;
}

void func_692(bool bParam0, bool bParam1, bool bParam2)
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
		func_708();
	}
	if (!bParam2)
	{
		func_695(0, 1, 0, 1060320051 /* Float: 0.7f */, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1088421888 /* Float: 7f */, 1084227584 /* Float: 5f */, 0, 1066192077 /* Float: 1.1f */, 0, 0, 1, 0, 1109393408 /* Float: 40f */);
	}
	func_694(0);
	func_693();
}

void func_693()
{
	struct<6> Var0;

	if (Global_2405072.f_487.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405072.f_487 = { Var0 };
	}
}

void func_694(bool bParam0)
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

void func_695(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_707())
		{
			func_706();
		}
		Global_2405072.f_706.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405072.f_706.f_504 = iParam1;
		Global_2405072.f_706.f_505 = iParam2;
		Global_2405072.f_706.f_506 = iParam10;
		func_704();
		func_699(8, 0, 0, 0, 0);
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
		func_696();
	}
}

void func_696()
{
	if (func_707() && !func_698())
	{
		func_706();
	}
	if (func_698())
	{
		func_697();
	}
	else
	{
		func_704();
		func_699(0, 0, 0, 0, 0);
		Global_2405072.f_1745 = 0;
		Global_2405072.f_1744 = 0;
	}
}

void func_697()
{
	MISC::_COPY_MEMORY(&(Global_2405072.f_706), &(Global_2405072.f_1225), 519);
	Global_2405072.f_487 = { Global_2405072.f_493 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_706.f_518)
	{
		Global_2405072.f_1744 = 0;
	}
}

bool func_698()
{
	if ((Global_2405072.f_1744 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_1225.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405072.f_1225.f_518))
	{
		return true;
	}
	return false;
}

void func_699(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2439138.f_1894.f_703.f_16 != func_389())
	{
		if (MISC::IS_BIT_SET(Global_2425662[Global_2439138.f_1894.f_703.f_16 /*421*/].f_404, 0) && func_700())
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

bool func_700()
{
	if ((((((func_145(PLAYER::PLAYER_ID()) == 229 || func_145(PLAYER::PLAYER_ID()) == 191) || func_703()) || func_702()) || func_623(PLAYER::PLAYER_ID())) || Global_2513890.f_226 == 1) || (Global_2405072.f_1745 && func_701(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	return true;
}

int func_701(bool bParam0)
{
	if (func_43(bParam0))
	{
		return 1;
	}
	if (func_45(bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_702()
{
	return Global_1574405;
}

bool func_703()
{
	if (Global_4456448 == 6)
	{
		return true;
	}
	return false;
}

void func_704()
{
	if (func_707() && !func_698())
	{
		func_706();
	}
	func_705();
	Global_2405072.f_706 = 0;
}

void func_705()
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

void func_706()
{
	if (func_698())
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

bool func_707()
{
	if ((Global_2405072.f_1745 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_706.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405072.f_706.f_518))
	{
		return true;
	}
	return false;
}

void func_708()
{
	MISC::_COPY_MEMORY(&(Global_2405072.f_365), &Global_2409668, 121);
}

void func_709()
{
	func_710();
	Global_2405072.f_2254 = 0;
}

void func_710()
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

void func_711()
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

void func_712(int iParam0)
{
	MISC::SET_BIT(&(Global_2537071.f_5124.f_45), iParam0);
}

void func_713(int iParam0)
{
	if (func_714() && iParam0)
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

int func_714()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

bool func_715(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return true;
		default:
			break;
	}
	return false;
}

void func_716(float fParam0)
{
	float fVar0;

	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_717())
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

int func_717()
{
	switch (func_719())
	{
		case 0:
			return func_718();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_718()
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

int func_719()
{
	return Global_30768;
}

float func_720(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0f;
		default:
			break;
	}
	return 1f;
}

bool func_721(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return true;
		default:
			break;
	}
	return false;
}

bool func_722(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return true;
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return true;
			}
			break;
		case 170:
		case 166:
		case 173:
			return true;
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return true;
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return true;
			}
			break;
	}
	return false;
}

float func_723(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		case 144:
			return 0f;
		case 185:
			return 0f;
		default:
			break;
	}
	return 1f;
}

bool func_724(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return true;
		default:
			break;
	}
	return false;
}

void func_725(vector3 vParam0, int iParam3, int iParam4)
{
	Global_2405072.f_45.f_49 = { vParam0 };
	Global_2405072.f_45.f_52 = iParam3;
	Global_2405072.f_45.f_53 = iParam4;
}

bool func_726(bool bParam0)
{
	if (func_132(bParam0))
	{
		if (func_41(bParam0))
		{
			return true;
		}
	}
	return false;
}

void func_727(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = func_730(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_728();
	}
}

void func_728()
{
	if (!func_729(PLAYER::PLAYER_ID()))
	{
		func_360(25);
	}
}

bool func_729(bool bParam0)
{
	return func_40(bParam0, 25);
}

int func_730(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12522;
		case 142:
			return Global_262145.f_12510;
		case 157:
			return Global_262145.f_12477;
		case 159:
			return Global_262145.f_12460;
		case 162:
			return Global_262145.f_12571;
		case 173:
			return 100;
		case 170:
			return 100;
		default:
			break;
	}
	return -1;
}

void func_731()
{
	int iVar0;

	if (!MISC::IS_BIT_SET(Local_80.f_1, 3))
	{
		if (Local_80.f_197 == 2)
		{
			if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
			{
				if (Local_80.f_21 >= 2)
				{
					if (!MISC::IS_BIT_SET(iLocal_538, 3))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								iLocal_2003 = iVar0;
								ENTITY::SET_ENTITY_PROOFS(iVar0, false, true, true, false, false, false, false, false);
								MISC::SET_BIT(&iLocal_538, 3);
							}
						}
					}
					else if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2003))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2003, false))
							{
								ENTITY::SET_ENTITY_PROOFS(iLocal_2003, false, false, false, false, false, false, false, false);
								MISC::CLEAR_BIT(&iLocal_538, 3);
							}
						}
					}
					else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (iVar0 != iLocal_2003)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_2003))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2003, false))
								{
									ENTITY::SET_ENTITY_PROOFS(iLocal_2003, false, false, false, false, false, false, false, false);
									MISC::CLEAR_BIT(&iLocal_538, 3);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_538, 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2003))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2003, false))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_2003, false, false, false, false, false, false, false, false);
				MISC::CLEAR_BIT(&iLocal_538, 3);
			}
		}
	}
}

void func_732()
{
	if (Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 0 || Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 2)
	{
		if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0) || MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
		{
			if (!func_735())
			{
				func_734();
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0) || MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
	{
		if (func_735())
		{
			func_733();
		}
	}
}

void func_733()
{
	MISC::CLEAR_BIT(&(Global_1674347.f_3), 5);
}

void func_734()
{
	MISC::SET_BIT(&(Global_1674347.f_3), 5);
}

bool func_735()
{
	return MISC::IS_BIT_SET(Global_1674347.f_3, 5);
}

void func_736()
{
	struct<4> Var0;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	struct<4> Var10;
	struct<4> Var14;
	struct<4> Var18;
	struct<4> Var22;
	struct<4> Var26;

	if (func_367(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7)
	{
		case 0:
			if (Local_80.f_197 == 2)
			{
				if (!MISC::IS_BIT_SET(iLocal_537, 29))
				{
					if (func_901())
					{
						func_879(200, 1, Local_80.f_197, 0);
					}
					else
					{
						func_879(200, 0, Local_80.f_197, 0);
					}
					MISC::SET_BIT(&iLocal_537, 29);
				}
			}
			if (!func_1004(1))
			{
				if (MISC::IS_BIT_SET(iLocal_536, 31))
				{
					func_1002(func_1003(), 1);
					func_997();
					MISC::CLEAR_BIT(&iLocal_536, 31);
				}
				if (Local_80.f_21 == 0)
				{
					if (!MISC::IS_BIT_SET(iLocal_536, 0))
					{
						if (func_622(0, 1, 1, 1))
						{
							if (func_878())
							{
								sVar4 = func_877();
								if (Local_80.f_197 == 2)
								{
									if (func_878())
									{
										func_876(sVar4, "CAG_BLIPS", iLocal_2747, 30000);
									}
								}
								else
								{
									func_621(sVar4, 30000);
									func_620(0);
								}
								MISC::SET_BIT(&iLocal_536, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
							}
						}
					}
				}
				if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
				{
					if (func_875(1))
					{
						if (!MISC::IS_BIT_SET(Global_1574650.f_1, 8))
						{
							func_874();
						}
						if (MISC::IS_BIT_SET(iLocal_537, 3))
						{
							Var0 = { func_873() };
							if (func_492(&Var0))
							{
								if (func_23(&uLocal_2740, 3000, 0))
								{
									MISC::CLEAR_BIT(&iLocal_537, 3);
									func_22(&uLocal_2740);
									HUD::CLEAR_HELP(true);
								}
							}
						}
						if (iLocal_2000 < func_382())
						{
							if (!func_427(PLAYER::PLAYER_ID()))
							{
								func_872(1);
							}
							if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 8))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
								if (!func_44())
								{
									if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
										MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
										PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
										PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, true);
									}
									else if (func_870(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
									{
										if (func_869(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
										{
											NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
											PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
											MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
											PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, true);
										}
									}
								}
							}
							else if (func_44())
							{
								MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
							}
							if (!MISC::IS_BIT_SET(iLocal_536, 18))
							{
								MISC::SET_BIT(&iLocal_536, 18);
							}
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!func_44())
								{
									if (func_870(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
									{
										if (MISC::IS_BIT_SET(iLocal_536, 24))
										{
											MISC::CLEAR_BIT(&iLocal_536, 24);
										}
										if (MISC::IS_BIT_SET(iLocal_536, 23))
										{
											MISC::CLEAR_BIT(&iLocal_536, 23);
										}
										iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar5, false))
										{
											PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, true);
											if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar5, -1, false) == PLAYER::PLAYER_PED_ID())
											{
												if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
												{
													if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
													{
														if (PED::CAN_KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID()))
														{
															PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
														}
													}
													else if (!PED::CAN_KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID()))
													{
														PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
													}
												}
												if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 13))
												{
													MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 13);
												}
												if (MISC::IS_BIT_SET(Local_80.f_35, NETWORK::PARTICIPANT_ID_TO_INT()))
												{
													if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
													{
														MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 6);
													}
													MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 0);
													iLocal_2002 = iVar5;
													if (Local_2722.f_11 == 0)
													{
														Local_2722.f_11 = NETWORK::_0xF12E6CD06C73D69E();
													}
													sVar4 = func_868();
													if (func_492(sVar4))
													{
														HUD::CLEAR_HELP(true);
													}
												}
											}
											else
											{
												if (!MISC::IS_BIT_SET(iLocal_536, 11))
												{
													if (func_622(0, 1, 1, 1))
													{
														if (func_878())
														{
															Var6 = { func_867() };
															if (func_878())
															{
																func_621(&Var6, 30000);
															}
															if (Local_80.f_197 != 2)
															{
																func_620(1);
															}
															MISC::SET_BIT(&iLocal_536, 11);
														}
													}
												}
												if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
												{
													MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 6);
												}
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_536, 24))
										{
											if (func_622(0, 1, 1, 1))
											{
												if (func_878())
												{
													sVar4 = func_866();
													if (func_878())
													{
														func_621(sVar4, 30000);
													}
													if (Local_80.f_197 != 2)
													{
														func_620(1);
													}
													MISC::SET_BIT(&iLocal_536, 24);
												}
											}
										}
										if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 8))
										{
											func_865(1);
											MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
											PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
										}
									}
								}
								else if (!MISC::IS_BIT_SET(iLocal_536, 23))
								{
									if (func_622(0, 1, 1, 1))
									{
										MISC::SET_BIT(&iLocal_536, 23);
										if (func_878())
										{
											func_621("PEN_PASSMD", 30000);
										}
										if (Local_80.f_197 != 2)
										{
											func_620(1);
										}
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_536, 1))
								{
									if (MISC::IS_BIT_SET(iLocal_536, 0))
									{
										if (func_622(0, 1, 1, 1))
										{
											if (func_878())
											{
												sVar4 = func_868();
												if (func_878())
												{
													func_621(sVar4, 30000);
												}
												if (Local_80.f_197 != 2)
												{
													func_620(1);
												}
												MISC::SET_BIT(&iLocal_536, 1);
											}
										}
									}
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2002, false))
								{
								}
								if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
								{
									MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 6);
								}
							}
							func_864();
						}
					}
					else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (MISC::IS_BIT_SET(Global_1574650.f_1, 8))
						{
							func_862();
						}
						if (MISC::IS_BIT_SET(iLocal_536, 24))
						{
							MISC::CLEAR_BIT(&iLocal_536, 24);
						}
						if (MISC::IS_BIT_SET(iLocal_536, 18))
						{
							MISC::CLEAR_BIT(&iLocal_536, 18);
						}
						if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 8))
						{
							func_865(1);
							PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
							MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
						}
						if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
						{
							MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 6);
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::CAN_KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
						}
						if (MISC::IS_BIT_SET(iLocal_537, 4))
						{
							if (!MISC::IS_BIT_SET(iLocal_537, 3))
							{
								if (func_622(0, 1, 1, 1))
								{
									if (func_878())
									{
										MISC::CLEAR_BIT(&iLocal_537, 4);
										MISC::SET_BIT(&iLocal_537, 3);
										func_22(&uLocal_2740);
										func_388(&uLocal_2740, 0, 0);
										Var0 = { func_873() };
										if (func_878())
										{
											func_621(&Var0, 30000);
										}
										if (Local_80.f_197 != 2)
										{
											func_620(1);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (!func_875(1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 8))
							{
								func_865(1);
								MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
								PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
								PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
							}
							MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 0);
							MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 13);
							func_997();
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::CAN_KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
							}
							if (MISC::IS_BIT_SET(iLocal_536, 18))
							{
								MISC::CLEAR_BIT(&iLocal_536, 18);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2002, false))
							{
							}
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
							if (func_427(PLAYER::PLAYER_ID()))
							{
								func_872(0);
							}
							MISC::SET_BIT(&iLocal_537, 4);
						}
					}
					else
					{
						if (MISC::IS_BIT_SET(iLocal_537, 3))
						{
							Var0 = { func_873() };
							if (func_492(&Var0))
							{
								if (func_23(&uLocal_2740, 3000, 0))
								{
									MISC::CLEAR_BIT(&iLocal_537, 3);
									func_22(&uLocal_2740);
									HUD::CLEAR_HELP(true);
								}
							}
						}
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
						}
						if (func_44())
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::CAN_KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
							}
							MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 0);
							MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 13);
						}
						else if (!MISC::IS_BIT_SET(iLocal_536, 25))
						{
							if (MISC::IS_BIT_SET(Local_80.f_1, 7))
							{
								if (func_622(0, 1, 1, 1))
								{
									if (func_878())
									{
										Var10 = { func_861() };
										if (func_878())
										{
											func_621(&Var10, 30000);
										}
										if (Local_80.f_197 != 2)
										{
											func_620(1);
										}
										MISC::SET_BIT(&iLocal_536, 25);
									}
								}
							}
						}
						func_864();
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if ((!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) || (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))) || !func_870(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
						{
							MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 0);
							MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 13);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2002, false))
							{
							}
						}
						else if (MISC::IS_BIT_SET(Local_80.f_1, 1))
						{
							Var0 = { func_860() };
							if (func_492(&Var0))
							{
								HUD::CLEAR_HELP(true);
							}
						}
						else if (!MISC::IS_BIT_SET(iLocal_536, 3))
						{
							if (func_622(0, 1, 1, 1))
							{
								if (func_878())
								{
									Var0 = { func_860() };
									if (func_878())
									{
										func_621(&Var0, 30000);
									}
									if (Local_80.f_197 != 2)
									{
										func_620(1);
									}
									MISC::SET_BIT(&iLocal_536, 3);
								}
							}
						}
					}
					if (MISC::IS_BIT_SET(iLocal_536, 0))
					{
						if (!MISC::IS_BIT_SET(iLocal_536, 2))
						{
							if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
							{
								if (MISC::IS_BIT_SET(Local_80.f_1, 1))
								{
									if (func_622(0, 1, 1, 1))
									{
										if (func_878())
										{
											Var0 = { func_859() };
											if (func_878())
											{
												func_621(&Var0, 30000);
											}
											if (Local_80.f_197 != 2)
											{
												func_620(1);
											}
											MISC::SET_BIT(&iLocal_536, 2);
										}
									}
								}
							}
						}
					}
				}
				func_478(1, 0);
				func_468();
				func_454();
			}
			else if (!MISC::IS_BIT_SET(iLocal_536, 31))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_557))
				{
					HUD::REMOVE_BLIP(&iLocal_557);
				}
				func_434();
				func_421();
				MISC::SET_BIT(&iLocal_536, 31);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
				if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
				{
					MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 0);
				}
			}
			if (Local_80.f_21 >= 1)
			{
				if (!MISC::IS_BIT_SET(Local_80.f_1, 12))
				{
					if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
					{
						if (Local_80.f_197 == 2)
						{
							if (!func_901())
							{
								func_713(1);
							}
							func_853(0);
							func_728();
							func_852(1);
						}
						else
						{
							func_843(136, 0f, 0f, 1, 1, 1, 0);
							func_819(1);
							func_872(0);
						}
						func_872(0);
						if (HUD::DOES_BLIP_EXIST(iLocal_557))
						{
							HUD::REMOVE_BLIP(&iLocal_557);
						}
						func_421();
						func_818(1);
						func_815();
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::CAN_KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
						}
						iLocal_555 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
						if (Local_80.f_197 != 2)
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_553);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, true);
						}
						else
						{
							func_865(0);
							ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, true, true, false, false, false, false, false);
							MISC::SET_BIT(&iLocal_538, 2);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
						}
						func_812(8, 0, 1);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						func_388(&uLocal_2742, 0, 0);
						Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 1;
					}
					else if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
					{
						if (Local_80.f_197 == 2)
						{
						}
						else
						{
							func_843(136, 0f, 0f, 1, 1, 0, 0);
						}
						func_421();
						if (HUD::DOES_BLIP_EXIST(iLocal_557))
						{
							HUD::REMOVE_BLIP(&iLocal_557);
						}
						func_818(1);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						func_872(0);
						Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 1;
					}
					else
					{
						if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 8))
						{
							func_865(1);
							PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
							MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_557))
						{
							HUD::REMOVE_BLIP(&iLocal_557);
						}
						func_872(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
						func_421();
						func_811(&iLocal_2716);
						Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 8))
					{
						func_865(1);
						PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
						MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
					}
					func_434();
					if (HUD::DOES_BLIP_EXIST(iLocal_557))
					{
						HUD::REMOVE_BLIP(&iLocal_557);
					}
					func_421();
					func_811(&iLocal_2716);
					func_872(0);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
					Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
				}
			}
			else if (Local_80.f_197 != 2 && func_808(2, 0, 1, 0, 0))
			{
				func_872(0);
				Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 5;
			}
			func_807();
			break;
		case 1:
			func_454();
			func_807();
			func_478(!MISC::IS_BIT_SET(iLocal_536, 9), 0);
			func_864();
			func_806();
			if (Local_80.f_21 >= 2)
			{
				func_388(&uLocal_589, 0, 0);
				Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 2;
			}
			break;
		case 2:
			if (Local_2722.f_9 == 0)
			{
				Local_2722.f_9 = NETWORK::_0xF12E6CD06C73D69E();
			}
			if (Local_80.f_197 == 2)
			{
				if (!MISC::IS_BIT_SET(iLocal_538, 0))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					MISC::SET_BIT(&iLocal_538, 0);
				}
				else if (PLAYER::GET_MAX_WANTED_LEVEL() > 0)
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
				}
			}
			func_29(1);
			func_448();
			func_478(0, 0);
			func_797();
			func_439();
			func_494(0);
			func_790();
			func_807();
			func_788();
			sVar4 = func_868();
			if (!MISC::IS_BIT_SET(iLocal_536, 13))
			{
				Var26 = { func_787() };
				if (!func_1004(1))
				{
					if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
					{
						if (func_622(0, 0, 1, 1))
						{
							if (!func_786(55))
							{
								func_621(&Var26, 30000);
								if (Local_80.f_197 != 2)
								{
									func_620(1);
								}
								MISC::SET_BIT(&iLocal_536, 13);
							}
						}
					}
				}
				else
				{
					Var14 = { func_867() };
					Var18 = { func_861() };
					Var22 = { func_873() };
					if ((((((func_492(&Var26) || func_492(&Var22)) || func_492(&Var14)) || func_492(sVar4)) || func_492(&Var18)) || func_492("PEN_MPLAY")) || func_492("PEN_START2"))
					{
						HUD::CLEAR_HELP(true);
					}
				}
			}
			else if (iLocal_540 != 0)
			{
				if (!MISC::IS_BIT_SET(iLocal_536, 5))
				{
					if (func_622(0, 0, 1, 1))
					{
						if (!func_786(55))
						{
							func_621("PEN_STILLP", 30000);
							if (Local_80.f_197 != 2)
							{
								func_620(1);
							}
							MISC::SET_BIT(&iLocal_536, 5);
						}
					}
				}
			}
			if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
			{
				Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
				func_421();
				if (HUD::DOES_BLIP_EXIST(iLocal_2004))
				{
					HUD::REMOVE_BLIP(&iLocal_2004);
				}
			}
			else if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
			{
				if (MISC::IS_BIT_SET(iLocal_536, 12))
				{
					Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
					func_421();
				}
			}
			if (Local_80.f_21 == 3)
			{
				func_434();
				func_421();
				Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
			}
			if (func_446())
			{
				if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
				{
					MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 0);
				}
				if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
				{
					MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 6);
				}
				if (func_785())
				{
					func_784(0);
				}
				MISC::SET_BIT(&iLocal_537, 20);
				func_434();
				func_421();
				func_865(1);
				MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
				Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
			}
			else if (Local_80.f_21 == 4)
			{
				Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 4;
			}
			else if (Local_80.f_21 > 4)
			{
				Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 5;
			}
			else if (Local_80.f_197 != 2 && func_808(2, 0, 1, 0, 0))
			{
				Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 5;
			}
			else if (func_481())
			{
				func_434();
				func_421();
				func_865(1);
				MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
				Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
			}
			break;
		case 3:
			if (!func_1004(1))
			{
				if ((!MISC::IS_BIT_SET(Local_80.f_1, 17) && !MISC::IS_BIT_SET(Local_80.f_1, 16)) && !MISC::IS_BIT_SET(Local_80.f_1, 18))
				{
					func_779();
					func_777();
				}
				func_807();
				if ((!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0) || MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1)) || MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
				{
					if (Local_80.f_21 > 1 && Local_80.f_21 < 3)
					{
						if (!MISC::IS_BIT_SET(iLocal_537, 17))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_556))
							{
								HUD::SET_BLIP_COLOUR(iLocal_556, 55);
								MISC::SET_BIT(&iLocal_537, 17);
							}
						}
						func_29(1);
						func_448();
					}
					if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0) || MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
					{
						func_478(0, 1);
					}
				}
			}
			else if (MISC::IS_BIT_SET(iLocal_537, 17))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_556))
				{
					HUD::REMOVE_BLIP(&iLocal_556);
				}
			}
			if (MISC::IS_BIT_SET(iLocal_538, 0))
			{
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				MISC::CLEAR_BIT(&iLocal_538, 0);
			}
			if (func_785())
			{
				if (func_446())
				{
					func_784(0);
				}
			}
			func_37();
			if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
			{
				if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 2))
				{
					func_494(1);
				}
			}
			else
			{
				func_776();
			}
			if (MISC::IS_BIT_SET(iLocal_536, 6))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Inside_Bubble_Scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Outside_Bubble_Scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
				}
				GRAPHICS::ANIMPOSTFX_STOP("pennedIn");
				GRAPHICS::ANIMPOSTFX_PLAY("PennedInOut", 0, false);
				MISC::CLEAR_BIT(&iLocal_536, 6);
			}
			if (Local_80.f_197 != 2)
			{
				if (func_47(PLAYER::PLAYER_ID()))
				{
					func_819(0);
					func_818(0);
					MISC::SET_BIT(&iLocal_537, 24);
					func_750(136, 0, 1);
				}
			}
			else if (!MISC::IS_BIT_SET(iLocal_537, 24))
			{
				func_818(0);
				MISC::SET_BIT(&iLocal_537, 24);
			}
			if (!MISC::IS_BIT_SET(iLocal_537, 21))
			{
				if (MISC::IS_BIT_SET(iLocal_537, 14) || MISC::IS_BIT_SET(iLocal_536, 20))
				{
					MISC::SET_BIT(&iLocal_537, 21);
				}
			}
			if (func_673())
			{
				if (func_737())
				{
					if (Local_80.f_21 == 4)
					{
						Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 4;
					}
					else if (Local_80.f_21 > 4)
					{
						Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 5;
					}
					else
					{
						func_485();
					}
				}
			}
			break;
		case 4:
			if (Local_80.f_21 > 4)
			{
				Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 5;
			}
			break;
		case 5:
			func_1160();
			break;
	}
}

bool func_737()
{
	if ((func_484() && !func_19(vLocal_2756)) || MISC::IS_BIT_SET(iLocal_537, 23))
	{
		switch (iLocal_2760)
		{
			case 0:
				if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(500);
				}
				else
				{
					iLocal_2760++;
				}
				break;
			case 1:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					MISC::SET_BIT(&iLocal_537, 23);
					func_749();
					func_485();
					iLocal_2760++;
				}
				break;
			case 2:
				if (func_738(vLocal_2756, fLocal_2759, 0, 1, 0, 0, 1, 0, 1, 0, 0))
				{
					iLocal_2760++;
				}
				break;
			case 3:
				if (!CAM::IS_SCREEN_FADING_IN() && !CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
					iLocal_2760++;
				}
				break;
			case 4:
				if (CAM::IS_SCREEN_FADED_IN())
				{
					iLocal_2760++;
				}
				break;
			case 5:
				return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_738(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	Global_22211.f_6 = 1;
	if (Global_2439138.f_1233 && Global_2439138.f_1241)
	{
		func_746(0, bParam9);
		return true;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam9)
	{
		if (Global_2439138.f_1233)
		{
			func_746(0, bParam9);
		}
		return false;
	}
	if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam9) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return false;
	}
	if (!func_745())
	{
		if (func_744(PLAYER::PLAYER_ID(), 1, 0) && !(func_594() || func_743()))
		{
			if (((bParam9 && func_1274(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_222 == 1)
			{
			}
			else if (func_742() == 28)
			{
			}
			else
			{
				return false;
			}
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2439138.f_1233 && !bParam11)
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if ((MISC::ABSF((vVar1.x - vParam0.x)) < 0.2f && MISC::ABSF((vVar1.y - vParam0.y)) < 0.2f) && MISC::ABSF((vVar1.z - vParam0.z)) < 1.2f)
		{
			fVar4 = (fParam3 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (MISC::ABSF(fVar4) < 1f)
			{
				Global_2439138.f_1233 = 0;
				Global_2439138.f_1234 = 0;
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				return true;
			}
		}
	}
	if (((!vParam0.x == Global_2439138.f_1235 || !vParam0.y == Global_2439138.f_1235.f_1) || !vParam0.z == Global_2439138.f_1235.f_2) || !fParam3 == Global_2439138.f_1238)
	{
		if (Global_2439138.f_1233 == 1)
		{
			if (NETWORK::IS_TIME_EQUAL_TO(NETWORK::_0xBA7F0B77D80A4EB7(), Global_2439138.f_1239) < func_741(0))
			{
				return false;
			}
			PLAYER::STOP_PLAYER_TELEPORT();
			Global_2439138.f_1234 = 1;
		}
		else
		{
			Global_2439138.f_1234 = 0;
		}
		Global_2439138.f_1235 = { vParam0 };
		Global_2439138.f_1238 = fParam3;
		Global_2439138.f_1233 = 0;
	}
	if (!Global_2439138.f_1233 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		bParam7 = bParam7;
		if (bParam7)
		{
		}
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!MISC::IS_BIT_SET(Global_98796.f_1357[44], 16))
			{
				func_740(0);
			}
			if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &(Global_2405072.f_499)))
			{
				Global_2405072.f_499 = 0;
			}
		}
		if (bParam4)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar0))
				{
					Global_2439138.f_1240 = 0;
				}
			}
		}
		if (Global_2439138.f_1240 > -1)
		{
			Global_2439138.f_1239 = NETWORK::_0xBA7F0B77D80A4EB7();
			Global_2439138.f_1233 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, vParam0, false, true, true, true);
							ENTITY::SET_ENTITY_HEADING(iVar0, fParam3);
							if (fParam12 != 0f)
							{
								ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
							}
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, false, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, false, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
				func_746(bParam6, bParam9);
				return true;
			}
			else
			{
				STREAMING::CLEAR_FOCUS();
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vParam0, fParam3, bParam4, bParam10, false);
			}
			Global_2439138.f_1239 = NETWORK::_0xBA7F0B77D80A4EB7();
			Global_2439138.f_1233 = 1;
		}
	}
	if (Global_2439138.f_1233)
	{
		Global_22211.f_6 = 1;
		Global_2439138.f_1239 = NETWORK::_0xBA7F0B77D80A4EB7();
		if (Global_2439138.f_1240 > -1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			}
			if (func_739(&(Global_2439138.f_1240), vParam0, fParam3, iVar0))
			{
				func_746(bParam6, bParam9);
				return true;
			}
		}
		else
		{
			if (bParam9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_2439138.f_1235) < 2f)
				{
					if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					{
						PLAYER::STOP_PLAYER_TELEPORT();
					}
					func_746(bParam6, bParam9);
					return true;
				}
			}
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				if (fParam12 != 0f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
						Global_2439138.f_1241 = 1;
						return false;
					}
				}
				func_746(bParam6, bParam9);
				return true;
			}
		}
	}
	return false;
}

bool func_739(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2439138.f_1242) && !ENTITY::IS_ENTITY_DEAD(Global_2439138.f_1242, false))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2439138.f_1242);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2439138.f_1242 = iParam5;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2439138.f_1242);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2439138.f_1242))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_2439138.f_1242, false))
				{
					ENTITY::SET_ENTITY_HEADING(Global_2439138.f_1242, fParam4);
					ENTITY::SET_ENTITY_COORDS(Global_2439138.f_1242, vParam1, false, true, true, true);
					return true;
				}
			}
			break;
	}
	return false;
}

void func_740(int iParam0)
{
	int iVar0;

	iVar0 = Global_2405072.f_2682;
	if ((AUDIO::_0x2DD39BF3E2F9C47F() && Global_2405072.f_2680 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405072.f_2679)
	{
		if (!AUDIO::IS_RADIO_RETUNING())
		{
			Global_2405072.f_2679 = iVar0;
		}
	}
}

int func_741(bool bParam0)
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

int func_742()
{
	return Global_1312812;
}

bool func_743()
{
	return ((MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1695469, 12)) && Global_1695468 == 8);
}

bool func_744(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_2425662[iParam0 /*421*/].f_222 == 99)
	{
		if ((bParam2 && Global_2425662[iParam0 /*421*/].f_225 == 0) || bParam2 == 0)
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (Global_2425662[iParam0 /*421*/].f_222 == 13)
		{
			return false;
		}
	}
	return true;
}

bool func_745()
{
	return Global_1312854;
}

void func_746(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	if (!bParam1)
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	func_660();
	if (!MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 14) && !func_748())
	{
		func_747();
	}
}

void func_747()
{
	Global_2546219.f_82 = 1;
}

bool func_748()
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_745())
	{
		return false;
	}
	if (MISC::IS_BIT_SET(Global_4456448.f_238365[0 /*24*/].f_17, 0))
	{
		return true;
	}
	return false;
}

void func_749()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			}
		}
	}
}

void func_750(int iParam0, bool bParam1, bool bParam2)
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
	func_772();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		bVar0 = func_771(func_519(PLAYER::PLAYER_ID()));
		func_769(func_770(iParam0), 0);
	}
	else
	{
		if ((bParam2 && PLAYER::PLAYER_ID() != -1) && func_768(PLAYER::PLAYER_ID()) >= 12)
		{
			func_157(2546, -1);
			iVar1 = func_50(2546, -1, 0);
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
		func_767();
		func_766();
		func_765();
		if ((!func_41(PLAYER::PLAYER_ID()) && !func_39(PLAYER::PLAYER_ID())) && !func_702())
		{
			func_689();
		}
		func_764();
		if (!MISC::IS_BIT_SET(Global_1674347.f_3, 0) && !MISC::IS_BIT_SET(Global_1674347.f_3, 1))
		{
			func_862();
		}
		func_763();
		MISC::CLEAR_BIT(&(Global_2537071.f_1746), 2);
		func_762();
		func_761();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
	}
	if (!bParam1 || bVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !func_363(PLAYER::PLAYER_ID(), 21)) && !func_363(PLAYER::PLAYER_ID(), 25)) && !func_144(PLAYER::PLAYER_ID(), 0))
		{
			func_713(0);
			func_759(0);
			if (!bParam1)
			{
				func_758();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_757(26, -1))
		{
			Global_2462854 = -1;
			func_755(26, -1);
		}
	}
	if (!func_751())
	{
		Global_2513109 = 1;
	}
}

bool func_751()
{
	if ((((((!func_583(PLAYER::PLAYER_ID()) && !func_566(PLAYER::PLAYER_ID())) && func_519(PLAYER::PLAYER_ID()) != 146) && !func_754()) && !func_753()) && !func_752(Global_4456448.f_232883)) && !func_103())
	{
		return false;
	}
	return true;
}

bool func_752(int iParam0)
{
	return iParam0 == 57;
}

bool func_753()
{
	if (Global_4456448.f_194990 == Global_262145.f_9596)
	{
		return true;
	}
	return false;
}

bool func_754()
{
	if ((Global_4456448 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_232883 > 0) || MISC::IS_BIT_SET(Global_4456448.f_4, 15)) || MISC::IS_BIT_SET(Global_4456448.f_4, 18)) || MISC::IS_BIT_SET(Global_4456448.f_4, 19)) || MISC::IS_BIT_SET(Global_4456448.f_4, 29)) || MISC::IS_BIT_SET(Global_4456448.f_4, 28)) || MISC::IS_BIT_SET(Global_4456448.f_5, 23)))
	{
		return true;
	}
	return false;
}

void func_755(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_52();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, bParam1);
			break;
		default:
			iVar1 = func_756(bParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (MISC::IS_BIT_SET(iVar0, iParam0))
			{
				MISC::CLEAR_BIT(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, bParam1);
			}
			break;
	}
}

int func_756(bool bParam0)
{
	int iVar0;

	if (bParam0 == -1)
	{
		bParam0 = func_52();
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

bool func_757(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_52();
	}
	iVar0 = func_756(bParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return MISC::IS_BIT_SET(iVar1, iParam0);
}

void func_758()
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

void func_759(bool bParam0)
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
		func_760(iVar0);
		iVar0++;
	}
}

void func_760(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

void func_761()
{
	Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_7 = 0;
}

void func_762()
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

void func_763()
{
	struct<25> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574650 = { Var0 };
}

void func_764()
{
	var uVar0;

	Global_1319101 = uVar0;
}

void func_765()
{
	Global_2537071.f_4962 = 0;
}

void func_766()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1 = 0;
	}
}

void func_767()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1628237[iVar0 /*615*/] = -1;
	}
}

int func_768(bool bParam0)
{
	return Global_1590535[bParam0 /*876*/].f_211.f_6;
}

void func_769(int iParam0, bool bParam1)
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

int func_770(int iParam0)
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

int func_771(int iParam0)
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
			if (func_42(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_772()
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
	func_775(0);
	func_774(0);
	func_773(0);
}

void func_773(int iParam0)
{
	if (Global_2537071.f_4520 != iParam0)
	{
		Global_2537071.f_4520 = iParam0;
	}
}

void func_774(bool bParam0)
{
	if (Global_2537071.f_4519 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2537071.f_4519 = bParam0;
	}
}

void func_775(int iParam0)
{
	if (Global_2537071.f_4517 != iParam0)
	{
		Global_2537071.f_4517 = iParam0;
	}
}

void func_776()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
			if (iVar1 != 0)
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (PED::IS_PED_A_PLAYER(iVar1))
					{
						iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
						{
							iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
							iVar4 = iVar3;
							if (MISC::IS_BIT_SET(Local_279[iVar4 /*8*/].f_1, 0))
							{
								if (!MISC::IS_BIT_SET(Local_279[iVar4 /*8*/].f_1, 1))
								{
									bVar5 = true;
								}
							}
						}
					}
				}
			}
		}
	}
	if (bVar5)
	{
		func_864();
	}
}

void func_777()
{
	struct<4> Var0;

	if (!MISC::IS_BIT_SET(Local_80.f_1, 12))
	{
		if (!MISC::IS_BIT_SET(iLocal_536, 10))
		{
			if (Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 3)
			{
				if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
				{
					if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
					{
						if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
						{
							if (!MISC::IS_BIT_SET(iLocal_537, 20))
							{
								if (!func_481())
								{
									if (func_622(0, 1, 1, 1))
									{
										Var0 = { func_778() };
										func_621(&Var0, 30000);
										if (Local_80.f_197 != 2)
										{
											func_620(1);
										}
										MISC::SET_BIT(&iLocal_536, 10);
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

struct<4> func_778()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NAVAIL", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_NAVAIL", 16);
			break;
	}
	return Var0;
}

void func_779()
{
	struct<4> Var0;

	if (!MISC::IS_BIT_SET(iLocal_536, 4))
	{
		if (!MISC::IS_BIT_SET(Local_80.f_1, 12))
		{
			if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
			{
				if (func_622(0, 1, 1, 1))
				{
					if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
					{
						if (MISC::IS_BIT_SET(iLocal_537, 5))
						{
							if (!MISC::IS_BIT_SET(iLocal_537, 6))
							{
								Var0 = { func_783() };
								func_621(&Var0, -1);
								if (Local_80.f_197 != 2)
								{
									func_620(1);
								}
								MISC::SET_BIT(&iLocal_537, 6);
							}
						}
						else if (MISC::IS_BIT_SET(iLocal_537, 8))
						{
							if (!MISC::IS_BIT_SET(iLocal_537, 6))
							{
								Var0 = { func_782() };
								func_621(&Var0, -1);
								if (Local_80.f_197 != 2)
								{
									func_620(1);
								}
								MISC::SET_BIT(&iLocal_537, 6);
							}
						}
						else if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
						{
							if (!MISC::IS_BIT_SET(iLocal_537, 6))
							{
								Var0 = { func_782() };
								func_621(&Var0, -1);
								if (Local_80.f_197 != 2)
								{
									func_620(1);
								}
								MISC::SET_BIT(&iLocal_537, 6);
							}
						}
					}
					else if (!MISC::IS_BIT_SET(Local_80.f_1, 5))
					{
						Var0 = { func_781() };
						func_621(&Var0, 30000);
						if (Local_80.f_197 != 2)
						{
							func_620(1);
						}
					}
					MISC::SET_BIT(&iLocal_536, 4);
				}
			}
			else if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
			{
				if (func_622(0, 1, 1, 1))
				{
					if (!MISC::IS_BIT_SET(iLocal_536, 20))
					{
						Var0 = { func_781() };
						func_621(&Var0, 30000);
						if (Local_80.f_197 != 2)
						{
							func_620(1);
						}
						MISC::SET_BIT(&iLocal_536, 4);
					}
				}
			}
		}
		else
		{
			Var0 = { func_780() };
			func_53(&Var0);
			MISC::SET_BIT(&iLocal_536, 4);
		}
	}
}

struct<4> func_780()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXPD", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_EXPD", 16);
			break;
	}
	return Var0;
}

struct<4> func_781()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NAVAIL2", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_NAVAIL2", 16);
			break;
	}
	return Var0;
}

struct<4> func_782()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXITD", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_EXITD", 16);
			break;
	}
	return Var0;
}

struct<4> func_783()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXITP", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_EXITP", 16);
			break;
	}
	return Var0;
}

void func_784(int iParam0)
{
	Global_2537071.f_5047 = iParam0;
}

bool func_785()
{
	return Global_2537071.f_5047;
}

bool func_786(int iParam0)
{
	return Global_2439138.f_2723[0 /*80*/].f_1 == iParam0;
}

struct<4> func_787()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NDRV2", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_NDRV2", 16);
			break;
	}
	return Var0;
}

void func_788()
{
	if (Local_80.f_197 == 2)
	{
		if (!MISC::IS_BIT_SET(iLocal_537, 30))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!MISC::IS_BIT_SET(iLocal_537, 2))
					{
						if (!func_24(&uLocal_587))
						{
							func_388(&uLocal_587, 0, 0);
						}
						else if (func_23(&uLocal_587, 10000, 0))
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								func_789("BRS_BM_EXP1", -1);
								MISC::SET_BIT(&iLocal_537, 30);
							}
						}
					}
				}
			}
		}
	}
}

void func_789(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_790()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	if (!MISC::IS_BIT_SET(iLocal_536, 16))
	{
		if (Local_80.f_21 > 1)
		{
			if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_2001 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2001, -1, false) == PLAYER::PLAYER_PED_ID())
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_2001))
							{
								if (((((!func_796(iLocal_2001, 1) && !func_795(iLocal_2001)) && !func_794(iLocal_2001)) && !func_793(iLocal_2001)) && !func_792(iLocal_2001)) && !func_791(iLocal_2001))
								{
									if (func_870(ENTITY::GET_ENTITY_MODEL(iLocal_2001)))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2001, false, true);
										MISC::SET_BIT(&iLocal_536, 16);
										iVar2 = 0;
										while (iVar2 < 32)
										{
											ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_2001, false, Global_1574967[iVar2]);
											iVar2++;
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
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2001))
	{
		if (!func_796(iLocal_2001, 1) && !func_793(iLocal_2001))
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_2001)))
			{
				sVar1 = "PEN_BIKE";
			}
			else
			{
				sVar1 = "PEN_VEHG";
			}
			bVar3 = true;
		}
		else
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_2001)))
			{
				sVar1 = "PEN_PBIKE";
			}
			else
			{
				sVar1 = "PEN_PVEHG";
			}
			bVar3 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2001))
	{
		if (func_796(iLocal_2001, 1) || func_793(iLocal_2001))
		{
			if (Local_80.f_21 == 2)
			{
				if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2001, false))
					{
						if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 5))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2001))
								{
									if (!func_423(sVar1))
									{
										func_409(sVar1, 0);
									}
								}
								else if (func_423(sVar1))
								{
									func_421();
								}
							}
						}
						else if (func_423(sVar1))
						{
							func_421();
						}
					}
					else if (bVar3)
					{
						if (func_423(sVar1))
						{
							func_421();
						}
					}
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_536, 16))
	{
		if (Local_80.f_21 == 2)
		{
			if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2001, false))
				{
					if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 5))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2001))
							{
								if (!HUD::DOES_BLIP_EXIST(iLocal_2004))
								{
									iLocal_2004 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_2001);
									HUD::SET_BLIP_AS_FRIENDLY(iLocal_2004, true);
								}
								if (!func_423(sVar1))
								{
									func_409(sVar1, 0);
								}
							}
							else if (func_870(ENTITY::GET_ENTITY_MODEL(iLocal_2001)))
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_2004))
								{
									HUD::REMOVE_BLIP(&iLocal_2004);
								}
								if (bVar3)
								{
									if (func_423(sVar1))
									{
										func_421();
									}
								}
							}
						}
					}
					else if (bVar3)
					{
						if (func_423(sVar1))
						{
							func_421();
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_2004))
					{
						HUD::REMOVE_BLIP(&iLocal_2004);
					}
					if (bVar3)
					{
						if (func_423(sVar1))
						{
							func_421();
						}
					}
				}
			}
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_2004) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2001, false))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (func_870(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					if (iVar0 != iLocal_2001)
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
							{
								iLocal_2001 = iVar0;
								if (bVar3)
								{
									if (func_423(sVar1))
									{
										func_421();
									}
								}
								HUD::REMOVE_BLIP(&iLocal_2004);
								if (!func_796(iLocal_2001, 1))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2001, false, true);
								}
							}
						}
						else if (bVar3)
						{
							if (func_423(sVar1))
							{
								func_421();
							}
						}
					}
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2001, false))
			{
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_537, 1))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				MISC::SET_BIT(&iLocal_537, 1);
				MISC::CLEAR_BIT(&iLocal_537, 2);
			}
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!MISC::IS_BIT_SET(iLocal_537, 2))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (func_870(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					MISC::CLEAR_BIT(&iLocal_537, 1);
					MISC::CLEAR_BIT(&iLocal_537, 2);
				}
				else
				{
					MISC::SET_BIT(&iLocal_537, 2);
				}
			}
		}
		else if (MISC::IS_BIT_SET(iLocal_537, 2))
		{
			MISC::CLEAR_BIT(&iLocal_537, 2);
		}
	}
	if (Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 2)
	{
		if (!MISC::IS_BIT_SET(iLocal_537, 5))
		{
			if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar4, -1, false) == PLAYER::PLAYER_PED_ID())
						{
							MISC::SET_BIT(&iLocal_537, 5);
							func_421();
						}
					}
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_537, 8))
	{
		if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar4, -1, false) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar4, -1, false) != 0)
					{
						MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 0);
						MISC::SET_BIT(&iLocal_537, 8);
					}
				}
			}
		}
	}
}

bool func_791(int iParam0)
{
	if (Global_2537071.f_314 == iParam0)
	{
		return true;
	}
	return false;
}

bool func_792(int iParam0)
{
	if (Global_2537071.f_306 == iParam0)
	{
		return true;
	}
	return false;
}

bool func_793(int iParam0)
{
	int iVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3) && DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (MISC::IS_BIT_SET(iVar0, 17))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_794(int iParam0)
{
	if (Global_2537071.f_302[0] == iParam0)
	{
		return true;
	}
	return false;
}

bool func_795(int iParam0)
{
	if (Global_2537071.f_301 == iParam0)
	{
		return true;
	}
	return false;
}

bool func_796(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return true;
			}
		}
	}
	return false;
}

void func_797()
{
	char* sVar0;

	if (MISC::IS_BIT_SET(Local_80.f_1, 3) || MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 10))
	{
		if (MISC::IS_BIT_SET(iLocal_536, 6))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Inside_Bubble_Scene"))
			{
				AUDIO::STOP_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Outside_Bubble_Scene"))
			{
				AUDIO::STOP_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
			}
			GRAPHICS::ANIMPOSTFX_STOP("pennedIn");
			GRAPHICS::ANIMPOSTFX_PLAY("PennedInOut", 0, false);
			MISC::CLEAR_BIT(&iLocal_536, 6);
		}
		if (func_423("PEN_BAREA"))
		{
			func_421();
		}
		if (func_423("PEN_BAREA"))
		{
			func_421();
		}
		if (func_423("PEN_AREA"))
		{
			func_421();
		}
		return;
	}
	if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
	{
		if (func_1004(1))
		{
			if (MISC::IS_BIT_SET(iLocal_536, 6))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Inside_Bubble_Scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Outside_Bubble_Scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
				}
				GRAPHICS::ANIMPOSTFX_STOP("pennedIn");
				GRAPHICS::ANIMPOSTFX_PLAY("PennedInOut", 0, false);
				MISC::CLEAR_BIT(&iLocal_536, 6);
			}
			if (func_423("PEN_BAREA"))
			{
				func_421();
			}
			if (func_423("PEN_BAREA"))
			{
				func_421();
			}
			if (func_423("PEN_AREA"))
			{
				func_421();
			}
			func_434();
			return;
		}
	}
	if ((func_875(0) && !MISC::IS_BIT_SET(iLocal_537, 2)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 9))
		{
			MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 9);
		}
		if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 10))
		{
			if (MISC::IS_BIT_SET(Local_80.f_1, 4))
			{
				MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 10);
			}
			else if (MISC::IS_BIT_SET(iLocal_537, 9))
			{
				MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 10);
			}
		}
		if (func_24(&uLocal_569))
		{
			func_22(&uLocal_569);
			PAD::_SET_CONTROL_GROUP_COLOR(0, 255, 255, 255);
		}
		if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 5))
		{
			MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 5);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "OOB_Cancel", "GTAO_FM_Events_Soundset", false);
			AUDIO::STOP_SOUND(iLocal_2005);
			AUDIO::RELEASE_SOUND_ID(iLocal_2005);
			MISC::CLEAR_BIT(&iLocal_537, 7);
		}
		if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
		{
			if (!func_786(55))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_2001) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2001, false))
				{
					if (func_423("PEN_AREA"))
					{
						func_421();
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_2004))
				{
					if (!func_423("PEN_AREA"))
					{
						func_409("PEN_AREA", 0);
					}
				}
			}
		}
		else if (!func_423("PEN_AREA"))
		{
			func_409("PEN_AREA", 0);
		}
		if (!MISC::IS_BIT_SET(iLocal_536, 6))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Outside_Bubble_Scene"))
			{
				AUDIO::STOP_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
			}
			AUDIO::START_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
			GRAPHICS::ANIMPOSTFX_PLAY("pennedIn", 0, true);
			MISC::SET_BIT(&iLocal_536, 6);
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 9))
		{
			MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 9);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_804();
			if (!MISC::IS_BIT_SET(iLocal_537, 2))
			{
				if (!func_423("PEN_BAREA"))
				{
					func_409("PEN_BAREA", 0);
				}
			}
			else
			{
				if (!func_423("PEN_EXITV"))
				{
					func_409("PEN_EXITV", 0);
				}
				if (!MISC::IS_BIT_SET(iLocal_536, 24))
				{
					if (func_622(0, 1, 1, 1))
					{
						sVar0 = func_866();
						func_621(sVar0, 30000);
						if (Local_80.f_197 != 2)
						{
							func_620(1);
						}
						MISC::SET_BIT(&iLocal_536, 24);
					}
				}
			}
		}
		if (MISC::IS_BIT_SET(iLocal_536, 6))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Inside_Bubble_Scene"))
			{
				AUDIO::STOP_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
			}
			AUDIO::START_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
			GRAPHICS::ANIMPOSTFX_STOP("pennedIn");
			GRAPHICS::ANIMPOSTFX_PLAY("PennedInOut", 0, false);
			MISC::CLEAR_BIT(&iLocal_536, 6);
		}
		if (!func_24(&uLocal_569))
		{
			func_388(&uLocal_569, 0, 0);
		}
		if (!MISC::IS_BIT_SET(iLocal_537, 7))
		{
			MISC::SET_BIT(&iLocal_537, 7);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "OOB_Start", "GTAO_FM_Events_Soundset", false);
			iLocal_2005 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_2005, "OOB_Timer_Dynamic", "GTAO_FM_Events_Soundset", false);
			AUDIO::SET_VARIABLE_ON_SOUND(iLocal_2005, "Time", (SYSTEM::TO_FLOAT(func_438()) / 1000f));
		}
		if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 5))
		{
			MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 5);
		}
		if (!MISC::IS_BIT_SET(iLocal_536, 12))
		{
			if (func_24(&uLocal_569))
			{
				if ((func_438() - func_348(&uLocal_569, 0, 0)) >= 0)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						func_435((func_438() - func_348(&uLocal_569, 0, 0)), "PEN_ELM", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					}
					else
					{
						func_801();
					}
				}
				else
				{
					func_801();
				}
			}
		}
	}
	func_798();
	func_864();
}

void func_798()
{
	int iVar0;

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID())
	{
		if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0))
		{
			if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
			{
				return;
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
	{
		return;
	}
	if (MISC::IS_BIT_SET(iLocal_537, 2))
	{
		return;
	}
	func_799();
	func_806();
}

void func_799()
{
	struct<4> Var0;

	if (!MISC::IS_BIT_SET(iLocal_536, 21))
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(0, 75) || PAD::IS_CONTROL_PRESSED(0, 75)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 75))
		{
			MISC::SET_BIT(&iLocal_536, 21);
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_536, 22))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			Var0 = { func_800() };
			func_621(&Var0, 30000);
			if (Local_80.f_197 != 2)
			{
				func_620(1);
			}
			MISC::SET_BIT(&iLocal_536, 22);
		}
	}
}

struct<4> func_800()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXV", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_EXV", 16);
			break;
	}
	return Var0;
}

void func_801()
{
	int iVar0;

	if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 1))
	{
		return;
	}
	if (MISC::IS_BIT_SET(iLocal_536, 18))
	{
		MISC::CLEAR_BIT(&iLocal_536, 18);
	}
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
	MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 8);
	PAD::_0xCB0360EFEFB2580D(0);
	if (!MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
	{
		func_340();
		MISC::SET_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 1);
		Local_573.f_2 = 1474196698;
		Local_573.f_10 = PLAYER::PLAYER_ID();
		func_802(Local_573, func_803(1));
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
				}
				if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar0);
					if (Local_80.f_197 == 2)
					{
						ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
						ENTITY::SET_ENTITY_PROOFS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, false, false, false, false, false, false, false);
						MISC::CLEAR_BIT(&iLocal_538, 2);
						NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
					}
					else
					{
						func_865(1);
					}
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
					{
						NETWORK::NETWORK_EXPLODE_VEHICLE(iVar0, true, false, -1);
					}
					else
					{
						NETWORK::_0x2A5E0621DD815A9A(iVar0, 1, 0, 0);
					}
					func_784(1);
					MISC::SET_BIT(&iLocal_536, 20);
				}
			}
			else
			{
				if (MISC::IS_BIT_SET(iLocal_538, 2))
				{
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
					MISC::CLEAR_BIT(&iLocal_538, 2);
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
				func_784(1);
				MISC::SET_BIT(&iLocal_536, 20);
			}
		}
		else
		{
			func_784(1);
			MISC::SET_BIT(&iLocal_537, 14);
		}
		bLocal_2748 = func_348(&uLocal_589, 0, 0);
	}
	if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 5))
	{
		MISC::CLEAR_BIT(&(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 5);
		AUDIO::STOP_SOUND(iLocal_2005);
		AUDIO::RELEASE_SOUND_ID(iLocal_2005);
		MISC::CLEAR_BIT(&iLocal_537, 7);
	}
	MISC::SET_BIT(&iLocal_536, 12);
}

void func_802(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_803(bool bParam0)
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
			if (func_1274(bVar2, 0, 0))
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

void func_804()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	fVar1 = 80f;
	fVar2 = 0f;
	iVar3 = 130;
	iVar4 = 130;
	fVar0 = ((fVar1 + fVar2) + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 3)));
	if (NETWORK::_0xBA7F0B77D80A4EB7() - fLocal_1999) >= SYSTEM::ROUND((60000f / fVar0))
	{
		if (!MISC::IS_BIT_SET(iLocal_536, 15))
		{
			MISC::SET_BIT(&iLocal_536, 15);
		}
		fLocal_1999 = NETWORK::_0xBA7F0B77D80A4EB7();
	}
	else if (MISC::IS_BIT_SET(iLocal_536, 15))
	{
		MISC::CLEAR_BIT(&iLocal_536, 15);
	}
	if (func_805())
	{
		PAD::SET_PAD_SHAKE(0, 0, 0);
		PAD::SET_PAD_SHAKE(0, iVar3, iVar4);
		PAD::_SET_CONTROL_GROUP_COLOR(0, 255, 0, 0);
	}
	else
	{
		PAD::_SET_CONTROL_GROUP_COLOR(0, 255, 255, 255);
	}
}

bool func_805()
{
	return MISC::IS_BIT_SET(iLocal_536, 15);
}

void func_806()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
}

void func_807()
{
	int iVar0;

	if (!MISC::IS_BIT_SET(iLocal_536, 14))
	{
		if ((Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 1 || Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 2) || (((func_427(PLAYER::PLAYER_ID()) && func_875(0)) && MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0)) && !func_1004(1)))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, false, 0);
						MISC::SET_BIT(&iLocal_536, 14);
					}
				}
			}
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 >= 3 || MISC::IS_BIT_SET(iLocal_536, 31))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, true, 0);
						MISC::CLEAR_BIT(&iLocal_536, 14);
					}
				}
			}
		}
		else
		{
			MISC::CLEAR_BIT(&iLocal_536, 14);
		}
	}
}

bool func_808(int iParam0, bool bParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_144(PLAYER::PLAYER_ID(), 0) || func_550(PLAYER::PLAYER_ID(), 0))
	{
		if (func_41(PLAYER::PLAYER_ID()) || func_45(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_810(sParam3, sParam4, 1);
		}
		if (func_757(26, -1))
		{
			func_755(26, -1);
		}
		return true;
	}
	if (func_24(&(Global_1574650.f_18)))
	{
		if (!func_23(&(Global_1574650.f_18), 7500, 0))
		{
			return false;
		}
		func_22(&(Global_1574650.f_18));
	}
	if (func_809())
	{
		if (bParam2)
		{
			func_810(sParam3, sParam4, 0);
		}
		if (func_757(26, -1))
		{
			func_755(26, -1);
		}
		return true;
	}
	if (bParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_810(sParam3, sParam4, 1);
		}
		if (func_757(26, -1))
		{
			func_755(26, -1);
		}
		return true;
	}
	return false;
}

bool func_809()
{
	return MISC::IS_BIT_SET(Global_1574650.f_1, 0);
}

void func_810(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!MISC::IS_BIT_SET(Global_1574650.f_1, 2) && !func_46(PLAYER::PLAYER_ID())) && !func_366(PLAYER::PLAYER_ID()))
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
		func_134(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1574650.f_1), 2);
	}
}

void func_811(int* iParam0)
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("HUD_MINI_GAME_SOUNDSET");
}

void func_812(int iParam0, int iParam1, bool bParam2)
{
	if (func_44())
	{
		if (iParam1 == 1)
		{
			if (Global_2537071.f_4395 == -1)
			{
				Global_2537071.f_4395 = Global_262145.f_26393;
			}
			func_165(&(Global_2537071.f_4393), 0, 0);
			if (bParam2)
			{
				if (Global_2537071.f_4398 == -1)
				{
					Global_2537071.f_4398 = Global_262145.f_26394;
				}
				func_165(&(Global_2537071.f_4396), 0, 0);
			}
			else
			{
				Global_1312418 = 0;
				Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_8 = 0;
				func_865(1);
			}
		}
		else
		{
			Global_1312418 = 0;
			Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_8 = 0;
			func_865(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_814()) && !func_813(PLAYER::PLAYER_ID()))
		{
			Global_968396 = 0;
		}
		UNK_0x6EC9FBED3024FDF5(0, -1, -1, iParam0);
	}
}

bool func_813(int iParam0)
{
	if (func_598(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0 /*876*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_814()
{
	return Global_2450632.f_740;
}

void func_815()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (func_817(&iVar0) && DECORATOR::DECOR_EXIST_ON(iVar0, "Veh_Modded_By_Player"))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_1274(bVar2, 0, 1))
			{
				if (DECORATOR::DECOR_GET_INT(iVar0, "Veh_Modded_By_Player") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(bVar2))
				{
					func_816(func_237(bVar2));
				}
			}
			iVar1++;
		}
	}
}

void func_816(int iParam0)
{
	struct<2> Var0;

	Var0 = -192553902;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

bool func_817(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		*iParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(*iParam0, "bombdec1"))
			{
				return true;
			}
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(*iParam0, "bombdec"))
			{
				return true;
			}
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombowner", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(*iParam0, "bombowner"))
			{
				return true;
			}
		}
	}
	return false;
}

void func_818(bool bParam0)
{
	if (bParam0)
	{
		Global_1312451 = 1;
	}
	else
	{
		Global_1312451 = 0;
	}
}

void func_819(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 0))
		{
			Global_2462854 = func_519(PLAYER::PLAYER_ID());
			if (Global_2462854 == -1)
			{
				Global_2462854 = Global_1574650.f_4;
			}
			if (func_842(Global_2462854) == 0)
			{
				if (func_841(1) > 0)
				{
					func_840(26, -1);
				}
			}
			if (func_44())
			{
				func_812(2, 0, 1);
				func_839();
			}
			if (func_1064(0))
			{
				iVar1 = func_50(2480, -1, 0);
				MISC::CLEAR_BIT(&iVar1, 0);
				func_839();
			}
			if (func_1064(func_615(func_519(PLAYER::PLAYER_ID()))))
			{
				iVar1 = func_50(2480, -1, 0);
				MISC::CLEAR_BIT(&iVar1, func_615(func_519(PLAYER::PLAYER_ID())));
				func_839();
			}
			if (func_838())
			{
				func_839();
			}
			MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 0))
	{
		if ((!func_837() && !func_836()) && !func_835())
		{
			Global_2462854 = -1;
			func_755(26, -1);
		}
		else if (func_842(Global_2462854) == 0)
		{
			iVar0 = func_822(1);
			if (iVar0 > 0)
			{
				func_820(joaat("MPPLY_FMEVN_CHEAT_END"), iVar0);
				func_212(1932, 1, -1);
				func_820(joaat("MPPLY_ACTIVITY_ENDED"), 1);
			}
		}
		else if (func_757(26, -1))
		{
			Global_2462854 = -1;
			func_755(26, -1);
		}
		MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 0);
	}
}

void func_820(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_198(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_821(iParam0))
	{
		func_196(iParam0, iVar0);
	}
	else
	{
		func_200(iParam0, iVar0);
	}
}

bool func_821(int iParam0)
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

int func_822(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	iVar1 = 0;
	if (Global_2461737 == 0)
	{
		return 0;
	}
	if (func_835())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_834() || func_832()))
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
	if (func_72(Global_110666.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2460606)
	{
		iVar0 = 1;
	}
	if (func_831(512))
	{
		iVar0 = 1;
	}
	if (func_830(128))
	{
		iVar0 = 1;
	}
	if (Global_1315728 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_745())
	{
		iVar0 = 0;
	}
	if (Global_2461176)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_828())
		{
			if (Global_4456448.f_197270 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_367(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_827())
	{
		iVar0 = 0;
	}
	if ((Global_2460684 || Global_2460683) || Global_1315704)
	{
		if (func_832())
		{
			iVar0 = 0;
		}
	}
	Global_2461176 = 0;
	Global_2460683 = 0;
	Global_2460684 = 0;
	Global_1315704 = 0;
	Global_2460606 = 0;
	func_825(&(Global_110666.f_1), 32);
	func_824(512);
	func_823(128);
	return iVar0;
}

void func_823(int iParam0)
{
	Global_110723 = (Global_110723 - (Global_110723 && iParam0));
}

void func_824(int iParam0)
{
	Global_110724 = (Global_110724 - (Global_110724 && iParam0));
}

void func_825(var uParam0, int iParam1)
{
	func_826(uParam0, iParam1);
}

void func_826(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_827()
{
	if (((Global_1574428 || Global_1574398) || func_367(PLAYER::PLAYER_ID(), 0)) || func_110())
	{
		return true;
	}
	return false;
}

bool func_828()
{
	switch (func_829())
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

int func_829()
{
	return Global_2451426.f_1.f_2822;
}

bool func_830(int iParam0)
{
	return (Global_110723 && iParam0) != 0;
}

bool func_831(int iParam0)
{
	return (Global_110724 && iParam0) != 0;
}

bool func_832()
{
	if (func_842(Global_2462854))
	{
		return false;
	}
	if (func_833(PLAYER::PLAYER_ID(), 146))
	{
		return true;
	}
	return false;
}

bool func_833(bool bParam0, int iParam1)
{
	if (Global_1628237[bParam0 /*615*/] == iParam1)
	{
		return func_42(bParam0);
	}
	return false;
}

bool func_834()
{
	if (func_842(Global_2462854))
	{
		return false;
	}
	if (func_42(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

bool func_835()
{
	return MISC::IS_BIT_SET(Global_1312425, 0);
}

bool func_836()
{
	return Global_1312846;
}

bool func_837()
{
	return Global_1312877;
}

bool func_838()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return false;
	}
	return true;
}

void func_839()
{
	if (func_838())
	{
		Global_2439138.f_1156.f_16 = 1;
	}
}

void func_840(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_52();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, bParam1);
			break;
		default:
			iVar1 = func_756(bParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!MISC::IS_BIT_SET(iVar0, iParam0))
			{
				MISC::SET_BIT(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, bParam1);
			}
			break;
	}
}

int func_841(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	iVar1 = 0;
	if (Global_1315728 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_745())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_828())
		{
			if (Global_4456448.f_197270 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_367(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_827())
	{
		iVar0 = 0;
	}
	Global_2461737 = 1;
	return iVar0;
}

bool func_842(int iParam0)
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

void func_843(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;

	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2537071.f_4971 = -1;
	bVar0 = (func_144(PLAYER::PLAYER_ID(), 0) && func_41(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_769(func_770(iParam0), 1);
	}
	else
	{
		func_851(iParam0, -1);
		if (func_46(PLAYER::PLAYER_ID()))
		{
			Global_1574650.f_3 = iParam0;
		}
		else
		{
			func_850(iParam0);
		}
		Global_1574650.f_4 = -1;
		if (func_46(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1574650.f_1), 5);
		}
		if (((func_44() && !func_364()) || func_363(PLAYER::PLAYER_ID(), 21)) || func_363(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1574650.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1574650.f_1), 17);
		MISC::SET_BIT(&(Global_1574650.f_1), 20);
		if (func_849(iParam0))
		{
			func_848();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_716(fParam1);
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
		if (func_847(iParam0))
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
				func_713(1);
				if (func_49(0))
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
			func_759(1);
			MISC::SET_BIT(&(Global_1574650.f_1), 12);
		}
		if (bParam5)
		{
			func_846();
			MISC::SET_BIT(&(Global_1574650.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_844(iParam0))
			{
				MISC::SET_BIT(&(Global_1574650.f_1), 21);
			}
		}
	}
	Global_2513109 = 1;
}

bool func_844(int iParam0)
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
	if (func_845())
	{
		return true;
	}
	return false;
}

bool func_845()
{
	switch (func_578())
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

void func_846()
{
	MISC::SET_BIT(&(Global_2537071.f_4962), 0);
}

bool func_847(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return true;
		case 141:
			if (func_42(PLAYER::PLAYER_ID()))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_848()
{
	Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_200 = 0;
	MISC::CLEAR_BIT(&(Global_2537071.f_4561), 1);
}

bool func_849(int iParam0)
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

void func_850(int iParam0)
{
	Global_1628237[PLAYER::PLAYER_ID() /*615*/] = iParam0;
}

void func_851(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_1064(0) || func_1064(func_615(iVar0)))
		{
			MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 2);
		}
	}
}

void func_852(bool bParam0)
{
	if (bParam0)
	{
		if (!func_40(PLAYER::PLAYER_ID(), 9))
		{
			if (func_38(PLAYER::PLAYER_ID()) != 0)
			{
				func_360(9);
			}
		}
	}
	else if (func_40(PLAYER::PLAYER_ID(), 9))
	{
		func_362(9);
	}
}

void func_853(bool bParam0)
{
	if (!func_45(PLAYER::PLAYER_ID()))
	{
		if (bParam0 || func_38(PLAYER::PLAYER_ID()) != 0)
		{
			func_360(20);
			func_854(func_856());
			if (func_47(PLAYER::PLAYER_ID()))
			{
				if (!MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 8))
				{
					MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 8);
				}
			}
		}
	}
}

void func_854(int iParam0)
{
	int iVar0;

	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_855() /*10930*/].f_6174.f_4111[iVar0 /*3*/] == iParam0)
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

int func_855()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

int func_856()
{
	int iVar0;

	iVar0 = func_145(PLAYER::PLAYER_ID());
	if (func_858(iVar0) == 0)
	{
		return -1;
	}
	if (func_156(iVar0))
	{
		return 65;
	}
	if (func_161(iVar0))
	{
		return 66;
	}
	if (func_857(iVar0))
	{
		return 63;
	}
	return 64;
}

bool func_857(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return true;
		default:
			break;
	}
	return false;
}

int func_858(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0;
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
		case 24:
		case 26:
			return 1;
		case 148:
		case 179:
			return 2;
		default:
			break;
	}
	return -1;
}

struct<4> func_859()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_START2", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_START2", 16);
			break;
	}
	return Var0;
}

struct<4> func_860()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_MPLAY", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_MPLAY", 16);
			break;
	}
	return Var0;
}

struct<4> func_861()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_QSTART", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_QSTART", 16);
			break;
	}
	return Var0;
}

void func_862()
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_711();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_BIT(&(Global_1574650.f_1), 8);
	func_863();
}

void func_863()
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

void func_864()
{
	PAD::DISABLE_CONTROL_ACTION(0, 69, true);
	PAD::DISABLE_CONTROL_ACTION(0, 70, true);
	PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 115, true);
	PAD::DISABLE_CONTROL_ACTION(0, 116, true);
	PAD::DISABLE_CONTROL_ACTION(0, 91, true);
	PAD::DISABLE_CONTROL_ACTION(0, 92, true);
	PAD::DISABLE_CONTROL_ACTION(0, 24, true);
	PAD::DISABLE_CONTROL_ACTION(0, 257, true);
	PAD::DISABLE_CONTROL_ACTION(0, 37, true);
	if (Local_80.f_197 != 2)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 99, true);
		PAD::DISABLE_CONTROL_ACTION(0, 100, true);
	}
}

void func_865(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_44())
		{
			if (func_1274(PLAYER::PLAYER_ID(), 1, 0))
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
			if (func_1274(PLAYER::PLAYER_ID(), 1, 1))
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

char* func_866()
{
	char* sVar0;

	switch (Local_80.f_197)
	{
		case 0:
			sVar0 = "PEN_VALVEH";
			break;
		case 2:
			sVar0 = "CAG_VEH";
			break;
	}
	return sVar0;
}

struct<4> func_867()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NDRV", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_NDRV", 16);
			break;
	}
	return Var0;
}

char* func_868()
{
	char* sVar0;

	switch (Local_80.f_197)
	{
		case 0:
			sVar0 = "PEN_VEH";
			break;
		case 2:
			sVar0 = "CAG_VEH";
			break;
	}
	return sVar0;
}

bool func_869(int iParam0)
{
	int iVar0;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		if (MISC::IS_BIT_SET(iVar0, 10))
		{
			return false;
		}
	}
	return true;
}

bool func_870(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == joaat("RHINO") || iParam0 == joaat("DUMP")) || iParam0 == joaat("LIMO2")) || iParam0 == joaat("RCBANDITO")) || iParam0 == -1254331310)
	{
		iVar0 = 0;
	}
	switch (Local_80.f_197)
	{
		case 0:
			break;
		case 2:
			if (((!VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) && !func_871(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
			{
				iVar0 = 0;
			}
			break;
	}
	if (Global_1574650.f_12 != 0 && iParam0 == Global_1574650.f_12)
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_871(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CHIMERA"):
			return true;
		default:
			break;
	}
	return false;
}

void func_872(bool bParam0)
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

struct<4> func_873()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_REGS", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_REGS", 16);
			break;
	}
	return Var0;
}

void func_874()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		MISC::SET_BIT(&(Global_1574650.f_1), 8);
	}
}

bool func_875(bool bParam0)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;

	if (Local_80.f_197 == 2)
	{
		if (func_38(PLAYER::PLAYER_ID()) < 2)
		{
			return false;
		}
	}
	if (bParam0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			vVar4 = { func_482() };
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vVar4, false);
			fVar7 = (func_483() / 2f);
			if (fVar0 <= fVar7)
			{
				if (MISC::ABSF((vVar4.z - vVar1.z)) <= fVar7)
				{
					return true;
				}
			}
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (fLocal_566 < 10f)
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vLocal_559, false);
			if (fVar0 <= fLocal_566)
			{
				if (MISC::ABSF((vLocal_559.z - vVar1.z)) <= 10f)
				{
					return true;
				}
			}
		}
		else
		{
			fVar0 = func_431(PLAYER::PLAYER_PED_ID(), vLocal_559, 1);
			if (fVar0 <= fLocal_566)
			{
				return true;
			}
		}
	}
	return false;
}

void func_876(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

char* func_877()
{
	char* sVar0;

	switch (Local_80.f_197)
	{
		case 0:
			sVar0 = "PEN_START";
			break;
		case 2:
			sVar0 = "CAG_STARC";
			break;
	}
	return sVar0;
}

bool func_878()
{
	if (Local_80.f_197 != 2)
	{
		return true;
	}
	else if (func_901())
	{
		return true;
	}
	else if (func_38(PLAYER::PLAYER_ID()) >= 2)
	{
		return true;
	}
	return false;
}

void func_879(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	float fVar0;

	if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 != iParam0)
	{
		func_893(-1);
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 = iParam0;
		if (func_892() != -1)
		{
			func_891(-1);
		}
		if (func_890() != -1)
		{
			func_889(-1);
		}
		func_888(iParam2);
		func_886(iParam0);
		if (!func_721(iParam0))
		{
			fVar0 = func_720(iParam0);
			if (fVar0 != 1f)
			{
				func_716(fVar0);
				MISC::SET_BIT(&(Global_1674347.f_3), 1);
			}
		}
		if (!func_724(iParam0) || bParam3)
		{
			if (func_722(iParam0, iParam2) && bParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				MISC::SET_BIT(&(Global_1674347.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (func_44())
		{
			func_360(27);
		}
		if (bParam1)
		{
			if (!func_359())
			{
				func_713(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((MISC::IS_BIT_SET(Global_2537071.f_4555, 1) || MISC::IS_BIT_SET(Global_2537071.f_4555, 4)) || MISC::IS_BIT_SET(Global_2537071.f_4555, 0))
			{
				func_240(6);
			}
			func_885();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_47(PLAYER::PLAYER_ID()) && func_41(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 8);
		}
		func_881();
		if (func_880(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1674347.f_3), 6);
		}
		Global_2537071.f_6579 = 0;
	}
}

bool func_880(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return true;
		default:
			break;
	}
	return false;
}

void func_881()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar3 = func_884();
	bVar2 = func_119(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
		{
			if (func_245(bVar1, bVar2, 1) || func_882(bVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), bVar1, bVar3);
				PLAYER::_0x55FCC0C390620314(bVar1, PLAYER::PLAYER_ID(), bVar3);
			}
		}
		iVar0++;
	}
}

bool func_882(bool bParam0, bool bParam1)
{
	if (func_131(bParam0, 1) && func_131(bParam1, 1))
	{
		return (func_883(bParam0) == func_119(bParam1) || func_883(bParam1) == func_119(bParam0));
	}
	return false;
}

bool func_883(bool bParam0)
{
	if (func_131(bParam0, 1))
	{
		return Global_1628237[func_119(bParam0) /*615*/].f_11.f_484;
	}
	return func_389();
}

bool func_884()
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_181();
	if (bVar0 != func_389())
	{
		if (func_1274(bVar0, 0, 1))
		{
			bVar1 = bVar0;
			if (bVar1 != -1)
			{
				return MISC::IS_BIT_SET(Global_1628237[bVar1 /*615*/].f_1, 16);
			}
		}
	}
	return false;
}

void func_885()
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

void func_886(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_50(3791, -1, 0);
	iVar1 = func_887(iParam0);
	if (iVar1 != -1)
	{
		MISC::SET_BIT(&iVar0, iVar1);
		func_159(3791, iVar0, -1, 1, 0);
	}
}

int func_887(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		case 166:
			return 1;
		case 171:
			return 2;
		case 172:
			return 3;
		case 173:
			return 4;
		case 214:
			return 5;
		case 215:
			return 6;
		case 216:
			return 7;
		case 217:
			return 8;
		case 218:
			return 9;
		case 219:
			return 10;
		case 220:
			return 11;
		case 221:
			return 12;
		default:
			break;
	}
	return -1;
}

void func_888(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1628237[iVar0 /*615*/].f_11.f_181 != iParam0)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_181 = iParam0;
	}
}

void func_889(int iParam0)
{
	if (Global_2537071.f_5124.f_340 != iParam0)
	{
		Global_2537071.f_5124.f_340 = iParam0;
	}
}

int func_890()
{
	return Global_2537071.f_5124.f_340;
}

void func_891(int iParam0)
{
	if (Global_2537071.f_5124.f_339 != iParam0)
	{
		Global_2537071.f_5124.f_339 = iParam0;
	}
}

int func_892()
{
	return Global_2537071.f_5124.f_339;
}

void func_893(int iParam0)
{
	Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_32 = iParam0;
}

void func_894()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	if (!MISC::IS_BIT_SET(iLocal_537, 9))
	{
		if (MISC::IS_BIT_SET(Local_80.f_1, 4))
		{
			MISC::SET_BIT(&iLocal_537, 9);
		}
	}
	if (Local_80 != 4)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				iVar5 = PLAYER::GET_PLAYER_PED(bVar4);
				if (!func_367(bVar4, 0))
				{
					if (Local_279[iVar0 /*8*/].f_7 == 0)
					{
						if (iVar0 != NETWORK::PARTICIPANT_ID_TO_INT())
						{
							if (MISC::IS_BIT_SET(Local_279[iVar0 /*8*/].f_1, 0))
							{
								iVar1++;
							}
						}
						if (!func_46(bVar4))
						{
							iVar2++;
						}
					}
					if (!MISC::IS_BIT_SET(iLocal_537, 10))
					{
						if (!MISC::IS_BIT_SET(iLocal_537, 9))
						{
							if (MISC::IS_BIT_SET(Local_279[iVar0 /*8*/].f_1, 3))
							{
								MISC::SET_BIT(&iLocal_537, 9);
							}
						}
					}
					if (iVar0 != NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (Local_80.f_197 == 0 || Local_80.f_197 == 2)
						{
							if (!MISC::IS_BIT_SET(iLocal_2746, iVar0))
							{
								NETWORK::_0x13F1FCB111B820B0(bVar4, 0);
								MISC::SET_BIT(&iLocal_2746, iVar0);
							}
						}
						if (Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 2)
						{
							if (Local_279[iVar0 /*8*/].f_7 == 2)
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (!MISC::IS_BIT_SET(Local_279[iVar0 /*8*/].f_1, 6) && !func_900(PLAYER::PLAYER_PED_ID(), iVar5))
									{
										if (!MISC::IS_BIT_SET(iLocal_540, iVar0))
										{
											if (!MISC::IS_BIT_SET(Local_279[iVar0 /*8*/].f_1, 1))
											{
												MISC::SET_BIT(&iLocal_540, iVar0);
												func_898(bVar4, 441, 1, 0);
												if (Local_80.f_197 == 2)
												{
													func_895(bVar4, 1, 1, 0);
												}
											}
										}
										else if (MISC::IS_BIT_SET(Local_279[iVar0 /*8*/].f_1, 1))
										{
											MISC::CLEAR_BIT(&iLocal_540, iVar0);
											func_898(bVar4, 441, 0, 0);
											if (Local_80.f_197 == 2)
											{
												func_895(bVar4, 1, 0, 0);
											}
										}
									}
								}
							}
							else if (MISC::IS_BIT_SET(iLocal_540, iVar0))
							{
								MISC::CLEAR_BIT(&iLocal_540, iVar0);
								func_898(bVar4, 441, 0, 0);
								if (Local_80.f_197 == 2)
								{
									func_895(bVar4, 1, 0, 0);
								}
							}
						}
						else if (MISC::IS_BIT_SET(iLocal_540, iVar0))
						{
							MISC::CLEAR_BIT(&iLocal_540, iVar0);
							func_898(bVar4, 441, 0, 0);
							if (Local_80.f_197 == 2)
							{
								func_895(bVar4, 1, 0, 0);
							}
						}
						if (Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_7 > 0)
						{
							if (!MISC::IS_BIT_SET(iLocal_541, iVar0) && !MISC::IS_BIT_SET(Local_80.f_1, 3))
							{
								if (MISC::IS_BIT_SET(Local_279[iVar0 /*8*/].f_1, 9))
								{
									AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar5, "MP_Penned_In_Vehicles_In_Bubble_Group", 0f);
									MISC::SET_BIT(&iLocal_541, iVar0);
									if (PED::IS_PED_IN_ANY_VEHICLE(iVar5, false))
									{
										iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar5, false);
										AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar3, "MP_Penned_In_Vehicles_In_Bubble_Group", 0f);
									}
								}
							}
							else if (!MISC::IS_BIT_SET(Local_279[iVar0 /*8*/].f_1, 9) || MISC::IS_BIT_SET(Local_80.f_1, 3))
							{
								AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar5, 0f);
								MISC::CLEAR_BIT(&iLocal_541, iVar0);
								if (PED::IS_PED_IN_ANY_VEHICLE(iVar5, false))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar5, false);
									AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar3, 0f);
								}
							}
						}
						if (Local_80.f_197 == 0 || Local_80.f_197 == 2)
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (!PED::IS_PED_INJURED(iVar5))
								{
									if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 8))
									{
										if (!MISC::IS_BIT_SET(iLocal_542, iVar0))
										{
											if (!MISC::IS_BIT_SET(Local_279[iVar0 /*8*/].f_1, 8))
											{
												if (!func_900(PLAYER::PLAYER_PED_ID(), iVar5))
												{
													if (!MISC::IS_BIT_SET(Local_279[iVar0 /*8*/].f_1, 11))
													{
														MISC::SET_BIT(&iLocal_542, iVar0);
														MISC::SET_BIT(&iLocal_543, bVar4);
														NETWORK::_0x13F1FCB111B820B0(bVar4, 1);
													}
												}
											}
										}
										else if (MISC::IS_BIT_SET(Local_279[iVar0 /*8*/].f_1, 8))
										{
											MISC::CLEAR_BIT(&iLocal_542, iVar0);
											MISC::CLEAR_BIT(&iLocal_543, bVar4);
											NETWORK::_0x13F1FCB111B820B0(bVar4, 0);
										}
										else if (MISC::IS_BIT_SET(Local_279[iVar0 /*8*/].f_1, 11))
										{
											MISC::CLEAR_BIT(&iLocal_542, iVar0);
											MISC::CLEAR_BIT(&iLocal_543, bVar4);
											NETWORK::_0x13F1FCB111B820B0(bVar4, 0);
										}
										else if (func_900(PLAYER::PLAYER_PED_ID(), iVar5))
										{
											MISC::CLEAR_BIT(&iLocal_542, iVar0);
											MISC::CLEAR_BIT(&iLocal_543, bVar4);
											NETWORK::_0x13F1FCB111B820B0(bVar4, 0);
										}
									}
									else if (MISC::IS_BIT_SET(iLocal_542, iVar0))
									{
										NETWORK::_0x13F1FCB111B820B0(bVar4, 0);
										MISC::CLEAR_BIT(&iLocal_542, iVar0);
										MISC::CLEAR_BIT(&iLocal_543, bVar4);
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_2000 != iVar1)
		{
			iLocal_2000 = iVar1;
		}
		if (iLocal_2745 != iVar2)
		{
			iLocal_2745 = iVar2;
		}
	}
}

void func_895(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_897(bParam0))
	{
		return;
	}
	if (func_896(&(Global_2416079.f_621[bParam0]), &(Global_2416079.f_984[bParam0]), &(Global_2416079.f_389), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_456[bParam0] = iParam1;
		}
	}
}

bool func_896(var uParam0, var uParam1, int* iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

bool func_897(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return true;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_717())
	{
		return true;
	}
	return false;
}

void func_898(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;

	if (func_897(bParam0))
	{
		return;
	}
	if (func_896(&(Global_2416079.f_588[bParam0]), &(Global_2416079.f_951[bParam0]), &(Global_2416079.f_388), bParam2, bParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_423[bParam0] = iParam1;
		}
		if (bVar0)
		{
			func_899();
		}
	}
}

void func_899()
{
	Global_2416079.f_1614 = 1;
}

bool func_900(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return true;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) || !PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
	{
		return false;
	}
	return PED::GET_VEHICLE_PED_IS_IN(iParam0, false) == PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
}

bool func_901()
{
	if (func_131(PLAYER::PLAYER_ID(), 1))
	{
		if (PLAYER::PLAYER_ID() == func_384())
		{
			return true;
		}
		else if (func_902(PLAYER::PLAYER_ID(), func_384(), 0))
		{
			return true;
		}
	}
	return false;
}

bool func_902(int iParam0, bool bParam1, bool bParam2)
{
	return func_903(iParam0, bParam1, bParam2, 1);
}

bool func_903(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (bParam1 != func_389() && bParam0 != func_389())
	{
		if (!bParam2)
		{
			if (func_905(bParam0, bParam1, iParam3))
			{
				return false;
			}
		}
		if (Global_1628237[bParam0 /*615*/].f_11 != func_389())
		{
			if (bParam1 == Global_1628237[bParam0 /*615*/].f_11)
			{
				return func_904(bParam1, iParam3);
			}
		}
	}
	return false;
}

bool func_904(bool bParam0, int iParam1)
{
	if (func_132(bParam0))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_450 == iParam1;
	}
	return false;
}

bool func_905(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam1 != func_389())
	{
		if (bParam0 != func_389())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 != func_389())
			{
				if (Global_1628237[bParam0 /*615*/].f_11 == bParam0)
				{
					if (Global_1628237[bParam0 /*615*/].f_11.f_450 == iParam2)
					{
						return bParam1 == bParam0;
					}
				}
			}
		}
	}
	return false;
}

void func_906(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	if (bParam5)
	{
		iVar0 = func_519(PLAYER::PLAYER_ID());
		Global_1674635 = iVar0;
		Global_1674635.f_1 = iParam0;
		if (func_181() != func_389())
		{
			Global_1674635.f_2 = func_989(func_181());
			Global_1674635.f_3 = func_988(func_181());
		}
		if (func_247() != func_389())
		{
			func_180(func_247(), &(Global_1674635.f_2), &(Global_1674635.f_3));
		}
		Global_1674635.f_7 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674635.f_28 = func_987(PLAYER::PLAYER_ID());
		Global_1674635.f_13 = 0;
		Global_1674635.f_14 = 0;
		if (func_131(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674635.f_23 = func_986(func_233(1));
		}
	}
	else
	{
		iVar0 = func_145(PLAYER::PLAYER_ID());
	}
	if (bParam2 || func_152(iVar0))
	{
		if (iParam3 != -1 && bParam2)
		{
			iVar0 = iParam3;
		}
		Global_1674374 = iVar0;
		if (func_161(iVar0))
		{
			Global_1674374.f_1 = 4;
		}
		else if (func_985(iVar0))
		{
			Global_1674374.f_1 = 5;
		}
		else if (func_155(iVar0, 0))
		{
			Global_1674374.f_1 = 2;
			if (func_154(iVar0))
			{
				Global_1674374.f_1 = 3;
			}
		}
		else
		{
			Global_1674374.f_1 = 1;
		}
		if (func_181() != func_389())
		{
			Global_1674374.f_4 = func_989(func_181());
			Global_1674374.f_5 = func_988(func_181());
		}
		if (func_247() != func_389())
		{
			func_180(func_247(), &(Global_1674374.f_6), &(Global_1674374.f_7));
		}
		Global_1674374.f_9 = NETWORK::_0xF12E6CD06C73D69E();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1674374.f_27 = 1;
			Global_1674374.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1674374.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1674374.f_40 = func_176(iParam1);
			Global_1674374.f_41 = func_984();
			Global_1674374.f_42 = func_293(PLAYER::PLAYER_ID(), iParam1);
			Global_1674374.f_44 = func_983(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!func_175() || iVar0 != 192)
		{
			Global_1674374.f_53 = 0;
		}
	}
	else if (func_150(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1674491 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1674491 = iParam0 + 1;
		}
		else
		{
			Global_1674491 = func_982(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (func_143(PLAYER::PLAYER_ID()) == 0)
				{
					Global_1674491.f_1 = 0;
				}
				else
				{
					Global_1674491.f_1 = 1;
				}
				break;
			case 226:
				Global_1674491.f_1 = 2;
				break;
			case 227:
				Global_1674491.f_1 = 3;
				break;
		}
		Global_1674491.f_21 = 1;
		Global_1674491.f_22 = 1;
		if (func_181() != func_389())
		{
			Global_1674491.f_4 = func_989(func_181());
			Global_1674491.f_5 = func_988(func_181());
		}
		if (func_247() != func_389())
		{
			func_180(func_247(), &(Global_1674491.f_4), &(Global_1674491.f_5));
		}
		Global_1674491.f_8 = NETWORK::_0xF12E6CD06C73D69E();
		if (iParam0 != -1)
		{
			Global_1674491.f_20 = iParam0;
		}
	}
	else if (func_151(iVar0))
	{
		if (iParam3 != -1 && bParam2)
		{
		}
		Global_1674428 = iVar0;
		Global_1674374.f_1 = 1;
		if (func_181() != func_389())
		{
			Global_1674428.f_4 = func_989(func_181());
			Global_1674428.f_5 = func_988(func_181());
		}
		if (func_247() != func_389())
		{
			func_180(func_247(), &(Global_1674428.f_6), &(Global_1674428.f_7));
		}
		Global_1674428.f_9 = NETWORK::_0xF12E6CD06C73D69E();
		if (iParam0 != -1)
		{
			Global_1674428.f_21 = iParam0;
		}
	}
	else if (func_149(iVar0))
	{
		Global_1674535 = iVar0;
		Global_1674535.f_1 = iParam0;
		Global_1674535.f_21 = 1;
		Global_1674535.f_22 = 1;
		if (func_181() != func_389())
		{
			Global_1674535.f_4 = func_989(func_181());
			Global_1674535.f_5 = func_988(func_181());
		}
		if (func_247() != func_389())
		{
			func_180(func_247(), &(Global_1674535.f_4), &(Global_1674535.f_5));
		}
		Global_1674535.f_8 = NETWORK::_0xF12E6CD06C73D69E();
		if (iParam0 != -1)
		{
			Global_1674535.f_20 = iParam0;
		}
		Global_1674535.f_27 = func_980(func_52(), 5);
		Global_1674535.f_28 = func_986(func_979(PLAYER::PLAYER_ID()));
		Global_1674535.f_29 = func_50(6107, -1, 0);
		Global_1674535.f_30 = func_50(6103, -1, 0);
		Global_1674535.f_31 = func_50(6104, -1, 0);
		Global_1674535.f_32 = func_50(6106, -1, 0);
		Global_1674535.f_33 = func_50(6105, -1, 0);
		Global_1674535.f_34 = func_50(6108, -1, 0);
		Global_1674535.f_7 = func_977();
		Global_1674535.f_51 = func_986(bParam4);
	}
	else if (func_148(iVar0))
	{
		Global_1674589 = iVar0;
		Global_1674589.f_1 = iParam0;
		Global_1674589.f_21 = 1;
		Global_1674589.f_22 = 1;
		if (func_181() != func_389())
		{
			Global_1674589.f_4 = func_989(func_181());
			Global_1674589.f_5 = func_988(func_181());
		}
		if (func_247() != func_389())
		{
			func_180(func_247(), &(Global_1674589.f_4), &(Global_1674589.f_5));
		}
		Global_1674589.f_8 = NETWORK::_0xF12E6CD06C73D69E();
		if (iParam0 != -1)
		{
			Global_1674589.f_20 = iParam0;
		}
		Global_1674589.f_24 = func_50(6157, -1, 0);
		Global_1674589.f_25 = func_50(6162, -1, 0);
		Global_1674589.f_26 = func_50(6163, -1, 0);
		Global_1674589.f_27 = func_986((((func_976() || func_975()) || func_974()) || func_973(PLAYER::PLAYER_ID())));
		Global_1674589.f_28 = func_50(6164, -1, 0);
		Global_1674589.f_29 = func_986(func_972());
		Global_1674589.f_31 = 0;
		Global_1674589.f_30 = 0;
		Global_1674589.f_32 = 0;
		Global_1674589.f_33 = 0;
		Global_1674589.f_34 = 0;
		Global_1674589.f_16 = 0;
		Global_1674589.f_7 = func_977();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_141(func_142(PLAYER::PLAYER_ID()))))
	{
		Global_1674725 = iVar0;
		Global_1674725.f_1 = iParam0;
		Global_1674725.f_21 = 1;
		Global_1674725.f_22 = 1;
		Global_1674725.f_7 = func_977();
		if (func_181() != func_389())
		{
			Global_1674725.f_4 = func_989(func_181());
			Global_1674725.f_5 = func_988(func_181());
		}
		if (func_247() != func_389())
		{
			func_180(func_247(), &(Global_1674725.f_4), &(Global_1674725.f_5));
		}
		if (func_181() != -1)
		{
			Global_1674725.f_17 = func_768(func_181());
		}
		Global_1674725.f_8 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674725.f_28 = func_987(PLAYER::PLAYER_ID());
		Global_1674725.f_16 = 0;
		Global_1674725.f_24 = 0;
		Global_1674725.f_23 = 0;
		if (func_131(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674725.f_33 = func_986(func_233(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1674671 = iVar0;
		Global_1674671.f_1 = iParam0;
		Global_1674671.f_21 = 1;
		Global_1674671.f_22 = 1;
		Global_1674671.f_7 = func_977();
		Global_1674671.f_24 = 0;
		Global_1674671.f_23 = 0;
		Global_1674671.f_16 = 0;
		if (func_181() != func_389())
		{
			Global_1674671.f_4 = func_989(func_181());
			Global_1674671.f_5 = func_988(func_181());
		}
		Global_1674671.f_28 = func_987(PLAYER::PLAYER_ID());
		if (Global_1674671.f_28)
		{
			Global_1674671.f_29 = func_971(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1674671.f_29 = 0;
		}
		Global_1674671.f_30 = func_955(PLAYER::PLAYER_ID(), 4, -1);
		Global_1674671.f_31 = func_954(PLAYER::PLAYER_ID());
		Global_1674671.f_32 = func_986(func_953(PLAYER::PLAYER_ID()));
		Global_1674671.f_33 = func_986(func_952(PLAYER::PLAYER_ID()));
		Global_1674671.f_34 = func_986(func_951(PLAYER::PLAYER_ID()));
		Global_1674671.f_35 = func_986(func_950(PLAYER::PLAYER_ID()));
		Global_1674671.f_36 = func_949(PLAYER::PLAYER_ID());
		Global_1674671.f_37 = func_948(PLAYER::PLAYER_ID());
		Global_1674671.f_39 = func_947(PLAYER::PLAYER_ID());
		if (func_131(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674671.f_41 = func_986(func_233(1));
		}
		if (func_247() != func_389())
		{
			func_180(func_247(), &(Global_1674671.f_4), &(Global_1674671.f_5));
		}
		Global_1674671.f_8 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674671.f_28 = func_987(PLAYER::PLAYER_ID());
	}
	else if (func_139(iVar0))
	{
		Global_1674809 = iVar0;
		Global_1674809.f_1 = func_143(PLAYER::PLAYER_ID());
		Global_1674809.f_2 = func_946();
		Global_1674809.f_3 = func_945();
		Global_1674809.f_4 = func_989(func_181());
		Global_1674809.f_5 = func_988(func_181());
		Global_1674809.f_7 = func_977();
		Global_1674809.f_8 = NETWORK::_0xF12E6CD06C73D69E();
		if (func_181() != -1)
		{
			Global_1674809.f_17 = func_768(func_181());
		}
		Global_1674809.f_21 = 1;
		Global_1674809.f_22 = 1;
		Global_1674809.f_25 = iParam0;
		Global_1674809.f_27 = func_986(func_944(PLAYER::PLAYER_ID()));
		Global_1674809.f_28 = func_942(21, -1);
	}
	else if (func_138(iVar0))
	{
		Global_1674884 = Global_786547.f_1;
		Global_1674884.f_2 = Global_786547;
		Global_1674884.f_6 = func_989(func_181());
		Global_1674884.f_7 = func_988(func_181());
		if (func_131(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674884.f_8 = func_986(func_233(1));
		}
		if (func_181() != -1)
		{
			Global_1674884.f_9 = func_768(func_181());
		}
		Global_1674884.f_10 = func_977();
		Global_1674884.f_19 = 1;
		Global_1674884.f_20 = 1;
		Global_1674884.f_21 = 0;
		Global_1674884.f_22 = 0;
		Global_1674884.f_23 = 0;
		Global_1702973 = NETWORK::_0xF12E6CD06C73D69E();
	}
	else
	{
		if (func_181() != func_389())
		{
			Global_1674356 = func_989(func_181());
			Global_1674356.f_1 = func_988(func_181());
		}
		Global_1674356.f_5 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674356.f_13 = func_941();
		Global_1674356.f_15 = 0;
		if (func_179(1))
		{
			if (func_247() == func_181())
			{
				Global_1674356.f_15 = 1;
			}
		}
		if (func_940())
		{
			Global_1674491.f_28 = 1;
		}
		if (((((func_939() || func_938()) || func_937()) || func_936()) || func_935()) || func_934(PLAYER::PLAYER_ID()))
		{
			Global_1674491.f_30 = 1;
		}
		if (func_932(func_933(joaat("TRAILERSMALL2"))))
		{
			Global_1674491.f_32 = 1;
		}
		if (func_915(func_931(joaat("CADDY"))))
		{
			Global_1674491.f_31 = 1;
		}
		if (func_914(PLAYER::PLAYER_ID()) || func_913(PLAYER::PLAYER_ID()))
		{
			Global_1674491.f_29 = 1;
		}
		if (func_912(PLAYER::PLAYER_ID()))
		{
			Global_1674491.f_33 = 1;
			Global_1674491.f_34 = 1;
		}
		if (func_911(PLAYER::PLAYER_ID()))
		{
			Global_1674491.f_36 = 1;
		}
		if (func_910(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1674491.f_35 = 1;
		}
		if (func_909(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1674491.f_37 = 1;
		}
		if (func_909(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1674491.f_38 = 1;
		}
		if (func_908(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_907(PLAYER::PLAYER_ID(), iVar2);
				if (func_290(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1674491.f_39 = 1;
				}
				if (func_290(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1674491.f_40 = 1;
				}
				if (func_290(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1674491.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_907(int iParam0, int iParam1)
{
	var uVar0;

	if (iParam0 == func_389())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_282(Global_1590535[iParam0 /*876*/].f_274.f_183[iParam1 /*12*/]))
	{
		uVar0 = Global_1590535[iParam0 /*876*/].f_274.f_183[iParam1 /*12*/];
	}
	return uVar0;
}

bool func_908(int iParam0)
{
	int iVar0;

	if (iParam0 == func_389())
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_909(int iParam0, int iParam1, var uParam2)
{
	int iVar0;

	if (iParam0 != func_389())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_910(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

int func_910(int iParam0, bool bParam1)
{
	if (bParam1 == func_389())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 0))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 3))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 6))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 9))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 12))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 15))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 18))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 21))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 24))
			{
				return 8;
			}
			break;
		case 1:
			if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 1))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 4))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 7))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 10))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 13))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 16))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 19))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 22))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 25))
			{
				return 8;
			}
			break;
		case 2:
			if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 2))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 5))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 8))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 11))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 14))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 17))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 20))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 23))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590535[bParam1 /*876*/].f_274.f_259, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

bool func_911(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_351, 7);
}

bool func_912(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_351, 8);
}

bool func_913(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_351, 11);
}

bool func_914(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_351, 10);
}

bool func_915(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_942(11, -1) == 0)
	{
		return false;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_929(11));
		func_928(iVar1, &iVar0, 1);
		iVar2 = func_942(func_917(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_50(func_916(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_916(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				case 1:
					return 1636;
				case 2:
					return 1643;
				case 3:
					return 1650;
				case 4:
					return 1657;
				case 5:
					return 1664;
				case 6:
					return 1671;
				case 7:
					return 1678;
				case 8:
					return 1685;
				case 9:
					return 1692;
				case 10:
					return 1699;
				case 11:
					return 1705;
				case 12:
					return 1711;
				case 13:
					return 1717;
				case 14:
					return 1795;
				case 15:
					return 1802;
				case 16:
					return 1809;
				case 17:
					return 1816;
				case 18:
					return 1823;
				case 19:
					return 1830;
				case 20:
					return 1837;
				case 21:
					return 1844;
				case 22:
					return 1851;
				case 23:
					return 1858;
				case 24:
					return 1864;
				case 25:
					return 1870;
				case 26:
					return 2165;
				case 27:
					return 2172;
				case 28:
					return 2179;
				case 29:
					return 2186;
				case 30:
					return 2193;
				case 31:
					return 2200;
				case 32:
					return 2207;
				case 33:
					return 2214;
				case 34:
					return 2221;
				case 35:
					return 2228;
				case 36:
					return 2235;
				case 37:
					return 2241;
				case 38:
					return 2247;
				case 39:
					return 2828;
				case 40:
					return 2835;
				case 41:
					return 2842;
				case 42:
					return 2849;
				case 43:
					return 2856;
				case 44:
					return 2863;
				case 45:
					return 2870;
				case 46:
					return 2877;
				case 47:
					return 2884;
				case 48:
					return 2891;
				case 49:
					return 2898;
				case 50:
					return 2904;
				case 51:
					return 2910;
				case 52:
					return 2952;
				case 53:
					return 2959;
				case 54:
					return 2966;
				case 55:
					return 2973;
				case 56:
					return 2980;
				case 57:
					return 2987;
				case 58:
					return 2994;
				case 59:
					return 3001;
				case 60:
					return 3008;
				case 61:
					return 3015;
				case 62:
					return 3022;
				case 63:
					return 3028;
				case 64:
					return 3034;
				case 65:
					return 3235;
				case 66:
					return 3243;
				case 67:
					return 3251;
				case 68:
					return 3259;
				case 69:
					return 3267;
				case 70:
					return 3275;
				case 71:
					return 3283;
				case 72:
					return 3291;
				case 73:
					return 3299;
				case 74:
					return 3307;
				case 75:
					return 3315;
				case 76:
					return 3323;
				case 77:
					return 3331;
				case 78:
					return 3339;
				case 79:
					return 3347;
				case 80:
					return 3355;
				case 81:
					return 3363;
				case 82:
					return 3371;
				case 83:
					return 3379;
				case 84:
					return 3387;
				case 85:
					return 3395;
				case 86:
					return 3402;
				case 87:
					return 3409;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				case 89:
					return 4039;
				case 90:
					return 4047;
				case 91:
					return 4055;
				case 92:
					return 4063;
				case 93:
					return 4071;
				case 94:
					return 4079;
				case 95:
					return 4087;
				case 96:
					return 4095;
				case 97:
					return 4103;
				case 98:
					return 4111;
				case 99:
					return 4119;
				case 100:
					return 4127;
				case 101:
					return 4135;
				case 102:
					return 4143;
				case 103:
					return 4151;
				case 104:
					return 4159;
				case 105:
					return 4167;
				case 106:
					return 4175;
				case 107:
					return 4183;
				case 108:
					return 4191;
				case 109:
					return 4199;
				case 110:
					return 4207;
				case 111:
					return 4215;
				case 112:
					return 4223;
				case 113:
					return 4231;
				case 114:
					return 4239;
				case 115:
					return 4247;
				case 116:
					return 4255;
				case 117:
					return 4263;
				case 118:
					return 4271;
				case 119:
					return 4279;
				case 120:
					return 4287;
				case 121:
					return 4295;
				case 122:
					return 4303;
				case 123:
					return 4311;
				case 124:
					return 4319;
				case 125:
					return 4327;
				case 126:
					return 4335;
				case 127:
					return 4343;
				case 128:
					return 4351;
				case 129:
					return 4359;
				case 130:
					return 4367;
				case 131:
					return 4375;
				case 132:
					return 4383;
				case 133:
					return 4391;
				case 134:
					return 4399;
				case 135:
					return 4407;
				case 136:
					return 4415;
				case 137:
					return 4423;
				case 138:
					return 4431;
				case 139:
					return 4439;
				case 140:
					return 4447;
				case 141:
					return 4455;
				case 142:
					return 4463;
				case 143:
					return 4471;
				case 144:
					return 4479;
				case 145:
					return 4487;
				case 146:
					return 4495;
				case 147:
					return 4503;
				case 148:
					return 4511;
				case 149:
					return 4519;
				case 150:
					return 4527;
				case 151:
					return 4535;
				case 152:
					return 4543;
				case 153:
					return 4551;
				case 154:
					return 4559;
				case 155:
					return 4567;
				case 156:
					return 4575;
				case 157:
					return 4583;
				case 158:
					return 5476;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				case 160:
					return 5932;
				case 161:
					return 5939;
				case 162:
					return 5946;
				case 163:
					return 5953;
				case 164:
					return 5960;
				case 165:
					return 5967;
				case 166:
					return 5974;
				case 167:
					return 5981;
				case 168:
					return 5988;
				case 169:
					return 5995;
				case 170:
					return 6002;
				case 171:
					return 6009;
				case 172:
					return 6016;
				case 173:
					return 6023;
				case 174:
					return 6030;
				case 175:
					return 6037;
				case 176:
					return 6044;
				case 177:
					return 6051;
				case 178:
					return 6058;
				case 179:
					return 6065;
				case 180:
					return 6072;
				case 181:
					return 6079;
				case 182:
					return 6086;
				case 183:
					return 6093;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				case 185:
					return 6177;
				case 186:
					return 6184;
				case 187:
					return 6191;
				case 188:
					return 6198;
				case 189:
					return 6205;
				case 190:
					return 6212;
				case 191:
					return 6219;
				case 192:
					return 6226;
				case 193:
					return 6233;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				case 195:
					return 6574;
				case 196:
					return 6581;
				case 197:
					return 6588;
				case 198:
					return 6595;
				case 199:
					return 6602;
				case 200:
					return 6609;
				case 201:
					return 6616;
				case 202:
					return 6623;
				case 203:
					return 6630;
				case 204:
					return 6637;
				case 205:
					return 6644;
				case 206:
					return 6651;
				case 207:
					return 6658;
				case 208:
					return 6665;
				case 209:
					return 6672;
				case 210:
					return 6679;
				case 211:
					return 6686;
				case 212:
					return 6693;
				case 213:
					return 6700;
				case 214:
					return 6707;
				case 215:
					return 6714;
				case 216:
					return 6721;
				case 217:
					return 6728;
				case 218:
					return 6735;
				case 219:
					return 6742;
				case 220:
					return 6749;
				case 221:
					return 6756;
				case 222:
					return 6763;
				case 223:
					return 6770;
				case 224:
					return 6777;
				case 225:
					return 6784;
				case 226:
					return 6791;
				case 227:
					return 6798;
				case 228:
					return 6805;
				case 229:
					return 6812;
				case 230:
					return 6819;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				case 232:
					return 7296;
				case 233:
					return 7303;
				case 234:
					return 7310;
				case 235:
					return 7317;
				case 236:
					return 7324;
				case 237:
					return 7331;
				case 238:
					return 7338;
				case 239:
					return 7345;
				case 240:
					return 7352;
				case 241:
					return 7359;
				case 242:
					return 7366;
				case 243:
					return 7373;
				case 244:
					return 7380;
				case 245:
					return 7387;
				case 246:
					return 7394;
				case 247:
					return 7401;
				case 248:
					return 7408;
				case 249:
					return 7415;
				case 250:
					return 7422;
				case 251:
					return 7429;
				case 252:
					return 7436;
				case 253:
					return 7443;
				case 254:
					return 7450;
				case 255:
					return 7457;
				case 256:
					return 7464;
				case 257:
					return 7471;
				case 258:
					return 7478;
				case 259:
					return 7485;
				case 260:
					return 7492;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				case 262:
					return 8019;
				case 263:
					return 8026;
				case 264:
					return 8033;
				case 265:
					return 8040;
				case 266:
					return 8047;
				case 267:
					return 8054;
				case 268:
					return 8061;
				case 269:
					return 8068;
				case 270:
					return 8075;
				case 271:
					return 8536;
				case 272:
					return 8543;
				case 273:
					return 8550;
				case 274:
					return 8557;
				case 275:
					return 8564;
				case 276:
					return 8571;
				case 277:
					return 8578;
				case 278:
					return 8585;
				case 279:
					return 8592;
				case 280:
					return 8599;
				case 281:
					return 8981;
				case 282:
					return 8988;
				case 283:
					return 8995;
				case 284:
					return 9002;
				case 285:
					return 9009;
				case 286:
					return 9016;
				case 287:
					return 9023;
				case 288:
					return 9030;
				case 289:
					return 9037;
				case 290:
					return 9044;
				case 291:
					return 9051;
				case 292:
					return 9057;
				case 293:
					return 9063;
				case 294:
					return 9069;
				case 295:
					return 9076;
				case 296:
					return 9083;
				case 297:
					return 9090;
				case 298:
					return 9097;
				case 299:
					return 9104;
				case 300:
					return 9111;
				case 301:
					return 9118;
				case 302:
					return 9125;
				case 303:
					return 9132;
				case 304:
					return 9139;
				case 305:
					return 9145;
				case 306:
					return 9151;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				case 1:
					return 1637;
				case 2:
					return 1644;
				case 3:
					return 1651;
				case 4:
					return 1658;
				case 5:
					return 1665;
				case 6:
					return 1672;
				case 7:
					return 1679;
				case 8:
					return 1686;
				case 9:
					return 1693;
				case 10:
					return 1700;
				case 11:
					return 1706;
				case 12:
					return 1712;
				case 13:
					return 1718;
				case 14:
					return 1796;
				case 15:
					return 1803;
				case 16:
					return 1810;
				case 17:
					return 1817;
				case 18:
					return 1824;
				case 19:
					return 1831;
				case 20:
					return 1838;
				case 21:
					return 1845;
				case 22:
					return 1852;
				case 23:
					return 1859;
				case 24:
					return 1865;
				case 25:
					return 1871;
				case 26:
					return 2166;
				case 27:
					return 2173;
				case 28:
					return 2180;
				case 29:
					return 2187;
				case 30:
					return 2194;
				case 31:
					return 2201;
				case 32:
					return 2208;
				case 33:
					return 2215;
				case 34:
					return 2222;
				case 35:
					return 2229;
				case 36:
					return 2236;
				case 37:
					return 2242;
				case 38:
					return 2248;
				case 39:
					return 2829;
				case 40:
					return 2836;
				case 41:
					return 2843;
				case 42:
					return 2850;
				case 43:
					return 2857;
				case 44:
					return 2864;
				case 45:
					return 2871;
				case 46:
					return 2878;
				case 47:
					return 2885;
				case 48:
					return 2892;
				case 49:
					return 2899;
				case 50:
					return 2905;
				case 51:
					return 2911;
				case 52:
					return 2953;
				case 53:
					return 2960;
				case 54:
					return 2967;
				case 55:
					return 2974;
				case 56:
					return 2981;
				case 57:
					return 2988;
				case 58:
					return 2995;
				case 59:
					return 3002;
				case 60:
					return 3009;
				case 61:
					return 3016;
				case 62:
					return 3023;
				case 63:
					return 3029;
				case 64:
					return 3035;
				case 65:
					return 3236;
				case 66:
					return 3244;
				case 67:
					return 3252;
				case 68:
					return 3260;
				case 69:
					return 3268;
				case 70:
					return 3276;
				case 71:
					return 3284;
				case 72:
					return 3292;
				case 73:
					return 3300;
				case 74:
					return 3308;
				case 75:
					return 3316;
				case 76:
					return 3324;
				case 77:
					return 3332;
				case 78:
					return 3340;
				case 79:
					return 3348;
				case 80:
					return 3356;
				case 81:
					return 3364;
				case 82:
					return 3372;
				case 83:
					return 3380;
				case 84:
					return 3388;
				case 85:
					return 3396;
				case 86:
					return 3403;
				case 87:
					return 3410;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				case 89:
					return 4040;
				case 90:
					return 4048;
				case 91:
					return 4056;
				case 92:
					return 4064;
				case 93:
					return 4072;
				case 94:
					return 4080;
				case 95:
					return 4088;
				case 96:
					return 4096;
				case 97:
					return 4104;
				case 98:
					return 4112;
				case 99:
					return 4120;
				case 100:
					return 4128;
				case 101:
					return 4136;
				case 102:
					return 4144;
				case 103:
					return 4152;
				case 104:
					return 4160;
				case 105:
					return 4168;
				case 106:
					return 4176;
				case 107:
					return 4184;
				case 108:
					return 4192;
				case 109:
					return 4200;
				case 110:
					return 4208;
				case 111:
					return 4216;
				case 112:
					return 4224;
				case 113:
					return 4232;
				case 114:
					return 4240;
				case 115:
					return 4248;
				case 116:
					return 4256;
				case 117:
					return 4264;
				case 118:
					return 4272;
				case 119:
					return 4280;
				case 120:
					return 4288;
				case 121:
					return 4296;
				case 122:
					return 4304;
				case 123:
					return 4312;
				case 124:
					return 4320;
				case 125:
					return 4328;
				case 126:
					return 4336;
				case 127:
					return 4344;
				case 128:
					return 4352;
				case 129:
					return 4360;
				case 130:
					return 4368;
				case 131:
					return 4376;
				case 132:
					return 4384;
				case 133:
					return 4392;
				case 134:
					return 4400;
				case 135:
					return 4408;
				case 136:
					return 4416;
				case 137:
					return 4424;
				case 138:
					return 4432;
				case 139:
					return 4440;
				case 140:
					return 4448;
				case 141:
					return 4456;
				case 142:
					return 4464;
				case 143:
					return 4472;
				case 144:
					return 4480;
				case 145:
					return 4488;
				case 146:
					return 4496;
				case 147:
					return 4504;
				case 148:
					return 4512;
				case 149:
					return 4520;
				case 150:
					return 4528;
				case 151:
					return 4536;
				case 152:
					return 4544;
				case 153:
					return 4552;
				case 154:
					return 4560;
				case 155:
					return 4568;
				case 156:
					return 4576;
				case 157:
					return 4584;
				case 158:
					return 5477;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				case 160:
					return 5933;
				case 161:
					return 5940;
				case 162:
					return 5947;
				case 163:
					return 5954;
				case 164:
					return 5961;
				case 165:
					return 5968;
				case 166:
					return 5975;
				case 167:
					return 5982;
				case 168:
					return 5989;
				case 169:
					return 5996;
				case 170:
					return 6003;
				case 171:
					return 6010;
				case 172:
					return 6017;
				case 173:
					return 6024;
				case 174:
					return 6031;
				case 175:
					return 6038;
				case 176:
					return 6045;
				case 177:
					return 6052;
				case 178:
					return 6059;
				case 179:
					return 6066;
				case 180:
					return 6073;
				case 181:
					return 6080;
				case 182:
					return 6087;
				case 183:
					return 6094;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				case 185:
					return 6178;
				case 186:
					return 6185;
				case 187:
					return 6192;
				case 188:
					return 6199;
				case 189:
					return 6206;
				case 190:
					return 6213;
				case 191:
					return 6220;
				case 192:
					return 6227;
				case 193:
					return 6234;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				case 195:
					return 6575;
				case 196:
					return 6582;
				case 197:
					return 6589;
				case 198:
					return 6596;
				case 199:
					return 6603;
				case 200:
					return 6610;
				case 201:
					return 6617;
				case 202:
					return 6624;
				case 203:
					return 6631;
				case 204:
					return 6638;
				case 205:
					return 6645;
				case 206:
					return 6652;
				case 207:
					return 6659;
				case 208:
					return 6666;
				case 209:
					return 6673;
				case 210:
					return 6680;
				case 211:
					return 6687;
				case 212:
					return 6694;
				case 213:
					return 6701;
				case 214:
					return 6708;
				case 215:
					return 6715;
				case 216:
					return 6722;
				case 217:
					return 6729;
				case 218:
					return 6736;
				case 219:
					return 6743;
				case 220:
					return 6750;
				case 221:
					return 6757;
				case 222:
					return 6764;
				case 223:
					return 6771;
				case 224:
					return 6778;
				case 225:
					return 6785;
				case 226:
					return 6792;
				case 227:
					return 6799;
				case 228:
					return 6806;
				case 229:
					return 6813;
				case 230:
					return 6820;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				case 232:
					return 7297;
				case 233:
					return 7304;
				case 234:
					return 7311;
				case 235:
					return 7318;
				case 236:
					return 7325;
				case 237:
					return 7332;
				case 238:
					return 7339;
				case 239:
					return 7346;
				case 240:
					return 7353;
				case 241:
					return 7360;
				case 242:
					return 7367;
				case 243:
					return 7374;
				case 244:
					return 7381;
				case 245:
					return 7388;
				case 246:
					return 7395;
				case 247:
					return 7402;
				case 248:
					return 7409;
				case 249:
					return 7416;
				case 250:
					return 7423;
				case 251:
					return 7430;
				case 252:
					return 7437;
				case 253:
					return 7444;
				case 254:
					return 7451;
				case 255:
					return 7458;
				case 256:
					return 7465;
				case 257:
					return 7472;
				case 258:
					return 7479;
				case 259:
					return 7486;
				case 260:
					return 7493;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				case 262:
					return 8020;
				case 263:
					return 8027;
				case 264:
					return 8034;
				case 265:
					return 8041;
				case 266:
					return 8048;
				case 267:
					return 8055;
				case 268:
					return 8062;
				case 269:
					return 8069;
				case 270:
					return 8076;
				case 271:
					return 8537;
				case 272:
					return 8544;
				case 273:
					return 8551;
				case 274:
					return 8558;
				case 275:
					return 8565;
				case 276:
					return 8572;
				case 277:
					return 8579;
				case 278:
					return 8586;
				case 279:
					return 8593;
				case 280:
					return 8600;
				case 281:
					return 8982;
				case 282:
					return 8989;
				case 283:
					return 8996;
				case 284:
					return 9003;
				case 285:
					return 9010;
				case 286:
					return 9017;
				case 287:
					return 9024;
				case 288:
					return 9031;
				case 289:
					return 9038;
				case 290:
					return 9045;
				case 291:
					return 9052;
				case 292:
					return 9058;
				case 293:
					return 9064;
				case 294:
					return 9070;
				case 295:
					return 9077;
				case 296:
					return 9084;
				case 297:
					return 9091;
				case 298:
					return 9098;
				case 299:
					return 9105;
				case 300:
					return 9112;
				case 301:
					return 9119;
				case 302:
					return 9126;
				case 303:
					return 9133;
				case 304:
					return 9140;
				case 305:
					return 9146;
				case 306:
					return 9152;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				case 1:
					return 1638;
				case 2:
					return 1645;
				case 3:
					return 1652;
				case 4:
					return 1659;
				case 5:
					return 1666;
				case 6:
					return 1673;
				case 7:
					return 1680;
				case 8:
					return 1687;
				case 9:
					return 1694;
				case 10:
					return 1701;
				case 11:
					return 1707;
				case 12:
					return 1713;
				case 13:
					return 1719;
				case 14:
					return 1797;
				case 15:
					return 1804;
				case 16:
					return 1811;
				case 17:
					return 1818;
				case 18:
					return 1825;
				case 19:
					return 1832;
				case 20:
					return 1839;
				case 21:
					return 1846;
				case 22:
					return 1853;
				case 23:
					return 1860;
				case 24:
					return 1866;
				case 25:
					return 1872;
				case 26:
					return 2167;
				case 27:
					return 2174;
				case 28:
					return 2181;
				case 29:
					return 2188;
				case 30:
					return 2195;
				case 31:
					return 2202;
				case 32:
					return 2209;
				case 33:
					return 2216;
				case 34:
					return 2223;
				case 35:
					return 2230;
				case 36:
					return 2237;
				case 37:
					return 2243;
				case 38:
					return 2249;
				case 39:
					return 2830;
				case 40:
					return 2837;
				case 41:
					return 2844;
				case 42:
					return 2851;
				case 43:
					return 2858;
				case 44:
					return 2865;
				case 45:
					return 2872;
				case 46:
					return 2879;
				case 47:
					return 2886;
				case 48:
					return 2893;
				case 49:
					return 2900;
				case 50:
					return 2906;
				case 51:
					return 2912;
				case 52:
					return 2954;
				case 53:
					return 2961;
				case 54:
					return 2968;
				case 55:
					return 2975;
				case 56:
					return 2982;
				case 57:
					return 2989;
				case 58:
					return 2996;
				case 59:
					return 3003;
				case 60:
					return 3010;
				case 61:
					return 3017;
				case 62:
					return 3024;
				case 63:
					return 3030;
				case 64:
					return 3036;
				case 65:
					return 3237;
				case 66:
					return 3245;
				case 67:
					return 3253;
				case 68:
					return 3261;
				case 69:
					return 3269;
				case 70:
					return 3277;
				case 71:
					return 3285;
				case 72:
					return 3293;
				case 73:
					return 3301;
				case 74:
					return 3309;
				case 75:
					return 3317;
				case 76:
					return 3325;
				case 77:
					return 3333;
				case 78:
					return 3341;
				case 79:
					return 3349;
				case 80:
					return 3357;
				case 81:
					return 3365;
				case 82:
					return 3373;
				case 83:
					return 3381;
				case 84:
					return 3389;
				case 85:
					return 3397;
				case 86:
					return 3404;
				case 87:
					return 3411;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				case 89:
					return 4041;
				case 90:
					return 4049;
				case 91:
					return 4057;
				case 92:
					return 4065;
				case 93:
					return 4073;
				case 94:
					return 4081;
				case 95:
					return 4089;
				case 96:
					return 4097;
				case 97:
					return 4105;
				case 98:
					return 4113;
				case 99:
					return 4121;
				case 100:
					return 4129;
				case 101:
					return 4137;
				case 102:
					return 4145;
				case 103:
					return 4153;
				case 104:
					return 4161;
				case 105:
					return 4169;
				case 106:
					return 4177;
				case 107:
					return 4185;
				case 108:
					return 4193;
				case 109:
					return 4201;
				case 110:
					return 4209;
				case 111:
					return 4217;
				case 112:
					return 4225;
				case 113:
					return 4233;
				case 114:
					return 4241;
				case 115:
					return 4249;
				case 116:
					return 4257;
				case 117:
					return 4265;
				case 118:
					return 4273;
				case 119:
					return 4281;
				case 120:
					return 4289;
				case 121:
					return 4297;
				case 122:
					return 4305;
				case 123:
					return 4313;
				case 124:
					return 4321;
				case 125:
					return 4329;
				case 126:
					return 4337;
				case 127:
					return 4345;
				case 128:
					return 4353;
				case 129:
					return 4361;
				case 130:
					return 4369;
				case 131:
					return 4377;
				case 132:
					return 4385;
				case 133:
					return 4393;
				case 134:
					return 4401;
				case 135:
					return 4409;
				case 136:
					return 4417;
				case 137:
					return 4425;
				case 138:
					return 4433;
				case 139:
					return 4441;
				case 140:
					return 4449;
				case 141:
					return 4457;
				case 142:
					return 4465;
				case 143:
					return 4473;
				case 144:
					return 4481;
				case 145:
					return 4489;
				case 146:
					return 4497;
				case 147:
					return 4505;
				case 148:
					return 4513;
				case 149:
					return 4521;
				case 150:
					return 4529;
				case 151:
					return 4537;
				case 152:
					return 4545;
				case 153:
					return 4553;
				case 154:
					return 4561;
				case 155:
					return 4569;
				case 156:
					return 4577;
				case 157:
					return 4585;
				case 158:
					return 5478;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				case 160:
					return 5934;
				case 161:
					return 5941;
				case 162:
					return 5948;
				case 163:
					return 5955;
				case 164:
					return 5962;
				case 165:
					return 5969;
				case 166:
					return 5976;
				case 167:
					return 5983;
				case 168:
					return 5990;
				case 169:
					return 5997;
				case 170:
					return 6004;
				case 171:
					return 6011;
				case 172:
					return 6018;
				case 173:
					return 6025;
				case 174:
					return 6032;
				case 175:
					return 6039;
				case 176:
					return 6046;
				case 177:
					return 6053;
				case 178:
					return 6060;
				case 179:
					return 6067;
				case 180:
					return 6074;
				case 181:
					return 6081;
				case 182:
					return 6088;
				case 183:
					return 6095;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				case 185:
					return 6179;
				case 186:
					return 6186;
				case 187:
					return 6193;
				case 188:
					return 6200;
				case 189:
					return 6207;
				case 190:
					return 6214;
				case 191:
					return 6221;
				case 192:
					return 6228;
				case 193:
					return 6235;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				case 195:
					return 6576;
				case 196:
					return 6583;
				case 197:
					return 6590;
				case 198:
					return 6597;
				case 199:
					return 6604;
				case 200:
					return 6611;
				case 201:
					return 6618;
				case 202:
					return 6625;
				case 203:
					return 6632;
				case 204:
					return 6639;
				case 205:
					return 6646;
				case 206:
					return 6653;
				case 207:
					return 6660;
				case 208:
					return 6667;
				case 209:
					return 6674;
				case 210:
					return 6681;
				case 211:
					return 6688;
				case 212:
					return 6695;
				case 213:
					return 6702;
				case 214:
					return 6709;
				case 215:
					return 6716;
				case 216:
					return 6723;
				case 217:
					return 6730;
				case 218:
					return 6737;
				case 219:
					return 6744;
				case 220:
					return 6751;
				case 221:
					return 6758;
				case 222:
					return 6765;
				case 223:
					return 6772;
				case 224:
					return 6779;
				case 225:
					return 6786;
				case 226:
					return 6793;
				case 227:
					return 6800;
				case 228:
					return 6807;
				case 229:
					return 6814;
				case 230:
					return 6821;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				case 232:
					return 7298;
				case 233:
					return 7305;
				case 234:
					return 7312;
				case 235:
					return 7319;
				case 236:
					return 7326;
				case 237:
					return 7333;
				case 238:
					return 7340;
				case 239:
					return 7347;
				case 240:
					return 7354;
				case 241:
					return 7361;
				case 242:
					return 7368;
				case 243:
					return 7375;
				case 244:
					return 7382;
				case 245:
					return 7389;
				case 246:
					return 7396;
				case 247:
					return 7403;
				case 248:
					return 7410;
				case 249:
					return 7417;
				case 250:
					return 7424;
				case 251:
					return 7431;
				case 252:
					return 7438;
				case 253:
					return 7445;
				case 254:
					return 7452;
				case 255:
					return 7459;
				case 256:
					return 7466;
				case 257:
					return 7473;
				case 258:
					return 7480;
				case 259:
					return 7487;
				case 260:
					return 7494;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				case 262:
					return 8021;
				case 263:
					return 8028;
				case 264:
					return 8035;
				case 265:
					return 8042;
				case 266:
					return 8049;
				case 267:
					return 8056;
				case 268:
					return 8063;
				case 269:
					return 8070;
				case 270:
					return 8077;
				case 271:
					return 8538;
				case 272:
					return 8545;
				case 273:
					return 8552;
				case 274:
					return 8559;
				case 275:
					return 8566;
				case 276:
					return 8573;
				case 277:
					return 8580;
				case 278:
					return 8587;
				case 279:
					return 8594;
				case 280:
					return 8601;
				case 281:
					return 8983;
				case 282:
					return 8990;
				case 283:
					return 8997;
				case 284:
					return 9004;
				case 285:
					return 9011;
				case 286:
					return 9018;
				case 287:
					return 9025;
				case 288:
					return 9032;
				case 289:
					return 9039;
				case 290:
					return 9046;
				case 291:
					return 9053;
				case 292:
					return 9059;
				case 293:
					return 9065;
				case 294:
					return 9071;
				case 295:
					return 9078;
				case 296:
					return 9085;
				case 297:
					return 9092;
				case 298:
					return 9099;
				case 299:
					return 9106;
				case 300:
					return 9113;
				case 301:
					return 9120;
				case 302:
					return 9127;
				case 303:
					return 9134;
				case 304:
					return 9141;
				case 305:
					return 9147;
				case 306:
					return 9153;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				case 1:
					return 1639;
				case 2:
					return 1646;
				case 3:
					return 1653;
				case 4:
					return 1660;
				case 5:
					return 1667;
				case 6:
					return 1674;
				case 7:
					return 1681;
				case 8:
					return 1688;
				case 9:
					return 1695;
				case 10:
					return 1702;
				case 11:
					return 1708;
				case 12:
					return 1714;
				case 13:
					return 1720;
				case 14:
					return 1798;
				case 15:
					return 1805;
				case 16:
					return 1812;
				case 17:
					return 1819;
				case 18:
					return 1826;
				case 19:
					return 1833;
				case 20:
					return 1840;
				case 21:
					return 1847;
				case 22:
					return 1854;
				case 23:
					return 1861;
				case 24:
					return 1867;
				case 25:
					return 1873;
				case 26:
					return 2168;
				case 27:
					return 2175;
				case 28:
					return 2182;
				case 29:
					return 2189;
				case 30:
					return 2196;
				case 31:
					return 2203;
				case 32:
					return 2210;
				case 33:
					return 2217;
				case 34:
					return 2224;
				case 35:
					return 2231;
				case 36:
					return 2238;
				case 37:
					return 2244;
				case 38:
					return 2250;
				case 39:
					return 2831;
				case 40:
					return 2838;
				case 41:
					return 2845;
				case 42:
					return 2852;
				case 43:
					return 2859;
				case 44:
					return 2866;
				case 45:
					return 2873;
				case 46:
					return 2880;
				case 47:
					return 2887;
				case 48:
					return 2894;
				case 49:
					return 2901;
				case 50:
					return 2907;
				case 51:
					return 2913;
				case 52:
					return 2955;
				case 53:
					return 2962;
				case 54:
					return 2969;
				case 55:
					return 2976;
				case 56:
					return 2983;
				case 57:
					return 2990;
				case 58:
					return 2997;
				case 59:
					return 3004;
				case 60:
					return 3011;
				case 61:
					return 3018;
				case 62:
					return 3025;
				case 63:
					return 3031;
				case 64:
					return 3037;
				case 65:
					return 3238;
				case 66:
					return 3246;
				case 67:
					return 3254;
				case 68:
					return 3262;
				case 69:
					return 3270;
				case 70:
					return 3278;
				case 71:
					return 3286;
				case 72:
					return 3294;
				case 73:
					return 3302;
				case 74:
					return 3310;
				case 75:
					return 3318;
				case 76:
					return 3326;
				case 77:
					return 3334;
				case 78:
					return 3342;
				case 79:
					return 3350;
				case 80:
					return 3358;
				case 81:
					return 3366;
				case 82:
					return 3374;
				case 83:
					return 3382;
				case 84:
					return 3390;
				case 85:
					return 3398;
				case 86:
					return 3405;
				case 87:
					return 3412;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				case 89:
					return 4042;
				case 90:
					return 4050;
				case 91:
					return 4058;
				case 92:
					return 4066;
				case 93:
					return 4074;
				case 94:
					return 4082;
				case 95:
					return 4090;
				case 96:
					return 4098;
				case 97:
					return 4106;
				case 98:
					return 4114;
				case 99:
					return 4122;
				case 100:
					return 4130;
				case 101:
					return 4138;
				case 102:
					return 4146;
				case 103:
					return 4154;
				case 104:
					return 4162;
				case 105:
					return 4170;
				case 106:
					return 4178;
				case 107:
					return 4186;
				case 108:
					return 4194;
				case 109:
					return 4202;
				case 110:
					return 4210;
				case 111:
					return 4218;
				case 112:
					return 4226;
				case 113:
					return 4234;
				case 114:
					return 4242;
				case 115:
					return 4250;
				case 116:
					return 4258;
				case 117:
					return 4266;
				case 118:
					return 4274;
				case 119:
					return 4282;
				case 120:
					return 4290;
				case 121:
					return 4298;
				case 122:
					return 4306;
				case 123:
					return 4314;
				case 124:
					return 4322;
				case 125:
					return 4330;
				case 126:
					return 4338;
				case 127:
					return 4346;
				case 128:
					return 4354;
				case 129:
					return 4362;
				case 130:
					return 4370;
				case 131:
					return 4378;
				case 132:
					return 4386;
				case 133:
					return 4394;
				case 134:
					return 4402;
				case 135:
					return 4410;
				case 136:
					return 4418;
				case 137:
					return 4426;
				case 138:
					return 4434;
				case 139:
					return 4442;
				case 140:
					return 4450;
				case 141:
					return 4458;
				case 142:
					return 4466;
				case 143:
					return 4474;
				case 144:
					return 4482;
				case 145:
					return 4490;
				case 146:
					return 4498;
				case 147:
					return 4506;
				case 148:
					return 4514;
				case 149:
					return 4522;
				case 150:
					return 4530;
				case 151:
					return 4538;
				case 152:
					return 4546;
				case 153:
					return 4554;
				case 154:
					return 4562;
				case 155:
					return 4570;
				case 156:
					return 4578;
				case 157:
					return 4586;
				case 158:
					return 5479;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				case 160:
					return 5935;
				case 161:
					return 5942;
				case 162:
					return 5949;
				case 163:
					return 5956;
				case 164:
					return 5963;
				case 165:
					return 5970;
				case 166:
					return 5977;
				case 167:
					return 5984;
				case 168:
					return 5991;
				case 169:
					return 5998;
				case 170:
					return 6005;
				case 171:
					return 6012;
				case 172:
					return 6019;
				case 173:
					return 6026;
				case 174:
					return 6033;
				case 175:
					return 6040;
				case 176:
					return 6047;
				case 177:
					return 6054;
				case 178:
					return 6061;
				case 179:
					return 6068;
				case 180:
					return 6075;
				case 181:
					return 6082;
				case 182:
					return 6089;
				case 183:
					return 6096;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				case 185:
					return 6180;
				case 186:
					return 6187;
				case 187:
					return 6194;
				case 188:
					return 6201;
				case 189:
					return 6208;
				case 190:
					return 6215;
				case 191:
					return 6222;
				case 192:
					return 6229;
				case 193:
					return 6236;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				case 195:
					return 6577;
				case 196:
					return 6584;
				case 197:
					return 6591;
				case 198:
					return 6598;
				case 199:
					return 6605;
				case 200:
					return 6612;
				case 201:
					return 6619;
				case 202:
					return 6626;
				case 203:
					return 6633;
				case 204:
					return 6640;
				case 205:
					return 6647;
				case 206:
					return 6654;
				case 207:
					return 6661;
				case 208:
					return 6668;
				case 209:
					return 6675;
				case 210:
					return 6682;
				case 211:
					return 6689;
				case 212:
					return 6696;
				case 213:
					return 6703;
				case 214:
					return 6710;
				case 215:
					return 6717;
				case 216:
					return 6724;
				case 217:
					return 6731;
				case 218:
					return 6738;
				case 219:
					return 6745;
				case 220:
					return 6752;
				case 221:
					return 6759;
				case 222:
					return 6766;
				case 223:
					return 6773;
				case 224:
					return 6780;
				case 225:
					return 6787;
				case 226:
					return 6794;
				case 227:
					return 6801;
				case 228:
					return 6808;
				case 229:
					return 6815;
				case 230:
					return 6822;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				case 232:
					return 7299;
				case 233:
					return 7306;
				case 234:
					return 7313;
				case 235:
					return 7320;
				case 236:
					return 7327;
				case 237:
					return 7334;
				case 238:
					return 7341;
				case 239:
					return 7348;
				case 240:
					return 7355;
				case 241:
					return 7362;
				case 242:
					return 7369;
				case 243:
					return 7376;
				case 244:
					return 7383;
				case 245:
					return 7390;
				case 246:
					return 7397;
				case 247:
					return 7404;
				case 248:
					return 7411;
				case 249:
					return 7418;
				case 250:
					return 7425;
				case 251:
					return 7432;
				case 252:
					return 7439;
				case 253:
					return 7446;
				case 254:
					return 7453;
				case 255:
					return 7460;
				case 256:
					return 7467;
				case 257:
					return 7474;
				case 258:
					return 7481;
				case 259:
					return 7488;
				case 260:
					return 7495;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				case 262:
					return 8022;
				case 263:
					return 8029;
				case 264:
					return 8036;
				case 265:
					return 8043;
				case 266:
					return 8050;
				case 267:
					return 8057;
				case 268:
					return 8064;
				case 269:
					return 8071;
				case 270:
					return 8078;
				case 271:
					return 8539;
				case 272:
					return 8546;
				case 273:
					return 8553;
				case 274:
					return 8560;
				case 275:
					return 8567;
				case 276:
					return 8574;
				case 277:
					return 8581;
				case 278:
					return 8588;
				case 279:
					return 8595;
				case 280:
					return 8602;
				case 281:
					return 8984;
				case 282:
					return 8991;
				case 283:
					return 8998;
				case 284:
					return 9005;
				case 285:
					return 9012;
				case 286:
					return 9019;
				case 287:
					return 9026;
				case 288:
					return 9033;
				case 289:
					return 9040;
				case 290:
					return 9047;
				case 291:
					return 9054;
				case 292:
					return 9060;
				case 293:
					return 9066;
				case 294:
					return 9072;
				case 295:
					return 9079;
				case 296:
					return 9086;
				case 297:
					return 9093;
				case 298:
					return 9100;
				case 299:
					return 9107;
				case 300:
					return 9114;
				case 301:
					return 9121;
				case 302:
					return 9128;
				case 303:
					return 9135;
				case 304:
					return 9142;
				case 305:
					return 9148;
				case 306:
					return 9154;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				case 1:
					return 1640;
				case 2:
					return 1647;
				case 3:
					return 1654;
				case 4:
					return 1661;
				case 5:
					return 1668;
				case 6:
					return 1675;
				case 7:
					return 1682;
				case 8:
					return 1689;
				case 9:
					return 1696;
				case 10:
					return 1703;
				case 11:
					return 1709;
				case 12:
					return 1715;
				case 13:
					return 1721;
				case 14:
					return 1799;
				case 15:
					return 1806;
				case 16:
					return 1813;
				case 17:
					return 1820;
				case 18:
					return 1827;
				case 19:
					return 1834;
				case 20:
					return 1841;
				case 21:
					return 1848;
				case 22:
					return 1855;
				case 23:
					return 1862;
				case 24:
					return 1868;
				case 25:
					return 1874;
				case 26:
					return 2169;
				case 27:
					return 2176;
				case 28:
					return 2183;
				case 29:
					return 2190;
				case 30:
					return 2197;
				case 31:
					return 2204;
				case 32:
					return 2211;
				case 33:
					return 2218;
				case 34:
					return 2225;
				case 35:
					return 2232;
				case 36:
					return 2239;
				case 37:
					return 2245;
				case 38:
					return 2251;
				case 39:
					return 2832;
				case 40:
					return 2839;
				case 41:
					return 2846;
				case 42:
					return 2853;
				case 43:
					return 2860;
				case 44:
					return 2867;
				case 45:
					return 2874;
				case 46:
					return 2881;
				case 47:
					return 2888;
				case 48:
					return 2895;
				case 49:
					return 2902;
				case 50:
					return 2908;
				case 51:
					return 2914;
				case 52:
					return 2956;
				case 53:
					return 2963;
				case 54:
					return 2970;
				case 55:
					return 2977;
				case 56:
					return 2984;
				case 57:
					return 2991;
				case 58:
					return 2998;
				case 59:
					return 3005;
				case 60:
					return 3012;
				case 61:
					return 3019;
				case 62:
					return 3026;
				case 63:
					return 3032;
				case 64:
					return 3038;
				case 65:
					return 3239;
				case 66:
					return 3247;
				case 67:
					return 3255;
				case 68:
					return 3263;
				case 69:
					return 3271;
				case 70:
					return 3279;
				case 71:
					return 3287;
				case 72:
					return 3295;
				case 73:
					return 3303;
				case 74:
					return 3311;
				case 75:
					return 3319;
				case 76:
					return 3327;
				case 77:
					return 3335;
				case 78:
					return 3343;
				case 79:
					return 3351;
				case 80:
					return 3359;
				case 81:
					return 3367;
				case 82:
					return 3375;
				case 83:
					return 3383;
				case 84:
					return 3391;
				case 85:
					return 3399;
				case 86:
					return 3406;
				case 87:
					return 3413;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				case 89:
					return 4043;
				case 90:
					return 4051;
				case 91:
					return 4059;
				case 92:
					return 4067;
				case 93:
					return 4075;
				case 94:
					return 4083;
				case 95:
					return 4091;
				case 96:
					return 4099;
				case 97:
					return 4107;
				case 98:
					return 4115;
				case 99:
					return 4123;
				case 100:
					return 4131;
				case 101:
					return 4139;
				case 102:
					return 4147;
				case 103:
					return 4155;
				case 104:
					return 4163;
				case 105:
					return 4171;
				case 106:
					return 4179;
				case 107:
					return 4187;
				case 108:
					return 4195;
				case 109:
					return 4203;
				case 110:
					return 4211;
				case 111:
					return 4219;
				case 112:
					return 4227;
				case 113:
					return 4235;
				case 114:
					return 4243;
				case 115:
					return 4251;
				case 116:
					return 4259;
				case 117:
					return 4267;
				case 118:
					return 4275;
				case 119:
					return 4283;
				case 120:
					return 4291;
				case 121:
					return 4299;
				case 122:
					return 4307;
				case 123:
					return 4315;
				case 124:
					return 4323;
				case 125:
					return 4331;
				case 126:
					return 4339;
				case 127:
					return 4347;
				case 128:
					return 4355;
				case 129:
					return 4363;
				case 130:
					return 4371;
				case 131:
					return 4379;
				case 132:
					return 4387;
				case 133:
					return 4395;
				case 134:
					return 4403;
				case 135:
					return 4411;
				case 136:
					return 4419;
				case 137:
					return 4427;
				case 138:
					return 4435;
				case 139:
					return 4443;
				case 140:
					return 4451;
				case 141:
					return 4459;
				case 142:
					return 4467;
				case 143:
					return 4475;
				case 144:
					return 4483;
				case 145:
					return 4491;
				case 146:
					return 4499;
				case 147:
					return 4507;
				case 148:
					return 4515;
				case 149:
					return 4523;
				case 150:
					return 4531;
				case 151:
					return 4539;
				case 152:
					return 4547;
				case 153:
					return 4555;
				case 154:
					return 4563;
				case 155:
					return 4571;
				case 156:
					return 4579;
				case 157:
					return 4587;
				case 158:
					return 5480;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				case 160:
					return 5936;
				case 161:
					return 5943;
				case 162:
					return 5950;
				case 163:
					return 5957;
				case 164:
					return 5964;
				case 165:
					return 5971;
				case 166:
					return 5978;
				case 167:
					return 5985;
				case 168:
					return 5992;
				case 169:
					return 5999;
				case 170:
					return 6006;
				case 171:
					return 6013;
				case 172:
					return 6020;
				case 173:
					return 6027;
				case 174:
					return 6034;
				case 175:
					return 6041;
				case 176:
					return 6048;
				case 177:
					return 6055;
				case 178:
					return 6062;
				case 179:
					return 6069;
				case 180:
					return 6076;
				case 181:
					return 6083;
				case 182:
					return 6090;
				case 183:
					return 6097;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				case 185:
					return 6181;
				case 186:
					return 6188;
				case 187:
					return 6195;
				case 188:
					return 6202;
				case 189:
					return 6209;
				case 190:
					return 6216;
				case 191:
					return 6223;
				case 192:
					return 6230;
				case 193:
					return 6237;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				case 195:
					return 6578;
				case 196:
					return 6585;
				case 197:
					return 6592;
				case 198:
					return 6599;
				case 199:
					return 6606;
				case 200:
					return 6613;
				case 201:
					return 6620;
				case 202:
					return 6627;
				case 203:
					return 6634;
				case 204:
					return 6641;
				case 205:
					return 6648;
				case 206:
					return 6655;
				case 207:
					return 6662;
				case 208:
					return 6669;
				case 209:
					return 6676;
				case 210:
					return 6683;
				case 211:
					return 6690;
				case 212:
					return 6697;
				case 213:
					return 6704;
				case 214:
					return 6711;
				case 215:
					return 6718;
				case 216:
					return 6725;
				case 217:
					return 6732;
				case 218:
					return 6739;
				case 219:
					return 6746;
				case 220:
					return 6753;
				case 221:
					return 6760;
				case 222:
					return 6767;
				case 223:
					return 6774;
				case 224:
					return 6781;
				case 225:
					return 6788;
				case 226:
					return 6795;
				case 227:
					return 6802;
				case 228:
					return 6809;
				case 229:
					return 6816;
				case 230:
					return 6823;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				case 232:
					return 7300;
				case 233:
					return 7307;
				case 234:
					return 7314;
				case 235:
					return 7321;
				case 236:
					return 7328;
				case 237:
					return 7335;
				case 238:
					return 7342;
				case 239:
					return 7349;
				case 240:
					return 7356;
				case 241:
					return 7363;
				case 242:
					return 7370;
				case 243:
					return 7377;
				case 244:
					return 7384;
				case 245:
					return 7391;
				case 246:
					return 7398;
				case 247:
					return 7405;
				case 248:
					return 7412;
				case 249:
					return 7419;
				case 250:
					return 7426;
				case 251:
					return 7433;
				case 252:
					return 7440;
				case 253:
					return 7447;
				case 254:
					return 7454;
				case 255:
					return 7461;
				case 256:
					return 7468;
				case 257:
					return 7475;
				case 258:
					return 7482;
				case 259:
					return 7489;
				case 260:
					return 7496;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				case 262:
					return 8023;
				case 263:
					return 8030;
				case 264:
					return 8037;
				case 265:
					return 8044;
				case 266:
					return 8051;
				case 267:
					return 8058;
				case 268:
					return 8065;
				case 269:
					return 8072;
				case 270:
					return 8079;
				case 271:
					return 8540;
				case 272:
					return 8547;
				case 273:
					return 8554;
				case 274:
					return 8561;
				case 275:
					return 8568;
				case 276:
					return 8575;
				case 277:
					return 8582;
				case 278:
					return 8589;
				case 279:
					return 8596;
				case 280:
					return 8603;
				case 281:
					return 8985;
				case 282:
					return 8992;
				case 283:
					return 8999;
				case 284:
					return 9006;
				case 285:
					return 9013;
				case 286:
					return 9020;
				case 287:
					return 9027;
				case 288:
					return 9034;
				case 289:
					return 9041;
				case 290:
					return 9048;
				case 291:
					return 9055;
				case 292:
					return 9061;
				case 293:
					return 9067;
				case 294:
					return 9073;
				case 295:
					return 9080;
				case 296:
					return 9087;
				case 297:
					return 9094;
				case 298:
					return 9101;
				case 299:
					return 9108;
				case 300:
					return 9115;
				case 301:
					return 9122;
				case 302:
					return 9129;
				case 303:
					return 9136;
				case 304:
					return 9143;
				case 305:
					return 9149;
				case 306:
					return 9155;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				case 1:
					return 1642;
				case 2:
					return 1649;
				case 3:
					return 1656;
				case 4:
					return 1663;
				case 5:
					return 1670;
				case 6:
					return 1677;
				case 7:
					return 1684;
				case 8:
					return 1691;
				case 9:
					return 1698;
				case 13:
					return 1723;
				case 14:
					return 1801;
				case 15:
					return 1808;
				case 16:
					return 1815;
				case 17:
					return 1822;
				case 18:
					return 1829;
				case 19:
					return 1836;
				case 20:
					return 1843;
				case 21:
					return 1850;
				case 22:
					return 1857;
				case 26:
					return 2171;
				case 27:
					return 2178;
				case 28:
					return 2185;
				case 29:
					return 2192;
				case 30:
					return 2199;
				case 31:
					return 2206;
				case 32:
					return 2213;
				case 33:
					return 2220;
				case 34:
					return 2227;
				case 35:
					return 2234;
				case 39:
					return 2834;
				case 40:
					return 2841;
				case 41:
					return 2848;
				case 42:
					return 2855;
				case 43:
					return 2862;
				case 44:
					return 2869;
				case 45:
					return 2876;
				case 46:
					return 2883;
				case 47:
					return 2890;
				case 48:
					return 2897;
				case 52:
					return 2958;
				case 53:
					return 2965;
				case 54:
					return 2972;
				case 55:
					return 2979;
				case 56:
					return 2986;
				case 57:
					return 2993;
				case 58:
					return 3000;
				case 59:
					return 3007;
				case 60:
					return 3014;
				case 61:
					return 3021;
				case 65:
					return 3242;
				case 66:
					return 3250;
				case 67:
					return 3258;
				case 68:
					return 3266;
				case 69:
					return 3274;
				case 70:
					return 3282;
				case 71:
					return 3290;
				case 72:
					return 3298;
				case 73:
					return 3306;
				case 74:
					return 3314;
				case 75:
					return 3322;
				case 76:
					return 3330;
				case 77:
					return 3338;
				case 78:
					return 3346;
				case 79:
					return 3354;
				case 80:
					return 3362;
				case 81:
					return 3370;
				case 82:
					return 3378;
				case 83:
					return 3386;
				case 84:
					return 3394;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				case 89:
					return 4046;
				case 90:
					return 4054;
				case 91:
					return 4062;
				case 92:
					return 4070;
				case 93:
					return 4078;
				case 94:
					return 4086;
				case 95:
					return 4094;
				case 96:
					return 4102;
				case 97:
					return 4110;
				case 98:
					return 4118;
				case 99:
					return 4126;
				case 100:
					return 4134;
				case 101:
					return 4142;
				case 102:
					return 4150;
				case 103:
					return 4158;
				case 104:
					return 4166;
				case 105:
					return 4174;
				case 106:
					return 4182;
				case 107:
					return 4190;
				case 108:
					return 4198;
				case 109:
					return 4206;
				case 110:
					return 4214;
				case 111:
					return 4222;
				case 112:
					return 4230;
				case 113:
					return 4238;
				case 114:
					return 4246;
				case 115:
					return 4254;
				case 116:
					return 4262;
				case 117:
					return 4270;
				case 118:
					return 4278;
				case 119:
					return 4286;
				case 120:
					return 4294;
				case 121:
					return 4302;
				case 122:
					return 4310;
				case 123:
					return 4318;
				case 124:
					return 4326;
				case 125:
					return 4334;
				case 126:
					return 4342;
				case 127:
					return 4350;
				case 128:
					return 4358;
				case 129:
					return 4366;
				case 130:
					return 4374;
				case 131:
					return 4382;
				case 132:
					return 4390;
				case 133:
					return 4398;
				case 134:
					return 4406;
				case 135:
					return 4414;
				case 136:
					return 4422;
				case 137:
					return 4430;
				case 138:
					return 4438;
				case 139:
					return 4446;
				case 140:
					return 4454;
				case 141:
					return 4462;
				case 142:
					return 4470;
				case 143:
					return 4478;
				case 144:
					return 4486;
				case 145:
					return 4494;
				case 146:
					return 4502;
				case 147:
					return 4510;
				case 148:
					return 4518;
				case 149:
					return 4526;
				case 150:
					return 4534;
				case 151:
					return 4542;
				case 152:
					return 4550;
				case 153:
					return 4558;
				case 154:
					return 4566;
				case 155:
					return 4574;
				case 156:
					return 4582;
				case 157:
					return 4590;
				case 158:
					return 5483;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				case 160:
					return 5938;
				case 161:
					return 5945;
				case 162:
					return 5952;
				case 163:
					return 5959;
				case 164:
					return 5966;
				case 165:
					return 5973;
				case 166:
					return 5980;
				case 167:
					return 5987;
				case 168:
					return 5994;
				case 169:
					return 6001;
				case 170:
					return 6008;
				case 171:
					return 6015;
				case 172:
					return 6022;
				case 173:
					return 6029;
				case 174:
					return 6036;
				case 175:
					return 6043;
				case 176:
					return 6050;
				case 177:
					return 6057;
				case 178:
					return 6064;
				case 179:
					return 6071;
				case 180:
					return 6078;
				case 181:
					return 6085;
				case 182:
					return 6092;
				case 183:
					return 6099;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				case 185:
					return 6183;
				case 186:
					return 6190;
				case 187:
					return 6197;
				case 188:
					return 6204;
				case 189:
					return 6211;
				case 190:
					return 6218;
				case 191:
					return 6225;
				case 192:
					return 6232;
				case 193:
					return 6239;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				case 195:
					return 6580;
				case 196:
					return 6587;
				case 197:
					return 6594;
				case 198:
					return 6601;
				case 199:
					return 6608;
				case 200:
					return 6615;
				case 201:
					return 6622;
				case 202:
					return 6629;
				case 203:
					return 6636;
				case 204:
					return 6643;
				case 205:
					return 6650;
				case 206:
					return 6657;
				case 207:
					return 6664;
				case 208:
					return 6671;
				case 209:
					return 6678;
				case 210:
					return 6685;
				case 211:
					return 6692;
				case 212:
					return 6699;
				case 213:
					return 6706;
				case 214:
					return 6713;
				case 215:
					return 6720;
				case 216:
					return 6727;
				case 217:
					return 6734;
				case 218:
					return 6741;
				case 219:
					return 6748;
				case 220:
					return 6755;
				case 221:
					return 6762;
				case 222:
					return 6769;
				case 223:
					return 6776;
				case 224:
					return 6783;
				case 225:
					return 6790;
				case 226:
					return 6797;
				case 227:
					return 6804;
				case 228:
					return 6811;
				case 229:
					return 6818;
				case 230:
					return 6825;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				case 232:
					return 7302;
				case 233:
					return 7309;
				case 234:
					return 7316;
				case 235:
					return 7323;
				case 236:
					return 7330;
				case 237:
					return 7337;
				case 238:
					return 7344;
				case 239:
					return 7351;
				case 240:
					return 7358;
				case 241:
					return 7365;
				case 242:
					return 7372;
				case 243:
					return 7379 /* GXTEntry: "1100000" */;
				case 244:
					return 7386;
				case 245:
					return 7393;
				case 246:
					return 7400;
				case 247:
					return 7407;
				case 248:
					return 7414;
				case 249:
					return 7421;
				case 250:
					return 7428;
				case 251:
					return 7435;
				case 252:
					return 7442;
				case 253:
					return 7449;
				case 254:
					return 7456;
				case 255:
					return 7463;
				case 256:
					return 7470;
				case 257:
					return 7477;
				case 258:
					return 7484;
				case 259:
					return 7491;
				case 260:
					return 7498;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				case 262:
					return 8025;
				case 263:
					return 8032;
				case 264:
					return 8039;
				case 265:
					return 8046;
				case 266:
					return 8053;
				case 267:
					return 8060;
				case 268:
					return 8067;
				case 269:
					return 8074;
				case 270:
					return 8081;
				case 271:
					return 8542;
				case 272:
					return 8549;
				case 273:
					return 8556;
				case 274:
					return 8563;
				case 275:
					return 8570;
				case 276:
					return 8577;
				case 277:
					return 8584;
				case 278:
					return 8591;
				case 279:
					return 8598;
				case 280:
					return 8605;
				case 281:
					return 8987;
				case 282:
					return 8994;
				case 283:
					return 9001;
				case 284:
					return 9008;
				case 285:
					return 9015;
				case 286:
					return 9022;
				case 287:
					return 9029;
				case 288:
					return 9036;
				case 289:
					return 9043;
				case 290:
					return 9050;
				case 294:
					return 9075;
				case 295:
					return 9082;
				case 296:
					return 9089;
				case 297:
					return 9096;
				case 298:
					return 9103;
				case 299:
					return 9110;
				case 300:
					return 9117;
				case 301:
					return 9124;
				case 302:
					return 9131;
				case 303:
					return 9138;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				case 1:
					return 1641;
				case 2:
					return 1648;
				case 3:
					return 1655;
				case 4:
					return 1662;
				case 5:
					return 1669;
				case 6:
					return 1676;
				case 7:
					return 1683;
				case 8:
					return 1690;
				case 9:
					return 1697;
				case 10:
					return 1704;
				case 11:
					return 1710;
				case 12:
					return 1716;
				case 13:
					return 1722;
				case 14:
					return 1800;
				case 15:
					return 1807;
				case 16:
					return 1814;
				case 17:
					return 1821;
				case 18:
					return 1828;
				case 19:
					return 1835;
				case 20:
					return 1842;
				case 21:
					return 1849;
				case 22:
					return 1856;
				case 23:
					return 1863;
				case 24:
					return 1869;
				case 25:
					return 1875;
				case 26:
					return 2170;
				case 27:
					return 2177;
				case 28:
					return 2184;
				case 29:
					return 2191;
				case 30:
					return 2198;
				case 31:
					return 2205;
				case 32:
					return 2212;
				case 33:
					return 2219;
				case 34:
					return 2226;
				case 35:
					return 2233;
				case 36:
					return 2240;
				case 37:
					return 2246;
				case 38:
					return 2252;
				case 39:
					return 2833;
				case 40:
					return 2840;
				case 41:
					return 2847;
				case 42:
					return 2854;
				case 43:
					return 2861;
				case 44:
					return 2868;
				case 45:
					return 2875;
				case 46:
					return 2882;
				case 47:
					return 2889;
				case 48:
					return 2896;
				case 49:
					return 2903;
				case 50:
					return 2909;
				case 51:
					return 2915;
				case 52:
					return 2957;
				case 53:
					return 2964;
				case 54:
					return 2971;
				case 55:
					return 2978;
				case 56:
					return 2985;
				case 57:
					return 2992;
				case 58:
					return 2999;
				case 59:
					return 3006;
				case 60:
					return 3013;
				case 61:
					return 3020;
				case 62:
					return 3027;
				case 63:
					return 3033;
				case 64:
					return 3039;
				case 65:
					return 3240;
				case 66:
					return 3248;
				case 67:
					return 3256;
				case 68:
					return 3264;
				case 69:
					return 3272;
				case 70:
					return 3280;
				case 71:
					return 3288;
				case 72:
					return 3296;
				case 73:
					return 3304;
				case 74:
					return 3312;
				case 75:
					return 3320;
				case 76:
					return 3328;
				case 77:
					return 3337;
				case 78:
					return 3345;
				case 79:
					return 3352;
				case 80:
					return 3360;
				case 81:
					return 3368;
				case 82:
					return 3376;
				case 83:
					return 3384;
				case 84:
					return 3392;
				case 85:
					return 3400;
				case 86:
					return 3407;
				case 87:
					return 3414;
				default:
					break;
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				case 89:
					return 4044;
				case 90:
					return 4052;
				case 91:
					return 4060;
				case 92:
					return 4068;
				case 93:
					return 4076;
				case 94:
					return 4084;
				case 95:
					return 4092;
				case 96:
					return 4100;
				case 97:
					return 4108;
				case 98:
					return 4116;
				case 99:
					return 4124;
				case 100:
					return 4133;
				case 101:
					return 4141;
				case 102:
					return 4148;
				case 103:
					return 4156;
				case 104:
					return 4164;
				case 105:
					return 4172;
				case 106:
					return 4180;
				case 107:
					return 4188;
				case 108:
					return 4196;
				case 109:
					return 4204;
				case 110:
					return 4212;
				case 111:
					return 4220;
				case 112:
					return 4228;
				case 113:
					return 4236;
				case 114:
					return 4244;
				case 115:
					return 4252;
				case 116:
					return 4260;
				case 117:
					return 4268;
				case 118:
					return 4276;
				case 119:
					return 4284;
				case 120:
					return 4293;
				case 121:
					return 4301;
				case 122:
					return 4308;
				case 123:
					return 4316;
				case 124:
					return 4324;
				case 125:
					return 4332;
				case 126:
					return 4340;
				case 127:
					return 4348;
				case 128:
					return 4356;
				case 129:
					return 4364;
				case 130:
					return 4372;
				case 131:
					return 4380;
				case 132:
					return 4388;
				case 133:
					return 4396;
				case 134:
					return 4404;
				case 135:
					return 4412;
				case 136:
					return 4420;
				case 137:
					return 4428;
				case 138:
					return 4436;
				case 139:
					return 4444;
				case 140:
					return 4453;
				case 141:
					return 4461;
				case 142:
					return 4468;
				case 143:
					return 4476;
				case 144:
					return 4484;
				case 145:
					return 4492;
				case 146:
					return 4500;
				case 147:
					return 4508;
				case 148:
					return 4516;
				case 149:
					return 4524;
				case 150:
					return 4532;
				case 151:
					return 4540;
				case 152:
					return 4548;
				case 153:
					return 4556;
				case 154:
					return 4564;
				case 155:
					return 4572;
				case 156:
					return 4580;
				case 157:
					return 4588;
				case 158:
					return 5481;
				default:
					break;
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				case 160:
					return 5937;
				case 161:
					return 5944;
				case 162:
					return 5951;
				case 163:
					return 5958;
				case 164:
					return 5965;
				case 165:
					return 5972;
				case 166:
					return 5979;
				case 167:
					return 5986;
				case 168:
					return 5993;
				case 169:
					return 6000;
				case 170:
					return 6007;
				case 171:
					return 6014;
				case 172:
					return 6021;
				case 173:
					return 6028;
				case 174:
					return 6035;
				case 175:
					return 6042;
				case 176:
					return 6049;
				case 177:
					return 6056;
				case 178:
					return 6063;
				case 179:
					return 6070;
				case 180:
					return 6077;
				case 181:
					return 6084;
				case 182:
					return 6091;
				case 183:
					return 6098;
				default:
					break;
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				case 185:
					return 6182;
				case 186:
					return 6189;
				case 187:
					return 6196;
				case 188:
					return 6203;
				case 189:
					return 6210;
				case 190:
					return 6217;
				case 191:
					return 6224;
				case 192:
					return 6231;
				case 193:
					return 6238;
				default:
					break;
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				case 195:
					return 6579;
				case 196:
					return 6586;
				case 197:
					return 6593;
				case 198:
					return 6600;
				case 199:
					return 6607;
				case 200:
					return 6614;
				case 201:
					return 6621;
				case 202:
					return 6628;
				case 203:
					return 6635;
				case 204:
					return 6642;
				case 205:
					return 6649;
				case 206:
					return 6656;
				case 207:
					return 6663;
				case 208:
					return 6670;
				case 209:
					return 6677;
				case 210:
					return 6684;
				case 211:
					return 6691;
				case 212:
					return 6698;
				case 213:
					return 6705;
				case 214:
					return 6712;
				case 215:
					return 6719;
				case 216:
					return 6726;
				case 217:
					return 6733;
				case 218:
					return 6740;
				case 219:
					return 6747;
				case 220:
					return 6754;
				case 221:
					return 6761;
				case 222:
					return 6768;
				case 223:
					return 6775;
				case 224:
					return 6782;
				case 225:
					return 6789;
				case 226:
					return 6796;
				case 227:
					return 6803;
				case 228:
					return 6810;
				case 229:
					return 6817;
				case 230:
					return 6824;
				default:
					break;
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				case 232:
					return 7301;
				case 233:
					return 7308;
				case 234:
					return 7315;
				case 235:
					return 7322;
				case 236:
					return 7329;
				case 237:
					return 7336;
				case 238:
					return 7343;
				case 239:
					return 7350;
				case 240:
					return 7357;
				case 241:
					return 7364;
				case 242:
					return 7371;
				case 243:
					return 7378;
				case 244:
					return 7385;
				case 245:
					return 7392;
				case 246:
					return 7399;
				case 247:
					return 7406;
				case 248:
					return 7413;
				case 249:
					return 7420;
				case 250:
					return 7427;
				case 251:
					return 7434;
				case 252:
					return 7441;
				case 253:
					return 7448;
				case 254:
					return 7455;
				case 255:
					return 7462;
				case 256:
					return 7469;
				case 257:
					return 7476;
				case 258:
					return 7483;
				case 259:
					return 7490;
				case 260:
					return 7497;
				default:
					break;
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				case 262:
					return 8024;
				case 263:
					return 8031;
				case 264:
					return 8038;
				case 265:
					return 8045;
				case 266:
					return 8052;
				case 267:
					return 8059;
				case 268:
					return 8066;
				case 269:
					return 8073;
				case 270:
					return 8080;
				case 271:
					return 8541;
				case 272:
					return 8548;
				case 273:
					return 8555;
				case 274:
					return 8562;
				case 275:
					return 8569;
				case 276:
					return 8576;
				case 277:
					return 8583;
				case 278:
					return 8590;
				case 279:
					return 8597;
				case 280:
					return 8604;
				case 281:
					return 8986;
				case 282:
					return 8993;
				case 283:
					return 9000;
				case 284:
					return 9007;
				case 285:
					return 9014;
				case 286:
					return 9021;
				case 287:
					return 9028;
				case 288:
					return 9035;
				case 289:
					return 9042;
				case 290:
					return 9049;
				case 291:
					return 9056;
				case 292:
					return 9062;
				case 293:
					return 9068;
				case 294:
					return 9074;
				case 295:
					return 9081;
				case 296:
					return 9088;
				case 297:
					return 9095;
				case 298:
					return 9102;
				case 299:
					return 9109;
				case 300:
					return 9116;
				case 301:
					return 9123;
				case 302:
					return 9130;
				case 303:
					return 9137;
				case 304:
					return 9144;
				case 305:
					return 9150;
				case 306:
					return 9156;
				default:
					break;
			}
			break;
	}
	return 1629;
}

int func_917(int iParam0)
{
	int iVar0;

	if (iParam0 < 307)
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (iParam0 >= func_929(iVar0) && iParam0 < func_918(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_918(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 8:
			return 108;
		case 9:
			return 128;
		case 10:
			return 148;
		case 11:
			return 156;
		case 6:
			return 75;
		case 7:
			return 88;
		case 5:
			return -1;
		case 12:
			return 179;
		case 13:
			return 186;
		case 14:
			return 192;
		case 15:
			return 202;
		case 16:
			return 212;
		case 17:
			return 222;
		case 18:
			return 236;
		case 19:
			return 246;
		case 20:
			return 256;
		case 21:
			return 268;
		case 22:
			return 278;
		case 23:
			return 294;
		case 24:
			return 307;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_927(iParam0);
		return func_926(iVar0);
	}
	return (func_919(iParam0, -1) * iParam0 + 1);
}

int func_919(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_922(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_921(iParam1))
			{
				return 0;
			}
			else if (func_920(iParam1, -1))
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

bool func_920(int iParam0, int iParam1)
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

bool func_921(int iParam0)
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

bool func_922(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_923(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_923(PLAYER::PLAYER_ID(), 0))
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

bool func_923(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_389())
	{
		if (!func_925(Global_1590373))
		{
			return false;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590373)
			{
				if (MISC::IS_BIT_SET(Global_2425662[Global_1590373 /*421*/].f_195, 24) || func_924(Global_1590373))
				{
					return true;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 24);
}

bool func_924(int iParam0)
{
	if (iParam0 != func_389())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 9);
	}
	return false;
}

bool func_925(int iParam0)
{
	if (iParam0 != func_389())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_351, 2);
	}
	return false;
}

int func_926(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		case 2:
			return 224;
		case 1:
			return 227;
		default:
			break;
	}
	return -1;
}

int func_927(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

void func_928(int iParam0, int iParam1, bool bParam2)
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

int func_929(int iParam0)
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
		iVar0 = func_927(iParam0);
		return func_930(iVar0);
	}
	return (func_919(iParam0, -1) * iParam0);
}

int func_930(int iParam0)
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

int func_931(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("TECHNICAL2"):
			return 0;
		case joaat("BOXVILLE5"):
			return 1;
		case joaat("WASTELANDER"):
			return 2;
		case joaat("PHANTOM2"):
			return 3;
		case joaat("VOLTIC2"):
			return 4;
		case joaat("DUNE4"):
			return 5;
		case joaat("DUNE5"):
			return 5;
		case joaat("RUINER2"):
			return 6;
		case joaat("BLAZER5"):
			return 7;
	}
	return -1;
}

bool func_932(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_928(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_50(func_916(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_933(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TRAILERSMALL2"):
			return 0;
	}
	return -1;
}

bool func_934(int iParam0)
{
	if (iParam0 != func_389())
	{
		if (Global_1590535[iParam0 /*876*/].f_274.f_339 != 0)
		{
			return true;
		}
	}
	return false;
}

bool func_935()
{
	return func_50(6542, -1, 0) != 0;
}

bool func_936()
{
	return func_50(6163, -1, 0) != 0;
}

bool func_937()
{
	return func_50(5380, -1, 0) != 0;
}

bool func_938()
{
	return func_50(3828, -1, 0) != 0;
}

bool func_939()
{
	return func_50(3223, -1, 0) != 0;
}

bool func_940()
{
	return func_50(5379, -1, 0) != 0;
}

int func_941()
{
	bool bVar0;

	bVar0 = func_181();
	if (bVar0 != func_389())
	{
		return Global_1628237[bVar0 /*615*/].f_11.f_98;
	}
	return 0;
}

int func_942(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_52();
	}
	if (iParam0 == 7 && !Global_262145.f_16984)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_927(iParam0);
		if (iVar1 == 0 && func_50(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_943(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_987(PLAYER::PLAYER_ID()) && iVar1 == 1)
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

bool func_943(int iParam0)
{
	if (!Global_262145.f_23663)
	{
		return false;
	}
	return func_50(7207, iParam0, 0) != 0;
}

bool func_944(int iParam0)
{
	if (iParam0 != func_389())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_369 != 0;
	}
	return false;
}

int func_945()
{
	if (Global_1674356.f_3 != 0)
	{
		return Global_1674356.f_3;
	}
	return -1;
}

int func_946()
{
	if (Global_1674356.f_2 != 0)
	{
		return Global_1674356.f_2;
	}
	return -1;
}

bool func_947(int iParam0)
{
	if (iParam0 != func_389())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_334, 12);
	}
	return false;
}

bool func_948(int iParam0)
{
	if (iParam0 != func_389())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_334, 10);
	}
	return false;
}

bool func_949(int iParam0)
{
	if (iParam0 != func_389())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_334, 11);
	}
	return false;
}

bool func_950(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 4);
}

bool func_951(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 3);
}

bool func_952(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 2);
}

bool func_953(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 1);
}

bool func_954(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_351, 31);
}

bool func_955(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0 == func_389() || !func_970(iParam1))
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			return func_965(bParam0, iParam2);
		case 1:
			return func_963(bParam0, iParam2);
		case 3:
			return func_962(bParam0);
		case 2:
			return func_957(bParam0, iParam2);
		case 4:
			return func_956(bParam0);
		default:
			break;
	}
	return false;
}

bool func_956(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 6);
}

bool func_957(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_961(bParam0);
		case 11:
			return func_960(bParam0);
		case 12:
			return func_959(bParam0);
		case 13:
			return func_958(bParam0);
		default:
			break;
	}
	return false;
}

bool func_958(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 15);
}

bool func_959(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 14);
}

bool func_960(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 13);
}

bool func_961(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 12);
}

bool func_962(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 5);
}

bool func_963(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_964(bParam0);
		case 6:
			return func_953(bParam0);
		case 7:
			return func_952(bParam0);
		case 8:
			return func_951(bParam0);
		case 9:
			return func_950(bParam0);
		default:
			break;
	}
	return false;
}

bool func_964(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 0);
}

bool func_965(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_969(bParam0);
		case 1:
			return func_968(bParam0);
		case 2:
			return func_967(bParam0);
		case 3:
			return func_966(bParam0);
		case 4:
			return func_954(bParam0);
		default:
			break;
	}
	return false;
}

bool func_966(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 10);
}

bool func_967(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 9);
}

bool func_968(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 8);
}

bool func_969(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_281.f_4, 7);
}

bool func_970(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_971(bool bParam0)
{
	int iVar0;

	if (bParam0 == func_389())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_955(bParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_955(bParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_955(bParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_955(bParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_972()
{
	return func_50(6156, -1, 0) != 0;
}

bool func_973(int iParam0)
{
	if (iParam0 != func_389())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_271 != 0;
	}
	return false;
}

bool func_974()
{
	return func_50(6164, -1, 0) == 3;
}

bool func_975()
{
	return func_50(6164, -1, 0) == 2;
}

bool func_976()
{
	return func_50(6164, -1, 0) == 1;
}

int func_977()
{
	int iVar0;

	if (func_162())
	{
		return 4;
	}
	else if (func_175())
	{
		if (func_317(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_233(1))
	{
		iVar0 = func_978(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_179(1))
	{
		if (func_317(func_181()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_978(bool bParam0)
{
	if (func_131(bParam0, 1))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_451;
	}
	return -1;
}

bool func_979(int iParam0)
{
	if (iParam0 != func_389())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_264 != 0;
	}
	return false;
}

int func_980(int iParam0, int iParam1)
{
	return func_50(func_981(iParam1), iParam0, 0);
}

int func_981(int iParam0)
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

int func_982(bool bParam0)
{
	if (func_145(bParam0) == 225 || func_145(bParam0) == 226)
	{
		return func_143(bParam0);
	}
	return -1;
}

int func_983(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == func_389())
	{
		return 0;
	}
	if (func_282(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_984()
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_292(PLAYER::PLAYER_ID(), iVar0))
		{
			MISC::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

bool func_985(int iParam0)
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

int func_986(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_987(int iParam0)
{
	if (iParam0 != func_389())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_322 != 0;
	}
	return false;
}

int func_988(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return -1;
	}
	return Global_1628237[bParam0 /*615*/].f_11.f_8[1];
}

int func_989(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return -1;
	}
	return Global_1628237[bParam0 /*615*/].f_11.f_8[0];
}

void func_990(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_991("kwUfKUus6EuQyNSL8KpY-w");
					func_991("yMTOFLfO2UKwzKrmgPP7kg");
					func_991("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				case 2:
					func_991("tP5HSeCA0UiHnkRzakdO2Q");
					func_991("uEkrqoerQEmQ0uZRtp4rkw");
					func_991("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				case 3:
					func_991("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				case 6:
					func_991("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		case 139:
			switch (iParam1)
			{
				case 1:
					func_991("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				case 2:
					func_991("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		case 138:
			switch (iParam1)
			{
				case 2:
					func_991("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				case 3:
					func_991("uEkrqoerQEmQ0uZRtp4rkw");
					func_991("92t91kL3Wkqvl2Kc82cNSA");
					func_991("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				case 5:
					func_991("WfnWlxu780CwC7LLUrLljw");
					break;
				case 6:
					func_991("lowxnyELLUCxqy_Q1uslIg");
					break;
				case 7:
					func_991("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		case 141:
			switch (iParam1)
			{
				case 0:
					func_991("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		case 134:
			switch (iParam1)
			{
				case 1:
					func_991("QmlvLMLCwkOvoZlkAstYxw");
					break;
				case 4:
					func_991("fOfm7nzMLkav0ldcSCNAzA");
					func_991("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				case 5:
					func_991("3AAj-muvN0iHI5IMyGlboA");
					break;
				case 0:
					func_991("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				case 9:
					func_991("Ma78E44OMkGfYPmCPZXUNA");
					func_991("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				case 19:
					func_991("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				case 10:
					func_991("gxmtJHj2OUWQDt8nNMy3TQ");
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
							func_991("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 2:
							func_991("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				case 2:
					func_991("QmlvLMLCwkOvoZlkAstYxw");
					break;
				case 3:
					switch (iParam2)
					{
						case 1:
							func_991("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						case 2:
							func_991("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				case 4:
					func_991("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_991("3AAj-muvN0iHI5IMyGlboA");
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
							func_991("kXry-nXRbEC6ktiopjDDcg");
							break;
						case 1:
							func_991("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						case 2:
							func_991("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						case 3:
							func_991("fOfm7nzMLkav0ldcSCNAzA");
							func_991("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							func_991("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						case 1:
							func_991("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							func_991("QmlvLMLCwkOvoZlkAstYxw");
							break;
						case 2:
							func_991("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 3:
							func_991("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 1:
							func_991("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 1:
							func_991("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						case 2:
							func_991("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						case 3:
							func_991("fOfm7nzMLkav0ldcSCNAzA");
							func_991("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 0:
							func_991("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						case 1:
							func_991("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 0:
							func_991("QmlvLMLCwkOvoZlkAstYxw");
							break;
						case 2:
							func_991("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				case 8:
					switch (iParam2)
					{
						case 3:
							func_991("xIXaDwts7kKz0sbMnwYlCQ");
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
									func_991("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								case 2:
									func_991("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									func_991("kXry-nXRbEC6ktiopjDDcg");
									break;
								case 2:
									func_991("QmlvLMLCwkOvoZlkAstYxw");
									break;
								case 3:
									func_991("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								case 4:
									func_991("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						case 2:
							switch (iParam2)
							{
								case 0:
									func_991("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								case 2:
									func_991("aGBjo2rKi0yMDLl3a2ATGA");
									func_991("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								case 3:
									func_991("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						case 3:
							switch (iParam2)
							{
								case 1:
									func_991("VmS_SI5wSE2LuL9qItQqbw");
									break;
								case 4:
									func_991("f2lnL6wZPkGWUowu0yLm1Q");
									func_991("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						case 4:
							switch (iParam2)
							{
								case 1:
									func_991("Ma78E44OMkGfYPmCPZXUNA");
									break;
								case 2:
									func_991("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						case 5:
							switch (iParam2)
							{
								case 0:
									func_991("W-OJzHlM-0ym9PsIASYZtw");
									func_991("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								case 1:
									func_991("3AAj-muvN0iHI5IMyGlboA");
									break;
								case 3:
									func_991("TjGz31AMYE6bGCjAIitu6w");
									func_991("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						case 6:
							switch (iParam2)
							{
								case 2:
									func_991("QmlvLMLCwkOvoZlkAstYxw");
									func_991("BktATxH9R0Wp2x0kWSbqjw");
									break;
								case 3:
									func_991("BktATxH9R0Wp2x0kWSbqjw");
									func_991("kXry-nXRbEC6ktiopjDDcg");
									break;
								case 4:
									func_991("f2lnL6wZPkGWUowu0yLm1Q");
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
									func_991("kXry-nXRbEC6ktiopjDDcg");
									break;
								case 3:
									func_991("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									func_991("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								case 1:
									func_991("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								case 2:
									func_991("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								case 3:
									func_991("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						case 2:
							switch (iParam2)
							{
								case 3:
									func_991("Cl3Gh6-LMkuZ7Z_jPqSE8g");
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
									func_991("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						case 4:
							switch (iParam2)
							{
								case 4:
									func_991("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_991(char* sParam0)
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
			if (func_992(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
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

int func_992(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;

	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_994(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_993(uParam0) };
			return Var0.f_1;
		case 62:
			return iVar13;
		default:
			break;
	}
	return iVar13;
}

struct<13> func_993(var uParam0)
{
	struct<13> Var0;
	int iVar13;

	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_994(uParam0);
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

int func_994(var uParam0)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_996(uParam0->f_1))
	{
		if (func_995(uParam0))
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

bool func_995(var uParam0)
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

bool func_996(int iParam0)
{
	return iParam0 == 9999;
}

void func_997()
{
	struct<4> Var0;

	if (!HUD::DOES_BLIP_EXIST(iLocal_557))
	{
		if (func_1001())
		{
			iLocal_557 = HUD::ADD_BLIP_FOR_COORD(func_482());
			if (Local_80.f_197 == 2)
			{
				HUD::SET_BLIP_SPRITE(iLocal_557, 493);
			}
			else
			{
				HUD::SET_BLIP_SPRITE(iLocal_557, 441);
			}
			HUD::SET_BLIP_FLASHES(iLocal_557, true);
			HUD::SET_BLIP_FLASH_TIMER(iLocal_557, 7000);
			HUD::SET_BLIP_PRIORITY(iLocal_557, 9);
			Var0 = { func_1000() };
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_557, &Var0);
			if (Local_80.f_197 == 2)
			{
				func_998(&iLocal_557, iLocal_2747);
			}
			else
			{
				func_998(&iLocal_557, 29);
			}
			if (!MISC::IS_BIT_SET(iLocal_536, 30))
			{
				HUD::FLASH_MINIMAP_DISPLAY();
				MISC::SET_BIT(&iLocal_536, 30);
			}
		}
	}
}

void func_998(int iParam0, int iParam1)
{
	int iVar0;

	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_999(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_999(int iParam0)
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

struct<4> func_1000()
{
	struct<4> Var0;

	switch (Local_80.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_BLIP", 16);
			break;
		case 2:
			StringCopy(&Var0, "CAG_BLIP", 16);
			break;
	}
	return Var0;
}

bool func_1001()
{
	if (Local_80.f_197 != 2)
	{
		return true;
	}
	else if (func_901())
	{
		return true;
	}
	else if (func_38(PLAYER::PLAYER_ID()) >= 2)
	{
		return true;
	}
	return false;
}

void func_1002(vector3 vParam0, bool bParam3)
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_556))
	{
		if (func_1001())
		{
			if (!bParam3)
			{
				iLocal_556 = HUD::ADD_BLIP_FOR_RADIUS(vParam0, fLocal_566);
				if (Local_80.f_197 != 2)
				{
					HUD::SET_BLIP_COLOUR(iLocal_556, 5);
				}
				else
				{
					HUD::SET_BLIP_COLOUR(iLocal_556, 5);
				}
			}
			else
			{
				iLocal_556 = HUD::ADD_BLIP_FOR_RADIUS(func_482(), (func_483() / 2f));
				if (Local_80.f_197 != 2)
				{
					func_998(&iLocal_556, 29);
				}
				else
				{
					func_998(&iLocal_556, iLocal_2747);
				}
			}
			HUD::SET_BLIP_ALPHA(iLocal_556, 100);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_556, false);
		}
	}
}

Vector3 func_1003()
{
	return vLocal_591[0 /*3*/];
}

bool func_1004(bool bParam0)
{
	int iVar0;

	if (Local_80.f_197 != 2)
	{
		if (func_366(PLAYER::PLAYER_ID()))
		{
			iVar0 = 1;
		}
		if (func_1064(0))
		{
			iVar0 = 1;
		}
		if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
		{
			if (func_366(PLAYER::PLAYER_ID()))
			{
				iVar0 = 1;
			}
		}
	}
	else
	{
		if (func_359())
		{
			iVar0 = 1;
		}
		if (func_1056())
		{
			iVar0 = 1;
		}
		if (!func_1029(1, 1, 1, 0))
		{
			iVar0 = 1;
		}
		if (func_1028(200))
		{
			iVar0 = 1;
		}
	}
	if (bParam0)
	{
		if (Local_80.f_197 == 2)
		{
			if (!func_1029(1, 1, 1, 0))
			{
				iVar0 = 1;
			}
		}
		else if (!func_1014(0, 1, 1))
		{
			iVar0 = 1;
		}
	}
	if (!func_1006(136, 0, 0))
	{
		iVar0 = 1;
	}
	if (Global_1662006)
	{
		iVar0 = 1;
	}
	if (func_1005(PLAYER::PLAYER_ID()))
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_1005(bool bParam0)
{
	if (!func_1274(bParam0, 0, 1))
	{
		return false;
	}
	return Global_1590535[bParam0 /*876*/].f_35;
}

bool func_1006(int iParam0, bool bParam1, bool bParam2)
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
		if (func_1010(PLAYER::PLAYER_ID(), 85))
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
	if (func_1009() || func_1008())
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
			if (func_1007())
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

bool func_1007()
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
	if (func_1009())
	{
		return true;
	}
	if (func_1008())
	{
		return true;
	}
	iVar0 = Global_1388048[func_51(-1)];
	if (MISC::IS_BIT_SET(iVar0, 7))
	{
		MISC::SET_BIT(&(Global_2537071.f_1731), 23);
		return true;
	}
	return false;
}

bool func_1008()
{
	return Global_1312865;
}

bool func_1009()
{
	return Global_1312867;
}

bool func_1010(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1013())
	{
		return false;
	}
	if (func_1012())
	{
		return false;
	}
	if (iParam1 == 86)
	{
		return true;
	}
	iVar0 = func_1011(iParam1);
	iVar1 = iVar0;
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_730, iVar1);
}

int func_1011(int iParam0)
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

bool func_1012()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_146, 3);
}

bool func_1013()
{
	if (Global_1312448)
	{
		return true;
	}
	if (func_1009())
	{
		return true;
	}
	if (func_1008())
	{
		return true;
	}
	return func_274(120, -1);
}

bool func_1014(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_1027(PLAYER::PLAYER_ID(), 29))
	{
		return false;
	}
	if (func_363(PLAYER::PLAYER_ID(), 21))
	{
		return false;
	}
	if (func_363(PLAYER::PLAYER_ID(), 25))
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
	if (func_813(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_628())
	{
		return false;
	}
	if (bParam2)
	{
		if (func_1026(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	if (func_606())
	{
		return false;
	}
	if (bParam0)
	{
		if (func_45(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	else if (func_38(PLAYER::PLAYER_ID()) == 3)
	{
		return false;
	}
	if (func_1025(PLAYER::PLAYER_ID()) != func_389() && func_1025(PLAYER::PLAYER_ID()) == func_119(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_1023(func_1024()) && !func_1022(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_837())
	{
		return false;
	}
	if (func_446())
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return false;
	}
	if (func_599(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!func_602())
	{
		return false;
	}
	if (func_363(PLAYER::PLAYER_ID(), 0) || func_363(PLAYER::PLAYER_ID(), 3))
	{
		return false;
	}
	if ((func_363(PLAYER::PLAYER_ID(), 12) || func_363(PLAYER::PLAYER_ID(), 14)) || func_363(PLAYER::PLAYER_ID(), 13))
	{
		return false;
	}
	if (func_1021(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_654() && !Global_2513487)
		{
			return false;
		}
	}
	if (func_1020(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_1019())
	{
		return false;
	}
	if (Global_1662006)
	{
		return false;
	}
	if (func_1005(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_1018())
	{
		return false;
	}
	if (func_1017(PLAYER::PLAYER_ID()) && Global_1590184.f_171)
	{
		return false;
	}
	if (func_1016())
	{
		return false;
	}
	if (func_623(PLAYER::PLAYER_ID()))
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
	if (!func_43(PLAYER::PLAYER_ID()))
	{
		if (func_1015(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	return true;
}

bool func_1015(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0 /*13*/].f_12 != 0;
	}
	return false;
}

bool func_1016()
{
	return Global_1676377.f_474;
}

int func_1017(int iParam0)
{
	if (func_921(Global_1590535[iParam0 /*876*/].f_274.f_28))
	{
		return 1;
	}
	return 0;
}

bool func_1018()
{
	if (Global_4254512.f_943 > -1)
	{
		return true;
	}
	return false;
}

bool func_1019()
{
	return Global_98796.f_346 > 0;
}

bool func_1020(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_26, 11);
}

bool func_1021(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_389())
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

bool func_1022(int iParam0)
{
	if (func_519(iParam0) == 236 || func_519(iParam0) == 150)
	{
		return true;
	}
	return false;
}

bool func_1023(int iParam0)
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

int func_1024()
{
	return Global_2439138.f_2723[0 /*80*/].f_1;
}

bool func_1025(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_11.f_35;
}

bool func_1026(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_261.f_4 != 0 || Global_2425662[iParam0 /*421*/].f_261.f_5)
	{
		return true;
	}
	return false;
}

bool func_1027(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_11.f_5, iParam1);
}

bool func_1028(int iParam0)
{
	if (!func_175() && !func_131(PLAYER::PLAYER_ID(), 1))
	{
		if (!func_41(PLAYER::PLAYER_ID()))
		{
			if (func_359())
			{
				return true;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		case 151:
			break;
		case 152:
			break;
	}
	return false;
}

bool func_1029(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_1027(PLAYER::PLAYER_ID(), 29))
	{
		return false;
	}
	if (func_363(PLAYER::PLAYER_ID(), 21))
	{
		return false;
	}
	if (func_363(PLAYER::PLAYER_ID(), 25))
	{
		return false;
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_END_TUTORIAL_SESSION())
		{
			return false;
		}
	}
	if (!func_546(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_SET_IN_MP_CUTSCENE())
		{
			return false;
		}
	}
	if (func_813(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_628())
	{
		return false;
	}
	if (func_606())
	{
		return false;
	}
	if (func_837())
	{
		return false;
	}
	if (func_446())
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return false;
	}
	if (func_599(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!func_602())
	{
		return false;
	}
	if (func_363(PLAYER::PLAYER_ID(), 0) || func_363(PLAYER::PLAYER_ID(), 3))
	{
		return false;
	}
	if ((func_363(PLAYER::PLAYER_ID(), 12) || func_363(PLAYER::PLAYER_ID(), 14)) || func_363(PLAYER::PLAYER_ID(), 13))
	{
		return false;
	}
	if (func_1049(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_1034())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (func_1019())
		{
			return false;
		}
	}
	if (Global_1662006)
	{
		return false;
	}
	if (func_1005(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_1018())
	{
		return false;
	}
	if (func_1033(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if ((func_1032(PLAYER::PLAYER_ID()) && func_1031(PLAYER::PLAYER_ID()) == 123) && !bParam3)
	{
		return false;
	}
	if (func_1030())
	{
		return false;
	}
	if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 4))
	{
		return false;
	}
	if (func_1026(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_623(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!func_45(PLAYER::PLAYER_ID()))
	{
		if (func_1015(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	return true;
}

bool func_1030()
{
	return Global_1676377.f_4303 != -1;
}

int func_1031(bool bParam0)
{
	if (bParam0 != func_389() && func_1274(bParam0, 1, 1))
	{
		return Global_2425662[bParam0 /*421*/].f_310.f_14;
	}
	return -1;
}

bool func_1032(bool bParam0)
{
	if (bParam0 != func_389() && func_1274(bParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[bParam0 /*421*/].f_310, 3);
	}
	return false;
}

bool func_1033(int iParam0)
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

bool func_1034()
{
	int iVar0;

	iVar0 = func_145(PLAYER::PLAYER_ID());
	if (((func_921(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_28) || func_1048(PLAYER::PLAYER_ID())) || func_1047(PLAYER::PLAYER_ID())) || func_1046(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return true;
		}
	}
	if (func_1045(PLAYER::PLAYER_ID()))
	{
		if (func_161(iVar0) || func_985(iVar0))
		{
			return true;
		}
	}
	if (func_1044(PLAYER::PLAYER_ID()))
	{
		if (func_985(iVar0))
		{
			return true;
		}
	}
	if (func_1043(PLAYER::PLAYER_ID()))
	{
		if (func_150(iVar0))
		{
			return true;
		}
	}
	if (func_1042(PLAYER::PLAYER_ID()))
	{
		if (func_149(iVar0))
		{
			return true;
		}
	}
	if (func_1041(PLAYER::PLAYER_ID()))
	{
		if (func_148(iVar0))
		{
			return true;
		}
	}
	if (func_1040(PLAYER::PLAYER_ID()))
	{
		if (func_1039(iVar0))
		{
			return true;
		}
	}
	if (func_1038(PLAYER::PLAYER_ID(), 0))
	{
		if (func_857(iVar0))
		{
			if (func_1037(PLAYER::PLAYER_ID()))
			{
				return true;
			}
		}
	}
	if (func_1035(PLAYER::PLAYER_ID()))
	{
		if (func_138(iVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_1035(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if (func_1274(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_1036(Global_2425662[bParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return false;
}

int func_1036(int iParam0)
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

bool func_1037(bool bParam0)
{
	if (func_1025(bParam0) != func_389())
	{
		return func_1025(bParam0) == func_119(bParam0);
	}
	return false;
}

bool func_1038(bool bParam0, bool bParam1)
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
	if (bParam0 != func_389())
	{
		if (func_1274(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_389())
			{
				return func_1036(Global_2425662[bParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return false;
}

bool func_1039(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1040(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if (func_1274(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_1036(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_1041(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if (func_1274(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_1036(Global_2425662[bParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return false;
}

bool func_1042(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if (func_1274(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_1036(Global_2425662[bParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return false;
}

bool func_1043(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if (func_1274(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_1036(Global_2425662[bParam0 /*421*/].f_310.f_5) == 4;
			}
		}
	}
	return false;
}

bool func_1044(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if (func_1274(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_1036(Global_2425662[bParam0 /*421*/].f_310.f_5) == 2;
			}
		}
	}
	return false;
}

bool func_1045(int iParam0)
{
	if (func_920(Global_1590535[iParam0 /*876*/].f_274.f_28, -1))
	{
		return true;
	}
	return false;
}

bool func_1046(int iParam0)
{
	if (func_922(Global_1590535[iParam0 /*876*/].f_274.f_28, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_1047(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if (func_1274(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_1036(Global_2425662[bParam0 /*421*/].f_310.f_5) == 1;
			}
		}
	}
	return false;
}

bool func_1048(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if (func_1274(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_1036(Global_2425662[bParam0 /*421*/].f_310.f_5) == 0;
			}
		}
	}
	return false;
}

bool func_1049(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_1048(bParam0))
		{
			return true;
		}
	}
	if (!bParam3)
	{
		if (func_1044(bParam0))
		{
			return true;
		}
	}
	if (!bParam4)
	{
		if (func_1047(bParam0))
		{
			return true;
		}
	}
	if (!bParam5)
	{
		if (func_1043(bParam0))
		{
			return true;
		}
	}
	if (!bParam6)
	{
		if (func_1042(bParam0))
		{
			return true;
		}
	}
	if (!bParam7)
	{
		if (func_1041(bParam0))
		{
			return true;
		}
	}
	if (!bParam8)
	{
		if (func_1055(bParam0))
		{
			return true;
		}
	}
	if (!bParam9)
	{
		if (func_1040(bParam0))
		{
			return true;
		}
	}
	if (!bParam10)
	{
		if (func_1054(bParam0))
		{
			return true;
		}
	}
	if (!bParam11)
	{
		if (func_1038(bParam0, 0))
		{
			return true;
		}
	}
	if (!bParam12)
	{
		if (func_1053(bParam0))
		{
			return true;
		}
	}
	if (!bParam13)
	{
		if (func_1035(bParam0))
		{
			return true;
		}
	}
	if (!bParam14)
	{
		if (func_1052(bParam0))
		{
			return true;
		}
	}
	if (!bParam15)
	{
		if (func_1051(bParam0))
		{
			return true;
		}
	}
	if (!bParam16)
	{
		if (func_1050(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_1050(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if (func_1274(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_1036(Global_2425662[bParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return false;
}

bool func_1051(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if (func_1274(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_1036(Global_2425662[bParam0 /*421*/].f_310.f_5) == 16;
			}
		}
	}
	return false;
}

bool func_1052(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if (func_1274(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_1036(Global_2425662[bParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return false;
}

bool func_1053(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if (func_1274(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_1036(Global_2425662[bParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return false;
}

bool func_1054(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if (func_1274(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_1036(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_1055(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if (func_1274(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_389())
			{
				return func_1036(Global_2425662[bParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return false;
}

bool func_1056()
{
	return false;
}

void func_1057()
{
	bool bVar0;

	if (iLocal_2747 == 0)
	{
		bVar0 = func_384();
		if (bVar0 != func_389())
		{
			iLocal_2747 = func_1058(bVar0);
		}
	}
}

int func_1058(bool bParam0)
{
	int iVar0;

	iVar0 = func_130(bParam0);
	if (iVar0 != -1)
	{
		return func_128(iVar0);
	}
	return 1;
}

var func_1059()
{
	return Global_262145.f_11147;
}

float func_1060()
{
	if (Local_80.f_197 != 2)
	{
		return Global_262145.f_11144;
	}
	return Global_262145.f_18361;
}

void func_1061()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (!func_31(vLocal_591[0 /*3*/], 0f, 0f, 0f, 0))
	{
		return;
	}
	switch (Local_80.f_167)
	{
		case 0:
			vLocal_591[0 /*3*/] = { 1476.637f, -2436.075f, 65.2401f };
			vLocal_591[1 /*3*/] = { 1591.158f, -1980.835f, 93.9884f };
			vLocal_591[2 /*3*/] = { 1105.58f, -1734.014f, 34.7122f };
			vLocal_591[3 /*3*/] = { 674.1869f, -1733.183f, 28.3527f };
			vLocal_591[4 /*3*/] = { 276.4475f, -1857.687f, 25.8607f };
			vLocal_591[5 /*3*/] = { 241.6554f, -1713.72f, 28.1339f };
			vLocal_591[6 /*3*/] = { 276.8612f, -1670.451f, 28.3137f };
			vLocal_591[7 /*3*/] = { 158.5084f, -1512.412f, 28.1416f };
			vLocal_591[8 /*3*/] = { 154.052f, -1394.604f, 28.3049f };
			vLocal_591[9 /*3*/] = { 297.3363f, -1202.901f, 28.1848f };
			vLocal_591[10 /*3*/] = { 216.0453f, -1130.863f, 28.3051f };
			vLocal_591[11 /*3*/] = { 303.6096f, -1124.259f, 28.4586f };
			vLocal_591[12 /*3*/] = { 349.6563f, -953.8064f, 28.4776f };
			vLocal_591[13 /*3*/] = { 228.3761f, -955.8815f, 28.3232f };
			iLocal_1461 = 14;
			break;
		case 1:
			vLocal_591[0 /*3*/] = { -1900.185f, 2050.775f, 139.7211f };
			vLocal_591[1 /*3*/] = { -1797.919f, 1886.775f, 147.74f };
			vLocal_591[2 /*3*/] = { -1710.175f, 1885.316f, 160.217f };
			vLocal_591[3 /*3*/] = { -1610.52f, 2033.944f, 101.5237f };
			vLocal_591[4 /*3*/] = { -1517.004f, 2141.703f, 55.0511f };
			vLocal_591[5 /*3*/] = { -1337.505f, 2178.097f, 51.2807f };
			vLocal_591[6 /*3*/] = { -1147.637f, 2341.332f, 98.8094f };
			vLocal_591[7 /*3*/] = { -934.5955f, 2262.843f, 140.7183f };
			vLocal_591[8 /*3*/] = { -730.47f, 2344.86f, 68.405f };
			vLocal_591[9 /*3*/] = { -708.701f, 2426.99f, 61.1469f };
			vLocal_591[10 /*3*/] = { -573.3401f, 2500.494f, 50.3152f };
			vLocal_591[11 /*3*/] = { -545.0461f, 2672.93f, 44.4979f };
			vLocal_591[12 /*3*/] = { -436.4757f, 2756.389f, 44.6457f };
			vLocal_591[13 /*3*/] = { -322.5151f, 2775.025f, 61.0514f };
			vLocal_591[14 /*3*/] = { -149.1279f, 2737.515f, 54.9277f };
			vLocal_591[15 /*3*/] = { 222.302f, 2489.443f, 53.8394f };
			vLocal_591[16 /*3*/] = { 569.7415f, 2454.868f, 58.4488f };
			vLocal_591[17 /*3*/] = { 753.546f, 2518.788f, 72.1194f };
			vLocal_591[18 /*3*/] = { 924.3738f, 2593.375f, 60.2089f };
			vLocal_591[19 /*3*/] = { 965.1749f, 2621.371f, 45.0674f };
			vLocal_591[20 /*3*/] = { 1039.363f, 2671.289f, 38.5509f };
			iLocal_1461 = 21;
			break;
		case 2:
			vLocal_591[0 /*3*/] = { 2304f, 1469f, 66f };
			vLocal_591[1 /*3*/] = { 2131f, 2031f, 96f };
			vLocal_591[2 /*3*/] = { 2059f, 2868f, 52f };
			vLocal_591[3 /*3*/] = { 2707f, 3485f, 64f };
			vLocal_591[4 /*3*/] = { 2855f, 3729f, 47f };
			vLocal_591[5 /*3*/] = { 2506f, 4153f, 41f };
			vLocal_591[6 /*3*/] = { 2885f, 4472f, 51f };
			vLocal_591[7 /*3*/] = { 2786.236f, 4941.378f, 32.6857f };
			vLocal_591[8 /*3*/] = { 2890.608f, 5034.026f, 30.7725f };
			vLocal_591[9 /*3*/] = { 3058.765f, 5052.091f, 24.441f };
			vLocal_591[10 /*3*/] = { 3063.052f, 5094.116f, 23.0524f };
			vLocal_591[11 /*3*/] = { 3131.718f, 5101.371f, 20.6628f };
			vLocal_591[12 /*3*/] = { 3175.018f, 5118.771f, 16.61f };
			vLocal_591[13 /*3*/] = { 3228.467f, 5133.4f, 18.321f };
			vLocal_591[14 /*3*/] = { 3283.499f, 5150.864f, 17.6323f };
			vLocal_591[15 /*3*/] = { 3297.67f, 5150.701f, 17.3023f };
			vLocal_591[16 /*3*/] = { 3320.565f, 5151.295f, 17.3289f };
			vLocal_591[17 /*3*/] = { 3337.017f, 5151.827f, 17.4344f };
			vLocal_591[18 /*3*/] = { 3348.801f, 5152.016f, 18.4475f };
			iLocal_1461 = 19;
			break;
		case 3:
			func_1063();
			vLocal_591[0 /*3*/] = { -1210.197f, -2437.739f, 12.9452f };
			vLocal_591[1 /*3*/] = { -1342.587f, -2667.462f, 12.9449f };
			vLocal_591[2 /*3*/] = { -1220.798f, -2861.65f, 12.9455f };
			vLocal_591[3 /*3*/] = { -1126.435f, -2699.413f, 22.00294f };
			vLocal_591[4 /*3*/] = { -1017.039f, -2713.215f, 34.56547f };
			vLocal_591[5 /*3*/] = { -936.5955f, -2585.454f, 21.38621f };
			vLocal_591[6 /*3*/] = { -841.7922f, -2569.529f, 16.83603f };
			vLocal_591[7 /*3*/] = { -723.1095f, -2396.833f, 17.03123f };
			vLocal_591[8 /*3*/] = { -616.2985f, -2279.408f, 13.04065f };
			vLocal_591[9 /*3*/] = { -677.7834f, -2181.811f, 14.21462f };
			vLocal_591[10 /*3*/] = { -613.1539f, -2109.985f, 21.81665f };
			vLocal_591[11 /*3*/] = { -475.038f, -2148f, 17.4868f };
			vLocal_591[12 /*3*/] = { -336.4597f, -2143.653f, 13.9572f };
			vLocal_591[13 /*3*/] = { -256.3312f, -2131.896f, 22.1408f };
			vLocal_591[14 /*3*/] = { -162.249f, -2084.908f, 26.85073f };
			vLocal_591[15 /*3*/] = { -161.8921f, -2043.37f, 21.8606f };
			vLocal_591[16 /*3*/] = { -154.6475f, -2009.529f, 21.8819f };
			vLocal_591[17 /*3*/] = { -186.8038f, -2005.34f, 26.6204f };
			vLocal_591[18 /*3*/] = { -216.7214f, -1999.232f, 26.7554f };
			iLocal_1461 = 19;
			break;
		case 4:
			vLocal_591[0 /*3*/] = { 105.443f, 7028.38f, 10.2844f };
			vLocal_591[1 /*3*/] = { 157.7284f, 6525.143f, 30.6533f };
			vLocal_591[2 /*3*/] = { -59.2422f, 6653.804f, 28.721f };
			vLocal_591[3 /*3*/] = { -168.4514f, 6476.554f, 29.0678f };
			vLocal_591[4 /*3*/] = { -111.8802f, 6419.246f, 30.4455f };
			vLocal_591[5 /*3*/] = { -154.2424f, 6339.732f, 30.6176f };
			vLocal_591[6 /*3*/] = { -93.9484f, 6279.499f, 30.3124f };
			vLocal_591[7 /*3*/] = { -182.7545f, 6195.686f, 30.1968f };
			vLocal_591[8 /*3*/] = { -260.1141f, 6185.812f, 30.4429f };
			vLocal_591[9 /*3*/] = { -304.2122f, 6227.968f, 30.4542f };
			vLocal_591[10 /*3*/] = { -473.7666f, 6066.529f, 29.34f };
			vLocal_591[11 /*3*/] = { -715.7206f, 6049.093f, -0.0726f };
			vLocal_591[12 /*3*/] = { -811.3691f, 5957.282f, 19.4103f };
			vLocal_591[13 /*3*/] = { -897.6384f, 6050.558f, 43.1834f };
			iLocal_1461 = 14;
			break;
		case 6:
			vLocal_591[0 /*3*/] = { 770.8729f, -232.9857f, 65.1145f };
			vLocal_591[1 /*3*/] = { 838.7502f, -256.9497f, 64.6297f };
			vLocal_591[2 /*3*/] = { 903.3063f, -221.7793f, 68.666f };
			vLocal_591[3 /*3*/] = { 935.5661f, -166.9423f, 73.4974f };
			vLocal_591[4 /*3*/] = { 935.502f, -150.7537f, 73.7236f };
			vLocal_591[5 /*3*/] = { 903.4067f, -123.2328f, 76.2099f };
			vLocal_591[6 /*3*/] = { 881.9219f, -103.4221f, 78.4213f };
			vLocal_591[7 /*3*/] = { 880.8146f, -80.6718f, 77.7643f };
			vLocal_591[8 /*3*/] = { 924.9553f, -20.0444f, 77.7643f };
			vLocal_591[9 /*3*/] = { 953.8312f, -19.9404f, 77.764f };
			vLocal_591[10 /*3*/] = { 968.3574f, -3.2091f, 79.9909f };
			vLocal_591[11 /*3*/] = { 1009.373f, 64.5172f, 79.9909f };
			vLocal_591[12 /*3*/] = { 1004.334f, 70.7857f, 79.9909f };
			vLocal_591[13 /*3*/] = { 961.9669f, 97.0632f, 79.9909f };
			vLocal_591[14 /*3*/] = { 974.4698f, 116.5434f, 79.9909f };
			vLocal_591[15 /*3*/] = { 1023.872f, 169.1899f, 79.9905f };
			vLocal_591[16 /*3*/] = { 1023.795f, 181.0932f, 79.8559f };
			vLocal_591[17 /*3*/] = { 1003.224f, 191.8311f, 79.9087f };
			vLocal_591[18 /*3*/] = { 945.6973f, 122.5348f, 79.7235f };
			vLocal_591[19 /*3*/] = { 931.2999f, 104.402f, 78.3884f };
			vLocal_591[20 /*3*/] = { 884.1791f, 48.7134f, 77.631f };
			vLocal_591[21 /*3*/] = { 820.7046f, -20.0586f, 79.7007f };
			vLocal_591[22 /*3*/] = { 824.5161f, -65.76f, 79.6442f };
			vLocal_591[23 /*3*/] = { 854.3058f, -113.1723f, 78.3323f };
			vLocal_591[24 /*3*/] = { 847.928f, -140.3758f, 77.3008f };
			vLocal_591[25 /*3*/] = { 825.0543f, -176.4968f, 71.886f };
			vLocal_591[26 /*3*/] = { 803.1815f, -203.4303f, 71.9304f };
			vLocal_591[27 /*3*/] = { 772.341f, -248.5203f, 65.1143f };
			vLocal_591[28 /*3*/] = { 766.5759f, -268.8026f, 65.4267f };
			vLocal_591[29 /*3*/] = { 751.6126f, -300.7643f, 58.892f };
			vLocal_591[30 /*3*/] = { 723.4518f, -321.204f, 51.9976f };
			vLocal_591[31 /*3*/] = { 691.1819f, -341.8955f, 39.0741f };
			vLocal_591[32 /*3*/] = { 644.3198f, -353.9926f, 29.0699f };
			vLocal_591[33 /*3*/] = { 628.4379f, -365.0165f, 23.5751f };
			vLocal_591[34 /*3*/] = { 607.2872f, -399.7075f, 23.7997f };
			vLocal_591[35 /*3*/] = { 599.2954f, -478.0787f, 23.7562f };
			vLocal_591[36 /*3*/] = { 566.7018f, -553.8478f, 23.7368f };
			vLocal_591[37 /*3*/] = { 538.7103f, -643.3187f, 23.7397f };
			vLocal_591[38 /*3*/] = { 508.0503f, -682.8132f, 24.2827f };
			vLocal_591[39 /*3*/] = { 456.5249f, -685.2498f, 26.8735f };
			vLocal_591[40 /*3*/] = { 456.4284f, -821.7599f, 26.5584f };
			vLocal_591[41 /*3*/] = { 406.9605f, -830.3608f, 28.3306f };
			vLocal_591[42 /*3*/] = { 406.1039f, -876.7354f, 28.3905f };
			vLocal_591[43 /*3*/] = { 402.9865f, -938.0498f, 28.4551f };
			vLocal_591[44 /*3*/] = { 404.8474f, -950.4066f, 28.4433f };
			vLocal_591[45 /*3*/] = { 416.964f, -954.1458f, 28.4324f };
			vLocal_591[46 /*3*/] = { 485.1107f, -954.6018f, 26.3922f };
			vLocal_591[47 /*3*/] = { 496.7718f, -957.6362f, 26.1527f };
			vLocal_591[48 /*3*/] = { 500.8447f, -966.6793f, 26.4009f };
			vLocal_591[49 /*3*/] = { 499.6066f, -1038.969f, 27.357f };
			vLocal_591[50 /*3*/] = { 482.2613f, -1070.182f, 28.2113f };
			vLocal_591[51 /*3*/] = { 462.5394f, -1125.002f, 28.3189f };
			vLocal_591[52 /*3*/] = { 452.1105f, -1131.479f, 28.4588f };
			vLocal_591[53 /*3*/] = { 411.7074f, -1132.298f, 28.4582f };
			vLocal_591[54 /*3*/] = { 401.2792f, -1126.838f, 28.4871f };
			vLocal_591[55 /*3*/] = { 398.4309f, -1108.895f, 28.4618f };
			vLocal_591[56 /*3*/] = { 398.5521f, -1011.637f, 28.4602f };
			vLocal_591[57 /*3*/] = { 391.9118f, -1000.936f, 28.4172f };
			vLocal_591[58 /*3*/] = { 384.0373f, -999.108f, 28.4212f };
			vLocal_591[59 /*3*/] = { 280.6655f, -998.2255f, 28.2999f };
			vLocal_591[60 /*3*/] = { 274.747f, -997.3961f, 28.3239f };
			vLocal_591[61 /*3*/] = { 254.8134f, -990.8824f, 28.2714f };
			vLocal_591[62 /*3*/] = { 244.1949f, -980.8467f, 28.3573f };
			vLocal_591[63 /*3*/] = { 244.9183f, -958.1761f, 28.3041f };
			vLocal_591[64 /*3*/] = { 265.0497f, -896.29f, 27.9801f };
			vLocal_591[65 /*3*/] = { 259.8165f, -869.8301f, 28.273f };
			vLocal_591[66 /*3*/] = { 226.9681f, -839.9088f, 29.2632f };
			vLocal_591[67 /*3*/] = { 224.8172f, -815.2034f, 29.5278f };
			vLocal_591[68 /*3*/] = { 223.5029f, -758.9518f, 29.8235f };
			vLocal_591[69 /*3*/] = { 234.023f, -729.6653f, 29.8196f };
			vLocal_591[70 /*3*/] = { 268.7956f, -743.4052f, 33.64f };
			vLocal_591[71 /*3*/] = { 224.9066f, -736.6704f, 33.2013f };
			vLocal_591[72 /*3*/] = { 172.0603f, -721.1422f, 32.1324f };
			vLocal_591[73 /*3*/] = { 75.1364f, -688.8935f, 30.6218f };
			vLocal_591[74 /*3*/] = { 112.1867f, -577.6705f, 30.47f };
			vLocal_591[75 /*3*/] = { 58.5058f, -554.6415f, 32.7843f };
			vLocal_591[76 /*3*/] = { -35.6377f, -545.9135f, 38.9156f };
			vLocal_591[77 /*3*/] = { -77.4362f, -537.5404f, 39.1736f };
			iLocal_1461 = 78;
			break;
		case 7:
			vLocal_591[0 /*3*/] = { 174.5999f, -2079.691f, 16.7487f };
			vLocal_591[1 /*3*/] = { 152.0048f, -2053.034f, 17.3217f };
			vLocal_591[2 /*3*/] = { 150.1924f, -2031.796f, 17.3217f };
			vLocal_591[3 /*3*/] = { 152.2747f, -2013.484f, 17.1417f };
			vLocal_591[4 /*3*/] = { 156.9549f, -2002.106f, 17.2518f };
			vLocal_591[5 /*3*/] = { 164.4116f, -1991.569f, 17.2641f };
			vLocal_591[6 /*3*/] = { 205.3133f, -1942.91f, 20.535f };
			vLocal_591[7 /*3*/] = { 211.3832f, -1932.955f, 21.5803f };
			vLocal_591[8 /*3*/] = { 208.533f, -1920.367f, 22.2848f };
			vLocal_591[9 /*3*/] = { 196.7893f, -1907.76f, 22.6872f };
			vLocal_591[10 /*3*/] = { 182.3722f, -1898.424f, 22.5606f };
			vLocal_591[11 /*3*/] = { 108.5148f, -1864.741f, 23.4672f };
			vLocal_591[12 /*3*/] = { 86.2217f, -1841.194f, 24.2874f };
			vLocal_591[13 /*3*/] = { 43.7092f, -1805.996f, 24.4549f };
			vLocal_591[14 /*3*/] = { 17.8062f, -1777.351f, 28.2925f };
			vLocal_591[15 /*3*/] = { 21.8941f, -1750.064f, 28.3031f };
			vLocal_591[16 /*3*/] = { 44.7469f, -1721.505f, 28.3031f };
			vLocal_591[17 /*3*/] = { 63.9396f, -1707.914f, 28.2608f };
			vLocal_591[18 /*3*/] = { 76.1903f, -1681.886f, 28.3242f };
			vLocal_591[19 /*3*/] = { 86.0975f, -1653.219f, 28.3469f };
			vLocal_591[20 /*3*/] = { 116.5378f, -1632.756f, 28.3471f };
			vLocal_591[21 /*3*/] = { 152.7263f, -1602.194f, 28.3415f };
			vLocal_591[22 /*3*/] = { 143.9074f, -1564.712f, 28.2093f };
			vLocal_591[23 /*3*/] = { 145.1265f, -1550.904f, 28.1529f };
			vLocal_591[24 /*3*/] = { 153.1621f, -1536.478f, 28.3099f };
			vLocal_591[25 /*3*/] = { 156.3295f, -1515.14f, 28.1416f };
			vLocal_591[26 /*3*/] = { 148.7433f, -1498.556f, 28.1416f };
			vLocal_591[27 /*3*/] = { 128.6626f, -1476.814f, 28.1416f };
			vLocal_591[28 /*3*/] = { 104.1582f, -1414.095f, 28.1921f };
			vLocal_591[29 /*3*/] = { 83.6966f, -1380.602f, 28.2915f };
			vLocal_591[30 /*3*/] = { 50.458f, -1383.531f, 28.2943f };
			vLocal_591[31 /*3*/] = { -1.9688f, -1383.943f, 28.3059f };
			vLocal_591[32 /*3*/] = { -24.7047f, -1377.866f, 28.1996f };
			vLocal_591[33 /*3*/] = { -92.3499f, -1377.083f, 28.3276f };
			vLocal_591[34 /*3*/] = { -130.9038f, -1387.612f, 28.4695f };
			vLocal_591[35 /*3*/] = { -148.5784f, -1398.707f, 29.0652f };
			vLocal_591[36 /*3*/] = { -148.0146f, -1415.724f, 29.7007f };
			vLocal_591[37 /*3*/] = { -140.9057f, -1431.51f, 29.8724f };
			vLocal_591[38 /*3*/] = { -172.1216f, -1469.894f, 31.0887f };
			vLocal_591[39 /*3*/] = { -200.9877f, -1510.344f, 30.632f };
			vLocal_591[40 /*3*/] = { -228.8574f, -1535.488f, 30.6189f };
			vLocal_591[41 /*3*/] = { -242.2845f, -1539.538f, 30.5592f };
			vLocal_591[42 /*3*/] = { -256.5187f, -1570.94f, 30.9427f };
			vLocal_591[43 /*3*/] = { -268.7609f, -1629.413f, 30.8488f };
			vLocal_591[44 /*3*/] = { -255.8852f, -1689.953f, 30.8488f };
			vLocal_591[45 /*3*/] = { -224.6088f, -1727.568f, 31.5576f };
			vLocal_591[46 /*3*/] = { -182.6528f, -1758.622f, 28.8952f };
			vLocal_591[47 /*3*/] = { -148.3479f, -1787.901f, 28.7988f };
			vLocal_591[48 /*3*/] = { -122.57f, -1807.999f, 27.3089f };
			vLocal_591[49 /*3*/] = { -73.0749f, -1876.611f, 7.596f };
			vLocal_591[50 /*3*/] = { -39.416f, -1901.59f, 9.9099f };
			vLocal_591[51 /*3*/] = { 7.5512f, -1955.098f, 4.4117f };
			vLocal_591[52 /*3*/] = { 55.3094f, -2021.311f, 0.4589f };
			vLocal_591[53 /*3*/] = { 69.4583f, -2095.662f, 0.2051f };
			vLocal_591[54 /*3*/] = { 49.8936f, -2146.708f, 1.5683f };
			vLocal_591[55 /*3*/] = { 41.0185f, -2157.943f, 4.4323f };
			vLocal_591[56 /*3*/] = { 24.7718f, -2164.335f, 8.1637f };
			vLocal_591[57 /*3*/] = { -2.2288f, -2158.396f, 9.2835f };
			vLocal_591[58 /*3*/] = { -22.7019f, -2158.668f, 9.3111f };
			vLocal_591[59 /*3*/] = { -38.4647f, -2199.598f, 6.8117f };
			vLocal_591[60 /*3*/] = { -45.3264f, -2212.231f, 6.8117f };
			vLocal_591[61 /*3*/] = { -55.3598f, -2222.49f, 6.8117f };
			vLocal_591[62 /*3*/] = { -82.3358f, -2223.918f, 6.8117f };
			vLocal_591[63 /*3*/] = { -131.381f, -2223.081f, 6.8117f };
			vLocal_591[64 /*3*/] = { -150.9629f, -2233.896f, 6.8117f };
			vLocal_591[65 /*3*/] = { -158.0284f, -2244.346f, 6.8117f };
			vLocal_591[66 /*3*/] = { -181.3241f, -2250.348f, 6.8117f };
			vLocal_591[67 /*3*/] = { -262.8565f, -2253.175f, 6.9858f };
			vLocal_591[68 /*3*/] = { -294.0698f, -2233.267f, 7.2625f };
			vLocal_591[69 /*3*/] = { -297.9966f, -2218.1f, 8.5029f };
			vLocal_591[70 /*3*/] = { -313.9771f, -2206.949f, 8.4925f };
			vLocal_591[71 /*3*/] = { -327.7408f, -2209.155f, 7.2109f };
			vLocal_591[72 /*3*/] = { -364.1004f, -2262.198f, 6.6082f };
			vLocal_591[73 /*3*/] = { -374.4983f, -2272.426f, 6.6082f };
			vLocal_591[74 /*3*/] = { -375.8295f, -2282.563f, 6.6082f };
			iLocal_1461 = 75;
			break;
		case 8:
			vLocal_591[0 /*3*/] = { -2653.049f, 1505.637f, 116.9031f };
			vLocal_591[1 /*3*/] = { -2663.594f, 1470.743f, 122.7177f };
			vLocal_591[2 /*3*/] = { -2681.781f, 1433.767f, 120.1581f };
			vLocal_591[3 /*3*/] = { -2701.294f, 1403.518f, 112.9536f };
			vLocal_591[4 /*3*/] = { -2717.157f, 1376.807f, 105.1303f };
			vLocal_591[5 /*3*/] = { -2748.094f, 1336.441f, 89.7583f };
			vLocal_591[6 /*3*/] = { -2772.662f, 1306.338f, 82.0139f };
			vLocal_591[7 /*3*/] = { -2807.116f, 1282.497f, 71.1255f };
			vLocal_591[8 /*3*/] = { -2860.727f, 1279.025f, 58.2654f };
			vLocal_591[9 /*3*/] = { -2904.519f, 1259.097f, 40.7003f };
			vLocal_591[10 /*3*/] = { -2921.85f, 1257.993f, 37.2144f };
			vLocal_591[11 /*3*/] = { -2945.241f, 1243.167f, 31.8372f };
			vLocal_591[12 /*3*/] = { -2971.91f, 1212.205f, 23.1993f };
			vLocal_591[13 /*3*/] = { -2993.662f, 1208.524f, 18.0748f };
			vLocal_591[14 /*3*/] = { -3038.551f, 1209.651f, 14.0096f };
			vLocal_591[15 /*3*/] = { -3107.971f, 1226.064f, 9.658f };
			vLocal_591[16 /*3*/] = { -3199.303f, 1252.489f, 4.3497f };
			vLocal_591[17 /*3*/] = { -3218.386f, 1252.134f, 2.8398f };
			vLocal_591[18 /*3*/] = { -3236.587f, 1234.213f, 2.2581f };
			vLocal_591[19 /*3*/] = { -3257.229f, 1188.7f, 1.6827f };
			vLocal_591[20 /*3*/] = { -3268.847f, 1110.996f, 1.1708f };
			vLocal_591[21 /*3*/] = { -3286.199f, 1046.93f, 2.2738f };
			vLocal_591[22 /*3*/] = { -3291.467f, 984.0225f, 2.3848f };
			vLocal_591[23 /*3*/] = { -3291.941f, 951.162f, 1.1346f };
			vLocal_591[24 /*3*/] = { -3284.428f, 937.3236f, 1.0801f };
			vLocal_591[25 /*3*/] = { -3266.242f, 925.3865f, 1.6379f };
			vLocal_591[26 /*3*/] = { -3234.646f, 874.3011f, 1.695f };
			vLocal_591[27 /*3*/] = { -3219.083f, 829.6504f, 1.2816f };
			vLocal_591[28 /*3*/] = { -3198.246f, 813.9434f, 2.7979f };
			vLocal_591[29 /*3*/] = { -3165.079f, 798.1581f, 6.5002f };
			vLocal_591[30 /*3*/] = { -3143.296f, 790.5193f, 7.0137f };
			vLocal_591[31 /*3*/] = { -3124.516f, 789.1387f, 16.9934f };
			vLocal_591[32 /*3*/] = { -3094.212f, 777.5895f, 18.5135f };
			vLocal_591[33 /*3*/] = { -3086.898f, 756.6077f, 19.5227f };
			vLocal_591[34 /*3*/] = { -3093.979f, 726.5751f, 20.3224f };
			vLocal_591[35 /*3*/] = { -3082.263f, 693.1727f, 15.8985f };
			vLocal_591[36 /*3*/] = { -3056.846f, 661.2524f, 9.0803f };
			vLocal_591[37 /*3*/] = { -3043.558f, 636.358f, 6.5869f };
			vLocal_591[38 /*3*/] = { -3024.625f, 583.9476f, 6.8377f };
			vLocal_591[39 /*3*/] = { -3019.437f, 554.1682f, 6.6729f };
			vLocal_591[40 /*3*/] = { -3021.381f, 512.9918f, 6.234f };
			vLocal_591[41 /*3*/] = { -3031.198f, 466.6764f, 5.5596f };
			vLocal_591[42 /*3*/] = { -3049.935f, 424.7576f, 5.5665f };
			vLocal_591[43 /*3*/] = { -3066.961f, 377.4491f, 6.0668f };
			vLocal_591[44 /*3*/] = { -3057.431f, 345.7499f, 8.5701f };
			vLocal_591[45 /*3*/] = { -3046.631f, 292.6304f, 18.9137f };
			vLocal_591[46 /*3*/] = { -3041.826f, 279.6342f, 16.9957f };
			vLocal_591[47 /*3*/] = { -3035.306f, 269.0156f, 14.7234f };
			vLocal_591[48 /*3*/] = { -3012.362f, 233.9675f, 15.2325f };
			vLocal_591[49 /*3*/] = { -3013.188f, 213.9026f, 15.268f };
			vLocal_591[50 /*3*/] = { -3011.671f, 196.2197f, 15.146f };
			vLocal_591[51 /*3*/] = { -3006.454f, 177.695f, 14.8855f };
			vLocal_591[52 /*3*/] = { -2994.663f, 154.9807f, 14.3746f };
			vLocal_591[53 /*3*/] = { -2979.672f, 136.2853f, 13.7377f };
			vLocal_591[54 /*3*/] = { -2950.832f, 112.3324f, 12.904f };
			vLocal_591[55 /*3*/] = { -2921.329f, 97.7186f, 12.7178f };
			vLocal_591[56 /*3*/] = { -2851.489f, 75.2672f, 13.5427f };
			vLocal_591[57 /*3*/] = { -2836.61f, 32.9254f, 12.8794f };
			vLocal_591[58 /*3*/] = { -2831.988f, 18.7339f, 10.4085f };
			vLocal_591[59 /*3*/] = { -2824.56f, -8.0105f, 6.1181f };
			vLocal_591[60 /*3*/] = { -2803.649f, -81.9439f, -0.221f };
			vLocal_591[61 /*3*/] = { -2780.207f, -96.5313f, 0.3584f };
			vLocal_591[62 /*3*/] = { -2736.673f, -109.0135f, 0.5296f };
			vLocal_591[63 /*3*/] = { -2700.451f, -141.5591f, 0.9655f };
			vLocal_591[64 /*3*/] = { -2671.83f, -175.5449f, 1.0133f };
			vLocal_591[65 /*3*/] = { -2630.613f, -198.3817f, 2.1479f };
			vLocal_591[66 /*3*/] = { -2547.985f, -249.0516f, 2.2801f };
			vLocal_591[67 /*3*/] = { -2473.847f, -295.0556f, 2.7219f };
			vLocal_591[68 /*3*/] = { -2434.094f, -326.3175f, 3.0194f };
			vLocal_591[69 /*3*/] = { -2410.113f, -331.2293f, 2.6013f };
			vLocal_591[70 /*3*/] = { -2376.031f, -335.9692f, 2.5363f };
			vLocal_591[71 /*3*/] = { -2356.186f, -344.7604f, 2.6766f };
			vLocal_591[72 /*3*/] = { -2327.246f, -365.7754f, 2.3142f };
			vLocal_591[73 /*3*/] = { -2276.542f, -398.5323f, 1.8233f };
			vLocal_591[74 /*3*/] = { -2230.823f, -415.3987f, 3.087f };
			vLocal_591[75 /*3*/] = { -2213.564f, -418.7813f, 5.5765f };
			vLocal_591[76 /*3*/] = { -2199.396f, -420.4765f, 11.8061f };
			vLocal_591[77 /*3*/] = { -2176.137f, -416.0254f, 12.2345f };
			vLocal_591[78 /*3*/] = { -2126.029f, -402.4269f, 11.7143f };
			vLocal_591[79 /*3*/] = { -2102.225f, -366.2369f, 11.8076f };
			vLocal_591[80 /*3*/] = { -2095.268f, -318.8827f, 12.0248f };
			vLocal_591[81 /*3*/] = { -2093.999f, -264.2969f, 18.7933f };
			vLocal_591[82 /*3*/] = { -2089.104f, -214.1321f, 19.5783f };
			vLocal_591[83 /*3*/] = { -2071.153f, -210.7178f, 21.0689f };
			vLocal_591[84 /*3*/] = { -2050.075f, -223.6322f, 25.6497f };
			vLocal_591[85 /*3*/] = { -2030.981f, -224.0641f, 27.9967f };
			vLocal_591[86 /*3*/] = { -1998.867f, -224.0556f, 31.1763f };
			vLocal_591[87 /*3*/] = { -1987.922f, -232.1616f, 32.9357f };
			vLocal_591[88 /*3*/] = { -1986.724f, -241.0943f, 33.9168f };
			vLocal_591[89 /*3*/] = { -1980.237f, -257.3627f, 33.6684f };
			vLocal_591[90 /*3*/] = { -1966.573f, -261.1625f, 34.9521f };
			vLocal_591[91 /*3*/] = { -1948.827f, -242.7568f, 34.8759f };
			vLocal_591[92 /*3*/] = { -1938.963f, -233.8106f, 35.8376f };
			vLocal_591[93 /*3*/] = { -1911.051f, -214.8513f, 35.2168f };
			vLocal_591[94 /*3*/] = { -1874.86f, -185.5185f, 37.115f };
			vLocal_591[95 /*3*/] = { -1864.559f, -180.1412f, 43.2547f };
			vLocal_591[96 /*3*/] = { -1850.851f, -185.8726f, 45.6611f };
			vLocal_591[97 /*3*/] = { -1834.413f, -189.1538f, 48.8693f };
			vLocal_591[98 /*3*/] = { -1815.983f, -200.1424f, 50.7411f };
			vLocal_591[99 /*3*/] = { -1805.788f, -203.853f, 51.7412f };
			vLocal_591[100 /*3*/] = { -1792.717f, -217.502f, 50.9357f };
			vLocal_591[101 /*3*/] = { -1774.695f, -229.8553f, 51.7138f };
			vLocal_591[102 /*3*/] = { -1756.903f, -238.1252f, 52.0989f };
			vLocal_591[103 /*3*/] = { -1736.251f, -241.4447f, 52.672f };
			vLocal_591[104 /*3*/] = { -1712.573f, -240.3414f, 53.0528f };
			vLocal_591[105 /*3*/] = { -1699.116f, -234.5364f, 54.4754f };
			vLocal_591[106 /*3*/] = { -1689.302f, -217.4817f, 56.5364f };
			vLocal_591[107 /*3*/] = { -1682.485f, -202.5944f, 56.595f };
			vLocal_591[108 /*3*/] = { -1680.894f, -188.3022f, 56.5344f };
			vLocal_591[109 /*3*/] = { -1682.963f, -173.7911f, 56.5401f };
			vLocal_591[110 /*3*/] = { -1689.333f, -162.1221f, 56.5802f };
			vLocal_591[111 /*3*/] = { -1702.223f, -155.7313f, 56.3958f };
			vLocal_591[112 /*3*/] = { -1709.647f, -161.5643f, 56.4539f };
			vLocal_591[113 /*3*/] = { -1715.474f, -168.1092f, 56.503f };
			vLocal_591[114 /*3*/] = { -1725.536f, -168.0596f, 56.7325f };
			vLocal_591[115 /*3*/] = { -1733.644f, -169.4988f, 57.5363f };
			vLocal_591[116 /*3*/] = { -1733.434f, -177.1803f, 58.3052f };
			vLocal_591[117 /*3*/] = { -1731.431f, -182.4709f, 57.4901f };
			vLocal_591[118 /*3*/] = { -1730.025f, -191.5667f, 57.3605f };
			iLocal_1461 = 119;
			break;
		case 9:
			vLocal_591[0 /*3*/] = { -1463.912f, 2789.826f, 20.0877f };
			vLocal_591[1 /*3*/] = { -1477.148f, 2845.476f, 25.45f };
			vLocal_591[2 /*3*/] = { -1506.965f, 2872.34f, 30.2234f };
			vLocal_591[3 /*3*/] = { -1577.26f, 2932.705f, 31.917f };
			vLocal_591[4 /*3*/] = { -1591.626f, 2997.577f, 32.261f };
			vLocal_591[5 /*3*/] = { -1639.98f, 3059.17f, 29.948f };
			vLocal_591[6 /*3*/] = { -1645.001f, 3178.496f, 29.4591f };
			vLocal_591[7 /*3*/] = { -1655.642f, 3226.443f, 33.7777f };
			vLocal_591[8 /*3*/] = { -1694.704f, 3249.402f, 32.0673f };
			vLocal_591[9 /*3*/] = { -1725.478f, 3262.473f, 31.5433f };
			vLocal_591[10 /*3*/] = { -1951.812f, 3391.708f, 31.1172f };
			vLocal_591[11 /*3*/] = { -1984.661f, 3398.118f, 31.1172f };
			vLocal_591[12 /*3*/] = { -2011.397f, 3398.739f, 30.4796f };
			vLocal_591[13 /*3*/] = { -2034.775f, 3383.387f, 30.2602f };
			vLocal_591[14 /*3*/] = { -2065.773f, 3384.615f, 30.3096f };
			vLocal_591[15 /*3*/] = { -2109.027f, 3382.438f, 30.9568f };
			vLocal_591[16 /*3*/] = { -2137.183f, 3393.041f, 31.1325f };
			vLocal_591[17 /*3*/] = { -2143.365f, 3397.595f, 32.7541f };
			vLocal_591[18 /*3*/] = { -2161.112f, 3410.701f, 31.6593f };
			vLocal_591[19 /*3*/] = { -2187.906f, 3415.621f, 31.7261f };
			vLocal_591[20 /*3*/] = { -2199.671f, 3426.611f, 31.6199f };
			vLocal_591[21 /*3*/] = { -2217.014f, 3434.519f, 31.6187f };
			vLocal_591[22 /*3*/] = { -2237.547f, 3433.59f, 31.6194f };
			vLocal_591[23 /*3*/] = { -2251.789f, 3432.903f, 32.4218f };
			vLocal_591[24 /*3*/] = { -2256.215f, 3432.564f, 31.059f };
			vLocal_591[25 /*3*/] = { -2276.618f, 3439.096f, 31.0393f };
			vLocal_591[26 /*3*/] = { -2292.811f, 3446.875f, 30.8394f };
			vLocal_591[27 /*3*/] = { -2315.683f, 3443.764f, 30.3699f };
			vLocal_591[28 /*3*/] = { -2341.133f, 3432.404f, 28.5928f };
			vLocal_591[29 /*3*/] = { -2365.814f, 3428.073f, 26.8742f };
			vLocal_591[30 /*3*/] = { -2381.983f, 3423.883f, 30.3016f };
			vLocal_591[31 /*3*/] = { -2394.041f, 3416.595f, 30.5506f };
			vLocal_591[32 /*3*/] = { -2530.589f, 3337.515f, 30.4319f };
			vLocal_591[33 /*3*/] = { -2548.137f, 3339.134f, 28.6846f };
			vLocal_591[34 /*3*/] = { -2562.008f, 3341.58f, 28.0224f };
			vLocal_591[35 /*3*/] = { -2588.223f, 3351.021f, 24.6836f };
			vLocal_591[36 /*3*/] = { -2594.071f, 3356.079f, 22.1251f };
			vLocal_591[37 /*3*/] = { -2595.745f, 3365.915f, 17.9894f };
			vLocal_591[38 /*3*/] = { -2595.793f, 3377.574f, 12.8038f };
			vLocal_591[39 /*3*/] = { -2608.662f, 3392.612f, 13.1174f };
			vLocal_591[40 /*3*/] = { -2623.495f, 3407.143f, 13.6065f };
			vLocal_591[41 /*3*/] = { -2653.212f, 3424.437f, 13.7192f };
			vLocal_591[42 /*3*/] = { -2699.876f, 3437.248f, 12.9223f };
			vLocal_591[43 /*3*/] = { -2721.948f, 3443.959f, 11.9598f };
			vLocal_591[44 /*3*/] = { -2779.478f, 3456.656f, 10.6559f };
			vLocal_591[45 /*3*/] = { -2804.644f, 3470.18f, 9.7878f };
			vLocal_591[46 /*3*/] = { -2825.771f, 3501.169f, 7.9953f };
			vLocal_591[47 /*3*/] = { -2837.044f, 3518.584f, 7.4085f };
			vLocal_591[48 /*3*/] = { -2864.506f, 3523.516f, 7.1469f };
			vLocal_591[49 /*3*/] = { -2913.54f, 3523.989f, 7.2342f };
			vLocal_591[50 /*3*/] = { -2944.496f, 3519.349f, 7.215f };
			vLocal_591[51 /*3*/] = { -2957.936f, 3509.118f, 7.5977f };
			vLocal_591[52 /*3*/] = { -2968.712f, 3494.814f, 8.0967f };
			vLocal_591[53 /*3*/] = { -2982.313f, 3472.155f, 8.5156f };
			vLocal_591[54 /*3*/] = { -2997.359f, 3440.916f, 8.5745f };
			vLocal_591[55 /*3*/] = { -3006.354f, 3441.868f, 8.3125f };
			vLocal_591[56 /*3*/] = { -3010.171f, 3442.161f, 7.8361f };
			vLocal_591[57 /*3*/] = { -3016.127f, 3442.632f, 6.1649f };
			vLocal_591[58 /*3*/] = { -3044.019f, 3439.902f, 2.6837f };
			vLocal_591[59 /*3*/] = { -3083.78f, 3434.43f, 0.6736f };
			vLocal_591[60 /*3*/] = { -3108.864f, 3426.914f, 0.5969f };
			vLocal_591[61 /*3*/] = { -3121.052f, 3417.526f, 0.8856f };
			vLocal_591[62 /*3*/] = { -3128.933f, 3401.378f, 0.723f };
			vLocal_591[63 /*3*/] = { -3127.117f, 3385.608f, -0.0289f };
			vLocal_591[64 /*3*/] = { -3120.614f, 3370.245f, -0.3007f };
			vLocal_591[65 /*3*/] = { -3120.843f, 3355.337f, -0.3184f };
			vLocal_591[66 /*3*/] = { -3131.457f, 3337.666f, -0.4124f };
			vLocal_591[67 /*3*/] = { -3130.055f, 3331.133f, 0.453f };
			vLocal_591[68 /*3*/] = { -3126.044f, 3311.187f, 1.9264f };
			vLocal_591[69 /*3*/] = { -3121.625f, 3297.583f, 4.969f };
			vLocal_591[70 /*3*/] = { -3114.625f, 3288.416f, 5.7302f };
			vLocal_591[71 /*3*/] = { -3109.753f, 3286.727f, 5.3114f };
			vLocal_591[72 /*3*/] = { -3094.209f, 3285.138f, 3.4169f };
			vLocal_591[73 /*3*/] = { -3078.461f, 3294.387f, 3.5013f };
			vLocal_591[74 /*3*/] = { -3064.696f, 3299.328f, 4.393f };
			vLocal_591[75 /*3*/] = { -3042.485f, 3298.661f, 4.2975f };
			vLocal_591[76 /*3*/] = { -3012.822f, 3298.938f, 8.3148f };
			vLocal_591[77 /*3*/] = { -3005.919f, 3298.79f, 8.8372f };
			vLocal_591[78 /*3*/] = { -2979.524f, 3296.409f, 9.4458f };
			vLocal_591[79 /*3*/] = { -2965.909f, 3290.236f, 10.2551f };
			vLocal_591[80 /*3*/] = { -2956.04f, 3279.582f, 10.3873f };
			vLocal_591[81 /*3*/] = { -2941.26f, 3267.032f, 10.8597f };
			vLocal_591[82 /*3*/] = { -2928.623f, 3259.063f, 10.4515f };
			vLocal_591[83 /*3*/] = { -2922.033f, 3248.532f, 9.6349f };
			vLocal_591[84 /*3*/] = { -2917.52f, 3233.934f, 9.5718f };
			vLocal_591[85 /*3*/] = { -2907.681f, 3215.423f, 9.8787f };
			vLocal_591[86 /*3*/] = { -2879.219f, 3175.582f, 9.9335f };
			vLocal_591[87 /*3*/] = { -2837.914f, 3137.461f, 9.104f };
			vLocal_591[88 /*3*/] = { -2778.595f, 3095.414f, 7.9147f };
			vLocal_591[89 /*3*/] = { -2755.339f, 3093.435f, 7.9238f };
			vLocal_591[90 /*3*/] = { -2732.754f, 3091.263f, 11.8101f };
			vLocal_591[91 /*3*/] = { -2715.51f, 3088.629f, 18.9392f };
			vLocal_591[92 /*3*/] = { -2704.912f, 3088.065f, 22.5439f };
			vLocal_591[93 /*3*/] = { -2698.571f, 3088.829f, 24.5249f };
			vLocal_591[94 /*3*/] = { -2688.089f, 3088.755f, 26.9138f };
			vLocal_591[95 /*3*/] = { -2668.202f, 3087.626f, 31.0204f };
			vLocal_591[96 /*3*/] = { -2663.953f, 3087.523f, 31.2972f };
			vLocal_591[97 /*3*/] = { -2649.556f, 3076.861f, 31.3129f };
			vLocal_591[98 /*3*/] = { -2625.872f, 3048.057f, 31.3104f };
			vLocal_591[99 /*3*/] = { -2598.408f, 3019.676f, 31.4648f };
			vLocal_591[100 /*3*/] = { -2586.226f, 3015.642f, 31.7198f };
			vLocal_591[101 /*3*/] = { -2560.566f, 2996.848f, 37.5706f };
			vLocal_591[102 /*3*/] = { -2552.737f, 2986.765f, 36.5308f };
			vLocal_591[103 /*3*/] = { -2545.417f, 2969.709f, 35.8487f };
			vLocal_591[104 /*3*/] = { -2540.366f, 2955.316f, 35.0142f };
			vLocal_591[105 /*3*/] = { -2532.989f, 2947.141f, 34.4408f };
			vLocal_591[106 /*3*/] = { -2527.326f, 2945.037f, 33.7632f };
			vLocal_591[107 /*3*/] = { -2510.012f, 2935.014f, 31.8324f };
			vLocal_591[108 /*3*/] = { -2506.855f, 2927.783f, 31.8324f };
			vLocal_591[109 /*3*/] = { -2502f, 2923.38f, 31.8656f };
			vLocal_591[110 /*3*/] = { -2453.283f, 2895.443f, 31.827f };
			vLocal_591[111 /*3*/] = { -2448.633f, 2893.234f, 31.8105f };
			vLocal_591[112 /*3*/] = { -2441.97f, 2894.076f, 31.8161f };
			vLocal_591[113 /*3*/] = { -2435.053f, 2899.211f, 31.8101f };
			vLocal_591[114 /*3*/] = { -2419.494f, 2912.728f, 31.8101f };
			vLocal_591[115 /*3*/] = { -2410.999f, 2920.665f, 31.8101f };
			vLocal_591[116 /*3*/] = { -2402.981f, 2926.109f, 31.8101f };
			vLocal_591[117 /*3*/] = { -2388.711f, 2931.548f, 31.8101f };
			vLocal_591[118 /*3*/] = { -2376.195f, 2935.068f, 31.8101f };
			vLocal_591[119 /*3*/] = { -2362.174f, 2937.172f, 31.8101f };
			vLocal_591[120 /*3*/] = { -2349.693f, 2937.485f, 31.8097f };
			vLocal_591[121 /*3*/] = { -2335.747f, 2935.854f, 31.8095f };
			vLocal_591[122 /*3*/] = { -2318.942f, 2929.66f, 31.7445f };
			vLocal_591[123 /*3*/] = { -2297.421f, 2923.055f, 31.402f };
			vLocal_591[124 /*3*/] = { -2273.065f, 2913.495f, 31.1485f };
			vLocal_591[125 /*3*/] = { -2255.359f, 2902.834f, 31.3591f };
			vLocal_591[126 /*3*/] = { -2229.69f, 2883.807f, 31.236f };
			vLocal_591[127 /*3*/] = { -2202.925f, 2869.314f, 31.1578f };
			vLocal_591[128 /*3*/] = { -2183.306f, 2857.042f, 31.1936f };
			vLocal_591[129 /*3*/] = { -2163.49f, 2841.464f, 31.3816f };
			vLocal_591[130 /*3*/] = { -2149.862f, 2823.891f, 31.4544f };
			vLocal_591[131 /*3*/] = { -2144.587f, 2808.735f, 31.4497f };
			vLocal_591[132 /*3*/] = { -2132.177f, 2795.02f, 31.7241f };
			vLocal_591[133 /*3*/] = { -2108.141f, 2785.463f, 31.7808f };
			vLocal_591[134 /*3*/] = { -2068.579f, 2784.021f, 31.4615f };
			vLocal_591[135 /*3*/] = { -2051.136f, 2791.31f, 31.825f };
			vLocal_591[136 /*3*/] = { -2042.002f, 2795.728f, 31.2093f };
			vLocal_591[137 /*3*/] = { -2024.121f, 2799.866f, 31.5836f };
			vLocal_591[138 /*3*/] = { -2004.372f, 2797.404f, 31.7003f };
			vLocal_591[139 /*3*/] = { -1976.047f, 2791.383f, 31.5104f };
			vLocal_591[140 /*3*/] = { -1947.483f, 2778.565f, 31.1414f };
			vLocal_591[141 /*3*/] = { -1936.379f, 2768.897f, 31.1447f };
			vLocal_591[142 /*3*/] = { -1929.758f, 2758.106f, 30.6489f };
			vLocal_591[143 /*3*/] = { -1925.991f, 2751.949f, 25.9925f };
			vLocal_591[144 /*3*/] = { -1921.41f, 2746.268f, 24.8392f };
			vLocal_591[145 /*3*/] = { -1915.137f, 2739.659f, 23.8019f };
			vLocal_591[146 /*3*/] = { -1900.307f, 2727.201f, 21.1878f };
			vLocal_591[147 /*3*/] = { -1883.745f, 2715.262f, 19.6892f };
			vLocal_591[148 /*3*/] = { -1875.748f, 2711.08f, 12.552f };
			vLocal_591[149 /*3*/] = { -1867.896f, 2703.139f, 3.0778f };
			vLocal_591[150 /*3*/] = { -1861.963f, 2692.423f, 3.1018f };
			vLocal_591[151 /*3*/] = { -1857.476f, 2683.575f, 3.2905f };
			vLocal_591[152 /*3*/] = { -1848.774f, 2668.988f, 2.0379f };
			vLocal_591[153 /*3*/] = { -1842.34f, 2663.985f, 1.5316f };
			vLocal_591[154 /*3*/] = { -1838.295f, 2661.605f, 0.5979f };
			vLocal_591[155 /*3*/] = { -1815.526f, 2665.483f, 0.7053f };
			vLocal_591[156 /*3*/] = { -1805.632f, 2669.156f, 2.2314f };
			vLocal_591[157 /*3*/] = { -1786.138f, 2670.602f, 2.2725f };
			vLocal_591[158 /*3*/] = { -1771.023f, 2668.491f, 2.1361f };
			vLocal_591[159 /*3*/] = { -1760.869f, 2665.975f, 1.8861f };
			vLocal_591[160 /*3*/] = { -1755.284f, 2664.367f, 1.7509f };
			vLocal_591[161 /*3*/] = { -1748.707f, 2663.003f, 1.9587f };
			vLocal_591[162 /*3*/] = { -1736.189f, 2659.886f, 1.9917f };
			vLocal_591[163 /*3*/] = { -1728.476f, 2658.183f, 1.9464f };
			vLocal_591[164 /*3*/] = { -1722.725f, 2657.996f, 2.0025f };
			vLocal_591[165 /*3*/] = { -1719.555f, 2657.884f, 1.4411f };
			vLocal_591[166 /*3*/] = { -1715.606f, 2657.734f, 0.7234f };
			vLocal_591[167 /*3*/] = { -1710.382f, 2658.301f, 0.4668f };
			vLocal_591[168 /*3*/] = { -1707.359f, 2659.483f, 0.282f };
			vLocal_591[169 /*3*/] = { -1703.736f, 2660.578f, 0.5126f };
			vLocal_591[170 /*3*/] = { -1697.277f, 2662.122f, 0.7382f };
			vLocal_591[171 /*3*/] = { -1694.411f, 2662.705f, 1.5014f };
			vLocal_591[172 /*3*/] = { -1690.597f, 2663.54f, 1.8258f };
			vLocal_591[173 /*3*/] = { -1683.022f, 2665.116f, 1.8626f };
			vLocal_591[174 /*3*/] = { -1677.613f, 2664.286f, 1.8642f };
			vLocal_591[175 /*3*/] = { -1675.041f, 2662.993f, 1.525f };
			vLocal_591[176 /*3*/] = { -1669.615f, 2661.57f, 1.3865f };
			vLocal_591[177 /*3*/] = { -1660.996f, 2660.514f, 1.5346f };
			vLocal_591[178 /*3*/] = { -1654.274f, 2660.621f, 1.3163f };
			vLocal_591[179 /*3*/] = { -1652.602f, 2661.721f, 0.846f };
			vLocal_591[180 /*3*/] = { -1650.772f, 2663.604f, 0.3205f };
			vLocal_591[181 /*3*/] = { -1648.723f, 2666.767f, -0.3498f };
			vLocal_591[182 /*3*/] = { -1646.614f, 2670.389f, -0.2246f };
			vLocal_591[183 /*3*/] = { -1645.298f, 2672.659f, 0.4074f };
			vLocal_591[184 /*3*/] = { -1643.886f, 2675.479f, 1.3415f };
			vLocal_591[185 /*3*/] = { -1643.052f, 2678.978f, 1.7816f };
			vLocal_591[186 /*3*/] = { -1643.81f, 2684.713f, 1.9387f };
			vLocal_591[187 /*3*/] = { -1644.436f, 2692.437f, 2.6905f };
			vLocal_591[188 /*3*/] = { -1643.396f, 2700.886f, 4.7337f };
			vLocal_591[189 /*3*/] = { -1642.371f, 2702.699f, 4.6934f };
			vLocal_591[190 /*3*/] = { -1634.92f, 2708.292f, 4.7769f };
			vLocal_591[191 /*3*/] = { -1622.842f, 2712.665f, 4.7364f };
			vLocal_591[192 /*3*/] = { -1616.741f, 2718.592f, 4.7278f };
			vLocal_591[193 /*3*/] = { -1615.26f, 2726.292f, 4.782f };
			vLocal_591[194 /*3*/] = { -1615.372f, 2740.197f, 5.415f };
			vLocal_591[195 /*3*/] = { -1615.563f, 2747.673f, 7.4045f };
			vLocal_591[196 /*3*/] = { -1615.097f, 2751.565f, 8.8844f };
			vLocal_591[197 /*3*/] = { -1611.762f, 2755.532f, 10.7072f };
			vLocal_591[198 /*3*/] = { -1608.429f, 2757.899f, 11.9354f };
			vLocal_591[199 /*3*/] = { -1603.668f, 2759.287f, 13.1858f };
			vLocal_591[200 /*3*/] = { -1595.852f, 2761.264f, 15.6171f };
			vLocal_591[201 /*3*/] = { -1591.107f, 2762.998f, 17.0786f };
			vLocal_591[202 /*3*/] = { -1588.631f, 2765.09f, 17.4527f };
			vLocal_591[203 /*3*/] = { -1583.653f, 2766.244f, 17.432f };
			vLocal_591[204 /*3*/] = { -1575.535f, 2763.518f, 17.2576f };
			vLocal_591[205 /*3*/] = { -1568.713f, 2759.889f, 17.0294f };
			vLocal_591[206 /*3*/] = { -1560.931f, 2756.537f, 16.5327f };
			vLocal_591[207 /*3*/] = { -1550.389f, 2752.672f, 16.8426f };
			vLocal_591[208 /*3*/] = { -1539.915f, 2745.988f, 16.6513f };
			vLocal_591[209 /*3*/] = { -1329.159f, 2560.402f, 16.6908f };
			vLocal_591[210 /*3*/] = { -1312.168f, 2545.424f, 17.302f };
			vLocal_591[211 /*3*/] = { -1299.685f, 2536.006f, 17.8598f };
			vLocal_591[212 /*3*/] = { -1294.188f, 2532.739f, 18.3548f };
			vLocal_591[213 /*3*/] = { -1288.149f, 2528.114f, 18.6202f };
			iLocal_1461 = 214;
			break;
		case 10:
			vLocal_591[0 /*3*/] = { 1007.392f, -677.4196f, 55.6986f };
			vLocal_591[1 /*3*/] = { 1015.88f, -640.8702f, 57.6189f };
			vLocal_591[2 /*3*/] = { 1028.693f, -521.0793f, 60.0037f };
			vLocal_591[3 /*3*/] = { 1001.013f, -469.0658f, 62.3685f };
			vLocal_591[4 /*3*/] = { 1024.273f, -438.0688f, 64.0854f };
			vLocal_591[5 /*3*/] = { 1099.331f, -371.6267f, 66.0863f };
			vLocal_591[6 /*3*/] = { 1154.278f, -350.7854f, 66.0453f };
			vLocal_591[7 /*3*/] = { 1196.453f, -317.2407f, 68.006f };
			vLocal_591[8 /*3*/] = { 1228.658f, -285.5526f, 69.5564f };
			vLocal_591[9 /*3*/] = { 1269.14f, -280.8539f, 78.9299f };
			vLocal_591[10 /*3*/] = { 1303.481f, -279.4128f, 89.277f };
			vLocal_591[11 /*3*/] = { 1307.264f, -261.738f, 93.4534f };
			vLocal_591[12 /*3*/] = { 1275.53f, -228.7392f, 97.2897f };
			vLocal_591[13 /*3*/] = { 1280.287f, -201.123f, 100.2999f };
			vLocal_591[14 /*3*/] = { 1316.522f, -182.0543f, 106.8589f };
			vLocal_591[15 /*3*/] = { 1328.355f, -161.1792f, 109.7738f };
			vLocal_591[16 /*3*/] = { 1330.984f, -124.4583f, 116.3178f };
			vLocal_591[17 /*3*/] = { 1349.718f, -112.3109f, 120.3794f };
			vLocal_591[18 /*3*/] = { 1440.839f, -126.4933f, 136.0253f };
			vLocal_591[19 /*3*/] = { 1547.464f, -88.492f, 155.8418f };
			vLocal_591[20 /*3*/] = { 1572.396f, -73.2005f, 158.7627f };
			vLocal_591[21 /*3*/] = { 1617.536f, -76.5607f, 164.2157f };
			vLocal_591[22 /*3*/] = { 1634.688f, -86.0398f, 166.32f };
			vLocal_591[23 /*3*/] = { 1652.054f, -86.2994f, 169.5492f };
			vLocal_591[24 /*3*/] = { 1677.106f, -69.6387f, 172.8701f };
			vLocal_591[25 /*3*/] = { 1708.012f, -81.5238f, 176.1925f };
			vLocal_591[26 /*3*/] = { 1727.578f, -106.2123f, 177.8113f };
			vLocal_591[27 /*3*/] = { 1743.88f, -104.5237f, 180.5338f };
			vLocal_591[28 /*3*/] = { 1787.022f, -75.6841f, 189.1488f };
			vLocal_591[29 /*3*/] = { 1830.548f, -88.8782f, 185.5151f };
			vLocal_591[30 /*3*/] = { 1869.148f, -84.2897f, 188.3576f };
			vLocal_591[31 /*3*/] = { 1908.125f, -94.0947f, 189.7598f };
			vLocal_591[32 /*3*/] = { 1935.856f, -70.0841f, 194.3318f };
			vLocal_591[33 /*3*/] = { 1965.012f, -81.9638f, 206.0977f };
			vLocal_591[34 /*3*/] = { 1994.382f, -81.4886f, 210.8208f };
			vLocal_591[35 /*3*/] = { 2015.317f, -15.1936f, 200.4373f };
			vLocal_591[36 /*3*/] = { 2045.597f, -7.7503f, 209.3502f };
			vLocal_591[37 /*3*/] = { 2097.736f, 3.6562f, 214.3764f };
			vLocal_591[38 /*3*/] = { 2170.912f, -23.0015f, 227.7495f };
			vLocal_591[39 /*3*/] = { 2216.6f, -39.4283f, 202.1804f };
			vLocal_591[40 /*3*/] = { 2265.253f, -42.4669f, 176.595f };
			vLocal_591[41 /*3*/] = { 2317.634f, -62.7793f, 143.5891f };
			vLocal_591[42 /*3*/] = { 2361.621f, -88.1377f, 114.5316f };
			vLocal_591[43 /*3*/] = { 2415.541f, -127.203f, 88.2837f };
			vLocal_591[44 /*3*/] = { 2442.605f, -132.4298f, 88.5436f };
			vLocal_591[45 /*3*/] = { 2467.73f, -87.5151f, 90.4025f };
			vLocal_591[46 /*3*/] = { 2478.927f, -49.3336f, 91.7194f };
			vLocal_591[47 /*3*/] = { 2514.862f, -54.7729f, 90.5497f };
			vLocal_591[48 /*3*/] = { 2535.467f, -44.4498f, 95.4292f };
			vLocal_591[49 /*3*/] = { 2551.987f, -14.4109f, 96.8787f };
			vLocal_591[50 /*3*/] = { 2564.848f, 7.4979f, 95.322f };
			vLocal_591[51 /*3*/] = { 2574.244f, 28.346f, 94.1519f };
			vLocal_591[52 /*3*/] = { 2583.104f, 64.6646f, 97.2344f };
			vLocal_591[53 /*3*/] = { 2590.313f, 90.8608f, 96.7709f };
			vLocal_591[54 /*3*/] = { 2605.615f, 146.4206f, 97.0373f };
			vLocal_591[55 /*3*/] = { 2608.438f, 159.9902f, 97.7789f };
			vLocal_591[56 /*3*/] = { 2616.801f, 193.4394f, 97.8768f };
			vLocal_591[57 /*3*/] = { 2620.917f, 208.1355f, 99.8613f };
			vLocal_591[58 /*3*/] = { 2622.716f, 214.0569f, 100.3944f };
			vLocal_591[59 /*3*/] = { 2625.155f, 223.4091f, 100.4454f };
			vLocal_591[60 /*3*/] = { 2628.51f, 238.1807f, 98.0427f };
			vLocal_591[61 /*3*/] = { 2631.146f, 251.6104f, 99.134f };
			vLocal_591[62 /*3*/] = { 2644.033f, 286.1281f, 96.6342f };
			vLocal_591[63 /*3*/] = { 2668.01f, 344.2533f, 93.6781f };
			vLocal_591[64 /*3*/] = { 2674.79f, 475.0252f, 93.3655f };
			vLocal_591[65 /*3*/] = { 2677.321f, 563.7356f, 92.1778f };
			vLocal_591[66 /*3*/] = { 2676.736f, 657.8879f, 88.5073f };
			vLocal_591[67 /*3*/] = { 2689.552f, 707.0382f, 83.2467f };
			vLocal_591[68 /*3*/] = { 2694.685f, 719.9797f, 79.118f };
			vLocal_591[69 /*3*/] = { 2705.136f, 742.6617f, 63.8294f };
			vLocal_591[70 /*3*/] = { 2732.751f, 770.7942f, 48.8289f };
			vLocal_591[71 /*3*/] = { 2754.752f, 779.1329f, 37.7362f };
			vLocal_591[72 /*3*/] = { 2795.073f, 775.9935f, 19.6025f };
			vLocal_591[73 /*3*/] = { 2815.378f, 772.0298f, 18.5162f };
			vLocal_591[74 /*3*/] = { 2823.101f, 760.8618f, 18.5399f };
			vLocal_591[75 /*3*/] = { 2829.417f, 747.6486f, 18.4988f };
			vLocal_591[76 /*3*/] = { 2838.551f, 742.6433f, 18.5283f };
			vLocal_591[77 /*3*/] = { 2852.99f, 747.0413f, 18.3301f };
			vLocal_591[78 /*3*/] = { 2866.382f, 755.1819f, 18.1503f };
			vLocal_591[79 /*3*/] = { 2876.903f, 759.4967f, 16.8825f };
			vLocal_591[80 /*3*/] = { 2883.941f, 767.9843f, 17.9021f };
			vLocal_591[81 /*3*/] = { 2890.169f, 774.4565f, 18.7225f };
			vLocal_591[82 /*3*/] = { 2898.975f, 775.8782f, 19.8196f };
			vLocal_591[83 /*3*/] = { 2908.946f, 777.8163f, 22.677f };
			vLocal_591[84 /*3*/] = { 2911.956f, 780.126f, 23.7715f };
			vLocal_591[85 /*3*/] = { 2917.168f, 783.8945f, 24.2316f };
			vLocal_591[86 /*3*/] = { 2924.857f, 790.0166f, 24.7335f };
			vLocal_591[87 /*3*/] = { 2934.356f, 798.6711f, 23.9277f };
			vLocal_591[88 /*3*/] = { 2940.85f, 803.635f, 23.7534f };
			vLocal_591[89 /*3*/] = { 2944.641f, 806.6476f, 23.5292f };
			vLocal_591[90 /*3*/] = { 2951.772f, 813.8921f, 22.0205f };
			iLocal_1461 = 91;
			break;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1461)
	{
		vVar1 = { vLocal_591[iVar0 /*3*/] };
		vVar4 = { vLocal_591[iVar0 + 1 /*3*/] };
		if (!func_31(vVar4, 0f, 0f, 0f, 0))
		{
			fLocal_1243[iVar0] = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vVar4, true);
			fLocal_1462 = (fLocal_1462 + fLocal_1243[iVar0]);
		}
		iVar0++;
	}
	fLocal_1464 = ((fLocal_1462 * 70f) / 100f);
	func_1062(vLocal_591[0 /*3*/]);
}

void func_1062(vector3 vParam0)
{
	Global_1574650.f_6 = { vParam0 };
}

void func_1063()
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

bool func_1064(int iParam0)
{
	int iVar0;

	iVar0 = func_50(2480, -1, 0);
	return MISC::IS_BIT_SET(iVar0, iParam0);
}

bool func_1065()
{
	return true;
}

int func_1066()
{
	return Local_80;
}

int func_1067(int iParam0)
{
	return Local_279[iParam0 /*8*/];
}

void func_1068(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_519(PLAYER::PLAYER_ID());
		Global_1674635.f_4 = func_946();
		Global_1674635.f_5 = func_945();
		if (func_42(PLAYER::PLAYER_ID()) || func_43(PLAYER::PLAYER_ID()))
		{
			Global_1674635.f_6 = 1;
		}
		else
		{
			Global_1674635.f_6 = 0;
		}
		Global_1674635.f_1 = func_1119(bParam9);
		Global_1674635.f_8 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674635.f_9 = func_986(bParam0);
		Global_1674635.f_10 = iParam1;
		Global_1674635.f_17 = Global_1674635.f_2;
		Global_1674635.f_18 = Global_1674635.f_2;
		Global_1674635.f_19 = func_977();
		Global_1674635.f_21 = (Global_1674635.f_8 - Global_1674635.f_7);
		if (func_131(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674635.f_23 = func_986(func_233(1));
		}
		Global_1674635.f_24 = func_1118(PLAYER::PLAYER_ID());
		Global_1674635.f_28 = func_987(PLAYER::PLAYER_ID());
		if (Global_1674635.f_24 > 2)
		{
			Global_1674635.f_24 = 2;
		}
		func_1116(iVar0);
	}
	else
	{
		iVar0 = func_145(PLAYER::PLAYER_ID());
	}
	if (func_152(iVar0))
	{
		Global_1674374.f_2 = func_946();
		Global_1674374.f_3 = func_945();
		Global_1674374.f_50 = iParam4;
		Global_1674374.f_51 = iParam5;
		Global_1674374.f_10 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674374.f_20 = (Global_1674374.f_10 - Global_1674374.f_9);
		Global_1674374.f_12 = iParam1;
		Global_1674374.f_19 = func_1112(iVar0, bParam0, func_1115(bParam3));
		if (bParam0)
		{
			Global_1674374.f_11 = 1;
		}
		else
		{
			Global_1674374.f_11 = 0;
		}
		if ((func_41(PLAYER::PLAYER_ID()) || func_39(PLAYER::PLAYER_ID())) || func_45(PLAYER::PLAYER_ID()))
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
			Global_1674374.f_45 = func_983(func_181(), iParam2);
			Global_1674374.f_47 = iParam7;
			Global_1674374.f_46 = iParam6;
			Global_1674374.f_52 = func_1111(func_181(), iParam2);
		}
		func_1109(iVar0);
	}
	else if (func_151(iVar0))
	{
		Global_1674428.f_2 = func_946();
		Global_1674428.f_3 = func_945();
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
		if ((func_41(PLAYER::PLAYER_ID()) || func_39(PLAYER::PLAYER_ID())) || func_45(PLAYER::PLAYER_ID()))
		{
			Global_1674428.f_8 = 1;
		}
		else
		{
			Global_1674428.f_8 = 0;
		}
		func_1107(iVar0);
	}
	else if (func_150(iVar0))
	{
		Global_1674491.f_2 = func_946();
		Global_1674491.f_3 = func_945();
		Global_1674491.f_9 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674491.f_18 = (Global_1674491.f_9 - Global_1674491.f_8);
		Global_1674491.f_11 = iParam1;
		Global_1674491.f_7 = func_977();
		Global_1674491.f_42 = func_980(func_52(), 5);
		bVar1 = PLAYER::PLAYER_ID();
		iVar2 = func_174(bVar1);
		Global_1674491.f_28 = iVar2;
		Global_1674491.f_29 = func_986((func_914(bVar1) || func_913(bVar1)));
		Global_1674491.f_30 = func_986(func_1106(bVar1));
		Global_1674491.f_32 = func_986(func_911(bVar1));
		Global_1674491.f_33 = func_986(func_912(bVar1));
		Global_1674491.f_34 = func_986(func_1105(bVar1));
		Global_1674491.f_35 = func_986(func_910(0, bVar1) == 1);
		Global_1674491.f_36 = func_986(func_1104(bVar1));
		Global_1674491.f_37 = func_986(func_1103(bVar1));
		Global_1674491.f_38 = func_986(func_1102(bVar1));
		Global_1674491.f_39 = func_986(func_290(bVar1, iVar2, 0));
		Global_1674491.f_40 = func_986(func_290(bVar1, iVar2, 2));
		Global_1674491.f_41 = func_986(func_290(bVar1, iVar2, 1));
		if (func_1101(bVar1))
		{
			Global_1674491.f_31 = 2;
		}
		else if (func_1100(bVar1))
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
		if ((func_41(PLAYER::PLAYER_ID()) || func_39(PLAYER::PLAYER_ID())) || func_45(PLAYER::PLAYER_ID()))
		{
			Global_1674491.f_6 = 1;
		}
		else
		{
			Global_1674491.f_6 = 0;
		}
		Global_1674491.f_21 = -2;
		Global_1674491.f_22 = -2;
		func_1098(iVar0);
	}
	else if (func_149(iVar0))
	{
		Global_1674535.f_2 = func_946();
		Global_1674535.f_3 = func_945();
		if ((func_41(PLAYER::PLAYER_ID()) || func_39(PLAYER::PLAYER_ID())) || func_45(PLAYER::PLAYER_ID()))
		{
			Global_1674535.f_6 = 1;
		}
		else
		{
			Global_1674535.f_6 = 0;
		}
		Global_1674535.f_9 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674535.f_10 = func_986(bParam0);
		Global_1674535.f_11 = iParam1;
		Global_1674535.f_17 = func_978(func_247());
		Global_1674535.f_18 = (Global_1674535.f_9 - Global_1674535.f_8);
		Global_1674535.f_20 = iParam8;
		Global_1674535.f_21 = -2;
		Global_1674535.f_22 = -2;
		Global_1674535.f_27 = func_1097();
		Global_1674535.f_29 = func_50(6107, -1, 0);
		Global_1674535.f_30 = func_50(6103, -1, 0);
		Global_1674535.f_31 = func_50(6104, -1, 0);
		Global_1674535.f_32 = func_50(6106, -1, 0);
		Global_1674535.f_33 = func_50(6105, -1, 0);
		Global_1674535.f_34 = func_50(6108, -1, 0);
		Global_1674535.f_36 = func_986(func_233(1));
		Global_1674535.f_37 = func_1095();
		func_1085();
		func_1083(iVar0);
	}
	else if (func_148(iVar0))
	{
		Global_1674589.f_2 = func_946();
		Global_1674589.f_3 = func_945();
		if ((func_41(PLAYER::PLAYER_ID()) || func_39(PLAYER::PLAYER_ID())) || func_45(PLAYER::PLAYER_ID()))
		{
			Global_1674589.f_6 = 1;
		}
		else
		{
			Global_1674589.f_6 = 0;
		}
		Global_1674589.f_9 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674589.f_10 = func_986(bParam0);
		Global_1674589.f_11 = iParam1;
		Global_1674589.f_18 = (Global_1674589.f_9 - Global_1674589.f_8);
		Global_1674589.f_20 = iParam8;
		Global_1674589.f_23 = Global_786547;
		Global_1674589.f_36 = Global_786547.f_1;
		Global_1674589.f_24 = func_50(6157, -1, 0);
		Global_1674589.f_25 = func_50(6162, -1, 0);
		Global_1674589.f_26 = func_50(6163, -1, 0);
		Global_1674589.f_27 = func_986((((func_976() || func_975()) || func_974()) || func_973(PLAYER::PLAYER_ID())));
		Global_1674589.f_28 = func_50(6164, -1, 0);
		Global_1674589.f_29 = func_986(func_972());
		Global_1674589.f_35 = -1;
		Global_1674589.f_38 = -1;
		Global_1674589.f_39 = Global_1674589.f_4;
		Global_1674589.f_40 = Global_1674589.f_5;
		Global_1674589.f_41 = func_946();
		Global_1674589.f_42 = func_986(func_233(1));
		Global_1674589.f_44 = Global_1674589.f_18;
		func_1081(iVar0);
	}
	else if (func_140(iVar0))
	{
		if (Global_1674725.f_2 == -1)
		{
			Global_1674725.f_2 = func_946();
		}
		if (Global_1674725.f_3 == -1)
		{
			Global_1674725.f_3 = func_945();
		}
		if ((func_41(PLAYER::PLAYER_ID()) || func_39(PLAYER::PLAYER_ID())) || func_45(PLAYER::PLAYER_ID()))
		{
			Global_1674725.f_6 = 1;
		}
		else
		{
			Global_1674725.f_6 = 0;
		}
		Global_1674725.f_1 = func_1119(0);
		Global_1674725.f_7 = func_977();
		Global_1674725.f_9 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674725.f_10 = func_986(bParam0);
		Global_1674725.f_11 = iParam1;
		if (func_181() != -1)
		{
			Global_1674725.f_17 = func_768(func_181());
		}
		Global_1674725.f_18 = (Global_1674725.f_9 - Global_1674725.f_8);
		Global_1674725.f_19 = Global_2537071.f_6579;
		Global_1674725.f_28 = func_987(PLAYER::PLAYER_ID());
		Global_1674725.f_29 = func_986(func_1080(PLAYER::PLAYER_ID()));
		Global_1674725.f_30 = func_986(func_1079(PLAYER::PLAYER_ID()));
		Global_1674725.f_31 = func_954(PLAYER::PLAYER_ID());
		if (func_131(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674725.f_33 = func_986(func_233(1));
		}
		if (Global_1674725.f_34 > 2)
		{
			Global_1674725.f_34 = 2;
		}
		func_1077(iVar0);
	}
	else if (func_146(iVar0))
	{
		Global_1674671.f_2 = func_946();
		Global_1674671.f_3 = func_945();
		if ((func_41(PLAYER::PLAYER_ID()) || func_39(PLAYER::PLAYER_ID())) || func_45(PLAYER::PLAYER_ID()))
		{
			Global_1674671.f_6 = 1;
		}
		else
		{
			Global_1674671.f_6 = 0;
		}
		Global_1674671.f_1 = func_1119(0);
		Global_1674671.f_9 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674671.f_10 = func_986(bParam0);
		Global_1674671.f_11 = iParam1;
		Global_1674671.f_18 = (Global_1674671.f_9 - Global_1674671.f_8);
		Global_1674671.f_28 = func_987(PLAYER::PLAYER_ID());
		if (Global_1674671.f_28)
		{
			Global_1674671.f_29 = func_971(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1674671.f_29 = 0;
		}
		Global_1674671.f_30 = func_955(PLAYER::PLAYER_ID(), 4, -1);
		Global_1674671.f_31 = func_954(PLAYER::PLAYER_ID());
		Global_1674671.f_32 = func_986(func_953(PLAYER::PLAYER_ID()));
		Global_1674671.f_33 = func_986(func_952(PLAYER::PLAYER_ID()));
		Global_1674671.f_34 = func_986(func_951(PLAYER::PLAYER_ID()));
		Global_1674671.f_35 = func_986(func_950(PLAYER::PLAYER_ID()));
		Global_1674671.f_36 = func_949(PLAYER::PLAYER_ID());
		Global_1674671.f_37 = func_948(PLAYER::PLAYER_ID());
		Global_1674671.f_39 = func_947(PLAYER::PLAYER_ID());
		if (func_131(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674671.f_41 = func_986(func_233(1));
		}
		if (Global_1674671.f_42 > 2)
		{
			Global_1674671.f_42 = 2;
		}
		func_1075(iVar0);
	}
	else if (func_139(iVar0))
	{
		Global_1674809.f_2 = func_946();
		Global_1674809.f_3 = func_945();
		Global_1674809.f_4 = func_989(func_181());
		Global_1674809.f_5 = func_988(func_181());
		if ((func_41(PLAYER::PLAYER_ID()) || func_39(PLAYER::PLAYER_ID())) || func_45(PLAYER::PLAYER_ID()))
		{
			Global_1674809.f_6 = 1;
		}
		else
		{
			Global_1674809.f_6 = 0;
		}
		Global_1674809.f_7 = func_977();
		Global_1674809.f_9 = NETWORK::_0xF12E6CD06C73D69E();
		Global_1674809.f_10 = func_986(bParam0);
		Global_1674809.f_11 = iParam1;
		if (func_247() != -1)
		{
			Global_1674809.f_17 = func_768(func_247());
		}
		Global_1674809.f_18 = (Global_1674809.f_9 - Global_1674809.f_8);
		Global_1674809.f_21 = 1;
		Global_1674809.f_22 = 1;
		Global_1674809.f_25 = func_1074(PLAYER::PLAYER_ID());
		Global_1674809.f_27 = func_986(func_944(PLAYER::PLAYER_ID()));
		Global_1674809.f_28 = func_942(21, -1);
		Global_1674809.f_29 = func_986(func_1073(PLAYER::PLAYER_ID()));
		func_1071(iVar0);
	}
	else if (func_138(iVar0))
	{
		Global_1674884.f_6 = func_989(func_181());
		Global_1674884.f_7 = func_988(func_181());
		if (func_131(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674884.f_8 = func_986(func_233(1));
		}
		Global_1674884.f_10 = func_977();
		Global_1674884.f_11 = 1;
		Global_1674884.f_13 = (NETWORK::_0xF12E6CD06C73D69E() - Global_1702973);
		Global_1674884.f_14 = iParam1;
		Global_1674884.f_19 = 1;
		Global_1674884.f_20 = 1;
		func_1069(iVar0);
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
			if ((func_41(PLAYER::PLAYER_ID()) || func_39(PLAYER::PLAYER_ID())) || func_45(PLAYER::PLAYER_ID()))
			{
				Global_1674356.f_4 = 1;
			}
		}
	}
}

void func_1069(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	UNK_0x9CA4259CC8E87599(&Global_1674884);
	func_1070();
}

void func_1070()
{
	struct<36> Var0;

	Global_1674884 = { Var0 };
	Global_1674884.f_23 = 0;
	Global_1674884.f_22 = 0;
	Global_1674884.f_21 = 0;
}

void func_1071(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	UNK_0x62CC3DEF90BBBB82(&Global_1674809);
	func_1072();
}

void func_1072()
{
	struct<31> Var0;

	Global_1674809 = { Var0 };
}

bool func_1073(int iParam0)
{
	if (iParam0 != func_389())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_369.f_2, 6);
	}
	return false;
}

int func_1074(bool bParam0)
{
	if (func_145(bParam0) == 243)
	{
		return func_143(bParam0);
	}
	return -1;
}

void func_1075(int iParam0)
{
	STATS::_0x2D7A9B577E72385E(&Global_1674671);
	func_1076();
}

void func_1076()
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

void func_1077(int iParam0)
{
	STATS::_0x830C3A44EB3F2CF9(&Global_1674725);
	func_1078();
}

void func_1078()
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

bool func_1079(int iParam0)
{
	if (iParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_322.f_1, 0);
}

bool func_1080(int iParam0)
{
	if (iParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0 /*876*/].f_274.f_322.f_1, 19);
}

void func_1081(int iParam0)
{
	STATS::_PLAYSTATS_H2_FMPREP_END(&Global_1674589);
	func_1082();
}

void func_1082()
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

void func_1083(int iParam0)
{
	STATS::_PLAYSTATS_SMUG_MISSION_ENDED(&Global_1674535);
	func_1084();
}

void func_1084()
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

void func_1085()
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
		iVar2 = (iVar0 + func_929(12));
		func_928(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323615[iVar1 /*141*/].f_66 != 0 && func_1087(Global_1323615[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2537071.f_896 != iVar1)
				{
					if (func_1086(Global_1323615[iVar1 /*141*/].f_66))
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

bool func_1086(int iParam0)
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

bool func_1087(int iParam0, bool bParam1)
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
		if (!func_1094())
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
		if ((((!func_1093() && !func_1092()) && !func_1091()) && !func_1090()) && !func_1094())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("CARBONRS")) || iParam0 == joaat("KHAMELION"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_1091())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_1089(iParam0))
		{
			return false;
		}
	}
	if (!func_1088(iParam0))
	{
		return false;
	}
	return true;
}

bool func_1088(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_337())
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

bool func_1089(int iParam0)
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

bool func_1090()
{
	return false;
}

bool func_1091()
{
	return true;
}

bool func_1092()
{
	return true;
}

bool func_1093()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_1094()
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

int func_1095()
{
	int iVar0;

	iVar0 = func_1096();
	if (!func_175())
	{
		if (func_181() != func_389())
		{
			iVar0 = func_1118(func_181()) + 1;
		}
	}
	return iVar0;
}

int func_1096()
{
	return func_1118(PLAYER::PLAYER_ID()) + 1;
}

int func_1097()
{
	return func_50(6113, -1, 0);
}

void func_1098(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Global_1674491);
	func_1099();
}

void func_1099()
{
	struct<44> Var0;

	Global_1674491 = { Var0 };
	Global_1674491.f_23 = 0;
	Global_1674491.f_24 = 0;
	Global_1674491.f_16 = 0;
}

bool func_1100(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_351, 12);
}

bool func_1101(bool bParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_351, 13);
}

bool func_1102(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if ((MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_259, 12) || MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_259, 13)) || MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_259, 14))
		{
			return true;
		}
	}
	return false;
}

bool func_1103(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if ((MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_259, 0) || MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_259, 1)) || MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_259, 2))
		{
			return true;
		}
	}
	return false;
}

bool func_1104(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if (((((MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_259, 3) || MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_259, 4)) || MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_259, 5)) || MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_259, 0)) || MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_259, 1)) || MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_259, 2))
		{
			return true;
		}
	}
	return false;
}

bool func_1105(bool bParam0)
{
	if (bParam0 != func_389())
	{
		if ((MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_259, 6) || MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_259, 7)) || MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_259, 8))
		{
			return true;
		}
	}
	return false;
}

bool func_1106(bool bParam0)
{
	if (bParam0 == func_389())
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1590535[bParam0 /*876*/].f_274.f_351, 9);
}

void func_1107(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0x7D8BA05688AD64C7(&Global_1674428);
	func_1108();
}

void func_1108()
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

void func_1109(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0xBF371CD2B64212FD(&Global_1674374);
	func_1110();
}

void func_1110()
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

int func_1111(bool bParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = func_290(bParam0, iParam1, 2);
	bVar1 = func_290(bParam0, iParam1, 1);
	bVar2 = func_290(bParam0, iParam1, 0);
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

int func_1112(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (func_161(iParam0))
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
	else if (func_985(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_155(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17679;
			iVar1 = 20;
		}
	}
	else if (func_152(iParam0))
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
		STATS::_PLAYSTATS_EARNED_MC_POINTS(func_989(func_181()), func_988(func_181()), func_946(), func_945(), iVar1, iVar0);
	}
	func_1114(iVar0);
	func_1113(iVar0);
	return iVar0;
}

void func_1113(int iParam0)
{
	int iVar0;

	iVar0 = func_50(3968, -1, 0);
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
	func_159(3968, iVar0, -1, 1, 0);
}

void func_1114(int iParam0)
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

bool func_1115(bool bParam0)
{
	if (bParam0)
	{
		return false;
	}
	if (func_41(PLAYER::PLAYER_ID()) || func_45(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

void func_1116(int iParam0)
{
	STATS::_0x316DB59CD14C1774(&Global_1674635);
	func_1117();
}

void func_1117()
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

int func_1118(bool bParam0)
{
	if (func_119(bParam0) == func_389())
	{
		return 0;
	}
	return Global_1628237[bParam0 /*615*/].f_11.f_19;
}

int func_1119(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_519(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = func_145(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_1124(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		case 150:
			iVar2 = func_1122(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		case 237:
			iVar2 = func_1121(PLAYER::PLAYER_ID());
			if (func_141(func_142(PLAYER::PLAYER_ID())))
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
			iVar2 = func_1121(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		case 238:
			iVar2 = func_1120(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		case 249:
			iVar2 = func_1120(PLAYER::PLAYER_ID());
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

int func_1120(int iParam0)
{
	if (func_145(PLAYER::PLAYER_ID()) == 238 || func_145(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_499;
	}
	return -1;
}

int func_1121(int iParam0)
{
	if (func_145(PLAYER::PLAYER_ID()) == 237 || func_145(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_498;
	}
	return -1;
}

int func_1122(int iParam0)
{
	return func_1123(iParam0, 150);
}

int func_1123(int iParam0, int iParam1)
{
	if (func_519(iParam0) == iParam1)
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_496;
	}
	return -1;
}

int func_1124(int iParam0)
{
	return func_1123(iParam0, 236);
}

bool func_1125(bool bParam0)
{
	if (func_1128(1))
	{
		return true;
	}
	if (Global_2537071.f_5124.f_41)
	{
		Global_2537071.f_5124.f_41 = 0;
		return true;
	}
	if (bParam0)
	{
		if (func_247() == func_389() || !func_1274(func_247(), 0, 1))
		{
			return true;
		}
	}
	if (!func_1037(PLAYER::PLAYER_ID()))
	{
		if (func_1127(PLAYER::PLAYER_ID()) && func_1126())
		{
			return true;
		}
	}
	return false;
}

bool func_1126()
{
	switch (func_1036(func_1031(PLAYER::PLAYER_ID())))
	{
		case 11:
		case 14:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1127(bool bParam0)
{
	if (bParam0 != func_389() && func_1274(bParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[bParam0 /*421*/].f_310, 4);
	}
	return false;
}

bool func_1128(bool bParam0)
{
	bool bVar0;

	if (!func_179(1))
	{
		bVar0 = false;
		if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_57 != func_389())
		{
			if (func_1274(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_57, 0, 1))
			{
				if ((Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_24 == 4 || Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_24 == 8) || Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_858(func_145(PLAYER::PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_240(31);
				if (func_152(func_145(PLAYER::PLAYER_ID())))
				{
					func_240(81);
				}
				if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_57 != func_389() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_57))
				{
					Global_1626725 = func_86(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_163(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_57))
					{
						func_240(88);
					}
				}
				else
				{
					Global_1626725 = 1;
				}
				Global_1626709 = { Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_104 };
			}
			return true;
		}
	}
	return false;
}

void func_1129()
{
	if (MISC::IS_BIT_SET(Global_1574650.f_1, 6))
	{
		func_862();
		MISC::CLEAR_BIT(&(Global_1574650.f_1), 6);
	}
	if (!MISC::IS_BIT_SET(Global_1574650.f_1, 7))
	{
		if (MISC::IS_BIT_SET(Global_1574650.f_1, 4) || MISC::IS_BIT_SET(Global_1574650.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_559()) && func_1274(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1574650.f_1), 7);
				func_621("FME_PASINT", 30000);
				func_620(1);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1574650.f_1, 17))
		{
			if (func_44() && !func_364())
			{
				MISC::CLEAR_BIT(&(Global_1574650.f_1), 17);
				MISC::SET_BIT(&(Global_1574650.f_1), 16);
			}
		}
	}
	if (!MISC::IS_BIT_SET(Global_1574650.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2537071.f_795, 2)) && func_1274(PLAYER::PLAYER_ID(), 1, 1)) && !Global_73825) && !Global_58693) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_1146())
			{
				func_621("AMEV_GA_RP", -1);
				if (func_145(PLAYER::PLAYER_ID()) != 200)
				{
					func_620(1);
				}
				MISC::SET_BIT(&(Global_1574650.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_42(PLAYER::PLAYER_ID()))
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
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_559()) && func_1274(PLAYER::PLAYER_ID(), 1, 1)) && !func_363(PLAYER::PLAYER_ID(), 21)) && !func_363(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1574650.f_1), 9);
			func_1145(0);
			func_621("FME_TBL00", -1);
			func_620(1);
		}
	}
	if (func_47(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_BIT_SET(Global_1574650.f_1, 18))
		{
			if ((func_363(PLAYER::PLAYER_ID(), 21) && MISC::IS_BIT_SET(Global_1574650.f_1, 20)) && !MISC::IS_BIT_SET(Global_1574650.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1574650.f_1), 18);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1574650.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_559()) && func_1274(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !Global_2537071.f_5057)
			{
				MISC::CLEAR_BIT(&(Global_1574650.f_1), 18);
				MISC::SET_BIT(&(Global_1574650.f_1), 19);
				func_621("AMTT_RPAS", -1);
				func_620(1);
			}
		}
	}
	if (((((func_47(PLAYER::PLAYER_ID()) && !func_46(PLAYER::PLAYER_ID())) && func_519(PLAYER::PLAYER_ID()) != 146) && !func_366(PLAYER::PLAYER_ID())) && !func_1144(PLAYER::PLAYER_ID())) && !func_1140())
	{
		if (func_847(func_519(PLAYER::PLAYER_ID())))
		{
			PLAYER::_0xFAC75988A7D078D3(PLAYER::PLAYER_ID());
		}
		if (!MISC::IS_BIT_SET(Global_1574650.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1574650.f_1), 22);
		}
		if (func_43(PLAYER::PLAYER_ID()) || func_845())
		{
			if (!MISC::IS_BIT_SET(Global_1574650.f_1, 10))
			{
				if (func_1138(func_519(PLAYER::PLAYER_ID())))
				{
					if (func_49(0) && !Global_2391045)
					{
						MISC::SET_BIT(&(Global_1574650.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_713(1);
						MISC::SET_BIT(&(Global_1574650.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1574650.f_1), 10);
			}
		}
		if (func_42(PLAYER::PLAYER_ID()))
		{
			if (!MISC::IS_BIT_SET(Global_1574650.f_1, 11))
			{
				if (!Global_98796.f_8)
				{
					MISC::SET_BIT(&(Global_1574650.f_1), 12);
					func_759(1);
				}
				if (!func_1137())
				{
					MISC::SET_BIT(&(Global_1574650.f_1), 13);
					func_846();
				}
				if (!Global_2391045)
				{
					MISC::SET_BIT(&(Global_1574650.f_1), 14);
					if (func_49(0) && !Global_2391045)
					{
						MISC::SET_BIT(&(Global_1574650.f_1), 9);
					}
					func_713(1);
				}
				MISC::SET_BIT(&(Global_1574650.f_1), 11);
			}
		}
		else
		{
			func_1135(0);
		}
	}
	else
	{
		func_1135(1);
	}
	func_1130();
	if (func_844(func_519(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1574650.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1574650.f_1), 21);
	}
	if (((func_44() && !func_364()) || func_363(PLAYER::PLAYER_ID(), 21)) || func_363(PLAYER::PLAYER_ID(), 25))
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

void func_1130()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_559())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_786(iVar2))
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
				func_1131(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!MISC::IS_BIT_SET(Global_1574650.f_1, 26))
	{
		func_22(&(Global_1574650.f_22));
		MISC::SET_BIT(&(Global_1574650.f_1), 26);
	}
}

void func_1131(int iParam0, int iParam1)
{
	if (!func_24(&(Global_1574650.f_22)))
	{
		func_388(&(Global_1574650.f_22), 0, 0);
	}
	else if (func_23(&(Global_1574650.f_22), iParam1, 0))
	{
		if (func_608() > 0)
		{
			func_1134(iParam0);
			if (func_492("AMEV_LBD_HELP"))
			{
				HUD::CLEAR_HELP(true);
			}
			func_22(&(Global_1574650.f_22));
		}
	}
	else
	{
		func_1133(0);
		func_1132();
	}
}

void func_1132()
{
	Global_2537071.f_4532 = 0;
}

void func_1133(int iParam0)
{
	Global_1377170.f_68 = iParam0;
}

void func_1134(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			func_113(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_1135(bool bParam0)
{
	if ((MISC::IS_BIT_SET(Global_1574650.f_1, 11) || (MISC::IS_BIT_SET(Global_1574650.f_1, 10) && bParam0)) || (MISC::IS_BIT_SET(Global_1574650.f_1, 22) && bParam0))
	{
		if (MISC::IS_BIT_SET(Global_1574650.f_1, 12))
		{
			MISC::CLEAR_BIT(&(Global_1574650.f_1), 12);
			func_759(0);
		}
		if (MISC::IS_BIT_SET(Global_1574650.f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1574650.f_1), 13);
			func_1136();
		}
		if (MISC::IS_BIT_SET(Global_1574650.f_1, 14) && !func_144(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Global_1574650.f_1), 14);
			func_713(0);
		}
		MISC::CLEAR_BIT(&(Global_1574650.f_1), 11);
		MISC::CLEAR_BIT(&(Global_1574650.f_1), 10);
		MISC::CLEAR_BIT(&(Global_1574650.f_1), 22);
	}
}

void func_1136()
{
	MISC::CLEAR_BIT(&(Global_2537071.f_4962), 0);
}

bool func_1137()
{
	return MISC::IS_BIT_SET(Global_2537071.f_4962, 0);
}

bool func_1138(int iParam0)
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
			return func_42(PLAYER::PLAYER_ID());
		case 133:
			return (func_845() || func_1139(func_578()));
		default:
			break;
	}
	return false;
}

bool func_1139(int iParam0)
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

bool func_1140()
{
	if (((((((((func_679() || func_479()) || func_678()) || func_446()) || (func_675() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_1143() && !func_1142())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_1141() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return true;
	}
	return false;
}

int func_1141()
{
	return Global_968397;
}

bool func_1142()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 27);
}

bool func_1143()
{
	if (func_671() || func_670())
	{
		return Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_98 == 8;
	}
	return false;
}

bool func_1144(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (((func_44() && !func_364()) || func_363(PLAYER::PLAYER_ID(), 21)) || func_363(PLAYER::PLAYER_ID(), 25))
		{
			return true;
		}
		if (func_24(&(Global_1574650.f_13)))
		{
			if (!func_23(&(Global_1574650.f_13), Global_262145.f_14, 0))
			{
				return true;
			}
			func_22(&(Global_1574650.f_13));
		}
	}
	else if (MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 10))
	{
		return true;
	}
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_1, 9);
}

void func_1145(int iParam0)
{
	int iVar0;

	iVar0 = func_50(2534, -1, 0);
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
	func_159(2534, iVar0, -1, 1, 0);
}

bool func_1146()
{
	bool bVar0;

	if (!func_24(&(Global_1574650.f_15)))
	{
		func_388(&(Global_1574650.f_15), 0, 0);
		Global_1574650.f_17 = 0;
	}
	else if (func_23(&(Global_1574650.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1574650.f_17)))
		{
			bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1574650.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
			{
				if (func_1274(bVar0, 1, 1) && func_1147(bVar0, 6))
				{
					if (SYSTEM::VDIST(func_218(PLAYER::PLAYER_ID()), func_218(bVar0)) < 80f)
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
			func_22(&(Global_1574650.f_15));
		}
	}
	return false;
}

bool func_1147(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_719() != 0)
	{
		return false;
	}
	if (!func_210(bParam0))
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

bool func_1148()
{
	return Global_1574650.f_24;
}

bool func_1149(int iParam0)
{
	return !func_1150(iParam0);
}

bool func_1150(int iParam0)
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
			if (func_363(PLAYER::PLAYER_ID(), 7))
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
			if (func_363(PLAYER::PLAYER_ID(), 7))
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
			if (func_363(PLAYER::PLAYER_ID(), 7))
			{
				return false;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 1))
			{
				return false;
			}
			break;
		case 15:
			if (func_1151(4))
			{
				return false;
			}
			if (func_363(PLAYER::PLAYER_ID(), 7))
			{
				return false;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 1))
			{
				return false;
			}
			break;
		case 17:
			if (func_1151(4))
			{
				return false;
			}
			if (func_363(PLAYER::PLAYER_ID(), 7))
			{
				return false;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 1))
			{
				return false;
			}
			break;
		case 16:
			if (func_1151(4))
			{
				return false;
			}
			if (func_363(PLAYER::PLAYER_ID(), 7))
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
			if (func_1151(4))
			{
				return false;
			}
			if (func_363(PLAYER::PLAYER_ID(), 7))
			{
				return false;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_26, 1))
			{
				return false;
			}
			break;
		case 19:
			if (func_1151(4))
			{
				return false;
			}
			if (func_363(PLAYER::PLAYER_ID(), 7))
			{
				return false;
			}
			break;
		case 20:
			if (func_1151(4))
			{
				return false;
			}
			if (func_363(PLAYER::PLAYER_ID(), 7))
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

bool func_1151(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1274(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
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

bool func_1152()
{
	var uVar0;

	func_1156(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return true;
		}
	}
	if (func_1155())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_1154())
	{
		return true;
	}
	if (func_1153(159))
	{
		if (!func_679())
		{
			return true;
		}
	}
	if (func_1153(157))
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	if (func_717() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_717()) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_1153(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1154()
{
	return Global_2460680;
}

bool func_1155()
{
	return Global_2450632.f_593;
}

void func_1156(var uParam0)
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
					func_1157(iVar0);
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

void func_1157(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_1274(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_1158(iVar4, &bVar5))
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

bool func_1158(int iParam0, bool bParam1)
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

void func_1159()
{
	SYSTEM::WAIT(0);
}

void func_1160()
{
	int iVar0;

	if (MISC::IS_BIT_SET(iLocal_538, 0))
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&iLocal_538, 0);
	}
	if (MISC::IS_BIT_SET(Local_80.f_1, 5) || MISC::IS_BIT_SET(Local_80.f_1, 12))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_184.f_3))
		{
			if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_80.f_184.f_3)))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK::NET_TO_PED(Local_80.f_184.f_3)))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_80.f_184.f_2), false))
					{
						TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_80.f_184.f_3));
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(Local_80.f_184.f_7)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(Local_80.f_184.f_7), false))
						{
							TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_80.f_184.f_3), NETWORK::NET_TO_VEH(Local_80.f_184.f_2), 0, PLAYER::GET_PLAYER_PED(Local_80.f_184.f_7), 0f, 0f, 0f, 8, 20f, 1000f, -1f, 60, 50, -1082130432 /* Float: -1f */, 0);
						}
						else
						{
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_184.f_3), 2048, true);
							TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_80.f_184.f_3), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_80.f_184.f_3), true), 10000f, 999999, false, false);
						}
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_80.f_184.f_3), true);
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0) || MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 6))
		{
			if (func_735())
			{
				func_733();
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_538, 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2003))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2003, false))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_2003, false, false, false, false, false, false, false, false);
				MISC::CLEAR_BIT(&iLocal_538, 3);
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_484())
		{
			func_658(PLAYER::PLAYER_ID(), 1, 0, 0);
			func_485();
		}
	}
	func_769(24, 0);
	func_1220(0);
	if (!MISC::IS_BIT_SET(iLocal_537, 24))
	{
		if (Local_80.f_197 == 2)
		{
			func_1169(1, 0);
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_750(136, 0, MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 2));
		}
		else
		{
			func_750(136, 0, 0);
		}
	}
	else if (Local_80.f_197 == 2)
	{
		func_1169(1, 0);
	}
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_553)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_555);
	}
	if (Local_80.f_197 == 2)
	{
		if (MISC::IS_BIT_SET(Global_1574650.f_1, 8))
		{
			func_862();
		}
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 136)
		{
			Global_1590535[PLAYER::PLAYER_ID() /*876*/] = -1;
		}
	}
	if (MISC::IS_BIT_SET(iLocal_536, 6))
	{
		GRAPHICS::ANIMPOSTFX_STOP("pennedIn");
		GRAPHICS::ANIMPOSTFX_PLAY("PennedInOut", 0, false);
		MISC::CLEAR_BIT(&iLocal_536, 6);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Inside_Bubble_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_Player_Outside_Bubble_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
	}
	func_811(&iLocal_2716);
	func_1168();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_807();
	}
	func_818(0);
	func_614(0, 136);
	PAD::_0xCB0360EFEFB2580D(0);
	if (MISC::IS_BIT_SET(iLocal_537, 11))
	{
		if (!MISC::IS_BIT_SET(iLocal_537, 12))
		{
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
			AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_STOP");
		}
	}
	if (Local_80.f_197 != 2)
	{
		if (func_1152())
		{
			Local_2722.f_5 = 5;
		}
		else if (func_808(2, 0, 1, 0, 0))
		{
			Local_2722.f_5 = 6;
		}
		else if (func_133() == PLAYER::PLAYER_ID())
		{
			Local_2722.f_5 = 1;
		}
		else
		{
			Local_2722.f_5 = 2;
		}
		Local_2722 = Local_80.f_179;
		Local_2722.f_1 = Local_80.f_180;
		Local_2722.f_4 = Local_80.f_181;
		Local_2722.f_3 = Local_80.f_183;
		Local_2722.f_10 = (NETWORK::_0xF12E6CD06C73D69E() - Local_2722.f_9);
		func_1166(Local_2722, -1, -1, -1, -1, -1, -1);
	}
	else
	{
		Global_1674374.f_25 = Local_80.f_181;
		Global_1674356.f_2 = Local_80.f_179;
		Global_1674356.f_3 = Local_80.f_180;
		func_1164(Global_1674356, -1, -1, -1, -1);
		if (!MISC::IS_BIT_SET(iLocal_537, 31))
		{
			if (NETWORK::PARTICIPANT_ID_TO_INT() > -1)
			{
				func_1068(0, 4, 0, !MISC::IS_BIT_SET(Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0), -1, -1, -1, -1, -1, 0);
			}
		}
	}
	if (!func_325())
	{
		if (Local_2722.f_6 > 0)
		{
			if (Local_2722.f_5 == 1)
			{
				if (Local_80.f_197 != 2)
				{
					func_1163();
				}
			}
		}
	}
	func_863();
	func_784(0);
	func_429(0);
	if (func_427(PLAYER::PLAYER_ID()))
	{
		func_872(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::CAN_KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
	}
	func_1162(0);
	MISC::CLEAR_BIT(&iLocal_536, 18);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (MISC::IS_BIT_SET(iLocal_543, iVar0))
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
			{
				NETWORK::_0x13F1FCB111B820B0(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0);
			}
		}
		iVar0++;
	}
	func_865(1);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
	if (MISC::IS_BIT_SET(iLocal_538, 2))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
			MISC::CLEAR_BIT(&iLocal_538, 2);
		}
	}
	func_1161();
}

void func_1161()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1162(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1), 6);
	}
}

void func_1163()
{
	MISC::SET_BIT(&(Global_2537071.f_1734), 18);
}

void func_1164(struct<14> Param0, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	struct<15> Var1;
	struct<19> Var16;
	struct<19> Var35;
	struct<16> Var54;
	struct<17> Var70;
	struct<15> Var87;
	struct<17> Var102;
	struct<17> Var119;

	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
		{
			Var1 = { Param0 };
			Var1.f_14 = iParam14;
			STATS::_0x7B18DA61F6BAE9D5(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
		{
			Var16 = { Param0 };
			Var16.f_14 = Global_1674356.f_14;
			Var16.f_15 = iParam14;
			Var16.f_16 = iParam15;
			Var16.f_17 = iParam16;
			Var16.f_18 = iParam17;
			STATS::_0x06EAF70AE066441E(&Var16);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
		{
			Var35 = { Param0 };
			Var35.f_14 = Global_1674356.f_14;
			Var35.f_15 = iParam14;
			Var35.f_16 = iParam15;
			Var35.f_17 = iParam16;
			Var35.f_18 = iParam17;
			STATS::_0x14EDA9EE27BD1626(&Var35);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
		{
			Var54 = { Param0 };
			Var54.f_14 = Global_1674356.f_14;
			Var54.f_15 = iParam14;
			STATS::_0x930F504203F561C9(&Var54);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
		{
			Var70 = { Param0 };
			Var70.f_14 = Global_1674356.f_14;
			Var70.f_15 = iParam14;
			Var70.f_16 = iParam15;
			STATS::_0xE3261D791EB44ACB(&Var70);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
		{
			Var87 = { Param0 };
			Var87.f_14 = Global_1674356.f_14;
			STATS::_0x73001E34F85137F8(&Var87);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
		{
			Var102 = { Param0 };
			Var102.f_14 = iParam14;
			Var102.f_15 = (SYSTEM::TO_FLOAT(iParam14) / SYSTEM::TO_FLOAT(iParam15));
			Var102.f_16 = iParam16;
			STATS::_0x53CAE13E9B426993(&Var102);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
		{
			Var119 = { Param0 };
			Var119.f_14 = iParam14;
			Var119.f_15 = iParam15;
			Var119.f_16 = Global_1674356.f_14;
			STATS::_0x7D36291161859389(&Var119);
		}
	}
	func_1165();
}

void func_1165()
{
	struct<18> Var0;

	Global_1674356 = { Var0 };
}

void func_1166(struct<12> Param0, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
			Var1.f_12 = iParam12;
			STATS::_0xBFAFDB5FAAA5C5AB(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, func_1167()))
		{
			Var14 = { Param0 };
			Var14.f_12 = iParam12;
			Var14.f_13 = iParam13;
			STATS::_0xBAA2F0490E146BE8(&Var14);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = iParam12;
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
			Var52.f_12 = iParam12;
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
			Var66.f_12 = iParam12;
			STATS::_0x419615486BBF1956(&Var66);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = iParam12;
			Var79.f_13 = iParam13;
			STATS::_0x84DFC579C2FC214C(&Var79);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = iParam12;
			Var93.f_13 = iParam13;
			STATS::_0x0A9C7F36E5D7B683(&Var93);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = iParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			STATS::_0x164C5FF663790845(&Var107);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = iParam12;
			STATS::_0xEDBF6C9B0D2C65C8(&Var123);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = iParam12;
				Var136.f_13 = iParam13;
				STATS::_0x8C9D11605E59D955(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = iParam12;
				Var150.f_13 = iParam13;
				STATS::_0x6551B1F7F6CD46EA(&Var150);
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = iParam12;
			STATS::_0x2CD90358F67D0AA8(&Var164);
		}
	}
}

char* func_1167()
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

void func_1168()
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_554);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_553);
}

void func_1169(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1366905.f_1.f_108 != 0)
	{
		Global_1366905.f_1.f_108 = 0;
	}
	Global_1366905.f_1.f_109 = -1;
	Global_1366905.f_1.f_110 = -1;
	if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 == 167 || Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 == 168)
	{
		func_1218();
		MISC::CLEAR_BIT(&(Global_1674347.f_3), 4);
	}
	if ((func_162() && iParam1 != 0) && Global_262145.f_16981)
	{
		if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 == 190 || Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 == 192)
		{
			func_1200(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 == 164 || Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 == 208) || Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 == 250) || Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 != -1)
	{
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_33 = -1;
		if (!MISC::IS_BIT_SET(Global_1574650.f_1, 14) && !func_47(PLAYER::PLAYER_ID()))
		{
			func_713(0);
		}
	}
	else if (func_403(PLAYER::PLAYER_ID()) != -1)
	{
		func_893(-1);
	}
	func_1199(func_389());
	if (func_234(16))
	{
		func_688(16);
	}
	func_1196(0);
	func_888(-1);
	func_1195();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1194(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1192(iVar1);
		iVar1++;
	}
	if (MISC::IS_BIT_SET(Global_1674347.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1674347.f_3), 0);
	}
	if (MISC::IS_BIT_SET(Global_1674347.f_3, 5))
	{
		MISC::CLEAR_BIT(&(Global_1674347.f_3), 5);
	}
	iVar2 = func_1191();
	if ((func_551(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1190(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_161(iVar2))
	{
		func_1187(-1, 1);
	}
	else if (((((func_1186(iVar2) || func_1185(iVar2)) || func_1184(iVar2)) || func_150(iVar2)) || func_149(iVar2)) || func_148(iVar2))
	{
	}
	else
	{
		func_1187(-1, 1);
	}
	func_362(19);
	func_362(20);
	func_362(21);
	func_362(22);
	func_362(27);
	func_688(3);
	func_688(4);
	func_688(7);
	func_1183();
	if (func_41(PLAYER::PLAYER_ID()))
	{
		func_852(0);
	}
	func_362(29);
	Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_57 = func_389();
	if (Global_2537071.f_5124.f_41 != 0)
	{
		Global_2537071.f_5124.f_41 = 0;
	}
	if (bParam0)
	{
		func_689();
	}
	if (!func_47(PLAYER::PLAYER_ID()))
	{
		func_711();
		MISC::CLEAR_BIT(&(Global_1674347.f_3), 1);
	}
	if (MISC::IS_BIT_SET(Global_1674347.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::CLEAR_BIT(&(Global_1674347.f_3), 6);
	}
	if (MISC::IS_BIT_SET(Global_1674347.f_3, 7))
	{
		MISC::CLEAR_BIT(&(Global_1674347.f_3), 7);
	}
	if (MISC::IS_BIT_SET(Global_1674347.f_3, 8))
	{
		func_1182("IMPEXP_SELFDES", 0);
		func_1172("IMPEXP_SELFDES");
		MISC::CLEAR_BIT(&(Global_1674347.f_3), 8);
	}
	func_1170(iVar2, 0);
}

void func_1170(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1674347.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_1171(iParam0));
			MISC::SET_BIT(&(Global_1674347.f_3), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1674347.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_1171(iParam0));
		MISC::CLEAR_BIT(&(Global_1674347.f_3), 9);
	}
}

char* func_1171(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		default:
			break;
	}
	return "";
}

void func_1172(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_111638.f_14136[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111638.f_14136[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_1174();
					Global_111638.f_14136[iVar0 /*104*/].f_99[Global_19486] = 0;
					if (func_1173(iVar0))
					{
					}
					else
					{
						Global_111638.f_14136[iVar0 /*104*/].f_24 = 0;
						Global_111638.f_14136[iVar0 /*104*/].f_28 = 0;
						Global_111638.f_14136[iVar0 /*104*/].f_29 = 0;
					}
					HUD::THEFEED_REMOVE_ITEM(Global_111638.f_14136[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

bool func_1173(int iParam0)
{
	if ((Global_111638.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111638.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111638.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return true;
	}
	return false;
}

void func_1174()
{
	if (func_1181(14))
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
		Global_19486 = func_1175();
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

var func_1175()
{
	func_1176();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_1176()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_1179(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_1178(PLAYER::PLAYER_PED_ID());
			if (func_1177(iVar0) && (!func_1181(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_1177(Global_111638.f_2358.f_539.f_4321))
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

bool func_1177(int iParam0)
{
	return iParam0 < 3;
}

int func_1178(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_1179(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_1179(int iParam0)
{
	if (func_1177(iParam0))
	{
		return func_1180(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_1180(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_1181(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_1182(char* sParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_111638.f_14136[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111638.f_14136[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111638.f_14136[iVar0 /*104*/].f_24 = 1;
				if (Global_111638.f_14136[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111638.f_14046[0 /*20*/].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111638.f_14046[1 /*20*/].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111638.f_14046[2 /*20*/].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111638.f_14046[3 /*20*/].f_17 = 0;
					}
					Global_111638.f_14136[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111638.f_14136[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1183()
{
	if (func_729(PLAYER::PLAYER_ID()))
	{
		func_362(25);
	}
}

int func_1184(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1185(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

int func_1186(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1187(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iParam0 = func_1191();
	}
	if (iParam0 > 0)
	{
		if (func_181() != func_389())
		{
			if (func_1025(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2514606.f_93[func_1189(iParam0)] = 1;
			}
		}
		iVar0 = func_1189(159);
		if (func_1188(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(157);
		if (func_1188(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(148);
		if (func_1188(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(164);
		if (func_1188(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(142);
		if (func_1188(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(152);
		if (func_1188(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(166);
		if (func_1188(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(170);
		if (func_1188(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(173);
		if (func_1188(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(179);
		if (func_1188(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(200);
		if (func_1188(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(201);
		if (func_1188(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(182);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(183);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(185);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(186);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(180);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(195);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(197);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(198);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(207);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(208);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(209);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(214);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(215);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(216);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(217);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(218);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(219);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(220);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(221);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
	}
}

bool func_1188(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_40(PLAYER::PLAYER_ID(), 19) && !func_40(PLAYER::PLAYER_ID(), 20)) && !func_40(PLAYER::PLAYER_ID(), 9))
		{
			return false;
		}
	}
	if (Global_2514606.f_93[iParam0] == 1 && func_24(&(Global_2514606[iParam0 /*2*/])))
	{
		if (func_348(&(Global_2514606[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2514606.f_93[iParam0] = 0;
			return true;
		}
		return false;
	}
	return true;
}

int func_1189(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		case 157:
			return 12;
		case 148:
			return 13;
		case 164:
			return 14;
		case 142:
			return 15;
		case 152:
			return 16;
		case 163:
			return 17;
		case 155:
			return 18;
		case 160:
			return 19;
		case 153:
			return 20;
		case 162:
			return 21;
		case 154:
			return 22;
		case 166:
			return 8;
		case 170:
			return 9;
		case 173:
			return 10;
		case 171:
			return 23;
		case 172:
			return 24;
		case 179:
			return 25;
		case 189:
			return 26;
		case 193:
			return 27;
		case 194:
			return 28;
		case 199:
			return 29;
		case 201:
			return 30;
		case 200:
			return 31;
		case 205:
			return 32;
		case 210:
			return 33;
		case 182:
			return 34;
		case 183:
			return 35;
		case 185:
			return 36;
		case 186:
			return 37;
		case 180:
			return 38;
		case 195:
			return 39;
		case 197:
			return 40;
		case 198:
			return 41;
		case 207:
			return 42;
		case 208:
			return 43;
		case 209:
			return 44;
		case 211:
			return 45;
		case 214:
			return 0;
		case 215:
			return 1;
		case 216:
			return 2;
		case 217:
			return 3;
		case 218:
			return 4;
		case 219:
			return 5;
		case 220:
			return 6;
		case 221:
			return 7;
		default:
			break;
	}
	return -1;
}

void func_1190(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iParam0 = func_1191();
	}
	if (iParam0 > 0)
	{
		if (func_181() != func_389())
		{
			Global_2514606.f_93[func_1189(iParam0)] = 1;
		}
		iVar0 = func_1189(155);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(163);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(160);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(153);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(162);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(154);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(171);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(172);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(199);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(194);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(193);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(210);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(205);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(189);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1189(211);
		if (func_1188(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2514606[iVar0 /*2*/]));
			func_388(&(Global_2514606[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1191()
{
	char* sVar0;

	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_1192(int iParam0)
{
	if (!func_31(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_337[iParam0 /*3*/], func_1193(), 0))
	{
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_337[iParam0 /*3*/] = { func_1193() };
	}
	if (!func_31(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_324[iParam0 /*3*/], func_1193(), 0))
	{
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_324[iParam0 /*3*/] = { func_1193() };
	}
}

Vector3 func_1193()
{
	vector3 vVar0;

	return vVar0;
}

void func_1194(int iParam0)
{
	if (!func_31(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_150[iParam0 /*3*/], func_1193(), 0))
	{
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_150[iParam0 /*3*/] = { func_1193() };
	}
	if (!func_31(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_125[iParam0 /*3*/], func_1193(), 0))
	{
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_125[iParam0 /*3*/] = { func_1193() };
	}
}

void func_1195()
{
	struct<20> Var0;

	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573902 = { Var0 };
	Global_1573902.f_13 = func_389();
	if (MISC::IS_BIT_SET(Global_1573344, 3))
	{
		MISC::CLEAR_BIT(&Global_1573344, 3);
	}
}

void func_1196(bool bParam0)
{
	if (bParam0)
	{
		if (!func_1027(PLAYER::PLAYER_ID(), 14))
		{
			func_1198(14);
		}
	}
	else if (func_1027(PLAYER::PLAYER_ID(), 14))
	{
		func_1197(14);
	}
}

void func_1197(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_5), iParam0);
}

void func_1198(int iParam0)
{
	MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_5), iParam0);
}

void func_1199(bool bParam0)
{
	if (func_132(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != bParam0)
		{
			if (Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_484 != bParam0)
			{
				Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_484 = bParam0;
				if (bParam0 != func_389())
				{
				}
			}
		}
	}
}

void func_1200(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (func_292(bParam0, iParam1) && func_1217(bParam0, iParam1))
	{
		iVar0 = func_291(bParam0, iParam1);
		func_1204(iVar0, bParam2, bParam3);
		func_1201(iVar0, 1);
	}
}

void func_1201(int iParam0, bool bParam1)
{
	if (!func_1203(iParam0))
	{
		return;
	}
	func_275(func_1202(iParam0), bParam1, -1, 1);
	Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_183[iParam0 /*12*/].f_6 = bParam1;
}

int func_1202(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		case 1:
			return 7629;
		case 2:
			return 7630;
		case 3:
			return 7631;
		case 4:
			return 7632;
		case 5:
			return 15373;
		default:
			break;
	}
	return 7628;
}

bool func_1203(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_1204(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;

	bVar1 = false;
	iVar2 = func_907(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_1216(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2513475[iParam0];
		iVar0 = func_1215(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1676233 = -1;
		}
		func_1214(iParam0, 0, bParam2);
	}
	else if (func_1212(iParam0, bParam2))
	{
		iVar0 = func_1211(iVar2, 0);
		iVar3 = func_983(PLAYER::PLAYER_ID(), iVar2);
		iVar4 = func_1210(iVar2, bParam2);
		iVar5 = func_1211(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1209(iVar2) && func_1208(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1216(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1207(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_1206(iParam0, (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_183[iParam0 /*12*/].f_2 - (func_1210(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1211(iVar2, bParam2) / func_1207(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1209(iVar2) && func_1208(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1205(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_1205(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == func_389())
	{
		return;
	}
	if (func_282(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590535[iParam0 /*876*/].f_274.f_257 = iParam2;
				}
				else
				{
					Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1206(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_183[iParam0 /*12*/].f_2)
	{
		Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_183[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1207(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == func_389())
	{
		return 0;
	}
	if (func_282(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1208(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == func_389())
	{
		return 0;
	}
	if (func_282(iParam1) && func_1209(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590535[iParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1209(int iParam0)
{
	return func_176(iParam0) == 5;
}

int func_1210(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;

	iVar1 = func_176(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16950;
			if (func_290(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16955;
			}
			break;
		case 3:
			uVar0 = Global_262145.f_16949;
			if (func_290(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16954;
			}
			break;
		case 4:
			uVar0 = Global_262145.f_16948;
			if (func_290(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16953;
			}
			break;
		case 0:
			uVar0 = Global_262145.f_16946;
			if (func_290(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16951;
			}
			break;
		case 2:
			uVar0 = Global_262145.f_16947;
			if (func_290(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16952;
			}
			break;
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21074;
				if (func_290(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21075;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21058;
				if (func_290(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21059;
				}
			}
			break;
	}
	return uVar0;
}

int func_1211(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_176(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16931;
			if (func_290(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16940);
			}
			if (func_290(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16945);
			}
			break;
		case 3:
			iVar0 = Global_262145.f_16932;
			if (func_290(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16939);
			}
			if (func_290(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16944);
			}
			break;
		case 4:
			iVar0 = Global_262145.f_16933;
			if (func_290(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16938);
			}
			if (func_290(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16943);
			}
			break;
		case 0:
			iVar0 = Global_262145.f_16934;
			if (func_290(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16936);
			}
			if (func_290(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16941);
			}
			break;
		case 2:
			iVar0 = Global_262145.f_16935;
			if (func_290(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16937);
			}
			if (func_290(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16942);
			}
			break;
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21071;
			}
			else
			{
				iVar0 = Global_262145.f_21055;
			}
			if (func_290(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21072);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21056);
				}
			}
			if (func_290(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21073);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21057);
				}
			}
			if (func_1208(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1212(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_276(15384, -1, -1);
	}
	return func_276(func_1213(iParam0), -1, -1);
}

int func_1213(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		case 1:
			return 9417;
		case 2:
			return 9418;
		case 3:
			return 9419;
		case 4:
			return 9420;
		case 5:
			return 15372;
		default:
			break;
	}
	return 9416;
}

void func_1214(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_275(15384, bParam1, -1, 1);
		return;
	}
	func_275(func_1213(iParam0), bParam1, -1, 1);
}

int func_1215(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_2513475[iParam0];
	iVar1 = func_907(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2513482;
	}
	if (func_1209(iVar1))
	{
		if (func_1208(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1216(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2513482 = iParam1;
		return;
	}
	Global_2513475[iParam0] = iParam1;
}

bool func_1217(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_292(bParam0, iParam1))
	{
		iVar0 = func_291(bParam0, iParam1);
		if (Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_4 > 0 && Global_1590535[bParam0 /*876*/].f_274.f_183[iVar0 /*12*/].f_7)
		{
			return true;
		}
	}
	return false;
}

void func_1218()
{
	MISC::CLEAR_BIT(&(Global_2537071.f_1737), 28);
	MISC::CLEAR_BIT(&(Global_2537071.f_1737), 29);
	func_1219(24);
}

void func_1219(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

void func_1220(bool bParam0)
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

void func_1221(struct<21> Param0)
{
	int iVar0;

	func_1273();
	func_1271(func_1272(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	func_1270(0, -1, 0);
	if (func_402())
	{
		func_1228(0, 0, 0);
	}
	else
	{
		func_1226(136);
	}
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_80, 199);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_279, 257);
	if (!func_1225())
	{
		func_1160();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_80.f_3[iVar0] = func_389();
				iVar0++;
			}
			STATS::_0x6DEE77AFF8C21BD1(&(Local_80.f_179), &(Local_80.f_180));
		}
		Local_2722.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
		Local_2722.f_8 = NETWORK::_0xF12E6CD06C73D69E();
		func_769(24, 1);
		func_1222();
		if (func_1004(1))
		{
		}
		Local_279[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/] = 0;
	}
	else
	{
		func_1160();
	}
}

void func_1222()
{
	int iVar0;

	PED::ADD_RELATIONSHIP_GROUP("relPennedInPlayer", &iLocal_553);
	PED::ADD_RELATIONSHIP_GROUP("relUWAi", &iLocal_554);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574967[iVar0], iLocal_553);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_553, Global_1574967[iVar0]);
		iVar0++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_553, iLocal_554);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_554, iLocal_553);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_CULT"), iLocal_554);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_CULT"), iLocal_553);
	func_1224(1, &iLocal_554);
	func_1223(&iLocal_554);
	func_1223(&iLocal_553);
}

void func_1223(int iParam0)
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

void func_1224(int iParam0, int iParam1)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("COP"), *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("ARMY"), *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, joaat("ARMY"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("SECURITY_GUARD"), *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, joaat("SECURITY_GUARD"));
}

bool func_1225()
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
		if (func_1155())
		{
			return false;
		}
		if (func_1153(157))
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

void func_1226(int iParam0)
{
	func_763();
	func_1227();
	func_765();
	Global_1574650.f_4 = iParam0;
	Global_1574650.f_5 = iParam0;
	func_851(iParam0, -1);
	func_165(&(Global_1574650.f_18), 0, 0);
	Global_2537071.f_4588 = 0;
	Global_2461747[0] = func_389();
	Global_2461747[1] = func_389();
	Global_2461747[2] = func_389();
	Global_2461747[3] = func_389();
	Global_2461747[4] = func_389();
	func_761();
	if (!func_1023(func_1024()))
	{
		func_558();
	}
	if (func_44() && !func_364())
	{
		MISC::SET_BIT(&(Global_1574650.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1574650.f_1), 17);
	}
}

void func_1227()
{
	var uVar0;

	Global_1574675 = uVar0;
}

void func_1228(int iParam0, int iParam1, bool bParam2)
{
	func_1269();
	if (func_1037(PLAYER::PLAYER_ID()))
	{
		func_1231(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_1230(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_1674342, 0);
				break;
		}
	}
	if (!func_175() && !func_131(PLAYER::PLAYER_ID(), 1))
	{
		if (func_365())
		{
			func_712(3);
		}
	}
	func_712(4);
	if (func_179(0))
	{
		Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_57 = func_181();
	}
	if (func_152(iParam0))
	{
		func_1110();
		Global_1674374.f_18 = func_978(func_247());
	}
	else if (func_151(func_403(PLAYER::PLAYER_ID())))
	{
		func_1108();
		Global_1674428.f_18 = func_978(func_247());
	}
	if (bParam2)
	{
		if (!func_359())
		{
			func_713(1);
		}
	}
	func_1229();
}

void func_1229()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1366905.f_534[iVar0 /*42*/].f_1 = func_389();
		Global_1366905.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

bool func_1230(bool bParam0, bool bParam1)
{
	return func_245(PLAYER::PLAYER_ID(), bParam0, bParam1);
}

void func_1231(bool bParam0)
{
	int iVar0;

	func_1219(33);
	func_1219(34);
	func_1219(35);
	func_1219(36);
	func_1219(37);
	func_1219(38);
	func_1219(39);
	func_1219(40);
	func_1219(43);
	func_1219(41);
	func_1219(54);
	func_1219(42);
	func_1219(47);
	func_1268(23);
	func_1268(24);
	func_1219(92);
	MISC::CLEAR_BIT(&(Global_2537071.f_1737), 2);
	func_1267();
	func_1262();
	func_1257();
	func_1252();
	func_1241();
	func_1237();
	func_1233();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2537071.f_5124.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1232(3))
	{
		func_1268(3);
	}
	else if (func_1232(4))
	{
		func_1268(4);
	}
	else if (func_1232(5))
	{
		func_1268(5);
	}
	else if (func_1232(6))
	{
		func_1268(6);
	}
	else if (func_1232(7))
	{
		func_1268(7);
	}
	else if (((((((((((((((((func_1232(0) || func_1232(1)) || func_1232(2)) || func_1232(8)) || func_1232(9)) || func_1232(10)) || func_1232(11)) || func_1232(12)) || func_1232(13)) || func_1232(14)) || func_1232(15)) || func_1232(16)) || func_1232(17)) || func_1232(18)) || func_1232(19)) || func_1232(20)) || func_1232(21)) || func_1232(22))
	{
		func_1268(8);
		func_1268(0);
		func_1268(1);
		func_1268(2);
		func_1268(9);
		func_1268(10);
		func_1268(11);
		func_1268(12);
		func_1268(13);
		func_1268(14);
		func_1268(15);
		func_1268(16);
		func_1268(17);
		func_1268(18);
		func_1268(19);
		func_1268(20);
		func_1268(21);
		func_1268(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2537071.f_5124.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1232(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_14[iVar0], iVar1);
}

void func_1233()
{
	if (func_1235())
	{
		func_1234(0);
		func_1234(1);
		func_1234(2);
		func_1234(3);
	}
}

void func_1234(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_33[iVar0]), iVar1);
}

bool func_1235()
{
	if (((func_1236(0) || func_1236(1)) || func_1236(2)) || func_1236(3))
	{
		return true;
	}
	return false;
}

bool func_1236(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_33[iVar0], iVar1);
}

void func_1237()
{
	if (func_1239())
	{
		func_1238(4);
		func_1238(5);
		func_1238(6);
		func_1238(7);
	}
}

void func_1238(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_31[iVar0]), iVar1);
}

bool func_1239()
{
	if (((func_1240(4) || func_1240(5)) || func_1240(6)) || func_1240(7))
	{
		return true;
	}
	return false;
}

bool func_1240(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_31[iVar0], iVar1);
}

void func_1241()
{
	int iVar0;

	if (func_1251())
	{
		func_1250(8);
		func_1250(9);
		func_1250(10);
		func_1250(12);
		func_1250(13);
		func_1250(14);
		func_1250(19);
		func_1250(20);
		func_1250(21);
		func_1250(22);
		func_1250(23);
		func_1250(24);
		func_1250(25);
		func_1250(26);
		func_1250(15);
		func_1250(16);
		func_1250(17);
		func_1250(18);
		func_1250(35);
		func_1250(45);
		func_1250(46);
		if (func_1249(11))
		{
			func_1250(11);
			iVar0 = func_50(7226, -1, 0);
			MISC::SET_BIT(&iVar0, 2);
			func_159(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_1249(48))
	{
		if (func_1247(151, 3))
		{
			func_1245(151, 3);
		}
		func_1250(48);
	}
	if (func_1249(49))
	{
		if (func_1247(152, 3))
		{
			func_1245(152, 3);
		}
		func_1250(49);
	}
	if (func_1249(50))
	{
		if (func_1247(153, 3))
		{
			func_1245(153, 3);
		}
		func_1250(50);
	}
	if (func_1249(51))
	{
		if (func_1247(func_1242(), 3))
		{
			func_1245(func_1242(), 3);
		}
		func_1250(51);
	}
}

int func_1242()
{
	if (func_1244())
	{
		func_1243(154, Global_19486, 1);
	}
	return 154;
}

void func_1243(int iParam0, int iParam1, int iParam2)
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

bool func_1244()
{
	bool bVar0;

	bVar0 = func_119(PLAYER::PLAYER_ID());
	if (((bVar0 != PLAYER::PLAYER_ID() && bVar0 != func_389()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0)) && bVar0 != -1)
	{
		return true;
	}
	return false;
}

void func_1245(int iParam0, int iParam1)
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
			func_1246(iParam0, iVar0, 0);
			func_1243(iParam0, iVar0, 0);
		}
	}
}

void func_1246(int iParam0, int iParam1, int iParam2)
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

bool func_1247(int iParam0, int iParam1)
{
	if (func_1248(iParam0, iParam1) == 1)
	{
		return true;
	}
	return false;
}

int func_1248(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

bool func_1249(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_26[iVar0], iVar1);
}

void func_1250(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_26[iVar0]), iVar1);
}

bool func_1251()
{
	if (((((((((((((((((((((func_1249(8) || func_1249(9)) || func_1249(10)) || func_1249(12)) || func_1249(11)) || func_1249(13)) || func_1249(14)) || func_1249(19)) || func_1249(20)) || func_1249(21)) || func_1249(22)) || func_1249(23)) || func_1249(24)) || func_1249(25)) || func_1249(26)) || func_1249(15)) || func_1249(16)) || func_1249(17)) || func_1249(18)) || func_1249(35)) || func_1249(45)) || func_1249(46))
	{
		return true;
	}
	return false;
}

void func_1252()
{
	if (func_1256())
	{
		func_1255(0);
		func_1255(1);
		func_1255(2);
		func_1255(3);
		func_1255(4);
		func_1255(5);
		if (func_1254(32))
		{
			if (func_1247(func_1253(), 3))
			{
				func_1245(func_1253(), 3);
			}
			func_1255(32);
		}
	}
}

int func_1253()
{
	if (func_1244())
	{
		func_1243(12, Global_19486, 1);
	}
	return 12;
}

bool func_1254(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_23[iVar0], iVar1);
}

void func_1255(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_23[iVar0]), iVar1);
}

bool func_1256()
{
	if ((((func_1254(1) || func_1254(0)) || func_1254(2)) || func_1254(4)) || func_1254(5))
	{
		return true;
	}
	return false;
}

void func_1257()
{
	if (func_1261())
	{
		func_1260(0);
		func_1260(1);
		func_1260(2);
		func_1260(3);
		func_1260(4);
		func_1260(5);
		func_1260(6);
		func_1260(7);
		if (func_1259(8))
		{
			func_1260(8);
		}
		if (func_1259(15))
		{
			if (func_1247(func_1258(), 3))
			{
				func_1245(func_1258(), 3);
			}
			func_1260(15);
		}
	}
}

int func_1258()
{
	if (func_1244())
	{
		func_1243(20, Global_19486, 1);
	}
	return 20;
}

bool func_1259(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_21[iVar0], iVar1);
}

void func_1260(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_21[iVar0]), iVar1);
}

bool func_1261()
{
	if ((((((((func_1259(0) || func_1259(1)) || func_1259(2)) || func_1259(3)) || func_1259(4)) || func_1259(5)) || func_1259(6)) || func_1259(7)) || func_1259(8))
	{
		return true;
	}
	return false;
}

void func_1262()
{
	if (func_1266())
	{
		func_1265(0);
		func_1265(1);
		func_1265(2);
		func_1265(3);
		func_1265(4);
		func_1265(5);
		func_1265(6);
		func_1265(7);
		func_1265(8);
		func_1265(9);
		func_1265(10);
		func_1265(11);
		func_1265(12);
		if (func_1264(13))
		{
			if (func_1247(func_1263(), 3))
			{
				func_1245(func_1263(), 3);
			}
			func_1265(13);
		}
	}
}

int func_1263()
{
	if (func_1244())
	{
		func_1243(76, Global_19486, 1);
	}
	return 76;
}

bool func_1264(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2537071.f_5124.f_19[iVar0], iVar1);
}

void func_1265(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_19[iVar0]), iVar1);
}

bool func_1266()
{
	if ((((((((((((func_1264(0) || func_1264(1)) || func_1264(2)) || func_1264(3)) || func_1264(4)) || func_1264(5)) || func_1264(6)) || func_1264(7)) || func_1264(8)) || func_1264(9)) || func_1264(10)) || func_1264(11)) || func_1264(12))
	{
		return true;
	}
	return false;
}

void func_1267()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2537071.f_5124.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_1268(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2537071.f_5124.f_14[iVar0]), iVar1);
}

void func_1269()
{
	struct<14> Var0;

	Global_1674356 = { Var0 };
	Global_1674356.f_14 = 0;
	Global_1674356.f_15 = 0;
}

int func_1270(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1161();
			}
			else
			{
				return 0;
			}
		}
		if (!func_745())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_1161();
					}
					else
					{
						return 0;
					}
				}
				if (func_1155())
				{
					if (!bParam2)
					{
						func_1161();
					}
					else
					{
						return 0;
					}
				}
				if (func_1153(157))
				{
					if (!bParam2)
					{
						func_1161();
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
					func_1161();
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
				func_1161();
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
			func_1161();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1271(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_1161();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_1272(int iParam0)
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

void func_1273()
{
	struct<42> Var0;
	int iVar42;

	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_39 = -1;
	Var0.f_41 = -1;
	iVar42 = 0;
	while (iVar42 < 32)
	{
		Global_1368784[iVar42 /*42*/] = { Var0 };
		iVar42++;
	}
}

bool func_1274(bool bParam0, bool bParam1, bool bParam2)
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

