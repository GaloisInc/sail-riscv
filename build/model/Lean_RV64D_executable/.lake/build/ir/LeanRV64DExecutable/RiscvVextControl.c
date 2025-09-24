// Lean compiler output
// Module: LeanRV64DExecutable.RiscvVextControl
// Imports: Init LeanRV64DExecutable.Prelude LeanRV64DExecutable.RiscvVlen LeanRV64DExecutable.RiscvCallbacks LeanRV64DExecutable.RiscvVextRegs
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
lean_object* l_LeanRV64DExecutable_Functions_csr__name__write__callback___redArg(lean_object*, lean_object*);
lean_object* l_BitVec_setWidth(lean_object*, lean_object*, lean_object*);
lean_object* l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(uint8_t, lean_object*);
lean_object* l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_dirty__v__context_spec__0___redArg(uint8_t, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_set__vstart___closed__5;
static lean_object* l_LeanRV64DExecutable_Functions_set__vstart___closed__2;
lean_object* lean_nat_to_int(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_set__vstart___closed__4;
lean_object* l_BitVec_extractLsb___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_set__vstart(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_set__vstart___closed__3;
lean_object* lean_int_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_set__vstart___boxed(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_dirty__v__context___redArg(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_set__vstart___closed__0;
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_set__vstart___closed__1;
static lean_object* _init_l_LeanRV64DExecutable_Functions_set__vstart___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(9u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_set__vstart___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_set__vstart___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LeanRV64DExecutable_Functions_set__vstart___closed__1;
x_2 = l_LeanRV64DExecutable_Functions_set__vstart___closed__0;
x_3 = lean_int_sub(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_set__vstart___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_set__vstart___closed__2;
x_2 = l_Int_toNat(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_set__vstart___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_LeanRV64DExecutable_Functions_set__vstart___closed__3;
x_3 = lean_nat_add(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_set__vstart___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("vstart", 6, 6);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_set__vstart(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_dirty__v__context___redArg(x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = 57;
x_6 = l_LeanRV64DExecutable_Functions_set__vstart___closed__3;
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_LeanRV64DExecutable_Functions_set__vstart___closed__4;
x_9 = lean_unsigned_to_nat(16u);
x_10 = l_BitVec_extractLsb___redArg(x_6, x_7, x_1);
x_11 = l_BitVec_setWidth(x_8, x_9, x_10);
lean_dec(x_10);
x_12 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_dirty__v__context_spec__0___redArg(x_5, x_11, x_4);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_5, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_LeanRV64DExecutable_Functions_set__vstart___closed__5;
x_17 = l_LeanRV64DExecutable_Functions_csr__name__write__callback___redArg(x_16, x_15);
return x_17;
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_14);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_14, 0);
lean_dec(x_19);
x_20 = lean_box(1);
lean_ctor_set(x_14, 0, x_20);
return x_14;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_dec(x_14);
x_22 = lean_box(1);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
}
else
{
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_set__vstart___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_set__vstart(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Prelude(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvVlen(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvCallbacks(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvVextRegs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvVextControl(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Prelude(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvVlen(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvCallbacks(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvVextRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_set__vstart___closed__0 = _init_l_LeanRV64DExecutable_Functions_set__vstart___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_set__vstart___closed__0);
l_LeanRV64DExecutable_Functions_set__vstart___closed__1 = _init_l_LeanRV64DExecutable_Functions_set__vstart___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_set__vstart___closed__1);
l_LeanRV64DExecutable_Functions_set__vstart___closed__2 = _init_l_LeanRV64DExecutable_Functions_set__vstart___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_set__vstart___closed__2);
l_LeanRV64DExecutable_Functions_set__vstart___closed__3 = _init_l_LeanRV64DExecutable_Functions_set__vstart___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_set__vstart___closed__3);
l_LeanRV64DExecutable_Functions_set__vstart___closed__4 = _init_l_LeanRV64DExecutable_Functions_set__vstart___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_set__vstart___closed__4);
l_LeanRV64DExecutable_Functions_set__vstart___closed__5 = _init_l_LeanRV64DExecutable_Functions_set__vstart___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_set__vstart___closed__5);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
