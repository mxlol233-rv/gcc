/* kabsw also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O1" } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <rvp_intrinsic.h>
#include <stdint.h>

/*
** f0:
**  kabsw\ta[0-9]+, a[0-9]+
**  ...
*/
int32_t f0 (int32_t x0){

    return __rv_kabsw(x0);

}


