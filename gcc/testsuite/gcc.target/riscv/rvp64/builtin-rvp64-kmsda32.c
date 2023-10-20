/* kmsda32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O0" } */

#include <rvp_intrinsic.h>
#include <stdint.h>


static __attribute__ ((noinline))
int64_t f0 (int64_t x0, int64_t x1, int64_t x2){

    return __rv_kmsda32(x0, x1, x2);

}



static __attribute__ ((noinline))
int64_t f1 (int64_t x0, int32x2_t x1, int32x2_t x2){

    return __rv_v_kmsda32(x0, x1, x2);

}


/* { dg-final { scan-assembler-times "kmsda32" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

