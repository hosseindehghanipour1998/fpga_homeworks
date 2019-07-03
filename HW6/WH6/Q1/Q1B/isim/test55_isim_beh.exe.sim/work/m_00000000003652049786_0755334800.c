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
static const char *ng0 = "Z:/hw6/q1/pipelined.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0, 0, 0};



static void Always_61_0(char *t0)
{
    char t8[8];
    char t10[8];
    char t19[8];
    char t28[16];
    char t29[16];
    char t31[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;

LAB0:    t1 = (t0 + 7168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 7488);
    *((int *)t2) = 1;
    t3 = (t0 + 7200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 4808);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4648);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t4, 32, t7, 32);
    t9 = ((char*)((ng1)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t8, 32, t9, 32);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t8);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t8);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 0);
    *((unsigned int *)t5) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 65535U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 65535U);
    t7 = (t0 + 4648);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memset(t10, 0, 8);
    t17 = (t10 + 4);
    t18 = (t11 + 4);
    t21 = *((unsigned int *)t11);
    t22 = (t21 >> 0);
    *((unsigned int *)t10) = t22;
    t23 = *((unsigned int *)t18);
    t24 = (t23 >> 0);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t25 & 65535U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 65535U);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_multiply(t19, 32, t8, 32, t10, 32);
    t27 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t27, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5928);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlogtype_concat(t28, 64, 64, 2U, t7, 32, t4, 32);
    t9 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t9, t28, 0, 0, 64, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 0);
    *((unsigned int *)t5) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 65535U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 65535U);
    t7 = (t0 + 4968);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memset(t10, 0, 8);
    t17 = (t10 + 4);
    t18 = (t11 + 4);
    t21 = *((unsigned int *)t11);
    t22 = (t21 >> 16);
    *((unsigned int *)t10) = t22;
    t23 = *((unsigned int *)t18);
    t24 = (t23 >> 16);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t25 & 65535U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 65535U);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_multiply(t19, 32, t8, 32, t10, 32);
    t27 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t27, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 6088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 6088);
    t11 = (t9 + 56U);
    t17 = *((char **)t11);
    xsi_vlogtype_concat(t28, 64, 64, 3U, t17, 16, t7, 32, t4, 16);
    t18 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t18, t28, 0, 0, 64, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 16);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 16);
    *((unsigned int *)t5) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 65535U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 65535U);
    t7 = (t0 + 5288);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memset(t10, 0, 8);
    t17 = (t10 + 4);
    t18 = (t11 + 4);
    t21 = *((unsigned int *)t11);
    t22 = (t21 >> 0);
    *((unsigned int *)t10) = t22;
    t23 = *((unsigned int *)t18);
    t24 = (t23 >> 0);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t25 & 65535U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 65535U);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_multiply(t19, 32, t8, 32, t10, 32);
    t27 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t27, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 6088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 6088);
    t11 = (t9 + 56U);
    t17 = *((char **)t11);
    xsi_vlogtype_concat(t28, 64, 64, 3U, t17, 16, t7, 32, t4, 16);
    t18 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t18, t28, 0, 0, 64, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 5768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 16);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 16);
    *((unsigned int *)t5) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 65535U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 65535U);
    t7 = (t0 + 5608);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memset(t10, 0, 8);
    t17 = (t10 + 4);
    t18 = (t11 + 4);
    t21 = *((unsigned int *)t11);
    t22 = (t21 >> 16);
    *((unsigned int *)t10) = t22;
    t23 = *((unsigned int *)t18);
    t24 = (t23 >> 16);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t25 & 65535U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 65535U);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_multiply(t19, 32, t8, 32, t10, 32);
    t27 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t27, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlogtype_concat(t28, 64, 64, 2U, t7, 32, t4, 32);
    t9 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t9, t28, 0, 0, 64, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4168);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_unsigned_add(t28, 64, t4, 64, t7, 64);
    t9 = (t0 + 4328);
    t11 = (t9 + 56U);
    t17 = *((char **)t11);
    xsi_vlog_unsigned_add(t29, 64, t28, 64, t17, 64);
    t18 = (t0 + 3368);
    t27 = (t18 + 56U);
    t30 = *((char **)t27);
    xsi_vlog_unsigned_add(t31, 64, t29, 64, t30, 64);
    t32 = (t0 + 2088);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 64);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 6248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t20 = (t15 ^ t16);
    t21 = (t14 | t20);
    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB21;

LAB18:    if (t24 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t8) = 1;

LAB21:    t11 = (t8 + 4);
    t33 = *((unsigned int *)t11);
    t34 = (~(t33));
    t35 = *((unsigned int *)t8);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB22;

LAB23:
LAB24:    goto LAB2;

LAB6:    xsi_set_current_line(68, ng0);

LAB9:    xsi_set_current_line(69, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 6248);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB8;

LAB10:    xsi_set_current_line(71, ng0);

LAB13:    xsi_set_current_line(72, ng0);
    t7 = (t0 + 4648);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t17 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_signed_unary_minus(t10, 32, t17, 32);
    memset(t19, 0, 8);
    xsi_vlog_signed_multiply(t19, 32, t11, 32, t10, 32);
    t18 = (t0 + 4648);
    xsi_vlogvar_assign_value(t18, t19, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB14:    xsi_set_current_line(76, ng0);

LAB17:    xsi_set_current_line(77, ng0);
    t7 = (t0 + 4808);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t17 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_signed_unary_minus(t10, 32, t17, 32);
    memset(t19, 0, 8);
    xsi_vlog_signed_multiply(t19, 32, t11, 32, t10, 32);
    t18 = (t0 + 4808);
    xsi_vlogvar_assign_value(t18, t19, 0, 0, 32);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB16;

LAB20:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(117, ng0);

LAB25:    xsi_set_current_line(118, ng0);
    t17 = (t0 + 2088);
    t18 = (t17 + 56U);
    t27 = *((char **)t18);
    t30 = ((char*)((ng4)));
    xsi_vlog_signed_unary_minus(t28, 64, t30, 32);
    xsi_vlog_signed_multiply(t29, 64, t27, 64, t28, 64);
    t32 = (t0 + 2088);
    xsi_vlogvar_assign_value(t32, t29, 0, 0, 64);
    goto LAB24;

}


extern void work_m_00000000003652049786_0755334800_init()
{
	static char *pe[] = {(void *)Always_61_0};
	xsi_register_didat("work_m_00000000003652049786_0755334800", "isim/test55_isim_beh.exe.sim/work/m_00000000003652049786_0755334800.didat");
	xsi_register_executes(pe);
}
