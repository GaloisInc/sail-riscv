import LeanRV64DExecutable.HexBits
import LeanRV64DExecutable.Xlen
import LeanRV64DExecutable.Types

set_option maxHeartbeats 1_000_000_000
set_option maxRecDepth 1_000_000
set_option linter.unusedVariables false
set_option match.ignoreUnusedAlts true

open Sail

namespace LeanRV64DExecutable.Functions

open xRET_type
open wxfunct6
open wvxfunct6
open wvvfunct6
open wvfunct6
open write_kind
open wmvxfunct6
open wmvvfunct6
open vxsgfunct6
open vxmsfunct6
open vxmfunct6
open vxmcfunct6
open vxfunct6
open vxcmpfunct6
open vvmsfunct6
open vvmfunct6
open vvmcfunct6
open vvfunct6
open vvcmpfunct6
open vregno
open vregidx
open vmlsop
open vlewidth
open visgfunct6
open virtaddr
open vimsfunct6
open vimfunct6
open vimcfunct6
open vifunct6
open vicmpfunct6
open vfwunary0
open vfunary1
open vfunary0
open vfnunary0
open vextfunct6
open vector_support
open seed_opst
open rounding_mode
open rmvvfunct6
open rivvfunct6
open rfvvfunct6
open regno
open regidx
open read_kind
open pmpAddrMatch
open physaddr
open option
open nxsfunct6
open nxfunct6
open nvsfunct6
open nvfunct6
open nisfunct6
open nifunct6
open mvxmafunct6
open mvxfunct6
open mvvmafunct6
open mvvfunct6
open mmfunct6
open misaligned_fault
open maskfunct3
open landing_pad_expectation
open instruction
open fwvvmafunct6
open fwvvfunct6
open fwvfunct6
open fwvfmafunct6
open fwvffunct6
open fwffunct6
open fvvmfunct6
open fvvmafunct6
open fvvfunct6
open fvfmfunct6
open fvfmafunct6
open fvffunct6
open fregno
open fregidx
open f_un_x_op_H
open f_un_x_op_D
open f_un_rm_xf_op_S
open f_un_rm_xf_op_H
open f_un_rm_xf_op_D
open f_un_rm_fx_op_S
open f_un_rm_fx_op_H
open f_un_rm_fx_op_D
open f_un_rm_ff_op_S
open f_un_rm_ff_op_H
open f_un_rm_ff_op_D
open f_un_op_x_S
open f_un_op_f_S
open f_un_f_op_H
open f_un_f_op_D
open f_madd_op_S
open f_madd_op_H
open f_madd_op_D
open f_bin_x_op_H
open f_bin_x_op_D
open f_bin_rm_op_S
open f_bin_rm_op_H
open f_bin_rm_op_D
open f_bin_op_x_S
open f_bin_op_f_S
open f_bin_f_op_H
open f_bin_f_op_D
open extension
open exception
open ctl_result
open csrop
open cregidx
open checked_cbop
open cfregidx
open cbop_zicbom
open cbie
open barrier_kind
open amoop
open agtype
open WaitReason
open TrapVectorMode
open Step
open Software_Check_Code
open SWCheckCodes
open SATPMode
open Reservability
open Register
open Privilege
open PmpAddrMatchType
open PTW_Error
open PTE_Check
open InterruptType
open ISA_Format
open HartState
open FetchResult
open Ext_DataAddr_Check
open ExtStatus
open ExecutionResult
open ExceptionType
open AtomicSupport
open Architecture
open AccessType

/-- Type quantifiers: x_2 : Nat, x_2 ≥ 0, 0 < x_2 ∧ x_2 ≤ max_mem_access -/
def mem_write_callback (x_0 : String) (x_1 : (BitVec (bif 64 = 32 then 34 else 64))) (x_2 : Nat) (x_3 : (BitVec (8 * x_2))) : Unit :=
  ()

/-- Type quantifiers: x_2 : Nat, x_2 ≥ 0, 0 < x_2 ∧ x_2 ≤ max_mem_access -/
def mem_read_callback (x_0 : String) (x_1 : (BitVec (bif 64 = 32 then 34 else 64))) (x_2 : Nat) (x_3 : (BitVec (8 * x_2))) : Unit :=
  ()

def mem_exception_callback (x_0 : (BitVec (bif 64 = 32 then 34 else 64))) (x_1 : (BitVec 6)) : Unit :=
  ()

def pc_write_callback (x_0 : (BitVec 64)) : Unit :=
  ()

def xreg_full_write_callback (x_0 : String) (x_1 : regidx) (x_2 : (BitVec 64)) : Unit :=
  ()

def csr_full_write_callback (x_0 : String) (x_1 : (BitVec 12)) (x_2 : (BitVec 64)) : Unit :=
  ()

def csr_full_read_callback (x_0 : String) (x_1 : (BitVec 12)) (x_2 : (BitVec 64)) : Unit :=
  ()

def trap_callback (x_0 : Unit) : Unit :=
  ()

def csr_name_map_backwards (arg_ : String) : SailM (BitVec 12) := do
  let head_exp_ := arg_
  match (match head_exp_ with
  | "misa" => (some (0x301 : (BitVec 12)))
  | "mstatus" => (some (0x300 : (BitVec 12)))
  | "mstatush" => (some (0x310 : (BitVec 12)))
  | "mseccfg" => (some (0x747 : (BitVec 12)))
  | "mseccfgh" => (some (0x757 : (BitVec 12)))
  | "menvcfg" => (some (0x30A : (BitVec 12)))
  | "menvcfgh" => (some (0x31A : (BitVec 12)))
  | "senvcfg" => (some (0x10A : (BitVec 12)))
  | "mie" => (some (0x304 : (BitVec 12)))
  | "mip" => (some (0x344 : (BitVec 12)))
  | "medeleg" => (some (0x302 : (BitVec 12)))
  | "medelegh" => (some (0x312 : (BitVec 12)))
  | "mideleg" => (some (0x303 : (BitVec 12)))
  | "mcause" => (some (0x342 : (BitVec 12)))
  | "mtval" => (some (0x343 : (BitVec 12)))
  | "mscratch" => (some (0x340 : (BitVec 12)))
  | "scounteren" => (some (0x106 : (BitVec 12)))
  | "mcounteren" => (some (0x306 : (BitVec 12)))
  | "mcountinhibit" => (some (0x320 : (BitVec 12)))
  | "mvendorid" => (some (0xF11 : (BitVec 12)))
  | "marchid" => (some (0xF12 : (BitVec 12)))
  | "mimpid" => (some (0xF13 : (BitVec 12)))
  | "mhartid" => (some (0xF14 : (BitVec 12)))
  | "mconfigptr" => (some (0xF15 : (BitVec 12)))
  | "sstatus" => (some (0x100 : (BitVec 12)))
  | "sip" => (some (0x144 : (BitVec 12)))
  | "sie" => (some (0x104 : (BitVec 12)))
  | "sscratch" => (some (0x140 : (BitVec 12)))
  | "scause" => (some (0x142 : (BitVec 12)))
  | "stval" => (some (0x143 : (BitVec 12)))
  | "tselect" => (some (0x7A0 : (BitVec 12)))
  | "tdata1" => (some (0x7A1 : (BitVec 12)))
  | "tdata2" => (some (0x7A2 : (BitVec 12)))
  | "tdata3" => (some (0x7A3 : (BitVec 12)))
  | "stvec" => (some (0x105 : (BitVec 12)))
  | "sepc" => (some (0x141 : (BitVec 12)))
  | "mtvec" => (some (0x305 : (BitVec 12)))
  | "mepc" => (some (0x341 : (BitVec 12)))
  | "pmpcfg0" => (some (0x3A0 : (BitVec 12)))
  | "pmpcfg1" => (some (0x3A1 : (BitVec 12)))
  | "pmpcfg2" => (some (0x3A2 : (BitVec 12)))
  | "pmpcfg3" => (some (0x3A3 : (BitVec 12)))
  | "pmpcfg4" => (some (0x3A4 : (BitVec 12)))
  | "pmpcfg5" => (some (0x3A5 : (BitVec 12)))
  | "pmpcfg6" => (some (0x3A6 : (BitVec 12)))
  | "pmpcfg7" => (some (0x3A7 : (BitVec 12)))
  | "pmpcfg8" => (some (0x3A8 : (BitVec 12)))
  | "pmpcfg9" => (some (0x3A9 : (BitVec 12)))
  | "pmpcfg10" => (some (0x3AA : (BitVec 12)))
  | "pmpcfg11" => (some (0x3AB : (BitVec 12)))
  | "pmpcfg12" => (some (0x3AC : (BitVec 12)))
  | "pmpcfg13" => (some (0x3AD : (BitVec 12)))
  | "pmpcfg14" => (some (0x3AE : (BitVec 12)))
  | "pmpcfg15" => (some (0x3AF : (BitVec 12)))
  | "pmpaddr0" => (some (0x3B0 : (BitVec 12)))
  | "pmpaddr1" => (some (0x3B1 : (BitVec 12)))
  | "pmpaddr2" => (some (0x3B2 : (BitVec 12)))
  | "pmpaddr3" => (some (0x3B3 : (BitVec 12)))
  | "pmpaddr4" => (some (0x3B4 : (BitVec 12)))
  | "pmpaddr5" => (some (0x3B5 : (BitVec 12)))
  | "pmpaddr6" => (some (0x3B6 : (BitVec 12)))
  | "pmpaddr7" => (some (0x3B7 : (BitVec 12)))
  | "pmpaddr8" => (some (0x3B8 : (BitVec 12)))
  | "pmpaddr9" => (some (0x3B9 : (BitVec 12)))
  | "pmpaddr10" => (some (0x3BA : (BitVec 12)))
  | "pmpaddr11" => (some (0x3BB : (BitVec 12)))
  | "pmpaddr12" => (some (0x3BC : (BitVec 12)))
  | "pmpaddr13" => (some (0x3BD : (BitVec 12)))
  | "pmpaddr14" => (some (0x3BE : (BitVec 12)))
  | "pmpaddr15" => (some (0x3BF : (BitVec 12)))
  | "pmpaddr16" => (some (0x3C0 : (BitVec 12)))
  | "pmpaddr17" => (some (0x3C1 : (BitVec 12)))
  | "pmpaddr18" => (some (0x3C2 : (BitVec 12)))
  | "pmpaddr19" => (some (0x3C3 : (BitVec 12)))
  | "pmpaddr20" => (some (0x3C4 : (BitVec 12)))
  | "pmpaddr21" => (some (0x3C5 : (BitVec 12)))
  | "pmpaddr22" => (some (0x3C6 : (BitVec 12)))
  | "pmpaddr23" => (some (0x3C7 : (BitVec 12)))
  | "pmpaddr24" => (some (0x3C8 : (BitVec 12)))
  | "pmpaddr25" => (some (0x3C9 : (BitVec 12)))
  | "pmpaddr26" => (some (0x3CA : (BitVec 12)))
  | "pmpaddr27" => (some (0x3CB : (BitVec 12)))
  | "pmpaddr28" => (some (0x3CC : (BitVec 12)))
  | "pmpaddr29" => (some (0x3CD : (BitVec 12)))
  | "pmpaddr30" => (some (0x3CE : (BitVec 12)))
  | "pmpaddr31" => (some (0x3CF : (BitVec 12)))
  | "pmpaddr32" => (some (0x3D0 : (BitVec 12)))
  | "pmpaddr33" => (some (0x3D1 : (BitVec 12)))
  | "pmpaddr34" => (some (0x3D2 : (BitVec 12)))
  | "pmpaddr35" => (some (0x3D3 : (BitVec 12)))
  | "pmpaddr36" => (some (0x3D4 : (BitVec 12)))
  | "pmpaddr37" => (some (0x3D5 : (BitVec 12)))
  | "pmpaddr38" => (some (0x3D6 : (BitVec 12)))
  | "pmpaddr39" => (some (0x3D7 : (BitVec 12)))
  | "pmpaddr40" => (some (0x3D8 : (BitVec 12)))
  | "pmpaddr41" => (some (0x3D9 : (BitVec 12)))
  | "pmpaddr42" => (some (0x3DA : (BitVec 12)))
  | "pmpaddr43" => (some (0x3DB : (BitVec 12)))
  | "pmpaddr44" => (some (0x3DC : (BitVec 12)))
  | "pmpaddr45" => (some (0x3DD : (BitVec 12)))
  | "pmpaddr46" => (some (0x3DE : (BitVec 12)))
  | "pmpaddr47" => (some (0x3DF : (BitVec 12)))
  | "pmpaddr48" => (some (0x3E0 : (BitVec 12)))
  | "pmpaddr49" => (some (0x3E1 : (BitVec 12)))
  | "pmpaddr50" => (some (0x3E2 : (BitVec 12)))
  | "pmpaddr51" => (some (0x3E3 : (BitVec 12)))
  | "pmpaddr52" => (some (0x3E4 : (BitVec 12)))
  | "pmpaddr53" => (some (0x3E5 : (BitVec 12)))
  | "pmpaddr54" => (some (0x3E6 : (BitVec 12)))
  | "pmpaddr55" => (some (0x3E7 : (BitVec 12)))
  | "pmpaddr56" => (some (0x3E8 : (BitVec 12)))
  | "pmpaddr57" => (some (0x3E9 : (BitVec 12)))
  | "pmpaddr58" => (some (0x3EA : (BitVec 12)))
  | "pmpaddr59" => (some (0x3EB : (BitVec 12)))
  | "pmpaddr60" => (some (0x3EC : (BitVec 12)))
  | "pmpaddr61" => (some (0x3ED : (BitVec 12)))
  | "pmpaddr62" => (some (0x3EE : (BitVec 12)))
  | "pmpaddr63" => (some (0x3EF : (BitVec 12)))
  | "fflags" => (some (0x001 : (BitVec 12)))
  | "frm" => (some (0x002 : (BitVec 12)))
  | "fcsr" => (some (0x003 : (BitVec 12)))
  | "vstart" => (some (0x008 : (BitVec 12)))
  | "vxsat" => (some (0x009 : (BitVec 12)))
  | "vxrm" => (some (0x00A : (BitVec 12)))
  | "vcsr" => (some (0x00F : (BitVec 12)))
  | "vl" => (some (0xC20 : (BitVec 12)))
  | "vtype" => (some (0xC21 : (BitVec 12)))
  | "vlenb" => (some (0xC22 : (BitVec 12)))
  | "mcyclecfg" => (some (0x321 : (BitVec 12)))
  | "mcyclecfgh" => (some (0x721 : (BitVec 12)))
  | "minstretcfg" => (some (0x322 : (BitVec 12)))
  | "minstretcfgh" => (some (0x722 : (BitVec 12)))
  | "satp" => (some (0x180 : (BitVec 12)))
  | "seed" => (some (0x015 : (BitVec 12)))
  | mapping0_ =>
    (bif (hex_bits_12_backwards_matches mapping0_)
    then
      (match (hex_bits_12_backwards mapping0_) with
      | reg => (some reg))
    else none)) with
  | .some result => (pure result)
  | _ =>
    (do
      assert false "Pattern match failure at unknown location"
      throw Error.Exit)

def csr_name_write_callback (name : String) (value : (BitVec 64)) : SailM Unit := do
  let csr ← do (csr_name_map_backwards name)
  (pure (csr_full_write_callback name csr value))

def csr_id_write_callback (csr : (BitVec 12)) (value : (BitVec 64)) : SailM Unit := do
  let name ← do (csr_name_map_forwards csr)
  (pure (csr_full_write_callback name csr value))

def csr_name_read_callback (name : String) (value : (BitVec 64)) : SailM Unit := do
  let csr ← do (csr_name_map_backwards name)
  (pure (csr_full_read_callback name csr value))

def csr_id_read_callback (csr : (BitVec 12)) (value : (BitVec 64)) : SailM Unit := do
  let name ← do (csr_name_map_forwards csr)
  (pure (csr_full_read_callback name csr value))

def long_csr_write_callback (name : String) (name_high : String) (value : (BitVec 64)) : SailM Unit := do
  (csr_name_write_callback name (Sail.BitVec.extractLsb value (xlen -i 1) 0))

