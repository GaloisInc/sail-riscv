// Lean compiler output
// Module: LeanRV64DExecutable.RiscvRegType
// Imports: Init LeanRV64DExecutable.Prelude
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
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_regval__from__reg(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_RegStr(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_RegStr___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_regval__into__reg(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_regval__into__reg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_zero__reg;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_regval__from__reg___boxed(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Sail_BitVec_toFormatted(lean_object*, lean_object*);
static lean_object* _init_l_LeanRV64DExecutable_Functions_zero__reg() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_RegStr___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_nat_mul(x_1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_RegStr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_LeanRV64DExecutable_Functions_RegStr___closed__0;
x_3 = l_Sail_BitVec_toFormatted(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_regval__from__reg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_regval__from__reg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_regval__from__reg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_regval__into__reg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_regval__into__reg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_regval__into__reg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Prelude(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvRegType(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Prelude(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_zero__reg = _init_l_LeanRV64DExecutable_Functions_zero__reg();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_zero__reg);
l_LeanRV64DExecutable_Functions_RegStr___closed__0 = _init_l_LeanRV64DExecutable_Functions_RegStr___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_RegStr___closed__0);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
