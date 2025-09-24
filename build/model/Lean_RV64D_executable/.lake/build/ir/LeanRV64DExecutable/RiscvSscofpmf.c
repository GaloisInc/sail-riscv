// Lean compiler output
// Module: LeanRV64DExecutable.RiscvSscofpmf
// Imports: Init LeanRV64DExecutable.RiscvErrors LeanRV64DExecutable.RiscvSysRegs LeanRV64DExecutable.RiscvZihpm
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
lean_object* l_LeanRV64DExecutable_Functions_internal__error___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_LeanRV64DExecutable_Functions_sys__writable__hpm__counters;
static lean_object* l_LeanRV64DExecutable_Functions_get__scountovf___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_write__mhpmeventh___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_append___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_write__mhpmeventh___closed__0;
lean_object* l_LeanRV64DExecutable_Functions_legalize__hpmevent(lean_object*, lean_object*);
lean_object* l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(uint8_t, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Sail_BitVec_access(lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_ofNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__scountovf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_read__mhpmeventh(lean_object*, lean_object*);
lean_object* l_BitVec_extractLsb___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_read__mhpmeventh___boxed(lean_object*, lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_get__scountovf___closed__3;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_get__scountovf___closed__2;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__scountovf(uint8_t, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_write__mhpmeventh(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_get__scountovf___closed__1;
lean_object* l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_read__mhpmeventh(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = 19;
x_4 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_14; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_7 = x_4;
} else {
 lean_dec_ref(x_4);
 x_7 = lean_box(0);
}
x_8 = lean_unsigned_to_nat(32u);
x_14 = lean_nat_dec_lt(x_1, x_8);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_5);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_outOfBounds___redArg(x_15);
x_9 = x_16;
goto block_13;
}
else
{
lean_object* x_17; 
x_17 = lean_array_fget(x_5, x_1);
lean_dec(x_5);
x_9 = x_17;
goto block_13;
}
block_13:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(63u);
x_11 = l_BitVec_extractLsb___redArg(x_10, x_8, x_9);
lean_dec(x_9);
if (lean_is_scalar(x_7)) {
 x_12 = lean_alloc_ctor(0, 2, 0);
} else {
 x_12 = x_7;
}
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
return x_12;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_4);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_4, 0);
lean_dec(x_19);
x_20 = lean_box(1);
lean_ctor_set(x_4, 0, x_20);
return x_4;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_4, 1);
lean_inc(x_21);
lean_dec(x_4);
x_22 = lean_box(1);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_read__mhpmeventh___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_read__mhpmeventh(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_write__mhpmeventh___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_BitVec_ofNat(x_1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_write__mhpmeventh(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = 19;
x_5 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_4, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_4, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_43; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_unsigned_to_nat(32u);
x_12 = lean_unsigned_to_nat(31u);
x_13 = lean_unsigned_to_nat(0u);
x_43 = lean_nat_dec_lt(x_1, x_11);
if (x_43 == 0)
{
lean_object* x_44; 
lean_dec(x_9);
x_44 = l_outOfBounds___redArg(x_13);
x_14 = x_44;
goto block_42;
}
else
{
lean_object* x_45; 
x_45 = lean_array_fget(x_9, x_1);
lean_dec(x_9);
x_14 = x_45;
goto block_42;
}
block_42:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = l_BitVec_extractLsb___redArg(x_12, x_13, x_14);
lean_dec(x_14);
x_16 = l_BitVec_append___redArg(x_11, x_2, x_15);
lean_dec(x_15);
x_17 = l_LeanRV64DExecutable_Functions_legalize__hpmevent(x_16, x_10);
lean_dec(x_16);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
x_21 = l_LeanRV64DExecutable_Functions_sys__writable__hpm__counters;
x_22 = l_Sail_BitVec_access(x_11, x_21, x_1);
x_23 = l_LeanRV64DExecutable_Functions_write__mhpmeventh___closed__0;
x_24 = lean_nat_dec_eq(x_22, x_23);
lean_dec(x_22);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_19);
lean_dec(x_6);
x_25 = lean_box(0);
lean_ctor_set(x_17, 0, x_25);
return x_17;
}
else
{
lean_object* x_26; lean_object* x_27; 
lean_free_object(x_17);
x_26 = lean_array_set(x_6, x_1, x_19);
x_27 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_4, x_26, x_20);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_28 = lean_ctor_get(x_17, 0);
x_29 = lean_ctor_get(x_17, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_17);
x_30 = l_LeanRV64DExecutable_Functions_sys__writable__hpm__counters;
x_31 = l_Sail_BitVec_access(x_11, x_30, x_1);
x_32 = l_LeanRV64DExecutable_Functions_write__mhpmeventh___closed__0;
x_33 = lean_nat_dec_eq(x_31, x_32);
lean_dec(x_31);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_28);
lean_dec(x_6);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_29);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_array_set(x_6, x_1, x_28);
x_37 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_4, x_36, x_29);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_6);
x_38 = !lean_is_exclusive(x_17);
if (x_38 == 0)
{
return x_17;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_17, 0);
x_40 = lean_ctor_get(x_17, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_17);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_6);
x_46 = !lean_is_exclusive(x_8);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_8, 0);
lean_dec(x_47);
x_48 = lean_box(1);
lean_ctor_set(x_8, 0, x_48);
return x_8;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_8, 1);
lean_inc(x_49);
lean_dec(x_8);
x_50 = lean_box(1);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
}
else
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_5);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_5, 0);
lean_dec(x_53);
x_54 = lean_box(1);
lean_ctor_set(x_5, 0, x_54);
return x_5;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_5, 1);
lean_inc(x_55);
lean_dec(x_5);
x_56 = lean_box(1);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_write__mhpmeventh___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_write__mhpmeventh(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_get__scountovf___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(3u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_get__scountovf___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("riscv_sscofpmf.sail", 19, 19);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_get__scountovf___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(74u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_get__scountovf___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("scountovf not readable from User mode", 37, 37);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__scountovf(uint8_t x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = 19;
x_4 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_39);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_45);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_51);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_54);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_57);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_60);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_66);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_69);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_72);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_75);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_78);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_81);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_84);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_87);
if (lean_obj_tag(x_88) == 0)
{
uint8_t x_89; 
x_89 = !lean_is_exclusive(x_88);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_90 = lean_ctor_get(x_88, 0);
x_91 = lean_ctor_get(x_88, 1);
x_92 = lean_unsigned_to_nat(3u);
x_93 = lean_unsigned_to_nat(4u);
x_94 = lean_unsigned_to_nat(5u);
x_95 = lean_unsigned_to_nat(6u);
x_96 = lean_unsigned_to_nat(7u);
x_97 = lean_unsigned_to_nat(8u);
x_98 = lean_unsigned_to_nat(9u);
x_99 = lean_unsigned_to_nat(10u);
x_100 = lean_unsigned_to_nat(11u);
x_101 = lean_unsigned_to_nat(12u);
x_102 = lean_unsigned_to_nat(13u);
x_103 = lean_unsigned_to_nat(14u);
x_104 = lean_unsigned_to_nat(15u);
x_105 = lean_unsigned_to_nat(16u);
x_106 = lean_unsigned_to_nat(17u);
x_107 = lean_unsigned_to_nat(18u);
x_108 = lean_unsigned_to_nat(19u);
x_109 = lean_unsigned_to_nat(20u);
x_110 = lean_unsigned_to_nat(21u);
x_111 = lean_unsigned_to_nat(22u);
x_112 = lean_unsigned_to_nat(23u);
x_113 = lean_unsigned_to_nat(24u);
x_114 = lean_unsigned_to_nat(25u);
x_115 = lean_unsigned_to_nat(26u);
x_116 = lean_unsigned_to_nat(27u);
x_117 = lean_unsigned_to_nat(28u);
x_118 = lean_unsigned_to_nat(29u);
x_119 = lean_unsigned_to_nat(30u);
x_120 = lean_unsigned_to_nat(31u);
x_121 = lean_array_fget(x_5, x_120);
lean_dec(x_5);
x_122 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_121);
lean_dec(x_121);
x_123 = lean_array_fget(x_8, x_119);
lean_dec(x_8);
x_124 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_123);
lean_dec(x_123);
x_125 = lean_array_fget(x_11, x_118);
lean_dec(x_11);
x_126 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_125);
lean_dec(x_125);
x_127 = lean_array_fget(x_14, x_117);
lean_dec(x_14);
x_128 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_127);
lean_dec(x_127);
x_129 = lean_array_fget(x_17, x_116);
lean_dec(x_17);
x_130 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_129);
lean_dec(x_129);
x_131 = lean_array_fget(x_20, x_115);
lean_dec(x_20);
x_132 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_131);
lean_dec(x_131);
x_133 = lean_array_fget(x_23, x_114);
lean_dec(x_23);
x_134 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_133);
lean_dec(x_133);
x_135 = lean_array_fget(x_26, x_113);
lean_dec(x_26);
x_136 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_135);
lean_dec(x_135);
x_137 = lean_array_fget(x_29, x_112);
lean_dec(x_29);
x_138 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_137);
lean_dec(x_137);
x_139 = lean_array_fget(x_32, x_111);
lean_dec(x_32);
x_140 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_139);
lean_dec(x_139);
x_141 = lean_array_fget(x_35, x_110);
lean_dec(x_35);
x_142 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_141);
lean_dec(x_141);
x_143 = lean_array_fget(x_38, x_109);
lean_dec(x_38);
x_144 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_143);
lean_dec(x_143);
x_145 = lean_array_fget(x_41, x_108);
lean_dec(x_41);
x_146 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_145);
lean_dec(x_145);
x_147 = lean_array_fget(x_44, x_107);
lean_dec(x_44);
x_148 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_147);
lean_dec(x_147);
x_149 = lean_array_fget(x_47, x_106);
lean_dec(x_47);
x_150 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_149);
lean_dec(x_149);
x_151 = lean_array_fget(x_50, x_105);
lean_dec(x_50);
x_152 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_151);
lean_dec(x_151);
x_153 = lean_array_fget(x_53, x_104);
lean_dec(x_53);
x_154 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_153);
lean_dec(x_153);
x_155 = lean_array_fget(x_56, x_103);
lean_dec(x_56);
x_156 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_155);
lean_dec(x_155);
x_157 = lean_array_fget(x_59, x_102);
lean_dec(x_59);
x_158 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_157);
lean_dec(x_157);
x_159 = lean_array_fget(x_62, x_101);
lean_dec(x_62);
x_160 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_159);
lean_dec(x_159);
x_161 = lean_array_fget(x_65, x_100);
lean_dec(x_65);
x_162 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_161);
lean_dec(x_161);
x_163 = lean_array_fget(x_68, x_99);
lean_dec(x_68);
x_164 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_163);
lean_dec(x_163);
x_165 = lean_array_fget(x_71, x_98);
lean_dec(x_71);
x_166 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_165);
lean_dec(x_165);
x_167 = lean_array_fget(x_74, x_97);
lean_dec(x_74);
x_168 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_167);
lean_dec(x_167);
x_169 = lean_array_fget(x_77, x_96);
lean_dec(x_77);
x_170 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_169);
lean_dec(x_169);
x_171 = lean_array_fget(x_80, x_95);
lean_dec(x_80);
x_172 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_171);
lean_dec(x_171);
x_173 = lean_array_fget(x_83, x_94);
lean_dec(x_83);
x_174 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_173);
lean_dec(x_173);
x_175 = lean_array_fget(x_86, x_93);
lean_dec(x_86);
x_176 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_175);
lean_dec(x_175);
x_177 = lean_array_fget(x_90, x_92);
lean_dec(x_90);
x_178 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_177);
lean_dec(x_177);
x_179 = l_LeanRV64DExecutable_Functions_get__scountovf___closed__0;
x_180 = l_BitVec_append___redArg(x_92, x_178, x_179);
lean_dec(x_178);
x_181 = l_BitVec_append___redArg(x_93, x_176, x_180);
lean_dec(x_180);
lean_dec(x_176);
x_182 = l_BitVec_append___redArg(x_94, x_174, x_181);
lean_dec(x_181);
lean_dec(x_174);
x_183 = l_BitVec_append___redArg(x_95, x_172, x_182);
lean_dec(x_182);
lean_dec(x_172);
x_184 = l_BitVec_append___redArg(x_96, x_170, x_183);
lean_dec(x_183);
lean_dec(x_170);
x_185 = l_BitVec_append___redArg(x_97, x_168, x_184);
lean_dec(x_184);
lean_dec(x_168);
x_186 = l_BitVec_append___redArg(x_98, x_166, x_185);
lean_dec(x_185);
lean_dec(x_166);
x_187 = l_BitVec_append___redArg(x_99, x_164, x_186);
lean_dec(x_186);
lean_dec(x_164);
x_188 = l_BitVec_append___redArg(x_100, x_162, x_187);
lean_dec(x_187);
lean_dec(x_162);
x_189 = l_BitVec_append___redArg(x_101, x_160, x_188);
lean_dec(x_188);
lean_dec(x_160);
x_190 = l_BitVec_append___redArg(x_102, x_158, x_189);
lean_dec(x_189);
lean_dec(x_158);
x_191 = l_BitVec_append___redArg(x_103, x_156, x_190);
lean_dec(x_190);
lean_dec(x_156);
x_192 = l_BitVec_append___redArg(x_104, x_154, x_191);
lean_dec(x_191);
lean_dec(x_154);
x_193 = l_BitVec_append___redArg(x_105, x_152, x_192);
lean_dec(x_192);
lean_dec(x_152);
x_194 = l_BitVec_append___redArg(x_106, x_150, x_193);
lean_dec(x_193);
lean_dec(x_150);
x_195 = l_BitVec_append___redArg(x_107, x_148, x_194);
lean_dec(x_194);
lean_dec(x_148);
x_196 = l_BitVec_append___redArg(x_108, x_146, x_195);
lean_dec(x_195);
lean_dec(x_146);
x_197 = l_BitVec_append___redArg(x_109, x_144, x_196);
lean_dec(x_196);
lean_dec(x_144);
x_198 = l_BitVec_append___redArg(x_110, x_142, x_197);
lean_dec(x_197);
lean_dec(x_142);
x_199 = l_BitVec_append___redArg(x_111, x_140, x_198);
lean_dec(x_198);
lean_dec(x_140);
x_200 = l_BitVec_append___redArg(x_112, x_138, x_199);
lean_dec(x_199);
lean_dec(x_138);
x_201 = l_BitVec_append___redArg(x_113, x_136, x_200);
lean_dec(x_200);
lean_dec(x_136);
x_202 = l_BitVec_append___redArg(x_114, x_134, x_201);
lean_dec(x_201);
lean_dec(x_134);
x_203 = l_BitVec_append___redArg(x_115, x_132, x_202);
lean_dec(x_202);
lean_dec(x_132);
x_204 = l_BitVec_append___redArg(x_116, x_130, x_203);
lean_dec(x_203);
lean_dec(x_130);
x_205 = l_BitVec_append___redArg(x_117, x_128, x_204);
lean_dec(x_204);
lean_dec(x_128);
x_206 = l_BitVec_append___redArg(x_118, x_126, x_205);
lean_dec(x_205);
lean_dec(x_126);
x_207 = l_BitVec_append___redArg(x_119, x_124, x_206);
lean_dec(x_206);
lean_dec(x_124);
x_208 = l_BitVec_append___redArg(x_120, x_122, x_207);
lean_dec(x_207);
lean_dec(x_122);
switch (x_1) {
case 0:
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
lean_dec(x_208);
lean_free_object(x_88);
x_209 = l_LeanRV64DExecutable_Functions_get__scountovf___closed__1;
x_210 = l_LeanRV64DExecutable_Functions_get__scountovf___closed__2;
x_211 = l_LeanRV64DExecutable_Functions_get__scountovf___closed__3;
x_212 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_209, x_210, x_211, x_91);
return x_212;
}
case 1:
{
uint8_t x_213; lean_object* x_214; 
lean_free_object(x_88);
x_213 = 74;
x_214 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_213, x_91);
if (lean_obj_tag(x_214) == 0)
{
uint8_t x_215; 
x_215 = !lean_is_exclusive(x_214);
if (x_215 == 0)
{
lean_object* x_216; lean_object* x_217; 
x_216 = lean_ctor_get(x_214, 0);
x_217 = lean_nat_land(x_208, x_216);
lean_dec(x_216);
lean_dec(x_208);
lean_ctor_set(x_214, 0, x_217);
return x_214;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_218 = lean_ctor_get(x_214, 0);
x_219 = lean_ctor_get(x_214, 1);
lean_inc(x_219);
lean_inc(x_218);
lean_dec(x_214);
x_220 = lean_nat_land(x_208, x_218);
lean_dec(x_218);
lean_dec(x_208);
x_221 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_221, 0, x_220);
lean_ctor_set(x_221, 1, x_219);
return x_221;
}
}
else
{
uint8_t x_222; 
lean_dec(x_208);
x_222 = !lean_is_exclusive(x_214);
if (x_222 == 0)
{
lean_object* x_223; lean_object* x_224; 
x_223 = lean_ctor_get(x_214, 0);
lean_dec(x_223);
x_224 = lean_box(1);
lean_ctor_set(x_214, 0, x_224);
return x_214;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_225 = lean_ctor_get(x_214, 1);
lean_inc(x_225);
lean_dec(x_214);
x_226 = lean_box(1);
x_227 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_227, 0, x_226);
lean_ctor_set(x_227, 1, x_225);
return x_227;
}
}
}
default: 
{
lean_ctor_set(x_88, 0, x_208);
return x_88;
}
}
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; 
x_228 = lean_ctor_get(x_88, 0);
x_229 = lean_ctor_get(x_88, 1);
lean_inc(x_229);
lean_inc(x_228);
lean_dec(x_88);
x_230 = lean_unsigned_to_nat(3u);
x_231 = lean_unsigned_to_nat(4u);
x_232 = lean_unsigned_to_nat(5u);
x_233 = lean_unsigned_to_nat(6u);
x_234 = lean_unsigned_to_nat(7u);
x_235 = lean_unsigned_to_nat(8u);
x_236 = lean_unsigned_to_nat(9u);
x_237 = lean_unsigned_to_nat(10u);
x_238 = lean_unsigned_to_nat(11u);
x_239 = lean_unsigned_to_nat(12u);
x_240 = lean_unsigned_to_nat(13u);
x_241 = lean_unsigned_to_nat(14u);
x_242 = lean_unsigned_to_nat(15u);
x_243 = lean_unsigned_to_nat(16u);
x_244 = lean_unsigned_to_nat(17u);
x_245 = lean_unsigned_to_nat(18u);
x_246 = lean_unsigned_to_nat(19u);
x_247 = lean_unsigned_to_nat(20u);
x_248 = lean_unsigned_to_nat(21u);
x_249 = lean_unsigned_to_nat(22u);
x_250 = lean_unsigned_to_nat(23u);
x_251 = lean_unsigned_to_nat(24u);
x_252 = lean_unsigned_to_nat(25u);
x_253 = lean_unsigned_to_nat(26u);
x_254 = lean_unsigned_to_nat(27u);
x_255 = lean_unsigned_to_nat(28u);
x_256 = lean_unsigned_to_nat(29u);
x_257 = lean_unsigned_to_nat(30u);
x_258 = lean_unsigned_to_nat(31u);
x_259 = lean_array_fget(x_5, x_258);
lean_dec(x_5);
x_260 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_259);
lean_dec(x_259);
x_261 = lean_array_fget(x_8, x_257);
lean_dec(x_8);
x_262 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_261);
lean_dec(x_261);
x_263 = lean_array_fget(x_11, x_256);
lean_dec(x_11);
x_264 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_263);
lean_dec(x_263);
x_265 = lean_array_fget(x_14, x_255);
lean_dec(x_14);
x_266 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_265);
lean_dec(x_265);
x_267 = lean_array_fget(x_17, x_254);
lean_dec(x_17);
x_268 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_267);
lean_dec(x_267);
x_269 = lean_array_fget(x_20, x_253);
lean_dec(x_20);
x_270 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_269);
lean_dec(x_269);
x_271 = lean_array_fget(x_23, x_252);
lean_dec(x_23);
x_272 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_271);
lean_dec(x_271);
x_273 = lean_array_fget(x_26, x_251);
lean_dec(x_26);
x_274 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_273);
lean_dec(x_273);
x_275 = lean_array_fget(x_29, x_250);
lean_dec(x_29);
x_276 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_275);
lean_dec(x_275);
x_277 = lean_array_fget(x_32, x_249);
lean_dec(x_32);
x_278 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_277);
lean_dec(x_277);
x_279 = lean_array_fget(x_35, x_248);
lean_dec(x_35);
x_280 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_279);
lean_dec(x_279);
x_281 = lean_array_fget(x_38, x_247);
lean_dec(x_38);
x_282 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_281);
lean_dec(x_281);
x_283 = lean_array_fget(x_41, x_246);
lean_dec(x_41);
x_284 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_283);
lean_dec(x_283);
x_285 = lean_array_fget(x_44, x_245);
lean_dec(x_44);
x_286 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_285);
lean_dec(x_285);
x_287 = lean_array_fget(x_47, x_244);
lean_dec(x_47);
x_288 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_287);
lean_dec(x_287);
x_289 = lean_array_fget(x_50, x_243);
lean_dec(x_50);
x_290 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_289);
lean_dec(x_289);
x_291 = lean_array_fget(x_53, x_242);
lean_dec(x_53);
x_292 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_291);
lean_dec(x_291);
x_293 = lean_array_fget(x_56, x_241);
lean_dec(x_56);
x_294 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_293);
lean_dec(x_293);
x_295 = lean_array_fget(x_59, x_240);
lean_dec(x_59);
x_296 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_295);
lean_dec(x_295);
x_297 = lean_array_fget(x_62, x_239);
lean_dec(x_62);
x_298 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_297);
lean_dec(x_297);
x_299 = lean_array_fget(x_65, x_238);
lean_dec(x_65);
x_300 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_299);
lean_dec(x_299);
x_301 = lean_array_fget(x_68, x_237);
lean_dec(x_68);
x_302 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_301);
lean_dec(x_301);
x_303 = lean_array_fget(x_71, x_236);
lean_dec(x_71);
x_304 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_303);
lean_dec(x_303);
x_305 = lean_array_fget(x_74, x_235);
lean_dec(x_74);
x_306 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_305);
lean_dec(x_305);
x_307 = lean_array_fget(x_77, x_234);
lean_dec(x_77);
x_308 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_307);
lean_dec(x_307);
x_309 = lean_array_fget(x_80, x_233);
lean_dec(x_80);
x_310 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_309);
lean_dec(x_309);
x_311 = lean_array_fget(x_83, x_232);
lean_dec(x_83);
x_312 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_311);
lean_dec(x_311);
x_313 = lean_array_fget(x_86, x_231);
lean_dec(x_86);
x_314 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_313);
lean_dec(x_313);
x_315 = lean_array_fget(x_228, x_230);
lean_dec(x_228);
x_316 = l_LeanRV64DExecutable_Functions___get__HpmEvent__OF(x_315);
lean_dec(x_315);
x_317 = l_LeanRV64DExecutable_Functions_get__scountovf___closed__0;
x_318 = l_BitVec_append___redArg(x_230, x_316, x_317);
lean_dec(x_316);
x_319 = l_BitVec_append___redArg(x_231, x_314, x_318);
lean_dec(x_318);
lean_dec(x_314);
x_320 = l_BitVec_append___redArg(x_232, x_312, x_319);
lean_dec(x_319);
lean_dec(x_312);
x_321 = l_BitVec_append___redArg(x_233, x_310, x_320);
lean_dec(x_320);
lean_dec(x_310);
x_322 = l_BitVec_append___redArg(x_234, x_308, x_321);
lean_dec(x_321);
lean_dec(x_308);
x_323 = l_BitVec_append___redArg(x_235, x_306, x_322);
lean_dec(x_322);
lean_dec(x_306);
x_324 = l_BitVec_append___redArg(x_236, x_304, x_323);
lean_dec(x_323);
lean_dec(x_304);
x_325 = l_BitVec_append___redArg(x_237, x_302, x_324);
lean_dec(x_324);
lean_dec(x_302);
x_326 = l_BitVec_append___redArg(x_238, x_300, x_325);
lean_dec(x_325);
lean_dec(x_300);
x_327 = l_BitVec_append___redArg(x_239, x_298, x_326);
lean_dec(x_326);
lean_dec(x_298);
x_328 = l_BitVec_append___redArg(x_240, x_296, x_327);
lean_dec(x_327);
lean_dec(x_296);
x_329 = l_BitVec_append___redArg(x_241, x_294, x_328);
lean_dec(x_328);
lean_dec(x_294);
x_330 = l_BitVec_append___redArg(x_242, x_292, x_329);
lean_dec(x_329);
lean_dec(x_292);
x_331 = l_BitVec_append___redArg(x_243, x_290, x_330);
lean_dec(x_330);
lean_dec(x_290);
x_332 = l_BitVec_append___redArg(x_244, x_288, x_331);
lean_dec(x_331);
lean_dec(x_288);
x_333 = l_BitVec_append___redArg(x_245, x_286, x_332);
lean_dec(x_332);
lean_dec(x_286);
x_334 = l_BitVec_append___redArg(x_246, x_284, x_333);
lean_dec(x_333);
lean_dec(x_284);
x_335 = l_BitVec_append___redArg(x_247, x_282, x_334);
lean_dec(x_334);
lean_dec(x_282);
x_336 = l_BitVec_append___redArg(x_248, x_280, x_335);
lean_dec(x_335);
lean_dec(x_280);
x_337 = l_BitVec_append___redArg(x_249, x_278, x_336);
lean_dec(x_336);
lean_dec(x_278);
x_338 = l_BitVec_append___redArg(x_250, x_276, x_337);
lean_dec(x_337);
lean_dec(x_276);
x_339 = l_BitVec_append___redArg(x_251, x_274, x_338);
lean_dec(x_338);
lean_dec(x_274);
x_340 = l_BitVec_append___redArg(x_252, x_272, x_339);
lean_dec(x_339);
lean_dec(x_272);
x_341 = l_BitVec_append___redArg(x_253, x_270, x_340);
lean_dec(x_340);
lean_dec(x_270);
x_342 = l_BitVec_append___redArg(x_254, x_268, x_341);
lean_dec(x_341);
lean_dec(x_268);
x_343 = l_BitVec_append___redArg(x_255, x_266, x_342);
lean_dec(x_342);
lean_dec(x_266);
x_344 = l_BitVec_append___redArg(x_256, x_264, x_343);
lean_dec(x_343);
lean_dec(x_264);
x_345 = l_BitVec_append___redArg(x_257, x_262, x_344);
lean_dec(x_344);
lean_dec(x_262);
x_346 = l_BitVec_append___redArg(x_258, x_260, x_345);
lean_dec(x_345);
lean_dec(x_260);
switch (x_1) {
case 0:
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; 
lean_dec(x_346);
x_347 = l_LeanRV64DExecutable_Functions_get__scountovf___closed__1;
x_348 = l_LeanRV64DExecutable_Functions_get__scountovf___closed__2;
x_349 = l_LeanRV64DExecutable_Functions_get__scountovf___closed__3;
x_350 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_347, x_348, x_349, x_229);
return x_350;
}
case 1:
{
uint8_t x_351; lean_object* x_352; 
x_351 = 74;
x_352 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_351, x_229);
if (lean_obj_tag(x_352) == 0)
{
lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; 
x_353 = lean_ctor_get(x_352, 0);
lean_inc(x_353);
x_354 = lean_ctor_get(x_352, 1);
lean_inc(x_354);
if (lean_is_exclusive(x_352)) {
 lean_ctor_release(x_352, 0);
 lean_ctor_release(x_352, 1);
 x_355 = x_352;
} else {
 lean_dec_ref(x_352);
 x_355 = lean_box(0);
}
x_356 = lean_nat_land(x_346, x_353);
lean_dec(x_353);
lean_dec(x_346);
if (lean_is_scalar(x_355)) {
 x_357 = lean_alloc_ctor(0, 2, 0);
} else {
 x_357 = x_355;
}
lean_ctor_set(x_357, 0, x_356);
lean_ctor_set(x_357, 1, x_354);
return x_357;
}
else
{
lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; 
lean_dec(x_346);
x_358 = lean_ctor_get(x_352, 1);
lean_inc(x_358);
if (lean_is_exclusive(x_352)) {
 lean_ctor_release(x_352, 0);
 lean_ctor_release(x_352, 1);
 x_359 = x_352;
} else {
 lean_dec_ref(x_352);
 x_359 = lean_box(0);
}
x_360 = lean_box(1);
if (lean_is_scalar(x_359)) {
 x_361 = lean_alloc_ctor(1, 2, 0);
} else {
 x_361 = x_359;
}
lean_ctor_set(x_361, 0, x_360);
lean_ctor_set(x_361, 1, x_358);
return x_361;
}
}
default: 
{
lean_object* x_362; 
x_362 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_362, 0, x_346);
lean_ctor_set(x_362, 1, x_229);
return x_362;
}
}
}
}
else
{
uint8_t x_363; 
lean_dec(x_86);
lean_dec(x_83);
lean_dec(x_80);
lean_dec(x_77);
lean_dec(x_74);
lean_dec(x_71);
lean_dec(x_68);
lean_dec(x_65);
lean_dec(x_62);
lean_dec(x_59);
lean_dec(x_56);
lean_dec(x_53);
lean_dec(x_50);
lean_dec(x_47);
lean_dec(x_44);
lean_dec(x_41);
lean_dec(x_38);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_363 = !lean_is_exclusive(x_88);
if (x_363 == 0)
{
lean_object* x_364; lean_object* x_365; 
x_364 = lean_ctor_get(x_88, 0);
lean_dec(x_364);
x_365 = lean_box(1);
lean_ctor_set(x_88, 0, x_365);
return x_88;
}
else
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; 
x_366 = lean_ctor_get(x_88, 1);
lean_inc(x_366);
lean_dec(x_88);
x_367 = lean_box(1);
x_368 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_368, 0, x_367);
lean_ctor_set(x_368, 1, x_366);
return x_368;
}
}
}
else
{
uint8_t x_369; 
lean_dec(x_83);
lean_dec(x_80);
lean_dec(x_77);
lean_dec(x_74);
lean_dec(x_71);
lean_dec(x_68);
lean_dec(x_65);
lean_dec(x_62);
lean_dec(x_59);
lean_dec(x_56);
lean_dec(x_53);
lean_dec(x_50);
lean_dec(x_47);
lean_dec(x_44);
lean_dec(x_41);
lean_dec(x_38);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_369 = !lean_is_exclusive(x_85);
if (x_369 == 0)
{
lean_object* x_370; lean_object* x_371; 
x_370 = lean_ctor_get(x_85, 0);
lean_dec(x_370);
x_371 = lean_box(1);
lean_ctor_set(x_85, 0, x_371);
return x_85;
}
else
{
lean_object* x_372; lean_object* x_373; lean_object* x_374; 
x_372 = lean_ctor_get(x_85, 1);
lean_inc(x_372);
lean_dec(x_85);
x_373 = lean_box(1);
x_374 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_374, 0, x_373);
lean_ctor_set(x_374, 1, x_372);
return x_374;
}
}
}
else
{
uint8_t x_375; 
lean_dec(x_80);
lean_dec(x_77);
lean_dec(x_74);
lean_dec(x_71);
lean_dec(x_68);
lean_dec(x_65);
lean_dec(x_62);
lean_dec(x_59);
lean_dec(x_56);
lean_dec(x_53);
lean_dec(x_50);
lean_dec(x_47);
lean_dec(x_44);
lean_dec(x_41);
lean_dec(x_38);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_375 = !lean_is_exclusive(x_82);
if (x_375 == 0)
{
lean_object* x_376; lean_object* x_377; 
x_376 = lean_ctor_get(x_82, 0);
lean_dec(x_376);
x_377 = lean_box(1);
lean_ctor_set(x_82, 0, x_377);
return x_82;
}
else
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; 
x_378 = lean_ctor_get(x_82, 1);
lean_inc(x_378);
lean_dec(x_82);
x_379 = lean_box(1);
x_380 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_380, 0, x_379);
lean_ctor_set(x_380, 1, x_378);
return x_380;
}
}
}
else
{
uint8_t x_381; 
lean_dec(x_77);
lean_dec(x_74);
lean_dec(x_71);
lean_dec(x_68);
lean_dec(x_65);
lean_dec(x_62);
lean_dec(x_59);
lean_dec(x_56);
lean_dec(x_53);
lean_dec(x_50);
lean_dec(x_47);
lean_dec(x_44);
lean_dec(x_41);
lean_dec(x_38);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_381 = !lean_is_exclusive(x_79);
if (x_381 == 0)
{
lean_object* x_382; lean_object* x_383; 
x_382 = lean_ctor_get(x_79, 0);
lean_dec(x_382);
x_383 = lean_box(1);
lean_ctor_set(x_79, 0, x_383);
return x_79;
}
else
{
lean_object* x_384; lean_object* x_385; lean_object* x_386; 
x_384 = lean_ctor_get(x_79, 1);
lean_inc(x_384);
lean_dec(x_79);
x_385 = lean_box(1);
x_386 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_386, 0, x_385);
lean_ctor_set(x_386, 1, x_384);
return x_386;
}
}
}
else
{
uint8_t x_387; 
lean_dec(x_74);
lean_dec(x_71);
lean_dec(x_68);
lean_dec(x_65);
lean_dec(x_62);
lean_dec(x_59);
lean_dec(x_56);
lean_dec(x_53);
lean_dec(x_50);
lean_dec(x_47);
lean_dec(x_44);
lean_dec(x_41);
lean_dec(x_38);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_387 = !lean_is_exclusive(x_76);
if (x_387 == 0)
{
lean_object* x_388; lean_object* x_389; 
x_388 = lean_ctor_get(x_76, 0);
lean_dec(x_388);
x_389 = lean_box(1);
lean_ctor_set(x_76, 0, x_389);
return x_76;
}
else
{
lean_object* x_390; lean_object* x_391; lean_object* x_392; 
x_390 = lean_ctor_get(x_76, 1);
lean_inc(x_390);
lean_dec(x_76);
x_391 = lean_box(1);
x_392 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_392, 0, x_391);
lean_ctor_set(x_392, 1, x_390);
return x_392;
}
}
}
else
{
uint8_t x_393; 
lean_dec(x_71);
lean_dec(x_68);
lean_dec(x_65);
lean_dec(x_62);
lean_dec(x_59);
lean_dec(x_56);
lean_dec(x_53);
lean_dec(x_50);
lean_dec(x_47);
lean_dec(x_44);
lean_dec(x_41);
lean_dec(x_38);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_393 = !lean_is_exclusive(x_73);
if (x_393 == 0)
{
lean_object* x_394; lean_object* x_395; 
x_394 = lean_ctor_get(x_73, 0);
lean_dec(x_394);
x_395 = lean_box(1);
lean_ctor_set(x_73, 0, x_395);
return x_73;
}
else
{
lean_object* x_396; lean_object* x_397; lean_object* x_398; 
x_396 = lean_ctor_get(x_73, 1);
lean_inc(x_396);
lean_dec(x_73);
x_397 = lean_box(1);
x_398 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_398, 0, x_397);
lean_ctor_set(x_398, 1, x_396);
return x_398;
}
}
}
else
{
uint8_t x_399; 
lean_dec(x_68);
lean_dec(x_65);
lean_dec(x_62);
lean_dec(x_59);
lean_dec(x_56);
lean_dec(x_53);
lean_dec(x_50);
lean_dec(x_47);
lean_dec(x_44);
lean_dec(x_41);
lean_dec(x_38);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_399 = !lean_is_exclusive(x_70);
if (x_399 == 0)
{
lean_object* x_400; lean_object* x_401; 
x_400 = lean_ctor_get(x_70, 0);
lean_dec(x_400);
x_401 = lean_box(1);
lean_ctor_set(x_70, 0, x_401);
return x_70;
}
else
{
lean_object* x_402; lean_object* x_403; lean_object* x_404; 
x_402 = lean_ctor_get(x_70, 1);
lean_inc(x_402);
lean_dec(x_70);
x_403 = lean_box(1);
x_404 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_404, 0, x_403);
lean_ctor_set(x_404, 1, x_402);
return x_404;
}
}
}
else
{
uint8_t x_405; 
lean_dec(x_65);
lean_dec(x_62);
lean_dec(x_59);
lean_dec(x_56);
lean_dec(x_53);
lean_dec(x_50);
lean_dec(x_47);
lean_dec(x_44);
lean_dec(x_41);
lean_dec(x_38);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_405 = !lean_is_exclusive(x_67);
if (x_405 == 0)
{
lean_object* x_406; lean_object* x_407; 
x_406 = lean_ctor_get(x_67, 0);
lean_dec(x_406);
x_407 = lean_box(1);
lean_ctor_set(x_67, 0, x_407);
return x_67;
}
else
{
lean_object* x_408; lean_object* x_409; lean_object* x_410; 
x_408 = lean_ctor_get(x_67, 1);
lean_inc(x_408);
lean_dec(x_67);
x_409 = lean_box(1);
x_410 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_410, 0, x_409);
lean_ctor_set(x_410, 1, x_408);
return x_410;
}
}
}
else
{
uint8_t x_411; 
lean_dec(x_62);
lean_dec(x_59);
lean_dec(x_56);
lean_dec(x_53);
lean_dec(x_50);
lean_dec(x_47);
lean_dec(x_44);
lean_dec(x_41);
lean_dec(x_38);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_411 = !lean_is_exclusive(x_64);
if (x_411 == 0)
{
lean_object* x_412; lean_object* x_413; 
x_412 = lean_ctor_get(x_64, 0);
lean_dec(x_412);
x_413 = lean_box(1);
lean_ctor_set(x_64, 0, x_413);
return x_64;
}
else
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; 
x_414 = lean_ctor_get(x_64, 1);
lean_inc(x_414);
lean_dec(x_64);
x_415 = lean_box(1);
x_416 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_416, 0, x_415);
lean_ctor_set(x_416, 1, x_414);
return x_416;
}
}
}
else
{
uint8_t x_417; 
lean_dec(x_59);
lean_dec(x_56);
lean_dec(x_53);
lean_dec(x_50);
lean_dec(x_47);
lean_dec(x_44);
lean_dec(x_41);
lean_dec(x_38);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_417 = !lean_is_exclusive(x_61);
if (x_417 == 0)
{
lean_object* x_418; lean_object* x_419; 
x_418 = lean_ctor_get(x_61, 0);
lean_dec(x_418);
x_419 = lean_box(1);
lean_ctor_set(x_61, 0, x_419);
return x_61;
}
else
{
lean_object* x_420; lean_object* x_421; lean_object* x_422; 
x_420 = lean_ctor_get(x_61, 1);
lean_inc(x_420);
lean_dec(x_61);
x_421 = lean_box(1);
x_422 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_422, 0, x_421);
lean_ctor_set(x_422, 1, x_420);
return x_422;
}
}
}
else
{
uint8_t x_423; 
lean_dec(x_56);
lean_dec(x_53);
lean_dec(x_50);
lean_dec(x_47);
lean_dec(x_44);
lean_dec(x_41);
lean_dec(x_38);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_423 = !lean_is_exclusive(x_58);
if (x_423 == 0)
{
lean_object* x_424; lean_object* x_425; 
x_424 = lean_ctor_get(x_58, 0);
lean_dec(x_424);
x_425 = lean_box(1);
lean_ctor_set(x_58, 0, x_425);
return x_58;
}
else
{
lean_object* x_426; lean_object* x_427; lean_object* x_428; 
x_426 = lean_ctor_get(x_58, 1);
lean_inc(x_426);
lean_dec(x_58);
x_427 = lean_box(1);
x_428 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_428, 0, x_427);
lean_ctor_set(x_428, 1, x_426);
return x_428;
}
}
}
else
{
uint8_t x_429; 
lean_dec(x_53);
lean_dec(x_50);
lean_dec(x_47);
lean_dec(x_44);
lean_dec(x_41);
lean_dec(x_38);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_429 = !lean_is_exclusive(x_55);
if (x_429 == 0)
{
lean_object* x_430; lean_object* x_431; 
x_430 = lean_ctor_get(x_55, 0);
lean_dec(x_430);
x_431 = lean_box(1);
lean_ctor_set(x_55, 0, x_431);
return x_55;
}
else
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; 
x_432 = lean_ctor_get(x_55, 1);
lean_inc(x_432);
lean_dec(x_55);
x_433 = lean_box(1);
x_434 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_434, 0, x_433);
lean_ctor_set(x_434, 1, x_432);
return x_434;
}
}
}
else
{
uint8_t x_435; 
lean_dec(x_50);
lean_dec(x_47);
lean_dec(x_44);
lean_dec(x_41);
lean_dec(x_38);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_435 = !lean_is_exclusive(x_52);
if (x_435 == 0)
{
lean_object* x_436; lean_object* x_437; 
x_436 = lean_ctor_get(x_52, 0);
lean_dec(x_436);
x_437 = lean_box(1);
lean_ctor_set(x_52, 0, x_437);
return x_52;
}
else
{
lean_object* x_438; lean_object* x_439; lean_object* x_440; 
x_438 = lean_ctor_get(x_52, 1);
lean_inc(x_438);
lean_dec(x_52);
x_439 = lean_box(1);
x_440 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_440, 0, x_439);
lean_ctor_set(x_440, 1, x_438);
return x_440;
}
}
}
else
{
uint8_t x_441; 
lean_dec(x_47);
lean_dec(x_44);
lean_dec(x_41);
lean_dec(x_38);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_441 = !lean_is_exclusive(x_49);
if (x_441 == 0)
{
lean_object* x_442; lean_object* x_443; 
x_442 = lean_ctor_get(x_49, 0);
lean_dec(x_442);
x_443 = lean_box(1);
lean_ctor_set(x_49, 0, x_443);
return x_49;
}
else
{
lean_object* x_444; lean_object* x_445; lean_object* x_446; 
x_444 = lean_ctor_get(x_49, 1);
lean_inc(x_444);
lean_dec(x_49);
x_445 = lean_box(1);
x_446 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_446, 0, x_445);
lean_ctor_set(x_446, 1, x_444);
return x_446;
}
}
}
else
{
uint8_t x_447; 
lean_dec(x_44);
lean_dec(x_41);
lean_dec(x_38);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_447 = !lean_is_exclusive(x_46);
if (x_447 == 0)
{
lean_object* x_448; lean_object* x_449; 
x_448 = lean_ctor_get(x_46, 0);
lean_dec(x_448);
x_449 = lean_box(1);
lean_ctor_set(x_46, 0, x_449);
return x_46;
}
else
{
lean_object* x_450; lean_object* x_451; lean_object* x_452; 
x_450 = lean_ctor_get(x_46, 1);
lean_inc(x_450);
lean_dec(x_46);
x_451 = lean_box(1);
x_452 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_452, 0, x_451);
lean_ctor_set(x_452, 1, x_450);
return x_452;
}
}
}
else
{
uint8_t x_453; 
lean_dec(x_41);
lean_dec(x_38);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_453 = !lean_is_exclusive(x_43);
if (x_453 == 0)
{
lean_object* x_454; lean_object* x_455; 
x_454 = lean_ctor_get(x_43, 0);
lean_dec(x_454);
x_455 = lean_box(1);
lean_ctor_set(x_43, 0, x_455);
return x_43;
}
else
{
lean_object* x_456; lean_object* x_457; lean_object* x_458; 
x_456 = lean_ctor_get(x_43, 1);
lean_inc(x_456);
lean_dec(x_43);
x_457 = lean_box(1);
x_458 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_458, 0, x_457);
lean_ctor_set(x_458, 1, x_456);
return x_458;
}
}
}
else
{
uint8_t x_459; 
lean_dec(x_38);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_459 = !lean_is_exclusive(x_40);
if (x_459 == 0)
{
lean_object* x_460; lean_object* x_461; 
x_460 = lean_ctor_get(x_40, 0);
lean_dec(x_460);
x_461 = lean_box(1);
lean_ctor_set(x_40, 0, x_461);
return x_40;
}
else
{
lean_object* x_462; lean_object* x_463; lean_object* x_464; 
x_462 = lean_ctor_get(x_40, 1);
lean_inc(x_462);
lean_dec(x_40);
x_463 = lean_box(1);
x_464 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_464, 0, x_463);
lean_ctor_set(x_464, 1, x_462);
return x_464;
}
}
}
else
{
uint8_t x_465; 
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_465 = !lean_is_exclusive(x_37);
if (x_465 == 0)
{
lean_object* x_466; lean_object* x_467; 
x_466 = lean_ctor_get(x_37, 0);
lean_dec(x_466);
x_467 = lean_box(1);
lean_ctor_set(x_37, 0, x_467);
return x_37;
}
else
{
lean_object* x_468; lean_object* x_469; lean_object* x_470; 
x_468 = lean_ctor_get(x_37, 1);
lean_inc(x_468);
lean_dec(x_37);
x_469 = lean_box(1);
x_470 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_470, 0, x_469);
lean_ctor_set(x_470, 1, x_468);
return x_470;
}
}
}
else
{
uint8_t x_471; 
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_471 = !lean_is_exclusive(x_34);
if (x_471 == 0)
{
lean_object* x_472; lean_object* x_473; 
x_472 = lean_ctor_get(x_34, 0);
lean_dec(x_472);
x_473 = lean_box(1);
lean_ctor_set(x_34, 0, x_473);
return x_34;
}
else
{
lean_object* x_474; lean_object* x_475; lean_object* x_476; 
x_474 = lean_ctor_get(x_34, 1);
lean_inc(x_474);
lean_dec(x_34);
x_475 = lean_box(1);
x_476 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_476, 0, x_475);
lean_ctor_set(x_476, 1, x_474);
return x_476;
}
}
}
else
{
uint8_t x_477; 
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_477 = !lean_is_exclusive(x_31);
if (x_477 == 0)
{
lean_object* x_478; lean_object* x_479; 
x_478 = lean_ctor_get(x_31, 0);
lean_dec(x_478);
x_479 = lean_box(1);
lean_ctor_set(x_31, 0, x_479);
return x_31;
}
else
{
lean_object* x_480; lean_object* x_481; lean_object* x_482; 
x_480 = lean_ctor_get(x_31, 1);
lean_inc(x_480);
lean_dec(x_31);
x_481 = lean_box(1);
x_482 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_482, 0, x_481);
lean_ctor_set(x_482, 1, x_480);
return x_482;
}
}
}
else
{
uint8_t x_483; 
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_483 = !lean_is_exclusive(x_28);
if (x_483 == 0)
{
lean_object* x_484; lean_object* x_485; 
x_484 = lean_ctor_get(x_28, 0);
lean_dec(x_484);
x_485 = lean_box(1);
lean_ctor_set(x_28, 0, x_485);
return x_28;
}
else
{
lean_object* x_486; lean_object* x_487; lean_object* x_488; 
x_486 = lean_ctor_get(x_28, 1);
lean_inc(x_486);
lean_dec(x_28);
x_487 = lean_box(1);
x_488 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_488, 0, x_487);
lean_ctor_set(x_488, 1, x_486);
return x_488;
}
}
}
else
{
uint8_t x_489; 
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_489 = !lean_is_exclusive(x_25);
if (x_489 == 0)
{
lean_object* x_490; lean_object* x_491; 
x_490 = lean_ctor_get(x_25, 0);
lean_dec(x_490);
x_491 = lean_box(1);
lean_ctor_set(x_25, 0, x_491);
return x_25;
}
else
{
lean_object* x_492; lean_object* x_493; lean_object* x_494; 
x_492 = lean_ctor_get(x_25, 1);
lean_inc(x_492);
lean_dec(x_25);
x_493 = lean_box(1);
x_494 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_494, 0, x_493);
lean_ctor_set(x_494, 1, x_492);
return x_494;
}
}
}
else
{
uint8_t x_495; 
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_495 = !lean_is_exclusive(x_22);
if (x_495 == 0)
{
lean_object* x_496; lean_object* x_497; 
x_496 = lean_ctor_get(x_22, 0);
lean_dec(x_496);
x_497 = lean_box(1);
lean_ctor_set(x_22, 0, x_497);
return x_22;
}
else
{
lean_object* x_498; lean_object* x_499; lean_object* x_500; 
x_498 = lean_ctor_get(x_22, 1);
lean_inc(x_498);
lean_dec(x_22);
x_499 = lean_box(1);
x_500 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_500, 0, x_499);
lean_ctor_set(x_500, 1, x_498);
return x_500;
}
}
}
else
{
uint8_t x_501; 
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_501 = !lean_is_exclusive(x_19);
if (x_501 == 0)
{
lean_object* x_502; lean_object* x_503; 
x_502 = lean_ctor_get(x_19, 0);
lean_dec(x_502);
x_503 = lean_box(1);
lean_ctor_set(x_19, 0, x_503);
return x_19;
}
else
{
lean_object* x_504; lean_object* x_505; lean_object* x_506; 
x_504 = lean_ctor_get(x_19, 1);
lean_inc(x_504);
lean_dec(x_19);
x_505 = lean_box(1);
x_506 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_506, 0, x_505);
lean_ctor_set(x_506, 1, x_504);
return x_506;
}
}
}
else
{
uint8_t x_507; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_507 = !lean_is_exclusive(x_16);
if (x_507 == 0)
{
lean_object* x_508; lean_object* x_509; 
x_508 = lean_ctor_get(x_16, 0);
lean_dec(x_508);
x_509 = lean_box(1);
lean_ctor_set(x_16, 0, x_509);
return x_16;
}
else
{
lean_object* x_510; lean_object* x_511; lean_object* x_512; 
x_510 = lean_ctor_get(x_16, 1);
lean_inc(x_510);
lean_dec(x_16);
x_511 = lean_box(1);
x_512 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_512, 0, x_511);
lean_ctor_set(x_512, 1, x_510);
return x_512;
}
}
}
else
{
uint8_t x_513; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_5);
x_513 = !lean_is_exclusive(x_13);
if (x_513 == 0)
{
lean_object* x_514; lean_object* x_515; 
x_514 = lean_ctor_get(x_13, 0);
lean_dec(x_514);
x_515 = lean_box(1);
lean_ctor_set(x_13, 0, x_515);
return x_13;
}
else
{
lean_object* x_516; lean_object* x_517; lean_object* x_518; 
x_516 = lean_ctor_get(x_13, 1);
lean_inc(x_516);
lean_dec(x_13);
x_517 = lean_box(1);
x_518 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_518, 0, x_517);
lean_ctor_set(x_518, 1, x_516);
return x_518;
}
}
}
else
{
uint8_t x_519; 
lean_dec(x_8);
lean_dec(x_5);
x_519 = !lean_is_exclusive(x_10);
if (x_519 == 0)
{
lean_object* x_520; lean_object* x_521; 
x_520 = lean_ctor_get(x_10, 0);
lean_dec(x_520);
x_521 = lean_box(1);
lean_ctor_set(x_10, 0, x_521);
return x_10;
}
else
{
lean_object* x_522; lean_object* x_523; lean_object* x_524; 
x_522 = lean_ctor_get(x_10, 1);
lean_inc(x_522);
lean_dec(x_10);
x_523 = lean_box(1);
x_524 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_524, 0, x_523);
lean_ctor_set(x_524, 1, x_522);
return x_524;
}
}
}
else
{
uint8_t x_525; 
lean_dec(x_5);
x_525 = !lean_is_exclusive(x_7);
if (x_525 == 0)
{
lean_object* x_526; lean_object* x_527; 
x_526 = lean_ctor_get(x_7, 0);
lean_dec(x_526);
x_527 = lean_box(1);
lean_ctor_set(x_7, 0, x_527);
return x_7;
}
else
{
lean_object* x_528; lean_object* x_529; lean_object* x_530; 
x_528 = lean_ctor_get(x_7, 1);
lean_inc(x_528);
lean_dec(x_7);
x_529 = lean_box(1);
x_530 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_530, 0, x_529);
lean_ctor_set(x_530, 1, x_528);
return x_530;
}
}
}
else
{
uint8_t x_531; 
x_531 = !lean_is_exclusive(x_4);
if (x_531 == 0)
{
lean_object* x_532; lean_object* x_533; 
x_532 = lean_ctor_get(x_4, 0);
lean_dec(x_532);
x_533 = lean_box(1);
lean_ctor_set(x_4, 0, x_533);
return x_4;
}
else
{
lean_object* x_534; lean_object* x_535; lean_object* x_536; 
x_534 = lean_ctor_get(x_4, 1);
lean_inc(x_534);
lean_dec(x_4);
x_535 = lean_box(1);
x_536 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_536, 0, x_535);
lean_ctor_set(x_536, 1, x_534);
return x_536;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__scountovf___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_LeanRV64DExecutable_Functions_get__scountovf(x_3, x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvErrors(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSysRegs(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvZihpm(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvSscofpmf(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvErrors(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSysRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvZihpm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_write__mhpmeventh___closed__0 = _init_l_LeanRV64DExecutable_Functions_write__mhpmeventh___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_write__mhpmeventh___closed__0);
l_LeanRV64DExecutable_Functions_get__scountovf___closed__0 = _init_l_LeanRV64DExecutable_Functions_get__scountovf___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_get__scountovf___closed__0);
l_LeanRV64DExecutable_Functions_get__scountovf___closed__1 = _init_l_LeanRV64DExecutable_Functions_get__scountovf___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_get__scountovf___closed__1);
l_LeanRV64DExecutable_Functions_get__scountovf___closed__2 = _init_l_LeanRV64DExecutable_Functions_get__scountovf___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_get__scountovf___closed__2);
l_LeanRV64DExecutable_Functions_get__scountovf___closed__3 = _init_l_LeanRV64DExecutable_Functions_get__scountovf___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_get__scountovf___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
