// Lean compiler output
// Module: LeanRV64DExecutable.RiscvSysControl
// Imports: Init LeanRV64DExecutable.Flow LeanRV64DExecutable.Prelude LeanRV64DExecutable.RiscvErrors LeanRV64DExecutable.RiscvXlen LeanRV64DExecutable.RiscvExtensions LeanRV64DExecutable.RiscvTypes LeanRV64DExecutable.RiscvCallbacks LeanRV64DExecutable.RiscvPcAccess LeanRV64DExecutable.RiscvSysRegs LeanRV64DExecutable.RiscvPmpRegs LeanRV64DExecutable.RiscvPmpControl LeanRV64DExecutable.RiscvSysExceptions
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
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__52;
lean_object* l_LeanRV64DExecutable_Functions_set__next__pc(lean_object*, lean_object*);
static uint8_t l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__8;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__40;
lean_object* l_LeanRV64DExecutable_Functions_reset__pmp___redArg(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_internal__error___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_csr__name__write__callback___redArg(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__13;
static lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__9;
lean_object* l_LeanRV64DExecutable_Functions_privLevel__bits__forwards(uint8_t);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_check__CSR__priv(lean_object*, uint8_t);
lean_object* l_BitVec_setWidth(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__misa___boxed(lean_object*, lean_object*);
uint8_t l_LeanRV64DExecutable_Functions_not(uint8_t);
static uint8_t l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__6;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__42;
static uint8_t l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__21;
static lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__1;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__3;
static lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__14;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_feature__enabled__for__priv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__18;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__39;
static uint8_t l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__10;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_getPendingSet(uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__12;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__26;
static lean_object* l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__0;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__31;
static lean_object* l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1;
static lean_object* l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__5;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__61;
lean_object* l_LeanRV64DExecutable_Functions___get__Mstatus__SIE(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_check__Counteren___closed__1;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__51;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__65;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__29;
uint8_t l_beqPrivilege____x40_LeanRV64DExecutable_Defs___hyg_4812_(uint8_t, uint8_t);
static lean_object* l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__17;
static lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__0;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__56;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_exception__handler(uint8_t, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__9;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_findPendingInterrupt___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__Stimecmp(lean_object*, uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_track__trap___closed__1;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_track__trap___boxed(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__57;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_trap__handler___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_append___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_handle__interrupt(uint8_t, uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__46;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_dispatchInterrupt___boxed(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__28;
static lean_object* l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__4;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__15;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__43;
static lean_object* l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__1;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__38;
lean_object* l_LeanRV64DExecutable_Functions___get__Minterrupts__SEI(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__49;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__70;
lean_object* l_LeanRV64DExecutable_Functions___get__MEnvcfg__STCE(lean_object*);
static uint8_t l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__0;
static lean_object* l_LeanRV64DExecutable_Functions_track__trap___closed__0;
lean_object* l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(uint8_t, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__Minterrupts__SSI(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__30;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__19;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_shouldWakeForInterrupt(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__10;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__4;
lean_object* l_LeanRV64DExecutable_Functions_bool__bit__backwards(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__Mstatus__MIE(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__misa___redArg(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_getPendingSet___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__CSR___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_track__trap___closed__8;
lean_object* l_LeanRV64DExecutable_Functions___get__Mstatus__MPP(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__7;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__1;
static uint8_t l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__2;
static lean_object* l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__2;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__17;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_tval(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__22;
static lean_object* l_LeanRV64DExecutable_Functions_check__Stimecmp___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__TVM__SATP(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__CSR(lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_BitVec_not(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_MemoryOpResult__drop__meta(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__50;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_track__trap(uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__54;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__misa(lean_object*, lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__Counteren__TM(lean_object*);
static uint8_t l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__16;
lean_object* l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(uint8_t, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__6;
static lean_object* l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__7;
extern lean_object* l_LeanRV64DExecutable_Functions_sys__pmp__count;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__2;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__34;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__CSR__priv___boxed(lean_object*, lean_object*);
lean_object* l_Sail_BitVec_access(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__62;
static lean_object* l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__0;
lean_object* l_BitVec_ofNat(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_track__trap___closed__5;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__Counteren(lean_object*, uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_track__trap___closed__6;
lean_object* l_LeanRV64DExecutable_Functions___get__Mstatus__TVM(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_getPendingSet___closed__0;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__21;
static lean_object* l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__3;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__33;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__8;
static lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__11;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__23;
static lean_object* l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__9;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__35;
lean_object* l_LeanRV64DExecutable_Functions___get__Mstatus__MPIE(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__20;
static lean_object* l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__11;
lean_object* l_BitVec_extractLsb___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__63;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__25;
lean_object* l_LeanRV64DExecutable_Functions_get__xepc(uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__27;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_tval___boxed(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_bool__bits__forwards(uint8_t);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__55;
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_check__CSR__access(lean_object*, uint8_t);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__64;
lean_object* lean_nat_land(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__13;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_csrAccess___boxed(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__68;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__18;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__sys(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_csrPriv(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__60;
lean_object* l_LeanRV64DExecutable_Functions_privLevel__bits__backwards(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__Minterrupts__STI(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_exception__delegatee___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__10;
uint8_t l_LeanRV64DExecutable_Functions_hartSupports(uint8_t);
static uint8_t l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__4;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__32;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__44;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_handle__mem__exception(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_trap__handler(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_LeanRV64DExecutable_Functions_xlen;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__53;
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_currentlyEnabled(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__sys___redArg(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__Stimecmp___boxed(lean_object*, lean_object*, lean_object*);
static uint8_t l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
static lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__4;
lean_object* l_LeanRV64DExecutable_Functions___get__Mstatus__SPP(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_check__seed__CSR___closed__0;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_feature__enabled__for__priv(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__Minterrupts__MSI(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__CSR__access___boxed(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__58;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__sys___boxed(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__13;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__Counteren___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__45;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_exception__handler___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_handle__interrupt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_MemoryOpResult__add__meta(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_track__trap___closed__7;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__seed__CSR___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__47;
lean_object* lean_int_mul(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__37;
lean_object* l_LeanRV64DExecutable_Functions___get__Minterrupts__MEI(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_dec__bits__1__forwards_spec__0___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Sail_BitVec_updateSubrange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_prepare__trap__vector(uint8_t, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_reset__sys___redArg___closed__0;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_interruptType__to__bits(uint8_t);
static lean_object* l_LeanRV64DExecutable_Functions_track__trap___closed__4;
static lean_object* l_LeanRV64DExecutable_Functions_track__trap___closed__9;
lean_object* l_Int_toNat(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__5;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_handle__exception(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__3;
static lean_object* l_LeanRV64DExecutable_Functions_track__trap___closed__3;
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__11;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__48;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__36;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_check__CSR__access___closed__0;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__69;
static lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__2;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__14;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_csrPriv___boxed(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__5;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__20;
static lean_object* l_LeanRV64DExecutable_Functions_check__Counteren___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_dispatchInterrupt(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_exception__delegatee(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_findPendingInterrupt(lean_object*);
lean_object* l_cancel__reservation___redArg(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_MemoryOpResult__add__meta___redArg(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__16;
static uint8_t l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__14;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__59;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__TVM__SATP___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_shouldWakeForInterrupt___redArg(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__67;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_exception__handler___lam__0___boxed(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__7;
static lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__8;
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_exceptionType__to__bits(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_exception__handler___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__Mstatus__SPIE(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_track__trap___closed__2;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_MemoryOpResult__drop__meta___redArg(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__6;
lean_object* l_LeanRV64DExecutable_Functions_num__of__ExceptionType(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_check__Stimecmp___closed__1;
static lean_object* l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__5;
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_check__seed__CSR(lean_object*, uint8_t, uint8_t);
static lean_object* l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__3;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_shouldWakeForInterrupt___boxed(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_getPendingSet___closed__1;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_csrAccess(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__Minterrupts__MTI(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__12;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__41;
static lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__66;
static lean_object* l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__19;
static lean_object* l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__1;
static uint8_t l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__12;
static lean_object* l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__15;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_csrAccess(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(11u);
x_3 = lean_unsigned_to_nat(10u);
x_4 = l_BitVec_extractLsb___redArg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_csrAccess___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_csrAccess(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_csrPriv(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(9u);
x_3 = lean_unsigned_to_nat(8u);
x_4 = l_BitVec_extractLsb___redArg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_csrPriv___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_csrPriv(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_check__CSR__priv(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_LeanRV64DExecutable_Functions_privLevel__bits__forwards(x_2);
x_4 = l_LeanRV64DExecutable_Functions_csrPriv(x_1);
x_5 = lean_nat_dec_le(x_4, x_3);
lean_dec(x_3);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__CSR__priv___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_LeanRV64DExecutable_Functions_check__CSR__priv(x_1, x_3);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_check__CSR__access___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_unsigned_to_nat(2u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_check__CSR__access(lean_object* x_1, uint8_t x_2) {
_start:
{
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = l_LeanRV64DExecutable_Functions_not(x_2);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_4 = l_LeanRV64DExecutable_Functions_csrAccess(x_1);
x_5 = l_LeanRV64DExecutable_Functions_check__CSR__access___closed__0;
x_6 = lean_nat_dec_eq(x_4, x_5);
lean_dec(x_4);
x_7 = l_LeanRV64DExecutable_Functions_not(x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__CSR__access___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_LeanRV64DExecutable_Functions_check__CSR__access(x_1, x_3);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(384u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_BitVec_ofNat(x_1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__TVM__SATP(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = 87;
x_5 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_4, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_14; uint8_t x_15; 
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
x_14 = l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__0;
x_15 = lean_nat_dec_eq(x_1, x_14);
if (x_15 == 0)
{
lean_dec(x_6);
x_9 = x_15;
goto block_13;
}
else
{
uint8_t x_16; uint8_t x_17; 
x_16 = 1;
x_17 = l_beqPrivilege____x40_LeanRV64DExecutable_Defs___hyg_4812_(x_2, x_16);
if (x_17 == 0)
{
lean_dec(x_6);
x_9 = x_17;
goto block_13;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = l_LeanRV64DExecutable_Functions___get__Mstatus__TVM(x_6);
lean_dec(x_6);
x_19 = l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1;
x_20 = lean_nat_dec_eq(x_18, x_19);
lean_dec(x_18);
x_9 = x_20;
goto block_13;
}
}
block_13:
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_LeanRV64DExecutable_Functions_not(x_9);
x_11 = lean_box(x_10);
if (lean_is_scalar(x_8)) {
 x_12 = lean_alloc_ctor(0, 2, 0);
} else {
 x_12 = x_8;
}
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_7);
return x_12;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_5);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_5, 0);
lean_dec(x_22);
x_23 = lean_box(1);
lean_ctor_set(x_5, 0, x_23);
return x_5;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_5, 1);
lean_inc(x_24);
lean_dec(x_5);
x_25 = lean_box(1);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__TVM__SATP___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_LeanRV64DExecutable_Functions_check__TVM__SATP(x_1, x_4, x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_feature__enabled__for__priv(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (x_1) {
case 0:
{
uint8_t x_5; lean_object* x_6; 
x_5 = 6;
x_6 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1;
x_10 = lean_nat_dec_eq(x_2, x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_8);
x_11 = lean_box(x_10);
lean_ctor_set(x_6, 0, x_11);
return x_6;
}
else
{
uint8_t x_12; uint8_t x_13; 
x_12 = lean_unbox(x_8);
lean_dec(x_8);
x_13 = l_LeanRV64DExecutable_Functions_not(x_12);
if (x_13 == 0)
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_nat_dec_eq(x_3, x_9);
x_15 = lean_box(x_14);
lean_ctor_set(x_6, 0, x_15);
return x_6;
}
else
{
lean_object* x_16; 
x_16 = lean_box(x_13);
lean_ctor_set(x_6, 0, x_16);
return x_6;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_6, 0);
x_18 = lean_ctor_get(x_6, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_6);
x_19 = l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1;
x_20 = lean_nat_dec_eq(x_2, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_17);
x_21 = lean_box(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
else
{
uint8_t x_23; uint8_t x_24; 
x_23 = lean_unbox(x_17);
lean_dec(x_17);
x_24 = l_LeanRV64DExecutable_Functions_not(x_23);
if (x_24 == 0)
{
uint8_t x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_nat_dec_eq(x_3, x_19);
x_26 = lean_box(x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_18);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_box(x_24);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_18);
return x_29;
}
}
}
}
else
{
return x_6;
}
}
case 1:
{
lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; 
x_30 = l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1;
x_31 = lean_nat_dec_eq(x_2, x_30);
x_32 = lean_box(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_4);
return x_33;
}
default: 
{
uint8_t x_34; lean_object* x_35; lean_object* x_36; 
x_34 = 1;
x_35 = lean_box(x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_4);
return x_36;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_feature__enabled__for__priv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_LeanRV64DExecutable_Functions_feature__enabled__for__priv(x_5, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_check__Counteren___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3072u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_check__Counteren___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3103u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__Counteren(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_35; uint8_t x_36; 
x_35 = l_LeanRV64DExecutable_Functions_check__Counteren___closed__0;
x_36 = lean_nat_dec_lt(x_1, x_35);
if (x_36 == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = l_LeanRV64DExecutable_Functions_check__Counteren___closed__1;
x_38 = lean_nat_dec_lt(x_37, x_1);
x_4 = x_38;
goto block_34;
}
else
{
x_4 = x_36;
goto block_34;
}
block_34:
{
if (x_4 == 0)
{
uint8_t x_5; lean_object* x_6; 
x_5 = 74;
x_6 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_5, x_3);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = 75;
x_10 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_9, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(4u);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_BitVec_extractLsb___redArg(x_13, x_14, x_1);
x_16 = lean_unsigned_to_nat(32u);
x_17 = l_Sail_BitVec_access(x_16, x_7, x_15);
lean_dec(x_7);
x_18 = l_Sail_BitVec_access(x_16, x_11, x_15);
lean_dec(x_15);
lean_dec(x_11);
x_19 = l_LeanRV64DExecutable_Functions_feature__enabled__for__priv(x_2, x_17, x_18, x_12);
lean_dec(x_18);
lean_dec(x_17);
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_7);
x_20 = !lean_is_exclusive(x_10);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_10, 0);
lean_dec(x_21);
x_22 = lean_box(1);
lean_ctor_set(x_10, 0, x_22);
return x_10;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_10, 1);
lean_inc(x_23);
lean_dec(x_10);
x_24 = lean_box(1);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
}
else
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_6);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_6, 0);
lean_dec(x_27);
x_28 = lean_box(1);
lean_ctor_set(x_6, 0, x_28);
return x_6;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_6, 1);
lean_inc(x_29);
lean_dec(x_6);
x_30 = lean_box(1);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_box(x_4);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_3);
return x_33;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__Counteren___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_LeanRV64DExecutable_Functions_check__Counteren(x_1, x_4, x_3);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_check__Stimecmp___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(333u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_check__Stimecmp___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(349u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__Stimecmp(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = 74;
x_5 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_4, x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = 86;
x_10 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_9, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_32; uint8_t x_33; 
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
x_32 = l_LeanRV64DExecutable_Functions_check__Stimecmp___closed__0;
x_33 = lean_nat_dec_eq(x_1, x_32);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
x_34 = l_LeanRV64DExecutable_Functions_check__Stimecmp___closed__1;
x_35 = lean_nat_dec_eq(x_1, x_34);
if (x_35 == 0)
{
uint8_t x_36; lean_object* x_37; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_7);
x_36 = 1;
x_37 = lean_box(x_36);
lean_ctor_set(x_5, 1, x_12);
lean_ctor_set(x_5, 0, x_37);
return x_5;
}
else
{
lean_free_object(x_5);
goto block_31;
}
}
else
{
lean_free_object(x_5);
goto block_31;
}
block_31:
{
uint8_t x_14; uint8_t x_15; 
x_14 = 2;
x_15 = l_beqPrivilege____x40_LeanRV64DExecutable_Defs___hyg_4812_(x_2, x_14);
if (x_15 == 0)
{
uint8_t x_16; uint8_t x_17; 
x_16 = 1;
x_17 = l_beqPrivilege____x40_LeanRV64DExecutable_Defs___hyg_4812_(x_2, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_11);
lean_dec(x_7);
x_18 = lean_box(x_17);
if (lean_is_scalar(x_13)) {
 x_19 = lean_alloc_ctor(0, 2, 0);
} else {
 x_19 = x_13;
}
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_12);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = l_LeanRV64DExecutable_Functions___get__Counteren__TM(x_7);
lean_dec(x_7);
x_21 = l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1;
x_22 = lean_nat_dec_eq(x_20, x_21);
lean_dec(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_11);
x_23 = lean_box(x_22);
if (lean_is_scalar(x_13)) {
 x_24 = lean_alloc_ctor(0, 2, 0);
} else {
 x_24 = x_13;
}
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_12);
return x_24;
}
else
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_25 = l_LeanRV64DExecutable_Functions___get__MEnvcfg__STCE(x_11);
lean_dec(x_11);
x_26 = lean_nat_dec_eq(x_25, x_21);
lean_dec(x_25);
x_27 = lean_box(x_26);
if (lean_is_scalar(x_13)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_13;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_12);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_11);
lean_dec(x_7);
x_29 = lean_box(x_15);
if (lean_is_scalar(x_13)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_13;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_12);
return x_30;
}
}
}
else
{
uint8_t x_38; 
lean_free_object(x_5);
lean_dec(x_7);
x_38 = !lean_is_exclusive(x_10);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_10, 0);
lean_dec(x_39);
x_40 = lean_box(1);
lean_ctor_set(x_10, 0, x_40);
return x_10;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_10, 1);
lean_inc(x_41);
lean_dec(x_10);
x_42 = lean_box(1);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_5, 0);
x_45 = lean_ctor_get(x_5, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_5);
x_46 = 86;
x_47 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_46, x_45);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_69; uint8_t x_70; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_50 = x_47;
} else {
 lean_dec_ref(x_47);
 x_50 = lean_box(0);
}
x_69 = l_LeanRV64DExecutable_Functions_check__Stimecmp___closed__0;
x_70 = lean_nat_dec_eq(x_1, x_69);
if (x_70 == 0)
{
lean_object* x_71; uint8_t x_72; 
x_71 = l_LeanRV64DExecutable_Functions_check__Stimecmp___closed__1;
x_72 = lean_nat_dec_eq(x_1, x_71);
if (x_72 == 0)
{
uint8_t x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_50);
lean_dec(x_48);
lean_dec(x_44);
x_73 = 1;
x_74 = lean_box(x_73);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_49);
return x_75;
}
else
{
goto block_68;
}
}
else
{
goto block_68;
}
block_68:
{
uint8_t x_51; uint8_t x_52; 
x_51 = 2;
x_52 = l_beqPrivilege____x40_LeanRV64DExecutable_Defs___hyg_4812_(x_2, x_51);
if (x_52 == 0)
{
uint8_t x_53; uint8_t x_54; 
x_53 = 1;
x_54 = l_beqPrivilege____x40_LeanRV64DExecutable_Defs___hyg_4812_(x_2, x_53);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_48);
lean_dec(x_44);
x_55 = lean_box(x_54);
if (lean_is_scalar(x_50)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_50;
}
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_49);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_57 = l_LeanRV64DExecutable_Functions___get__Counteren__TM(x_44);
lean_dec(x_44);
x_58 = l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1;
x_59 = lean_nat_dec_eq(x_57, x_58);
lean_dec(x_57);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; 
lean_dec(x_48);
x_60 = lean_box(x_59);
if (lean_is_scalar(x_50)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_50;
}
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_49);
return x_61;
}
else
{
lean_object* x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; 
x_62 = l_LeanRV64DExecutable_Functions___get__MEnvcfg__STCE(x_48);
lean_dec(x_48);
x_63 = lean_nat_dec_eq(x_62, x_58);
lean_dec(x_62);
x_64 = lean_box(x_63);
if (lean_is_scalar(x_50)) {
 x_65 = lean_alloc_ctor(0, 2, 0);
} else {
 x_65 = x_50;
}
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_49);
return x_65;
}
}
}
else
{
lean_object* x_66; lean_object* x_67; 
lean_dec(x_48);
lean_dec(x_44);
x_66 = lean_box(x_52);
if (lean_is_scalar(x_50)) {
 x_67 = lean_alloc_ctor(0, 2, 0);
} else {
 x_67 = x_50;
}
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_49);
return x_67;
}
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_44);
x_76 = lean_ctor_get(x_47, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_77 = x_47;
} else {
 lean_dec_ref(x_47);
 x_77 = lean_box(0);
}
x_78 = lean_box(1);
if (lean_is_scalar(x_77)) {
 x_79 = lean_alloc_ctor(1, 2, 0);
} else {
 x_79 = x_77;
}
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_76);
return x_79;
}
}
}
else
{
uint8_t x_80; 
x_80 = !lean_is_exclusive(x_5);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_5, 0);
lean_dec(x_81);
x_82 = lean_box(1);
lean_ctor_set(x_5, 0, x_82);
return x_5;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_5, 1);
lean_inc(x_83);
lean_dec(x_5);
x_84 = lean_box(1);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__Stimecmp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_LeanRV64DExecutable_Functions_check__Stimecmp(x_1, x_4, x_3);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_check__seed__CSR___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(21u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_check__seed__CSR(lean_object* x_1, uint8_t x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; uint8_t x_6; 
x_4 = l_LeanRV64DExecutable_Functions_check__seed__CSR___closed__0;
x_5 = lean_nat_dec_eq(x_1, x_4);
x_6 = l_LeanRV64DExecutable_Functions_not(x_5);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = l_LeanRV64DExecutable_Functions_not(x_3);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_box(x_2);
if (lean_obj_tag(x_8) == 2)
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
else
{
lean_dec(x_8);
return x_7;
}
}
else
{
return x_6;
}
}
else
{
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__seed__CSR___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = l_LeanRV64DExecutable_Functions_check__seed__CSR(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(769u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(768u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(784u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(778u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(794u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(266u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(772u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(836u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(770u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3488u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3073u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3074u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3200u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3201u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3202u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2816u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2818u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2944u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2946u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(801u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1825u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(802u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1826u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__23;
x_2 = l_LeanRV64DExecutable_Functions_xlen;
x_3 = lean_int_dec_eq(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(57u);
x_2 = lean_unsigned_to_nat(7u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(100u);
x_2 = lean_unsigned_to_nat(7u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(96u);
x_2 = lean_unsigned_to_nat(7u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(92u);
x_2 = lean_unsigned_to_nat(7u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(88u);
x_2 = lean_unsigned_to_nat(7u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(786u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(771u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__32() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(834u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__33() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(835u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(832u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__35() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(262u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__36() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(774u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__37() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(800u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__38() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3857u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__39() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3858u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__40() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3859u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__41() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3860u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__42() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3861u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__43() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(256u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__44() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(324u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__45() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(260u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__46() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(320u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__47() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(322u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__48() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(323u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__49() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1952u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__50() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(58u);
x_2 = lean_unsigned_to_nat(8u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__51() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(59u);
x_2 = lean_unsigned_to_nat(8u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__52() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(60u);
x_2 = lean_unsigned_to_nat(8u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__53() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(61u);
x_2 = lean_unsigned_to_nat(8u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__54() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(62u);
x_2 = lean_unsigned_to_nat(8u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__55() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__56() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(9u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__57() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__58() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(15u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__59() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3104u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__60() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3105u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__61() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3106u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__62() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(261u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__63() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(321u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__64() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(773u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__65() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(833u);
x_2 = lean_unsigned_to_nat(12u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__66() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(25u);
x_2 = lean_unsigned_to_nat(7u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__67() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = l_BitVec_ofNat(x_1, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__68() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_unsigned_to_nat(2u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__69() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(2u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__70() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_7; lean_object* x_11; lean_object* x_15; lean_object* x_19; lean_object* x_23; lean_object* x_27; lean_object* x_32; uint8_t x_33; 
x_32 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__0;
x_33 = lean_nat_dec_eq(x_1, x_32);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
x_34 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__1;
x_35 = lean_nat_dec_eq(x_1, x_34);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; 
x_36 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__2;
x_37 = lean_nat_dec_eq(x_1, x_36);
if (x_37 == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__3;
x_39 = lean_nat_dec_eq(x_1, x_38);
if (x_39 == 0)
{
uint8_t x_40; lean_object* x_41; 
x_40 = 7;
x_41 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_40, x_2);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
x_44 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__4;
x_45 = lean_nat_dec_eq(x_1, x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
lean_dec(x_42);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_46 = x_41;
} else {
 lean_dec_ref(x_41);
 x_46 = lean_box(0);
}
x_47 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__5;
x_48 = lean_nat_dec_eq(x_1, x_47);
if (x_48 == 0)
{
lean_object* x_49; uint8_t x_50; 
x_49 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__6;
x_50 = lean_nat_dec_eq(x_1, x_49);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; 
x_51 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__7;
x_52 = lean_nat_dec_eq(x_1, x_51);
if (x_52 == 0)
{
lean_object* x_53; uint8_t x_54; 
x_53 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__8;
x_54 = lean_nat_dec_eq(x_1, x_53);
if (x_54 == 0)
{
uint8_t x_55; uint8_t x_56; lean_object* x_57; uint8_t x_58; lean_object* x_59; uint8_t x_60; lean_object* x_240; uint8_t x_241; uint8_t x_242; lean_object* x_243; uint8_t x_244; lean_object* x_267; uint8_t x_268; lean_object* x_269; uint8_t x_270; uint8_t x_271; lean_object* x_295; uint8_t x_296; lean_object* x_297; uint8_t x_298; uint8_t x_299; lean_object* x_321; 
x_55 = 6;
x_321 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_55, x_43);
if (lean_obj_tag(x_321) == 0)
{
lean_object* x_322; lean_object* x_323; uint8_t x_324; uint8_t x_342; lean_object* x_354; uint8_t x_355; 
x_322 = lean_ctor_get(x_321, 0);
lean_inc(x_322);
x_323 = lean_ctor_get(x_321, 1);
lean_inc(x_323);
x_354 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__30;
x_355 = lean_nat_dec_eq(x_1, x_354);
if (x_355 == 0)
{
uint8_t x_356; 
lean_dec(x_322);
x_356 = !lean_is_exclusive(x_321);
if (x_356 == 0)
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; uint8_t x_360; 
x_357 = lean_ctor_get(x_321, 1);
lean_dec(x_357);
x_358 = lean_ctor_get(x_321, 0);
lean_dec(x_358);
x_359 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__31;
x_360 = lean_nat_dec_eq(x_1, x_359);
if (x_360 == 0)
{
lean_object* x_361; uint8_t x_362; 
x_361 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__32;
x_362 = lean_nat_dec_eq(x_1, x_361);
if (x_362 == 0)
{
lean_object* x_363; uint8_t x_364; 
x_363 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__33;
x_364 = lean_nat_dec_eq(x_1, x_363);
if (x_364 == 0)
{
lean_object* x_365; uint8_t x_366; 
x_365 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__34;
x_366 = lean_nat_dec_eq(x_1, x_365);
if (x_366 == 0)
{
lean_object* x_367; uint8_t x_368; 
x_367 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__35;
x_368 = lean_nat_dec_eq(x_1, x_367);
if (x_368 == 0)
{
lean_object* x_369; uint8_t x_370; 
x_369 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__36;
x_370 = lean_nat_dec_eq(x_1, x_369);
if (x_370 == 0)
{
lean_object* x_371; uint8_t x_372; 
x_371 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__37;
x_372 = lean_nat_dec_eq(x_1, x_371);
if (x_372 == 0)
{
lean_object* x_373; uint8_t x_374; 
x_373 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__38;
x_374 = lean_nat_dec_eq(x_1, x_373);
if (x_374 == 0)
{
lean_object* x_375; uint8_t x_376; 
x_375 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__39;
x_376 = lean_nat_dec_eq(x_1, x_375);
if (x_376 == 0)
{
lean_object* x_377; uint8_t x_378; 
x_377 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__40;
x_378 = lean_nat_dec_eq(x_1, x_377);
if (x_378 == 0)
{
lean_object* x_379; uint8_t x_380; 
x_379 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__41;
x_380 = lean_nat_dec_eq(x_1, x_379);
if (x_380 == 0)
{
lean_object* x_381; uint8_t x_382; 
x_381 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__42;
x_382 = lean_nat_dec_eq(x_1, x_381);
if (x_382 == 0)
{
lean_object* x_383; uint8_t x_384; 
x_383 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__43;
x_384 = lean_nat_dec_eq(x_1, x_383);
if (x_384 == 0)
{
lean_object* x_385; uint8_t x_386; 
x_385 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__44;
x_386 = lean_nat_dec_eq(x_1, x_385);
if (x_386 == 0)
{
lean_object* x_387; uint8_t x_388; 
x_387 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__45;
x_388 = lean_nat_dec_eq(x_1, x_387);
if (x_388 == 0)
{
lean_object* x_389; uint8_t x_390; 
x_389 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__46;
x_390 = lean_nat_dec_eq(x_1, x_389);
if (x_390 == 0)
{
lean_object* x_391; uint8_t x_392; 
x_391 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__47;
x_392 = lean_nat_dec_eq(x_1, x_391);
if (x_392 == 0)
{
lean_object* x_393; uint8_t x_394; 
x_393 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__48;
x_394 = lean_nat_dec_eq(x_1, x_393);
if (x_394 == 0)
{
lean_object* x_395; uint8_t x_396; 
x_395 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__49;
x_396 = lean_nat_dec_eq(x_1, x_395);
if (x_396 == 0)
{
lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; uint8_t x_401; 
x_397 = lean_unsigned_to_nat(11u);
x_398 = lean_unsigned_to_nat(4u);
x_399 = l_BitVec_extractLsb___redArg(x_397, x_398, x_1);
x_400 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__50;
x_401 = lean_nat_dec_eq(x_399, x_400);
if (x_401 == 0)
{
lean_object* x_402; uint8_t x_403; 
x_402 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__51;
x_403 = lean_nat_dec_eq(x_399, x_402);
if (x_403 == 0)
{
lean_object* x_404; uint8_t x_405; 
x_404 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__52;
x_405 = lean_nat_dec_eq(x_399, x_404);
if (x_405 == 0)
{
lean_object* x_406; uint8_t x_407; 
x_406 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__53;
x_407 = lean_nat_dec_eq(x_399, x_406);
if (x_407 == 0)
{
lean_object* x_408; uint8_t x_409; 
x_408 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__54;
x_409 = lean_nat_dec_eq(x_399, x_408);
lean_dec(x_399);
if (x_409 == 0)
{
lean_object* x_410; uint8_t x_411; 
lean_free_object(x_321);
x_410 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__55;
x_411 = lean_nat_dec_eq(x_1, x_410);
if (x_411 == 0)
{
lean_object* x_412; uint8_t x_413; 
x_412 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__56;
x_413 = lean_nat_dec_eq(x_1, x_412);
if (x_413 == 0)
{
lean_object* x_414; uint8_t x_415; 
x_414 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__57;
x_415 = lean_nat_dec_eq(x_1, x_414);
if (x_415 == 0)
{
lean_object* x_416; uint8_t x_417; 
x_416 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__58;
x_417 = lean_nat_dec_eq(x_1, x_416);
if (x_417 == 0)
{
lean_object* x_418; uint8_t x_419; 
x_418 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__59;
x_419 = lean_nat_dec_eq(x_1, x_418);
if (x_419 == 0)
{
lean_object* x_420; uint8_t x_421; 
x_420 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__60;
x_421 = lean_nat_dec_eq(x_1, x_420);
if (x_421 == 0)
{
lean_object* x_422; uint8_t x_423; 
x_422 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__61;
x_423 = lean_nat_dec_eq(x_1, x_422);
if (x_423 == 0)
{
lean_object* x_424; uint8_t x_425; 
x_424 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__62;
x_425 = lean_nat_dec_eq(x_1, x_424);
if (x_425 == 0)
{
lean_object* x_426; uint8_t x_427; 
x_426 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__63;
x_427 = lean_nat_dec_eq(x_1, x_426);
if (x_427 == 0)
{
lean_object* x_428; uint8_t x_429; 
x_428 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__64;
x_429 = lean_nat_dec_eq(x_1, x_428);
if (x_429 == 0)
{
lean_object* x_430; uint8_t x_431; 
x_430 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__65;
x_431 = lean_nat_dec_eq(x_1, x_430);
if (x_431 == 0)
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; uint8_t x_435; 
x_432 = lean_unsigned_to_nat(5u);
x_433 = l_BitVec_extractLsb___redArg(x_397, x_432, x_1);
x_434 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__66;
x_435 = lean_nat_dec_eq(x_433, x_434);
lean_dec(x_433);
if (x_435 == 0)
{
x_342 = x_435;
goto block_353;
}
else
{
lean_object* x_436; lean_object* x_437; lean_object* x_438; uint8_t x_439; 
x_436 = lean_unsigned_to_nat(0u);
x_437 = l_BitVec_extractLsb___redArg(x_398, x_436, x_1);
x_438 = lean_unsigned_to_nat(3u);
x_439 = lean_nat_dec_le(x_438, x_437);
lean_dec(x_437);
x_342 = x_439;
goto block_353;
}
}
else
{
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_dec(x_46);
x_15 = x_323;
goto block_18;
}
}
else
{
lean_dec(x_46);
x_15 = x_323;
goto block_18;
}
}
else
{
lean_dec(x_46);
x_15 = x_323;
goto block_18;
}
}
else
{
lean_dec(x_46);
x_15 = x_323;
goto block_18;
}
}
else
{
lean_dec(x_46);
x_15 = x_323;
goto block_18;
}
}
else
{
lean_dec(x_46);
x_15 = x_323;
goto block_18;
}
}
else
{
lean_dec(x_46);
x_15 = x_323;
goto block_18;
}
}
else
{
lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; uint8_t x_447; lean_object* x_448; 
lean_dec(x_46);
x_440 = lean_unsigned_to_nat(3u);
x_441 = lean_unsigned_to_nat(0u);
x_442 = l_BitVec_extractLsb___redArg(x_440, x_441, x_1);
x_443 = l_LeanRV64DExecutable_Functions_check__CSR__access___closed__0;
x_444 = l_BitVec_append___redArg(x_398, x_443, x_442);
lean_dec(x_442);
x_445 = lean_nat_to_int(x_444);
x_446 = l_LeanRV64DExecutable_Functions_sys__pmp__count;
x_447 = lean_int_dec_lt(x_445, x_446);
lean_dec(x_445);
x_448 = lean_box(x_447);
lean_ctor_set(x_321, 0, x_448);
return x_321;
}
}
else
{
lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; uint8_t x_456; lean_object* x_457; 
lean_dec(x_399);
lean_dec(x_46);
x_449 = lean_unsigned_to_nat(3u);
x_450 = lean_unsigned_to_nat(0u);
x_451 = l_BitVec_extractLsb___redArg(x_449, x_450, x_1);
x_452 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__67;
x_453 = l_BitVec_append___redArg(x_398, x_452, x_451);
lean_dec(x_451);
x_454 = lean_nat_to_int(x_453);
x_455 = l_LeanRV64DExecutable_Functions_sys__pmp__count;
x_456 = lean_int_dec_lt(x_454, x_455);
lean_dec(x_454);
x_457 = lean_box(x_456);
lean_ctor_set(x_321, 0, x_457);
return x_321;
}
}
else
{
lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; uint8_t x_465; lean_object* x_466; 
lean_dec(x_399);
lean_dec(x_46);
x_458 = lean_unsigned_to_nat(3u);
x_459 = lean_unsigned_to_nat(0u);
x_460 = l_BitVec_extractLsb___redArg(x_458, x_459, x_1);
x_461 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__68;
x_462 = l_BitVec_append___redArg(x_398, x_461, x_460);
lean_dec(x_460);
x_463 = lean_nat_to_int(x_462);
x_464 = l_LeanRV64DExecutable_Functions_sys__pmp__count;
x_465 = lean_int_dec_lt(x_463, x_464);
lean_dec(x_463);
x_466 = lean_box(x_465);
lean_ctor_set(x_321, 0, x_466);
return x_321;
}
}
else
{
lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; uint8_t x_474; lean_object* x_475; 
lean_dec(x_399);
lean_dec(x_46);
x_467 = lean_unsigned_to_nat(3u);
x_468 = lean_unsigned_to_nat(0u);
x_469 = l_BitVec_extractLsb___redArg(x_467, x_468, x_1);
x_470 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__69;
x_471 = l_BitVec_append___redArg(x_398, x_470, x_469);
lean_dec(x_469);
x_472 = lean_nat_to_int(x_471);
x_473 = l_LeanRV64DExecutable_Functions_sys__pmp__count;
x_474 = lean_int_dec_lt(x_472, x_473);
lean_dec(x_472);
x_475 = lean_box(x_474);
lean_ctor_set(x_321, 0, x_475);
return x_321;
}
}
else
{
lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; uint8_t x_481; 
lean_dec(x_399);
lean_dec(x_46);
x_476 = lean_unsigned_to_nat(3u);
x_477 = lean_unsigned_to_nat(0u);
x_478 = l_BitVec_extractLsb___redArg(x_476, x_477, x_1);
lean_inc(x_478);
x_479 = lean_nat_to_int(x_478);
x_480 = l_LeanRV64DExecutable_Functions_sys__pmp__count;
x_481 = lean_int_dec_lt(x_479, x_480);
lean_dec(x_479);
if (x_481 == 0)
{
lean_object* x_482; 
lean_dec(x_478);
x_482 = lean_box(x_481);
lean_ctor_set(x_321, 0, x_482);
return x_321;
}
else
{
lean_object* x_483; lean_object* x_484; uint8_t x_485; 
x_483 = l_Sail_BitVec_access(x_398, x_478, x_477);
lean_dec(x_478);
x_484 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__70;
x_485 = lean_nat_dec_eq(x_483, x_484);
lean_dec(x_483);
if (x_485 == 0)
{
uint8_t x_486; lean_object* x_487; 
x_486 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_487 = lean_box(x_486);
lean_ctor_set(x_321, 0, x_487);
return x_321;
}
else
{
lean_object* x_488; 
x_488 = lean_box(x_485);
lean_ctor_set(x_321, 0, x_488);
return x_321;
}
}
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_23 = x_323;
goto block_26;
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_free_object(x_321);
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_object* x_489; uint8_t x_490; 
lean_dec(x_321);
x_489 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__31;
x_490 = lean_nat_dec_eq(x_1, x_489);
if (x_490 == 0)
{
lean_object* x_491; uint8_t x_492; 
x_491 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__32;
x_492 = lean_nat_dec_eq(x_1, x_491);
if (x_492 == 0)
{
lean_object* x_493; uint8_t x_494; 
x_493 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__33;
x_494 = lean_nat_dec_eq(x_1, x_493);
if (x_494 == 0)
{
lean_object* x_495; uint8_t x_496; 
x_495 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__34;
x_496 = lean_nat_dec_eq(x_1, x_495);
if (x_496 == 0)
{
lean_object* x_497; uint8_t x_498; 
x_497 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__35;
x_498 = lean_nat_dec_eq(x_1, x_497);
if (x_498 == 0)
{
lean_object* x_499; uint8_t x_500; 
x_499 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__36;
x_500 = lean_nat_dec_eq(x_1, x_499);
if (x_500 == 0)
{
lean_object* x_501; uint8_t x_502; 
x_501 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__37;
x_502 = lean_nat_dec_eq(x_1, x_501);
if (x_502 == 0)
{
lean_object* x_503; uint8_t x_504; 
x_503 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__38;
x_504 = lean_nat_dec_eq(x_1, x_503);
if (x_504 == 0)
{
lean_object* x_505; uint8_t x_506; 
x_505 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__39;
x_506 = lean_nat_dec_eq(x_1, x_505);
if (x_506 == 0)
{
lean_object* x_507; uint8_t x_508; 
x_507 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__40;
x_508 = lean_nat_dec_eq(x_1, x_507);
if (x_508 == 0)
{
lean_object* x_509; uint8_t x_510; 
x_509 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__41;
x_510 = lean_nat_dec_eq(x_1, x_509);
if (x_510 == 0)
{
lean_object* x_511; uint8_t x_512; 
x_511 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__42;
x_512 = lean_nat_dec_eq(x_1, x_511);
if (x_512 == 0)
{
lean_object* x_513; uint8_t x_514; 
x_513 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__43;
x_514 = lean_nat_dec_eq(x_1, x_513);
if (x_514 == 0)
{
lean_object* x_515; uint8_t x_516; 
x_515 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__44;
x_516 = lean_nat_dec_eq(x_1, x_515);
if (x_516 == 0)
{
lean_object* x_517; uint8_t x_518; 
x_517 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__45;
x_518 = lean_nat_dec_eq(x_1, x_517);
if (x_518 == 0)
{
lean_object* x_519; uint8_t x_520; 
x_519 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__46;
x_520 = lean_nat_dec_eq(x_1, x_519);
if (x_520 == 0)
{
lean_object* x_521; uint8_t x_522; 
x_521 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__47;
x_522 = lean_nat_dec_eq(x_1, x_521);
if (x_522 == 0)
{
lean_object* x_523; uint8_t x_524; 
x_523 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__48;
x_524 = lean_nat_dec_eq(x_1, x_523);
if (x_524 == 0)
{
lean_object* x_525; uint8_t x_526; 
x_525 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__49;
x_526 = lean_nat_dec_eq(x_1, x_525);
if (x_526 == 0)
{
lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; uint8_t x_531; 
x_527 = lean_unsigned_to_nat(11u);
x_528 = lean_unsigned_to_nat(4u);
x_529 = l_BitVec_extractLsb___redArg(x_527, x_528, x_1);
x_530 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__50;
x_531 = lean_nat_dec_eq(x_529, x_530);
if (x_531 == 0)
{
lean_object* x_532; uint8_t x_533; 
x_532 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__51;
x_533 = lean_nat_dec_eq(x_529, x_532);
if (x_533 == 0)
{
lean_object* x_534; uint8_t x_535; 
x_534 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__52;
x_535 = lean_nat_dec_eq(x_529, x_534);
if (x_535 == 0)
{
lean_object* x_536; uint8_t x_537; 
x_536 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__53;
x_537 = lean_nat_dec_eq(x_529, x_536);
if (x_537 == 0)
{
lean_object* x_538; uint8_t x_539; 
x_538 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__54;
x_539 = lean_nat_dec_eq(x_529, x_538);
lean_dec(x_529);
if (x_539 == 0)
{
lean_object* x_540; uint8_t x_541; 
x_540 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__55;
x_541 = lean_nat_dec_eq(x_1, x_540);
if (x_541 == 0)
{
lean_object* x_542; uint8_t x_543; 
x_542 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__56;
x_543 = lean_nat_dec_eq(x_1, x_542);
if (x_543 == 0)
{
lean_object* x_544; uint8_t x_545; 
x_544 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__57;
x_545 = lean_nat_dec_eq(x_1, x_544);
if (x_545 == 0)
{
lean_object* x_546; uint8_t x_547; 
x_546 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__58;
x_547 = lean_nat_dec_eq(x_1, x_546);
if (x_547 == 0)
{
lean_object* x_548; uint8_t x_549; 
x_548 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__59;
x_549 = lean_nat_dec_eq(x_1, x_548);
if (x_549 == 0)
{
lean_object* x_550; uint8_t x_551; 
x_550 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__60;
x_551 = lean_nat_dec_eq(x_1, x_550);
if (x_551 == 0)
{
lean_object* x_552; uint8_t x_553; 
x_552 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__61;
x_553 = lean_nat_dec_eq(x_1, x_552);
if (x_553 == 0)
{
lean_object* x_554; uint8_t x_555; 
x_554 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__62;
x_555 = lean_nat_dec_eq(x_1, x_554);
if (x_555 == 0)
{
lean_object* x_556; uint8_t x_557; 
x_556 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__63;
x_557 = lean_nat_dec_eq(x_1, x_556);
if (x_557 == 0)
{
lean_object* x_558; uint8_t x_559; 
x_558 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__64;
x_559 = lean_nat_dec_eq(x_1, x_558);
if (x_559 == 0)
{
lean_object* x_560; uint8_t x_561; 
x_560 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__65;
x_561 = lean_nat_dec_eq(x_1, x_560);
if (x_561 == 0)
{
lean_object* x_562; lean_object* x_563; lean_object* x_564; uint8_t x_565; 
x_562 = lean_unsigned_to_nat(5u);
x_563 = l_BitVec_extractLsb___redArg(x_527, x_562, x_1);
x_564 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__66;
x_565 = lean_nat_dec_eq(x_563, x_564);
lean_dec(x_563);
if (x_565 == 0)
{
x_342 = x_565;
goto block_353;
}
else
{
lean_object* x_566; lean_object* x_567; lean_object* x_568; uint8_t x_569; 
x_566 = lean_unsigned_to_nat(0u);
x_567 = l_BitVec_extractLsb___redArg(x_528, x_566, x_1);
x_568 = lean_unsigned_to_nat(3u);
x_569 = lean_nat_dec_le(x_568, x_567);
lean_dec(x_567);
x_342 = x_569;
goto block_353;
}
}
else
{
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_dec(x_46);
x_15 = x_323;
goto block_18;
}
}
else
{
lean_dec(x_46);
x_15 = x_323;
goto block_18;
}
}
else
{
lean_dec(x_46);
x_15 = x_323;
goto block_18;
}
}
else
{
lean_dec(x_46);
x_15 = x_323;
goto block_18;
}
}
else
{
lean_dec(x_46);
x_15 = x_323;
goto block_18;
}
}
else
{
lean_dec(x_46);
x_15 = x_323;
goto block_18;
}
}
else
{
lean_dec(x_46);
x_15 = x_323;
goto block_18;
}
}
else
{
lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; uint8_t x_577; lean_object* x_578; lean_object* x_579; 
lean_dec(x_46);
x_570 = lean_unsigned_to_nat(3u);
x_571 = lean_unsigned_to_nat(0u);
x_572 = l_BitVec_extractLsb___redArg(x_570, x_571, x_1);
x_573 = l_LeanRV64DExecutable_Functions_check__CSR__access___closed__0;
x_574 = l_BitVec_append___redArg(x_528, x_573, x_572);
lean_dec(x_572);
x_575 = lean_nat_to_int(x_574);
x_576 = l_LeanRV64DExecutable_Functions_sys__pmp__count;
x_577 = lean_int_dec_lt(x_575, x_576);
lean_dec(x_575);
x_578 = lean_box(x_577);
x_579 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_579, 0, x_578);
lean_ctor_set(x_579, 1, x_323);
return x_579;
}
}
else
{
lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; uint8_t x_587; lean_object* x_588; lean_object* x_589; 
lean_dec(x_529);
lean_dec(x_46);
x_580 = lean_unsigned_to_nat(3u);
x_581 = lean_unsigned_to_nat(0u);
x_582 = l_BitVec_extractLsb___redArg(x_580, x_581, x_1);
x_583 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__67;
x_584 = l_BitVec_append___redArg(x_528, x_583, x_582);
lean_dec(x_582);
x_585 = lean_nat_to_int(x_584);
x_586 = l_LeanRV64DExecutable_Functions_sys__pmp__count;
x_587 = lean_int_dec_lt(x_585, x_586);
lean_dec(x_585);
x_588 = lean_box(x_587);
x_589 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_589, 0, x_588);
lean_ctor_set(x_589, 1, x_323);
return x_589;
}
}
else
{
lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; uint8_t x_597; lean_object* x_598; lean_object* x_599; 
lean_dec(x_529);
lean_dec(x_46);
x_590 = lean_unsigned_to_nat(3u);
x_591 = lean_unsigned_to_nat(0u);
x_592 = l_BitVec_extractLsb___redArg(x_590, x_591, x_1);
x_593 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__68;
x_594 = l_BitVec_append___redArg(x_528, x_593, x_592);
lean_dec(x_592);
x_595 = lean_nat_to_int(x_594);
x_596 = l_LeanRV64DExecutable_Functions_sys__pmp__count;
x_597 = lean_int_dec_lt(x_595, x_596);
lean_dec(x_595);
x_598 = lean_box(x_597);
x_599 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_599, 0, x_598);
lean_ctor_set(x_599, 1, x_323);
return x_599;
}
}
else
{
lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; uint8_t x_607; lean_object* x_608; lean_object* x_609; 
lean_dec(x_529);
lean_dec(x_46);
x_600 = lean_unsigned_to_nat(3u);
x_601 = lean_unsigned_to_nat(0u);
x_602 = l_BitVec_extractLsb___redArg(x_600, x_601, x_1);
x_603 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__69;
x_604 = l_BitVec_append___redArg(x_528, x_603, x_602);
lean_dec(x_602);
x_605 = lean_nat_to_int(x_604);
x_606 = l_LeanRV64DExecutable_Functions_sys__pmp__count;
x_607 = lean_int_dec_lt(x_605, x_606);
lean_dec(x_605);
x_608 = lean_box(x_607);
x_609 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_609, 0, x_608);
lean_ctor_set(x_609, 1, x_323);
return x_609;
}
}
else
{
lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; uint8_t x_615; 
lean_dec(x_529);
lean_dec(x_46);
x_610 = lean_unsigned_to_nat(3u);
x_611 = lean_unsigned_to_nat(0u);
x_612 = l_BitVec_extractLsb___redArg(x_610, x_611, x_1);
lean_inc(x_612);
x_613 = lean_nat_to_int(x_612);
x_614 = l_LeanRV64DExecutable_Functions_sys__pmp__count;
x_615 = lean_int_dec_lt(x_613, x_614);
lean_dec(x_613);
if (x_615 == 0)
{
lean_object* x_616; lean_object* x_617; 
lean_dec(x_612);
x_616 = lean_box(x_615);
x_617 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_617, 0, x_616);
lean_ctor_set(x_617, 1, x_323);
return x_617;
}
else
{
lean_object* x_618; lean_object* x_619; uint8_t x_620; 
x_618 = l_Sail_BitVec_access(x_528, x_612, x_611);
lean_dec(x_612);
x_619 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__70;
x_620 = lean_nat_dec_eq(x_618, x_619);
lean_dec(x_618);
if (x_620 == 0)
{
uint8_t x_621; lean_object* x_622; lean_object* x_623; 
x_621 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_622 = lean_box(x_621);
x_623 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_623, 0, x_622);
lean_ctor_set(x_623, 1, x_323);
return x_623;
}
else
{
lean_object* x_624; lean_object* x_625; 
x_624 = lean_box(x_620);
x_625 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_625, 0, x_624);
lean_ctor_set(x_625, 1, x_323);
return x_625;
}
}
}
}
else
{
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_dec(x_46);
x_23 = x_323;
goto block_26;
}
}
else
{
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
else
{
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_dec(x_46);
x_27 = x_323;
goto block_31;
}
}
else
{
lean_dec(x_46);
x_19 = x_323;
goto block_22;
}
}
}
else
{
uint8_t x_626; 
lean_dec(x_46);
x_626 = lean_unbox(x_322);
lean_dec(x_322);
if (x_626 == 0)
{
lean_dec(x_323);
return x_321;
}
else
{
uint8_t x_627; 
x_627 = !lean_is_exclusive(x_321);
if (x_627 == 0)
{
lean_object* x_628; lean_object* x_629; uint8_t x_630; lean_object* x_631; 
x_628 = lean_ctor_get(x_321, 1);
lean_dec(x_628);
x_629 = lean_ctor_get(x_321, 0);
lean_dec(x_629);
x_630 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_631 = lean_box(x_630);
lean_ctor_set(x_321, 0, x_631);
return x_321;
}
else
{
uint8_t x_632; lean_object* x_633; lean_object* x_634; 
lean_dec(x_321);
x_632 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_633 = lean_box(x_632);
x_634 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_634, 0, x_633);
lean_ctor_set(x_634, 1, x_323);
return x_634;
}
}
}
block_341:
{
if (x_324 == 0)
{
uint8_t x_325; lean_object* x_326; 
x_325 = 14;
x_326 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_325, x_323);
if (lean_obj_tag(x_326) == 0)
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; uint8_t x_333; 
x_327 = lean_ctor_get(x_326, 0);
lean_inc(x_327);
x_328 = lean_ctor_get(x_326, 1);
lean_inc(x_328);
x_329 = lean_unsigned_to_nat(11u);
x_330 = lean_unsigned_to_nat(5u);
x_331 = l_BitVec_extractLsb___redArg(x_329, x_330, x_1);
x_332 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__28;
x_333 = lean_nat_dec_eq(x_331, x_332);
lean_dec(x_331);
if (x_333 == 0)
{
uint8_t x_334; 
x_334 = lean_unbox(x_327);
lean_dec(x_327);
x_295 = x_326;
x_296 = x_334;
x_297 = x_328;
x_298 = x_325;
x_299 = x_333;
goto block_320;
}
else
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; uint8_t x_339; uint8_t x_340; 
x_335 = lean_unsigned_to_nat(4u);
x_336 = lean_unsigned_to_nat(0u);
x_337 = l_BitVec_extractLsb___redArg(x_335, x_336, x_1);
x_338 = lean_unsigned_to_nat(3u);
x_339 = lean_nat_dec_le(x_338, x_337);
lean_dec(x_337);
x_340 = lean_unbox(x_327);
lean_dec(x_327);
x_295 = x_326;
x_296 = x_340;
x_297 = x_328;
x_298 = x_325;
x_299 = x_339;
goto block_320;
}
}
else
{
lean_dec(x_46);
return x_326;
}
}
else
{
lean_dec(x_46);
x_11 = x_323;
goto block_14;
}
}
block_353:
{
if (x_342 == 0)
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; uint8_t x_347; 
x_343 = lean_unsigned_to_nat(11u);
x_344 = lean_unsigned_to_nat(5u);
x_345 = l_BitVec_extractLsb___redArg(x_343, x_344, x_1);
x_346 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__29;
x_347 = lean_nat_dec_eq(x_345, x_346);
lean_dec(x_345);
if (x_347 == 0)
{
x_324 = x_347;
goto block_341;
}
else
{
lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; uint8_t x_352; 
x_348 = lean_unsigned_to_nat(4u);
x_349 = lean_unsigned_to_nat(0u);
x_350 = l_BitVec_extractLsb___redArg(x_348, x_349, x_1);
x_351 = lean_unsigned_to_nat(3u);
x_352 = lean_nat_dec_le(x_351, x_350);
lean_dec(x_350);
x_324 = x_352;
goto block_341;
}
}
else
{
lean_dec(x_46);
x_11 = x_323;
goto block_14;
}
}
}
else
{
lean_dec(x_46);
return x_321;
}
block_239:
{
if (x_60 == 0)
{
lean_object* x_61; 
lean_dec(x_59);
lean_dec(x_46);
x_61 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_58, x_57);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_55, x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
x_66 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__9;
x_67 = lean_nat_dec_eq(x_1, x_66);
if (x_67 == 0)
{
lean_object* x_68; uint8_t x_69; 
lean_dec(x_64);
lean_dec(x_62);
x_68 = l_LeanRV64DExecutable_Functions_check__seed__CSR___closed__0;
x_69 = lean_nat_dec_eq(x_1, x_68);
if (x_69 == 0)
{
lean_object* x_70; uint8_t x_71; 
x_70 = l_LeanRV64DExecutable_Functions_check__Counteren___closed__0;
x_71 = lean_nat_dec_eq(x_1, x_70);
if (x_71 == 0)
{
lean_object* x_72; uint8_t x_73; 
x_72 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__10;
x_73 = lean_nat_dec_eq(x_1, x_72);
if (x_73 == 0)
{
lean_object* x_74; uint8_t x_75; 
x_74 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__11;
x_75 = lean_nat_dec_eq(x_1, x_74);
if (x_75 == 0)
{
uint8_t x_76; lean_object* x_77; 
x_76 = 10;
x_77 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_76, x_65);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
x_80 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__12;
x_81 = lean_nat_dec_eq(x_1, x_80);
if (x_81 == 0)
{
lean_object* x_82; 
lean_dec(x_78);
lean_dec(x_77);
x_82 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_76, x_79);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
x_85 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__13;
x_86 = lean_nat_dec_eq(x_1, x_85);
if (x_86 == 0)
{
lean_object* x_87; 
lean_dec(x_83);
lean_dec(x_82);
x_87 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_76, x_84);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; uint8_t x_91; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
x_90 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__14;
x_91 = lean_nat_dec_eq(x_1, x_90);
if (x_91 == 0)
{
lean_object* x_92; uint8_t x_93; 
lean_dec(x_88);
lean_dec(x_87);
x_92 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__15;
x_93 = lean_nat_dec_eq(x_1, x_92);
if (x_93 == 0)
{
lean_object* x_94; uint8_t x_95; 
x_94 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__16;
x_95 = lean_nat_dec_eq(x_1, x_94);
if (x_95 == 0)
{
lean_object* x_96; 
x_96 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_76, x_89);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; uint8_t x_100; 
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_96, 1);
lean_inc(x_98);
x_99 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__17;
x_100 = lean_nat_dec_eq(x_1, x_99);
if (x_100 == 0)
{
lean_object* x_101; 
lean_dec(x_97);
lean_dec(x_96);
x_101 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_76, x_98);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
x_104 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__18;
x_105 = lean_nat_dec_eq(x_1, x_104);
if (x_105 == 0)
{
lean_object* x_106; uint8_t x_107; 
lean_dec(x_102);
lean_dec(x_101);
x_106 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__19;
x_107 = lean_nat_dec_eq(x_1, x_106);
if (x_107 == 0)
{
uint8_t x_108; lean_object* x_109; 
x_108 = 64;
x_109 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_108, x_103);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_109, 1);
lean_inc(x_111);
x_112 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__20;
x_113 = lean_nat_dec_eq(x_1, x_112);
if (x_113 == 0)
{
lean_object* x_114; uint8_t x_115; 
lean_dec(x_110);
lean_dec(x_109);
x_114 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__21;
x_115 = lean_nat_dec_eq(x_1, x_114);
if (x_115 == 0)
{
lean_object* x_116; 
x_116 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_108, x_111);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; 
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
x_119 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__22;
x_120 = lean_nat_dec_eq(x_1, x_119);
if (x_120 == 0)
{
lean_object* x_121; 
lean_dec(x_117);
lean_dec(x_116);
x_121 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_55, x_118);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; lean_object* x_123; uint8_t x_124; lean_object* x_125; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_124 = 55;
x_125 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_124, x_123);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; lean_object* x_127; uint8_t x_128; 
x_126 = lean_ctor_get(x_125, 1);
lean_inc(x_126);
x_127 = l_LeanRV64DExecutable_Functions_check__Stimecmp___closed__0;
x_128 = lean_nat_dec_eq(x_1, x_127);
if (x_128 == 0)
{
lean_object* x_129; 
lean_dec(x_125);
lean_dec(x_122);
x_129 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_55, x_126);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_129, 1);
lean_inc(x_131);
lean_dec(x_129);
x_132 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_124, x_131);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; uint8_t x_136; 
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_132, 1);
lean_inc(x_134);
x_135 = l_LeanRV64DExecutable_Functions_check__Stimecmp___closed__1;
x_136 = lean_nat_dec_eq(x_1, x_135);
if (x_136 == 0)
{
uint8_t x_137; 
lean_dec(x_133);
lean_dec(x_130);
x_137 = !lean_is_exclusive(x_132);
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; uint8_t x_141; 
x_138 = lean_ctor_get(x_132, 1);
lean_dec(x_138);
x_139 = lean_ctor_get(x_132, 0);
lean_dec(x_139);
x_140 = l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__0;
x_141 = lean_nat_dec_eq(x_1, x_140);
if (x_141 == 0)
{
lean_object* x_142; 
x_142 = lean_box(x_141);
lean_ctor_set(x_132, 0, x_142);
return x_132;
}
else
{
lean_free_object(x_132);
x_19 = x_134;
goto block_22;
}
}
else
{
lean_object* x_143; uint8_t x_144; 
lean_dec(x_132);
x_143 = l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__0;
x_144 = lean_nat_dec_eq(x_1, x_143);
if (x_144 == 0)
{
lean_object* x_145; lean_object* x_146; 
x_145 = lean_box(x_144);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_134);
return x_146;
}
else
{
x_19 = x_134;
goto block_22;
}
}
}
else
{
uint8_t x_147; 
x_147 = lean_unbox(x_130);
if (x_147 == 0)
{
uint8_t x_148; 
lean_dec(x_133);
x_148 = !lean_is_exclusive(x_132);
if (x_148 == 0)
{
lean_object* x_149; lean_object* x_150; 
x_149 = lean_ctor_get(x_132, 1);
lean_dec(x_149);
x_150 = lean_ctor_get(x_132, 0);
lean_dec(x_150);
lean_ctor_set(x_132, 0, x_130);
return x_132;
}
else
{
lean_object* x_151; 
lean_dec(x_132);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_130);
lean_ctor_set(x_151, 1, x_134);
return x_151;
}
}
else
{
uint8_t x_152; 
lean_dec(x_130);
x_152 = lean_unbox(x_133);
lean_dec(x_133);
if (x_152 == 0)
{
lean_dec(x_134);
return x_132;
}
else
{
uint8_t x_153; 
x_153 = !lean_is_exclusive(x_132);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; uint8_t x_156; lean_object* x_157; 
x_154 = lean_ctor_get(x_132, 1);
lean_dec(x_154);
x_155 = lean_ctor_get(x_132, 0);
lean_dec(x_155);
x_156 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_157 = lean_box(x_156);
lean_ctor_set(x_132, 0, x_157);
return x_132;
}
else
{
uint8_t x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_132);
x_158 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_159 = lean_box(x_158);
x_160 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_134);
return x_160;
}
}
}
}
}
else
{
lean_dec(x_130);
return x_132;
}
}
else
{
return x_129;
}
}
else
{
uint8_t x_161; 
x_161 = lean_unbox(x_122);
if (x_161 == 0)
{
uint8_t x_162; 
x_162 = !lean_is_exclusive(x_125);
if (x_162 == 0)
{
lean_object* x_163; lean_object* x_164; 
x_163 = lean_ctor_get(x_125, 1);
lean_dec(x_163);
x_164 = lean_ctor_get(x_125, 0);
lean_dec(x_164);
lean_ctor_set(x_125, 0, x_122);
return x_125;
}
else
{
lean_object* x_165; 
lean_dec(x_125);
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_122);
lean_ctor_set(x_165, 1, x_126);
return x_165;
}
}
else
{
lean_dec(x_126);
lean_dec(x_122);
return x_125;
}
}
}
else
{
lean_dec(x_122);
return x_125;
}
}
else
{
return x_121;
}
}
else
{
uint8_t x_166; 
x_166 = lean_unbox(x_117);
lean_dec(x_117);
if (x_166 == 0)
{
lean_dec(x_118);
return x_116;
}
else
{
uint8_t x_167; 
x_167 = !lean_is_exclusive(x_116);
if (x_167 == 0)
{
lean_object* x_168; lean_object* x_169; uint8_t x_170; lean_object* x_171; 
x_168 = lean_ctor_get(x_116, 1);
lean_dec(x_168);
x_169 = lean_ctor_get(x_116, 0);
lean_dec(x_169);
x_170 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_171 = lean_box(x_170);
lean_ctor_set(x_116, 0, x_171);
return x_116;
}
else
{
uint8_t x_172; lean_object* x_173; lean_object* x_174; 
lean_dec(x_116);
x_172 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_173 = lean_box(x_172);
x_174 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_118);
return x_174;
}
}
}
}
else
{
return x_116;
}
}
else
{
x_3 = x_111;
goto block_6;
}
}
else
{
uint8_t x_175; 
x_175 = lean_unbox(x_110);
lean_dec(x_110);
if (x_175 == 0)
{
lean_dec(x_111);
return x_109;
}
else
{
uint8_t x_176; 
x_176 = !lean_is_exclusive(x_109);
if (x_176 == 0)
{
lean_object* x_177; lean_object* x_178; uint8_t x_179; lean_object* x_180; 
x_177 = lean_ctor_get(x_109, 1);
lean_dec(x_177);
x_178 = lean_ctor_get(x_109, 0);
lean_dec(x_178);
x_179 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_180 = lean_box(x_179);
lean_ctor_set(x_109, 0, x_180);
return x_109;
}
else
{
uint8_t x_181; lean_object* x_182; lean_object* x_183; 
lean_dec(x_109);
x_181 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_182 = lean_box(x_181);
x_183 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_183, 0, x_182);
lean_ctor_set(x_183, 1, x_111);
return x_183;
}
}
}
}
else
{
return x_109;
}
}
else
{
x_3 = x_103;
goto block_6;
}
}
else
{
uint8_t x_184; 
x_184 = lean_unbox(x_102);
lean_dec(x_102);
if (x_184 == 0)
{
lean_dec(x_103);
return x_101;
}
else
{
uint8_t x_185; 
x_185 = !lean_is_exclusive(x_101);
if (x_185 == 0)
{
lean_object* x_186; lean_object* x_187; uint8_t x_188; lean_object* x_189; 
x_186 = lean_ctor_get(x_101, 1);
lean_dec(x_186);
x_187 = lean_ctor_get(x_101, 0);
lean_dec(x_187);
x_188 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_189 = lean_box(x_188);
lean_ctor_set(x_101, 0, x_189);
return x_101;
}
else
{
uint8_t x_190; lean_object* x_191; lean_object* x_192; 
lean_dec(x_101);
x_190 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_191 = lean_box(x_190);
x_192 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set(x_192, 1, x_103);
return x_192;
}
}
}
}
else
{
return x_101;
}
}
else
{
uint8_t x_193; 
x_193 = lean_unbox(x_97);
lean_dec(x_97);
if (x_193 == 0)
{
lean_dec(x_98);
return x_96;
}
else
{
uint8_t x_194; 
x_194 = !lean_is_exclusive(x_96);
if (x_194 == 0)
{
lean_object* x_195; lean_object* x_196; uint8_t x_197; lean_object* x_198; 
x_195 = lean_ctor_get(x_96, 1);
lean_dec(x_195);
x_196 = lean_ctor_get(x_96, 0);
lean_dec(x_196);
x_197 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_198 = lean_box(x_197);
lean_ctor_set(x_96, 0, x_198);
return x_96;
}
else
{
uint8_t x_199; lean_object* x_200; lean_object* x_201; 
lean_dec(x_96);
x_199 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_200 = lean_box(x_199);
x_201 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_98);
return x_201;
}
}
}
}
else
{
return x_96;
}
}
else
{
x_7 = x_89;
goto block_10;
}
}
else
{
x_7 = x_89;
goto block_10;
}
}
else
{
uint8_t x_202; 
x_202 = lean_unbox(x_88);
lean_dec(x_88);
if (x_202 == 0)
{
lean_dec(x_89);
return x_87;
}
else
{
uint8_t x_203; 
x_203 = !lean_is_exclusive(x_87);
if (x_203 == 0)
{
lean_object* x_204; lean_object* x_205; uint8_t x_206; lean_object* x_207; 
x_204 = lean_ctor_get(x_87, 1);
lean_dec(x_204);
x_205 = lean_ctor_get(x_87, 0);
lean_dec(x_205);
x_206 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_207 = lean_box(x_206);
lean_ctor_set(x_87, 0, x_207);
return x_87;
}
else
{
uint8_t x_208; lean_object* x_209; lean_object* x_210; 
lean_dec(x_87);
x_208 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_209 = lean_box(x_208);
x_210 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_210, 0, x_209);
lean_ctor_set(x_210, 1, x_89);
return x_210;
}
}
}
}
else
{
return x_87;
}
}
else
{
uint8_t x_211; 
x_211 = lean_unbox(x_83);
lean_dec(x_83);
if (x_211 == 0)
{
lean_dec(x_84);
return x_82;
}
else
{
uint8_t x_212; 
x_212 = !lean_is_exclusive(x_82);
if (x_212 == 0)
{
lean_object* x_213; lean_object* x_214; uint8_t x_215; lean_object* x_216; 
x_213 = lean_ctor_get(x_82, 1);
lean_dec(x_213);
x_214 = lean_ctor_get(x_82, 0);
lean_dec(x_214);
x_215 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_216 = lean_box(x_215);
lean_ctor_set(x_82, 0, x_216);
return x_82;
}
else
{
uint8_t x_217; lean_object* x_218; lean_object* x_219; 
lean_dec(x_82);
x_217 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_218 = lean_box(x_217);
x_219 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_219, 0, x_218);
lean_ctor_set(x_219, 1, x_84);
return x_219;
}
}
}
}
else
{
return x_82;
}
}
else
{
uint8_t x_220; 
x_220 = lean_unbox(x_78);
lean_dec(x_78);
if (x_220 == 0)
{
lean_dec(x_79);
return x_77;
}
else
{
uint8_t x_221; 
x_221 = !lean_is_exclusive(x_77);
if (x_221 == 0)
{
lean_object* x_222; lean_object* x_223; uint8_t x_224; lean_object* x_225; 
x_222 = lean_ctor_get(x_77, 1);
lean_dec(x_222);
x_223 = lean_ctor_get(x_77, 0);
lean_dec(x_223);
x_224 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_225 = lean_box(x_224);
lean_ctor_set(x_77, 0, x_225);
return x_77;
}
else
{
uint8_t x_226; lean_object* x_227; lean_object* x_228; 
lean_dec(x_77);
x_226 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_227 = lean_box(x_226);
x_228 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_228, 0, x_227);
lean_ctor_set(x_228, 1, x_79);
return x_228;
}
}
}
}
else
{
return x_77;
}
}
else
{
x_7 = x_65;
goto block_10;
}
}
else
{
x_7 = x_65;
goto block_10;
}
}
else
{
x_7 = x_65;
goto block_10;
}
}
else
{
uint8_t x_229; lean_object* x_230; 
x_229 = 42;
x_230 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_229, x_65);
return x_230;
}
}
else
{
uint8_t x_231; 
x_231 = lean_unbox(x_62);
if (x_231 == 0)
{
uint8_t x_232; 
x_232 = !lean_is_exclusive(x_64);
if (x_232 == 0)
{
lean_object* x_233; lean_object* x_234; 
x_233 = lean_ctor_get(x_64, 1);
lean_dec(x_233);
x_234 = lean_ctor_get(x_64, 0);
lean_dec(x_234);
lean_ctor_set(x_64, 0, x_62);
return x_64;
}
else
{
lean_object* x_235; 
lean_dec(x_64);
x_235 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_235, 0, x_62);
lean_ctor_set(x_235, 1, x_65);
return x_235;
}
}
else
{
lean_dec(x_65);
lean_dec(x_62);
return x_64;
}
}
}
else
{
lean_dec(x_62);
return x_64;
}
}
else
{
return x_61;
}
}
else
{
if (x_56 == 0)
{
lean_dec(x_57);
lean_dec(x_46);
return x_59;
}
else
{
uint8_t x_236; lean_object* x_237; lean_object* x_238; 
lean_dec(x_59);
x_236 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_237 = lean_box(x_236);
if (lean_is_scalar(x_46)) {
 x_238 = lean_alloc_ctor(0, 2, 0);
} else {
 x_238 = x_46;
}
lean_ctor_set(x_238, 0, x_237);
lean_ctor_set(x_238, 1, x_57);
return x_238;
}
}
}
block_266:
{
if (x_244 == 0)
{
uint8_t x_245; lean_object* x_246; 
lean_dec(x_240);
x_245 = 54;
x_246 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_245, x_243);
if (lean_obj_tag(x_246) == 0)
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; uint8_t x_253; 
x_247 = lean_ctor_get(x_246, 0);
lean_inc(x_247);
x_248 = lean_ctor_get(x_246, 1);
lean_inc(x_248);
x_249 = lean_unsigned_to_nat(11u);
x_250 = lean_unsigned_to_nat(5u);
x_251 = l_BitVec_extractLsb___redArg(x_249, x_250, x_1);
x_252 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__25;
x_253 = lean_nat_dec_eq(x_251, x_252);
lean_dec(x_251);
if (x_253 == 0)
{
uint8_t x_254; 
x_254 = lean_unbox(x_247);
lean_dec(x_247);
x_56 = x_254;
x_57 = x_248;
x_58 = x_245;
x_59 = x_246;
x_60 = x_253;
goto block_239;
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; uint8_t x_259; uint8_t x_260; 
x_255 = lean_unsigned_to_nat(4u);
x_256 = lean_unsigned_to_nat(0u);
x_257 = l_BitVec_extractLsb___redArg(x_255, x_256, x_1);
x_258 = lean_unsigned_to_nat(3u);
x_259 = lean_nat_dec_le(x_258, x_257);
lean_dec(x_257);
x_260 = lean_unbox(x_247);
lean_dec(x_247);
x_56 = x_260;
x_57 = x_248;
x_58 = x_245;
x_59 = x_246;
x_60 = x_259;
goto block_239;
}
}
else
{
lean_dec(x_46);
return x_246;
}
}
else
{
lean_dec(x_46);
if (x_242 == 0)
{
lean_object* x_261; lean_object* x_262; 
lean_dec(x_240);
x_261 = lean_box(x_242);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_243);
return x_262;
}
else
{
if (x_241 == 0)
{
lean_dec(x_243);
return x_240;
}
else
{
uint8_t x_263; lean_object* x_264; lean_object* x_265; 
lean_dec(x_240);
x_263 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_264 = lean_box(x_263);
x_265 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_265, 0, x_264);
lean_ctor_set(x_265, 1, x_243);
return x_265;
}
}
}
}
block_294:
{
if (x_271 == 0)
{
lean_object* x_272; 
lean_dec(x_267);
x_272 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_268, x_269);
if (lean_obj_tag(x_272) == 0)
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; 
x_273 = lean_ctor_get(x_272, 0);
lean_inc(x_273);
x_274 = lean_ctor_get(x_272, 1);
lean_inc(x_274);
lean_dec(x_272);
x_275 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_40, x_274);
if (lean_obj_tag(x_275) == 0)
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; uint8_t x_282; 
x_276 = lean_ctor_get(x_275, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_275, 1);
lean_inc(x_277);
x_278 = lean_unsigned_to_nat(11u);
x_279 = lean_unsigned_to_nat(5u);
x_280 = l_BitVec_extractLsb___redArg(x_278, x_279, x_1);
x_281 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__26;
x_282 = lean_nat_dec_eq(x_280, x_281);
lean_dec(x_280);
if (x_282 == 0)
{
uint8_t x_283; uint8_t x_284; 
x_283 = lean_unbox(x_276);
lean_dec(x_276);
x_284 = lean_unbox(x_273);
lean_dec(x_273);
x_240 = x_275;
x_241 = x_283;
x_242 = x_284;
x_243 = x_277;
x_244 = x_282;
goto block_266;
}
else
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; uint8_t x_289; uint8_t x_290; uint8_t x_291; 
x_285 = lean_unsigned_to_nat(4u);
x_286 = lean_unsigned_to_nat(0u);
x_287 = l_BitVec_extractLsb___redArg(x_285, x_286, x_1);
x_288 = lean_unsigned_to_nat(3u);
x_289 = lean_nat_dec_le(x_288, x_287);
lean_dec(x_287);
x_290 = lean_unbox(x_276);
lean_dec(x_276);
x_291 = lean_unbox(x_273);
lean_dec(x_273);
x_240 = x_275;
x_241 = x_290;
x_242 = x_291;
x_243 = x_277;
x_244 = x_289;
goto block_266;
}
}
else
{
lean_dec(x_273);
lean_dec(x_46);
return x_275;
}
}
else
{
lean_dec(x_46);
return x_272;
}
}
else
{
lean_dec(x_46);
if (x_270 == 0)
{
lean_object* x_292; lean_object* x_293; 
lean_dec(x_267);
x_292 = lean_box(x_270);
x_293 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_293, 0, x_292);
lean_ctor_set(x_293, 1, x_269);
return x_293;
}
else
{
lean_dec(x_269);
return x_267;
}
}
}
block_320:
{
if (x_299 == 0)
{
lean_object* x_300; 
lean_dec(x_295);
x_300 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_298, x_297);
if (lean_obj_tag(x_300) == 0)
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; 
x_301 = lean_ctor_get(x_300, 0);
lean_inc(x_301);
x_302 = lean_ctor_get(x_300, 1);
lean_inc(x_302);
lean_dec(x_300);
x_303 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_40, x_302);
if (lean_obj_tag(x_303) == 0)
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; uint8_t x_309; 
x_304 = lean_ctor_get(x_303, 1);
lean_inc(x_304);
x_305 = lean_unsigned_to_nat(11u);
x_306 = lean_unsigned_to_nat(5u);
x_307 = l_BitVec_extractLsb___redArg(x_305, x_306, x_1);
x_308 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__27;
x_309 = lean_nat_dec_eq(x_307, x_308);
lean_dec(x_307);
if (x_309 == 0)
{
uint8_t x_310; 
x_310 = lean_unbox(x_301);
lean_dec(x_301);
x_267 = x_303;
x_268 = x_298;
x_269 = x_304;
x_270 = x_310;
x_271 = x_309;
goto block_294;
}
else
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; uint8_t x_315; uint8_t x_316; 
x_311 = lean_unsigned_to_nat(4u);
x_312 = lean_unsigned_to_nat(0u);
x_313 = l_BitVec_extractLsb___redArg(x_311, x_312, x_1);
x_314 = lean_unsigned_to_nat(3u);
x_315 = lean_nat_dec_le(x_314, x_313);
lean_dec(x_313);
x_316 = lean_unbox(x_301);
lean_dec(x_301);
x_267 = x_303;
x_268 = x_298;
x_269 = x_304;
x_270 = x_316;
x_271 = x_315;
goto block_294;
}
}
else
{
lean_dec(x_301);
lean_dec(x_46);
return x_303;
}
}
else
{
lean_dec(x_46);
return x_300;
}
}
else
{
lean_dec(x_46);
if (x_296 == 0)
{
lean_dec(x_297);
return x_295;
}
else
{
uint8_t x_317; lean_object* x_318; lean_object* x_319; 
lean_dec(x_295);
x_317 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_318 = lean_box(x_317);
x_319 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_319, 0, x_318);
lean_ctor_set(x_319, 1, x_297);
return x_319;
}
}
}
}
else
{
lean_dec(x_46);
x_19 = x_43;
goto block_22;
}
}
else
{
lean_dec(x_46);
x_27 = x_43;
goto block_31;
}
}
else
{
lean_dec(x_46);
x_27 = x_43;
goto block_31;
}
}
else
{
lean_dec(x_46);
x_19 = x_43;
goto block_22;
}
}
else
{
uint8_t x_635; 
x_635 = lean_unbox(x_42);
lean_dec(x_42);
if (x_635 == 0)
{
lean_dec(x_43);
return x_41;
}
else
{
uint8_t x_636; 
x_636 = !lean_is_exclusive(x_41);
if (x_636 == 0)
{
lean_object* x_637; lean_object* x_638; uint8_t x_639; lean_object* x_640; 
x_637 = lean_ctor_get(x_41, 1);
lean_dec(x_637);
x_638 = lean_ctor_get(x_41, 0);
lean_dec(x_638);
x_639 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_640 = lean_box(x_639);
lean_ctor_set(x_41, 0, x_640);
return x_41;
}
else
{
uint8_t x_641; lean_object* x_642; lean_object* x_643; 
lean_dec(x_41);
x_641 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_642 = lean_box(x_641);
x_643 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_643, 0, x_642);
lean_ctor_set(x_643, 1, x_43);
return x_643;
}
}
}
}
else
{
return x_41;
}
}
else
{
x_23 = x_2;
goto block_26;
}
}
else
{
uint8_t x_644; lean_object* x_645; lean_object* x_646; 
x_644 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24;
x_645 = lean_box(x_644);
x_646 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_646, 0, x_645);
lean_ctor_set(x_646, 1, x_2);
return x_646;
}
}
else
{
x_27 = x_2;
goto block_31;
}
}
else
{
x_27 = x_2;
goto block_31;
}
block_6:
{
uint8_t x_4; lean_object* x_5; 
x_4 = 64;
x_5 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_4, x_3);
return x_5;
}
block_10:
{
uint8_t x_8; lean_object* x_9; 
x_8 = 10;
x_9 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_8, x_7);
return x_9;
}
block_14:
{
uint8_t x_12; lean_object* x_13; 
x_12 = 14;
x_13 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_12, x_11);
return x_13;
}
block_18:
{
uint8_t x_16; lean_object* x_17; 
x_16 = 5;
x_17 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_16, x_15);
return x_17;
}
block_22:
{
uint8_t x_20; lean_object* x_21; 
x_20 = 6;
x_21 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_20, x_19);
return x_21;
}
block_26:
{
uint8_t x_24; lean_object* x_25; 
x_24 = 7;
x_25 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_24, x_23);
return x_25;
}
block_31:
{
uint8_t x_28; lean_object* x_29; lean_object* x_30; 
x_28 = 1;
x_29 = lean_box(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_is__CSR__defined___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_is__CSR__defined(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__CSR(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LeanRV64DExecutable_Functions_is__CSR__defined(x_1, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_LeanRV64DExecutable_Functions_check__TVM__SATP(x_1, x_2, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_LeanRV64DExecutable_Functions_check__Counteren(x_1, x_2, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_LeanRV64DExecutable_Functions_check__Stimecmp(x_1, x_2, x_13);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = lean_unbox(x_6);
if (x_15 == 0)
{
uint8_t x_16; 
lean_dec(x_12);
lean_dec(x_9);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_14, 0);
lean_dec(x_17);
lean_ctor_set(x_14, 0, x_6);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_6);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_6);
x_20 = lean_ctor_get(x_14, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
x_22 = l_LeanRV64DExecutable_Functions_check__CSR__priv(x_1, x_2);
if (x_22 == 0)
{
uint8_t x_23; 
lean_dec(x_20);
lean_dec(x_12);
lean_dec(x_9);
x_23 = !lean_is_exclusive(x_14);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_14, 1);
lean_dec(x_24);
x_25 = lean_ctor_get(x_14, 0);
lean_dec(x_25);
x_26 = lean_box(x_22);
lean_ctor_set(x_14, 0, x_26);
return x_14;
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_14);
x_27 = lean_box(x_22);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_21);
return x_28;
}
}
else
{
uint8_t x_29; 
x_29 = l_LeanRV64DExecutable_Functions_check__CSR__access(x_1, x_3);
if (x_29 == 0)
{
uint8_t x_30; 
lean_dec(x_20);
lean_dec(x_12);
lean_dec(x_9);
x_30 = !lean_is_exclusive(x_14);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_14, 1);
lean_dec(x_31);
x_32 = lean_ctor_get(x_14, 0);
lean_dec(x_32);
x_33 = lean_box(x_29);
lean_ctor_set(x_14, 0, x_33);
return x_14;
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_14);
x_34 = lean_box(x_29);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_21);
return x_35;
}
}
else
{
uint8_t x_36; 
x_36 = lean_unbox(x_9);
if (x_36 == 0)
{
uint8_t x_37; 
lean_dec(x_20);
lean_dec(x_12);
x_37 = !lean_is_exclusive(x_14);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_14, 1);
lean_dec(x_38);
x_39 = lean_ctor_get(x_14, 0);
lean_dec(x_39);
lean_ctor_set(x_14, 0, x_9);
return x_14;
}
else
{
lean_object* x_40; 
lean_dec(x_14);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_9);
lean_ctor_set(x_40, 1, x_21);
return x_40;
}
}
else
{
uint8_t x_41; 
lean_dec(x_9);
x_41 = lean_unbox(x_12);
if (x_41 == 0)
{
uint8_t x_42; 
lean_dec(x_20);
x_42 = !lean_is_exclusive(x_14);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_14, 1);
lean_dec(x_43);
x_44 = lean_ctor_get(x_14, 0);
lean_dec(x_44);
lean_ctor_set(x_14, 0, x_12);
return x_14;
}
else
{
lean_object* x_45; 
lean_dec(x_14);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_12);
lean_ctor_set(x_45, 1, x_21);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_12);
x_46 = lean_unbox(x_20);
lean_dec(x_20);
if (x_46 == 0)
{
lean_dec(x_21);
return x_14;
}
else
{
uint8_t x_47; 
x_47 = !lean_is_exclusive(x_14);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; 
x_48 = lean_ctor_get(x_14, 1);
lean_dec(x_48);
x_49 = lean_ctor_get(x_14, 0);
lean_dec(x_49);
x_50 = l_LeanRV64DExecutable_Functions_check__seed__CSR(x_1, x_2, x_3);
x_51 = lean_box(x_50);
lean_ctor_set(x_14, 0, x_51);
return x_14;
}
else
{
uint8_t x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_14);
x_52 = l_LeanRV64DExecutable_Functions_check__seed__CSR(x_1, x_2, x_3);
x_53 = lean_box(x_52);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_21);
return x_54;
}
}
}
}
}
}
}
}
else
{
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_6);
return x_14;
}
}
else
{
lean_dec(x_9);
lean_dec(x_6);
return x_11;
}
}
else
{
lean_dec(x_6);
return x_8;
}
}
else
{
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_check__CSR___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_LeanRV64DExecutable_Functions_check__CSR(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_exception__delegatee(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = 82;
x_5 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_4, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_LeanRV64DExecutable_Functions_num__of__ExceptionType(x_1);
x_9 = lean_unsigned_to_nat(64u);
x_10 = l_Int_toNat(x_8);
lean_dec(x_8);
x_11 = l_Sail_BitVec_access(x_9, x_6, x_10);
lean_dec(x_10);
lean_dec(x_6);
x_12 = l_LeanRV64DExecutable_Functions_bool__bit__backwards(x_11, x_7);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = 6;
x_16 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_15, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_31; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_19 = x_16;
} else {
 lean_dec_ref(x_16);
 x_19 = lean_box(0);
}
x_31 = lean_unbox(x_17);
lean_dec(x_17);
if (x_31 == 0)
{
lean_dec(x_13);
goto block_30;
}
else
{
uint8_t x_32; 
x_32 = lean_unbox(x_13);
lean_dec(x_13);
if (x_32 == 0)
{
goto block_30;
}
else
{
uint8_t x_33; 
x_33 = 1;
x_20 = x_33;
goto block_28;
}
}
block_28:
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = l_LeanRV64DExecutable_Functions_privLevel__bits__forwards(x_20);
x_22 = l_LeanRV64DExecutable_Functions_privLevel__bits__forwards(x_2);
x_23 = lean_nat_dec_lt(x_21, x_22);
lean_dec(x_22);
lean_dec(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_box(x_20);
if (lean_is_scalar(x_19)) {
 x_25 = lean_alloc_ctor(0, 2, 0);
} else {
 x_25 = x_19;
}
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_18);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_box(x_2);
if (lean_is_scalar(x_19)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_19;
}
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_18);
return x_27;
}
}
block_30:
{
uint8_t x_29; 
x_29 = 2;
x_20 = x_29;
goto block_28;
}
}
else
{
uint8_t x_34; 
lean_dec(x_13);
x_34 = !lean_is_exclusive(x_16);
if (x_34 == 0)
{
return x_16;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_16, 0);
x_36 = lean_ctor_get(x_16, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_16);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_12);
if (x_38 == 0)
{
return x_12;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_12, 0);
x_40 = lean_ctor_get(x_12, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_12);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_5);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_5, 0);
lean_dec(x_43);
x_44 = lean_box(1);
lean_ctor_set(x_5, 0, x_44);
return x_5;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_5, 1);
lean_inc(x_45);
lean_dec(x_5);
x_46 = lean_box(1);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_exception__delegatee___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_LeanRV64DExecutable_Functions_exception__delegatee(x_1, x_4, x_3);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__0() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 4;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 7;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 5;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__4() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 2;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__5() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 8;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_findPendingInterrupt(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_LeanRV64DExecutable_Functions___get__Minterrupts__MEI(x_1);
x_3 = l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1;
x_4 = lean_nat_dec_eq(x_2, x_3);
lean_dec(x_2);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_LeanRV64DExecutable_Functions___get__Minterrupts__MSI(x_1);
x_6 = lean_nat_dec_eq(x_5, x_3);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_LeanRV64DExecutable_Functions___get__Minterrupts__MTI(x_1);
x_8 = lean_nat_dec_eq(x_7, x_3);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_LeanRV64DExecutable_Functions___get__Minterrupts__SEI(x_1);
x_10 = lean_nat_dec_eq(x_9, x_3);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_LeanRV64DExecutable_Functions___get__Minterrupts__SSI(x_1);
x_12 = lean_nat_dec_eq(x_11, x_3);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_LeanRV64DExecutable_Functions___get__Minterrupts__STI(x_1);
x_14 = lean_nat_dec_eq(x_13, x_3);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_box(0);
return x_15;
}
else
{
lean_object* x_16; 
x_16 = l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__0;
return x_16;
}
}
else
{
lean_object* x_17; 
x_17 = l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__1;
return x_17;
}
}
else
{
lean_object* x_18; 
x_18 = l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__2;
return x_18;
}
}
else
{
lean_object* x_19; 
x_19 = l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__3;
return x_19;
}
}
else
{
lean_object* x_20; 
x_20 = l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__4;
return x_20;
}
}
else
{
lean_object* x_21; 
x_21 = l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__5;
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_findPendingInterrupt___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_findPendingInterrupt(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_getPendingSet___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("riscv_sys_control.sail:138.58-138.59", 36, 36);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_getPendingSet___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_nat_mul(x_1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_getPendingSet(uint8_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; uint8_t x_35; lean_object* x_39; uint8_t x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; uint8_t x_69; lean_object* x_70; 
x_69 = 6;
x_70 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_69, x_2);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; uint8_t x_73; lean_object* x_74; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = 81;
x_74 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_73, x_72);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; uint8_t x_77; uint8_t x_163; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_163 = lean_unbox(x_71);
if (x_163 == 0)
{
lean_object* x_164; uint8_t x_165; 
lean_dec(x_71);
x_164 = lean_unsigned_to_nat(0u);
x_165 = lean_nat_dec_eq(x_75, x_164);
lean_dec(x_75);
x_77 = x_165;
goto block_162;
}
else
{
uint8_t x_166; 
lean_dec(x_75);
x_166 = lean_unbox(x_71);
lean_dec(x_71);
x_77 = x_166;
goto block_162;
}
block_162:
{
lean_object* x_78; lean_object* x_79; 
x_78 = l_LeanRV64DExecutable_Functions_getPendingSet___closed__0;
x_79 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_dec__bits__1__forwards_spec__0___redArg(x_77, x_78, x_76);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; uint8_t x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
lean_dec(x_79);
x_81 = 83;
x_82 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_81, x_80);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; uint8_t x_85; lean_object* x_86; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = 84;
x_86 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_85, x_84);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_73, x_88);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_81, x_91);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_95 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_85, x_94);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_73, x_97);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; uint8_t x_101; lean_object* x_102; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
x_101 = 87;
x_102 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_101, x_100);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; uint8_t x_112; 
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
x_105 = l_LeanRV64DExecutable_Functions_getPendingSet___closed__1;
x_106 = l_BitVec_not(x_105, x_90);
lean_dec(x_90);
x_107 = lean_nat_land(x_87, x_106);
lean_dec(x_106);
lean_dec(x_87);
x_108 = lean_nat_land(x_83, x_107);
lean_dec(x_107);
lean_dec(x_83);
x_109 = lean_nat_land(x_96, x_99);
lean_dec(x_99);
lean_dec(x_96);
x_110 = lean_nat_land(x_93, x_109);
lean_dec(x_109);
lean_dec(x_93);
x_111 = 2;
x_112 = l_beqPrivilege____x40_LeanRV64DExecutable_Defs___hyg_4812_(x_1, x_111);
if (x_112 == 0)
{
lean_dec(x_103);
x_59 = x_108;
x_60 = x_101;
x_61 = x_110;
x_62 = x_104;
x_63 = x_112;
goto block_68;
}
else
{
lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_113 = l_LeanRV64DExecutable_Functions___get__Mstatus__MIE(x_103);
lean_dec(x_103);
x_114 = l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1;
x_115 = lean_nat_dec_eq(x_113, x_114);
lean_dec(x_113);
x_59 = x_108;
x_60 = x_101;
x_61 = x_110;
x_62 = x_104;
x_63 = x_115;
goto block_68;
}
}
else
{
uint8_t x_116; 
lean_dec(x_99);
lean_dec(x_96);
lean_dec(x_93);
lean_dec(x_90);
lean_dec(x_87);
lean_dec(x_83);
x_116 = !lean_is_exclusive(x_102);
if (x_116 == 0)
{
lean_object* x_117; lean_object* x_118; 
x_117 = lean_ctor_get(x_102, 0);
lean_dec(x_117);
x_118 = lean_box(1);
lean_ctor_set(x_102, 0, x_118);
return x_102;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_102, 1);
lean_inc(x_119);
lean_dec(x_102);
x_120 = lean_box(1);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_119);
return x_121;
}
}
}
else
{
uint8_t x_122; 
lean_dec(x_96);
lean_dec(x_93);
lean_dec(x_90);
lean_dec(x_87);
lean_dec(x_83);
x_122 = !lean_is_exclusive(x_98);
if (x_122 == 0)
{
lean_object* x_123; lean_object* x_124; 
x_123 = lean_ctor_get(x_98, 0);
lean_dec(x_123);
x_124 = lean_box(1);
lean_ctor_set(x_98, 0, x_124);
return x_98;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_98, 1);
lean_inc(x_125);
lean_dec(x_98);
x_126 = lean_box(1);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_125);
return x_127;
}
}
}
else
{
uint8_t x_128; 
lean_dec(x_93);
lean_dec(x_90);
lean_dec(x_87);
lean_dec(x_83);
x_128 = !lean_is_exclusive(x_95);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
x_129 = lean_ctor_get(x_95, 0);
lean_dec(x_129);
x_130 = lean_box(1);
lean_ctor_set(x_95, 0, x_130);
return x_95;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_131 = lean_ctor_get(x_95, 1);
lean_inc(x_131);
lean_dec(x_95);
x_132 = lean_box(1);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_131);
return x_133;
}
}
}
else
{
uint8_t x_134; 
lean_dec(x_90);
lean_dec(x_87);
lean_dec(x_83);
x_134 = !lean_is_exclusive(x_92);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; 
x_135 = lean_ctor_get(x_92, 0);
lean_dec(x_135);
x_136 = lean_box(1);
lean_ctor_set(x_92, 0, x_136);
return x_92;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_137 = lean_ctor_get(x_92, 1);
lean_inc(x_137);
lean_dec(x_92);
x_138 = lean_box(1);
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_137);
return x_139;
}
}
}
else
{
uint8_t x_140; 
lean_dec(x_87);
lean_dec(x_83);
x_140 = !lean_is_exclusive(x_89);
if (x_140 == 0)
{
lean_object* x_141; lean_object* x_142; 
x_141 = lean_ctor_get(x_89, 0);
lean_dec(x_141);
x_142 = lean_box(1);
lean_ctor_set(x_89, 0, x_142);
return x_89;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_143 = lean_ctor_get(x_89, 1);
lean_inc(x_143);
lean_dec(x_89);
x_144 = lean_box(1);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_143);
return x_145;
}
}
}
else
{
uint8_t x_146; 
lean_dec(x_83);
x_146 = !lean_is_exclusive(x_86);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; 
x_147 = lean_ctor_get(x_86, 0);
lean_dec(x_147);
x_148 = lean_box(1);
lean_ctor_set(x_86, 0, x_148);
return x_86;
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_149 = lean_ctor_get(x_86, 1);
lean_inc(x_149);
lean_dec(x_86);
x_150 = lean_box(1);
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_149);
return x_151;
}
}
}
else
{
uint8_t x_152; 
x_152 = !lean_is_exclusive(x_82);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; 
x_153 = lean_ctor_get(x_82, 0);
lean_dec(x_153);
x_154 = lean_box(1);
lean_ctor_set(x_82, 0, x_154);
return x_82;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_155 = lean_ctor_get(x_82, 1);
lean_inc(x_155);
lean_dec(x_82);
x_156 = lean_box(1);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_155);
return x_157;
}
}
}
else
{
uint8_t x_158; 
x_158 = !lean_is_exclusive(x_79);
if (x_158 == 0)
{
return x_79;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = lean_ctor_get(x_79, 0);
x_160 = lean_ctor_get(x_79, 1);
lean_inc(x_160);
lean_inc(x_159);
lean_dec(x_79);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
}
}
}
else
{
uint8_t x_167; 
lean_dec(x_71);
x_167 = !lean_is_exclusive(x_74);
if (x_167 == 0)
{
lean_object* x_168; lean_object* x_169; 
x_168 = lean_ctor_get(x_74, 0);
lean_dec(x_168);
x_169 = lean_box(1);
lean_ctor_set(x_74, 0, x_169);
return x_74;
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_170 = lean_ctor_get(x_74, 1);
lean_inc(x_170);
lean_dec(x_74);
x_171 = lean_box(1);
x_172 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_172, 0, x_171);
lean_ctor_set(x_172, 1, x_170);
return x_172;
}
}
}
else
{
uint8_t x_173; 
x_173 = !lean_is_exclusive(x_70);
if (x_173 == 0)
{
return x_70;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_174 = lean_ctor_get(x_70, 0);
x_175 = lean_ctor_get(x_70, 1);
lean_inc(x_175);
lean_inc(x_174);
lean_dec(x_70);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_174);
lean_ctor_set(x_176, 1, x_175);
return x_176;
}
}
block_6:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
block_17:
{
if (x_7 == 0)
{
lean_dec(x_8);
x_3 = x_9;
goto block_6;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_8, x_10);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = 1;
x_13 = lean_box(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_9);
return x_16;
}
else
{
lean_dec(x_8);
x_3 = x_9;
goto block_6;
}
}
}
block_30:
{
if (x_20 == 0)
{
lean_dec(x_18);
x_7 = x_21;
x_8 = x_19;
x_9 = x_22;
goto block_17;
}
else
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_nat_dec_eq(x_18, x_23);
if (x_24 == 0)
{
uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_19);
x_25 = 2;
x_26 = lean_box(x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_18);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_22);
return x_29;
}
else
{
lean_dec(x_18);
x_7 = x_21;
x_8 = x_19;
x_9 = x_22;
goto block_17;
}
}
}
block_38:
{
if (x_35 == 0)
{
uint8_t x_36; uint8_t x_37; 
x_36 = 0;
x_37 = l_beqPrivilege____x40_LeanRV64DExecutable_Defs___hyg_4812_(x_1, x_36);
x_18 = x_31;
x_19 = x_33;
x_20 = x_34;
x_21 = x_37;
x_22 = x_32;
goto block_30;
}
else
{
x_18 = x_31;
x_19 = x_33;
x_20 = x_34;
x_21 = x_35;
x_22 = x_32;
goto block_30;
}
}
block_58:
{
lean_object* x_44; 
x_44 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_40, x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; uint8_t x_48; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = 1;
x_48 = l_beqPrivilege____x40_LeanRV64DExecutable_Defs___hyg_4812_(x_1, x_47);
if (x_48 == 0)
{
lean_dec(x_45);
x_31 = x_39;
x_32 = x_46;
x_33 = x_41;
x_34 = x_42;
x_35 = x_48;
goto block_38;
}
else
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_49 = l_LeanRV64DExecutable_Functions___get__Mstatus__SIE(x_45);
lean_dec(x_45);
x_50 = l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1;
x_51 = lean_nat_dec_eq(x_49, x_50);
lean_dec(x_49);
x_31 = x_39;
x_32 = x_46;
x_33 = x_41;
x_34 = x_42;
x_35 = x_51;
goto block_38;
}
}
else
{
uint8_t x_52; 
lean_dec(x_41);
lean_dec(x_39);
x_52 = !lean_is_exclusive(x_44);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_44, 0);
lean_dec(x_53);
x_54 = lean_box(1);
lean_ctor_set(x_44, 0, x_54);
return x_44;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_44, 1);
lean_inc(x_55);
lean_dec(x_44);
x_56 = lean_box(1);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
}
block_68:
{
if (x_63 == 0)
{
uint8_t x_64; uint8_t x_65; 
x_64 = 1;
x_65 = l_beqPrivilege____x40_LeanRV64DExecutable_Defs___hyg_4812_(x_1, x_64);
if (x_65 == 0)
{
uint8_t x_66; uint8_t x_67; 
x_66 = 0;
x_67 = l_beqPrivilege____x40_LeanRV64DExecutable_Defs___hyg_4812_(x_1, x_66);
x_39 = x_59;
x_40 = x_60;
x_41 = x_61;
x_42 = x_67;
x_43 = x_62;
goto block_58;
}
else
{
x_39 = x_59;
x_40 = x_60;
x_41 = x_61;
x_42 = x_65;
x_43 = x_62;
goto block_58;
}
}
else
{
x_39 = x_59;
x_40 = x_60;
x_41 = x_61;
x_42 = x_63;
x_43 = x_62;
goto block_58;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_getPendingSet___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_LeanRV64DExecutable_Functions_getPendingSet(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_shouldWakeForInterrupt___redArg(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = 83;
x_3 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = 84;
x_7 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_6, x_5);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_nat_land(x_4, x_9);
lean_dec(x_9);
lean_dec(x_4);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_eq(x_10, x_11);
lean_dec(x_10);
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; 
x_13 = 1;
x_14 = lean_box(x_13);
lean_ctor_set(x_7, 0, x_14);
return x_7;
}
else
{
uint8_t x_15; lean_object* x_16; 
x_15 = 0;
x_16 = lean_box(x_15);
lean_ctor_set(x_7, 0, x_16);
return x_7;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_7, 0);
x_18 = lean_ctor_get(x_7, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_7);
x_19 = lean_nat_land(x_4, x_17);
lean_dec(x_17);
lean_dec(x_4);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_nat_dec_eq(x_19, x_20);
lean_dec(x_19);
if (x_21 == 0)
{
uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_22 = 1;
x_23 = lean_box(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_18);
return x_24;
}
else
{
uint8_t x_25; lean_object* x_26; lean_object* x_27; 
x_25 = 0;
x_26 = lean_box(x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_18);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_4);
x_28 = !lean_is_exclusive(x_7);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_7, 0);
lean_dec(x_29);
x_30 = lean_box(1);
lean_ctor_set(x_7, 0, x_30);
return x_7;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_7, 1);
lean_inc(x_31);
lean_dec(x_7);
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
x_34 = !lean_is_exclusive(x_3);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_3, 0);
lean_dec(x_35);
x_36 = lean_box(1);
lean_ctor_set(x_3, 0, x_36);
return x_3;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_3, 1);
lean_inc(x_37);
lean_dec(x_3);
x_38 = lean_box(1);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_shouldWakeForInterrupt(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_shouldWakeForInterrupt___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_shouldWakeForInterrupt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_shouldWakeForInterrupt(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_dispatchInterrupt(uint8_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_getPendingSet(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_6 = x_3;
} else {
 lean_dec_ref(x_3);
 x_6 = lean_box(0);
}
if (lean_obj_tag(x_4) == 0)
{
goto block_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
lean_dec(x_4);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = l_LeanRV64DExecutable_Functions_findPendingInterrupt(x_12);
lean_dec(x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_free_object(x_10);
lean_dec(x_13);
goto block_9;
}
else
{
uint8_t x_15; 
lean_dec(x_6);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_ctor_set(x_10, 0, x_16);
lean_ctor_set(x_14, 0, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_5);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
lean_dec(x_14);
lean_ctor_set(x_10, 0, x_18);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_10);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_5);
return x_20;
}
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_10);
x_23 = l_LeanRV64DExecutable_Functions_findPendingInterrupt(x_21);
lean_dec(x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_dec(x_22);
goto block_9;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_6);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 x_25 = x_23;
} else {
 lean_dec_ref(x_23);
 x_25 = lean_box(0);
}
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_22);
if (lean_is_scalar(x_25)) {
 x_27 = lean_alloc_ctor(1, 1, 0);
} else {
 x_27 = x_25;
}
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_5);
return x_28;
}
}
}
block_9:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
if (lean_is_scalar(x_6)) {
 x_8 = lean_alloc_ctor(0, 2, 0);
} else {
 x_8 = x_6;
}
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_3);
if (x_29 == 0)
{
return x_3;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_3, 0);
x_31 = lean_ctor_get(x_3, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_3);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_dispatchInterrupt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_LeanRV64DExecutable_Functions_dispatchInterrupt(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_tval(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_tval___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_tval(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_track__trap___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mstatus", 7, 7);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_track__trap___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("riscv_sys_control.sail", 22, 22);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_track__trap___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(218u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_track__trap___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Invalid privilege level", 23, 23);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_track__trap___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("scause", 6, 6);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_track__trap___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("stval", 5, 5);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_track__trap___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("sepc", 4, 4);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_track__trap___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mcause", 6, 6);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_track__trap___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mtval", 5, 5);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_track__trap___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mepc", 4, 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_track__trap(uint8_t x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = 87;
x_4 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_LeanRV64DExecutable_Functions_track__trap___closed__0;
x_7 = l_LeanRV64DExecutable_Functions_csr__name__write__callback___redArg(x_6, x_5);
switch (x_1) {
case 0:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_LeanRV64DExecutable_Functions_track__trap___closed__1;
x_10 = l_LeanRV64DExecutable_Functions_track__trap___closed__2;
x_11 = l_LeanRV64DExecutable_Functions_track__trap___closed__3;
x_12 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_9, x_10, x_11, x_8);
return x_12;
}
case 1:
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = 60;
x_15 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_14, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_LeanRV64DExecutable_Functions_track__trap___closed__4;
x_18 = l_LeanRV64DExecutable_Functions_csr__name__write__callback___redArg(x_17, x_16);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = 59;
x_21 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_20, x_19);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_LeanRV64DExecutable_Functions_track__trap___closed__5;
x_24 = l_LeanRV64DExecutable_Functions_csr__name__write__callback___redArg(x_23, x_22);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = 61;
x_27 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_26, x_25);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_LeanRV64DExecutable_Functions_track__trap___closed__6;
x_30 = l_LeanRV64DExecutable_Functions_csr__name__write__callback___redArg(x_29, x_28);
return x_30;
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_27);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_27, 0);
lean_dec(x_32);
x_33 = lean_box(1);
lean_ctor_set(x_27, 0, x_33);
return x_27;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_27, 1);
lean_inc(x_34);
lean_dec(x_27);
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
x_37 = !lean_is_exclusive(x_21);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_21, 0);
lean_dec(x_38);
x_39 = lean_box(1);
lean_ctor_set(x_21, 0, x_39);
return x_21;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_21, 1);
lean_inc(x_40);
lean_dec(x_21);
x_41 = lean_box(1);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
}
else
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_15);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_15, 0);
lean_dec(x_44);
x_45 = lean_box(1);
lean_ctor_set(x_15, 0, x_45);
return x_15;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_15, 1);
lean_inc(x_46);
lean_dec(x_15);
x_47 = lean_box(1);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
}
default: 
{
lean_object* x_49; uint8_t x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_7, 1);
lean_inc(x_49);
lean_dec(x_7);
x_50 = 79;
x_51 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_50, x_49);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; 
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = l_LeanRV64DExecutable_Functions_track__trap___closed__7;
x_54 = l_LeanRV64DExecutable_Functions_csr__name__write__callback___redArg(x_53, x_52);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_56 = 77;
x_57 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_56, x_55);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; 
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_59 = l_LeanRV64DExecutable_Functions_track__trap___closed__8;
x_60 = l_LeanRV64DExecutable_Functions_csr__name__write__callback___redArg(x_59, x_58);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_62 = 78;
x_63 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_62, x_61);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
lean_dec(x_63);
x_65 = l_LeanRV64DExecutable_Functions_track__trap___closed__9;
x_66 = l_LeanRV64DExecutable_Functions_csr__name__write__callback___redArg(x_65, x_64);
return x_66;
}
else
{
uint8_t x_67; 
x_67 = !lean_is_exclusive(x_63);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_63, 0);
lean_dec(x_68);
x_69 = lean_box(1);
lean_ctor_set(x_63, 0, x_69);
return x_63;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_63, 1);
lean_inc(x_70);
lean_dec(x_63);
x_71 = lean_box(1);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
}
else
{
uint8_t x_73; 
x_73 = !lean_is_exclusive(x_57);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; 
x_74 = lean_ctor_get(x_57, 0);
lean_dec(x_74);
x_75 = lean_box(1);
lean_ctor_set(x_57, 0, x_75);
return x_57;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_57, 1);
lean_inc(x_76);
lean_dec(x_57);
x_77 = lean_box(1);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_76);
return x_78;
}
}
}
else
{
uint8_t x_79; 
x_79 = !lean_is_exclusive(x_51);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; 
x_80 = lean_ctor_get(x_51, 0);
lean_dec(x_80);
x_81 = lean_box(1);
lean_ctor_set(x_51, 0, x_81);
return x_51;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_51, 1);
lean_inc(x_82);
lean_dec(x_51);
x_83 = lean_box(1);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_82);
return x_84;
}
}
}
}
}
else
{
uint8_t x_85; 
x_85 = !lean_is_exclusive(x_4);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; 
x_86 = lean_ctor_get(x_4, 0);
lean_dec(x_86);
x_87 = lean_box(1);
lean_ctor_set(x_4, 0, x_87);
return x_4;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_4, 1);
lean_inc(x_88);
lean_dec(x_4);
x_89 = lean_box(1);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_88);
return x_90;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_track__trap___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_LeanRV64DExecutable_Functions_track__trap(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(274u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("no supervisor mode present for delegation", 41, 41);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__3;
x_2 = l_Int_toNat(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__4;
x_2 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__2;
x_3 = l_Int_pow(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__6;
x_2 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__5;
x_3 = lean_int_mul(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__8;
x_2 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__7;
x_3 = lean_int_sub(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__9;
x_2 = l_Int_toNat(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__2;
x_2 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__7;
x_3 = lean_int_sub(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__11;
x_2 = l_Int_toNat(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(261u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("invalid privilege for s-mode trap", 33, 33);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_7 = l_LeanRV64DExecutable_Functions_track__trap___closed__1;
x_8 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__0;
x_9 = l_LeanRV64DExecutable_Functions_track__trap___closed__3;
x_10 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_7, x_8, x_9, x_6);
return x_10;
}
case 1:
{
uint8_t x_11; lean_object* x_12; 
x_11 = 6;
x_12 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_11, x_6);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__1;
x_16 = lean_unbox(x_13);
lean_dec(x_13);
x_17 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_dec__bits__1__forwards_spec__0___redArg(x_16, x_15, x_14);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = 60;
x_20 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_19, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_unsigned_to_nat(8u);
x_24 = l_LeanRV64DExecutable_Functions_getPendingSet___closed__1;
x_25 = lean_unsigned_to_nat(1u);
x_26 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__10;
x_27 = l_LeanRV64DExecutable_Functions_bool__bits__forwards(x_2);
x_28 = l_Sail_BitVec_updateSubrange(x_24, x_21, x_26, x_26, x_27);
lean_dec(x_27);
lean_dec(x_21);
x_29 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_19, x_28, x_22);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_19, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__12;
x_35 = lean_unsigned_to_nat(0u);
x_36 = lean_unsigned_to_nat(63u);
x_37 = l_BitVec_setWidth(x_23, x_36, x_3);
x_38 = l_Sail_BitVec_updateSubrange(x_24, x_32, x_34, x_35, x_37);
lean_dec(x_37);
lean_dec(x_32);
x_39 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_19, x_38, x_33);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = 87;
x_42 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_41, x_40);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_41, x_44);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = lean_unsigned_to_nat(64u);
x_49 = lean_unsigned_to_nat(5u);
x_50 = l_LeanRV64DExecutable_Functions___get__Mstatus__SIE(x_46);
lean_dec(x_46);
x_51 = l_Sail_BitVec_updateSubrange(x_48, x_43, x_49, x_49, x_50);
lean_dec(x_50);
lean_dec(x_43);
x_52 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_41, x_51, x_47);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_54 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_41, x_53);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__70;
x_58 = l_Sail_BitVec_updateSubrange(x_48, x_55, x_25, x_25, x_57);
lean_dec(x_55);
x_59 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_41, x_58, x_56);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
lean_dec(x_59);
x_61 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_41, x_60);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; uint8_t x_64; lean_object* x_65; lean_object* x_66; lean_object* x_97; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = 90;
x_97 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_64, x_63);
if (lean_obj_tag(x_97) == 0)
{
lean_object* x_98; uint8_t x_99; 
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
x_99 = lean_unbox(x_98);
lean_dec(x_98);
switch (x_99) {
case 0:
{
lean_object* x_100; 
x_100 = lean_ctor_get(x_97, 1);
lean_inc(x_100);
lean_dec(x_97);
x_65 = x_57;
x_66 = x_100;
goto block_96;
}
case 1:
{
lean_object* x_101; lean_object* x_102; 
x_101 = lean_ctor_get(x_97, 1);
lean_inc(x_101);
lean_dec(x_97);
x_102 = l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1;
x_65 = x_102;
x_66 = x_101;
goto block_96;
}
default: 
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
lean_dec(x_62);
lean_dec(x_4);
x_103 = lean_ctor_get(x_97, 1);
lean_inc(x_103);
lean_dec(x_97);
x_104 = l_LeanRV64DExecutable_Functions_track__trap___closed__1;
x_105 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__13;
x_106 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__14;
x_107 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_104, x_105, x_106, x_103);
return x_107;
}
}
}
else
{
uint8_t x_108; 
lean_dec(x_62);
lean_dec(x_4);
x_108 = !lean_is_exclusive(x_97);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_97, 0);
lean_dec(x_109);
x_110 = lean_box(1);
lean_ctor_set(x_97, 0, x_110);
return x_97;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_97, 1);
lean_inc(x_111);
lean_dec(x_97);
x_112 = lean_box(1);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_111);
return x_113;
}
}
block_96:
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_67 = l_Sail_BitVec_updateSubrange(x_48, x_62, x_23, x_23, x_65);
lean_dec(x_65);
lean_dec(x_62);
x_68 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_41, x_67, x_66);
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
lean_dec(x_68);
x_70 = 59;
x_71 = l_LeanRV64DExecutable_Functions_tval(x_5);
x_72 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_70, x_71, x_69);
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
lean_dec(x_72);
x_74 = 61;
x_75 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_74, x_4, x_73);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = lean_box(x_1);
x_78 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_64, x_77, x_76);
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
lean_dec(x_78);
x_80 = l_LeanRV64DExecutable_Functions_track__trap(x_1, x_79);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
lean_dec(x_80);
x_82 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_19, x_81);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = l_LeanRV64DExecutable_Functions_prepare__trap__vector(x_1, x_83, x_84);
lean_dec(x_83);
return x_85;
}
else
{
uint8_t x_86; 
x_86 = !lean_is_exclusive(x_82);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_ctor_get(x_82, 0);
lean_dec(x_87);
x_88 = lean_box(1);
lean_ctor_set(x_82, 0, x_88);
return x_82;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_82, 1);
lean_inc(x_89);
lean_dec(x_82);
x_90 = lean_box(1);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_89);
return x_91;
}
}
}
else
{
uint8_t x_92; 
x_92 = !lean_is_exclusive(x_80);
if (x_92 == 0)
{
return x_80;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_80, 0);
x_94 = lean_ctor_get(x_80, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_80);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
}
else
{
uint8_t x_114; 
lean_dec(x_4);
x_114 = !lean_is_exclusive(x_61);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; 
x_115 = lean_ctor_get(x_61, 0);
lean_dec(x_115);
x_116 = lean_box(1);
lean_ctor_set(x_61, 0, x_116);
return x_61;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_61, 1);
lean_inc(x_117);
lean_dec(x_61);
x_118 = lean_box(1);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_117);
return x_119;
}
}
}
else
{
uint8_t x_120; 
lean_dec(x_4);
x_120 = !lean_is_exclusive(x_54);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; 
x_121 = lean_ctor_get(x_54, 0);
lean_dec(x_121);
x_122 = lean_box(1);
lean_ctor_set(x_54, 0, x_122);
return x_54;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_54, 1);
lean_inc(x_123);
lean_dec(x_54);
x_124 = lean_box(1);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_123);
return x_125;
}
}
}
else
{
uint8_t x_126; 
lean_dec(x_43);
lean_dec(x_4);
x_126 = !lean_is_exclusive(x_45);
if (x_126 == 0)
{
lean_object* x_127; lean_object* x_128; 
x_127 = lean_ctor_get(x_45, 0);
lean_dec(x_127);
x_128 = lean_box(1);
lean_ctor_set(x_45, 0, x_128);
return x_45;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_45, 1);
lean_inc(x_129);
lean_dec(x_45);
x_130 = lean_box(1);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_129);
return x_131;
}
}
}
else
{
uint8_t x_132; 
lean_dec(x_4);
x_132 = !lean_is_exclusive(x_42);
if (x_132 == 0)
{
lean_object* x_133; lean_object* x_134; 
x_133 = lean_ctor_get(x_42, 0);
lean_dec(x_133);
x_134 = lean_box(1);
lean_ctor_set(x_42, 0, x_134);
return x_42;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_42, 1);
lean_inc(x_135);
lean_dec(x_42);
x_136 = lean_box(1);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_135);
return x_137;
}
}
}
else
{
uint8_t x_138; 
lean_dec(x_4);
x_138 = !lean_is_exclusive(x_31);
if (x_138 == 0)
{
lean_object* x_139; lean_object* x_140; 
x_139 = lean_ctor_get(x_31, 0);
lean_dec(x_139);
x_140 = lean_box(1);
lean_ctor_set(x_31, 0, x_140);
return x_31;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_141 = lean_ctor_get(x_31, 1);
lean_inc(x_141);
lean_dec(x_31);
x_142 = lean_box(1);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_141);
return x_143;
}
}
}
else
{
uint8_t x_144; 
lean_dec(x_4);
x_144 = !lean_is_exclusive(x_20);
if (x_144 == 0)
{
lean_object* x_145; lean_object* x_146; 
x_145 = lean_ctor_get(x_20, 0);
lean_dec(x_145);
x_146 = lean_box(1);
lean_ctor_set(x_20, 0, x_146);
return x_20;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_147 = lean_ctor_get(x_20, 1);
lean_inc(x_147);
lean_dec(x_20);
x_148 = lean_box(1);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_147);
return x_149;
}
}
}
else
{
uint8_t x_150; 
lean_dec(x_4);
x_150 = !lean_is_exclusive(x_17);
if (x_150 == 0)
{
return x_17;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_151 = lean_ctor_get(x_17, 0);
x_152 = lean_ctor_get(x_17, 1);
lean_inc(x_152);
lean_inc(x_151);
lean_dec(x_17);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_151);
lean_ctor_set(x_153, 1, x_152);
return x_153;
}
}
}
else
{
uint8_t x_154; 
lean_dec(x_4);
x_154 = !lean_is_exclusive(x_12);
if (x_154 == 0)
{
return x_12;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_155 = lean_ctor_get(x_12, 0);
x_156 = lean_ctor_get(x_12, 1);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_12);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_155);
lean_ctor_set(x_157, 1, x_156);
return x_157;
}
}
}
default: 
{
uint8_t x_158; lean_object* x_159; 
x_158 = 79;
x_159 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_158, x_6);
if (lean_obj_tag(x_159) == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_160 = lean_ctor_get(x_159, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_159, 1);
lean_inc(x_161);
lean_dec(x_159);
x_162 = lean_unsigned_to_nat(3u);
x_163 = lean_unsigned_to_nat(8u);
x_164 = l_LeanRV64DExecutable_Functions_getPendingSet___closed__1;
x_165 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__10;
x_166 = l_LeanRV64DExecutable_Functions_bool__bits__forwards(x_2);
x_167 = l_Sail_BitVec_updateSubrange(x_164, x_160, x_165, x_165, x_166);
lean_dec(x_166);
lean_dec(x_160);
x_168 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_158, x_167, x_161);
x_169 = lean_ctor_get(x_168, 1);
lean_inc(x_169);
lean_dec(x_168);
x_170 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_158, x_169);
if (lean_obj_tag(x_170) == 0)
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; uint8_t x_180; lean_object* x_181; 
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_170, 1);
lean_inc(x_172);
lean_dec(x_170);
x_173 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__12;
x_174 = lean_unsigned_to_nat(0u);
x_175 = lean_unsigned_to_nat(63u);
x_176 = l_BitVec_setWidth(x_163, x_175, x_3);
x_177 = l_Sail_BitVec_updateSubrange(x_164, x_171, x_173, x_174, x_176);
lean_dec(x_176);
lean_dec(x_171);
x_178 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_158, x_177, x_172);
x_179 = lean_ctor_get(x_178, 1);
lean_inc(x_179);
lean_dec(x_178);
x_180 = 87;
x_181 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_180, x_179);
if (lean_obj_tag(x_181) == 0)
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_181, 1);
lean_inc(x_183);
lean_dec(x_181);
x_184 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_180, x_183);
if (lean_obj_tag(x_184) == 0)
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_185 = lean_ctor_get(x_184, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_184, 1);
lean_inc(x_186);
lean_dec(x_184);
x_187 = lean_unsigned_to_nat(64u);
x_188 = lean_unsigned_to_nat(7u);
x_189 = l_LeanRV64DExecutable_Functions___get__Mstatus__MIE(x_185);
lean_dec(x_185);
x_190 = l_Sail_BitVec_updateSubrange(x_187, x_182, x_188, x_188, x_189);
lean_dec(x_189);
lean_dec(x_182);
x_191 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_180, x_190, x_186);
x_192 = lean_ctor_get(x_191, 1);
lean_inc(x_192);
lean_dec(x_191);
x_193 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_180, x_192);
if (lean_obj_tag(x_193) == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_194 = lean_ctor_get(x_193, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_193, 1);
lean_inc(x_195);
lean_dec(x_193);
x_196 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__70;
x_197 = l_Sail_BitVec_updateSubrange(x_187, x_194, x_162, x_162, x_196);
lean_dec(x_194);
x_198 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_180, x_197, x_195);
x_199 = lean_ctor_get(x_198, 1);
lean_inc(x_199);
lean_dec(x_198);
x_200 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_180, x_199);
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_201; lean_object* x_202; uint8_t x_203; lean_object* x_204; 
x_201 = lean_ctor_get(x_200, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_200, 1);
lean_inc(x_202);
lean_dec(x_200);
x_203 = 90;
x_204 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_203, x_202);
if (lean_obj_tag(x_204) == 0)
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; uint8_t x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; uint8_t x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_205 = lean_ctor_get(x_204, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_204, 1);
lean_inc(x_206);
lean_dec(x_204);
x_207 = lean_unsigned_to_nat(12u);
x_208 = lean_unsigned_to_nat(11u);
x_209 = lean_unbox(x_205);
lean_dec(x_205);
x_210 = l_LeanRV64DExecutable_Functions_privLevel__bits__forwards(x_209);
x_211 = l_Sail_BitVec_updateSubrange(x_187, x_201, x_207, x_208, x_210);
lean_dec(x_210);
lean_dec(x_201);
x_212 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_180, x_211, x_206);
x_213 = lean_ctor_get(x_212, 1);
lean_inc(x_213);
lean_dec(x_212);
x_214 = 77;
x_215 = l_LeanRV64DExecutable_Functions_tval(x_5);
x_216 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_214, x_215, x_213);
x_217 = lean_ctor_get(x_216, 1);
lean_inc(x_217);
lean_dec(x_216);
x_218 = 78;
x_219 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_218, x_4, x_217);
x_220 = lean_ctor_get(x_219, 1);
lean_inc(x_220);
lean_dec(x_219);
x_221 = lean_box(x_1);
x_222 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_203, x_221, x_220);
x_223 = lean_ctor_get(x_222, 1);
lean_inc(x_223);
lean_dec(x_222);
x_224 = l_LeanRV64DExecutable_Functions_track__trap(x_1, x_223);
if (lean_obj_tag(x_224) == 0)
{
lean_object* x_225; lean_object* x_226; 
x_225 = lean_ctor_get(x_224, 1);
lean_inc(x_225);
lean_dec(x_224);
x_226 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_158, x_225);
if (lean_obj_tag(x_226) == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_227 = lean_ctor_get(x_226, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_226, 1);
lean_inc(x_228);
lean_dec(x_226);
x_229 = l_LeanRV64DExecutable_Functions_prepare__trap__vector(x_1, x_227, x_228);
lean_dec(x_227);
return x_229;
}
else
{
uint8_t x_230; 
x_230 = !lean_is_exclusive(x_226);
if (x_230 == 0)
{
lean_object* x_231; lean_object* x_232; 
x_231 = lean_ctor_get(x_226, 0);
lean_dec(x_231);
x_232 = lean_box(1);
lean_ctor_set(x_226, 0, x_232);
return x_226;
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_233 = lean_ctor_get(x_226, 1);
lean_inc(x_233);
lean_dec(x_226);
x_234 = lean_box(1);
x_235 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_235, 0, x_234);
lean_ctor_set(x_235, 1, x_233);
return x_235;
}
}
}
else
{
uint8_t x_236; 
x_236 = !lean_is_exclusive(x_224);
if (x_236 == 0)
{
return x_224;
}
else
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; 
x_237 = lean_ctor_get(x_224, 0);
x_238 = lean_ctor_get(x_224, 1);
lean_inc(x_238);
lean_inc(x_237);
lean_dec(x_224);
x_239 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_239, 0, x_237);
lean_ctor_set(x_239, 1, x_238);
return x_239;
}
}
}
else
{
uint8_t x_240; 
lean_dec(x_201);
lean_dec(x_4);
x_240 = !lean_is_exclusive(x_204);
if (x_240 == 0)
{
lean_object* x_241; lean_object* x_242; 
x_241 = lean_ctor_get(x_204, 0);
lean_dec(x_241);
x_242 = lean_box(1);
lean_ctor_set(x_204, 0, x_242);
return x_204;
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_243 = lean_ctor_get(x_204, 1);
lean_inc(x_243);
lean_dec(x_204);
x_244 = lean_box(1);
x_245 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_245, 0, x_244);
lean_ctor_set(x_245, 1, x_243);
return x_245;
}
}
}
else
{
uint8_t x_246; 
lean_dec(x_4);
x_246 = !lean_is_exclusive(x_200);
if (x_246 == 0)
{
lean_object* x_247; lean_object* x_248; 
x_247 = lean_ctor_get(x_200, 0);
lean_dec(x_247);
x_248 = lean_box(1);
lean_ctor_set(x_200, 0, x_248);
return x_200;
}
else
{
lean_object* x_249; lean_object* x_250; lean_object* x_251; 
x_249 = lean_ctor_get(x_200, 1);
lean_inc(x_249);
lean_dec(x_200);
x_250 = lean_box(1);
x_251 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_251, 0, x_250);
lean_ctor_set(x_251, 1, x_249);
return x_251;
}
}
}
else
{
uint8_t x_252; 
lean_dec(x_4);
x_252 = !lean_is_exclusive(x_193);
if (x_252 == 0)
{
lean_object* x_253; lean_object* x_254; 
x_253 = lean_ctor_get(x_193, 0);
lean_dec(x_253);
x_254 = lean_box(1);
lean_ctor_set(x_193, 0, x_254);
return x_193;
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_255 = lean_ctor_get(x_193, 1);
lean_inc(x_255);
lean_dec(x_193);
x_256 = lean_box(1);
x_257 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_257, 0, x_256);
lean_ctor_set(x_257, 1, x_255);
return x_257;
}
}
}
else
{
uint8_t x_258; 
lean_dec(x_182);
lean_dec(x_4);
x_258 = !lean_is_exclusive(x_184);
if (x_258 == 0)
{
lean_object* x_259; lean_object* x_260; 
x_259 = lean_ctor_get(x_184, 0);
lean_dec(x_259);
x_260 = lean_box(1);
lean_ctor_set(x_184, 0, x_260);
return x_184;
}
else
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; 
x_261 = lean_ctor_get(x_184, 1);
lean_inc(x_261);
lean_dec(x_184);
x_262 = lean_box(1);
x_263 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_263, 0, x_262);
lean_ctor_set(x_263, 1, x_261);
return x_263;
}
}
}
else
{
uint8_t x_264; 
lean_dec(x_4);
x_264 = !lean_is_exclusive(x_181);
if (x_264 == 0)
{
lean_object* x_265; lean_object* x_266; 
x_265 = lean_ctor_get(x_181, 0);
lean_dec(x_265);
x_266 = lean_box(1);
lean_ctor_set(x_181, 0, x_266);
return x_181;
}
else
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; 
x_267 = lean_ctor_get(x_181, 1);
lean_inc(x_267);
lean_dec(x_181);
x_268 = lean_box(1);
x_269 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_269, 0, x_268);
lean_ctor_set(x_269, 1, x_267);
return x_269;
}
}
}
else
{
uint8_t x_270; 
lean_dec(x_4);
x_270 = !lean_is_exclusive(x_170);
if (x_270 == 0)
{
lean_object* x_271; lean_object* x_272; 
x_271 = lean_ctor_get(x_170, 0);
lean_dec(x_271);
x_272 = lean_box(1);
lean_ctor_set(x_170, 0, x_272);
return x_170;
}
else
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; 
x_273 = lean_ctor_get(x_170, 1);
lean_inc(x_273);
lean_dec(x_170);
x_274 = lean_box(1);
x_275 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_275, 0, x_274);
lean_ctor_set(x_275, 1, x_273);
return x_275;
}
}
}
else
{
uint8_t x_276; 
lean_dec(x_4);
x_276 = !lean_is_exclusive(x_159);
if (x_276 == 0)
{
lean_object* x_277; lean_object* x_278; 
x_277 = lean_ctor_get(x_159, 0);
lean_dec(x_277);
x_278 = lean_box(1);
lean_ctor_set(x_159, 0, x_278);
return x_159;
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; 
x_279 = lean_ctor_get(x_159, 1);
lean_inc(x_279);
lean_dec(x_159);
x_280 = lean_box(1);
x_281 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_281, 0, x_280);
lean_ctor_set(x_281, 1, x_279);
return x_281;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_trap__handler(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LeanRV64DExecutable_Functions_trap__handler___redArg(x_1, x_2, x_3, x_4, x_5, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_trap__handler___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; uint8_t x_8; lean_object* x_9; 
x_7 = lean_unbox(x_1);
lean_dec(x_1);
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_LeanRV64DExecutable_Functions_trap__handler___redArg(x_7, x_8, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_trap__handler___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = l_LeanRV64DExecutable_Functions_trap__handler(x_8, x_9, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_exception__handler___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_exception__handler(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_5, 0);
x_7 = lean_ctor_get(x_5, 1);
x_8 = l_LeanRV64DExecutable_Functions_exception__delegatee(x_6, x_1, x_4);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = 0;
x_12 = l_LeanRV64DExecutable_Functions_exceptionType__to__bits(x_6);
x_13 = lean_unbox(x_9);
lean_dec(x_9);
x_14 = l_LeanRV64DExecutable_Functions_trap__handler___redArg(x_13, x_11, x_12, x_3, x_7, x_10);
lean_dec(x_12);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_3);
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
case 1:
{
uint8_t x_19; lean_object* x_20; 
lean_dec(x_3);
x_19 = 90;
x_20 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_19, x_4);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = 87;
x_23 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_22, x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_22, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_unsigned_to_nat(64u);
x_30 = lean_unsigned_to_nat(1u);
x_31 = l_LeanRV64DExecutable_Functions___get__Mstatus__SPIE(x_27);
lean_dec(x_27);
x_32 = l_Sail_BitVec_updateSubrange(x_29, x_24, x_30, x_30, x_31);
lean_dec(x_31);
lean_dec(x_24);
x_33 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_22, x_32, x_28);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_22, x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_unsigned_to_nat(5u);
x_39 = l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1;
x_40 = l_Sail_BitVec_updateSubrange(x_29, x_36, x_38, x_38, x_39);
lean_dec(x_36);
x_41 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_22, x_40, x_37);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_22, x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_73; lean_object* x_118; uint8_t x_119; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_118 = l_LeanRV64DExecutable_Functions___get__Mstatus__SPP(x_44);
lean_dec(x_44);
x_119 = lean_nat_dec_eq(x_118, x_39);
lean_dec(x_118);
if (x_119 == 0)
{
uint8_t x_120; 
x_120 = 0;
x_73 = x_120;
goto block_117;
}
else
{
uint8_t x_121; 
x_121 = 1;
x_73 = x_121;
goto block_117;
}
block_72:
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
x_48 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_22, x_47);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
lean_dec(x_48);
x_50 = l_LeanRV64DExecutable_Functions_track__trap___closed__0;
x_51 = l_LeanRV64DExecutable_Functions_csr__name__write__callback___redArg(x_50, x_49);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_19, x_52);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; lean_object* x_59; 
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_box(0);
x_56 = l_LeanRV64DExecutable_Functions_exception__handler___lam__0(x_55, x_54);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
lean_dec(x_56);
x_58 = 1;
x_59 = l_LeanRV64DExecutable_Functions_get__xepc(x_58, x_57);
return x_59;
}
else
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_53);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_53, 0);
lean_dec(x_61);
x_62 = lean_box(1);
lean_ctor_set(x_53, 0, x_62);
return x_53;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_53, 1);
lean_inc(x_63);
lean_dec(x_53);
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
x_66 = !lean_is_exclusive(x_48);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_48, 0);
lean_dec(x_67);
x_68 = lean_box(1);
lean_ctor_set(x_48, 0, x_68);
return x_48;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_48, 1);
lean_inc(x_69);
lean_dec(x_48);
x_70 = lean_box(1);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
return x_71;
}
}
}
block_117:
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_74 = lean_box(x_73);
x_75 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_19, x_74, x_45);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_22, x_76);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = lean_unsigned_to_nat(8u);
x_81 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__70;
x_82 = l_Sail_BitVec_updateSubrange(x_29, x_78, x_80, x_80, x_81);
lean_dec(x_78);
x_83 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_22, x_82, x_79);
x_84 = lean_ctor_get(x_83, 1);
lean_inc(x_84);
lean_dec(x_83);
x_85 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_19, x_84);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_22, x_87);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; uint8_t x_91; uint8_t x_92; uint8_t x_93; 
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
lean_dec(x_88);
x_91 = 2;
x_92 = lean_unbox(x_86);
lean_dec(x_86);
x_93 = l_beqPrivilege____x40_LeanRV64DExecutable_Defs___hyg_4812_(x_92, x_91);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_unsigned_to_nat(17u);
x_95 = l_Sail_BitVec_updateSubrange(x_29, x_89, x_94, x_94, x_81);
lean_dec(x_89);
x_96 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_22, x_95, x_90);
x_46 = x_96;
goto block_72;
}
else
{
lean_object* x_97; lean_object* x_98; 
lean_dec(x_89);
x_97 = lean_box(0);
x_98 = l_LeanRV64DExecutable_Functions_exception__handler___lam__0(x_97, x_90);
x_46 = x_98;
goto block_72;
}
}
else
{
uint8_t x_99; 
lean_dec(x_86);
x_99 = !lean_is_exclusive(x_88);
if (x_99 == 0)
{
lean_object* x_100; lean_object* x_101; 
x_100 = lean_ctor_get(x_88, 0);
lean_dec(x_100);
x_101 = lean_box(1);
lean_ctor_set(x_88, 0, x_101);
return x_88;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_88, 1);
lean_inc(x_102);
lean_dec(x_88);
x_103 = lean_box(1);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_102);
return x_104;
}
}
}
else
{
uint8_t x_105; 
x_105 = !lean_is_exclusive(x_85);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; 
x_106 = lean_ctor_get(x_85, 0);
lean_dec(x_106);
x_107 = lean_box(1);
lean_ctor_set(x_85, 0, x_107);
return x_85;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_85, 1);
lean_inc(x_108);
lean_dec(x_85);
x_109 = lean_box(1);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_108);
return x_110;
}
}
}
else
{
uint8_t x_111; 
x_111 = !lean_is_exclusive(x_77);
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; 
x_112 = lean_ctor_get(x_77, 0);
lean_dec(x_112);
x_113 = lean_box(1);
lean_ctor_set(x_77, 0, x_113);
return x_77;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_77, 1);
lean_inc(x_114);
lean_dec(x_77);
x_115 = lean_box(1);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_114);
return x_116;
}
}
}
}
else
{
uint8_t x_122; 
x_122 = !lean_is_exclusive(x_43);
if (x_122 == 0)
{
lean_object* x_123; lean_object* x_124; 
x_123 = lean_ctor_get(x_43, 0);
lean_dec(x_123);
x_124 = lean_box(1);
lean_ctor_set(x_43, 0, x_124);
return x_43;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_43, 1);
lean_inc(x_125);
lean_dec(x_43);
x_126 = lean_box(1);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_125);
return x_127;
}
}
}
else
{
uint8_t x_128; 
x_128 = !lean_is_exclusive(x_35);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
x_129 = lean_ctor_get(x_35, 0);
lean_dec(x_129);
x_130 = lean_box(1);
lean_ctor_set(x_35, 0, x_130);
return x_35;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_131 = lean_ctor_get(x_35, 1);
lean_inc(x_131);
lean_dec(x_35);
x_132 = lean_box(1);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_131);
return x_133;
}
}
}
else
{
uint8_t x_134; 
lean_dec(x_24);
x_134 = !lean_is_exclusive(x_26);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; 
x_135 = lean_ctor_get(x_26, 0);
lean_dec(x_135);
x_136 = lean_box(1);
lean_ctor_set(x_26, 0, x_136);
return x_26;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_137 = lean_ctor_get(x_26, 1);
lean_inc(x_137);
lean_dec(x_26);
x_138 = lean_box(1);
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_137);
return x_139;
}
}
}
else
{
uint8_t x_140; 
x_140 = !lean_is_exclusive(x_23);
if (x_140 == 0)
{
lean_object* x_141; lean_object* x_142; 
x_141 = lean_ctor_get(x_23, 0);
lean_dec(x_141);
x_142 = lean_box(1);
lean_ctor_set(x_23, 0, x_142);
return x_23;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_143 = lean_ctor_get(x_23, 1);
lean_inc(x_143);
lean_dec(x_23);
x_144 = lean_box(1);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_143);
return x_145;
}
}
}
else
{
uint8_t x_146; 
x_146 = !lean_is_exclusive(x_20);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; 
x_147 = lean_ctor_get(x_20, 0);
lean_dec(x_147);
x_148 = lean_box(1);
lean_ctor_set(x_20, 0, x_148);
return x_20;
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_149 = lean_ctor_get(x_20, 1);
lean_inc(x_149);
lean_dec(x_20);
x_150 = lean_box(1);
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_149);
return x_151;
}
}
}
default: 
{
uint8_t x_152; lean_object* x_153; 
lean_dec(x_3);
x_152 = 90;
x_153 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_152, x_4);
if (lean_obj_tag(x_153) == 0)
{
lean_object* x_154; uint8_t x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_153, 1);
lean_inc(x_154);
lean_dec(x_153);
x_155 = 87;
x_156 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_155, x_154);
if (lean_obj_tag(x_156) == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_156, 1);
lean_inc(x_158);
lean_dec(x_156);
x_159 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_155, x_158);
if (lean_obj_tag(x_159) == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_160 = lean_ctor_get(x_159, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_159, 1);
lean_inc(x_161);
lean_dec(x_159);
x_162 = lean_unsigned_to_nat(64u);
x_163 = lean_unsigned_to_nat(3u);
x_164 = l_LeanRV64DExecutable_Functions___get__Mstatus__MPIE(x_160);
lean_dec(x_160);
x_165 = l_Sail_BitVec_updateSubrange(x_162, x_157, x_163, x_163, x_164);
lean_dec(x_164);
lean_dec(x_157);
x_166 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_155, x_165, x_161);
x_167 = lean_ctor_get(x_166, 1);
lean_inc(x_167);
lean_dec(x_166);
x_168 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_155, x_167);
if (lean_obj_tag(x_168) == 0)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_169 = lean_ctor_get(x_168, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_168, 1);
lean_inc(x_170);
lean_dec(x_168);
x_171 = lean_unsigned_to_nat(7u);
x_172 = l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1;
x_173 = l_Sail_BitVec_updateSubrange(x_162, x_169, x_171, x_171, x_172);
lean_dec(x_169);
x_174 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_155, x_173, x_170);
x_175 = lean_ctor_get(x_174, 1);
lean_inc(x_175);
lean_dec(x_174);
x_176 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_155, x_175);
if (lean_obj_tag(x_176) == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_176, 1);
lean_inc(x_178);
lean_dec(x_176);
x_179 = l_LeanRV64DExecutable_Functions___get__Mstatus__MPP(x_177);
lean_dec(x_177);
x_180 = l_LeanRV64DExecutable_Functions_privLevel__bits__backwards(x_179, x_178);
lean_dec(x_179);
if (lean_obj_tag(x_180) == 0)
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_181 = lean_ctor_get(x_180, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_180, 1);
lean_inc(x_182);
lean_dec(x_180);
x_183 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_152, x_181, x_182);
x_184 = lean_ctor_get(x_183, 1);
lean_inc(x_184);
lean_dec(x_183);
x_185 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_155, x_184);
if (lean_obj_tag(x_185) == 0)
{
lean_object* x_186; lean_object* x_187; uint8_t x_188; lean_object* x_189; 
x_186 = lean_ctor_get(x_185, 0);
lean_inc(x_186);
x_187 = lean_ctor_get(x_185, 1);
lean_inc(x_187);
lean_dec(x_185);
x_188 = 7;
x_189 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_188, x_187);
if (lean_obj_tag(x_189) == 0)
{
lean_object* x_190; lean_object* x_191; uint8_t x_192; lean_object* x_193; uint8_t x_219; uint8_t x_254; 
x_190 = lean_ctor_get(x_189, 0);
lean_inc(x_190);
x_191 = lean_ctor_get(x_189, 1);
lean_inc(x_191);
lean_dec(x_189);
x_254 = lean_unbox(x_190);
lean_dec(x_190);
if (x_254 == 0)
{
uint8_t x_255; 
x_255 = 2;
x_219 = x_255;
goto block_253;
}
else
{
uint8_t x_256; 
x_256 = 0;
x_219 = x_256;
goto block_253;
}
block_218:
{
lean_object* x_194; lean_object* x_195; 
x_194 = lean_ctor_get(x_193, 1);
lean_inc(x_194);
lean_dec(x_193);
x_195 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_155, x_194);
if (lean_obj_tag(x_195) == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_196 = lean_ctor_get(x_195, 1);
lean_inc(x_196);
lean_dec(x_195);
x_197 = l_LeanRV64DExecutable_Functions_track__trap___closed__0;
x_198 = l_LeanRV64DExecutable_Functions_csr__name__write__callback___redArg(x_197, x_196);
x_199 = lean_ctor_get(x_198, 1);
lean_inc(x_199);
lean_dec(x_198);
x_200 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_152, x_199);
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_201 = lean_ctor_get(x_200, 1);
lean_inc(x_201);
lean_dec(x_200);
x_202 = lean_box(0);
x_203 = l_LeanRV64DExecutable_Functions_exception__handler___lam__0(x_202, x_201);
x_204 = lean_ctor_get(x_203, 1);
lean_inc(x_204);
lean_dec(x_203);
x_205 = l_LeanRV64DExecutable_Functions_get__xepc(x_192, x_204);
return x_205;
}
else
{
uint8_t x_206; 
x_206 = !lean_is_exclusive(x_200);
if (x_206 == 0)
{
lean_object* x_207; lean_object* x_208; 
x_207 = lean_ctor_get(x_200, 0);
lean_dec(x_207);
x_208 = lean_box(1);
lean_ctor_set(x_200, 0, x_208);
return x_200;
}
else
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_209 = lean_ctor_get(x_200, 1);
lean_inc(x_209);
lean_dec(x_200);
x_210 = lean_box(1);
x_211 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_211, 0, x_210);
lean_ctor_set(x_211, 1, x_209);
return x_211;
}
}
}
else
{
uint8_t x_212; 
x_212 = !lean_is_exclusive(x_195);
if (x_212 == 0)
{
lean_object* x_213; lean_object* x_214; 
x_213 = lean_ctor_get(x_195, 0);
lean_dec(x_213);
x_214 = lean_box(1);
lean_ctor_set(x_195, 0, x_214);
return x_195;
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; 
x_215 = lean_ctor_get(x_195, 1);
lean_inc(x_215);
lean_dec(x_195);
x_216 = lean_box(1);
x_217 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_217, 0, x_216);
lean_ctor_set(x_217, 1, x_215);
return x_217;
}
}
}
block_253:
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; 
x_220 = lean_unsigned_to_nat(12u);
x_221 = lean_unsigned_to_nat(11u);
x_222 = l_LeanRV64DExecutable_Functions_privLevel__bits__forwards(x_219);
x_223 = l_Sail_BitVec_updateSubrange(x_162, x_186, x_220, x_221, x_222);
lean_dec(x_222);
lean_dec(x_186);
x_224 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_155, x_223, x_191);
x_225 = lean_ctor_get(x_224, 1);
lean_inc(x_225);
lean_dec(x_224);
x_226 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_152, x_225);
if (lean_obj_tag(x_226) == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_227 = lean_ctor_get(x_226, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_226, 1);
lean_inc(x_228);
lean_dec(x_226);
x_229 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_155, x_228);
if (lean_obj_tag(x_229) == 0)
{
lean_object* x_230; lean_object* x_231; uint8_t x_232; uint8_t x_233; uint8_t x_234; 
x_230 = lean_ctor_get(x_229, 0);
lean_inc(x_230);
x_231 = lean_ctor_get(x_229, 1);
lean_inc(x_231);
lean_dec(x_229);
x_232 = 2;
x_233 = lean_unbox(x_227);
lean_dec(x_227);
x_234 = l_beqPrivilege____x40_LeanRV64DExecutable_Defs___hyg_4812_(x_233, x_232);
if (x_234 == 0)
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_235 = lean_unsigned_to_nat(17u);
x_236 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__70;
x_237 = l_Sail_BitVec_updateSubrange(x_162, x_230, x_235, x_235, x_236);
lean_dec(x_230);
x_238 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_155, x_237, x_231);
x_192 = x_232;
x_193 = x_238;
goto block_218;
}
else
{
lean_object* x_239; lean_object* x_240; 
lean_dec(x_230);
x_239 = lean_box(0);
x_240 = l_LeanRV64DExecutable_Functions_exception__handler___lam__0(x_239, x_231);
x_192 = x_232;
x_193 = x_240;
goto block_218;
}
}
else
{
uint8_t x_241; 
lean_dec(x_227);
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
uint8_t x_247; 
x_247 = !lean_is_exclusive(x_226);
if (x_247 == 0)
{
lean_object* x_248; lean_object* x_249; 
x_248 = lean_ctor_get(x_226, 0);
lean_dec(x_248);
x_249 = lean_box(1);
lean_ctor_set(x_226, 0, x_249);
return x_226;
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; 
x_250 = lean_ctor_get(x_226, 1);
lean_inc(x_250);
lean_dec(x_226);
x_251 = lean_box(1);
x_252 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_252, 0, x_251);
lean_ctor_set(x_252, 1, x_250);
return x_252;
}
}
}
}
else
{
uint8_t x_257; 
lean_dec(x_186);
x_257 = !lean_is_exclusive(x_189);
if (x_257 == 0)
{
return x_189;
}
else
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; 
x_258 = lean_ctor_get(x_189, 0);
x_259 = lean_ctor_get(x_189, 1);
lean_inc(x_259);
lean_inc(x_258);
lean_dec(x_189);
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
x_261 = !lean_is_exclusive(x_185);
if (x_261 == 0)
{
lean_object* x_262; lean_object* x_263; 
x_262 = lean_ctor_get(x_185, 0);
lean_dec(x_262);
x_263 = lean_box(1);
lean_ctor_set(x_185, 0, x_263);
return x_185;
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_264 = lean_ctor_get(x_185, 1);
lean_inc(x_264);
lean_dec(x_185);
x_265 = lean_box(1);
x_266 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_266, 0, x_265);
lean_ctor_set(x_266, 1, x_264);
return x_266;
}
}
}
else
{
uint8_t x_267; 
x_267 = !lean_is_exclusive(x_180);
if (x_267 == 0)
{
return x_180;
}
else
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; 
x_268 = lean_ctor_get(x_180, 0);
x_269 = lean_ctor_get(x_180, 1);
lean_inc(x_269);
lean_inc(x_268);
lean_dec(x_180);
x_270 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_270, 0, x_268);
lean_ctor_set(x_270, 1, x_269);
return x_270;
}
}
}
else
{
uint8_t x_271; 
x_271 = !lean_is_exclusive(x_176);
if (x_271 == 0)
{
lean_object* x_272; lean_object* x_273; 
x_272 = lean_ctor_get(x_176, 0);
lean_dec(x_272);
x_273 = lean_box(1);
lean_ctor_set(x_176, 0, x_273);
return x_176;
}
else
{
lean_object* x_274; lean_object* x_275; lean_object* x_276; 
x_274 = lean_ctor_get(x_176, 1);
lean_inc(x_274);
lean_dec(x_176);
x_275 = lean_box(1);
x_276 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_276, 0, x_275);
lean_ctor_set(x_276, 1, x_274);
return x_276;
}
}
}
else
{
uint8_t x_277; 
x_277 = !lean_is_exclusive(x_168);
if (x_277 == 0)
{
lean_object* x_278; lean_object* x_279; 
x_278 = lean_ctor_get(x_168, 0);
lean_dec(x_278);
x_279 = lean_box(1);
lean_ctor_set(x_168, 0, x_279);
return x_168;
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_280 = lean_ctor_get(x_168, 1);
lean_inc(x_280);
lean_dec(x_168);
x_281 = lean_box(1);
x_282 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_282, 0, x_281);
lean_ctor_set(x_282, 1, x_280);
return x_282;
}
}
}
else
{
uint8_t x_283; 
lean_dec(x_157);
x_283 = !lean_is_exclusive(x_159);
if (x_283 == 0)
{
lean_object* x_284; lean_object* x_285; 
x_284 = lean_ctor_get(x_159, 0);
lean_dec(x_284);
x_285 = lean_box(1);
lean_ctor_set(x_159, 0, x_285);
return x_159;
}
else
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; 
x_286 = lean_ctor_get(x_159, 1);
lean_inc(x_286);
lean_dec(x_159);
x_287 = lean_box(1);
x_288 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_288, 0, x_287);
lean_ctor_set(x_288, 1, x_286);
return x_288;
}
}
}
else
{
uint8_t x_289; 
x_289 = !lean_is_exclusive(x_156);
if (x_289 == 0)
{
lean_object* x_290; lean_object* x_291; 
x_290 = lean_ctor_get(x_156, 0);
lean_dec(x_290);
x_291 = lean_box(1);
lean_ctor_set(x_156, 0, x_291);
return x_156;
}
else
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; 
x_292 = lean_ctor_get(x_156, 1);
lean_inc(x_292);
lean_dec(x_156);
x_293 = lean_box(1);
x_294 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_294, 0, x_293);
lean_ctor_set(x_294, 1, x_292);
return x_294;
}
}
}
else
{
uint8_t x_295; 
x_295 = !lean_is_exclusive(x_153);
if (x_295 == 0)
{
lean_object* x_296; lean_object* x_297; 
x_296 = lean_ctor_get(x_153, 0);
lean_dec(x_296);
x_297 = lean_box(1);
lean_ctor_set(x_153, 0, x_297);
return x_153;
}
else
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; 
x_298 = lean_ctor_get(x_153, 1);
lean_inc(x_298);
lean_dec(x_153);
x_299 = lean_box(1);
x_300 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_300, 0, x_299);
lean_ctor_set(x_300, 1, x_298);
return x_300;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_exception__handler___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_exception__handler___lam__0(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_exception__handler___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_LeanRV64DExecutable_Functions_exception__handler(x_5, x_2, x_3, x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_handle__mem__exception(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = 90;
x_5 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_4, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = 123;
x_9 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_8, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_1);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_12);
lean_ctor_set(x_14, 2, x_13);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_unbox(x_6);
lean_dec(x_6);
x_17 = l_LeanRV64DExecutable_Functions_exception__handler(x_16, x_15, x_10, x_11);
lean_dec(x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_LeanRV64DExecutable_Functions_set__next__pc(x_18, x_19);
return x_20;
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
return x_17;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_17, 0);
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_17);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
uint8_t x_25; 
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_9);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_9, 0);
lean_dec(x_26);
x_27 = lean_box(1);
lean_ctor_set(x_9, 0, x_27);
return x_9;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_9, 1);
lean_inc(x_28);
lean_dec(x_9);
x_29 = lean_box(1);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_5);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_5, 0);
lean_dec(x_32);
x_33 = lean_box(1);
lean_ctor_set(x_5, 0, x_33);
return x_5;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_5, 1);
lean_inc(x_34);
lean_dec(x_5);
x_35 = lean_box(1);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_handle__exception(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = 90;
x_4 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = 123;
x_8 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_7, x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_box(0);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_11);
lean_ctor_set(x_13, 2, x_12);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_unbox(x_5);
lean_dec(x_5);
x_16 = l_LeanRV64DExecutable_Functions_exception__handler(x_15, x_14, x_9, x_10);
lean_dec(x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_LeanRV64DExecutable_Functions_set__next__pc(x_17, x_18);
return x_19;
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
return x_16;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_16, 0);
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_16);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_5);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_8);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_8, 0);
lean_dec(x_25);
x_26 = lean_box(1);
lean_ctor_set(x_8, 0, x_26);
return x_8;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_8, 1);
lean_inc(x_27);
lean_dec(x_8);
x_28 = lean_box(1);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_4);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_4, 0);
lean_dec(x_31);
x_32 = lean_box(1);
lean_ctor_set(x_4, 0, x_32);
return x_4;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_4, 1);
lean_inc(x_33);
lean_dec(x_4);
x_34 = lean_box(1);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_handle__interrupt(uint8_t x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = 123;
x_5 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_4, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = 1;
x_9 = l_LeanRV64DExecutable_Functions_interruptType__to__bits(x_1);
x_10 = lean_box(0);
x_11 = l_LeanRV64DExecutable_Functions_trap__handler___redArg(x_2, x_8, x_9, x_6, x_10, x_7);
lean_dec(x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_LeanRV64DExecutable_Functions_set__next__pc(x_12, x_13);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_5);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_5, 0);
lean_dec(x_20);
x_21 = lean_box(1);
lean_ctor_set(x_5, 0, x_21);
return x_5;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_5, 1);
lean_inc(x_22);
lean_dec(x_5);
x_23 = lean_box(1);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_handle__interrupt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_LeanRV64DExecutable_Functions_handle__interrupt(x_4, x_5, x_3);
return x_6;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__0() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 1;
x_2 = l_LeanRV64DExecutable_Functions_hartSupports(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__0;
x_2 = l_LeanRV64DExecutable_Functions_bool__bits__forwards(x_1);
return x_2;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__2() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 31;
x_2 = l_LeanRV64DExecutable_Functions_hartSupports(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__2;
x_2 = l_LeanRV64DExecutable_Functions_bool__bits__forwards(x_1);
return x_2;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__4() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 4;
x_2 = l_LeanRV64DExecutable_Functions_hartSupports(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__5() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__4;
x_2 = l_LeanRV64DExecutable_Functions_bool__bits__forwards(x_1);
return x_2;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__6() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 0;
x_2 = l_LeanRV64DExecutable_Functions_hartSupports(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__7() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__6;
x_2 = l_LeanRV64DExecutable_Functions_bool__bits__forwards(x_1);
return x_2;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__8() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 7;
x_2 = l_LeanRV64DExecutable_Functions_hartSupports(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__9() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__8;
x_2 = l_LeanRV64DExecutable_Functions_bool__bits__forwards(x_1);
return x_2;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__10() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 6;
x_2 = l_LeanRV64DExecutable_Functions_hartSupports(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__11() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__10;
x_2 = l_LeanRV64DExecutable_Functions_bool__bits__forwards(x_1);
return x_2;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__12() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 5;
x_2 = l_LeanRV64DExecutable_Functions_hartSupports(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__13() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__12;
x_2 = l_LeanRV64DExecutable_Functions_bool__bits__forwards(x_1);
return x_2;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__14() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 2;
x_2 = l_LeanRV64DExecutable_Functions_hartSupports(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__15() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__14;
x_2 = l_LeanRV64DExecutable_Functions_bool__bits__forwards(x_1);
return x_2;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__16() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 3;
x_2 = l_LeanRV64DExecutable_Functions_hartSupports(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__17() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__16;
x_2 = l_LeanRV64DExecutable_Functions_bool__bits__forwards(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("misa", 4, 4);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(353u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("F and Zfinx cannot both be enabled!", 35, 35);
return x_1;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__21() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 24;
x_2 = l_LeanRV64DExecutable_Functions_hartSupports(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__misa___redArg(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = 88;
x_3 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_unsigned_to_nat(8u);
x_7 = l_LeanRV64DExecutable_Functions_getPendingSet___closed__1;
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__1;
x_10 = l_Sail_BitVec_updateSubrange(x_7, x_4, x_8, x_8, x_9);
lean_dec(x_4);
x_11 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_2, x_10, x_5);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_unsigned_to_nat(2u);
x_17 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__3;
x_18 = l_Sail_BitVec_updateSubrange(x_7, x_14, x_16, x_16, x_17);
lean_dec(x_14);
x_19 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_2, x_18, x_15);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_unsigned_to_nat(1u);
x_25 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__5;
x_26 = l_Sail_BitVec_updateSubrange(x_7, x_22, x_24, x_24, x_25);
lean_dec(x_22);
x_27 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_2, x_26, x_23);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1;
x_33 = l_Sail_BitVec_updateSubrange(x_7, x_30, x_6, x_6, x_32);
lean_dec(x_30);
x_34 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_2, x_33, x_31);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_35);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_unsigned_to_nat(12u);
x_40 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__7;
x_41 = l_Sail_BitVec_updateSubrange(x_7, x_37, x_39, x_39, x_40);
lean_dec(x_37);
x_42 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_2, x_41, x_38);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_unsigned_to_nat(20u);
x_48 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__9;
x_49 = l_Sail_BitVec_updateSubrange(x_7, x_45, x_47, x_47, x_48);
lean_dec(x_45);
x_50 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_2, x_49, x_46);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_51);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_unsigned_to_nat(18u);
x_56 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__11;
x_57 = l_Sail_BitVec_updateSubrange(x_7, x_53, x_55, x_55, x_56);
lean_dec(x_53);
x_58 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_2, x_57, x_54);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_60 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_59);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; uint8_t x_70; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = lean_unsigned_to_nat(21u);
x_64 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__13;
x_65 = l_Sail_BitVec_updateSubrange(x_7, x_61, x_63, x_63, x_64);
lean_dec(x_61);
x_66 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_2, x_65, x_62);
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
lean_dec(x_66);
x_68 = lean_unsigned_to_nat(3u);
x_69 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__14;
if (x_69 == 0)
{
x_70 = x_69;
goto block_112;
}
else
{
uint8_t x_113; 
x_113 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__21;
x_70 = x_113;
goto block_112;
}
block_112:
{
if (x_70 == 0)
{
lean_object* x_71; 
x_71 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_67);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_74 = lean_unsigned_to_nat(5u);
x_75 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__15;
x_76 = l_Sail_BitVec_updateSubrange(x_7, x_72, x_74, x_74, x_75);
lean_dec(x_72);
x_77 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_2, x_76, x_73);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
lean_dec(x_77);
x_79 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_78);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__17;
x_83 = l_Sail_BitVec_updateSubrange(x_7, x_80, x_68, x_68, x_82);
lean_dec(x_80);
x_84 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_2, x_83, x_81);
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
lean_dec(x_84);
x_86 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_85);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
lean_dec(x_86);
x_88 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__18;
x_89 = l_LeanRV64DExecutable_Functions_csr__name__write__callback___redArg(x_88, x_87);
return x_89;
}
else
{
uint8_t x_90; 
x_90 = !lean_is_exclusive(x_86);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_86, 0);
lean_dec(x_91);
x_92 = lean_box(1);
lean_ctor_set(x_86, 0, x_92);
return x_86;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_86, 1);
lean_inc(x_93);
lean_dec(x_86);
x_94 = lean_box(1);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_93);
return x_95;
}
}
}
else
{
uint8_t x_96; 
x_96 = !lean_is_exclusive(x_79);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_79, 0);
lean_dec(x_97);
x_98 = lean_box(1);
lean_ctor_set(x_79, 0, x_98);
return x_79;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_79, 1);
lean_inc(x_99);
lean_dec(x_79);
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
uint8_t x_102; 
x_102 = !lean_is_exclusive(x_71);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; 
x_103 = lean_ctor_get(x_71, 0);
lean_dec(x_103);
x_104 = lean_box(1);
lean_ctor_set(x_71, 0, x_104);
return x_71;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_71, 1);
lean_inc(x_105);
lean_dec(x_71);
x_106 = lean_box(1);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_105);
return x_107;
}
}
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_108 = l_LeanRV64DExecutable_Functions_track__trap___closed__1;
x_109 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__19;
x_110 = l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__20;
x_111 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_108, x_109, x_110, x_67);
return x_111;
}
}
}
else
{
uint8_t x_114; 
x_114 = !lean_is_exclusive(x_60);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; 
x_115 = lean_ctor_get(x_60, 0);
lean_dec(x_115);
x_116 = lean_box(1);
lean_ctor_set(x_60, 0, x_116);
return x_60;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_60, 1);
lean_inc(x_117);
lean_dec(x_60);
x_118 = lean_box(1);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_117);
return x_119;
}
}
}
else
{
uint8_t x_120; 
x_120 = !lean_is_exclusive(x_52);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; 
x_121 = lean_ctor_get(x_52, 0);
lean_dec(x_121);
x_122 = lean_box(1);
lean_ctor_set(x_52, 0, x_122);
return x_52;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_52, 1);
lean_inc(x_123);
lean_dec(x_52);
x_124 = lean_box(1);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_123);
return x_125;
}
}
}
else
{
uint8_t x_126; 
x_126 = !lean_is_exclusive(x_44);
if (x_126 == 0)
{
lean_object* x_127; lean_object* x_128; 
x_127 = lean_ctor_get(x_44, 0);
lean_dec(x_127);
x_128 = lean_box(1);
lean_ctor_set(x_44, 0, x_128);
return x_44;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_44, 1);
lean_inc(x_129);
lean_dec(x_44);
x_130 = lean_box(1);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_129);
return x_131;
}
}
}
else
{
uint8_t x_132; 
x_132 = !lean_is_exclusive(x_36);
if (x_132 == 0)
{
lean_object* x_133; lean_object* x_134; 
x_133 = lean_ctor_get(x_36, 0);
lean_dec(x_133);
x_134 = lean_box(1);
lean_ctor_set(x_36, 0, x_134);
return x_36;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_36, 1);
lean_inc(x_135);
lean_dec(x_36);
x_136 = lean_box(1);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_135);
return x_137;
}
}
}
else
{
uint8_t x_138; 
x_138 = !lean_is_exclusive(x_29);
if (x_138 == 0)
{
lean_object* x_139; lean_object* x_140; 
x_139 = lean_ctor_get(x_29, 0);
lean_dec(x_139);
x_140 = lean_box(1);
lean_ctor_set(x_29, 0, x_140);
return x_29;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_141 = lean_ctor_get(x_29, 1);
lean_inc(x_141);
lean_dec(x_29);
x_142 = lean_box(1);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_141);
return x_143;
}
}
}
else
{
uint8_t x_144; 
x_144 = !lean_is_exclusive(x_21);
if (x_144 == 0)
{
lean_object* x_145; lean_object* x_146; 
x_145 = lean_ctor_get(x_21, 0);
lean_dec(x_145);
x_146 = lean_box(1);
lean_ctor_set(x_21, 0, x_146);
return x_21;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_147 = lean_ctor_get(x_21, 1);
lean_inc(x_147);
lean_dec(x_21);
x_148 = lean_box(1);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_147);
return x_149;
}
}
}
else
{
uint8_t x_150; 
x_150 = !lean_is_exclusive(x_13);
if (x_150 == 0)
{
lean_object* x_151; lean_object* x_152; 
x_151 = lean_ctor_get(x_13, 0);
lean_dec(x_151);
x_152 = lean_box(1);
lean_ctor_set(x_13, 0, x_152);
return x_13;
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_153 = lean_ctor_get(x_13, 1);
lean_inc(x_153);
lean_dec(x_13);
x_154 = lean_box(1);
x_155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_153);
return x_155;
}
}
}
else
{
uint8_t x_156; 
x_156 = !lean_is_exclusive(x_3);
if (x_156 == 0)
{
lean_object* x_157; lean_object* x_158; 
x_157 = lean_ctor_get(x_3, 0);
lean_dec(x_157);
x_158 = lean_box(1);
lean_ctor_set(x_3, 0, x_158);
return x_3;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = lean_ctor_get(x_3, 1);
lean_inc(x_159);
lean_dec(x_3);
x_160 = lean_box(1);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_160);
lean_ctor_set(x_161, 1, x_159);
return x_161;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__misa(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_reset__misa___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__misa___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_reset__misa(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_reset__sys___redArg___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(3u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__sys___redArg(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_2 = 90;
x_3 = 2;
x_4 = lean_box(x_3);
x_5 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_2, x_4, x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = 87;
x_8 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_7, x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_unsigned_to_nat(64u);
x_12 = lean_unsigned_to_nat(3u);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__70;
x_16 = l_Sail_BitVec_updateSubrange(x_11, x_9, x_12, x_12, x_15);
lean_dec(x_9);
x_17 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_7, x_16, x_10);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_7, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_unsigned_to_nat(17u);
x_23 = l_Sail_BitVec_updateSubrange(x_11, x_20, x_22, x_22, x_15);
lean_dec(x_20);
x_24 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_7, x_23, x_21);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_7, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_LeanRV64DExecutable_Functions_track__trap___closed__0;
x_29 = l_LeanRV64DExecutable_Functions_csr__name__write__callback___redArg(x_28, x_27);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = l_LeanRV64DExecutable_Functions_reset__misa___redArg(x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = l_cancel__reservation___redArg(x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = 79;
x_36 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_35, x_14, x_34);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_35, x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = l_LeanRV64DExecutable_Functions_track__trap___closed__7;
x_41 = l_LeanRV64DExecutable_Functions_csr__name__write__callback___redArg(x_40, x_39);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = l_LeanRV64DExecutable_Functions_reset__pmp___redArg(x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; lean_object* x_52; 
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = 57;
x_46 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_45, x_14, x_44);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
x_48 = 56;
x_49 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_48, x_14, x_47);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = 20;
x_52 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_51, x_50);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_unsigned_to_nat(2u);
x_56 = l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__69;
x_57 = l_Sail_BitVec_updateSubrange(x_12, x_53, x_55, x_13, x_56);
lean_dec(x_53);
x_58 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_51, x_57, x_54);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_60 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_51, x_59);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; lean_object* x_67; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = l_Sail_BitVec_updateSubrange(x_12, x_61, x_14, x_14, x_15);
lean_dec(x_61);
x_64 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_51, x_63, x_62);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = 55;
x_67 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_66, x_65);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_unsigned_to_nat(8u);
x_71 = l_LeanRV64DExecutable_Functions_getPendingSet___closed__1;
x_72 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__10;
x_73 = l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1;
x_74 = l_Sail_BitVec_updateSubrange(x_71, x_68, x_72, x_72, x_73);
lean_dec(x_68);
x_75 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_66, x_74, x_69);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_66, x_76);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__12;
x_81 = l_Sail_BitVec_updateSubrange(x_71, x_78, x_80, x_70, x_14);
lean_dec(x_78);
x_82 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_66, x_81, x_79);
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
lean_dec(x_82);
x_84 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_66, x_83);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = lean_unsigned_to_nat(7u);
x_88 = l_Sail_BitVec_updateSubrange(x_71, x_85, x_87, x_87, x_15);
lean_dec(x_85);
x_89 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_66, x_88, x_86);
x_90 = lean_ctor_get(x_89, 1);
lean_inc(x_90);
lean_dec(x_89);
x_91 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_66, x_90);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = lean_unsigned_to_nat(6u);
x_95 = l_Sail_BitVec_updateSubrange(x_71, x_92, x_94, x_94, x_15);
lean_dec(x_92);
x_96 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_66, x_95, x_93);
x_97 = lean_ctor_get(x_96, 1);
lean_inc(x_97);
lean_dec(x_96);
x_98 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_66, x_97);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
x_101 = lean_unsigned_to_nat(5u);
x_102 = l_LeanRV64DExecutable_Functions_reset__sys___redArg___closed__0;
x_103 = l_Sail_BitVec_updateSubrange(x_71, x_99, x_101, x_12, x_102);
lean_dec(x_99);
x_104 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_66, x_103, x_100);
x_105 = lean_ctor_get(x_104, 1);
lean_inc(x_105);
lean_dec(x_104);
x_106 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_66, x_105);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
lean_dec(x_106);
x_109 = l_Sail_BitVec_updateSubrange(x_71, x_107, x_55, x_14, x_102);
lean_dec(x_107);
x_110 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_66, x_109, x_108);
return x_110;
}
else
{
uint8_t x_111; 
x_111 = !lean_is_exclusive(x_106);
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; 
x_112 = lean_ctor_get(x_106, 0);
lean_dec(x_112);
x_113 = lean_box(1);
lean_ctor_set(x_106, 0, x_113);
return x_106;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_106, 1);
lean_inc(x_114);
lean_dec(x_106);
x_115 = lean_box(1);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_114);
return x_116;
}
}
}
else
{
uint8_t x_117; 
x_117 = !lean_is_exclusive(x_98);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; 
x_118 = lean_ctor_get(x_98, 0);
lean_dec(x_118);
x_119 = lean_box(1);
lean_ctor_set(x_98, 0, x_119);
return x_98;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = lean_ctor_get(x_98, 1);
lean_inc(x_120);
lean_dec(x_98);
x_121 = lean_box(1);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_120);
return x_122;
}
}
}
else
{
uint8_t x_123; 
x_123 = !lean_is_exclusive(x_91);
if (x_123 == 0)
{
lean_object* x_124; lean_object* x_125; 
x_124 = lean_ctor_get(x_91, 0);
lean_dec(x_124);
x_125 = lean_box(1);
lean_ctor_set(x_91, 0, x_125);
return x_91;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_126 = lean_ctor_get(x_91, 1);
lean_inc(x_126);
lean_dec(x_91);
x_127 = lean_box(1);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_126);
return x_128;
}
}
}
else
{
uint8_t x_129; 
x_129 = !lean_is_exclusive(x_84);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; 
x_130 = lean_ctor_get(x_84, 0);
lean_dec(x_130);
x_131 = lean_box(1);
lean_ctor_set(x_84, 0, x_131);
return x_84;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_84, 1);
lean_inc(x_132);
lean_dec(x_84);
x_133 = lean_box(1);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_132);
return x_134;
}
}
}
else
{
uint8_t x_135; 
x_135 = !lean_is_exclusive(x_77);
if (x_135 == 0)
{
lean_object* x_136; lean_object* x_137; 
x_136 = lean_ctor_get(x_77, 0);
lean_dec(x_136);
x_137 = lean_box(1);
lean_ctor_set(x_77, 0, x_137);
return x_77;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_138 = lean_ctor_get(x_77, 1);
lean_inc(x_138);
lean_dec(x_77);
x_139 = lean_box(1);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_138);
return x_140;
}
}
}
else
{
uint8_t x_141; 
x_141 = !lean_is_exclusive(x_67);
if (x_141 == 0)
{
lean_object* x_142; lean_object* x_143; 
x_142 = lean_ctor_get(x_67, 0);
lean_dec(x_142);
x_143 = lean_box(1);
lean_ctor_set(x_67, 0, x_143);
return x_67;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_67, 1);
lean_inc(x_144);
lean_dec(x_67);
x_145 = lean_box(1);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_144);
return x_146;
}
}
}
else
{
uint8_t x_147; 
x_147 = !lean_is_exclusive(x_60);
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; 
x_148 = lean_ctor_get(x_60, 0);
lean_dec(x_148);
x_149 = lean_box(1);
lean_ctor_set(x_60, 0, x_149);
return x_60;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_150 = lean_ctor_get(x_60, 1);
lean_inc(x_150);
lean_dec(x_60);
x_151 = lean_box(1);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_150);
return x_152;
}
}
}
else
{
uint8_t x_153; 
x_153 = !lean_is_exclusive(x_52);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; 
x_154 = lean_ctor_get(x_52, 0);
lean_dec(x_154);
x_155 = lean_box(1);
lean_ctor_set(x_52, 0, x_155);
return x_52;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_ctor_get(x_52, 1);
lean_inc(x_156);
lean_dec(x_52);
x_157 = lean_box(1);
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_156);
return x_158;
}
}
}
else
{
return x_43;
}
}
else
{
uint8_t x_159; 
x_159 = !lean_is_exclusive(x_38);
if (x_159 == 0)
{
lean_object* x_160; lean_object* x_161; 
x_160 = lean_ctor_get(x_38, 0);
lean_dec(x_160);
x_161 = lean_box(1);
lean_ctor_set(x_38, 0, x_161);
return x_38;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_162 = lean_ctor_get(x_38, 1);
lean_inc(x_162);
lean_dec(x_38);
x_163 = lean_box(1);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_163);
lean_ctor_set(x_164, 1, x_162);
return x_164;
}
}
}
else
{
return x_33;
}
}
else
{
return x_31;
}
}
else
{
uint8_t x_165; 
x_165 = !lean_is_exclusive(x_26);
if (x_165 == 0)
{
lean_object* x_166; lean_object* x_167; 
x_166 = lean_ctor_get(x_26, 0);
lean_dec(x_166);
x_167 = lean_box(1);
lean_ctor_set(x_26, 0, x_167);
return x_26;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_26, 1);
lean_inc(x_168);
lean_dec(x_26);
x_169 = lean_box(1);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_169);
lean_ctor_set(x_170, 1, x_168);
return x_170;
}
}
}
else
{
uint8_t x_171; 
x_171 = !lean_is_exclusive(x_19);
if (x_171 == 0)
{
lean_object* x_172; lean_object* x_173; 
x_172 = lean_ctor_get(x_19, 0);
lean_dec(x_172);
x_173 = lean_box(1);
lean_ctor_set(x_19, 0, x_173);
return x_19;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_174 = lean_ctor_get(x_19, 1);
lean_inc(x_174);
lean_dec(x_19);
x_175 = lean_box(1);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_174);
return x_176;
}
}
}
else
{
uint8_t x_177; 
x_177 = !lean_is_exclusive(x_8);
if (x_177 == 0)
{
lean_object* x_178; lean_object* x_179; 
x_178 = lean_ctor_get(x_8, 0);
lean_dec(x_178);
x_179 = lean_box(1);
lean_ctor_set(x_8, 0, x_179);
return x_8;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_8, 1);
lean_inc(x_180);
lean_dec(x_8);
x_181 = lean_box(1);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_180);
return x_182;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__sys(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_reset__sys___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__sys___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_reset__sys(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_MemoryOpResult__add__meta___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
else
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_MemoryOpResult__add__meta(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_MemoryOpResult__add__meta___redArg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_MemoryOpResult__drop__meta___redArg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
lean_ctor_set(x_1, 0, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_1);
if (x_8 == 0)
{
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_MemoryOpResult__drop__meta(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_MemoryOpResult__drop__meta___redArg(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Flow(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Prelude(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvErrors(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvXlen(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvExtensions(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvTypes(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvCallbacks(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvPcAccess(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSysRegs(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvPmpRegs(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvPmpControl(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSysExceptions(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvSysControl(uint8_t builtin, lean_object* w) {
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
res = initialize_LeanRV64DExecutable_RiscvExtensions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvTypes(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvCallbacks(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvPcAccess(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSysRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvPmpRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvPmpControl(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSysExceptions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_check__CSR__access___closed__0 = _init_l_LeanRV64DExecutable_Functions_check__CSR__access___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_check__CSR__access___closed__0);
l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__0 = _init_l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__0);
l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1 = _init_l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_check__TVM__SATP___closed__1);
l_LeanRV64DExecutable_Functions_check__Counteren___closed__0 = _init_l_LeanRV64DExecutable_Functions_check__Counteren___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_check__Counteren___closed__0);
l_LeanRV64DExecutable_Functions_check__Counteren___closed__1 = _init_l_LeanRV64DExecutable_Functions_check__Counteren___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_check__Counteren___closed__1);
l_LeanRV64DExecutable_Functions_check__Stimecmp___closed__0 = _init_l_LeanRV64DExecutable_Functions_check__Stimecmp___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_check__Stimecmp___closed__0);
l_LeanRV64DExecutable_Functions_check__Stimecmp___closed__1 = _init_l_LeanRV64DExecutable_Functions_check__Stimecmp___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_check__Stimecmp___closed__1);
l_LeanRV64DExecutable_Functions_check__seed__CSR___closed__0 = _init_l_LeanRV64DExecutable_Functions_check__seed__CSR___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_check__seed__CSR___closed__0);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__0 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__0);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__1 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__1);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__2 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__2);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__3 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__3);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__4 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__4);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__5 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__5);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__6 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__6();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__6);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__7 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__7();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__7);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__8 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__8();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__8);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__9 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__9();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__9);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__10 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__10();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__10);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__11 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__11();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__11);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__12 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__12();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__12);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__13 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__13();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__13);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__14 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__14();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__14);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__15 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__15();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__15);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__16 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__16();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__16);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__17 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__17();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__17);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__18 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__18();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__18);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__19 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__19();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__19);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__20 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__20();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__20);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__21 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__21();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__21);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__22 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__22();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__22);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__23 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__23();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__23);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__24();
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__25 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__25();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__25);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__26 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__26();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__26);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__27 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__27();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__27);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__28 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__28();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__28);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__29 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__29();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__29);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__30 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__30();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__30);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__31 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__31();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__31);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__32 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__32();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__32);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__33 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__33();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__33);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__34 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__34();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__34);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__35 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__35();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__35);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__36 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__36();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__36);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__37 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__37();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__37);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__38 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__38();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__38);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__39 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__39();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__39);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__40 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__40();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__40);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__41 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__41();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__41);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__42 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__42();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__42);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__43 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__43();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__43);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__44 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__44();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__44);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__45 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__45();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__45);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__46 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__46();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__46);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__47 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__47();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__47);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__48 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__48();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__48);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__49 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__49();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__49);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__50 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__50();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__50);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__51 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__51();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__51);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__52 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__52();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__52);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__53 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__53();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__53);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__54 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__54();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__54);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__55 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__55();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__55);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__56 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__56();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__56);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__57 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__57();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__57);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__58 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__58();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__58);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__59 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__59();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__59);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__60 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__60();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__60);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__61 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__61();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__61);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__62 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__62();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__62);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__63 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__63();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__63);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__64 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__64();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__64);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__65 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__65();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__65);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__66 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__66();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__66);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__67 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__67();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__67);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__68 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__68();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__68);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__69 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__69();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__69);
l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__70 = _init_l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__70();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__CSR__defined___closed__70);
l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__0 = _init_l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__0);
l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__1 = _init_l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__1);
l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__2 = _init_l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__2);
l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__3 = _init_l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__3);
l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__4 = _init_l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__4);
l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__5 = _init_l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_findPendingInterrupt___closed__5);
l_LeanRV64DExecutable_Functions_getPendingSet___closed__0 = _init_l_LeanRV64DExecutable_Functions_getPendingSet___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_getPendingSet___closed__0);
l_LeanRV64DExecutable_Functions_getPendingSet___closed__1 = _init_l_LeanRV64DExecutable_Functions_getPendingSet___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_getPendingSet___closed__1);
l_LeanRV64DExecutable_Functions_track__trap___closed__0 = _init_l_LeanRV64DExecutable_Functions_track__trap___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_track__trap___closed__0);
l_LeanRV64DExecutable_Functions_track__trap___closed__1 = _init_l_LeanRV64DExecutable_Functions_track__trap___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_track__trap___closed__1);
l_LeanRV64DExecutable_Functions_track__trap___closed__2 = _init_l_LeanRV64DExecutable_Functions_track__trap___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_track__trap___closed__2);
l_LeanRV64DExecutable_Functions_track__trap___closed__3 = _init_l_LeanRV64DExecutable_Functions_track__trap___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_track__trap___closed__3);
l_LeanRV64DExecutable_Functions_track__trap___closed__4 = _init_l_LeanRV64DExecutable_Functions_track__trap___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_track__trap___closed__4);
l_LeanRV64DExecutable_Functions_track__trap___closed__5 = _init_l_LeanRV64DExecutable_Functions_track__trap___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_track__trap___closed__5);
l_LeanRV64DExecutable_Functions_track__trap___closed__6 = _init_l_LeanRV64DExecutable_Functions_track__trap___closed__6();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_track__trap___closed__6);
l_LeanRV64DExecutable_Functions_track__trap___closed__7 = _init_l_LeanRV64DExecutable_Functions_track__trap___closed__7();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_track__trap___closed__7);
l_LeanRV64DExecutable_Functions_track__trap___closed__8 = _init_l_LeanRV64DExecutable_Functions_track__trap___closed__8();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_track__trap___closed__8);
l_LeanRV64DExecutable_Functions_track__trap___closed__9 = _init_l_LeanRV64DExecutable_Functions_track__trap___closed__9();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_track__trap___closed__9);
l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__0 = _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__0);
l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__1 = _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__1);
l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__2 = _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__2);
l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__3 = _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__3);
l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__4 = _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__4);
l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__5 = _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__5);
l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__6 = _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__6();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__6);
l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__7 = _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__7();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__7);
l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__8 = _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__8();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__8);
l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__9 = _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__9();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__9);
l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__10 = _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__10();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__10);
l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__11 = _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__11();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__11);
l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__12 = _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__12();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__12);
l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__13 = _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__13();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__13);
l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__14 = _init_l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__14();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_trap__handler___redArg___closed__14);
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__0 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__0();
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__1 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__1);
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__2 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__2();
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__3 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__3);
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__4 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__4();
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__5 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__5);
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__6 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__6();
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__7 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__7();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__7);
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__8 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__8();
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__9 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__9();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__9);
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__10 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__10();
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__11 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__11();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__11);
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__12 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__12();
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__13 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__13();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__13);
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__14 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__14();
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__15 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__15();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__15);
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__16 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__16();
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__17 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__17();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__17);
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__18 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__18();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__18);
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__19 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__19();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__19);
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__20 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__20();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__20);
l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__21 = _init_l_LeanRV64DExecutable_Functions_reset__misa___redArg___closed__21();
l_LeanRV64DExecutable_Functions_reset__sys___redArg___closed__0 = _init_l_LeanRV64DExecutable_Functions_reset__sys___redArg___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_reset__sys___redArg___closed__0);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
