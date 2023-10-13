/* { dg-do compile } */
typedef short int16x2_t __attribute ((vector_size(4)));
typedef short int16x4_t __attribute ((vector_size(8)));

void test_kabs16()
{
  unsigned int c;
  unsigned int b = __builtin_riscv_kabs16(c);
}

void test_kabs16_v()
{
  int16x2_t c;
  int16x2_t b = __builtin_riscv_v_kabs16(c);
}

/* { dg-final { scan-assembler-times "kabs16" 2 } } */
