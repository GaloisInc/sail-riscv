// Lean compiler output
// Module: LeanRV64DExecutable.RiscvInstsZalrsc
// Imports: Init LeanRV64DExecutable.RiscvXlen
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
static uint8_t l_LeanRV64DExecutable_Functions_lrsc__width__valid___closed__1;
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_lrsc__width__valid(uint8_t);
extern lean_object* l_LeanRV64DExecutable_Functions_xlen;
static lean_object* l_LeanRV64DExecutable_Functions_lrsc__width__valid___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_lrsc__width__valid___boxed(lean_object*);
static lean_object* _init_l_LeanRV64DExecutable_Functions_lrsc__width__valid___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(64u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_lrsc__width__valid___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_LeanRV64DExecutable_Functions_xlen;
x_2 = l_LeanRV64DExecutable_Functions_lrsc__width__valid___closed__0;
x_3 = lean_int_dec_le(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_lrsc__width__valid(uint8_t x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(x_1);
switch (lean_obj_tag(x_2)) {
case 2:
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
case 3:
{
uint8_t x_4; 
x_4 = l_LeanRV64DExecutable_Functions_lrsc__width__valid___closed__1;
return x_4;
}
default: 
{
uint8_t x_5; 
lean_dec(x_2);
x_5 = 0;
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_lrsc__width__valid___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_LeanRV64DExecutable_Functions_lrsc__width__valid(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvXlen(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvInstsZalrsc(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvXlen(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_lrsc__width__valid___closed__0 = _init_l_LeanRV64DExecutable_Functions_lrsc__width__valid___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_lrsc__width__valid___closed__0);
l_LeanRV64DExecutable_Functions_lrsc__width__valid___closed__1 = _init_l_LeanRV64DExecutable_Functions_lrsc__width__valid___closed__1();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
