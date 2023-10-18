/* clrov also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=pl64d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
void f0 (void x0){

    return __rv_clrov(x0);

}


/* { dg-final { scan-assembler-times "clrov" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

