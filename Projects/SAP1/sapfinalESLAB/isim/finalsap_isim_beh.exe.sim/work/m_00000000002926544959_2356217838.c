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
static const char *ng0 = "C:/Users/USMAN/Desktop/sapfinalESLAB/asdf.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {10U, 0U, 0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {17U, 0U, 0U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {17760U, 0U, 0U, 0U};
static int ng7[] = {3, 0};
static int ng8[] = {4, 0};
static int ng9[] = {5, 0};
static unsigned int ng10[] = {16U, 15U, 0U, 0U};
static int ng11[] = {6, 0};
static unsigned int ng12[] = {160U, 15U, 0U, 0U};
static int ng13[] = {7, 0};
static unsigned int ng14[] = {9U, 0U};
static int ng15[] = {8, 0};
static unsigned int ng16[] = {0U, 15U, 0U, 0U};
static int ng17[] = {9, 0};
static int ng18[] = {10, 0};
static unsigned int ng19[] = {10U, 0U};
static int ng20[] = {11, 0};
static unsigned int ng21[] = {17760U, 15U, 0U, 0U};
static int ng22[] = {12, 0};
static int ng23[] = {13, 0};
static int ng24[] = {14, 0};
static int ng25[] = {15, 0};
static unsigned int ng26[] = {0U, 255U};



static void Always_28_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3936);
    *((int *)t2) = 1;
    t3 = (t0 + 3400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 32);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB36;

LAB37:
LAB39:
LAB38:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 2448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB40:    goto LAB2;

LAB6:    xsi_set_current_line(30, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2448);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    goto LAB40;

LAB8:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB40;

LAB10:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB40;

LAB12:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB40;

LAB14:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB40;

LAB16:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB40;

LAB18:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB40;

LAB20:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB40;

LAB22:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB40;

LAB24:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB40;

LAB26:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB40;

LAB28:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB40;

LAB30:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB40;

LAB32:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB40;

LAB34:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB40;

LAB36:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB40;

}

static void Cont_48_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 3616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2048U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t24 = (t0 + 4032);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 255U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 7);
    t37 = (t0 + 3952);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng26)));
    goto LAB9;

LAB10:    t21 = (t0 + 2448);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 8, t16, 8, t23, 8);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}


extern void work_m_00000000002926544959_2356217838_init()
{
	static char *pe[] = {(void *)Always_28_0,(void *)Cont_48_1};
	xsi_register_didat("work_m_00000000002926544959_2356217838", "isim/finalsap_isim_beh.exe.sim/work/m_00000000002926544959_2356217838.didat");
	xsi_register_executes(pe);
}
