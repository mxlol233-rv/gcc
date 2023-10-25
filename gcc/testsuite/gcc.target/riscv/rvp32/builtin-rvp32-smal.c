/* smal also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn_zpsfoperand -mabi=ilp32d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** smal\ta[0-9], a[0-9], a[0-9]
** ...
*/

int64_t f0 (int64_t x0, uintXLEN_t x1){

    return __rv_smal(x0, x1);

}



/*
**f1:
** smal\ta[0-9], a[0-9], a[0-9]
** ...
*/

int64_t f1 (int64_t x0, int16x2_t x1){

    return __rv_v_smal(x0, x1);

}



