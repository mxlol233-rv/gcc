/* umulx8 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpsfoperand -mabi=lp64d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** umulx8\ta[0-9], a[0-9], a[0-9]
** ...
*/

uint64_t f0 (uint32_t x0, uint32_t x1){

    return __rv_umulx8(x0, x1);

}



/*
**f1:
** umulx8\ta[0-9], a[0-9], a[0-9]
** ...
*/

uint16x4_t f1 (uint8x4_t x0, uint8x4_t x1){

    return __rv_v_umulx8(x0, x1);

}



