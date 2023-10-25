/* ksub64 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn_zpsfoperand -mabi=lp64d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** ksub64\ta[0-9], a[0-9], a[0-9]
** ...
*/

int64_t f0 (int64_t x0, int64_t x1){

    return __rv_ksub64(x0, x1);

}



