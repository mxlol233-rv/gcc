/* kslraw also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=pl64d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
intXLEN_t f0 (int32_t x0, int32_t x1){

    return __rv_kslraw(x0, x1);

}


/* { dg-final { scan-assembler-times "kslraw" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

