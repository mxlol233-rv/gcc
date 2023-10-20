/* kabs32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O0" } */

#include <rvp_intrinsic.h>
#include <stdint.h>


static __attribute__ ((noinline))
int64_t f0 (int64_t x0){

    return __rv_kabs32(x0);

}



static __attribute__ ((noinline))
int32x2_t f1 (int32x2_t x0){

    return __rv_v_kabs32(x0);

}


/* { dg-final { scan-assembler-times "kabs32" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

