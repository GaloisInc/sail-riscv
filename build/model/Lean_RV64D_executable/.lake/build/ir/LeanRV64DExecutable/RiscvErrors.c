// Lean compiler output
// Module: LeanRV64DExecutable.RiscvErrors
// Imports: Init LeanRV64DExecutable.Sail.Sail LeanRV64DExecutable.Sail.BitVec LeanRV64DExecutable.Sail.IntRange LeanRV64DExecutable.Defs LeanRV64DExecutable.Specialization LeanRV64DExecutable.FakeReal LeanRV64DExecutable.RiscvExtrasExecutable
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
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_internal__error___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_internal__error___redArg___closed__1;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_not__implemented(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_internal__error_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_internal__error(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_internal__error___redArg___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_internal__error___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_internal__error___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_internal__error_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_not__implemented___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_internal__error_spec__0___redArg(uint8_t, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_internal__error_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PreSail_sailThrow___at___Sail_sailThrow_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_not__implemented___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_1);
x_4 = l_PreSail_sailThrow___at___Sail_sailThrow_spec__0___redArg(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_not__implemented(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_not__implemented___redArg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_internal__error_spec__0___redArg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (x_1 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_4, 0, x_2);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_internal__error_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_internal__error_spec__0___redArg(x_4, x_5, x_6);
return x_7;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_internal__error___redArg___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(":", 1, 1);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_internal__error___redArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(": ", 2, 2);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_internal__error___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = 0;
x_6 = l_LeanRV64DExecutable_Functions_internal__error___redArg___closed__0;
x_7 = l_Int_repr(x_2);
x_8 = l_LeanRV64DExecutable_Functions_internal__error___redArg___closed__1;
x_9 = lean_string_append(x_8, x_3);
x_10 = lean_string_append(x_7, x_9);
lean_dec(x_9);
x_11 = lean_string_append(x_6, x_10);
lean_dec(x_10);
x_12 = lean_string_append(x_1, x_11);
lean_dec(x_11);
x_13 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_internal__error_spec__0___redArg(x_5, x_12, x_4);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set_tag(x_13, 1);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_13);
if (x_20 == 0)
{
return x_13;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_13, 0);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_13);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_internal__error(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_internal__error_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_internal__error_spec__0___redArg(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_PreSail_assert___at___LeanRV64DExecutable_Functions_internal__error_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = l_PreSail_assert___at___LeanRV64DExecutable_Functions_internal__error_spec__0(x_1, x_2, x_3, x_7, x_5, x_6);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_internal__error___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_internal__error___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LeanRV64DExecutable_Functions_internal__error(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Sail_Sail(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Sail_BitVec(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Sail_IntRange(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Specialization(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_FakeReal(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvExtrasExecutable(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvErrors(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Sail_Sail(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Sail_BitVec(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Sail_IntRange(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Specialization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_FakeReal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvExtrasExecutable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_internal__error___redArg___closed__0 = _init_l_LeanRV64DExecutable_Functions_internal__error___redArg___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_internal__error___redArg___closed__0);
l_LeanRV64DExecutable_Functions_internal__error___redArg___closed__1 = _init_l_LeanRV64DExecutable_Functions_internal__error___redArg___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_internal__error___redArg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
