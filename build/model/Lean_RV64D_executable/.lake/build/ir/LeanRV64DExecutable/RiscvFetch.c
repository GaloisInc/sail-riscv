// Lean compiler output
// Module: LeanRV64DExecutable.RiscvFetch
// Imports: Init LeanRV64DExecutable.Flow LeanRV64DExecutable.Prelude LeanRV64DExecutable.PreludeMemAddrtype LeanRV64DExecutable.RiscvSysRegs LeanRV64DExecutable.RiscvAddrChecks LeanRV64DExecutable.RiscvMem LeanRV64DExecutable.RiscvVmem LeanRV64DExecutable.RiscvFetchRvfi
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
uint8_t l_LeanRV64DExecutable_Functions_not(uint8_t);
lean_object* l_BitVec_append___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_fetch___redArg___closed__5;
lean_object* l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(uint8_t, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Sail_BitVec_access(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_isRVC(lean_object*);
lean_object* l_BitVec_ofNat(lean_object*, lean_object*);
lean_object* l_BitVec_extractLsb___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_mem__read(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_fetch(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_isRVC___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_isRVC___boxed(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_currentlyEnabled(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_fetch___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Sail_BitVec_addInt(lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_translateAddr(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_fetch___boxed(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_fetch___redArg___closed__4;
static lean_object* l_LeanRV64DExecutable_Functions_fetch___redArg___closed__1;
static lean_object* l_LeanRV64DExecutable_Functions_fetch___redArg___closed__2;
static lean_object* l_LeanRV64DExecutable_Functions_fetch___redArg___closed__3;
static lean_object* l_LeanRV64DExecutable_Functions_fetch___redArg___closed__0;
static lean_object* _init_l_LeanRV64DExecutable_Functions_isRVC___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_unsigned_to_nat(2u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_isRVC(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_BitVec_extractLsb___redArg(x_2, x_3, x_1);
x_5 = l_LeanRV64DExecutable_Functions_isRVC___closed__0;
x_6 = lean_nat_dec_eq(x_4, x_5);
lean_dec(x_4);
x_7 = l_LeanRV64DExecutable_Functions_not(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_isRVC___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_LeanRV64DExecutable_Functions_isRVC(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_fetch___redArg___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_fetch___redArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_nat_mul(x_1, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_fetch___redArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_fetch___redArg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_unsigned_to_nat(8u);
x_3 = lean_nat_mul(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_fetch___redArg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_fetch___redArg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_fetch___redArg(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = 123;
x_3 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = 26;
x_9 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_8, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; uint8_t x_438; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 lean_ctor_release(x_12, 1);
 x_15 = x_12;
} else {
 lean_dec_ref(x_12);
 x_15 = lean_box(0);
}
x_433 = lean_unsigned_to_nat(1u);
x_434 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__1;
x_435 = lean_unsigned_to_nat(0u);
x_436 = l_Sail_BitVec_access(x_434, x_6, x_435);
x_437 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__5;
x_438 = lean_nat_dec_eq(x_436, x_437);
lean_dec(x_436);
if (x_438 == 0)
{
lean_dec(x_10);
lean_dec(x_6);
goto block_432;
}
else
{
lean_object* x_439; uint8_t x_440; 
x_439 = l_Sail_BitVec_access(x_434, x_6, x_433);
x_440 = lean_nat_dec_eq(x_439, x_437);
lean_dec(x_439);
if (x_440 == 0)
{
uint8_t x_441; uint8_t x_442; 
x_441 = lean_unbox(x_10);
lean_dec(x_10);
x_442 = l_LeanRV64DExecutable_Functions_not(x_441);
if (x_442 == 0)
{
lean_dec(x_15);
lean_dec(x_13);
x_16 = x_442;
goto block_427;
}
else
{
lean_dec(x_6);
goto block_432;
}
}
else
{
uint8_t x_443; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_10);
x_443 = 0;
x_16 = x_443;
goto block_427;
}
}
block_427:
{
lean_object* x_17; lean_object* x_18; 
x_17 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__0;
x_18 = l_LeanRV64DExecutable_Functions_translateAddr(x_6, x_17, x_14);
lean_dec(x_6);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = !lean_is_exclusive(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_20, 0);
x_24 = lean_ctor_get(x_20, 1);
lean_dec(x_24);
x_25 = lean_unsigned_to_nat(2u);
x_26 = l_LeanRV64DExecutable_Functions_mem__read(x_17, x_23, x_25, x_16, x_16, x_16, x_21);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
lean_free_object(x_20);
x_28 = !lean_is_exclusive(x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = lean_ctor_get(x_26, 1);
x_30 = lean_ctor_get(x_26, 0);
lean_dec(x_30);
x_31 = !lean_is_exclusive(x_27);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_ctor_get(x_27, 0);
x_33 = l_LeanRV64DExecutable_Functions_isRVC(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
lean_free_object(x_27);
lean_free_object(x_26);
x_34 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_29);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__1;
x_40 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__2;
x_41 = l_Sail_BitVec_addInt(x_39, x_35, x_40);
lean_dec(x_35);
x_42 = l_LeanRV64DExecutable_Functions_translateAddr(x_41, x_17, x_38);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_dec(x_42);
x_46 = !lean_is_exclusive(x_44);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_44, 0);
x_48 = lean_ctor_get(x_44, 1);
lean_dec(x_48);
x_49 = l_LeanRV64DExecutable_Functions_mem__read(x_17, x_47, x_25, x_16, x_16, x_16, x_45);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
if (lean_obj_tag(x_50) == 0)
{
uint8_t x_51; 
lean_free_object(x_44);
lean_dec(x_41);
x_51 = !lean_is_exclusive(x_49);
if (x_51 == 0)
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_ctor_get(x_49, 0);
lean_dec(x_52);
x_53 = !lean_is_exclusive(x_50);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_50, 0);
x_55 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__3;
x_56 = l_BitVec_append___redArg(x_55, x_54, x_32);
lean_dec(x_32);
lean_dec(x_54);
lean_ctor_set_tag(x_50, 1);
lean_ctor_set(x_50, 0, x_56);
return x_49;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_50, 0);
lean_inc(x_57);
lean_dec(x_50);
x_58 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__3;
x_59 = l_BitVec_append___redArg(x_58, x_57, x_32);
lean_dec(x_32);
lean_dec(x_57);
x_60 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_49, 0, x_60);
return x_49;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_61 = lean_ctor_get(x_49, 1);
lean_inc(x_61);
lean_dec(x_49);
x_62 = lean_ctor_get(x_50, 0);
lean_inc(x_62);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 x_63 = x_50;
} else {
 lean_dec_ref(x_50);
 x_63 = lean_box(0);
}
x_64 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__3;
x_65 = l_BitVec_append___redArg(x_64, x_62, x_32);
lean_dec(x_32);
lean_dec(x_62);
if (lean_is_scalar(x_63)) {
 x_66 = lean_alloc_ctor(1, 1, 0);
} else {
 x_66 = x_63;
 lean_ctor_set_tag(x_66, 1);
}
lean_ctor_set(x_66, 0, x_65);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_61);
return x_67;
}
}
else
{
uint8_t x_68; 
lean_dec(x_32);
x_68 = !lean_is_exclusive(x_49);
if (x_68 == 0)
{
lean_object* x_69; uint8_t x_70; 
x_69 = lean_ctor_get(x_49, 0);
lean_dec(x_69);
x_70 = !lean_is_exclusive(x_50);
if (x_70 == 0)
{
lean_object* x_71; 
x_71 = lean_ctor_get(x_50, 0);
lean_ctor_set(x_44, 1, x_41);
lean_ctor_set(x_44, 0, x_71);
lean_ctor_set_tag(x_50, 3);
lean_ctor_set(x_50, 0, x_44);
return x_49;
}
else
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_50, 0);
lean_inc(x_72);
lean_dec(x_50);
lean_ctor_set(x_44, 1, x_41);
lean_ctor_set(x_44, 0, x_72);
x_73 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_73, 0, x_44);
lean_ctor_set(x_49, 0, x_73);
return x_49;
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_74 = lean_ctor_get(x_49, 1);
lean_inc(x_74);
lean_dec(x_49);
x_75 = lean_ctor_get(x_50, 0);
lean_inc(x_75);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 x_76 = x_50;
} else {
 lean_dec_ref(x_50);
 x_76 = lean_box(0);
}
lean_ctor_set(x_44, 1, x_41);
lean_ctor_set(x_44, 0, x_75);
if (lean_is_scalar(x_76)) {
 x_77 = lean_alloc_ctor(3, 1, 0);
} else {
 x_77 = x_76;
 lean_ctor_set_tag(x_77, 3);
}
lean_ctor_set(x_77, 0, x_44);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_74);
return x_78;
}
}
}
else
{
uint8_t x_79; 
lean_free_object(x_44);
lean_dec(x_41);
lean_dec(x_32);
x_79 = !lean_is_exclusive(x_49);
if (x_79 == 0)
{
return x_49;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_49, 0);
x_81 = lean_ctor_get(x_49, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_49);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
else
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_44, 0);
lean_inc(x_83);
lean_dec(x_44);
x_84 = l_LeanRV64DExecutable_Functions_mem__read(x_17, x_83, x_25, x_16, x_16, x_16, x_45);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; 
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_41);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_87 = x_84;
} else {
 lean_dec_ref(x_84);
 x_87 = lean_box(0);
}
x_88 = lean_ctor_get(x_85, 0);
lean_inc(x_88);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 x_89 = x_85;
} else {
 lean_dec_ref(x_85);
 x_89 = lean_box(0);
}
x_90 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__3;
x_91 = l_BitVec_append___redArg(x_90, x_88, x_32);
lean_dec(x_32);
lean_dec(x_88);
if (lean_is_scalar(x_89)) {
 x_92 = lean_alloc_ctor(1, 1, 0);
} else {
 x_92 = x_89;
 lean_ctor_set_tag(x_92, 1);
}
lean_ctor_set(x_92, 0, x_91);
if (lean_is_scalar(x_87)) {
 x_93 = lean_alloc_ctor(0, 2, 0);
} else {
 x_93 = x_87;
}
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_86);
return x_93;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_32);
x_94 = lean_ctor_get(x_84, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_95 = x_84;
} else {
 lean_dec_ref(x_84);
 x_95 = lean_box(0);
}
x_96 = lean_ctor_get(x_85, 0);
lean_inc(x_96);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 x_97 = x_85;
} else {
 lean_dec_ref(x_85);
 x_97 = lean_box(0);
}
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_41);
if (lean_is_scalar(x_97)) {
 x_99 = lean_alloc_ctor(3, 1, 0);
} else {
 x_99 = x_97;
 lean_ctor_set_tag(x_99, 3);
}
lean_ctor_set(x_99, 0, x_98);
if (lean_is_scalar(x_95)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_95;
}
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_94);
return x_100;
}
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
lean_dec(x_41);
lean_dec(x_32);
x_101 = lean_ctor_get(x_84, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_84, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_103 = x_84;
} else {
 lean_dec_ref(x_84);
 x_103 = lean_box(0);
}
if (lean_is_scalar(x_103)) {
 x_104 = lean_alloc_ctor(1, 2, 0);
} else {
 x_104 = x_103;
}
lean_ctor_set(x_104, 0, x_101);
lean_ctor_set(x_104, 1, x_102);
return x_104;
}
}
}
else
{
uint8_t x_105; 
lean_dec(x_32);
x_105 = !lean_is_exclusive(x_43);
if (x_105 == 0)
{
uint8_t x_106; 
x_106 = !lean_is_exclusive(x_42);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; uint8_t x_109; 
x_107 = lean_ctor_get(x_43, 0);
x_108 = lean_ctor_get(x_42, 0);
lean_dec(x_108);
x_109 = !lean_is_exclusive(x_107);
if (x_109 == 0)
{
lean_object* x_110; 
x_110 = lean_ctor_get(x_107, 1);
lean_dec(x_110);
lean_ctor_set(x_107, 1, x_41);
lean_ctor_set_tag(x_43, 3);
return x_42;
}
else
{
lean_object* x_111; lean_object* x_112; 
x_111 = lean_ctor_get(x_107, 0);
lean_inc(x_111);
lean_dec(x_107);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_41);
lean_ctor_set_tag(x_43, 3);
lean_ctor_set(x_43, 0, x_112);
return x_42;
}
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_113 = lean_ctor_get(x_43, 0);
x_114 = lean_ctor_get(x_42, 1);
lean_inc(x_114);
lean_dec(x_42);
x_115 = lean_ctor_get(x_113, 0);
lean_inc(x_115);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 x_116 = x_113;
} else {
 lean_dec_ref(x_113);
 x_116 = lean_box(0);
}
if (lean_is_scalar(x_116)) {
 x_117 = lean_alloc_ctor(0, 2, 0);
} else {
 x_117 = x_116;
}
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_41);
lean_ctor_set_tag(x_43, 3);
lean_ctor_set(x_43, 0, x_117);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_43);
lean_ctor_set(x_118, 1, x_114);
return x_118;
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_119 = lean_ctor_get(x_43, 0);
lean_inc(x_119);
lean_dec(x_43);
x_120 = lean_ctor_get(x_42, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_121 = x_42;
} else {
 lean_dec_ref(x_42);
 x_121 = lean_box(0);
}
x_122 = lean_ctor_get(x_119, 0);
lean_inc(x_122);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_123 = x_119;
} else {
 lean_dec_ref(x_119);
 x_123 = lean_box(0);
}
if (lean_is_scalar(x_123)) {
 x_124 = lean_alloc_ctor(0, 2, 0);
} else {
 x_124 = x_123;
}
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_41);
x_125 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_125, 0, x_124);
if (lean_is_scalar(x_121)) {
 x_126 = lean_alloc_ctor(0, 2, 0);
} else {
 x_126 = x_121;
}
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_120);
return x_126;
}
}
}
else
{
uint8_t x_127; 
lean_dec(x_41);
lean_dec(x_32);
x_127 = !lean_is_exclusive(x_42);
if (x_127 == 0)
{
return x_42;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_128 = lean_ctor_get(x_42, 0);
x_129 = lean_ctor_get(x_42, 1);
lean_inc(x_129);
lean_inc(x_128);
lean_dec(x_42);
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_128);
lean_ctor_set(x_130, 1, x_129);
return x_130;
}
}
}
else
{
uint8_t x_131; 
lean_dec(x_35);
lean_dec(x_32);
x_131 = !lean_is_exclusive(x_37);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; 
x_132 = lean_ctor_get(x_37, 0);
lean_dec(x_132);
x_133 = lean_box(1);
lean_ctor_set(x_37, 0, x_133);
return x_37;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_134 = lean_ctor_get(x_37, 1);
lean_inc(x_134);
lean_dec(x_37);
x_135 = lean_box(1);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_134);
return x_136;
}
}
}
else
{
uint8_t x_137; 
lean_dec(x_32);
x_137 = !lean_is_exclusive(x_34);
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; 
x_138 = lean_ctor_get(x_34, 0);
lean_dec(x_138);
x_139 = lean_box(1);
lean_ctor_set(x_34, 0, x_139);
return x_34;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_140 = lean_ctor_get(x_34, 1);
lean_inc(x_140);
lean_dec(x_34);
x_141 = lean_box(1);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_140);
return x_142;
}
}
}
else
{
lean_ctor_set_tag(x_27, 2);
return x_26;
}
}
else
{
lean_object* x_143; uint8_t x_144; 
x_143 = lean_ctor_get(x_27, 0);
lean_inc(x_143);
lean_dec(x_27);
x_144 = l_LeanRV64DExecutable_Functions_isRVC(x_143);
if (x_144 == 0)
{
lean_object* x_145; 
lean_free_object(x_26);
x_145 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_29);
if (lean_obj_tag(x_145) == 0)
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
lean_dec(x_145);
x_148 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_147);
if (lean_obj_tag(x_148) == 0)
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_149 = lean_ctor_get(x_148, 1);
lean_inc(x_149);
lean_dec(x_148);
x_150 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__1;
x_151 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__2;
x_152 = l_Sail_BitVec_addInt(x_150, x_146, x_151);
lean_dec(x_146);
x_153 = l_LeanRV64DExecutable_Functions_translateAddr(x_152, x_17, x_149);
if (lean_obj_tag(x_153) == 0)
{
lean_object* x_154; 
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
if (lean_obj_tag(x_154) == 0)
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
lean_dec(x_154);
x_156 = lean_ctor_get(x_153, 1);
lean_inc(x_156);
lean_dec(x_153);
x_157 = lean_ctor_get(x_155, 0);
lean_inc(x_157);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 lean_ctor_release(x_155, 1);
 x_158 = x_155;
} else {
 lean_dec_ref(x_155);
 x_158 = lean_box(0);
}
x_159 = l_LeanRV64DExecutable_Functions_mem__read(x_17, x_157, x_25, x_16, x_16, x_16, x_156);
if (lean_obj_tag(x_159) == 0)
{
lean_object* x_160; 
x_160 = lean_ctor_get(x_159, 0);
lean_inc(x_160);
if (lean_obj_tag(x_160) == 0)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
lean_dec(x_158);
lean_dec(x_152);
x_161 = lean_ctor_get(x_159, 1);
lean_inc(x_161);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 x_162 = x_159;
} else {
 lean_dec_ref(x_159);
 x_162 = lean_box(0);
}
x_163 = lean_ctor_get(x_160, 0);
lean_inc(x_163);
if (lean_is_exclusive(x_160)) {
 lean_ctor_release(x_160, 0);
 x_164 = x_160;
} else {
 lean_dec_ref(x_160);
 x_164 = lean_box(0);
}
x_165 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__3;
x_166 = l_BitVec_append___redArg(x_165, x_163, x_143);
lean_dec(x_143);
lean_dec(x_163);
if (lean_is_scalar(x_164)) {
 x_167 = lean_alloc_ctor(1, 1, 0);
} else {
 x_167 = x_164;
 lean_ctor_set_tag(x_167, 1);
}
lean_ctor_set(x_167, 0, x_166);
if (lean_is_scalar(x_162)) {
 x_168 = lean_alloc_ctor(0, 2, 0);
} else {
 x_168 = x_162;
}
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_161);
return x_168;
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_dec(x_143);
x_169 = lean_ctor_get(x_159, 1);
lean_inc(x_169);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 x_170 = x_159;
} else {
 lean_dec_ref(x_159);
 x_170 = lean_box(0);
}
x_171 = lean_ctor_get(x_160, 0);
lean_inc(x_171);
if (lean_is_exclusive(x_160)) {
 lean_ctor_release(x_160, 0);
 x_172 = x_160;
} else {
 lean_dec_ref(x_160);
 x_172 = lean_box(0);
}
if (lean_is_scalar(x_158)) {
 x_173 = lean_alloc_ctor(0, 2, 0);
} else {
 x_173 = x_158;
}
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_152);
if (lean_is_scalar(x_172)) {
 x_174 = lean_alloc_ctor(3, 1, 0);
} else {
 x_174 = x_172;
 lean_ctor_set_tag(x_174, 3);
}
lean_ctor_set(x_174, 0, x_173);
if (lean_is_scalar(x_170)) {
 x_175 = lean_alloc_ctor(0, 2, 0);
} else {
 x_175 = x_170;
}
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_169);
return x_175;
}
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
lean_dec(x_158);
lean_dec(x_152);
lean_dec(x_143);
x_176 = lean_ctor_get(x_159, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_159, 1);
lean_inc(x_177);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 x_178 = x_159;
} else {
 lean_dec_ref(x_159);
 x_178 = lean_box(0);
}
if (lean_is_scalar(x_178)) {
 x_179 = lean_alloc_ctor(1, 2, 0);
} else {
 x_179 = x_178;
}
lean_ctor_set(x_179, 0, x_176);
lean_ctor_set(x_179, 1, x_177);
return x_179;
}
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
lean_dec(x_143);
x_180 = lean_ctor_get(x_154, 0);
lean_inc(x_180);
if (lean_is_exclusive(x_154)) {
 lean_ctor_release(x_154, 0);
 x_181 = x_154;
} else {
 lean_dec_ref(x_154);
 x_181 = lean_box(0);
}
x_182 = lean_ctor_get(x_153, 1);
lean_inc(x_182);
if (lean_is_exclusive(x_153)) {
 lean_ctor_release(x_153, 0);
 lean_ctor_release(x_153, 1);
 x_183 = x_153;
} else {
 lean_dec_ref(x_153);
 x_183 = lean_box(0);
}
x_184 = lean_ctor_get(x_180, 0);
lean_inc(x_184);
if (lean_is_exclusive(x_180)) {
 lean_ctor_release(x_180, 0);
 lean_ctor_release(x_180, 1);
 x_185 = x_180;
} else {
 lean_dec_ref(x_180);
 x_185 = lean_box(0);
}
if (lean_is_scalar(x_185)) {
 x_186 = lean_alloc_ctor(0, 2, 0);
} else {
 x_186 = x_185;
}
lean_ctor_set(x_186, 0, x_184);
lean_ctor_set(x_186, 1, x_152);
if (lean_is_scalar(x_181)) {
 x_187 = lean_alloc_ctor(3, 1, 0);
} else {
 x_187 = x_181;
 lean_ctor_set_tag(x_187, 3);
}
lean_ctor_set(x_187, 0, x_186);
if (lean_is_scalar(x_183)) {
 x_188 = lean_alloc_ctor(0, 2, 0);
} else {
 x_188 = x_183;
}
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_182);
return x_188;
}
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
lean_dec(x_152);
lean_dec(x_143);
x_189 = lean_ctor_get(x_153, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_153, 1);
lean_inc(x_190);
if (lean_is_exclusive(x_153)) {
 lean_ctor_release(x_153, 0);
 lean_ctor_release(x_153, 1);
 x_191 = x_153;
} else {
 lean_dec_ref(x_153);
 x_191 = lean_box(0);
}
if (lean_is_scalar(x_191)) {
 x_192 = lean_alloc_ctor(1, 2, 0);
} else {
 x_192 = x_191;
}
lean_ctor_set(x_192, 0, x_189);
lean_ctor_set(x_192, 1, x_190);
return x_192;
}
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
lean_dec(x_146);
lean_dec(x_143);
x_193 = lean_ctor_get(x_148, 1);
lean_inc(x_193);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_194 = x_148;
} else {
 lean_dec_ref(x_148);
 x_194 = lean_box(0);
}
x_195 = lean_box(1);
if (lean_is_scalar(x_194)) {
 x_196 = lean_alloc_ctor(1, 2, 0);
} else {
 x_196 = x_194;
}
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_193);
return x_196;
}
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
lean_dec(x_143);
x_197 = lean_ctor_get(x_145, 1);
lean_inc(x_197);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_198 = x_145;
} else {
 lean_dec_ref(x_145);
 x_198 = lean_box(0);
}
x_199 = lean_box(1);
if (lean_is_scalar(x_198)) {
 x_200 = lean_alloc_ctor(1, 2, 0);
} else {
 x_200 = x_198;
}
lean_ctor_set(x_200, 0, x_199);
lean_ctor_set(x_200, 1, x_197);
return x_200;
}
}
else
{
lean_object* x_201; 
x_201 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_201, 0, x_143);
lean_ctor_set(x_26, 0, x_201);
return x_26;
}
}
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; uint8_t x_205; 
x_202 = lean_ctor_get(x_26, 1);
lean_inc(x_202);
lean_dec(x_26);
x_203 = lean_ctor_get(x_27, 0);
lean_inc(x_203);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 x_204 = x_27;
} else {
 lean_dec_ref(x_27);
 x_204 = lean_box(0);
}
x_205 = l_LeanRV64DExecutable_Functions_isRVC(x_203);
if (x_205 == 0)
{
lean_object* x_206; 
lean_dec(x_204);
x_206 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_202);
if (lean_obj_tag(x_206) == 0)
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; 
x_207 = lean_ctor_get(x_206, 0);
lean_inc(x_207);
x_208 = lean_ctor_get(x_206, 1);
lean_inc(x_208);
lean_dec(x_206);
x_209 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_208);
if (lean_obj_tag(x_209) == 0)
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_210 = lean_ctor_get(x_209, 1);
lean_inc(x_210);
lean_dec(x_209);
x_211 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__1;
x_212 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__2;
x_213 = l_Sail_BitVec_addInt(x_211, x_207, x_212);
lean_dec(x_207);
x_214 = l_LeanRV64DExecutable_Functions_translateAddr(x_213, x_17, x_210);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_215; 
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
if (lean_obj_tag(x_215) == 0)
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_216 = lean_ctor_get(x_215, 0);
lean_inc(x_216);
lean_dec(x_215);
x_217 = lean_ctor_get(x_214, 1);
lean_inc(x_217);
lean_dec(x_214);
x_218 = lean_ctor_get(x_216, 0);
lean_inc(x_218);
if (lean_is_exclusive(x_216)) {
 lean_ctor_release(x_216, 0);
 lean_ctor_release(x_216, 1);
 x_219 = x_216;
} else {
 lean_dec_ref(x_216);
 x_219 = lean_box(0);
}
x_220 = l_LeanRV64DExecutable_Functions_mem__read(x_17, x_218, x_25, x_16, x_16, x_16, x_217);
if (lean_obj_tag(x_220) == 0)
{
lean_object* x_221; 
x_221 = lean_ctor_get(x_220, 0);
lean_inc(x_221);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; 
lean_dec(x_219);
lean_dec(x_213);
x_222 = lean_ctor_get(x_220, 1);
lean_inc(x_222);
if (lean_is_exclusive(x_220)) {
 lean_ctor_release(x_220, 0);
 lean_ctor_release(x_220, 1);
 x_223 = x_220;
} else {
 lean_dec_ref(x_220);
 x_223 = lean_box(0);
}
x_224 = lean_ctor_get(x_221, 0);
lean_inc(x_224);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 x_225 = x_221;
} else {
 lean_dec_ref(x_221);
 x_225 = lean_box(0);
}
x_226 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__3;
x_227 = l_BitVec_append___redArg(x_226, x_224, x_203);
lean_dec(x_203);
lean_dec(x_224);
if (lean_is_scalar(x_225)) {
 x_228 = lean_alloc_ctor(1, 1, 0);
} else {
 x_228 = x_225;
 lean_ctor_set_tag(x_228, 1);
}
lean_ctor_set(x_228, 0, x_227);
if (lean_is_scalar(x_223)) {
 x_229 = lean_alloc_ctor(0, 2, 0);
} else {
 x_229 = x_223;
}
lean_ctor_set(x_229, 0, x_228);
lean_ctor_set(x_229, 1, x_222);
return x_229;
}
else
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; 
lean_dec(x_203);
x_230 = lean_ctor_get(x_220, 1);
lean_inc(x_230);
if (lean_is_exclusive(x_220)) {
 lean_ctor_release(x_220, 0);
 lean_ctor_release(x_220, 1);
 x_231 = x_220;
} else {
 lean_dec_ref(x_220);
 x_231 = lean_box(0);
}
x_232 = lean_ctor_get(x_221, 0);
lean_inc(x_232);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 x_233 = x_221;
} else {
 lean_dec_ref(x_221);
 x_233 = lean_box(0);
}
if (lean_is_scalar(x_219)) {
 x_234 = lean_alloc_ctor(0, 2, 0);
} else {
 x_234 = x_219;
}
lean_ctor_set(x_234, 0, x_232);
lean_ctor_set(x_234, 1, x_213);
if (lean_is_scalar(x_233)) {
 x_235 = lean_alloc_ctor(3, 1, 0);
} else {
 x_235 = x_233;
 lean_ctor_set_tag(x_235, 3);
}
lean_ctor_set(x_235, 0, x_234);
if (lean_is_scalar(x_231)) {
 x_236 = lean_alloc_ctor(0, 2, 0);
} else {
 x_236 = x_231;
}
lean_ctor_set(x_236, 0, x_235);
lean_ctor_set(x_236, 1, x_230);
return x_236;
}
}
else
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; 
lean_dec(x_219);
lean_dec(x_213);
lean_dec(x_203);
x_237 = lean_ctor_get(x_220, 0);
lean_inc(x_237);
x_238 = lean_ctor_get(x_220, 1);
lean_inc(x_238);
if (lean_is_exclusive(x_220)) {
 lean_ctor_release(x_220, 0);
 lean_ctor_release(x_220, 1);
 x_239 = x_220;
} else {
 lean_dec_ref(x_220);
 x_239 = lean_box(0);
}
if (lean_is_scalar(x_239)) {
 x_240 = lean_alloc_ctor(1, 2, 0);
} else {
 x_240 = x_239;
}
lean_ctor_set(x_240, 0, x_237);
lean_ctor_set(x_240, 1, x_238);
return x_240;
}
}
else
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
lean_dec(x_203);
x_241 = lean_ctor_get(x_215, 0);
lean_inc(x_241);
if (lean_is_exclusive(x_215)) {
 lean_ctor_release(x_215, 0);
 x_242 = x_215;
} else {
 lean_dec_ref(x_215);
 x_242 = lean_box(0);
}
x_243 = lean_ctor_get(x_214, 1);
lean_inc(x_243);
if (lean_is_exclusive(x_214)) {
 lean_ctor_release(x_214, 0);
 lean_ctor_release(x_214, 1);
 x_244 = x_214;
} else {
 lean_dec_ref(x_214);
 x_244 = lean_box(0);
}
x_245 = lean_ctor_get(x_241, 0);
lean_inc(x_245);
if (lean_is_exclusive(x_241)) {
 lean_ctor_release(x_241, 0);
 lean_ctor_release(x_241, 1);
 x_246 = x_241;
} else {
 lean_dec_ref(x_241);
 x_246 = lean_box(0);
}
if (lean_is_scalar(x_246)) {
 x_247 = lean_alloc_ctor(0, 2, 0);
} else {
 x_247 = x_246;
}
lean_ctor_set(x_247, 0, x_245);
lean_ctor_set(x_247, 1, x_213);
if (lean_is_scalar(x_242)) {
 x_248 = lean_alloc_ctor(3, 1, 0);
} else {
 x_248 = x_242;
 lean_ctor_set_tag(x_248, 3);
}
lean_ctor_set(x_248, 0, x_247);
if (lean_is_scalar(x_244)) {
 x_249 = lean_alloc_ctor(0, 2, 0);
} else {
 x_249 = x_244;
}
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_243);
return x_249;
}
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
lean_dec(x_213);
lean_dec(x_203);
x_250 = lean_ctor_get(x_214, 0);
lean_inc(x_250);
x_251 = lean_ctor_get(x_214, 1);
lean_inc(x_251);
if (lean_is_exclusive(x_214)) {
 lean_ctor_release(x_214, 0);
 lean_ctor_release(x_214, 1);
 x_252 = x_214;
} else {
 lean_dec_ref(x_214);
 x_252 = lean_box(0);
}
if (lean_is_scalar(x_252)) {
 x_253 = lean_alloc_ctor(1, 2, 0);
} else {
 x_253 = x_252;
}
lean_ctor_set(x_253, 0, x_250);
lean_ctor_set(x_253, 1, x_251);
return x_253;
}
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; 
lean_dec(x_207);
lean_dec(x_203);
x_254 = lean_ctor_get(x_209, 1);
lean_inc(x_254);
if (lean_is_exclusive(x_209)) {
 lean_ctor_release(x_209, 0);
 lean_ctor_release(x_209, 1);
 x_255 = x_209;
} else {
 lean_dec_ref(x_209);
 x_255 = lean_box(0);
}
x_256 = lean_box(1);
if (lean_is_scalar(x_255)) {
 x_257 = lean_alloc_ctor(1, 2, 0);
} else {
 x_257 = x_255;
}
lean_ctor_set(x_257, 0, x_256);
lean_ctor_set(x_257, 1, x_254);
return x_257;
}
}
else
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
lean_dec(x_203);
x_258 = lean_ctor_get(x_206, 1);
lean_inc(x_258);
if (lean_is_exclusive(x_206)) {
 lean_ctor_release(x_206, 0);
 lean_ctor_release(x_206, 1);
 x_259 = x_206;
} else {
 lean_dec_ref(x_206);
 x_259 = lean_box(0);
}
x_260 = lean_box(1);
if (lean_is_scalar(x_259)) {
 x_261 = lean_alloc_ctor(1, 2, 0);
} else {
 x_261 = x_259;
}
lean_ctor_set(x_261, 0, x_260);
lean_ctor_set(x_261, 1, x_258);
return x_261;
}
}
else
{
lean_object* x_262; lean_object* x_263; 
if (lean_is_scalar(x_204)) {
 x_262 = lean_alloc_ctor(2, 1, 0);
} else {
 x_262 = x_204;
 lean_ctor_set_tag(x_262, 2);
}
lean_ctor_set(x_262, 0, x_203);
x_263 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_263, 0, x_262);
lean_ctor_set(x_263, 1, x_202);
return x_263;
}
}
}
else
{
lean_object* x_264; uint8_t x_265; 
x_264 = lean_ctor_get(x_26, 1);
lean_inc(x_264);
lean_dec(x_26);
x_265 = !lean_is_exclusive(x_27);
if (x_265 == 0)
{
lean_object* x_266; lean_object* x_267; 
x_266 = lean_ctor_get(x_27, 0);
x_267 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_264);
if (lean_obj_tag(x_267) == 0)
{
uint8_t x_268; 
x_268 = !lean_is_exclusive(x_267);
if (x_268 == 0)
{
lean_object* x_269; 
x_269 = lean_ctor_get(x_267, 0);
lean_ctor_set(x_20, 1, x_269);
lean_ctor_set(x_20, 0, x_266);
lean_ctor_set_tag(x_27, 3);
lean_ctor_set(x_27, 0, x_20);
lean_ctor_set(x_267, 0, x_27);
return x_267;
}
else
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; 
x_270 = lean_ctor_get(x_267, 0);
x_271 = lean_ctor_get(x_267, 1);
lean_inc(x_271);
lean_inc(x_270);
lean_dec(x_267);
lean_ctor_set(x_20, 1, x_270);
lean_ctor_set(x_20, 0, x_266);
lean_ctor_set_tag(x_27, 3);
lean_ctor_set(x_27, 0, x_20);
x_272 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_272, 0, x_27);
lean_ctor_set(x_272, 1, x_271);
return x_272;
}
}
else
{
uint8_t x_273; 
lean_free_object(x_27);
lean_dec(x_266);
lean_free_object(x_20);
x_273 = !lean_is_exclusive(x_267);
if (x_273 == 0)
{
lean_object* x_274; lean_object* x_275; 
x_274 = lean_ctor_get(x_267, 0);
lean_dec(x_274);
x_275 = lean_box(1);
lean_ctor_set(x_267, 0, x_275);
return x_267;
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; 
x_276 = lean_ctor_get(x_267, 1);
lean_inc(x_276);
lean_dec(x_267);
x_277 = lean_box(1);
x_278 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_278, 0, x_277);
lean_ctor_set(x_278, 1, x_276);
return x_278;
}
}
}
else
{
lean_object* x_279; lean_object* x_280; 
x_279 = lean_ctor_get(x_27, 0);
lean_inc(x_279);
lean_dec(x_27);
x_280 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_264);
if (lean_obj_tag(x_280) == 0)
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; 
x_281 = lean_ctor_get(x_280, 0);
lean_inc(x_281);
x_282 = lean_ctor_get(x_280, 1);
lean_inc(x_282);
if (lean_is_exclusive(x_280)) {
 lean_ctor_release(x_280, 0);
 lean_ctor_release(x_280, 1);
 x_283 = x_280;
} else {
 lean_dec_ref(x_280);
 x_283 = lean_box(0);
}
lean_ctor_set(x_20, 1, x_281);
lean_ctor_set(x_20, 0, x_279);
x_284 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_284, 0, x_20);
if (lean_is_scalar(x_283)) {
 x_285 = lean_alloc_ctor(0, 2, 0);
} else {
 x_285 = x_283;
}
lean_ctor_set(x_285, 0, x_284);
lean_ctor_set(x_285, 1, x_282);
return x_285;
}
else
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; 
lean_dec(x_279);
lean_free_object(x_20);
x_286 = lean_ctor_get(x_280, 1);
lean_inc(x_286);
if (lean_is_exclusive(x_280)) {
 lean_ctor_release(x_280, 0);
 lean_ctor_release(x_280, 1);
 x_287 = x_280;
} else {
 lean_dec_ref(x_280);
 x_287 = lean_box(0);
}
x_288 = lean_box(1);
if (lean_is_scalar(x_287)) {
 x_289 = lean_alloc_ctor(1, 2, 0);
} else {
 x_289 = x_287;
}
lean_ctor_set(x_289, 0, x_288);
lean_ctor_set(x_289, 1, x_286);
return x_289;
}
}
}
}
else
{
uint8_t x_290; 
lean_free_object(x_20);
x_290 = !lean_is_exclusive(x_26);
if (x_290 == 0)
{
return x_26;
}
else
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; 
x_291 = lean_ctor_get(x_26, 0);
x_292 = lean_ctor_get(x_26, 1);
lean_inc(x_292);
lean_inc(x_291);
lean_dec(x_26);
x_293 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_293, 0, x_291);
lean_ctor_set(x_293, 1, x_292);
return x_293;
}
}
}
else
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; 
x_294 = lean_ctor_get(x_20, 0);
lean_inc(x_294);
lean_dec(x_20);
x_295 = lean_unsigned_to_nat(2u);
x_296 = l_LeanRV64DExecutable_Functions_mem__read(x_17, x_294, x_295, x_16, x_16, x_16, x_21);
if (lean_obj_tag(x_296) == 0)
{
lean_object* x_297; 
x_297 = lean_ctor_get(x_296, 0);
lean_inc(x_297);
if (lean_obj_tag(x_297) == 0)
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; uint8_t x_302; 
x_298 = lean_ctor_get(x_296, 1);
lean_inc(x_298);
if (lean_is_exclusive(x_296)) {
 lean_ctor_release(x_296, 0);
 lean_ctor_release(x_296, 1);
 x_299 = x_296;
} else {
 lean_dec_ref(x_296);
 x_299 = lean_box(0);
}
x_300 = lean_ctor_get(x_297, 0);
lean_inc(x_300);
if (lean_is_exclusive(x_297)) {
 lean_ctor_release(x_297, 0);
 x_301 = x_297;
} else {
 lean_dec_ref(x_297);
 x_301 = lean_box(0);
}
x_302 = l_LeanRV64DExecutable_Functions_isRVC(x_300);
if (x_302 == 0)
{
lean_object* x_303; 
lean_dec(x_301);
lean_dec(x_299);
x_303 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_298);
if (lean_obj_tag(x_303) == 0)
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_304 = lean_ctor_get(x_303, 0);
lean_inc(x_304);
x_305 = lean_ctor_get(x_303, 1);
lean_inc(x_305);
lean_dec(x_303);
x_306 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_305);
if (lean_obj_tag(x_306) == 0)
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; 
x_307 = lean_ctor_get(x_306, 1);
lean_inc(x_307);
lean_dec(x_306);
x_308 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__1;
x_309 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__2;
x_310 = l_Sail_BitVec_addInt(x_308, x_304, x_309);
lean_dec(x_304);
x_311 = l_LeanRV64DExecutable_Functions_translateAddr(x_310, x_17, x_307);
if (lean_obj_tag(x_311) == 0)
{
lean_object* x_312; 
x_312 = lean_ctor_get(x_311, 0);
lean_inc(x_312);
if (lean_obj_tag(x_312) == 0)
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; 
x_313 = lean_ctor_get(x_312, 0);
lean_inc(x_313);
lean_dec(x_312);
x_314 = lean_ctor_get(x_311, 1);
lean_inc(x_314);
lean_dec(x_311);
x_315 = lean_ctor_get(x_313, 0);
lean_inc(x_315);
if (lean_is_exclusive(x_313)) {
 lean_ctor_release(x_313, 0);
 lean_ctor_release(x_313, 1);
 x_316 = x_313;
} else {
 lean_dec_ref(x_313);
 x_316 = lean_box(0);
}
x_317 = l_LeanRV64DExecutable_Functions_mem__read(x_17, x_315, x_295, x_16, x_16, x_16, x_314);
if (lean_obj_tag(x_317) == 0)
{
lean_object* x_318; 
x_318 = lean_ctor_get(x_317, 0);
lean_inc(x_318);
if (lean_obj_tag(x_318) == 0)
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; 
lean_dec(x_316);
lean_dec(x_310);
x_319 = lean_ctor_get(x_317, 1);
lean_inc(x_319);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 x_320 = x_317;
} else {
 lean_dec_ref(x_317);
 x_320 = lean_box(0);
}
x_321 = lean_ctor_get(x_318, 0);
lean_inc(x_321);
if (lean_is_exclusive(x_318)) {
 lean_ctor_release(x_318, 0);
 x_322 = x_318;
} else {
 lean_dec_ref(x_318);
 x_322 = lean_box(0);
}
x_323 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__3;
x_324 = l_BitVec_append___redArg(x_323, x_321, x_300);
lean_dec(x_300);
lean_dec(x_321);
if (lean_is_scalar(x_322)) {
 x_325 = lean_alloc_ctor(1, 1, 0);
} else {
 x_325 = x_322;
 lean_ctor_set_tag(x_325, 1);
}
lean_ctor_set(x_325, 0, x_324);
if (lean_is_scalar(x_320)) {
 x_326 = lean_alloc_ctor(0, 2, 0);
} else {
 x_326 = x_320;
}
lean_ctor_set(x_326, 0, x_325);
lean_ctor_set(x_326, 1, x_319);
return x_326;
}
else
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; 
lean_dec(x_300);
x_327 = lean_ctor_get(x_317, 1);
lean_inc(x_327);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 x_328 = x_317;
} else {
 lean_dec_ref(x_317);
 x_328 = lean_box(0);
}
x_329 = lean_ctor_get(x_318, 0);
lean_inc(x_329);
if (lean_is_exclusive(x_318)) {
 lean_ctor_release(x_318, 0);
 x_330 = x_318;
} else {
 lean_dec_ref(x_318);
 x_330 = lean_box(0);
}
if (lean_is_scalar(x_316)) {
 x_331 = lean_alloc_ctor(0, 2, 0);
} else {
 x_331 = x_316;
}
lean_ctor_set(x_331, 0, x_329);
lean_ctor_set(x_331, 1, x_310);
if (lean_is_scalar(x_330)) {
 x_332 = lean_alloc_ctor(3, 1, 0);
} else {
 x_332 = x_330;
 lean_ctor_set_tag(x_332, 3);
}
lean_ctor_set(x_332, 0, x_331);
if (lean_is_scalar(x_328)) {
 x_333 = lean_alloc_ctor(0, 2, 0);
} else {
 x_333 = x_328;
}
lean_ctor_set(x_333, 0, x_332);
lean_ctor_set(x_333, 1, x_327);
return x_333;
}
}
else
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; 
lean_dec(x_316);
lean_dec(x_310);
lean_dec(x_300);
x_334 = lean_ctor_get(x_317, 0);
lean_inc(x_334);
x_335 = lean_ctor_get(x_317, 1);
lean_inc(x_335);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 x_336 = x_317;
} else {
 lean_dec_ref(x_317);
 x_336 = lean_box(0);
}
if (lean_is_scalar(x_336)) {
 x_337 = lean_alloc_ctor(1, 2, 0);
} else {
 x_337 = x_336;
}
lean_ctor_set(x_337, 0, x_334);
lean_ctor_set(x_337, 1, x_335);
return x_337;
}
}
else
{
lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; 
lean_dec(x_300);
x_338 = lean_ctor_get(x_312, 0);
lean_inc(x_338);
if (lean_is_exclusive(x_312)) {
 lean_ctor_release(x_312, 0);
 x_339 = x_312;
} else {
 lean_dec_ref(x_312);
 x_339 = lean_box(0);
}
x_340 = lean_ctor_get(x_311, 1);
lean_inc(x_340);
if (lean_is_exclusive(x_311)) {
 lean_ctor_release(x_311, 0);
 lean_ctor_release(x_311, 1);
 x_341 = x_311;
} else {
 lean_dec_ref(x_311);
 x_341 = lean_box(0);
}
x_342 = lean_ctor_get(x_338, 0);
lean_inc(x_342);
if (lean_is_exclusive(x_338)) {
 lean_ctor_release(x_338, 0);
 lean_ctor_release(x_338, 1);
 x_343 = x_338;
} else {
 lean_dec_ref(x_338);
 x_343 = lean_box(0);
}
if (lean_is_scalar(x_343)) {
 x_344 = lean_alloc_ctor(0, 2, 0);
} else {
 x_344 = x_343;
}
lean_ctor_set(x_344, 0, x_342);
lean_ctor_set(x_344, 1, x_310);
if (lean_is_scalar(x_339)) {
 x_345 = lean_alloc_ctor(3, 1, 0);
} else {
 x_345 = x_339;
 lean_ctor_set_tag(x_345, 3);
}
lean_ctor_set(x_345, 0, x_344);
if (lean_is_scalar(x_341)) {
 x_346 = lean_alloc_ctor(0, 2, 0);
} else {
 x_346 = x_341;
}
lean_ctor_set(x_346, 0, x_345);
lean_ctor_set(x_346, 1, x_340);
return x_346;
}
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; 
lean_dec(x_310);
lean_dec(x_300);
x_347 = lean_ctor_get(x_311, 0);
lean_inc(x_347);
x_348 = lean_ctor_get(x_311, 1);
lean_inc(x_348);
if (lean_is_exclusive(x_311)) {
 lean_ctor_release(x_311, 0);
 lean_ctor_release(x_311, 1);
 x_349 = x_311;
} else {
 lean_dec_ref(x_311);
 x_349 = lean_box(0);
}
if (lean_is_scalar(x_349)) {
 x_350 = lean_alloc_ctor(1, 2, 0);
} else {
 x_350 = x_349;
}
lean_ctor_set(x_350, 0, x_347);
lean_ctor_set(x_350, 1, x_348);
return x_350;
}
}
else
{
lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; 
lean_dec(x_304);
lean_dec(x_300);
x_351 = lean_ctor_get(x_306, 1);
lean_inc(x_351);
if (lean_is_exclusive(x_306)) {
 lean_ctor_release(x_306, 0);
 lean_ctor_release(x_306, 1);
 x_352 = x_306;
} else {
 lean_dec_ref(x_306);
 x_352 = lean_box(0);
}
x_353 = lean_box(1);
if (lean_is_scalar(x_352)) {
 x_354 = lean_alloc_ctor(1, 2, 0);
} else {
 x_354 = x_352;
}
lean_ctor_set(x_354, 0, x_353);
lean_ctor_set(x_354, 1, x_351);
return x_354;
}
}
else
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; 
lean_dec(x_300);
x_355 = lean_ctor_get(x_303, 1);
lean_inc(x_355);
if (lean_is_exclusive(x_303)) {
 lean_ctor_release(x_303, 0);
 lean_ctor_release(x_303, 1);
 x_356 = x_303;
} else {
 lean_dec_ref(x_303);
 x_356 = lean_box(0);
}
x_357 = lean_box(1);
if (lean_is_scalar(x_356)) {
 x_358 = lean_alloc_ctor(1, 2, 0);
} else {
 x_358 = x_356;
}
lean_ctor_set(x_358, 0, x_357);
lean_ctor_set(x_358, 1, x_355);
return x_358;
}
}
else
{
lean_object* x_359; lean_object* x_360; 
if (lean_is_scalar(x_301)) {
 x_359 = lean_alloc_ctor(2, 1, 0);
} else {
 x_359 = x_301;
 lean_ctor_set_tag(x_359, 2);
}
lean_ctor_set(x_359, 0, x_300);
if (lean_is_scalar(x_299)) {
 x_360 = lean_alloc_ctor(0, 2, 0);
} else {
 x_360 = x_299;
}
lean_ctor_set(x_360, 0, x_359);
lean_ctor_set(x_360, 1, x_298);
return x_360;
}
}
else
{
lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; 
x_361 = lean_ctor_get(x_296, 1);
lean_inc(x_361);
lean_dec(x_296);
x_362 = lean_ctor_get(x_297, 0);
lean_inc(x_362);
if (lean_is_exclusive(x_297)) {
 lean_ctor_release(x_297, 0);
 x_363 = x_297;
} else {
 lean_dec_ref(x_297);
 x_363 = lean_box(0);
}
x_364 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_361);
if (lean_obj_tag(x_364) == 0)
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; 
x_365 = lean_ctor_get(x_364, 0);
lean_inc(x_365);
x_366 = lean_ctor_get(x_364, 1);
lean_inc(x_366);
if (lean_is_exclusive(x_364)) {
 lean_ctor_release(x_364, 0);
 lean_ctor_release(x_364, 1);
 x_367 = x_364;
} else {
 lean_dec_ref(x_364);
 x_367 = lean_box(0);
}
x_368 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_368, 0, x_362);
lean_ctor_set(x_368, 1, x_365);
if (lean_is_scalar(x_363)) {
 x_369 = lean_alloc_ctor(3, 1, 0);
} else {
 x_369 = x_363;
 lean_ctor_set_tag(x_369, 3);
}
lean_ctor_set(x_369, 0, x_368);
if (lean_is_scalar(x_367)) {
 x_370 = lean_alloc_ctor(0, 2, 0);
} else {
 x_370 = x_367;
}
lean_ctor_set(x_370, 0, x_369);
lean_ctor_set(x_370, 1, x_366);
return x_370;
}
else
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; 
lean_dec(x_363);
lean_dec(x_362);
x_371 = lean_ctor_get(x_364, 1);
lean_inc(x_371);
if (lean_is_exclusive(x_364)) {
 lean_ctor_release(x_364, 0);
 lean_ctor_release(x_364, 1);
 x_372 = x_364;
} else {
 lean_dec_ref(x_364);
 x_372 = lean_box(0);
}
x_373 = lean_box(1);
if (lean_is_scalar(x_372)) {
 x_374 = lean_alloc_ctor(1, 2, 0);
} else {
 x_374 = x_372;
}
lean_ctor_set(x_374, 0, x_373);
lean_ctor_set(x_374, 1, x_371);
return x_374;
}
}
}
else
{
lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; 
x_375 = lean_ctor_get(x_296, 0);
lean_inc(x_375);
x_376 = lean_ctor_get(x_296, 1);
lean_inc(x_376);
if (lean_is_exclusive(x_296)) {
 lean_ctor_release(x_296, 0);
 lean_ctor_release(x_296, 1);
 x_377 = x_296;
} else {
 lean_dec_ref(x_296);
 x_377 = lean_box(0);
}
if (lean_is_scalar(x_377)) {
 x_378 = lean_alloc_ctor(1, 2, 0);
} else {
 x_378 = x_377;
}
lean_ctor_set(x_378, 0, x_375);
lean_ctor_set(x_378, 1, x_376);
return x_378;
}
}
}
else
{
uint8_t x_379; 
x_379 = !lean_is_exclusive(x_19);
if (x_379 == 0)
{
lean_object* x_380; lean_object* x_381; uint8_t x_382; 
x_380 = lean_ctor_get(x_19, 0);
x_381 = lean_ctor_get(x_18, 1);
lean_inc(x_381);
lean_dec(x_18);
x_382 = !lean_is_exclusive(x_380);
if (x_382 == 0)
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; 
x_383 = lean_ctor_get(x_380, 0);
x_384 = lean_ctor_get(x_380, 1);
lean_dec(x_384);
x_385 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_381);
if (lean_obj_tag(x_385) == 0)
{
uint8_t x_386; 
x_386 = !lean_is_exclusive(x_385);
if (x_386 == 0)
{
lean_object* x_387; 
x_387 = lean_ctor_get(x_385, 0);
lean_ctor_set(x_380, 1, x_387);
lean_ctor_set_tag(x_19, 3);
lean_ctor_set(x_385, 0, x_19);
return x_385;
}
else
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; 
x_388 = lean_ctor_get(x_385, 0);
x_389 = lean_ctor_get(x_385, 1);
lean_inc(x_389);
lean_inc(x_388);
lean_dec(x_385);
lean_ctor_set(x_380, 1, x_388);
lean_ctor_set_tag(x_19, 3);
x_390 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_390, 0, x_19);
lean_ctor_set(x_390, 1, x_389);
return x_390;
}
}
else
{
uint8_t x_391; 
lean_free_object(x_380);
lean_dec(x_383);
lean_free_object(x_19);
x_391 = !lean_is_exclusive(x_385);
if (x_391 == 0)
{
lean_object* x_392; lean_object* x_393; 
x_392 = lean_ctor_get(x_385, 0);
lean_dec(x_392);
x_393 = lean_box(1);
lean_ctor_set(x_385, 0, x_393);
return x_385;
}
else
{
lean_object* x_394; lean_object* x_395; lean_object* x_396; 
x_394 = lean_ctor_get(x_385, 1);
lean_inc(x_394);
lean_dec(x_385);
x_395 = lean_box(1);
x_396 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_396, 0, x_395);
lean_ctor_set(x_396, 1, x_394);
return x_396;
}
}
}
else
{
lean_object* x_397; lean_object* x_398; 
x_397 = lean_ctor_get(x_380, 0);
lean_inc(x_397);
lean_dec(x_380);
x_398 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_381);
if (lean_obj_tag(x_398) == 0)
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; 
x_399 = lean_ctor_get(x_398, 0);
lean_inc(x_399);
x_400 = lean_ctor_get(x_398, 1);
lean_inc(x_400);
if (lean_is_exclusive(x_398)) {
 lean_ctor_release(x_398, 0);
 lean_ctor_release(x_398, 1);
 x_401 = x_398;
} else {
 lean_dec_ref(x_398);
 x_401 = lean_box(0);
}
x_402 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_402, 0, x_397);
lean_ctor_set(x_402, 1, x_399);
lean_ctor_set_tag(x_19, 3);
lean_ctor_set(x_19, 0, x_402);
if (lean_is_scalar(x_401)) {
 x_403 = lean_alloc_ctor(0, 2, 0);
} else {
 x_403 = x_401;
}
lean_ctor_set(x_403, 0, x_19);
lean_ctor_set(x_403, 1, x_400);
return x_403;
}
else
{
lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; 
lean_dec(x_397);
lean_free_object(x_19);
x_404 = lean_ctor_get(x_398, 1);
lean_inc(x_404);
if (lean_is_exclusive(x_398)) {
 lean_ctor_release(x_398, 0);
 lean_ctor_release(x_398, 1);
 x_405 = x_398;
} else {
 lean_dec_ref(x_398);
 x_405 = lean_box(0);
}
x_406 = lean_box(1);
if (lean_is_scalar(x_405)) {
 x_407 = lean_alloc_ctor(1, 2, 0);
} else {
 x_407 = x_405;
}
lean_ctor_set(x_407, 0, x_406);
lean_ctor_set(x_407, 1, x_404);
return x_407;
}
}
}
else
{
lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; 
x_408 = lean_ctor_get(x_19, 0);
lean_inc(x_408);
lean_dec(x_19);
x_409 = lean_ctor_get(x_18, 1);
lean_inc(x_409);
lean_dec(x_18);
x_410 = lean_ctor_get(x_408, 0);
lean_inc(x_410);
if (lean_is_exclusive(x_408)) {
 lean_ctor_release(x_408, 0);
 lean_ctor_release(x_408, 1);
 x_411 = x_408;
} else {
 lean_dec_ref(x_408);
 x_411 = lean_box(0);
}
x_412 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_409);
if (lean_obj_tag(x_412) == 0)
{
lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; 
x_413 = lean_ctor_get(x_412, 0);
lean_inc(x_413);
x_414 = lean_ctor_get(x_412, 1);
lean_inc(x_414);
if (lean_is_exclusive(x_412)) {
 lean_ctor_release(x_412, 0);
 lean_ctor_release(x_412, 1);
 x_415 = x_412;
} else {
 lean_dec_ref(x_412);
 x_415 = lean_box(0);
}
if (lean_is_scalar(x_411)) {
 x_416 = lean_alloc_ctor(0, 2, 0);
} else {
 x_416 = x_411;
}
lean_ctor_set(x_416, 0, x_410);
lean_ctor_set(x_416, 1, x_413);
x_417 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_417, 0, x_416);
if (lean_is_scalar(x_415)) {
 x_418 = lean_alloc_ctor(0, 2, 0);
} else {
 x_418 = x_415;
}
lean_ctor_set(x_418, 0, x_417);
lean_ctor_set(x_418, 1, x_414);
return x_418;
}
else
{
lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; 
lean_dec(x_411);
lean_dec(x_410);
x_419 = lean_ctor_get(x_412, 1);
lean_inc(x_419);
if (lean_is_exclusive(x_412)) {
 lean_ctor_release(x_412, 0);
 lean_ctor_release(x_412, 1);
 x_420 = x_412;
} else {
 lean_dec_ref(x_412);
 x_420 = lean_box(0);
}
x_421 = lean_box(1);
if (lean_is_scalar(x_420)) {
 x_422 = lean_alloc_ctor(1, 2, 0);
} else {
 x_422 = x_420;
}
lean_ctor_set(x_422, 0, x_421);
lean_ctor_set(x_422, 1, x_419);
return x_422;
}
}
}
}
else
{
uint8_t x_423; 
x_423 = !lean_is_exclusive(x_18);
if (x_423 == 0)
{
return x_18;
}
else
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; 
x_424 = lean_ctor_get(x_18, 0);
x_425 = lean_ctor_get(x_18, 1);
lean_inc(x_425);
lean_inc(x_424);
lean_dec(x_18);
x_426 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_426, 0, x_424);
lean_ctor_set(x_426, 1, x_425);
return x_426;
}
}
}
block_432:
{
lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; 
x_428 = l_LeanRV64DExecutable_Functions_fetch___redArg___closed__4;
x_429 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_429, 0, x_428);
lean_ctor_set(x_429, 1, x_13);
x_430 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_430, 0, x_429);
if (lean_is_scalar(x_15)) {
 x_431 = lean_alloc_ctor(0, 2, 0);
} else {
 x_431 = x_15;
}
lean_ctor_set(x_431, 0, x_430);
lean_ctor_set(x_431, 1, x_14);
return x_431;
}
}
else
{
uint8_t x_444; 
lean_dec(x_10);
lean_dec(x_6);
x_444 = !lean_is_exclusive(x_12);
if (x_444 == 0)
{
lean_object* x_445; lean_object* x_446; 
x_445 = lean_ctor_get(x_12, 0);
lean_dec(x_445);
x_446 = lean_box(1);
lean_ctor_set(x_12, 0, x_446);
return x_12;
}
else
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; 
x_447 = lean_ctor_get(x_12, 1);
lean_inc(x_447);
lean_dec(x_12);
x_448 = lean_box(1);
x_449 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_449, 0, x_448);
lean_ctor_set(x_449, 1, x_447);
return x_449;
}
}
}
else
{
uint8_t x_450; 
lean_dec(x_6);
x_450 = !lean_is_exclusive(x_9);
if (x_450 == 0)
{
return x_9;
}
else
{
lean_object* x_451; lean_object* x_452; lean_object* x_453; 
x_451 = lean_ctor_get(x_9, 0);
x_452 = lean_ctor_get(x_9, 1);
lean_inc(x_452);
lean_inc(x_451);
lean_dec(x_9);
x_453 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_453, 0, x_451);
lean_ctor_set(x_453, 1, x_452);
return x_453;
}
}
}
else
{
uint8_t x_454; 
x_454 = !lean_is_exclusive(x_5);
if (x_454 == 0)
{
lean_object* x_455; lean_object* x_456; 
x_455 = lean_ctor_get(x_5, 0);
lean_dec(x_455);
x_456 = lean_box(1);
lean_ctor_set(x_5, 0, x_456);
return x_5;
}
else
{
lean_object* x_457; lean_object* x_458; lean_object* x_459; 
x_457 = lean_ctor_get(x_5, 1);
lean_inc(x_457);
lean_dec(x_5);
x_458 = lean_box(1);
x_459 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_459, 0, x_458);
lean_ctor_set(x_459, 1, x_457);
return x_459;
}
}
}
else
{
uint8_t x_460; 
x_460 = !lean_is_exclusive(x_3);
if (x_460 == 0)
{
lean_object* x_461; lean_object* x_462; 
x_461 = lean_ctor_get(x_3, 0);
lean_dec(x_461);
x_462 = lean_box(1);
lean_ctor_set(x_3, 0, x_462);
return x_3;
}
else
{
lean_object* x_463; lean_object* x_464; lean_object* x_465; 
x_463 = lean_ctor_get(x_3, 1);
lean_inc(x_463);
lean_dec(x_3);
x_464 = lean_box(1);
x_465 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_465, 0, x_464);
lean_ctor_set(x_465, 1, x_463);
return x_465;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_fetch(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_fetch___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_fetch___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_fetch(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Flow(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Prelude(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_PreludeMemAddrtype(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSysRegs(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvAddrChecks(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvMem(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvVmem(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvFetchRvfi(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvFetch(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Flow(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Prelude(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_PreludeMemAddrtype(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSysRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvAddrChecks(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvMem(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvVmem(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvFetchRvfi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_isRVC___closed__0 = _init_l_LeanRV64DExecutable_Functions_isRVC___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_isRVC___closed__0);
l_LeanRV64DExecutable_Functions_fetch___redArg___closed__0 = _init_l_LeanRV64DExecutable_Functions_fetch___redArg___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_fetch___redArg___closed__0);
l_LeanRV64DExecutable_Functions_fetch___redArg___closed__1 = _init_l_LeanRV64DExecutable_Functions_fetch___redArg___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_fetch___redArg___closed__1);
l_LeanRV64DExecutable_Functions_fetch___redArg___closed__2 = _init_l_LeanRV64DExecutable_Functions_fetch___redArg___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_fetch___redArg___closed__2);
l_LeanRV64DExecutable_Functions_fetch___redArg___closed__3 = _init_l_LeanRV64DExecutable_Functions_fetch___redArg___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_fetch___redArg___closed__3);
l_LeanRV64DExecutable_Functions_fetch___redArg___closed__4 = _init_l_LeanRV64DExecutable_Functions_fetch___redArg___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_fetch___redArg___closed__4);
l_LeanRV64DExecutable_Functions_fetch___redArg___closed__5 = _init_l_LeanRV64DExecutable_Functions_fetch___redArg___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_fetch___redArg___closed__5);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
