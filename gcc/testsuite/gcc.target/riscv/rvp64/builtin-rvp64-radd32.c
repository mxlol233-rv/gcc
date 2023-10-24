/* radd32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** radd32\ta[0-9], a[0-9], a[0-9]
** ...
*/

int64_t f0 (int64_t x0, int64_t x1){

    return __rv_radd32(x0, x1);

}



/*
**f1:
** radd32\ta[0-9], a[0-9], a[0-9]
** ...
*/

int32x2_t f1 (int32x2_t x0, int32x2_t x1){

    return __rv_v_radd32(x0, x1);

}



/*
**f2:
** radd32\ta[0-9], a[0-9], a[0-9]
** ...
*/

uint32x2_t f2 (uint32x2_t x0, uint32x2_t x1){

    return __rv_v_uradd32(x0, x1);

}



