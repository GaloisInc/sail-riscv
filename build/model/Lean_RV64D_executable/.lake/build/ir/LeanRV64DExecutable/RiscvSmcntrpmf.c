// Lean compiler output
// Module: LeanRV64DExecutable.RiscvSmcntrpmf
// Imports: Init LeanRV64DExecutable.RiscvSysRegs LeanRV64DExecutable.RiscvZihpm
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
lean_object* l_PreSail_undefined__bitvector___at___LeanRV64DExecutable_Functions_undefined__Misa_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_legalize__smcntrpmf___closed__0;
lean_object* l_LeanRV64DExecutable_Functions___get__CountSmcntrpmf__MINH(lean_object*);
extern lean_object* l_Sail_trivialChoiceSource;
lean_object* l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_legalize__smcntrpmf___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_should__inc__minstret___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__CountSmcntrpmf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_counter__priv__filter__bit(lean_object*, uint8_t);
lean_object* l_BitVec_ofNat(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___update__CountSmcntrpmf__UINH(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__Counterin__IR(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__CountSmcntrpmf__SINH(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_Mk__CountSmcntrpmf___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_Mk__CountSmcntrpmf(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__CountSmcntrpmf__UINH(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_should__inc__mcycle___boxed(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_currentlyEnabled(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_should__inc__mcycle(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_should__inc__minstret(uint8_t, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___update__CountSmcntrpmf__SINH(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_legalize__smcntrpmf(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__CountSmcntrpmf___redArg(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__Counterin__CY(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___update__CountSmcntrpmf__MINH(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_counter__priv__filter__bit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__CountSmcntrpmf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__CountSmcntrpmf___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(64u);
x_3 = l_Sail_trivialChoiceSource;
x_4 = l_PreSail_undefined__bitvector___at___LeanRV64DExecutable_Functions_undefined__Misa_spec__0___redArg(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__CountSmcntrpmf(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_undefined__CountSmcntrpmf___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__CountSmcntrpmf___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_undefined__CountSmcntrpmf(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_Mk__CountSmcntrpmf(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_Mk__CountSmcntrpmf___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_Mk__CountSmcntrpmf(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_legalize__smcntrpmf___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_legalize__smcntrpmf(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_13; lean_object* x_14; 
x_13 = 6;
x_14 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_13, x_3);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_31; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_31 = lean_unbox(x_15);
lean_dec(x_15);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_LeanRV64DExecutable_Functions_legalize__smcntrpmf___closed__0;
x_17 = x_32;
goto block_30;
}
else
{
lean_object* x_33; 
x_33 = l_LeanRV64DExecutable_Functions___get__CountSmcntrpmf__SINH(x_2);
x_17 = x_33;
goto block_30;
}
block_30:
{
uint8_t x_18; lean_object* x_19; 
x_18 = 7;
x_19 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_18, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = l_LeanRV64DExecutable_Functions_legalize__smcntrpmf___closed__0;
x_4 = x_17;
x_5 = x_23;
x_6 = x_22;
goto block_12;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
lean_dec(x_19);
x_25 = l_LeanRV64DExecutable_Functions___get__CountSmcntrpmf__UINH(x_2);
x_4 = x_17;
x_5 = x_25;
x_6 = x_24;
goto block_12;
}
}
else
{
uint8_t x_26; 
lean_dec(x_17);
x_26 = !lean_is_exclusive(x_19);
if (x_26 == 0)
{
return x_19;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_19, 0);
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_19);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_14);
if (x_34 == 0)
{
return x_14;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_14, 0);
x_36 = lean_ctor_get(x_14, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_14);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
block_12:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_LeanRV64DExecutable_Functions___get__CountSmcntrpmf__MINH(x_2);
x_8 = l_LeanRV64DExecutable_Functions___update__CountSmcntrpmf__MINH(x_1, x_7);
lean_dec(x_7);
x_9 = l_LeanRV64DExecutable_Functions___update__CountSmcntrpmf__SINH(x_8, x_4);
lean_dec(x_4);
lean_dec(x_8);
x_10 = l_LeanRV64DExecutable_Functions___update__CountSmcntrpmf__UINH(x_9, x_5);
lean_dec(x_5);
lean_dec(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_6);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_legalize__smcntrpmf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_legalize__smcntrpmf(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_counter__priv__filter__bit(lean_object* x_1, uint8_t x_2) {
_start:
{
switch (x_2) {
case 0:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions___get__CountSmcntrpmf__UINH(x_1);
return x_3;
}
case 1:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions___get__CountSmcntrpmf__SINH(x_1);
return x_4;
}
default: 
{
lean_object* x_5; 
x_5 = l_LeanRV64DExecutable_Functions___get__CountSmcntrpmf__MINH(x_1);
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_counter__priv__filter__bit___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_LeanRV64DExecutable_Functions_counter__priv__filter__bit(x_1, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_should__inc__mcycle(uint8_t x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = 73;
x_4 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = 17;
x_8 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_7, x_6);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_LeanRV64DExecutable_Functions___get__Counterin__CY(x_5);
lean_dec(x_5);
x_12 = l_LeanRV64DExecutable_Functions_legalize__smcntrpmf___closed__0;
x_13 = lean_nat_dec_eq(x_11, x_12);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
x_14 = lean_box(x_13);
lean_ctor_set(x_8, 0, x_14);
return x_8;
}
else
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_15 = l_LeanRV64DExecutable_Functions_counter__priv__filter__bit(x_10, x_1);
lean_dec(x_10);
x_16 = lean_nat_dec_eq(x_15, x_12);
lean_dec(x_15);
x_17 = lean_box(x_16);
lean_ctor_set(x_8, 0, x_17);
return x_8;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_8, 0);
x_19 = lean_ctor_get(x_8, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_8);
x_20 = l_LeanRV64DExecutable_Functions___get__Counterin__CY(x_5);
lean_dec(x_5);
x_21 = l_LeanRV64DExecutable_Functions_legalize__smcntrpmf___closed__0;
x_22 = lean_nat_dec_eq(x_20, x_21);
lean_dec(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_18);
x_23 = lean_box(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_19);
return x_24;
}
else
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_25 = l_LeanRV64DExecutable_Functions_counter__priv__filter__bit(x_18, x_1);
lean_dec(x_18);
x_26 = lean_nat_dec_eq(x_25, x_21);
lean_dec(x_25);
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_19);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_5);
x_29 = !lean_is_exclusive(x_8);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_8, 0);
lean_dec(x_30);
x_31 = lean_box(1);
lean_ctor_set(x_8, 0, x_31);
return x_8;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_8, 1);
lean_inc(x_32);
lean_dec(x_8);
x_33 = lean_box(1);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_4);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_4, 0);
lean_dec(x_36);
x_37 = lean_box(1);
lean_ctor_set(x_4, 0, x_37);
return x_4;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_4, 1);
lean_inc(x_38);
lean_dec(x_4);
x_39 = lean_box(1);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_should__inc__mcycle___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_LeanRV64DExecutable_Functions_should__inc__mcycle(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_should__inc__minstret(uint8_t x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = 73;
x_4 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = 16;
x_8 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_7, x_6);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_LeanRV64DExecutable_Functions___get__Counterin__IR(x_5);
lean_dec(x_5);
x_12 = l_LeanRV64DExecutable_Functions_legalize__smcntrpmf___closed__0;
x_13 = lean_nat_dec_eq(x_11, x_12);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
x_14 = lean_box(x_13);
lean_ctor_set(x_8, 0, x_14);
return x_8;
}
else
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_15 = l_LeanRV64DExecutable_Functions_counter__priv__filter__bit(x_10, x_1);
lean_dec(x_10);
x_16 = lean_nat_dec_eq(x_15, x_12);
lean_dec(x_15);
x_17 = lean_box(x_16);
lean_ctor_set(x_8, 0, x_17);
return x_8;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_8, 0);
x_19 = lean_ctor_get(x_8, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_8);
x_20 = l_LeanRV64DExecutable_Functions___get__Counterin__IR(x_5);
lean_dec(x_5);
x_21 = l_LeanRV64DExecutable_Functions_legalize__smcntrpmf___closed__0;
x_22 = lean_nat_dec_eq(x_20, x_21);
lean_dec(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_18);
x_23 = lean_box(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_19);
return x_24;
}
else
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_25 = l_LeanRV64DExecutable_Functions_counter__priv__filter__bit(x_18, x_1);
lean_dec(x_18);
x_26 = lean_nat_dec_eq(x_25, x_21);
lean_dec(x_25);
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_19);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_5);
x_29 = !lean_is_exclusive(x_8);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_8, 0);
lean_dec(x_30);
x_31 = lean_box(1);
lean_ctor_set(x_8, 0, x_31);
return x_8;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_8, 1);
lean_inc(x_32);
lean_dec(x_8);
x_33 = lean_box(1);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_4);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_4, 0);
lean_dec(x_36);
x_37 = lean_box(1);
lean_ctor_set(x_4, 0, x_37);
return x_4;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_4, 1);
lean_inc(x_38);
lean_dec(x_4);
x_39 = lean_box(1);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_should__inc__minstret___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_LeanRV64DExecutable_Functions_should__inc__minstret(x_3, x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSysRegs(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvZihpm(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvSmcntrpmf(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSysRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvZihpm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_legalize__smcntrpmf___closed__0 = _init_l_LeanRV64DExecutable_Functions_legalize__smcntrpmf___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_legalize__smcntrpmf___closed__0);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
