/* clz also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zbpbo -mabi=ilp32d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** clz\ta[0-9], a[0-9]
** ...
*/

uint32_t f0 (uint32_t x0){

    return __rv_clz(x0);

}



