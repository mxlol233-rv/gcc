/* kmmawt also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ipl32d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
intXLEN_t f0 (intXLEN_t x0, intXLEN_t x1, uintXLEN_t x2){

    return __rv_kmmawt(x0, x1, x2);

}



static __attribute__ ((noinline))
int32_t f1 (int32_t x0, int32_t x1, int16x2_t x2){

    return __rv_v_kmmawt(x0, x1, x2);

}


/* { dg-final { scan-assembler-times "kmmawt" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

