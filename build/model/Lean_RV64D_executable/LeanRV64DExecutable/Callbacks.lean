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
open cregidx
open cfregidx
open barrier_kind
open amoop
open agtype
open WaitReason
open TrapVectorMode
open SWCheckCodes
open SATPMode
open Reservability
open Register
open Privilege
open PmpAddrMatchType
open PTW_Error
open PTE_Check
open InterruptType
open Ext_DataAddr_Check
open ExtStatus
open ExecutionResult
open ExceptionType
open AtomicSupport
open Architecture
open AccessType

/-- Type quantifiers: x_2 : Nat, x_2 ≥ 0, 0 < x_2 ∧ x_2 ≤ max_mem_access -/
def mem_write_callback (x_0 : String) (x_1 : (BitVec (if ( 64 = 32  : Bool) then 34 else 64))) (x_2 : Nat) (x_3 : (BitVec (8 * x_2))) : Unit :=
  ()

/-- Type quantifiers: x_2 : Nat, x_2 ≥ 0, 0 < x_2 ∧ x_2 ≤ max_mem_access -/
def mem_read_callback (x_0 : String) (x_1 : (BitVec (if ( 64 = 32  : Bool) then 34 else 64))) (x_2 : Nat) (x_3 : (BitVec (8 * x_2))) : Unit :=
  ()

def mem_exception_callback (x_0 : (BitVec (if ( 64 = 32  : Bool) then 34 else 64))) (x_1 : (BitVec 6)) : Unit :=
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
  match arg_ with
  | "misa" => (pure (0x301 : (BitVec 12)))
  | "mstatus" => (pure (0x300 : (BitVec 12)))
  | "mstatush" => (pure (0x310 : (BitVec 12)))
  | "mseccfg" => (pure (0x747 : (BitVec 12)))
  | "mseccfgh" => (pure (0x757 : (BitVec 12)))
  | "menvcfg" => (pure (0x30A : (BitVec 12)))
  | "menvcfgh" => (pure (0x31A : (BitVec 12)))
  | "senvcfg" => (pure (0x10A : (BitVec 12)))
  | "mie" => (pure (0x304 : (BitVec 12)))
  | "mip" => (pure (0x344 : (BitVec 12)))
  | "medeleg" => (pure (0x302 : (BitVec 12)))
  | "medelegh" => (pure (0x312 : (BitVec 12)))
  | "mideleg" => (pure (0x303 : (BitVec 12)))
  | "mcause" => (pure (0x342 : (BitVec 12)))
  | "mtval" => (pure (0x343 : (BitVec 12)))
  | "mscratch" => (pure (0x340 : (BitVec 12)))
  | "scounteren" => (pure (0x106 : (BitVec 12)))
  | "mcounteren" => (pure (0x306 : (BitVec 12)))
  | "mcountinhibit" => (pure (0x320 : (BitVec 12)))
  | "mvendorid" => (pure (0xF11 : (BitVec 12)))
  | "marchid" => (pure (0xF12 : (BitVec 12)))
  | "mimpid" => (pure (0xF13 : (BitVec 12)))
  | "mhartid" => (pure (0xF14 : (BitVec 12)))
  | "mconfigptr" => (pure (0xF15 : (BitVec 12)))
  | "sstatus" => (pure (0x100 : (BitVec 12)))
  | "sip" => (pure (0x144 : (BitVec 12)))
  | "sie" => (pure (0x104 : (BitVec 12)))
  | "sscratch" => (pure (0x140 : (BitVec 12)))
  | "scause" => (pure (0x142 : (BitVec 12)))
  | "stval" => (pure (0x143 : (BitVec 12)))
  | "tselect" => (pure (0x7A0 : (BitVec 12)))
  | "tdata1" => (pure (0x7A1 : (BitVec 12)))
  | "tdata2" => (pure (0x7A2 : (BitVec 12)))
  | "tdata3" => (pure (0x7A3 : (BitVec 12)))
  | "stvec" => (pure (0x105 : (BitVec 12)))
  | "sepc" => (pure (0x141 : (BitVec 12)))
  | "mtvec" => (pure (0x305 : (BitVec 12)))
  | "mepc" => (pure (0x341 : (BitVec 12)))
  | "pmpcfg0" => (pure (0x3A0 : (BitVec 12)))
  | "pmpcfg1" => (pure (0x3A1 : (BitVec 12)))
  | "pmpcfg2" => (pure (0x3A2 : (BitVec 12)))
  | "pmpcfg3" => (pure (0x3A3 : (BitVec 12)))
  | "pmpcfg4" => (pure (0x3A4 : (BitVec 12)))
  | "pmpcfg5" => (pure (0x3A5 : (BitVec 12)))
  | "pmpcfg6" => (pure (0x3A6 : (BitVec 12)))
  | "pmpcfg7" => (pure (0x3A7 : (BitVec 12)))
  | "pmpcfg8" => (pure (0x3A8 : (BitVec 12)))
  | "pmpcfg9" => (pure (0x3A9 : (BitVec 12)))
  | "pmpcfg10" => (pure (0x3AA : (BitVec 12)))
  | "pmpcfg11" => (pure (0x3AB : (BitVec 12)))
  | "pmpcfg12" => (pure (0x3AC : (BitVec 12)))
  | "pmpcfg13" => (pure (0x3AD : (BitVec 12)))
  | "pmpcfg14" => (pure (0x3AE : (BitVec 12)))
  | "pmpcfg15" => (pure (0x3AF : (BitVec 12)))
  | "pmpaddr0" => (pure (0x3B0 : (BitVec 12)))
  | "pmpaddr1" => (pure (0x3B1 : (BitVec 12)))
  | "pmpaddr2" => (pure (0x3B2 : (BitVec 12)))
  | "pmpaddr3" => (pure (0x3B3 : (BitVec 12)))
  | "pmpaddr4" => (pure (0x3B4 : (BitVec 12)))
  | "pmpaddr5" => (pure (0x3B5 : (BitVec 12)))
  | "pmpaddr6" => (pure (0x3B6 : (BitVec 12)))
  | "pmpaddr7" => (pure (0x3B7 : (BitVec 12)))
  | "pmpaddr8" => (pure (0x3B8 : (BitVec 12)))
  | "pmpaddr9" => (pure (0x3B9 : (BitVec 12)))
  | "pmpaddr10" => (pure (0x3BA : (BitVec 12)))
  | "pmpaddr11" => (pure (0x3BB : (BitVec 12)))
  | "pmpaddr12" => (pure (0x3BC : (BitVec 12)))
  | "pmpaddr13" => (pure (0x3BD : (BitVec 12)))
  | "pmpaddr14" => (pure (0x3BE : (BitVec 12)))
  | "pmpaddr15" => (pure (0x3BF : (BitVec 12)))
  | "pmpaddr16" => (pure (0x3C0 : (BitVec 12)))
  | "pmpaddr17" => (pure (0x3C1 : (BitVec 12)))
  | "pmpaddr18" => (pure (0x3C2 : (BitVec 12)))
  | "pmpaddr19" => (pure (0x3C3 : (BitVec 12)))
  | "pmpaddr20" => (pure (0x3C4 : (BitVec 12)))
  | "pmpaddr21" => (pure (0x3C5 : (BitVec 12)))
  | "pmpaddr22" => (pure (0x3C6 : (BitVec 12)))
  | "pmpaddr23" => (pure (0x3C7 : (BitVec 12)))
  | "pmpaddr24" => (pure (0x3C8 : (BitVec 12)))
  | "pmpaddr25" => (pure (0x3C9 : (BitVec 12)))
  | "pmpaddr26" => (pure (0x3CA : (BitVec 12)))
  | "pmpaddr27" => (pure (0x3CB : (BitVec 12)))
  | "pmpaddr28" => (pure (0x3CC : (BitVec 12)))
  | "pmpaddr29" => (pure (0x3CD : (BitVec 12)))
  | "pmpaddr30" => (pure (0x3CE : (BitVec 12)))
  | "pmpaddr31" => (pure (0x3CF : (BitVec 12)))
  | "pmpaddr32" => (pure (0x3D0 : (BitVec 12)))
  | "pmpaddr33" => (pure (0x3D1 : (BitVec 12)))
  | "pmpaddr34" => (pure (0x3D2 : (BitVec 12)))
  | "pmpaddr35" => (pure (0x3D3 : (BitVec 12)))
  | "pmpaddr36" => (pure (0x3D4 : (BitVec 12)))
  | "pmpaddr37" => (pure (0x3D5 : (BitVec 12)))
  | "pmpaddr38" => (pure (0x3D6 : (BitVec 12)))
  | "pmpaddr39" => (pure (0x3D7 : (BitVec 12)))
  | "pmpaddr40" => (pure (0x3D8 : (BitVec 12)))
  | "pmpaddr41" => (pure (0x3D9 : (BitVec 12)))
  | "pmpaddr42" => (pure (0x3DA : (BitVec 12)))
  | "pmpaddr43" => (pure (0x3DB : (BitVec 12)))
  | "pmpaddr44" => (pure (0x3DC : (BitVec 12)))
  | "pmpaddr45" => (pure (0x3DD : (BitVec 12)))
  | "pmpaddr46" => (pure (0x3DE : (BitVec 12)))
  | "pmpaddr47" => (pure (0x3DF : (BitVec 12)))
  | "pmpaddr48" => (pure (0x3E0 : (BitVec 12)))
  | "pmpaddr49" => (pure (0x3E1 : (BitVec 12)))
  | "pmpaddr50" => (pure (0x3E2 : (BitVec 12)))
  | "pmpaddr51" => (pure (0x3E3 : (BitVec 12)))
  | "pmpaddr52" => (pure (0x3E4 : (BitVec 12)))
  | "pmpaddr53" => (pure (0x3E5 : (BitVec 12)))
  | "pmpaddr54" => (pure (0x3E6 : (BitVec 12)))
  | "pmpaddr55" => (pure (0x3E7 : (BitVec 12)))
  | "pmpaddr56" => (pure (0x3E8 : (BitVec 12)))
  | "pmpaddr57" => (pure (0x3E9 : (BitVec 12)))
  | "pmpaddr58" => (pure (0x3EA : (BitVec 12)))
  | "pmpaddr59" => (pure (0x3EB : (BitVec 12)))
  | "pmpaddr60" => (pure (0x3EC : (BitVec 12)))
  | "pmpaddr61" => (pure (0x3ED : (BitVec 12)))
  | "pmpaddr62" => (pure (0x3EE : (BitVec 12)))
  | "pmpaddr63" => (pure (0x3EF : (BitVec 12)))
  | "fflags" => (pure (0x001 : (BitVec 12)))
  | "frm" => (pure (0x002 : (BitVec 12)))
  | "fcsr" => (pure (0x003 : (BitVec 12)))
  | "vstart" => (pure (0x008 : (BitVec 12)))
  | "vxsat" => (pure (0x009 : (BitVec 12)))
  | "vxrm" => (pure (0x00A : (BitVec 12)))
  | "vcsr" => (pure (0x00F : (BitVec 12)))
  | "vl" => (pure (0xC20 : (BitVec 12)))
  | "vtype" => (pure (0xC21 : (BitVec 12)))
  | "vlenb" => (pure (0xC22 : (BitVec 12)))
  | "mcyclecfg" => (pure (0x321 : (BitVec 12)))
  | "mcyclecfgh" => (pure (0x721 : (BitVec 12)))
  | "minstretcfg" => (pure (0x322 : (BitVec 12)))
  | "minstretcfgh" => (pure (0x722 : (BitVec 12)))
  | "satp" => (pure (0x180 : (BitVec 12)))
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

