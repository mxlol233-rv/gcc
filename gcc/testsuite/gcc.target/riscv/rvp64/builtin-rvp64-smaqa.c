/* smaqa also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** smaqa\ta[0-9], a[0-9], a[0-9]
** ...
*/

intXLEN_t f0 (intXLEN_t x0, uintXLEN_t x1, uintXLEN_t x2){

    return __rv_smaqa(x0, x1, x2);

}



/*
**f2:
** smaqa\ta[0-9], a[0-9], a[0-9]
** ...
*/

int32x2_t f2 (int32x2_t x0, int8x8_t x1, int8x8_t x2){

    return __rv_v_smaqa(x0, x1, x2);

}



