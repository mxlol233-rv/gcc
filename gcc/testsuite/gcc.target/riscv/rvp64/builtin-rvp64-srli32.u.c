/* srli32.u also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** srli32.u\ta[0-9], a[0-9], 1
** ...
*/

uint64_t f0 (uint64_t x0, uint32_t x1){

    return __rv_srl32_u(x0, 1);

}



/*
**f1:
** srli32.u\ta[0-9], a[0-9], 1
** ...
*/

uint32x2_t f1 (uint32x2_t x0, uint32_t x1){

    return __rv_v_srl32_u(x0, 1);

}



/*
**f2:
** srli32.u\ta[0-9], a[0-9], 1
** ...
*/

uint32x2_t f2 (uint32x2_t x0, uint32_t x1){

    return __rv_v_srl32_u(x0, 1);

}



