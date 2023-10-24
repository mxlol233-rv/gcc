/* fsrw also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zbpbo -mabi=lp64d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** fsrw\ta[0-9], a[0-9], a[0-9], a[0-9]
** ...
*/

uint32_t f0 (uint32_t x0, uint32_t x1, uint32_t x2){

    return __rv_fsrw(x0, x1, x2);

}



