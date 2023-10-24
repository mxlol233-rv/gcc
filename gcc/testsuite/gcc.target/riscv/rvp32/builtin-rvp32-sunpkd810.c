/* sunpkd810 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** sunpkd810\ta[0-9], a[0-9]
** ...
*/

uintXLEN_t f0 (uintXLEN_t x0){

    return __rv_sunpkd810(x0);

}



/*
**f1:
** sunpkd810\ta[0-9], a[0-9]
** ...
*/

int16x2_t f1 (int8x4_t x0){

    return __rv_v_sunpkd810(x0);

}



