/* srai8 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** srai8\ta[0-9], a[0-9], 1
** ...
*/

uintXLEN_t f0 (uintXLEN_t x0, uint32_t x1){

    return __rv_sra8(x0, 1);

}



/*
**f1:
** srai8\ta[0-9], a[0-9], 1
** ...
*/

int8x4_t f1 (int8x4_t x0, uint32_t x1){

    return __rv_v_sra8(x0, 1);

}



