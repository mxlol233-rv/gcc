/* ucmple8 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** ucmple8\ta[0-9], a[0-9], a[0-9]
** ...
*/

uintXLEN_t f0 (uintXLEN_t x0, uintXLEN_t x1){

    return __rv_ucmple8(x0, x1);

}



/*
**f2:
** ucmple8\ta[0-9], a[0-9], a[0-9]
** ...
*/

uint8x8_t f2 (uint8x8_t x0, uint8x8_t x1){

    return __rv_v_ucmple8(x0, x1);

}



