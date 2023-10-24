/* khmx16 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** khmx16\ta[0-9], a[0-9], a[0-9]
** ...
*/

uintXLEN_t f0 (uintXLEN_t x0, uintXLEN_t x1){

    return __rv_khmx16(x0, x1);

}



/*
**f1:
** khmx16\ta[0-9], a[0-9], a[0-9]
** ...
*/

int16x2_t f1 (int16x2_t x0, int16x2_t x1){

    return __rv_v_khmx16(x0, x1);

}



