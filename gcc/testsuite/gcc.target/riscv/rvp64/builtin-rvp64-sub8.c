/* sub8 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** sub8\ta[0-9], a[0-9], a[0-9]
** ...
*/

uintXLEN_t f0 (uintXLEN_t x0, uintXLEN_t x1){

    return __rv_sub8(x0, x1);

}



/*
**f3:
** sub8\ta[0-9], a[0-9], a[0-9]
** ...
*/

uint8x8_t f3 (uint8x8_t x0, uint8x8_t x1){

    return __rv_v_usub8(x0, x1);

}



/*
**f4:
** sub8\ta[0-9], a[0-9], a[0-9]
** ...
*/

int8x8_t f4 (int8x8_t x0, int8x8_t x1){

    return __rv_v_ssub8(x0, x1);

}



