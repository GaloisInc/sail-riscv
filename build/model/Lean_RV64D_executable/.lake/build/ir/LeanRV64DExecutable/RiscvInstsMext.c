// Lean compiler output
// Module: LeanRV64DExecutable.RiscvInstsMext
// Imports: Init LeanRV64DExecutable.Sail.Sail LeanRV64DExecutable.Sail.BitVec LeanRV64DExecutable.Sail.IntRange LeanRV64DExecutable.Defs LeanRV64DExecutable.Specialization LeanRV64DExecutable.FakeReal LeanRV64DExecutable.RiscvExtrasExecutable
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
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_maybe__not__u__backwards__matches___boxed(lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards__matches(lean_object*);
LEAN_EXPORT lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_encdec__mul__op__forwards_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_maybe__not__u__backwards___closed__1;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards__matches___boxed(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__2;
static lean_object* l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__3;
static lean_object* l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__2;
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_mul__mnemonic__forwards__matches(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__mul__op__backwards__matches___boxed(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_maybe__not__u__backwards(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mul__mnemonic__forwards__matches___boxed(lean_object*);
LEAN_EXPORT lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_encdec__mul__op__forwards_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_maybe__not__u__backwards___boxed(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__0;
lean_object* l_BitVec_ofNat(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_maybe__not__u__backwards___closed__0;
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards__matches(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__4;
LEAN_EXPORT lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_encdec__mul__op__forwards_spec__0___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__mul__op__backwards___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards__matches___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___boxed(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__1;
LEAN_EXPORT lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_encdec__mul__op__forwards_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__mul__op__backwards(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__3;
static lean_object* l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_encdec__mul__op__backwards__matches(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_maybe__not__u__forwards__matches___boxed(lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_maybe__not__u__forwards__matches(uint8_t);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_maybe__not__u__backwards__matches(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__1;
LEAN_EXPORT lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_encdec__mul__op__forwards_spec__0___redArg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (x_1 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_4, 0, x_2);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_encdec__mul__op__forwards_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_encdec__mul__op__forwards_spec__0___redArg(x_4, x_5, x_6);
return x_7;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Pattern match failure at unknown location", 41, 41);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(3u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = l_BitVec_ofNat(x_1, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_unsigned_to_nat(3u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_unsigned_to_nat(3u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_18; 
x_18 = lean_ctor_get_uint8(x_1, 0);
if (x_18 == 0)
{
uint8_t x_19; 
x_19 = lean_ctor_get_uint8(x_1, 1);
if (x_19 == 0)
{
x_3 = x_2;
goto block_17;
}
else
{
uint8_t x_20; 
x_20 = lean_ctor_get_uint8(x_1, 2);
if (x_20 == 0)
{
x_3 = x_2;
goto block_17;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__1;
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_2);
return x_22;
}
}
}
else
{
uint8_t x_23; 
x_23 = lean_ctor_get_uint8(x_1, 1);
if (x_23 == 0)
{
uint8_t x_24; 
x_24 = lean_ctor_get_uint8(x_1, 2);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__2;
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_2);
return x_26;
}
else
{
x_3 = x_2;
goto block_17;
}
}
else
{
uint8_t x_27; 
x_27 = lean_ctor_get_uint8(x_1, 2);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__3;
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_2);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__4;
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_2);
return x_31;
}
}
}
block_17:
{
uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_4 = 0;
x_5 = l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__0;
x_6 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_encdec__mul__op__forwards_spec__0___redArg(x_4, x_5, x_3);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_dec(x_8);
x_9 = lean_box(0);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_6);
if (x_13 == 0)
{
return x_6;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
}
LEAN_EXPORT lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_encdec__mul__op__forwards_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_encdec__mul__op__forwards_spec__0___redArg(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_encdec__mul__op__forwards_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_encdec__mul__op__forwards_spec__0(x_1, x_2, x_3, x_7, x_5, x_6);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__mul__op__backwards(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__1;
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__4;
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__3;
x_8 = lean_nat_dec_eq(x_1, x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__2;
x_10 = lean_nat_dec_eq(x_1, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__0;
x_12 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_encdec__mul__op__forwards_spec__0___redArg(x_10, x_11, x_2);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_dec(x_14);
x_15 = lean_box(0);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_12);
if (x_19 == 0)
{
return x_12;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_12, 0);
x_21 = lean_ctor_get(x_12, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_12);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_23, 0, x_10);
lean_ctor_set_uint8(x_23, 1, x_8);
lean_ctor_set_uint8(x_23, 2, x_8);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_2);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_25, 0, x_8);
lean_ctor_set_uint8(x_25, 1, x_8);
lean_ctor_set_uint8(x_25, 2, x_6);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_2);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_27, 0, x_6);
lean_ctor_set_uint8(x_27, 1, x_6);
lean_ctor_set_uint8(x_27, 2, x_6);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_2);
return x_28;
}
}
else
{
uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_29 = 0;
x_30 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_30, 0, x_29);
lean_ctor_set_uint8(x_30, 1, x_4);
lean_ctor_set_uint8(x_30, 2, x_4);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_2);
return x_31;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__mul__op__backwards___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_encdec__mul__op__backwards(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards__matches(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = lean_ctor_get_uint8(x_1, 0);
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_1, 1);
if (x_3 == 0)
{
return x_3;
}
else
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_1, 2);
return x_4;
}
}
else
{
uint8_t x_5; 
x_5 = lean_ctor_get_uint8(x_1, 1);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, 2);
if (x_6 == 0)
{
return x_2;
}
else
{
return x_5;
}
}
else
{
uint8_t x_7; 
x_7 = lean_ctor_get_uint8(x_1, 2);
if (x_7 == 0)
{
return x_5;
}
else
{
return x_7;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards__matches___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards__matches(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_encdec__mul__op__backwards__matches(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__1;
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__4;
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__3;
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__2;
x_9 = lean_nat_dec_eq(x_1, x_8);
return x_9;
}
else
{
return x_7;
}
}
else
{
return x_5;
}
}
else
{
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__mul__op__backwards__matches___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_LeanRV64DExecutable_Functions_encdec__mul__op__backwards__matches(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mul", 3, 3);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mulh", 4, 4);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mulhsu", 6, 6);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mulhu", 5, 5);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__0;
x_4 = lean_string_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__1;
x_6 = lean_string_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__2;
x_8 = lean_string_dec_eq(x_1, x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__3;
x_10 = lean_string_dec_eq(x_1, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__0;
x_12 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_encdec__mul__op__forwards_spec__0___redArg(x_10, x_11, x_2);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_dec(x_14);
x_15 = lean_box(0);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_12);
if (x_19 == 0)
{
return x_12;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_12, 0);
x_21 = lean_ctor_get(x_12, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_12);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_23, 0, x_10);
lean_ctor_set_uint8(x_23, 1, x_8);
lean_ctor_set_uint8(x_23, 2, x_8);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_2);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_25, 0, x_8);
lean_ctor_set_uint8(x_25, 1, x_8);
lean_ctor_set_uint8(x_25, 2, x_6);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_2);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_27, 0, x_6);
lean_ctor_set_uint8(x_27, 1, x_6);
lean_ctor_set_uint8(x_27, 2, x_6);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_2);
return x_28;
}
}
else
{
uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_29 = 0;
x_30 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_30, 0, x_29);
lean_ctor_set_uint8(x_30, 1, x_4);
lean_ctor_set_uint8(x_30, 2, x_4);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_2);
return x_31;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_mul__mnemonic__forwards__matches(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = lean_ctor_get_uint8(x_1, 0);
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_1, 1);
if (x_3 == 0)
{
return x_3;
}
else
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_1, 2);
return x_4;
}
}
else
{
uint8_t x_5; 
x_5 = lean_ctor_get_uint8(x_1, 1);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, 2);
if (x_6 == 0)
{
return x_2;
}
else
{
return x_5;
}
}
else
{
uint8_t x_7; 
x_7 = lean_ctor_get_uint8(x_1, 2);
if (x_7 == 0)
{
return x_5;
}
else
{
return x_7;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mul__mnemonic__forwards__matches___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_LeanRV64DExecutable_Functions_mul__mnemonic__forwards__matches(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards__matches(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__0;
x_3 = lean_string_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__1;
x_5 = lean_string_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__2;
x_7 = lean_string_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__3;
x_9 = lean_string_dec_eq(x_1, x_8);
return x_9;
}
else
{
return x_7;
}
}
else
{
return x_5;
}
}
else
{
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards__matches___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards__matches(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_maybe__not__u__backwards___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("u", 1, 1);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_maybe__not__u__backwards___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_maybe__not__u__backwards(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_LeanRV64DExecutable_Functions_maybe__not__u__backwards___closed__0;
x_4 = lean_string_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_LeanRV64DExecutable_Functions_maybe__not__u__backwards___closed__1;
x_6 = lean_string_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__0;
x_8 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_encdec__mul__op__forwards_spec__0___redArg(x_6, x_7, x_2);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_dec(x_10);
x_11 = lean_box(0);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_8);
if (x_15 == 0)
{
return x_8;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_8, 0);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_8);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_box(x_6);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_2);
return x_20;
}
}
else
{
uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_21 = 0;
x_22 = lean_box(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_2);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_maybe__not__u__backwards___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_maybe__not__u__backwards(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_maybe__not__u__forwards__matches(uint8_t x_1) {
_start:
{
if (x_1 == 0)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_maybe__not__u__forwards__matches___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_LeanRV64DExecutable_Functions_maybe__not__u__forwards__matches(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_maybe__not__u__backwards__matches(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_LeanRV64DExecutable_Functions_maybe__not__u__backwards___closed__0;
x_3 = lean_string_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_LeanRV64DExecutable_Functions_maybe__not__u__backwards___closed__1;
x_5 = lean_string_dec_eq(x_1, x_4);
return x_5;
}
else
{
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_maybe__not__u__backwards__matches___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_LeanRV64DExecutable_Functions_maybe__not__u__backwards__matches(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Sail_Sail(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Sail_BitVec(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Sail_IntRange(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Specialization(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_FakeReal(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvExtrasExecutable(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvInstsMext(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Sail_Sail(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Sail_BitVec(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Sail_IntRange(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Specialization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_FakeReal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvExtrasExecutable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__0 = _init_l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__0);
l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__1 = _init_l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__1);
l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__2 = _init_l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__2);
l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__3 = _init_l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__3);
l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__4 = _init_l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__mul__op__forwards___closed__4);
l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__0 = _init_l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__0);
l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__1 = _init_l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__1);
l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__2 = _init_l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__2);
l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__3 = _init_l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_mul__mnemonic__backwards___closed__3);
l_LeanRV64DExecutable_Functions_maybe__not__u__backwards___closed__0 = _init_l_LeanRV64DExecutable_Functions_maybe__not__u__backwards___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_maybe__not__u__backwards___closed__0);
l_LeanRV64DExecutable_Functions_maybe__not__u__backwards___closed__1 = _init_l_LeanRV64DExecutable_Functions_maybe__not__u__backwards___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_maybe__not__u__backwards___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
