/* pbsada also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ipl32d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
uintXLEN_t f0 (uintXLEN_t x0, uintXLEN_t x1, uintXLEN_t x2){

    return __rv_pbsada(x0, x1, x2);

}



static __attribute__ ((noinline))
uint32_t f1 (uint32_t x0, uint8x4_t x1, uint8x4_t x2){

    return __rv_v_pbsada(x0, x1, x2);

}


/* { dg-final { scan-assembler-times "pbsada" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

