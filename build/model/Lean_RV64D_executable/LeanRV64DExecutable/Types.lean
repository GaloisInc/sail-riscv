import LeanRV64DExecutable.Flow
import LeanRV64DExecutable.Prelude
import LeanRV64DExecutable.Errors
import LeanRV64DExecutable.Xlen
import LeanRV64DExecutable.Flen
import LeanRV64DExecutable.Extensions
import LeanRV64DExecutable.TypesExt

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

def pagesize_bits := 12

def base_E_enabled := false

def regidx_bit_width := 5

def regidx_bits (app_0 : regidx) : (BitVec (if ( false  : Bool) then 4 else 5)) :=
  let .Regidx b := app_0
  b

def creg2reg_idx (app_0 : cregidx) : regidx :=
  let .Cregidx i := app_0
  (Regidx (zero_extend (m := 5) ((0b1 : (BitVec 1)) ++ i)))

def zreg : regidx := (Regidx (zero_extend (m := 5) (0b00 : (BitVec 2))))

def ra : regidx := (Regidx (zero_extend (m := 5) (0b01 : (BitVec 2))))

def sp : regidx := (Regidx (zero_extend (m := 5) (0b10 : (BitVec 2))))

def undefined_Architecture (_ : Unit) : SailM Architecture := do
  (internal_pick [RV32, RV64, RV128])

/-- Type quantifiers: arg_ : Nat, 0 ≤ arg_ ∧ arg_ ≤ 2 -/
def Architecture_of_num (arg_ : Nat) : Architecture :=
  match arg_ with
  | 0 => RV32
  | 1 => RV64
  | _ => RV128

def num_of_Architecture (arg_ : Architecture) : Int :=
  match arg_ with
  | RV32 => 0
  | RV64 => 1
  | RV128 => 2

def architecture_bits_forwards (arg_ : Architecture) : (BitVec 2) :=
  match arg_ with
  | RV32 => (0b01 : (BitVec 2))
  | RV64 => (0b10 : (BitVec 2))
  | RV128 => (0b11 : (BitVec 2))

def architecture_bits_backwards (arg_ : (BitVec 2)) : SailM Architecture := do
  let b__0 := arg_
  if ((b__0 == (0b01 : (BitVec 2))) : Bool)
  then (pure RV32)
  else
    (do
      if ((b__0 == (0b10 : (BitVec 2))) : Bool)
      then (pure RV64)
      else
        (do
          if ((b__0 == (0b11 : (BitVec 2))) : Bool)
          then (pure RV128)
          else (internal_error "core/types.sail" 61 "architecture(0b00) is invalid")))

def architecture_bits_forwards_matches (arg_ : Architecture) : Bool :=
  match arg_ with
  | RV32 => true
  | RV64 => true
  | RV128 => true

def architecture_bits_backwards_matches (arg_ : (BitVec 2)) : Bool :=
  let b__0 := arg_
  if ((b__0 == (0b01 : (BitVec 2))) : Bool)
  then true
  else
    (if ((b__0 == (0b10 : (BitVec 2))) : Bool)
    then true
    else
      (if ((b__0 == (0b11 : (BitVec 2))) : Bool)
      then true
      else
        (if ((b__0 == (0b00 : (BitVec 2))) : Bool)
        then true
        else false)))

def undefined_Privilege (_ : Unit) : SailM Privilege := do
  (internal_pick [User, VirtualUser, Supervisor, VirtualSupervisor, Machine])

/-- Type quantifiers: arg_ : Nat, 0 ≤ arg_ ∧ arg_ ≤ 4 -/
def Privilege_of_num (arg_ : Nat) : Privilege :=
  match arg_ with
  | 0 => User
  | 1 => VirtualUser
  | 2 => Supervisor
  | 3 => VirtualSupervisor
  | _ => Machine

def num_of_Privilege (arg_ : Privilege) : Int :=
  match arg_ with
  | User => 0
  | VirtualUser => 1
  | Supervisor => 2
  | VirtualSupervisor => 3
  | Machine => 4

def privLevel_bits_forwards (arg_ : ((BitVec 2) × (BitVec 1))) : SailM Privilege := do
  match arg_ with
  | (b__0, 0#1) =>
    (do
      if ((b__0 == (0b00 : (BitVec 2))) : Bool)
      then (pure User)
      else
        (do
          match (b__0, 0#1) with
          | (b__2, 0#1) =>
            (do
              if ((b__2 == (0b01 : (BitVec 2))) : Bool)
              then (pure Supervisor)
              else
                (do
                  match (b__2, 0#1) with
                  | (b__4, 0#1) =>
                    (do
                      if ((b__4 == (0b11 : (BitVec 2))) : Bool)
                      then (pure Machine)
                      else
                        (internal_error "core/types.sail" 78
                          "Invalid privilege level or virtual mode"))
                  | _ =>
                    (internal_error "core/types.sail" 78 "Invalid privilege level or virtual mode")))
          | (b__4, 0#1) =>
            (do
              if ((b__4 == (0b11 : (BitVec 2))) : Bool)
              then (pure Machine)
              else (internal_error "core/types.sail" 78 "Invalid privilege level or virtual mode"))
          | _ => (internal_error "core/types.sail" 78 "Invalid privilege level or virtual mode")))
  | (b__1, 1#1) =>
    (do
      if ((b__1 == (0b00 : (BitVec 2))) : Bool)
      then (pure VirtualUser)
      else
        (do
          match (b__1, 1#1) with
          | (b__3, 1#1) =>
            (do
              if ((b__3 == (0b01 : (BitVec 2))) : Bool)
              then (pure VirtualSupervisor)
              else (internal_error "core/types.sail" 78 "Invalid privilege level or virtual mode"))
          | _ => (internal_error "core/types.sail" 78 "Invalid privilege level or virtual mode")))
  | (b__2, 0#1) =>
    (do
      if ((b__2 == (0b01 : (BitVec 2))) : Bool)
      then (pure Supervisor)
      else
        (do
          match (b__2, 0#1) with
          | (b__4, 0#1) =>
            (do
              if ((b__4 == (0b11 : (BitVec 2))) : Bool)
              then (pure Machine)
              else (internal_error "core/types.sail" 78 "Invalid privilege level or virtual mode"))
          | _ => (internal_error "core/types.sail" 78 "Invalid privilege level or virtual mode")))
  | (b__3, 1#1) =>
    (do
      if ((b__3 == (0b01 : (BitVec 2))) : Bool)
      then (pure VirtualSupervisor)
      else (internal_error "core/types.sail" 78 "Invalid privilege level or virtual mode"))
  | (b__4, 0#1) =>
    (do
      if ((b__4 == (0b11 : (BitVec 2))) : Bool)
      then (pure Machine)
      else (internal_error "core/types.sail" 78 "Invalid privilege level or virtual mode"))
  | _ => (internal_error "core/types.sail" 78 "Invalid privilege level or virtual mode")

def privLevel_bits_backwards (arg_ : Privilege) : ((BitVec 2) × (BitVec 1)) :=
  match arg_ with
  | User => ((0b00 : (BitVec 2)), 0#1)
  | VirtualUser => ((0b00 : (BitVec 2)), 1#1)
  | Supervisor => ((0b01 : (BitVec 2)), 0#1)
  | VirtualSupervisor => ((0b01 : (BitVec 2)), 1#1)
  | Machine => ((0b11 : (BitVec 2)), 0#1)

def privLevel_bits_forwards_matches (arg_ : ((BitVec 2) × (BitVec 1))) : Bool :=
  match arg_ with
  | (b__0, 0#1) =>
    (if ((b__0 == (0b00 : (BitVec 2))) : Bool)
    then true
    else
      (match (b__0, 0#1) with
      | (b__2, 0#1) =>
        (if ((b__2 == (0b01 : (BitVec 2))) : Bool)
        then true
        else
          (match (b__2, 0#1) with
          | (b__4, 0#1) =>
            (if ((b__4 == (0b11 : (BitVec 2))) : Bool)
            then true
            else
              (let g__3 := (b__4, 0#1)
              true))
          | g__3 => true))
      | (b__4, 0#1) =>
        (if ((b__4 == (0b11 : (BitVec 2))) : Bool)
        then true
        else
          (let g__3 := (b__4, 0#1)
          true))
      | g__3 => true))
  | (b__1, 1#1) =>
    (if ((b__1 == (0b00 : (BitVec 2))) : Bool)
    then true
    else
      (match (b__1, 1#1) with
      | (b__3, 1#1) =>
        (if ((b__3 == (0b01 : (BitVec 2))) : Bool)
        then true
        else
          (let g__3 := (b__3, 1#1)
          true))
      | g__3 => true))
  | (b__2, 0#1) =>
    (if ((b__2 == (0b01 : (BitVec 2))) : Bool)
    then true
    else
      (match (b__2, 0#1) with
      | (b__4, 0#1) =>
        (if ((b__4 == (0b11 : (BitVec 2))) : Bool)
        then true
        else
          (let g__3 := (b__4, 0#1)
          true))
      | g__3 => true))
  | (b__3, 1#1) =>
    (if ((b__3 == (0b01 : (BitVec 2))) : Bool)
    then true
    else
      (let g__3 := (b__3, 1#1)
      true))
  | (b__4, 0#1) =>
    (if ((b__4 == (0b11 : (BitVec 2))) : Bool)
    then true
    else
      (let g__3 := (b__4, 0#1)
      true))
  | g__3 => true

def privLevel_bits_backwards_matches (arg_ : Privilege) : Bool :=
  match arg_ with
  | User => true
  | VirtualUser => true
  | Supervisor => true
  | VirtualSupervisor => true
  | Machine => true

def privLevel_to_bits (p : Privilege) : (BitVec 2) :=
  let (p, _) := (privLevel_bits_backwards p)
  p

def Mk_Misa (v : (BitVec 64)) : (BitVec 64) :=
  v

def _update_Misa_MXL (v : (BitVec 64)) (x : (BitVec (64 - 1 - (64 - 2) + 1))) : (BitVec 64) :=
  (Sail.BitVec.updateSubrange v (64 -i 1) (64 -i 2) x)

def Mk_Mstatus (v : (BitVec 64)) : (BitVec 64) :=
  v

def _update_Mstatus_SXL (v : (BitVec 64)) (x : (BitVec 2)) : (BitVec 64) :=
  (Sail.BitVec.updateSubrange v 35 34 x)

def _update_Mstatus_UXL (v : (BitVec 64)) (x : (BitVec 2)) : (BitVec 64) :=
  (Sail.BitVec.updateSubrange v 33 32 x)

def _get_Misa_D (v : (BitVec 64)) : (BitVec 1) :=
  (Sail.BitVec.extractLsb v 3 3)

def _get_Misa_F (v : (BitVec 64)) : (BitVec 1) :=
  (Sail.BitVec.extractLsb v 5 5)

def _get_Misa_S (v : (BitVec 64)) : (BitVec 1) :=
  (Sail.BitVec.extractLsb v 18 18)

def _get_Misa_U (v : (BitVec 64)) : (BitVec 1) :=
  (Sail.BitVec.extractLsb v 20 20)

def _get_Misa_V (v : (BitVec 64)) : (BitVec 1) :=
  (Sail.BitVec.extractLsb v 21 21)

def _get_Mstatus_FS (v : (BitVec 64)) : (BitVec 2) :=
  (Sail.BitVec.extractLsb v 14 13)

def _get_Mstatus_VS (v : (BitVec 64)) : (BitVec 2) :=
  (Sail.BitVec.extractLsb v 10 9)

def Mk_MEnvcfg (v : (BitVec 64)) : (BitVec 64) :=
  v

def _get_MEnvcfg_CBCFE (v : (BitVec 64)) : (BitVec 1) :=
  (Sail.BitVec.extractLsb v 6 6)

def _get_MEnvcfg_CBIE (v : (BitVec 64)) : (BitVec 2) :=
  (Sail.BitVec.extractLsb v 5 4)

def _get_MEnvcfg_CBZE (v : (BitVec 64)) : (BitVec 1) :=
  (Sail.BitVec.extractLsb v 7 7)

def _get_MEnvcfg_FIOM (v : (BitVec 64)) : (BitVec 1) :=
  (Sail.BitVec.extractLsb v 0 0)

def _get_MEnvcfg_LPE (v : (BitVec 64)) : (BitVec 1) :=
  (Sail.BitVec.extractLsb v 2 2)

def _get_MEnvcfg_STCE (v : (BitVec 64)) : (BitVec 1) :=
  (Sail.BitVec.extractLsb v 63 63)

def _update_MEnvcfg_CBCFE (v : (BitVec 64)) (x : (BitVec 1)) : (BitVec 64) :=
  (Sail.BitVec.updateSubrange v 6 6 x)

def _update_MEnvcfg_CBIE (v : (BitVec 64)) (x : (BitVec 2)) : (BitVec 64) :=
  (Sail.BitVec.updateSubrange v 5 4 x)

def _update_MEnvcfg_CBZE (v : (BitVec 64)) (x : (BitVec 1)) : (BitVec 64) :=
  (Sail.BitVec.updateSubrange v 7 7 x)

def _update_MEnvcfg_FIOM (v : (BitVec 64)) (x : (BitVec 1)) : (BitVec 64) :=
  (Sail.BitVec.updateSubrange v 0 0 x)

def _update_MEnvcfg_LPE (v : (BitVec 64)) (x : (BitVec 1)) : (BitVec 64) :=
  (Sail.BitVec.updateSubrange v 2 2 x)

def _update_MEnvcfg_STCE (v : (BitVec 64)) (x : (BitVec 1)) : (BitVec 64) :=
  (Sail.BitVec.updateSubrange v 63 63 x)

def sys_enable_writable_fiom : Bool := true

def Mk_Seccfg (v : (BitVec 64)) : (BitVec 64) :=
  v

def _get_Seccfg_MLPE (v : (BitVec 64)) : (BitVec 1) :=
  (Sail.BitVec.extractLsb v 10 10)

def _get_Seccfg_SSEED (v : (BitVec 64)) : (BitVec 1) :=
  (Sail.BitVec.extractLsb v 9 9)

def _get_Seccfg_USEED (v : (BitVec 64)) : (BitVec 1) :=
  (Sail.BitVec.extractLsb v 8 8)

def _update_Seccfg_MLPE (v : (BitVec 64)) (x : (BitVec 1)) : (BitVec 64) :=
  (Sail.BitVec.updateSubrange v 10 10 x)

def _update_Seccfg_SSEED (v : (BitVec 64)) (x : (BitVec 1)) : (BitVec 64) :=
  (Sail.BitVec.updateSubrange v 9 9 x)

def _update_Seccfg_USEED (v : (BitVec 64)) (x : (BitVec 1)) : (BitVec 64) :=
  (Sail.BitVec.updateSubrange v 8 8 x)

def Mk_SEnvcfg (v : (BitVec 64)) : (BitVec 64) :=
  v

def _get_SEnvcfg_CBCFE (v : (BitVec 64)) : (BitVec 1) :=
  (Sail.BitVec.extractLsb v 6 6)

def _get_SEnvcfg_CBIE (v : (BitVec 64)) : (BitVec 2) :=
  (Sail.BitVec.extractLsb v 5 4)

def _get_SEnvcfg_CBZE (v : (BitVec 64)) : (BitVec 1) :=
  (Sail.BitVec.extractLsb v 7 7)

def _get_SEnvcfg_FIOM (v : (BitVec 64)) : (BitVec 1) :=
  (Sail.BitVec.extractLsb v 0 0)

def _get_SEnvcfg_LPE (v : (BitVec 64)) : (BitVec 1) :=
  (Sail.BitVec.extractLsb v 2 2)

def _update_SEnvcfg_CBCFE (v : (BitVec 64)) (x : (BitVec 1)) : (BitVec 64) :=
  (Sail.BitVec.updateSubrange v 6 6 x)

def _update_SEnvcfg_CBIE (v : (BitVec 64)) (x : (BitVec 2)) : (BitVec 64) :=
  (Sail.BitVec.updateSubrange v 5 4 x)

def _update_SEnvcfg_CBZE (v : (BitVec 64)) (x : (BitVec 1)) : (BitVec 64) :=
  (Sail.BitVec.updateSubrange v 7 7 x)

def _update_SEnvcfg_FIOM (v : (BitVec 64)) (x : (BitVec 1)) : (BitVec 64) :=
  (Sail.BitVec.updateSubrange v 0 0 x)

def _update_SEnvcfg_LPE (v : (BitVec 64)) (x : (BitVec 1)) : (BitVec 64) :=
  (Sail.BitVec.updateSubrange v 2 2 x)


mutual
def currentlyEnabled (merge_var : extension) : SailM Bool := do
  match merge_var with
  | Ext_Zkt => (pure (hartSupports Ext_Zkt))
  | Ext_Zvkt => (pure (hartSupports Ext_Zvkt))
  | Ext_Zvkn => (pure (hartSupports Ext_Zvkn))
  | Ext_Zvknc => (pure (hartSupports Ext_Zvknc))
  | Ext_Zvkng => (pure (hartSupports Ext_Zvkng))
  | Ext_Zvks => (pure (hartSupports Ext_Zvks))
  | Ext_Zvksc => (pure (hartSupports Ext_Zvksc))
  | Ext_Zvksg => (pure (hartSupports Ext_Zvksg))
  | Ext_Sstc => (pure (hartSupports Ext_Sstc))
  | Ext_U =>
    (pure ((hartSupports Ext_U) && (((_get_Misa_U (← readReg misa)) == (0b1 : (BitVec 1))) && (← (currentlyEnabled
              Ext_Zicsr)))))
  | Ext_S =>
    (pure ((hartSupports Ext_S) && (((_get_Misa_S (← readReg misa)) == (0b1 : (BitVec 1))) && (← (currentlyEnabled
              Ext_Zicsr)))))
  | Ext_Svbare => (currentlyEnabled Ext_S)
  | Ext_Sv32 => (pure ((hartSupports Ext_Sv32) && (← (currentlyEnabled Ext_S))))
  | Ext_Sv39 => (pure ((hartSupports Ext_Sv39) && (← (currentlyEnabled Ext_S))))
  | Ext_Sv48 => (pure ((hartSupports Ext_Sv48) && (← (currentlyEnabled Ext_S))))
  | Ext_Sv57 => (pure ((hartSupports Ext_Sv57) && (← (currentlyEnabled Ext_S))))
  | Ext_F =>
    (pure ((hartSupports Ext_F) && (((_get_Misa_F (← readReg misa)) == (0b1 : (BitVec 1))) && (((_get_Mstatus_FS
                (← readReg mstatus)) != (0b00 : (BitVec 2))) && (← (currentlyEnabled Ext_Zicsr))))))
  | Ext_D =>
    (pure ((hartSupports Ext_D) && (((_get_Misa_D (← readReg misa)) == (0b1 : (BitVec 1))) && (((_get_Mstatus_FS
                (← readReg mstatus)) != (0b00 : (BitVec 2))) && ((flen ≥b 64) && (← (currentlyEnabled
                  Ext_Zicsr)))))))
  | Ext_Zfinx => (pure ((hartSupports Ext_Zfinx) && (← (currentlyEnabled Ext_Zicsr))))
  | Ext_Zvl32b => (pure (hartSupports Ext_Zvl32b))
  | Ext_Zvl64b => (pure (hartSupports Ext_Zvl64b))
  | Ext_Zvl128b => (pure (hartSupports Ext_Zvl128b))
  | Ext_Zvl256b => (pure (hartSupports Ext_Zvl256b))
  | Ext_Zvl512b => (pure (hartSupports Ext_Zvl512b))
  | Ext_Zvl1024b => (pure (hartSupports Ext_Zvl1024b))
  | Ext_Zve32x =>
    (pure ((hartSupports Ext_Zve32x) && ((← (currentlyEnabled Ext_Zvl32b)) && (((_get_Mstatus_VS
                (← readReg mstatus)) != (0b00 : (BitVec 2))) && (← (currentlyEnabled Ext_Zicsr))))))
  | Ext_Zve32f =>
    (pure ((hartSupports Ext_Zve32f) && ((← (currentlyEnabled Ext_Zve32x)) && (← (currentlyEnabled
              Ext_F)))))
  | Ext_Zve64x =>
    (pure ((hartSupports Ext_Zve64x) && ((← (currentlyEnabled Ext_Zvl64b)) && (← (currentlyEnabled
              Ext_Zve32x)))))
  | Ext_Zve64f =>
    (pure ((hartSupports Ext_Zve64f) && ((← (currentlyEnabled Ext_Zve64x)) && (← (currentlyEnabled
              Ext_Zve32f)))))
  | Ext_Zve64d =>
    (pure ((hartSupports Ext_Zve64d) && ((← (currentlyEnabled Ext_Zve64f)) && (← (currentlyEnabled
              Ext_D)))))
  | Ext_V =>
    (pure ((hartSupports Ext_V) && (((_get_Misa_V (← readReg misa)) == (0b1 : (BitVec 1))) && ((← (currentlyEnabled
                Ext_Zvl128b)) && (← (currentlyEnabled Ext_Zve64d))))))
  | Ext_Zvfh =>
    (pure ((hartSupports Ext_Zvfh) && ((← (currentlyEnabled Ext_Zve32f)) && (← (currentlyEnabled
              Ext_Zfhmin)))))
  | Ext_Zvfhmin =>
    (pure (((hartSupports Ext_Zvfhmin) && (← (currentlyEnabled Ext_Zve32f))) || (← (currentlyEnabled
            Ext_Zvfh))))
  | Ext_Smcntrpmf => (pure ((hartSupports Ext_Smcntrpmf) && (← (currentlyEnabled Ext_Zicntr))))
  | Ext_Zicfilp =>
    (pure ((← (currentlyEnabled Ext_Zicsr)) && ((hartSupports Ext_Zicfilp) && (← (get_xLPE
              (← readReg cur_privilege))))))
  | Ext_Svnapot => (pure false)
  | Ext_Svpbmt => (pure false)
  | Ext_Svrsw60t59b => (pure ((hartSupports Ext_Svrsw60t59b) && (← (currentlyEnabled Ext_Sv39))))
  | Ext_Zifencei => (pure (hartSupports Ext_Zifencei))
  | _ =>
    (do
      assert false "Pattern match failure at extensions/Zifenci/zifencei_insts.sail:14.0-14.75"
      throw Error.Exit)
termination_by let ext := merge_var; ((currentlyEnabled_measure ext)).toNat
def get_xLPE (p : Privilege) : SailM Bool := do
  match p with
  | Machine => (pure (bool_bits_backwards (_get_Seccfg_MLPE (← readReg mseccfg))))
  | Supervisor => (pure (bool_bits_backwards (_get_MEnvcfg_LPE (← readReg menvcfg))))
  | User =>
    (do
      if ((← (currentlyEnabled Ext_S)) : Bool)
      then (pure (bool_bits_backwards (_get_SEnvcfg_LPE (← readReg senvcfg))))
      else (pure (bool_bits_backwards (_get_MEnvcfg_LPE (← readReg menvcfg)))))
  | VirtualSupervisor =>
    (internal_error "extensions/cfi/zicfilp_regs.sail" 31 "Hypervisor extension not supported")
  | VirtualUser =>
    (internal_error "extensions/cfi/zicfilp_regs.sail" 32 "Hypervisor extension not supported")
termination_by let _ := p; (2).toNat
def legalize_menvcfg (o : (BitVec 64)) (v : (BitVec 64)) : SailM (BitVec 64) := do
  let v := (Mk_MEnvcfg v)
  (pure (_update_MEnvcfg_STCE
      (_update_MEnvcfg_CBIE
        (_update_MEnvcfg_CBCFE
          (_update_MEnvcfg_CBZE
            (_update_MEnvcfg_LPE
              (_update_MEnvcfg_FIOM o
                (if (sys_enable_writable_fiom : Bool)
                then (_get_MEnvcfg_FIOM v)
                else (0b0 : (BitVec 1))))
              (if ((hartSupports Ext_Zicfilp) : Bool)
              then (_get_MEnvcfg_LPE v)
              else (0b0 : (BitVec 1))))
            (← do
              if ((← (currentlyEnabled Ext_Zicboz)) : Bool)
              then (pure (_get_MEnvcfg_CBZE v))
              else (pure (0b0 : (BitVec 1)))))
          (← do
            if ((← (currentlyEnabled Ext_Zicbom)) : Bool)
            then (pure (_get_MEnvcfg_CBCFE v))
            else (pure (0b0 : (BitVec 1)))))
        (← do
          if ((← (currentlyEnabled Ext_Zicbom)) : Bool)
          then
            (if (((_get_MEnvcfg_CBIE v) != (0b10 : (BitVec 2))) : Bool)
            then (pure (_get_MEnvcfg_CBIE v))
            else (pure (0b00 : (BitVec 2))))
          else (pure (0b00 : (BitVec 2)))))
      (← do
        if ((← (currentlyEnabled Ext_Sstc)) : Bool)
        then (pure (_get_MEnvcfg_STCE v))
        else (pure (0b0 : (BitVec 1))))))
def legalize_mseccfg (o : (BitVec 64)) (v : (BitVec 64)) : SailM (BitVec 64) := do
  let sseed_read_only_zero ← do
    (pure ((false : Bool) || ((not (← (currentlyEnabled Ext_S))) || (not
            (← (currentlyEnabled Ext_Zkr))))))
  let useed_read_only_zero ← do
    (pure ((false : Bool) || ((not (← (currentlyEnabled Ext_U))) || (not
            (← (currentlyEnabled Ext_Zkr))))))
  let v := (Mk_Seccfg v)
  (pure (_update_Seccfg_USEED
      (_update_Seccfg_SSEED
        (_update_Seccfg_MLPE o
          (if ((hartSupports Ext_Zicfilp) : Bool)
          then (_get_Seccfg_MLPE v)
          else (0b0 : (BitVec 1))))
        (if (sseed_read_only_zero : Bool)
        then (0b0 : (BitVec 1))
        else (_get_Seccfg_SSEED v)))
      (if (useed_read_only_zero : Bool)
      then (0b0 : (BitVec 1))
      else (_get_Seccfg_USEED v))))
def legalize_senvcfg (o : (BitVec 64)) (v : (BitVec 64)) : SailM (BitVec 64) := do
  let v := (Mk_SEnvcfg v)
  (pure (_update_SEnvcfg_CBIE
      (_update_SEnvcfg_CBCFE
        (_update_SEnvcfg_CBZE
          (_update_SEnvcfg_LPE
            (_update_SEnvcfg_FIOM o
              (if (sys_enable_writable_fiom : Bool)
              then (_get_SEnvcfg_FIOM v)
              else (0b0 : (BitVec 1))))
            (if ((hartSupports Ext_Zicfilp) : Bool)
            then (_get_SEnvcfg_LPE v)
            else (0b0 : (BitVec 1))))
          (← do
            if ((← (currentlyEnabled Ext_Zicboz)) : Bool)
            then (pure (_get_SEnvcfg_CBZE v))
            else (pure (0b0 : (BitVec 1)))))
        (← do
          if ((← (currentlyEnabled Ext_Zicbom)) : Bool)
          then (pure (_get_SEnvcfg_CBCFE v))
          else (pure (0b0 : (BitVec 1)))))
      (← do
        if ((← (currentlyEnabled Ext_Zicbom)) : Bool)
        then
          (if (((_get_SEnvcfg_CBIE v) != (0b10 : (BitVec 2))) : Bool)
          then (pure (_get_SEnvcfg_CBIE v))
          else (pure (0b00 : (BitVec 2))))
        else (pure (0b00 : (BitVec 2))))))
end

def privLevel_to_str (p : Privilege) : SailM String := do
  match p with
  | User => (pure "U")
  | VirtualUser => (pure "VU")
  | Supervisor =>
    (do
      if ((← (currentlyEnabled Ext_H)) : Bool)
      then (pure "HS")
      else (pure "S"))
  | VirtualSupervisor => (pure "VS")
  | Machine => (pure "M")

def accessType_to_str (a : (AccessType Unit)) : String :=
  match a with
  | .Read _ => "R"
  | .Write _ => "W"
  | .ReadWrite (_, _) => "RW"
  | .InstructionFetch () => "X"

def atomic_support_str_backwards (arg_ : String) : SailM AtomicSupport := do
  match arg_ with
  | "AMONone" => (pure AMONone)
  | "AMOSwap" => (pure AMOSwap)
  | "AMOLogical" => (pure AMOLogical)
  | "AMOArithmetic" => (pure AMOArithmetic)
  | "AMOCASW" => (pure AMOCASW)
  | "AMOCASD" => (pure AMOCASD)
  | "AMOCASQ" => (pure AMOCASQ)
  | _ =>
    (do
      assert false "Pattern match failure at unknown location"
      throw Error.Exit)

def atomic_support_str_forwards (arg_ : AtomicSupport) : String :=
  match arg_ with
  | AMONone => "AMONone"
  | AMOSwap => "AMOSwap"
  | AMOLogical => "AMOLogical"
  | AMOArithmetic => "AMOArithmetic"
  | AMOCASW => "AMOCASW"
  | AMOCASD => "AMOCASD"
  | AMOCASQ => "AMOCASQ"

def csr_name_map_forwards (arg_ : (BitVec 12)) : SailM String := do
  let b__0 := arg_
  if ((b__0 == (0x301 : (BitVec 12))) : Bool)
  then (pure "misa")
  else
    (do
      if ((b__0 == (0x300 : (BitVec 12))) : Bool)
      then (pure "mstatus")
      else
        (do
          if ((b__0 == (0x310 : (BitVec 12))) : Bool)
          then (pure "mstatush")
          else
            (do
              if ((b__0 == (0x747 : (BitVec 12))) : Bool)
              then (pure "mseccfg")
              else
                (do
                  if ((b__0 == (0x757 : (BitVec 12))) : Bool)
                  then (pure "mseccfgh")
                  else
                    (do
                      if ((b__0 == (0x30A : (BitVec 12))) : Bool)
                      then (pure "menvcfg")
                      else
                        (do
                          if ((b__0 == (0x31A : (BitVec 12))) : Bool)
                          then (pure "menvcfgh")
                          else
                            (do
                              if ((b__0 == (0x10A : (BitVec 12))) : Bool)
                              then (pure "senvcfg")
                              else
                                (do
                                  if ((b__0 == (0x304 : (BitVec 12))) : Bool)
                                  then (pure "mie")
                                  else
                                    (do
                                      if ((b__0 == (0x344 : (BitVec 12))) : Bool)
                                      then (pure "mip")
                                      else
                                        (do
                                          if ((b__0 == (0x302 : (BitVec 12))) : Bool)
                                          then (pure "medeleg")
                                          else
                                            (do
                                              if ((b__0 == (0x312 : (BitVec 12))) : Bool)
                                              then (pure "medelegh")
                                              else
                                                (do
                                                  if ((b__0 == (0x303 : (BitVec 12))) : Bool)
                                                  then (pure "mideleg")
                                                  else
                                                    (do
                                                      if ((b__0 == (0x342 : (BitVec 12))) : Bool)
                                                      then (pure "mcause")
                                                      else
                                                        (do
                                                          if ((b__0 == (0x343 : (BitVec 12))) : Bool)
                                                          then (pure "mtval")
                                                          else
                                                            (do
                                                              if ((b__0 == (0x340 : (BitVec 12))) : Bool)
                                                              then (pure "mscratch")
                                                              else
                                                                (do
                                                                  if ((b__0 == (0x106 : (BitVec 12))) : Bool)
                                                                  then (pure "scounteren")
                                                                  else
                                                                    (do
                                                                      if ((b__0 == (0x306 : (BitVec 12))) : Bool)
                                                                      then (pure "mcounteren")
                                                                      else
                                                                        (do
                                                                          if ((b__0 == (0x320 : (BitVec 12))) : Bool)
                                                                          then
                                                                            (pure "mcountinhibit")
                                                                          else
                                                                            (do
                                                                              if ((b__0 == (0xF11 : (BitVec 12))) : Bool)
                                                                              then
                                                                                (pure "mvendorid")
                                                                              else
                                                                                (do
                                                                                  if ((b__0 == (0xF12 : (BitVec 12))) : Bool)
                                                                                  then
                                                                                    (pure "marchid")
                                                                                  else
                                                                                    (do
                                                                                      if ((b__0 == (0xF13 : (BitVec 12))) : Bool)
                                                                                      then
                                                                                        (pure "mimpid")
                                                                                      else
                                                                                        (do
                                                                                          if ((b__0 == (0xF14 : (BitVec 12))) : Bool)
                                                                                          then
                                                                                            (pure "mhartid")
                                                                                          else
                                                                                            (do
                                                                                              if ((b__0 == (0xF15 : (BitVec 12))) : Bool)
                                                                                              then
                                                                                                (pure "mconfigptr")
                                                                                              else
                                                                                                (do
                                                                                                  if ((b__0 == (0x100 : (BitVec 12))) : Bool)
                                                                                                  then
                                                                                                    (pure "sstatus")
                                                                                                  else
                                                                                                    (do
                                                                                                      if ((b__0 == (0x144 : (BitVec 12))) : Bool)
                                                                                                      then
                                                                                                        (pure "sip")
                                                                                                      else
                                                                                                        (do
                                                                                                          if ((b__0 == (0x104 : (BitVec 12))) : Bool)
                                                                                                          then
                                                                                                            (pure "sie")
                                                                                                          else
                                                                                                            (do
                                                                                                              if ((b__0 == (0x140 : (BitVec 12))) : Bool)
                                                                                                              then
                                                                                                                (pure "sscratch")
                                                                                                              else
                                                                                                                (do
                                                                                                                  if ((b__0 == (0x142 : (BitVec 12))) : Bool)
                                                                                                                  then
                                                                                                                    (pure "scause")
                                                                                                                  else
                                                                                                                    (do
                                                                                                                      if ((b__0 == (0x143 : (BitVec 12))) : Bool)
                                                                                                                      then
                                                                                                                        (pure "stval")
                                                                                                                      else
                                                                                                                        (do
                                                                                                                          if ((b__0 == (0x7A0 : (BitVec 12))) : Bool)
                                                                                                                          then
                                                                                                                            (pure "tselect")
                                                                                                                          else
                                                                                                                            (do
                                                                                                                              if ((b__0 == (0x7A1 : (BitVec 12))) : Bool)
                                                                                                                              then
                                                                                                                                (pure "tdata1")
                                                                                                                              else
                                                                                                                                (do
                                                                                                                                  if ((b__0 == (0x7A2 : (BitVec 12))) : Bool)
                                                                                                                                  then
                                                                                                                                    (pure "tdata2")
                                                                                                                                  else
                                                                                                                                    (do
                                                                                                                                      if ((b__0 == (0x7A3 : (BitVec 12))) : Bool)
                                                                                                                                      then
                                                                                                                                        (pure "tdata3")
                                                                                                                                      else
                                                                                                                                        (do
                                                                                                                                          if ((b__0 == (0x105 : (BitVec 12))) : Bool)
                                                                                                                                          then
                                                                                                                                            (pure "stvec")
                                                                                                                                          else
                                                                                                                                            (do
                                                                                                                                              if ((b__0 == (0x141 : (BitVec 12))) : Bool)
                                                                                                                                              then
                                                                                                                                                (pure "sepc")
                                                                                                                                              else
                                                                                                                                                (do
                                                                                                                                                  if ((b__0 == (0x305 : (BitVec 12))) : Bool)
                                                                                                                                                  then
                                                                                                                                                    (pure "mtvec")
                                                                                                                                                  else
                                                                                                                                                    (do
                                                                                                                                                      if ((b__0 == (0x341 : (BitVec 12))) : Bool)
                                                                                                                                                      then
                                                                                                                                                        (pure "mepc")
                                                                                                                                                      else
                                                                                                                                                        (do
                                                                                                                                                          if ((b__0 == (0x3A0 : (BitVec 12))) : Bool)
                                                                                                                                                          then
                                                                                                                                                            (pure "pmpcfg0")
                                                                                                                                                          else
                                                                                                                                                            (do
                                                                                                                                                              if ((b__0 == (0x3A1 : (BitVec 12))) : Bool)
                                                                                                                                                              then
                                                                                                                                                                (pure "pmpcfg1")
                                                                                                                                                              else
                                                                                                                                                                (do
                                                                                                                                                                  if ((b__0 == (0x3A2 : (BitVec 12))) : Bool)
                                                                                                                                                                  then
                                                                                                                                                                    (pure "pmpcfg2")
                                                                                                                                                                  else
                                                                                                                                                                    (do
                                                                                                                                                                      if ((b__0 == (0x3A3 : (BitVec 12))) : Bool)
                                                                                                                                                                      then
                                                                                                                                                                        (pure "pmpcfg3")
                                                                                                                                                                      else
                                                                                                                                                                        (do
                                                                                                                                                                          if ((b__0 == (0x3A4 : (BitVec 12))) : Bool)
                                                                                                                                                                          then
                                                                                                                                                                            (pure "pmpcfg4")
                                                                                                                                                                          else
                                                                                                                                                                            (do
                                                                                                                                                                              if ((b__0 == (0x3A5 : (BitVec 12))) : Bool)
                                                                                                                                                                              then
                                                                                                                                                                                (pure "pmpcfg5")
                                                                                                                                                                              else
                                                                                                                                                                                (do
                                                                                                                                                                                  if ((b__0 == (0x3A6 : (BitVec 12))) : Bool)
                                                                                                                                                                                  then
                                                                                                                                                                                    (pure "pmpcfg6")
                                                                                                                                                                                  else
                                                                                                                                                                                    (do
                                                                                                                                                                                      if ((b__0 == (0x3A7 : (BitVec 12))) : Bool)
                                                                                                                                                                                      then
                                                                                                                                                                                        (pure "pmpcfg7")
                                                                                                                                                                                      else
                                                                                                                                                                                        (do
                                                                                                                                                                                          if ((b__0 == (0x3A8 : (BitVec 12))) : Bool)
                                                                                                                                                                                          then
                                                                                                                                                                                            (pure "pmpcfg8")
                                                                                                                                                                                          else
                                                                                                                                                                                            (do
                                                                                                                                                                                              if ((b__0 == (0x3A9 : (BitVec 12))) : Bool)
                                                                                                                                                                                              then
                                                                                                                                                                                                (pure "pmpcfg9")
                                                                                                                                                                                              else
                                                                                                                                                                                                (do
                                                                                                                                                                                                  if ((b__0 == (0x3AA : (BitVec 12))) : Bool)
                                                                                                                                                                                                  then
                                                                                                                                                                                                    (pure "pmpcfg10")
                                                                                                                                                                                                  else
                                                                                                                                                                                                    (do
                                                                                                                                                                                                      if ((b__0 == (0x3AB : (BitVec 12))) : Bool)
                                                                                                                                                                                                      then
                                                                                                                                                                                                        (pure "pmpcfg11")
                                                                                                                                                                                                      else
                                                                                                                                                                                                        (do
                                                                                                                                                                                                          if ((b__0 == (0x3AC : (BitVec 12))) : Bool)
                                                                                                                                                                                                          then
                                                                                                                                                                                                            (pure "pmpcfg12")
                                                                                                                                                                                                          else
                                                                                                                                                                                                            (do
                                                                                                                                                                                                              if ((b__0 == (0x3AD : (BitVec 12))) : Bool)
                                                                                                                                                                                                              then
                                                                                                                                                                                                                (pure "pmpcfg13")
                                                                                                                                                                                                              else
                                                                                                                                                                                                                (do
                                                                                                                                                                                                                  if ((b__0 == (0x3AE : (BitVec 12))) : Bool)
                                                                                                                                                                                                                  then
                                                                                                                                                                                                                    (pure "pmpcfg14")
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                      if ((b__0 == (0x3AF : (BitVec 12))) : Bool)
                                                                                                                                                                                                                      then
                                                                                                                                                                                                                        (pure "pmpcfg15")
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                          if ((b__0 == (0x3B0 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                          then
                                                                                                                                                                                                                            (pure "pmpaddr0")
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                              if ((b__0 == (0x3B1 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                (pure "pmpaddr1")
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                  if ((b__0 == (0x3B2 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                    (pure "pmpaddr2")
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                      if ((b__0 == (0x3B3 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                        (pure "pmpaddr3")
                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                          if ((b__0 == (0x3B4 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                            (pure "pmpaddr4")
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                              if ((b__0 == (0x3B5 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                (pure "pmpaddr5")
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                  if ((b__0 == (0x3B6 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                    (pure "pmpaddr6")
                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                      if ((b__0 == (0x3B7 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                        (pure "pmpaddr7")
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                                          if ((b__0 == (0x3B8 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                            (pure "pmpaddr8")
                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                                              if ((b__0 == (0x3B9 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                (pure "pmpaddr9")
                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                                  if ((b__0 == (0x3BA : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                    (pure "pmpaddr10")
                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                                      if ((b__0 == (0x3BB : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                                        (pure "pmpaddr11")
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                                                          if ((b__0 == (0x3BC : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                                            (pure "pmpaddr12")
                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                                                              if ((b__0 == (0x3BD : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                                (pure "pmpaddr13")
                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                                                  if ((b__0 == (0x3BE : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                                    (pure "pmpaddr14")
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                                                      if ((b__0 == (0x3BF : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                                                        (pure "pmpaddr15")
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                                                                          if ((b__0 == (0x3C0 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                                                            (pure "pmpaddr16")
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                                                                              if ((b__0 == (0x3C1 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                                                (pure "pmpaddr17")
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                                                                  if ((b__0 == (0x3C2 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                                                    (pure "pmpaddr18")
                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                                                                      if ((b__0 == (0x3C3 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                                                                        (pure "pmpaddr19")
                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                                                                                          if ((b__0 == (0x3C4 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                                                                            (pure "pmpaddr20")
                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                                                                                              if ((b__0 == (0x3C5 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                                                                (pure "pmpaddr21")
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                                                                                  if ((b__0 == (0x3C6 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                                                                    (pure "pmpaddr22")
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                                                                                      if ((b__0 == (0x3C7 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                                                                                        (pure "pmpaddr23")
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                                                                                                          if ((b__0 == (0x3C8 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                                                                                            (pure "pmpaddr24")
                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                                                                                                              if ((b__0 == (0x3C9 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                                                                                (pure "pmpaddr25")
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                                                                                                  if ((b__0 == (0x3CA : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                                                                                    (pure "pmpaddr26")
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                                                                                                      if ((b__0 == (0x3CB : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                                                                                                        (pure "pmpaddr27")
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                                                                                                                          if ((b__0 == (0x3CC : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                                                                                                            (pure "pmpaddr28")
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                                                                                                                              if ((b__0 == (0x3CD : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                                                                                                (pure "pmpaddr29")
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                                                                                                                  if ((b__0 == (0x3CE : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                                                                                                    (pure "pmpaddr30")
                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                                                                                                                      if ((b__0 == (0x3CF : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                                                                                                                        (pure "pmpaddr31")
                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                                                                                                                                          if ((b__0 == (0x3D0 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                                                                                                                            (pure "pmpaddr32")
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                                                                                                                                              if ((b__0 == (0x3D1 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                                                                                                                (pure "pmpaddr33")
                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                                                                                                                                  if ((b__0 == (0x3D2 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                                                                                                                    (pure "pmpaddr34")
                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                                                                                                                                      if ((b__0 == (0x3D3 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                                                                                                                                        (pure "pmpaddr35")
                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                                                                                                                                                          if ((b__0 == (0x3D4 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                                                                                                                                            (pure "pmpaddr36")
                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                                                                                                                                                              if ((b__0 == (0x3D5 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                                                                                                                                (pure "pmpaddr37")
                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                                                                                                                                                  if ((b__0 == (0x3D6 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                                                                                                                                    (pure "pmpaddr38")
                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                                                                                                                                                      if ((b__0 == (0x3D7 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                                                                                                                                                        (pure "pmpaddr39")
                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                                                                                                                                                                          if ((b__0 == (0x3D8 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                                                                                                                                                            (pure "pmpaddr40")
                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                                                                                                                                                                              if ((b__0 == (0x3D9 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                                                                                                                                                (pure "pmpaddr41")
                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                                                                                                                                                                  if ((b__0 == (0x3DA : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                                                                                                                                                    (pure "pmpaddr42")
                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                                                                                                                                                                      if ((b__0 == (0x3DB : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                                                                                                                                                                        (pure "pmpaddr43")
                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                                                                                                                                                                                          if ((b__0 == (0x3DC : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                                                                                                                                                                            (pure "pmpaddr44")
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                                                                                                                                                                                              if ((b__0 == (0x3DD : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                                                                                                                                                                (pure "pmpaddr45")
                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                                                                                                                                                                                  if ((b__0 == (0x3DE : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                                                                                                                                                                    (pure "pmpaddr46")
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                                                                                                                                                                                      if ((b__0 == (0x3DF : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                                                                                                                                                                                        (pure "pmpaddr47")
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                                                                                                                                                                                                          if ((b__0 == (0x3E0 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                                                                                                                                                                                            (pure "pmpaddr48")
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                                                                                                                                                                                                              if ((b__0 == (0x3E1 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                                                                                                                                                                                (pure "pmpaddr49")
                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                                                                                                                                                                                                  if ((b__0 == (0x3E2 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                                                                                                                                                                                    (pure "pmpaddr50")
                                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                                                                                                                                                                                                      if ((b__0 == (0x3E3 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                                                                                                                                                                                                        (pure "pmpaddr51")
                                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                                                                                                                                                                                                                          if ((b__0 == (0x3E4 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                                                                                                                                                                                                            (pure "pmpaddr52")
                                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                                                                                                                                                                                                                              if ((b__0 == (0x3E5 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                                                                                                                                                                                                (pure "pmpaddr53")
                                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                  if ((b__0 == (0x3E6 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                                                                                                                                                                                                    (pure "pmpaddr54")
                                                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                      if ((b__0 == (0x3E7 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                                                                                                                                                                                                                        (pure "pmpaddr55")
                                                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                          if ((b__0 == (0x3E8 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                                                                                                                                                                                                                            (pure "pmpaddr56")
                                                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                              if ((b__0 == (0x3E9 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                (pure "pmpaddr57")
                                                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                  if ((b__0 == (0x3EA : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                    (pure "pmpaddr58")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                      if ((b__0 == (0x3EB : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                        (pure "pmpaddr59")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                          if ((b__0 == (0x3EC : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                            (pure "pmpaddr60")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                              if ((b__0 == (0x3ED : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                (pure "pmpaddr61")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  if ((b__0 == (0x3EE : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    (pure "pmpaddr62")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      if ((b__0 == (0x3EF : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        (pure "pmpaddr63")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          if ((b__0 == (0x001 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            (pure "fflags")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              if ((b__0 == (0x002 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                (pure "frm")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  if ((b__0 == (0x003 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    (pure "fcsr")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      if ((b__0 == (0x008 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        (pure "vstart")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          if ((b__0 == (0x009 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            (pure "vxsat")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              if ((b__0 == (0x00A : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                (pure "vxrm")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  if ((b__0 == (0x00F : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    (pure "vcsr")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      if ((b__0 == (0xC20 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        (pure "vl")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          if ((b__0 == (0xC21 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            (pure "vtype")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              if ((b__0 == (0xC22 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                (pure "vlenb")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  if ((b__0 == (0x321 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    (pure "mcyclecfg")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      if ((b__0 == (0x721 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        (pure "mcyclecfgh")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          if ((b__0 == (0x322 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            (pure "minstretcfg")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              if ((b__0 == (0x722 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                (pure "minstretcfgh")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  if ((b__0 == (0x180 : (BitVec 12))) : Bool)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  then
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    (pure "satp")
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    (do
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      assert false "Pattern match failure at unknown location"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      throw Error.Exit)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))

def csr_name (csr : (BitVec 12)) : SailM String := do
  (csr_name_map_forwards csr)

def exceptionType_to_str (e : ExceptionType) : String :=
  match e with
  | .E_Fetch_Addr_Align () => "misaligned-fetch"
  | .E_Fetch_Access_Fault () => "fetch-access-fault"
  | .E_Illegal_Instr () => "illegal-instruction"
  | .E_Breakpoint () => "breakpoint"
  | .E_Load_Addr_Align () => "misaligned-load"
  | .E_Load_Access_Fault () => "load-access-fault"
  | .E_SAMO_Addr_Align () => "misaligned-store/amo"
  | .E_SAMO_Access_Fault () => "store/amo-access-fault"
  | .E_U_EnvCall () => "u-call"
  | .E_S_EnvCall () => "s-call"
  | .E_Reserved_10 () => "reserved-0"
  | .E_M_EnvCall () => "m-call"
  | .E_Fetch_Page_Fault () => "fetch-page-fault"
  | .E_Load_Page_Fault () => "load-page-fault"
  | .E_Reserved_14 () => "reserved-1"
  | .E_SAMO_Page_Fault () => "store/amo-page-fault"
  | .E_Reserved_16 () => "reserved-2"
  | .E_Reserved_17 () => "reserved-3"
  | .E_Software_Check () => "software-check-fault"
  | .E_Extension e => (ext_exc_type_to_str e)

def misaligned_fault_str_backwards (arg_ : String) : SailM misaligned_fault := do
  match arg_ with
  | "NoFault" => (pure NoFault)
  | "AccessFault" => (pure AccessFault)
  | "AlignmentFault" => (pure AlignmentFault)
  | _ =>
    (do
      assert false "Pattern match failure at unknown location"
      throw Error.Exit)

def misaligned_fault_str_forwards (arg_ : misaligned_fault) : String :=
  match arg_ with
  | NoFault => "NoFault"
  | AccessFault => "AccessFault"
  | AlignmentFault => "AlignmentFault"

def reservability_str_forwards (arg_ : Reservability) : String :=
  match arg_ with
  | RsrvNone => "RsrvNone"
  | RsrvNonEventual => "RsrvNonEventual"
  | RsrvEventual => "RsrvEventual"

def pma_attributes_to_str (attr : PMA) : String :=
  (HAppend.hAppend
    (if (attr.cacheable : Bool)
    then " cacheable"
    else "")
    (HAppend.hAppend
      (if (attr.coherent : Bool)
      then " coherent"
      else "")
      (HAppend.hAppend
        (if (attr.executable : Bool)
        then " executable"
        else "")
        (HAppend.hAppend
          (if (attr.readable : Bool)
          then " readable"
          else "")
          (HAppend.hAppend
            (if (attr.writable : Bool)
            then " writable"
            else "")
            (HAppend.hAppend
              (if (attr.read_idempotent : Bool)
              then " read-idempotent"
              else "")
              (HAppend.hAppend
                (if (attr.write_idempotent : Bool)
                then " write-idempotent"
                else "")
                (HAppend.hAppend " misaligned_fault:"
                  (HAppend.hAppend (misaligned_fault_str_forwards attr.misaligned_fault)
                    (HAppend.hAppend " "
                      (HAppend.hAppend (reservability_str_forwards attr.reservability)
                        (if (attr.supports_cbo_zero : Bool)
                        then " supports_cbo_zero"
                        else ""))))))))))))

def pma_region_to_str (region : PMA_Region) : String :=
  (HAppend.hAppend "base: "
    (HAppend.hAppend (BitVec.toFormatted region.base)
      (HAppend.hAppend " size: "
        (HAppend.hAppend (BitVec.toFormatted region.size) (pma_attributes_to_str region.attributes)))))

def ptw_error_to_str (e : PTW_Error) : String :=
  match e with
  | .PTW_Invalid_Addr () => "invalid-source-addr"
  | .PTW_Access () => "mem-access-error"
  | .PTW_Invalid_PTE () => "invalid-pte"
  | .PTW_No_Permission () => "no-permission"
  | .PTW_Misaligned () => "misaligned-superpage"
  | .PTW_PTE_Update () => "pte-update-needed"
  | .PTW_Ext_Error e => "extension-error"

def reservability_str_backwards (arg_ : String) : SailM Reservability := do
  match arg_ with
  | "RsrvNone" => (pure RsrvNone)
  | "RsrvNonEventual" => (pure RsrvNonEventual)
  | "RsrvEventual" => (pure RsrvEventual)
  | _ =>
    (do
      assert false "Pattern match failure at unknown location"
      throw Error.Exit)

def wait_name_backwards (arg_ : String) : SailM WaitReason := do
  match arg_ with
  | "WAIT-WFI" => (pure WAIT_WFI)
  | "WAIT-WRS-STO" => (pure WAIT_WRS_STO)
  | "WAIT-WRS-NTO" => (pure WAIT_WRS_NTO)
  | _ =>
    (do
      assert false "Pattern match failure at unknown location"
      throw Error.Exit)

def wait_name_forwards (arg_ : WaitReason) : String :=
  match arg_ with
  | WAIT_WFI => "WAIT-WFI"
  | WAIT_WRS_STO => "WAIT-WRS-STO"
  | WAIT_WRS_NTO => "WAIT-WRS-NTO"

/-- Type quantifiers: k_a : Type -/
def is_load_store (ac : (AccessType k_a)) : Bool :=
  match ac with
  | .Read _ => true
  | .Write _ => true
  | .ReadWrite _ => true
  | .InstructionFetch _ => false

def undefined_InterruptType (_ : Unit) : SailM InterruptType := do
  (internal_pick
    [I_U_Software, I_S_Software, I_M_Software, I_U_Timer, I_S_Timer, I_M_Timer, I_U_External, I_S_External, I_M_External])

/-- Type quantifiers: arg_ : Nat, 0 ≤ arg_ ∧ arg_ ≤ 8 -/
def InterruptType_of_num (arg_ : Nat) : InterruptType :=
  match arg_ with
  | 0 => I_U_Software
  | 1 => I_S_Software
  | 2 => I_M_Software
  | 3 => I_U_Timer
  | 4 => I_S_Timer
  | 5 => I_M_Timer
  | 6 => I_U_External
  | 7 => I_S_External
  | _ => I_M_External

def num_of_InterruptType (arg_ : InterruptType) : Int :=
  match arg_ with
  | I_U_Software => 0
  | I_S_Software => 1
  | I_M_Software => 2
  | I_U_Timer => 3
  | I_S_Timer => 4
  | I_M_Timer => 5
  | I_U_External => 6
  | I_S_External => 7
  | I_M_External => 8

def interruptType_bits_forwards (arg_ : InterruptType) : (BitVec 6) :=
  match arg_ with
  | I_U_Software => (0b000000 : (BitVec 6))
  | I_S_Software => (0b000001 : (BitVec 6))
  | I_M_Software => (0b000011 : (BitVec 6))
  | I_U_Timer => (0b000100 : (BitVec 6))
  | I_S_Timer => (0b000101 : (BitVec 6))
  | I_M_Timer => (0b000111 : (BitVec 6))
  | I_U_External => (0b001000 : (BitVec 6))
  | I_S_External => (0b001001 : (BitVec 6))
  | I_M_External => (0b001011 : (BitVec 6))

def interruptType_bits_backwards (arg_ : (BitVec 6)) : SailM InterruptType := do
  let b__0 := arg_
  if ((b__0 == (0b000000 : (BitVec 6))) : Bool)
  then (pure I_U_Software)
  else
    (do
      if ((b__0 == (0b000001 : (BitVec 6))) : Bool)
      then (pure I_S_Software)
      else
        (do
          if ((b__0 == (0b000011 : (BitVec 6))) : Bool)
          then (pure I_M_Software)
          else
            (do
              if ((b__0 == (0b000100 : (BitVec 6))) : Bool)
              then (pure I_U_Timer)
              else
                (do
                  if ((b__0 == (0b000101 : (BitVec 6))) : Bool)
                  then (pure I_S_Timer)
                  else
                    (do
                      if ((b__0 == (0b000111 : (BitVec 6))) : Bool)
                      then (pure I_M_Timer)
                      else
                        (do
                          if ((b__0 == (0b001000 : (BitVec 6))) : Bool)
                          then (pure I_U_External)
                          else
                            (do
                              if ((b__0 == (0b001001 : (BitVec 6))) : Bool)
                              then (pure I_S_External)
                              else
                                (do
                                  if ((b__0 == (0b001011 : (BitVec 6))) : Bool)
                                  then (pure I_M_External)
                                  else
                                    (do
                                      assert false "Pattern match failure at unknown location"
                                      throw Error.Exit)))))))))

def interruptType_bits_forwards_matches (arg_ : InterruptType) : Bool :=
  match arg_ with
  | I_U_Software => true
  | I_S_Software => true
  | I_M_Software => true
  | I_U_Timer => true
  | I_S_Timer => true
  | I_M_Timer => true
  | I_U_External => true
  | I_S_External => true
  | I_M_External => true

def interruptType_bits_backwards_matches (arg_ : (BitVec 6)) : Bool :=
  let b__0 := arg_
  if ((b__0 == (0b000000 : (BitVec 6))) : Bool)
  then true
  else
    (if ((b__0 == (0b000001 : (BitVec 6))) : Bool)
    then true
    else
      (if ((b__0 == (0b000011 : (BitVec 6))) : Bool)
      then true
      else
        (if ((b__0 == (0b000100 : (BitVec 6))) : Bool)
        then true
        else
          (if ((b__0 == (0b000101 : (BitVec 6))) : Bool)
          then true
          else
            (if ((b__0 == (0b000111 : (BitVec 6))) : Bool)
            then true
            else
              (if ((b__0 == (0b001000 : (BitVec 6))) : Bool)
              then true
              else
                (if ((b__0 == (0b001001 : (BitVec 6))) : Bool)
                then true
                else
                  (if ((b__0 == (0b001011 : (BitVec 6))) : Bool)
                  then true
                  else false))))))))

def exceptionType_bits_forwards (arg_ : ExceptionType) : (BitVec 6) :=
  match arg_ with
  | .E_Fetch_Addr_Align () => (0b000000 : (BitVec 6))
  | .E_Fetch_Access_Fault () => (0b000001 : (BitVec 6))
  | .E_Illegal_Instr () => (0b000010 : (BitVec 6))
  | .E_Breakpoint () => (0b000011 : (BitVec 6))
  | .E_Load_Addr_Align () => (0b000100 : (BitVec 6))
  | .E_Load_Access_Fault () => (0b000101 : (BitVec 6))
  | .E_SAMO_Addr_Align () => (0b000110 : (BitVec 6))
  | .E_SAMO_Access_Fault () => (0b000111 : (BitVec 6))
  | .E_U_EnvCall () => (0b001000 : (BitVec 6))
  | .E_S_EnvCall () => (0b001001 : (BitVec 6))
  | .E_Reserved_10 () => (0b001010 : (BitVec 6))
  | .E_M_EnvCall () => (0b001011 : (BitVec 6))
  | .E_Fetch_Page_Fault () => (0b001100 : (BitVec 6))
  | .E_Load_Page_Fault () => (0b001101 : (BitVec 6))
  | .E_Reserved_14 () => (0b001110 : (BitVec 6))
  | .E_SAMO_Page_Fault () => (0b001111 : (BitVec 6))
  | .E_Reserved_16 () => (0b010000 : (BitVec 6))
  | .E_Reserved_17 () => (0b010001 : (BitVec 6))
  | .E_Software_Check () => (0b010010 : (BitVec 6))
  | .E_Extension e => (ext_exc_type_bits_forwards e)

def exceptionType_bits_backwards (arg_ : (BitVec 6)) : SailM ExceptionType := do
  let head_exp_ := arg_
  match (← do
    let b__0 := head_exp_
    if ((b__0 == (0b000000 : (BitVec 6))) : Bool)
    then (pure (some (E_Fetch_Addr_Align ())))
    else
      (do
        if ((b__0 == (0b000001 : (BitVec 6))) : Bool)
        then (pure (some (E_Fetch_Access_Fault ())))
        else
          (do
            if ((b__0 == (0b000010 : (BitVec 6))) : Bool)
            then (pure (some (E_Illegal_Instr ())))
            else
              (do
                if ((b__0 == (0b000011 : (BitVec 6))) : Bool)
                then (pure (some (E_Breakpoint ())))
                else
                  (do
                    if ((b__0 == (0b000100 : (BitVec 6))) : Bool)
                    then (pure (some (E_Load_Addr_Align ())))
                    else
                      (do
                        if ((b__0 == (0b000101 : (BitVec 6))) : Bool)
                        then (pure (some (E_Load_Access_Fault ())))
                        else
                          (do
                            if ((b__0 == (0b000110 : (BitVec 6))) : Bool)
                            then (pure (some (E_SAMO_Addr_Align ())))
                            else
                              (do
                                if ((b__0 == (0b000111 : (BitVec 6))) : Bool)
                                then (pure (some (E_SAMO_Access_Fault ())))
                                else
                                  (do
                                    if ((b__0 == (0b001000 : (BitVec 6))) : Bool)
                                    then (pure (some (E_U_EnvCall ())))
                                    else
                                      (do
                                        if ((b__0 == (0b001001 : (BitVec 6))) : Bool)
                                        then (pure (some (E_S_EnvCall ())))
                                        else
                                          (do
                                            if ((b__0 == (0b001010 : (BitVec 6))) : Bool)
                                            then (pure (some (E_Reserved_10 ())))
                                            else
                                              (do
                                                if ((b__0 == (0b001011 : (BitVec 6))) : Bool)
                                                then (pure (some (E_M_EnvCall ())))
                                                else
                                                  (do
                                                    if ((b__0 == (0b001100 : (BitVec 6))) : Bool)
                                                    then (pure (some (E_Fetch_Page_Fault ())))
                                                    else
                                                      (do
                                                        if ((b__0 == (0b001101 : (BitVec 6))) : Bool)
                                                        then (pure (some (E_Load_Page_Fault ())))
                                                        else
                                                          (do
                                                            if ((b__0 == (0b001110 : (BitVec 6))) : Bool)
                                                            then (pure (some (E_Reserved_14 ())))
                                                            else
                                                              (do
                                                                if ((b__0 == (0b001111 : (BitVec 6))) : Bool)
                                                                then
                                                                  (pure (some (E_SAMO_Page_Fault ())))
                                                                else
                                                                  (do
                                                                    if ((b__0 == (0b010000 : (BitVec 6))) : Bool)
                                                                    then
                                                                      (pure (some (E_Reserved_16 ())))
                                                                    else
                                                                      (do
                                                                        if ((b__0 == (0b010001 : (BitVec 6))) : Bool)
                                                                        then
                                                                          (pure (some
                                                                              (E_Reserved_17 ())))
                                                                        else
                                                                          (do
                                                                            if ((b__0 == (0b010010 : (BitVec 6))) : Bool)
                                                                            then
                                                                              (pure (some
                                                                                  (E_Software_Check
                                                                                    ())))
                                                                            else
                                                                              (do
                                                                                if ((ext_exc_type_bits_backwards_matches
                                                                                     b__0) : Bool)
                                                                                then
                                                                                  (do
                                                                                    match (← (ext_exc_type_bits_backwards
                                                                                        b__0)) with
                                                                                    | e =>
                                                                                      (pure (some
                                                                                          (E_Extension
                                                                                            e))))
                                                                                else (pure none))))))))))))))))))))) with
  | .some result => (pure result)
  | _ =>
    (do
      assert false "Pattern match failure at unknown location"
      throw Error.Exit)

def exceptionType_bits_forwards_matches (arg_ : ExceptionType) : Bool :=
  match arg_ with
  | .E_Fetch_Addr_Align () => true
  | .E_Fetch_Access_Fault () => true
  | .E_Illegal_Instr () => true
  | .E_Breakpoint () => true
  | .E_Load_Addr_Align () => true
  | .E_Load_Access_Fault () => true
  | .E_SAMO_Addr_Align () => true
  | .E_SAMO_Access_Fault () => true
  | .E_U_EnvCall () => true
  | .E_S_EnvCall () => true
  | .E_Reserved_10 () => true
  | .E_M_EnvCall () => true
  | .E_Fetch_Page_Fault () => true
  | .E_Load_Page_Fault () => true
  | .E_Reserved_14 () => true
  | .E_SAMO_Page_Fault () => true
  | .E_Reserved_16 () => true
  | .E_Reserved_17 () => true
  | .E_Software_Check () => true
  | .E_Extension e => true

def exceptionType_bits_backwards_matches (arg_ : (BitVec 6)) : SailM Bool := do
  let head_exp_ := arg_
  match (← do
    let b__0 := head_exp_
    if ((b__0 == (0b000000 : (BitVec 6))) : Bool)
    then (pure (some true))
    else
      (do
        if ((b__0 == (0b000001 : (BitVec 6))) : Bool)
        then (pure (some true))
        else
          (do
            if ((b__0 == (0b000010 : (BitVec 6))) : Bool)
            then (pure (some true))
            else
              (do
                if ((b__0 == (0b000011 : (BitVec 6))) : Bool)
                then (pure (some true))
                else
                  (do
                    if ((b__0 == (0b000100 : (BitVec 6))) : Bool)
                    then (pure (some true))
                    else
                      (do
                        if ((b__0 == (0b000101 : (BitVec 6))) : Bool)
                        then (pure (some true))
                        else
                          (do
                            if ((b__0 == (0b000110 : (BitVec 6))) : Bool)
                            then (pure (some true))
                            else
                              (do
                                if ((b__0 == (0b000111 : (BitVec 6))) : Bool)
                                then (pure (some true))
                                else
                                  (do
                                    if ((b__0 == (0b001000 : (BitVec 6))) : Bool)
                                    then (pure (some true))
                                    else
                                      (do
                                        if ((b__0 == (0b001001 : (BitVec 6))) : Bool)
                                        then (pure (some true))
                                        else
                                          (do
                                            if ((b__0 == (0b001010 : (BitVec 6))) : Bool)
                                            then (pure (some true))
                                            else
                                              (do
                                                if ((b__0 == (0b001011 : (BitVec 6))) : Bool)
                                                then (pure (some true))
                                                else
                                                  (do
                                                    if ((b__0 == (0b001100 : (BitVec 6))) : Bool)
                                                    then (pure (some true))
                                                    else
                                                      (do
                                                        if ((b__0 == (0b001101 : (BitVec 6))) : Bool)
                                                        then (pure (some true))
                                                        else
                                                          (do
                                                            if ((b__0 == (0b001110 : (BitVec 6))) : Bool)
                                                            then (pure (some true))
                                                            else
                                                              (do
                                                                if ((b__0 == (0b001111 : (BitVec 6))) : Bool)
                                                                then (pure (some true))
                                                                else
                                                                  (do
                                                                    if ((b__0 == (0b010000 : (BitVec 6))) : Bool)
                                                                    then (pure (some true))
                                                                    else
                                                                      (do
                                                                        if ((b__0 == (0b010001 : (BitVec 6))) : Bool)
                                                                        then (pure (some true))
                                                                        else
                                                                          (do
                                                                            if ((b__0 == (0b010010 : (BitVec 6))) : Bool)
                                                                            then (pure (some true))
                                                                            else
                                                                              (do
                                                                                if ((ext_exc_type_bits_backwards_matches
                                                                                     b__0) : Bool)
                                                                                then
                                                                                  (do
                                                                                    match (← (ext_exc_type_bits_backwards
                                                                                        b__0)) with
                                                                                    | e =>
                                                                                      (pure (some
                                                                                          true)))
                                                                                else (pure none))))))))))))))))))))) with
  | .some result => (pure result)
  | none =>
    (match head_exp_ with
    | _ => (pure false))

def undefined_SWCheckCodes (_ : Unit) : SailM SWCheckCodes := do
  (internal_pick [LANDING_PAD_FAULT])

/-- Type quantifiers: arg_ : Nat, 0 ≤ arg_ ∧ arg_ ≤ 0 -/
def SWCheckCodes_of_num (arg_ : Nat) : SWCheckCodes :=
  match arg_ with
  | _ => LANDING_PAD_FAULT

def num_of_SWCheckCodes (arg_ : SWCheckCodes) : Int :=
  match arg_ with
  | LANDING_PAD_FAULT => 0

def sw_check_code_to_bits (c : SWCheckCodes) : (BitVec 64) :=
  match c with
  | LANDING_PAD_FAULT => (zero_extend (m := 64) (0b010 : (BitVec 3)))

def undefined_TrapVectorMode (_ : Unit) : SailM TrapVectorMode := do
  (internal_pick [TV_Direct, TV_Vector, TV_Reserved])

/-- Type quantifiers: arg_ : Nat, 0 ≤ arg_ ∧ arg_ ≤ 2 -/
def TrapVectorMode_of_num (arg_ : Nat) : TrapVectorMode :=
  match arg_ with
  | 0 => TV_Direct
  | 1 => TV_Vector
  | _ => TV_Reserved

def num_of_TrapVectorMode (arg_ : TrapVectorMode) : Int :=
  match arg_ with
  | TV_Direct => 0
  | TV_Vector => 1
  | TV_Reserved => 2

def trapVectorMode_of_bits (m : (BitVec 2)) : TrapVectorMode :=
  let b__0 := m
  if ((b__0 == (0b00 : (BitVec 2))) : Bool)
  then TV_Direct
  else
    (if ((b__0 == (0b01 : (BitVec 2))) : Bool)
    then TV_Vector
    else TV_Reserved)

def undefined_xRET_type (_ : Unit) : SailM xRET_type := do
  (internal_pick [mRET, sRET])

/-- Type quantifiers: arg_ : Nat, 0 ≤ arg_ ∧ arg_ ≤ 1 -/
def xRET_type_of_num (arg_ : Nat) : xRET_type :=
  match arg_ with
  | 0 => mRET
  | _ => sRET

def num_of_xRET_type (arg_ : xRET_type) : Int :=
  match arg_ with
  | mRET => 0
  | sRET => 1

def undefined_ExtStatus (_ : Unit) : SailM ExtStatus := do
  (internal_pick [Off, Initial, Clean, Dirty])

/-- Type quantifiers: arg_ : Nat, 0 ≤ arg_ ∧ arg_ ≤ 3 -/
def ExtStatus_of_num (arg_ : Nat) : ExtStatus :=
  match arg_ with
  | 0 => Off
  | 1 => Initial
  | 2 => Clean
  | _ => Dirty

def num_of_ExtStatus (arg_ : ExtStatus) : Int :=
  match arg_ with
  | Off => 0
  | Initial => 1
  | Clean => 2
  | Dirty => 3

def extStatus_bits_forwards (arg_ : ExtStatus) : (BitVec 2) :=
  match arg_ with
  | Off => (0b00 : (BitVec 2))
  | Initial => (0b01 : (BitVec 2))
  | Clean => (0b10 : (BitVec 2))
  | Dirty => (0b11 : (BitVec 2))

def extStatus_bits_backwards (arg_ : (BitVec 2)) : ExtStatus :=
  let b__0 := arg_
  if ((b__0 == (0b00 : (BitVec 2))) : Bool)
  then Off
  else
    (if ((b__0 == (0b01 : (BitVec 2))) : Bool)
    then Initial
    else
      (if ((b__0 == (0b10 : (BitVec 2))) : Bool)
      then Clean
      else Dirty))

def extStatus_bits_forwards_matches (arg_ : ExtStatus) : Bool :=
  match arg_ with
  | Off => true
  | Initial => true
  | Clean => true
  | Dirty => true

def extStatus_bits_backwards_matches (arg_ : (BitVec 2)) : Bool :=
  let b__0 := arg_
  if ((b__0 == (0b00 : (BitVec 2))) : Bool)
  then true
  else
    (if ((b__0 == (0b01 : (BitVec 2))) : Bool)
    then true
    else
      (if ((b__0 == (0b10 : (BitVec 2))) : Bool)
      then true
      else
        (if ((b__0 == (0b11 : (BitVec 2))) : Bool)
        then true
        else false)))

def extStatus_to_bits (e : ExtStatus) : (BitVec 2) :=
  (extStatus_bits_forwards e)

def extStatus_of_bits (b : (BitVec 2)) : ExtStatus :=
  (extStatus_bits_backwards b)

def undefined_SATPMode (_ : Unit) : SailM SATPMode := do
  (internal_pick [Bare, Sv32, Sv39, Sv48, Sv57])

/-- Type quantifiers: arg_ : Nat, 0 ≤ arg_ ∧ arg_ ≤ 4 -/
def SATPMode_of_num (arg_ : Nat) : SATPMode :=
  match arg_ with
  | 0 => Bare
  | 1 => Sv32
  | 2 => Sv39
  | 3 => Sv48
  | _ => Sv57

def num_of_SATPMode (arg_ : SATPMode) : Int :=
  match arg_ with
  | Bare => 0
  | Sv32 => 1
  | Sv39 => 2
  | Sv48 => 3
  | Sv57 => 4

def satpMode_of_bits (a : Architecture) (m : (BitVec 4)) : (Option SATPMode) :=
  match (a, m) with
  | (g__2, b__0) =>
    (if ((b__0 == (0x0 : (BitVec 4))) : Bool)
    then (some Bare)
    else
      (match (g__2, b__0) with
      | (RV32, b__0) =>
        (if ((b__0 == (0x1 : (BitVec 4))) : Bool)
        then (some Sv32)
        else
          (match (RV32, b__0) with
          | (_, _) => none))
      | (RV64, b__0) =>
        (if ((b__0 == (0x8 : (BitVec 4))) : Bool)
        then (some Sv39)
        else
          (if ((b__0 == (0x9 : (BitVec 4))) : Bool)
          then (some Sv48)
          else
            (if ((b__0 == (0xA : (BitVec 4))) : Bool)
            then (some Sv57)
            else
              (match (RV64, b__0) with
              | (_, _) => none))))
      | (_, _) => none))

def undefined_WaitReason (_ : Unit) : SailM WaitReason := do
  (internal_pick [WAIT_WFI, WAIT_WRS_STO, WAIT_WRS_NTO])

/-- Type quantifiers: arg_ : Nat, 0 ≤ arg_ ∧ arg_ ≤ 2 -/
def WaitReason_of_num (arg_ : Nat) : WaitReason :=
  match arg_ with
  | 0 => WAIT_WFI
  | 1 => WAIT_WRS_STO
  | _ => WAIT_WRS_NTO

def num_of_WaitReason (arg_ : WaitReason) : Int :=
  match arg_ with
  | WAIT_WFI => 0
  | WAIT_WRS_STO => 1
  | WAIT_WRS_NTO => 2

def wait_name_forwards_matches (arg_ : WaitReason) : Bool :=
  match arg_ with
  | WAIT_WFI => true
  | WAIT_WRS_STO => true
  | WAIT_WRS_NTO => true

def wait_name_backwards_matches (arg_ : String) : Bool :=
  match arg_ with
  | "WAIT-WFI" => true
  | "WAIT-WRS-STO" => true
  | "WAIT-WRS-NTO" => true
  | _ => false

/-- Type quantifiers: arg_ : Nat, arg_ ∈ {1, 2, 4, 8} -/
def width_enc_forwards (arg_ : Nat) : (BitVec 2) :=
  match arg_ with
  | 1 => (0b00 : (BitVec 2))
  | 2 => (0b01 : (BitVec 2))
  | 4 => (0b10 : (BitVec 2))
  | _ => (0b11 : (BitVec 2))

def width_enc_backwards (arg_ : (BitVec 2)) : Int :=
  let b__0 := arg_
  if ((b__0 == (0b00 : (BitVec 2))) : Bool)
  then 1
  else
    (if ((b__0 == (0b01 : (BitVec 2))) : Bool)
    then 2
    else
      (if ((b__0 == (0b10 : (BitVec 2))) : Bool)
      then 4
      else 8))

/-- Type quantifiers: arg_ : Nat, arg_ ∈ {1, 2, 4, 8} -/
def width_enc_forwards_matches (arg_ : Nat) : Bool :=
  match arg_ with
  | 1 => true
  | 2 => true
  | 4 => true
  | 8 => true
  | _ => false

def width_enc_backwards_matches (arg_ : (BitVec 2)) : Bool :=
  let b__0 := arg_
  if ((b__0 == (0b00 : (BitVec 2))) : Bool)
  then true
  else
    (if ((b__0 == (0b01 : (BitVec 2))) : Bool)
    then true
    else
      (if ((b__0 == (0b10 : (BitVec 2))) : Bool)
      then true
      else
        (if ((b__0 == (0b11 : (BitVec 2))) : Bool)
        then true
        else false)))

/-- Type quantifiers: arg_ : Nat, arg_ ∈ {1, 2, 4, 8} -/
def width_mnemonic_forwards (arg_ : Nat) : String :=
  match arg_ with
  | 1 => "b"
  | 2 => "h"
  | 4 => "w"
  | _ => "d"

def width_mnemonic_backwards (arg_ : String) : SailM Int := do
  match arg_ with
  | "b" => (pure 1)
  | "h" => (pure 2)
  | "w" => (pure 4)
  | "d" => (pure 8)
  | _ =>
    (do
      assert false "Pattern match failure at unknown location"
      throw Error.Exit)

/-- Type quantifiers: arg_ : Nat, arg_ ∈ {1, 2, 4, 8} -/
def width_mnemonic_forwards_matches (arg_ : Nat) : Bool :=
  match arg_ with
  | 1 => true
  | 2 => true
  | 4 => true
  | 8 => true
  | _ => false

def width_mnemonic_backwards_matches (arg_ : String) : Bool :=
  match arg_ with
  | "b" => true
  | "h" => true
  | "w" => true
  | "d" => true
  | _ => false

/-- Type quantifiers: arg_ : Nat, arg_ ∈ {1, 2, 4, 8, 16} -/
def width_enc_wide_forwards (arg_ : Nat) : (BitVec 3) :=
  match arg_ with
  | 1 => (0b000 : (BitVec 3))
  | 2 => (0b001 : (BitVec 3))
  | 4 => (0b010 : (BitVec 3))
  | 8 => (0b011 : (BitVec 3))
  | _ => (0b100 : (BitVec 3))

def width_enc_wide_backwards (arg_ : (BitVec 3)) : SailM Int := do
  let b__0 := arg_
  if ((b__0 == (0b000 : (BitVec 3))) : Bool)
  then (pure 1)
  else
    (do
      if ((b__0 == (0b001 : (BitVec 3))) : Bool)
      then (pure 2)
      else
        (do
          if ((b__0 == (0b010 : (BitVec 3))) : Bool)
          then (pure 4)
          else
            (do
              if ((b__0 == (0b011 : (BitVec 3))) : Bool)
              then (pure 8)
              else
                (do
                  if ((b__0 == (0b100 : (BitVec 3))) : Bool)
                  then (pure 16)
                  else
                    (do
                      assert false "Pattern match failure at unknown location"
                      throw Error.Exit)))))

/-- Type quantifiers: arg_ : Nat, arg_ ∈ {1, 2, 4, 8, 16} -/
def width_enc_wide_forwards_matches (arg_ : Nat) : Bool :=
  match arg_ with
  | 1 => true
  | 2 => true
  | 4 => true
  | 8 => true
  | 16 => true
  | _ => false

def width_enc_wide_backwards_matches (arg_ : (BitVec 3)) : Bool :=
  let b__0 := arg_
  if ((b__0 == (0b000 : (BitVec 3))) : Bool)
  then true
  else
    (if ((b__0 == (0b001 : (BitVec 3))) : Bool)
    then true
    else
      (if ((b__0 == (0b010 : (BitVec 3))) : Bool)
      then true
      else
        (if ((b__0 == (0b011 : (BitVec 3))) : Bool)
        then true
        else
          (if ((b__0 == (0b100 : (BitVec 3))) : Bool)
          then true
          else false))))

/-- Type quantifiers: arg_ : Nat, arg_ ∈ {1, 2, 4, 8, 16} -/
def width_mnemonic_wide_forwards (arg_ : Nat) : String :=
  match arg_ with
  | 1 => "b"
  | 2 => "h"
  | 4 => "w"
  | 8 => "d"
  | _ => "q"

def width_mnemonic_wide_backwards (arg_ : String) : SailM Int := do
  match arg_ with
  | "b" => (pure 1)
  | "h" => (pure 2)
  | "w" => (pure 4)
  | "d" => (pure 8)
  | "q" => (pure 16)
  | _ =>
    (do
      assert false "Pattern match failure at unknown location"
      throw Error.Exit)

/-- Type quantifiers: arg_ : Nat, arg_ ∈ {1, 2, 4, 8, 16} -/
def width_mnemonic_wide_forwards_matches (arg_ : Nat) : Bool :=
  match arg_ with
  | 1 => true
  | 2 => true
  | 4 => true
  | 8 => true
  | 16 => true
  | _ => false

def width_mnemonic_wide_backwards_matches (arg_ : String) : Bool :=
  match arg_ with
  | "b" => true
  | "h" => true
  | "w" => true
  | "d" => true
  | "q" => true
  | _ => false

