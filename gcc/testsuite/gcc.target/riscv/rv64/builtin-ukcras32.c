/* ukcras32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=pl64d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
uint64_t f0 (uint64_t x0, uint64_t x1){

    return __rv_ukcras32(x0, x1);

}



static __attribute__ ((noinline))
uint32x2_t f1 (uint32x2_t x0, uint32x2_t x1){

    return __rv_v_ukcras32(x0, x1);

}


/* { dg-final { scan-assembler-times "ukcras32" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

