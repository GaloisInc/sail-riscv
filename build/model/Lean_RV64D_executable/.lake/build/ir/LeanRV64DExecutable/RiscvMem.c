// Lean compiler output
// Module: LeanRV64DExecutable.RiscvMem
// Imports: Init LeanRV64DExecutable.Prelude LeanRV64DExecutable.PreludeMemAddrtype LeanRV64DExecutable.PreludeMemMetadata LeanRV64DExecutable.PreludeMem LeanRV64DExecutable.RiscvTypes LeanRV64DExecutable.RiscvVmemTypes LeanRV64DExecutable.RiscvCallbacks LeanRV64DExecutable.RiscvSysRegs LeanRV64DExecutable.RiscvPmpRegs LeanRV64DExecutable.RiscvPmpControl LeanRV64DExecutable.RiscvAddrChecks LeanRV64DExecutable.RiscvSysControl LeanRV64DExecutable.RiscvPlatform
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
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__mem__read___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__5;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__ea___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_checked__mem__read___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_pmpCheck(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
uint8_t l_LeanRV64DExecutable_Functions_not(uint8_t);
static lean_object* l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__2;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__value__priv(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__4;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__mem__write___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__3;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__mem__read(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__value__priv__meta(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__3;
lean_object* lean_int_emod(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__0;
static lean_object* l_LeanRV64DExecutable_Functions_mem__write__ea___closed__1;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_is__aligned__paddr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__access__check(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_within__mmio__readable(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_write__kind__of__flags___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__read__priv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__mem__read___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
lean_object* l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_write__kind__of__flags(uint8_t, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__value__priv__meta___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__value(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__2;
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_is__aligned__paddr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__3;
static lean_object* l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__1;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_read__kind__of__flags___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__read__priv__meta___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_LeanRV64DExecutable_Functions_sys__pmp__count;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__access__check___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_checked__mem__write___closed__0;
static lean_object* l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__1;
lean_object* l_LeanRV64DExecutable_Functions_mmio__read(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__value__meta(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_checked__mem__write___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_is__aligned__paddr___closed__0;
lean_object* l_BitVec_extractLsb___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__read(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_read__ram___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__3;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_checked__mem__write(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_within__mmio__writable(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_is__aligned__bits(lean_object*, uint8_t);
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_is__aligned__vaddr(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__1;
lean_object* l_LeanRV64DExecutable_Functions_within__phys__mem(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_checked__mem__read(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__4;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__value__priv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__2;
static uint8_t l_LeanRV64DExecutable_Functions_phys__access__check___closed__0;
static lean_object* l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__0;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__read___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__5;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__mem__write(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_mem__write__ea___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_read__kind__of__flags(uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__read__meta(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_mem__write__value__priv___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__read__priv(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__value___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_mmio__write(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_is__aligned__bits___boxed(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_mem__write__value__priv__meta___closed__0;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__read__meta___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_mem__write__ea___closed__2;
static lean_object* l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__1;
lean_object* l_LeanRV64DExecutable_Functions_MemoryOpResult__add__meta___redArg(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_write__ram___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__0;
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__4;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__mem__write___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_MemoryOpResult__drop__meta___redArg(lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__mem__write___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_effectivePrivilege(lean_object*, lean_object*, uint8_t, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__2;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_is__aligned__vaddr___boxed(lean_object*, lean_object*);
lean_object* l_PreSail_sailThrow___at___Sail_sailThrow_spec__0___redArg(lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__5;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__read__priv__meta(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__value__meta___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__ea(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
static lean_object* _init_l_LeanRV64DExecutable_Functions_is__aligned__paddr___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_is__aligned__paddr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_nat_to_int(x_1);
x_4 = lean_int_emod(x_3, x_2);
lean_dec(x_3);
x_5 = l_LeanRV64DExecutable_Functions_is__aligned__paddr___closed__0;
x_6 = lean_int_dec_eq(x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_is__aligned__paddr___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_LeanRV64DExecutable_Functions_is__aligned__paddr(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_is__aligned__vaddr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_nat_to_int(x_1);
x_4 = lean_int_emod(x_3, x_2);
lean_dec(x_3);
x_5 = l_LeanRV64DExecutable_Functions_is__aligned__paddr___closed__0;
x_6 = lean_int_dec_eq(x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_is__aligned__vaddr___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_LeanRV64DExecutable_Functions_is__aligned__vaddr(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_LeanRV64DExecutable_Functions_is__aligned__bits(lean_object* x_1, uint8_t x_2) {
_start:
{
switch (x_2) {
case 0:
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
case 1:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_BitVec_extractLsb___redArg(x_4, x_4, x_1);
x_6 = lean_nat_dec_eq(x_5, x_4);
lean_dec(x_5);
return x_6;
}
case 2:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_BitVec_extractLsb___redArg(x_7, x_8, x_1);
x_10 = lean_nat_dec_eq(x_9, x_8);
lean_dec(x_9);
return x_10;
}
default: 
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_BitVec_extractLsb___redArg(x_11, x_12, x_1);
x_14 = lean_nat_dec_eq(x_13, x_12);
lean_dec(x_13);
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_is__aligned__bits___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_LeanRV64DExecutable_Functions_is__aligned__bits(x_1, x_3);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__0() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 0;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 4;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 2;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 5;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__4() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 3;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__5() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 6;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_read__kind__of__flags(uint8_t x_1, uint8_t x_2, uint8_t x_3) {
_start:
{
if (x_1 == 0)
{
if (x_2 == 0)
{
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__0;
return x_4;
}
else
{
lean_object* x_5; 
x_5 = l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__1;
return x_5;
}
}
else
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
else
{
if (x_2 == 0)
{
if (x_3 == 0)
{
lean_object* x_7; 
x_7 = l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__2;
return x_7;
}
else
{
lean_object* x_8; 
x_8 = l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__3;
return x_8;
}
}
else
{
if (x_3 == 0)
{
lean_object* x_9; 
x_9 = l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__4;
return x_9;
}
else
{
lean_object* x_10; 
x_10 = l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__5;
return x_10;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_read__kind__of__flags___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_LeanRV64DExecutable_Functions_read__kind__of__flags(x_4, x_5, x_6);
return x_7;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("store.aq", 8, 8);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__0;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("sc.aq", 5, 5);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_write__kind__of__flags(uint8_t x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
if (x_1 == 0)
{
if (x_2 == 0)
{
if (x_3 == 0)
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; 
x_5 = 0;
x_6 = lean_box(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
else
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_8 = 3;
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
}
else
{
if (x_3 == 0)
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_11 = 1;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_4);
return x_13;
}
else
{
uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_14 = 4;
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_4);
return x_16;
}
}
}
else
{
if (x_2 == 0)
{
if (x_3 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__1;
x_18 = l_PreSail_sailThrow___at___Sail_sailThrow_spec__0___redArg(x_17, x_4);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__3;
x_20 = l_PreSail_sailThrow___at___Sail_sailThrow_spec__0___redArg(x_19, x_4);
return x_20;
}
}
else
{
if (x_3 == 0)
{
uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_21 = 2;
x_22 = lean_box(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_4);
return x_23;
}
else
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_24 = 5;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_4);
return x_26;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_write__kind__of__flags___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = lean_unbox(x_2);
lean_dec(x_2);
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = l_LeanRV64DExecutable_Functions_write__kind__of__flags(x_5, x_6, x_7, x_4);
return x_8;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__0;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__4;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__mem__read___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_15; lean_object* x_16; lean_object* x_33; 
x_33 = l_LeanRV64DExecutable_Functions_read__kind__of__flags(x_4, x_5, x_6);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; 
lean_dec(x_3);
lean_dec(x_2);
x_34 = lean_box(0);
x_15 = x_34;
x_16 = x_7;
goto block_32;
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_33);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_33, 0);
x_37 = lean_unbox(x_36);
lean_dec(x_36);
x_38 = l_LeanRV64DExecutable_Functions_read__ram___redArg(x_37, x_2, x_3, x_7);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
lean_ctor_set(x_33, 0, x_39);
x_15 = x_33;
x_16 = x_40;
goto block_32;
}
else
{
uint8_t x_41; 
lean_free_object(x_33);
x_41 = !lean_is_exclusive(x_38);
if (x_41 == 0)
{
return x_38;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_38, 0);
x_43 = lean_ctor_get(x_38, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_38);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; uint8_t x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_33, 0);
lean_inc(x_45);
lean_dec(x_33);
x_46 = lean_unbox(x_45);
lean_dec(x_45);
x_47 = l_LeanRV64DExecutable_Functions_read__ram___redArg(x_46, x_2, x_3, x_7);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_48);
x_15 = x_50;
x_16 = x_49;
goto block_32;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_47, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_47, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_53 = x_47;
} else {
 lean_dec_ref(x_47);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(1, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
}
block_14:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
block_32:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__1;
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_8 = x_20;
x_9 = x_21;
x_10 = x_16;
goto block_14;
}
}
case 3:
{
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__3;
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_16);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_15, 0);
lean_inc(x_24);
lean_dec(x_15);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_8 = x_25;
x_9 = x_26;
x_10 = x_16;
goto block_14;
}
}
default: 
{
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__5;
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_16);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_15, 0);
lean_inc(x_29);
lean_dec(x_15);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_8 = x_30;
x_9 = x_31;
x_10 = x_16;
goto block_14;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__mem__read(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LeanRV64DExecutable_Functions_phys__mem__read___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = lean_unbox(x_6);
lean_dec(x_6);
x_11 = l_LeanRV64DExecutable_Functions_phys__mem__read___redArg(x_1, x_2, x_3, x_8, x_9, x_10, x_7);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__mem__read___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_9 = lean_unbox(x_4);
lean_dec(x_4);
x_10 = lean_unbox(x_5);
lean_dec(x_5);
x_11 = lean_unbox(x_6);
lean_dec(x_6);
x_12 = lean_unbox(x_7);
lean_dec(x_7);
x_13 = l_LeanRV64DExecutable_Functions_phys__mem__read(x_1, x_2, x_3, x_9, x_10, x_11, x_12, x_8);
lean_dec(x_1);
return x_13;
}
}
static uint8_t _init_l_LeanRV64DExecutable_Functions_phys__access__check___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_LeanRV64DExecutable_Functions_is__aligned__paddr___closed__0;
x_2 = l_LeanRV64DExecutable_Functions_sys__pmp__count;
x_3 = lean_int_dec_eq(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__access__check(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = l_LeanRV64DExecutable_Functions_phys__access__check___closed__0;
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = l_LeanRV64DExecutable_Functions_pmpCheck(x_3, x_4, x_1, x_2, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__access__check___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_2);
lean_dec(x_2);
x_7 = l_LeanRV64DExecutable_Functions_phys__access__check(x_1, x_6, x_3, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_checked__mem__read(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, uint8_t x_7, uint8_t x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_LeanRV64DExecutable_Functions_phys__access__check(x_1, x_2, x_3, x_4, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_4);
lean_inc(x_3);
x_13 = l_LeanRV64DExecutable_Functions_within__mmio__readable(x_3, x_4, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_4);
lean_inc(x_3);
x_16 = l_LeanRV64DExecutable_Functions_mmio__read(x_1, x_3, x_4, x_15);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = lean_unbox(x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_4);
x_19 = lean_nat_to_int(x_4);
lean_inc(x_3);
x_20 = l_LeanRV64DExecutable_Functions_within__phys__mem(x_3, x_19, x_18);
lean_dec(x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_unbox(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_23; 
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_20);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_20, 0);
lean_dec(x_24);
x_25 = l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__1;
lean_ctor_set(x_20, 0, x_25);
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 1);
lean_inc(x_26);
lean_dec(x_20);
x_27 = l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__1;
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
case 3:
{
uint8_t x_29; 
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_20);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_20, 0);
lean_dec(x_30);
x_31 = l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__3;
lean_ctor_set(x_20, 0, x_31);
return x_20;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_20, 1);
lean_inc(x_32);
lean_dec(x_20);
x_33 = l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__3;
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
default: 
{
uint8_t x_35; 
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_20);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_20, 0);
lean_dec(x_36);
x_37 = l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__5;
lean_ctor_set(x_20, 0, x_37);
return x_20;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_20, 1);
lean_inc(x_38);
lean_dec(x_20);
x_39 = l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__5;
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
}
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_20, 1);
lean_inc(x_41);
lean_dec(x_20);
x_42 = l_LeanRV64DExecutable_Functions_phys__mem__read___redArg(x_1, x_3, x_4, x_5, x_6, x_7, x_41);
lean_dec(x_1);
return x_42;
}
}
else
{
uint8_t x_43; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_20);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_20, 0);
lean_dec(x_44);
x_45 = lean_box(1);
lean_ctor_set(x_20, 0, x_45);
return x_20;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_20, 1);
lean_inc(x_46);
lean_dec(x_20);
x_47 = lean_box(1);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_16);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_16, 0);
x_51 = lean_box(0);
x_52 = l_LeanRV64DExecutable_Functions_MemoryOpResult__add__meta___redArg(x_50, x_51);
lean_ctor_set(x_16, 0, x_52);
return x_16;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_53 = lean_ctor_get(x_16, 0);
x_54 = lean_ctor_get(x_16, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_16);
x_55 = lean_box(0);
x_56 = l_LeanRV64DExecutable_Functions_MemoryOpResult__add__meta___redArg(x_53, x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
return x_57;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_16);
if (x_58 == 0)
{
return x_16;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_16, 0);
x_60 = lean_ctor_get(x_16, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_16);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_62 = !lean_is_exclusive(x_13);
if (x_62 == 0)
{
return x_13;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_13, 0);
x_64 = lean_ctor_get(x_13, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_13);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_66 = !lean_is_exclusive(x_10);
if (x_66 == 0)
{
lean_object* x_67; uint8_t x_68; 
x_67 = lean_ctor_get(x_10, 0);
lean_dec(x_67);
x_68 = !lean_is_exclusive(x_11);
if (x_68 == 0)
{
return x_10;
}
else
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_11, 0);
lean_inc(x_69);
lean_dec(x_11);
x_70 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_10, 0, x_70);
return x_10;
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_71 = lean_ctor_get(x_10, 1);
lean_inc(x_71);
lean_dec(x_10);
x_72 = lean_ctor_get(x_11, 0);
lean_inc(x_72);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 x_73 = x_11;
} else {
 lean_dec_ref(x_11);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(1, 1, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_72);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_71);
return x_75;
}
}
}
else
{
uint8_t x_76; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_76 = !lean_is_exclusive(x_10);
if (x_76 == 0)
{
return x_10;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_10, 0);
x_78 = lean_ctor_get(x_10, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_10);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_checked__mem__read___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; uint8_t x_11; uint8_t x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = lean_unbox(x_5);
lean_dec(x_5);
x_12 = lean_unbox(x_6);
lean_dec(x_6);
x_13 = lean_unbox(x_7);
lean_dec(x_7);
x_14 = lean_unbox(x_8);
lean_dec(x_8);
x_15 = l_LeanRV64DExecutable_Functions_checked__mem__read(x_1, x_10, x_3, x_4, x_11, x_12, x_13, x_14, x_9);
return x_15;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("load.rl", 7, 7);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__0;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("lr.rl", 5, 5);
return x_1;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__4;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__read__priv__meta(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, uint8_t x_7, uint8_t x_8, lean_object* x_9) {
_start:
{
if (x_5 == 0)
{
if (x_7 == 0)
{
goto block_16;
}
else
{
goto block_22;
}
}
else
{
goto block_22;
}
block_16:
{
if (x_5 == 0)
{
if (x_6 == 0)
{
lean_object* x_10; 
x_10 = l_LeanRV64DExecutable_Functions_checked__mem__read(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
else
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
if (x_7 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__1;
x_12 = l_PreSail_sailThrow___at___Sail_sailThrow_spec__0___redArg(x_11, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__3;
x_14 = l_PreSail_sailThrow___at___Sail_sailThrow_spec__0___redArg(x_13, x_9);
return x_14;
}
}
}
else
{
lean_object* x_15; 
x_15 = l_LeanRV64DExecutable_Functions_checked__mem__read(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_15;
}
}
block_22:
{
lean_object* x_17; uint8_t x_18; uint8_t x_19; 
lean_inc(x_4);
x_17 = lean_nat_to_int(x_4);
lean_inc(x_3);
x_18 = l_LeanRV64DExecutable_Functions_is__aligned__paddr(x_3, x_17);
lean_dec(x_17);
x_19 = l_LeanRV64DExecutable_Functions_not(x_18);
if (x_19 == 0)
{
goto block_16;
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_20 = l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__5;
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_9);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__read__priv__meta___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; uint8_t x_11; uint8_t x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = lean_unbox(x_5);
lean_dec(x_5);
x_12 = lean_unbox(x_6);
lean_dec(x_6);
x_13 = lean_unbox(x_7);
lean_dec(x_7);
x_14 = lean_unbox(x_8);
lean_dec(x_8);
x_15 = l_LeanRV64DExecutable_Functions_mem__read__priv__meta(x_1, x_10, x_3, x_4, x_11, x_12, x_13, x_14, x_9);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__read__meta(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = 87;
x_10 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_9, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = 90;
x_14 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_13, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unbox(x_15);
lean_dec(x_15);
x_18 = l_LeanRV64DExecutable_Functions_effectivePrivilege(x_1, x_11, x_17, x_16);
lean_dec(x_11);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_unbox(x_19);
lean_dec(x_19);
x_22 = l_LeanRV64DExecutable_Functions_mem__read__priv__meta(x_1, x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_20);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_11);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_14);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_14, 0);
lean_dec(x_28);
x_29 = lean_box(1);
lean_ctor_set(x_14, 0, x_29);
return x_14;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_14, 1);
lean_inc(x_30);
lean_dec(x_14);
x_31 = lean_box(1);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_10);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_10, 0);
lean_dec(x_34);
x_35 = lean_box(1);
lean_ctor_set(x_10, 0, x_35);
return x_10;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_10, 1);
lean_inc(x_36);
lean_dec(x_10);
x_37 = lean_box(1);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__read__meta___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_9 = lean_unbox(x_4);
lean_dec(x_4);
x_10 = lean_unbox(x_5);
lean_dec(x_5);
x_11 = lean_unbox(x_6);
lean_dec(x_6);
x_12 = lean_unbox(x_7);
lean_dec(x_7);
x_13 = l_LeanRV64DExecutable_Functions_mem__read__meta(x_1, x_2, x_3, x_9, x_10, x_11, x_12, x_8);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__read__priv(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = 0;
x_10 = l_LeanRV64DExecutable_Functions_mem__read__priv__meta(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_9, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_LeanRV64DExecutable_Functions_MemoryOpResult__drop__meta___redArg(x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = l_LeanRV64DExecutable_Functions_MemoryOpResult__drop__meta___redArg(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__read__priv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = lean_unbox(x_5);
lean_dec(x_5);
x_11 = lean_unbox(x_6);
lean_dec(x_6);
x_12 = lean_unbox(x_7);
lean_dec(x_7);
x_13 = l_LeanRV64DExecutable_Functions_mem__read__priv(x_1, x_9, x_3, x_4, x_10, x_11, x_12, x_8);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__read(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = 87;
x_9 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_8, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = 90;
x_13 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_12, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_unbox(x_14);
lean_dec(x_14);
x_17 = l_LeanRV64DExecutable_Functions_effectivePrivilege(x_1, x_10, x_16, x_15);
lean_dec(x_10);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_unbox(x_18);
lean_dec(x_18);
x_21 = l_LeanRV64DExecutable_Functions_mem__read__priv(x_1, x_20, x_2, x_3, x_4, x_5, x_6, x_19);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_13);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_13, 0);
lean_dec(x_27);
x_28 = lean_box(1);
lean_ctor_set(x_13, 0, x_28);
return x_13;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_13, 1);
lean_inc(x_29);
lean_dec(x_13);
x_30 = lean_box(1);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_9);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_9, 0);
lean_dec(x_33);
x_34 = lean_box(1);
lean_ctor_set(x_9, 0, x_34);
return x_9;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_9, 1);
lean_inc(x_35);
lean_dec(x_9);
x_36 = lean_box(1);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__read___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = lean_unbox(x_6);
lean_dec(x_6);
x_11 = l_LeanRV64DExecutable_Functions_mem__read(x_1, x_2, x_3, x_8, x_9, x_10, x_7);
return x_11;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_mem__write__ea___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_mem__write__ea___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_mem__write__ea___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_mem__write__ea___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__ea(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LeanRV64DExecutable_Functions_write__kind__of__flags(x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_9 = x_7;
} else {
 lean_dec_ref(x_7);
 x_9 = lean_box(0);
}
if (x_4 == 0)
{
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
goto block_12;
}
else
{
goto block_18;
}
}
else
{
goto block_18;
}
block_12:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_LeanRV64DExecutable_Functions_mem__write__ea___closed__0;
if (lean_is_scalar(x_9)) {
 x_11 = lean_alloc_ctor(0, 2, 0);
} else {
 x_11 = x_9;
}
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
block_18:
{
lean_object* x_13; uint8_t x_14; uint8_t x_15; 
x_13 = lean_nat_to_int(x_2);
x_14 = l_LeanRV64DExecutable_Functions_is__aligned__paddr(x_1, x_13);
lean_dec(x_13);
x_15 = l_LeanRV64DExecutable_Functions_not(x_14);
if (x_15 == 0)
{
goto block_12;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_9);
x_16 = l_LeanRV64DExecutable_Functions_mem__write__ea___closed__2;
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_8);
return x_17;
}
}
}
else
{
uint8_t x_19; 
lean_dec(x_2);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_7);
if (x_19 == 0)
{
return x_7;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_7, 0);
x_21 = lean_ctor_get(x_7, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_7);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__ea___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = l_LeanRV64DExecutable_Functions_mem__write__ea(x_1, x_2, x_7, x_8, x_9, x_6);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__mem__write___redArg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_LeanRV64DExecutable_Functions_write__ram___redArg(x_1, x_2, x_3, x_4, x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_6);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__mem__write(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LeanRV64DExecutable_Functions_phys__mem__write___redArg(x_1, x_2, x_3, x_4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__mem__write___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_LeanRV64DExecutable_Functions_phys__mem__write___redArg(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_phys__mem__write___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_1);
lean_dec(x_1);
x_8 = l_LeanRV64DExecutable_Functions_phys__mem__write(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_8;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_checked__mem__write___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__4;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_checked__mem__write(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, uint8_t x_7, uint8_t x_8, uint8_t x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_LeanRV64DExecutable_Functions_phys__access__check(x_4, x_5, x_1, x_2, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_LeanRV64DExecutable_Functions_within__mmio__writable(x_1, x_2, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
lean_inc(x_2);
x_18 = lean_nat_to_int(x_2);
lean_inc(x_1);
x_19 = l_LeanRV64DExecutable_Functions_within__phys__mem(x_1, x_18, x_17);
lean_dec(x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
uint8_t x_22; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_19);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_19, 0);
lean_dec(x_23);
x_24 = l_LeanRV64DExecutable_Functions_checked__mem__write___closed__0;
lean_ctor_set(x_19, 0, x_24);
return x_19;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_dec(x_19);
x_26 = l_LeanRV64DExecutable_Functions_checked__mem__write___closed__0;
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
lean_dec(x_19);
x_29 = l_LeanRV64DExecutable_Functions_write__kind__of__flags(x_7, x_8, x_9, x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_unbox(x_30);
lean_dec(x_30);
x_33 = l_LeanRV64DExecutable_Functions_phys__mem__write___redArg(x_32, x_1, x_2, x_3, x_31);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_29);
if (x_34 == 0)
{
return x_29;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_29, 0);
x_36 = lean_ctor_get(x_29, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_29);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_19);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_19, 0);
lean_dec(x_39);
x_40 = lean_box(1);
lean_ctor_set(x_19, 0, x_40);
return x_19;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_19, 1);
lean_inc(x_41);
lean_dec(x_19);
x_42 = lean_box(1);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_14, 1);
lean_inc(x_44);
lean_dec(x_14);
x_45 = l_LeanRV64DExecutable_Functions_mmio__write(x_1, x_2, x_3, x_44);
lean_dec(x_3);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_14);
if (x_46 == 0)
{
return x_14;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_14, 0);
x_48 = lean_ctor_get(x_14, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_14);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_11);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; 
x_51 = lean_ctor_get(x_11, 0);
lean_dec(x_51);
x_52 = !lean_is_exclusive(x_12);
if (x_52 == 0)
{
return x_11;
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_12, 0);
lean_inc(x_53);
lean_dec(x_12);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_11, 0, x_54);
return x_11;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_55 = lean_ctor_get(x_11, 1);
lean_inc(x_55);
lean_dec(x_11);
x_56 = lean_ctor_get(x_12, 0);
lean_inc(x_56);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 x_57 = x_12;
} else {
 lean_dec_ref(x_12);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(1, 1, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_56);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_55);
return x_59;
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_11);
if (x_60 == 0)
{
return x_11;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_11, 0);
x_62 = lean_ctor_get(x_11, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_11);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_checked__mem__write___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; uint8_t x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_11 = lean_unbox(x_5);
lean_dec(x_5);
x_12 = lean_unbox(x_7);
lean_dec(x_7);
x_13 = lean_unbox(x_8);
lean_dec(x_8);
x_14 = lean_unbox(x_9);
lean_dec(x_9);
x_15 = l_LeanRV64DExecutable_Functions_checked__mem__write(x_1, x_2, x_3, x_4, x_11, x_6, x_12, x_13, x_14, x_10);
lean_dec(x_6);
return x_15;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_mem__write__value__priv__meta___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_LeanRV64DExecutable_Functions_mem__write__ea___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__value__priv__meta(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, uint8_t x_7, uint8_t x_8, uint8_t x_9, lean_object* x_10) {
_start:
{
if (x_8 == 0)
{
if (x_9 == 0)
{
lean_object* x_18; 
x_18 = l_LeanRV64DExecutable_Functions_checked__mem__write(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_18;
}
else
{
goto block_17;
}
}
else
{
goto block_17;
}
block_17:
{
lean_object* x_11; uint8_t x_12; uint8_t x_13; 
lean_inc(x_2);
x_11 = lean_nat_to_int(x_2);
lean_inc(x_1);
x_12 = l_LeanRV64DExecutable_Functions_is__aligned__paddr(x_1, x_11);
lean_dec(x_11);
x_13 = l_LeanRV64DExecutable_Functions_not(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = l_LeanRV64DExecutable_Functions_checked__mem__write(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = l_LeanRV64DExecutable_Functions_mem__write__value__priv__meta___closed__0;
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_10);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__value__priv__meta___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; uint8_t x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_11 = lean_unbox(x_5);
lean_dec(x_5);
x_12 = lean_unbox(x_7);
lean_dec(x_7);
x_13 = lean_unbox(x_8);
lean_dec(x_8);
x_14 = lean_unbox(x_9);
lean_dec(x_9);
x_15 = l_LeanRV64DExecutable_Functions_mem__write__value__priv__meta(x_1, x_2, x_3, x_4, x_11, x_6, x_12, x_13, x_14, x_10);
lean_dec(x_6);
return x_15;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_mem__write__value__priv___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__value__priv(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_box(0);
x_10 = l_LeanRV64DExecutable_Functions_mem__write__value__priv___closed__0;
x_11 = l_LeanRV64DExecutable_Functions_mem__write__value__priv__meta(x_1, x_2, x_3, x_10, x_4, x_9, x_5, x_6, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__value__priv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_9 = lean_unbox(x_4);
lean_dec(x_4);
x_10 = lean_unbox(x_5);
lean_dec(x_5);
x_11 = lean_unbox(x_6);
lean_dec(x_6);
x_12 = lean_unbox(x_7);
lean_dec(x_7);
x_13 = l_LeanRV64DExecutable_Functions_mem__write__value__priv(x_1, x_2, x_3, x_9, x_10, x_11, x_12, x_8);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__value__meta(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, uint8_t x_7, uint8_t x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = 87;
x_11 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_10, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = 90;
x_15 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_14, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_4);
x_19 = lean_unbox(x_16);
lean_dec(x_16);
x_20 = l_LeanRV64DExecutable_Functions_effectivePrivilege(x_18, x_12, x_19, x_17);
lean_dec(x_12);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_unbox(x_21);
lean_dec(x_21);
x_24 = l_LeanRV64DExecutable_Functions_mem__write__value__priv__meta(x_1, x_2, x_3, x_18, x_23, x_5, x_6, x_7, x_8, x_22);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_18);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_20);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_15);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_15, 0);
lean_dec(x_30);
x_31 = lean_box(1);
lean_ctor_set(x_15, 0, x_31);
return x_15;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_15, 1);
lean_inc(x_32);
lean_dec(x_15);
x_33 = lean_box(1);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_11);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_11, 0);
lean_dec(x_36);
x_37 = lean_box(1);
lean_ctor_set(x_11, 0, x_37);
return x_11;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_11, 1);
lean_inc(x_38);
lean_dec(x_11);
x_39 = lean_box(1);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__value__meta___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_10 = lean_unbox(x_6);
lean_dec(x_6);
x_11 = lean_unbox(x_7);
lean_dec(x_7);
x_12 = lean_unbox(x_8);
lean_dec(x_8);
x_13 = l_LeanRV64DExecutable_Functions_mem__write__value__meta(x_1, x_2, x_3, x_4, x_5, x_10, x_11, x_12, x_9);
lean_dec(x_5);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__value(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_box(0);
x_9 = l_LeanRV64DExecutable_Functions_mem__write__value__meta(x_1, x_2, x_3, x_8, x_8, x_4, x_5, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_mem__write__value___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = lean_unbox(x_6);
lean_dec(x_6);
x_11 = l_LeanRV64DExecutable_Functions_mem__write__value(x_1, x_2, x_3, x_8, x_9, x_10, x_7);
return x_11;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Prelude(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_PreludeMemAddrtype(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_PreludeMemMetadata(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_PreludeMem(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvTypes(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvVmemTypes(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvCallbacks(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSysRegs(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvPmpRegs(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvPmpControl(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvAddrChecks(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSysControl(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvPlatform(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvMem(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Prelude(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_PreludeMemAddrtype(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_PreludeMemMetadata(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_PreludeMem(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvTypes(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvVmemTypes(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvCallbacks(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSysRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvPmpRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvPmpControl(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvAddrChecks(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSysControl(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvPlatform(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_is__aligned__paddr___closed__0 = _init_l_LeanRV64DExecutable_Functions_is__aligned__paddr___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_is__aligned__paddr___closed__0);
l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__0 = _init_l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__0);
l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__1 = _init_l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__1);
l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__2 = _init_l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__2);
l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__3 = _init_l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__3);
l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__4 = _init_l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__4);
l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__5 = _init_l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_read__kind__of__flags___closed__5);
l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__0 = _init_l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__0);
l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__1 = _init_l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__1);
l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__2 = _init_l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__2);
l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__3 = _init_l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_write__kind__of__flags___closed__3);
l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__0 = _init_l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__0);
l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__1 = _init_l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__1);
l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__2 = _init_l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__2);
l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__3 = _init_l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__3);
l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__4 = _init_l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__4);
l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__5 = _init_l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_phys__mem__read___redArg___closed__5);
l_LeanRV64DExecutable_Functions_phys__access__check___closed__0 = _init_l_LeanRV64DExecutable_Functions_phys__access__check___closed__0();
l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__0 = _init_l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__0);
l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__1 = _init_l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__1);
l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__2 = _init_l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__2);
l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__3 = _init_l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__3);
l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__4 = _init_l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__4);
l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__5 = _init_l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_mem__read__priv__meta___closed__5);
l_LeanRV64DExecutable_Functions_mem__write__ea___closed__0 = _init_l_LeanRV64DExecutable_Functions_mem__write__ea___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_mem__write__ea___closed__0);
l_LeanRV64DExecutable_Functions_mem__write__ea___closed__1 = _init_l_LeanRV64DExecutable_Functions_mem__write__ea___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_mem__write__ea___closed__1);
l_LeanRV64DExecutable_Functions_mem__write__ea___closed__2 = _init_l_LeanRV64DExecutable_Functions_mem__write__ea___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_mem__write__ea___closed__2);
l_LeanRV64DExecutable_Functions_checked__mem__write___closed__0 = _init_l_LeanRV64DExecutable_Functions_checked__mem__write___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_checked__mem__write___closed__0);
l_LeanRV64DExecutable_Functions_mem__write__value__priv__meta___closed__0 = _init_l_LeanRV64DExecutable_Functions_mem__write__value__priv__meta___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_mem__write__value__priv__meta___closed__0);
l_LeanRV64DExecutable_Functions_mem__write__value__priv___closed__0 = _init_l_LeanRV64DExecutable_Functions_mem__write__value__priv___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_mem__write__value__priv___closed__0);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
