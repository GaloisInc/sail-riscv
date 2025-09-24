// Lean compiler output
// Module: LeanRV64DExecutable.RiscvInstsZicsr
// Imports: Init LeanRV64DExecutable.Prelude LeanRV64DExecutable.RiscvErrors LeanRV64DExecutable.RiscvXlen LeanRV64DExecutable.RiscvTypes LeanRV64DExecutable.RiscvCallbacks LeanRV64DExecutable.RiscvRegs LeanRV64DExecutable.RiscvSysRegs LeanRV64DExecutable.RiscvPmpRegs LeanRV64DExecutable.RiscvExtRegs LeanRV64DExecutable.RiscvVextRegs LeanRV64DExecutable.RiscvVextControl LeanRV64DExecutable.RiscvSysExceptions LeanRV64DExecutable.RiscvZihpm LeanRV64DExecutable.RiscvSscofpmf LeanRV64DExecutable.RiscvZkrControl LeanRV64DExecutable.RiscvSmcntrpmf LeanRV64DExecutable.RiscvSysControl LeanRV64DExecutable.RiscvInstRetire
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
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__33;
lean_object* l_LeanRV64DExecutable_Functions_internal__error___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_write__CSR___closed__1;
static lean_object* l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__2;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__38;
lean_object* l_LeanRV64DExecutable_Functions_write__mhpmevent(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__25;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__41;
lean_object* l_BitVec_setWidth(lean_object*, lean_object*, lean_object*);
uint8_t l_LeanRV64DExecutable_Functions_not(uint8_t);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__62;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__16;
uint8_t l_beqcsrop____x40_LeanRV64DExecutable_Defs___hyg_7567_(uint8_t, uint8_t);
lean_object* l_LeanRV64DExecutable_Functions_read__mhpmcounterh(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_write__CSR___closed__0;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__76;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__56;
lean_object* l_LeanRV64DExecutable_Functions_pmpReadCfgReg(lean_object*, lean_object*);
static uint8_t l_LeanRV64DExecutable_Functions_write__CSR___closed__5;
extern lean_object* l_LeanRV64DExecutable_Functions_RETIRE__SUCCESS;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__78;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__46;
static uint8_t l_LeanRV64DExecutable_Functions_doCSR___closed__0;
lean_object* l_LeanRV64DExecutable_Functions_csr__id__write__callback___redArg(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_pmpReadAddrReg(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_pmpWriteAddrReg(lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_legalize__satp(uint8_t, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__66;
lean_object* l_LeanRV64DExecutable_Functions_legalize__senvcfg(lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_legalize__menvcfg(lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_append___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_encdec__csrop__backwards___closed__0;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__59;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__68;
static lean_object* l_LeanRV64DExecutable_Functions_write__CSR___closed__4;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__74;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__30;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__29;
lean_object* l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__84;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__2;
lean_object* l_LeanRV64DExecutable_Functions_set__stvec(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__51;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__75;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__45;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__12;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__60;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__67;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__54;
lean_object* l_LeanRV64DExecutable_Functions_get__stvec___redArg(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_doCSR___closed__1;
lean_object* l_LeanRV64DExecutable_Functions_read__seed__csr___redArg(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__7;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__csrop__forwards__matches___boxed(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__13;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__17;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__42;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__4;
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_encdec__csrop__forwards__matches(uint8_t);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__57;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__86;
lean_object* l_LeanRV64DExecutable_Functions_legalize__mstatus(lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_check__CSR(lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_BitVec_not(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__10;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___boxed(lean_object*);
lean_object* l_Sail_BitVec_access(lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_pmpWriteCfgReg(lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_legalize__mcountinhibit___redArg(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__53;
lean_object* l_BitVec_ofNat(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__65;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__23;
static uint8_t l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
lean_object* l_LeanRV64DExecutable_Functions_legalize__mip(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__61;
lean_object* l_LeanRV64DExecutable_Functions_read__mhpmeventh(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_legalize__sstatus(lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__Vcsr__vxsat(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_get__mtvec___redArg(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___boxed(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__72;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__40;
lean_object* l_BitVec_extractLsb___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_get__xepc(uint8_t, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_hpmidx__from__bits(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_read__mhpmcounter(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__22;
static lean_object* l_LeanRV64DExecutable_Functions_write__CSR___closed__3;
lean_object* l_LeanRV64DExecutable_Functions_wX(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__58;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__35;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__24;
static lean_object* l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__0;
lean_object* lean_nat_land(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_legalize__misa(lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_set__vstart(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__32;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__21;
lean_object* l_LeanRV64DExecutable_Functions_legalize__mideleg___redArg(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_write__mhpmcounterh(lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_legalize__mcounteren___redArg(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__csrop__backwards___boxed(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__49;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__63;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__64;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__9;
lean_object* l_LeanRV64DExecutable_Functions_ext__write__vcsr(lean_object*, lean_object*, lean_object*);
extern lean_object* l_LeanRV64DExecutable_Functions_xlen;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__73;
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_lower__mie(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
lean_object* l_LeanRV64DExecutable_Functions_legalize__scounteren___redArg(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__Vcsr__vxrm(lean_object*);
extern lean_object* l_LeanRV64DExecutable_Functions_zreg;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__1;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__6;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__14;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__31;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__71;
static lean_object* l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__2;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__70;
lean_object* l_LeanRV64DExecutable_Functions_lift__sip(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_doCSR___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__15;
lean_object* l_LeanRV64DExecutable_Functions_legalize__smcntrpmf(lean_object*, lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_write__CSR(lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_write__mhpmcounter(lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_lower__mip(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__43;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_dec__bits__1__forwards_spec__0___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards__matches___boxed(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__26;
lean_object* l_Sail_BitVec_updateSubrange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_doCSR(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__28;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__27;
static lean_object* l_LeanRV64DExecutable_Functions_doCSR___closed__2;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__87;
lean_object* l_LeanRV64DExecutable_Functions_set__xepc(uint8_t, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_csr__id__read__callback___redArg(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_get__scountovf(uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__5;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__69;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__85;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__19;
lean_object* l_Int_toNat(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_csr__mnemonic__forwards__matches___boxed(lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_encdec__csrop__backwards__matches(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__48;
static lean_object* l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__1;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__34;
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards__matches(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_write__CSR___closed__2;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__3;
lean_object* l_Sail_BitVec_toFormatted(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__82;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__77;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__36;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__39;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__44;
lean_object* l_LeanRV64DExecutable_Functions_cur__architecture___redArg(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__csrop__backwards__matches___boxed(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_legalize__medeleg___redArg(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_lower__mstatus(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__52;
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_csr__mnemonic__forwards__matches(uint8_t);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__csrop__backwards(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__83;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__79;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_read__CSR(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__0;
lean_object* l_LeanRV64DExecutable_Functions_lift__sie(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__18;
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_legalize__mie(lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_set__mtvec(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__47;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__csrop__forwards(uint8_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__20;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__50;
lean_object* l_LeanRV64DExecutable_Functions_write__mhpmeventh(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__80;
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__1;
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__81;
lean_object* l_LeanRV64DExecutable_Functions_read__mhpmevent(lean_object*, lean_object*);
extern lean_object* l_LeanRV64DExecutable_Functions_VLENB;
lean_object* lean_nat_lor(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__CSR___closed__37;
lean_object* l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(uint8_t, lean_object*, lean_object*);
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_unsigned_to_nat(2u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = l_BitVec_ofNat(x_1, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_unsigned_to_nat(2u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__csrop__forwards(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__0;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__1;
return x_3;
}
default: 
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__2;
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_LeanRV64DExecutable_Functions_encdec__csrop__forwards(x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_encdec__csrop__backwards___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Pattern match failure at unknown location", 41, 41);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__csrop__backwards(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__0;
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__1;
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__2;
x_8 = lean_nat_dec_eq(x_1, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_LeanRV64DExecutable_Functions_encdec__csrop__backwards___closed__0;
x_10 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_dec__bits__1__forwards_spec__0___redArg(x_8, x_9, x_2);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
x_13 = lean_box(0);
lean_ctor_set_tag(x_10, 1);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_10);
if (x_17 == 0)
{
return x_10;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_10, 0);
x_19 = lean_ctor_get(x_10, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_10);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_21 = 2;
x_22 = lean_box(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_2);
return x_23;
}
}
else
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_24 = 1;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_2);
return x_26;
}
}
else
{
uint8_t x_27; lean_object* x_28; lean_object* x_29; 
x_27 = 0;
x_28 = lean_box(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_2);
return x_29;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__csrop__backwards___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_encdec__csrop__backwards(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_encdec__csrop__forwards__matches(uint8_t x_1) {
_start:
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__csrop__forwards__matches___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_LeanRV64DExecutable_Functions_encdec__csrop__forwards__matches(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_encdec__csrop__backwards__matches(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__0;
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__1;
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__2;
x_7 = lean_nat_dec_eq(x_1, x_6);
return x_7;
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
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_encdec__csrop__backwards__matches___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_LeanRV64DExecutable_Functions_encdec__csrop__backwards__matches(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_nat_mul(x_1, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(384u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("riscv_csr_end.sail", 18, 18);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(17u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Read from CSR that does not exist: ", 35, 35);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(333u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(349u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_LeanRV64DExecutable_Functions_read__CSR___closed__7;
x_2 = l_LeanRV64DExecutable_Functions_xlen;
x_3 = lean_int_dec_eq(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LeanRV64DExecutable_Functions_read__CSR___closed__9;
x_2 = l_LeanRV64DExecutable_Functions_xlen;
x_3 = lean_int_sub(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_read__CSR___closed__10;
x_2 = l_Int_toNat(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(802u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1826u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(801u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1825u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2946u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2816u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2818u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2944u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3202u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3201u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3488u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(21u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3072u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3073u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3074u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3200u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_read__CSR___closed__29;
x_2 = l_Int_toNat(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LeanRV64DExecutable_Functions_read__CSR___closed__30;
x_2 = l_LeanRV64DExecutable_Functions_read__CSR___closed__28;
x_3 = l_Int_pow(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__32() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(57u);
x_2 = lean_unsigned_to_nat(7u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__33() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(100u);
x_2 = lean_unsigned_to_nat(7u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(96u);
x_2 = lean_unsigned_to_nat(7u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__35() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(92u);
x_2 = lean_unsigned_to_nat(7u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__36() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(88u);
x_2 = lean_unsigned_to_nat(7u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__37() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(59u);
x_2 = lean_unsigned_to_nat(8u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__38() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(60u);
x_2 = lean_unsigned_to_nat(8u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__39() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(61u);
x_2 = lean_unsigned_to_nat(8u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__40() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(62u);
x_2 = lean_unsigned_to_nat(8u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__41() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__42() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(9u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__43() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__44() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(15u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__45() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3104u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__46() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3105u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__47() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3106u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__48() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(261u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__49() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(321u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__50() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(773u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__51() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(833u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__52() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(25u);
x_2 = lean_unsigned_to_nat(7u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__53() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__54() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LeanRV64DExecutable_Functions_read__CSR___closed__53;
x_2 = l_LeanRV64DExecutable_Functions_read__CSR___closed__31;
x_3 = lean_int_mul(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__55() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_read__CSR___closed__54;
x_2 = l_Int_toNat(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__56() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(2u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__57() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(769u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__58() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(771u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__59() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(834u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__60() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(835u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__61() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(832u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__62() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(262u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__63() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(774u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__64() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(800u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__65() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3857u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__66() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3858u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__67() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3859u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__68() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3860u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__69() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3861u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__70() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(256u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__71() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(324u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__72() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(260u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__73() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(320u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__74() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(322u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__75() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(323u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__76() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1952u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__77() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(58u);
x_2 = lean_unsigned_to_nat(8u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__78() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__79() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(266u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__80() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(772u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__81() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(836u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__82() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(770u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__83() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(786u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__84() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(768u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__85() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(778u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__86() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(794u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__87() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(784u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_read__CSR(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_16; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; lean_object* x_119; lean_object* x_120; lean_object* x_121; uint8_t x_122; lean_object* x_176; lean_object* x_177; lean_object* x_178; uint8_t x_179; uint8_t x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; uint8_t x_237; lean_object* x_257; uint8_t x_258; uint8_t x_259; lean_object* x_260; lean_object* x_261; uint8_t x_262; uint8_t x_362; uint8_t x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; uint8_t x_367; uint8_t x_387; uint8_t x_388; lean_object* x_389; lean_object* x_390; uint8_t x_391; lean_object* x_392; uint8_t x_393; lean_object* x_413; lean_object* x_414; lean_object* x_415; uint8_t x_416; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; uint8_t x_697; lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; uint8_t x_712; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; uint8_t x_727; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; uint8_t x_741; lean_object* x_752; lean_object* x_753; lean_object* x_754; lean_object* x_755; uint8_t x_756; lean_object* x_776; uint8_t x_777; lean_object* x_1174; uint8_t x_1175; 
x_40 = lean_unsigned_to_nat(12u);
x_1174 = l_LeanRV64DExecutable_Functions_read__CSR___closed__57;
x_1175 = lean_nat_dec_eq(x_1, x_1174);
if (x_1175 == 0)
{
uint8_t x_1176; lean_object* x_1177; lean_object* x_1178; uint8_t x_1179; lean_object* x_2162; lean_object* x_2163; uint8_t x_2164; lean_object* x_2283; 
x_1176 = 87;
x_2283 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1176, x_2);
if (lean_obj_tag(x_2283) == 0)
{
uint8_t x_2284; 
x_2284 = !lean_is_exclusive(x_2283);
if (x_2284 == 0)
{
lean_object* x_2285; lean_object* x_2286; lean_object* x_2287; uint8_t x_2288; 
x_2285 = lean_ctor_get(x_2283, 0);
x_2286 = lean_ctor_get(x_2283, 1);
x_2287 = l_LeanRV64DExecutable_Functions_read__CSR___closed__84;
x_2288 = lean_nat_dec_eq(x_1, x_2287);
if (x_2288 == 0)
{
lean_object* x_2289; 
lean_free_object(x_2283);
lean_dec(x_2285);
x_2289 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1176, x_2286);
if (lean_obj_tag(x_2289) == 0)
{
lean_object* x_2290; lean_object* x_2291; lean_object* x_2292; uint8_t x_2293; lean_object* x_2347; uint8_t x_2348; 
x_2290 = lean_ctor_get(x_2289, 0);
lean_inc(x_2290);
x_2291 = lean_ctor_get(x_2289, 1);
lean_inc(x_2291);
if (lean_is_exclusive(x_2289)) {
 lean_ctor_release(x_2289, 0);
 lean_ctor_release(x_2289, 1);
 x_2292 = x_2289;
} else {
 lean_dec_ref(x_2289);
 x_2292 = lean_box(0);
}
x_2347 = l_LeanRV64DExecutable_Functions_read__CSR___closed__87;
x_2348 = lean_nat_dec_eq(x_1, x_2347);
if (x_2348 == 0)
{
x_2293 = x_2348;
goto block_2346;
}
else
{
uint8_t x_2349; 
x_2349 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_2293 = x_2349;
goto block_2346;
}
block_2346:
{
if (x_2293 == 0)
{
uint8_t x_2294; lean_object* x_2295; 
lean_dec(x_2292);
lean_dec(x_2290);
x_2294 = 86;
x_2295 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2294, x_2291);
if (lean_obj_tag(x_2295) == 0)
{
uint8_t x_2296; 
x_2296 = !lean_is_exclusive(x_2295);
if (x_2296 == 0)
{
lean_object* x_2297; lean_object* x_2298; lean_object* x_2299; uint8_t x_2300; 
x_2297 = lean_ctor_get(x_2295, 0);
x_2298 = lean_ctor_get(x_2295, 1);
x_2299 = l_LeanRV64DExecutable_Functions_read__CSR___closed__85;
x_2300 = lean_nat_dec_eq(x_1, x_2299);
if (x_2300 == 0)
{
lean_object* x_2301; 
lean_free_object(x_2295);
lean_dec(x_2297);
x_2301 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2294, x_2298);
if (lean_obj_tag(x_2301) == 0)
{
lean_object* x_2302; lean_object* x_2303; lean_object* x_2304; uint8_t x_2305; 
x_2302 = lean_ctor_get(x_2301, 0);
lean_inc(x_2302);
x_2303 = lean_ctor_get(x_2301, 1);
lean_inc(x_2303);
lean_dec(x_2301);
x_2304 = l_LeanRV64DExecutable_Functions_read__CSR___closed__86;
x_2305 = lean_nat_dec_eq(x_1, x_2304);
if (x_2305 == 0)
{
x_2162 = x_2302;
x_2163 = x_2303;
x_2164 = x_2305;
goto block_2282;
}
else
{
uint8_t x_2306; 
x_2306 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_2162 = x_2302;
x_2163 = x_2303;
x_2164 = x_2306;
goto block_2282;
}
}
else
{
uint8_t x_2307; 
lean_dec(x_1);
x_2307 = !lean_is_exclusive(x_2301);
if (x_2307 == 0)
{
lean_object* x_2308; lean_object* x_2309; 
x_2308 = lean_ctor_get(x_2301, 0);
lean_dec(x_2308);
x_2309 = lean_box(1);
lean_ctor_set(x_2301, 0, x_2309);
return x_2301;
}
else
{
lean_object* x_2310; lean_object* x_2311; lean_object* x_2312; 
x_2310 = lean_ctor_get(x_2301, 1);
lean_inc(x_2310);
lean_dec(x_2301);
x_2311 = lean_box(1);
x_2312 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2312, 0, x_2311);
lean_ctor_set(x_2312, 1, x_2310);
return x_2312;
}
}
}
else
{
lean_object* x_2313; lean_object* x_2314; lean_object* x_2315; 
lean_dec(x_1);
x_2313 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_2314 = lean_unsigned_to_nat(0u);
x_2315 = l_BitVec_extractLsb___redArg(x_2313, x_2314, x_2297);
lean_dec(x_2297);
lean_ctor_set(x_2295, 0, x_2315);
return x_2295;
}
}
else
{
lean_object* x_2316; lean_object* x_2317; lean_object* x_2318; uint8_t x_2319; 
x_2316 = lean_ctor_get(x_2295, 0);
x_2317 = lean_ctor_get(x_2295, 1);
lean_inc(x_2317);
lean_inc(x_2316);
lean_dec(x_2295);
x_2318 = l_LeanRV64DExecutable_Functions_read__CSR___closed__85;
x_2319 = lean_nat_dec_eq(x_1, x_2318);
if (x_2319 == 0)
{
lean_object* x_2320; 
lean_dec(x_2316);
x_2320 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2294, x_2317);
if (lean_obj_tag(x_2320) == 0)
{
lean_object* x_2321; lean_object* x_2322; lean_object* x_2323; uint8_t x_2324; 
x_2321 = lean_ctor_get(x_2320, 0);
lean_inc(x_2321);
x_2322 = lean_ctor_get(x_2320, 1);
lean_inc(x_2322);
lean_dec(x_2320);
x_2323 = l_LeanRV64DExecutable_Functions_read__CSR___closed__86;
x_2324 = lean_nat_dec_eq(x_1, x_2323);
if (x_2324 == 0)
{
x_2162 = x_2321;
x_2163 = x_2322;
x_2164 = x_2324;
goto block_2282;
}
else
{
uint8_t x_2325; 
x_2325 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_2162 = x_2321;
x_2163 = x_2322;
x_2164 = x_2325;
goto block_2282;
}
}
else
{
lean_object* x_2326; lean_object* x_2327; lean_object* x_2328; lean_object* x_2329; 
lean_dec(x_1);
x_2326 = lean_ctor_get(x_2320, 1);
lean_inc(x_2326);
if (lean_is_exclusive(x_2320)) {
 lean_ctor_release(x_2320, 0);
 lean_ctor_release(x_2320, 1);
 x_2327 = x_2320;
} else {
 lean_dec_ref(x_2320);
 x_2327 = lean_box(0);
}
x_2328 = lean_box(1);
if (lean_is_scalar(x_2327)) {
 x_2329 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2329 = x_2327;
}
lean_ctor_set(x_2329, 0, x_2328);
lean_ctor_set(x_2329, 1, x_2326);
return x_2329;
}
}
else
{
lean_object* x_2330; lean_object* x_2331; lean_object* x_2332; lean_object* x_2333; 
lean_dec(x_1);
x_2330 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_2331 = lean_unsigned_to_nat(0u);
x_2332 = l_BitVec_extractLsb___redArg(x_2330, x_2331, x_2316);
lean_dec(x_2316);
x_2333 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2333, 0, x_2332);
lean_ctor_set(x_2333, 1, x_2317);
return x_2333;
}
}
}
else
{
uint8_t x_2334; 
lean_dec(x_1);
x_2334 = !lean_is_exclusive(x_2295);
if (x_2334 == 0)
{
lean_object* x_2335; lean_object* x_2336; 
x_2335 = lean_ctor_get(x_2295, 0);
lean_dec(x_2335);
x_2336 = lean_box(1);
lean_ctor_set(x_2295, 0, x_2336);
return x_2295;
}
else
{
lean_object* x_2337; lean_object* x_2338; lean_object* x_2339; 
x_2337 = lean_ctor_get(x_2295, 1);
lean_inc(x_2337);
lean_dec(x_2295);
x_2338 = lean_box(1);
x_2339 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2339, 0, x_2338);
lean_ctor_set(x_2339, 1, x_2337);
return x_2339;
}
}
}
else
{
lean_object* x_2340; lean_object* x_2341; lean_object* x_2342; lean_object* x_2343; lean_object* x_2344; lean_object* x_2345; 
lean_dec(x_1);
x_2340 = lean_unsigned_to_nat(63u);
x_2341 = lean_unsigned_to_nat(32u);
x_2342 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_2343 = l_BitVec_extractLsb___redArg(x_2340, x_2341, x_2290);
lean_dec(x_2290);
x_2344 = l_BitVec_setWidth(x_2341, x_2342, x_2343);
lean_dec(x_2343);
if (lean_is_scalar(x_2292)) {
 x_2345 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2345 = x_2292;
}
lean_ctor_set(x_2345, 0, x_2344);
lean_ctor_set(x_2345, 1, x_2291);
return x_2345;
}
}
}
else
{
uint8_t x_2350; 
lean_dec(x_1);
x_2350 = !lean_is_exclusive(x_2289);
if (x_2350 == 0)
{
lean_object* x_2351; lean_object* x_2352; 
x_2351 = lean_ctor_get(x_2289, 0);
lean_dec(x_2351);
x_2352 = lean_box(1);
lean_ctor_set(x_2289, 0, x_2352);
return x_2289;
}
else
{
lean_object* x_2353; lean_object* x_2354; lean_object* x_2355; 
x_2353 = lean_ctor_get(x_2289, 1);
lean_inc(x_2353);
lean_dec(x_2289);
x_2354 = lean_box(1);
x_2355 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2355, 0, x_2354);
lean_ctor_set(x_2355, 1, x_2353);
return x_2355;
}
}
}
else
{
lean_object* x_2356; lean_object* x_2357; lean_object* x_2358; 
lean_dec(x_1);
x_2356 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_2357 = lean_unsigned_to_nat(0u);
x_2358 = l_BitVec_extractLsb___redArg(x_2356, x_2357, x_2285);
lean_dec(x_2285);
lean_ctor_set(x_2283, 0, x_2358);
return x_2283;
}
}
else
{
lean_object* x_2359; lean_object* x_2360; lean_object* x_2361; uint8_t x_2362; 
x_2359 = lean_ctor_get(x_2283, 0);
x_2360 = lean_ctor_get(x_2283, 1);
lean_inc(x_2360);
lean_inc(x_2359);
lean_dec(x_2283);
x_2361 = l_LeanRV64DExecutable_Functions_read__CSR___closed__84;
x_2362 = lean_nat_dec_eq(x_1, x_2361);
if (x_2362 == 0)
{
lean_object* x_2363; 
lean_dec(x_2359);
x_2363 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1176, x_2360);
if (lean_obj_tag(x_2363) == 0)
{
lean_object* x_2364; lean_object* x_2365; lean_object* x_2366; uint8_t x_2367; lean_object* x_2400; uint8_t x_2401; 
x_2364 = lean_ctor_get(x_2363, 0);
lean_inc(x_2364);
x_2365 = lean_ctor_get(x_2363, 1);
lean_inc(x_2365);
if (lean_is_exclusive(x_2363)) {
 lean_ctor_release(x_2363, 0);
 lean_ctor_release(x_2363, 1);
 x_2366 = x_2363;
} else {
 lean_dec_ref(x_2363);
 x_2366 = lean_box(0);
}
x_2400 = l_LeanRV64DExecutable_Functions_read__CSR___closed__87;
x_2401 = lean_nat_dec_eq(x_1, x_2400);
if (x_2401 == 0)
{
x_2367 = x_2401;
goto block_2399;
}
else
{
uint8_t x_2402; 
x_2402 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_2367 = x_2402;
goto block_2399;
}
block_2399:
{
if (x_2367 == 0)
{
uint8_t x_2368; lean_object* x_2369; 
lean_dec(x_2366);
lean_dec(x_2364);
x_2368 = 86;
x_2369 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2368, x_2365);
if (lean_obj_tag(x_2369) == 0)
{
lean_object* x_2370; lean_object* x_2371; lean_object* x_2372; lean_object* x_2373; uint8_t x_2374; 
x_2370 = lean_ctor_get(x_2369, 0);
lean_inc(x_2370);
x_2371 = lean_ctor_get(x_2369, 1);
lean_inc(x_2371);
if (lean_is_exclusive(x_2369)) {
 lean_ctor_release(x_2369, 0);
 lean_ctor_release(x_2369, 1);
 x_2372 = x_2369;
} else {
 lean_dec_ref(x_2369);
 x_2372 = lean_box(0);
}
x_2373 = l_LeanRV64DExecutable_Functions_read__CSR___closed__85;
x_2374 = lean_nat_dec_eq(x_1, x_2373);
if (x_2374 == 0)
{
lean_object* x_2375; 
lean_dec(x_2372);
lean_dec(x_2370);
x_2375 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2368, x_2371);
if (lean_obj_tag(x_2375) == 0)
{
lean_object* x_2376; lean_object* x_2377; lean_object* x_2378; uint8_t x_2379; 
x_2376 = lean_ctor_get(x_2375, 0);
lean_inc(x_2376);
x_2377 = lean_ctor_get(x_2375, 1);
lean_inc(x_2377);
lean_dec(x_2375);
x_2378 = l_LeanRV64DExecutable_Functions_read__CSR___closed__86;
x_2379 = lean_nat_dec_eq(x_1, x_2378);
if (x_2379 == 0)
{
x_2162 = x_2376;
x_2163 = x_2377;
x_2164 = x_2379;
goto block_2282;
}
else
{
uint8_t x_2380; 
x_2380 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_2162 = x_2376;
x_2163 = x_2377;
x_2164 = x_2380;
goto block_2282;
}
}
else
{
lean_object* x_2381; lean_object* x_2382; lean_object* x_2383; lean_object* x_2384; 
lean_dec(x_1);
x_2381 = lean_ctor_get(x_2375, 1);
lean_inc(x_2381);
if (lean_is_exclusive(x_2375)) {
 lean_ctor_release(x_2375, 0);
 lean_ctor_release(x_2375, 1);
 x_2382 = x_2375;
} else {
 lean_dec_ref(x_2375);
 x_2382 = lean_box(0);
}
x_2383 = lean_box(1);
if (lean_is_scalar(x_2382)) {
 x_2384 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2384 = x_2382;
}
lean_ctor_set(x_2384, 0, x_2383);
lean_ctor_set(x_2384, 1, x_2381);
return x_2384;
}
}
else
{
lean_object* x_2385; lean_object* x_2386; lean_object* x_2387; lean_object* x_2388; 
lean_dec(x_1);
x_2385 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_2386 = lean_unsigned_to_nat(0u);
x_2387 = l_BitVec_extractLsb___redArg(x_2385, x_2386, x_2370);
lean_dec(x_2370);
if (lean_is_scalar(x_2372)) {
 x_2388 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2388 = x_2372;
}
lean_ctor_set(x_2388, 0, x_2387);
lean_ctor_set(x_2388, 1, x_2371);
return x_2388;
}
}
else
{
lean_object* x_2389; lean_object* x_2390; lean_object* x_2391; lean_object* x_2392; 
lean_dec(x_1);
x_2389 = lean_ctor_get(x_2369, 1);
lean_inc(x_2389);
if (lean_is_exclusive(x_2369)) {
 lean_ctor_release(x_2369, 0);
 lean_ctor_release(x_2369, 1);
 x_2390 = x_2369;
} else {
 lean_dec_ref(x_2369);
 x_2390 = lean_box(0);
}
x_2391 = lean_box(1);
if (lean_is_scalar(x_2390)) {
 x_2392 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2392 = x_2390;
}
lean_ctor_set(x_2392, 0, x_2391);
lean_ctor_set(x_2392, 1, x_2389);
return x_2392;
}
}
else
{
lean_object* x_2393; lean_object* x_2394; lean_object* x_2395; lean_object* x_2396; lean_object* x_2397; lean_object* x_2398; 
lean_dec(x_1);
x_2393 = lean_unsigned_to_nat(63u);
x_2394 = lean_unsigned_to_nat(32u);
x_2395 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_2396 = l_BitVec_extractLsb___redArg(x_2393, x_2394, x_2364);
lean_dec(x_2364);
x_2397 = l_BitVec_setWidth(x_2394, x_2395, x_2396);
lean_dec(x_2396);
if (lean_is_scalar(x_2366)) {
 x_2398 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2398 = x_2366;
}
lean_ctor_set(x_2398, 0, x_2397);
lean_ctor_set(x_2398, 1, x_2365);
return x_2398;
}
}
}
else
{
lean_object* x_2403; lean_object* x_2404; lean_object* x_2405; lean_object* x_2406; 
lean_dec(x_1);
x_2403 = lean_ctor_get(x_2363, 1);
lean_inc(x_2403);
if (lean_is_exclusive(x_2363)) {
 lean_ctor_release(x_2363, 0);
 lean_ctor_release(x_2363, 1);
 x_2404 = x_2363;
} else {
 lean_dec_ref(x_2363);
 x_2404 = lean_box(0);
}
x_2405 = lean_box(1);
if (lean_is_scalar(x_2404)) {
 x_2406 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2406 = x_2404;
}
lean_ctor_set(x_2406, 0, x_2405);
lean_ctor_set(x_2406, 1, x_2403);
return x_2406;
}
}
else
{
lean_object* x_2407; lean_object* x_2408; lean_object* x_2409; lean_object* x_2410; 
lean_dec(x_1);
x_2407 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_2408 = lean_unsigned_to_nat(0u);
x_2409 = l_BitVec_extractLsb___redArg(x_2407, x_2408, x_2359);
lean_dec(x_2359);
x_2410 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2410, 0, x_2409);
lean_ctor_set(x_2410, 1, x_2360);
return x_2410;
}
}
}
else
{
uint8_t x_2411; 
lean_dec(x_1);
x_2411 = !lean_is_exclusive(x_2283);
if (x_2411 == 0)
{
lean_object* x_2412; lean_object* x_2413; 
x_2412 = lean_ctor_get(x_2283, 0);
lean_dec(x_2412);
x_2413 = lean_box(1);
lean_ctor_set(x_2283, 0, x_2413);
return x_2283;
}
else
{
lean_object* x_2414; lean_object* x_2415; lean_object* x_2416; 
x_2414 = lean_ctor_get(x_2283, 1);
lean_inc(x_2414);
lean_dec(x_2283);
x_2415 = lean_box(1);
x_2416 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2416, 0, x_2415);
lean_ctor_set(x_2416, 1, x_2414);
return x_2416;
}
}
block_2161:
{
if (x_1179 == 0)
{
lean_object* x_1180; uint8_t x_1181; 
lean_dec(x_1178);
x_1180 = l_LeanRV64DExecutable_Functions_read__CSR___closed__58;
x_1181 = lean_nat_dec_eq(x_1, x_1180);
if (x_1181 == 0)
{
lean_object* x_1182; uint8_t x_1183; 
x_1182 = l_LeanRV64DExecutable_Functions_read__CSR___closed__59;
x_1183 = lean_nat_dec_eq(x_1, x_1182);
if (x_1183 == 0)
{
lean_object* x_1184; uint8_t x_1185; 
x_1184 = l_LeanRV64DExecutable_Functions_read__CSR___closed__60;
x_1185 = lean_nat_dec_eq(x_1, x_1184);
if (x_1185 == 0)
{
lean_object* x_1186; uint8_t x_1187; 
x_1186 = l_LeanRV64DExecutable_Functions_read__CSR___closed__61;
x_1187 = lean_nat_dec_eq(x_1, x_1186);
if (x_1187 == 0)
{
uint8_t x_1188; lean_object* x_1189; 
x_1188 = 75;
x_1189 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1188, x_1177);
if (lean_obj_tag(x_1189) == 0)
{
uint8_t x_1190; 
x_1190 = !lean_is_exclusive(x_1189);
if (x_1190 == 0)
{
lean_object* x_1191; lean_object* x_1192; lean_object* x_1193; uint8_t x_1194; 
x_1191 = lean_ctor_get(x_1189, 0);
x_1192 = lean_ctor_get(x_1189, 1);
x_1193 = l_LeanRV64DExecutable_Functions_read__CSR___closed__62;
x_1194 = lean_nat_dec_eq(x_1, x_1193);
if (x_1194 == 0)
{
uint8_t x_1195; lean_object* x_1196; 
lean_free_object(x_1189);
lean_dec(x_1191);
x_1195 = 74;
x_1196 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1195, x_1192);
if (lean_obj_tag(x_1196) == 0)
{
uint8_t x_1197; 
x_1197 = !lean_is_exclusive(x_1196);
if (x_1197 == 0)
{
lean_object* x_1198; lean_object* x_1199; lean_object* x_1200; uint8_t x_1201; 
x_1198 = lean_ctor_get(x_1196, 0);
x_1199 = lean_ctor_get(x_1196, 1);
x_1200 = l_LeanRV64DExecutable_Functions_read__CSR___closed__63;
x_1201 = lean_nat_dec_eq(x_1, x_1200);
if (x_1201 == 0)
{
uint8_t x_1202; lean_object* x_1203; 
lean_free_object(x_1196);
lean_dec(x_1198);
x_1202 = 73;
x_1203 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1202, x_1199);
if (lean_obj_tag(x_1203) == 0)
{
uint8_t x_1204; 
x_1204 = !lean_is_exclusive(x_1203);
if (x_1204 == 0)
{
lean_object* x_1205; lean_object* x_1206; lean_object* x_1207; uint8_t x_1208; 
x_1205 = lean_ctor_get(x_1203, 0);
x_1206 = lean_ctor_get(x_1203, 1);
x_1207 = l_LeanRV64DExecutable_Functions_read__CSR___closed__64;
x_1208 = lean_nat_dec_eq(x_1, x_1207);
if (x_1208 == 0)
{
uint8_t x_1209; lean_object* x_1210; 
lean_free_object(x_1203);
lean_dec(x_1205);
x_1209 = 68;
x_1210 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1209, x_1206);
if (lean_obj_tag(x_1210) == 0)
{
uint8_t x_1211; 
x_1211 = !lean_is_exclusive(x_1210);
if (x_1211 == 0)
{
lean_object* x_1212; lean_object* x_1213; lean_object* x_1214; uint8_t x_1215; 
x_1212 = lean_ctor_get(x_1210, 0);
x_1213 = lean_ctor_get(x_1210, 1);
x_1214 = l_LeanRV64DExecutable_Functions_read__CSR___closed__65;
x_1215 = lean_nat_dec_eq(x_1, x_1214);
if (x_1215 == 0)
{
lean_object* x_1216; uint8_t x_1217; 
lean_free_object(x_1210);
lean_dec(x_1212);
x_1216 = l_LeanRV64DExecutable_Functions_read__CSR___closed__66;
x_1217 = lean_nat_dec_eq(x_1, x_1216);
if (x_1217 == 0)
{
lean_object* x_1218; uint8_t x_1219; 
x_1218 = l_LeanRV64DExecutable_Functions_read__CSR___closed__67;
x_1219 = lean_nat_dec_eq(x_1, x_1218);
if (x_1219 == 0)
{
lean_object* x_1220; uint8_t x_1221; 
x_1220 = l_LeanRV64DExecutable_Functions_read__CSR___closed__68;
x_1221 = lean_nat_dec_eq(x_1, x_1220);
if (x_1221 == 0)
{
lean_object* x_1222; uint8_t x_1223; 
x_1222 = l_LeanRV64DExecutable_Functions_read__CSR___closed__69;
x_1223 = lean_nat_dec_eq(x_1, x_1222);
if (x_1223 == 0)
{
lean_object* x_1224; 
x_1224 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1176, x_1213);
if (lean_obj_tag(x_1224) == 0)
{
uint8_t x_1225; 
x_1225 = !lean_is_exclusive(x_1224);
if (x_1225 == 0)
{
lean_object* x_1226; lean_object* x_1227; lean_object* x_1228; uint8_t x_1229; 
x_1226 = lean_ctor_get(x_1224, 0);
x_1227 = lean_ctor_get(x_1224, 1);
x_1228 = l_LeanRV64DExecutable_Functions_read__CSR___closed__70;
x_1229 = lean_nat_dec_eq(x_1, x_1228);
if (x_1229 == 0)
{
uint8_t x_1230; lean_object* x_1231; 
lean_free_object(x_1224);
lean_dec(x_1226);
x_1230 = 83;
x_1231 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1230, x_1227);
if (lean_obj_tag(x_1231) == 0)
{
lean_object* x_1232; lean_object* x_1233; uint8_t x_1234; lean_object* x_1235; 
x_1232 = lean_ctor_get(x_1231, 0);
lean_inc(x_1232);
x_1233 = lean_ctor_get(x_1231, 1);
lean_inc(x_1233);
lean_dec(x_1231);
x_1234 = 81;
x_1235 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1234, x_1233);
if (lean_obj_tag(x_1235) == 0)
{
uint8_t x_1236; 
x_1236 = !lean_is_exclusive(x_1235);
if (x_1236 == 0)
{
lean_object* x_1237; lean_object* x_1238; lean_object* x_1239; uint8_t x_1240; 
x_1237 = lean_ctor_get(x_1235, 0);
x_1238 = lean_ctor_get(x_1235, 1);
x_1239 = l_LeanRV64DExecutable_Functions_read__CSR___closed__71;
x_1240 = lean_nat_dec_eq(x_1, x_1239);
if (x_1240 == 0)
{
uint8_t x_1241; lean_object* x_1242; 
lean_free_object(x_1235);
lean_dec(x_1237);
lean_dec(x_1232);
x_1241 = 84;
x_1242 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1241, x_1238);
if (lean_obj_tag(x_1242) == 0)
{
lean_object* x_1243; lean_object* x_1244; lean_object* x_1245; 
x_1243 = lean_ctor_get(x_1242, 0);
lean_inc(x_1243);
x_1244 = lean_ctor_get(x_1242, 1);
lean_inc(x_1244);
lean_dec(x_1242);
x_1245 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1234, x_1244);
if (lean_obj_tag(x_1245) == 0)
{
uint8_t x_1246; 
x_1246 = !lean_is_exclusive(x_1245);
if (x_1246 == 0)
{
lean_object* x_1247; lean_object* x_1248; lean_object* x_1249; uint8_t x_1250; 
x_1247 = lean_ctor_get(x_1245, 0);
x_1248 = lean_ctor_get(x_1245, 1);
x_1249 = l_LeanRV64DExecutable_Functions_read__CSR___closed__72;
x_1250 = lean_nat_dec_eq(x_1, x_1249);
if (x_1250 == 0)
{
lean_object* x_1251; uint8_t x_1252; 
lean_free_object(x_1245);
lean_dec(x_1247);
lean_dec(x_1243);
x_1251 = l_LeanRV64DExecutable_Functions_read__CSR___closed__73;
x_1252 = lean_nat_dec_eq(x_1, x_1251);
if (x_1252 == 0)
{
lean_object* x_1253; uint8_t x_1254; 
x_1253 = l_LeanRV64DExecutable_Functions_read__CSR___closed__74;
x_1254 = lean_nat_dec_eq(x_1, x_1253);
if (x_1254 == 0)
{
lean_object* x_1255; uint8_t x_1256; 
x_1255 = l_LeanRV64DExecutable_Functions_read__CSR___closed__75;
x_1256 = lean_nat_dec_eq(x_1, x_1255);
if (x_1256 == 0)
{
uint8_t x_1257; lean_object* x_1258; 
x_1257 = 58;
x_1258 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1257, x_1248);
if (lean_obj_tag(x_1258) == 0)
{
uint8_t x_1259; 
x_1259 = !lean_is_exclusive(x_1258);
if (x_1259 == 0)
{
lean_object* x_1260; lean_object* x_1261; lean_object* x_1262; uint8_t x_1263; 
x_1260 = lean_ctor_get(x_1258, 0);
x_1261 = lean_ctor_get(x_1258, 1);
x_1262 = l_LeanRV64DExecutable_Functions_read__CSR___closed__76;
x_1263 = lean_nat_dec_eq(x_1, x_1262);
if (x_1263 == 0)
{
lean_object* x_1264; lean_object* x_1265; lean_object* x_1266; lean_object* x_1267; uint8_t x_1268; 
lean_free_object(x_1258);
lean_dec(x_1260);
x_1264 = lean_unsigned_to_nat(11u);
x_1265 = lean_unsigned_to_nat(4u);
x_1266 = l_BitVec_extractLsb___redArg(x_1264, x_1265, x_1);
x_1267 = l_LeanRV64DExecutable_Functions_read__CSR___closed__77;
x_1268 = lean_nat_dec_eq(x_1266, x_1267);
lean_dec(x_1266);
if (x_1268 == 0)
{
x_776 = x_1261;
x_777 = x_1268;
goto block_1173;
}
else
{
lean_object* x_1269; lean_object* x_1270; lean_object* x_1271; lean_object* x_1272; lean_object* x_1273; uint8_t x_1274; 
x_1269 = lean_unsigned_to_nat(3u);
x_1270 = lean_unsigned_to_nat(0u);
x_1271 = l_BitVec_extractLsb___redArg(x_1269, x_1270, x_1);
x_1272 = l_Sail_BitVec_access(x_1265, x_1271, x_1270);
lean_dec(x_1271);
x_1273 = l_LeanRV64DExecutable_Functions_read__CSR___closed__78;
x_1274 = lean_nat_dec_eq(x_1272, x_1273);
lean_dec(x_1272);
if (x_1274 == 0)
{
uint8_t x_1275; 
x_1275 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_776 = x_1261;
x_777 = x_1275;
goto block_1173;
}
else
{
x_776 = x_1261;
x_777 = x_1274;
goto block_1173;
}
}
}
else
{
lean_object* x_1276; lean_object* x_1277; 
lean_dec(x_1);
x_1276 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_1277 = l_BitVec_not(x_1276, x_1260);
lean_dec(x_1260);
lean_ctor_set(x_1258, 0, x_1277);
return x_1258;
}
}
else
{
lean_object* x_1278; lean_object* x_1279; lean_object* x_1280; uint8_t x_1281; 
x_1278 = lean_ctor_get(x_1258, 0);
x_1279 = lean_ctor_get(x_1258, 1);
lean_inc(x_1279);
lean_inc(x_1278);
lean_dec(x_1258);
x_1280 = l_LeanRV64DExecutable_Functions_read__CSR___closed__76;
x_1281 = lean_nat_dec_eq(x_1, x_1280);
if (x_1281 == 0)
{
lean_object* x_1282; lean_object* x_1283; lean_object* x_1284; lean_object* x_1285; uint8_t x_1286; 
lean_dec(x_1278);
x_1282 = lean_unsigned_to_nat(11u);
x_1283 = lean_unsigned_to_nat(4u);
x_1284 = l_BitVec_extractLsb___redArg(x_1282, x_1283, x_1);
x_1285 = l_LeanRV64DExecutable_Functions_read__CSR___closed__77;
x_1286 = lean_nat_dec_eq(x_1284, x_1285);
lean_dec(x_1284);
if (x_1286 == 0)
{
x_776 = x_1279;
x_777 = x_1286;
goto block_1173;
}
else
{
lean_object* x_1287; lean_object* x_1288; lean_object* x_1289; lean_object* x_1290; lean_object* x_1291; uint8_t x_1292; 
x_1287 = lean_unsigned_to_nat(3u);
x_1288 = lean_unsigned_to_nat(0u);
x_1289 = l_BitVec_extractLsb___redArg(x_1287, x_1288, x_1);
x_1290 = l_Sail_BitVec_access(x_1283, x_1289, x_1288);
lean_dec(x_1289);
x_1291 = l_LeanRV64DExecutable_Functions_read__CSR___closed__78;
x_1292 = lean_nat_dec_eq(x_1290, x_1291);
lean_dec(x_1290);
if (x_1292 == 0)
{
uint8_t x_1293; 
x_1293 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_776 = x_1279;
x_777 = x_1293;
goto block_1173;
}
else
{
x_776 = x_1279;
x_777 = x_1292;
goto block_1173;
}
}
}
else
{
lean_object* x_1294; lean_object* x_1295; lean_object* x_1296; 
lean_dec(x_1);
x_1294 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_1295 = l_BitVec_not(x_1294, x_1278);
lean_dec(x_1278);
x_1296 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1296, 0, x_1295);
lean_ctor_set(x_1296, 1, x_1279);
return x_1296;
}
}
}
else
{
uint8_t x_1297; 
lean_dec(x_1);
x_1297 = !lean_is_exclusive(x_1258);
if (x_1297 == 0)
{
lean_object* x_1298; lean_object* x_1299; 
x_1298 = lean_ctor_get(x_1258, 0);
lean_dec(x_1298);
x_1299 = lean_box(1);
lean_ctor_set(x_1258, 0, x_1299);
return x_1258;
}
else
{
lean_object* x_1300; lean_object* x_1301; lean_object* x_1302; 
x_1300 = lean_ctor_get(x_1258, 1);
lean_inc(x_1300);
lean_dec(x_1258);
x_1301 = lean_box(1);
x_1302 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1302, 0, x_1301);
lean_ctor_set(x_1302, 1, x_1300);
return x_1302;
}
}
}
else
{
uint8_t x_1303; lean_object* x_1304; 
lean_dec(x_1);
x_1303 = 59;
x_1304 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1303, x_1248);
return x_1304;
}
}
else
{
uint8_t x_1305; lean_object* x_1306; 
lean_dec(x_1);
x_1305 = 60;
x_1306 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1305, x_1248);
return x_1306;
}
}
else
{
uint8_t x_1307; lean_object* x_1308; 
lean_dec(x_1);
x_1307 = 62;
x_1308 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1307, x_1248);
return x_1308;
}
}
else
{
lean_object* x_1309; 
lean_dec(x_1);
x_1309 = l_LeanRV64DExecutable_Functions_lower__mie(x_1243, x_1247);
lean_dec(x_1247);
lean_dec(x_1243);
lean_ctor_set(x_1245, 0, x_1309);
return x_1245;
}
}
else
{
lean_object* x_1310; lean_object* x_1311; lean_object* x_1312; uint8_t x_1313; 
x_1310 = lean_ctor_get(x_1245, 0);
x_1311 = lean_ctor_get(x_1245, 1);
lean_inc(x_1311);
lean_inc(x_1310);
lean_dec(x_1245);
x_1312 = l_LeanRV64DExecutable_Functions_read__CSR___closed__72;
x_1313 = lean_nat_dec_eq(x_1, x_1312);
if (x_1313 == 0)
{
lean_object* x_1314; uint8_t x_1315; 
lean_dec(x_1310);
lean_dec(x_1243);
x_1314 = l_LeanRV64DExecutable_Functions_read__CSR___closed__73;
x_1315 = lean_nat_dec_eq(x_1, x_1314);
if (x_1315 == 0)
{
lean_object* x_1316; uint8_t x_1317; 
x_1316 = l_LeanRV64DExecutable_Functions_read__CSR___closed__74;
x_1317 = lean_nat_dec_eq(x_1, x_1316);
if (x_1317 == 0)
{
lean_object* x_1318; uint8_t x_1319; 
x_1318 = l_LeanRV64DExecutable_Functions_read__CSR___closed__75;
x_1319 = lean_nat_dec_eq(x_1, x_1318);
if (x_1319 == 0)
{
uint8_t x_1320; lean_object* x_1321; 
x_1320 = 58;
x_1321 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1320, x_1311);
if (lean_obj_tag(x_1321) == 0)
{
lean_object* x_1322; lean_object* x_1323; lean_object* x_1324; lean_object* x_1325; uint8_t x_1326; 
x_1322 = lean_ctor_get(x_1321, 0);
lean_inc(x_1322);
x_1323 = lean_ctor_get(x_1321, 1);
lean_inc(x_1323);
if (lean_is_exclusive(x_1321)) {
 lean_ctor_release(x_1321, 0);
 lean_ctor_release(x_1321, 1);
 x_1324 = x_1321;
} else {
 lean_dec_ref(x_1321);
 x_1324 = lean_box(0);
}
x_1325 = l_LeanRV64DExecutable_Functions_read__CSR___closed__76;
x_1326 = lean_nat_dec_eq(x_1, x_1325);
if (x_1326 == 0)
{
lean_object* x_1327; lean_object* x_1328; lean_object* x_1329; lean_object* x_1330; uint8_t x_1331; 
lean_dec(x_1324);
lean_dec(x_1322);
x_1327 = lean_unsigned_to_nat(11u);
x_1328 = lean_unsigned_to_nat(4u);
x_1329 = l_BitVec_extractLsb___redArg(x_1327, x_1328, x_1);
x_1330 = l_LeanRV64DExecutable_Functions_read__CSR___closed__77;
x_1331 = lean_nat_dec_eq(x_1329, x_1330);
lean_dec(x_1329);
if (x_1331 == 0)
{
x_776 = x_1323;
x_777 = x_1331;
goto block_1173;
}
else
{
lean_object* x_1332; lean_object* x_1333; lean_object* x_1334; lean_object* x_1335; lean_object* x_1336; uint8_t x_1337; 
x_1332 = lean_unsigned_to_nat(3u);
x_1333 = lean_unsigned_to_nat(0u);
x_1334 = l_BitVec_extractLsb___redArg(x_1332, x_1333, x_1);
x_1335 = l_Sail_BitVec_access(x_1328, x_1334, x_1333);
lean_dec(x_1334);
x_1336 = l_LeanRV64DExecutable_Functions_read__CSR___closed__78;
x_1337 = lean_nat_dec_eq(x_1335, x_1336);
lean_dec(x_1335);
if (x_1337 == 0)
{
uint8_t x_1338; 
x_1338 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_776 = x_1323;
x_777 = x_1338;
goto block_1173;
}
else
{
x_776 = x_1323;
x_777 = x_1337;
goto block_1173;
}
}
}
else
{
lean_object* x_1339; lean_object* x_1340; lean_object* x_1341; 
lean_dec(x_1);
x_1339 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_1340 = l_BitVec_not(x_1339, x_1322);
lean_dec(x_1322);
if (lean_is_scalar(x_1324)) {
 x_1341 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1341 = x_1324;
}
lean_ctor_set(x_1341, 0, x_1340);
lean_ctor_set(x_1341, 1, x_1323);
return x_1341;
}
}
else
{
lean_object* x_1342; lean_object* x_1343; lean_object* x_1344; lean_object* x_1345; 
lean_dec(x_1);
x_1342 = lean_ctor_get(x_1321, 1);
lean_inc(x_1342);
if (lean_is_exclusive(x_1321)) {
 lean_ctor_release(x_1321, 0);
 lean_ctor_release(x_1321, 1);
 x_1343 = x_1321;
} else {
 lean_dec_ref(x_1321);
 x_1343 = lean_box(0);
}
x_1344 = lean_box(1);
if (lean_is_scalar(x_1343)) {
 x_1345 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1345 = x_1343;
}
lean_ctor_set(x_1345, 0, x_1344);
lean_ctor_set(x_1345, 1, x_1342);
return x_1345;
}
}
else
{
uint8_t x_1346; lean_object* x_1347; 
lean_dec(x_1);
x_1346 = 59;
x_1347 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1346, x_1311);
return x_1347;
}
}
else
{
uint8_t x_1348; lean_object* x_1349; 
lean_dec(x_1);
x_1348 = 60;
x_1349 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1348, x_1311);
return x_1349;
}
}
else
{
uint8_t x_1350; lean_object* x_1351; 
lean_dec(x_1);
x_1350 = 62;
x_1351 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1350, x_1311);
return x_1351;
}
}
else
{
lean_object* x_1352; lean_object* x_1353; 
lean_dec(x_1);
x_1352 = l_LeanRV64DExecutable_Functions_lower__mie(x_1243, x_1310);
lean_dec(x_1310);
lean_dec(x_1243);
x_1353 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1353, 0, x_1352);
lean_ctor_set(x_1353, 1, x_1311);
return x_1353;
}
}
}
else
{
uint8_t x_1354; 
lean_dec(x_1243);
lean_dec(x_1);
x_1354 = !lean_is_exclusive(x_1245);
if (x_1354 == 0)
{
lean_object* x_1355; lean_object* x_1356; 
x_1355 = lean_ctor_get(x_1245, 0);
lean_dec(x_1355);
x_1356 = lean_box(1);
lean_ctor_set(x_1245, 0, x_1356);
return x_1245;
}
else
{
lean_object* x_1357; lean_object* x_1358; lean_object* x_1359; 
x_1357 = lean_ctor_get(x_1245, 1);
lean_inc(x_1357);
lean_dec(x_1245);
x_1358 = lean_box(1);
x_1359 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1359, 0, x_1358);
lean_ctor_set(x_1359, 1, x_1357);
return x_1359;
}
}
}
else
{
uint8_t x_1360; 
lean_dec(x_1);
x_1360 = !lean_is_exclusive(x_1242);
if (x_1360 == 0)
{
lean_object* x_1361; lean_object* x_1362; 
x_1361 = lean_ctor_get(x_1242, 0);
lean_dec(x_1361);
x_1362 = lean_box(1);
lean_ctor_set(x_1242, 0, x_1362);
return x_1242;
}
else
{
lean_object* x_1363; lean_object* x_1364; lean_object* x_1365; 
x_1363 = lean_ctor_get(x_1242, 1);
lean_inc(x_1363);
lean_dec(x_1242);
x_1364 = lean_box(1);
x_1365 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1365, 0, x_1364);
lean_ctor_set(x_1365, 1, x_1363);
return x_1365;
}
}
}
else
{
lean_object* x_1366; 
lean_dec(x_1);
x_1366 = l_LeanRV64DExecutable_Functions_lower__mip(x_1232, x_1237);
lean_dec(x_1237);
lean_dec(x_1232);
lean_ctor_set(x_1235, 0, x_1366);
return x_1235;
}
}
else
{
lean_object* x_1367; lean_object* x_1368; lean_object* x_1369; uint8_t x_1370; 
x_1367 = lean_ctor_get(x_1235, 0);
x_1368 = lean_ctor_get(x_1235, 1);
lean_inc(x_1368);
lean_inc(x_1367);
lean_dec(x_1235);
x_1369 = l_LeanRV64DExecutable_Functions_read__CSR___closed__71;
x_1370 = lean_nat_dec_eq(x_1, x_1369);
if (x_1370 == 0)
{
uint8_t x_1371; lean_object* x_1372; 
lean_dec(x_1367);
lean_dec(x_1232);
x_1371 = 84;
x_1372 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1371, x_1368);
if (lean_obj_tag(x_1372) == 0)
{
lean_object* x_1373; lean_object* x_1374; lean_object* x_1375; 
x_1373 = lean_ctor_get(x_1372, 0);
lean_inc(x_1373);
x_1374 = lean_ctor_get(x_1372, 1);
lean_inc(x_1374);
lean_dec(x_1372);
x_1375 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1234, x_1374);
if (lean_obj_tag(x_1375) == 0)
{
lean_object* x_1376; lean_object* x_1377; lean_object* x_1378; lean_object* x_1379; uint8_t x_1380; 
x_1376 = lean_ctor_get(x_1375, 0);
lean_inc(x_1376);
x_1377 = lean_ctor_get(x_1375, 1);
lean_inc(x_1377);
if (lean_is_exclusive(x_1375)) {
 lean_ctor_release(x_1375, 0);
 lean_ctor_release(x_1375, 1);
 x_1378 = x_1375;
} else {
 lean_dec_ref(x_1375);
 x_1378 = lean_box(0);
}
x_1379 = l_LeanRV64DExecutable_Functions_read__CSR___closed__72;
x_1380 = lean_nat_dec_eq(x_1, x_1379);
if (x_1380 == 0)
{
lean_object* x_1381; uint8_t x_1382; 
lean_dec(x_1378);
lean_dec(x_1376);
lean_dec(x_1373);
x_1381 = l_LeanRV64DExecutable_Functions_read__CSR___closed__73;
x_1382 = lean_nat_dec_eq(x_1, x_1381);
if (x_1382 == 0)
{
lean_object* x_1383; uint8_t x_1384; 
x_1383 = l_LeanRV64DExecutable_Functions_read__CSR___closed__74;
x_1384 = lean_nat_dec_eq(x_1, x_1383);
if (x_1384 == 0)
{
lean_object* x_1385; uint8_t x_1386; 
x_1385 = l_LeanRV64DExecutable_Functions_read__CSR___closed__75;
x_1386 = lean_nat_dec_eq(x_1, x_1385);
if (x_1386 == 0)
{
uint8_t x_1387; lean_object* x_1388; 
x_1387 = 58;
x_1388 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1387, x_1377);
if (lean_obj_tag(x_1388) == 0)
{
lean_object* x_1389; lean_object* x_1390; lean_object* x_1391; lean_object* x_1392; uint8_t x_1393; 
x_1389 = lean_ctor_get(x_1388, 0);
lean_inc(x_1389);
x_1390 = lean_ctor_get(x_1388, 1);
lean_inc(x_1390);
if (lean_is_exclusive(x_1388)) {
 lean_ctor_release(x_1388, 0);
 lean_ctor_release(x_1388, 1);
 x_1391 = x_1388;
} else {
 lean_dec_ref(x_1388);
 x_1391 = lean_box(0);
}
x_1392 = l_LeanRV64DExecutable_Functions_read__CSR___closed__76;
x_1393 = lean_nat_dec_eq(x_1, x_1392);
if (x_1393 == 0)
{
lean_object* x_1394; lean_object* x_1395; lean_object* x_1396; lean_object* x_1397; uint8_t x_1398; 
lean_dec(x_1391);
lean_dec(x_1389);
x_1394 = lean_unsigned_to_nat(11u);
x_1395 = lean_unsigned_to_nat(4u);
x_1396 = l_BitVec_extractLsb___redArg(x_1394, x_1395, x_1);
x_1397 = l_LeanRV64DExecutable_Functions_read__CSR___closed__77;
x_1398 = lean_nat_dec_eq(x_1396, x_1397);
lean_dec(x_1396);
if (x_1398 == 0)
{
x_776 = x_1390;
x_777 = x_1398;
goto block_1173;
}
else
{
lean_object* x_1399; lean_object* x_1400; lean_object* x_1401; lean_object* x_1402; lean_object* x_1403; uint8_t x_1404; 
x_1399 = lean_unsigned_to_nat(3u);
x_1400 = lean_unsigned_to_nat(0u);
x_1401 = l_BitVec_extractLsb___redArg(x_1399, x_1400, x_1);
x_1402 = l_Sail_BitVec_access(x_1395, x_1401, x_1400);
lean_dec(x_1401);
x_1403 = l_LeanRV64DExecutable_Functions_read__CSR___closed__78;
x_1404 = lean_nat_dec_eq(x_1402, x_1403);
lean_dec(x_1402);
if (x_1404 == 0)
{
uint8_t x_1405; 
x_1405 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_776 = x_1390;
x_777 = x_1405;
goto block_1173;
}
else
{
x_776 = x_1390;
x_777 = x_1404;
goto block_1173;
}
}
}
else
{
lean_object* x_1406; lean_object* x_1407; lean_object* x_1408; 
lean_dec(x_1);
x_1406 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_1407 = l_BitVec_not(x_1406, x_1389);
lean_dec(x_1389);
if (lean_is_scalar(x_1391)) {
 x_1408 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1408 = x_1391;
}
lean_ctor_set(x_1408, 0, x_1407);
lean_ctor_set(x_1408, 1, x_1390);
return x_1408;
}
}
else
{
lean_object* x_1409; lean_object* x_1410; lean_object* x_1411; lean_object* x_1412; 
lean_dec(x_1);
x_1409 = lean_ctor_get(x_1388, 1);
lean_inc(x_1409);
if (lean_is_exclusive(x_1388)) {
 lean_ctor_release(x_1388, 0);
 lean_ctor_release(x_1388, 1);
 x_1410 = x_1388;
} else {
 lean_dec_ref(x_1388);
 x_1410 = lean_box(0);
}
x_1411 = lean_box(1);
if (lean_is_scalar(x_1410)) {
 x_1412 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1412 = x_1410;
}
lean_ctor_set(x_1412, 0, x_1411);
lean_ctor_set(x_1412, 1, x_1409);
return x_1412;
}
}
else
{
uint8_t x_1413; lean_object* x_1414; 
lean_dec(x_1);
x_1413 = 59;
x_1414 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1413, x_1377);
return x_1414;
}
}
else
{
uint8_t x_1415; lean_object* x_1416; 
lean_dec(x_1);
x_1415 = 60;
x_1416 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1415, x_1377);
return x_1416;
}
}
else
{
uint8_t x_1417; lean_object* x_1418; 
lean_dec(x_1);
x_1417 = 62;
x_1418 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1417, x_1377);
return x_1418;
}
}
else
{
lean_object* x_1419; lean_object* x_1420; 
lean_dec(x_1);
x_1419 = l_LeanRV64DExecutable_Functions_lower__mie(x_1373, x_1376);
lean_dec(x_1376);
lean_dec(x_1373);
if (lean_is_scalar(x_1378)) {
 x_1420 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1420 = x_1378;
}
lean_ctor_set(x_1420, 0, x_1419);
lean_ctor_set(x_1420, 1, x_1377);
return x_1420;
}
}
else
{
lean_object* x_1421; lean_object* x_1422; lean_object* x_1423; lean_object* x_1424; 
lean_dec(x_1373);
lean_dec(x_1);
x_1421 = lean_ctor_get(x_1375, 1);
lean_inc(x_1421);
if (lean_is_exclusive(x_1375)) {
 lean_ctor_release(x_1375, 0);
 lean_ctor_release(x_1375, 1);
 x_1422 = x_1375;
} else {
 lean_dec_ref(x_1375);
 x_1422 = lean_box(0);
}
x_1423 = lean_box(1);
if (lean_is_scalar(x_1422)) {
 x_1424 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1424 = x_1422;
}
lean_ctor_set(x_1424, 0, x_1423);
lean_ctor_set(x_1424, 1, x_1421);
return x_1424;
}
}
else
{
lean_object* x_1425; lean_object* x_1426; lean_object* x_1427; lean_object* x_1428; 
lean_dec(x_1);
x_1425 = lean_ctor_get(x_1372, 1);
lean_inc(x_1425);
if (lean_is_exclusive(x_1372)) {
 lean_ctor_release(x_1372, 0);
 lean_ctor_release(x_1372, 1);
 x_1426 = x_1372;
} else {
 lean_dec_ref(x_1372);
 x_1426 = lean_box(0);
}
x_1427 = lean_box(1);
if (lean_is_scalar(x_1426)) {
 x_1428 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1428 = x_1426;
}
lean_ctor_set(x_1428, 0, x_1427);
lean_ctor_set(x_1428, 1, x_1425);
return x_1428;
}
}
else
{
lean_object* x_1429; lean_object* x_1430; 
lean_dec(x_1);
x_1429 = l_LeanRV64DExecutable_Functions_lower__mip(x_1232, x_1367);
lean_dec(x_1367);
lean_dec(x_1232);
x_1430 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1430, 0, x_1429);
lean_ctor_set(x_1430, 1, x_1368);
return x_1430;
}
}
}
else
{
uint8_t x_1431; 
lean_dec(x_1232);
lean_dec(x_1);
x_1431 = !lean_is_exclusive(x_1235);
if (x_1431 == 0)
{
lean_object* x_1432; lean_object* x_1433; 
x_1432 = lean_ctor_get(x_1235, 0);
lean_dec(x_1432);
x_1433 = lean_box(1);
lean_ctor_set(x_1235, 0, x_1433);
return x_1235;
}
else
{
lean_object* x_1434; lean_object* x_1435; lean_object* x_1436; 
x_1434 = lean_ctor_get(x_1235, 1);
lean_inc(x_1434);
lean_dec(x_1235);
x_1435 = lean_box(1);
x_1436 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1436, 0, x_1435);
lean_ctor_set(x_1436, 1, x_1434);
return x_1436;
}
}
}
else
{
uint8_t x_1437; 
lean_dec(x_1);
x_1437 = !lean_is_exclusive(x_1231);
if (x_1437 == 0)
{
lean_object* x_1438; lean_object* x_1439; 
x_1438 = lean_ctor_get(x_1231, 0);
lean_dec(x_1438);
x_1439 = lean_box(1);
lean_ctor_set(x_1231, 0, x_1439);
return x_1231;
}
else
{
lean_object* x_1440; lean_object* x_1441; lean_object* x_1442; 
x_1440 = lean_ctor_get(x_1231, 1);
lean_inc(x_1440);
lean_dec(x_1231);
x_1441 = lean_box(1);
x_1442 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1442, 0, x_1441);
lean_ctor_set(x_1442, 1, x_1440);
return x_1442;
}
}
}
else
{
lean_object* x_1443; lean_object* x_1444; lean_object* x_1445; lean_object* x_1446; 
lean_dec(x_1);
x_1443 = l_LeanRV64DExecutable_Functions_lower__mstatus(x_1226);
lean_dec(x_1226);
x_1444 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_1445 = lean_unsigned_to_nat(0u);
x_1446 = l_BitVec_extractLsb___redArg(x_1444, x_1445, x_1443);
lean_dec(x_1443);
lean_ctor_set(x_1224, 0, x_1446);
return x_1224;
}
}
else
{
lean_object* x_1447; lean_object* x_1448; lean_object* x_1449; uint8_t x_1450; 
x_1447 = lean_ctor_get(x_1224, 0);
x_1448 = lean_ctor_get(x_1224, 1);
lean_inc(x_1448);
lean_inc(x_1447);
lean_dec(x_1224);
x_1449 = l_LeanRV64DExecutable_Functions_read__CSR___closed__70;
x_1450 = lean_nat_dec_eq(x_1, x_1449);
if (x_1450 == 0)
{
uint8_t x_1451; lean_object* x_1452; 
lean_dec(x_1447);
x_1451 = 83;
x_1452 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1451, x_1448);
if (lean_obj_tag(x_1452) == 0)
{
lean_object* x_1453; lean_object* x_1454; uint8_t x_1455; lean_object* x_1456; 
x_1453 = lean_ctor_get(x_1452, 0);
lean_inc(x_1453);
x_1454 = lean_ctor_get(x_1452, 1);
lean_inc(x_1454);
lean_dec(x_1452);
x_1455 = 81;
x_1456 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1455, x_1454);
if (lean_obj_tag(x_1456) == 0)
{
lean_object* x_1457; lean_object* x_1458; lean_object* x_1459; lean_object* x_1460; uint8_t x_1461; 
x_1457 = lean_ctor_get(x_1456, 0);
lean_inc(x_1457);
x_1458 = lean_ctor_get(x_1456, 1);
lean_inc(x_1458);
if (lean_is_exclusive(x_1456)) {
 lean_ctor_release(x_1456, 0);
 lean_ctor_release(x_1456, 1);
 x_1459 = x_1456;
} else {
 lean_dec_ref(x_1456);
 x_1459 = lean_box(0);
}
x_1460 = l_LeanRV64DExecutable_Functions_read__CSR___closed__71;
x_1461 = lean_nat_dec_eq(x_1, x_1460);
if (x_1461 == 0)
{
uint8_t x_1462; lean_object* x_1463; 
lean_dec(x_1459);
lean_dec(x_1457);
lean_dec(x_1453);
x_1462 = 84;
x_1463 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1462, x_1458);
if (lean_obj_tag(x_1463) == 0)
{
lean_object* x_1464; lean_object* x_1465; lean_object* x_1466; 
x_1464 = lean_ctor_get(x_1463, 0);
lean_inc(x_1464);
x_1465 = lean_ctor_get(x_1463, 1);
lean_inc(x_1465);
lean_dec(x_1463);
x_1466 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1455, x_1465);
if (lean_obj_tag(x_1466) == 0)
{
lean_object* x_1467; lean_object* x_1468; lean_object* x_1469; lean_object* x_1470; uint8_t x_1471; 
x_1467 = lean_ctor_get(x_1466, 0);
lean_inc(x_1467);
x_1468 = lean_ctor_get(x_1466, 1);
lean_inc(x_1468);
if (lean_is_exclusive(x_1466)) {
 lean_ctor_release(x_1466, 0);
 lean_ctor_release(x_1466, 1);
 x_1469 = x_1466;
} else {
 lean_dec_ref(x_1466);
 x_1469 = lean_box(0);
}
x_1470 = l_LeanRV64DExecutable_Functions_read__CSR___closed__72;
x_1471 = lean_nat_dec_eq(x_1, x_1470);
if (x_1471 == 0)
{
lean_object* x_1472; uint8_t x_1473; 
lean_dec(x_1469);
lean_dec(x_1467);
lean_dec(x_1464);
x_1472 = l_LeanRV64DExecutable_Functions_read__CSR___closed__73;
x_1473 = lean_nat_dec_eq(x_1, x_1472);
if (x_1473 == 0)
{
lean_object* x_1474; uint8_t x_1475; 
x_1474 = l_LeanRV64DExecutable_Functions_read__CSR___closed__74;
x_1475 = lean_nat_dec_eq(x_1, x_1474);
if (x_1475 == 0)
{
lean_object* x_1476; uint8_t x_1477; 
x_1476 = l_LeanRV64DExecutable_Functions_read__CSR___closed__75;
x_1477 = lean_nat_dec_eq(x_1, x_1476);
if (x_1477 == 0)
{
uint8_t x_1478; lean_object* x_1479; 
x_1478 = 58;
x_1479 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1478, x_1468);
if (lean_obj_tag(x_1479) == 0)
{
lean_object* x_1480; lean_object* x_1481; lean_object* x_1482; lean_object* x_1483; uint8_t x_1484; 
x_1480 = lean_ctor_get(x_1479, 0);
lean_inc(x_1480);
x_1481 = lean_ctor_get(x_1479, 1);
lean_inc(x_1481);
if (lean_is_exclusive(x_1479)) {
 lean_ctor_release(x_1479, 0);
 lean_ctor_release(x_1479, 1);
 x_1482 = x_1479;
} else {
 lean_dec_ref(x_1479);
 x_1482 = lean_box(0);
}
x_1483 = l_LeanRV64DExecutable_Functions_read__CSR___closed__76;
x_1484 = lean_nat_dec_eq(x_1, x_1483);
if (x_1484 == 0)
{
lean_object* x_1485; lean_object* x_1486; lean_object* x_1487; lean_object* x_1488; uint8_t x_1489; 
lean_dec(x_1482);
lean_dec(x_1480);
x_1485 = lean_unsigned_to_nat(11u);
x_1486 = lean_unsigned_to_nat(4u);
x_1487 = l_BitVec_extractLsb___redArg(x_1485, x_1486, x_1);
x_1488 = l_LeanRV64DExecutable_Functions_read__CSR___closed__77;
x_1489 = lean_nat_dec_eq(x_1487, x_1488);
lean_dec(x_1487);
if (x_1489 == 0)
{
x_776 = x_1481;
x_777 = x_1489;
goto block_1173;
}
else
{
lean_object* x_1490; lean_object* x_1491; lean_object* x_1492; lean_object* x_1493; lean_object* x_1494; uint8_t x_1495; 
x_1490 = lean_unsigned_to_nat(3u);
x_1491 = lean_unsigned_to_nat(0u);
x_1492 = l_BitVec_extractLsb___redArg(x_1490, x_1491, x_1);
x_1493 = l_Sail_BitVec_access(x_1486, x_1492, x_1491);
lean_dec(x_1492);
x_1494 = l_LeanRV64DExecutable_Functions_read__CSR___closed__78;
x_1495 = lean_nat_dec_eq(x_1493, x_1494);
lean_dec(x_1493);
if (x_1495 == 0)
{
uint8_t x_1496; 
x_1496 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_776 = x_1481;
x_777 = x_1496;
goto block_1173;
}
else
{
x_776 = x_1481;
x_777 = x_1495;
goto block_1173;
}
}
}
else
{
lean_object* x_1497; lean_object* x_1498; lean_object* x_1499; 
lean_dec(x_1);
x_1497 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_1498 = l_BitVec_not(x_1497, x_1480);
lean_dec(x_1480);
if (lean_is_scalar(x_1482)) {
 x_1499 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1499 = x_1482;
}
lean_ctor_set(x_1499, 0, x_1498);
lean_ctor_set(x_1499, 1, x_1481);
return x_1499;
}
}
else
{
lean_object* x_1500; lean_object* x_1501; lean_object* x_1502; lean_object* x_1503; 
lean_dec(x_1);
x_1500 = lean_ctor_get(x_1479, 1);
lean_inc(x_1500);
if (lean_is_exclusive(x_1479)) {
 lean_ctor_release(x_1479, 0);
 lean_ctor_release(x_1479, 1);
 x_1501 = x_1479;
} else {
 lean_dec_ref(x_1479);
 x_1501 = lean_box(0);
}
x_1502 = lean_box(1);
if (lean_is_scalar(x_1501)) {
 x_1503 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1503 = x_1501;
}
lean_ctor_set(x_1503, 0, x_1502);
lean_ctor_set(x_1503, 1, x_1500);
return x_1503;
}
}
else
{
uint8_t x_1504; lean_object* x_1505; 
lean_dec(x_1);
x_1504 = 59;
x_1505 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1504, x_1468);
return x_1505;
}
}
else
{
uint8_t x_1506; lean_object* x_1507; 
lean_dec(x_1);
x_1506 = 60;
x_1507 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1506, x_1468);
return x_1507;
}
}
else
{
uint8_t x_1508; lean_object* x_1509; 
lean_dec(x_1);
x_1508 = 62;
x_1509 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1508, x_1468);
return x_1509;
}
}
else
{
lean_object* x_1510; lean_object* x_1511; 
lean_dec(x_1);
x_1510 = l_LeanRV64DExecutable_Functions_lower__mie(x_1464, x_1467);
lean_dec(x_1467);
lean_dec(x_1464);
if (lean_is_scalar(x_1469)) {
 x_1511 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1511 = x_1469;
}
lean_ctor_set(x_1511, 0, x_1510);
lean_ctor_set(x_1511, 1, x_1468);
return x_1511;
}
}
else
{
lean_object* x_1512; lean_object* x_1513; lean_object* x_1514; lean_object* x_1515; 
lean_dec(x_1464);
lean_dec(x_1);
x_1512 = lean_ctor_get(x_1466, 1);
lean_inc(x_1512);
if (lean_is_exclusive(x_1466)) {
 lean_ctor_release(x_1466, 0);
 lean_ctor_release(x_1466, 1);
 x_1513 = x_1466;
} else {
 lean_dec_ref(x_1466);
 x_1513 = lean_box(0);
}
x_1514 = lean_box(1);
if (lean_is_scalar(x_1513)) {
 x_1515 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1515 = x_1513;
}
lean_ctor_set(x_1515, 0, x_1514);
lean_ctor_set(x_1515, 1, x_1512);
return x_1515;
}
}
else
{
lean_object* x_1516; lean_object* x_1517; lean_object* x_1518; lean_object* x_1519; 
lean_dec(x_1);
x_1516 = lean_ctor_get(x_1463, 1);
lean_inc(x_1516);
if (lean_is_exclusive(x_1463)) {
 lean_ctor_release(x_1463, 0);
 lean_ctor_release(x_1463, 1);
 x_1517 = x_1463;
} else {
 lean_dec_ref(x_1463);
 x_1517 = lean_box(0);
}
x_1518 = lean_box(1);
if (lean_is_scalar(x_1517)) {
 x_1519 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1519 = x_1517;
}
lean_ctor_set(x_1519, 0, x_1518);
lean_ctor_set(x_1519, 1, x_1516);
return x_1519;
}
}
else
{
lean_object* x_1520; lean_object* x_1521; 
lean_dec(x_1);
x_1520 = l_LeanRV64DExecutable_Functions_lower__mip(x_1453, x_1457);
lean_dec(x_1457);
lean_dec(x_1453);
if (lean_is_scalar(x_1459)) {
 x_1521 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1521 = x_1459;
}
lean_ctor_set(x_1521, 0, x_1520);
lean_ctor_set(x_1521, 1, x_1458);
return x_1521;
}
}
else
{
lean_object* x_1522; lean_object* x_1523; lean_object* x_1524; lean_object* x_1525; 
lean_dec(x_1453);
lean_dec(x_1);
x_1522 = lean_ctor_get(x_1456, 1);
lean_inc(x_1522);
if (lean_is_exclusive(x_1456)) {
 lean_ctor_release(x_1456, 0);
 lean_ctor_release(x_1456, 1);
 x_1523 = x_1456;
} else {
 lean_dec_ref(x_1456);
 x_1523 = lean_box(0);
}
x_1524 = lean_box(1);
if (lean_is_scalar(x_1523)) {
 x_1525 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1525 = x_1523;
}
lean_ctor_set(x_1525, 0, x_1524);
lean_ctor_set(x_1525, 1, x_1522);
return x_1525;
}
}
else
{
lean_object* x_1526; lean_object* x_1527; lean_object* x_1528; lean_object* x_1529; 
lean_dec(x_1);
x_1526 = lean_ctor_get(x_1452, 1);
lean_inc(x_1526);
if (lean_is_exclusive(x_1452)) {
 lean_ctor_release(x_1452, 0);
 lean_ctor_release(x_1452, 1);
 x_1527 = x_1452;
} else {
 lean_dec_ref(x_1452);
 x_1527 = lean_box(0);
}
x_1528 = lean_box(1);
if (lean_is_scalar(x_1527)) {
 x_1529 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1529 = x_1527;
}
lean_ctor_set(x_1529, 0, x_1528);
lean_ctor_set(x_1529, 1, x_1526);
return x_1529;
}
}
else
{
lean_object* x_1530; lean_object* x_1531; lean_object* x_1532; lean_object* x_1533; lean_object* x_1534; 
lean_dec(x_1);
x_1530 = l_LeanRV64DExecutable_Functions_lower__mstatus(x_1447);
lean_dec(x_1447);
x_1531 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_1532 = lean_unsigned_to_nat(0u);
x_1533 = l_BitVec_extractLsb___redArg(x_1531, x_1532, x_1530);
lean_dec(x_1530);
x_1534 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1534, 0, x_1533);
lean_ctor_set(x_1534, 1, x_1448);
return x_1534;
}
}
}
else
{
uint8_t x_1535; 
lean_dec(x_1);
x_1535 = !lean_is_exclusive(x_1224);
if (x_1535 == 0)
{
lean_object* x_1536; lean_object* x_1537; 
x_1536 = lean_ctor_get(x_1224, 0);
lean_dec(x_1536);
x_1537 = lean_box(1);
lean_ctor_set(x_1224, 0, x_1537);
return x_1224;
}
else
{
lean_object* x_1538; lean_object* x_1539; lean_object* x_1540; 
x_1538 = lean_ctor_get(x_1224, 1);
lean_inc(x_1538);
lean_dec(x_1224);
x_1539 = lean_box(1);
x_1540 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1540, 0, x_1539);
lean_ctor_set(x_1540, 1, x_1538);
return x_1540;
}
}
}
else
{
uint8_t x_1541; lean_object* x_1542; 
lean_dec(x_1);
x_1541 = 64;
x_1542 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1541, x_1213);
return x_1542;
}
}
else
{
uint8_t x_1543; lean_object* x_1544; 
lean_dec(x_1);
x_1543 = 65;
x_1544 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1543, x_1213);
return x_1544;
}
}
else
{
uint8_t x_1545; lean_object* x_1546; 
lean_dec(x_1);
x_1545 = 67;
x_1546 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1545, x_1213);
return x_1546;
}
}
else
{
uint8_t x_1547; lean_object* x_1548; 
lean_dec(x_1);
x_1547 = 66;
x_1548 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1547, x_1213);
return x_1548;
}
}
else
{
lean_object* x_1549; lean_object* x_1550; lean_object* x_1551; 
lean_dec(x_1);
x_1549 = lean_unsigned_to_nat(32u);
x_1550 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1551 = l_BitVec_setWidth(x_1549, x_1550, x_1212);
lean_dec(x_1212);
lean_ctor_set(x_1210, 0, x_1551);
return x_1210;
}
}
else
{
lean_object* x_1552; lean_object* x_1553; lean_object* x_1554; uint8_t x_1555; 
x_1552 = lean_ctor_get(x_1210, 0);
x_1553 = lean_ctor_get(x_1210, 1);
lean_inc(x_1553);
lean_inc(x_1552);
lean_dec(x_1210);
x_1554 = l_LeanRV64DExecutable_Functions_read__CSR___closed__65;
x_1555 = lean_nat_dec_eq(x_1, x_1554);
if (x_1555 == 0)
{
lean_object* x_1556; uint8_t x_1557; 
lean_dec(x_1552);
x_1556 = l_LeanRV64DExecutable_Functions_read__CSR___closed__66;
x_1557 = lean_nat_dec_eq(x_1, x_1556);
if (x_1557 == 0)
{
lean_object* x_1558; uint8_t x_1559; 
x_1558 = l_LeanRV64DExecutable_Functions_read__CSR___closed__67;
x_1559 = lean_nat_dec_eq(x_1, x_1558);
if (x_1559 == 0)
{
lean_object* x_1560; uint8_t x_1561; 
x_1560 = l_LeanRV64DExecutable_Functions_read__CSR___closed__68;
x_1561 = lean_nat_dec_eq(x_1, x_1560);
if (x_1561 == 0)
{
lean_object* x_1562; uint8_t x_1563; 
x_1562 = l_LeanRV64DExecutable_Functions_read__CSR___closed__69;
x_1563 = lean_nat_dec_eq(x_1, x_1562);
if (x_1563 == 0)
{
lean_object* x_1564; 
x_1564 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1176, x_1553);
if (lean_obj_tag(x_1564) == 0)
{
lean_object* x_1565; lean_object* x_1566; lean_object* x_1567; lean_object* x_1568; uint8_t x_1569; 
x_1565 = lean_ctor_get(x_1564, 0);
lean_inc(x_1565);
x_1566 = lean_ctor_get(x_1564, 1);
lean_inc(x_1566);
if (lean_is_exclusive(x_1564)) {
 lean_ctor_release(x_1564, 0);
 lean_ctor_release(x_1564, 1);
 x_1567 = x_1564;
} else {
 lean_dec_ref(x_1564);
 x_1567 = lean_box(0);
}
x_1568 = l_LeanRV64DExecutable_Functions_read__CSR___closed__70;
x_1569 = lean_nat_dec_eq(x_1, x_1568);
if (x_1569 == 0)
{
uint8_t x_1570; lean_object* x_1571; 
lean_dec(x_1567);
lean_dec(x_1565);
x_1570 = 83;
x_1571 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1570, x_1566);
if (lean_obj_tag(x_1571) == 0)
{
lean_object* x_1572; lean_object* x_1573; uint8_t x_1574; lean_object* x_1575; 
x_1572 = lean_ctor_get(x_1571, 0);
lean_inc(x_1572);
x_1573 = lean_ctor_get(x_1571, 1);
lean_inc(x_1573);
lean_dec(x_1571);
x_1574 = 81;
x_1575 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1574, x_1573);
if (lean_obj_tag(x_1575) == 0)
{
lean_object* x_1576; lean_object* x_1577; lean_object* x_1578; lean_object* x_1579; uint8_t x_1580; 
x_1576 = lean_ctor_get(x_1575, 0);
lean_inc(x_1576);
x_1577 = lean_ctor_get(x_1575, 1);
lean_inc(x_1577);
if (lean_is_exclusive(x_1575)) {
 lean_ctor_release(x_1575, 0);
 lean_ctor_release(x_1575, 1);
 x_1578 = x_1575;
} else {
 lean_dec_ref(x_1575);
 x_1578 = lean_box(0);
}
x_1579 = l_LeanRV64DExecutable_Functions_read__CSR___closed__71;
x_1580 = lean_nat_dec_eq(x_1, x_1579);
if (x_1580 == 0)
{
uint8_t x_1581; lean_object* x_1582; 
lean_dec(x_1578);
lean_dec(x_1576);
lean_dec(x_1572);
x_1581 = 84;
x_1582 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1581, x_1577);
if (lean_obj_tag(x_1582) == 0)
{
lean_object* x_1583; lean_object* x_1584; lean_object* x_1585; 
x_1583 = lean_ctor_get(x_1582, 0);
lean_inc(x_1583);
x_1584 = lean_ctor_get(x_1582, 1);
lean_inc(x_1584);
lean_dec(x_1582);
x_1585 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1574, x_1584);
if (lean_obj_tag(x_1585) == 0)
{
lean_object* x_1586; lean_object* x_1587; lean_object* x_1588; lean_object* x_1589; uint8_t x_1590; 
x_1586 = lean_ctor_get(x_1585, 0);
lean_inc(x_1586);
x_1587 = lean_ctor_get(x_1585, 1);
lean_inc(x_1587);
if (lean_is_exclusive(x_1585)) {
 lean_ctor_release(x_1585, 0);
 lean_ctor_release(x_1585, 1);
 x_1588 = x_1585;
} else {
 lean_dec_ref(x_1585);
 x_1588 = lean_box(0);
}
x_1589 = l_LeanRV64DExecutable_Functions_read__CSR___closed__72;
x_1590 = lean_nat_dec_eq(x_1, x_1589);
if (x_1590 == 0)
{
lean_object* x_1591; uint8_t x_1592; 
lean_dec(x_1588);
lean_dec(x_1586);
lean_dec(x_1583);
x_1591 = l_LeanRV64DExecutable_Functions_read__CSR___closed__73;
x_1592 = lean_nat_dec_eq(x_1, x_1591);
if (x_1592 == 0)
{
lean_object* x_1593; uint8_t x_1594; 
x_1593 = l_LeanRV64DExecutable_Functions_read__CSR___closed__74;
x_1594 = lean_nat_dec_eq(x_1, x_1593);
if (x_1594 == 0)
{
lean_object* x_1595; uint8_t x_1596; 
x_1595 = l_LeanRV64DExecutable_Functions_read__CSR___closed__75;
x_1596 = lean_nat_dec_eq(x_1, x_1595);
if (x_1596 == 0)
{
uint8_t x_1597; lean_object* x_1598; 
x_1597 = 58;
x_1598 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1597, x_1587);
if (lean_obj_tag(x_1598) == 0)
{
lean_object* x_1599; lean_object* x_1600; lean_object* x_1601; lean_object* x_1602; uint8_t x_1603; 
x_1599 = lean_ctor_get(x_1598, 0);
lean_inc(x_1599);
x_1600 = lean_ctor_get(x_1598, 1);
lean_inc(x_1600);
if (lean_is_exclusive(x_1598)) {
 lean_ctor_release(x_1598, 0);
 lean_ctor_release(x_1598, 1);
 x_1601 = x_1598;
} else {
 lean_dec_ref(x_1598);
 x_1601 = lean_box(0);
}
x_1602 = l_LeanRV64DExecutable_Functions_read__CSR___closed__76;
x_1603 = lean_nat_dec_eq(x_1, x_1602);
if (x_1603 == 0)
{
lean_object* x_1604; lean_object* x_1605; lean_object* x_1606; lean_object* x_1607; uint8_t x_1608; 
lean_dec(x_1601);
lean_dec(x_1599);
x_1604 = lean_unsigned_to_nat(11u);
x_1605 = lean_unsigned_to_nat(4u);
x_1606 = l_BitVec_extractLsb___redArg(x_1604, x_1605, x_1);
x_1607 = l_LeanRV64DExecutable_Functions_read__CSR___closed__77;
x_1608 = lean_nat_dec_eq(x_1606, x_1607);
lean_dec(x_1606);
if (x_1608 == 0)
{
x_776 = x_1600;
x_777 = x_1608;
goto block_1173;
}
else
{
lean_object* x_1609; lean_object* x_1610; lean_object* x_1611; lean_object* x_1612; lean_object* x_1613; uint8_t x_1614; 
x_1609 = lean_unsigned_to_nat(3u);
x_1610 = lean_unsigned_to_nat(0u);
x_1611 = l_BitVec_extractLsb___redArg(x_1609, x_1610, x_1);
x_1612 = l_Sail_BitVec_access(x_1605, x_1611, x_1610);
lean_dec(x_1611);
x_1613 = l_LeanRV64DExecutable_Functions_read__CSR___closed__78;
x_1614 = lean_nat_dec_eq(x_1612, x_1613);
lean_dec(x_1612);
if (x_1614 == 0)
{
uint8_t x_1615; 
x_1615 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_776 = x_1600;
x_777 = x_1615;
goto block_1173;
}
else
{
x_776 = x_1600;
x_777 = x_1614;
goto block_1173;
}
}
}
else
{
lean_object* x_1616; lean_object* x_1617; lean_object* x_1618; 
lean_dec(x_1);
x_1616 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_1617 = l_BitVec_not(x_1616, x_1599);
lean_dec(x_1599);
if (lean_is_scalar(x_1601)) {
 x_1618 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1618 = x_1601;
}
lean_ctor_set(x_1618, 0, x_1617);
lean_ctor_set(x_1618, 1, x_1600);
return x_1618;
}
}
else
{
lean_object* x_1619; lean_object* x_1620; lean_object* x_1621; lean_object* x_1622; 
lean_dec(x_1);
x_1619 = lean_ctor_get(x_1598, 1);
lean_inc(x_1619);
if (lean_is_exclusive(x_1598)) {
 lean_ctor_release(x_1598, 0);
 lean_ctor_release(x_1598, 1);
 x_1620 = x_1598;
} else {
 lean_dec_ref(x_1598);
 x_1620 = lean_box(0);
}
x_1621 = lean_box(1);
if (lean_is_scalar(x_1620)) {
 x_1622 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1622 = x_1620;
}
lean_ctor_set(x_1622, 0, x_1621);
lean_ctor_set(x_1622, 1, x_1619);
return x_1622;
}
}
else
{
uint8_t x_1623; lean_object* x_1624; 
lean_dec(x_1);
x_1623 = 59;
x_1624 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1623, x_1587);
return x_1624;
}
}
else
{
uint8_t x_1625; lean_object* x_1626; 
lean_dec(x_1);
x_1625 = 60;
x_1626 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1625, x_1587);
return x_1626;
}
}
else
{
uint8_t x_1627; lean_object* x_1628; 
lean_dec(x_1);
x_1627 = 62;
x_1628 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1627, x_1587);
return x_1628;
}
}
else
{
lean_object* x_1629; lean_object* x_1630; 
lean_dec(x_1);
x_1629 = l_LeanRV64DExecutable_Functions_lower__mie(x_1583, x_1586);
lean_dec(x_1586);
lean_dec(x_1583);
if (lean_is_scalar(x_1588)) {
 x_1630 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1630 = x_1588;
}
lean_ctor_set(x_1630, 0, x_1629);
lean_ctor_set(x_1630, 1, x_1587);
return x_1630;
}
}
else
{
lean_object* x_1631; lean_object* x_1632; lean_object* x_1633; lean_object* x_1634; 
lean_dec(x_1583);
lean_dec(x_1);
x_1631 = lean_ctor_get(x_1585, 1);
lean_inc(x_1631);
if (lean_is_exclusive(x_1585)) {
 lean_ctor_release(x_1585, 0);
 lean_ctor_release(x_1585, 1);
 x_1632 = x_1585;
} else {
 lean_dec_ref(x_1585);
 x_1632 = lean_box(0);
}
x_1633 = lean_box(1);
if (lean_is_scalar(x_1632)) {
 x_1634 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1634 = x_1632;
}
lean_ctor_set(x_1634, 0, x_1633);
lean_ctor_set(x_1634, 1, x_1631);
return x_1634;
}
}
else
{
lean_object* x_1635; lean_object* x_1636; lean_object* x_1637; lean_object* x_1638; 
lean_dec(x_1);
x_1635 = lean_ctor_get(x_1582, 1);
lean_inc(x_1635);
if (lean_is_exclusive(x_1582)) {
 lean_ctor_release(x_1582, 0);
 lean_ctor_release(x_1582, 1);
 x_1636 = x_1582;
} else {
 lean_dec_ref(x_1582);
 x_1636 = lean_box(0);
}
x_1637 = lean_box(1);
if (lean_is_scalar(x_1636)) {
 x_1638 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1638 = x_1636;
}
lean_ctor_set(x_1638, 0, x_1637);
lean_ctor_set(x_1638, 1, x_1635);
return x_1638;
}
}
else
{
lean_object* x_1639; lean_object* x_1640; 
lean_dec(x_1);
x_1639 = l_LeanRV64DExecutable_Functions_lower__mip(x_1572, x_1576);
lean_dec(x_1576);
lean_dec(x_1572);
if (lean_is_scalar(x_1578)) {
 x_1640 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1640 = x_1578;
}
lean_ctor_set(x_1640, 0, x_1639);
lean_ctor_set(x_1640, 1, x_1577);
return x_1640;
}
}
else
{
lean_object* x_1641; lean_object* x_1642; lean_object* x_1643; lean_object* x_1644; 
lean_dec(x_1572);
lean_dec(x_1);
x_1641 = lean_ctor_get(x_1575, 1);
lean_inc(x_1641);
if (lean_is_exclusive(x_1575)) {
 lean_ctor_release(x_1575, 0);
 lean_ctor_release(x_1575, 1);
 x_1642 = x_1575;
} else {
 lean_dec_ref(x_1575);
 x_1642 = lean_box(0);
}
x_1643 = lean_box(1);
if (lean_is_scalar(x_1642)) {
 x_1644 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1644 = x_1642;
}
lean_ctor_set(x_1644, 0, x_1643);
lean_ctor_set(x_1644, 1, x_1641);
return x_1644;
}
}
else
{
lean_object* x_1645; lean_object* x_1646; lean_object* x_1647; lean_object* x_1648; 
lean_dec(x_1);
x_1645 = lean_ctor_get(x_1571, 1);
lean_inc(x_1645);
if (lean_is_exclusive(x_1571)) {
 lean_ctor_release(x_1571, 0);
 lean_ctor_release(x_1571, 1);
 x_1646 = x_1571;
} else {
 lean_dec_ref(x_1571);
 x_1646 = lean_box(0);
}
x_1647 = lean_box(1);
if (lean_is_scalar(x_1646)) {
 x_1648 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1648 = x_1646;
}
lean_ctor_set(x_1648, 0, x_1647);
lean_ctor_set(x_1648, 1, x_1645);
return x_1648;
}
}
else
{
lean_object* x_1649; lean_object* x_1650; lean_object* x_1651; lean_object* x_1652; lean_object* x_1653; 
lean_dec(x_1);
x_1649 = l_LeanRV64DExecutable_Functions_lower__mstatus(x_1565);
lean_dec(x_1565);
x_1650 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_1651 = lean_unsigned_to_nat(0u);
x_1652 = l_BitVec_extractLsb___redArg(x_1650, x_1651, x_1649);
lean_dec(x_1649);
if (lean_is_scalar(x_1567)) {
 x_1653 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1653 = x_1567;
}
lean_ctor_set(x_1653, 0, x_1652);
lean_ctor_set(x_1653, 1, x_1566);
return x_1653;
}
}
else
{
lean_object* x_1654; lean_object* x_1655; lean_object* x_1656; lean_object* x_1657; 
lean_dec(x_1);
x_1654 = lean_ctor_get(x_1564, 1);
lean_inc(x_1654);
if (lean_is_exclusive(x_1564)) {
 lean_ctor_release(x_1564, 0);
 lean_ctor_release(x_1564, 1);
 x_1655 = x_1564;
} else {
 lean_dec_ref(x_1564);
 x_1655 = lean_box(0);
}
x_1656 = lean_box(1);
if (lean_is_scalar(x_1655)) {
 x_1657 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1657 = x_1655;
}
lean_ctor_set(x_1657, 0, x_1656);
lean_ctor_set(x_1657, 1, x_1654);
return x_1657;
}
}
else
{
uint8_t x_1658; lean_object* x_1659; 
lean_dec(x_1);
x_1658 = 64;
x_1659 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1658, x_1553);
return x_1659;
}
}
else
{
uint8_t x_1660; lean_object* x_1661; 
lean_dec(x_1);
x_1660 = 65;
x_1661 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1660, x_1553);
return x_1661;
}
}
else
{
uint8_t x_1662; lean_object* x_1663; 
lean_dec(x_1);
x_1662 = 67;
x_1663 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1662, x_1553);
return x_1663;
}
}
else
{
uint8_t x_1664; lean_object* x_1665; 
lean_dec(x_1);
x_1664 = 66;
x_1665 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1664, x_1553);
return x_1665;
}
}
else
{
lean_object* x_1666; lean_object* x_1667; lean_object* x_1668; lean_object* x_1669; 
lean_dec(x_1);
x_1666 = lean_unsigned_to_nat(32u);
x_1667 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1668 = l_BitVec_setWidth(x_1666, x_1667, x_1552);
lean_dec(x_1552);
x_1669 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1669, 0, x_1668);
lean_ctor_set(x_1669, 1, x_1553);
return x_1669;
}
}
}
else
{
uint8_t x_1670; 
lean_dec(x_1);
x_1670 = !lean_is_exclusive(x_1210);
if (x_1670 == 0)
{
lean_object* x_1671; lean_object* x_1672; 
x_1671 = lean_ctor_get(x_1210, 0);
lean_dec(x_1671);
x_1672 = lean_box(1);
lean_ctor_set(x_1210, 0, x_1672);
return x_1210;
}
else
{
lean_object* x_1673; lean_object* x_1674; lean_object* x_1675; 
x_1673 = lean_ctor_get(x_1210, 1);
lean_inc(x_1673);
lean_dec(x_1210);
x_1674 = lean_box(1);
x_1675 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1675, 0, x_1674);
lean_ctor_set(x_1675, 1, x_1673);
return x_1675;
}
}
}
else
{
lean_object* x_1676; lean_object* x_1677; lean_object* x_1678; 
lean_dec(x_1);
x_1676 = lean_unsigned_to_nat(32u);
x_1677 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1678 = l_BitVec_setWidth(x_1676, x_1677, x_1205);
lean_dec(x_1205);
lean_ctor_set(x_1203, 0, x_1678);
return x_1203;
}
}
else
{
lean_object* x_1679; lean_object* x_1680; lean_object* x_1681; uint8_t x_1682; 
x_1679 = lean_ctor_get(x_1203, 0);
x_1680 = lean_ctor_get(x_1203, 1);
lean_inc(x_1680);
lean_inc(x_1679);
lean_dec(x_1203);
x_1681 = l_LeanRV64DExecutable_Functions_read__CSR___closed__64;
x_1682 = lean_nat_dec_eq(x_1, x_1681);
if (x_1682 == 0)
{
uint8_t x_1683; lean_object* x_1684; 
lean_dec(x_1679);
x_1683 = 68;
x_1684 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1683, x_1680);
if (lean_obj_tag(x_1684) == 0)
{
lean_object* x_1685; lean_object* x_1686; lean_object* x_1687; lean_object* x_1688; uint8_t x_1689; 
x_1685 = lean_ctor_get(x_1684, 0);
lean_inc(x_1685);
x_1686 = lean_ctor_get(x_1684, 1);
lean_inc(x_1686);
if (lean_is_exclusive(x_1684)) {
 lean_ctor_release(x_1684, 0);
 lean_ctor_release(x_1684, 1);
 x_1687 = x_1684;
} else {
 lean_dec_ref(x_1684);
 x_1687 = lean_box(0);
}
x_1688 = l_LeanRV64DExecutable_Functions_read__CSR___closed__65;
x_1689 = lean_nat_dec_eq(x_1, x_1688);
if (x_1689 == 0)
{
lean_object* x_1690; uint8_t x_1691; 
lean_dec(x_1687);
lean_dec(x_1685);
x_1690 = l_LeanRV64DExecutable_Functions_read__CSR___closed__66;
x_1691 = lean_nat_dec_eq(x_1, x_1690);
if (x_1691 == 0)
{
lean_object* x_1692; uint8_t x_1693; 
x_1692 = l_LeanRV64DExecutable_Functions_read__CSR___closed__67;
x_1693 = lean_nat_dec_eq(x_1, x_1692);
if (x_1693 == 0)
{
lean_object* x_1694; uint8_t x_1695; 
x_1694 = l_LeanRV64DExecutable_Functions_read__CSR___closed__68;
x_1695 = lean_nat_dec_eq(x_1, x_1694);
if (x_1695 == 0)
{
lean_object* x_1696; uint8_t x_1697; 
x_1696 = l_LeanRV64DExecutable_Functions_read__CSR___closed__69;
x_1697 = lean_nat_dec_eq(x_1, x_1696);
if (x_1697 == 0)
{
lean_object* x_1698; 
x_1698 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1176, x_1686);
if (lean_obj_tag(x_1698) == 0)
{
lean_object* x_1699; lean_object* x_1700; lean_object* x_1701; lean_object* x_1702; uint8_t x_1703; 
x_1699 = lean_ctor_get(x_1698, 0);
lean_inc(x_1699);
x_1700 = lean_ctor_get(x_1698, 1);
lean_inc(x_1700);
if (lean_is_exclusive(x_1698)) {
 lean_ctor_release(x_1698, 0);
 lean_ctor_release(x_1698, 1);
 x_1701 = x_1698;
} else {
 lean_dec_ref(x_1698);
 x_1701 = lean_box(0);
}
x_1702 = l_LeanRV64DExecutable_Functions_read__CSR___closed__70;
x_1703 = lean_nat_dec_eq(x_1, x_1702);
if (x_1703 == 0)
{
uint8_t x_1704; lean_object* x_1705; 
lean_dec(x_1701);
lean_dec(x_1699);
x_1704 = 83;
x_1705 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1704, x_1700);
if (lean_obj_tag(x_1705) == 0)
{
lean_object* x_1706; lean_object* x_1707; uint8_t x_1708; lean_object* x_1709; 
x_1706 = lean_ctor_get(x_1705, 0);
lean_inc(x_1706);
x_1707 = lean_ctor_get(x_1705, 1);
lean_inc(x_1707);
lean_dec(x_1705);
x_1708 = 81;
x_1709 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1708, x_1707);
if (lean_obj_tag(x_1709) == 0)
{
lean_object* x_1710; lean_object* x_1711; lean_object* x_1712; lean_object* x_1713; uint8_t x_1714; 
x_1710 = lean_ctor_get(x_1709, 0);
lean_inc(x_1710);
x_1711 = lean_ctor_get(x_1709, 1);
lean_inc(x_1711);
if (lean_is_exclusive(x_1709)) {
 lean_ctor_release(x_1709, 0);
 lean_ctor_release(x_1709, 1);
 x_1712 = x_1709;
} else {
 lean_dec_ref(x_1709);
 x_1712 = lean_box(0);
}
x_1713 = l_LeanRV64DExecutable_Functions_read__CSR___closed__71;
x_1714 = lean_nat_dec_eq(x_1, x_1713);
if (x_1714 == 0)
{
uint8_t x_1715; lean_object* x_1716; 
lean_dec(x_1712);
lean_dec(x_1710);
lean_dec(x_1706);
x_1715 = 84;
x_1716 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1715, x_1711);
if (lean_obj_tag(x_1716) == 0)
{
lean_object* x_1717; lean_object* x_1718; lean_object* x_1719; 
x_1717 = lean_ctor_get(x_1716, 0);
lean_inc(x_1717);
x_1718 = lean_ctor_get(x_1716, 1);
lean_inc(x_1718);
lean_dec(x_1716);
x_1719 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1708, x_1718);
if (lean_obj_tag(x_1719) == 0)
{
lean_object* x_1720; lean_object* x_1721; lean_object* x_1722; lean_object* x_1723; uint8_t x_1724; 
x_1720 = lean_ctor_get(x_1719, 0);
lean_inc(x_1720);
x_1721 = lean_ctor_get(x_1719, 1);
lean_inc(x_1721);
if (lean_is_exclusive(x_1719)) {
 lean_ctor_release(x_1719, 0);
 lean_ctor_release(x_1719, 1);
 x_1722 = x_1719;
} else {
 lean_dec_ref(x_1719);
 x_1722 = lean_box(0);
}
x_1723 = l_LeanRV64DExecutable_Functions_read__CSR___closed__72;
x_1724 = lean_nat_dec_eq(x_1, x_1723);
if (x_1724 == 0)
{
lean_object* x_1725; uint8_t x_1726; 
lean_dec(x_1722);
lean_dec(x_1720);
lean_dec(x_1717);
x_1725 = l_LeanRV64DExecutable_Functions_read__CSR___closed__73;
x_1726 = lean_nat_dec_eq(x_1, x_1725);
if (x_1726 == 0)
{
lean_object* x_1727; uint8_t x_1728; 
x_1727 = l_LeanRV64DExecutable_Functions_read__CSR___closed__74;
x_1728 = lean_nat_dec_eq(x_1, x_1727);
if (x_1728 == 0)
{
lean_object* x_1729; uint8_t x_1730; 
x_1729 = l_LeanRV64DExecutable_Functions_read__CSR___closed__75;
x_1730 = lean_nat_dec_eq(x_1, x_1729);
if (x_1730 == 0)
{
uint8_t x_1731; lean_object* x_1732; 
x_1731 = 58;
x_1732 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1731, x_1721);
if (lean_obj_tag(x_1732) == 0)
{
lean_object* x_1733; lean_object* x_1734; lean_object* x_1735; lean_object* x_1736; uint8_t x_1737; 
x_1733 = lean_ctor_get(x_1732, 0);
lean_inc(x_1733);
x_1734 = lean_ctor_get(x_1732, 1);
lean_inc(x_1734);
if (lean_is_exclusive(x_1732)) {
 lean_ctor_release(x_1732, 0);
 lean_ctor_release(x_1732, 1);
 x_1735 = x_1732;
} else {
 lean_dec_ref(x_1732);
 x_1735 = lean_box(0);
}
x_1736 = l_LeanRV64DExecutable_Functions_read__CSR___closed__76;
x_1737 = lean_nat_dec_eq(x_1, x_1736);
if (x_1737 == 0)
{
lean_object* x_1738; lean_object* x_1739; lean_object* x_1740; lean_object* x_1741; uint8_t x_1742; 
lean_dec(x_1735);
lean_dec(x_1733);
x_1738 = lean_unsigned_to_nat(11u);
x_1739 = lean_unsigned_to_nat(4u);
x_1740 = l_BitVec_extractLsb___redArg(x_1738, x_1739, x_1);
x_1741 = l_LeanRV64DExecutable_Functions_read__CSR___closed__77;
x_1742 = lean_nat_dec_eq(x_1740, x_1741);
lean_dec(x_1740);
if (x_1742 == 0)
{
x_776 = x_1734;
x_777 = x_1742;
goto block_1173;
}
else
{
lean_object* x_1743; lean_object* x_1744; lean_object* x_1745; lean_object* x_1746; lean_object* x_1747; uint8_t x_1748; 
x_1743 = lean_unsigned_to_nat(3u);
x_1744 = lean_unsigned_to_nat(0u);
x_1745 = l_BitVec_extractLsb___redArg(x_1743, x_1744, x_1);
x_1746 = l_Sail_BitVec_access(x_1739, x_1745, x_1744);
lean_dec(x_1745);
x_1747 = l_LeanRV64DExecutable_Functions_read__CSR___closed__78;
x_1748 = lean_nat_dec_eq(x_1746, x_1747);
lean_dec(x_1746);
if (x_1748 == 0)
{
uint8_t x_1749; 
x_1749 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_776 = x_1734;
x_777 = x_1749;
goto block_1173;
}
else
{
x_776 = x_1734;
x_777 = x_1748;
goto block_1173;
}
}
}
else
{
lean_object* x_1750; lean_object* x_1751; lean_object* x_1752; 
lean_dec(x_1);
x_1750 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_1751 = l_BitVec_not(x_1750, x_1733);
lean_dec(x_1733);
if (lean_is_scalar(x_1735)) {
 x_1752 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1752 = x_1735;
}
lean_ctor_set(x_1752, 0, x_1751);
lean_ctor_set(x_1752, 1, x_1734);
return x_1752;
}
}
else
{
lean_object* x_1753; lean_object* x_1754; lean_object* x_1755; lean_object* x_1756; 
lean_dec(x_1);
x_1753 = lean_ctor_get(x_1732, 1);
lean_inc(x_1753);
if (lean_is_exclusive(x_1732)) {
 lean_ctor_release(x_1732, 0);
 lean_ctor_release(x_1732, 1);
 x_1754 = x_1732;
} else {
 lean_dec_ref(x_1732);
 x_1754 = lean_box(0);
}
x_1755 = lean_box(1);
if (lean_is_scalar(x_1754)) {
 x_1756 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1756 = x_1754;
}
lean_ctor_set(x_1756, 0, x_1755);
lean_ctor_set(x_1756, 1, x_1753);
return x_1756;
}
}
else
{
uint8_t x_1757; lean_object* x_1758; 
lean_dec(x_1);
x_1757 = 59;
x_1758 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1757, x_1721);
return x_1758;
}
}
else
{
uint8_t x_1759; lean_object* x_1760; 
lean_dec(x_1);
x_1759 = 60;
x_1760 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1759, x_1721);
return x_1760;
}
}
else
{
uint8_t x_1761; lean_object* x_1762; 
lean_dec(x_1);
x_1761 = 62;
x_1762 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1761, x_1721);
return x_1762;
}
}
else
{
lean_object* x_1763; lean_object* x_1764; 
lean_dec(x_1);
x_1763 = l_LeanRV64DExecutable_Functions_lower__mie(x_1717, x_1720);
lean_dec(x_1720);
lean_dec(x_1717);
if (lean_is_scalar(x_1722)) {
 x_1764 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1764 = x_1722;
}
lean_ctor_set(x_1764, 0, x_1763);
lean_ctor_set(x_1764, 1, x_1721);
return x_1764;
}
}
else
{
lean_object* x_1765; lean_object* x_1766; lean_object* x_1767; lean_object* x_1768; 
lean_dec(x_1717);
lean_dec(x_1);
x_1765 = lean_ctor_get(x_1719, 1);
lean_inc(x_1765);
if (lean_is_exclusive(x_1719)) {
 lean_ctor_release(x_1719, 0);
 lean_ctor_release(x_1719, 1);
 x_1766 = x_1719;
} else {
 lean_dec_ref(x_1719);
 x_1766 = lean_box(0);
}
x_1767 = lean_box(1);
if (lean_is_scalar(x_1766)) {
 x_1768 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1768 = x_1766;
}
lean_ctor_set(x_1768, 0, x_1767);
lean_ctor_set(x_1768, 1, x_1765);
return x_1768;
}
}
else
{
lean_object* x_1769; lean_object* x_1770; lean_object* x_1771; lean_object* x_1772; 
lean_dec(x_1);
x_1769 = lean_ctor_get(x_1716, 1);
lean_inc(x_1769);
if (lean_is_exclusive(x_1716)) {
 lean_ctor_release(x_1716, 0);
 lean_ctor_release(x_1716, 1);
 x_1770 = x_1716;
} else {
 lean_dec_ref(x_1716);
 x_1770 = lean_box(0);
}
x_1771 = lean_box(1);
if (lean_is_scalar(x_1770)) {
 x_1772 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1772 = x_1770;
}
lean_ctor_set(x_1772, 0, x_1771);
lean_ctor_set(x_1772, 1, x_1769);
return x_1772;
}
}
else
{
lean_object* x_1773; lean_object* x_1774; 
lean_dec(x_1);
x_1773 = l_LeanRV64DExecutable_Functions_lower__mip(x_1706, x_1710);
lean_dec(x_1710);
lean_dec(x_1706);
if (lean_is_scalar(x_1712)) {
 x_1774 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1774 = x_1712;
}
lean_ctor_set(x_1774, 0, x_1773);
lean_ctor_set(x_1774, 1, x_1711);
return x_1774;
}
}
else
{
lean_object* x_1775; lean_object* x_1776; lean_object* x_1777; lean_object* x_1778; 
lean_dec(x_1706);
lean_dec(x_1);
x_1775 = lean_ctor_get(x_1709, 1);
lean_inc(x_1775);
if (lean_is_exclusive(x_1709)) {
 lean_ctor_release(x_1709, 0);
 lean_ctor_release(x_1709, 1);
 x_1776 = x_1709;
} else {
 lean_dec_ref(x_1709);
 x_1776 = lean_box(0);
}
x_1777 = lean_box(1);
if (lean_is_scalar(x_1776)) {
 x_1778 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1778 = x_1776;
}
lean_ctor_set(x_1778, 0, x_1777);
lean_ctor_set(x_1778, 1, x_1775);
return x_1778;
}
}
else
{
lean_object* x_1779; lean_object* x_1780; lean_object* x_1781; lean_object* x_1782; 
lean_dec(x_1);
x_1779 = lean_ctor_get(x_1705, 1);
lean_inc(x_1779);
if (lean_is_exclusive(x_1705)) {
 lean_ctor_release(x_1705, 0);
 lean_ctor_release(x_1705, 1);
 x_1780 = x_1705;
} else {
 lean_dec_ref(x_1705);
 x_1780 = lean_box(0);
}
x_1781 = lean_box(1);
if (lean_is_scalar(x_1780)) {
 x_1782 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1782 = x_1780;
}
lean_ctor_set(x_1782, 0, x_1781);
lean_ctor_set(x_1782, 1, x_1779);
return x_1782;
}
}
else
{
lean_object* x_1783; lean_object* x_1784; lean_object* x_1785; lean_object* x_1786; lean_object* x_1787; 
lean_dec(x_1);
x_1783 = l_LeanRV64DExecutable_Functions_lower__mstatus(x_1699);
lean_dec(x_1699);
x_1784 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_1785 = lean_unsigned_to_nat(0u);
x_1786 = l_BitVec_extractLsb___redArg(x_1784, x_1785, x_1783);
lean_dec(x_1783);
if (lean_is_scalar(x_1701)) {
 x_1787 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1787 = x_1701;
}
lean_ctor_set(x_1787, 0, x_1786);
lean_ctor_set(x_1787, 1, x_1700);
return x_1787;
}
}
else
{
lean_object* x_1788; lean_object* x_1789; lean_object* x_1790; lean_object* x_1791; 
lean_dec(x_1);
x_1788 = lean_ctor_get(x_1698, 1);
lean_inc(x_1788);
if (lean_is_exclusive(x_1698)) {
 lean_ctor_release(x_1698, 0);
 lean_ctor_release(x_1698, 1);
 x_1789 = x_1698;
} else {
 lean_dec_ref(x_1698);
 x_1789 = lean_box(0);
}
x_1790 = lean_box(1);
if (lean_is_scalar(x_1789)) {
 x_1791 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1791 = x_1789;
}
lean_ctor_set(x_1791, 0, x_1790);
lean_ctor_set(x_1791, 1, x_1788);
return x_1791;
}
}
else
{
uint8_t x_1792; lean_object* x_1793; 
lean_dec(x_1);
x_1792 = 64;
x_1793 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1792, x_1686);
return x_1793;
}
}
else
{
uint8_t x_1794; lean_object* x_1795; 
lean_dec(x_1);
x_1794 = 65;
x_1795 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1794, x_1686);
return x_1795;
}
}
else
{
uint8_t x_1796; lean_object* x_1797; 
lean_dec(x_1);
x_1796 = 67;
x_1797 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1796, x_1686);
return x_1797;
}
}
else
{
uint8_t x_1798; lean_object* x_1799; 
lean_dec(x_1);
x_1798 = 66;
x_1799 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1798, x_1686);
return x_1799;
}
}
else
{
lean_object* x_1800; lean_object* x_1801; lean_object* x_1802; lean_object* x_1803; 
lean_dec(x_1);
x_1800 = lean_unsigned_to_nat(32u);
x_1801 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1802 = l_BitVec_setWidth(x_1800, x_1801, x_1685);
lean_dec(x_1685);
if (lean_is_scalar(x_1687)) {
 x_1803 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1803 = x_1687;
}
lean_ctor_set(x_1803, 0, x_1802);
lean_ctor_set(x_1803, 1, x_1686);
return x_1803;
}
}
else
{
lean_object* x_1804; lean_object* x_1805; lean_object* x_1806; lean_object* x_1807; 
lean_dec(x_1);
x_1804 = lean_ctor_get(x_1684, 1);
lean_inc(x_1804);
if (lean_is_exclusive(x_1684)) {
 lean_ctor_release(x_1684, 0);
 lean_ctor_release(x_1684, 1);
 x_1805 = x_1684;
} else {
 lean_dec_ref(x_1684);
 x_1805 = lean_box(0);
}
x_1806 = lean_box(1);
if (lean_is_scalar(x_1805)) {
 x_1807 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1807 = x_1805;
}
lean_ctor_set(x_1807, 0, x_1806);
lean_ctor_set(x_1807, 1, x_1804);
return x_1807;
}
}
else
{
lean_object* x_1808; lean_object* x_1809; lean_object* x_1810; lean_object* x_1811; 
lean_dec(x_1);
x_1808 = lean_unsigned_to_nat(32u);
x_1809 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1810 = l_BitVec_setWidth(x_1808, x_1809, x_1679);
lean_dec(x_1679);
x_1811 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1811, 0, x_1810);
lean_ctor_set(x_1811, 1, x_1680);
return x_1811;
}
}
}
else
{
uint8_t x_1812; 
lean_dec(x_1);
x_1812 = !lean_is_exclusive(x_1203);
if (x_1812 == 0)
{
lean_object* x_1813; lean_object* x_1814; 
x_1813 = lean_ctor_get(x_1203, 0);
lean_dec(x_1813);
x_1814 = lean_box(1);
lean_ctor_set(x_1203, 0, x_1814);
return x_1203;
}
else
{
lean_object* x_1815; lean_object* x_1816; lean_object* x_1817; 
x_1815 = lean_ctor_get(x_1203, 1);
lean_inc(x_1815);
lean_dec(x_1203);
x_1816 = lean_box(1);
x_1817 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1817, 0, x_1816);
lean_ctor_set(x_1817, 1, x_1815);
return x_1817;
}
}
}
else
{
lean_object* x_1818; lean_object* x_1819; lean_object* x_1820; 
lean_dec(x_1);
x_1818 = lean_unsigned_to_nat(32u);
x_1819 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1820 = l_BitVec_setWidth(x_1818, x_1819, x_1198);
lean_dec(x_1198);
lean_ctor_set(x_1196, 0, x_1820);
return x_1196;
}
}
else
{
lean_object* x_1821; lean_object* x_1822; lean_object* x_1823; uint8_t x_1824; 
x_1821 = lean_ctor_get(x_1196, 0);
x_1822 = lean_ctor_get(x_1196, 1);
lean_inc(x_1822);
lean_inc(x_1821);
lean_dec(x_1196);
x_1823 = l_LeanRV64DExecutable_Functions_read__CSR___closed__63;
x_1824 = lean_nat_dec_eq(x_1, x_1823);
if (x_1824 == 0)
{
uint8_t x_1825; lean_object* x_1826; 
lean_dec(x_1821);
x_1825 = 73;
x_1826 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1825, x_1822);
if (lean_obj_tag(x_1826) == 0)
{
lean_object* x_1827; lean_object* x_1828; lean_object* x_1829; lean_object* x_1830; uint8_t x_1831; 
x_1827 = lean_ctor_get(x_1826, 0);
lean_inc(x_1827);
x_1828 = lean_ctor_get(x_1826, 1);
lean_inc(x_1828);
if (lean_is_exclusive(x_1826)) {
 lean_ctor_release(x_1826, 0);
 lean_ctor_release(x_1826, 1);
 x_1829 = x_1826;
} else {
 lean_dec_ref(x_1826);
 x_1829 = lean_box(0);
}
x_1830 = l_LeanRV64DExecutable_Functions_read__CSR___closed__64;
x_1831 = lean_nat_dec_eq(x_1, x_1830);
if (x_1831 == 0)
{
uint8_t x_1832; lean_object* x_1833; 
lean_dec(x_1829);
lean_dec(x_1827);
x_1832 = 68;
x_1833 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1832, x_1828);
if (lean_obj_tag(x_1833) == 0)
{
lean_object* x_1834; lean_object* x_1835; lean_object* x_1836; lean_object* x_1837; uint8_t x_1838; 
x_1834 = lean_ctor_get(x_1833, 0);
lean_inc(x_1834);
x_1835 = lean_ctor_get(x_1833, 1);
lean_inc(x_1835);
if (lean_is_exclusive(x_1833)) {
 lean_ctor_release(x_1833, 0);
 lean_ctor_release(x_1833, 1);
 x_1836 = x_1833;
} else {
 lean_dec_ref(x_1833);
 x_1836 = lean_box(0);
}
x_1837 = l_LeanRV64DExecutable_Functions_read__CSR___closed__65;
x_1838 = lean_nat_dec_eq(x_1, x_1837);
if (x_1838 == 0)
{
lean_object* x_1839; uint8_t x_1840; 
lean_dec(x_1836);
lean_dec(x_1834);
x_1839 = l_LeanRV64DExecutable_Functions_read__CSR___closed__66;
x_1840 = lean_nat_dec_eq(x_1, x_1839);
if (x_1840 == 0)
{
lean_object* x_1841; uint8_t x_1842; 
x_1841 = l_LeanRV64DExecutable_Functions_read__CSR___closed__67;
x_1842 = lean_nat_dec_eq(x_1, x_1841);
if (x_1842 == 0)
{
lean_object* x_1843; uint8_t x_1844; 
x_1843 = l_LeanRV64DExecutable_Functions_read__CSR___closed__68;
x_1844 = lean_nat_dec_eq(x_1, x_1843);
if (x_1844 == 0)
{
lean_object* x_1845; uint8_t x_1846; 
x_1845 = l_LeanRV64DExecutable_Functions_read__CSR___closed__69;
x_1846 = lean_nat_dec_eq(x_1, x_1845);
if (x_1846 == 0)
{
lean_object* x_1847; 
x_1847 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1176, x_1835);
if (lean_obj_tag(x_1847) == 0)
{
lean_object* x_1848; lean_object* x_1849; lean_object* x_1850; lean_object* x_1851; uint8_t x_1852; 
x_1848 = lean_ctor_get(x_1847, 0);
lean_inc(x_1848);
x_1849 = lean_ctor_get(x_1847, 1);
lean_inc(x_1849);
if (lean_is_exclusive(x_1847)) {
 lean_ctor_release(x_1847, 0);
 lean_ctor_release(x_1847, 1);
 x_1850 = x_1847;
} else {
 lean_dec_ref(x_1847);
 x_1850 = lean_box(0);
}
x_1851 = l_LeanRV64DExecutable_Functions_read__CSR___closed__70;
x_1852 = lean_nat_dec_eq(x_1, x_1851);
if (x_1852 == 0)
{
uint8_t x_1853; lean_object* x_1854; 
lean_dec(x_1850);
lean_dec(x_1848);
x_1853 = 83;
x_1854 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1853, x_1849);
if (lean_obj_tag(x_1854) == 0)
{
lean_object* x_1855; lean_object* x_1856; uint8_t x_1857; lean_object* x_1858; 
x_1855 = lean_ctor_get(x_1854, 0);
lean_inc(x_1855);
x_1856 = lean_ctor_get(x_1854, 1);
lean_inc(x_1856);
lean_dec(x_1854);
x_1857 = 81;
x_1858 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1857, x_1856);
if (lean_obj_tag(x_1858) == 0)
{
lean_object* x_1859; lean_object* x_1860; lean_object* x_1861; lean_object* x_1862; uint8_t x_1863; 
x_1859 = lean_ctor_get(x_1858, 0);
lean_inc(x_1859);
x_1860 = lean_ctor_get(x_1858, 1);
lean_inc(x_1860);
if (lean_is_exclusive(x_1858)) {
 lean_ctor_release(x_1858, 0);
 lean_ctor_release(x_1858, 1);
 x_1861 = x_1858;
} else {
 lean_dec_ref(x_1858);
 x_1861 = lean_box(0);
}
x_1862 = l_LeanRV64DExecutable_Functions_read__CSR___closed__71;
x_1863 = lean_nat_dec_eq(x_1, x_1862);
if (x_1863 == 0)
{
uint8_t x_1864; lean_object* x_1865; 
lean_dec(x_1861);
lean_dec(x_1859);
lean_dec(x_1855);
x_1864 = 84;
x_1865 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1864, x_1860);
if (lean_obj_tag(x_1865) == 0)
{
lean_object* x_1866; lean_object* x_1867; lean_object* x_1868; 
x_1866 = lean_ctor_get(x_1865, 0);
lean_inc(x_1866);
x_1867 = lean_ctor_get(x_1865, 1);
lean_inc(x_1867);
lean_dec(x_1865);
x_1868 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1857, x_1867);
if (lean_obj_tag(x_1868) == 0)
{
lean_object* x_1869; lean_object* x_1870; lean_object* x_1871; lean_object* x_1872; uint8_t x_1873; 
x_1869 = lean_ctor_get(x_1868, 0);
lean_inc(x_1869);
x_1870 = lean_ctor_get(x_1868, 1);
lean_inc(x_1870);
if (lean_is_exclusive(x_1868)) {
 lean_ctor_release(x_1868, 0);
 lean_ctor_release(x_1868, 1);
 x_1871 = x_1868;
} else {
 lean_dec_ref(x_1868);
 x_1871 = lean_box(0);
}
x_1872 = l_LeanRV64DExecutable_Functions_read__CSR___closed__72;
x_1873 = lean_nat_dec_eq(x_1, x_1872);
if (x_1873 == 0)
{
lean_object* x_1874; uint8_t x_1875; 
lean_dec(x_1871);
lean_dec(x_1869);
lean_dec(x_1866);
x_1874 = l_LeanRV64DExecutable_Functions_read__CSR___closed__73;
x_1875 = lean_nat_dec_eq(x_1, x_1874);
if (x_1875 == 0)
{
lean_object* x_1876; uint8_t x_1877; 
x_1876 = l_LeanRV64DExecutable_Functions_read__CSR___closed__74;
x_1877 = lean_nat_dec_eq(x_1, x_1876);
if (x_1877 == 0)
{
lean_object* x_1878; uint8_t x_1879; 
x_1878 = l_LeanRV64DExecutable_Functions_read__CSR___closed__75;
x_1879 = lean_nat_dec_eq(x_1, x_1878);
if (x_1879 == 0)
{
uint8_t x_1880; lean_object* x_1881; 
x_1880 = 58;
x_1881 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1880, x_1870);
if (lean_obj_tag(x_1881) == 0)
{
lean_object* x_1882; lean_object* x_1883; lean_object* x_1884; lean_object* x_1885; uint8_t x_1886; 
x_1882 = lean_ctor_get(x_1881, 0);
lean_inc(x_1882);
x_1883 = lean_ctor_get(x_1881, 1);
lean_inc(x_1883);
if (lean_is_exclusive(x_1881)) {
 lean_ctor_release(x_1881, 0);
 lean_ctor_release(x_1881, 1);
 x_1884 = x_1881;
} else {
 lean_dec_ref(x_1881);
 x_1884 = lean_box(0);
}
x_1885 = l_LeanRV64DExecutable_Functions_read__CSR___closed__76;
x_1886 = lean_nat_dec_eq(x_1, x_1885);
if (x_1886 == 0)
{
lean_object* x_1887; lean_object* x_1888; lean_object* x_1889; lean_object* x_1890; uint8_t x_1891; 
lean_dec(x_1884);
lean_dec(x_1882);
x_1887 = lean_unsigned_to_nat(11u);
x_1888 = lean_unsigned_to_nat(4u);
x_1889 = l_BitVec_extractLsb___redArg(x_1887, x_1888, x_1);
x_1890 = l_LeanRV64DExecutable_Functions_read__CSR___closed__77;
x_1891 = lean_nat_dec_eq(x_1889, x_1890);
lean_dec(x_1889);
if (x_1891 == 0)
{
x_776 = x_1883;
x_777 = x_1891;
goto block_1173;
}
else
{
lean_object* x_1892; lean_object* x_1893; lean_object* x_1894; lean_object* x_1895; lean_object* x_1896; uint8_t x_1897; 
x_1892 = lean_unsigned_to_nat(3u);
x_1893 = lean_unsigned_to_nat(0u);
x_1894 = l_BitVec_extractLsb___redArg(x_1892, x_1893, x_1);
x_1895 = l_Sail_BitVec_access(x_1888, x_1894, x_1893);
lean_dec(x_1894);
x_1896 = l_LeanRV64DExecutable_Functions_read__CSR___closed__78;
x_1897 = lean_nat_dec_eq(x_1895, x_1896);
lean_dec(x_1895);
if (x_1897 == 0)
{
uint8_t x_1898; 
x_1898 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_776 = x_1883;
x_777 = x_1898;
goto block_1173;
}
else
{
x_776 = x_1883;
x_777 = x_1897;
goto block_1173;
}
}
}
else
{
lean_object* x_1899; lean_object* x_1900; lean_object* x_1901; 
lean_dec(x_1);
x_1899 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_1900 = l_BitVec_not(x_1899, x_1882);
lean_dec(x_1882);
if (lean_is_scalar(x_1884)) {
 x_1901 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1901 = x_1884;
}
lean_ctor_set(x_1901, 0, x_1900);
lean_ctor_set(x_1901, 1, x_1883);
return x_1901;
}
}
else
{
lean_object* x_1902; lean_object* x_1903; lean_object* x_1904; lean_object* x_1905; 
lean_dec(x_1);
x_1902 = lean_ctor_get(x_1881, 1);
lean_inc(x_1902);
if (lean_is_exclusive(x_1881)) {
 lean_ctor_release(x_1881, 0);
 lean_ctor_release(x_1881, 1);
 x_1903 = x_1881;
} else {
 lean_dec_ref(x_1881);
 x_1903 = lean_box(0);
}
x_1904 = lean_box(1);
if (lean_is_scalar(x_1903)) {
 x_1905 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1905 = x_1903;
}
lean_ctor_set(x_1905, 0, x_1904);
lean_ctor_set(x_1905, 1, x_1902);
return x_1905;
}
}
else
{
uint8_t x_1906; lean_object* x_1907; 
lean_dec(x_1);
x_1906 = 59;
x_1907 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1906, x_1870);
return x_1907;
}
}
else
{
uint8_t x_1908; lean_object* x_1909; 
lean_dec(x_1);
x_1908 = 60;
x_1909 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1908, x_1870);
return x_1909;
}
}
else
{
uint8_t x_1910; lean_object* x_1911; 
lean_dec(x_1);
x_1910 = 62;
x_1911 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1910, x_1870);
return x_1911;
}
}
else
{
lean_object* x_1912; lean_object* x_1913; 
lean_dec(x_1);
x_1912 = l_LeanRV64DExecutable_Functions_lower__mie(x_1866, x_1869);
lean_dec(x_1869);
lean_dec(x_1866);
if (lean_is_scalar(x_1871)) {
 x_1913 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1913 = x_1871;
}
lean_ctor_set(x_1913, 0, x_1912);
lean_ctor_set(x_1913, 1, x_1870);
return x_1913;
}
}
else
{
lean_object* x_1914; lean_object* x_1915; lean_object* x_1916; lean_object* x_1917; 
lean_dec(x_1866);
lean_dec(x_1);
x_1914 = lean_ctor_get(x_1868, 1);
lean_inc(x_1914);
if (lean_is_exclusive(x_1868)) {
 lean_ctor_release(x_1868, 0);
 lean_ctor_release(x_1868, 1);
 x_1915 = x_1868;
} else {
 lean_dec_ref(x_1868);
 x_1915 = lean_box(0);
}
x_1916 = lean_box(1);
if (lean_is_scalar(x_1915)) {
 x_1917 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1917 = x_1915;
}
lean_ctor_set(x_1917, 0, x_1916);
lean_ctor_set(x_1917, 1, x_1914);
return x_1917;
}
}
else
{
lean_object* x_1918; lean_object* x_1919; lean_object* x_1920; lean_object* x_1921; 
lean_dec(x_1);
x_1918 = lean_ctor_get(x_1865, 1);
lean_inc(x_1918);
if (lean_is_exclusive(x_1865)) {
 lean_ctor_release(x_1865, 0);
 lean_ctor_release(x_1865, 1);
 x_1919 = x_1865;
} else {
 lean_dec_ref(x_1865);
 x_1919 = lean_box(0);
}
x_1920 = lean_box(1);
if (lean_is_scalar(x_1919)) {
 x_1921 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1921 = x_1919;
}
lean_ctor_set(x_1921, 0, x_1920);
lean_ctor_set(x_1921, 1, x_1918);
return x_1921;
}
}
else
{
lean_object* x_1922; lean_object* x_1923; 
lean_dec(x_1);
x_1922 = l_LeanRV64DExecutable_Functions_lower__mip(x_1855, x_1859);
lean_dec(x_1859);
lean_dec(x_1855);
if (lean_is_scalar(x_1861)) {
 x_1923 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1923 = x_1861;
}
lean_ctor_set(x_1923, 0, x_1922);
lean_ctor_set(x_1923, 1, x_1860);
return x_1923;
}
}
else
{
lean_object* x_1924; lean_object* x_1925; lean_object* x_1926; lean_object* x_1927; 
lean_dec(x_1855);
lean_dec(x_1);
x_1924 = lean_ctor_get(x_1858, 1);
lean_inc(x_1924);
if (lean_is_exclusive(x_1858)) {
 lean_ctor_release(x_1858, 0);
 lean_ctor_release(x_1858, 1);
 x_1925 = x_1858;
} else {
 lean_dec_ref(x_1858);
 x_1925 = lean_box(0);
}
x_1926 = lean_box(1);
if (lean_is_scalar(x_1925)) {
 x_1927 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1927 = x_1925;
}
lean_ctor_set(x_1927, 0, x_1926);
lean_ctor_set(x_1927, 1, x_1924);
return x_1927;
}
}
else
{
lean_object* x_1928; lean_object* x_1929; lean_object* x_1930; lean_object* x_1931; 
lean_dec(x_1);
x_1928 = lean_ctor_get(x_1854, 1);
lean_inc(x_1928);
if (lean_is_exclusive(x_1854)) {
 lean_ctor_release(x_1854, 0);
 lean_ctor_release(x_1854, 1);
 x_1929 = x_1854;
} else {
 lean_dec_ref(x_1854);
 x_1929 = lean_box(0);
}
x_1930 = lean_box(1);
if (lean_is_scalar(x_1929)) {
 x_1931 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1931 = x_1929;
}
lean_ctor_set(x_1931, 0, x_1930);
lean_ctor_set(x_1931, 1, x_1928);
return x_1931;
}
}
else
{
lean_object* x_1932; lean_object* x_1933; lean_object* x_1934; lean_object* x_1935; lean_object* x_1936; 
lean_dec(x_1);
x_1932 = l_LeanRV64DExecutable_Functions_lower__mstatus(x_1848);
lean_dec(x_1848);
x_1933 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_1934 = lean_unsigned_to_nat(0u);
x_1935 = l_BitVec_extractLsb___redArg(x_1933, x_1934, x_1932);
lean_dec(x_1932);
if (lean_is_scalar(x_1850)) {
 x_1936 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1936 = x_1850;
}
lean_ctor_set(x_1936, 0, x_1935);
lean_ctor_set(x_1936, 1, x_1849);
return x_1936;
}
}
else
{
lean_object* x_1937; lean_object* x_1938; lean_object* x_1939; lean_object* x_1940; 
lean_dec(x_1);
x_1937 = lean_ctor_get(x_1847, 1);
lean_inc(x_1937);
if (lean_is_exclusive(x_1847)) {
 lean_ctor_release(x_1847, 0);
 lean_ctor_release(x_1847, 1);
 x_1938 = x_1847;
} else {
 lean_dec_ref(x_1847);
 x_1938 = lean_box(0);
}
x_1939 = lean_box(1);
if (lean_is_scalar(x_1938)) {
 x_1940 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1940 = x_1938;
}
lean_ctor_set(x_1940, 0, x_1939);
lean_ctor_set(x_1940, 1, x_1937);
return x_1940;
}
}
else
{
uint8_t x_1941; lean_object* x_1942; 
lean_dec(x_1);
x_1941 = 64;
x_1942 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1941, x_1835);
return x_1942;
}
}
else
{
uint8_t x_1943; lean_object* x_1944; 
lean_dec(x_1);
x_1943 = 65;
x_1944 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1943, x_1835);
return x_1944;
}
}
else
{
uint8_t x_1945; lean_object* x_1946; 
lean_dec(x_1);
x_1945 = 67;
x_1946 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1945, x_1835);
return x_1946;
}
}
else
{
uint8_t x_1947; lean_object* x_1948; 
lean_dec(x_1);
x_1947 = 66;
x_1948 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1947, x_1835);
return x_1948;
}
}
else
{
lean_object* x_1949; lean_object* x_1950; lean_object* x_1951; lean_object* x_1952; 
lean_dec(x_1);
x_1949 = lean_unsigned_to_nat(32u);
x_1950 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1951 = l_BitVec_setWidth(x_1949, x_1950, x_1834);
lean_dec(x_1834);
if (lean_is_scalar(x_1836)) {
 x_1952 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1952 = x_1836;
}
lean_ctor_set(x_1952, 0, x_1951);
lean_ctor_set(x_1952, 1, x_1835);
return x_1952;
}
}
else
{
lean_object* x_1953; lean_object* x_1954; lean_object* x_1955; lean_object* x_1956; 
lean_dec(x_1);
x_1953 = lean_ctor_get(x_1833, 1);
lean_inc(x_1953);
if (lean_is_exclusive(x_1833)) {
 lean_ctor_release(x_1833, 0);
 lean_ctor_release(x_1833, 1);
 x_1954 = x_1833;
} else {
 lean_dec_ref(x_1833);
 x_1954 = lean_box(0);
}
x_1955 = lean_box(1);
if (lean_is_scalar(x_1954)) {
 x_1956 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1956 = x_1954;
}
lean_ctor_set(x_1956, 0, x_1955);
lean_ctor_set(x_1956, 1, x_1953);
return x_1956;
}
}
else
{
lean_object* x_1957; lean_object* x_1958; lean_object* x_1959; lean_object* x_1960; 
lean_dec(x_1);
x_1957 = lean_unsigned_to_nat(32u);
x_1958 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1959 = l_BitVec_setWidth(x_1957, x_1958, x_1827);
lean_dec(x_1827);
if (lean_is_scalar(x_1829)) {
 x_1960 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1960 = x_1829;
}
lean_ctor_set(x_1960, 0, x_1959);
lean_ctor_set(x_1960, 1, x_1828);
return x_1960;
}
}
else
{
lean_object* x_1961; lean_object* x_1962; lean_object* x_1963; lean_object* x_1964; 
lean_dec(x_1);
x_1961 = lean_ctor_get(x_1826, 1);
lean_inc(x_1961);
if (lean_is_exclusive(x_1826)) {
 lean_ctor_release(x_1826, 0);
 lean_ctor_release(x_1826, 1);
 x_1962 = x_1826;
} else {
 lean_dec_ref(x_1826);
 x_1962 = lean_box(0);
}
x_1963 = lean_box(1);
if (lean_is_scalar(x_1962)) {
 x_1964 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1964 = x_1962;
}
lean_ctor_set(x_1964, 0, x_1963);
lean_ctor_set(x_1964, 1, x_1961);
return x_1964;
}
}
else
{
lean_object* x_1965; lean_object* x_1966; lean_object* x_1967; lean_object* x_1968; 
lean_dec(x_1);
x_1965 = lean_unsigned_to_nat(32u);
x_1966 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1967 = l_BitVec_setWidth(x_1965, x_1966, x_1821);
lean_dec(x_1821);
x_1968 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1968, 0, x_1967);
lean_ctor_set(x_1968, 1, x_1822);
return x_1968;
}
}
}
else
{
uint8_t x_1969; 
lean_dec(x_1);
x_1969 = !lean_is_exclusive(x_1196);
if (x_1969 == 0)
{
lean_object* x_1970; lean_object* x_1971; 
x_1970 = lean_ctor_get(x_1196, 0);
lean_dec(x_1970);
x_1971 = lean_box(1);
lean_ctor_set(x_1196, 0, x_1971);
return x_1196;
}
else
{
lean_object* x_1972; lean_object* x_1973; lean_object* x_1974; 
x_1972 = lean_ctor_get(x_1196, 1);
lean_inc(x_1972);
lean_dec(x_1196);
x_1973 = lean_box(1);
x_1974 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1974, 0, x_1973);
lean_ctor_set(x_1974, 1, x_1972);
return x_1974;
}
}
}
else
{
lean_object* x_1975; lean_object* x_1976; lean_object* x_1977; 
lean_dec(x_1);
x_1975 = lean_unsigned_to_nat(32u);
x_1976 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1977 = l_BitVec_setWidth(x_1975, x_1976, x_1191);
lean_dec(x_1191);
lean_ctor_set(x_1189, 0, x_1977);
return x_1189;
}
}
else
{
lean_object* x_1978; lean_object* x_1979; lean_object* x_1980; uint8_t x_1981; 
x_1978 = lean_ctor_get(x_1189, 0);
x_1979 = lean_ctor_get(x_1189, 1);
lean_inc(x_1979);
lean_inc(x_1978);
lean_dec(x_1189);
x_1980 = l_LeanRV64DExecutable_Functions_read__CSR___closed__62;
x_1981 = lean_nat_dec_eq(x_1, x_1980);
if (x_1981 == 0)
{
uint8_t x_1982; lean_object* x_1983; 
lean_dec(x_1978);
x_1982 = 74;
x_1983 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1982, x_1979);
if (lean_obj_tag(x_1983) == 0)
{
lean_object* x_1984; lean_object* x_1985; lean_object* x_1986; lean_object* x_1987; uint8_t x_1988; 
x_1984 = lean_ctor_get(x_1983, 0);
lean_inc(x_1984);
x_1985 = lean_ctor_get(x_1983, 1);
lean_inc(x_1985);
if (lean_is_exclusive(x_1983)) {
 lean_ctor_release(x_1983, 0);
 lean_ctor_release(x_1983, 1);
 x_1986 = x_1983;
} else {
 lean_dec_ref(x_1983);
 x_1986 = lean_box(0);
}
x_1987 = l_LeanRV64DExecutable_Functions_read__CSR___closed__63;
x_1988 = lean_nat_dec_eq(x_1, x_1987);
if (x_1988 == 0)
{
uint8_t x_1989; lean_object* x_1990; 
lean_dec(x_1986);
lean_dec(x_1984);
x_1989 = 73;
x_1990 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1989, x_1985);
if (lean_obj_tag(x_1990) == 0)
{
lean_object* x_1991; lean_object* x_1992; lean_object* x_1993; lean_object* x_1994; uint8_t x_1995; 
x_1991 = lean_ctor_get(x_1990, 0);
lean_inc(x_1991);
x_1992 = lean_ctor_get(x_1990, 1);
lean_inc(x_1992);
if (lean_is_exclusive(x_1990)) {
 lean_ctor_release(x_1990, 0);
 lean_ctor_release(x_1990, 1);
 x_1993 = x_1990;
} else {
 lean_dec_ref(x_1990);
 x_1993 = lean_box(0);
}
x_1994 = l_LeanRV64DExecutable_Functions_read__CSR___closed__64;
x_1995 = lean_nat_dec_eq(x_1, x_1994);
if (x_1995 == 0)
{
uint8_t x_1996; lean_object* x_1997; 
lean_dec(x_1993);
lean_dec(x_1991);
x_1996 = 68;
x_1997 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1996, x_1992);
if (lean_obj_tag(x_1997) == 0)
{
lean_object* x_1998; lean_object* x_1999; lean_object* x_2000; lean_object* x_2001; uint8_t x_2002; 
x_1998 = lean_ctor_get(x_1997, 0);
lean_inc(x_1998);
x_1999 = lean_ctor_get(x_1997, 1);
lean_inc(x_1999);
if (lean_is_exclusive(x_1997)) {
 lean_ctor_release(x_1997, 0);
 lean_ctor_release(x_1997, 1);
 x_2000 = x_1997;
} else {
 lean_dec_ref(x_1997);
 x_2000 = lean_box(0);
}
x_2001 = l_LeanRV64DExecutable_Functions_read__CSR___closed__65;
x_2002 = lean_nat_dec_eq(x_1, x_2001);
if (x_2002 == 0)
{
lean_object* x_2003; uint8_t x_2004; 
lean_dec(x_2000);
lean_dec(x_1998);
x_2003 = l_LeanRV64DExecutable_Functions_read__CSR___closed__66;
x_2004 = lean_nat_dec_eq(x_1, x_2003);
if (x_2004 == 0)
{
lean_object* x_2005; uint8_t x_2006; 
x_2005 = l_LeanRV64DExecutable_Functions_read__CSR___closed__67;
x_2006 = lean_nat_dec_eq(x_1, x_2005);
if (x_2006 == 0)
{
lean_object* x_2007; uint8_t x_2008; 
x_2007 = l_LeanRV64DExecutable_Functions_read__CSR___closed__68;
x_2008 = lean_nat_dec_eq(x_1, x_2007);
if (x_2008 == 0)
{
lean_object* x_2009; uint8_t x_2010; 
x_2009 = l_LeanRV64DExecutable_Functions_read__CSR___closed__69;
x_2010 = lean_nat_dec_eq(x_1, x_2009);
if (x_2010 == 0)
{
lean_object* x_2011; 
x_2011 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1176, x_1999);
if (lean_obj_tag(x_2011) == 0)
{
lean_object* x_2012; lean_object* x_2013; lean_object* x_2014; lean_object* x_2015; uint8_t x_2016; 
x_2012 = lean_ctor_get(x_2011, 0);
lean_inc(x_2012);
x_2013 = lean_ctor_get(x_2011, 1);
lean_inc(x_2013);
if (lean_is_exclusive(x_2011)) {
 lean_ctor_release(x_2011, 0);
 lean_ctor_release(x_2011, 1);
 x_2014 = x_2011;
} else {
 lean_dec_ref(x_2011);
 x_2014 = lean_box(0);
}
x_2015 = l_LeanRV64DExecutable_Functions_read__CSR___closed__70;
x_2016 = lean_nat_dec_eq(x_1, x_2015);
if (x_2016 == 0)
{
uint8_t x_2017; lean_object* x_2018; 
lean_dec(x_2014);
lean_dec(x_2012);
x_2017 = 83;
x_2018 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2017, x_2013);
if (lean_obj_tag(x_2018) == 0)
{
lean_object* x_2019; lean_object* x_2020; uint8_t x_2021; lean_object* x_2022; 
x_2019 = lean_ctor_get(x_2018, 0);
lean_inc(x_2019);
x_2020 = lean_ctor_get(x_2018, 1);
lean_inc(x_2020);
lean_dec(x_2018);
x_2021 = 81;
x_2022 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2021, x_2020);
if (lean_obj_tag(x_2022) == 0)
{
lean_object* x_2023; lean_object* x_2024; lean_object* x_2025; lean_object* x_2026; uint8_t x_2027; 
x_2023 = lean_ctor_get(x_2022, 0);
lean_inc(x_2023);
x_2024 = lean_ctor_get(x_2022, 1);
lean_inc(x_2024);
if (lean_is_exclusive(x_2022)) {
 lean_ctor_release(x_2022, 0);
 lean_ctor_release(x_2022, 1);
 x_2025 = x_2022;
} else {
 lean_dec_ref(x_2022);
 x_2025 = lean_box(0);
}
x_2026 = l_LeanRV64DExecutable_Functions_read__CSR___closed__71;
x_2027 = lean_nat_dec_eq(x_1, x_2026);
if (x_2027 == 0)
{
uint8_t x_2028; lean_object* x_2029; 
lean_dec(x_2025);
lean_dec(x_2023);
lean_dec(x_2019);
x_2028 = 84;
x_2029 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2028, x_2024);
if (lean_obj_tag(x_2029) == 0)
{
lean_object* x_2030; lean_object* x_2031; lean_object* x_2032; 
x_2030 = lean_ctor_get(x_2029, 0);
lean_inc(x_2030);
x_2031 = lean_ctor_get(x_2029, 1);
lean_inc(x_2031);
lean_dec(x_2029);
x_2032 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2021, x_2031);
if (lean_obj_tag(x_2032) == 0)
{
lean_object* x_2033; lean_object* x_2034; lean_object* x_2035; lean_object* x_2036; uint8_t x_2037; 
x_2033 = lean_ctor_get(x_2032, 0);
lean_inc(x_2033);
x_2034 = lean_ctor_get(x_2032, 1);
lean_inc(x_2034);
if (lean_is_exclusive(x_2032)) {
 lean_ctor_release(x_2032, 0);
 lean_ctor_release(x_2032, 1);
 x_2035 = x_2032;
} else {
 lean_dec_ref(x_2032);
 x_2035 = lean_box(0);
}
x_2036 = l_LeanRV64DExecutable_Functions_read__CSR___closed__72;
x_2037 = lean_nat_dec_eq(x_1, x_2036);
if (x_2037 == 0)
{
lean_object* x_2038; uint8_t x_2039; 
lean_dec(x_2035);
lean_dec(x_2033);
lean_dec(x_2030);
x_2038 = l_LeanRV64DExecutable_Functions_read__CSR___closed__73;
x_2039 = lean_nat_dec_eq(x_1, x_2038);
if (x_2039 == 0)
{
lean_object* x_2040; uint8_t x_2041; 
x_2040 = l_LeanRV64DExecutable_Functions_read__CSR___closed__74;
x_2041 = lean_nat_dec_eq(x_1, x_2040);
if (x_2041 == 0)
{
lean_object* x_2042; uint8_t x_2043; 
x_2042 = l_LeanRV64DExecutable_Functions_read__CSR___closed__75;
x_2043 = lean_nat_dec_eq(x_1, x_2042);
if (x_2043 == 0)
{
uint8_t x_2044; lean_object* x_2045; 
x_2044 = 58;
x_2045 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2044, x_2034);
if (lean_obj_tag(x_2045) == 0)
{
lean_object* x_2046; lean_object* x_2047; lean_object* x_2048; lean_object* x_2049; uint8_t x_2050; 
x_2046 = lean_ctor_get(x_2045, 0);
lean_inc(x_2046);
x_2047 = lean_ctor_get(x_2045, 1);
lean_inc(x_2047);
if (lean_is_exclusive(x_2045)) {
 lean_ctor_release(x_2045, 0);
 lean_ctor_release(x_2045, 1);
 x_2048 = x_2045;
} else {
 lean_dec_ref(x_2045);
 x_2048 = lean_box(0);
}
x_2049 = l_LeanRV64DExecutable_Functions_read__CSR___closed__76;
x_2050 = lean_nat_dec_eq(x_1, x_2049);
if (x_2050 == 0)
{
lean_object* x_2051; lean_object* x_2052; lean_object* x_2053; lean_object* x_2054; uint8_t x_2055; 
lean_dec(x_2048);
lean_dec(x_2046);
x_2051 = lean_unsigned_to_nat(11u);
x_2052 = lean_unsigned_to_nat(4u);
x_2053 = l_BitVec_extractLsb___redArg(x_2051, x_2052, x_1);
x_2054 = l_LeanRV64DExecutable_Functions_read__CSR___closed__77;
x_2055 = lean_nat_dec_eq(x_2053, x_2054);
lean_dec(x_2053);
if (x_2055 == 0)
{
x_776 = x_2047;
x_777 = x_2055;
goto block_1173;
}
else
{
lean_object* x_2056; lean_object* x_2057; lean_object* x_2058; lean_object* x_2059; lean_object* x_2060; uint8_t x_2061; 
x_2056 = lean_unsigned_to_nat(3u);
x_2057 = lean_unsigned_to_nat(0u);
x_2058 = l_BitVec_extractLsb___redArg(x_2056, x_2057, x_1);
x_2059 = l_Sail_BitVec_access(x_2052, x_2058, x_2057);
lean_dec(x_2058);
x_2060 = l_LeanRV64DExecutable_Functions_read__CSR___closed__78;
x_2061 = lean_nat_dec_eq(x_2059, x_2060);
lean_dec(x_2059);
if (x_2061 == 0)
{
uint8_t x_2062; 
x_2062 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_776 = x_2047;
x_777 = x_2062;
goto block_1173;
}
else
{
x_776 = x_2047;
x_777 = x_2061;
goto block_1173;
}
}
}
else
{
lean_object* x_2063; lean_object* x_2064; lean_object* x_2065; 
lean_dec(x_1);
x_2063 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_2064 = l_BitVec_not(x_2063, x_2046);
lean_dec(x_2046);
if (lean_is_scalar(x_2048)) {
 x_2065 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2065 = x_2048;
}
lean_ctor_set(x_2065, 0, x_2064);
lean_ctor_set(x_2065, 1, x_2047);
return x_2065;
}
}
else
{
lean_object* x_2066; lean_object* x_2067; lean_object* x_2068; lean_object* x_2069; 
lean_dec(x_1);
x_2066 = lean_ctor_get(x_2045, 1);
lean_inc(x_2066);
if (lean_is_exclusive(x_2045)) {
 lean_ctor_release(x_2045, 0);
 lean_ctor_release(x_2045, 1);
 x_2067 = x_2045;
} else {
 lean_dec_ref(x_2045);
 x_2067 = lean_box(0);
}
x_2068 = lean_box(1);
if (lean_is_scalar(x_2067)) {
 x_2069 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2069 = x_2067;
}
lean_ctor_set(x_2069, 0, x_2068);
lean_ctor_set(x_2069, 1, x_2066);
return x_2069;
}
}
else
{
uint8_t x_2070; lean_object* x_2071; 
lean_dec(x_1);
x_2070 = 59;
x_2071 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2070, x_2034);
return x_2071;
}
}
else
{
uint8_t x_2072; lean_object* x_2073; 
lean_dec(x_1);
x_2072 = 60;
x_2073 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2072, x_2034);
return x_2073;
}
}
else
{
uint8_t x_2074; lean_object* x_2075; 
lean_dec(x_1);
x_2074 = 62;
x_2075 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2074, x_2034);
return x_2075;
}
}
else
{
lean_object* x_2076; lean_object* x_2077; 
lean_dec(x_1);
x_2076 = l_LeanRV64DExecutable_Functions_lower__mie(x_2030, x_2033);
lean_dec(x_2033);
lean_dec(x_2030);
if (lean_is_scalar(x_2035)) {
 x_2077 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2077 = x_2035;
}
lean_ctor_set(x_2077, 0, x_2076);
lean_ctor_set(x_2077, 1, x_2034);
return x_2077;
}
}
else
{
lean_object* x_2078; lean_object* x_2079; lean_object* x_2080; lean_object* x_2081; 
lean_dec(x_2030);
lean_dec(x_1);
x_2078 = lean_ctor_get(x_2032, 1);
lean_inc(x_2078);
if (lean_is_exclusive(x_2032)) {
 lean_ctor_release(x_2032, 0);
 lean_ctor_release(x_2032, 1);
 x_2079 = x_2032;
} else {
 lean_dec_ref(x_2032);
 x_2079 = lean_box(0);
}
x_2080 = lean_box(1);
if (lean_is_scalar(x_2079)) {
 x_2081 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2081 = x_2079;
}
lean_ctor_set(x_2081, 0, x_2080);
lean_ctor_set(x_2081, 1, x_2078);
return x_2081;
}
}
else
{
lean_object* x_2082; lean_object* x_2083; lean_object* x_2084; lean_object* x_2085; 
lean_dec(x_1);
x_2082 = lean_ctor_get(x_2029, 1);
lean_inc(x_2082);
if (lean_is_exclusive(x_2029)) {
 lean_ctor_release(x_2029, 0);
 lean_ctor_release(x_2029, 1);
 x_2083 = x_2029;
} else {
 lean_dec_ref(x_2029);
 x_2083 = lean_box(0);
}
x_2084 = lean_box(1);
if (lean_is_scalar(x_2083)) {
 x_2085 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2085 = x_2083;
}
lean_ctor_set(x_2085, 0, x_2084);
lean_ctor_set(x_2085, 1, x_2082);
return x_2085;
}
}
else
{
lean_object* x_2086; lean_object* x_2087; 
lean_dec(x_1);
x_2086 = l_LeanRV64DExecutable_Functions_lower__mip(x_2019, x_2023);
lean_dec(x_2023);
lean_dec(x_2019);
if (lean_is_scalar(x_2025)) {
 x_2087 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2087 = x_2025;
}
lean_ctor_set(x_2087, 0, x_2086);
lean_ctor_set(x_2087, 1, x_2024);
return x_2087;
}
}
else
{
lean_object* x_2088; lean_object* x_2089; lean_object* x_2090; lean_object* x_2091; 
lean_dec(x_2019);
lean_dec(x_1);
x_2088 = lean_ctor_get(x_2022, 1);
lean_inc(x_2088);
if (lean_is_exclusive(x_2022)) {
 lean_ctor_release(x_2022, 0);
 lean_ctor_release(x_2022, 1);
 x_2089 = x_2022;
} else {
 lean_dec_ref(x_2022);
 x_2089 = lean_box(0);
}
x_2090 = lean_box(1);
if (lean_is_scalar(x_2089)) {
 x_2091 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2091 = x_2089;
}
lean_ctor_set(x_2091, 0, x_2090);
lean_ctor_set(x_2091, 1, x_2088);
return x_2091;
}
}
else
{
lean_object* x_2092; lean_object* x_2093; lean_object* x_2094; lean_object* x_2095; 
lean_dec(x_1);
x_2092 = lean_ctor_get(x_2018, 1);
lean_inc(x_2092);
if (lean_is_exclusive(x_2018)) {
 lean_ctor_release(x_2018, 0);
 lean_ctor_release(x_2018, 1);
 x_2093 = x_2018;
} else {
 lean_dec_ref(x_2018);
 x_2093 = lean_box(0);
}
x_2094 = lean_box(1);
if (lean_is_scalar(x_2093)) {
 x_2095 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2095 = x_2093;
}
lean_ctor_set(x_2095, 0, x_2094);
lean_ctor_set(x_2095, 1, x_2092);
return x_2095;
}
}
else
{
lean_object* x_2096; lean_object* x_2097; lean_object* x_2098; lean_object* x_2099; lean_object* x_2100; 
lean_dec(x_1);
x_2096 = l_LeanRV64DExecutable_Functions_lower__mstatus(x_2012);
lean_dec(x_2012);
x_2097 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_2098 = lean_unsigned_to_nat(0u);
x_2099 = l_BitVec_extractLsb___redArg(x_2097, x_2098, x_2096);
lean_dec(x_2096);
if (lean_is_scalar(x_2014)) {
 x_2100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2100 = x_2014;
}
lean_ctor_set(x_2100, 0, x_2099);
lean_ctor_set(x_2100, 1, x_2013);
return x_2100;
}
}
else
{
lean_object* x_2101; lean_object* x_2102; lean_object* x_2103; lean_object* x_2104; 
lean_dec(x_1);
x_2101 = lean_ctor_get(x_2011, 1);
lean_inc(x_2101);
if (lean_is_exclusive(x_2011)) {
 lean_ctor_release(x_2011, 0);
 lean_ctor_release(x_2011, 1);
 x_2102 = x_2011;
} else {
 lean_dec_ref(x_2011);
 x_2102 = lean_box(0);
}
x_2103 = lean_box(1);
if (lean_is_scalar(x_2102)) {
 x_2104 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2104 = x_2102;
}
lean_ctor_set(x_2104, 0, x_2103);
lean_ctor_set(x_2104, 1, x_2101);
return x_2104;
}
}
else
{
uint8_t x_2105; lean_object* x_2106; 
lean_dec(x_1);
x_2105 = 64;
x_2106 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2105, x_1999);
return x_2106;
}
}
else
{
uint8_t x_2107; lean_object* x_2108; 
lean_dec(x_1);
x_2107 = 65;
x_2108 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2107, x_1999);
return x_2108;
}
}
else
{
uint8_t x_2109; lean_object* x_2110; 
lean_dec(x_1);
x_2109 = 67;
x_2110 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2109, x_1999);
return x_2110;
}
}
else
{
uint8_t x_2111; lean_object* x_2112; 
lean_dec(x_1);
x_2111 = 66;
x_2112 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2111, x_1999);
return x_2112;
}
}
else
{
lean_object* x_2113; lean_object* x_2114; lean_object* x_2115; lean_object* x_2116; 
lean_dec(x_1);
x_2113 = lean_unsigned_to_nat(32u);
x_2114 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_2115 = l_BitVec_setWidth(x_2113, x_2114, x_1998);
lean_dec(x_1998);
if (lean_is_scalar(x_2000)) {
 x_2116 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2116 = x_2000;
}
lean_ctor_set(x_2116, 0, x_2115);
lean_ctor_set(x_2116, 1, x_1999);
return x_2116;
}
}
else
{
lean_object* x_2117; lean_object* x_2118; lean_object* x_2119; lean_object* x_2120; 
lean_dec(x_1);
x_2117 = lean_ctor_get(x_1997, 1);
lean_inc(x_2117);
if (lean_is_exclusive(x_1997)) {
 lean_ctor_release(x_1997, 0);
 lean_ctor_release(x_1997, 1);
 x_2118 = x_1997;
} else {
 lean_dec_ref(x_1997);
 x_2118 = lean_box(0);
}
x_2119 = lean_box(1);
if (lean_is_scalar(x_2118)) {
 x_2120 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2120 = x_2118;
}
lean_ctor_set(x_2120, 0, x_2119);
lean_ctor_set(x_2120, 1, x_2117);
return x_2120;
}
}
else
{
lean_object* x_2121; lean_object* x_2122; lean_object* x_2123; lean_object* x_2124; 
lean_dec(x_1);
x_2121 = lean_unsigned_to_nat(32u);
x_2122 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_2123 = l_BitVec_setWidth(x_2121, x_2122, x_1991);
lean_dec(x_1991);
if (lean_is_scalar(x_1993)) {
 x_2124 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2124 = x_1993;
}
lean_ctor_set(x_2124, 0, x_2123);
lean_ctor_set(x_2124, 1, x_1992);
return x_2124;
}
}
else
{
lean_object* x_2125; lean_object* x_2126; lean_object* x_2127; lean_object* x_2128; 
lean_dec(x_1);
x_2125 = lean_ctor_get(x_1990, 1);
lean_inc(x_2125);
if (lean_is_exclusive(x_1990)) {
 lean_ctor_release(x_1990, 0);
 lean_ctor_release(x_1990, 1);
 x_2126 = x_1990;
} else {
 lean_dec_ref(x_1990);
 x_2126 = lean_box(0);
}
x_2127 = lean_box(1);
if (lean_is_scalar(x_2126)) {
 x_2128 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2128 = x_2126;
}
lean_ctor_set(x_2128, 0, x_2127);
lean_ctor_set(x_2128, 1, x_2125);
return x_2128;
}
}
else
{
lean_object* x_2129; lean_object* x_2130; lean_object* x_2131; lean_object* x_2132; 
lean_dec(x_1);
x_2129 = lean_unsigned_to_nat(32u);
x_2130 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_2131 = l_BitVec_setWidth(x_2129, x_2130, x_1984);
lean_dec(x_1984);
if (lean_is_scalar(x_1986)) {
 x_2132 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2132 = x_1986;
}
lean_ctor_set(x_2132, 0, x_2131);
lean_ctor_set(x_2132, 1, x_1985);
return x_2132;
}
}
else
{
lean_object* x_2133; lean_object* x_2134; lean_object* x_2135; lean_object* x_2136; 
lean_dec(x_1);
x_2133 = lean_ctor_get(x_1983, 1);
lean_inc(x_2133);
if (lean_is_exclusive(x_1983)) {
 lean_ctor_release(x_1983, 0);
 lean_ctor_release(x_1983, 1);
 x_2134 = x_1983;
} else {
 lean_dec_ref(x_1983);
 x_2134 = lean_box(0);
}
x_2135 = lean_box(1);
if (lean_is_scalar(x_2134)) {
 x_2136 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2136 = x_2134;
}
lean_ctor_set(x_2136, 0, x_2135);
lean_ctor_set(x_2136, 1, x_2133);
return x_2136;
}
}
else
{
lean_object* x_2137; lean_object* x_2138; lean_object* x_2139; lean_object* x_2140; 
lean_dec(x_1);
x_2137 = lean_unsigned_to_nat(32u);
x_2138 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_2139 = l_BitVec_setWidth(x_2137, x_2138, x_1978);
lean_dec(x_1978);
x_2140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2140, 0, x_2139);
lean_ctor_set(x_2140, 1, x_1979);
return x_2140;
}
}
}
else
{
uint8_t x_2141; 
lean_dec(x_1);
x_2141 = !lean_is_exclusive(x_1189);
if (x_2141 == 0)
{
lean_object* x_2142; lean_object* x_2143; 
x_2142 = lean_ctor_get(x_1189, 0);
lean_dec(x_2142);
x_2143 = lean_box(1);
lean_ctor_set(x_1189, 0, x_2143);
return x_1189;
}
else
{
lean_object* x_2144; lean_object* x_2145; lean_object* x_2146; 
x_2144 = lean_ctor_get(x_1189, 1);
lean_inc(x_2144);
lean_dec(x_1189);
x_2145 = lean_box(1);
x_2146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2146, 0, x_2145);
lean_ctor_set(x_2146, 1, x_2144);
return x_2146;
}
}
}
else
{
uint8_t x_2147; lean_object* x_2148; 
lean_dec(x_1);
x_2147 = 76;
x_2148 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2147, x_1177);
return x_2148;
}
}
else
{
uint8_t x_2149; lean_object* x_2150; 
lean_dec(x_1);
x_2149 = 77;
x_2150 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2149, x_1177);
return x_2150;
}
}
else
{
uint8_t x_2151; lean_object* x_2152; 
lean_dec(x_1);
x_2151 = 79;
x_2152 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2151, x_1177);
return x_2152;
}
}
else
{
uint8_t x_2153; lean_object* x_2154; 
lean_dec(x_1);
x_2153 = 81;
x_2154 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2153, x_1177);
return x_2154;
}
}
else
{
lean_object* x_2155; lean_object* x_2156; lean_object* x_2157; lean_object* x_2158; lean_object* x_2159; lean_object* x_2160; 
lean_dec(x_1);
x_2155 = lean_unsigned_to_nat(63u);
x_2156 = lean_unsigned_to_nat(32u);
x_2157 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_2158 = l_BitVec_extractLsb___redArg(x_2155, x_2156, x_1178);
lean_dec(x_1178);
x_2159 = l_BitVec_setWidth(x_2156, x_2157, x_2158);
lean_dec(x_2158);
x_2160 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2160, 0, x_2159);
lean_ctor_set(x_2160, 1, x_1177);
return x_2160;
}
}
block_2282:
{
if (x_2164 == 0)
{
uint8_t x_2165; lean_object* x_2166; 
lean_dec(x_2162);
x_2165 = 85;
x_2166 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2165, x_2163);
if (lean_obj_tag(x_2166) == 0)
{
uint8_t x_2167; 
x_2167 = !lean_is_exclusive(x_2166);
if (x_2167 == 0)
{
lean_object* x_2168; lean_object* x_2169; lean_object* x_2170; uint8_t x_2171; 
x_2168 = lean_ctor_get(x_2166, 0);
x_2169 = lean_ctor_get(x_2166, 1);
x_2170 = l_LeanRV64DExecutable_Functions_read__CSR___closed__79;
x_2171 = lean_nat_dec_eq(x_1, x_2170);
if (x_2171 == 0)
{
lean_object* x_2172; uint8_t x_2173; 
lean_free_object(x_2166);
lean_dec(x_2168);
x_2172 = l_LeanRV64DExecutable_Functions_read__CSR___closed__80;
x_2173 = lean_nat_dec_eq(x_1, x_2172);
if (x_2173 == 0)
{
lean_object* x_2174; uint8_t x_2175; 
x_2174 = l_LeanRV64DExecutable_Functions_read__CSR___closed__81;
x_2175 = lean_nat_dec_eq(x_1, x_2174);
if (x_2175 == 0)
{
uint8_t x_2176; lean_object* x_2177; 
x_2176 = 82;
x_2177 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2176, x_2169);
if (lean_obj_tag(x_2177) == 0)
{
uint8_t x_2178; 
x_2178 = !lean_is_exclusive(x_2177);
if (x_2178 == 0)
{
lean_object* x_2179; lean_object* x_2180; lean_object* x_2181; uint8_t x_2182; 
x_2179 = lean_ctor_get(x_2177, 0);
x_2180 = lean_ctor_get(x_2177, 1);
x_2181 = l_LeanRV64DExecutable_Functions_read__CSR___closed__82;
x_2182 = lean_nat_dec_eq(x_1, x_2181);
if (x_2182 == 0)
{
lean_object* x_2183; 
lean_free_object(x_2177);
lean_dec(x_2179);
x_2183 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2176, x_2180);
if (lean_obj_tag(x_2183) == 0)
{
lean_object* x_2184; lean_object* x_2185; lean_object* x_2186; uint8_t x_2187; 
x_2184 = lean_ctor_get(x_2183, 0);
lean_inc(x_2184);
x_2185 = lean_ctor_get(x_2183, 1);
lean_inc(x_2185);
lean_dec(x_2183);
x_2186 = l_LeanRV64DExecutable_Functions_read__CSR___closed__83;
x_2187 = lean_nat_dec_eq(x_1, x_2186);
if (x_2187 == 0)
{
x_1177 = x_2185;
x_1178 = x_2184;
x_1179 = x_2187;
goto block_2161;
}
else
{
uint8_t x_2188; 
x_2188 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_1177 = x_2185;
x_1178 = x_2184;
x_1179 = x_2188;
goto block_2161;
}
}
else
{
uint8_t x_2189; 
lean_dec(x_1);
x_2189 = !lean_is_exclusive(x_2183);
if (x_2189 == 0)
{
lean_object* x_2190; lean_object* x_2191; 
x_2190 = lean_ctor_get(x_2183, 0);
lean_dec(x_2190);
x_2191 = lean_box(1);
lean_ctor_set(x_2183, 0, x_2191);
return x_2183;
}
else
{
lean_object* x_2192; lean_object* x_2193; lean_object* x_2194; 
x_2192 = lean_ctor_get(x_2183, 1);
lean_inc(x_2192);
lean_dec(x_2183);
x_2193 = lean_box(1);
x_2194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2194, 0, x_2193);
lean_ctor_set(x_2194, 1, x_2192);
return x_2194;
}
}
}
else
{
lean_object* x_2195; lean_object* x_2196; lean_object* x_2197; 
lean_dec(x_1);
x_2195 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_2196 = lean_unsigned_to_nat(0u);
x_2197 = l_BitVec_extractLsb___redArg(x_2195, x_2196, x_2179);
lean_dec(x_2179);
lean_ctor_set(x_2177, 0, x_2197);
return x_2177;
}
}
else
{
lean_object* x_2198; lean_object* x_2199; lean_object* x_2200; uint8_t x_2201; 
x_2198 = lean_ctor_get(x_2177, 0);
x_2199 = lean_ctor_get(x_2177, 1);
lean_inc(x_2199);
lean_inc(x_2198);
lean_dec(x_2177);
x_2200 = l_LeanRV64DExecutable_Functions_read__CSR___closed__82;
x_2201 = lean_nat_dec_eq(x_1, x_2200);
if (x_2201 == 0)
{
lean_object* x_2202; 
lean_dec(x_2198);
x_2202 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2176, x_2199);
if (lean_obj_tag(x_2202) == 0)
{
lean_object* x_2203; lean_object* x_2204; lean_object* x_2205; uint8_t x_2206; 
x_2203 = lean_ctor_get(x_2202, 0);
lean_inc(x_2203);
x_2204 = lean_ctor_get(x_2202, 1);
lean_inc(x_2204);
lean_dec(x_2202);
x_2205 = l_LeanRV64DExecutable_Functions_read__CSR___closed__83;
x_2206 = lean_nat_dec_eq(x_1, x_2205);
if (x_2206 == 0)
{
x_1177 = x_2204;
x_1178 = x_2203;
x_1179 = x_2206;
goto block_2161;
}
else
{
uint8_t x_2207; 
x_2207 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_1177 = x_2204;
x_1178 = x_2203;
x_1179 = x_2207;
goto block_2161;
}
}
else
{
lean_object* x_2208; lean_object* x_2209; lean_object* x_2210; lean_object* x_2211; 
lean_dec(x_1);
x_2208 = lean_ctor_get(x_2202, 1);
lean_inc(x_2208);
if (lean_is_exclusive(x_2202)) {
 lean_ctor_release(x_2202, 0);
 lean_ctor_release(x_2202, 1);
 x_2209 = x_2202;
} else {
 lean_dec_ref(x_2202);
 x_2209 = lean_box(0);
}
x_2210 = lean_box(1);
if (lean_is_scalar(x_2209)) {
 x_2211 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2211 = x_2209;
}
lean_ctor_set(x_2211, 0, x_2210);
lean_ctor_set(x_2211, 1, x_2208);
return x_2211;
}
}
else
{
lean_object* x_2212; lean_object* x_2213; lean_object* x_2214; lean_object* x_2215; 
lean_dec(x_1);
x_2212 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_2213 = lean_unsigned_to_nat(0u);
x_2214 = l_BitVec_extractLsb___redArg(x_2212, x_2213, x_2198);
lean_dec(x_2198);
x_2215 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2215, 0, x_2214);
lean_ctor_set(x_2215, 1, x_2199);
return x_2215;
}
}
}
else
{
uint8_t x_2216; 
lean_dec(x_1);
x_2216 = !lean_is_exclusive(x_2177);
if (x_2216 == 0)
{
lean_object* x_2217; lean_object* x_2218; 
x_2217 = lean_ctor_get(x_2177, 0);
lean_dec(x_2217);
x_2218 = lean_box(1);
lean_ctor_set(x_2177, 0, x_2218);
return x_2177;
}
else
{
lean_object* x_2219; lean_object* x_2220; lean_object* x_2221; 
x_2219 = lean_ctor_get(x_2177, 1);
lean_inc(x_2219);
lean_dec(x_2177);
x_2220 = lean_box(1);
x_2221 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2221, 0, x_2220);
lean_ctor_set(x_2221, 1, x_2219);
return x_2221;
}
}
}
else
{
uint8_t x_2222; lean_object* x_2223; 
lean_dec(x_1);
x_2222 = 83;
x_2223 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2222, x_2169);
return x_2223;
}
}
else
{
uint8_t x_2224; lean_object* x_2225; 
lean_dec(x_1);
x_2224 = 84;
x_2225 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2224, x_2169);
return x_2225;
}
}
else
{
lean_object* x_2226; lean_object* x_2227; lean_object* x_2228; 
lean_dec(x_1);
x_2226 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_2227 = lean_unsigned_to_nat(0u);
x_2228 = l_BitVec_extractLsb___redArg(x_2226, x_2227, x_2168);
lean_dec(x_2168);
lean_ctor_set(x_2166, 0, x_2228);
return x_2166;
}
}
else
{
lean_object* x_2229; lean_object* x_2230; lean_object* x_2231; uint8_t x_2232; 
x_2229 = lean_ctor_get(x_2166, 0);
x_2230 = lean_ctor_get(x_2166, 1);
lean_inc(x_2230);
lean_inc(x_2229);
lean_dec(x_2166);
x_2231 = l_LeanRV64DExecutable_Functions_read__CSR___closed__79;
x_2232 = lean_nat_dec_eq(x_1, x_2231);
if (x_2232 == 0)
{
lean_object* x_2233; uint8_t x_2234; 
lean_dec(x_2229);
x_2233 = l_LeanRV64DExecutable_Functions_read__CSR___closed__80;
x_2234 = lean_nat_dec_eq(x_1, x_2233);
if (x_2234 == 0)
{
lean_object* x_2235; uint8_t x_2236; 
x_2235 = l_LeanRV64DExecutable_Functions_read__CSR___closed__81;
x_2236 = lean_nat_dec_eq(x_1, x_2235);
if (x_2236 == 0)
{
uint8_t x_2237; lean_object* x_2238; 
x_2237 = 82;
x_2238 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2237, x_2230);
if (lean_obj_tag(x_2238) == 0)
{
lean_object* x_2239; lean_object* x_2240; lean_object* x_2241; lean_object* x_2242; uint8_t x_2243; 
x_2239 = lean_ctor_get(x_2238, 0);
lean_inc(x_2239);
x_2240 = lean_ctor_get(x_2238, 1);
lean_inc(x_2240);
if (lean_is_exclusive(x_2238)) {
 lean_ctor_release(x_2238, 0);
 lean_ctor_release(x_2238, 1);
 x_2241 = x_2238;
} else {
 lean_dec_ref(x_2238);
 x_2241 = lean_box(0);
}
x_2242 = l_LeanRV64DExecutable_Functions_read__CSR___closed__82;
x_2243 = lean_nat_dec_eq(x_1, x_2242);
if (x_2243 == 0)
{
lean_object* x_2244; 
lean_dec(x_2241);
lean_dec(x_2239);
x_2244 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2237, x_2240);
if (lean_obj_tag(x_2244) == 0)
{
lean_object* x_2245; lean_object* x_2246; lean_object* x_2247; uint8_t x_2248; 
x_2245 = lean_ctor_get(x_2244, 0);
lean_inc(x_2245);
x_2246 = lean_ctor_get(x_2244, 1);
lean_inc(x_2246);
lean_dec(x_2244);
x_2247 = l_LeanRV64DExecutable_Functions_read__CSR___closed__83;
x_2248 = lean_nat_dec_eq(x_1, x_2247);
if (x_2248 == 0)
{
x_1177 = x_2246;
x_1178 = x_2245;
x_1179 = x_2248;
goto block_2161;
}
else
{
uint8_t x_2249; 
x_2249 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_1177 = x_2246;
x_1178 = x_2245;
x_1179 = x_2249;
goto block_2161;
}
}
else
{
lean_object* x_2250; lean_object* x_2251; lean_object* x_2252; lean_object* x_2253; 
lean_dec(x_1);
x_2250 = lean_ctor_get(x_2244, 1);
lean_inc(x_2250);
if (lean_is_exclusive(x_2244)) {
 lean_ctor_release(x_2244, 0);
 lean_ctor_release(x_2244, 1);
 x_2251 = x_2244;
} else {
 lean_dec_ref(x_2244);
 x_2251 = lean_box(0);
}
x_2252 = lean_box(1);
if (lean_is_scalar(x_2251)) {
 x_2253 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2253 = x_2251;
}
lean_ctor_set(x_2253, 0, x_2252);
lean_ctor_set(x_2253, 1, x_2250);
return x_2253;
}
}
else
{
lean_object* x_2254; lean_object* x_2255; lean_object* x_2256; lean_object* x_2257; 
lean_dec(x_1);
x_2254 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_2255 = lean_unsigned_to_nat(0u);
x_2256 = l_BitVec_extractLsb___redArg(x_2254, x_2255, x_2239);
lean_dec(x_2239);
if (lean_is_scalar(x_2241)) {
 x_2257 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2257 = x_2241;
}
lean_ctor_set(x_2257, 0, x_2256);
lean_ctor_set(x_2257, 1, x_2240);
return x_2257;
}
}
else
{
lean_object* x_2258; lean_object* x_2259; lean_object* x_2260; lean_object* x_2261; 
lean_dec(x_1);
x_2258 = lean_ctor_get(x_2238, 1);
lean_inc(x_2258);
if (lean_is_exclusive(x_2238)) {
 lean_ctor_release(x_2238, 0);
 lean_ctor_release(x_2238, 1);
 x_2259 = x_2238;
} else {
 lean_dec_ref(x_2238);
 x_2259 = lean_box(0);
}
x_2260 = lean_box(1);
if (lean_is_scalar(x_2259)) {
 x_2261 = lean_alloc_ctor(1, 2, 0);
} else {
 x_2261 = x_2259;
}
lean_ctor_set(x_2261, 0, x_2260);
lean_ctor_set(x_2261, 1, x_2258);
return x_2261;
}
}
else
{
uint8_t x_2262; lean_object* x_2263; 
lean_dec(x_1);
x_2262 = 83;
x_2263 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2262, x_2230);
return x_2263;
}
}
else
{
uint8_t x_2264; lean_object* x_2265; 
lean_dec(x_1);
x_2264 = 84;
x_2265 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2264, x_2230);
return x_2265;
}
}
else
{
lean_object* x_2266; lean_object* x_2267; lean_object* x_2268; lean_object* x_2269; 
lean_dec(x_1);
x_2266 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_2267 = lean_unsigned_to_nat(0u);
x_2268 = l_BitVec_extractLsb___redArg(x_2266, x_2267, x_2229);
lean_dec(x_2229);
x_2269 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2269, 0, x_2268);
lean_ctor_set(x_2269, 1, x_2230);
return x_2269;
}
}
}
else
{
uint8_t x_2270; 
lean_dec(x_1);
x_2270 = !lean_is_exclusive(x_2166);
if (x_2270 == 0)
{
lean_object* x_2271; lean_object* x_2272; 
x_2271 = lean_ctor_get(x_2166, 0);
lean_dec(x_2271);
x_2272 = lean_box(1);
lean_ctor_set(x_2166, 0, x_2272);
return x_2166;
}
else
{
lean_object* x_2273; lean_object* x_2274; lean_object* x_2275; 
x_2273 = lean_ctor_get(x_2166, 1);
lean_inc(x_2273);
lean_dec(x_2166);
x_2274 = lean_box(1);
x_2275 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2275, 0, x_2274);
lean_ctor_set(x_2275, 1, x_2273);
return x_2275;
}
}
}
else
{
lean_object* x_2276; lean_object* x_2277; lean_object* x_2278; lean_object* x_2279; lean_object* x_2280; lean_object* x_2281; 
lean_dec(x_1);
x_2276 = lean_unsigned_to_nat(63u);
x_2277 = lean_unsigned_to_nat(32u);
x_2278 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_2279 = l_BitVec_extractLsb___redArg(x_2276, x_2277, x_2162);
lean_dec(x_2162);
x_2280 = l_BitVec_setWidth(x_2277, x_2278, x_2279);
lean_dec(x_2279);
x_2281 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2281, 0, x_2280);
lean_ctor_set(x_2281, 1, x_2163);
return x_2281;
}
}
}
else
{
uint8_t x_2417; lean_object* x_2418; 
lean_dec(x_1);
x_2417 = 88;
x_2418 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2417, x_2);
return x_2418;
}
block_15:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_unsigned_to_nat(4u);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_BitVec_extractLsb___redArg(x_4, x_5, x_1);
lean_dec(x_1);
x_7 = l_LeanRV64DExecutable_Functions_hpmidx__from__bits(x_6, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_LeanRV64DExecutable_Functions_read__mhpmcounter(x_8, x_9);
lean_dec(x_8);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_7);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
block_39:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_unsigned_to_nat(4u);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_BitVec_extractLsb___redArg(x_17, x_18, x_1);
lean_dec(x_1);
x_20 = l_LeanRV64DExecutable_Functions_hpmidx__from__bits(x_19, x_16);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_LeanRV64DExecutable_Functions_read__mhpmcounterh(x_21, x_22);
lean_dec(x_21);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_unsigned_to_nat(32u);
x_27 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_28 = l_BitVec_setWidth(x_26, x_27, x_25);
lean_dec(x_25);
lean_ctor_set(x_23, 0, x_28);
return x_23;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_23, 0);
x_30 = lean_ctor_get(x_23, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_23);
x_31 = lean_unsigned_to_nat(32u);
x_32 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_33 = l_BitVec_setWidth(x_31, x_32, x_29);
lean_dec(x_29);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_30);
return x_34;
}
}
else
{
return x_23;
}
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_20);
if (x_35 == 0)
{
return x_20;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_20, 0);
x_37 = lean_ctor_get(x_20, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_20);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
block_61:
{
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
lean_dec(x_42);
lean_dec(x_41);
x_45 = l_LeanRV64DExecutable_Functions_read__CSR___closed__1;
x_46 = lean_nat_dec_eq(x_1, x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_47 = l_LeanRV64DExecutable_Functions_read__CSR___closed__2;
x_48 = l_LeanRV64DExecutable_Functions_read__CSR___closed__3;
x_49 = l_LeanRV64DExecutable_Functions_read__CSR___closed__4;
x_50 = l_Sail_BitVec_toFormatted(x_40, x_1);
x_51 = lean_string_append(x_49, x_50);
lean_dec(x_50);
x_52 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_47, x_48, x_51, x_43);
lean_dec(x_51);
return x_52;
}
else
{
uint8_t x_53; lean_object* x_54; 
lean_dec(x_1);
x_53 = 1;
x_54 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_53, x_43);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_1);
x_55 = lean_unsigned_to_nat(63u);
x_56 = lean_unsigned_to_nat(32u);
x_57 = lean_nat_mul(x_42, x_42);
lean_dec(x_42);
x_58 = l_BitVec_extractLsb___redArg(x_55, x_56, x_41);
lean_dec(x_41);
x_59 = l_BitVec_setWidth(x_56, x_57, x_58);
lean_dec(x_58);
lean_dec(x_57);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_43);
return x_60;
}
}
block_118:
{
if (x_65 == 0)
{
uint8_t x_66; lean_object* x_67; 
lean_dec(x_62);
x_66 = 8;
x_67 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_66, x_63);
if (lean_obj_tag(x_67) == 0)
{
uint8_t x_68; 
x_68 = !lean_is_exclusive(x_67);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_69 = lean_ctor_get(x_67, 0);
x_70 = lean_ctor_get(x_67, 1);
x_71 = l_LeanRV64DExecutable_Functions_read__CSR___closed__5;
x_72 = lean_nat_dec_eq(x_1, x_71);
if (x_72 == 0)
{
lean_object* x_73; 
lean_free_object(x_67);
lean_dec(x_69);
x_73 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_66, x_70);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = l_LeanRV64DExecutable_Functions_read__CSR___closed__6;
x_77 = lean_nat_dec_eq(x_1, x_76);
if (x_77 == 0)
{
x_41 = x_74;
x_42 = x_64;
x_43 = x_75;
x_44 = x_77;
goto block_61;
}
else
{
uint8_t x_78; 
x_78 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_41 = x_74;
x_42 = x_64;
x_43 = x_75;
x_44 = x_78;
goto block_61;
}
}
else
{
uint8_t x_79; 
lean_dec(x_64);
lean_dec(x_1);
x_79 = !lean_is_exclusive(x_73);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; 
x_80 = lean_ctor_get(x_73, 0);
lean_dec(x_80);
x_81 = lean_box(1);
lean_ctor_set(x_73, 0, x_81);
return x_73;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_73, 1);
lean_inc(x_82);
lean_dec(x_73);
x_83 = lean_box(1);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_82);
return x_84;
}
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_64);
lean_dec(x_1);
x_85 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_86 = lean_unsigned_to_nat(0u);
x_87 = l_BitVec_extractLsb___redArg(x_85, x_86, x_69);
lean_dec(x_69);
lean_ctor_set(x_67, 0, x_87);
return x_67;
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; uint8_t x_91; 
x_88 = lean_ctor_get(x_67, 0);
x_89 = lean_ctor_get(x_67, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_67);
x_90 = l_LeanRV64DExecutable_Functions_read__CSR___closed__5;
x_91 = lean_nat_dec_eq(x_1, x_90);
if (x_91 == 0)
{
lean_object* x_92; 
lean_dec(x_88);
x_92 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_66, x_89);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; 
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_95 = l_LeanRV64DExecutable_Functions_read__CSR___closed__6;
x_96 = lean_nat_dec_eq(x_1, x_95);
if (x_96 == 0)
{
x_41 = x_93;
x_42 = x_64;
x_43 = x_94;
x_44 = x_96;
goto block_61;
}
else
{
uint8_t x_97; 
x_97 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_41 = x_93;
x_42 = x_64;
x_43 = x_94;
x_44 = x_97;
goto block_61;
}
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_64);
lean_dec(x_1);
x_98 = lean_ctor_get(x_92, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 x_99 = x_92;
} else {
 lean_dec_ref(x_92);
 x_99 = lean_box(0);
}
x_100 = lean_box(1);
if (lean_is_scalar(x_99)) {
 x_101 = lean_alloc_ctor(1, 2, 0);
} else {
 x_101 = x_99;
}
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_98);
return x_101;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
lean_dec(x_64);
lean_dec(x_1);
x_102 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_103 = lean_unsigned_to_nat(0u);
x_104 = l_BitVec_extractLsb___redArg(x_102, x_103, x_88);
lean_dec(x_88);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_89);
return x_105;
}
}
}
else
{
uint8_t x_106; 
lean_dec(x_64);
lean_dec(x_1);
x_106 = !lean_is_exclusive(x_67);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; 
x_107 = lean_ctor_get(x_67, 0);
lean_dec(x_107);
x_108 = lean_box(1);
lean_ctor_set(x_67, 0, x_108);
return x_67;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_67, 1);
lean_inc(x_109);
lean_dec(x_67);
x_110 = lean_box(1);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_109);
return x_111;
}
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_1);
x_112 = lean_unsigned_to_nat(63u);
x_113 = lean_unsigned_to_nat(32u);
x_114 = lean_nat_mul(x_64, x_64);
lean_dec(x_64);
x_115 = l_BitVec_extractLsb___redArg(x_112, x_113, x_62);
lean_dec(x_62);
x_116 = l_BitVec_setWidth(x_113, x_114, x_115);
lean_dec(x_115);
lean_dec(x_114);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_63);
return x_117;
}
}
block_175:
{
if (x_122 == 0)
{
uint8_t x_123; lean_object* x_124; 
lean_dec(x_119);
x_123 = 16;
x_124 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_123, x_121);
if (lean_obj_tag(x_124) == 0)
{
uint8_t x_125; 
x_125 = !lean_is_exclusive(x_124);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_126 = lean_ctor_get(x_124, 0);
x_127 = lean_ctor_get(x_124, 1);
x_128 = l_LeanRV64DExecutable_Functions_read__CSR___closed__12;
x_129 = lean_nat_dec_eq(x_1, x_128);
if (x_129 == 0)
{
lean_object* x_130; 
lean_free_object(x_124);
lean_dec(x_126);
x_130 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_123, x_127);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
lean_dec(x_130);
x_133 = l_LeanRV64DExecutable_Functions_read__CSR___closed__13;
x_134 = lean_nat_dec_eq(x_1, x_133);
if (x_134 == 0)
{
x_62 = x_131;
x_63 = x_132;
x_64 = x_120;
x_65 = x_134;
goto block_118;
}
else
{
uint8_t x_135; 
x_135 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_62 = x_131;
x_63 = x_132;
x_64 = x_120;
x_65 = x_135;
goto block_118;
}
}
else
{
uint8_t x_136; 
lean_dec(x_120);
lean_dec(x_1);
x_136 = !lean_is_exclusive(x_130);
if (x_136 == 0)
{
lean_object* x_137; lean_object* x_138; 
x_137 = lean_ctor_get(x_130, 0);
lean_dec(x_137);
x_138 = lean_box(1);
lean_ctor_set(x_130, 0, x_138);
return x_130;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_139 = lean_ctor_get(x_130, 1);
lean_inc(x_139);
lean_dec(x_130);
x_140 = lean_box(1);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_139);
return x_141;
}
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; 
lean_dec(x_120);
lean_dec(x_1);
x_142 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_143 = lean_unsigned_to_nat(0u);
x_144 = l_BitVec_extractLsb___redArg(x_142, x_143, x_126);
lean_dec(x_126);
lean_ctor_set(x_124, 0, x_144);
return x_124;
}
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; uint8_t x_148; 
x_145 = lean_ctor_get(x_124, 0);
x_146 = lean_ctor_get(x_124, 1);
lean_inc(x_146);
lean_inc(x_145);
lean_dec(x_124);
x_147 = l_LeanRV64DExecutable_Functions_read__CSR___closed__12;
x_148 = lean_nat_dec_eq(x_1, x_147);
if (x_148 == 0)
{
lean_object* x_149; 
lean_dec(x_145);
x_149 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_123, x_146);
if (lean_obj_tag(x_149) == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; uint8_t x_153; 
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
lean_dec(x_149);
x_152 = l_LeanRV64DExecutable_Functions_read__CSR___closed__13;
x_153 = lean_nat_dec_eq(x_1, x_152);
if (x_153 == 0)
{
x_62 = x_150;
x_63 = x_151;
x_64 = x_120;
x_65 = x_153;
goto block_118;
}
else
{
uint8_t x_154; 
x_154 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_62 = x_150;
x_63 = x_151;
x_64 = x_120;
x_65 = x_154;
goto block_118;
}
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
lean_dec(x_120);
lean_dec(x_1);
x_155 = lean_ctor_get(x_149, 1);
lean_inc(x_155);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 lean_ctor_release(x_149, 1);
 x_156 = x_149;
} else {
 lean_dec_ref(x_149);
 x_156 = lean_box(0);
}
x_157 = lean_box(1);
if (lean_is_scalar(x_156)) {
 x_158 = lean_alloc_ctor(1, 2, 0);
} else {
 x_158 = x_156;
}
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_155);
return x_158;
}
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
lean_dec(x_120);
lean_dec(x_1);
x_159 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_160 = lean_unsigned_to_nat(0u);
x_161 = l_BitVec_extractLsb___redArg(x_159, x_160, x_145);
lean_dec(x_145);
x_162 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_162, 0, x_161);
lean_ctor_set(x_162, 1, x_146);
return x_162;
}
}
}
else
{
uint8_t x_163; 
lean_dec(x_120);
lean_dec(x_1);
x_163 = !lean_is_exclusive(x_124);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; 
x_164 = lean_ctor_get(x_124, 0);
lean_dec(x_164);
x_165 = lean_box(1);
lean_ctor_set(x_124, 0, x_165);
return x_124;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_166 = lean_ctor_get(x_124, 1);
lean_inc(x_166);
lean_dec(x_124);
x_167 = lean_box(1);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_166);
return x_168;
}
}
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
lean_dec(x_1);
x_169 = lean_unsigned_to_nat(63u);
x_170 = lean_unsigned_to_nat(32u);
x_171 = lean_nat_mul(x_120, x_120);
lean_dec(x_120);
x_172 = l_BitVec_extractLsb___redArg(x_169, x_170, x_119);
lean_dec(x_119);
x_173 = l_BitVec_setWidth(x_170, x_171, x_172);
lean_dec(x_172);
lean_dec(x_171);
x_174 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_121);
return x_174;
}
}
block_232:
{
if (x_179 == 0)
{
uint8_t x_180; lean_object* x_181; 
lean_dec(x_177);
x_180 = 17;
x_181 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_180, x_176);
if (lean_obj_tag(x_181) == 0)
{
uint8_t x_182; 
x_182 = !lean_is_exclusive(x_181);
if (x_182 == 0)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; uint8_t x_186; 
x_183 = lean_ctor_get(x_181, 0);
x_184 = lean_ctor_get(x_181, 1);
x_185 = l_LeanRV64DExecutable_Functions_read__CSR___closed__14;
x_186 = lean_nat_dec_eq(x_1, x_185);
if (x_186 == 0)
{
lean_object* x_187; 
lean_free_object(x_181);
lean_dec(x_183);
x_187 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_180, x_184);
if (lean_obj_tag(x_187) == 0)
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; uint8_t x_191; 
x_188 = lean_ctor_get(x_187, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 1);
lean_inc(x_189);
lean_dec(x_187);
x_190 = l_LeanRV64DExecutable_Functions_read__CSR___closed__15;
x_191 = lean_nat_dec_eq(x_1, x_190);
if (x_191 == 0)
{
x_119 = x_188;
x_120 = x_178;
x_121 = x_189;
x_122 = x_191;
goto block_175;
}
else
{
uint8_t x_192; 
x_192 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_119 = x_188;
x_120 = x_178;
x_121 = x_189;
x_122 = x_192;
goto block_175;
}
}
else
{
uint8_t x_193; 
lean_dec(x_178);
lean_dec(x_1);
x_193 = !lean_is_exclusive(x_187);
if (x_193 == 0)
{
lean_object* x_194; lean_object* x_195; 
x_194 = lean_ctor_get(x_187, 0);
lean_dec(x_194);
x_195 = lean_box(1);
lean_ctor_set(x_187, 0, x_195);
return x_187;
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_196 = lean_ctor_get(x_187, 1);
lean_inc(x_196);
lean_dec(x_187);
x_197 = lean_box(1);
x_198 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_198, 0, x_197);
lean_ctor_set(x_198, 1, x_196);
return x_198;
}
}
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; 
lean_dec(x_178);
lean_dec(x_1);
x_199 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_200 = lean_unsigned_to_nat(0u);
x_201 = l_BitVec_extractLsb___redArg(x_199, x_200, x_183);
lean_dec(x_183);
lean_ctor_set(x_181, 0, x_201);
return x_181;
}
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; uint8_t x_205; 
x_202 = lean_ctor_get(x_181, 0);
x_203 = lean_ctor_get(x_181, 1);
lean_inc(x_203);
lean_inc(x_202);
lean_dec(x_181);
x_204 = l_LeanRV64DExecutable_Functions_read__CSR___closed__14;
x_205 = lean_nat_dec_eq(x_1, x_204);
if (x_205 == 0)
{
lean_object* x_206; 
lean_dec(x_202);
x_206 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_180, x_203);
if (lean_obj_tag(x_206) == 0)
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; uint8_t x_210; 
x_207 = lean_ctor_get(x_206, 0);
lean_inc(x_207);
x_208 = lean_ctor_get(x_206, 1);
lean_inc(x_208);
lean_dec(x_206);
x_209 = l_LeanRV64DExecutable_Functions_read__CSR___closed__15;
x_210 = lean_nat_dec_eq(x_1, x_209);
if (x_210 == 0)
{
x_119 = x_207;
x_120 = x_178;
x_121 = x_208;
x_122 = x_210;
goto block_175;
}
else
{
uint8_t x_211; 
x_211 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_119 = x_207;
x_120 = x_178;
x_121 = x_208;
x_122 = x_211;
goto block_175;
}
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; 
lean_dec(x_178);
lean_dec(x_1);
x_212 = lean_ctor_get(x_206, 1);
lean_inc(x_212);
if (lean_is_exclusive(x_206)) {
 lean_ctor_release(x_206, 0);
 lean_ctor_release(x_206, 1);
 x_213 = x_206;
} else {
 lean_dec_ref(x_206);
 x_213 = lean_box(0);
}
x_214 = lean_box(1);
if (lean_is_scalar(x_213)) {
 x_215 = lean_alloc_ctor(1, 2, 0);
} else {
 x_215 = x_213;
}
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_212);
return x_215;
}
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; 
lean_dec(x_178);
lean_dec(x_1);
x_216 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_217 = lean_unsigned_to_nat(0u);
x_218 = l_BitVec_extractLsb___redArg(x_216, x_217, x_202);
lean_dec(x_202);
x_219 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_219, 0, x_218);
lean_ctor_set(x_219, 1, x_203);
return x_219;
}
}
}
else
{
uint8_t x_220; 
lean_dec(x_178);
lean_dec(x_1);
x_220 = !lean_is_exclusive(x_181);
if (x_220 == 0)
{
lean_object* x_221; lean_object* x_222; 
x_221 = lean_ctor_get(x_181, 0);
lean_dec(x_221);
x_222 = lean_box(1);
lean_ctor_set(x_181, 0, x_222);
return x_181;
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_223 = lean_ctor_get(x_181, 1);
lean_inc(x_223);
lean_dec(x_181);
x_224 = lean_box(1);
x_225 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_225, 0, x_224);
lean_ctor_set(x_225, 1, x_223);
return x_225;
}
}
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
lean_dec(x_1);
x_226 = lean_unsigned_to_nat(63u);
x_227 = lean_unsigned_to_nat(32u);
x_228 = lean_nat_mul(x_178, x_178);
lean_dec(x_178);
x_229 = l_BitVec_extractLsb___redArg(x_226, x_227, x_177);
lean_dec(x_177);
x_230 = l_BitVec_setWidth(x_227, x_228, x_229);
lean_dec(x_229);
lean_dec(x_228);
x_231 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_231, 0, x_230);
lean_ctor_set(x_231, 1, x_176);
return x_231;
}
}
block_256:
{
if (x_237 == 0)
{
lean_object* x_238; 
lean_dec(x_236);
x_238 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_233, x_235);
if (lean_obj_tag(x_238) == 0)
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; uint8_t x_242; 
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_238, 1);
lean_inc(x_240);
lean_dec(x_238);
x_241 = l_LeanRV64DExecutable_Functions_read__CSR___closed__16;
x_242 = lean_nat_dec_eq(x_1, x_241);
if (x_242 == 0)
{
x_176 = x_240;
x_177 = x_239;
x_178 = x_234;
x_179 = x_242;
goto block_232;
}
else
{
uint8_t x_243; 
x_243 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_176 = x_240;
x_177 = x_239;
x_178 = x_234;
x_179 = x_243;
goto block_232;
}
}
else
{
uint8_t x_244; 
lean_dec(x_234);
lean_dec(x_1);
x_244 = !lean_is_exclusive(x_238);
if (x_244 == 0)
{
lean_object* x_245; lean_object* x_246; 
x_245 = lean_ctor_get(x_238, 0);
lean_dec(x_245);
x_246 = lean_box(1);
lean_ctor_set(x_238, 0, x_246);
return x_238;
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_247 = lean_ctor_get(x_238, 1);
lean_inc(x_247);
lean_dec(x_238);
x_248 = lean_box(1);
x_249 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_247);
return x_249;
}
}
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_1);
x_250 = lean_unsigned_to_nat(63u);
x_251 = lean_unsigned_to_nat(32u);
x_252 = lean_nat_mul(x_234, x_234);
lean_dec(x_234);
x_253 = l_BitVec_extractLsb___redArg(x_250, x_251, x_236);
lean_dec(x_236);
x_254 = l_BitVec_setWidth(x_251, x_252, x_253);
lean_dec(x_253);
lean_dec(x_252);
x_255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_235);
return x_255;
}
}
block_361:
{
if (x_262 == 0)
{
lean_object* x_263; 
lean_dec(x_257);
x_263 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_259, x_261);
if (lean_obj_tag(x_263) == 0)
{
uint8_t x_264; 
x_264 = !lean_is_exclusive(x_263);
if (x_264 == 0)
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; uint8_t x_268; 
x_265 = lean_ctor_get(x_263, 0);
x_266 = lean_ctor_get(x_263, 1);
x_267 = l_LeanRV64DExecutable_Functions_read__CSR___closed__17;
x_268 = lean_nat_dec_eq(x_1, x_267);
if (x_268 == 0)
{
lean_object* x_269; 
lean_free_object(x_263);
lean_dec(x_265);
x_269 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_258, x_266);
if (lean_obj_tag(x_269) == 0)
{
uint8_t x_270; 
x_270 = !lean_is_exclusive(x_269);
if (x_270 == 0)
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; uint8_t x_274; 
x_271 = lean_ctor_get(x_269, 0);
x_272 = lean_ctor_get(x_269, 1);
x_273 = l_LeanRV64DExecutable_Functions_read__CSR___closed__18;
x_274 = lean_nat_dec_eq(x_1, x_273);
if (x_274 == 0)
{
lean_object* x_275; 
lean_free_object(x_269);
lean_dec(x_271);
x_275 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_259, x_272);
if (lean_obj_tag(x_275) == 0)
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; uint8_t x_279; 
x_276 = lean_ctor_get(x_275, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_275, 1);
lean_inc(x_277);
lean_dec(x_275);
x_278 = l_LeanRV64DExecutable_Functions_read__CSR___closed__19;
x_279 = lean_nat_dec_eq(x_1, x_278);
if (x_279 == 0)
{
x_233 = x_258;
x_234 = x_260;
x_235 = x_277;
x_236 = x_276;
x_237 = x_279;
goto block_256;
}
else
{
uint8_t x_280; 
x_280 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_233 = x_258;
x_234 = x_260;
x_235 = x_277;
x_236 = x_276;
x_237 = x_280;
goto block_256;
}
}
else
{
uint8_t x_281; 
lean_dec(x_260);
lean_dec(x_1);
x_281 = !lean_is_exclusive(x_275);
if (x_281 == 0)
{
lean_object* x_282; lean_object* x_283; 
x_282 = lean_ctor_get(x_275, 0);
lean_dec(x_282);
x_283 = lean_box(1);
lean_ctor_set(x_275, 0, x_283);
return x_275;
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; 
x_284 = lean_ctor_get(x_275, 1);
lean_inc(x_284);
lean_dec(x_275);
x_285 = lean_box(1);
x_286 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_286, 0, x_285);
lean_ctor_set(x_286, 1, x_284);
return x_286;
}
}
}
else
{
lean_object* x_287; lean_object* x_288; lean_object* x_289; 
lean_dec(x_260);
lean_dec(x_1);
x_287 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_288 = lean_unsigned_to_nat(0u);
x_289 = l_BitVec_extractLsb___redArg(x_287, x_288, x_271);
lean_dec(x_271);
lean_ctor_set(x_269, 0, x_289);
return x_269;
}
}
else
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; uint8_t x_293; 
x_290 = lean_ctor_get(x_269, 0);
x_291 = lean_ctor_get(x_269, 1);
lean_inc(x_291);
lean_inc(x_290);
lean_dec(x_269);
x_292 = l_LeanRV64DExecutable_Functions_read__CSR___closed__18;
x_293 = lean_nat_dec_eq(x_1, x_292);
if (x_293 == 0)
{
lean_object* x_294; 
lean_dec(x_290);
x_294 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_259, x_291);
if (lean_obj_tag(x_294) == 0)
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; uint8_t x_298; 
x_295 = lean_ctor_get(x_294, 0);
lean_inc(x_295);
x_296 = lean_ctor_get(x_294, 1);
lean_inc(x_296);
lean_dec(x_294);
x_297 = l_LeanRV64DExecutable_Functions_read__CSR___closed__19;
x_298 = lean_nat_dec_eq(x_1, x_297);
if (x_298 == 0)
{
x_233 = x_258;
x_234 = x_260;
x_235 = x_296;
x_236 = x_295;
x_237 = x_298;
goto block_256;
}
else
{
uint8_t x_299; 
x_299 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_233 = x_258;
x_234 = x_260;
x_235 = x_296;
x_236 = x_295;
x_237 = x_299;
goto block_256;
}
}
else
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; 
lean_dec(x_260);
lean_dec(x_1);
x_300 = lean_ctor_get(x_294, 1);
lean_inc(x_300);
if (lean_is_exclusive(x_294)) {
 lean_ctor_release(x_294, 0);
 lean_ctor_release(x_294, 1);
 x_301 = x_294;
} else {
 lean_dec_ref(x_294);
 x_301 = lean_box(0);
}
x_302 = lean_box(1);
if (lean_is_scalar(x_301)) {
 x_303 = lean_alloc_ctor(1, 2, 0);
} else {
 x_303 = x_301;
}
lean_ctor_set(x_303, 0, x_302);
lean_ctor_set(x_303, 1, x_300);
return x_303;
}
}
else
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; 
lean_dec(x_260);
lean_dec(x_1);
x_304 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_305 = lean_unsigned_to_nat(0u);
x_306 = l_BitVec_extractLsb___redArg(x_304, x_305, x_290);
lean_dec(x_290);
x_307 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_307, 0, x_306);
lean_ctor_set(x_307, 1, x_291);
return x_307;
}
}
}
else
{
uint8_t x_308; 
lean_dec(x_260);
lean_dec(x_1);
x_308 = !lean_is_exclusive(x_269);
if (x_308 == 0)
{
lean_object* x_309; lean_object* x_310; 
x_309 = lean_ctor_get(x_269, 0);
lean_dec(x_309);
x_310 = lean_box(1);
lean_ctor_set(x_269, 0, x_310);
return x_269;
}
else
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; 
x_311 = lean_ctor_get(x_269, 1);
lean_inc(x_311);
lean_dec(x_269);
x_312 = lean_box(1);
x_313 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_313, 0, x_312);
lean_ctor_set(x_313, 1, x_311);
return x_313;
}
}
}
else
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; 
lean_dec(x_260);
lean_dec(x_1);
x_314 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_315 = lean_unsigned_to_nat(0u);
x_316 = l_BitVec_extractLsb___redArg(x_314, x_315, x_265);
lean_dec(x_265);
lean_ctor_set(x_263, 0, x_316);
return x_263;
}
}
else
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; uint8_t x_320; 
x_317 = lean_ctor_get(x_263, 0);
x_318 = lean_ctor_get(x_263, 1);
lean_inc(x_318);
lean_inc(x_317);
lean_dec(x_263);
x_319 = l_LeanRV64DExecutable_Functions_read__CSR___closed__17;
x_320 = lean_nat_dec_eq(x_1, x_319);
if (x_320 == 0)
{
lean_object* x_321; 
lean_dec(x_317);
x_321 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_258, x_318);
if (lean_obj_tag(x_321) == 0)
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; uint8_t x_326; 
x_322 = lean_ctor_get(x_321, 0);
lean_inc(x_322);
x_323 = lean_ctor_get(x_321, 1);
lean_inc(x_323);
if (lean_is_exclusive(x_321)) {
 lean_ctor_release(x_321, 0);
 lean_ctor_release(x_321, 1);
 x_324 = x_321;
} else {
 lean_dec_ref(x_321);
 x_324 = lean_box(0);
}
x_325 = l_LeanRV64DExecutable_Functions_read__CSR___closed__18;
x_326 = lean_nat_dec_eq(x_1, x_325);
if (x_326 == 0)
{
lean_object* x_327; 
lean_dec(x_324);
lean_dec(x_322);
x_327 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_259, x_323);
if (lean_obj_tag(x_327) == 0)
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; uint8_t x_331; 
x_328 = lean_ctor_get(x_327, 0);
lean_inc(x_328);
x_329 = lean_ctor_get(x_327, 1);
lean_inc(x_329);
lean_dec(x_327);
x_330 = l_LeanRV64DExecutable_Functions_read__CSR___closed__19;
x_331 = lean_nat_dec_eq(x_1, x_330);
if (x_331 == 0)
{
x_233 = x_258;
x_234 = x_260;
x_235 = x_329;
x_236 = x_328;
x_237 = x_331;
goto block_256;
}
else
{
uint8_t x_332; 
x_332 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_233 = x_258;
x_234 = x_260;
x_235 = x_329;
x_236 = x_328;
x_237 = x_332;
goto block_256;
}
}
else
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; 
lean_dec(x_260);
lean_dec(x_1);
x_333 = lean_ctor_get(x_327, 1);
lean_inc(x_333);
if (lean_is_exclusive(x_327)) {
 lean_ctor_release(x_327, 0);
 lean_ctor_release(x_327, 1);
 x_334 = x_327;
} else {
 lean_dec_ref(x_327);
 x_334 = lean_box(0);
}
x_335 = lean_box(1);
if (lean_is_scalar(x_334)) {
 x_336 = lean_alloc_ctor(1, 2, 0);
} else {
 x_336 = x_334;
}
lean_ctor_set(x_336, 0, x_335);
lean_ctor_set(x_336, 1, x_333);
return x_336;
}
}
else
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; 
lean_dec(x_260);
lean_dec(x_1);
x_337 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_338 = lean_unsigned_to_nat(0u);
x_339 = l_BitVec_extractLsb___redArg(x_337, x_338, x_322);
lean_dec(x_322);
if (lean_is_scalar(x_324)) {
 x_340 = lean_alloc_ctor(0, 2, 0);
} else {
 x_340 = x_324;
}
lean_ctor_set(x_340, 0, x_339);
lean_ctor_set(x_340, 1, x_323);
return x_340;
}
}
else
{
lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; 
lean_dec(x_260);
lean_dec(x_1);
x_341 = lean_ctor_get(x_321, 1);
lean_inc(x_341);
if (lean_is_exclusive(x_321)) {
 lean_ctor_release(x_321, 0);
 lean_ctor_release(x_321, 1);
 x_342 = x_321;
} else {
 lean_dec_ref(x_321);
 x_342 = lean_box(0);
}
x_343 = lean_box(1);
if (lean_is_scalar(x_342)) {
 x_344 = lean_alloc_ctor(1, 2, 0);
} else {
 x_344 = x_342;
}
lean_ctor_set(x_344, 0, x_343);
lean_ctor_set(x_344, 1, x_341);
return x_344;
}
}
else
{
lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; 
lean_dec(x_260);
lean_dec(x_1);
x_345 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_346 = lean_unsigned_to_nat(0u);
x_347 = l_BitVec_extractLsb___redArg(x_345, x_346, x_317);
lean_dec(x_317);
x_348 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_348, 0, x_347);
lean_ctor_set(x_348, 1, x_318);
return x_348;
}
}
}
else
{
uint8_t x_349; 
lean_dec(x_260);
lean_dec(x_1);
x_349 = !lean_is_exclusive(x_263);
if (x_349 == 0)
{
lean_object* x_350; lean_object* x_351; 
x_350 = lean_ctor_get(x_263, 0);
lean_dec(x_350);
x_351 = lean_box(1);
lean_ctor_set(x_263, 0, x_351);
return x_263;
}
else
{
lean_object* x_352; lean_object* x_353; lean_object* x_354; 
x_352 = lean_ctor_get(x_263, 1);
lean_inc(x_352);
lean_dec(x_263);
x_353 = lean_box(1);
x_354 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_354, 0, x_353);
lean_ctor_set(x_354, 1, x_352);
return x_354;
}
}
}
else
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; 
lean_dec(x_1);
x_355 = lean_unsigned_to_nat(63u);
x_356 = lean_unsigned_to_nat(32u);
x_357 = lean_nat_mul(x_260, x_260);
lean_dec(x_260);
x_358 = l_BitVec_extractLsb___redArg(x_355, x_356, x_257);
lean_dec(x_257);
x_359 = l_BitVec_setWidth(x_356, x_357, x_358);
lean_dec(x_358);
lean_dec(x_357);
x_360 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_360, 0, x_359);
lean_ctor_set(x_360, 1, x_261);
return x_360;
}
}
block_386:
{
if (x_367 == 0)
{
lean_object* x_368; 
lean_dec(x_366);
x_368 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_363, x_365);
if (lean_obj_tag(x_368) == 0)
{
lean_object* x_369; lean_object* x_370; lean_object* x_371; uint8_t x_372; 
x_369 = lean_ctor_get(x_368, 0);
lean_inc(x_369);
x_370 = lean_ctor_get(x_368, 1);
lean_inc(x_370);
lean_dec(x_368);
x_371 = l_LeanRV64DExecutable_Functions_read__CSR___closed__20;
x_372 = lean_nat_dec_eq(x_1, x_371);
if (x_372 == 0)
{
x_257 = x_369;
x_258 = x_363;
x_259 = x_362;
x_260 = x_364;
x_261 = x_370;
x_262 = x_372;
goto block_361;
}
else
{
uint8_t x_373; 
x_373 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_257 = x_369;
x_258 = x_363;
x_259 = x_362;
x_260 = x_364;
x_261 = x_370;
x_262 = x_373;
goto block_361;
}
}
else
{
uint8_t x_374; 
lean_dec(x_364);
lean_dec(x_1);
x_374 = !lean_is_exclusive(x_368);
if (x_374 == 0)
{
lean_object* x_375; lean_object* x_376; 
x_375 = lean_ctor_get(x_368, 0);
lean_dec(x_375);
x_376 = lean_box(1);
lean_ctor_set(x_368, 0, x_376);
return x_368;
}
else
{
lean_object* x_377; lean_object* x_378; lean_object* x_379; 
x_377 = lean_ctor_get(x_368, 1);
lean_inc(x_377);
lean_dec(x_368);
x_378 = lean_box(1);
x_379 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_379, 0, x_378);
lean_ctor_set(x_379, 1, x_377);
return x_379;
}
}
}
else
{
lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; 
lean_dec(x_1);
x_380 = lean_unsigned_to_nat(63u);
x_381 = lean_unsigned_to_nat(32u);
x_382 = lean_nat_mul(x_364, x_364);
lean_dec(x_364);
x_383 = l_BitVec_extractLsb___redArg(x_380, x_381, x_366);
lean_dec(x_366);
x_384 = l_BitVec_setWidth(x_381, x_382, x_383);
lean_dec(x_383);
lean_dec(x_382);
x_385 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_385, 0, x_384);
lean_ctor_set(x_385, 1, x_365);
return x_385;
}
}
block_412:
{
if (x_393 == 0)
{
lean_object* x_394; 
lean_dec(x_389);
x_394 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_391, x_390);
if (lean_obj_tag(x_394) == 0)
{
lean_object* x_395; lean_object* x_396; lean_object* x_397; uint8_t x_398; 
x_395 = lean_ctor_get(x_394, 0);
lean_inc(x_395);
x_396 = lean_ctor_get(x_394, 1);
lean_inc(x_396);
lean_dec(x_394);
x_397 = l_LeanRV64DExecutable_Functions_read__CSR___closed__21;
x_398 = lean_nat_dec_eq(x_1, x_397);
if (x_398 == 0)
{
x_362 = x_388;
x_363 = x_387;
x_364 = x_392;
x_365 = x_396;
x_366 = x_395;
x_367 = x_398;
goto block_386;
}
else
{
uint8_t x_399; 
x_399 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_362 = x_388;
x_363 = x_387;
x_364 = x_392;
x_365 = x_396;
x_366 = x_395;
x_367 = x_399;
goto block_386;
}
}
else
{
uint8_t x_400; 
lean_dec(x_392);
lean_dec(x_1);
x_400 = !lean_is_exclusive(x_394);
if (x_400 == 0)
{
lean_object* x_401; lean_object* x_402; 
x_401 = lean_ctor_get(x_394, 0);
lean_dec(x_401);
x_402 = lean_box(1);
lean_ctor_set(x_394, 0, x_402);
return x_394;
}
else
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; 
x_403 = lean_ctor_get(x_394, 1);
lean_inc(x_403);
lean_dec(x_394);
x_404 = lean_box(1);
x_405 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_405, 0, x_404);
lean_ctor_set(x_405, 1, x_403);
return x_405;
}
}
}
else
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; 
lean_dec(x_1);
x_406 = lean_unsigned_to_nat(63u);
x_407 = lean_unsigned_to_nat(32u);
x_408 = lean_nat_mul(x_392, x_392);
lean_dec(x_392);
x_409 = l_BitVec_extractLsb___redArg(x_406, x_407, x_389);
lean_dec(x_389);
x_410 = l_BitVec_setWidth(x_407, x_408, x_409);
lean_dec(x_409);
lean_dec(x_408);
x_411 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_411, 0, x_410);
lean_ctor_set(x_411, 1, x_390);
return x_411;
}
}
block_692:
{
if (x_416 == 0)
{
uint8_t x_417; lean_object* x_418; 
x_417 = 90;
x_418 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_417, x_414);
if (lean_obj_tag(x_418) == 0)
{
lean_object* x_419; lean_object* x_420; uint8_t x_421; lean_object* x_422; 
x_419 = lean_ctor_get(x_418, 0);
lean_inc(x_419);
x_420 = lean_ctor_get(x_418, 1);
lean_inc(x_420);
lean_dec(x_418);
x_421 = lean_unbox(x_419);
lean_dec(x_419);
x_422 = l_LeanRV64DExecutable_Functions_get__scountovf(x_421, x_420);
if (lean_obj_tag(x_422) == 0)
{
uint8_t x_423; 
x_423 = !lean_is_exclusive(x_422);
if (x_423 == 0)
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; uint8_t x_427; 
x_424 = lean_ctor_get(x_422, 0);
x_425 = lean_ctor_get(x_422, 1);
x_426 = l_LeanRV64DExecutable_Functions_read__CSR___closed__22;
x_427 = lean_nat_dec_eq(x_1, x_426);
if (x_427 == 0)
{
lean_object* x_428; uint8_t x_429; 
lean_free_object(x_422);
lean_dec(x_424);
x_428 = l_LeanRV64DExecutable_Functions_read__CSR___closed__23;
x_429 = lean_nat_dec_eq(x_1, x_428);
if (x_429 == 0)
{
uint8_t x_430; lean_object* x_431; 
x_430 = 72;
x_431 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_430, x_425);
if (lean_obj_tag(x_431) == 0)
{
uint8_t x_432; 
x_432 = !lean_is_exclusive(x_431);
if (x_432 == 0)
{
lean_object* x_433; lean_object* x_434; lean_object* x_435; uint8_t x_436; 
x_433 = lean_ctor_get(x_431, 0);
x_434 = lean_ctor_get(x_431, 1);
x_435 = l_LeanRV64DExecutable_Functions_read__CSR___closed__24;
x_436 = lean_nat_dec_eq(x_1, x_435);
if (x_436 == 0)
{
uint8_t x_437; lean_object* x_438; 
lean_free_object(x_431);
lean_dec(x_433);
x_437 = 71;
x_438 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_437, x_434);
if (lean_obj_tag(x_438) == 0)
{
uint8_t x_439; 
x_439 = !lean_is_exclusive(x_438);
if (x_439 == 0)
{
lean_object* x_440; lean_object* x_441; lean_object* x_442; uint8_t x_443; 
x_440 = lean_ctor_get(x_438, 0);
x_441 = lean_ctor_get(x_438, 1);
x_442 = l_LeanRV64DExecutable_Functions_read__CSR___closed__25;
x_443 = lean_nat_dec_eq(x_1, x_442);
if (x_443 == 0)
{
uint8_t x_444; lean_object* x_445; 
lean_free_object(x_438);
lean_dec(x_440);
x_444 = 70;
x_445 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_444, x_441);
if (lean_obj_tag(x_445) == 0)
{
uint8_t x_446; 
x_446 = !lean_is_exclusive(x_445);
if (x_446 == 0)
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; uint8_t x_450; 
x_447 = lean_ctor_get(x_445, 0);
x_448 = lean_ctor_get(x_445, 1);
x_449 = l_LeanRV64DExecutable_Functions_read__CSR___closed__26;
x_450 = lean_nat_dec_eq(x_1, x_449);
if (x_450 == 0)
{
lean_object* x_451; 
lean_free_object(x_445);
lean_dec(x_447);
x_451 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_430, x_448);
if (lean_obj_tag(x_451) == 0)
{
lean_object* x_452; lean_object* x_453; lean_object* x_454; uint8_t x_455; 
x_452 = lean_ctor_get(x_451, 0);
lean_inc(x_452);
x_453 = lean_ctor_get(x_451, 1);
lean_inc(x_453);
lean_dec(x_451);
x_454 = l_LeanRV64DExecutable_Functions_read__CSR___closed__27;
x_455 = lean_nat_dec_eq(x_1, x_454);
if (x_455 == 0)
{
x_387 = x_444;
x_388 = x_430;
x_389 = x_452;
x_390 = x_453;
x_391 = x_437;
x_392 = x_415;
x_393 = x_455;
goto block_412;
}
else
{
uint8_t x_456; 
x_456 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_387 = x_444;
x_388 = x_430;
x_389 = x_452;
x_390 = x_453;
x_391 = x_437;
x_392 = x_415;
x_393 = x_456;
goto block_412;
}
}
else
{
uint8_t x_457; 
lean_dec(x_415);
lean_dec(x_1);
x_457 = !lean_is_exclusive(x_451);
if (x_457 == 0)
{
lean_object* x_458; lean_object* x_459; 
x_458 = lean_ctor_get(x_451, 0);
lean_dec(x_458);
x_459 = lean_box(1);
lean_ctor_set(x_451, 0, x_459);
return x_451;
}
else
{
lean_object* x_460; lean_object* x_461; lean_object* x_462; 
x_460 = lean_ctor_get(x_451, 1);
lean_inc(x_460);
lean_dec(x_451);
x_461 = lean_box(1);
x_462 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_462, 0, x_461);
lean_ctor_set(x_462, 1, x_460);
return x_462;
}
}
}
else
{
lean_object* x_463; lean_object* x_464; lean_object* x_465; 
lean_dec(x_415);
lean_dec(x_1);
x_463 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_464 = lean_unsigned_to_nat(0u);
x_465 = l_BitVec_extractLsb___redArg(x_463, x_464, x_447);
lean_dec(x_447);
lean_ctor_set(x_445, 0, x_465);
return x_445;
}
}
else
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; uint8_t x_469; 
x_466 = lean_ctor_get(x_445, 0);
x_467 = lean_ctor_get(x_445, 1);
lean_inc(x_467);
lean_inc(x_466);
lean_dec(x_445);
x_468 = l_LeanRV64DExecutable_Functions_read__CSR___closed__26;
x_469 = lean_nat_dec_eq(x_1, x_468);
if (x_469 == 0)
{
lean_object* x_470; 
lean_dec(x_466);
x_470 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_430, x_467);
if (lean_obj_tag(x_470) == 0)
{
lean_object* x_471; lean_object* x_472; lean_object* x_473; uint8_t x_474; 
x_471 = lean_ctor_get(x_470, 0);
lean_inc(x_471);
x_472 = lean_ctor_get(x_470, 1);
lean_inc(x_472);
lean_dec(x_470);
x_473 = l_LeanRV64DExecutable_Functions_read__CSR___closed__27;
x_474 = lean_nat_dec_eq(x_1, x_473);
if (x_474 == 0)
{
x_387 = x_444;
x_388 = x_430;
x_389 = x_471;
x_390 = x_472;
x_391 = x_437;
x_392 = x_415;
x_393 = x_474;
goto block_412;
}
else
{
uint8_t x_475; 
x_475 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_387 = x_444;
x_388 = x_430;
x_389 = x_471;
x_390 = x_472;
x_391 = x_437;
x_392 = x_415;
x_393 = x_475;
goto block_412;
}
}
else
{
lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; 
lean_dec(x_415);
lean_dec(x_1);
x_476 = lean_ctor_get(x_470, 1);
lean_inc(x_476);
if (lean_is_exclusive(x_470)) {
 lean_ctor_release(x_470, 0);
 lean_ctor_release(x_470, 1);
 x_477 = x_470;
} else {
 lean_dec_ref(x_470);
 x_477 = lean_box(0);
}
x_478 = lean_box(1);
if (lean_is_scalar(x_477)) {
 x_479 = lean_alloc_ctor(1, 2, 0);
} else {
 x_479 = x_477;
}
lean_ctor_set(x_479, 0, x_478);
lean_ctor_set(x_479, 1, x_476);
return x_479;
}
}
else
{
lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; 
lean_dec(x_415);
lean_dec(x_1);
x_480 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_481 = lean_unsigned_to_nat(0u);
x_482 = l_BitVec_extractLsb___redArg(x_480, x_481, x_466);
lean_dec(x_466);
x_483 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_483, 0, x_482);
lean_ctor_set(x_483, 1, x_467);
return x_483;
}
}
}
else
{
uint8_t x_484; 
lean_dec(x_415);
lean_dec(x_1);
x_484 = !lean_is_exclusive(x_445);
if (x_484 == 0)
{
lean_object* x_485; lean_object* x_486; 
x_485 = lean_ctor_get(x_445, 0);
lean_dec(x_485);
x_486 = lean_box(1);
lean_ctor_set(x_445, 0, x_486);
return x_445;
}
else
{
lean_object* x_487; lean_object* x_488; lean_object* x_489; 
x_487 = lean_ctor_get(x_445, 1);
lean_inc(x_487);
lean_dec(x_445);
x_488 = lean_box(1);
x_489 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_489, 0, x_488);
lean_ctor_set(x_489, 1, x_487);
return x_489;
}
}
}
else
{
lean_object* x_490; lean_object* x_491; lean_object* x_492; 
lean_dec(x_415);
lean_dec(x_1);
x_490 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_491 = lean_unsigned_to_nat(0u);
x_492 = l_BitVec_extractLsb___redArg(x_490, x_491, x_440);
lean_dec(x_440);
lean_ctor_set(x_438, 0, x_492);
return x_438;
}
}
else
{
lean_object* x_493; lean_object* x_494; lean_object* x_495; uint8_t x_496; 
x_493 = lean_ctor_get(x_438, 0);
x_494 = lean_ctor_get(x_438, 1);
lean_inc(x_494);
lean_inc(x_493);
lean_dec(x_438);
x_495 = l_LeanRV64DExecutable_Functions_read__CSR___closed__25;
x_496 = lean_nat_dec_eq(x_1, x_495);
if (x_496 == 0)
{
uint8_t x_497; lean_object* x_498; 
lean_dec(x_493);
x_497 = 70;
x_498 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_497, x_494);
if (lean_obj_tag(x_498) == 0)
{
lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; uint8_t x_503; 
x_499 = lean_ctor_get(x_498, 0);
lean_inc(x_499);
x_500 = lean_ctor_get(x_498, 1);
lean_inc(x_500);
if (lean_is_exclusive(x_498)) {
 lean_ctor_release(x_498, 0);
 lean_ctor_release(x_498, 1);
 x_501 = x_498;
} else {
 lean_dec_ref(x_498);
 x_501 = lean_box(0);
}
x_502 = l_LeanRV64DExecutable_Functions_read__CSR___closed__26;
x_503 = lean_nat_dec_eq(x_1, x_502);
if (x_503 == 0)
{
lean_object* x_504; 
lean_dec(x_501);
lean_dec(x_499);
x_504 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_430, x_500);
if (lean_obj_tag(x_504) == 0)
{
lean_object* x_505; lean_object* x_506; lean_object* x_507; uint8_t x_508; 
x_505 = lean_ctor_get(x_504, 0);
lean_inc(x_505);
x_506 = lean_ctor_get(x_504, 1);
lean_inc(x_506);
lean_dec(x_504);
x_507 = l_LeanRV64DExecutable_Functions_read__CSR___closed__27;
x_508 = lean_nat_dec_eq(x_1, x_507);
if (x_508 == 0)
{
x_387 = x_497;
x_388 = x_430;
x_389 = x_505;
x_390 = x_506;
x_391 = x_437;
x_392 = x_415;
x_393 = x_508;
goto block_412;
}
else
{
uint8_t x_509; 
x_509 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_387 = x_497;
x_388 = x_430;
x_389 = x_505;
x_390 = x_506;
x_391 = x_437;
x_392 = x_415;
x_393 = x_509;
goto block_412;
}
}
else
{
lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; 
lean_dec(x_415);
lean_dec(x_1);
x_510 = lean_ctor_get(x_504, 1);
lean_inc(x_510);
if (lean_is_exclusive(x_504)) {
 lean_ctor_release(x_504, 0);
 lean_ctor_release(x_504, 1);
 x_511 = x_504;
} else {
 lean_dec_ref(x_504);
 x_511 = lean_box(0);
}
x_512 = lean_box(1);
if (lean_is_scalar(x_511)) {
 x_513 = lean_alloc_ctor(1, 2, 0);
} else {
 x_513 = x_511;
}
lean_ctor_set(x_513, 0, x_512);
lean_ctor_set(x_513, 1, x_510);
return x_513;
}
}
else
{
lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; 
lean_dec(x_415);
lean_dec(x_1);
x_514 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_515 = lean_unsigned_to_nat(0u);
x_516 = l_BitVec_extractLsb___redArg(x_514, x_515, x_499);
lean_dec(x_499);
if (lean_is_scalar(x_501)) {
 x_517 = lean_alloc_ctor(0, 2, 0);
} else {
 x_517 = x_501;
}
lean_ctor_set(x_517, 0, x_516);
lean_ctor_set(x_517, 1, x_500);
return x_517;
}
}
else
{
lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; 
lean_dec(x_415);
lean_dec(x_1);
x_518 = lean_ctor_get(x_498, 1);
lean_inc(x_518);
if (lean_is_exclusive(x_498)) {
 lean_ctor_release(x_498, 0);
 lean_ctor_release(x_498, 1);
 x_519 = x_498;
} else {
 lean_dec_ref(x_498);
 x_519 = lean_box(0);
}
x_520 = lean_box(1);
if (lean_is_scalar(x_519)) {
 x_521 = lean_alloc_ctor(1, 2, 0);
} else {
 x_521 = x_519;
}
lean_ctor_set(x_521, 0, x_520);
lean_ctor_set(x_521, 1, x_518);
return x_521;
}
}
else
{
lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; 
lean_dec(x_415);
lean_dec(x_1);
x_522 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_523 = lean_unsigned_to_nat(0u);
x_524 = l_BitVec_extractLsb___redArg(x_522, x_523, x_493);
lean_dec(x_493);
x_525 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_525, 0, x_524);
lean_ctor_set(x_525, 1, x_494);
return x_525;
}
}
}
else
{
uint8_t x_526; 
lean_dec(x_415);
lean_dec(x_1);
x_526 = !lean_is_exclusive(x_438);
if (x_526 == 0)
{
lean_object* x_527; lean_object* x_528; 
x_527 = lean_ctor_get(x_438, 0);
lean_dec(x_527);
x_528 = lean_box(1);
lean_ctor_set(x_438, 0, x_528);
return x_438;
}
else
{
lean_object* x_529; lean_object* x_530; lean_object* x_531; 
x_529 = lean_ctor_get(x_438, 1);
lean_inc(x_529);
lean_dec(x_438);
x_530 = lean_box(1);
x_531 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_531, 0, x_530);
lean_ctor_set(x_531, 1, x_529);
return x_531;
}
}
}
else
{
lean_object* x_532; lean_object* x_533; lean_object* x_534; 
lean_dec(x_415);
lean_dec(x_1);
x_532 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_533 = lean_unsigned_to_nat(0u);
x_534 = l_BitVec_extractLsb___redArg(x_532, x_533, x_433);
lean_dec(x_433);
lean_ctor_set(x_431, 0, x_534);
return x_431;
}
}
else
{
lean_object* x_535; lean_object* x_536; lean_object* x_537; uint8_t x_538; 
x_535 = lean_ctor_get(x_431, 0);
x_536 = lean_ctor_get(x_431, 1);
lean_inc(x_536);
lean_inc(x_535);
lean_dec(x_431);
x_537 = l_LeanRV64DExecutable_Functions_read__CSR___closed__24;
x_538 = lean_nat_dec_eq(x_1, x_537);
if (x_538 == 0)
{
uint8_t x_539; lean_object* x_540; 
lean_dec(x_535);
x_539 = 71;
x_540 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_539, x_536);
if (lean_obj_tag(x_540) == 0)
{
lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; uint8_t x_545; 
x_541 = lean_ctor_get(x_540, 0);
lean_inc(x_541);
x_542 = lean_ctor_get(x_540, 1);
lean_inc(x_542);
if (lean_is_exclusive(x_540)) {
 lean_ctor_release(x_540, 0);
 lean_ctor_release(x_540, 1);
 x_543 = x_540;
} else {
 lean_dec_ref(x_540);
 x_543 = lean_box(0);
}
x_544 = l_LeanRV64DExecutable_Functions_read__CSR___closed__25;
x_545 = lean_nat_dec_eq(x_1, x_544);
if (x_545 == 0)
{
uint8_t x_546; lean_object* x_547; 
lean_dec(x_543);
lean_dec(x_541);
x_546 = 70;
x_547 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_546, x_542);
if (lean_obj_tag(x_547) == 0)
{
lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; uint8_t x_552; 
x_548 = lean_ctor_get(x_547, 0);
lean_inc(x_548);
x_549 = lean_ctor_get(x_547, 1);
lean_inc(x_549);
if (lean_is_exclusive(x_547)) {
 lean_ctor_release(x_547, 0);
 lean_ctor_release(x_547, 1);
 x_550 = x_547;
} else {
 lean_dec_ref(x_547);
 x_550 = lean_box(0);
}
x_551 = l_LeanRV64DExecutable_Functions_read__CSR___closed__26;
x_552 = lean_nat_dec_eq(x_1, x_551);
if (x_552 == 0)
{
lean_object* x_553; 
lean_dec(x_550);
lean_dec(x_548);
x_553 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_430, x_549);
if (lean_obj_tag(x_553) == 0)
{
lean_object* x_554; lean_object* x_555; lean_object* x_556; uint8_t x_557; 
x_554 = lean_ctor_get(x_553, 0);
lean_inc(x_554);
x_555 = lean_ctor_get(x_553, 1);
lean_inc(x_555);
lean_dec(x_553);
x_556 = l_LeanRV64DExecutable_Functions_read__CSR___closed__27;
x_557 = lean_nat_dec_eq(x_1, x_556);
if (x_557 == 0)
{
x_387 = x_546;
x_388 = x_430;
x_389 = x_554;
x_390 = x_555;
x_391 = x_539;
x_392 = x_415;
x_393 = x_557;
goto block_412;
}
else
{
uint8_t x_558; 
x_558 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_387 = x_546;
x_388 = x_430;
x_389 = x_554;
x_390 = x_555;
x_391 = x_539;
x_392 = x_415;
x_393 = x_558;
goto block_412;
}
}
else
{
lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; 
lean_dec(x_415);
lean_dec(x_1);
x_559 = lean_ctor_get(x_553, 1);
lean_inc(x_559);
if (lean_is_exclusive(x_553)) {
 lean_ctor_release(x_553, 0);
 lean_ctor_release(x_553, 1);
 x_560 = x_553;
} else {
 lean_dec_ref(x_553);
 x_560 = lean_box(0);
}
x_561 = lean_box(1);
if (lean_is_scalar(x_560)) {
 x_562 = lean_alloc_ctor(1, 2, 0);
} else {
 x_562 = x_560;
}
lean_ctor_set(x_562, 0, x_561);
lean_ctor_set(x_562, 1, x_559);
return x_562;
}
}
else
{
lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; 
lean_dec(x_415);
lean_dec(x_1);
x_563 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_564 = lean_unsigned_to_nat(0u);
x_565 = l_BitVec_extractLsb___redArg(x_563, x_564, x_548);
lean_dec(x_548);
if (lean_is_scalar(x_550)) {
 x_566 = lean_alloc_ctor(0, 2, 0);
} else {
 x_566 = x_550;
}
lean_ctor_set(x_566, 0, x_565);
lean_ctor_set(x_566, 1, x_549);
return x_566;
}
}
else
{
lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; 
lean_dec(x_415);
lean_dec(x_1);
x_567 = lean_ctor_get(x_547, 1);
lean_inc(x_567);
if (lean_is_exclusive(x_547)) {
 lean_ctor_release(x_547, 0);
 lean_ctor_release(x_547, 1);
 x_568 = x_547;
} else {
 lean_dec_ref(x_547);
 x_568 = lean_box(0);
}
x_569 = lean_box(1);
if (lean_is_scalar(x_568)) {
 x_570 = lean_alloc_ctor(1, 2, 0);
} else {
 x_570 = x_568;
}
lean_ctor_set(x_570, 0, x_569);
lean_ctor_set(x_570, 1, x_567);
return x_570;
}
}
else
{
lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; 
lean_dec(x_415);
lean_dec(x_1);
x_571 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_572 = lean_unsigned_to_nat(0u);
x_573 = l_BitVec_extractLsb___redArg(x_571, x_572, x_541);
lean_dec(x_541);
if (lean_is_scalar(x_543)) {
 x_574 = lean_alloc_ctor(0, 2, 0);
} else {
 x_574 = x_543;
}
lean_ctor_set(x_574, 0, x_573);
lean_ctor_set(x_574, 1, x_542);
return x_574;
}
}
else
{
lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; 
lean_dec(x_415);
lean_dec(x_1);
x_575 = lean_ctor_get(x_540, 1);
lean_inc(x_575);
if (lean_is_exclusive(x_540)) {
 lean_ctor_release(x_540, 0);
 lean_ctor_release(x_540, 1);
 x_576 = x_540;
} else {
 lean_dec_ref(x_540);
 x_576 = lean_box(0);
}
x_577 = lean_box(1);
if (lean_is_scalar(x_576)) {
 x_578 = lean_alloc_ctor(1, 2, 0);
} else {
 x_578 = x_576;
}
lean_ctor_set(x_578, 0, x_577);
lean_ctor_set(x_578, 1, x_575);
return x_578;
}
}
else
{
lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; 
lean_dec(x_415);
lean_dec(x_1);
x_579 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_580 = lean_unsigned_to_nat(0u);
x_581 = l_BitVec_extractLsb___redArg(x_579, x_580, x_535);
lean_dec(x_535);
x_582 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_582, 0, x_581);
lean_ctor_set(x_582, 1, x_536);
return x_582;
}
}
}
else
{
uint8_t x_583; 
lean_dec(x_415);
lean_dec(x_1);
x_583 = !lean_is_exclusive(x_431);
if (x_583 == 0)
{
lean_object* x_584; lean_object* x_585; 
x_584 = lean_ctor_get(x_431, 0);
lean_dec(x_584);
x_585 = lean_box(1);
lean_ctor_set(x_431, 0, x_585);
return x_431;
}
else
{
lean_object* x_586; lean_object* x_587; lean_object* x_588; 
x_586 = lean_ctor_get(x_431, 1);
lean_inc(x_586);
lean_dec(x_431);
x_587 = lean_box(1);
x_588 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_588, 0, x_587);
lean_ctor_set(x_588, 1, x_586);
return x_588;
}
}
}
else
{
lean_object* x_589; 
lean_dec(x_415);
lean_dec(x_1);
x_589 = l_LeanRV64DExecutable_Functions_read__seed__csr___redArg(x_425);
return x_589;
}
}
else
{
lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; 
lean_dec(x_1);
x_590 = lean_unsigned_to_nat(32u);
x_591 = l_LeanRV64DExecutable_Functions_read__CSR___closed__31;
x_592 = lean_nat_to_int(x_415);
x_593 = lean_int_mul(x_591, x_592);
lean_dec(x_592);
x_594 = l_Int_toNat(x_593);
lean_dec(x_593);
x_595 = l_BitVec_setWidth(x_590, x_594, x_424);
lean_dec(x_424);
lean_dec(x_594);
lean_ctor_set(x_422, 0, x_595);
return x_422;
}
}
else
{
lean_object* x_596; lean_object* x_597; lean_object* x_598; uint8_t x_599; 
x_596 = lean_ctor_get(x_422, 0);
x_597 = lean_ctor_get(x_422, 1);
lean_inc(x_597);
lean_inc(x_596);
lean_dec(x_422);
x_598 = l_LeanRV64DExecutable_Functions_read__CSR___closed__22;
x_599 = lean_nat_dec_eq(x_1, x_598);
if (x_599 == 0)
{
lean_object* x_600; uint8_t x_601; 
lean_dec(x_596);
x_600 = l_LeanRV64DExecutable_Functions_read__CSR___closed__23;
x_601 = lean_nat_dec_eq(x_1, x_600);
if (x_601 == 0)
{
uint8_t x_602; lean_object* x_603; 
x_602 = 72;
x_603 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_602, x_597);
if (lean_obj_tag(x_603) == 0)
{
lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; uint8_t x_608; 
x_604 = lean_ctor_get(x_603, 0);
lean_inc(x_604);
x_605 = lean_ctor_get(x_603, 1);
lean_inc(x_605);
if (lean_is_exclusive(x_603)) {
 lean_ctor_release(x_603, 0);
 lean_ctor_release(x_603, 1);
 x_606 = x_603;
} else {
 lean_dec_ref(x_603);
 x_606 = lean_box(0);
}
x_607 = l_LeanRV64DExecutable_Functions_read__CSR___closed__24;
x_608 = lean_nat_dec_eq(x_1, x_607);
if (x_608 == 0)
{
uint8_t x_609; lean_object* x_610; 
lean_dec(x_606);
lean_dec(x_604);
x_609 = 71;
x_610 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_609, x_605);
if (lean_obj_tag(x_610) == 0)
{
lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; uint8_t x_615; 
x_611 = lean_ctor_get(x_610, 0);
lean_inc(x_611);
x_612 = lean_ctor_get(x_610, 1);
lean_inc(x_612);
if (lean_is_exclusive(x_610)) {
 lean_ctor_release(x_610, 0);
 lean_ctor_release(x_610, 1);
 x_613 = x_610;
} else {
 lean_dec_ref(x_610);
 x_613 = lean_box(0);
}
x_614 = l_LeanRV64DExecutable_Functions_read__CSR___closed__25;
x_615 = lean_nat_dec_eq(x_1, x_614);
if (x_615 == 0)
{
uint8_t x_616; lean_object* x_617; 
lean_dec(x_613);
lean_dec(x_611);
x_616 = 70;
x_617 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_616, x_612);
if (lean_obj_tag(x_617) == 0)
{
lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; uint8_t x_622; 
x_618 = lean_ctor_get(x_617, 0);
lean_inc(x_618);
x_619 = lean_ctor_get(x_617, 1);
lean_inc(x_619);
if (lean_is_exclusive(x_617)) {
 lean_ctor_release(x_617, 0);
 lean_ctor_release(x_617, 1);
 x_620 = x_617;
} else {
 lean_dec_ref(x_617);
 x_620 = lean_box(0);
}
x_621 = l_LeanRV64DExecutable_Functions_read__CSR___closed__26;
x_622 = lean_nat_dec_eq(x_1, x_621);
if (x_622 == 0)
{
lean_object* x_623; 
lean_dec(x_620);
lean_dec(x_618);
x_623 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_602, x_619);
if (lean_obj_tag(x_623) == 0)
{
lean_object* x_624; lean_object* x_625; lean_object* x_626; uint8_t x_627; 
x_624 = lean_ctor_get(x_623, 0);
lean_inc(x_624);
x_625 = lean_ctor_get(x_623, 1);
lean_inc(x_625);
lean_dec(x_623);
x_626 = l_LeanRV64DExecutable_Functions_read__CSR___closed__27;
x_627 = lean_nat_dec_eq(x_1, x_626);
if (x_627 == 0)
{
x_387 = x_616;
x_388 = x_602;
x_389 = x_624;
x_390 = x_625;
x_391 = x_609;
x_392 = x_415;
x_393 = x_627;
goto block_412;
}
else
{
uint8_t x_628; 
x_628 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_387 = x_616;
x_388 = x_602;
x_389 = x_624;
x_390 = x_625;
x_391 = x_609;
x_392 = x_415;
x_393 = x_628;
goto block_412;
}
}
else
{
lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; 
lean_dec(x_415);
lean_dec(x_1);
x_629 = lean_ctor_get(x_623, 1);
lean_inc(x_629);
if (lean_is_exclusive(x_623)) {
 lean_ctor_release(x_623, 0);
 lean_ctor_release(x_623, 1);
 x_630 = x_623;
} else {
 lean_dec_ref(x_623);
 x_630 = lean_box(0);
}
x_631 = lean_box(1);
if (lean_is_scalar(x_630)) {
 x_632 = lean_alloc_ctor(1, 2, 0);
} else {
 x_632 = x_630;
}
lean_ctor_set(x_632, 0, x_631);
lean_ctor_set(x_632, 1, x_629);
return x_632;
}
}
else
{
lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; 
lean_dec(x_415);
lean_dec(x_1);
x_633 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_634 = lean_unsigned_to_nat(0u);
x_635 = l_BitVec_extractLsb___redArg(x_633, x_634, x_618);
lean_dec(x_618);
if (lean_is_scalar(x_620)) {
 x_636 = lean_alloc_ctor(0, 2, 0);
} else {
 x_636 = x_620;
}
lean_ctor_set(x_636, 0, x_635);
lean_ctor_set(x_636, 1, x_619);
return x_636;
}
}
else
{
lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; 
lean_dec(x_415);
lean_dec(x_1);
x_637 = lean_ctor_get(x_617, 1);
lean_inc(x_637);
if (lean_is_exclusive(x_617)) {
 lean_ctor_release(x_617, 0);
 lean_ctor_release(x_617, 1);
 x_638 = x_617;
} else {
 lean_dec_ref(x_617);
 x_638 = lean_box(0);
}
x_639 = lean_box(1);
if (lean_is_scalar(x_638)) {
 x_640 = lean_alloc_ctor(1, 2, 0);
} else {
 x_640 = x_638;
}
lean_ctor_set(x_640, 0, x_639);
lean_ctor_set(x_640, 1, x_637);
return x_640;
}
}
else
{
lean_object* x_641; lean_object* x_642; lean_object* x_643; lean_object* x_644; 
lean_dec(x_415);
lean_dec(x_1);
x_641 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_642 = lean_unsigned_to_nat(0u);
x_643 = l_BitVec_extractLsb___redArg(x_641, x_642, x_611);
lean_dec(x_611);
if (lean_is_scalar(x_613)) {
 x_644 = lean_alloc_ctor(0, 2, 0);
} else {
 x_644 = x_613;
}
lean_ctor_set(x_644, 0, x_643);
lean_ctor_set(x_644, 1, x_612);
return x_644;
}
}
else
{
lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; 
lean_dec(x_415);
lean_dec(x_1);
x_645 = lean_ctor_get(x_610, 1);
lean_inc(x_645);
if (lean_is_exclusive(x_610)) {
 lean_ctor_release(x_610, 0);
 lean_ctor_release(x_610, 1);
 x_646 = x_610;
} else {
 lean_dec_ref(x_610);
 x_646 = lean_box(0);
}
x_647 = lean_box(1);
if (lean_is_scalar(x_646)) {
 x_648 = lean_alloc_ctor(1, 2, 0);
} else {
 x_648 = x_646;
}
lean_ctor_set(x_648, 0, x_647);
lean_ctor_set(x_648, 1, x_645);
return x_648;
}
}
else
{
lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; 
lean_dec(x_415);
lean_dec(x_1);
x_649 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_650 = lean_unsigned_to_nat(0u);
x_651 = l_BitVec_extractLsb___redArg(x_649, x_650, x_604);
lean_dec(x_604);
if (lean_is_scalar(x_606)) {
 x_652 = lean_alloc_ctor(0, 2, 0);
} else {
 x_652 = x_606;
}
lean_ctor_set(x_652, 0, x_651);
lean_ctor_set(x_652, 1, x_605);
return x_652;
}
}
else
{
lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; 
lean_dec(x_415);
lean_dec(x_1);
x_653 = lean_ctor_get(x_603, 1);
lean_inc(x_653);
if (lean_is_exclusive(x_603)) {
 lean_ctor_release(x_603, 0);
 lean_ctor_release(x_603, 1);
 x_654 = x_603;
} else {
 lean_dec_ref(x_603);
 x_654 = lean_box(0);
}
x_655 = lean_box(1);
if (lean_is_scalar(x_654)) {
 x_656 = lean_alloc_ctor(1, 2, 0);
} else {
 x_656 = x_654;
}
lean_ctor_set(x_656, 0, x_655);
lean_ctor_set(x_656, 1, x_653);
return x_656;
}
}
else
{
lean_object* x_657; 
lean_dec(x_415);
lean_dec(x_1);
x_657 = l_LeanRV64DExecutable_Functions_read__seed__csr___redArg(x_597);
return x_657;
}
}
else
{
lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_664; 
lean_dec(x_1);
x_658 = lean_unsigned_to_nat(32u);
x_659 = l_LeanRV64DExecutable_Functions_read__CSR___closed__31;
x_660 = lean_nat_to_int(x_415);
x_661 = lean_int_mul(x_659, x_660);
lean_dec(x_660);
x_662 = l_Int_toNat(x_661);
lean_dec(x_661);
x_663 = l_BitVec_setWidth(x_658, x_662, x_596);
lean_dec(x_596);
lean_dec(x_662);
x_664 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_664, 0, x_663);
lean_ctor_set(x_664, 1, x_597);
return x_664;
}
}
}
else
{
lean_dec(x_415);
lean_dec(x_1);
return x_422;
}
}
else
{
uint8_t x_665; 
lean_dec(x_415);
lean_dec(x_1);
x_665 = !lean_is_exclusive(x_418);
if (x_665 == 0)
{
lean_object* x_666; lean_object* x_667; 
x_666 = lean_ctor_get(x_418, 0);
lean_dec(x_666);
x_667 = lean_box(1);
lean_ctor_set(x_418, 0, x_667);
return x_418;
}
else
{
lean_object* x_668; lean_object* x_669; lean_object* x_670; 
x_668 = lean_ctor_get(x_418, 1);
lean_inc(x_668);
lean_dec(x_418);
x_669 = lean_box(1);
x_670 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_670, 0, x_669);
lean_ctor_set(x_670, 1, x_668);
return x_670;
}
}
}
else
{
lean_object* x_671; lean_object* x_672; lean_object* x_673; 
x_671 = lean_unsigned_to_nat(0u);
x_672 = l_BitVec_extractLsb___redArg(x_413, x_671, x_1);
lean_dec(x_1);
x_673 = l_LeanRV64DExecutable_Functions_hpmidx__from__bits(x_672, x_414);
if (lean_obj_tag(x_673) == 0)
{
lean_object* x_674; lean_object* x_675; lean_object* x_676; 
x_674 = lean_ctor_get(x_673, 0);
lean_inc(x_674);
x_675 = lean_ctor_get(x_673, 1);
lean_inc(x_675);
lean_dec(x_673);
x_676 = l_LeanRV64DExecutable_Functions_read__mhpmeventh(x_674, x_675);
lean_dec(x_674);
if (lean_obj_tag(x_676) == 0)
{
uint8_t x_677; 
x_677 = !lean_is_exclusive(x_676);
if (x_677 == 0)
{
lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; 
x_678 = lean_ctor_get(x_676, 0);
x_679 = lean_unsigned_to_nat(32u);
x_680 = lean_nat_mul(x_415, x_415);
lean_dec(x_415);
x_681 = l_BitVec_setWidth(x_679, x_680, x_678);
lean_dec(x_678);
lean_dec(x_680);
lean_ctor_set(x_676, 0, x_681);
return x_676;
}
else
{
lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; lean_object* x_687; 
x_682 = lean_ctor_get(x_676, 0);
x_683 = lean_ctor_get(x_676, 1);
lean_inc(x_683);
lean_inc(x_682);
lean_dec(x_676);
x_684 = lean_unsigned_to_nat(32u);
x_685 = lean_nat_mul(x_415, x_415);
lean_dec(x_415);
x_686 = l_BitVec_setWidth(x_684, x_685, x_682);
lean_dec(x_682);
lean_dec(x_685);
x_687 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_687, 0, x_686);
lean_ctor_set(x_687, 1, x_683);
return x_687;
}
}
else
{
lean_dec(x_415);
return x_676;
}
}
else
{
uint8_t x_688; 
lean_dec(x_415);
x_688 = !lean_is_exclusive(x_673);
if (x_688 == 0)
{
return x_673;
}
else
{
lean_object* x_689; lean_object* x_690; lean_object* x_691; 
x_689 = lean_ctor_get(x_673, 0);
x_690 = lean_ctor_get(x_673, 1);
lean_inc(x_690);
lean_inc(x_689);
lean_dec(x_673);
x_691 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_691, 0, x_689);
lean_ctor_set(x_691, 1, x_690);
return x_691;
}
}
}
}
block_707:
{
if (x_697 == 0)
{
lean_object* x_698; lean_object* x_699; lean_object* x_700; uint8_t x_701; 
x_698 = lean_unsigned_to_nat(5u);
x_699 = l_BitVec_extractLsb___redArg(x_696, x_698, x_1);
x_700 = l_LeanRV64DExecutable_Functions_read__CSR___closed__32;
x_701 = lean_nat_dec_eq(x_699, x_700);
lean_dec(x_699);
if (x_701 == 0)
{
x_413 = x_693;
x_414 = x_694;
x_415 = x_695;
x_416 = x_701;
goto block_692;
}
else
{
uint8_t x_702; 
x_702 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
if (x_702 == 0)
{
x_413 = x_693;
x_414 = x_694;
x_415 = x_695;
x_416 = x_702;
goto block_692;
}
else
{
lean_object* x_703; lean_object* x_704; lean_object* x_705; uint8_t x_706; 
x_703 = lean_unsigned_to_nat(0u);
x_704 = l_BitVec_extractLsb___redArg(x_693, x_703, x_1);
x_705 = lean_unsigned_to_nat(3u);
x_706 = lean_nat_dec_le(x_705, x_704);
lean_dec(x_704);
x_413 = x_693;
x_414 = x_694;
x_415 = x_695;
x_416 = x_706;
goto block_692;
}
}
}
else
{
lean_dec(x_695);
x_16 = x_694;
goto block_39;
}
}
block_722:
{
if (x_712 == 0)
{
lean_object* x_713; lean_object* x_714; lean_object* x_715; uint8_t x_716; 
x_713 = lean_unsigned_to_nat(5u);
x_714 = l_BitVec_extractLsb___redArg(x_711, x_713, x_1);
x_715 = l_LeanRV64DExecutable_Functions_read__CSR___closed__33;
x_716 = lean_nat_dec_eq(x_714, x_715);
lean_dec(x_714);
if (x_716 == 0)
{
x_693 = x_708;
x_694 = x_709;
x_695 = x_710;
x_696 = x_711;
x_697 = x_716;
goto block_707;
}
else
{
uint8_t x_717; 
x_717 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
if (x_717 == 0)
{
x_693 = x_708;
x_694 = x_709;
x_695 = x_710;
x_696 = x_711;
x_697 = x_717;
goto block_707;
}
else
{
lean_object* x_718; lean_object* x_719; lean_object* x_720; uint8_t x_721; 
x_718 = lean_unsigned_to_nat(0u);
x_719 = l_BitVec_extractLsb___redArg(x_708, x_718, x_1);
x_720 = lean_unsigned_to_nat(3u);
x_721 = lean_nat_dec_le(x_720, x_719);
lean_dec(x_719);
x_693 = x_708;
x_694 = x_709;
x_695 = x_710;
x_696 = x_711;
x_697 = x_721;
goto block_707;
}
}
}
else
{
lean_dec(x_710);
x_3 = x_709;
goto block_15;
}
}
block_736:
{
if (x_727 == 0)
{
lean_object* x_728; lean_object* x_729; lean_object* x_730; uint8_t x_731; 
x_728 = lean_unsigned_to_nat(5u);
x_729 = l_BitVec_extractLsb___redArg(x_726, x_728, x_1);
x_730 = l_LeanRV64DExecutable_Functions_read__CSR___closed__34;
x_731 = lean_nat_dec_eq(x_729, x_730);
lean_dec(x_729);
if (x_731 == 0)
{
x_708 = x_723;
x_709 = x_724;
x_710 = x_725;
x_711 = x_726;
x_712 = x_731;
goto block_722;
}
else
{
lean_object* x_732; lean_object* x_733; lean_object* x_734; uint8_t x_735; 
x_732 = lean_unsigned_to_nat(0u);
x_733 = l_BitVec_extractLsb___redArg(x_723, x_732, x_1);
x_734 = lean_unsigned_to_nat(3u);
x_735 = lean_nat_dec_le(x_734, x_733);
lean_dec(x_733);
x_708 = x_723;
x_709 = x_724;
x_710 = x_725;
x_711 = x_726;
x_712 = x_735;
goto block_722;
}
}
else
{
lean_dec(x_725);
x_16 = x_724;
goto block_39;
}
}
block_751:
{
if (x_741 == 0)
{
lean_object* x_742; lean_object* x_743; lean_object* x_744; uint8_t x_745; 
x_742 = lean_unsigned_to_nat(5u);
x_743 = l_BitVec_extractLsb___redArg(x_740, x_742, x_1);
x_744 = l_LeanRV64DExecutable_Functions_read__CSR___closed__35;
x_745 = lean_nat_dec_eq(x_743, x_744);
lean_dec(x_743);
if (x_745 == 0)
{
x_723 = x_737;
x_724 = x_738;
x_725 = x_739;
x_726 = x_740;
x_727 = x_745;
goto block_736;
}
else
{
uint8_t x_746; 
x_746 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
if (x_746 == 0)
{
x_723 = x_737;
x_724 = x_738;
x_725 = x_739;
x_726 = x_740;
x_727 = x_746;
goto block_736;
}
else
{
lean_object* x_747; lean_object* x_748; lean_object* x_749; uint8_t x_750; 
x_747 = lean_unsigned_to_nat(0u);
x_748 = l_BitVec_extractLsb___redArg(x_737, x_747, x_1);
x_749 = lean_unsigned_to_nat(3u);
x_750 = lean_nat_dec_le(x_749, x_748);
lean_dec(x_748);
x_723 = x_737;
x_724 = x_738;
x_725 = x_739;
x_726 = x_740;
x_727 = x_750;
goto block_736;
}
}
}
else
{
lean_dec(x_739);
x_3 = x_738;
goto block_15;
}
}
block_775:
{
if (x_756 == 0)
{
lean_object* x_757; lean_object* x_758; lean_object* x_759; uint8_t x_760; 
x_757 = lean_unsigned_to_nat(5u);
x_758 = l_BitVec_extractLsb___redArg(x_755, x_757, x_1);
x_759 = l_LeanRV64DExecutable_Functions_read__CSR___closed__36;
x_760 = lean_nat_dec_eq(x_758, x_759);
lean_dec(x_758);
if (x_760 == 0)
{
x_737 = x_752;
x_738 = x_753;
x_739 = x_754;
x_740 = x_755;
x_741 = x_760;
goto block_751;
}
else
{
lean_object* x_761; lean_object* x_762; lean_object* x_763; uint8_t x_764; 
x_761 = lean_unsigned_to_nat(0u);
x_762 = l_BitVec_extractLsb___redArg(x_752, x_761, x_1);
x_763 = lean_unsigned_to_nat(3u);
x_764 = lean_nat_dec_le(x_763, x_762);
lean_dec(x_762);
x_737 = x_752;
x_738 = x_753;
x_739 = x_754;
x_740 = x_755;
x_741 = x_764;
goto block_751;
}
}
else
{
lean_object* x_765; lean_object* x_766; lean_object* x_767; 
lean_dec(x_754);
x_765 = lean_unsigned_to_nat(0u);
x_766 = l_BitVec_extractLsb___redArg(x_752, x_765, x_1);
lean_dec(x_1);
x_767 = l_LeanRV64DExecutable_Functions_hpmidx__from__bits(x_766, x_753);
if (lean_obj_tag(x_767) == 0)
{
lean_object* x_768; lean_object* x_769; lean_object* x_770; 
x_768 = lean_ctor_get(x_767, 0);
lean_inc(x_768);
x_769 = lean_ctor_get(x_767, 1);
lean_inc(x_769);
lean_dec(x_767);
x_770 = l_LeanRV64DExecutable_Functions_read__mhpmevent(x_768, x_769);
lean_dec(x_768);
return x_770;
}
else
{
uint8_t x_771; 
x_771 = !lean_is_exclusive(x_767);
if (x_771 == 0)
{
return x_767;
}
else
{
lean_object* x_772; lean_object* x_773; lean_object* x_774; 
x_772 = lean_ctor_get(x_767, 0);
x_773 = lean_ctor_get(x_767, 1);
lean_inc(x_773);
lean_inc(x_772);
lean_dec(x_767);
x_774 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_774, 0, x_772);
lean_ctor_set(x_774, 1, x_773);
return x_774;
}
}
}
}
block_1173:
{
if (x_777 == 0)
{
lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; lean_object* x_782; uint8_t x_783; 
x_778 = lean_unsigned_to_nat(11u);
x_779 = lean_unsigned_to_nat(4u);
x_780 = lean_unsigned_to_nat(8u);
x_781 = l_BitVec_extractLsb___redArg(x_778, x_779, x_1);
x_782 = l_LeanRV64DExecutable_Functions_read__CSR___closed__37;
x_783 = lean_nat_dec_eq(x_781, x_782);
if (x_783 == 0)
{
lean_object* x_784; uint8_t x_785; 
x_784 = l_LeanRV64DExecutable_Functions_read__CSR___closed__38;
x_785 = lean_nat_dec_eq(x_781, x_784);
if (x_785 == 0)
{
lean_object* x_786; uint8_t x_787; 
x_786 = l_LeanRV64DExecutable_Functions_read__CSR___closed__39;
x_787 = lean_nat_dec_eq(x_781, x_786);
if (x_787 == 0)
{
lean_object* x_788; uint8_t x_789; 
x_788 = l_LeanRV64DExecutable_Functions_read__CSR___closed__40;
x_789 = lean_nat_dec_eq(x_781, x_788);
lean_dec(x_781);
if (x_789 == 0)
{
uint8_t x_790; lean_object* x_791; 
x_790 = 57;
x_791 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_790, x_776);
if (lean_obj_tag(x_791) == 0)
{
uint8_t x_792; 
x_792 = !lean_is_exclusive(x_791);
if (x_792 == 0)
{
lean_object* x_793; lean_object* x_794; lean_object* x_795; uint8_t x_796; 
x_793 = lean_ctor_get(x_791, 0);
x_794 = lean_ctor_get(x_791, 1);
x_795 = l_LeanRV64DExecutable_Functions_read__CSR___closed__41;
x_796 = lean_nat_dec_eq(x_1, x_795);
if (x_796 == 0)
{
uint8_t x_797; lean_object* x_798; 
lean_free_object(x_791);
lean_dec(x_793);
x_797 = 20;
x_798 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_797, x_794);
if (lean_obj_tag(x_798) == 0)
{
uint8_t x_799; 
x_799 = !lean_is_exclusive(x_798);
if (x_799 == 0)
{
lean_object* x_800; lean_object* x_801; lean_object* x_802; uint8_t x_803; 
x_800 = lean_ctor_get(x_798, 0);
x_801 = lean_ctor_get(x_798, 1);
x_802 = l_LeanRV64DExecutable_Functions_read__CSR___closed__42;
x_803 = lean_nat_dec_eq(x_1, x_802);
if (x_803 == 0)
{
lean_object* x_804; 
lean_free_object(x_798);
lean_dec(x_800);
x_804 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_797, x_801);
if (lean_obj_tag(x_804) == 0)
{
uint8_t x_805; 
x_805 = !lean_is_exclusive(x_804);
if (x_805 == 0)
{
lean_object* x_806; lean_object* x_807; lean_object* x_808; uint8_t x_809; 
x_806 = lean_ctor_get(x_804, 0);
x_807 = lean_ctor_get(x_804, 1);
x_808 = l_LeanRV64DExecutable_Functions_read__CSR___closed__43;
x_809 = lean_nat_dec_eq(x_1, x_808);
if (x_809 == 0)
{
lean_object* x_810; 
lean_free_object(x_804);
lean_dec(x_806);
x_810 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_797, x_807);
if (lean_obj_tag(x_810) == 0)
{
uint8_t x_811; 
x_811 = !lean_is_exclusive(x_810);
if (x_811 == 0)
{
lean_object* x_812; lean_object* x_813; lean_object* x_814; uint8_t x_815; 
x_812 = lean_ctor_get(x_810, 0);
x_813 = lean_ctor_get(x_810, 1);
x_814 = l_LeanRV64DExecutable_Functions_read__CSR___closed__44;
x_815 = lean_nat_dec_eq(x_1, x_814);
if (x_815 == 0)
{
lean_object* x_816; uint8_t x_817; 
lean_dec(x_812);
x_816 = l_LeanRV64DExecutable_Functions_read__CSR___closed__45;
x_817 = lean_nat_dec_eq(x_1, x_816);
if (x_817 == 0)
{
lean_object* x_818; uint8_t x_819; 
x_818 = l_LeanRV64DExecutable_Functions_read__CSR___closed__46;
x_819 = lean_nat_dec_eq(x_1, x_818);
if (x_819 == 0)
{
lean_object* x_820; uint8_t x_821; 
x_820 = l_LeanRV64DExecutable_Functions_read__CSR___closed__47;
x_821 = lean_nat_dec_eq(x_1, x_820);
if (x_821 == 0)
{
lean_object* x_822; uint8_t x_823; 
lean_free_object(x_810);
x_822 = l_LeanRV64DExecutable_Functions_read__CSR___closed__48;
x_823 = lean_nat_dec_eq(x_1, x_822);
if (x_823 == 0)
{
lean_object* x_824; uint8_t x_825; 
x_824 = l_LeanRV64DExecutable_Functions_read__CSR___closed__49;
x_825 = lean_nat_dec_eq(x_1, x_824);
if (x_825 == 0)
{
lean_object* x_826; uint8_t x_827; 
x_826 = l_LeanRV64DExecutable_Functions_read__CSR___closed__50;
x_827 = lean_nat_dec_eq(x_1, x_826);
if (x_827 == 0)
{
lean_object* x_828; uint8_t x_829; 
x_828 = l_LeanRV64DExecutable_Functions_read__CSR___closed__51;
x_829 = lean_nat_dec_eq(x_1, x_828);
if (x_829 == 0)
{
lean_object* x_830; lean_object* x_831; lean_object* x_832; uint8_t x_833; 
x_830 = lean_unsigned_to_nat(5u);
x_831 = l_BitVec_extractLsb___redArg(x_778, x_830, x_1);
x_832 = l_LeanRV64DExecutable_Functions_read__CSR___closed__52;
x_833 = lean_nat_dec_eq(x_831, x_832);
lean_dec(x_831);
if (x_833 == 0)
{
x_752 = x_779;
x_753 = x_813;
x_754 = x_780;
x_755 = x_778;
x_756 = x_833;
goto block_775;
}
else
{
lean_object* x_834; lean_object* x_835; lean_object* x_836; uint8_t x_837; 
x_834 = lean_unsigned_to_nat(0u);
x_835 = l_BitVec_extractLsb___redArg(x_779, x_834, x_1);
x_836 = lean_unsigned_to_nat(3u);
x_837 = lean_nat_dec_le(x_836, x_835);
lean_dec(x_835);
x_752 = x_779;
x_753 = x_813;
x_754 = x_780;
x_755 = x_778;
x_756 = x_837;
goto block_775;
}
}
else
{
uint8_t x_838; lean_object* x_839; 
lean_dec(x_1);
x_838 = 2;
x_839 = l_LeanRV64DExecutable_Functions_get__xepc(x_838, x_813);
return x_839;
}
}
else
{
lean_object* x_840; 
lean_dec(x_1);
x_840 = l_LeanRV64DExecutable_Functions_get__mtvec___redArg(x_813);
return x_840;
}
}
else
{
uint8_t x_841; lean_object* x_842; 
lean_dec(x_1);
x_841 = 1;
x_842 = l_LeanRV64DExecutable_Functions_get__xepc(x_841, x_813);
return x_842;
}
}
else
{
lean_object* x_843; 
lean_dec(x_1);
x_843 = l_LeanRV64DExecutable_Functions_get__stvec___redArg(x_813);
return x_843;
}
}
else
{
lean_object* x_844; 
lean_dec(x_1);
x_844 = l_LeanRV64DExecutable_Functions_VLENB;
lean_ctor_set(x_810, 0, x_844);
return x_810;
}
}
else
{
uint8_t x_845; lean_object* x_846; 
lean_free_object(x_810);
lean_dec(x_1);
x_845 = 55;
x_846 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_845, x_813);
return x_846;
}
}
else
{
uint8_t x_847; lean_object* x_848; 
lean_free_object(x_810);
lean_dec(x_1);
x_847 = 56;
x_848 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_847, x_813);
return x_848;
}
}
else
{
lean_object* x_849; lean_object* x_850; lean_object* x_851; 
lean_dec(x_1);
x_849 = lean_unsigned_to_nat(3u);
x_850 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_851 = l_BitVec_setWidth(x_849, x_850, x_812);
lean_dec(x_812);
lean_ctor_set(x_810, 0, x_851);
return x_810;
}
}
else
{
lean_object* x_852; lean_object* x_853; lean_object* x_854; uint8_t x_855; 
x_852 = lean_ctor_get(x_810, 0);
x_853 = lean_ctor_get(x_810, 1);
lean_inc(x_853);
lean_inc(x_852);
lean_dec(x_810);
x_854 = l_LeanRV64DExecutable_Functions_read__CSR___closed__44;
x_855 = lean_nat_dec_eq(x_1, x_854);
if (x_855 == 0)
{
lean_object* x_856; uint8_t x_857; 
lean_dec(x_852);
x_856 = l_LeanRV64DExecutable_Functions_read__CSR___closed__45;
x_857 = lean_nat_dec_eq(x_1, x_856);
if (x_857 == 0)
{
lean_object* x_858; uint8_t x_859; 
x_858 = l_LeanRV64DExecutable_Functions_read__CSR___closed__46;
x_859 = lean_nat_dec_eq(x_1, x_858);
if (x_859 == 0)
{
lean_object* x_860; uint8_t x_861; 
x_860 = l_LeanRV64DExecutable_Functions_read__CSR___closed__47;
x_861 = lean_nat_dec_eq(x_1, x_860);
if (x_861 == 0)
{
lean_object* x_862; uint8_t x_863; 
x_862 = l_LeanRV64DExecutable_Functions_read__CSR___closed__48;
x_863 = lean_nat_dec_eq(x_1, x_862);
if (x_863 == 0)
{
lean_object* x_864; uint8_t x_865; 
x_864 = l_LeanRV64DExecutable_Functions_read__CSR___closed__49;
x_865 = lean_nat_dec_eq(x_1, x_864);
if (x_865 == 0)
{
lean_object* x_866; uint8_t x_867; 
x_866 = l_LeanRV64DExecutable_Functions_read__CSR___closed__50;
x_867 = lean_nat_dec_eq(x_1, x_866);
if (x_867 == 0)
{
lean_object* x_868; uint8_t x_869; 
x_868 = l_LeanRV64DExecutable_Functions_read__CSR___closed__51;
x_869 = lean_nat_dec_eq(x_1, x_868);
if (x_869 == 0)
{
lean_object* x_870; lean_object* x_871; lean_object* x_872; uint8_t x_873; 
x_870 = lean_unsigned_to_nat(5u);
x_871 = l_BitVec_extractLsb___redArg(x_778, x_870, x_1);
x_872 = l_LeanRV64DExecutable_Functions_read__CSR___closed__52;
x_873 = lean_nat_dec_eq(x_871, x_872);
lean_dec(x_871);
if (x_873 == 0)
{
x_752 = x_779;
x_753 = x_853;
x_754 = x_780;
x_755 = x_778;
x_756 = x_873;
goto block_775;
}
else
{
lean_object* x_874; lean_object* x_875; lean_object* x_876; uint8_t x_877; 
x_874 = lean_unsigned_to_nat(0u);
x_875 = l_BitVec_extractLsb___redArg(x_779, x_874, x_1);
x_876 = lean_unsigned_to_nat(3u);
x_877 = lean_nat_dec_le(x_876, x_875);
lean_dec(x_875);
x_752 = x_779;
x_753 = x_853;
x_754 = x_780;
x_755 = x_778;
x_756 = x_877;
goto block_775;
}
}
else
{
uint8_t x_878; lean_object* x_879; 
lean_dec(x_1);
x_878 = 2;
x_879 = l_LeanRV64DExecutable_Functions_get__xepc(x_878, x_853);
return x_879;
}
}
else
{
lean_object* x_880; 
lean_dec(x_1);
x_880 = l_LeanRV64DExecutable_Functions_get__mtvec___redArg(x_853);
return x_880;
}
}
else
{
uint8_t x_881; lean_object* x_882; 
lean_dec(x_1);
x_881 = 1;
x_882 = l_LeanRV64DExecutable_Functions_get__xepc(x_881, x_853);
return x_882;
}
}
else
{
lean_object* x_883; 
lean_dec(x_1);
x_883 = l_LeanRV64DExecutable_Functions_get__stvec___redArg(x_853);
return x_883;
}
}
else
{
lean_object* x_884; lean_object* x_885; 
lean_dec(x_1);
x_884 = l_LeanRV64DExecutable_Functions_VLENB;
x_885 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_885, 0, x_884);
lean_ctor_set(x_885, 1, x_853);
return x_885;
}
}
else
{
uint8_t x_886; lean_object* x_887; 
lean_dec(x_1);
x_886 = 55;
x_887 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_886, x_853);
return x_887;
}
}
else
{
uint8_t x_888; lean_object* x_889; 
lean_dec(x_1);
x_888 = 56;
x_889 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_888, x_853);
return x_889;
}
}
else
{
lean_object* x_890; lean_object* x_891; lean_object* x_892; lean_object* x_893; 
lean_dec(x_1);
x_890 = lean_unsigned_to_nat(3u);
x_891 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_892 = l_BitVec_setWidth(x_890, x_891, x_852);
lean_dec(x_852);
x_893 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_893, 0, x_892);
lean_ctor_set(x_893, 1, x_853);
return x_893;
}
}
}
else
{
uint8_t x_894; 
lean_dec(x_1);
x_894 = !lean_is_exclusive(x_810);
if (x_894 == 0)
{
lean_object* x_895; lean_object* x_896; 
x_895 = lean_ctor_get(x_810, 0);
lean_dec(x_895);
x_896 = lean_box(1);
lean_ctor_set(x_810, 0, x_896);
return x_810;
}
else
{
lean_object* x_897; lean_object* x_898; lean_object* x_899; 
x_897 = lean_ctor_get(x_810, 1);
lean_inc(x_897);
lean_dec(x_810);
x_898 = lean_box(1);
x_899 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_899, 0, x_898);
lean_ctor_set(x_899, 1, x_897);
return x_899;
}
}
}
else
{
lean_object* x_900; lean_object* x_901; lean_object* x_902; lean_object* x_903; 
lean_dec(x_1);
x_900 = lean_unsigned_to_nat(2u);
x_901 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_902 = l_LeanRV64DExecutable_Functions___get__Vcsr__vxrm(x_806);
lean_dec(x_806);
x_903 = l_BitVec_setWidth(x_900, x_901, x_902);
lean_dec(x_902);
lean_ctor_set(x_804, 0, x_903);
return x_804;
}
}
else
{
lean_object* x_904; lean_object* x_905; lean_object* x_906; uint8_t x_907; 
x_904 = lean_ctor_get(x_804, 0);
x_905 = lean_ctor_get(x_804, 1);
lean_inc(x_905);
lean_inc(x_904);
lean_dec(x_804);
x_906 = l_LeanRV64DExecutable_Functions_read__CSR___closed__43;
x_907 = lean_nat_dec_eq(x_1, x_906);
if (x_907 == 0)
{
lean_object* x_908; 
lean_dec(x_904);
x_908 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_797, x_905);
if (lean_obj_tag(x_908) == 0)
{
lean_object* x_909; lean_object* x_910; lean_object* x_911; lean_object* x_912; uint8_t x_913; 
x_909 = lean_ctor_get(x_908, 0);
lean_inc(x_909);
x_910 = lean_ctor_get(x_908, 1);
lean_inc(x_910);
if (lean_is_exclusive(x_908)) {
 lean_ctor_release(x_908, 0);
 lean_ctor_release(x_908, 1);
 x_911 = x_908;
} else {
 lean_dec_ref(x_908);
 x_911 = lean_box(0);
}
x_912 = l_LeanRV64DExecutable_Functions_read__CSR___closed__44;
x_913 = lean_nat_dec_eq(x_1, x_912);
if (x_913 == 0)
{
lean_object* x_914; uint8_t x_915; 
lean_dec(x_909);
x_914 = l_LeanRV64DExecutable_Functions_read__CSR___closed__45;
x_915 = lean_nat_dec_eq(x_1, x_914);
if (x_915 == 0)
{
lean_object* x_916; uint8_t x_917; 
x_916 = l_LeanRV64DExecutable_Functions_read__CSR___closed__46;
x_917 = lean_nat_dec_eq(x_1, x_916);
if (x_917 == 0)
{
lean_object* x_918; uint8_t x_919; 
x_918 = l_LeanRV64DExecutable_Functions_read__CSR___closed__47;
x_919 = lean_nat_dec_eq(x_1, x_918);
if (x_919 == 0)
{
lean_object* x_920; uint8_t x_921; 
lean_dec(x_911);
x_920 = l_LeanRV64DExecutable_Functions_read__CSR___closed__48;
x_921 = lean_nat_dec_eq(x_1, x_920);
if (x_921 == 0)
{
lean_object* x_922; uint8_t x_923; 
x_922 = l_LeanRV64DExecutable_Functions_read__CSR___closed__49;
x_923 = lean_nat_dec_eq(x_1, x_922);
if (x_923 == 0)
{
lean_object* x_924; uint8_t x_925; 
x_924 = l_LeanRV64DExecutable_Functions_read__CSR___closed__50;
x_925 = lean_nat_dec_eq(x_1, x_924);
if (x_925 == 0)
{
lean_object* x_926; uint8_t x_927; 
x_926 = l_LeanRV64DExecutable_Functions_read__CSR___closed__51;
x_927 = lean_nat_dec_eq(x_1, x_926);
if (x_927 == 0)
{
lean_object* x_928; lean_object* x_929; lean_object* x_930; uint8_t x_931; 
x_928 = lean_unsigned_to_nat(5u);
x_929 = l_BitVec_extractLsb___redArg(x_778, x_928, x_1);
x_930 = l_LeanRV64DExecutable_Functions_read__CSR___closed__52;
x_931 = lean_nat_dec_eq(x_929, x_930);
lean_dec(x_929);
if (x_931 == 0)
{
x_752 = x_779;
x_753 = x_910;
x_754 = x_780;
x_755 = x_778;
x_756 = x_931;
goto block_775;
}
else
{
lean_object* x_932; lean_object* x_933; lean_object* x_934; uint8_t x_935; 
x_932 = lean_unsigned_to_nat(0u);
x_933 = l_BitVec_extractLsb___redArg(x_779, x_932, x_1);
x_934 = lean_unsigned_to_nat(3u);
x_935 = lean_nat_dec_le(x_934, x_933);
lean_dec(x_933);
x_752 = x_779;
x_753 = x_910;
x_754 = x_780;
x_755 = x_778;
x_756 = x_935;
goto block_775;
}
}
else
{
uint8_t x_936; lean_object* x_937; 
lean_dec(x_1);
x_936 = 2;
x_937 = l_LeanRV64DExecutable_Functions_get__xepc(x_936, x_910);
return x_937;
}
}
else
{
lean_object* x_938; 
lean_dec(x_1);
x_938 = l_LeanRV64DExecutable_Functions_get__mtvec___redArg(x_910);
return x_938;
}
}
else
{
uint8_t x_939; lean_object* x_940; 
lean_dec(x_1);
x_939 = 1;
x_940 = l_LeanRV64DExecutable_Functions_get__xepc(x_939, x_910);
return x_940;
}
}
else
{
lean_object* x_941; 
lean_dec(x_1);
x_941 = l_LeanRV64DExecutable_Functions_get__stvec___redArg(x_910);
return x_941;
}
}
else
{
lean_object* x_942; lean_object* x_943; 
lean_dec(x_1);
x_942 = l_LeanRV64DExecutable_Functions_VLENB;
if (lean_is_scalar(x_911)) {
 x_943 = lean_alloc_ctor(0, 2, 0);
} else {
 x_943 = x_911;
}
lean_ctor_set(x_943, 0, x_942);
lean_ctor_set(x_943, 1, x_910);
return x_943;
}
}
else
{
uint8_t x_944; lean_object* x_945; 
lean_dec(x_911);
lean_dec(x_1);
x_944 = 55;
x_945 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_944, x_910);
return x_945;
}
}
else
{
uint8_t x_946; lean_object* x_947; 
lean_dec(x_911);
lean_dec(x_1);
x_946 = 56;
x_947 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_946, x_910);
return x_947;
}
}
else
{
lean_object* x_948; lean_object* x_949; lean_object* x_950; lean_object* x_951; 
lean_dec(x_1);
x_948 = lean_unsigned_to_nat(3u);
x_949 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_950 = l_BitVec_setWidth(x_948, x_949, x_909);
lean_dec(x_909);
if (lean_is_scalar(x_911)) {
 x_951 = lean_alloc_ctor(0, 2, 0);
} else {
 x_951 = x_911;
}
lean_ctor_set(x_951, 0, x_950);
lean_ctor_set(x_951, 1, x_910);
return x_951;
}
}
else
{
lean_object* x_952; lean_object* x_953; lean_object* x_954; lean_object* x_955; 
lean_dec(x_1);
x_952 = lean_ctor_get(x_908, 1);
lean_inc(x_952);
if (lean_is_exclusive(x_908)) {
 lean_ctor_release(x_908, 0);
 lean_ctor_release(x_908, 1);
 x_953 = x_908;
} else {
 lean_dec_ref(x_908);
 x_953 = lean_box(0);
}
x_954 = lean_box(1);
if (lean_is_scalar(x_953)) {
 x_955 = lean_alloc_ctor(1, 2, 0);
} else {
 x_955 = x_953;
}
lean_ctor_set(x_955, 0, x_954);
lean_ctor_set(x_955, 1, x_952);
return x_955;
}
}
else
{
lean_object* x_956; lean_object* x_957; lean_object* x_958; lean_object* x_959; lean_object* x_960; 
lean_dec(x_1);
x_956 = lean_unsigned_to_nat(2u);
x_957 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_958 = l_LeanRV64DExecutable_Functions___get__Vcsr__vxrm(x_904);
lean_dec(x_904);
x_959 = l_BitVec_setWidth(x_956, x_957, x_958);
lean_dec(x_958);
x_960 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_960, 0, x_959);
lean_ctor_set(x_960, 1, x_905);
return x_960;
}
}
}
else
{
uint8_t x_961; 
lean_dec(x_1);
x_961 = !lean_is_exclusive(x_804);
if (x_961 == 0)
{
lean_object* x_962; lean_object* x_963; 
x_962 = lean_ctor_get(x_804, 0);
lean_dec(x_962);
x_963 = lean_box(1);
lean_ctor_set(x_804, 0, x_963);
return x_804;
}
else
{
lean_object* x_964; lean_object* x_965; lean_object* x_966; 
x_964 = lean_ctor_get(x_804, 1);
lean_inc(x_964);
lean_dec(x_804);
x_965 = lean_box(1);
x_966 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_966, 0, x_965);
lean_ctor_set(x_966, 1, x_964);
return x_966;
}
}
}
else
{
lean_object* x_967; lean_object* x_968; lean_object* x_969; lean_object* x_970; 
lean_dec(x_1);
x_967 = lean_unsigned_to_nat(1u);
x_968 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_969 = l_LeanRV64DExecutable_Functions___get__Vcsr__vxsat(x_800);
lean_dec(x_800);
x_970 = l_BitVec_setWidth(x_967, x_968, x_969);
lean_dec(x_969);
lean_ctor_set(x_798, 0, x_970);
return x_798;
}
}
else
{
lean_object* x_971; lean_object* x_972; lean_object* x_973; uint8_t x_974; 
x_971 = lean_ctor_get(x_798, 0);
x_972 = lean_ctor_get(x_798, 1);
lean_inc(x_972);
lean_inc(x_971);
lean_dec(x_798);
x_973 = l_LeanRV64DExecutable_Functions_read__CSR___closed__42;
x_974 = lean_nat_dec_eq(x_1, x_973);
if (x_974 == 0)
{
lean_object* x_975; 
lean_dec(x_971);
x_975 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_797, x_972);
if (lean_obj_tag(x_975) == 0)
{
lean_object* x_976; lean_object* x_977; lean_object* x_978; lean_object* x_979; uint8_t x_980; 
x_976 = lean_ctor_get(x_975, 0);
lean_inc(x_976);
x_977 = lean_ctor_get(x_975, 1);
lean_inc(x_977);
if (lean_is_exclusive(x_975)) {
 lean_ctor_release(x_975, 0);
 lean_ctor_release(x_975, 1);
 x_978 = x_975;
} else {
 lean_dec_ref(x_975);
 x_978 = lean_box(0);
}
x_979 = l_LeanRV64DExecutable_Functions_read__CSR___closed__43;
x_980 = lean_nat_dec_eq(x_1, x_979);
if (x_980 == 0)
{
lean_object* x_981; 
lean_dec(x_978);
lean_dec(x_976);
x_981 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_797, x_977);
if (lean_obj_tag(x_981) == 0)
{
lean_object* x_982; lean_object* x_983; lean_object* x_984; lean_object* x_985; uint8_t x_986; 
x_982 = lean_ctor_get(x_981, 0);
lean_inc(x_982);
x_983 = lean_ctor_get(x_981, 1);
lean_inc(x_983);
if (lean_is_exclusive(x_981)) {
 lean_ctor_release(x_981, 0);
 lean_ctor_release(x_981, 1);
 x_984 = x_981;
} else {
 lean_dec_ref(x_981);
 x_984 = lean_box(0);
}
x_985 = l_LeanRV64DExecutable_Functions_read__CSR___closed__44;
x_986 = lean_nat_dec_eq(x_1, x_985);
if (x_986 == 0)
{
lean_object* x_987; uint8_t x_988; 
lean_dec(x_982);
x_987 = l_LeanRV64DExecutable_Functions_read__CSR___closed__45;
x_988 = lean_nat_dec_eq(x_1, x_987);
if (x_988 == 0)
{
lean_object* x_989; uint8_t x_990; 
x_989 = l_LeanRV64DExecutable_Functions_read__CSR___closed__46;
x_990 = lean_nat_dec_eq(x_1, x_989);
if (x_990 == 0)
{
lean_object* x_991; uint8_t x_992; 
x_991 = l_LeanRV64DExecutable_Functions_read__CSR___closed__47;
x_992 = lean_nat_dec_eq(x_1, x_991);
if (x_992 == 0)
{
lean_object* x_993; uint8_t x_994; 
lean_dec(x_984);
x_993 = l_LeanRV64DExecutable_Functions_read__CSR___closed__48;
x_994 = lean_nat_dec_eq(x_1, x_993);
if (x_994 == 0)
{
lean_object* x_995; uint8_t x_996; 
x_995 = l_LeanRV64DExecutable_Functions_read__CSR___closed__49;
x_996 = lean_nat_dec_eq(x_1, x_995);
if (x_996 == 0)
{
lean_object* x_997; uint8_t x_998; 
x_997 = l_LeanRV64DExecutable_Functions_read__CSR___closed__50;
x_998 = lean_nat_dec_eq(x_1, x_997);
if (x_998 == 0)
{
lean_object* x_999; uint8_t x_1000; 
x_999 = l_LeanRV64DExecutable_Functions_read__CSR___closed__51;
x_1000 = lean_nat_dec_eq(x_1, x_999);
if (x_1000 == 0)
{
lean_object* x_1001; lean_object* x_1002; lean_object* x_1003; uint8_t x_1004; 
x_1001 = lean_unsigned_to_nat(5u);
x_1002 = l_BitVec_extractLsb___redArg(x_778, x_1001, x_1);
x_1003 = l_LeanRV64DExecutable_Functions_read__CSR___closed__52;
x_1004 = lean_nat_dec_eq(x_1002, x_1003);
lean_dec(x_1002);
if (x_1004 == 0)
{
x_752 = x_779;
x_753 = x_983;
x_754 = x_780;
x_755 = x_778;
x_756 = x_1004;
goto block_775;
}
else
{
lean_object* x_1005; lean_object* x_1006; lean_object* x_1007; uint8_t x_1008; 
x_1005 = lean_unsigned_to_nat(0u);
x_1006 = l_BitVec_extractLsb___redArg(x_779, x_1005, x_1);
x_1007 = lean_unsigned_to_nat(3u);
x_1008 = lean_nat_dec_le(x_1007, x_1006);
lean_dec(x_1006);
x_752 = x_779;
x_753 = x_983;
x_754 = x_780;
x_755 = x_778;
x_756 = x_1008;
goto block_775;
}
}
else
{
uint8_t x_1009; lean_object* x_1010; 
lean_dec(x_1);
x_1009 = 2;
x_1010 = l_LeanRV64DExecutable_Functions_get__xepc(x_1009, x_983);
return x_1010;
}
}
else
{
lean_object* x_1011; 
lean_dec(x_1);
x_1011 = l_LeanRV64DExecutable_Functions_get__mtvec___redArg(x_983);
return x_1011;
}
}
else
{
uint8_t x_1012; lean_object* x_1013; 
lean_dec(x_1);
x_1012 = 1;
x_1013 = l_LeanRV64DExecutable_Functions_get__xepc(x_1012, x_983);
return x_1013;
}
}
else
{
lean_object* x_1014; 
lean_dec(x_1);
x_1014 = l_LeanRV64DExecutable_Functions_get__stvec___redArg(x_983);
return x_1014;
}
}
else
{
lean_object* x_1015; lean_object* x_1016; 
lean_dec(x_1);
x_1015 = l_LeanRV64DExecutable_Functions_VLENB;
if (lean_is_scalar(x_984)) {
 x_1016 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1016 = x_984;
}
lean_ctor_set(x_1016, 0, x_1015);
lean_ctor_set(x_1016, 1, x_983);
return x_1016;
}
}
else
{
uint8_t x_1017; lean_object* x_1018; 
lean_dec(x_984);
lean_dec(x_1);
x_1017 = 55;
x_1018 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1017, x_983);
return x_1018;
}
}
else
{
uint8_t x_1019; lean_object* x_1020; 
lean_dec(x_984);
lean_dec(x_1);
x_1019 = 56;
x_1020 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1019, x_983);
return x_1020;
}
}
else
{
lean_object* x_1021; lean_object* x_1022; lean_object* x_1023; lean_object* x_1024; 
lean_dec(x_1);
x_1021 = lean_unsigned_to_nat(3u);
x_1022 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1023 = l_BitVec_setWidth(x_1021, x_1022, x_982);
lean_dec(x_982);
if (lean_is_scalar(x_984)) {
 x_1024 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1024 = x_984;
}
lean_ctor_set(x_1024, 0, x_1023);
lean_ctor_set(x_1024, 1, x_983);
return x_1024;
}
}
else
{
lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; 
lean_dec(x_1);
x_1025 = lean_ctor_get(x_981, 1);
lean_inc(x_1025);
if (lean_is_exclusive(x_981)) {
 lean_ctor_release(x_981, 0);
 lean_ctor_release(x_981, 1);
 x_1026 = x_981;
} else {
 lean_dec_ref(x_981);
 x_1026 = lean_box(0);
}
x_1027 = lean_box(1);
if (lean_is_scalar(x_1026)) {
 x_1028 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1028 = x_1026;
}
lean_ctor_set(x_1028, 0, x_1027);
lean_ctor_set(x_1028, 1, x_1025);
return x_1028;
}
}
else
{
lean_object* x_1029; lean_object* x_1030; lean_object* x_1031; lean_object* x_1032; lean_object* x_1033; 
lean_dec(x_1);
x_1029 = lean_unsigned_to_nat(2u);
x_1030 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1031 = l_LeanRV64DExecutable_Functions___get__Vcsr__vxrm(x_976);
lean_dec(x_976);
x_1032 = l_BitVec_setWidth(x_1029, x_1030, x_1031);
lean_dec(x_1031);
if (lean_is_scalar(x_978)) {
 x_1033 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1033 = x_978;
}
lean_ctor_set(x_1033, 0, x_1032);
lean_ctor_set(x_1033, 1, x_977);
return x_1033;
}
}
else
{
lean_object* x_1034; lean_object* x_1035; lean_object* x_1036; lean_object* x_1037; 
lean_dec(x_1);
x_1034 = lean_ctor_get(x_975, 1);
lean_inc(x_1034);
if (lean_is_exclusive(x_975)) {
 lean_ctor_release(x_975, 0);
 lean_ctor_release(x_975, 1);
 x_1035 = x_975;
} else {
 lean_dec_ref(x_975);
 x_1035 = lean_box(0);
}
x_1036 = lean_box(1);
if (lean_is_scalar(x_1035)) {
 x_1037 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1037 = x_1035;
}
lean_ctor_set(x_1037, 0, x_1036);
lean_ctor_set(x_1037, 1, x_1034);
return x_1037;
}
}
else
{
lean_object* x_1038; lean_object* x_1039; lean_object* x_1040; lean_object* x_1041; lean_object* x_1042; 
lean_dec(x_1);
x_1038 = lean_unsigned_to_nat(1u);
x_1039 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1040 = l_LeanRV64DExecutable_Functions___get__Vcsr__vxsat(x_971);
lean_dec(x_971);
x_1041 = l_BitVec_setWidth(x_1038, x_1039, x_1040);
lean_dec(x_1040);
x_1042 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1042, 0, x_1041);
lean_ctor_set(x_1042, 1, x_972);
return x_1042;
}
}
}
else
{
uint8_t x_1043; 
lean_dec(x_1);
x_1043 = !lean_is_exclusive(x_798);
if (x_1043 == 0)
{
lean_object* x_1044; lean_object* x_1045; 
x_1044 = lean_ctor_get(x_798, 0);
lean_dec(x_1044);
x_1045 = lean_box(1);
lean_ctor_set(x_798, 0, x_1045);
return x_798;
}
else
{
lean_object* x_1046; lean_object* x_1047; lean_object* x_1048; 
x_1046 = lean_ctor_get(x_798, 1);
lean_inc(x_1046);
lean_dec(x_798);
x_1047 = lean_box(1);
x_1048 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1048, 0, x_1047);
lean_ctor_set(x_1048, 1, x_1046);
return x_1048;
}
}
}
else
{
lean_object* x_1049; lean_object* x_1050; lean_object* x_1051; 
lean_dec(x_1);
x_1049 = lean_unsigned_to_nat(16u);
x_1050 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1051 = l_BitVec_setWidth(x_1049, x_1050, x_793);
lean_dec(x_793);
lean_ctor_set(x_791, 0, x_1051);
return x_791;
}
}
else
{
lean_object* x_1052; lean_object* x_1053; lean_object* x_1054; uint8_t x_1055; 
x_1052 = lean_ctor_get(x_791, 0);
x_1053 = lean_ctor_get(x_791, 1);
lean_inc(x_1053);
lean_inc(x_1052);
lean_dec(x_791);
x_1054 = l_LeanRV64DExecutable_Functions_read__CSR___closed__41;
x_1055 = lean_nat_dec_eq(x_1, x_1054);
if (x_1055 == 0)
{
uint8_t x_1056; lean_object* x_1057; 
lean_dec(x_1052);
x_1056 = 20;
x_1057 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1056, x_1053);
if (lean_obj_tag(x_1057) == 0)
{
lean_object* x_1058; lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; uint8_t x_1062; 
x_1058 = lean_ctor_get(x_1057, 0);
lean_inc(x_1058);
x_1059 = lean_ctor_get(x_1057, 1);
lean_inc(x_1059);
if (lean_is_exclusive(x_1057)) {
 lean_ctor_release(x_1057, 0);
 lean_ctor_release(x_1057, 1);
 x_1060 = x_1057;
} else {
 lean_dec_ref(x_1057);
 x_1060 = lean_box(0);
}
x_1061 = l_LeanRV64DExecutable_Functions_read__CSR___closed__42;
x_1062 = lean_nat_dec_eq(x_1, x_1061);
if (x_1062 == 0)
{
lean_object* x_1063; 
lean_dec(x_1060);
lean_dec(x_1058);
x_1063 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1056, x_1059);
if (lean_obj_tag(x_1063) == 0)
{
lean_object* x_1064; lean_object* x_1065; lean_object* x_1066; lean_object* x_1067; uint8_t x_1068; 
x_1064 = lean_ctor_get(x_1063, 0);
lean_inc(x_1064);
x_1065 = lean_ctor_get(x_1063, 1);
lean_inc(x_1065);
if (lean_is_exclusive(x_1063)) {
 lean_ctor_release(x_1063, 0);
 lean_ctor_release(x_1063, 1);
 x_1066 = x_1063;
} else {
 lean_dec_ref(x_1063);
 x_1066 = lean_box(0);
}
x_1067 = l_LeanRV64DExecutable_Functions_read__CSR___closed__43;
x_1068 = lean_nat_dec_eq(x_1, x_1067);
if (x_1068 == 0)
{
lean_object* x_1069; 
lean_dec(x_1066);
lean_dec(x_1064);
x_1069 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1056, x_1065);
if (lean_obj_tag(x_1069) == 0)
{
lean_object* x_1070; lean_object* x_1071; lean_object* x_1072; lean_object* x_1073; uint8_t x_1074; 
x_1070 = lean_ctor_get(x_1069, 0);
lean_inc(x_1070);
x_1071 = lean_ctor_get(x_1069, 1);
lean_inc(x_1071);
if (lean_is_exclusive(x_1069)) {
 lean_ctor_release(x_1069, 0);
 lean_ctor_release(x_1069, 1);
 x_1072 = x_1069;
} else {
 lean_dec_ref(x_1069);
 x_1072 = lean_box(0);
}
x_1073 = l_LeanRV64DExecutable_Functions_read__CSR___closed__44;
x_1074 = lean_nat_dec_eq(x_1, x_1073);
if (x_1074 == 0)
{
lean_object* x_1075; uint8_t x_1076; 
lean_dec(x_1070);
x_1075 = l_LeanRV64DExecutable_Functions_read__CSR___closed__45;
x_1076 = lean_nat_dec_eq(x_1, x_1075);
if (x_1076 == 0)
{
lean_object* x_1077; uint8_t x_1078; 
x_1077 = l_LeanRV64DExecutable_Functions_read__CSR___closed__46;
x_1078 = lean_nat_dec_eq(x_1, x_1077);
if (x_1078 == 0)
{
lean_object* x_1079; uint8_t x_1080; 
x_1079 = l_LeanRV64DExecutable_Functions_read__CSR___closed__47;
x_1080 = lean_nat_dec_eq(x_1, x_1079);
if (x_1080 == 0)
{
lean_object* x_1081; uint8_t x_1082; 
lean_dec(x_1072);
x_1081 = l_LeanRV64DExecutable_Functions_read__CSR___closed__48;
x_1082 = lean_nat_dec_eq(x_1, x_1081);
if (x_1082 == 0)
{
lean_object* x_1083; uint8_t x_1084; 
x_1083 = l_LeanRV64DExecutable_Functions_read__CSR___closed__49;
x_1084 = lean_nat_dec_eq(x_1, x_1083);
if (x_1084 == 0)
{
lean_object* x_1085; uint8_t x_1086; 
x_1085 = l_LeanRV64DExecutable_Functions_read__CSR___closed__50;
x_1086 = lean_nat_dec_eq(x_1, x_1085);
if (x_1086 == 0)
{
lean_object* x_1087; uint8_t x_1088; 
x_1087 = l_LeanRV64DExecutable_Functions_read__CSR___closed__51;
x_1088 = lean_nat_dec_eq(x_1, x_1087);
if (x_1088 == 0)
{
lean_object* x_1089; lean_object* x_1090; lean_object* x_1091; uint8_t x_1092; 
x_1089 = lean_unsigned_to_nat(5u);
x_1090 = l_BitVec_extractLsb___redArg(x_778, x_1089, x_1);
x_1091 = l_LeanRV64DExecutable_Functions_read__CSR___closed__52;
x_1092 = lean_nat_dec_eq(x_1090, x_1091);
lean_dec(x_1090);
if (x_1092 == 0)
{
x_752 = x_779;
x_753 = x_1071;
x_754 = x_780;
x_755 = x_778;
x_756 = x_1092;
goto block_775;
}
else
{
lean_object* x_1093; lean_object* x_1094; lean_object* x_1095; uint8_t x_1096; 
x_1093 = lean_unsigned_to_nat(0u);
x_1094 = l_BitVec_extractLsb___redArg(x_779, x_1093, x_1);
x_1095 = lean_unsigned_to_nat(3u);
x_1096 = lean_nat_dec_le(x_1095, x_1094);
lean_dec(x_1094);
x_752 = x_779;
x_753 = x_1071;
x_754 = x_780;
x_755 = x_778;
x_756 = x_1096;
goto block_775;
}
}
else
{
uint8_t x_1097; lean_object* x_1098; 
lean_dec(x_1);
x_1097 = 2;
x_1098 = l_LeanRV64DExecutable_Functions_get__xepc(x_1097, x_1071);
return x_1098;
}
}
else
{
lean_object* x_1099; 
lean_dec(x_1);
x_1099 = l_LeanRV64DExecutable_Functions_get__mtvec___redArg(x_1071);
return x_1099;
}
}
else
{
uint8_t x_1100; lean_object* x_1101; 
lean_dec(x_1);
x_1100 = 1;
x_1101 = l_LeanRV64DExecutable_Functions_get__xepc(x_1100, x_1071);
return x_1101;
}
}
else
{
lean_object* x_1102; 
lean_dec(x_1);
x_1102 = l_LeanRV64DExecutable_Functions_get__stvec___redArg(x_1071);
return x_1102;
}
}
else
{
lean_object* x_1103; lean_object* x_1104; 
lean_dec(x_1);
x_1103 = l_LeanRV64DExecutable_Functions_VLENB;
if (lean_is_scalar(x_1072)) {
 x_1104 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1104 = x_1072;
}
lean_ctor_set(x_1104, 0, x_1103);
lean_ctor_set(x_1104, 1, x_1071);
return x_1104;
}
}
else
{
uint8_t x_1105; lean_object* x_1106; 
lean_dec(x_1072);
lean_dec(x_1);
x_1105 = 55;
x_1106 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1105, x_1071);
return x_1106;
}
}
else
{
uint8_t x_1107; lean_object* x_1108; 
lean_dec(x_1072);
lean_dec(x_1);
x_1107 = 56;
x_1108 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1107, x_1071);
return x_1108;
}
}
else
{
lean_object* x_1109; lean_object* x_1110; lean_object* x_1111; lean_object* x_1112; 
lean_dec(x_1);
x_1109 = lean_unsigned_to_nat(3u);
x_1110 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1111 = l_BitVec_setWidth(x_1109, x_1110, x_1070);
lean_dec(x_1070);
if (lean_is_scalar(x_1072)) {
 x_1112 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1112 = x_1072;
}
lean_ctor_set(x_1112, 0, x_1111);
lean_ctor_set(x_1112, 1, x_1071);
return x_1112;
}
}
else
{
lean_object* x_1113; lean_object* x_1114; lean_object* x_1115; lean_object* x_1116; 
lean_dec(x_1);
x_1113 = lean_ctor_get(x_1069, 1);
lean_inc(x_1113);
if (lean_is_exclusive(x_1069)) {
 lean_ctor_release(x_1069, 0);
 lean_ctor_release(x_1069, 1);
 x_1114 = x_1069;
} else {
 lean_dec_ref(x_1069);
 x_1114 = lean_box(0);
}
x_1115 = lean_box(1);
if (lean_is_scalar(x_1114)) {
 x_1116 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1116 = x_1114;
}
lean_ctor_set(x_1116, 0, x_1115);
lean_ctor_set(x_1116, 1, x_1113);
return x_1116;
}
}
else
{
lean_object* x_1117; lean_object* x_1118; lean_object* x_1119; lean_object* x_1120; lean_object* x_1121; 
lean_dec(x_1);
x_1117 = lean_unsigned_to_nat(2u);
x_1118 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1119 = l_LeanRV64DExecutable_Functions___get__Vcsr__vxrm(x_1064);
lean_dec(x_1064);
x_1120 = l_BitVec_setWidth(x_1117, x_1118, x_1119);
lean_dec(x_1119);
if (lean_is_scalar(x_1066)) {
 x_1121 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1121 = x_1066;
}
lean_ctor_set(x_1121, 0, x_1120);
lean_ctor_set(x_1121, 1, x_1065);
return x_1121;
}
}
else
{
lean_object* x_1122; lean_object* x_1123; lean_object* x_1124; lean_object* x_1125; 
lean_dec(x_1);
x_1122 = lean_ctor_get(x_1063, 1);
lean_inc(x_1122);
if (lean_is_exclusive(x_1063)) {
 lean_ctor_release(x_1063, 0);
 lean_ctor_release(x_1063, 1);
 x_1123 = x_1063;
} else {
 lean_dec_ref(x_1063);
 x_1123 = lean_box(0);
}
x_1124 = lean_box(1);
if (lean_is_scalar(x_1123)) {
 x_1125 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1125 = x_1123;
}
lean_ctor_set(x_1125, 0, x_1124);
lean_ctor_set(x_1125, 1, x_1122);
return x_1125;
}
}
else
{
lean_object* x_1126; lean_object* x_1127; lean_object* x_1128; lean_object* x_1129; lean_object* x_1130; 
lean_dec(x_1);
x_1126 = lean_unsigned_to_nat(1u);
x_1127 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1128 = l_LeanRV64DExecutable_Functions___get__Vcsr__vxsat(x_1058);
lean_dec(x_1058);
x_1129 = l_BitVec_setWidth(x_1126, x_1127, x_1128);
lean_dec(x_1128);
if (lean_is_scalar(x_1060)) {
 x_1130 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1130 = x_1060;
}
lean_ctor_set(x_1130, 0, x_1129);
lean_ctor_set(x_1130, 1, x_1059);
return x_1130;
}
}
else
{
lean_object* x_1131; lean_object* x_1132; lean_object* x_1133; lean_object* x_1134; 
lean_dec(x_1);
x_1131 = lean_ctor_get(x_1057, 1);
lean_inc(x_1131);
if (lean_is_exclusive(x_1057)) {
 lean_ctor_release(x_1057, 0);
 lean_ctor_release(x_1057, 1);
 x_1132 = x_1057;
} else {
 lean_dec_ref(x_1057);
 x_1132 = lean_box(0);
}
x_1133 = lean_box(1);
if (lean_is_scalar(x_1132)) {
 x_1134 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1134 = x_1132;
}
lean_ctor_set(x_1134, 0, x_1133);
lean_ctor_set(x_1134, 1, x_1131);
return x_1134;
}
}
else
{
lean_object* x_1135; lean_object* x_1136; lean_object* x_1137; lean_object* x_1138; 
lean_dec(x_1);
x_1135 = lean_unsigned_to_nat(16u);
x_1136 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1137 = l_BitVec_setWidth(x_1135, x_1136, x_1052);
lean_dec(x_1052);
x_1138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1138, 0, x_1137);
lean_ctor_set(x_1138, 1, x_1053);
return x_1138;
}
}
}
else
{
uint8_t x_1139; 
lean_dec(x_1);
x_1139 = !lean_is_exclusive(x_791);
if (x_1139 == 0)
{
lean_object* x_1140; lean_object* x_1141; 
x_1140 = lean_ctor_get(x_791, 0);
lean_dec(x_1140);
x_1141 = lean_box(1);
lean_ctor_set(x_791, 0, x_1141);
return x_791;
}
else
{
lean_object* x_1142; lean_object* x_1143; lean_object* x_1144; 
x_1142 = lean_ctor_get(x_791, 1);
lean_inc(x_1142);
lean_dec(x_791);
x_1143 = lean_box(1);
x_1144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1144, 0, x_1143);
lean_ctor_set(x_1144, 1, x_1142);
return x_1144;
}
}
}
else
{
lean_object* x_1145; lean_object* x_1146; lean_object* x_1147; lean_object* x_1148; lean_object* x_1149; lean_object* x_1150; 
x_1145 = lean_unsigned_to_nat(3u);
x_1146 = lean_unsigned_to_nat(0u);
x_1147 = l_BitVec_extractLsb___redArg(x_1145, x_1146, x_1);
lean_dec(x_1);
x_1148 = l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__2;
x_1149 = l_BitVec_append___redArg(x_779, x_1148, x_1147);
lean_dec(x_1147);
x_1150 = l_LeanRV64DExecutable_Functions_pmpReadAddrReg(x_1149, x_776);
lean_dec(x_1149);
return x_1150;
}
}
else
{
lean_object* x_1151; lean_object* x_1152; lean_object* x_1153; lean_object* x_1154; lean_object* x_1155; lean_object* x_1156; 
lean_dec(x_781);
x_1151 = lean_unsigned_to_nat(3u);
x_1152 = lean_unsigned_to_nat(0u);
x_1153 = l_BitVec_extractLsb___redArg(x_1151, x_1152, x_1);
lean_dec(x_1);
x_1154 = l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__1;
x_1155 = l_BitVec_append___redArg(x_779, x_1154, x_1153);
lean_dec(x_1153);
x_1156 = l_LeanRV64DExecutable_Functions_pmpReadAddrReg(x_1155, x_776);
lean_dec(x_1155);
return x_1156;
}
}
else
{
lean_object* x_1157; lean_object* x_1158; lean_object* x_1159; lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; 
lean_dec(x_781);
x_1157 = lean_unsigned_to_nat(3u);
x_1158 = lean_unsigned_to_nat(0u);
x_1159 = l_BitVec_extractLsb___redArg(x_1157, x_1158, x_1);
lean_dec(x_1);
x_1160 = l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__0;
x_1161 = l_BitVec_append___redArg(x_779, x_1160, x_1159);
lean_dec(x_1159);
x_1162 = l_LeanRV64DExecutable_Functions_pmpReadAddrReg(x_1161, x_776);
lean_dec(x_1161);
return x_1162;
}
}
else
{
lean_object* x_1163; lean_object* x_1164; lean_object* x_1165; lean_object* x_1166; lean_object* x_1167; lean_object* x_1168; 
lean_dec(x_781);
x_1163 = lean_unsigned_to_nat(3u);
x_1164 = lean_unsigned_to_nat(0u);
x_1165 = l_BitVec_extractLsb___redArg(x_1163, x_1164, x_1);
lean_dec(x_1);
x_1166 = l_LeanRV64DExecutable_Functions_read__CSR___closed__56;
x_1167 = l_BitVec_append___redArg(x_779, x_1166, x_1165);
lean_dec(x_1165);
x_1168 = l_LeanRV64DExecutable_Functions_pmpReadAddrReg(x_1167, x_776);
lean_dec(x_1167);
return x_1168;
}
}
else
{
lean_object* x_1169; lean_object* x_1170; lean_object* x_1171; lean_object* x_1172; 
x_1169 = lean_unsigned_to_nat(3u);
x_1170 = lean_unsigned_to_nat(0u);
x_1171 = l_BitVec_extractLsb___redArg(x_1169, x_1170, x_1);
lean_dec(x_1);
x_1172 = l_LeanRV64DExecutable_Functions_pmpReadCfgReg(x_1171, x_776);
return x_1172;
}
}
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_write__CSR___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(23u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_write__CSR___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Write to CSR that does not exist: ", 34, 34);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_write__CSR___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(32u);
x_2 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_3 = lean_nat_add(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_write__CSR___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_2 = lean_unsigned_to_nat(32u);
x_3 = lean_nat_add(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_write__CSR___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(64u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_write__CSR___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_LeanRV64DExecutable_Functions_write__CSR___closed__4;
x_2 = l_LeanRV64DExecutable_Functions_xlen;
x_3 = lean_int_dec_eq(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_write__CSR(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; uint8_t x_73; uint8_t x_161; uint8_t x_216; uint8_t x_254; uint8_t x_310; uint8_t x_365; uint8_t x_386; uint8_t x_387; uint8_t x_417; uint8_t x_443; uint8_t x_525; uint8_t x_567; uint8_t x_599; uint8_t x_628; uint8_t x_874; uint8_t x_1176; uint8_t x_1230; uint8_t x_1248; uint8_t x_1378; uint8_t x_1399; uint8_t x_1456; uint8_t x_1512; uint8_t x_1569; lean_object* x_1590; uint8_t x_1591; 
x_4 = lean_unsigned_to_nat(12u);
x_1590 = l_LeanRV64DExecutable_Functions_read__CSR___closed__57;
x_1591 = lean_nat_dec_eq(x_1, x_1590);
if (x_1591 == 0)
{
lean_object* x_1592; uint8_t x_1593; 
x_1592 = l_LeanRV64DExecutable_Functions_read__CSR___closed__84;
x_1593 = lean_nat_dec_eq(x_1, x_1592);
if (x_1593 == 0)
{
x_1569 = x_1593;
goto block_1589;
}
else
{
uint8_t x_1594; 
x_1594 = l_LeanRV64DExecutable_Functions_write__CSR___closed__5;
x_1569 = x_1594;
goto block_1589;
}
}
else
{
uint8_t x_1595; lean_object* x_1596; 
lean_dec(x_1);
x_1595 = 88;
x_1596 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1595, x_3);
if (lean_obj_tag(x_1596) == 0)
{
lean_object* x_1597; lean_object* x_1598; lean_object* x_1599; 
x_1597 = lean_ctor_get(x_1596, 0);
lean_inc(x_1597);
x_1598 = lean_ctor_get(x_1596, 1);
lean_inc(x_1598);
lean_dec(x_1596);
x_1599 = l_LeanRV64DExecutable_Functions_legalize__misa(x_1597, x_2, x_1598);
lean_dec(x_2);
if (lean_obj_tag(x_1599) == 0)
{
lean_object* x_1600; lean_object* x_1601; lean_object* x_1602; lean_object* x_1603; lean_object* x_1604; 
x_1600 = lean_ctor_get(x_1599, 0);
lean_inc(x_1600);
x_1601 = lean_ctor_get(x_1599, 1);
lean_inc(x_1601);
lean_dec(x_1599);
x_1602 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1595, x_1600, x_1601);
x_1603 = lean_ctor_get(x_1602, 1);
lean_inc(x_1603);
lean_dec(x_1602);
x_1604 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1595, x_1603);
return x_1604;
}
else
{
return x_1599;
}
}
else
{
uint8_t x_1605; 
lean_dec(x_2);
x_1605 = !lean_is_exclusive(x_1596);
if (x_1605 == 0)
{
lean_object* x_1606; lean_object* x_1607; 
x_1606 = lean_ctor_get(x_1596, 0);
lean_dec(x_1606);
x_1607 = lean_box(1);
lean_ctor_set(x_1596, 0, x_1607);
return x_1596;
}
else
{
lean_object* x_1608; lean_object* x_1609; lean_object* x_1610; 
x_1608 = lean_ctor_get(x_1596, 1);
lean_inc(x_1608);
lean_dec(x_1596);
x_1609 = lean_box(1);
x_1610 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1610, 0, x_1609);
lean_ctor_set(x_1610, 1, x_1608);
return x_1610;
}
}
}
block_72:
{
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_LeanRV64DExecutable_Functions_read__CSR___closed__1;
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
x_8 = l_LeanRV64DExecutable_Functions_read__CSR___closed__2;
x_9 = l_LeanRV64DExecutable_Functions_write__CSR___closed__0;
x_10 = l_LeanRV64DExecutable_Functions_write__CSR___closed__1;
x_11 = l_Sail_BitVec_toFormatted(x_4, x_1);
x_12 = lean_string_append(x_10, x_11);
lean_dec(x_11);
x_13 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_8, x_9, x_12, x_3);
lean_dec(x_12);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_1);
x_14 = l_LeanRV64DExecutable_Functions_cur__architecture___redArg(x_3);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 1;
x_18 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_17, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_unbox(x_15);
lean_dec(x_15);
x_22 = l_LeanRV64DExecutable_Functions_legalize__satp(x_21, x_19, x_2, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_17, x_23, x_24);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_17, x_26);
return x_27;
}
else
{
return x_22;
}
}
else
{
uint8_t x_28; 
lean_dec(x_15);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_18);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_18, 0);
lean_dec(x_29);
x_30 = lean_box(1);
lean_ctor_set(x_18, 0, x_30);
return x_18;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_18, 1);
lean_inc(x_31);
lean_dec(x_18);
x_32 = lean_box(1);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_2);
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
}
}
else
{
uint8_t x_38; lean_object* x_39; 
lean_dec(x_1);
x_38 = 8;
x_39 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_38, x_3);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_unsigned_to_nat(64u);
x_43 = lean_unsigned_to_nat(63u);
x_44 = lean_unsigned_to_nat(32u);
x_45 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_46 = l_BitVec_setWidth(x_45, x_44, x_2);
lean_dec(x_2);
x_47 = l_Sail_BitVec_updateSubrange(x_42, x_40, x_43, x_44, x_46);
lean_dec(x_46);
lean_dec(x_40);
x_48 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_38, x_47, x_41);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
lean_dec(x_48);
x_50 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_38, x_49);
if (lean_obj_tag(x_50) == 0)
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = l_BitVec_extractLsb___redArg(x_43, x_44, x_52);
lean_dec(x_52);
x_54 = l_BitVec_setWidth(x_44, x_45, x_53);
lean_dec(x_53);
lean_ctor_set(x_50, 0, x_54);
return x_50;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_55 = lean_ctor_get(x_50, 0);
x_56 = lean_ctor_get(x_50, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_50);
x_57 = l_BitVec_extractLsb___redArg(x_43, x_44, x_55);
lean_dec(x_55);
x_58 = l_BitVec_setWidth(x_44, x_45, x_57);
lean_dec(x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_56);
return x_59;
}
}
else
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_50);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_50, 0);
lean_dec(x_61);
x_62 = lean_box(1);
lean_ctor_set(x_50, 0, x_62);
return x_50;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_50, 1);
lean_inc(x_63);
lean_dec(x_50);
x_64 = lean_box(1);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_2);
x_66 = !lean_is_exclusive(x_39);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_39, 0);
lean_dec(x_67);
x_68 = lean_box(1);
lean_ctor_set(x_39, 0, x_68);
return x_39;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_39, 1);
lean_inc(x_69);
lean_dec(x_39);
x_70 = lean_box(1);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
return x_71;
}
}
}
}
block_160:
{
if (x_73 == 0)
{
lean_object* x_74; uint8_t x_75; 
x_74 = l_LeanRV64DExecutable_Functions_read__CSR___closed__5;
x_75 = lean_nat_dec_eq(x_1, x_74);
if (x_75 == 0)
{
lean_object* x_76; uint8_t x_77; 
x_76 = l_LeanRV64DExecutable_Functions_read__CSR___closed__6;
x_77 = lean_nat_dec_eq(x_1, x_76);
if (x_77 == 0)
{
x_5 = x_77;
goto block_72;
}
else
{
uint8_t x_78; 
x_78 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_5 = x_78;
goto block_72;
}
}
else
{
uint8_t x_79; lean_object* x_80; 
lean_dec(x_1);
x_79 = 8;
x_80 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_79, x_3);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_83 = lean_unsigned_to_nat(64u);
x_84 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_85 = lean_unsigned_to_nat(0u);
x_86 = l_Sail_BitVec_updateSubrange(x_83, x_81, x_84, x_85, x_2);
lean_dec(x_2);
lean_dec(x_81);
x_87 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_79, x_86, x_82);
x_88 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
lean_dec(x_87);
x_89 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_79, x_88);
if (lean_obj_tag(x_89) == 0)
{
uint8_t x_90; 
x_90 = !lean_is_exclusive(x_89);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_89, 0);
x_92 = l_BitVec_extractLsb___redArg(x_84, x_85, x_91);
lean_dec(x_91);
lean_ctor_set(x_89, 0, x_92);
return x_89;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_93 = lean_ctor_get(x_89, 0);
x_94 = lean_ctor_get(x_89, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_89);
x_95 = l_BitVec_extractLsb___redArg(x_84, x_85, x_93);
lean_dec(x_93);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_94);
return x_96;
}
}
else
{
uint8_t x_97; 
x_97 = !lean_is_exclusive(x_89);
if (x_97 == 0)
{
lean_object* x_98; lean_object* x_99; 
x_98 = lean_ctor_get(x_89, 0);
lean_dec(x_98);
x_99 = lean_box(1);
lean_ctor_set(x_89, 0, x_99);
return x_89;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_89, 1);
lean_inc(x_100);
lean_dec(x_89);
x_101 = lean_box(1);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_100);
return x_102;
}
}
}
else
{
uint8_t x_103; 
lean_dec(x_2);
x_103 = !lean_is_exclusive(x_80);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; 
x_104 = lean_ctor_get(x_80, 0);
lean_dec(x_104);
x_105 = lean_box(1);
lean_ctor_set(x_80, 0, x_105);
return x_80;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_80, 1);
lean_inc(x_106);
lean_dec(x_80);
x_107 = lean_box(1);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_106);
return x_108;
}
}
}
}
else
{
uint8_t x_109; lean_object* x_110; 
lean_dec(x_1);
x_109 = 16;
x_110 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_109, x_3);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
x_113 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_109, x_112);
if (lean_obj_tag(x_113) == 0)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_113, 1);
lean_inc(x_115);
lean_dec(x_113);
x_116 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_117 = lean_unsigned_to_nat(31u);
x_118 = lean_unsigned_to_nat(0u);
x_119 = lean_unsigned_to_nat(32u);
x_120 = l_LeanRV64DExecutable_Functions_write__CSR___closed__2;
x_121 = lean_unsigned_to_nat(64u);
x_122 = l_BitVec_extractLsb___redArg(x_117, x_118, x_114);
lean_dec(x_114);
x_123 = l_BitVec_append___redArg(x_119, x_2, x_122);
lean_dec(x_122);
lean_dec(x_2);
x_124 = l_BitVec_setWidth(x_120, x_121, x_123);
lean_dec(x_123);
x_125 = l_LeanRV64DExecutable_Functions_legalize__smcntrpmf(x_111, x_124, x_115);
lean_dec(x_124);
lean_dec(x_111);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
x_128 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_109, x_126, x_127);
x_129 = lean_ctor_get(x_128, 1);
lean_inc(x_129);
lean_dec(x_128);
x_130 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_109, x_129);
if (lean_obj_tag(x_130) == 0)
{
uint8_t x_131; 
x_131 = !lean_is_exclusive(x_130);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_132 = lean_ctor_get(x_130, 0);
x_133 = lean_unsigned_to_nat(63u);
x_134 = l_BitVec_extractLsb___redArg(x_133, x_119, x_132);
lean_dec(x_132);
x_135 = l_BitVec_setWidth(x_119, x_116, x_134);
lean_dec(x_134);
lean_ctor_set(x_130, 0, x_135);
return x_130;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_136 = lean_ctor_get(x_130, 0);
x_137 = lean_ctor_get(x_130, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_130);
x_138 = lean_unsigned_to_nat(63u);
x_139 = l_BitVec_extractLsb___redArg(x_138, x_119, x_136);
lean_dec(x_136);
x_140 = l_BitVec_setWidth(x_119, x_116, x_139);
lean_dec(x_139);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_137);
return x_141;
}
}
else
{
uint8_t x_142; 
x_142 = !lean_is_exclusive(x_130);
if (x_142 == 0)
{
lean_object* x_143; lean_object* x_144; 
x_143 = lean_ctor_get(x_130, 0);
lean_dec(x_143);
x_144 = lean_box(1);
lean_ctor_set(x_130, 0, x_144);
return x_130;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_145 = lean_ctor_get(x_130, 1);
lean_inc(x_145);
lean_dec(x_130);
x_146 = lean_box(1);
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_146);
lean_ctor_set(x_147, 1, x_145);
return x_147;
}
}
}
else
{
return x_125;
}
}
else
{
uint8_t x_148; 
lean_dec(x_111);
lean_dec(x_2);
x_148 = !lean_is_exclusive(x_113);
if (x_148 == 0)
{
lean_object* x_149; lean_object* x_150; 
x_149 = lean_ctor_get(x_113, 0);
lean_dec(x_149);
x_150 = lean_box(1);
lean_ctor_set(x_113, 0, x_150);
return x_113;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_151 = lean_ctor_get(x_113, 1);
lean_inc(x_151);
lean_dec(x_113);
x_152 = lean_box(1);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_151);
return x_153;
}
}
}
else
{
uint8_t x_154; 
lean_dec(x_2);
x_154 = !lean_is_exclusive(x_110);
if (x_154 == 0)
{
lean_object* x_155; lean_object* x_156; 
x_155 = lean_ctor_get(x_110, 0);
lean_dec(x_155);
x_156 = lean_box(1);
lean_ctor_set(x_110, 0, x_156);
return x_110;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_157 = lean_ctor_get(x_110, 1);
lean_inc(x_157);
lean_dec(x_110);
x_158 = lean_box(1);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_157);
return x_159;
}
}
}
}
block_215:
{
if (x_161 == 0)
{
lean_object* x_162; uint8_t x_163; 
x_162 = l_LeanRV64DExecutable_Functions_read__CSR___closed__13;
x_163 = lean_nat_dec_eq(x_1, x_162);
if (x_163 == 0)
{
x_73 = x_163;
goto block_160;
}
else
{
uint8_t x_164; 
x_164 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_73 = x_164;
goto block_160;
}
}
else
{
uint8_t x_165; lean_object* x_166; 
lean_dec(x_1);
x_165 = 16;
x_166 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_165, x_3);
if (lean_obj_tag(x_166) == 0)
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_167 = lean_ctor_get(x_166, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_166, 1);
lean_inc(x_168);
lean_dec(x_166);
x_169 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_165, x_168);
if (lean_obj_tag(x_169) == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_169, 1);
lean_inc(x_171);
lean_dec(x_169);
x_172 = lean_unsigned_to_nat(63u);
x_173 = lean_unsigned_to_nat(32u);
x_174 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_175 = l_LeanRV64DExecutable_Functions_write__CSR___closed__3;
x_176 = lean_unsigned_to_nat(64u);
x_177 = l_BitVec_extractLsb___redArg(x_172, x_173, x_170);
lean_dec(x_170);
x_178 = l_BitVec_append___redArg(x_174, x_177, x_2);
lean_dec(x_2);
lean_dec(x_177);
x_179 = l_BitVec_setWidth(x_175, x_176, x_178);
lean_dec(x_178);
x_180 = l_LeanRV64DExecutable_Functions_legalize__smcntrpmf(x_167, x_179, x_171);
lean_dec(x_179);
lean_dec(x_167);
if (lean_obj_tag(x_180) == 0)
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_181 = lean_ctor_get(x_180, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_180, 1);
lean_inc(x_182);
lean_dec(x_180);
x_183 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_165, x_181, x_182);
x_184 = lean_ctor_get(x_183, 1);
lean_inc(x_184);
lean_dec(x_183);
x_185 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_165, x_184);
if (lean_obj_tag(x_185) == 0)
{
uint8_t x_186; 
x_186 = !lean_is_exclusive(x_185);
if (x_186 == 0)
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_187 = lean_ctor_get(x_185, 0);
x_188 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_189 = lean_unsigned_to_nat(0u);
x_190 = l_BitVec_extractLsb___redArg(x_188, x_189, x_187);
lean_dec(x_187);
lean_ctor_set(x_185, 0, x_190);
return x_185;
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_191 = lean_ctor_get(x_185, 0);
x_192 = lean_ctor_get(x_185, 1);
lean_inc(x_192);
lean_inc(x_191);
lean_dec(x_185);
x_193 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_194 = lean_unsigned_to_nat(0u);
x_195 = l_BitVec_extractLsb___redArg(x_193, x_194, x_191);
lean_dec(x_191);
x_196 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_192);
return x_196;
}
}
else
{
uint8_t x_197; 
x_197 = !lean_is_exclusive(x_185);
if (x_197 == 0)
{
lean_object* x_198; lean_object* x_199; 
x_198 = lean_ctor_get(x_185, 0);
lean_dec(x_198);
x_199 = lean_box(1);
lean_ctor_set(x_185, 0, x_199);
return x_185;
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_200 = lean_ctor_get(x_185, 1);
lean_inc(x_200);
lean_dec(x_185);
x_201 = lean_box(1);
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_200);
return x_202;
}
}
}
else
{
return x_180;
}
}
else
{
uint8_t x_203; 
lean_dec(x_167);
lean_dec(x_2);
x_203 = !lean_is_exclusive(x_169);
if (x_203 == 0)
{
lean_object* x_204; lean_object* x_205; 
x_204 = lean_ctor_get(x_169, 0);
lean_dec(x_204);
x_205 = lean_box(1);
lean_ctor_set(x_169, 0, x_205);
return x_169;
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_206 = lean_ctor_get(x_169, 1);
lean_inc(x_206);
lean_dec(x_169);
x_207 = lean_box(1);
x_208 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set(x_208, 1, x_206);
return x_208;
}
}
}
else
{
uint8_t x_209; 
lean_dec(x_2);
x_209 = !lean_is_exclusive(x_166);
if (x_209 == 0)
{
lean_object* x_210; lean_object* x_211; 
x_210 = lean_ctor_get(x_166, 0);
lean_dec(x_210);
x_211 = lean_box(1);
lean_ctor_set(x_166, 0, x_211);
return x_166;
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_212 = lean_ctor_get(x_166, 1);
lean_inc(x_212);
lean_dec(x_166);
x_213 = lean_box(1);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_212);
return x_214;
}
}
}
}
block_253:
{
if (x_216 == 0)
{
lean_object* x_217; uint8_t x_218; 
x_217 = l_LeanRV64DExecutable_Functions_read__CSR___closed__12;
x_218 = lean_nat_dec_eq(x_1, x_217);
if (x_218 == 0)
{
x_161 = x_218;
goto block_215;
}
else
{
uint8_t x_219; 
x_219 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_161 = x_219;
goto block_215;
}
}
else
{
uint8_t x_220; lean_object* x_221; 
lean_dec(x_1);
x_220 = 16;
x_221 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_220, x_3);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_221, 1);
lean_inc(x_223);
lean_dec(x_221);
x_224 = l_LeanRV64DExecutable_Functions_legalize__smcntrpmf(x_222, x_2, x_223);
lean_dec(x_2);
lean_dec(x_222);
if (lean_obj_tag(x_224) == 0)
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_225 = lean_ctor_get(x_224, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_224, 1);
lean_inc(x_226);
lean_dec(x_224);
x_227 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_220, x_225, x_226);
x_228 = lean_ctor_get(x_227, 1);
lean_inc(x_228);
lean_dec(x_227);
x_229 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_220, x_228);
if (lean_obj_tag(x_229) == 0)
{
uint8_t x_230; 
x_230 = !lean_is_exclusive(x_229);
if (x_230 == 0)
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
x_231 = lean_ctor_get(x_229, 0);
x_232 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_233 = lean_unsigned_to_nat(0u);
x_234 = l_BitVec_extractLsb___redArg(x_232, x_233, x_231);
lean_dec(x_231);
lean_ctor_set(x_229, 0, x_234);
return x_229;
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; 
x_235 = lean_ctor_get(x_229, 0);
x_236 = lean_ctor_get(x_229, 1);
lean_inc(x_236);
lean_inc(x_235);
lean_dec(x_229);
x_237 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_238 = lean_unsigned_to_nat(0u);
x_239 = l_BitVec_extractLsb___redArg(x_237, x_238, x_235);
lean_dec(x_235);
x_240 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_240, 0, x_239);
lean_ctor_set(x_240, 1, x_236);
return x_240;
}
}
else
{
uint8_t x_241; 
x_241 = !lean_is_exclusive(x_229);
if (x_241 == 0)
{
lean_object* x_242; lean_object* x_243; 
x_242 = lean_ctor_get(x_229, 0);
lean_dec(x_242);
x_243 = lean_box(1);
lean_ctor_set(x_229, 0, x_243);
return x_229;
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_244 = lean_ctor_get(x_229, 1);
lean_inc(x_244);
lean_dec(x_229);
x_245 = lean_box(1);
x_246 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_246, 0, x_245);
lean_ctor_set(x_246, 1, x_244);
return x_246;
}
}
}
else
{
return x_224;
}
}
else
{
uint8_t x_247; 
lean_dec(x_2);
x_247 = !lean_is_exclusive(x_221);
if (x_247 == 0)
{
lean_object* x_248; lean_object* x_249; 
x_248 = lean_ctor_get(x_221, 0);
lean_dec(x_248);
x_249 = lean_box(1);
lean_ctor_set(x_221, 0, x_249);
return x_221;
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; 
x_250 = lean_ctor_get(x_221, 1);
lean_inc(x_250);
lean_dec(x_221);
x_251 = lean_box(1);
x_252 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_252, 0, x_251);
lean_ctor_set(x_252, 1, x_250);
return x_252;
}
}
}
}
block_309:
{
if (x_254 == 0)
{
lean_object* x_255; uint8_t x_256; 
x_255 = l_LeanRV64DExecutable_Functions_read__CSR___closed__12;
x_256 = lean_nat_dec_eq(x_1, x_255);
if (x_256 == 0)
{
x_216 = x_256;
goto block_253;
}
else
{
uint8_t x_257; 
x_257 = l_LeanRV64DExecutable_Functions_write__CSR___closed__5;
x_216 = x_257;
goto block_253;
}
}
else
{
uint8_t x_258; lean_object* x_259; 
lean_dec(x_1);
x_258 = 17;
x_259 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_258, x_3);
if (lean_obj_tag(x_259) == 0)
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_260 = lean_ctor_get(x_259, 0);
lean_inc(x_260);
x_261 = lean_ctor_get(x_259, 1);
lean_inc(x_261);
lean_dec(x_259);
x_262 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_258, x_261);
if (lean_obj_tag(x_262) == 0)
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_263 = lean_ctor_get(x_262, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_262, 1);
lean_inc(x_264);
lean_dec(x_262);
x_265 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_266 = lean_unsigned_to_nat(31u);
x_267 = lean_unsigned_to_nat(0u);
x_268 = lean_unsigned_to_nat(32u);
x_269 = l_LeanRV64DExecutable_Functions_write__CSR___closed__2;
x_270 = lean_unsigned_to_nat(64u);
x_271 = l_BitVec_extractLsb___redArg(x_266, x_267, x_263);
lean_dec(x_263);
x_272 = l_BitVec_append___redArg(x_268, x_2, x_271);
lean_dec(x_271);
lean_dec(x_2);
x_273 = l_BitVec_setWidth(x_269, x_270, x_272);
lean_dec(x_272);
x_274 = l_LeanRV64DExecutable_Functions_legalize__smcntrpmf(x_260, x_273, x_264);
lean_dec(x_273);
lean_dec(x_260);
if (lean_obj_tag(x_274) == 0)
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_275 = lean_ctor_get(x_274, 0);
lean_inc(x_275);
x_276 = lean_ctor_get(x_274, 1);
lean_inc(x_276);
lean_dec(x_274);
x_277 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_258, x_275, x_276);
x_278 = lean_ctor_get(x_277, 1);
lean_inc(x_278);
lean_dec(x_277);
x_279 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_258, x_278);
if (lean_obj_tag(x_279) == 0)
{
uint8_t x_280; 
x_280 = !lean_is_exclusive(x_279);
if (x_280 == 0)
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; 
x_281 = lean_ctor_get(x_279, 0);
x_282 = lean_unsigned_to_nat(63u);
x_283 = l_BitVec_extractLsb___redArg(x_282, x_268, x_281);
lean_dec(x_281);
x_284 = l_BitVec_setWidth(x_268, x_265, x_283);
lean_dec(x_283);
lean_ctor_set(x_279, 0, x_284);
return x_279;
}
else
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
x_285 = lean_ctor_get(x_279, 0);
x_286 = lean_ctor_get(x_279, 1);
lean_inc(x_286);
lean_inc(x_285);
lean_dec(x_279);
x_287 = lean_unsigned_to_nat(63u);
x_288 = l_BitVec_extractLsb___redArg(x_287, x_268, x_285);
lean_dec(x_285);
x_289 = l_BitVec_setWidth(x_268, x_265, x_288);
lean_dec(x_288);
x_290 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_286);
return x_290;
}
}
else
{
uint8_t x_291; 
x_291 = !lean_is_exclusive(x_279);
if (x_291 == 0)
{
lean_object* x_292; lean_object* x_293; 
x_292 = lean_ctor_get(x_279, 0);
lean_dec(x_292);
x_293 = lean_box(1);
lean_ctor_set(x_279, 0, x_293);
return x_279;
}
else
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; 
x_294 = lean_ctor_get(x_279, 1);
lean_inc(x_294);
lean_dec(x_279);
x_295 = lean_box(1);
x_296 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_296, 0, x_295);
lean_ctor_set(x_296, 1, x_294);
return x_296;
}
}
}
else
{
return x_274;
}
}
else
{
uint8_t x_297; 
lean_dec(x_260);
lean_dec(x_2);
x_297 = !lean_is_exclusive(x_262);
if (x_297 == 0)
{
lean_object* x_298; lean_object* x_299; 
x_298 = lean_ctor_get(x_262, 0);
lean_dec(x_298);
x_299 = lean_box(1);
lean_ctor_set(x_262, 0, x_299);
return x_262;
}
else
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; 
x_300 = lean_ctor_get(x_262, 1);
lean_inc(x_300);
lean_dec(x_262);
x_301 = lean_box(1);
x_302 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_302, 0, x_301);
lean_ctor_set(x_302, 1, x_300);
return x_302;
}
}
}
else
{
uint8_t x_303; 
lean_dec(x_2);
x_303 = !lean_is_exclusive(x_259);
if (x_303 == 0)
{
lean_object* x_304; lean_object* x_305; 
x_304 = lean_ctor_get(x_259, 0);
lean_dec(x_304);
x_305 = lean_box(1);
lean_ctor_set(x_259, 0, x_305);
return x_259;
}
else
{
lean_object* x_306; lean_object* x_307; lean_object* x_308; 
x_306 = lean_ctor_get(x_259, 1);
lean_inc(x_306);
lean_dec(x_259);
x_307 = lean_box(1);
x_308 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_308, 0, x_307);
lean_ctor_set(x_308, 1, x_306);
return x_308;
}
}
}
}
block_364:
{
if (x_310 == 0)
{
lean_object* x_311; uint8_t x_312; 
x_311 = l_LeanRV64DExecutable_Functions_read__CSR___closed__15;
x_312 = lean_nat_dec_eq(x_1, x_311);
if (x_312 == 0)
{
x_254 = x_312;
goto block_309;
}
else
{
uint8_t x_313; 
x_313 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_254 = x_313;
goto block_309;
}
}
else
{
uint8_t x_314; lean_object* x_315; 
lean_dec(x_1);
x_314 = 17;
x_315 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_314, x_3);
if (lean_obj_tag(x_315) == 0)
{
lean_object* x_316; lean_object* x_317; lean_object* x_318; 
x_316 = lean_ctor_get(x_315, 0);
lean_inc(x_316);
x_317 = lean_ctor_get(x_315, 1);
lean_inc(x_317);
lean_dec(x_315);
x_318 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_314, x_317);
if (lean_obj_tag(x_318) == 0)
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; 
x_319 = lean_ctor_get(x_318, 0);
lean_inc(x_319);
x_320 = lean_ctor_get(x_318, 1);
lean_inc(x_320);
lean_dec(x_318);
x_321 = lean_unsigned_to_nat(63u);
x_322 = lean_unsigned_to_nat(32u);
x_323 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_324 = l_LeanRV64DExecutable_Functions_write__CSR___closed__3;
x_325 = lean_unsigned_to_nat(64u);
x_326 = l_BitVec_extractLsb___redArg(x_321, x_322, x_319);
lean_dec(x_319);
x_327 = l_BitVec_append___redArg(x_323, x_326, x_2);
lean_dec(x_2);
lean_dec(x_326);
x_328 = l_BitVec_setWidth(x_324, x_325, x_327);
lean_dec(x_327);
x_329 = l_LeanRV64DExecutable_Functions_legalize__smcntrpmf(x_316, x_328, x_320);
lean_dec(x_328);
lean_dec(x_316);
if (lean_obj_tag(x_329) == 0)
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; 
x_330 = lean_ctor_get(x_329, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_329, 1);
lean_inc(x_331);
lean_dec(x_329);
x_332 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_314, x_330, x_331);
x_333 = lean_ctor_get(x_332, 1);
lean_inc(x_333);
lean_dec(x_332);
x_334 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_314, x_333);
if (lean_obj_tag(x_334) == 0)
{
uint8_t x_335; 
x_335 = !lean_is_exclusive(x_334);
if (x_335 == 0)
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_336 = lean_ctor_get(x_334, 0);
x_337 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_338 = lean_unsigned_to_nat(0u);
x_339 = l_BitVec_extractLsb___redArg(x_337, x_338, x_336);
lean_dec(x_336);
lean_ctor_set(x_334, 0, x_339);
return x_334;
}
else
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; 
x_340 = lean_ctor_get(x_334, 0);
x_341 = lean_ctor_get(x_334, 1);
lean_inc(x_341);
lean_inc(x_340);
lean_dec(x_334);
x_342 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_343 = lean_unsigned_to_nat(0u);
x_344 = l_BitVec_extractLsb___redArg(x_342, x_343, x_340);
lean_dec(x_340);
x_345 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_345, 0, x_344);
lean_ctor_set(x_345, 1, x_341);
return x_345;
}
}
else
{
uint8_t x_346; 
x_346 = !lean_is_exclusive(x_334);
if (x_346 == 0)
{
lean_object* x_347; lean_object* x_348; 
x_347 = lean_ctor_get(x_334, 0);
lean_dec(x_347);
x_348 = lean_box(1);
lean_ctor_set(x_334, 0, x_348);
return x_334;
}
else
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; 
x_349 = lean_ctor_get(x_334, 1);
lean_inc(x_349);
lean_dec(x_334);
x_350 = lean_box(1);
x_351 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_351, 0, x_350);
lean_ctor_set(x_351, 1, x_349);
return x_351;
}
}
}
else
{
return x_329;
}
}
else
{
uint8_t x_352; 
lean_dec(x_316);
lean_dec(x_2);
x_352 = !lean_is_exclusive(x_318);
if (x_352 == 0)
{
lean_object* x_353; lean_object* x_354; 
x_353 = lean_ctor_get(x_318, 0);
lean_dec(x_353);
x_354 = lean_box(1);
lean_ctor_set(x_318, 0, x_354);
return x_318;
}
else
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; 
x_355 = lean_ctor_get(x_318, 1);
lean_inc(x_355);
lean_dec(x_318);
x_356 = lean_box(1);
x_357 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_357, 0, x_356);
lean_ctor_set(x_357, 1, x_355);
return x_357;
}
}
}
else
{
uint8_t x_358; 
lean_dec(x_2);
x_358 = !lean_is_exclusive(x_315);
if (x_358 == 0)
{
lean_object* x_359; lean_object* x_360; 
x_359 = lean_ctor_get(x_315, 0);
lean_dec(x_359);
x_360 = lean_box(1);
lean_ctor_set(x_315, 0, x_360);
return x_315;
}
else
{
lean_object* x_361; lean_object* x_362; lean_object* x_363; 
x_361 = lean_ctor_get(x_315, 1);
lean_inc(x_361);
lean_dec(x_315);
x_362 = lean_box(1);
x_363 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_363, 0, x_362);
lean_ctor_set(x_363, 1, x_361);
return x_363;
}
}
}
}
block_385:
{
if (x_365 == 0)
{
lean_object* x_366; uint8_t x_367; 
x_366 = l_LeanRV64DExecutable_Functions_read__CSR___closed__14;
x_367 = lean_nat_dec_eq(x_1, x_366);
if (x_367 == 0)
{
x_310 = x_367;
goto block_364;
}
else
{
uint8_t x_368; 
x_368 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_310 = x_368;
goto block_364;
}
}
else
{
uint8_t x_369; lean_object* x_370; 
lean_dec(x_1);
x_369 = 17;
x_370 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_369, x_3);
if (lean_obj_tag(x_370) == 0)
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; 
x_371 = lean_ctor_get(x_370, 0);
lean_inc(x_371);
x_372 = lean_ctor_get(x_370, 1);
lean_inc(x_372);
lean_dec(x_370);
x_373 = l_LeanRV64DExecutable_Functions_legalize__smcntrpmf(x_371, x_2, x_372);
lean_dec(x_2);
lean_dec(x_371);
if (lean_obj_tag(x_373) == 0)
{
lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; 
x_374 = lean_ctor_get(x_373, 0);
lean_inc(x_374);
x_375 = lean_ctor_get(x_373, 1);
lean_inc(x_375);
lean_dec(x_373);
x_376 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_369, x_374, x_375);
x_377 = lean_ctor_get(x_376, 1);
lean_inc(x_377);
lean_dec(x_376);
x_378 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_369, x_377);
return x_378;
}
else
{
return x_373;
}
}
else
{
uint8_t x_379; 
lean_dec(x_2);
x_379 = !lean_is_exclusive(x_370);
if (x_379 == 0)
{
lean_object* x_380; lean_object* x_381; 
x_380 = lean_ctor_get(x_370, 0);
lean_dec(x_380);
x_381 = lean_box(1);
lean_ctor_set(x_370, 0, x_381);
return x_370;
}
else
{
lean_object* x_382; lean_object* x_383; lean_object* x_384; 
x_382 = lean_ctor_get(x_370, 1);
lean_inc(x_382);
lean_dec(x_370);
x_383 = lean_box(1);
x_384 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_384, 0, x_383);
lean_ctor_set(x_384, 1, x_382);
return x_384;
}
}
}
}
block_416:
{
if (x_387 == 0)
{
lean_object* x_388; uint8_t x_389; 
x_388 = l_LeanRV64DExecutable_Functions_read__CSR___closed__14;
x_389 = lean_nat_dec_eq(x_1, x_388);
if (x_389 == 0)
{
x_365 = x_389;
goto block_385;
}
else
{
uint8_t x_390; 
x_390 = l_LeanRV64DExecutable_Functions_write__CSR___closed__5;
x_365 = x_390;
goto block_385;
}
}
else
{
uint8_t x_391; lean_object* x_392; 
lean_dec(x_1);
x_391 = 70;
x_392 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_391, x_3);
if (lean_obj_tag(x_392) == 0)
{
lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; uint8_t x_403; lean_object* x_404; lean_object* x_405; uint8_t x_406; 
x_393 = lean_ctor_get(x_392, 0);
lean_inc(x_393);
x_394 = lean_ctor_get(x_392, 1);
lean_inc(x_394);
lean_dec(x_392);
x_395 = lean_unsigned_to_nat(64u);
x_396 = lean_unsigned_to_nat(63u);
x_397 = lean_unsigned_to_nat(32u);
x_398 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_399 = l_BitVec_setWidth(x_398, x_397, x_2);
x_400 = l_Sail_BitVec_updateSubrange(x_395, x_393, x_396, x_397, x_399);
lean_dec(x_399);
lean_dec(x_393);
x_401 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_391, x_400, x_394);
x_402 = lean_ctor_get(x_401, 1);
lean_inc(x_402);
lean_dec(x_401);
x_403 = 69;
x_404 = lean_box(x_386);
x_405 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_403, x_404, x_402);
x_406 = !lean_is_exclusive(x_405);
if (x_406 == 0)
{
lean_object* x_407; 
x_407 = lean_ctor_get(x_405, 0);
lean_dec(x_407);
lean_ctor_set(x_405, 0, x_2);
return x_405;
}
else
{
lean_object* x_408; lean_object* x_409; 
x_408 = lean_ctor_get(x_405, 1);
lean_inc(x_408);
lean_dec(x_405);
x_409 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_409, 0, x_2);
lean_ctor_set(x_409, 1, x_408);
return x_409;
}
}
else
{
uint8_t x_410; 
lean_dec(x_2);
x_410 = !lean_is_exclusive(x_392);
if (x_410 == 0)
{
lean_object* x_411; lean_object* x_412; 
x_411 = lean_ctor_get(x_392, 0);
lean_dec(x_411);
x_412 = lean_box(1);
lean_ctor_set(x_392, 0, x_412);
return x_392;
}
else
{
lean_object* x_413; lean_object* x_414; lean_object* x_415; 
x_413 = lean_ctor_get(x_392, 1);
lean_inc(x_413);
lean_dec(x_392);
x_414 = lean_box(1);
x_415 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_415, 0, x_414);
lean_ctor_set(x_415, 1, x_413);
return x_415;
}
}
}
}
block_442:
{
if (x_417 == 0)
{
lean_object* x_418; uint8_t x_419; 
x_418 = l_LeanRV64DExecutable_Functions_read__CSR___closed__16;
x_419 = lean_nat_dec_eq(x_1, x_418);
if (x_419 == 0)
{
x_386 = x_417;
x_387 = x_419;
goto block_416;
}
else
{
uint8_t x_420; 
x_420 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_386 = x_417;
x_387 = x_420;
goto block_416;
}
}
else
{
uint8_t x_421; lean_object* x_422; 
lean_dec(x_1);
x_421 = 72;
x_422 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_421, x_3);
if (lean_obj_tag(x_422) == 0)
{
lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; uint8_t x_432; 
x_423 = lean_ctor_get(x_422, 0);
lean_inc(x_423);
x_424 = lean_ctor_get(x_422, 1);
lean_inc(x_424);
lean_dec(x_422);
x_425 = lean_unsigned_to_nat(64u);
x_426 = lean_unsigned_to_nat(63u);
x_427 = lean_unsigned_to_nat(32u);
x_428 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_429 = l_BitVec_setWidth(x_428, x_427, x_2);
x_430 = l_Sail_BitVec_updateSubrange(x_425, x_423, x_426, x_427, x_429);
lean_dec(x_429);
lean_dec(x_423);
x_431 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_421, x_430, x_424);
x_432 = !lean_is_exclusive(x_431);
if (x_432 == 0)
{
lean_object* x_433; 
x_433 = lean_ctor_get(x_431, 0);
lean_dec(x_433);
lean_ctor_set(x_431, 0, x_2);
return x_431;
}
else
{
lean_object* x_434; lean_object* x_435; 
x_434 = lean_ctor_get(x_431, 1);
lean_inc(x_434);
lean_dec(x_431);
x_435 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_435, 0, x_2);
lean_ctor_set(x_435, 1, x_434);
return x_435;
}
}
else
{
uint8_t x_436; 
lean_dec(x_2);
x_436 = !lean_is_exclusive(x_422);
if (x_436 == 0)
{
lean_object* x_437; lean_object* x_438; 
x_437 = lean_ctor_get(x_422, 0);
lean_dec(x_437);
x_438 = lean_box(1);
lean_ctor_set(x_422, 0, x_438);
return x_422;
}
else
{
lean_object* x_439; lean_object* x_440; lean_object* x_441; 
x_439 = lean_ctor_get(x_422, 1);
lean_inc(x_439);
lean_dec(x_422);
x_440 = lean_box(1);
x_441 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_441, 0, x_440);
lean_ctor_set(x_441, 1, x_439);
return x_441;
}
}
}
}
block_524:
{
if (x_443 == 0)
{
lean_object* x_444; uint8_t x_445; 
x_444 = l_LeanRV64DExecutable_Functions_read__CSR___closed__23;
x_445 = lean_nat_dec_eq(x_1, x_444);
if (x_445 == 0)
{
lean_object* x_446; uint8_t x_447; 
x_446 = l_LeanRV64DExecutable_Functions_read__CSR___closed__17;
x_447 = lean_nat_dec_eq(x_1, x_446);
if (x_447 == 0)
{
lean_object* x_448; uint8_t x_449; 
x_448 = l_LeanRV64DExecutable_Functions_read__CSR___closed__18;
x_449 = lean_nat_dec_eq(x_1, x_448);
if (x_449 == 0)
{
lean_object* x_450; uint8_t x_451; 
x_450 = l_LeanRV64DExecutable_Functions_read__CSR___closed__19;
x_451 = lean_nat_dec_eq(x_1, x_450);
if (x_451 == 0)
{
x_417 = x_451;
goto block_442;
}
else
{
uint8_t x_452; 
x_452 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_417 = x_452;
goto block_442;
}
}
else
{
uint8_t x_453; lean_object* x_454; 
lean_dec(x_1);
x_453 = 70;
x_454 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_453, x_3);
if (lean_obj_tag(x_454) == 0)
{
lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; uint8_t x_463; lean_object* x_464; lean_object* x_465; uint8_t x_466; 
x_455 = lean_ctor_get(x_454, 0);
lean_inc(x_455);
x_456 = lean_ctor_get(x_454, 1);
lean_inc(x_456);
lean_dec(x_454);
x_457 = lean_unsigned_to_nat(64u);
x_458 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_459 = lean_unsigned_to_nat(0u);
x_460 = l_Sail_BitVec_updateSubrange(x_457, x_455, x_458, x_459, x_2);
lean_dec(x_455);
x_461 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_453, x_460, x_456);
x_462 = lean_ctor_get(x_461, 1);
lean_inc(x_462);
lean_dec(x_461);
x_463 = 69;
x_464 = lean_box(x_447);
x_465 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_463, x_464, x_462);
x_466 = !lean_is_exclusive(x_465);
if (x_466 == 0)
{
lean_object* x_467; 
x_467 = lean_ctor_get(x_465, 0);
lean_dec(x_467);
lean_ctor_set(x_465, 0, x_2);
return x_465;
}
else
{
lean_object* x_468; lean_object* x_469; 
x_468 = lean_ctor_get(x_465, 1);
lean_inc(x_468);
lean_dec(x_465);
x_469 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_469, 0, x_2);
lean_ctor_set(x_469, 1, x_468);
return x_469;
}
}
else
{
uint8_t x_470; 
lean_dec(x_2);
x_470 = !lean_is_exclusive(x_454);
if (x_470 == 0)
{
lean_object* x_471; lean_object* x_472; 
x_471 = lean_ctor_get(x_454, 0);
lean_dec(x_471);
x_472 = lean_box(1);
lean_ctor_set(x_454, 0, x_472);
return x_454;
}
else
{
lean_object* x_473; lean_object* x_474; lean_object* x_475; 
x_473 = lean_ctor_get(x_454, 1);
lean_inc(x_473);
lean_dec(x_454);
x_474 = lean_box(1);
x_475 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_475, 0, x_474);
lean_ctor_set(x_475, 1, x_473);
return x_475;
}
}
}
}
else
{
uint8_t x_476; lean_object* x_477; 
lean_dec(x_1);
x_476 = 72;
x_477 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_476, x_3);
if (lean_obj_tag(x_477) == 0)
{
lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; uint8_t x_485; 
x_478 = lean_ctor_get(x_477, 0);
lean_inc(x_478);
x_479 = lean_ctor_get(x_477, 1);
lean_inc(x_479);
lean_dec(x_477);
x_480 = lean_unsigned_to_nat(64u);
x_481 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_482 = lean_unsigned_to_nat(0u);
x_483 = l_Sail_BitVec_updateSubrange(x_480, x_478, x_481, x_482, x_2);
lean_dec(x_478);
x_484 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_476, x_483, x_479);
x_485 = !lean_is_exclusive(x_484);
if (x_485 == 0)
{
lean_object* x_486; 
x_486 = lean_ctor_get(x_484, 0);
lean_dec(x_486);
lean_ctor_set(x_484, 0, x_2);
return x_484;
}
else
{
lean_object* x_487; lean_object* x_488; 
x_487 = lean_ctor_get(x_484, 1);
lean_inc(x_487);
lean_dec(x_484);
x_488 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_488, 0, x_2);
lean_ctor_set(x_488, 1, x_487);
return x_488;
}
}
else
{
uint8_t x_489; 
lean_dec(x_2);
x_489 = !lean_is_exclusive(x_477);
if (x_489 == 0)
{
lean_object* x_490; lean_object* x_491; 
x_490 = lean_ctor_get(x_477, 0);
lean_dec(x_490);
x_491 = lean_box(1);
lean_ctor_set(x_477, 0, x_491);
return x_477;
}
else
{
lean_object* x_492; lean_object* x_493; lean_object* x_494; 
x_492 = lean_ctor_get(x_477, 1);
lean_inc(x_492);
lean_dec(x_477);
x_493 = lean_box(1);
x_494 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_494, 0, x_493);
lean_ctor_set(x_494, 1, x_492);
return x_494;
}
}
}
}
else
{
lean_object* x_495; lean_object* x_496; 
lean_dec(x_2);
lean_dec(x_1);
x_495 = lean_unsigned_to_nat(0u);
x_496 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_496, 0, x_495);
lean_ctor_set(x_496, 1, x_3);
return x_496;
}
}
else
{
lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; 
x_497 = lean_unsigned_to_nat(4u);
x_498 = lean_unsigned_to_nat(0u);
x_499 = l_BitVec_extractLsb___redArg(x_497, x_498, x_1);
lean_dec(x_1);
x_500 = l_LeanRV64DExecutable_Functions_hpmidx__from__bits(x_499, x_3);
if (lean_obj_tag(x_500) == 0)
{
lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; 
x_501 = lean_ctor_get(x_500, 0);
lean_inc(x_501);
x_502 = lean_ctor_get(x_500, 1);
lean_inc(x_502);
lean_dec(x_500);
x_503 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_504 = lean_unsigned_to_nat(32u);
x_505 = l_BitVec_setWidth(x_503, x_504, x_2);
lean_dec(x_2);
x_506 = l_LeanRV64DExecutable_Functions_write__mhpmeventh(x_501, x_505, x_502);
lean_dec(x_505);
if (lean_obj_tag(x_506) == 0)
{
lean_object* x_507; lean_object* x_508; 
x_507 = lean_ctor_get(x_506, 1);
lean_inc(x_507);
lean_dec(x_506);
x_508 = l_LeanRV64DExecutable_Functions_read__mhpmeventh(x_501, x_507);
lean_dec(x_501);
if (lean_obj_tag(x_508) == 0)
{
uint8_t x_509; 
x_509 = !lean_is_exclusive(x_508);
if (x_509 == 0)
{
lean_object* x_510; lean_object* x_511; 
x_510 = lean_ctor_get(x_508, 0);
x_511 = l_BitVec_setWidth(x_504, x_503, x_510);
lean_dec(x_510);
lean_ctor_set(x_508, 0, x_511);
return x_508;
}
else
{
lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; 
x_512 = lean_ctor_get(x_508, 0);
x_513 = lean_ctor_get(x_508, 1);
lean_inc(x_513);
lean_inc(x_512);
lean_dec(x_508);
x_514 = l_BitVec_setWidth(x_504, x_503, x_512);
lean_dec(x_512);
x_515 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_515, 0, x_514);
lean_ctor_set(x_515, 1, x_513);
return x_515;
}
}
else
{
return x_508;
}
}
else
{
uint8_t x_516; 
lean_dec(x_501);
x_516 = !lean_is_exclusive(x_506);
if (x_516 == 0)
{
return x_506;
}
else
{
lean_object* x_517; lean_object* x_518; lean_object* x_519; 
x_517 = lean_ctor_get(x_506, 0);
x_518 = lean_ctor_get(x_506, 1);
lean_inc(x_518);
lean_inc(x_517);
lean_dec(x_506);
x_519 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_519, 0, x_517);
lean_ctor_set(x_519, 1, x_518);
return x_519;
}
}
}
else
{
uint8_t x_520; 
lean_dec(x_2);
x_520 = !lean_is_exclusive(x_500);
if (x_520 == 0)
{
return x_500;
}
else
{
lean_object* x_521; lean_object* x_522; lean_object* x_523; 
x_521 = lean_ctor_get(x_500, 0);
x_522 = lean_ctor_get(x_500, 1);
lean_inc(x_522);
lean_inc(x_521);
lean_dec(x_500);
x_523 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_523, 0, x_521);
lean_ctor_set(x_523, 1, x_522);
return x_523;
}
}
}
}
block_566:
{
if (x_525 == 0)
{
lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; uint8_t x_530; 
x_526 = lean_unsigned_to_nat(11u);
x_527 = lean_unsigned_to_nat(5u);
x_528 = l_BitVec_extractLsb___redArg(x_526, x_527, x_1);
x_529 = l_LeanRV64DExecutable_Functions_read__CSR___closed__32;
x_530 = lean_nat_dec_eq(x_528, x_529);
lean_dec(x_528);
if (x_530 == 0)
{
x_443 = x_530;
goto block_524;
}
else
{
uint8_t x_531; 
x_531 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
if (x_531 == 0)
{
x_443 = x_531;
goto block_524;
}
else
{
lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; uint8_t x_536; 
x_532 = lean_unsigned_to_nat(4u);
x_533 = lean_unsigned_to_nat(0u);
x_534 = l_BitVec_extractLsb___redArg(x_532, x_533, x_1);
x_535 = lean_unsigned_to_nat(3u);
x_536 = lean_nat_dec_le(x_535, x_534);
lean_dec(x_534);
x_443 = x_536;
goto block_524;
}
}
}
else
{
lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; 
x_537 = lean_unsigned_to_nat(4u);
x_538 = lean_unsigned_to_nat(0u);
x_539 = l_BitVec_extractLsb___redArg(x_537, x_538, x_1);
lean_dec(x_1);
x_540 = l_LeanRV64DExecutable_Functions_hpmidx__from__bits(x_539, x_3);
if (lean_obj_tag(x_540) == 0)
{
lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; 
x_541 = lean_ctor_get(x_540, 0);
lean_inc(x_541);
x_542 = lean_ctor_get(x_540, 1);
lean_inc(x_542);
lean_dec(x_540);
x_543 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_544 = lean_unsigned_to_nat(32u);
x_545 = l_BitVec_setWidth(x_543, x_544, x_2);
lean_dec(x_2);
x_546 = l_LeanRV64DExecutable_Functions_write__mhpmcounterh(x_541, x_545, x_542);
lean_dec(x_545);
if (lean_obj_tag(x_546) == 0)
{
lean_object* x_547; lean_object* x_548; 
x_547 = lean_ctor_get(x_546, 1);
lean_inc(x_547);
lean_dec(x_546);
x_548 = l_LeanRV64DExecutable_Functions_read__mhpmcounterh(x_541, x_547);
lean_dec(x_541);
if (lean_obj_tag(x_548) == 0)
{
uint8_t x_549; 
x_549 = !lean_is_exclusive(x_548);
if (x_549 == 0)
{
lean_object* x_550; lean_object* x_551; 
x_550 = lean_ctor_get(x_548, 0);
x_551 = l_BitVec_setWidth(x_544, x_543, x_550);
lean_dec(x_550);
lean_ctor_set(x_548, 0, x_551);
return x_548;
}
else
{
lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; 
x_552 = lean_ctor_get(x_548, 0);
x_553 = lean_ctor_get(x_548, 1);
lean_inc(x_553);
lean_inc(x_552);
lean_dec(x_548);
x_554 = l_BitVec_setWidth(x_544, x_543, x_552);
lean_dec(x_552);
x_555 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_555, 0, x_554);
lean_ctor_set(x_555, 1, x_553);
return x_555;
}
}
else
{
return x_548;
}
}
else
{
uint8_t x_556; 
lean_dec(x_541);
x_556 = !lean_is_exclusive(x_546);
if (x_556 == 0)
{
lean_object* x_557; lean_object* x_558; 
x_557 = lean_ctor_get(x_546, 0);
lean_dec(x_557);
x_558 = lean_box(1);
lean_ctor_set(x_546, 0, x_558);
return x_546;
}
else
{
lean_object* x_559; lean_object* x_560; lean_object* x_561; 
x_559 = lean_ctor_get(x_546, 1);
lean_inc(x_559);
lean_dec(x_546);
x_560 = lean_box(1);
x_561 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_561, 0, x_560);
lean_ctor_set(x_561, 1, x_559);
return x_561;
}
}
}
else
{
uint8_t x_562; 
lean_dec(x_2);
x_562 = !lean_is_exclusive(x_540);
if (x_562 == 0)
{
return x_540;
}
else
{
lean_object* x_563; lean_object* x_564; lean_object* x_565; 
x_563 = lean_ctor_get(x_540, 0);
x_564 = lean_ctor_get(x_540, 1);
lean_inc(x_564);
lean_inc(x_563);
lean_dec(x_540);
x_565 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_565, 0, x_563);
lean_ctor_set(x_565, 1, x_564);
return x_565;
}
}
}
}
block_598:
{
if (x_567 == 0)
{
lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; uint8_t x_572; 
x_568 = lean_unsigned_to_nat(11u);
x_569 = lean_unsigned_to_nat(5u);
x_570 = l_BitVec_extractLsb___redArg(x_568, x_569, x_1);
x_571 = l_LeanRV64DExecutable_Functions_read__CSR___closed__35;
x_572 = lean_nat_dec_eq(x_570, x_571);
lean_dec(x_570);
if (x_572 == 0)
{
x_525 = x_572;
goto block_566;
}
else
{
uint8_t x_573; 
x_573 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
if (x_573 == 0)
{
x_525 = x_573;
goto block_566;
}
else
{
lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; uint8_t x_578; 
x_574 = lean_unsigned_to_nat(4u);
x_575 = lean_unsigned_to_nat(0u);
x_576 = l_BitVec_extractLsb___redArg(x_574, x_575, x_1);
x_577 = lean_unsigned_to_nat(3u);
x_578 = lean_nat_dec_le(x_577, x_576);
lean_dec(x_576);
x_525 = x_578;
goto block_566;
}
}
}
else
{
lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; 
x_579 = lean_unsigned_to_nat(4u);
x_580 = lean_unsigned_to_nat(0u);
x_581 = l_BitVec_extractLsb___redArg(x_579, x_580, x_1);
lean_dec(x_1);
x_582 = l_LeanRV64DExecutable_Functions_hpmidx__from__bits(x_581, x_3);
if (lean_obj_tag(x_582) == 0)
{
lean_object* x_583; lean_object* x_584; lean_object* x_585; 
x_583 = lean_ctor_get(x_582, 0);
lean_inc(x_583);
x_584 = lean_ctor_get(x_582, 1);
lean_inc(x_584);
lean_dec(x_582);
x_585 = l_LeanRV64DExecutable_Functions_write__mhpmcounter(x_583, x_2, x_584);
lean_dec(x_2);
if (lean_obj_tag(x_585) == 0)
{
lean_object* x_586; lean_object* x_587; 
x_586 = lean_ctor_get(x_585, 1);
lean_inc(x_586);
lean_dec(x_585);
x_587 = l_LeanRV64DExecutable_Functions_read__mhpmcounter(x_583, x_586);
lean_dec(x_583);
return x_587;
}
else
{
uint8_t x_588; 
lean_dec(x_583);
x_588 = !lean_is_exclusive(x_585);
if (x_588 == 0)
{
lean_object* x_589; lean_object* x_590; 
x_589 = lean_ctor_get(x_585, 0);
lean_dec(x_589);
x_590 = lean_box(1);
lean_ctor_set(x_585, 0, x_590);
return x_585;
}
else
{
lean_object* x_591; lean_object* x_592; lean_object* x_593; 
x_591 = lean_ctor_get(x_585, 1);
lean_inc(x_591);
lean_dec(x_585);
x_592 = lean_box(1);
x_593 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_593, 0, x_592);
lean_ctor_set(x_593, 1, x_591);
return x_593;
}
}
}
else
{
uint8_t x_594; 
lean_dec(x_2);
x_594 = !lean_is_exclusive(x_582);
if (x_594 == 0)
{
return x_582;
}
else
{
lean_object* x_595; lean_object* x_596; lean_object* x_597; 
x_595 = lean_ctor_get(x_582, 0);
x_596 = lean_ctor_get(x_582, 1);
lean_inc(x_596);
lean_inc(x_595);
lean_dec(x_582);
x_597 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_597, 0, x_595);
lean_ctor_set(x_597, 1, x_596);
return x_597;
}
}
}
}
block_627:
{
if (x_599 == 0)
{
lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; uint8_t x_604; 
x_600 = lean_unsigned_to_nat(11u);
x_601 = lean_unsigned_to_nat(5u);
x_602 = l_BitVec_extractLsb___redArg(x_600, x_601, x_1);
x_603 = l_LeanRV64DExecutable_Functions_read__CSR___closed__36;
x_604 = lean_nat_dec_eq(x_602, x_603);
lean_dec(x_602);
if (x_604 == 0)
{
x_567 = x_604;
goto block_598;
}
else
{
lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; uint8_t x_609; 
x_605 = lean_unsigned_to_nat(4u);
x_606 = lean_unsigned_to_nat(0u);
x_607 = l_BitVec_extractLsb___redArg(x_605, x_606, x_1);
x_608 = lean_unsigned_to_nat(3u);
x_609 = lean_nat_dec_le(x_608, x_607);
lean_dec(x_607);
x_567 = x_609;
goto block_598;
}
}
else
{
lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; 
x_610 = lean_unsigned_to_nat(4u);
x_611 = lean_unsigned_to_nat(0u);
x_612 = l_BitVec_extractLsb___redArg(x_610, x_611, x_1);
lean_dec(x_1);
x_613 = l_LeanRV64DExecutable_Functions_hpmidx__from__bits(x_612, x_3);
if (lean_obj_tag(x_613) == 0)
{
lean_object* x_614; lean_object* x_615; lean_object* x_616; 
x_614 = lean_ctor_get(x_613, 0);
lean_inc(x_614);
x_615 = lean_ctor_get(x_613, 1);
lean_inc(x_615);
lean_dec(x_613);
x_616 = l_LeanRV64DExecutable_Functions_write__mhpmevent(x_614, x_2, x_615);
lean_dec(x_2);
if (lean_obj_tag(x_616) == 0)
{
lean_object* x_617; lean_object* x_618; 
x_617 = lean_ctor_get(x_616, 1);
lean_inc(x_617);
lean_dec(x_616);
x_618 = l_LeanRV64DExecutable_Functions_read__mhpmevent(x_614, x_617);
lean_dec(x_614);
return x_618;
}
else
{
uint8_t x_619; 
lean_dec(x_614);
x_619 = !lean_is_exclusive(x_616);
if (x_619 == 0)
{
return x_616;
}
else
{
lean_object* x_620; lean_object* x_621; lean_object* x_622; 
x_620 = lean_ctor_get(x_616, 0);
x_621 = lean_ctor_get(x_616, 1);
lean_inc(x_621);
lean_inc(x_620);
lean_dec(x_616);
x_622 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_622, 0, x_620);
lean_ctor_set(x_622, 1, x_621);
return x_622;
}
}
}
else
{
uint8_t x_623; 
lean_dec(x_2);
x_623 = !lean_is_exclusive(x_613);
if (x_623 == 0)
{
return x_613;
}
else
{
lean_object* x_624; lean_object* x_625; lean_object* x_626; 
x_624 = lean_ctor_get(x_613, 0);
x_625 = lean_ctor_get(x_613, 1);
lean_inc(x_625);
lean_inc(x_624);
lean_dec(x_613);
x_626 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_626, 0, x_624);
lean_ctor_set(x_626, 1, x_625);
return x_626;
}
}
}
}
block_873:
{
if (x_628 == 0)
{
lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; uint8_t x_633; 
x_629 = lean_unsigned_to_nat(11u);
x_630 = lean_unsigned_to_nat(4u);
x_631 = l_BitVec_extractLsb___redArg(x_629, x_630, x_1);
x_632 = l_LeanRV64DExecutable_Functions_read__CSR___closed__37;
x_633 = lean_nat_dec_eq(x_631, x_632);
if (x_633 == 0)
{
lean_object* x_634; uint8_t x_635; 
x_634 = l_LeanRV64DExecutable_Functions_read__CSR___closed__38;
x_635 = lean_nat_dec_eq(x_631, x_634);
if (x_635 == 0)
{
lean_object* x_636; uint8_t x_637; 
x_636 = l_LeanRV64DExecutable_Functions_read__CSR___closed__39;
x_637 = lean_nat_dec_eq(x_631, x_636);
if (x_637 == 0)
{
lean_object* x_638; uint8_t x_639; 
x_638 = l_LeanRV64DExecutable_Functions_read__CSR___closed__40;
x_639 = lean_nat_dec_eq(x_631, x_638);
lean_dec(x_631);
if (x_639 == 0)
{
lean_object* x_640; uint8_t x_641; 
x_640 = l_LeanRV64DExecutable_Functions_read__CSR___closed__41;
x_641 = lean_nat_dec_eq(x_1, x_640);
if (x_641 == 0)
{
lean_object* x_642; uint8_t x_643; 
x_642 = l_LeanRV64DExecutable_Functions_read__CSR___closed__42;
x_643 = lean_nat_dec_eq(x_1, x_642);
if (x_643 == 0)
{
lean_object* x_644; uint8_t x_645; 
x_644 = l_LeanRV64DExecutable_Functions_read__CSR___closed__43;
x_645 = lean_nat_dec_eq(x_1, x_644);
if (x_645 == 0)
{
lean_object* x_646; uint8_t x_647; 
x_646 = l_LeanRV64DExecutable_Functions_read__CSR___closed__44;
x_647 = lean_nat_dec_eq(x_1, x_646);
if (x_647 == 0)
{
lean_object* x_648; uint8_t x_649; 
x_648 = l_LeanRV64DExecutable_Functions_read__CSR___closed__48;
x_649 = lean_nat_dec_eq(x_1, x_648);
if (x_649 == 0)
{
lean_object* x_650; uint8_t x_651; 
x_650 = l_LeanRV64DExecutable_Functions_read__CSR___closed__49;
x_651 = lean_nat_dec_eq(x_1, x_650);
if (x_651 == 0)
{
lean_object* x_652; uint8_t x_653; 
x_652 = l_LeanRV64DExecutable_Functions_read__CSR___closed__50;
x_653 = lean_nat_dec_eq(x_1, x_652);
if (x_653 == 0)
{
lean_object* x_654; uint8_t x_655; 
x_654 = l_LeanRV64DExecutable_Functions_read__CSR___closed__51;
x_655 = lean_nat_dec_eq(x_1, x_654);
if (x_655 == 0)
{
lean_object* x_656; lean_object* x_657; lean_object* x_658; uint8_t x_659; 
x_656 = lean_unsigned_to_nat(5u);
x_657 = l_BitVec_extractLsb___redArg(x_629, x_656, x_1);
x_658 = l_LeanRV64DExecutable_Functions_read__CSR___closed__52;
x_659 = lean_nat_dec_eq(x_657, x_658);
lean_dec(x_657);
if (x_659 == 0)
{
x_599 = x_659;
goto block_627;
}
else
{
lean_object* x_660; lean_object* x_661; lean_object* x_662; uint8_t x_663; 
x_660 = lean_unsigned_to_nat(0u);
x_661 = l_BitVec_extractLsb___redArg(x_630, x_660, x_1);
x_662 = lean_unsigned_to_nat(3u);
x_663 = lean_nat_dec_le(x_662, x_661);
lean_dec(x_661);
x_599 = x_663;
goto block_627;
}
}
else
{
uint8_t x_664; lean_object* x_665; 
lean_dec(x_1);
x_664 = 2;
x_665 = l_LeanRV64DExecutable_Functions_set__xepc(x_664, x_2, x_3);
lean_dec(x_2);
return x_665;
}
}
else
{
lean_object* x_666; 
lean_dec(x_1);
x_666 = l_LeanRV64DExecutable_Functions_set__mtvec(x_2, x_3);
lean_dec(x_2);
return x_666;
}
}
else
{
uint8_t x_667; lean_object* x_668; 
lean_dec(x_1);
x_667 = 1;
x_668 = l_LeanRV64DExecutable_Functions_set__xepc(x_667, x_2, x_3);
lean_dec(x_2);
return x_668;
}
}
else
{
lean_object* x_669; 
lean_dec(x_1);
x_669 = l_LeanRV64DExecutable_Functions_set__stvec(x_2, x_3);
lean_dec(x_2);
return x_669;
}
}
else
{
lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; 
lean_dec(x_1);
x_670 = lean_unsigned_to_nat(2u);
x_671 = lean_unsigned_to_nat(1u);
x_672 = l_BitVec_extractLsb___redArg(x_670, x_671, x_2);
x_673 = lean_unsigned_to_nat(0u);
x_674 = l_BitVec_extractLsb___redArg(x_673, x_673, x_2);
lean_dec(x_2);
x_675 = l_LeanRV64DExecutable_Functions_ext__write__vcsr(x_672, x_674, x_3);
lean_dec(x_674);
lean_dec(x_672);
if (lean_obj_tag(x_675) == 0)
{
lean_object* x_676; uint8_t x_677; lean_object* x_678; 
x_676 = lean_ctor_get(x_675, 1);
lean_inc(x_676);
lean_dec(x_675);
x_677 = 20;
x_678 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_677, x_676);
if (lean_obj_tag(x_678) == 0)
{
uint8_t x_679; 
x_679 = !lean_is_exclusive(x_678);
if (x_679 == 0)
{
lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; 
x_680 = lean_ctor_get(x_678, 0);
x_681 = lean_unsigned_to_nat(3u);
x_682 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_683 = l_BitVec_setWidth(x_681, x_682, x_680);
lean_dec(x_680);
lean_ctor_set(x_678, 0, x_683);
return x_678;
}
else
{
lean_object* x_684; lean_object* x_685; lean_object* x_686; lean_object* x_687; lean_object* x_688; lean_object* x_689; 
x_684 = lean_ctor_get(x_678, 0);
x_685 = lean_ctor_get(x_678, 1);
lean_inc(x_685);
lean_inc(x_684);
lean_dec(x_678);
x_686 = lean_unsigned_to_nat(3u);
x_687 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_688 = l_BitVec_setWidth(x_686, x_687, x_684);
lean_dec(x_684);
x_689 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_689, 0, x_688);
lean_ctor_set(x_689, 1, x_685);
return x_689;
}
}
else
{
uint8_t x_690; 
x_690 = !lean_is_exclusive(x_678);
if (x_690 == 0)
{
lean_object* x_691; lean_object* x_692; 
x_691 = lean_ctor_get(x_678, 0);
lean_dec(x_691);
x_692 = lean_box(1);
lean_ctor_set(x_678, 0, x_692);
return x_678;
}
else
{
lean_object* x_693; lean_object* x_694; lean_object* x_695; 
x_693 = lean_ctor_get(x_678, 1);
lean_inc(x_693);
lean_dec(x_678);
x_694 = lean_box(1);
x_695 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_695, 0, x_694);
lean_ctor_set(x_695, 1, x_693);
return x_695;
}
}
}
else
{
uint8_t x_696; 
x_696 = !lean_is_exclusive(x_675);
if (x_696 == 0)
{
return x_675;
}
else
{
lean_object* x_697; lean_object* x_698; lean_object* x_699; 
x_697 = lean_ctor_get(x_675, 0);
x_698 = lean_ctor_get(x_675, 1);
lean_inc(x_698);
lean_inc(x_697);
lean_dec(x_675);
x_699 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_699, 0, x_697);
lean_ctor_set(x_699, 1, x_698);
return x_699;
}
}
}
}
else
{
uint8_t x_700; lean_object* x_701; 
lean_dec(x_1);
x_700 = 20;
x_701 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_700, x_3);
if (lean_obj_tag(x_701) == 0)
{
lean_object* x_702; lean_object* x_703; lean_object* x_704; lean_object* x_705; lean_object* x_706; lean_object* x_707; lean_object* x_708; 
x_702 = lean_ctor_get(x_701, 0);
lean_inc(x_702);
x_703 = lean_ctor_get(x_701, 1);
lean_inc(x_703);
lean_dec(x_701);
x_704 = lean_unsigned_to_nat(1u);
x_705 = lean_unsigned_to_nat(0u);
x_706 = l_BitVec_extractLsb___redArg(x_704, x_705, x_2);
lean_dec(x_2);
x_707 = l_LeanRV64DExecutable_Functions___get__Vcsr__vxsat(x_702);
lean_dec(x_702);
x_708 = l_LeanRV64DExecutable_Functions_ext__write__vcsr(x_706, x_707, x_703);
lean_dec(x_707);
lean_dec(x_706);
if (lean_obj_tag(x_708) == 0)
{
lean_object* x_709; lean_object* x_710; 
x_709 = lean_ctor_get(x_708, 1);
lean_inc(x_709);
lean_dec(x_708);
x_710 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_700, x_709);
if (lean_obj_tag(x_710) == 0)
{
uint8_t x_711; 
x_711 = !lean_is_exclusive(x_710);
if (x_711 == 0)
{
lean_object* x_712; lean_object* x_713; lean_object* x_714; lean_object* x_715; lean_object* x_716; 
x_712 = lean_ctor_get(x_710, 0);
x_713 = lean_unsigned_to_nat(2u);
x_714 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_715 = l_LeanRV64DExecutable_Functions___get__Vcsr__vxrm(x_712);
lean_dec(x_712);
x_716 = l_BitVec_setWidth(x_713, x_714, x_715);
lean_dec(x_715);
lean_ctor_set(x_710, 0, x_716);
return x_710;
}
else
{
lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; 
x_717 = lean_ctor_get(x_710, 0);
x_718 = lean_ctor_get(x_710, 1);
lean_inc(x_718);
lean_inc(x_717);
lean_dec(x_710);
x_719 = lean_unsigned_to_nat(2u);
x_720 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_721 = l_LeanRV64DExecutable_Functions___get__Vcsr__vxrm(x_717);
lean_dec(x_717);
x_722 = l_BitVec_setWidth(x_719, x_720, x_721);
lean_dec(x_721);
x_723 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_723, 0, x_722);
lean_ctor_set(x_723, 1, x_718);
return x_723;
}
}
else
{
uint8_t x_724; 
x_724 = !lean_is_exclusive(x_710);
if (x_724 == 0)
{
lean_object* x_725; lean_object* x_726; 
x_725 = lean_ctor_get(x_710, 0);
lean_dec(x_725);
x_726 = lean_box(1);
lean_ctor_set(x_710, 0, x_726);
return x_710;
}
else
{
lean_object* x_727; lean_object* x_728; lean_object* x_729; 
x_727 = lean_ctor_get(x_710, 1);
lean_inc(x_727);
lean_dec(x_710);
x_728 = lean_box(1);
x_729 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_729, 0, x_728);
lean_ctor_set(x_729, 1, x_727);
return x_729;
}
}
}
else
{
uint8_t x_730; 
x_730 = !lean_is_exclusive(x_708);
if (x_730 == 0)
{
return x_708;
}
else
{
lean_object* x_731; lean_object* x_732; lean_object* x_733; 
x_731 = lean_ctor_get(x_708, 0);
x_732 = lean_ctor_get(x_708, 1);
lean_inc(x_732);
lean_inc(x_731);
lean_dec(x_708);
x_733 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_733, 0, x_731);
lean_ctor_set(x_733, 1, x_732);
return x_733;
}
}
}
else
{
uint8_t x_734; 
lean_dec(x_2);
x_734 = !lean_is_exclusive(x_701);
if (x_734 == 0)
{
lean_object* x_735; lean_object* x_736; 
x_735 = lean_ctor_get(x_701, 0);
lean_dec(x_735);
x_736 = lean_box(1);
lean_ctor_set(x_701, 0, x_736);
return x_701;
}
else
{
lean_object* x_737; lean_object* x_738; lean_object* x_739; 
x_737 = lean_ctor_get(x_701, 1);
lean_inc(x_737);
lean_dec(x_701);
x_738 = lean_box(1);
x_739 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_739, 0, x_738);
lean_ctor_set(x_739, 1, x_737);
return x_739;
}
}
}
}
else
{
uint8_t x_740; lean_object* x_741; 
lean_dec(x_1);
x_740 = 20;
x_741 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_740, x_3);
if (lean_obj_tag(x_741) == 0)
{
lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; 
x_742 = lean_ctor_get(x_741, 0);
lean_inc(x_742);
x_743 = lean_ctor_get(x_741, 1);
lean_inc(x_743);
lean_dec(x_741);
x_744 = l_LeanRV64DExecutable_Functions___get__Vcsr__vxrm(x_742);
lean_dec(x_742);
x_745 = lean_unsigned_to_nat(0u);
x_746 = l_BitVec_extractLsb___redArg(x_745, x_745, x_2);
lean_dec(x_2);
x_747 = l_LeanRV64DExecutable_Functions_ext__write__vcsr(x_744, x_746, x_743);
lean_dec(x_746);
lean_dec(x_744);
if (lean_obj_tag(x_747) == 0)
{
lean_object* x_748; lean_object* x_749; 
x_748 = lean_ctor_get(x_747, 1);
lean_inc(x_748);
lean_dec(x_747);
x_749 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_740, x_748);
if (lean_obj_tag(x_749) == 0)
{
uint8_t x_750; 
x_750 = !lean_is_exclusive(x_749);
if (x_750 == 0)
{
lean_object* x_751; lean_object* x_752; lean_object* x_753; lean_object* x_754; lean_object* x_755; 
x_751 = lean_ctor_get(x_749, 0);
x_752 = lean_unsigned_to_nat(1u);
x_753 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_754 = l_LeanRV64DExecutable_Functions___get__Vcsr__vxsat(x_751);
lean_dec(x_751);
x_755 = l_BitVec_setWidth(x_752, x_753, x_754);
lean_dec(x_754);
lean_ctor_set(x_749, 0, x_755);
return x_749;
}
else
{
lean_object* x_756; lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; lean_object* x_761; lean_object* x_762; 
x_756 = lean_ctor_get(x_749, 0);
x_757 = lean_ctor_get(x_749, 1);
lean_inc(x_757);
lean_inc(x_756);
lean_dec(x_749);
x_758 = lean_unsigned_to_nat(1u);
x_759 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_760 = l_LeanRV64DExecutable_Functions___get__Vcsr__vxsat(x_756);
lean_dec(x_756);
x_761 = l_BitVec_setWidth(x_758, x_759, x_760);
lean_dec(x_760);
x_762 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_762, 0, x_761);
lean_ctor_set(x_762, 1, x_757);
return x_762;
}
}
else
{
uint8_t x_763; 
x_763 = !lean_is_exclusive(x_749);
if (x_763 == 0)
{
lean_object* x_764; lean_object* x_765; 
x_764 = lean_ctor_get(x_749, 0);
lean_dec(x_764);
x_765 = lean_box(1);
lean_ctor_set(x_749, 0, x_765);
return x_749;
}
else
{
lean_object* x_766; lean_object* x_767; lean_object* x_768; 
x_766 = lean_ctor_get(x_749, 1);
lean_inc(x_766);
lean_dec(x_749);
x_767 = lean_box(1);
x_768 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_768, 0, x_767);
lean_ctor_set(x_768, 1, x_766);
return x_768;
}
}
}
else
{
uint8_t x_769; 
x_769 = !lean_is_exclusive(x_747);
if (x_769 == 0)
{
return x_747;
}
else
{
lean_object* x_770; lean_object* x_771; lean_object* x_772; 
x_770 = lean_ctor_get(x_747, 0);
x_771 = lean_ctor_get(x_747, 1);
lean_inc(x_771);
lean_inc(x_770);
lean_dec(x_747);
x_772 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_772, 0, x_770);
lean_ctor_set(x_772, 1, x_771);
return x_772;
}
}
}
else
{
uint8_t x_773; 
lean_dec(x_2);
x_773 = !lean_is_exclusive(x_741);
if (x_773 == 0)
{
lean_object* x_774; lean_object* x_775; 
x_774 = lean_ctor_get(x_741, 0);
lean_dec(x_774);
x_775 = lean_box(1);
lean_ctor_set(x_741, 0, x_775);
return x_741;
}
else
{
lean_object* x_776; lean_object* x_777; lean_object* x_778; 
x_776 = lean_ctor_get(x_741, 1);
lean_inc(x_776);
lean_dec(x_741);
x_777 = lean_box(1);
x_778 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_778, 0, x_777);
lean_ctor_set(x_778, 1, x_776);
return x_778;
}
}
}
}
else
{
lean_object* x_779; lean_object* x_780; lean_object* x_781; lean_object* x_782; 
lean_dec(x_1);
x_779 = lean_unsigned_to_nat(15u);
x_780 = lean_unsigned_to_nat(0u);
x_781 = l_BitVec_extractLsb___redArg(x_779, x_780, x_2);
lean_dec(x_2);
x_782 = l_LeanRV64DExecutable_Functions_set__vstart(x_781, x_3);
lean_dec(x_781);
if (lean_obj_tag(x_782) == 0)
{
lean_object* x_783; uint8_t x_784; lean_object* x_785; 
x_783 = lean_ctor_get(x_782, 1);
lean_inc(x_783);
lean_dec(x_782);
x_784 = 57;
x_785 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_784, x_783);
if (lean_obj_tag(x_785) == 0)
{
uint8_t x_786; 
x_786 = !lean_is_exclusive(x_785);
if (x_786 == 0)
{
lean_object* x_787; lean_object* x_788; lean_object* x_789; lean_object* x_790; 
x_787 = lean_ctor_get(x_785, 0);
x_788 = lean_unsigned_to_nat(16u);
x_789 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_790 = l_BitVec_setWidth(x_788, x_789, x_787);
lean_dec(x_787);
lean_ctor_set(x_785, 0, x_790);
return x_785;
}
else
{
lean_object* x_791; lean_object* x_792; lean_object* x_793; lean_object* x_794; lean_object* x_795; lean_object* x_796; 
x_791 = lean_ctor_get(x_785, 0);
x_792 = lean_ctor_get(x_785, 1);
lean_inc(x_792);
lean_inc(x_791);
lean_dec(x_785);
x_793 = lean_unsigned_to_nat(16u);
x_794 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_795 = l_BitVec_setWidth(x_793, x_794, x_791);
lean_dec(x_791);
x_796 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_796, 0, x_795);
lean_ctor_set(x_796, 1, x_792);
return x_796;
}
}
else
{
uint8_t x_797; 
x_797 = !lean_is_exclusive(x_785);
if (x_797 == 0)
{
lean_object* x_798; lean_object* x_799; 
x_798 = lean_ctor_get(x_785, 0);
lean_dec(x_798);
x_799 = lean_box(1);
lean_ctor_set(x_785, 0, x_799);
return x_785;
}
else
{
lean_object* x_800; lean_object* x_801; lean_object* x_802; 
x_800 = lean_ctor_get(x_785, 1);
lean_inc(x_800);
lean_dec(x_785);
x_801 = lean_box(1);
x_802 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_802, 0, x_801);
lean_ctor_set(x_802, 1, x_800);
return x_802;
}
}
}
else
{
uint8_t x_803; 
x_803 = !lean_is_exclusive(x_782);
if (x_803 == 0)
{
return x_782;
}
else
{
lean_object* x_804; lean_object* x_805; lean_object* x_806; 
x_804 = lean_ctor_get(x_782, 0);
x_805 = lean_ctor_get(x_782, 1);
lean_inc(x_805);
lean_inc(x_804);
lean_dec(x_782);
x_806 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_806, 0, x_804);
lean_ctor_set(x_806, 1, x_805);
return x_806;
}
}
}
}
else
{
lean_object* x_807; lean_object* x_808; lean_object* x_809; lean_object* x_810; lean_object* x_811; lean_object* x_812; 
x_807 = lean_unsigned_to_nat(3u);
x_808 = lean_unsigned_to_nat(0u);
x_809 = l_BitVec_extractLsb___redArg(x_807, x_808, x_1);
lean_dec(x_1);
x_810 = l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__2;
x_811 = l_BitVec_append___redArg(x_630, x_810, x_809);
lean_dec(x_809);
lean_inc(x_811);
x_812 = l_LeanRV64DExecutable_Functions_pmpWriteAddrReg(x_811, x_2, x_3);
lean_dec(x_2);
if (lean_obj_tag(x_812) == 0)
{
lean_object* x_813; lean_object* x_814; 
x_813 = lean_ctor_get(x_812, 1);
lean_inc(x_813);
lean_dec(x_812);
x_814 = l_LeanRV64DExecutable_Functions_pmpReadAddrReg(x_811, x_813);
lean_dec(x_811);
return x_814;
}
else
{
uint8_t x_815; 
lean_dec(x_811);
x_815 = !lean_is_exclusive(x_812);
if (x_815 == 0)
{
lean_object* x_816; lean_object* x_817; 
x_816 = lean_ctor_get(x_812, 0);
lean_dec(x_816);
x_817 = lean_box(1);
lean_ctor_set(x_812, 0, x_817);
return x_812;
}
else
{
lean_object* x_818; lean_object* x_819; lean_object* x_820; 
x_818 = lean_ctor_get(x_812, 1);
lean_inc(x_818);
lean_dec(x_812);
x_819 = lean_box(1);
x_820 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_820, 0, x_819);
lean_ctor_set(x_820, 1, x_818);
return x_820;
}
}
}
}
else
{
lean_object* x_821; lean_object* x_822; lean_object* x_823; lean_object* x_824; lean_object* x_825; lean_object* x_826; 
lean_dec(x_631);
x_821 = lean_unsigned_to_nat(3u);
x_822 = lean_unsigned_to_nat(0u);
x_823 = l_BitVec_extractLsb___redArg(x_821, x_822, x_1);
lean_dec(x_1);
x_824 = l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__1;
x_825 = l_BitVec_append___redArg(x_630, x_824, x_823);
lean_dec(x_823);
lean_inc(x_825);
x_826 = l_LeanRV64DExecutable_Functions_pmpWriteAddrReg(x_825, x_2, x_3);
lean_dec(x_2);
if (lean_obj_tag(x_826) == 0)
{
lean_object* x_827; lean_object* x_828; 
x_827 = lean_ctor_get(x_826, 1);
lean_inc(x_827);
lean_dec(x_826);
x_828 = l_LeanRV64DExecutable_Functions_pmpReadAddrReg(x_825, x_827);
lean_dec(x_825);
return x_828;
}
else
{
uint8_t x_829; 
lean_dec(x_825);
x_829 = !lean_is_exclusive(x_826);
if (x_829 == 0)
{
lean_object* x_830; lean_object* x_831; 
x_830 = lean_ctor_get(x_826, 0);
lean_dec(x_830);
x_831 = lean_box(1);
lean_ctor_set(x_826, 0, x_831);
return x_826;
}
else
{
lean_object* x_832; lean_object* x_833; lean_object* x_834; 
x_832 = lean_ctor_get(x_826, 1);
lean_inc(x_832);
lean_dec(x_826);
x_833 = lean_box(1);
x_834 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_834, 0, x_833);
lean_ctor_set(x_834, 1, x_832);
return x_834;
}
}
}
}
else
{
lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; lean_object* x_839; lean_object* x_840; 
lean_dec(x_631);
x_835 = lean_unsigned_to_nat(3u);
x_836 = lean_unsigned_to_nat(0u);
x_837 = l_BitVec_extractLsb___redArg(x_835, x_836, x_1);
lean_dec(x_1);
x_838 = l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__0;
x_839 = l_BitVec_append___redArg(x_630, x_838, x_837);
lean_dec(x_837);
lean_inc(x_839);
x_840 = l_LeanRV64DExecutable_Functions_pmpWriteAddrReg(x_839, x_2, x_3);
lean_dec(x_2);
if (lean_obj_tag(x_840) == 0)
{
lean_object* x_841; lean_object* x_842; 
x_841 = lean_ctor_get(x_840, 1);
lean_inc(x_841);
lean_dec(x_840);
x_842 = l_LeanRV64DExecutable_Functions_pmpReadAddrReg(x_839, x_841);
lean_dec(x_839);
return x_842;
}
else
{
uint8_t x_843; 
lean_dec(x_839);
x_843 = !lean_is_exclusive(x_840);
if (x_843 == 0)
{
lean_object* x_844; lean_object* x_845; 
x_844 = lean_ctor_get(x_840, 0);
lean_dec(x_844);
x_845 = lean_box(1);
lean_ctor_set(x_840, 0, x_845);
return x_840;
}
else
{
lean_object* x_846; lean_object* x_847; lean_object* x_848; 
x_846 = lean_ctor_get(x_840, 1);
lean_inc(x_846);
lean_dec(x_840);
x_847 = lean_box(1);
x_848 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_848, 0, x_847);
lean_ctor_set(x_848, 1, x_846);
return x_848;
}
}
}
}
else
{
lean_object* x_849; lean_object* x_850; lean_object* x_851; lean_object* x_852; lean_object* x_853; lean_object* x_854; 
lean_dec(x_631);
x_849 = lean_unsigned_to_nat(3u);
x_850 = lean_unsigned_to_nat(0u);
x_851 = l_BitVec_extractLsb___redArg(x_849, x_850, x_1);
lean_dec(x_1);
x_852 = l_LeanRV64DExecutable_Functions_read__CSR___closed__56;
x_853 = l_BitVec_append___redArg(x_630, x_852, x_851);
lean_dec(x_851);
lean_inc(x_853);
x_854 = l_LeanRV64DExecutable_Functions_pmpWriteAddrReg(x_853, x_2, x_3);
lean_dec(x_2);
if (lean_obj_tag(x_854) == 0)
{
lean_object* x_855; lean_object* x_856; 
x_855 = lean_ctor_get(x_854, 1);
lean_inc(x_855);
lean_dec(x_854);
x_856 = l_LeanRV64DExecutable_Functions_pmpReadAddrReg(x_853, x_855);
lean_dec(x_853);
return x_856;
}
else
{
uint8_t x_857; 
lean_dec(x_853);
x_857 = !lean_is_exclusive(x_854);
if (x_857 == 0)
{
lean_object* x_858; lean_object* x_859; 
x_858 = lean_ctor_get(x_854, 0);
lean_dec(x_858);
x_859 = lean_box(1);
lean_ctor_set(x_854, 0, x_859);
return x_854;
}
else
{
lean_object* x_860; lean_object* x_861; lean_object* x_862; 
x_860 = lean_ctor_get(x_854, 1);
lean_inc(x_860);
lean_dec(x_854);
x_861 = lean_box(1);
x_862 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_862, 0, x_861);
lean_ctor_set(x_862, 1, x_860);
return x_862;
}
}
}
}
else
{
lean_object* x_863; lean_object* x_864; lean_object* x_865; lean_object* x_866; 
x_863 = lean_unsigned_to_nat(3u);
x_864 = lean_unsigned_to_nat(0u);
x_865 = l_BitVec_extractLsb___redArg(x_863, x_864, x_1);
lean_dec(x_1);
lean_inc(x_865);
x_866 = l_LeanRV64DExecutable_Functions_pmpWriteCfgReg(x_865, x_2, x_3);
lean_dec(x_2);
if (lean_obj_tag(x_866) == 0)
{
lean_object* x_867; lean_object* x_868; 
x_867 = lean_ctor_get(x_866, 1);
lean_inc(x_867);
lean_dec(x_866);
x_868 = l_LeanRV64DExecutable_Functions_pmpReadCfgReg(x_865, x_867);
return x_868;
}
else
{
uint8_t x_869; 
lean_dec(x_865);
x_869 = !lean_is_exclusive(x_866);
if (x_869 == 0)
{
return x_866;
}
else
{
lean_object* x_870; lean_object* x_871; lean_object* x_872; 
x_870 = lean_ctor_get(x_866, 0);
x_871 = lean_ctor_get(x_866, 1);
lean_inc(x_871);
lean_inc(x_870);
lean_dec(x_866);
x_872 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_872, 0, x_870);
lean_ctor_set(x_872, 1, x_871);
return x_872;
}
}
}
}
block_1175:
{
if (x_874 == 0)
{
lean_object* x_875; uint8_t x_876; 
x_875 = l_LeanRV64DExecutable_Functions_read__CSR___closed__58;
x_876 = lean_nat_dec_eq(x_1, x_875);
if (x_876 == 0)
{
lean_object* x_877; uint8_t x_878; 
x_877 = l_LeanRV64DExecutable_Functions_read__CSR___closed__59;
x_878 = lean_nat_dec_eq(x_1, x_877);
if (x_878 == 0)
{
lean_object* x_879; uint8_t x_880; 
x_879 = l_LeanRV64DExecutable_Functions_read__CSR___closed__60;
x_880 = lean_nat_dec_eq(x_1, x_879);
if (x_880 == 0)
{
lean_object* x_881; uint8_t x_882; 
x_881 = l_LeanRV64DExecutable_Functions_read__CSR___closed__61;
x_882 = lean_nat_dec_eq(x_1, x_881);
if (x_882 == 0)
{
lean_object* x_883; uint8_t x_884; 
x_883 = l_LeanRV64DExecutable_Functions_read__CSR___closed__62;
x_884 = lean_nat_dec_eq(x_1, x_883);
if (x_884 == 0)
{
lean_object* x_885; uint8_t x_886; 
x_885 = l_LeanRV64DExecutable_Functions_read__CSR___closed__63;
x_886 = lean_nat_dec_eq(x_1, x_885);
if (x_886 == 0)
{
lean_object* x_887; uint8_t x_888; 
x_887 = l_LeanRV64DExecutable_Functions_read__CSR___closed__64;
x_888 = lean_nat_dec_eq(x_1, x_887);
if (x_888 == 0)
{
lean_object* x_889; uint8_t x_890; 
x_889 = l_LeanRV64DExecutable_Functions_read__CSR___closed__70;
x_890 = lean_nat_dec_eq(x_1, x_889);
if (x_890 == 0)
{
lean_object* x_891; uint8_t x_892; 
x_891 = l_LeanRV64DExecutable_Functions_read__CSR___closed__71;
x_892 = lean_nat_dec_eq(x_1, x_891);
if (x_892 == 0)
{
lean_object* x_893; uint8_t x_894; 
x_893 = l_LeanRV64DExecutable_Functions_read__CSR___closed__72;
x_894 = lean_nat_dec_eq(x_1, x_893);
if (x_894 == 0)
{
lean_object* x_895; uint8_t x_896; 
x_895 = l_LeanRV64DExecutable_Functions_read__CSR___closed__73;
x_896 = lean_nat_dec_eq(x_1, x_895);
if (x_896 == 0)
{
lean_object* x_897; uint8_t x_898; 
x_897 = l_LeanRV64DExecutable_Functions_read__CSR___closed__74;
x_898 = lean_nat_dec_eq(x_1, x_897);
if (x_898 == 0)
{
lean_object* x_899; uint8_t x_900; 
x_899 = l_LeanRV64DExecutable_Functions_read__CSR___closed__75;
x_900 = lean_nat_dec_eq(x_1, x_899);
if (x_900 == 0)
{
lean_object* x_901; uint8_t x_902; 
x_901 = l_LeanRV64DExecutable_Functions_read__CSR___closed__76;
x_902 = lean_nat_dec_eq(x_1, x_901);
if (x_902 == 0)
{
lean_object* x_903; lean_object* x_904; lean_object* x_905; lean_object* x_906; uint8_t x_907; 
x_903 = lean_unsigned_to_nat(11u);
x_904 = lean_unsigned_to_nat(4u);
x_905 = l_BitVec_extractLsb___redArg(x_903, x_904, x_1);
x_906 = l_LeanRV64DExecutable_Functions_read__CSR___closed__77;
x_907 = lean_nat_dec_eq(x_905, x_906);
lean_dec(x_905);
if (x_907 == 0)
{
x_628 = x_907;
goto block_873;
}
else
{
lean_object* x_908; lean_object* x_909; lean_object* x_910; lean_object* x_911; lean_object* x_912; uint8_t x_913; 
x_908 = lean_unsigned_to_nat(3u);
x_909 = lean_unsigned_to_nat(0u);
x_910 = l_BitVec_extractLsb___redArg(x_908, x_909, x_1);
x_911 = l_Sail_BitVec_access(x_904, x_910, x_909);
lean_dec(x_910);
x_912 = l_LeanRV64DExecutable_Functions_read__CSR___closed__78;
x_913 = lean_nat_dec_eq(x_911, x_912);
lean_dec(x_911);
if (x_913 == 0)
{
uint8_t x_914; 
x_914 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_628 = x_914;
goto block_873;
}
else
{
x_628 = x_913;
goto block_873;
}
}
}
else
{
uint8_t x_915; lean_object* x_916; lean_object* x_917; lean_object* x_918; 
lean_dec(x_1);
x_915 = 58;
x_916 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_915, x_2, x_3);
x_917 = lean_ctor_get(x_916, 1);
lean_inc(x_917);
lean_dec(x_916);
x_918 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_915, x_917);
return x_918;
}
}
else
{
uint8_t x_919; lean_object* x_920; lean_object* x_921; lean_object* x_922; 
lean_dec(x_1);
x_919 = 59;
x_920 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_919, x_2, x_3);
x_921 = lean_ctor_get(x_920, 1);
lean_inc(x_921);
lean_dec(x_920);
x_922 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_919, x_921);
return x_922;
}
}
else
{
uint8_t x_923; lean_object* x_924; lean_object* x_925; lean_object* x_926; 
lean_dec(x_1);
x_923 = 60;
x_924 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_923, x_2, x_3);
x_925 = lean_ctor_get(x_924, 1);
lean_inc(x_925);
lean_dec(x_924);
x_926 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_923, x_925);
return x_926;
}
}
else
{
uint8_t x_927; lean_object* x_928; lean_object* x_929; lean_object* x_930; 
lean_dec(x_1);
x_927 = 62;
x_928 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_927, x_2, x_3);
x_929 = lean_ctor_get(x_928, 1);
lean_inc(x_929);
lean_dec(x_928);
x_930 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_927, x_929);
return x_930;
}
}
else
{
uint8_t x_931; lean_object* x_932; 
lean_dec(x_1);
x_931 = 84;
x_932 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_931, x_3);
if (lean_obj_tag(x_932) == 0)
{
lean_object* x_933; lean_object* x_934; uint8_t x_935; lean_object* x_936; 
x_933 = lean_ctor_get(x_932, 0);
lean_inc(x_933);
x_934 = lean_ctor_get(x_932, 1);
lean_inc(x_934);
lean_dec(x_932);
x_935 = 81;
x_936 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_935, x_934);
if (lean_obj_tag(x_936) == 0)
{
lean_object* x_937; lean_object* x_938; lean_object* x_939; lean_object* x_940; lean_object* x_941; lean_object* x_942; 
x_937 = lean_ctor_get(x_936, 0);
lean_inc(x_937);
x_938 = lean_ctor_get(x_936, 1);
lean_inc(x_938);
lean_dec(x_936);
x_939 = l_LeanRV64DExecutable_Functions_lift__sie(x_933, x_937, x_2);
lean_dec(x_2);
lean_dec(x_937);
lean_dec(x_933);
x_940 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_931, x_939, x_938);
x_941 = lean_ctor_get(x_940, 1);
lean_inc(x_941);
lean_dec(x_940);
x_942 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_931, x_941);
return x_942;
}
else
{
uint8_t x_943; 
lean_dec(x_933);
lean_dec(x_2);
x_943 = !lean_is_exclusive(x_936);
if (x_943 == 0)
{
lean_object* x_944; lean_object* x_945; 
x_944 = lean_ctor_get(x_936, 0);
lean_dec(x_944);
x_945 = lean_box(1);
lean_ctor_set(x_936, 0, x_945);
return x_936;
}
else
{
lean_object* x_946; lean_object* x_947; lean_object* x_948; 
x_946 = lean_ctor_get(x_936, 1);
lean_inc(x_946);
lean_dec(x_936);
x_947 = lean_box(1);
x_948 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_948, 0, x_947);
lean_ctor_set(x_948, 1, x_946);
return x_948;
}
}
}
else
{
uint8_t x_949; 
lean_dec(x_2);
x_949 = !lean_is_exclusive(x_932);
if (x_949 == 0)
{
lean_object* x_950; lean_object* x_951; 
x_950 = lean_ctor_get(x_932, 0);
lean_dec(x_950);
x_951 = lean_box(1);
lean_ctor_set(x_932, 0, x_951);
return x_932;
}
else
{
lean_object* x_952; lean_object* x_953; lean_object* x_954; 
x_952 = lean_ctor_get(x_932, 1);
lean_inc(x_952);
lean_dec(x_932);
x_953 = lean_box(1);
x_954 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_954, 0, x_953);
lean_ctor_set(x_954, 1, x_952);
return x_954;
}
}
}
}
else
{
uint8_t x_955; lean_object* x_956; 
lean_dec(x_1);
x_955 = 83;
x_956 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_955, x_3);
if (lean_obj_tag(x_956) == 0)
{
lean_object* x_957; lean_object* x_958; uint8_t x_959; lean_object* x_960; 
x_957 = lean_ctor_get(x_956, 0);
lean_inc(x_957);
x_958 = lean_ctor_get(x_956, 1);
lean_inc(x_958);
lean_dec(x_956);
x_959 = 81;
x_960 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_959, x_958);
if (lean_obj_tag(x_960) == 0)
{
lean_object* x_961; lean_object* x_962; lean_object* x_963; lean_object* x_964; lean_object* x_965; lean_object* x_966; 
x_961 = lean_ctor_get(x_960, 0);
lean_inc(x_961);
x_962 = lean_ctor_get(x_960, 1);
lean_inc(x_962);
lean_dec(x_960);
x_963 = l_LeanRV64DExecutable_Functions_lift__sip(x_957, x_961, x_2);
lean_dec(x_2);
lean_dec(x_961);
lean_dec(x_957);
x_964 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_955, x_963, x_962);
x_965 = lean_ctor_get(x_964, 1);
lean_inc(x_965);
lean_dec(x_964);
x_966 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_955, x_965);
return x_966;
}
else
{
uint8_t x_967; 
lean_dec(x_957);
lean_dec(x_2);
x_967 = !lean_is_exclusive(x_960);
if (x_967 == 0)
{
lean_object* x_968; lean_object* x_969; 
x_968 = lean_ctor_get(x_960, 0);
lean_dec(x_968);
x_969 = lean_box(1);
lean_ctor_set(x_960, 0, x_969);
return x_960;
}
else
{
lean_object* x_970; lean_object* x_971; lean_object* x_972; 
x_970 = lean_ctor_get(x_960, 1);
lean_inc(x_970);
lean_dec(x_960);
x_971 = lean_box(1);
x_972 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_972, 0, x_971);
lean_ctor_set(x_972, 1, x_970);
return x_972;
}
}
}
else
{
uint8_t x_973; 
lean_dec(x_2);
x_973 = !lean_is_exclusive(x_956);
if (x_973 == 0)
{
lean_object* x_974; lean_object* x_975; 
x_974 = lean_ctor_get(x_956, 0);
lean_dec(x_974);
x_975 = lean_box(1);
lean_ctor_set(x_956, 0, x_975);
return x_956;
}
else
{
lean_object* x_976; lean_object* x_977; lean_object* x_978; 
x_976 = lean_ctor_get(x_956, 1);
lean_inc(x_976);
lean_dec(x_956);
x_977 = lean_box(1);
x_978 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_978, 0, x_977);
lean_ctor_set(x_978, 1, x_976);
return x_978;
}
}
}
}
else
{
uint8_t x_979; lean_object* x_980; 
lean_dec(x_1);
x_979 = 87;
x_980 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_979, x_3);
if (lean_obj_tag(x_980) == 0)
{
lean_object* x_981; lean_object* x_982; lean_object* x_983; 
x_981 = lean_ctor_get(x_980, 0);
lean_inc(x_981);
x_982 = lean_ctor_get(x_980, 1);
lean_inc(x_982);
lean_dec(x_980);
x_983 = l_LeanRV64DExecutable_Functions_legalize__sstatus(x_981, x_2, x_982);
lean_dec(x_2);
lean_dec(x_981);
if (lean_obj_tag(x_983) == 0)
{
lean_object* x_984; lean_object* x_985; lean_object* x_986; lean_object* x_987; lean_object* x_988; 
x_984 = lean_ctor_get(x_983, 0);
lean_inc(x_984);
x_985 = lean_ctor_get(x_983, 1);
lean_inc(x_985);
lean_dec(x_983);
x_986 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_979, x_984, x_985);
x_987 = lean_ctor_get(x_986, 1);
lean_inc(x_987);
lean_dec(x_986);
x_988 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_979, x_987);
if (lean_obj_tag(x_988) == 0)
{
uint8_t x_989; 
x_989 = !lean_is_exclusive(x_988);
if (x_989 == 0)
{
lean_object* x_990; lean_object* x_991; lean_object* x_992; lean_object* x_993; 
x_990 = lean_ctor_get(x_988, 0);
x_991 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_992 = lean_unsigned_to_nat(0u);
x_993 = l_BitVec_extractLsb___redArg(x_991, x_992, x_990);
lean_dec(x_990);
lean_ctor_set(x_988, 0, x_993);
return x_988;
}
else
{
lean_object* x_994; lean_object* x_995; lean_object* x_996; lean_object* x_997; lean_object* x_998; lean_object* x_999; 
x_994 = lean_ctor_get(x_988, 0);
x_995 = lean_ctor_get(x_988, 1);
lean_inc(x_995);
lean_inc(x_994);
lean_dec(x_988);
x_996 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_997 = lean_unsigned_to_nat(0u);
x_998 = l_BitVec_extractLsb___redArg(x_996, x_997, x_994);
lean_dec(x_994);
x_999 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_999, 0, x_998);
lean_ctor_set(x_999, 1, x_995);
return x_999;
}
}
else
{
uint8_t x_1000; 
x_1000 = !lean_is_exclusive(x_988);
if (x_1000 == 0)
{
lean_object* x_1001; lean_object* x_1002; 
x_1001 = lean_ctor_get(x_988, 0);
lean_dec(x_1001);
x_1002 = lean_box(1);
lean_ctor_set(x_988, 0, x_1002);
return x_988;
}
else
{
lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; 
x_1003 = lean_ctor_get(x_988, 1);
lean_inc(x_1003);
lean_dec(x_988);
x_1004 = lean_box(1);
x_1005 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1005, 0, x_1004);
lean_ctor_set(x_1005, 1, x_1003);
return x_1005;
}
}
}
else
{
return x_983;
}
}
else
{
uint8_t x_1006; 
lean_dec(x_2);
x_1006 = !lean_is_exclusive(x_980);
if (x_1006 == 0)
{
lean_object* x_1007; lean_object* x_1008; 
x_1007 = lean_ctor_get(x_980, 0);
lean_dec(x_1007);
x_1008 = lean_box(1);
lean_ctor_set(x_980, 0, x_1008);
return x_980;
}
else
{
lean_object* x_1009; lean_object* x_1010; lean_object* x_1011; 
x_1009 = lean_ctor_get(x_980, 1);
lean_inc(x_1009);
lean_dec(x_980);
x_1010 = lean_box(1);
x_1011 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1011, 0, x_1010);
lean_ctor_set(x_1011, 1, x_1009);
return x_1011;
}
}
}
}
else
{
uint8_t x_1012; lean_object* x_1013; 
lean_dec(x_1);
x_1012 = 73;
x_1013 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1012, x_3);
if (lean_obj_tag(x_1013) == 0)
{
lean_object* x_1014; lean_object* x_1015; lean_object* x_1016; lean_object* x_1017; lean_object* x_1018; 
x_1014 = lean_ctor_get(x_1013, 1);
lean_inc(x_1014);
lean_dec(x_1013);
x_1015 = l_LeanRV64DExecutable_Functions_legalize__mcountinhibit___redArg(x_2);
lean_dec(x_2);
x_1016 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1012, x_1015, x_1014);
x_1017 = lean_ctor_get(x_1016, 1);
lean_inc(x_1017);
lean_dec(x_1016);
x_1018 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1012, x_1017);
if (lean_obj_tag(x_1018) == 0)
{
uint8_t x_1019; 
x_1019 = !lean_is_exclusive(x_1018);
if (x_1019 == 0)
{
lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; lean_object* x_1023; 
x_1020 = lean_ctor_get(x_1018, 0);
x_1021 = lean_unsigned_to_nat(32u);
x_1022 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1023 = l_BitVec_setWidth(x_1021, x_1022, x_1020);
lean_dec(x_1020);
lean_ctor_set(x_1018, 0, x_1023);
return x_1018;
}
else
{
lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; lean_object* x_1029; 
x_1024 = lean_ctor_get(x_1018, 0);
x_1025 = lean_ctor_get(x_1018, 1);
lean_inc(x_1025);
lean_inc(x_1024);
lean_dec(x_1018);
x_1026 = lean_unsigned_to_nat(32u);
x_1027 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1028 = l_BitVec_setWidth(x_1026, x_1027, x_1024);
lean_dec(x_1024);
x_1029 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1029, 0, x_1028);
lean_ctor_set(x_1029, 1, x_1025);
return x_1029;
}
}
else
{
uint8_t x_1030; 
x_1030 = !lean_is_exclusive(x_1018);
if (x_1030 == 0)
{
lean_object* x_1031; lean_object* x_1032; 
x_1031 = lean_ctor_get(x_1018, 0);
lean_dec(x_1031);
x_1032 = lean_box(1);
lean_ctor_set(x_1018, 0, x_1032);
return x_1018;
}
else
{
lean_object* x_1033; lean_object* x_1034; lean_object* x_1035; 
x_1033 = lean_ctor_get(x_1018, 1);
lean_inc(x_1033);
lean_dec(x_1018);
x_1034 = lean_box(1);
x_1035 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1035, 0, x_1034);
lean_ctor_set(x_1035, 1, x_1033);
return x_1035;
}
}
}
else
{
uint8_t x_1036; 
lean_dec(x_2);
x_1036 = !lean_is_exclusive(x_1013);
if (x_1036 == 0)
{
lean_object* x_1037; lean_object* x_1038; 
x_1037 = lean_ctor_get(x_1013, 0);
lean_dec(x_1037);
x_1038 = lean_box(1);
lean_ctor_set(x_1013, 0, x_1038);
return x_1013;
}
else
{
lean_object* x_1039; lean_object* x_1040; lean_object* x_1041; 
x_1039 = lean_ctor_get(x_1013, 1);
lean_inc(x_1039);
lean_dec(x_1013);
x_1040 = lean_box(1);
x_1041 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1041, 0, x_1040);
lean_ctor_set(x_1041, 1, x_1039);
return x_1041;
}
}
}
}
else
{
uint8_t x_1042; lean_object* x_1043; 
lean_dec(x_1);
x_1042 = 74;
x_1043 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1042, x_3);
if (lean_obj_tag(x_1043) == 0)
{
lean_object* x_1044; lean_object* x_1045; lean_object* x_1046; lean_object* x_1047; lean_object* x_1048; 
x_1044 = lean_ctor_get(x_1043, 1);
lean_inc(x_1044);
lean_dec(x_1043);
x_1045 = l_LeanRV64DExecutable_Functions_legalize__mcounteren___redArg(x_2);
lean_dec(x_2);
x_1046 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1042, x_1045, x_1044);
x_1047 = lean_ctor_get(x_1046, 1);
lean_inc(x_1047);
lean_dec(x_1046);
x_1048 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1042, x_1047);
if (lean_obj_tag(x_1048) == 0)
{
uint8_t x_1049; 
x_1049 = !lean_is_exclusive(x_1048);
if (x_1049 == 0)
{
lean_object* x_1050; lean_object* x_1051; lean_object* x_1052; lean_object* x_1053; 
x_1050 = lean_ctor_get(x_1048, 0);
x_1051 = lean_unsigned_to_nat(32u);
x_1052 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1053 = l_BitVec_setWidth(x_1051, x_1052, x_1050);
lean_dec(x_1050);
lean_ctor_set(x_1048, 0, x_1053);
return x_1048;
}
else
{
lean_object* x_1054; lean_object* x_1055; lean_object* x_1056; lean_object* x_1057; lean_object* x_1058; lean_object* x_1059; 
x_1054 = lean_ctor_get(x_1048, 0);
x_1055 = lean_ctor_get(x_1048, 1);
lean_inc(x_1055);
lean_inc(x_1054);
lean_dec(x_1048);
x_1056 = lean_unsigned_to_nat(32u);
x_1057 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1058 = l_BitVec_setWidth(x_1056, x_1057, x_1054);
lean_dec(x_1054);
x_1059 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1059, 0, x_1058);
lean_ctor_set(x_1059, 1, x_1055);
return x_1059;
}
}
else
{
uint8_t x_1060; 
x_1060 = !lean_is_exclusive(x_1048);
if (x_1060 == 0)
{
lean_object* x_1061; lean_object* x_1062; 
x_1061 = lean_ctor_get(x_1048, 0);
lean_dec(x_1061);
x_1062 = lean_box(1);
lean_ctor_set(x_1048, 0, x_1062);
return x_1048;
}
else
{
lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; 
x_1063 = lean_ctor_get(x_1048, 1);
lean_inc(x_1063);
lean_dec(x_1048);
x_1064 = lean_box(1);
x_1065 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1065, 0, x_1064);
lean_ctor_set(x_1065, 1, x_1063);
return x_1065;
}
}
}
else
{
uint8_t x_1066; 
lean_dec(x_2);
x_1066 = !lean_is_exclusive(x_1043);
if (x_1066 == 0)
{
lean_object* x_1067; lean_object* x_1068; 
x_1067 = lean_ctor_get(x_1043, 0);
lean_dec(x_1067);
x_1068 = lean_box(1);
lean_ctor_set(x_1043, 0, x_1068);
return x_1043;
}
else
{
lean_object* x_1069; lean_object* x_1070; lean_object* x_1071; 
x_1069 = lean_ctor_get(x_1043, 1);
lean_inc(x_1069);
lean_dec(x_1043);
x_1070 = lean_box(1);
x_1071 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1071, 0, x_1070);
lean_ctor_set(x_1071, 1, x_1069);
return x_1071;
}
}
}
}
else
{
uint8_t x_1072; lean_object* x_1073; 
lean_dec(x_1);
x_1072 = 75;
x_1073 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1072, x_3);
if (lean_obj_tag(x_1073) == 0)
{
lean_object* x_1074; lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; 
x_1074 = lean_ctor_get(x_1073, 1);
lean_inc(x_1074);
lean_dec(x_1073);
x_1075 = l_LeanRV64DExecutable_Functions_legalize__scounteren___redArg(x_2);
lean_dec(x_2);
x_1076 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1072, x_1075, x_1074);
x_1077 = lean_ctor_get(x_1076, 1);
lean_inc(x_1077);
lean_dec(x_1076);
x_1078 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1072, x_1077);
if (lean_obj_tag(x_1078) == 0)
{
uint8_t x_1079; 
x_1079 = !lean_is_exclusive(x_1078);
if (x_1079 == 0)
{
lean_object* x_1080; lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; 
x_1080 = lean_ctor_get(x_1078, 0);
x_1081 = lean_unsigned_to_nat(32u);
x_1082 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1083 = l_BitVec_setWidth(x_1081, x_1082, x_1080);
lean_dec(x_1080);
lean_ctor_set(x_1078, 0, x_1083);
return x_1078;
}
else
{
lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; lean_object* x_1087; lean_object* x_1088; lean_object* x_1089; 
x_1084 = lean_ctor_get(x_1078, 0);
x_1085 = lean_ctor_get(x_1078, 1);
lean_inc(x_1085);
lean_inc(x_1084);
lean_dec(x_1078);
x_1086 = lean_unsigned_to_nat(32u);
x_1087 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1088 = l_BitVec_setWidth(x_1086, x_1087, x_1084);
lean_dec(x_1084);
x_1089 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1089, 0, x_1088);
lean_ctor_set(x_1089, 1, x_1085);
return x_1089;
}
}
else
{
uint8_t x_1090; 
x_1090 = !lean_is_exclusive(x_1078);
if (x_1090 == 0)
{
lean_object* x_1091; lean_object* x_1092; 
x_1091 = lean_ctor_get(x_1078, 0);
lean_dec(x_1091);
x_1092 = lean_box(1);
lean_ctor_set(x_1078, 0, x_1092);
return x_1078;
}
else
{
lean_object* x_1093; lean_object* x_1094; lean_object* x_1095; 
x_1093 = lean_ctor_get(x_1078, 1);
lean_inc(x_1093);
lean_dec(x_1078);
x_1094 = lean_box(1);
x_1095 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1095, 0, x_1094);
lean_ctor_set(x_1095, 1, x_1093);
return x_1095;
}
}
}
else
{
uint8_t x_1096; 
lean_dec(x_2);
x_1096 = !lean_is_exclusive(x_1073);
if (x_1096 == 0)
{
lean_object* x_1097; lean_object* x_1098; 
x_1097 = lean_ctor_get(x_1073, 0);
lean_dec(x_1097);
x_1098 = lean_box(1);
lean_ctor_set(x_1073, 0, x_1098);
return x_1073;
}
else
{
lean_object* x_1099; lean_object* x_1100; lean_object* x_1101; 
x_1099 = lean_ctor_get(x_1073, 1);
lean_inc(x_1099);
lean_dec(x_1073);
x_1100 = lean_box(1);
x_1101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1101, 0, x_1100);
lean_ctor_set(x_1101, 1, x_1099);
return x_1101;
}
}
}
}
else
{
uint8_t x_1102; lean_object* x_1103; lean_object* x_1104; lean_object* x_1105; 
lean_dec(x_1);
x_1102 = 76;
x_1103 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1102, x_2, x_3);
x_1104 = lean_ctor_get(x_1103, 1);
lean_inc(x_1104);
lean_dec(x_1103);
x_1105 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1102, x_1104);
return x_1105;
}
}
else
{
uint8_t x_1106; lean_object* x_1107; lean_object* x_1108; lean_object* x_1109; 
lean_dec(x_1);
x_1106 = 77;
x_1107 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1106, x_2, x_3);
x_1108 = lean_ctor_get(x_1107, 1);
lean_inc(x_1108);
lean_dec(x_1107);
x_1109 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1106, x_1108);
return x_1109;
}
}
else
{
uint8_t x_1110; lean_object* x_1111; lean_object* x_1112; lean_object* x_1113; 
lean_dec(x_1);
x_1110 = 79;
x_1111 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1110, x_2, x_3);
x_1112 = lean_ctor_get(x_1111, 1);
lean_inc(x_1112);
lean_dec(x_1111);
x_1113 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1110, x_1112);
return x_1113;
}
}
else
{
uint8_t x_1114; lean_object* x_1115; 
lean_dec(x_1);
x_1114 = 81;
x_1115 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1114, x_3);
if (lean_obj_tag(x_1115) == 0)
{
lean_object* x_1116; lean_object* x_1117; lean_object* x_1118; lean_object* x_1119; lean_object* x_1120; 
x_1116 = lean_ctor_get(x_1115, 1);
lean_inc(x_1116);
lean_dec(x_1115);
x_1117 = l_LeanRV64DExecutable_Functions_legalize__mideleg___redArg(x_2);
lean_dec(x_2);
x_1118 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1114, x_1117, x_1116);
x_1119 = lean_ctor_get(x_1118, 1);
lean_inc(x_1119);
lean_dec(x_1118);
x_1120 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1114, x_1119);
return x_1120;
}
else
{
uint8_t x_1121; 
lean_dec(x_2);
x_1121 = !lean_is_exclusive(x_1115);
if (x_1121 == 0)
{
lean_object* x_1122; lean_object* x_1123; 
x_1122 = lean_ctor_get(x_1115, 0);
lean_dec(x_1122);
x_1123 = lean_box(1);
lean_ctor_set(x_1115, 0, x_1123);
return x_1115;
}
else
{
lean_object* x_1124; lean_object* x_1125; lean_object* x_1126; 
x_1124 = lean_ctor_get(x_1115, 1);
lean_inc(x_1124);
lean_dec(x_1115);
x_1125 = lean_box(1);
x_1126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1126, 0, x_1125);
lean_ctor_set(x_1126, 1, x_1124);
return x_1126;
}
}
}
}
else
{
uint8_t x_1127; lean_object* x_1128; 
lean_dec(x_1);
x_1127 = 82;
x_1128 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1127, x_3);
if (lean_obj_tag(x_1128) == 0)
{
lean_object* x_1129; lean_object* x_1130; 
x_1129 = lean_ctor_get(x_1128, 1);
lean_inc(x_1129);
lean_dec(x_1128);
x_1130 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1127, x_1129);
if (lean_obj_tag(x_1130) == 0)
{
lean_object* x_1131; lean_object* x_1132; lean_object* x_1133; lean_object* x_1134; lean_object* x_1135; lean_object* x_1136; lean_object* x_1137; lean_object* x_1138; lean_object* x_1139; lean_object* x_1140; lean_object* x_1141; lean_object* x_1142; lean_object* x_1143; lean_object* x_1144; lean_object* x_1145; 
x_1131 = lean_ctor_get(x_1130, 0);
lean_inc(x_1131);
x_1132 = lean_ctor_get(x_1130, 1);
lean_inc(x_1132);
lean_dec(x_1130);
x_1133 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_1134 = lean_unsigned_to_nat(31u);
x_1135 = lean_unsigned_to_nat(0u);
x_1136 = lean_unsigned_to_nat(32u);
x_1137 = l_LeanRV64DExecutable_Functions_write__CSR___closed__2;
x_1138 = lean_unsigned_to_nat(64u);
x_1139 = l_BitVec_extractLsb___redArg(x_1134, x_1135, x_1131);
lean_dec(x_1131);
x_1140 = l_BitVec_append___redArg(x_1136, x_2, x_1139);
lean_dec(x_1139);
lean_dec(x_2);
x_1141 = l_BitVec_setWidth(x_1137, x_1138, x_1140);
lean_dec(x_1140);
x_1142 = l_LeanRV64DExecutable_Functions_legalize__medeleg___redArg(x_1141);
lean_dec(x_1141);
x_1143 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1127, x_1142, x_1132);
x_1144 = lean_ctor_get(x_1143, 1);
lean_inc(x_1144);
lean_dec(x_1143);
x_1145 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1127, x_1144);
if (lean_obj_tag(x_1145) == 0)
{
uint8_t x_1146; 
x_1146 = !lean_is_exclusive(x_1145);
if (x_1146 == 0)
{
lean_object* x_1147; lean_object* x_1148; lean_object* x_1149; lean_object* x_1150; 
x_1147 = lean_ctor_get(x_1145, 0);
x_1148 = lean_unsigned_to_nat(63u);
x_1149 = l_BitVec_extractLsb___redArg(x_1148, x_1136, x_1147);
lean_dec(x_1147);
x_1150 = l_BitVec_setWidth(x_1136, x_1133, x_1149);
lean_dec(x_1149);
lean_ctor_set(x_1145, 0, x_1150);
return x_1145;
}
else
{
lean_object* x_1151; lean_object* x_1152; lean_object* x_1153; lean_object* x_1154; lean_object* x_1155; lean_object* x_1156; 
x_1151 = lean_ctor_get(x_1145, 0);
x_1152 = lean_ctor_get(x_1145, 1);
lean_inc(x_1152);
lean_inc(x_1151);
lean_dec(x_1145);
x_1153 = lean_unsigned_to_nat(63u);
x_1154 = l_BitVec_extractLsb___redArg(x_1153, x_1136, x_1151);
lean_dec(x_1151);
x_1155 = l_BitVec_setWidth(x_1136, x_1133, x_1154);
lean_dec(x_1154);
x_1156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1156, 0, x_1155);
lean_ctor_set(x_1156, 1, x_1152);
return x_1156;
}
}
else
{
uint8_t x_1157; 
x_1157 = !lean_is_exclusive(x_1145);
if (x_1157 == 0)
{
lean_object* x_1158; lean_object* x_1159; 
x_1158 = lean_ctor_get(x_1145, 0);
lean_dec(x_1158);
x_1159 = lean_box(1);
lean_ctor_set(x_1145, 0, x_1159);
return x_1145;
}
else
{
lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; 
x_1160 = lean_ctor_get(x_1145, 1);
lean_inc(x_1160);
lean_dec(x_1145);
x_1161 = lean_box(1);
x_1162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1162, 0, x_1161);
lean_ctor_set(x_1162, 1, x_1160);
return x_1162;
}
}
}
else
{
uint8_t x_1163; 
lean_dec(x_2);
x_1163 = !lean_is_exclusive(x_1130);
if (x_1163 == 0)
{
lean_object* x_1164; lean_object* x_1165; 
x_1164 = lean_ctor_get(x_1130, 0);
lean_dec(x_1164);
x_1165 = lean_box(1);
lean_ctor_set(x_1130, 0, x_1165);
return x_1130;
}
else
{
lean_object* x_1166; lean_object* x_1167; lean_object* x_1168; 
x_1166 = lean_ctor_get(x_1130, 1);
lean_inc(x_1166);
lean_dec(x_1130);
x_1167 = lean_box(1);
x_1168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1168, 0, x_1167);
lean_ctor_set(x_1168, 1, x_1166);
return x_1168;
}
}
}
else
{
uint8_t x_1169; 
lean_dec(x_2);
x_1169 = !lean_is_exclusive(x_1128);
if (x_1169 == 0)
{
lean_object* x_1170; lean_object* x_1171; 
x_1170 = lean_ctor_get(x_1128, 0);
lean_dec(x_1170);
x_1171 = lean_box(1);
lean_ctor_set(x_1128, 0, x_1171);
return x_1128;
}
else
{
lean_object* x_1172; lean_object* x_1173; lean_object* x_1174; 
x_1172 = lean_ctor_get(x_1128, 1);
lean_inc(x_1172);
lean_dec(x_1128);
x_1173 = lean_box(1);
x_1174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1174, 0, x_1173);
lean_ctor_set(x_1174, 1, x_1172);
return x_1174;
}
}
}
}
block_1229:
{
if (x_1176 == 0)
{
lean_object* x_1177; uint8_t x_1178; 
x_1177 = l_LeanRV64DExecutable_Functions_read__CSR___closed__83;
x_1178 = lean_nat_dec_eq(x_1, x_1177);
if (x_1178 == 0)
{
x_874 = x_1178;
goto block_1175;
}
else
{
uint8_t x_1179; 
x_1179 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_874 = x_1179;
goto block_1175;
}
}
else
{
uint8_t x_1180; lean_object* x_1181; 
lean_dec(x_1);
x_1180 = 82;
x_1181 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1180, x_3);
if (lean_obj_tag(x_1181) == 0)
{
lean_object* x_1182; lean_object* x_1183; 
x_1182 = lean_ctor_get(x_1181, 1);
lean_inc(x_1182);
lean_dec(x_1181);
x_1183 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1180, x_1182);
if (lean_obj_tag(x_1183) == 0)
{
lean_object* x_1184; lean_object* x_1185; lean_object* x_1186; lean_object* x_1187; lean_object* x_1188; lean_object* x_1189; lean_object* x_1190; lean_object* x_1191; lean_object* x_1192; lean_object* x_1193; lean_object* x_1194; lean_object* x_1195; lean_object* x_1196; lean_object* x_1197; 
x_1184 = lean_ctor_get(x_1183, 0);
lean_inc(x_1184);
x_1185 = lean_ctor_get(x_1183, 1);
lean_inc(x_1185);
lean_dec(x_1183);
x_1186 = lean_unsigned_to_nat(63u);
x_1187 = lean_unsigned_to_nat(32u);
x_1188 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_1189 = l_LeanRV64DExecutable_Functions_write__CSR___closed__3;
x_1190 = lean_unsigned_to_nat(64u);
x_1191 = l_BitVec_extractLsb___redArg(x_1186, x_1187, x_1184);
lean_dec(x_1184);
x_1192 = l_BitVec_append___redArg(x_1188, x_1191, x_2);
lean_dec(x_2);
lean_dec(x_1191);
x_1193 = l_BitVec_setWidth(x_1189, x_1190, x_1192);
lean_dec(x_1192);
x_1194 = l_LeanRV64DExecutable_Functions_legalize__medeleg___redArg(x_1193);
lean_dec(x_1193);
x_1195 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1180, x_1194, x_1185);
x_1196 = lean_ctor_get(x_1195, 1);
lean_inc(x_1196);
lean_dec(x_1195);
x_1197 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1180, x_1196);
if (lean_obj_tag(x_1197) == 0)
{
uint8_t x_1198; 
x_1198 = !lean_is_exclusive(x_1197);
if (x_1198 == 0)
{
lean_object* x_1199; lean_object* x_1200; lean_object* x_1201; lean_object* x_1202; lean_object* x_1203; 
x_1199 = lean_ctor_get(x_1197, 0);
x_1200 = lean_unsigned_to_nat(31u);
x_1201 = lean_unsigned_to_nat(0u);
x_1202 = l_BitVec_extractLsb___redArg(x_1200, x_1201, x_1199);
lean_dec(x_1199);
x_1203 = l_BitVec_setWidth(x_1187, x_1188, x_1202);
lean_dec(x_1202);
lean_ctor_set(x_1197, 0, x_1203);
return x_1197;
}
else
{
lean_object* x_1204; lean_object* x_1205; lean_object* x_1206; lean_object* x_1207; lean_object* x_1208; lean_object* x_1209; lean_object* x_1210; 
x_1204 = lean_ctor_get(x_1197, 0);
x_1205 = lean_ctor_get(x_1197, 1);
lean_inc(x_1205);
lean_inc(x_1204);
lean_dec(x_1197);
x_1206 = lean_unsigned_to_nat(31u);
x_1207 = lean_unsigned_to_nat(0u);
x_1208 = l_BitVec_extractLsb___redArg(x_1206, x_1207, x_1204);
lean_dec(x_1204);
x_1209 = l_BitVec_setWidth(x_1187, x_1188, x_1208);
lean_dec(x_1208);
x_1210 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1210, 0, x_1209);
lean_ctor_set(x_1210, 1, x_1205);
return x_1210;
}
}
else
{
uint8_t x_1211; 
x_1211 = !lean_is_exclusive(x_1197);
if (x_1211 == 0)
{
lean_object* x_1212; lean_object* x_1213; 
x_1212 = lean_ctor_get(x_1197, 0);
lean_dec(x_1212);
x_1213 = lean_box(1);
lean_ctor_set(x_1197, 0, x_1213);
return x_1197;
}
else
{
lean_object* x_1214; lean_object* x_1215; lean_object* x_1216; 
x_1214 = lean_ctor_get(x_1197, 1);
lean_inc(x_1214);
lean_dec(x_1197);
x_1215 = lean_box(1);
x_1216 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1216, 0, x_1215);
lean_ctor_set(x_1216, 1, x_1214);
return x_1216;
}
}
}
else
{
uint8_t x_1217; 
lean_dec(x_2);
x_1217 = !lean_is_exclusive(x_1183);
if (x_1217 == 0)
{
lean_object* x_1218; lean_object* x_1219; 
x_1218 = lean_ctor_get(x_1183, 0);
lean_dec(x_1218);
x_1219 = lean_box(1);
lean_ctor_set(x_1183, 0, x_1219);
return x_1183;
}
else
{
lean_object* x_1220; lean_object* x_1221; lean_object* x_1222; 
x_1220 = lean_ctor_get(x_1183, 1);
lean_inc(x_1220);
lean_dec(x_1183);
x_1221 = lean_box(1);
x_1222 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1222, 0, x_1221);
lean_ctor_set(x_1222, 1, x_1220);
return x_1222;
}
}
}
else
{
uint8_t x_1223; 
lean_dec(x_2);
x_1223 = !lean_is_exclusive(x_1181);
if (x_1223 == 0)
{
lean_object* x_1224; lean_object* x_1225; 
x_1224 = lean_ctor_get(x_1181, 0);
lean_dec(x_1224);
x_1225 = lean_box(1);
lean_ctor_set(x_1181, 0, x_1225);
return x_1181;
}
else
{
lean_object* x_1226; lean_object* x_1227; lean_object* x_1228; 
x_1226 = lean_ctor_get(x_1181, 1);
lean_inc(x_1226);
lean_dec(x_1181);
x_1227 = lean_box(1);
x_1228 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1228, 0, x_1227);
lean_ctor_set(x_1228, 1, x_1226);
return x_1228;
}
}
}
}
block_1247:
{
if (x_1230 == 0)
{
lean_object* x_1231; uint8_t x_1232; 
x_1231 = l_LeanRV64DExecutable_Functions_read__CSR___closed__82;
x_1232 = lean_nat_dec_eq(x_1, x_1231);
if (x_1232 == 0)
{
x_1176 = x_1232;
goto block_1229;
}
else
{
uint8_t x_1233; 
x_1233 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_1176 = x_1233;
goto block_1229;
}
}
else
{
uint8_t x_1234; lean_object* x_1235; 
lean_dec(x_1);
x_1234 = 82;
x_1235 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1234, x_3);
if (lean_obj_tag(x_1235) == 0)
{
lean_object* x_1236; lean_object* x_1237; lean_object* x_1238; lean_object* x_1239; lean_object* x_1240; 
x_1236 = lean_ctor_get(x_1235, 1);
lean_inc(x_1236);
lean_dec(x_1235);
x_1237 = l_LeanRV64DExecutable_Functions_legalize__medeleg___redArg(x_2);
lean_dec(x_2);
x_1238 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1234, x_1237, x_1236);
x_1239 = lean_ctor_get(x_1238, 1);
lean_inc(x_1239);
lean_dec(x_1238);
x_1240 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1234, x_1239);
return x_1240;
}
else
{
uint8_t x_1241; 
lean_dec(x_2);
x_1241 = !lean_is_exclusive(x_1235);
if (x_1241 == 0)
{
lean_object* x_1242; lean_object* x_1243; 
x_1242 = lean_ctor_get(x_1235, 0);
lean_dec(x_1242);
x_1243 = lean_box(1);
lean_ctor_set(x_1235, 0, x_1243);
return x_1235;
}
else
{
lean_object* x_1244; lean_object* x_1245; lean_object* x_1246; 
x_1244 = lean_ctor_get(x_1235, 1);
lean_inc(x_1244);
lean_dec(x_1235);
x_1245 = lean_box(1);
x_1246 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1246, 0, x_1245);
lean_ctor_set(x_1246, 1, x_1244);
return x_1246;
}
}
}
}
block_1377:
{
if (x_1248 == 0)
{
lean_object* x_1249; uint8_t x_1250; 
x_1249 = l_LeanRV64DExecutable_Functions_read__CSR___closed__79;
x_1250 = lean_nat_dec_eq(x_1, x_1249);
if (x_1250 == 0)
{
lean_object* x_1251; uint8_t x_1252; 
x_1251 = l_LeanRV64DExecutable_Functions_read__CSR___closed__80;
x_1252 = lean_nat_dec_eq(x_1, x_1251);
if (x_1252 == 0)
{
lean_object* x_1253; uint8_t x_1254; 
x_1253 = l_LeanRV64DExecutable_Functions_read__CSR___closed__81;
x_1254 = lean_nat_dec_eq(x_1, x_1253);
if (x_1254 == 0)
{
lean_object* x_1255; uint8_t x_1256; 
x_1255 = l_LeanRV64DExecutable_Functions_read__CSR___closed__82;
x_1256 = lean_nat_dec_eq(x_1, x_1255);
if (x_1256 == 0)
{
x_1230 = x_1256;
goto block_1247;
}
else
{
uint8_t x_1257; 
x_1257 = l_LeanRV64DExecutable_Functions_write__CSR___closed__5;
x_1230 = x_1257;
goto block_1247;
}
}
else
{
uint8_t x_1258; lean_object* x_1259; 
lean_dec(x_1);
x_1258 = 83;
x_1259 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1258, x_3);
if (lean_obj_tag(x_1259) == 0)
{
lean_object* x_1260; lean_object* x_1261; lean_object* x_1262; 
x_1260 = lean_ctor_get(x_1259, 0);
lean_inc(x_1260);
x_1261 = lean_ctor_get(x_1259, 1);
lean_inc(x_1261);
lean_dec(x_1259);
x_1262 = l_LeanRV64DExecutable_Functions_legalize__mip(x_1260, x_2, x_1261);
lean_dec(x_2);
lean_dec(x_1260);
if (lean_obj_tag(x_1262) == 0)
{
lean_object* x_1263; lean_object* x_1264; lean_object* x_1265; lean_object* x_1266; lean_object* x_1267; 
x_1263 = lean_ctor_get(x_1262, 0);
lean_inc(x_1263);
x_1264 = lean_ctor_get(x_1262, 1);
lean_inc(x_1264);
lean_dec(x_1262);
x_1265 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1258, x_1263, x_1264);
x_1266 = lean_ctor_get(x_1265, 1);
lean_inc(x_1266);
lean_dec(x_1265);
x_1267 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1258, x_1266);
return x_1267;
}
else
{
return x_1262;
}
}
else
{
uint8_t x_1268; 
lean_dec(x_2);
x_1268 = !lean_is_exclusive(x_1259);
if (x_1268 == 0)
{
lean_object* x_1269; lean_object* x_1270; 
x_1269 = lean_ctor_get(x_1259, 0);
lean_dec(x_1269);
x_1270 = lean_box(1);
lean_ctor_set(x_1259, 0, x_1270);
return x_1259;
}
else
{
lean_object* x_1271; lean_object* x_1272; lean_object* x_1273; 
x_1271 = lean_ctor_get(x_1259, 1);
lean_inc(x_1271);
lean_dec(x_1259);
x_1272 = lean_box(1);
x_1273 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1273, 0, x_1272);
lean_ctor_set(x_1273, 1, x_1271);
return x_1273;
}
}
}
}
else
{
uint8_t x_1274; lean_object* x_1275; 
lean_dec(x_1);
x_1274 = 84;
x_1275 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1274, x_3);
if (lean_obj_tag(x_1275) == 0)
{
lean_object* x_1276; lean_object* x_1277; lean_object* x_1278; 
x_1276 = lean_ctor_get(x_1275, 0);
lean_inc(x_1276);
x_1277 = lean_ctor_get(x_1275, 1);
lean_inc(x_1277);
lean_dec(x_1275);
x_1278 = l_LeanRV64DExecutable_Functions_legalize__mie(x_1276, x_2, x_1277);
lean_dec(x_2);
lean_dec(x_1276);
if (lean_obj_tag(x_1278) == 0)
{
lean_object* x_1279; lean_object* x_1280; lean_object* x_1281; lean_object* x_1282; lean_object* x_1283; 
x_1279 = lean_ctor_get(x_1278, 0);
lean_inc(x_1279);
x_1280 = lean_ctor_get(x_1278, 1);
lean_inc(x_1280);
lean_dec(x_1278);
x_1281 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1274, x_1279, x_1280);
x_1282 = lean_ctor_get(x_1281, 1);
lean_inc(x_1282);
lean_dec(x_1281);
x_1283 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1274, x_1282);
return x_1283;
}
else
{
return x_1278;
}
}
else
{
uint8_t x_1284; 
lean_dec(x_2);
x_1284 = !lean_is_exclusive(x_1275);
if (x_1284 == 0)
{
lean_object* x_1285; lean_object* x_1286; 
x_1285 = lean_ctor_get(x_1275, 0);
lean_dec(x_1285);
x_1286 = lean_box(1);
lean_ctor_set(x_1275, 0, x_1286);
return x_1275;
}
else
{
lean_object* x_1287; lean_object* x_1288; lean_object* x_1289; 
x_1287 = lean_ctor_get(x_1275, 1);
lean_inc(x_1287);
lean_dec(x_1275);
x_1288 = lean_box(1);
x_1289 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1289, 0, x_1288);
lean_ctor_set(x_1289, 1, x_1287);
return x_1289;
}
}
}
}
else
{
uint8_t x_1290; lean_object* x_1291; 
lean_dec(x_1);
x_1290 = 85;
x_1291 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1290, x_3);
if (lean_obj_tag(x_1291) == 0)
{
lean_object* x_1292; lean_object* x_1293; lean_object* x_1294; lean_object* x_1295; lean_object* x_1296; lean_object* x_1297; 
x_1292 = lean_ctor_get(x_1291, 0);
lean_inc(x_1292);
x_1293 = lean_ctor_get(x_1291, 1);
lean_inc(x_1293);
lean_dec(x_1291);
x_1294 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_1295 = l_LeanRV64DExecutable_Functions_read__CSR___closed__55;
x_1296 = l_BitVec_setWidth(x_1294, x_1295, x_2);
lean_dec(x_2);
x_1297 = l_LeanRV64DExecutable_Functions_legalize__senvcfg(x_1292, x_1296, x_1293);
lean_dec(x_1296);
lean_dec(x_1292);
if (lean_obj_tag(x_1297) == 0)
{
lean_object* x_1298; lean_object* x_1299; lean_object* x_1300; lean_object* x_1301; lean_object* x_1302; 
x_1298 = lean_ctor_get(x_1297, 0);
lean_inc(x_1298);
x_1299 = lean_ctor_get(x_1297, 1);
lean_inc(x_1299);
lean_dec(x_1297);
x_1300 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1290, x_1298, x_1299);
x_1301 = lean_ctor_get(x_1300, 1);
lean_inc(x_1301);
lean_dec(x_1300);
x_1302 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1290, x_1301);
if (lean_obj_tag(x_1302) == 0)
{
uint8_t x_1303; 
x_1303 = !lean_is_exclusive(x_1302);
if (x_1303 == 0)
{
lean_object* x_1304; lean_object* x_1305; lean_object* x_1306; lean_object* x_1307; 
x_1304 = lean_ctor_get(x_1302, 0);
x_1305 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_1306 = lean_unsigned_to_nat(0u);
x_1307 = l_BitVec_extractLsb___redArg(x_1305, x_1306, x_1304);
lean_dec(x_1304);
lean_ctor_set(x_1302, 0, x_1307);
return x_1302;
}
else
{
lean_object* x_1308; lean_object* x_1309; lean_object* x_1310; lean_object* x_1311; lean_object* x_1312; lean_object* x_1313; 
x_1308 = lean_ctor_get(x_1302, 0);
x_1309 = lean_ctor_get(x_1302, 1);
lean_inc(x_1309);
lean_inc(x_1308);
lean_dec(x_1302);
x_1310 = l_LeanRV64DExecutable_Functions_read__CSR___closed__11;
x_1311 = lean_unsigned_to_nat(0u);
x_1312 = l_BitVec_extractLsb___redArg(x_1310, x_1311, x_1308);
lean_dec(x_1308);
x_1313 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1313, 0, x_1312);
lean_ctor_set(x_1313, 1, x_1309);
return x_1313;
}
}
else
{
uint8_t x_1314; 
x_1314 = !lean_is_exclusive(x_1302);
if (x_1314 == 0)
{
lean_object* x_1315; lean_object* x_1316; 
x_1315 = lean_ctor_get(x_1302, 0);
lean_dec(x_1315);
x_1316 = lean_box(1);
lean_ctor_set(x_1302, 0, x_1316);
return x_1302;
}
else
{
lean_object* x_1317; lean_object* x_1318; lean_object* x_1319; 
x_1317 = lean_ctor_get(x_1302, 1);
lean_inc(x_1317);
lean_dec(x_1302);
x_1318 = lean_box(1);
x_1319 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1319, 0, x_1318);
lean_ctor_set(x_1319, 1, x_1317);
return x_1319;
}
}
}
else
{
return x_1297;
}
}
else
{
uint8_t x_1320; 
lean_dec(x_2);
x_1320 = !lean_is_exclusive(x_1291);
if (x_1320 == 0)
{
lean_object* x_1321; lean_object* x_1322; 
x_1321 = lean_ctor_get(x_1291, 0);
lean_dec(x_1321);
x_1322 = lean_box(1);
lean_ctor_set(x_1291, 0, x_1322);
return x_1291;
}
else
{
lean_object* x_1323; lean_object* x_1324; lean_object* x_1325; 
x_1323 = lean_ctor_get(x_1291, 1);
lean_inc(x_1323);
lean_dec(x_1291);
x_1324 = lean_box(1);
x_1325 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1325, 0, x_1324);
lean_ctor_set(x_1325, 1, x_1323);
return x_1325;
}
}
}
}
else
{
uint8_t x_1326; lean_object* x_1327; 
lean_dec(x_1);
x_1326 = 86;
x_1327 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1326, x_3);
if (lean_obj_tag(x_1327) == 0)
{
lean_object* x_1328; lean_object* x_1329; lean_object* x_1330; 
x_1328 = lean_ctor_get(x_1327, 0);
lean_inc(x_1328);
x_1329 = lean_ctor_get(x_1327, 1);
lean_inc(x_1329);
lean_dec(x_1327);
x_1330 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1326, x_1329);
if (lean_obj_tag(x_1330) == 0)
{
lean_object* x_1331; lean_object* x_1332; lean_object* x_1333; lean_object* x_1334; lean_object* x_1335; lean_object* x_1336; lean_object* x_1337; lean_object* x_1338; lean_object* x_1339; lean_object* x_1340; lean_object* x_1341; lean_object* x_1342; 
x_1331 = lean_ctor_get(x_1330, 0);
lean_inc(x_1331);
x_1332 = lean_ctor_get(x_1330, 1);
lean_inc(x_1332);
lean_dec(x_1330);
x_1333 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_1334 = lean_unsigned_to_nat(31u);
x_1335 = lean_unsigned_to_nat(0u);
x_1336 = lean_unsigned_to_nat(32u);
x_1337 = l_LeanRV64DExecutable_Functions_write__CSR___closed__2;
x_1338 = lean_unsigned_to_nat(64u);
x_1339 = l_BitVec_extractLsb___redArg(x_1334, x_1335, x_1331);
lean_dec(x_1331);
x_1340 = l_BitVec_append___redArg(x_1336, x_2, x_1339);
lean_dec(x_1339);
lean_dec(x_2);
x_1341 = l_BitVec_setWidth(x_1337, x_1338, x_1340);
lean_dec(x_1340);
x_1342 = l_LeanRV64DExecutable_Functions_legalize__menvcfg(x_1328, x_1341, x_1332);
lean_dec(x_1341);
lean_dec(x_1328);
if (lean_obj_tag(x_1342) == 0)
{
lean_object* x_1343; lean_object* x_1344; lean_object* x_1345; lean_object* x_1346; lean_object* x_1347; 
x_1343 = lean_ctor_get(x_1342, 0);
lean_inc(x_1343);
x_1344 = lean_ctor_get(x_1342, 1);
lean_inc(x_1344);
lean_dec(x_1342);
x_1345 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1326, x_1343, x_1344);
x_1346 = lean_ctor_get(x_1345, 1);
lean_inc(x_1346);
lean_dec(x_1345);
x_1347 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1326, x_1346);
if (lean_obj_tag(x_1347) == 0)
{
uint8_t x_1348; 
x_1348 = !lean_is_exclusive(x_1347);
if (x_1348 == 0)
{
lean_object* x_1349; lean_object* x_1350; lean_object* x_1351; lean_object* x_1352; 
x_1349 = lean_ctor_get(x_1347, 0);
x_1350 = lean_unsigned_to_nat(63u);
x_1351 = l_BitVec_extractLsb___redArg(x_1350, x_1336, x_1349);
lean_dec(x_1349);
x_1352 = l_BitVec_setWidth(x_1336, x_1333, x_1351);
lean_dec(x_1351);
lean_ctor_set(x_1347, 0, x_1352);
return x_1347;
}
else
{
lean_object* x_1353; lean_object* x_1354; lean_object* x_1355; lean_object* x_1356; lean_object* x_1357; lean_object* x_1358; 
x_1353 = lean_ctor_get(x_1347, 0);
x_1354 = lean_ctor_get(x_1347, 1);
lean_inc(x_1354);
lean_inc(x_1353);
lean_dec(x_1347);
x_1355 = lean_unsigned_to_nat(63u);
x_1356 = l_BitVec_extractLsb___redArg(x_1355, x_1336, x_1353);
lean_dec(x_1353);
x_1357 = l_BitVec_setWidth(x_1336, x_1333, x_1356);
lean_dec(x_1356);
x_1358 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1358, 0, x_1357);
lean_ctor_set(x_1358, 1, x_1354);
return x_1358;
}
}
else
{
uint8_t x_1359; 
x_1359 = !lean_is_exclusive(x_1347);
if (x_1359 == 0)
{
lean_object* x_1360; lean_object* x_1361; 
x_1360 = lean_ctor_get(x_1347, 0);
lean_dec(x_1360);
x_1361 = lean_box(1);
lean_ctor_set(x_1347, 0, x_1361);
return x_1347;
}
else
{
lean_object* x_1362; lean_object* x_1363; lean_object* x_1364; 
x_1362 = lean_ctor_get(x_1347, 1);
lean_inc(x_1362);
lean_dec(x_1347);
x_1363 = lean_box(1);
x_1364 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1364, 0, x_1363);
lean_ctor_set(x_1364, 1, x_1362);
return x_1364;
}
}
}
else
{
return x_1342;
}
}
else
{
uint8_t x_1365; 
lean_dec(x_1328);
lean_dec(x_2);
x_1365 = !lean_is_exclusive(x_1330);
if (x_1365 == 0)
{
lean_object* x_1366; lean_object* x_1367; 
x_1366 = lean_ctor_get(x_1330, 0);
lean_dec(x_1366);
x_1367 = lean_box(1);
lean_ctor_set(x_1330, 0, x_1367);
return x_1330;
}
else
{
lean_object* x_1368; lean_object* x_1369; lean_object* x_1370; 
x_1368 = lean_ctor_get(x_1330, 1);
lean_inc(x_1368);
lean_dec(x_1330);
x_1369 = lean_box(1);
x_1370 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1370, 0, x_1369);
lean_ctor_set(x_1370, 1, x_1368);
return x_1370;
}
}
}
else
{
uint8_t x_1371; 
lean_dec(x_2);
x_1371 = !lean_is_exclusive(x_1327);
if (x_1371 == 0)
{
lean_object* x_1372; lean_object* x_1373; 
x_1372 = lean_ctor_get(x_1327, 0);
lean_dec(x_1372);
x_1373 = lean_box(1);
lean_ctor_set(x_1327, 0, x_1373);
return x_1327;
}
else
{
lean_object* x_1374; lean_object* x_1375; lean_object* x_1376; 
x_1374 = lean_ctor_get(x_1327, 1);
lean_inc(x_1374);
lean_dec(x_1327);
x_1375 = lean_box(1);
x_1376 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1376, 0, x_1375);
lean_ctor_set(x_1376, 1, x_1374);
return x_1376;
}
}
}
}
block_1398:
{
if (x_1378 == 0)
{
lean_object* x_1379; uint8_t x_1380; 
x_1379 = l_LeanRV64DExecutable_Functions_read__CSR___closed__86;
x_1380 = lean_nat_dec_eq(x_1, x_1379);
if (x_1380 == 0)
{
x_1248 = x_1380;
goto block_1377;
}
else
{
uint8_t x_1381; 
x_1381 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_1248 = x_1381;
goto block_1377;
}
}
else
{
uint8_t x_1382; lean_object* x_1383; 
lean_dec(x_1);
x_1382 = 86;
x_1383 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1382, x_3);
if (lean_obj_tag(x_1383) == 0)
{
lean_object* x_1384; lean_object* x_1385; lean_object* x_1386; 
x_1384 = lean_ctor_get(x_1383, 0);
lean_inc(x_1384);
x_1385 = lean_ctor_get(x_1383, 1);
lean_inc(x_1385);
lean_dec(x_1383);
x_1386 = l_LeanRV64DExecutable_Functions_legalize__menvcfg(x_1384, x_2, x_1385);
lean_dec(x_2);
lean_dec(x_1384);
if (lean_obj_tag(x_1386) == 0)
{
lean_object* x_1387; lean_object* x_1388; lean_object* x_1389; lean_object* x_1390; lean_object* x_1391; 
x_1387 = lean_ctor_get(x_1386, 0);
lean_inc(x_1387);
x_1388 = lean_ctor_get(x_1386, 1);
lean_inc(x_1388);
lean_dec(x_1386);
x_1389 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1382, x_1387, x_1388);
x_1390 = lean_ctor_get(x_1389, 1);
lean_inc(x_1390);
lean_dec(x_1389);
x_1391 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1382, x_1390);
return x_1391;
}
else
{
return x_1386;
}
}
else
{
uint8_t x_1392; 
lean_dec(x_2);
x_1392 = !lean_is_exclusive(x_1383);
if (x_1392 == 0)
{
lean_object* x_1393; lean_object* x_1394; 
x_1393 = lean_ctor_get(x_1383, 0);
lean_dec(x_1393);
x_1394 = lean_box(1);
lean_ctor_set(x_1383, 0, x_1394);
return x_1383;
}
else
{
lean_object* x_1395; lean_object* x_1396; lean_object* x_1397; 
x_1395 = lean_ctor_get(x_1383, 1);
lean_inc(x_1395);
lean_dec(x_1383);
x_1396 = lean_box(1);
x_1397 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1397, 0, x_1396);
lean_ctor_set(x_1397, 1, x_1395);
return x_1397;
}
}
}
}
block_1455:
{
if (x_1399 == 0)
{
lean_object* x_1400; uint8_t x_1401; 
x_1400 = l_LeanRV64DExecutable_Functions_read__CSR___closed__85;
x_1401 = lean_nat_dec_eq(x_1, x_1400);
if (x_1401 == 0)
{
x_1378 = x_1401;
goto block_1398;
}
else
{
uint8_t x_1402; 
x_1402 = l_LeanRV64DExecutable_Functions_write__CSR___closed__5;
x_1378 = x_1402;
goto block_1398;
}
}
else
{
uint8_t x_1403; lean_object* x_1404; 
lean_dec(x_1);
x_1403 = 86;
x_1404 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1403, x_3);
if (lean_obj_tag(x_1404) == 0)
{
lean_object* x_1405; lean_object* x_1406; lean_object* x_1407; 
x_1405 = lean_ctor_get(x_1404, 0);
lean_inc(x_1405);
x_1406 = lean_ctor_get(x_1404, 1);
lean_inc(x_1406);
lean_dec(x_1404);
x_1407 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1403, x_1406);
if (lean_obj_tag(x_1407) == 0)
{
lean_object* x_1408; lean_object* x_1409; lean_object* x_1410; lean_object* x_1411; lean_object* x_1412; lean_object* x_1413; lean_object* x_1414; lean_object* x_1415; lean_object* x_1416; lean_object* x_1417; lean_object* x_1418; 
x_1408 = lean_ctor_get(x_1407, 0);
lean_inc(x_1408);
x_1409 = lean_ctor_get(x_1407, 1);
lean_inc(x_1409);
lean_dec(x_1407);
x_1410 = lean_unsigned_to_nat(63u);
x_1411 = lean_unsigned_to_nat(32u);
x_1412 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_1413 = l_LeanRV64DExecutable_Functions_write__CSR___closed__3;
x_1414 = lean_unsigned_to_nat(64u);
x_1415 = l_BitVec_extractLsb___redArg(x_1410, x_1411, x_1408);
lean_dec(x_1408);
x_1416 = l_BitVec_append___redArg(x_1412, x_1415, x_2);
lean_dec(x_2);
lean_dec(x_1415);
x_1417 = l_BitVec_setWidth(x_1413, x_1414, x_1416);
lean_dec(x_1416);
x_1418 = l_LeanRV64DExecutable_Functions_legalize__menvcfg(x_1405, x_1417, x_1409);
lean_dec(x_1417);
lean_dec(x_1405);
if (lean_obj_tag(x_1418) == 0)
{
lean_object* x_1419; lean_object* x_1420; lean_object* x_1421; lean_object* x_1422; lean_object* x_1423; 
x_1419 = lean_ctor_get(x_1418, 0);
lean_inc(x_1419);
x_1420 = lean_ctor_get(x_1418, 1);
lean_inc(x_1420);
lean_dec(x_1418);
x_1421 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1403, x_1419, x_1420);
x_1422 = lean_ctor_get(x_1421, 1);
lean_inc(x_1422);
lean_dec(x_1421);
x_1423 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1403, x_1422);
if (lean_obj_tag(x_1423) == 0)
{
uint8_t x_1424; 
x_1424 = !lean_is_exclusive(x_1423);
if (x_1424 == 0)
{
lean_object* x_1425; lean_object* x_1426; lean_object* x_1427; lean_object* x_1428; lean_object* x_1429; 
x_1425 = lean_ctor_get(x_1423, 0);
x_1426 = lean_unsigned_to_nat(31u);
x_1427 = lean_unsigned_to_nat(0u);
x_1428 = l_BitVec_extractLsb___redArg(x_1426, x_1427, x_1425);
lean_dec(x_1425);
x_1429 = l_BitVec_setWidth(x_1411, x_1412, x_1428);
lean_dec(x_1428);
lean_ctor_set(x_1423, 0, x_1429);
return x_1423;
}
else
{
lean_object* x_1430; lean_object* x_1431; lean_object* x_1432; lean_object* x_1433; lean_object* x_1434; lean_object* x_1435; lean_object* x_1436; 
x_1430 = lean_ctor_get(x_1423, 0);
x_1431 = lean_ctor_get(x_1423, 1);
lean_inc(x_1431);
lean_inc(x_1430);
lean_dec(x_1423);
x_1432 = lean_unsigned_to_nat(31u);
x_1433 = lean_unsigned_to_nat(0u);
x_1434 = l_BitVec_extractLsb___redArg(x_1432, x_1433, x_1430);
lean_dec(x_1430);
x_1435 = l_BitVec_setWidth(x_1411, x_1412, x_1434);
lean_dec(x_1434);
x_1436 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1436, 0, x_1435);
lean_ctor_set(x_1436, 1, x_1431);
return x_1436;
}
}
else
{
uint8_t x_1437; 
x_1437 = !lean_is_exclusive(x_1423);
if (x_1437 == 0)
{
lean_object* x_1438; lean_object* x_1439; 
x_1438 = lean_ctor_get(x_1423, 0);
lean_dec(x_1438);
x_1439 = lean_box(1);
lean_ctor_set(x_1423, 0, x_1439);
return x_1423;
}
else
{
lean_object* x_1440; lean_object* x_1441; lean_object* x_1442; 
x_1440 = lean_ctor_get(x_1423, 1);
lean_inc(x_1440);
lean_dec(x_1423);
x_1441 = lean_box(1);
x_1442 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1442, 0, x_1441);
lean_ctor_set(x_1442, 1, x_1440);
return x_1442;
}
}
}
else
{
return x_1418;
}
}
else
{
uint8_t x_1443; 
lean_dec(x_1405);
lean_dec(x_2);
x_1443 = !lean_is_exclusive(x_1407);
if (x_1443 == 0)
{
lean_object* x_1444; lean_object* x_1445; 
x_1444 = lean_ctor_get(x_1407, 0);
lean_dec(x_1444);
x_1445 = lean_box(1);
lean_ctor_set(x_1407, 0, x_1445);
return x_1407;
}
else
{
lean_object* x_1446; lean_object* x_1447; lean_object* x_1448; 
x_1446 = lean_ctor_get(x_1407, 1);
lean_inc(x_1446);
lean_dec(x_1407);
x_1447 = lean_box(1);
x_1448 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1448, 0, x_1447);
lean_ctor_set(x_1448, 1, x_1446);
return x_1448;
}
}
}
else
{
uint8_t x_1449; 
lean_dec(x_2);
x_1449 = !lean_is_exclusive(x_1404);
if (x_1449 == 0)
{
lean_object* x_1450; lean_object* x_1451; 
x_1450 = lean_ctor_get(x_1404, 0);
lean_dec(x_1450);
x_1451 = lean_box(1);
lean_ctor_set(x_1404, 0, x_1451);
return x_1404;
}
else
{
lean_object* x_1452; lean_object* x_1453; lean_object* x_1454; 
x_1452 = lean_ctor_get(x_1404, 1);
lean_inc(x_1452);
lean_dec(x_1404);
x_1453 = lean_box(1);
x_1454 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1454, 0, x_1453);
lean_ctor_set(x_1454, 1, x_1452);
return x_1454;
}
}
}
}
block_1511:
{
if (x_1456 == 0)
{
lean_object* x_1457; uint8_t x_1458; 
x_1457 = l_LeanRV64DExecutable_Functions_read__CSR___closed__85;
x_1458 = lean_nat_dec_eq(x_1, x_1457);
if (x_1458 == 0)
{
x_1399 = x_1458;
goto block_1455;
}
else
{
uint8_t x_1459; 
x_1459 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_1399 = x_1459;
goto block_1455;
}
}
else
{
uint8_t x_1460; lean_object* x_1461; 
lean_dec(x_1);
x_1460 = 87;
x_1461 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1460, x_3);
if (lean_obj_tag(x_1461) == 0)
{
lean_object* x_1462; lean_object* x_1463; lean_object* x_1464; 
x_1462 = lean_ctor_get(x_1461, 0);
lean_inc(x_1462);
x_1463 = lean_ctor_get(x_1461, 1);
lean_inc(x_1463);
lean_dec(x_1461);
x_1464 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1460, x_1463);
if (lean_obj_tag(x_1464) == 0)
{
lean_object* x_1465; lean_object* x_1466; lean_object* x_1467; lean_object* x_1468; lean_object* x_1469; lean_object* x_1470; lean_object* x_1471; lean_object* x_1472; lean_object* x_1473; lean_object* x_1474; lean_object* x_1475; lean_object* x_1476; 
x_1465 = lean_ctor_get(x_1464, 0);
lean_inc(x_1465);
x_1466 = lean_ctor_get(x_1464, 1);
lean_inc(x_1466);
lean_dec(x_1464);
x_1467 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_1468 = lean_unsigned_to_nat(31u);
x_1469 = lean_unsigned_to_nat(0u);
x_1470 = lean_unsigned_to_nat(32u);
x_1471 = l_LeanRV64DExecutable_Functions_write__CSR___closed__2;
x_1472 = lean_unsigned_to_nat(64u);
x_1473 = l_BitVec_extractLsb___redArg(x_1468, x_1469, x_1465);
lean_dec(x_1465);
x_1474 = l_BitVec_append___redArg(x_1470, x_2, x_1473);
lean_dec(x_1473);
lean_dec(x_2);
x_1475 = l_BitVec_setWidth(x_1471, x_1472, x_1474);
lean_dec(x_1474);
x_1476 = l_LeanRV64DExecutable_Functions_legalize__mstatus(x_1462, x_1475, x_1466);
lean_dec(x_1475);
lean_dec(x_1462);
if (lean_obj_tag(x_1476) == 0)
{
lean_object* x_1477; lean_object* x_1478; lean_object* x_1479; lean_object* x_1480; lean_object* x_1481; 
x_1477 = lean_ctor_get(x_1476, 0);
lean_inc(x_1477);
x_1478 = lean_ctor_get(x_1476, 1);
lean_inc(x_1478);
lean_dec(x_1476);
x_1479 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1460, x_1477, x_1478);
x_1480 = lean_ctor_get(x_1479, 1);
lean_inc(x_1480);
lean_dec(x_1479);
x_1481 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1460, x_1480);
if (lean_obj_tag(x_1481) == 0)
{
uint8_t x_1482; 
x_1482 = !lean_is_exclusive(x_1481);
if (x_1482 == 0)
{
lean_object* x_1483; lean_object* x_1484; lean_object* x_1485; lean_object* x_1486; 
x_1483 = lean_ctor_get(x_1481, 0);
x_1484 = lean_unsigned_to_nat(63u);
x_1485 = l_BitVec_extractLsb___redArg(x_1484, x_1470, x_1483);
lean_dec(x_1483);
x_1486 = l_BitVec_setWidth(x_1470, x_1467, x_1485);
lean_dec(x_1485);
lean_ctor_set(x_1481, 0, x_1486);
return x_1481;
}
else
{
lean_object* x_1487; lean_object* x_1488; lean_object* x_1489; lean_object* x_1490; lean_object* x_1491; lean_object* x_1492; 
x_1487 = lean_ctor_get(x_1481, 0);
x_1488 = lean_ctor_get(x_1481, 1);
lean_inc(x_1488);
lean_inc(x_1487);
lean_dec(x_1481);
x_1489 = lean_unsigned_to_nat(63u);
x_1490 = l_BitVec_extractLsb___redArg(x_1489, x_1470, x_1487);
lean_dec(x_1487);
x_1491 = l_BitVec_setWidth(x_1470, x_1467, x_1490);
lean_dec(x_1490);
x_1492 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1492, 0, x_1491);
lean_ctor_set(x_1492, 1, x_1488);
return x_1492;
}
}
else
{
uint8_t x_1493; 
x_1493 = !lean_is_exclusive(x_1481);
if (x_1493 == 0)
{
lean_object* x_1494; lean_object* x_1495; 
x_1494 = lean_ctor_get(x_1481, 0);
lean_dec(x_1494);
x_1495 = lean_box(1);
lean_ctor_set(x_1481, 0, x_1495);
return x_1481;
}
else
{
lean_object* x_1496; lean_object* x_1497; lean_object* x_1498; 
x_1496 = lean_ctor_get(x_1481, 1);
lean_inc(x_1496);
lean_dec(x_1481);
x_1497 = lean_box(1);
x_1498 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1498, 0, x_1497);
lean_ctor_set(x_1498, 1, x_1496);
return x_1498;
}
}
}
else
{
return x_1476;
}
}
else
{
uint8_t x_1499; 
lean_dec(x_1462);
lean_dec(x_2);
x_1499 = !lean_is_exclusive(x_1464);
if (x_1499 == 0)
{
lean_object* x_1500; lean_object* x_1501; 
x_1500 = lean_ctor_get(x_1464, 0);
lean_dec(x_1500);
x_1501 = lean_box(1);
lean_ctor_set(x_1464, 0, x_1501);
return x_1464;
}
else
{
lean_object* x_1502; lean_object* x_1503; lean_object* x_1504; 
x_1502 = lean_ctor_get(x_1464, 1);
lean_inc(x_1502);
lean_dec(x_1464);
x_1503 = lean_box(1);
x_1504 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1504, 0, x_1503);
lean_ctor_set(x_1504, 1, x_1502);
return x_1504;
}
}
}
else
{
uint8_t x_1505; 
lean_dec(x_2);
x_1505 = !lean_is_exclusive(x_1461);
if (x_1505 == 0)
{
lean_object* x_1506; lean_object* x_1507; 
x_1506 = lean_ctor_get(x_1461, 0);
lean_dec(x_1506);
x_1507 = lean_box(1);
lean_ctor_set(x_1461, 0, x_1507);
return x_1461;
}
else
{
lean_object* x_1508; lean_object* x_1509; lean_object* x_1510; 
x_1508 = lean_ctor_get(x_1461, 1);
lean_inc(x_1508);
lean_dec(x_1461);
x_1509 = lean_box(1);
x_1510 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1510, 0, x_1509);
lean_ctor_set(x_1510, 1, x_1508);
return x_1510;
}
}
}
}
block_1568:
{
if (x_1512 == 0)
{
lean_object* x_1513; uint8_t x_1514; 
x_1513 = l_LeanRV64DExecutable_Functions_read__CSR___closed__87;
x_1514 = lean_nat_dec_eq(x_1, x_1513);
if (x_1514 == 0)
{
x_1456 = x_1514;
goto block_1511;
}
else
{
uint8_t x_1515; 
x_1515 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_1456 = x_1515;
goto block_1511;
}
}
else
{
uint8_t x_1516; lean_object* x_1517; 
lean_dec(x_1);
x_1516 = 87;
x_1517 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1516, x_3);
if (lean_obj_tag(x_1517) == 0)
{
lean_object* x_1518; lean_object* x_1519; lean_object* x_1520; 
x_1518 = lean_ctor_get(x_1517, 0);
lean_inc(x_1518);
x_1519 = lean_ctor_get(x_1517, 1);
lean_inc(x_1519);
lean_dec(x_1517);
x_1520 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1516, x_1519);
if (lean_obj_tag(x_1520) == 0)
{
lean_object* x_1521; lean_object* x_1522; lean_object* x_1523; lean_object* x_1524; lean_object* x_1525; lean_object* x_1526; lean_object* x_1527; lean_object* x_1528; lean_object* x_1529; lean_object* x_1530; lean_object* x_1531; 
x_1521 = lean_ctor_get(x_1520, 0);
lean_inc(x_1521);
x_1522 = lean_ctor_get(x_1520, 1);
lean_inc(x_1522);
lean_dec(x_1520);
x_1523 = lean_unsigned_to_nat(63u);
x_1524 = lean_unsigned_to_nat(32u);
x_1525 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_1526 = l_LeanRV64DExecutable_Functions_write__CSR___closed__3;
x_1527 = lean_unsigned_to_nat(64u);
x_1528 = l_BitVec_extractLsb___redArg(x_1523, x_1524, x_1521);
lean_dec(x_1521);
x_1529 = l_BitVec_append___redArg(x_1525, x_1528, x_2);
lean_dec(x_2);
lean_dec(x_1528);
x_1530 = l_BitVec_setWidth(x_1526, x_1527, x_1529);
lean_dec(x_1529);
x_1531 = l_LeanRV64DExecutable_Functions_legalize__mstatus(x_1518, x_1530, x_1522);
lean_dec(x_1530);
lean_dec(x_1518);
if (lean_obj_tag(x_1531) == 0)
{
lean_object* x_1532; lean_object* x_1533; lean_object* x_1534; lean_object* x_1535; lean_object* x_1536; 
x_1532 = lean_ctor_get(x_1531, 0);
lean_inc(x_1532);
x_1533 = lean_ctor_get(x_1531, 1);
lean_inc(x_1533);
lean_dec(x_1531);
x_1534 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1516, x_1532, x_1533);
x_1535 = lean_ctor_get(x_1534, 1);
lean_inc(x_1535);
lean_dec(x_1534);
x_1536 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1516, x_1535);
if (lean_obj_tag(x_1536) == 0)
{
uint8_t x_1537; 
x_1537 = !lean_is_exclusive(x_1536);
if (x_1537 == 0)
{
lean_object* x_1538; lean_object* x_1539; lean_object* x_1540; lean_object* x_1541; lean_object* x_1542; 
x_1538 = lean_ctor_get(x_1536, 0);
x_1539 = lean_unsigned_to_nat(31u);
x_1540 = lean_unsigned_to_nat(0u);
x_1541 = l_BitVec_extractLsb___redArg(x_1539, x_1540, x_1538);
lean_dec(x_1538);
x_1542 = l_BitVec_setWidth(x_1524, x_1525, x_1541);
lean_dec(x_1541);
lean_ctor_set(x_1536, 0, x_1542);
return x_1536;
}
else
{
lean_object* x_1543; lean_object* x_1544; lean_object* x_1545; lean_object* x_1546; lean_object* x_1547; lean_object* x_1548; lean_object* x_1549; 
x_1543 = lean_ctor_get(x_1536, 0);
x_1544 = lean_ctor_get(x_1536, 1);
lean_inc(x_1544);
lean_inc(x_1543);
lean_dec(x_1536);
x_1545 = lean_unsigned_to_nat(31u);
x_1546 = lean_unsigned_to_nat(0u);
x_1547 = l_BitVec_extractLsb___redArg(x_1545, x_1546, x_1543);
lean_dec(x_1543);
x_1548 = l_BitVec_setWidth(x_1524, x_1525, x_1547);
lean_dec(x_1547);
x_1549 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1549, 0, x_1548);
lean_ctor_set(x_1549, 1, x_1544);
return x_1549;
}
}
else
{
uint8_t x_1550; 
x_1550 = !lean_is_exclusive(x_1536);
if (x_1550 == 0)
{
lean_object* x_1551; lean_object* x_1552; 
x_1551 = lean_ctor_get(x_1536, 0);
lean_dec(x_1551);
x_1552 = lean_box(1);
lean_ctor_set(x_1536, 0, x_1552);
return x_1536;
}
else
{
lean_object* x_1553; lean_object* x_1554; lean_object* x_1555; 
x_1553 = lean_ctor_get(x_1536, 1);
lean_inc(x_1553);
lean_dec(x_1536);
x_1554 = lean_box(1);
x_1555 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1555, 0, x_1554);
lean_ctor_set(x_1555, 1, x_1553);
return x_1555;
}
}
}
else
{
return x_1531;
}
}
else
{
uint8_t x_1556; 
lean_dec(x_1518);
lean_dec(x_2);
x_1556 = !lean_is_exclusive(x_1520);
if (x_1556 == 0)
{
lean_object* x_1557; lean_object* x_1558; 
x_1557 = lean_ctor_get(x_1520, 0);
lean_dec(x_1557);
x_1558 = lean_box(1);
lean_ctor_set(x_1520, 0, x_1558);
return x_1520;
}
else
{
lean_object* x_1559; lean_object* x_1560; lean_object* x_1561; 
x_1559 = lean_ctor_get(x_1520, 1);
lean_inc(x_1559);
lean_dec(x_1520);
x_1560 = lean_box(1);
x_1561 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1561, 0, x_1560);
lean_ctor_set(x_1561, 1, x_1559);
return x_1561;
}
}
}
else
{
uint8_t x_1562; 
lean_dec(x_2);
x_1562 = !lean_is_exclusive(x_1517);
if (x_1562 == 0)
{
lean_object* x_1563; lean_object* x_1564; 
x_1563 = lean_ctor_get(x_1517, 0);
lean_dec(x_1563);
x_1564 = lean_box(1);
lean_ctor_set(x_1517, 0, x_1564);
return x_1517;
}
else
{
lean_object* x_1565; lean_object* x_1566; lean_object* x_1567; 
x_1565 = lean_ctor_get(x_1517, 1);
lean_inc(x_1565);
lean_dec(x_1517);
x_1566 = lean_box(1);
x_1567 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1567, 0, x_1566);
lean_ctor_set(x_1567, 1, x_1565);
return x_1567;
}
}
}
}
block_1589:
{
if (x_1569 == 0)
{
lean_object* x_1570; uint8_t x_1571; 
x_1570 = l_LeanRV64DExecutable_Functions_read__CSR___closed__84;
x_1571 = lean_nat_dec_eq(x_1, x_1570);
if (x_1571 == 0)
{
x_1512 = x_1571;
goto block_1568;
}
else
{
uint8_t x_1572; 
x_1572 = l_LeanRV64DExecutable_Functions_read__CSR___closed__8;
x_1512 = x_1572;
goto block_1568;
}
}
else
{
uint8_t x_1573; lean_object* x_1574; 
lean_dec(x_1);
x_1573 = 87;
x_1574 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1573, x_3);
if (lean_obj_tag(x_1574) == 0)
{
lean_object* x_1575; lean_object* x_1576; lean_object* x_1577; 
x_1575 = lean_ctor_get(x_1574, 0);
lean_inc(x_1575);
x_1576 = lean_ctor_get(x_1574, 1);
lean_inc(x_1576);
lean_dec(x_1574);
x_1577 = l_LeanRV64DExecutable_Functions_legalize__mstatus(x_1575, x_2, x_1576);
lean_dec(x_2);
lean_dec(x_1575);
if (lean_obj_tag(x_1577) == 0)
{
lean_object* x_1578; lean_object* x_1579; lean_object* x_1580; lean_object* x_1581; lean_object* x_1582; 
x_1578 = lean_ctor_get(x_1577, 0);
lean_inc(x_1578);
x_1579 = lean_ctor_get(x_1577, 1);
lean_inc(x_1579);
lean_dec(x_1577);
x_1580 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_set__next__pc_spec__0___redArg(x_1573, x_1578, x_1579);
x_1581 = lean_ctor_get(x_1580, 1);
lean_inc(x_1581);
lean_dec(x_1580);
x_1582 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_1573, x_1581);
return x_1582;
}
else
{
return x_1577;
}
}
else
{
uint8_t x_1583; 
lean_dec(x_2);
x_1583 = !lean_is_exclusive(x_1574);
if (x_1583 == 0)
{
lean_object* x_1584; lean_object* x_1585; 
x_1584 = lean_ctor_get(x_1574, 0);
lean_dec(x_1584);
x_1585 = lean_box(1);
lean_ctor_set(x_1574, 0, x_1585);
return x_1574;
}
else
{
lean_object* x_1586; lean_object* x_1587; lean_object* x_1588; 
x_1586 = lean_ctor_get(x_1574, 1);
lean_inc(x_1586);
lean_dec(x_1574);
x_1587 = lean_box(1);
x_1588 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1588, 0, x_1587);
lean_ctor_set(x_1588, 1, x_1586);
return x_1588;
}
}
}
}
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_doCSR___closed__0() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 1;
x_2 = l_LeanRV64DExecutable_Functions_not(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_doCSR___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_doCSR___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_doCSR(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_37; lean_object* x_38; uint8_t x_45; lean_object* x_46; 
x_45 = 90;
x_46 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_45, x_6);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = lean_unbox(x_47);
lean_dec(x_47);
x_50 = l_LeanRV64DExecutable_Functions_check__CSR(x_1, x_49, x_5, x_48);
if (lean_obj_tag(x_50) == 0)
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; uint8_t x_55; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = lean_ctor_get(x_50, 1);
x_54 = lean_unbox(x_52);
lean_dec(x_52);
x_55 = l_LeanRV64DExecutable_Functions_not(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_free_object(x_50);
x_56 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_45, x_53);
if (lean_obj_tag(x_56) == 0)
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; uint8_t x_71; 
x_58 = lean_ctor_get(x_56, 1);
x_59 = lean_ctor_get(x_56, 0);
lean_dec(x_59);
x_71 = l_LeanRV64DExecutable_Functions_doCSR___closed__0;
if (x_71 == 0)
{
uint8_t x_72; uint8_t x_73; 
lean_free_object(x_56);
x_72 = 0;
x_73 = l_beqcsrop____x40_LeanRV64DExecutable_Defs___hyg_7567_(x_4, x_72);
if (x_73 == 0)
{
x_60 = x_73;
goto block_70;
}
else
{
lean_object* x_74; uint8_t x_75; 
x_74 = l_LeanRV64DExecutable_Functions_zreg;
x_75 = lean_nat_dec_eq(x_3, x_74);
x_60 = x_75;
goto block_70;
}
}
else
{
lean_object* x_76; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_76 = l_LeanRV64DExecutable_Functions_doCSR___closed__1;
lean_ctor_set(x_56, 0, x_76);
return x_56;
}
block_70:
{
uint8_t x_61; 
x_61 = l_LeanRV64DExecutable_Functions_not(x_60);
if (x_61 == 0)
{
lean_object* x_62; 
x_62 = lean_unsigned_to_nat(0u);
x_37 = x_62;
x_38 = x_58;
goto block_44;
}
else
{
lean_object* x_63; 
lean_inc(x_1);
x_63 = l_LeanRV64DExecutable_Functions_read__CSR(x_1, x_58);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_37 = x_64;
x_38 = x_65;
goto block_44;
}
else
{
uint8_t x_66; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_66 = !lean_is_exclusive(x_63);
if (x_66 == 0)
{
return x_63;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_63, 0);
x_68 = lean_ctor_get(x_63, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_63);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
}
}
else
{
lean_object* x_77; uint8_t x_78; uint8_t x_89; 
x_77 = lean_ctor_get(x_56, 1);
lean_inc(x_77);
lean_dec(x_56);
x_89 = l_LeanRV64DExecutable_Functions_doCSR___closed__0;
if (x_89 == 0)
{
uint8_t x_90; uint8_t x_91; 
x_90 = 0;
x_91 = l_beqcsrop____x40_LeanRV64DExecutable_Defs___hyg_7567_(x_4, x_90);
if (x_91 == 0)
{
x_78 = x_91;
goto block_88;
}
else
{
lean_object* x_92; uint8_t x_93; 
x_92 = l_LeanRV64DExecutable_Functions_zreg;
x_93 = lean_nat_dec_eq(x_3, x_92);
x_78 = x_93;
goto block_88;
}
}
else
{
lean_object* x_94; lean_object* x_95; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_94 = l_LeanRV64DExecutable_Functions_doCSR___closed__1;
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_77);
return x_95;
}
block_88:
{
uint8_t x_79; 
x_79 = l_LeanRV64DExecutable_Functions_not(x_78);
if (x_79 == 0)
{
lean_object* x_80; 
x_80 = lean_unsigned_to_nat(0u);
x_37 = x_80;
x_38 = x_77;
goto block_44;
}
else
{
lean_object* x_81; 
lean_inc(x_1);
x_81 = l_LeanRV64DExecutable_Functions_read__CSR(x_1, x_77);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_37 = x_82;
x_38 = x_83;
goto block_44;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_84 = lean_ctor_get(x_81, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_81, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_86 = x_81;
} else {
 lean_dec_ref(x_81);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(1, 2, 0);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_85);
return x_87;
}
}
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_96 = !lean_is_exclusive(x_56);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_56, 0);
lean_dec(x_97);
x_98 = lean_box(1);
lean_ctor_set(x_56, 0, x_98);
return x_56;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_56, 1);
lean_inc(x_99);
lean_dec(x_56);
x_100 = lean_box(1);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_99);
return x_101;
}
}
}
else
{
lean_object* x_102; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_102 = l_LeanRV64DExecutable_Functions_doCSR___closed__2;
lean_ctor_set(x_50, 0, x_102);
return x_50;
}
}
else
{
lean_object* x_103; lean_object* x_104; uint8_t x_105; uint8_t x_106; 
x_103 = lean_ctor_get(x_50, 0);
x_104 = lean_ctor_get(x_50, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_50);
x_105 = lean_unbox(x_103);
lean_dec(x_103);
x_106 = l_LeanRV64DExecutable_Functions_not(x_105);
if (x_106 == 0)
{
lean_object* x_107; 
x_107 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_45, x_104);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; uint8_t x_110; uint8_t x_121; 
x_108 = lean_ctor_get(x_107, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 x_109 = x_107;
} else {
 lean_dec_ref(x_107);
 x_109 = lean_box(0);
}
x_121 = l_LeanRV64DExecutable_Functions_doCSR___closed__0;
if (x_121 == 0)
{
uint8_t x_122; uint8_t x_123; 
lean_dec(x_109);
x_122 = 0;
x_123 = l_beqcsrop____x40_LeanRV64DExecutable_Defs___hyg_7567_(x_4, x_122);
if (x_123 == 0)
{
x_110 = x_123;
goto block_120;
}
else
{
lean_object* x_124; uint8_t x_125; 
x_124 = l_LeanRV64DExecutable_Functions_zreg;
x_125 = lean_nat_dec_eq(x_3, x_124);
x_110 = x_125;
goto block_120;
}
}
else
{
lean_object* x_126; lean_object* x_127; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_126 = l_LeanRV64DExecutable_Functions_doCSR___closed__1;
if (lean_is_scalar(x_109)) {
 x_127 = lean_alloc_ctor(0, 2, 0);
} else {
 x_127 = x_109;
}
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_108);
return x_127;
}
block_120:
{
uint8_t x_111; 
x_111 = l_LeanRV64DExecutable_Functions_not(x_110);
if (x_111 == 0)
{
lean_object* x_112; 
x_112 = lean_unsigned_to_nat(0u);
x_37 = x_112;
x_38 = x_108;
goto block_44;
}
else
{
lean_object* x_113; 
lean_inc(x_1);
x_113 = l_LeanRV64DExecutable_Functions_read__CSR(x_1, x_108);
if (lean_obj_tag(x_113) == 0)
{
lean_object* x_114; lean_object* x_115; 
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_113, 1);
lean_inc(x_115);
lean_dec(x_113);
x_37 = x_114;
x_38 = x_115;
goto block_44;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_116 = lean_ctor_get(x_113, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_113, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 x_118 = x_113;
} else {
 lean_dec_ref(x_113);
 x_118 = lean_box(0);
}
if (lean_is_scalar(x_118)) {
 x_119 = lean_alloc_ctor(1, 2, 0);
} else {
 x_119 = x_118;
}
lean_ctor_set(x_119, 0, x_116);
lean_ctor_set(x_119, 1, x_117);
return x_119;
}
}
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_128 = lean_ctor_get(x_107, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 x_129 = x_107;
} else {
 lean_dec_ref(x_107);
 x_129 = lean_box(0);
}
x_130 = lean_box(1);
if (lean_is_scalar(x_129)) {
 x_131 = lean_alloc_ctor(1, 2, 0);
} else {
 x_131 = x_129;
}
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_128);
return x_131;
}
}
else
{
lean_object* x_132; lean_object* x_133; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_132 = l_LeanRV64DExecutable_Functions_doCSR___closed__2;
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_104);
return x_133;
}
}
}
else
{
uint8_t x_134; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_134 = !lean_is_exclusive(x_50);
if (x_134 == 0)
{
return x_50;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_50, 0);
x_136 = lean_ctor_get(x_50, 1);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_50);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
return x_137;
}
}
}
else
{
uint8_t x_138; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_138 = !lean_is_exclusive(x_46);
if (x_138 == 0)
{
lean_object* x_139; lean_object* x_140; 
x_139 = lean_ctor_get(x_46, 0);
lean_dec(x_139);
x_140 = lean_box(1);
lean_ctor_set(x_46, 0, x_140);
return x_46;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_141 = lean_ctor_get(x_46, 1);
lean_inc(x_141);
lean_dec(x_46);
x_142 = lean_box(1);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_141);
return x_143;
}
}
block_25:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_LeanRV64DExecutable_Functions_wX(x_3, x_7, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
x_13 = l_LeanRV64DExecutable_Functions_RETIRE__SUCCESS;
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = l_LeanRV64DExecutable_Functions_RETIRE__SUCCESS;
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_10);
if (x_17 == 0)
{
return x_10;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_10, 0);
x_19 = lean_ctor_get(x_10, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_10);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
uint8_t x_21; 
lean_dec(x_7);
lean_dec(x_3);
x_21 = !lean_is_exclusive(x_8);
if (x_21 == 0)
{
return x_8;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_8, 0);
x_23 = lean_ctor_get(x_8, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_8);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
block_36:
{
lean_object* x_29; 
lean_inc(x_1);
x_29 = l_LeanRV64DExecutable_Functions_write__CSR(x_1, x_28, x_26);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = l_LeanRV64DExecutable_Functions_csr__id__write__callback___redArg(x_1, x_30);
x_7 = x_27;
x_8 = x_31;
goto block_25;
}
else
{
uint8_t x_32; 
lean_dec(x_27);
lean_dec(x_3);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_29);
if (x_32 == 0)
{
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_29, 0);
x_34 = lean_ctor_get(x_29, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_29);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
block_44:
{
if (x_5 == 0)
{
lean_object* x_39; 
lean_dec(x_2);
x_39 = l_LeanRV64DExecutable_Functions_csr__id__read__callback___redArg(x_1, x_38);
x_7 = x_37;
x_8 = x_39;
goto block_25;
}
else
{
switch (x_4) {
case 0:
{
x_26 = x_38;
x_27 = x_37;
x_28 = x_2;
goto block_36;
}
case 1:
{
lean_object* x_40; 
x_40 = lean_nat_lor(x_37, x_2);
lean_dec(x_2);
x_26 = x_38;
x_27 = x_37;
x_28 = x_40;
goto block_36;
}
default: 
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = l_LeanRV64DExecutable_Functions_read__CSR___closed__0;
x_42 = l_BitVec_not(x_41, x_2);
lean_dec(x_2);
x_43 = lean_nat_land(x_37, x_42);
lean_dec(x_42);
x_26 = x_38;
x_27 = x_37;
x_28 = x_43;
goto block_36;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_doCSR___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; uint8_t x_8; lean_object* x_9; 
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = lean_unbox(x_5);
lean_dec(x_5);
x_9 = l_LeanRV64DExecutable_Functions_doCSR(x_1, x_2, x_3, x_7, x_8, x_6);
return x_9;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("csrrw", 5, 5);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("csrrs", 5, 5);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("csrrc", 5, 5);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__0;
x_4 = lean_string_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__1;
x_6 = lean_string_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__2;
x_8 = lean_string_dec_eq(x_1, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_LeanRV64DExecutable_Functions_encdec__csrop__backwards___closed__0;
x_10 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_dec__bits__1__forwards_spec__0___redArg(x_8, x_9, x_2);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
x_13 = lean_box(0);
lean_ctor_set_tag(x_10, 1);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_10);
if (x_17 == 0)
{
return x_10;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_10, 0);
x_19 = lean_ctor_get(x_10, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_10);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_21 = 2;
x_22 = lean_box(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_2);
return x_23;
}
}
else
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_24 = 1;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_2);
return x_26;
}
}
else
{
uint8_t x_27; lean_object* x_28; lean_object* x_29; 
x_27 = 0;
x_28 = lean_box(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_2);
return x_29;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_csr__mnemonic__forwards__matches(uint8_t x_1) {
_start:
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_csr__mnemonic__forwards__matches___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_LeanRV64DExecutable_Functions_csr__mnemonic__forwards__matches(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards__matches(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__0;
x_3 = lean_string_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__1;
x_5 = lean_string_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__2;
x_7 = lean_string_dec_eq(x_1, x_6);
return x_7;
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
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards__matches___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards__matches(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Prelude(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvErrors(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvXlen(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvTypes(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvCallbacks(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvRegs(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSysRegs(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvPmpRegs(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvExtRegs(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvVextRegs(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvVextControl(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSysExceptions(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvZihpm(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSscofpmf(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvZkrControl(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSmcntrpmf(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSysControl(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvInstRetire(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvInstsZicsr(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
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
res = initialize_LeanRV64DExecutable_RiscvTypes(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvCallbacks(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSysRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvPmpRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvExtRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvVextRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvVextControl(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSysExceptions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvZihpm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSscofpmf(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvZkrControl(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSmcntrpmf(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSysControl(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvInstRetire(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__0 = _init_l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__0);
l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__1 = _init_l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__1);
l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__2 = _init_l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__csrop__forwards___closed__2);
l_LeanRV64DExecutable_Functions_encdec__csrop__backwards___closed__0 = _init_l_LeanRV64DExecutable_Functions_encdec__csrop__backwards___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_encdec__csrop__backwards___closed__0);
l_LeanRV64DExecutable_Functions_read__CSR___closed__0 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__0);
l_LeanRV64DExecutable_Functions_read__CSR___closed__1 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__1);
l_LeanRV64DExecutable_Functions_read__CSR___closed__2 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__2);
l_LeanRV64DExecutable_Functions_read__CSR___closed__3 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__3);
l_LeanRV64DExecutable_Functions_read__CSR___closed__4 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__4);
l_LeanRV64DExecutable_Functions_read__CSR___closed__5 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__5);
l_LeanRV64DExecutable_Functions_read__CSR___closed__6 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__6();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__6);
l_LeanRV64DExecutable_Functions_read__CSR___closed__7 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__7();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__7);
l_LeanRV64DExecutable_Functions_read__CSR___closed__8 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__8();
l_LeanRV64DExecutable_Functions_read__CSR___closed__9 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__9();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__9);
l_LeanRV64DExecutable_Functions_read__CSR___closed__10 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__10();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__10);
l_LeanRV64DExecutable_Functions_read__CSR___closed__11 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__11();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__11);
l_LeanRV64DExecutable_Functions_read__CSR___closed__12 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__12();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__12);
l_LeanRV64DExecutable_Functions_read__CSR___closed__13 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__13();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__13);
l_LeanRV64DExecutable_Functions_read__CSR___closed__14 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__14();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__14);
l_LeanRV64DExecutable_Functions_read__CSR___closed__15 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__15();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__15);
l_LeanRV64DExecutable_Functions_read__CSR___closed__16 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__16();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__16);
l_LeanRV64DExecutable_Functions_read__CSR___closed__17 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__17();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__17);
l_LeanRV64DExecutable_Functions_read__CSR___closed__18 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__18();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__18);
l_LeanRV64DExecutable_Functions_read__CSR___closed__19 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__19();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__19);
l_LeanRV64DExecutable_Functions_read__CSR___closed__20 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__20();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__20);
l_LeanRV64DExecutable_Functions_read__CSR___closed__21 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__21();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__21);
l_LeanRV64DExecutable_Functions_read__CSR___closed__22 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__22();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__22);
l_LeanRV64DExecutable_Functions_read__CSR___closed__23 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__23();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__23);
l_LeanRV64DExecutable_Functions_read__CSR___closed__24 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__24();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__24);
l_LeanRV64DExecutable_Functions_read__CSR___closed__25 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__25();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__25);
l_LeanRV64DExecutable_Functions_read__CSR___closed__26 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__26();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__26);
l_LeanRV64DExecutable_Functions_read__CSR___closed__27 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__27();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__27);
l_LeanRV64DExecutable_Functions_read__CSR___closed__28 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__28();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__28);
l_LeanRV64DExecutable_Functions_read__CSR___closed__29 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__29();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__29);
l_LeanRV64DExecutable_Functions_read__CSR___closed__30 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__30();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__30);
l_LeanRV64DExecutable_Functions_read__CSR___closed__31 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__31();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__31);
l_LeanRV64DExecutable_Functions_read__CSR___closed__32 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__32();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__32);
l_LeanRV64DExecutable_Functions_read__CSR___closed__33 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__33();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__33);
l_LeanRV64DExecutable_Functions_read__CSR___closed__34 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__34();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__34);
l_LeanRV64DExecutable_Functions_read__CSR___closed__35 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__35();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__35);
l_LeanRV64DExecutable_Functions_read__CSR___closed__36 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__36();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__36);
l_LeanRV64DExecutable_Functions_read__CSR___closed__37 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__37();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__37);
l_LeanRV64DExecutable_Functions_read__CSR___closed__38 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__38();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__38);
l_LeanRV64DExecutable_Functions_read__CSR___closed__39 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__39();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__39);
l_LeanRV64DExecutable_Functions_read__CSR___closed__40 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__40();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__40);
l_LeanRV64DExecutable_Functions_read__CSR___closed__41 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__41();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__41);
l_LeanRV64DExecutable_Functions_read__CSR___closed__42 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__42();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__42);
l_LeanRV64DExecutable_Functions_read__CSR___closed__43 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__43();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__43);
l_LeanRV64DExecutable_Functions_read__CSR___closed__44 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__44();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__44);
l_LeanRV64DExecutable_Functions_read__CSR___closed__45 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__45();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__45);
l_LeanRV64DExecutable_Functions_read__CSR___closed__46 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__46();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__46);
l_LeanRV64DExecutable_Functions_read__CSR___closed__47 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__47();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__47);
l_LeanRV64DExecutable_Functions_read__CSR___closed__48 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__48();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__48);
l_LeanRV64DExecutable_Functions_read__CSR___closed__49 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__49();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__49);
l_LeanRV64DExecutable_Functions_read__CSR___closed__50 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__50();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__50);
l_LeanRV64DExecutable_Functions_read__CSR___closed__51 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__51();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__51);
l_LeanRV64DExecutable_Functions_read__CSR___closed__52 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__52();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__52);
l_LeanRV64DExecutable_Functions_read__CSR___closed__53 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__53();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__53);
l_LeanRV64DExecutable_Functions_read__CSR___closed__54 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__54();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__54);
l_LeanRV64DExecutable_Functions_read__CSR___closed__55 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__55();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__55);
l_LeanRV64DExecutable_Functions_read__CSR___closed__56 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__56();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__56);
l_LeanRV64DExecutable_Functions_read__CSR___closed__57 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__57();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__57);
l_LeanRV64DExecutable_Functions_read__CSR___closed__58 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__58();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__58);
l_LeanRV64DExecutable_Functions_read__CSR___closed__59 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__59();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__59);
l_LeanRV64DExecutable_Functions_read__CSR___closed__60 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__60();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__60);
l_LeanRV64DExecutable_Functions_read__CSR___closed__61 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__61();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__61);
l_LeanRV64DExecutable_Functions_read__CSR___closed__62 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__62();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__62);
l_LeanRV64DExecutable_Functions_read__CSR___closed__63 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__63();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__63);
l_LeanRV64DExecutable_Functions_read__CSR___closed__64 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__64();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__64);
l_LeanRV64DExecutable_Functions_read__CSR___closed__65 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__65();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__65);
l_LeanRV64DExecutable_Functions_read__CSR___closed__66 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__66();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__66);
l_LeanRV64DExecutable_Functions_read__CSR___closed__67 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__67();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__67);
l_LeanRV64DExecutable_Functions_read__CSR___closed__68 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__68();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__68);
l_LeanRV64DExecutable_Functions_read__CSR___closed__69 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__69();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__69);
l_LeanRV64DExecutable_Functions_read__CSR___closed__70 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__70();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__70);
l_LeanRV64DExecutable_Functions_read__CSR___closed__71 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__71();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__71);
l_LeanRV64DExecutable_Functions_read__CSR___closed__72 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__72();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__72);
l_LeanRV64DExecutable_Functions_read__CSR___closed__73 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__73();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__73);
l_LeanRV64DExecutable_Functions_read__CSR___closed__74 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__74();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__74);
l_LeanRV64DExecutable_Functions_read__CSR___closed__75 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__75();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__75);
l_LeanRV64DExecutable_Functions_read__CSR___closed__76 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__76();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__76);
l_LeanRV64DExecutable_Functions_read__CSR___closed__77 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__77();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__77);
l_LeanRV64DExecutable_Functions_read__CSR___closed__78 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__78();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__78);
l_LeanRV64DExecutable_Functions_read__CSR___closed__79 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__79();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__79);
l_LeanRV64DExecutable_Functions_read__CSR___closed__80 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__80();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__80);
l_LeanRV64DExecutable_Functions_read__CSR___closed__81 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__81();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__81);
l_LeanRV64DExecutable_Functions_read__CSR___closed__82 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__82();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__82);
l_LeanRV64DExecutable_Functions_read__CSR___closed__83 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__83();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__83);
l_LeanRV64DExecutable_Functions_read__CSR___closed__84 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__84();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__84);
l_LeanRV64DExecutable_Functions_read__CSR___closed__85 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__85();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__85);
l_LeanRV64DExecutable_Functions_read__CSR___closed__86 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__86();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__86);
l_LeanRV64DExecutable_Functions_read__CSR___closed__87 = _init_l_LeanRV64DExecutable_Functions_read__CSR___closed__87();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__CSR___closed__87);
l_LeanRV64DExecutable_Functions_write__CSR___closed__0 = _init_l_LeanRV64DExecutable_Functions_write__CSR___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_write__CSR___closed__0);
l_LeanRV64DExecutable_Functions_write__CSR___closed__1 = _init_l_LeanRV64DExecutable_Functions_write__CSR___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_write__CSR___closed__1);
l_LeanRV64DExecutable_Functions_write__CSR___closed__2 = _init_l_LeanRV64DExecutable_Functions_write__CSR___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_write__CSR___closed__2);
l_LeanRV64DExecutable_Functions_write__CSR___closed__3 = _init_l_LeanRV64DExecutable_Functions_write__CSR___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_write__CSR___closed__3);
l_LeanRV64DExecutable_Functions_write__CSR___closed__4 = _init_l_LeanRV64DExecutable_Functions_write__CSR___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_write__CSR___closed__4);
l_LeanRV64DExecutable_Functions_write__CSR___closed__5 = _init_l_LeanRV64DExecutable_Functions_write__CSR___closed__5();
l_LeanRV64DExecutable_Functions_doCSR___closed__0 = _init_l_LeanRV64DExecutable_Functions_doCSR___closed__0();
l_LeanRV64DExecutable_Functions_doCSR___closed__1 = _init_l_LeanRV64DExecutable_Functions_doCSR___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_doCSR___closed__1);
l_LeanRV64DExecutable_Functions_doCSR___closed__2 = _init_l_LeanRV64DExecutable_Functions_doCSR___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_doCSR___closed__2);
l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__0 = _init_l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__0);
l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__1 = _init_l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__1);
l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__2 = _init_l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_csr__mnemonic__backwards___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
