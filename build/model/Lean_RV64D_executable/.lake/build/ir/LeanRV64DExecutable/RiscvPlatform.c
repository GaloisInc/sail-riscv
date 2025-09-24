// Lean compiler output
// Module: LeanRV64DExecutable.RiscvPlatform
// Imports: Init LeanRV64DExecutable.Flow LeanRV64DExecutable.Prelude LeanRV64DExecutable.RiscvXlen LeanRV64DExecutable.RiscvPcAccess LeanRV64DExecutable.RiscvSysRegs LeanRV64DExecutable.RiscvSmcntrpmf LeanRV64DExecutable.RiscvSysControl
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
lean_object* l_LeanRV64DExecutable_Functions_set__next__pc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__htif(lean_object*, lean_object*);
lean_object* lean_format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PreSail_undefined__bitvector___at___LeanRV64DExecutable_Functions_undefined__Misa_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_htif__load___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_setWidth(lean_object*, lean_object*, lean_object*);
lean_object* l_Sail_BitVec_join1(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_plat__insns__per__tick;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_clint__store___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_htif__store___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mmio__read___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__htif__readable(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__htif__readable___redArg(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_init__platform___redArg(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_handle__illegal(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_exception__handler(uint8_t, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__2;
extern lean_object* l_Sail_trivialChoiceSource;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___get__htif__cmd__device(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___set__htif__cmd__payload(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_handle__illegal___redArg(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___get__htif__cmd__payload(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__mmio__readable(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_MTIME__BASE__HI___closed__1;
static lean_object* l_LeanRV64DExecutable_Functions_MTIME__BASE___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___update__htif__cmd__device___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__htif__writable___redArg(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_clint__load___closed__6;
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_Mk__htif__cmd(lean_object*);
lean_object* l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_clint__load___closed__3;
static lean_object* l_LeanRV64DExecutable_Functions_plat__insns__per__tick___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___update__htif__cmd__payload___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__htif__writable___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_tick__clock___redArg___closed__0;
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__clint(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_reset__htif___redArg___closed__1;
lean_object* l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Sail_BitVec_access(lean_object*, lean_object*, lean_object*);
lean_object* l_PreSail_print__effect___at___cancel__reservation_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_bit__str(lean_object*, lean_object*);
lean_object* l_BitVec_ofNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___get__htif__cmd__payload___boxed(lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_plat__enable__misaligned__access;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mmio__read(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_MTIME__BASE___closed__1;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_clint__load(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_tick__clock___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_MSIP__BASE;
lean_object* l_BitVec_extractLsb___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__htif__cmd___redArg(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_handle__illegal___redArg___closed__1;
lean_object* l_LeanRV64DExecutable_Functions_bool__bits__forwards(uint8_t);
static lean_object* l_LeanRV64DExecutable_Functions_clint__load___closed__4;
static lean_object* l_LeanRV64DExecutable_Functions_htif__store___closed__0;
static lean_object* l_LeanRV64DExecutable_Functions_clint__store___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___get__htif__cmd__device___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_platform__wfi___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___update__htif__cmd__cmd___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__mmio__writable(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_clint__load___closed__5;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_tick__clock(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_MTIME__BASE;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI;
static lean_object* l_LeanRV64DExecutable_Functions_clint__load___closed__2;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__phys__mem(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_MTIME__BASE__HI___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__htif__writable(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_htif__store(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_plat__htif__tohost___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___update__htif__cmd__device(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_currentlyEnabled(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mmio__write___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__Minterrupts__MSI(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_clint__store(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___set__htif__cmd__device(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_clint__dispatch___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_platform__wfi(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_should__inc__mcycle(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__htif__readable___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__phys__mem___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI___closed__1;
static lean_object* l_LeanRV64DExecutable_Functions_MSIP__BASE___closed__1;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___set__htif__cmd__cmd(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__htif___boxed(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_MTIMECMP__BASE___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_clint__dispatch___redArg(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_htif__store___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_MSIP__BASE___closed__0;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Sail_BitVec_updateSubrange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_htif__store___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_MTIMECMP__BASE;
lean_object* l_plat__term__write___redArg(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___get__htif__cmd__cmd___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___update__htif__cmd__cmd(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_htif__load___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_Mk__htif__cmd___boxed(lean_object*);
lean_object* l_Sail_BitVec_addInt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_htif__load(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___set__htif__cmd__device___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Sail_BitVec_toFormatted(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__htif__cmd___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___update__htif__cmd__payload(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_plat__mtval__has__illegal__inst__bits;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mmio__write(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_htif__store___closed__2;
static lean_object* l_LeanRV64DExecutable_Functions_handle__illegal___redArg___closed__0;
static lean_object* l_LeanRV64DExecutable_Functions_reset__htif___redArg___closed__0;
lean_object* lean_int_add(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_clint__load___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_clint__load___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_handle__illegal___redArg___closed__2;
static lean_object* l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__1;
static lean_object* l_LeanRV64DExecutable_Functions_htif__store___closed__1;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___set__htif__cmd__cmd___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_init__platform___boxed(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_plat__enable__dirty__update;
static lean_object* l_LeanRV64DExecutable_Functions_MTIMECMP__BASE___closed__1;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_init__platform(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_handle__illegal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_plat__cache__block__size__exp;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_tick__clock___redArg(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_clint__dispatch___redArg___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_clint__dispatch(lean_object*, lean_object*);
lean_object* l_BitVec_BitVec_repr(lean_object*, lean_object*);
lean_object* lean_dbg_trace(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__0;
lean_object* l_BitVec_sub(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_clint__load___closed__1;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___get__htif__cmd__cmd(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__htif___redArg(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__htif__cmd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___set__htif__cmd__payload___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_MTIME__BASE__HI;
static lean_object* _init_l_LeanRV64DExecutable_Functions_plat__cache__block__size__exp() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(6u);
return x_1;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_plat__enable__dirty__update() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_plat__enable__misaligned__access() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_plat__mtval__has__illegal__inst__bits() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__phys__mem(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = 15;
x_5 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_4, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = 13;
x_9 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_8, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = 14;
x_13 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_12, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 12;
x_17 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_16, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_25; uint8_t x_64; uint8_t x_65; uint8_t x_66; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 lean_ctor_release(x_17, 1);
 x_20 = x_17;
} else {
 lean_dec_ref(x_17);
 x_20 = lean_box(0);
}
x_64 = lean_nat_dec_le(x_6, x_1);
x_65 = lean_nat_dec_le(x_10, x_1);
if (x_64 == 0)
{
lean_dec(x_14);
lean_dec(x_6);
x_66 = x_64;
goto block_73;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; 
lean_inc(x_1);
x_74 = lean_nat_to_int(x_1);
x_75 = lean_int_add(x_74, x_2);
lean_dec(x_74);
x_76 = lean_nat_to_int(x_6);
x_77 = lean_nat_to_int(x_14);
x_78 = lean_int_add(x_76, x_77);
lean_dec(x_77);
lean_dec(x_76);
x_79 = lean_int_dec_le(x_75, x_78);
lean_dec(x_78);
lean_dec(x_75);
x_66 = x_79;
goto block_73;
}
block_24:
{
uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_21 = 1;
x_22 = lean_box(x_21);
if (lean_is_scalar(x_20)) {
 x_23 = lean_alloc_ctor(0, 2, 0);
} else {
 x_23 = x_20;
}
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_19);
return x_23;
}
block_63:
{
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_20);
x_26 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_8, x_19);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_16, x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_4, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_12, x_31);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_32, 0);
lean_dec(x_34);
x_35 = lean_box(x_25);
lean_ctor_set(x_32, 0, x_35);
return x_32;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
lean_dec(x_32);
x_37 = lean_box(x_25);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
else
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_32);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_32, 0);
lean_dec(x_40);
x_41 = lean_box(1);
lean_ctor_set(x_32, 0, x_41);
return x_32;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_32, 1);
lean_inc(x_42);
lean_dec(x_32);
x_43 = lean_box(1);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
}
else
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_30);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_30, 0);
lean_dec(x_46);
x_47 = lean_box(1);
lean_ctor_set(x_30, 0, x_47);
return x_30;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_30, 1);
lean_inc(x_48);
lean_dec(x_30);
x_49 = lean_box(1);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
}
else
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_28);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_28, 0);
lean_dec(x_52);
x_53 = lean_box(1);
lean_ctor_set(x_28, 0, x_53);
return x_28;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_28, 1);
lean_inc(x_54);
lean_dec(x_28);
x_55 = lean_box(1);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
}
}
else
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_26);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_26, 0);
lean_dec(x_58);
x_59 = lean_box(1);
lean_ctor_set(x_26, 0, x_59);
return x_26;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_26, 1);
lean_inc(x_60);
lean_dec(x_26);
x_61 = lean_box(1);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
}
else
{
goto block_24;
}
}
block_73:
{
if (x_66 == 0)
{
if (x_65 == 0)
{
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_1);
x_25 = x_65;
goto block_63;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_67 = lean_nat_to_int(x_1);
x_68 = lean_int_add(x_67, x_2);
lean_dec(x_67);
x_69 = lean_nat_to_int(x_10);
x_70 = lean_nat_to_int(x_18);
x_71 = lean_int_add(x_69, x_70);
lean_dec(x_70);
lean_dec(x_69);
x_72 = lean_int_dec_le(x_68, x_71);
lean_dec(x_71);
lean_dec(x_68);
x_25 = x_72;
goto block_63;
}
}
else
{
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_1);
goto block_24;
}
}
}
else
{
uint8_t x_80; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_80 = !lean_is_exclusive(x_17);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_17, 0);
lean_dec(x_81);
x_82 = lean_box(1);
lean_ctor_set(x_17, 0, x_82);
return x_17;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_17, 1);
lean_inc(x_83);
lean_dec(x_17);
x_84 = lean_box(1);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_86 = !lean_is_exclusive(x_13);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_ctor_get(x_13, 0);
lean_dec(x_87);
x_88 = lean_box(1);
lean_ctor_set(x_13, 0, x_88);
return x_13;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_13, 1);
lean_inc(x_89);
lean_dec(x_13);
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
lean_dec(x_6);
lean_dec(x_1);
x_92 = !lean_is_exclusive(x_9);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; 
x_93 = lean_ctor_get(x_9, 0);
lean_dec(x_93);
x_94 = lean_box(1);
lean_ctor_set(x_9, 0, x_94);
return x_9;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_9, 1);
lean_inc(x_95);
lean_dec(x_9);
x_96 = lean_box(1);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
}
}
else
{
uint8_t x_98; 
lean_dec(x_1);
x_98 = !lean_is_exclusive(x_5);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; 
x_99 = lean_ctor_get(x_5, 0);
lean_dec(x_99);
x_100 = lean_box(1);
lean_ctor_set(x_5, 0, x_100);
return x_5;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_5, 1);
lean_inc(x_101);
lean_dec(x_5);
x_102 = lean_box(1);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_101);
return x_103;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__phys__mem___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_within__phys__mem(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__clint(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = 11;
x_5 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_4, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = 10;
x_9 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_8, x_7);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_nat_dec_le(x_6, x_1);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_box(x_12);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_14 = lean_nat_to_int(x_1);
x_15 = lean_nat_to_int(x_2);
x_16 = lean_int_add(x_14, x_15);
lean_dec(x_15);
lean_dec(x_14);
x_17 = lean_nat_to_int(x_6);
x_18 = lean_nat_to_int(x_11);
x_19 = lean_int_add(x_17, x_18);
lean_dec(x_18);
lean_dec(x_17);
x_20 = lean_int_dec_le(x_16, x_19);
lean_dec(x_19);
lean_dec(x_16);
x_21 = lean_box(x_20);
lean_ctor_set(x_9, 0, x_21);
return x_9;
}
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_9, 0);
x_23 = lean_ctor_get(x_9, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_9);
x_24 = lean_nat_dec_le(x_6, x_1);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_23);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_27 = lean_nat_to_int(x_1);
x_28 = lean_nat_to_int(x_2);
x_29 = lean_int_add(x_27, x_28);
lean_dec(x_28);
lean_dec(x_27);
x_30 = lean_nat_to_int(x_6);
x_31 = lean_nat_to_int(x_22);
x_32 = lean_int_add(x_30, x_31);
lean_dec(x_31);
lean_dec(x_30);
x_33 = lean_int_dec_le(x_29, x_32);
lean_dec(x_32);
lean_dec(x_29);
x_34 = lean_box(x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_23);
return x_35;
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_36 = !lean_is_exclusive(x_9);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_9, 0);
lean_dec(x_37);
x_38 = lean_box(1);
lean_ctor_set(x_9, 0, x_38);
return x_9;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_9, 1);
lean_inc(x_39);
lean_dec(x_9);
x_40 = lean_box(1);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_2);
lean_dec(x_1);
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
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__htif__writable___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(64u);
x_3 = l_plat__htif__tohost___redArg(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_plat__htif__tohost___redArg(x_2, x_4);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
lean_dec(x_7);
x_8 = 0;
x_9 = lean_box(x_8);
lean_ctor_set(x_5, 0, x_9);
return x_5;
}
else
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = 0;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_5);
if (x_14 == 0)
{
return x_5;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_5, 0);
x_16 = lean_ctor_get(x_5, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_5);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_3);
if (x_18 == 0)
{
return x_3;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_3, 0);
x_20 = lean_ctor_get(x_3, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_3);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__htif__writable(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_within__htif__writable___redArg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__htif__writable___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_within__htif__writable(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__htif__readable___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(64u);
x_3 = l_plat__htif__tohost___redArg(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_plat__htif__tohost___redArg(x_2, x_4);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
lean_dec(x_7);
x_8 = 0;
x_9 = lean_box(x_8);
lean_ctor_set(x_5, 0, x_9);
return x_5;
}
else
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = 0;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_5);
if (x_14 == 0)
{
return x_5;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_5, 0);
x_16 = lean_ctor_get(x_5, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_5);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_3);
if (x_18 == 0)
{
return x_3;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_3, 0);
x_20 = lean_ctor_get(x_3, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_3);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__htif__readable(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_within__htif__readable___redArg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__htif__readable___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_within__htif__readable(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_plat__insns__per__tick___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_plat__insns__per__tick() {
_start:
{
lean_object* x_1; 
x_1 = l_LeanRV64DExecutable_Functions_plat__insns__per__tick___closed__0;
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_MSIP__BASE___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(20u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_MSIP__BASE___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_LeanRV64DExecutable_Functions_MSIP__BASE___closed__0;
x_2 = lean_unsigned_to_nat(64u);
x_3 = lean_unsigned_to_nat(20u);
x_4 = l_BitVec_setWidth(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_MSIP__BASE() {
_start:
{
lean_object* x_1; 
x_1 = l_LeanRV64DExecutable_Functions_MSIP__BASE___closed__1;
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_MTIMECMP__BASE___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(16384u);
x_2 = lean_unsigned_to_nat(20u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_MTIMECMP__BASE___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_LeanRV64DExecutable_Functions_MTIMECMP__BASE___closed__0;
x_2 = lean_unsigned_to_nat(64u);
x_3 = lean_unsigned_to_nat(20u);
x_4 = l_BitVec_setWidth(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_MTIMECMP__BASE() {
_start:
{
lean_object* x_1; 
x_1 = l_LeanRV64DExecutable_Functions_MTIMECMP__BASE___closed__1;
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(16388u);
x_2 = lean_unsigned_to_nat(20u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI___closed__0;
x_2 = lean_unsigned_to_nat(64u);
x_3 = lean_unsigned_to_nat(20u);
x_4 = l_BitVec_setWidth(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI() {
_start:
{
lean_object* x_1; 
x_1 = l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI___closed__1;
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_MTIME__BASE___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(49144u);
x_2 = lean_unsigned_to_nat(20u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_MTIME__BASE___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_LeanRV64DExecutable_Functions_MTIME__BASE___closed__0;
x_2 = lean_unsigned_to_nat(64u);
x_3 = lean_unsigned_to_nat(20u);
x_4 = l_BitVec_setWidth(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_MTIME__BASE() {
_start:
{
lean_object* x_1; 
x_1 = l_LeanRV64DExecutable_Functions_MTIME__BASE___closed__1;
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_MTIME__BASE__HI___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(49148u);
x_2 = lean_unsigned_to_nat(20u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_MTIME__BASE__HI___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_LeanRV64DExecutable_Functions_MTIME__BASE__HI___closed__0;
x_2 = lean_unsigned_to_nat(64u);
x_3 = lean_unsigned_to_nat(20u);
x_4 = l_BitVec_setWidth(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_MTIME__BASE__HI() {
_start:
{
lean_object* x_1; 
x_1 = l_LeanRV64DExecutable_Functions_MTIME__BASE__HI___closed__1;
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_clint__load___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_clint__load___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_clint__load___closed__0;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_clint__load___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_clint__load___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_clint__load___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_clint__load___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_clint__load___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_clint__load___closed__4;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_clint__load___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_clint__load(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = 11;
x_6 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_55; lean_object* x_56; uint8_t x_57; uint8_t x_94; uint8_t x_139; uint8_t x_182; uint8_t x_219; uint8_t x_264; lean_object* x_307; uint8_t x_308; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_9 = x_6;
} else {
 lean_dec_ref(x_6);
 x_9 = lean_box(0);
}
x_55 = lean_unsigned_to_nat(64u);
x_56 = l_BitVec_sub(x_55, x_2, x_7);
lean_dec(x_7);
x_307 = l_LeanRV64DExecutable_Functions_MSIP__BASE;
x_308 = lean_nat_dec_eq(x_56, x_307);
if (x_308 == 0)
{
x_264 = x_308;
goto block_306;
}
else
{
lean_object* x_309; uint8_t x_310; 
x_309 = lean_unsigned_to_nat(8u);
x_310 = lean_nat_dec_eq(x_3, x_309);
if (x_310 == 0)
{
lean_object* x_311; uint8_t x_312; 
x_311 = lean_unsigned_to_nat(4u);
x_312 = lean_nat_dec_eq(x_3, x_311);
x_264 = x_312;
goto block_306;
}
else
{
x_264 = x_310;
goto block_306;
}
}
block_54:
{
if (x_10 == 0)
{
lean_dec(x_3);
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_LeanRV64DExecutable_Functions_clint__load___closed__1;
if (lean_is_scalar(x_9)) {
 x_12 = lean_alloc_ctor(0, 2, 0);
} else {
 x_12 = x_9;
}
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
case 3:
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_LeanRV64DExecutable_Functions_clint__load___closed__3;
if (lean_is_scalar(x_9)) {
 x_14 = lean_alloc_ctor(0, 2, 0);
} else {
 x_14 = x_9;
}
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_8);
return x_14;
}
default: 
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_LeanRV64DExecutable_Functions_clint__load___closed__5;
if (lean_is_scalar(x_9)) {
 x_16 = lean_alloc_ctor(0, 2, 0);
} else {
 x_16 = x_9;
}
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_8);
return x_16;
}
}
}
else
{
uint8_t x_17; lean_object* x_18; 
lean_dec(x_9);
x_17 = 71;
x_18 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_17, x_8);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_17, x_19);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_unsigned_to_nat(32u);
x_24 = lean_unsigned_to_nat(8u);
x_25 = lean_nat_mul(x_24, x_3);
lean_dec(x_3);
x_26 = lean_unsigned_to_nat(63u);
x_27 = l_BitVec_extractLsb___redArg(x_26, x_23, x_22);
lean_dec(x_22);
x_28 = l_BitVec_setWidth(x_23, x_23, x_27);
lean_dec(x_27);
x_29 = l_BitVec_setWidth(x_23, x_25, x_28);
lean_dec(x_28);
lean_dec(x_25);
x_30 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_20, 0, x_30);
return x_20;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_31 = lean_ctor_get(x_20, 0);
x_32 = lean_ctor_get(x_20, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_20);
x_33 = lean_unsigned_to_nat(32u);
x_34 = lean_unsigned_to_nat(8u);
x_35 = lean_nat_mul(x_34, x_3);
lean_dec(x_3);
x_36 = lean_unsigned_to_nat(63u);
x_37 = l_BitVec_extractLsb___redArg(x_36, x_33, x_31);
lean_dec(x_31);
x_38 = l_BitVec_setWidth(x_33, x_33, x_37);
lean_dec(x_37);
x_39 = l_BitVec_setWidth(x_33, x_35, x_38);
lean_dec(x_38);
lean_dec(x_35);
x_40 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_32);
return x_41;
}
}
else
{
uint8_t x_42; 
lean_dec(x_3);
x_42 = !lean_is_exclusive(x_20);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_20, 0);
lean_dec(x_43);
x_44 = lean_box(1);
lean_ctor_set(x_20, 0, x_44);
return x_20;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_20, 1);
lean_inc(x_45);
lean_dec(x_20);
x_46 = lean_box(1);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_3);
x_48 = !lean_is_exclusive(x_18);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_18, 0);
lean_dec(x_49);
x_50 = lean_box(1);
lean_ctor_set(x_18, 0, x_50);
return x_18;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_18, 1);
lean_inc(x_51);
lean_dec(x_18);
x_52 = lean_box(1);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
}
}
}
block_93:
{
if (x_57 == 0)
{
lean_object* x_58; uint8_t x_59; 
x_58 = l_LeanRV64DExecutable_Functions_MTIME__BASE__HI;
x_59 = lean_nat_dec_eq(x_56, x_58);
lean_dec(x_56);
if (x_59 == 0)
{
x_10 = x_59;
goto block_54;
}
else
{
lean_object* x_60; uint8_t x_61; 
x_60 = lean_unsigned_to_nat(4u);
x_61 = lean_nat_dec_eq(x_3, x_60);
x_10 = x_61;
goto block_54;
}
}
else
{
uint8_t x_62; lean_object* x_63; 
lean_dec(x_56);
lean_dec(x_9);
x_62 = 71;
x_63 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_62, x_8);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
lean_dec(x_63);
x_65 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_62, x_64);
if (lean_obj_tag(x_65) == 0)
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_65);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_67 = lean_ctor_get(x_65, 0);
x_68 = lean_unsigned_to_nat(8u);
x_69 = lean_nat_mul(x_68, x_3);
lean_dec(x_3);
x_70 = l_BitVec_setWidth(x_55, x_55, x_67);
lean_dec(x_67);
x_71 = l_BitVec_setWidth(x_55, x_69, x_70);
lean_dec(x_70);
lean_dec(x_69);
x_72 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_65, 0, x_72);
return x_65;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_73 = lean_ctor_get(x_65, 0);
x_74 = lean_ctor_get(x_65, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_65);
x_75 = lean_unsigned_to_nat(8u);
x_76 = lean_nat_mul(x_75, x_3);
lean_dec(x_3);
x_77 = l_BitVec_setWidth(x_55, x_55, x_73);
lean_dec(x_73);
x_78 = l_BitVec_setWidth(x_55, x_76, x_77);
lean_dec(x_77);
lean_dec(x_76);
x_79 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_79, 0, x_78);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_74);
return x_80;
}
}
else
{
uint8_t x_81; 
lean_dec(x_3);
x_81 = !lean_is_exclusive(x_65);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; 
x_82 = lean_ctor_get(x_65, 0);
lean_dec(x_82);
x_83 = lean_box(1);
lean_ctor_set(x_65, 0, x_83);
return x_65;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_65, 1);
lean_inc(x_84);
lean_dec(x_65);
x_85 = lean_box(1);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_84);
return x_86;
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_3);
x_87 = !lean_is_exclusive(x_63);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; 
x_88 = lean_ctor_get(x_63, 0);
lean_dec(x_88);
x_89 = lean_box(1);
lean_ctor_set(x_63, 0, x_89);
return x_63;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_63, 1);
lean_inc(x_90);
lean_dec(x_63);
x_91 = lean_box(1);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_90);
return x_92;
}
}
}
}
block_138:
{
if (x_94 == 0)
{
lean_object* x_95; uint8_t x_96; 
x_95 = l_LeanRV64DExecutable_Functions_MTIME__BASE;
x_96 = lean_nat_dec_eq(x_56, x_95);
if (x_96 == 0)
{
x_57 = x_96;
goto block_93;
}
else
{
lean_object* x_97; uint8_t x_98; 
x_97 = lean_unsigned_to_nat(8u);
x_98 = lean_nat_dec_eq(x_3, x_97);
x_57 = x_98;
goto block_93;
}
}
else
{
uint8_t x_99; lean_object* x_100; 
lean_dec(x_56);
lean_dec(x_9);
x_99 = 71;
x_100 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_99, x_8);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; lean_object* x_102; 
x_101 = lean_ctor_get(x_100, 1);
lean_inc(x_101);
lean_dec(x_100);
x_102 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_99, x_101);
if (lean_obj_tag(x_102) == 0)
{
uint8_t x_103; 
x_103 = !lean_is_exclusive(x_102);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_104 = lean_ctor_get(x_102, 0);
x_105 = lean_unsigned_to_nat(32u);
x_106 = lean_unsigned_to_nat(8u);
x_107 = lean_nat_mul(x_106, x_3);
lean_dec(x_3);
x_108 = lean_unsigned_to_nat(31u);
x_109 = lean_unsigned_to_nat(0u);
x_110 = l_BitVec_extractLsb___redArg(x_108, x_109, x_104);
lean_dec(x_104);
x_111 = l_BitVec_setWidth(x_105, x_105, x_110);
lean_dec(x_110);
x_112 = l_BitVec_setWidth(x_105, x_107, x_111);
lean_dec(x_111);
lean_dec(x_107);
x_113 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_102, 0, x_113);
return x_102;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_114 = lean_ctor_get(x_102, 0);
x_115 = lean_ctor_get(x_102, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_102);
x_116 = lean_unsigned_to_nat(32u);
x_117 = lean_unsigned_to_nat(8u);
x_118 = lean_nat_mul(x_117, x_3);
lean_dec(x_3);
x_119 = lean_unsigned_to_nat(31u);
x_120 = lean_unsigned_to_nat(0u);
x_121 = l_BitVec_extractLsb___redArg(x_119, x_120, x_114);
lean_dec(x_114);
x_122 = l_BitVec_setWidth(x_116, x_116, x_121);
lean_dec(x_121);
x_123 = l_BitVec_setWidth(x_116, x_118, x_122);
lean_dec(x_122);
lean_dec(x_118);
x_124 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_124, 0, x_123);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_115);
return x_125;
}
}
else
{
uint8_t x_126; 
lean_dec(x_3);
x_126 = !lean_is_exclusive(x_102);
if (x_126 == 0)
{
lean_object* x_127; lean_object* x_128; 
x_127 = lean_ctor_get(x_102, 0);
lean_dec(x_127);
x_128 = lean_box(1);
lean_ctor_set(x_102, 0, x_128);
return x_102;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_102, 1);
lean_inc(x_129);
lean_dec(x_102);
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
lean_dec(x_3);
x_132 = !lean_is_exclusive(x_100);
if (x_132 == 0)
{
lean_object* x_133; lean_object* x_134; 
x_133 = lean_ctor_get(x_100, 0);
lean_dec(x_133);
x_134 = lean_box(1);
lean_ctor_set(x_100, 0, x_134);
return x_100;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_100, 1);
lean_inc(x_135);
lean_dec(x_100);
x_136 = lean_box(1);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_135);
return x_137;
}
}
}
}
block_181:
{
if (x_139 == 0)
{
lean_object* x_140; uint8_t x_141; 
x_140 = l_LeanRV64DExecutable_Functions_MTIME__BASE;
x_141 = lean_nat_dec_eq(x_56, x_140);
if (x_141 == 0)
{
x_94 = x_141;
goto block_138;
}
else
{
lean_object* x_142; uint8_t x_143; 
x_142 = lean_unsigned_to_nat(4u);
x_143 = lean_nat_dec_eq(x_3, x_142);
x_94 = x_143;
goto block_138;
}
}
else
{
uint8_t x_144; lean_object* x_145; 
lean_dec(x_56);
lean_dec(x_9);
x_144 = 9;
x_145 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_144, x_8);
if (lean_obj_tag(x_145) == 0)
{
lean_object* x_146; lean_object* x_147; 
x_146 = lean_ctor_get(x_145, 1);
lean_inc(x_146);
lean_dec(x_145);
x_147 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_144, x_146);
if (lean_obj_tag(x_147) == 0)
{
uint8_t x_148; 
x_148 = !lean_is_exclusive(x_147);
if (x_148 == 0)
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_149 = lean_ctor_get(x_147, 0);
x_150 = lean_unsigned_to_nat(32u);
x_151 = lean_unsigned_to_nat(8u);
x_152 = lean_nat_mul(x_151, x_3);
lean_dec(x_3);
x_153 = lean_unsigned_to_nat(63u);
x_154 = l_BitVec_extractLsb___redArg(x_153, x_150, x_149);
lean_dec(x_149);
x_155 = l_BitVec_setWidth(x_150, x_150, x_154);
lean_dec(x_154);
x_156 = l_BitVec_setWidth(x_150, x_152, x_155);
lean_dec(x_155);
lean_dec(x_152);
x_157 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_147, 0, x_157);
return x_147;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_158 = lean_ctor_get(x_147, 0);
x_159 = lean_ctor_get(x_147, 1);
lean_inc(x_159);
lean_inc(x_158);
lean_dec(x_147);
x_160 = lean_unsigned_to_nat(32u);
x_161 = lean_unsigned_to_nat(8u);
x_162 = lean_nat_mul(x_161, x_3);
lean_dec(x_3);
x_163 = lean_unsigned_to_nat(63u);
x_164 = l_BitVec_extractLsb___redArg(x_163, x_160, x_158);
lean_dec(x_158);
x_165 = l_BitVec_setWidth(x_160, x_160, x_164);
lean_dec(x_164);
x_166 = l_BitVec_setWidth(x_160, x_162, x_165);
lean_dec(x_165);
lean_dec(x_162);
x_167 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_167, 0, x_166);
x_168 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_159);
return x_168;
}
}
else
{
uint8_t x_169; 
lean_dec(x_3);
x_169 = !lean_is_exclusive(x_147);
if (x_169 == 0)
{
lean_object* x_170; lean_object* x_171; 
x_170 = lean_ctor_get(x_147, 0);
lean_dec(x_170);
x_171 = lean_box(1);
lean_ctor_set(x_147, 0, x_171);
return x_147;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_172 = lean_ctor_get(x_147, 1);
lean_inc(x_172);
lean_dec(x_147);
x_173 = lean_box(1);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_172);
return x_174;
}
}
}
else
{
uint8_t x_175; 
lean_dec(x_3);
x_175 = !lean_is_exclusive(x_145);
if (x_175 == 0)
{
lean_object* x_176; lean_object* x_177; 
x_176 = lean_ctor_get(x_145, 0);
lean_dec(x_176);
x_177 = lean_box(1);
lean_ctor_set(x_145, 0, x_177);
return x_145;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_178 = lean_ctor_get(x_145, 1);
lean_inc(x_178);
lean_dec(x_145);
x_179 = lean_box(1);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_179);
lean_ctor_set(x_180, 1, x_178);
return x_180;
}
}
}
}
block_218:
{
if (x_182 == 0)
{
lean_object* x_183; uint8_t x_184; 
x_183 = l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI;
x_184 = lean_nat_dec_eq(x_56, x_183);
if (x_184 == 0)
{
x_139 = x_184;
goto block_181;
}
else
{
lean_object* x_185; uint8_t x_186; 
x_185 = lean_unsigned_to_nat(4u);
x_186 = lean_nat_dec_eq(x_3, x_185);
x_139 = x_186;
goto block_181;
}
}
else
{
uint8_t x_187; lean_object* x_188; 
lean_dec(x_56);
lean_dec(x_9);
x_187 = 9;
x_188 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_187, x_8);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_189; lean_object* x_190; 
x_189 = lean_ctor_get(x_188, 1);
lean_inc(x_189);
lean_dec(x_188);
x_190 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_187, x_189);
if (lean_obj_tag(x_190) == 0)
{
uint8_t x_191; 
x_191 = !lean_is_exclusive(x_190);
if (x_191 == 0)
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_192 = lean_ctor_get(x_190, 0);
x_193 = lean_unsigned_to_nat(8u);
x_194 = lean_nat_mul(x_193, x_3);
lean_dec(x_3);
x_195 = l_BitVec_setWidth(x_55, x_55, x_192);
lean_dec(x_192);
x_196 = l_BitVec_setWidth(x_55, x_194, x_195);
lean_dec(x_195);
lean_dec(x_194);
x_197 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_190, 0, x_197);
return x_190;
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_198 = lean_ctor_get(x_190, 0);
x_199 = lean_ctor_get(x_190, 1);
lean_inc(x_199);
lean_inc(x_198);
lean_dec(x_190);
x_200 = lean_unsigned_to_nat(8u);
x_201 = lean_nat_mul(x_200, x_3);
lean_dec(x_3);
x_202 = l_BitVec_setWidth(x_55, x_55, x_198);
lean_dec(x_198);
x_203 = l_BitVec_setWidth(x_55, x_201, x_202);
lean_dec(x_202);
lean_dec(x_201);
x_204 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_204, 0, x_203);
x_205 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_205, 0, x_204);
lean_ctor_set(x_205, 1, x_199);
return x_205;
}
}
else
{
uint8_t x_206; 
lean_dec(x_3);
x_206 = !lean_is_exclusive(x_190);
if (x_206 == 0)
{
lean_object* x_207; lean_object* x_208; 
x_207 = lean_ctor_get(x_190, 0);
lean_dec(x_207);
x_208 = lean_box(1);
lean_ctor_set(x_190, 0, x_208);
return x_190;
}
else
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_209 = lean_ctor_get(x_190, 1);
lean_inc(x_209);
lean_dec(x_190);
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
lean_dec(x_3);
x_212 = !lean_is_exclusive(x_188);
if (x_212 == 0)
{
lean_object* x_213; lean_object* x_214; 
x_213 = lean_ctor_get(x_188, 0);
lean_dec(x_213);
x_214 = lean_box(1);
lean_ctor_set(x_188, 0, x_214);
return x_188;
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; 
x_215 = lean_ctor_get(x_188, 1);
lean_inc(x_215);
lean_dec(x_188);
x_216 = lean_box(1);
x_217 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_217, 0, x_216);
lean_ctor_set(x_217, 1, x_215);
return x_217;
}
}
}
}
block_263:
{
if (x_219 == 0)
{
lean_object* x_220; uint8_t x_221; 
x_220 = l_LeanRV64DExecutable_Functions_MTIMECMP__BASE;
x_221 = lean_nat_dec_eq(x_56, x_220);
if (x_221 == 0)
{
x_182 = x_221;
goto block_218;
}
else
{
lean_object* x_222; uint8_t x_223; 
x_222 = lean_unsigned_to_nat(8u);
x_223 = lean_nat_dec_eq(x_3, x_222);
x_182 = x_223;
goto block_218;
}
}
else
{
uint8_t x_224; lean_object* x_225; 
lean_dec(x_56);
lean_dec(x_9);
x_224 = 9;
x_225 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_224, x_8);
if (lean_obj_tag(x_225) == 0)
{
lean_object* x_226; lean_object* x_227; 
x_226 = lean_ctor_get(x_225, 1);
lean_inc(x_226);
lean_dec(x_225);
x_227 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_224, x_226);
if (lean_obj_tag(x_227) == 0)
{
uint8_t x_228; 
x_228 = !lean_is_exclusive(x_227);
if (x_228 == 0)
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_229 = lean_ctor_get(x_227, 0);
x_230 = lean_unsigned_to_nat(32u);
x_231 = lean_unsigned_to_nat(8u);
x_232 = lean_nat_mul(x_231, x_3);
lean_dec(x_3);
x_233 = lean_unsigned_to_nat(31u);
x_234 = lean_unsigned_to_nat(0u);
x_235 = l_BitVec_extractLsb___redArg(x_233, x_234, x_229);
lean_dec(x_229);
x_236 = l_BitVec_setWidth(x_230, x_230, x_235);
lean_dec(x_235);
x_237 = l_BitVec_setWidth(x_230, x_232, x_236);
lean_dec(x_236);
lean_dec(x_232);
x_238 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_238, 0, x_237);
lean_ctor_set(x_227, 0, x_238);
return x_227;
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; 
x_239 = lean_ctor_get(x_227, 0);
x_240 = lean_ctor_get(x_227, 1);
lean_inc(x_240);
lean_inc(x_239);
lean_dec(x_227);
x_241 = lean_unsigned_to_nat(32u);
x_242 = lean_unsigned_to_nat(8u);
x_243 = lean_nat_mul(x_242, x_3);
lean_dec(x_3);
x_244 = lean_unsigned_to_nat(31u);
x_245 = lean_unsigned_to_nat(0u);
x_246 = l_BitVec_extractLsb___redArg(x_244, x_245, x_239);
lean_dec(x_239);
x_247 = l_BitVec_setWidth(x_241, x_241, x_246);
lean_dec(x_246);
x_248 = l_BitVec_setWidth(x_241, x_243, x_247);
lean_dec(x_247);
lean_dec(x_243);
x_249 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_249, 0, x_248);
x_250 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_250, 0, x_249);
lean_ctor_set(x_250, 1, x_240);
return x_250;
}
}
else
{
uint8_t x_251; 
lean_dec(x_3);
x_251 = !lean_is_exclusive(x_227);
if (x_251 == 0)
{
lean_object* x_252; lean_object* x_253; 
x_252 = lean_ctor_get(x_227, 0);
lean_dec(x_252);
x_253 = lean_box(1);
lean_ctor_set(x_227, 0, x_253);
return x_227;
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; 
x_254 = lean_ctor_get(x_227, 1);
lean_inc(x_254);
lean_dec(x_227);
x_255 = lean_box(1);
x_256 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_256, 0, x_255);
lean_ctor_set(x_256, 1, x_254);
return x_256;
}
}
}
else
{
uint8_t x_257; 
lean_dec(x_3);
x_257 = !lean_is_exclusive(x_225);
if (x_257 == 0)
{
lean_object* x_258; lean_object* x_259; 
x_258 = lean_ctor_get(x_225, 0);
lean_dec(x_258);
x_259 = lean_box(1);
lean_ctor_set(x_225, 0, x_259);
return x_225;
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_260 = lean_ctor_get(x_225, 1);
lean_inc(x_260);
lean_dec(x_225);
x_261 = lean_box(1);
x_262 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_260);
return x_262;
}
}
}
}
block_306:
{
if (x_264 == 0)
{
lean_object* x_265; uint8_t x_266; 
x_265 = l_LeanRV64DExecutable_Functions_MTIMECMP__BASE;
x_266 = lean_nat_dec_eq(x_56, x_265);
if (x_266 == 0)
{
x_219 = x_266;
goto block_263;
}
else
{
lean_object* x_267; uint8_t x_268; 
x_267 = lean_unsigned_to_nat(4u);
x_268 = lean_nat_dec_eq(x_3, x_267);
x_219 = x_268;
goto block_263;
}
}
else
{
uint8_t x_269; lean_object* x_270; 
lean_dec(x_56);
lean_dec(x_9);
x_269 = 83;
x_270 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_269, x_8);
if (lean_obj_tag(x_270) == 0)
{
lean_object* x_271; lean_object* x_272; 
x_271 = lean_ctor_get(x_270, 1);
lean_inc(x_271);
lean_dec(x_270);
x_272 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_269, x_271);
if (lean_obj_tag(x_272) == 0)
{
uint8_t x_273; 
x_273 = !lean_is_exclusive(x_272);
if (x_273 == 0)
{
lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_274 = lean_ctor_get(x_272, 0);
x_275 = lean_unsigned_to_nat(1u);
x_276 = l_LeanRV64DExecutable_Functions_clint__load___closed__6;
x_277 = lean_nat_to_int(x_3);
x_278 = lean_int_mul(x_276, x_277);
lean_dec(x_277);
x_279 = l_Int_toNat(x_278);
lean_dec(x_278);
x_280 = l_LeanRV64DExecutable_Functions___get__Minterrupts__MSI(x_274);
lean_dec(x_274);
x_281 = l_BitVec_setWidth(x_275, x_279, x_280);
lean_dec(x_280);
lean_dec(x_279);
x_282 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_282, 0, x_281);
lean_ctor_set(x_272, 0, x_282);
return x_272;
}
else
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; 
x_283 = lean_ctor_get(x_272, 0);
x_284 = lean_ctor_get(x_272, 1);
lean_inc(x_284);
lean_inc(x_283);
lean_dec(x_272);
x_285 = lean_unsigned_to_nat(1u);
x_286 = l_LeanRV64DExecutable_Functions_clint__load___closed__6;
x_287 = lean_nat_to_int(x_3);
x_288 = lean_int_mul(x_286, x_287);
lean_dec(x_287);
x_289 = l_Int_toNat(x_288);
lean_dec(x_288);
x_290 = l_LeanRV64DExecutable_Functions___get__Minterrupts__MSI(x_283);
lean_dec(x_283);
x_291 = l_BitVec_setWidth(x_285, x_289, x_290);
lean_dec(x_290);
lean_dec(x_289);
x_292 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_292, 0, x_291);
x_293 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_293, 0, x_292);
lean_ctor_set(x_293, 1, x_284);
return x_293;
}
}
else
{
uint8_t x_294; 
lean_dec(x_3);
x_294 = !lean_is_exclusive(x_272);
if (x_294 == 0)
{
lean_object* x_295; lean_object* x_296; 
x_295 = lean_ctor_get(x_272, 0);
lean_dec(x_295);
x_296 = lean_box(1);
lean_ctor_set(x_272, 0, x_296);
return x_272;
}
else
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; 
x_297 = lean_ctor_get(x_272, 1);
lean_inc(x_297);
lean_dec(x_272);
x_298 = lean_box(1);
x_299 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_299, 0, x_298);
lean_ctor_set(x_299, 1, x_297);
return x_299;
}
}
}
else
{
uint8_t x_300; 
lean_dec(x_3);
x_300 = !lean_is_exclusive(x_270);
if (x_300 == 0)
{
lean_object* x_301; lean_object* x_302; 
x_301 = lean_ctor_get(x_270, 0);
lean_dec(x_301);
x_302 = lean_box(1);
lean_ctor_set(x_270, 0, x_302);
return x_270;
}
else
{
lean_object* x_303; lean_object* x_304; lean_object* x_305; 
x_303 = lean_ctor_get(x_270, 1);
lean_inc(x_303);
lean_dec(x_270);
x_304 = lean_box(1);
x_305 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_305, 0, x_304);
lean_ctor_set(x_305, 1, x_303);
return x_305;
}
}
}
}
}
else
{
uint8_t x_313; 
lean_dec(x_3);
x_313 = !lean_is_exclusive(x_6);
if (x_313 == 0)
{
lean_object* x_314; lean_object* x_315; 
x_314 = lean_ctor_get(x_6, 0);
lean_dec(x_314);
x_315 = lean_box(1);
lean_ctor_set(x_6, 0, x_315);
return x_6;
}
else
{
lean_object* x_316; lean_object* x_317; lean_object* x_318; 
x_316 = lean_ctor_get(x_6, 1);
lean_inc(x_316);
lean_dec(x_6);
x_317 = lean_box(1);
x_318 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_318, 0, x_317);
lean_ctor_set(x_318, 1, x_316);
return x_318;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_clint__load___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LeanRV64DExecutable_Functions_clint__load(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_clint__dispatch___redArg___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_nat_mul(x_1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_clint__dispatch___redArg(lean_object* x_1) {
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
x_6 = 9;
x_7 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_6, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = 71;
x_11 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_10, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_59; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_LeanRV64DExecutable_Functions_clint__dispatch___redArg___closed__0;
x_15 = lean_unsigned_to_nat(7u);
x_16 = lean_nat_dec_le(x_8, x_12);
lean_dec(x_12);
lean_dec(x_8);
x_17 = l_LeanRV64DExecutable_Functions_bool__bits__forwards(x_16);
x_18 = l_Sail_BitVec_updateSubrange(x_14, x_4, x_15, x_15, x_17);
lean_dec(x_17);
lean_dec(x_4);
x_19 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_2, x_18, x_13);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = 55;
x_59 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_21, x_20);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_61);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; uint8_t x_65; lean_object* x_66; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = 8;
x_66 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_65, x_64);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_10, x_68);
if (lean_obj_tag(x_69) == 0)
{
uint8_t x_70; 
x_70 = lean_unbox(x_60);
lean_dec(x_60);
if (x_70 == 0)
{
lean_object* x_71; 
lean_dec(x_67);
lean_dec(x_63);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_22 = x_71;
goto block_58;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_72 = lean_ctor_get(x_69, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_69, 1);
lean_inc(x_73);
lean_dec(x_69);
x_74 = lean_unsigned_to_nat(5u);
x_75 = lean_nat_dec_le(x_67, x_72);
lean_dec(x_72);
lean_dec(x_67);
x_76 = l_LeanRV64DExecutable_Functions_bool__bits__forwards(x_75);
x_77 = l_Sail_BitVec_updateSubrange(x_14, x_63, x_74, x_74, x_76);
lean_dec(x_76);
lean_dec(x_63);
x_78 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_2, x_77, x_73);
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
lean_dec(x_78);
x_22 = x_79;
goto block_58;
}
}
else
{
uint8_t x_80; 
lean_dec(x_67);
lean_dec(x_63);
lean_dec(x_60);
x_80 = !lean_is_exclusive(x_69);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_69, 0);
lean_dec(x_81);
x_82 = lean_box(1);
lean_ctor_set(x_69, 0, x_82);
return x_69;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_69, 1);
lean_inc(x_83);
lean_dec(x_69);
x_84 = lean_box(1);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_63);
lean_dec(x_60);
x_86 = !lean_is_exclusive(x_66);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_ctor_get(x_66, 0);
lean_dec(x_87);
x_88 = lean_box(1);
lean_ctor_set(x_66, 0, x_88);
return x_66;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_66, 1);
lean_inc(x_89);
lean_dec(x_66);
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
lean_dec(x_60);
x_92 = !lean_is_exclusive(x_62);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; 
x_93 = lean_ctor_get(x_62, 0);
lean_dec(x_93);
x_94 = lean_box(1);
lean_ctor_set(x_62, 0, x_94);
return x_62;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_62, 1);
lean_inc(x_95);
lean_dec(x_62);
x_96 = lean_box(1);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
}
}
else
{
uint8_t x_98; 
x_98 = !lean_is_exclusive(x_59);
if (x_98 == 0)
{
return x_59;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_59, 0);
x_100 = lean_ctor_get(x_59, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_59);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
block_58:
{
lean_object* x_23; 
x_23 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_10, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_21, x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_28);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
x_32 = lean_box(0);
lean_ctor_set(x_29, 0, x_32);
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_29, 1);
lean_inc(x_33);
lean_dec(x_29);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
else
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_29);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_29, 0);
lean_dec(x_37);
x_38 = lean_box(1);
lean_ctor_set(x_29, 0, x_38);
return x_29;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_29, 1);
lean_inc(x_39);
lean_dec(x_29);
x_40 = lean_box(1);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_27);
if (x_42 == 0)
{
return x_27;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_27, 0);
x_44 = lean_ctor_get(x_27, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_27);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_25);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_25, 0);
lean_dec(x_47);
x_48 = lean_box(1);
lean_ctor_set(x_25, 0, x_48);
return x_25;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_25, 1);
lean_inc(x_49);
lean_dec(x_25);
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
x_52 = !lean_is_exclusive(x_23);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_23, 0);
lean_dec(x_53);
x_54 = lean_box(1);
lean_ctor_set(x_23, 0, x_54);
return x_23;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_23, 1);
lean_inc(x_55);
lean_dec(x_23);
x_56 = lean_box(1);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
}
}
else
{
uint8_t x_102; 
lean_dec(x_8);
lean_dec(x_4);
x_102 = !lean_is_exclusive(x_11);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; 
x_103 = lean_ctor_get(x_11, 0);
lean_dec(x_103);
x_104 = lean_box(1);
lean_ctor_set(x_11, 0, x_104);
return x_11;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_11, 1);
lean_inc(x_105);
lean_dec(x_11);
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
uint8_t x_108; 
lean_dec(x_4);
x_108 = !lean_is_exclusive(x_7);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_7, 0);
lean_dec(x_109);
x_110 = lean_box(1);
lean_ctor_set(x_7, 0, x_110);
return x_7;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_7, 1);
lean_inc(x_111);
lean_dec(x_7);
x_112 = lean_box(1);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_111);
return x_113;
}
}
}
else
{
uint8_t x_114; 
x_114 = !lean_is_exclusive(x_3);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; 
x_115 = lean_ctor_get(x_3, 0);
lean_dec(x_115);
x_116 = lean_box(1);
lean_ctor_set(x_3, 0, x_116);
return x_3;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_3, 1);
lean_inc(x_117);
lean_dec(x_3);
x_118 = lean_box(1);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_117);
return x_119;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_clint__dispatch(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_clint__dispatch___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_clint__dispatch___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_clint__dispatch(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_clint__store___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_clint__load___closed__4;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_clint__store(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = 11;
x_6 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_46; lean_object* x_47; uint8_t x_48; uint8_t x_86; uint8_t x_111; uint8_t x_148; uint8_t x_186; uint8_t x_211; lean_object* x_258; uint8_t x_259; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_9 = x_6;
} else {
 lean_dec_ref(x_6);
 x_9 = lean_box(0);
}
x_46 = lean_unsigned_to_nat(64u);
x_47 = l_BitVec_sub(x_46, x_1, x_7);
lean_dec(x_7);
x_258 = l_LeanRV64DExecutable_Functions_MSIP__BASE;
x_259 = lean_nat_dec_eq(x_47, x_258);
if (x_259 == 0)
{
x_211 = x_259;
goto block_257;
}
else
{
lean_object* x_260; uint8_t x_261; 
x_260 = lean_unsigned_to_nat(8u);
x_261 = lean_nat_dec_eq(x_2, x_260);
if (x_261 == 0)
{
lean_object* x_262; uint8_t x_263; 
x_262 = lean_unsigned_to_nat(4u);
x_263 = lean_nat_dec_eq(x_2, x_262);
x_211 = x_263;
goto block_257;
}
else
{
x_211 = x_261;
goto block_257;
}
}
block_45:
{
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_LeanRV64DExecutable_Functions_clint__store___closed__0;
if (lean_is_scalar(x_9)) {
 x_12 = lean_alloc_ctor(0, 2, 0);
} else {
 x_12 = x_9;
}
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
else
{
uint8_t x_13; lean_object* x_14; 
lean_dec(x_9);
x_13 = 71;
x_14 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_13, x_8);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(64u);
x_18 = lean_unsigned_to_nat(63u);
x_19 = lean_unsigned_to_nat(32u);
x_20 = lean_unsigned_to_nat(8u);
x_21 = lean_nat_mul(x_20, x_2);
x_22 = l_BitVec_setWidth(x_21, x_19, x_3);
lean_dec(x_21);
x_23 = l_Sail_BitVec_updateSubrange(x_17, x_15, x_18, x_19, x_22);
lean_dec(x_22);
lean_dec(x_15);
x_24 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_13, x_23, x_16);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_LeanRV64DExecutable_Functions_clint__dispatch___redArg(x_25);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
x_29 = lean_box(x_10);
x_30 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_26, 0, x_30);
return x_26;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_26, 1);
lean_inc(x_31);
lean_dec(x_26);
x_32 = lean_box(x_10);
x_33 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_31);
return x_34;
}
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_26);
if (x_35 == 0)
{
return x_26;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_26, 0);
x_37 = lean_ctor_get(x_26, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_26);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_14);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_14, 0);
lean_dec(x_40);
x_41 = lean_box(1);
lean_ctor_set(x_14, 0, x_41);
return x_14;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_14, 1);
lean_inc(x_42);
lean_dec(x_14);
x_43 = lean_box(1);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
}
}
block_85:
{
if (x_48 == 0)
{
lean_object* x_49; uint8_t x_50; 
x_49 = l_LeanRV64DExecutable_Functions_MTIME__BASE__HI;
x_50 = lean_nat_dec_eq(x_47, x_49);
lean_dec(x_47);
if (x_50 == 0)
{
x_10 = x_50;
goto block_45;
}
else
{
lean_object* x_51; uint8_t x_52; 
x_51 = lean_unsigned_to_nat(4u);
x_52 = lean_nat_dec_eq(x_2, x_51);
x_10 = x_52;
goto block_45;
}
}
else
{
uint8_t x_53; lean_object* x_54; 
lean_dec(x_47);
lean_dec(x_9);
x_53 = 71;
x_54 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_53, x_8);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_unsigned_to_nat(31u);
x_58 = lean_unsigned_to_nat(0u);
x_59 = lean_unsigned_to_nat(8u);
x_60 = lean_nat_mul(x_59, x_2);
x_61 = lean_unsigned_to_nat(32u);
x_62 = l_BitVec_setWidth(x_60, x_61, x_3);
lean_dec(x_60);
x_63 = l_Sail_BitVec_updateSubrange(x_46, x_55, x_57, x_58, x_62);
lean_dec(x_62);
lean_dec(x_55);
x_64 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_53, x_63, x_56);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = l_LeanRV64DExecutable_Functions_clint__dispatch___redArg(x_65);
if (lean_obj_tag(x_66) == 0)
{
uint8_t x_67; 
x_67 = !lean_is_exclusive(x_66);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_66, 0);
lean_dec(x_68);
x_69 = lean_box(x_48);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_66, 0, x_70);
return x_66;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_71 = lean_ctor_get(x_66, 1);
lean_inc(x_71);
lean_dec(x_66);
x_72 = lean_box(x_48);
x_73 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_73, 0, x_72);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_71);
return x_74;
}
}
else
{
uint8_t x_75; 
x_75 = !lean_is_exclusive(x_66);
if (x_75 == 0)
{
return x_66;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_66, 0);
x_77 = lean_ctor_get(x_66, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_66);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
uint8_t x_79; 
x_79 = !lean_is_exclusive(x_54);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; 
x_80 = lean_ctor_get(x_54, 0);
lean_dec(x_80);
x_81 = lean_box(1);
lean_ctor_set(x_54, 0, x_81);
return x_54;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_54, 1);
lean_inc(x_82);
lean_dec(x_54);
x_83 = lean_box(1);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_82);
return x_84;
}
}
}
}
block_110:
{
if (x_86 == 0)
{
lean_object* x_87; uint8_t x_88; 
x_87 = l_LeanRV64DExecutable_Functions_MTIME__BASE;
x_88 = lean_nat_dec_eq(x_47, x_87);
if (x_88 == 0)
{
x_48 = x_88;
goto block_85;
}
else
{
lean_object* x_89; uint8_t x_90; 
x_89 = lean_unsigned_to_nat(4u);
x_90 = lean_nat_dec_eq(x_2, x_89);
x_48 = x_90;
goto block_85;
}
}
else
{
uint8_t x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_47);
lean_dec(x_9);
x_91 = 71;
x_92 = lean_unsigned_to_nat(8u);
x_93 = lean_nat_mul(x_92, x_2);
x_94 = l_BitVec_setWidth(x_93, x_46, x_3);
lean_dec(x_93);
x_95 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_91, x_94, x_8);
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
lean_dec(x_95);
x_97 = l_LeanRV64DExecutable_Functions_clint__dispatch___redArg(x_96);
if (lean_obj_tag(x_97) == 0)
{
uint8_t x_98; 
x_98 = !lean_is_exclusive(x_97);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_97, 0);
lean_dec(x_99);
x_100 = lean_box(x_86);
x_101 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_97, 0, x_101);
return x_97;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_102 = lean_ctor_get(x_97, 1);
lean_inc(x_102);
lean_dec(x_97);
x_103 = lean_box(x_86);
x_104 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_104, 0, x_103);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_102);
return x_105;
}
}
else
{
uint8_t x_106; 
x_106 = !lean_is_exclusive(x_97);
if (x_106 == 0)
{
return x_97;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_97, 0);
x_108 = lean_ctor_get(x_97, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_97);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
}
block_147:
{
if (x_111 == 0)
{
lean_object* x_112; uint8_t x_113; 
x_112 = l_LeanRV64DExecutable_Functions_MTIME__BASE;
x_113 = lean_nat_dec_eq(x_47, x_112);
if (x_113 == 0)
{
x_86 = x_113;
goto block_110;
}
else
{
lean_object* x_114; uint8_t x_115; 
x_114 = lean_unsigned_to_nat(8u);
x_115 = lean_nat_dec_eq(x_2, x_114);
x_86 = x_115;
goto block_110;
}
}
else
{
uint8_t x_116; lean_object* x_117; 
lean_dec(x_47);
lean_dec(x_9);
x_116 = 9;
x_117 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_116, x_8);
if (lean_obj_tag(x_117) == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
lean_dec(x_117);
x_120 = lean_unsigned_to_nat(63u);
x_121 = lean_unsigned_to_nat(32u);
x_122 = lean_unsigned_to_nat(8u);
x_123 = lean_nat_mul(x_122, x_2);
x_124 = l_BitVec_setWidth(x_123, x_121, x_3);
lean_dec(x_123);
x_125 = l_Sail_BitVec_updateSubrange(x_46, x_118, x_120, x_121, x_124);
lean_dec(x_124);
lean_dec(x_118);
x_126 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_116, x_125, x_119);
x_127 = lean_ctor_get(x_126, 1);
lean_inc(x_127);
lean_dec(x_126);
x_128 = l_LeanRV64DExecutable_Functions_clint__dispatch___redArg(x_127);
if (lean_obj_tag(x_128) == 0)
{
uint8_t x_129; 
x_129 = !lean_is_exclusive(x_128);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = lean_ctor_get(x_128, 0);
lean_dec(x_130);
x_131 = lean_box(x_111);
x_132 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_128, 0, x_132);
return x_128;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_133 = lean_ctor_get(x_128, 1);
lean_inc(x_133);
lean_dec(x_128);
x_134 = lean_box(x_111);
x_135 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_135, 0, x_134);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_133);
return x_136;
}
}
else
{
uint8_t x_137; 
x_137 = !lean_is_exclusive(x_128);
if (x_137 == 0)
{
return x_128;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_138 = lean_ctor_get(x_128, 0);
x_139 = lean_ctor_get(x_128, 1);
lean_inc(x_139);
lean_inc(x_138);
lean_dec(x_128);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
return x_140;
}
}
}
else
{
uint8_t x_141; 
x_141 = !lean_is_exclusive(x_117);
if (x_141 == 0)
{
lean_object* x_142; lean_object* x_143; 
x_142 = lean_ctor_get(x_117, 0);
lean_dec(x_142);
x_143 = lean_box(1);
lean_ctor_set(x_117, 0, x_143);
return x_117;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_117, 1);
lean_inc(x_144);
lean_dec(x_117);
x_145 = lean_box(1);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_144);
return x_146;
}
}
}
}
block_185:
{
if (x_148 == 0)
{
lean_object* x_149; uint8_t x_150; 
x_149 = l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI;
x_150 = lean_nat_dec_eq(x_47, x_149);
if (x_150 == 0)
{
x_111 = x_150;
goto block_147;
}
else
{
lean_object* x_151; uint8_t x_152; 
x_151 = lean_unsigned_to_nat(4u);
x_152 = lean_nat_dec_eq(x_2, x_151);
x_111 = x_152;
goto block_147;
}
}
else
{
uint8_t x_153; lean_object* x_154; 
lean_dec(x_47);
lean_dec(x_9);
x_153 = 9;
x_154 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_153, x_8);
if (lean_obj_tag(x_154) == 0)
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_154, 1);
lean_inc(x_156);
lean_dec(x_154);
x_157 = lean_unsigned_to_nat(31u);
x_158 = lean_unsigned_to_nat(0u);
x_159 = lean_unsigned_to_nat(8u);
x_160 = lean_nat_mul(x_159, x_2);
x_161 = lean_unsigned_to_nat(32u);
x_162 = l_BitVec_setWidth(x_160, x_161, x_3);
lean_dec(x_160);
x_163 = l_Sail_BitVec_updateSubrange(x_46, x_155, x_157, x_158, x_162);
lean_dec(x_162);
lean_dec(x_155);
x_164 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_153, x_163, x_156);
x_165 = lean_ctor_get(x_164, 1);
lean_inc(x_165);
lean_dec(x_164);
x_166 = l_LeanRV64DExecutable_Functions_clint__dispatch___redArg(x_165);
if (lean_obj_tag(x_166) == 0)
{
uint8_t x_167; 
x_167 = !lean_is_exclusive(x_166);
if (x_167 == 0)
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_166, 0);
lean_dec(x_168);
x_169 = lean_box(x_148);
x_170 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_170, 0, x_169);
lean_ctor_set(x_166, 0, x_170);
return x_166;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_171 = lean_ctor_get(x_166, 1);
lean_inc(x_171);
lean_dec(x_166);
x_172 = lean_box(x_148);
x_173 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_173, 0, x_172);
x_174 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_171);
return x_174;
}
}
else
{
uint8_t x_175; 
x_175 = !lean_is_exclusive(x_166);
if (x_175 == 0)
{
return x_166;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_176 = lean_ctor_get(x_166, 0);
x_177 = lean_ctor_get(x_166, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_166);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_176);
lean_ctor_set(x_178, 1, x_177);
return x_178;
}
}
}
else
{
uint8_t x_179; 
x_179 = !lean_is_exclusive(x_154);
if (x_179 == 0)
{
lean_object* x_180; lean_object* x_181; 
x_180 = lean_ctor_get(x_154, 0);
lean_dec(x_180);
x_181 = lean_box(1);
lean_ctor_set(x_154, 0, x_181);
return x_154;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_154, 1);
lean_inc(x_182);
lean_dec(x_154);
x_183 = lean_box(1);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_182);
return x_184;
}
}
}
}
block_210:
{
if (x_186 == 0)
{
lean_object* x_187; uint8_t x_188; 
x_187 = l_LeanRV64DExecutable_Functions_MTIMECMP__BASE;
x_188 = lean_nat_dec_eq(x_47, x_187);
if (x_188 == 0)
{
x_148 = x_188;
goto block_185;
}
else
{
lean_object* x_189; uint8_t x_190; 
x_189 = lean_unsigned_to_nat(4u);
x_190 = lean_nat_dec_eq(x_2, x_189);
x_148 = x_190;
goto block_185;
}
}
else
{
uint8_t x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
lean_dec(x_47);
lean_dec(x_9);
x_191 = 9;
x_192 = lean_unsigned_to_nat(8u);
x_193 = lean_nat_mul(x_192, x_2);
x_194 = l_BitVec_setWidth(x_193, x_46, x_3);
lean_dec(x_193);
x_195 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_191, x_194, x_8);
x_196 = lean_ctor_get(x_195, 1);
lean_inc(x_196);
lean_dec(x_195);
x_197 = l_LeanRV64DExecutable_Functions_clint__dispatch___redArg(x_196);
if (lean_obj_tag(x_197) == 0)
{
uint8_t x_198; 
x_198 = !lean_is_exclusive(x_197);
if (x_198 == 0)
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_199 = lean_ctor_get(x_197, 0);
lean_dec(x_199);
x_200 = lean_box(x_186);
x_201 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_197, 0, x_201);
return x_197;
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_202 = lean_ctor_get(x_197, 1);
lean_inc(x_202);
lean_dec(x_197);
x_203 = lean_box(x_186);
x_204 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_204, 0, x_203);
x_205 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_205, 0, x_204);
lean_ctor_set(x_205, 1, x_202);
return x_205;
}
}
else
{
uint8_t x_206; 
x_206 = !lean_is_exclusive(x_197);
if (x_206 == 0)
{
return x_197;
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; 
x_207 = lean_ctor_get(x_197, 0);
x_208 = lean_ctor_get(x_197, 1);
lean_inc(x_208);
lean_inc(x_207);
lean_dec(x_197);
x_209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_209, 0, x_207);
lean_ctor_set(x_209, 1, x_208);
return x_209;
}
}
}
}
block_257:
{
if (x_211 == 0)
{
lean_object* x_212; uint8_t x_213; 
x_212 = l_LeanRV64DExecutable_Functions_MTIMECMP__BASE;
x_213 = lean_nat_dec_eq(x_47, x_212);
if (x_213 == 0)
{
x_186 = x_213;
goto block_210;
}
else
{
lean_object* x_214; uint8_t x_215; 
x_214 = lean_unsigned_to_nat(8u);
x_215 = lean_nat_dec_eq(x_2, x_214);
x_186 = x_215;
goto block_210;
}
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
lean_dec(x_47);
lean_dec(x_9);
x_216 = lean_unsigned_to_nat(8u);
x_217 = lean_nat_mul(x_216, x_2);
x_218 = lean_unsigned_to_nat(0u);
x_219 = l_Sail_BitVec_access(x_217, x_3, x_218);
lean_dec(x_217);
x_220 = l_LeanRV64DExecutable_Functions_bit__str(x_219, x_8);
if (lean_obj_tag(x_220) == 0)
{
lean_object* x_221; uint8_t x_222; lean_object* x_223; 
x_221 = lean_ctor_get(x_220, 1);
lean_inc(x_221);
lean_dec(x_220);
x_222 = 83;
x_223 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_222, x_221);
if (lean_obj_tag(x_223) == 0)
{
lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
x_224 = lean_ctor_get(x_223, 0);
lean_inc(x_224);
x_225 = lean_ctor_get(x_223, 1);
lean_inc(x_225);
lean_dec(x_223);
x_226 = lean_unsigned_to_nat(3u);
x_227 = l_LeanRV64DExecutable_Functions_clint__dispatch___redArg___closed__0;
x_228 = lean_box(0);
x_229 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_229, 0, x_219);
lean_ctor_set(x_229, 1, x_228);
x_230 = l_Sail_BitVec_join1(x_229);
x_231 = l_Sail_BitVec_updateSubrange(x_227, x_224, x_226, x_226, x_230);
lean_dec(x_230);
lean_dec(x_224);
x_232 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_222, x_231, x_225);
x_233 = lean_ctor_get(x_232, 1);
lean_inc(x_233);
lean_dec(x_232);
x_234 = l_LeanRV64DExecutable_Functions_clint__dispatch___redArg(x_233);
if (lean_obj_tag(x_234) == 0)
{
uint8_t x_235; 
x_235 = !lean_is_exclusive(x_234);
if (x_235 == 0)
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_236 = lean_ctor_get(x_234, 0);
lean_dec(x_236);
x_237 = lean_box(x_211);
x_238 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_238, 0, x_237);
lean_ctor_set(x_234, 0, x_238);
return x_234;
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_239 = lean_ctor_get(x_234, 1);
lean_inc(x_239);
lean_dec(x_234);
x_240 = lean_box(x_211);
x_241 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_241, 0, x_240);
x_242 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_242, 0, x_241);
lean_ctor_set(x_242, 1, x_239);
return x_242;
}
}
else
{
uint8_t x_243; 
x_243 = !lean_is_exclusive(x_234);
if (x_243 == 0)
{
return x_234;
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_244 = lean_ctor_get(x_234, 0);
x_245 = lean_ctor_get(x_234, 1);
lean_inc(x_245);
lean_inc(x_244);
lean_dec(x_234);
x_246 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_246, 0, x_244);
lean_ctor_set(x_246, 1, x_245);
return x_246;
}
}
}
else
{
uint8_t x_247; 
lean_dec(x_219);
x_247 = !lean_is_exclusive(x_223);
if (x_247 == 0)
{
lean_object* x_248; lean_object* x_249; 
x_248 = lean_ctor_get(x_223, 0);
lean_dec(x_248);
x_249 = lean_box(1);
lean_ctor_set(x_223, 0, x_249);
return x_223;
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; 
x_250 = lean_ctor_get(x_223, 1);
lean_inc(x_250);
lean_dec(x_223);
x_251 = lean_box(1);
x_252 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_252, 0, x_251);
lean_ctor_set(x_252, 1, x_250);
return x_252;
}
}
}
else
{
uint8_t x_253; 
lean_dec(x_219);
x_253 = !lean_is_exclusive(x_220);
if (x_253 == 0)
{
return x_220;
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; 
x_254 = lean_ctor_get(x_220, 0);
x_255 = lean_ctor_get(x_220, 1);
lean_inc(x_255);
lean_inc(x_254);
lean_dec(x_220);
x_256 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_256, 0, x_254);
lean_ctor_set(x_256, 1, x_255);
return x_256;
}
}
}
}
}
else
{
uint8_t x_264; 
x_264 = !lean_is_exclusive(x_6);
if (x_264 == 0)
{
lean_object* x_265; lean_object* x_266; 
x_265 = lean_ctor_get(x_6, 0);
lean_dec(x_265);
x_266 = lean_box(1);
lean_ctor_set(x_6, 0, x_266);
return x_6;
}
else
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; 
x_267 = lean_ctor_get(x_6, 1);
lean_inc(x_267);
lean_dec(x_6);
x_268 = lean_box(1);
x_269 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_269, 0, x_268);
lean_ctor_set(x_269, 1, x_267);
return x_269;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_clint__store___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LeanRV64DExecutable_Functions_clint__store(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_tick__clock___redArg___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_tick__clock___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_20; lean_object* x_21; 
x_20 = 90;
x_21 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_20, x_1);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_unbox(x_22);
lean_dec(x_22);
x_25 = l_LeanRV64DExecutable_Functions_should__inc__mcycle(x_24, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = 72;
x_29 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_28, x_27);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = lean_unbox(x_26);
lean_dec(x_26);
if (x_30 == 0)
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_2 = x_31;
goto block_19;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_32 = lean_ctor_get(x_29, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_29, 1);
lean_inc(x_33);
lean_dec(x_29);
x_34 = lean_unsigned_to_nat(64u);
x_35 = l_LeanRV64DExecutable_Functions_tick__clock___redArg___closed__0;
x_36 = l_Sail_BitVec_addInt(x_34, x_32, x_35);
lean_dec(x_32);
x_37 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_28, x_36, x_33);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_2 = x_38;
goto block_19;
}
}
else
{
uint8_t x_39; 
lean_dec(x_26);
x_39 = !lean_is_exclusive(x_29);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_29, 0);
lean_dec(x_40);
x_41 = lean_box(1);
lean_ctor_set(x_29, 0, x_41);
return x_29;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_29, 1);
lean_inc(x_42);
lean_dec(x_29);
x_43 = lean_box(1);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
}
else
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_25);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_25, 0);
lean_dec(x_46);
x_47 = lean_box(1);
lean_ctor_set(x_25, 0, x_47);
return x_25;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_25, 1);
lean_inc(x_48);
lean_dec(x_25);
x_49 = lean_box(1);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
}
else
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_21);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_21, 0);
lean_dec(x_52);
x_53 = lean_box(1);
lean_ctor_set(x_21, 0, x_53);
return x_21;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_21, 1);
lean_inc(x_54);
lean_dec(x_21);
x_55 = lean_box(1);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
}
block_19:
{
uint8_t x_3; lean_object* x_4; 
x_3 = 71;
x_4 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_unsigned_to_nat(64u);
x_8 = l_LeanRV64DExecutable_Functions_tick__clock___redArg___closed__0;
x_9 = l_Sail_BitVec_addInt(x_7, x_5, x_8);
lean_dec(x_5);
x_10 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_3, x_9, x_6);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_LeanRV64DExecutable_Functions_clint__dispatch___redArg(x_11);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_4);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_4, 0);
lean_dec(x_14);
x_15 = lean_box(1);
lean_ctor_set(x_4, 0, x_15);
return x_4;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
lean_dec(x_4);
x_17 = lean_box(1);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_tick__clock(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_tick__clock___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_tick__clock___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_tick__clock(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__htif__cmd___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(64u);
x_3 = l_Sail_trivialChoiceSource;
x_4 = l_PreSail_undefined__bitvector___at___LeanRV64DExecutable_Functions_undefined__Misa_spec__0___redArg(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__htif__cmd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_undefined__htif__cmd___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_undefined__htif__cmd___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_undefined__htif__cmd(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_Mk__htif__cmd(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_Mk__htif__cmd___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_Mk__htif__cmd(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___get__htif__cmd__cmd(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(55u);
x_3 = lean_unsigned_to_nat(48u);
x_4 = l_BitVec_extractLsb___redArg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___get__htif__cmd__cmd___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions___get__htif__cmd__cmd(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___update__htif__cmd__cmd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_unsigned_to_nat(64u);
x_4 = lean_unsigned_to_nat(55u);
x_5 = lean_unsigned_to_nat(48u);
x_6 = l_Sail_BitVec_updateSubrange(x_3, x_1, x_4, x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___update__htif__cmd__cmd___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions___update__htif__cmd__cmd(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___set__htif__cmd__cmd(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
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
x_7 = l_LeanRV64DExecutable_Functions___update__htif__cmd__cmd(x_5, x_2);
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
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___set__htif__cmd__cmd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_LeanRV64DExecutable_Functions___set__htif__cmd__cmd(x_4, x_2, x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___get__htif__cmd__device(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(63u);
x_3 = lean_unsigned_to_nat(56u);
x_4 = l_BitVec_extractLsb___redArg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___get__htif__cmd__device___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions___get__htif__cmd__device(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___update__htif__cmd__device(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_unsigned_to_nat(64u);
x_4 = lean_unsigned_to_nat(63u);
x_5 = lean_unsigned_to_nat(56u);
x_6 = l_Sail_BitVec_updateSubrange(x_3, x_1, x_4, x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___update__htif__cmd__device___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions___update__htif__cmd__device(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___set__htif__cmd__device(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
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
x_7 = l_LeanRV64DExecutable_Functions___update__htif__cmd__device(x_5, x_2);
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
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___set__htif__cmd__device___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_LeanRV64DExecutable_Functions___set__htif__cmd__device(x_4, x_2, x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___get__htif__cmd__payload(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(47u);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_BitVec_extractLsb___redArg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___get__htif__cmd__payload___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions___get__htif__cmd__payload(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___update__htif__cmd__payload(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_unsigned_to_nat(64u);
x_4 = lean_unsigned_to_nat(47u);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Sail_BitVec_updateSubrange(x_3, x_1, x_4, x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___update__htif__cmd__payload___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions___update__htif__cmd__payload(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___set__htif__cmd__payload(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
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
x_7 = l_LeanRV64DExecutable_Functions___update__htif__cmd__payload(x_5, x_2);
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
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions___set__htif__cmd__payload___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_LeanRV64DExecutable_Functions___set__htif__cmd__payload(x_4, x_2, x_3);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_reset__htif___redArg___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_reset__htif___redArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(4u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__htif___redArg(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_2 = 4;
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_LeanRV64DExecutable_Functions_reset__htif___redArg___closed__0;
x_5 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_2, x_4, x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = 3;
x_8 = l_LeanRV64DExecutable_Functions_reset__htif___redArg___closed__1;
x_9 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_7, x_8, x_6);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = 7;
x_12 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_11, x_3, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__htif(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_reset__htif___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_reset__htif___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_reset__htif(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_htif__load___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_htif__load(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = 7;
x_6 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_8 = x_6;
} else {
 lean_dec_ref(x_6);
 x_8 = lean_box(0);
}
x_9 = lean_unsigned_to_nat(64u);
x_10 = l_plat__htif__tohost___redArg(x_9, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
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
x_14 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_5, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_37; lean_object* x_38; uint8_t x_39; uint8_t x_72; lean_object* x_99; uint8_t x_100; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_17 = x_14;
} else {
 lean_dec_ref(x_14);
 x_17 = lean_box(0);
}
x_99 = lean_unsigned_to_nat(8u);
x_100 = lean_nat_dec_eq(x_3, x_99);
if (x_100 == 0)
{
lean_dec(x_11);
x_72 = x_100;
goto block_98;
}
else
{
uint8_t x_101; 
x_101 = lean_nat_dec_eq(x_2, x_11);
lean_dec(x_11);
x_72 = x_101;
goto block_98;
}
block_36:
{
if (x_20 == 0)
{
lean_dec(x_18);
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_21; lean_object* x_22; 
x_21 = l_LeanRV64DExecutable_Functions_clint__load___closed__1;
if (lean_is_scalar(x_17)) {
 x_22 = lean_alloc_ctor(0, 2, 0);
} else {
 x_22 = x_17;
}
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
return x_22;
}
case 3:
{
lean_object* x_23; lean_object* x_24; 
x_23 = l_LeanRV64DExecutable_Functions_clint__load___closed__3;
if (lean_is_scalar(x_17)) {
 x_24 = lean_alloc_ctor(0, 2, 0);
} else {
 x_24 = x_17;
}
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_19);
return x_24;
}
default: 
{
lean_object* x_25; lean_object* x_26; 
x_25 = l_LeanRV64DExecutable_Functions_clint__load___closed__5;
if (lean_is_scalar(x_17)) {
 x_26 = lean_alloc_ctor(0, 2, 0);
} else {
 x_26 = x_17;
}
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_19);
return x_26;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_27 = lean_unsigned_to_nat(32u);
x_28 = lean_unsigned_to_nat(8u);
x_29 = lean_nat_mul(x_28, x_3);
x_30 = lean_unsigned_to_nat(63u);
x_31 = l_BitVec_extractLsb___redArg(x_30, x_27, x_18);
lean_dec(x_18);
x_32 = l_BitVec_setWidth(x_27, x_27, x_31);
lean_dec(x_31);
x_33 = l_BitVec_setWidth(x_27, x_29, x_32);
lean_dec(x_32);
lean_dec(x_29);
x_34 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_34, 0, x_33);
if (lean_is_scalar(x_17)) {
 x_35 = lean_alloc_ctor(0, 2, 0);
} else {
 x_35 = x_17;
}
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_19);
return x_35;
}
}
block_71:
{
if (x_39 == 0)
{
lean_object* x_40; 
lean_dec(x_37);
lean_dec(x_13);
x_40 = l_plat__htif__tohost___redArg(x_9, x_38);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_5, x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_unsigned_to_nat(4u);
x_47 = lean_nat_dec_eq(x_3, x_46);
if (x_47 == 0)
{
lean_dec(x_41);
x_18 = x_44;
x_19 = x_45;
x_20 = x_47;
goto block_36;
}
else
{
lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_48 = l_LeanRV64DExecutable_Functions_htif__load___closed__0;
x_49 = l_Sail_BitVec_addInt(x_9, x_41, x_48);
lean_dec(x_41);
x_50 = lean_nat_dec_eq(x_2, x_49);
lean_dec(x_49);
x_18 = x_44;
x_19 = x_45;
x_20 = x_50;
goto block_36;
}
}
else
{
uint8_t x_51; 
lean_dec(x_41);
lean_dec(x_17);
x_51 = !lean_is_exclusive(x_43);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_43, 0);
lean_dec(x_52);
x_53 = lean_box(1);
lean_ctor_set(x_43, 0, x_53);
return x_43;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_43, 1);
lean_inc(x_54);
lean_dec(x_43);
x_55 = lean_box(1);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_17);
x_57 = !lean_is_exclusive(x_40);
if (x_57 == 0)
{
return x_40;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_40, 0);
x_59 = lean_ctor_get(x_40, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_40);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_17);
x_61 = lean_unsigned_to_nat(32u);
x_62 = lean_unsigned_to_nat(8u);
x_63 = lean_nat_mul(x_62, x_3);
x_64 = lean_unsigned_to_nat(31u);
x_65 = lean_unsigned_to_nat(0u);
x_66 = l_BitVec_extractLsb___redArg(x_64, x_65, x_37);
lean_dec(x_37);
x_67 = l_BitVec_setWidth(x_61, x_61, x_66);
lean_dec(x_66);
x_68 = l_BitVec_setWidth(x_61, x_63, x_67);
lean_dec(x_67);
lean_dec(x_63);
x_69 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_69, 0, x_68);
if (lean_is_scalar(x_13)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_13;
}
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_38);
return x_70;
}
}
block_98:
{
if (x_72 == 0)
{
lean_object* x_73; 
lean_dec(x_15);
lean_dec(x_8);
x_73 = l_plat__htif__tohost___redArg(x_9, x_16);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_5, x_75);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_unsigned_to_nat(4u);
x_80 = lean_nat_dec_eq(x_3, x_79);
if (x_80 == 0)
{
lean_dec(x_74);
x_37 = x_77;
x_38 = x_78;
x_39 = x_80;
goto block_71;
}
else
{
uint8_t x_81; 
x_81 = lean_nat_dec_eq(x_2, x_74);
lean_dec(x_74);
x_37 = x_77;
x_38 = x_78;
x_39 = x_81;
goto block_71;
}
}
else
{
uint8_t x_82; 
lean_dec(x_74);
lean_dec(x_17);
lean_dec(x_13);
x_82 = !lean_is_exclusive(x_76);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_76, 0);
lean_dec(x_83);
x_84 = lean_box(1);
lean_ctor_set(x_76, 0, x_84);
return x_76;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_76, 1);
lean_inc(x_85);
lean_dec(x_76);
x_86 = lean_box(1);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_85);
return x_87;
}
}
}
else
{
uint8_t x_88; 
lean_dec(x_17);
lean_dec(x_13);
x_88 = !lean_is_exclusive(x_73);
if (x_88 == 0)
{
return x_73;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_73, 0);
x_90 = lean_ctor_get(x_73, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_73);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_17);
lean_dec(x_13);
x_92 = lean_unsigned_to_nat(8u);
x_93 = lean_nat_mul(x_92, x_3);
x_94 = l_BitVec_setWidth(x_9, x_9, x_15);
lean_dec(x_15);
x_95 = l_BitVec_setWidth(x_9, x_93, x_94);
lean_dec(x_94);
lean_dec(x_93);
x_96 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_96, 0, x_95);
if (lean_is_scalar(x_8)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_8;
}
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_16);
return x_97;
}
}
}
else
{
uint8_t x_102; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_8);
x_102 = !lean_is_exclusive(x_14);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; 
x_103 = lean_ctor_get(x_14, 0);
lean_dec(x_103);
x_104 = lean_box(1);
lean_ctor_set(x_14, 0, x_104);
return x_14;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_14, 1);
lean_inc(x_105);
lean_dec(x_14);
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
uint8_t x_108; 
lean_dec(x_8);
x_108 = !lean_is_exclusive(x_10);
if (x_108 == 0)
{
return x_10;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_10, 0);
x_110 = lean_ctor_get(x_10, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_10);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
else
{
uint8_t x_112; 
x_112 = !lean_is_exclusive(x_6);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; 
x_113 = lean_ctor_get(x_6, 0);
lean_dec(x_113);
x_114 = lean_box(1);
lean_ctor_set(x_6, 0, x_114);
return x_6;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_115 = lean_ctor_get(x_6, 1);
lean_inc(x_115);
lean_dec(x_6);
x_116 = lean_box(1);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_115);
return x_117;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_htif__load___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LeanRV64DExecutable_Functions_htif__load(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("htif-\?\?\?\? cmd: ", 15, 15);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Unknown term cmd: ", 18, 18);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_BitVec_ofNat(x_1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_htif__store___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = l_LeanRV64DExecutable_Functions___get__htif__cmd__device(x_1);
x_15 = l_BitVec_ofNat(x_2, x_3);
x_16 = lean_nat_dec_eq(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_6);
x_17 = lean_unsigned_to_nat(1u);
x_18 = l_BitVec_ofNat(x_2, x_17);
x_19 = lean_nat_dec_eq(x_14, x_18);
lean_dec(x_14);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_18);
lean_dec(x_15);
x_20 = l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__0;
x_21 = lean_nat_mul(x_2, x_4);
lean_dec(x_2);
x_22 = l_Sail_BitVec_toFormatted(x_21, x_5);
x_23 = lean_string_append(x_20, x_22);
lean_dec(x_22);
x_24 = l_PreSail_print__effect___at___cancel__reservation_spec__0___redArg(x_23, x_9);
return x_24;
}
else
{
lean_object* x_25; uint8_t x_26; 
lean_dec(x_5);
x_25 = l_LeanRV64DExecutable_Functions___get__htif__cmd__cmd(x_1);
x_26 = lean_nat_dec_eq(x_25, x_15);
lean_dec(x_15);
if (x_26 == 0)
{
uint8_t x_27; 
x_27 = lean_nat_dec_eq(x_25, x_18);
lean_dec(x_18);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__1;
x_29 = l_Sail_BitVec_toFormatted(x_2, x_25);
x_30 = lean_string_append(x_28, x_29);
lean_dec(x_29);
x_31 = l_PreSail_print__effect___at___cancel__reservation_spec__0___redArg(x_30, x_9);
x_10 = x_31;
goto block_13;
}
else
{
lean_object* x_32; 
lean_dec(x_25);
lean_dec(x_2);
x_32 = l_plat__term__write___redArg(x_9);
x_10 = x_32;
goto block_13;
}
}
else
{
lean_object* x_33; 
lean_dec(x_25);
lean_dec(x_18);
lean_dec(x_2);
x_33 = l_LeanRV64DExecutable_Functions_reset__htif___redArg(x_9);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_2);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_unsigned_to_nat(48u);
x_36 = l_LeanRV64DExecutable_Functions___get__htif__cmd__payload(x_1);
x_37 = l_Sail_BitVec_access(x_35, x_36, x_3);
x_38 = l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__2;
x_39 = lean_nat_dec_eq(x_37, x_38);
lean_dec(x_37);
if (x_39 == 0)
{
lean_object* x_40; 
lean_dec(x_36);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_6);
lean_ctor_set(x_40, 1, x_9);
return x_40;
}
else
{
uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_6);
x_41 = 6;
x_42 = lean_box(x_39);
x_43 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_41, x_42, x_9);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = 5;
x_46 = l_BitVec_setWidth(x_35, x_7, x_36);
lean_dec(x_36);
x_47 = lean_nat_shiftr(x_46, x_34);
lean_dec(x_46);
x_48 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_45, x_47, x_44);
return x_48;
}
}
block_13:
{
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_LeanRV64DExecutable_Functions_reset__htif___redArg(x_11);
return x_12;
}
else
{
return x_10;
}
}
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_htif__store___closed__0() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_htif__store___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("htif_tohost as cmd ", 19, 19);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_htif__store___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_unsigned_to_nat(4u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_htif__store(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_39; lean_object* x_40; uint8_t x_41; uint8_t x_42; lean_object* x_44; uint8_t x_82; 
x_9 = lean_box(0);
x_10 = lean_unsigned_to_nat(8u);
x_82 = lean_nat_dec_eq(x_2, x_10);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; lean_object* x_88; lean_object* x_108; uint8_t x_109; lean_object* x_150; uint8_t x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_170; 
x_83 = lean_unsigned_to_nat(64u);
x_170 = l_plat__htif__tohost___redArg(x_83, x_4);
if (lean_obj_tag(x_170) == 0)
{
lean_object* x_171; lean_object* x_172; uint8_t x_173; lean_object* x_220; uint8_t x_221; 
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_170, 1);
lean_inc(x_172);
lean_dec(x_170);
x_220 = lean_unsigned_to_nat(4u);
x_221 = lean_nat_dec_eq(x_2, x_220);
if (x_221 == 0)
{
lean_dec(x_171);
x_173 = x_221;
goto block_219;
}
else
{
uint8_t x_222; 
x_222 = lean_nat_dec_eq(x_1, x_171);
lean_dec(x_171);
x_173 = x_222;
goto block_219;
}
block_219:
{
if (x_173 == 0)
{
lean_object* x_174; 
x_174 = l_plat__htif__tohost___redArg(x_83, x_172);
if (lean_obj_tag(x_174) == 0)
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; uint8_t x_178; 
x_175 = lean_ctor_get(x_174, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_174, 1);
lean_inc(x_176);
lean_dec(x_174);
x_177 = lean_unsigned_to_nat(4u);
x_178 = lean_nat_dec_eq(x_2, x_177);
if (x_178 == 0)
{
lean_dec(x_175);
x_108 = x_176;
x_109 = x_178;
goto block_149;
}
else
{
lean_object* x_179; lean_object* x_180; uint8_t x_181; 
x_179 = l_LeanRV64DExecutable_Functions_htif__load___closed__0;
x_180 = l_Sail_BitVec_addInt(x_83, x_175, x_179);
lean_dec(x_175);
x_181 = lean_nat_dec_eq(x_1, x_180);
lean_dec(x_180);
x_108 = x_176;
x_109 = x_181;
goto block_149;
}
}
else
{
uint8_t x_182; 
lean_dec(x_3);
lean_dec(x_2);
x_182 = !lean_is_exclusive(x_174);
if (x_182 == 0)
{
return x_174;
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_183 = lean_ctor_get(x_174, 0);
x_184 = lean_ctor_get(x_174, 1);
lean_inc(x_184);
lean_inc(x_183);
lean_dec(x_174);
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_183);
lean_ctor_set(x_185, 1, x_184);
return x_185;
}
}
}
else
{
uint8_t x_186; lean_object* x_187; 
x_186 = 7;
x_187 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_186, x_172);
if (lean_obj_tag(x_187) == 0)
{
lean_object* x_188; lean_object* x_189; uint8_t x_190; lean_object* x_191; 
x_188 = lean_ctor_get(x_187, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 1);
lean_inc(x_189);
lean_dec(x_187);
x_190 = 3;
x_191 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_190, x_189);
if (lean_obj_tag(x_191) == 0)
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; 
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_191, 1);
lean_inc(x_193);
lean_dec(x_191);
x_194 = lean_nat_mul(x_10, x_2);
x_195 = lean_unsigned_to_nat(31u);
x_196 = lean_unsigned_to_nat(0u);
x_197 = lean_unsigned_to_nat(32u);
x_198 = l_BitVec_extractLsb___redArg(x_195, x_196, x_188);
lean_dec(x_188);
x_199 = l_BitVec_setWidth(x_197, x_194, x_198);
lean_dec(x_198);
x_200 = lean_nat_dec_eq(x_3, x_199);
lean_dec(x_199);
if (x_200 == 0)
{
lean_object* x_201; lean_object* x_202; 
lean_dec(x_192);
x_201 = l_LeanRV64DExecutable_Functions_htif__store___closed__2;
x_202 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_190, x_201, x_193);
x_150 = x_196;
x_151 = x_186;
x_152 = x_195;
x_153 = x_197;
x_154 = x_194;
x_155 = x_202;
goto block_169;
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_203 = lean_unsigned_to_nat(4u);
x_204 = l_LeanRV64DExecutable_Functions_tick__clock___redArg___closed__0;
x_205 = l_Sail_BitVec_addInt(x_203, x_192, x_204);
lean_dec(x_192);
x_206 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_190, x_205, x_193);
x_150 = x_196;
x_151 = x_186;
x_152 = x_195;
x_153 = x_197;
x_154 = x_194;
x_155 = x_206;
goto block_169;
}
}
else
{
uint8_t x_207; 
lean_dec(x_188);
lean_dec(x_3);
lean_dec(x_2);
x_207 = !lean_is_exclusive(x_191);
if (x_207 == 0)
{
lean_object* x_208; lean_object* x_209; 
x_208 = lean_ctor_get(x_191, 0);
lean_dec(x_208);
x_209 = lean_box(1);
lean_ctor_set(x_191, 0, x_209);
return x_191;
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_210 = lean_ctor_get(x_191, 1);
lean_inc(x_210);
lean_dec(x_191);
x_211 = lean_box(1);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_211);
lean_ctor_set(x_212, 1, x_210);
return x_212;
}
}
}
else
{
uint8_t x_213; 
lean_dec(x_3);
lean_dec(x_2);
x_213 = !lean_is_exclusive(x_187);
if (x_213 == 0)
{
lean_object* x_214; lean_object* x_215; 
x_214 = lean_ctor_get(x_187, 0);
lean_dec(x_214);
x_215 = lean_box(1);
lean_ctor_set(x_187, 0, x_215);
return x_187;
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_216 = lean_ctor_get(x_187, 1);
lean_inc(x_216);
lean_dec(x_187);
x_217 = lean_box(1);
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_217);
lean_ctor_set(x_218, 1, x_216);
return x_218;
}
}
}
}
}
else
{
uint8_t x_223; 
lean_dec(x_3);
lean_dec(x_2);
x_223 = !lean_is_exclusive(x_170);
if (x_223 == 0)
{
return x_170;
}
else
{
lean_object* x_224; lean_object* x_225; lean_object* x_226; 
x_224 = lean_ctor_get(x_170, 0);
x_225 = lean_ctor_get(x_170, 1);
lean_inc(x_225);
lean_inc(x_224);
lean_dec(x_170);
x_226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_226, 0, x_224);
lean_ctor_set(x_226, 1, x_225);
return x_226;
}
}
block_107:
{
lean_object* x_89; uint8_t x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_89 = lean_ctor_get(x_88, 1);
lean_inc(x_89);
lean_dec(x_88);
x_90 = 4;
x_91 = l_BitVec_ofNat(x_85, x_85);
x_92 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_90, x_91, x_89);
x_93 = lean_ctor_get(x_92, 1);
lean_inc(x_93);
lean_dec(x_92);
x_94 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_87, x_93);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_94, 1);
lean_inc(x_96);
lean_dec(x_94);
x_97 = lean_unsigned_to_nat(63u);
x_98 = l_BitVec_setWidth(x_84, x_86, x_3);
lean_dec(x_84);
x_99 = l_Sail_BitVec_updateSubrange(x_83, x_95, x_97, x_86, x_98);
lean_dec(x_98);
lean_dec(x_95);
x_100 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_87, x_99, x_96);
x_44 = x_100;
goto block_81;
}
else
{
uint8_t x_101; 
lean_dec(x_84);
lean_dec(x_3);
lean_dec(x_2);
x_101 = !lean_is_exclusive(x_94);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; 
x_102 = lean_ctor_get(x_94, 0);
lean_dec(x_102);
x_103 = lean_box(1);
lean_ctor_set(x_94, 0, x_103);
return x_94;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_94, 1);
lean_inc(x_104);
lean_dec(x_94);
x_105 = lean_box(1);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_104);
return x_106;
}
}
}
block_149:
{
if (x_109 == 0)
{
uint8_t x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_110 = 7;
x_111 = lean_nat_mul(x_10, x_2);
x_112 = l_BitVec_setWidth(x_111, x_83, x_3);
lean_dec(x_111);
x_113 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_110, x_112, x_108);
x_44 = x_113;
goto block_81;
}
else
{
uint8_t x_114; lean_object* x_115; 
x_114 = 7;
x_115 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_114, x_108);
if (lean_obj_tag(x_115) == 0)
{
lean_object* x_116; lean_object* x_117; uint8_t x_118; lean_object* x_119; 
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
lean_dec(x_115);
x_118 = 3;
x_119 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_118, x_117);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; uint8_t x_130; 
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
x_122 = lean_unsigned_to_nat(15u);
x_123 = lean_unsigned_to_nat(0u);
x_124 = lean_unsigned_to_nat(1u);
x_125 = lean_nat_mul(x_10, x_2);
x_126 = l_BitVec_extractLsb___redArg(x_122, x_123, x_3);
x_127 = lean_unsigned_to_nat(47u);
x_128 = lean_unsigned_to_nat(32u);
x_129 = l_BitVec_extractLsb___redArg(x_127, x_128, x_116);
lean_dec(x_116);
x_130 = lean_nat_dec_eq(x_126, x_129);
lean_dec(x_129);
lean_dec(x_126);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; 
lean_dec(x_120);
x_131 = l_LeanRV64DExecutable_Functions_htif__store___closed__2;
x_132 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_118, x_131, x_121);
x_84 = x_125;
x_85 = x_124;
x_86 = x_128;
x_87 = x_114;
x_88 = x_132;
goto block_107;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_133 = lean_unsigned_to_nat(4u);
x_134 = l_LeanRV64DExecutable_Functions_tick__clock___redArg___closed__0;
x_135 = l_Sail_BitVec_addInt(x_133, x_120, x_134);
lean_dec(x_120);
x_136 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_118, x_135, x_121);
x_84 = x_125;
x_85 = x_124;
x_86 = x_128;
x_87 = x_114;
x_88 = x_136;
goto block_107;
}
}
else
{
uint8_t x_137; 
lean_dec(x_116);
lean_dec(x_3);
lean_dec(x_2);
x_137 = !lean_is_exclusive(x_119);
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; 
x_138 = lean_ctor_get(x_119, 0);
lean_dec(x_138);
x_139 = lean_box(1);
lean_ctor_set(x_119, 0, x_139);
return x_119;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_140 = lean_ctor_get(x_119, 1);
lean_inc(x_140);
lean_dec(x_119);
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
uint8_t x_143; 
lean_dec(x_3);
lean_dec(x_2);
x_143 = !lean_is_exclusive(x_115);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; 
x_144 = lean_ctor_get(x_115, 0);
lean_dec(x_144);
x_145 = lean_box(1);
lean_ctor_set(x_115, 0, x_145);
return x_115;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_146 = lean_ctor_get(x_115, 1);
lean_inc(x_146);
lean_dec(x_115);
x_147 = lean_box(1);
x_148 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_146);
return x_148;
}
}
}
}
block_169:
{
lean_object* x_156; lean_object* x_157; 
x_156 = lean_ctor_get(x_155, 1);
lean_inc(x_156);
lean_dec(x_155);
x_157 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_151, x_156);
if (lean_obj_tag(x_157) == 0)
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_158 = lean_ctor_get(x_157, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_157, 1);
lean_inc(x_159);
lean_dec(x_157);
x_160 = l_BitVec_setWidth(x_154, x_153, x_3);
lean_dec(x_154);
x_161 = l_Sail_BitVec_updateSubrange(x_83, x_158, x_152, x_150, x_160);
lean_dec(x_160);
lean_dec(x_158);
x_162 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_151, x_161, x_159);
x_44 = x_162;
goto block_81;
}
else
{
uint8_t x_163; 
lean_dec(x_154);
lean_dec(x_3);
lean_dec(x_2);
x_163 = !lean_is_exclusive(x_157);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; 
x_164 = lean_ctor_get(x_157, 0);
lean_dec(x_164);
x_165 = lean_box(1);
lean_ctor_set(x_157, 0, x_165);
return x_157;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_166 = lean_ctor_get(x_157, 1);
lean_inc(x_166);
lean_dec(x_157);
x_167 = lean_box(1);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_166);
return x_168;
}
}
}
}
else
{
uint8_t x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; uint8_t x_231; lean_object* x_232; 
x_227 = 4;
x_228 = l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__2;
x_229 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_227, x_228, x_4);
x_230 = lean_ctor_get(x_229, 1);
lean_inc(x_230);
lean_dec(x_229);
x_231 = 3;
x_232 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_231, x_230);
if (lean_obj_tag(x_232) == 0)
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; uint8_t x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
x_233 = lean_ctor_get(x_232, 0);
lean_inc(x_233);
x_234 = lean_ctor_get(x_232, 1);
lean_inc(x_234);
lean_dec(x_232);
x_235 = lean_unsigned_to_nat(4u);
x_236 = l_LeanRV64DExecutable_Functions_tick__clock___redArg___closed__0;
x_237 = l_Sail_BitVec_addInt(x_235, x_233, x_236);
lean_dec(x_233);
x_238 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_231, x_237, x_234);
x_239 = lean_ctor_get(x_238, 1);
lean_inc(x_239);
lean_dec(x_238);
x_240 = 7;
x_241 = lean_nat_mul(x_10, x_2);
x_242 = lean_unsigned_to_nat(64u);
x_243 = l_BitVec_setWidth(x_241, x_242, x_3);
lean_dec(x_241);
x_244 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_240, x_243, x_239);
x_44 = x_244;
goto block_81;
}
else
{
uint8_t x_245; 
lean_dec(x_3);
lean_dec(x_2);
x_245 = !lean_is_exclusive(x_232);
if (x_245 == 0)
{
lean_object* x_246; lean_object* x_247; 
x_246 = lean_ctor_get(x_232, 0);
lean_dec(x_246);
x_247 = lean_box(1);
lean_ctor_set(x_232, 0, x_247);
return x_232;
}
else
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; 
x_248 = lean_ctor_get(x_232, 1);
lean_inc(x_248);
lean_dec(x_232);
x_249 = lean_box(1);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_249);
lean_ctor_set(x_250, 1, x_248);
return x_250;
}
}
}
block_8:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_LeanRV64DExecutable_Functions_htif__store___closed__0;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
block_38:
{
uint8_t x_14; lean_object* x_15; 
x_14 = 7;
x_15 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_14, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_LeanRV64DExecutable_Functions_htif__store___closed__1;
x_19 = lean_unsigned_to_nat(64u);
lean_inc(x_16);
x_20 = lean_alloc_closure((void*)(l_LeanRV64DExecutable_Functions_htif__store___lam__0___boxed), 9, 7);
lean_closure_set(x_20, 0, x_16);
lean_closure_set(x_20, 1, x_10);
lean_closure_set(x_20, 2, x_11);
lean_closure_set(x_20, 3, x_2);
lean_closure_set(x_20, 4, x_3);
lean_closure_set(x_20, 5, x_9);
lean_closure_set(x_20, 6, x_19);
x_21 = l_BitVec_BitVec_repr(x_19, x_16);
x_22 = lean_unsigned_to_nat(120u);
lean_inc(x_12);
x_23 = lean_format_pretty(x_21, x_22, x_12, x_12);
x_24 = lean_string_append(x_18, x_23);
lean_dec(x_23);
x_25 = lean_dbg_trace(x_24, x_20);
x_26 = lean_apply_1(x_25, x_17);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_5 = x_27;
goto block_8;
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_26);
if (x_28 == 0)
{
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_26, 0);
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_26);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_15);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_15, 0);
lean_dec(x_33);
x_34 = lean_box(1);
lean_ctor_set(x_15, 0, x_34);
return x_15;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_15, 1);
lean_inc(x_35);
lean_dec(x_15);
x_36 = lean_box(1);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
}
block_43:
{
if (x_42 == 0)
{
if (x_41 == 0)
{
lean_dec(x_39);
lean_dec(x_3);
lean_dec(x_2);
x_5 = x_40;
goto block_8;
}
else
{
lean_inc(x_39);
x_11 = x_39;
x_12 = x_39;
x_13 = x_40;
goto block_38;
}
}
else
{
lean_inc(x_39);
x_11 = x_39;
x_12 = x_39;
x_13 = x_40;
goto block_38;
}
}
block_81:
{
lean_object* x_45; uint8_t x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = 4;
x_47 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_46, x_45);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = 3;
x_51 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_50, x_49);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_50, x_53);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; lean_object* x_60; uint8_t x_61; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_unsigned_to_nat(0u);
x_58 = lean_unsigned_to_nat(2u);
x_59 = lean_nat_dec_lt(x_58, x_55);
lean_dec(x_55);
x_60 = l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__2;
x_61 = lean_nat_dec_eq(x_48, x_60);
lean_dec(x_48);
if (x_61 == 0)
{
lean_dec(x_52);
x_39 = x_57;
x_40 = x_56;
x_41 = x_59;
x_42 = x_61;
goto block_43;
}
else
{
uint8_t x_62; 
x_62 = lean_nat_dec_lt(x_57, x_52);
lean_dec(x_52);
x_39 = x_57;
x_40 = x_56;
x_41 = x_59;
x_42 = x_62;
goto block_43;
}
}
else
{
uint8_t x_63; 
lean_dec(x_52);
lean_dec(x_48);
lean_dec(x_3);
lean_dec(x_2);
x_63 = !lean_is_exclusive(x_54);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_54, 0);
lean_dec(x_64);
x_65 = lean_box(1);
lean_ctor_set(x_54, 0, x_65);
return x_54;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_54, 1);
lean_inc(x_66);
lean_dec(x_54);
x_67 = lean_box(1);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_48);
lean_dec(x_3);
lean_dec(x_2);
x_69 = !lean_is_exclusive(x_51);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; 
x_70 = lean_ctor_get(x_51, 0);
lean_dec(x_70);
x_71 = lean_box(1);
lean_ctor_set(x_51, 0, x_71);
return x_51;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_51, 1);
lean_inc(x_72);
lean_dec(x_51);
x_73 = lean_box(1);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_3);
lean_dec(x_2);
x_75 = !lean_is_exclusive(x_47);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; 
x_76 = lean_ctor_get(x_47, 0);
lean_dec(x_76);
x_77 = lean_box(1);
lean_ctor_set(x_47, 0, x_77);
return x_47;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_47, 1);
lean_inc(x_78);
lean_dec(x_47);
x_79 = lean_box(1);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_78);
return x_80;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_htif__store___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LeanRV64DExecutable_Functions_htif__store___lam__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_htif__store___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LeanRV64DExecutable_Functions_htif__store(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__mmio__readable(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_within__clint(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_LeanRV64DExecutable_Functions_within__htif__readable___redArg(x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = lean_unbox(x_5);
if (x_8 == 0)
{
lean_dec(x_5);
return x_7;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
lean_ctor_set(x_7, 0, x_5);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
else
{
lean_dec(x_5);
return x_7;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_within__mmio__writable(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_within__clint(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_LeanRV64DExecutable_Functions_within__htif__writable___redArg(x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = lean_unbox(x_5);
if (x_8 == 0)
{
lean_dec(x_5);
return x_7;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
lean_ctor_set(x_7, 0, x_5);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
else
{
lean_dec(x_5);
return x_7;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mmio__read(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
lean_inc(x_2);
x_5 = l_LeanRV64DExecutable_Functions_within__clint(x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = l_LeanRV64DExecutable_Functions_within__htif__readable___redArg(x_8);
if (lean_obj_tag(x_9) == 0)
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_dec(x_11);
x_12 = l_LeanRV64DExecutable_Functions_clint__load___closed__1;
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_dec(x_9);
x_14 = l_LeanRV64DExecutable_Functions_clint__load___closed__1;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
case 3:
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_9);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_9, 0);
lean_dec(x_17);
x_18 = l_LeanRV64DExecutable_Functions_clint__load___closed__3;
lean_ctor_set(x_9, 0, x_18);
return x_9;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_dec(x_9);
x_20 = l_LeanRV64DExecutable_Functions_clint__load___closed__3;
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
default: 
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_9);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_9, 0);
lean_dec(x_23);
x_24 = l_LeanRV64DExecutable_Functions_clint__load___closed__5;
lean_ctor_set(x_9, 0, x_24);
return x_9;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_9, 1);
lean_inc(x_25);
lean_dec(x_9);
x_26 = l_LeanRV64DExecutable_Functions_clint__load___closed__5;
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
}
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_9);
if (x_28 == 0)
{
return x_9;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_9, 0);
x_30 = lean_ctor_get(x_9, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_9);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_5, 1);
lean_inc(x_32);
lean_dec(x_5);
x_33 = l_LeanRV64DExecutable_Functions_clint__load(x_1, x_2, x_3, x_32);
lean_dec(x_2);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_3);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_5);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_5, 0);
lean_dec(x_35);
x_36 = lean_box(1);
lean_ctor_set(x_5, 0, x_36);
return x_5;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_5, 1);
lean_inc(x_37);
lean_dec(x_5);
x_38 = lean_box(1);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mmio__read___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LeanRV64DExecutable_Functions_mmio__read(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mmio__write(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_LeanRV64DExecutable_Functions_within__clint(x_1, x_2, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = l_LeanRV64DExecutable_Functions_within__htif__writable___redArg(x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_dec(x_11);
x_12 = l_LeanRV64DExecutable_Functions_clint__store___closed__0;
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_dec(x_9);
x_14 = l_LeanRV64DExecutable_Functions_clint__store___closed__0;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_9);
if (x_16 == 0)
{
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_9, 0);
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_9);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_5, 1);
lean_inc(x_20);
lean_dec(x_5);
x_21 = l_LeanRV64DExecutable_Functions_clint__store(x_1, x_2, x_3, x_20);
lean_dec(x_2);
lean_dec(x_1);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_5);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_5, 0);
lean_dec(x_23);
x_24 = lean_box(1);
lean_ctor_set(x_5, 0, x_24);
return x_5;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_5, 1);
lean_inc(x_25);
lean_dec(x_5);
x_26 = lean_box(1);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mmio__write___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LeanRV64DExecutable_Functions_mmio__write(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_init__platform___redArg(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_2 = 7;
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_2, x_3, x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = 6;
x_7 = 0;
x_8 = lean_box(x_7);
x_9 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_6, x_8, x_5);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = 5;
x_12 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_11, x_3, x_10);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = 4;
x_15 = l_LeanRV64DExecutable_Functions_reset__htif___redArg___closed__0;
x_16 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_14, x_15, x_13);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = 3;
x_19 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_18, x_3, x_17);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_init__platform(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_init__platform___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_init__platform___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_init__platform(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_handle__illegal___redArg___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_handle__illegal___redArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = l_LeanRV64DExecutable_Functions_handle__illegal___redArg___closed__0;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_handle__illegal___redArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_handle__illegal___redArg___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_handle__illegal___redArg(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = 90;
x_3 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = 123;
x_7 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_6, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_LeanRV64DExecutable_Functions_handle__illegal___redArg___closed__2;
x_11 = lean_unbox(x_4);
lean_dec(x_4);
x_12 = l_LeanRV64DExecutable_Functions_exception__handler(x_11, x_10, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_LeanRV64DExecutable_Functions_set__next__pc(x_13, x_14);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
else
{
uint8_t x_20; 
lean_dec(x_4);
x_20 = !lean_is_exclusive(x_7);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_7, 0);
lean_dec(x_21);
x_22 = lean_box(1);
lean_ctor_set(x_7, 0, x_22);
return x_7;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_7, 1);
lean_inc(x_23);
lean_dec(x_7);
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
x_26 = !lean_is_exclusive(x_3);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_3, 0);
lean_dec(x_27);
x_28 = lean_box(1);
lean_ctor_set(x_3, 0, x_28);
return x_3;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_3, 1);
lean_inc(x_29);
lean_dec(x_3);
x_30 = lean_box(1);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_handle__illegal(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_handle__illegal___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_handle__illegal___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_handle__illegal(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_platform__wfi(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_platform__wfi___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_platform__wfi(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Flow(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Prelude(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvXlen(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvPcAccess(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSysRegs(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSmcntrpmf(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSysControl(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvPlatform(uint8_t builtin, lean_object* w) {
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
res = initialize_LeanRV64DExecutable_RiscvXlen(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvPcAccess(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSysRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSmcntrpmf(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSysControl(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_plat__cache__block__size__exp = _init_l_LeanRV64DExecutable_Functions_plat__cache__block__size__exp();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_plat__cache__block__size__exp);
l_LeanRV64DExecutable_Functions_plat__enable__dirty__update = _init_l_LeanRV64DExecutable_Functions_plat__enable__dirty__update();
l_LeanRV64DExecutable_Functions_plat__enable__misaligned__access = _init_l_LeanRV64DExecutable_Functions_plat__enable__misaligned__access();
l_LeanRV64DExecutable_Functions_plat__mtval__has__illegal__inst__bits = _init_l_LeanRV64DExecutable_Functions_plat__mtval__has__illegal__inst__bits();
l_LeanRV64DExecutable_Functions_plat__insns__per__tick___closed__0 = _init_l_LeanRV64DExecutable_Functions_plat__insns__per__tick___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_plat__insns__per__tick___closed__0);
l_LeanRV64DExecutable_Functions_plat__insns__per__tick = _init_l_LeanRV64DExecutable_Functions_plat__insns__per__tick();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_plat__insns__per__tick);
l_LeanRV64DExecutable_Functions_MSIP__BASE___closed__0 = _init_l_LeanRV64DExecutable_Functions_MSIP__BASE___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_MSIP__BASE___closed__0);
l_LeanRV64DExecutable_Functions_MSIP__BASE___closed__1 = _init_l_LeanRV64DExecutable_Functions_MSIP__BASE___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_MSIP__BASE___closed__1);
l_LeanRV64DExecutable_Functions_MSIP__BASE = _init_l_LeanRV64DExecutable_Functions_MSIP__BASE();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_MSIP__BASE);
l_LeanRV64DExecutable_Functions_MTIMECMP__BASE___closed__0 = _init_l_LeanRV64DExecutable_Functions_MTIMECMP__BASE___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_MTIMECMP__BASE___closed__0);
l_LeanRV64DExecutable_Functions_MTIMECMP__BASE___closed__1 = _init_l_LeanRV64DExecutable_Functions_MTIMECMP__BASE___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_MTIMECMP__BASE___closed__1);
l_LeanRV64DExecutable_Functions_MTIMECMP__BASE = _init_l_LeanRV64DExecutable_Functions_MTIMECMP__BASE();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_MTIMECMP__BASE);
l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI___closed__0 = _init_l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI___closed__0);
l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI___closed__1 = _init_l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI___closed__1);
l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI = _init_l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_MTIMECMP__BASE__HI);
l_LeanRV64DExecutable_Functions_MTIME__BASE___closed__0 = _init_l_LeanRV64DExecutable_Functions_MTIME__BASE___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_MTIME__BASE___closed__0);
l_LeanRV64DExecutable_Functions_MTIME__BASE___closed__1 = _init_l_LeanRV64DExecutable_Functions_MTIME__BASE___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_MTIME__BASE___closed__1);
l_LeanRV64DExecutable_Functions_MTIME__BASE = _init_l_LeanRV64DExecutable_Functions_MTIME__BASE();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_MTIME__BASE);
l_LeanRV64DExecutable_Functions_MTIME__BASE__HI___closed__0 = _init_l_LeanRV64DExecutable_Functions_MTIME__BASE__HI___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_MTIME__BASE__HI___closed__0);
l_LeanRV64DExecutable_Functions_MTIME__BASE__HI___closed__1 = _init_l_LeanRV64DExecutable_Functions_MTIME__BASE__HI___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_MTIME__BASE__HI___closed__1);
l_LeanRV64DExecutable_Functions_MTIME__BASE__HI = _init_l_LeanRV64DExecutable_Functions_MTIME__BASE__HI();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_MTIME__BASE__HI);
l_LeanRV64DExecutable_Functions_clint__load___closed__0 = _init_l_LeanRV64DExecutable_Functions_clint__load___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_clint__load___closed__0);
l_LeanRV64DExecutable_Functions_clint__load___closed__1 = _init_l_LeanRV64DExecutable_Functions_clint__load___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_clint__load___closed__1);
l_LeanRV64DExecutable_Functions_clint__load___closed__2 = _init_l_LeanRV64DExecutable_Functions_clint__load___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_clint__load___closed__2);
l_LeanRV64DExecutable_Functions_clint__load___closed__3 = _init_l_LeanRV64DExecutable_Functions_clint__load___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_clint__load___closed__3);
l_LeanRV64DExecutable_Functions_clint__load___closed__4 = _init_l_LeanRV64DExecutable_Functions_clint__load___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_clint__load___closed__4);
l_LeanRV64DExecutable_Functions_clint__load___closed__5 = _init_l_LeanRV64DExecutable_Functions_clint__load___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_clint__load___closed__5);
l_LeanRV64DExecutable_Functions_clint__load___closed__6 = _init_l_LeanRV64DExecutable_Functions_clint__load___closed__6();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_clint__load___closed__6);
l_LeanRV64DExecutable_Functions_clint__dispatch___redArg___closed__0 = _init_l_LeanRV64DExecutable_Functions_clint__dispatch___redArg___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_clint__dispatch___redArg___closed__0);
l_LeanRV64DExecutable_Functions_clint__store___closed__0 = _init_l_LeanRV64DExecutable_Functions_clint__store___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_clint__store___closed__0);
l_LeanRV64DExecutable_Functions_tick__clock___redArg___closed__0 = _init_l_LeanRV64DExecutable_Functions_tick__clock___redArg___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_tick__clock___redArg___closed__0);
l_LeanRV64DExecutable_Functions_reset__htif___redArg___closed__0 = _init_l_LeanRV64DExecutable_Functions_reset__htif___redArg___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_reset__htif___redArg___closed__0);
l_LeanRV64DExecutable_Functions_reset__htif___redArg___closed__1 = _init_l_LeanRV64DExecutable_Functions_reset__htif___redArg___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_reset__htif___redArg___closed__1);
l_LeanRV64DExecutable_Functions_htif__load___closed__0 = _init_l_LeanRV64DExecutable_Functions_htif__load___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_htif__load___closed__0);
l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__0 = _init_l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__0);
l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__1 = _init_l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__1);
l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__2 = _init_l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_htif__store___lam__0___closed__2);
l_LeanRV64DExecutable_Functions_htif__store___closed__0 = _init_l_LeanRV64DExecutable_Functions_htif__store___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_htif__store___closed__0);
l_LeanRV64DExecutable_Functions_htif__store___closed__1 = _init_l_LeanRV64DExecutable_Functions_htif__store___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_htif__store___closed__1);
l_LeanRV64DExecutable_Functions_htif__store___closed__2 = _init_l_LeanRV64DExecutable_Functions_htif__store___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_htif__store___closed__2);
l_LeanRV64DExecutable_Functions_handle__illegal___redArg___closed__0 = _init_l_LeanRV64DExecutable_Functions_handle__illegal___redArg___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_handle__illegal___redArg___closed__0);
l_LeanRV64DExecutable_Functions_handle__illegal___redArg___closed__1 = _init_l_LeanRV64DExecutable_Functions_handle__illegal___redArg___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_handle__illegal___redArg___closed__1);
l_LeanRV64DExecutable_Functions_handle__illegal___redArg___closed__2 = _init_l_LeanRV64DExecutable_Functions_handle__illegal___redArg___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_handle__illegal___redArg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
