/* ukmar64 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpsfoperand -mabi=lp64d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** ukmar64\ta[0-9], a[0-9], a[0-9]
** ...
*/

uint64_t f0 (uint64_t x0, uintXLEN_t x1, uintXLEN_t x2){

    return __rv_ukmar64(x0, x1, x2);

}



/*
**f1:
** ukmar64\ta[0-9], a[0-9], a[0-9]
** ...
*/

uint64_t f1 (uint64_t x0, uint32x2_t x1, uint32x2_t x2){

    return __rv_v_ukmar64(x0, x1, x2);

}



