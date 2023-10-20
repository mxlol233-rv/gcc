/* uclip32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O0" } */

#include <rvp_intrinsic.h>
#include <stdint.h>


static __attribute__ ((noinline))
uintXLEN_t f0 (intXLEN_t x0, uint32_t x1){

    return __rv_uclip32(x0, x1);

}



static __attribute__ ((noinline))
uint32x2_t f1 (int32x2_t x0, uint32_t x1){

    return __rv_v_uclip32(x0, x1);

}


/* { dg-final { scan-assembler-times "uclip32" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

