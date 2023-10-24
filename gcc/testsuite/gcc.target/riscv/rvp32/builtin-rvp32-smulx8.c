/* smulx8 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpsfoperand -mabi=ilp32d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** smulx8\ta[0-9], a[0-9], a[0-9]
** ...
*/

uint64_t f0 (uint32_t x0, uint32_t x1){

    return __rv_smulx8(x0, x1);

}



/*
**f1:
** smulx8\ta[0-9], a[0-9], a[0-9]
** ...
*/

int16x4_t f1 (int8x4_t x0, int8x4_t x1){

    return __rv_v_smulx8(x0, x1);

}



