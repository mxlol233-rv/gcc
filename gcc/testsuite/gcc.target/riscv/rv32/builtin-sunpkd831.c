/* sunpkd831 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ipl32d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
uintXLEN_t f0 (uintXLEN_t x0){

    return __rv_sunpkd831(x0);

}



static __attribute__ ((noinline))
int16x2_t f1 (int8x4_t x0){

    return __rv_v_sunpkd831(x0);

}


/* { dg-final { scan-assembler-times "sunpkd831" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

