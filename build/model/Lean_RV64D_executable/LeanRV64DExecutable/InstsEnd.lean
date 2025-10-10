import LeanRV64DExecutable.Flow
import LeanRV64DExecutable.Prelude
import LeanRV64DExecutable.Types
import LeanRV64DExecutable.Regs
import LeanRV64DExecutable.PcAccess
import LeanRV64DExecutable.ZicfilpRegs
import LeanRV64DExecutable.InstRetire
import LeanRV64DExecutable.ZicfilpInsts

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

def encdec_forwards (arg_ : instruction) : SailM (BitVec 32) := do
  match arg_ with
  | .LPAD lpl =>
    (do
      if ((← (currentlyEnabled Ext_Zicfilp)) : Bool)
      then (pure ((lpl : (BitVec 20)) ++ ((0b00000 : (BitVec 5)) ++ (0b0010111 : (BitVec 7)))))
      else
        (do
          assert false "Pattern match failure at unknown location"
          throw Error.Exit))
  | .ILLEGAL s => (pure s)
  | _ =>
    (do
      assert false "Pattern match failure at unknown location"
      throw Error.Exit)

def encdec_backwards (arg_ : (BitVec 32)) : SailM instruction := do
  let v__8 := arg_
  if (((← (currentlyEnabled Ext_Zicfilp)) && ((Sail.BitVec.extractLsb v__8 11 0) == (0x017 : (BitVec 12)))) : Bool)
  then
    (let lpl : (BitVec 20) := (Sail.BitVec.extractLsb v__8 31 12)
    let lpl : (BitVec 20) := (Sail.BitVec.extractLsb v__8 31 12)
    (pure (LPAD lpl)))
  else (pure (ILLEGAL v__8))

def encdec_forwards_matches (arg_ : instruction) : SailM Bool := do
  match arg_ with
  | .LPAD lpl =>
    (do
      if ((← (currentlyEnabled Ext_Zicfilp)) : Bool)
      then (pure true)
      else (pure false))
  | .ILLEGAL s => (pure true)
  | _ => (pure false)

def encdec_backwards_matches (arg_ : (BitVec 32)) : SailM Bool := do
  let v__11 := arg_
  if (((← (currentlyEnabled Ext_Zicfilp)) && ((Sail.BitVec.extractLsb v__11 11 0) == (0x017 : (BitVec 12)))) : Bool)
  then (pure true)
  else (pure true)

def encdec_compressed_forwards (arg_ : instruction) : SailM (BitVec 16) := do
  match arg_ with
  | .C_ILLEGAL s => (pure s)
  | _ =>
    (do
      assert false "Pattern match failure at unknown location"
      throw Error.Exit)

def encdec_compressed_backwards (arg_ : (BitVec 16)) : instruction :=
  match arg_ with
  | s => (C_ILLEGAL s)

def encdec_compressed_forwards_matches (arg_ : instruction) : Bool :=
  match arg_ with
  | .C_ILLEGAL s => true
  | _ => false

def encdec_compressed_backwards_matches (arg_ : (BitVec 16)) : Bool :=
  match arg_ with
  | s => true

def execute_LPAD (lpl : (BitVec 20)) : SailM ExecutionResult := do
  if ((← (is_landing_pad_expected ())) : Bool)
  then
    (do
      let unaligned_pc ← do
        (pure ((Sail.BitVec.extractLsb (← (get_arch_pc ())) 1 0) != (0b00 : (BitVec 2))))
      let label_mismatch ← do
        (pure (((Sail.BitVec.extractLsb (← (rX (Regno 7))) 31 12) != lpl) && (lpl != (zeros
                (n := 20)))))
      if ((unaligned_pc || label_mismatch) : Bool)
      then
        (pure (Trap
            ((← readReg cur_privilege), (CTL_TRAP (make_landing_pad_exception ())), (← readReg PC))))
      else
        (do
          (reset_elp ())
          (pure RETIRE_SUCCESS)))
  else (pure RETIRE_SUCCESS)

def execute_ILLEGAL (s : (BitVec 32)) : ExecutionResult :=
  (Illegal_Instruction ())

def execute_C_ILLEGAL (s : (BitVec 16)) : ExecutionResult :=
  (Illegal_Instruction ())

def execute (merge_var : instruction) : SailM ExecutionResult := do
  match merge_var with
  | .LPAD lpl => (execute_LPAD lpl)
  | .ILLEGAL s => (pure (execute_ILLEGAL s))
  | .C_ILLEGAL s => (pure (execute_C_ILLEGAL s))

def assembly_backwards (arg_ : String) : SailM instruction := do
  match arg_ with
  | _ => throw Error.Exit

def assembly_forwards_matches (arg_ : instruction) : Bool :=
  match arg_ with
  | .LPAD lpl => true
  | .ILLEGAL s => true
  | .C_ILLEGAL s => true

def assembly_backwards_matches (arg_ : String) : SailM Bool := do
  match arg_ with
  | _ => throw Error.Exit

