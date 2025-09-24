// Lean compiler output
// Module: LeanRV64DExecutable.RiscvXlen
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
static lean_object* l_LeanRV64DExecutable_Functions_log2__xlen___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_xlen__bytes;
static lean_object* l_LeanRV64DExecutable_Functions_xlen__bytes___closed__0;
static lean_object* l_LeanRV64DExecutable_Functions_xlen__bytes___closed__2;
static lean_object* l_LeanRV64DExecutable_Functions_xlen___closed__1;
static lean_object* l_LeanRV64DExecutable_Functions_xlen__bytes___closed__1;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_log2__xlen;
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_asidlen;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_xlen;
static lean_object* l_LeanRV64DExecutable_Functions_log2__xlen___closed__1;
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_log2__xlen__bytes;
static lean_object* l_LeanRV64DExecutable_Functions_xlen___closed__0;
lean_object* lean_int_add(lean_object*, lean_object*);
static lean_object* _init_l_LeanRV64DExecutable_Functions_log2__xlen___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_log2__xlen___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_log2__xlen___closed__0;
x_2 = lean_int_add(x_1, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_log2__xlen() {
_start:
{
lean_object* x_1; 
x_1 = l_LeanRV64DExecutable_Functions_log2__xlen___closed__1;
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_log2__xlen__bytes() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(3u);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_xlen__bytes___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_xlen__bytes___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_log2__xlen___closed__0;
x_2 = l_Int_toNat(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_xlen__bytes___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LeanRV64DExecutable_Functions_xlen__bytes___closed__1;
x_2 = l_LeanRV64DExecutable_Functions_xlen__bytes___closed__0;
x_3 = l_Int_pow(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_xlen__bytes() {
_start:
{
lean_object* x_1; 
x_1 = l_LeanRV64DExecutable_Functions_xlen__bytes___closed__2;
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_xlen___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_xlen___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LeanRV64DExecutable_Functions_xlen___closed__0;
x_2 = l_LeanRV64DExecutable_Functions_xlen__bytes___closed__2;
x_3 = lean_int_mul(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_xlen() {
_start:
{
lean_object* x_1; 
x_1 = l_LeanRV64DExecutable_Functions_xlen___closed__1;
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_asidlen() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(16u);
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
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvXlen(uint8_t builtin, lean_object* w) {
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
l_LeanRV64DExecutable_Functions_log2__xlen___closed__0 = _init_l_LeanRV64DExecutable_Functions_log2__xlen___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_log2__xlen___closed__0);
l_LeanRV64DExecutable_Functions_log2__xlen___closed__1 = _init_l_LeanRV64DExecutable_Functions_log2__xlen___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_log2__xlen___closed__1);
l_LeanRV64DExecutable_Functions_log2__xlen = _init_l_LeanRV64DExecutable_Functions_log2__xlen();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_log2__xlen);
l_LeanRV64DExecutable_Functions_log2__xlen__bytes = _init_l_LeanRV64DExecutable_Functions_log2__xlen__bytes();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_log2__xlen__bytes);
l_LeanRV64DExecutable_Functions_xlen__bytes___closed__0 = _init_l_LeanRV64DExecutable_Functions_xlen__bytes___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_xlen__bytes___closed__0);
l_LeanRV64DExecutable_Functions_xlen__bytes___closed__1 = _init_l_LeanRV64DExecutable_Functions_xlen__bytes___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_xlen__bytes___closed__1);
l_LeanRV64DExecutable_Functions_xlen__bytes___closed__2 = _init_l_LeanRV64DExecutable_Functions_xlen__bytes___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_xlen__bytes___closed__2);
l_LeanRV64DExecutable_Functions_xlen__bytes = _init_l_LeanRV64DExecutable_Functions_xlen__bytes();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_xlen__bytes);
l_LeanRV64DExecutable_Functions_xlen___closed__0 = _init_l_LeanRV64DExecutable_Functions_xlen___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_xlen___closed__0);
l_LeanRV64DExecutable_Functions_xlen___closed__1 = _init_l_LeanRV64DExecutable_Functions_xlen___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_xlen___closed__1);
l_LeanRV64DExecutable_Functions_xlen = _init_l_LeanRV64DExecutable_Functions_xlen();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_xlen);
l_LeanRV64DExecutable_Functions_asidlen = _init_l_LeanRV64DExecutable_Functions_asidlen();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_asidlen);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
