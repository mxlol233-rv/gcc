/* kmmawt.u also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** kmmawt.u\t
** ...
*/

intXLEN_t f0 (intXLEN_t x0, intXLEN_t x1, uintXLEN_t x2){

    return __rv_kmmawt_u(x0, x1, x2);

}



/*
**f2:
** kmmawt.u\t
** ...
*/

int32x2_t f2 (int32x2_t x0, int32x2_t x1, int16x4_t x2){

    return __rv_v_kmmawt_u(x0, x1, x2);

}



