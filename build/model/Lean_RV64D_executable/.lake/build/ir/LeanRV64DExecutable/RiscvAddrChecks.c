// Lean compiler output
// Module: LeanRV64DExecutable.RiscvAddrChecks
// Imports: Init LeanRV64DExecutable.RiscvRegs
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
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__check__phys__mem__read___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__check__phys__mem__read(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__handle__fetch__check__error___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__fetch__check__pc(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_ext__check__phys__mem__read___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__control__check__pc(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__fetch__check__pc___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__handle__fetch__check__error(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__handle__control__check__error___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__data__get__addr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__control__check__addr(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__fetch__check__pc___redArg(lean_object*);
lean_object* l_BitVec_add(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__check__phys__mem__write___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__handle__data__check__error___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__data__get__addr___redArg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_rX(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__handle__data__check__error(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__data__get__addr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_ext__data__get__addr___redArg___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__check__phys__mem__write(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__data__get__addr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__handle__control__check__error(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__fetch__check__pc___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__fetch__check__pc(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__fetch__check__pc___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_ext__fetch__check__pc(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__handle__fetch__check__error(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__handle__fetch__check__error___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_ext__handle__fetch__check__error(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__control__check__addr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__control__check__pc(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__handle__control__check__error(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__handle__control__check__error___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_ext__handle__control__check__error(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_ext__data__get__addr___redArg___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_nat_mul(x_1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__data__get__addr___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_rX(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_LeanRV64DExecutable_Functions_ext__data__get__addr___redArg___closed__0;
x_8 = l_BitVec_add(x_7, x_6, x_2);
lean_dec(x_6);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_4, 0, x_9);
return x_4;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_4);
x_12 = l_LeanRV64DExecutable_Functions_ext__data__get__addr___redArg___closed__0;
x_13 = l_BitVec_add(x_12, x_10, x_2);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_11);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_4);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_4, 0);
lean_dec(x_17);
x_18 = lean_box(1);
lean_ctor_set(x_4, 0, x_18);
return x_4;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_19);
lean_dec(x_4);
x_20 = lean_box(1);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__data__get__addr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LeanRV64DExecutable_Functions_ext__data__get__addr___redArg(x_1, x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__data__get__addr___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_ext__data__get__addr___redArg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__data__get__addr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LeanRV64DExecutable_Functions_ext__data__get__addr(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__handle__data__check__error(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__handle__data__check__error___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_ext__handle__data__check__error(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_ext__check__phys__mem__read___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__check__phys__mem__read(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, uint8_t x_6, uint8_t x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LeanRV64DExecutable_Functions_ext__check__phys__mem__read___closed__0;
return x_8;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__check__phys__mem__read___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = lean_unbox(x_6);
lean_dec(x_6);
x_11 = lean_unbox(x_7);
lean_dec(x_7);
x_12 = l_LeanRV64DExecutable_Functions_ext__check__phys__mem__read(x_1, x_2, x_3, x_8, x_9, x_10, x_11);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__check__phys__mem__write(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LeanRV64DExecutable_Functions_ext__check__phys__mem__read___closed__0;
return x_6;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__check__phys__mem__write___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_LeanRV64DExecutable_Functions_ext__check__phys__mem__write(x_6, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvRegs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvAddrChecks(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_ext__data__get__addr___redArg___closed__0 = _init_l_LeanRV64DExecutable_Functions_ext__data__get__addr___redArg___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_ext__data__get__addr___redArg___closed__0);
l_LeanRV64DExecutable_Functions_ext__check__phys__mem__read___closed__0 = _init_l_LeanRV64DExecutable_Functions_ext__check__phys__mem__read___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_ext__check__phys__mem__read___closed__0);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
