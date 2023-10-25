/* ursub64 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn_zpsfoperand -mabi=ilp32d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** ursub64\ta[0-9], a[0-9], a[0-9]
** ...
*/

uint64_t f0 (uint64_t x0, uint64_t x1){

    return __rv_ursub64(x0, x1);

}



