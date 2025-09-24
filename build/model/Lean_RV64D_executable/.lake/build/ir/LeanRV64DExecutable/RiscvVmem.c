// Lean compiler output
// Module: LeanRV64DExecutable.RiscvVmem
// Imports: Init LeanRV64DExecutable.Flow LeanRV64DExecutable.Prelude LeanRV64DExecutable.RiscvErrors LeanRV64DExecutable.RiscvXlen LeanRV64DExecutable.PreludeMemAddrtype LeanRV64DExecutable.RiscvTypesExt LeanRV64DExecutable.RiscvTypes LeanRV64DExecutable.RiscvVmemTypes LeanRV64DExecutable.RiscvSysRegs LeanRV64DExecutable.RiscvPlatform LeanRV64DExecutable.RiscvMem LeanRV64DExecutable.RiscvVmemPte LeanRV64DExecutable.RiscvVmemPtw LeanRV64DExecutable.RiscvVmemTlb
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
static lean_object* l_LeanRV64DExecutable_Functions_get__satp___closed__0;
lean_object* l_LeanRV64DExecutable_Functions_internal__error___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__miss(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_architecture__backwards(lean_object*, lean_object*);
static uint8_t l_LeanRV64DExecutable_Functions_translationMode___closed__4;
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_satp__mode__width__forwards__matches(uint8_t);
static lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__6;
static lean_object* l_LeanRV64DExecutable_Functions_translateAddr___closed__1;
lean_object* l_BitVec_setWidth(lean_object*, lean_object*, lean_object*);
uint8_t l_LeanRV64DExecutable_Functions_not(uint8_t);
lean_object* l_LeanRV64DExecutable_Functions___get__PTE__Flags__G(lean_object*);
static uint8_t l_LeanRV64DExecutable_Functions_pt__walk___closed__2;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__satp___boxed(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_update__PTE__Bits(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_pt__walk___closed__1;
lean_object* l_LeanRV64DExecutable_Functions_mem__write__value__priv(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_translationMode___closed__2;
static lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__5;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_pt__walk___lam__0___boxed(lean_object**);
static lean_object* l_LeanRV64DExecutable_Functions_translateAddr___closed__4;
uint8_t l_beqPrivilege____x40_LeanRV64DExecutable_Defs___hyg_4812_(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translateAddr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_write__pte___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__Satp32__Mode(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_pte__is__invalid(lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_append___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__Satp64__Asid(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_add__to__TLB(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__3;
static lean_object* l_LeanRV64DExecutable_Functions_translateAddr___closed__8;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_pt__walk(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(uint8_t, lean_object*);
lean_object* l_Sail_SailME_run___redArg(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__4;
static lean_object* l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__0;
static lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__2;
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_satp__mode__width__backwards(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__Mstatus__MXR(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_ext__bits__of__PTE(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__0;
lean_object* l_LeanRV64DExecutable_Functions_lookup__TLB(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_translateAddr___closed__6;
static lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__1;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_satp__to__ppn(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__3;
static lean_object* l_LeanRV64DExecutable_Functions_read__pte___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_translateAddr___closed__2;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_satp__mode__width__forwards__matches___boxed(lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*);
uint8_t l_LeanRV64DExecutable_Functions_pte__is__non__leaf(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_pt__walk___closed__0;
lean_object* l_LeanRV64DExecutable_Functions___get__Satp32__PPN(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__vmem___boxed(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_pt__walk___closed__4;
static lean_object* l_LeanRV64DExecutable_Functions_get__satp___closed__1;
lean_object* l_LeanRV64DExecutable_Functions_write__TLB(lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_ofNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_write__pte(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_translateAddr___closed__0;
lean_object* l_LeanRV64DExecutable_Functions_satpMode__of__bits(uint8_t, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__Mstatus__SUM(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__Mstatus__SXL(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__1;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__vmem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_satp__to__asid(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__8;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__miss___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_extractLsb___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_pt__walk___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Sail_SailME_throw___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__hit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_reset__TLB___redArg(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_translationMode___closed__5;
lean_object* l_LeanRV64DExecutable_Functions___get__Satp64__Mode(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_translateAddr___closed__3;
lean_object* l_LeanRV64DExecutable_Functions_tlb__get__pte(lean_object*, lean_object*);
extern lean_object* l_LeanRV64DExecutable_Functions_xlen;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_satp__to__asid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_satp__mode__width__forwards(uint8_t, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__Satp32__Asid(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_translateAddr___closed__5;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translationMode(uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_translationMode___closed__7;
static lean_object* l_LeanRV64DExecutable_Functions_translateAddr___closed__7;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_satp__to__ppn___boxed(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_pt__walk___closed__5;
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_BitVec_signExtend(lean_object*, lean_object*, lean_object*);
uint8_t l_beqSATPMode____x40_LeanRV64DExecutable_Defs___hyg_17659_(uint8_t, uint8_t);
static lean_object* l_LeanRV64DExecutable_Functions_translationMode___closed__6;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_satp__mode__width__backwards___boxed(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_dec__bits__1__forwards_spec__0___redArg(uint8_t, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__vmem___redArg(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_translationMode___closed__0;
static lean_object* l_LeanRV64DExecutable_Functions_translationMode___closed__3;
static lean_object* l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__2;
static lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__4;
lean_object* l_Int_toNat(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__1;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translateAddr(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_ext__get__ptw__error(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_mem__read__priv(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_tlb__set__pte(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_satp__mode__width__backwards__matches___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__hit(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_PPN__of__PTE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint8_t l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translationMode___boxed(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_translationException(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_translationMode___closed__1;
lean_object* l_LeanRV64DExecutable_Functions___get__Satp64__PPN(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__2;
lean_object* l_LeanRV64DExecutable_Functions_tlb__get__ppn(lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_pt__walk___closed__3;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_read__pte(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_satp__mode__width__backwards__matches(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__4;
lean_object* l_LeanRV64DExecutable_Functions_effectivePrivilege(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__7;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_pt__walk___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__satp(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__3;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_write__pte(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_5 = lean_unsigned_to_nat(8u);
x_6 = lean_nat_mul(x_2, x_5);
x_7 = lean_nat_mul(x_5, x_2);
x_8 = l_BitVec_setWidth(x_6, x_7, x_3);
lean_dec(x_7);
lean_dec(x_6);
x_9 = 1;
x_10 = 0;
x_11 = l_LeanRV64DExecutable_Functions_mem__write__value__priv(x_1, x_2, x_8, x_9, x_10, x_10, x_10, x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_write__pte___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LeanRV64DExecutable_Functions_write__pte(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__pte___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_read__pte(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = l_LeanRV64DExecutable_Functions_read__pte___closed__0;
x_5 = 1;
x_6 = 0;
x_7 = l_LeanRV64DExecutable_Functions_mem__read__priv(x_4, x_5, x_1, x_2, x_6, x_6, x_6, x_3);
return x_7;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_pt__walk___lam__0(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, uint8_t x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, uint8_t x_17, uint8_t x_18, uint8_t x_19, lean_object* x_20, uint8_t x_21, lean_object* x_22) {
_start:
{
lean_object* x_23; 
x_23 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_dec__bits__1__forwards_spec__0___redArg(x_1, x_2, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_nat_add(x_3, x_4);
x_26 = lean_unsigned_to_nat(64u);
x_27 = l_BitVec_setWidth(x_25, x_26, x_5);
lean_dec(x_25);
x_28 = l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__0;
x_29 = lean_nat_to_int(x_6);
x_30 = l_Int_toNat(x_29);
lean_dec(x_29);
x_31 = l_Int_pow(x_28, x_30);
lean_dec(x_30);
x_32 = l_Int_toNat(x_31);
lean_dec(x_31);
lean_inc(x_32);
lean_inc(x_27);
x_33 = l_LeanRV64DExecutable_Functions_read__pte(x_27, x_32, x_24);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; lean_object* x_57; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_36 = x_33;
} else {
 lean_dec_ref(x_33);
 x_36 = lean_box(0);
}
x_37 = lean_ctor_get(x_34, 0);
lean_inc(x_37);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 x_38 = x_34;
} else {
 lean_dec_ref(x_34);
 x_38 = lean_box(0);
}
x_39 = lean_unsigned_to_nat(8u);
x_40 = lean_nat_mul(x_39, x_32);
lean_dec(x_32);
x_71 = lean_unsigned_to_nat(7u);
x_72 = lean_unsigned_to_nat(0u);
x_73 = l_BitVec_extractLsb___redArg(x_71, x_72, x_37);
x_74 = l_LeanRV64DExecutable_Functions_ext__bits__of__PTE(x_40, x_37);
x_75 = l_LeanRV64DExecutable_Functions_pte__is__invalid(x_73, x_74, x_35);
lean_dec(x_74);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_85; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_78 = x_75;
} else {
 lean_dec_ref(x_75);
 x_78 = lean_box(0);
}
x_85 = lean_unbox(x_76);
lean_dec(x_76);
if (x_85 == 0)
{
uint8_t x_86; lean_object* x_87; uint8_t x_88; lean_object* x_89; lean_object* x_90; uint8_t x_94; lean_object* x_95; uint8_t x_96; lean_object* x_97; lean_object* x_114; uint8_t x_115; lean_object* x_116; lean_object* x_117; lean_object* x_131; uint8_t x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; uint8_t x_147; lean_object* x_148; uint8_t x_201; 
x_86 = lean_nat_dec_eq(x_40, x_14);
x_94 = lean_nat_dec_lt(x_72, x_8);
x_95 = l_LeanRV64DExecutable_Functions_PPN__of__PTE(x_40, x_37);
if (x_21 == 0)
{
lean_object* x_232; lean_object* x_233; uint8_t x_234; 
x_232 = l_LeanRV64DExecutable_Functions___get__PTE__Flags__G(x_73);
x_233 = l_BitVec_ofNat(x_12, x_12);
x_234 = lean_nat_dec_eq(x_232, x_233);
lean_dec(x_233);
lean_dec(x_232);
x_201 = x_234;
goto block_231;
}
else
{
x_201 = x_21;
goto block_231;
}
block_93:
{
if (x_86 == 0)
{
lean_object* x_91; 
x_91 = lean_unsigned_to_nat(44u);
x_53 = x_90;
x_54 = x_87;
x_55 = x_88;
x_56 = x_89;
x_57 = x_91;
goto block_70;
}
else
{
lean_object* x_92; 
x_92 = lean_unsigned_to_nat(22u);
x_53 = x_90;
x_54 = x_87;
x_55 = x_88;
x_56 = x_89;
x_57 = x_92;
goto block_70;
}
}
block_113:
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_98 = l_BitVec_setWidth(x_97, x_3, x_95);
lean_dec(x_95);
x_99 = lean_int_sub(x_11, x_9);
x_100 = l_Int_toNat(x_99);
lean_dec(x_99);
x_101 = l_LeanRV64DExecutable_Functions_pt__walk(x_20, x_15, x_16, x_17, x_18, x_19, x_98, x_100, x_96, x_7, x_77);
lean_dec(x_98);
if (lean_obj_tag(x_101) == 0)
{
uint8_t x_102; 
x_102 = !lean_is_exclusive(x_101);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; 
x_103 = lean_ctor_get(x_101, 0);
x_104 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_101, 0, x_104);
return x_101;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_105 = lean_ctor_get(x_101, 0);
x_106 = lean_ctor_get(x_101, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_101);
x_107 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_107, 0, x_105);
x_108 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_106);
return x_108;
}
}
else
{
uint8_t x_109; 
x_109 = !lean_is_exclusive(x_101);
if (x_109 == 0)
{
return x_101;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_101, 0);
x_111 = lean_ctor_get(x_101, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_101);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
block_130:
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
lean_inc(x_117);
x_118 = lean_nat_to_int(x_117);
x_119 = lean_int_sub(x_118, x_9);
lean_dec(x_118);
x_120 = l_Int_toNat(x_119);
lean_dec(x_119);
x_121 = lean_int_mul(x_10, x_11);
x_122 = l_Int_toNat(x_121);
x_123 = lean_nat_sub(x_120, x_122);
lean_dec(x_122);
lean_dec(x_120);
x_124 = lean_nat_add(x_123, x_12);
lean_dec(x_123);
x_125 = lean_int_sub(x_121, x_9);
lean_dec(x_121);
x_126 = l_Int_toNat(x_125);
lean_dec(x_125);
x_127 = lean_nat_add(x_126, x_12);
lean_dec(x_126);
x_128 = lean_nat_add(x_124, x_127);
lean_dec(x_127);
lean_dec(x_124);
x_129 = l_BitVec_setWidth(x_117, x_128, x_95);
lean_dec(x_95);
lean_dec(x_128);
lean_dec(x_117);
x_87 = x_114;
x_88 = x_115;
x_89 = x_116;
x_90 = x_129;
goto block_93;
}
block_146:
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_136 = lean_nat_to_int(x_135);
x_137 = lean_int_sub(x_136, x_9);
lean_dec(x_136);
x_138 = l_Int_toNat(x_137);
lean_dec(x_137);
x_139 = l_Int_toNat(x_133);
x_140 = lean_int_sub(x_133, x_9);
lean_dec(x_133);
x_141 = l_Int_toNat(x_140);
lean_dec(x_140);
x_142 = lean_nat_add(x_141, x_12);
x_143 = l_BitVec_extractLsb___redArg(x_138, x_139, x_95);
lean_dec(x_95);
lean_dec(x_139);
lean_dec(x_138);
x_144 = l_BitVec_extractLsb___redArg(x_141, x_72, x_15);
lean_dec(x_15);
lean_dec(x_141);
x_145 = l_BitVec_append___redArg(x_142, x_143, x_144);
lean_dec(x_144);
lean_dec(x_143);
lean_dec(x_142);
x_87 = x_131;
x_88 = x_132;
x_89 = x_134;
x_90 = x_145;
goto block_93;
}
block_200:
{
lean_object* x_149; 
x_149 = l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg(x_16, x_17, x_18, x_19, x_73, x_148);
lean_dec(x_73);
lean_dec(x_16);
if (lean_obj_tag(x_149) == 0)
{
lean_object* x_150; 
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
if (lean_obj_tag(x_150) == 0)
{
if (x_94 == 0)
{
lean_dec(x_15);
if (x_86 == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
lean_dec(x_149);
x_152 = lean_ctor_get(x_150, 0);
lean_inc(x_152);
lean_dec(x_150);
x_153 = lean_unsigned_to_nat(44u);
x_114 = x_152;
x_115 = x_147;
x_116 = x_151;
x_117 = x_153;
goto block_130;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_149, 1);
lean_inc(x_154);
lean_dec(x_149);
x_155 = lean_ctor_get(x_150, 0);
lean_inc(x_155);
lean_dec(x_150);
x_156 = lean_unsigned_to_nat(22u);
x_114 = x_155;
x_115 = x_147;
x_116 = x_154;
x_117 = x_156;
goto block_130;
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_157 = lean_ctor_get(x_149, 1);
lean_inc(x_157);
lean_dec(x_149);
x_158 = lean_ctor_get(x_150, 0);
lean_inc(x_158);
lean_dec(x_150);
x_159 = lean_int_mul(x_10, x_11);
if (x_86 == 0)
{
lean_object* x_160; 
x_160 = lean_unsigned_to_nat(44u);
x_131 = x_158;
x_132 = x_147;
x_133 = x_159;
x_134 = x_157;
x_135 = x_160;
goto block_146;
}
else
{
lean_object* x_161; 
x_161 = lean_unsigned_to_nat(22u);
x_131 = x_158;
x_132 = x_147;
x_133 = x_159;
x_134 = x_157;
x_135 = x_161;
goto block_146;
}
}
}
else
{
uint8_t x_162; 
lean_dec(x_95);
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_27);
lean_dec(x_15);
lean_dec(x_8);
x_162 = !lean_is_exclusive(x_150);
if (x_162 == 0)
{
uint8_t x_163; 
x_163 = !lean_is_exclusive(x_149);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; uint8_t x_166; 
x_164 = lean_ctor_get(x_150, 0);
x_165 = lean_ctor_get(x_149, 0);
lean_dec(x_165);
x_166 = !lean_is_exclusive(x_164);
if (x_166 == 0)
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_167 = lean_ctor_get(x_164, 0);
x_168 = lean_ctor_get(x_164, 1);
x_169 = l_LeanRV64DExecutable_Functions_ext__get__ptw__error(x_168);
lean_dec(x_168);
lean_ctor_set(x_164, 1, x_167);
lean_ctor_set(x_164, 0, x_169);
x_170 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_170, 0, x_150);
lean_ctor_set(x_149, 0, x_170);
return x_149;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_171 = lean_ctor_get(x_164, 0);
x_172 = lean_ctor_get(x_164, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_164);
x_173 = l_LeanRV64DExecutable_Functions_ext__get__ptw__error(x_172);
lean_dec(x_172);
x_174 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_171);
lean_ctor_set(x_150, 0, x_174);
x_175 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_175, 0, x_150);
lean_ctor_set(x_149, 0, x_175);
return x_149;
}
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_176 = lean_ctor_get(x_150, 0);
x_177 = lean_ctor_get(x_149, 1);
lean_inc(x_177);
lean_dec(x_149);
x_178 = lean_ctor_get(x_176, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_176, 1);
lean_inc(x_179);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_180 = x_176;
} else {
 lean_dec_ref(x_176);
 x_180 = lean_box(0);
}
x_181 = l_LeanRV64DExecutable_Functions_ext__get__ptw__error(x_179);
lean_dec(x_179);
if (lean_is_scalar(x_180)) {
 x_182 = lean_alloc_ctor(0, 2, 0);
} else {
 x_182 = x_180;
}
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_178);
lean_ctor_set(x_150, 0, x_182);
x_183 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_183, 0, x_150);
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_177);
return x_184;
}
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_185 = lean_ctor_get(x_150, 0);
lean_inc(x_185);
lean_dec(x_150);
x_186 = lean_ctor_get(x_149, 1);
lean_inc(x_186);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 lean_ctor_release(x_149, 1);
 x_187 = x_149;
} else {
 lean_dec_ref(x_149);
 x_187 = lean_box(0);
}
x_188 = lean_ctor_get(x_185, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_185, 1);
lean_inc(x_189);
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_190 = x_185;
} else {
 lean_dec_ref(x_185);
 x_190 = lean_box(0);
}
x_191 = l_LeanRV64DExecutable_Functions_ext__get__ptw__error(x_189);
lean_dec(x_189);
if (lean_is_scalar(x_190)) {
 x_192 = lean_alloc_ctor(0, 2, 0);
} else {
 x_192 = x_190;
}
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set(x_192, 1, x_188);
x_193 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_193, 0, x_192);
x_194 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_194, 0, x_193);
if (lean_is_scalar(x_187)) {
 x_195 = lean_alloc_ctor(0, 2, 0);
} else {
 x_195 = x_187;
}
lean_ctor_set(x_195, 0, x_194);
lean_ctor_set(x_195, 1, x_186);
return x_195;
}
}
}
else
{
uint8_t x_196; 
lean_dec(x_95);
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_27);
lean_dec(x_15);
lean_dec(x_8);
x_196 = !lean_is_exclusive(x_149);
if (x_196 == 0)
{
return x_149;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_197 = lean_ctor_get(x_149, 0);
x_198 = lean_ctor_get(x_149, 1);
lean_inc(x_198);
lean_inc(x_197);
lean_dec(x_149);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_197);
lean_ctor_set(x_199, 1, x_198);
return x_199;
}
}
}
block_231:
{
uint8_t x_202; 
x_202 = l_LeanRV64DExecutable_Functions_pte__is__non__leaf(x_73);
if (x_202 == 0)
{
lean_dec(x_78);
lean_dec(x_20);
if (x_94 == 0)
{
lean_dec(x_7);
x_147 = x_201;
x_148 = x_77;
goto block_200;
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; uint8_t x_213; 
x_203 = lean_int_mul(x_10, x_11);
x_204 = lean_int_sub(x_203, x_9);
lean_dec(x_203);
x_205 = l_Int_toNat(x_204);
x_206 = lean_nat_add(x_205, x_12);
x_207 = l_BitVec_extractLsb___redArg(x_205, x_72, x_95);
lean_dec(x_205);
x_208 = l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__2;
x_209 = lean_int_sub(x_204, x_208);
lean_dec(x_204);
x_210 = lean_int_add(x_209, x_9);
lean_dec(x_209);
x_211 = l_Int_toNat(x_210);
lean_dec(x_210);
x_212 = l_BitVec_setWidth(x_211, x_206, x_72);
lean_dec(x_206);
lean_dec(x_211);
x_213 = lean_nat_dec_eq(x_207, x_212);
lean_dec(x_212);
lean_dec(x_207);
if (x_213 == 0)
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; 
lean_dec(x_95);
lean_dec(x_73);
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_27);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_8);
x_214 = l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__3;
x_215 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_7);
x_216 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_216, 0, x_215);
x_217 = l_Sail_SailME_throw___redArg(x_216, x_77);
x_218 = !lean_is_exclusive(x_217);
if (x_218 == 0)
{
lean_object* x_219; uint8_t x_220; 
x_219 = lean_ctor_get(x_217, 0);
x_220 = !lean_is_exclusive(x_219);
if (x_220 == 0)
{
return x_217;
}
else
{
lean_object* x_221; lean_object* x_222; 
x_221 = lean_ctor_get(x_219, 0);
lean_inc(x_221);
lean_dec(x_219);
x_222 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_217, 0, x_222);
return x_217;
}
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_223 = lean_ctor_get(x_217, 0);
x_224 = lean_ctor_get(x_217, 1);
lean_inc(x_224);
lean_inc(x_223);
lean_dec(x_217);
x_225 = lean_ctor_get(x_223, 0);
lean_inc(x_225);
if (lean_is_exclusive(x_223)) {
 lean_ctor_release(x_223, 0);
 x_226 = x_223;
} else {
 lean_dec_ref(x_223);
 x_226 = lean_box(0);
}
if (lean_is_scalar(x_226)) {
 x_227 = lean_alloc_ctor(0, 1, 0);
} else {
 x_227 = x_226;
}
lean_ctor_set(x_227, 0, x_225);
x_228 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_228, 0, x_227);
lean_ctor_set(x_228, 1, x_224);
return x_228;
}
}
else
{
lean_dec(x_7);
x_147 = x_201;
x_148 = x_77;
goto block_200;
}
}
}
else
{
lean_dec(x_73);
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_27);
lean_dec(x_8);
if (x_94 == 0)
{
lean_dec(x_95);
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
goto block_84;
}
else
{
lean_dec(x_78);
if (x_86 == 0)
{
lean_object* x_229; 
x_229 = lean_unsigned_to_nat(44u);
x_96 = x_201;
x_97 = x_229;
goto block_113;
}
else
{
lean_object* x_230; 
x_230 = lean_unsigned_to_nat(22u);
x_96 = x_201;
x_97 = x_230;
goto block_113;
}
}
}
}
}
else
{
lean_dec(x_73);
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_8);
goto block_84;
}
block_84:
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_79 = l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__1;
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_7);
x_81 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_81, 0, x_80);
x_82 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_82, 0, x_81);
if (lean_is_scalar(x_78)) {
 x_83 = lean_alloc_ctor(0, 2, 0);
} else {
 x_83 = x_78;
}
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_77);
return x_83;
}
}
else
{
uint8_t x_235; 
lean_dec(x_73);
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
x_235 = !lean_is_exclusive(x_75);
if (x_235 == 0)
{
return x_75;
}
else
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_236 = lean_ctor_get(x_75, 0);
x_237 = lean_ctor_get(x_75, 1);
lean_inc(x_237);
lean_inc(x_236);
lean_dec(x_75);
x_238 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_238, 0, x_236);
lean_ctor_set(x_238, 1, x_237);
return x_238;
}
}
block_52:
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_46 = l_BitVec_setWidth(x_40, x_45, x_37);
lean_dec(x_37);
lean_dec(x_40);
x_47 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_47, 0, x_43);
lean_ctor_set(x_47, 1, x_46);
lean_ctor_set(x_47, 2, x_27);
lean_ctor_set(x_47, 3, x_8);
lean_ctor_set_uint8(x_47, sizeof(void*)*4, x_42);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_41);
if (lean_is_scalar(x_38)) {
 x_49 = lean_alloc_ctor(0, 1, 0);
} else {
 x_49 = x_38;
}
lean_ctor_set(x_49, 0, x_48);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_49);
if (lean_is_scalar(x_36)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_36;
}
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_44);
return x_51;
}
block_70:
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_58 = lean_nat_to_int(x_57);
x_59 = lean_int_sub(x_58, x_9);
lean_dec(x_58);
x_60 = l_Int_toNat(x_59);
lean_dec(x_59);
x_61 = lean_int_mul(x_10, x_11);
x_62 = l_Int_toNat(x_61);
x_63 = lean_nat_sub(x_60, x_62);
lean_dec(x_62);
lean_dec(x_60);
x_64 = lean_nat_add(x_63, x_12);
lean_dec(x_63);
x_65 = lean_int_sub(x_61, x_9);
lean_dec(x_61);
x_66 = l_Int_toNat(x_65);
lean_dec(x_65);
x_67 = lean_nat_add(x_66, x_12);
lean_dec(x_66);
x_68 = lean_nat_add(x_64, x_67);
lean_dec(x_67);
lean_dec(x_64);
x_69 = l_BitVec_setWidth(x_68, x_3, x_53);
lean_dec(x_53);
lean_dec(x_68);
if (x_13 == 0)
{
x_41 = x_54;
x_42 = x_55;
x_43 = x_69;
x_44 = x_56;
x_45 = x_26;
goto block_52;
}
else
{
x_41 = x_54;
x_42 = x_55;
x_43 = x_69;
x_44 = x_56;
x_45 = x_14;
goto block_52;
}
}
}
else
{
uint8_t x_239; 
lean_dec(x_32);
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_8);
x_239 = !lean_is_exclusive(x_33);
if (x_239 == 0)
{
lean_object* x_240; uint8_t x_241; 
x_240 = lean_ctor_get(x_33, 0);
lean_dec(x_240);
x_241 = !lean_is_exclusive(x_34);
if (x_241 == 0)
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_242 = lean_ctor_get(x_34, 0);
lean_dec(x_242);
x_243 = l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__4;
x_244 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_244, 0, x_243);
lean_ctor_set(x_244, 1, x_7);
lean_ctor_set(x_34, 0, x_244);
x_245 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_245, 0, x_34);
lean_ctor_set(x_33, 0, x_245);
return x_33;
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
lean_dec(x_34);
x_246 = l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__4;
x_247 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_247, 0, x_246);
lean_ctor_set(x_247, 1, x_7);
x_248 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_248, 0, x_247);
x_249 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_33, 0, x_249);
return x_33;
}
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
x_250 = lean_ctor_get(x_33, 1);
lean_inc(x_250);
lean_dec(x_33);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 x_251 = x_34;
} else {
 lean_dec_ref(x_34);
 x_251 = lean_box(0);
}
x_252 = l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__4;
x_253 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_253, 0, x_252);
lean_ctor_set(x_253, 1, x_7);
if (lean_is_scalar(x_251)) {
 x_254 = lean_alloc_ctor(1, 1, 0);
} else {
 x_254 = x_251;
}
lean_ctor_set(x_254, 0, x_253);
x_255 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_255, 0, x_254);
x_256 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_256, 0, x_255);
lean_ctor_set(x_256, 1, x_250);
return x_256;
}
}
}
else
{
uint8_t x_257; 
lean_dec(x_32);
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
x_257 = !lean_is_exclusive(x_33);
if (x_257 == 0)
{
return x_33;
}
else
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; 
x_258 = lean_ctor_get(x_33, 0);
x_259 = lean_ctor_get(x_33, 1);
lean_inc(x_259);
lean_inc(x_258);
lean_dec(x_33);
x_260 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_260, 0, x_258);
lean_ctor_set(x_260, 1, x_259);
return x_260;
}
}
}
else
{
uint8_t x_261; 
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_261 = !lean_is_exclusive(x_23);
if (x_261 == 0)
{
return x_23;
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; 
x_262 = lean_ctor_get(x_23, 0);
x_263 = lean_ctor_get(x_23, 1);
lean_inc(x_263);
lean_inc(x_262);
lean_dec(x_23);
x_264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_264, 0, x_262);
lean_ctor_set(x_264, 1, x_263);
return x_264;
}
}
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_pt__walk___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("riscv_vmem.sail:103.36-103.37", 29, 29);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_pt__walk___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(64u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_pt__walk___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_LeanRV64DExecutable_Functions_pt__walk___closed__1;
x_2 = l_LeanRV64DExecutable_Functions_xlen;
x_3 = lean_int_dec_eq(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_pt__walk___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_pt__walk___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(9u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_pt__walk___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_pt__walk(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, uint8_t x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_61; 
x_12 = lean_unsigned_to_nat(32u);
x_13 = lean_nat_dec_eq(x_1, x_12);
if (x_13 == 0)
{
lean_object* x_75; 
x_75 = l_LeanRV64DExecutable_Functions_pt__walk___closed__4;
x_61 = x_75;
goto block_74;
}
else
{
lean_object* x_76; 
x_76 = l_LeanRV64DExecutable_Functions_pt__walk___closed__5;
x_61 = x_76;
goto block_74;
}
block_32:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_23 = l_LeanRV64DExecutable_Functions_pt__walk___closed__0;
x_24 = lean_box(x_22);
x_25 = lean_box(x_13);
x_26 = lean_box(x_4);
x_27 = lean_box(x_5);
x_28 = lean_box(x_6);
x_29 = lean_box(x_9);
x_30 = lean_alloc_closure((void*)(l_LeanRV64DExecutable_Functions_pt__walk___lam__0___boxed), 22, 21);
lean_closure_set(x_30, 0, x_24);
lean_closure_set(x_30, 1, x_23);
lean_closure_set(x_30, 2, x_16);
lean_closure_set(x_30, 3, x_17);
lean_closure_set(x_30, 4, x_15);
lean_closure_set(x_30, 5, x_18);
lean_closure_set(x_30, 6, x_10);
lean_closure_set(x_30, 7, x_8);
lean_closure_set(x_30, 8, x_20);
lean_closure_set(x_30, 9, x_21);
lean_closure_set(x_30, 10, x_14);
lean_closure_set(x_30, 11, x_19);
lean_closure_set(x_30, 12, x_25);
lean_closure_set(x_30, 13, x_12);
lean_closure_set(x_30, 14, x_2);
lean_closure_set(x_30, 15, x_3);
lean_closure_set(x_30, 16, x_26);
lean_closure_set(x_30, 17, x_27);
lean_closure_set(x_30, 18, x_28);
lean_closure_set(x_30, 19, x_1);
lean_closure_set(x_30, 20, x_29);
x_31 = l_Sail_SailME_run___redArg(x_30, x_11);
return x_31;
}
block_49:
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_42 = lean_nat_sub(x_37, x_36);
lean_dec(x_36);
lean_dec(x_37);
x_43 = lean_nat_add(x_42, x_38);
lean_dec(x_42);
x_44 = lean_nat_add(x_43, x_35);
lean_dec(x_43);
x_45 = lean_unsigned_to_nat(0u);
x_46 = l_BitVec_append___redArg(x_35, x_34, x_45);
lean_dec(x_34);
x_47 = l_BitVec_append___redArg(x_44, x_7, x_46);
lean_dec(x_46);
if (x_13 == 0)
{
uint8_t x_48; 
x_48 = l_LeanRV64DExecutable_Functions_pt__walk___closed__2;
x_14 = x_33;
x_15 = x_47;
x_16 = x_41;
x_17 = x_44;
x_18 = x_35;
x_19 = x_38;
x_20 = x_39;
x_21 = x_40;
x_22 = x_48;
goto block_32;
}
else
{
x_14 = x_33;
x_15 = x_47;
x_16 = x_41;
x_17 = x_44;
x_18 = x_35;
x_19 = x_38;
x_20 = x_39;
x_21 = x_40;
x_22 = x_13;
goto block_32;
}
}
block_60:
{
if (x_13 == 0)
{
lean_object* x_58; 
x_58 = lean_unsigned_to_nat(44u);
x_33 = x_50;
x_34 = x_54;
x_35 = x_57;
x_36 = x_56;
x_37 = x_55;
x_38 = x_51;
x_39 = x_52;
x_40 = x_53;
x_41 = x_58;
goto block_49;
}
else
{
lean_object* x_59; 
x_59 = lean_unsigned_to_nat(22u);
x_33 = x_50;
x_34 = x_54;
x_35 = x_57;
x_36 = x_56;
x_37 = x_55;
x_38 = x_51;
x_39 = x_52;
x_40 = x_53;
x_41 = x_59;
goto block_49;
}
}
block_74:
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_inc(x_8);
x_62 = lean_nat_to_int(x_8);
x_63 = lean_unsigned_to_nat(1u);
x_64 = l_LeanRV64DExecutable_Functions_pt__walk___closed__3;
x_65 = lean_int_add(x_62, x_64);
x_66 = lean_int_mul(x_65, x_61);
lean_dec(x_65);
x_67 = lean_int_sub(x_66, x_64);
lean_dec(x_66);
x_68 = l_Int_toNat(x_67);
lean_dec(x_67);
x_69 = lean_int_mul(x_62, x_61);
x_70 = l_Int_toNat(x_69);
lean_dec(x_69);
x_71 = l_BitVec_extractLsb___redArg(x_68, x_70, x_2);
if (x_13 == 0)
{
lean_object* x_72; 
x_72 = lean_unsigned_to_nat(3u);
x_50 = x_62;
x_51 = x_63;
x_52 = x_64;
x_53 = x_61;
x_54 = x_71;
x_55 = x_68;
x_56 = x_70;
x_57 = x_72;
goto block_60;
}
else
{
lean_object* x_73; 
x_73 = lean_unsigned_to_nat(2u);
x_50 = x_62;
x_51 = x_63;
x_52 = x_64;
x_53 = x_61;
x_54 = x_71;
x_55 = x_68;
x_56 = x_70;
x_57 = x_73;
goto block_60;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_pt__walk___lam__0___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
_start:
{
uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; 
x_23 = lean_unbox(x_1);
lean_dec(x_1);
x_24 = lean_unbox(x_13);
lean_dec(x_13);
x_25 = lean_unbox(x_17);
lean_dec(x_17);
x_26 = lean_unbox(x_18);
lean_dec(x_18);
x_27 = lean_unbox(x_19);
lean_dec(x_19);
x_28 = lean_unbox(x_21);
lean_dec(x_21);
x_29 = l_LeanRV64DExecutable_Functions_pt__walk___lam__0(x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_24, x_14, x_15, x_16, x_25, x_26, x_27, x_20, x_28, x_22);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_29;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_pt__walk___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_12 = lean_unbox(x_4);
lean_dec(x_4);
x_13 = lean_unbox(x_5);
lean_dec(x_5);
x_14 = lean_unbox(x_6);
lean_dec(x_6);
x_15 = lean_unbox(x_9);
lean_dec(x_9);
x_16 = l_LeanRV64DExecutable_Functions_pt__walk(x_1, x_2, x_3, x_12, x_13, x_14, x_7, x_8, x_15, x_10, x_11);
lean_dec(x_7);
return x_16;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_satp__to__asid(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(32u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(16u);
if (x_4 == 0)
{
x_6 = x_5;
goto block_11;
}
else
{
lean_object* x_12; 
x_12 = lean_unsigned_to_nat(9u);
x_6 = x_12;
goto block_11;
}
block_11:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_unsigned_to_nat(64u);
x_8 = l_BitVec_setWidth(x_1, x_7, x_2);
x_9 = l_LeanRV64DExecutable_Functions___get__Satp64__Asid(x_8);
lean_dec(x_8);
x_10 = l_BitVec_setWidth(x_5, x_6, x_9);
lean_dec(x_9);
return x_10;
}
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_unsigned_to_nat(9u);
if (x_4 == 0)
{
lean_object* x_19; 
x_19 = lean_unsigned_to_nat(16u);
x_14 = x_19;
goto block_18;
}
else
{
x_14 = x_13;
goto block_18;
}
block_18:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = l_BitVec_setWidth(x_1, x_3, x_2);
x_16 = l_LeanRV64DExecutable_Functions___get__Satp32__Asid(x_15);
lean_dec(x_15);
x_17 = l_BitVec_setWidth(x_13, x_14, x_16);
lean_dec(x_16);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_satp__to__asid___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_satp__to__asid(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_satp__to__ppn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(32u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(44u);
if (x_4 == 0)
{
x_6 = x_5;
goto block_11;
}
else
{
lean_object* x_12; 
x_12 = lean_unsigned_to_nat(22u);
x_6 = x_12;
goto block_11;
}
block_11:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_unsigned_to_nat(64u);
x_8 = l_BitVec_setWidth(x_1, x_7, x_2);
x_9 = l_LeanRV64DExecutable_Functions___get__Satp64__PPN(x_8);
lean_dec(x_8);
x_10 = l_BitVec_setWidth(x_5, x_6, x_9);
lean_dec(x_9);
return x_10;
}
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_unsigned_to_nat(22u);
if (x_4 == 0)
{
lean_object* x_19; 
x_19 = lean_unsigned_to_nat(44u);
x_14 = x_19;
goto block_18;
}
else
{
x_14 = x_13;
goto block_18;
}
block_18:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = l_BitVec_setWidth(x_1, x_3, x_2);
x_16 = l_LeanRV64DExecutable_Functions___get__Satp32__PPN(x_15);
lean_dec(x_15);
x_17 = l_BitVec_setWidth(x_13, x_14, x_16);
lean_dec(x_16);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_satp__to__ppn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_satp__to__ppn(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translationMode___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("riscv_vmem.sail", 15, 15);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translationMode___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(201u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translationMode___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("invalid translation mode in satp", 32, 32);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translationMode___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(3u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_translationMode___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_LeanRV64DExecutable_Functions_xlen;
x_2 = l_LeanRV64DExecutable_Functions_pt__walk___closed__1;
x_3 = lean_int_dec_le(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translationMode___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("riscv_vmem.sail:192.25-192.26", 29, 29);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translationMode___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(196u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translationMode___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("RV128 not supported", 19, 19);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translationMode(uint8_t x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; 
x_3 = 2;
x_4 = l_beqPrivilege____x40_LeanRV64DExecutable_Defs___hyg_4812_(x_1, x_3);
if (x_4 == 0)
{
uint8_t x_5; lean_object* x_6; 
x_5 = 87;
x_6 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_5, x_2);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_LeanRV64DExecutable_Functions___get__Mstatus__SXL(x_7);
lean_dec(x_7);
x_10 = l_LeanRV64DExecutable_Functions_architecture__backwards(x_9, x_8);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_25; 
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
x_25 = lean_unbox(x_11);
switch (x_25) {
case 0:
{
uint8_t x_26; lean_object* x_27; 
x_26 = 1;
x_27 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_26, x_12);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_unsigned_to_nat(0u);
x_32 = l_LeanRV64DExecutable_Functions_translationMode___closed__3;
x_33 = lean_unsigned_to_nat(31u);
x_34 = l_BitVec_extractLsb___redArg(x_33, x_31, x_28);
lean_dec(x_28);
x_35 = l_LeanRV64DExecutable_Functions___get__Satp32__Mode(x_34);
lean_dec(x_34);
x_36 = l_BitVec_append___redArg(x_30, x_32, x_35);
lean_dec(x_35);
x_14 = x_36;
x_15 = x_29;
goto block_24;
}
else
{
uint8_t x_37; 
lean_dec(x_13);
lean_dec(x_11);
x_37 = !lean_is_exclusive(x_27);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_27, 0);
lean_dec(x_38);
x_39 = lean_box(1);
lean_ctor_set(x_27, 0, x_39);
return x_27;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_27, 1);
lean_inc(x_40);
lean_dec(x_27);
x_41 = lean_box(1);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
}
case 1:
{
uint8_t x_43; lean_object* x_44; lean_object* x_45; 
x_43 = l_LeanRV64DExecutable_Functions_translationMode___closed__4;
x_44 = l_LeanRV64DExecutable_Functions_translationMode___closed__5;
x_45 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_dec__bits__1__forwards_spec__0___redArg(x_43, x_44, x_12);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; uint8_t x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = 1;
x_48 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_47, x_46);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = l_LeanRV64DExecutable_Functions___get__Satp64__Mode(x_49);
lean_dec(x_49);
x_14 = x_51;
x_15 = x_50;
goto block_24;
}
else
{
uint8_t x_52; 
lean_dec(x_13);
lean_dec(x_11);
x_52 = !lean_is_exclusive(x_48);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_48, 0);
lean_dec(x_53);
x_54 = lean_box(1);
lean_ctor_set(x_48, 0, x_54);
return x_48;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_48, 1);
lean_inc(x_55);
lean_dec(x_48);
x_56 = lean_box(1);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_13);
lean_dec(x_11);
x_58 = !lean_is_exclusive(x_45);
if (x_58 == 0)
{
return x_45;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_45, 0);
x_60 = lean_ctor_get(x_45, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_45);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
default: 
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
lean_dec(x_13);
lean_dec(x_11);
x_62 = l_LeanRV64DExecutable_Functions_translationMode___closed__0;
x_63 = l_LeanRV64DExecutable_Functions_translationMode___closed__6;
x_64 = l_LeanRV64DExecutable_Functions_translationMode___closed__7;
x_65 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_62, x_63, x_64, x_12);
x_66 = !lean_is_exclusive(x_65);
if (x_66 == 0)
{
return x_65;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_65, 0);
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_65);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
block_24:
{
uint8_t x_16; lean_object* x_17; 
x_16 = lean_unbox(x_11);
lean_dec(x_11);
x_17 = l_LeanRV64DExecutable_Functions_satpMode__of__bits(x_16, x_14);
lean_dec(x_14);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_13);
x_18 = l_LeanRV64DExecutable_Functions_translationMode___closed__0;
x_19 = l_LeanRV64DExecutable_Functions_translationMode___closed__1;
x_20 = l_LeanRV64DExecutable_Functions_translationMode___closed__2;
x_21 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_18, x_19, x_20, x_15);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_17, 0);
lean_inc(x_22);
lean_dec(x_17);
if (lean_is_scalar(x_13)) {
 x_23 = lean_alloc_ctor(0, 2, 0);
} else {
 x_23 = x_13;
}
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_15);
return x_23;
}
}
}
else
{
uint8_t x_70; 
x_70 = !lean_is_exclusive(x_10);
if (x_70 == 0)
{
return x_10;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_10, 0);
x_72 = lean_ctor_get(x_10, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_10);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
else
{
uint8_t x_74; 
x_74 = !lean_is_exclusive(x_6);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; 
x_75 = lean_ctor_get(x_6, 0);
lean_dec(x_75);
x_76 = lean_box(1);
lean_ctor_set(x_6, 0, x_76);
return x_6;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_6, 1);
lean_inc(x_77);
lean_dec(x_6);
x_78 = lean_box(1);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
return x_79;
}
}
}
else
{
uint8_t x_80; lean_object* x_81; lean_object* x_82; 
x_80 = 0;
x_81 = lean_box(x_80);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_2);
return x_82;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translationMode___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_LeanRV64DExecutable_Functions_translationMode(x_3, x_2);
return x_4;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__0() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 0;
x_2 = l_LeanRV64DExecutable_Functions_not(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(253u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("invalid physical address in TLB", 31, 31);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__4;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_LeanRV64DExecutable_Functions_ext__get__ptw__error(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__7;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_17; lean_object* x_104; uint8_t x_105; 
x_104 = lean_unsigned_to_nat(32u);
x_105 = lean_nat_dec_eq(x_1, x_104);
if (x_105 == 0)
{
lean_object* x_106; 
x_106 = lean_unsigned_to_nat(8u);
x_17 = x_106;
goto block_103;
}
else
{
lean_object* x_107; 
x_107 = lean_unsigned_to_nat(4u);
x_17 = x_107;
goto block_103;
}
block_16:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = l_LeanRV64DExecutable_Functions_tlb__get__ppn(x_1, x_8, x_2);
lean_dec(x_8);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_11);
return x_15;
}
block_103:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_inc(x_17);
x_18 = l_LeanRV64DExecutable_Functions_tlb__get__pte(x_17, x_8);
x_19 = lean_unsigned_to_nat(7u);
x_20 = lean_unsigned_to_nat(0u);
x_21 = l_BitVec_extractLsb___redArg(x_19, x_20, x_18);
x_22 = l_LeanRV64DExecutable_Functions_check__PTE__permission___redArg(x_3, x_4, x_5, x_6, x_21, x_9);
lean_dec(x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
lean_dec(x_23);
x_24 = !lean_is_exclusive(x_22);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_ctor_get(x_22, 1);
x_26 = lean_ctor_get(x_22, 0);
lean_dec(x_26);
x_27 = lean_box(0);
x_28 = lean_unsigned_to_nat(8u);
x_29 = lean_nat_mul(x_17, x_28);
x_30 = l_LeanRV64DExecutable_Functions_update__PTE__Bits(x_29, x_18, x_3);
lean_dec(x_18);
lean_dec(x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_free_object(x_22);
lean_dec(x_17);
x_10 = x_27;
x_11 = x_25;
goto block_16;
}
else
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__0;
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_free_object(x_22);
lean_inc(x_8);
x_33 = l_LeanRV64DExecutable_Functions_tlb__set__pte(x_17, x_8, x_31);
x_34 = l_LeanRV64DExecutable_Functions_write__TLB(x_7, x_33, x_25);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_ctor_get(x_8, 5);
lean_inc(x_36);
x_37 = l_LeanRV64DExecutable_Functions_write__pte(x_36, x_17, x_31, x_35);
lean_dec(x_31);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; 
lean_dec(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_10 = x_27;
x_11 = x_39;
goto block_16;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
lean_dec(x_38);
lean_dec(x_8);
lean_dec(x_2);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = l_LeanRV64DExecutable_Functions_translationMode___closed__0;
x_42 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__1;
x_43 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__2;
x_44 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_41, x_42, x_43, x_40);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
return x_44;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_44, 0);
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_44);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_8);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_37);
if (x_49 == 0)
{
return x_37;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_37, 0);
x_51 = lean_ctor_get(x_37, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_37);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_31);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_2);
x_53 = !lean_is_exclusive(x_34);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_34, 0);
lean_dec(x_54);
x_55 = lean_box(1);
lean_ctor_set(x_34, 0, x_55);
return x_34;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_34, 1);
lean_inc(x_56);
lean_dec(x_34);
x_57 = lean_box(1);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
}
else
{
lean_object* x_59; 
lean_dec(x_31);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_2);
x_59 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__5;
lean_ctor_set(x_22, 0, x_59);
return x_22;
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_60 = lean_ctor_get(x_22, 1);
lean_inc(x_60);
lean_dec(x_22);
x_61 = lean_box(0);
x_62 = lean_unsigned_to_nat(8u);
x_63 = lean_nat_mul(x_17, x_62);
x_64 = l_LeanRV64DExecutable_Functions_update__PTE__Bits(x_63, x_18, x_3);
lean_dec(x_18);
lean_dec(x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_dec(x_17);
x_10 = x_61;
x_11 = x_60;
goto block_16;
}
else
{
lean_object* x_65; uint8_t x_66; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
lean_dec(x_64);
x_66 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__0;
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
lean_inc(x_8);
x_67 = l_LeanRV64DExecutable_Functions_tlb__set__pte(x_17, x_8, x_65);
x_68 = l_LeanRV64DExecutable_Functions_write__TLB(x_7, x_67, x_60);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
lean_dec(x_68);
x_70 = lean_ctor_get(x_8, 5);
lean_inc(x_70);
x_71 = l_LeanRV64DExecutable_Functions_write__pte(x_70, x_17, x_65, x_69);
lean_dec(x_65);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; 
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; 
lean_dec(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_10 = x_61;
x_11 = x_73;
goto block_16;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_72);
lean_dec(x_8);
lean_dec(x_2);
x_74 = lean_ctor_get(x_71, 1);
lean_inc(x_74);
lean_dec(x_71);
x_75 = l_LeanRV64DExecutable_Functions_translationMode___closed__0;
x_76 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__1;
x_77 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__2;
x_78 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_75, x_76, x_77, x_74);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_81 = x_78;
} else {
 lean_dec_ref(x_78);
 x_81 = lean_box(0);
}
if (lean_is_scalar(x_81)) {
 x_82 = lean_alloc_ctor(1, 2, 0);
} else {
 x_82 = x_81;
}
lean_ctor_set(x_82, 0, x_79);
lean_ctor_set(x_82, 1, x_80);
return x_82;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_8);
lean_dec(x_2);
x_83 = lean_ctor_get(x_71, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_71, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_85 = x_71;
} else {
 lean_dec_ref(x_71);
 x_85 = lean_box(0);
}
if (lean_is_scalar(x_85)) {
 x_86 = lean_alloc_ctor(1, 2, 0);
} else {
 x_86 = x_85;
}
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_84);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_65);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_2);
x_87 = lean_ctor_get(x_68, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_88 = x_68;
} else {
 lean_dec_ref(x_68);
 x_88 = lean_box(0);
}
x_89 = lean_box(1);
if (lean_is_scalar(x_88)) {
 x_90 = lean_alloc_ctor(1, 2, 0);
} else {
 x_90 = x_88;
}
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_87);
return x_90;
}
}
else
{
lean_object* x_91; lean_object* x_92; 
lean_dec(x_65);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_2);
x_91 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__5;
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_60);
return x_92;
}
}
}
}
else
{
uint8_t x_93; 
lean_dec(x_23);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_2);
x_93 = !lean_is_exclusive(x_22);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; 
x_94 = lean_ctor_get(x_22, 0);
lean_dec(x_94);
x_95 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__8;
lean_ctor_set(x_22, 0, x_95);
return x_22;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_22, 1);
lean_inc(x_96);
lean_dec(x_22);
x_97 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__8;
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_96);
return x_98;
}
}
}
else
{
uint8_t x_99; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_2);
x_99 = !lean_is_exclusive(x_22);
if (x_99 == 0)
{
return x_22;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_22, 0);
x_101 = lean_ctor_get(x_22, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_22);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__hit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg(x_1, x_3, x_4, x_5, x_6, x_7, x_9, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_10 = lean_unbox(x_4);
lean_dec(x_4);
x_11 = lean_unbox(x_5);
lean_dec(x_5);
x_12 = lean_unbox(x_6);
lean_dec(x_6);
x_13 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg(x_1, x_2, x_3, x_10, x_11, x_12, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__hit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_unbox(x_5);
lean_dec(x_5);
x_13 = lean_unbox(x_6);
lean_dec(x_6);
x_14 = lean_unbox(x_7);
lean_dec(x_7);
x_15 = l_LeanRV64DExecutable_Functions_translate__TLB__hit(x_1, x_2, x_3, x_4, x_12, x_13, x_14, x_8, x_9, x_10, x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__miss(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, uint8_t x_7, uint8_t x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_128; uint8_t x_129; lean_object* x_130; lean_object* x_131; lean_object* x_167; 
x_128 = lean_unsigned_to_nat(32u);
x_129 = lean_nat_dec_eq(x_1, x_128);
if (x_129 == 0)
{
lean_object* x_171; uint8_t x_172; 
x_171 = lean_unsigned_to_nat(39u);
x_172 = lean_nat_dec_eq(x_1, x_171);
if (x_172 == 0)
{
lean_object* x_173; uint8_t x_174; 
x_173 = lean_unsigned_to_nat(48u);
x_174 = lean_nat_dec_eq(x_1, x_173);
if (x_174 == 0)
{
lean_object* x_175; 
x_175 = lean_unsigned_to_nat(4u);
x_167 = x_175;
goto block_170;
}
else
{
lean_object* x_176; 
x_176 = lean_unsigned_to_nat(3u);
x_167 = x_176;
goto block_170;
}
}
else
{
lean_object* x_177; 
x_177 = lean_unsigned_to_nat(2u);
x_167 = x_177;
goto block_170;
}
}
else
{
lean_object* x_178; 
x_178 = lean_unsigned_to_nat(1u);
x_167 = x_178;
goto block_170;
}
block_127:
{
lean_object* x_21; 
x_21 = l_LeanRV64DExecutable_Functions_update__PTE__Bits(x_20, x_12, x_5);
lean_dec(x_5);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
lean_dec(x_11);
x_22 = l_LeanRV64DExecutable_Functions_add__to__TLB(x_1, x_2, x_4, x_19, x_12, x_18, x_15, x_14, x_17);
lean_dec(x_12);
lean_dec(x_4);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_16);
x_26 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_22, 0, x_26);
return x_22;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_22, 1);
lean_inc(x_27);
lean_dec(x_22);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_19);
lean_ctor_set(x_28, 1, x_16);
x_29 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
else
{
uint8_t x_31; 
lean_dec(x_19);
lean_dec(x_16);
x_31 = !lean_is_exclusive(x_22);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_22, 0);
lean_dec(x_32);
x_33 = lean_box(1);
lean_ctor_set(x_22, 0, x_33);
return x_22;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_22, 1);
lean_inc(x_34);
lean_dec(x_22);
x_35 = lean_box(1);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_12);
x_37 = !lean_is_exclusive(x_21);
if (x_37 == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_ctor_get(x_21, 0);
x_39 = l_LeanRV64DExecutable_Functions_not(x_13);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_free_object(x_21);
x_40 = lean_unsigned_to_nat(8u);
x_41 = lean_nat_mul(x_11, x_40);
x_42 = l_BitVec_setWidth(x_20, x_41, x_38);
lean_dec(x_41);
lean_inc(x_18);
x_43 = l_LeanRV64DExecutable_Functions_write__pte(x_18, x_11, x_42, x_17);
lean_dec(x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; uint8_t x_46; 
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = !lean_is_exclusive(x_44);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_44, 0);
lean_dec(x_47);
x_48 = l_LeanRV64DExecutable_Functions_add__to__TLB(x_1, x_2, x_4, x_19, x_38, x_18, x_15, x_14, x_45);
lean_dec(x_38);
lean_dec(x_4);
if (lean_obj_tag(x_48) == 0)
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_48, 0);
lean_dec(x_50);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_19);
lean_ctor_set(x_51, 1, x_16);
lean_ctor_set(x_44, 0, x_51);
lean_ctor_set(x_48, 0, x_44);
return x_48;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_48, 1);
lean_inc(x_52);
lean_dec(x_48);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_19);
lean_ctor_set(x_53, 1, x_16);
lean_ctor_set(x_44, 0, x_53);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_44);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
else
{
uint8_t x_55; 
lean_free_object(x_44);
lean_dec(x_19);
lean_dec(x_16);
x_55 = !lean_is_exclusive(x_48);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_48, 0);
lean_dec(x_56);
x_57 = lean_box(1);
lean_ctor_set(x_48, 0, x_57);
return x_48;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_48, 1);
lean_inc(x_58);
lean_dec(x_48);
x_59 = lean_box(1);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
}
else
{
lean_object* x_61; 
lean_dec(x_44);
x_61 = l_LeanRV64DExecutable_Functions_add__to__TLB(x_1, x_2, x_4, x_19, x_38, x_18, x_15, x_14, x_45);
lean_dec(x_38);
lean_dec(x_4);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_63 = x_61;
} else {
 lean_dec_ref(x_61);
 x_63 = lean_box(0);
}
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_19);
lean_ctor_set(x_64, 1, x_16);
x_65 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_65, 0, x_64);
if (lean_is_scalar(x_63)) {
 x_66 = lean_alloc_ctor(0, 2, 0);
} else {
 x_66 = x_63;
}
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_62);
return x_66;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_19);
lean_dec(x_16);
x_67 = lean_ctor_get(x_61, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_68 = x_61;
} else {
 lean_dec_ref(x_61);
 x_68 = lean_box(0);
}
x_69 = lean_box(1);
if (lean_is_scalar(x_68)) {
 x_70 = lean_alloc_ctor(1, 2, 0);
} else {
 x_70 = x_68;
}
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_67);
return x_70;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_38);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_43);
if (x_71 == 0)
{
lean_object* x_72; uint8_t x_73; 
x_72 = lean_ctor_get(x_43, 0);
lean_dec(x_72);
x_73 = !lean_is_exclusive(x_44);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_44, 0);
lean_dec(x_74);
x_75 = l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__4;
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_16);
lean_ctor_set(x_44, 0, x_76);
return x_43;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_44);
x_77 = l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__4;
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_16);
x_79 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_43, 0, x_79);
return x_43;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_80 = lean_ctor_get(x_43, 1);
lean_inc(x_80);
lean_dec(x_43);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 x_81 = x_44;
} else {
 lean_dec_ref(x_44);
 x_81 = lean_box(0);
}
x_82 = l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__4;
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_16);
if (lean_is_scalar(x_81)) {
 x_84 = lean_alloc_ctor(1, 1, 0);
} else {
 x_84 = x_81;
}
lean_ctor_set(x_84, 0, x_83);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_80);
return x_85;
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_38);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_86 = !lean_is_exclusive(x_43);
if (x_86 == 0)
{
return x_43;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_43, 0);
x_88 = lean_ctor_get(x_43, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_43);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_38);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_90 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__3;
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_16);
lean_ctor_set(x_21, 0, x_91);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_21);
lean_ctor_set(x_92, 1, x_17);
return x_92;
}
}
else
{
lean_object* x_93; uint8_t x_94; 
x_93 = lean_ctor_get(x_21, 0);
lean_inc(x_93);
lean_dec(x_21);
x_94 = l_LeanRV64DExecutable_Functions_not(x_13);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_95 = lean_unsigned_to_nat(8u);
x_96 = lean_nat_mul(x_11, x_95);
x_97 = l_BitVec_setWidth(x_20, x_96, x_93);
lean_dec(x_96);
lean_inc(x_18);
x_98 = l_LeanRV64DExecutable_Functions_write__pte(x_18, x_11, x_97, x_17);
lean_dec(x_97);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
if (lean_obj_tag(x_99) == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 x_101 = x_99;
} else {
 lean_dec_ref(x_99);
 x_101 = lean_box(0);
}
x_102 = l_LeanRV64DExecutable_Functions_add__to__TLB(x_1, x_2, x_4, x_19, x_93, x_18, x_15, x_14, x_100);
lean_dec(x_93);
lean_dec(x_4);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_103 = lean_ctor_get(x_102, 1);
lean_inc(x_103);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_104 = x_102;
} else {
 lean_dec_ref(x_102);
 x_104 = lean_box(0);
}
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_19);
lean_ctor_set(x_105, 1, x_16);
if (lean_is_scalar(x_101)) {
 x_106 = lean_alloc_ctor(0, 1, 0);
} else {
 x_106 = x_101;
}
lean_ctor_set(x_106, 0, x_105);
if (lean_is_scalar(x_104)) {
 x_107 = lean_alloc_ctor(0, 2, 0);
} else {
 x_107 = x_104;
}
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_103);
return x_107;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_101);
lean_dec(x_19);
lean_dec(x_16);
x_108 = lean_ctor_get(x_102, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_109 = x_102;
} else {
 lean_dec_ref(x_102);
 x_109 = lean_box(0);
}
x_110 = lean_box(1);
if (lean_is_scalar(x_109)) {
 x_111 = lean_alloc_ctor(1, 2, 0);
} else {
 x_111 = x_109;
}
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_108);
return x_111;
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_93);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_112 = lean_ctor_get(x_98, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_113 = x_98;
} else {
 lean_dec_ref(x_98);
 x_113 = lean_box(0);
}
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 x_114 = x_99;
} else {
 lean_dec_ref(x_99);
 x_114 = lean_box(0);
}
x_115 = l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__4;
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_16);
if (lean_is_scalar(x_114)) {
 x_117 = lean_alloc_ctor(1, 1, 0);
} else {
 x_117 = x_114;
}
lean_ctor_set(x_117, 0, x_116);
if (lean_is_scalar(x_113)) {
 x_118 = lean_alloc_ctor(0, 2, 0);
} else {
 x_118 = x_113;
}
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_112);
return x_118;
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_93);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_119 = lean_ctor_get(x_98, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_98, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_121 = x_98;
} else {
 lean_dec_ref(x_98);
 x_121 = lean_box(0);
}
if (lean_is_scalar(x_121)) {
 x_122 = lean_alloc_ctor(1, 2, 0);
} else {
 x_122 = x_121;
}
lean_ctor_set(x_122, 0, x_119);
lean_ctor_set(x_122, 1, x_120);
return x_122;
}
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_93);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_123 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__3;
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_16);
x_125 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_125, 0, x_124);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_17);
return x_126;
}
}
}
}
block_166:
{
uint8_t x_132; lean_object* x_133; 
x_132 = 0;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_133 = l_LeanRV64DExecutable_Functions_pt__walk(x_1, x_4, x_5, x_6, x_7, x_8, x_3, x_130, x_132, x_9, x_10);
if (lean_obj_tag(x_133) == 0)
{
lean_object* x_134; 
x_134 = lean_ctor_get(x_133, 0);
lean_inc(x_134);
if (lean_obj_tag(x_134) == 0)
{
lean_object* x_135; lean_object* x_136; 
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
lean_dec(x_134);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
if (x_129 == 0)
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; lean_object* x_144; 
x_137 = lean_ctor_get(x_133, 1);
lean_inc(x_137);
lean_dec(x_133);
x_138 = lean_ctor_get(x_135, 1);
lean_inc(x_138);
lean_dec(x_135);
x_139 = lean_ctor_get(x_136, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_136, 1);
lean_inc(x_140);
x_141 = lean_ctor_get(x_136, 2);
lean_inc(x_141);
x_142 = lean_ctor_get(x_136, 3);
lean_inc(x_142);
x_143 = lean_ctor_get_uint8(x_136, sizeof(void*)*4);
lean_dec(x_136);
x_144 = lean_unsigned_to_nat(64u);
x_11 = x_131;
x_12 = x_140;
x_13 = x_132;
x_14 = x_143;
x_15 = x_142;
x_16 = x_138;
x_17 = x_137;
x_18 = x_141;
x_19 = x_139;
x_20 = x_144;
goto block_127;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; uint8_t x_151; 
x_145 = lean_ctor_get(x_133, 1);
lean_inc(x_145);
lean_dec(x_133);
x_146 = lean_ctor_get(x_135, 1);
lean_inc(x_146);
lean_dec(x_135);
x_147 = lean_ctor_get(x_136, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_136, 1);
lean_inc(x_148);
x_149 = lean_ctor_get(x_136, 2);
lean_inc(x_149);
x_150 = lean_ctor_get(x_136, 3);
lean_inc(x_150);
x_151 = lean_ctor_get_uint8(x_136, sizeof(void*)*4);
lean_dec(x_136);
x_11 = x_131;
x_12 = x_148;
x_13 = x_132;
x_14 = x_151;
x_15 = x_150;
x_16 = x_146;
x_17 = x_145;
x_18 = x_149;
x_19 = x_147;
x_20 = x_128;
goto block_127;
}
}
else
{
uint8_t x_152; 
lean_dec(x_131);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_152 = !lean_is_exclusive(x_133);
if (x_152 == 0)
{
lean_object* x_153; uint8_t x_154; 
x_153 = lean_ctor_get(x_133, 0);
lean_dec(x_153);
x_154 = !lean_is_exclusive(x_134);
if (x_154 == 0)
{
return x_133;
}
else
{
lean_object* x_155; lean_object* x_156; 
x_155 = lean_ctor_get(x_134, 0);
lean_inc(x_155);
lean_dec(x_134);
x_156 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set(x_133, 0, x_156);
return x_133;
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_157 = lean_ctor_get(x_133, 1);
lean_inc(x_157);
lean_dec(x_133);
x_158 = lean_ctor_get(x_134, 0);
lean_inc(x_158);
if (lean_is_exclusive(x_134)) {
 lean_ctor_release(x_134, 0);
 x_159 = x_134;
} else {
 lean_dec_ref(x_134);
 x_159 = lean_box(0);
}
if (lean_is_scalar(x_159)) {
 x_160 = lean_alloc_ctor(1, 1, 0);
} else {
 x_160 = x_159;
}
lean_ctor_set(x_160, 0, x_158);
x_161 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_161, 0, x_160);
lean_ctor_set(x_161, 1, x_157);
return x_161;
}
}
}
else
{
uint8_t x_162; 
lean_dec(x_131);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_162 = !lean_is_exclusive(x_133);
if (x_162 == 0)
{
return x_133;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_163 = lean_ctor_get(x_133, 0);
x_164 = lean_ctor_get(x_133, 1);
lean_inc(x_164);
lean_inc(x_163);
lean_dec(x_133);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
return x_165;
}
}
}
block_170:
{
if (x_129 == 0)
{
lean_object* x_168; 
x_168 = lean_unsigned_to_nat(8u);
x_130 = x_167;
x_131 = x_168;
goto block_166;
}
else
{
lean_object* x_169; 
x_169 = lean_unsigned_to_nat(4u);
x_130 = x_167;
x_131 = x_169;
goto block_166;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translate__TLB__miss___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_11 = lean_unbox(x_6);
lean_dec(x_6);
x_12 = lean_unbox(x_7);
lean_dec(x_7);
x_13 = lean_unbox(x_8);
lean_dec(x_8);
x_14 = l_LeanRV64DExecutable_Functions_translate__TLB__miss(x_1, x_2, x_3, x_4, x_5, x_11, x_12, x_13, x_9, x_10);
lean_dec(x_3);
return x_14;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Pattern match failure at unknown location", 41, 41);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(39u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(48u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(57u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_satp__mode__width__forwards(uint8_t x_1, lean_object* x_2) {
_start:
{
switch (x_1) {
case 0:
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_3 = 0;
x_4 = l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__0;
x_5 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_dec__bits__1__forwards_spec__0___redArg(x_3, x_4, x_2);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
lean_dec(x_7);
x_8 = lean_box(0);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_8);
return x_5;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_5);
if (x_12 == 0)
{
return x_5;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_5, 0);
x_14 = lean_ctor_get(x_5, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_5);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
case 1:
{
lean_object* x_16; lean_object* x_17; 
x_16 = l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__1;
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_2);
return x_17;
}
case 2:
{
lean_object* x_18; lean_object* x_19; 
x_18 = l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__2;
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_2);
return x_19;
}
case 3:
{
lean_object* x_20; lean_object* x_21; 
x_20 = l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__3;
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_2);
return x_21;
}
default: 
{
lean_object* x_22; lean_object* x_23; 
x_22 = l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__4;
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_2);
return x_23;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_LeanRV64DExecutable_Functions_satp__mode__width__forwards(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_satp__mode__width__backwards(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(32u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(39u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(48u);
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = 4;
return x_8;
}
else
{
uint8_t x_9; 
x_9 = 3;
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = 2;
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_satp__mode__width__backwards___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_LeanRV64DExecutable_Functions_satp__mode__width__backwards(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_satp__mode__width__forwards__matches(uint8_t x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(x_1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
uint8_t x_4; 
lean_dec(x_2);
x_4 = 1;
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_satp__mode__width__forwards__matches___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_LeanRV64DExecutable_Functions_satp__mode__width__forwards__matches(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_satp__mode__width__backwards__matches(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(32u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(39u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(48u);
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(57u);
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
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_satp__mode__width__backwards__matches___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_LeanRV64DExecutable_Functions_satp__mode__width__backwards__matches(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translate(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, uint8_t x_7, uint8_t x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_4);
x_11 = l_LeanRV64DExecutable_Functions_lookup__TLB(x_1, x_2, x_4, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_LeanRV64DExecutable_Functions_translate__TLB__miss(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_9);
lean_dec(x_2);
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg(x_1, x_4, x_5, x_6, x_7, x_8, x_17, x_18, x_16);
lean_dec(x_17);
lean_dec(x_5);
lean_dec(x_1);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_11);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_11, 0);
lean_dec(x_21);
x_22 = lean_box(1);
lean_ctor_set(x_11, 0, x_22);
return x_11;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_11, 1);
lean_inc(x_23);
lean_dec(x_11);
x_24 = lean_box(1);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translate___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_11 = lean_unbox(x_6);
lean_dec(x_6);
x_12 = lean_unbox(x_7);
lean_dec(x_7);
x_13 = lean_unbox(x_8);
lean_dec(x_8);
x_14 = l_LeanRV64DExecutable_Functions_translate(x_1, x_2, x_3, x_4, x_5, x_11, x_12, x_13, x_9, x_10);
lean_dec(x_3);
return x_14;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_get__satp___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("riscv_vmem.sail:350.30-350.31", 29, 29);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_get__satp___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_nat_mul(x_1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__satp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_20; uint8_t x_21; 
x_10 = lean_unsigned_to_nat(32u);
x_20 = lean_nat_dec_eq(x_1, x_10);
if (x_20 == 0)
{
uint8_t x_55; 
x_55 = l_LeanRV64DExecutable_Functions_pt__walk___closed__2;
x_21 = x_55;
goto block_54;
}
else
{
x_21 = x_20;
goto block_54;
}
block_9:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_BitVec_setWidth(x_4, x_6, x_3);
lean_dec(x_3);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
block_19:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = l_BitVec_extractLsb___redArg(x_14, x_12, x_11);
lean_dec(x_11);
x_17 = l_BitVec_setWidth(x_10, x_15, x_16);
lean_dec(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_13);
return x_18;
}
block_54:
{
lean_object* x_22; lean_object* x_23; 
x_22 = l_LeanRV64DExecutable_Functions_get__satp___closed__0;
x_23 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_dec__bits__1__forwards_spec__0___redArg(x_21, x_22, x_2);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; uint8_t x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = 1;
x_26 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_25, x_24);
if (lean_obj_tag(x_26) == 0)
{
if (x_20 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_25, x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_LeanRV64DExecutable_Functions_get__satp___closed__1;
if (x_20 == 0)
{
lean_object* x_32; 
x_32 = lean_unsigned_to_nat(64u);
x_3 = x_29;
x_4 = x_31;
x_5 = x_30;
x_6 = x_32;
goto block_9;
}
else
{
x_3 = x_29;
x_4 = x_31;
x_5 = x_30;
x_6 = x_10;
goto block_9;
}
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_28);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_28, 0);
lean_dec(x_34);
x_35 = lean_box(1);
lean_ctor_set(x_28, 0, x_35);
return x_28;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_28, 1);
lean_inc(x_36);
lean_dec(x_28);
x_37 = lean_box(1);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_26, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_26, 1);
lean_inc(x_40);
lean_dec(x_26);
x_41 = lean_unsigned_to_nat(31u);
x_42 = lean_unsigned_to_nat(0u);
if (x_20 == 0)
{
lean_object* x_43; 
x_43 = lean_unsigned_to_nat(64u);
x_11 = x_39;
x_12 = x_42;
x_13 = x_40;
x_14 = x_41;
x_15 = x_43;
goto block_19;
}
else
{
x_11 = x_39;
x_12 = x_42;
x_13 = x_40;
x_14 = x_41;
x_15 = x_10;
goto block_19;
}
}
}
else
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_26);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_26, 0);
lean_dec(x_45);
x_46 = lean_box(1);
lean_ctor_set(x_26, 0, x_46);
return x_26;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_26, 1);
lean_inc(x_47);
lean_dec(x_26);
x_48 = lean_box(1);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
}
else
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_23);
if (x_50 == 0)
{
return x_23;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_23, 0);
x_52 = lean_ctor_get(x_23, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_23);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__satp___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_get__satp(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translateAddr___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("riscv_vmem.sail:376.36-376.37", 29, 29);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translateAddr___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translateAddr___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_translateAddr___closed__1;
x_2 = l_Int_toNat(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translateAddr___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LeanRV64DExecutable_Functions_translateAddr___closed__2;
x_2 = l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__0;
x_3 = l_Int_pow(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translateAddr___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translateAddr___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LeanRV64DExecutable_Functions_translateAddr___closed__4;
x_2 = l_LeanRV64DExecutable_Functions_translateAddr___closed__3;
x_3 = lean_int_mul(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translateAddr___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_translateAddr___closed__5;
x_2 = l_Int_toNat(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translateAddr___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_translateAddr___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_BitVec_ofNat(x_1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translateAddr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_25; lean_object* x_26; 
x_25 = 87;
x_26 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_25, x_3);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = 90;
x_30 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_29, x_28);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_unbox(x_31);
lean_dec(x_31);
x_34 = l_LeanRV64DExecutable_Functions_effectivePrivilege(x_2, x_27, x_33, x_32);
lean_dec(x_27);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_unbox(x_35);
x_38 = l_LeanRV64DExecutable_Functions_translationMode(x_37, x_36);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; uint8_t x_43; uint8_t x_44; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = lean_ctor_get(x_38, 1);
x_42 = 0;
x_43 = lean_unbox(x_40);
x_44 = l_beqSATPMode____x40_LeanRV64DExecutable_Defs___hyg_17659_(x_43, x_42);
if (x_44 == 0)
{
uint8_t x_45; lean_object* x_46; 
lean_free_object(x_38);
x_45 = lean_unbox(x_40);
lean_dec(x_40);
x_46 = l_LeanRV64DExecutable_Functions_satp__mode__width__forwards(x_45, x_41);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; lean_object* x_59; uint8_t x_60; uint8_t x_61; lean_object* x_62; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; lean_object* x_125; uint8_t x_126; uint8_t x_127; lean_object* x_128; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; uint8_t x_138; lean_object* x_139; uint8_t x_140; lean_object* x_141; uint8_t x_142; uint8_t x_143; lean_object* x_144; lean_object* x_150; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = l_Int_toNat(x_47);
x_150 = l_LeanRV64DExecutable_Functions_get__satp(x_49, x_48);
if (lean_obj_tag(x_150) == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_159; lean_object* x_160; uint8_t x_161; uint8_t x_162; lean_object* x_163; uint8_t x_170; lean_object* x_259; uint8_t x_260; 
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_150, 1);
lean_inc(x_152);
lean_dec(x_150);
x_153 = lean_unsigned_to_nat(32u);
x_259 = l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__1;
x_260 = lean_int_dec_eq(x_47, x_259);
if (x_260 == 0)
{
uint8_t x_261; 
x_261 = l_LeanRV64DExecutable_Functions_pt__walk___closed__2;
x_170 = x_261;
goto block_258;
}
else
{
x_170 = x_260;
goto block_258;
}
block_169:
{
lean_object* x_164; lean_object* x_165; uint8_t x_166; 
x_164 = l_LeanRV64DExecutable_Functions_satp__to__asid(x_163, x_151);
x_165 = l_LeanRV64DExecutable_Functions_satp__to__ppn(x_163, x_151);
lean_dec(x_151);
x_166 = lean_nat_dec_eq(x_163, x_153);
if (x_166 == 0)
{
lean_object* x_167; 
x_167 = lean_unsigned_to_nat(16u);
x_132 = x_154;
x_133 = x_164;
x_134 = x_155;
x_135 = x_165;
x_136 = x_156;
x_137 = x_157;
x_138 = x_166;
x_139 = x_158;
x_140 = x_159;
x_141 = x_160;
x_142 = x_162;
x_143 = x_161;
x_144 = x_167;
goto block_149;
}
else
{
lean_object* x_168; 
x_168 = lean_unsigned_to_nat(9u);
x_132 = x_154;
x_133 = x_164;
x_134 = x_155;
x_135 = x_165;
x_136 = x_156;
x_137 = x_157;
x_138 = x_166;
x_139 = x_158;
x_140 = x_159;
x_141 = x_160;
x_142 = x_162;
x_143 = x_161;
x_144 = x_168;
goto block_149;
}
}
block_258:
{
lean_object* x_171; lean_object* x_172; 
x_171 = l_LeanRV64DExecutable_Functions_translateAddr___closed__0;
x_172 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_dec__bits__1__forwards_spec__0___redArg(x_170, x_171, x_152);
if (lean_obj_tag(x_172) == 0)
{
uint8_t x_173; 
x_173 = !lean_is_exclusive(x_172);
if (x_173 == 0)
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; uint8_t x_185; 
x_174 = lean_ctor_get(x_172, 1);
x_175 = lean_ctor_get(x_172, 0);
lean_dec(x_175);
x_176 = lean_unsigned_to_nat(1u);
x_177 = l_LeanRV64DExecutable_Functions_pt__walk___closed__3;
x_178 = lean_int_sub(x_47, x_177);
lean_dec(x_47);
x_179 = l_Int_toNat(x_178);
lean_dec(x_178);
x_180 = lean_unsigned_to_nat(0u);
x_181 = l_BitVec_extractLsb___redArg(x_179, x_180, x_1);
x_182 = lean_nat_add(x_179, x_176);
x_183 = l_LeanRV64DExecutable_Functions_translateAddr___closed__6;
lean_inc(x_181);
x_184 = l_BitVec_signExtend(x_182, x_183, x_181);
lean_dec(x_182);
x_185 = lean_nat_dec_eq(x_1, x_184);
lean_dec(x_184);
if (x_185 == 0)
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
lean_dec(x_181);
lean_dec(x_179);
lean_dec(x_151);
lean_dec(x_49);
lean_dec(x_35);
x_186 = lean_box(0);
x_187 = l_LeanRV64DExecutable_Functions_translateAddr___closed__7;
x_188 = l_LeanRV64DExecutable_Functions_translationException(x_2, x_187);
lean_dec(x_2);
x_189 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_186);
x_190 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_172, 0, x_190);
return x_172;
}
else
{
lean_object* x_191; 
lean_free_object(x_172);
x_191 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_25, x_174);
if (lean_obj_tag(x_191) == 0)
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_191, 1);
lean_inc(x_193);
lean_dec(x_191);
x_194 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_25, x_193);
if (lean_obj_tag(x_194) == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; uint8_t x_199; lean_object* x_200; uint8_t x_201; uint8_t x_202; 
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_194, 1);
lean_inc(x_196);
lean_dec(x_194);
x_197 = l_LeanRV64DExecutable_Functions___get__Mstatus__MXR(x_192);
lean_dec(x_192);
x_198 = l_LeanRV64DExecutable_Functions_translateAddr___closed__8;
x_199 = lean_nat_dec_eq(x_197, x_198);
lean_dec(x_197);
x_200 = l_LeanRV64DExecutable_Functions___get__Mstatus__SUM(x_195);
lean_dec(x_195);
x_201 = lean_nat_dec_eq(x_200, x_198);
lean_dec(x_200);
x_202 = lean_nat_dec_eq(x_49, x_153);
if (x_202 == 0)
{
lean_object* x_203; 
x_203 = lean_unsigned_to_nat(64u);
x_154 = x_180;
x_155 = x_196;
x_156 = x_181;
x_157 = x_176;
x_158 = x_179;
x_159 = x_199;
x_160 = x_177;
x_161 = x_201;
x_162 = x_202;
x_163 = x_203;
goto block_169;
}
else
{
x_154 = x_180;
x_155 = x_196;
x_156 = x_181;
x_157 = x_176;
x_158 = x_179;
x_159 = x_199;
x_160 = x_177;
x_161 = x_201;
x_162 = x_202;
x_163 = x_153;
goto block_169;
}
}
else
{
uint8_t x_204; 
lean_dec(x_192);
lean_dec(x_181);
lean_dec(x_179);
lean_dec(x_151);
lean_dec(x_49);
lean_dec(x_35);
lean_dec(x_2);
x_204 = !lean_is_exclusive(x_194);
if (x_204 == 0)
{
lean_object* x_205; lean_object* x_206; 
x_205 = lean_ctor_get(x_194, 0);
lean_dec(x_205);
x_206 = lean_box(1);
lean_ctor_set(x_194, 0, x_206);
return x_194;
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; 
x_207 = lean_ctor_get(x_194, 1);
lean_inc(x_207);
lean_dec(x_194);
x_208 = lean_box(1);
x_209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_209, 0, x_208);
lean_ctor_set(x_209, 1, x_207);
return x_209;
}
}
}
else
{
uint8_t x_210; 
lean_dec(x_181);
lean_dec(x_179);
lean_dec(x_151);
lean_dec(x_49);
lean_dec(x_35);
lean_dec(x_2);
x_210 = !lean_is_exclusive(x_191);
if (x_210 == 0)
{
lean_object* x_211; lean_object* x_212; 
x_211 = lean_ctor_get(x_191, 0);
lean_dec(x_211);
x_212 = lean_box(1);
lean_ctor_set(x_191, 0, x_212);
return x_191;
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_213 = lean_ctor_get(x_191, 1);
lean_inc(x_213);
lean_dec(x_191);
x_214 = lean_box(1);
x_215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_213);
return x_215;
}
}
}
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; uint8_t x_226; 
x_216 = lean_ctor_get(x_172, 1);
lean_inc(x_216);
lean_dec(x_172);
x_217 = lean_unsigned_to_nat(1u);
x_218 = l_LeanRV64DExecutable_Functions_pt__walk___closed__3;
x_219 = lean_int_sub(x_47, x_218);
lean_dec(x_47);
x_220 = l_Int_toNat(x_219);
lean_dec(x_219);
x_221 = lean_unsigned_to_nat(0u);
x_222 = l_BitVec_extractLsb___redArg(x_220, x_221, x_1);
x_223 = lean_nat_add(x_220, x_217);
x_224 = l_LeanRV64DExecutable_Functions_translateAddr___closed__6;
lean_inc(x_222);
x_225 = l_BitVec_signExtend(x_223, x_224, x_222);
lean_dec(x_223);
x_226 = lean_nat_dec_eq(x_1, x_225);
lean_dec(x_225);
if (x_226 == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; 
lean_dec(x_222);
lean_dec(x_220);
lean_dec(x_151);
lean_dec(x_49);
lean_dec(x_35);
x_227 = lean_box(0);
x_228 = l_LeanRV64DExecutable_Functions_translateAddr___closed__7;
x_229 = l_LeanRV64DExecutable_Functions_translationException(x_2, x_228);
lean_dec(x_2);
x_230 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_230, 0, x_229);
lean_ctor_set(x_230, 1, x_227);
x_231 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_231, 0, x_230);
x_232 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_232, 0, x_231);
lean_ctor_set(x_232, 1, x_216);
return x_232;
}
else
{
lean_object* x_233; 
x_233 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_25, x_216);
if (lean_obj_tag(x_233) == 0)
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_234 = lean_ctor_get(x_233, 0);
lean_inc(x_234);
x_235 = lean_ctor_get(x_233, 1);
lean_inc(x_235);
lean_dec(x_233);
x_236 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_25, x_235);
if (lean_obj_tag(x_236) == 0)
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; uint8_t x_241; lean_object* x_242; uint8_t x_243; uint8_t x_244; 
x_237 = lean_ctor_get(x_236, 0);
lean_inc(x_237);
x_238 = lean_ctor_get(x_236, 1);
lean_inc(x_238);
lean_dec(x_236);
x_239 = l_LeanRV64DExecutable_Functions___get__Mstatus__MXR(x_234);
lean_dec(x_234);
x_240 = l_LeanRV64DExecutable_Functions_translateAddr___closed__8;
x_241 = lean_nat_dec_eq(x_239, x_240);
lean_dec(x_239);
x_242 = l_LeanRV64DExecutable_Functions___get__Mstatus__SUM(x_237);
lean_dec(x_237);
x_243 = lean_nat_dec_eq(x_242, x_240);
lean_dec(x_242);
x_244 = lean_nat_dec_eq(x_49, x_153);
if (x_244 == 0)
{
lean_object* x_245; 
x_245 = lean_unsigned_to_nat(64u);
x_154 = x_221;
x_155 = x_238;
x_156 = x_222;
x_157 = x_217;
x_158 = x_220;
x_159 = x_241;
x_160 = x_218;
x_161 = x_243;
x_162 = x_244;
x_163 = x_245;
goto block_169;
}
else
{
x_154 = x_221;
x_155 = x_238;
x_156 = x_222;
x_157 = x_217;
x_158 = x_220;
x_159 = x_241;
x_160 = x_218;
x_161 = x_243;
x_162 = x_244;
x_163 = x_153;
goto block_169;
}
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
lean_dec(x_234);
lean_dec(x_222);
lean_dec(x_220);
lean_dec(x_151);
lean_dec(x_49);
lean_dec(x_35);
lean_dec(x_2);
x_246 = lean_ctor_get(x_236, 1);
lean_inc(x_246);
if (lean_is_exclusive(x_236)) {
 lean_ctor_release(x_236, 0);
 lean_ctor_release(x_236, 1);
 x_247 = x_236;
} else {
 lean_dec_ref(x_236);
 x_247 = lean_box(0);
}
x_248 = lean_box(1);
if (lean_is_scalar(x_247)) {
 x_249 = lean_alloc_ctor(1, 2, 0);
} else {
 x_249 = x_247;
}
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_246);
return x_249;
}
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
lean_dec(x_222);
lean_dec(x_220);
lean_dec(x_151);
lean_dec(x_49);
lean_dec(x_35);
lean_dec(x_2);
x_250 = lean_ctor_get(x_233, 1);
lean_inc(x_250);
if (lean_is_exclusive(x_233)) {
 lean_ctor_release(x_233, 0);
 lean_ctor_release(x_233, 1);
 x_251 = x_233;
} else {
 lean_dec_ref(x_233);
 x_251 = lean_box(0);
}
x_252 = lean_box(1);
if (lean_is_scalar(x_251)) {
 x_253 = lean_alloc_ctor(1, 2, 0);
} else {
 x_253 = x_251;
}
lean_ctor_set(x_253, 0, x_252);
lean_ctor_set(x_253, 1, x_250);
return x_253;
}
}
}
}
else
{
uint8_t x_254; 
lean_dec(x_151);
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_35);
lean_dec(x_2);
x_254 = !lean_is_exclusive(x_172);
if (x_254 == 0)
{
return x_172;
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_255 = lean_ctor_get(x_172, 0);
x_256 = lean_ctor_get(x_172, 1);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_172);
x_257 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_257, 0, x_255);
lean_ctor_set(x_257, 1, x_256);
return x_257;
}
}
}
}
else
{
uint8_t x_262; 
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_35);
lean_dec(x_2);
x_262 = !lean_is_exclusive(x_150);
if (x_262 == 0)
{
return x_150;
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; 
x_263 = lean_ctor_get(x_150, 0);
x_264 = lean_ctor_get(x_150, 1);
lean_inc(x_264);
lean_inc(x_263);
lean_dec(x_150);
x_265 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_265, 0, x_263);
lean_ctor_set(x_265, 1, x_264);
return x_265;
}
}
block_116:
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; lean_object* x_72; 
x_63 = l_BitVec_setWidth(x_56, x_62, x_52);
lean_dec(x_52);
x_64 = lean_unsigned_to_nat(12u);
x_65 = lean_nat_sub(x_55, x_64);
x_66 = lean_nat_add(x_65, x_54);
lean_dec(x_65);
x_67 = lean_nat_sub(x_49, x_64);
x_68 = l_BitVec_extractLsb___redArg(x_55, x_64, x_53);
lean_dec(x_53);
lean_dec(x_55);
x_69 = l_BitVec_setWidth(x_66, x_67, x_68);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
x_70 = lean_box(0);
x_71 = lean_unbox(x_35);
lean_dec(x_35);
lean_inc(x_2);
x_72 = l_LeanRV64DExecutable_Functions_translate(x_49, x_57, x_63, x_69, x_2, x_71, x_58, x_61, x_70, x_51);
lean_dec(x_63);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; 
lean_dec(x_2);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
lean_dec(x_73);
if (x_60 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_75 = lean_ctor_get(x_72, 1);
lean_inc(x_75);
lean_dec(x_72);
x_76 = lean_ctor_get(x_74, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_74, 1);
lean_inc(x_77);
lean_dec(x_74);
x_78 = lean_unsigned_to_nat(44u);
x_4 = x_76;
x_5 = x_50;
x_6 = x_54;
x_7 = x_75;
x_8 = x_64;
x_9 = x_59;
x_10 = x_77;
x_11 = x_78;
goto block_24;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_79 = lean_ctor_get(x_72, 1);
lean_inc(x_79);
lean_dec(x_72);
x_80 = lean_ctor_get(x_74, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_74, 1);
lean_inc(x_81);
lean_dec(x_74);
x_82 = lean_unsigned_to_nat(22u);
x_4 = x_80;
x_5 = x_50;
x_6 = x_54;
x_7 = x_79;
x_8 = x_64;
x_9 = x_59;
x_10 = x_81;
x_11 = x_82;
goto block_24;
}
}
else
{
uint8_t x_83; 
lean_dec(x_59);
x_83 = !lean_is_exclusive(x_73);
if (x_83 == 0)
{
uint8_t x_84; 
x_84 = !lean_is_exclusive(x_72);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_85 = lean_ctor_get(x_73, 0);
x_86 = lean_ctor_get(x_72, 0);
lean_dec(x_86);
x_87 = !lean_is_exclusive(x_85);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; 
x_88 = lean_ctor_get(x_85, 0);
x_89 = l_LeanRV64DExecutable_Functions_translationException(x_2, x_88);
lean_dec(x_2);
lean_ctor_set(x_85, 0, x_89);
return x_72;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_90 = lean_ctor_get(x_85, 0);
x_91 = lean_ctor_get(x_85, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_85);
x_92 = l_LeanRV64DExecutable_Functions_translationException(x_2, x_90);
lean_dec(x_2);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_91);
lean_ctor_set(x_73, 0, x_93);
return x_72;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_94 = lean_ctor_get(x_73, 0);
x_95 = lean_ctor_get(x_72, 1);
lean_inc(x_95);
lean_dec(x_72);
x_96 = lean_ctor_get(x_94, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_94, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_94)) {
 lean_ctor_release(x_94, 0);
 lean_ctor_release(x_94, 1);
 x_98 = x_94;
} else {
 lean_dec_ref(x_94);
 x_98 = lean_box(0);
}
x_99 = l_LeanRV64DExecutable_Functions_translationException(x_2, x_96);
lean_dec(x_2);
if (lean_is_scalar(x_98)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_98;
}
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_97);
lean_ctor_set(x_73, 0, x_100);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_73);
lean_ctor_set(x_101, 1, x_95);
return x_101;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_102 = lean_ctor_get(x_73, 0);
lean_inc(x_102);
lean_dec(x_73);
x_103 = lean_ctor_get(x_72, 1);
lean_inc(x_103);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_104 = x_72;
} else {
 lean_dec_ref(x_72);
 x_104 = lean_box(0);
}
x_105 = lean_ctor_get(x_102, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_102, 1);
lean_inc(x_106);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_107 = x_102;
} else {
 lean_dec_ref(x_102);
 x_107 = lean_box(0);
}
x_108 = l_LeanRV64DExecutable_Functions_translationException(x_2, x_105);
lean_dec(x_2);
if (lean_is_scalar(x_107)) {
 x_109 = lean_alloc_ctor(0, 2, 0);
} else {
 x_109 = x_107;
}
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_106);
x_110 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_110, 0, x_109);
if (lean_is_scalar(x_104)) {
 x_111 = lean_alloc_ctor(0, 2, 0);
} else {
 x_111 = x_104;
}
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_103);
return x_111;
}
}
}
else
{
uint8_t x_112; 
lean_dec(x_59);
lean_dec(x_2);
x_112 = !lean_is_exclusive(x_72);
if (x_112 == 0)
{
return x_72;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_72, 0);
x_114 = lean_ctor_get(x_72, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_72);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
}
}
block_131:
{
if (x_127 == 0)
{
lean_object* x_129; 
x_129 = lean_unsigned_to_nat(44u);
x_50 = x_117;
x_51 = x_118;
x_52 = x_119;
x_53 = x_120;
x_54 = x_121;
x_55 = x_122;
x_56 = x_128;
x_57 = x_123;
x_58 = x_124;
x_59 = x_125;
x_60 = x_127;
x_61 = x_126;
x_62 = x_129;
goto block_116;
}
else
{
lean_object* x_130; 
x_130 = lean_unsigned_to_nat(22u);
x_50 = x_117;
x_51 = x_118;
x_52 = x_119;
x_53 = x_120;
x_54 = x_121;
x_55 = x_122;
x_56 = x_128;
x_57 = x_123;
x_58 = x_124;
x_59 = x_125;
x_60 = x_127;
x_61 = x_126;
x_62 = x_130;
goto block_116;
}
}
block_149:
{
lean_object* x_145; lean_object* x_146; 
x_145 = lean_unsigned_to_nat(16u);
x_146 = l_BitVec_setWidth(x_144, x_145, x_133);
lean_dec(x_133);
if (x_138 == 0)
{
lean_object* x_147; 
x_147 = lean_unsigned_to_nat(44u);
x_117 = x_132;
x_118 = x_134;
x_119 = x_135;
x_120 = x_136;
x_121 = x_137;
x_122 = x_139;
x_123 = x_146;
x_124 = x_140;
x_125 = x_141;
x_126 = x_143;
x_127 = x_142;
x_128 = x_147;
goto block_131;
}
else
{
lean_object* x_148; 
x_148 = lean_unsigned_to_nat(22u);
x_117 = x_132;
x_118 = x_134;
x_119 = x_135;
x_120 = x_136;
x_121 = x_137;
x_122 = x_139;
x_123 = x_146;
x_124 = x_140;
x_125 = x_141;
x_126 = x_143;
x_127 = x_142;
x_128 = x_148;
goto block_131;
}
}
}
else
{
uint8_t x_266; 
lean_dec(x_35);
lean_dec(x_2);
x_266 = !lean_is_exclusive(x_46);
if (x_266 == 0)
{
return x_46;
}
else
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; 
x_267 = lean_ctor_get(x_46, 0);
x_268 = lean_ctor_get(x_46, 1);
lean_inc(x_268);
lean_inc(x_267);
lean_dec(x_46);
x_269 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_269, 0, x_267);
lean_ctor_set(x_269, 1, x_268);
return x_269;
}
}
}
else
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
lean_dec(x_40);
lean_dec(x_35);
lean_dec(x_2);
x_270 = l_LeanRV64DExecutable_Functions_get__satp___closed__1;
x_271 = lean_unsigned_to_nat(64u);
x_272 = l_BitVec_setWidth(x_270, x_271, x_1);
x_273 = lean_box(0);
x_274 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_274, 0, x_272);
lean_ctor_set(x_274, 1, x_273);
x_275 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_275, 0, x_274);
lean_ctor_set(x_38, 0, x_275);
return x_38;
}
}
else
{
lean_object* x_276; lean_object* x_277; uint8_t x_278; uint8_t x_279; uint8_t x_280; 
x_276 = lean_ctor_get(x_38, 0);
x_277 = lean_ctor_get(x_38, 1);
lean_inc(x_277);
lean_inc(x_276);
lean_dec(x_38);
x_278 = 0;
x_279 = lean_unbox(x_276);
x_280 = l_beqSATPMode____x40_LeanRV64DExecutable_Defs___hyg_17659_(x_279, x_278);
if (x_280 == 0)
{
uint8_t x_281; lean_object* x_282; 
x_281 = lean_unbox(x_276);
lean_dec(x_276);
x_282 = l_LeanRV64DExecutable_Functions_satp__mode__width__forwards(x_281, x_277);
if (lean_obj_tag(x_282) == 0)
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; uint8_t x_294; lean_object* x_295; uint8_t x_296; uint8_t x_297; lean_object* x_298; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; uint8_t x_342; lean_object* x_343; uint8_t x_344; uint8_t x_345; lean_object* x_346; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; uint8_t x_356; lean_object* x_357; uint8_t x_358; lean_object* x_359; uint8_t x_360; uint8_t x_361; lean_object* x_362; lean_object* x_368; 
x_283 = lean_ctor_get(x_282, 0);
lean_inc(x_283);
x_284 = lean_ctor_get(x_282, 1);
lean_inc(x_284);
lean_dec(x_282);
x_285 = l_Int_toNat(x_283);
x_368 = l_LeanRV64DExecutable_Functions_get__satp(x_285, x_284);
if (lean_obj_tag(x_368) == 0)
{
lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; uint8_t x_377; lean_object* x_378; uint8_t x_379; uint8_t x_380; lean_object* x_381; uint8_t x_388; lean_object* x_435; uint8_t x_436; 
x_369 = lean_ctor_get(x_368, 0);
lean_inc(x_369);
x_370 = lean_ctor_get(x_368, 1);
lean_inc(x_370);
lean_dec(x_368);
x_371 = lean_unsigned_to_nat(32u);
x_435 = l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__1;
x_436 = lean_int_dec_eq(x_283, x_435);
if (x_436 == 0)
{
uint8_t x_437; 
x_437 = l_LeanRV64DExecutable_Functions_pt__walk___closed__2;
x_388 = x_437;
goto block_434;
}
else
{
x_388 = x_436;
goto block_434;
}
block_387:
{
lean_object* x_382; lean_object* x_383; uint8_t x_384; 
x_382 = l_LeanRV64DExecutable_Functions_satp__to__asid(x_381, x_369);
x_383 = l_LeanRV64DExecutable_Functions_satp__to__ppn(x_381, x_369);
lean_dec(x_369);
x_384 = lean_nat_dec_eq(x_381, x_371);
if (x_384 == 0)
{
lean_object* x_385; 
x_385 = lean_unsigned_to_nat(16u);
x_350 = x_372;
x_351 = x_382;
x_352 = x_373;
x_353 = x_383;
x_354 = x_374;
x_355 = x_375;
x_356 = x_384;
x_357 = x_376;
x_358 = x_377;
x_359 = x_378;
x_360 = x_380;
x_361 = x_379;
x_362 = x_385;
goto block_367;
}
else
{
lean_object* x_386; 
x_386 = lean_unsigned_to_nat(9u);
x_350 = x_372;
x_351 = x_382;
x_352 = x_373;
x_353 = x_383;
x_354 = x_374;
x_355 = x_375;
x_356 = x_384;
x_357 = x_376;
x_358 = x_377;
x_359 = x_378;
x_360 = x_380;
x_361 = x_379;
x_362 = x_386;
goto block_367;
}
}
block_434:
{
lean_object* x_389; lean_object* x_390; 
x_389 = l_LeanRV64DExecutable_Functions_translateAddr___closed__0;
x_390 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_dec__bits__1__forwards_spec__0___redArg(x_388, x_389, x_370);
if (lean_obj_tag(x_390) == 0)
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; uint8_t x_402; 
x_391 = lean_ctor_get(x_390, 1);
lean_inc(x_391);
if (lean_is_exclusive(x_390)) {
 lean_ctor_release(x_390, 0);
 lean_ctor_release(x_390, 1);
 x_392 = x_390;
} else {
 lean_dec_ref(x_390);
 x_392 = lean_box(0);
}
x_393 = lean_unsigned_to_nat(1u);
x_394 = l_LeanRV64DExecutable_Functions_pt__walk___closed__3;
x_395 = lean_int_sub(x_283, x_394);
lean_dec(x_283);
x_396 = l_Int_toNat(x_395);
lean_dec(x_395);
x_397 = lean_unsigned_to_nat(0u);
x_398 = l_BitVec_extractLsb___redArg(x_396, x_397, x_1);
x_399 = lean_nat_add(x_396, x_393);
x_400 = l_LeanRV64DExecutable_Functions_translateAddr___closed__6;
lean_inc(x_398);
x_401 = l_BitVec_signExtend(x_399, x_400, x_398);
lean_dec(x_399);
x_402 = lean_nat_dec_eq(x_1, x_401);
lean_dec(x_401);
if (x_402 == 0)
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; 
lean_dec(x_398);
lean_dec(x_396);
lean_dec(x_369);
lean_dec(x_285);
lean_dec(x_35);
x_403 = lean_box(0);
x_404 = l_LeanRV64DExecutable_Functions_translateAddr___closed__7;
x_405 = l_LeanRV64DExecutable_Functions_translationException(x_2, x_404);
lean_dec(x_2);
x_406 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_406, 0, x_405);
lean_ctor_set(x_406, 1, x_403);
x_407 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_407, 0, x_406);
if (lean_is_scalar(x_392)) {
 x_408 = lean_alloc_ctor(0, 2, 0);
} else {
 x_408 = x_392;
}
lean_ctor_set(x_408, 0, x_407);
lean_ctor_set(x_408, 1, x_391);
return x_408;
}
else
{
lean_object* x_409; 
lean_dec(x_392);
x_409 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_25, x_391);
if (lean_obj_tag(x_409) == 0)
{
lean_object* x_410; lean_object* x_411; lean_object* x_412; 
x_410 = lean_ctor_get(x_409, 0);
lean_inc(x_410);
x_411 = lean_ctor_get(x_409, 1);
lean_inc(x_411);
lean_dec(x_409);
x_412 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_25, x_411);
if (lean_obj_tag(x_412) == 0)
{
lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; uint8_t x_417; lean_object* x_418; uint8_t x_419; uint8_t x_420; 
x_413 = lean_ctor_get(x_412, 0);
lean_inc(x_413);
x_414 = lean_ctor_get(x_412, 1);
lean_inc(x_414);
lean_dec(x_412);
x_415 = l_LeanRV64DExecutable_Functions___get__Mstatus__MXR(x_410);
lean_dec(x_410);
x_416 = l_LeanRV64DExecutable_Functions_translateAddr___closed__8;
x_417 = lean_nat_dec_eq(x_415, x_416);
lean_dec(x_415);
x_418 = l_LeanRV64DExecutable_Functions___get__Mstatus__SUM(x_413);
lean_dec(x_413);
x_419 = lean_nat_dec_eq(x_418, x_416);
lean_dec(x_418);
x_420 = lean_nat_dec_eq(x_285, x_371);
if (x_420 == 0)
{
lean_object* x_421; 
x_421 = lean_unsigned_to_nat(64u);
x_372 = x_397;
x_373 = x_414;
x_374 = x_398;
x_375 = x_393;
x_376 = x_396;
x_377 = x_417;
x_378 = x_394;
x_379 = x_419;
x_380 = x_420;
x_381 = x_421;
goto block_387;
}
else
{
x_372 = x_397;
x_373 = x_414;
x_374 = x_398;
x_375 = x_393;
x_376 = x_396;
x_377 = x_417;
x_378 = x_394;
x_379 = x_419;
x_380 = x_420;
x_381 = x_371;
goto block_387;
}
}
else
{
lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; 
lean_dec(x_410);
lean_dec(x_398);
lean_dec(x_396);
lean_dec(x_369);
lean_dec(x_285);
lean_dec(x_35);
lean_dec(x_2);
x_422 = lean_ctor_get(x_412, 1);
lean_inc(x_422);
if (lean_is_exclusive(x_412)) {
 lean_ctor_release(x_412, 0);
 lean_ctor_release(x_412, 1);
 x_423 = x_412;
} else {
 lean_dec_ref(x_412);
 x_423 = lean_box(0);
}
x_424 = lean_box(1);
if (lean_is_scalar(x_423)) {
 x_425 = lean_alloc_ctor(1, 2, 0);
} else {
 x_425 = x_423;
}
lean_ctor_set(x_425, 0, x_424);
lean_ctor_set(x_425, 1, x_422);
return x_425;
}
}
else
{
lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; 
lean_dec(x_398);
lean_dec(x_396);
lean_dec(x_369);
lean_dec(x_285);
lean_dec(x_35);
lean_dec(x_2);
x_426 = lean_ctor_get(x_409, 1);
lean_inc(x_426);
if (lean_is_exclusive(x_409)) {
 lean_ctor_release(x_409, 0);
 lean_ctor_release(x_409, 1);
 x_427 = x_409;
} else {
 lean_dec_ref(x_409);
 x_427 = lean_box(0);
}
x_428 = lean_box(1);
if (lean_is_scalar(x_427)) {
 x_429 = lean_alloc_ctor(1, 2, 0);
} else {
 x_429 = x_427;
}
lean_ctor_set(x_429, 0, x_428);
lean_ctor_set(x_429, 1, x_426);
return x_429;
}
}
}
else
{
lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; 
lean_dec(x_369);
lean_dec(x_285);
lean_dec(x_283);
lean_dec(x_35);
lean_dec(x_2);
x_430 = lean_ctor_get(x_390, 0);
lean_inc(x_430);
x_431 = lean_ctor_get(x_390, 1);
lean_inc(x_431);
if (lean_is_exclusive(x_390)) {
 lean_ctor_release(x_390, 0);
 lean_ctor_release(x_390, 1);
 x_432 = x_390;
} else {
 lean_dec_ref(x_390);
 x_432 = lean_box(0);
}
if (lean_is_scalar(x_432)) {
 x_433 = lean_alloc_ctor(1, 2, 0);
} else {
 x_433 = x_432;
}
lean_ctor_set(x_433, 0, x_430);
lean_ctor_set(x_433, 1, x_431);
return x_433;
}
}
}
else
{
lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; 
lean_dec(x_285);
lean_dec(x_283);
lean_dec(x_35);
lean_dec(x_2);
x_438 = lean_ctor_get(x_368, 0);
lean_inc(x_438);
x_439 = lean_ctor_get(x_368, 1);
lean_inc(x_439);
if (lean_is_exclusive(x_368)) {
 lean_ctor_release(x_368, 0);
 lean_ctor_release(x_368, 1);
 x_440 = x_368;
} else {
 lean_dec_ref(x_368);
 x_440 = lean_box(0);
}
if (lean_is_scalar(x_440)) {
 x_441 = lean_alloc_ctor(1, 2, 0);
} else {
 x_441 = x_440;
}
lean_ctor_set(x_441, 0, x_438);
lean_ctor_set(x_441, 1, x_439);
return x_441;
}
block_334:
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; uint8_t x_307; lean_object* x_308; 
x_299 = l_BitVec_setWidth(x_292, x_298, x_288);
lean_dec(x_288);
x_300 = lean_unsigned_to_nat(12u);
x_301 = lean_nat_sub(x_291, x_300);
x_302 = lean_nat_add(x_301, x_290);
lean_dec(x_301);
x_303 = lean_nat_sub(x_285, x_300);
x_304 = l_BitVec_extractLsb___redArg(x_291, x_300, x_289);
lean_dec(x_289);
lean_dec(x_291);
x_305 = l_BitVec_setWidth(x_302, x_303, x_304);
lean_dec(x_304);
lean_dec(x_303);
lean_dec(x_302);
x_306 = lean_box(0);
x_307 = lean_unbox(x_35);
lean_dec(x_35);
lean_inc(x_2);
x_308 = l_LeanRV64DExecutable_Functions_translate(x_285, x_293, x_299, x_305, x_2, x_307, x_294, x_297, x_306, x_287);
lean_dec(x_299);
if (lean_obj_tag(x_308) == 0)
{
lean_object* x_309; 
x_309 = lean_ctor_get(x_308, 0);
lean_inc(x_309);
if (lean_obj_tag(x_309) == 0)
{
lean_object* x_310; 
lean_dec(x_2);
x_310 = lean_ctor_get(x_309, 0);
lean_inc(x_310);
lean_dec(x_309);
if (x_296 == 0)
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; 
x_311 = lean_ctor_get(x_308, 1);
lean_inc(x_311);
lean_dec(x_308);
x_312 = lean_ctor_get(x_310, 0);
lean_inc(x_312);
x_313 = lean_ctor_get(x_310, 1);
lean_inc(x_313);
lean_dec(x_310);
x_314 = lean_unsigned_to_nat(44u);
x_4 = x_312;
x_5 = x_286;
x_6 = x_290;
x_7 = x_311;
x_8 = x_300;
x_9 = x_295;
x_10 = x_313;
x_11 = x_314;
goto block_24;
}
else
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; 
x_315 = lean_ctor_get(x_308, 1);
lean_inc(x_315);
lean_dec(x_308);
x_316 = lean_ctor_get(x_310, 0);
lean_inc(x_316);
x_317 = lean_ctor_get(x_310, 1);
lean_inc(x_317);
lean_dec(x_310);
x_318 = lean_unsigned_to_nat(22u);
x_4 = x_316;
x_5 = x_286;
x_6 = x_290;
x_7 = x_315;
x_8 = x_300;
x_9 = x_295;
x_10 = x_317;
x_11 = x_318;
goto block_24;
}
}
else
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; 
lean_dec(x_295);
x_319 = lean_ctor_get(x_309, 0);
lean_inc(x_319);
if (lean_is_exclusive(x_309)) {
 lean_ctor_release(x_309, 0);
 x_320 = x_309;
} else {
 lean_dec_ref(x_309);
 x_320 = lean_box(0);
}
x_321 = lean_ctor_get(x_308, 1);
lean_inc(x_321);
if (lean_is_exclusive(x_308)) {
 lean_ctor_release(x_308, 0);
 lean_ctor_release(x_308, 1);
 x_322 = x_308;
} else {
 lean_dec_ref(x_308);
 x_322 = lean_box(0);
}
x_323 = lean_ctor_get(x_319, 0);
lean_inc(x_323);
x_324 = lean_ctor_get(x_319, 1);
lean_inc(x_324);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 x_325 = x_319;
} else {
 lean_dec_ref(x_319);
 x_325 = lean_box(0);
}
x_326 = l_LeanRV64DExecutable_Functions_translationException(x_2, x_323);
lean_dec(x_2);
if (lean_is_scalar(x_325)) {
 x_327 = lean_alloc_ctor(0, 2, 0);
} else {
 x_327 = x_325;
}
lean_ctor_set(x_327, 0, x_326);
lean_ctor_set(x_327, 1, x_324);
if (lean_is_scalar(x_320)) {
 x_328 = lean_alloc_ctor(1, 1, 0);
} else {
 x_328 = x_320;
}
lean_ctor_set(x_328, 0, x_327);
if (lean_is_scalar(x_322)) {
 x_329 = lean_alloc_ctor(0, 2, 0);
} else {
 x_329 = x_322;
}
lean_ctor_set(x_329, 0, x_328);
lean_ctor_set(x_329, 1, x_321);
return x_329;
}
}
else
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; 
lean_dec(x_295);
lean_dec(x_2);
x_330 = lean_ctor_get(x_308, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_308, 1);
lean_inc(x_331);
if (lean_is_exclusive(x_308)) {
 lean_ctor_release(x_308, 0);
 lean_ctor_release(x_308, 1);
 x_332 = x_308;
} else {
 lean_dec_ref(x_308);
 x_332 = lean_box(0);
}
if (lean_is_scalar(x_332)) {
 x_333 = lean_alloc_ctor(1, 2, 0);
} else {
 x_333 = x_332;
}
lean_ctor_set(x_333, 0, x_330);
lean_ctor_set(x_333, 1, x_331);
return x_333;
}
}
block_349:
{
if (x_345 == 0)
{
lean_object* x_347; 
x_347 = lean_unsigned_to_nat(44u);
x_286 = x_335;
x_287 = x_336;
x_288 = x_337;
x_289 = x_338;
x_290 = x_339;
x_291 = x_340;
x_292 = x_346;
x_293 = x_341;
x_294 = x_342;
x_295 = x_343;
x_296 = x_345;
x_297 = x_344;
x_298 = x_347;
goto block_334;
}
else
{
lean_object* x_348; 
x_348 = lean_unsigned_to_nat(22u);
x_286 = x_335;
x_287 = x_336;
x_288 = x_337;
x_289 = x_338;
x_290 = x_339;
x_291 = x_340;
x_292 = x_346;
x_293 = x_341;
x_294 = x_342;
x_295 = x_343;
x_296 = x_345;
x_297 = x_344;
x_298 = x_348;
goto block_334;
}
}
block_367:
{
lean_object* x_363; lean_object* x_364; 
x_363 = lean_unsigned_to_nat(16u);
x_364 = l_BitVec_setWidth(x_362, x_363, x_351);
lean_dec(x_351);
if (x_356 == 0)
{
lean_object* x_365; 
x_365 = lean_unsigned_to_nat(44u);
x_335 = x_350;
x_336 = x_352;
x_337 = x_353;
x_338 = x_354;
x_339 = x_355;
x_340 = x_357;
x_341 = x_364;
x_342 = x_358;
x_343 = x_359;
x_344 = x_361;
x_345 = x_360;
x_346 = x_365;
goto block_349;
}
else
{
lean_object* x_366; 
x_366 = lean_unsigned_to_nat(22u);
x_335 = x_350;
x_336 = x_352;
x_337 = x_353;
x_338 = x_354;
x_339 = x_355;
x_340 = x_357;
x_341 = x_364;
x_342 = x_358;
x_343 = x_359;
x_344 = x_361;
x_345 = x_360;
x_346 = x_366;
goto block_349;
}
}
}
else
{
lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; 
lean_dec(x_35);
lean_dec(x_2);
x_442 = lean_ctor_get(x_282, 0);
lean_inc(x_442);
x_443 = lean_ctor_get(x_282, 1);
lean_inc(x_443);
if (lean_is_exclusive(x_282)) {
 lean_ctor_release(x_282, 0);
 lean_ctor_release(x_282, 1);
 x_444 = x_282;
} else {
 lean_dec_ref(x_282);
 x_444 = lean_box(0);
}
if (lean_is_scalar(x_444)) {
 x_445 = lean_alloc_ctor(1, 2, 0);
} else {
 x_445 = x_444;
}
lean_ctor_set(x_445, 0, x_442);
lean_ctor_set(x_445, 1, x_443);
return x_445;
}
}
else
{
lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; 
lean_dec(x_276);
lean_dec(x_35);
lean_dec(x_2);
x_446 = l_LeanRV64DExecutable_Functions_get__satp___closed__1;
x_447 = lean_unsigned_to_nat(64u);
x_448 = l_BitVec_setWidth(x_446, x_447, x_1);
x_449 = lean_box(0);
x_450 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_450, 0, x_448);
lean_ctor_set(x_450, 1, x_449);
x_451 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_451, 0, x_450);
x_452 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_452, 0, x_451);
lean_ctor_set(x_452, 1, x_277);
return x_452;
}
}
}
else
{
uint8_t x_453; 
lean_dec(x_35);
lean_dec(x_2);
x_453 = !lean_is_exclusive(x_38);
if (x_453 == 0)
{
return x_38;
}
else
{
lean_object* x_454; lean_object* x_455; lean_object* x_456; 
x_454 = lean_ctor_get(x_38, 0);
x_455 = lean_ctor_get(x_38, 1);
lean_inc(x_455);
lean_inc(x_454);
lean_dec(x_38);
x_456 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_456, 0, x_454);
lean_ctor_set(x_456, 1, x_455);
return x_456;
}
}
}
else
{
uint8_t x_457; 
lean_dec(x_2);
x_457 = !lean_is_exclusive(x_34);
if (x_457 == 0)
{
return x_34;
}
else
{
lean_object* x_458; lean_object* x_459; lean_object* x_460; 
x_458 = lean_ctor_get(x_34, 0);
x_459 = lean_ctor_get(x_34, 1);
lean_inc(x_459);
lean_inc(x_458);
lean_dec(x_34);
x_460 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_460, 0, x_458);
lean_ctor_set(x_460, 1, x_459);
return x_460;
}
}
}
else
{
uint8_t x_461; 
lean_dec(x_27);
lean_dec(x_2);
x_461 = !lean_is_exclusive(x_30);
if (x_461 == 0)
{
lean_object* x_462; lean_object* x_463; 
x_462 = lean_ctor_get(x_30, 0);
lean_dec(x_462);
x_463 = lean_box(1);
lean_ctor_set(x_30, 0, x_463);
return x_30;
}
else
{
lean_object* x_464; lean_object* x_465; lean_object* x_466; 
x_464 = lean_ctor_get(x_30, 1);
lean_inc(x_464);
lean_dec(x_30);
x_465 = lean_box(1);
x_466 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_466, 0, x_465);
lean_ctor_set(x_466, 1, x_464);
return x_466;
}
}
}
else
{
uint8_t x_467; 
lean_dec(x_2);
x_467 = !lean_is_exclusive(x_26);
if (x_467 == 0)
{
lean_object* x_468; lean_object* x_469; 
x_468 = lean_ctor_get(x_26, 0);
lean_dec(x_468);
x_469 = lean_box(1);
lean_ctor_set(x_26, 0, x_469);
return x_26;
}
else
{
lean_object* x_470; lean_object* x_471; lean_object* x_472; 
x_470 = lean_ctor_get(x_26, 1);
lean_inc(x_470);
lean_dec(x_26);
x_471 = lean_box(1);
x_472 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_472, 0, x_471);
lean_ctor_set(x_472, 1, x_470);
return x_472;
}
}
block_24:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_12 = lean_nat_to_int(x_8);
x_13 = lean_int_sub(x_12, x_9);
lean_dec(x_9);
lean_dec(x_12);
x_14 = l_Int_toNat(x_13);
lean_dec(x_13);
x_15 = lean_nat_add(x_14, x_6);
x_16 = l_BitVec_extractLsb___redArg(x_14, x_5, x_1);
lean_dec(x_14);
x_17 = l_BitVec_append___redArg(x_15, x_4, x_16);
lean_dec(x_16);
lean_dec(x_4);
x_18 = lean_nat_add(x_11, x_15);
lean_dec(x_15);
x_19 = lean_unsigned_to_nat(64u);
x_20 = l_BitVec_setWidth(x_18, x_19, x_17);
lean_dec(x_17);
lean_dec(x_18);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_10);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_7);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_translateAddr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_translateAddr(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__vmem___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_reset__TLB___redArg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__vmem(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_reset__TLB___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__vmem___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_reset__vmem(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Flow(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Prelude(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvErrors(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvXlen(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_PreludeMemAddrtype(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvTypesExt(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvTypes(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvVmemTypes(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSysRegs(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvPlatform(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvMem(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvVmemPte(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvVmemPtw(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvVmemTlb(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvVmem(uint8_t builtin, lean_object* w) {
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
res = initialize_LeanRV64DExecutable_RiscvXlen(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_PreludeMemAddrtype(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvTypesExt(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvTypes(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvVmemTypes(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSysRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvPlatform(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvMem(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvVmemPte(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvVmemPtw(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvVmemTlb(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_read__pte___closed__0 = _init_l_LeanRV64DExecutable_Functions_read__pte___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__pte___closed__0);
l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__0 = _init_l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__0);
l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__1 = _init_l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__1);
l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__2 = _init_l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__2);
l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__3 = _init_l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__3);
l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__4 = _init_l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_pt__walk___lam__0___closed__4);
l_LeanRV64DExecutable_Functions_pt__walk___closed__0 = _init_l_LeanRV64DExecutable_Functions_pt__walk___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_pt__walk___closed__0);
l_LeanRV64DExecutable_Functions_pt__walk___closed__1 = _init_l_LeanRV64DExecutable_Functions_pt__walk___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_pt__walk___closed__1);
l_LeanRV64DExecutable_Functions_pt__walk___closed__2 = _init_l_LeanRV64DExecutable_Functions_pt__walk___closed__2();
l_LeanRV64DExecutable_Functions_pt__walk___closed__3 = _init_l_LeanRV64DExecutable_Functions_pt__walk___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_pt__walk___closed__3);
l_LeanRV64DExecutable_Functions_pt__walk___closed__4 = _init_l_LeanRV64DExecutable_Functions_pt__walk___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_pt__walk___closed__4);
l_LeanRV64DExecutable_Functions_pt__walk___closed__5 = _init_l_LeanRV64DExecutable_Functions_pt__walk___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_pt__walk___closed__5);
l_LeanRV64DExecutable_Functions_translationMode___closed__0 = _init_l_LeanRV64DExecutable_Functions_translationMode___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translationMode___closed__0);
l_LeanRV64DExecutable_Functions_translationMode___closed__1 = _init_l_LeanRV64DExecutable_Functions_translationMode___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translationMode___closed__1);
l_LeanRV64DExecutable_Functions_translationMode___closed__2 = _init_l_LeanRV64DExecutable_Functions_translationMode___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translationMode___closed__2);
l_LeanRV64DExecutable_Functions_translationMode___closed__3 = _init_l_LeanRV64DExecutable_Functions_translationMode___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translationMode___closed__3);
l_LeanRV64DExecutable_Functions_translationMode___closed__4 = _init_l_LeanRV64DExecutable_Functions_translationMode___closed__4();
l_LeanRV64DExecutable_Functions_translationMode___closed__5 = _init_l_LeanRV64DExecutable_Functions_translationMode___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translationMode___closed__5);
l_LeanRV64DExecutable_Functions_translationMode___closed__6 = _init_l_LeanRV64DExecutable_Functions_translationMode___closed__6();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translationMode___closed__6);
l_LeanRV64DExecutable_Functions_translationMode___closed__7 = _init_l_LeanRV64DExecutable_Functions_translationMode___closed__7();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translationMode___closed__7);
l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__0 = _init_l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__0();
l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__1 = _init_l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__1);
l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__2 = _init_l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__2);
l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__3 = _init_l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__3);
l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__4 = _init_l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__4);
l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__5 = _init_l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__5);
l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__6 = _init_l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__6();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__6);
l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__7 = _init_l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__7();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__7);
l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__8 = _init_l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__8();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translate__TLB__hit___redArg___closed__8);
l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__0 = _init_l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__0);
l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__1 = _init_l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__1);
l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__2 = _init_l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__2);
l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__3 = _init_l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__3);
l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__4 = _init_l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_satp__mode__width__forwards___closed__4);
l_LeanRV64DExecutable_Functions_get__satp___closed__0 = _init_l_LeanRV64DExecutable_Functions_get__satp___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_get__satp___closed__0);
l_LeanRV64DExecutable_Functions_get__satp___closed__1 = _init_l_LeanRV64DExecutable_Functions_get__satp___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_get__satp___closed__1);
l_LeanRV64DExecutable_Functions_translateAddr___closed__0 = _init_l_LeanRV64DExecutable_Functions_translateAddr___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translateAddr___closed__0);
l_LeanRV64DExecutable_Functions_translateAddr___closed__1 = _init_l_LeanRV64DExecutable_Functions_translateAddr___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translateAddr___closed__1);
l_LeanRV64DExecutable_Functions_translateAddr___closed__2 = _init_l_LeanRV64DExecutable_Functions_translateAddr___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translateAddr___closed__2);
l_LeanRV64DExecutable_Functions_translateAddr___closed__3 = _init_l_LeanRV64DExecutable_Functions_translateAddr___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translateAddr___closed__3);
l_LeanRV64DExecutable_Functions_translateAddr___closed__4 = _init_l_LeanRV64DExecutable_Functions_translateAddr___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translateAddr___closed__4);
l_LeanRV64DExecutable_Functions_translateAddr___closed__5 = _init_l_LeanRV64DExecutable_Functions_translateAddr___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translateAddr___closed__5);
l_LeanRV64DExecutable_Functions_translateAddr___closed__6 = _init_l_LeanRV64DExecutable_Functions_translateAddr___closed__6();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translateAddr___closed__6);
l_LeanRV64DExecutable_Functions_translateAddr___closed__7 = _init_l_LeanRV64DExecutable_Functions_translateAddr___closed__7();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translateAddr___closed__7);
l_LeanRV64DExecutable_Functions_translateAddr___closed__8 = _init_l_LeanRV64DExecutable_Functions_translateAddr___closed__8();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_translateAddr___closed__8);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
