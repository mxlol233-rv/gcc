/* sclip32 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdint.h>


static __attribute__ ((noinline))
intXLEN_t f0 (intXLEN_t x0, uint32_t x1){

    return __rv_sclip32(x0, x1);

}



static __attribute__ ((noinline))
int32x2_t f1 (int32x2_t x0, uint32_t x1){

    return __rv_v_sclip32(x0, x1);

}


/* { dg-final { scan-assembler-times "sclip32" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

