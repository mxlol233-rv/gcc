/* mulr64 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpsfoperand -mabi=lp64d -O0" } */

#include <rvp_intrinsic.h>
#include <stdint.h>


static __attribute__ ((noinline))
uint64_t f0 (uint32_t x0, uint32_t x1){

    return __rv_mulr64(x0, x1);

}


/* { dg-final { scan-assembler-times "mulr64" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

