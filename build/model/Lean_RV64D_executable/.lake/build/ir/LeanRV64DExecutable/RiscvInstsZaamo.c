// Lean compiler output
// Module: LeanRV64DExecutable.RiscvInstsZaamo
// Imports: Init LeanRV64DExecutable.RiscvXlen LeanRV64DExecutable.RiscvSysRegs
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
static lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__backwards___closed__0;
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_amo__mnemonic__forwards__matches(uint8_t);
static lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__8;
static lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__7;
static lean_object* l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__5;
static lean_object* l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__backwards__matches___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___boxed(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__3;
static lean_object* l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__1;
uint8_t lean_int_dec_le(lean_object*, lean_object*);
static uint8_t l_LeanRV64DExecutable_Functions_amo__width__valid___closed__1;
static lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__3;
static lean_object* l_LeanRV64DExecutable_Functions_amo__width__valid___closed__0;
lean_object* lean_nat_to_int(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__6;
static lean_object* l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__2;
lean_object* l_BitVec_ofNat(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__4;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__backwards(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__backwards___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_amo__mnemonic__forwards__matches___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_amo__width__valid___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_encdec__amoop__forwards__matches(uint8_t);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__forwards__matches___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards(lean_object*, lean_object*);
extern lean_object* l_LeanRV64DExecutable_Functions_xlen;
lean_object* l_LeanRV64DExecutable_Functions_currentlyEnabled(uint8_t, lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_encdec__amoop__backwards__matches(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__5;
static lean_object* l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__8;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards__matches___boxed(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__6;
static lean_object* l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__7;
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards__matches(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__4;
static lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__2;
lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_internal__error_spec__0___redArg(uint8_t, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__1;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__forwards(uint8_t);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_amo__width__valid(uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__0;
static lean_object* _init_l_LeanRV64DExecutable_Functions_amo__width__valid___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(64u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_amo__width__valid___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_LeanRV64DExecutable_Functions_xlen;
x_2 = l_LeanRV64DExecutable_Functions_amo__width__valid___closed__0;
x_3 = lean_int_dec_le(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_amo__width__valid(uint8_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(x_1);
switch (lean_obj_tag(x_3)) {
case 2:
{
uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_4 = 1;
x_5 = lean_box(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_2);
return x_6;
}
case 3:
{
uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_LeanRV64DExecutable_Functions_amo__width__valid___closed__1;
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_2);
return x_9;
}
default: 
{
uint8_t x_10; lean_object* x_11; 
lean_dec(x_3);
x_10 = 18;
x_11 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_10, x_2);
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_amo__width__valid___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_LeanRV64DExecutable_Functions_amo__width__valid(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_unsigned_to_nat(5u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(5u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = lean_unsigned_to_nat(5u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(12u);
x_2 = lean_unsigned_to_nat(5u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_unsigned_to_nat(5u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(16u);
x_2 = lean_unsigned_to_nat(5u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(20u);
x_2 = lean_unsigned_to_nat(5u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(24u);
x_2 = lean_unsigned_to_nat(5u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(28u);
x_2 = lean_unsigned_to_nat(5u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__forwards(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__0;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__1;
return x_3;
}
case 2:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__2;
return x_4;
}
case 3:
{
lean_object* x_5; 
x_5 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__3;
return x_5;
}
case 4:
{
lean_object* x_6; 
x_6 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__4;
return x_6;
}
case 5:
{
lean_object* x_7; 
x_7 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__5;
return x_7;
}
case 6:
{
lean_object* x_8; 
x_8 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__6;
return x_8;
}
case 7:
{
lean_object* x_9; 
x_9 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__7;
return x_9;
}
default: 
{
lean_object* x_10; 
x_10 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__8;
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards(x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__amoop__backwards___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Pattern match failure at unknown location", 41, 41);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__backwards(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__0;
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__1;
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__2;
x_8 = lean_nat_dec_eq(x_1, x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__3;
x_10 = lean_nat_dec_eq(x_1, x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__4;
x_12 = lean_nat_dec_eq(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__5;
x_14 = lean_nat_dec_eq(x_1, x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__6;
x_16 = lean_nat_dec_eq(x_1, x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__7;
x_18 = lean_nat_dec_eq(x_1, x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__8;
x_20 = lean_nat_dec_eq(x_1, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = l_LeanRV64DExecutable_Functions_encdec__amoop__backwards___closed__0;
x_22 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_internal__error_spec__0___redArg(x_20, x_21, x_2);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
x_25 = lean_box(0);
lean_ctor_set_tag(x_22, 1);
lean_ctor_set(x_22, 0, x_25);
return x_22;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_22, 1);
lean_inc(x_26);
lean_dec(x_22);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_22);
if (x_29 == 0)
{
return x_22;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_22, 0);
x_31 = lean_ctor_get(x_22, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_22);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_33 = 8;
x_34 = lean_box(x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_2);
return x_35;
}
}
else
{
uint8_t x_36; lean_object* x_37; lean_object* x_38; 
x_36 = 7;
x_37 = lean_box(x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_2);
return x_38;
}
}
else
{
uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_39 = 6;
x_40 = lean_box(x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_2);
return x_41;
}
}
else
{
uint8_t x_42; lean_object* x_43; lean_object* x_44; 
x_42 = 5;
x_43 = lean_box(x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_2);
return x_44;
}
}
else
{
uint8_t x_45; lean_object* x_46; lean_object* x_47; 
x_45 = 4;
x_46 = lean_box(x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_2);
return x_47;
}
}
else
{
uint8_t x_48; lean_object* x_49; lean_object* x_50; 
x_48 = 3;
x_49 = lean_box(x_48);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_2);
return x_50;
}
}
else
{
uint8_t x_51; lean_object* x_52; lean_object* x_53; 
x_51 = 2;
x_52 = lean_box(x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_2);
return x_53;
}
}
else
{
uint8_t x_54; lean_object* x_55; lean_object* x_56; 
x_54 = 1;
x_55 = lean_box(x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_2);
return x_56;
}
}
else
{
uint8_t x_57; lean_object* x_58; lean_object* x_59; 
x_57 = 0;
x_58 = lean_box(x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_2);
return x_59;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__backwards___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_encdec__amoop__backwards(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_encdec__amoop__forwards__matches(uint8_t x_1) {
_start:
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__forwards__matches___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards__matches(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_encdec__amoop__backwards__matches(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__0;
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__1;
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__2;
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__3;
x_9 = lean_nat_dec_eq(x_1, x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__4;
x_11 = lean_nat_dec_eq(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__5;
x_13 = lean_nat_dec_eq(x_1, x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__6;
x_15 = lean_nat_dec_eq(x_1, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__7;
x_17 = lean_nat_dec_eq(x_1, x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__8;
x_19 = lean_nat_dec_eq(x_1, x_18);
return x_19;
}
else
{
return x_17;
}
}
else
{
return x_15;
}
}
else
{
return x_13;
}
}
else
{
return x_11;
}
}
else
{
return x_9;
}
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
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__amoop__backwards__matches___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_LeanRV64DExecutable_Functions_encdec__amoop__backwards__matches(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("amoswap", 7, 7);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("amoadd", 6, 6);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("amoxor", 6, 6);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("amoand", 6, 6);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("amoor", 5, 5);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("amomin", 6, 6);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("amomax", 6, 6);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("amominu", 7, 7);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("amomaxu", 7, 7);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__0;
x_4 = lean_string_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__1;
x_6 = lean_string_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__2;
x_8 = lean_string_dec_eq(x_1, x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__3;
x_10 = lean_string_dec_eq(x_1, x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__4;
x_12 = lean_string_dec_eq(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__5;
x_14 = lean_string_dec_eq(x_1, x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__6;
x_16 = lean_string_dec_eq(x_1, x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__7;
x_18 = lean_string_dec_eq(x_1, x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__8;
x_20 = lean_string_dec_eq(x_1, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = l_LeanRV64DExecutable_Functions_encdec__amoop__backwards___closed__0;
x_22 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_internal__error_spec__0___redArg(x_20, x_21, x_2);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
x_25 = lean_box(0);
lean_ctor_set_tag(x_22, 1);
lean_ctor_set(x_22, 0, x_25);
return x_22;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_22, 1);
lean_inc(x_26);
lean_dec(x_22);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_22);
if (x_29 == 0)
{
return x_22;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_22, 0);
x_31 = lean_ctor_get(x_22, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_22);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_33 = 8;
x_34 = lean_box(x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_2);
return x_35;
}
}
else
{
uint8_t x_36; lean_object* x_37; lean_object* x_38; 
x_36 = 7;
x_37 = lean_box(x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_2);
return x_38;
}
}
else
{
uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_39 = 6;
x_40 = lean_box(x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_2);
return x_41;
}
}
else
{
uint8_t x_42; lean_object* x_43; lean_object* x_44; 
x_42 = 5;
x_43 = lean_box(x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_2);
return x_44;
}
}
else
{
uint8_t x_45; lean_object* x_46; lean_object* x_47; 
x_45 = 4;
x_46 = lean_box(x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_2);
return x_47;
}
}
else
{
uint8_t x_48; lean_object* x_49; lean_object* x_50; 
x_48 = 3;
x_49 = lean_box(x_48);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_2);
return x_50;
}
}
else
{
uint8_t x_51; lean_object* x_52; lean_object* x_53; 
x_51 = 2;
x_52 = lean_box(x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_2);
return x_53;
}
}
else
{
uint8_t x_54; lean_object* x_55; lean_object* x_56; 
x_54 = 1;
x_55 = lean_box(x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_2);
return x_56;
}
}
else
{
uint8_t x_57; lean_object* x_58; lean_object* x_59; 
x_57 = 0;
x_58 = lean_box(x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_2);
return x_59;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_amo__mnemonic__forwards__matches(uint8_t x_1) {
_start:
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_amo__mnemonic__forwards__matches___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_LeanRV64DExecutable_Functions_amo__mnemonic__forwards__matches(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards__matches(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__0;
x_3 = lean_string_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__1;
x_5 = lean_string_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__2;
x_7 = lean_string_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__3;
x_9 = lean_string_dec_eq(x_1, x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__4;
x_11 = lean_string_dec_eq(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__5;
x_13 = lean_string_dec_eq(x_1, x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__6;
x_15 = lean_string_dec_eq(x_1, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__7;
x_17 = lean_string_dec_eq(x_1, x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__8;
x_19 = lean_string_dec_eq(x_1, x_18);
return x_19;
}
else
{
return x_17;
}
}
else
{
return x_15;
}
}
else
{
return x_13;
}
}
else
{
return x_11;
}
}
else
{
return x_9;
}
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
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards__matches___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards__matches(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvXlen(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSysRegs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvInstsZaamo(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvXlen(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSysRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_amo__width__valid___closed__0 = _init_l_LeanRV64DExecutable_Functions_amo__width__valid___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_amo__width__valid___closed__0);
l_LeanRV64DExecutable_Functions_amo__width__valid___closed__1 = _init_l_LeanRV64DExecutable_Functions_amo__width__valid___closed__1();
l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__0 = _init_l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__0);
l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__1 = _init_l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__1);
l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__2 = _init_l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__2);
l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__3 = _init_l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__3);
l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__4 = _init_l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__4);
l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__5 = _init_l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__5);
l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__6 = _init_l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__6();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__6);
l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__7 = _init_l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__7();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__7);
l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__8 = _init_l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__8();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__amoop__forwards___closed__8);
l_LeanRV64DExecutable_Functions_encdec__amoop__backwards___closed__0 = _init_l_LeanRV64DExecutable_Functions_encdec__amoop__backwards___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__amoop__backwards___closed__0);
l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__0 = _init_l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__0);
l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__1 = _init_l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__1);
l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__2 = _init_l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__2);
l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__3 = _init_l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__3);
l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__4 = _init_l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__4);
l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__5 = _init_l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__5);
l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__6 = _init_l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__6();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__6);
l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__7 = _init_l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__7();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__7);
l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__8 = _init_l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__8();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_amo__mnemonic__backwards___closed__8);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
