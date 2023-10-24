/* srl16.u also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** srl16.u\ta[0-9], a[0-9], a[0-9]
** ...
*/

uintXLEN_t f0 (uintXLEN_t x0, uint32_t x1){

    return __rv_srl16_u(x0, x1);

}



/*
**f2:
** srl16.u\ta[0-9], a[0-9], a[0-9]
** ...
*/

uint16x4_t f2 (uint16x4_t x0, uint32_t x1){

    return __rv_v_srl16_u(x0, x1);

}



/*
**f3:
** srl16.u\ta[0-9], a[0-9], a[0-9]
** ...
*/

uint16x2_t f3 (uint16x2_t x0, uint32_t x1){

    return __rv_v_srl16_u(x0, x1);

}



/*
**f4:
** srl16.u\ta[0-9], a[0-9], a[0-9]
** ...
*/

uint16x4_t f4 (uint16x4_t x0, uint32_t x1){

    return __rv_v_srl16_u(x0, x1);

}



