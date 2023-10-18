/* wexti also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpsfoperand -mabi=pl64d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
intXLEN_t f0 (uint64_t x0, uint32_t x1){

    return __rv_wext(x0, x1);

}


/* { dg-final { scan-assembler-times "wexti" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

