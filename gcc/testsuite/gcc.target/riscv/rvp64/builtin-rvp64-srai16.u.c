/* srai16.u also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** srai16.u\ta[0-9], a[0-9], 1
** ...
*/

uintXLEN_t f0 (uintXLEN_t x0, uint32_t x1){

    return __rv_sra16_u(x0, 1);

}



/*
**f2:
** srai16.u\ta[0-9], a[0-9], 1
** ...
*/

int16x4_t f2 (int16x4_t x0, uint32_t x1){

    return __rv_v_sra16_u(x0, 1);

}



/*
**f3:
** srai16.u\ta[0-9], a[0-9], 1
** ...
*/

int16x2_t f3 (int16x2_t x0, uint32_t x1){

    return __rv_v_sra16_u(x0, 1);

}



/*
**f4:
** srai16.u\ta[0-9], a[0-9], 1
** ...
*/

int16x4_t f4 (int16x4_t x0, uint32_t x1){

    return __rv_v_sra16_u(x0, 1);

}



