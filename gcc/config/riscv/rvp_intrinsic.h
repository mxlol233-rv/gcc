/* Builtin definitions for P extension
   Copyright (C) 2023 Free Software Foundation, Inc.
This file is part of GCC.
GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.
GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#ifndef _RISCV_RVP_INTRINSIC_H
#define _RISCV_RVP_INTRINSIC_H

typedef signed char int8x4_t __attribute ((vector_size (4)));
typedef signed char int8x8_t __attribute ((vector_size (8)));
typedef short int16x2_t __attribute ((vector_size (4)));
typedef short int16x4_t __attribute__ ((vector_size (8)));
typedef short int16x8_t __attribute__ ((vector_size (16)));
typedef int int32x2_t __attribute__ ((vector_size (8)));
typedef int int32x4_t __attribute__ ((vector_size (16)));
typedef unsigned char uint8x4_t __attribute__ ((vector_size (4)));
typedef unsigned char uint8x8_t __attribute__ ((vector_size (8)));
typedef unsigned short uint16x2_t __attribute__ ((vector_size (4)));
typedef unsigned short uint16x4_t __attribute__ ((vector_size (8)));
typedef unsigned short uint16x8_t __attribute__ ((vector_size (16)));
typedef unsigned int uint32x2_t __attribute__ ((vector_size (8)));
typedef unsigned int uint32x4_t __attribute__ ((vector_size (16)));

#define __riscv_add8( X0, X1 ) __builtin_riscv_add8( x0, x1 ) 
#define __riscv_v_uadd8( X0, X1 ) __builtin_riscv_v_uadd8( x0, x1 ) 
#define __riscv_v_sadd8( X0, X1 ) __builtin_riscv_v_sadd8( x0, x1 ) 
#define __riscv_add16( X0, X1 ) __builtin_riscv_add16( x0, x1 ) 
#define __riscv_v_uadd16( X0, X1 ) __builtin_riscv_v_uadd16( x0, x1 ) 
#define __riscv_v_sadd16( X0, X1 ) __builtin_riscv_v_sadd16( x0, x1 ) 
#define __riscv_sadd64( X0, X1 ) __builtin_riscv_sadd64( x0, x1 ) 
#define __riscv_uadd64( X0, X1 ) __builtin_riscv_uadd64( x0, x1 ) 
#define __riscv_ave( X0, X1 ) __builtin_riscv_ave( x0, x1 ) 
#define __riscv_bitrev( X0, X1 ) __builtin_riscv_bitrev( x0, x1 ) 
#define __riscv_bpick( X0, X1, X2 ) __builtin_riscv_bpick( x0, x1, x2 ) 
#define __riscv_clrov( X0 ) __builtin_riscv_clrov( x0 ) 
#define __riscv_clrs8( X0 ) __builtin_riscv_clrs8( x0 ) 
#define __riscv_v_clrs8( X0 ) __builtin_riscv_v_clrs8( x0 ) 
#define __riscv_clrs16( X0 ) __builtin_riscv_clrs16( x0 ) 
#define __riscv_v_clrs16( X0 ) __builtin_riscv_v_clrs16( x0 ) 
#define __riscv_clrs32( X0 ) __builtin_riscv_clrs32( x0 ) 
#define __riscv_v_clrs32( X0 ) __builtin_riscv_v_clrs32( x0 ) 
#define __riscv_clz8( X0 ) __builtin_riscv_clz8( x0 ) 
#define __riscv_v_clz8( X0 ) __builtin_riscv_v_clz8( x0 ) 
#define __riscv_clz16( X0 ) __builtin_riscv_clz16( x0 ) 
#define __riscv_v_clz16( X0 ) __builtin_riscv_v_clz16( x0 ) 
#define __riscv_clz32( X0 ) __builtin_riscv_clz32( x0 ) 
#define __riscv_v_clz32( X0 ) __builtin_riscv_v_clz32( x0 ) 
#define __riscv_cmpeq8( X0, X1 ) __builtin_riscv_cmpeq8( x0, x1 ) 
#define __riscv_v_scmpeq8( X0, X1 ) __builtin_riscv_v_scmpeq8( x0, x1 ) 
#define __riscv_v_ucmpeq8( X0, X1 ) __builtin_riscv_v_ucmpeq8( x0, x1 ) 
#define __riscv_cmpeq16( X0, X1 ) __builtin_riscv_cmpeq16( x0, x1 ) 
#define __riscv_v_scmpeq16( X0, X1 ) __builtin_riscv_v_scmpeq16( x0, x1 ) 
#define __riscv_v_ucmpeq16( X0, X1 ) __builtin_riscv_v_ucmpeq16( x0, x1 ) 
#define __riscv_cras16( X0, X1 ) __builtin_riscv_cras16( x0, x1 ) 
#define __riscv_v_ucras16( X0, X1 ) __builtin_riscv_v_ucras16( x0, x1 ) 
#define __riscv_v_scras16( X0, X1 ) __builtin_riscv_v_scras16( x0, x1 ) 
#define __riscv_crsa16( X0, X1 ) __builtin_riscv_crsa16( x0, x1 ) 
#define __riscv_v_ucrsa16( X0, X1 ) __builtin_riscv_v_ucrsa16( x0, x1 ) 
#define __riscv_v_scrsa16( X0, X1 ) __builtin_riscv_v_scrsa16( x0, x1 ) 
#define __riscv_insb( X0, X1, X2 ) __builtin_riscv_insb( x0, x1, x2 ) 
#define __riscv_kabs8( X0 ) __builtin_riscv_kabs8( x0 ) 
#define __riscv_v_kabs8( X0 ) __builtin_riscv_v_kabs8( x0 ) 
#define __riscv_kabs16( X0 ) __builtin_riscv_kabs16( x0 ) 
#define __riscv_v_kabs16( X0 ) __builtin_riscv_v_kabs16( x0 ) 
#define __riscv_kabsw( X0 ) __builtin_riscv_kabsw( x0 ) 
#define __riscv_kadd8( X0, X1 ) __builtin_riscv_kadd8( x0, x1 ) 
#define __riscv_v_kadd8( X0, X1 ) __builtin_riscv_v_kadd8( x0, x1 ) 
#define __riscv_kadd16( X0, X1 ) __builtin_riscv_kadd16( x0, x1 ) 
#define __riscv_v_kadd16( X0, X1 ) __builtin_riscv_v_kadd16( x0, x1 ) 
#define __riscv_kadd64( X0, X1 ) __builtin_riscv_kadd64( x0, x1 ) 
#define __riscv_kaddh( X0, X1 ) __builtin_riscv_kaddh( x0, x1 ) 
#define __riscv_kaddw( X0, X1 ) __builtin_riscv_kaddw( x0, x1 ) 
#define __riscv_kcras16( X0, X1 ) __builtin_riscv_kcras16( x0, x1 ) 
#define __riscv_v_kcras16( X0, X1 ) __builtin_riscv_v_kcras16( x0, x1 ) 
#define __riscv_kcrsa16( X0, X1 ) __builtin_riscv_kcrsa16( x0, x1 ) 
#define __riscv_v_kcrsa16( X0, X1 ) __builtin_riscv_v_kcrsa16( x0, x1 ) 
#define __riscv_kdmbb( X0, X1 ) __builtin_riscv_kdmbb( x0, x1 ) 
#define __riscv_v_kdmbb( X0, X1 ) __builtin_riscv_v_kdmbb( x0, x1 ) 
#define __riscv_kdmbt( X0, X1 ) __builtin_riscv_kdmbt( x0, x1 ) 
#define __riscv_v_kdmbt( X0, X1 ) __builtin_riscv_v_kdmbt( x0, x1 ) 
#define __riscv_kdmtt( X0, X1 ) __builtin_riscv_kdmtt( x0, x1 ) 
#define __riscv_v_kdmtt( X0, X1 ) __builtin_riscv_v_kdmtt( x0, x1 ) 
#define __riscv_kdmabb( X0, X1, X2 ) __builtin_riscv_kdmabb( x0, x1, x2 ) 
#define __riscv_v_kdmabb( X0, X1, X2 ) __builtin_riscv_v_kdmabb( x0, x1, x2 ) 
#define __riscv_kdmabt( X0, X1, X2 ) __builtin_riscv_kdmabt( x0, x1, x2 ) 
#define __riscv_v_kdmabt( X0, X1, X2 ) __builtin_riscv_v_kdmabt( x0, x1, x2 ) 
#define __riscv_kdmatt( X0, X1, X2 ) __builtin_riscv_kdmatt( x0, x1, x2 ) 
#define __riscv_v_kdmatt( X0, X1, X2 ) __builtin_riscv_v_kdmatt( x0, x1, x2 ) 
#define __riscv_khm8( X0, X1 ) __builtin_riscv_khm8( x0, x1 ) 
#define __riscv_v_khm8( X0, X1 ) __builtin_riscv_v_khm8( x0, x1 ) 
#define __riscv_khmx8( X0, X1 ) __builtin_riscv_khmx8( x0, x1 ) 
#define __riscv_v_khmx8( X0, X1 ) __builtin_riscv_v_khmx8( x0, x1 ) 
#define __riscv_khm16( X0, X1 ) __builtin_riscv_khm16( x0, x1 ) 
#define __riscv_v_khm16( X0, X1 ) __builtin_riscv_v_khm16( x0, x1 ) 
#define __riscv_khmx16( X0, X1 ) __builtin_riscv_khmx16( x0, x1 ) 
#define __riscv_v_khmx16( X0, X1 ) __builtin_riscv_v_khmx16( x0, x1 ) 
#define __riscv_khmbb( X0, X1 ) __builtin_riscv_khmbb( x0, x1 ) 
#define __riscv_v_khmbb( X0, X1 ) __builtin_riscv_v_khmbb( x0, x1 ) 
#define __riscv_khmbt( X0, X1 ) __builtin_riscv_khmbt( x0, x1 ) 
#define __riscv_v_khmbt( X0, X1 ) __builtin_riscv_v_khmbt( x0, x1 ) 
#define __riscv_khmtt( X0, X1 ) __builtin_riscv_khmtt( x0, x1 ) 
#define __riscv_v_khmtt( X0, X1 ) __builtin_riscv_v_khmtt( x0, x1 ) 
#define __riscv_kmabb( X0, X1, X2 ) __builtin_riscv_kmabb( x0, x1, x2 ) 
#define __riscv_v_kmabb( X0, X1, X2 ) __builtin_riscv_v_kmabb( x0, x1, x2 ) 
#define __riscv_kmabt( X0, X1, X2 ) __builtin_riscv_kmabt( x0, x1, x2 ) 
#define __riscv_v_kmabt( X0, X1, X2 ) __builtin_riscv_v_kmabt( x0, x1, x2 ) 
#define __riscv_kmatt( X0, X1, X2 ) __builtin_riscv_kmatt( x0, x1, x2 ) 
#define __riscv_v_kmatt( X0, X1, X2 ) __builtin_riscv_v_kmatt( x0, x1, x2 ) 
#define __riscv_kmada( X0, X1, X2 ) __builtin_riscv_kmada( x0, x1, x2 ) 
#define __riscv_v_kmada( X0, X1, X2 ) __builtin_riscv_v_kmada( x0, x1, x2 ) 
#define __riscv_kmaxda( X0, X1, X2 ) __builtin_riscv_kmaxda( x0, x1, x2 ) 
#define __riscv_v_kmaxda( X0, X1, X2 ) __builtin_riscv_v_kmaxda( x0, x1, x2 ) 
#define __riscv_kmads( X0, X1, X2 ) __builtin_riscv_kmads( x0, x1, x2 ) 
#define __riscv_v_kmads( X0, X1, X2 ) __builtin_riscv_v_kmads( x0, x1, x2 ) 
#define __riscv_kmadrs( X0, X1, X2 ) __builtin_riscv_kmadrs( x0, x1, x2 ) 
#define __riscv_v_kmadrs( X0, X1, X2 ) __builtin_riscv_v_kmadrs( x0, x1, x2 ) 
#define __riscv_kmaxds( X0, X1, X2 ) __builtin_riscv_kmaxds( x0, x1, x2 ) 
#define __riscv_v_kmaxds( X0, X1, X2 ) __builtin_riscv_v_kmaxds( x0, x1, x2 ) 
#define __riscv_kmar64( X0, X1, X2 ) __builtin_riscv_kmar64( x0, x1, x2 ) 
#define __riscv_v_kmar64( X0, X1, X2 ) __builtin_riscv_v_kmar64( x0, x1, x2 ) 
#define __riscv_v_ukmar64( X0, X1, X2 ) __builtin_riscv_v_ukmar64( x0, x1, x2 ) 
#define __riscv_kmda( X0, X1 ) __builtin_riscv_kmda( x0, x1 ) 
#define __riscv_v_kmda( X0, X1 ) __builtin_riscv_v_kmda( x0, x1 ) 
#define __riscv_kmxda( X0, X1 ) __builtin_riscv_kmxda( x0, x1 ) 
#define __riscv_v_kmxda( X0, X1 ) __builtin_riscv_v_kmxda( x0, x1 ) 
#define __riscv_kmmac( X0, X1, X2 ) __builtin_riscv_kmmac( x0, x1, x2 ) 
#define __riscv_v_kmmac( X0, X1, X2 ) __builtin_riscv_v_kmmac( x0, x1, x2 ) 
#define __riscv_kmmac_u( X0, X1, X2 ) __builtin_riscv_kmmac_u( x0, x1, x2 ) 
#define __riscv_v_kmmac_u( X0, X1, X2 ) __builtin_riscv_v_kmmac_u( x0, x1, x2 ) 
#define __riscv_kmmawb( X0, X1, X2 ) __builtin_riscv_kmmawb( x0, x1, x2 ) 
#define __riscv_v_kmmawb( X0, X1, X2 ) __builtin_riscv_v_kmmawb( x0, x1, x2 ) 
#define __riscv_kmmawb_u( X0, X1, X2 ) __builtin_riscv_kmmawb_u( x0, x1, x2 ) 
#define __riscv_v_kmmawb_u( X0, X1, X2 ) __builtin_riscv_v_kmmawb_u( x0, x1, x2 ) 
#define __riscv_kmmawb2( X0, X1, X2 ) __builtin_riscv_kmmawb2( x0, x1, x2 ) 
#define __riscv_v_kmmawb2( X0, X1, X2 ) __builtin_riscv_v_kmmawb2( x0, x1, x2 ) 
#define __riscv_kmmawb2_u( X0, X1, X2 ) __builtin_riscv_kmmawb2_u( x0, x1, x2 ) 
#define __riscv_v_kmmawb2_u( X0, X1, X2 ) __builtin_riscv_v_kmmawb2_u( x0, x1, x2 ) 
#define __riscv_kmmawt( X0, X1, X2 ) __builtin_riscv_kmmawt( x0, x1, x2 ) 
#define __riscv_v_kmmawt( X0, X1, X2 ) __builtin_riscv_v_kmmawt( x0, x1, x2 ) 
#define __riscv_kmmawt_u( X0, X1, X2 ) __builtin_riscv_kmmawt_u( x0, x1, x2 ) 
#define __riscv_v_kmmawt_u( X0, X1, X2 ) __builtin_riscv_v_kmmawt_u( x0, x1, x2 ) 
#define __riscv_kmmawt2( X0, X1, X2 ) __builtin_riscv_kmmawt2( x0, x1, x2 ) 
#define __riscv_v_kmmawt2( X0, X1, X2 ) __builtin_riscv_v_kmmawt2( x0, x1, x2 ) 
#define __riscv_kmmawt2_u( X0, X1, X2 ) __builtin_riscv_kmmawt2_u( x0, x1, x2 ) 
#define __riscv_v_kmmawt2_u( X0, X1, X2 ) __builtin_riscv_v_kmmawt2_u( x0, x1, x2 ) 
#define __riscv_kmmsb( X0, X1, X2 ) __builtin_riscv_kmmsb( x0, x1, x2 ) 
#define __riscv_v_kmmsb( X0, X1, X2 ) __builtin_riscv_v_kmmsb( x0, x1, x2 ) 
#define __riscv_kmmsb_u( X0, X1, X2 ) __builtin_riscv_kmmsb_u( x0, x1, x2 ) 
#define __riscv_v_kmmsb_u( X0, X1, X2 ) __builtin_riscv_v_kmmsb_u( x0, x1, x2 ) 
#define __riscv_kmmwb2( X0, X1 ) __builtin_riscv_kmmwb2( x0, x1 ) 
#define __riscv_v_kmmwb2( X0, X1 ) __builtin_riscv_v_kmmwb2( x0, x1 ) 
#define __riscv_kmmwb2_u( X0, X1 ) __builtin_riscv_kmmwb2_u( x0, x1 ) 
#define __riscv_v_kmmwb2_u( X0, X1 ) __builtin_riscv_v_kmmwb2_u( x0, x1 ) 
#define __riscv_kmmwt2( X0, X1 ) __builtin_riscv_kmmwt2( x0, x1 ) 
#define __riscv_v_kmmwt2( X0, X1 ) __builtin_riscv_v_kmmwt2( x0, x1 ) 
#define __riscv_kmmwt2_u( X0, X1 ) __builtin_riscv_kmmwt2_u( x0, x1 ) 
#define __riscv_v_kmmwt2_u( X0, X1 ) __builtin_riscv_v_kmmwt2_u( x0, x1 ) 
#define __riscv_kmsda( X0, X1, X2 ) __builtin_riscv_kmsda( x0, x1, x2 ) 
#define __riscv_v_kmsda( X0, X1, X2 ) __builtin_riscv_v_kmsda( x0, x1, x2 ) 
#define __riscv_kmsxda( X0, X1, X2 ) __builtin_riscv_kmsxda( x0, x1, x2 ) 
#define __riscv_v_kmsxda( X0, X1, X2 ) __builtin_riscv_v_kmsxda( x0, x1, x2 ) 
#define __riscv_kmsr64( X0, X1, X2 ) __builtin_riscv_kmsr64( x0, x1, x2 ) 
#define __riscv_v_kmsr64( X0, X1, X2 ) __builtin_riscv_v_kmsr64( x0, x1, x2 ) 
#define __riscv_v_ukmsr64( X0, X1, X2 ) __builtin_riscv_v_ukmsr64( x0, x1, x2 ) 
#define __riscv_ksllw( X0, X1 ) __builtin_riscv_ksllw( x0, x1 ) 
#define __riscv_ksll8( X0, X1 ) __builtin_riscv_ksll8( x0, x1 ) 
#define __riscv_v_ksll8( X0, X1 ) __builtin_riscv_v_ksll8( x0, x1 ) 
#define __riscv_ksll16( X0, X1 ) __builtin_riscv_ksll16( x0, x1 ) 
#define __riscv_v_ksll16( X0, X1 ) __builtin_riscv_v_ksll16( x0, x1 ) 
#define __riscv_kslra8( X0, X1 ) __builtin_riscv_kslra8( x0, x1 ) 
#define __riscv_v_kslra8( X0, X1 ) __builtin_riscv_v_kslra8( x0, x1 ) 
#define __riscv_kslra8_u( X0, X1 ) __builtin_riscv_kslra8_u( x0, x1 ) 
#define __riscv_v_kslra8_u( X0, X1 ) __builtin_riscv_v_kslra8_u( x0, x1 ) 
#define __riscv_kslra16( X0, X1 ) __builtin_riscv_kslra16( x0, x1 ) 
#define __riscv_v_kslra16( X0, X1 ) __builtin_riscv_v_kslra16( x0, x1 ) 
#define __riscv_kslra16_u( X0, X1 ) __builtin_riscv_kslra16_u( x0, x1 ) 
#define __riscv_v_kslra16_u( X0, X1 ) __builtin_riscv_v_kslra16_u( x0, x1 ) 
#define __riscv_kslraw( X0, X1 ) __builtin_riscv_kslraw( x0, x1 ) 
#define __riscv_kslraw_u( X0, X1 ) __builtin_riscv_kslraw_u( x0, x1 ) 
#define __riscv_kstas16( X0, X1 ) __builtin_riscv_kstas16( x0, x1 ) 
#define __riscv_v_kstas16( X0, X1 ) __builtin_riscv_v_kstas16( x0, x1 ) 
#define __riscv_kstsa16( X0, X1 ) __builtin_riscv_kstsa16( x0, x1 ) 
#define __riscv_v_kstsa16( X0, X1 ) __builtin_riscv_v_kstsa16( x0, x1 ) 
#define __riscv_ksub8( X0, X1 ) __builtin_riscv_ksub8( x0, x1 ) 
#define __riscv_v_ksub8( X0, X1 ) __builtin_riscv_v_ksub8( x0, x1 ) 
#define __riscv_ksub16( X0, X1 ) __builtin_riscv_ksub16( x0, x1 ) 
#define __riscv_v_ksub16( X0, X1 ) __builtin_riscv_v_ksub16( x0, x1 ) 
#define __riscv_ksub64( X0, X1 ) __builtin_riscv_ksub64( x0, x1 ) 
#define __riscv_ksubh( X0, X1 ) __builtin_riscv_ksubh( x0, x1 ) 
#define __riscv_ksubw( X0, X1 ) __builtin_riscv_ksubw( x0, x1 ) 
#define __riscv_kwmmul( X0, X1 ) __builtin_riscv_kwmmul( x0, x1 ) 
#define __riscv_v_kwmmul( X0, X1 ) __builtin_riscv_v_kwmmul( x0, x1 ) 
#define __riscv_kwmmul_u( X0, X1 ) __builtin_riscv_kwmmul_u( x0, x1 ) 
#define __riscv_v_kwmmul_u( X0, X1 ) __builtin_riscv_v_kwmmul_u( x0, x1 ) 
#define __riscv_maddr32( X0, X1, X2 ) __builtin_riscv_maddr32( x0, x1, x2 ) 
#define __riscv_maxw( X0, X1 ) __builtin_riscv_maxw( x0, x1 ) 
#define __riscv_minw( X0, X1 ) __builtin_riscv_minw( x0, x1 ) 
#define __riscv_msubr32( X0, X1, X2 ) __builtin_riscv_msubr32( x0, x1, x2 ) 
#define __riscv_mulr64( X0, X1 ) __builtin_riscv_mulr64( x0, x1 ) 
#define __riscv_mulsr64( X0, X1 ) __builtin_riscv_mulsr64( x0, x1 ) 
#define __riscv_pbsad( X0, X1 ) __builtin_riscv_pbsad( x0, x1 ) 
#define __riscv_v_pbsad( X0, X1 ) __builtin_riscv_v_pbsad( x0, x1 ) 
#define __riscv_pbsada( X0, X1, X2 ) __builtin_riscv_pbsada( x0, x1, x2 ) 
#define __riscv_v_pbsada( X0, X1, X2 ) __builtin_riscv_v_pbsada( x0, x1, x2 ) 
#define __riscv_pkbb16( X0, X1 ) __builtin_riscv_pkbb16( x0, x1 ) 
#define __riscv_v_pkbb16( X0, X1 ) __builtin_riscv_v_pkbb16( x0, x1 ) 
#define __riscv_pkbt16( X0, X1 ) __builtin_riscv_pkbt16( x0, x1 ) 
#define __riscv_v_pkbt16( X0, X1 ) __builtin_riscv_v_pkbt16( x0, x1 ) 
#define __riscv_pktt16( X0, X1 ) __builtin_riscv_pktt16( x0, x1 ) 
#define __riscv_v_pktt16( X0, X1 ) __builtin_riscv_v_pktt16( x0, x1 ) 
#define __riscv_pktb16( X0, X1 ) __builtin_riscv_pktb16( x0, x1 ) 
#define __riscv_v_pktb16( X0, X1 ) __builtin_riscv_v_pktb16( x0, x1 ) 
#define __riscv_radd8( X0, X1 ) __builtin_riscv_radd8( x0, x1 ) 
#define __riscv_v_radd8( X0, X1 ) __builtin_riscv_v_radd8( x0, x1 ) 
#define __riscv_radd16( X0, X1 ) __builtin_riscv_radd16( x0, x1 ) 
#define __riscv_v_radd16( X0, X1 ) __builtin_riscv_v_radd16( x0, x1 ) 
#define __riscv_radd64( X0, X1 ) __builtin_riscv_radd64( x0, x1 ) 
#define __riscv_raddw( X0, X1 ) __builtin_riscv_raddw( x0, x1 ) 
#define __riscv_rcras16( X0, X1 ) __builtin_riscv_rcras16( x0, x1 ) 
#define __riscv_v_rcras16( X0, X1 ) __builtin_riscv_v_rcras16( x0, x1 ) 
#define __riscv_rcrsa16( X0, X1 ) __builtin_riscv_rcrsa16( x0, x1 ) 
#define __riscv_v_rcrsa16( X0, X1 ) __builtin_riscv_v_rcrsa16( x0, x1 ) 
#define __riscv_rdov( X0 ) __builtin_riscv_rdov( x0 ) 
#define __riscv_rstas16( X0, X1 ) __builtin_riscv_rstas16( x0, x1 ) 
#define __riscv_v_rstas16( X0, X1 ) __builtin_riscv_v_rstas16( x0, x1 ) 
#define __riscv_rstsa16( X0, X1 ) __builtin_riscv_rstsa16( x0, x1 ) 
#define __riscv_v_rstsa16( X0, X1 ) __builtin_riscv_v_rstsa16( x0, x1 ) 
#define __riscv_rsub8( X0, X1 ) __builtin_riscv_rsub8( x0, x1 ) 
#define __riscv_v_rsub8( X0, X1 ) __builtin_riscv_v_rsub8( x0, x1 ) 
#define __riscv_rsub16( X0, X1 ) __builtin_riscv_rsub16( x0, x1 ) 
#define __riscv_v_rsub16( X0, X1 ) __builtin_riscv_v_rsub16( x0, x1 ) 
#define __riscv_rsub64( X0, X1 ) __builtin_riscv_rsub64( x0, x1 ) 
#define __riscv_rsubw( X0, X1 ) __builtin_riscv_rsubw( x0, x1 ) 
#define __riscv_sclip8( X0, X1 ) __builtin_riscv_sclip8( x0, x1 ) 
#define __riscv_v_sclip8( X0, X1 ) __builtin_riscv_v_sclip8( x0, x1 ) 
#define __riscv_sclip16( X0, X1 ) __builtin_riscv_sclip16( x0, x1 ) 
#define __riscv_v_sclip16( X0, X1 ) __builtin_riscv_v_sclip16( x0, x1 ) 
#define __riscv_sclip32( X0, X1 ) __builtin_riscv_sclip32( x0, x1 ) 
#define __riscv_v_sclip32( X0, X1 ) __builtin_riscv_v_sclip32( x0, x1 ) 
#define __riscv_scmple8( X0, X1 ) __builtin_riscv_scmple8( x0, x1 ) 
#define __riscv_v_scmple8( X0, X1 ) __builtin_riscv_v_scmple8( x0, x1 ) 
#define __riscv_scmple16( X0, X1 ) __builtin_riscv_scmple16( x0, x1 ) 
#define __riscv_v_scmple16( X0, X1 ) __builtin_riscv_v_scmple16( x0, x1 ) 
#define __riscv_scmplt8( X0, X1 ) __builtin_riscv_scmplt8( x0, x1 ) 
#define __riscv_v_scmplt8( X0, X1 ) __builtin_riscv_v_scmplt8( x0, x1 ) 
#define __riscv_scmplt16( X0, X1 ) __builtin_riscv_scmplt16( x0, x1 ) 
#define __riscv_v_scmplt16( X0, X1 ) __builtin_riscv_v_scmplt16( x0, x1 ) 
#define __riscv_sll8( X0, X1 ) __builtin_riscv_sll8( x0, x1 ) 
#define __riscv_v_sll8( X0, X1 ) __builtin_riscv_v_sll8( x0, x1 ) 
#define __riscv_sll16( X0, X1 ) __builtin_riscv_sll16( x0, x1 ) 
#define __riscv_v_sll16( X0, X1 ) __builtin_riscv_v_sll16( x0, x1 ) 
#define __riscv_smal( X0, X1 ) __builtin_riscv_smal( x0, x1 ) 
#define __riscv_v_smal( X0, X1 ) __builtin_riscv_v_smal( x0, x1 ) 
#define __riscv_smalbb( X0, X1, X2 ) __builtin_riscv_smalbb( x0, x1, x2 ) 
#define __riscv_v_smalbb( X0, X1, X2 ) __builtin_riscv_v_smalbb( x0, x1, x2 ) 
#define __riscv_smalbt( X0, X1, X2 ) __builtin_riscv_smalbt( x0, x1, x2 ) 
#define __riscv_v_smalbt( X0, X1, X2 ) __builtin_riscv_v_smalbt( x0, x1, x2 ) 
#define __riscv_smaltt( X0, X1, X2 ) __builtin_riscv_smaltt( x0, x1, x2 ) 
#define __riscv_v_smaltt( X0, X1, X2 ) __builtin_riscv_v_smaltt( x0, x1, x2 ) 
#define __riscv_smalda( X0, X1, X2 ) __builtin_riscv_smalda( x0, x1, x2 ) 
#define __riscv_v_smalda( X0, X1, X2 ) __builtin_riscv_v_smalda( x0, x1, x2 ) 
#define __riscv_smalxda( X0, X1, X2 ) __builtin_riscv_smalxda( x0, x1, x2 ) 
#define __riscv_v_smalxda( X0, X1, X2 ) __builtin_riscv_v_smalxda( x0, x1, x2 ) 
#define __riscv_smalds( X0, X1, X2 ) __builtin_riscv_smalds( x0, x1, x2 ) 
#define __riscv_v_smalds( X0, X1, X2 ) __builtin_riscv_v_smalds( x0, x1, x2 ) 
#define __riscv_smaldrs( X0, X1, X2 ) __builtin_riscv_smaldrs( x0, x1, x2 ) 
#define __riscv_v_smaldrs( X0, X1, X2 ) __builtin_riscv_v_smaldrs( x0, x1, x2 ) 
#define __riscv_smalxds( X0, X1, X2 ) __builtin_riscv_smalxds( x0, x1, x2 ) 
#define __riscv_v_smalxds( X0, X1, X2 ) __builtin_riscv_v_smalxds( x0, x1, x2 ) 
#define __riscv_smar64( X0, X1, X2 ) __builtin_riscv_smar64( x0, x1, x2 ) 
#define __riscv_v_smar64( X0, X1, X2 ) __builtin_riscv_v_smar64( x0, x1, x2 ) 
#define __riscv_smaqa( X0, X1, X2 ) __builtin_riscv_smaqa( x0, x1, x2 ) 
#define __riscv_v_smaqa( X0, X1, X2 ) __builtin_riscv_v_smaqa( x0, x1, x2 ) 
#define __riscv_smaqa_su( X0, X1, X2 ) __builtin_riscv_smaqa_su( x0, x1, x2 ) 
#define __riscv_v_smaqa_su( X0, X1, X2 ) __builtin_riscv_v_smaqa_su( x0, x1, x2 ) 
#define __riscv_smax8( X0, X1 ) __builtin_riscv_smax8( x0, x1 ) 
#define __riscv_v_smax8( X0, X1 ) __builtin_riscv_v_smax8( x0, x1 ) 
#define __riscv_smax16( X0, X1 ) __builtin_riscv_smax16( x0, x1 ) 
#define __riscv_v_smax16( X0, X1 ) __builtin_riscv_v_smax16( x0, x1 ) 
#define __riscv_smbb16( X0, X1 ) __builtin_riscv_smbb16( x0, x1 ) 
#define __riscv_v_smbb16( X0, X1 ) __builtin_riscv_v_smbb16( x0, x1 ) 
#define __riscv_smbt16( X0, X1 ) __builtin_riscv_smbt16( x0, x1 ) 
#define __riscv_v_smbt16( X0, X1 ) __builtin_riscv_v_smbt16( x0, x1 ) 
#define __riscv_smtt16( X0, X1 ) __builtin_riscv_smtt16( x0, x1 ) 
#define __riscv_v_smtt16( X0, X1 ) __builtin_riscv_v_smtt16( x0, x1 ) 
#define __riscv_smds( X0, X1 ) __builtin_riscv_smds( x0, x1 ) 
#define __riscv_v_smds( X0, X1 ) __builtin_riscv_v_smds( x0, x1 ) 
#define __riscv_smdrs( X0, X1 ) __builtin_riscv_smdrs( x0, x1 ) 
#define __riscv_v_smdrs( X0, X1 ) __builtin_riscv_v_smdrs( x0, x1 ) 
#define __riscv_smxds( X0, X1 ) __builtin_riscv_smxds( x0, x1 ) 
#define __riscv_v_smxds( X0, X1 ) __builtin_riscv_v_smxds( x0, x1 ) 
#define __riscv_smin8( X0, X1 ) __builtin_riscv_smin8( x0, x1 ) 
#define __riscv_v_smin8( X0, X1 ) __builtin_riscv_v_smin8( x0, x1 ) 
#define __riscv_smin16( X0, X1 ) __builtin_riscv_smin16( x0, x1 ) 
#define __riscv_v_smin16( X0, X1 ) __builtin_riscv_v_smin16( x0, x1 ) 
#define __riscv_smmul( X0, X1 ) __builtin_riscv_smmul( x0, x1 ) 
#define __riscv_v_smmul( X0, X1 ) __builtin_riscv_v_smmul( x0, x1 ) 
#define __riscv_smmul_u( X0, X1 ) __builtin_riscv_smmul_u( x0, x1 ) 
#define __riscv_v_smmul_u( X0, X1 ) __builtin_riscv_v_smmul_u( x0, x1 ) 
#define __riscv_smmwb( X0, X1 ) __builtin_riscv_smmwb( x0, x1 ) 
#define __riscv_v_smmwb( X0, X1 ) __builtin_riscv_v_smmwb( x0, x1 ) 
#define __riscv_smmwb_u( X0, X1 ) __builtin_riscv_smmwb_u( x0, x1 ) 
#define __riscv_v_smmwb_u( X0, X1 ) __builtin_riscv_v_smmwb_u( x0, x1 ) 
#define __riscv_smmwt( X0, X1 ) __builtin_riscv_smmwt( x0, x1 ) 
#define __riscv_v_smmwt( X0, X1 ) __builtin_riscv_v_smmwt( x0, x1 ) 
#define __riscv_smmwt_u( X0, X1 ) __builtin_riscv_smmwt_u( x0, x1 ) 
#define __riscv_v_smmwt_u( X0, X1 ) __builtin_riscv_v_smmwt_u( x0, x1 ) 
#define __riscv_smslda( X0, X1, X2 ) __builtin_riscv_smslda( x0, x1, x2 ) 
#define __riscv_v_smslda( X0, X1, X2 ) __builtin_riscv_v_smslda( x0, x1, x2 ) 
#define __riscv_smslxda( X0, X1, X2 ) __builtin_riscv_smslxda( x0, x1, x2 ) 
#define __riscv_v_smslxda( X0, X1, X2 ) __builtin_riscv_v_smslxda( x0, x1, x2 ) 
#define __riscv_smsr64( X0, X1, X2 ) __builtin_riscv_smsr64( x0, x1, x2 ) 
#define __riscv_v_smsr64( X0, X1, X2 ) __builtin_riscv_v_smsr64( x0, x1, x2 ) 
#define __riscv_smul8( X0, X1 ) __builtin_riscv_smul8( x0, x1 ) 
#define __riscv_v_smul8( X0, X1 ) __builtin_riscv_v_smul8( x0, x1 ) 
#define __riscv_smulx8( X0, X1 ) __builtin_riscv_smulx8( x0, x1 ) 
#define __riscv_v_smulx8( X0, X1 ) __builtin_riscv_v_smulx8( x0, x1 ) 
#define __riscv_smul16( X0, X1 ) __builtin_riscv_smul16( x0, x1 ) 
#define __riscv_v_smul16( X0, X1 ) __builtin_riscv_v_smul16( x0, x1 ) 
#define __riscv_smulx16( X0, X1 ) __builtin_riscv_smulx16( x0, x1 ) 
#define __riscv_v_smulx16( X0, X1 ) __builtin_riscv_v_smulx16( x0, x1 ) 
#define __riscv_sra_u( X0, X1 ) __builtin_riscv_sra_u( x0, x1 ) 
#define __riscv_sra8( X0, X1 ) __builtin_riscv_sra8( x0, x1 ) 
#define __riscv_v_sra8( X0, X1 ) __builtin_riscv_v_sra8( x0, x1 ) 
#define __riscv_sra8_u( X0, X1 ) __builtin_riscv_sra8_u( x0, x1 ) 
#define __riscv_v_sra8_u( X0, X1 ) __builtin_riscv_v_sra8_u( x0, x1 ) 
#define __riscv_sra16( X0, X1 ) __builtin_riscv_sra16( x0, x1 ) 
#define __riscv_v_sra16( X0, X1 ) __builtin_riscv_v_sra16( x0, x1 ) 
#define __riscv_sra16_u( X0, X1 ) __builtin_riscv_sra16_u( x0, x1 ) 
#define __riscv_v_sra16_u( X0, X1 ) __builtin_riscv_v_sra16_u( x0, x1 ) 
#define __riscv_srl8( X0, X1 ) __builtin_riscv_srl8( x0, x1 ) 
#define __riscv_v_srl8( X0, X1 ) __builtin_riscv_v_srl8( x0, x1 ) 
#define __riscv_srl8_u( X0, X1 ) __builtin_riscv_srl8_u( x0, x1 ) 
#define __riscv_v_srl8_u( X0, X1 ) __builtin_riscv_v_srl8_u( x0, x1 ) 
#define __riscv_srl16( X0, X1 ) __builtin_riscv_srl16( x0, x1 ) 
#define __riscv_v_srl16( X0, X1 ) __builtin_riscv_v_srl16( x0, x1 ) 
#define __riscv_srl16_u( X0, X1 ) __builtin_riscv_srl16_u( x0, x1 ) 
#define __riscv_v_srl16_u( X0, X1 ) __builtin_riscv_v_srl16_u( x0, x1 ) 
#define __riscv_stas16( X0, X1 ) __builtin_riscv_stas16( x0, x1 ) 
#define __riscv_v_ustas16( X0, X1 ) __builtin_riscv_v_ustas16( x0, x1 ) 
#define __riscv_v_sstas16( X0, X1 ) __builtin_riscv_v_sstas16( x0, x1 ) 
#define __riscv_stsa16( X0, X1 ) __builtin_riscv_stsa16( x0, x1 ) 
#define __riscv_v_ustsa16( X0, X1 ) __builtin_riscv_v_ustsa16( x0, x1 ) 
#define __riscv_v_sstsa16( X0, X1 ) __builtin_riscv_v_sstsa16( x0, x1 ) 
#define __riscv_sub8( X0, X1 ) __builtin_riscv_sub8( x0, x1 ) 
#define __riscv_v_usub8( X0, X1 ) __builtin_riscv_v_usub8( x0, x1 ) 
#define __riscv_v_ssub8( X0, X1 ) __builtin_riscv_v_ssub8( x0, x1 ) 
#define __riscv_sub16( X0, X1 ) __builtin_riscv_sub16( x0, x1 ) 
#define __riscv_v_usub16( X0, X1 ) __builtin_riscv_v_usub16( x0, x1 ) 
#define __riscv_v_ssub16( X0, X1 ) __builtin_riscv_v_ssub16( x0, x1 ) 
#define __riscv_ssub64( X0, X1 ) __builtin_riscv_ssub64( x0, x1 ) 
#define __riscv_usub64( X0, X1 ) __builtin_riscv_usub64( x0, x1 ) 
#define __riscv_sunpkd810( X0 ) __builtin_riscv_sunpkd810( x0 ) 
#define __riscv_v_sunpkd810( X0 ) __builtin_riscv_v_sunpkd810( x0 ) 
#define __riscv_sunpkd820( X0 ) __builtin_riscv_sunpkd820( x0 ) 
#define __riscv_v_sunpkd820( X0 ) __builtin_riscv_v_sunpkd820( x0 ) 
#define __riscv_sunpkd830( X0 ) __builtin_riscv_sunpkd830( x0 ) 
#define __riscv_v_sunpkd830( X0 ) __builtin_riscv_v_sunpkd830( x0 ) 
#define __riscv_sunpkd831( X0 ) __builtin_riscv_sunpkd831( x0 ) 
#define __riscv_v_sunpkd831( X0 ) __builtin_riscv_v_sunpkd831( x0 ) 
#define __riscv_sunpkd832( X0 ) __builtin_riscv_sunpkd832( x0 ) 
#define __riscv_v_sunpkd832( X0 ) __builtin_riscv_v_sunpkd832( x0 ) 
#define __riscv_swap8( X0 ) __builtin_riscv_swap8( x0 ) 
#define __riscv_v_swap8( X0 ) __builtin_riscv_v_swap8( x0 ) 
#define __riscv_swap16( X0 ) __builtin_riscv_swap16( x0 ) 
#define __riscv_v_swap16( X0 ) __builtin_riscv_v_swap16( x0 ) 
#define __riscv_uclip8( X0, X1 ) __builtin_riscv_uclip8( x0, x1 ) 
#define __riscv_v_uclip8( X0, X1 ) __builtin_riscv_v_uclip8( x0, x1 ) 
#define __riscv_uclip16( X0, X1 ) __builtin_riscv_uclip16( x0, x1 ) 
#define __riscv_v_uclip16( X0, X1 ) __builtin_riscv_v_uclip16( x0, x1 ) 
#define __riscv_uclip32( X0, X1 ) __builtin_riscv_uclip32( x0, x1 ) 
#define __riscv_v_uclip32( X0, X1 ) __builtin_riscv_v_uclip32( x0, x1 ) 
#define __riscv_ucmple8( X0, X1 ) __builtin_riscv_ucmple8( x0, x1 ) 
#define __riscv_v_ucmple8( X0, X1 ) __builtin_riscv_v_ucmple8( x0, x1 ) 
#define __riscv_ucmple16( X0, X1 ) __builtin_riscv_ucmple16( x0, x1 ) 
#define __riscv_v_ucmple16( X0, X1 ) __builtin_riscv_v_ucmple16( x0, x1 ) 
#define __riscv_ucmplt8( X0, X1 ) __builtin_riscv_ucmplt8( x0, x1 ) 
#define __riscv_v_ucmplt8( X0, X1 ) __builtin_riscv_v_ucmplt8( x0, x1 ) 
#define __riscv_ucmplt16( X0, X1 ) __builtin_riscv_ucmplt16( x0, x1 ) 
#define __riscv_v_ucmplt16( X0, X1 ) __builtin_riscv_v_ucmplt16( x0, x1 ) 
#define __riscv_ukadd8( X0, X1 ) __builtin_riscv_ukadd8( x0, x1 ) 
#define __riscv_v_ukadd8( X0, X1 ) __builtin_riscv_v_ukadd8( x0, x1 ) 
#define __riscv_ukadd16( X0, X1 ) __builtin_riscv_ukadd16( x0, x1 ) 
#define __riscv_v_ukadd16( X0, X1 ) __builtin_riscv_v_ukadd16( x0, x1 ) 
#define __riscv_ukadd64( X0, X1 ) __builtin_riscv_ukadd64( x0, x1 ) 
#define __riscv_ukaddh( X0, X1 ) __builtin_riscv_ukaddh( x0, x1 ) 
#define __riscv_ukaddw( X0, X1 ) __builtin_riscv_ukaddw( x0, x1 ) 
#define __riscv_ukcras16( X0, X1 ) __builtin_riscv_ukcras16( x0, x1 ) 
#define __riscv_v_ukcras16( X0, X1 ) __builtin_riscv_v_ukcras16( x0, x1 ) 
#define __riscv_ukcrsa16( X0, X1 ) __builtin_riscv_ukcrsa16( x0, x1 ) 
#define __riscv_v_ukcrsa16( X0, X1 ) __builtin_riscv_v_ukcrsa16( x0, x1 ) 
#define __riscv_ukmar64( X0, X1, X2 ) __builtin_riscv_ukmar64( x0, x1, x2 ) 
#define __riscv_ukmsr64( X0, X1, X2 ) __builtin_riscv_ukmsr64( x0, x1, x2 ) 
#define __riscv_ukstas16( X0, X1 ) __builtin_riscv_ukstas16( x0, x1 ) 
#define __riscv_v_ukstas16( X0, X1 ) __builtin_riscv_v_ukstas16( x0, x1 ) 
#define __riscv_ukstsa16( X0, X1 ) __builtin_riscv_ukstsa16( x0, x1 ) 
#define __riscv_v_ukstsa16( X0, X1 ) __builtin_riscv_v_ukstsa16( x0, x1 ) 
#define __riscv_uksub8( X0, X1 ) __builtin_riscv_uksub8( x0, x1 ) 
#define __riscv_v_uksub8( X0, X1 ) __builtin_riscv_v_uksub8( x0, x1 ) 
#define __riscv_uksub16( X0, X1 ) __builtin_riscv_uksub16( x0, x1 ) 
#define __riscv_v_uksub16( X0, X1 ) __builtin_riscv_v_uksub16( x0, x1 ) 
#define __riscv_uksub64( X0, X1 ) __builtin_riscv_uksub64( x0, x1 ) 
#define __riscv_uksubh( X0, X1 ) __builtin_riscv_uksubh( x0, x1 ) 
#define __riscv_uksubw( X0, X1 ) __builtin_riscv_uksubw( x0, x1 ) 
#define __riscv_umar64( X0, X1, X2 ) __builtin_riscv_umar64( x0, x1, x2 ) 
#define __riscv_v_umar64( X0, X1, X2 ) __builtin_riscv_v_umar64( x0, x1, x2 ) 
#define __riscv_umaqa( X0, X1, X2 ) __builtin_riscv_umaqa( x0, x1, x2 ) 
#define __riscv_v_umaqa( X0, X1, X2 ) __builtin_riscv_v_umaqa( x0, x1, x2 ) 
#define __riscv_umax8( X0, X1 ) __builtin_riscv_umax8( x0, x1 ) 
#define __riscv_v_umax8( X0, X1 ) __builtin_riscv_v_umax8( x0, x1 ) 
#define __riscv_umax16( X0, X1 ) __builtin_riscv_umax16( x0, x1 ) 
#define __riscv_v_umax16( X0, X1 ) __builtin_riscv_v_umax16( x0, x1 ) 
#define __riscv_umin8( X0, X1 ) __builtin_riscv_umin8( x0, x1 ) 
#define __riscv_v_umin8( X0, X1 ) __builtin_riscv_v_umin8( x0, x1 ) 
#define __riscv_umin16( X0, X1 ) __builtin_riscv_umin16( x0, x1 ) 
#define __riscv_v_umin16( X0, X1 ) __builtin_riscv_v_umin16( x0, x1 ) 
#define __riscv_umsr64( X0, X1, X2 ) __builtin_riscv_umsr64( x0, x1, x2 ) 
#define __riscv_v_umsr64( X0, X1, X2 ) __builtin_riscv_v_umsr64( x0, x1, x2 ) 
#define __riscv_umul8( X0, X1 ) __builtin_riscv_umul8( x0, x1 ) 
#define __riscv_v_umul8( X0, X1 ) __builtin_riscv_v_umul8( x0, x1 ) 
#define __riscv_umulx8( X0, X1 ) __builtin_riscv_umulx8( x0, x1 ) 
#define __riscv_v_umulx8( X0, X1 ) __builtin_riscv_v_umulx8( x0, x1 ) 
#define __riscv_umul16( X0, X1 ) __builtin_riscv_umul16( x0, x1 ) 
#define __riscv_v_umul16( X0, X1 ) __builtin_riscv_v_umul16( x0, x1 ) 
#define __riscv_umulx16( X0, X1 ) __builtin_riscv_umulx16( x0, x1 ) 
#define __riscv_v_umulx16( X0, X1 ) __builtin_riscv_v_umulx16( x0, x1 ) 
#define __riscv_uradd8( X0, X1 ) __builtin_riscv_uradd8( x0, x1 ) 
#define __riscv_v_uradd8( X0, X1 ) __builtin_riscv_v_uradd8( x0, x1 ) 
#define __riscv_uradd16( X0, X1 ) __builtin_riscv_uradd16( x0, x1 ) 
#define __riscv_v_uradd16( X0, X1 ) __builtin_riscv_v_uradd16( x0, x1 ) 
#define __riscv_uradd64( X0, X1 ) __builtin_riscv_uradd64( x0, x1 ) 
#define __riscv_uraddw( X0, X1 ) __builtin_riscv_uraddw( x0, x1 ) 
#define __riscv_urcras16( X0, X1 ) __builtin_riscv_urcras16( x0, x1 ) 
#define __riscv_v_urcras16( X0, X1 ) __builtin_riscv_v_urcras16( x0, x1 ) 
#define __riscv_urcrsa16( X0, X1 ) __builtin_riscv_urcrsa16( x0, x1 ) 
#define __riscv_v_urcrsa16( X0, X1 ) __builtin_riscv_v_urcrsa16( x0, x1 ) 
#define __riscv_urstas16( X0, X1 ) __builtin_riscv_urstas16( x0, x1 ) 
#define __riscv_v_urstas16( X0, X1 ) __builtin_riscv_v_urstas16( x0, x1 ) 
#define __riscv_urstsa16( X0, X1 ) __builtin_riscv_urstsa16( x0, x1 ) 
#define __riscv_v_urstsa16( X0, X1 ) __builtin_riscv_v_urstsa16( x0, x1 ) 
#define __riscv_ursub8( X0, X1 ) __builtin_riscv_ursub8( x0, x1 ) 
#define __riscv_v_ursub8( X0, X1 ) __builtin_riscv_v_ursub8( x0, x1 ) 
#define __riscv_ursub16( X0, X1 ) __builtin_riscv_ursub16( x0, x1 ) 
#define __riscv_v_ursub16( X0, X1 ) __builtin_riscv_v_ursub16( x0, x1 ) 
#define __riscv_ursub64( X0, X1 ) __builtin_riscv_ursub64( x0, x1 ) 
#define __riscv_ursubw( X0, X1 ) __builtin_riscv_ursubw( x0, x1 ) 
#define __riscv_wext( X0, X1 ) __builtin_riscv_wext( x0, x1 ) 
#define __riscv_zunpkd810( X0 ) __builtin_riscv_zunpkd810( x0 ) 
#define __riscv_v_zunpkd810( X0 ) __builtin_riscv_v_zunpkd810( x0 ) 
#define __riscv_zunpkd820( X0 ) __builtin_riscv_zunpkd820( x0 ) 
#define __riscv_v_zunpkd820( X0 ) __builtin_riscv_v_zunpkd820( x0 ) 
#define __riscv_zunpkd830( X0 ) __builtin_riscv_zunpkd830( x0 ) 
#define __riscv_v_zunpkd830( X0 ) __builtin_riscv_v_zunpkd830( x0 ) 
#define __riscv_zunpkd831( X0 ) __builtin_riscv_zunpkd831( x0 ) 
#define __riscv_v_zunpkd831( X0 ) __builtin_riscv_v_zunpkd831( x0 ) 
#define __riscv_zunpkd832( X0 ) __builtin_riscv_zunpkd832( x0 ) 
#define __riscv_v_zunpkd832( X0 ) __builtin_riscv_v_zunpkd832( x0 ) 
#define __riscv_add32( X0, X1 ) __builtin_riscv_add32( x0, x1 ) 
#define __riscv_v_uadd32( X0, X1 ) __builtin_riscv_v_uadd32( x0, x1 ) 
#define __riscv_v_sadd32( X0, X1 ) __builtin_riscv_v_sadd32( x0, x1 ) 
#define __riscv_cras32( X0, X1 ) __builtin_riscv_cras32( x0, x1 ) 
#define __riscv_v_ucras32( X0, X1 ) __builtin_riscv_v_ucras32( x0, x1 ) 
#define __riscv_v_scras32( X0, X1 ) __builtin_riscv_v_scras32( x0, x1 ) 
#define __riscv_crsa32( X0, X1 ) __builtin_riscv_crsa32( x0, x1 ) 
#define __riscv_v_ucrsa32( X0, X1 ) __builtin_riscv_v_ucrsa32( x0, x1 ) 
#define __riscv_v_scrsa32( X0, X1 ) __builtin_riscv_v_scrsa32( x0, x1 ) 
#define __riscv_kabs32( X0 ) __builtin_riscv_kabs32( x0 ) 
#define __riscv_v_kabs32( X0 ) __builtin_riscv_v_kabs32( x0 ) 
#define __riscv_kadd32( X0, X1 ) __builtin_riscv_kadd32( x0, x1 ) 
#define __riscv_v_kadd32( X0, X1 ) __builtin_riscv_v_kadd32( x0, x1 ) 
#define __riscv_v_ukadd32( X0, X1 ) __builtin_riscv_v_ukadd32( x0, x1 ) 
#define __riscv_kcras32( X0, X1 ) __builtin_riscv_kcras32( x0, x1 ) 
#define __riscv_v_kcras32( X0, X1 ) __builtin_riscv_v_kcras32( x0, x1 ) 
#define __riscv_v_ukcras32( X0, X1 ) __builtin_riscv_v_ukcras32( x0, x1 ) 
#define __riscv_kcrsa32( X0, X1 ) __builtin_riscv_kcrsa32( x0, x1 ) 
#define __riscv_v_kcrsa32( X0, X1 ) __builtin_riscv_v_kcrsa32( x0, x1 ) 
#define __riscv_v_ukcrsa32( X0, X1 ) __builtin_riscv_v_ukcrsa32( x0, x1 ) 
#define __riscv_kdmbb16( X0, X1 ) __builtin_riscv_kdmbb16( x0, x1 ) 
#define __riscv_v_kdmbb16( X0, X1 ) __builtin_riscv_v_kdmbb16( x0, x1 ) 
#define __riscv_kdmbt16( X0, X1 ) __builtin_riscv_kdmbt16( x0, x1 ) 
#define __riscv_v_kdmbt16( X0, X1 ) __builtin_riscv_v_kdmbt16( x0, x1 ) 
#define __riscv_kdmtt16( X0, X1 ) __builtin_riscv_kdmtt16( x0, x1 ) 
#define __riscv_v_kdmtt16( X0, X1 ) __builtin_riscv_v_kdmtt16( x0, x1 ) 
#define __riscv_kdmabb16( X0, X1, X2 ) __builtin_riscv_kdmabb16( x0, x1, x2 ) 
#define __riscv_v_kdmabb16( X0, X1, X2 ) __builtin_riscv_v_kdmabb16( x0, x1, x2 ) 
#define __riscv_kdmabt16( X0, X1, X2 ) __builtin_riscv_kdmabt16( x0, x1, x2 ) 
#define __riscv_v_kdmabt16( X0, X1, X2 ) __builtin_riscv_v_kdmabt16( x0, x1, x2 ) 
#define __riscv_kdmatt16( X0, X1, X2 ) __builtin_riscv_kdmatt16( x0, x1, x2 ) 
#define __riscv_v_kdmatt16( X0, X1, X2 ) __builtin_riscv_v_kdmatt16( x0, x1, x2 ) 
#define __riscv_khmbb16( X0, X1 ) __builtin_riscv_khmbb16( x0, x1 ) 
#define __riscv_v_khmbb16( X0, X1 ) __builtin_riscv_v_khmbb16( x0, x1 ) 
#define __riscv_khmbt16( X0, X1 ) __builtin_riscv_khmbt16( x0, x1 ) 
#define __riscv_v_khmbt16( X0, X1 ) __builtin_riscv_v_khmbt16( x0, x1 ) 
#define __riscv_khmtt16( X0, X1 ) __builtin_riscv_khmtt16( x0, x1 ) 
#define __riscv_v_khmtt16( X0, X1 ) __builtin_riscv_v_khmtt16( x0, x1 ) 
#define __riscv_kmabb32( X0, X1, X2 ) __builtin_riscv_kmabb32( x0, x1, x2 ) 
#define __riscv_v_kmabb32( X0, X1, X2 ) __builtin_riscv_v_kmabb32( x0, x1, x2 ) 
#define __riscv_kmabt32( X0, X1, X2 ) __builtin_riscv_kmabt32( x0, x1, x2 ) 
#define __riscv_v_kmabt32( X0, X1, X2 ) __builtin_riscv_v_kmabt32( x0, x1, x2 ) 
#define __riscv_kmatt32( X0, X1, X2 ) __builtin_riscv_kmatt32( x0, x1, x2 ) 
#define __riscv_v_kmatt32( X0, X1, X2 ) __builtin_riscv_v_kmatt32( x0, x1, x2 ) 
#define __riscv_kmada32( X0, X1, X2 ) __builtin_riscv_kmada32( x0, x1, x2 ) 
#define __riscv_v_kmada32( X0, X1, X2 ) __builtin_riscv_v_kmada32( x0, x1, x2 ) 
#define __riscv_kmaxda32( X0, X1, X2 ) __builtin_riscv_kmaxda32( x0, x1, x2 ) 
#define __riscv_v_kmaxda32( X0, X1, X2 ) __builtin_riscv_v_kmaxda32( x0, x1, x2 ) 
#define __riscv_kmda32( X0, X1 ) __builtin_riscv_kmda32( x0, x1 ) 
#define __riscv_v_kmda32( X0, X1 ) __builtin_riscv_v_kmda32( x0, x1 ) 
#define __riscv_kmxda32( X0, X1 ) __builtin_riscv_kmxda32( x0, x1 ) 
#define __riscv_v_kmxda32( X0, X1 ) __builtin_riscv_v_kmxda32( x0, x1 ) 
#define __riscv_kmads32( X0, X1, X2 ) __builtin_riscv_kmads32( x0, x1, x2 ) 
#define __riscv_v_kmads32( X0, X1, X2 ) __builtin_riscv_v_kmads32( x0, x1, x2 ) 
#define __riscv_kmadrs32( X0, X1, X2 ) __builtin_riscv_kmadrs32( x0, x1, x2 ) 
#define __riscv_v_kmadrs32( X0, X1, X2 ) __builtin_riscv_v_kmadrs32( x0, x1, x2 ) 
#define __riscv_kmaxds32( X0, X1, X2 ) __builtin_riscv_kmaxds32( x0, x1, x2 ) 
#define __riscv_v_kmaxds32( X0, X1, X2 ) __builtin_riscv_v_kmaxds32( x0, x1, x2 ) 
#define __riscv_kmsda32( X0, X1, X2 ) __builtin_riscv_kmsda32( x0, x1, x2 ) 
#define __riscv_v_kmsda32( X0, X1, X2 ) __builtin_riscv_v_kmsda32( x0, x1, x2 ) 
#define __riscv_kmsxda32( X0, X1, X2 ) __builtin_riscv_kmsxda32( x0, x1, x2 ) 
#define __riscv_v_kmsxda32( X0, X1, X2 ) __builtin_riscv_v_kmsxda32( x0, x1, x2 ) 
#define __riscv_ksll32( X0, X1 ) __builtin_riscv_ksll32( x0, x1 ) 
#define __riscv_v_ksll32( X0, X1 ) __builtin_riscv_v_ksll32( x0, x1 ) 
#define __riscv_kslra32( X0, X1 ) __builtin_riscv_kslra32( x0, x1 ) 
#define __riscv_v_kslra32( X0, X1 ) __builtin_riscv_v_kslra32( x0, x1 ) 
#define __riscv_kslra32_u( X0, X1 ) __builtin_riscv_kslra32_u( x0, x1 ) 
#define __riscv_v_kslra32_u( X0, X1 ) __builtin_riscv_v_kslra32_u( x0, x1 ) 
#define __riscv_kstas32( X0, X1 ) __builtin_riscv_kstas32( x0, x1 ) 
#define __riscv_v_kstas32( X0, X1 ) __builtin_riscv_v_kstas32( x0, x1 ) 
#define __riscv_v_ukstas32( X0, X1 ) __builtin_riscv_v_ukstas32( x0, x1 ) 
#define __riscv_kstsa32( X0, X1 ) __builtin_riscv_kstsa32( x0, x1 ) 
#define __riscv_v_kstsa32( X0, X1 ) __builtin_riscv_v_kstsa32( x0, x1 ) 
#define __riscv_v_ukstsa32( X0, X1 ) __builtin_riscv_v_ukstsa32( x0, x1 ) 
#define __riscv_ksub32( X0, X1 ) __builtin_riscv_ksub32( x0, x1 ) 
#define __riscv_v_ksub32( X0, X1 ) __builtin_riscv_v_ksub32( x0, x1 ) 
#define __riscv_v_uksub32( X0, X1 ) __builtin_riscv_v_uksub32( x0, x1 ) 
#define __riscv_pkbb32( X0, X1 ) __builtin_riscv_pkbb32( x0, x1 ) 
#define __riscv_v_pkbb32( X0, X1 ) __builtin_riscv_v_pkbb32( x0, x1 ) 
#define __riscv_pkbt32( X0, X1 ) __builtin_riscv_pkbt32( x0, x1 ) 
#define __riscv_v_pkbt32( X0, X1 ) __builtin_riscv_v_pkbt32( x0, x1 ) 
#define __riscv_pktb32( X0, X1 ) __builtin_riscv_pktb32( x0, x1 ) 
#define __riscv_v_pktb32( X0, X1 ) __builtin_riscv_v_pktb32( x0, x1 ) 
#define __riscv_pktt32( X0, X1 ) __builtin_riscv_pktt32( x0, x1 ) 
#define __riscv_v_pktt32( X0, X1 ) __builtin_riscv_v_pktt32( x0, x1 ) 
#define __riscv_radd32( X0, X1 ) __builtin_riscv_radd32( x0, x1 ) 
#define __riscv_v_radd32( X0, X1 ) __builtin_riscv_v_radd32( x0, x1 ) 
#define __riscv_v_uradd32( X0, X1 ) __builtin_riscv_v_uradd32( x0, x1 ) 
#define __riscv_rcras32( X0, X1 ) __builtin_riscv_rcras32( x0, x1 ) 
#define __riscv_v_rcras32( X0, X1 ) __builtin_riscv_v_rcras32( x0, x1 ) 
#define __riscv_v_urcras32( X0, X1 ) __builtin_riscv_v_urcras32( x0, x1 ) 
#define __riscv_rcrsa32( X0, X1 ) __builtin_riscv_rcrsa32( x0, x1 ) 
#define __riscv_v_rcrsa32( X0, X1 ) __builtin_riscv_v_rcrsa32( x0, x1 ) 
#define __riscv_v_urcrsa32( X0, X1 ) __builtin_riscv_v_urcrsa32( x0, x1 ) 
#define __riscv_rstas32( X0, X1 ) __builtin_riscv_rstas32( x0, x1 ) 
#define __riscv_v_rstas32( X0, X1 ) __builtin_riscv_v_rstas32( x0, x1 ) 
#define __riscv_v_urstas32( X0, X1 ) __builtin_riscv_v_urstas32( x0, x1 ) 
#define __riscv_rstsa32( X0, X1 ) __builtin_riscv_rstsa32( x0, x1 ) 
#define __riscv_v_rstsa32( X0, X1 ) __builtin_riscv_v_rstsa32( x0, x1 ) 
#define __riscv_v_urstsa32( X0, X1 ) __builtin_riscv_v_urstsa32( x0, x1 ) 
#define __riscv_rsub32( X0, X1 ) __builtin_riscv_rsub32( x0, x1 ) 
#define __riscv_v_rsub32( X0, X1 ) __builtin_riscv_v_rsub32( x0, x1 ) 
#define __riscv_v_ursub32( X0, X1 ) __builtin_riscv_v_ursub32( x0, x1 ) 
#define __riscv_sll32( X0, X1 ) __builtin_riscv_sll32( x0, x1 ) 
#define __riscv_v_sll32( X0, X1 ) __builtin_riscv_v_sll32( x0, x1 ) 
#define __riscv_smax32( X0, X1 ) __builtin_riscv_smax32( x0, x1 ) 
#define __riscv_v_smax32( X0, X1 ) __builtin_riscv_v_smax32( x0, x1 ) 
#define __riscv_smbb32( X0, X1 ) __builtin_riscv_smbb32( x0, x1 ) 
#define __riscv_v_smbb32( X0, X1 ) __builtin_riscv_v_smbb32( x0, x1 ) 
#define __riscv_smbt32( X0, X1 ) __builtin_riscv_smbt32( x0, x1 ) 
#define __riscv_v_smbt32( X0, X1 ) __builtin_riscv_v_smbt32( x0, x1 ) 
#define __riscv_smtt32( X0, X1 ) __builtin_riscv_smtt32( x0, x1 ) 
#define __riscv_v_smtt32( X0, X1 ) __builtin_riscv_v_smtt32( x0, x1 ) 
#define __riscv_smds32( X0, X1 ) __builtin_riscv_smds32( x0, x1 ) 
#define __riscv_v_smds32( X0, X1 ) __builtin_riscv_v_smds32( x0, x1 ) 
#define __riscv_smdrs32( X0, X1 ) __builtin_riscv_smdrs32( x0, x1 ) 
#define __riscv_v_smdrs32( X0, X1 ) __builtin_riscv_v_smdrs32( x0, x1 ) 
#define __riscv_smxds32( X0, X1 ) __builtin_riscv_smxds32( x0, x1 ) 
#define __riscv_v_smxds32( X0, X1 ) __builtin_riscv_v_smxds32( x0, x1 ) 
#define __riscv_smin32( X0, X1 ) __builtin_riscv_smin32( x0, x1 ) 
#define __riscv_v_smin32( X0, X1 ) __builtin_riscv_v_smin32( x0, x1 ) 
#define __riscv_sra32( X0, X1 ) __builtin_riscv_sra32( x0, x1 ) 
#define __riscv_v_sra32( X0, X1 ) __builtin_riscv_v_sra32( x0, x1 ) 
#define __riscv_sra32_u( X0, X1 ) __builtin_riscv_sra32_u( x0, x1 ) 
#define __riscv_v_sra32_u( X0, X1 ) __builtin_riscv_v_sra32_u( x0, x1 ) 
#define __riscv_sraw_u( X0, X1 ) __builtin_riscv_sraw_u( x0, x1 ) 
#define __riscv_srl32( X0, X1 ) __builtin_riscv_srl32( x0, x1 ) 
#define __riscv_v_srl32( X0, X1 ) __builtin_riscv_v_srl32( x0, x1 ) 
#define __riscv_srl32_u( X0, X1 ) __builtin_riscv_srl32_u( x0, x1 ) 
#define __riscv_v_srl32_u( X0, X1 ) __builtin_riscv_v_srl32_u( x0, x1 ) 
#define __riscv_stas32( X0, X1 ) __builtin_riscv_stas32( x0, x1 ) 
#define __riscv_v_ustas32( X0, X1 ) __builtin_riscv_v_ustas32( x0, x1 ) 
#define __riscv_v_sstas32( X0, X1 ) __builtin_riscv_v_sstas32( x0, x1 ) 
#define __riscv_stsa32( X0, X1 ) __builtin_riscv_stsa32( x0, x1 ) 
#define __riscv_v_ustsa32( X0, X1 ) __builtin_riscv_v_ustsa32( x0, x1 ) 
#define __riscv_v_sstsa32( X0, X1 ) __builtin_riscv_v_sstsa32( x0, x1 ) 
#define __riscv_sub32( X0, X1 ) __builtin_riscv_sub32( x0, x1 ) 
#define __riscv_v_usub32( X0, X1 ) __builtin_riscv_v_usub32( x0, x1 ) 
#define __riscv_v_ssub32( X0, X1 ) __builtin_riscv_v_ssub32( x0, x1 ) 
#define __riscv_ukadd32( X0, X1 ) __builtin_riscv_ukadd32( x0, x1 ) 
#define __riscv_ukcras32( X0, X1 ) __builtin_riscv_ukcras32( x0, x1 ) 
#define __riscv_ukcrsa32( X0, X1 ) __builtin_riscv_ukcrsa32( x0, x1 ) 
#define __riscv_ukstas32( X0, X1 ) __builtin_riscv_ukstas32( x0, x1 ) 
#define __riscv_ukstsa32( X0, X1 ) __builtin_riscv_ukstsa32( x0, x1 ) 
#define __riscv_uksub32( X0, X1 ) __builtin_riscv_uksub32( x0, x1 ) 
#define __riscv_umax32( X0, X1 ) __builtin_riscv_umax32( x0, x1 ) 
#define __riscv_v_umax32( X0, X1 ) __builtin_riscv_v_umax32( x0, x1 ) 
#define __riscv_umin32( X0, X1 ) __builtin_riscv_umin32( x0, x1 ) 
#define __riscv_v_umin32( X0, X1 ) __builtin_riscv_v_umin32( x0, x1 ) 
#define __riscv_uradd32( X0, X1 ) __builtin_riscv_uradd32( x0, x1 ) 
#define __riscv_urcras32( X0, X1 ) __builtin_riscv_urcras32( x0, x1 ) 
#define __riscv_urcrsa32( X0, X1 ) __builtin_riscv_urcrsa32( x0, x1 ) 
#define __riscv_urstas32( X0, X1 ) __builtin_riscv_urstas32( x0, x1 ) 
#define __riscv_urstsa32( X0, X1 ) __builtin_riscv_urstsa32( x0, x1 ) 
#define __riscv_ursub32( X0, X1 ) __builtin_riscv_ursub32( x0, x1 ) 
#define __riscv_clz( X0 ) __builtin_riscv_clz( x0 ) 
#define __riscv_cmix( X0, X1, X2 ) __builtin_riscv_cmix( x0, x1, x2 ) 
#define __riscv_fsrw( X0, X1, X2 ) __builtin_riscv_fsrw( x0, x1, x2 ) 
#define __riscv_max( X0, X1 ) __builtin_riscv_max( x0, x1 ) 
#define __riscv_min( X0, X1 ) __builtin_riscv_min( x0, x1 ) 
#define __riscv_rev( X0 ) __builtin_riscv_rev( x0 ) 
#define __riscv_fsr( X0, X1, X2 ) __builtin_riscv_fsr( x0, x1, x2 ) 
#define __riscv_pack( X0, X1 ) __builtin_riscv_pack( x0, x1 ) 
#define __riscv_packu( X0, X1 ) __builtin_riscv_packu( x0, x1 ) 

#define __rv_add8 __riscv_add8 
#define __rv_v_uadd8 __riscv_v_uadd8 
#define __rv_v_sadd8 __riscv_v_sadd8 
#define __rv_add16 __riscv_add16 
#define __rv_v_uadd16 __riscv_v_uadd16 
#define __rv_v_sadd16 __riscv_v_sadd16 
#define __rv_sadd64 __riscv_sadd64 
#define __rv_uadd64 __riscv_uadd64 
#define __rv_ave __riscv_ave 
#define __rv_bitrev __riscv_bitrev 
#define __rv_bpick __riscv_bpick 
#define __rv_clrov __riscv_clrov 
#define __rv_clrs8 __riscv_clrs8 
#define __rv_v_clrs8 __riscv_v_clrs8 
#define __rv_clrs16 __riscv_clrs16 
#define __rv_v_clrs16 __riscv_v_clrs16 
#define __rv_clrs32 __riscv_clrs32 
#define __rv_v_clrs32 __riscv_v_clrs32 
#define __rv_clz8 __riscv_clz8 
#define __rv_v_clz8 __riscv_v_clz8 
#define __rv_clz16 __riscv_clz16 
#define __rv_v_clz16 __riscv_v_clz16 
#define __rv_clz32 __riscv_clz32 
#define __rv_v_clz32 __riscv_v_clz32 
#define __rv_cmpeq8 __riscv_cmpeq8 
#define __rv_v_scmpeq8 __riscv_v_scmpeq8 
#define __rv_v_ucmpeq8 __riscv_v_ucmpeq8 
#define __rv_cmpeq16 __riscv_cmpeq16 
#define __rv_v_scmpeq16 __riscv_v_scmpeq16 
#define __rv_v_ucmpeq16 __riscv_v_ucmpeq16 
#define __rv_cras16 __riscv_cras16 
#define __rv_v_ucras16 __riscv_v_ucras16 
#define __rv_v_scras16 __riscv_v_scras16 
#define __rv_crsa16 __riscv_crsa16 
#define __rv_v_ucrsa16 __riscv_v_ucrsa16 
#define __rv_v_scrsa16 __riscv_v_scrsa16 
#define __rv_insb __riscv_insb 
#define __rv_kabs8 __riscv_kabs8 
#define __rv_v_kabs8 __riscv_v_kabs8 
#define __rv_kabs16 __riscv_kabs16 
#define __rv_v_kabs16 __riscv_v_kabs16 
#define __rv_kabsw __riscv_kabsw 
#define __rv_kadd8 __riscv_kadd8 
#define __rv_v_kadd8 __riscv_v_kadd8 
#define __rv_kadd16 __riscv_kadd16 
#define __rv_v_kadd16 __riscv_v_kadd16 
#define __rv_kadd64 __riscv_kadd64 
#define __rv_kaddh __riscv_kaddh 
#define __rv_kaddw __riscv_kaddw 
#define __rv_kcras16 __riscv_kcras16 
#define __rv_v_kcras16 __riscv_v_kcras16 
#define __rv_kcrsa16 __riscv_kcrsa16 
#define __rv_v_kcrsa16 __riscv_v_kcrsa16 
#define __rv_kdmbb __riscv_kdmbb 
#define __rv_v_kdmbb __riscv_v_kdmbb 
#define __rv_kdmbt __riscv_kdmbt 
#define __rv_v_kdmbt __riscv_v_kdmbt 
#define __rv_kdmtt __riscv_kdmtt 
#define __rv_v_kdmtt __riscv_v_kdmtt 
#define __rv_kdmabb __riscv_kdmabb 
#define __rv_v_kdmabb __riscv_v_kdmabb 
#define __rv_kdmabt __riscv_kdmabt 
#define __rv_v_kdmabt __riscv_v_kdmabt 
#define __rv_kdmatt __riscv_kdmatt 
#define __rv_v_kdmatt __riscv_v_kdmatt 
#define __rv_khm8 __riscv_khm8 
#define __rv_v_khm8 __riscv_v_khm8 
#define __rv_khmx8 __riscv_khmx8 
#define __rv_v_khmx8 __riscv_v_khmx8 
#define __rv_khm16 __riscv_khm16 
#define __rv_v_khm16 __riscv_v_khm16 
#define __rv_khmx16 __riscv_khmx16 
#define __rv_v_khmx16 __riscv_v_khmx16 
#define __rv_khmbb __riscv_khmbb 
#define __rv_v_khmbb __riscv_v_khmbb 
#define __rv_khmbt __riscv_khmbt 
#define __rv_v_khmbt __riscv_v_khmbt 
#define __rv_khmtt __riscv_khmtt 
#define __rv_v_khmtt __riscv_v_khmtt 
#define __rv_kmabb __riscv_kmabb 
#define __rv_v_kmabb __riscv_v_kmabb 
#define __rv_kmabt __riscv_kmabt 
#define __rv_v_kmabt __riscv_v_kmabt 
#define __rv_kmatt __riscv_kmatt 
#define __rv_v_kmatt __riscv_v_kmatt 
#define __rv_kmada __riscv_kmada 
#define __rv_v_kmada __riscv_v_kmada 
#define __rv_kmaxda __riscv_kmaxda 
#define __rv_v_kmaxda __riscv_v_kmaxda 
#define __rv_kmads __riscv_kmads 
#define __rv_v_kmads __riscv_v_kmads 
#define __rv_kmadrs __riscv_kmadrs 
#define __rv_v_kmadrs __riscv_v_kmadrs 
#define __rv_kmaxds __riscv_kmaxds 
#define __rv_v_kmaxds __riscv_v_kmaxds 
#define __rv_kmar64 __riscv_kmar64 
#define __rv_v_kmar64 __riscv_v_kmar64 
#define __rv_v_ukmar64 __riscv_v_ukmar64 
#define __rv_kmda __riscv_kmda 
#define __rv_v_kmda __riscv_v_kmda 
#define __rv_kmxda __riscv_kmxda 
#define __rv_v_kmxda __riscv_v_kmxda 
#define __rv_kmmac __riscv_kmmac 
#define __rv_v_kmmac __riscv_v_kmmac 
#define __rv_kmmac_u __riscv_kmmac_u 
#define __rv_v_kmmac_u __riscv_v_kmmac_u 
#define __rv_kmmawb __riscv_kmmawb 
#define __rv_v_kmmawb __riscv_v_kmmawb 
#define __rv_kmmawb_u __riscv_kmmawb_u 
#define __rv_v_kmmawb_u __riscv_v_kmmawb_u 
#define __rv_kmmawb2 __riscv_kmmawb2 
#define __rv_v_kmmawb2 __riscv_v_kmmawb2 
#define __rv_kmmawb2_u __riscv_kmmawb2_u 
#define __rv_v_kmmawb2_u __riscv_v_kmmawb2_u 
#define __rv_kmmawt __riscv_kmmawt 
#define __rv_v_kmmawt __riscv_v_kmmawt 
#define __rv_kmmawt_u __riscv_kmmawt_u 
#define __rv_v_kmmawt_u __riscv_v_kmmawt_u 
#define __rv_kmmawt2 __riscv_kmmawt2 
#define __rv_v_kmmawt2 __riscv_v_kmmawt2 
#define __rv_kmmawt2_u __riscv_kmmawt2_u 
#define __rv_v_kmmawt2_u __riscv_v_kmmawt2_u 
#define __rv_kmmsb __riscv_kmmsb 
#define __rv_v_kmmsb __riscv_v_kmmsb 
#define __rv_kmmsb_u __riscv_kmmsb_u 
#define __rv_v_kmmsb_u __riscv_v_kmmsb_u 
#define __rv_kmmwb2 __riscv_kmmwb2 
#define __rv_v_kmmwb2 __riscv_v_kmmwb2 
#define __rv_kmmwb2_u __riscv_kmmwb2_u 
#define __rv_v_kmmwb2_u __riscv_v_kmmwb2_u 
#define __rv_kmmwt2 __riscv_kmmwt2 
#define __rv_v_kmmwt2 __riscv_v_kmmwt2 
#define __rv_kmmwt2_u __riscv_kmmwt2_u 
#define __rv_v_kmmwt2_u __riscv_v_kmmwt2_u 
#define __rv_kmsda __riscv_kmsda 
#define __rv_v_kmsda __riscv_v_kmsda 
#define __rv_kmsxda __riscv_kmsxda 
#define __rv_v_kmsxda __riscv_v_kmsxda 
#define __rv_kmsr64 __riscv_kmsr64 
#define __rv_v_kmsr64 __riscv_v_kmsr64 
#define __rv_v_ukmsr64 __riscv_v_ukmsr64 
#define __rv_ksllw __riscv_ksllw 
#define __rv_ksll8 __riscv_ksll8 
#define __rv_v_ksll8 __riscv_v_ksll8 
#define __rv_ksll16 __riscv_ksll16 
#define __rv_v_ksll16 __riscv_v_ksll16 
#define __rv_kslra8 __riscv_kslra8 
#define __rv_v_kslra8 __riscv_v_kslra8 
#define __rv_kslra8_u __riscv_kslra8_u 
#define __rv_v_kslra8_u __riscv_v_kslra8_u 
#define __rv_kslra16 __riscv_kslra16 
#define __rv_v_kslra16 __riscv_v_kslra16 
#define __rv_kslra16_u __riscv_kslra16_u 
#define __rv_v_kslra16_u __riscv_v_kslra16_u 
#define __rv_kslraw __riscv_kslraw 
#define __rv_kslraw_u __riscv_kslraw_u 
#define __rv_kstas16 __riscv_kstas16 
#define __rv_v_kstas16 __riscv_v_kstas16 
#define __rv_kstsa16 __riscv_kstsa16 
#define __rv_v_kstsa16 __riscv_v_kstsa16 
#define __rv_ksub8 __riscv_ksub8 
#define __rv_v_ksub8 __riscv_v_ksub8 
#define __rv_ksub16 __riscv_ksub16 
#define __rv_v_ksub16 __riscv_v_ksub16 
#define __rv_ksub64 __riscv_ksub64 
#define __rv_ksubh __riscv_ksubh 
#define __rv_ksubw __riscv_ksubw 
#define __rv_kwmmul __riscv_kwmmul 
#define __rv_v_kwmmul __riscv_v_kwmmul 
#define __rv_kwmmul_u __riscv_kwmmul_u 
#define __rv_v_kwmmul_u __riscv_v_kwmmul_u 
#define __rv_maddr32 __riscv_maddr32 
#define __rv_maxw __riscv_maxw 
#define __rv_minw __riscv_minw 
#define __rv_msubr32 __riscv_msubr32 
#define __rv_mulr64 __riscv_mulr64 
#define __rv_mulsr64 __riscv_mulsr64 
#define __rv_pbsad __riscv_pbsad 
#define __rv_v_pbsad __riscv_v_pbsad 
#define __rv_pbsada __riscv_pbsada 
#define __rv_v_pbsada __riscv_v_pbsada 
#define __rv_pkbb16 __riscv_pkbb16 
#define __rv_v_pkbb16 __riscv_v_pkbb16 
#define __rv_pkbt16 __riscv_pkbt16 
#define __rv_v_pkbt16 __riscv_v_pkbt16 
#define __rv_pktt16 __riscv_pktt16 
#define __rv_v_pktt16 __riscv_v_pktt16 
#define __rv_pktb16 __riscv_pktb16 
#define __rv_v_pktb16 __riscv_v_pktb16 
#define __rv_radd8 __riscv_radd8 
#define __rv_v_radd8 __riscv_v_radd8 
#define __rv_radd16 __riscv_radd16 
#define __rv_v_radd16 __riscv_v_radd16 
#define __rv_radd64 __riscv_radd64 
#define __rv_raddw __riscv_raddw 
#define __rv_rcras16 __riscv_rcras16 
#define __rv_v_rcras16 __riscv_v_rcras16 
#define __rv_rcrsa16 __riscv_rcrsa16 
#define __rv_v_rcrsa16 __riscv_v_rcrsa16 
#define __rv_rdov __riscv_rdov 
#define __rv_rstas16 __riscv_rstas16 
#define __rv_v_rstas16 __riscv_v_rstas16 
#define __rv_rstsa16 __riscv_rstsa16 
#define __rv_v_rstsa16 __riscv_v_rstsa16 
#define __rv_rsub8 __riscv_rsub8 
#define __rv_v_rsub8 __riscv_v_rsub8 
#define __rv_rsub16 __riscv_rsub16 
#define __rv_v_rsub16 __riscv_v_rsub16 
#define __rv_rsub64 __riscv_rsub64 
#define __rv_rsubw __riscv_rsubw 
#define __rv_sclip8 __riscv_sclip8 
#define __rv_v_sclip8 __riscv_v_sclip8 
#define __rv_sclip16 __riscv_sclip16 
#define __rv_v_sclip16 __riscv_v_sclip16 
#define __rv_sclip32 __riscv_sclip32 
#define __rv_v_sclip32 __riscv_v_sclip32 
#define __rv_scmple8 __riscv_scmple8 
#define __rv_v_scmple8 __riscv_v_scmple8 
#define __rv_scmple16 __riscv_scmple16 
#define __rv_v_scmple16 __riscv_v_scmple16 
#define __rv_scmplt8 __riscv_scmplt8 
#define __rv_v_scmplt8 __riscv_v_scmplt8 
#define __rv_scmplt16 __riscv_scmplt16 
#define __rv_v_scmplt16 __riscv_v_scmplt16 
#define __rv_sll8 __riscv_sll8 
#define __rv_v_sll8 __riscv_v_sll8 
#define __rv_sll16 __riscv_sll16 
#define __rv_v_sll16 __riscv_v_sll16 
#define __rv_smal __riscv_smal 
#define __rv_v_smal __riscv_v_smal 
#define __rv_smalbb __riscv_smalbb 
#define __rv_v_smalbb __riscv_v_smalbb 
#define __rv_smalbt __riscv_smalbt 
#define __rv_v_smalbt __riscv_v_smalbt 
#define __rv_smaltt __riscv_smaltt 
#define __rv_v_smaltt __riscv_v_smaltt 
#define __rv_smalda __riscv_smalda 
#define __rv_v_smalda __riscv_v_smalda 
#define __rv_smalxda __riscv_smalxda 
#define __rv_v_smalxda __riscv_v_smalxda 
#define __rv_smalds __riscv_smalds 
#define __rv_v_smalds __riscv_v_smalds 
#define __rv_smaldrs __riscv_smaldrs 
#define __rv_v_smaldrs __riscv_v_smaldrs 
#define __rv_smalxds __riscv_smalxds 
#define __rv_v_smalxds __riscv_v_smalxds 
#define __rv_smar64 __riscv_smar64 
#define __rv_v_smar64 __riscv_v_smar64 
#define __rv_smaqa __riscv_smaqa 
#define __rv_v_smaqa __riscv_v_smaqa 
#define __rv_smaqa_su __riscv_smaqa_su 
#define __rv_v_smaqa_su __riscv_v_smaqa_su 
#define __rv_smax8 __riscv_smax8 
#define __rv_v_smax8 __riscv_v_smax8 
#define __rv_smax16 __riscv_smax16 
#define __rv_v_smax16 __riscv_v_smax16 
#define __rv_smbb16 __riscv_smbb16 
#define __rv_v_smbb16 __riscv_v_smbb16 
#define __rv_smbt16 __riscv_smbt16 
#define __rv_v_smbt16 __riscv_v_smbt16 
#define __rv_smtt16 __riscv_smtt16 
#define __rv_v_smtt16 __riscv_v_smtt16 
#define __rv_smds __riscv_smds 
#define __rv_v_smds __riscv_v_smds 
#define __rv_smdrs __riscv_smdrs 
#define __rv_v_smdrs __riscv_v_smdrs 
#define __rv_smxds __riscv_smxds 
#define __rv_v_smxds __riscv_v_smxds 
#define __rv_smin8 __riscv_smin8 
#define __rv_v_smin8 __riscv_v_smin8 
#define __rv_smin16 __riscv_smin16 
#define __rv_v_smin16 __riscv_v_smin16 
#define __rv_smmul __riscv_smmul 
#define __rv_v_smmul __riscv_v_smmul 
#define __rv_smmul_u __riscv_smmul_u 
#define __rv_v_smmul_u __riscv_v_smmul_u 
#define __rv_smmwb __riscv_smmwb 
#define __rv_v_smmwb __riscv_v_smmwb 
#define __rv_smmwb_u __riscv_smmwb_u 
#define __rv_v_smmwb_u __riscv_v_smmwb_u 
#define __rv_smmwt __riscv_smmwt 
#define __rv_v_smmwt __riscv_v_smmwt 
#define __rv_smmwt_u __riscv_smmwt_u 
#define __rv_v_smmwt_u __riscv_v_smmwt_u 
#define __rv_smslda __riscv_smslda 
#define __rv_v_smslda __riscv_v_smslda 
#define __rv_smslxda __riscv_smslxda 
#define __rv_v_smslxda __riscv_v_smslxda 
#define __rv_smsr64 __riscv_smsr64 
#define __rv_v_smsr64 __riscv_v_smsr64 
#define __rv_smul8 __riscv_smul8 
#define __rv_v_smul8 __riscv_v_smul8 
#define __rv_smulx8 __riscv_smulx8 
#define __rv_v_smulx8 __riscv_v_smulx8 
#define __rv_smul16 __riscv_smul16 
#define __rv_v_smul16 __riscv_v_smul16 
#define __rv_smulx16 __riscv_smulx16 
#define __rv_v_smulx16 __riscv_v_smulx16 
#define __rv_sra_u __riscv_sra_u 
#define __rv_sra8 __riscv_sra8 
#define __rv_v_sra8 __riscv_v_sra8 
#define __rv_sra8_u __riscv_sra8_u 
#define __rv_v_sra8_u __riscv_v_sra8_u 
#define __rv_sra16 __riscv_sra16 
#define __rv_v_sra16 __riscv_v_sra16 
#define __rv_sra16_u __riscv_sra16_u 
#define __rv_v_sra16_u __riscv_v_sra16_u 
#define __rv_srl8 __riscv_srl8 
#define __rv_v_srl8 __riscv_v_srl8 
#define __rv_srl8_u __riscv_srl8_u 
#define __rv_v_srl8_u __riscv_v_srl8_u 
#define __rv_srl16 __riscv_srl16 
#define __rv_v_srl16 __riscv_v_srl16 
#define __rv_srl16_u __riscv_srl16_u 
#define __rv_v_srl16_u __riscv_v_srl16_u 
#define __rv_stas16 __riscv_stas16 
#define __rv_v_ustas16 __riscv_v_ustas16 
#define __rv_v_sstas16 __riscv_v_sstas16 
#define __rv_stsa16 __riscv_stsa16 
#define __rv_v_ustsa16 __riscv_v_ustsa16 
#define __rv_v_sstsa16 __riscv_v_sstsa16 
#define __rv_sub8 __riscv_sub8 
#define __rv_v_usub8 __riscv_v_usub8 
#define __rv_v_ssub8 __riscv_v_ssub8 
#define __rv_sub16 __riscv_sub16 
#define __rv_v_usub16 __riscv_v_usub16 
#define __rv_v_ssub16 __riscv_v_ssub16 
#define __rv_ssub64 __riscv_ssub64 
#define __rv_usub64 __riscv_usub64 
#define __rv_sunpkd810 __riscv_sunpkd810 
#define __rv_v_sunpkd810 __riscv_v_sunpkd810 
#define __rv_sunpkd820 __riscv_sunpkd820 
#define __rv_v_sunpkd820 __riscv_v_sunpkd820 
#define __rv_sunpkd830 __riscv_sunpkd830 
#define __rv_v_sunpkd830 __riscv_v_sunpkd830 
#define __rv_sunpkd831 __riscv_sunpkd831 
#define __rv_v_sunpkd831 __riscv_v_sunpkd831 
#define __rv_sunpkd832 __riscv_sunpkd832 
#define __rv_v_sunpkd832 __riscv_v_sunpkd832 
#define __rv_swap8 __riscv_swap8 
#define __rv_v_swap8 __riscv_v_swap8 
#define __rv_swap16 __riscv_swap16 
#define __rv_v_swap16 __riscv_v_swap16 
#define __rv_uclip8 __riscv_uclip8 
#define __rv_v_uclip8 __riscv_v_uclip8 
#define __rv_uclip16 __riscv_uclip16 
#define __rv_v_uclip16 __riscv_v_uclip16 
#define __rv_uclip32 __riscv_uclip32 
#define __rv_v_uclip32 __riscv_v_uclip32 
#define __rv_ucmple8 __riscv_ucmple8 
#define __rv_v_ucmple8 __riscv_v_ucmple8 
#define __rv_ucmple16 __riscv_ucmple16 
#define __rv_v_ucmple16 __riscv_v_ucmple16 
#define __rv_ucmplt8 __riscv_ucmplt8 
#define __rv_v_ucmplt8 __riscv_v_ucmplt8 
#define __rv_ucmplt16 __riscv_ucmplt16 
#define __rv_v_ucmplt16 __riscv_v_ucmplt16 
#define __rv_ukadd8 __riscv_ukadd8 
#define __rv_v_ukadd8 __riscv_v_ukadd8 
#define __rv_ukadd16 __riscv_ukadd16 
#define __rv_v_ukadd16 __riscv_v_ukadd16 
#define __rv_ukadd64 __riscv_ukadd64 
#define __rv_ukaddh __riscv_ukaddh 
#define __rv_ukaddw __riscv_ukaddw 
#define __rv_ukcras16 __riscv_ukcras16 
#define __rv_v_ukcras16 __riscv_v_ukcras16 
#define __rv_ukcrsa16 __riscv_ukcrsa16 
#define __rv_v_ukcrsa16 __riscv_v_ukcrsa16 
#define __rv_ukmar64 __riscv_ukmar64 
#define __rv_ukmsr64 __riscv_ukmsr64 
#define __rv_ukstas16 __riscv_ukstas16 
#define __rv_v_ukstas16 __riscv_v_ukstas16 
#define __rv_ukstsa16 __riscv_ukstsa16 
#define __rv_v_ukstsa16 __riscv_v_ukstsa16 
#define __rv_uksub8 __riscv_uksub8 
#define __rv_v_uksub8 __riscv_v_uksub8 
#define __rv_uksub16 __riscv_uksub16 
#define __rv_v_uksub16 __riscv_v_uksub16 
#define __rv_uksub64 __riscv_uksub64 
#define __rv_uksubh __riscv_uksubh 
#define __rv_uksubw __riscv_uksubw 
#define __rv_umar64 __riscv_umar64 
#define __rv_v_umar64 __riscv_v_umar64 
#define __rv_umaqa __riscv_umaqa 
#define __rv_v_umaqa __riscv_v_umaqa 
#define __rv_umax8 __riscv_umax8 
#define __rv_v_umax8 __riscv_v_umax8 
#define __rv_umax16 __riscv_umax16 
#define __rv_v_umax16 __riscv_v_umax16 
#define __rv_umin8 __riscv_umin8 
#define __rv_v_umin8 __riscv_v_umin8 
#define __rv_umin16 __riscv_umin16 
#define __rv_v_umin16 __riscv_v_umin16 
#define __rv_umsr64 __riscv_umsr64 
#define __rv_v_umsr64 __riscv_v_umsr64 
#define __rv_umul8 __riscv_umul8 
#define __rv_v_umul8 __riscv_v_umul8 
#define __rv_umulx8 __riscv_umulx8 
#define __rv_v_umulx8 __riscv_v_umulx8 
#define __rv_umul16 __riscv_umul16 
#define __rv_v_umul16 __riscv_v_umul16 
#define __rv_umulx16 __riscv_umulx16 
#define __rv_v_umulx16 __riscv_v_umulx16 
#define __rv_uradd8 __riscv_uradd8 
#define __rv_v_uradd8 __riscv_v_uradd8 
#define __rv_uradd16 __riscv_uradd16 
#define __rv_v_uradd16 __riscv_v_uradd16 
#define __rv_uradd64 __riscv_uradd64 
#define __rv_uraddw __riscv_uraddw 
#define __rv_urcras16 __riscv_urcras16 
#define __rv_v_urcras16 __riscv_v_urcras16 
#define __rv_urcrsa16 __riscv_urcrsa16 
#define __rv_v_urcrsa16 __riscv_v_urcrsa16 
#define __rv_urstas16 __riscv_urstas16 
#define __rv_v_urstas16 __riscv_v_urstas16 
#define __rv_urstsa16 __riscv_urstsa16 
#define __rv_v_urstsa16 __riscv_v_urstsa16 
#define __rv_ursub8 __riscv_ursub8 
#define __rv_v_ursub8 __riscv_v_ursub8 
#define __rv_ursub16 __riscv_ursub16 
#define __rv_v_ursub16 __riscv_v_ursub16 
#define __rv_ursub64 __riscv_ursub64 
#define __rv_ursubw __riscv_ursubw 
#define __rv_wext __riscv_wext 
#define __rv_zunpkd810 __riscv_zunpkd810 
#define __rv_v_zunpkd810 __riscv_v_zunpkd810 
#define __rv_zunpkd820 __riscv_zunpkd820 
#define __rv_v_zunpkd820 __riscv_v_zunpkd820 
#define __rv_zunpkd830 __riscv_zunpkd830 
#define __rv_v_zunpkd830 __riscv_v_zunpkd830 
#define __rv_zunpkd831 __riscv_zunpkd831 
#define __rv_v_zunpkd831 __riscv_v_zunpkd831 
#define __rv_zunpkd832 __riscv_zunpkd832 
#define __rv_v_zunpkd832 __riscv_v_zunpkd832 
#define __rv_add32 __riscv_add32 
#define __rv_v_uadd32 __riscv_v_uadd32 
#define __rv_v_sadd32 __riscv_v_sadd32 
#define __rv_cras32 __riscv_cras32 
#define __rv_v_ucras32 __riscv_v_ucras32 
#define __rv_v_scras32 __riscv_v_scras32 
#define __rv_crsa32 __riscv_crsa32 
#define __rv_v_ucrsa32 __riscv_v_ucrsa32 
#define __rv_v_scrsa32 __riscv_v_scrsa32 
#define __rv_kabs32 __riscv_kabs32 
#define __rv_v_kabs32 __riscv_v_kabs32 
#define __rv_kadd32 __riscv_kadd32 
#define __rv_v_kadd32 __riscv_v_kadd32 
#define __rv_v_ukadd32 __riscv_v_ukadd32 
#define __rv_kcras32 __riscv_kcras32 
#define __rv_v_kcras32 __riscv_v_kcras32 
#define __rv_v_ukcras32 __riscv_v_ukcras32 
#define __rv_kcrsa32 __riscv_kcrsa32 
#define __rv_v_kcrsa32 __riscv_v_kcrsa32 
#define __rv_v_ukcrsa32 __riscv_v_ukcrsa32 
#define __rv_kdmbb16 __riscv_kdmbb16 
#define __rv_v_kdmbb16 __riscv_v_kdmbb16 
#define __rv_kdmbt16 __riscv_kdmbt16 
#define __rv_v_kdmbt16 __riscv_v_kdmbt16 
#define __rv_kdmtt16 __riscv_kdmtt16 
#define __rv_v_kdmtt16 __riscv_v_kdmtt16 
#define __rv_kdmabb16 __riscv_kdmabb16 
#define __rv_v_kdmabb16 __riscv_v_kdmabb16 
#define __rv_kdmabt16 __riscv_kdmabt16 
#define __rv_v_kdmabt16 __riscv_v_kdmabt16 
#define __rv_kdmatt16 __riscv_kdmatt16 
#define __rv_v_kdmatt16 __riscv_v_kdmatt16 
#define __rv_khmbb16 __riscv_khmbb16 
#define __rv_v_khmbb16 __riscv_v_khmbb16 
#define __rv_khmbt16 __riscv_khmbt16 
#define __rv_v_khmbt16 __riscv_v_khmbt16 
#define __rv_khmtt16 __riscv_khmtt16 
#define __rv_v_khmtt16 __riscv_v_khmtt16 
#define __rv_kmabb32 __riscv_kmabb32 
#define __rv_v_kmabb32 __riscv_v_kmabb32 
#define __rv_kmabt32 __riscv_kmabt32 
#define __rv_v_kmabt32 __riscv_v_kmabt32 
#define __rv_kmatt32 __riscv_kmatt32 
#define __rv_v_kmatt32 __riscv_v_kmatt32 
#define __rv_kmada32 __riscv_kmada32 
#define __rv_v_kmada32 __riscv_v_kmada32 
#define __rv_kmaxda32 __riscv_kmaxda32 
#define __rv_v_kmaxda32 __riscv_v_kmaxda32 
#define __rv_kmda32 __riscv_kmda32 
#define __rv_v_kmda32 __riscv_v_kmda32 
#define __rv_kmxda32 __riscv_kmxda32 
#define __rv_v_kmxda32 __riscv_v_kmxda32 
#define __rv_kmads32 __riscv_kmads32 
#define __rv_v_kmads32 __riscv_v_kmads32 
#define __rv_kmadrs32 __riscv_kmadrs32 
#define __rv_v_kmadrs32 __riscv_v_kmadrs32 
#define __rv_kmaxds32 __riscv_kmaxds32 
#define __rv_v_kmaxds32 __riscv_v_kmaxds32 
#define __rv_kmsda32 __riscv_kmsda32 
#define __rv_v_kmsda32 __riscv_v_kmsda32 
#define __rv_kmsxda32 __riscv_kmsxda32 
#define __rv_v_kmsxda32 __riscv_v_kmsxda32 
#define __rv_ksll32 __riscv_ksll32 
#define __rv_v_ksll32 __riscv_v_ksll32 
#define __rv_kslra32 __riscv_kslra32 
#define __rv_v_kslra32 __riscv_v_kslra32 
#define __rv_kslra32_u __riscv_kslra32_u 
#define __rv_v_kslra32_u __riscv_v_kslra32_u 
#define __rv_kstas32 __riscv_kstas32 
#define __rv_v_kstas32 __riscv_v_kstas32 
#define __rv_v_ukstas32 __riscv_v_ukstas32 
#define __rv_kstsa32 __riscv_kstsa32 
#define __rv_v_kstsa32 __riscv_v_kstsa32 
#define __rv_v_ukstsa32 __riscv_v_ukstsa32 
#define __rv_ksub32 __riscv_ksub32 
#define __rv_v_ksub32 __riscv_v_ksub32 
#define __rv_v_uksub32 __riscv_v_uksub32 
#define __rv_pkbb32 __riscv_pkbb32 
#define __rv_v_pkbb32 __riscv_v_pkbb32 
#define __rv_pkbt32 __riscv_pkbt32 
#define __rv_v_pkbt32 __riscv_v_pkbt32 
#define __rv_pktb32 __riscv_pktb32 
#define __rv_v_pktb32 __riscv_v_pktb32 
#define __rv_pktt32 __riscv_pktt32 
#define __rv_v_pktt32 __riscv_v_pktt32 
#define __rv_radd32 __riscv_radd32 
#define __rv_v_radd32 __riscv_v_radd32 
#define __rv_v_uradd32 __riscv_v_uradd32 
#define __rv_rcras32 __riscv_rcras32 
#define __rv_v_rcras32 __riscv_v_rcras32 
#define __rv_v_urcras32 __riscv_v_urcras32 
#define __rv_rcrsa32 __riscv_rcrsa32 
#define __rv_v_rcrsa32 __riscv_v_rcrsa32 
#define __rv_v_urcrsa32 __riscv_v_urcrsa32 
#define __rv_rstas32 __riscv_rstas32 
#define __rv_v_rstas32 __riscv_v_rstas32 
#define __rv_v_urstas32 __riscv_v_urstas32 
#define __rv_rstsa32 __riscv_rstsa32 
#define __rv_v_rstsa32 __riscv_v_rstsa32 
#define __rv_v_urstsa32 __riscv_v_urstsa32 
#define __rv_rsub32 __riscv_rsub32 
#define __rv_v_rsub32 __riscv_v_rsub32 
#define __rv_v_ursub32 __riscv_v_ursub32 
#define __rv_sll32 __riscv_sll32 
#define __rv_v_sll32 __riscv_v_sll32 
#define __rv_smax32 __riscv_smax32 
#define __rv_v_smax32 __riscv_v_smax32 
#define __rv_smbb32 __riscv_smbb32 
#define __rv_v_smbb32 __riscv_v_smbb32 
#define __rv_smbt32 __riscv_smbt32 
#define __rv_v_smbt32 __riscv_v_smbt32 
#define __rv_smtt32 __riscv_smtt32 
#define __rv_v_smtt32 __riscv_v_smtt32 
#define __rv_smds32 __riscv_smds32 
#define __rv_v_smds32 __riscv_v_smds32 
#define __rv_smdrs32 __riscv_smdrs32 
#define __rv_v_smdrs32 __riscv_v_smdrs32 
#define __rv_smxds32 __riscv_smxds32 
#define __rv_v_smxds32 __riscv_v_smxds32 
#define __rv_smin32 __riscv_smin32 
#define __rv_v_smin32 __riscv_v_smin32 
#define __rv_sra32 __riscv_sra32 
#define __rv_v_sra32 __riscv_v_sra32 
#define __rv_sra32_u __riscv_sra32_u 
#define __rv_v_sra32_u __riscv_v_sra32_u 
#define __rv_sraw_u __riscv_sraw_u 
#define __rv_srl32 __riscv_srl32 
#define __rv_v_srl32 __riscv_v_srl32 
#define __rv_srl32_u __riscv_srl32_u 
#define __rv_v_srl32_u __riscv_v_srl32_u 
#define __rv_stas32 __riscv_stas32 
#define __rv_v_ustas32 __riscv_v_ustas32 
#define __rv_v_sstas32 __riscv_v_sstas32 
#define __rv_stsa32 __riscv_stsa32 
#define __rv_v_ustsa32 __riscv_v_ustsa32 
#define __rv_v_sstsa32 __riscv_v_sstsa32 
#define __rv_sub32 __riscv_sub32 
#define __rv_v_usub32 __riscv_v_usub32 
#define __rv_v_ssub32 __riscv_v_ssub32 
#define __rv_ukadd32 __riscv_ukadd32 
#define __rv_ukcras32 __riscv_ukcras32 
#define __rv_ukcrsa32 __riscv_ukcrsa32 
#define __rv_ukstas32 __riscv_ukstas32 
#define __rv_ukstsa32 __riscv_ukstsa32 
#define __rv_uksub32 __riscv_uksub32 
#define __rv_umax32 __riscv_umax32 
#define __rv_v_umax32 __riscv_v_umax32 
#define __rv_umin32 __riscv_umin32 
#define __rv_v_umin32 __riscv_v_umin32 
#define __rv_uradd32 __riscv_uradd32 
#define __rv_urcras32 __riscv_urcras32 
#define __rv_urcrsa32 __riscv_urcrsa32 
#define __rv_urstas32 __riscv_urstas32 
#define __rv_urstsa32 __riscv_urstsa32 
#define __rv_ursub32 __riscv_ursub32 
#define __rv_clz __riscv_clz 
#define __rv_cmix __riscv_cmix 
#define __rv_fsrw __riscv_fsrw 
#define __rv_max __riscv_max 
#define __rv_min __riscv_min 
#define __rv_rev __riscv_rev 
#define __rv_fsr __riscv_fsr 
#define __rv_pack __riscv_pack 
#define __rv_packu __riscv_packu 

#endif // END OF _RISCV_RVP_INTRINSIC_H