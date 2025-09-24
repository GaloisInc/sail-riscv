// Lean compiler output
// Module: LeanRV64DExecutable.Vector
// Imports: Init LeanRV64DExecutable.Flow
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_slice__mask(lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_setWidth(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_slice__mask___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_to__bytes__le___closed__0;
lean_object* l_BitVec_shiftLeft(lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
static lean_object* l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_from__bytes__le_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_not(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_BitVec_ofNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_from__bytes__le___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_from__bytes__le_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_extractLsb___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_from__bytes__le_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_sail__mask___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_from__bytes__le(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_slice__mask___closed__1;
LEAN_EXPORT lean_object* l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_from__bytes__le_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_from__bytes__le___closed__0;
static lean_object* l_LeanRV64DExecutable_Functions_slice__mask___closed__0;
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Sail_BitVec_updateSubrange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_sail__ones___boxed(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_IntRange_instDecidableRelIntMem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_sail__ones(lean_object*);
LEAN_EXPORT lean_object* l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_to__bytes__le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_sail__mask(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_to__bytes__le___boxed(lean_object*, lean_object*);
lean_object* l_BitVec_sub(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_sail__mask(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_BitVec_setWidth(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_sail__mask___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_sail__mask(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_sail__ones(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_BitVec_not(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_sail__ones___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_sail__ones(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_slice__mask___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_BitVec_ofNat(x_1, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_slice__mask___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_slice__mask(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
x_4 = lean_nat_to_int(x_1);
x_5 = lean_int_dec_le(x_4, x_3);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_20; uint8_t x_21; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_LeanRV64DExecutable_Functions_slice__mask___closed__0;
x_8 = l_BitVec_setWidth(x_6, x_1, x_7);
x_20 = l_LeanRV64DExecutable_Functions_slice__mask___closed__1;
x_21 = lean_int_dec_lt(x_3, x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_nat_abs(x_3);
x_23 = l_BitVec_shiftLeft(x_1, x_8, x_22);
lean_dec(x_22);
x_9 = x_23;
goto block_19;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_nat_abs(x_3);
x_25 = lean_nat_sub(x_24, x_6);
lean_dec(x_24);
x_26 = lean_nat_add(x_25, x_6);
lean_dec(x_25);
x_27 = lean_nat_shiftr(x_8, x_26);
lean_dec(x_26);
x_9 = x_27;
goto block_19;
}
block_19:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_BitVec_sub(x_1, x_9, x_8);
lean_dec(x_8);
lean_dec(x_9);
x_11 = l_LeanRV64DExecutable_Functions_slice__mask___closed__1;
x_12 = lean_int_dec_lt(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_nat_abs(x_2);
x_14 = l_BitVec_shiftLeft(x_1, x_10, x_13);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_1);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_1);
x_15 = lean_nat_abs(x_2);
x_16 = lean_nat_sub(x_15, x_6);
lean_dec(x_15);
x_17 = lean_nat_add(x_16, x_6);
lean_dec(x_16);
x_18 = lean_nat_shiftr(x_10, x_17);
lean_dec(x_17);
lean_dec(x_10);
return x_18;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = l_LeanRV64DExecutable_Functions_sail__ones(x_1);
x_29 = l_LeanRV64DExecutable_Functions_slice__mask___closed__1;
x_30 = lean_int_dec_lt(x_2, x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_nat_abs(x_2);
x_32 = l_BitVec_shiftLeft(x_1, x_28, x_31);
lean_dec(x_31);
lean_dec(x_28);
lean_dec(x_1);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_1);
x_33 = lean_nat_abs(x_2);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_sub(x_33, x_34);
lean_dec(x_33);
x_36 = lean_nat_add(x_35, x_34);
lean_dec(x_35);
x_37 = lean_nat_shiftr(x_28, x_36);
lean_dec(x_36);
lean_dec(x_28);
return x_37;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_slice__mask___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_slice__mask(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0___redArg___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(7u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = l_IntRange_instDecidableRelIntMem(x_6, x_4);
if (x_7 == 0)
{
lean_dec(x_6);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_8 = lean_ctor_get(x_4, 2);
x_9 = l_Int_toNat(x_6);
lean_inc(x_1);
x_10 = lean_nat_to_int(x_1);
x_11 = lean_int_mul(x_10, x_6);
lean_dec(x_10);
x_12 = l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0___redArg___closed__0;
x_13 = lean_int_add(x_11, x_12);
x_14 = l_Int_toNat(x_13);
lean_dec(x_13);
x_15 = l_Int_toNat(x_11);
lean_dec(x_11);
x_16 = lean_nat_sub(x_14, x_15);
x_17 = lean_nat_add(x_16, x_2);
lean_dec(x_16);
x_18 = l_BitVec_extractLsb___redArg(x_14, x_15, x_3);
lean_dec(x_15);
lean_dec(x_14);
x_19 = l_BitVec_setWidth(x_17, x_1, x_18);
lean_dec(x_18);
lean_dec(x_17);
x_20 = lean_array_set(x_5, x_9, x_19);
lean_dec(x_9);
x_21 = lean_int_add(x_6, x_8);
lean_dec(x_6);
x_5 = x_20;
x_6 = x_21;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0___redArg(x_1, x_2, x_4, x_5, x_6, x_7);
return x_9;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_to__bytes__le___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_to__bytes__le(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_unsigned_to_nat(8u);
x_4 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_5 = lean_mk_array(x_1, x_4);
x_6 = l_LeanRV64DExecutable_Functions_slice__mask___closed__1;
x_7 = lean_nat_to_int(x_1);
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_LeanRV64DExecutable_Functions_to__bytes__le___closed__0;
x_10 = lean_int_sub(x_7, x_9);
lean_dec(x_7);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set(x_11, 2, x_9);
x_12 = l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0___redArg(x_3, x_8, x_2, x_11, x_5, x_6);
lean_dec(x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0___redArg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_to__bytes__le___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_to__bytes__le(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_from__bytes__le_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_IntRange_instDecidableRelIntMem(x_9, x_7);
if (x_10 == 0)
{
lean_dec(x_9);
return x_8;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_25; uint8_t x_26; 
x_11 = lean_int_mul(x_1, x_9);
x_12 = l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0___redArg___closed__0;
x_13 = lean_int_add(x_11, x_12);
x_14 = l_Int_toNat(x_13);
lean_dec(x_13);
x_15 = l_Int_toNat(x_11);
lean_dec(x_11);
x_16 = lean_nat_sub(x_14, x_15);
x_17 = lean_nat_add(x_16, x_2);
lean_dec(x_16);
x_25 = l_Int_toNat(x_9);
x_26 = lean_nat_dec_lt(x_25, x_5);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_25);
x_27 = lean_unsigned_to_nat(0u);
x_28 = l_outOfBounds___redArg(x_27);
x_18 = x_28;
goto block_24;
}
else
{
lean_object* x_29; 
x_29 = lean_array_fget(x_6, x_25);
lean_dec(x_25);
x_18 = x_29;
goto block_24;
}
block_24:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_7, 2);
x_20 = l_BitVec_setWidth(x_3, x_17, x_18);
lean_dec(x_18);
lean_dec(x_17);
x_21 = l_Sail_BitVec_updateSubrange(x_4, x_8, x_14, x_15, x_20);
lean_dec(x_20);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_8);
x_22 = lean_int_add(x_9, x_19);
lean_dec(x_9);
x_8 = x_21;
x_9 = x_22;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_from__bytes__le_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_from__bytes__le_spec__0___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_from__bytes__le___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_from__bytes__le(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_3 = lean_unsigned_to_nat(8u);
x_4 = l_LeanRV64DExecutable_Functions_from__bytes__le___closed__0;
lean_inc(x_1);
x_5 = lean_nat_to_int(x_1);
x_6 = lean_int_mul(x_4, x_5);
x_7 = l_Int_toNat(x_6);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_LeanRV64DExecutable_Functions_slice__mask___closed__1;
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_LeanRV64DExecutable_Functions_to__bytes__le___closed__0;
x_12 = lean_int_sub(x_5, x_11);
lean_dec(x_5);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set(x_13, 2, x_11);
x_14 = l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_from__bytes__le_spec__0___redArg(x_4, x_10, x_3, x_7, x_1, x_2, x_13, x_8, x_9);
lean_dec(x_13);
lean_dec(x_1);
lean_dec(x_7);
return x_14;
}
}
LEAN_EXPORT lean_object* l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_from__bytes__le_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_from__bytes__le_spec__0___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_from__bytes__le_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_from__bytes__le_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_from__bytes__le___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_from__bytes__le(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Flow(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_Vector(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Flow(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_slice__mask___closed__0 = _init_l_LeanRV64DExecutable_Functions_slice__mask___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_slice__mask___closed__0);
l_LeanRV64DExecutable_Functions_slice__mask___closed__1 = _init_l_LeanRV64DExecutable_Functions_slice__mask___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_slice__mask___closed__1);
l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0___redArg___closed__0 = _init_l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0___redArg___closed__0();
lean_mark_persistent(l_IntRange_forIn_x27_loop___at___LeanRV64DExecutable_Functions_to__bytes__le_spec__0___redArg___closed__0);
l_LeanRV64DExecutable_Functions_to__bytes__le___closed__0 = _init_l_LeanRV64DExecutable_Functions_to__bytes__le___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_to__bytes__le___closed__0);
l_LeanRV64DExecutable_Functions_from__bytes__le___closed__0 = _init_l_LeanRV64DExecutable_Functions_from__bytes__le___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_from__bytes__le___closed__0);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
