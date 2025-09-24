-- =======================================================================================
--   This Sail RISC-V architecture model, comprising all files and
--   directories except where otherwise noted is subject the BSD
--   two-clause license in the LICENSE file.
--
--   SPDX-License-Identifier: BSD-2-Clause
-- =======================================================================================

import LeanRV64DExecutable.Sail.Sail
import LeanRV64DExecutable.Defs

open Sail

def print_bits (_ : String) (_ : BitVec n) : Unit := ()
def print_string (_ : String) (_ : String) : Unit := ()
def prerr_string (_: String) : Unit := ()
def putchar {T} (_: T ) : Unit := ()
def string_of_int (z : Int) := s!"{z}"

-- From: https://github.com/riscv/sail-riscv/blob/46a813bd847272a8e0901c7310bd362f7ffc303e/c_emulator/riscv_platform_impl.cpp
def sys_enable_writable_misa (_:Unit) : Bool := true
def sys_enable_rvc (_:Unit) : Bool := true
def sys_enable_fdext (_:Unit) : Bool := true
def sys_enable_svinval (_:Unit) : Bool := false
def sys_enable_zcb (_:Unit) : Bool := false
def sys_enable_zfinx (_:Unit) : Bool := false
def sys_enable_writable_fiom (_:Unit) : Bool := true
def sys_enable_vext (_:Unit) : Bool := true
def sys_enable_bext (_:Unit) : Bool := false
def sys_enable_zicbom (_:Unit) : Bool := false
def sys_enable_zicboz (_:Unit) : Bool := false
def sys_enable_sstc (_:Unit) : Bool := false
def sys_writable_hpm_counters (_:Unit) : BitVec 32 := (0xFFFFFFFF:UInt32).toBitVec
def sys_enable_zvkb (_: Unit) := false

def sys_vext_vl_use_ceil (_:Unit) : Bool := false
def sys_vector_elen_exp (_:Unit) : Nat := 0x6
def sys_vector_vlen_exp (_:Unit) : Nat := 0x9

def sys_pmp_count (_:Unit) : Nat := 0
theorem sys_pmp_count_ok : 0 ≤ sys_pmp_count () ∧ sys_pmp_count () ≤ 64 := by simp; rw [sys_pmp_count]; simp
def sys_pmp_grain (_:Unit) : Nat := 0
theorem sys_pmp_grain_ok : 0 ≤ sys_pmp_grain () ∧ sys_pmp_grain () ≤ 63 := by simp; rw [sys_pmp_grain]; simp

section defs

variable [Arch]

-- Platform definitions
def plat_ram_base (_:Unit) : BitVec n := 0x80000000
def plat_ram_size (_:Unit) : BitVec n := 0x80000000
def elf_tohost (_:Unit) : Int := panic "TODO"
def elf_entry (_:Unit) : Int := panic "TODO"
def plat_enable_dirty_update (_:Unit) : Bool := false
def plat_enable_misaligned_access (_:Unit) : Bool := panic "TODO"
def plat_mtval_has_illegal_inst_bits  (_:Unit) : Bool := false
def plat_rom_base (_:Unit) : BitVec n := 0x1000
def plat_rom_size (_:Unit) : BitVec n := 0x100
def plat_enable_htif (_ : Unit) := true
def plat_htif_tohost (_:Unit) : SailM (BitVec n) := PreSail.readReg Register.htif_tohost
def plat_clint_base (_:Unit) : BitVec n := 0x2000000
def plat_clint_size (_:Unit) : BitVec n := 0xc0000
def plat_insns_per_tick (_:Unit) : Int := 100
def plat_cache_block_size_exp (_:Unit) : Int := 6

section Effectful

variable {Register : Type} {RegisterType : Register → Type} [DecidableEq Register] [Hashable Register]

def plat_term_write {α} : α → SailM Unit := λ _ => panic "TODO"
def plat_term_read : Unit → SailM String := λ _ => panic "TODO"

-- Reservations
def load_reservation : Arch.pa → SailM Unit := λ _ => panic "TODO"
def match_reservation : Arch.pa → Bool := λ _ => panic "TODO"
def cancel_reservation : Unit → SailM Unit := λ _ => panic "TODO"
def valid_reservation : Unit → Bool := λ _ => false

def get_16_random_bits : Unit → SailM (BitVec 16) := λ _ => panic "TODO"
def sys_enable_experimental_extensions : Unit → Bool := λ _ => false

def speculate_conditional : Unit → SailM Bool := λ _ => panic "TODO"

end Effectful

-- Floats
def riscv_f16Add : BitVec 3 → BitVec 16 → BitVec 16 → (BitVec 5 × BitVec 16) := λ _ => panic "TODO"
def riscv_f16Sub : BitVec 3 → BitVec 16 → BitVec 16 → (BitVec 5 × BitVec 16) := λ _ => panic "TODO"
def riscv_f16Mul : BitVec 3 → BitVec 16 → BitVec 16 → (BitVec 5 × BitVec 16) := λ _ => panic "TODO"
def riscv_f16Div : BitVec 3 → BitVec 16 → BitVec 16 → (BitVec 5 × BitVec 16) := λ _ => panic "TODO"
def riscv_f32Add : BitVec 3 → BitVec 32 → BitVec 32 → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_f32Sub : BitVec 3 → BitVec 32 → BitVec 32 → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_f32Mul : BitVec 3 → BitVec 32 → BitVec 32 → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_f32Div : BitVec 3 → BitVec 32 → BitVec 32 → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_f64Add : BitVec 3 → BitVec 64 → BitVec 64 → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"
def riscv_f64Sub : BitVec 3 → BitVec 64 → BitVec 64 → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"
def riscv_f64Mul : BitVec 3 → BitVec 64 → BitVec 64 → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"
def riscv_f64Div : BitVec 3 → BitVec 64 → BitVec 64 → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"
def riscv_f16MulAdd : BitVec 3 → BitVec 16 → BitVec 16 → BitVec 16 → (BitVec 5 × BitVec 16) := λ _ => panic "TODO"
def riscv_f32MulAdd : BitVec 3 → BitVec 32 → BitVec 32 → BitVec 32 → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_f64MulAdd : BitVec 3 → BitVec 64 → BitVec 64 → BitVec 64 → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"
def riscv_f16Sqrt : BitVec 3 → BitVec 16 → (BitVec 5 × BitVec 16) := λ _ => panic "TODO"
def riscv_f32Sqrt : BitVec 3 → BitVec 32 → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_f64Sqrt : BitVec 3 → BitVec 64 → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"
def riscv_f16ToI32 : BitVec 3 → BitVec 16 → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_f16ToUi32 : BitVec 3 → BitVec 16 → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_i32ToF16 : BitVec 3 → BitVec 32 → (BitVec 5 × BitVec 16) := λ _ => panic "TODO"
def riscv_ui32ToF16 : BitVec 3 → BitVec 32 → (BitVec 5 × BitVec 16) := λ _ => panic "TODO"
def riscv_f16ToI64 : BitVec 3 → BitVec 16 → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"
def riscv_f16ToUi64 : BitVec 3 → BitVec 16 → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"
def riscv_i64ToF16 : BitVec 3 → BitVec 64 → (BitVec 5 × BitVec 16) := λ _ => panic "TODO"
def riscv_ui64ToF16 : BitVec 3 → BitVec 64 → (BitVec 5 × BitVec 16) := λ _ => panic "TODO"
def riscv_f32ToI32 : BitVec 3 → BitVec 32 → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_f32ToUi32 : BitVec 3 → BitVec 32 → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_i32ToF32 : BitVec 3 → BitVec 32 → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_ui32ToF32 : BitVec 3 → BitVec 32 → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_f32ToI64 : BitVec 3 → BitVec 32 → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"
def riscv_f32ToUi64 : BitVec 3 → BitVec 32 → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"
def riscv_i64ToF32 : BitVec 3 → BitVec 64 → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_ui64ToF32 : BitVec 3 → BitVec 64 → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_f64ToI32 : BitVec 3 → BitVec 64 → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_f64ToUi32 : BitVec 3 → BitVec 64 → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_i32ToF64 : BitVec 3 → BitVec 32 → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"
def riscv_ui32ToF64 : BitVec 3 → BitVec 32 → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"
def riscv_f64ToI64 : BitVec 3 → BitVec 64 → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"
def riscv_f64ToUi64 : BitVec 3 → BitVec 64 → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"
def riscv_i64ToF64 : BitVec 3 → BitVec 64 → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"
def riscv_ui64ToF64 : BitVec 3 → BitVec 64 → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"
def riscv_f16ToF32 : BitVec 3 → BitVec 16 → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_f16ToF64 : BitVec 3 → BitVec 16 → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"
def riscv_f32ToF64 : BitVec 3 → BitVec 32 → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"
def riscv_f32ToF16 : BitVec 3 → BitVec 32 → (BitVec 5 × BitVec 16) := λ _ => panic "TODO"
def riscv_f64ToF16 : BitVec 3 → BitVec 64 → (BitVec 5 × BitVec 16) := λ _ => panic "TODO"
def riscv_f64ToF32 : BitVec 3 → BitVec 64 → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_f32ToBF16 : BitVec 3 → BitVec 32 → (BitVec 5 × BitVec 16) := λ _ => panic "TODO"
def riscv_f16Lt : BitVec 16 → BitVec 16 → (BitVec 5 × Bool) := λ _ => panic "TODO"
def riscv_f16Lt_quiet : BitVec 16 → BitVec 16 → (BitVec 5 × Bool) := λ _ => panic "TODO"
def riscv_f16Le : BitVec 16 → BitVec 16 → (BitVec 5 × Bool) := λ _ => panic "TODO"
def riscv_f16Le_quiet : BitVec 16 → BitVec 16 → (BitVec 5 × Bool) := λ _ => panic "TODO"
def riscv_f16Eq : BitVec 16 → BitVec 16 → (BitVec 5 × Bool) := λ _ => panic "TODO"
def riscv_f32Lt : BitVec 32 → BitVec 32 → (BitVec 5 × Bool) := λ _ => panic "TODO"
def riscv_f32Lt_quiet : BitVec 32 → BitVec 32 → (BitVec 5 × Bool) := λ _ => panic "TODO"
def riscv_f32Le : BitVec 32 → BitVec 32 → (BitVec 5 × Bool) := λ _ => panic "TODO"
def riscv_f32Le_quiet : BitVec 32 → BitVec 32 → (BitVec 5 × Bool) := λ _ => panic "TODO"
def riscv_f32Eq : BitVec 32 → BitVec 32 → (BitVec 5 × Bool) := λ _ => panic "TODO"
def riscv_f64Lt : BitVec 64 → BitVec 64 → (BitVec 5 × Bool) := λ _ => panic "TODO"
def riscv_f64Lt_quiet : BitVec 64 → BitVec 64 → (BitVec 5 × Bool) := λ _ => panic "TODO"
def riscv_f64Le : BitVec 64 → BitVec 64 → (BitVec 5 × Bool) := λ _ => panic "TODO"
def riscv_f64Le_quiet : BitVec 64 → BitVec 64 → (BitVec 5 × Bool) := λ _ => panic "TODO"
def riscv_f64Eq : BitVec 64 → BitVec 64 → (BitVec 5 × Bool) := λ _ => panic "TODO"
def riscv_f16roundToInt : BitVec 3 → BitVec 16 → Bool → (BitVec 5 × BitVec 16) := λ _ => panic "TODO"
def riscv_f32roundToInt : BitVec 3 → BitVec 32 → Bool → (BitVec 5 × BitVec 32) := λ _ => panic "TODO"
def riscv_f64roundToInt : BitVec 3 → BitVec 64 → Bool → (BitVec 5 × BitVec 64) := λ _ => panic "TODO"

-- Termination of extensionEnabled
instance : SizeOf extension where
  sizeOf := extension.toCtorIdx

macro_rules | `(tactic| decreasing_trivial) => `(tactic| sorry)
