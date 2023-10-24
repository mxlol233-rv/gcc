/* khmtt also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** khmtt\ta[0-9], a[0-9], a[0-9]
** ...
*/

int32_t f0 (uint32_t x0, uint32_t x1){

    return __rv_khmtt(x0, x1);

}



/*
**f1:
** khmtt\ta[0-9], a[0-9], a[0-9]
** ...
*/

int32_t f1 (int16x2_t x0, int16x2_t x1){

    return __rv_v_khmtt(x0, x1);

}



