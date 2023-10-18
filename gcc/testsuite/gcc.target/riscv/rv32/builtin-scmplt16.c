/* scmplt16 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ipl32d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
uintXLEN_t f0 (uintXLEN_t x0, uintXLEN_t x1){

    return __rv_scmplt16(x0, x1);

}



static __attribute__ ((noinline))
uint16x2_t f1 (int16x2_t x0, int16x2_t x1){

    return __rv_v_scmplt16(x0, x1);

}


/* { dg-final { scan-assembler-times "scmplt16" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

