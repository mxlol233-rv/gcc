/* sunpkd820 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** sunpkd820\ta[0-9], a[0-9]
** ...
*/

uintXLEN_t f0 (uintXLEN_t x0){

    return __rv_sunpkd820(x0);

}



/*
**f2:
** sunpkd820\ta[0-9], a[0-9]
** ...
*/

int16x4_t f2 (int8x8_t x0){

    return __rv_v_sunpkd820(x0);

}



