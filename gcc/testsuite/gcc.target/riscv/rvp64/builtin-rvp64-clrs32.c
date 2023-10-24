/* clrs32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O1" } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <rvp_intrinsic.h>


/*
**f0:
** clrs32\ta[0-9], a[0-9]
** ...
*/

uintXLEN_t f0 (intXLEN_t x0){

    return __rv_clrs32(x0);

}



/*
**f1:
** clrs32\ta[0-9], a[0-9]
** ...
*/

uint32x2_t f1 (int32x2_t x0){

    return __rv_v_clrs32(x0);

}



