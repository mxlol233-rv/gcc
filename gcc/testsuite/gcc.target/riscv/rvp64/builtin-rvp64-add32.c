/* add32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O0" } */

#include <rvp_intrinsic.h>
#include <stdint.h>


static __attribute__ ((noinline))
uint64_t f0 (uint64_t x0, uint64_t x1){

    return __rv_add32(x0, x1);

}



static __attribute__ ((noinline))
uint32x2_t f1 (uint32x2_t x0, uint32x2_t x1){

    return __rv_v_uadd32(x0, x1);

}



static __attribute__ ((noinline))
int32x2_t f2 (int32x2_t x0, int32x2_t x1){

    return __rv_v_sadd32(x0, x1);

}


/* { dg-final { scan-assembler-times "add32" 4 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

