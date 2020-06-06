/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/USMAN/Desktop/sapfinalESLAB/controlword.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {8U, 0U};
static unsigned int ng5[] = {16U, 0U};
static unsigned int ng6[] = {32U, 0U};
static unsigned int ng7[] = {31U, 15U};
static unsigned int ng8[] = {1507U, 0U};
static unsigned int ng9[] = {47U, 15U};
static unsigned int ng10[] = {3043U, 0U};
static unsigned int ng11[] = {79U, 15U};
static unsigned int ng12[] = {611U, 0U};
static unsigned int ng13[] = {128U, 0U};
static unsigned int ng14[] = {419U, 0U};
static unsigned int ng15[] = {256U, 0U};
static unsigned int ng16[] = {707U, 0U};
static unsigned int ng17[] = {512U, 0U};
static unsigned int ng18[] = {995U, 0U};
static unsigned int ng19[] = {129U, 0U};
static unsigned int ng20[] = {257U, 0U};
static unsigned int ng21[] = {737U, 0U};
static unsigned int ng22[] = {513U, 0U};
static unsigned int ng23[] = {967U, 0U};
static unsigned int ng24[] = {1007U, 0U};
static unsigned int ng25[] = {1010U, 0U};



static void Always_36_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4776);
    *((int *)t2) = 1;
    t3 = (t0 + 3992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 2160U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(41, ng0);

LAB9:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB10:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t5, 6);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t13 == 1)
        goto LAB21;

LAB22:
LAB23:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3040);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 6);
    goto LAB8;

LAB11:    xsi_set_current_line(43, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 6, 0LL);
    goto LAB23;

LAB13:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 6, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 6, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 6, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 6, 0LL);
    goto LAB23;

LAB21:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 6, 0LL);
    goto LAB23;

}

static void Cont_55_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 63U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 5);
    t18 = (t0 + 4792);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_56_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4808);
    *((int *)t2) = 1;
    t3 = (t0 + 4488);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);
    t5 = (t0 + 2320U);
    t6 = *((char **)t5);
    t5 = (t0 + 2480U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t4, 10, 10, 2U, t7, 6, t6, 4);

LAB5:    t5 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 10, t5, 10);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t8 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t8 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t8 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng22)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t8 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t8 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t8 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t8 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t8 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t8 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t8 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t8 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t8 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng22)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 10, t2, 10);
    if (t8 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB2;

LAB6:    xsi_set_current_line(58, ng0);
    t9 = ((char*)((ng8)));
    t10 = (t0 + 2880);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 12);
    goto LAB42;

LAB8:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 12);
    goto LAB42;

LAB10:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 12);
    goto LAB42;

LAB12:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 12);
    goto LAB42;

LAB14:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 12);
    goto LAB42;

LAB16:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 12);
    goto LAB42;

LAB18:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 12);
    goto LAB42;

LAB20:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 12);
    goto LAB42;

LAB22:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng23)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 12);
    goto LAB42;

LAB24:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 12);
    goto LAB42;

LAB26:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 12);
    goto LAB42;

LAB28:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 12);
    goto LAB42;

LAB30:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng25)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 12);
    goto LAB42;

LAB32:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 12);
    goto LAB42;

LAB34:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 12);
    goto LAB42;

LAB36:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 12);
    goto LAB42;

LAB38:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 12);
    goto LAB42;

LAB40:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 12);
    goto LAB42;

}


extern void work_m_00000000002130845626_1247977744_init()
{
	static char *pe[] = {(void *)Always_36_0,(void *)Cont_55_1,(void *)Always_56_2};
	xsi_register_didat("work_m_00000000002130845626_1247977744", "isim/finalsap_isim_beh.exe.sim/work/m_00000000002130845626_1247977744.didat");
	xsi_register_executes(pe);
}
