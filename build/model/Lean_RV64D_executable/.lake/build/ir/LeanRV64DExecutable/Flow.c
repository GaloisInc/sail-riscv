// Lean compiler output
// Module: LeanRV64DExecutable.Flow
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
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_____id___boxed(lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_neq__bool(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_neq__bool___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_____id(lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_neq__bool(uint8_t x_1, uint8_t x_2) {
_start:
{
if (x_1 == 0)
{
return x_2;
}
else
{
if (x_2 == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_neq__bool___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_LeanRV64DExecutable_Functions_neq__bool(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_____id(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_____id___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_____id(x_1);
lean_dec(x_1);
return x_2;
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
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_Flow(uint8_t builtin, lean_object* w) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
