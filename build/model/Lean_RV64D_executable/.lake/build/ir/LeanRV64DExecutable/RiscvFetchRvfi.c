// Lean compiler output
// Module: LeanRV64DExecutable.RiscvFetchRvfi
// Imports: Init LeanRV64DExecutable.Flow LeanRV64DExecutable.Prelude LeanRV64DExecutable.PreludeMemAddrtype LeanRV64DExecutable.RvfiDii LeanRV64DExecutable.RiscvTypes LeanRV64DExecutable.RiscvPcAccess LeanRV64DExecutable.RiscvSysRegs LeanRV64DExecutable.RiscvAddrChecks LeanRV64DExecutable.RiscvVmem
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
static lean_object* l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__4;
lean_object* l_LeanRV64DExecutable_Functions___get__Misa__MXL(lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_privLevel__bits__forwards(uint8_t);
lean_object* l_BitVec_setWidth(lean_object*, lean_object*, lean_object*);
uint8_t l_LeanRV64DExecutable_Functions_not(uint8_t);
static lean_object* l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__0;
lean_object* l_LeanRV64DExecutable_Functions_get__arch__pc___redArg(lean_object*);
lean_object* l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(uint8_t, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions___get__RVFI__DII__Instruction__Packet__rvfi__insn(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Sail_BitVec_access(lean_object*, lean_object*, lean_object*);
lean_object* l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_reset__TLB_spec__0___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_BitVec_ofNat(lean_object*, lean_object*);
lean_object* l_BitVec_extractLsb___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__5;
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_rvfi__fetch___boxed(lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_currentlyEnabled(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_rvfi__fetch(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Sail_BitVec_updateSubrange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Sail_BitVec_addInt(lean_object*, lean_object*, lean_object*);
lean_object* l_LeanRV64DExecutable_Functions_translateAddr(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg(lean_object*);
static lean_object* l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__3;
static lean_object* l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__2;
static lean_object* l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__1;
static lean_object* _init_l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_nat_mul(x_1, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_unsigned_to_nat(2u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = 129;
x_3 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = 70;
x_7 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_6, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_unsigned_to_nat(192u);
x_11 = lean_unsigned_to_nat(63u);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Sail_BitVec_updateSubrange(x_10, x_4, x_11, x_12, x_8);
lean_dec(x_8);
lean_dec(x_4);
x_14 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_reset__TLB_spec__0___redArg(x_2, x_13, x_9);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = 128;
x_17 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_16, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_LeanRV64DExecutable_Functions_get__arch__pc___redArg(x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_unsigned_to_nat(128u);
x_24 = lean_unsigned_to_nat(8u);
x_25 = l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__0;
x_26 = lean_unsigned_to_nat(64u);
x_27 = l_BitVec_setWidth(x_25, x_26, x_21);
lean_dec(x_21);
x_28 = l_Sail_BitVec_updateSubrange(x_23, x_18, x_11, x_12, x_27);
lean_dec(x_27);
lean_dec(x_18);
x_29 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_reset__TLB_spec__0___redArg(x_16, x_28, x_22);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = 90;
x_35 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_34, x_33);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_unsigned_to_nat(2u);
x_39 = lean_unsigned_to_nat(159u);
x_40 = lean_unsigned_to_nat(152u);
x_41 = lean_unbox(x_36);
lean_dec(x_36);
x_42 = l_LeanRV64DExecutable_Functions_privLevel__bits__forwards(x_41);
x_43 = l_BitVec_setWidth(x_38, x_24, x_42);
lean_dec(x_42);
x_44 = l_Sail_BitVec_updateSubrange(x_10, x_32, x_39, x_40, x_43);
lean_dec(x_43);
lean_dec(x_32);
x_45 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_reset__TLB_spec__0___redArg(x_2, x_44, x_37);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
x_48 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_46);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = 88;
x_52 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_51, x_50);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_83; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_unsigned_to_nat(167u);
x_56 = lean_unsigned_to_nat(160u);
x_57 = l_LeanRV64DExecutable_Functions___get__Misa__MXL(x_53);
lean_dec(x_53);
x_58 = l_BitVec_setWidth(x_38, x_24, x_57);
lean_dec(x_57);
x_59 = l_Sail_BitVec_updateSubrange(x_10, x_49, x_55, x_56, x_58);
lean_dec(x_58);
lean_dec(x_49);
x_60 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_reset__TLB_spec__0___redArg(x_2, x_59, x_54);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_62 = x_60;
} else {
 lean_dec_ref(x_60);
 x_62 = lean_box(0);
}
x_63 = 123;
x_83 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_63, x_61);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_ctor_get(x_83, 1);
lean_inc(x_84);
lean_dec(x_83);
x_85 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_63, x_84);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = 26;
x_89 = l_LeanRV64DExecutable_Functions_currentlyEnabled(x_88, x_87);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_63, x_91);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 x_95 = x_92;
} else {
 lean_dec_ref(x_92);
 x_95 = lean_box(0);
}
x_101 = lean_unsigned_to_nat(1u);
x_102 = l_Sail_BitVec_access(x_25, x_86, x_12);
x_103 = l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__2;
x_104 = lean_nat_dec_eq(x_102, x_103);
lean_dec(x_102);
if (x_104 == 0)
{
lean_dec(x_90);
lean_dec(x_86);
lean_dec(x_62);
goto block_100;
}
else
{
lean_object* x_284; uint8_t x_285; 
x_284 = l_Sail_BitVec_access(x_25, x_86, x_101);
x_285 = lean_nat_dec_eq(x_284, x_103);
lean_dec(x_284);
if (x_285 == 0)
{
uint8_t x_286; uint8_t x_287; 
x_286 = lean_unbox(x_90);
lean_dec(x_90);
x_287 = l_LeanRV64DExecutable_Functions_not(x_286);
if (x_287 == 0)
{
lean_dec(x_95);
lean_dec(x_93);
lean_dec(x_47);
goto block_283;
}
else
{
lean_dec(x_86);
lean_dec(x_62);
goto block_100;
}
}
else
{
lean_dec(x_95);
lean_dec(x_93);
lean_dec(x_90);
lean_dec(x_47);
goto block_283;
}
block_283:
{
lean_object* x_105; lean_object* x_106; 
x_105 = l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__3;
x_106 = l_LeanRV64DExecutable_Functions_translateAddr(x_86, x_105, x_94);
lean_dec(x_86);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; 
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; uint8_t x_109; 
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
lean_dec(x_106);
x_109 = !lean_is_exclusive(x_107);
if (x_109 == 0)
{
lean_object* x_110; uint8_t x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_107, 0);
lean_dec(x_110);
x_111 = 130;
x_112 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_111, x_108);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
lean_dec(x_112);
x_115 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_114);
if (lean_obj_tag(x_115) == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
lean_dec(x_115);
x_118 = l_LeanRV64DExecutable_Functions___get__RVFI__DII__Instruction__Packet__rvfi__insn(x_113);
lean_dec(x_113);
x_119 = lean_unsigned_to_nat(127u);
x_120 = lean_unsigned_to_nat(32u);
x_121 = l_BitVec_setWidth(x_120, x_26, x_118);
x_122 = l_Sail_BitVec_updateSubrange(x_10, x_116, x_119, x_26, x_121);
lean_dec(x_121);
lean_dec(x_116);
x_123 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_reset__TLB_spec__0___redArg(x_2, x_122, x_117);
x_124 = !lean_is_exclusive(x_123);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_125 = lean_ctor_get(x_123, 1);
x_126 = lean_ctor_get(x_123, 0);
lean_dec(x_126);
x_127 = l_BitVec_extractLsb___redArg(x_101, x_12, x_118);
x_128 = l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__4;
x_129 = lean_nat_dec_eq(x_127, x_128);
lean_dec(x_127);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; 
lean_dec(x_62);
x_130 = lean_unsigned_to_nat(15u);
x_131 = l_BitVec_extractLsb___redArg(x_130, x_12, x_118);
lean_dec(x_118);
lean_ctor_set_tag(x_107, 2);
lean_ctor_set(x_107, 0, x_131);
lean_ctor_set(x_123, 0, x_107);
return x_123;
}
else
{
lean_object* x_132; 
lean_free_object(x_123);
lean_free_object(x_107);
x_132 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_63, x_125);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_132, 1);
lean_inc(x_134);
lean_dec(x_132);
x_135 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_63, x_134);
if (lean_obj_tag(x_135) == 0)
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_136 = lean_ctor_get(x_135, 1);
lean_inc(x_136);
lean_dec(x_135);
x_137 = l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__5;
x_138 = l_Sail_BitVec_addInt(x_25, x_133, x_137);
lean_dec(x_133);
x_139 = l_LeanRV64DExecutable_Functions_translateAddr(x_138, x_105, x_136);
lean_dec(x_138);
if (lean_obj_tag(x_139) == 0)
{
lean_object* x_140; 
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
if (lean_obj_tag(x_140) == 0)
{
uint8_t x_141; 
lean_dec(x_62);
x_141 = !lean_is_exclusive(x_139);
if (x_141 == 0)
{
lean_object* x_142; uint8_t x_143; 
x_142 = lean_ctor_get(x_139, 0);
lean_dec(x_142);
x_143 = !lean_is_exclusive(x_140);
if (x_143 == 0)
{
lean_object* x_144; 
x_144 = lean_ctor_get(x_140, 0);
lean_dec(x_144);
lean_ctor_set_tag(x_140, 1);
lean_ctor_set(x_140, 0, x_118);
return x_139;
}
else
{
lean_object* x_145; 
lean_dec(x_140);
x_145 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_145, 0, x_118);
lean_ctor_set(x_139, 0, x_145);
return x_139;
}
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_146 = lean_ctor_get(x_139, 1);
lean_inc(x_146);
lean_dec(x_139);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 x_147 = x_140;
} else {
 lean_dec_ref(x_140);
 x_147 = lean_box(0);
}
if (lean_is_scalar(x_147)) {
 x_148 = lean_alloc_ctor(1, 1, 0);
} else {
 x_148 = x_147;
 lean_ctor_set_tag(x_148, 1);
}
lean_ctor_set(x_148, 0, x_118);
x_149 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_146);
return x_149;
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_dec(x_118);
x_150 = lean_ctor_get(x_140, 0);
lean_inc(x_150);
lean_dec(x_140);
x_151 = lean_ctor_get(x_139, 1);
lean_inc(x_151);
lean_dec(x_139);
x_152 = lean_ctor_get(x_150, 0);
lean_inc(x_152);
lean_dec(x_150);
x_64 = x_152;
x_65 = x_151;
goto block_82;
}
}
else
{
uint8_t x_153; 
lean_dec(x_118);
lean_dec(x_62);
x_153 = !lean_is_exclusive(x_139);
if (x_153 == 0)
{
return x_139;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_139, 0);
x_155 = lean_ctor_get(x_139, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_139);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
return x_156;
}
}
}
else
{
uint8_t x_157; 
lean_dec(x_133);
lean_dec(x_118);
lean_dec(x_62);
x_157 = !lean_is_exclusive(x_135);
if (x_157 == 0)
{
lean_object* x_158; lean_object* x_159; 
x_158 = lean_ctor_get(x_135, 0);
lean_dec(x_158);
x_159 = lean_box(1);
lean_ctor_set(x_135, 0, x_159);
return x_135;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_135, 1);
lean_inc(x_160);
lean_dec(x_135);
x_161 = lean_box(1);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_161);
lean_ctor_set(x_162, 1, x_160);
return x_162;
}
}
}
else
{
uint8_t x_163; 
lean_dec(x_118);
lean_dec(x_62);
x_163 = !lean_is_exclusive(x_132);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; 
x_164 = lean_ctor_get(x_132, 0);
lean_dec(x_164);
x_165 = lean_box(1);
lean_ctor_set(x_132, 0, x_165);
return x_132;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_166 = lean_ctor_get(x_132, 1);
lean_inc(x_166);
lean_dec(x_132);
x_167 = lean_box(1);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_166);
return x_168;
}
}
}
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; uint8_t x_172; 
x_169 = lean_ctor_get(x_123, 1);
lean_inc(x_169);
lean_dec(x_123);
x_170 = l_BitVec_extractLsb___redArg(x_101, x_12, x_118);
x_171 = l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__4;
x_172 = lean_nat_dec_eq(x_170, x_171);
lean_dec(x_170);
if (x_172 == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_dec(x_62);
x_173 = lean_unsigned_to_nat(15u);
x_174 = l_BitVec_extractLsb___redArg(x_173, x_12, x_118);
lean_dec(x_118);
lean_ctor_set_tag(x_107, 2);
lean_ctor_set(x_107, 0, x_174);
x_175 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_175, 0, x_107);
lean_ctor_set(x_175, 1, x_169);
return x_175;
}
else
{
lean_object* x_176; 
lean_free_object(x_107);
x_176 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_63, x_169);
if (lean_obj_tag(x_176) == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_176, 1);
lean_inc(x_178);
lean_dec(x_176);
x_179 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_63, x_178);
if (lean_obj_tag(x_179) == 0)
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_180 = lean_ctor_get(x_179, 1);
lean_inc(x_180);
lean_dec(x_179);
x_181 = l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__5;
x_182 = l_Sail_BitVec_addInt(x_25, x_177, x_181);
lean_dec(x_177);
x_183 = l_LeanRV64DExecutable_Functions_translateAddr(x_182, x_105, x_180);
lean_dec(x_182);
if (lean_obj_tag(x_183) == 0)
{
lean_object* x_184; 
x_184 = lean_ctor_get(x_183, 0);
lean_inc(x_184);
if (lean_obj_tag(x_184) == 0)
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
lean_dec(x_62);
x_185 = lean_ctor_get(x_183, 1);
lean_inc(x_185);
if (lean_is_exclusive(x_183)) {
 lean_ctor_release(x_183, 0);
 lean_ctor_release(x_183, 1);
 x_186 = x_183;
} else {
 lean_dec_ref(x_183);
 x_186 = lean_box(0);
}
if (lean_is_exclusive(x_184)) {
 lean_ctor_release(x_184, 0);
 x_187 = x_184;
} else {
 lean_dec_ref(x_184);
 x_187 = lean_box(0);
}
if (lean_is_scalar(x_187)) {
 x_188 = lean_alloc_ctor(1, 1, 0);
} else {
 x_188 = x_187;
 lean_ctor_set_tag(x_188, 1);
}
lean_ctor_set(x_188, 0, x_118);
if (lean_is_scalar(x_186)) {
 x_189 = lean_alloc_ctor(0, 2, 0);
} else {
 x_189 = x_186;
}
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_185);
return x_189;
}
else
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; 
lean_dec(x_118);
x_190 = lean_ctor_get(x_184, 0);
lean_inc(x_190);
lean_dec(x_184);
x_191 = lean_ctor_get(x_183, 1);
lean_inc(x_191);
lean_dec(x_183);
x_192 = lean_ctor_get(x_190, 0);
lean_inc(x_192);
lean_dec(x_190);
x_64 = x_192;
x_65 = x_191;
goto block_82;
}
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
lean_dec(x_118);
lean_dec(x_62);
x_193 = lean_ctor_get(x_183, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_183, 1);
lean_inc(x_194);
if (lean_is_exclusive(x_183)) {
 lean_ctor_release(x_183, 0);
 lean_ctor_release(x_183, 1);
 x_195 = x_183;
} else {
 lean_dec_ref(x_183);
 x_195 = lean_box(0);
}
if (lean_is_scalar(x_195)) {
 x_196 = lean_alloc_ctor(1, 2, 0);
} else {
 x_196 = x_195;
}
lean_ctor_set(x_196, 0, x_193);
lean_ctor_set(x_196, 1, x_194);
return x_196;
}
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
lean_dec(x_177);
lean_dec(x_118);
lean_dec(x_62);
x_197 = lean_ctor_get(x_179, 1);
lean_inc(x_197);
if (lean_is_exclusive(x_179)) {
 lean_ctor_release(x_179, 0);
 lean_ctor_release(x_179, 1);
 x_198 = x_179;
} else {
 lean_dec_ref(x_179);
 x_198 = lean_box(0);
}
x_199 = lean_box(1);
if (lean_is_scalar(x_198)) {
 x_200 = lean_alloc_ctor(1, 2, 0);
} else {
 x_200 = x_198;
}
lean_ctor_set(x_200, 0, x_199);
lean_ctor_set(x_200, 1, x_197);
return x_200;
}
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
lean_dec(x_118);
lean_dec(x_62);
x_201 = lean_ctor_get(x_176, 1);
lean_inc(x_201);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_202 = x_176;
} else {
 lean_dec_ref(x_176);
 x_202 = lean_box(0);
}
x_203 = lean_box(1);
if (lean_is_scalar(x_202)) {
 x_204 = lean_alloc_ctor(1, 2, 0);
} else {
 x_204 = x_202;
}
lean_ctor_set(x_204, 0, x_203);
lean_ctor_set(x_204, 1, x_201);
return x_204;
}
}
}
}
else
{
uint8_t x_205; 
lean_dec(x_113);
lean_free_object(x_107);
lean_dec(x_62);
x_205 = !lean_is_exclusive(x_115);
if (x_205 == 0)
{
lean_object* x_206; lean_object* x_207; 
x_206 = lean_ctor_get(x_115, 0);
lean_dec(x_206);
x_207 = lean_box(1);
lean_ctor_set(x_115, 0, x_207);
return x_115;
}
else
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_208 = lean_ctor_get(x_115, 1);
lean_inc(x_208);
lean_dec(x_115);
x_209 = lean_box(1);
x_210 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_210, 0, x_209);
lean_ctor_set(x_210, 1, x_208);
return x_210;
}
}
}
else
{
uint8_t x_211; 
lean_free_object(x_107);
lean_dec(x_62);
x_211 = !lean_is_exclusive(x_112);
if (x_211 == 0)
{
lean_object* x_212; lean_object* x_213; 
x_212 = lean_ctor_get(x_112, 0);
lean_dec(x_212);
x_213 = lean_box(1);
lean_ctor_set(x_112, 0, x_213);
return x_112;
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_214 = lean_ctor_get(x_112, 1);
lean_inc(x_214);
lean_dec(x_112);
x_215 = lean_box(1);
x_216 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_216, 0, x_215);
lean_ctor_set(x_216, 1, x_214);
return x_216;
}
}
}
else
{
uint8_t x_217; lean_object* x_218; 
lean_dec(x_107);
x_217 = 130;
x_218 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_217, x_108);
if (lean_obj_tag(x_218) == 0)
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_219 = lean_ctor_get(x_218, 0);
lean_inc(x_219);
x_220 = lean_ctor_get(x_218, 1);
lean_inc(x_220);
lean_dec(x_218);
x_221 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_2, x_220);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; uint8_t x_234; 
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_221, 1);
lean_inc(x_223);
lean_dec(x_221);
x_224 = l_LeanRV64DExecutable_Functions___get__RVFI__DII__Instruction__Packet__rvfi__insn(x_219);
lean_dec(x_219);
x_225 = lean_unsigned_to_nat(127u);
x_226 = lean_unsigned_to_nat(32u);
x_227 = l_BitVec_setWidth(x_226, x_26, x_224);
x_228 = l_Sail_BitVec_updateSubrange(x_10, x_222, x_225, x_26, x_227);
lean_dec(x_227);
lean_dec(x_222);
x_229 = l_PreSail_writeReg___at___LeanRV64DExecutable_Functions_reset__TLB_spec__0___redArg(x_2, x_228, x_223);
x_230 = lean_ctor_get(x_229, 1);
lean_inc(x_230);
if (lean_is_exclusive(x_229)) {
 lean_ctor_release(x_229, 0);
 lean_ctor_release(x_229, 1);
 x_231 = x_229;
} else {
 lean_dec_ref(x_229);
 x_231 = lean_box(0);
}
x_232 = l_BitVec_extractLsb___redArg(x_101, x_12, x_224);
x_233 = l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__4;
x_234 = lean_nat_dec_eq(x_232, x_233);
lean_dec(x_232);
if (x_234 == 0)
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; 
lean_dec(x_62);
x_235 = lean_unsigned_to_nat(15u);
x_236 = l_BitVec_extractLsb___redArg(x_235, x_12, x_224);
lean_dec(x_224);
x_237 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_237, 0, x_236);
if (lean_is_scalar(x_231)) {
 x_238 = lean_alloc_ctor(0, 2, 0);
} else {
 x_238 = x_231;
}
lean_ctor_set(x_238, 0, x_237);
lean_ctor_set(x_238, 1, x_230);
return x_238;
}
else
{
lean_object* x_239; 
lean_dec(x_231);
x_239 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_63, x_230);
if (lean_obj_tag(x_239) == 0)
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_240 = lean_ctor_get(x_239, 0);
lean_inc(x_240);
x_241 = lean_ctor_get(x_239, 1);
lean_inc(x_241);
lean_dec(x_239);
x_242 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_63, x_241);
if (lean_obj_tag(x_242) == 0)
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_243 = lean_ctor_get(x_242, 1);
lean_inc(x_243);
lean_dec(x_242);
x_244 = l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__5;
x_245 = l_Sail_BitVec_addInt(x_25, x_240, x_244);
lean_dec(x_240);
x_246 = l_LeanRV64DExecutable_Functions_translateAddr(x_245, x_105, x_243);
lean_dec(x_245);
if (lean_obj_tag(x_246) == 0)
{
lean_object* x_247; 
x_247 = lean_ctor_get(x_246, 0);
lean_inc(x_247);
if (lean_obj_tag(x_247) == 0)
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
lean_dec(x_62);
x_248 = lean_ctor_get(x_246, 1);
lean_inc(x_248);
if (lean_is_exclusive(x_246)) {
 lean_ctor_release(x_246, 0);
 lean_ctor_release(x_246, 1);
 x_249 = x_246;
} else {
 lean_dec_ref(x_246);
 x_249 = lean_box(0);
}
if (lean_is_exclusive(x_247)) {
 lean_ctor_release(x_247, 0);
 x_250 = x_247;
} else {
 lean_dec_ref(x_247);
 x_250 = lean_box(0);
}
if (lean_is_scalar(x_250)) {
 x_251 = lean_alloc_ctor(1, 1, 0);
} else {
 x_251 = x_250;
 lean_ctor_set_tag(x_251, 1);
}
lean_ctor_set(x_251, 0, x_224);
if (lean_is_scalar(x_249)) {
 x_252 = lean_alloc_ctor(0, 2, 0);
} else {
 x_252 = x_249;
}
lean_ctor_set(x_252, 0, x_251);
lean_ctor_set(x_252, 1, x_248);
return x_252;
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_224);
x_253 = lean_ctor_get(x_247, 0);
lean_inc(x_253);
lean_dec(x_247);
x_254 = lean_ctor_get(x_246, 1);
lean_inc(x_254);
lean_dec(x_246);
x_255 = lean_ctor_get(x_253, 0);
lean_inc(x_255);
lean_dec(x_253);
x_64 = x_255;
x_65 = x_254;
goto block_82;
}
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; 
lean_dec(x_224);
lean_dec(x_62);
x_256 = lean_ctor_get(x_246, 0);
lean_inc(x_256);
x_257 = lean_ctor_get(x_246, 1);
lean_inc(x_257);
if (lean_is_exclusive(x_246)) {
 lean_ctor_release(x_246, 0);
 lean_ctor_release(x_246, 1);
 x_258 = x_246;
} else {
 lean_dec_ref(x_246);
 x_258 = lean_box(0);
}
if (lean_is_scalar(x_258)) {
 x_259 = lean_alloc_ctor(1, 2, 0);
} else {
 x_259 = x_258;
}
lean_ctor_set(x_259, 0, x_256);
lean_ctor_set(x_259, 1, x_257);
return x_259;
}
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
lean_dec(x_240);
lean_dec(x_224);
lean_dec(x_62);
x_260 = lean_ctor_get(x_242, 1);
lean_inc(x_260);
if (lean_is_exclusive(x_242)) {
 lean_ctor_release(x_242, 0);
 lean_ctor_release(x_242, 1);
 x_261 = x_242;
} else {
 lean_dec_ref(x_242);
 x_261 = lean_box(0);
}
x_262 = lean_box(1);
if (lean_is_scalar(x_261)) {
 x_263 = lean_alloc_ctor(1, 2, 0);
} else {
 x_263 = x_261;
}
lean_ctor_set(x_263, 0, x_262);
lean_ctor_set(x_263, 1, x_260);
return x_263;
}
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; 
lean_dec(x_224);
lean_dec(x_62);
x_264 = lean_ctor_get(x_239, 1);
lean_inc(x_264);
if (lean_is_exclusive(x_239)) {
 lean_ctor_release(x_239, 0);
 lean_ctor_release(x_239, 1);
 x_265 = x_239;
} else {
 lean_dec_ref(x_239);
 x_265 = lean_box(0);
}
x_266 = lean_box(1);
if (lean_is_scalar(x_265)) {
 x_267 = lean_alloc_ctor(1, 2, 0);
} else {
 x_267 = x_265;
}
lean_ctor_set(x_267, 0, x_266);
lean_ctor_set(x_267, 1, x_264);
return x_267;
}
}
}
else
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; 
lean_dec(x_219);
lean_dec(x_62);
x_268 = lean_ctor_get(x_221, 1);
lean_inc(x_268);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_269 = x_221;
} else {
 lean_dec_ref(x_221);
 x_269 = lean_box(0);
}
x_270 = lean_box(1);
if (lean_is_scalar(x_269)) {
 x_271 = lean_alloc_ctor(1, 2, 0);
} else {
 x_271 = x_269;
}
lean_ctor_set(x_271, 0, x_270);
lean_ctor_set(x_271, 1, x_268);
return x_271;
}
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
lean_dec(x_62);
x_272 = lean_ctor_get(x_218, 1);
lean_inc(x_272);
if (lean_is_exclusive(x_218)) {
 lean_ctor_release(x_218, 0);
 lean_ctor_release(x_218, 1);
 x_273 = x_218;
} else {
 lean_dec_ref(x_218);
 x_273 = lean_box(0);
}
x_274 = lean_box(1);
if (lean_is_scalar(x_273)) {
 x_275 = lean_alloc_ctor(1, 2, 0);
} else {
 x_275 = x_273;
}
lean_ctor_set(x_275, 0, x_274);
lean_ctor_set(x_275, 1, x_272);
return x_275;
}
}
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; 
x_276 = lean_ctor_get(x_107, 0);
lean_inc(x_276);
lean_dec(x_107);
x_277 = lean_ctor_get(x_106, 1);
lean_inc(x_277);
lean_dec(x_106);
x_278 = lean_ctor_get(x_276, 0);
lean_inc(x_278);
lean_dec(x_276);
x_64 = x_278;
x_65 = x_277;
goto block_82;
}
}
else
{
uint8_t x_279; 
lean_dec(x_62);
x_279 = !lean_is_exclusive(x_106);
if (x_279 == 0)
{
return x_106;
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_280 = lean_ctor_get(x_106, 0);
x_281 = lean_ctor_get(x_106, 1);
lean_inc(x_281);
lean_inc(x_280);
lean_dec(x_106);
x_282 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_282, 0, x_280);
lean_ctor_set(x_282, 1, x_281);
return x_282;
}
}
}
}
block_100:
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_96 = l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__1;
if (lean_is_scalar(x_47)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_47;
}
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_93);
x_98 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_98, 0, x_97);
if (lean_is_scalar(x_95)) {
 x_99 = lean_alloc_ctor(0, 2, 0);
} else {
 x_99 = x_95;
}
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_94);
return x_99;
}
}
else
{
uint8_t x_288; 
lean_dec(x_90);
lean_dec(x_86);
lean_dec(x_62);
lean_dec(x_47);
x_288 = !lean_is_exclusive(x_92);
if (x_288 == 0)
{
lean_object* x_289; lean_object* x_290; 
x_289 = lean_ctor_get(x_92, 0);
lean_dec(x_289);
x_290 = lean_box(1);
lean_ctor_set(x_92, 0, x_290);
return x_92;
}
else
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; 
x_291 = lean_ctor_get(x_92, 1);
lean_inc(x_291);
lean_dec(x_92);
x_292 = lean_box(1);
x_293 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_293, 0, x_292);
lean_ctor_set(x_293, 1, x_291);
return x_293;
}
}
}
else
{
uint8_t x_294; 
lean_dec(x_86);
lean_dec(x_62);
lean_dec(x_47);
x_294 = !lean_is_exclusive(x_89);
if (x_294 == 0)
{
return x_89;
}
else
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; 
x_295 = lean_ctor_get(x_89, 0);
x_296 = lean_ctor_get(x_89, 1);
lean_inc(x_296);
lean_inc(x_295);
lean_dec(x_89);
x_297 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_297, 0, x_295);
lean_ctor_set(x_297, 1, x_296);
return x_297;
}
}
}
else
{
uint8_t x_298; 
lean_dec(x_62);
lean_dec(x_47);
x_298 = !lean_is_exclusive(x_85);
if (x_298 == 0)
{
lean_object* x_299; lean_object* x_300; 
x_299 = lean_ctor_get(x_85, 0);
lean_dec(x_299);
x_300 = lean_box(1);
lean_ctor_set(x_85, 0, x_300);
return x_85;
}
else
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; 
x_301 = lean_ctor_get(x_85, 1);
lean_inc(x_301);
lean_dec(x_85);
x_302 = lean_box(1);
x_303 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_303, 0, x_302);
lean_ctor_set(x_303, 1, x_301);
return x_303;
}
}
}
else
{
uint8_t x_304; 
lean_dec(x_62);
lean_dec(x_47);
x_304 = !lean_is_exclusive(x_83);
if (x_304 == 0)
{
lean_object* x_305; lean_object* x_306; 
x_305 = lean_ctor_get(x_83, 0);
lean_dec(x_305);
x_306 = lean_box(1);
lean_ctor_set(x_83, 0, x_306);
return x_83;
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; 
x_307 = lean_ctor_get(x_83, 1);
lean_inc(x_307);
lean_dec(x_83);
x_308 = lean_box(1);
x_309 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_309, 0, x_308);
lean_ctor_set(x_309, 1, x_307);
return x_309;
}
}
block_82:
{
lean_object* x_66; 
x_66 = l_PreSail_readReg___at___plat__htif__tohost_spec__0___redArg(x_63, x_65);
if (lean_obj_tag(x_66) == 0)
{
uint8_t x_67; 
x_67 = !lean_is_exclusive(x_66);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_66, 0);
if (lean_is_scalar(x_62)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_62;
}
lean_ctor_set(x_69, 0, x_64);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_66, 0, x_70);
return x_66;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_71 = lean_ctor_get(x_66, 0);
x_72 = lean_ctor_get(x_66, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_66);
if (lean_is_scalar(x_62)) {
 x_73 = lean_alloc_ctor(0, 2, 0);
} else {
 x_73 = x_62;
}
lean_ctor_set(x_73, 0, x_64);
lean_ctor_set(x_73, 1, x_71);
x_74 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_74, 0, x_73);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_72);
return x_75;
}
}
else
{
uint8_t x_76; 
lean_dec(x_64);
lean_dec(x_62);
x_76 = !lean_is_exclusive(x_66);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_66, 0);
lean_dec(x_77);
x_78 = lean_box(1);
lean_ctor_set(x_66, 0, x_78);
return x_66;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_66, 1);
lean_inc(x_79);
lean_dec(x_66);
x_80 = lean_box(1);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
return x_81;
}
}
}
}
else
{
uint8_t x_310; 
lean_dec(x_49);
lean_dec(x_47);
x_310 = !lean_is_exclusive(x_52);
if (x_310 == 0)
{
lean_object* x_311; lean_object* x_312; 
x_311 = lean_ctor_get(x_52, 0);
lean_dec(x_311);
x_312 = lean_box(1);
lean_ctor_set(x_52, 0, x_312);
return x_52;
}
else
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; 
x_313 = lean_ctor_get(x_52, 1);
lean_inc(x_313);
lean_dec(x_52);
x_314 = lean_box(1);
x_315 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_315, 0, x_314);
lean_ctor_set(x_315, 1, x_313);
return x_315;
}
}
}
else
{
uint8_t x_316; 
lean_dec(x_47);
x_316 = !lean_is_exclusive(x_48);
if (x_316 == 0)
{
lean_object* x_317; lean_object* x_318; 
x_317 = lean_ctor_get(x_48, 0);
lean_dec(x_317);
x_318 = lean_box(1);
lean_ctor_set(x_48, 0, x_318);
return x_48;
}
else
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; 
x_319 = lean_ctor_get(x_48, 1);
lean_inc(x_319);
lean_dec(x_48);
x_320 = lean_box(1);
x_321 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_321, 0, x_320);
lean_ctor_set(x_321, 1, x_319);
return x_321;
}
}
}
else
{
uint8_t x_322; 
lean_dec(x_32);
x_322 = !lean_is_exclusive(x_35);
if (x_322 == 0)
{
lean_object* x_323; lean_object* x_324; 
x_323 = lean_ctor_get(x_35, 0);
lean_dec(x_323);
x_324 = lean_box(1);
lean_ctor_set(x_35, 0, x_324);
return x_35;
}
else
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; 
x_325 = lean_ctor_get(x_35, 1);
lean_inc(x_325);
lean_dec(x_35);
x_326 = lean_box(1);
x_327 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_327, 0, x_326);
lean_ctor_set(x_327, 1, x_325);
return x_327;
}
}
}
else
{
uint8_t x_328; 
x_328 = !lean_is_exclusive(x_31);
if (x_328 == 0)
{
lean_object* x_329; lean_object* x_330; 
x_329 = lean_ctor_get(x_31, 0);
lean_dec(x_329);
x_330 = lean_box(1);
lean_ctor_set(x_31, 0, x_330);
return x_31;
}
else
{
lean_object* x_331; lean_object* x_332; lean_object* x_333; 
x_331 = lean_ctor_get(x_31, 1);
lean_inc(x_331);
lean_dec(x_31);
x_332 = lean_box(1);
x_333 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_333, 0, x_332);
lean_ctor_set(x_333, 1, x_331);
return x_333;
}
}
}
else
{
uint8_t x_334; 
lean_dec(x_18);
x_334 = !lean_is_exclusive(x_20);
if (x_334 == 0)
{
lean_object* x_335; lean_object* x_336; 
x_335 = lean_ctor_get(x_20, 0);
lean_dec(x_335);
x_336 = lean_box(1);
lean_ctor_set(x_20, 0, x_336);
return x_20;
}
else
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_337 = lean_ctor_get(x_20, 1);
lean_inc(x_337);
lean_dec(x_20);
x_338 = lean_box(1);
x_339 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_339, 0, x_338);
lean_ctor_set(x_339, 1, x_337);
return x_339;
}
}
}
else
{
uint8_t x_340; 
x_340 = !lean_is_exclusive(x_17);
if (x_340 == 0)
{
lean_object* x_341; lean_object* x_342; 
x_341 = lean_ctor_get(x_17, 0);
lean_dec(x_341);
x_342 = lean_box(1);
lean_ctor_set(x_17, 0, x_342);
return x_17;
}
else
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; 
x_343 = lean_ctor_get(x_17, 1);
lean_inc(x_343);
lean_dec(x_17);
x_344 = lean_box(1);
x_345 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_345, 0, x_344);
lean_ctor_set(x_345, 1, x_343);
return x_345;
}
}
}
else
{
uint8_t x_346; 
lean_dec(x_4);
x_346 = !lean_is_exclusive(x_7);
if (x_346 == 0)
{
lean_object* x_347; lean_object* x_348; 
x_347 = lean_ctor_get(x_7, 0);
lean_dec(x_347);
x_348 = lean_box(1);
lean_ctor_set(x_7, 0, x_348);
return x_7;
}
else
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; 
x_349 = lean_ctor_get(x_7, 1);
lean_inc(x_349);
lean_dec(x_7);
x_350 = lean_box(1);
x_351 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_351, 0, x_350);
lean_ctor_set(x_351, 1, x_349);
return x_351;
}
}
}
else
{
uint8_t x_352; 
x_352 = !lean_is_exclusive(x_3);
if (x_352 == 0)
{
lean_object* x_353; lean_object* x_354; 
x_353 = lean_ctor_get(x_3, 0);
lean_dec(x_353);
x_354 = lean_box(1);
lean_ctor_set(x_3, 0, x_354);
return x_3;
}
else
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; 
x_355 = lean_ctor_get(x_3, 1);
lean_inc(x_355);
lean_dec(x_3);
x_356 = lean_box(1);
x_357 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_357, 0, x_356);
lean_ctor_set(x_357, 1, x_355);
return x_357;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_rvfi__fetch(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LeanRV64DExecutable_Functions_rvfi__fetch___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LeanRV64DExecutable_Functions_rvfi__fetch(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Flow(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_Prelude(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_PreludeMemAddrtype(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RvfiDii(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvTypes(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvPcAccess(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvSysRegs(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvAddrChecks(uint8_t builtin, lean_object*);
lean_object* initialize_LeanRV64DExecutable_RiscvVmem(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanRV64DExecutable_RiscvFetchRvfi(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Flow(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_Prelude(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_PreludeMemAddrtype(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RvfiDii(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvTypes(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvPcAccess(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvSysRegs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvAddrChecks(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LeanRV64DExecutable_RiscvVmem(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__0 = _init_l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__0();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__0);
l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__1 = _init_l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__1();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__1);
l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__2 = _init_l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__2();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__2);
l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__3 = _init_l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__3();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__3);
l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__4 = _init_l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__4();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__4);
l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__5 = _init_l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__5();
lean_mark_persistent(l_LeanRV64DExecutable_Functions_rvfi__fetch___redArg___closed__5);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
