/* smmul.u also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** smmul.u\ta[0-9], a[0-9], a[0-9]
** ...
*/

intXLEN_t f0 (intXLEN_t x0, intXLEN_t x1){

    return __rv_smmul_u(x0, x1);

}



/*
**f1:
** smmul.u\ta[0-9], a[0-9], a[0-9]
** ...
*/

int32x2_t f1 (int32x2_t x0, int32x2_t x1){

    return __rv_v_smmul_u(x0, x1);

}



