/* ukmsr64 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpsfoperand -mabi=lp64d -O0" } */

#include <rvp_intrinsic.h>
#include <stdint.h>


static __attribute__ ((noinline))
uint64_t f0 (uint64_t x0, uintXLEN_t x1, uintXLEN_t x2){

    return __rv_ukmsr64(x0, x1, x2);

}



static __attribute__ ((noinline))
uint64_t f1 (uint64_t x0, uint32x2_t x1, uint32x2_t x2){

    return __rv_v_ukmsr64(x0, x1, x2);

}


/* { dg-final { scan-assembler-times "ukmsr64" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

