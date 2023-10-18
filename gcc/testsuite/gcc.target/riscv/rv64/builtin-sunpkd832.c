/* sunpkd832 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=pl64d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
uintXLEN_t f0 (uintXLEN_t x0){

    return __rv_sunpkd832(x0);

}



static __attribute__ ((noinline))
int16x4_t f2 (int8x8_t x0){

    return __rv_v_sunpkd832(x0);

}


/* { dg-final { scan-assembler-times "sunpkd832" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

