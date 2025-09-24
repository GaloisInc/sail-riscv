// Lean compiler output
// Module: LeanRV64DExecutable.FakeReal
// Imports: Init LeanRV64DExecutable.Sail.Sail LeanRV64DExecutable.Defs
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
static double l_round__up___closed__0;
double lean_float_mul(double, double);
LEAN_EXPORT lean_object* l_print__real(lean_object*, double);
static double l_random__real___closed__0;
LEAN_EXPORT lean_object* l_mult__real___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_neg__real___boxed(lean_object*);
double lean_float_div(double, double);
LEAN_EXPORT double l_to__real(lean_object*);
LEAN_EXPORT double l_add__real(double, double);
LEAN_EXPORT double l_div__real(double, double);
uint8_t lean_float_decLt(double, double);
LEAN_EXPORT lean_object* l_prerr__real___boxed(lean_object*, lean_object*);
LEAN_EXPORT double l_mult__real(double, double);
LEAN_EXPORT lean_object* l_gt__real___boxed(lean_object*, lean_object*);
double lean_float_negate(double);
LEAN_EXPORT uint8_t l_lt__real(double, double);
LEAN_EXPORT lean_object* l_undefined__real___redArg(lean_object*);
LEAN_EXPORT lean_object* l_round__down___boxed(lean_object*);
double sqrt(double);
LEAN_EXPORT lean_object* l_undefined__real___boxed(lean_object*, lean_object*);
double lean_float_add(double, double);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT uint8_t l_eq__real(double, double);
double lean_uint64_to_float(uint64_t);
LEAN_EXPORT double l_neg__real(double);
lean_object* lean_uint64_to_nat(uint64_t);
LEAN_EXPORT double l_sub__real(double, double);
LEAN_EXPORT uint8_t l_lteq__real(double, double);
double lean_float_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_gteq__real___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_round__up(double);
LEAN_EXPORT lean_object* l_random__real___boxed(lean_object*);
LEAN_EXPORT lean_object* l_prerr__real(lean_object*, double);
LEAN_EXPORT lean_object* l_round__up___boxed(lean_object*);
LEAN_EXPORT lean_object* l_sqrt__real___boxed(lean_object*);
double pow(double, double);
LEAN_EXPORT lean_object* l_div__real___boxed(lean_object*, lean_object*);
LEAN_EXPORT double l_random__real(lean_object*);
LEAN_EXPORT lean_object* l_to__real___boxed(lean_object*);
LEAN_EXPORT lean_object* l_undefined__real___redArg___boxed__const__1;
LEAN_EXPORT lean_object* l_round__down(double);
LEAN_EXPORT lean_object* l_add__real___boxed(lean_object*, lean_object*);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_undefined__real(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_gteq__real(double, double);
LEAN_EXPORT lean_object* l_print__real___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_eq__real___boxed(lean_object*, lean_object*);
uint8_t lean_float_beq(double, double);
LEAN_EXPORT lean_object* l_lteq__real___boxed(lean_object*, lean_object*);
LEAN_EXPORT double l_abs__real(double);
uint8_t lean_float_decLe(double, double);
uint64_t lean_float_to_uint64(double);
LEAN_EXPORT double l_real__power(double, lean_object*);
LEAN_EXPORT lean_object* l_real__power___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_sub__real___boxed(lean_object*, lean_object*);
double fabs(double);
LEAN_EXPORT double l_sqrt__real(double);
double l_Float_ofInt(lean_object*);
static double l_undefined__real___redArg___closed__0;
LEAN_EXPORT lean_object* l_abs__real___boxed(lean_object*);
LEAN_EXPORT uint8_t l_gt__real(double, double);
LEAN_EXPORT lean_object* l_lt__real___boxed(lean_object*, lean_object*);
double lean_float_sub(double, double);
LEAN_EXPORT double l_neg__real(double x_1) {
_start:
{
double x_2; 
x_2 = lean_float_negate(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_neg__real___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = l_neg__real(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
LEAN_EXPORT double l_mult__real(double x_1, double x_2) {
_start:
{
double x_3; 
x_3 = lean_float_mul(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_mult__real___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; double x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = l_mult__real(x_3, x_4);
x_6 = lean_box_float(x_5);
return x_6;
}
}
LEAN_EXPORT double l_sub__real(double x_1, double x_2) {
_start:
{
double x_3; 
x_3 = lean_float_sub(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_sub__real___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; double x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = l_sub__real(x_3, x_4);
x_6 = lean_box_float(x_5);
return x_6;
}
}
LEAN_EXPORT double l_add__real(double x_1, double x_2) {
_start:
{
double x_3; 
x_3 = lean_float_add(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_add__real___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; double x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = l_add__real(x_3, x_4);
x_6 = lean_box_float(x_5);
return x_6;
}
}
LEAN_EXPORT double l_div__real(double x_1, double x_2) {
_start:
{
double x_3; 
x_3 = lean_float_div(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_div__real___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; double x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = l_div__real(x_3, x_4);
x_6 = lean_box_float(x_5);
return x_6;
}
}
LEAN_EXPORT double l_sqrt__real(double x_1) {
_start:
{
double x_2; 
x_2 = sqrt(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_sqrt__real___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = l_sqrt__real(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
LEAN_EXPORT double l_abs__real(double x_1) {
_start:
{
double x_2; 
x_2 = fabs(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_abs__real___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = l_abs__real(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_round__down(double x_1) {
_start:
{
uint64_t x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_float_to_uint64(x_1);
x_3 = lean_uint64_to_nat(x_2);
x_4 = lean_nat_to_int(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_round__down___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = l_round__down(x_2);
return x_3;
}
}
static double _init_l_round__up___closed__0() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; double x_4; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = 1;
x_3 = lean_unsigned_to_nat(5u);
x_4 = l_Float_ofScientific(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_round__up(double x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = l_round__up___closed__0;
x_3 = lean_float_add(x_1, x_2);
x_4 = l_round__down(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_round__up___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = l_round__up(x_2);
return x_3;
}
}
LEAN_EXPORT double l_to__real(lean_object* x_1) {
_start:
{
double x_2; 
x_2 = l_Float_ofInt(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_to__real___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = l_to__real(x_1);
lean_dec(x_1);
x_3 = lean_box_float(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_eq__real(double x_1, double x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_float_beq(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_eq__real___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = l_eq__real(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t l_lt__real(double x_1, double x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_float_decLt(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_lt__real___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = l_lt__real(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t l_gt__real(double x_1, double x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_float_decLt(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_gt__real___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = l_gt__real(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t l_lteq__real(double x_1, double x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_float_decLe(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_lteq__real___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = l_lteq__real(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t l_gteq__real(double x_1, double x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_float_decLe(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_gteq__real___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = l_gteq__real(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT double l_real__power(double x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; 
x_3 = l_Float_ofInt(x_2);
x_4 = pow(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_real__power___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; lean_object* x_5; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = l_real__power(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box_float(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_print__real(lean_object* x_1, double x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_print__real___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; lean_object* x_4; 
x_3 = lean_unbox_float(x_2);
lean_dec(x_2);
x_4 = l_print__real(x_1, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_prerr__real(lean_object* x_1, double x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_prerr__real___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; lean_object* x_4; 
x_3 = lean_unbox_float(x_2);
lean_dec(x_2);
x_4 = l_prerr__real(x_1, x_3);
lean_dec(x_1);
return x_4;
}
}
static double _init_l_random__real___closed__0() {
_start:
{
lean_object* x_1; double x_2; 
x_1 = lean_unsigned_to_nat(34u);
x_2 = lean_float_of_nat(x_1);
return x_2;
}
}
LEAN_EXPORT double l_random__real(lean_object* x_1) {
_start:
{
double x_2; 
x_2 = l_random__real___closed__0;
return x_2;
}
}
LEAN_EXPORT lean_object* l_random__real___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = l_random__real(x_1);
lean_dec(x_1);
x_3 = lean_box_float(x_2);
return x_3;
}
}
static double _init_l_undefined__real___redArg___closed__0() {
_start:
{
uint64_t x_1; double x_2; 
x_1 = 0;
x_2 = lean_uint64_to_float(x_1);
return x_2;
}
}
static lean_object* _init_l_undefined__real___redArg___boxed__const__1() {
_start:
{
double x_1; lean_object* x_2; 
x_1 = l_undefined__real___redArg___closed__0;
x_2 = lean_box_float(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_undefined__real___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_undefined__real___redArg___boxed__const__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_undefined__real(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_undefined__real___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_undefined__real___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_undefined__real(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Sail_Sail(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_FakeReal(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Sail_Sail(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_round__up___closed__0 = _init_l_round__up___closed__0();
l_random__real___closed__0 = _init_l_random__real___closed__0();
l_undefined__real___redArg___closed__0 = _init_l_undefined__real___redArg___closed__0();
l_undefined__real___redArg___boxed__const__1 = _init_l_undefined__real___redArg___boxed__const__1();
lean_mark_persistent(l_undefined__real___redArg___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
