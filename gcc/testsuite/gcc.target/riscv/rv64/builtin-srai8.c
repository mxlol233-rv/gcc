/* srai8 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=pl64d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
uintXLEN_t f0 (uintXLEN_t x0, uint32_t x1){

    return __rv_sra8(x0, x1);

}



static __attribute__ ((noinline))
int8x8_t f2 (int8x8_t x0, uint32_t x1){

    return __rv_v_sra8(x0, x1);

}



static __attribute__ ((noinline))
int8x4_t f3 (int8x4_t x0, uint32_t x1){

    return __rv_v_sra8(x0, x1);

}



static __attribute__ ((noinline))
int8x8_t f4 (int8x8_t x0, uint32_t x1){

    return __rv_v_sra8(x0, x1);

}


/* { dg-final { scan-assembler-times "srai8" 5 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

