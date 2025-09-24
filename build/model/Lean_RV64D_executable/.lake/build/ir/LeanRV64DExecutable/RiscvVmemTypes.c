// Lean compiler output
// Module: LeanRV64DExecutable.RiscvVmemTypes
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
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_default__write__acc;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_Data;
static lean_object* _init_l_LeanRV64DExecutable_Functions_Data() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_default__write__acc() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
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
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvVmemTypes(uint8_t builtin, lean_object* w) {
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
l_LeanRV64DExecutable_Functions_Data = _init_l_LeanRV64DExecutable_Functions_Data();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_Data);
l_LeanRV64DExecutable_Functions_default__write__acc = _init_l_LeanRV64DExecutable_Functions_default__write__acc();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_default__write__acc);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
