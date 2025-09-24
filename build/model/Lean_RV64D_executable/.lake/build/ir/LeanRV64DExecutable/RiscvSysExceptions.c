// Lean compiler output
// Module: LeanRV64DExecutable.RiscvSysExceptions
// Imports: Init LeanRV64DExecutable.RiscvErrors LeanRV64DExecutable.RiscvSysRegs
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
lean_object* l_LeanRV64DExecutable_Functions_internal__error___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__xepc___boxed(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_set__xepc___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_set__xepc___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_handle__trap__extension(uint8_t, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__1;
lean_object* l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_set__stvec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__stvec___redArg(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__0;
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_ext__check__xret__priv(uint8_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_legalize__xepc(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__4;
static lean_object* l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__3;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_set__stvec___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__mtvec___redArg(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__xepc(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__stvec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__fail__xret__priv___boxed(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_get__xepc___closed__0;
lean_object* l_LeanRV64DExecutable_Functions_align__pc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__mtvec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__check__xret__priv___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__stvec___boxed(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_legalize__tvec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_prepare__xret__target___boxed(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_tvec__addr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_prepare__trap__vector___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_handle__trap__extension___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_prepare__trap__vector(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_set__xepc(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_prepare__xret__target(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__fail__xret__priv(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_set__mtvec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_set__mtvec___boxed(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__2;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__mtvec___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_ext__check__xret__priv(uint8_t x_1) {
_start:
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__check__xret__priv___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_LeanRV64DExecutable_Functions_ext__check__xret__priv(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__fail__xret__priv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_ext__fail__xret__priv___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LeanRV64DExecutable_Functions_ext__fail__xret__priv(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_handle__trap__extension(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_handle__trap__extension___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_LeanRV64DExecutable_Functions_handle__trap__extension(x_4, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("riscv_sys_exceptions.sail", 25, 25);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(29u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Invalid tvec mode", 17, 17);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(25u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Invalid privilege level", 23, 23);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_prepare__trap__vector(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
switch (x_1) {
case 0:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__0;
x_25 = l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__3;
x_26 = l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__4;
x_27 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_24, x_25, x_26, x_3);
x_4 = x_27;
goto block_23;
}
case 1:
{
uint8_t x_28; lean_object* x_29; 
x_28 = 63;
x_29 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_28, x_3);
x_4 = x_29;
goto block_23;
}
default: 
{
uint8_t x_30; lean_object* x_31; 
x_30 = 80;
x_31 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_30, x_3);
x_4 = x_31;
goto block_23;
}
}
block_23:
{
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = l_LeanRV64DExecutable_Functions_tvec__addr(x_6, x_2);
lean_dec(x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_free_object(x_4);
x_9 = l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__0;
x_10 = l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__1;
x_11 = l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__2;
x_12 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_9, x_10, x_11, x_7);
return x_12;
}
else
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_8, 0);
lean_inc(x_13);
lean_dec(x_8);
lean_ctor_set(x_4, 0, x_13);
return x_4;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_4, 0);
x_15 = lean_ctor_get(x_4, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_4);
x_16 = l_LeanRV64DExecutable_Functions_tvec__addr(x_14, x_2);
lean_dec(x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__0;
x_18 = l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__1;
x_19 = l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__2;
x_20 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_17, x_18, x_19, x_15);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_16, 0);
lean_inc(x_21);
lean_dec(x_16);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_15);
return x_22;
}
}
}
else
{
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_prepare__trap__vector___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_LeanRV64DExecutable_Functions_prepare__trap__vector(x_4, x_2, x_3);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_get__xepc___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(45u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__xepc(uint8_t x_1, lean_object* x_2) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__0;
x_4 = l_LeanRV64DExecutable_Functions_get__xepc___closed__0;
x_5 = l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__4;
x_6 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_3, x_4, x_5, x_2);
return x_6;
}
case 1:
{
uint8_t x_7; lean_object* x_8; 
x_7 = 61;
x_8 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_7, x_2);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_LeanRV64DExecutable_Functions_align__pc(x_9, x_10);
lean_dec(x_9);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_8);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_8, 0);
lean_dec(x_13);
x_14 = lean_box(1);
lean_ctor_set(x_8, 0, x_14);
return x_8;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_box(1);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
default: 
{
uint8_t x_18; lean_object* x_19; 
x_18 = 78;
x_19 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_18, x_2);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_LeanRV64DExecutable_Functions_align__pc(x_20, x_21);
lean_dec(x_20);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_19);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_19, 0);
lean_dec(x_24);
x_25 = lean_box(1);
lean_ctor_set(x_19, 0, x_25);
return x_19;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_dec(x_19);
x_27 = lean_box(1);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__xepc___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_LeanRV64DExecutable_Functions_get__xepc(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_set__xepc___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(54u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_set__xepc(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_legalize__xepc(x_2);
switch (x_1) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
lean_dec(x_4);
x_5 = l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__0;
x_6 = l_LeanRV64DExecutable_Functions_set__xepc___closed__0;
x_7 = l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__4;
x_8 = l_LeanRV64DExecutable_Functions_internal__error___redArg(x_5, x_6, x_7, x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
return x_8;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_8);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
case 1:
{
uint8_t x_13; lean_object* x_14; uint8_t x_15; 
x_13 = 61;
lean_inc(x_4);
x_14 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_13, x_4, x_3);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
lean_ctor_set(x_14, 0, x_4);
return x_14;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_4);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
default: 
{
uint8_t x_19; lean_object* x_20; uint8_t x_21; 
x_19 = 78;
lean_inc(x_4);
x_20 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_19, x_4, x_3);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_4);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_set__xepc___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_LeanRV64DExecutable_Functions_set__xepc(x_4, x_2, x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_prepare__xret__target(uint8_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_get__xepc(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_prepare__xret__target___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_LeanRV64DExecutable_Functions_prepare__xret__target(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__mtvec___redArg(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = 80;
x_3 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__mtvec(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_get__mtvec___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__mtvec___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_get__mtvec(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__stvec___redArg(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = 63;
x_3 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__stvec(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_get__stvec___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_get__stvec___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_get__stvec(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_set__mtvec(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = 80;
x_4 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_LeanRV64DExecutable_Functions_legalize__tvec(x_5, x_1);
lean_dec(x_5);
x_8 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_3, x_7, x_6);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_9);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_4, 0);
lean_dec(x_12);
x_13 = lean_box(1);
lean_ctor_set(x_4, 0, x_13);
return x_4;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_dec(x_4);
x_15 = lean_box(1);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_set__mtvec___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_set__mtvec(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_set__stvec(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = 63;
x_4 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_LeanRV64DExecutable_Functions_legalize__tvec(x_5, x_1);
lean_dec(x_5);
x_8 = l_PreSail_writeReg___at___PreSail_writeRegRef___at___LeanRV64DExecutable_Functions___set__Misa__A_spec__1_spec__1___redArg(x_3, x_7, x_6);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_3, x_9);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_4, 0);
lean_dec(x_12);
x_13 = lean_box(1);
lean_ctor_set(x_4, 0, x_13);
return x_4;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_dec(x_4);
x_15 = lean_box(1);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_set__stvec___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_set__stvec(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvErrors(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSysRegs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvSysExceptions(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvErrors(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSysRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__0 = _init_l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__0);
l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__1 = _init_l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__1);
l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__2 = _init_l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__2);
l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__3 = _init_l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__3);
l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__4 = _init_l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_prepare__trap__vector___closed__4);
l_LeanRV64DExecutable_Functions_get__xepc___closed__0 = _init_l_LeanRV64DExecutable_Functions_get__xepc___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_get__xepc___closed__0);
l_LeanRV64DExecutable_Functions_set__xepc___closed__0 = _init_l_LeanRV64DExecutable_Functions_set__xepc___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_set__xepc___closed__0);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
