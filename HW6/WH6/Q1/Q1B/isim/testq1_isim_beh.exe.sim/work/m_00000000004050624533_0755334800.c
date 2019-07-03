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
static const char *ng0 = "C:/Users/Dear Kimiya.Be Happy/Desktop/fpga/hw6/q1/pipelined.v";
static unsigned int ng1[] = {0U, 0U};



static void Cont_56_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 6688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 7880);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 7752);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_57_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 6936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 7944);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 7768);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Always_58_2(char *t0)
{
    char t6[8];
    char t13[8];
    char t22[8];
    char t24[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 7184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 7784);
    *((int *)t2) = 1;
    t3 = (t0 + 7216);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 5608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    t5 = (t0 + 1688U);
    t14 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 0);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 65535U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 65535U);
    memset(t22, 0, 8);
    xsi_vlog_unsigned_multiply(t22, 32, t6, 32, t13, 32);
    t23 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 32, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5608);
    t14 = (t5 + 56U);
    t15 = *((char **)t14);
    xsi_vlogtype_concat(t24, 64, 64, 2U, t15, 32, t4, 32);
    t23 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t23, t24, 0, 0, 64, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t14);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 65535U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 65535U);
    t15 = (t0 + 4648);
    t23 = (t15 + 56U);
    t25 = *((char **)t23);
    memset(t13, 0, 8);
    t26 = (t13 + 4);
    t27 = (t25 + 4);
    t16 = *((unsigned int *)t25);
    t17 = (t16 >> 16);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t27);
    t19 = (t18 >> 16);
    *((unsigned int *)t26) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 65535U);
    t21 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t21 & 65535U);
    memset(t22, 0, 8);
    xsi_vlog_unsigned_multiply(t22, 32, t6, 32, t13, 32);
    t28 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 32, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 5768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    t14 = (t5 + 56U);
    t15 = *((char **)t14);
    t23 = (t0 + 5768);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    xsi_vlogtype_concat(t24, 64, 64, 3U, t26, 16, t15, 32, t4, 16);
    t27 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t27, t24, 0, 0, 64, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 16);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t14);
    t10 = (t9 >> 16);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 65535U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 65535U);
    t15 = (t0 + 4968);
    t23 = (t15 + 56U);
    t25 = *((char **)t23);
    memset(t13, 0, 8);
    t26 = (t13 + 4);
    t27 = (t25 + 4);
    t16 = *((unsigned int *)t25);
    t17 = (t16 >> 0);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t27);
    t19 = (t18 >> 0);
    *((unsigned int *)t26) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 65535U);
    t21 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t21 & 65535U);
    memset(t22, 0, 8);
    xsi_vlog_unsigned_multiply(t22, 32, t6, 32, t13, 32);
    t28 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 32, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t14 = (t5 + 56U);
    t15 = *((char **)t14);
    t23 = (t0 + 5768);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    xsi_vlogtype_concat(t24, 64, 64, 3U, t26, 16, t15, 32, t4, 16);
    t27 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t27, t24, 0, 0, 64, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 16);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t14);
    t10 = (t9 >> 16);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 65535U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 65535U);
    t15 = (t0 + 5288);
    t23 = (t15 + 56U);
    t25 = *((char **)t23);
    memset(t13, 0, 8);
    t26 = (t13 + 4);
    t27 = (t25 + 4);
    t16 = *((unsigned int *)t25);
    t17 = (t16 >> 16);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t27);
    t19 = (t18 >> 16);
    *((unsigned int *)t26) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 65535U);
    t21 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t21 & 65535U);
    memset(t22, 0, 8);
    xsi_vlog_unsigned_multiply(t22, 32, t6, 32, t13, 32);
    t28 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 32, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t14 = (t5 + 56U);
    t15 = *((char **)t14);
    xsi_vlogtype_concat(t24, 64, 64, 2U, t15, 32, t4, 32);
    t23 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t23, t24, 0, 0, 64, 0LL);
    goto LAB2;

}

static void Cont_96_3(char *t0)
{
    char t8[16];
    char t12[16];
    char t16[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 7432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4168);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_unsigned_add(t8, 64, t4, 64, t7, 64);
    t9 = (t0 + 4328);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_unsigned_add(t12, 64, t8, 64, t11, 64);
    t13 = (t0 + 3368);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_unsigned_add(t16, 64, t12, 64, t15, 64);
    t17 = (t0 + 8008);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_bit_copy(t21, 0, t16, 0, 64);
    xsi_driver_vfirst_trans(t17, 0, 63);
    t22 = (t0 + 7800);
    *((int *)t22) = 1;

LAB1:    return;
}


extern void work_m_00000000004050624533_0755334800_init()
{
	static char *pe[] = {(void *)Cont_56_0,(void *)Cont_57_1,(void *)Always_58_2,(void *)Cont_96_3};
	xsi_register_didat("work_m_00000000004050624533_0755334800", "isim/testq1_isim_beh.exe.sim/work/m_00000000004050624533_0755334800.didat");
	xsi_register_executes(pe);
}
