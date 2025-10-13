import LeanRV64DExecutable.Flow
import LeanRV64DExecutable.Arith
import LeanRV64DExecutable.Prelude
import LeanRV64DExecutable.Errors
import LeanRV64DExecutable.Types
import LeanRV64DExecutable.VmemTypes
import LeanRV64DExecutable.Regs
import LeanRV64DExecutable.PcAccess
import LeanRV64DExecutable.AddrChecks
import LeanRV64DExecutable.ZicfilpRegs
import LeanRV64DExecutable.Platform
import LeanRV64DExecutable.Mem
import LeanRV64DExecutable.InstRetire
import LeanRV64DExecutable.Vmem
import LeanRV64DExecutable.ZicfilpInsts
import LeanRV64DExecutable.ZicsrInsts
import LeanRV64DExecutable.ZicbomInsts
import LeanRV64DExecutable.ZicbozInsts

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
  | .CSRReg (csr, rs1, rd, op) =>
    (do
      if ((← (currentlyEnabled Ext_Zicsr)) : Bool)
      then
        (pure ((csr : (BitVec 12)) ++ ((encdec_reg_forwards rs1) ++ ((0b0 : (BitVec 1)) ++ ((encdec_csrop_forwards
                    op) ++ ((encdec_reg_forwards rd) ++ (0b1110011 : (BitVec 7))))))))
      else
        (do
          assert false "Pattern match failure at unknown location"
          throw Error.Exit))
  | .CSRImm (csr, imm, rd, op) =>
    (do
      if ((← (currentlyEnabled Ext_Zicsr)) : Bool)
      then
        (pure ((csr : (BitVec 12)) ++ ((imm : (BitVec 5)) ++ ((0b1 : (BitVec 1)) ++ ((encdec_csrop_forwards
                    op) ++ ((encdec_reg_forwards rd) ++ (0b1110011 : (BitVec 7))))))))
      else
        (do
          assert false "Pattern match failure at unknown location"
          throw Error.Exit))
  | .ZICBOM (cbop, rs1) =>
    (do
      if ((← (currentlyEnabled Ext_Zicbom)) : Bool)
      then
        (pure ((encdec_cbop_forwards cbop) ++ ((encdec_reg_forwards rs1) ++ ((0b010 : (BitVec 3)) ++ ((0b00000 : (BitVec 5)) ++ (0b0001111 : (BitVec 7)))))))
      else
        (do
          assert false "Pattern match failure at unknown location"
          throw Error.Exit))
  | .ZICBOZ rs1 =>
    (do
      if ((← (currentlyEnabled Ext_Zicboz)) : Bool)
      then
        (pure ((0x004 : (BitVec 12)) ++ ((encdec_reg_forwards rs1) ++ ((0b010 : (BitVec 3)) ++ ((0b00000 : (BitVec 5)) ++ (0b0001111 : (BitVec 7)))))))
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
  let head_exp_ := arg_
  match (← do
    let v__20 := head_exp_
    if (((← (currentlyEnabled Ext_Zicfilp)) && ((Sail.BitVec.extractLsb v__20 11 0) == (0x017 : (BitVec 12)))) : Bool)
    then
      (let lpl : (BitVec 20) := (Sail.BitVec.extractLsb v__20 31 12)
      let lpl : (BitVec 20) := (Sail.BitVec.extractLsb v__20 31 12)
      (pure (some (LPAD lpl))))
    else
      (do
        if (((let mapping2_ : (BitVec 5) := (Sail.BitVec.extractLsb v__20 11 7)
             let mapping1_ : (BitVec 2) := (Sail.BitVec.extractLsb v__20 13 12)
             let mapping0_ : (BitVec 5) := (Sail.BitVec.extractLsb v__20 19 15)
             ((encdec_reg_backwards_matches mapping0_) && ((encdec_csrop_backwards_matches mapping1_) && (encdec_reg_backwards_matches
                   mapping2_)))) && (((Sail.BitVec.extractLsb v__20 14 14) == (0b0 : (BitVec 1))) && ((Sail.BitVec.extractLsb
                   v__20 6 0) == (0b1110011 : (BitVec 7))))) : Bool)
        then
          (do
            let csr : (BitVec 12) := (Sail.BitVec.extractLsb v__20 31 20)
            let mapping2_ : (BitVec 5) := (Sail.BitVec.extractLsb v__20 11 7)
            let mapping1_ : (BitVec 2) := (Sail.BitVec.extractLsb v__20 13 12)
            let mapping0_ : (BitVec 5) := (Sail.BitVec.extractLsb v__20 19 15)
            let csr : (BitVec 12) := (Sail.BitVec.extractLsb v__20 31 20)
            match ((← (encdec_reg_backwards mapping0_)), (← (encdec_csrop_backwards mapping1_)), (← (encdec_reg_backwards
                mapping2_))) with
            | (rs1, op, rd) =>
              (do
                if ((← (currentlyEnabled Ext_Zicsr)) : Bool)
                then (pure (some (CSRReg (csr, rs1, rd, op))))
                else (pure none)))
        else (pure none))) with
  | .some result => (pure result)
  | none =>
    (do
      match (← do
        let v__17 := head_exp_
        if (((let mapping4_ : (BitVec 5) := (Sail.BitVec.extractLsb v__17 11 7)
             let mapping3_ : (BitVec 2) := (Sail.BitVec.extractLsb v__17 13 12)
             ((encdec_csrop_backwards_matches mapping3_) && (encdec_reg_backwards_matches mapping4_))) && (((Sail.BitVec.extractLsb
                   v__17 14 14) == (0b1 : (BitVec 1))) && ((Sail.BitVec.extractLsb v__17 6 0) == (0b1110011 : (BitVec 7))))) : Bool)
        then
          (do
            let csr : (BitVec 12) := (Sail.BitVec.extractLsb v__17 31 20)
            let mapping4_ : (BitVec 5) := (Sail.BitVec.extractLsb v__17 11 7)
            let mapping3_ : (BitVec 2) := (Sail.BitVec.extractLsb v__17 13 12)
            let imm : (BitVec 5) := (Sail.BitVec.extractLsb v__17 19 15)
            let csr : (BitVec 12) := (Sail.BitVec.extractLsb v__17 31 20)
            match ((← (encdec_csrop_backwards mapping3_)), (← (encdec_reg_backwards mapping4_))) with
            | (op, rd) =>
              (do
                if ((← (currentlyEnabled Ext_Zicsr)) : Bool)
                then (pure (some (CSRImm (csr, imm, rd, op))))
                else (pure none)))
        else (pure none)) with
      | .some result => (pure result)
      | none =>
        (do
          match (← do
            let v__13 := head_exp_
            if (((let mapping5_ : (BitVec 12) := (Sail.BitVec.extractLsb v__13 31 20)
                 let mapping6_ : (BitVec 5) := (Sail.BitVec.extractLsb v__13 19 15)
                 let mapping5_ : (BitVec 12) := (Sail.BitVec.extractLsb v__13 31 20)
                 ((encdec_cbop_backwards_matches mapping5_) && (encdec_reg_backwards_matches
                     mapping6_))) && ((Sail.BitVec.extractLsb v__13 14 0) == (0b010000000001111 : (BitVec 15)))) : Bool)
            then
              (do
                let mapping5_ : (BitVec 12) := (Sail.BitVec.extractLsb v__13 31 20)
                let mapping6_ : (BitVec 5) := (Sail.BitVec.extractLsb v__13 19 15)
                let mapping5_ : (BitVec 12) := (Sail.BitVec.extractLsb v__13 31 20)
                match ((← (encdec_cbop_backwards mapping5_)), (← (encdec_reg_backwards mapping6_))) with
                | (cbop, rs1) =>
                  (do
                    if ((← (currentlyEnabled Ext_Zicbom)) : Bool)
                    then (pure (some (ZICBOM (cbop, rs1))))
                    else (pure none)))
            else (pure none)) with
          | .some result => (pure result)
          | none =>
            (do
              match (← do
                let v__8 := head_exp_
                if (((let mapping7_ : (BitVec 5) := (Sail.BitVec.extractLsb v__8 19 15)
                     (encdec_reg_backwards_matches mapping7_)) && (((Sail.BitVec.extractLsb v__8 31
                           20) == (0x004 : (BitVec 12))) && ((Sail.BitVec.extractLsb v__8 14 0) == (0b010000000001111 : (BitVec 15))))) : Bool)
                then
                  (do
                    let mapping7_ : (BitVec 5) := (Sail.BitVec.extractLsb v__8 19 15)
                    let rs1 ← do (encdec_reg_backwards mapping7_)
                    if ((← (currentlyEnabled Ext_Zicboz)) : Bool)
                    then (pure (some (ZICBOZ rs1)))
                    else (pure none))
                else (pure none)) with
              | .some result => (pure result)
              | none =>
                (match head_exp_ with
                | s => (pure (ILLEGAL s))))))

def encdec_forwards_matches (arg_ : instruction) : SailM Bool := do
  match arg_ with
  | .LPAD lpl =>
    (do
      if ((← (currentlyEnabled Ext_Zicfilp)) : Bool)
      then (pure true)
      else (pure false))
  | .CSRReg (csr, rs1, rd, op) =>
    (do
      if ((← (currentlyEnabled Ext_Zicsr)) : Bool)
      then (pure true)
      else (pure false))
  | .CSRImm (csr, imm, rd, op) =>
    (do
      if ((← (currentlyEnabled Ext_Zicsr)) : Bool)
      then (pure true)
      else (pure false))
  | .ZICBOM (cbop, rs1) =>
    (do
      if ((← (currentlyEnabled Ext_Zicbom)) : Bool)
      then (pure true)
      else (pure false))
  | .ZICBOZ rs1 =>
    (do
      if ((← (currentlyEnabled Ext_Zicboz)) : Bool)
      then (pure true)
      else (pure false))
  | .ILLEGAL s => (pure true)
  | _ => (pure false)

def encdec_backwards_matches (arg_ : (BitVec 32)) : SailM Bool := do
  let head_exp_ := arg_
  match (← do
    let v__38 := head_exp_
    if (((← (currentlyEnabled Ext_Zicfilp)) && ((Sail.BitVec.extractLsb v__38 11 0) == (0x017 : (BitVec 12)))) : Bool)
    then (pure (some true))
    else
      (do
        if (((let mapping2_ : (BitVec 5) := (Sail.BitVec.extractLsb v__38 11 7)
             let mapping1_ : (BitVec 2) := (Sail.BitVec.extractLsb v__38 13 12)
             let mapping0_ : (BitVec 5) := (Sail.BitVec.extractLsb v__38 19 15)
             ((encdec_reg_backwards_matches mapping0_) && ((encdec_csrop_backwards_matches mapping1_) && (encdec_reg_backwards_matches
                   mapping2_)))) && (((Sail.BitVec.extractLsb v__38 14 14) == (0b0 : (BitVec 1))) && ((Sail.BitVec.extractLsb
                   v__38 6 0) == (0b1110011 : (BitVec 7))))) : Bool)
        then
          (do
            let mapping2_ : (BitVec 5) := (Sail.BitVec.extractLsb v__38 11 7)
            let mapping1_ : (BitVec 2) := (Sail.BitVec.extractLsb v__38 13 12)
            let mapping0_ : (BitVec 5) := (Sail.BitVec.extractLsb v__38 19 15)
            match ((← (encdec_reg_backwards mapping0_)), (← (encdec_csrop_backwards mapping1_)), (← (encdec_reg_backwards
                mapping2_))) with
            | (rs1, op, rd) =>
              (do
                if ((← (currentlyEnabled Ext_Zicsr)) : Bool)
                then (pure (some true))
                else (pure none)))
        else (pure none))) with
  | .some result => (pure result)
  | none =>
    (do
      match (← do
        let v__35 := head_exp_
        if (((let mapping4_ : (BitVec 5) := (Sail.BitVec.extractLsb v__35 11 7)
             let mapping3_ : (BitVec 2) := (Sail.BitVec.extractLsb v__35 13 12)
             ((encdec_csrop_backwards_matches mapping3_) && (encdec_reg_backwards_matches mapping4_))) && (((Sail.BitVec.extractLsb
                   v__35 14 14) == (0b1 : (BitVec 1))) && ((Sail.BitVec.extractLsb v__35 6 0) == (0b1110011 : (BitVec 7))))) : Bool)
        then
          (do
            let mapping4_ : (BitVec 5) := (Sail.BitVec.extractLsb v__35 11 7)
            let mapping3_ : (BitVec 2) := (Sail.BitVec.extractLsb v__35 13 12)
            match ((← (encdec_csrop_backwards mapping3_)), (← (encdec_reg_backwards mapping4_))) with
            | (op, rd) =>
              (do
                if ((← (currentlyEnabled Ext_Zicsr)) : Bool)
                then (pure (some true))
                else (pure none)))
        else (pure none)) with
      | .some result => (pure result)
      | none =>
        (do
          match (← do
            let v__31 := head_exp_
            if (((let mapping5_ : (BitVec 12) := (Sail.BitVec.extractLsb v__31 31 20)
                 let mapping6_ : (BitVec 5) := (Sail.BitVec.extractLsb v__31 19 15)
                 let mapping5_ : (BitVec 12) := (Sail.BitVec.extractLsb v__31 31 20)
                 ((encdec_cbop_backwards_matches mapping5_) && (encdec_reg_backwards_matches
                     mapping6_))) && ((Sail.BitVec.extractLsb v__31 14 0) == (0b010000000001111 : (BitVec 15)))) : Bool)
            then
              (do
                let mapping5_ : (BitVec 12) := (Sail.BitVec.extractLsb v__31 31 20)
                let mapping6_ : (BitVec 5) := (Sail.BitVec.extractLsb v__31 19 15)
                let mapping5_ : (BitVec 12) := (Sail.BitVec.extractLsb v__31 31 20)
                match ((← (encdec_cbop_backwards mapping5_)), (← (encdec_reg_backwards mapping6_))) with
                | (cbop, rs1) =>
                  (do
                    if ((← (currentlyEnabled Ext_Zicbom)) : Bool)
                    then (pure (some true))
                    else (pure none)))
            else (pure none)) with
          | .some result => (pure result)
          | none =>
            (do
              match (← do
                let v__26 := head_exp_
                if (((let mapping7_ : (BitVec 5) := (Sail.BitVec.extractLsb v__26 19 15)
                     (encdec_reg_backwards_matches mapping7_)) && (((Sail.BitVec.extractLsb v__26 31
                           20) == (0x004 : (BitVec 12))) && ((Sail.BitVec.extractLsb v__26 14 0) == (0b010000000001111 : (BitVec 15))))) : Bool)
                then
                  (do
                    let mapping7_ : (BitVec 5) := (Sail.BitVec.extractLsb v__26 19 15)
                    let rs1 ← do (encdec_reg_backwards mapping7_)
                    if ((← (currentlyEnabled Ext_Zicboz)) : Bool)
                    then (pure (some true))
                    else (pure none))
                else (pure none)) with
              | .some result => (pure result)
              | none =>
                (match head_exp_ with
                | s => (pure true)))))

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

def execute_ZICBOZ (rs1 : regidx) : SailM ExecutionResult := do
  if ((← (cbo_zero_enabled (← readReg cur_privilege))) : Bool)
  then
    (do
      let rs1_val ← do (rX_bits rs1)
      let cache_block_size := (2 ^i plat_cache_block_size_exp)
      let negative_offset :=
        ((rs1_val &&& (Complement.complement
              (zero_extend (m := 64) (ones (n := plat_cache_block_size_exp))))) - rs1_val)
      match (← (ext_data_get_addr rs1 negative_offset (Write Data) cache_block_size)) with
      | .Ext_DataAddr_Error e => (pure (Ext_DataAddr_Check_Failure e))
      | .Ext_DataAddr_OK vaddr =>
        (do
          match (← (translateAddr vaddr (Write Data))) with
          | .Err (e, _) =>
            (pure (Memory_Exception ((sub_virtaddr_xlenbits vaddr negative_offset), e)))
          | .Ok (paddr, _) =>
            (do
              match (← (mem_write_ea paddr cache_block_size false false false)) with
              | .Err e =>
                (pure (Memory_Exception ((sub_virtaddr_xlenbits vaddr negative_offset), e)))
              | .Ok _ =>
                (do
                  match (← (mem_write_value paddr cache_block_size
                      (zeros (n := (8 *i (2 ^i plat_cache_block_size_exp)))) false false false)) with
                  | .Ok true => (pure RETIRE_SUCCESS)
                  | .Ok false =>
                    (internal_error "extensions/Zicboz/zicboz_insts.sail" 53
                      "store got false from mem_write_value")
                  | .Err e =>
                    (pure (Memory_Exception ((sub_virtaddr_xlenbits vaddr negative_offset), e)))))))
  else (pure (Illegal_Instruction ()))

def execute_ZICBOM (arg0 : cbop_zicbom) (arg1 : regidx) : SailM ExecutionResult := do
  let merge_var := (arg0, arg1)
  match merge_var with
  | (CBO_CLEAN, rs1) =>
    (do
      if ((← (cbo_clean_flush_enabled (← readReg cur_privilege))) : Bool)
      then (process_clean_inval rs1 CBO_CLEAN)
      else (pure (Illegal_Instruction ())))
  | (CBO_FLUSH, rs1) =>
    (do
      if ((← (cbo_clean_flush_enabled (← readReg cur_privilege))) : Bool)
      then (process_clean_inval rs1 CBO_FLUSH)
      else (pure (Illegal_Instruction ())))
  | (CBO_INVAL, rs1) =>
    (do
      match (← (cbop_priv_check (← readReg cur_privilege))) with
      | CBOP_ILLEGAL => (pure (Illegal_Instruction ()))
      | CBOP_ILLEGAL_VIRTUAL =>
        (internal_error "extensions/Zicbom/zicbom_insts.sail" 153 "unimplemented")
      | CBOP_INVAL_INVAL => (process_clean_inval rs1 CBO_INVAL)
      | CBOP_INVAL_FLUSH => (process_clean_inval rs1 CBO_FLUSH))

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

def execute_CSRReg (csr : (BitVec 12)) (rs1 : regidx) (rd : regidx) (op : csrop) : SailM ExecutionResult := do
  (doCSR csr (← (rX_bits rs1)) rd op ((op == CSRRW) || (bne rs1 zreg)))

def execute_CSRImm (csr : (BitVec 12)) (imm : (BitVec 5)) (rd : regidx) (op : csrop) : SailM ExecutionResult := do
  (doCSR csr (zero_extend (m := 64) imm) rd op ((op == CSRRW) || (imm != (zeros (n := 5)))))

def execute (merge_var : instruction) : SailM ExecutionResult := do
  match merge_var with
  | .LPAD lpl => (execute_LPAD lpl)
  | .CSRReg (csr, rs1, rd, op) => (execute_CSRReg csr rs1 rd op)
  | .CSRImm (csr, imm, rd, op) => (execute_CSRImm csr imm rd op)
  | .ZICBOM (arg0, rs1) => (execute_ZICBOM arg0 rs1)
  | .ZICBOZ rs1 => (execute_ZICBOZ rs1)
  | .ILLEGAL s => (pure (execute_ILLEGAL s))
  | .C_ILLEGAL s => (pure (execute_C_ILLEGAL s))

def assembly_backwards (arg_ : String) : SailM instruction := do
  match arg_ with
  | _ => throw Error.Exit

def assembly_forwards_matches (arg_ : instruction) : Bool :=
  match arg_ with
  | .LPAD lpl => true
  | .CSRImm (csr, imm, rd, op) => true
  | .CSRReg (csr, rs1, rd, op) => true
  | .ZICBOM (cbop, rs1) => true
  | .ZICBOZ rs1 => true
  | .ILLEGAL s => true
  | .C_ILLEGAL s => true

def assembly_backwards_matches (arg_ : String) : SailM Bool := do
  match arg_ with
  | _ => throw Error.Exit

