import LeanRV64DExecutable.Types
import LeanRV64DExecutable.InstRetire

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

def encdec_forwards (arg_ : instruction) : SailM (BitVec 32) := do
  match arg_ with
  | .FENCEI () =>
    (do
      if ((← (currentlyEnabled Ext_Zifencei)) : Bool)
      then
        (pure ((0x000 : (BitVec 12)) ++ ((0b00000 : (BitVec 5)) ++ ((0b001 : (BitVec 3)) ++ ((0b00000 : (BitVec 5)) ++ (0b0001111 : (BitVec 7)))))))
      else
        (do
          assert false "Pattern match failure at unknown location"
          throw Error.Exit))
  | _ =>
    (do
      assert false "Pattern match failure at unknown location"
      throw Error.Exit)

def encdec_backwards (arg_ : (BitVec 32)) : SailM instruction := do
  let v__38 := arg_
  if (((← (currentlyEnabled Ext_Zifencei)) && (v__38 == (0x0000100F : (BitVec 32)))) : Bool)
  then (pure (FENCEI ()))
  else
    (do
      assert false "Pattern match failure at unknown location"
      throw Error.Exit)

def encdec_forwards_matches (arg_ : instruction) : SailM Bool := do
  match arg_ with
  | .FENCEI () =>
    (do
      if ((← (currentlyEnabled Ext_Zifencei)) : Bool)
      then (pure true)
      else (pure false))
  | _ => (pure false)

def encdec_backwards_matches (arg_ : (BitVec 32)) : SailM Bool := do
  let v__44 := arg_
  if (((← (currentlyEnabled Ext_Zifencei)) && (v__44 == (0x0000100F : (BitVec 32)))) : Bool)
  then (pure true)
  else (pure false)

def execute_FENCEI (_ : Unit) : ExecutionResult :=
  RETIRE_SUCCESS

def execute (merge_var : instruction) : SailM ExecutionResult := do
  match merge_var with
  | .FENCEI arg0 => (pure (execute_FENCEI arg0))
  | _ =>
    (do
      assert false "Pattern match failure at extensions/Zifenci/zifencei_insts.sail:23.0-23.87"
      throw Error.Exit)

def assembly_forwards (arg_ : instruction) : SailM String := do
  match arg_ with
  | .FENCEI () => (pure "fence.i")
  | _ =>
    (do
      assert false "Pattern match failure at unknown location"
      throw Error.Exit)

def assembly_backwards (arg_ : String) : SailM instruction := do
  match arg_ with
  | "fence.i" => (pure (FENCEI ()))
  | _ =>
    (do
      assert false "Pattern match failure at unknown location"
      throw Error.Exit)

def assembly_forwards_matches (arg_ : instruction) : Bool :=
  match arg_ with
  | .FENCEI () => true
  | _ => false

def assembly_backwards_matches (arg_ : String) : Bool :=
  match arg_ with
  | "fence.i" => true
  | _ => false

