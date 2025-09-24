// Lean compiler output
// Module: LeanRV64DExecutable.RiscvVmemPte
// Imports: Init LeanRV64DExecutable.Flow LeanRV64DExecutable.Prelude LeanRV64DExecutable.RiscvErrors LeanRV64DExecutable.RiscvSysRegs
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
lean_object* l_PreSail_undefined__bitvector___at___LeanRV64DExecutable_Functions_undefined__Misa_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0(lean_object*, lean_object*);
lean_object* l_BitVec_setWidth(lean_object*, lean_object*, lean_object*);
uint8_t l_LeanRV64DExecutable_Functions_not(uint8_t);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___set__PTE__Ext__PBMT___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_update__PTE__Bits(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___get__PTE__Ext__PBMT(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_Mk__PTE__Ext(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__PTE__Flags__U(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___update__PTE__Flags__D(lean_object*, lean_object*);
extern lean_object* l_Sail_trivialChoiceSource;
static lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___closed__2;
static lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_pte__is__invalid(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__PTE__Flags__V(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_pte__is__invalid___closed__0;
lean_object* l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___update__PTE__Ext__PBMT(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__PTE__Flags__X(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_Mk__PTE__Flags___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_update__PTE__Bits___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__bits__of__PTE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_pte__is__invalid___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___closed__0;
lean_object* l_LeanRV64DExecutable_Functions___get__PTE__Ext__N(lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_pte__is__non__leaf(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__PTE__Flags__A(lean_object*);
lean_object* l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__bits__of__PTE___boxed(lean_object*, lean_object*);
lean_object* l_BitVec_ofNat(lean_object*, lean_object*);
lean_object* l_BitVec_extractLsb___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__PTE__Flags__W(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_Mk__PTE__Flags(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__PTE__Ext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___set__PTE__Ext__PBMT(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__PTE__Ext___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_currentlyEnabled(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_PPN__of__PTE___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__PTE__Ext___redArg(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___closed__0;
lean_object* l_Sail_BitVec_updateSubrange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_default__sv32__ext__pte;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___get__PTE__Ext__PBMT___boxed(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_pte__is__non__leaf___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_Mk__PTE__Ext___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___update__PTE__Ext__PBMT___boxed(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_pte__is__non__leaf___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__PTE__Flags___redArg(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_PPN__of__PTE(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___closed__1;
lean_object* l_LeanRV64DExecutable_Functions___get__PTE__Flags__D(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__PTE__Flags___boxed(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__PTE__Flags__R(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___update__PTE__Flags__A(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__PTE__Flags(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__PTE__Ext__reserved(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__PTE__Ext___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(10u);
x_3 = l_Sail_trivialChoiceSource;
x_4 = l_PreSail_undefined__bitvector___at___LeanRV64DExecutable_Functions_undefined__Misa_spec__0___redArg(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__PTE__Ext(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_undefined__PTE__Ext___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__PTE__Ext___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_undefined__PTE__Ext(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_Mk__PTE__Ext(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_Mk__PTE__Ext___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_Mk__PTE__Ext(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___get__PTE__Ext__PBMT(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(8u);
x_3 = lean_unsigned_to_nat(7u);
x_4 = l_BitVec_extractLsb___redArg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___get__PTE__Ext__PBMT___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions___get__PTE__Ext__PBMT(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___update__PTE__Ext__PBMT(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_unsigned_to_nat(10u);
x_4 = lean_unsigned_to_nat(8u);
x_5 = lean_unsigned_to_nat(7u);
x_6 = l_Sail_BitVec_updateSubrange(x_3, x_1, x_4, x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___update__PTE__Ext__PBMT___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions___update__PTE__Ext__PBMT(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___set__PTE__Ext__PBMT(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_LeanRV64DExecutable_Functions___update__PTE__Ext__PBMT(x_5, x_2);
lean_dec(x_5);
x_8 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_1, x_7, x_6);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_4, 0);
lean_dec(x_10);
x_11 = lean_box(1);
lean_ctor_set(x_4, 0, x_11);
return x_4;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_dec(x_4);
x_13 = lean_box(1);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___set__PTE__Ext__PBMT___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_LeanRV64DExecutable_Functions___set__PTE__Ext__PBMT(x_4, x_2, x_3);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_default__sv32__ext__pte() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__bits__of__PTE(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(64u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_unsigned_to_nat(0u);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(63u);
x_7 = lean_unsigned_to_nat(54u);
x_8 = l_BitVec_extractLsb___redArg(x_6, x_7, x_2);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__bits__of__PTE___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_ext__bits__of__PTE(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_PPN__of__PTE(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(32u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_unsigned_to_nat(53u);
x_6 = lean_unsigned_to_nat(10u);
x_7 = lean_unsigned_to_nat(44u);
if (x_4 == 0)
{
x_8 = x_7;
goto block_11;
}
else
{
lean_object* x_12; 
x_12 = lean_unsigned_to_nat(22u);
x_8 = x_12;
goto block_11;
}
block_11:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_BitVec_extractLsb___redArg(x_5, x_6, x_2);
x_10 = l_BitVec_setWidth(x_7, x_8, x_9);
lean_dec(x_9);
return x_10;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_unsigned_to_nat(31u);
x_14 = lean_unsigned_to_nat(10u);
x_15 = lean_unsigned_to_nat(22u);
if (x_4 == 0)
{
lean_object* x_20; 
x_20 = lean_unsigned_to_nat(44u);
x_16 = x_20;
goto block_19;
}
else
{
x_16 = x_15;
goto block_19;
}
block_19:
{
lean_object* x_17; lean_object* x_18; 
x_17 = l_BitVec_extractLsb___redArg(x_13, x_14, x_2);
x_18 = l_BitVec_setWidth(x_15, x_16, x_17);
lean_dec(x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_PPN__of__PTE___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_PPN__of__PTE(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__PTE__Flags___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(8u);
x_3 = l_Sail_trivialChoiceSource;
x_4 = l_PreSail_undefined__bitvector___at___LeanRV64DExecutable_Functions_undefined__Misa_spec__0___redArg(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__PTE__Flags(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_undefined__PTE__Flags___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__PTE__Flags___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_undefined__PTE__Flags(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_Mk__PTE__Flags(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_Mk__PTE__Flags___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_Mk__PTE__Flags(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_pte__is__non__leaf___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_pte__is__non__leaf(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_LeanRV64DExecutable_Functions___get__PTE__Flags__X(x_1);
x_3 = l_LeanRV64DExecutable_Functions_pte__is__non__leaf___closed__0;
x_4 = lean_nat_dec_eq(x_2, x_3);
lean_dec(x_2);
if (x_4 == 0)
{
return x_4;
}
else
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_LeanRV64DExecutable_Functions___get__PTE__Flags__W(x_1);
x_6 = lean_nat_dec_eq(x_5, x_3);
lean_dec(x_5);
if (x_6 == 0)
{
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_LeanRV64DExecutable_Functions___get__PTE__Flags__R(x_1);
x_8 = lean_nat_dec_eq(x_7, x_3);
lean_dec(x_7);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_pte__is__non__leaf___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_LeanRV64DExecutable_Functions_pte__is__non__leaf(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_pte__is__invalid___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_BitVec_ofNat(x_1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_pte__is__invalid(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = 57;
x_5 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_4, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_8 = x_5;
} else {
 lean_dec_ref(x_5);
 x_8 = lean_box(0);
}
x_9 = 58;
x_10 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_9, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_29; uint8_t x_34; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_13 = x_10;
} else {
 lean_dec_ref(x_10);
 x_13 = lean_box(0);
}
x_45 = l_LeanRV64DExecutable_Functions___get__PTE__Flags__V(x_1);
x_46 = l_LeanRV64DExecutable_Functions_pte__is__non__leaf___closed__0;
x_47 = lean_nat_dec_eq(x_45, x_46);
lean_dec(x_45);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_48 = l_LeanRV64DExecutable_Functions___get__PTE__Flags__W(x_1);
x_49 = l_LeanRV64DExecutable_Functions_pte__is__invalid___closed__0;
x_50 = lean_nat_dec_eq(x_48, x_49);
lean_dec(x_48);
if (x_50 == 0)
{
x_34 = x_50;
goto block_44;
}
else
{
lean_object* x_51; uint8_t x_52; 
x_51 = l_LeanRV64DExecutable_Functions___get__PTE__Flags__R(x_1);
x_52 = lean_nat_dec_eq(x_51, x_46);
lean_dec(x_51);
x_34 = x_52;
goto block_44;
}
}
else
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_6);
x_53 = lean_box(x_47);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_12);
return x_54;
}
block_23:
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = l_LeanRV64DExecutable_Functions___get__PTE__Ext__reserved(x_2);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_nat_dec_eq(x_15, x_16);
lean_dec(x_15);
if (x_17 == 0)
{
uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_18 = 1;
x_19 = lean_box(x_18);
if (lean_is_scalar(x_13)) {
 x_20 = lean_alloc_ctor(0, 2, 0);
} else {
 x_20 = x_13;
}
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_12);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(x_14);
if (lean_is_scalar(x_13)) {
 x_22 = lean_alloc_ctor(0, 2, 0);
} else {
 x_22 = x_13;
}
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_12);
return x_22;
}
}
block_28:
{
uint8_t x_24; uint8_t x_25; 
x_24 = lean_unbox(x_11);
lean_dec(x_11);
x_25 = l_LeanRV64DExecutable_Functions_not(x_24);
if (x_25 == 0)
{
lean_dec(x_8);
x_14 = x_25;
goto block_23;
}
else
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_13);
x_26 = lean_box(x_25);
if (lean_is_scalar(x_8)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_8;
}
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_12);
return x_27;
}
}
block_33:
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = l_LeanRV64DExecutable_Functions___get__PTE__Ext__PBMT(x_2);
x_31 = lean_unsigned_to_nat(0u);
x_32 = lean_nat_dec_eq(x_30, x_31);
lean_dec(x_30);
if (x_32 == 0)
{
goto block_28;
}
else
{
if (x_29 == 0)
{
lean_dec(x_11);
lean_dec(x_8);
x_14 = x_29;
goto block_23;
}
else
{
goto block_28;
}
}
}
block_44:
{
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = l_LeanRV64DExecutable_Functions___get__PTE__Ext__N(x_2);
x_36 = l_LeanRV64DExecutable_Functions_pte__is__non__leaf___closed__0;
x_37 = lean_nat_dec_eq(x_35, x_36);
lean_dec(x_35);
if (x_37 == 0)
{
uint8_t x_38; uint8_t x_39; 
x_38 = lean_unbox(x_6);
lean_dec(x_6);
x_39 = l_LeanRV64DExecutable_Functions_not(x_38);
if (x_39 == 0)
{
x_29 = x_39;
goto block_33;
}
else
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_8);
x_40 = lean_box(x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_12);
return x_41;
}
}
else
{
lean_dec(x_6);
x_29 = x_34;
goto block_33;
}
}
else
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_6);
x_42 = lean_box(x_34);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_12);
return x_43;
}
}
}
else
{
lean_dec(x_8);
lean_dec(x_6);
return x_10;
}
}
else
{
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_pte__is__invalid___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_pte__is__invalid(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("riscv_vmem_pte.sail", 19, 19);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(132u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("m-mode mem perm check", 21, 21);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___closed__0;
x_4 = l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___closed__1;
x_5 = l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___closed__2;
x_6 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_3, x_4, x_5, x_2);
return x_6;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___closed__0;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg(lean_object* x_1, uint8_t x_2, uint8_t x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_11; lean_object* x_12; lean_object* x_16; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_29; uint8_t x_30; uint8_t x_36; 
x_22 = l_LeanRV64DExecutable_Functions___get__PTE__Flags__U(x_5);
x_23 = l_LeanRV64DExecutable_Functions___get__PTE__Flags__R(x_5);
x_24 = l_LeanRV64DExecutable_Functions___get__PTE__Flags__W(x_5);
x_29 = l_LeanRV64DExecutable_Functions___get__PTE__Flags__X(x_5);
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_dec(x_24);
switch (x_2) {
case 0:
{
lean_object* x_41; uint8_t x_42; 
x_41 = l_LeanRV64DExecutable_Functions_pte__is__invalid___closed__0;
x_42 = lean_nat_dec_eq(x_22, x_41);
lean_dec(x_22);
if (x_42 == 0)
{
lean_dec(x_29);
lean_dec(x_23);
x_11 = x_42;
x_12 = x_6;
goto block_15;
}
else
{
uint8_t x_43; 
x_43 = lean_nat_dec_eq(x_23, x_41);
lean_dec(x_23);
if (x_43 == 0)
{
uint8_t x_44; 
x_44 = lean_nat_dec_eq(x_29, x_41);
lean_dec(x_29);
if (x_44 == 0)
{
x_11 = x_44;
x_12 = x_6;
goto block_15;
}
else
{
x_11 = x_3;
x_12 = x_6;
goto block_15;
}
}
else
{
lean_dec(x_29);
x_11 = x_43;
x_12 = x_6;
goto block_15;
}
}
}
case 1:
{
lean_object* x_45; uint8_t x_46; 
x_45 = l_LeanRV64DExecutable_Functions_pte__is__non__leaf___closed__0;
x_46 = lean_nat_dec_eq(x_22, x_45);
lean_dec(x_22);
if (x_46 == 0)
{
x_36 = x_4;
goto block_40;
}
else
{
x_36 = x_46;
goto block_40;
}
}
default: 
{
lean_object* x_47; 
lean_dec(x_29);
lean_dec(x_23);
lean_dec(x_22);
x_47 = l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0(x_1, x_6);
x_16 = x_47;
goto block_21;
}
}
}
case 1:
{
lean_dec(x_29);
lean_dec(x_23);
switch (x_2) {
case 0:
{
lean_object* x_48; uint8_t x_49; 
x_48 = l_LeanRV64DExecutable_Functions_pte__is__invalid___closed__0;
x_49 = lean_nat_dec_eq(x_22, x_48);
lean_dec(x_22);
if (x_49 == 0)
{
lean_dec(x_24);
x_11 = x_49;
x_12 = x_6;
goto block_15;
}
else
{
uint8_t x_50; 
x_50 = lean_nat_dec_eq(x_24, x_48);
lean_dec(x_24);
x_11 = x_50;
x_12 = x_6;
goto block_15;
}
}
case 1:
{
lean_object* x_51; uint8_t x_52; 
x_51 = l_LeanRV64DExecutable_Functions_pte__is__non__leaf___closed__0;
x_52 = lean_nat_dec_eq(x_22, x_51);
lean_dec(x_22);
if (x_52 == 0)
{
x_25 = x_4;
goto block_28;
}
else
{
x_25 = x_52;
goto block_28;
}
}
default: 
{
lean_object* x_53; 
lean_dec(x_24);
lean_dec(x_22);
x_53 = l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0(x_1, x_6);
x_16 = x_53;
goto block_21;
}
}
}
case 2:
{
switch (x_2) {
case 0:
{
lean_object* x_54; uint8_t x_55; 
x_54 = l_LeanRV64DExecutable_Functions_pte__is__invalid___closed__0;
x_55 = lean_nat_dec_eq(x_22, x_54);
lean_dec(x_22);
if (x_55 == 0)
{
lean_dec(x_29);
lean_dec(x_24);
lean_dec(x_23);
x_11 = x_55;
x_12 = x_6;
goto block_15;
}
else
{
uint8_t x_56; 
x_56 = lean_nat_dec_eq(x_24, x_54);
lean_dec(x_24);
if (x_56 == 0)
{
lean_dec(x_29);
lean_dec(x_23);
x_11 = x_56;
x_12 = x_6;
goto block_15;
}
else
{
uint8_t x_57; 
x_57 = lean_nat_dec_eq(x_23, x_54);
lean_dec(x_23);
if (x_57 == 0)
{
uint8_t x_58; 
x_58 = lean_nat_dec_eq(x_29, x_54);
lean_dec(x_29);
if (x_58 == 0)
{
x_11 = x_58;
x_12 = x_6;
goto block_15;
}
else
{
x_11 = x_3;
x_12 = x_6;
goto block_15;
}
}
else
{
lean_dec(x_29);
x_11 = x_57;
x_12 = x_6;
goto block_15;
}
}
}
}
case 1:
{
lean_object* x_59; uint8_t x_60; 
x_59 = l_LeanRV64DExecutable_Functions_pte__is__non__leaf___closed__0;
x_60 = lean_nat_dec_eq(x_22, x_59);
lean_dec(x_22);
if (x_60 == 0)
{
x_30 = x_4;
goto block_35;
}
else
{
x_30 = x_60;
goto block_35;
}
}
default: 
{
lean_object* x_61; 
lean_dec(x_29);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
x_61 = l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0(x_1, x_6);
x_16 = x_61;
goto block_21;
}
}
}
default: 
{
lean_dec(x_24);
lean_dec(x_23);
switch (x_2) {
case 0:
{
lean_object* x_62; uint8_t x_63; 
x_62 = l_LeanRV64DExecutable_Functions_pte__is__invalid___closed__0;
x_63 = lean_nat_dec_eq(x_22, x_62);
lean_dec(x_22);
if (x_63 == 0)
{
lean_dec(x_29);
x_11 = x_63;
x_12 = x_6;
goto block_15;
}
else
{
uint8_t x_64; 
x_64 = lean_nat_dec_eq(x_29, x_62);
lean_dec(x_29);
x_11 = x_64;
x_12 = x_6;
goto block_15;
}
}
case 1:
{
lean_object* x_65; uint8_t x_66; 
x_65 = l_LeanRV64DExecutable_Functions_pte__is__non__leaf___closed__0;
x_66 = lean_nat_dec_eq(x_22, x_65);
lean_dec(x_22);
if (x_66 == 0)
{
lean_dec(x_29);
x_11 = x_66;
x_12 = x_6;
goto block_15;
}
else
{
lean_object* x_67; uint8_t x_68; 
x_67 = l_LeanRV64DExecutable_Functions_pte__is__invalid___closed__0;
x_68 = lean_nat_dec_eq(x_29, x_67);
lean_dec(x_29);
x_11 = x_68;
x_12 = x_6;
goto block_15;
}
}
default: 
{
lean_object* x_69; 
lean_dec(x_29);
lean_dec(x_22);
x_69 = l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0(x_1, x_6);
x_16 = x_69;
goto block_21;
}
}
}
}
block_10:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___closed__1;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
block_15:
{
if (x_11 == 0)
{
x_7 = x_12;
goto block_10;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___closed__2;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
block_21:
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
block_28:
{
if (x_25 == 0)
{
lean_dec(x_24);
x_7 = x_6;
goto block_10;
}
else
{
lean_object* x_26; uint8_t x_27; 
x_26 = l_LeanRV64DExecutable_Functions_pte__is__invalid___closed__0;
x_27 = lean_nat_dec_eq(x_24, x_26);
lean_dec(x_24);
x_11 = x_27;
x_12 = x_6;
goto block_15;
}
}
block_35:
{
if (x_30 == 0)
{
lean_dec(x_29);
lean_dec(x_24);
lean_dec(x_23);
x_7 = x_6;
goto block_10;
}
else
{
lean_object* x_31; uint8_t x_32; 
x_31 = l_LeanRV64DExecutable_Functions_pte__is__invalid___closed__0;
x_32 = lean_nat_dec_eq(x_24, x_31);
lean_dec(x_24);
if (x_32 == 0)
{
lean_dec(x_29);
lean_dec(x_23);
x_11 = x_32;
x_12 = x_6;
goto block_15;
}
else
{
uint8_t x_33; 
x_33 = lean_nat_dec_eq(x_23, x_31);
lean_dec(x_23);
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = lean_nat_dec_eq(x_29, x_31);
lean_dec(x_29);
if (x_34 == 0)
{
x_11 = x_34;
x_12 = x_6;
goto block_15;
}
else
{
x_11 = x_3;
x_12 = x_6;
goto block_15;
}
}
else
{
lean_dec(x_29);
x_11 = x_33;
x_12 = x_6;
goto block_15;
}
}
}
}
block_40:
{
if (x_36 == 0)
{
lean_dec(x_29);
lean_dec(x_23);
x_7 = x_6;
goto block_10;
}
else
{
lean_object* x_37; uint8_t x_38; 
x_37 = l_LeanRV64DExecutable_Functions_pte__is__invalid___closed__0;
x_38 = lean_nat_dec_eq(x_23, x_37);
lean_dec(x_23);
if (x_38 == 0)
{
uint8_t x_39; 
x_39 = lean_nat_dec_eq(x_29, x_37);
lean_dec(x_29);
if (x_39 == 0)
{
x_11 = x_39;
x_12 = x_6;
goto block_15;
}
else
{
x_11 = x_3;
x_12 = x_6;
goto block_15;
}
}
else
{
lean_dec(x_29);
x_11 = x_38;
x_12 = x_6;
goto block_15;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission(lean_object* x_1, uint8_t x_2, uint8_t x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg(x_1, x_2, x_3, x_4, x_5, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_7 = lean_unbox(x_2);
lean_dec(x_2);
x_8 = lean_unbox(x_3);
lean_dec(x_3);
x_9 = lean_unbox(x_4);
lean_dec(x_4);
x_10 = l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg(x_1, x_7, x_8, x_9, x_5, x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = lean_unbox(x_3);
lean_dec(x_3);
x_11 = lean_unbox(x_4);
lean_dec(x_4);
x_12 = l_LeanRV64DExecutable_Functions_check__PTE__permission(x_1, x_9, x_10, x_11, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_update__PTE__Bits(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_18; uint8_t x_19; uint8_t x_24; uint8_t x_26; 
x_4 = lean_unsigned_to_nat(7u);
x_5 = lean_unsigned_to_nat(0u);
x_12 = l_BitVec_extractLsb___redArg(x_4, x_5, x_2);
x_13 = l_LeanRV64DExecutable_Functions___get__PTE__Flags__D(x_12);
x_18 = l_LeanRV64DExecutable_Functions_pte__is__non__leaf___closed__0;
x_26 = lean_nat_dec_eq(x_13, x_18);
if (x_26 == 0)
{
x_24 = x_26;
goto block_25;
}
else
{
switch (lean_obj_tag(x_3)) {
case 1:
{
x_24 = x_26;
goto block_25;
}
case 2:
{
x_24 = x_26;
goto block_25;
}
default: 
{
uint8_t x_27; 
x_27 = 0;
x_19 = x_27;
goto block_23;
}
}
}
block_11:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_LeanRV64DExecutable_Functions___update__PTE__Flags__D(x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
x_9 = l_Sail_BitVec_updateSubrange(x_1, x_2, x_4, x_5, x_8);
lean_dec(x_8);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
block_17:
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_LeanRV64DExecutable_Functions_pte__is__invalid___closed__0;
x_16 = l_LeanRV64DExecutable_Functions___update__PTE__Flags__A(x_12, x_15);
lean_dec(x_12);
if (x_14 == 0)
{
x_6 = x_16;
x_7 = x_13;
goto block_11;
}
else
{
lean_dec(x_13);
x_6 = x_16;
x_7 = x_15;
goto block_11;
}
}
block_23:
{
lean_object* x_20; uint8_t x_21; 
x_20 = l_LeanRV64DExecutable_Functions___get__PTE__Flags__A(x_12);
x_21 = lean_nat_dec_eq(x_20, x_18);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_13);
lean_dec(x_12);
x_22 = lean_box(0);
return x_22;
}
else
{
x_14 = x_19;
goto block_17;
}
}
block_25:
{
if (x_24 == 0)
{
x_19 = x_24;
goto block_23;
}
else
{
x_14 = x_24;
goto block_17;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_update__PTE__Bits___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_update__PTE__Bits(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Flow(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Prelude(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvErrors(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSysRegs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvVmemPte(uint8_t builtin, lean_object* w) {
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
res = initialize_LeanRV64DExecutable_RiscvErrors(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSysRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_default__sv32__ext__pte = _init_l_LeanRV64DExecutable_Functions_default__sv32__ext__pte();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_default__sv32__ext__pte);
l_LeanRV64DExecutable_Functions_pte__is__non__leaf___closed__0 = _init_l_LeanRV64DExecutable_Functions_pte__is__non__leaf___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_pte__is__non__leaf___closed__0);
l_LeanRV64DExecutable_Functions_pte__is__invalid___closed__0 = _init_l_LeanRV64DExecutable_Functions_pte__is__invalid___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_pte__is__invalid___closed__0);
l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___closed__0 = _init_l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___closed__0);
l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___closed__1 = _init_l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___closed__1);
l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___closed__2 = _init_l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___lam__0___closed__2);
l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___closed__0 = _init_l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___closed__0);
l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___closed__1 = _init_l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___closed__1);
l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___closed__2 = _init_l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
