/* slli16 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O0" } */

#include <rvp_intrinsic.h>
#include <stdint.h>


static __attribute__ ((noinline))
uintXLEN_t f0 (uintXLEN_t x0, uint32_t x1){

    return __rv_sll16(x0, x1);

}



static __attribute__ ((noinline))
uint16x4_t f2 (uint16x4_t x0, uint32_t x1){

    return __rv_v_sll16(x0, x1);

}



static __attribute__ ((noinline))
uint16x2_t f3 (uint16x2_t x0, uint32_t x1){

    return __rv_v_sll16(x0, x1);

}



static __attribute__ ((noinline))
uint16x4_t f4 (uint16x4_t x0, uint32_t x1){

    return __rv_v_sll16(x0, x1);

}


/* { dg-final { scan-assembler-times "slli16" 5 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

